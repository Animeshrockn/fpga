#include "kernel_gemm.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void kernel_gemm::thread_local_B_pong_94_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
         esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0))) {
        local_B_pong_94_we0 = grp_load_fu_4813_local_B_94_we0.read();
    } else {
        local_B_pong_94_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_pong_95_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_pong_95_address0 = grp_load_fu_4813_local_B_95_address0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_pong_95_address0 = grp_compute_fu_4550_local_B_95_address0.read();
        } else {
            local_B_pong_95_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        local_B_pong_95_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_B_pong_95_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_pong_95_ce0 = grp_load_fu_4813_local_B_95_ce0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_pong_95_ce0 = grp_compute_fu_4550_local_B_95_ce0.read();
        } else {
            local_B_pong_95_ce0 = ap_const_logic_0;
        }
    } else {
        local_B_pong_95_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_pong_95_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
         esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0))) {
        local_B_pong_95_we0 = grp_load_fu_4813_local_B_95_we0.read();
    } else {
        local_B_pong_95_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_pong_96_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_pong_96_address0 = grp_load_fu_4813_local_B_96_address0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_pong_96_address0 = grp_compute_fu_4550_local_B_96_address0.read();
        } else {
            local_B_pong_96_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        local_B_pong_96_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_B_pong_96_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_pong_96_ce0 = grp_load_fu_4813_local_B_96_ce0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_pong_96_ce0 = grp_compute_fu_4550_local_B_96_ce0.read();
        } else {
            local_B_pong_96_ce0 = ap_const_logic_0;
        }
    } else {
        local_B_pong_96_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_pong_96_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
         esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0))) {
        local_B_pong_96_we0 = grp_load_fu_4813_local_B_96_we0.read();
    } else {
        local_B_pong_96_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_pong_97_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_pong_97_address0 = grp_load_fu_4813_local_B_97_address0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_pong_97_address0 = grp_compute_fu_4550_local_B_97_address0.read();
        } else {
            local_B_pong_97_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        local_B_pong_97_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_B_pong_97_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_pong_97_ce0 = grp_load_fu_4813_local_B_97_ce0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_pong_97_ce0 = grp_compute_fu_4550_local_B_97_ce0.read();
        } else {
            local_B_pong_97_ce0 = ap_const_logic_0;
        }
    } else {
        local_B_pong_97_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_pong_97_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
         esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0))) {
        local_B_pong_97_we0 = grp_load_fu_4813_local_B_97_we0.read();
    } else {
        local_B_pong_97_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_pong_98_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_pong_98_address0 = grp_load_fu_4813_local_B_98_address0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_pong_98_address0 = grp_compute_fu_4550_local_B_98_address0.read();
        } else {
            local_B_pong_98_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        local_B_pong_98_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_B_pong_98_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_pong_98_ce0 = grp_load_fu_4813_local_B_98_ce0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_pong_98_ce0 = grp_compute_fu_4550_local_B_98_ce0.read();
        } else {
            local_B_pong_98_ce0 = ap_const_logic_0;
        }
    } else {
        local_B_pong_98_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_pong_98_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
         esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0))) {
        local_B_pong_98_we0 = grp_load_fu_4813_local_B_98_we0.read();
    } else {
        local_B_pong_98_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_pong_99_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_pong_99_address0 = grp_load_fu_4813_local_B_99_address0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_pong_99_address0 = grp_compute_fu_4550_local_B_99_address0.read();
        } else {
            local_B_pong_99_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        local_B_pong_99_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_B_pong_99_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_pong_99_ce0 = grp_load_fu_4813_local_B_99_ce0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_pong_99_ce0 = grp_compute_fu_4550_local_B_99_ce0.read();
        } else {
            local_B_pong_99_ce0 = ap_const_logic_0;
        }
    } else {
        local_B_pong_99_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_pong_99_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
         esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0))) {
        local_B_pong_99_we0 = grp_load_fu_4813_local_B_99_we0.read();
    } else {
        local_B_pong_99_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_pong_9_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_pong_9_address0 = grp_load_fu_4813_local_B_9_address0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_pong_9_address0 = grp_compute_fu_4550_local_B_9_address0.read();
        } else {
            local_B_pong_9_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        local_B_pong_9_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_B_pong_9_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) {
            local_B_pong_9_ce0 = grp_load_fu_4813_local_B_9_ce0.read();
        } else if (esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)) {
            local_B_pong_9_ce0 = grp_compute_fu_4550_local_B_9_ce0.read();
        } else {
            local_B_pong_9_ce0 = ap_const_logic_0;
        }
    } else {
        local_B_pong_9_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_B_pong_9_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
         esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0))) {
        local_B_pong_9_we0 = grp_load_fu_4813_local_B_9_we0.read();
    } else {
        local_B_pong_9_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_0_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        local_C_0_address0 =  (sc_lv<7>) (zext_ln91_1_fu_5499_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()))) {
        local_C_0_address0 =  (sc_lv<7>) (zext_ln68_2_fu_5186_p1.read());
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_0_address0 = grp_compute_fu_4550_local_C_0_address0.read();
    } else {
        local_C_0_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_C_0_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read())))) {
        local_C_0_ce0 = ap_const_logic_1;
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_0_ce0 = grp_compute_fu_4550_local_C_0_ce0.read();
    } else {
        local_C_0_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_0_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_0_ce1 = grp_compute_fu_4550_local_C_0_ce1.read();
    } else {
        local_C_0_ce1 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_0_we0() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()) && 
         esl_seteq<1,7,7>(trunc_ln68_reg_6019_pp0_iter13_reg.read(), ap_const_lv7_0))) {
        local_C_0_we0 = ap_const_logic_1;
    } else {
        local_C_0_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_0_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_0_we1 = grp_compute_fu_4550_local_C_0_we1.read();
    } else {
        local_C_0_we1 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_100_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        local_C_100_address0 =  (sc_lv<7>) (zext_ln91_1_fu_5499_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()))) {
        local_C_100_address0 =  (sc_lv<7>) (zext_ln68_2_fu_5186_p1.read());
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_100_address0 = grp_compute_fu_4550_local_C_100_address0.read();
    } else {
        local_C_100_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_C_100_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read())))) {
        local_C_100_ce0 = ap_const_logic_1;
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_100_ce0 = grp_compute_fu_4550_local_C_100_ce0.read();
    } else {
        local_C_100_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_100_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_100_ce1 = grp_compute_fu_4550_local_C_100_ce1.read();
    } else {
        local_C_100_ce1 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_100_we0() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()) && 
         esl_seteq<1,7,7>(trunc_ln68_reg_6019_pp0_iter13_reg.read(), ap_const_lv7_64))) {
        local_C_100_we0 = ap_const_logic_1;
    } else {
        local_C_100_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_100_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_100_we1 = grp_compute_fu_4550_local_C_100_we1.read();
    } else {
        local_C_100_we1 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_101_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        local_C_101_address0 =  (sc_lv<7>) (zext_ln91_1_fu_5499_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()))) {
        local_C_101_address0 =  (sc_lv<7>) (zext_ln68_2_fu_5186_p1.read());
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_101_address0 = grp_compute_fu_4550_local_C_101_address0.read();
    } else {
        local_C_101_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_C_101_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read())))) {
        local_C_101_ce0 = ap_const_logic_1;
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_101_ce0 = grp_compute_fu_4550_local_C_101_ce0.read();
    } else {
        local_C_101_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_101_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_101_ce1 = grp_compute_fu_4550_local_C_101_ce1.read();
    } else {
        local_C_101_ce1 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_101_we0() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()) && 
         esl_seteq<1,7,7>(trunc_ln68_reg_6019_pp0_iter13_reg.read(), ap_const_lv7_65))) {
        local_C_101_we0 = ap_const_logic_1;
    } else {
        local_C_101_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_101_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_101_we1 = grp_compute_fu_4550_local_C_101_we1.read();
    } else {
        local_C_101_we1 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_102_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        local_C_102_address0 =  (sc_lv<7>) (zext_ln91_1_fu_5499_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()))) {
        local_C_102_address0 =  (sc_lv<7>) (zext_ln68_2_fu_5186_p1.read());
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_102_address0 = grp_compute_fu_4550_local_C_102_address0.read();
    } else {
        local_C_102_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_C_102_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read())))) {
        local_C_102_ce0 = ap_const_logic_1;
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_102_ce0 = grp_compute_fu_4550_local_C_102_ce0.read();
    } else {
        local_C_102_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_102_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_102_ce1 = grp_compute_fu_4550_local_C_102_ce1.read();
    } else {
        local_C_102_ce1 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_102_we0() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()) && 
         esl_seteq<1,7,7>(trunc_ln68_reg_6019_pp0_iter13_reg.read(), ap_const_lv7_66))) {
        local_C_102_we0 = ap_const_logic_1;
    } else {
        local_C_102_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_102_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_102_we1 = grp_compute_fu_4550_local_C_102_we1.read();
    } else {
        local_C_102_we1 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_103_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        local_C_103_address0 =  (sc_lv<7>) (zext_ln91_1_fu_5499_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()))) {
        local_C_103_address0 =  (sc_lv<7>) (zext_ln68_2_fu_5186_p1.read());
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_103_address0 = grp_compute_fu_4550_local_C_103_address0.read();
    } else {
        local_C_103_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_C_103_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read())))) {
        local_C_103_ce0 = ap_const_logic_1;
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_103_ce0 = grp_compute_fu_4550_local_C_103_ce0.read();
    } else {
        local_C_103_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_103_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_103_ce1 = grp_compute_fu_4550_local_C_103_ce1.read();
    } else {
        local_C_103_ce1 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_103_we0() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()) && 
         esl_seteq<1,7,7>(trunc_ln68_reg_6019_pp0_iter13_reg.read(), ap_const_lv7_67))) {
        local_C_103_we0 = ap_const_logic_1;
    } else {
        local_C_103_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_103_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_103_we1 = grp_compute_fu_4550_local_C_103_we1.read();
    } else {
        local_C_103_we1 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_104_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        local_C_104_address0 =  (sc_lv<7>) (zext_ln91_1_fu_5499_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()))) {
        local_C_104_address0 =  (sc_lv<7>) (zext_ln68_2_fu_5186_p1.read());
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_104_address0 = grp_compute_fu_4550_local_C_104_address0.read();
    } else {
        local_C_104_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_C_104_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read())))) {
        local_C_104_ce0 = ap_const_logic_1;
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_104_ce0 = grp_compute_fu_4550_local_C_104_ce0.read();
    } else {
        local_C_104_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_104_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_104_ce1 = grp_compute_fu_4550_local_C_104_ce1.read();
    } else {
        local_C_104_ce1 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_104_we0() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()) && 
         esl_seteq<1,7,7>(trunc_ln68_reg_6019_pp0_iter13_reg.read(), ap_const_lv7_68))) {
        local_C_104_we0 = ap_const_logic_1;
    } else {
        local_C_104_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_104_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_104_we1 = grp_compute_fu_4550_local_C_104_we1.read();
    } else {
        local_C_104_we1 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_105_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        local_C_105_address0 =  (sc_lv<7>) (zext_ln91_1_fu_5499_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()))) {
        local_C_105_address0 =  (sc_lv<7>) (zext_ln68_2_fu_5186_p1.read());
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_105_address0 = grp_compute_fu_4550_local_C_105_address0.read();
    } else {
        local_C_105_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_C_105_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read())))) {
        local_C_105_ce0 = ap_const_logic_1;
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_105_ce0 = grp_compute_fu_4550_local_C_105_ce0.read();
    } else {
        local_C_105_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_105_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_105_ce1 = grp_compute_fu_4550_local_C_105_ce1.read();
    } else {
        local_C_105_ce1 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_105_we0() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()) && 
         esl_seteq<1,7,7>(trunc_ln68_reg_6019_pp0_iter13_reg.read(), ap_const_lv7_69))) {
        local_C_105_we0 = ap_const_logic_1;
    } else {
        local_C_105_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_105_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_105_we1 = grp_compute_fu_4550_local_C_105_we1.read();
    } else {
        local_C_105_we1 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_106_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        local_C_106_address0 =  (sc_lv<7>) (zext_ln91_1_fu_5499_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()))) {
        local_C_106_address0 =  (sc_lv<7>) (zext_ln68_2_fu_5186_p1.read());
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_106_address0 = grp_compute_fu_4550_local_C_106_address0.read();
    } else {
        local_C_106_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_C_106_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read())))) {
        local_C_106_ce0 = ap_const_logic_1;
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_106_ce0 = grp_compute_fu_4550_local_C_106_ce0.read();
    } else {
        local_C_106_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_106_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_106_ce1 = grp_compute_fu_4550_local_C_106_ce1.read();
    } else {
        local_C_106_ce1 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_106_we0() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()) && 
         esl_seteq<1,7,7>(trunc_ln68_reg_6019_pp0_iter13_reg.read(), ap_const_lv7_6A))) {
        local_C_106_we0 = ap_const_logic_1;
    } else {
        local_C_106_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_106_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_106_we1 = grp_compute_fu_4550_local_C_106_we1.read();
    } else {
        local_C_106_we1 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_107_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        local_C_107_address0 =  (sc_lv<7>) (zext_ln91_1_fu_5499_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()))) {
        local_C_107_address0 =  (sc_lv<7>) (zext_ln68_2_fu_5186_p1.read());
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_107_address0 = grp_compute_fu_4550_local_C_107_address0.read();
    } else {
        local_C_107_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_C_107_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read())))) {
        local_C_107_ce0 = ap_const_logic_1;
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_107_ce0 = grp_compute_fu_4550_local_C_107_ce0.read();
    } else {
        local_C_107_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_107_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_107_ce1 = grp_compute_fu_4550_local_C_107_ce1.read();
    } else {
        local_C_107_ce1 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_107_we0() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()) && 
         esl_seteq<1,7,7>(trunc_ln68_reg_6019_pp0_iter13_reg.read(), ap_const_lv7_6B))) {
        local_C_107_we0 = ap_const_logic_1;
    } else {
        local_C_107_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_107_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_107_we1 = grp_compute_fu_4550_local_C_107_we1.read();
    } else {
        local_C_107_we1 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_108_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        local_C_108_address0 =  (sc_lv<7>) (zext_ln91_1_fu_5499_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()))) {
        local_C_108_address0 =  (sc_lv<7>) (zext_ln68_2_fu_5186_p1.read());
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_108_address0 = grp_compute_fu_4550_local_C_108_address0.read();
    } else {
        local_C_108_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_C_108_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read())))) {
        local_C_108_ce0 = ap_const_logic_1;
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_108_ce0 = grp_compute_fu_4550_local_C_108_ce0.read();
    } else {
        local_C_108_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_108_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_108_ce1 = grp_compute_fu_4550_local_C_108_ce1.read();
    } else {
        local_C_108_ce1 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_108_we0() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()) && 
         esl_seteq<1,7,7>(trunc_ln68_reg_6019_pp0_iter13_reg.read(), ap_const_lv7_6C))) {
        local_C_108_we0 = ap_const_logic_1;
    } else {
        local_C_108_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_108_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_108_we1 = grp_compute_fu_4550_local_C_108_we1.read();
    } else {
        local_C_108_we1 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_109_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        local_C_109_address0 =  (sc_lv<7>) (zext_ln91_1_fu_5499_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()))) {
        local_C_109_address0 =  (sc_lv<7>) (zext_ln68_2_fu_5186_p1.read());
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_109_address0 = grp_compute_fu_4550_local_C_109_address0.read();
    } else {
        local_C_109_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_C_109_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read())))) {
        local_C_109_ce0 = ap_const_logic_1;
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_109_ce0 = grp_compute_fu_4550_local_C_109_ce0.read();
    } else {
        local_C_109_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_109_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_109_ce1 = grp_compute_fu_4550_local_C_109_ce1.read();
    } else {
        local_C_109_ce1 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_109_we0() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()) && 
         esl_seteq<1,7,7>(trunc_ln68_reg_6019_pp0_iter13_reg.read(), ap_const_lv7_6D))) {
        local_C_109_we0 = ap_const_logic_1;
    } else {
        local_C_109_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_109_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_109_we1 = grp_compute_fu_4550_local_C_109_we1.read();
    } else {
        local_C_109_we1 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_10_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        local_C_10_address0 =  (sc_lv<7>) (zext_ln91_1_fu_5499_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()))) {
        local_C_10_address0 =  (sc_lv<7>) (zext_ln68_2_fu_5186_p1.read());
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_10_address0 = grp_compute_fu_4550_local_C_10_address0.read();
    } else {
        local_C_10_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_C_10_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read())))) {
        local_C_10_ce0 = ap_const_logic_1;
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_10_ce0 = grp_compute_fu_4550_local_C_10_ce0.read();
    } else {
        local_C_10_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_10_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_10_ce1 = grp_compute_fu_4550_local_C_10_ce1.read();
    } else {
        local_C_10_ce1 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_10_we0() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()) && 
         esl_seteq<1,7,7>(trunc_ln68_reg_6019_pp0_iter13_reg.read(), ap_const_lv7_A))) {
        local_C_10_we0 = ap_const_logic_1;
    } else {
        local_C_10_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_10_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_10_we1 = grp_compute_fu_4550_local_C_10_we1.read();
    } else {
        local_C_10_we1 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_110_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        local_C_110_address0 =  (sc_lv<7>) (zext_ln91_1_fu_5499_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()))) {
        local_C_110_address0 =  (sc_lv<7>) (zext_ln68_2_fu_5186_p1.read());
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_110_address0 = grp_compute_fu_4550_local_C_110_address0.read();
    } else {
        local_C_110_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_C_110_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read())))) {
        local_C_110_ce0 = ap_const_logic_1;
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_110_ce0 = grp_compute_fu_4550_local_C_110_ce0.read();
    } else {
        local_C_110_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_110_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_110_ce1 = grp_compute_fu_4550_local_C_110_ce1.read();
    } else {
        local_C_110_ce1 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_110_we0() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()) && 
         esl_seteq<1,7,7>(trunc_ln68_reg_6019_pp0_iter13_reg.read(), ap_const_lv7_6E))) {
        local_C_110_we0 = ap_const_logic_1;
    } else {
        local_C_110_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_110_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_110_we1 = grp_compute_fu_4550_local_C_110_we1.read();
    } else {
        local_C_110_we1 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_111_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        local_C_111_address0 =  (sc_lv<7>) (zext_ln91_1_fu_5499_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()))) {
        local_C_111_address0 =  (sc_lv<7>) (zext_ln68_2_fu_5186_p1.read());
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_111_address0 = grp_compute_fu_4550_local_C_111_address0.read();
    } else {
        local_C_111_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_C_111_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read())))) {
        local_C_111_ce0 = ap_const_logic_1;
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_111_ce0 = grp_compute_fu_4550_local_C_111_ce0.read();
    } else {
        local_C_111_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_111_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_111_ce1 = grp_compute_fu_4550_local_C_111_ce1.read();
    } else {
        local_C_111_ce1 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_111_we0() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()) && 
         esl_seteq<1,7,7>(trunc_ln68_reg_6019_pp0_iter13_reg.read(), ap_const_lv7_6F))) {
        local_C_111_we0 = ap_const_logic_1;
    } else {
        local_C_111_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_111_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_111_we1 = grp_compute_fu_4550_local_C_111_we1.read();
    } else {
        local_C_111_we1 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_112_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        local_C_112_address0 =  (sc_lv<7>) (zext_ln91_1_fu_5499_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()))) {
        local_C_112_address0 =  (sc_lv<7>) (zext_ln68_2_fu_5186_p1.read());
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_112_address0 = grp_compute_fu_4550_local_C_112_address0.read();
    } else {
        local_C_112_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_C_112_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read())))) {
        local_C_112_ce0 = ap_const_logic_1;
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_112_ce0 = grp_compute_fu_4550_local_C_112_ce0.read();
    } else {
        local_C_112_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_112_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_112_ce1 = grp_compute_fu_4550_local_C_112_ce1.read();
    } else {
        local_C_112_ce1 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_112_we0() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()) && 
         esl_seteq<1,7,7>(trunc_ln68_reg_6019_pp0_iter13_reg.read(), ap_const_lv7_70))) {
        local_C_112_we0 = ap_const_logic_1;
    } else {
        local_C_112_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_112_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_112_we1 = grp_compute_fu_4550_local_C_112_we1.read();
    } else {
        local_C_112_we1 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_113_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        local_C_113_address0 =  (sc_lv<7>) (zext_ln91_1_fu_5499_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()))) {
        local_C_113_address0 =  (sc_lv<7>) (zext_ln68_2_fu_5186_p1.read());
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_113_address0 = grp_compute_fu_4550_local_C_113_address0.read();
    } else {
        local_C_113_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_C_113_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read())))) {
        local_C_113_ce0 = ap_const_logic_1;
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_113_ce0 = grp_compute_fu_4550_local_C_113_ce0.read();
    } else {
        local_C_113_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_113_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_113_ce1 = grp_compute_fu_4550_local_C_113_ce1.read();
    } else {
        local_C_113_ce1 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_113_we0() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()) && 
         esl_seteq<1,7,7>(trunc_ln68_reg_6019_pp0_iter13_reg.read(), ap_const_lv7_71))) {
        local_C_113_we0 = ap_const_logic_1;
    } else {
        local_C_113_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_113_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_113_we1 = grp_compute_fu_4550_local_C_113_we1.read();
    } else {
        local_C_113_we1 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_114_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        local_C_114_address0 =  (sc_lv<7>) (zext_ln91_1_fu_5499_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()))) {
        local_C_114_address0 =  (sc_lv<7>) (zext_ln68_2_fu_5186_p1.read());
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_114_address0 = grp_compute_fu_4550_local_C_114_address0.read();
    } else {
        local_C_114_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_C_114_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read())))) {
        local_C_114_ce0 = ap_const_logic_1;
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_114_ce0 = grp_compute_fu_4550_local_C_114_ce0.read();
    } else {
        local_C_114_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_114_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_114_ce1 = grp_compute_fu_4550_local_C_114_ce1.read();
    } else {
        local_C_114_ce1 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_114_we0() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()) && 
         esl_seteq<1,7,7>(trunc_ln68_reg_6019_pp0_iter13_reg.read(), ap_const_lv7_72))) {
        local_C_114_we0 = ap_const_logic_1;
    } else {
        local_C_114_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_114_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_114_we1 = grp_compute_fu_4550_local_C_114_we1.read();
    } else {
        local_C_114_we1 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_115_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        local_C_115_address0 =  (sc_lv<7>) (zext_ln91_1_fu_5499_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()))) {
        local_C_115_address0 =  (sc_lv<7>) (zext_ln68_2_fu_5186_p1.read());
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_115_address0 = grp_compute_fu_4550_local_C_115_address0.read();
    } else {
        local_C_115_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_C_115_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read())))) {
        local_C_115_ce0 = ap_const_logic_1;
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_115_ce0 = grp_compute_fu_4550_local_C_115_ce0.read();
    } else {
        local_C_115_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_115_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_115_ce1 = grp_compute_fu_4550_local_C_115_ce1.read();
    } else {
        local_C_115_ce1 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_115_we0() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()) && 
         esl_seteq<1,7,7>(trunc_ln68_reg_6019_pp0_iter13_reg.read(), ap_const_lv7_73))) {
        local_C_115_we0 = ap_const_logic_1;
    } else {
        local_C_115_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_115_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_115_we1 = grp_compute_fu_4550_local_C_115_we1.read();
    } else {
        local_C_115_we1 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_116_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        local_C_116_address0 =  (sc_lv<7>) (zext_ln91_1_fu_5499_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()))) {
        local_C_116_address0 =  (sc_lv<7>) (zext_ln68_2_fu_5186_p1.read());
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_116_address0 = grp_compute_fu_4550_local_C_116_address0.read();
    } else {
        local_C_116_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_C_116_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read())))) {
        local_C_116_ce0 = ap_const_logic_1;
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_116_ce0 = grp_compute_fu_4550_local_C_116_ce0.read();
    } else {
        local_C_116_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_116_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_116_ce1 = grp_compute_fu_4550_local_C_116_ce1.read();
    } else {
        local_C_116_ce1 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_116_we0() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()) && 
         esl_seteq<1,7,7>(trunc_ln68_reg_6019_pp0_iter13_reg.read(), ap_const_lv7_74))) {
        local_C_116_we0 = ap_const_logic_1;
    } else {
        local_C_116_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_116_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_116_we1 = grp_compute_fu_4550_local_C_116_we1.read();
    } else {
        local_C_116_we1 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_117_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        local_C_117_address0 =  (sc_lv<7>) (zext_ln91_1_fu_5499_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()))) {
        local_C_117_address0 =  (sc_lv<7>) (zext_ln68_2_fu_5186_p1.read());
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_117_address0 = grp_compute_fu_4550_local_C_117_address0.read();
    } else {
        local_C_117_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_C_117_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read())))) {
        local_C_117_ce0 = ap_const_logic_1;
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_117_ce0 = grp_compute_fu_4550_local_C_117_ce0.read();
    } else {
        local_C_117_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_117_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_117_ce1 = grp_compute_fu_4550_local_C_117_ce1.read();
    } else {
        local_C_117_ce1 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_117_we0() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()) && 
         esl_seteq<1,7,7>(trunc_ln68_reg_6019_pp0_iter13_reg.read(), ap_const_lv7_75))) {
        local_C_117_we0 = ap_const_logic_1;
    } else {
        local_C_117_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_117_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_117_we1 = grp_compute_fu_4550_local_C_117_we1.read();
    } else {
        local_C_117_we1 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_118_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        local_C_118_address0 =  (sc_lv<7>) (zext_ln91_1_fu_5499_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()))) {
        local_C_118_address0 =  (sc_lv<7>) (zext_ln68_2_fu_5186_p1.read());
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_118_address0 = grp_compute_fu_4550_local_C_118_address0.read();
    } else {
        local_C_118_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_C_118_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read())))) {
        local_C_118_ce0 = ap_const_logic_1;
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_118_ce0 = grp_compute_fu_4550_local_C_118_ce0.read();
    } else {
        local_C_118_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_118_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_118_ce1 = grp_compute_fu_4550_local_C_118_ce1.read();
    } else {
        local_C_118_ce1 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_118_we0() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()) && 
         esl_seteq<1,7,7>(trunc_ln68_reg_6019_pp0_iter13_reg.read(), ap_const_lv7_76))) {
        local_C_118_we0 = ap_const_logic_1;
    } else {
        local_C_118_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_118_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_118_we1 = grp_compute_fu_4550_local_C_118_we1.read();
    } else {
        local_C_118_we1 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_119_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        local_C_119_address0 =  (sc_lv<7>) (zext_ln91_1_fu_5499_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()))) {
        local_C_119_address0 =  (sc_lv<7>) (zext_ln68_2_fu_5186_p1.read());
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_119_address0 = grp_compute_fu_4550_local_C_119_address0.read();
    } else {
        local_C_119_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_C_119_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read())))) {
        local_C_119_ce0 = ap_const_logic_1;
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_119_ce0 = grp_compute_fu_4550_local_C_119_ce0.read();
    } else {
        local_C_119_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_119_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_119_ce1 = grp_compute_fu_4550_local_C_119_ce1.read();
    } else {
        local_C_119_ce1 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_119_we0() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()) && 
         esl_seteq<1,7,7>(trunc_ln68_reg_6019_pp0_iter13_reg.read(), ap_const_lv7_77))) {
        local_C_119_we0 = ap_const_logic_1;
    } else {
        local_C_119_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_119_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_119_we1 = grp_compute_fu_4550_local_C_119_we1.read();
    } else {
        local_C_119_we1 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_11_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        local_C_11_address0 =  (sc_lv<7>) (zext_ln91_1_fu_5499_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()))) {
        local_C_11_address0 =  (sc_lv<7>) (zext_ln68_2_fu_5186_p1.read());
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_11_address0 = grp_compute_fu_4550_local_C_11_address0.read();
    } else {
        local_C_11_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_C_11_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read())))) {
        local_C_11_ce0 = ap_const_logic_1;
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_11_ce0 = grp_compute_fu_4550_local_C_11_ce0.read();
    } else {
        local_C_11_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_11_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_11_ce1 = grp_compute_fu_4550_local_C_11_ce1.read();
    } else {
        local_C_11_ce1 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_11_we0() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()) && 
         esl_seteq<1,7,7>(trunc_ln68_reg_6019_pp0_iter13_reg.read(), ap_const_lv7_B))) {
        local_C_11_we0 = ap_const_logic_1;
    } else {
        local_C_11_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_11_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_11_we1 = grp_compute_fu_4550_local_C_11_we1.read();
    } else {
        local_C_11_we1 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_120_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        local_C_120_address0 =  (sc_lv<7>) (zext_ln91_1_fu_5499_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()))) {
        local_C_120_address0 =  (sc_lv<7>) (zext_ln68_2_fu_5186_p1.read());
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_120_address0 = grp_compute_fu_4550_local_C_120_address0.read();
    } else {
        local_C_120_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_C_120_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read())))) {
        local_C_120_ce0 = ap_const_logic_1;
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_120_ce0 = grp_compute_fu_4550_local_C_120_ce0.read();
    } else {
        local_C_120_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_120_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_120_ce1 = grp_compute_fu_4550_local_C_120_ce1.read();
    } else {
        local_C_120_ce1 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_120_we0() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()) && 
         esl_seteq<1,7,7>(trunc_ln68_reg_6019_pp0_iter13_reg.read(), ap_const_lv7_78))) {
        local_C_120_we0 = ap_const_logic_1;
    } else {
        local_C_120_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_120_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_120_we1 = grp_compute_fu_4550_local_C_120_we1.read();
    } else {
        local_C_120_we1 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_121_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        local_C_121_address0 =  (sc_lv<7>) (zext_ln91_1_fu_5499_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()))) {
        local_C_121_address0 =  (sc_lv<7>) (zext_ln68_2_fu_5186_p1.read());
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_121_address0 = grp_compute_fu_4550_local_C_121_address0.read();
    } else {
        local_C_121_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_C_121_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read())))) {
        local_C_121_ce0 = ap_const_logic_1;
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_121_ce0 = grp_compute_fu_4550_local_C_121_ce0.read();
    } else {
        local_C_121_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_121_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_121_ce1 = grp_compute_fu_4550_local_C_121_ce1.read();
    } else {
        local_C_121_ce1 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_121_we0() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()) && 
         esl_seteq<1,7,7>(trunc_ln68_reg_6019_pp0_iter13_reg.read(), ap_const_lv7_79))) {
        local_C_121_we0 = ap_const_logic_1;
    } else {
        local_C_121_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_121_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_121_we1 = grp_compute_fu_4550_local_C_121_we1.read();
    } else {
        local_C_121_we1 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_122_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        local_C_122_address0 =  (sc_lv<7>) (zext_ln91_1_fu_5499_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()))) {
        local_C_122_address0 =  (sc_lv<7>) (zext_ln68_2_fu_5186_p1.read());
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_122_address0 = grp_compute_fu_4550_local_C_122_address0.read();
    } else {
        local_C_122_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_C_122_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read())))) {
        local_C_122_ce0 = ap_const_logic_1;
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_122_ce0 = grp_compute_fu_4550_local_C_122_ce0.read();
    } else {
        local_C_122_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_122_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_122_ce1 = grp_compute_fu_4550_local_C_122_ce1.read();
    } else {
        local_C_122_ce1 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_122_we0() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()) && 
         esl_seteq<1,7,7>(trunc_ln68_reg_6019_pp0_iter13_reg.read(), ap_const_lv7_7A))) {
        local_C_122_we0 = ap_const_logic_1;
    } else {
        local_C_122_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_122_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_122_we1 = grp_compute_fu_4550_local_C_122_we1.read();
    } else {
        local_C_122_we1 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_123_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        local_C_123_address0 =  (sc_lv<7>) (zext_ln91_1_fu_5499_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()))) {
        local_C_123_address0 =  (sc_lv<7>) (zext_ln68_2_fu_5186_p1.read());
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_123_address0 = grp_compute_fu_4550_local_C_123_address0.read();
    } else {
        local_C_123_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_C_123_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read())))) {
        local_C_123_ce0 = ap_const_logic_1;
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_123_ce0 = grp_compute_fu_4550_local_C_123_ce0.read();
    } else {
        local_C_123_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_123_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_123_ce1 = grp_compute_fu_4550_local_C_123_ce1.read();
    } else {
        local_C_123_ce1 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_123_we0() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()) && 
         esl_seteq<1,7,7>(trunc_ln68_reg_6019_pp0_iter13_reg.read(), ap_const_lv7_7B))) {
        local_C_123_we0 = ap_const_logic_1;
    } else {
        local_C_123_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_123_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_123_we1 = grp_compute_fu_4550_local_C_123_we1.read();
    } else {
        local_C_123_we1 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_124_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        local_C_124_address0 =  (sc_lv<7>) (zext_ln91_1_fu_5499_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()))) {
        local_C_124_address0 =  (sc_lv<7>) (zext_ln68_2_fu_5186_p1.read());
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_124_address0 = grp_compute_fu_4550_local_C_124_address0.read();
    } else {
        local_C_124_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_C_124_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read())))) {
        local_C_124_ce0 = ap_const_logic_1;
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_124_ce0 = grp_compute_fu_4550_local_C_124_ce0.read();
    } else {
        local_C_124_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_124_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_124_ce1 = grp_compute_fu_4550_local_C_124_ce1.read();
    } else {
        local_C_124_ce1 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_124_we0() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()) && 
         esl_seteq<1,7,7>(trunc_ln68_reg_6019_pp0_iter13_reg.read(), ap_const_lv7_7C))) {
        local_C_124_we0 = ap_const_logic_1;
    } else {
        local_C_124_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_124_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_124_we1 = grp_compute_fu_4550_local_C_124_we1.read();
    } else {
        local_C_124_we1 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_125_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        local_C_125_address0 =  (sc_lv<7>) (zext_ln91_1_fu_5499_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()))) {
        local_C_125_address0 =  (sc_lv<7>) (zext_ln68_2_fu_5186_p1.read());
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_125_address0 = grp_compute_fu_4550_local_C_125_address0.read();
    } else {
        local_C_125_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_C_125_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read())))) {
        local_C_125_ce0 = ap_const_logic_1;
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_125_ce0 = grp_compute_fu_4550_local_C_125_ce0.read();
    } else {
        local_C_125_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_125_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_125_ce1 = grp_compute_fu_4550_local_C_125_ce1.read();
    } else {
        local_C_125_ce1 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_125_we0() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()) && 
         esl_seteq<1,7,7>(trunc_ln68_reg_6019_pp0_iter13_reg.read(), ap_const_lv7_7D))) {
        local_C_125_we0 = ap_const_logic_1;
    } else {
        local_C_125_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_125_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_125_we1 = grp_compute_fu_4550_local_C_125_we1.read();
    } else {
        local_C_125_we1 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_126_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        local_C_126_address0 =  (sc_lv<7>) (zext_ln91_1_fu_5499_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()))) {
        local_C_126_address0 =  (sc_lv<7>) (zext_ln68_2_fu_5186_p1.read());
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_126_address0 = grp_compute_fu_4550_local_C_126_address0.read();
    } else {
        local_C_126_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_C_126_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read())))) {
        local_C_126_ce0 = ap_const_logic_1;
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_126_ce0 = grp_compute_fu_4550_local_C_126_ce0.read();
    } else {
        local_C_126_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_126_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_126_ce1 = grp_compute_fu_4550_local_C_126_ce1.read();
    } else {
        local_C_126_ce1 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_126_we0() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()) && 
         esl_seteq<1,7,7>(trunc_ln68_reg_6019_pp0_iter13_reg.read(), ap_const_lv7_7E))) {
        local_C_126_we0 = ap_const_logic_1;
    } else {
        local_C_126_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_126_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_126_we1 = grp_compute_fu_4550_local_C_126_we1.read();
    } else {
        local_C_126_we1 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_127_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        local_C_127_address0 =  (sc_lv<7>) (zext_ln91_1_fu_5499_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()))) {
        local_C_127_address0 =  (sc_lv<7>) (zext_ln68_2_fu_5186_p1.read());
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_127_address0 = grp_compute_fu_4550_local_C_127_address0.read();
    } else {
        local_C_127_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_C_127_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read())))) {
        local_C_127_ce0 = ap_const_logic_1;
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_127_ce0 = grp_compute_fu_4550_local_C_127_ce0.read();
    } else {
        local_C_127_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_127_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_127_ce1 = grp_compute_fu_4550_local_C_127_ce1.read();
    } else {
        local_C_127_ce1 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_127_we0() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()) && 
         esl_seteq<1,7,7>(trunc_ln68_reg_6019_pp0_iter13_reg.read(), ap_const_lv7_7F))) {
        local_C_127_we0 = ap_const_logic_1;
    } else {
        local_C_127_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_127_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_127_we1 = grp_compute_fu_4550_local_C_127_we1.read();
    } else {
        local_C_127_we1 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_12_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        local_C_12_address0 =  (sc_lv<7>) (zext_ln91_1_fu_5499_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()))) {
        local_C_12_address0 =  (sc_lv<7>) (zext_ln68_2_fu_5186_p1.read());
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_12_address0 = grp_compute_fu_4550_local_C_12_address0.read();
    } else {
        local_C_12_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_C_12_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read())))) {
        local_C_12_ce0 = ap_const_logic_1;
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_12_ce0 = grp_compute_fu_4550_local_C_12_ce0.read();
    } else {
        local_C_12_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_12_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_12_ce1 = grp_compute_fu_4550_local_C_12_ce1.read();
    } else {
        local_C_12_ce1 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_12_we0() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()) && 
         esl_seteq<1,7,7>(trunc_ln68_reg_6019_pp0_iter13_reg.read(), ap_const_lv7_C))) {
        local_C_12_we0 = ap_const_logic_1;
    } else {
        local_C_12_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_12_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_12_we1 = grp_compute_fu_4550_local_C_12_we1.read();
    } else {
        local_C_12_we1 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_13_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        local_C_13_address0 =  (sc_lv<7>) (zext_ln91_1_fu_5499_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()))) {
        local_C_13_address0 =  (sc_lv<7>) (zext_ln68_2_fu_5186_p1.read());
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_13_address0 = grp_compute_fu_4550_local_C_13_address0.read();
    } else {
        local_C_13_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_C_13_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read())))) {
        local_C_13_ce0 = ap_const_logic_1;
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_13_ce0 = grp_compute_fu_4550_local_C_13_ce0.read();
    } else {
        local_C_13_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_13_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_13_ce1 = grp_compute_fu_4550_local_C_13_ce1.read();
    } else {
        local_C_13_ce1 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_13_we0() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()) && 
         esl_seteq<1,7,7>(trunc_ln68_reg_6019_pp0_iter13_reg.read(), ap_const_lv7_D))) {
        local_C_13_we0 = ap_const_logic_1;
    } else {
        local_C_13_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_13_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_13_we1 = grp_compute_fu_4550_local_C_13_we1.read();
    } else {
        local_C_13_we1 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_14_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        local_C_14_address0 =  (sc_lv<7>) (zext_ln91_1_fu_5499_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()))) {
        local_C_14_address0 =  (sc_lv<7>) (zext_ln68_2_fu_5186_p1.read());
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_14_address0 = grp_compute_fu_4550_local_C_14_address0.read();
    } else {
        local_C_14_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_C_14_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read())))) {
        local_C_14_ce0 = ap_const_logic_1;
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_14_ce0 = grp_compute_fu_4550_local_C_14_ce0.read();
    } else {
        local_C_14_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_14_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_14_ce1 = grp_compute_fu_4550_local_C_14_ce1.read();
    } else {
        local_C_14_ce1 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_14_we0() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()) && 
         esl_seteq<1,7,7>(trunc_ln68_reg_6019_pp0_iter13_reg.read(), ap_const_lv7_E))) {
        local_C_14_we0 = ap_const_logic_1;
    } else {
        local_C_14_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_14_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_14_we1 = grp_compute_fu_4550_local_C_14_we1.read();
    } else {
        local_C_14_we1 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_15_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        local_C_15_address0 =  (sc_lv<7>) (zext_ln91_1_fu_5499_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()))) {
        local_C_15_address0 =  (sc_lv<7>) (zext_ln68_2_fu_5186_p1.read());
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_15_address0 = grp_compute_fu_4550_local_C_15_address0.read();
    } else {
        local_C_15_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_C_15_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read())))) {
        local_C_15_ce0 = ap_const_logic_1;
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_15_ce0 = grp_compute_fu_4550_local_C_15_ce0.read();
    } else {
        local_C_15_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_15_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_15_ce1 = grp_compute_fu_4550_local_C_15_ce1.read();
    } else {
        local_C_15_ce1 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_15_we0() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()) && 
         esl_seteq<1,7,7>(trunc_ln68_reg_6019_pp0_iter13_reg.read(), ap_const_lv7_F))) {
        local_C_15_we0 = ap_const_logic_1;
    } else {
        local_C_15_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_15_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_15_we1 = grp_compute_fu_4550_local_C_15_we1.read();
    } else {
        local_C_15_we1 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_16_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        local_C_16_address0 =  (sc_lv<7>) (zext_ln91_1_fu_5499_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()))) {
        local_C_16_address0 =  (sc_lv<7>) (zext_ln68_2_fu_5186_p1.read());
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_16_address0 = grp_compute_fu_4550_local_C_16_address0.read();
    } else {
        local_C_16_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_C_16_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read())))) {
        local_C_16_ce0 = ap_const_logic_1;
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_16_ce0 = grp_compute_fu_4550_local_C_16_ce0.read();
    } else {
        local_C_16_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_16_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_16_ce1 = grp_compute_fu_4550_local_C_16_ce1.read();
    } else {
        local_C_16_ce1 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_16_we0() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()) && 
         esl_seteq<1,7,7>(trunc_ln68_reg_6019_pp0_iter13_reg.read(), ap_const_lv7_10))) {
        local_C_16_we0 = ap_const_logic_1;
    } else {
        local_C_16_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_16_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_16_we1 = grp_compute_fu_4550_local_C_16_we1.read();
    } else {
        local_C_16_we1 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_17_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        local_C_17_address0 =  (sc_lv<7>) (zext_ln91_1_fu_5499_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()))) {
        local_C_17_address0 =  (sc_lv<7>) (zext_ln68_2_fu_5186_p1.read());
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_17_address0 = grp_compute_fu_4550_local_C_17_address0.read();
    } else {
        local_C_17_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_C_17_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read())))) {
        local_C_17_ce0 = ap_const_logic_1;
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_17_ce0 = grp_compute_fu_4550_local_C_17_ce0.read();
    } else {
        local_C_17_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_17_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_17_ce1 = grp_compute_fu_4550_local_C_17_ce1.read();
    } else {
        local_C_17_ce1 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_17_we0() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()) && 
         esl_seteq<1,7,7>(trunc_ln68_reg_6019_pp0_iter13_reg.read(), ap_const_lv7_11))) {
        local_C_17_we0 = ap_const_logic_1;
    } else {
        local_C_17_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_17_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_17_we1 = grp_compute_fu_4550_local_C_17_we1.read();
    } else {
        local_C_17_we1 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_18_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        local_C_18_address0 =  (sc_lv<7>) (zext_ln91_1_fu_5499_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()))) {
        local_C_18_address0 =  (sc_lv<7>) (zext_ln68_2_fu_5186_p1.read());
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_18_address0 = grp_compute_fu_4550_local_C_18_address0.read();
    } else {
        local_C_18_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_C_18_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read())))) {
        local_C_18_ce0 = ap_const_logic_1;
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_18_ce0 = grp_compute_fu_4550_local_C_18_ce0.read();
    } else {
        local_C_18_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_18_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_18_ce1 = grp_compute_fu_4550_local_C_18_ce1.read();
    } else {
        local_C_18_ce1 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_18_we0() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()) && 
         esl_seteq<1,7,7>(trunc_ln68_reg_6019_pp0_iter13_reg.read(), ap_const_lv7_12))) {
        local_C_18_we0 = ap_const_logic_1;
    } else {
        local_C_18_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_18_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_18_we1 = grp_compute_fu_4550_local_C_18_we1.read();
    } else {
        local_C_18_we1 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_19_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        local_C_19_address0 =  (sc_lv<7>) (zext_ln91_1_fu_5499_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()))) {
        local_C_19_address0 =  (sc_lv<7>) (zext_ln68_2_fu_5186_p1.read());
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_19_address0 = grp_compute_fu_4550_local_C_19_address0.read();
    } else {
        local_C_19_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_C_19_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read())))) {
        local_C_19_ce0 = ap_const_logic_1;
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_19_ce0 = grp_compute_fu_4550_local_C_19_ce0.read();
    } else {
        local_C_19_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_19_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_19_ce1 = grp_compute_fu_4550_local_C_19_ce1.read();
    } else {
        local_C_19_ce1 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_19_we0() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()) && 
         esl_seteq<1,7,7>(trunc_ln68_reg_6019_pp0_iter13_reg.read(), ap_const_lv7_13))) {
        local_C_19_we0 = ap_const_logic_1;
    } else {
        local_C_19_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_19_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_19_we1 = grp_compute_fu_4550_local_C_19_we1.read();
    } else {
        local_C_19_we1 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_1_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        local_C_1_address0 =  (sc_lv<7>) (zext_ln91_1_fu_5499_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()))) {
        local_C_1_address0 =  (sc_lv<7>) (zext_ln68_2_fu_5186_p1.read());
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_1_address0 = grp_compute_fu_4550_local_C_1_address0.read();
    } else {
        local_C_1_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_C_1_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read())))) {
        local_C_1_ce0 = ap_const_logic_1;
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_1_ce0 = grp_compute_fu_4550_local_C_1_ce0.read();
    } else {
        local_C_1_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_1_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_1_ce1 = grp_compute_fu_4550_local_C_1_ce1.read();
    } else {
        local_C_1_ce1 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_1_we0() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()) && 
         esl_seteq<1,7,7>(trunc_ln68_reg_6019_pp0_iter13_reg.read(), ap_const_lv7_1))) {
        local_C_1_we0 = ap_const_logic_1;
    } else {
        local_C_1_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_1_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_1_we1 = grp_compute_fu_4550_local_C_1_we1.read();
    } else {
        local_C_1_we1 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_20_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        local_C_20_address0 =  (sc_lv<7>) (zext_ln91_1_fu_5499_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()))) {
        local_C_20_address0 =  (sc_lv<7>) (zext_ln68_2_fu_5186_p1.read());
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_20_address0 = grp_compute_fu_4550_local_C_20_address0.read();
    } else {
        local_C_20_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_C_20_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read())))) {
        local_C_20_ce0 = ap_const_logic_1;
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_20_ce0 = grp_compute_fu_4550_local_C_20_ce0.read();
    } else {
        local_C_20_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_20_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_20_ce1 = grp_compute_fu_4550_local_C_20_ce1.read();
    } else {
        local_C_20_ce1 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_20_we0() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()) && 
         esl_seteq<1,7,7>(trunc_ln68_reg_6019_pp0_iter13_reg.read(), ap_const_lv7_14))) {
        local_C_20_we0 = ap_const_logic_1;
    } else {
        local_C_20_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_20_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_20_we1 = grp_compute_fu_4550_local_C_20_we1.read();
    } else {
        local_C_20_we1 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_21_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        local_C_21_address0 =  (sc_lv<7>) (zext_ln91_1_fu_5499_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()))) {
        local_C_21_address0 =  (sc_lv<7>) (zext_ln68_2_fu_5186_p1.read());
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_21_address0 = grp_compute_fu_4550_local_C_21_address0.read();
    } else {
        local_C_21_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_C_21_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read())))) {
        local_C_21_ce0 = ap_const_logic_1;
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_21_ce0 = grp_compute_fu_4550_local_C_21_ce0.read();
    } else {
        local_C_21_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_21_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_21_ce1 = grp_compute_fu_4550_local_C_21_ce1.read();
    } else {
        local_C_21_ce1 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_21_we0() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()) && 
         esl_seteq<1,7,7>(trunc_ln68_reg_6019_pp0_iter13_reg.read(), ap_const_lv7_15))) {
        local_C_21_we0 = ap_const_logic_1;
    } else {
        local_C_21_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_21_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_21_we1 = grp_compute_fu_4550_local_C_21_we1.read();
    } else {
        local_C_21_we1 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_22_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        local_C_22_address0 =  (sc_lv<7>) (zext_ln91_1_fu_5499_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()))) {
        local_C_22_address0 =  (sc_lv<7>) (zext_ln68_2_fu_5186_p1.read());
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_22_address0 = grp_compute_fu_4550_local_C_22_address0.read();
    } else {
        local_C_22_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_C_22_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read())))) {
        local_C_22_ce0 = ap_const_logic_1;
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_22_ce0 = grp_compute_fu_4550_local_C_22_ce0.read();
    } else {
        local_C_22_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_22_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_22_ce1 = grp_compute_fu_4550_local_C_22_ce1.read();
    } else {
        local_C_22_ce1 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_22_we0() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()) && 
         esl_seteq<1,7,7>(trunc_ln68_reg_6019_pp0_iter13_reg.read(), ap_const_lv7_16))) {
        local_C_22_we0 = ap_const_logic_1;
    } else {
        local_C_22_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_22_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_22_we1 = grp_compute_fu_4550_local_C_22_we1.read();
    } else {
        local_C_22_we1 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_23_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        local_C_23_address0 =  (sc_lv<7>) (zext_ln91_1_fu_5499_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()))) {
        local_C_23_address0 =  (sc_lv<7>) (zext_ln68_2_fu_5186_p1.read());
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_23_address0 = grp_compute_fu_4550_local_C_23_address0.read();
    } else {
        local_C_23_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_C_23_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read())))) {
        local_C_23_ce0 = ap_const_logic_1;
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_23_ce0 = grp_compute_fu_4550_local_C_23_ce0.read();
    } else {
        local_C_23_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_23_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_23_ce1 = grp_compute_fu_4550_local_C_23_ce1.read();
    } else {
        local_C_23_ce1 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_23_we0() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()) && 
         esl_seteq<1,7,7>(trunc_ln68_reg_6019_pp0_iter13_reg.read(), ap_const_lv7_17))) {
        local_C_23_we0 = ap_const_logic_1;
    } else {
        local_C_23_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_23_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_23_we1 = grp_compute_fu_4550_local_C_23_we1.read();
    } else {
        local_C_23_we1 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_24_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        local_C_24_address0 =  (sc_lv<7>) (zext_ln91_1_fu_5499_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()))) {
        local_C_24_address0 =  (sc_lv<7>) (zext_ln68_2_fu_5186_p1.read());
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_24_address0 = grp_compute_fu_4550_local_C_24_address0.read();
    } else {
        local_C_24_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_C_24_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read())))) {
        local_C_24_ce0 = ap_const_logic_1;
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_24_ce0 = grp_compute_fu_4550_local_C_24_ce0.read();
    } else {
        local_C_24_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_24_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_24_ce1 = grp_compute_fu_4550_local_C_24_ce1.read();
    } else {
        local_C_24_ce1 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_24_we0() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()) && 
         esl_seteq<1,7,7>(trunc_ln68_reg_6019_pp0_iter13_reg.read(), ap_const_lv7_18))) {
        local_C_24_we0 = ap_const_logic_1;
    } else {
        local_C_24_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_24_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_24_we1 = grp_compute_fu_4550_local_C_24_we1.read();
    } else {
        local_C_24_we1 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_25_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        local_C_25_address0 =  (sc_lv<7>) (zext_ln91_1_fu_5499_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()))) {
        local_C_25_address0 =  (sc_lv<7>) (zext_ln68_2_fu_5186_p1.read());
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_25_address0 = grp_compute_fu_4550_local_C_25_address0.read();
    } else {
        local_C_25_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_C_25_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read())))) {
        local_C_25_ce0 = ap_const_logic_1;
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_25_ce0 = grp_compute_fu_4550_local_C_25_ce0.read();
    } else {
        local_C_25_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_25_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_25_ce1 = grp_compute_fu_4550_local_C_25_ce1.read();
    } else {
        local_C_25_ce1 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_25_we0() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()) && 
         esl_seteq<1,7,7>(trunc_ln68_reg_6019_pp0_iter13_reg.read(), ap_const_lv7_19))) {
        local_C_25_we0 = ap_const_logic_1;
    } else {
        local_C_25_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_25_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_25_we1 = grp_compute_fu_4550_local_C_25_we1.read();
    } else {
        local_C_25_we1 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_26_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        local_C_26_address0 =  (sc_lv<7>) (zext_ln91_1_fu_5499_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()))) {
        local_C_26_address0 =  (sc_lv<7>) (zext_ln68_2_fu_5186_p1.read());
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_26_address0 = grp_compute_fu_4550_local_C_26_address0.read();
    } else {
        local_C_26_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_C_26_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read())))) {
        local_C_26_ce0 = ap_const_logic_1;
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_26_ce0 = grp_compute_fu_4550_local_C_26_ce0.read();
    } else {
        local_C_26_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_26_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_26_ce1 = grp_compute_fu_4550_local_C_26_ce1.read();
    } else {
        local_C_26_ce1 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_26_we0() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()) && 
         esl_seteq<1,7,7>(trunc_ln68_reg_6019_pp0_iter13_reg.read(), ap_const_lv7_1A))) {
        local_C_26_we0 = ap_const_logic_1;
    } else {
        local_C_26_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_26_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_26_we1 = grp_compute_fu_4550_local_C_26_we1.read();
    } else {
        local_C_26_we1 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_27_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        local_C_27_address0 =  (sc_lv<7>) (zext_ln91_1_fu_5499_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()))) {
        local_C_27_address0 =  (sc_lv<7>) (zext_ln68_2_fu_5186_p1.read());
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_27_address0 = grp_compute_fu_4550_local_C_27_address0.read();
    } else {
        local_C_27_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_C_27_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read())))) {
        local_C_27_ce0 = ap_const_logic_1;
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_27_ce0 = grp_compute_fu_4550_local_C_27_ce0.read();
    } else {
        local_C_27_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_27_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_27_ce1 = grp_compute_fu_4550_local_C_27_ce1.read();
    } else {
        local_C_27_ce1 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_27_we0() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()) && 
         esl_seteq<1,7,7>(trunc_ln68_reg_6019_pp0_iter13_reg.read(), ap_const_lv7_1B))) {
        local_C_27_we0 = ap_const_logic_1;
    } else {
        local_C_27_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_27_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_27_we1 = grp_compute_fu_4550_local_C_27_we1.read();
    } else {
        local_C_27_we1 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_28_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        local_C_28_address0 =  (sc_lv<7>) (zext_ln91_1_fu_5499_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()))) {
        local_C_28_address0 =  (sc_lv<7>) (zext_ln68_2_fu_5186_p1.read());
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_28_address0 = grp_compute_fu_4550_local_C_28_address0.read();
    } else {
        local_C_28_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_C_28_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read())))) {
        local_C_28_ce0 = ap_const_logic_1;
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_28_ce0 = grp_compute_fu_4550_local_C_28_ce0.read();
    } else {
        local_C_28_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_28_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_28_ce1 = grp_compute_fu_4550_local_C_28_ce1.read();
    } else {
        local_C_28_ce1 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_28_we0() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()) && 
         esl_seteq<1,7,7>(trunc_ln68_reg_6019_pp0_iter13_reg.read(), ap_const_lv7_1C))) {
        local_C_28_we0 = ap_const_logic_1;
    } else {
        local_C_28_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_28_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_28_we1 = grp_compute_fu_4550_local_C_28_we1.read();
    } else {
        local_C_28_we1 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_29_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        local_C_29_address0 =  (sc_lv<7>) (zext_ln91_1_fu_5499_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()))) {
        local_C_29_address0 =  (sc_lv<7>) (zext_ln68_2_fu_5186_p1.read());
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_29_address0 = grp_compute_fu_4550_local_C_29_address0.read();
    } else {
        local_C_29_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_C_29_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read())))) {
        local_C_29_ce0 = ap_const_logic_1;
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_29_ce0 = grp_compute_fu_4550_local_C_29_ce0.read();
    } else {
        local_C_29_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_29_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_29_ce1 = grp_compute_fu_4550_local_C_29_ce1.read();
    } else {
        local_C_29_ce1 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_29_we0() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()) && 
         esl_seteq<1,7,7>(trunc_ln68_reg_6019_pp0_iter13_reg.read(), ap_const_lv7_1D))) {
        local_C_29_we0 = ap_const_logic_1;
    } else {
        local_C_29_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_29_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_29_we1 = grp_compute_fu_4550_local_C_29_we1.read();
    } else {
        local_C_29_we1 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_2_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        local_C_2_address0 =  (sc_lv<7>) (zext_ln91_1_fu_5499_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()))) {
        local_C_2_address0 =  (sc_lv<7>) (zext_ln68_2_fu_5186_p1.read());
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_2_address0 = grp_compute_fu_4550_local_C_2_address0.read();
    } else {
        local_C_2_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_C_2_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read())))) {
        local_C_2_ce0 = ap_const_logic_1;
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_2_ce0 = grp_compute_fu_4550_local_C_2_ce0.read();
    } else {
        local_C_2_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_2_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_2_ce1 = grp_compute_fu_4550_local_C_2_ce1.read();
    } else {
        local_C_2_ce1 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_2_we0() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()) && 
         esl_seteq<1,7,7>(trunc_ln68_reg_6019_pp0_iter13_reg.read(), ap_const_lv7_2))) {
        local_C_2_we0 = ap_const_logic_1;
    } else {
        local_C_2_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_2_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_2_we1 = grp_compute_fu_4550_local_C_2_we1.read();
    } else {
        local_C_2_we1 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_30_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        local_C_30_address0 =  (sc_lv<7>) (zext_ln91_1_fu_5499_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()))) {
        local_C_30_address0 =  (sc_lv<7>) (zext_ln68_2_fu_5186_p1.read());
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_30_address0 = grp_compute_fu_4550_local_C_30_address0.read();
    } else {
        local_C_30_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_C_30_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read())))) {
        local_C_30_ce0 = ap_const_logic_1;
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_30_ce0 = grp_compute_fu_4550_local_C_30_ce0.read();
    } else {
        local_C_30_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_30_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_30_ce1 = grp_compute_fu_4550_local_C_30_ce1.read();
    } else {
        local_C_30_ce1 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_30_we0() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()) && 
         esl_seteq<1,7,7>(trunc_ln68_reg_6019_pp0_iter13_reg.read(), ap_const_lv7_1E))) {
        local_C_30_we0 = ap_const_logic_1;
    } else {
        local_C_30_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_30_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_30_we1 = grp_compute_fu_4550_local_C_30_we1.read();
    } else {
        local_C_30_we1 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_31_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        local_C_31_address0 =  (sc_lv<7>) (zext_ln91_1_fu_5499_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()))) {
        local_C_31_address0 =  (sc_lv<7>) (zext_ln68_2_fu_5186_p1.read());
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_31_address0 = grp_compute_fu_4550_local_C_31_address0.read();
    } else {
        local_C_31_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_C_31_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read())))) {
        local_C_31_ce0 = ap_const_logic_1;
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_31_ce0 = grp_compute_fu_4550_local_C_31_ce0.read();
    } else {
        local_C_31_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_31_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_31_ce1 = grp_compute_fu_4550_local_C_31_ce1.read();
    } else {
        local_C_31_ce1 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_31_we0() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()) && 
         esl_seteq<1,7,7>(trunc_ln68_reg_6019_pp0_iter13_reg.read(), ap_const_lv7_1F))) {
        local_C_31_we0 = ap_const_logic_1;
    } else {
        local_C_31_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_31_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_31_we1 = grp_compute_fu_4550_local_C_31_we1.read();
    } else {
        local_C_31_we1 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_32_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        local_C_32_address0 =  (sc_lv<7>) (zext_ln91_1_fu_5499_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()))) {
        local_C_32_address0 =  (sc_lv<7>) (zext_ln68_2_fu_5186_p1.read());
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_32_address0 = grp_compute_fu_4550_local_C_32_address0.read();
    } else {
        local_C_32_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_C_32_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read())))) {
        local_C_32_ce0 = ap_const_logic_1;
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_32_ce0 = grp_compute_fu_4550_local_C_32_ce0.read();
    } else {
        local_C_32_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_32_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_32_ce1 = grp_compute_fu_4550_local_C_32_ce1.read();
    } else {
        local_C_32_ce1 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_32_we0() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()) && 
         esl_seteq<1,7,7>(trunc_ln68_reg_6019_pp0_iter13_reg.read(), ap_const_lv7_20))) {
        local_C_32_we0 = ap_const_logic_1;
    } else {
        local_C_32_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_32_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_32_we1 = grp_compute_fu_4550_local_C_32_we1.read();
    } else {
        local_C_32_we1 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_33_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        local_C_33_address0 =  (sc_lv<7>) (zext_ln91_1_fu_5499_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()))) {
        local_C_33_address0 =  (sc_lv<7>) (zext_ln68_2_fu_5186_p1.read());
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_33_address0 = grp_compute_fu_4550_local_C_33_address0.read();
    } else {
        local_C_33_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_C_33_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read())))) {
        local_C_33_ce0 = ap_const_logic_1;
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_33_ce0 = grp_compute_fu_4550_local_C_33_ce0.read();
    } else {
        local_C_33_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_33_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_33_ce1 = grp_compute_fu_4550_local_C_33_ce1.read();
    } else {
        local_C_33_ce1 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_33_we0() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()) && 
         esl_seteq<1,7,7>(trunc_ln68_reg_6019_pp0_iter13_reg.read(), ap_const_lv7_21))) {
        local_C_33_we0 = ap_const_logic_1;
    } else {
        local_C_33_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_33_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_33_we1 = grp_compute_fu_4550_local_C_33_we1.read();
    } else {
        local_C_33_we1 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_34_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        local_C_34_address0 =  (sc_lv<7>) (zext_ln91_1_fu_5499_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()))) {
        local_C_34_address0 =  (sc_lv<7>) (zext_ln68_2_fu_5186_p1.read());
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_34_address0 = grp_compute_fu_4550_local_C_34_address0.read();
    } else {
        local_C_34_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_C_34_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read())))) {
        local_C_34_ce0 = ap_const_logic_1;
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_34_ce0 = grp_compute_fu_4550_local_C_34_ce0.read();
    } else {
        local_C_34_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_34_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_34_ce1 = grp_compute_fu_4550_local_C_34_ce1.read();
    } else {
        local_C_34_ce1 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_34_we0() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()) && 
         esl_seteq<1,7,7>(trunc_ln68_reg_6019_pp0_iter13_reg.read(), ap_const_lv7_22))) {
        local_C_34_we0 = ap_const_logic_1;
    } else {
        local_C_34_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_34_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_34_we1 = grp_compute_fu_4550_local_C_34_we1.read();
    } else {
        local_C_34_we1 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_35_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        local_C_35_address0 =  (sc_lv<7>) (zext_ln91_1_fu_5499_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()))) {
        local_C_35_address0 =  (sc_lv<7>) (zext_ln68_2_fu_5186_p1.read());
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_35_address0 = grp_compute_fu_4550_local_C_35_address0.read();
    } else {
        local_C_35_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_C_35_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read())))) {
        local_C_35_ce0 = ap_const_logic_1;
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_35_ce0 = grp_compute_fu_4550_local_C_35_ce0.read();
    } else {
        local_C_35_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_35_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_35_ce1 = grp_compute_fu_4550_local_C_35_ce1.read();
    } else {
        local_C_35_ce1 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_35_we0() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()) && 
         esl_seteq<1,7,7>(trunc_ln68_reg_6019_pp0_iter13_reg.read(), ap_const_lv7_23))) {
        local_C_35_we0 = ap_const_logic_1;
    } else {
        local_C_35_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_35_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_35_we1 = grp_compute_fu_4550_local_C_35_we1.read();
    } else {
        local_C_35_we1 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_36_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        local_C_36_address0 =  (sc_lv<7>) (zext_ln91_1_fu_5499_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()))) {
        local_C_36_address0 =  (sc_lv<7>) (zext_ln68_2_fu_5186_p1.read());
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_36_address0 = grp_compute_fu_4550_local_C_36_address0.read();
    } else {
        local_C_36_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_C_36_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read())))) {
        local_C_36_ce0 = ap_const_logic_1;
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_36_ce0 = grp_compute_fu_4550_local_C_36_ce0.read();
    } else {
        local_C_36_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_36_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_36_ce1 = grp_compute_fu_4550_local_C_36_ce1.read();
    } else {
        local_C_36_ce1 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_36_we0() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()) && 
         esl_seteq<1,7,7>(trunc_ln68_reg_6019_pp0_iter13_reg.read(), ap_const_lv7_24))) {
        local_C_36_we0 = ap_const_logic_1;
    } else {
        local_C_36_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_36_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_36_we1 = grp_compute_fu_4550_local_C_36_we1.read();
    } else {
        local_C_36_we1 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_37_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        local_C_37_address0 =  (sc_lv<7>) (zext_ln91_1_fu_5499_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()))) {
        local_C_37_address0 =  (sc_lv<7>) (zext_ln68_2_fu_5186_p1.read());
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_37_address0 = grp_compute_fu_4550_local_C_37_address0.read();
    } else {
        local_C_37_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_C_37_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read())))) {
        local_C_37_ce0 = ap_const_logic_1;
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_37_ce0 = grp_compute_fu_4550_local_C_37_ce0.read();
    } else {
        local_C_37_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_37_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_37_ce1 = grp_compute_fu_4550_local_C_37_ce1.read();
    } else {
        local_C_37_ce1 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_37_we0() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()) && 
         esl_seteq<1,7,7>(trunc_ln68_reg_6019_pp0_iter13_reg.read(), ap_const_lv7_25))) {
        local_C_37_we0 = ap_const_logic_1;
    } else {
        local_C_37_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_37_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_37_we1 = grp_compute_fu_4550_local_C_37_we1.read();
    } else {
        local_C_37_we1 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_38_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        local_C_38_address0 =  (sc_lv<7>) (zext_ln91_1_fu_5499_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()))) {
        local_C_38_address0 =  (sc_lv<7>) (zext_ln68_2_fu_5186_p1.read());
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_38_address0 = grp_compute_fu_4550_local_C_38_address0.read();
    } else {
        local_C_38_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_C_38_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read())))) {
        local_C_38_ce0 = ap_const_logic_1;
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_38_ce0 = grp_compute_fu_4550_local_C_38_ce0.read();
    } else {
        local_C_38_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_38_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_38_ce1 = grp_compute_fu_4550_local_C_38_ce1.read();
    } else {
        local_C_38_ce1 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_38_we0() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()) && 
         esl_seteq<1,7,7>(trunc_ln68_reg_6019_pp0_iter13_reg.read(), ap_const_lv7_26))) {
        local_C_38_we0 = ap_const_logic_1;
    } else {
        local_C_38_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_38_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_38_we1 = grp_compute_fu_4550_local_C_38_we1.read();
    } else {
        local_C_38_we1 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_39_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        local_C_39_address0 =  (sc_lv<7>) (zext_ln91_1_fu_5499_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()))) {
        local_C_39_address0 =  (sc_lv<7>) (zext_ln68_2_fu_5186_p1.read());
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_39_address0 = grp_compute_fu_4550_local_C_39_address0.read();
    } else {
        local_C_39_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_C_39_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read())))) {
        local_C_39_ce0 = ap_const_logic_1;
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_39_ce0 = grp_compute_fu_4550_local_C_39_ce0.read();
    } else {
        local_C_39_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_39_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_39_ce1 = grp_compute_fu_4550_local_C_39_ce1.read();
    } else {
        local_C_39_ce1 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_39_we0() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()) && 
         esl_seteq<1,7,7>(trunc_ln68_reg_6019_pp0_iter13_reg.read(), ap_const_lv7_27))) {
        local_C_39_we0 = ap_const_logic_1;
    } else {
        local_C_39_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_39_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_39_we1 = grp_compute_fu_4550_local_C_39_we1.read();
    } else {
        local_C_39_we1 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_3_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        local_C_3_address0 =  (sc_lv<7>) (zext_ln91_1_fu_5499_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()))) {
        local_C_3_address0 =  (sc_lv<7>) (zext_ln68_2_fu_5186_p1.read());
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_3_address0 = grp_compute_fu_4550_local_C_3_address0.read();
    } else {
        local_C_3_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_C_3_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read())))) {
        local_C_3_ce0 = ap_const_logic_1;
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_3_ce0 = grp_compute_fu_4550_local_C_3_ce0.read();
    } else {
        local_C_3_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_3_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_3_ce1 = grp_compute_fu_4550_local_C_3_ce1.read();
    } else {
        local_C_3_ce1 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_3_we0() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()) && 
         esl_seteq<1,7,7>(trunc_ln68_reg_6019_pp0_iter13_reg.read(), ap_const_lv7_3))) {
        local_C_3_we0 = ap_const_logic_1;
    } else {
        local_C_3_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_3_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_3_we1 = grp_compute_fu_4550_local_C_3_we1.read();
    } else {
        local_C_3_we1 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_40_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        local_C_40_address0 =  (sc_lv<7>) (zext_ln91_1_fu_5499_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()))) {
        local_C_40_address0 =  (sc_lv<7>) (zext_ln68_2_fu_5186_p1.read());
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_40_address0 = grp_compute_fu_4550_local_C_40_address0.read();
    } else {
        local_C_40_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_C_40_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read())))) {
        local_C_40_ce0 = ap_const_logic_1;
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_40_ce0 = grp_compute_fu_4550_local_C_40_ce0.read();
    } else {
        local_C_40_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_40_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_40_ce1 = grp_compute_fu_4550_local_C_40_ce1.read();
    } else {
        local_C_40_ce1 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_40_we0() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()) && 
         esl_seteq<1,7,7>(trunc_ln68_reg_6019_pp0_iter13_reg.read(), ap_const_lv7_28))) {
        local_C_40_we0 = ap_const_logic_1;
    } else {
        local_C_40_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_40_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_40_we1 = grp_compute_fu_4550_local_C_40_we1.read();
    } else {
        local_C_40_we1 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_41_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        local_C_41_address0 =  (sc_lv<7>) (zext_ln91_1_fu_5499_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()))) {
        local_C_41_address0 =  (sc_lv<7>) (zext_ln68_2_fu_5186_p1.read());
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_41_address0 = grp_compute_fu_4550_local_C_41_address0.read();
    } else {
        local_C_41_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_C_41_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read())))) {
        local_C_41_ce0 = ap_const_logic_1;
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_41_ce0 = grp_compute_fu_4550_local_C_41_ce0.read();
    } else {
        local_C_41_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_41_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_41_ce1 = grp_compute_fu_4550_local_C_41_ce1.read();
    } else {
        local_C_41_ce1 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_41_we0() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()) && 
         esl_seteq<1,7,7>(trunc_ln68_reg_6019_pp0_iter13_reg.read(), ap_const_lv7_29))) {
        local_C_41_we0 = ap_const_logic_1;
    } else {
        local_C_41_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_41_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_41_we1 = grp_compute_fu_4550_local_C_41_we1.read();
    } else {
        local_C_41_we1 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_42_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        local_C_42_address0 =  (sc_lv<7>) (zext_ln91_1_fu_5499_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()))) {
        local_C_42_address0 =  (sc_lv<7>) (zext_ln68_2_fu_5186_p1.read());
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_42_address0 = grp_compute_fu_4550_local_C_42_address0.read();
    } else {
        local_C_42_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_C_42_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read())))) {
        local_C_42_ce0 = ap_const_logic_1;
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_42_ce0 = grp_compute_fu_4550_local_C_42_ce0.read();
    } else {
        local_C_42_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_42_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_42_ce1 = grp_compute_fu_4550_local_C_42_ce1.read();
    } else {
        local_C_42_ce1 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_42_we0() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()) && 
         esl_seteq<1,7,7>(trunc_ln68_reg_6019_pp0_iter13_reg.read(), ap_const_lv7_2A))) {
        local_C_42_we0 = ap_const_logic_1;
    } else {
        local_C_42_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_42_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_42_we1 = grp_compute_fu_4550_local_C_42_we1.read();
    } else {
        local_C_42_we1 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_43_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        local_C_43_address0 =  (sc_lv<7>) (zext_ln91_1_fu_5499_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()))) {
        local_C_43_address0 =  (sc_lv<7>) (zext_ln68_2_fu_5186_p1.read());
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_43_address0 = grp_compute_fu_4550_local_C_43_address0.read();
    } else {
        local_C_43_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_C_43_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read())))) {
        local_C_43_ce0 = ap_const_logic_1;
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_43_ce0 = grp_compute_fu_4550_local_C_43_ce0.read();
    } else {
        local_C_43_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_43_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_43_ce1 = grp_compute_fu_4550_local_C_43_ce1.read();
    } else {
        local_C_43_ce1 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_43_we0() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()) && 
         esl_seteq<1,7,7>(trunc_ln68_reg_6019_pp0_iter13_reg.read(), ap_const_lv7_2B))) {
        local_C_43_we0 = ap_const_logic_1;
    } else {
        local_C_43_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_43_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_43_we1 = grp_compute_fu_4550_local_C_43_we1.read();
    } else {
        local_C_43_we1 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_44_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        local_C_44_address0 =  (sc_lv<7>) (zext_ln91_1_fu_5499_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()))) {
        local_C_44_address0 =  (sc_lv<7>) (zext_ln68_2_fu_5186_p1.read());
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_44_address0 = grp_compute_fu_4550_local_C_44_address0.read();
    } else {
        local_C_44_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_C_44_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read())))) {
        local_C_44_ce0 = ap_const_logic_1;
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_44_ce0 = grp_compute_fu_4550_local_C_44_ce0.read();
    } else {
        local_C_44_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_44_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_44_ce1 = grp_compute_fu_4550_local_C_44_ce1.read();
    } else {
        local_C_44_ce1 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_44_we0() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()) && 
         esl_seteq<1,7,7>(trunc_ln68_reg_6019_pp0_iter13_reg.read(), ap_const_lv7_2C))) {
        local_C_44_we0 = ap_const_logic_1;
    } else {
        local_C_44_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_44_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_44_we1 = grp_compute_fu_4550_local_C_44_we1.read();
    } else {
        local_C_44_we1 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_45_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        local_C_45_address0 =  (sc_lv<7>) (zext_ln91_1_fu_5499_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()))) {
        local_C_45_address0 =  (sc_lv<7>) (zext_ln68_2_fu_5186_p1.read());
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_45_address0 = grp_compute_fu_4550_local_C_45_address0.read();
    } else {
        local_C_45_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_C_45_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read())))) {
        local_C_45_ce0 = ap_const_logic_1;
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_45_ce0 = grp_compute_fu_4550_local_C_45_ce0.read();
    } else {
        local_C_45_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_45_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_45_ce1 = grp_compute_fu_4550_local_C_45_ce1.read();
    } else {
        local_C_45_ce1 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_45_we0() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()) && 
         esl_seteq<1,7,7>(trunc_ln68_reg_6019_pp0_iter13_reg.read(), ap_const_lv7_2D))) {
        local_C_45_we0 = ap_const_logic_1;
    } else {
        local_C_45_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_45_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_45_we1 = grp_compute_fu_4550_local_C_45_we1.read();
    } else {
        local_C_45_we1 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_46_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        local_C_46_address0 =  (sc_lv<7>) (zext_ln91_1_fu_5499_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()))) {
        local_C_46_address0 =  (sc_lv<7>) (zext_ln68_2_fu_5186_p1.read());
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_46_address0 = grp_compute_fu_4550_local_C_46_address0.read();
    } else {
        local_C_46_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_C_46_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read())))) {
        local_C_46_ce0 = ap_const_logic_1;
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_46_ce0 = grp_compute_fu_4550_local_C_46_ce0.read();
    } else {
        local_C_46_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_46_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_46_ce1 = grp_compute_fu_4550_local_C_46_ce1.read();
    } else {
        local_C_46_ce1 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_46_we0() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()) && 
         esl_seteq<1,7,7>(trunc_ln68_reg_6019_pp0_iter13_reg.read(), ap_const_lv7_2E))) {
        local_C_46_we0 = ap_const_logic_1;
    } else {
        local_C_46_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_46_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_46_we1 = grp_compute_fu_4550_local_C_46_we1.read();
    } else {
        local_C_46_we1 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_47_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        local_C_47_address0 =  (sc_lv<7>) (zext_ln91_1_fu_5499_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()))) {
        local_C_47_address0 =  (sc_lv<7>) (zext_ln68_2_fu_5186_p1.read());
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_47_address0 = grp_compute_fu_4550_local_C_47_address0.read();
    } else {
        local_C_47_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_C_47_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read())))) {
        local_C_47_ce0 = ap_const_logic_1;
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_47_ce0 = grp_compute_fu_4550_local_C_47_ce0.read();
    } else {
        local_C_47_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_47_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_47_ce1 = grp_compute_fu_4550_local_C_47_ce1.read();
    } else {
        local_C_47_ce1 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_47_we0() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()) && 
         esl_seteq<1,7,7>(trunc_ln68_reg_6019_pp0_iter13_reg.read(), ap_const_lv7_2F))) {
        local_C_47_we0 = ap_const_logic_1;
    } else {
        local_C_47_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_47_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_47_we1 = grp_compute_fu_4550_local_C_47_we1.read();
    } else {
        local_C_47_we1 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_48_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        local_C_48_address0 =  (sc_lv<7>) (zext_ln91_1_fu_5499_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()))) {
        local_C_48_address0 =  (sc_lv<7>) (zext_ln68_2_fu_5186_p1.read());
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_48_address0 = grp_compute_fu_4550_local_C_48_address0.read();
    } else {
        local_C_48_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_C_48_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read())))) {
        local_C_48_ce0 = ap_const_logic_1;
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_48_ce0 = grp_compute_fu_4550_local_C_48_ce0.read();
    } else {
        local_C_48_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_48_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_48_ce1 = grp_compute_fu_4550_local_C_48_ce1.read();
    } else {
        local_C_48_ce1 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_48_we0() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()) && 
         esl_seteq<1,7,7>(trunc_ln68_reg_6019_pp0_iter13_reg.read(), ap_const_lv7_30))) {
        local_C_48_we0 = ap_const_logic_1;
    } else {
        local_C_48_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_48_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_48_we1 = grp_compute_fu_4550_local_C_48_we1.read();
    } else {
        local_C_48_we1 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_49_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        local_C_49_address0 =  (sc_lv<7>) (zext_ln91_1_fu_5499_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()))) {
        local_C_49_address0 =  (sc_lv<7>) (zext_ln68_2_fu_5186_p1.read());
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_49_address0 = grp_compute_fu_4550_local_C_49_address0.read();
    } else {
        local_C_49_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_C_49_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read())))) {
        local_C_49_ce0 = ap_const_logic_1;
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_49_ce0 = grp_compute_fu_4550_local_C_49_ce0.read();
    } else {
        local_C_49_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_49_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_49_ce1 = grp_compute_fu_4550_local_C_49_ce1.read();
    } else {
        local_C_49_ce1 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_49_we0() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()) && 
         esl_seteq<1,7,7>(trunc_ln68_reg_6019_pp0_iter13_reg.read(), ap_const_lv7_31))) {
        local_C_49_we0 = ap_const_logic_1;
    } else {
        local_C_49_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_49_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_49_we1 = grp_compute_fu_4550_local_C_49_we1.read();
    } else {
        local_C_49_we1 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_4_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        local_C_4_address0 =  (sc_lv<7>) (zext_ln91_1_fu_5499_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()))) {
        local_C_4_address0 =  (sc_lv<7>) (zext_ln68_2_fu_5186_p1.read());
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_4_address0 = grp_compute_fu_4550_local_C_4_address0.read();
    } else {
        local_C_4_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_C_4_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read())))) {
        local_C_4_ce0 = ap_const_logic_1;
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_4_ce0 = grp_compute_fu_4550_local_C_4_ce0.read();
    } else {
        local_C_4_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_4_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_4_ce1 = grp_compute_fu_4550_local_C_4_ce1.read();
    } else {
        local_C_4_ce1 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_4_we0() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()) && 
         esl_seteq<1,7,7>(trunc_ln68_reg_6019_pp0_iter13_reg.read(), ap_const_lv7_4))) {
        local_C_4_we0 = ap_const_logic_1;
    } else {
        local_C_4_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_4_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_4_we1 = grp_compute_fu_4550_local_C_4_we1.read();
    } else {
        local_C_4_we1 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_50_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        local_C_50_address0 =  (sc_lv<7>) (zext_ln91_1_fu_5499_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()))) {
        local_C_50_address0 =  (sc_lv<7>) (zext_ln68_2_fu_5186_p1.read());
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_50_address0 = grp_compute_fu_4550_local_C_50_address0.read();
    } else {
        local_C_50_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_C_50_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read())))) {
        local_C_50_ce0 = ap_const_logic_1;
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_50_ce0 = grp_compute_fu_4550_local_C_50_ce0.read();
    } else {
        local_C_50_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_50_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_50_ce1 = grp_compute_fu_4550_local_C_50_ce1.read();
    } else {
        local_C_50_ce1 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_50_we0() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()) && 
         esl_seteq<1,7,7>(trunc_ln68_reg_6019_pp0_iter13_reg.read(), ap_const_lv7_32))) {
        local_C_50_we0 = ap_const_logic_1;
    } else {
        local_C_50_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_50_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_50_we1 = grp_compute_fu_4550_local_C_50_we1.read();
    } else {
        local_C_50_we1 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_51_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        local_C_51_address0 =  (sc_lv<7>) (zext_ln91_1_fu_5499_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()))) {
        local_C_51_address0 =  (sc_lv<7>) (zext_ln68_2_fu_5186_p1.read());
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_51_address0 = grp_compute_fu_4550_local_C_51_address0.read();
    } else {
        local_C_51_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_C_51_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read())))) {
        local_C_51_ce0 = ap_const_logic_1;
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_51_ce0 = grp_compute_fu_4550_local_C_51_ce0.read();
    } else {
        local_C_51_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_51_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_51_ce1 = grp_compute_fu_4550_local_C_51_ce1.read();
    } else {
        local_C_51_ce1 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_51_we0() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()) && 
         esl_seteq<1,7,7>(trunc_ln68_reg_6019_pp0_iter13_reg.read(), ap_const_lv7_33))) {
        local_C_51_we0 = ap_const_logic_1;
    } else {
        local_C_51_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_51_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_51_we1 = grp_compute_fu_4550_local_C_51_we1.read();
    } else {
        local_C_51_we1 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_52_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        local_C_52_address0 =  (sc_lv<7>) (zext_ln91_1_fu_5499_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()))) {
        local_C_52_address0 =  (sc_lv<7>) (zext_ln68_2_fu_5186_p1.read());
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_52_address0 = grp_compute_fu_4550_local_C_52_address0.read();
    } else {
        local_C_52_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_C_52_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read())))) {
        local_C_52_ce0 = ap_const_logic_1;
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_52_ce0 = grp_compute_fu_4550_local_C_52_ce0.read();
    } else {
        local_C_52_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_52_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_52_ce1 = grp_compute_fu_4550_local_C_52_ce1.read();
    } else {
        local_C_52_ce1 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_52_we0() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()) && 
         esl_seteq<1,7,7>(trunc_ln68_reg_6019_pp0_iter13_reg.read(), ap_const_lv7_34))) {
        local_C_52_we0 = ap_const_logic_1;
    } else {
        local_C_52_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_52_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_52_we1 = grp_compute_fu_4550_local_C_52_we1.read();
    } else {
        local_C_52_we1 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_53_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        local_C_53_address0 =  (sc_lv<7>) (zext_ln91_1_fu_5499_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()))) {
        local_C_53_address0 =  (sc_lv<7>) (zext_ln68_2_fu_5186_p1.read());
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_53_address0 = grp_compute_fu_4550_local_C_53_address0.read();
    } else {
        local_C_53_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_C_53_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read())))) {
        local_C_53_ce0 = ap_const_logic_1;
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_53_ce0 = grp_compute_fu_4550_local_C_53_ce0.read();
    } else {
        local_C_53_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_53_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_53_ce1 = grp_compute_fu_4550_local_C_53_ce1.read();
    } else {
        local_C_53_ce1 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_53_we0() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()) && 
         esl_seteq<1,7,7>(trunc_ln68_reg_6019_pp0_iter13_reg.read(), ap_const_lv7_35))) {
        local_C_53_we0 = ap_const_logic_1;
    } else {
        local_C_53_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_53_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_53_we1 = grp_compute_fu_4550_local_C_53_we1.read();
    } else {
        local_C_53_we1 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_54_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        local_C_54_address0 =  (sc_lv<7>) (zext_ln91_1_fu_5499_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()))) {
        local_C_54_address0 =  (sc_lv<7>) (zext_ln68_2_fu_5186_p1.read());
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_54_address0 = grp_compute_fu_4550_local_C_54_address0.read();
    } else {
        local_C_54_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_C_54_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read())))) {
        local_C_54_ce0 = ap_const_logic_1;
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_54_ce0 = grp_compute_fu_4550_local_C_54_ce0.read();
    } else {
        local_C_54_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_54_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_54_ce1 = grp_compute_fu_4550_local_C_54_ce1.read();
    } else {
        local_C_54_ce1 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_54_we0() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()) && 
         esl_seteq<1,7,7>(trunc_ln68_reg_6019_pp0_iter13_reg.read(), ap_const_lv7_36))) {
        local_C_54_we0 = ap_const_logic_1;
    } else {
        local_C_54_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_54_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_54_we1 = grp_compute_fu_4550_local_C_54_we1.read();
    } else {
        local_C_54_we1 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_55_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        local_C_55_address0 =  (sc_lv<7>) (zext_ln91_1_fu_5499_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()))) {
        local_C_55_address0 =  (sc_lv<7>) (zext_ln68_2_fu_5186_p1.read());
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_55_address0 = grp_compute_fu_4550_local_C_55_address0.read();
    } else {
        local_C_55_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_C_55_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read())))) {
        local_C_55_ce0 = ap_const_logic_1;
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_55_ce0 = grp_compute_fu_4550_local_C_55_ce0.read();
    } else {
        local_C_55_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_55_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_55_ce1 = grp_compute_fu_4550_local_C_55_ce1.read();
    } else {
        local_C_55_ce1 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_55_we0() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()) && 
         esl_seteq<1,7,7>(trunc_ln68_reg_6019_pp0_iter13_reg.read(), ap_const_lv7_37))) {
        local_C_55_we0 = ap_const_logic_1;
    } else {
        local_C_55_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_55_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_55_we1 = grp_compute_fu_4550_local_C_55_we1.read();
    } else {
        local_C_55_we1 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_56_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        local_C_56_address0 =  (sc_lv<7>) (zext_ln91_1_fu_5499_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()))) {
        local_C_56_address0 =  (sc_lv<7>) (zext_ln68_2_fu_5186_p1.read());
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_56_address0 = grp_compute_fu_4550_local_C_56_address0.read();
    } else {
        local_C_56_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_C_56_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read())))) {
        local_C_56_ce0 = ap_const_logic_1;
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_56_ce0 = grp_compute_fu_4550_local_C_56_ce0.read();
    } else {
        local_C_56_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_56_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_56_ce1 = grp_compute_fu_4550_local_C_56_ce1.read();
    } else {
        local_C_56_ce1 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_56_we0() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()) && 
         esl_seteq<1,7,7>(trunc_ln68_reg_6019_pp0_iter13_reg.read(), ap_const_lv7_38))) {
        local_C_56_we0 = ap_const_logic_1;
    } else {
        local_C_56_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_56_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_56_we1 = grp_compute_fu_4550_local_C_56_we1.read();
    } else {
        local_C_56_we1 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_57_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        local_C_57_address0 =  (sc_lv<7>) (zext_ln91_1_fu_5499_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()))) {
        local_C_57_address0 =  (sc_lv<7>) (zext_ln68_2_fu_5186_p1.read());
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_57_address0 = grp_compute_fu_4550_local_C_57_address0.read();
    } else {
        local_C_57_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_C_57_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read())))) {
        local_C_57_ce0 = ap_const_logic_1;
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_57_ce0 = grp_compute_fu_4550_local_C_57_ce0.read();
    } else {
        local_C_57_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_57_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_57_ce1 = grp_compute_fu_4550_local_C_57_ce1.read();
    } else {
        local_C_57_ce1 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_57_we0() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()) && 
         esl_seteq<1,7,7>(trunc_ln68_reg_6019_pp0_iter13_reg.read(), ap_const_lv7_39))) {
        local_C_57_we0 = ap_const_logic_1;
    } else {
        local_C_57_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_57_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_57_we1 = grp_compute_fu_4550_local_C_57_we1.read();
    } else {
        local_C_57_we1 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_58_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        local_C_58_address0 =  (sc_lv<7>) (zext_ln91_1_fu_5499_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()))) {
        local_C_58_address0 =  (sc_lv<7>) (zext_ln68_2_fu_5186_p1.read());
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_58_address0 = grp_compute_fu_4550_local_C_58_address0.read();
    } else {
        local_C_58_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_C_58_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read())))) {
        local_C_58_ce0 = ap_const_logic_1;
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_58_ce0 = grp_compute_fu_4550_local_C_58_ce0.read();
    } else {
        local_C_58_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_58_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_58_ce1 = grp_compute_fu_4550_local_C_58_ce1.read();
    } else {
        local_C_58_ce1 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_58_we0() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()) && 
         esl_seteq<1,7,7>(trunc_ln68_reg_6019_pp0_iter13_reg.read(), ap_const_lv7_3A))) {
        local_C_58_we0 = ap_const_logic_1;
    } else {
        local_C_58_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_58_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_58_we1 = grp_compute_fu_4550_local_C_58_we1.read();
    } else {
        local_C_58_we1 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_59_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        local_C_59_address0 =  (sc_lv<7>) (zext_ln91_1_fu_5499_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()))) {
        local_C_59_address0 =  (sc_lv<7>) (zext_ln68_2_fu_5186_p1.read());
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_59_address0 = grp_compute_fu_4550_local_C_59_address0.read();
    } else {
        local_C_59_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_C_59_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read())))) {
        local_C_59_ce0 = ap_const_logic_1;
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_59_ce0 = grp_compute_fu_4550_local_C_59_ce0.read();
    } else {
        local_C_59_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_59_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_59_ce1 = grp_compute_fu_4550_local_C_59_ce1.read();
    } else {
        local_C_59_ce1 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_59_we0() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()) && 
         esl_seteq<1,7,7>(trunc_ln68_reg_6019_pp0_iter13_reg.read(), ap_const_lv7_3B))) {
        local_C_59_we0 = ap_const_logic_1;
    } else {
        local_C_59_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_59_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_59_we1 = grp_compute_fu_4550_local_C_59_we1.read();
    } else {
        local_C_59_we1 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_5_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        local_C_5_address0 =  (sc_lv<7>) (zext_ln91_1_fu_5499_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()))) {
        local_C_5_address0 =  (sc_lv<7>) (zext_ln68_2_fu_5186_p1.read());
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_5_address0 = grp_compute_fu_4550_local_C_5_address0.read();
    } else {
        local_C_5_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_C_5_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read())))) {
        local_C_5_ce0 = ap_const_logic_1;
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_5_ce0 = grp_compute_fu_4550_local_C_5_ce0.read();
    } else {
        local_C_5_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_5_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_5_ce1 = grp_compute_fu_4550_local_C_5_ce1.read();
    } else {
        local_C_5_ce1 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_5_we0() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()) && 
         esl_seteq<1,7,7>(trunc_ln68_reg_6019_pp0_iter13_reg.read(), ap_const_lv7_5))) {
        local_C_5_we0 = ap_const_logic_1;
    } else {
        local_C_5_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_5_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_5_we1 = grp_compute_fu_4550_local_C_5_we1.read();
    } else {
        local_C_5_we1 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_60_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        local_C_60_address0 =  (sc_lv<7>) (zext_ln91_1_fu_5499_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()))) {
        local_C_60_address0 =  (sc_lv<7>) (zext_ln68_2_fu_5186_p1.read());
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_60_address0 = grp_compute_fu_4550_local_C_60_address0.read();
    } else {
        local_C_60_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_C_60_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read())))) {
        local_C_60_ce0 = ap_const_logic_1;
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_60_ce0 = grp_compute_fu_4550_local_C_60_ce0.read();
    } else {
        local_C_60_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_60_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_60_ce1 = grp_compute_fu_4550_local_C_60_ce1.read();
    } else {
        local_C_60_ce1 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_60_we0() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()) && 
         esl_seteq<1,7,7>(trunc_ln68_reg_6019_pp0_iter13_reg.read(), ap_const_lv7_3C))) {
        local_C_60_we0 = ap_const_logic_1;
    } else {
        local_C_60_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_60_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_60_we1 = grp_compute_fu_4550_local_C_60_we1.read();
    } else {
        local_C_60_we1 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_61_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        local_C_61_address0 =  (sc_lv<7>) (zext_ln91_1_fu_5499_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()))) {
        local_C_61_address0 =  (sc_lv<7>) (zext_ln68_2_fu_5186_p1.read());
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_61_address0 = grp_compute_fu_4550_local_C_61_address0.read();
    } else {
        local_C_61_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_C_61_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read())))) {
        local_C_61_ce0 = ap_const_logic_1;
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_61_ce0 = grp_compute_fu_4550_local_C_61_ce0.read();
    } else {
        local_C_61_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_61_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_61_ce1 = grp_compute_fu_4550_local_C_61_ce1.read();
    } else {
        local_C_61_ce1 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_61_we0() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()) && 
         esl_seteq<1,7,7>(trunc_ln68_reg_6019_pp0_iter13_reg.read(), ap_const_lv7_3D))) {
        local_C_61_we0 = ap_const_logic_1;
    } else {
        local_C_61_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_61_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_61_we1 = grp_compute_fu_4550_local_C_61_we1.read();
    } else {
        local_C_61_we1 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_62_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        local_C_62_address0 =  (sc_lv<7>) (zext_ln91_1_fu_5499_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()))) {
        local_C_62_address0 =  (sc_lv<7>) (zext_ln68_2_fu_5186_p1.read());
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_62_address0 = grp_compute_fu_4550_local_C_62_address0.read();
    } else {
        local_C_62_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_C_62_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read())))) {
        local_C_62_ce0 = ap_const_logic_1;
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_62_ce0 = grp_compute_fu_4550_local_C_62_ce0.read();
    } else {
        local_C_62_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_62_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_62_ce1 = grp_compute_fu_4550_local_C_62_ce1.read();
    } else {
        local_C_62_ce1 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_62_we0() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()) && 
         esl_seteq<1,7,7>(trunc_ln68_reg_6019_pp0_iter13_reg.read(), ap_const_lv7_3E))) {
        local_C_62_we0 = ap_const_logic_1;
    } else {
        local_C_62_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_62_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_62_we1 = grp_compute_fu_4550_local_C_62_we1.read();
    } else {
        local_C_62_we1 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_63_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        local_C_63_address0 =  (sc_lv<7>) (zext_ln91_1_fu_5499_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()))) {
        local_C_63_address0 =  (sc_lv<7>) (zext_ln68_2_fu_5186_p1.read());
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_63_address0 = grp_compute_fu_4550_local_C_63_address0.read();
    } else {
        local_C_63_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_C_63_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read())))) {
        local_C_63_ce0 = ap_const_logic_1;
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_63_ce0 = grp_compute_fu_4550_local_C_63_ce0.read();
    } else {
        local_C_63_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_63_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_63_ce1 = grp_compute_fu_4550_local_C_63_ce1.read();
    } else {
        local_C_63_ce1 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_63_we0() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()) && 
         esl_seteq<1,7,7>(trunc_ln68_reg_6019_pp0_iter13_reg.read(), ap_const_lv7_3F))) {
        local_C_63_we0 = ap_const_logic_1;
    } else {
        local_C_63_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_63_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_63_we1 = grp_compute_fu_4550_local_C_63_we1.read();
    } else {
        local_C_63_we1 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_64_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        local_C_64_address0 =  (sc_lv<7>) (zext_ln91_1_fu_5499_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()))) {
        local_C_64_address0 =  (sc_lv<7>) (zext_ln68_2_fu_5186_p1.read());
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_64_address0 = grp_compute_fu_4550_local_C_64_address0.read();
    } else {
        local_C_64_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_C_64_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read())))) {
        local_C_64_ce0 = ap_const_logic_1;
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_64_ce0 = grp_compute_fu_4550_local_C_64_ce0.read();
    } else {
        local_C_64_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_64_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_64_ce1 = grp_compute_fu_4550_local_C_64_ce1.read();
    } else {
        local_C_64_ce1 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_64_we0() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()) && 
         esl_seteq<1,7,7>(trunc_ln68_reg_6019_pp0_iter13_reg.read(), ap_const_lv7_40))) {
        local_C_64_we0 = ap_const_logic_1;
    } else {
        local_C_64_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_64_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_64_we1 = grp_compute_fu_4550_local_C_64_we1.read();
    } else {
        local_C_64_we1 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_65_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        local_C_65_address0 =  (sc_lv<7>) (zext_ln91_1_fu_5499_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()))) {
        local_C_65_address0 =  (sc_lv<7>) (zext_ln68_2_fu_5186_p1.read());
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_65_address0 = grp_compute_fu_4550_local_C_65_address0.read();
    } else {
        local_C_65_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_C_65_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read())))) {
        local_C_65_ce0 = ap_const_logic_1;
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_65_ce0 = grp_compute_fu_4550_local_C_65_ce0.read();
    } else {
        local_C_65_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_65_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_65_ce1 = grp_compute_fu_4550_local_C_65_ce1.read();
    } else {
        local_C_65_ce1 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_65_we0() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()) && 
         esl_seteq<1,7,7>(trunc_ln68_reg_6019_pp0_iter13_reg.read(), ap_const_lv7_41))) {
        local_C_65_we0 = ap_const_logic_1;
    } else {
        local_C_65_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_65_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_65_we1 = grp_compute_fu_4550_local_C_65_we1.read();
    } else {
        local_C_65_we1 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_66_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        local_C_66_address0 =  (sc_lv<7>) (zext_ln91_1_fu_5499_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()))) {
        local_C_66_address0 =  (sc_lv<7>) (zext_ln68_2_fu_5186_p1.read());
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_66_address0 = grp_compute_fu_4550_local_C_66_address0.read();
    } else {
        local_C_66_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_C_66_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read())))) {
        local_C_66_ce0 = ap_const_logic_1;
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_66_ce0 = grp_compute_fu_4550_local_C_66_ce0.read();
    } else {
        local_C_66_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_66_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_66_ce1 = grp_compute_fu_4550_local_C_66_ce1.read();
    } else {
        local_C_66_ce1 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_66_we0() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()) && 
         esl_seteq<1,7,7>(trunc_ln68_reg_6019_pp0_iter13_reg.read(), ap_const_lv7_42))) {
        local_C_66_we0 = ap_const_logic_1;
    } else {
        local_C_66_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_66_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_66_we1 = grp_compute_fu_4550_local_C_66_we1.read();
    } else {
        local_C_66_we1 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_67_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        local_C_67_address0 =  (sc_lv<7>) (zext_ln91_1_fu_5499_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()))) {
        local_C_67_address0 =  (sc_lv<7>) (zext_ln68_2_fu_5186_p1.read());
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_67_address0 = grp_compute_fu_4550_local_C_67_address0.read();
    } else {
        local_C_67_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_C_67_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read())))) {
        local_C_67_ce0 = ap_const_logic_1;
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_67_ce0 = grp_compute_fu_4550_local_C_67_ce0.read();
    } else {
        local_C_67_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_67_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_67_ce1 = grp_compute_fu_4550_local_C_67_ce1.read();
    } else {
        local_C_67_ce1 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_67_we0() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()) && 
         esl_seteq<1,7,7>(trunc_ln68_reg_6019_pp0_iter13_reg.read(), ap_const_lv7_43))) {
        local_C_67_we0 = ap_const_logic_1;
    } else {
        local_C_67_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_67_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_67_we1 = grp_compute_fu_4550_local_C_67_we1.read();
    } else {
        local_C_67_we1 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_68_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        local_C_68_address0 =  (sc_lv<7>) (zext_ln91_1_fu_5499_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()))) {
        local_C_68_address0 =  (sc_lv<7>) (zext_ln68_2_fu_5186_p1.read());
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_68_address0 = grp_compute_fu_4550_local_C_68_address0.read();
    } else {
        local_C_68_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_C_68_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read())))) {
        local_C_68_ce0 = ap_const_logic_1;
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_68_ce0 = grp_compute_fu_4550_local_C_68_ce0.read();
    } else {
        local_C_68_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_68_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_68_ce1 = grp_compute_fu_4550_local_C_68_ce1.read();
    } else {
        local_C_68_ce1 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_68_we0() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()) && 
         esl_seteq<1,7,7>(trunc_ln68_reg_6019_pp0_iter13_reg.read(), ap_const_lv7_44))) {
        local_C_68_we0 = ap_const_logic_1;
    } else {
        local_C_68_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_68_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_68_we1 = grp_compute_fu_4550_local_C_68_we1.read();
    } else {
        local_C_68_we1 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_69_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        local_C_69_address0 =  (sc_lv<7>) (zext_ln91_1_fu_5499_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()))) {
        local_C_69_address0 =  (sc_lv<7>) (zext_ln68_2_fu_5186_p1.read());
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_69_address0 = grp_compute_fu_4550_local_C_69_address0.read();
    } else {
        local_C_69_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_C_69_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read())))) {
        local_C_69_ce0 = ap_const_logic_1;
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_69_ce0 = grp_compute_fu_4550_local_C_69_ce0.read();
    } else {
        local_C_69_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_69_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_69_ce1 = grp_compute_fu_4550_local_C_69_ce1.read();
    } else {
        local_C_69_ce1 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_69_we0() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()) && 
         esl_seteq<1,7,7>(trunc_ln68_reg_6019_pp0_iter13_reg.read(), ap_const_lv7_45))) {
        local_C_69_we0 = ap_const_logic_1;
    } else {
        local_C_69_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_69_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_69_we1 = grp_compute_fu_4550_local_C_69_we1.read();
    } else {
        local_C_69_we1 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_6_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        local_C_6_address0 =  (sc_lv<7>) (zext_ln91_1_fu_5499_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()))) {
        local_C_6_address0 =  (sc_lv<7>) (zext_ln68_2_fu_5186_p1.read());
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_6_address0 = grp_compute_fu_4550_local_C_6_address0.read();
    } else {
        local_C_6_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_C_6_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read())))) {
        local_C_6_ce0 = ap_const_logic_1;
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_6_ce0 = grp_compute_fu_4550_local_C_6_ce0.read();
    } else {
        local_C_6_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_6_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_6_ce1 = grp_compute_fu_4550_local_C_6_ce1.read();
    } else {
        local_C_6_ce1 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_6_we0() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()) && 
         esl_seteq<1,7,7>(trunc_ln68_reg_6019_pp0_iter13_reg.read(), ap_const_lv7_6))) {
        local_C_6_we0 = ap_const_logic_1;
    } else {
        local_C_6_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_6_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_6_we1 = grp_compute_fu_4550_local_C_6_we1.read();
    } else {
        local_C_6_we1 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_70_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        local_C_70_address0 =  (sc_lv<7>) (zext_ln91_1_fu_5499_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()))) {
        local_C_70_address0 =  (sc_lv<7>) (zext_ln68_2_fu_5186_p1.read());
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_70_address0 = grp_compute_fu_4550_local_C_70_address0.read();
    } else {
        local_C_70_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_C_70_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read())))) {
        local_C_70_ce0 = ap_const_logic_1;
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_70_ce0 = grp_compute_fu_4550_local_C_70_ce0.read();
    } else {
        local_C_70_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_70_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_70_ce1 = grp_compute_fu_4550_local_C_70_ce1.read();
    } else {
        local_C_70_ce1 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_70_we0() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()) && 
         esl_seteq<1,7,7>(trunc_ln68_reg_6019_pp0_iter13_reg.read(), ap_const_lv7_46))) {
        local_C_70_we0 = ap_const_logic_1;
    } else {
        local_C_70_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_70_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_70_we1 = grp_compute_fu_4550_local_C_70_we1.read();
    } else {
        local_C_70_we1 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_71_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        local_C_71_address0 =  (sc_lv<7>) (zext_ln91_1_fu_5499_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()))) {
        local_C_71_address0 =  (sc_lv<7>) (zext_ln68_2_fu_5186_p1.read());
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_71_address0 = grp_compute_fu_4550_local_C_71_address0.read();
    } else {
        local_C_71_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_C_71_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read())))) {
        local_C_71_ce0 = ap_const_logic_1;
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_71_ce0 = grp_compute_fu_4550_local_C_71_ce0.read();
    } else {
        local_C_71_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_71_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_71_ce1 = grp_compute_fu_4550_local_C_71_ce1.read();
    } else {
        local_C_71_ce1 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_71_we0() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()) && 
         esl_seteq<1,7,7>(trunc_ln68_reg_6019_pp0_iter13_reg.read(), ap_const_lv7_47))) {
        local_C_71_we0 = ap_const_logic_1;
    } else {
        local_C_71_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_71_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_71_we1 = grp_compute_fu_4550_local_C_71_we1.read();
    } else {
        local_C_71_we1 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_72_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        local_C_72_address0 =  (sc_lv<7>) (zext_ln91_1_fu_5499_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()))) {
        local_C_72_address0 =  (sc_lv<7>) (zext_ln68_2_fu_5186_p1.read());
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_72_address0 = grp_compute_fu_4550_local_C_72_address0.read();
    } else {
        local_C_72_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_C_72_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read())))) {
        local_C_72_ce0 = ap_const_logic_1;
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_72_ce0 = grp_compute_fu_4550_local_C_72_ce0.read();
    } else {
        local_C_72_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_72_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_72_ce1 = grp_compute_fu_4550_local_C_72_ce1.read();
    } else {
        local_C_72_ce1 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_72_we0() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()) && 
         esl_seteq<1,7,7>(trunc_ln68_reg_6019_pp0_iter13_reg.read(), ap_const_lv7_48))) {
        local_C_72_we0 = ap_const_logic_1;
    } else {
        local_C_72_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_72_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_72_we1 = grp_compute_fu_4550_local_C_72_we1.read();
    } else {
        local_C_72_we1 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_73_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        local_C_73_address0 =  (sc_lv<7>) (zext_ln91_1_fu_5499_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()))) {
        local_C_73_address0 =  (sc_lv<7>) (zext_ln68_2_fu_5186_p1.read());
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_73_address0 = grp_compute_fu_4550_local_C_73_address0.read();
    } else {
        local_C_73_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_C_73_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read())))) {
        local_C_73_ce0 = ap_const_logic_1;
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_73_ce0 = grp_compute_fu_4550_local_C_73_ce0.read();
    } else {
        local_C_73_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_73_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_73_ce1 = grp_compute_fu_4550_local_C_73_ce1.read();
    } else {
        local_C_73_ce1 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_73_we0() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()) && 
         esl_seteq<1,7,7>(trunc_ln68_reg_6019_pp0_iter13_reg.read(), ap_const_lv7_49))) {
        local_C_73_we0 = ap_const_logic_1;
    } else {
        local_C_73_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_73_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_73_we1 = grp_compute_fu_4550_local_C_73_we1.read();
    } else {
        local_C_73_we1 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_74_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        local_C_74_address0 =  (sc_lv<7>) (zext_ln91_1_fu_5499_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()))) {
        local_C_74_address0 =  (sc_lv<7>) (zext_ln68_2_fu_5186_p1.read());
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_74_address0 = grp_compute_fu_4550_local_C_74_address0.read();
    } else {
        local_C_74_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_C_74_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read())))) {
        local_C_74_ce0 = ap_const_logic_1;
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_74_ce0 = grp_compute_fu_4550_local_C_74_ce0.read();
    } else {
        local_C_74_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_74_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_74_ce1 = grp_compute_fu_4550_local_C_74_ce1.read();
    } else {
        local_C_74_ce1 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_74_we0() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()) && 
         esl_seteq<1,7,7>(trunc_ln68_reg_6019_pp0_iter13_reg.read(), ap_const_lv7_4A))) {
        local_C_74_we0 = ap_const_logic_1;
    } else {
        local_C_74_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_74_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_74_we1 = grp_compute_fu_4550_local_C_74_we1.read();
    } else {
        local_C_74_we1 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_75_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        local_C_75_address0 =  (sc_lv<7>) (zext_ln91_1_fu_5499_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()))) {
        local_C_75_address0 =  (sc_lv<7>) (zext_ln68_2_fu_5186_p1.read());
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_75_address0 = grp_compute_fu_4550_local_C_75_address0.read();
    } else {
        local_C_75_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_C_75_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read())))) {
        local_C_75_ce0 = ap_const_logic_1;
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_75_ce0 = grp_compute_fu_4550_local_C_75_ce0.read();
    } else {
        local_C_75_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_75_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_75_ce1 = grp_compute_fu_4550_local_C_75_ce1.read();
    } else {
        local_C_75_ce1 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_75_we0() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()) && 
         esl_seteq<1,7,7>(trunc_ln68_reg_6019_pp0_iter13_reg.read(), ap_const_lv7_4B))) {
        local_C_75_we0 = ap_const_logic_1;
    } else {
        local_C_75_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_75_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_75_we1 = grp_compute_fu_4550_local_C_75_we1.read();
    } else {
        local_C_75_we1 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_76_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        local_C_76_address0 =  (sc_lv<7>) (zext_ln91_1_fu_5499_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()))) {
        local_C_76_address0 =  (sc_lv<7>) (zext_ln68_2_fu_5186_p1.read());
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_76_address0 = grp_compute_fu_4550_local_C_76_address0.read();
    } else {
        local_C_76_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_C_76_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read())))) {
        local_C_76_ce0 = ap_const_logic_1;
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_76_ce0 = grp_compute_fu_4550_local_C_76_ce0.read();
    } else {
        local_C_76_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_76_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_76_ce1 = grp_compute_fu_4550_local_C_76_ce1.read();
    } else {
        local_C_76_ce1 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_76_we0() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()) && 
         esl_seteq<1,7,7>(trunc_ln68_reg_6019_pp0_iter13_reg.read(), ap_const_lv7_4C))) {
        local_C_76_we0 = ap_const_logic_1;
    } else {
        local_C_76_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_76_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_76_we1 = grp_compute_fu_4550_local_C_76_we1.read();
    } else {
        local_C_76_we1 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_77_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        local_C_77_address0 =  (sc_lv<7>) (zext_ln91_1_fu_5499_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()))) {
        local_C_77_address0 =  (sc_lv<7>) (zext_ln68_2_fu_5186_p1.read());
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_77_address0 = grp_compute_fu_4550_local_C_77_address0.read();
    } else {
        local_C_77_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_C_77_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read())))) {
        local_C_77_ce0 = ap_const_logic_1;
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_77_ce0 = grp_compute_fu_4550_local_C_77_ce0.read();
    } else {
        local_C_77_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_77_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_77_ce1 = grp_compute_fu_4550_local_C_77_ce1.read();
    } else {
        local_C_77_ce1 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_77_we0() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()) && 
         esl_seteq<1,7,7>(trunc_ln68_reg_6019_pp0_iter13_reg.read(), ap_const_lv7_4D))) {
        local_C_77_we0 = ap_const_logic_1;
    } else {
        local_C_77_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_77_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_77_we1 = grp_compute_fu_4550_local_C_77_we1.read();
    } else {
        local_C_77_we1 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_78_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        local_C_78_address0 =  (sc_lv<7>) (zext_ln91_1_fu_5499_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()))) {
        local_C_78_address0 =  (sc_lv<7>) (zext_ln68_2_fu_5186_p1.read());
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_78_address0 = grp_compute_fu_4550_local_C_78_address0.read();
    } else {
        local_C_78_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_C_78_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read())))) {
        local_C_78_ce0 = ap_const_logic_1;
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_78_ce0 = grp_compute_fu_4550_local_C_78_ce0.read();
    } else {
        local_C_78_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_78_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_78_ce1 = grp_compute_fu_4550_local_C_78_ce1.read();
    } else {
        local_C_78_ce1 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_78_we0() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()) && 
         esl_seteq<1,7,7>(trunc_ln68_reg_6019_pp0_iter13_reg.read(), ap_const_lv7_4E))) {
        local_C_78_we0 = ap_const_logic_1;
    } else {
        local_C_78_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_78_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_78_we1 = grp_compute_fu_4550_local_C_78_we1.read();
    } else {
        local_C_78_we1 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_79_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        local_C_79_address0 =  (sc_lv<7>) (zext_ln91_1_fu_5499_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()))) {
        local_C_79_address0 =  (sc_lv<7>) (zext_ln68_2_fu_5186_p1.read());
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_79_address0 = grp_compute_fu_4550_local_C_79_address0.read();
    } else {
        local_C_79_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_C_79_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read())))) {
        local_C_79_ce0 = ap_const_logic_1;
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_79_ce0 = grp_compute_fu_4550_local_C_79_ce0.read();
    } else {
        local_C_79_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_79_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_79_ce1 = grp_compute_fu_4550_local_C_79_ce1.read();
    } else {
        local_C_79_ce1 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_79_we0() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()) && 
         esl_seteq<1,7,7>(trunc_ln68_reg_6019_pp0_iter13_reg.read(), ap_const_lv7_4F))) {
        local_C_79_we0 = ap_const_logic_1;
    } else {
        local_C_79_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_79_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_79_we1 = grp_compute_fu_4550_local_C_79_we1.read();
    } else {
        local_C_79_we1 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_7_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        local_C_7_address0 =  (sc_lv<7>) (zext_ln91_1_fu_5499_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()))) {
        local_C_7_address0 =  (sc_lv<7>) (zext_ln68_2_fu_5186_p1.read());
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_7_address0 = grp_compute_fu_4550_local_C_7_address0.read();
    } else {
        local_C_7_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_C_7_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read())))) {
        local_C_7_ce0 = ap_const_logic_1;
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_7_ce0 = grp_compute_fu_4550_local_C_7_ce0.read();
    } else {
        local_C_7_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_7_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_7_ce1 = grp_compute_fu_4550_local_C_7_ce1.read();
    } else {
        local_C_7_ce1 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_7_we0() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()) && 
         esl_seteq<1,7,7>(trunc_ln68_reg_6019_pp0_iter13_reg.read(), ap_const_lv7_7))) {
        local_C_7_we0 = ap_const_logic_1;
    } else {
        local_C_7_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_7_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_7_we1 = grp_compute_fu_4550_local_C_7_we1.read();
    } else {
        local_C_7_we1 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_80_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        local_C_80_address0 =  (sc_lv<7>) (zext_ln91_1_fu_5499_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()))) {
        local_C_80_address0 =  (sc_lv<7>) (zext_ln68_2_fu_5186_p1.read());
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_80_address0 = grp_compute_fu_4550_local_C_80_address0.read();
    } else {
        local_C_80_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_C_80_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read())))) {
        local_C_80_ce0 = ap_const_logic_1;
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_80_ce0 = grp_compute_fu_4550_local_C_80_ce0.read();
    } else {
        local_C_80_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_80_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_80_ce1 = grp_compute_fu_4550_local_C_80_ce1.read();
    } else {
        local_C_80_ce1 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_80_we0() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()) && 
         esl_seteq<1,7,7>(trunc_ln68_reg_6019_pp0_iter13_reg.read(), ap_const_lv7_50))) {
        local_C_80_we0 = ap_const_logic_1;
    } else {
        local_C_80_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_80_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_80_we1 = grp_compute_fu_4550_local_C_80_we1.read();
    } else {
        local_C_80_we1 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_81_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        local_C_81_address0 =  (sc_lv<7>) (zext_ln91_1_fu_5499_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()))) {
        local_C_81_address0 =  (sc_lv<7>) (zext_ln68_2_fu_5186_p1.read());
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_81_address0 = grp_compute_fu_4550_local_C_81_address0.read();
    } else {
        local_C_81_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_C_81_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read())))) {
        local_C_81_ce0 = ap_const_logic_1;
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_81_ce0 = grp_compute_fu_4550_local_C_81_ce0.read();
    } else {
        local_C_81_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_81_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_81_ce1 = grp_compute_fu_4550_local_C_81_ce1.read();
    } else {
        local_C_81_ce1 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_81_we0() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()) && 
         esl_seteq<1,7,7>(trunc_ln68_reg_6019_pp0_iter13_reg.read(), ap_const_lv7_51))) {
        local_C_81_we0 = ap_const_logic_1;
    } else {
        local_C_81_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_81_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_81_we1 = grp_compute_fu_4550_local_C_81_we1.read();
    } else {
        local_C_81_we1 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_82_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        local_C_82_address0 =  (sc_lv<7>) (zext_ln91_1_fu_5499_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()))) {
        local_C_82_address0 =  (sc_lv<7>) (zext_ln68_2_fu_5186_p1.read());
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_82_address0 = grp_compute_fu_4550_local_C_82_address0.read();
    } else {
        local_C_82_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_C_82_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read())))) {
        local_C_82_ce0 = ap_const_logic_1;
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_82_ce0 = grp_compute_fu_4550_local_C_82_ce0.read();
    } else {
        local_C_82_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_82_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_82_ce1 = grp_compute_fu_4550_local_C_82_ce1.read();
    } else {
        local_C_82_ce1 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_82_we0() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()) && 
         esl_seteq<1,7,7>(trunc_ln68_reg_6019_pp0_iter13_reg.read(), ap_const_lv7_52))) {
        local_C_82_we0 = ap_const_logic_1;
    } else {
        local_C_82_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_82_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_82_we1 = grp_compute_fu_4550_local_C_82_we1.read();
    } else {
        local_C_82_we1 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_83_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        local_C_83_address0 =  (sc_lv<7>) (zext_ln91_1_fu_5499_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()))) {
        local_C_83_address0 =  (sc_lv<7>) (zext_ln68_2_fu_5186_p1.read());
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_83_address0 = grp_compute_fu_4550_local_C_83_address0.read();
    } else {
        local_C_83_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_C_83_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read())))) {
        local_C_83_ce0 = ap_const_logic_1;
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_83_ce0 = grp_compute_fu_4550_local_C_83_ce0.read();
    } else {
        local_C_83_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_83_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_83_ce1 = grp_compute_fu_4550_local_C_83_ce1.read();
    } else {
        local_C_83_ce1 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_83_we0() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()) && 
         esl_seteq<1,7,7>(trunc_ln68_reg_6019_pp0_iter13_reg.read(), ap_const_lv7_53))) {
        local_C_83_we0 = ap_const_logic_1;
    } else {
        local_C_83_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_83_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_83_we1 = grp_compute_fu_4550_local_C_83_we1.read();
    } else {
        local_C_83_we1 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_84_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        local_C_84_address0 =  (sc_lv<7>) (zext_ln91_1_fu_5499_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()))) {
        local_C_84_address0 =  (sc_lv<7>) (zext_ln68_2_fu_5186_p1.read());
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_84_address0 = grp_compute_fu_4550_local_C_84_address0.read();
    } else {
        local_C_84_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_C_84_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read())))) {
        local_C_84_ce0 = ap_const_logic_1;
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_84_ce0 = grp_compute_fu_4550_local_C_84_ce0.read();
    } else {
        local_C_84_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_84_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_84_ce1 = grp_compute_fu_4550_local_C_84_ce1.read();
    } else {
        local_C_84_ce1 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_84_we0() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()) && 
         esl_seteq<1,7,7>(trunc_ln68_reg_6019_pp0_iter13_reg.read(), ap_const_lv7_54))) {
        local_C_84_we0 = ap_const_logic_1;
    } else {
        local_C_84_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_84_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_84_we1 = grp_compute_fu_4550_local_C_84_we1.read();
    } else {
        local_C_84_we1 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_85_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        local_C_85_address0 =  (sc_lv<7>) (zext_ln91_1_fu_5499_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()))) {
        local_C_85_address0 =  (sc_lv<7>) (zext_ln68_2_fu_5186_p1.read());
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_85_address0 = grp_compute_fu_4550_local_C_85_address0.read();
    } else {
        local_C_85_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_C_85_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read())))) {
        local_C_85_ce0 = ap_const_logic_1;
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_85_ce0 = grp_compute_fu_4550_local_C_85_ce0.read();
    } else {
        local_C_85_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_85_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_85_ce1 = grp_compute_fu_4550_local_C_85_ce1.read();
    } else {
        local_C_85_ce1 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_85_we0() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()) && 
         esl_seteq<1,7,7>(trunc_ln68_reg_6019_pp0_iter13_reg.read(), ap_const_lv7_55))) {
        local_C_85_we0 = ap_const_logic_1;
    } else {
        local_C_85_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_85_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_85_we1 = grp_compute_fu_4550_local_C_85_we1.read();
    } else {
        local_C_85_we1 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_86_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        local_C_86_address0 =  (sc_lv<7>) (zext_ln91_1_fu_5499_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()))) {
        local_C_86_address0 =  (sc_lv<7>) (zext_ln68_2_fu_5186_p1.read());
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_86_address0 = grp_compute_fu_4550_local_C_86_address0.read();
    } else {
        local_C_86_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_C_86_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read())))) {
        local_C_86_ce0 = ap_const_logic_1;
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_86_ce0 = grp_compute_fu_4550_local_C_86_ce0.read();
    } else {
        local_C_86_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_86_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_86_ce1 = grp_compute_fu_4550_local_C_86_ce1.read();
    } else {
        local_C_86_ce1 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_86_we0() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()) && 
         esl_seteq<1,7,7>(trunc_ln68_reg_6019_pp0_iter13_reg.read(), ap_const_lv7_56))) {
        local_C_86_we0 = ap_const_logic_1;
    } else {
        local_C_86_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_86_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_86_we1 = grp_compute_fu_4550_local_C_86_we1.read();
    } else {
        local_C_86_we1 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_87_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        local_C_87_address0 =  (sc_lv<7>) (zext_ln91_1_fu_5499_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()))) {
        local_C_87_address0 =  (sc_lv<7>) (zext_ln68_2_fu_5186_p1.read());
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_87_address0 = grp_compute_fu_4550_local_C_87_address0.read();
    } else {
        local_C_87_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_C_87_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read())))) {
        local_C_87_ce0 = ap_const_logic_1;
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_87_ce0 = grp_compute_fu_4550_local_C_87_ce0.read();
    } else {
        local_C_87_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_87_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_87_ce1 = grp_compute_fu_4550_local_C_87_ce1.read();
    } else {
        local_C_87_ce1 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_87_we0() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()) && 
         esl_seteq<1,7,7>(trunc_ln68_reg_6019_pp0_iter13_reg.read(), ap_const_lv7_57))) {
        local_C_87_we0 = ap_const_logic_1;
    } else {
        local_C_87_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_87_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_87_we1 = grp_compute_fu_4550_local_C_87_we1.read();
    } else {
        local_C_87_we1 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_88_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        local_C_88_address0 =  (sc_lv<7>) (zext_ln91_1_fu_5499_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()))) {
        local_C_88_address0 =  (sc_lv<7>) (zext_ln68_2_fu_5186_p1.read());
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_88_address0 = grp_compute_fu_4550_local_C_88_address0.read();
    } else {
        local_C_88_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_C_88_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read())))) {
        local_C_88_ce0 = ap_const_logic_1;
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_88_ce0 = grp_compute_fu_4550_local_C_88_ce0.read();
    } else {
        local_C_88_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_88_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_88_ce1 = grp_compute_fu_4550_local_C_88_ce1.read();
    } else {
        local_C_88_ce1 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_88_we0() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()) && 
         esl_seteq<1,7,7>(trunc_ln68_reg_6019_pp0_iter13_reg.read(), ap_const_lv7_58))) {
        local_C_88_we0 = ap_const_logic_1;
    } else {
        local_C_88_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_88_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_88_we1 = grp_compute_fu_4550_local_C_88_we1.read();
    } else {
        local_C_88_we1 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_89_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        local_C_89_address0 =  (sc_lv<7>) (zext_ln91_1_fu_5499_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()))) {
        local_C_89_address0 =  (sc_lv<7>) (zext_ln68_2_fu_5186_p1.read());
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_89_address0 = grp_compute_fu_4550_local_C_89_address0.read();
    } else {
        local_C_89_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_C_89_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read())))) {
        local_C_89_ce0 = ap_const_logic_1;
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_89_ce0 = grp_compute_fu_4550_local_C_89_ce0.read();
    } else {
        local_C_89_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_89_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_89_ce1 = grp_compute_fu_4550_local_C_89_ce1.read();
    } else {
        local_C_89_ce1 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_89_we0() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()) && 
         esl_seteq<1,7,7>(trunc_ln68_reg_6019_pp0_iter13_reg.read(), ap_const_lv7_59))) {
        local_C_89_we0 = ap_const_logic_1;
    } else {
        local_C_89_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_89_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_89_we1 = grp_compute_fu_4550_local_C_89_we1.read();
    } else {
        local_C_89_we1 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_8_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        local_C_8_address0 =  (sc_lv<7>) (zext_ln91_1_fu_5499_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()))) {
        local_C_8_address0 =  (sc_lv<7>) (zext_ln68_2_fu_5186_p1.read());
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_8_address0 = grp_compute_fu_4550_local_C_8_address0.read();
    } else {
        local_C_8_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_C_8_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read())))) {
        local_C_8_ce0 = ap_const_logic_1;
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_8_ce0 = grp_compute_fu_4550_local_C_8_ce0.read();
    } else {
        local_C_8_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_8_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_8_ce1 = grp_compute_fu_4550_local_C_8_ce1.read();
    } else {
        local_C_8_ce1 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_8_we0() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()) && 
         esl_seteq<1,7,7>(trunc_ln68_reg_6019_pp0_iter13_reg.read(), ap_const_lv7_8))) {
        local_C_8_we0 = ap_const_logic_1;
    } else {
        local_C_8_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_8_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_8_we1 = grp_compute_fu_4550_local_C_8_we1.read();
    } else {
        local_C_8_we1 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_90_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        local_C_90_address0 =  (sc_lv<7>) (zext_ln91_1_fu_5499_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()))) {
        local_C_90_address0 =  (sc_lv<7>) (zext_ln68_2_fu_5186_p1.read());
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_90_address0 = grp_compute_fu_4550_local_C_90_address0.read();
    } else {
        local_C_90_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_C_90_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read())))) {
        local_C_90_ce0 = ap_const_logic_1;
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_90_ce0 = grp_compute_fu_4550_local_C_90_ce0.read();
    } else {
        local_C_90_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_90_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_90_ce1 = grp_compute_fu_4550_local_C_90_ce1.read();
    } else {
        local_C_90_ce1 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_90_we0() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()) && 
         esl_seteq<1,7,7>(trunc_ln68_reg_6019_pp0_iter13_reg.read(), ap_const_lv7_5A))) {
        local_C_90_we0 = ap_const_logic_1;
    } else {
        local_C_90_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_90_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_90_we1 = grp_compute_fu_4550_local_C_90_we1.read();
    } else {
        local_C_90_we1 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_91_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        local_C_91_address0 =  (sc_lv<7>) (zext_ln91_1_fu_5499_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()))) {
        local_C_91_address0 =  (sc_lv<7>) (zext_ln68_2_fu_5186_p1.read());
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_91_address0 = grp_compute_fu_4550_local_C_91_address0.read();
    } else {
        local_C_91_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_C_91_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read())))) {
        local_C_91_ce0 = ap_const_logic_1;
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_91_ce0 = grp_compute_fu_4550_local_C_91_ce0.read();
    } else {
        local_C_91_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_91_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_91_ce1 = grp_compute_fu_4550_local_C_91_ce1.read();
    } else {
        local_C_91_ce1 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_91_we0() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()) && 
         esl_seteq<1,7,7>(trunc_ln68_reg_6019_pp0_iter13_reg.read(), ap_const_lv7_5B))) {
        local_C_91_we0 = ap_const_logic_1;
    } else {
        local_C_91_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_91_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_91_we1 = grp_compute_fu_4550_local_C_91_we1.read();
    } else {
        local_C_91_we1 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_92_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        local_C_92_address0 =  (sc_lv<7>) (zext_ln91_1_fu_5499_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()))) {
        local_C_92_address0 =  (sc_lv<7>) (zext_ln68_2_fu_5186_p1.read());
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_92_address0 = grp_compute_fu_4550_local_C_92_address0.read();
    } else {
        local_C_92_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_C_92_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read())))) {
        local_C_92_ce0 = ap_const_logic_1;
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_92_ce0 = grp_compute_fu_4550_local_C_92_ce0.read();
    } else {
        local_C_92_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_92_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_92_ce1 = grp_compute_fu_4550_local_C_92_ce1.read();
    } else {
        local_C_92_ce1 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_92_we0() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()) && 
         esl_seteq<1,7,7>(trunc_ln68_reg_6019_pp0_iter13_reg.read(), ap_const_lv7_5C))) {
        local_C_92_we0 = ap_const_logic_1;
    } else {
        local_C_92_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_92_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_92_we1 = grp_compute_fu_4550_local_C_92_we1.read();
    } else {
        local_C_92_we1 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_93_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        local_C_93_address0 =  (sc_lv<7>) (zext_ln91_1_fu_5499_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()))) {
        local_C_93_address0 =  (sc_lv<7>) (zext_ln68_2_fu_5186_p1.read());
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_93_address0 = grp_compute_fu_4550_local_C_93_address0.read();
    } else {
        local_C_93_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_C_93_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read())))) {
        local_C_93_ce0 = ap_const_logic_1;
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_93_ce0 = grp_compute_fu_4550_local_C_93_ce0.read();
    } else {
        local_C_93_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_93_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_93_ce1 = grp_compute_fu_4550_local_C_93_ce1.read();
    } else {
        local_C_93_ce1 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_93_we0() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()) && 
         esl_seteq<1,7,7>(trunc_ln68_reg_6019_pp0_iter13_reg.read(), ap_const_lv7_5D))) {
        local_C_93_we0 = ap_const_logic_1;
    } else {
        local_C_93_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_93_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_93_we1 = grp_compute_fu_4550_local_C_93_we1.read();
    } else {
        local_C_93_we1 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_94_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        local_C_94_address0 =  (sc_lv<7>) (zext_ln91_1_fu_5499_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()))) {
        local_C_94_address0 =  (sc_lv<7>) (zext_ln68_2_fu_5186_p1.read());
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_94_address0 = grp_compute_fu_4550_local_C_94_address0.read();
    } else {
        local_C_94_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_C_94_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read())))) {
        local_C_94_ce0 = ap_const_logic_1;
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_94_ce0 = grp_compute_fu_4550_local_C_94_ce0.read();
    } else {
        local_C_94_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_94_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_94_ce1 = grp_compute_fu_4550_local_C_94_ce1.read();
    } else {
        local_C_94_ce1 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_94_we0() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()) && 
         esl_seteq<1,7,7>(trunc_ln68_reg_6019_pp0_iter13_reg.read(), ap_const_lv7_5E))) {
        local_C_94_we0 = ap_const_logic_1;
    } else {
        local_C_94_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_94_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_94_we1 = grp_compute_fu_4550_local_C_94_we1.read();
    } else {
        local_C_94_we1 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_95_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        local_C_95_address0 =  (sc_lv<7>) (zext_ln91_1_fu_5499_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()))) {
        local_C_95_address0 =  (sc_lv<7>) (zext_ln68_2_fu_5186_p1.read());
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_95_address0 = grp_compute_fu_4550_local_C_95_address0.read();
    } else {
        local_C_95_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_C_95_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read())))) {
        local_C_95_ce0 = ap_const_logic_1;
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_95_ce0 = grp_compute_fu_4550_local_C_95_ce0.read();
    } else {
        local_C_95_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_95_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_95_ce1 = grp_compute_fu_4550_local_C_95_ce1.read();
    } else {
        local_C_95_ce1 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_95_we0() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()) && 
         esl_seteq<1,7,7>(trunc_ln68_reg_6019_pp0_iter13_reg.read(), ap_const_lv7_5F))) {
        local_C_95_we0 = ap_const_logic_1;
    } else {
        local_C_95_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_95_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_95_we1 = grp_compute_fu_4550_local_C_95_we1.read();
    } else {
        local_C_95_we1 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_96_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        local_C_96_address0 =  (sc_lv<7>) (zext_ln91_1_fu_5499_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()))) {
        local_C_96_address0 =  (sc_lv<7>) (zext_ln68_2_fu_5186_p1.read());
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_96_address0 = grp_compute_fu_4550_local_C_96_address0.read();
    } else {
        local_C_96_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_C_96_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read())))) {
        local_C_96_ce0 = ap_const_logic_1;
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_96_ce0 = grp_compute_fu_4550_local_C_96_ce0.read();
    } else {
        local_C_96_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_96_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_96_ce1 = grp_compute_fu_4550_local_C_96_ce1.read();
    } else {
        local_C_96_ce1 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_96_we0() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()) && 
         esl_seteq<1,7,7>(trunc_ln68_reg_6019_pp0_iter13_reg.read(), ap_const_lv7_60))) {
        local_C_96_we0 = ap_const_logic_1;
    } else {
        local_C_96_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_96_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_96_we1 = grp_compute_fu_4550_local_C_96_we1.read();
    } else {
        local_C_96_we1 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_97_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        local_C_97_address0 =  (sc_lv<7>) (zext_ln91_1_fu_5499_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()))) {
        local_C_97_address0 =  (sc_lv<7>) (zext_ln68_2_fu_5186_p1.read());
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_97_address0 = grp_compute_fu_4550_local_C_97_address0.read();
    } else {
        local_C_97_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_C_97_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read())))) {
        local_C_97_ce0 = ap_const_logic_1;
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_97_ce0 = grp_compute_fu_4550_local_C_97_ce0.read();
    } else {
        local_C_97_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_97_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_97_ce1 = grp_compute_fu_4550_local_C_97_ce1.read();
    } else {
        local_C_97_ce1 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_97_we0() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()) && 
         esl_seteq<1,7,7>(trunc_ln68_reg_6019_pp0_iter13_reg.read(), ap_const_lv7_61))) {
        local_C_97_we0 = ap_const_logic_1;
    } else {
        local_C_97_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_97_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_97_we1 = grp_compute_fu_4550_local_C_97_we1.read();
    } else {
        local_C_97_we1 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_98_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        local_C_98_address0 =  (sc_lv<7>) (zext_ln91_1_fu_5499_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()))) {
        local_C_98_address0 =  (sc_lv<7>) (zext_ln68_2_fu_5186_p1.read());
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_98_address0 = grp_compute_fu_4550_local_C_98_address0.read();
    } else {
        local_C_98_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_C_98_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read())))) {
        local_C_98_ce0 = ap_const_logic_1;
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_98_ce0 = grp_compute_fu_4550_local_C_98_ce0.read();
    } else {
        local_C_98_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_98_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_98_ce1 = grp_compute_fu_4550_local_C_98_ce1.read();
    } else {
        local_C_98_ce1 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_98_we0() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()) && 
         esl_seteq<1,7,7>(trunc_ln68_reg_6019_pp0_iter13_reg.read(), ap_const_lv7_62))) {
        local_C_98_we0 = ap_const_logic_1;
    } else {
        local_C_98_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_98_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_98_we1 = grp_compute_fu_4550_local_C_98_we1.read();
    } else {
        local_C_98_we1 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_99_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        local_C_99_address0 =  (sc_lv<7>) (zext_ln91_1_fu_5499_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()))) {
        local_C_99_address0 =  (sc_lv<7>) (zext_ln68_2_fu_5186_p1.read());
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_99_address0 = grp_compute_fu_4550_local_C_99_address0.read();
    } else {
        local_C_99_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_C_99_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read())))) {
        local_C_99_ce0 = ap_const_logic_1;
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_99_ce0 = grp_compute_fu_4550_local_C_99_ce0.read();
    } else {
        local_C_99_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_99_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_99_ce1 = grp_compute_fu_4550_local_C_99_ce1.read();
    } else {
        local_C_99_ce1 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_99_we0() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()) && 
         esl_seteq<1,7,7>(trunc_ln68_reg_6019_pp0_iter13_reg.read(), ap_const_lv7_63))) {
        local_C_99_we0 = ap_const_logic_1;
    } else {
        local_C_99_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_99_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_99_we1 = grp_compute_fu_4550_local_C_99_we1.read();
    } else {
        local_C_99_we1 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_9_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        local_C_9_address0 =  (sc_lv<7>) (zext_ln91_1_fu_5499_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()))) {
        local_C_9_address0 =  (sc_lv<7>) (zext_ln68_2_fu_5186_p1.read());
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_9_address0 = grp_compute_fu_4550_local_C_9_address0.read();
    } else {
        local_C_9_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void kernel_gemm::thread_local_C_9_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read())))) {
        local_C_9_ce0 = ap_const_logic_1;
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                 esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_9_ce0 = grp_compute_fu_4550_local_C_9_ce0.read();
    } else {
        local_C_9_ce0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_9_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_9_ce1 = grp_compute_fu_4550_local_C_9_ce1.read();
    } else {
        local_C_9_ce1 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_9_we0() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter14.read()) && 
         esl_seteq<1,7,7>(trunc_ln68_reg_6019_pp0_iter13_reg.read(), ap_const_lv7_9))) {
        local_C_9_we0 = ap_const_logic_1;
    } else {
        local_C_9_we0 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_local_C_9_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
          esl_seteq<1,1,1>(icmp_ln75_reg_6185.read(), ap_const_lv1_1)))) {
        local_C_9_we1 = grp_compute_fu_4550_local_C_9_we1.read();
    } else {
        local_C_9_we1 = ap_const_logic_0;
    }
}

