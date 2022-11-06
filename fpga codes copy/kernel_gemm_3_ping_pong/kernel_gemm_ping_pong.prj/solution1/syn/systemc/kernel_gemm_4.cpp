#include "kernel_gemm.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void kernel_gemm::thread_add_ln61_fu_5013_p2() {
    add_ln61_fu_5013_p2 = (!indvar_flatten277_reg_4440.read().is_01() || !ap_const_lv9_1.is_01())? sc_lv<9>(): (sc_biguint<9>(indvar_flatten277_reg_4440.read()) + sc_biguint<9>(ap_const_lv9_1));
}

void kernel_gemm::thread_add_ln65_fu_5076_p2() {
    add_ln65_fu_5076_p2 = (!indvar_flatten_reg_4473.read().is_01() || !ap_const_lv15_1.is_01())? sc_lv<15>(): (sc_biguint<15>(indvar_flatten_reg_4473.read()) + sc_biguint<15>(ap_const_lv15_1));
}

void kernel_gemm::thread_add_ln68_1_fu_5106_p2() {
    add_ln68_1_fu_5106_p2 = (!select_ln61_reg_5979.read().is_01() || !zext_ln68_1_fu_5102_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(select_ln61_reg_5979.read()) + sc_biguint<12>(zext_ln68_1_fu_5102_p1.read()));
}

void kernel_gemm::thread_add_ln68_2_fu_5135_p2() {
    add_ln68_2_fu_5135_p2 = (!select_ln68_2_fu_5127_p3.read().is_01() || !zext_ln62_reg_5989.read().is_01())? sc_lv<23>(): (sc_biguint<23>(select_ln68_2_fu_5127_p3.read()) + sc_biguint<23>(zext_ln62_reg_5989.read()));
}

void kernel_gemm::thread_add_ln68_3_fu_5171_p2() {
    add_ln68_3_fu_5171_p2 = (!zext_ln66_fu_5168_p1.read().is_01() || !p_cast_reg_5958.read().is_01())? sc_lv<31>(): (sc_biguint<31>(zext_ln66_fu_5168_p1.read()) + sc_biguint<31>(p_cast_reg_5958.read()));
}

void kernel_gemm::thread_add_ln68_fu_5057_p2() {
    add_ln68_fu_5057_p2 = (!zext_ln68_fu_5053_p1.read().is_01() || !select_ln61_reg_5979.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln68_fu_5053_p1.read()) + sc_biguint<12>(select_ln61_reg_5979.read()));
}

void kernel_gemm::thread_add_ln88_fu_5407_p2() {
    add_ln88_fu_5407_p2 = (!ap_phi_mux_indvar_flatten269_phi_fu_4521_p4.read().is_01() || !ap_const_lv15_1.is_01())? sc_lv<15>(): (sc_biguint<15>(ap_phi_mux_indvar_flatten269_phi_fu_4521_p4.read()) + sc_biguint<15>(ap_const_lv15_1));
}

void kernel_gemm::thread_add_ln91_1_fu_5445_p2() {
    add_ln91_1_fu_5445_p2 = (!select_ln61_reg_5979.read().is_01() || !zext_ln91_2_fu_5441_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(select_ln61_reg_5979.read()) + sc_biguint<12>(zext_ln91_2_fu_5441_p1.read()));
}

void kernel_gemm::thread_add_ln91_2_fu_5466_p2() {
    add_ln91_2_fu_5466_p2 = (!select_ln91_2_fu_5458_p3.read().is_01() || !zext_ln62_reg_5989.read().is_01())? sc_lv<23>(): (sc_biguint<23>(select_ln91_2_fu_5458_p3.read()) + sc_biguint<23>(zext_ln62_reg_5989.read()));
}

void kernel_gemm::thread_add_ln91_3_fu_5633_p2() {
    add_ln91_3_fu_5633_p2 = (!zext_ln89_fu_5630_p1.read().is_01() || !p_cast_reg_5958.read().is_01())? sc_lv<31>(): (sc_biguint<31>(zext_ln89_fu_5630_p1.read()) + sc_biguint<31>(p_cast_reg_5958.read()));
}

void kernel_gemm::thread_add_ln91_fu_5388_p2() {
    add_ln91_fu_5388_p2 = (!zext_ln91_fu_5384_p1.read().is_01() || !select_ln61_reg_5979.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln91_fu_5384_p1.read()) + sc_biguint<12>(select_ln61_reg_5979.read()));
}

void kernel_gemm::thread_ap_CS_fsm_pp0_stage0() {
    ap_CS_fsm_pp0_stage0 = ap_CS_fsm.read()[2];
}

void kernel_gemm::thread_ap_CS_fsm_pp1_stage0() {
    ap_CS_fsm_pp1_stage0 = ap_CS_fsm.read()[6];
}

void kernel_gemm::thread_ap_CS_fsm_state1() {
    ap_CS_fsm_state1 = ap_CS_fsm.read()[0];
}

void kernel_gemm::thread_ap_CS_fsm_state18() {
    ap_CS_fsm_state18 = ap_CS_fsm.read()[3];
}

void kernel_gemm::thread_ap_CS_fsm_state19() {
    ap_CS_fsm_state19 = ap_CS_fsm.read()[4];
}

void kernel_gemm::thread_ap_CS_fsm_state2() {
    ap_CS_fsm_state2 = ap_CS_fsm.read()[1];
}

void kernel_gemm::thread_ap_CS_fsm_state20() {
    ap_CS_fsm_state20 = ap_CS_fsm.read()[5];
}

void kernel_gemm::thread_ap_CS_fsm_state30() {
    ap_CS_fsm_state30 = ap_CS_fsm.read()[7];
}

void kernel_gemm::thread_ap_block_pp0_stage0() {
    ap_block_pp0_stage0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void kernel_gemm::thread_ap_block_pp0_stage0_11001() {
    ap_block_pp0_stage0_11001 = ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_block_state5_io.read())) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_0, gmem_RVALID.read())));
}

void kernel_gemm::thread_ap_block_pp0_stage0_subdone() {
    ap_block_pp0_stage0_subdone = ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_block_state5_io.read())) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_0, gmem_RVALID.read())));
}

void kernel_gemm::thread_ap_block_pp1_stage0() {
    ap_block_pp1_stage0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void kernel_gemm::thread_ap_block_pp1_stage0_01001() {
    ap_block_pp1_stage0_01001 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter8.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, empty_21_reg_6889_pp1_iter7_reg.read()) && esl_seteq<1,1,1>(ap_const_logic_0, gmem_BVALID.read()));
}

void kernel_gemm::thread_ap_block_pp1_stage0_11001() {
    ap_block_pp1_stage0_11001 = ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_block_state23_io.read())) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_block_state24_io.read())) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter8.read()) && 
  esl_seteq<1,1,1>(ap_const_lv1_1, empty_21_reg_6889_pp1_iter7_reg.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_0, gmem_BVALID.read())));
}

void kernel_gemm::thread_ap_block_pp1_stage0_subdone() {
    ap_block_pp1_stage0_subdone = ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_block_state23_io.read())) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_block_state24_io.read())) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter8.read()) && 
  esl_seteq<1,1,1>(ap_const_lv1_1, empty_21_reg_6889_pp1_iter7_reg.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_0, gmem_BVALID.read())));
}

void kernel_gemm::thread_ap_block_state10_pp0_stage0_iter7() {
    ap_block_state10_pp0_stage0_iter7 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void kernel_gemm::thread_ap_block_state11_pp0_stage0_iter8() {
    ap_block_state11_pp0_stage0_iter8 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void kernel_gemm::thread_ap_block_state12_pp0_stage0_iter9() {
    ap_block_state12_pp0_stage0_iter9 = esl_seteq<1,1,1>(ap_const_logic_0, gmem_RVALID.read());
}

void kernel_gemm::thread_ap_block_state13_pp0_stage0_iter10() {
    ap_block_state13_pp0_stage0_iter10 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void kernel_gemm::thread_ap_block_state14_pp0_stage0_iter11() {
    ap_block_state14_pp0_stage0_iter11 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void kernel_gemm::thread_ap_block_state15_pp0_stage0_iter12() {
    ap_block_state15_pp0_stage0_iter12 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void kernel_gemm::thread_ap_block_state16_pp0_stage0_iter13() {
    ap_block_state16_pp0_stage0_iter13 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void kernel_gemm::thread_ap_block_state17_pp0_stage0_iter14() {
    ap_block_state17_pp0_stage0_iter14 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void kernel_gemm::thread_ap_block_state20_on_subcall_done() {
    ap_block_state20_on_subcall_done = ((esl_seteq<1,1,1>(ap_const_logic_0, grp_load_fu_4813_ap_done.read()) && 
  esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, grp_compute_fu_4550_ap_done.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, grp_load_fu_4813_ap_done.read()) && 
  esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) || (esl_seteq<1,1,1>(ap_const_logic_0, grp_compute_fu_4550_ap_done.read()) && 
  esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)));
}

void kernel_gemm::thread_ap_block_state21_pp1_stage0_iter0() {
    ap_block_state21_pp1_stage0_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void kernel_gemm::thread_ap_block_state22_pp1_stage0_iter1() {
    ap_block_state22_pp1_stage0_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void kernel_gemm::thread_ap_block_state23_io() {
    ap_block_state23_io = (esl_seteq<1,1,1>(ap_const_lv1_1, empty_18_reg_6235_pp1_iter1_reg.read()) && esl_seteq<1,1,1>(ap_const_logic_0, gmem_AWREADY.read()));
}

void kernel_gemm::thread_ap_block_state23_pp1_stage0_iter2() {
    ap_block_state23_pp1_stage0_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void kernel_gemm::thread_ap_block_state24_io() {
    ap_block_state24_io = (esl_seteq<1,1,1>(icmp_ln88_reg_6209_pp1_iter2_reg.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, gmem_WREADY.read()));
}

void kernel_gemm::thread_ap_block_state24_pp1_stage0_iter3() {
    ap_block_state24_pp1_stage0_iter3 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void kernel_gemm::thread_ap_block_state25_pp1_stage0_iter4() {
    ap_block_state25_pp1_stage0_iter4 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void kernel_gemm::thread_ap_block_state26_pp1_stage0_iter5() {
    ap_block_state26_pp1_stage0_iter5 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void kernel_gemm::thread_ap_block_state27_pp1_stage0_iter6() {
    ap_block_state27_pp1_stage0_iter6 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void kernel_gemm::thread_ap_block_state28_pp1_stage0_iter7() {
    ap_block_state28_pp1_stage0_iter7 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void kernel_gemm::thread_ap_block_state29_pp1_stage0_iter8() {
    ap_block_state29_pp1_stage0_iter8 = (esl_seteq<1,1,1>(ap_const_lv1_1, empty_21_reg_6889_pp1_iter7_reg.read()) && esl_seteq<1,1,1>(ap_const_logic_0, gmem_BVALID.read()));
}

void kernel_gemm::thread_ap_block_state3_pp0_stage0_iter0() {
    ap_block_state3_pp0_stage0_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void kernel_gemm::thread_ap_block_state4_pp0_stage0_iter1() {
    ap_block_state4_pp0_stage0_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void kernel_gemm::thread_ap_block_state5_io() {
    ap_block_state5_io = (esl_seteq<1,1,1>(empty_14_reg_6015_pp0_iter1_reg.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_logic_0, gmem_ARREADY.read()));
}

void kernel_gemm::thread_ap_block_state5_pp0_stage0_iter2() {
    ap_block_state5_pp0_stage0_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void kernel_gemm::thread_ap_block_state6_pp0_stage0_iter3() {
    ap_block_state6_pp0_stage0_iter3 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void kernel_gemm::thread_ap_block_state7_pp0_stage0_iter4() {
    ap_block_state7_pp0_stage0_iter4 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void kernel_gemm::thread_ap_block_state8_pp0_stage0_iter5() {
    ap_block_state8_pp0_stage0_iter5 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void kernel_gemm::thread_ap_block_state9_pp0_stage0_iter6() {
    ap_block_state9_pp0_stage0_iter6 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void kernel_gemm::thread_ap_condition_pp0_exit_iter0_state3() {
    if (esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln65_fu_5070_p2.read())) {
        ap_condition_pp0_exit_iter0_state3 = ap_const_logic_1;
    } else {
        ap_condition_pp0_exit_iter0_state3 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_ap_condition_pp1_exit_iter0_state21() {
    if (esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln88_fu_5401_p2.read())) {
        ap_condition_pp1_exit_iter0_state21 = ap_const_logic_1;
    } else {
        ap_condition_pp1_exit_iter0_state21 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_ap_done() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln61_fu_5007_p2.read()))) {
        ap_done = ap_const_logic_1;
    } else {
        ap_done = ap_const_logic_0;
    }
}

void kernel_gemm::thread_ap_enable_pp0() {
    ap_enable_pp0 = (ap_idle_pp0.read() ^ ap_const_logic_1);
}

void kernel_gemm::thread_ap_enable_pp1() {
    ap_enable_pp1 = (ap_idle_pp1.read() ^ ap_const_logic_1);
}

void kernel_gemm::thread_ap_idle() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()))) {
        ap_idle = ap_const_logic_1;
    } else {
        ap_idle = ap_const_logic_0;
    }
}

void kernel_gemm::thread_ap_idle_pp0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter4.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter5.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter6.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter7.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter8.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter9.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter10.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter11.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter12.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter13.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter14.read()))) {
        ap_idle_pp0 = ap_const_logic_1;
    } else {
        ap_idle_pp0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_ap_idle_pp1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp1_iter4.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp1_iter5.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp1_iter6.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp1_iter7.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp1_iter8.read()))) {
        ap_idle_pp1 = ap_const_logic_1;
    } else {
        ap_idle_pp1 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_ap_phi_mux_ii1_0_phi_fu_4532_p4() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(icmp_ln88_reg_6209.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        ap_phi_mux_ii1_0_phi_fu_4532_p4 = select_ln91_1_reg_6219.read();
    } else {
        ap_phi_mux_ii1_0_phi_fu_4532_p4 = ii1_0_reg_4528.read();
    }
}

void kernel_gemm::thread_ap_phi_mux_ii_0_phi_fu_4488_p4() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln65_reg_5995.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()))) {
        ap_phi_mux_ii_0_phi_fu_4488_p4 = select_ln68_1_reg_6004.read();
    } else {
        ap_phi_mux_ii_0_phi_fu_4488_p4 = ii_0_reg_4484.read();
    }
}

void kernel_gemm::thread_ap_phi_mux_indvar_flatten269_phi_fu_4521_p4() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(icmp_ln88_reg_6209.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        ap_phi_mux_indvar_flatten269_phi_fu_4521_p4 = add_ln88_reg_6213.read();
    } else {
        ap_phi_mux_indvar_flatten269_phi_fu_4521_p4 = indvar_flatten269_reg_4517.read();
    }
}

void kernel_gemm::thread_ap_ready() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln61_fu_5007_p2.read()))) {
        ap_ready = ap_const_logic_1;
    } else {
        ap_ready = ap_const_logic_0;
    }
}

void kernel_gemm::thread_ap_rst_n_inv() {
    ap_rst_n_inv =  (sc_logic) (~ap_rst_n.read());
}

void kernel_gemm::thread_counter_fu_5359_p2() {
    counter_fu_5359_p2 = (!counter_1_fu_402.read().is_01() || !ap_const_lv32_1.is_01())? sc_lv<32>(): (sc_biguint<32>(counter_1_fu_402.read()) + sc_biguint<32>(ap_const_lv32_1));
}

void kernel_gemm::thread_empty_13_fu_5140_p1() {
    empty_13_fu_5140_p1 = indvar_flatten_reg_4473.read().range(7-1, 0);
}

void kernel_gemm::thread_empty_14_fu_5152_p2() {
    empty_14_fu_5152_p2 = (!tmp_10_fu_5144_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_10_fu_5144_p3.read() == ap_const_lv15_0);
}

void kernel_gemm::thread_empty_17_fu_5475_p1() {
    empty_17_fu_5475_p1 = ap_phi_mux_indvar_flatten269_phi_fu_4521_p4.read().range(7-1, 0);
}

void kernel_gemm::thread_empty_18_fu_5487_p2() {
    empty_18_fu_5487_p2 = (!tmp_12_fu_5479_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_12_fu_5479_p3.read() == ap_const_lv15_0);
}

void kernel_gemm::thread_empty_20_fu_5638_p1() {
    empty_20_fu_5638_p1 = add_ln88_reg_6213.read().range(7-1, 0);
}

void kernel_gemm::thread_empty_21_fu_5649_p2() {
    empty_21_fu_5649_p2 = (!tmp_13_fu_5641_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_13_fu_5641_p3.read() == ap_const_lv15_0);
}

void kernel_gemm::thread_gmem_ARADDR() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(empty_14_reg_6015_pp0_iter1_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        gmem_ARADDR =  (sc_lv<32>) (zext_ln68_3_fu_5176_p1.read());
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln73_fu_5317_p2.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln75_fu_5329_p2.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln73_fu_5317_p2.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln75_fu_5329_p2.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        gmem_ARADDR = grp_load_fu_4813_m_axi_A_ARADDR.read();
    } else {
        gmem_ARADDR = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void kernel_gemm::thread_gmem_ARBURST() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln73_fu_5317_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln75_fu_5329_p2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln73_fu_5317_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln75_fu_5329_p2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        gmem_ARBURST = grp_load_fu_4813_m_axi_A_ARBURST.read();
    } else {
        gmem_ARBURST = ap_const_lv2_0;
    }
}

void kernel_gemm::thread_gmem_ARCACHE() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln73_fu_5317_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln75_fu_5329_p2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln73_fu_5317_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln75_fu_5329_p2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        gmem_ARCACHE = grp_load_fu_4813_m_axi_A_ARCACHE.read();
    } else {
        gmem_ARCACHE = ap_const_lv4_0;
    }
}

void kernel_gemm::thread_gmem_ARID() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln73_fu_5317_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln75_fu_5329_p2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln73_fu_5317_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln75_fu_5329_p2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        gmem_ARID = grp_load_fu_4813_m_axi_A_ARID.read();
    } else {
        gmem_ARID = ap_const_lv1_0;
    }
}

void kernel_gemm::thread_gmem_ARLEN() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(empty_14_reg_6015_pp0_iter1_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        gmem_ARLEN = ap_const_lv32_80;
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln73_fu_5317_p2.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln75_fu_5329_p2.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln73_fu_5317_p2.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln75_fu_5329_p2.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        gmem_ARLEN = grp_load_fu_4813_m_axi_A_ARLEN.read();
    } else {
        gmem_ARLEN = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void kernel_gemm::thread_gmem_ARLOCK() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln73_fu_5317_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln75_fu_5329_p2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln73_fu_5317_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln75_fu_5329_p2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        gmem_ARLOCK = grp_load_fu_4813_m_axi_A_ARLOCK.read();
    } else {
        gmem_ARLOCK = ap_const_lv2_0;
    }
}

void kernel_gemm::thread_gmem_ARPROT() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln73_fu_5317_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln75_fu_5329_p2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln73_fu_5317_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln75_fu_5329_p2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        gmem_ARPROT = grp_load_fu_4813_m_axi_A_ARPROT.read();
    } else {
        gmem_ARPROT = ap_const_lv3_0;
    }
}

void kernel_gemm::thread_gmem_ARQOS() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln73_fu_5317_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln75_fu_5329_p2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln73_fu_5317_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln75_fu_5329_p2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        gmem_ARQOS = grp_load_fu_4813_m_axi_A_ARQOS.read();
    } else {
        gmem_ARQOS = ap_const_lv4_0;
    }
}

void kernel_gemm::thread_gmem_ARREGION() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln73_fu_5317_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln75_fu_5329_p2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln73_fu_5317_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln75_fu_5329_p2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        gmem_ARREGION = grp_load_fu_4813_m_axi_A_ARREGION.read();
    } else {
        gmem_ARREGION = ap_const_lv4_0;
    }
}

void kernel_gemm::thread_gmem_ARSIZE() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln73_fu_5317_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln75_fu_5329_p2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln73_fu_5317_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln75_fu_5329_p2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        gmem_ARSIZE = grp_load_fu_4813_m_axi_A_ARSIZE.read();
    } else {
        gmem_ARSIZE = ap_const_lv3_0;
    }
}

void kernel_gemm::thread_gmem_ARUSER() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln73_fu_5317_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln75_fu_5329_p2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln73_fu_5317_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln75_fu_5329_p2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        gmem_ARUSER = grp_load_fu_4813_m_axi_A_ARUSER.read();
    } else {
        gmem_ARUSER = ap_const_lv1_0;
    }
}

void kernel_gemm::thread_gmem_ARVALID() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(empty_14_reg_6015_pp0_iter1_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        gmem_ARVALID = ap_const_logic_1;
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln73_fu_5317_p2.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln75_fu_5329_p2.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln73_fu_5317_p2.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln75_fu_5329_p2.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        gmem_ARVALID = grp_load_fu_4813_m_axi_A_ARVALID.read();
    } else {
        gmem_ARVALID = ap_const_logic_0;
    }
}

void kernel_gemm::thread_gmem_AWADDR() {
    gmem_AWADDR =  (sc_lv<32>) (zext_ln91_3_fu_5916_p1.read());
}

void kernel_gemm::thread_gmem_AWVALID() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, empty_18_reg_6235_pp1_iter1_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0))) {
        gmem_AWVALID = ap_const_logic_1;
    } else {
        gmem_AWVALID = ap_const_logic_0;
    }
}

void kernel_gemm::thread_gmem_BREADY() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter8.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, empty_21_reg_6889_pp1_iter7_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0))) {
        gmem_BREADY = ap_const_logic_1;
    } else {
        gmem_BREADY = ap_const_logic_0;
    }
}

void kernel_gemm::thread_gmem_RREADY() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        gmem_RREADY = ap_const_logic_1;
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln73_fu_5317_p2.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln75_fu_5329_p2.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln73_fu_5317_p2.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln75_fu_5329_p2.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        gmem_RREADY = grp_load_fu_4813_m_axi_A_RREADY.read();
    } else {
        gmem_RREADY = ap_const_logic_0;
    }
}

void kernel_gemm::thread_gmem_WVALID() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(icmp_ln88_reg_6209_pp1_iter2_reg.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0))) {
        gmem_WVALID = ap_const_logic_1;
    } else {
        gmem_WVALID = ap_const_logic_0;
    }
}

void kernel_gemm::thread_gmem_blk_n_AR() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(empty_14_reg_6015_pp0_iter1_reg.read(), ap_const_lv1_1))) {
        gmem_blk_n_AR = m_axi_gmem_ARREADY.read();
    } else {
        gmem_blk_n_AR = ap_const_logic_1;
    }
}

void kernel_gemm::thread_gmem_blk_n_AW() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, empty_18_reg_6235_pp1_iter1_reg.read()))) {
        gmem_blk_n_AW = m_axi_gmem_AWREADY.read();
    } else {
        gmem_blk_n_AW = ap_const_logic_1;
    }
}

void kernel_gemm::thread_gmem_blk_n_B() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter8.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, empty_21_reg_6889_pp1_iter7_reg.read()))) {
        gmem_blk_n_B = m_axi_gmem_BVALID.read();
    } else {
        gmem_blk_n_B = ap_const_logic_1;
    }
}

void kernel_gemm::thread_gmem_blk_n_R() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()))) {
        gmem_blk_n_R = m_axi_gmem_RVALID.read();
    } else {
        gmem_blk_n_R = ap_const_logic_1;
    }
}

void kernel_gemm::thread_gmem_blk_n_W() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(icmp_ln88_reg_6209_pp1_iter2_reg.read(), ap_const_lv1_0))) {
        gmem_blk_n_W = m_axi_gmem_WREADY.read();
    } else {
        gmem_blk_n_W = ap_const_logic_1;
    }
}

void kernel_gemm::thread_grp_compute_fu_4550_ap_start() {
    grp_compute_fu_4550_ap_start = grp_compute_fu_4550_ap_start_reg.read();
}

void kernel_gemm::thread_grp_compute_fu_4550_flag() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            grp_compute_fu_4550_flag = icmp_ln78_reg_6204.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            grp_compute_fu_4550_flag = icmp_ln82_reg_6199.read();
        } else {
            grp_compute_fu_4550_flag =  (sc_lv<1>) ("X");
        }
    } else {
        grp_compute_fu_4550_flag =  (sc_lv<1>) ("X");
    }
}

