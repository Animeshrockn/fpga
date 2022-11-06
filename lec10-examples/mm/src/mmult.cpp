/**
* Copyright (C) 2019-2021 Xilinx, Inc
*
* Licensed under the Apache License, Version 2.0 (the "License"). You may
* not use this file except in compliance with the License. A copy of the
* License is located at
*
*     http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS, WITHOUT
* WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. See the
* License for the specific language governing permissions and limitations
* under the License.
*/

/*

Kernel Description :

    Matrix multiply for matrices upto sizes (MAX_SIZE x MAX_SIZE) [MAX_SIZE
defined below].

    Arguments :

        int *in1   (input)     --> Input  Matrix 1
        int *in2   (input)     --> Input  Matrix 2
        int *out_r   (output)    --> Output Matrix
        int  size  (input)     --> Size of one dimension of the matrices

    Kernel Configuration :

        Matrices of upto size (MAX_SIZE x MAX_SIZE) [MAX_SIZE = 32 defined
below]
*/

// Maximum Array Size
#define MAX_SIZE 32

// TRIPCOUNT indentifier
const unsigned int c_size = MAX_SIZE;

// Computes matrix multiply
// C = AxB, where A, B and C are square matrices of dimension (sizexsize)
extern "C" {
void mmult(const int* in1, // Read-Only Matrix 1
           const int* in2, // Read-Only Matrix 2
           int* out_r,     // Output Result
           int size        // Size of one dimension of the matrices
           ) {
#pragma HLS INTERFACE m_axi port = in1 offset = slave bundle = gmem
#pragma HLS INTERFACE m_axi port = in2 offset = slave bundle = gmem
#pragma HLS INTERFACE m_axi port = out_r offset = slave bundle = gmem
#pragma HLS INTERFACE s_axilite port = in1 bundle = control
#pragma HLS INTERFACE s_axilite port = in2 bundle = control
#pragma HLS INTERFACE s_axilite port = out_r bundle = control
#pragma HLS INTERFACE s_axilite port = size bundle = control
#pragma HLS INTERFACE s_axilite port = return bundle = control

  loop_i: for (int i = 0; i < size; i++) {
    loop_j: for (int j = 0; j < size; j++) {
	out_r[i * size + j] = 0;
      loop_k: for (int k = 0; k < size; k++) {
	  out_r[i * size + j] += in1[i * size + k] * in2[k * size + j];
	}
      }
    }
  }
}