void kernel_gemm::thread_p_cast_fu_4998_p1() {
    p_cast_fu_4998_p1 = esl_zext<31,30>(tmp_6_fu_4988_p4.read());
}

void kernel_gemm::thread_select_ln61_fu_5041_p3() {
    select_ln61_fu_5041_p3 = (!tmp_7_fu_5025_p3.read()[0].is_01())? sc_lv<12>(): ((tmp_7_fu_5025_p3.read()[0].to_bool())? i_fu_5019_p2.read(): i_0_reg_4451.read());
}

void kernel_gemm::thread_select_ln62_fu_5033_p3() {
    select_ln62_fu_5033_p3 = (!tmp_7_fu_5025_p3.read()[0].is_01())? sc_lv<12>(): ((tmp_7_fu_5025_p3.read()[0].to_bool())? ap_const_lv12_0: j_0_reg_4462.read());
}

void kernel_gemm::thread_select_ln68_1_fu_5111_p3() {
    select_ln68_1_fu_5111_p3 = (!icmp_ln66_fu_5088_p2.read()[0].is_01())? sc_lv<8>(): ((icmp_ln66_fu_5088_p2.read()[0].to_bool())? ii_fu_5082_p2.read(): ap_phi_mux_ii_0_phi_fu_4488_p4.read());
}

