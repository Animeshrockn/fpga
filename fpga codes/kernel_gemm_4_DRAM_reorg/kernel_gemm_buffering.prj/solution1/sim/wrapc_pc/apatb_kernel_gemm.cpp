// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2020.1 (64-bit)
// Copyright 1986-2020 Xilinx, Inc. All Rights Reserved.
// ==============================================================

#define AP_INT_MAX_W 32678

#include <systemc>
#include <iostream>
#include <cstdlib>
#include <cstddef>
#include <stdint.h>
#include "SysCFileHandler.h"
#include "ap_int.h"
#include "ap_fixed.h"
#include <complex>
#include <stdbool.h>
#include "autopilot_cbe.h"
#include "hls_stream.h"
#include "hls_half.h"
#include "hls_signal_handler.h"

using namespace std;
using namespace sc_core;
using namespace sc_dt;


// [dump_struct_tree [build_nameSpaceTree] dumpedStructList] ---------->


// [dump_enumeration [get_enumeration_list]] ---------->


// wrapc file define: "gmem"
#define AUTOTB_TVIN_gmem  "../tv/cdatafile/c.kernel_gemm.autotvin_gmem.dat"
#define AUTOTB_TVOUT_gmem  "../tv/cdatafile/c.kernel_gemm.autotvout_gmem.dat"
// wrapc file define: "C_V"
#define AUTOTB_TVIN_C_V  "../tv/cdatafile/c.kernel_gemm.autotvin_C_V.dat"
// wrapc file define: "A_V"
#define AUTOTB_TVIN_A_V  "../tv/cdatafile/c.kernel_gemm.autotvin_A_V.dat"
// wrapc file define: "B_V"
#define AUTOTB_TVIN_B_V  "../tv/cdatafile/c.kernel_gemm.autotvin_B_V.dat"
// wrapc file define: "alpha"
#define AUTOTB_TVIN_alpha  "../tv/cdatafile/c.kernel_gemm.autotvin_alpha.dat"
// wrapc file define: "beta"
#define AUTOTB_TVIN_beta  "../tv/cdatafile/c.kernel_gemm.autotvin_beta.dat"

#define INTER_TCL  "../tv/cdatafile/ref.tcl"

// tvout file define: "gmem"
#define AUTOTB_TVOUT_PC_gmem  "../tv/rtldatafile/rtl.kernel_gemm.autotvout_gmem.dat"

class INTER_TCL_FILE {
	public:
		INTER_TCL_FILE(const char* name) {
			mName = name;
			gmem_depth = 0;
			C_V_depth = 0;
			A_V_depth = 0;
			B_V_depth = 0;
			alpha_depth = 0;
			beta_depth = 0;
			trans_num =0;
		}

		~INTER_TCL_FILE() {
			mFile.open(mName);
			if (!mFile.good()) {
				cout << "Failed to open file ref.tcl" << endl;
				exit (1);
			}
			string total_list = get_depth_list();
			mFile << "set depth_list {\n";
			mFile << total_list;
			mFile << "}\n";
			mFile << "set trans_num "<<trans_num<<endl;
			mFile.close();
		}

		string get_depth_list () {
			stringstream total_list;
			total_list << "{gmem " << gmem_depth << "}\n";
			total_list << "{C_V " << C_V_depth << "}\n";
			total_list << "{A_V " << A_V_depth << "}\n";
			total_list << "{B_V " << B_V_depth << "}\n";
			total_list << "{alpha " << alpha_depth << "}\n";
			total_list << "{beta " << beta_depth << "}\n";
			return total_list.str();
		}

		void set_num (int num , int* class_num) {
			(*class_num) = (*class_num) > num ? (*class_num) : num;
		}
	public:
		int gmem_depth;
		int C_V_depth;
		int A_V_depth;
		int B_V_depth;
		int alpha_depth;
		int beta_depth;
		int trans_num;

	private:
		ofstream mFile;
		const char* mName;
};

extern void kernel_gemm (
ap_int<512> C[256],
ap_int<512> A[256],
ap_int<512> B[256],
const float alpha,
const float beta);

