#include <stdio.h>
#include <stdlib.h>

#include "kernel_gemm.h"

/* Array initialization. */

void init_array_sw(float C[NI*NJ], float A[NI*NK], float B[NK*NJ])
{
  int i, j;

  for (i = 0; i < NI; i++)
    for (j = 0; j < NJ; j++){
      C[i*NJ+j] = (float)((i*j+1) % NI) / NI;
      //printf("C[i][j] = %f\n\n",C[i*NJ+j]);
   }
  for (i = 0; i < NI; i++)
    for (j = 0; j < NK; j++)
      A[i*NK+j] = (float)((i*j+1) % NK) / NK;
  for (i = 0; i < NK; i++)
    for (j = 0; j < NJ; j++)
      B[i*NJ+j] = (float)(i*(j+2) % NJ) / NJ;
  printf("Done init_sw\n");
}

void init_array_hw(TYPE_WIDER C[NI*NJ/WIDTH_FACTOR], TYPE_WIDER A[NI*NK/WIDTH_FACTOR], TYPE_WIDER B[NK*NJ/WIDTH_FACTOR])
{
  int i, j;

  for (i = 0; i < NI; i++)
    for (j = 0; j < NJ; j++)
    {
      int range_idx = j%WIDTH_FACTOR*32;
      float temp_float = (float)((i*j+1) % NI) / NI;
      C[i*(NJ/WIDTH_FACTOR)+(j/WIDTH_FACTOR)].range(range_idx+31,range_idx) = *((uint32_t *)(&temp_float));
    }
  for (i = 0; i < NI; i++)
    for (j = 0; j < NK; j++)
    {
      int range_idx = j%WIDTH_FACTOR*32;
      float temp_float = (float)((i*j+1) % NK) / NK;
      A[i*(NK/WIDTH_FACTOR)+(j/WIDTH_FACTOR)].range(range_idx+31,range_idx) = *((uint32_t *)(&temp_float));
    }	
  for (i = 0; i < NK; i++)
    for (j = 0; j < NJ; j++)
    {
      int range_idx = j%WIDTH_FACTOR*32;
      float temp_float = (float)(i*(j+2) % NJ) / NJ;
      B[i*(NJ/WIDTH_FACTOR)+(j/WIDTH_FACTOR)].range(range_idx+31,range_idx) = *((uint32_t *)(&temp_float));
    }
  printf("Done init_hw\n");
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
  printf("Done gemm_sw\n");
}

int main(int argc, char** argv)
{
  // SW array elements
  float *C_sw;//[NI*NJ];
  float *A_sw;//[NI*NK];
  float *B_sw;//[NK*NJ];
  // HW array elements
  TYPE_WIDER *C;//[NI*NJ];
  TYPE_WIDER *A;//[NI*NK];
  TYPE_WIDER *B;//[NK*NJ];
 printf("b4 def\n"); 
  // Dynamic allocation
  C_sw = (float *) malloc(NI * NJ * sizeof(float));
  A_sw = (float *) malloc(NI * NK * sizeof(float));
  B_sw = (float *) malloc(NK * NJ * sizeof(float));
printf("SW def\n");
  C = (TYPE_WIDER *) malloc(NI * (NJ/WIDTH_FACTOR) * sizeof(TYPE_WIDER));
  A = (TYPE_WIDER *) malloc(NI * (NK/WIDTH_FACTOR) * sizeof(TYPE_WIDER));
  B = (TYPE_WIDER *) malloc(NK * (NJ/WIDTH_FACTOR) * sizeof(TYPE_WIDER));
  printf("HW def\n");
//return 0;
  /* Initialize array(s). */
  // SW array initialisation
  init_array_sw (C_sw, A_sw, B_sw);
//return 0;
  //printf("\n\n\n\n\n\n");
  // HW array initialisation
  init_array_hw (C, A, B);
//return 0;
  //for (int i=0;i < NI;i++) {
  //for (int j=0;j < NJ; j++) {
  //int range_idx = j%WIDTH_FACTOR*32;
  //uint32_t tmp = B[i*(NJ/WIDTH_FACTOR)+(j/WIDTH_FACTOR)].range(range_idx+31,range_idx);
  //float tmp_cmp = *((float *)(&tmp));
  //if (B_sw[i*NJ + j]!=tmp_cmp) {
  //    printf("TEST FAILED INIT, results not matching, C_sw[%d] = %f, C[%d] = %f \n\n",
  //        i*NJ + j, C_sw[i*NJ + j], i*NJ + j, tmp_cmp);
  //    return -1;	  
  //      } 
  //      }
  //}
  //printf ("INIT COMP PASSED!!\n");
  
  /* SW kernel. */
  kernel_gemm_sw (C_sw, A_sw, B_sw, 1.5, 2.5);
//return 0;
  /* HW kernel. */
  kernel_gemm (C, A, B, 1.5, 2.5);
  printf("Done gemm_hw\n");
//return 0;
  for (int i=0;i < NI;i++) {
  for (int j=0;j < NJ; j++) {
  int range_idx = j%WIDTH_FACTOR*32;
  uint32_t tmp = C[i*(NJ/WIDTH_FACTOR)+(j/WIDTH_FACTOR)].range(range_idx+31,range_idx);
  float tmp_cmp = *((float *)(&tmp));
  if (C_sw[i*NJ + j]!=tmp_cmp) {
      printf("TEST FAILED, results not matching, C_sw[%d] = %f, C[%d] = %f \n\n",
	  i*NJ + j, C_sw[i*NJ + j], i*NJ + j, tmp_cmp);
      return -1;	  
	} 
	}
  }	

  printf("TEST PASSED!!\n");
  free(A);
  free(B);
  free(C);
  free(A_sw);
  free(B_sw);
  free(C_sw);
  return 0;
}
