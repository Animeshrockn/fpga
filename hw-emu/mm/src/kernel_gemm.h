#ifndef _H_GEMM_H_
#define _H_GEMM_H_

//#define NI 4096
//#define NJ 4096
//#define NK 4096
#define NI 32
#define NJ 32
#define NK 32
//Standard Libraries
#include <stdio.h>
#include <stdlib.h>

//Define compute data type
#define TYPE float
//#define unroll_size 128


#define MatrixSize NI
//Specify row/column sizes
#define row_size MatrixSize
#define col_size MatrixSize 

//specify tile_size
#define tile_size 16
#define T tile_size 

const float aval = 1.5;
const float bval  = 2.5;
#define alpha aval
#define beta bval

extern "C"
void kernel_gemm (float C[NI*NJ], float A[NI*NK], float B[NK*NJ]);

#endif // _H_GEMM_H_
