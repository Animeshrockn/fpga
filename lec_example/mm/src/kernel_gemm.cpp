#include "kernel_gemm.h"

void load(int flag, int i, int j, int k, TYPE_WIDER local_A[T][T/WIDTH_FACTOR], TYPE_WIDER local_B[T][T/WIDTH_FACTOR], TYPE_WIDER A[NI*NK/WIDTH_FACTOR], TYPE_WIDER B[NK*NJ/WIDTH_FACTOR]){
#pragma HLS INLINE off
    int ii, jj, kk;
    if(flag){
        LOAD_A_LOOP: for(int ii = 0; ii < tile_size; ii++) {
            for(int kk = 0; kk < tile_size/WIDTH_FACTOR; kk++) {
		#pragma HLS PIPELINE II = 1
                local_A[ii][kk] = A[(i+ii)*col_size/WIDTH_FACTOR + (k/WIDTH_FACTOR+kk)];
	    }
	}

        LOAD_B_LOOP: for(int kk = 0; kk < tile_size; kk++) {
            for(int jj = 0; jj < tile_size/WIDTH_FACTOR; jj++) {
		#pragma HLS PIPELINE II = 1
                local_B[kk][jj] = B[(k+kk)*col_size/WIDTH_FACTOR + (j/WIDTH_FACTOR+jj)];
	    }
	}
   }
}
 
void compute(int flag, TYPE_WIDER local_A[T][T/WIDTH_FACTOR], TYPE_WIDER local_B[T][T/WIDTH_FACTOR], TYPE_WIDER local_C[T][T/WIDTH_FACTOR]){
#pragma HLS INLINE off
#pragma HLS DEPENDENCE variable="local_C" inter false

    if(flag) {
        COMPUTE_K: for(int kk = 0; kk < tile_size; kk++) {
            COMPUTE_I: for(int ii = 0; ii < tile_size; ii++) {
            	#pragma HLS PIPELINE II = 1
                COMPUTE_J: for(int jj = 0; jj < tile_size; jj++) {
		    #pragma HLS UNROLL
		    int range_idx = kk%WIDTH_FACTOR*32;
		    uint32_t tmp = local_A[ii][kk/WIDTH_FACTOR].range(range_idx+31, range_idx);
		    TYPE mult1 = *((float *)(&tmp));
		    int prod_idx = jj%WIDTH_FACTOR*32;
		    uint32_t tmp_mult2 = local_B[kk][jj/WIDTH_FACTOR].range(prod_idx+31, prod_idx);
		    TYPE mult2 = *((float *)(&tmp_mult2));
                    uint32_t tmp_prod = local_C[ii][jj/WIDTH_FACTOR].range(prod_idx+31, prod_idx);
		    TYPE prod = *((float *)(&tmp_prod));
		    prod += alpha * mult1 * mult2;
		    local_C[ii][jj/WIDTH_FACTOR].range(prod_idx+31, prod_idx) = *((uint32_t *)(&prod));
		}
	    }
	}
    }
} 
extern "C"{
void kernel_gemm(TYPE_WIDER C[NI * (NJ/WIDTH_FACTOR)], TYPE_WIDER A[NI * (NK/WIDTH_FACTOR)], TYPE_WIDER B[NI * (NK/WIDTH_FACTOR)]) {
#pragma HLS INTERFACE m_axi port=A offset=slave bundle=gmem
#pragma HLS INTERFACE m_axi port=B offset=slave bundle=gmem
#pragma HLS INTERFACE m_axi port=C offset=slave bundle=gmem
#pragma HLS INTERFACE s_axilite port=A bundle=control
#pragma HLS INTERFACE s_axilite port=B bundle=control
#pragma HLS INTERFACE s_axilite port=C bundle=control
#pragma HLS INTERFACE s_axilite port=return bundle=control


    TYPE_WIDER local_A_ping  [tile_size][tile_size/WIDTH_FACTOR];
    TYPE_WIDER local_B_ping  [tile_size][tile_size/WIDTH_FACTOR];
#pragma HLS ARRAY_PARTITION variable=local_B_ping complete dim=2
    TYPE_WIDER local_A_pong  [tile_size][tile_size/WIDTH_FACTOR];
    TYPE_WIDER local_B_pong  [tile_size][tile_size/WIDTH_FACTOR];
#pragma HLS ARRAY_PARTITION variable=local_B_pong complete dim=2
    TYPE_WIDER local_C[tile_size][tile_size/WIDTH_FACTOR];
#pragma HLS ARRAY_PARTITION variable=local_C complete dim=2
#pragma HLS DEPENDENCE variable="local_C" inter false

    int tile_num = col_size / tile_size;
    int counter = 0;
    ROW_PARTITION_L: for(int i = 0; i < row_size; i += tile_size) {
        COL_PARTITION_L: for(int j = 0; j < col_size; j += tile_size){

	    // recode and check
            COPYING_C_ARRAY:  for(int ii = 0; ii < tile_size; ii++) {
                for(int jj = 0; jj < tile_size/WIDTH_FACTOR; jj++) {
		    #pragma HLS PIPELINE II = 1
                    local_C[ii][jj] = C[(i+ii)*(col_size/WIDTH_FACTOR) + ((j/WIDTH_FACTOR)+jj)];
		}
	    }
	    
	    //printf("DEBUG PRINT 0\n");
	    // recode and check
	    BETA_MULT_LOCAL_C: for(int ii=0; ii < tile_size; ii++) {
	        #pragma HLS PIPELINE II = 1
	        for(int jj=0; jj < tile_size; jj++) {
	        	#pragma HLS UNROLL 
	        	int range_idx = jj%WIDTH_FACTOR*32;
	        	uint32_t tmp = local_C[ii][jj/WIDTH_FACTOR].range(range_idx+31, range_idx);
	        	TYPE operand1 = *((float *)(&tmp));
	        	TYPE prod = beta * operand1;
	        	local_C[ii][jj/WIDTH_FACTOR].range(range_idx + 31,range_idx) = *((uint32_t *)(&prod));
			//printf("Innermost debug %d \n",local_C[ii][jj/WIDTH_FACTOR].range(range_idx+31, range_idx));
			//printf("Innermost debug \n");
	        }
		//printf("DEBUG PRINT 1\n");
	    }

            PING_PONG_LOOP: for(int index = 0; index < tile_num + 1; index++){

                if(counter == 0)
                {
                    load(index < tile_num, i, j, index * tile_size, local_A_ping, local_B_ping, A, B);
                    compute(index > 0, local_A_pong, local_B_pong, local_C);
                }
                else{
                    load(index < tile_num, i, j, index * tile_size, local_A_pong, local_B_pong, A, B);
                    compute(index > 0, local_A_ping, local_B_ping, local_C);
                }
                counter = counter + 1;
                if(counter == 2)
                    counter = 0;
            }
            
	    STORE_TILE_LOOP: for(int ii = 0; ii < tile_size; ii++) {
                for(int jj = 0; jj < tile_size/WIDTH_FACTOR; jj++) {
		    #pragma HLS PIPELINE II = 1
                    C[(i+ii)*col_size/WIDTH_FACTOR + (j/WIDTH_FACTOR+jj)] = local_C[ii][jj];
		}
	    }

        }
	}
    return;
}
}
