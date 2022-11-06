#include "kernel_gemm.h"

void kernel_gemm(float C[NI*NJ], float A[NI*NK], float B[NK*NJ], const float alpha, const float beta){
#pragma HLS INTERFACE m_axi port=A offset=slave bundle=gmem
#pragma HLS INTERFACE m_axi port=B offset=slave bundle=gmem
#pragma HLS INTERFACE m_axi port=C offset=slave bundle=gmem
#pragma HLS INTERFACE s_axilite port=A bundle=control
#pragma HLS INTERFACE s_axilite port=B bundle=control
#pragma HLS INTERFACE s_axilite port=C bundle=control
#pragma HLS INTERFACE s_axilite port=return bundle=control

    TYPE local_A  [tile_size][tile_size];
    TYPE local_B  [tile_size][tile_size];
    TYPE local_C  [tile_size][tile_size];

    ROW_PARTITION_L: for(int i = 0; i < row_size; i += tile_size)
        COL_PARTITION_L: for(int j = 0; j < col_size; j += tile_size)
        {
            LOAD_INIT_TILE_C: for(int ii = 0; ii < tile_size; ii++)
                for(int jj = 0; jj < tile_size; jj++)
		    #pragma HLS PIPELINE
                    local_C[ii][jj] = beta*C[(i+ii)*col_size + (j+jj)];

            LOAD_AB_AND_COMPUTE: for(int k = 0; k < col_size; k += tile_size)
		{
                LOAD_INIT_TILE_A: for(int ii = 0; ii < tile_size; ii++)
                    for(int kk = 0; kk < tile_size; kk++)
			#pragma HLS PIPELINE 
                        local_A[ii][kk] = alpha*A[(i+ii)*col_size + (k+kk)];

                LOAD_B: for(int kk = 0; kk < tile_size; kk++)
                    for(int jj = 0; jj < tile_size; jj++)
			#pragma HLS PIPELINE 
                        local_B[kk][jj] = B[(k+kk)*col_size + (j+jj)];

                COMPUTE_TILE_LOOP: for(int kk = 0; kk < tile_size; kk++)
                    for(int ii = 0; ii < tile_size; ii++)
                        for(int jj = 0; jj < tile_size; jj++)
                            local_C[ii][jj] += local_A[ii][kk] * local_B[kk][jj];
            	}
            
	    STORE_TILE_LOOP: for(int ii = 0; ii < tile_size; ii++)
                for(int jj = 0; jj < tile_size; jj++)
		    #pragma HLS PIPELINE 
                    C[(i+ii)*col_size + (j+jj)] = local_C[ii][jj];
        }
    return;
}
