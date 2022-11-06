#include "kernel_gemm.h"

void load(int flag, int i, int j, int k, TYPE local_A[T][T], TYPE local_B[T][T], TYPE A[NI*NK], TYPE B[NK*NJ]){
#pragma HLS INLINE off
    int ii, jj, kk;
    if(flag){
        LOAD_A_LOOP: for(int ii = 0; ii < tile_size; ii++) {
            for(int kk = 0; kk < tile_size; kk++) {
		#pragma HLS PIPELINE II = 1
                local_A[ii][kk] = A[(i+ii)*col_size + (k+kk)];
	    }
	}

        LOAD_B_LOOP: for(int kk = 0; kk < tile_size; kk++) {
            for(int jj = 0; jj < tile_size; jj++) {
		#pragma HLS PIPELINE II = 1
                local_B[kk][jj] = B[(k+kk)*col_size + (j+jj)];
	    }
	}
   }
} 

void compute(int flag, TYPE local_A[T][T], TYPE local_B[T][T], TYPE local_C[T][T], TYPE alpha){
#pragma HLS INLINE off
#pragma HLS DEPENDENCE variable="local_C" inter false
    int ii, jj, kk, uu;
    if(flag) {
        COMPUTE_K: for(int kk = 0; kk < tile_size; kk++) {
            COMPUTE_I: for(int ii = 0; ii < tile_size; ii++) {
		#pragma HLS PIPELINE II = 1
                COMPUTE_J: for(int jj = 0; jj < tile_size; jj++) {
		    #pragma HLS UNROLL
                    local_C[ii][jj] += alpha * local_A[ii][kk] * local_B[kk][jj];
                   
		}
	    }
	}
    }
} 

void kernel_gemm(float C[NI*NJ], float A[NI*NK], float B[NK*NJ], const float alpha, const float beta){
#pragma HLS INTERFACE m_axi port=A offset=slave bundle=gmem
#pragma HLS INTERFACE m_axi port=B offset=slave bundle=gmem
#pragma HLS INTERFACE m_axi port=C offset=slave bundle=gmem
#pragma HLS INTERFACE s_axilite port=A bundle=control
#pragma HLS INTERFACE s_axilite port=B bundle=control
#pragma HLS INTERFACE s_axilite port=C bundle=control
#pragma HLS INTERFACE s_axilite port=return bundle=control

    TYPE local_A_ping  [tile_size][tile_size];
    TYPE local_B_ping  [tile_size][tile_size];
#pragma HLS ARRAY_PARTITION variable=local_B_ping complete dim=2
    TYPE local_A_pong  [tile_size][tile_size];
    TYPE local_B_pong  [tile_size][tile_size];
#pragma HLS ARRAY_PARTITION variable=local_B_pong complete dim=2
    TYPE local_C[tile_size][tile_size];
#pragma HLS ARRAY_PARTITION variable=local_C complete dim=2

    int tile_num = col_size / tile_size;
    int counter = 0;
    ROW_PARTITION_L: for(int i = 0; i < row_size; i += tile_size)
        COL_PARTITION_L: for(int j = 0; j < col_size; j += tile_size){


            LOAD_INIT_TILE_C: for(int ii = 0; ii < tile_size; ii++) {
                for(int jj = 0; jj < tile_size; jj++) {
		    #pragma HLS PIPELINE II = 1
                    local_C[ii][jj] = beta*C[(i+ii)*col_size + (j+jj)];
		}
	    }


            PING_PONG_LOOP: for(int index = 0; index < tile_num + 1; index++){

                if(counter == 0)
                {
                    load(index < tile_num, i, j, index * tile_size, local_A_ping, local_B_ping, A, B);
                    compute(index > 0, local_A_pong, local_B_pong, local_C, alpha);
                }
                else{
                    load(index < tile_num, i, j, index * tile_size, local_A_pong, local_B_pong, A, B);
                    compute(index > 0, local_A_ping, local_B_ping, local_C, alpha);
                }
                counter = counter + 1;
                if(counter == 2)
                    counter = 0;
            }
            STORE_TILE_LOOP: for(int ii = 0; ii < tile_size; ii++) {
                for(int jj = 0; jj < tile_size; jj++) {
		    #pragma HLS PIPELINE II = 1
                    C[(i+ii)*col_size + (j+jj)] = local_C[ii][jj];
		}
	    }

        }
    return;
}
