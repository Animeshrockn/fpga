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
    name local_A \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename local_A \
    op interface \
    ports { local_A_address0 { O 14 vector } local_A_ce0 { O 1 bit } local_A_we0 { O 1 bit } local_A_d0 { O 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'local_A'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 6 \
    name local_B_0 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename local_B_0 \
    op interface \
    ports { local_B_0_address0 { O 7 vector } local_B_0_ce0 { O 1 bit } local_B_0_we0 { O 1 bit } local_B_0_d0 { O 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'local_B_0'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 7 \
    name local_B_1 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename local_B_1 \
    op interface \
    ports { local_B_1_address0 { O 7 vector } local_B_1_ce0 { O 1 bit } local_B_1_we0 { O 1 bit } local_B_1_d0 { O 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'local_B_1'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 8 \
    name local_B_2 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename local_B_2 \
    op interface \
    ports { local_B_2_address0 { O 7 vector } local_B_2_ce0 { O 1 bit } local_B_2_we0 { O 1 bit } local_B_2_d0 { O 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'local_B_2'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 9 \
    name local_B_3 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename local_B_3 \
    op interface \
    ports { local_B_3_address0 { O 7 vector } local_B_3_ce0 { O 1 bit } local_B_3_we0 { O 1 bit } local_B_3_d0 { O 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'local_B_3'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 10 \
    name local_B_4 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename local_B_4 \
    op interface \
    ports { local_B_4_address0 { O 7 vector } local_B_4_ce0 { O 1 bit } local_B_4_we0 { O 1 bit } local_B_4_d0 { O 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'local_B_4'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 11 \
    name local_B_5 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename local_B_5 \
    op interface \
    ports { local_B_5_address0 { O 7 vector } local_B_5_ce0 { O 1 bit } local_B_5_we0 { O 1 bit } local_B_5_d0 { O 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'local_B_5'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 12 \
    name local_B_6 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename local_B_6 \
    op interface \
    ports { local_B_6_address0 { O 7 vector } local_B_6_ce0 { O 1 bit } local_B_6_we0 { O 1 bit } local_B_6_d0 { O 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'local_B_6'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 13 \
    name local_B_7 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename local_B_7 \
    op interface \
    ports { local_B_7_address0 { O 7 vector } local_B_7_ce0 { O 1 bit } local_B_7_we0 { O 1 bit } local_B_7_d0 { O 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'local_B_7'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 14 \
    name local_B_8 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename local_B_8 \
    op interface \
    ports { local_B_8_address0 { O 7 vector } local_B_8_ce0 { O 1 bit } local_B_8_we0 { O 1 bit } local_B_8_d0 { O 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'local_B_8'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 15 \
    name local_B_9 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename local_B_9 \
    op interface \
    ports { local_B_9_address0 { O 7 vector } local_B_9_ce0 { O 1 bit } local_B_9_we0 { O 1 bit } local_B_9_d0 { O 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'local_B_9'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 16 \
    name local_B_10 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename local_B_10 \
    op interface \
    ports { local_B_10_address0 { O 7 vector } local_B_10_ce0 { O 1 bit } local_B_10_we0 { O 1 bit } local_B_10_d0 { O 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'local_B_10'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 17 \
    name local_B_11 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename local_B_11 \
    op interface \
    ports { local_B_11_address0 { O 7 vector } local_B_11_ce0 { O 1 bit } local_B_11_we0 { O 1 bit } local_B_11_d0 { O 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'local_B_11'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 18 \
    name local_B_12 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename local_B_12 \
    op interface \
    ports { local_B_12_address0 { O 7 vector } local_B_12_ce0 { O 1 bit } local_B_12_we0 { O 1 bit } local_B_12_d0 { O 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'local_B_12'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 19 \
    name local_B_13 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename local_B_13 \
    op interface \
    ports { local_B_13_address0 { O 7 vector } local_B_13_ce0 { O 1 bit } local_B_13_we0 { O 1 bit } local_B_13_d0 { O 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'local_B_13'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 20 \
    name local_B_14 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename local_B_14 \
    op interface \
    ports { local_B_14_address0 { O 7 vector } local_B_14_ce0 { O 1 bit } local_B_14_we0 { O 1 bit } local_B_14_d0 { O 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'local_B_14'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 21 \
    name local_B_15 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename local_B_15 \
    op interface \
    ports { local_B_15_address0 { O 7 vector } local_B_15_ce0 { O 1 bit } local_B_15_we0 { O 1 bit } local_B_15_d0 { O 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'local_B_15'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 22 \
    name local_B_16 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename local_B_16 \
    op interface \
    ports { local_B_16_address0 { O 7 vector } local_B_16_ce0 { O 1 bit } local_B_16_we0 { O 1 bit } local_B_16_d0 { O 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'local_B_16'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 23 \
    name local_B_17 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename local_B_17 \
    op interface \
    ports { local_B_17_address0 { O 7 vector } local_B_17_ce0 { O 1 bit } local_B_17_we0 { O 1 bit } local_B_17_d0 { O 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'local_B_17'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 24 \
    name local_B_18 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename local_B_18 \
    op interface \
    ports { local_B_18_address0 { O 7 vector } local_B_18_ce0 { O 1 bit } local_B_18_we0 { O 1 bit } local_B_18_d0 { O 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'local_B_18'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 25 \
    name local_B_19 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename local_B_19 \
    op interface \
    ports { local_B_19_address0 { O 7 vector } local_B_19_ce0 { O 1 bit } local_B_19_we0 { O 1 bit } local_B_19_d0 { O 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'local_B_19'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 26 \
    name local_B_20 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename local_B_20 \
    op interface \
    ports { local_B_20_address0 { O 7 vector } local_B_20_ce0 { O 1 bit } local_B_20_we0 { O 1 bit } local_B_20_d0 { O 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'local_B_20'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 27 \
    name local_B_21 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename local_B_21 \
    op interface \
    ports { local_B_21_address0 { O 7 vector } local_B_21_ce0 { O 1 bit } local_B_21_we0 { O 1 bit } local_B_21_d0 { O 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'local_B_21'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 28 \
    name local_B_22 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename local_B_22 \
    op interface \
    ports { local_B_22_address0 { O 7 vector } local_B_22_ce0 { O 1 bit } local_B_22_we0 { O 1 bit } local_B_22_d0 { O 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'local_B_22'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 29 \
    name local_B_23 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename local_B_23 \
    op interface \
    ports { local_B_23_address0 { O 7 vector } local_B_23_ce0 { O 1 bit } local_B_23_we0 { O 1 bit } local_B_23_d0 { O 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'local_B_23'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 30 \
    name local_B_24 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename local_B_24 \
    op interface \
    ports { local_B_24_address0 { O 7 vector } local_B_24_ce0 { O 1 bit } local_B_24_we0 { O 1 bit } local_B_24_d0 { O 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'local_B_24'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 31 \
    name local_B_25 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename local_B_25 \
    op interface \
    ports { local_B_25_address0 { O 7 vector } local_B_25_ce0 { O 1 bit } local_B_25_we0 { O 1 bit } local_B_25_d0 { O 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'local_B_25'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 32 \
    name local_B_26 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename local_B_26 \
    op interface \
    ports { local_B_26_address0 { O 7 vector } local_B_26_ce0 { O 1 bit } local_B_26_we0 { O 1 bit } local_B_26_d0 { O 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'local_B_26'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 33 \
    name local_B_27 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename local_B_27 \
    op interface \
    ports { local_B_27_address0 { O 7 vector } local_B_27_ce0 { O 1 bit } local_B_27_we0 { O 1 bit } local_B_27_d0 { O 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'local_B_27'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 34 \
    name local_B_28 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename local_B_28 \
    op interface \
    ports { local_B_28_address0 { O 7 vector } local_B_28_ce0 { O 1 bit } local_B_28_we0 { O 1 bit } local_B_28_d0 { O 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'local_B_28'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 35 \
    name local_B_29 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename local_B_29 \
    op interface \
    ports { local_B_29_address0 { O 7 vector } local_B_29_ce0 { O 1 bit } local_B_29_we0 { O 1 bit } local_B_29_d0 { O 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'local_B_29'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 36 \
    name local_B_30 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename local_B_30 \
    op interface \
    ports { local_B_30_address0 { O 7 vector } local_B_30_ce0 { O 1 bit } local_B_30_we0 { O 1 bit } local_B_30_d0 { O 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'local_B_30'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 37 \
    name local_B_31 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename local_B_31 \
    op interface \
    ports { local_B_31_address0 { O 7 vector } local_B_31_ce0 { O 1 bit } local_B_31_we0 { O 1 bit } local_B_31_d0 { O 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'local_B_31'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 38 \
    name local_B_32 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename local_B_32 \
    op interface \
    ports { local_B_32_address0 { O 7 vector } local_B_32_ce0 { O 1 bit } local_B_32_we0 { O 1 bit } local_B_32_d0 { O 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'local_B_32'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 39 \
    name local_B_33 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename local_B_33 \
    op interface \
    ports { local_B_33_address0 { O 7 vector } local_B_33_ce0 { O 1 bit } local_B_33_we0 { O 1 bit } local_B_33_d0 { O 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'local_B_33'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 40 \
    name local_B_34 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename local_B_34 \
    op interface \
    ports { local_B_34_address0 { O 7 vector } local_B_34_ce0 { O 1 bit } local_B_34_we0 { O 1 bit } local_B_34_d0 { O 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'local_B_34'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 41 \
    name local_B_35 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename local_B_35 \
    op interface \
    ports { local_B_35_address0 { O 7 vector } local_B_35_ce0 { O 1 bit } local_B_35_we0 { O 1 bit } local_B_35_d0 { O 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'local_B_35'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 42 \
    name local_B_36 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename local_B_36 \
    op interface \
    ports { local_B_36_address0 { O 7 vector } local_B_36_ce0 { O 1 bit } local_B_36_we0 { O 1 bit } local_B_36_d0 { O 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'local_B_36'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 43 \
    name local_B_37 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename local_B_37 \
    op interface \
    ports { local_B_37_address0 { O 7 vector } local_B_37_ce0 { O 1 bit } local_B_37_we0 { O 1 bit } local_B_37_d0 { O 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'local_B_37'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 44 \
    name local_B_38 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename local_B_38 \
    op interface \
    ports { local_B_38_address0 { O 7 vector } local_B_38_ce0 { O 1 bit } local_B_38_we0 { O 1 bit } local_B_38_d0 { O 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'local_B_38'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 45 \
    name local_B_39 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename local_B_39 \
    op interface \
    ports { local_B_39_address0 { O 7 vector } local_B_39_ce0 { O 1 bit } local_B_39_we0 { O 1 bit } local_B_39_d0 { O 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'local_B_39'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 46 \
    name local_B_40 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename local_B_40 \
    op interface \
    ports { local_B_40_address0 { O 7 vector } local_B_40_ce0 { O 1 bit } local_B_40_we0 { O 1 bit } local_B_40_d0 { O 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'local_B_40'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 47 \
    name local_B_41 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename local_B_41 \
    op interface \
    ports { local_B_41_address0 { O 7 vector } local_B_41_ce0 { O 1 bit } local_B_41_we0 { O 1 bit } local_B_41_d0 { O 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'local_B_41'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 48 \
    name local_B_42 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename local_B_42 \
    op interface \
    ports { local_B_42_address0 { O 7 vector } local_B_42_ce0 { O 1 bit } local_B_42_we0 { O 1 bit } local_B_42_d0 { O 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'local_B_42'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 49 \
    name local_B_43 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename local_B_43 \
    op interface \
    ports { local_B_43_address0 { O 7 vector } local_B_43_ce0 { O 1 bit } local_B_43_we0 { O 1 bit } local_B_43_d0 { O 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'local_B_43'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 50 \
    name local_B_44 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename local_B_44 \
    op interface \
    ports { local_B_44_address0 { O 7 vector } local_B_44_ce0 { O 1 bit } local_B_44_we0 { O 1 bit } local_B_44_d0 { O 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'local_B_44'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 51 \
    name local_B_45 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename local_B_45 \
    op interface \
    ports { local_B_45_address0 { O 7 vector } local_B_45_ce0 { O 1 bit } local_B_45_we0 { O 1 bit } local_B_45_d0 { O 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'local_B_45'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 52 \
    name local_B_46 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename local_B_46 \
    op interface \
    ports { local_B_46_address0 { O 7 vector } local_B_46_ce0 { O 1 bit } local_B_46_we0 { O 1 bit } local_B_46_d0 { O 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'local_B_46'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 53 \
    name local_B_47 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename local_B_47 \
    op interface \
    ports { local_B_47_address0 { O 7 vector } local_B_47_ce0 { O 1 bit } local_B_47_we0 { O 1 bit } local_B_47_d0 { O 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'local_B_47'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 54 \
    name local_B_48 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename local_B_48 \
    op interface \
    ports { local_B_48_address0 { O 7 vector } local_B_48_ce0 { O 1 bit } local_B_48_we0 { O 1 bit } local_B_48_d0 { O 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'local_B_48'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 55 \
    name local_B_49 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename local_B_49 \
    op interface \
    ports { local_B_49_address0 { O 7 vector } local_B_49_ce0 { O 1 bit } local_B_49_we0 { O 1 bit } local_B_49_d0 { O 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'local_B_49'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 56 \
    name local_B_50 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename local_B_50 \
    op interface \
    ports { local_B_50_address0 { O 7 vector } local_B_50_ce0 { O 1 bit } local_B_50_we0 { O 1 bit } local_B_50_d0 { O 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'local_B_50'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 57 \
    name local_B_51 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename local_B_51 \
    op interface \
    ports { local_B_51_address0 { O 7 vector } local_B_51_ce0 { O 1 bit } local_B_51_we0 { O 1 bit } local_B_51_d0 { O 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'local_B_51'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 58 \
    name local_B_52 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename local_B_52 \
    op interface \
    ports { local_B_52_address0 { O 7 vector } local_B_52_ce0 { O 1 bit } local_B_52_we0 { O 1 bit } local_B_52_d0 { O 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'local_B_52'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 59 \
    name local_B_53 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename local_B_53 \
    op interface \
    ports { local_B_53_address0 { O 7 vector } local_B_53_ce0 { O 1 bit } local_B_53_we0 { O 1 bit } local_B_53_d0 { O 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'local_B_53'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 60 \
    name local_B_54 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename local_B_54 \
    op interface \
    ports { local_B_54_address0 { O 7 vector } local_B_54_ce0 { O 1 bit } local_B_54_we0 { O 1 bit } local_B_54_d0 { O 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'local_B_54'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 61 \
    name local_B_55 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename local_B_55 \
    op interface \
    ports { local_B_55_address0 { O 7 vector } local_B_55_ce0 { O 1 bit } local_B_55_we0 { O 1 bit } local_B_55_d0 { O 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'local_B_55'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 62 \
    name local_B_56 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename local_B_56 \
    op interface \
    ports { local_B_56_address0 { O 7 vector } local_B_56_ce0 { O 1 bit } local_B_56_we0 { O 1 bit } local_B_56_d0 { O 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'local_B_56'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 63 \
    name local_B_57 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename local_B_57 \
    op interface \
    ports { local_B_57_address0 { O 7 vector } local_B_57_ce0 { O 1 bit } local_B_57_we0 { O 1 bit } local_B_57_d0 { O 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'local_B_57'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 64 \
    name local_B_58 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename local_B_58 \
    op interface \
    ports { local_B_58_address0 { O 7 vector } local_B_58_ce0 { O 1 bit } local_B_58_we0 { O 1 bit } local_B_58_d0 { O 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'local_B_58'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 65 \
    name local_B_59 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename local_B_59 \
    op interface \
    ports { local_B_59_address0 { O 7 vector } local_B_59_ce0 { O 1 bit } local_B_59_we0 { O 1 bit } local_B_59_d0 { O 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'local_B_59'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 66 \
    name local_B_60 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename local_B_60 \
    op interface \
    ports { local_B_60_address0 { O 7 vector } local_B_60_ce0 { O 1 bit } local_B_60_we0 { O 1 bit } local_B_60_d0 { O 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'local_B_60'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 67 \
    name local_B_61 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename local_B_61 \
    op interface \
    ports { local_B_61_address0 { O 7 vector } local_B_61_ce0 { O 1 bit } local_B_61_we0 { O 1 bit } local_B_61_d0 { O 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'local_B_61'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 68 \
    name local_B_62 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename local_B_62 \
    op interface \
    ports { local_B_62_address0 { O 7 vector } local_B_62_ce0 { O 1 bit } local_B_62_we0 { O 1 bit } local_B_62_d0 { O 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'local_B_62'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 69 \
    name local_B_63 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename local_B_63 \
    op interface \
    ports { local_B_63_address0 { O 7 vector } local_B_63_ce0 { O 1 bit } local_B_63_we0 { O 1 bit } local_B_63_d0 { O 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'local_B_63'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 70 \
    name local_B_64 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename local_B_64 \
    op interface \
    ports { local_B_64_address0 { O 7 vector } local_B_64_ce0 { O 1 bit } local_B_64_we0 { O 1 bit } local_B_64_d0 { O 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'local_B_64'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 71 \
    name local_B_65 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename local_B_65 \
    op interface \
    ports { local_B_65_address0 { O 7 vector } local_B_65_ce0 { O 1 bit } local_B_65_we0 { O 1 bit } local_B_65_d0 { O 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'local_B_65'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 72 \
    name local_B_66 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename local_B_66 \
    op interface \
    ports { local_B_66_address0 { O 7 vector } local_B_66_ce0 { O 1 bit } local_B_66_we0 { O 1 bit } local_B_66_d0 { O 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'local_B_66'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 73 \
    name local_B_67 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename local_B_67 \
    op interface \
    ports { local_B_67_address0 { O 7 vector } local_B_67_ce0 { O 1 bit } local_B_67_we0 { O 1 bit } local_B_67_d0 { O 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'local_B_67'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 74 \
    name local_B_68 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename local_B_68 \
    op interface \
    ports { local_B_68_address0 { O 7 vector } local_B_68_ce0 { O 1 bit } local_B_68_we0 { O 1 bit } local_B_68_d0 { O 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'local_B_68'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 75 \
    name local_B_69 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename local_B_69 \
    op interface \
    ports { local_B_69_address0 { O 7 vector } local_B_69_ce0 { O 1 bit } local_B_69_we0 { O 1 bit } local_B_69_d0 { O 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'local_B_69'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 76 \
    name local_B_70 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename local_B_70 \
    op interface \
    ports { local_B_70_address0 { O 7 vector } local_B_70_ce0 { O 1 bit } local_B_70_we0 { O 1 bit } local_B_70_d0 { O 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'local_B_70'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 77 \
    name local_B_71 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename local_B_71 \
    op interface \
    ports { local_B_71_address0 { O 7 vector } local_B_71_ce0 { O 1 bit } local_B_71_we0 { O 1 bit } local_B_71_d0 { O 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'local_B_71'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 78 \
    name local_B_72 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename local_B_72 \
    op interface \
    ports { local_B_72_address0 { O 7 vector } local_B_72_ce0 { O 1 bit } local_B_72_we0 { O 1 bit } local_B_72_d0 { O 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'local_B_72'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 79 \
    name local_B_73 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename local_B_73 \
    op interface \
    ports { local_B_73_address0 { O 7 vector } local_B_73_ce0 { O 1 bit } local_B_73_we0 { O 1 bit } local_B_73_d0 { O 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'local_B_73'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 80 \
    name local_B_74 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename local_B_74 \
    op interface \
    ports { local_B_74_address0 { O 7 vector } local_B_74_ce0 { O 1 bit } local_B_74_we0 { O 1 bit } local_B_74_d0 { O 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'local_B_74'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 81 \
    name local_B_75 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename local_B_75 \
    op interface \
    ports { local_B_75_address0 { O 7 vector } local_B_75_ce0 { O 1 bit } local_B_75_we0 { O 1 bit } local_B_75_d0 { O 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'local_B_75'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 82 \
    name local_B_76 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename local_B_76 \
    op interface \
    ports { local_B_76_address0 { O 7 vector } local_B_76_ce0 { O 1 bit } local_B_76_we0 { O 1 bit } local_B_76_d0 { O 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'local_B_76'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 83 \
    name local_B_77 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename local_B_77 \
    op interface \
    ports { local_B_77_address0 { O 7 vector } local_B_77_ce0 { O 1 bit } local_B_77_we0 { O 1 bit } local_B_77_d0 { O 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'local_B_77'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 84 \
    name local_B_78 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename local_B_78 \
    op interface \
    ports { local_B_78_address0 { O 7 vector } local_B_78_ce0 { O 1 bit } local_B_78_we0 { O 1 bit } local_B_78_d0 { O 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'local_B_78'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 85 \
    name local_B_79 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename local_B_79 \
    op interface \
    ports { local_B_79_address0 { O 7 vector } local_B_79_ce0 { O 1 bit } local_B_79_we0 { O 1 bit } local_B_79_d0 { O 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'local_B_79'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 86 \
    name local_B_80 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename local_B_80 \
    op interface \
    ports { local_B_80_address0 { O 7 vector } local_B_80_ce0 { O 1 bit } local_B_80_we0 { O 1 bit } local_B_80_d0 { O 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'local_B_80'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 87 \
    name local_B_81 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename local_B_81 \
    op interface \
    ports { local_B_81_address0 { O 7 vector } local_B_81_ce0 { O 1 bit } local_B_81_we0 { O 1 bit } local_B_81_d0 { O 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'local_B_81'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 88 \
    name local_B_82 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename local_B_82 \
    op interface \
    ports { local_B_82_address0 { O 7 vector } local_B_82_ce0 { O 1 bit } local_B_82_we0 { O 1 bit } local_B_82_d0 { O 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'local_B_82'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 89 \
    name local_B_83 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename local_B_83 \
    op interface \
    ports { local_B_83_address0 { O 7 vector } local_B_83_ce0 { O 1 bit } local_B_83_we0 { O 1 bit } local_B_83_d0 { O 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'local_B_83'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 90 \
    name local_B_84 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename local_B_84 \
    op interface \
    ports { local_B_84_address0 { O 7 vector } local_B_84_ce0 { O 1 bit } local_B_84_we0 { O 1 bit } local_B_84_d0 { O 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'local_B_84'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 91 \
    name local_B_85 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename local_B_85 \
    op interface \
    ports { local_B_85_address0 { O 7 vector } local_B_85_ce0 { O 1 bit } local_B_85_we0 { O 1 bit } local_B_85_d0 { O 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'local_B_85'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 92 \
    name local_B_86 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename local_B_86 \
    op interface \
    ports { local_B_86_address0 { O 7 vector } local_B_86_ce0 { O 1 bit } local_B_86_we0 { O 1 bit } local_B_86_d0 { O 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'local_B_86'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 93 \
    name local_B_87 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename local_B_87 \
    op interface \
    ports { local_B_87_address0 { O 7 vector } local_B_87_ce0 { O 1 bit } local_B_87_we0 { O 1 bit } local_B_87_d0 { O 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'local_B_87'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 94 \
    name local_B_88 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename local_B_88 \
    op interface \
    ports { local_B_88_address0 { O 7 vector } local_B_88_ce0 { O 1 bit } local_B_88_we0 { O 1 bit } local_B_88_d0 { O 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'local_B_88'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 95 \
    name local_B_89 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename local_B_89 \
    op interface \
    ports { local_B_89_address0 { O 7 vector } local_B_89_ce0 { O 1 bit } local_B_89_we0 { O 1 bit } local_B_89_d0 { O 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'local_B_89'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 96 \
    name local_B_90 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename local_B_90 \
    op interface \
    ports { local_B_90_address0 { O 7 vector } local_B_90_ce0 { O 1 bit } local_B_90_we0 { O 1 bit } local_B_90_d0 { O 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'local_B_90'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 97 \
    name local_B_91 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename local_B_91 \
    op interface \
    ports { local_B_91_address0 { O 7 vector } local_B_91_ce0 { O 1 bit } local_B_91_we0 { O 1 bit } local_B_91_d0 { O 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'local_B_91'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 98 \
    name local_B_92 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename local_B_92 \
    op interface \
    ports { local_B_92_address0 { O 7 vector } local_B_92_ce0 { O 1 bit } local_B_92_we0 { O 1 bit } local_B_92_d0 { O 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'local_B_92'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 99 \
    name local_B_93 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename local_B_93 \
    op interface \
    ports { local_B_93_address0 { O 7 vector } local_B_93_ce0 { O 1 bit } local_B_93_we0 { O 1 bit } local_B_93_d0 { O 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'local_B_93'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 100 \
    name local_B_94 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename local_B_94 \
    op interface \
    ports { local_B_94_address0 { O 7 vector } local_B_94_ce0 { O 1 bit } local_B_94_we0 { O 1 bit } local_B_94_d0 { O 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'local_B_94'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 101 \
    name local_B_95 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename local_B_95 \
    op interface \
    ports { local_B_95_address0 { O 7 vector } local_B_95_ce0 { O 1 bit } local_B_95_we0 { O 1 bit } local_B_95_d0 { O 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'local_B_95'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 102 \
    name local_B_96 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename local_B_96 \
    op interface \
    ports { local_B_96_address0 { O 7 vector } local_B_96_ce0 { O 1 bit } local_B_96_we0 { O 1 bit } local_B_96_d0 { O 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'local_B_96'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 103 \
    name local_B_97 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename local_B_97 \
    op interface \
    ports { local_B_97_address0 { O 7 vector } local_B_97_ce0 { O 1 bit } local_B_97_we0 { O 1 bit } local_B_97_d0 { O 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'local_B_97'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 104 \
    name local_B_98 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename local_B_98 \
    op interface \
    ports { local_B_98_address0 { O 7 vector } local_B_98_ce0 { O 1 bit } local_B_98_we0 { O 1 bit } local_B_98_d0 { O 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'local_B_98'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 105 \
    name local_B_99 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename local_B_99 \
    op interface \
    ports { local_B_99_address0 { O 7 vector } local_B_99_ce0 { O 1 bit } local_B_99_we0 { O 1 bit } local_B_99_d0 { O 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'local_B_99'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 106 \
    name local_B_100 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename local_B_100 \
    op interface \
    ports { local_B_100_address0 { O 7 vector } local_B_100_ce0 { O 1 bit } local_B_100_we0 { O 1 bit } local_B_100_d0 { O 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'local_B_100'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 107 \
    name local_B_101 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename local_B_101 \
    op interface \
    ports { local_B_101_address0 { O 7 vector } local_B_101_ce0 { O 1 bit } local_B_101_we0 { O 1 bit } local_B_101_d0 { O 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'local_B_101'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 108 \
    name local_B_102 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename local_B_102 \
    op interface \
    ports { local_B_102_address0 { O 7 vector } local_B_102_ce0 { O 1 bit } local_B_102_we0 { O 1 bit } local_B_102_d0 { O 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'local_B_102'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 109 \
    name local_B_103 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename local_B_103 \
    op interface \
    ports { local_B_103_address0 { O 7 vector } local_B_103_ce0 { O 1 bit } local_B_103_we0 { O 1 bit } local_B_103_d0 { O 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'local_B_103'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 110 \
    name local_B_104 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename local_B_104 \
    op interface \
    ports { local_B_104_address0 { O 7 vector } local_B_104_ce0 { O 1 bit } local_B_104_we0 { O 1 bit } local_B_104_d0 { O 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'local_B_104'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 111 \
    name local_B_105 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename local_B_105 \
    op interface \
    ports { local_B_105_address0 { O 7 vector } local_B_105_ce0 { O 1 bit } local_B_105_we0 { O 1 bit } local_B_105_d0 { O 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'local_B_105'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 112 \
    name local_B_106 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename local_B_106 \
    op interface \
    ports { local_B_106_address0 { O 7 vector } local_B_106_ce0 { O 1 bit } local_B_106_we0 { O 1 bit } local_B_106_d0 { O 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'local_B_106'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 113 \
    name local_B_107 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename local_B_107 \
    op interface \
    ports { local_B_107_address0 { O 7 vector } local_B_107_ce0 { O 1 bit } local_B_107_we0 { O 1 bit } local_B_107_d0 { O 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'local_B_107'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 114 \
    name local_B_108 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename local_B_108 \
    op interface \
    ports { local_B_108_address0 { O 7 vector } local_B_108_ce0 { O 1 bit } local_B_108_we0 { O 1 bit } local_B_108_d0 { O 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'local_B_108'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 115 \
    name local_B_109 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename local_B_109 \
    op interface \
    ports { local_B_109_address0 { O 7 vector } local_B_109_ce0 { O 1 bit } local_B_109_we0 { O 1 bit } local_B_109_d0 { O 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'local_B_109'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 116 \
    name local_B_110 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename local_B_110 \
    op interface \
    ports { local_B_110_address0 { O 7 vector } local_B_110_ce0 { O 1 bit } local_B_110_we0 { O 1 bit } local_B_110_d0 { O 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'local_B_110'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 117 \
    name local_B_111 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename local_B_111 \
    op interface \
    ports { local_B_111_address0 { O 7 vector } local_B_111_ce0 { O 1 bit } local_B_111_we0 { O 1 bit } local_B_111_d0 { O 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'local_B_111'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 118 \
    name local_B_112 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename local_B_112 \
    op interface \
    ports { local_B_112_address0 { O 7 vector } local_B_112_ce0 { O 1 bit } local_B_112_we0 { O 1 bit } local_B_112_d0 { O 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'local_B_112'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 119 \
    name local_B_113 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename local_B_113 \
    op interface \
    ports { local_B_113_address0 { O 7 vector } local_B_113_ce0 { O 1 bit } local_B_113_we0 { O 1 bit } local_B_113_d0 { O 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'local_B_113'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 120 \
    name local_B_114 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename local_B_114 \
    op interface \
    ports { local_B_114_address0 { O 7 vector } local_B_114_ce0 { O 1 bit } local_B_114_we0 { O 1 bit } local_B_114_d0 { O 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'local_B_114'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 121 \
    name local_B_115 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename local_B_115 \
    op interface \
    ports { local_B_115_address0 { O 7 vector } local_B_115_ce0 { O 1 bit } local_B_115_we0 { O 1 bit } local_B_115_d0 { O 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'local_B_115'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 122 \
    name local_B_116 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename local_B_116 \
    op interface \
    ports { local_B_116_address0 { O 7 vector } local_B_116_ce0 { O 1 bit } local_B_116_we0 { O 1 bit } local_B_116_d0 { O 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'local_B_116'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 123 \
    name local_B_117 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename local_B_117 \
    op interface \
    ports { local_B_117_address0 { O 7 vector } local_B_117_ce0 { O 1 bit } local_B_117_we0 { O 1 bit } local_B_117_d0 { O 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'local_B_117'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 124 \
    name local_B_118 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename local_B_118 \
    op interface \
    ports { local_B_118_address0 { O 7 vector } local_B_118_ce0 { O 1 bit } local_B_118_we0 { O 1 bit } local_B_118_d0 { O 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'local_B_118'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 125 \
    name local_B_119 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename local_B_119 \
    op interface \
    ports { local_B_119_address0 { O 7 vector } local_B_119_ce0 { O 1 bit } local_B_119_we0 { O 1 bit } local_B_119_d0 { O 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'local_B_119'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 126 \
    name local_B_120 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename local_B_120 \
    op interface \
    ports { local_B_120_address0 { O 7 vector } local_B_120_ce0 { O 1 bit } local_B_120_we0 { O 1 bit } local_B_120_d0 { O 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'local_B_120'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 127 \
    name local_B_121 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename local_B_121 \
    op interface \
    ports { local_B_121_address0 { O 7 vector } local_B_121_ce0 { O 1 bit } local_B_121_we0 { O 1 bit } local_B_121_d0 { O 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'local_B_121'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 128 \
    name local_B_122 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename local_B_122 \
    op interface \
    ports { local_B_122_address0 { O 7 vector } local_B_122_ce0 { O 1 bit } local_B_122_we0 { O 1 bit } local_B_122_d0 { O 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'local_B_122'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 129 \
    name local_B_123 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename local_B_123 \
    op interface \
    ports { local_B_123_address0 { O 7 vector } local_B_123_ce0 { O 1 bit } local_B_123_we0 { O 1 bit } local_B_123_d0 { O 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'local_B_123'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 130 \
    name local_B_124 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename local_B_124 \
    op interface \
    ports { local_B_124_address0 { O 7 vector } local_B_124_ce0 { O 1 bit } local_B_124_we0 { O 1 bit } local_B_124_d0 { O 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'local_B_124'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 131 \
    name local_B_125 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename local_B_125 \
    op interface \
    ports { local_B_125_address0 { O 7 vector } local_B_125_ce0 { O 1 bit } local_B_125_we0 { O 1 bit } local_B_125_d0 { O 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'local_B_125'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 132 \
    name local_B_126 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename local_B_126 \
    op interface \
    ports { local_B_126_address0 { O 7 vector } local_B_126_ce0 { O 1 bit } local_B_126_we0 { O 1 bit } local_B_126_d0 { O 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'local_B_126'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 133 \
    name local_B_127 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename local_B_127 \
    op interface \
    ports { local_B_127_address0 { O 7 vector } local_B_127_ce0 { O 1 bit } local_B_127_we0 { O 1 bit } local_B_127_d0 { O 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'local_B_127'"
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
    id 134 \
    name A \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_A \
    op interface \
    ports { m_axi_A_AWVALID { O 1 bit } m_axi_A_AWREADY { I 1 bit } m_axi_A_AWADDR { O 32 vector } m_axi_A_AWID { O 1 vector } m_axi_A_AWLEN { O 32 vector } m_axi_A_AWSIZE { O 3 vector } m_axi_A_AWBURST { O 2 vector } m_axi_A_AWLOCK { O 2 vector } m_axi_A_AWCACHE { O 4 vector } m_axi_A_AWPROT { O 3 vector } m_axi_A_AWQOS { O 4 vector } m_axi_A_AWREGION { O 4 vector } m_axi_A_AWUSER { O 1 vector } m_axi_A_WVALID { O 1 bit } m_axi_A_WREADY { I 1 bit } m_axi_A_WDATA { O 32 vector } m_axi_A_WSTRB { O 4 vector } m_axi_A_WLAST { O 1 bit } m_axi_A_WID { O 1 vector } m_axi_A_WUSER { O 1 vector } m_axi_A_ARVALID { O 1 bit } m_axi_A_ARREADY { I 1 bit } m_axi_A_ARADDR { O 32 vector } m_axi_A_ARID { O 1 vector } m_axi_A_ARLEN { O 32 vector } m_axi_A_ARSIZE { O 3 vector } m_axi_A_ARBURST { O 2 vector } m_axi_A_ARLOCK { O 2 vector } m_axi_A_ARCACHE { O 4 vector } m_axi_A_ARPROT { O 3 vector } m_axi_A_ARQOS { O 4 vector } m_axi_A_ARREGION { O 4 vector } m_axi_A_ARUSER { O 1 vector } m_axi_A_RVALID { I 1 bit } m_axi_A_RREADY { O 1 bit } m_axi_A_RDATA { I 32 vector } m_axi_A_RLAST { I 1 bit } m_axi_A_RID { I 1 vector } m_axi_A_RUSER { I 1 vector } m_axi_A_RRESP { I 2 vector } m_axi_A_BVALID { I 1 bit } m_axi_A_BREADY { O 1 bit } m_axi_A_BRESP { I 2 vector } m_axi_A_BID { I 1 vector } m_axi_A_BUSER { I 1 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 135 \
    name A_offset \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_A_offset \
    op interface \
    ports { A_offset { I 30 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 136 \
    name B_offset \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_B_offset \
    op interface \
    ports { B_offset { I 30 vector } } \
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