void kernel_gemm::thread_select_ln68_2_fu_5127_p3() {
    select_ln68_2_fu_5127_p3 = (!icmp_ln66_fu_5088_p2.read()[0].is_01())? sc_lv<23>(): ((icmp_ln66_fu_5088_p2.read()[0].to_bool())? tmp_1_mid1_fu_5119_p3.read(): tmp_1_fu_5062_p3.read());
}

void kernel_gemm::thread_select_ln68_fu_5094_p3() {
    select_ln68_fu_5094_p3 = (!icmp_ln66_fu_5088_p2.read()[0].is_01())? sc_lv<8>(): ((icmp_ln66_fu_5088_p2.read()[0].to_bool())? ap_const_lv8_0: jj_0_reg_4495.read());
}

void kernel_gemm::thread_select_ln85_fu_5371_p3() {
    select_ln85_fu_5371_p3 = (!icmp_ln85_fu_5365_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln85_fu_5365_p2.read()[0].to_bool())? ap_const_lv32_0: counter_fu_5359_p2.read());
}

void kernel_gemm::thread_select_ln91_1_fu_5433_p3() {
    select_ln91_1_fu_5433_p3 = (!icmp_ln89_fu_5419_p2.read()[0].is_01())? sc_lv<8>(): ((icmp_ln89_fu_5419_p2.read()[0].to_bool())? ii_1_fu_5413_p2.read(): ap_phi_mux_ii1_0_phi_fu_4532_p4.read());
}