void AESL_WRAP_kernel_gemm (
ap_int<512> C[256],
ap_int<512> A[256],
ap_int<512> B[256],
const float alpha,
const float beta)
{
	refine_signal_handler();
	fstream wrapc_switch_file_token;
	wrapc_switch_file_token.open(".hls_cosim_wrapc_switch.log");
	int AESL_i;
	if (wrapc_switch_file_token.good())
	{
		CodeState = ENTER_WRAPC_PC;
		static unsigned AESL_transaction_pc = 0;
		string AESL_token;
		string AESL_num;
		static AESL_FILE_HANDLER aesl_fh;


		// output port post check: "gmem"
		aesl_fh.read(AUTOTB_TVOUT_PC_gmem, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_gmem, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_gmem, AESL_token); // data

			sc_bv<512> *gmem_pc_buffer = new sc_bv<512>[768];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'gmem', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'gmem', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					gmem_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_gmem, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_gmem))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: gmem
				{
					// bitslice(511, 0)
					// {
						// celement: C.V(511, 0)
						// {
							sc_lv<512>* C_V_lv0_0_255_1 = new sc_lv<512>[768];
						// }
						// celement: A.V(511, 0)
						// {
							sc_lv<512>* A_V_lv0_0_255_1 = new sc_lv<512>[768];
						// }
						// celement: B.V(511, 0)
						// {
							sc_lv<512>* B_V_lv0_0_255_1 = new sc_lv<512>[768];
						// }
					// }

					// bitslice(511, 0)
					{
						int hls_map_index = 0;
						// celement: C.V(511, 0)
						{
							// carray: (0) => (255) @ (1)
							for (int i_0 = 0; i_0 <= 255; i_0 += 1)
							{
								if (&(C[0]) != NULL) // check the null address if the c port is array or others
								{
									C_V_lv0_0_255_1[hls_map_index].range(511, 0) = sc_bv<512>(gmem_pc_buffer[hls_map_index].range(511, 0));
									hls_map_index++;
								}
							}
						}
						// celement: A.V(511, 0)
						{
							// carray: (0) => (255) @ (1)
							for (int i_0 = 0; i_0 <= 255; i_0 += 1)
							{
								hls_map_index++;
							}
						}
						// celement: B.V(511, 0)
						{
							// carray: (0) => (255) @ (1)
							for (int i_0 = 0; i_0 <= 255; i_0 += 1)
							{
								hls_map_index++;
							}
						}
					}

					// bitslice(511, 0)
					{
						int hls_map_index = 0;
						// celement: C.V(511, 0)
						{
							// carray: (0) => (255) @ (1)
							for (int i_0 = 0; i_0 <= 255; i_0 += 1)
							{
								// sub                    : i_0
								// ori_name               : C[i_0]
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : C[0]
								// output_left_conversion : C[i_0]
								// output_type_conversion : (C_V_lv0_0_255_1[hls_map_index]).to_string(SC_BIN).c_str()
								if (&(C[0]) != NULL) // check the null address if the c port is array or others
								{
									C[i_0] = (C_V_lv0_0_255_1[hls_map_index]).to_string(SC_BIN).c_str();
									hls_map_index++;
								}
							}
						}
						// celement: A.V(511, 0)
						{
							// carray: (0) => (255) @ (1)
							for (int i_0 = 0; i_0 <= 255; i_0 += 1)
							{
								// sub                    : i_0
								// ori_name               : A[i_0]
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : A[0]
								// output_left_conversion : A[i_0]
								// output_type_conversion : (A_V_lv0_0_255_1[hls_map_index]).to_string(SC_BIN).c_str()
								hls_map_index++;
							}
						}
						// celement: B.V(511, 0)
						{
							// carray: (0) => (255) @ (1)
							for (int i_0 = 0; i_0 <= 255; i_0 += 1)
							{
								// sub                    : i_0
								// ori_name               : B[i_0]
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : B[0]
								// output_left_conversion : B[i_0]
								// output_type_conversion : (B_V_lv0_0_255_1[hls_map_index]).to_string(SC_BIN).c_str()
								hls_map_index++;
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] gmem_pc_buffer;
		}

		AESL_transaction_pc++;
	}
	else
	{
		CodeState = ENTER_WRAPC;
		static unsigned AESL_transaction;

		static AESL_FILE_HANDLER aesl_fh;

		// "gmem"
		char* tvin_gmem = new char[133];
		aesl_fh.touch(AUTOTB_TVIN_gmem);
		char* tvout_gmem = new char[133];
		aesl_fh.touch(AUTOTB_TVOUT_gmem);

		// "C_V"
		char* tvin_C_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_C_V);

		// "A_V"
		char* tvin_A_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_A_V);

		// "B_V"
		char* tvin_B_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_B_V);

		// "alpha"
		char* tvin_alpha = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_alpha);

		// "beta"
		char* tvin_beta = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_beta);

		CodeState = DUMP_INPUTS;
		static INTER_TCL_FILE tcl_file(INTER_TCL);
		int leading_zero;

		// [[transaction]]
		sprintf(tvin_gmem, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_gmem, tvin_gmem);

		sc_bv<512>* gmem_tvin_wrapc_buffer = new sc_bv<512>[768];

		// RTL Name: gmem
		{
			// bitslice(511, 0)
			{
				int hls_map_index = 0;
				// celement: C.V(511, 0)
				{
					// carray: (0) => (255) @ (1)
					for (int i_0 = 0; i_0 <= 255; i_0 += 1)
					{
						// sub                   : i_0
						// ori_name              : C[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : C[0]
						// regulate_c_name       : C_V
						// input_type_conversion : (C[i_0]).to_string(2).c_str()
						if (&(C[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<512> C_V_tmp_mem;
							C_V_tmp_mem = (C[i_0]).to_string(2).c_str();
							gmem_tvin_wrapc_buffer[hls_map_index].range(511, 0) = C_V_tmp_mem.range(511, 0);
                                 	       hls_map_index++;
						}
					}
				}
				// celement: A.V(511, 0)
				{
					// carray: (0) => (255) @ (1)
					for (int i_0 = 0; i_0 <= 255; i_0 += 1)
					{
						// sub                   : i_0
						// ori_name              : A[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : A[0]
						// regulate_c_name       : A_V
						// input_type_conversion : (A[i_0]).to_string(2).c_str()
						if (&(A[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<512> A_V_tmp_mem;
							A_V_tmp_mem = (A[i_0]).to_string(2).c_str();
							gmem_tvin_wrapc_buffer[hls_map_index].range(511, 0) = A_V_tmp_mem.range(511, 0);
                                 	       hls_map_index++;
						}
					}
				}
				// celement: B.V(511, 0)
				{
					// carray: (0) => (255) @ (1)
					for (int i_0 = 0; i_0 <= 255; i_0 += 1)
					{
						// sub                   : i_0
						// ori_name              : B[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : B[0]
						// regulate_c_name       : B_V
						// input_type_conversion : (B[i_0]).to_string(2).c_str()
						if (&(B[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<512> B_V_tmp_mem;
							B_V_tmp_mem = (B[i_0]).to_string(2).c_str();
							gmem_tvin_wrapc_buffer[hls_map_index].range(511, 0) = B_V_tmp_mem.range(511, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 768; i++)
		{
			sprintf(tvin_gmem, "%s\n", (gmem_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_gmem, tvin_gmem);
		}

		tcl_file.set_num(768, &tcl_file.gmem_depth);
		sprintf(tvin_gmem, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_gmem, tvin_gmem);

		// release memory allocation
		delete [] gmem_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_C_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_C_V, tvin_C_V);

		sc_bv<32> C_V_tvin_wrapc_buffer;

		// RTL Name: C_V
		{
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvin_C_V, "%s\n", (C_V_tvin_wrapc_buffer).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_C_V, tvin_C_V);
		}

		tcl_file.set_num(1, &tcl_file.C_V_depth);
		sprintf(tvin_C_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_C_V, tvin_C_V);

		// [[transaction]]
		sprintf(tvin_A_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_A_V, tvin_A_V);

		sc_bv<32> A_V_tvin_wrapc_buffer;

		// RTL Name: A_V
		{
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvin_A_V, "%s\n", (A_V_tvin_wrapc_buffer).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_A_V, tvin_A_V);
		}

		tcl_file.set_num(1, &tcl_file.A_V_depth);
		sprintf(tvin_A_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_A_V, tvin_A_V);

		// [[transaction]]
		sprintf(tvin_B_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_B_V, tvin_B_V);

		sc_bv<32> B_V_tvin_wrapc_buffer;

		// RTL Name: B_V
		{
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvin_B_V, "%s\n", (B_V_tvin_wrapc_buffer).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_B_V, tvin_B_V);
		}

		tcl_file.set_num(1, &tcl_file.B_V_depth);
		sprintf(tvin_B_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_B_V, tvin_B_V);

		// [[transaction]]
		sprintf(tvin_alpha, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_alpha, tvin_alpha);

		sc_bv<32> alpha_tvin_wrapc_buffer;

		// RTL Name: alpha
		{
			// bitslice(31, 0)
			{
				// celement: alpha(31, 0)
				{
					// carray: (0) => (0) @ (0)
					{
						// sub                   : 
						// ori_name              : alpha
						// sub_1st_elem          : 
						// ori_name_1st_elem     : alpha
						// regulate_c_name       : alpha
						// input_type_conversion : *(int*)&alpha
						if (&(alpha) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<32> alpha_tmp_mem;
							alpha_tmp_mem = *(int*)&alpha;
							alpha_tvin_wrapc_buffer.range(31, 0) = alpha_tmp_mem.range(31, 0);
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvin_alpha, "%s\n", (alpha_tvin_wrapc_buffer).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_alpha, tvin_alpha);
		}

		tcl_file.set_num(1, &tcl_file.alpha_depth);
		sprintf(tvin_alpha, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_alpha, tvin_alpha);

		// [[transaction]]
		sprintf(tvin_beta, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_beta, tvin_beta);

		sc_bv<32> beta_tvin_wrapc_buffer;

		// RTL Name: beta
		{
			// bitslice(31, 0)
			{
				// celement: beta(31, 0)
				{
					// carray: (0) => (0) @ (0)
					{
						// sub                   : 
						// ori_name              : beta
						// sub_1st_elem          : 
						// ori_name_1st_elem     : beta
						// regulate_c_name       : beta
						// input_type_conversion : *(int*)&beta
						if (&(beta) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<32> beta_tmp_mem;
							beta_tmp_mem = *(int*)&beta;
							beta_tvin_wrapc_buffer.range(31, 0) = beta_tmp_mem.range(31, 0);
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvin_beta, "%s\n", (beta_tvin_wrapc_buffer).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_beta, tvin_beta);
		}

		tcl_file.set_num(1, &tcl_file.beta_depth);
		sprintf(tvin_beta, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_beta, tvin_beta);

// [call_c_dut] ---------->

		CodeState = CALL_C_DUT;
		kernel_gemm(C, A, B, alpha, beta);

		CodeState = DUMP_OUTPUTS;

		// [[transaction]]
		sprintf(tvout_gmem, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_gmem, tvout_gmem);

		sc_bv<512>* gmem_tvout_wrapc_buffer = new sc_bv<512>[768];

		// RTL Name: gmem
		{
			// bitslice(511, 0)
			{
				int hls_map_index = 0;
				// celement: C.V(511, 0)
				{
					// carray: (0) => (255) @ (1)
					for (int i_0 = 0; i_0 <= 255; i_0 += 1)
					{
						// sub                   : i_0
						// ori_name              : C[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : C[0]
						// regulate_c_name       : C_V
						// input_type_conversion : (C[i_0]).to_string(2).c_str()
						if (&(C[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<512> C_V_tmp_mem;
							C_V_tmp_mem = (C[i_0]).to_string(2).c_str();
							gmem_tvout_wrapc_buffer[hls_map_index].range(511, 0) = C_V_tmp_mem.range(511, 0);
                                 	       hls_map_index++;
						}
					}
				}
				// celement: A.V(511, 0)
				{
					// carray: (0) => (255) @ (1)
					for (int i_0 = 0; i_0 <= 255; i_0 += 1)
					{
						// sub                   : i_0
						// ori_name              : A[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : A[0]
						// regulate_c_name       : A_V
						// input_type_conversion : (A[i_0]).to_string(2).c_str()
						if (&(A[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<512> A_V_tmp_mem;
							A_V_tmp_mem = (A[i_0]).to_string(2).c_str();
							gmem_tvout_wrapc_buffer[hls_map_index].range(511, 0) = A_V_tmp_mem.range(511, 0);
                                 	       hls_map_index++;
						}
					}
				}
				// celement: B.V(511, 0)
				{
					// carray: (0) => (255) @ (1)
					for (int i_0 = 0; i_0 <= 255; i_0 += 1)
					{
						// sub                   : i_0
						// ori_name              : B[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : B[0]
						// regulate_c_name       : B_V
						// input_type_conversion : (B[i_0]).to_string(2).c_str()
						if (&(B[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<512> B_V_tmp_mem;
							B_V_tmp_mem = (B[i_0]).to_string(2).c_str();
							gmem_tvout_wrapc_buffer[hls_map_index].range(511, 0) = B_V_tmp_mem.range(511, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 768; i++)
		{
			sprintf(tvout_gmem, "%s\n", (gmem_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_gmem, tvout_gmem);
		}

		tcl_file.set_num(768, &tcl_file.gmem_depth);
		sprintf(tvout_gmem, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_gmem, tvout_gmem);

		// release memory allocation
		delete [] gmem_tvout_wrapc_buffer;

		CodeState = DELETE_CHAR_BUFFERS;
		// release memory allocation: "gmem"
		delete [] tvin_gmem;
		delete [] tvout_gmem;
		// release memory allocation: "C_V"
		delete [] tvin_C_V;
		// release memory allocation: "A_V"
		delete [] tvin_A_V;
		// release memory allocation: "B_V"
		delete [] tvin_B_V;
		// release memory allocation: "alpha"
		delete [] tvin_alpha;
		// release memory allocation: "beta"
		delete [] tvin_beta;

		AESL_transaction++;

		tcl_file.set_num(AESL_transaction , &tcl_file.trans_num);
	}
}

