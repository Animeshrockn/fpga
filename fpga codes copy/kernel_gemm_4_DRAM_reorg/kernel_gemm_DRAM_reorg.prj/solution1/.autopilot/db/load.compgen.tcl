# This script segment is generated automatically by AutoPilot

# clear list
if {${::AESL::PGuard_autoexp_gen}} {
    cg_default_interface_gen_dc_begin
    cg_default_interface_gen_bundle_begin
    AESL_LIB_XILADAPTER::native_axis_begin
}

# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 5 \
    name local_A_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename local_A_V \
    op interface \
    ports { local_A_V_address0 { O 10 vector } local_A_V_ce0 { O 1 bit } local_A_V_we0 { O 1 bit } local_A_V_d0 { O 512 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'local_A_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 6 \
    name local_B_0_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename local_B_0_V \
    op interface \
    ports { local_B_0_V_address0 { O 7 vector } local_B_0_V_ce0 { O 1 bit } local_B_0_V_we0 { O 1 bit } local_B_0_V_d0 { O 512 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'local_B_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 7 \
    name local_B_1_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename local_B_1_V \
    op interface \
    ports { local_B_1_V_address0 { O 7 vector } local_B_1_V_ce0 { O 1 bit } local_B_1_V_we0 { O 1 bit } local_B_1_V_d0 { O 512 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'local_B_1_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 8 \
    name local_B_2_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename local_B_2_V \
    op interface \
    ports { local_B_2_V_address0 { O 7 vector } local_B_2_V_ce0 { O 1 bit } local_B_2_V_we0 { O 1 bit } local_B_2_V_d0 { O 512 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'local_B_2_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 9 \
    name local_B_3_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename local_B_3_V \
    op interface \
    ports { local_B_3_V_address0 { O 7 vector } local_B_3_V_ce0 { O 1 bit } local_B_3_V_we0 { O 1 bit } local_B_3_V_d0 { O 512 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'local_B_3_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 10 \
    name local_B_4_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename local_B_4_V \
    op interface \
    ports { local_B_4_V_address0 { O 7 vector } local_B_4_V_ce0 { O 1 bit } local_B_4_V_we0 { O 1 bit } local_B_4_V_d0 { O 512 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'local_B_4_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 11 \
    name local_B_5_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename local_B_5_V \
    op interface \
    ports { local_B_5_V_address0 { O 7 vector } local_B_5_V_ce0 { O 1 bit } local_B_5_V_we0 { O 1 bit } local_B_5_V_d0 { O 512 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'local_B_5_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 12 \
    name local_B_6_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename local_B_6_V \
    op interface \
    ports { local_B_6_V_address0 { O 7 vector } local_B_6_V_ce0 { O 1 bit } local_B_6_V_we0 { O 1 bit } local_B_6_V_d0 { O 512 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'local_B_6_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 13 \
    name local_B_7_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename local_B_7_V \
    op interface \
    ports { local_B_7_V_address0 { O 7 vector } local_B_7_V_ce0 { O 1 bit } local_B_7_V_we0 { O 1 bit } local_B_7_V_d0 { O 512 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'local_B_7_V'"
}
}


# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1 \
    name flag \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_flag \
    op interface \
    ports { flag { I 1 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2 \
    name i \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_i \
    op interface \
    ports { i { I 12 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 3 \
    name j \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_j \
    op interface \
    ports { j { I 12 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 4 \
    name k \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_k \
    op interface \
    ports { k { I 12 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 14 \
    name A_V \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_A_V \
    op interface \
    ports { m_axi_A_V_AWVALID { O 1 bit } m_axi_A_V_AWREADY { I 1 bit } m_axi_A_V_AWADDR { O 32 vector } m_axi_A_V_AWID { O 1 vector } m_axi_A_V_AWLEN { O 32 vector } m_axi_A_V_AWSIZE { O 3 vector } m_axi_A_V_AWBURST { O 2 vector } m_axi_A_V_AWLOCK { O 2 vector } m_axi_A_V_AWCACHE { O 4 vector } m_axi_A_V_AWPROT { O 3 vector } m_axi_A_V_AWQOS { O 4 vector } m_axi_A_V_AWREGION { O 4 vector } m_axi_A_V_AWUSER { O 1 vector } m_axi_A_V_WVALID { O 1 bit } m_axi_A_V_WREADY { I 1 bit } m_axi_A_V_WDATA { O 512 vector } m_axi_A_V_WSTRB { O 64 vector } m_axi_A_V_WLAST { O 1 bit } m_axi_A_V_WID { O 1 vector } m_axi_A_V_WUSER { O 1 vector } m_axi_A_V_ARVALID { O 1 bit } m_axi_A_V_ARREADY { I 1 bit } m_axi_A_V_ARADDR { O 32 vector } m_axi_A_V_ARID { O 1 vector } m_axi_A_V_ARLEN { O 32 vector } m_axi_A_V_ARSIZE { O 3 vector } m_axi_A_V_ARBURST { O 2 vector } m_axi_A_V_ARLOCK { O 2 vector } m_axi_A_V_ARCACHE { O 4 vector } m_axi_A_V_ARPROT { O 3 vector } m_axi_A_V_ARQOS { O 4 vector } m_axi_A_V_ARREGION { O 4 vector } m_axi_A_V_ARUSER { O 1 vector } m_axi_A_V_RVALID { I 1 bit } m_axi_A_V_RREADY { O 1 bit } m_axi_A_V_RDATA { I 512 vector } m_axi_A_V_RLAST { I 1 bit } m_axi_A_V_RID { I 1 vector } m_axi_A_V_RUSER { I 1 vector } m_axi_A_V_RRESP { I 2 vector } m_axi_A_V_BVALID { I 1 bit } m_axi_A_V_BREADY { O 1 bit } m_axi_A_V_BRESP { I 2 vector } m_axi_A_V_BID { I 1 vector } m_axi_A_V_BUSER { I 1 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 15 \
    name A_V_offset \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_A_V_offset \
    op interface \
    ports { A_V_offset { I 26 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 16 \
    name B_V_offset \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_B_V_offset \
    op interface \
    ports { B_V_offset { I 26 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id -1 \
    name ap_ctrl \
    type ap_ctrl \
    reset_level 1 \
    sync_rst true \
    corename ap_ctrl \
    op interface \
    ports { ap_start { I 1 bit } ap_ready { O 1 bit } ap_done { O 1 bit } ap_idle { O 1 bit } } \
} "
}


# Adapter definition:
set PortName ap_clk
set DataWd 1 
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc cg_default_interface_gen_clock] == "cg_default_interface_gen_clock"} {
eval "cg_default_interface_gen_clock { \
    id -2 \
    name ${PortName} \
    reset_level 1 \
    sync_rst true \
    corename apif_ap_clk \
    data_wd ${DataWd} \
    op interface \
}"
} else {
puts "@W \[IMPL-113\] Cannot find bus interface model in the library. Ignored generation of bus interface for '${PortName}'"
}
}


# Adapter definition:
set PortName ap_rst
set DataWd 1 
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc cg_default_interface_gen_reset] == "cg_default_interface_gen_reset"} {
eval "cg_default_interface_gen_reset { \
    id -3 \
    name ${PortName} \
    reset_level 1 \
    sync_rst true \
    corename apif_ap_rst \
    data_wd ${DataWd} \
    op interface \
}"
} else {
puts "@W \[IMPL-114\] Cannot find bus interface model in the library. Ignored generation of bus interface for '${PortName}'"
}
}



# merge
if {${::AESL::PGuard_autoexp_gen}} {
    cg_default_interface_gen_dc_end
    cg_default_interface_gen_bundle_end
    AESL_LIB_XILADAPTER::native_axis_end
}


