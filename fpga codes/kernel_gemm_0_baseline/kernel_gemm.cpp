#include "kernel_gemm.h"

void kernel_gemm(float C[NI*NJ], float A[NI*NK], float B[NK*NJ], const float alpha, const float beta)
{
	#pragma HLS INTERFACE m_axi port=A offset=slave bundle=func_bus
	#pragma HLS INTERFACE s_axilite port=A bundle=ctrl_bus
	#pragma HLS INTERFACE m_axi port=B offset=slave bundle=func_bus
	#pragma HLS INTERFACE s_axilite port=B bundle=ctrl_bus	
	#pragma HLS INTERFACE m_axi port=C offset=slave bundle=func_bus
	#pragma HLS INTERFACE s_axilite port=C bundle=ctrl_bus
	#pragma HLS INTERFACE s_axilite port=return bundle=ctrl_bus

// => Form C := alpha*A*B + beta*C,
//A is NIxNK
//B is NKxNJ
//C is NIxNJ
  NI_LOOP: for (int i = 0; i < NI; i++) {
    NJ_LOOP_1: for (int j = 0; j < NJ; j++) {
      C[i*NJ+j] *= beta;
    }
    NJ_LOOP_2: for (int j = 0; j < NJ; j++) {
      NK_LOOP: for (int k = 0; k < NK; ++k) {
	C[i*NJ+j] += alpha * A[i*NK+k] * B[k*NJ+j];
      }
    }
  }
}
