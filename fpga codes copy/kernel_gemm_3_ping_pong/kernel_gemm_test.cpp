#include <stdio.h>
#include <stdlib.h>

#include "kernel_gemm.h"

/* Array initialization. */

void init_array(float C[NI*NJ], float A[NI*NK], float B[NK*NJ])
{
  int i, j;

  for (i = 0; i < NI; i++)
    for (j = 0; j < NJ; j++)
      C[i*NJ+j] = (float)((i*j+1) % NI) / NI;
  for (i = 0; i < NI; i++)
    for (j = 0; j < NK; j++)
      A[i*NK+j] = (float)(i*(j+1) % NK) / NK;
  for (i = 0; i < NK; i++)
    for (j = 0; j < NJ; j++)
      B[i*NJ+j] = (float)(i*(j+2) % NJ) / NJ;
}

void kernel_gemm_sw(float C[NI*NJ], float A[NI*NK], float B[NK*NJ], float alpha, float beta)
{
  int i, j, k;

// => Form C := alpha*A*B + beta*C,
//A is NIxNK
//B is NKxNJ
//C is NIxNJ
  for (i = 0; i < NI; i++) {
    for (j = 0; j < NJ; j++) {
      C[i*NJ+j] *= beta;
    }
    for (j = 0; j < NJ; j++) {
      for (k = 0; k < NK; ++k) {
	C[i*NJ+j] += alpha * A[i*NK+k] * B[k*NJ+j];
      }
    }
  }
}

int main(int argc, char** argv)
{
  // SW array elements
  float *C_sw;//[NI*NJ];
  float *A_sw;//[NI*NK];
  float *B_sw;//[NK*NJ];
  // HW array elements
  float *C;//[NI*NJ];
  float *A;//[NI*NK];
  float *B;//[NK*NJ];
  
  // Dynamic allocation
  C_sw = (float *) malloc(NI * NJ * sizeof(float));
  A_sw = (float *) malloc(NI * NK * sizeof(float));
  B_sw = (float *) malloc(NK * NJ * sizeof(float));
  C = (float *) malloc(NI * NJ * sizeof(float));
  A = (float *) malloc(NI * NK * sizeof(float));
  B = (float *) malloc(NK * NJ * sizeof(float));
  
  /* Initialize array(s). */
  // SW array initialisation
  init_array (C_sw, A_sw, B_sw);
  // HW array initialisation
  init_array (C, A, B);
  
  /* SW kernel. */
  kernel_gemm_sw (C_sw, A_sw, B_sw, 1.5, 2.5);

  /* HW kernel. */
  kernel_gemm (C, A, B, 1.5, 2.5);
  
  for (int i=0;i < NI*NJ;i++) {
  if (C[i]!=C_sw[i]) {
      printf("TEST FAILED, results not matching, C_sw[%d] = %f, C[%d] = %f \n",
	  i, C_sw[i], i, C[i]);
      return -1;	  
	} 
  }	

  printf("TEST PASSED!!");
  return 0;
}
