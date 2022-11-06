
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

/*******************************************************************************

Description:

    Vitis matrix multiply example which showcases how the host code works.

*******************************************************************************/
// OpenCL utility layer include
#include "xcl2.hpp"
#include <vector>
#include "kernel_gemm.h"

// Array Size to access
#define DATA_SIZE 16

// Maximum Array Size
#define MAX_SIZE 32

// Software implementation of Matrix Multiplication
// The inputs are of the size (DATA_SIZE x DATA_SIZE)

void init_array(float C_sw[NI*NJ],float A1[NI*NK], float B1[NK*NJ])
{
  int i, j;

  for (i = 0; i < NI; i++)
    for (j = 0; j < NJ; j++)
      C_sw[i*NJ+j] = (float)((i*j+1) % NI) / NI;
  for (i = 0; i < NI; i++)
    for (j = 0; j < NK; j++)
      A1[i*NK+j] = (float)(i*(j+1) % NK) / NK;
  for (i = 0; i < NK; i++)
    for (j = 0; j < NJ; j++)
      B1[i*NJ+j] = (float)(i*(j+2) % NJ) / NJ;
}

void kernel_gemm_sw(float C[NI*NJ], float A[NI*NK], float B[NK*NJ])
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

int main(int argc, char** argv) {
    if (argc != 2) {
        std::cout << "Usage: " << argv[0] << " <XCLBIN File>" << std::endl;
        return EXIT_FAILURE;
    }



    std::string binaryFile = argv[1];

    // Allocate Memory in Host Memory
    if (DATA_SIZE > MAX_SIZE) {
        std::cout << "Size is bigger than internal buffer size,"
                  << " please use a size smaller than " << MAX_SIZE << "!" << std::endl;
        return EXIT_FAILURE;
    }

    size_t matrix_size_bytes = sizeof(int) * DATA_SIZE * DATA_SIZE;
    cl_int err;
    cl::CommandQueue q;
    cl::Context context;
    cl::Kernel krnl_mmult;

    std::vector<float, aligned_allocator<float> > A1(NI * (NK));
    std::vector<float, aligned_allocator<float> > B1(NI * (NK));
    std::vector<float, aligned_allocator<float> > C_sw(NI * (NJ));

    std::vector<float, aligned_allocator<float> > A(NI * (NK/WIDTH_FACTOR));
    std::vector<float, aligned_allocator<float> > B(NI * (NK/WIDTH_FACTOR));
    std::vector<float, aligned_allocator<float> > C_hw(NI * (NJ/WIDTH_FACTOR));
    


    int i, j;

  for (i = 0; i < NI; i++)
    for (j = 0; j < NJ; j++)
      C_sw[i*NJ+j] = (float)((i*j+1) % NI) / NI;
  for (i = 0; i < NI; i++)
    for (j = 0; j < NK; j++)
      A1[i*NK+j] = (float)(i*(j+1) % NK) / NK;
  for (i = 0; i < NK; i++)
    for (j = 0; j < NJ; j++)
      B1[i*NJ+j] = (float)(i*(j+2) % NJ) / NJ;

    int k;

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

    // OPENCL HOST CODE AREA START
    auto devices = xcl::get_xil_devices();
    // read_binary_file() is a utility API which will load the binaryFile
    // and will return the pointer to file buffer.
    auto fileBuf = xcl::read_binary_file(binaryFile);
    cl::Program::Binaries bins{{fileBuf.data(), fileBuf.size()}};
    bool valid_device = false;
    for (unsigned int i = 0; i < devices.size(); i++) {
        auto device = devices[i];
        // Creating Context and Command Queue for selected Device
        OCL_CHECK(err, context = cl::Context(device, nullptr, nullptr, nullptr, &err));
        OCL_CHECK(err, q = cl::CommandQueue(context, device, CL_QUEUE_PROFILING_ENABLE, &err));

        std::cout << "Trying to program device[" << i << "]: " << device.getInfo<CL_DEVICE_NAME>() << std::endl;
        cl::Program program(context, {device}, bins, nullptr, &err);
        if (err != CL_SUCCESS) {
            std::cout << "Failed to program device[" << i << "] with xclbin file!\n";
        } else {
            std::cout << "Device[" << i << "]: program successful!\n";
            OCL_CHECK(err, krnl_mmult = cl::Kernel(program, "kernel_gemm", &err));
            valid_device = true;
            break; // we break because we found a valid device
        }
    }
    if (!valid_device) {
        std::cout << "Failed to program any device found, exit!\n";
        exit(EXIT_FAILURE);
    }

    // Allocate Buffer in Global Memory
    OCL_CHECK(err, cl::Buffer buffer_output(context, CL_MEM_USE_HOST_PTR | CL_MEM_READ_WRITE,
                                        sizeof(float) * NI * (NJ/WIDTH_FACTOR), C_hw.data(), &err));
    OCL_CHECK(err, cl::Buffer buffer_in1(context, CL_MEM_USE_HOST_PTR | CL_MEM_READ_ONLY,
                                         sizeof(float) * NI * (NK/WIDTH_FACTOR),A.data(), &err));
    OCL_CHECK(err, cl::Buffer buffer_in2(context, CL_MEM_USE_HOST_PTR | CL_MEM_READ_ONLY,
                                         sizeof(float) * NI * (NK/WIDTH_FACTOR), B.data(), &err));


    //int size = DATA_SIZE;

    OCL_CHECK(err, err = krnl_mmult.setArg(0, buffer_output));
    OCL_CHECK(err, err = krnl_mmult.setArg(1, buffer_in1));
    OCL_CHECK(err, err = krnl_mmult.setArg(2, buffer_in2));
    
    //OCL_CHECK(err, err = krnl_mmult.setArg(3, size));

    // Copy input data to device global memory
    OCL_CHECK(err, err = q.enqueueMigrateMemObjects({buffer_in1, buffer_in2}, 0 /* 0 means from host*/));

    // Launch the Kernel
    OCL_CHECK(err, err = q.enqueueTask(krnl_mmult));
    //q.finish();

    // Copy Result from Device Global Memory to Host Local Memory
    OCL_CHECK(err, err = q.enqueueMigrateMemObjects({buffer_output}, CL_MIGRATE_MEM_OBJECT_HOST));
    q.finish();
    // OPENCL HOST CODE AREA END

    // Compute Software Results
    //m_softwareGold(source_in1, source_in2, source_sw_results);

    // Compare the results of the Device to the simulation
    int match = 0;
    for (int i = 0; i < DATA_SIZE * DATA_SIZE; i++) {
        if (C_hw[i] != C_sw[i]) {
            std::cout << "Error: Result mismatch" << std::endl;
            std::cout << "i = " << i << " CPU result = " << C_sw[i]
                      << " Device result = " << C_hw[i] << std::endl;
            match = 1;
            break;
        }
    }

    std::cout << "TEST " << (match ? "FAILED" : "PASSED") << std::endl;
    return (match ? EXIT_FAILURE : EXIT_SUCCESS);
}