void kernel_gemm::thread_select_ln91_2_fu_5458_p3() {
    select_ln91_2_fu_5458_p3 = (!icmp_ln89_fu_5419_p2.read()[0].is_01())? sc_lv<23>(): ((icmp_ln89_fu_5419_p2.read()[0].to_bool())? tmp_2_mid1_fu_5450_p3.read(): tmp_2_fu_5393_p3.read());
}

void kernel_gemm::thread_select_ln91_fu_5425_p3() {
    select_ln91_fu_5425_p3 = (!icmp_ln89_fu_5419_p2.read()[0].is_01())? sc_lv<8>(): ((icmp_ln89_fu_5419_p2.read()[0].to_bool())? ap_const_lv8_0: jj2_0_reg_4539.read());
}

void kernel_gemm::thread_shl_ln_fu_5343_p3() {
    shl_ln_fu_5343_p3 = esl_concat<5,7>(index_0_reg_4506.read(), ap_const_lv7_0);
}

void kernel_gemm::thread_tmp_10_fu_5144_p3() {
    tmp_10_fu_5144_p3 = esl_concat<8,7>(ap_const_lv8_0, empty_13_fu_5140_p1.read());
}

void kernel_gemm::thread_tmp_11_fu_5335_p3() {
    tmp_11_fu_5335_p3 = index_0_reg_4506.read().range(4, 4);
}

