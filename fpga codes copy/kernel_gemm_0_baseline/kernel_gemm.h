#ifndef _H_GEMM_H_
#define _H_GEMM_H_

#define NI 2048
#define NJ 2048
#define NK 2048
//#define NI 64
//#define NJ 64
//#define NK 64
void kernel_gemm (float C[NI*NJ], float A[NI*NK], float B[NK*NJ], const float alpha, const float beta);

#endif // _H_GEMM_H_