void kernel_gemm::thread_grp_compute_fu_4550_local_A_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            grp_compute_fu_4550_local_A_q0 = local_A_pong_q0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            grp_compute_fu_4550_local_A_q0 = local_A_ping_q0.read();
        } else {
            grp_compute_fu_4550_local_A_q0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
        }
    } else {
        grp_compute_fu_4550_local_A_q0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void kernel_gemm::thread_grp_compute_fu_4550_local_B_0_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            grp_compute_fu_4550_local_B_0_q0 = local_B_pong_0_q0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            grp_compute_fu_4550_local_B_0_q0 = local_B_ping_0_q0.read();
        } else {
            grp_compute_fu_4550_local_B_0_q0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
        }
    } else {
        grp_compute_fu_4550_local_B_0_q0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void kernel_gemm::thread_grp_compute_fu_4550_local_B_100_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            grp_compute_fu_4550_local_B_100_q0 = local_B_pong_100_q0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            grp_compute_fu_4550_local_B_100_q0 = local_B_ping_100_q0.read();
        } else {
            grp_compute_fu_4550_local_B_100_q0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
        }
    } else {
        grp_compute_fu_4550_local_B_100_q0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void kernel_gemm::thread_grp_compute_fu_4550_local_B_101_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            grp_compute_fu_4550_local_B_101_q0 = local_B_pong_101_q0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            grp_compute_fu_4550_local_B_101_q0 = local_B_ping_101_q0.read();
        } else {
            grp_compute_fu_4550_local_B_101_q0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
        }
    } else {
        grp_compute_fu_4550_local_B_101_q0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void kernel_gemm::thread_grp_compute_fu_4550_local_B_102_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            grp_compute_fu_4550_local_B_102_q0 = local_B_pong_102_q0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            grp_compute_fu_4550_local_B_102_q0 = local_B_ping_102_q0.read();
        } else {
            grp_compute_fu_4550_local_B_102_q0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
        }
    } else {
        grp_compute_fu_4550_local_B_102_q0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void kernel_gemm::thread_grp_compute_fu_4550_local_B_103_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            grp_compute_fu_4550_local_B_103_q0 = local_B_pong_103_q0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            grp_compute_fu_4550_local_B_103_q0 = local_B_ping_103_q0.read();
        } else {
            grp_compute_fu_4550_local_B_103_q0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
        }
    } else {
        grp_compute_fu_4550_local_B_103_q0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void kernel_gemm::thread_grp_compute_fu_4550_local_B_104_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            grp_compute_fu_4550_local_B_104_q0 = local_B_pong_104_q0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            grp_compute_fu_4550_local_B_104_q0 = local_B_ping_104_q0.read();
        } else {
            grp_compute_fu_4550_local_B_104_q0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
        }
    } else {
        grp_compute_fu_4550_local_B_104_q0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void kernel_gemm::thread_grp_compute_fu_4550_local_B_105_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            grp_compute_fu_4550_local_B_105_q0 = local_B_pong_105_q0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            grp_compute_fu_4550_local_B_105_q0 = local_B_ping_105_q0.read();
        } else {
            grp_compute_fu_4550_local_B_105_q0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
        }
    } else {
        grp_compute_fu_4550_local_B_105_q0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void kernel_gemm::thread_grp_compute_fu_4550_local_B_106_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            grp_compute_fu_4550_local_B_106_q0 = local_B_pong_106_q0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            grp_compute_fu_4550_local_B_106_q0 = local_B_ping_106_q0.read();
        } else {
            grp_compute_fu_4550_local_B_106_q0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
        }
    } else {
        grp_compute_fu_4550_local_B_106_q0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void kernel_gemm::thread_grp_compute_fu_4550_local_B_107_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            grp_compute_fu_4550_local_B_107_q0 = local_B_pong_107_q0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            grp_compute_fu_4550_local_B_107_q0 = local_B_ping_107_q0.read();
        } else {
            grp_compute_fu_4550_local_B_107_q0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
        }
    } else {
        grp_compute_fu_4550_local_B_107_q0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void kernel_gemm::thread_grp_compute_fu_4550_local_B_108_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            grp_compute_fu_4550_local_B_108_q0 = local_B_pong_108_q0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            grp_compute_fu_4550_local_B_108_q0 = local_B_ping_108_q0.read();
        } else {
            grp_compute_fu_4550_local_B_108_q0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
        }
    } else {
        grp_compute_fu_4550_local_B_108_q0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void kernel_gemm::thread_grp_compute_fu_4550_local_B_109_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            grp_compute_fu_4550_local_B_109_q0 = local_B_pong_109_q0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            grp_compute_fu_4550_local_B_109_q0 = local_B_ping_109_q0.read();
        } else {
            grp_compute_fu_4550_local_B_109_q0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
        }
    } else {
        grp_compute_fu_4550_local_B_109_q0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void kernel_gemm::thread_grp_compute_fu_4550_local_B_10_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            grp_compute_fu_4550_local_B_10_q0 = local_B_pong_10_q0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            grp_compute_fu_4550_local_B_10_q0 = local_B_ping_10_q0.read();
        } else {
            grp_compute_fu_4550_local_B_10_q0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
        }
    } else {
        grp_compute_fu_4550_local_B_10_q0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void kernel_gemm::thread_grp_compute_fu_4550_local_B_110_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            grp_compute_fu_4550_local_B_110_q0 = local_B_pong_110_q0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            grp_compute_fu_4550_local_B_110_q0 = local_B_ping_110_q0.read();
        } else {
            grp_compute_fu_4550_local_B_110_q0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
        }
    } else {
        grp_compute_fu_4550_local_B_110_q0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void kernel_gemm::thread_grp_compute_fu_4550_local_B_111_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            grp_compute_fu_4550_local_B_111_q0 = local_B_pong_111_q0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            grp_compute_fu_4550_local_B_111_q0 = local_B_ping_111_q0.read();
        } else {
            grp_compute_fu_4550_local_B_111_q0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
        }
    } else {
        grp_compute_fu_4550_local_B_111_q0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void kernel_gemm::thread_grp_compute_fu_4550_local_B_112_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            grp_compute_fu_4550_local_B_112_q0 = local_B_pong_112_q0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            grp_compute_fu_4550_local_B_112_q0 = local_B_ping_112_q0.read();
        } else {
            grp_compute_fu_4550_local_B_112_q0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
        }
    } else {
        grp_compute_fu_4550_local_B_112_q0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void kernel_gemm::thread_grp_compute_fu_4550_local_B_113_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            grp_compute_fu_4550_local_B_113_q0 = local_B_pong_113_q0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            grp_compute_fu_4550_local_B_113_q0 = local_B_ping_113_q0.read();
        } else {
            grp_compute_fu_4550_local_B_113_q0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
        }
    } else {
        grp_compute_fu_4550_local_B_113_q0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void kernel_gemm::thread_grp_compute_fu_4550_local_B_114_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            grp_compute_fu_4550_local_B_114_q0 = local_B_pong_114_q0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            grp_compute_fu_4550_local_B_114_q0 = local_B_ping_114_q0.read();
        } else {
            grp_compute_fu_4550_local_B_114_q0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
        }
    } else {
        grp_compute_fu_4550_local_B_114_q0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void kernel_gemm::thread_grp_compute_fu_4550_local_B_115_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            grp_compute_fu_4550_local_B_115_q0 = local_B_pong_115_q0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            grp_compute_fu_4550_local_B_115_q0 = local_B_ping_115_q0.read();
        } else {
            grp_compute_fu_4550_local_B_115_q0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
        }
    } else {
        grp_compute_fu_4550_local_B_115_q0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void kernel_gemm::thread_grp_compute_fu_4550_local_B_116_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            grp_compute_fu_4550_local_B_116_q0 = local_B_pong_116_q0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            grp_compute_fu_4550_local_B_116_q0 = local_B_ping_116_q0.read();
        } else {
            grp_compute_fu_4550_local_B_116_q0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
        }
    } else {
        grp_compute_fu_4550_local_B_116_q0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void kernel_gemm::thread_grp_compute_fu_4550_local_B_117_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            grp_compute_fu_4550_local_B_117_q0 = local_B_pong_117_q0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            grp_compute_fu_4550_local_B_117_q0 = local_B_ping_117_q0.read();
        } else {
            grp_compute_fu_4550_local_B_117_q0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
        }
    } else {
        grp_compute_fu_4550_local_B_117_q0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void kernel_gemm::thread_grp_compute_fu_4550_local_B_118_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            grp_compute_fu_4550_local_B_118_q0 = local_B_pong_118_q0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            grp_compute_fu_4550_local_B_118_q0 = local_B_ping_118_q0.read();
        } else {
            grp_compute_fu_4550_local_B_118_q0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
        }
    } else {
        grp_compute_fu_4550_local_B_118_q0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void kernel_gemm::thread_grp_compute_fu_4550_local_B_119_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            grp_compute_fu_4550_local_B_119_q0 = local_B_pong_119_q0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            grp_compute_fu_4550_local_B_119_q0 = local_B_ping_119_q0.read();
        } else {
            grp_compute_fu_4550_local_B_119_q0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
        }
    } else {
        grp_compute_fu_4550_local_B_119_q0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void kernel_gemm::thread_grp_compute_fu_4550_local_B_11_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            grp_compute_fu_4550_local_B_11_q0 = local_B_pong_11_q0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            grp_compute_fu_4550_local_B_11_q0 = local_B_ping_11_q0.read();
        } else {
            grp_compute_fu_4550_local_B_11_q0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
        }
    } else {
        grp_compute_fu_4550_local_B_11_q0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void kernel_gemm::thread_grp_compute_fu_4550_local_B_120_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            grp_compute_fu_4550_local_B_120_q0 = local_B_pong_120_q0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            grp_compute_fu_4550_local_B_120_q0 = local_B_ping_120_q0.read();
        } else {
            grp_compute_fu_4550_local_B_120_q0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
        }
    } else {
        grp_compute_fu_4550_local_B_120_q0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void kernel_gemm::thread_grp_compute_fu_4550_local_B_121_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            grp_compute_fu_4550_local_B_121_q0 = local_B_pong_121_q0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            grp_compute_fu_4550_local_B_121_q0 = local_B_ping_121_q0.read();
        } else {
            grp_compute_fu_4550_local_B_121_q0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
        }
    } else {
        grp_compute_fu_4550_local_B_121_q0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void kernel_gemm::thread_grp_compute_fu_4550_local_B_122_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            grp_compute_fu_4550_local_B_122_q0 = local_B_pong_122_q0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            grp_compute_fu_4550_local_B_122_q0 = local_B_ping_122_q0.read();
        } else {
            grp_compute_fu_4550_local_B_122_q0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
        }
    } else {
        grp_compute_fu_4550_local_B_122_q0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void kernel_gemm::thread_grp_compute_fu_4550_local_B_123_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            grp_compute_fu_4550_local_B_123_q0 = local_B_pong_123_q0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            grp_compute_fu_4550_local_B_123_q0 = local_B_ping_123_q0.read();
        } else {
            grp_compute_fu_4550_local_B_123_q0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
        }
    } else {
        grp_compute_fu_4550_local_B_123_q0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void kernel_gemm::thread_grp_compute_fu_4550_local_B_124_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            grp_compute_fu_4550_local_B_124_q0 = local_B_pong_124_q0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            grp_compute_fu_4550_local_B_124_q0 = local_B_ping_124_q0.read();
        } else {
            grp_compute_fu_4550_local_B_124_q0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
        }
    } else {
        grp_compute_fu_4550_local_B_124_q0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void kernel_gemm::thread_grp_compute_fu_4550_local_B_125_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            grp_compute_fu_4550_local_B_125_q0 = local_B_pong_125_q0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            grp_compute_fu_4550_local_B_125_q0 = local_B_ping_125_q0.read();
        } else {
            grp_compute_fu_4550_local_B_125_q0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
        }
    } else {
        grp_compute_fu_4550_local_B_125_q0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void kernel_gemm::thread_grp_compute_fu_4550_local_B_126_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            grp_compute_fu_4550_local_B_126_q0 = local_B_pong_126_q0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            grp_compute_fu_4550_local_B_126_q0 = local_B_ping_126_q0.read();
        } else {
            grp_compute_fu_4550_local_B_126_q0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
        }
    } else {
        grp_compute_fu_4550_local_B_126_q0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void kernel_gemm::thread_grp_compute_fu_4550_local_B_127_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            grp_compute_fu_4550_local_B_127_q0 = local_B_pong_127_q0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            grp_compute_fu_4550_local_B_127_q0 = local_B_ping_127_q0.read();
        } else {
            grp_compute_fu_4550_local_B_127_q0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
        }
    } else {
        grp_compute_fu_4550_local_B_127_q0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void kernel_gemm::thread_grp_compute_fu_4550_local_B_12_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            grp_compute_fu_4550_local_B_12_q0 = local_B_pong_12_q0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            grp_compute_fu_4550_local_B_12_q0 = local_B_ping_12_q0.read();
        } else {
            grp_compute_fu_4550_local_B_12_q0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
        }
    } else {
        grp_compute_fu_4550_local_B_12_q0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void kernel_gemm::thread_grp_compute_fu_4550_local_B_13_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            grp_compute_fu_4550_local_B_13_q0 = local_B_pong_13_q0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            grp_compute_fu_4550_local_B_13_q0 = local_B_ping_13_q0.read();
        } else {
            grp_compute_fu_4550_local_B_13_q0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
        }
    } else {
        grp_compute_fu_4550_local_B_13_q0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void kernel_gemm::thread_grp_compute_fu_4550_local_B_14_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            grp_compute_fu_4550_local_B_14_q0 = local_B_pong_14_q0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            grp_compute_fu_4550_local_B_14_q0 = local_B_ping_14_q0.read();
        } else {
            grp_compute_fu_4550_local_B_14_q0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
        }
    } else {
        grp_compute_fu_4550_local_B_14_q0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void kernel_gemm::thread_grp_compute_fu_4550_local_B_15_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            grp_compute_fu_4550_local_B_15_q0 = local_B_pong_15_q0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            grp_compute_fu_4550_local_B_15_q0 = local_B_ping_15_q0.read();
        } else {
            grp_compute_fu_4550_local_B_15_q0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
        }
    } else {
        grp_compute_fu_4550_local_B_15_q0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void kernel_gemm::thread_grp_compute_fu_4550_local_B_16_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            grp_compute_fu_4550_local_B_16_q0 = local_B_pong_16_q0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            grp_compute_fu_4550_local_B_16_q0 = local_B_ping_16_q0.read();
        } else {
            grp_compute_fu_4550_local_B_16_q0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
        }
    } else {
        grp_compute_fu_4550_local_B_16_q0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void kernel_gemm::thread_grp_compute_fu_4550_local_B_17_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            grp_compute_fu_4550_local_B_17_q0 = local_B_pong_17_q0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            grp_compute_fu_4550_local_B_17_q0 = local_B_ping_17_q0.read();
        } else {
            grp_compute_fu_4550_local_B_17_q0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
        }
    } else {
        grp_compute_fu_4550_local_B_17_q0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void kernel_gemm::thread_grp_compute_fu_4550_local_B_18_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            grp_compute_fu_4550_local_B_18_q0 = local_B_pong_18_q0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            grp_compute_fu_4550_local_B_18_q0 = local_B_ping_18_q0.read();
        } else {
            grp_compute_fu_4550_local_B_18_q0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
        }
    } else {
        grp_compute_fu_4550_local_B_18_q0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void kernel_gemm::thread_grp_compute_fu_4550_local_B_19_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            grp_compute_fu_4550_local_B_19_q0 = local_B_pong_19_q0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            grp_compute_fu_4550_local_B_19_q0 = local_B_ping_19_q0.read();
        } else {
            grp_compute_fu_4550_local_B_19_q0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
        }
    } else {
        grp_compute_fu_4550_local_B_19_q0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void kernel_gemm::thread_grp_compute_fu_4550_local_B_1_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            grp_compute_fu_4550_local_B_1_q0 = local_B_pong_1_q0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            grp_compute_fu_4550_local_B_1_q0 = local_B_ping_1_q0.read();
        } else {
            grp_compute_fu_4550_local_B_1_q0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
        }
    } else {
        grp_compute_fu_4550_local_B_1_q0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void kernel_gemm::thread_grp_compute_fu_4550_local_B_20_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            grp_compute_fu_4550_local_B_20_q0 = local_B_pong_20_q0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            grp_compute_fu_4550_local_B_20_q0 = local_B_ping_20_q0.read();
        } else {
            grp_compute_fu_4550_local_B_20_q0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
        }
    } else {
        grp_compute_fu_4550_local_B_20_q0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void kernel_gemm::thread_grp_compute_fu_4550_local_B_21_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            grp_compute_fu_4550_local_B_21_q0 = local_B_pong_21_q0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            grp_compute_fu_4550_local_B_21_q0 = local_B_ping_21_q0.read();
        } else {
            grp_compute_fu_4550_local_B_21_q0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
        }
    } else {
        grp_compute_fu_4550_local_B_21_q0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void kernel_gemm::thread_grp_compute_fu_4550_local_B_22_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            grp_compute_fu_4550_local_B_22_q0 = local_B_pong_22_q0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            grp_compute_fu_4550_local_B_22_q0 = local_B_ping_22_q0.read();
        } else {
            grp_compute_fu_4550_local_B_22_q0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
        }
    } else {
        grp_compute_fu_4550_local_B_22_q0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void kernel_gemm::thread_grp_compute_fu_4550_local_B_23_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            grp_compute_fu_4550_local_B_23_q0 = local_B_pong_23_q0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            grp_compute_fu_4550_local_B_23_q0 = local_B_ping_23_q0.read();
        } else {
            grp_compute_fu_4550_local_B_23_q0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
        }
    } else {
        grp_compute_fu_4550_local_B_23_q0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void kernel_gemm::thread_grp_compute_fu_4550_local_B_24_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            grp_compute_fu_4550_local_B_24_q0 = local_B_pong_24_q0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            grp_compute_fu_4550_local_B_24_q0 = local_B_ping_24_q0.read();
        } else {
            grp_compute_fu_4550_local_B_24_q0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
        }
    } else {
        grp_compute_fu_4550_local_B_24_q0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void kernel_gemm::thread_grp_compute_fu_4550_local_B_25_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            grp_compute_fu_4550_local_B_25_q0 = local_B_pong_25_q0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            grp_compute_fu_4550_local_B_25_q0 = local_B_ping_25_q0.read();
        } else {
            grp_compute_fu_4550_local_B_25_q0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
        }
    } else {
        grp_compute_fu_4550_local_B_25_q0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void kernel_gemm::thread_grp_compute_fu_4550_local_B_26_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            grp_compute_fu_4550_local_B_26_q0 = local_B_pong_26_q0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            grp_compute_fu_4550_local_B_26_q0 = local_B_ping_26_q0.read();
        } else {
            grp_compute_fu_4550_local_B_26_q0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
        }
    } else {
        grp_compute_fu_4550_local_B_26_q0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void kernel_gemm::thread_grp_compute_fu_4550_local_B_27_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            grp_compute_fu_4550_local_B_27_q0 = local_B_pong_27_q0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            grp_compute_fu_4550_local_B_27_q0 = local_B_ping_27_q0.read();
        } else {
            grp_compute_fu_4550_local_B_27_q0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
        }
    } else {
        grp_compute_fu_4550_local_B_27_q0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void kernel_gemm::thread_grp_compute_fu_4550_local_B_28_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            grp_compute_fu_4550_local_B_28_q0 = local_B_pong_28_q0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            grp_compute_fu_4550_local_B_28_q0 = local_B_ping_28_q0.read();
        } else {
            grp_compute_fu_4550_local_B_28_q0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
        }
    } else {
        grp_compute_fu_4550_local_B_28_q0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void kernel_gemm::thread_grp_compute_fu_4550_local_B_29_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            grp_compute_fu_4550_local_B_29_q0 = local_B_pong_29_q0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            grp_compute_fu_4550_local_B_29_q0 = local_B_ping_29_q0.read();
        } else {
            grp_compute_fu_4550_local_B_29_q0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
        }
    } else {
        grp_compute_fu_4550_local_B_29_q0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void kernel_gemm::thread_grp_compute_fu_4550_local_B_2_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            grp_compute_fu_4550_local_B_2_q0 = local_B_pong_2_q0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            grp_compute_fu_4550_local_B_2_q0 = local_B_ping_2_q0.read();
        } else {
            grp_compute_fu_4550_local_B_2_q0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
        }
    } else {
        grp_compute_fu_4550_local_B_2_q0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void kernel_gemm::thread_grp_compute_fu_4550_local_B_30_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            grp_compute_fu_4550_local_B_30_q0 = local_B_pong_30_q0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            grp_compute_fu_4550_local_B_30_q0 = local_B_ping_30_q0.read();
        } else {
            grp_compute_fu_4550_local_B_30_q0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
        }
    } else {
        grp_compute_fu_4550_local_B_30_q0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void kernel_gemm::thread_grp_compute_fu_4550_local_B_31_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            grp_compute_fu_4550_local_B_31_q0 = local_B_pong_31_q0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            grp_compute_fu_4550_local_B_31_q0 = local_B_ping_31_q0.read();
        } else {
            grp_compute_fu_4550_local_B_31_q0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
        }
    } else {
        grp_compute_fu_4550_local_B_31_q0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void kernel_gemm::thread_grp_compute_fu_4550_local_B_32_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            grp_compute_fu_4550_local_B_32_q0 = local_B_pong_32_q0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            grp_compute_fu_4550_local_B_32_q0 = local_B_ping_32_q0.read();
        } else {
            grp_compute_fu_4550_local_B_32_q0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
        }
    } else {
        grp_compute_fu_4550_local_B_32_q0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void kernel_gemm::thread_grp_compute_fu_4550_local_B_33_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            grp_compute_fu_4550_local_B_33_q0 = local_B_pong_33_q0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            grp_compute_fu_4550_local_B_33_q0 = local_B_ping_33_q0.read();
        } else {
            grp_compute_fu_4550_local_B_33_q0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
        }
    } else {
        grp_compute_fu_4550_local_B_33_q0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void kernel_gemm::thread_grp_compute_fu_4550_local_B_34_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            grp_compute_fu_4550_local_B_34_q0 = local_B_pong_34_q0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            grp_compute_fu_4550_local_B_34_q0 = local_B_ping_34_q0.read();
        } else {
            grp_compute_fu_4550_local_B_34_q0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
        }
    } else {
        grp_compute_fu_4550_local_B_34_q0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void kernel_gemm::thread_grp_compute_fu_4550_local_B_35_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            grp_compute_fu_4550_local_B_35_q0 = local_B_pong_35_q0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            grp_compute_fu_4550_local_B_35_q0 = local_B_ping_35_q0.read();
        } else {
            grp_compute_fu_4550_local_B_35_q0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
        }
    } else {
        grp_compute_fu_4550_local_B_35_q0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void kernel_gemm::thread_grp_compute_fu_4550_local_B_36_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            grp_compute_fu_4550_local_B_36_q0 = local_B_pong_36_q0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            grp_compute_fu_4550_local_B_36_q0 = local_B_ping_36_q0.read();
        } else {
            grp_compute_fu_4550_local_B_36_q0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
        }
    } else {
        grp_compute_fu_4550_local_B_36_q0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void kernel_gemm::thread_grp_compute_fu_4550_local_B_37_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            grp_compute_fu_4550_local_B_37_q0 = local_B_pong_37_q0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            grp_compute_fu_4550_local_B_37_q0 = local_B_ping_37_q0.read();
        } else {
            grp_compute_fu_4550_local_B_37_q0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
        }
    } else {
        grp_compute_fu_4550_local_B_37_q0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void kernel_gemm::thread_grp_compute_fu_4550_local_B_38_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            grp_compute_fu_4550_local_B_38_q0 = local_B_pong_38_q0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            grp_compute_fu_4550_local_B_38_q0 = local_B_ping_38_q0.read();
        } else {
            grp_compute_fu_4550_local_B_38_q0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
        }
    } else {
        grp_compute_fu_4550_local_B_38_q0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void kernel_gemm::thread_grp_compute_fu_4550_local_B_39_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            grp_compute_fu_4550_local_B_39_q0 = local_B_pong_39_q0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            grp_compute_fu_4550_local_B_39_q0 = local_B_ping_39_q0.read();
        } else {
            grp_compute_fu_4550_local_B_39_q0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
        }
    } else {
        grp_compute_fu_4550_local_B_39_q0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void kernel_gemm::thread_grp_compute_fu_4550_local_B_3_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            grp_compute_fu_4550_local_B_3_q0 = local_B_pong_3_q0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            grp_compute_fu_4550_local_B_3_q0 = local_B_ping_3_q0.read();
        } else {
            grp_compute_fu_4550_local_B_3_q0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
        }
    } else {
        grp_compute_fu_4550_local_B_3_q0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void kernel_gemm::thread_grp_compute_fu_4550_local_B_40_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            grp_compute_fu_4550_local_B_40_q0 = local_B_pong_40_q0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            grp_compute_fu_4550_local_B_40_q0 = local_B_ping_40_q0.read();
        } else {
            grp_compute_fu_4550_local_B_40_q0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
        }
    } else {
        grp_compute_fu_4550_local_B_40_q0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void kernel_gemm::thread_grp_compute_fu_4550_local_B_41_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            grp_compute_fu_4550_local_B_41_q0 = local_B_pong_41_q0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            grp_compute_fu_4550_local_B_41_q0 = local_B_ping_41_q0.read();
        } else {
            grp_compute_fu_4550_local_B_41_q0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
        }
    } else {
        grp_compute_fu_4550_local_B_41_q0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void kernel_gemm::thread_grp_compute_fu_4550_local_B_42_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            grp_compute_fu_4550_local_B_42_q0 = local_B_pong_42_q0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            grp_compute_fu_4550_local_B_42_q0 = local_B_ping_42_q0.read();
        } else {
            grp_compute_fu_4550_local_B_42_q0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
        }
    } else {
        grp_compute_fu_4550_local_B_42_q0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void kernel_gemm::thread_grp_compute_fu_4550_local_B_43_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            grp_compute_fu_4550_local_B_43_q0 = local_B_pong_43_q0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            grp_compute_fu_4550_local_B_43_q0 = local_B_ping_43_q0.read();
        } else {
            grp_compute_fu_4550_local_B_43_q0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
        }
    } else {
        grp_compute_fu_4550_local_B_43_q0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void kernel_gemm::thread_grp_compute_fu_4550_local_B_44_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            grp_compute_fu_4550_local_B_44_q0 = local_B_pong_44_q0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            grp_compute_fu_4550_local_B_44_q0 = local_B_ping_44_q0.read();
        } else {
            grp_compute_fu_4550_local_B_44_q0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
        }
    } else {
        grp_compute_fu_4550_local_B_44_q0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void kernel_gemm::thread_grp_compute_fu_4550_local_B_45_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            grp_compute_fu_4550_local_B_45_q0 = local_B_pong_45_q0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            grp_compute_fu_4550_local_B_45_q0 = local_B_ping_45_q0.read();
        } else {
            grp_compute_fu_4550_local_B_45_q0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
        }
    } else {
        grp_compute_fu_4550_local_B_45_q0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void kernel_gemm::thread_grp_compute_fu_4550_local_B_46_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            grp_compute_fu_4550_local_B_46_q0 = local_B_pong_46_q0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            grp_compute_fu_4550_local_B_46_q0 = local_B_ping_46_q0.read();
        } else {
            grp_compute_fu_4550_local_B_46_q0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
        }
    } else {
        grp_compute_fu_4550_local_B_46_q0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void kernel_gemm::thread_grp_compute_fu_4550_local_B_47_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            grp_compute_fu_4550_local_B_47_q0 = local_B_pong_47_q0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            grp_compute_fu_4550_local_B_47_q0 = local_B_ping_47_q0.read();
        } else {
            grp_compute_fu_4550_local_B_47_q0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
        }
    } else {
        grp_compute_fu_4550_local_B_47_q0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void kernel_gemm::thread_grp_compute_fu_4550_local_B_48_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            grp_compute_fu_4550_local_B_48_q0 = local_B_pong_48_q0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            grp_compute_fu_4550_local_B_48_q0 = local_B_ping_48_q0.read();
        } else {
            grp_compute_fu_4550_local_B_48_q0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
        }
    } else {
        grp_compute_fu_4550_local_B_48_q0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void kernel_gemm::thread_grp_compute_fu_4550_local_B_49_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            grp_compute_fu_4550_local_B_49_q0 = local_B_pong_49_q0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            grp_compute_fu_4550_local_B_49_q0 = local_B_ping_49_q0.read();
        } else {
            grp_compute_fu_4550_local_B_49_q0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
        }
    } else {
        grp_compute_fu_4550_local_B_49_q0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void kernel_gemm::thread_grp_compute_fu_4550_local_B_4_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            grp_compute_fu_4550_local_B_4_q0 = local_B_pong_4_q0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            grp_compute_fu_4550_local_B_4_q0 = local_B_ping_4_q0.read();
        } else {
            grp_compute_fu_4550_local_B_4_q0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
        }
    } else {
        grp_compute_fu_4550_local_B_4_q0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void kernel_gemm::thread_grp_compute_fu_4550_local_B_50_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            grp_compute_fu_4550_local_B_50_q0 = local_B_pong_50_q0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            grp_compute_fu_4550_local_B_50_q0 = local_B_ping_50_q0.read();
        } else {
            grp_compute_fu_4550_local_B_50_q0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
        }
    } else {
        grp_compute_fu_4550_local_B_50_q0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void kernel_gemm::thread_grp_compute_fu_4550_local_B_51_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            grp_compute_fu_4550_local_B_51_q0 = local_B_pong_51_q0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            grp_compute_fu_4550_local_B_51_q0 = local_B_ping_51_q0.read();
        } else {
            grp_compute_fu_4550_local_B_51_q0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
        }
    } else {
        grp_compute_fu_4550_local_B_51_q0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void kernel_gemm::thread_grp_compute_fu_4550_local_B_52_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            grp_compute_fu_4550_local_B_52_q0 = local_B_pong_52_q0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            grp_compute_fu_4550_local_B_52_q0 = local_B_ping_52_q0.read();
        } else {
            grp_compute_fu_4550_local_B_52_q0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
        }
    } else {
        grp_compute_fu_4550_local_B_52_q0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void kernel_gemm::thread_grp_compute_fu_4550_local_B_53_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            grp_compute_fu_4550_local_B_53_q0 = local_B_pong_53_q0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            grp_compute_fu_4550_local_B_53_q0 = local_B_ping_53_q0.read();
        } else {
            grp_compute_fu_4550_local_B_53_q0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
        }
    } else {
        grp_compute_fu_4550_local_B_53_q0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void kernel_gemm::thread_grp_compute_fu_4550_local_B_54_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            grp_compute_fu_4550_local_B_54_q0 = local_B_pong_54_q0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            grp_compute_fu_4550_local_B_54_q0 = local_B_ping_54_q0.read();
        } else {
            grp_compute_fu_4550_local_B_54_q0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
        }
    } else {
        grp_compute_fu_4550_local_B_54_q0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void kernel_gemm::thread_grp_compute_fu_4550_local_B_55_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            grp_compute_fu_4550_local_B_55_q0 = local_B_pong_55_q0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            grp_compute_fu_4550_local_B_55_q0 = local_B_ping_55_q0.read();
        } else {
            grp_compute_fu_4550_local_B_55_q0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
        }
    } else {
        grp_compute_fu_4550_local_B_55_q0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void kernel_gemm::thread_grp_compute_fu_4550_local_B_56_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            grp_compute_fu_4550_local_B_56_q0 = local_B_pong_56_q0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            grp_compute_fu_4550_local_B_56_q0 = local_B_ping_56_q0.read();
        } else {
            grp_compute_fu_4550_local_B_56_q0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
        }
    } else {
        grp_compute_fu_4550_local_B_56_q0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void kernel_gemm::thread_grp_compute_fu_4550_local_B_57_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            grp_compute_fu_4550_local_B_57_q0 = local_B_pong_57_q0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            grp_compute_fu_4550_local_B_57_q0 = local_B_ping_57_q0.read();
        } else {
            grp_compute_fu_4550_local_B_57_q0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
        }
    } else {
        grp_compute_fu_4550_local_B_57_q0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void kernel_gemm::thread_grp_compute_fu_4550_local_B_58_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            grp_compute_fu_4550_local_B_58_q0 = local_B_pong_58_q0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            grp_compute_fu_4550_local_B_58_q0 = local_B_ping_58_q0.read();
        } else {
            grp_compute_fu_4550_local_B_58_q0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
        }
    } else {
        grp_compute_fu_4550_local_B_58_q0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void kernel_gemm::thread_grp_compute_fu_4550_local_B_59_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            grp_compute_fu_4550_local_B_59_q0 = local_B_pong_59_q0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            grp_compute_fu_4550_local_B_59_q0 = local_B_ping_59_q0.read();
        } else {
            grp_compute_fu_4550_local_B_59_q0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
        }
    } else {
        grp_compute_fu_4550_local_B_59_q0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void kernel_gemm::thread_grp_compute_fu_4550_local_B_5_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            grp_compute_fu_4550_local_B_5_q0 = local_B_pong_5_q0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            grp_compute_fu_4550_local_B_5_q0 = local_B_ping_5_q0.read();
        } else {
            grp_compute_fu_4550_local_B_5_q0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
        }
    } else {
        grp_compute_fu_4550_local_B_5_q0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void kernel_gemm::thread_grp_compute_fu_4550_local_B_60_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            grp_compute_fu_4550_local_B_60_q0 = local_B_pong_60_q0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            grp_compute_fu_4550_local_B_60_q0 = local_B_ping_60_q0.read();
        } else {
            grp_compute_fu_4550_local_B_60_q0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
        }
    } else {
        grp_compute_fu_4550_local_B_60_q0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void kernel_gemm::thread_grp_compute_fu_4550_local_B_61_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            grp_compute_fu_4550_local_B_61_q0 = local_B_pong_61_q0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            grp_compute_fu_4550_local_B_61_q0 = local_B_ping_61_q0.read();
        } else {
            grp_compute_fu_4550_local_B_61_q0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
        }
    } else {
        grp_compute_fu_4550_local_B_61_q0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void kernel_gemm::thread_grp_compute_fu_4550_local_B_62_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            grp_compute_fu_4550_local_B_62_q0 = local_B_pong_62_q0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            grp_compute_fu_4550_local_B_62_q0 = local_B_ping_62_q0.read();
        } else {
            grp_compute_fu_4550_local_B_62_q0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
        }
    } else {
        grp_compute_fu_4550_local_B_62_q0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void kernel_gemm::thread_grp_compute_fu_4550_local_B_63_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            grp_compute_fu_4550_local_B_63_q0 = local_B_pong_63_q0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            grp_compute_fu_4550_local_B_63_q0 = local_B_ping_63_q0.read();
        } else {
            grp_compute_fu_4550_local_B_63_q0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
        }
    } else {
        grp_compute_fu_4550_local_B_63_q0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void kernel_gemm::thread_grp_compute_fu_4550_local_B_64_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            grp_compute_fu_4550_local_B_64_q0 = local_B_pong_64_q0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            grp_compute_fu_4550_local_B_64_q0 = local_B_ping_64_q0.read();
        } else {
            grp_compute_fu_4550_local_B_64_q0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
        }
    } else {
        grp_compute_fu_4550_local_B_64_q0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void kernel_gemm::thread_grp_compute_fu_4550_local_B_65_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            grp_compute_fu_4550_local_B_65_q0 = local_B_pong_65_q0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            grp_compute_fu_4550_local_B_65_q0 = local_B_ping_65_q0.read();
        } else {
            grp_compute_fu_4550_local_B_65_q0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
        }
    } else {
        grp_compute_fu_4550_local_B_65_q0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void kernel_gemm::thread_grp_compute_fu_4550_local_B_66_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            grp_compute_fu_4550_local_B_66_q0 = local_B_pong_66_q0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            grp_compute_fu_4550_local_B_66_q0 = local_B_ping_66_q0.read();
        } else {
            grp_compute_fu_4550_local_B_66_q0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
        }
    } else {
        grp_compute_fu_4550_local_B_66_q0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void kernel_gemm::thread_grp_compute_fu_4550_local_B_67_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            grp_compute_fu_4550_local_B_67_q0 = local_B_pong_67_q0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            grp_compute_fu_4550_local_B_67_q0 = local_B_ping_67_q0.read();
        } else {
            grp_compute_fu_4550_local_B_67_q0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
        }
    } else {
        grp_compute_fu_4550_local_B_67_q0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void kernel_gemm::thread_grp_compute_fu_4550_local_B_68_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            grp_compute_fu_4550_local_B_68_q0 = local_B_pong_68_q0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            grp_compute_fu_4550_local_B_68_q0 = local_B_ping_68_q0.read();
        } else {
            grp_compute_fu_4550_local_B_68_q0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
        }
    } else {
        grp_compute_fu_4550_local_B_68_q0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void kernel_gemm::thread_grp_compute_fu_4550_local_B_69_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            grp_compute_fu_4550_local_B_69_q0 = local_B_pong_69_q0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            grp_compute_fu_4550_local_B_69_q0 = local_B_ping_69_q0.read();
        } else {
            grp_compute_fu_4550_local_B_69_q0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
        }
    } else {
        grp_compute_fu_4550_local_B_69_q0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void kernel_gemm::thread_grp_compute_fu_4550_local_B_6_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            grp_compute_fu_4550_local_B_6_q0 = local_B_pong_6_q0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            grp_compute_fu_4550_local_B_6_q0 = local_B_ping_6_q0.read();
        } else {
            grp_compute_fu_4550_local_B_6_q0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
        }
    } else {
        grp_compute_fu_4550_local_B_6_q0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void kernel_gemm::thread_grp_compute_fu_4550_local_B_70_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            grp_compute_fu_4550_local_B_70_q0 = local_B_pong_70_q0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            grp_compute_fu_4550_local_B_70_q0 = local_B_ping_70_q0.read();
        } else {
            grp_compute_fu_4550_local_B_70_q0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
        }
    } else {
        grp_compute_fu_4550_local_B_70_q0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void kernel_gemm::thread_grp_compute_fu_4550_local_B_71_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            grp_compute_fu_4550_local_B_71_q0 = local_B_pong_71_q0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            grp_compute_fu_4550_local_B_71_q0 = local_B_ping_71_q0.read();
        } else {
            grp_compute_fu_4550_local_B_71_q0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
        }
    } else {
        grp_compute_fu_4550_local_B_71_q0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void kernel_gemm::thread_grp_compute_fu_4550_local_B_72_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            grp_compute_fu_4550_local_B_72_q0 = local_B_pong_72_q0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            grp_compute_fu_4550_local_B_72_q0 = local_B_ping_72_q0.read();
        } else {
            grp_compute_fu_4550_local_B_72_q0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
        }
    } else {
        grp_compute_fu_4550_local_B_72_q0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void kernel_gemm::thread_grp_compute_fu_4550_local_B_73_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            grp_compute_fu_4550_local_B_73_q0 = local_B_pong_73_q0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            grp_compute_fu_4550_local_B_73_q0 = local_B_ping_73_q0.read();
        } else {
            grp_compute_fu_4550_local_B_73_q0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
        }
    } else {
        grp_compute_fu_4550_local_B_73_q0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void kernel_gemm::thread_grp_compute_fu_4550_local_B_74_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            grp_compute_fu_4550_local_B_74_q0 = local_B_pong_74_q0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            grp_compute_fu_4550_local_B_74_q0 = local_B_ping_74_q0.read();
        } else {
            grp_compute_fu_4550_local_B_74_q0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
        }
    } else {
        grp_compute_fu_4550_local_B_74_q0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void kernel_gemm::thread_grp_compute_fu_4550_local_B_75_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            grp_compute_fu_4550_local_B_75_q0 = local_B_pong_75_q0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            grp_compute_fu_4550_local_B_75_q0 = local_B_ping_75_q0.read();
        } else {
            grp_compute_fu_4550_local_B_75_q0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
        }
    } else {
        grp_compute_fu_4550_local_B_75_q0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void kernel_gemm::thread_grp_compute_fu_4550_local_B_76_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            grp_compute_fu_4550_local_B_76_q0 = local_B_pong_76_q0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            grp_compute_fu_4550_local_B_76_q0 = local_B_ping_76_q0.read();
        } else {
            grp_compute_fu_4550_local_B_76_q0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
        }
    } else {
        grp_compute_fu_4550_local_B_76_q0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void kernel_gemm::thread_grp_compute_fu_4550_local_B_77_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            grp_compute_fu_4550_local_B_77_q0 = local_B_pong_77_q0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            grp_compute_fu_4550_local_B_77_q0 = local_B_ping_77_q0.read();
        } else {
            grp_compute_fu_4550_local_B_77_q0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
        }
    } else {
        grp_compute_fu_4550_local_B_77_q0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void kernel_gemm::thread_grp_compute_fu_4550_local_B_78_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            grp_compute_fu_4550_local_B_78_q0 = local_B_pong_78_q0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            grp_compute_fu_4550_local_B_78_q0 = local_B_ping_78_q0.read();
        } else {
            grp_compute_fu_4550_local_B_78_q0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
        }
    } else {
        grp_compute_fu_4550_local_B_78_q0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void kernel_gemm::thread_grp_compute_fu_4550_local_B_79_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            grp_compute_fu_4550_local_B_79_q0 = local_B_pong_79_q0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            grp_compute_fu_4550_local_B_79_q0 = local_B_ping_79_q0.read();
        } else {
            grp_compute_fu_4550_local_B_79_q0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
        }
    } else {
        grp_compute_fu_4550_local_B_79_q0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void kernel_gemm::thread_grp_compute_fu_4550_local_B_7_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            grp_compute_fu_4550_local_B_7_q0 = local_B_pong_7_q0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            grp_compute_fu_4550_local_B_7_q0 = local_B_ping_7_q0.read();
        } else {
            grp_compute_fu_4550_local_B_7_q0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
        }
    } else {
        grp_compute_fu_4550_local_B_7_q0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void kernel_gemm::thread_grp_compute_fu_4550_local_B_80_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            grp_compute_fu_4550_local_B_80_q0 = local_B_pong_80_q0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            grp_compute_fu_4550_local_B_80_q0 = local_B_ping_80_q0.read();
        } else {
            grp_compute_fu_4550_local_B_80_q0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
        }
    } else {
        grp_compute_fu_4550_local_B_80_q0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void kernel_gemm::thread_grp_compute_fu_4550_local_B_81_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            grp_compute_fu_4550_local_B_81_q0 = local_B_pong_81_q0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            grp_compute_fu_4550_local_B_81_q0 = local_B_ping_81_q0.read();
        } else {
            grp_compute_fu_4550_local_B_81_q0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
        }
    } else {
        grp_compute_fu_4550_local_B_81_q0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void kernel_gemm::thread_grp_compute_fu_4550_local_B_82_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            grp_compute_fu_4550_local_B_82_q0 = local_B_pong_82_q0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            grp_compute_fu_4550_local_B_82_q0 = local_B_ping_82_q0.read();
        } else {
            grp_compute_fu_4550_local_B_82_q0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
        }
    } else {
        grp_compute_fu_4550_local_B_82_q0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void kernel_gemm::thread_grp_compute_fu_4550_local_B_83_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            grp_compute_fu_4550_local_B_83_q0 = local_B_pong_83_q0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            grp_compute_fu_4550_local_B_83_q0 = local_B_ping_83_q0.read();
        } else {
            grp_compute_fu_4550_local_B_83_q0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
        }
    } else {
        grp_compute_fu_4550_local_B_83_q0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void kernel_gemm::thread_grp_compute_fu_4550_local_B_84_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            grp_compute_fu_4550_local_B_84_q0 = local_B_pong_84_q0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            grp_compute_fu_4550_local_B_84_q0 = local_B_ping_84_q0.read();
        } else {
            grp_compute_fu_4550_local_B_84_q0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
        }
    } else {
        grp_compute_fu_4550_local_B_84_q0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void kernel_gemm::thread_grp_compute_fu_4550_local_B_85_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            grp_compute_fu_4550_local_B_85_q0 = local_B_pong_85_q0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            grp_compute_fu_4550_local_B_85_q0 = local_B_ping_85_q0.read();
        } else {
            grp_compute_fu_4550_local_B_85_q0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
        }
    } else {
        grp_compute_fu_4550_local_B_85_q0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void kernel_gemm::thread_grp_compute_fu_4550_local_B_86_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            grp_compute_fu_4550_local_B_86_q0 = local_B_pong_86_q0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            grp_compute_fu_4550_local_B_86_q0 = local_B_ping_86_q0.read();
        } else {
            grp_compute_fu_4550_local_B_86_q0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
        }
    } else {
        grp_compute_fu_4550_local_B_86_q0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void kernel_gemm::thread_grp_compute_fu_4550_local_B_87_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            grp_compute_fu_4550_local_B_87_q0 = local_B_pong_87_q0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            grp_compute_fu_4550_local_B_87_q0 = local_B_ping_87_q0.read();
        } else {
            grp_compute_fu_4550_local_B_87_q0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
        }
    } else {
        grp_compute_fu_4550_local_B_87_q0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void kernel_gemm::thread_grp_compute_fu_4550_local_B_88_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            grp_compute_fu_4550_local_B_88_q0 = local_B_pong_88_q0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            grp_compute_fu_4550_local_B_88_q0 = local_B_ping_88_q0.read();
        } else {
            grp_compute_fu_4550_local_B_88_q0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
        }
    } else {
        grp_compute_fu_4550_local_B_88_q0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void kernel_gemm::thread_grp_compute_fu_4550_local_B_89_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            grp_compute_fu_4550_local_B_89_q0 = local_B_pong_89_q0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            grp_compute_fu_4550_local_B_89_q0 = local_B_ping_89_q0.read();
        } else {
            grp_compute_fu_4550_local_B_89_q0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
        }
    } else {
        grp_compute_fu_4550_local_B_89_q0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void kernel_gemm::thread_grp_compute_fu_4550_local_B_8_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            grp_compute_fu_4550_local_B_8_q0 = local_B_pong_8_q0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            grp_compute_fu_4550_local_B_8_q0 = local_B_ping_8_q0.read();
        } else {
            grp_compute_fu_4550_local_B_8_q0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
        }
    } else {
        grp_compute_fu_4550_local_B_8_q0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void kernel_gemm::thread_grp_compute_fu_4550_local_B_90_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            grp_compute_fu_4550_local_B_90_q0 = local_B_pong_90_q0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            grp_compute_fu_4550_local_B_90_q0 = local_B_ping_90_q0.read();
        } else {
            grp_compute_fu_4550_local_B_90_q0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
        }
    } else {
        grp_compute_fu_4550_local_B_90_q0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void kernel_gemm::thread_grp_compute_fu_4550_local_B_91_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            grp_compute_fu_4550_local_B_91_q0 = local_B_pong_91_q0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            grp_compute_fu_4550_local_B_91_q0 = local_B_ping_91_q0.read();
        } else {
            grp_compute_fu_4550_local_B_91_q0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
        }
    } else {
        grp_compute_fu_4550_local_B_91_q0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void kernel_gemm::thread_grp_compute_fu_4550_local_B_92_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            grp_compute_fu_4550_local_B_92_q0 = local_B_pong_92_q0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            grp_compute_fu_4550_local_B_92_q0 = local_B_ping_92_q0.read();
        } else {
            grp_compute_fu_4550_local_B_92_q0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
        }
    } else {
        grp_compute_fu_4550_local_B_92_q0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void kernel_gemm::thread_grp_compute_fu_4550_local_B_93_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            grp_compute_fu_4550_local_B_93_q0 = local_B_pong_93_q0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            grp_compute_fu_4550_local_B_93_q0 = local_B_ping_93_q0.read();
        } else {
            grp_compute_fu_4550_local_B_93_q0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
        }
    } else {
        grp_compute_fu_4550_local_B_93_q0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void kernel_gemm::thread_grp_compute_fu_4550_local_B_94_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            grp_compute_fu_4550_local_B_94_q0 = local_B_pong_94_q0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            grp_compute_fu_4550_local_B_94_q0 = local_B_ping_94_q0.read();
        } else {
            grp_compute_fu_4550_local_B_94_q0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
        }
    } else {
        grp_compute_fu_4550_local_B_94_q0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void kernel_gemm::thread_grp_compute_fu_4550_local_B_95_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            grp_compute_fu_4550_local_B_95_q0 = local_B_pong_95_q0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            grp_compute_fu_4550_local_B_95_q0 = local_B_ping_95_q0.read();
        } else {
            grp_compute_fu_4550_local_B_95_q0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
        }
    } else {
        grp_compute_fu_4550_local_B_95_q0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void kernel_gemm::thread_grp_compute_fu_4550_local_B_96_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            grp_compute_fu_4550_local_B_96_q0 = local_B_pong_96_q0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            grp_compute_fu_4550_local_B_96_q0 = local_B_ping_96_q0.read();
        } else {
            grp_compute_fu_4550_local_B_96_q0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
        }
    } else {
        grp_compute_fu_4550_local_B_96_q0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void kernel_gemm::thread_grp_compute_fu_4550_local_B_97_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            grp_compute_fu_4550_local_B_97_q0 = local_B_pong_97_q0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            grp_compute_fu_4550_local_B_97_q0 = local_B_ping_97_q0.read();
        } else {
            grp_compute_fu_4550_local_B_97_q0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
        }
    } else {
        grp_compute_fu_4550_local_B_97_q0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void kernel_gemm::thread_grp_compute_fu_4550_local_B_98_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            grp_compute_fu_4550_local_B_98_q0 = local_B_pong_98_q0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            grp_compute_fu_4550_local_B_98_q0 = local_B_ping_98_q0.read();
        } else {
            grp_compute_fu_4550_local_B_98_q0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
        }
    } else {
        grp_compute_fu_4550_local_B_98_q0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void kernel_gemm::thread_grp_compute_fu_4550_local_B_99_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            grp_compute_fu_4550_local_B_99_q0 = local_B_pong_99_q0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            grp_compute_fu_4550_local_B_99_q0 = local_B_ping_99_q0.read();
        } else {
            grp_compute_fu_4550_local_B_99_q0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
        }
    } else {
        grp_compute_fu_4550_local_B_99_q0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void kernel_gemm::thread_grp_compute_fu_4550_local_B_9_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            grp_compute_fu_4550_local_B_9_q0 = local_B_pong_9_q0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            grp_compute_fu_4550_local_B_9_q0 = local_B_ping_9_q0.read();
        } else {
            grp_compute_fu_4550_local_B_9_q0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
        }
    } else {
        grp_compute_fu_4550_local_B_9_q0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void kernel_gemm::thread_grp_fu_4954_ce() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        grp_fu_4954_ce = ap_const_logic_1;
    } else {
        grp_fu_4954_ce = ap_const_logic_0;
    }
}