void kernel_gemm::thread_tmp_12_fu_5479_p3() {
    tmp_12_fu_5479_p3 = esl_concat<8,7>(ap_const_lv8_0, empty_17_fu_5475_p1.read());
}

void kernel_gemm::thread_tmp_13_fu_5641_p3() {
    tmp_13_fu_5641_p3 = esl_concat<8,7>(ap_const_lv8_0, empty_20_fu_5638_p1.read());
}

void kernel_gemm::thread_tmp_1_fu_5062_p3() {
    tmp_1_fu_5062_p3 = esl_concat<12,11>(add_ln68_fu_5057_p2.read(), ap_const_lv11_0);
}

void kernel_gemm::thread_tmp_1_mid1_fu_5119_p3() {
    tmp_1_mid1_fu_5119_p3 = esl_concat<12,11>(add_ln68_1_fu_5106_p2.read(), ap_const_lv11_0);
}

void kernel_gemm::thread_tmp_2_fu_5393_p3() {
    tmp_2_fu_5393_p3 = esl_concat<12,11>(add_ln91_fu_5388_p2.read(), ap_const_lv11_0);
}

void kernel_gemm::thread_tmp_2_mid1_fu_5450_p3() {
    tmp_2_mid1_fu_5450_p3 = esl_concat<12,11>(add_ln91_1_fu_5445_p2.read(), ap_const_lv11_0);
}

