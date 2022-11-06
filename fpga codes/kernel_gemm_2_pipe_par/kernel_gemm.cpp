#include "kernel_gemm.h"

void kernel_gemm(float C[NI*NJ], float A[NI*NK], float B[NK*NJ], const float alpha, const float beta){
#pragma HLS INTERFACE m_axi port=A offset=slave bundle=gmem
#pragma HLS INTERFACE m_axi port=B offset=slave bundle=gmem
#pragma HLS INTERFACE m_axi port=C offset=slave bundle=gmem
#pragma HLS INTERFACE s_axilite port=A bundle=control
#pragma HLS INTERFACE s_axilite port=B bundle=control
#pragma HLS INTERFACE s_axilite port=C bundle=control
#pragma HLS INTERFACE s_axilite port=return bundle=control

// Local buffers used for loop tiling
    TYPE local_A  [tile_size][tile_size];
    TYPE local_B  [tile_size][tile_size];
#pragma HLS ARRAY_PARTITION variable=local_B complete dim=2 // array paritioning to enable unrolling
    TYPE local_C  [tile_size][tile_size];
#pragma HLS ARRAY_PARTITION variable=local_C complete dim=2

#pragma HLS DEPENDENCE variable="local_C" inter false
    
    I_LOOP: for(int i = 0; i < NI; i += tile_size) // Tiled I loop
        J_LOOP: for(int j = 0; j < NJ; j += tile_size) // Tiled J loop
	{

            LOAD_INIT_TILE_C: for(int ii = 0; ii < tile_size; ii++) // Load and initialise (beta mult) tile C
                for(int jj = 0; jj < tile_size; jj++)
		    #pragma HLS PIPELINE     // pipelining for burst access
                    local_C[ii][jj] = beta*C[(i+ii)*NJ + (j+jj)];

            K_LOOP: for(int k = 0; k < NK; k += tile_size) // Tiled K loop
	    {
                LOAD_INIT_TILE_A: for(int ii = 0; ii < tile_size; ii++) // Load and initialise (alpha mult) tile A
                    for(int kk = 0; kk < tile_size; kk++)
		        #pragma HLS PIPELINE 
                        local_A[ii][kk] = alpha*A[(i+ii)*NK + (k+kk)];

                LOAD_B: for(int kk = 0; kk < tile_size; kk++) // Load tile B
                    for(int jj = 0; jj < tile_size; jj++)
                        #pragma HLS PIPELINE
                        local_B[kk][jj] = B[(k+kk)*NJ + (j+jj)];

                COMPUTE_TILE_LOOP: for(int kk = 0; kk < tile_size; kk++) // Inner most loop doing computations on local buffers
                    for(int ii = 0; ii < tile_size; ii++)
			#pragma HLS PIPELINE II = 1
                        for(int jj = 0; jj < tile_size; jj++)
			    #pragma HLS UNROLL
                            local_C[ii][jj] += local_A[ii][kk] * local_B[kk][jj];
            }

            STORE_TILE_C: for(int ii = 0; ii < tile_size; ii++) // Store the computed tile C
                for(int jj = 0; jj < tile_size; jj++)
		    #pragma HLS PIPELINE  // pipelining for burst access
                    C[(i+ii)*NJ + (j+jj)] = local_C[ii][jj];
            
        }
    return;
}