void kernel_gemm::thread_grp_fu_4961_p2() {
    grp_fu_4961_p2 = (!index_0_reg_4506.read().is_01() || !ap_const_lv5_0.is_01())? sc_lv<1>(): sc_lv<1>(index_0_reg_4506.read() != ap_const_lv5_0);
}

void kernel_gemm::thread_grp_load_fu_4813_ap_start() {
    grp_load_fu_4813_ap_start = grp_load_fu_4813_ap_start_reg.read();
}

void kernel_gemm::thread_i_fu_5019_p2() {
    i_fu_5019_p2 = (!i_0_reg_4451.read().is_01() || !ap_const_lv12_80.is_01())? sc_lv<12>(): (sc_biguint<12>(i_0_reg_4451.read()) + sc_biguint<12>(ap_const_lv12_80));
}

void kernel_gemm::thread_icmp_ln61_fu_5007_p2() {
    icmp_ln61_fu_5007_p2 = (!indvar_flatten277_reg_4440.read().is_01() || !ap_const_lv9_100.is_01())? sc_lv<1>(): sc_lv<1>(indvar_flatten277_reg_4440.read() == ap_const_lv9_100);
}

void kernel_gemm::thread_icmp_ln65_fu_5070_p2() {
    icmp_ln65_fu_5070_p2 = (!indvar_flatten_reg_4473.read().is_01() || !ap_const_lv15_4000.is_01())? sc_lv<1>(): sc_lv<1>(indvar_flatten_reg_4473.read() == ap_const_lv15_4000);
}

void kernel_gemm::thread_icmp_ln66_fu_5088_p2() {
    icmp_ln66_fu_5088_p2 = (!jj_0_reg_4495.read().is_01() || !ap_const_lv8_80.is_01())? sc_lv<1>(): sc_lv<1>(jj_0_reg_4495.read() == ap_const_lv8_80);
}

void kernel_gemm::thread_icmp_ln73_fu_5317_p2() {
    icmp_ln73_fu_5317_p2 = (!index_0_reg_4506.read().is_01() || !ap_const_lv5_11.is_01())? sc_lv<1>(): sc_lv<1>(index_0_reg_4506.read() == ap_const_lv5_11);
}

void kernel_gemm::thread_icmp_ln75_fu_5329_p2() {
    icmp_ln75_fu_5329_p2 = (!counter_1_fu_402.read().is_01() || !ap_const_lv32_0.is_01())? sc_lv<1>(): sc_lv<1>(counter_1_fu_402.read() == ap_const_lv32_0);
}

void kernel_gemm::thread_icmp_ln85_fu_5365_p2() {
    icmp_ln85_fu_5365_p2 = (!counter_fu_5359_p2.read().is_01() || !ap_const_lv32_2.is_01())? sc_lv<1>(): sc_lv<1>(counter_fu_5359_p2.read() == ap_const_lv32_2);
}

void kernel_gemm::thread_icmp_ln88_fu_5401_p2() {
    icmp_ln88_fu_5401_p2 = (!ap_phi_mux_indvar_flatten269_phi_fu_4521_p4.read().is_01() || !ap_const_lv15_4000.is_01())? sc_lv<1>(): sc_lv<1>(ap_phi_mux_indvar_flatten269_phi_fu_4521_p4.read() == ap_const_lv15_4000);
}

void kernel_gemm::thread_icmp_ln89_fu_5419_p2() {
    icmp_ln89_fu_5419_p2 = (!jj2_0_reg_4539.read().is_01() || !ap_const_lv8_80.is_01())? sc_lv<1>(): sc_lv<1>(jj2_0_reg_4539.read() == ap_const_lv8_80);
}

void kernel_gemm::thread_ii_1_fu_5413_p2() {
    ii_1_fu_5413_p2 = (!ap_const_lv8_1.is_01() || !ap_phi_mux_ii1_0_phi_fu_4532_p4.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ap_const_lv8_1) + sc_biguint<8>(ap_phi_mux_ii1_0_phi_fu_4532_p4.read()));
}

void kernel_gemm::thread_ii_fu_5082_p2() {
    ii_fu_5082_p2 = (!ap_const_lv8_1.is_01() || !ap_phi_mux_ii_0_phi_fu_4488_p4.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ap_const_lv8_1) + sc_biguint<8>(ap_phi_mux_ii_0_phi_fu_4488_p4.read()));
}