void kernel_gemm::thread_tmp_6_fu_4988_p4() {
    tmp_6_fu_4988_p4 = C.read().range(31, 2);
}

void kernel_gemm::thread_tmp_7_fu_5025_p3() {
    tmp_7_fu_5025_p3 = j_0_reg_4462.read().range(11, 11);
}

void kernel_gemm::thread_trunc_ln68_fu_5158_p1() {
    trunc_ln68_fu_5158_p1 = select_ln68_fu_5094_p3.read().range(7-1, 0);
}

void kernel_gemm::thread_trunc_ln91_fu_5471_p1() {
    trunc_ln91_fu_5471_p1 = select_ln91_fu_5425_p3.read().range(7-1, 0);
}

void kernel_gemm::thread_xor_ln77_fu_5352_p2() {
    xor_ln77_fu_5352_p2 = (tmp_11_fu_5335_p3.read() ^ ap_const_lv1_1);
}

void kernel_gemm::thread_zext_ln62_fu_5049_p1() {
    zext_ln62_fu_5049_p1 = esl_zext<23,12>(select_ln62_fu_5033_p3.read());
}

void kernel_gemm::thread_zext_ln66_fu_5168_p1() {
    zext_ln66_fu_5168_p1 = esl_zext<31,23>(add_ln68_2_reg_6010.read());
}

