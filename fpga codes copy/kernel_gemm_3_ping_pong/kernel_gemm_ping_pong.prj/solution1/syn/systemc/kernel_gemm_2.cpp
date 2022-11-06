#include "kernel_gemm.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void kernel_gemm::thread_ap_clk_no_reset_() {
    if ( ap_rst_n_inv.read() == ap_const_logic_1) {
        ap_CS_fsm = ap_ST_fsm_state1;
    } else {
        ap_CS_fsm = ap_NS_fsm.read();
    }
    if ( ap_rst_n_inv.read() == ap_const_logic_1) {
        ap_enable_reg_pp0_iter0 = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0) && 
             esl_seteq<1,1,1>(ap_const_logic_1, ap_condition_pp0_exit_iter0_state3.read()))) {
            ap_enable_reg_pp0_iter0 = ap_const_logic_0;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                    esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln61_fu_5007_p2.read()))) {
            ap_enable_reg_pp0_iter0 = ap_const_logic_1;
        }
    }
    if ( ap_rst_n_inv.read() == ap_const_logic_1) {
        ap_enable_reg_pp0_iter1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0)) {
            if (esl_seteq<1,1,1>(ap_const_logic_1, ap_condition_pp0_exit_iter0_state3.read())) {
                ap_enable_reg_pp0_iter1 = (ap_condition_pp0_exit_iter0_state3.read() ^ ap_const_logic_1);
            } else if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
                ap_enable_reg_pp0_iter1 = ap_enable_reg_pp0_iter0.read();
            }
        }
    }
    if ( ap_rst_n_inv.read() == ap_const_logic_1) {
        ap_enable_reg_pp0_iter10 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0)) {
            ap_enable_reg_pp0_iter10 = ap_enable_reg_pp0_iter9.read();
        }
    }
    if ( ap_rst_n_inv.read() == ap_const_logic_1) {
        ap_enable_reg_pp0_iter11 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0)) {
            ap_enable_reg_pp0_iter11 = ap_enable_reg_pp0_iter10.read();
        }
    }
    if ( ap_rst_n_inv.read() == ap_const_logic_1) {
        ap_enable_reg_pp0_iter12 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0)) {
            ap_enable_reg_pp0_iter12 = ap_enable_reg_pp0_iter11.read();
        }
    }
    if ( ap_rst_n_inv.read() == ap_const_logic_1) {
        ap_enable_reg_pp0_iter13 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0)) {
            ap_enable_reg_pp0_iter13 = ap_enable_reg_pp0_iter12.read();
        }
    }
    if ( ap_rst_n_inv.read() == ap_const_logic_1) {
        ap_enable_reg_pp0_iter14 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0)) {
            ap_enable_reg_pp0_iter14 = ap_enable_reg_pp0_iter13.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                    esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln61_fu_5007_p2.read()))) {
            ap_enable_reg_pp0_iter14 = ap_const_logic_0;
        }
    }
    if ( ap_rst_n_inv.read() == ap_const_logic_1) {
        ap_enable_reg_pp0_iter2 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0)) {
            ap_enable_reg_pp0_iter2 = ap_enable_reg_pp0_iter1.read();
        }
    }
    if ( ap_rst_n_inv.read() == ap_const_logic_1) {
        ap_enable_reg_pp0_iter3 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0)) {
            ap_enable_reg_pp0_iter3 = ap_enable_reg_pp0_iter2.read();
        }
    }
    if ( ap_rst_n_inv.read() == ap_const_logic_1) {
        ap_enable_reg_pp0_iter4 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0)) {
            ap_enable_reg_pp0_iter4 = ap_enable_reg_pp0_iter3.read();
        }
    }
    if ( ap_rst_n_inv.read() == ap_const_logic_1) {
        ap_enable_reg_pp0_iter5 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0)) {
            ap_enable_reg_pp0_iter5 = ap_enable_reg_pp0_iter4.read();
        }
    }
    if ( ap_rst_n_inv.read() == ap_const_logic_1) {
        ap_enable_reg_pp0_iter6 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0)) {
            ap_enable_reg_pp0_iter6 = ap_enable_reg_pp0_iter5.read();
        }
    }
    if ( ap_rst_n_inv.read() == ap_const_logic_1) {
        ap_enable_reg_pp0_iter7 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0)) {
            ap_enable_reg_pp0_iter7 = ap_enable_reg_pp0_iter6.read();
        }
    }
    if ( ap_rst_n_inv.read() == ap_const_logic_1) {
        ap_enable_reg_pp0_iter8 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0)) {
            ap_enable_reg_pp0_iter8 = ap_enable_reg_pp0_iter7.read();
        }
    }
    if ( ap_rst_n_inv.read() == ap_const_logic_1) {
        ap_enable_reg_pp0_iter9 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0)) {
            ap_enable_reg_pp0_iter9 = ap_enable_reg_pp0_iter8.read();
        }
    }
    if ( ap_rst_n_inv.read() == ap_const_logic_1) {
        ap_enable_reg_pp1_iter0 = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
             esl_seteq<1,1,1>(ap_block_pp1_stage0_subdone.read(), ap_const_boolean_0) && 
             esl_seteq<1,1,1>(ap_const_logic_1, ap_condition_pp1_exit_iter0_state21.read()))) {
            ap_enable_reg_pp1_iter0 = ap_const_logic_0;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read()) && 
                    esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln73_fu_5317_p2.read()))) {
            ap_enable_reg_pp1_iter0 = ap_const_logic_1;
        }
    }
    if ( ap_rst_n_inv.read() == ap_const_logic_1) {
        ap_enable_reg_pp1_iter1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_block_pp1_stage0_subdone.read(), ap_const_boolean_0)) {
            if (esl_seteq<1,1,1>(ap_const_logic_1, ap_condition_pp1_exit_iter0_state21.read())) {
                ap_enable_reg_pp1_iter1 = (ap_condition_pp1_exit_iter0_state21.read() ^ ap_const_logic_1);
            } else if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
                ap_enable_reg_pp1_iter1 = ap_enable_reg_pp1_iter0.read();
            }
        }
    }
    if ( ap_rst_n_inv.read() == ap_const_logic_1) {
        ap_enable_reg_pp1_iter2 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_block_pp1_stage0_subdone.read(), ap_const_boolean_0)) {
            ap_enable_reg_pp1_iter2 = ap_enable_reg_pp1_iter1.read();
        }
    }
    if ( ap_rst_n_inv.read() == ap_const_logic_1) {
        ap_enable_reg_pp1_iter3 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_block_pp1_stage0_subdone.read(), ap_const_boolean_0)) {
            ap_enable_reg_pp1_iter3 = ap_enable_reg_pp1_iter2.read();
        }
    }
    if ( ap_rst_n_inv.read() == ap_const_logic_1) {
        ap_enable_reg_pp1_iter4 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_block_pp1_stage0_subdone.read(), ap_const_boolean_0)) {
            ap_enable_reg_pp1_iter4 = ap_enable_reg_pp1_iter3.read();
        }
    }
    if ( ap_rst_n_inv.read() == ap_const_logic_1) {
        ap_enable_reg_pp1_iter5 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_block_pp1_stage0_subdone.read(), ap_const_boolean_0)) {
            ap_enable_reg_pp1_iter5 = ap_enable_reg_pp1_iter4.read();
        }
    }
    if ( ap_rst_n_inv.read() == ap_const_logic_1) {
        ap_enable_reg_pp1_iter6 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_block_pp1_stage0_subdone.read(), ap_const_boolean_0)) {
            ap_enable_reg_pp1_iter6 = ap_enable_reg_pp1_iter5.read();
        }
    }
    if ( ap_rst_n_inv.read() == ap_const_logic_1) {
        ap_enable_reg_pp1_iter7 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_block_pp1_stage0_subdone.read(), ap_const_boolean_0)) {
            ap_enable_reg_pp1_iter7 = ap_enable_reg_pp1_iter6.read();
        }
    }
    if ( ap_rst_n_inv.read() == ap_const_logic_1) {
        ap_enable_reg_pp1_iter8 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_block_pp1_stage0_subdone.read(), ap_const_boolean_0)) {
            ap_enable_reg_pp1_iter8 = ap_enable_reg_pp1_iter7.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read()) && 
                    esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln73_fu_5317_p2.read()))) {
            ap_enable_reg_pp1_iter8 = ap_const_logic_0;
        }
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
         esl_seteq<1,1,1>(ap_block_state20_on_subcall_done.read(), ap_const_boolean_0))) {
        counter_1_fu_402 = select_ln85_fu_5371_p3.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
        counter_1_fu_402 = ap_const_lv32_0;
    }
    if ( ap_rst_n_inv.read() == ap_const_logic_1) {
        grp_compute_fu_4550_ap_start_reg = ap_const_logic_0;
    } else {
        if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read()) && 
              esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln73_fu_5317_p2.read()) && 
              esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln75_fu_5329_p2.read())) || 
             (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read()) && 
              esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln73_fu_5317_p2.read()) && 
              esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln75_fu_5329_p2.read())))) {
            grp_compute_fu_4550_ap_start_reg = ap_const_logic_1;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, grp_compute_fu_4550_ap_ready.read())) {
            grp_compute_fu_4550_ap_start_reg = ap_const_logic_0;
        }
    }
    if ( ap_rst_n_inv.read() == ap_const_logic_1) {
        grp_load_fu_4813_ap_start_reg = ap_const_logic_0;
    } else {
        if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read()) && 
              esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln73_fu_5317_p2.read()) && 
              esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln75_fu_5329_p2.read())) || 
             (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read()) && 
              esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln73_fu_5317_p2.read()) && 
              esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln75_fu_5329_p2.read())))) {
            grp_load_fu_4813_ap_start_reg = ap_const_logic_1;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, grp_load_fu_4813_ap_ready.read())) {
            grp_load_fu_4813_ap_start_reg = ap_const_logic_0;
        }
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state30.read())) {
        i_0_reg_4451 = select_ln61_reg_5979.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
        i_0_reg_4451 = ap_const_lv12_0;
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln73_fu_5317_p2.read()))) {
        ii1_0_reg_4528 = ap_const_lv8_0;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(icmp_ln88_reg_6209.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        ii1_0_reg_4528 = select_ln91_1_reg_6219.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln65_reg_5995.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()))) {
        ii_0_reg_4484 = select_ln68_1_reg_6004.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln61_fu_5007_p2.read()))) {
        ii_0_reg_4484 = ap_const_lv8_0;
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        index_0_reg_4506 = ap_const_lv5_0;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                esl_seteq<1,1,1>(ap_block_state20_on_subcall_done.read(), ap_const_boolean_0))) {
        index_0_reg_4506 = index_reg_6180.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln73_fu_5317_p2.read()))) {
        indvar_flatten269_reg_4517 = ap_const_lv15_0;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(icmp_ln88_reg_6209.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        indvar_flatten269_reg_4517 = add_ln88_reg_6213.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state30.read())) {
        indvar_flatten277_reg_4440 = add_ln61_reg_5968.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
        indvar_flatten277_reg_4440 = ap_const_lv9_0;
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln65_fu_5070_p2.read()))) {
        indvar_flatten_reg_4473 = add_ln65_fu_5076_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln61_fu_5007_p2.read()))) {
        indvar_flatten_reg_4473 = ap_const_lv15_0;
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state30.read())) {
        j_0_reg_4462 = j_fu_5926_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
        j_0_reg_4462 = ap_const_lv12_0;
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln73_fu_5317_p2.read()))) {
        jj2_0_reg_4539 = ap_const_lv8_0;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln88_fu_5401_p2.read()))) {
        jj2_0_reg_4539 = jj_1_fu_5493_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln65_fu_5070_p2.read()))) {
        jj_0_reg_4495 = jj_fu_5162_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln61_fu_5007_p2.read()))) {
        jj_0_reg_4495 = ap_const_lv8_0;
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
        A3_reg_5953 = A.read().range(31, 2);
        B5_reg_5948 = B.read().range(31, 2);
        p_cast_reg_5958 = p_cast_fu_4998_p1.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        add_ln61_reg_5968 = add_ln61_fu_5013_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln65_fu_5070_p2.read()))) {
        add_ln68_2_reg_6010 = add_ln68_2_fu_5135_p2.read();
        empty_14_reg_6015 = empty_14_fu_5152_p2.read();
        trunc_ln68_reg_6019 = trunc_ln68_fu_5158_p1.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln65_reg_5995.read()))) {
        add_ln68_3_reg_6028 = add_ln68_3_fu_5171_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        add_ln88_reg_6213 = add_ln88_fu_5407_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln88_fu_5401_p2.read()))) {
        add_ln91_2_reg_6225 = add_ln91_2_fu_5466_p2.read();
        empty_18_reg_6235 = empty_18_fu_5487_p2.read();
        trunc_ln91_reg_6230 = trunc_ln91_fu_5471_p1.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(icmp_ln88_reg_6209.read(), ap_const_lv1_0))) {
        add_ln91_3_reg_6884 = add_ln91_3_fu_5633_p2.read();
        empty_21_reg_6889 = empty_21_fu_5649_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        empty_14_reg_6015_pp0_iter1_reg = empty_14_reg_6015.read();
        icmp_ln65_reg_5995 = icmp_ln65_fu_5070_p2.read();
        select_ln68_1_reg_6004_pp0_iter1_reg = select_ln68_1_reg_6004.read();
        trunc_ln68_reg_6019_pp0_iter1_reg = trunc_ln68_reg_6019.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0))) {
        empty_18_reg_6235_pp1_iter1_reg = empty_18_reg_6235.read();
        icmp_ln88_reg_6209 = icmp_ln88_fu_5401_p2.read();
        icmp_ln88_reg_6209_pp1_iter1_reg = icmp_ln88_reg_6209.read();
        trunc_ln91_reg_6230_pp1_iter1_reg = trunc_ln91_reg_6230.read();
    }
    if (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0)) {
        empty_21_reg_6889_pp1_iter2_reg = empty_21_reg_6889.read();
        empty_21_reg_6889_pp1_iter3_reg = empty_21_reg_6889_pp1_iter2_reg.read();
        empty_21_reg_6889_pp1_iter4_reg = empty_21_reg_6889_pp1_iter3_reg.read();
        empty_21_reg_6889_pp1_iter5_reg = empty_21_reg_6889_pp1_iter4_reg.read();
        empty_21_reg_6889_pp1_iter6_reg = empty_21_reg_6889_pp1_iter5_reg.read();
        empty_21_reg_6889_pp1_iter7_reg = empty_21_reg_6889_pp1_iter6_reg.read();
        icmp_ln88_reg_6209_pp1_iter2_reg = icmp_ln88_reg_6209_pp1_iter1_reg.read();
    }
    if (esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) {
        gmem_addr_read_reg_6039 = gmem_RDATA.read();
        select_ln68_1_reg_6004_pp0_iter10_reg = select_ln68_1_reg_6004_pp0_iter9_reg.read();
        select_ln68_1_reg_6004_pp0_iter11_reg = select_ln68_1_reg_6004_pp0_iter10_reg.read();
        select_ln68_1_reg_6004_pp0_iter12_reg = select_ln68_1_reg_6004_pp0_iter11_reg.read();
        select_ln68_1_reg_6004_pp0_iter13_reg = select_ln68_1_reg_6004_pp0_iter12_reg.read();
        select_ln68_1_reg_6004_pp0_iter2_reg = select_ln68_1_reg_6004_pp0_iter1_reg.read();
        select_ln68_1_reg_6004_pp0_iter3_reg = select_ln68_1_reg_6004_pp0_iter2_reg.read();
        select_ln68_1_reg_6004_pp0_iter4_reg = select_ln68_1_reg_6004_pp0_iter3_reg.read();
        select_ln68_1_reg_6004_pp0_iter5_reg = select_ln68_1_reg_6004_pp0_iter4_reg.read();
        select_ln68_1_reg_6004_pp0_iter6_reg = select_ln68_1_reg_6004_pp0_iter5_reg.read();
        select_ln68_1_reg_6004_pp0_iter7_reg = select_ln68_1_reg_6004_pp0_iter6_reg.read();
        select_ln68_1_reg_6004_pp0_iter8_reg = select_ln68_1_reg_6004_pp0_iter7_reg.read();
        select_ln68_1_reg_6004_pp0_iter9_reg = select_ln68_1_reg_6004_pp0_iter8_reg.read();
        tmp_reg_6044 = grp_fu_4954_p2.read();
        trunc_ln68_reg_6019_pp0_iter10_reg = trunc_ln68_reg_6019_pp0_iter9_reg.read();
        trunc_ln68_reg_6019_pp0_iter11_reg = trunc_ln68_reg_6019_pp0_iter10_reg.read();
        trunc_ln68_reg_6019_pp0_iter12_reg = trunc_ln68_reg_6019_pp0_iter11_reg.read();
        trunc_ln68_reg_6019_pp0_iter13_reg = trunc_ln68_reg_6019_pp0_iter12_reg.read();
        trunc_ln68_reg_6019_pp0_iter2_reg = trunc_ln68_reg_6019_pp0_iter1_reg.read();
        trunc_ln68_reg_6019_pp0_iter3_reg = trunc_ln68_reg_6019_pp0_iter2_reg.read();
        trunc_ln68_reg_6019_pp0_iter4_reg = trunc_ln68_reg_6019_pp0_iter3_reg.read();
        trunc_ln68_reg_6019_pp0_iter5_reg = trunc_ln68_reg_6019_pp0_iter4_reg.read();
        trunc_ln68_reg_6019_pp0_iter6_reg = trunc_ln68_reg_6019_pp0_iter5_reg.read();
        trunc_ln68_reg_6019_pp0_iter7_reg = trunc_ln68_reg_6019_pp0_iter6_reg.read();
        trunc_ln68_reg_6019_pp0_iter8_reg = trunc_ln68_reg_6019_pp0_iter7_reg.read();
        trunc_ln68_reg_6019_pp0_iter9_reg = trunc_ln68_reg_6019_pp0_iter8_reg.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln73_fu_5317_p2.read()))) {
        icmp_ln75_reg_6185 = icmp_ln75_fu_5329_p2.read();
        shl_ln_reg_6189 = shl_ln_fu_5343_p3.read();
        xor_ln77_reg_6194 = xor_ln77_fu_5352_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln73_fu_5317_p2.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln75_fu_5329_p2.read()))) {
        icmp_ln78_reg_6204 = grp_fu_4961_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln73_fu_5317_p2.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln75_fu_5329_p2.read()))) {
        icmp_ln82_reg_6199 = grp_fu_4961_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read())) {
        index_reg_6180 = index_fu_5323_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln61_fu_5007_p2.read()))) {
        select_ln61_reg_5979 = select_ln61_fu_5041_p3.read();
        select_ln62_reg_5973 = select_ln62_fu_5033_p3.read();
        zext_ln62_reg_5989 = zext_ln62_fu_5049_p1.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln65_fu_5070_p2.read()))) {
        select_ln68_1_reg_6004 = select_ln68_1_fu_5111_p3.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln88_fu_5401_p2.read()))) {
        select_ln91_1_reg_6219 = select_ln91_1_fu_5433_p3.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln88_reg_6209_pp1_iter1_reg.read()))) {
        tmp_3_reg_6893 = tmp_3_fu_5655_p130.read();
    }
}

