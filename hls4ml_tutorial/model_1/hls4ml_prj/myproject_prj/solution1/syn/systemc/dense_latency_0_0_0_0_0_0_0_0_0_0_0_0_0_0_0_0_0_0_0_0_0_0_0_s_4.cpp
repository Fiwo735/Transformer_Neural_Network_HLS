#include "dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_ap_block_pp0_stage0_11001() {
    ap_block_pp0_stage0_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_ap_block_state1_pp0_stage0_iter0() {
    ap_block_state1_pp0_stage0_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_ap_block_state2_pp0_stage0_iter1() {
    ap_block_state2_pp0_stage0_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_ap_return_0() {
    if (esl_seteq<1,1,1>(ap_const_logic_0, ap_ce_reg.read())) {
        ap_return_0 = ap_return_0_int_reg.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce_reg.read())) {
        ap_return_0 = add_ln703_2892_fu_2704722_p2.read();
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_ap_return_1() {
    if (esl_seteq<1,1,1>(ap_const_logic_0, ap_ce_reg.read())) {
        ap_return_1 = ap_return_1_int_reg.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce_reg.read())) {
        ap_return_1 = acc_1_V_fu_2704741_p2.read();
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_ap_return_10() {
    if (esl_seteq<1,1,1>(ap_const_logic_0, ap_ce_reg.read())) {
        ap_return_10 = ap_return_10_int_reg.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce_reg.read())) {
        ap_return_10 = acc_10_V_fu_2704847_p2.read();
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_ap_return_11() {
    if (esl_seteq<1,1,1>(ap_const_logic_0, ap_ce_reg.read())) {
        ap_return_11 = ap_return_11_int_reg.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce_reg.read())) {
        ap_return_11 = acc_11_V_fu_2704856_p2.read();
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_ap_return_12() {
    if (esl_seteq<1,1,1>(ap_const_logic_0, ap_ce_reg.read())) {
        ap_return_12 = ap_return_12_int_reg.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce_reg.read())) {
        ap_return_12 = acc_12_V_fu_2704865_p2.read();
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_ap_return_13() {
    if (esl_seteq<1,1,1>(ap_const_logic_0, ap_ce_reg.read())) {
        ap_return_13 = ap_return_13_int_reg.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce_reg.read())) {
        ap_return_13 = acc_13_V_fu_2704883_p2.read();
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_ap_return_14() {
    if (esl_seteq<1,1,1>(ap_const_logic_0, ap_ce_reg.read())) {
        ap_return_14 = ap_return_14_int_reg.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce_reg.read())) {
        ap_return_14 = acc_14_V_fu_2704902_p2.read();
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_ap_return_15() {
    if (esl_seteq<1,1,1>(ap_const_logic_0, ap_ce_reg.read())) {
        ap_return_15 = ap_return_15_int_reg.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce_reg.read())) {
        ap_return_15 = acc_15_V_fu_2704921_p2.read();
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_ap_return_16() {
    if (esl_seteq<1,1,1>(ap_const_logic_0, ap_ce_reg.read())) {
        ap_return_16 = ap_return_16_int_reg.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce_reg.read())) {
        ap_return_16 = acc_16_V_fu_2704940_p2.read();
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_ap_return_17() {
    if (esl_seteq<1,1,1>(ap_const_logic_0, ap_ce_reg.read())) {
        ap_return_17 = ap_return_17_int_reg.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce_reg.read())) {
        ap_return_17 = acc_17_V_fu_2704959_p2.read();
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_ap_return_18() {
    if (esl_seteq<1,1,1>(ap_const_logic_0, ap_ce_reg.read())) {
        ap_return_18 = ap_return_18_int_reg.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce_reg.read())) {
        ap_return_18 = acc_18_V_fu_2704969_p2.read();
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_ap_return_19() {
    if (esl_seteq<1,1,1>(ap_const_logic_0, ap_ce_reg.read())) {
        ap_return_19 = ap_return_19_int_reg.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce_reg.read())) {
        ap_return_19 = acc_19_V_fu_2704987_p2.read();
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_ap_return_2() {
    if (esl_seteq<1,1,1>(ap_const_logic_0, ap_ce_reg.read())) {
        ap_return_2 = ap_return_2_int_reg.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce_reg.read())) {
        ap_return_2 = acc_2_V_fu_2704751_p2.read();
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_ap_return_20() {
    if (esl_seteq<1,1,1>(ap_const_logic_0, ap_ce_reg.read())) {
        ap_return_20 = ap_return_20_int_reg.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce_reg.read())) {
        ap_return_20 = acc_20_V_fu_2705006_p2.read();
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_ap_return_21() {
    if (esl_seteq<1,1,1>(ap_const_logic_0, ap_ce_reg.read())) {
        ap_return_21 = ap_return_21_int_reg.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce_reg.read())) {
        ap_return_21 = acc_21_V_fu_2705016_p2.read();
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_ap_return_22() {
    if (esl_seteq<1,1,1>(ap_const_logic_0, ap_ce_reg.read())) {
        ap_return_22 = ap_return_22_int_reg.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce_reg.read())) {
        ap_return_22 = acc_22_V_fu_2705025_p2.read();
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_ap_return_23() {
    if (esl_seteq<1,1,1>(ap_const_logic_0, ap_ce_reg.read())) {
        ap_return_23 = ap_return_23_int_reg.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce_reg.read())) {
        ap_return_23 = sext_ln703_621_fu_2705030_p1.read();
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_ap_return_24() {
    if (esl_seteq<1,1,1>(ap_const_logic_0, ap_ce_reg.read())) {
        ap_return_24 = ap_return_24_int_reg.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce_reg.read())) {
        ap_return_24 = acc_24_V_fu_2705037_p2.read();
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_ap_return_25() {
    if (esl_seteq<1,1,1>(ap_const_logic_0, ap_ce_reg.read())) {
        ap_return_25 = ap_return_25_int_reg.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce_reg.read())) {
        ap_return_25 = acc_25_V_fu_2705046_p2.read();
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_ap_return_26() {
    if (esl_seteq<1,1,1>(ap_const_logic_0, ap_ce_reg.read())) {
        ap_return_26 = ap_return_26_int_reg.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce_reg.read())) {
        ap_return_26 = acc_26_V_fu_2705055_p2.read();
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_ap_return_27() {
    if (esl_seteq<1,1,1>(ap_const_logic_0, ap_ce_reg.read())) {
        ap_return_27 = ap_return_27_int_reg.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce_reg.read())) {
        ap_return_27 = acc_27_V_fu_2705064_p2.read();
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_ap_return_28() {
    if (esl_seteq<1,1,1>(ap_const_logic_0, ap_ce_reg.read())) {
        ap_return_28 = ap_return_28_int_reg.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce_reg.read())) {
        ap_return_28 = acc_28_V_fu_2705082_p2.read();
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_ap_return_29() {
    if (esl_seteq<1,1,1>(ap_const_logic_0, ap_ce_reg.read())) {
        ap_return_29 = ap_return_29_int_reg.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce_reg.read())) {
        ap_return_29 = acc_29_V_fu_2705092_p2.read();
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_ap_return_3() {
    if (esl_seteq<1,1,1>(ap_const_logic_0, ap_ce_reg.read())) {
        ap_return_3 = ap_return_3_int_reg.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce_reg.read())) {
        ap_return_3 = acc_3_V_fu_2704760_p2.read();
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_ap_return_30() {
    if (esl_seteq<1,1,1>(ap_const_logic_0, ap_ce_reg.read())) {
        ap_return_30 = ap_return_30_int_reg.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce_reg.read())) {
        ap_return_30 = acc_30_V_fu_2705101_p2.read();
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_ap_return_31() {
    if (esl_seteq<1,1,1>(ap_const_logic_0, ap_ce_reg.read())) {
        ap_return_31 = ap_return_31_int_reg.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce_reg.read())) {
        ap_return_31 = acc_31_V_fu_2705110_p2.read();
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_ap_return_4() {
    if (esl_seteq<1,1,1>(ap_const_logic_0, ap_ce_reg.read())) {
        ap_return_4 = ap_return_4_int_reg.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce_reg.read())) {
        ap_return_4 = acc_4_V_fu_2704778_p2.read();
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_ap_return_5() {
    if (esl_seteq<1,1,1>(ap_const_logic_0, ap_ce_reg.read())) {
        ap_return_5 = ap_return_5_int_reg.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce_reg.read())) {
        ap_return_5 = acc_5_V_fu_2704792_p2.read();
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_ap_return_6() {
    if (esl_seteq<1,1,1>(ap_const_logic_0, ap_ce_reg.read())) {
        ap_return_6 = ap_return_6_int_reg.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce_reg.read())) {
        ap_return_6 = acc_6_V_fu_2704801_p2.read();
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_ap_return_7() {
    if (esl_seteq<1,1,1>(ap_const_logic_0, ap_ce_reg.read())) {
        ap_return_7 = ap_return_7_int_reg.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce_reg.read())) {
        ap_return_7 = acc_7_V_fu_2704819_p2.read();
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_ap_return_8() {
    if (esl_seteq<1,1,1>(ap_const_logic_0, ap_ce_reg.read())) {
        ap_return_8 = ap_return_8_int_reg.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce_reg.read())) {
        ap_return_8 = acc_8_V_fu_2704829_p2.read();
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_ap_return_9() {
    if (esl_seteq<1,1,1>(ap_const_logic_0, ap_ce_reg.read())) {
        ap_return_9 = ap_return_9_int_reg.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce_reg.read())) {
        ap_return_9 = acc_9_V_fu_2704838_p2.read();
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_100_fu_1376_p0() {
    mul_ln1118_100_fu_1376_p0 =  (sc_lv<16>) (sext_ln1118_64_fu_2683741_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_100_fu_1376_p2() {
    mul_ln1118_100_fu_1376_p2 = (!mul_ln1118_100_fu_1376_p0.read().is_01() || !ap_const_lv25_AA.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_100_fu_1376_p0.read()) * sc_biguint<25>(ap_const_lv25_AA);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_101_fu_1987_p0() {
    mul_ln1118_101_fu_1987_p0 =  (sc_lv<16>) (sext_ln1118_64_fu_2683741_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_101_fu_1987_p2() {
    mul_ln1118_101_fu_1987_p2 = (!mul_ln1118_101_fu_1987_p0.read().is_01() || !ap_const_lv25_CA.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_101_fu_1987_p0.read()) * sc_biguint<25>(ap_const_lv25_CA);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_102_fu_2053_p0() {
    mul_ln1118_102_fu_2053_p0 =  (sc_lv<16>) (sext_ln1118_84_fu_2684363_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_102_fu_2053_p2() {
    mul_ln1118_102_fu_2053_p2 = (!mul_ln1118_102_fu_2053_p0.read().is_01() || !ap_const_lv24_FFFF95.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_102_fu_2053_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF95);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_103_fu_1356_p0() {
    mul_ln1118_103_fu_1356_p0 = sext_ln1118_82_fu_2684352_p0.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_103_fu_1356_p2() {
    mul_ln1118_103_fu_1356_p2 = (!mul_ln1118_103_fu_1356_p0.read().is_01() || !ap_const_lv22_3FFFE5.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_103_fu_1356_p0.read()) * sc_bigint<22>(ap_const_lv22_3FFFE5);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_104_fu_1859_p0() {
    mul_ln1118_104_fu_1859_p0 =  (sc_lv<16>) (sext_ln1118_81_fu_2684341_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_104_fu_1859_p2() {
    mul_ln1118_104_fu_1859_p2 = (!mul_ln1118_104_fu_1859_p0.read().is_01() || !ap_const_lv26_3FFFDF5.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_104_fu_1859_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFDF5);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_105_fu_1688_p0() {
    mul_ln1118_105_fu_1688_p0 =  (sc_lv<16>) (sext_ln1118_80_fu_2684331_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_105_fu_1688_p2() {
    mul_ln1118_105_fu_1688_p2 = (!mul_ln1118_105_fu_1688_p0.read().is_01() || !ap_const_lv25_1FFFF14.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_105_fu_1688_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF14);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_106_fu_1972_p0() {
    mul_ln1118_106_fu_1972_p0 =  (sc_lv<16>) (sext_ln1118_80_fu_2684331_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_106_fu_1972_p2() {
    mul_ln1118_106_fu_1972_p2 = (!mul_ln1118_106_fu_1972_p0.read().is_01() || !ap_const_lv25_1FFFF13.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_106_fu_1972_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF13);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_107_fu_1929_p0() {
    mul_ln1118_107_fu_1929_p0 =  (sc_lv<16>) (sext_ln1118_83_fu_2684357_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_107_fu_1929_p2() {
    mul_ln1118_107_fu_1929_p2 = (!mul_ln1118_107_fu_1929_p0.read().is_01() || !ap_const_lv23_7FFFCE.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_107_fu_1929_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFCE);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_108_fu_1687_p0() {
    mul_ln1118_108_fu_1687_p0 =  (sc_lv<16>) (sext_ln1118_81_fu_2684341_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_108_fu_1687_p2() {
    mul_ln1118_108_fu_1687_p2 = (!mul_ln1118_108_fu_1687_p0.read().is_01() || !ap_const_lv26_19B.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_108_fu_1687_p0.read()) * sc_biguint<26>(ap_const_lv26_19B);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_109_fu_2170_p0() {
    mul_ln1118_109_fu_2170_p0 =  (sc_lv<16>) (sext_ln1118_80_fu_2684331_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_109_fu_2170_p2() {
    mul_ln1118_109_fu_2170_p2 = (!mul_ln1118_109_fu_2170_p0.read().is_01() || !ap_const_lv25_1FFFF46.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_109_fu_2170_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF46);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_10_fu_2047_p0() {
    mul_ln1118_10_fu_2047_p0 = sext_ln1118_7_fu_2681645_p0.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_10_fu_2047_p2() {
    mul_ln1118_10_fu_2047_p2 = (!mul_ln1118_10_fu_2047_p0.read().is_01() || !ap_const_lv24_45.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_10_fu_2047_p0.read()) * sc_biguint<24>(ap_const_lv24_45);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_110_fu_1800_p0() {
    mul_ln1118_110_fu_1800_p0 =  (sc_lv<16>) (sext_ln1118_80_fu_2684331_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_110_fu_1800_p2() {
    mul_ln1118_110_fu_1800_p2 = (!mul_ln1118_110_fu_1800_p0.read().is_01() || !ap_const_lv25_B9.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_110_fu_1800_p0.read()) * sc_biguint<25>(ap_const_lv25_B9);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_111_fu_1558_p0() {
    mul_ln1118_111_fu_1558_p0 =  (sc_lv<16>) (sext_ln1118_81_fu_2684341_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_111_fu_1558_p2() {
    mul_ln1118_111_fu_1558_p2 = (!mul_ln1118_111_fu_1558_p0.read().is_01() || !ap_const_lv26_14D.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_111_fu_1558_p0.read()) * sc_biguint<26>(ap_const_lv26_14D);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_112_fu_2041_p0() {
    mul_ln1118_112_fu_2041_p0 =  (sc_lv<16>) (sext_ln1118_81_fu_2684341_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_112_fu_2041_p2() {
    mul_ln1118_112_fu_2041_p2 = (!mul_ln1118_112_fu_2041_p0.read().is_01() || !ap_const_lv26_3FFFEBA.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_112_fu_2041_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFEBA);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_113_fu_1998_p0() {
    mul_ln1118_113_fu_1998_p0 =  (sc_lv<16>) (sext_ln1118_81_fu_2684341_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_113_fu_1998_p2() {
    mul_ln1118_113_fu_1998_p2 = (!mul_ln1118_113_fu_1998_p0.read().is_01() || !ap_const_lv26_185.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_113_fu_1998_p0.read()) * sc_biguint<26>(ap_const_lv26_185);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_114_fu_2247_p0() {
    mul_ln1118_114_fu_2247_p0 =  (sc_lv<16>) (sext_ln1118_84_fu_2684363_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_114_fu_2247_p2() {
    mul_ln1118_114_fu_2247_p2 = (!mul_ln1118_114_fu_2247_p0.read().is_01() || !ap_const_lv24_FFFF85.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_114_fu_2247_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF85);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_115_fu_2248_p0() {
    mul_ln1118_115_fu_2248_p0 =  (sc_lv<16>) (sext_ln1118_83_fu_2684357_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_115_fu_2248_p2() {
    mul_ln1118_115_fu_2248_p2 = (!mul_ln1118_115_fu_2248_p0.read().is_01() || !ap_const_lv23_7FFFCB.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_115_fu_2248_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFCB);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_116_fu_1886_p0() {
    mul_ln1118_116_fu_1886_p0 =  (sc_lv<16>) (sext_ln1118_81_fu_2684341_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_116_fu_1886_p2() {
    mul_ln1118_116_fu_1886_p2 = (!mul_ln1118_116_fu_1886_p0.read().is_01() || !ap_const_lv26_3FFFE7E.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_116_fu_1886_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFE7E);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_117_fu_1524_p0() {
    mul_ln1118_117_fu_1524_p0 =  (sc_lv<16>) (sext_ln1118_80_fu_2684331_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_117_fu_1524_p2() {
    mul_ln1118_117_fu_1524_p2 = (!mul_ln1118_117_fu_1524_p0.read().is_01() || !ap_const_lv25_E3.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_117_fu_1524_p0.read()) * sc_biguint<25>(ap_const_lv25_E3);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_118_fu_1589_p0() {
    mul_ln1118_118_fu_1589_p0 =  (sc_lv<16>) (sext_ln1118_81_fu_2684341_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_118_fu_1589_p2() {
    mul_ln1118_118_fu_1589_p2 = (!mul_ln1118_118_fu_1589_p0.read().is_01() || !ap_const_lv26_3FFFEF1.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_118_fu_1589_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFEF1);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_119_fu_2252_p0() {
    mul_ln1118_119_fu_2252_p0 =  (sc_lv<16>) (sext_ln1118_80_fu_2684331_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_119_fu_2252_p2() {
    mul_ln1118_119_fu_2252_p2 = (!mul_ln1118_119_fu_2252_p0.read().is_01() || !ap_const_lv25_1FFFF4F.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_119_fu_2252_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF4F);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_11_fu_1685_p0() {
    mul_ln1118_11_fu_1685_p0 =  (sc_lv<16>) (sext_ln1118_fu_2681620_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_11_fu_1685_p2() {
    mul_ln1118_11_fu_1685_p2 = (!mul_ln1118_11_fu_1685_p0.read().is_01() || !ap_const_lv26_10F.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_11_fu_1685_p0.read()) * sc_biguint<26>(ap_const_lv26_10F);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_120_fu_1890_p0() {
    mul_ln1118_120_fu_1890_p0 = sext_ln1118_101_fu_2684871_p0.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_120_fu_1890_p2() {
    mul_ln1118_120_fu_1890_p2 = (!mul_ln1118_120_fu_1890_p0.read().is_01() || !ap_const_lv22_16.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_120_fu_1890_p0.read()) * sc_biguint<22>(ap_const_lv22_16);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_121_fu_1891_p0() {
    mul_ln1118_121_fu_1891_p0 =  (sc_lv<16>) (sext_ln1118_98_fu_2684853_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_121_fu_1891_p2() {
    mul_ln1118_121_fu_1891_p2 = (!mul_ln1118_121_fu_1891_p0.read().is_01() || !ap_const_lv24_55.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_121_fu_1891_p0.read()) * sc_biguint<24>(ap_const_lv24_55);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_123_fu_2255_p0() {
    mul_ln1118_123_fu_2255_p0 =  (sc_lv<16>) (sext_ln1118_98_fu_2684853_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_123_fu_2255_p2() {
    mul_ln1118_123_fu_2255_p2 = (!mul_ln1118_123_fu_2255_p0.read().is_01() || !ap_const_lv24_57.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_123_fu_2255_p0.read()) * sc_biguint<24>(ap_const_lv24_57);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_124_fu_1530_p0() {
    mul_ln1118_124_fu_1530_p0 =  (sc_lv<16>) (sext_ln1118_99_fu_2684861_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_124_fu_1530_p2() {
    mul_ln1118_124_fu_1530_p2 = (!mul_ln1118_124_fu_1530_p0.read().is_01() || !ap_const_lv23_26.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_124_fu_1530_p0.read()) * sc_biguint<23>(ap_const_lv23_26);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_125_fu_1595_p0() {
    mul_ln1118_125_fu_1595_p0 =  (sc_lv<16>) (sext_ln1118_96_fu_2684838_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_125_fu_1595_p2() {
    mul_ln1118_125_fu_1595_p2 = (!mul_ln1118_125_fu_1595_p0.read().is_01() || !ap_const_lv26_3FFFECF.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_125_fu_1595_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFECF);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_126_fu_2258_p0() {
    mul_ln1118_126_fu_2258_p0 =  (sc_lv<16>) (sext_ln1118_96_fu_2684838_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_126_fu_2258_p2() {
    mul_ln1118_126_fu_2258_p2 = (!mul_ln1118_126_fu_2258_p0.read().is_01() || !ap_const_lv26_3FFFEFD.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_126_fu_2258_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFEFD);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_127_fu_1896_p0() {
    mul_ln1118_127_fu_1896_p0 =  (sc_lv<16>) (sext_ln1118_96_fu_2684838_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_127_fu_1896_p2() {
    mul_ln1118_127_fu_1896_p2 = (!mul_ln1118_127_fu_1896_p0.read().is_01() || !ap_const_lv26_3FFFD84.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_127_fu_1896_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFD84);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_128_fu_1897_p0() {
    mul_ln1118_128_fu_1897_p0 =  (sc_lv<16>) (sext_ln1118_98_fu_2684853_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_128_fu_1897_p2() {
    mul_ln1118_128_fu_1897_p2 = (!mul_ln1118_128_fu_1897_p0.read().is_01() || !ap_const_lv24_68.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_128_fu_1897_p0.read()) * sc_biguint<24>(ap_const_lv24_68);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_129_fu_1766_p0() {
    mul_ln1118_129_fu_1766_p0 =  (sc_lv<16>) (sext_ln1118_95_fu_2684829_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_129_fu_1766_p2() {
    mul_ln1118_129_fu_1766_p2 = (!mul_ln1118_129_fu_1766_p0.read().is_01() || !ap_const_lv25_1FFFF33.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_129_fu_1766_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF33);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_12_fu_2049_p0() {
    mul_ln1118_12_fu_2049_p0 =  (sc_lv<16>) (sext_ln1118_fu_2681620_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_12_fu_2049_p2() {
    mul_ln1118_12_fu_2049_p2 = (!mul_ln1118_12_fu_2049_p0.read().is_01() || !ap_const_lv26_1D4.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_12_fu_2049_p0.read()) * sc_biguint<26>(ap_const_lv26_1D4);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_130_fu_1941_p0() {
    mul_ln1118_130_fu_1941_p0 = sext_ln1118_100_fu_2684866_p0.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_130_fu_1941_p2() {
    mul_ln1118_130_fu_1941_p2 = (!mul_ln1118_130_fu_1941_p0.read().is_01() || !ap_const_lv21_1FFFF3.is_01())? sc_lv<21>(): sc_bigint<16>(mul_ln1118_130_fu_1941_p0.read()) * sc_bigint<21>(ap_const_lv21_1FFFF3);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_131_fu_1571_p0() {
    mul_ln1118_131_fu_1571_p0 =  (sc_lv<16>) (sext_ln1118_95_fu_2684829_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_131_fu_1571_p2() {
    mul_ln1118_131_fu_1571_p2 = (!mul_ln1118_131_fu_1571_p0.read().is_01() || !ap_const_lv25_87.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_131_fu_1571_p0.read()) * sc_biguint<25>(ap_const_lv25_87);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_132_fu_1964_p0() {
    mul_ln1118_132_fu_1964_p0 =  (sc_lv<16>) (sext_ln1118_95_fu_2684829_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_132_fu_1964_p2() {
    mul_ln1118_132_fu_1964_p2 = (!mul_ln1118_132_fu_1964_p0.read().is_01() || !ap_const_lv25_D9.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_132_fu_1964_p0.read()) * sc_biguint<25>(ap_const_lv25_D9);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_133_fu_1669_p0() {
    mul_ln1118_133_fu_1669_p0 =  (sc_lv<16>) (sext_ln1118_96_fu_2684838_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_133_fu_1669_p2() {
    mul_ln1118_133_fu_1669_p2 = (!mul_ln1118_133_fu_1669_p0.read().is_01() || !ap_const_lv26_3FFFCF9.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_133_fu_1669_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFCF9);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_134_fu_2280_p0() {
    mul_ln1118_134_fu_2280_p0 =  (sc_lv<16>) (sext_ln1118_95_fu_2684829_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_134_fu_2280_p2() {
    mul_ln1118_134_fu_2280_p2 = (!mul_ln1118_134_fu_2280_p0.read().is_01() || !ap_const_lv25_1FFFF76.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_134_fu_2280_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF76);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_135_fu_2166_p0() {
    mul_ln1118_135_fu_2166_p0 =  (sc_lv<16>) (sext_ln1118_96_fu_2684838_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_135_fu_2166_p2() {
    mul_ln1118_135_fu_2166_p2 = (!mul_ln1118_135_fu_2166_p0.read().is_01() || !ap_const_lv26_3FFFEF1.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_135_fu_2166_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFEF1);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_136_fu_2194_p0() {
    mul_ln1118_136_fu_2194_p0 =  (sc_lv<16>) (sext_ln1118_98_fu_2684853_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_136_fu_2194_p2() {
    mul_ln1118_136_fu_2194_p2 = (!mul_ln1118_136_fu_2194_p0.read().is_01() || !ap_const_lv24_43.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_136_fu_2194_p0.read()) * sc_biguint<24>(ap_const_lv24_43);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_137_fu_2151_p0() {
    mul_ln1118_137_fu_2151_p0 =  (sc_lv<16>) (sext_ln1118_95_fu_2684829_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_137_fu_2151_p2() {
    mul_ln1118_137_fu_2151_p2 = (!mul_ln1118_137_fu_2151_p0.read().is_01() || !ap_const_lv25_1FFFF0C.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_137_fu_2151_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF0C);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_138_fu_1454_p0() {
    mul_ln1118_138_fu_1454_p0 =  (sc_lv<16>) (sext_ln1118_96_fu_2684838_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_138_fu_1454_p2() {
    mul_ln1118_138_fu_1454_p2 = (!mul_ln1118_138_fu_1454_p0.read().is_01() || !ap_const_lv26_3FFFD44.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_138_fu_1454_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFD44);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_139_fu_1411_p0() {
    mul_ln1118_139_fu_1411_p0 =  (sc_lv<16>) (sext_ln1118_96_fu_2684838_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_139_fu_1411_p2() {
    mul_ln1118_139_fu_1411_p2 = (!mul_ln1118_139_fu_1411_p0.read().is_01() || !ap_const_lv26_3FFFE77.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_139_fu_1411_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFE77);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_13_fu_1986_p0() {
    mul_ln1118_13_fu_1986_p0 =  (sc_lv<16>) (sext_ln1118_fu_2681620_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_13_fu_1986_p2() {
    mul_ln1118_13_fu_1986_p2 = (!mul_ln1118_13_fu_1986_p0.read().is_01() || !ap_const_lv26_18F.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_13_fu_1986_p0.read()) * sc_biguint<26>(ap_const_lv26_18F);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_140_fu_1823_p0() {
    mul_ln1118_140_fu_1823_p0 =  (sc_lv<16>) (sext_ln1118_114_fu_2685405_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_140_fu_1823_p2() {
    mul_ln1118_140_fu_1823_p2 = (!mul_ln1118_140_fu_1823_p0.read().is_01() || !ap_const_lv26_105.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_140_fu_1823_p0.read()) * sc_biguint<26>(ap_const_lv26_105);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_141_fu_1979_p0() {
    mul_ln1118_141_fu_1979_p0 =  (sc_lv<16>) (sext_ln1118_114_fu_2685405_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_141_fu_1979_p2() {
    mul_ln1118_141_fu_1979_p2 = (!mul_ln1118_141_fu_1979_p0.read().is_01() || !ap_const_lv26_3FFFD20.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_141_fu_1979_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFD20);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_142_fu_1936_p0() {
    mul_ln1118_142_fu_1936_p0 =  (sc_lv<16>) (sext_ln1118_113_fu_2685396_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_142_fu_1936_p2() {
    mul_ln1118_142_fu_1936_p2 = (!mul_ln1118_142_fu_1936_p0.read().is_01() || !ap_const_lv25_B4.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_142_fu_1936_p0.read()) * sc_biguint<25>(ap_const_lv25_B4);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_143_fu_2342_p0() {
    mul_ln1118_143_fu_2342_p0 =  (sc_lv<16>) (sext_ln1118_113_fu_2685396_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_143_fu_2342_p2() {
    mul_ln1118_143_fu_2342_p2 = (!mul_ln1118_143_fu_2342_p0.read().is_01() || !ap_const_lv25_1FFFF06.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_143_fu_2342_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF06);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_144_fu_1681_p0() {
    mul_ln1118_144_fu_1681_p0 =  (sc_lv<16>) (sext_ln1118_114_fu_2685405_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_144_fu_1681_p2() {
    mul_ln1118_144_fu_1681_p2 = (!mul_ln1118_144_fu_1681_p0.read().is_01() || !ap_const_lv26_3FFFEAB.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_144_fu_1681_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFEAB);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_145_fu_1383_p0() {
    mul_ln1118_145_fu_1383_p0 =  (sc_lv<16>) (sext_ln1118_114_fu_2685405_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_145_fu_1383_p2() {
    mul_ln1118_145_fu_1383_p2 = (!mul_ln1118_145_fu_1383_p0.read().is_01() || !ap_const_lv26_3FFFD71.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_145_fu_1383_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFD71);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_146_fu_1683_p0() {
    mul_ln1118_146_fu_1683_p0 =  (sc_lv<16>) (sext_ln1118_116_fu_2685423_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_146_fu_1683_p2() {
    mul_ln1118_146_fu_1683_p2 = (!mul_ln1118_146_fu_1683_p0.read().is_01() || !ap_const_lv23_37.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_146_fu_1683_p0.read()) * sc_biguint<23>(ap_const_lv23_37);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_147_fu_1983_p0() {
    mul_ln1118_147_fu_1983_p0 =  (sc_lv<16>) (sext_ln1118_114_fu_2685405_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_147_fu_1983_p2() {
    mul_ln1118_147_fu_1983_p2 = (!mul_ln1118_147_fu_1983_p0.read().is_01() || !ap_const_lv26_3FFFEEA.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_147_fu_1983_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFEEA);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_148_fu_1386_p0() {
    mul_ln1118_148_fu_1386_p0 =  (sc_lv<16>) (sext_ln1118_116_fu_2685423_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_148_fu_1386_p2() {
    mul_ln1118_148_fu_1386_p2 = (!mul_ln1118_148_fu_1386_p0.read().is_01() || !ap_const_lv23_7FFFD4.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_148_fu_1386_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFD4);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_149_fu_1387_p0() {
    mul_ln1118_149_fu_1387_p0 =  (sc_lv<16>) (sext_ln1118_114_fu_2685405_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_149_fu_1387_p2() {
    mul_ln1118_149_fu_1387_p2 = (!mul_ln1118_149_fu_1387_p0.read().is_01() || !ap_const_lv26_3FFFCD9.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_149_fu_1387_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFCD9);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_14_fu_1389_p0() {
    mul_ln1118_14_fu_1389_p0 =  (sc_lv<16>) (sext_ln1118_fu_2681620_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_14_fu_1389_p2() {
    mul_ln1118_14_fu_1389_p2 = (!mul_ln1118_14_fu_1389_p0.read().is_01() || !ap_const_lv26_11B.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_14_fu_1389_p0.read()) * sc_biguint<26>(ap_const_lv26_11B);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_150_fu_2050_p0() {
    mul_ln1118_150_fu_2050_p0 =  (sc_lv<16>) (sext_ln1118_112_fu_2685386_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_150_fu_2050_p2() {
    mul_ln1118_150_fu_2050_p2 = (!mul_ln1118_150_fu_2050_p0.read().is_01() || !ap_const_lv24_FFFFB6.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_150_fu_2050_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFB6);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_151_fu_2051_p0() {
    mul_ln1118_151_fu_2051_p0 =  (sc_lv<16>) (sext_ln1118_112_fu_2685386_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_151_fu_2051_p2() {
    mul_ln1118_151_fu_2051_p2 = (!mul_ln1118_151_fu_2051_p0.read().is_01() || !ap_const_lv24_46.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_151_fu_2051_p0.read()) * sc_biguint<24>(ap_const_lv24_46);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_152_fu_2052_p0() {
    mul_ln1118_152_fu_2052_p0 =  (sc_lv<16>) (sext_ln1118_113_fu_2685396_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_152_fu_2052_p2() {
    mul_ln1118_152_fu_2052_p2 = (!mul_ln1118_152_fu_2052_p0.read().is_01() || !ap_const_lv25_FA.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_152_fu_2052_p0.read()) * sc_biguint<25>(ap_const_lv25_FA);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_153_fu_1690_p0() {
    mul_ln1118_153_fu_1690_p0 =  (sc_lv<16>) (sext_ln1118_113_fu_2685396_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_153_fu_1690_p2() {
    mul_ln1118_153_fu_1690_p2 = (!mul_ln1118_153_fu_1690_p0.read().is_01() || !ap_const_lv25_1FFFF7D.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_153_fu_1690_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF7D);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_154_fu_2054_p0() {
    mul_ln1118_154_fu_2054_p0 =  (sc_lv<16>) (sext_ln1118_112_fu_2685386_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_154_fu_2054_p2() {
    mul_ln1118_154_fu_2054_p2 = (!mul_ln1118_154_fu_2054_p0.read().is_01() || !ap_const_lv24_FFFFAF.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_154_fu_2054_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFAF);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_155_fu_2055_p0() {
    mul_ln1118_155_fu_2055_p0 =  (sc_lv<16>) (sext_ln1118_114_fu_2685405_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_155_fu_2055_p2() {
    mul_ln1118_155_fu_2055_p2 = (!mul_ln1118_155_fu_2055_p0.read().is_01() || !ap_const_lv26_3FFFDE6.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_155_fu_2055_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFDE6);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_156_fu_1394_p0() {
    mul_ln1118_156_fu_1394_p0 =  (sc_lv<16>) (sext_ln1118_112_fu_2685386_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_156_fu_1394_p2() {
    mul_ln1118_156_fu_1394_p2 = (!mul_ln1118_156_fu_1394_p0.read().is_01() || !ap_const_lv24_57.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_156_fu_1394_p0.read()) * sc_biguint<24>(ap_const_lv24_57);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_157_fu_2156_p0() {
    mul_ln1118_157_fu_2156_p0 = sext_ln1118_115_fu_2685418_p0.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_157_fu_2156_p2() {
    mul_ln1118_157_fu_2156_p2 = (!mul_ln1118_157_fu_2156_p0.read().is_01() || !ap_const_lv21_1FFFF3.is_01())? sc_lv<21>(): sc_bigint<16>(mul_ln1118_157_fu_2156_p0.read()) * sc_bigint<21>(ap_const_lv21_1FFFF3);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_158_fu_2113_p0() {
    mul_ln1118_158_fu_2113_p0 =  (sc_lv<16>) (sext_ln1118_114_fu_2685405_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_158_fu_2113_p2() {
    mul_ln1118_158_fu_2113_p2 = (!mul_ln1118_158_fu_2113_p0.read().is_01() || !ap_const_lv26_3FFFE6C.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_158_fu_2113_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFE6C);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_159_fu_2070_p0() {
    mul_ln1118_159_fu_2070_p0 =  (sc_lv<16>) (sext_ln1118_113_fu_2685396_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_159_fu_2070_p2() {
    mul_ln1118_159_fu_2070_p2 = (!mul_ln1118_159_fu_2070_p0.read().is_01() || !ap_const_lv25_1FFFF6A.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_159_fu_2070_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF6A);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_15_fu_1689_p0() {
    mul_ln1118_15_fu_1689_p0 =  (sc_lv<16>) (sext_ln1118_fu_2681620_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_15_fu_1689_p2() {
    mul_ln1118_15_fu_1689_p2 = (!mul_ln1118_15_fu_1689_p0.read().is_01() || !ap_const_lv26_3FFFECF.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_15_fu_1689_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFECF);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_160_fu_2233_p0() {
    mul_ln1118_160_fu_2233_p0 =  (sc_lv<16>) (sext_ln1118_112_fu_2685386_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_160_fu_2233_p2() {
    mul_ln1118_160_fu_2233_p2 = (!mul_ln1118_160_fu_2233_p0.read().is_01() || !ap_const_lv24_61.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_160_fu_2233_p0.read()) * sc_biguint<24>(ap_const_lv24_61);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_161_fu_2062_p0() {
    mul_ln1118_161_fu_2062_p0 =  (sc_lv<16>) (sext_ln1118_116_fu_2685423_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_161_fu_2062_p2() {
    mul_ln1118_161_fu_2062_p2 = (!mul_ln1118_161_fu_2062_p0.read().is_01() || !ap_const_lv23_7FFFCB.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_161_fu_2062_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFCB);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_162_fu_2019_p0() {
    mul_ln1118_162_fu_2019_p0 =  (sc_lv<16>) (sext_ln1118_112_fu_2685386_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_162_fu_2019_p2() {
    mul_ln1118_162_fu_2019_p2 = (!mul_ln1118_162_fu_2019_p0.read().is_01() || !ap_const_lv24_73.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_162_fu_2019_p0.read()) * sc_biguint<24>(ap_const_lv24_73);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_163_fu_1649_p0() {
    mul_ln1118_163_fu_1649_p0 =  (sc_lv<16>) (sext_ln1118_114_fu_2685405_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_163_fu_1649_p2() {
    mul_ln1118_163_fu_1649_p2 = (!mul_ln1118_163_fu_1649_p0.read().is_01() || !ap_const_lv26_166.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_163_fu_1649_p0.read()) * sc_biguint<26>(ap_const_lv26_166);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_164_fu_1535_p0() {
    mul_ln1118_164_fu_1535_p0 =  (sc_lv<16>) (sext_ln708_4_fu_2685965_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_164_fu_1535_p2() {
    mul_ln1118_164_fu_1535_p2 = (!mul_ln1118_164_fu_1535_p0.read().is_01() || !ap_const_lv24_FFFF8A.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_164_fu_1535_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF8A);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_165_fu_1691_p0() {
    mul_ln1118_165_fu_1691_p0 =  (sc_lv<16>) (sext_ln708_2_fu_2685948_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_165_fu_1691_p2() {
    mul_ln1118_165_fu_1691_p2 = (!mul_ln1118_165_fu_1691_p0.read().is_01() || !ap_const_lv25_1FFFF41.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_165_fu_1691_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF41);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_166_fu_2132_p0() {
    mul_ln1118_166_fu_2132_p0 =  (sc_lv<16>) (sext_ln708_1_fu_2685937_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_166_fu_2132_p2() {
    mul_ln1118_166_fu_2132_p2 = (!mul_ln1118_166_fu_2132_p0.read().is_01() || !ap_const_lv26_129.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_166_fu_2132_p0.read()) * sc_biguint<26>(ap_const_lv26_129);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_167_fu_1605_p0() {
    mul_ln1118_167_fu_1605_p0 =  (sc_lv<16>) (sext_ln708_2_fu_2685948_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_167_fu_1605_p2() {
    mul_ln1118_167_fu_1605_p2 = (!mul_ln1118_167_fu_1605_p0.read().is_01() || !ap_const_lv25_1FFFF58.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_167_fu_1605_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF58);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_168_fu_2088_p0() {
    mul_ln1118_168_fu_2088_p0 =  (sc_lv<16>) (sext_ln708_2_fu_2685948_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_168_fu_2088_p2() {
    mul_ln1118_168_fu_2088_p2 = (!mul_ln1118_168_fu_2088_p0.read().is_01() || !ap_const_lv25_8B.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_168_fu_2088_p0.read()) * sc_biguint<25>(ap_const_lv25_8B);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_169_fu_1974_p0() {
    mul_ln1118_169_fu_1974_p0 =  (sc_lv<16>) (sext_ln708_2_fu_2685948_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_169_fu_1974_p2() {
    mul_ln1118_169_fu_1974_p2 = (!mul_ln1118_169_fu_1974_p0.read().is_01() || !ap_const_lv25_F9.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_169_fu_1974_p0.read()) * sc_biguint<25>(ap_const_lv25_F9);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_16_fu_1471_p0() {
    mul_ln1118_16_fu_1471_p0 =  (sc_lv<16>) (sext_ln1118_5_fu_2681632_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_16_fu_1471_p2() {
    mul_ln1118_16_fu_1471_p2 = (!mul_ln1118_16_fu_1471_p0.read().is_01() || !ap_const_lv25_C4.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_16_fu_1471_p0.read()) * sc_biguint<25>(ap_const_lv25_C4);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_170_fu_1675_p0() {
    mul_ln1118_170_fu_1675_p0 =  (sc_lv<16>) (sext_ln708_5_fu_2685972_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_170_fu_1675_p2() {
    mul_ln1118_170_fu_1675_p2 = (!mul_ln1118_170_fu_1675_p0.read().is_01() || !ap_const_lv23_7FFFCE.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_170_fu_1675_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFCE);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_171_fu_2190_p0() {
    mul_ln1118_171_fu_2190_p0 =  (sc_lv<16>) (sext_ln708_1_fu_2685937_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_171_fu_2190_p2() {
    mul_ln1118_171_fu_2190_p2 = (!mul_ln1118_171_fu_2190_p0.read().is_01() || !ap_const_lv26_3FFFEA9.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_171_fu_2190_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFEA9);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_172_fu_1413_p0() {
    mul_ln1118_172_fu_1413_p0 =  (sc_lv<16>) (sext_ln708_2_fu_2685948_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_172_fu_1413_p2() {
    mul_ln1118_172_fu_1413_p2 = (!mul_ln1118_172_fu_1413_p0.read().is_01() || !ap_const_lv25_8F.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_172_fu_1413_p0.read()) * sc_biguint<25>(ap_const_lv25_8F);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_173_fu_2140_p0() {
    mul_ln1118_173_fu_2140_p0 =  (sc_lv<16>) (sext_ln708_1_fu_2685937_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_173_fu_2140_p2() {
    mul_ln1118_173_fu_2140_p2 = (!mul_ln1118_173_fu_2140_p0.read().is_01() || !ap_const_lv26_3FFFEEF.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_173_fu_2140_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFEEF);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_174_fu_1415_p0() {
    mul_ln1118_174_fu_1415_p0 =  (sc_lv<16>) (sext_ln708_fu_2685930_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_174_fu_1415_p2() {
    mul_ln1118_174_fu_1415_p2 = (!mul_ln1118_174_fu_1415_p0.read().is_01() || !ap_const_lv22_19.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_174_fu_1415_p0.read()) * sc_biguint<22>(ap_const_lv22_19);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_175_fu_1480_p0() {
    mul_ln1118_175_fu_1480_p0 =  (sc_lv<16>) (sext_ln708_1_fu_2685937_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_175_fu_1480_p2() {
    mul_ln1118_175_fu_1480_p2 = (!mul_ln1118_175_fu_1480_p0.read().is_01() || !ap_const_lv26_14C.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_175_fu_1480_p0.read()) * sc_biguint<26>(ap_const_lv26_14C);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_176_fu_1417_p0() {
    mul_ln1118_176_fu_1417_p0 =  (sc_lv<16>) (sext_ln708_fu_2685930_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_176_fu_1417_p2() {
    mul_ln1118_176_fu_1417_p2 = (!mul_ln1118_176_fu_1417_p0.read().is_01() || !ap_const_lv22_1A.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_176_fu_1417_p0.read()) * sc_biguint<22>(ap_const_lv22_1A);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_177_fu_1482_p0() {
    mul_ln1118_177_fu_1482_p0 =  (sc_lv<16>) (sext_ln708_4_fu_2685965_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_177_fu_1482_p2() {
    mul_ln1118_177_fu_1482_p2 = (!mul_ln1118_177_fu_1482_p0.read().is_01() || !ap_const_lv24_FFFF86.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_177_fu_1482_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF86);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_178_fu_2145_p0() {
    mul_ln1118_178_fu_2145_p0 =  (sc_lv<16>) (sext_ln708_2_fu_2685948_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_178_fu_2145_p2() {
    mul_ln1118_178_fu_2145_p2 = (!mul_ln1118_178_fu_2145_p0.read().is_01() || !ap_const_lv25_1FFFF65.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_178_fu_2145_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF65);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_179_fu_1484_p0() {
    mul_ln1118_179_fu_1484_p0 =  (sc_lv<16>) (sext_ln708_2_fu_2685948_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_179_fu_1484_p2() {
    mul_ln1118_179_fu_1484_p2 = (!mul_ln1118_179_fu_1484_p0.read().is_01() || !ap_const_lv25_A2.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_179_fu_1484_p0.read()) * sc_biguint<25>(ap_const_lv25_A2);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_17_fu_2300_p0() {
    mul_ln1118_17_fu_2300_p0 =  (sc_lv<16>) (sext_ln1118_fu_2681620_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_17_fu_2300_p2() {
    mul_ln1118_17_fu_2300_p2 = (!mul_ln1118_17_fu_2300_p0.read().is_01() || !ap_const_lv26_157.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_17_fu_2300_p0.read()) * sc_biguint<26>(ap_const_lv26_157);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_180_fu_1784_p0() {
    mul_ln1118_180_fu_1784_p0 =  (sc_lv<16>) (sext_ln708_5_fu_2685972_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_180_fu_1784_p2() {
    mul_ln1118_180_fu_1784_p2 = (!mul_ln1118_180_fu_1784_p0.read().is_01() || !ap_const_lv23_31.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_180_fu_1784_p0.read()) * sc_biguint<23>(ap_const_lv23_31);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_181_fu_1422_p0() {
    mul_ln1118_181_fu_1422_p0 =  (sc_lv<16>) (sext_ln708_1_fu_2685937_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_181_fu_1422_p2() {
    mul_ln1118_181_fu_1422_p2 = (!mul_ln1118_181_fu_1422_p0.read().is_01() || !ap_const_lv26_3FFFEBD.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_181_fu_1422_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFEBD);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_182_fu_2149_p0() {
    mul_ln1118_182_fu_2149_p0 =  (sc_lv<16>) (sext_ln708_1_fu_2685937_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_182_fu_2149_p2() {
    mul_ln1118_182_fu_2149_p2 = (!mul_ln1118_182_fu_2149_p0.read().is_01() || !ap_const_lv26_3FFFEC9.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_182_fu_2149_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFEC9);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_183_fu_2150_p0() {
    mul_ln1118_183_fu_2150_p0 =  (sc_lv<16>) (sext_ln708_1_fu_2685937_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_183_fu_2150_p2() {
    mul_ln1118_183_fu_2150_p2 = (!mul_ln1118_183_fu_2150_p0.read().is_01() || !ap_const_lv26_177.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_183_fu_2150_p0.read()) * sc_biguint<26>(ap_const_lv26_177);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_184_fu_2044_p0() {
    mul_ln1118_184_fu_2044_p0 =  (sc_lv<16>) (sext_ln708_4_fu_2685965_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_184_fu_2044_p2() {
    mul_ln1118_184_fu_2044_p2 = (!mul_ln1118_184_fu_2044_p0.read().is_01() || !ap_const_lv24_49.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_184_fu_2044_p0.read()) * sc_biguint<24>(ap_const_lv24_49);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_185_fu_1674_p0() {
    mul_ln1118_185_fu_1674_p0 =  (sc_lv<16>) (sext_ln708_2_fu_2685948_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_185_fu_1674_p2() {
    mul_ln1118_185_fu_1674_p2 = (!mul_ln1118_185_fu_1674_p0.read().is_01() || !ap_const_lv25_1FFFF1B.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_185_fu_1674_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF1B);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_186_fu_1522_p0() {
    mul_ln1118_186_fu_1522_p0 = sext_ln708_3_fu_2685960_p0.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_186_fu_1522_p2() {
    mul_ln1118_186_fu_1522_p2 = (!mul_ln1118_186_fu_1522_p0.read().is_01() || !ap_const_lv21_D.is_01())? sc_lv<21>(): sc_bigint<16>(mul_ln1118_186_fu_1522_p0.read()) * sc_biguint<21>(ap_const_lv21_D);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_187_fu_1370_p0() {
    mul_ln1118_187_fu_1370_p0 =  (sc_lv<16>) (sext_ln708_fu_2685930_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_187_fu_1370_p2() {
    mul_ln1118_187_fu_1370_p2 = (!mul_ln1118_187_fu_1370_p0.read().is_01() || !ap_const_lv22_1B.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_187_fu_1370_p0.read()) * sc_biguint<22>(ap_const_lv22_1B);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_188_fu_2100_p0() {
    mul_ln1118_188_fu_2100_p0 =  (sc_lv<16>) (sext_ln1118_133_fu_2686467_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_188_fu_2100_p2() {
    mul_ln1118_188_fu_2100_p2 = (!mul_ln1118_188_fu_2100_p0.read().is_01() || !ap_const_lv26_11B.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_188_fu_2100_p0.read()) * sc_biguint<26>(ap_const_lv26_11B);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_189_fu_1801_p0() {
    mul_ln1118_189_fu_1801_p0 =  (sc_lv<16>) (sext_ln1118_136_fu_2686493_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_189_fu_1801_p2() {
    mul_ln1118_189_fu_1801_p2 = (!mul_ln1118_189_fu_1801_p0.read().is_01() || !ap_const_lv23_7FFFCC.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_189_fu_1801_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFCC);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_18_fu_2148_p0() {
    mul_ln1118_18_fu_2148_p0 =  (sc_lv<16>) (sext_ln1118_20_fu_2682113_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_18_fu_2148_p2() {
    mul_ln1118_18_fu_2148_p2 = (!mul_ln1118_18_fu_2148_p0.read().is_01() || !ap_const_lv26_107.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_18_fu_2148_p0.read()) * sc_biguint<26>(ap_const_lv26_107);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_190_fu_2085_p0() {
    mul_ln1118_190_fu_2085_p0 =  (sc_lv<16>) (sext_ln1118_133_fu_2686467_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_190_fu_2085_p2() {
    mul_ln1118_190_fu_2085_p2 = (!mul_ln1118_190_fu_2085_p0.read().is_01() || !ap_const_lv26_3FFFD65.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_190_fu_2085_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFD65);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_191_fu_1715_p0() {
    mul_ln1118_191_fu_1715_p0 =  (sc_lv<16>) (sext_ln1118_132_fu_2686458_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_191_fu_1715_p2() {
    mul_ln1118_191_fu_1715_p2 = (!mul_ln1118_191_fu_1715_p0.read().is_01() || !ap_const_lv25_1FFFF79.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_191_fu_1715_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF79);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_192_fu_1345_p0() {
    mul_ln1118_192_fu_1345_p0 =  (sc_lv<16>) (sext_ln1118_133_fu_2686467_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_192_fu_1345_p2() {
    mul_ln1118_192_fu_1345_p2 = (!mul_ln1118_192_fu_1345_p0.read().is_01() || !ap_const_lv26_3FFFEE3.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_192_fu_1345_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFEE3);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_193_fu_2283_p0() {
    mul_ln1118_193_fu_2283_p0 =  (sc_lv<16>) (sext_ln1118_133_fu_2686467_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_193_fu_2283_p2() {
    mul_ln1118_193_fu_2283_p2 = (!mul_ln1118_193_fu_2283_p0.read().is_01() || !ap_const_lv26_3FFFEF2.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_193_fu_2283_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFEF2);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_194_fu_1586_p0() {
    mul_ln1118_194_fu_1586_p0 =  (sc_lv<16>) (sext_ln1118_132_fu_2686458_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_194_fu_1586_p2() {
    mul_ln1118_194_fu_1586_p2 = (!mul_ln1118_194_fu_1586_p0.read().is_01() || !ap_const_lv25_1FFFF67.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_194_fu_1586_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF67);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_195_fu_1543_p0() {
    mul_ln1118_195_fu_1543_p0 =  (sc_lv<16>) (sext_ln1118_133_fu_2686467_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_195_fu_1543_p2() {
    mul_ln1118_195_fu_1543_p2 = (!mul_ln1118_195_fu_1543_p0.read().is_01() || !ap_const_lv26_3FFFE7F.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_195_fu_1543_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFE7F);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_196_fu_1827_p0() {
    mul_ln1118_196_fu_1827_p0 =  (sc_lv<16>) (sext_ln1118_136_fu_2686493_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_196_fu_1827_p2() {
    mul_ln1118_196_fu_1827_p2 = (!mul_ln1118_196_fu_1827_p0.read().is_01() || !ap_const_lv23_23.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_196_fu_1827_p0.read()) * sc_biguint<23>(ap_const_lv23_23);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_197_fu_1912_p0() {
    mul_ln1118_197_fu_1912_p0 =  (sc_lv<16>) (sext_ln1118_133_fu_2686467_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_197_fu_1912_p2() {
    mul_ln1118_197_fu_1912_p2 = (!mul_ln1118_197_fu_1912_p0.read().is_01() || !ap_const_lv26_3FFFEB9.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_197_fu_1912_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFEB9);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_198_fu_2168_p0() {
    mul_ln1118_198_fu_2168_p0 =  (sc_lv<16>) (sext_ln1118_133_fu_2686467_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_198_fu_2168_p2() {
    mul_ln1118_198_fu_2168_p2 = (!mul_ln1118_198_fu_2168_p0.read().is_01() || !ap_const_lv26_3FFFD25.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_198_fu_2168_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFD25);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_199_fu_1806_p0() {
    mul_ln1118_199_fu_1806_p0 =  (sc_lv<16>) (sext_ln1118_132_fu_2686458_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_199_fu_1806_p2() {
    mul_ln1118_199_fu_1806_p2 = (!mul_ln1118_199_fu_1806_p0.read().is_01() || !ap_const_lv25_B5.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_199_fu_1806_p0.read()) * sc_biguint<25>(ap_const_lv25_B5);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_19_fu_1996_p0() {
    mul_ln1118_19_fu_1996_p0 = sext_ln1118_19_fu_2682108_p0.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_19_fu_1996_p2() {
    mul_ln1118_19_fu_1996_p2 = (!mul_ln1118_19_fu_1996_p0.read().is_01() || !ap_const_lv22_3FFFE3.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_19_fu_1996_p0.read()) * sc_bigint<22>(ap_const_lv22_3FFFE3);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_200_fu_2234_p0() {
    mul_ln1118_200_fu_2234_p0 =  (sc_lv<16>) (sext_ln1118_133_fu_2686467_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_200_fu_2234_p2() {
    mul_ln1118_200_fu_2234_p2 = (!mul_ln1118_200_fu_2234_p0.read().is_01() || !ap_const_lv26_136.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_200_fu_2234_p0.read()) * sc_biguint<26>(ap_const_lv26_136);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_201_fu_1872_p0() {
    mul_ln1118_201_fu_1872_p0 =  (sc_lv<16>) (sext_ln1118_134_fu_2686483_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_201_fu_1872_p2() {
    mul_ln1118_201_fu_1872_p2 = (!mul_ln1118_201_fu_1872_p0.read().is_01() || !ap_const_lv24_59.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_201_fu_1872_p0.read()) * sc_biguint<24>(ap_const_lv24_59);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_202_fu_1873_p0() {
    mul_ln1118_202_fu_1873_p0 =  (sc_lv<16>) (sext_ln1118_132_fu_2686458_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_202_fu_1873_p2() {
    mul_ln1118_202_fu_1873_p2 = (!mul_ln1118_202_fu_1873_p0.read().is_01() || !ap_const_lv25_1FFFF2B.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_202_fu_1873_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF2B);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_203_fu_2237_p0() {
    mul_ln1118_203_fu_2237_p0 =  (sc_lv<16>) (sext_ln1118_134_fu_2686483_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_203_fu_2237_p2() {
    mul_ln1118_203_fu_2237_p2 = (!mul_ln1118_203_fu_2237_p0.read().is_01() || !ap_const_lv24_4A.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_203_fu_2237_p0.read()) * sc_biguint<24>(ap_const_lv24_4A);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_204_fu_1576_p0() {
    mul_ln1118_204_fu_1576_p0 =  (sc_lv<16>) (sext_ln1118_132_fu_2686458_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_204_fu_1576_p2() {
    mul_ln1118_204_fu_1576_p2 = (!mul_ln1118_204_fu_1576_p0.read().is_01() || !ap_const_lv25_1FFFF5B.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_204_fu_1576_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF5B);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_205_fu_1876_p0() {
    mul_ln1118_205_fu_1876_p0 =  (sc_lv<16>) (sext_ln1118_133_fu_2686467_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_205_fu_1876_p2() {
    mul_ln1118_205_fu_1876_p2 = (!mul_ln1118_205_fu_1876_p0.read().is_01() || !ap_const_lv26_3FFFEEB.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_205_fu_1876_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFEEB);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_206_fu_2240_p0() {
    mul_ln1118_206_fu_2240_p0 =  (sc_lv<16>) (sext_ln1118_133_fu_2686467_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_206_fu_2240_p2() {
    mul_ln1118_206_fu_2240_p2 = (!mul_ln1118_206_fu_2240_p0.read().is_01() || !ap_const_lv26_3FFFE9D.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_206_fu_2240_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFE9D);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_207_fu_1878_p0() {
    mul_ln1118_207_fu_1878_p0 =  (sc_lv<16>) (sext_ln1118_133_fu_2686467_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_207_fu_1878_p2() {
    mul_ln1118_207_fu_1878_p2 = (!mul_ln1118_207_fu_1878_p0.read().is_01() || !ap_const_lv26_3FFFEBD.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_207_fu_1878_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFEBD);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_208_fu_1879_p0() {
    mul_ln1118_208_fu_1879_p0 =  (sc_lv<16>) (sext_ln1118_133_fu_2686467_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_208_fu_1879_p2() {
    mul_ln1118_208_fu_1879_p2 = (!mul_ln1118_208_fu_1879_p0.read().is_01() || !ap_const_lv26_172.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_208_fu_1879_p0.read()) * sc_biguint<26>(ap_const_lv26_172);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_209_fu_2243_p0() {
    mul_ln1118_209_fu_2243_p0 =  (sc_lv<16>) (sext_ln1118_152_fu_2687090_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_209_fu_2243_p2() {
    mul_ln1118_209_fu_2243_p2 = (!mul_ln1118_209_fu_2243_p0.read().is_01() || !ap_const_lv25_CD.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_209_fu_2243_p0.read()) * sc_biguint<25>(ap_const_lv25_CD);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_20_fu_2201_p0() {
    mul_ln1118_20_fu_2201_p0 =  (sc_lv<16>) (sext_ln1118_21_fu_2682126_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_20_fu_2201_p2() {
    mul_ln1118_20_fu_2201_p2 = (!mul_ln1118_20_fu_2201_p0.read().is_01() || !ap_const_lv23_7FFFC7.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_20_fu_2201_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFC7);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_210_fu_2244_p0() {
    mul_ln1118_210_fu_2244_p0 =  (sc_lv<16>) (sext_ln1118_151_fu_2687081_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_210_fu_2244_p2() {
    mul_ln1118_210_fu_2244_p2 = (!mul_ln1118_210_fu_2244_p0.read().is_01() || !ap_const_lv26_11C.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_210_fu_2244_p0.read()) * sc_biguint<26>(ap_const_lv26_11C);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_211_fu_1583_p0() {
    mul_ln1118_211_fu_1583_p0 =  (sc_lv<16>) (sext_ln1118_153_fu_2687100_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_211_fu_1583_p2() {
    mul_ln1118_211_fu_1583_p2 = (!mul_ln1118_211_fu_1583_p0.read().is_01() || !ap_const_lv24_71.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_211_fu_1583_p0.read()) * sc_biguint<24>(ap_const_lv24_71);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_212_fu_1780_p0() {
    mul_ln1118_212_fu_1780_p0 =  (sc_lv<16>) (sext_ln1118_152_fu_2687090_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_212_fu_1780_p2() {
    mul_ln1118_212_fu_1780_p2 = (!mul_ln1118_212_fu_1780_p0.read().is_01() || !ap_const_lv25_B0.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_212_fu_1780_p0.read()) * sc_biguint<25>(ap_const_lv25_B0);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_213_fu_2173_p0() {
    mul_ln1118_213_fu_2173_p0 =  (sc_lv<16>) (sext_ln1118_153_fu_2687100_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_213_fu_2173_p2() {
    mul_ln1118_213_fu_2173_p2 = (!mul_ln1118_213_fu_2173_p0.read().is_01() || !ap_const_lv24_6E.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_213_fu_2173_p0.read()) * sc_biguint<24>(ap_const_lv24_6E);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_214_fu_2350_p0() {
    mul_ln1118_214_fu_2350_p0 =  (sc_lv<16>) (sext_ln1118_152_fu_2687090_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_214_fu_2350_p2() {
    mul_ln1118_214_fu_2350_p2 = (!mul_ln1118_214_fu_2350_p0.read().is_01() || !ap_const_lv25_92.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_214_fu_2350_p0.read()) * sc_biguint<25>(ap_const_lv25_92);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_215_fu_1542_p0() {
    mul_ln1118_215_fu_1542_p0 =  (sc_lv<16>) (sext_ln1118_153_fu_2687100_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_215_fu_1542_p2() {
    mul_ln1118_215_fu_1542_p2 = (!mul_ln1118_215_fu_1542_p0.read().is_01() || !ap_const_lv24_5D.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_215_fu_1542_p0.read()) * sc_biguint<24>(ap_const_lv24_5D);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_216_fu_1910_p0() {
    mul_ln1118_216_fu_1910_p0 =  (sc_lv<16>) (sext_ln1118_153_fu_2687100_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_216_fu_1910_p2() {
    mul_ln1118_216_fu_1910_p2 = (!mul_ln1118_216_fu_1910_p0.read().is_01() || !ap_const_lv24_77.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_216_fu_1910_p0.read()) * sc_biguint<24>(ap_const_lv24_77);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_217_fu_1867_p0() {
    mul_ln1118_217_fu_1867_p0 =  (sc_lv<16>) (sext_ln1118_154_fu_2687111_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_217_fu_1867_p2() {
    mul_ln1118_217_fu_1867_p2 = (!mul_ln1118_217_fu_1867_p0.read().is_01() || !ap_const_lv22_3FFFE7.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_217_fu_1867_p0.read()) * sc_bigint<22>(ap_const_lv22_3FFFE7);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_218_fu_1497_p0() {
    mul_ln1118_218_fu_1497_p0 =  (sc_lv<16>) (sext_ln1118_154_fu_2687111_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_218_fu_1497_p2() {
    mul_ln1118_218_fu_1497_p2 = (!mul_ln1118_218_fu_1497_p0.read().is_01() || !ap_const_lv22_3FFFE6.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_218_fu_1497_p0.read()) * sc_bigint<22>(ap_const_lv22_3FFFE6);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_219_fu_1781_p0() {
    mul_ln1118_219_fu_1781_p0 =  (sc_lv<16>) (sext_ln1118_151_fu_2687081_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_219_fu_1781_p2() {
    mul_ln1118_219_fu_1781_p2 = (!mul_ln1118_219_fu_1781_p0.read().is_01() || !ap_const_lv26_1C4.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_219_fu_1781_p0.read()) * sc_biguint<26>(ap_const_lv26_1C4);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_21_fu_1831_p0() {
    mul_ln1118_21_fu_1831_p0 =  (sc_lv<16>) (sext_ln1118_20_fu_2682113_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_21_fu_1831_p2() {
    mul_ln1118_21_fu_1831_p2 = (!mul_ln1118_21_fu_1831_p0.read().is_01() || !ap_const_lv26_13E.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_21_fu_1831_p0.read()) * sc_biguint<26>(ap_const_lv26_13E);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_220_fu_2065_p0() {
    mul_ln1118_220_fu_2065_p0 =  (sc_lv<16>) (sext_ln1118_151_fu_2687081_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_220_fu_2065_p2() {
    mul_ln1118_220_fu_2065_p2 = (!mul_ln1118_220_fu_2065_p0.read().is_01() || !ap_const_lv26_3FFFEB6.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_220_fu_2065_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFEB6);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_221_fu_1368_p0() {
    mul_ln1118_221_fu_1368_p0 =  (sc_lv<16>) (sext_ln1118_152_fu_2687090_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_221_fu_1368_p2() {
    mul_ln1118_221_fu_1368_p2 = (!mul_ln1118_221_fu_1368_p0.read().is_01() || !ap_const_lv25_A6.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_221_fu_1368_p0.read()) * sc_biguint<25>(ap_const_lv25_A6);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_222_fu_2107_p0() {
    mul_ln1118_222_fu_2107_p0 =  (sc_lv<16>) (sext_ln1118_153_fu_2687100_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_222_fu_2107_p2() {
    mul_ln1118_222_fu_2107_p2 = (!mul_ln1118_222_fu_2107_p0.read().is_01() || !ap_const_lv24_59.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_222_fu_2107_p0.read()) * sc_biguint<24>(ap_const_lv24_59);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_223_fu_1609_p0() {
    mul_ln1118_223_fu_1609_p0 =  (sc_lv<16>) (sext_ln1118_153_fu_2687100_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_223_fu_1609_p2() {
    mul_ln1118_223_fu_1609_p2 = (!mul_ln1118_223_fu_1609_p0.read().is_01() || !ap_const_lv24_FFFFBB.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_223_fu_1609_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFBB);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_224_fu_1566_p0() {
    mul_ln1118_224_fu_1566_p0 =  (sc_lv<16>) (sext_ln1118_152_fu_2687090_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_224_fu_1566_p2() {
    mul_ln1118_224_fu_1566_p2 = (!mul_ln1118_224_fu_1566_p0.read().is_01() || !ap_const_lv25_E6.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_224_fu_1566_p0.read()) * sc_biguint<25>(ap_const_lv25_E6);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_225_fu_2326_p0() {
    mul_ln1118_225_fu_2326_p0 =  (sc_lv<16>) (sext_ln1118_151_fu_2687081_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_225_fu_2326_p2() {
    mul_ln1118_225_fu_2326_p2 = (!mul_ln1118_225_fu_2326_p0.read().is_01() || !ap_const_lv26_13C.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_225_fu_2326_p0.read()) * sc_biguint<26>(ap_const_lv26_13C);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_226_fu_2327_p0() {
    mul_ln1118_226_fu_2327_p0 =  (sc_lv<16>) (sext_ln1118_151_fu_2687081_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_226_fu_2327_p2() {
    mul_ln1118_226_fu_2327_p2 = (!mul_ln1118_226_fu_2327_p0.read().is_01() || !ap_const_lv26_3FFFED1.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_226_fu_2327_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFED1);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_227_fu_2328_p0() {
    mul_ln1118_227_fu_2328_p0 =  (sc_lv<16>) (sext_ln1118_154_fu_2687111_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_227_fu_2328_p2() {
    mul_ln1118_227_fu_2328_p2 = (!mul_ln1118_227_fu_2328_p0.read().is_01() || !ap_const_lv22_1D.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_227_fu_2328_p0.read()) * sc_biguint<22>(ap_const_lv22_1D);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_228_fu_1966_p0() {
    mul_ln1118_228_fu_1966_p0 =  (sc_lv<16>) (sext_ln1118_154_fu_2687111_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_228_fu_1966_p2() {
    mul_ln1118_228_fu_1966_p2 = (!mul_ln1118_228_fu_1966_p0.read().is_01() || !ap_const_lv22_1A.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_228_fu_1966_p0.read()) * sc_biguint<22>(ap_const_lv22_1A);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_229_fu_1604_p0() {
    mul_ln1118_229_fu_1604_p0 =  (sc_lv<16>) (sext_ln1118_153_fu_2687100_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_229_fu_1604_p2() {
    mul_ln1118_229_fu_1604_p2 = (!mul_ln1118_229_fu_1604_p0.read().is_01() || !ap_const_lv24_4A.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_229_fu_1604_p0.read()) * sc_biguint<24>(ap_const_lv24_4A);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_22_fu_1461_p0() {
    mul_ln1118_22_fu_1461_p0 =  (sc_lv<16>) (sext_ln1118_18_fu_2682096_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_22_fu_1461_p2() {
    mul_ln1118_22_fu_1461_p2 = (!mul_ln1118_22_fu_1461_p0.read().is_01() || !ap_const_lv25_BA.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_22_fu_1461_p0.read()) * sc_biguint<25>(ap_const_lv25_BA);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_230_fu_1968_p0() {
    mul_ln1118_230_fu_1968_p0 =  (sc_lv<16>) (sext_ln1118_152_fu_2687090_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_230_fu_1968_p2() {
    mul_ln1118_230_fu_1968_p2 = (!mul_ln1118_230_fu_1968_p0.read().is_01() || !ap_const_lv25_1FFFF64.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_230_fu_1968_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF64);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_231_fu_2332_p0() {
    mul_ln1118_231_fu_2332_p0 =  (sc_lv<16>) (sext_ln1118_170_fu_2687698_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_231_fu_2332_p2() {
    mul_ln1118_231_fu_2332_p2 = (!mul_ln1118_231_fu_2332_p0.read().is_01() || !ap_const_lv23_7FFFCC.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_231_fu_2332_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFCC);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_232_fu_1970_p0() {
    mul_ln1118_232_fu_1970_p0 =  (sc_lv<16>) (sext_ln1118_172_fu_2687709_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_232_fu_1970_p2() {
    mul_ln1118_232_fu_1970_p2 = (!mul_ln1118_232_fu_1970_p0.read().is_01() || !ap_const_lv22_13.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_232_fu_1970_p0.read()) * sc_biguint<22>(ap_const_lv22_13);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_233_fu_2334_p0() {
    mul_ln1118_233_fu_2334_p0 =  (sc_lv<16>) (sext_ln1118_168_fu_2687685_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_233_fu_2334_p2() {
    mul_ln1118_233_fu_2334_p2 = (!mul_ln1118_233_fu_2334_p0.read().is_01() || !ap_const_lv26_118.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_233_fu_2334_p0.read()) * sc_biguint<26>(ap_const_lv26_118);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_234_fu_1673_p0() {
    mul_ln1118_234_fu_1673_p0 =  (sc_lv<16>) (sext_ln1118_172_fu_2687709_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_234_fu_1673_p2() {
    mul_ln1118_234_fu_1673_p2 = (!mul_ln1118_234_fu_1673_p0.read().is_01() || !ap_const_lv22_16.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_234_fu_1673_p0.read()) * sc_biguint<22>(ap_const_lv22_16);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_236_fu_1973_p0() {
    mul_ln1118_236_fu_1973_p0 =  (sc_lv<16>) (sext_ln1118_171_fu_2687703_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_236_fu_1973_p2() {
    mul_ln1118_236_fu_1973_p2 = (!mul_ln1118_236_fu_1973_p0.read().is_01() || !ap_const_lv24_FFFFAC.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_236_fu_1973_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFAC);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_237_fu_2337_p0() {
    mul_ln1118_237_fu_2337_p0 =  (sc_lv<16>) (sext_ln1118_168_fu_2687685_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_237_fu_2337_p2() {
    mul_ln1118_237_fu_2337_p2 = (!mul_ln1118_237_fu_2337_p0.read().is_01() || !ap_const_lv26_3FFFDDA.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_237_fu_2337_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFDDA);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_238_fu_1676_p0() {
    mul_ln1118_238_fu_1676_p0 =  (sc_lv<16>) (sext_ln1118_171_fu_2687703_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_238_fu_1676_p2() {
    mul_ln1118_238_fu_1676_p2 = (!mul_ln1118_238_fu_1676_p0.read().is_01() || !ap_const_lv24_FFFFA5.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_238_fu_1676_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFA5);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_239_fu_2339_p0() {
    mul_ln1118_239_fu_2339_p0 =  (sc_lv<16>) (sext_ln1118_167_fu_2687673_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_239_fu_2339_p2() {
    mul_ln1118_239_fu_2339_p2 = (!mul_ln1118_239_fu_2339_p0.read().is_01() || !ap_const_lv25_AA.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_239_fu_2339_p0.read()) * sc_biguint<25>(ap_const_lv25_AA);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_23_fu_1418_p0() {
    mul_ln1118_23_fu_1418_p0 =  (sc_lv<16>) (sext_ln1118_21_fu_2682126_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_23_fu_1418_p2() {
    mul_ln1118_23_fu_1418_p2 = (!mul_ln1118_23_fu_1418_p0.read().is_01() || !ap_const_lv23_7FFFC3.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_23_fu_1418_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFC3);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_240_fu_1614_p0() {
    mul_ln1118_240_fu_1614_p0 =  (sc_lv<16>) (sext_ln1118_167_fu_2687673_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_240_fu_1614_p2() {
    mul_ln1118_240_fu_1614_p2 = (!mul_ln1118_240_fu_1614_p0.read().is_01() || !ap_const_lv25_9F.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_240_fu_1614_p0.read()) * sc_biguint<25>(ap_const_lv25_9F);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_241_fu_2102_p0() {
    mul_ln1118_241_fu_2102_p0 =  (sc_lv<16>) (sext_ln1118_167_fu_2687673_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_241_fu_2102_p2() {
    mul_ln1118_241_fu_2102_p2 = (!mul_ln1118_241_fu_2102_p0.read().is_01() || !ap_const_lv25_1FFFF27.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_241_fu_2102_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF27);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_242_fu_1623_p0() {
    mul_ln1118_242_fu_1623_p0 =  (sc_lv<16>) (sext_ln1118_167_fu_2687673_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_242_fu_1623_p2() {
    mul_ln1118_242_fu_1623_p2 = (!mul_ln1118_242_fu_1623_p0.read().is_01() || !ap_const_lv25_A3.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_242_fu_1623_p0.read()) * sc_biguint<25>(ap_const_lv25_A3);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_244_fu_1580_p0() {
    mul_ln1118_244_fu_1580_p0 =  (sc_lv<16>) (sext_ln1118_167_fu_2687673_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_244_fu_1580_p2() {
    mul_ln1118_244_fu_1580_p2 = (!mul_ln1118_244_fu_1580_p0.read().is_01() || !ap_const_lv25_D4.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_244_fu_1580_p0.read()) * sc_biguint<25>(ap_const_lv25_D4);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_245_fu_1646_p0() {
    mul_ln1118_245_fu_1646_p0 =  (sc_lv<16>) (sext_ln1118_168_fu_2687685_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_245_fu_1646_p2() {
    mul_ln1118_245_fu_1646_p2 = (!mul_ln1118_245_fu_1646_p0.read().is_01() || !ap_const_lv26_116.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_245_fu_1646_p0.read()) * sc_biguint<26>(ap_const_lv26_116);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_246_fu_1976_p0() {
    mul_ln1118_246_fu_1976_p0 =  (sc_lv<16>) (sext_ln1118_167_fu_2687673_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_246_fu_1976_p2() {
    mul_ln1118_246_fu_1976_p2 = (!mul_ln1118_246_fu_1976_p0.read().is_01() || !ap_const_lv25_99.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_246_fu_1976_p0.read()) * sc_biguint<25>(ap_const_lv25_99);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_247_fu_1862_p0() {
    mul_ln1118_247_fu_1862_p0 =  (sc_lv<16>) (sext_ln1118_167_fu_2687673_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_247_fu_1862_p2() {
    mul_ln1118_247_fu_1862_p2 = (!mul_ln1118_247_fu_1862_p0.read().is_01() || !ap_const_lv25_CF.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_247_fu_1862_p0.read()) * sc_biguint<25>(ap_const_lv25_CF);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_248_fu_2217_p0() {
    mul_ln1118_248_fu_2217_p0 =  (sc_lv<16>) (sext_ln1118_167_fu_2687673_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_248_fu_2217_p2() {
    mul_ln1118_248_fu_2217_p2 = (!mul_ln1118_248_fu_2217_p0.read().is_01() || !ap_const_lv25_E6.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_248_fu_2217_p0.read()) * sc_biguint<25>(ap_const_lv25_E6);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_249_fu_1847_p0() {
    mul_ln1118_249_fu_1847_p0 =  (sc_lv<16>) (sext_ln1118_168_fu_2687685_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_249_fu_1847_p2() {
    mul_ln1118_249_fu_1847_p2 = (!mul_ln1118_249_fu_1847_p0.read().is_01() || !ap_const_lv26_12D.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_249_fu_1847_p0.read()) * sc_biguint<26>(ap_const_lv26_12D);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_24_fu_1702_p0() {
    mul_ln1118_24_fu_1702_p0 =  (sc_lv<16>) (sext_ln1118_23_fu_2682139_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_24_fu_1702_p2() {
    mul_ln1118_24_fu_1702_p2 = (!mul_ln1118_24_fu_1702_p0.read().is_01() || !ap_const_lv24_67.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_24_fu_1702_p0.read()) * sc_biguint<24>(ap_const_lv24_67);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_250_fu_2131_p0() {
    mul_ln1118_250_fu_2131_p0 =  (sc_lv<16>) (sext_ln1118_168_fu_2687685_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_250_fu_2131_p2() {
    mul_ln1118_250_fu_2131_p2 = (!mul_ln1118_250_fu_2131_p0.read().is_01() || !ap_const_lv26_151.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_250_fu_2131_p0.read()) * sc_biguint<26>(ap_const_lv26_151);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_251_fu_1434_p0() {
    mul_ln1118_251_fu_1434_p0 =  (sc_lv<16>) (sext_ln1118_188_fu_2688284_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_251_fu_1434_p2() {
    mul_ln1118_251_fu_1434_p2 = (!mul_ln1118_251_fu_1434_p0.read().is_01() || !ap_const_lv23_2D.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_251_fu_1434_p0.read()) * sc_biguint<23>(ap_const_lv23_2D);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_252_fu_1391_p0() {
    mul_ln1118_252_fu_1391_p0 =  (sc_lv<16>) (sext_ln1118_186_fu_2688267_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_252_fu_1391_p2() {
    mul_ln1118_252_fu_1391_p2 = (!mul_ln1118_252_fu_1391_p0.read().is_01() || !ap_const_lv25_1FFFF30.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_252_fu_1391_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF30);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_253_fu_1348_p0() {
    mul_ln1118_253_fu_1348_p0 =  (sc_lv<16>) (sext_ln1118_185_fu_2688259_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_253_fu_1348_p2() {
    mul_ln1118_253_fu_1348_p2 = (!mul_ln1118_253_fu_1348_p0.read().is_01() || !ap_const_lv26_103.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_253_fu_1348_p0.read()) * sc_biguint<26>(ap_const_lv26_103);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_254_fu_1959_p0() {
    mul_ln1118_254_fu_1959_p0 =  (sc_lv<16>) (sext_ln1118_186_fu_2688267_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_254_fu_1959_p2() {
    mul_ln1118_254_fu_1959_p2 = (!mul_ln1118_254_fu_1959_p0.read().is_01() || !ap_const_lv25_1FFFF2A.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_254_fu_1959_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF2A);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_255_fu_1390_p0() {
    mul_ln1118_255_fu_1390_p0 =  (sc_lv<16>) (sext_ln1118_186_fu_2688267_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_255_fu_1390_p2() {
    mul_ln1118_255_fu_1390_p2 = (!mul_ln1118_255_fu_1390_p0.read().is_01() || !ap_const_lv25_1FFFF0C.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_255_fu_1390_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF0C);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_256_fu_1397_p0() {
    mul_ln1118_256_fu_1397_p0 =  (sc_lv<16>) (sext_ln1118_186_fu_2688267_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_256_fu_1397_p2() {
    mul_ln1118_256_fu_1397_p2 = (!mul_ln1118_256_fu_1397_p0.read().is_01() || !ap_const_lv25_CF.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_256_fu_1397_p0.read()) * sc_biguint<25>(ap_const_lv25_CF);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_257_fu_1398_p0() {
    mul_ln1118_257_fu_1398_p0 =  (sc_lv<16>) (sext_ln1118_186_fu_2688267_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_257_fu_1398_p2() {
    mul_ln1118_257_fu_1398_p2 = (!mul_ln1118_257_fu_1398_p0.read().is_01() || !ap_const_lv25_1FFFF6F.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_257_fu_1398_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF6F);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_258_fu_1698_p0() {
    mul_ln1118_258_fu_1698_p0 =  (sc_lv<16>) (sext_ln1118_184_fu_2688251_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_258_fu_1698_p2() {
    mul_ln1118_258_fu_1698_p2 = (!mul_ln1118_258_fu_1698_p0.read().is_01() || !ap_const_lv24_FFFFBA.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_258_fu_1698_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFBA);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_259_fu_1699_p0() {
    mul_ln1118_259_fu_1699_p0 =  (sc_lv<16>) (sext_ln1118_186_fu_2688267_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_259_fu_1699_p2() {
    mul_ln1118_259_fu_1699_p2 = (!mul_ln1118_259_fu_1699_p0.read().is_01() || !ap_const_lv25_8C.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_259_fu_1699_p0.read()) * sc_biguint<25>(ap_const_lv25_8C);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_25_fu_2114_p0() {
    mul_ln1118_25_fu_2114_p0 =  (sc_lv<16>) (sext_ln1118_20_fu_2682113_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_25_fu_2114_p2() {
    mul_ln1118_25_fu_2114_p2 = (!mul_ln1118_25_fu_2114_p0.read().is_01() || !ap_const_lv26_11A.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_25_fu_2114_p0.read()) * sc_biguint<26>(ap_const_lv26_11A);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_260_fu_1764_p0() {
    mul_ln1118_260_fu_1764_p0 =  (sc_lv<16>) (sext_ln1118_184_fu_2688251_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_260_fu_1764_p2() {
    mul_ln1118_260_fu_1764_p2 = (!mul_ln1118_260_fu_1764_p0.read().is_01() || !ap_const_lv24_FFFFA4.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_260_fu_1764_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFA4);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_261_fu_1701_p0() {
    mul_ln1118_261_fu_1701_p0 =  (sc_lv<16>) (sext_ln1118_184_fu_2688251_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_261_fu_1701_p2() {
    mul_ln1118_261_fu_1701_p2 = (!mul_ln1118_261_fu_1701_p0.read().is_01() || !ap_const_lv24_5B.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_261_fu_1701_p0.read()) * sc_biguint<24>(ap_const_lv24_5B);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_262_fu_1403_p0() {
    mul_ln1118_262_fu_1403_p0 = sext_ln1118_189_fu_2688290_p0.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_262_fu_1403_p2() {
    mul_ln1118_262_fu_1403_p2 = (!mul_ln1118_262_fu_1403_p0.read().is_01() || !ap_const_lv22_1A.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_262_fu_1403_p0.read()) * sc_biguint<22>(ap_const_lv22_1A);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_263_fu_1404_p0() {
    mul_ln1118_263_fu_1404_p0 =  (sc_lv<16>) (sext_ln1118_185_fu_2688259_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_263_fu_1404_p2() {
    mul_ln1118_263_fu_1404_p2 = (!mul_ln1118_263_fu_1404_p0.read().is_01() || !ap_const_lv26_3FFFD78.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_263_fu_1404_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFD78);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_264_fu_1704_p0() {
    mul_ln1118_264_fu_1704_p0 =  (sc_lv<16>) (sext_ln1118_188_fu_2688284_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_264_fu_1704_p2() {
    mul_ln1118_264_fu_1704_p2 = (!mul_ln1118_264_fu_1704_p0.read().is_01() || !ap_const_lv23_39.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_264_fu_1704_p0.read()) * sc_biguint<23>(ap_const_lv23_39);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_265_fu_1848_p0() {
    mul_ln1118_265_fu_1848_p0 =  (sc_lv<16>) (sext_ln1118_186_fu_2688267_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_265_fu_1848_p2() {
    mul_ln1118_265_fu_1848_p2 = (!mul_ln1118_265_fu_1848_p0.read().is_01() || !ap_const_lv25_BC.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_265_fu_1848_p0.read()) * sc_biguint<25>(ap_const_lv25_BC);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_266_fu_2069_p0() {
    mul_ln1118_266_fu_2069_p0 =  (sc_lv<16>) (sext_ln1118_185_fu_2688259_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_266_fu_2069_p2() {
    mul_ln1118_266_fu_2069_p2 = (!mul_ln1118_266_fu_2069_p0.read().is_01() || !ap_const_lv26_3FFFED0.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_266_fu_2069_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFED0);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_267_fu_1408_p0() {
    mul_ln1118_267_fu_1408_p0 =  (sc_lv<16>) (sext_ln1118_184_fu_2688251_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_267_fu_1408_p2() {
    mul_ln1118_267_fu_1408_p2 = (!mul_ln1118_267_fu_1408_p0.read().is_01() || !ap_const_lv24_FFFF86.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_267_fu_1408_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF86);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_268_fu_1409_p0() {
    mul_ln1118_268_fu_1409_p0 =  (sc_lv<16>) (sext_ln1118_186_fu_2688267_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_268_fu_1409_p2() {
    mul_ln1118_268_fu_1409_p2 = (!mul_ln1118_268_fu_1409_p0.read().is_01() || !ap_const_lv25_1FFFF49.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_268_fu_1409_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF49);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_269_fu_1410_p0() {
    mul_ln1118_269_fu_1410_p0 =  (sc_lv<16>) (sext_ln1118_186_fu_2688267_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_269_fu_1410_p2() {
    mul_ln1118_269_fu_1410_p2 = (!mul_ln1118_269_fu_1410_p0.read().is_01() || !ap_const_lv25_1FFFF75.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_269_fu_1410_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF75);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_26_fu_1616_p0() {
    mul_ln1118_26_fu_1616_p0 =  (sc_lv<16>) (sext_ln1118_20_fu_2682113_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_26_fu_1616_p2() {
    mul_ln1118_26_fu_1616_p2 = (!mul_ln1118_26_fu_1616_p0.read().is_01() || !ap_const_lv26_10C.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_26_fu_1616_p0.read()) * sc_biguint<26>(ap_const_lv26_10C);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_270_fu_1402_p0() {
    mul_ln1118_270_fu_1402_p0 =  (sc_lv<16>) (sext_ln1118_185_fu_2688259_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_270_fu_1402_p2() {
    mul_ln1118_270_fu_1402_p2 = (!mul_ln1118_270_fu_1402_p0.read().is_01() || !ap_const_lv26_3FFFE7B.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_270_fu_1402_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFE7B);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_271_fu_2122_p0() {
    mul_ln1118_271_fu_2122_p0 =  (sc_lv<16>) (sext_ln1118_201_fu_2688860_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_271_fu_2122_p2() {
    mul_ln1118_271_fu_2122_p2 = (!mul_ln1118_271_fu_2122_p0.read().is_01() || !ap_const_lv25_1FFFF77.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_271_fu_2122_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF77);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_272_fu_2188_p0() {
    mul_ln1118_272_fu_2188_p0 =  (sc_lv<16>) (sext_ln1118_202_fu_2688873_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_272_fu_2188_p2() {
    mul_ln1118_272_fu_2188_p2 = (!mul_ln1118_272_fu_2188_p0.read().is_01() || !ap_const_lv24_77.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_272_fu_2188_p0.read()) * sc_biguint<24>(ap_const_lv24_77);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_273_fu_2213_p0() {
    mul_ln1118_273_fu_2213_p0 = sext_ln1118_203_fu_2688881_p0.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_273_fu_2213_p2() {
    mul_ln1118_273_fu_2213_p2 = (!mul_ln1118_273_fu_2213_p0.read().is_01() || !ap_const_lv23_7FFFD9.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_273_fu_2213_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFD9);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_274_fu_1388_p0() {
    mul_ln1118_274_fu_1388_p0 =  (sc_lv<16>) (sext_ln1118_201_fu_2688860_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_274_fu_1388_p2() {
    mul_ln1118_274_fu_1388_p2 = (!mul_ln1118_274_fu_1388_p0.read().is_01() || !ap_const_lv25_EF.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_274_fu_1388_p0.read()) * sc_biguint<25>(ap_const_lv25_EF);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_275_fu_1672_p0() {
    mul_ln1118_275_fu_1672_p0 =  (sc_lv<16>) (sext_ln1118_202_fu_2688873_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_275_fu_1672_p2() {
    mul_ln1118_275_fu_1672_p2 = (!mul_ln1118_275_fu_1672_p0.read().is_01() || !ap_const_lv24_FFFFB1.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_275_fu_1672_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFB1);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_276_fu_1956_p0() {
    mul_ln1118_276_fu_1956_p0 =  (sc_lv<16>) (sext_ln1118_202_fu_2688873_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_276_fu_1956_p2() {
    mul_ln1118_276_fu_1956_p2 = (!mul_ln1118_276_fu_1956_p0.read().is_01() || !ap_const_lv24_4C.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_276_fu_1956_p0.read()) * sc_biguint<24>(ap_const_lv24_4C);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_277_fu_1913_p0() {
    mul_ln1118_277_fu_1913_p0 =  (sc_lv<16>) (sext_ln1118_201_fu_2688860_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_277_fu_1913_p2() {
    mul_ln1118_277_fu_1913_p2 = (!mul_ln1118_277_fu_1913_p0.read().is_01() || !ap_const_lv25_BF.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_277_fu_1913_p0.read()) * sc_biguint<25>(ap_const_lv25_BF);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_278_fu_2197_p0() {
    mul_ln1118_278_fu_2197_p0 =  (sc_lv<16>) (sext_ln1118_201_fu_2688860_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_278_fu_2197_p2() {
    mul_ln1118_278_fu_2197_p2 = (!mul_ln1118_278_fu_2197_p0.read().is_01() || !ap_const_lv25_1FFFF7B.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_278_fu_2197_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF7B);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_279_fu_2154_p0() {
    mul_ln1118_279_fu_2154_p0 =  (sc_lv<16>) (sext_ln1118_200_fu_2688851_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_279_fu_2154_p2() {
    mul_ln1118_279_fu_2154_p2 = (!mul_ln1118_279_fu_2154_p0.read().is_01() || !ap_const_lv26_121.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_279_fu_2154_p0.read()) * sc_biguint<26>(ap_const_lv26_121);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_27_fu_2227_p0() {
    mul_ln1118_27_fu_2227_p0 =  (sc_lv<16>) (sext_ln1118_20_fu_2682113_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_27_fu_2227_p2() {
    mul_ln1118_27_fu_2227_p2 = (!mul_ln1118_27_fu_2227_p0.read().is_01() || !ap_const_lv26_3FFFDB9.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_27_fu_2227_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFDB9);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_280_fu_1585_p0() {
    mul_ln1118_280_fu_1585_p0 =  (sc_lv<16>) (sext_ln1118_202_fu_2688873_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_280_fu_1585_p2() {
    mul_ln1118_280_fu_1585_p2 = (!mul_ln1118_280_fu_1585_p0.read().is_01() || !ap_const_lv24_69.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_280_fu_1585_p0.read()) * sc_biguint<24>(ap_const_lv24_69);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_281_fu_2068_p0() {
    mul_ln1118_281_fu_2068_p0 =  (sc_lv<16>) (sext_ln1118_201_fu_2688860_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_281_fu_2068_p2() {
    mul_ln1118_281_fu_2068_p2 = (!mul_ln1118_281_fu_2068_p0.read().is_01() || !ap_const_lv25_1FFFF62.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_281_fu_2068_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF62);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_282_fu_1826_p0() {
    mul_ln1118_282_fu_1826_p0 =  (sc_lv<16>) (sext_ln1118_201_fu_2688860_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_282_fu_1826_p2() {
    mul_ln1118_282_fu_1826_p2 = (!mul_ln1118_282_fu_1826_p0.read().is_01() || !ap_const_lv25_1FFFF1E.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_282_fu_1826_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF1E);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_283_fu_1854_p0() {
    mul_ln1118_283_fu_1854_p0 =  (sc_lv<16>) (sext_ln1118_200_fu_2688851_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_283_fu_1854_p2() {
    mul_ln1118_283_fu_1854_p2 = (!mul_ln1118_283_fu_1854_p0.read().is_01() || !ap_const_lv26_3FFFED6.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_283_fu_1854_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFED6);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_284_fu_1855_p0() {
    mul_ln1118_284_fu_1855_p0 =  (sc_lv<16>) (sext_ln1118_201_fu_2688860_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_284_fu_1855_p2() {
    mul_ln1118_284_fu_1855_p2 = (!mul_ln1118_284_fu_1855_p0.read().is_01() || !ap_const_lv25_83.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_284_fu_1855_p0.read()) * sc_biguint<25>(ap_const_lv25_83);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_285_fu_1557_p0() {
    mul_ln1118_285_fu_1557_p0 =  (sc_lv<16>) (sext_ln1118_201_fu_2688860_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_285_fu_1557_p2() {
    mul_ln1118_285_fu_1557_p2 = (!mul_ln1118_285_fu_1557_p0.read().is_01() || !ap_const_lv25_CB.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_285_fu_1557_p0.read()) * sc_biguint<25>(ap_const_lv25_CB);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_286_fu_2220_p0() {
    mul_ln1118_286_fu_2220_p0 =  (sc_lv<16>) (sext_ln1118_200_fu_2688851_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_286_fu_2220_p2() {
    mul_ln1118_286_fu_2220_p2 = (!mul_ln1118_286_fu_2220_p0.read().is_01() || !ap_const_lv26_153.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_286_fu_2220_p0.read()) * sc_biguint<26>(ap_const_lv26_153);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_287_fu_2221_p0() {
    mul_ln1118_287_fu_2221_p0 =  (sc_lv<16>) (sext_ln1118_200_fu_2688851_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_287_fu_2221_p2() {
    mul_ln1118_287_fu_2221_p2 = (!mul_ln1118_287_fu_2221_p0.read().is_01() || !ap_const_lv26_151.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_287_fu_2221_p0.read()) * sc_biguint<26>(ap_const_lv26_151);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_288_fu_2222_p0() {
    mul_ln1118_288_fu_2222_p0 =  (sc_lv<16>) (sext_ln1118_200_fu_2688851_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_288_fu_2222_p2() {
    mul_ln1118_288_fu_2222_p2 = (!mul_ln1118_288_fu_2222_p0.read().is_01() || !ap_const_lv26_126.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_288_fu_2222_p0.read()) * sc_biguint<26>(ap_const_lv26_126);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_289_fu_2223_p0() {
    mul_ln1118_289_fu_2223_p0 =  (sc_lv<16>) (sext_ln1118_201_fu_2688860_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_289_fu_2223_p2() {
    mul_ln1118_289_fu_2223_p2 = (!mul_ln1118_289_fu_2223_p0.read().is_01() || !ap_const_lv25_A4.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_289_fu_2223_p0.read()) * sc_biguint<25>(ap_const_lv25_A4);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_28_fu_1658_p0() {
    mul_ln1118_28_fu_1658_p0 =  (sc_lv<16>) (sext_ln1118_21_fu_2682126_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_28_fu_1658_p2() {
    mul_ln1118_28_fu_1658_p2 = (!mul_ln1118_28_fu_1658_p0.read().is_01() || !ap_const_lv23_7FFFD3.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_28_fu_1658_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFD3);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_290_fu_2224_p0() {
    mul_ln1118_290_fu_2224_p0 =  (sc_lv<16>) (sext_ln1118_220_fu_2689435_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_290_fu_2224_p2() {
    mul_ln1118_290_fu_2224_p2 = (!mul_ln1118_290_fu_2224_p0.read().is_01() || !ap_const_lv25_95.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_290_fu_2224_p0.read()) * sc_biguint<25>(ap_const_lv25_95);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_291_fu_2225_p0() {
    mul_ln1118_291_fu_2225_p0 =  (sc_lv<16>) (sext_ln1118_219_fu_2689419_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_291_fu_2225_p2() {
    mul_ln1118_291_fu_2225_p2 = (!mul_ln1118_291_fu_2225_p0.read().is_01() || !ap_const_lv26_3FFFDF7.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_291_fu_2225_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFDF7);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_292_fu_2226_p0() {
    mul_ln1118_292_fu_2226_p0 =  (sc_lv<16>) (sext_ln1118_219_fu_2689419_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_292_fu_2226_p2() {
    mul_ln1118_292_fu_2226_p2 = (!mul_ln1118_292_fu_2226_p0.read().is_01() || !ap_const_lv26_3FFFC6F.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_292_fu_2226_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFC6F);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_293_fu_1501_p0() {
    mul_ln1118_293_fu_1501_p0 =  (sc_lv<16>) (sext_ln1118_218_fu_2689411_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_293_fu_1501_p2() {
    mul_ln1118_293_fu_1501_p2 = (!mul_ln1118_293_fu_1501_p0.read().is_01() || !ap_const_lv24_FFFF8E.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_293_fu_1501_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF8E);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_294_fu_1502_p0() {
    mul_ln1118_294_fu_1502_p0 =  (sc_lv<16>) (sext_ln1118_217_fu_2689405_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_294_fu_1502_p2() {
    mul_ln1118_294_fu_1502_p2 = (!mul_ln1118_294_fu_1502_p0.read().is_01() || !ap_const_lv22_3FFFE3.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_294_fu_1502_p0.read()) * sc_bigint<22>(ap_const_lv22_3FFFE3);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_295_fu_1567_p0() {
    mul_ln1118_295_fu_1567_p0 =  (sc_lv<16>) (sext_ln1118_219_fu_2689419_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_295_fu_1567_p2() {
    mul_ln1118_295_fu_1567_p2 = (!mul_ln1118_295_fu_1567_p0.read().is_01() || !ap_const_lv26_3FFFD67.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_295_fu_1567_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFD67);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_296_fu_1440_p0() {
    mul_ln1118_296_fu_1440_p0 =  (sc_lv<16>) (sext_ln1118_220_fu_2689435_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_296_fu_1440_p2() {
    mul_ln1118_296_fu_1440_p2 = (!mul_ln1118_296_fu_1440_p0.read().is_01() || !ap_const_lv25_9D.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_296_fu_1440_p0.read()) * sc_biguint<25>(ap_const_lv25_9D);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_297_fu_1726_p0() {
    mul_ln1118_297_fu_1726_p0 =  (sc_lv<16>) (sext_ln1118_218_fu_2689411_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_297_fu_1726_p2() {
    mul_ln1118_297_fu_1726_p2 = (!mul_ln1118_297_fu_1726_p0.read().is_01() || !ap_const_lv24_FFFF9D.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_297_fu_1726_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF9D);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_298_fu_2228_p0() {
    mul_ln1118_298_fu_2228_p0 =  (sc_lv<16>) (sext_ln1118_218_fu_2689411_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_298_fu_2228_p2() {
    mul_ln1118_298_fu_2228_p2 = (!mul_ln1118_298_fu_2228_p0.read().is_01() || !ap_const_lv24_45.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_298_fu_2228_p0.read()) * sc_biguint<24>(ap_const_lv24_45);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_299_fu_2294_p0() {
    mul_ln1118_299_fu_2294_p0 =  (sc_lv<16>) (sext_ln1118_219_fu_2689419_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_299_fu_2294_p2() {
    mul_ln1118_299_fu_2294_p2 = (!mul_ln1118_299_fu_2294_p0.read().is_01() || !ap_const_lv26_3FFFECA.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_299_fu_2294_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFECA);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_29_fu_1487_p0() {
    mul_ln1118_29_fu_1487_p0 =  (sc_lv<16>) (sext_ln1118_21_fu_2682126_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_29_fu_1487_p2() {
    mul_ln1118_29_fu_1487_p2 = (!mul_ln1118_29_fu_1487_p0.read().is_01() || !ap_const_lv23_36.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_29_fu_1487_p0.read()) * sc_biguint<23>(ap_const_lv23_36);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_300_fu_1706_p0() {
    mul_ln1118_300_fu_1706_p0 =  (sc_lv<16>) (sext_ln1118_217_fu_2689405_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_300_fu_1706_p2() {
    mul_ln1118_300_fu_1706_p2 = (!mul_ln1118_300_fu_1706_p0.read().is_01() || !ap_const_lv22_1D.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_300_fu_1706_p0.read()) * sc_biguint<22>(ap_const_lv22_1D);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_301_fu_1696_p0() {
    mul_ln1118_301_fu_1696_p0 = sext_ln1118_216_fu_2689400_p0.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_301_fu_1696_p2() {
    mul_ln1118_301_fu_1696_p2 = (!mul_ln1118_301_fu_1696_p0.read().is_01() || !ap_const_lv23_2C.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_301_fu_1696_p0.read()) * sc_biguint<23>(ap_const_lv23_2C);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_302_fu_1980_p0() {
    mul_ln1118_302_fu_1980_p0 =  (sc_lv<16>) (sext_ln1118_220_fu_2689435_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_302_fu_1980_p2() {
    mul_ln1118_302_fu_1980_p2 = (!mul_ln1118_302_fu_1980_p0.read().is_01() || !ap_const_lv25_F4.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_302_fu_1980_p0.read()) * sc_biguint<25>(ap_const_lv25_F4);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_303_fu_2264_p0() {
    mul_ln1118_303_fu_2264_p0 =  (sc_lv<16>) (sext_ln1118_220_fu_2689435_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_303_fu_2264_p2() {
    mul_ln1118_303_fu_2264_p2 = (!mul_ln1118_303_fu_2264_p0.read().is_01() || !ap_const_lv25_1FFFF1F.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_303_fu_2264_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF1F);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_304_fu_1894_p0() {
    mul_ln1118_304_fu_1894_p0 =  (sc_lv<16>) (sext_ln1118_220_fu_2689435_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_304_fu_1894_p2() {
    mul_ln1118_304_fu_1894_p2 = (!mul_ln1118_304_fu_1894_p0.read().is_01() || !ap_const_lv25_D6.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_304_fu_1894_p0.read()) * sc_biguint<25>(ap_const_lv25_D6);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_305_fu_1851_p0() {
    mul_ln1118_305_fu_1851_p0 =  (sc_lv<16>) (sext_ln1118_219_fu_2689419_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_305_fu_1851_p2() {
    mul_ln1118_305_fu_1851_p2 = (!mul_ln1118_305_fu_1851_p0.read().is_01() || !ap_const_lv26_3FFFEC6.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_305_fu_1851_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFEC6);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_306_fu_1481_p0() {
    mul_ln1118_306_fu_1481_p0 =  (sc_lv<16>) (sext_ln1118_220_fu_2689435_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_306_fu_1481_p2() {
    mul_ln1118_306_fu_1481_p2 = (!mul_ln1118_306_fu_1481_p0.read().is_01() || !ap_const_lv25_B9.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_306_fu_1481_p0.read()) * sc_biguint<25>(ap_const_lv25_B9);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_307_fu_1893_p0() {
    mul_ln1118_307_fu_1893_p0 =  (sc_lv<16>) (sext_ln1118_219_fu_2689419_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_307_fu_1893_p2() {
    mul_ln1118_307_fu_1893_p2 = (!mul_ln1118_307_fu_1893_p0.read().is_01() || !ap_const_lv26_156.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_307_fu_1893_p0.read()) * sc_biguint<26>(ap_const_lv26_156);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_308_fu_1722_p0() {
    mul_ln1118_308_fu_1722_p0 =  (sc_lv<16>) (sext_ln1118_219_fu_2689419_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_308_fu_1722_p2() {
    mul_ln1118_308_fu_1722_p2 = (!mul_ln1118_308_fu_1722_p0.read().is_01() || !ap_const_lv26_3FFFCF9.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_308_fu_1722_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFCF9);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_309_fu_1352_p0() {
    mul_ln1118_309_fu_1352_p0 =  (sc_lv<16>) (sext_ln1118_219_fu_2689419_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_309_fu_1352_p2() {
    mul_ln1118_309_fu_1352_p2 = (!mul_ln1118_309_fu_1352_p0.read().is_01() || !ap_const_lv26_3FFFE6B.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_309_fu_1352_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFE6B);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_30_fu_1835_p0() {
    mul_ln1118_30_fu_1835_p0 =  (sc_lv<16>) (sext_ln1118_22_fu_2682134_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_30_fu_1835_p2() {
    mul_ln1118_30_fu_1835_p2 = (!mul_ln1118_30_fu_1835_p0.read().is_01() || !ap_const_lv21_B.is_01())? sc_lv<21>(): sc_bigint<16>(mul_ln1118_30_fu_1835_p0.read()) * sc_biguint<21>(ap_const_lv21_B);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_310_fu_2091_p0() {
    mul_ln1118_310_fu_2091_p0 =  (sc_lv<16>) (sext_ln1118_220_fu_2689435_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_310_fu_2091_p2() {
    mul_ln1118_310_fu_2091_p2 = (!mul_ln1118_310_fu_2091_p0.read().is_01() || !ap_const_lv25_1FFFF06.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_310_fu_2091_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF06);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_311_fu_1650_p0() {
    mul_ln1118_311_fu_1650_p0 =  (sc_lv<16>) (sext_ln1118_219_fu_2689419_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_311_fu_1650_p2() {
    mul_ln1118_311_fu_1650_p2 = (!mul_ln1118_311_fu_1650_p0.read().is_01() || !ap_const_lv26_3FFFED3.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_311_fu_1650_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFED3);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_312_fu_2014_p0() {
    mul_ln1118_312_fu_2014_p0 =  (sc_lv<16>) (sext_ln1118_219_fu_2689419_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_312_fu_2014_p2() {
    mul_ln1118_312_fu_2014_p2 = (!mul_ln1118_312_fu_2014_p0.read().is_01() || !ap_const_lv26_3FFFEEB.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_312_fu_2014_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFEEB);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_313_fu_1652_p0() {
    mul_ln1118_313_fu_1652_p0 =  (sc_lv<16>) (sext_ln1118_218_fu_2689411_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_313_fu_1652_p2() {
    mul_ln1118_313_fu_1652_p2 = (!mul_ln1118_313_fu_1652_p0.read().is_01() || !ap_const_lv24_55.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_313_fu_1652_p0.read()) * sc_biguint<24>(ap_const_lv24_55);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_314_fu_2016_p0() {
    mul_ln1118_314_fu_2016_p0 =  (sc_lv<16>) (sext_ln1118_219_fu_2689419_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_314_fu_2016_p2() {
    mul_ln1118_314_fu_2016_p2 = (!mul_ln1118_314_fu_2016_p0.read().is_01() || !ap_const_lv26_3FFFED2.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_314_fu_2016_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFED2);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_316_fu_2017_p0() {
    mul_ln1118_316_fu_2017_p0 =  (sc_lv<16>) (sext_ln1118_219_fu_2689419_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_316_fu_2017_p2() {
    mul_ln1118_316_fu_2017_p2 = (!mul_ln1118_316_fu_2017_p0.read().is_01() || !ap_const_lv26_184.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_316_fu_2017_p0.read()) * sc_biguint<26>(ap_const_lv26_184);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_317_fu_2018_p0() {
    mul_ln1118_317_fu_2018_p0 =  (sc_lv<16>) (sext_ln1118_226_fu_2689887_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_317_fu_2018_p2() {
    mul_ln1118_317_fu_2018_p2 = (!mul_ln1118_317_fu_2018_p0.read().is_01() || !ap_const_lv26_17E.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_317_fu_2018_p0.read()) * sc_biguint<26>(ap_const_lv26_17E);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_318_fu_1656_p0() {
    mul_ln1118_318_fu_1656_p0 =  (sc_lv<16>) (sext_ln1118_226_fu_2689887_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_318_fu_1656_p2() {
    mul_ln1118_318_fu_1656_p2 = (!mul_ln1118_318_fu_1656_p0.read().is_01() || !ap_const_lv26_19E.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_318_fu_1656_p0.read()) * sc_biguint<26>(ap_const_lv26_19E);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_319_fu_1358_p0() {
    mul_ln1118_319_fu_1358_p0 =  (sc_lv<16>) (sext_ln1118_225_fu_2689876_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_319_fu_1358_p2() {
    mul_ln1118_319_fu_1358_p2 = (!mul_ln1118_319_fu_1358_p0.read().is_01() || !ap_const_lv24_56.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_319_fu_1358_p0.read()) * sc_biguint<24>(ap_const_lv24_56);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_31_fu_2135_p0() {
    mul_ln1118_31_fu_2135_p0 =  (sc_lv<16>) (sext_ln1118_18_fu_2682096_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_31_fu_2135_p2() {
    mul_ln1118_31_fu_2135_p2 = (!mul_ln1118_31_fu_2135_p0.read().is_01() || !ap_const_lv25_D7.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_31_fu_2135_p0.read()) * sc_biguint<25>(ap_const_lv25_D7);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_320_fu_2021_p0() {
    mul_ln1118_320_fu_2021_p0 = sext_ln1118_227_fu_2689902_p0.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_320_fu_2021_p2() {
    mul_ln1118_320_fu_2021_p2 = (!mul_ln1118_320_fu_2021_p0.read().is_01() || !ap_const_lv22_3FFFE7.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_320_fu_2021_p0.read()) * sc_bigint<22>(ap_const_lv22_3FFFE7);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_321_fu_2022_p0() {
    mul_ln1118_321_fu_2022_p0 =  (sc_lv<16>) (sext_ln1118_226_fu_2689887_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_321_fu_2022_p2() {
    mul_ln1118_321_fu_2022_p2 = (!mul_ln1118_321_fu_2022_p0.read().is_01() || !ap_const_lv26_15E.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_321_fu_2022_p0.read()) * sc_biguint<26>(ap_const_lv26_15E);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_322_fu_2023_p0() {
    mul_ln1118_322_fu_2023_p0 =  (sc_lv<16>) (sext_ln1118_225_fu_2689876_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_322_fu_2023_p2() {
    mul_ln1118_322_fu_2023_p2 = (!mul_ln1118_322_fu_2023_p0.read().is_01() || !ap_const_lv24_69.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_322_fu_2023_p0.read()) * sc_biguint<24>(ap_const_lv24_69);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_323_fu_1362_p0() {
    mul_ln1118_323_fu_1362_p0 =  (sc_lv<16>) (sext_ln1118_228_fu_2689907_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_323_fu_1362_p2() {
    mul_ln1118_323_fu_1362_p2 = (!mul_ln1118_323_fu_1362_p0.read().is_01() || !ap_const_lv23_7FFFCF.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_323_fu_1362_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFCF);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_324_fu_2025_p0() {
    mul_ln1118_324_fu_2025_p0 =  (sc_lv<16>) (sext_ln1118_226_fu_2689887_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_324_fu_2025_p2() {
    mul_ln1118_324_fu_2025_p2 = (!mul_ln1118_324_fu_2025_p0.read().is_01() || !ap_const_lv26_3FFFE1D.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_324_fu_2025_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFE1D);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_325_fu_1663_p0() {
    mul_ln1118_325_fu_1663_p0 =  (sc_lv<16>) (sext_ln1118_225_fu_2689876_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_325_fu_1663_p2() {
    mul_ln1118_325_fu_1663_p2 = (!mul_ln1118_325_fu_1663_p0.read().is_01() || !ap_const_lv24_FFFFAC.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_325_fu_1663_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFAC);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_326_fu_1353_p0() {
    mul_ln1118_326_fu_1353_p0 =  (sc_lv<16>) (sext_ln1118_226_fu_2689887_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_326_fu_1353_p2() {
    mul_ln1118_326_fu_1353_p2 = (!mul_ln1118_326_fu_1353_p0.read().is_01() || !ap_const_lv26_129.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_326_fu_1353_p0.read()) * sc_biguint<26>(ap_const_lv26_129);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_327_fu_1419_p0() {
    mul_ln1118_327_fu_1419_p0 =  (sc_lv<16>) (sext_ln1118_228_fu_2689907_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_327_fu_1419_p2() {
    mul_ln1118_327_fu_1419_p2 = (!mul_ln1118_327_fu_1419_p0.read().is_01() || !ap_const_lv23_7FFFC5.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_327_fu_1419_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFC5);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_328_fu_2030_p0() {
    mul_ln1118_328_fu_2030_p0 =  (sc_lv<16>) (sext_ln1118_225_fu_2689876_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_328_fu_2030_p2() {
    mul_ln1118_328_fu_2030_p2 = (!mul_ln1118_328_fu_2030_p0.read().is_01() || !ap_const_lv24_FFFFBB.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_328_fu_2030_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFBB);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_329_fu_1442_p0() {
    mul_ln1118_329_fu_1442_p0 =  (sc_lv<16>) (sext_ln1118_228_fu_2689907_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_329_fu_1442_p2() {
    mul_ln1118_329_fu_1442_p2 = (!mul_ln1118_329_fu_1442_p0.read().is_01() || !ap_const_lv23_7FFFD9.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_329_fu_1442_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFD9);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_32_fu_1837_p0() {
    mul_ln1118_32_fu_1837_p0 =  (sc_lv<16>) (sext_ln1118_18_fu_2682096_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_32_fu_1837_p2() {
    mul_ln1118_32_fu_1837_p2 = (!mul_ln1118_32_fu_1837_p0.read().is_01() || !ap_const_lv25_98.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_32_fu_1837_p0.read()) * sc_biguint<25>(ap_const_lv25_98);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_330_fu_1634_p0() {
    mul_ln1118_330_fu_1634_p0 =  (sc_lv<16>) (sext_ln1118_225_fu_2689876_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_330_fu_1634_p2() {
    mul_ln1118_330_fu_1634_p2 = (!mul_ln1118_330_fu_1634_p0.read().is_01() || !ap_const_lv24_FFFFA6.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_330_fu_1634_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFA6);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_331_fu_2245_p0() {
    mul_ln1118_331_fu_2245_p0 =  (sc_lv<16>) (sext_ln1118_224_fu_2689868_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_331_fu_2245_p2() {
    mul_ln1118_331_fu_2245_p2 = (!mul_ln1118_331_fu_2245_p0.read().is_01() || !ap_const_lv25_1FFFF68.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_331_fu_2245_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF68);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_332_fu_2202_p0() {
    mul_ln1118_332_fu_2202_p0 =  (sc_lv<16>) (sext_ln1118_226_fu_2689887_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_332_fu_2202_p2() {
    mul_ln1118_332_fu_2202_p2 = (!mul_ln1118_332_fu_2202_p0.read().is_01() || !ap_const_lv26_115.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_332_fu_2202_p0.read()) * sc_biguint<26>(ap_const_lv26_115);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_333_fu_1505_p0() {
    mul_ln1118_333_fu_1505_p0 =  (sc_lv<16>) (sext_ln1118_226_fu_2689887_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_333_fu_1505_p2() {
    mul_ln1118_333_fu_1505_p2 = (!mul_ln1118_333_fu_1505_p0.read().is_01() || !ap_const_lv26_127.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_333_fu_1505_p0.read()) * sc_biguint<26>(ap_const_lv26_127);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_334_fu_1462_p0() {
    mul_ln1118_334_fu_1462_p0 =  (sc_lv<16>) (sext_ln1118_226_fu_2689887_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_334_fu_1462_p2() {
    mul_ln1118_334_fu_1462_p2 = (!mul_ln1118_334_fu_1462_p0.read().is_01() || !ap_const_lv26_132.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_334_fu_1462_p0.read()) * sc_biguint<26>(ap_const_lv26_132);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_335_fu_1746_p0() {
    mul_ln1118_335_fu_1746_p0 =  (sc_lv<16>) (sext_ln1118_225_fu_2689876_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_335_fu_1746_p2() {
    mul_ln1118_335_fu_1746_p2 = (!mul_ln1118_335_fu_1746_p0.read().is_01() || !ap_const_lv24_FFFF9B.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_335_fu_1746_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF9B);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_336_fu_2317_p0() {
    mul_ln1118_336_fu_2317_p0 =  (sc_lv<16>) (sext_ln1118_224_fu_2689868_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_336_fu_2317_p2() {
    mul_ln1118_336_fu_2317_p2 = (!mul_ln1118_336_fu_2317_p0.read().is_01() || !ap_const_lv25_85.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_336_fu_2317_p0.read()) * sc_biguint<25>(ap_const_lv25_85);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_337_fu_2314_p0() {
    mul_ln1118_337_fu_2314_p0 =  (sc_lv<16>) (sext_ln1118_224_fu_2689868_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_337_fu_2314_p2() {
    mul_ln1118_337_fu_2314_p2 = (!mul_ln1118_337_fu_2314_p0.read().is_01() || !ap_const_lv25_1FFFF6B.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_337_fu_2314_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF6B);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_338_fu_2072_p0() {
    mul_ln1118_338_fu_2072_p0 =  (sc_lv<16>) (sext_ln1118_225_fu_2689876_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_338_fu_2072_p2() {
    mul_ln1118_338_fu_2072_p2 = (!mul_ln1118_338_fu_2072_p0.read().is_01() || !ap_const_lv24_FFFF83.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_338_fu_2072_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF83);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_339_fu_1574_p0() {
    mul_ln1118_339_fu_1574_p0 =  (sc_lv<16>) (sext_ln1118_226_fu_2689887_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_339_fu_1574_p2() {
    mul_ln1118_339_fu_1574_p2 = (!mul_ln1118_339_fu_1574_p0.read().is_01() || !ap_const_lv26_126.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_339_fu_1574_p0.read()) * sc_biguint<26>(ap_const_lv26_126);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_33_fu_1774_p0() {
    mul_ln1118_33_fu_1774_p0 =  (sc_lv<16>) (sext_ln1118_18_fu_2682096_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_33_fu_1774_p2() {
    mul_ln1118_33_fu_1774_p2 = (!mul_ln1118_33_fu_1774_p0.read().is_01() || !ap_const_lv25_8C.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_33_fu_1774_p0.read()) * sc_biguint<25>(ap_const_lv25_8C);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_340_fu_1809_p0() {
    mul_ln1118_340_fu_1809_p0 =  (sc_lv<16>) (sext_ln1118_226_fu_2689887_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_340_fu_1809_p2() {
    mul_ln1118_340_fu_1809_p2 = (!mul_ln1118_340_fu_1809_p0.read().is_01() || !ap_const_lv26_172.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_340_fu_1809_p0.read()) * sc_biguint<26>(ap_const_lv26_172);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_341_fu_1810_p0() {
    mul_ln1118_341_fu_1810_p0 =  (sc_lv<16>) (sext_ln1118_226_fu_2689887_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_341_fu_1810_p2() {
    mul_ln1118_341_fu_1810_p2 = (!mul_ln1118_341_fu_1810_p0.read().is_01() || !ap_const_lv26_3FFFEE5.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_341_fu_1810_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFEE5);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_342_fu_2174_p0() {
    mul_ln1118_342_fu_2174_p0 =  (sc_lv<16>) (sext_ln1118_224_fu_2689868_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_342_fu_2174_p2() {
    mul_ln1118_342_fu_2174_p2 = (!mul_ln1118_342_fu_2174_p0.read().is_01() || !ap_const_lv25_D2.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_342_fu_2174_p0.read()) * sc_biguint<25>(ap_const_lv25_D2);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_343_fu_1812_p0() {
    mul_ln1118_343_fu_1812_p0 =  (sc_lv<16>) (sext_ln1118_237_fu_2690412_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_343_fu_1812_p2() {
    mul_ln1118_343_fu_1812_p2 = (!mul_ln1118_343_fu_1812_p0.read().is_01() || !ap_const_lv24_FFFF8F.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_343_fu_1812_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF8F);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_344_fu_1813_p0() {
    mul_ln1118_344_fu_1813_p0 =  (sc_lv<16>) (sext_ln1118_240_fu_2690433_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_344_fu_1813_p2() {
    mul_ln1118_344_fu_1813_p2 = (!mul_ln1118_344_fu_1813_p0.read().is_01() || !ap_const_lv25_93.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_344_fu_1813_p0.read()) * sc_biguint<25>(ap_const_lv25_93);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_346_fu_1814_p0() {
    mul_ln1118_346_fu_1814_p0 =  (sc_lv<16>) (sext_ln1118_236_fu_2690402_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_346_fu_1814_p2() {
    mul_ln1118_346_fu_1814_p2 = (!mul_ln1118_346_fu_1814_p0.read().is_01() || !ap_const_lv26_136.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_346_fu_1814_p0.read()) * sc_biguint<26>(ap_const_lv26_136);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_347_fu_1452_p0() {
    mul_ln1118_347_fu_1452_p0 =  (sc_lv<16>) (sext_ln1118_237_fu_2690412_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_347_fu_1452_p2() {
    mul_ln1118_347_fu_1452_p2 = (!mul_ln1118_347_fu_1452_p0.read().is_01() || !ap_const_lv24_FFFFAE.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_347_fu_1452_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFAE);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_348_fu_1816_p0() {
    mul_ln1118_348_fu_1816_p0 =  (sc_lv<16>) (sext_ln1118_236_fu_2690402_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_348_fu_1816_p2() {
    mul_ln1118_348_fu_1816_p2 = (!mul_ln1118_348_fu_1816_p0.read().is_01() || !ap_const_lv26_187.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_348_fu_1816_p0.read()) * sc_biguint<26>(ap_const_lv26_187);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_349_fu_1817_p0() {
    mul_ln1118_349_fu_1817_p0 =  (sc_lv<16>) (sext_ln1118_239_fu_2690427_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_349_fu_1817_p2() {
    mul_ln1118_349_fu_1817_p2 = (!mul_ln1118_349_fu_1817_p0.read().is_01() || !ap_const_lv23_36.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_349_fu_1817_p0.read()) * sc_biguint<23>(ap_const_lv23_36);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_34_fu_1412_p0() {
    mul_ln1118_34_fu_1412_p0 =  (sc_lv<16>) (sext_ln1118_18_fu_2682096_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_34_fu_1412_p2() {
    mul_ln1118_34_fu_1412_p2 = (!mul_ln1118_34_fu_1412_p0.read().is_01() || !ap_const_lv25_9D.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_34_fu_1412_p0.read()) * sc_biguint<25>(ap_const_lv25_9D);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_350_fu_1455_p0() {
    mul_ln1118_350_fu_1455_p0 =  (sc_lv<16>) (sext_ln1118_236_fu_2690402_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_350_fu_1455_p2() {
    mul_ln1118_350_fu_1455_p2 = (!mul_ln1118_350_fu_1455_p0.read().is_01() || !ap_const_lv26_3FFFE74.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_350_fu_1455_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFE74);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_351_fu_2182_p0() {
    mul_ln1118_351_fu_2182_p0 =  (sc_lv<16>) (sext_ln1118_240_fu_2690433_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_351_fu_2182_p2() {
    mul_ln1118_351_fu_2182_p2 = (!mul_ln1118_351_fu_2182_p0.read().is_01() || !ap_const_lv25_D8.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_351_fu_2182_p0.read()) * sc_biguint<25>(ap_const_lv25_D8);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_352_fu_2183_p0() {
    mul_ln1118_352_fu_2183_p0 =  (sc_lv<16>) (sext_ln1118_240_fu_2690433_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_352_fu_2183_p2() {
    mul_ln1118_352_fu_2183_p2 = (!mul_ln1118_352_fu_2183_p0.read().is_01() || !ap_const_lv25_1FFFF74.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_352_fu_2183_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF74);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_353_fu_2184_p0() {
    mul_ln1118_353_fu_2184_p0 = sext_ln1118_238_fu_2690422_p0.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_353_fu_2184_p2() {
    mul_ln1118_353_fu_2184_p2 = (!mul_ln1118_353_fu_2184_p0.read().is_01() || !ap_const_lv21_D.is_01())? sc_lv<21>(): sc_bigint<16>(mul_ln1118_353_fu_2184_p0.read()) * sc_biguint<21>(ap_const_lv21_D);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_354_fu_2331_p0() {
    mul_ln1118_354_fu_2331_p0 =  (sc_lv<16>) (sext_ln1118_236_fu_2690402_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_354_fu_2331_p2() {
    mul_ln1118_354_fu_2331_p2 = (!mul_ln1118_354_fu_2331_p0.read().is_01() || !ap_const_lv26_1AD.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_354_fu_2331_p0.read()) * sc_biguint<26>(ap_const_lv26_1AD);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_355_fu_1743_p0() {
    mul_ln1118_355_fu_1743_p0 =  (sc_lv<16>) (sext_ln1118_237_fu_2690412_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_355_fu_1743_p2() {
    mul_ln1118_355_fu_1743_p2 = (!mul_ln1118_355_fu_1743_p0.read().is_01() || !ap_const_lv24_FFFFAA.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_355_fu_1743_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFAA);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_356_fu_1591_p0() {
    mul_ln1118_356_fu_1591_p0 =  (sc_lv<16>) (sext_ln1118_240_fu_2690433_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_356_fu_1591_p2() {
    mul_ln1118_356_fu_1591_p2 = (!mul_ln1118_356_fu_1591_p0.read().is_01() || !ap_const_lv25_1FFFF13.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_356_fu_1591_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF13);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_357_fu_1875_p0() {
    mul_ln1118_357_fu_1875_p0 =  (sc_lv<16>) (sext_ln1118_240_fu_2690433_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_357_fu_1875_p2() {
    mul_ln1118_357_fu_1875_p2 = (!mul_ln1118_357_fu_1875_p0.read().is_01() || !ap_const_lv25_F1.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_357_fu_1875_p0.read()) * sc_biguint<25>(ap_const_lv25_F1);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_358_fu_1942_p0() {
    mul_ln1118_358_fu_1942_p0 =  (sc_lv<16>) (sext_ln1118_239_fu_2690427_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_358_fu_1942_p2() {
    mul_ln1118_358_fu_1942_p2 = (!mul_ln1118_358_fu_1942_p0.read().is_01() || !ap_const_lv23_23.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_358_fu_1942_p0.read()) * sc_biguint<23>(ap_const_lv23_23);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_359_fu_1572_p0() {
    mul_ln1118_359_fu_1572_p0 =  (sc_lv<16>) (sext_ln1118_237_fu_2690412_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_359_fu_1572_p2() {
    mul_ln1118_359_fu_1572_p2 = (!mul_ln1118_359_fu_1572_p0.read().is_01() || !ap_const_lv24_FFFFA7.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_359_fu_1572_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFA7);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_35_fu_2139_p0() {
    mul_ln1118_35_fu_2139_p0 =  (sc_lv<16>) (sext_ln1118_23_fu_2682139_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_35_fu_2139_p2() {
    mul_ln1118_35_fu_2139_p2 = (!mul_ln1118_35_fu_2139_p0.read().is_01() || !ap_const_lv24_FFFFA4.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_35_fu_2139_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFA4);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_360_fu_1856_p0() {
    mul_ln1118_360_fu_1856_p0 =  (sc_lv<16>) (sext_ln1118_237_fu_2690412_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_360_fu_1856_p2() {
    mul_ln1118_360_fu_1856_p2 = (!mul_ln1118_360_fu_1856_p0.read().is_01() || !ap_const_lv24_FFFFA9.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_360_fu_1856_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFA9);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_361_fu_1486_p0() {
    mul_ln1118_361_fu_1486_p0 =  (sc_lv<16>) (sext_ln1118_240_fu_2690433_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_361_fu_1486_p2() {
    mul_ln1118_361_fu_1486_p2 = (!mul_ln1118_361_fu_1486_p0.read().is_01() || !ap_const_lv25_1FFFF6C.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_361_fu_1486_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF6C);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_362_fu_1770_p0() {
    mul_ln1118_362_fu_1770_p0 =  (sc_lv<16>) (sext_ln1118_236_fu_2690402_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_362_fu_1770_p2() {
    mul_ln1118_362_fu_1770_p2 = (!mul_ln1118_362_fu_1770_p0.read().is_01() || !ap_const_lv26_3FFFEF9.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_362_fu_1770_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFEF9);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_363_fu_1727_p0() {
    mul_ln1118_363_fu_1727_p0 =  (sc_lv<16>) (sext_ln1118_236_fu_2690402_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_363_fu_1727_p2() {
    mul_ln1118_363_fu_1727_p2 = (!mul_ln1118_363_fu_1727_p0.read().is_01() || !ap_const_lv26_3FFFE96.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_363_fu_1727_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFE96);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_364_fu_1684_p0() {
    mul_ln1118_364_fu_1684_p0 =  (sc_lv<16>) (sext_ln1118_240_fu_2690433_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_364_fu_1684_p2() {
    mul_ln1118_364_fu_1684_p2 = (!mul_ln1118_364_fu_1684_p0.read().is_01() || !ap_const_lv25_E8.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_364_fu_1684_p0.read()) * sc_biguint<25>(ap_const_lv25_E8);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_365_fu_2295_p0() {
    mul_ln1118_365_fu_2295_p0 =  (sc_lv<16>) (sext_ln1118_237_fu_2690412_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_365_fu_2295_p2() {
    mul_ln1118_365_fu_2295_p2 = (!mul_ln1118_365_fu_2295_p0.read().is_01() || !ap_const_lv24_7B.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_365_fu_2295_p0.read()) * sc_biguint<24>(ap_const_lv24_7B);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_366_fu_1925_p0() {
    mul_ln1118_366_fu_1925_p0 =  (sc_lv<16>) (sext_ln1118_240_fu_2690433_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_366_fu_1925_p2() {
    mul_ln1118_366_fu_1925_p2 = (!mul_ln1118_366_fu_1925_p0.read().is_01() || !ap_const_lv25_96.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_366_fu_1925_p0.read()) * sc_biguint<25>(ap_const_lv25_96);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_367_fu_2209_p0() {
    mul_ln1118_367_fu_2209_p0 =  (sc_lv<16>) (sext_ln1118_253_fu_2690999_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_367_fu_2209_p2() {
    mul_ln1118_367_fu_2209_p2 = (!mul_ln1118_367_fu_2209_p0.read().is_01() || !ap_const_lv24_FFFFB7.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_367_fu_2209_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFB7);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_368_fu_2266_p0() {
    mul_ln1118_368_fu_2266_p0 =  (sc_lv<16>) (sext_ln1118_253_fu_2690999_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_368_fu_2266_p2() {
    mul_ln1118_368_fu_2266_p2 = (!mul_ln1118_368_fu_2266_p0.read().is_01() || !ap_const_lv24_FFFFAB.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_368_fu_2266_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFAB);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_369_fu_2267_p0() {
    mul_ln1118_369_fu_2267_p0 =  (sc_lv<16>) (sext_ln1118_252_fu_2690991_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_369_fu_2267_p2() {
    mul_ln1118_369_fu_2267_p2 = (!mul_ln1118_369_fu_2267_p0.read().is_01() || !ap_const_lv25_1FFFF5B.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_369_fu_2267_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF5B);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_36_fu_1841_p0() {
    mul_ln1118_36_fu_1841_p0 =  (sc_lv<16>) (sext_ln1118_20_fu_2682113_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_36_fu_1841_p2() {
    mul_ln1118_36_fu_1841_p2 = (!mul_ln1118_36_fu_1841_p0.read().is_01() || !ap_const_lv26_3FFFEBC.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_36_fu_1841_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFEBC);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_370_fu_1606_p0() {
    mul_ln1118_370_fu_1606_p0 =  (sc_lv<16>) (sext_ln1118_255_fu_2691011_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_370_fu_1606_p2() {
    mul_ln1118_370_fu_1606_p2 = (!mul_ln1118_370_fu_1606_p0.read().is_01() || !ap_const_lv23_3A.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_370_fu_1606_p0.read()) * sc_biguint<23>(ap_const_lv23_3A);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_371_fu_1607_p0() {
    mul_ln1118_371_fu_1607_p0 =  (sc_lv<16>) (sext_ln1118_252_fu_2690991_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_371_fu_1607_p2() {
    mul_ln1118_371_fu_1607_p2 = (!mul_ln1118_371_fu_1607_p0.read().is_01() || !ap_const_lv25_C6.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_371_fu_1607_p0.read()) * sc_biguint<25>(ap_const_lv25_C6);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_372_fu_1907_p0() {
    mul_ln1118_372_fu_1907_p0 = sext_ln1118_254_fu_2691006_p0.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_372_fu_1907_p2() {
    mul_ln1118_372_fu_1907_p2 = (!mul_ln1118_372_fu_1907_p0.read().is_01() || !ap_const_lv22_17.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_372_fu_1907_p0.read()) * sc_biguint<22>(ap_const_lv22_17);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_373_fu_2271_p0() {
    mul_ln1118_373_fu_2271_p0 =  (sc_lv<16>) (sext_ln1118_251_fu_2690981_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_373_fu_2271_p2() {
    mul_ln1118_373_fu_2271_p2 = (!mul_ln1118_373_fu_2271_p0.read().is_01() || !ap_const_lv26_12D.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_373_fu_2271_p0.read()) * sc_biguint<26>(ap_const_lv26_12D);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_374_fu_2272_p0() {
    mul_ln1118_374_fu_2272_p0 =  (sc_lv<16>) (sext_ln1118_253_fu_2690999_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_374_fu_2272_p2() {
    mul_ln1118_374_fu_2272_p2 = (!mul_ln1118_374_fu_2272_p0.read().is_01() || !ap_const_lv24_5D.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_374_fu_2272_p0.read()) * sc_biguint<24>(ap_const_lv24_5D);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_375_fu_2273_p0() {
    mul_ln1118_375_fu_2273_p0 =  (sc_lv<16>) (sext_ln1118_251_fu_2690981_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_375_fu_2273_p2() {
    mul_ln1118_375_fu_2273_p2 = (!mul_ln1118_375_fu_2273_p0.read().is_01() || !ap_const_lv26_150.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_375_fu_2273_p0.read()) * sc_biguint<26>(ap_const_lv26_150);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_376_fu_2274_p0() {
    mul_ln1118_376_fu_2274_p0 =  (sc_lv<16>) (sext_ln1118_251_fu_2690981_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_376_fu_2274_p2() {
    mul_ln1118_376_fu_2274_p2 = (!mul_ln1118_376_fu_2274_p0.read().is_01() || !ap_const_lv26_115.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_376_fu_2274_p0.read()) * sc_biguint<26>(ap_const_lv26_115);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_377_fu_1613_p0() {
    mul_ln1118_377_fu_1613_p0 =  (sc_lv<16>) (sext_ln1118_251_fu_2690981_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_377_fu_1613_p2() {
    mul_ln1118_377_fu_1613_p2 = (!mul_ln1118_377_fu_1613_p0.read().is_01() || !ap_const_lv26_3FFFE64.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_377_fu_1613_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFE64);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_378_fu_2212_p0() {
    mul_ln1118_378_fu_2212_p0 =  (sc_lv<16>) (sext_ln1118_252_fu_2690991_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_378_fu_2212_p2() {
    mul_ln1118_378_fu_2212_p2 = (!mul_ln1118_378_fu_2212_p0.read().is_01() || !ap_const_lv25_1FFFF1A.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_378_fu_2212_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF1A);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_379_fu_1615_p0() {
    mul_ln1118_379_fu_1615_p0 =  (sc_lv<16>) (sext_ln1118_255_fu_2691011_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_379_fu_1615_p2() {
    mul_ln1118_379_fu_1615_p2 = (!mul_ln1118_379_fu_1615_p0.read().is_01() || !ap_const_lv23_7FFFDB.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_379_fu_1615_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFDB);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_37_fu_1479_p0() {
    mul_ln1118_37_fu_1479_p0 =  (sc_lv<16>) (sext_ln1118_18_fu_2682096_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_37_fu_1479_p2() {
    mul_ln1118_37_fu_1479_p2 = (!mul_ln1118_37_fu_1479_p0.read().is_01() || !ap_const_lv25_1FFFF5B.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_37_fu_1479_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF5B);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_380_fu_2275_p0() {
    mul_ln1118_380_fu_2275_p0 =  (sc_lv<16>) (sext_ln1118_251_fu_2690981_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_380_fu_2275_p2() {
    mul_ln1118_380_fu_2275_p2 = (!mul_ln1118_380_fu_2275_p0.read().is_01() || !ap_const_lv26_116.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_380_fu_2275_p0.read()) * sc_biguint<26>(ap_const_lv26_116);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_381_fu_1617_p0() {
    mul_ln1118_381_fu_1617_p0 =  (sc_lv<16>) (sext_ln1118_252_fu_2690991_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_381_fu_1617_p2() {
    mul_ln1118_381_fu_1617_p2 = (!mul_ln1118_381_fu_1617_p0.read().is_01() || !ap_const_lv25_1FFFF35.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_381_fu_1617_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF35);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_382_fu_1740_p0() {
    mul_ln1118_382_fu_1740_p0 =  (sc_lv<16>) (sext_ln1118_251_fu_2690981_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_382_fu_1740_p2() {
    mul_ln1118_382_fu_1740_p2 = (!mul_ln1118_382_fu_1740_p0.read().is_01() || !ap_const_lv26_158.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_382_fu_1740_p0.read()) * sc_biguint<26>(ap_const_lv26_158);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_383_fu_2024_p0() {
    mul_ln1118_383_fu_2024_p0 =  (sc_lv<16>) (sext_ln1118_271_fu_2691538_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_383_fu_2024_p2() {
    mul_ln1118_383_fu_2024_p2 = (!mul_ln1118_383_fu_2024_p0.read().is_01() || !ap_const_lv25_86.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_383_fu_2024_p0.read()) * sc_biguint<25>(ap_const_lv25_86);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_384_fu_2199_p0() {
    mul_ln1118_384_fu_2199_p0 =  (sc_lv<16>) (sext_ln1118_275_fu_2691572_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_384_fu_2199_p2() {
    mul_ln1118_384_fu_2199_p2 = (!mul_ln1118_384_fu_2199_p0.read().is_01() || !ap_const_lv23_7FFFDA.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_384_fu_2199_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFDA);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_385_fu_1720_p0() {
    mul_ln1118_385_fu_1720_p0 =  (sc_lv<16>) (sext_ln1118_272_fu_2691549_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_385_fu_1720_p2() {
    mul_ln1118_385_fu_1720_p2 = (!mul_ln1118_385_fu_1720_p0.read().is_01() || !ap_const_lv24_65.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_385_fu_1720_p0.read()) * sc_biguint<24>(ap_const_lv24_65);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_386_fu_2207_p0() {
    mul_ln1118_386_fu_2207_p0 =  (sc_lv<16>) (sext_ln1118_271_fu_2691538_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_386_fu_2207_p2() {
    mul_ln1118_386_fu_2207_p2 = (!mul_ln1118_386_fu_2207_p0.read().is_01() || !ap_const_lv25_89.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_386_fu_2207_p0.read()) * sc_biguint<25>(ap_const_lv25_89);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_388_fu_1510_p0() {
    mul_ln1118_388_fu_1510_p0 =  (sc_lv<16>) (sext_ln1118_272_fu_2691549_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_388_fu_1510_p2() {
    mul_ln1118_388_fu_1510_p2 = (!mul_ln1118_388_fu_1510_p0.read().is_01() || !ap_const_lv24_FFFF9E.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_388_fu_1510_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF9E);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_389_fu_2121_p0() {
    mul_ln1118_389_fu_2121_p0 =  (sc_lv<16>) (sext_ln1118_271_fu_2691538_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_389_fu_2121_p2() {
    mul_ln1118_389_fu_2121_p2 = (!mul_ln1118_389_fu_2121_p0.read().is_01() || !ap_const_lv25_DD.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_389_fu_2121_p0.read()) * sc_biguint<25>(ap_const_lv25_DD);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_38_fu_1843_p0() {
    mul_ln1118_38_fu_1843_p0 =  (sc_lv<16>) (sext_ln1118_20_fu_2682113_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_38_fu_1843_p2() {
    mul_ln1118_38_fu_1843_p2 = (!mul_ln1118_38_fu_1843_p0.read().is_01() || !ap_const_lv26_3FFFEDE.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_38_fu_1843_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFEDE);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_390_fu_1751_p0() {
    mul_ln1118_390_fu_1751_p0 =  (sc_lv<16>) (sext_ln1118_271_fu_2691538_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_390_fu_1751_p2() {
    mul_ln1118_390_fu_1751_p2 = (!mul_ln1118_390_fu_1751_p0.read().is_01() || !ap_const_lv25_CF.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_390_fu_1751_p0.read()) * sc_biguint<25>(ap_const_lv25_CF);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_391_fu_1708_p0() {
    mul_ln1118_391_fu_1708_p0 =  (sc_lv<16>) (sext_ln1118_272_fu_2691549_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_391_fu_1708_p2() {
    mul_ln1118_391_fu_1708_p2 = (!mul_ln1118_391_fu_1708_p0.read().is_01() || !ap_const_lv24_FFFFB2.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_391_fu_1708_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFB2);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_392_fu_2120_p0() {
    mul_ln1118_392_fu_2120_p0 =  (sc_lv<16>) (sext_ln1118_271_fu_2691538_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_392_fu_2120_p2() {
    mul_ln1118_392_fu_2120_p2 = (!mul_ln1118_392_fu_2120_p0.read().is_01() || !ap_const_lv25_D5.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_392_fu_2120_p0.read()) * sc_biguint<25>(ap_const_lv25_D5);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_393_fu_1622_p0() {
    mul_ln1118_393_fu_1622_p0 =  (sc_lv<16>) (sext_ln1118_272_fu_2691549_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_393_fu_1622_p2() {
    mul_ln1118_393_fu_1622_p2 = (!mul_ln1118_393_fu_1622_p0.read().is_01() || !ap_const_lv24_47.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_393_fu_1622_p0.read()) * sc_biguint<24>(ap_const_lv24_47);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_394_fu_2034_p0() {
    mul_ln1118_394_fu_2034_p0 =  (sc_lv<16>) (sext_ln1118_272_fu_2691549_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_394_fu_2034_p2() {
    mul_ln1118_394_fu_2034_p2 = (!mul_ln1118_394_fu_2034_p0.read().is_01() || !ap_const_lv24_52.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_394_fu_2034_p0.read()) * sc_biguint<24>(ap_const_lv24_52);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_395_fu_1863_p0() {
    mul_ln1118_395_fu_1863_p0 =  (sc_lv<16>) (sext_ln1118_272_fu_2691549_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_395_fu_1863_p2() {
    mul_ln1118_395_fu_1863_p2 = (!mul_ln1118_395_fu_1863_p0.read().is_01() || !ap_const_lv24_6F.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_395_fu_1863_p0.read()) * sc_biguint<24>(ap_const_lv24_6F);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_396_fu_2147_p0() {
    mul_ln1118_396_fu_2147_p0 = sext_ln1118_270_fu_2691533_p0.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_396_fu_2147_p2() {
    mul_ln1118_396_fu_2147_p2 = (!mul_ln1118_396_fu_2147_p0.read().is_01() || !ap_const_lv26_117.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_396_fu_2147_p0.read()) * sc_biguint<26>(ap_const_lv26_117);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_397_fu_1400_p0() {
    mul_ln1118_397_fu_1400_p0 =  (sc_lv<16>) (sext_ln1118_272_fu_2691549_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_397_fu_1400_p2() {
    mul_ln1118_397_fu_1400_p2 = (!mul_ln1118_397_fu_1400_p0.read().is_01() || !ap_const_lv24_54.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_397_fu_1400_p0.read()) * sc_biguint<24>(ap_const_lv24_54);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_398_fu_1401_p0() {
    mul_ln1118_398_fu_1401_p0 =  (sc_lv<16>) (sext_ln1118_271_fu_2691538_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_398_fu_1401_p2() {
    mul_ln1118_398_fu_1401_p2 = (!mul_ln1118_398_fu_1401_p0.read().is_01() || !ap_const_lv25_1FFFF05.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_398_fu_1401_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF05);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_399_fu_2064_p0() {
    mul_ln1118_399_fu_2064_p0 =  (sc_lv<16>) (sext_ln1118_272_fu_2691549_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_399_fu_2064_p2() {
    mul_ln1118_399_fu_2064_p2 = (!mul_ln1118_399_fu_2064_p0.read().is_01() || !ap_const_lv24_FFFFB1.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_399_fu_2064_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFB1);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_39_fu_1716_p0() {
    mul_ln1118_39_fu_1716_p0 =  (sc_lv<16>) (sext_ln1118_20_fu_2682113_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_39_fu_1716_p2() {
    mul_ln1118_39_fu_1716_p2 = (!mul_ln1118_39_fu_1716_p0.read().is_01() || !ap_const_lv26_3FFFE51.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_39_fu_1716_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFE51);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_400_fu_1339_p0() {
    mul_ln1118_400_fu_1339_p0 =  (sc_lv<16>) (sext_ln1118_272_fu_2691549_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_400_fu_1339_p2() {
    mul_ln1118_400_fu_1339_p2 = (!mul_ln1118_400_fu_1339_p0.read().is_01() || !ap_const_lv24_FFFFB4.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_400_fu_1339_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFB4);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_401_fu_2002_p0() {
    mul_ln1118_401_fu_2002_p0 =  (sc_lv<16>) (sext_ln1118_272_fu_2691549_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_401_fu_2002_p2() {
    mul_ln1118_401_fu_2002_p2 = (!mul_ln1118_401_fu_2002_p0.read().is_01() || !ap_const_lv24_FFFF8A.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_401_fu_2002_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF8A);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_402_fu_1405_p0() {
    mul_ln1118_402_fu_1405_p0 =  (sc_lv<16>) (sext_ln1118_271_fu_2691538_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_402_fu_1405_p2() {
    mul_ln1118_402_fu_1405_p2 = (!mul_ln1118_402_fu_1405_p0.read().is_01() || !ap_const_lv25_1FFFF7D.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_402_fu_1405_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF7D);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_403_fu_1705_p0() {
    mul_ln1118_403_fu_1705_p0 = sext_ln1118_274_fu_2691567_p0.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_403_fu_1705_p2() {
    mul_ln1118_403_fu_1705_p2 = (!mul_ln1118_403_fu_1705_p0.read().is_01() || !ap_const_lv22_3FFFED.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_403_fu_1705_p0.read()) * sc_bigint<22>(ap_const_lv22_3FFFED);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_404_fu_1407_p0() {
    mul_ln1118_404_fu_1407_p0 =  (sc_lv<16>) (sext_ln1118_286_fu_2692125_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_404_fu_1407_p2() {
    mul_ln1118_404_fu_1407_p2 = (!mul_ln1118_404_fu_1407_p0.read().is_01() || !ap_const_lv25_B6.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_404_fu_1407_p0.read()) * sc_biguint<25>(ap_const_lv25_B6);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_405_fu_1643_p0() {
    mul_ln1118_405_fu_1643_p0 =  (sc_lv<16>) (sext_ln1118_285_fu_2692117_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_405_fu_1643_p2() {
    mul_ln1118_405_fu_1643_p2 = (!mul_ln1118_405_fu_1643_p0.read().is_01() || !ap_const_lv26_3FFFEAB.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_405_fu_1643_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFEAB);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_406_fu_2071_p0() {
    mul_ln1118_406_fu_2071_p0 =  (sc_lv<16>) (sext_ln1118_289_fu_2692148_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_406_fu_2071_p2() {
    mul_ln1118_406_fu_2071_p2 = (!mul_ln1118_406_fu_2071_p0.read().is_01() || !ap_const_lv23_7FFFCD.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_406_fu_2071_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFCD);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_407_fu_2318_p0() {
    mul_ln1118_407_fu_2318_p0 =  (sc_lv<16>) (sext_ln1118_287_fu_2692137_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_407_fu_2318_p2() {
    mul_ln1118_407_fu_2318_p2 = (!mul_ln1118_407_fu_2318_p0.read().is_01() || !ap_const_lv24_FFFF9B.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_407_fu_2318_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF9B);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_408_fu_2073_p0() {
    mul_ln1118_408_fu_2073_p0 =  (sc_lv<16>) (sext_ln1118_286_fu_2692125_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_408_fu_2073_p2() {
    mul_ln1118_408_fu_2073_p2 = (!mul_ln1118_408_fu_2073_p0.read().is_01() || !ap_const_lv25_1FFFF35.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_408_fu_2073_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF35);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_409_fu_2211_p0() {
    mul_ln1118_409_fu_2211_p0 =  (sc_lv<16>) (sext_ln1118_286_fu_2692125_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_409_fu_2211_p2() {
    mul_ln1118_409_fu_2211_p2 = (!mul_ln1118_409_fu_2211_p0.read().is_01() || !ap_const_lv25_F5.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_409_fu_2211_p0.read()) * sc_biguint<25>(ap_const_lv25_F5);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_40_fu_1845_p0() {
    mul_ln1118_40_fu_1845_p0 =  (sc_lv<16>) (sext_ln1118_18_fu_2682096_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_40_fu_1845_p2() {
    mul_ln1118_40_fu_1845_p2 = (!mul_ln1118_40_fu_1845_p0.read().is_01() || !ap_const_lv25_1FFFF56.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_40_fu_1845_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF56);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_410_fu_1712_p0() {
    mul_ln1118_410_fu_1712_p0 =  (sc_lv<16>) (sext_ln1118_286_fu_2692125_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_410_fu_1712_p2() {
    mul_ln1118_410_fu_1712_p2 = (!mul_ln1118_410_fu_1712_p0.read().is_01() || !ap_const_lv25_A2.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_410_fu_1712_p0.read()) * sc_biguint<25>(ap_const_lv25_A2);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_411_fu_1476_p0() {
    mul_ln1118_411_fu_1476_p0 =  (sc_lv<16>) (sext_ln1118_285_fu_2692117_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_411_fu_1476_p2() {
    mul_ln1118_411_fu_1476_p2 = (!mul_ln1118_411_fu_1476_p0.read().is_01() || !ap_const_lv26_3FFFE89.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_411_fu_1476_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFE89);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_413_fu_1760_p0() {
    mul_ln1118_413_fu_1760_p0 =  (sc_lv<16>) (sext_ln1118_286_fu_2692125_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_413_fu_1760_p2() {
    mul_ln1118_413_fu_1760_p2 = (!mul_ln1118_413_fu_1760_p0.read().is_01() || !ap_const_lv25_1FFFF59.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_413_fu_1760_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF59);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_414_fu_2153_p0() {
    mul_ln1118_414_fu_2153_p0 =  (sc_lv<16>) (sext_ln1118_287_fu_2692137_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_414_fu_2153_p2() {
    mul_ln1118_414_fu_2153_p2 = (!mul_ln1118_414_fu_2153_p0.read().is_01() || !ap_const_lv24_FFFF87.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_414_fu_2153_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF87);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_415_fu_1347_p0() {
    mul_ln1118_415_fu_1347_p0 =  (sc_lv<16>) (sext_ln1118_286_fu_2692125_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_415_fu_1347_p2() {
    mul_ln1118_415_fu_1347_p2 = (!mul_ln1118_415_fu_1347_p0.read().is_01() || !ap_const_lv25_1FFFF1D.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_415_fu_1347_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF1D);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_416_fu_1619_p0() {
    mul_ln1118_416_fu_1619_p0 =  (sc_lv<16>) (sext_ln1118_285_fu_2692117_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_416_fu_1619_p2() {
    mul_ln1118_416_fu_1619_p2 = (!mul_ln1118_416_fu_1619_p0.read().is_01() || !ap_const_lv26_130.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_416_fu_1619_p0.read()) * sc_biguint<26>(ap_const_lv26_130);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_417_fu_2031_p0() {
    mul_ln1118_417_fu_2031_p0 =  (sc_lv<16>) (sext_ln1118_287_fu_2692137_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_417_fu_2031_p2() {
    mul_ln1118_417_fu_2031_p2 = (!mul_ln1118_417_fu_2031_p0.read().is_01() || !ap_const_lv24_FFFFA8.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_417_fu_2031_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFA8);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_418_fu_2187_p0() {
    mul_ln1118_418_fu_2187_p0 =  (sc_lv<16>) (sext_ln1118_289_fu_2692148_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_418_fu_2187_p2() {
    mul_ln1118_418_fu_2187_p2 = (!mul_ln1118_418_fu_2187_p0.read().is_01() || !ap_const_lv23_7FFFD6.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_418_fu_2187_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFD6);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_419_fu_1490_p0() {
    mul_ln1118_419_fu_1490_p0 =  (sc_lv<16>) (sext_ln1118_286_fu_2692125_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_419_fu_1490_p2() {
    mul_ln1118_419_fu_1490_p2 = (!mul_ln1118_419_fu_1490_p0.read().is_01() || !ap_const_lv25_1FFFF53.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_419_fu_1490_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF53);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_41_fu_1483_p0() {
    mul_ln1118_41_fu_1483_p0 =  (sc_lv<16>) (sext_ln1118_18_fu_2682096_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_41_fu_1483_p2() {
    mul_ln1118_41_fu_1483_p2 = (!mul_ln1118_41_fu_1483_p0.read().is_01() || !ap_const_lv25_1FFFF50.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_41_fu_1483_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF50);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_420_fu_1447_p0() {
    mul_ln1118_420_fu_1447_p0 =  (sc_lv<16>) (sext_ln1118_286_fu_2692125_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_420_fu_1447_p2() {
    mul_ln1118_420_fu_1447_p2 = (!mul_ln1118_420_fu_1447_p0.read().is_01() || !ap_const_lv25_F6.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_420_fu_1447_p0.read()) * sc_biguint<25>(ap_const_lv25_F6);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_421_fu_1532_p0() {
    mul_ln1118_421_fu_1532_p0 =  (sc_lv<16>) (sext_ln1118_289_fu_2692148_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_421_fu_1532_p2() {
    mul_ln1118_421_fu_1532_p2 = (!mul_ln1118_421_fu_1532_p0.read().is_01() || !ap_const_lv23_7FFFCA.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_421_fu_1532_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFCA);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_422_fu_2015_p0() {
    mul_ln1118_422_fu_2015_p0 =  (sc_lv<16>) (sext_ln1118_285_fu_2692117_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_422_fu_2015_p2() {
    mul_ln1118_422_fu_2015_p2 = (!mul_ln1118_422_fu_2015_p0.read().is_01() || !ap_const_lv26_3FFFEA1.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_422_fu_2015_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFEA1);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_423_fu_2299_p0() {
    mul_ln1118_423_fu_2299_p0 =  (sc_lv<16>) (sext_ln1118_302_fu_2692711_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_423_fu_2299_p2() {
    mul_ln1118_423_fu_2299_p2 = (!mul_ln1118_423_fu_2299_p0.read().is_01() || !ap_const_lv26_10A.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_423_fu_2299_p0.read()) * sc_biguint<26>(ap_const_lv26_10A);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_424_fu_2057_p0() {
    mul_ln1118_424_fu_2057_p0 =  (sc_lv<16>) (sext_ln1118_301_fu_2692705_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_424_fu_2057_p2() {
    mul_ln1118_424_fu_2057_p2 = (!mul_ln1118_424_fu_2057_p0.read().is_01() || !ap_const_lv23_7FFFC3.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_424_fu_2057_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFC3);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_425_fu_1857_p0() {
    mul_ln1118_425_fu_1857_p0 =  (sc_lv<16>) (sext_ln1118_304_fu_2692735_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_425_fu_1857_p2() {
    mul_ln1118_425_fu_1857_p2 = (!mul_ln1118_425_fu_1857_p0.read().is_01() || !ap_const_lv24_65.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_425_fu_1857_p0.read()) * sc_biguint<24>(ap_const_lv24_65);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_426_fu_2157_p0() {
    mul_ln1118_426_fu_2157_p0 =  (sc_lv<16>) (sext_ln1118_302_fu_2692711_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_426_fu_2157_p2() {
    mul_ln1118_426_fu_2157_p2 = (!mul_ln1118_426_fu_2157_p0.read().is_01() || !ap_const_lv26_185.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_426_fu_2157_p0.read()) * sc_biguint<26>(ap_const_lv26_185);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_427_fu_1795_p0() {
    mul_ln1118_427_fu_1795_p0 =  (sc_lv<16>) (sext_ln1118_302_fu_2692711_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_427_fu_1795_p2() {
    mul_ln1118_427_fu_1795_p2 = (!mul_ln1118_427_fu_1795_p0.read().is_01() || !ap_const_lv26_15C.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_427_fu_1795_p0.read()) * sc_biguint<26>(ap_const_lv26_15C);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_428_fu_1796_p0() {
    mul_ln1118_428_fu_1796_p0 =  (sc_lv<16>) (sext_ln1118_303_fu_2692723_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_428_fu_1796_p2() {
    mul_ln1118_428_fu_1796_p2 = (!mul_ln1118_428_fu_1796_p0.read().is_01() || !ap_const_lv25_DA.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_428_fu_1796_p0.read()) * sc_biguint<25>(ap_const_lv25_DA);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_429_fu_1861_p0() {
    mul_ln1118_429_fu_1861_p0 =  (sc_lv<16>) (sext_ln1118_304_fu_2692735_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_429_fu_1861_p2() {
    mul_ln1118_429_fu_1861_p2 = (!mul_ln1118_429_fu_1861_p0.read().is_01() || !ap_const_lv24_FFFFAF.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_429_fu_1861_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFAF);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_42_fu_1870_p0() {
    mul_ln1118_42_fu_1870_p0 =  (sc_lv<16>) (sext_ln1118_20_fu_2682113_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_42_fu_1870_p2() {
    mul_ln1118_42_fu_1870_p2 = (!mul_ln1118_42_fu_1870_p0.read().is_01() || !ap_const_lv26_3FFFE37.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_42_fu_1870_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFE37);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_430_fu_1499_p0() {
    mul_ln1118_430_fu_1499_p0 =  (sc_lv<16>) (sext_ln1118_303_fu_2692723_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_430_fu_1499_p2() {
    mul_ln1118_430_fu_1499_p2 = (!mul_ln1118_430_fu_1499_p0.read().is_01() || !ap_const_lv25_1FFFF7B.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_430_fu_1499_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF7B);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_431_fu_2162_p0() {
    mul_ln1118_431_fu_2162_p0 =  (sc_lv<16>) (sext_ln1118_302_fu_2692711_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_431_fu_2162_p2() {
    mul_ln1118_431_fu_2162_p2 = (!mul_ln1118_431_fu_2162_p0.read().is_01() || !ap_const_lv26_146.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_431_fu_2162_p0.read()) * sc_biguint<26>(ap_const_lv26_146);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_432_fu_2163_p0() {
    mul_ln1118_432_fu_2163_p0 =  (sc_lv<16>) (sext_ln1118_303_fu_2692723_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_432_fu_2163_p2() {
    mul_ln1118_432_fu_2163_p2 = (!mul_ln1118_432_fu_2163_p0.read().is_01() || !ap_const_lv25_BE.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_432_fu_2163_p0.read()) * sc_biguint<25>(ap_const_lv25_BE);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_433_fu_2164_p0() {
    mul_ln1118_433_fu_2164_p0 =  (sc_lv<16>) (sext_ln1118_304_fu_2692735_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_433_fu_2164_p2() {
    mul_ln1118_433_fu_2164_p2 = (!mul_ln1118_433_fu_2164_p0.read().is_01() || !ap_const_lv24_FFFFAE.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_433_fu_2164_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFAE);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_434_fu_1503_p0() {
    mul_ln1118_434_fu_1503_p0 =  (sc_lv<16>) (sext_ln1118_302_fu_2692711_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_434_fu_1503_p2() {
    mul_ln1118_434_fu_1503_p2 = (!mul_ln1118_434_fu_1503_p0.read().is_01() || !ap_const_lv26_1B0.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_434_fu_1503_p0.read()) * sc_biguint<26>(ap_const_lv26_1B0);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_435_fu_1504_p0() {
    mul_ln1118_435_fu_1504_p0 =  (sc_lv<16>) (sext_ln1118_304_fu_2692735_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_435_fu_1504_p2() {
    mul_ln1118_435_fu_1504_p2 = (!mul_ln1118_435_fu_1504_p0.read().is_01() || !ap_const_lv24_4B.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_435_fu_1504_p0.read()) * sc_biguint<24>(ap_const_lv24_4B);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_436_fu_1868_p0() {
    mul_ln1118_436_fu_1868_p0 =  (sc_lv<16>) (sext_ln1118_303_fu_2692723_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_436_fu_1868_p2() {
    mul_ln1118_436_fu_1868_p2 = (!mul_ln1118_436_fu_1868_p0.read().is_01() || !ap_const_lv25_1FFFF53.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_436_fu_1868_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF53);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_437_fu_1869_p0() {
    mul_ln1118_437_fu_1869_p0 =  (sc_lv<16>) (sext_ln1118_303_fu_2692723_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_437_fu_1869_p2() {
    mul_ln1118_437_fu_1869_p2 = (!mul_ln1118_437_fu_1869_p0.read().is_01() || !ap_const_lv25_1FFFF27.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_437_fu_1869_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF27);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_438_fu_1507_p0() {
    mul_ln1118_438_fu_1507_p0 =  (sc_lv<16>) (sext_ln1118_304_fu_2692735_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_438_fu_1507_p2() {
    mul_ln1118_438_fu_1507_p2 = (!mul_ln1118_438_fu_1507_p0.read().is_01() || !ap_const_lv24_49.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_438_fu_1507_p0.read()) * sc_biguint<24>(ap_const_lv24_49);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_439_fu_2236_p0() {
    mul_ln1118_439_fu_2236_p0 =  (sc_lv<16>) (sext_ln1118_304_fu_2692735_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_439_fu_2236_p2() {
    mul_ln1118_439_fu_2236_p2 = (!mul_ln1118_439_fu_2236_p0.read().is_01() || !ap_const_lv24_FFFFB9.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_439_fu_2236_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFB9);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_43_fu_1485_p0() {
    mul_ln1118_43_fu_1485_p0 =  (sc_lv<16>) (sext_ln1118_31_fu_2682613_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_43_fu_1485_p2() {
    mul_ln1118_43_fu_1485_p2 = (!mul_ln1118_43_fu_1485_p0.read().is_01() || !ap_const_lv26_3FFFEF4.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_43_fu_1485_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFEF4);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_440_fu_1430_p0() {
    mul_ln1118_440_fu_1430_p0 =  (sc_lv<16>) (sext_ln1118_304_fu_2692735_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_440_fu_1430_p2() {
    mul_ln1118_440_fu_1430_p2 = (!mul_ln1118_440_fu_1430_p0.read().is_01() || !ap_const_lv24_FFFFB6.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_440_fu_1430_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFB6);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_441_fu_1914_p0() {
    mul_ln1118_441_fu_1914_p0 =  (sc_lv<16>) (sext_ln1118_302_fu_2692711_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_441_fu_1914_p2() {
    mul_ln1118_441_fu_1914_p2 = (!mul_ln1118_441_fu_1914_p0.read().is_01() || !ap_const_lv26_3FFFEAB.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_441_fu_1914_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFEAB);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_442_fu_1453_p0() {
    mul_ln1118_442_fu_1453_p0 =  (sc_lv<16>) (sext_ln1118_302_fu_2692711_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_442_fu_1453_p2() {
    mul_ln1118_442_fu_1453_p2 = (!mul_ln1118_442_fu_1453_p0.read().is_01() || !ap_const_lv26_3FFFEA4.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_442_fu_1453_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFEA4);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_443_fu_1519_p0() {
    mul_ln1118_443_fu_1519_p0 =  (sc_lv<16>) (sext_ln1118_303_fu_2692723_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_443_fu_1519_p2() {
    mul_ln1118_443_fu_1519_p2 = (!mul_ln1118_443_fu_1519_p0.read().is_01() || !ap_const_lv25_1FFFF0E.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_443_fu_1519_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF0E);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_444_fu_2012_p0() {
    mul_ln1118_444_fu_2012_p0 =  (sc_lv<16>) (sext_ln1118_303_fu_2692723_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_444_fu_2012_p2() {
    mul_ln1118_444_fu_2012_p2 = (!mul_ln1118_444_fu_2012_p0.read().is_01() || !ap_const_lv25_1FFFF22.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_444_fu_2012_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF22);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_445_fu_1969_p0() {
    mul_ln1118_445_fu_1969_p0 =  (sc_lv<16>) (sext_ln1118_301_fu_2692705_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_445_fu_1969_p2() {
    mul_ln1118_445_fu_1969_p2 = (!mul_ln1118_445_fu_1969_p0.read().is_01() || !ap_const_lv23_7FFFC5.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_445_fu_1969_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFC5);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_446_fu_2253_p0() {
    mul_ln1118_446_fu_2253_p0 =  (sc_lv<16>) (sext_ln1118_303_fu_2692723_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_446_fu_2253_p2() {
    mul_ln1118_446_fu_2253_p2 = (!mul_ln1118_446_fu_2253_p0.read().is_01() || !ap_const_lv25_1FFFF2E.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_446_fu_2253_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF2E);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_447_fu_1556_p0() {
    mul_ln1118_447_fu_1556_p0 =  (sc_lv<16>) (sext_ln1118_302_fu_2692711_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_447_fu_1556_p2() {
    mul_ln1118_447_fu_1556_p2 = (!mul_ln1118_447_fu_1556_p0.read().is_01() || !ap_const_lv26_3FFFEBF.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_447_fu_1556_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFEBF);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_448_fu_1840_p0() {
    mul_ln1118_448_fu_1840_p0 = sext_ln1118_310_fu_2693144_p0.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_448_fu_1840_p2() {
    mul_ln1118_448_fu_1840_p2 = (!mul_ln1118_448_fu_1840_p0.read().is_01() || !ap_const_lv24_FFFFAE.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_448_fu_1840_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFAE);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_449_fu_1797_p0() {
    mul_ln1118_449_fu_1797_p0 = sext_ln1118_309_fu_2693139_p0.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_449_fu_1797_p2() {
    mul_ln1118_449_fu_1797_p2 = (!mul_ln1118_449_fu_1797_p0.read().is_01() || !ap_const_lv23_27.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_449_fu_1797_p0.read()) * sc_biguint<23>(ap_const_lv23_27);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_44_fu_2297_p0() {
    mul_ln1118_44_fu_2297_p0 =  (sc_lv<16>) (sext_ln1118_31_fu_2682613_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_44_fu_2297_p2() {
    mul_ln1118_44_fu_2297_p2 = (!mul_ln1118_44_fu_2297_p0.read().is_01() || !ap_const_lv26_3FFFE2C.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_44_fu_2297_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFE2C);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_450_fu_2081_p0() {
    mul_ln1118_450_fu_2081_p0 =  (sc_lv<16>) (sext_ln1118_308_fu_2693131_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_450_fu_2081_p2() {
    mul_ln1118_450_fu_2081_p2 = (!mul_ln1118_450_fu_2081_p0.read().is_01() || !ap_const_lv25_1FFFF5D.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_450_fu_2081_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF5D);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_451_fu_1384_p0() {
    mul_ln1118_451_fu_1384_p0 =  (sc_lv<16>) (sext_ln1118_308_fu_2693131_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_451_fu_1384_p2() {
    mul_ln1118_451_fu_1384_p2 = (!mul_ln1118_451_fu_1384_p0.read().is_01() || !ap_const_lv25_1FFFF67.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_451_fu_1384_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF67);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_452_fu_1668_p0() {
    mul_ln1118_452_fu_1668_p0 = sext_ln1118_307_fu_2693126_p0.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_452_fu_1668_p2() {
    mul_ln1118_452_fu_1668_p2 = (!mul_ln1118_452_fu_1668_p0.read().is_01() || !ap_const_lv26_117.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_452_fu_1668_p0.read()) * sc_biguint<26>(ap_const_lv26_117);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_453_fu_2251_p0() {
    mul_ln1118_453_fu_2251_p0 =  (sc_lv<16>) (sext_ln1118_308_fu_2693131_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_453_fu_2251_p2() {
    mul_ln1118_453_fu_2251_p2 = (!mul_ln1118_453_fu_2251_p0.read().is_01() || !ap_const_lv25_1FFFF24.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_453_fu_2251_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF24);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_454_fu_1590_p0() {
    mul_ln1118_454_fu_1590_p0 =  (sc_lv<16>) (sext_ln1118_308_fu_2693131_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_454_fu_1590_p2() {
    mul_ln1118_454_fu_1590_p2 = (!mul_ln1118_454_fu_1590_p0.read().is_01() || !ap_const_lv25_1FFFF71.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_454_fu_1590_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF71);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_456_fu_1527_p0() {
    mul_ln1118_456_fu_1527_p0 =  (sc_lv<16>) (sext_ln1118_323_fu_2693445_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_456_fu_1527_p2() {
    mul_ln1118_456_fu_1527_p2 = (!mul_ln1118_456_fu_1527_p0.read().is_01() || !ap_const_lv23_7FFFCB.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_456_fu_1527_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFCB);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_457_fu_1528_p0() {
    mul_ln1118_457_fu_1528_p0 =  (sc_lv<16>) (sext_ln1118_318_fu_2693413_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_457_fu_1528_p2() {
    mul_ln1118_457_fu_1528_p2 = (!mul_ln1118_457_fu_1528_p0.read().is_01() || !ap_const_lv26_164.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_457_fu_1528_p0.read()) * sc_biguint<26>(ap_const_lv26_164);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_458_fu_1892_p0() {
    mul_ln1118_458_fu_1892_p0 =  (sc_lv<16>) (sext_ln1118_321_fu_2693432_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_458_fu_1892_p2() {
    mul_ln1118_458_fu_1892_p2 = (!mul_ln1118_458_fu_1892_p0.read().is_01() || !ap_const_lv21_1FFFF5.is_01())? sc_lv<21>(): sc_bigint<16>(mul_ln1118_458_fu_1892_p0.read()) * sc_bigint<21>(ap_const_lv21_1FFFF5);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_459_fu_1594_p0() {
    mul_ln1118_459_fu_1594_p0 =  (sc_lv<16>) (sext_ln1118_318_fu_2693413_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_459_fu_1594_p2() {
    mul_ln1118_459_fu_1594_p2 = (!mul_ln1118_459_fu_1594_p0.read().is_01() || !ap_const_lv26_130.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_459_fu_1594_p0.read()) * sc_biguint<26>(ap_const_lv26_130);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_45_fu_1818_p0() {
    mul_ln1118_45_fu_1818_p0 =  (sc_lv<16>) (sext_ln1118_34_fu_2682640_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_45_fu_1818_p2() {
    mul_ln1118_45_fu_1818_p2 = (!mul_ln1118_45_fu_1818_p0.read().is_01() || !ap_const_lv24_59.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_45_fu_1818_p0.read()) * sc_biguint<24>(ap_const_lv24_59);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_460_fu_2257_p0() {
    mul_ln1118_460_fu_2257_p0 =  (sc_lv<16>) (sext_ln1118_322_fu_2693438_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_460_fu_2257_p2() {
    mul_ln1118_460_fu_2257_p2 = (!mul_ln1118_460_fu_2257_p0.read().is_01() || !ap_const_lv24_6A.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_460_fu_2257_p0.read()) * sc_biguint<24>(ap_const_lv24_6A);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_461_fu_1895_p0() {
    mul_ln1118_461_fu_1895_p0 =  (sc_lv<16>) (sext_ln1118_317_fu_2693404_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_461_fu_1895_p2() {
    mul_ln1118_461_fu_1895_p2 = (!mul_ln1118_461_fu_1895_p0.read().is_01() || !ap_const_lv25_9B.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_461_fu_1895_p0.read()) * sc_biguint<25>(ap_const_lv25_9B);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_462_fu_2259_p0() {
    mul_ln1118_462_fu_2259_p0 =  (sc_lv<16>) (sext_ln1118_318_fu_2693413_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_462_fu_2259_p2() {
    mul_ln1118_462_fu_2259_p2 = (!mul_ln1118_462_fu_2259_p0.read().is_01() || !ap_const_lv26_147.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_462_fu_2259_p0.read()) * sc_biguint<26>(ap_const_lv26_147);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_463_fu_2260_p0() {
    mul_ln1118_463_fu_2260_p0 =  (sc_lv<16>) (sext_ln1118_317_fu_2693404_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_463_fu_2260_p2() {
    mul_ln1118_463_fu_2260_p2 = (!mul_ln1118_463_fu_2260_p0.read().is_01() || !ap_const_lv25_C1.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_463_fu_2260_p0.read()) * sc_biguint<25>(ap_const_lv25_C1);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_464_fu_2261_p0() {
    mul_ln1118_464_fu_2261_p0 =  (sc_lv<16>) (sext_ln1118_318_fu_2693413_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_464_fu_2261_p2() {
    mul_ln1118_464_fu_2261_p2 = (!mul_ln1118_464_fu_2261_p0.read().is_01() || !ap_const_lv26_206.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_464_fu_2261_p0.read()) * sc_biguint<26>(ap_const_lv26_206);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_465_fu_1963_p0() {
    mul_ln1118_465_fu_1963_p0 =  (sc_lv<16>) (sext_ln1118_318_fu_2693413_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_465_fu_1963_p2() {
    mul_ln1118_465_fu_1963_p2 = (!mul_ln1118_465_fu_1963_p0.read().is_01() || !ap_const_lv26_1A2.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_465_fu_1963_p0.read()) * sc_biguint<26>(ap_const_lv26_1A2);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_466_fu_1601_p0() {
    mul_ln1118_466_fu_1601_p0 =  (sc_lv<16>) (sext_ln1118_321_fu_2693432_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_466_fu_1601_p2() {
    mul_ln1118_466_fu_1601_p2 = (!mul_ln1118_466_fu_1601_p0.read().is_01() || !ap_const_lv21_D.is_01())? sc_lv<21>(): sc_bigint<16>(mul_ln1118_466_fu_1601_p0.read()) * sc_biguint<21>(ap_const_lv21_D);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_467_fu_1602_p0() {
    mul_ln1118_467_fu_1602_p0 =  (sc_lv<16>) (sext_ln1118_317_fu_2693404_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_467_fu_1602_p2() {
    mul_ln1118_467_fu_1602_p2 = (!mul_ln1118_467_fu_1602_p0.read().is_01() || !ap_const_lv25_1FFFF5C.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_467_fu_1602_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF5C);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_468_fu_2340_p0() {
    mul_ln1118_468_fu_2340_p0 =  (sc_lv<16>) (sext_ln1118_322_fu_2693438_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_468_fu_2340_p2() {
    mul_ln1118_468_fu_2340_p2 = (!mul_ln1118_468_fu_2340_p0.read().is_01() || !ap_const_lv24_FFFFB5.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_468_fu_2340_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFB5);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_469_fu_2079_p0() {
    mul_ln1118_469_fu_2079_p0 =  (sc_lv<16>) (sext_ln1118_318_fu_2693413_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_469_fu_2079_p2() {
    mul_ln1118_469_fu_2079_p2 = (!mul_ln1118_469_fu_2079_p0.read().is_01() || !ap_const_lv26_12D.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_469_fu_2079_p0.read()) * sc_biguint<26>(ap_const_lv26_12D);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_46_fu_1775_p0() {
    mul_ln1118_46_fu_1775_p0 =  (sc_lv<16>) (sext_ln1118_31_fu_2682613_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_46_fu_1775_p2() {
    mul_ln1118_46_fu_1775_p2 = (!mul_ln1118_46_fu_1775_p0.read().is_01() || !ap_const_lv26_3FFFEC8.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_46_fu_1775_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFEC8);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_470_fu_2254_p0() {
    mul_ln1118_470_fu_2254_p0 =  (sc_lv<16>) (sext_ln1118_317_fu_2693404_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_470_fu_2254_p2() {
    mul_ln1118_470_fu_2254_p2 = (!mul_ln1118_470_fu_2254_p0.read().is_01() || !ap_const_lv25_1FFFF76.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_470_fu_2254_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF76);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_471_fu_1993_p0() {
    mul_ln1118_471_fu_1993_p0 =  (sc_lv<16>) (sext_ln1118_318_fu_2693413_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_471_fu_1993_p2() {
    mul_ln1118_471_fu_1993_p2 = (!mul_ln1118_471_fu_1993_p0.read().is_01() || !ap_const_lv26_1B3.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_471_fu_1993_p0.read()) * sc_biguint<26>(ap_const_lv26_1B3);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_472_fu_2249_p0() {
    mul_ln1118_472_fu_2249_p0 =  (sc_lv<16>) (sext_ln1118_323_fu_2693445_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_472_fu_2249_p2() {
    mul_ln1118_472_fu_2249_p2 = (!mul_ln1118_472_fu_2249_p0.read().is_01() || !ap_const_lv23_3A.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_472_fu_2249_p0.read()) * sc_biguint<23>(ap_const_lv23_3A);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_473_fu_2078_p0() {
    mul_ln1118_473_fu_2078_p0 =  (sc_lv<16>) (sext_ln1118_317_fu_2693404_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_473_fu_2078_p2() {
    mul_ln1118_473_fu_2078_p2 = (!mul_ln1118_473_fu_2078_p0.read().is_01() || !ap_const_lv25_F5.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_473_fu_2078_p0.read()) * sc_biguint<25>(ap_const_lv25_F5);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_474_fu_1381_p0() {
    mul_ln1118_474_fu_1381_p0 = sext_ln1118_316_fu_2693399_p0.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_474_fu_1381_p2() {
    mul_ln1118_474_fu_1381_p2 = (!mul_ln1118_474_fu_1381_p0.read().is_01() || !ap_const_lv22_3FFFE6.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_474_fu_1381_p0.read()) * sc_bigint<22>(ap_const_lv22_3FFFE6);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_475_fu_1338_p0() {
    mul_ln1118_475_fu_1338_p0 =  (sc_lv<16>) (sext_ln1118_322_fu_2693438_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_475_fu_1338_p2() {
    mul_ln1118_475_fu_1338_p2 = (!mul_ln1118_475_fu_1338_p0.read().is_01() || !ap_const_lv24_67.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_475_fu_1338_p0.read()) * sc_biguint<24>(ap_const_lv24_67);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_476_fu_2276_p0() {
    mul_ln1118_476_fu_2276_p0 =  (sc_lv<16>) (sext_ln1118_337_fu_2693976_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_476_fu_2276_p2() {
    mul_ln1118_476_fu_2276_p2 = (!mul_ln1118_476_fu_2276_p0.read().is_01() || !ap_const_lv25_D6.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_476_fu_2276_p0.read()) * sc_biguint<25>(ap_const_lv25_D6);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_477_fu_1906_p0() {
    mul_ln1118_477_fu_1906_p0 =  (sc_lv<16>) (sext_ln1118_336_fu_2693970_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_477_fu_1906_p2() {
    mul_ln1118_477_fu_1906_p2 = (!mul_ln1118_477_fu_1906_p0.read().is_01() || !ap_const_lv24_5A.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_477_fu_1906_p0.read()) * sc_biguint<24>(ap_const_lv24_5A);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_478_fu_1991_p0() {
    mul_ln1118_478_fu_1991_p0 =  (sc_lv<16>) (sext_ln1118_335_fu_2693959_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_478_fu_1991_p2() {
    mul_ln1118_478_fu_1991_p2 = (!mul_ln1118_478_fu_1991_p0.read().is_01() || !ap_const_lv26_3FFFEC5.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_478_fu_1991_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFEC5);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_479_fu_1948_p0() {
    mul_ln1118_479_fu_1948_p0 =  (sc_lv<16>) (sext_ln1118_335_fu_2693959_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_479_fu_1948_p2() {
    mul_ln1118_479_fu_1948_p2 = (!mul_ln1118_479_fu_1948_p0.read().is_01() || !ap_const_lv26_15A.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_479_fu_1948_p0.read()) * sc_biguint<26>(ap_const_lv26_15A);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_47_fu_1732_p0() {
    mul_ln1118_47_fu_1732_p0 =  (sc_lv<16>) (sext_ln1118_31_fu_2682613_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_47_fu_1732_p2() {
    mul_ln1118_47_fu_1732_p2 = (!mul_ln1118_47_fu_1732_p0.read().is_01() || !ap_const_lv26_157.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_47_fu_1732_p0.read()) * sc_biguint<26>(ap_const_lv26_157);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_480_fu_2104_p0() {
    mul_ln1118_480_fu_2104_p0 =  (sc_lv<16>) (sext_ln1118_335_fu_2693959_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_480_fu_2104_p2() {
    mul_ln1118_480_fu_2104_p2 = (!mul_ln1118_480_fu_2104_p0.read().is_01() || !ap_const_lv26_10B.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_480_fu_2104_p0.read()) * sc_biguint<26>(ap_const_lv26_10B);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_482_fu_1734_p0() {
    mul_ln1118_482_fu_1734_p0 =  (sc_lv<16>) (sext_ln1118_337_fu_2693976_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_482_fu_1734_p2() {
    mul_ln1118_482_fu_1734_p2 = (!mul_ln1118_482_fu_1734_p0.read().is_01() || !ap_const_lv25_FA.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_482_fu_1734_p0.read()) * sc_biguint<25>(ap_const_lv25_FA);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_483_fu_2346_p0() {
    mul_ln1118_483_fu_2346_p0 =  (sc_lv<16>) (sext_ln1118_337_fu_2693976_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_483_fu_2346_p2() {
    mul_ln1118_483_fu_2346_p2 = (!mul_ln1118_483_fu_2346_p0.read().is_01() || !ap_const_lv25_1FFFF3D.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_483_fu_2346_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF3D);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_484_fu_2347_p0() {
    mul_ln1118_484_fu_2347_p0 = sext_ln1118_334_fu_2693954_p0.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_484_fu_2347_p2() {
    mul_ln1118_484_fu_2347_p2 = (!mul_ln1118_484_fu_2347_p0.read().is_01() || !ap_const_lv22_3FFFEB.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_484_fu_2347_p0.read()) * sc_bigint<22>(ap_const_lv22_3FFFEB);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_485_fu_2348_p0() {
    mul_ln1118_485_fu_2348_p0 =  (sc_lv<16>) (sext_ln1118_335_fu_2693959_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_485_fu_2348_p2() {
    mul_ln1118_485_fu_2348_p2 = (!mul_ln1118_485_fu_2348_p0.read().is_01() || !ap_const_lv26_168.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_485_fu_2348_p0.read()) * sc_biguint<26>(ap_const_lv26_168);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_486_fu_2349_p0() {
    mul_ln1118_486_fu_2349_p0 =  (sc_lv<16>) (sext_ln1118_335_fu_2693959_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_486_fu_2349_p2() {
    mul_ln1118_486_fu_2349_p2 = (!mul_ln1118_486_fu_2349_p0.read().is_01() || !ap_const_lv26_10E.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_486_fu_2349_p0.read()) * sc_biguint<26>(ap_const_lv26_10E);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_487_fu_1560_p0() {
    mul_ln1118_487_fu_1560_p0 =  (sc_lv<16>) (sext_ln1118_337_fu_2693976_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_487_fu_1560_p2() {
    mul_ln1118_487_fu_1560_p2 = (!mul_ln1118_487_fu_1560_p0.read().is_01() || !ap_const_lv25_E8.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_487_fu_1560_p0.read()) * sc_biguint<25>(ap_const_lv25_E8);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_488_fu_1988_p0() {
    mul_ln1118_488_fu_1988_p0 =  (sc_lv<16>) (sext_ln1118_335_fu_2693959_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_488_fu_1988_p2() {
    mul_ln1118_488_fu_1988_p2 = (!mul_ln1118_488_fu_1988_p0.read().is_01() || !ap_const_lv26_3FFFEE7.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_488_fu_1988_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFEE7);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_489_fu_1989_p0() {
    mul_ln1118_489_fu_1989_p0 =  (sc_lv<16>) (sext_ln1118_337_fu_2693976_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_489_fu_1989_p2() {
    mul_ln1118_489_fu_1989_p2 = (!mul_ln1118_489_fu_1989_p0.read().is_01() || !ap_const_lv25_1FFFF24.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_489_fu_1989_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF24);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_48_fu_1940_p0() {
    mul_ln1118_48_fu_1940_p0 = sext_ln1118_33_fu_2682635_p0.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_48_fu_1940_p2() {
    mul_ln1118_48_fu_1940_p2 = (!mul_ln1118_48_fu_1940_p0.read().is_01() || !ap_const_lv23_2B.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_48_fu_1940_p0.read()) * sc_biguint<23>(ap_const_lv23_2B);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_490_fu_1627_p0() {
    mul_ln1118_490_fu_1627_p0 =  (sc_lv<16>) (sext_ln1118_337_fu_2693976_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_490_fu_1627_p2() {
    mul_ln1118_490_fu_1627_p2 = (!mul_ln1118_490_fu_1627_p0.read().is_01() || !ap_const_lv25_1FFFF4D.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_490_fu_1627_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF4D);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_491_fu_1692_p0() {
    mul_ln1118_491_fu_1692_p0 = sext_ln1118_333_fu_2693949_p0.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_491_fu_1692_p2() {
    mul_ln1118_491_fu_1692_p2 = (!mul_ln1118_491_fu_1692_p0.read().is_01() || !ap_const_lv23_7FFFCC.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_491_fu_1692_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFCC);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_492_fu_2056_p0() {
    mul_ln1118_492_fu_2056_p0 =  (sc_lv<16>) (sext_ln1118_337_fu_2693976_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_492_fu_2056_p2() {
    mul_ln1118_492_fu_2056_p2 = (!mul_ln1118_492_fu_2056_p0.read().is_01() || !ap_const_lv25_1FFFF28.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_492_fu_2056_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF28);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_493_fu_1694_p0() {
    mul_ln1118_493_fu_1694_p0 =  (sc_lv<16>) (sext_ln1118_337_fu_2693976_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_493_fu_1694_p2() {
    mul_ln1118_493_fu_1694_p2 = (!mul_ln1118_493_fu_1694_p0.read().is_01() || !ap_const_lv25_B1.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_493_fu_1694_p0.read()) * sc_biguint<25>(ap_const_lv25_B1);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_494_fu_1695_p0() {
    mul_ln1118_494_fu_1695_p0 =  (sc_lv<16>) (sext_ln1118_337_fu_2693976_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_494_fu_1695_p2() {
    mul_ln1118_494_fu_1695_p2 = (!mul_ln1118_494_fu_1695_p0.read().is_01() || !ap_const_lv25_1FFFF61.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_494_fu_1695_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF61);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_495_fu_2059_p0() {
    mul_ln1118_495_fu_2059_p0 =  (sc_lv<16>) (sext_ln1118_335_fu_2693959_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_495_fu_2059_p2() {
    mul_ln1118_495_fu_2059_p2 = (!mul_ln1118_495_fu_2059_p0.read().is_01() || !ap_const_lv26_125.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_495_fu_2059_p0.read()) * sc_biguint<26>(ap_const_lv26_125);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_496_fu_1633_p0() {
    mul_ln1118_496_fu_1633_p0 =  (sc_lv<16>) (sext_ln1118_337_fu_2693976_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_496_fu_1633_p2() {
    mul_ln1118_496_fu_1633_p2 = (!mul_ln1118_496_fu_1633_p0.read().is_01() || !ap_const_lv25_F1.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_496_fu_1633_p0.read()) * sc_biguint<25>(ap_const_lv25_F1);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_497_fu_1531_p0() {
    mul_ln1118_497_fu_1531_p0 =  (sc_lv<16>) (sext_ln1118_336_fu_2693970_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_497_fu_1531_p2() {
    mul_ln1118_497_fu_1531_p2 = (!mul_ln1118_497_fu_1531_p0.read().is_01() || !ap_const_lv24_47.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_497_fu_1531_p0.read()) * sc_biguint<24>(ap_const_lv24_47);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_498_fu_1815_p0() {
    mul_ln1118_498_fu_1815_p0 =  (sc_lv<16>) (sext_ln1118_351_fu_2694530_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_498_fu_1815_p2() {
    mul_ln1118_498_fu_1815_p2 = (!mul_ln1118_498_fu_1815_p0.read().is_01() || !ap_const_lv26_3FFFEDF.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_498_fu_1815_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFEDF);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_499_fu_1336_p0() {
    mul_ln1118_499_fu_1336_p0 =  (sc_lv<16>) (sext_ln1118_350_fu_2694521_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_499_fu_1336_p2() {
    mul_ln1118_499_fu_1336_p2 = (!mul_ln1118_499_fu_1336_p0.read().is_01() || !ap_const_lv24_6A.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_499_fu_1336_p0.read()) * sc_biguint<24>(ap_const_lv24_6A);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_49_fu_2096_p0() {
    mul_ln1118_49_fu_2096_p0 =  (sc_lv<16>) (sext_ln1118_31_fu_2682613_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_49_fu_2096_p2() {
    mul_ln1118_49_fu_2096_p2 = (!mul_ln1118_49_fu_2096_p0.read().is_01() || !ap_const_lv26_3FFFE70.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_49_fu_2096_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFE70);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_500_fu_2165_p0() {
    mul_ln1118_500_fu_2165_p0 =  (sc_lv<16>) (sext_ln1118_350_fu_2694521_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_500_fu_2165_p2() {
    mul_ln1118_500_fu_2165_p2 = (!mul_ln1118_500_fu_2165_p0.read().is_01() || !ap_const_lv24_FFFF83.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_500_fu_2165_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF83);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_501_fu_1661_p0() {
    mul_ln1118_501_fu_1661_p0 =  (sc_lv<16>) (sext_ln1118_349_fu_2694505_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_501_fu_1661_p2() {
    mul_ln1118_501_fu_1661_p2 = (!mul_ln1118_501_fu_1661_p0.read().is_01() || !ap_const_lv25_1FFFF0B.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_501_fu_1661_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF0B);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_502_fu_1618_p0() {
    mul_ln1118_502_fu_1618_p0 =  (sc_lv<16>) (sext_ln1118_351_fu_2694530_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_502_fu_1618_p2() {
    mul_ln1118_502_fu_1618_p2 = (!mul_ln1118_502_fu_1618_p0.read().is_01() || !ap_const_lv26_123.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_502_fu_1618_p0.read()) * sc_biguint<26>(ap_const_lv26_123);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_503_fu_2101_p0() {
    mul_ln1118_503_fu_2101_p0 =  (sc_lv<16>) (sext_ln1118_349_fu_2694505_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_503_fu_2101_p2() {
    mul_ln1118_503_fu_2101_p2 = (!mul_ln1118_503_fu_2101_p0.read().is_01() || !ap_const_lv25_1FFFF1A.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_503_fu_2101_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF1A);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_504_fu_2058_p0() {
    mul_ln1118_504_fu_2058_p0 =  (sc_lv<16>) (sext_ln1118_352_fu_2694538_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_504_fu_2058_p2() {
    mul_ln1118_504_fu_2058_p2 = (!mul_ln1118_504_fu_2058_p0.read().is_01() || !ap_const_lv23_37.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_504_fu_2058_p0.read()) * sc_biguint<23>(ap_const_lv23_37);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_505_fu_1478_p0() {
    mul_ln1118_505_fu_1478_p0 =  (sc_lv<16>) (sext_ln1118_349_fu_2694505_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_505_fu_1478_p2() {
    mul_ln1118_505_fu_1478_p2 = (!mul_ln1118_505_fu_1478_p0.read().is_01() || !ap_const_lv25_1FFFF0D.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_505_fu_1478_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF0D);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_506_fu_1645_p0() {
    mul_ln1118_506_fu_1645_p0 =  (sc_lv<16>) (sext_ln1118_349_fu_2694505_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_506_fu_1645_p2() {
    mul_ln1118_506_fu_1645_p2 = (!mul_ln1118_506_fu_1645_p0.read().is_01() || !ap_const_lv25_A4.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_506_fu_1645_p0.read()) * sc_biguint<25>(ap_const_lv25_A4);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_507_fu_1858_p0() {
    mul_ln1118_507_fu_1858_p0 = sext_ln1118_348_fu_2694500_p0.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_507_fu_1858_p2() {
    mul_ln1118_507_fu_1858_p2 = (!mul_ln1118_507_fu_1858_p0.read().is_01() || !ap_const_lv22_16.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_507_fu_1858_p0.read()) * sc_biguint<22>(ap_const_lv22_16);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_508_fu_1559_p0() {
    mul_ln1118_508_fu_1559_p0 =  (sc_lv<16>) (sext_ln1118_349_fu_2694505_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_508_fu_1559_p2() {
    mul_ln1118_508_fu_1559_p2 = (!mul_ln1118_508_fu_1559_p0.read().is_01() || !ap_const_lv25_CF.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_508_fu_1559_p0.read()) * sc_biguint<25>(ap_const_lv25_CF);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_509_fu_2298_p0() {
    mul_ln1118_509_fu_2298_p0 =  (sc_lv<16>) (sext_ln1118_349_fu_2694505_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_509_fu_2298_p2() {
    mul_ln1118_509_fu_2298_p2 = (!mul_ln1118_509_fu_2298_p0.read().is_01() || !ap_const_lv25_E8.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_509_fu_2298_p0.read()) * sc_biguint<25>(ap_const_lv25_E8);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_50_fu_1399_p0() {
    mul_ln1118_50_fu_1399_p0 =  (sc_lv<16>) (sext_ln1118_30_fu_2682607_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_50_fu_1399_p2() {
    mul_ln1118_50_fu_1399_p2 = (!mul_ln1118_50_fu_1399_p0.read().is_01() || !ap_const_lv25_CF.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_50_fu_1399_p0.read()) * sc_biguint<25>(ap_const_lv25_CF);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_510_fu_1473_p0() {
    mul_ln1118_510_fu_1473_p0 =  (sc_lv<16>) (sext_ln1118_349_fu_2694505_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_510_fu_1473_p2() {
    mul_ln1118_510_fu_1473_p2 = (!mul_ln1118_510_fu_1473_p0.read().is_01() || !ap_const_lv25_1FFFF76.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_510_fu_1473_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF76);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_511_fu_1416_p0() {
    mul_ln1118_511_fu_1416_p0 =  (sc_lv<16>) (sext_ln1118_350_fu_2694521_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_511_fu_1416_p2() {
    mul_ln1118_511_fu_1416_p2 = (!mul_ln1118_511_fu_1416_p0.read().is_01() || !ap_const_lv24_43.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_511_fu_1416_p0.read()) * sc_biguint<24>(ap_const_lv24_43);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_512_fu_2143_p0() {
    mul_ln1118_512_fu_2143_p0 =  (sc_lv<16>) (sext_ln1118_352_fu_2694538_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_512_fu_2143_p2() {
    mul_ln1118_512_fu_2143_p2 = (!mul_ln1118_512_fu_2143_p0.read().is_01() || !ap_const_lv23_36.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_512_fu_2143_p0.read()) * sc_biguint<23>(ap_const_lv23_36);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_513_fu_2144_p0() {
    mul_ln1118_513_fu_2144_p0 =  (sc_lv<16>) (sext_ln1118_351_fu_2694530_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_513_fu_2144_p2() {
    mul_ln1118_513_fu_2144_p2 = (!mul_ln1118_513_fu_2144_p0.read().is_01() || !ap_const_lv26_161.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_513_fu_2144_p0.read()) * sc_biguint<26>(ap_const_lv26_161);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_514_fu_2169_p0() {
    mul_ln1118_514_fu_2169_p0 =  (sc_lv<16>) (sext_ln1118_349_fu_2694505_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_514_fu_2169_p2() {
    mul_ln1118_514_fu_2169_p2 = (!mul_ln1118_514_fu_2169_p0.read().is_01() || !ap_const_lv25_1FFFF1B.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_514_fu_2169_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF1B);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_515_fu_1420_p0() {
    mul_ln1118_515_fu_1420_p0 =  (sc_lv<16>) (sext_ln1118_349_fu_2694505_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_515_fu_1420_p2() {
    mul_ln1118_515_fu_1420_p2 = (!mul_ln1118_515_fu_1420_p0.read().is_01() || !ap_const_lv25_EC.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_515_fu_1420_p0.read()) * sc_biguint<25>(ap_const_lv25_EC);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_516_fu_2083_p0() {
    mul_ln1118_516_fu_2083_p0 =  (sc_lv<16>) (sext_ln1118_349_fu_2694505_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_516_fu_2083_p2() {
    mul_ln1118_516_fu_2083_p2 = (!mul_ln1118_516_fu_2083_p0.read().is_01() || !ap_const_lv25_DE.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_516_fu_2083_p0.read()) * sc_biguint<25>(ap_const_lv25_DE);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_517_fu_2084_p0() {
    mul_ln1118_517_fu_2084_p0 =  (sc_lv<16>) (sext_ln1118_351_fu_2694530_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_517_fu_2084_p2() {
    mul_ln1118_517_fu_2084_p2 = (!mul_ln1118_517_fu_2084_p0.read().is_01() || !ap_const_lv26_12A.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_517_fu_2084_p0.read()) * sc_biguint<26>(ap_const_lv26_12A);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_518_fu_1786_p0() {
    mul_ln1118_518_fu_1786_p0 =  (sc_lv<16>) (sext_ln1118_350_fu_2694521_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_518_fu_1786_p2() {
    mul_ln1118_518_fu_1786_p2 = (!mul_ln1118_518_fu_1786_p0.read().is_01() || !ap_const_lv24_49.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_518_fu_1786_p0.read()) * sc_biguint<24>(ap_const_lv24_49);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_519_fu_1787_p0() {
    mul_ln1118_519_fu_1787_p0 =  (sc_lv<16>) (sext_ln1118_350_fu_2694521_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_519_fu_1787_p2() {
    mul_ln1118_519_fu_1787_p2 = (!mul_ln1118_519_fu_1787_p0.read().is_01() || !ap_const_lv24_51.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_519_fu_1787_p0.read()) * sc_biguint<24>(ap_const_lv24_51);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_51_fu_2010_p0() {
    mul_ln1118_51_fu_2010_p0 =  (sc_lv<16>) (sext_ln1118_31_fu_2682613_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_51_fu_2010_p2() {
    mul_ln1118_51_fu_2010_p2 = (!mul_ln1118_51_fu_2010_p0.read().is_01() || !ap_const_lv26_3FFFEC3.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_51_fu_2010_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFEC3);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_520_fu_2087_p0() {
    mul_ln1118_520_fu_2087_p0 =  (sc_lv<16>) (sext_ln1118_349_fu_2694505_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_520_fu_2087_p2() {
    mul_ln1118_520_fu_2087_p2 = (!mul_ln1118_520_fu_2087_p0.read().is_01() || !ap_const_lv25_1FFFF46.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_520_fu_2087_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF46);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_521_fu_1789_p0() {
    mul_ln1118_521_fu_1789_p0 =  (sc_lv<16>) (sext_ln1118_349_fu_2694505_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_521_fu_1789_p2() {
    mul_ln1118_521_fu_1789_p2 = (!mul_ln1118_521_fu_1789_p0.read().is_01() || !ap_const_lv25_96.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_521_fu_1789_p0.read()) * sc_biguint<25>(ap_const_lv25_96);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_522_fu_2324_p0() {
    mul_ln1118_522_fu_2324_p0 =  (sc_lv<16>) (sext_ln1118_366_fu_2695102_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_522_fu_2324_p2() {
    mul_ln1118_522_fu_2324_p2 = (!mul_ln1118_522_fu_2324_p0.read().is_01() || !ap_const_lv23_31.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_522_fu_2324_p0.read()) * sc_biguint<23>(ap_const_lv23_31);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_523_fu_1791_p0() {
    mul_ln1118_523_fu_1791_p0 =  (sc_lv<16>) (sext_ln1118_365_fu_2695091_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_523_fu_1791_p2() {
    mul_ln1118_523_fu_1791_p2 = (!mul_ln1118_523_fu_1791_p0.read().is_01() || !ap_const_lv24_FFFF83.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_523_fu_1791_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF83);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_524_fu_2291_p0() {
    mul_ln1118_524_fu_2291_p0 =  (sc_lv<16>) (sext_ln1118_365_fu_2695091_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_524_fu_2291_p2() {
    mul_ln1118_524_fu_2291_p2 = (!mul_ln1118_524_fu_2291_p0.read().is_01() || !ap_const_lv24_65.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_524_fu_2291_p0.read()) * sc_biguint<24>(ap_const_lv24_65);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_525_fu_2357_p0() {
    mul_ln1118_525_fu_2357_p0 =  (sc_lv<16>) (sext_ln1118_365_fu_2695091_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_525_fu_2357_p2() {
    mul_ln1118_525_fu_2357_p2 = (!mul_ln1118_525_fu_2357_p0.read().is_01() || !ap_const_lv24_FFFFA2.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_525_fu_2357_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFA2);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_526_fu_1769_p0() {
    mul_ln1118_526_fu_1769_p0 =  (sc_lv<16>) (sext_ln1118_363_fu_2695081_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_526_fu_1769_p2() {
    mul_ln1118_526_fu_1769_p2 = (!mul_ln1118_526_fu_1769_p0.read().is_01() || !ap_const_lv26_148.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_526_fu_1769_p0.read()) * sc_biguint<26>(ap_const_lv26_148);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_527_fu_2309_p0() {
    mul_ln1118_527_fu_2309_p0 = sext_ln1118_368_fu_2695112_p0.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_527_fu_2309_p2() {
    mul_ln1118_527_fu_2309_p2 = (!mul_ln1118_527_fu_2309_p0.read().is_01() || !ap_const_lv21_B.is_01())? sc_lv<21>(): sc_bigint<16>(mul_ln1118_527_fu_2309_p0.read()) * sc_biguint<21>(ap_const_lv21_B);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_528_fu_1901_p0() {
    mul_ln1118_528_fu_1901_p0 =  (sc_lv<16>) (sext_ln1118_362_fu_2695071_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_528_fu_1901_p2() {
    mul_ln1118_528_fu_1901_p2 = (!mul_ln1118_528_fu_1901_p0.read().is_01() || !ap_const_lv25_1FFFF65.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_528_fu_1901_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF65);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_529_fu_1599_p0() {
    mul_ln1118_529_fu_1599_p0 =  (sc_lv<16>) (sext_ln1118_362_fu_2695071_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_529_fu_1599_p2() {
    mul_ln1118_529_fu_1599_p2 = (!mul_ln1118_529_fu_1599_p0.read().is_01() || !ap_const_lv25_F6.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_529_fu_1599_p0.read()) * sc_biguint<25>(ap_const_lv25_F6);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_52_fu_1967_p0() {
    mul_ln1118_52_fu_1967_p0 =  (sc_lv<16>) (sext_ln1118_34_fu_2682640_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_52_fu_1967_p2() {
    mul_ln1118_52_fu_1967_p2 = (!mul_ln1118_52_fu_1967_p0.read().is_01() || !ap_const_lv24_FFFF8F.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_52_fu_1967_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF8F);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_532_fu_1883_p0() {
    mul_ln1118_532_fu_1883_p0 =  (sc_lv<16>) (sext_ln1118_362_fu_2695071_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_532_fu_1883_p2() {
    mul_ln1118_532_fu_1883_p2 = (!mul_ln1118_532_fu_1883_p0.read().is_01() || !ap_const_lv25_D6.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_532_fu_1883_p0.read()) * sc_biguint<25>(ap_const_lv25_D6);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_533_fu_1513_p0() {
    mul_ln1118_533_fu_1513_p0 =  (sc_lv<16>) (sext_ln1118_365_fu_2695091_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_533_fu_1513_p2() {
    mul_ln1118_533_fu_1513_p2 = (!mul_ln1118_533_fu_1513_p0.read().is_01() || !ap_const_lv24_FFFF8D.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_533_fu_1513_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF8D);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_534_fu_2124_p0() {
    mul_ln1118_534_fu_2124_p0 =  (sc_lv<16>) (sext_ln1118_363_fu_2695081_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_534_fu_2124_p2() {
    mul_ln1118_534_fu_2124_p2 = (!mul_ln1118_534_fu_2124_p0.read().is_01() || !ap_const_lv26_3FFFED6.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_534_fu_2124_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFED6);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_535_fu_1754_p0() {
    mul_ln1118_535_fu_1754_p0 = sext_ln1118_361_fu_2695066_p0.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_535_fu_1754_p2() {
    mul_ln1118_535_fu_1754_p2 = (!mul_ln1118_535_fu_1754_p0.read().is_01() || !ap_const_lv22_1A.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_535_fu_1754_p0.read()) * sc_biguint<22>(ap_const_lv22_1A);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_536_fu_1711_p0() {
    mul_ln1118_536_fu_1711_p0 =  (sc_lv<16>) (sext_ln1118_362_fu_2695071_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_536_fu_1711_p2() {
    mul_ln1118_536_fu_1711_p2 = (!mul_ln1118_536_fu_1711_p0.read().is_01() || !ap_const_lv25_D1.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_536_fu_1711_p0.read()) * sc_biguint<25>(ap_const_lv25_D1);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_537_fu_1341_p0() {
    mul_ln1118_537_fu_1341_p0 =  (sc_lv<16>) (sext_ln1118_362_fu_2695071_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_537_fu_1341_p2() {
    mul_ln1118_537_fu_1341_p2 = (!mul_ln1118_537_fu_1341_p0.read().is_01() || !ap_const_lv25_9E.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_537_fu_1341_p0.read()) * sc_biguint<25>(ap_const_lv25_9E);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_538_fu_1952_p0() {
    mul_ln1118_538_fu_1952_p0 =  (sc_lv<16>) (sext_ln1118_365_fu_2695091_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_538_fu_1952_p2() {
    mul_ln1118_538_fu_1952_p2 = (!mul_ln1118_538_fu_1952_p0.read().is_01() || !ap_const_lv24_FFFFAF.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_538_fu_1952_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFAF);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_539_fu_1582_p0() {
    mul_ln1118_539_fu_1582_p0 =  (sc_lv<16>) (sext_ln1118_365_fu_2695091_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_539_fu_1582_p2() {
    mul_ln1118_539_fu_1582_p2 = (!mul_ln1118_539_fu_1582_p0.read().is_01() || !ap_const_lv24_FFFFAC.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_539_fu_1582_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFAC);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_53_fu_1725_p0() {
    mul_ln1118_53_fu_1725_p0 =  (sc_lv<16>) (sext_ln1118_31_fu_2682613_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_53_fu_1725_p2() {
    mul_ln1118_53_fu_1725_p2 = (!mul_ln1118_53_fu_1725_p0.read().is_01() || !ap_const_lv26_1E2.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_53_fu_1725_p0.read()) * sc_biguint<26>(ap_const_lv26_1E2);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_540_fu_1937_p0() {
    mul_ln1118_540_fu_1937_p0 =  (sc_lv<16>) (sext_ln1118_362_fu_2695071_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_540_fu_1937_p2() {
    mul_ln1118_540_fu_1937_p2 = (!mul_ln1118_540_fu_1937_p0.read().is_01() || !ap_const_lv25_1FFFF29.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_540_fu_1937_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF29);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_541_fu_1575_p0() {
    mul_ln1118_541_fu_1575_p0 =  (sc_lv<16>) (sext_ln1118_365_fu_2695091_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_541_fu_1575_p2() {
    mul_ln1118_541_fu_1575_p2 = (!mul_ln1118_541_fu_1575_p0.read().is_01() || !ap_const_lv24_66.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_541_fu_1575_p0.read()) * sc_biguint<24>(ap_const_lv24_66);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_542_fu_1512_p0() {
    mul_ln1118_542_fu_1512_p0 =  (sc_lv<16>) (sext_ln1118_366_fu_2695102_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_542_fu_1512_p2() {
    mul_ln1118_542_fu_1512_p2 = (!mul_ln1118_542_fu_1512_p0.read().is_01() || !ap_const_lv23_2E.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_542_fu_1512_p0.read()) * sc_biguint<23>(ap_const_lv23_2E);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_543_fu_2239_p0() {
    mul_ln1118_543_fu_2239_p0 =  (sc_lv<16>) (sext_ln1118_384_fu_2695739_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_543_fu_2239_p2() {
    mul_ln1118_543_fu_2239_p2 = (!mul_ln1118_543_fu_2239_p0.read().is_01() || !ap_const_lv24_FFFF9D.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_543_fu_2239_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF9D);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_544_fu_1578_p0() {
    mul_ln1118_544_fu_1578_p0 =  (sc_lv<16>) (sext_ln1118_381_fu_2695721_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_544_fu_1578_p2() {
    mul_ln1118_544_fu_1578_p2 = (!mul_ln1118_544_fu_1578_p0.read().is_01() || !ap_const_lv25_A1.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_544_fu_1578_p0.read()) * sc_biguint<25>(ap_const_lv25_A1);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_545_fu_1579_p0() {
    mul_ln1118_545_fu_1579_p0 =  (sc_lv<16>) (sext_ln1118_382_fu_2695730_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_545_fu_1579_p2() {
    mul_ln1118_545_fu_1579_p2 = (!mul_ln1118_545_fu_1579_p0.read().is_01() || !ap_const_lv22_16.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_545_fu_1579_p0.read()) * sc_biguint<22>(ap_const_lv22_16);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_546_fu_1357_p0() {
    mul_ln1118_546_fu_1357_p0 =  (sc_lv<16>) (sext_ln1118_381_fu_2695721_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_546_fu_1357_p2() {
    mul_ln1118_546_fu_1357_p2 = (!mul_ln1118_546_fu_1357_p0.read().is_01() || !ap_const_lv25_C7.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_546_fu_1357_p0.read()) * sc_biguint<25>(ap_const_lv25_C7);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_547_fu_1581_p0() {
    mul_ln1118_547_fu_1581_p0 =  (sc_lv<16>) (sext_ln1118_380_fu_2695709_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_547_fu_1581_p2() {
    mul_ln1118_547_fu_1581_p2 = (!mul_ln1118_547_fu_1581_p0.read().is_01() || !ap_const_lv26_176.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_547_fu_1581_p0.read()) * sc_biguint<26>(ap_const_lv26_176);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_548_fu_1881_p0() {
    mul_ln1118_548_fu_1881_p0 =  (sc_lv<16>) (sext_ln1118_384_fu_2695739_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_548_fu_1881_p2() {
    mul_ln1118_548_fu_1881_p2 = (!mul_ln1118_548_fu_1881_p0.read().is_01() || !ap_const_lv24_43.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_548_fu_1881_p0.read()) * sc_biguint<24>(ap_const_lv24_43);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_549_fu_1946_p0() {
    mul_ln1118_549_fu_1946_p0 =  (sc_lv<16>) (sext_ln1118_380_fu_2695709_p1.read());
}

}