void kernel_gemm::thread_zext_ln68_1_fu_5102_p1() {
    zext_ln68_1_fu_5102_p1 = esl_zext<12,8>(ii_fu_5082_p2.read());
}

void kernel_gemm::thread_zext_ln68_2_fu_5186_p1() {
    zext_ln68_2_fu_5186_p1 = esl_zext<64,8>(select_ln68_1_reg_6004_pp0_iter13_reg.read());
}

void kernel_gemm::thread_zext_ln68_3_fu_5176_p1() {
    zext_ln68_3_fu_5176_p1 = esl_zext<64,31>(add_ln68_3_reg_6028.read());
}

void kernel_gemm::thread_zext_ln68_fu_5053_p1() {
    zext_ln68_fu_5053_p1 = esl_zext<12,8>(ap_phi_mux_ii_0_phi_fu_4488_p4.read());
}

void kernel_gemm::thread_zext_ln89_fu_5630_p1() {
    zext_ln89_fu_5630_p1 = esl_zext<31,23>(add_ln91_2_reg_6225.read());
}

void kernel_gemm::thread_zext_ln91_1_fu_5499_p1() {
    zext_ln91_1_fu_5499_p1 = esl_zext<64,8>(select_ln91_1_reg_6219.read());
}

void kernel_gemm::thread_zext_ln91_2_fu_5441_p1() {
    zext_ln91_2_fu_5441_p1 = esl_zext<12,8>(ii_1_fu_5413_p2.read());
}

void kernel_gemm::thread_zext_ln91_3_fu_5916_p1() {
    zext_ln91_3_fu_5916_p1 = esl_zext<64,31>(add_ln91_3_reg_6884.read());
}

void kernel_gemm::thread_zext_ln91_fu_5384_p1() {
    zext_ln91_fu_5384_p1 = esl_zext<12,8>(ap_phi_mux_ii1_0_phi_fu_4532_p4.read());
}

}