void kernel_gemm::thread_ap_NS_fsm() {
    switch (ap_CS_fsm.read().to_uint64()) {
        case 1 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
                ap_NS_fsm = ap_ST_fsm_state2;
            } else {
                ap_NS_fsm = ap_ST_fsm_state1;
            }
            break;
        case 2 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln61_fu_5007_p2.read()))) {
                ap_NS_fsm = ap_ST_fsm_state1;
            } else {
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            }
            break;
        case 4 : 
            if ((!(esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()) && esl_seteq<1,1,1>(ap_enable_reg_pp0_iter13.read(), ap_const_logic_0)) && !(esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln65_fu_5070_p2.read()) && esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_0)))) {
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            } else if (((esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()) && 
  esl_seteq<1,1,1>(ap_enable_reg_pp0_iter13.read(), ap_const_logic_0)) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
  esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0) && 
  esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln65_fu_5070_p2.read()) && 
  esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_0)))) {
                ap_NS_fsm = ap_ST_fsm_state18;
            } else {
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            }
            break;
        case 8 : 
            ap_NS_fsm = ap_ST_fsm_state19;
            break;
        case 16 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln73_fu_5317_p2.read()))) {
                ap_NS_fsm = ap_ST_fsm_pp1_stage0;
            } else {
                ap_NS_fsm = ap_ST_fsm_state20;
            }
            break;
        case 32 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && esl_seteq<1,1,1>(ap_block_state20_on_subcall_done.read(), ap_const_boolean_0))) {
                ap_NS_fsm = ap_ST_fsm_state19;
            } else {
                ap_NS_fsm = ap_ST_fsm_state20;
            }
            break;
        case 64 : 
            if ((!(esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter8.read()) && esl_seteq<1,1,1>(ap_block_pp1_stage0_subdone.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_enable_reg_pp1_iter7.read(), ap_const_logic_0)) && !(esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && esl_seteq<1,1,1>(ap_block_pp1_stage0_subdone.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln88_fu_5401_p2.read()) && esl_seteq<1,1,1>(ap_enable_reg_pp1_iter1.read(), ap_const_logic_0)))) {
                ap_NS_fsm = ap_ST_fsm_pp1_stage0;
            } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter8.read()) && 
  esl_seteq<1,1,1>(ap_block_pp1_stage0_subdone.read(), ap_const_boolean_0) && 
  esl_seteq<1,1,1>(ap_enable_reg_pp1_iter7.read(), ap_const_logic_0)) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
  esl_seteq<1,1,1>(ap_block_pp1_stage0_subdone.read(), ap_const_boolean_0) && 
  esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln88_fu_5401_p2.read()) && 
  esl_seteq<1,1,1>(ap_enable_reg_pp1_iter1.read(), ap_const_logic_0)))) {
                ap_NS_fsm = ap_ST_fsm_state30;
            } else {
                ap_NS_fsm = ap_ST_fsm_pp1_stage0;
            }
            break;
        case 128 : 
            ap_NS_fsm = ap_ST_fsm_state2;
            break;
        default : 
            ap_NS_fsm =  (sc_lv<8>) ("XXXXXXXX");
            break;
    }
}

}

