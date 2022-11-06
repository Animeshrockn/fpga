#===================================
# run_hls.tcl for FIR
#===================================
# open the HLS project fir.prj
open_project kernel_gemm_baseline.prj -reset
# set the top-level function of the design to be fir
set_top kernel_gemm
# add design files
add_files kernel_gemm.cpp
# add the testbench files
add_files -tb kernel_gemm_test.cpp

# open HLS solution solution1
open_solution "solution1"
# set target FPGA device: Alveo U200 in this example
set_part {xcu200-fsgd2104-2-e}
# target clock period is 5 ns, i.e., 200MHz
create_clock -period 3.33

# do a c simulation
#csim_design
# synthesize the design
csynth_design
# do a co-simulation
#cosim_design
# close project and quit
close_project
# exit Vivado HLS
quit
