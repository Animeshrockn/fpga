#ifndef _H_GEMM_H_
#define _H_GEMM_H_

#define TYPE_WIDER ap_int<512>
#define WIDTH_FACTOR 16
//#define NI 2048
//#define NJ 2048
//#define NK 2048
#define NI 32
#define NJ 32
#define NK 32
//Standard Libraries
#include <gmp.h>
#define __gmp_const const
#include <stdio.h>
#include <stdlib.h>
#include "ap_int.h" 
#include <inttypes.h>
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

#define alpha 1
#define beta 2



#endif // _H_GEMM_H_