void kernel_gemm::thread_index_fu_5323_p2() {
    index_fu_5323_p2 = (!index_0_reg_4506.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(index_0_reg_4506.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void kernel_gemm::thread_j_fu_5926_p2() {
    j_fu_5926_p2 = (!select_ln62_reg_5973.read().is_01() || !ap_const_lv12_80.is_01())? sc_lv<12>(): (sc_biguint<12>(select_ln62_reg_5973.read()) + sc_biguint<12>(ap_const_lv12_80));
}

void kernel_gemm::thread_jj_1_fu_5493_p2() {
    jj_1_fu_5493_p2 = (!ap_const_lv8_1.is_01() || !select_ln91_fu_5425_p3.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ap_const_lv8_1) + sc_biguint<8>(select_ln91_fu_5425_p3.read()));
}

void kernel_gemm::thread_jj_fu_5162_p2() {
    jj_fu_5162_p2 = (!select_ln68_fu_5094_p3.read().is_01() || !ap_const_lv8_1.is_01())? sc_lv<8>(): (sc_biguint<8>(select_ln68_fu_5094_p3.read()) + sc_biguint<8>(ap_const_lv8_1));
}

void kernel_gemm::thread_local_A_ping_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_A_ping_address0 = grp_load_fu_4813_local_A_address0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_A_ping_address0 = grp_compute_fu_4550_local_A_address0.read();
        } else {
            local_A_ping_address0 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
        }
    } else {
        local_A_ping_address0 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void kernel_gemm::thread_local_A_ping_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_A_ping_ce0 = grp_load_fu_4813_local_A_ce0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_A_ping_ce0 = grp_compute_fu_4550_local_A_ce0.read();
        } else {
            local_A_ping_ce0 = ap_const_logic_0;
        }
    } else {
        local_A_ping_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_A_ping_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
         esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1))) {
        local_A_ping_we0 = grp_load_fu_4813_local_A_we0.read();
    } else {
        local_A_ping_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_A_pong_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_A_pong_address0 = grp_load_fu_4813_local_A_address0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_A_pong_address0 = grp_compute_fu_4550_local_A_address0.read();
        } else {
            local_A_pong_address0 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
        }
    } else {
        local_A_pong_address0 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void kernel_gemm::thread_local_A_pong_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_A_pong_ce0 = grp_load_fu_4813_local_A_ce0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_A_pong_ce0 = grp_compute_fu_4550_local_A_ce0.read();
        } else {
            local_A_pong_ce0 = ap_const_logic_0;
        }
    } else {
        local_A_pong_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_A_pong_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
         esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0))) {
        local_A_pong_we0 = grp_load_fu_4813_local_A_we0.read();
    } else {
        local_A_pong_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_ping_0_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_ping_0_address0 = grp_load_fu_4813_local_B_0_address0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_ping_0_address0 = grp_compute_fu_4550_local_B_0_address0.read();
        } else {
            local_B_ping_0_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        local_B_ping_0_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_B_ping_0_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_ping_0_ce0 = grp_load_fu_4813_local_B_0_ce0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_ping_0_ce0 = grp_compute_fu_4550_local_B_0_ce0.read();
        } else {
            local_B_ping_0_ce0 = ap_const_logic_0;
        }
    } else {
        local_B_ping_0_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_ping_0_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
         esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1))) {
        local_B_ping_0_we0 = grp_load_fu_4813_local_B_0_we0.read();
    } else {
        local_B_ping_0_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_ping_100_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_ping_100_address0 = grp_load_fu_4813_local_B_100_address0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_ping_100_address0 = grp_compute_fu_4550_local_B_100_address0.read();
        } else {
            local_B_ping_100_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        local_B_ping_100_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_B_ping_100_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_ping_100_ce0 = grp_load_fu_4813_local_B_100_ce0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_ping_100_ce0 = grp_compute_fu_4550_local_B_100_ce0.read();
        } else {
            local_B_ping_100_ce0 = ap_const_logic_0;
        }
    } else {
        local_B_ping_100_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_ping_100_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
         esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1))) {
        local_B_ping_100_we0 = grp_load_fu_4813_local_B_100_we0.read();
    } else {
        local_B_ping_100_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_ping_101_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_ping_101_address0 = grp_load_fu_4813_local_B_101_address0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_ping_101_address0 = grp_compute_fu_4550_local_B_101_address0.read();
        } else {
            local_B_ping_101_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        local_B_ping_101_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_B_ping_101_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_ping_101_ce0 = grp_load_fu_4813_local_B_101_ce0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_ping_101_ce0 = grp_compute_fu_4550_local_B_101_ce0.read();
        } else {
            local_B_ping_101_ce0 = ap_const_logic_0;
        }
    } else {
        local_B_ping_101_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_ping_101_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
         esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1))) {
        local_B_ping_101_we0 = grp_load_fu_4813_local_B_101_we0.read();
    } else {
        local_B_ping_101_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_ping_102_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_ping_102_address0 = grp_load_fu_4813_local_B_102_address0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_ping_102_address0 = grp_compute_fu_4550_local_B_102_address0.read();
        } else {
            local_B_ping_102_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        local_B_ping_102_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_B_ping_102_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_ping_102_ce0 = grp_load_fu_4813_local_B_102_ce0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_ping_102_ce0 = grp_compute_fu_4550_local_B_102_ce0.read();
        } else {
            local_B_ping_102_ce0 = ap_const_logic_0;
        }
    } else {
        local_B_ping_102_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_ping_102_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
         esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1))) {
        local_B_ping_102_we0 = grp_load_fu_4813_local_B_102_we0.read();
    } else {
        local_B_ping_102_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_ping_103_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_ping_103_address0 = grp_load_fu_4813_local_B_103_address0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_ping_103_address0 = grp_compute_fu_4550_local_B_103_address0.read();
        } else {
            local_B_ping_103_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        local_B_ping_103_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_B_ping_103_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_ping_103_ce0 = grp_load_fu_4813_local_B_103_ce0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_ping_103_ce0 = grp_compute_fu_4550_local_B_103_ce0.read();
        } else {
            local_B_ping_103_ce0 = ap_const_logic_0;
        }
    } else {
        local_B_ping_103_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_ping_103_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
         esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1))) {
        local_B_ping_103_we0 = grp_load_fu_4813_local_B_103_we0.read();
    } else {
        local_B_ping_103_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_ping_104_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_ping_104_address0 = grp_load_fu_4813_local_B_104_address0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_ping_104_address0 = grp_compute_fu_4550_local_B_104_address0.read();
        } else {
            local_B_ping_104_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        local_B_ping_104_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_B_ping_104_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_ping_104_ce0 = grp_load_fu_4813_local_B_104_ce0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_ping_104_ce0 = grp_compute_fu_4550_local_B_104_ce0.read();
        } else {
            local_B_ping_104_ce0 = ap_const_logic_0;
        }
    } else {
        local_B_ping_104_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_ping_104_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
         esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1))) {
        local_B_ping_104_we0 = grp_load_fu_4813_local_B_104_we0.read();
    } else {
        local_B_ping_104_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_ping_105_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_ping_105_address0 = grp_load_fu_4813_local_B_105_address0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_ping_105_address0 = grp_compute_fu_4550_local_B_105_address0.read();
        } else {
            local_B_ping_105_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        local_B_ping_105_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_B_ping_105_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_ping_105_ce0 = grp_load_fu_4813_local_B_105_ce0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_ping_105_ce0 = grp_compute_fu_4550_local_B_105_ce0.read();
        } else {
            local_B_ping_105_ce0 = ap_const_logic_0;
        }
    } else {
        local_B_ping_105_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_ping_105_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
         esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1))) {
        local_B_ping_105_we0 = grp_load_fu_4813_local_B_105_we0.read();
    } else {
        local_B_ping_105_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_ping_106_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_ping_106_address0 = grp_load_fu_4813_local_B_106_address0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_ping_106_address0 = grp_compute_fu_4550_local_B_106_address0.read();
        } else {
            local_B_ping_106_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        local_B_ping_106_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_B_ping_106_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_ping_106_ce0 = grp_load_fu_4813_local_B_106_ce0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_ping_106_ce0 = grp_compute_fu_4550_local_B_106_ce0.read();
        } else {
            local_B_ping_106_ce0 = ap_const_logic_0;
        }
    } else {
        local_B_ping_106_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_ping_106_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
         esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1))) {
        local_B_ping_106_we0 = grp_load_fu_4813_local_B_106_we0.read();
    } else {
        local_B_ping_106_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_ping_107_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_ping_107_address0 = grp_load_fu_4813_local_B_107_address0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_ping_107_address0 = grp_compute_fu_4550_local_B_107_address0.read();
        } else {
            local_B_ping_107_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        local_B_ping_107_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_B_ping_107_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_ping_107_ce0 = grp_load_fu_4813_local_B_107_ce0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_ping_107_ce0 = grp_compute_fu_4550_local_B_107_ce0.read();
        } else {
            local_B_ping_107_ce0 = ap_const_logic_0;
        }
    } else {
        local_B_ping_107_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_ping_107_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
         esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1))) {
        local_B_ping_107_we0 = grp_load_fu_4813_local_B_107_we0.read();
    } else {
        local_B_ping_107_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_ping_108_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_ping_108_address0 = grp_load_fu_4813_local_B_108_address0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_ping_108_address0 = grp_compute_fu_4550_local_B_108_address0.read();
        } else {
            local_B_ping_108_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        local_B_ping_108_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_B_ping_108_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_ping_108_ce0 = grp_load_fu_4813_local_B_108_ce0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_ping_108_ce0 = grp_compute_fu_4550_local_B_108_ce0.read();
        } else {
            local_B_ping_108_ce0 = ap_const_logic_0;
        }
    } else {
        local_B_ping_108_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_ping_108_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
         esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1))) {
        local_B_ping_108_we0 = grp_load_fu_4813_local_B_108_we0.read();
    } else {
        local_B_ping_108_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_ping_109_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_ping_109_address0 = grp_load_fu_4813_local_B_109_address0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_ping_109_address0 = grp_compute_fu_4550_local_B_109_address0.read();
        } else {
            local_B_ping_109_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        local_B_ping_109_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_B_ping_109_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_ping_109_ce0 = grp_load_fu_4813_local_B_109_ce0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_ping_109_ce0 = grp_compute_fu_4550_local_B_109_ce0.read();
        } else {
            local_B_ping_109_ce0 = ap_const_logic_0;
        }
    } else {
        local_B_ping_109_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_ping_109_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
         esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1))) {
        local_B_ping_109_we0 = grp_load_fu_4813_local_B_109_we0.read();
    } else {
        local_B_ping_109_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_ping_10_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_ping_10_address0 = grp_load_fu_4813_local_B_10_address0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_ping_10_address0 = grp_compute_fu_4550_local_B_10_address0.read();
        } else {
            local_B_ping_10_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        local_B_ping_10_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_B_ping_10_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_ping_10_ce0 = grp_load_fu_4813_local_B_10_ce0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_ping_10_ce0 = grp_compute_fu_4550_local_B_10_ce0.read();
        } else {
            local_B_ping_10_ce0 = ap_const_logic_0;
        }
    } else {
        local_B_ping_10_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_ping_10_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
         esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1))) {
        local_B_ping_10_we0 = grp_load_fu_4813_local_B_10_we0.read();
    } else {
        local_B_ping_10_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_ping_110_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_ping_110_address0 = grp_load_fu_4813_local_B_110_address0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_ping_110_address0 = grp_compute_fu_4550_local_B_110_address0.read();
        } else {
            local_B_ping_110_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        local_B_ping_110_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_B_ping_110_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_ping_110_ce0 = grp_load_fu_4813_local_B_110_ce0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_ping_110_ce0 = grp_compute_fu_4550_local_B_110_ce0.read();
        } else {
            local_B_ping_110_ce0 = ap_const_logic_0;
        }
    } else {
        local_B_ping_110_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_ping_110_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
         esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1))) {
        local_B_ping_110_we0 = grp_load_fu_4813_local_B_110_we0.read();
    } else {
        local_B_ping_110_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_ping_111_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_ping_111_address0 = grp_load_fu_4813_local_B_111_address0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_ping_111_address0 = grp_compute_fu_4550_local_B_111_address0.read();
        } else {
            local_B_ping_111_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        local_B_ping_111_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_B_ping_111_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_ping_111_ce0 = grp_load_fu_4813_local_B_111_ce0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_ping_111_ce0 = grp_compute_fu_4550_local_B_111_ce0.read();
        } else {
            local_B_ping_111_ce0 = ap_const_logic_0;
        }
    } else {
        local_B_ping_111_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_ping_111_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
         esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1))) {
        local_B_ping_111_we0 = grp_load_fu_4813_local_B_111_we0.read();
    } else {
        local_B_ping_111_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_ping_112_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_ping_112_address0 = grp_load_fu_4813_local_B_112_address0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_ping_112_address0 = grp_compute_fu_4550_local_B_112_address0.read();
        } else {
            local_B_ping_112_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        local_B_ping_112_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_B_ping_112_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_ping_112_ce0 = grp_load_fu_4813_local_B_112_ce0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_ping_112_ce0 = grp_compute_fu_4550_local_B_112_ce0.read();
        } else {
            local_B_ping_112_ce0 = ap_const_logic_0;
        }
    } else {
        local_B_ping_112_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_ping_112_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
         esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1))) {
        local_B_ping_112_we0 = grp_load_fu_4813_local_B_112_we0.read();
    } else {
        local_B_ping_112_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_ping_113_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_ping_113_address0 = grp_load_fu_4813_local_B_113_address0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_ping_113_address0 = grp_compute_fu_4550_local_B_113_address0.read();
        } else {
            local_B_ping_113_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        local_B_ping_113_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_B_ping_113_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_ping_113_ce0 = grp_load_fu_4813_local_B_113_ce0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_ping_113_ce0 = grp_compute_fu_4550_local_B_113_ce0.read();
        } else {
            local_B_ping_113_ce0 = ap_const_logic_0;
        }
    } else {
        local_B_ping_113_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_ping_113_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
         esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1))) {
        local_B_ping_113_we0 = grp_load_fu_4813_local_B_113_we0.read();
    } else {
        local_B_ping_113_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_ping_114_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_ping_114_address0 = grp_load_fu_4813_local_B_114_address0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_ping_114_address0 = grp_compute_fu_4550_local_B_114_address0.read();
        } else {
            local_B_ping_114_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        local_B_ping_114_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_B_ping_114_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_ping_114_ce0 = grp_load_fu_4813_local_B_114_ce0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_ping_114_ce0 = grp_compute_fu_4550_local_B_114_ce0.read();
        } else {
            local_B_ping_114_ce0 = ap_const_logic_0;
        }
    } else {
        local_B_ping_114_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_ping_114_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
         esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1))) {
        local_B_ping_114_we0 = grp_load_fu_4813_local_B_114_we0.read();
    } else {
        local_B_ping_114_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_ping_115_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_ping_115_address0 = grp_load_fu_4813_local_B_115_address0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_ping_115_address0 = grp_compute_fu_4550_local_B_115_address0.read();
        } else {
            local_B_ping_115_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        local_B_ping_115_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_B_ping_115_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_ping_115_ce0 = grp_load_fu_4813_local_B_115_ce0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_ping_115_ce0 = grp_compute_fu_4550_local_B_115_ce0.read();
        } else {
            local_B_ping_115_ce0 = ap_const_logic_0;
        }
    } else {
        local_B_ping_115_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_ping_115_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
         esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1))) {
        local_B_ping_115_we0 = grp_load_fu_4813_local_B_115_we0.read();
    } else {
        local_B_ping_115_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_ping_116_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_ping_116_address0 = grp_load_fu_4813_local_B_116_address0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_ping_116_address0 = grp_compute_fu_4550_local_B_116_address0.read();
        } else {
            local_B_ping_116_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        local_B_ping_116_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_B_ping_116_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_ping_116_ce0 = grp_load_fu_4813_local_B_116_ce0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_ping_116_ce0 = grp_compute_fu_4550_local_B_116_ce0.read();
        } else {
            local_B_ping_116_ce0 = ap_const_logic_0;
        }
    } else {
        local_B_ping_116_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_ping_116_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
         esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1))) {
        local_B_ping_116_we0 = grp_load_fu_4813_local_B_116_we0.read();
    } else {
        local_B_ping_116_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_ping_117_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_ping_117_address0 = grp_load_fu_4813_local_B_117_address0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_ping_117_address0 = grp_compute_fu_4550_local_B_117_address0.read();
        } else {
            local_B_ping_117_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        local_B_ping_117_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_B_ping_117_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_ping_117_ce0 = grp_load_fu_4813_local_B_117_ce0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_ping_117_ce0 = grp_compute_fu_4550_local_B_117_ce0.read();
        } else {
            local_B_ping_117_ce0 = ap_const_logic_0;
        }
    } else {
        local_B_ping_117_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_ping_117_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
         esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1))) {
        local_B_ping_117_we0 = grp_load_fu_4813_local_B_117_we0.read();
    } else {
        local_B_ping_117_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_ping_118_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_ping_118_address0 = grp_load_fu_4813_local_B_118_address0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_ping_118_address0 = grp_compute_fu_4550_local_B_118_address0.read();
        } else {
            local_B_ping_118_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        local_B_ping_118_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_B_ping_118_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_ping_118_ce0 = grp_load_fu_4813_local_B_118_ce0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_ping_118_ce0 = grp_compute_fu_4550_local_B_118_ce0.read();
        } else {
            local_B_ping_118_ce0 = ap_const_logic_0;
        }
    } else {
        local_B_ping_118_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_ping_118_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
         esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1))) {
        local_B_ping_118_we0 = grp_load_fu_4813_local_B_118_we0.read();
    } else {
        local_B_ping_118_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_ping_119_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_ping_119_address0 = grp_load_fu_4813_local_B_119_address0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_ping_119_address0 = grp_compute_fu_4550_local_B_119_address0.read();
        } else {
            local_B_ping_119_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        local_B_ping_119_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_B_ping_119_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_ping_119_ce0 = grp_load_fu_4813_local_B_119_ce0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_ping_119_ce0 = grp_compute_fu_4550_local_B_119_ce0.read();
        } else {
            local_B_ping_119_ce0 = ap_const_logic_0;
        }
    } else {
        local_B_ping_119_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_ping_119_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
         esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1))) {
        local_B_ping_119_we0 = grp_load_fu_4813_local_B_119_we0.read();
    } else {
        local_B_ping_119_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_ping_11_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_ping_11_address0 = grp_load_fu_4813_local_B_11_address0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_ping_11_address0 = grp_compute_fu_4550_local_B_11_address0.read();
        } else {
            local_B_ping_11_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        local_B_ping_11_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_B_ping_11_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_ping_11_ce0 = grp_load_fu_4813_local_B_11_ce0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_ping_11_ce0 = grp_compute_fu_4550_local_B_11_ce0.read();
        } else {
            local_B_ping_11_ce0 = ap_const_logic_0;
        }
    } else {
        local_B_ping_11_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_ping_11_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
         esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1))) {
        local_B_ping_11_we0 = grp_load_fu_4813_local_B_11_we0.read();
    } else {
        local_B_ping_11_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_ping_120_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_ping_120_address0 = grp_load_fu_4813_local_B_120_address0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_ping_120_address0 = grp_compute_fu_4550_local_B_120_address0.read();
        } else {
            local_B_ping_120_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        local_B_ping_120_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_B_ping_120_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_ping_120_ce0 = grp_load_fu_4813_local_B_120_ce0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_ping_120_ce0 = grp_compute_fu_4550_local_B_120_ce0.read();
        } else {
            local_B_ping_120_ce0 = ap_const_logic_0;
        }
    } else {
        local_B_ping_120_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_ping_120_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
         esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1))) {
        local_B_ping_120_we0 = grp_load_fu_4813_local_B_120_we0.read();
    } else {
        local_B_ping_120_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_ping_121_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_ping_121_address0 = grp_load_fu_4813_local_B_121_address0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_ping_121_address0 = grp_compute_fu_4550_local_B_121_address0.read();
        } else {
            local_B_ping_121_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        local_B_ping_121_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_B_ping_121_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_ping_121_ce0 = grp_load_fu_4813_local_B_121_ce0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_ping_121_ce0 = grp_compute_fu_4550_local_B_121_ce0.read();
        } else {
            local_B_ping_121_ce0 = ap_const_logic_0;
        }
    } else {
        local_B_ping_121_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_ping_121_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
         esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1))) {
        local_B_ping_121_we0 = grp_load_fu_4813_local_B_121_we0.read();
    } else {
        local_B_ping_121_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_ping_122_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_ping_122_address0 = grp_load_fu_4813_local_B_122_address0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_ping_122_address0 = grp_compute_fu_4550_local_B_122_address0.read();
        } else {
            local_B_ping_122_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        local_B_ping_122_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_B_ping_122_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_ping_122_ce0 = grp_load_fu_4813_local_B_122_ce0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_ping_122_ce0 = grp_compute_fu_4550_local_B_122_ce0.read();
        } else {
            local_B_ping_122_ce0 = ap_const_logic_0;
        }
    } else {
        local_B_ping_122_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_ping_122_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
         esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1))) {
        local_B_ping_122_we0 = grp_load_fu_4813_local_B_122_we0.read();
    } else {
        local_B_ping_122_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_ping_123_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_ping_123_address0 = grp_load_fu_4813_local_B_123_address0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_ping_123_address0 = grp_compute_fu_4550_local_B_123_address0.read();
        } else {
            local_B_ping_123_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        local_B_ping_123_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_B_ping_123_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_ping_123_ce0 = grp_load_fu_4813_local_B_123_ce0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_ping_123_ce0 = grp_compute_fu_4550_local_B_123_ce0.read();
        } else {
            local_B_ping_123_ce0 = ap_const_logic_0;
        }
    } else {
        local_B_ping_123_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_ping_123_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
         esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1))) {
        local_B_ping_123_we0 = grp_load_fu_4813_local_B_123_we0.read();
    } else {
        local_B_ping_123_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_ping_124_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_ping_124_address0 = grp_load_fu_4813_local_B_124_address0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_ping_124_address0 = grp_compute_fu_4550_local_B_124_address0.read();
        } else {
            local_B_ping_124_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        local_B_ping_124_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_B_ping_124_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_ping_124_ce0 = grp_load_fu_4813_local_B_124_ce0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_ping_124_ce0 = grp_compute_fu_4550_local_B_124_ce0.read();
        } else {
            local_B_ping_124_ce0 = ap_const_logic_0;
        }
    } else {
        local_B_ping_124_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_ping_124_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
         esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1))) {
        local_B_ping_124_we0 = grp_load_fu_4813_local_B_124_we0.read();
    } else {
        local_B_ping_124_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_ping_125_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_ping_125_address0 = grp_load_fu_4813_local_B_125_address0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_ping_125_address0 = grp_compute_fu_4550_local_B_125_address0.read();
        } else {
            local_B_ping_125_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        local_B_ping_125_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_B_ping_125_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_ping_125_ce0 = grp_load_fu_4813_local_B_125_ce0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_ping_125_ce0 = grp_compute_fu_4550_local_B_125_ce0.read();
        } else {
            local_B_ping_125_ce0 = ap_const_logic_0;
        }
    } else {
        local_B_ping_125_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_ping_125_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
         esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1))) {
        local_B_ping_125_we0 = grp_load_fu_4813_local_B_125_we0.read();
    } else {
        local_B_ping_125_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_ping_126_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_ping_126_address0 = grp_load_fu_4813_local_B_126_address0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_ping_126_address0 = grp_compute_fu_4550_local_B_126_address0.read();
        } else {
            local_B_ping_126_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        local_B_ping_126_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_B_ping_126_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_ping_126_ce0 = grp_load_fu_4813_local_B_126_ce0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_ping_126_ce0 = grp_compute_fu_4550_local_B_126_ce0.read();
        } else {
            local_B_ping_126_ce0 = ap_const_logic_0;
        }
    } else {
        local_B_ping_126_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_ping_126_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
         esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1))) {
        local_B_ping_126_we0 = grp_load_fu_4813_local_B_126_we0.read();
    } else {
        local_B_ping_126_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_ping_127_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_ping_127_address0 = grp_load_fu_4813_local_B_127_address0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_ping_127_address0 = grp_compute_fu_4550_local_B_127_address0.read();
        } else {
            local_B_ping_127_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        local_B_ping_127_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_B_ping_127_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_ping_127_ce0 = grp_load_fu_4813_local_B_127_ce0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_ping_127_ce0 = grp_compute_fu_4550_local_B_127_ce0.read();
        } else {
            local_B_ping_127_ce0 = ap_const_logic_0;
        }
    } else {
        local_B_ping_127_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_ping_127_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
         esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1))) {
        local_B_ping_127_we0 = grp_load_fu_4813_local_B_127_we0.read();
    } else {
        local_B_ping_127_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_ping_12_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_ping_12_address0 = grp_load_fu_4813_local_B_12_address0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_ping_12_address0 = grp_compute_fu_4550_local_B_12_address0.read();
        } else {
            local_B_ping_12_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        local_B_ping_12_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_B_ping_12_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_ping_12_ce0 = grp_load_fu_4813_local_B_12_ce0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_ping_12_ce0 = grp_compute_fu_4550_local_B_12_ce0.read();
        } else {
            local_B_ping_12_ce0 = ap_const_logic_0;
        }
    } else {
        local_B_ping_12_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_ping_12_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
         esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1))) {
        local_B_ping_12_we0 = grp_load_fu_4813_local_B_12_we0.read();
    } else {
        local_B_ping_12_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_ping_13_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_ping_13_address0 = grp_load_fu_4813_local_B_13_address0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_ping_13_address0 = grp_compute_fu_4550_local_B_13_address0.read();
        } else {
            local_B_ping_13_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        local_B_ping_13_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_B_ping_13_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_ping_13_ce0 = grp_load_fu_4813_local_B_13_ce0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_ping_13_ce0 = grp_compute_fu_4550_local_B_13_ce0.read();
        } else {
            local_B_ping_13_ce0 = ap_const_logic_0;
        }
    } else {
        local_B_ping_13_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_ping_13_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
         esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1))) {
        local_B_ping_13_we0 = grp_load_fu_4813_local_B_13_we0.read();
    } else {
        local_B_ping_13_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_ping_14_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_ping_14_address0 = grp_load_fu_4813_local_B_14_address0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_ping_14_address0 = grp_compute_fu_4550_local_B_14_address0.read();
        } else {
            local_B_ping_14_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        local_B_ping_14_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_B_ping_14_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_ping_14_ce0 = grp_load_fu_4813_local_B_14_ce0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_ping_14_ce0 = grp_compute_fu_4550_local_B_14_ce0.read();
        } else {
            local_B_ping_14_ce0 = ap_const_logic_0;
        }
    } else {
        local_B_ping_14_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_ping_14_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
         esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1))) {
        local_B_ping_14_we0 = grp_load_fu_4813_local_B_14_we0.read();
    } else {
        local_B_ping_14_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_ping_15_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_ping_15_address0 = grp_load_fu_4813_local_B_15_address0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_ping_15_address0 = grp_compute_fu_4550_local_B_15_address0.read();
        } else {
            local_B_ping_15_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        local_B_ping_15_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_B_ping_15_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_ping_15_ce0 = grp_load_fu_4813_local_B_15_ce0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_ping_15_ce0 = grp_compute_fu_4550_local_B_15_ce0.read();
        } else {
            local_B_ping_15_ce0 = ap_const_logic_0;
        }
    } else {
        local_B_ping_15_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_ping_15_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
         esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1))) {
        local_B_ping_15_we0 = grp_load_fu_4813_local_B_15_we0.read();
    } else {
        local_B_ping_15_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_ping_16_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_ping_16_address0 = grp_load_fu_4813_local_B_16_address0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_ping_16_address0 = grp_compute_fu_4550_local_B_16_address0.read();
        } else {
            local_B_ping_16_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        local_B_ping_16_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_B_ping_16_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_ping_16_ce0 = grp_load_fu_4813_local_B_16_ce0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_ping_16_ce0 = grp_compute_fu_4550_local_B_16_ce0.read();
        } else {
            local_B_ping_16_ce0 = ap_const_logic_0;
        }
    } else {
        local_B_ping_16_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_ping_16_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
         esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1))) {
        local_B_ping_16_we0 = grp_load_fu_4813_local_B_16_we0.read();
    } else {
        local_B_ping_16_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_ping_17_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_ping_17_address0 = grp_load_fu_4813_local_B_17_address0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_ping_17_address0 = grp_compute_fu_4550_local_B_17_address0.read();
        } else {
            local_B_ping_17_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        local_B_ping_17_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_B_ping_17_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_ping_17_ce0 = grp_load_fu_4813_local_B_17_ce0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_ping_17_ce0 = grp_compute_fu_4550_local_B_17_ce0.read();
        } else {
            local_B_ping_17_ce0 = ap_const_logic_0;
        }
    } else {
        local_B_ping_17_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_ping_17_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
         esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1))) {
        local_B_ping_17_we0 = grp_load_fu_4813_local_B_17_we0.read();
    } else {
        local_B_ping_17_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_ping_18_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_ping_18_address0 = grp_load_fu_4813_local_B_18_address0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_ping_18_address0 = grp_compute_fu_4550_local_B_18_address0.read();
        } else {
            local_B_ping_18_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        local_B_ping_18_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_B_ping_18_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_ping_18_ce0 = grp_load_fu_4813_local_B_18_ce0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_ping_18_ce0 = grp_compute_fu_4550_local_B_18_ce0.read();
        } else {
            local_B_ping_18_ce0 = ap_const_logic_0;
        }
    } else {
        local_B_ping_18_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_ping_18_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
         esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1))) {
        local_B_ping_18_we0 = grp_load_fu_4813_local_B_18_we0.read();
    } else {
        local_B_ping_18_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_ping_19_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_ping_19_address0 = grp_load_fu_4813_local_B_19_address0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_ping_19_address0 = grp_compute_fu_4550_local_B_19_address0.read();
        } else {
            local_B_ping_19_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        local_B_ping_19_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_B_ping_19_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_ping_19_ce0 = grp_load_fu_4813_local_B_19_ce0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_ping_19_ce0 = grp_compute_fu_4550_local_B_19_ce0.read();
        } else {
            local_B_ping_19_ce0 = ap_const_logic_0;
        }
    } else {
        local_B_ping_19_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_ping_19_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
         esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1))) {
        local_B_ping_19_we0 = grp_load_fu_4813_local_B_19_we0.read();
    } else {
        local_B_ping_19_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_ping_1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_ping_1_address0 = grp_load_fu_4813_local_B_1_address0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_ping_1_address0 = grp_compute_fu_4550_local_B_1_address0.read();
        } else {
            local_B_ping_1_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        local_B_ping_1_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_B_ping_1_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_ping_1_ce0 = grp_load_fu_4813_local_B_1_ce0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_ping_1_ce0 = grp_compute_fu_4550_local_B_1_ce0.read();
        } else {
            local_B_ping_1_ce0 = ap_const_logic_0;
        }
    } else {
        local_B_ping_1_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_ping_1_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
         esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1))) {
        local_B_ping_1_we0 = grp_load_fu_4813_local_B_1_we0.read();
    } else {
        local_B_ping_1_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_ping_20_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_ping_20_address0 = grp_load_fu_4813_local_B_20_address0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_ping_20_address0 = grp_compute_fu_4550_local_B_20_address0.read();
        } else {
            local_B_ping_20_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        local_B_ping_20_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_B_ping_20_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_ping_20_ce0 = grp_load_fu_4813_local_B_20_ce0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_ping_20_ce0 = grp_compute_fu_4550_local_B_20_ce0.read();
        } else {
            local_B_ping_20_ce0 = ap_const_logic_0;
        }
    } else {
        local_B_ping_20_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_ping_20_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
         esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1))) {
        local_B_ping_20_we0 = grp_load_fu_4813_local_B_20_we0.read();
    } else {
        local_B_ping_20_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_ping_21_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_ping_21_address0 = grp_load_fu_4813_local_B_21_address0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_ping_21_address0 = grp_compute_fu_4550_local_B_21_address0.read();
        } else {
            local_B_ping_21_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        local_B_ping_21_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_B_ping_21_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_ping_21_ce0 = grp_load_fu_4813_local_B_21_ce0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_ping_21_ce0 = grp_compute_fu_4550_local_B_21_ce0.read();
        } else {
            local_B_ping_21_ce0 = ap_const_logic_0;
        }
    } else {
        local_B_ping_21_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_ping_21_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
         esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1))) {
        local_B_ping_21_we0 = grp_load_fu_4813_local_B_21_we0.read();
    } else {
        local_B_ping_21_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_ping_22_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_ping_22_address0 = grp_load_fu_4813_local_B_22_address0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_ping_22_address0 = grp_compute_fu_4550_local_B_22_address0.read();
        } else {
            local_B_ping_22_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        local_B_ping_22_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_B_ping_22_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_ping_22_ce0 = grp_load_fu_4813_local_B_22_ce0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_ping_22_ce0 = grp_compute_fu_4550_local_B_22_ce0.read();
        } else {
            local_B_ping_22_ce0 = ap_const_logic_0;
        }
    } else {
        local_B_ping_22_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_ping_22_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
         esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1))) {
        local_B_ping_22_we0 = grp_load_fu_4813_local_B_22_we0.read();
    } else {
        local_B_ping_22_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_ping_23_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_ping_23_address0 = grp_load_fu_4813_local_B_23_address0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_ping_23_address0 = grp_compute_fu_4550_local_B_23_address0.read();
        } else {
            local_B_ping_23_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        local_B_ping_23_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_B_ping_23_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_ping_23_ce0 = grp_load_fu_4813_local_B_23_ce0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_ping_23_ce0 = grp_compute_fu_4550_local_B_23_ce0.read();
        } else {
            local_B_ping_23_ce0 = ap_const_logic_0;
        }
    } else {
        local_B_ping_23_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_ping_23_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
         esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1))) {
        local_B_ping_23_we0 = grp_load_fu_4813_local_B_23_we0.read();
    } else {
        local_B_ping_23_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_ping_24_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_ping_24_address0 = grp_load_fu_4813_local_B_24_address0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_ping_24_address0 = grp_compute_fu_4550_local_B_24_address0.read();
        } else {
            local_B_ping_24_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        local_B_ping_24_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_B_ping_24_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_ping_24_ce0 = grp_load_fu_4813_local_B_24_ce0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_ping_24_ce0 = grp_compute_fu_4550_local_B_24_ce0.read();
        } else {
            local_B_ping_24_ce0 = ap_const_logic_0;
        }
    } else {
        local_B_ping_24_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_ping_24_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
         esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1))) {
        local_B_ping_24_we0 = grp_load_fu_4813_local_B_24_we0.read();
    } else {
        local_B_ping_24_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_ping_25_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_ping_25_address0 = grp_load_fu_4813_local_B_25_address0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_ping_25_address0 = grp_compute_fu_4550_local_B_25_address0.read();
        } else {
            local_B_ping_25_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        local_B_ping_25_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_B_ping_25_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_ping_25_ce0 = grp_load_fu_4813_local_B_25_ce0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_ping_25_ce0 = grp_compute_fu_4550_local_B_25_ce0.read();
        } else {
            local_B_ping_25_ce0 = ap_const_logic_0;
        }
    } else {
        local_B_ping_25_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_ping_25_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
         esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1))) {
        local_B_ping_25_we0 = grp_load_fu_4813_local_B_25_we0.read();
    } else {
        local_B_ping_25_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_ping_26_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_ping_26_address0 = grp_load_fu_4813_local_B_26_address0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_ping_26_address0 = grp_compute_fu_4550_local_B_26_address0.read();
        } else {
            local_B_ping_26_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        local_B_ping_26_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_B_ping_26_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_ping_26_ce0 = grp_load_fu_4813_local_B_26_ce0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_ping_26_ce0 = grp_compute_fu_4550_local_B_26_ce0.read();
        } else {
            local_B_ping_26_ce0 = ap_const_logic_0;
        }
    } else {
        local_B_ping_26_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_ping_26_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
         esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1))) {
        local_B_ping_26_we0 = grp_load_fu_4813_local_B_26_we0.read();
    } else {
        local_B_ping_26_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_ping_27_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_ping_27_address0 = grp_load_fu_4813_local_B_27_address0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_ping_27_address0 = grp_compute_fu_4550_local_B_27_address0.read();
        } else {
            local_B_ping_27_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        local_B_ping_27_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_B_ping_27_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_ping_27_ce0 = grp_load_fu_4813_local_B_27_ce0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_ping_27_ce0 = grp_compute_fu_4550_local_B_27_ce0.read();
        } else {
            local_B_ping_27_ce0 = ap_const_logic_0;
        }
    } else {
        local_B_ping_27_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_ping_27_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
         esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1))) {
        local_B_ping_27_we0 = grp_load_fu_4813_local_B_27_we0.read();
    } else {
        local_B_ping_27_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_ping_28_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_ping_28_address0 = grp_load_fu_4813_local_B_28_address0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_ping_28_address0 = grp_compute_fu_4550_local_B_28_address0.read();
        } else {
            local_B_ping_28_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        local_B_ping_28_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_B_ping_28_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_ping_28_ce0 = grp_load_fu_4813_local_B_28_ce0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_ping_28_ce0 = grp_compute_fu_4550_local_B_28_ce0.read();
        } else {
            local_B_ping_28_ce0 = ap_const_logic_0;
        }
    } else {
        local_B_ping_28_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_ping_28_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
         esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1))) {
        local_B_ping_28_we0 = grp_load_fu_4813_local_B_28_we0.read();
    } else {
        local_B_ping_28_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_ping_29_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_ping_29_address0 = grp_load_fu_4813_local_B_29_address0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_ping_29_address0 = grp_compute_fu_4550_local_B_29_address0.read();
        } else {
            local_B_ping_29_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        local_B_ping_29_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_B_ping_29_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_ping_29_ce0 = grp_load_fu_4813_local_B_29_ce0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_ping_29_ce0 = grp_compute_fu_4550_local_B_29_ce0.read();
        } else {
            local_B_ping_29_ce0 = ap_const_logic_0;
        }
    } else {
        local_B_ping_29_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_ping_29_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
         esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1))) {
        local_B_ping_29_we0 = grp_load_fu_4813_local_B_29_we0.read();
    } else {
        local_B_ping_29_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_ping_2_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_ping_2_address0 = grp_load_fu_4813_local_B_2_address0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_ping_2_address0 = grp_compute_fu_4550_local_B_2_address0.read();
        } else {
            local_B_ping_2_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        local_B_ping_2_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_B_ping_2_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_ping_2_ce0 = grp_load_fu_4813_local_B_2_ce0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_ping_2_ce0 = grp_compute_fu_4550_local_B_2_ce0.read();
        } else {
            local_B_ping_2_ce0 = ap_const_logic_0;
        }
    } else {
        local_B_ping_2_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_ping_2_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
         esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1))) {
        local_B_ping_2_we0 = grp_load_fu_4813_local_B_2_we0.read();
    } else {
        local_B_ping_2_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_ping_30_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_ping_30_address0 = grp_load_fu_4813_local_B_30_address0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_ping_30_address0 = grp_compute_fu_4550_local_B_30_address0.read();
        } else {
            local_B_ping_30_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        local_B_ping_30_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_B_ping_30_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_ping_30_ce0 = grp_load_fu_4813_local_B_30_ce0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_ping_30_ce0 = grp_compute_fu_4550_local_B_30_ce0.read();
        } else {
            local_B_ping_30_ce0 = ap_const_logic_0;
        }
    } else {
        local_B_ping_30_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_ping_30_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
         esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1))) {
        local_B_ping_30_we0 = grp_load_fu_4813_local_B_30_we0.read();
    } else {
        local_B_ping_30_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_ping_31_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_ping_31_address0 = grp_load_fu_4813_local_B_31_address0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_ping_31_address0 = grp_compute_fu_4550_local_B_31_address0.read();
        } else {
            local_B_ping_31_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        local_B_ping_31_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_B_ping_31_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_ping_31_ce0 = grp_load_fu_4813_local_B_31_ce0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_ping_31_ce0 = grp_compute_fu_4550_local_B_31_ce0.read();
        } else {
            local_B_ping_31_ce0 = ap_const_logic_0;
        }
    } else {
        local_B_ping_31_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_ping_31_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
         esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1))) {
        local_B_ping_31_we0 = grp_load_fu_4813_local_B_31_we0.read();
    } else {
        local_B_ping_31_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_ping_32_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_ping_32_address0 = grp_load_fu_4813_local_B_32_address0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_ping_32_address0 = grp_compute_fu_4550_local_B_32_address0.read();
        } else {
            local_B_ping_32_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        local_B_ping_32_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_B_ping_32_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_ping_32_ce0 = grp_load_fu_4813_local_B_32_ce0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_ping_32_ce0 = grp_compute_fu_4550_local_B_32_ce0.read();
        } else {
            local_B_ping_32_ce0 = ap_const_logic_0;
        }
    } else {
        local_B_ping_32_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_ping_32_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
         esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1))) {
        local_B_ping_32_we0 = grp_load_fu_4813_local_B_32_we0.read();
    } else {
        local_B_ping_32_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_ping_33_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_ping_33_address0 = grp_load_fu_4813_local_B_33_address0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_ping_33_address0 = grp_compute_fu_4550_local_B_33_address0.read();
        } else {
            local_B_ping_33_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        local_B_ping_33_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_B_ping_33_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_ping_33_ce0 = grp_load_fu_4813_local_B_33_ce0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_ping_33_ce0 = grp_compute_fu_4550_local_B_33_ce0.read();
        } else {
            local_B_ping_33_ce0 = ap_const_logic_0;
        }
    } else {
        local_B_ping_33_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_ping_33_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
         esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1))) {
        local_B_ping_33_we0 = grp_load_fu_4813_local_B_33_we0.read();
    } else {
        local_B_ping_33_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_ping_34_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_ping_34_address0 = grp_load_fu_4813_local_B_34_address0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_ping_34_address0 = grp_compute_fu_4550_local_B_34_address0.read();
        } else {
            local_B_ping_34_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        local_B_ping_34_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_B_ping_34_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_ping_34_ce0 = grp_load_fu_4813_local_B_34_ce0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_ping_34_ce0 = grp_compute_fu_4550_local_B_34_ce0.read();
        } else {
            local_B_ping_34_ce0 = ap_const_logic_0;
        }
    } else {
        local_B_ping_34_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_ping_34_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
         esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1))) {
        local_B_ping_34_we0 = grp_load_fu_4813_local_B_34_we0.read();
    } else {
        local_B_ping_34_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_ping_35_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_ping_35_address0 = grp_load_fu_4813_local_B_35_address0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_ping_35_address0 = grp_compute_fu_4550_local_B_35_address0.read();
        } else {
            local_B_ping_35_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        local_B_ping_35_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_B_ping_35_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_ping_35_ce0 = grp_load_fu_4813_local_B_35_ce0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_ping_35_ce0 = grp_compute_fu_4550_local_B_35_ce0.read();
        } else {
            local_B_ping_35_ce0 = ap_const_logic_0;
        }
    } else {
        local_B_ping_35_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_ping_35_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
         esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1))) {
        local_B_ping_35_we0 = grp_load_fu_4813_local_B_35_we0.read();
    } else {
        local_B_ping_35_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_ping_36_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_ping_36_address0 = grp_load_fu_4813_local_B_36_address0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_ping_36_address0 = grp_compute_fu_4550_local_B_36_address0.read();
        } else {
            local_B_ping_36_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        local_B_ping_36_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_B_ping_36_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_ping_36_ce0 = grp_load_fu_4813_local_B_36_ce0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_ping_36_ce0 = grp_compute_fu_4550_local_B_36_ce0.read();
        } else {
            local_B_ping_36_ce0 = ap_const_logic_0;
        }
    } else {
        local_B_ping_36_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_ping_36_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
         esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1))) {
        local_B_ping_36_we0 = grp_load_fu_4813_local_B_36_we0.read();
    } else {
        local_B_ping_36_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_ping_37_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_ping_37_address0 = grp_load_fu_4813_local_B_37_address0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_ping_37_address0 = grp_compute_fu_4550_local_B_37_address0.read();
        } else {
            local_B_ping_37_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        local_B_ping_37_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_B_ping_37_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_ping_37_ce0 = grp_load_fu_4813_local_B_37_ce0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_ping_37_ce0 = grp_compute_fu_4550_local_B_37_ce0.read();
        } else {
            local_B_ping_37_ce0 = ap_const_logic_0;
        }
    } else {
        local_B_ping_37_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_ping_37_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
         esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1))) {
        local_B_ping_37_we0 = grp_load_fu_4813_local_B_37_we0.read();
    } else {
        local_B_ping_37_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_ping_38_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_ping_38_address0 = grp_load_fu_4813_local_B_38_address0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_ping_38_address0 = grp_compute_fu_4550_local_B_38_address0.read();
        } else {
            local_B_ping_38_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        local_B_ping_38_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_B_ping_38_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_ping_38_ce0 = grp_load_fu_4813_local_B_38_ce0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_ping_38_ce0 = grp_compute_fu_4550_local_B_38_ce0.read();
        } else {
            local_B_ping_38_ce0 = ap_const_logic_0;
        }
    } else {
        local_B_ping_38_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_ping_38_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
         esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1))) {
        local_B_ping_38_we0 = grp_load_fu_4813_local_B_38_we0.read();
    } else {
        local_B_ping_38_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_ping_39_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_ping_39_address0 = grp_load_fu_4813_local_B_39_address0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_ping_39_address0 = grp_compute_fu_4550_local_B_39_address0.read();
        } else {
            local_B_ping_39_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        local_B_ping_39_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_B_ping_39_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_ping_39_ce0 = grp_load_fu_4813_local_B_39_ce0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_ping_39_ce0 = grp_compute_fu_4550_local_B_39_ce0.read();
        } else {
            local_B_ping_39_ce0 = ap_const_logic_0;
        }
    } else {
        local_B_ping_39_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_ping_39_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
         esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1))) {
        local_B_ping_39_we0 = grp_load_fu_4813_local_B_39_we0.read();
    } else {
        local_B_ping_39_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_ping_3_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_ping_3_address0 = grp_load_fu_4813_local_B_3_address0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_ping_3_address0 = grp_compute_fu_4550_local_B_3_address0.read();
        } else {
            local_B_ping_3_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        local_B_ping_3_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_B_ping_3_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_ping_3_ce0 = grp_load_fu_4813_local_B_3_ce0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_ping_3_ce0 = grp_compute_fu_4550_local_B_3_ce0.read();
        } else {
            local_B_ping_3_ce0 = ap_const_logic_0;
        }
    } else {
        local_B_ping_3_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_ping_3_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
         esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1))) {
        local_B_ping_3_we0 = grp_load_fu_4813_local_B_3_we0.read();
    } else {
        local_B_ping_3_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_ping_40_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_ping_40_address0 = grp_load_fu_4813_local_B_40_address0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_ping_40_address0 = grp_compute_fu_4550_local_B_40_address0.read();
        } else {
            local_B_ping_40_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        local_B_ping_40_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_B_ping_40_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_ping_40_ce0 = grp_load_fu_4813_local_B_40_ce0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_ping_40_ce0 = grp_compute_fu_4550_local_B_40_ce0.read();
        } else {
            local_B_ping_40_ce0 = ap_const_logic_0;
        }
    } else {
        local_B_ping_40_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_ping_40_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
         esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1))) {
        local_B_ping_40_we0 = grp_load_fu_4813_local_B_40_we0.read();
    } else {
        local_B_ping_40_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_ping_41_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_ping_41_address0 = grp_load_fu_4813_local_B_41_address0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_ping_41_address0 = grp_compute_fu_4550_local_B_41_address0.read();
        } else {
            local_B_ping_41_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        local_B_ping_41_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_B_ping_41_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_ping_41_ce0 = grp_load_fu_4813_local_B_41_ce0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_ping_41_ce0 = grp_compute_fu_4550_local_B_41_ce0.read();
        } else {
            local_B_ping_41_ce0 = ap_const_logic_0;
        }
    } else {
        local_B_ping_41_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_ping_41_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
         esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1))) {
        local_B_ping_41_we0 = grp_load_fu_4813_local_B_41_we0.read();
    } else {
        local_B_ping_41_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_ping_42_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_ping_42_address0 = grp_load_fu_4813_local_B_42_address0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_ping_42_address0 = grp_compute_fu_4550_local_B_42_address0.read();
        } else {
            local_B_ping_42_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        local_B_ping_42_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_B_ping_42_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_ping_42_ce0 = grp_load_fu_4813_local_B_42_ce0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_ping_42_ce0 = grp_compute_fu_4550_local_B_42_ce0.read();
        } else {
            local_B_ping_42_ce0 = ap_const_logic_0;
        }
    } else {
        local_B_ping_42_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_ping_42_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
         esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1))) {
        local_B_ping_42_we0 = grp_load_fu_4813_local_B_42_we0.read();
    } else {
        local_B_ping_42_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_ping_43_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_ping_43_address0 = grp_load_fu_4813_local_B_43_address0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_ping_43_address0 = grp_compute_fu_4550_local_B_43_address0.read();
        } else {
            local_B_ping_43_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        local_B_ping_43_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_B_ping_43_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_ping_43_ce0 = grp_load_fu_4813_local_B_43_ce0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_ping_43_ce0 = grp_compute_fu_4550_local_B_43_ce0.read();
        } else {
            local_B_ping_43_ce0 = ap_const_logic_0;
        }
    } else {
        local_B_ping_43_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_ping_43_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
         esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1))) {
        local_B_ping_43_we0 = grp_load_fu_4813_local_B_43_we0.read();
    } else {
        local_B_ping_43_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_ping_44_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_ping_44_address0 = grp_load_fu_4813_local_B_44_address0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_ping_44_address0 = grp_compute_fu_4550_local_B_44_address0.read();
        } else {
            local_B_ping_44_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        local_B_ping_44_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_B_ping_44_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_ping_44_ce0 = grp_load_fu_4813_local_B_44_ce0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_ping_44_ce0 = grp_compute_fu_4550_local_B_44_ce0.read();
        } else {
            local_B_ping_44_ce0 = ap_const_logic_0;
        }
    } else {
        local_B_ping_44_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_ping_44_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
         esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1))) {
        local_B_ping_44_we0 = grp_load_fu_4813_local_B_44_we0.read();
    } else {
        local_B_ping_44_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_ping_45_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_ping_45_address0 = grp_load_fu_4813_local_B_45_address0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_ping_45_address0 = grp_compute_fu_4550_local_B_45_address0.read();
        } else {
            local_B_ping_45_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        local_B_ping_45_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_B_ping_45_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_ping_45_ce0 = grp_load_fu_4813_local_B_45_ce0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_ping_45_ce0 = grp_compute_fu_4550_local_B_45_ce0.read();
        } else {
            local_B_ping_45_ce0 = ap_const_logic_0;
        }
    } else {
        local_B_ping_45_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_ping_45_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
         esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1))) {
        local_B_ping_45_we0 = grp_load_fu_4813_local_B_45_we0.read();
    } else {
        local_B_ping_45_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_ping_46_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_ping_46_address0 = grp_load_fu_4813_local_B_46_address0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_ping_46_address0 = grp_compute_fu_4550_local_B_46_address0.read();
        } else {
            local_B_ping_46_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        local_B_ping_46_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_B_ping_46_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_ping_46_ce0 = grp_load_fu_4813_local_B_46_ce0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_ping_46_ce0 = grp_compute_fu_4550_local_B_46_ce0.read();
        } else {
            local_B_ping_46_ce0 = ap_const_logic_0;
        }
    } else {
        local_B_ping_46_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_ping_46_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
         esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1))) {
        local_B_ping_46_we0 = grp_load_fu_4813_local_B_46_we0.read();
    } else {
        local_B_ping_46_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_ping_47_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_ping_47_address0 = grp_load_fu_4813_local_B_47_address0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_ping_47_address0 = grp_compute_fu_4550_local_B_47_address0.read();
        } else {
            local_B_ping_47_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        local_B_ping_47_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_B_ping_47_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_ping_47_ce0 = grp_load_fu_4813_local_B_47_ce0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_ping_47_ce0 = grp_compute_fu_4550_local_B_47_ce0.read();
        } else {
            local_B_ping_47_ce0 = ap_const_logic_0;
        }
    } else {
        local_B_ping_47_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_ping_47_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
         esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1))) {
        local_B_ping_47_we0 = grp_load_fu_4813_local_B_47_we0.read();
    } else {
        local_B_ping_47_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_ping_48_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_ping_48_address0 = grp_load_fu_4813_local_B_48_address0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_ping_48_address0 = grp_compute_fu_4550_local_B_48_address0.read();
        } else {
            local_B_ping_48_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        local_B_ping_48_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_B_ping_48_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_ping_48_ce0 = grp_load_fu_4813_local_B_48_ce0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_ping_48_ce0 = grp_compute_fu_4550_local_B_48_ce0.read();
        } else {
            local_B_ping_48_ce0 = ap_const_logic_0;
        }
    } else {
        local_B_ping_48_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_ping_48_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
         esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1))) {
        local_B_ping_48_we0 = grp_load_fu_4813_local_B_48_we0.read();
    } else {
        local_B_ping_48_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_ping_49_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_ping_49_address0 = grp_load_fu_4813_local_B_49_address0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_ping_49_address0 = grp_compute_fu_4550_local_B_49_address0.read();
        } else {
            local_B_ping_49_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        local_B_ping_49_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_B_ping_49_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_ping_49_ce0 = grp_load_fu_4813_local_B_49_ce0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_ping_49_ce0 = grp_compute_fu_4550_local_B_49_ce0.read();
        } else {
            local_B_ping_49_ce0 = ap_const_logic_0;
        }
    } else {
        local_B_ping_49_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_ping_49_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
         esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1))) {
        local_B_ping_49_we0 = grp_load_fu_4813_local_B_49_we0.read();
    } else {
        local_B_ping_49_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_ping_4_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_ping_4_address0 = grp_load_fu_4813_local_B_4_address0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_ping_4_address0 = grp_compute_fu_4550_local_B_4_address0.read();
        } else {
            local_B_ping_4_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        local_B_ping_4_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_B_ping_4_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_ping_4_ce0 = grp_load_fu_4813_local_B_4_ce0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_ping_4_ce0 = grp_compute_fu_4550_local_B_4_ce0.read();
        } else {
            local_B_ping_4_ce0 = ap_const_logic_0;
        }
    } else {
        local_B_ping_4_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_ping_4_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
         esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1))) {
        local_B_ping_4_we0 = grp_load_fu_4813_local_B_4_we0.read();
    } else {
        local_B_ping_4_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_ping_50_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_ping_50_address0 = grp_load_fu_4813_local_B_50_address0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_ping_50_address0 = grp_compute_fu_4550_local_B_50_address0.read();
        } else {
            local_B_ping_50_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        local_B_ping_50_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_B_ping_50_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_ping_50_ce0 = grp_load_fu_4813_local_B_50_ce0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_ping_50_ce0 = grp_compute_fu_4550_local_B_50_ce0.read();
        } else {
            local_B_ping_50_ce0 = ap_const_logic_0;
        }
    } else {
        local_B_ping_50_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_ping_50_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
         esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1))) {
        local_B_ping_50_we0 = grp_load_fu_4813_local_B_50_we0.read();
    } else {
        local_B_ping_50_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_ping_51_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_ping_51_address0 = grp_load_fu_4813_local_B_51_address0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_ping_51_address0 = grp_compute_fu_4550_local_B_51_address0.read();
        } else {
            local_B_ping_51_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        local_B_ping_51_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_B_ping_51_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_ping_51_ce0 = grp_load_fu_4813_local_B_51_ce0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_ping_51_ce0 = grp_compute_fu_4550_local_B_51_ce0.read();
        } else {
            local_B_ping_51_ce0 = ap_const_logic_0;
        }
    } else {
        local_B_ping_51_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_ping_51_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
         esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1))) {
        local_B_ping_51_we0 = grp_load_fu_4813_local_B_51_we0.read();
    } else {
        local_B_ping_51_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_ping_52_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_ping_52_address0 = grp_load_fu_4813_local_B_52_address0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_ping_52_address0 = grp_compute_fu_4550_local_B_52_address0.read();
        } else {
            local_B_ping_52_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        local_B_ping_52_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_B_ping_52_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_ping_52_ce0 = grp_load_fu_4813_local_B_52_ce0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_ping_52_ce0 = grp_compute_fu_4550_local_B_52_ce0.read();
        } else {
            local_B_ping_52_ce0 = ap_const_logic_0;
        }
    } else {
        local_B_ping_52_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_ping_52_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
         esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1))) {
        local_B_ping_52_we0 = grp_load_fu_4813_local_B_52_we0.read();
    } else {
        local_B_ping_52_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_ping_53_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_ping_53_address0 = grp_load_fu_4813_local_B_53_address0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_ping_53_address0 = grp_compute_fu_4550_local_B_53_address0.read();
        } else {
            local_B_ping_53_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        local_B_ping_53_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_B_ping_53_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_ping_53_ce0 = grp_load_fu_4813_local_B_53_ce0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_ping_53_ce0 = grp_compute_fu_4550_local_B_53_ce0.read();
        } else {
            local_B_ping_53_ce0 = ap_const_logic_0;
        }
    } else {
        local_B_ping_53_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_ping_53_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
         esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1))) {
        local_B_ping_53_we0 = grp_load_fu_4813_local_B_53_we0.read();
    } else {
        local_B_ping_53_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_ping_54_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_ping_54_address0 = grp_load_fu_4813_local_B_54_address0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_ping_54_address0 = grp_compute_fu_4550_local_B_54_address0.read();
        } else {
            local_B_ping_54_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        local_B_ping_54_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_B_ping_54_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_ping_54_ce0 = grp_load_fu_4813_local_B_54_ce0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_ping_54_ce0 = grp_compute_fu_4550_local_B_54_ce0.read();
        } else {
            local_B_ping_54_ce0 = ap_const_logic_0;
        }
    } else {
        local_B_ping_54_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_ping_54_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
         esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1))) {
        local_B_ping_54_we0 = grp_load_fu_4813_local_B_54_we0.read();
    } else {
        local_B_ping_54_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_ping_55_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_ping_55_address0 = grp_load_fu_4813_local_B_55_address0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_ping_55_address0 = grp_compute_fu_4550_local_B_55_address0.read();
        } else {
            local_B_ping_55_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        local_B_ping_55_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_B_ping_55_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_ping_55_ce0 = grp_load_fu_4813_local_B_55_ce0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_ping_55_ce0 = grp_compute_fu_4550_local_B_55_ce0.read();
        } else {
            local_B_ping_55_ce0 = ap_const_logic_0;
        }
    } else {
        local_B_ping_55_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_ping_55_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
         esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1))) {
        local_B_ping_55_we0 = grp_load_fu_4813_local_B_55_we0.read();
    } else {
        local_B_ping_55_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_ping_56_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_ping_56_address0 = grp_load_fu_4813_local_B_56_address0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_ping_56_address0 = grp_compute_fu_4550_local_B_56_address0.read();
        } else {
            local_B_ping_56_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        local_B_ping_56_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_B_ping_56_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_ping_56_ce0 = grp_load_fu_4813_local_B_56_ce0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_ping_56_ce0 = grp_compute_fu_4550_local_B_56_ce0.read();
        } else {
            local_B_ping_56_ce0 = ap_const_logic_0;
        }
    } else {
        local_B_ping_56_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_ping_56_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
         esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1))) {
        local_B_ping_56_we0 = grp_load_fu_4813_local_B_56_we0.read();
    } else {
        local_B_ping_56_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_ping_57_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_ping_57_address0 = grp_load_fu_4813_local_B_57_address0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_ping_57_address0 = grp_compute_fu_4550_local_B_57_address0.read();
        } else {
            local_B_ping_57_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        local_B_ping_57_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_B_ping_57_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_ping_57_ce0 = grp_load_fu_4813_local_B_57_ce0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_ping_57_ce0 = grp_compute_fu_4550_local_B_57_ce0.read();
        } else {
            local_B_ping_57_ce0 = ap_const_logic_0;
        }
    } else {
        local_B_ping_57_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_ping_57_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
         esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1))) {
        local_B_ping_57_we0 = grp_load_fu_4813_local_B_57_we0.read();
    } else {
        local_B_ping_57_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_ping_58_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_ping_58_address0 = grp_load_fu_4813_local_B_58_address0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_ping_58_address0 = grp_compute_fu_4550_local_B_58_address0.read();
        } else {
            local_B_ping_58_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        local_B_ping_58_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_B_ping_58_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_ping_58_ce0 = grp_load_fu_4813_local_B_58_ce0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_ping_58_ce0 = grp_compute_fu_4550_local_B_58_ce0.read();
        } else {
            local_B_ping_58_ce0 = ap_const_logic_0;
        }
    } else {
        local_B_ping_58_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_ping_58_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
         esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1))) {
        local_B_ping_58_we0 = grp_load_fu_4813_local_B_58_we0.read();
    } else {
        local_B_ping_58_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_ping_59_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_ping_59_address0 = grp_load_fu_4813_local_B_59_address0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_ping_59_address0 = grp_compute_fu_4550_local_B_59_address0.read();
        } else {
            local_B_ping_59_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        local_B_ping_59_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_B_ping_59_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_ping_59_ce0 = grp_load_fu_4813_local_B_59_ce0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_ping_59_ce0 = grp_compute_fu_4550_local_B_59_ce0.read();
        } else {
            local_B_ping_59_ce0 = ap_const_logic_0;
        }
    } else {
        local_B_ping_59_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_ping_59_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
         esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1))) {
        local_B_ping_59_we0 = grp_load_fu_4813_local_B_59_we0.read();
    } else {
        local_B_ping_59_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_ping_5_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_ping_5_address0 = grp_load_fu_4813_local_B_5_address0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_ping_5_address0 = grp_compute_fu_4550_local_B_5_address0.read();
        } else {
            local_B_ping_5_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        local_B_ping_5_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_B_ping_5_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_ping_5_ce0 = grp_load_fu_4813_local_B_5_ce0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_ping_5_ce0 = grp_compute_fu_4550_local_B_5_ce0.read();
        } else {
            local_B_ping_5_ce0 = ap_const_logic_0;
        }
    } else {
        local_B_ping_5_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_ping_5_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
         esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1))) {
        local_B_ping_5_we0 = grp_load_fu_4813_local_B_5_we0.read();
    } else {
        local_B_ping_5_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_ping_60_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_ping_60_address0 = grp_load_fu_4813_local_B_60_address0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_ping_60_address0 = grp_compute_fu_4550_local_B_60_address0.read();
        } else {
            local_B_ping_60_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        local_B_ping_60_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_B_ping_60_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_ping_60_ce0 = grp_load_fu_4813_local_B_60_ce0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_ping_60_ce0 = grp_compute_fu_4550_local_B_60_ce0.read();
        } else {
            local_B_ping_60_ce0 = ap_const_logic_0;
        }
    } else {
        local_B_ping_60_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_ping_60_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
         esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1))) {
        local_B_ping_60_we0 = grp_load_fu_4813_local_B_60_we0.read();
    } else {
        local_B_ping_60_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_ping_61_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_ping_61_address0 = grp_load_fu_4813_local_B_61_address0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_ping_61_address0 = grp_compute_fu_4550_local_B_61_address0.read();
        } else {
            local_B_ping_61_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        local_B_ping_61_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_B_ping_61_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_ping_61_ce0 = grp_load_fu_4813_local_B_61_ce0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_ping_61_ce0 = grp_compute_fu_4550_local_B_61_ce0.read();
        } else {
            local_B_ping_61_ce0 = ap_const_logic_0;
        }
    } else {
        local_B_ping_61_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_ping_61_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
         esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1))) {
        local_B_ping_61_we0 = grp_load_fu_4813_local_B_61_we0.read();
    } else {
        local_B_ping_61_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_ping_62_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_ping_62_address0 = grp_load_fu_4813_local_B_62_address0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_ping_62_address0 = grp_compute_fu_4550_local_B_62_address0.read();
        } else {
            local_B_ping_62_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        local_B_ping_62_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_B_ping_62_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_ping_62_ce0 = grp_load_fu_4813_local_B_62_ce0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_ping_62_ce0 = grp_compute_fu_4550_local_B_62_ce0.read();
        } else {
            local_B_ping_62_ce0 = ap_const_logic_0;
        }
    } else {
        local_B_ping_62_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_ping_62_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
         esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1))) {
        local_B_ping_62_we0 = grp_load_fu_4813_local_B_62_we0.read();
    } else {
        local_B_ping_62_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_ping_63_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_ping_63_address0 = grp_load_fu_4813_local_B_63_address0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_ping_63_address0 = grp_compute_fu_4550_local_B_63_address0.read();
        } else {
            local_B_ping_63_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        local_B_ping_63_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_B_ping_63_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_ping_63_ce0 = grp_load_fu_4813_local_B_63_ce0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_ping_63_ce0 = grp_compute_fu_4550_local_B_63_ce0.read();
        } else {
            local_B_ping_63_ce0 = ap_const_logic_0;
        }
    } else {
        local_B_ping_63_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_ping_63_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
         esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1))) {
        local_B_ping_63_we0 = grp_load_fu_4813_local_B_63_we0.read();
    } else {
        local_B_ping_63_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_ping_64_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_ping_64_address0 = grp_load_fu_4813_local_B_64_address0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_ping_64_address0 = grp_compute_fu_4550_local_B_64_address0.read();
        } else {
            local_B_ping_64_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        local_B_ping_64_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_B_ping_64_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_ping_64_ce0 = grp_load_fu_4813_local_B_64_ce0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_ping_64_ce0 = grp_compute_fu_4550_local_B_64_ce0.read();
        } else {
            local_B_ping_64_ce0 = ap_const_logic_0;
        }
    } else {
        local_B_ping_64_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_ping_64_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
         esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1))) {
        local_B_ping_64_we0 = grp_load_fu_4813_local_B_64_we0.read();
    } else {
        local_B_ping_64_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_ping_65_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_ping_65_address0 = grp_load_fu_4813_local_B_65_address0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_ping_65_address0 = grp_compute_fu_4550_local_B_65_address0.read();
        } else {
            local_B_ping_65_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        local_B_ping_65_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_B_ping_65_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_ping_65_ce0 = grp_load_fu_4813_local_B_65_ce0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_ping_65_ce0 = grp_compute_fu_4550_local_B_65_ce0.read();
        } else {
            local_B_ping_65_ce0 = ap_const_logic_0;
        }
    } else {
        local_B_ping_65_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_ping_65_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
         esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1))) {
        local_B_ping_65_we0 = grp_load_fu_4813_local_B_65_we0.read();
    } else {
        local_B_ping_65_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_ping_66_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_ping_66_address0 = grp_load_fu_4813_local_B_66_address0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_ping_66_address0 = grp_compute_fu_4550_local_B_66_address0.read();
        } else {
            local_B_ping_66_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        local_B_ping_66_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_B_ping_66_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_ping_66_ce0 = grp_load_fu_4813_local_B_66_ce0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_ping_66_ce0 = grp_compute_fu_4550_local_B_66_ce0.read();
        } else {
            local_B_ping_66_ce0 = ap_const_logic_0;
        }
    } else {
        local_B_ping_66_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_ping_66_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
         esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1))) {
        local_B_ping_66_we0 = grp_load_fu_4813_local_B_66_we0.read();
    } else {
        local_B_ping_66_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_ping_67_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_ping_67_address0 = grp_load_fu_4813_local_B_67_address0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_ping_67_address0 = grp_compute_fu_4550_local_B_67_address0.read();
        } else {
            local_B_ping_67_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        local_B_ping_67_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_B_ping_67_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_ping_67_ce0 = grp_load_fu_4813_local_B_67_ce0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_ping_67_ce0 = grp_compute_fu_4550_local_B_67_ce0.read();
        } else {
            local_B_ping_67_ce0 = ap_const_logic_0;
        }
    } else {
        local_B_ping_67_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_ping_67_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
         esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1))) {
        local_B_ping_67_we0 = grp_load_fu_4813_local_B_67_we0.read();
    } else {
        local_B_ping_67_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_ping_68_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_ping_68_address0 = grp_load_fu_4813_local_B_68_address0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_ping_68_address0 = grp_compute_fu_4550_local_B_68_address0.read();
        } else {
            local_B_ping_68_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        local_B_ping_68_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_B_ping_68_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_ping_68_ce0 = grp_load_fu_4813_local_B_68_ce0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_ping_68_ce0 = grp_compute_fu_4550_local_B_68_ce0.read();
        } else {
            local_B_ping_68_ce0 = ap_const_logic_0;
        }
    } else {
        local_B_ping_68_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_ping_68_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
         esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1))) {
        local_B_ping_68_we0 = grp_load_fu_4813_local_B_68_we0.read();
    } else {
        local_B_ping_68_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_ping_69_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_ping_69_address0 = grp_load_fu_4813_local_B_69_address0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_ping_69_address0 = grp_compute_fu_4550_local_B_69_address0.read();
        } else {
            local_B_ping_69_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        local_B_ping_69_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_B_ping_69_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_ping_69_ce0 = grp_load_fu_4813_local_B_69_ce0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_ping_69_ce0 = grp_compute_fu_4550_local_B_69_ce0.read();
        } else {
            local_B_ping_69_ce0 = ap_const_logic_0;
        }
    } else {
        local_B_ping_69_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_ping_69_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
         esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1))) {
        local_B_ping_69_we0 = grp_load_fu_4813_local_B_69_we0.read();
    } else {
        local_B_ping_69_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_ping_6_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_ping_6_address0 = grp_load_fu_4813_local_B_6_address0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_ping_6_address0 = grp_compute_fu_4550_local_B_6_address0.read();
        } else {
            local_B_ping_6_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        local_B_ping_6_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_B_ping_6_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_ping_6_ce0 = grp_load_fu_4813_local_B_6_ce0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_ping_6_ce0 = grp_compute_fu_4550_local_B_6_ce0.read();
        } else {
            local_B_ping_6_ce0 = ap_const_logic_0;
        }
    } else {
        local_B_ping_6_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_ping_6_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
         esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1))) {
        local_B_ping_6_we0 = grp_load_fu_4813_local_B_6_we0.read();
    } else {
        local_B_ping_6_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_ping_70_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_ping_70_address0 = grp_load_fu_4813_local_B_70_address0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_ping_70_address0 = grp_compute_fu_4550_local_B_70_address0.read();
        } else {
            local_B_ping_70_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        local_B_ping_70_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_B_ping_70_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_ping_70_ce0 = grp_load_fu_4813_local_B_70_ce0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_ping_70_ce0 = grp_compute_fu_4550_local_B_70_ce0.read();
        } else {
            local_B_ping_70_ce0 = ap_const_logic_0;
        }
    } else {
        local_B_ping_70_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_ping_70_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
         esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1))) {
        local_B_ping_70_we0 = grp_load_fu_4813_local_B_70_we0.read();
    } else {
        local_B_ping_70_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_ping_71_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_ping_71_address0 = grp_load_fu_4813_local_B_71_address0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_ping_71_address0 = grp_compute_fu_4550_local_B_71_address0.read();
        } else {
            local_B_ping_71_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        local_B_ping_71_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_B_ping_71_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_ping_71_ce0 = grp_load_fu_4813_local_B_71_ce0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_ping_71_ce0 = grp_compute_fu_4550_local_B_71_ce0.read();
        } else {
            local_B_ping_71_ce0 = ap_const_logic_0;
        }
    } else {
        local_B_ping_71_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_ping_71_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
         esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1))) {
        local_B_ping_71_we0 = grp_load_fu_4813_local_B_71_we0.read();
    } else {
        local_B_ping_71_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_ping_72_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_ping_72_address0 = grp_load_fu_4813_local_B_72_address0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_ping_72_address0 = grp_compute_fu_4550_local_B_72_address0.read();
        } else {
            local_B_ping_72_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        local_B_ping_72_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_B_ping_72_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_ping_72_ce0 = grp_load_fu_4813_local_B_72_ce0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_ping_72_ce0 = grp_compute_fu_4550_local_B_72_ce0.read();
        } else {
            local_B_ping_72_ce0 = ap_const_logic_0;
        }
    } else {
        local_B_ping_72_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_ping_72_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
         esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1))) {
        local_B_ping_72_we0 = grp_load_fu_4813_local_B_72_we0.read();
    } else {
        local_B_ping_72_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_ping_73_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_ping_73_address0 = grp_load_fu_4813_local_B_73_address0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_ping_73_address0 = grp_compute_fu_4550_local_B_73_address0.read();
        } else {
            local_B_ping_73_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        local_B_ping_73_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_B_ping_73_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_ping_73_ce0 = grp_load_fu_4813_local_B_73_ce0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_ping_73_ce0 = grp_compute_fu_4550_local_B_73_ce0.read();
        } else {
            local_B_ping_73_ce0 = ap_const_logic_0;
        }
    } else {
        local_B_ping_73_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_ping_73_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
         esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1))) {
        local_B_ping_73_we0 = grp_load_fu_4813_local_B_73_we0.read();
    } else {
        local_B_ping_73_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_ping_74_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_ping_74_address0 = grp_load_fu_4813_local_B_74_address0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_ping_74_address0 = grp_compute_fu_4550_local_B_74_address0.read();
        } else {
            local_B_ping_74_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        local_B_ping_74_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_B_ping_74_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_ping_74_ce0 = grp_load_fu_4813_local_B_74_ce0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_ping_74_ce0 = grp_compute_fu_4550_local_B_74_ce0.read();
        } else {
            local_B_ping_74_ce0 = ap_const_logic_0;
        }
    } else {
        local_B_ping_74_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_ping_74_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
         esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1))) {
        local_B_ping_74_we0 = grp_load_fu_4813_local_B_74_we0.read();
    } else {
        local_B_ping_74_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_ping_75_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_ping_75_address0 = grp_load_fu_4813_local_B_75_address0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_ping_75_address0 = grp_compute_fu_4550_local_B_75_address0.read();
        } else {
            local_B_ping_75_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        local_B_ping_75_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_B_ping_75_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_ping_75_ce0 = grp_load_fu_4813_local_B_75_ce0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_ping_75_ce0 = grp_compute_fu_4550_local_B_75_ce0.read();
        } else {
            local_B_ping_75_ce0 = ap_const_logic_0;
        }
    } else {
        local_B_ping_75_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_ping_75_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
         esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1))) {
        local_B_ping_75_we0 = grp_load_fu_4813_local_B_75_we0.read();
    } else {
        local_B_ping_75_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_ping_76_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_ping_76_address0 = grp_load_fu_4813_local_B_76_address0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_ping_76_address0 = grp_compute_fu_4550_local_B_76_address0.read();
        } else {
            local_B_ping_76_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        local_B_ping_76_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_B_ping_76_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_ping_76_ce0 = grp_load_fu_4813_local_B_76_ce0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_ping_76_ce0 = grp_compute_fu_4550_local_B_76_ce0.read();
        } else {
            local_B_ping_76_ce0 = ap_const_logic_0;
        }
    } else {
        local_B_ping_76_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_ping_76_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
         esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1))) {
        local_B_ping_76_we0 = grp_load_fu_4813_local_B_76_we0.read();
    } else {
        local_B_ping_76_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_ping_77_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_ping_77_address0 = grp_load_fu_4813_local_B_77_address0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_ping_77_address0 = grp_compute_fu_4550_local_B_77_address0.read();
        } else {
            local_B_ping_77_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        local_B_ping_77_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_B_ping_77_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_ping_77_ce0 = grp_load_fu_4813_local_B_77_ce0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_ping_77_ce0 = grp_compute_fu_4550_local_B_77_ce0.read();
        } else {
            local_B_ping_77_ce0 = ap_const_logic_0;
        }
    } else {
        local_B_ping_77_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_ping_77_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
         esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1))) {
        local_B_ping_77_we0 = grp_load_fu_4813_local_B_77_we0.read();
    } else {
        local_B_ping_77_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_ping_78_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_ping_78_address0 = grp_load_fu_4813_local_B_78_address0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_ping_78_address0 = grp_compute_fu_4550_local_B_78_address0.read();
        } else {
            local_B_ping_78_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        local_B_ping_78_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_B_ping_78_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_ping_78_ce0 = grp_load_fu_4813_local_B_78_ce0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_ping_78_ce0 = grp_compute_fu_4550_local_B_78_ce0.read();
        } else {
            local_B_ping_78_ce0 = ap_const_logic_0;
        }
    } else {
        local_B_ping_78_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_ping_78_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
         esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1))) {
        local_B_ping_78_we0 = grp_load_fu_4813_local_B_78_we0.read();
    } else {
        local_B_ping_78_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_ping_79_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_ping_79_address0 = grp_load_fu_4813_local_B_79_address0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_ping_79_address0 = grp_compute_fu_4550_local_B_79_address0.read();
        } else {
            local_B_ping_79_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        local_B_ping_79_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_B_ping_79_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_ping_79_ce0 = grp_load_fu_4813_local_B_79_ce0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_ping_79_ce0 = grp_compute_fu_4550_local_B_79_ce0.read();
        } else {
            local_B_ping_79_ce0 = ap_const_logic_0;
        }
    } else {
        local_B_ping_79_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_ping_79_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
         esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1))) {
        local_B_ping_79_we0 = grp_load_fu_4813_local_B_79_we0.read();
    } else {
        local_B_ping_79_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_ping_7_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_ping_7_address0 = grp_load_fu_4813_local_B_7_address0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_ping_7_address0 = grp_compute_fu_4550_local_B_7_address0.read();
        } else {
            local_B_ping_7_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        local_B_ping_7_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_B_ping_7_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_ping_7_ce0 = grp_load_fu_4813_local_B_7_ce0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_ping_7_ce0 = grp_compute_fu_4550_local_B_7_ce0.read();
        } else {
            local_B_ping_7_ce0 = ap_const_logic_0;
        }
    } else {
        local_B_ping_7_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_ping_7_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
         esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1))) {
        local_B_ping_7_we0 = grp_load_fu_4813_local_B_7_we0.read();
    } else {
        local_B_ping_7_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_ping_80_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_ping_80_address0 = grp_load_fu_4813_local_B_80_address0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_ping_80_address0 = grp_compute_fu_4550_local_B_80_address0.read();
        } else {
            local_B_ping_80_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        local_B_ping_80_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_B_ping_80_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_ping_80_ce0 = grp_load_fu_4813_local_B_80_ce0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_ping_80_ce0 = grp_compute_fu_4550_local_B_80_ce0.read();
        } else {
            local_B_ping_80_ce0 = ap_const_logic_0;
        }
    } else {
        local_B_ping_80_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_ping_80_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
         esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1))) {
        local_B_ping_80_we0 = grp_load_fu_4813_local_B_80_we0.read();
    } else {
        local_B_ping_80_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_ping_81_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_ping_81_address0 = grp_load_fu_4813_local_B_81_address0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_ping_81_address0 = grp_compute_fu_4550_local_B_81_address0.read();
        } else {
            local_B_ping_81_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        local_B_ping_81_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_B_ping_81_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_ping_81_ce0 = grp_load_fu_4813_local_B_81_ce0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_ping_81_ce0 = grp_compute_fu_4550_local_B_81_ce0.read();
        } else {
            local_B_ping_81_ce0 = ap_const_logic_0;
        }
    } else {
        local_B_ping_81_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_ping_81_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
         esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1))) {
        local_B_ping_81_we0 = grp_load_fu_4813_local_B_81_we0.read();
    } else {
        local_B_ping_81_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_ping_82_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_ping_82_address0 = grp_load_fu_4813_local_B_82_address0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_ping_82_address0 = grp_compute_fu_4550_local_B_82_address0.read();
        } else {
            local_B_ping_82_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        local_B_ping_82_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_B_ping_82_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_ping_82_ce0 = grp_load_fu_4813_local_B_82_ce0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_ping_82_ce0 = grp_compute_fu_4550_local_B_82_ce0.read();
        } else {
            local_B_ping_82_ce0 = ap_const_logic_0;
        }
    } else {
        local_B_ping_82_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_ping_82_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
         esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1))) {
        local_B_ping_82_we0 = grp_load_fu_4813_local_B_82_we0.read();
    } else {
        local_B_ping_82_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_ping_83_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_ping_83_address0 = grp_load_fu_4813_local_B_83_address0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_ping_83_address0 = grp_compute_fu_4550_local_B_83_address0.read();
        } else {
            local_B_ping_83_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        local_B_ping_83_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_B_ping_83_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_ping_83_ce0 = grp_load_fu_4813_local_B_83_ce0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_ping_83_ce0 = grp_compute_fu_4550_local_B_83_ce0.read();
        } else {
            local_B_ping_83_ce0 = ap_const_logic_0;
        }
    } else {
        local_B_ping_83_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_ping_83_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
         esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1))) {
        local_B_ping_83_we0 = grp_load_fu_4813_local_B_83_we0.read();
    } else {
        local_B_ping_83_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_ping_84_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_ping_84_address0 = grp_load_fu_4813_local_B_84_address0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_ping_84_address0 = grp_compute_fu_4550_local_B_84_address0.read();
        } else {
            local_B_ping_84_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        local_B_ping_84_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_B_ping_84_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_ping_84_ce0 = grp_load_fu_4813_local_B_84_ce0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_ping_84_ce0 = grp_compute_fu_4550_local_B_84_ce0.read();
        } else {
            local_B_ping_84_ce0 = ap_const_logic_0;
        }
    } else {
        local_B_ping_84_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_ping_84_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
         esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1))) {
        local_B_ping_84_we0 = grp_load_fu_4813_local_B_84_we0.read();
    } else {
        local_B_ping_84_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_ping_85_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_ping_85_address0 = grp_load_fu_4813_local_B_85_address0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_ping_85_address0 = grp_compute_fu_4550_local_B_85_address0.read();
        } else {
            local_B_ping_85_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        local_B_ping_85_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_B_ping_85_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_ping_85_ce0 = grp_load_fu_4813_local_B_85_ce0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_ping_85_ce0 = grp_compute_fu_4550_local_B_85_ce0.read();
        } else {
            local_B_ping_85_ce0 = ap_const_logic_0;
        }
    } else {
        local_B_ping_85_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_ping_85_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
         esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1))) {
        local_B_ping_85_we0 = grp_load_fu_4813_local_B_85_we0.read();
    } else {
        local_B_ping_85_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_ping_86_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_ping_86_address0 = grp_load_fu_4813_local_B_86_address0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_ping_86_address0 = grp_compute_fu_4550_local_B_86_address0.read();
        } else {
            local_B_ping_86_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        local_B_ping_86_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_B_ping_86_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_ping_86_ce0 = grp_load_fu_4813_local_B_86_ce0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_ping_86_ce0 = grp_compute_fu_4550_local_B_86_ce0.read();
        } else {
            local_B_ping_86_ce0 = ap_const_logic_0;
        }
    } else {
        local_B_ping_86_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_ping_86_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
         esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1))) {
        local_B_ping_86_we0 = grp_load_fu_4813_local_B_86_we0.read();
    } else {
        local_B_ping_86_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_ping_87_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_ping_87_address0 = grp_load_fu_4813_local_B_87_address0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_ping_87_address0 = grp_compute_fu_4550_local_B_87_address0.read();
        } else {
            local_B_ping_87_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        local_B_ping_87_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_B_ping_87_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_ping_87_ce0 = grp_load_fu_4813_local_B_87_ce0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_ping_87_ce0 = grp_compute_fu_4550_local_B_87_ce0.read();
        } else {
            local_B_ping_87_ce0 = ap_const_logic_0;
        }
    } else {
        local_B_ping_87_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_ping_87_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
         esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1))) {
        local_B_ping_87_we0 = grp_load_fu_4813_local_B_87_we0.read();
    } else {
        local_B_ping_87_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_ping_88_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_ping_88_address0 = grp_load_fu_4813_local_B_88_address0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_ping_88_address0 = grp_compute_fu_4550_local_B_88_address0.read();
        } else {
            local_B_ping_88_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        local_B_ping_88_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_B_ping_88_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_ping_88_ce0 = grp_load_fu_4813_local_B_88_ce0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_ping_88_ce0 = grp_compute_fu_4550_local_B_88_ce0.read();
        } else {
            local_B_ping_88_ce0 = ap_const_logic_0;
        }
    } else {
        local_B_ping_88_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_ping_88_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
         esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1))) {
        local_B_ping_88_we0 = grp_load_fu_4813_local_B_88_we0.read();
    } else {
        local_B_ping_88_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_ping_89_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_ping_89_address0 = grp_load_fu_4813_local_B_89_address0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_ping_89_address0 = grp_compute_fu_4550_local_B_89_address0.read();
        } else {
            local_B_ping_89_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        local_B_ping_89_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_B_ping_89_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_ping_89_ce0 = grp_load_fu_4813_local_B_89_ce0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_ping_89_ce0 = grp_compute_fu_4550_local_B_89_ce0.read();
        } else {
            local_B_ping_89_ce0 = ap_const_logic_0;
        }
    } else {
        local_B_ping_89_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_ping_89_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
         esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1))) {
        local_B_ping_89_we0 = grp_load_fu_4813_local_B_89_we0.read();
    } else {
        local_B_ping_89_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_ping_8_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_ping_8_address0 = grp_load_fu_4813_local_B_8_address0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_ping_8_address0 = grp_compute_fu_4550_local_B_8_address0.read();
        } else {
            local_B_ping_8_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        local_B_ping_8_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_B_ping_8_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_ping_8_ce0 = grp_load_fu_4813_local_B_8_ce0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_ping_8_ce0 = grp_compute_fu_4550_local_B_8_ce0.read();
        } else {
            local_B_ping_8_ce0 = ap_const_logic_0;
        }
    } else {
        local_B_ping_8_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_ping_8_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
         esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1))) {
        local_B_ping_8_we0 = grp_load_fu_4813_local_B_8_we0.read();
    } else {
        local_B_ping_8_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_ping_90_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_ping_90_address0 = grp_load_fu_4813_local_B_90_address0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_ping_90_address0 = grp_compute_fu_4550_local_B_90_address0.read();
        } else {
            local_B_ping_90_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        local_B_ping_90_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_B_ping_90_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_ping_90_ce0 = grp_load_fu_4813_local_B_90_ce0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_ping_90_ce0 = grp_compute_fu_4550_local_B_90_ce0.read();
        } else {
            local_B_ping_90_ce0 = ap_const_logic_0;
        }
    } else {
        local_B_ping_90_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_ping_90_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
         esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1))) {
        local_B_ping_90_we0 = grp_load_fu_4813_local_B_90_we0.read();
    } else {
        local_B_ping_90_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_ping_91_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_ping_91_address0 = grp_load_fu_4813_local_B_91_address0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_ping_91_address0 = grp_compute_fu_4550_local_B_91_address0.read();
        } else {
            local_B_ping_91_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        local_B_ping_91_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_B_ping_91_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_ping_91_ce0 = grp_load_fu_4813_local_B_91_ce0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_ping_91_ce0 = grp_compute_fu_4550_local_B_91_ce0.read();
        } else {
            local_B_ping_91_ce0 = ap_const_logic_0;
        }
    } else {
        local_B_ping_91_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_ping_91_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
         esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1))) {
        local_B_ping_91_we0 = grp_load_fu_4813_local_B_91_we0.read();
    } else {
        local_B_ping_91_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_ping_92_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_ping_92_address0 = grp_load_fu_4813_local_B_92_address0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_ping_92_address0 = grp_compute_fu_4550_local_B_92_address0.read();
        } else {
            local_B_ping_92_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        local_B_ping_92_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_B_ping_92_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_ping_92_ce0 = grp_load_fu_4813_local_B_92_ce0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_ping_92_ce0 = grp_compute_fu_4550_local_B_92_ce0.read();
        } else {
            local_B_ping_92_ce0 = ap_const_logic_0;
        }
    } else {
        local_B_ping_92_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_ping_92_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
         esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1))) {
        local_B_ping_92_we0 = grp_load_fu_4813_local_B_92_we0.read();
    } else {
        local_B_ping_92_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_ping_93_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_ping_93_address0 = grp_load_fu_4813_local_B_93_address0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_ping_93_address0 = grp_compute_fu_4550_local_B_93_address0.read();
        } else {
            local_B_ping_93_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        local_B_ping_93_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_B_ping_93_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_ping_93_ce0 = grp_load_fu_4813_local_B_93_ce0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_ping_93_ce0 = grp_compute_fu_4550_local_B_93_ce0.read();
        } else {
            local_B_ping_93_ce0 = ap_const_logic_0;
        }
    } else {
        local_B_ping_93_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_ping_93_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
         esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1))) {
        local_B_ping_93_we0 = grp_load_fu_4813_local_B_93_we0.read();
    } else {
        local_B_ping_93_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_ping_94_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_ping_94_address0 = grp_load_fu_4813_local_B_94_address0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_ping_94_address0 = grp_compute_fu_4550_local_B_94_address0.read();
        } else {
            local_B_ping_94_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        local_B_ping_94_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_B_ping_94_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_ping_94_ce0 = grp_load_fu_4813_local_B_94_ce0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_ping_94_ce0 = grp_compute_fu_4550_local_B_94_ce0.read();
        } else {
            local_B_ping_94_ce0 = ap_const_logic_0;
        }
    } else {
        local_B_ping_94_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_ping_94_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
         esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1))) {
        local_B_ping_94_we0 = grp_load_fu_4813_local_B_94_we0.read();
    } else {
        local_B_ping_94_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_ping_95_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_ping_95_address0 = grp_load_fu_4813_local_B_95_address0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_ping_95_address0 = grp_compute_fu_4550_local_B_95_address0.read();
        } else {
            local_B_ping_95_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        local_B_ping_95_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_B_ping_95_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_ping_95_ce0 = grp_load_fu_4813_local_B_95_ce0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_ping_95_ce0 = grp_compute_fu_4550_local_B_95_ce0.read();
        } else {
            local_B_ping_95_ce0 = ap_const_logic_0;
        }
    } else {
        local_B_ping_95_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_ping_95_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
         esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1))) {
        local_B_ping_95_we0 = grp_load_fu_4813_local_B_95_we0.read();
    } else {
        local_B_ping_95_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_ping_96_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_ping_96_address0 = grp_load_fu_4813_local_B_96_address0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_ping_96_address0 = grp_compute_fu_4550_local_B_96_address0.read();
        } else {
            local_B_ping_96_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        local_B_ping_96_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_B_ping_96_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_ping_96_ce0 = grp_load_fu_4813_local_B_96_ce0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_ping_96_ce0 = grp_compute_fu_4550_local_B_96_ce0.read();
        } else {
            local_B_ping_96_ce0 = ap_const_logic_0;
        }
    } else {
        local_B_ping_96_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_ping_96_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
         esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1))) {
        local_B_ping_96_we0 = grp_load_fu_4813_local_B_96_we0.read();
    } else {
        local_B_ping_96_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_ping_97_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_ping_97_address0 = grp_load_fu_4813_local_B_97_address0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_ping_97_address0 = grp_compute_fu_4550_local_B_97_address0.read();
        } else {
            local_B_ping_97_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        local_B_ping_97_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_B_ping_97_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_ping_97_ce0 = grp_load_fu_4813_local_B_97_ce0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_ping_97_ce0 = grp_compute_fu_4550_local_B_97_ce0.read();
        } else {
            local_B_ping_97_ce0 = ap_const_logic_0;
        }
    } else {
        local_B_ping_97_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_ping_97_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
         esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1))) {
        local_B_ping_97_we0 = grp_load_fu_4813_local_B_97_we0.read();
    } else {
        local_B_ping_97_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_ping_98_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_ping_98_address0 = grp_load_fu_4813_local_B_98_address0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_ping_98_address0 = grp_compute_fu_4550_local_B_98_address0.read();
        } else {
            local_B_ping_98_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        local_B_ping_98_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_B_ping_98_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_ping_98_ce0 = grp_load_fu_4813_local_B_98_ce0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_ping_98_ce0 = grp_compute_fu_4550_local_B_98_ce0.read();
        } else {
            local_B_ping_98_ce0 = ap_const_logic_0;
        }
    } else {
        local_B_ping_98_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_ping_98_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
         esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1))) {
        local_B_ping_98_we0 = grp_load_fu_4813_local_B_98_we0.read();
    } else {
        local_B_ping_98_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_ping_99_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_ping_99_address0 = grp_load_fu_4813_local_B_99_address0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_ping_99_address0 = grp_compute_fu_4550_local_B_99_address0.read();
        } else {
            local_B_ping_99_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        local_B_ping_99_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_B_ping_99_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_ping_99_ce0 = grp_load_fu_4813_local_B_99_ce0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_ping_99_ce0 = grp_compute_fu_4550_local_B_99_ce0.read();
        } else {
            local_B_ping_99_ce0 = ap_const_logic_0;
        }
    } else {
        local_B_ping_99_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_ping_99_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
         esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1))) {
        local_B_ping_99_we0 = grp_load_fu_4813_local_B_99_we0.read();
    } else {
        local_B_ping_99_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_ping_9_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_ping_9_address0 = grp_load_fu_4813_local_B_9_address0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_ping_9_address0 = grp_compute_fu_4550_local_B_9_address0.read();
        } else {
            local_B_ping_9_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        local_B_ping_9_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_B_ping_9_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_ping_9_ce0 = grp_load_fu_4813_local_B_9_ce0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_ping_9_ce0 = grp_compute_fu_4550_local_B_9_ce0.read();
        } else {
            local_B_ping_9_ce0 = ap_const_logic_0;
        }
    } else {
        local_B_ping_9_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_ping_9_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
         esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1))) {
        local_B_ping_9_we0 = grp_load_fu_4813_local_B_9_we0.read();
    } else {
        local_B_ping_9_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_pong_0_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_pong_0_address0 = grp_load_fu_4813_local_B_0_address0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_pong_0_address0 = grp_compute_fu_4550_local_B_0_address0.read();
        } else {
            local_B_pong_0_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        local_B_pong_0_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_B_pong_0_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_pong_0_ce0 = grp_load_fu_4813_local_B_0_ce0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_pong_0_ce0 = grp_compute_fu_4550_local_B_0_ce0.read();
        } else {
            local_B_pong_0_ce0 = ap_const_logic_0;
        }
    } else {
        local_B_pong_0_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_pong_0_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
         esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0))) {
        local_B_pong_0_we0 = grp_load_fu_4813_local_B_0_we0.read();
    } else {
        local_B_pong_0_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_pong_100_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_pong_100_address0 = grp_load_fu_4813_local_B_100_address0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_pong_100_address0 = grp_compute_fu_4550_local_B_100_address0.read();
        } else {
            local_B_pong_100_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        local_B_pong_100_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_B_pong_100_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_pong_100_ce0 = grp_load_fu_4813_local_B_100_ce0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_pong_100_ce0 = grp_compute_fu_4550_local_B_100_ce0.read();
        } else {
            local_B_pong_100_ce0 = ap_const_logic_0;
        }
    } else {
        local_B_pong_100_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_pong_100_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
         esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0))) {
        local_B_pong_100_we0 = grp_load_fu_4813_local_B_100_we0.read();
    } else {
        local_B_pong_100_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_pong_101_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_pong_101_address0 = grp_load_fu_4813_local_B_101_address0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_pong_101_address0 = grp_compute_fu_4550_local_B_101_address0.read();
        } else {
            local_B_pong_101_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        local_B_pong_101_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_B_pong_101_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_pong_101_ce0 = grp_load_fu_4813_local_B_101_ce0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_pong_101_ce0 = grp_compute_fu_4550_local_B_101_ce0.read();
        } else {
            local_B_pong_101_ce0 = ap_const_logic_0;
        }
    } else {
        local_B_pong_101_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_pong_101_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
         esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0))) {
        local_B_pong_101_we0 = grp_load_fu_4813_local_B_101_we0.read();
    } else {
        local_B_pong_101_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_pong_102_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_pong_102_address0 = grp_load_fu_4813_local_B_102_address0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_pong_102_address0 = grp_compute_fu_4550_local_B_102_address0.read();
        } else {
            local_B_pong_102_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        local_B_pong_102_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_B_pong_102_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_pong_102_ce0 = grp_load_fu_4813_local_B_102_ce0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_pong_102_ce0 = grp_compute_fu_4550_local_B_102_ce0.read();
        } else {
            local_B_pong_102_ce0 = ap_const_logic_0;
        }
    } else {
        local_B_pong_102_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_pong_102_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
         esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0))) {
        local_B_pong_102_we0 = grp_load_fu_4813_local_B_102_we0.read();
    } else {
        local_B_pong_102_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_pong_103_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_pong_103_address0 = grp_load_fu_4813_local_B_103_address0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_pong_103_address0 = grp_compute_fu_4550_local_B_103_address0.read();
        } else {
            local_B_pong_103_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        local_B_pong_103_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_B_pong_103_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_pong_103_ce0 = grp_load_fu_4813_local_B_103_ce0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_pong_103_ce0 = grp_compute_fu_4550_local_B_103_ce0.read();
        } else {
            local_B_pong_103_ce0 = ap_const_logic_0;
        }
    } else {
        local_B_pong_103_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_pong_103_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
         esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0))) {
        local_B_pong_103_we0 = grp_load_fu_4813_local_B_103_we0.read();
    } else {
        local_B_pong_103_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_pong_104_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_pong_104_address0 = grp_load_fu_4813_local_B_104_address0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_pong_104_address0 = grp_compute_fu_4550_local_B_104_address0.read();
        } else {
            local_B_pong_104_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        local_B_pong_104_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_B_pong_104_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_pong_104_ce0 = grp_load_fu_4813_local_B_104_ce0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_pong_104_ce0 = grp_compute_fu_4550_local_B_104_ce0.read();
        } else {
            local_B_pong_104_ce0 = ap_const_logic_0;
        }
    } else {
        local_B_pong_104_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_pong_104_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
         esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0))) {
        local_B_pong_104_we0 = grp_load_fu_4813_local_B_104_we0.read();
    } else {
        local_B_pong_104_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_pong_105_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_pong_105_address0 = grp_load_fu_4813_local_B_105_address0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_pong_105_address0 = grp_compute_fu_4550_local_B_105_address0.read();
        } else {
            local_B_pong_105_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        local_B_pong_105_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_B_pong_105_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_pong_105_ce0 = grp_load_fu_4813_local_B_105_ce0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_pong_105_ce0 = grp_compute_fu_4550_local_B_105_ce0.read();
        } else {
            local_B_pong_105_ce0 = ap_const_logic_0;
        }
    } else {
        local_B_pong_105_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_pong_105_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
         esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0))) {
        local_B_pong_105_we0 = grp_load_fu_4813_local_B_105_we0.read();
    } else {
        local_B_pong_105_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_pong_106_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_pong_106_address0 = grp_load_fu_4813_local_B_106_address0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_pong_106_address0 = grp_compute_fu_4550_local_B_106_address0.read();
        } else {
            local_B_pong_106_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        local_B_pong_106_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_B_pong_106_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_pong_106_ce0 = grp_load_fu_4813_local_B_106_ce0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_pong_106_ce0 = grp_compute_fu_4550_local_B_106_ce0.read();
        } else {
            local_B_pong_106_ce0 = ap_const_logic_0;
        }
    } else {
        local_B_pong_106_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_pong_106_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
         esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0))) {
        local_B_pong_106_we0 = grp_load_fu_4813_local_B_106_we0.read();
    } else {
        local_B_pong_106_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_pong_107_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_pong_107_address0 = grp_load_fu_4813_local_B_107_address0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_pong_107_address0 = grp_compute_fu_4550_local_B_107_address0.read();
        } else {
            local_B_pong_107_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        local_B_pong_107_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_B_pong_107_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_pong_107_ce0 = grp_load_fu_4813_local_B_107_ce0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_pong_107_ce0 = grp_compute_fu_4550_local_B_107_ce0.read();
        } else {
            local_B_pong_107_ce0 = ap_const_logic_0;
        }
    } else {
        local_B_pong_107_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_pong_107_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
         esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0))) {
        local_B_pong_107_we0 = grp_load_fu_4813_local_B_107_we0.read();
    } else {
        local_B_pong_107_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_pong_108_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_pong_108_address0 = grp_load_fu_4813_local_B_108_address0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_pong_108_address0 = grp_compute_fu_4550_local_B_108_address0.read();
        } else {
            local_B_pong_108_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        local_B_pong_108_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_B_pong_108_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_pong_108_ce0 = grp_load_fu_4813_local_B_108_ce0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_pong_108_ce0 = grp_compute_fu_4550_local_B_108_ce0.read();
        } else {
            local_B_pong_108_ce0 = ap_const_logic_0;
        }
    } else {
        local_B_pong_108_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_pong_108_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
         esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0))) {
        local_B_pong_108_we0 = grp_load_fu_4813_local_B_108_we0.read();
    } else {
        local_B_pong_108_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_pong_109_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_pong_109_address0 = grp_load_fu_4813_local_B_109_address0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_pong_109_address0 = grp_compute_fu_4550_local_B_109_address0.read();
        } else {
            local_B_pong_109_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        local_B_pong_109_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_B_pong_109_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_pong_109_ce0 = grp_load_fu_4813_local_B_109_ce0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_pong_109_ce0 = grp_compute_fu_4550_local_B_109_ce0.read();
        } else {
            local_B_pong_109_ce0 = ap_const_logic_0;
        }
    } else {
        local_B_pong_109_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_pong_109_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
         esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0))) {
        local_B_pong_109_we0 = grp_load_fu_4813_local_B_109_we0.read();
    } else {
        local_B_pong_109_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_pong_10_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_pong_10_address0 = grp_load_fu_4813_local_B_10_address0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_pong_10_address0 = grp_compute_fu_4550_local_B_10_address0.read();
        } else {
            local_B_pong_10_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        local_B_pong_10_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_B_pong_10_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_pong_10_ce0 = grp_load_fu_4813_local_B_10_ce0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_pong_10_ce0 = grp_compute_fu_4550_local_B_10_ce0.read();
        } else {
            local_B_pong_10_ce0 = ap_const_logic_0;
        }
    } else {
        local_B_pong_10_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_pong_10_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
         esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0))) {
        local_B_pong_10_we0 = grp_load_fu_4813_local_B_10_we0.read();
    } else {
        local_B_pong_10_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_pong_110_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_pong_110_address0 = grp_load_fu_4813_local_B_110_address0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_pong_110_address0 = grp_compute_fu_4550_local_B_110_address0.read();
        } else {
            local_B_pong_110_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        local_B_pong_110_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_B_pong_110_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_pong_110_ce0 = grp_load_fu_4813_local_B_110_ce0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_pong_110_ce0 = grp_compute_fu_4550_local_B_110_ce0.read();
        } else {
            local_B_pong_110_ce0 = ap_const_logic_0;
        }
    } else {
        local_B_pong_110_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_pong_110_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
         esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0))) {
        local_B_pong_110_we0 = grp_load_fu_4813_local_B_110_we0.read();
    } else {
        local_B_pong_110_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_pong_111_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_pong_111_address0 = grp_load_fu_4813_local_B_111_address0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_pong_111_address0 = grp_compute_fu_4550_local_B_111_address0.read();
        } else {
            local_B_pong_111_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        local_B_pong_111_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_B_pong_111_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_pong_111_ce0 = grp_load_fu_4813_local_B_111_ce0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_pong_111_ce0 = grp_compute_fu_4550_local_B_111_ce0.read();
        } else {
            local_B_pong_111_ce0 = ap_const_logic_0;
        }
    } else {
        local_B_pong_111_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_pong_111_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
         esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0))) {
        local_B_pong_111_we0 = grp_load_fu_4813_local_B_111_we0.read();
    } else {
        local_B_pong_111_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_pong_112_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_pong_112_address0 = grp_load_fu_4813_local_B_112_address0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_pong_112_address0 = grp_compute_fu_4550_local_B_112_address0.read();
        } else {
            local_B_pong_112_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        local_B_pong_112_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_B_pong_112_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_pong_112_ce0 = grp_load_fu_4813_local_B_112_ce0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_pong_112_ce0 = grp_compute_fu_4550_local_B_112_ce0.read();
        } else {
            local_B_pong_112_ce0 = ap_const_logic_0;
        }
    } else {
        local_B_pong_112_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_pong_112_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
         esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0))) {
        local_B_pong_112_we0 = grp_load_fu_4813_local_B_112_we0.read();
    } else {
        local_B_pong_112_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_pong_113_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_pong_113_address0 = grp_load_fu_4813_local_B_113_address0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_pong_113_address0 = grp_compute_fu_4550_local_B_113_address0.read();
        } else {
            local_B_pong_113_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        local_B_pong_113_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_B_pong_113_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_pong_113_ce0 = grp_load_fu_4813_local_B_113_ce0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_pong_113_ce0 = grp_compute_fu_4550_local_B_113_ce0.read();
        } else {
            local_B_pong_113_ce0 = ap_const_logic_0;
        }
    } else {
        local_B_pong_113_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_pong_113_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
         esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0))) {
        local_B_pong_113_we0 = grp_load_fu_4813_local_B_113_we0.read();
    } else {
        local_B_pong_113_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_pong_114_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_pong_114_address0 = grp_load_fu_4813_local_B_114_address0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_pong_114_address0 = grp_compute_fu_4550_local_B_114_address0.read();
        } else {
            local_B_pong_114_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        local_B_pong_114_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_B_pong_114_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_pong_114_ce0 = grp_load_fu_4813_local_B_114_ce0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_pong_114_ce0 = grp_compute_fu_4550_local_B_114_ce0.read();
        } else {
            local_B_pong_114_ce0 = ap_const_logic_0;
        }
    } else {
        local_B_pong_114_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_pong_114_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
         esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0))) {
        local_B_pong_114_we0 = grp_load_fu_4813_local_B_114_we0.read();
    } else {
        local_B_pong_114_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_pong_115_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_pong_115_address0 = grp_load_fu_4813_local_B_115_address0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_pong_115_address0 = grp_compute_fu_4550_local_B_115_address0.read();
        } else {
            local_B_pong_115_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        local_B_pong_115_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_B_pong_115_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_pong_115_ce0 = grp_load_fu_4813_local_B_115_ce0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_pong_115_ce0 = grp_compute_fu_4550_local_B_115_ce0.read();
        } else {
            local_B_pong_115_ce0 = ap_const_logic_0;
        }
    } else {
        local_B_pong_115_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_pong_115_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
         esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0))) {
        local_B_pong_115_we0 = grp_load_fu_4813_local_B_115_we0.read();
    } else {
        local_B_pong_115_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_pong_116_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_pong_116_address0 = grp_load_fu_4813_local_B_116_address0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_pong_116_address0 = grp_compute_fu_4550_local_B_116_address0.read();
        } else {
            local_B_pong_116_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        local_B_pong_116_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_B_pong_116_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_pong_116_ce0 = grp_load_fu_4813_local_B_116_ce0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_pong_116_ce0 = grp_compute_fu_4550_local_B_116_ce0.read();
        } else {
            local_B_pong_116_ce0 = ap_const_logic_0;
        }
    } else {
        local_B_pong_116_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_pong_116_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
         esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0))) {
        local_B_pong_116_we0 = grp_load_fu_4813_local_B_116_we0.read();
    } else {
        local_B_pong_116_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_pong_117_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_pong_117_address0 = grp_load_fu_4813_local_B_117_address0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_pong_117_address0 = grp_compute_fu_4550_local_B_117_address0.read();
        } else {
            local_B_pong_117_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        local_B_pong_117_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_B_pong_117_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_pong_117_ce0 = grp_load_fu_4813_local_B_117_ce0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_pong_117_ce0 = grp_compute_fu_4550_local_B_117_ce0.read();
        } else {
            local_B_pong_117_ce0 = ap_const_logic_0;
        }
    } else {
        local_B_pong_117_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_pong_117_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
         esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0))) {
        local_B_pong_117_we0 = grp_load_fu_4813_local_B_117_we0.read();
    } else {
        local_B_pong_117_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_pong_118_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_pong_118_address0 = grp_load_fu_4813_local_B_118_address0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_pong_118_address0 = grp_compute_fu_4550_local_B_118_address0.read();
        } else {
            local_B_pong_118_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        local_B_pong_118_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_B_pong_118_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_pong_118_ce0 = grp_load_fu_4813_local_B_118_ce0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_pong_118_ce0 = grp_compute_fu_4550_local_B_118_ce0.read();
        } else {
            local_B_pong_118_ce0 = ap_const_logic_0;
        }
    } else {
        local_B_pong_118_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_pong_118_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
         esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0))) {
        local_B_pong_118_we0 = grp_load_fu_4813_local_B_118_we0.read();
    } else {
        local_B_pong_118_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_pong_119_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_pong_119_address0 = grp_load_fu_4813_local_B_119_address0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_pong_119_address0 = grp_compute_fu_4550_local_B_119_address0.read();
        } else {
            local_B_pong_119_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        local_B_pong_119_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_B_pong_119_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_pong_119_ce0 = grp_load_fu_4813_local_B_119_ce0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_pong_119_ce0 = grp_compute_fu_4550_local_B_119_ce0.read();
        } else {
            local_B_pong_119_ce0 = ap_const_logic_0;
        }
    } else {
        local_B_pong_119_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_pong_119_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
         esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0))) {
        local_B_pong_119_we0 = grp_load_fu_4813_local_B_119_we0.read();
    } else {
        local_B_pong_119_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_pong_11_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_pong_11_address0 = grp_load_fu_4813_local_B_11_address0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_pong_11_address0 = grp_compute_fu_4550_local_B_11_address0.read();
        } else {
            local_B_pong_11_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        local_B_pong_11_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_B_pong_11_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_pong_11_ce0 = grp_load_fu_4813_local_B_11_ce0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_pong_11_ce0 = grp_compute_fu_4550_local_B_11_ce0.read();
        } else {
            local_B_pong_11_ce0 = ap_const_logic_0;
        }
    } else {
        local_B_pong_11_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_pong_11_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
         esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0))) {
        local_B_pong_11_we0 = grp_load_fu_4813_local_B_11_we0.read();
    } else {
        local_B_pong_11_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_pong_120_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_pong_120_address0 = grp_load_fu_4813_local_B_120_address0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_pong_120_address0 = grp_compute_fu_4550_local_B_120_address0.read();
        } else {
            local_B_pong_120_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        local_B_pong_120_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_B_pong_120_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_pong_120_ce0 = grp_load_fu_4813_local_B_120_ce0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_pong_120_ce0 = grp_compute_fu_4550_local_B_120_ce0.read();
        } else {
            local_B_pong_120_ce0 = ap_const_logic_0;
        }
    } else {
        local_B_pong_120_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_pong_120_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
         esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0))) {
        local_B_pong_120_we0 = grp_load_fu_4813_local_B_120_we0.read();
    } else {
        local_B_pong_120_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_pong_121_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_pong_121_address0 = grp_load_fu_4813_local_B_121_address0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_pong_121_address0 = grp_compute_fu_4550_local_B_121_address0.read();
        } else {
            local_B_pong_121_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        local_B_pong_121_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_B_pong_121_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_pong_121_ce0 = grp_load_fu_4813_local_B_121_ce0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_pong_121_ce0 = grp_compute_fu_4550_local_B_121_ce0.read();
        } else {
            local_B_pong_121_ce0 = ap_const_logic_0;
        }
    } else {
        local_B_pong_121_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_pong_121_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
         esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0))) {
        local_B_pong_121_we0 = grp_load_fu_4813_local_B_121_we0.read();
    } else {
        local_B_pong_121_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_pong_122_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_pong_122_address0 = grp_load_fu_4813_local_B_122_address0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_pong_122_address0 = grp_compute_fu_4550_local_B_122_address0.read();
        } else {
            local_B_pong_122_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        local_B_pong_122_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_B_pong_122_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_pong_122_ce0 = grp_load_fu_4813_local_B_122_ce0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_pong_122_ce0 = grp_compute_fu_4550_local_B_122_ce0.read();
        } else {
            local_B_pong_122_ce0 = ap_const_logic_0;
        }
    } else {
        local_B_pong_122_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_pong_122_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
         esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0))) {
        local_B_pong_122_we0 = grp_load_fu_4813_local_B_122_we0.read();
    } else {
        local_B_pong_122_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_pong_123_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_pong_123_address0 = grp_load_fu_4813_local_B_123_address0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_pong_123_address0 = grp_compute_fu_4550_local_B_123_address0.read();
        } else {
            local_B_pong_123_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        local_B_pong_123_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_B_pong_123_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_pong_123_ce0 = grp_load_fu_4813_local_B_123_ce0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_pong_123_ce0 = grp_compute_fu_4550_local_B_123_ce0.read();
        } else {
            local_B_pong_123_ce0 = ap_const_logic_0;
        }
    } else {
        local_B_pong_123_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_pong_123_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
         esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0))) {
        local_B_pong_123_we0 = grp_load_fu_4813_local_B_123_we0.read();
    } else {
        local_B_pong_123_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_pong_124_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_pong_124_address0 = grp_load_fu_4813_local_B_124_address0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_pong_124_address0 = grp_compute_fu_4550_local_B_124_address0.read();
        } else {
            local_B_pong_124_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        local_B_pong_124_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_B_pong_124_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_pong_124_ce0 = grp_load_fu_4813_local_B_124_ce0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_pong_124_ce0 = grp_compute_fu_4550_local_B_124_ce0.read();
        } else {
            local_B_pong_124_ce0 = ap_const_logic_0;
        }
    } else {
        local_B_pong_124_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_pong_124_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
         esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0))) {
        local_B_pong_124_we0 = grp_load_fu_4813_local_B_124_we0.read();
    } else {
        local_B_pong_124_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_pong_125_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_pong_125_address0 = grp_load_fu_4813_local_B_125_address0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_pong_125_address0 = grp_compute_fu_4550_local_B_125_address0.read();
        } else {
            local_B_pong_125_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        local_B_pong_125_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_B_pong_125_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_pong_125_ce0 = grp_load_fu_4813_local_B_125_ce0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_pong_125_ce0 = grp_compute_fu_4550_local_B_125_ce0.read();
        } else {
            local_B_pong_125_ce0 = ap_const_logic_0;
        }
    } else {
        local_B_pong_125_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_pong_125_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
         esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0))) {
        local_B_pong_125_we0 = grp_load_fu_4813_local_B_125_we0.read();
    } else {
        local_B_pong_125_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_pong_126_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_pong_126_address0 = grp_load_fu_4813_local_B_126_address0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_pong_126_address0 = grp_compute_fu_4550_local_B_126_address0.read();
        } else {
            local_B_pong_126_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        local_B_pong_126_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_B_pong_126_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_pong_126_ce0 = grp_load_fu_4813_local_B_126_ce0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_pong_126_ce0 = grp_compute_fu_4550_local_B_126_ce0.read();
        } else {
            local_B_pong_126_ce0 = ap_const_logic_0;
        }
    } else {
        local_B_pong_126_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_pong_126_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
         esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0))) {
        local_B_pong_126_we0 = grp_load_fu_4813_local_B_126_we0.read();
    } else {
        local_B_pong_126_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_pong_127_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_pong_127_address0 = grp_load_fu_4813_local_B_127_address0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_pong_127_address0 = grp_compute_fu_4550_local_B_127_address0.read();
        } else {
            local_B_pong_127_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        local_B_pong_127_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_B_pong_127_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_pong_127_ce0 = grp_load_fu_4813_local_B_127_ce0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_pong_127_ce0 = grp_compute_fu_4550_local_B_127_ce0.read();
        } else {
            local_B_pong_127_ce0 = ap_const_logic_0;
        }
    } else {
        local_B_pong_127_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_pong_127_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
         esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0))) {
        local_B_pong_127_we0 = grp_load_fu_4813_local_B_127_we0.read();
    } else {
        local_B_pong_127_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_pong_12_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_pong_12_address0 = grp_load_fu_4813_local_B_12_address0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_pong_12_address0 = grp_compute_fu_4550_local_B_12_address0.read();
        } else {
            local_B_pong_12_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        local_B_pong_12_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_B_pong_12_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_pong_12_ce0 = grp_load_fu_4813_local_B_12_ce0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_pong_12_ce0 = grp_compute_fu_4550_local_B_12_ce0.read();
        } else {
            local_B_pong_12_ce0 = ap_const_logic_0;
        }
    } else {
        local_B_pong_12_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_pong_12_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
         esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0))) {
        local_B_pong_12_we0 = grp_load_fu_4813_local_B_12_we0.read();
    } else {
        local_B_pong_12_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_pong_13_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_pong_13_address0 = grp_load_fu_4813_local_B_13_address0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_pong_13_address0 = grp_compute_fu_4550_local_B_13_address0.read();
        } else {
            local_B_pong_13_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        local_B_pong_13_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_B_pong_13_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_pong_13_ce0 = grp_load_fu_4813_local_B_13_ce0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_pong_13_ce0 = grp_compute_fu_4550_local_B_13_ce0.read();
        } else {
            local_B_pong_13_ce0 = ap_const_logic_0;
        }
    } else {
        local_B_pong_13_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_pong_13_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
         esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0))) {
        local_B_pong_13_we0 = grp_load_fu_4813_local_B_13_we0.read();
    } else {
        local_B_pong_13_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_pong_14_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_pong_14_address0 = grp_load_fu_4813_local_B_14_address0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_pong_14_address0 = grp_compute_fu_4550_local_B_14_address0.read();
        } else {
            local_B_pong_14_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        local_B_pong_14_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_B_pong_14_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_pong_14_ce0 = grp_load_fu_4813_local_B_14_ce0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_pong_14_ce0 = grp_compute_fu_4550_local_B_14_ce0.read();
        } else {
            local_B_pong_14_ce0 = ap_const_logic_0;
        }
    } else {
        local_B_pong_14_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_pong_14_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
         esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0))) {
        local_B_pong_14_we0 = grp_load_fu_4813_local_B_14_we0.read();
    } else {
        local_B_pong_14_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_pong_15_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_pong_15_address0 = grp_load_fu_4813_local_B_15_address0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_pong_15_address0 = grp_compute_fu_4550_local_B_15_address0.read();
        } else {
            local_B_pong_15_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        local_B_pong_15_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_B_pong_15_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_pong_15_ce0 = grp_load_fu_4813_local_B_15_ce0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_pong_15_ce0 = grp_compute_fu_4550_local_B_15_ce0.read();
        } else {
            local_B_pong_15_ce0 = ap_const_logic_0;
        }
    } else {
        local_B_pong_15_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_pong_15_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
         esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0))) {
        local_B_pong_15_we0 = grp_load_fu_4813_local_B_15_we0.read();
    } else {
        local_B_pong_15_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_pong_16_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_pong_16_address0 = grp_load_fu_4813_local_B_16_address0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_pong_16_address0 = grp_compute_fu_4550_local_B_16_address0.read();
        } else {
            local_B_pong_16_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        local_B_pong_16_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_B_pong_16_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_pong_16_ce0 = grp_load_fu_4813_local_B_16_ce0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_pong_16_ce0 = grp_compute_fu_4550_local_B_16_ce0.read();
        } else {
            local_B_pong_16_ce0 = ap_const_logic_0;
        }
    } else {
        local_B_pong_16_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_pong_16_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
         esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0))) {
        local_B_pong_16_we0 = grp_load_fu_4813_local_B_16_we0.read();
    } else {
        local_B_pong_16_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_pong_17_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_pong_17_address0 = grp_load_fu_4813_local_B_17_address0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_pong_17_address0 = grp_compute_fu_4550_local_B_17_address0.read();
        } else {
            local_B_pong_17_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        local_B_pong_17_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_B_pong_17_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_pong_17_ce0 = grp_load_fu_4813_local_B_17_ce0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_pong_17_ce0 = grp_compute_fu_4550_local_B_17_ce0.read();
        } else {
            local_B_pong_17_ce0 = ap_const_logic_0;
        }
    } else {
        local_B_pong_17_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_pong_17_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
         esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0))) {
        local_B_pong_17_we0 = grp_load_fu_4813_local_B_17_we0.read();
    } else {
        local_B_pong_17_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_pong_18_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_pong_18_address0 = grp_load_fu_4813_local_B_18_address0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_pong_18_address0 = grp_compute_fu_4550_local_B_18_address0.read();
        } else {
            local_B_pong_18_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        local_B_pong_18_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_B_pong_18_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_pong_18_ce0 = grp_load_fu_4813_local_B_18_ce0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_pong_18_ce0 = grp_compute_fu_4550_local_B_18_ce0.read();
        } else {
            local_B_pong_18_ce0 = ap_const_logic_0;
        }
    } else {
        local_B_pong_18_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_pong_18_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
         esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0))) {
        local_B_pong_18_we0 = grp_load_fu_4813_local_B_18_we0.read();
    } else {
        local_B_pong_18_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_pong_19_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_pong_19_address0 = grp_load_fu_4813_local_B_19_address0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_pong_19_address0 = grp_compute_fu_4550_local_B_19_address0.read();
        } else {
            local_B_pong_19_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        local_B_pong_19_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_B_pong_19_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_pong_19_ce0 = grp_load_fu_4813_local_B_19_ce0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_pong_19_ce0 = grp_compute_fu_4550_local_B_19_ce0.read();
        } else {
            local_B_pong_19_ce0 = ap_const_logic_0;
        }
    } else {
        local_B_pong_19_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_pong_19_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
         esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0))) {
        local_B_pong_19_we0 = grp_load_fu_4813_local_B_19_we0.read();
    } else {
        local_B_pong_19_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_pong_1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_pong_1_address0 = grp_load_fu_4813_local_B_1_address0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_pong_1_address0 = grp_compute_fu_4550_local_B_1_address0.read();
        } else {
            local_B_pong_1_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        local_B_pong_1_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_B_pong_1_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_pong_1_ce0 = grp_load_fu_4813_local_B_1_ce0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_pong_1_ce0 = grp_compute_fu_4550_local_B_1_ce0.read();
        } else {
            local_B_pong_1_ce0 = ap_const_logic_0;
        }
    } else {
        local_B_pong_1_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_pong_1_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
         esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0))) {
        local_B_pong_1_we0 = grp_load_fu_4813_local_B_1_we0.read();
    } else {
        local_B_pong_1_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_pong_20_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_pong_20_address0 = grp_load_fu_4813_local_B_20_address0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_pong_20_address0 = grp_compute_fu_4550_local_B_20_address0.read();
        } else {
            local_B_pong_20_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        local_B_pong_20_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_B_pong_20_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_pong_20_ce0 = grp_load_fu_4813_local_B_20_ce0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_pong_20_ce0 = grp_compute_fu_4550_local_B_20_ce0.read();
        } else {
            local_B_pong_20_ce0 = ap_const_logic_0;
        }
    } else {
        local_B_pong_20_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_pong_20_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
         esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0))) {
        local_B_pong_20_we0 = grp_load_fu_4813_local_B_20_we0.read();
    } else {
        local_B_pong_20_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_pong_21_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_pong_21_address0 = grp_load_fu_4813_local_B_21_address0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_pong_21_address0 = grp_compute_fu_4550_local_B_21_address0.read();
        } else {
            local_B_pong_21_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        local_B_pong_21_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_B_pong_21_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_pong_21_ce0 = grp_load_fu_4813_local_B_21_ce0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_pong_21_ce0 = grp_compute_fu_4550_local_B_21_ce0.read();
        } else {
            local_B_pong_21_ce0 = ap_const_logic_0;
        }
    } else {
        local_B_pong_21_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_pong_21_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
         esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0))) {
        local_B_pong_21_we0 = grp_load_fu_4813_local_B_21_we0.read();
    } else {
        local_B_pong_21_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_pong_22_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_pong_22_address0 = grp_load_fu_4813_local_B_22_address0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_pong_22_address0 = grp_compute_fu_4550_local_B_22_address0.read();
        } else {
            local_B_pong_22_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        local_B_pong_22_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_B_pong_22_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_pong_22_ce0 = grp_load_fu_4813_local_B_22_ce0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_pong_22_ce0 = grp_compute_fu_4550_local_B_22_ce0.read();
        } else {
            local_B_pong_22_ce0 = ap_const_logic_0;
        }
    } else {
        local_B_pong_22_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_pong_22_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
         esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0))) {
        local_B_pong_22_we0 = grp_load_fu_4813_local_B_22_we0.read();
    } else {
        local_B_pong_22_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_pong_23_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_pong_23_address0 = grp_load_fu_4813_local_B_23_address0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_pong_23_address0 = grp_compute_fu_4550_local_B_23_address0.read();
        } else {
            local_B_pong_23_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        local_B_pong_23_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_B_pong_23_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_pong_23_ce0 = grp_load_fu_4813_local_B_23_ce0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_pong_23_ce0 = grp_compute_fu_4550_local_B_23_ce0.read();
        } else {
            local_B_pong_23_ce0 = ap_const_logic_0;
        }
    } else {
        local_B_pong_23_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_pong_23_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
         esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0))) {
        local_B_pong_23_we0 = grp_load_fu_4813_local_B_23_we0.read();
    } else {
        local_B_pong_23_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_pong_24_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_pong_24_address0 = grp_load_fu_4813_local_B_24_address0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_pong_24_address0 = grp_compute_fu_4550_local_B_24_address0.read();
        } else {
            local_B_pong_24_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        local_B_pong_24_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_B_pong_24_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_pong_24_ce0 = grp_load_fu_4813_local_B_24_ce0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_pong_24_ce0 = grp_compute_fu_4550_local_B_24_ce0.read();
        } else {
            local_B_pong_24_ce0 = ap_const_logic_0;
        }
    } else {
        local_B_pong_24_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_pong_24_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
         esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0))) {
        local_B_pong_24_we0 = grp_load_fu_4813_local_B_24_we0.read();
    } else {
        local_B_pong_24_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_pong_25_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_pong_25_address0 = grp_load_fu_4813_local_B_25_address0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_pong_25_address0 = grp_compute_fu_4550_local_B_25_address0.read();
        } else {
            local_B_pong_25_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        local_B_pong_25_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_B_pong_25_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_pong_25_ce0 = grp_load_fu_4813_local_B_25_ce0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_pong_25_ce0 = grp_compute_fu_4550_local_B_25_ce0.read();
        } else {
            local_B_pong_25_ce0 = ap_const_logic_0;
        }
    } else {
        local_B_pong_25_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_pong_25_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
         esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0))) {
        local_B_pong_25_we0 = grp_load_fu_4813_local_B_25_we0.read();
    } else {
        local_B_pong_25_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_pong_26_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_pong_26_address0 = grp_load_fu_4813_local_B_26_address0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_pong_26_address0 = grp_compute_fu_4550_local_B_26_address0.read();
        } else {
            local_B_pong_26_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        local_B_pong_26_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_B_pong_26_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_pong_26_ce0 = grp_load_fu_4813_local_B_26_ce0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_pong_26_ce0 = grp_compute_fu_4550_local_B_26_ce0.read();
        } else {
            local_B_pong_26_ce0 = ap_const_logic_0;
        }
    } else {
        local_B_pong_26_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_pong_26_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
         esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0))) {
        local_B_pong_26_we0 = grp_load_fu_4813_local_B_26_we0.read();
    } else {
        local_B_pong_26_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_pong_27_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_pong_27_address0 = grp_load_fu_4813_local_B_27_address0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_pong_27_address0 = grp_compute_fu_4550_local_B_27_address0.read();
        } else {
            local_B_pong_27_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        local_B_pong_27_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_B_pong_27_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_pong_27_ce0 = grp_load_fu_4813_local_B_27_ce0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_pong_27_ce0 = grp_compute_fu_4550_local_B_27_ce0.read();
        } else {
            local_B_pong_27_ce0 = ap_const_logic_0;
        }
    } else {
        local_B_pong_27_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_pong_27_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
         esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0))) {
        local_B_pong_27_we0 = grp_load_fu_4813_local_B_27_we0.read();
    } else {
        local_B_pong_27_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_pong_28_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_pong_28_address0 = grp_load_fu_4813_local_B_28_address0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_pong_28_address0 = grp_compute_fu_4550_local_B_28_address0.read();
        } else {
            local_B_pong_28_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        local_B_pong_28_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_B_pong_28_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_pong_28_ce0 = grp_load_fu_4813_local_B_28_ce0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_pong_28_ce0 = grp_compute_fu_4550_local_B_28_ce0.read();
        } else {
            local_B_pong_28_ce0 = ap_const_logic_0;
        }
    } else {
        local_B_pong_28_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_pong_28_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
         esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0))) {
        local_B_pong_28_we0 = grp_load_fu_4813_local_B_28_we0.read();
    } else {
        local_B_pong_28_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_pong_29_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_pong_29_address0 = grp_load_fu_4813_local_B_29_address0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_pong_29_address0 = grp_compute_fu_4550_local_B_29_address0.read();
        } else {
            local_B_pong_29_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        local_B_pong_29_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_B_pong_29_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_pong_29_ce0 = grp_load_fu_4813_local_B_29_ce0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_pong_29_ce0 = grp_compute_fu_4550_local_B_29_ce0.read();
        } else {
            local_B_pong_29_ce0 = ap_const_logic_0;
        }
    } else {
        local_B_pong_29_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_pong_29_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
         esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0))) {
        local_B_pong_29_we0 = grp_load_fu_4813_local_B_29_we0.read();
    } else {
        local_B_pong_29_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_pong_2_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_pong_2_address0 = grp_load_fu_4813_local_B_2_address0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_pong_2_address0 = grp_compute_fu_4550_local_B_2_address0.read();
        } else {
            local_B_pong_2_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        local_B_pong_2_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_B_pong_2_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_pong_2_ce0 = grp_load_fu_4813_local_B_2_ce0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_pong_2_ce0 = grp_compute_fu_4550_local_B_2_ce0.read();
        } else {
            local_B_pong_2_ce0 = ap_const_logic_0;
        }
    } else {
        local_B_pong_2_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_pong_2_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
         esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0))) {
        local_B_pong_2_we0 = grp_load_fu_4813_local_B_2_we0.read();
    } else {
        local_B_pong_2_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_pong_30_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_pong_30_address0 = grp_load_fu_4813_local_B_30_address0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_pong_30_address0 = grp_compute_fu_4550_local_B_30_address0.read();
        } else {
            local_B_pong_30_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        local_B_pong_30_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_B_pong_30_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_pong_30_ce0 = grp_load_fu_4813_local_B_30_ce0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_pong_30_ce0 = grp_compute_fu_4550_local_B_30_ce0.read();
        } else {
            local_B_pong_30_ce0 = ap_const_logic_0;
        }
    } else {
        local_B_pong_30_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_pong_30_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
         esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0))) {
        local_B_pong_30_we0 = grp_load_fu_4813_local_B_30_we0.read();
    } else {
        local_B_pong_30_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_pong_31_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_pong_31_address0 = grp_load_fu_4813_local_B_31_address0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_pong_31_address0 = grp_compute_fu_4550_local_B_31_address0.read();
        } else {
            local_B_pong_31_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        local_B_pong_31_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_B_pong_31_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_pong_31_ce0 = grp_load_fu_4813_local_B_31_ce0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_pong_31_ce0 = grp_compute_fu_4550_local_B_31_ce0.read();
        } else {
            local_B_pong_31_ce0 = ap_const_logic_0;
        }
    } else {
        local_B_pong_31_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_pong_31_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
         esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0))) {
        local_B_pong_31_we0 = grp_load_fu_4813_local_B_31_we0.read();
    } else {
        local_B_pong_31_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_pong_32_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_pong_32_address0 = grp_load_fu_4813_local_B_32_address0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_pong_32_address0 = grp_compute_fu_4550_local_B_32_address0.read();
        } else {
            local_B_pong_32_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        local_B_pong_32_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_B_pong_32_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_pong_32_ce0 = grp_load_fu_4813_local_B_32_ce0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_pong_32_ce0 = grp_compute_fu_4550_local_B_32_ce0.read();
        } else {
            local_B_pong_32_ce0 = ap_const_logic_0;
        }
    } else {
        local_B_pong_32_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_pong_32_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
         esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0))) {
        local_B_pong_32_we0 = grp_load_fu_4813_local_B_32_we0.read();
    } else {
        local_B_pong_32_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_pong_33_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_pong_33_address0 = grp_load_fu_4813_local_B_33_address0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_pong_33_address0 = grp_compute_fu_4550_local_B_33_address0.read();
        } else {
            local_B_pong_33_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        local_B_pong_33_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_B_pong_33_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_pong_33_ce0 = grp_load_fu_4813_local_B_33_ce0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_pong_33_ce0 = grp_compute_fu_4550_local_B_33_ce0.read();
        } else {
            local_B_pong_33_ce0 = ap_const_logic_0;
        }
    } else {
        local_B_pong_33_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_pong_33_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
         esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0))) {
        local_B_pong_33_we0 = grp_load_fu_4813_local_B_33_we0.read();
    } else {
        local_B_pong_33_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_pong_34_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_pong_34_address0 = grp_load_fu_4813_local_B_34_address0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_pong_34_address0 = grp_compute_fu_4550_local_B_34_address0.read();
        } else {
            local_B_pong_34_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        local_B_pong_34_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_B_pong_34_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_pong_34_ce0 = grp_load_fu_4813_local_B_34_ce0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_pong_34_ce0 = grp_compute_fu_4550_local_B_34_ce0.read();
        } else {
            local_B_pong_34_ce0 = ap_const_logic_0;
        }
    } else {
        local_B_pong_34_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_pong_34_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
         esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0))) {
        local_B_pong_34_we0 = grp_load_fu_4813_local_B_34_we0.read();
    } else {
        local_B_pong_34_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_pong_35_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_pong_35_address0 = grp_load_fu_4813_local_B_35_address0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_pong_35_address0 = grp_compute_fu_4550_local_B_35_address0.read();
        } else {
            local_B_pong_35_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        local_B_pong_35_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_B_pong_35_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_pong_35_ce0 = grp_load_fu_4813_local_B_35_ce0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_pong_35_ce0 = grp_compute_fu_4550_local_B_35_ce0.read();
        } else {
            local_B_pong_35_ce0 = ap_const_logic_0;
        }
    } else {
        local_B_pong_35_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_pong_35_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
         esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0))) {
        local_B_pong_35_we0 = grp_load_fu_4813_local_B_35_we0.read();
    } else {
        local_B_pong_35_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_pong_36_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_pong_36_address0 = grp_load_fu_4813_local_B_36_address0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_pong_36_address0 = grp_compute_fu_4550_local_B_36_address0.read();
        } else {
            local_B_pong_36_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        local_B_pong_36_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_B_pong_36_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_pong_36_ce0 = grp_load_fu_4813_local_B_36_ce0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_pong_36_ce0 = grp_compute_fu_4550_local_B_36_ce0.read();
        } else {
            local_B_pong_36_ce0 = ap_const_logic_0;
        }
    } else {
        local_B_pong_36_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_pong_36_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
         esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0))) {
        local_B_pong_36_we0 = grp_load_fu_4813_local_B_36_we0.read();
    } else {
        local_B_pong_36_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_pong_37_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_pong_37_address0 = grp_load_fu_4813_local_B_37_address0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_pong_37_address0 = grp_compute_fu_4550_local_B_37_address0.read();
        } else {
            local_B_pong_37_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        local_B_pong_37_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_B_pong_37_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_pong_37_ce0 = grp_load_fu_4813_local_B_37_ce0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_pong_37_ce0 = grp_compute_fu_4550_local_B_37_ce0.read();
        } else {
            local_B_pong_37_ce0 = ap_const_logic_0;
        }
    } else {
        local_B_pong_37_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_pong_37_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
         esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0))) {
        local_B_pong_37_we0 = grp_load_fu_4813_local_B_37_we0.read();
    } else {
        local_B_pong_37_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_pong_38_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_pong_38_address0 = grp_load_fu_4813_local_B_38_address0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_pong_38_address0 = grp_compute_fu_4550_local_B_38_address0.read();
        } else {
            local_B_pong_38_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        local_B_pong_38_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_B_pong_38_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_pong_38_ce0 = grp_load_fu_4813_local_B_38_ce0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_pong_38_ce0 = grp_compute_fu_4550_local_B_38_ce0.read();
        } else {
            local_B_pong_38_ce0 = ap_const_logic_0;
        }
    } else {
        local_B_pong_38_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_pong_38_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
         esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0))) {
        local_B_pong_38_we0 = grp_load_fu_4813_local_B_38_we0.read();
    } else {
        local_B_pong_38_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_pong_39_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_pong_39_address0 = grp_load_fu_4813_local_B_39_address0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_pong_39_address0 = grp_compute_fu_4550_local_B_39_address0.read();
        } else {
            local_B_pong_39_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        local_B_pong_39_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_B_pong_39_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_pong_39_ce0 = grp_load_fu_4813_local_B_39_ce0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_pong_39_ce0 = grp_compute_fu_4550_local_B_39_ce0.read();
        } else {
            local_B_pong_39_ce0 = ap_const_logic_0;
        }
    } else {
        local_B_pong_39_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_pong_39_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
         esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0))) {
        local_B_pong_39_we0 = grp_load_fu_4813_local_B_39_we0.read();
    } else {
        local_B_pong_39_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_pong_3_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_pong_3_address0 = grp_load_fu_4813_local_B_3_address0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_pong_3_address0 = grp_compute_fu_4550_local_B_3_address0.read();
        } else {
            local_B_pong_3_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        local_B_pong_3_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_B_pong_3_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_pong_3_ce0 = grp_load_fu_4813_local_B_3_ce0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_pong_3_ce0 = grp_compute_fu_4550_local_B_3_ce0.read();
        } else {
            local_B_pong_3_ce0 = ap_const_logic_0;
        }
    } else {
        local_B_pong_3_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_pong_3_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
         esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0))) {
        local_B_pong_3_we0 = grp_load_fu_4813_local_B_3_we0.read();
    } else {
        local_B_pong_3_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_pong_40_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_pong_40_address0 = grp_load_fu_4813_local_B_40_address0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_pong_40_address0 = grp_compute_fu_4550_local_B_40_address0.read();
        } else {
            local_B_pong_40_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        local_B_pong_40_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_B_pong_40_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_pong_40_ce0 = grp_load_fu_4813_local_B_40_ce0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_pong_40_ce0 = grp_compute_fu_4550_local_B_40_ce0.read();
        } else {
            local_B_pong_40_ce0 = ap_const_logic_0;
        }
    } else {
        local_B_pong_40_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_pong_40_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
         esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0))) {
        local_B_pong_40_we0 = grp_load_fu_4813_local_B_40_we0.read();
    } else {
        local_B_pong_40_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_pong_41_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_pong_41_address0 = grp_load_fu_4813_local_B_41_address0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_pong_41_address0 = grp_compute_fu_4550_local_B_41_address0.read();
        } else {
            local_B_pong_41_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        local_B_pong_41_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_B_pong_41_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_pong_41_ce0 = grp_load_fu_4813_local_B_41_ce0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_pong_41_ce0 = grp_compute_fu_4550_local_B_41_ce0.read();
        } else {
            local_B_pong_41_ce0 = ap_const_logic_0;
        }
    } else {
        local_B_pong_41_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_pong_41_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
         esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0))) {
        local_B_pong_41_we0 = grp_load_fu_4813_local_B_41_we0.read();
    } else {
        local_B_pong_41_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_pong_42_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_pong_42_address0 = grp_load_fu_4813_local_B_42_address0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_pong_42_address0 = grp_compute_fu_4550_local_B_42_address0.read();
        } else {
            local_B_pong_42_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        local_B_pong_42_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_B_pong_42_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_pong_42_ce0 = grp_load_fu_4813_local_B_42_ce0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_pong_42_ce0 = grp_compute_fu_4550_local_B_42_ce0.read();
        } else {
            local_B_pong_42_ce0 = ap_const_logic_0;
        }
    } else {
        local_B_pong_42_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_pong_42_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
         esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0))) {
        local_B_pong_42_we0 = grp_load_fu_4813_local_B_42_we0.read();
    } else {
        local_B_pong_42_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_pong_43_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_pong_43_address0 = grp_load_fu_4813_local_B_43_address0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_pong_43_address0 = grp_compute_fu_4550_local_B_43_address0.read();
        } else {
            local_B_pong_43_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        local_B_pong_43_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_B_pong_43_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_pong_43_ce0 = grp_load_fu_4813_local_B_43_ce0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_pong_43_ce0 = grp_compute_fu_4550_local_B_43_ce0.read();
        } else {
            local_B_pong_43_ce0 = ap_const_logic_0;
        }
    } else {
        local_B_pong_43_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_pong_43_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
         esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0))) {
        local_B_pong_43_we0 = grp_load_fu_4813_local_B_43_we0.read();
    } else {
        local_B_pong_43_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_pong_44_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_pong_44_address0 = grp_load_fu_4813_local_B_44_address0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_pong_44_address0 = grp_compute_fu_4550_local_B_44_address0.read();
        } else {
            local_B_pong_44_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        local_B_pong_44_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_B_pong_44_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_pong_44_ce0 = grp_load_fu_4813_local_B_44_ce0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_pong_44_ce0 = grp_compute_fu_4550_local_B_44_ce0.read();
        } else {
            local_B_pong_44_ce0 = ap_const_logic_0;
        }
    } else {
        local_B_pong_44_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_pong_44_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
         esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0))) {
        local_B_pong_44_we0 = grp_load_fu_4813_local_B_44_we0.read();
    } else {
        local_B_pong_44_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_pong_45_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_pong_45_address0 = grp_load_fu_4813_local_B_45_address0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_pong_45_address0 = grp_compute_fu_4550_local_B_45_address0.read();
        } else {
            local_B_pong_45_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        local_B_pong_45_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_B_pong_45_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_pong_45_ce0 = grp_load_fu_4813_local_B_45_ce0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_pong_45_ce0 = grp_compute_fu_4550_local_B_45_ce0.read();
        } else {
            local_B_pong_45_ce0 = ap_const_logic_0;
        }
    } else {
        local_B_pong_45_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_pong_45_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
         esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0))) {
        local_B_pong_45_we0 = grp_load_fu_4813_local_B_45_we0.read();
    } else {
        local_B_pong_45_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_pong_46_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_pong_46_address0 = grp_load_fu_4813_local_B_46_address0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_pong_46_address0 = grp_compute_fu_4550_local_B_46_address0.read();
        } else {
            local_B_pong_46_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        local_B_pong_46_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_B_pong_46_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_pong_46_ce0 = grp_load_fu_4813_local_B_46_ce0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_pong_46_ce0 = grp_compute_fu_4550_local_B_46_ce0.read();
        } else {
            local_B_pong_46_ce0 = ap_const_logic_0;
        }
    } else {
        local_B_pong_46_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_pong_46_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
         esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0))) {
        local_B_pong_46_we0 = grp_load_fu_4813_local_B_46_we0.read();
    } else {
        local_B_pong_46_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_pong_47_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_pong_47_address0 = grp_load_fu_4813_local_B_47_address0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_pong_47_address0 = grp_compute_fu_4550_local_B_47_address0.read();
        } else {
            local_B_pong_47_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        local_B_pong_47_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_B_pong_47_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_pong_47_ce0 = grp_load_fu_4813_local_B_47_ce0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_pong_47_ce0 = grp_compute_fu_4550_local_B_47_ce0.read();
        } else {
            local_B_pong_47_ce0 = ap_const_logic_0;
        }
    } else {
        local_B_pong_47_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_pong_47_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
         esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0))) {
        local_B_pong_47_we0 = grp_load_fu_4813_local_B_47_we0.read();
    } else {
        local_B_pong_47_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_pong_48_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_pong_48_address0 = grp_load_fu_4813_local_B_48_address0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_pong_48_address0 = grp_compute_fu_4550_local_B_48_address0.read();
        } else {
            local_B_pong_48_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        local_B_pong_48_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_B_pong_48_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_pong_48_ce0 = grp_load_fu_4813_local_B_48_ce0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_pong_48_ce0 = grp_compute_fu_4550_local_B_48_ce0.read();
        } else {
            local_B_pong_48_ce0 = ap_const_logic_0;
        }
    } else {
        local_B_pong_48_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_pong_48_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
         esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0))) {
        local_B_pong_48_we0 = grp_load_fu_4813_local_B_48_we0.read();
    } else {
        local_B_pong_48_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_pong_49_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_pong_49_address0 = grp_load_fu_4813_local_B_49_address0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_pong_49_address0 = grp_compute_fu_4550_local_B_49_address0.read();
        } else {
            local_B_pong_49_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        local_B_pong_49_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_B_pong_49_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_pong_49_ce0 = grp_load_fu_4813_local_B_49_ce0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_pong_49_ce0 = grp_compute_fu_4550_local_B_49_ce0.read();
        } else {
            local_B_pong_49_ce0 = ap_const_logic_0;
        }
    } else {
        local_B_pong_49_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_pong_49_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
         esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0))) {
        local_B_pong_49_we0 = grp_load_fu_4813_local_B_49_we0.read();
    } else {
        local_B_pong_49_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_pong_4_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_pong_4_address0 = grp_load_fu_4813_local_B_4_address0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_pong_4_address0 = grp_compute_fu_4550_local_B_4_address0.read();
        } else {
            local_B_pong_4_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        local_B_pong_4_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_B_pong_4_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_pong_4_ce0 = grp_load_fu_4813_local_B_4_ce0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_pong_4_ce0 = grp_compute_fu_4550_local_B_4_ce0.read();
        } else {
            local_B_pong_4_ce0 = ap_const_logic_0;
        }
    } else {
        local_B_pong_4_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_pong_4_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
         esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0))) {
        local_B_pong_4_we0 = grp_load_fu_4813_local_B_4_we0.read();
    } else {
        local_B_pong_4_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_pong_50_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_pong_50_address0 = grp_load_fu_4813_local_B_50_address0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_pong_50_address0 = grp_compute_fu_4550_local_B_50_address0.read();
        } else {
            local_B_pong_50_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        local_B_pong_50_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_B_pong_50_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_pong_50_ce0 = grp_load_fu_4813_local_B_50_ce0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_pong_50_ce0 = grp_compute_fu_4550_local_B_50_ce0.read();
        } else {
            local_B_pong_50_ce0 = ap_const_logic_0;
        }
    } else {
        local_B_pong_50_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_pong_50_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
         esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0))) {
        local_B_pong_50_we0 = grp_load_fu_4813_local_B_50_we0.read();
    } else {
        local_B_pong_50_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_pong_51_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_pong_51_address0 = grp_load_fu_4813_local_B_51_address0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_pong_51_address0 = grp_compute_fu_4550_local_B_51_address0.read();
        } else {
            local_B_pong_51_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        local_B_pong_51_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_B_pong_51_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_pong_51_ce0 = grp_load_fu_4813_local_B_51_ce0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_pong_51_ce0 = grp_compute_fu_4550_local_B_51_ce0.read();
        } else {
            local_B_pong_51_ce0 = ap_const_logic_0;
        }
    } else {
        local_B_pong_51_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_pong_51_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
         esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0))) {
        local_B_pong_51_we0 = grp_load_fu_4813_local_B_51_we0.read();
    } else {
        local_B_pong_51_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_pong_52_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_pong_52_address0 = grp_load_fu_4813_local_B_52_address0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_pong_52_address0 = grp_compute_fu_4550_local_B_52_address0.read();
        } else {
            local_B_pong_52_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        local_B_pong_52_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_B_pong_52_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_pong_52_ce0 = grp_load_fu_4813_local_B_52_ce0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_pong_52_ce0 = grp_compute_fu_4550_local_B_52_ce0.read();
        } else {
            local_B_pong_52_ce0 = ap_const_logic_0;
        }
    } else {
        local_B_pong_52_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_pong_52_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
         esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0))) {
        local_B_pong_52_we0 = grp_load_fu_4813_local_B_52_we0.read();
    } else {
        local_B_pong_52_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_pong_53_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_pong_53_address0 = grp_load_fu_4813_local_B_53_address0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_pong_53_address0 = grp_compute_fu_4550_local_B_53_address0.read();
        } else {
            local_B_pong_53_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        local_B_pong_53_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_B_pong_53_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_pong_53_ce0 = grp_load_fu_4813_local_B_53_ce0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_pong_53_ce0 = grp_compute_fu_4550_local_B_53_ce0.read();
        } else {
            local_B_pong_53_ce0 = ap_const_logic_0;
        }
    } else {
        local_B_pong_53_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_pong_53_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
         esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0))) {
        local_B_pong_53_we0 = grp_load_fu_4813_local_B_53_we0.read();
    } else {
        local_B_pong_53_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_pong_54_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_pong_54_address0 = grp_load_fu_4813_local_B_54_address0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_pong_54_address0 = grp_compute_fu_4550_local_B_54_address0.read();
        } else {
            local_B_pong_54_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        local_B_pong_54_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_B_pong_54_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_pong_54_ce0 = grp_load_fu_4813_local_B_54_ce0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_pong_54_ce0 = grp_compute_fu_4550_local_B_54_ce0.read();
        } else {
            local_B_pong_54_ce0 = ap_const_logic_0;
        }
    } else {
        local_B_pong_54_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_pong_54_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
         esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0))) {
        local_B_pong_54_we0 = grp_load_fu_4813_local_B_54_we0.read();
    } else {
        local_B_pong_54_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_pong_55_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_pong_55_address0 = grp_load_fu_4813_local_B_55_address0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_pong_55_address0 = grp_compute_fu_4550_local_B_55_address0.read();
        } else {
            local_B_pong_55_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        local_B_pong_55_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_B_pong_55_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_pong_55_ce0 = grp_load_fu_4813_local_B_55_ce0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_pong_55_ce0 = grp_compute_fu_4550_local_B_55_ce0.read();
        } else {
            local_B_pong_55_ce0 = ap_const_logic_0;
        }
    } else {
        local_B_pong_55_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_pong_55_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
         esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0))) {
        local_B_pong_55_we0 = grp_load_fu_4813_local_B_55_we0.read();
    } else {
        local_B_pong_55_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_pong_56_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_pong_56_address0 = grp_load_fu_4813_local_B_56_address0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_pong_56_address0 = grp_compute_fu_4550_local_B_56_address0.read();
        } else {
            local_B_pong_56_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        local_B_pong_56_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_B_pong_56_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_pong_56_ce0 = grp_load_fu_4813_local_B_56_ce0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_pong_56_ce0 = grp_compute_fu_4550_local_B_56_ce0.read();
        } else {
            local_B_pong_56_ce0 = ap_const_logic_0;
        }
    } else {
        local_B_pong_56_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_pong_56_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
         esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0))) {
        local_B_pong_56_we0 = grp_load_fu_4813_local_B_56_we0.read();
    } else {
        local_B_pong_56_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_pong_57_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_pong_57_address0 = grp_load_fu_4813_local_B_57_address0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_pong_57_address0 = grp_compute_fu_4550_local_B_57_address0.read();
        } else {
            local_B_pong_57_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        local_B_pong_57_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_B_pong_57_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_pong_57_ce0 = grp_load_fu_4813_local_B_57_ce0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_pong_57_ce0 = grp_compute_fu_4550_local_B_57_ce0.read();
        } else {
            local_B_pong_57_ce0 = ap_const_logic_0;
        }
    } else {
        local_B_pong_57_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_pong_57_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
         esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0))) {
        local_B_pong_57_we0 = grp_load_fu_4813_local_B_57_we0.read();
    } else {
        local_B_pong_57_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_pong_58_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_pong_58_address0 = grp_load_fu_4813_local_B_58_address0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_pong_58_address0 = grp_compute_fu_4550_local_B_58_address0.read();
        } else {
            local_B_pong_58_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        local_B_pong_58_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_B_pong_58_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_pong_58_ce0 = grp_load_fu_4813_local_B_58_ce0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_pong_58_ce0 = grp_compute_fu_4550_local_B_58_ce0.read();
        } else {
            local_B_pong_58_ce0 = ap_const_logic_0;
        }
    } else {
        local_B_pong_58_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_pong_58_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
         esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0))) {
        local_B_pong_58_we0 = grp_load_fu_4813_local_B_58_we0.read();
    } else {
        local_B_pong_58_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_pong_59_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_pong_59_address0 = grp_load_fu_4813_local_B_59_address0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_pong_59_address0 = grp_compute_fu_4550_local_B_59_address0.read();
        } else {
            local_B_pong_59_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        local_B_pong_59_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_B_pong_59_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_pong_59_ce0 = grp_load_fu_4813_local_B_59_ce0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_pong_59_ce0 = grp_compute_fu_4550_local_B_59_ce0.read();
        } else {
            local_B_pong_59_ce0 = ap_const_logic_0;
        }
    } else {
        local_B_pong_59_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_pong_59_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
         esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0))) {
        local_B_pong_59_we0 = grp_load_fu_4813_local_B_59_we0.read();
    } else {
        local_B_pong_59_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_pong_5_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_pong_5_address0 = grp_load_fu_4813_local_B_5_address0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_pong_5_address0 = grp_compute_fu_4550_local_B_5_address0.read();
        } else {
            local_B_pong_5_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        local_B_pong_5_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_B_pong_5_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_pong_5_ce0 = grp_load_fu_4813_local_B_5_ce0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_pong_5_ce0 = grp_compute_fu_4550_local_B_5_ce0.read();
        } else {
            local_B_pong_5_ce0 = ap_const_logic_0;
        }
    } else {
        local_B_pong_5_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_pong_5_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
         esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0))) {
        local_B_pong_5_we0 = grp_load_fu_4813_local_B_5_we0.read();
    } else {
        local_B_pong_5_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_pong_60_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_pong_60_address0 = grp_load_fu_4813_local_B_60_address0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_pong_60_address0 = grp_compute_fu_4550_local_B_60_address0.read();
        } else {
            local_B_pong_60_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        local_B_pong_60_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_B_pong_60_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_pong_60_ce0 = grp_load_fu_4813_local_B_60_ce0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_pong_60_ce0 = grp_compute_fu_4550_local_B_60_ce0.read();
        } else {
            local_B_pong_60_ce0 = ap_const_logic_0;
        }
    } else {
        local_B_pong_60_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_pong_60_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
         esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0))) {
        local_B_pong_60_we0 = grp_load_fu_4813_local_B_60_we0.read();
    } else {
        local_B_pong_60_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_pong_61_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_pong_61_address0 = grp_load_fu_4813_local_B_61_address0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_pong_61_address0 = grp_compute_fu_4550_local_B_61_address0.read();
        } else {
            local_B_pong_61_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        local_B_pong_61_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_B_pong_61_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_pong_61_ce0 = grp_load_fu_4813_local_B_61_ce0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_pong_61_ce0 = grp_compute_fu_4550_local_B_61_ce0.read();
        } else {
            local_B_pong_61_ce0 = ap_const_logic_0;
        }
    } else {
        local_B_pong_61_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_pong_61_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
         esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0))) {
        local_B_pong_61_we0 = grp_load_fu_4813_local_B_61_we0.read();
    } else {
        local_B_pong_61_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_pong_62_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_pong_62_address0 = grp_load_fu_4813_local_B_62_address0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_pong_62_address0 = grp_compute_fu_4550_local_B_62_address0.read();
        } else {
            local_B_pong_62_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        local_B_pong_62_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_B_pong_62_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_pong_62_ce0 = grp_load_fu_4813_local_B_62_ce0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_pong_62_ce0 = grp_compute_fu_4550_local_B_62_ce0.read();
        } else {
            local_B_pong_62_ce0 = ap_const_logic_0;
        }
    } else {
        local_B_pong_62_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_pong_62_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
         esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0))) {
        local_B_pong_62_we0 = grp_load_fu_4813_local_B_62_we0.read();
    } else {
        local_B_pong_62_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_pong_63_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_pong_63_address0 = grp_load_fu_4813_local_B_63_address0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_pong_63_address0 = grp_compute_fu_4550_local_B_63_address0.read();
        } else {
            local_B_pong_63_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        local_B_pong_63_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_B_pong_63_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_pong_63_ce0 = grp_load_fu_4813_local_B_63_ce0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_pong_63_ce0 = grp_compute_fu_4550_local_B_63_ce0.read();
        } else {
            local_B_pong_63_ce0 = ap_const_logic_0;
        }
    } else {
        local_B_pong_63_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_pong_63_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
         esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0))) {
        local_B_pong_63_we0 = grp_load_fu_4813_local_B_63_we0.read();
    } else {
        local_B_pong_63_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_pong_64_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_pong_64_address0 = grp_load_fu_4813_local_B_64_address0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_pong_64_address0 = grp_compute_fu_4550_local_B_64_address0.read();
        } else {
            local_B_pong_64_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        local_B_pong_64_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_B_pong_64_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_pong_64_ce0 = grp_load_fu_4813_local_B_64_ce0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_pong_64_ce0 = grp_compute_fu_4550_local_B_64_ce0.read();
        } else {
            local_B_pong_64_ce0 = ap_const_logic_0;
        }
    } else {
        local_B_pong_64_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_pong_64_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
         esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0))) {
        local_B_pong_64_we0 = grp_load_fu_4813_local_B_64_we0.read();
    } else {
        local_B_pong_64_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_pong_65_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_pong_65_address0 = grp_load_fu_4813_local_B_65_address0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_pong_65_address0 = grp_compute_fu_4550_local_B_65_address0.read();
        } else {
            local_B_pong_65_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        local_B_pong_65_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_B_pong_65_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_pong_65_ce0 = grp_load_fu_4813_local_B_65_ce0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_pong_65_ce0 = grp_compute_fu_4550_local_B_65_ce0.read();
        } else {
            local_B_pong_65_ce0 = ap_const_logic_0;
        }
    } else {
        local_B_pong_65_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_pong_65_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
         esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0))) {
        local_B_pong_65_we0 = grp_load_fu_4813_local_B_65_we0.read();
    } else {
        local_B_pong_65_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_pong_66_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_pong_66_address0 = grp_load_fu_4813_local_B_66_address0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_pong_66_address0 = grp_compute_fu_4550_local_B_66_address0.read();
        } else {
            local_B_pong_66_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        local_B_pong_66_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_B_pong_66_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_pong_66_ce0 = grp_load_fu_4813_local_B_66_ce0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_pong_66_ce0 = grp_compute_fu_4550_local_B_66_ce0.read();
        } else {
            local_B_pong_66_ce0 = ap_const_logic_0;
        }
    } else {
        local_B_pong_66_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_pong_66_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
         esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0))) {
        local_B_pong_66_we0 = grp_load_fu_4813_local_B_66_we0.read();
    } else {
        local_B_pong_66_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_pong_67_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_pong_67_address0 = grp_load_fu_4813_local_B_67_address0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_pong_67_address0 = grp_compute_fu_4550_local_B_67_address0.read();
        } else {
            local_B_pong_67_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        local_B_pong_67_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_B_pong_67_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_pong_67_ce0 = grp_load_fu_4813_local_B_67_ce0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_pong_67_ce0 = grp_compute_fu_4550_local_B_67_ce0.read();
        } else {
            local_B_pong_67_ce0 = ap_const_logic_0;
        }
    } else {
        local_B_pong_67_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_pong_67_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
         esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0))) {
        local_B_pong_67_we0 = grp_load_fu_4813_local_B_67_we0.read();
    } else {
        local_B_pong_67_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_pong_68_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_pong_68_address0 = grp_load_fu_4813_local_B_68_address0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_pong_68_address0 = grp_compute_fu_4550_local_B_68_address0.read();
        } else {
            local_B_pong_68_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        local_B_pong_68_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_B_pong_68_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_pong_68_ce0 = grp_load_fu_4813_local_B_68_ce0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_pong_68_ce0 = grp_compute_fu_4550_local_B_68_ce0.read();
        } else {
            local_B_pong_68_ce0 = ap_const_logic_0;
        }
    } else {
        local_B_pong_68_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_pong_68_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
         esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0))) {
        local_B_pong_68_we0 = grp_load_fu_4813_local_B_68_we0.read();
    } else {
        local_B_pong_68_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_pong_69_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_pong_69_address0 = grp_load_fu_4813_local_B_69_address0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_pong_69_address0 = grp_compute_fu_4550_local_B_69_address0.read();
        } else {
            local_B_pong_69_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        local_B_pong_69_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_B_pong_69_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_pong_69_ce0 = grp_load_fu_4813_local_B_69_ce0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_pong_69_ce0 = grp_compute_fu_4550_local_B_69_ce0.read();
        } else {
            local_B_pong_69_ce0 = ap_const_logic_0;
        }
    } else {
        local_B_pong_69_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_pong_69_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
         esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0))) {
        local_B_pong_69_we0 = grp_load_fu_4813_local_B_69_we0.read();
    } else {
        local_B_pong_69_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_pong_6_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_pong_6_address0 = grp_load_fu_4813_local_B_6_address0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_pong_6_address0 = grp_compute_fu_4550_local_B_6_address0.read();
        } else {
            local_B_pong_6_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        local_B_pong_6_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_B_pong_6_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_pong_6_ce0 = grp_load_fu_4813_local_B_6_ce0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_pong_6_ce0 = grp_compute_fu_4550_local_B_6_ce0.read();
        } else {
            local_B_pong_6_ce0 = ap_const_logic_0;
        }
    } else {
        local_B_pong_6_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_pong_6_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
         esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0))) {
        local_B_pong_6_we0 = grp_load_fu_4813_local_B_6_we0.read();
    } else {
        local_B_pong_6_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_pong_70_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_pong_70_address0 = grp_load_fu_4813_local_B_70_address0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_pong_70_address0 = grp_compute_fu_4550_local_B_70_address0.read();
        } else {
            local_B_pong_70_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        local_B_pong_70_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_B_pong_70_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_pong_70_ce0 = grp_load_fu_4813_local_B_70_ce0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_pong_70_ce0 = grp_compute_fu_4550_local_B_70_ce0.read();
        } else {
            local_B_pong_70_ce0 = ap_const_logic_0;
        }
    } else {
        local_B_pong_70_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_pong_70_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
         esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0))) {
        local_B_pong_70_we0 = grp_load_fu_4813_local_B_70_we0.read();
    } else {
        local_B_pong_70_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_pong_71_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_pong_71_address0 = grp_load_fu_4813_local_B_71_address0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_pong_71_address0 = grp_compute_fu_4550_local_B_71_address0.read();
        } else {
            local_B_pong_71_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        local_B_pong_71_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_B_pong_71_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_pong_71_ce0 = grp_load_fu_4813_local_B_71_ce0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_pong_71_ce0 = grp_compute_fu_4550_local_B_71_ce0.read();
        } else {
            local_B_pong_71_ce0 = ap_const_logic_0;
        }
    } else {
        local_B_pong_71_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_pong_71_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
         esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0))) {
        local_B_pong_71_we0 = grp_load_fu_4813_local_B_71_we0.read();
    } else {
        local_B_pong_71_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_pong_72_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_pong_72_address0 = grp_load_fu_4813_local_B_72_address0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_pong_72_address0 = grp_compute_fu_4550_local_B_72_address0.read();
        } else {
            local_B_pong_72_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        local_B_pong_72_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_B_pong_72_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_pong_72_ce0 = grp_load_fu_4813_local_B_72_ce0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_pong_72_ce0 = grp_compute_fu_4550_local_B_72_ce0.read();
        } else {
            local_B_pong_72_ce0 = ap_const_logic_0;
        }
    } else {
        local_B_pong_72_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_pong_72_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
         esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0))) {
        local_B_pong_72_we0 = grp_load_fu_4813_local_B_72_we0.read();
    } else {
        local_B_pong_72_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_pong_73_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_pong_73_address0 = grp_load_fu_4813_local_B_73_address0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_pong_73_address0 = grp_compute_fu_4550_local_B_73_address0.read();
        } else {
            local_B_pong_73_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        local_B_pong_73_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_B_pong_73_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_pong_73_ce0 = grp_load_fu_4813_local_B_73_ce0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_pong_73_ce0 = grp_compute_fu_4550_local_B_73_ce0.read();
        } else {
            local_B_pong_73_ce0 = ap_const_logic_0;
        }
    } else {
        local_B_pong_73_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_pong_73_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
         esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0))) {
        local_B_pong_73_we0 = grp_load_fu_4813_local_B_73_we0.read();
    } else {
        local_B_pong_73_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_pong_74_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_pong_74_address0 = grp_load_fu_4813_local_B_74_address0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_pong_74_address0 = grp_compute_fu_4550_local_B_74_address0.read();
        } else {
            local_B_pong_74_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        local_B_pong_74_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_B_pong_74_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_pong_74_ce0 = grp_load_fu_4813_local_B_74_ce0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_pong_74_ce0 = grp_compute_fu_4550_local_B_74_ce0.read();
        } else {
            local_B_pong_74_ce0 = ap_const_logic_0;
        }
    } else {
        local_B_pong_74_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_pong_74_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
         esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0))) {
        local_B_pong_74_we0 = grp_load_fu_4813_local_B_74_we0.read();
    } else {
        local_B_pong_74_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_pong_75_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_pong_75_address0 = grp_load_fu_4813_local_B_75_address0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_pong_75_address0 = grp_compute_fu_4550_local_B_75_address0.read();
        } else {
            local_B_pong_75_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        local_B_pong_75_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_B_pong_75_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_pong_75_ce0 = grp_load_fu_4813_local_B_75_ce0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_pong_75_ce0 = grp_compute_fu_4550_local_B_75_ce0.read();
        } else {
            local_B_pong_75_ce0 = ap_const_logic_0;
        }
    } else {
        local_B_pong_75_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_pong_75_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
         esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0))) {
        local_B_pong_75_we0 = grp_load_fu_4813_local_B_75_we0.read();
    } else {
        local_B_pong_75_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_pong_76_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_pong_76_address0 = grp_load_fu_4813_local_B_76_address0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_pong_76_address0 = grp_compute_fu_4550_local_B_76_address0.read();
        } else {
            local_B_pong_76_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        local_B_pong_76_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_B_pong_76_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_pong_76_ce0 = grp_load_fu_4813_local_B_76_ce0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_pong_76_ce0 = grp_compute_fu_4550_local_B_76_ce0.read();
        } else {
            local_B_pong_76_ce0 = ap_const_logic_0;
        }
    } else {
        local_B_pong_76_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_pong_76_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
         esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0))) {
        local_B_pong_76_we0 = grp_load_fu_4813_local_B_76_we0.read();
    } else {
        local_B_pong_76_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_pong_77_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_pong_77_address0 = grp_load_fu_4813_local_B_77_address0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_pong_77_address0 = grp_compute_fu_4550_local_B_77_address0.read();
        } else {
            local_B_pong_77_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        local_B_pong_77_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_B_pong_77_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_pong_77_ce0 = grp_load_fu_4813_local_B_77_ce0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_pong_77_ce0 = grp_compute_fu_4550_local_B_77_ce0.read();
        } else {
            local_B_pong_77_ce0 = ap_const_logic_0;
        }
    } else {
        local_B_pong_77_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_pong_77_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
         esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0))) {
        local_B_pong_77_we0 = grp_load_fu_4813_local_B_77_we0.read();
    } else {
        local_B_pong_77_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_pong_78_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_pong_78_address0 = grp_load_fu_4813_local_B_78_address0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_pong_78_address0 = grp_compute_fu_4550_local_B_78_address0.read();
        } else {
            local_B_pong_78_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        local_B_pong_78_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_B_pong_78_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_pong_78_ce0 = grp_load_fu_4813_local_B_78_ce0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_pong_78_ce0 = grp_compute_fu_4550_local_B_78_ce0.read();
        } else {
            local_B_pong_78_ce0 = ap_const_logic_0;
        }
    } else {
        local_B_pong_78_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_pong_78_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
         esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0))) {
        local_B_pong_78_we0 = grp_load_fu_4813_local_B_78_we0.read();
    } else {
        local_B_pong_78_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_pong_79_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_pong_79_address0 = grp_load_fu_4813_local_B_79_address0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_pong_79_address0 = grp_compute_fu_4550_local_B_79_address0.read();
        } else {
            local_B_pong_79_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        local_B_pong_79_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_B_pong_79_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_pong_79_ce0 = grp_load_fu_4813_local_B_79_ce0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_pong_79_ce0 = grp_compute_fu_4550_local_B_79_ce0.read();
        } else {
            local_B_pong_79_ce0 = ap_const_logic_0;
        }
    } else {
        local_B_pong_79_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_pong_79_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
         esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0))) {
        local_B_pong_79_we0 = grp_load_fu_4813_local_B_79_we0.read();
    } else {
        local_B_pong_79_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_pong_7_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_pong_7_address0 = grp_load_fu_4813_local_B_7_address0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_pong_7_address0 = grp_compute_fu_4550_local_B_7_address0.read();
        } else {
            local_B_pong_7_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        local_B_pong_7_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_B_pong_7_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_pong_7_ce0 = grp_load_fu_4813_local_B_7_ce0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_pong_7_ce0 = grp_compute_fu_4550_local_B_7_ce0.read();
        } else {
            local_B_pong_7_ce0 = ap_const_logic_0;
        }
    } else {
        local_B_pong_7_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_pong_7_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
         esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0))) {
        local_B_pong_7_we0 = grp_load_fu_4813_local_B_7_we0.read();
    } else {
        local_B_pong_7_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_pong_80_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_pong_80_address0 = grp_load_fu_4813_local_B_80_address0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_pong_80_address0 = grp_compute_fu_4550_local_B_80_address0.read();
        } else {
            local_B_pong_80_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        local_B_pong_80_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_B_pong_80_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_pong_80_ce0 = grp_load_fu_4813_local_B_80_ce0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_pong_80_ce0 = grp_compute_fu_4550_local_B_80_ce0.read();
        } else {
            local_B_pong_80_ce0 = ap_const_logic_0;
        }
    } else {
        local_B_pong_80_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_pong_80_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
         esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0))) {
        local_B_pong_80_we0 = grp_load_fu_4813_local_B_80_we0.read();
    } else {
        local_B_pong_80_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_pong_81_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_pong_81_address0 = grp_load_fu_4813_local_B_81_address0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_pong_81_address0 = grp_compute_fu_4550_local_B_81_address0.read();
        } else {
            local_B_pong_81_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        local_B_pong_81_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_B_pong_81_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_pong_81_ce0 = grp_load_fu_4813_local_B_81_ce0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_pong_81_ce0 = grp_compute_fu_4550_local_B_81_ce0.read();
        } else {
            local_B_pong_81_ce0 = ap_const_logic_0;
        }
    } else {
        local_B_pong_81_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_pong_81_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
         esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0))) {
        local_B_pong_81_we0 = grp_load_fu_4813_local_B_81_we0.read();
    } else {
        local_B_pong_81_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_pong_82_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_pong_82_address0 = grp_load_fu_4813_local_B_82_address0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_pong_82_address0 = grp_compute_fu_4550_local_B_82_address0.read();
        } else {
            local_B_pong_82_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        local_B_pong_82_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_B_pong_82_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_pong_82_ce0 = grp_load_fu_4813_local_B_82_ce0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_pong_82_ce0 = grp_compute_fu_4550_local_B_82_ce0.read();
        } else {
            local_B_pong_82_ce0 = ap_const_logic_0;
        }
    } else {
        local_B_pong_82_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_pong_82_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
         esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0))) {
        local_B_pong_82_we0 = grp_load_fu_4813_local_B_82_we0.read();
    } else {
        local_B_pong_82_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_pong_83_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_pong_83_address0 = grp_load_fu_4813_local_B_83_address0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_pong_83_address0 = grp_compute_fu_4550_local_B_83_address0.read();
        } else {
            local_B_pong_83_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        local_B_pong_83_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_B_pong_83_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_pong_83_ce0 = grp_load_fu_4813_local_B_83_ce0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_pong_83_ce0 = grp_compute_fu_4550_local_B_83_ce0.read();
        } else {
            local_B_pong_83_ce0 = ap_const_logic_0;
        }
    } else {
        local_B_pong_83_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_pong_83_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
         esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0))) {
        local_B_pong_83_we0 = grp_load_fu_4813_local_B_83_we0.read();
    } else {
        local_B_pong_83_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_pong_84_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_pong_84_address0 = grp_load_fu_4813_local_B_84_address0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_pong_84_address0 = grp_compute_fu_4550_local_B_84_address0.read();
        } else {
            local_B_pong_84_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        local_B_pong_84_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_B_pong_84_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_pong_84_ce0 = grp_load_fu_4813_local_B_84_ce0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_pong_84_ce0 = grp_compute_fu_4550_local_B_84_ce0.read();
        } else {
            local_B_pong_84_ce0 = ap_const_logic_0;
        }
    } else {
        local_B_pong_84_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_pong_84_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
         esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0))) {
        local_B_pong_84_we0 = grp_load_fu_4813_local_B_84_we0.read();
    } else {
        local_B_pong_84_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_pong_85_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_pong_85_address0 = grp_load_fu_4813_local_B_85_address0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_pong_85_address0 = grp_compute_fu_4550_local_B_85_address0.read();
        } else {
            local_B_pong_85_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        local_B_pong_85_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_B_pong_85_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_pong_85_ce0 = grp_load_fu_4813_local_B_85_ce0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_pong_85_ce0 = grp_compute_fu_4550_local_B_85_ce0.read();
        } else {
            local_B_pong_85_ce0 = ap_const_logic_0;
        }
    } else {
        local_B_pong_85_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_pong_85_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
         esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0))) {
        local_B_pong_85_we0 = grp_load_fu_4813_local_B_85_we0.read();
    } else {
        local_B_pong_85_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_pong_86_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_pong_86_address0 = grp_load_fu_4813_local_B_86_address0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_pong_86_address0 = grp_compute_fu_4550_local_B_86_address0.read();
        } else {
            local_B_pong_86_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        local_B_pong_86_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_B_pong_86_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_pong_86_ce0 = grp_load_fu_4813_local_B_86_ce0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_pong_86_ce0 = grp_compute_fu_4550_local_B_86_ce0.read();
        } else {
            local_B_pong_86_ce0 = ap_const_logic_0;
        }
    } else {
        local_B_pong_86_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_pong_86_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
         esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0))) {
        local_B_pong_86_we0 = grp_load_fu_4813_local_B_86_we0.read();
    } else {
        local_B_pong_86_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_pong_87_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_pong_87_address0 = grp_load_fu_4813_local_B_87_address0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_pong_87_address0 = grp_compute_fu_4550_local_B_87_address0.read();
        } else {
            local_B_pong_87_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        local_B_pong_87_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_B_pong_87_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_pong_87_ce0 = grp_load_fu_4813_local_B_87_ce0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_pong_87_ce0 = grp_compute_fu_4550_local_B_87_ce0.read();
        } else {
            local_B_pong_87_ce0 = ap_const_logic_0;
        }
    } else {
        local_B_pong_87_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_pong_87_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
         esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0))) {
        local_B_pong_87_we0 = grp_load_fu_4813_local_B_87_we0.read();
    } else {
        local_B_pong_87_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_pong_88_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_pong_88_address0 = grp_load_fu_4813_local_B_88_address0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_pong_88_address0 = grp_compute_fu_4550_local_B_88_address0.read();
        } else {
            local_B_pong_88_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        local_B_pong_88_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_B_pong_88_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_pong_88_ce0 = grp_load_fu_4813_local_B_88_ce0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_pong_88_ce0 = grp_compute_fu_4550_local_B_88_ce0.read();
        } else {
            local_B_pong_88_ce0 = ap_const_logic_0;
        }
    } else {
        local_B_pong_88_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_pong_88_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
         esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0))) {
        local_B_pong_88_we0 = grp_load_fu_4813_local_B_88_we0.read();
    } else {
        local_B_pong_88_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_pong_89_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_pong_89_address0 = grp_load_fu_4813_local_B_89_address0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_pong_89_address0 = grp_compute_fu_4550_local_B_89_address0.read();
        } else {
            local_B_pong_89_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        local_B_pong_89_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_B_pong_89_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_pong_89_ce0 = grp_load_fu_4813_local_B_89_ce0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_pong_89_ce0 = grp_compute_fu_4550_local_B_89_ce0.read();
        } else {
            local_B_pong_89_ce0 = ap_const_logic_0;
        }
    } else {
        local_B_pong_89_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_pong_89_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
         esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0))) {
        local_B_pong_89_we0 = grp_load_fu_4813_local_B_89_we0.read();
    } else {
        local_B_pong_89_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_pong_8_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_pong_8_address0 = grp_load_fu_4813_local_B_8_address0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_pong_8_address0 = grp_compute_fu_4550_local_B_8_address0.read();
        } else {
            local_B_pong_8_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        local_B_pong_8_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_B_pong_8_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_pong_8_ce0 = grp_load_fu_4813_local_B_8_ce0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_pong_8_ce0 = grp_compute_fu_4550_local_B_8_ce0.read();
        } else {
            local_B_pong_8_ce0 = ap_const_logic_0;
        }
    } else {
        local_B_pong_8_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_pong_8_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
         esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0))) {
        local_B_pong_8_we0 = grp_load_fu_4813_local_B_8_we0.read();
    } else {
        local_B_pong_8_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_pong_90_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_pong_90_address0 = grp_load_fu_4813_local_B_90_address0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_pong_90_address0 = grp_compute_fu_4550_local_B_90_address0.read();
        } else {
            local_B_pong_90_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        local_B_pong_90_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_B_pong_90_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_pong_90_ce0 = grp_load_fu_4813_local_B_90_ce0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_pong_90_ce0 = grp_compute_fu_4550_local_B_90_ce0.read();
        } else {
            local_B_pong_90_ce0 = ap_const_logic_0;
        }
    } else {
        local_B_pong_90_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_pong_90_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
         esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0))) {
        local_B_pong_90_we0 = grp_load_fu_4813_local_B_90_we0.read();
    } else {
        local_B_pong_90_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_pong_91_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_pong_91_address0 = grp_load_fu_4813_local_B_91_address0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_pong_91_address0 = grp_compute_fu_4550_local_B_91_address0.read();
        } else {
            local_B_pong_91_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        local_B_pong_91_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_B_pong_91_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_pong_91_ce0 = grp_load_fu_4813_local_B_91_ce0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_pong_91_ce0 = grp_compute_fu_4550_local_B_91_ce0.read();
        } else {
            local_B_pong_91_ce0 = ap_const_logic_0;
        }
    } else {
        local_B_pong_91_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_pong_91_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
         esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0))) {
        local_B_pong_91_we0 = grp_load_fu_4813_local_B_91_we0.read();
    } else {
        local_B_pong_91_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_pong_92_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_pong_92_address0 = grp_load_fu_4813_local_B_92_address0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_pong_92_address0 = grp_compute_fu_4550_local_B_92_address0.read();
        } else {
            local_B_pong_92_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        local_B_pong_92_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_B_pong_92_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_pong_92_ce0 = grp_load_fu_4813_local_B_92_ce0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_pong_92_ce0 = grp_compute_fu_4550_local_B_92_ce0.read();
        } else {
            local_B_pong_92_ce0 = ap_const_logic_0;
        }
    } else {
        local_B_pong_92_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_pong_92_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
         esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0))) {
        local_B_pong_92_we0 = grp_load_fu_4813_local_B_92_we0.read();
    } else {
        local_B_pong_92_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_pong_93_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_pong_93_address0 = grp_load_fu_4813_local_B_93_address0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_pong_93_address0 = grp_compute_fu_4550_local_B_93_address0.read();
        } else {
            local_B_pong_93_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        local_B_pong_93_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_B_pong_93_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_pong_93_ce0 = grp_load_fu_4813_local_B_93_ce0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_pong_93_ce0 = grp_compute_fu_4550_local_B_93_ce0.read();
        } else {
            local_B_pong_93_ce0 = ap_const_logic_0;
        }
    } else {
        local_B_pong_93_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_pong_93_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
         esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0))) {
        local_B_pong_93_we0 = grp_load_fu_4813_local_B_93_we0.read();
    } else {
        local_B_pong_93_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_pong_94_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_pong_94_address0 = grp_load_fu_4813_local_B_94_address0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_pong_94_address0 = grp_compute_fu_4550_local_B_94_address0.read();
        } else {
            local_B_pong_94_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        local_B_pong_94_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_B_pong_94_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_pong_94_ce0 = grp_load_fu_4813_local_B_94_ce0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_pong_94_ce0 = grp_compute_fu_4550_local_B_94_ce0.read();
        } else {
            local_B_pong_94_ce0 = ap_const_logic_0;
        }
    } else {
        local_B_pong_94_ce0 = ap_const_logic_0;
    }
}

}

