create_project prj -part xcu200-fsgd2104-2-e -force
set_property target_language verilog [current_project]
set vivado_ver [version -short]
set COE_DIR "../../syn/verilog"
source "/localhdd/kss24/kernel_gemm_4_DRAM_reorg/kernel_gemm_buffering.prj/solution1/syn/verilog/kernel_gemm_ap_fadd_5_full_dsp_32_ip.tcl"
if {[regexp -nocase {2015\.3.*} $vivado_ver match] || [regexp -nocase {2016\.1.*} $vivado_ver match]} {
    extract_files -base_dir "./prjsrcs/sources_1/ip" [get_files -all -of [get_ips kernel_gemm_ap_fadd_5_full_dsp_32]]
}
source "/localhdd/kss24/kernel_gemm_4_DRAM_reorg/kernel_gemm_buffering.prj/solution1/syn/verilog/kernel_gemm_ap_fmul_2_max_dsp_32_ip.tcl"
if {[regexp -nocase {2015\.3.*} $vivado_ver match] || [regexp -nocase {2016\.1.*} $vivado_ver match]} {
    extract_files -base_dir "./prjsrcs/sources_1/ip" [get_files -all -of [get_ips kernel_gemm_ap_fmul_2_max_dsp_32]]
}
