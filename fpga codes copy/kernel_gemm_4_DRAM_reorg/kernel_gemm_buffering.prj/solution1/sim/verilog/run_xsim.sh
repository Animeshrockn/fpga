
/local-scratch/Xilinx/Vivado/2020.1/bin/xelab xil_defaultlib.apatb_kernel_gemm_top glbl -prj kernel_gemm.prj -L smartconnect_v1_0 -L axi_protocol_checker_v1_1_12 -L axi_protocol_checker_v1_1_13 -L axis_protocol_checker_v1_1_11 -L axis_protocol_checker_v1_1_12 -L xil_defaultlib -L unisims_ver -L xpm --initfile "/local-scratch/Xilinx/Vivado/2020.1/data/xsim/ip/xsim_ip.ini" --lib "ieee_proposed=./ieee_proposed" -s kernel_gemm 
/local-scratch/Xilinx/Vivado/2020.1/bin/xsim --noieeewarnings kernel_gemm -tclbatch kernel_gemm.tcl

