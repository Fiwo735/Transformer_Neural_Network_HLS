#include "dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_ap_CS_fsm_state2() {
    ap_CS_fsm_state2 = ap_CS_fsm.read()[1];
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_ap_done() {
    if (((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) || 
         (esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())))) {
        ap_done = ap_const_logic_1;
    } else {
        ap_done = ap_const_logic_0;
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_ap_idle() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()))) {
        ap_idle = ap_const_logic_1;
    } else {
        ap_idle = ap_const_logic_0;
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_ap_ready() {
    if ((esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()))) {
        ap_ready = ap_const_logic_1;
    } else {
        ap_ready = ap_const_logic_0;
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_ap_return_0() {
    ap_return_0 = add_ln703_2892_fu_1146758_p2.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_ap_return_1() {
    ap_return_1 = acc_1_V_fu_1146861_p2.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_ap_return_10() {
    ap_return_10 = acc_10_V_fu_1147497_p2.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_ap_return_11() {
    ap_return_11 = acc_11_V_fu_1147572_p2.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_ap_return_12() {
    ap_return_12 = acc_12_V_fu_1147628_p2.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_ap_return_13() {
    ap_return_13 = acc_13_V_fu_1147724_p2.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_ap_return_14() {
    ap_return_14 = acc_14_V_fu_1147793_p2.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_ap_return_15() {
    ap_return_15 = acc_15_V_fu_1147870_p2.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_ap_return_16() {
    ap_return_16 = acc_16_V_fu_1147941_p2.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_ap_return_17() {
    ap_return_17 = acc_17_V_fu_1148013_p2.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_ap_return_18() {
    ap_return_18 = acc_18_V_fu_1148059_p2.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_ap_return_19() {
    ap_return_19 = acc_19_V_fu_1148134_p2.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_ap_return_2() {
    ap_return_2 = acc_2_V_fu_1146918_p2.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_ap_return_20() {
    ap_return_20 = acc_20_V_fu_1148202_p2.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_ap_return_21() {
    ap_return_21 = acc_21_V_fu_1148269_p2.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_ap_return_22() {
    ap_return_22 = acc_22_V_fu_1148354_p2.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_ap_return_23() {
    ap_return_23 = sext_ln703_621_fu_1148421_p1.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_ap_return_24() {
    ap_return_24 = acc_24_V_fu_1148469_p2.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_ap_return_25() {
    ap_return_25 = acc_25_V_fu_1148529_p2.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_ap_return_26() {
    ap_return_26 = acc_26_V_fu_1148578_p2.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_ap_return_27() {
    ap_return_27 = acc_27_V_fu_1148659_p2.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_ap_return_28() {
    ap_return_28 = acc_28_V_fu_1148740_p2.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_ap_return_29() {
    ap_return_29 = acc_29_V_fu_1148830_p2.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_ap_return_3() {
    ap_return_3 = acc_3_V_fu_1146995_p2.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_ap_return_30() {
    ap_return_30 = acc_30_V_fu_1148903_p2.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_ap_return_31() {
    ap_return_31 = acc_31_V_fu_1148980_p2.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_ap_return_4() {
    ap_return_4 = acc_4_V_fu_1147071_p2.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_ap_return_5() {
    ap_return_5 = acc_5_V_fu_1147161_p2.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_ap_return_6() {
    ap_return_6 = acc_6_V_fu_1147238_p2.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_ap_return_7() {
    ap_return_7 = acc_7_V_fu_1147302_p2.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_ap_return_8() {
    ap_return_8 = acc_8_V_fu_1147360_p2.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_ap_return_9() {
    ap_return_9 = acc_9_V_fu_1147416_p2.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1126572_p4() {
    grp_fu_1126572_p4 = grp_fu_1405_p2.read().range(24, 10);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1126582_p4() {
    grp_fu_1126582_p4 = grp_fu_1541_p2.read().range(24, 10);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1126592_p4() {
    grp_fu_1126592_p4 = grp_fu_1839_p2.read().range(25, 10);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1126602_p4() {
    grp_fu_1126602_p4 = grp_fu_1365_p2.read().range(25, 10);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1126612_p4() {
    grp_fu_1126612_p4 = grp_fu_1766_p2.read().range(25, 10);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1126622_p4() {
    grp_fu_1126622_p4 = grp_fu_1389_p2.read().range(21, 10);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1126632_p4() {
    grp_fu_1126632_p4 = grp_fu_1397_p2.read().range(24, 10);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1126642_p4() {
    grp_fu_1126642_p4 = grp_fu_1592_p2.read().range(24, 10);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1126652_p4() {
    grp_fu_1126652_p4 = grp_fu_1458_p2.read().range(25, 10);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1126662_p4() {
    grp_fu_1126662_p4 = grp_fu_1624_p2.read().range(24, 10);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1126672_p4() {
    grp_fu_1126672_p4 = grp_fu_1842_p2.read().range(23, 10);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1126682_p4() {
    grp_fu_1126682_p4 = grp_fu_1709_p2.read().range(24, 10);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1126692_p4() {
    grp_fu_1126692_p4 = grp_fu_1710_p2.read().range(24, 10);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1126702_p4() {
    grp_fu_1126702_p4 = grp_fu_1804_p2.read().range(24, 10);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1126712_p4() {
    grp_fu_1126712_p4 = grp_fu_1635_p2.read().range(25, 10);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1126722_p4() {
    grp_fu_1126722_p4 = grp_fu_1806_p2.read().range(24, 10);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1126732_p4() {
    grp_fu_1126732_p4 = grp_fu_1812_p2.read().range(22, 10);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1126742_p4() {
    grp_fu_1126742_p4 = grp_fu_1463_p2.read().range(24, 10);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1126752_p4() {
    grp_fu_1126752_p4 = grp_fu_1351_p2.read().range(23, 10);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1126762_p4() {
    grp_fu_1126762_p4 = grp_fu_1719_p2.read().range(25, 10);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1126772_p4() {
    grp_fu_1126772_p4 = grp_fu_1506_p2.read().range(25, 10);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1126782_p4() {
    grp_fu_1126782_p4 = grp_fu_1838_p2.read().range(25, 10);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1126792_p4() {
    grp_fu_1126792_p4 = grp_fu_1706_p2.read().range(25, 10);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1126802_p4() {
    grp_fu_1126802_p4 = grp_fu_1655_p2.read().range(23, 10);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1126812_p4() {
    grp_fu_1126812_p4 = grp_fu_1559_p2.read().range(24, 10);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1126822_p4() {
    grp_fu_1126822_p4 = grp_fu_1831_p2.read().range(22, 10);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1126832_p4() {
    grp_fu_1126832_p4 = grp_fu_1773_p2.read().range(24, 10);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1126842_p4() {
    grp_fu_1126842_p4 = grp_fu_1774_p2.read().range(25, 10);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1126852_p4() {
    grp_fu_1126852_p4 = grp_fu_1690_p2.read().range(25, 10);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1126862_p4() {
    grp_fu_1126862_p4 = grp_fu_1722_p2.read().range(23, 10);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1126872_p4() {
    grp_fu_1126872_p4 = grp_fu_1488_p2.read().range(24, 10);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1126882_p4() {
    grp_fu_1126882_p4 = grp_fu_1589_p2.read().range(23, 10);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1126892_p4() {
    grp_fu_1126892_p4 = grp_fu_1527_p2.read().range(23, 10);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1126902_p4() {
    grp_fu_1126902_p4 = grp_fu_1496_p2.read().range(24, 10);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1126912_p4() {
    grp_fu_1126912_p4 = grp_fu_1675_p2.read().range(24, 10);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1126922_p4() {
    grp_fu_1126922_p4 = grp_fu_1683_p2.read().range(24, 10);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1126932_p4() {
    grp_fu_1126932_p4 = grp_fu_1625_p2.read().range(24, 10);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1126942_p4() {
    grp_fu_1126942_p4 = grp_fu_1671_p2.read().range(24, 10);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1126952_p4() {
    grp_fu_1126952_p4 = grp_fu_1519_p2.read().range(25, 10);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1126962_p4() {
    grp_fu_1126962_p4 = grp_fu_1521_p2.read().range(24, 10);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1126972_p4() {
    grp_fu_1126972_p4 = grp_fu_1615_p2.read().range(25, 10);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1126982_p4() {
    grp_fu_1126982_p4 = grp_fu_1430_p2.read().range(25, 10);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1126992_p4() {
    grp_fu_1126992_p4 = grp_fu_1404_p2.read().range(25, 10);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1127002_p4() {
    grp_fu_1127002_p4 = grp_fu_1756_p2.read().range(24, 10);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1127012_p4() {
    grp_fu_1127012_p4 = grp_fu_1746_p2.read().range(22, 10);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1127022_p4() {
    grp_fu_1127022_p4 = grp_fu_1465_p2.read().range(25, 10);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1127032_p4() {
    grp_fu_1127032_p4 = grp_fu_1648_p2.read().range(25, 10);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1127042_p4() {
    grp_fu_1127042_p4 = grp_fu_1687_p2.read().range(25, 10);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1127052_p4() {
    grp_fu_1127052_p4 = grp_fu_1407_p2.read().range(23, 10);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1127062_p4() {
    grp_fu_1127062_p4 = grp_fu_1697_p2.read().range(25, 10);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1127072_p4() {
    grp_fu_1127072_p4 = grp_fu_1642_p2.read().range(23, 10);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1127082_p4() {
    grp_fu_1127082_p4 = grp_fu_1377_p2.read().range(25, 10);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1127092_p4() {
    grp_fu_1127092_p4 = grp_fu_1574_p2.read().range(22, 10);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1127102_p4() {
    grp_fu_1127102_p4 = grp_fu_1794_p2.read().range(20, 10);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1127112_p4() {
    grp_fu_1127112_p4 = grp_fu_1585_p2.read().range(23, 10);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1127122_p4() {
    grp_fu_1127122_p4 = grp_fu_1590_p2.read().range(24, 10);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1127132_p4() {
    grp_fu_1127132_p4 = grp_fu_1420_p2.read().range(23, 10);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1127142_p4() {
    grp_fu_1127142_p4 = grp_fu_1364_p2.read().range(24, 10);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1127152_p4() {
    grp_fu_1127152_p4 = grp_fu_1564_p2.read().range(24, 10);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1127162_p4() {
    grp_fu_1127162_p4 = grp_fu_1837_p2.read().range(23, 10);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1127172_p4() {
    grp_fu_1127172_p4 = grp_fu_1816_p2.read().range(25, 10);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1127182_p4() {
    grp_fu_1127182_p4 = grp_fu_1630_p2.read().range(24, 10);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1127192_p4() {
    grp_fu_1127192_p4 = grp_fu_1532_p2.read().range(24, 10);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1127202_p4() {
    grp_fu_1127202_p4 = grp_fu_1705_p2.read().range(24, 10);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1127212_p4() {
    grp_fu_1127212_p4 = grp_fu_1649_p2.read().range(24, 10);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1127222_p4() {
    grp_fu_1127222_p4 = grp_fu_1652_p2.read().range(23, 10);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1127232_p4() {
    grp_fu_1127232_p4 = grp_fu_1552_p2.read().range(23, 10);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1127242_p4() {
    grp_fu_1127242_p4 = grp_fu_1623_p2.read().range(24, 10);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1127252_p4() {
    grp_fu_1127252_p4 = grp_fu_1815_p2.read().range(24, 10);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1127262_p4() {
    grp_fu_1127262_p4 = grp_fu_1786_p2.read().range(25, 10);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1127272_p4() {
    grp_fu_1127272_p4 = grp_fu_1714_p2.read().range(23, 10);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1127282_p4() {
    grp_fu_1127282_p4 = grp_fu_1744_p2.read().range(24, 10);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1127292_p4() {
    grp_fu_1127292_p4 = grp_fu_1583_p2.read().range(23, 10);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1127302_p4() {
    grp_fu_1127302_p4 = grp_fu_1341_p2.read().range(24, 10);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1127312_p4() {
    grp_fu_1127312_p4 = grp_fu_1803_p2.read().range(23, 10);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1127322_p4() {
    grp_fu_1127322_p4 = grp_fu_1485_p2.read().range(23, 10);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1127332_p4() {
    grp_fu_1127332_p4 = grp_fu_1788_p2.read().range(24, 10);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1127342_p4() {
    grp_fu_1127342_p4 = grp_fu_1735_p2.read().range(25, 10);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1127352_p4() {
    grp_fu_1127352_p4 = grp_fu_1444_p2.read().range(20, 10);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1127362_p4() {
    grp_fu_1127362_p4 = grp_fu_1797_p2.read().range(23, 10);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1127372_p4() {
    grp_fu_1127372_p4 = grp_fu_1729_p2.read().range(24, 10);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1127382_p4() {
    grp_fu_1127382_p4 = grp_fu_1392_p2.read().range(23, 10);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1127392_p4() {
    grp_fu_1127392_p4 = grp_fu_1792_p2.read().range(24, 10);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1127402_p4() {
    grp_fu_1127402_p4 = grp_fu_1520_p2.read().range(25, 10);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1127412_p4() {
    grp_fu_1127412_p4 = grp_fu_1656_p2.read().range(24, 10);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1127422_p4() {
    grp_fu_1127422_p4 = grp_fu_1603_p2.read().range(25, 10);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1127432_p4() {
    grp_fu_1127432_p4 = grp_fu_1659_p2.read().range(24, 10);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1127442_p4() {
    grp_fu_1127442_p4 = grp_fu_1421_p2.read().range(24, 10);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1127452_p4() {
    grp_fu_1127452_p4 = grp_fu_1612_p2.read().range(21, 10);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1127462_p4() {
    grp_fu_1127462_p4 = grp_fu_1793_p2.read().range(23, 10);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1127472_p4() {
    grp_fu_1127472_p4 = grp_fu_1340_p2.read().range(23, 10);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1127482_p4() {
    grp_fu_1127482_p4 = grp_fu_1401_p2.read().range(23, 10);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1127492_p4() {
    grp_fu_1127492_p4 = grp_fu_1547_p2.read().range(23, 10);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1340_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_1340_p0 =  (sc_lv<16>) (sext_ln1118_449_reg_1149555.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_1340_p0 =  (sc_lv<16>) (sext_ln1118_365_fu_1139638_p1.read());
    } else {
        grp_fu_1340_p0 = "XXXXXXXXXXXXXXXX";
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1340_p2() {
    grp_fu_1340_p2 = (!grp_fu_1340_p0.read().is_01() || !ap_const_lv24_FFFF8D.is_01())? sc_lv<24>(): sc_bigint<16>(grp_fu_1340_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF8D);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1341_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_1341_p0 =  (sc_lv<16>) (sext_ln1118_401_fu_1144906_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_1341_p0 =  (sc_lv<16>) (sext_ln1118_303_fu_1137871_p1.read());
    } else {
        grp_fu_1341_p0 = "XXXXXXXXXXXXXXXX";
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1341_p2() {
    grp_fu_1341_p2 = (!grp_fu_1341_p0.read().is_01() || !ap_const_lv25_1FFFF7B.is_01())? sc_lv<25>(): sc_bigint<16>(grp_fu_1341_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF7B);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1348_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_1348_p0 =  (sc_lv<16>) (sext_ln1118_450_fu_1146313_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_1348_p0 =  (sc_lv<16>) (sext_ln1118_220_fu_1134845_p1.read());
    } else {
        grp_fu_1348_p0 = "XXXXXXXXXXXXXXXX";
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1348_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_1348_p1 =  (sc_lv<10>) (ap_const_lv26_3FFFEB2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_1348_p1 =  (sc_lv<10>) (ap_const_lv25_F4);
    } else {
        grp_fu_1348_p1 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1348_p2() {
    grp_fu_1348_p2 = (!grp_fu_1348_p0.read().is_01() || !grp_fu_1348_p1.read().is_01())? sc_lv<26>(): sc_bigint<16>(grp_fu_1348_p0.read()) * sc_bigint<10>(grp_fu_1348_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1350_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_1350_p0 =  (sc_lv<16>) (sext_ln1118_412_fu_1145263_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_1350_p0 =  (sc_lv<16>) (sext_ln708_2_fu_1131572_p1.read());
    } else {
        grp_fu_1350_p0 = "XXXXXXXXXXXXXXXX";
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1350_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_1350_p1 =  (sc_lv<11>) (ap_const_lv26_18D);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_1350_p1 =  (sc_lv<11>) (ap_const_lv25_1FFFF1B);
    } else {
        grp_fu_1350_p1 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1350_p2() {
    grp_fu_1350_p2 = (!grp_fu_1350_p0.read().is_01() || !grp_fu_1350_p1.read().is_01())? sc_lv<26>(): sc_bigint<16>(grp_fu_1350_p0.read()) * sc_bigint<11>(grp_fu_1350_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1351_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_1351_p0 =  (sc_lv<16>) (sext_ln1118_384_reg_1149485.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_1351_p0 =  (sc_lv<16>) (sext_ln1118_98_fu_1130547_p1.read());
    } else {
        grp_fu_1351_p0 = "XXXXXXXXXXXXXXXX";
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1351_p2() {
    grp_fu_1351_p2 = (!grp_fu_1351_p0.read().is_01() || !ap_const_lv24_43.is_01())? sc_lv<24>(): sc_bigint<16>(grp_fu_1351_p0.read()) * sc_biguint<24>(ap_const_lv24_43);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1361_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_1361_p0 =  (sc_lv<16>) (sext_ln1118_436_fu_1145956_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_1361_p0 =  (sc_lv<16>) (sext_ln1118_236_fu_1135728_p1.read());
    } else {
        grp_fu_1361_p0 = "XXXXXXXXXXXXXXXX";
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1361_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_1361_p1 =  (sc_lv<10>) (ap_const_lv25_1FFFF6E);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_1361_p1 =  (sc_lv<10>) (ap_const_lv26_3FFFE96);
    } else {
        grp_fu_1361_p1 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1361_p2() {
    grp_fu_1361_p2 = (!grp_fu_1361_p0.read().is_01() || !grp_fu_1361_p1.read().is_01())? sc_lv<26>(): sc_bigint<16>(grp_fu_1361_p0.read()) * sc_bigint<10>(grp_fu_1361_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1362_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_1362_p0 =  (sc_lv<16>) (sext_ln1118_437_fu_1145963_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_1362_p0 =  (sc_lv<16>) (sext_ln1118_132_fu_1132048_p1.read());
    } else {
        grp_fu_1362_p0 = "XXXXXXXXXXXXXXXX";
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1362_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_1362_p1 =  (sc_lv<10>) (ap_const_lv26_3FFFE54);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_1362_p1 =  (sc_lv<10>) (ap_const_lv25_1FFFF2B);
    } else {
        grp_fu_1362_p1 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1362_p2() {
    grp_fu_1362_p2 = (!grp_fu_1362_p0.read().is_01() || !grp_fu_1362_p1.read().is_01())? sc_lv<26>(): sc_bigint<16>(grp_fu_1362_p0.read()) * sc_bigint<10>(grp_fu_1362_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1364_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_1364_p0 =  (sc_lv<16>) (sext_ln1118_349_reg_1149400.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_1364_p0 =  (sc_lv<16>) (sext_ln1118_240_fu_1135759_p1.read());
    } else {
        grp_fu_1364_p0 = "XXXXXXXXXXXXXXXX";
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1364_p2() {
    grp_fu_1364_p2 = (!grp_fu_1364_p0.read().is_01() || !ap_const_lv25_96.is_01())? sc_lv<25>(): sc_bigint<16>(grp_fu_1364_p0.read()) * sc_biguint<25>(ap_const_lv25_96);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1365_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_1365_p0 =  (sc_lv<16>) (sext_ln1118_437_fu_1145963_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_1365_p0 =  (sc_lv<16>) (sext_ln1118_20_fu_1127949_p1.read());
    } else {
        grp_fu_1365_p0 = "XXXXXXXXXXXXXXXX";
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1365_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_1365_p1 =  (sc_lv<11>) (ap_const_lv26_125);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_1365_p1 =  (sc_lv<11>) (ap_const_lv26_3FFFEDE);
    } else {
        grp_fu_1365_p1 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1365_p2() {
    grp_fu_1365_p2 = (!grp_fu_1365_p0.read().is_01() || !grp_fu_1365_p1.read().is_01())? sc_lv<26>(): sc_bigint<16>(grp_fu_1365_p0.read()) * sc_bigint<11>(grp_fu_1365_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1377_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_1377_p0 =  (sc_lv<16>) (sext_ln1118_380_reg_1149468.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_1377_p0 =  (sc_lv<16>) (sext_ln1118_226_fu_1135263_p1.read());
    } else {
        grp_fu_1377_p0 = "XXXXXXXXXXXXXXXX";
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1377_p2() {
    grp_fu_1377_p2 = (!grp_fu_1377_p0.read().is_01() || !ap_const_lv26_172.is_01())? sc_lv<26>(): sc_bigint<16>(grp_fu_1377_p0.read()) * sc_biguint<26>(ap_const_lv26_172);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1387_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_1387_p0 =  (sc_lv<16>) (sext_ln1118_398_fu_1144898_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_1387_p0 =  (sc_lv<16>) (sext_ln1118_202_fu_1134363_p1.read());
    } else {
        grp_fu_1387_p0 = "XXXXXXXXXXXXXXXX";
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1387_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_1387_p1 =  (sc_lv<10>) (ap_const_lv26_3FFFEEE);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_1387_p1 =  (sc_lv<10>) (ap_const_lv24_FFFFB1);
    } else {
        grp_fu_1387_p1 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1387_p2() {
    grp_fu_1387_p2 = (!grp_fu_1387_p0.read().is_01() || !grp_fu_1387_p1.read().is_01())? sc_lv<26>(): sc_bigint<16>(grp_fu_1387_p0.read()) * sc_bigint<10>(grp_fu_1387_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1389_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_1389_p0 =  (sc_lv<16>) (sext_ln1118_414_fu_1145281_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_1389_p0 =  (sc_lv<16>) (sext_ln1118_52_fu_1129052_p1.read());
    } else {
        grp_fu_1389_p0 = "XXXXXXXXXXXXXXXX";
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1389_p2() {
    grp_fu_1389_p2 = (!grp_fu_1389_p0.read().is_01() || !ap_const_lv22_19.is_01())? sc_lv<22>(): sc_bigint<16>(grp_fu_1389_p0.read()) * sc_biguint<22>(ap_const_lv22_19);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1392_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_1392_p0 =  (sc_lv<16>) (sext_ln1118_400_reg_1149502.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_1392_p0 =  (sc_lv<16>) (sext_ln1118_322_fu_1138496_p1.read());
    } else {
        grp_fu_1392_p0 = "XXXXXXXXXXXXXXXX";
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1392_p2() {
    grp_fu_1392_p2 = (!grp_fu_1392_p0.read().is_01() || !ap_const_lv24_67.is_01())? sc_lv<24>(): sc_bigint<16>(grp_fu_1392_p0.read()) * sc_biguint<24>(ap_const_lv24_67);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1397_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_1397_p0 =  (sc_lv<16>) (sext_ln1118_425_fu_1145647_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_1397_p0 =  (sc_lv<16>) (sext_ln1118_48_fu_1129021_p1.read());
    } else {
        grp_fu_1397_p0 = "XXXXXXXXXXXXXXXX";
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1397_p2() {
    grp_fu_1397_p2 = (!grp_fu_1397_p0.read().is_01() || !ap_const_lv25_1FFFF18.is_01())? sc_lv<25>(): sc_bigint<16>(grp_fu_1397_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF18);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1401_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_1401_p0 =  (sc_lv<16>) (sext_ln1118_423_fu_1145629_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_1401_p0 =  (sc_lv<16>) (sext_ln1118_365_fu_1139638_p1.read());
    } else {
        grp_fu_1401_p0 = "XXXXXXXXXXXXXXXX";
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1401_p2() {
    grp_fu_1401_p2 = (!grp_fu_1401_p0.read().is_01() || !ap_const_lv24_FFFFAC.is_01())? sc_lv<24>(): sc_bigint<16>(grp_fu_1401_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFAC);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1404_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_1404_p0 =  (sc_lv<16>) (sext_ln1118_424_fu_1145637_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_1404_p0 =  (sc_lv<16>) (sext_ln1118_200_fu_1134341_p1.read());
    } else {
        grp_fu_1404_p0 = "XXXXXXXXXXXXXXXX";
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1404_p2() {
    grp_fu_1404_p2 = (!grp_fu_1404_p0.read().is_01() || !ap_const_lv26_126.is_01())? sc_lv<26>(): sc_bigint<16>(grp_fu_1404_p0.read()) * sc_biguint<26>(ap_const_lv26_126);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1405_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_1405_p0 =  (sc_lv<16>) (sext_ln1118_401_fu_1144906_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_1405_p0 =  (sc_lv<16>) (sext_ln1118_5_fu_1127514_p1.read());
    } else {
        grp_fu_1405_p0 = "XXXXXXXXXXXXXXXX";
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1405_p2() {
    grp_fu_1405_p2 = (!grp_fu_1405_p0.read().is_01() || !ap_const_lv25_BD.is_01())? sc_lv<25>(): sc_bigint<16>(grp_fu_1405_p0.read()) * sc_biguint<25>(ap_const_lv25_BD);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1407_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_1407_p0 =  (sc_lv<16>) (sext_ln1118_438_fu_1145975_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_1407_p0 =  (sc_lv<16>) (sext_ln1118_225_fu_1135252_p1.read());
    } else {
        grp_fu_1407_p0 = "XXXXXXXXXXXXXXXX";
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1407_p2() {
    grp_fu_1407_p2 = (!grp_fu_1407_p0.read().is_01() || !ap_const_lv24_FFFFBB.is_01())? sc_lv<24>(): sc_bigint<16>(grp_fu_1407_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFBB);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1420_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_1420_p0 =  (sc_lv<16>) (sext_ln1118_400_reg_1149502.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_1420_p0 =  (sc_lv<16>) (sext_ln1118_237_fu_1135738_p1.read());
    } else {
        grp_fu_1420_p0 = "XXXXXXXXXXXXXXXX";
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1420_p2() {
    grp_fu_1420_p2 = (!grp_fu_1420_p0.read().is_01() || !ap_const_lv24_7B.is_01())? sc_lv<24>(): sc_bigint<16>(grp_fu_1420_p0.read()) * sc_biguint<24>(ap_const_lv24_7B);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1421_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_1421_p0 =  (sc_lv<16>) (sext_ln1118_452_fu_1146330_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_1421_p0 =  (sc_lv<16>) (sext_ln1118_349_fu_1139388_p1.read());
    } else {
        grp_fu_1421_p0 = "XXXXXXXXXXXXXXXX";
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1421_p2() {
    grp_fu_1421_p2 = (!grp_fu_1421_p0.read().is_01() || !ap_const_lv25_1FFFF1A.is_01())? sc_lv<25>(): sc_bigint<16>(grp_fu_1421_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF1A);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1430_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_1430_p0 =  (sc_lv<16>) (sext_ln1118_424_fu_1145637_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_1430_p0 =  (sc_lv<16>) (sext_ln1118_200_fu_1134341_p1.read());
    } else {
        grp_fu_1430_p0 = "XXXXXXXXXXXXXXXX";
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1430_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_1430_p1 =  (sc_lv<11>) (ap_const_lv26_3FFFEF3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_1430_p1 =  (sc_lv<11>) (ap_const_lv26_151);
    } else {
        grp_fu_1430_p1 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1430_p2() {
    grp_fu_1430_p2 = (!grp_fu_1430_p0.read().is_01() || !grp_fu_1430_p1.read().is_01())? sc_lv<26>(): sc_bigint<16>(grp_fu_1430_p0.read()) * sc_bigint<11>(grp_fu_1430_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1431_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_1431_p0 =  (sc_lv<16>) (sext_ln1118_437_fu_1145963_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_1431_p0 =  (sc_lv<16>) (sext_ln1118_113_fu_1131060_p1.read());
    } else {
        grp_fu_1431_p0 = "XXXXXXXXXXXXXXXX";
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1431_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_1431_p1 =  (sc_lv<11>) (ap_const_lv26_3FFFD5E);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_1431_p1 =  (sc_lv<11>) (ap_const_lv25_1FFFF7D);
    } else {
        grp_fu_1431_p1 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1431_p2() {
    grp_fu_1431_p2 = (!grp_fu_1431_p0.read().is_01() || !grp_fu_1431_p1.read().is_01())? sc_lv<26>(): sc_bigint<16>(grp_fu_1431_p0.read()) * sc_bigint<11>(grp_fu_1431_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1432_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_1432_p0 =  (sc_lv<16>) (sext_ln1118_400_reg_1149502.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_1432_p0 =  (sc_lv<16>) (sext_ln1118_381_fu_1139769_p1.read());
    } else {
        grp_fu_1432_p0 = "XXXXXXXXXXXXXXXX";
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1432_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_1432_p1 =  (sc_lv<9>) (ap_const_lv24_FFFF93);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_1432_p1 =  (sc_lv<9>) (ap_const_lv25_1FFFF0E);
    } else {
        grp_fu_1432_p1 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1432_p2() {
    grp_fu_1432_p2 = (!grp_fu_1432_p0.read().is_01() || !grp_fu_1432_p1.read().is_01())? sc_lv<25>(): sc_bigint<16>(grp_fu_1432_p0.read()) * sc_bigint<9>(grp_fu_1432_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1438_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_1438_p0 =  (sc_lv<16>) (sext_ln1118_413_fu_1145271_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_1438_p0 =  (sc_lv<16>) (sext_ln1118_49_fu_1129030_p1.read());
    } else {
        grp_fu_1438_p0 = "XXXXXXXXXXXXXXXX";
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1438_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_1438_p1 =  (sc_lv<10>) (ap_const_lv25_1FFFF32);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_1438_p1 =  (sc_lv<10>) (ap_const_lv26_3FFFE63);
    } else {
        grp_fu_1438_p1 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1438_p2() {
    grp_fu_1438_p2 = (!grp_fu_1438_p0.read().is_01() || !grp_fu_1438_p1.read().is_01())? sc_lv<26>(): sc_bigint<16>(grp_fu_1438_p0.read()) * sc_bigint<10>(grp_fu_1438_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1444_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_1444_p0 =  (sc_lv<16>) (sext_ln1118_422_fu_1145625_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_1444_p0 =  (sc_lv<16>) (sext_ln1118_321_fu_1138490_p1.read());
    } else {
        grp_fu_1444_p0 = "XXXXXXXXXXXXXXXX";
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1444_p2() {
    grp_fu_1444_p2 = (!grp_fu_1444_p0.read().is_01() || !ap_const_lv21_1FFFF5.is_01())? sc_lv<21>(): sc_bigint<16>(grp_fu_1444_p0.read()) * sc_bigint<21>(ap_const_lv21_1FFFF5);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1445_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_1445_p0 =  (sc_lv<16>) (sext_ln1118_351_fu_1144002_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_1445_p0 =  (sc_lv<16>) (sext_ln1118_237_fu_1135738_p1.read());
    } else {
        grp_fu_1445_p0 = "XXXXXXXXXXXXXXXX";
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1445_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_1445_p1 =  (sc_lv<10>) (ap_const_lv26_3FFFEDF);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_1445_p1 =  (sc_lv<10>) (ap_const_lv24_FFFFAA);
    } else {
        grp_fu_1445_p1 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1445_p2() {
    grp_fu_1445_p2 = (!grp_fu_1445_p0.read().is_01() || !grp_fu_1445_p1.read().is_01())? sc_lv<26>(): sc_bigint<16>(grp_fu_1445_p0.read()) * sc_bigint<10>(grp_fu_1445_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1448_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_1448_p0 =  (sc_lv<16>) (sext_ln1118_437_fu_1145963_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_1448_p0 =  (sc_lv<16>) (sext_ln1118_33_fu_1128461_p1.read());
    } else {
        grp_fu_1448_p0 = "XXXXXXXXXXXXXXXX";
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1448_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_1448_p1 =  (sc_lv<11>) (ap_const_lv26_3FFFD16);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_1448_p1 =  (sc_lv<11>) (ap_const_lv23_2B);
    } else {
        grp_fu_1448_p1 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1448_p2() {
    grp_fu_1448_p2 = (!grp_fu_1448_p0.read().is_01() || !grp_fu_1448_p1.read().is_01())? sc_lv<26>(): sc_bigint<16>(grp_fu_1448_p0.read()) * sc_bigint<11>(grp_fu_1448_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1458_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_1458_p0 =  (sc_lv<16>) (sext_ln1118_450_fu_1146313_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_1458_p0 =  (sc_lv<16>) (sext_ln1118_65_fu_1129547_p1.read());
    } else {
        grp_fu_1458_p0 = "XXXXXXXXXXXXXXXX";
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1458_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_1458_p1 =  (sc_lv<10>) (ap_const_lv26_13A);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_1458_p1 =  (sc_lv<10>) (ap_const_lv26_14C);
    } else {
        grp_fu_1458_p1 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1458_p2() {
    grp_fu_1458_p2 = (!grp_fu_1458_p0.read().is_01() || !grp_fu_1458_p1.read().is_01())? sc_lv<26>(): sc_bigint<16>(grp_fu_1458_p0.read()) * sc_biguint<10>(grp_fu_1458_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1463_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_1463_p0 =  (sc_lv<16>) (sext_ln1118_349_reg_1149400.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_1463_p0 =  (sc_lv<16>) (sext_ln1118_95_fu_1130523_p1.read());
    } else {
        grp_fu_1463_p0 = "XXXXXXXXXXXXXXXX";
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1463_p2() {
    grp_fu_1463_p2 = (!grp_fu_1463_p0.read().is_01() || !ap_const_lv25_1FFFF76.is_01())? sc_lv<25>(): sc_bigint<16>(grp_fu_1463_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF76);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1465_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_1465_p0 =  (sc_lv<16>) (sext_ln1118_412_fu_1145263_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_1465_p0 =  (sc_lv<16>) (sext_ln1118_219_fu_1134829_p1.read());
    } else {
        grp_fu_1465_p0 = "XXXXXXXXXXXXXXXX";
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1465_p2() {
    grp_fu_1465_p2 = (!grp_fu_1465_p0.read().is_01() || !ap_const_lv26_3FFFEC6.is_01())? sc_lv<26>(): sc_bigint<16>(grp_fu_1465_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFEC6);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1474_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_1474_p0 =  (sc_lv<16>) (sext_ln1118_398_fu_1144898_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_1474_p0 =  (sc_lv<16>) (sext_ln1118_225_fu_1135252_p1.read());
    } else {
        grp_fu_1474_p0 = "XXXXXXXXXXXXXXXX";
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1474_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_1474_p1 =  (sc_lv<11>) (ap_const_lv26_106);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_1474_p1 =  (sc_lv<11>) (ap_const_lv24_FFFF83);
    } else {
        grp_fu_1474_p1 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1474_p2() {
    grp_fu_1474_p2 = (!grp_fu_1474_p0.read().is_01() || !grp_fu_1474_p1.read().is_01())? sc_lv<26>(): sc_bigint<16>(grp_fu_1474_p0.read()) * sc_bigint<11>(grp_fu_1474_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1475_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_1475_p0 =  (sc_lv<16>) (sext_ln1118_398_fu_1144898_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_1475_p0 =  (sc_lv<16>) (sext_ln1118_18_fu_1127932_p1.read());
    } else {
        grp_fu_1475_p0 = "XXXXXXXXXXXXXXXX";
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1475_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_1475_p1 =  (sc_lv<10>) (ap_const_lv26_3FFFEDA);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_1475_p1 =  (sc_lv<10>) (ap_const_lv25_1FFFF56);
    } else {
        grp_fu_1475_p1 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1475_p2() {
    grp_fu_1475_p2 = (!grp_fu_1475_p0.read().is_01() || !grp_fu_1475_p1.read().is_01())? sc_lv<26>(): sc_bigint<16>(grp_fu_1475_p0.read()) * sc_bigint<10>(grp_fu_1475_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1484_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_1484_p0 =  (sc_lv<16>) (sext_ln1118_424_fu_1145637_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_1484_p0 =  (sc_lv<16>) (sext_ln1118_304_fu_1137883_p1.read());
    } else {
        grp_fu_1484_p0 = "XXXXXXXXXXXXXXXX";
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1484_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_1484_p1 =  (sc_lv<10>) (ap_const_lv26_127);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_1484_p1 =  (sc_lv<10>) (ap_const_lv24_49);
    } else {
        grp_fu_1484_p1 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1484_p2() {
    grp_fu_1484_p2 = (!grp_fu_1484_p0.read().is_01() || !grp_fu_1484_p1.read().is_01())? sc_lv<26>(): sc_bigint<16>(grp_fu_1484_p0.read()) * sc_biguint<10>(grp_fu_1484_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1485_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_1485_p0 =  (sc_lv<16>) (sext_ln1118_449_reg_1149555.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_1485_p0 =  (sc_lv<16>) (sext_ln1118_304_fu_1137883_p1.read());
    } else {
        grp_fu_1485_p0 = "XXXXXXXXXXXXXXXX";
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1485_p2() {
    grp_fu_1485_p2 = (!grp_fu_1485_p0.read().is_01() || !ap_const_lv24_FFFFB9.is_01())? sc_lv<24>(): sc_bigint<16>(grp_fu_1485_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFB9);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1488_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_1488_p0 =  (sc_lv<16>) (sext_ln1118_413_fu_1145271_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_1488_p0 =  (sc_lv<16>) (sext_ln1118_152_fu_1132650_p1.read());
    } else {
        grp_fu_1488_p0 = "XXXXXXXXXXXXXXXX";
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1488_p2() {
    grp_fu_1488_p2 = (!grp_fu_1488_p0.read().is_01() || !ap_const_lv25_92.is_01())? sc_lv<25>(): sc_bigint<16>(grp_fu_1488_p0.read()) * sc_biguint<25>(ap_const_lv25_92);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1491_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_1491_p0 =  (sc_lv<16>) (sext_ln1118_349_reg_1149400.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_1491_p0 =  (sc_lv<16>) (sext_ln1118_334_fu_1138964_p1.read());
    } else {
        grp_fu_1491_p0 = "XXXXXXXXXXXXXXXX";
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1491_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_1491_p1 =  (sc_lv<10>) (ap_const_lv25_DE);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_1491_p1 =  (sc_lv<10>) (ap_const_lv22_3FFFEB);
    } else {
        grp_fu_1491_p1 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1491_p2() {
    grp_fu_1491_p2 = (!grp_fu_1491_p0.read().is_01() || !grp_fu_1491_p1.read().is_01())? sc_lv<25>(): sc_bigint<16>(grp_fu_1491_p0.read()) * sc_bigint<10>(grp_fu_1491_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1496_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_1496_p0 =  (sc_lv<16>) (sext_ln1118_349_reg_1149400.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_1496_p0 =  (sc_lv<16>) (sext_ln1118_167_fu_1133203_p1.read());
    } else {
        grp_fu_1496_p0 = "XXXXXXXXXXXXXXXX";
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1496_p2() {
    grp_fu_1496_p2 = (!grp_fu_1496_p0.read().is_01() || !ap_const_lv25_CF.is_01())? sc_lv<25>(): sc_bigint<16>(grp_fu_1496_p0.read()) * sc_biguint<25>(ap_const_lv25_CF);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1497_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_1497_p0 =  (sc_lv<16>) (sext_ln1118_437_fu_1145963_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_1497_p0 =  (sc_lv<16>) (sext_ln1118_23_fu_1127975_p1.read());
    } else {
        grp_fu_1497_p0 = "XXXXXXXXXXXXXXXX";
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1497_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_1497_p1 =  (sc_lv<11>) (ap_const_lv26_3FFFC71);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_1497_p1 =  (sc_lv<11>) (ap_const_lv24_FFFFA4);
    } else {
        grp_fu_1497_p1 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1497_p2() {
    grp_fu_1497_p2 = (!grp_fu_1497_p0.read().is_01() || !grp_fu_1497_p1.read().is_01())? sc_lv<26>(): sc_bigint<16>(grp_fu_1497_p0.read()) * sc_bigint<11>(grp_fu_1497_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1499_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_1499_p0 =  (sc_lv<16>) (sext_ln1118_380_reg_1149468.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_1499_p0 =  (sc_lv<16>) (sext_ln1118_303_fu_1137871_p1.read());
    } else {
        grp_fu_1499_p0 = "XXXXXXXXXXXXXXXX";
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1499_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_1499_p1 =  (sc_lv<12>) (ap_const_lv26_212);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_1499_p1 =  (sc_lv<12>) (ap_const_lv25_1FFFF22);
    } else {
        grp_fu_1499_p1 =  (sc_lv<12>) ("XXXXXXXXXXXX");
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1499_p2() {
    grp_fu_1499_p2 = (!grp_fu_1499_p0.read().is_01() || !grp_fu_1499_p1.read().is_01())? sc_lv<26>(): sc_bigint<16>(grp_fu_1499_p0.read()) * sc_bigint<12>(grp_fu_1499_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1506_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_1506_p0 =  (sc_lv<16>) (sext_ln1118_412_fu_1145263_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_1506_p0 =  (sc_lv<16>) (sext_ln1118_114_fu_1131069_p1.read());
    } else {
        grp_fu_1506_p0 = "XXXXXXXXXXXXXXXX";
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1506_p2() {
    grp_fu_1506_p2 = (!grp_fu_1506_p0.read().is_01() || !ap_const_lv26_3FFFEEA.is_01())? sc_lv<26>(): sc_bigint<16>(grp_fu_1506_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFEEA);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1517_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_1517_p0 =  (sc_lv<16>) (sext_ln1118_450_fu_1146313_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_1517_p0 =  (sc_lv<16>) (sext_ln1118_218_fu_1134821_p1.read());
    } else {
        grp_fu_1517_p0 = "XXXXXXXXXXXXXXXX";
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1517_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_1517_p1 =  (sc_lv<11>) (ap_const_lv26_179);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_1517_p1 =  (sc_lv<11>) (ap_const_lv24_FFFF8E);
    } else {
        grp_fu_1517_p1 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1517_p2() {
    grp_fu_1517_p2 = (!grp_fu_1517_p0.read().is_01() || !grp_fu_1517_p1.read().is_01())? sc_lv<26>(): sc_bigint<16>(grp_fu_1517_p0.read()) * sc_bigint<11>(grp_fu_1517_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1518_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_1518_p0 =  (sc_lv<16>) (sext_ln1118_452_fu_1146330_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_1518_p0 =  (sc_lv<16>) (sext_ln1118_81_fu_1130069_p1.read());
    } else {
        grp_fu_1518_p0 = "XXXXXXXXXXXXXXXX";
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1518_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_1518_p1 =  (sc_lv<11>) (ap_const_lv25_1FFFF4E);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_1518_p1 =  (sc_lv<11>) (ap_const_lv26_19B);
    } else {
        grp_fu_1518_p1 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1518_p2() {
    grp_fu_1518_p2 = (!grp_fu_1518_p0.read().is_01() || !grp_fu_1518_p1.read().is_01())? sc_lv<26>(): sc_bigint<16>(grp_fu_1518_p0.read()) * sc_bigint<11>(grp_fu_1518_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1519_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_1519_p0 =  (sc_lv<16>) (sext_ln1118_424_fu_1145637_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_1519_p0 =  (sc_lv<16>) (sext_ln1118_200_fu_1134341_p1.read());
    } else {
        grp_fu_1519_p0 = "XXXXXXXXXXXXXXXX";
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1519_p2() {
    grp_fu_1519_p2 = (!grp_fu_1519_p0.read().is_01() || !ap_const_lv26_121.is_01())? sc_lv<26>(): sc_bigint<16>(grp_fu_1519_p0.read()) * sc_biguint<26>(ap_const_lv26_121);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1520_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_1520_p0 =  (sc_lv<16>) (sext_ln1118_450_fu_1146313_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_1520_p0 =  (sc_lv<16>) (sext_ln1118_335_fu_1138969_p1.read());
    } else {
        grp_fu_1520_p0 = "XXXXXXXXXXXXXXXX";
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1520_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_1520_p1 =  (sc_lv<11>) (ap_const_lv26_3FFFDDD);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_1520_p1 =  (sc_lv<11>) (ap_const_lv26_10E);
    } else {
        grp_fu_1520_p1 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1520_p2() {
    grp_fu_1520_p2 = (!grp_fu_1520_p0.read().is_01() || !grp_fu_1520_p1.read().is_01())? sc_lv<26>(): sc_bigint<16>(grp_fu_1520_p0.read()) * sc_bigint<11>(grp_fu_1520_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1521_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_1521_p0 =  (sc_lv<16>) (sext_ln1118_362_reg_1149442.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_1521_p0 =  (sc_lv<16>) (sext_ln1118_201_fu_1134350_p1.read());
    } else {
        grp_fu_1521_p0 = "XXXXXXXXXXXXXXXX";
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1521_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_1521_p1 =  (sc_lv<9>) (ap_const_lv25_1FFFF29);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_1521_p1 =  (sc_lv<9>) (ap_const_lv25_1FFFF62);
    } else {
        grp_fu_1521_p1 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1521_p2() {
    grp_fu_1521_p2 = (!grp_fu_1521_p0.read().is_01() || !grp_fu_1521_p1.read().is_01())? sc_lv<25>(): sc_bigint<16>(grp_fu_1521_p0.read()) * sc_bigint<9>(grp_fu_1521_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1526_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_1526_p0 =  (sc_lv<16>) (sext_ln1118_449_reg_1149555.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_1526_p0 =  (sc_lv<16>) (sext_ln1118_240_fu_1135759_p1.read());
    } else {
        grp_fu_1526_p0 = "XXXXXXXXXXXXXXXX";
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1526_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_1526_p1 =  (sc_lv<9>) (ap_const_lv24_5D);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_1526_p1 =  (sc_lv<9>) (ap_const_lv25_F1);
    } else {
        grp_fu_1526_p1 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1526_p2() {
    grp_fu_1526_p2 = (!grp_fu_1526_p0.read().is_01() || !grp_fu_1526_p1.read().is_01())? sc_lv<25>(): sc_bigint<16>(grp_fu_1526_p0.read()) * sc_biguint<9>(grp_fu_1526_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1527_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_1527_p0 =  (sc_lv<16>) (sext_ln1118_438_fu_1145975_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_1527_p0 =  (sc_lv<16>) (sext_ln1118_171_fu_1133233_p1.read());
    } else {
        grp_fu_1527_p0 = "XXXXXXXXXXXXXXXX";
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1527_p2() {
    grp_fu_1527_p2 = (!grp_fu_1527_p0.read().is_01() || !ap_const_lv24_FFFFA5.is_01())? sc_lv<24>(): sc_bigint<16>(grp_fu_1527_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFA5);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1532_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_1532_p0 =  (sc_lv<16>) (sext_ln1118_413_fu_1145271_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_1532_p0 =  (sc_lv<16>) (sext_ln1118_271_fu_1136774_p1.read());
    } else {
        grp_fu_1532_p0 = "XXXXXXXXXXXXXXXX";
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1532_p2() {
    grp_fu_1532_p2 = (!grp_fu_1532_p0.read().is_01() || !ap_const_lv25_89.is_01())? sc_lv<25>(): sc_bigint<16>(grp_fu_1532_p0.read()) * sc_biguint<25>(ap_const_lv25_89);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1533_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_1533_p0 =  (sc_lv<16>) (sext_ln1118_409_fu_1145257_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_1533_p0 =  (sc_lv<16>) (sext_ln1118_154_fu_1132671_p1.read());
    } else {
        grp_fu_1533_p0 = "XXXXXXXXXXXXXXXX";
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1533_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_1533_p1 =  (sc_lv<9>) (ap_const_lv24_66);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_1533_p1 =  (sc_lv<9>) (ap_const_lv22_3FFFE6);
    } else {
        grp_fu_1533_p1 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1533_p2() {
    grp_fu_1533_p2 = (!grp_fu_1533_p0.read().is_01() || !grp_fu_1533_p1.read().is_01())? sc_lv<24>(): sc_bigint<16>(grp_fu_1533_p0.read()) * sc_bigint<9>(grp_fu_1533_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1534_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_1534_p0 =  (sc_lv<16>) (sext_ln1118_438_fu_1145975_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_1534_p0 =  (sc_lv<16>) (sext_ln1118_83_fu_1130085_p1.read());
    } else {
        grp_fu_1534_p0 = "XXXXXXXXXXXXXXXX";
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1534_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_1534_p1 =  (sc_lv<8>) (ap_const_lv24_FFFFA3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_1534_p1 =  (sc_lv<8>) (ap_const_lv23_7FFFCB);
    } else {
        grp_fu_1534_p1 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1534_p2() {
    grp_fu_1534_p2 = (!grp_fu_1534_p0.read().is_01() || !grp_fu_1534_p1.read().is_01())? sc_lv<24>(): sc_bigint<16>(grp_fu_1534_p0.read()) * sc_bigint<8>(grp_fu_1534_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1541_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_1541_p0 =  (sc_lv<16>) (sext_ln1118_401_fu_1144906_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_1541_p0 =  (sc_lv<16>) (sext_ln1118_5_fu_1127514_p1.read());
    } else {
        grp_fu_1541_p0 = "XXXXXXXXXXXXXXXX";
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1541_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_1541_p1 =  (sc_lv<10>) (ap_const_lv25_E9);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_1541_p1 =  (sc_lv<10>) (ap_const_lv25_1FFFF71);
    } else {
        grp_fu_1541_p1 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1541_p2() {
    grp_fu_1541_p2 = (!grp_fu_1541_p0.read().is_01() || !grp_fu_1541_p1.read().is_01())? sc_lv<25>(): sc_bigint<16>(grp_fu_1541_p0.read()) * sc_bigint<10>(grp_fu_1541_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1543_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_1543_p0 =  (sc_lv<16>) (sext_ln1118_452_fu_1146330_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_1543_p0 =  (sc_lv<16>) (sext_ln1118_96_fu_1130532_p1.read());
    } else {
        grp_fu_1543_p0 = "XXXXXXXXXXXXXXXX";
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1543_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_1543_p1 =  (sc_lv<10>) (ap_const_lv25_A4);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_1543_p1 =  (sc_lv<10>) (ap_const_lv26_3FFFECF);
    } else {
        grp_fu_1543_p1 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1543_p2() {
    grp_fu_1543_p2 = (!grp_fu_1543_p0.read().is_01() || !grp_fu_1543_p1.read().is_01())? sc_lv<26>(): sc_bigint<16>(grp_fu_1543_p0.read()) * sc_bigint<10>(grp_fu_1543_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1547_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_1547_p0 =  (sc_lv<16>) (sext_ln1118_365_reg_1149456.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_1547_p0 =  (sc_lv<16>) (sext_ln1118_400_fu_1139877_p1.read());
    } else {
        grp_fu_1547_p0 = "XXXXXXXXXXXXXXXX";
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1547_p2() {
    grp_fu_1547_p2 = (!grp_fu_1547_p0.read().is_01() || !ap_const_lv24_66.is_01())? sc_lv<24>(): sc_bigint<16>(grp_fu_1547_p0.read()) * sc_biguint<24>(ap_const_lv24_66);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1552_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_1552_p0 =  (sc_lv<16>) (sext_ln1118_365_reg_1149456.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_1552_p0 =  (sc_lv<16>) (sext_ln1118_287_fu_1137319_p1.read());
    } else {
        grp_fu_1552_p0 = "XXXXXXXXXXXXXXXX";
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1552_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_1552_p1 =  (sc_lv<8>) (ap_const_lv24_FFFFA2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_1552_p1 =  (sc_lv<8>) (ap_const_lv24_FFFF9B);
    } else {
        grp_fu_1552_p1 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1552_p2() {
    grp_fu_1552_p2 = (!grp_fu_1552_p0.read().is_01() || !grp_fu_1552_p1.read().is_01())? sc_lv<24>(): sc_bigint<16>(grp_fu_1552_p0.read()) * sc_bigint<8>(grp_fu_1552_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1557_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_1557_p0 =  (sc_lv<16>) (sext_ln1118_380_reg_1149468.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_1557_p0 =  (sc_lv<16>) (sext_ln1118_21_fu_1127962_p1.read());
    } else {
        grp_fu_1557_p0 = "XXXXXXXXXXXXXXXX";
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1557_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_1557_p1 =  (sc_lv<11>) (ap_const_lv26_145);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_1557_p1 =  (sc_lv<11>) (ap_const_lv23_7FFFC7);
    } else {
        grp_fu_1557_p1 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1557_p2() {
    grp_fu_1557_p2 = (!grp_fu_1557_p0.read().is_01() || !grp_fu_1557_p1.read().is_01())? sc_lv<26>(): sc_bigint<16>(grp_fu_1557_p0.read()) * sc_bigint<11>(grp_fu_1557_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1558_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_1558_p0 =  (sc_lv<16>) (sext_ln1118_380_reg_1149468.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_1558_p0 =  (sc_lv<16>) (sext_ln1118_152_fu_1132650_p1.read());
    } else {
        grp_fu_1558_p0 = "XXXXXXXXXXXXXXXX";
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1558_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_1558_p1 =  (sc_lv<10>) (ap_const_lv26_198);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_1558_p1 =  (sc_lv<10>) (ap_const_lv25_CD);
    } else {
        grp_fu_1558_p1 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1558_p2() {
    grp_fu_1558_p2 = (!grp_fu_1558_p0.read().is_01() || !grp_fu_1558_p1.read().is_01())? sc_lv<26>(): sc_bigint<16>(grp_fu_1558_p0.read()) * sc_biguint<10>(grp_fu_1558_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1559_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_1559_p0 =  (sc_lv<16>) (sext_ln1118_362_reg_1149442.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_1559_p0 =  (sc_lv<16>) (sext_ln708_2_fu_1131572_p1.read());
    } else {
        grp_fu_1559_p0 = "XXXXXXXXXXXXXXXX";
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1559_p2() {
    grp_fu_1559_p2 = (!grp_fu_1559_p0.read().is_01() || !ap_const_lv25_1FFFF65.is_01())? sc_lv<25>(): sc_bigint<16>(grp_fu_1559_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF65);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1563_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_1563_p0 =  (sc_lv<16>) (sext_ln1118_450_fu_1146313_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_1563_p0 =  (sc_lv<16>) (sext_ln1118_349_fu_1139388_p1.read());
    } else {
        grp_fu_1563_p0 = "XXXXXXXXXXXXXXXX";
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1563_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_1563_p1 =  (sc_lv<11>) (ap_const_lv26_3FFFD37);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_1563_p1 =  (sc_lv<11>) (ap_const_lv25_1FFFF1B);
    } else {
        grp_fu_1563_p1 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1563_p2() {
    grp_fu_1563_p2 = (!grp_fu_1563_p0.read().is_01() || !grp_fu_1563_p1.read().is_01())? sc_lv<26>(): sc_bigint<16>(grp_fu_1563_p0.read()) * sc_bigint<11>(grp_fu_1563_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1564_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_1564_p0 =  (sc_lv<16>) (sext_ln1118_425_fu_1145647_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_1564_p0 =  (sc_lv<16>) (sext_ln1118_252_fu_1136257_p1.read());
    } else {
        grp_fu_1564_p0 = "XXXXXXXXXXXXXXXX";
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1564_p2() {
    grp_fu_1564_p2 = (!grp_fu_1564_p0.read().is_01() || !ap_const_lv25_C6.is_01())? sc_lv<25>(): sc_bigint<16>(grp_fu_1564_p0.read()) * sc_biguint<25>(ap_const_lv25_C6);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1574_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_1574_p0 =  (sc_lv<16>) (sext_ln1118_427_fu_1145655_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_1574_p0 =  (sc_lv<16>) (sext_ln1118_239_fu_1135753_p1.read());
    } else {
        grp_fu_1574_p0 = "XXXXXXXXXXXXXXXX";
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1574_p2() {
    grp_fu_1574_p2 = (!grp_fu_1574_p0.read().is_01() || !ap_const_lv23_36.is_01())? sc_lv<23>(): sc_bigint<16>(grp_fu_1574_p0.read()) * sc_biguint<23>(ap_const_lv23_36);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1575_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_1575_p0 =  (sc_lv<16>) (sext_ln1118_452_fu_1146330_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_1575_p0 =  (sc_lv<16>) (sext_ln1118_226_fu_1135263_p1.read());
    } else {
        grp_fu_1575_p0 = "XXXXXXXXXXXXXXXX";
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1575_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_1575_p1 =  (sc_lv<11>) (ap_const_lv25_1FFFF45);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_1575_p1 =  (sc_lv<11>) (ap_const_lv26_17E);
    } else {
        grp_fu_1575_p1 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1575_p2() {
    grp_fu_1575_p2 = (!grp_fu_1575_p0.read().is_01() || !grp_fu_1575_p1.read().is_01())? sc_lv<26>(): sc_bigint<16>(grp_fu_1575_p0.read()) * sc_bigint<11>(grp_fu_1575_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1581_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_1581_p0 =  (sc_lv<16>) (sext_ln1118_362_reg_1149442.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_1581_p0 =  (sc_lv<16>) (sext_ln1118_47_fu_1129016_p1.read());
    } else {
        grp_fu_1581_p0 = "XXXXXXXXXXXXXXXX";
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1581_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_1581_p1 =  (sc_lv<9>) (ap_const_lv25_D1);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_1581_p1 =  (sc_lv<9>) (ap_const_lv24_6E);
    } else {
        grp_fu_1581_p1 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1581_p2() {
    grp_fu_1581_p2 = (!grp_fu_1581_p0.read().is_01() || !grp_fu_1581_p1.read().is_01())? sc_lv<25>(): sc_bigint<16>(grp_fu_1581_p0.read()) * sc_biguint<9>(grp_fu_1581_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1583_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_1583_p0 =  (sc_lv<16>) (sext_ln1118_423_fu_1145629_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_1583_p0 =  (sc_lv<16>) (sext_ln1118_304_fu_1137883_p1.read());
    } else {
        grp_fu_1583_p0 = "XXXXXXXXXXXXXXXX";
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1583_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_1583_p1 =  (sc_lv<9>) (ap_const_lv24_43);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_1583_p1 =  (sc_lv<9>) (ap_const_lv24_FFFFAF);
    } else {
        grp_fu_1583_p1 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1583_p2() {
    grp_fu_1583_p2 = (!grp_fu_1583_p0.read().is_01() || !grp_fu_1583_p1.read().is_01())? sc_lv<24>(): sc_bigint<16>(grp_fu_1583_p0.read()) * sc_bigint<9>(grp_fu_1583_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1585_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_1585_p0 =  (sc_lv<16>) (sext_ln1118_423_fu_1145629_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_1585_p0 =  (sc_lv<16>) (sext_ln1118_237_fu_1135738_p1.read());
    } else {
        grp_fu_1585_p0 = "XXXXXXXXXXXXXXXX";
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1585_p2() {
    grp_fu_1585_p2 = (!grp_fu_1585_p0.read().is_01() || !ap_const_lv24_FFFFA7.is_01())? sc_lv<24>(): sc_bigint<16>(grp_fu_1585_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFA7);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1589_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_1589_p0 =  (sc_lv<16>) (sext_ln1118_384_reg_1149485.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_1589_p0 =  (sc_lv<16>) (sext_ln1118_153_fu_1132660_p1.read());
    } else {
        grp_fu_1589_p0 = "XXXXXXXXXXXXXXXX";
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1589_p2() {
    grp_fu_1589_p2 = (!grp_fu_1589_p0.read().is_01() || !ap_const_lv24_5D.is_01())? sc_lv<24>(): sc_bigint<16>(grp_fu_1589_p0.read()) * sc_biguint<24>(ap_const_lv24_5D);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1590_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_1590_p0 =  (sc_lv<16>) (sext_ln1118_436_fu_1145956_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_1590_p0 =  (sc_lv<16>) (sext_ln1118_240_fu_1135759_p1.read());
    } else {
        grp_fu_1590_p0 = "XXXXXXXXXXXXXXXX";
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1590_p2() {
    grp_fu_1590_p2 = (!grp_fu_1590_p0.read().is_01() || !ap_const_lv25_E8.is_01())? sc_lv<25>(): sc_bigint<16>(grp_fu_1590_p0.read()) * sc_biguint<25>(ap_const_lv25_E8);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1592_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_1592_p0 =  (sc_lv<16>) (sext_ln1118_337_reg_1149340.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_1592_p0 =  (sc_lv<16>) (sext_ln1118_64_fu_1129533_p1.read());
    } else {
        grp_fu_1592_p0 = "XXXXXXXXXXXXXXXX";
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1592_p2() {
    grp_fu_1592_p2 = (!grp_fu_1592_p0.read().is_01() || !ap_const_lv25_F1.is_01())? sc_lv<25>(): sc_bigint<16>(grp_fu_1592_p0.read()) * sc_biguint<25>(ap_const_lv25_F1);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1593_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_1593_p0 =  (sc_lv<16>) (sext_ln1118_427_fu_1145655_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_1593_p0 =  (sc_lv<16>) (sext_ln1118_101_fu_1130565_p1.read());
    } else {
        grp_fu_1593_p0 = "XXXXXXXXXXXXXXXX";
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1593_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_1593_p1 =  (sc_lv<7>) (ap_const_lv23_7FFFDD);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_1593_p1 =  (sc_lv<7>) (ap_const_lv22_16);
    } else {
        grp_fu_1593_p1 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1593_p2() {
    grp_fu_1593_p2 = (!grp_fu_1593_p0.read().is_01() || !grp_fu_1593_p1.read().is_01())? sc_lv<23>(): sc_bigint<16>(grp_fu_1593_p0.read()) * sc_bigint<7>(grp_fu_1593_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1602_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_1602_p0 =  (sc_lv<16>) (sext_ln1118_398_fu_1144898_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_1602_p0 =  (sc_lv<16>) (sext_ln1118_170_fu_1133228_p1.read());
    } else {
        grp_fu_1602_p0 = "XXXXXXXXXXXXXXXX";
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1602_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_1602_p1 =  (sc_lv<11>) (ap_const_lv26_119);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_1602_p1 =  (sc_lv<11>) (ap_const_lv23_7FFFCC);
    } else {
        grp_fu_1602_p1 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1602_p2() {
    grp_fu_1602_p2 = (!grp_fu_1602_p0.read().is_01() || !grp_fu_1602_p1.read().is_01())? sc_lv<26>(): sc_bigint<16>(grp_fu_1602_p0.read()) * sc_bigint<11>(grp_fu_1602_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1603_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_1603_p0 =  (sc_lv<16>) (sext_ln1118_351_fu_1144002_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_1603_p0 =  (sc_lv<16>) (sext_ln1118_335_fu_1138969_p1.read());
    } else {
        grp_fu_1603_p0 = "XXXXXXXXXXXXXXXX";
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1603_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_1603_p1 =  (sc_lv<11>) (ap_const_lv26_161);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_1603_p1 =  (sc_lv<11>) (ap_const_lv26_3FFFEE7);
    } else {
        grp_fu_1603_p1 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1603_p2() {
    grp_fu_1603_p2 = (!grp_fu_1603_p0.read().is_01() || !grp_fu_1603_p1.read().is_01())? sc_lv<26>(): sc_bigint<16>(grp_fu_1603_p0.read()) * sc_bigint<11>(grp_fu_1603_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1612_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_1612_p0 =  (sc_lv<16>) (sext_ln1118_382_fu_1144541_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_1612_p0 =  (sc_lv<16>) (sext_ln1118_348_fu_1139383_p1.read());
    } else {
        grp_fu_1612_p0 = "XXXXXXXXXXXXXXXX";
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1612_p2() {
    grp_fu_1612_p2 = (!grp_fu_1612_p0.read().is_01() || !ap_const_lv22_16.is_01())? sc_lv<22>(): sc_bigint<16>(grp_fu_1612_p0.read()) * sc_biguint<22>(ap_const_lv22_16);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1615_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_1615_p0 =  (sc_lv<16>) (sext_ln1118_363_reg_1149451.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_1615_p0 =  (sc_lv<16>) (sext_ln1118_200_fu_1134341_p1.read());
    } else {
        grp_fu_1615_p0 = "XXXXXXXXXXXXXXXX";
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1615_p2() {
    grp_fu_1615_p2 = (!grp_fu_1615_p0.read().is_01() || !ap_const_lv26_3FFFED6.is_01())? sc_lv<26>(): sc_bigint<16>(grp_fu_1615_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFED6);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1618_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_1618_p0 =  (sc_lv<16>) (sext_ln1118_413_fu_1145271_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_1618_p0 =  (sc_lv<16>) (sext_ln1118_31_fu_1128439_p1.read());
    } else {
        grp_fu_1618_p0 = "XXXXXXXXXXXXXXXX";
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1618_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_1618_p1 =  (sc_lv<11>) (ap_const_lv25_1FFFF5F);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_1618_p1 =  (sc_lv<11>) (ap_const_lv26_157);
    } else {
        grp_fu_1618_p1 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1618_p2() {
    grp_fu_1618_p2 = (!grp_fu_1618_p0.read().is_01() || !grp_fu_1618_p1.read().is_01())? sc_lv<26>(): sc_bigint<16>(grp_fu_1618_p0.read()) * sc_bigint<11>(grp_fu_1618_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1622_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_1622_p0 =  (sc_lv<16>) (sext_ln1118_437_fu_1145963_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_1622_p0 =  (sc_lv<16>) (sext_ln1118_286_fu_1137307_p1.read());
    } else {
        grp_fu_1622_p0 = "XXXXXXXXXXXXXXXX";
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1622_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_1622_p1 =  (sc_lv<11>) (ap_const_lv26_10D);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_1622_p1 =  (sc_lv<11>) (ap_const_lv25_1FFFF35);
    } else {
        grp_fu_1622_p1 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1622_p2() {
    grp_fu_1622_p2 = (!grp_fu_1622_p0.read().is_01() || !grp_fu_1622_p1.read().is_01())? sc_lv<26>(): sc_bigint<16>(grp_fu_1622_p0.read()) * sc_bigint<11>(grp_fu_1622_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1623_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_1623_p0 =  (sc_lv<16>) (sext_ln1118_425_fu_1145647_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_1623_p0 =  (sc_lv<16>) (sext_ln1118_286_fu_1137307_p1.read());
    } else {
        grp_fu_1623_p0 = "XXXXXXXXXXXXXXXX";
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1623_p2() {
    grp_fu_1623_p2 = (!grp_fu_1623_p0.read().is_01() || !ap_const_lv25_F5.is_01())? sc_lv<25>(): sc_bigint<16>(grp_fu_1623_p0.read()) * sc_biguint<25>(ap_const_lv25_F5);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1624_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_1624_p0 =  (sc_lv<16>) (sext_ln1118_381_reg_1149478.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_1624_p0 =  (sc_lv<16>) (sext_ln1118_64_fu_1129533_p1.read());
    } else {
        grp_fu_1624_p0 = "XXXXXXXXXXXXXXXX";
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1624_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_1624_p1 =  (sc_lv<10>) (ap_const_lv25_C7);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_1624_p1 =  (sc_lv<10>) (ap_const_lv25_1FFFF49);
    } else {
        grp_fu_1624_p1 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1624_p2() {
    grp_fu_1624_p2 = (!grp_fu_1624_p0.read().is_01() || !grp_fu_1624_p1.read().is_01())? sc_lv<25>(): sc_bigint<16>(grp_fu_1624_p0.read()) * sc_bigint<10>(grp_fu_1624_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1625_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_1625_p0 =  (sc_lv<16>) (sext_ln1118_401_fu_1144906_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_1625_p0 =  (sc_lv<16>) (sext_ln1118_201_fu_1134350_p1.read());
    } else {
        grp_fu_1625_p0 = "XXXXXXXXXXXXXXXX";
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1625_p2() {
    grp_fu_1625_p2 = (!grp_fu_1625_p0.read().is_01() || !ap_const_lv25_1FFFF77.is_01())? sc_lv<25>(): sc_bigint<16>(grp_fu_1625_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF77);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1626_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_1626_p0 =  (sc_lv<16>) (sext_ln1118_381_reg_1149478.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_1626_p0 =  (sc_lv<16>) (sext_ln1118_154_fu_1132671_p1.read());
    } else {
        grp_fu_1626_p0 = "XXXXXXXXXXXXXXXX";
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1626_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_1626_p1 =  (sc_lv<9>) (ap_const_lv25_A1);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_1626_p1 =  (sc_lv<9>) (ap_const_lv22_1A);
    } else {
        grp_fu_1626_p1 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1626_p2() {
    grp_fu_1626_p2 = (!grp_fu_1626_p0.read().is_01() || !grp_fu_1626_p1.read().is_01())? sc_lv<25>(): sc_bigint<16>(grp_fu_1626_p0.read()) * sc_biguint<9>(grp_fu_1626_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1630_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_1630_p0 =  (sc_lv<16>) (sext_ln1118_381_reg_1149478.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_1630_p0 =  (sc_lv<16>) (sext_ln1118_271_fu_1136774_p1.read());
    } else {
        grp_fu_1630_p0 = "XXXXXXXXXXXXXXXX";
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1630_p2() {
    grp_fu_1630_p2 = (!grp_fu_1630_p0.read().is_01() || !ap_const_lv25_86.is_01())? sc_lv<25>(): sc_bigint<16>(grp_fu_1630_p0.read()) * sc_biguint<25>(ap_const_lv25_86);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1635_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_1635_p0 =  (sc_lv<16>) (sext_ln1118_380_reg_1149468.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_1635_p0 =  (sc_lv<16>) (sext_ln1118_81_fu_1130069_p1.read());
    } else {
        grp_fu_1635_p0 = "XXXXXXXXXXXXXXXX";
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1635_p2() {
    grp_fu_1635_p2 = (!grp_fu_1635_p0.read().is_01() || !ap_const_lv26_14D.is_01())? sc_lv<26>(): sc_bigint<16>(grp_fu_1635_p0.read()) * sc_biguint<26>(ap_const_lv26_14D);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1636_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_1636_p0 =  (sc_lv<16>) (sext_ln1118_452_fu_1146330_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_1636_p0 =  (sc_lv<16>) (sext_ln1118_228_fu_1135283_p1.read());
    } else {
        grp_fu_1636_p0 = "XXXXXXXXXXXXXXXX";
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1636_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_1636_p1 =  (sc_lv<10>) (ap_const_lv25_89);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_1636_p1 =  (sc_lv<10>) (ap_const_lv23_7FFFD9);
    } else {
        grp_fu_1636_p1 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1636_p2() {
    grp_fu_1636_p2 = (!grp_fu_1636_p0.read().is_01() || !grp_fu_1636_p1.read().is_01())? sc_lv<25>(): sc_bigint<16>(grp_fu_1636_p0.read()) * sc_bigint<10>(grp_fu_1636_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1642_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_1642_p0 =  (sc_lv<16>) (sext_ln1118_438_fu_1145975_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_1642_p0 =  (sc_lv<16>) (sext_ln1118_225_fu_1135252_p1.read());
    } else {
        grp_fu_1642_p0 = "XXXXXXXXXXXXXXXX";
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1642_p2() {
    grp_fu_1642_p2 = (!grp_fu_1642_p0.read().is_01() || !ap_const_lv24_FFFF9B.is_01())? sc_lv<24>(): sc_bigint<16>(grp_fu_1642_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF9B);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1644_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_1644_p0 =  (sc_lv<16>) (sext_ln1118_450_fu_1146313_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_1644_p0 =  (sc_lv<16>) (sext_ln1118_112_fu_1131050_p1.read());
    } else {
        grp_fu_1644_p0 = "XXXXXXXXXXXXXXXX";
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1644_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_1644_p1 =  (sc_lv<11>) (ap_const_lv26_178);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_1644_p1 =  (sc_lv<11>) (ap_const_lv24_FFFFB6);
    } else {
        grp_fu_1644_p1 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1644_p2() {
    grp_fu_1644_p2 = (!grp_fu_1644_p0.read().is_01() || !grp_fu_1644_p1.read().is_01())? sc_lv<26>(): sc_bigint<16>(grp_fu_1644_p0.read()) * sc_bigint<11>(grp_fu_1644_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1647_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_1647_p0 =  (sc_lv<16>) (sext_ln1118_450_fu_1146313_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_1647_p0 =  (sc_lv<16>) (sext_ln1118_337_fu_1138984_p1.read());
    } else {
        grp_fu_1647_p0 = "XXXXXXXXXXXXXXXX";
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1647_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_1647_p1 =  (sc_lv<10>) (ap_const_lv26_3FFFED9);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_1647_p1 =  (sc_lv<10>) (ap_const_lv25_1FFFF3D);
    } else {
        grp_fu_1647_p1 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1647_p2() {
    grp_fu_1647_p2 = (!grp_fu_1647_p0.read().is_01() || !grp_fu_1647_p1.read().is_01())? sc_lv<26>(): sc_bigint<16>(grp_fu_1647_p0.read()) * sc_bigint<10>(grp_fu_1647_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1648_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_1648_p0 =  (sc_lv<16>) (sext_ln1118_412_fu_1145263_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_1648_p0 =  (sc_lv<16>) (sext_ln1118_219_fu_1134829_p1.read());
    } else {
        grp_fu_1648_p0 = "XXXXXXXXXXXXXXXX";
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1648_p2() {
    grp_fu_1648_p2 = (!grp_fu_1648_p0.read().is_01() || !ap_const_lv26_3FFFEEB.is_01())? sc_lv<26>(): sc_bigint<16>(grp_fu_1648_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFEEB);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1649_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_1649_p0 =  (sc_lv<16>) (sext_ln1118_349_reg_1149400.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_1649_p0 =  (sc_lv<16>) (sext_ln1118_271_fu_1136774_p1.read());
    } else {
        grp_fu_1649_p0 = "XXXXXXXXXXXXXXXX";
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1649_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_1649_p1 =  (sc_lv<9>) (ap_const_lv25_EC);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_1649_p1 =  (sc_lv<9>) (ap_const_lv25_CF);
    } else {
        grp_fu_1649_p1 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1649_p2() {
    grp_fu_1649_p2 = (!grp_fu_1649_p0.read().is_01() || !grp_fu_1649_p1.read().is_01())? sc_lv<25>(): sc_bigint<16>(grp_fu_1649_p0.read()) * sc_biguint<9>(grp_fu_1649_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1652_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_1652_p0 =  (sc_lv<16>) (sext_ln1118_336_reg_1149335.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_1652_p0 =  (sc_lv<16>) (sext_ln1118_272_fu_1136785_p1.read());
    } else {
        grp_fu_1652_p0 = "XXXXXXXXXXXXXXXX";
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1652_p2() {
    grp_fu_1652_p2 = (!grp_fu_1652_p0.read().is_01() || !ap_const_lv24_47.is_01())? sc_lv<24>(): sc_bigint<16>(grp_fu_1652_p0.read()) * sc_biguint<24>(ap_const_lv24_47);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1655_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_1655_p0 =  (sc_lv<16>) (sext_ln1118_400_reg_1149502.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_1655_p0 =  (sc_lv<16>) (sext_ln708_4_fu_1131589_p1.read());
    } else {
        grp_fu_1655_p0 = "XXXXXXXXXXXXXXXX";
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1655_p2() {
    grp_fu_1655_p2 = (!grp_fu_1655_p0.read().is_01() || !ap_const_lv24_FFFF8A.is_01())? sc_lv<24>(): sc_bigint<16>(grp_fu_1655_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF8A);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1656_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_1656_p0 =  (sc_lv<16>) (sext_ln1118_349_reg_1149400.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_1656_p0 =  (sc_lv<16>) (sext_ln1118_337_fu_1138984_p1.read());
    } else {
        grp_fu_1656_p0 = "XXXXXXXXXXXXXXXX";
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1656_p2() {
    grp_fu_1656_p2 = (!grp_fu_1656_p0.read().is_01() || !ap_const_lv25_E8.is_01())? sc_lv<25>(): sc_bigint<16>(grp_fu_1656_p0.read()) * sc_biguint<25>(ap_const_lv25_E8);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1659_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_1659_p0 =  (sc_lv<16>) (sext_ln1118_413_fu_1145271_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_1659_p0 =  (sc_lv<16>) (sext_ln1118_337_fu_1138984_p1.read());
    } else {
        grp_fu_1659_p0 = "XXXXXXXXXXXXXXXX";
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1659_p2() {
    grp_fu_1659_p2 = (!grp_fu_1659_p0.read().is_01() || !ap_const_lv25_1FFFF4D.is_01())? sc_lv<25>(): sc_bigint<16>(grp_fu_1659_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF4D);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1670_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_1670_p0 =  (sc_lv<16>) (sext_ln1118_350_reg_1149414.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_1670_p0 =  (sc_lv<16>) (sext_ln1118_168_fu_1133215_p1.read());
    } else {
        grp_fu_1670_p0 = "XXXXXXXXXXXXXXXX";
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1670_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_1670_p1 =  (sc_lv<10>) (ap_const_lv24_51);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_1670_p1 =  (sc_lv<10>) (ap_const_lv26_151);
    } else {
        grp_fu_1670_p1 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1670_p2() {
    grp_fu_1670_p2 = (!grp_fu_1670_p0.read().is_01() || !grp_fu_1670_p1.read().is_01())? sc_lv<26>(): sc_bigint<16>(grp_fu_1670_p0.read()) * sc_biguint<10>(grp_fu_1670_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1671_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_1671_p0 =  (sc_lv<16>) (sext_ln1118_452_fu_1146330_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_1671_p0 =  (sc_lv<16>) (sext_ln1118_201_fu_1134350_p1.read());
    } else {
        grp_fu_1671_p0 = "XXXXXXXXXXXXXXXX";
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1671_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_1671_p1 =  (sc_lv<10>) (ap_const_lv25_1FFFF34);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_1671_p1 =  (sc_lv<10>) (ap_const_lv25_EF);
    } else {
        grp_fu_1671_p1 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1671_p2() {
    grp_fu_1671_p2 = (!grp_fu_1671_p0.read().is_01() || !grp_fu_1671_p1.read().is_01())? sc_lv<25>(): sc_bigint<16>(grp_fu_1671_p0.read()) * sc_bigint<10>(grp_fu_1671_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1675_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_1675_p0 =  (sc_lv<16>) (sext_ln1118_436_fu_1145956_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_1675_p0 =  (sc_lv<16>) (sext_ln1118_186_fu_1133777_p1.read());
    } else {
        grp_fu_1675_p0 = "XXXXXXXXXXXXXXXX";
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1675_p2() {
    grp_fu_1675_p2 = (!grp_fu_1675_p0.read().is_01() || !ap_const_lv25_1FFFF6F.is_01())? sc_lv<25>(): sc_bigint<16>(grp_fu_1675_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF6F);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1683_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_1683_p0 =  (sc_lv<16>) (sext_ln1118_425_fu_1145647_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_1683_p0 =  (sc_lv<16>) (sext_ln1118_186_fu_1133777_p1.read());
    } else {
        grp_fu_1683_p0 = "XXXXXXXXXXXXXXXX";
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1683_p2() {
    grp_fu_1683_p2 = (!grp_fu_1683_p0.read().is_01() || !ap_const_lv25_BC.is_01())? sc_lv<25>(): sc_bigint<16>(grp_fu_1683_p0.read()) * sc_biguint<25>(ap_const_lv25_BC);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1685_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_1685_p0 =  (sc_lv<16>) (sext_ln1118_449_reg_1149555.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_1685_p0 =  (sc_lv<16>) (sext_ln1118_81_fu_1130069_p1.read());
    } else {
        grp_fu_1685_p0 = "XXXXXXXXXXXXXXXX";
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1685_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_1685_p1 =  (sc_lv<11>) (ap_const_lv24_FFFF98);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_1685_p1 =  (sc_lv<11>) (ap_const_lv26_3FFFDF5);
    } else {
        grp_fu_1685_p1 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1685_p2() {
    grp_fu_1685_p2 = (!grp_fu_1685_p0.read().is_01() || !grp_fu_1685_p1.read().is_01())? sc_lv<26>(): sc_bigint<16>(grp_fu_1685_p0.read()) * sc_bigint<11>(grp_fu_1685_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1687_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_1687_p0 =  (sc_lv<16>) (sext_ln1118_424_fu_1145637_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_1687_p0 =  (sc_lv<16>) (sext_ln1118_226_fu_1135263_p1.read());
    } else {
        grp_fu_1687_p0 = "XXXXXXXXXXXXXXXX";
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1687_p2() {
    grp_fu_1687_p2 = (!grp_fu_1687_p0.read().is_01() || !ap_const_lv26_15E.is_01())? sc_lv<26>(): sc_bigint<16>(grp_fu_1687_p0.read()) * sc_biguint<26>(ap_const_lv26_15E);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1690_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_1690_p0 =  (sc_lv<16>) (sext_ln1118_424_fu_1145637_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_1690_p0 =  (sc_lv<16>) (sext_ln1118_133_fu_1132057_p1.read());
    } else {
        grp_fu_1690_p0 = "XXXXXXXXXXXXXXXX";
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1690_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_1690_p1 =  (sc_lv<11>) (ap_const_lv26_16A);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_1690_p1 =  (sc_lv<11>) (ap_const_lv26_3FFFE9D);
    } else {
        grp_fu_1690_p1 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1690_p2() {
    grp_fu_1690_p2 = (!grp_fu_1690_p0.read().is_01() || !grp_fu_1690_p1.read().is_01())? sc_lv<26>(): sc_bigint<16>(grp_fu_1690_p0.read()) * sc_bigint<11>(grp_fu_1690_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1697_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_1697_p0 =  (sc_lv<16>) (sext_ln1118_398_fu_1144898_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_1697_p0 =  (sc_lv<16>) (sext_ln1118_226_fu_1135263_p1.read());
    } else {
        grp_fu_1697_p0 = "XXXXXXXXXXXXXXXX";
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1697_p2() {
    grp_fu_1697_p2 = (!grp_fu_1697_p0.read().is_01() || !ap_const_lv26_127.is_01())? sc_lv<26>(): sc_bigint<16>(grp_fu_1697_p0.read()) * sc_biguint<26>(ap_const_lv26_127);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1705_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_1705_p0 =  (sc_lv<16>) (sext_ln1118_413_fu_1145271_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_1705_p0 =  (sc_lv<16>) (sext_ln1118_271_fu_1136774_p1.read());
    } else {
        grp_fu_1705_p0 = "XXXXXXXXXXXXXXXX";
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1705_p2() {
    grp_fu_1705_p2 = (!grp_fu_1705_p0.read().is_01() || !ap_const_lv25_DD.is_01())? sc_lv<25>(): sc_bigint<16>(grp_fu_1705_p0.read()) * sc_biguint<25>(ap_const_lv25_DD);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1706_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_1706_p0 =  (sc_lv<16>) (sext_ln1118_450_fu_1146313_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_1706_p0 =  (sc_lv<16>) (sext_ln1118_114_fu_1131069_p1.read());
    } else {
        grp_fu_1706_p0 = "XXXXXXXXXXXXXXXX";
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1706_p2() {
    grp_fu_1706_p2 = (!grp_fu_1706_p0.read().is_01() || !ap_const_lv26_3FFFE6C.is_01())? sc_lv<26>(): sc_bigint<16>(grp_fu_1706_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFE6C);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1709_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_1709_p0 =  (sc_lv<16>) (sext_ln1118_452_fu_1146330_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_1709_p0 =  (sc_lv<16>) (sext_ln1118_64_fu_1129533_p1.read());
    } else {
        grp_fu_1709_p0 = "XXXXXXXXXXXXXXXX";
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1709_p2() {
    grp_fu_1709_p2 = (!grp_fu_1709_p0.read().is_01() || !ap_const_lv25_DC.is_01())? sc_lv<25>(): sc_bigint<16>(grp_fu_1709_p0.read()) * sc_biguint<25>(ap_const_lv25_DC);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1710_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_1710_p0 =  (sc_lv<16>) (sext_ln1118_401_fu_1144906_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_1710_p0 =  (sc_lv<16>) (sext_ln1118_64_fu_1129533_p1.read());
    } else {
        grp_fu_1710_p0 = "XXXXXXXXXXXXXXXX";
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1710_p2() {
    grp_fu_1710_p2 = (!grp_fu_1710_p0.read().is_01() || !ap_const_lv25_EC.is_01())? sc_lv<25>(): sc_bigint<16>(grp_fu_1710_p0.read()) * sc_biguint<25>(ap_const_lv25_EC);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1712_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_1712_p0 =  (sc_lv<16>) (sext_ln1118_366_fu_1144181_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_1712_p0 =  (sc_lv<16>) (sext_ln1118_168_fu_1133215_p1.read());
    } else {
        grp_fu_1712_p0 = "XXXXXXXXXXXXXXXX";
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1712_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_1712_p1 =  (sc_lv<10>) (ap_const_lv23_2E);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_1712_p1 =  (sc_lv<10>) (ap_const_lv26_118);
    } else {
        grp_fu_1712_p1 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1712_p2() {
    grp_fu_1712_p2 = (!grp_fu_1712_p0.read().is_01() || !grp_fu_1712_p1.read().is_01())? sc_lv<26>(): sc_bigint<16>(grp_fu_1712_p0.read()) * sc_biguint<10>(grp_fu_1712_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1713_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_1713_p0 =  (sc_lv<16>) (sext_ln1118_427_fu_1145655_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_1713_p0 =  (sc_lv<16>) (sext_ln1118_318_fu_1138471_p1.read());
    } else {
        grp_fu_1713_p0 = "XXXXXXXXXXXXXXXX";
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1713_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_1713_p1 =  (sc_lv<10>) (ap_const_lv23_3B);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_1713_p1 =  (sc_lv<10>) (ap_const_lv26_164);
    } else {
        grp_fu_1713_p1 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1713_p2() {
    grp_fu_1713_p2 = (!grp_fu_1713_p0.read().is_01() || !grp_fu_1713_p1.read().is_01())? sc_lv<26>(): sc_bigint<16>(grp_fu_1713_p0.read()) * sc_biguint<10>(grp_fu_1713_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1714_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_1714_p0 =  (sc_lv<16>) (sext_ln1118_365_reg_1149456.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_1714_p0 =  (sc_lv<16>) (sext_ln1118_304_fu_1137883_p1.read());
    } else {
        grp_fu_1714_p0 = "XXXXXXXXXXXXXXXX";
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1714_p2() {
    grp_fu_1714_p2 = (!grp_fu_1714_p0.read().is_01() || !ap_const_lv24_65.is_01())? sc_lv<24>(): sc_bigint<16>(grp_fu_1714_p0.read()) * sc_biguint<24>(ap_const_lv24_65);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1719_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_1719_p0 =  (sc_lv<16>) (sext_ln1118_412_fu_1145263_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_1719_p0 =  (sc_lv<16>) (sext_ln1118_114_fu_1131069_p1.read());
    } else {
        grp_fu_1719_p0 = "XXXXXXXXXXXXXXXX";
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1719_p2() {
    grp_fu_1719_p2 = (!grp_fu_1719_p0.read().is_01() || !ap_const_lv26_3FFFEAB.is_01())? sc_lv<26>(): sc_bigint<16>(grp_fu_1719_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFEAB);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1722_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_1722_p0 =  (sc_lv<16>) (sext_ln1118_438_fu_1145975_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_1722_p0 =  (sc_lv<16>) (sext_ln1118_153_fu_1132660_p1.read());
    } else {
        grp_fu_1722_p0 = "XXXXXXXXXXXXXXXX";
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1722_p2() {
    grp_fu_1722_p2 = (!grp_fu_1722_p0.read().is_01() || !ap_const_lv24_71.is_01())? sc_lv<24>(): sc_bigint<16>(grp_fu_1722_p0.read()) * sc_biguint<24>(ap_const_lv24_71);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1729_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_1729_p0 =  (sc_lv<16>) (sext_ln1118_349_reg_1149400.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_1729_p0 =  (sc_lv<16>) (sext_ln1118_317_fu_1138462_p1.read());
    } else {
        grp_fu_1729_p0 = "XXXXXXXXXXXXXXXX";
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1729_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_1729_p1 =  (sc_lv<9>) (ap_const_lv25_1FFFF0B);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_1729_p1 =  (sc_lv<9>) (ap_const_lv25_1FFFF76);
    } else {
        grp_fu_1729_p1 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1729_p2() {
    grp_fu_1729_p2 = (!grp_fu_1729_p0.read().is_01() || !grp_fu_1729_p1.read().is_01())? sc_lv<25>(): sc_bigint<16>(grp_fu_1729_p0.read()) * sc_bigint<9>(grp_fu_1729_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1730_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_1730_p0 =  (sc_lv<16>) (sext_ln1118_351_fu_1144002_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_1730_p0 =  (sc_lv<16>) (sext_ln1118_184_fu_1133761_p1.read());
    } else {
        grp_fu_1730_p0 = "XXXXXXXXXXXXXXXX";
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1730_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_1730_p1 =  (sc_lv<11>) (ap_const_lv26_123);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_1730_p1 =  (sc_lv<11>) (ap_const_lv24_FFFFBA);
    } else {
        grp_fu_1730_p1 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1730_p2() {
    grp_fu_1730_p2 = (!grp_fu_1730_p0.read().is_01() || !grp_fu_1730_p1.read().is_01())? sc_lv<26>(): sc_bigint<16>(grp_fu_1730_p0.read()) * sc_bigint<11>(grp_fu_1730_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1731_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_1731_p0 =  (sc_lv<16>) (sext_ln1118_349_reg_1149400.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_1731_p0 =  (sc_lv<16>) (sext_ln1118_251_fu_1136247_p1.read());
    } else {
        grp_fu_1731_p0 = "XXXXXXXXXXXXXXXX";
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1731_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_1731_p1 =  (sc_lv<11>) (ap_const_lv25_1FFFF0D);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_1731_p1 =  (sc_lv<11>) (ap_const_lv26_115);
    } else {
        grp_fu_1731_p1 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1731_p2() {
    grp_fu_1731_p2 = (!grp_fu_1731_p0.read().is_01() || !grp_fu_1731_p1.read().is_01())? sc_lv<26>(): sc_bigint<16>(grp_fu_1731_p0.read()) * sc_bigint<11>(grp_fu_1731_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1735_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_1735_p0 =  (sc_lv<16>) (sext_ln1118_380_reg_1149468.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_1735_p0 =  (sc_lv<16>) (sext_ln1118_307_fu_1138194_p1.read());
    } else {
        grp_fu_1735_p0 = "XXXXXXXXXXXXXXXX";
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1735_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_1735_p1 =  (sc_lv<10>) (ap_const_lv26_176);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_1735_p1 =  (sc_lv<10>) (ap_const_lv26_117);
    } else {
        grp_fu_1735_p1 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1735_p2() {
    grp_fu_1735_p2 = (!grp_fu_1735_p0.read().is_01() || !grp_fu_1735_p1.read().is_01())? sc_lv<26>(): sc_bigint<16>(grp_fu_1735_p0.read()) * sc_biguint<10>(grp_fu_1735_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1742_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_1742_p0 =  (sc_lv<16>) (sext_ln1118_350_reg_1149414.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_1742_p0 =  (sc_lv<16>) (sext_ln1118_337_fu_1138984_p1.read());
    } else {
        grp_fu_1742_p0 = "XXXXXXXXXXXXXXXX";
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1742_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_1742_p1 =  (sc_lv<9>) (ap_const_lv24_43);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_1742_p1 =  (sc_lv<9>) (ap_const_lv25_1FFFF28);
    } else {
        grp_fu_1742_p1 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1742_p2() {
    grp_fu_1742_p2 = (!grp_fu_1742_p0.read().is_01() || !grp_fu_1742_p1.read().is_01())? sc_lv<25>(): sc_bigint<16>(grp_fu_1742_p0.read()) * sc_bigint<9>(grp_fu_1742_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1744_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_1744_p0 =  (sc_lv<16>) (sext_ln1118_413_fu_1145271_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_1744_p0 =  (sc_lv<16>) (sext_ln1118_303_fu_1137871_p1.read());
    } else {
        grp_fu_1744_p0 = "XXXXXXXXXXXXXXXX";
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1744_p2() {
    grp_fu_1744_p2 = (!grp_fu_1744_p0.read().is_01() || !ap_const_lv25_DA.is_01())? sc_lv<25>(): sc_bigint<16>(grp_fu_1744_p0.read()) * sc_biguint<25>(ap_const_lv25_DA);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1746_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_1746_p0 =  (sc_lv<16>) (sext_ln1118_451_fu_1146326_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_1746_p0 =  (sc_lv<16>) (sext_ln1118_216_fu_1134810_p1.read());
    } else {
        grp_fu_1746_p0 = "XXXXXXXXXXXXXXXX";
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1746_p2() {
    grp_fu_1746_p2 = (!grp_fu_1746_p0.read().is_01() || !ap_const_lv23_2C.is_01())? sc_lv<23>(): sc_bigint<16>(grp_fu_1746_p0.read()) * sc_biguint<23>(ap_const_lv23_2C);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1752_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_1752_p0 =  (sc_lv<16>) (sext_ln1118_409_fu_1145257_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_1752_p0 =  (sc_lv<16>) (sext_ln1118_303_fu_1137871_p1.read());
    } else {
        grp_fu_1752_p0 = "XXXXXXXXXXXXXXXX";
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1752_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_1752_p1 =  (sc_lv<9>) (ap_const_lv24_79);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_1752_p1 =  (sc_lv<9>) (ap_const_lv25_1FFFF53);
    } else {
        grp_fu_1752_p1 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1752_p2() {
    grp_fu_1752_p2 = (!grp_fu_1752_p0.read().is_01() || !grp_fu_1752_p1.read().is_01())? sc_lv<25>(): sc_bigint<16>(grp_fu_1752_p0.read()) * sc_bigint<9>(grp_fu_1752_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1756_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_1756_p0 =  (sc_lv<16>) (sext_ln1118_349_reg_1149400.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_1756_p0 =  (sc_lv<16>) (sext_ln1118_201_fu_1134350_p1.read());
    } else {
        grp_fu_1756_p0 = "XXXXXXXXXXXXXXXX";
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1756_p2() {
    grp_fu_1756_p2 = (!grp_fu_1756_p0.read().is_01() || !ap_const_lv25_A4.is_01())? sc_lv<25>(): sc_bigint<16>(grp_fu_1756_p0.read()) * sc_biguint<25>(ap_const_lv25_A4);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1759_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_1759_p0 =  (sc_lv<16>) (sext_ln1118_452_fu_1146330_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_1759_p0 =  (sc_lv<16>) (sext_ln1118_34_fu_1128466_p1.read());
    } else {
        grp_fu_1759_p0 = "XXXXXXXXXXXXXXXX";
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1759_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_1759_p1 =  (sc_lv<9>) (ap_const_lv25_A7);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_1759_p1 =  (sc_lv<9>) (ap_const_lv24_59);
    } else {
        grp_fu_1759_p1 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1759_p2() {
    grp_fu_1759_p2 = (!grp_fu_1759_p0.read().is_01() || !grp_fu_1759_p1.read().is_01())? sc_lv<25>(): sc_bigint<16>(grp_fu_1759_p0.read()) * sc_biguint<9>(grp_fu_1759_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1764_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_1764_p0 =  (sc_lv<16>) (sext_ln1118_399_reg_1149496.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_1764_p0 =  (sc_lv<16>) (sext_ln1118_218_fu_1134821_p1.read());
    } else {
        grp_fu_1764_p0 = "XXXXXXXXXXXXXXXX";
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1764_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_1764_p1 =  (sc_lv<8>) (ap_const_lv23_3D);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_1764_p1 =  (sc_lv<8>) (ap_const_lv24_FFFF9D);
    } else {
        grp_fu_1764_p1 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1764_p2() {
    grp_fu_1764_p2 = (!grp_fu_1764_p0.read().is_01() || !grp_fu_1764_p1.read().is_01())? sc_lv<24>(): sc_bigint<16>(grp_fu_1764_p0.read()) * sc_bigint<8>(grp_fu_1764_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1766_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_1766_p0 =  (sc_lv<16>) (sext_ln1118_335_reg_1149330.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_1766_p0 =  (sc_lv<16>) (sext_ln1118_49_fu_1129030_p1.read());
    } else {
        grp_fu_1766_p0 = "XXXXXXXXXXXXXXXX";
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1766_p2() {
    grp_fu_1766_p2 = (!grp_fu_1766_p0.read().is_01() || !ap_const_lv26_125.is_01())? sc_lv<26>(): sc_bigint<16>(grp_fu_1766_p0.read()) * sc_biguint<26>(ap_const_lv26_125);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1773_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_1773_p0 =  (sc_lv<16>) (sext_ln1118_401_fu_1144906_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_1773_p0 =  (sc_lv<16>) (sext_ln1118_132_fu_1132048_p1.read());
    } else {
        grp_fu_1773_p0 = "XXXXXXXXXXXXXXXX";
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1773_p2() {
    grp_fu_1773_p2 = (!grp_fu_1773_p0.read().is_01() || !ap_const_lv25_1FFFF79.is_01())? sc_lv<25>(): sc_bigint<16>(grp_fu_1773_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF79);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1774_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_1774_p0 =  (sc_lv<16>) (sext_ln1118_450_fu_1146313_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_1774_p0 =  (sc_lv<16>) (sext_ln1118_133_fu_1132057_p1.read());
    } else {
        grp_fu_1774_p0 = "XXXXXXXXXXXXXXXX";
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1774_p2() {
    grp_fu_1774_p2 = (!grp_fu_1774_p0.read().is_01() || !ap_const_lv26_3FFFEE3.is_01())? sc_lv<26>(): sc_bigint<16>(grp_fu_1774_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFEE3);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1786_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_1786_p0 =  (sc_lv<16>) (sext_ln1118_424_fu_1145637_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_1786_p0 =  (sc_lv<16>) (sext_ln1118_302_fu_1137859_p1.read());
    } else {
        grp_fu_1786_p0 = "XXXXXXXXXXXXXXXX";
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1786_p2() {
    grp_fu_1786_p2 = (!grp_fu_1786_p0.read().is_01() || !ap_const_lv26_10A.is_01())? sc_lv<26>(): sc_bigint<16>(grp_fu_1786_p0.read()) * sc_biguint<26>(ap_const_lv26_10A);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1788_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_1788_p0 =  (sc_lv<16>) (sext_ln1118_452_fu_1146330_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_1788_p0 =  (sc_lv<16>) (sext_ln1118_303_fu_1137871_p1.read());
    } else {
        grp_fu_1788_p0 = "XXXXXXXXXXXXXXXX";
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1788_p2() {
    grp_fu_1788_p2 = (!grp_fu_1788_p0.read().is_01() || !ap_const_lv25_1FFFF2E.is_01())? sc_lv<25>(): sc_bigint<16>(grp_fu_1788_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF2E);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1792_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_1792_p0 =  (sc_lv<16>) (sext_ln1118_362_reg_1149442.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_1792_p0 =  (sc_lv<16>) (sext_ln1118_337_fu_1138984_p1.read());
    } else {
        grp_fu_1792_p0 = "XXXXXXXXXXXXXXXX";
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1792_p2() {
    grp_fu_1792_p2 = (!grp_fu_1792_p0.read().is_01() || !ap_const_lv25_D6.is_01())? sc_lv<25>(): sc_bigint<16>(grp_fu_1792_p0.read()) * sc_biguint<25>(ap_const_lv25_D6);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1793_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_1793_p0 =  (sc_lv<16>) (sext_ln1118_350_reg_1149414.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_1793_p0 =  (sc_lv<16>) (sext_ln1118_365_fu_1139638_p1.read());
    } else {
        grp_fu_1793_p0 = "XXXXXXXXXXXXXXXX";
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1793_p2() {
    grp_fu_1793_p2 = (!grp_fu_1793_p0.read().is_01() || !ap_const_lv24_FFFF83.is_01())? sc_lv<24>(): sc_bigint<16>(grp_fu_1793_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF83);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1794_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_1794_p0 =  (sc_lv<16>) (sext_ln1118_439_fu_1145984_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_1794_p0 =  (sc_lv<16>) (sext_ln1118_238_fu_1135748_p1.read());
    } else {
        grp_fu_1794_p0 = "XXXXXXXXXXXXXXXX";
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1794_p2() {
    grp_fu_1794_p2 = (!grp_fu_1794_p0.read().is_01() || !ap_const_lv21_D.is_01())? sc_lv<21>(): sc_bigint<16>(grp_fu_1794_p0.read()) * sc_biguint<21>(ap_const_lv21_D);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1797_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_1797_p0 =  (sc_lv<16>) (sext_ln1118_350_reg_1149414.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_1797_p0 =  (sc_lv<16>) (sext_ln1118_322_fu_1138496_p1.read());
    } else {
        grp_fu_1797_p0 = "XXXXXXXXXXXXXXXX";
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1797_p2() {
    grp_fu_1797_p2 = (!grp_fu_1797_p0.read().is_01() || !ap_const_lv24_6A.is_01())? sc_lv<24>(): sc_bigint<16>(grp_fu_1797_p0.read()) * sc_biguint<24>(ap_const_lv24_6A);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1802_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_1802_p0 =  (sc_lv<16>) (sext_ln1118_425_fu_1145647_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_1802_p0 =  (sc_lv<16>) (sext_ln1118_20_fu_1127949_p1.read());
    } else {
        grp_fu_1802_p0 = "XXXXXXXXXXXXXXXX";
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1802_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_1802_p1 =  (sc_lv<10>) (ap_const_lv25_D1);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_1802_p1 =  (sc_lv<10>) (ap_const_lv26_107);
    } else {
        grp_fu_1802_p1 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1802_p2() {
    grp_fu_1802_p2 = (!grp_fu_1802_p0.read().is_01() || !grp_fu_1802_p1.read().is_01())? sc_lv<26>(): sc_bigint<16>(grp_fu_1802_p0.read()) * sc_biguint<10>(grp_fu_1802_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1803_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_1803_p0 =  (sc_lv<16>) (sext_ln1118_409_fu_1145257_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_1803_p0 =  (sc_lv<16>) (sext_ln1118_304_fu_1137883_p1.read());
    } else {
        grp_fu_1803_p0 = "XXXXXXXXXXXXXXXX";
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1803_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_1803_p1 =  (sc_lv<9>) (ap_const_lv24_43);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_1803_p1 =  (sc_lv<9>) (ap_const_lv24_FFFFAE);
    } else {
        grp_fu_1803_p1 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1803_p2() {
    grp_fu_1803_p2 = (!grp_fu_1803_p0.read().is_01() || !grp_fu_1803_p1.read().is_01())? sc_lv<24>(): sc_bigint<16>(grp_fu_1803_p0.read()) * sc_bigint<9>(grp_fu_1803_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1804_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_1804_p0 =  (sc_lv<16>) (sext_ln1118_349_reg_1149400.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_1804_p0 =  (sc_lv<16>) (sext_ln1118_80_fu_1130059_p1.read());
    } else {
        grp_fu_1804_p0 = "XXXXXXXXXXXXXXXX";
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1804_p2() {
    grp_fu_1804_p2 = (!grp_fu_1804_p0.read().is_01() || !ap_const_lv25_1FFFF46.is_01())? sc_lv<25>(): sc_bigint<16>(grp_fu_1804_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF46);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1806_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_1806_p0 =  (sc_lv<16>) (sext_ln1118_401_fu_1144906_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_1806_p0 =  (sc_lv<16>) (sext_ln1118_80_fu_1130059_p1.read());
    } else {
        grp_fu_1806_p0 = "XXXXXXXXXXXXXXXX";
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1806_p2() {
    grp_fu_1806_p2 = (!grp_fu_1806_p0.read().is_01() || !ap_const_lv25_E3.is_01())? sc_lv<25>(): sc_bigint<16>(grp_fu_1806_p0.read()) * sc_biguint<25>(ap_const_lv25_E3);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1812_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_1812_p0 =  (sc_lv<16>) (sext_ln1118_399_reg_1149496.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_1812_p0 =  (sc_lv<16>) (sext_ln1118_99_fu_1130555_p1.read());
    } else {
        grp_fu_1812_p0 = "XXXXXXXXXXXXXXXX";
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1812_p2() {
    grp_fu_1812_p2 = (!grp_fu_1812_p0.read().is_01() || !ap_const_lv23_26.is_01())? sc_lv<23>(): sc_bigint<16>(grp_fu_1812_p0.read()) * sc_biguint<23>(ap_const_lv23_26);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1815_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_1815_p0 =  (sc_lv<16>) (sext_ln1118_362_reg_1149442.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_1815_p0 =  (sc_lv<16>) (sext_ln1118_286_fu_1137307_p1.read());
    } else {
        grp_fu_1815_p0 = "XXXXXXXXXXXXXXXX";
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1815_p2() {
    grp_fu_1815_p2 = (!grp_fu_1815_p0.read().is_01() || !ap_const_lv25_F6.is_01())? sc_lv<25>(): sc_bigint<16>(grp_fu_1815_p0.read()) * sc_biguint<25>(ap_const_lv25_F6);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1816_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_1816_p0 =  (sc_lv<16>) (sext_ln1118_450_fu_1146313_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_1816_p0 =  (sc_lv<16>) (sext_ln1118_251_fu_1136247_p1.read());
    } else {
        grp_fu_1816_p0 = "XXXXXXXXXXXXXXXX";
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1816_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_1816_p1 =  (sc_lv<11>) (ap_const_lv26_3FFFD88);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_1816_p1 =  (sc_lv<11>) (ap_const_lv26_116);
    } else {
        grp_fu_1816_p1 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1816_p2() {
    grp_fu_1816_p2 = (!grp_fu_1816_p0.read().is_01() || !grp_fu_1816_p1.read().is_01())? sc_lv<26>(): sc_bigint<16>(grp_fu_1816_p0.read()) * sc_bigint<11>(grp_fu_1816_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1819_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_1819_p0 =  (sc_lv<16>) (sext_ln1118_401_fu_1144906_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_1819_p0 =  (sc_lv<16>) (sext_ln1118_226_fu_1135263_p1.read());
    } else {
        grp_fu_1819_p0 = "XXXXXXXXXXXXXXXX";
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1819_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_1819_p1 =  (sc_lv<11>) (ap_const_lv25_1FFFF63);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_1819_p1 =  (sc_lv<11>) (ap_const_lv26_19E);
    } else {
        grp_fu_1819_p1 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1819_p2() {
    grp_fu_1819_p2 = (!grp_fu_1819_p0.read().is_01() || !grp_fu_1819_p1.read().is_01())? sc_lv<26>(): sc_bigint<16>(grp_fu_1819_p0.read()) * sc_bigint<11>(grp_fu_1819_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1827_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_1827_p0 =  (sc_lv<16>) (sext_ln1118_351_fu_1144002_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_1827_p0 =  (sc_lv<16>) (sext_ln708_2_fu_1131572_p1.read());
    } else {
        grp_fu_1827_p0 = "XXXXXXXXXXXXXXXX";
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1827_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_1827_p1 =  (sc_lv<11>) (ap_const_lv26_12A);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_1827_p1 =  (sc_lv<11>) (ap_const_lv25_1FFFF41);
    } else {
        grp_fu_1827_p1 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1827_p2() {
    grp_fu_1827_p2 = (!grp_fu_1827_p0.read().is_01() || !grp_fu_1827_p1.read().is_01())? sc_lv<26>(): sc_bigint<16>(grp_fu_1827_p0.read()) * sc_bigint<11>(grp_fu_1827_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1831_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_1831_p0 =  (sc_lv<16>) (sext_ln1118_366_fu_1144181_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_1831_p0 =  (sc_lv<16>) (sext_ln708_5_fu_1131596_p1.read());
    } else {
        grp_fu_1831_p0 = "XXXXXXXXXXXXXXXX";
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1831_p2() {
    grp_fu_1831_p2 = (!grp_fu_1831_p0.read().is_01() || !ap_const_lv23_31.is_01())? sc_lv<23>(): sc_bigint<16>(grp_fu_1831_p0.read()) * sc_biguint<23>(ap_const_lv23_31);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1837_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_1837_p0 =  (sc_lv<16>) (sext_ln1118_423_fu_1145629_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_1837_p0 =  (sc_lv<16>) (sext_ln1118_253_fu_1136265_p1.read());
    } else {
        grp_fu_1837_p0 = "XXXXXXXXXXXXXXXX";
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1837_p2() {
    grp_fu_1837_p2 = (!grp_fu_1837_p0.read().is_01() || !ap_const_lv24_5D.is_01())? sc_lv<24>(): sc_bigint<16>(grp_fu_1837_p0.read()) * sc_biguint<24>(ap_const_lv24_5D);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1838_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_1838_p0 =  (sc_lv<16>) (sext_ln1118_437_fu_1145963_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_1838_p0 =  (sc_lv<16>) (sext_ln1118_114_fu_1131069_p1.read());
    } else {
        grp_fu_1838_p0 = "XXXXXXXXXXXXXXXX";
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1838_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_1838_p1 =  (sc_lv<11>) (ap_const_lv26_3FFFC32);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_1838_p1 =  (sc_lv<11>) (ap_const_lv26_3FFFDE6);
    } else {
        grp_fu_1838_p1 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1838_p2() {
    grp_fu_1838_p2 = (!grp_fu_1838_p0.read().is_01() || !grp_fu_1838_p1.read().is_01())? sc_lv<26>(): sc_bigint<16>(grp_fu_1838_p0.read()) * sc_bigint<11>(grp_fu_1838_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1839_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_1839_p0 =  (sc_lv<16>) (sext_ln1118_437_fu_1145963_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_1839_p0 =  (sc_lv<16>) (sext_ln1118_fu_1127502_p1.read());
    } else {
        grp_fu_1839_p0 = "XXXXXXXXXXXXXXXX";
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1839_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_1839_p1 =  (sc_lv<11>) (ap_const_lv26_3FFFD22);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_1839_p1 =  (sc_lv<11>) (ap_const_lv26_157);
    } else {
        grp_fu_1839_p1 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1839_p2() {
    grp_fu_1839_p2 = (!grp_fu_1839_p0.read().is_01() || !grp_fu_1839_p1.read().is_01())? sc_lv<26>(): sc_bigint<16>(grp_fu_1839_p0.read()) * sc_bigint<11>(grp_fu_1839_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1842_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_1842_p0 =  (sc_lv<16>) (sext_ln1118_423_fu_1145629_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_1842_p0 =  (sc_lv<16>) (sext_ln1118_66_fu_1129555_p1.read());
    } else {
        grp_fu_1842_p0 = "XXXXXXXXXXXXXXXX";
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_grp_fu_1842_p2() {
    grp_fu_1842_p2 = (!grp_fu_1842_p0.read().is_01() || !ap_const_lv24_7A.is_01())? sc_lv<24>(): sc_bigint<16>(grp_fu_1842_p0.read()) * sc_biguint<24>(ap_const_lv24_7A);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_100_fu_1551_p0() {
    mul_ln1118_100_fu_1551_p0 =  (sc_lv<16>) (sext_ln1118_64_fu_1129533_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_100_fu_1551_p2() {
    mul_ln1118_100_fu_1551_p2 = (!mul_ln1118_100_fu_1551_p0.read().is_01() || !ap_const_lv25_AA.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_100_fu_1551_p0.read()) * sc_biguint<25>(ap_const_lv25_AA);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_101_fu_1768_p0() {
    mul_ln1118_101_fu_1768_p0 =  (sc_lv<16>) (sext_ln1118_64_fu_1129533_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_101_fu_1768_p2() {
    mul_ln1118_101_fu_1768_p2 = (!mul_ln1118_101_fu_1768_p0.read().is_01() || !ap_const_lv25_CA.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_101_fu_1768_p0.read()) * sc_biguint<25>(ap_const_lv25_CA);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_102_fu_1370_p0() {
    mul_ln1118_102_fu_1370_p0 =  (sc_lv<16>) (sext_ln1118_84_fu_1130091_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_102_fu_1370_p2() {
    mul_ln1118_102_fu_1370_p2 = (!mul_ln1118_102_fu_1370_p0.read().is_01() || !ap_const_lv24_FFFF95.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_102_fu_1370_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF95);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_103_fu_1684_p0() {
    mul_ln1118_103_fu_1684_p0 = sext_ln1118_82_fu_1130080_p0.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_103_fu_1684_p2() {
    mul_ln1118_103_fu_1684_p2 = (!mul_ln1118_103_fu_1684_p0.read().is_01() || !ap_const_lv22_3FFFE5.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_103_fu_1684_p0.read()) * sc_bigint<22>(ap_const_lv22_3FFFE5);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_105_fu_1629_p0() {
    mul_ln1118_105_fu_1629_p0 =  (sc_lv<16>) (sext_ln1118_80_fu_1130059_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_105_fu_1629_p2() {
    mul_ln1118_105_fu_1629_p2 = (!mul_ln1118_105_fu_1629_p0.read().is_01() || !ap_const_lv25_1FFFF14.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_105_fu_1629_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF14);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_106_fu_1801_p0() {
    mul_ln1118_106_fu_1801_p0 =  (sc_lv<16>) (sext_ln1118_80_fu_1130059_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_106_fu_1801_p2() {
    mul_ln1118_106_fu_1801_p2 = (!mul_ln1118_106_fu_1801_p0.read().is_01() || !ap_const_lv25_1FFFF13.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_106_fu_1801_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF13);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_107_fu_1460_p0() {
    mul_ln1118_107_fu_1460_p0 = sext_ln1118_83_fu_1130085_p0.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_107_fu_1460_p2() {
    mul_ln1118_107_fu_1460_p2 = (!mul_ln1118_107_fu_1460_p0.read().is_01() || !ap_const_lv23_7FFFCE.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_107_fu_1460_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFCE);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_10_fu_1734_p0() {
    mul_ln1118_10_fu_1734_p0 = sext_ln1118_7_fu_1127527_p0.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_10_fu_1734_p2() {
    mul_ln1118_10_fu_1734_p2 = (!mul_ln1118_10_fu_1734_p0.read().is_01() || !ap_const_lv24_45.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_10_fu_1734_p0.read()) * sc_biguint<24>(ap_const_lv24_45);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_110_fu_1691_p0() {
    mul_ln1118_110_fu_1691_p0 =  (sc_lv<16>) (sext_ln1118_80_fu_1130059_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_110_fu_1691_p2() {
    mul_ln1118_110_fu_1691_p2 = (!mul_ln1118_110_fu_1691_p0.read().is_01() || !ap_const_lv25_B9.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_110_fu_1691_p0.read()) * sc_biguint<25>(ap_const_lv25_B9);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_112_fu_1522_p0() {
    mul_ln1118_112_fu_1522_p0 =  (sc_lv<16>) (sext_ln1118_81_fu_1130069_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_112_fu_1522_p2() {
    mul_ln1118_112_fu_1522_p2 = (!mul_ln1118_112_fu_1522_p0.read().is_01() || !ap_const_lv26_3FFFEBA.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_112_fu_1522_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFEBA);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_113_fu_1352_p0() {
    mul_ln1118_113_fu_1352_p0 =  (sc_lv<16>) (sext_ln1118_81_fu_1130069_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_113_fu_1352_p2() {
    mul_ln1118_113_fu_1352_p2 = (!mul_ln1118_113_fu_1352_p0.read().is_01() || !ap_const_lv26_185.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_113_fu_1352_p0.read()) * sc_biguint<26>(ap_const_lv26_185);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_114_fu_1749_p0() {
    mul_ln1118_114_fu_1749_p0 =  (sc_lv<16>) (sext_ln1118_84_fu_1130091_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_114_fu_1749_p2() {
    mul_ln1118_114_fu_1749_p2 = (!mul_ln1118_114_fu_1749_p0.read().is_01() || !ap_const_lv24_FFFF85.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_114_fu_1749_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF85);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_116_fu_1748_p0() {
    mul_ln1118_116_fu_1748_p0 =  (sc_lv<16>) (sext_ln1118_81_fu_1130069_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_116_fu_1748_p2() {
    mul_ln1118_116_fu_1748_p2 = (!mul_ln1118_116_fu_1748_p0.read().is_01() || !ap_const_lv26_3FFFE7E.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_116_fu_1748_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFE7E);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_118_fu_1591_p0() {
    mul_ln1118_118_fu_1591_p0 =  (sc_lv<16>) (sext_ln1118_81_fu_1130069_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_118_fu_1591_p2() {
    mul_ln1118_118_fu_1591_p2 = (!mul_ln1118_118_fu_1591_p0.read().is_01() || !ap_const_lv26_3FFFEF1.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_118_fu_1591_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFEF1);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_119_fu_1457_p0() {
    mul_ln1118_119_fu_1457_p0 =  (sc_lv<16>) (sext_ln1118_80_fu_1130059_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_119_fu_1457_p2() {
    mul_ln1118_119_fu_1457_p2 = (!mul_ln1118_119_fu_1457_p0.read().is_01() || !ap_const_lv25_1FFFF4F.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_119_fu_1457_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF4F);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_11_fu_1708_p0() {
    mul_ln1118_11_fu_1708_p0 =  (sc_lv<16>) (sext_ln1118_fu_1127502_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_11_fu_1708_p2() {
    mul_ln1118_11_fu_1708_p2 = (!mul_ln1118_11_fu_1708_p0.read().is_01() || !ap_const_lv26_10F.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_11_fu_1708_p0.read()) * sc_biguint<26>(ap_const_lv26_10F);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_121_fu_1579_p0() {
    mul_ln1118_121_fu_1579_p0 =  (sc_lv<16>) (sext_ln1118_98_fu_1130547_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_121_fu_1579_p2() {
    mul_ln1118_121_fu_1579_p2 = (!mul_ln1118_121_fu_1579_p0.read().is_01() || !ap_const_lv24_55.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_121_fu_1579_p0.read()) * sc_biguint<24>(ap_const_lv24_55);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_123_fu_1379_p0() {
    mul_ln1118_123_fu_1379_p0 =  (sc_lv<16>) (sext_ln1118_98_fu_1130547_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_123_fu_1379_p2() {
    mul_ln1118_123_fu_1379_p2 = (!mul_ln1118_123_fu_1379_p0.read().is_01() || !ap_const_lv24_57.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_123_fu_1379_p0.read()) * sc_biguint<24>(ap_const_lv24_57);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_126_fu_1841_p0() {
    mul_ln1118_126_fu_1841_p0 =  (sc_lv<16>) (sext_ln1118_96_fu_1130532_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_126_fu_1841_p2() {
    mul_ln1118_126_fu_1841_p2 = (!mul_ln1118_126_fu_1841_p0.read().is_01() || !ap_const_lv26_3FFFEFD.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_126_fu_1841_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFEFD);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_127_fu_1410_p0() {
    mul_ln1118_127_fu_1410_p0 =  (sc_lv<16>) (sext_ln1118_96_fu_1130532_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_127_fu_1410_p2() {
    mul_ln1118_127_fu_1410_p2 = (!mul_ln1118_127_fu_1410_p0.read().is_01() || !ap_const_lv26_3FFFD84.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_127_fu_1410_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFD84);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_128_fu_1600_p0() {
    mul_ln1118_128_fu_1600_p0 =  (sc_lv<16>) (sext_ln1118_98_fu_1130547_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_128_fu_1600_p2() {
    mul_ln1118_128_fu_1600_p2 = (!mul_ln1118_128_fu_1600_p0.read().is_01() || !ap_const_lv24_68.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_128_fu_1600_p0.read()) * sc_biguint<24>(ap_const_lv24_68);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_129_fu_1736_p0() {
    mul_ln1118_129_fu_1736_p0 =  (sc_lv<16>) (sext_ln1118_95_fu_1130523_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_129_fu_1736_p2() {
    mul_ln1118_129_fu_1736_p2 = (!mul_ln1118_129_fu_1736_p0.read().is_01() || !ap_const_lv25_1FFFF33.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_129_fu_1736_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF33);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_12_fu_1628_p0() {
    mul_ln1118_12_fu_1628_p0 =  (sc_lv<16>) (sext_ln1118_fu_1127502_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_12_fu_1628_p2() {
    mul_ln1118_12_fu_1628_p2 = (!mul_ln1118_12_fu_1628_p0.read().is_01() || !ap_const_lv26_1D4.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_12_fu_1628_p0.read()) * sc_biguint<26>(ap_const_lv26_1D4);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_130_fu_1467_p0() {
    mul_ln1118_130_fu_1467_p0 = sext_ln1118_100_fu_1130560_p0.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_130_fu_1467_p2() {
    mul_ln1118_130_fu_1467_p2 = (!mul_ln1118_130_fu_1467_p0.read().is_01() || !ap_const_lv21_1FFFF3.is_01())? sc_lv<21>(): sc_bigint<16>(mul_ln1118_130_fu_1467_p0.read()) * sc_bigint<21>(ap_const_lv21_1FFFF3);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_131_fu_1403_p0() {
    mul_ln1118_131_fu_1403_p0 =  (sc_lv<16>) (sext_ln1118_95_fu_1130523_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_131_fu_1403_p2() {
    mul_ln1118_131_fu_1403_p2 = (!mul_ln1118_131_fu_1403_p0.read().is_01() || !ap_const_lv25_87.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_131_fu_1403_p0.read()) * sc_biguint<25>(ap_const_lv25_87);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_132_fu_1689_p0() {
    mul_ln1118_132_fu_1689_p0 =  (sc_lv<16>) (sext_ln1118_95_fu_1130523_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_132_fu_1689_p2() {
    mul_ln1118_132_fu_1689_p2 = (!mul_ln1118_132_fu_1689_p0.read().is_01() || !ap_const_lv25_D9.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_132_fu_1689_p0.read()) * sc_biguint<25>(ap_const_lv25_D9);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_133_fu_1462_p0() {
    mul_ln1118_133_fu_1462_p0 =  (sc_lv<16>) (sext_ln1118_96_fu_1130532_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_133_fu_1462_p2() {
    mul_ln1118_133_fu_1462_p2 = (!mul_ln1118_133_fu_1462_p0.read().is_01() || !ap_const_lv26_3FFFCF9.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_133_fu_1462_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFCF9);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_135_fu_1692_p0() {
    mul_ln1118_135_fu_1692_p0 =  (sc_lv<16>) (sext_ln1118_96_fu_1130532_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_135_fu_1692_p2() {
    mul_ln1118_135_fu_1692_p2 = (!mul_ln1118_135_fu_1692_p0.read().is_01() || !ap_const_lv26_3FFFEF1.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_135_fu_1692_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFEF1);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_137_fu_1523_p0() {
    mul_ln1118_137_fu_1523_p0 =  (sc_lv<16>) (sext_ln1118_95_fu_1130523_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_137_fu_1523_p2() {
    mul_ln1118_137_fu_1523_p2 = (!mul_ln1118_137_fu_1523_p0.read().is_01() || !ap_const_lv25_1FFFF0C.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_137_fu_1523_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF0C);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_138_fu_1353_p0() {
    mul_ln1118_138_fu_1353_p0 =  (sc_lv<16>) (sext_ln1118_96_fu_1130532_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_138_fu_1353_p2() {
    mul_ln1118_138_fu_1353_p2 = (!mul_ln1118_138_fu_1353_p0.read().is_01() || !ap_const_lv26_3FFFD44.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_138_fu_1353_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFD44);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_139_fu_1525_p0() {
    mul_ln1118_139_fu_1525_p0 =  (sc_lv<16>) (sext_ln1118_96_fu_1130532_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_139_fu_1525_p2() {
    mul_ln1118_139_fu_1525_p2 = (!mul_ln1118_139_fu_1525_p0.read().is_01() || !ap_const_lv26_3FFFE77.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_139_fu_1525_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFE77);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_13_fu_1359_p0() {
    mul_ln1118_13_fu_1359_p0 =  (sc_lv<16>) (sext_ln1118_fu_1127502_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_13_fu_1359_p2() {
    mul_ln1118_13_fu_1359_p2 = (!mul_ln1118_13_fu_1359_p0.read().is_01() || !ap_const_lv26_18F.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_13_fu_1359_p0.read()) * sc_biguint<26>(ap_const_lv26_18F);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_140_fu_1811_p0() {
    mul_ln1118_140_fu_1811_p0 =  (sc_lv<16>) (sext_ln1118_114_fu_1131069_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_140_fu_1811_p2() {
    mul_ln1118_140_fu_1811_p2 = (!mul_ln1118_140_fu_1811_p0.read().is_01() || !ap_const_lv26_105.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_140_fu_1811_p0.read()) * sc_biguint<26>(ap_const_lv26_105);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_141_fu_1356_p0() {
    mul_ln1118_141_fu_1356_p0 =  (sc_lv<16>) (sext_ln1118_114_fu_1131069_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_141_fu_1356_p2() {
    mul_ln1118_141_fu_1356_p2 = (!mul_ln1118_141_fu_1356_p0.read().is_01() || !ap_const_lv26_3FFFD20.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_141_fu_1356_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFD20);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_142_fu_1528_p0() {
    mul_ln1118_142_fu_1528_p0 =  (sc_lv<16>) (sext_ln1118_113_fu_1131060_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_142_fu_1528_p2() {
    mul_ln1118_142_fu_1528_p2 = (!mul_ln1118_142_fu_1528_p0.read().is_01() || !ap_const_lv25_B4.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_142_fu_1528_p0.read()) * sc_biguint<25>(ap_const_lv25_B4);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_143_fu_1367_p0() {
    mul_ln1118_143_fu_1367_p0 =  (sc_lv<16>) (sext_ln1118_113_fu_1131060_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_143_fu_1367_p2() {
    mul_ln1118_143_fu_1367_p2 = (!mul_ln1118_143_fu_1367_p0.read().is_01() || !ap_const_lv25_1FFFF06.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_143_fu_1367_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF06);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_145_fu_1639_p0() {
    mul_ln1118_145_fu_1639_p0 =  (sc_lv<16>) (sext_ln1118_114_fu_1131069_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_145_fu_1639_p2() {
    mul_ln1118_145_fu_1639_p2 = (!mul_ln1118_145_fu_1639_p0.read().is_01() || !ap_const_lv26_3FFFD71.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_145_fu_1639_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFD71);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_146_fu_1694_p0() {
    mul_ln1118_146_fu_1694_p0 =  (sc_lv<16>) (sext_ln1118_116_fu_1131087_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_146_fu_1694_p2() {
    mul_ln1118_146_fu_1694_p2 = (!mul_ln1118_146_fu_1694_p0.read().is_01() || !ap_const_lv23_37.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_146_fu_1694_p0.read()) * sc_biguint<23>(ap_const_lv23_37);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_148_fu_1399_p0() {
    mul_ln1118_148_fu_1399_p0 =  (sc_lv<16>) (sext_ln1118_116_fu_1131087_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_148_fu_1399_p2() {
    mul_ln1118_148_fu_1399_p2 = (!mul_ln1118_148_fu_1399_p0.read().is_01() || !ap_const_lv23_7FFFD4.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_148_fu_1399_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFD4);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_149_fu_1535_p0() {
    mul_ln1118_149_fu_1535_p0 =  (sc_lv<16>) (sext_ln1118_114_fu_1131069_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_149_fu_1535_p2() {
    mul_ln1118_149_fu_1535_p2 = (!mul_ln1118_149_fu_1535_p0.read().is_01() || !ap_const_lv26_3FFFCD9.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_149_fu_1535_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFCD9);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_14_fu_1360_p0() {
    mul_ln1118_14_fu_1360_p0 =  (sc_lv<16>) (sext_ln1118_fu_1127502_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_14_fu_1360_p2() {
    mul_ln1118_14_fu_1360_p2 = (!mul_ln1118_14_fu_1360_p0.read().is_01() || !ap_const_lv26_11B.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_14_fu_1360_p0.read()) * sc_biguint<26>(ap_const_lv26_11B);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_151_fu_1456_p0() {
    mul_ln1118_151_fu_1456_p0 =  (sc_lv<16>) (sext_ln1118_112_fu_1131050_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_151_fu_1456_p2() {
    mul_ln1118_151_fu_1456_p2 = (!mul_ln1118_151_fu_1456_p0.read().is_01() || !ap_const_lv24_46.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_151_fu_1456_p0.read()) * sc_biguint<24>(ap_const_lv24_46);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_152_fu_1376_p0() {
    mul_ln1118_152_fu_1376_p0 =  (sc_lv<16>) (sext_ln1118_113_fu_1131060_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_152_fu_1376_p2() {
    mul_ln1118_152_fu_1376_p2 = (!mul_ln1118_152_fu_1376_p0.read().is_01() || !ap_const_lv25_FA.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_152_fu_1376_p0.read()) * sc_biguint<25>(ap_const_lv25_FA);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_154_fu_1702_p0() {
    mul_ln1118_154_fu_1702_p0 =  (sc_lv<16>) (sext_ln1118_112_fu_1131050_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_154_fu_1702_p2() {
    mul_ln1118_154_fu_1702_p2 = (!mul_ln1118_154_fu_1702_p0.read().is_01() || !ap_const_lv24_FFFFAF.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_154_fu_1702_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFAF);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_156_fu_1650_p0() {
    mul_ln1118_156_fu_1650_p0 =  (sc_lv<16>) (sext_ln1118_112_fu_1131050_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_156_fu_1650_p2() {
    mul_ln1118_156_fu_1650_p2 = (!mul_ln1118_156_fu_1650_p0.read().is_01() || !ap_const_lv24_57.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_156_fu_1650_p0.read()) * sc_biguint<24>(ap_const_lv24_57);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_157_fu_1408_p0() {
    mul_ln1118_157_fu_1408_p0 = sext_ln1118_115_fu_1131082_p0.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_157_fu_1408_p2() {
    mul_ln1118_157_fu_1408_p2 = (!mul_ln1118_157_fu_1408_p0.read().is_01() || !ap_const_lv21_1FFFF3.is_01())? sc_lv<21>(): sc_bigint<16>(mul_ln1118_157_fu_1408_p0.read()) * sc_bigint<21>(ap_const_lv21_1FFFF3);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_159_fu_1479_p0() {
    mul_ln1118_159_fu_1479_p0 =  (sc_lv<16>) (sext_ln1118_113_fu_1131060_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_159_fu_1479_p2() {
    mul_ln1118_159_fu_1479_p2 = (!mul_ln1118_159_fu_1479_p0.read().is_01() || !ap_const_lv25_1FFFF6A.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_159_fu_1479_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF6A);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_15_fu_1631_p0() {
    mul_ln1118_15_fu_1631_p0 =  (sc_lv<16>) (sext_ln1118_fu_1127502_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_15_fu_1631_p2() {
    mul_ln1118_15_fu_1631_p2 = (!mul_ln1118_15_fu_1631_p0.read().is_01() || !ap_const_lv26_3FFFECF.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_15_fu_1631_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFECF);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_160_fu_1537_p0() {
    mul_ln1118_160_fu_1537_p0 =  (sc_lv<16>) (sext_ln1118_112_fu_1131050_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_160_fu_1537_p2() {
    mul_ln1118_160_fu_1537_p2 = (!mul_ln1118_160_fu_1537_p0.read().is_01() || !ap_const_lv24_61.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_160_fu_1537_p0.read()) * sc_biguint<24>(ap_const_lv24_61);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_161_fu_1481_p0() {
    mul_ln1118_161_fu_1481_p0 =  (sc_lv<16>) (sext_ln1118_116_fu_1131087_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_161_fu_1481_p2() {
    mul_ln1118_161_fu_1481_p2 = (!mul_ln1118_161_fu_1481_p0.read().is_01() || !ap_const_lv23_7FFFCB.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_161_fu_1481_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFCB);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_162_fu_1368_p0() {
    mul_ln1118_162_fu_1368_p0 =  (sc_lv<16>) (sext_ln1118_112_fu_1131050_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_162_fu_1368_p2() {
    mul_ln1118_162_fu_1368_p2 = (!mul_ln1118_162_fu_1368_p0.read().is_01() || !ap_const_lv24_73.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_162_fu_1368_p0.read()) * sc_biguint<24>(ap_const_lv24_73);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_163_fu_1426_p0() {
    mul_ln1118_163_fu_1426_p0 =  (sc_lv<16>) (sext_ln1118_114_fu_1131069_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_163_fu_1426_p2() {
    mul_ln1118_163_fu_1426_p2 = (!mul_ln1118_163_fu_1426_p0.read().is_01() || !ap_const_lv26_166.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_163_fu_1426_p0.read()) * sc_biguint<26>(ap_const_lv26_166);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_166_fu_1372_p0() {
    mul_ln1118_166_fu_1372_p0 =  (sc_lv<16>) (sext_ln708_1_fu_1131561_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_166_fu_1372_p2() {
    mul_ln1118_166_fu_1372_p2 = (!mul_ln1118_166_fu_1372_p0.read().is_01() || !ap_const_lv26_129.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_166_fu_1372_p0.read()) * sc_biguint<26>(ap_const_lv26_129);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_167_fu_1772_p0() {
    mul_ln1118_167_fu_1772_p0 =  (sc_lv<16>) (sext_ln708_2_fu_1131572_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_167_fu_1772_p2() {
    mul_ln1118_167_fu_1772_p2 = (!mul_ln1118_167_fu_1772_p0.read().is_01() || !ap_const_lv25_1FFFF58.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_167_fu_1772_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF58);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_168_fu_1417_p0() {
    mul_ln1118_168_fu_1417_p0 =  (sc_lv<16>) (sext_ln708_2_fu_1131572_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_168_fu_1417_p2() {
    mul_ln1118_168_fu_1417_p2 = (!mul_ln1118_168_fu_1417_p0.read().is_01() || !ap_const_lv25_8B.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_168_fu_1417_p0.read()) * sc_biguint<25>(ap_const_lv25_8B);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_169_fu_1418_p0() {
    mul_ln1118_169_fu_1418_p0 =  (sc_lv<16>) (sext_ln708_2_fu_1131572_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_169_fu_1418_p2() {
    mul_ln1118_169_fu_1418_p2 = (!mul_ln1118_169_fu_1418_p0.read().is_01() || !ap_const_lv25_F9.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_169_fu_1418_p0.read()) * sc_biguint<25>(ap_const_lv25_F9);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_16_fu_1740_p0() {
    mul_ln1118_16_fu_1740_p0 =  (sc_lv<16>) (sext_ln1118_5_fu_1127514_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_16_fu_1740_p2() {
    mul_ln1118_16_fu_1740_p2 = (!mul_ln1118_16_fu_1740_p0.read().is_01() || !ap_const_lv25_C4.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_16_fu_1740_p0.read()) * sc_biguint<25>(ap_const_lv25_C4);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_170_fu_1416_p0() {
    mul_ln1118_170_fu_1416_p0 = sext_ln708_5_fu_1131596_p0.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_170_fu_1416_p2() {
    mul_ln1118_170_fu_1416_p2 = (!mul_ln1118_170_fu_1416_p0.read().is_01() || !ap_const_lv23_7FFFCE.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_170_fu_1416_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFCE);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_171_fu_1606_p0() {
    mul_ln1118_171_fu_1606_p0 =  (sc_lv<16>) (sext_ln708_1_fu_1131561_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_171_fu_1606_p2() {
    mul_ln1118_171_fu_1606_p2 = (!mul_ln1118_171_fu_1606_p0.read().is_01() || !ap_const_lv26_3FFFEA9.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_171_fu_1606_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFEA9);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_172_fu_1391_p0() {
    mul_ln1118_172_fu_1391_p0 =  (sc_lv<16>) (sext_ln708_2_fu_1131572_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_172_fu_1391_p2() {
    mul_ln1118_172_fu_1391_p2 = (!mul_ln1118_172_fu_1391_p0.read().is_01() || !ap_const_lv25_8F.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_172_fu_1391_p0.read()) * sc_biguint<25>(ap_const_lv25_8F);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_173_fu_1716_p0() {
    mul_ln1118_173_fu_1716_p0 =  (sc_lv<16>) (sext_ln708_1_fu_1131561_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_173_fu_1716_p2() {
    mul_ln1118_173_fu_1716_p2 = (!mul_ln1118_173_fu_1716_p0.read().is_01() || !ap_const_lv26_3FFFEEF.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_173_fu_1716_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFEEF);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_174_fu_1771_p0() {
    mul_ln1118_174_fu_1771_p0 =  (sc_lv<16>) (sext_ln708_fu_1131554_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_174_fu_1771_p2() {
    mul_ln1118_174_fu_1771_p2 = (!mul_ln1118_174_fu_1771_p0.read().is_01() || !ap_const_lv22_19.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_174_fu_1771_p0.read()) * sc_biguint<22>(ap_const_lv22_19);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_175_fu_1529_p0() {
    mul_ln1118_175_fu_1529_p0 =  (sc_lv<16>) (sext_ln708_1_fu_1131561_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_175_fu_1529_p2() {
    mul_ln1118_175_fu_1529_p2 = (!mul_ln1118_175_fu_1529_p0.read().is_01() || !ap_const_lv26_14C.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_175_fu_1529_p0.read()) * sc_biguint<26>(ap_const_lv26_14C);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_176_fu_1422_p0() {
    mul_ln1118_176_fu_1422_p0 =  (sc_lv<16>) (sext_ln708_fu_1131554_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_176_fu_1422_p2() {
    mul_ln1118_176_fu_1422_p2 = (!mul_ln1118_176_fu_1422_p0.read().is_01() || !ap_const_lv22_1A.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_176_fu_1422_p0.read()) * sc_biguint<22>(ap_const_lv22_1A);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_177_fu_1477_p0() {
    mul_ln1118_177_fu_1477_p0 =  (sc_lv<16>) (sext_ln708_4_fu_1131589_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_177_fu_1477_p2() {
    mul_ln1118_177_fu_1477_p2 = (!mul_ln1118_177_fu_1477_p0.read().is_01() || !ap_const_lv24_FFFF86.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_177_fu_1477_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF86);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_179_fu_1344_p0() {
    mul_ln1118_179_fu_1344_p0 =  (sc_lv<16>) (sext_ln708_2_fu_1131572_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_179_fu_1344_p2() {
    mul_ln1118_179_fu_1344_p2 = (!mul_ln1118_179_fu_1344_p0.read().is_01() || !ap_const_lv25_A2.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_179_fu_1344_p0.read()) * sc_biguint<25>(ap_const_lv25_A2);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_181_fu_1454_p0() {
    mul_ln1118_181_fu_1454_p0 =  (sc_lv<16>) (sext_ln708_1_fu_1131561_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_181_fu_1454_p2() {
    mul_ln1118_181_fu_1454_p2 = (!mul_ln1118_181_fu_1454_p0.read().is_01() || !ap_const_lv26_3FFFEBD.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_181_fu_1454_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFEBD);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_182_fu_1455_p0() {
    mul_ln1118_182_fu_1455_p0 =  (sc_lv<16>) (sext_ln708_1_fu_1131561_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_182_fu_1455_p2() {
    mul_ln1118_182_fu_1455_p2 = (!mul_ln1118_182_fu_1455_p0.read().is_01() || !ap_const_lv26_3FFFEC9.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_182_fu_1455_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFEC9);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_183_fu_1834_p0() {
    mul_ln1118_183_fu_1834_p0 =  (sc_lv<16>) (sext_ln708_1_fu_1131561_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_183_fu_1834_p2() {
    mul_ln1118_183_fu_1834_p2 = (!mul_ln1118_183_fu_1834_p0.read().is_01() || !ap_const_lv26_177.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_183_fu_1834_p0.read()) * sc_biguint<26>(ap_const_lv26_177);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_184_fu_1781_p0() {
    mul_ln1118_184_fu_1781_p0 =  (sc_lv<16>) (sext_ln708_4_fu_1131589_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_184_fu_1781_p2() {
    mul_ln1118_184_fu_1781_p2 = (!mul_ln1118_184_fu_1781_p0.read().is_01() || !ap_const_lv24_49.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_184_fu_1781_p0.read()) * sc_biguint<24>(ap_const_lv24_49);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_186_fu_1654_p0() {
    mul_ln1118_186_fu_1654_p0 = sext_ln708_3_fu_1131584_p0.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_186_fu_1654_p2() {
    mul_ln1118_186_fu_1654_p2 = (!mul_ln1118_186_fu_1654_p0.read().is_01() || !ap_const_lv21_D.is_01())? sc_lv<21>(): sc_bigint<16>(mul_ln1118_186_fu_1654_p0.read()) * sc_biguint<21>(ap_const_lv21_D);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_187_fu_1769_p0() {
    mul_ln1118_187_fu_1769_p0 =  (sc_lv<16>) (sext_ln708_fu_1131554_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_187_fu_1769_p2() {
    mul_ln1118_187_fu_1769_p2 = (!mul_ln1118_187_fu_1769_p0.read().is_01() || !ap_const_lv22_1B.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_187_fu_1769_p0.read()) * sc_biguint<22>(ap_const_lv22_1B);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_188_fu_1542_p0() {
    mul_ln1118_188_fu_1542_p0 =  (sc_lv<16>) (sext_ln1118_133_fu_1132057_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_188_fu_1542_p2() {
    mul_ln1118_188_fu_1542_p2 = (!mul_ln1118_188_fu_1542_p0.read().is_01() || !ap_const_lv26_11B.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_188_fu_1542_p0.read()) * sc_biguint<26>(ap_const_lv26_11B);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_189_fu_1486_p0() {
    mul_ln1118_189_fu_1486_p0 =  (sc_lv<16>) (sext_ln1118_136_fu_1132083_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_189_fu_1486_p2() {
    mul_ln1118_189_fu_1486_p2 = (!mul_ln1118_189_fu_1486_p0.read().is_01() || !ap_const_lv23_7FFFCC.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_189_fu_1486_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFCC);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_190_fu_1487_p0() {
    mul_ln1118_190_fu_1487_p0 =  (sc_lv<16>) (sext_ln1118_133_fu_1132057_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_190_fu_1487_p2() {
    mul_ln1118_190_fu_1487_p2 = (!mul_ln1118_190_fu_1487_p0.read().is_01() || !ap_const_lv26_3FFFD65.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_190_fu_1487_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFD65);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_193_fu_1433_p0() {
    mul_ln1118_193_fu_1433_p0 =  (sc_lv<16>) (sext_ln1118_133_fu_1132057_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_193_fu_1433_p2() {
    mul_ln1118_193_fu_1433_p2 = (!mul_ln1118_193_fu_1433_p0.read().is_01() || !ap_const_lv26_3FFFEF2.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_193_fu_1433_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFEF2);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_194_fu_1548_p0() {
    mul_ln1118_194_fu_1548_p0 =  (sc_lv<16>) (sext_ln1118_132_fu_1132048_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_194_fu_1548_p2() {
    mul_ln1118_194_fu_1548_p2 = (!mul_ln1118_194_fu_1548_p0.read().is_01() || !ap_const_lv25_1FFFF67.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_194_fu_1548_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF67);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_195_fu_1777_p0() {
    mul_ln1118_195_fu_1777_p0 =  (sc_lv<16>) (sext_ln1118_133_fu_1132057_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_195_fu_1777_p2() {
    mul_ln1118_195_fu_1777_p2 = (!mul_ln1118_195_fu_1777_p0.read().is_01() || !ap_const_lv26_3FFFE7F.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_195_fu_1777_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFE7F);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_196_fu_1778_p0() {
    mul_ln1118_196_fu_1778_p0 =  (sc_lv<16>) (sext_ln1118_136_fu_1132083_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_196_fu_1778_p2() {
    mul_ln1118_196_fu_1778_p2 = (!mul_ln1118_196_fu_1778_p0.read().is_01() || !ap_const_lv23_23.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_196_fu_1778_p0.read()) * sc_biguint<23>(ap_const_lv23_23);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_197_fu_1762_p0() {
    mul_ln1118_197_fu_1762_p0 =  (sc_lv<16>) (sext_ln1118_133_fu_1132057_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_197_fu_1762_p2() {
    mul_ln1118_197_fu_1762_p2 = (!mul_ln1118_197_fu_1762_p0.read().is_01() || !ap_const_lv26_3FFFEB9.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_197_fu_1762_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFEB9);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_198_fu_1763_p0() {
    mul_ln1118_198_fu_1763_p0 =  (sc_lv<16>) (sext_ln1118_133_fu_1132057_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_198_fu_1763_p2() {
    mul_ln1118_198_fu_1763_p2 = (!mul_ln1118_198_fu_1763_p0.read().is_01() || !ap_const_lv26_3FFFD25.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_198_fu_1763_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFD25);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_199_fu_1818_p0() {
    mul_ln1118_199_fu_1818_p0 =  (sc_lv<16>) (sext_ln1118_132_fu_1132048_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_199_fu_1818_p2() {
    mul_ln1118_199_fu_1818_p2 = (!mul_ln1118_199_fu_1818_p0.read().is_01() || !ap_const_lv25_B5.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_199_fu_1818_p0.read()) * sc_biguint<25>(ap_const_lv25_B5);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_19_fu_1770_p0() {
    mul_ln1118_19_fu_1770_p0 = sext_ln1118_19_fu_1127944_p0.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_19_fu_1770_p2() {
    mul_ln1118_19_fu_1770_p2 = (!mul_ln1118_19_fu_1770_p0.read().is_01() || !ap_const_lv22_3FFFE3.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_19_fu_1770_p0.read()) * sc_bigint<22>(ap_const_lv22_3FFFE3);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_200_fu_1414_p0() {
    mul_ln1118_200_fu_1414_p0 =  (sc_lv<16>) (sext_ln1118_133_fu_1132057_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_200_fu_1414_p2() {
    mul_ln1118_200_fu_1414_p2 = (!mul_ln1118_200_fu_1414_p0.read().is_01() || !ap_const_lv26_136.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_200_fu_1414_p0.read()) * sc_biguint<26>(ap_const_lv26_136);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_201_fu_1550_p0() {
    mul_ln1118_201_fu_1550_p0 =  (sc_lv<16>) (sext_ln1118_134_fu_1132073_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_201_fu_1550_p2() {
    mul_ln1118_201_fu_1550_p2 = (!mul_ln1118_201_fu_1550_p0.read().is_01() || !ap_const_lv24_59.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_201_fu_1550_p0.read()) * sc_biguint<24>(ap_const_lv24_59);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_203_fu_1390_p0() {
    mul_ln1118_203_fu_1390_p0 =  (sc_lv<16>) (sext_ln1118_134_fu_1132073_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_203_fu_1390_p2() {
    mul_ln1118_203_fu_1390_p2 = (!mul_ln1118_203_fu_1390_p0.read().is_01() || !ap_const_lv24_4A.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_203_fu_1390_p0.read()) * sc_biguint<24>(ap_const_lv24_4A);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_204_fu_1823_p0() {
    mul_ln1118_204_fu_1823_p0 =  (sc_lv<16>) (sext_ln1118_132_fu_1132048_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_204_fu_1823_p2() {
    mul_ln1118_204_fu_1823_p2 = (!mul_ln1118_204_fu_1823_p0.read().is_01() || !ap_const_lv25_1FFFF5B.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_204_fu_1823_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF5B);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_205_fu_1743_p0() {
    mul_ln1118_205_fu_1743_p0 =  (sc_lv<16>) (sext_ln1118_133_fu_1132057_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_205_fu_1743_p2() {
    mul_ln1118_205_fu_1743_p2 = (!mul_ln1118_205_fu_1743_p0.read().is_01() || !ap_const_lv26_3FFFEEB.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_205_fu_1743_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFEEB);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_207_fu_1826_p0() {
    mul_ln1118_207_fu_1826_p0 =  (sc_lv<16>) (sext_ln1118_133_fu_1132057_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_207_fu_1826_p2() {
    mul_ln1118_207_fu_1826_p2 = (!mul_ln1118_207_fu_1826_p0.read().is_01() || !ap_const_lv26_3FFFEBD.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_207_fu_1826_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFEBD);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_208_fu_1584_p0() {
    mul_ln1118_208_fu_1584_p0 =  (sc_lv<16>) (sext_ln1118_133_fu_1132057_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_208_fu_1584_p2() {
    mul_ln1118_208_fu_1584_p2 = (!mul_ln1118_208_fu_1584_p0.read().is_01() || !ap_const_lv26_172.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_208_fu_1584_p0.read()) * sc_biguint<26>(ap_const_lv26_172);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_210_fu_1505_p0() {
    mul_ln1118_210_fu_1505_p0 =  (sc_lv<16>) (sext_ln1118_151_fu_1132641_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_210_fu_1505_p2() {
    mul_ln1118_210_fu_1505_p2 = (!mul_ln1118_210_fu_1505_p0.read().is_01() || !ap_const_lv26_11C.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_210_fu_1505_p0.read()) * sc_biguint<26>(ap_const_lv26_11C);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_212_fu_1696_p0() {
    mul_ln1118_212_fu_1696_p0 =  (sc_lv<16>) (sext_ln1118_152_fu_1132650_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_212_fu_1696_p2() {
    mul_ln1118_212_fu_1696_p2 = (!mul_ln1118_212_fu_1696_p0.read().is_01() || !ap_const_lv25_B0.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_212_fu_1696_p0.read()) * sc_biguint<25>(ap_const_lv25_B0);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_213_fu_1829_p0() {
    mul_ln1118_213_fu_1829_p0 =  (sc_lv<16>) (sext_ln1118_153_fu_1132660_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_213_fu_1829_p2() {
    mul_ln1118_213_fu_1829_p2 = (!mul_ln1118_213_fu_1829_p0.read().is_01() || !ap_const_lv24_6E.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_213_fu_1829_p0.read()) * sc_biguint<24>(ap_const_lv24_6E);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_216_fu_1832_p0() {
    mul_ln1118_216_fu_1832_p0 =  (sc_lv<16>) (sext_ln1118_153_fu_1132660_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_216_fu_1832_p2() {
    mul_ln1118_216_fu_1832_p2 = (!mul_ln1118_216_fu_1832_p0.read().is_01() || !ap_const_lv24_77.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_216_fu_1832_p0.read()) * sc_biguint<24>(ap_const_lv24_77);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_217_fu_1434_p0() {
    mul_ln1118_217_fu_1434_p0 =  (sc_lv<16>) (sext_ln1118_154_fu_1132671_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_217_fu_1434_p2() {
    mul_ln1118_217_fu_1434_p2 = (!mul_ln1118_217_fu_1434_p0.read().is_01() || !ap_const_lv22_3FFFE7.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_217_fu_1434_p0.read()) * sc_bigint<22>(ap_const_lv22_3FFFE7);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_219_fu_1436_p0() {
    mul_ln1118_219_fu_1436_p0 =  (sc_lv<16>) (sext_ln1118_151_fu_1132641_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_219_fu_1436_p2() {
    mul_ln1118_219_fu_1436_p2 = (!mul_ln1118_219_fu_1436_p0.read().is_01() || !ap_const_lv26_1C4.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_219_fu_1436_p0.read()) * sc_biguint<26>(ap_const_lv26_1C4);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_21_fu_1501_p0() {
    mul_ln1118_21_fu_1501_p0 =  (sc_lv<16>) (sext_ln1118_20_fu_1127949_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_21_fu_1501_p2() {
    mul_ln1118_21_fu_1501_p2 = (!mul_ln1118_21_fu_1501_p0.read().is_01() || !ap_const_lv26_13E.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_21_fu_1501_p0.read()) * sc_biguint<26>(ap_const_lv26_13E);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_220_fu_1423_p0() {
    mul_ln1118_220_fu_1423_p0 =  (sc_lv<16>) (sext_ln1118_151_fu_1132641_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_220_fu_1423_p2() {
    mul_ln1118_220_fu_1423_p2 = (!mul_ln1118_220_fu_1423_p0.read().is_01() || !ap_const_lv26_3FFFEB6.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_220_fu_1423_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFEB6);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_221_fu_1723_p0() {
    mul_ln1118_221_fu_1723_p0 =  (sc_lv<16>) (sext_ln1118_152_fu_1132650_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_221_fu_1723_p2() {
    mul_ln1118_221_fu_1723_p2 = (!mul_ln1118_221_fu_1723_p0.read().is_01() || !ap_const_lv25_A6.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_221_fu_1723_p0.read()) * sc_biguint<25>(ap_const_lv25_A6);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_222_fu_1382_p0() {
    mul_ln1118_222_fu_1382_p0 =  (sc_lv<16>) (sext_ln1118_153_fu_1132660_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_222_fu_1382_p2() {
    mul_ln1118_222_fu_1382_p2 = (!mul_ln1118_222_fu_1382_p0.read().is_01() || !ap_const_lv24_59.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_222_fu_1382_p0.read()) * sc_biguint<24>(ap_const_lv24_59);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_223_fu_1725_p0() {
    mul_ln1118_223_fu_1725_p0 =  (sc_lv<16>) (sext_ln1118_153_fu_1132660_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_223_fu_1725_p2() {
    mul_ln1118_223_fu_1725_p2 = (!mul_ln1118_223_fu_1725_p0.read().is_01() || !ap_const_lv24_FFFFBB.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_223_fu_1725_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFBB);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_224_fu_1726_p0() {
    mul_ln1118_224_fu_1726_p0 =  (sc_lv<16>) (sext_ln1118_152_fu_1132650_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_224_fu_1726_p2() {
    mul_ln1118_224_fu_1726_p2 = (!mul_ln1118_224_fu_1726_p0.read().is_01() || !ap_const_lv25_E6.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_224_fu_1726_p0.read()) * sc_biguint<25>(ap_const_lv25_E6);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_225_fu_1385_p0() {
    mul_ln1118_225_fu_1385_p0 =  (sc_lv<16>) (sext_ln1118_151_fu_1132641_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_225_fu_1385_p2() {
    mul_ln1118_225_fu_1385_p2 = (!mul_ln1118_225_fu_1385_p0.read().is_01() || !ap_const_lv26_13C.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_225_fu_1385_p0.read()) * sc_biguint<26>(ap_const_lv26_13C);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_226_fu_1597_p0() {
    mul_ln1118_226_fu_1597_p0 =  (sc_lv<16>) (sext_ln1118_151_fu_1132641_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_226_fu_1597_p2() {
    mul_ln1118_226_fu_1597_p2 = (!mul_ln1118_226_fu_1597_p0.read().is_01() || !ap_const_lv26_3FFFED1.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_226_fu_1597_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFED1);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_227_fu_1760_p0() {
    mul_ln1118_227_fu_1760_p0 =  (sc_lv<16>) (sext_ln1118_154_fu_1132671_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_227_fu_1760_p2() {
    mul_ln1118_227_fu_1760_p2 = (!mul_ln1118_227_fu_1760_p0.read().is_01() || !ap_const_lv22_1D.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_227_fu_1760_p0.read()) * sc_biguint<22>(ap_const_lv22_1D);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_229_fu_1384_p0() {
    mul_ln1118_229_fu_1384_p0 =  (sc_lv<16>) (sext_ln1118_153_fu_1132660_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_229_fu_1384_p2() {
    mul_ln1118_229_fu_1384_p2 = (!mul_ln1118_229_fu_1384_p0.read().is_01() || !ap_const_lv24_4A.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_229_fu_1384_p0.read()) * sc_biguint<24>(ap_const_lv24_4A);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_22_fu_1844_p0() {
    mul_ln1118_22_fu_1844_p0 =  (sc_lv<16>) (sext_ln1118_18_fu_1127932_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_22_fu_1844_p2() {
    mul_ln1118_22_fu_1844_p2 = (!mul_ln1118_22_fu_1844_p0.read().is_01() || !ap_const_lv25_BA.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_22_fu_1844_p0.read()) * sc_biguint<25>(ap_const_lv25_BA);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_230_fu_1412_p0() {
    mul_ln1118_230_fu_1412_p0 =  (sc_lv<16>) (sext_ln1118_152_fu_1132650_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_230_fu_1412_p2() {
    mul_ln1118_230_fu_1412_p2 = (!mul_ln1118_230_fu_1412_p0.read().is_01() || !ap_const_lv25_1FFFF64.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_230_fu_1412_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF64);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_232_fu_1576_p0() {
    mul_ln1118_232_fu_1576_p0 =  (sc_lv<16>) (sext_ln1118_172_fu_1133239_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_232_fu_1576_p2() {
    mul_ln1118_232_fu_1576_p2 = (!mul_ln1118_232_fu_1576_p0.read().is_01() || !ap_const_lv22_13.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_232_fu_1576_p0.read()) * sc_biguint<22>(ap_const_lv22_13);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_234_fu_1524_p0() {
    mul_ln1118_234_fu_1524_p0 =  (sc_lv<16>) (sext_ln1118_172_fu_1133239_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_234_fu_1524_p2() {
    mul_ln1118_234_fu_1524_p2 = (!mul_ln1118_234_fu_1524_p0.read().is_01() || !ap_const_lv22_16.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_234_fu_1524_p0.read()) * sc_biguint<22>(ap_const_lv22_16);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_236_fu_1471_p0() {
    mul_ln1118_236_fu_1471_p0 = sext_ln1118_171_fu_1133233_p0.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_236_fu_1471_p2() {
    mul_ln1118_236_fu_1471_p2 = (!mul_ln1118_236_fu_1471_p0.read().is_01() || !ap_const_lv24_FFFFAC.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_236_fu_1471_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFAC);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_237_fu_1337_p0() {
    mul_ln1118_237_fu_1337_p0 =  (sc_lv<16>) (sext_ln1118_168_fu_1133215_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_237_fu_1337_p2() {
    mul_ln1118_237_fu_1337_p2 = (!mul_ln1118_237_fu_1337_p0.read().is_01() || !ap_const_lv26_3FFFDDA.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_237_fu_1337_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFDDA);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_239_fu_1663_p0() {
    mul_ln1118_239_fu_1663_p0 =  (sc_lv<16>) (sext_ln1118_167_fu_1133203_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_239_fu_1663_p2() {
    mul_ln1118_239_fu_1663_p2 = (!mul_ln1118_239_fu_1663_p0.read().is_01() || !ap_const_lv25_AA.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_239_fu_1663_p0.read()) * sc_biguint<25>(ap_const_lv25_AA);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_23_fu_1717_p0() {
    mul_ln1118_23_fu_1717_p0 =  (sc_lv<16>) (sext_ln1118_21_fu_1127962_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_23_fu_1717_p2() {
    mul_ln1118_23_fu_1717_p2 = (!mul_ln1118_23_fu_1717_p0.read().is_01() || !ap_const_lv23_7FFFC3.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_23_fu_1717_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFC3);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_240_fu_1556_p0() {
    mul_ln1118_240_fu_1556_p0 =  (sc_lv<16>) (sext_ln1118_167_fu_1133203_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_240_fu_1556_p2() {
    mul_ln1118_240_fu_1556_p2 = (!mul_ln1118_240_fu_1556_p0.read().is_01() || !ap_const_lv25_9F.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_240_fu_1556_p0.read()) * sc_biguint<25>(ap_const_lv25_9F);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_241_fu_1449_p0() {
    mul_ln1118_241_fu_1449_p0 =  (sc_lv<16>) (sext_ln1118_167_fu_1133203_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_241_fu_1449_p2() {
    mul_ln1118_241_fu_1449_p2 = (!mul_ln1118_241_fu_1449_p0.read().is_01() || !ap_const_lv25_1FFFF27.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_241_fu_1449_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF27);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_242_fu_1720_p0() {
    mul_ln1118_242_fu_1720_p0 =  (sc_lv<16>) (sext_ln1118_167_fu_1133203_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_242_fu_1720_p2() {
    mul_ln1118_242_fu_1720_p2 = (!mul_ln1118_242_fu_1720_p0.read().is_01() || !ap_const_lv25_A3.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_242_fu_1720_p0.read()) * sc_biguint<25>(ap_const_lv25_A3);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_244_fu_1607_p0() {
    mul_ln1118_244_fu_1607_p0 =  (sc_lv<16>) (sext_ln1118_167_fu_1133203_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_244_fu_1607_p2() {
    mul_ln1118_244_fu_1607_p2 = (!mul_ln1118_244_fu_1607_p0.read().is_01() || !ap_const_lv25_D4.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_244_fu_1607_p0.read()) * sc_biguint<25>(ap_const_lv25_D4);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_245_fu_1779_p0() {
    mul_ln1118_245_fu_1779_p0 =  (sc_lv<16>) (sext_ln1118_168_fu_1133215_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_245_fu_1779_p2() {
    mul_ln1118_245_fu_1779_p2 = (!mul_ln1118_245_fu_1779_p0.read().is_01() || !ap_const_lv26_116.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_245_fu_1779_p0.read()) * sc_biguint<26>(ap_const_lv26_116);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_246_fu_1666_p0() {
    mul_ln1118_246_fu_1666_p0 =  (sc_lv<16>) (sext_ln1118_167_fu_1133203_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_246_fu_1666_p2() {
    mul_ln1118_246_fu_1666_p2 = (!mul_ln1118_246_fu_1666_p0.read().is_01() || !ap_const_lv25_99.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_246_fu_1666_p0.read()) * sc_biguint<25>(ap_const_lv25_99);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_248_fu_1440_p0() {
    mul_ln1118_248_fu_1440_p0 =  (sc_lv<16>) (sext_ln1118_167_fu_1133203_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_248_fu_1440_p2() {
    mul_ln1118_248_fu_1440_p2 = (!mul_ln1118_248_fu_1440_p0.read().is_01() || !ap_const_lv25_E6.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_248_fu_1440_p0.read()) * sc_biguint<25>(ap_const_lv25_E6);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_249_fu_1783_p0() {
    mul_ln1118_249_fu_1783_p0 =  (sc_lv<16>) (sext_ln1118_168_fu_1133215_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_249_fu_1783_p2() {
    mul_ln1118_249_fu_1783_p2 = (!mul_ln1118_249_fu_1783_p0.read().is_01() || !ap_const_lv26_12D.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_249_fu_1783_p0.read()) * sc_biguint<26>(ap_const_lv26_12D);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_24_fu_1447_p0() {
    mul_ln1118_24_fu_1447_p0 = sext_ln1118_23_fu_1127975_p0.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_24_fu_1447_p2() {
    mul_ln1118_24_fu_1447_p2 = (!mul_ln1118_24_fu_1447_p0.read().is_01() || !ap_const_lv24_67.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_24_fu_1447_p0.read()) * sc_biguint<24>(ap_const_lv24_67);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_251_fu_1500_p0() {
    mul_ln1118_251_fu_1500_p0 =  (sc_lv<16>) (sext_ln1118_188_fu_1133794_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_251_fu_1500_p2() {
    mul_ln1118_251_fu_1500_p2 = (!mul_ln1118_251_fu_1500_p0.read().is_01() || !ap_const_lv23_2D.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_251_fu_1500_p0.read()) * sc_biguint<23>(ap_const_lv23_2D);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_252_fu_1587_p0() {
    mul_ln1118_252_fu_1587_p0 =  (sc_lv<16>) (sext_ln1118_186_fu_1133777_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_252_fu_1587_p2() {
    mul_ln1118_252_fu_1587_p2 = (!mul_ln1118_252_fu_1587_p0.read().is_01() || !ap_const_lv25_1FFFF30.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_252_fu_1587_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF30);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_253_fu_1673_p0() {
    mul_ln1118_253_fu_1673_p0 =  (sc_lv<16>) (sext_ln1118_185_fu_1133769_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_253_fu_1673_p2() {
    mul_ln1118_253_fu_1673_p2 = (!mul_ln1118_253_fu_1673_p0.read().is_01() || !ap_const_lv26_103.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_253_fu_1673_p0.read()) * sc_biguint<26>(ap_const_lv26_103);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_254_fu_1503_p0() {
    mul_ln1118_254_fu_1503_p0 =  (sc_lv<16>) (sext_ln1118_186_fu_1133777_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_254_fu_1503_p2() {
    mul_ln1118_254_fu_1503_p2 = (!mul_ln1118_254_fu_1503_p0.read().is_01() || !ap_const_lv25_1FFFF2A.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_254_fu_1503_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF2A);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_255_fu_1835_p0() {
    mul_ln1118_255_fu_1835_p0 =  (sc_lv<16>) (sext_ln1118_186_fu_1133777_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_255_fu_1835_p2() {
    mul_ln1118_255_fu_1835_p2 = (!mul_ln1118_255_fu_1835_p0.read().is_01() || !ap_const_lv25_1FFFF0C.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_255_fu_1835_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF0C);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_256_fu_1809_p0() {
    mul_ln1118_256_fu_1809_p0 =  (sc_lv<16>) (sext_ln1118_186_fu_1133777_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_256_fu_1809_p2() {
    mul_ln1118_256_fu_1809_p2 = (!mul_ln1118_256_fu_1809_p0.read().is_01() || !ap_const_lv25_CF.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_256_fu_1809_p0.read()) * sc_biguint<25>(ap_const_lv25_CF);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_259_fu_1677_p0() {
    mul_ln1118_259_fu_1677_p0 =  (sc_lv<16>) (sext_ln1118_186_fu_1133777_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_259_fu_1677_p2() {
    mul_ln1118_259_fu_1677_p2 = (!mul_ln1118_259_fu_1677_p0.read().is_01() || !ap_const_lv25_8C.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_259_fu_1677_p0.read()) * sc_biguint<25>(ap_const_lv25_8C);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_25_fu_1775_p0() {
    mul_ln1118_25_fu_1775_p0 =  (sc_lv<16>) (sext_ln1118_20_fu_1127949_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_25_fu_1775_p2() {
    mul_ln1118_25_fu_1775_p2 = (!mul_ln1118_25_fu_1775_p0.read().is_01() || !ap_const_lv26_11A.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_25_fu_1775_p0.read()) * sc_biguint<26>(ap_const_lv26_11A);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_260_fu_1813_p0() {
    mul_ln1118_260_fu_1813_p0 =  (sc_lv<16>) (sext_ln1118_184_fu_1133761_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_260_fu_1813_p2() {
    mul_ln1118_260_fu_1813_p2 = (!mul_ln1118_260_fu_1813_p0.read().is_01() || !ap_const_lv24_FFFFA4.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_260_fu_1813_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFA4);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_261_fu_1679_p0() {
    mul_ln1118_261_fu_1679_p0 =  (sc_lv<16>) (sext_ln1118_184_fu_1133761_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_261_fu_1679_p2() {
    mul_ln1118_261_fu_1679_p2 = (!mul_ln1118_261_fu_1679_p0.read().is_01() || !ap_const_lv24_5B.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_261_fu_1679_p0.read()) * sc_biguint<24>(ap_const_lv24_5B);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_262_fu_1464_p0() {
    mul_ln1118_262_fu_1464_p0 = sext_ln1118_189_fu_1133800_p0.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_262_fu_1464_p2() {
    mul_ln1118_262_fu_1464_p2 = (!mul_ln1118_262_fu_1464_p0.read().is_01() || !ap_const_lv22_1A.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_262_fu_1464_p0.read()) * sc_biguint<22>(ap_const_lv22_1A);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_263_fu_1411_p0() {
    mul_ln1118_263_fu_1411_p0 =  (sc_lv<16>) (sext_ln1118_185_fu_1133769_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_263_fu_1411_p2() {
    mul_ln1118_263_fu_1411_p2 = (!mul_ln1118_263_fu_1411_p0.read().is_01() || !ap_const_lv26_3FFFD78.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_263_fu_1411_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFD78);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_264_fu_1682_p0() {
    mul_ln1118_264_fu_1682_p0 =  (sc_lv<16>) (sext_ln1118_188_fu_1133794_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_264_fu_1682_p2() {
    mul_ln1118_264_fu_1682_p2 = (!mul_ln1118_264_fu_1682_p0.read().is_01() || !ap_const_lv23_39.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_264_fu_1682_p0.read()) * sc_biguint<23>(ap_const_lv23_39);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_266_fu_1549_p0() {
    mul_ln1118_266_fu_1549_p0 =  (sc_lv<16>) (sext_ln1118_185_fu_1133769_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_266_fu_1549_p2() {
    mul_ln1118_266_fu_1549_p2 = (!mul_ln1118_266_fu_1549_p0.read().is_01() || !ap_const_lv26_3FFFED0.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_266_fu_1549_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFED0);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_267_fu_1604_p0() {
    mul_ln1118_267_fu_1604_p0 =  (sc_lv<16>) (sext_ln1118_184_fu_1133761_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_267_fu_1604_p2() {
    mul_ln1118_267_fu_1604_p2 = (!mul_ln1118_267_fu_1604_p0.read().is_01() || !ap_const_lv24_FFFF86.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_267_fu_1604_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF86);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_268_fu_1686_p0() {
    mul_ln1118_268_fu_1686_p0 =  (sc_lv<16>) (sext_ln1118_186_fu_1133777_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_268_fu_1686_p2() {
    mul_ln1118_268_fu_1686_p2 = (!mul_ln1118_268_fu_1686_p0.read().is_01() || !ap_const_lv25_1FFFF49.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_268_fu_1686_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF49);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_269_fu_1822_p0() {
    mul_ln1118_269_fu_1822_p0 =  (sc_lv<16>) (sext_ln1118_186_fu_1133777_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_269_fu_1822_p2() {
    mul_ln1118_269_fu_1822_p2 = (!mul_ln1118_269_fu_1822_p0.read().is_01() || !ap_const_lv25_1FFFF75.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_269_fu_1822_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF75);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_26_fu_1791_p0() {
    mul_ln1118_26_fu_1791_p0 =  (sc_lv<16>) (sext_ln1118_20_fu_1127949_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_26_fu_1791_p2() {
    mul_ln1118_26_fu_1791_p2 = (!mul_ln1118_26_fu_1791_p0.read().is_01() || !ap_const_lv26_10C.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_26_fu_1791_p0.read()) * sc_biguint<26>(ap_const_lv26_10C);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_270_fu_1661_p0() {
    mul_ln1118_270_fu_1661_p0 =  (sc_lv<16>) (sext_ln1118_185_fu_1133769_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_270_fu_1661_p2() {
    mul_ln1118_270_fu_1661_p2 = (!mul_ln1118_270_fu_1661_p0.read().is_01() || !ap_const_lv26_3FFFE7B.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_270_fu_1661_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFE7B);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_272_fu_1757_p0() {
    mul_ln1118_272_fu_1757_p0 =  (sc_lv<16>) (sext_ln1118_202_fu_1134363_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_272_fu_1757_p2() {
    mul_ln1118_272_fu_1757_p2 = (!mul_ln1118_272_fu_1757_p0.read().is_01() || !ap_const_lv24_77.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_272_fu_1757_p0.read()) * sc_biguint<24>(ap_const_lv24_77);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_273_fu_1371_p0() {
    mul_ln1118_273_fu_1371_p0 = sext_ln1118_203_fu_1134371_p0.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_273_fu_1371_p2() {
    mul_ln1118_273_fu_1371_p2 = (!mul_ln1118_273_fu_1371_p0.read().is_01() || !ap_const_lv23_7FFFD9.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_273_fu_1371_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFD9);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_276_fu_1459_p0() {
    mul_ln1118_276_fu_1459_p0 =  (sc_lv<16>) (sext_ln1118_202_fu_1134363_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_276_fu_1459_p2() {
    mul_ln1118_276_fu_1459_p2 = (!mul_ln1118_276_fu_1459_p0.read().is_01() || !ap_const_lv24_4C.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_276_fu_1459_p0.read()) * sc_biguint<24>(ap_const_lv24_4C);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_277_fu_1688_p0() {
    mul_ln1118_277_fu_1688_p0 =  (sc_lv<16>) (sext_ln1118_201_fu_1134350_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_277_fu_1688_p2() {
    mul_ln1118_277_fu_1688_p2 = (!mul_ln1118_277_fu_1688_p0.read().is_01() || !ap_const_lv25_BF.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_277_fu_1688_p0.read()) * sc_biguint<25>(ap_const_lv25_BF);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_278_fu_1846_p0() {
    mul_ln1118_278_fu_1846_p0 =  (sc_lv<16>) (sext_ln1118_201_fu_1134350_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_278_fu_1846_p2() {
    mul_ln1118_278_fu_1846_p2 = (!mul_ln1118_278_fu_1846_p0.read().is_01() || !ap_const_lv25_1FFFF7B.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_278_fu_1846_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF7B);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_27_fu_1393_p0() {
    mul_ln1118_27_fu_1393_p0 =  (sc_lv<16>) (sext_ln1118_20_fu_1127949_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_27_fu_1393_p2() {
    mul_ln1118_27_fu_1393_p2 = (!mul_ln1118_27_fu_1393_p0.read().is_01() || !ap_const_lv26_3FFFDB9.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_27_fu_1393_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFDB9);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_280_fu_1349_p0() {
    mul_ln1118_280_fu_1349_p0 =  (sc_lv<16>) (sext_ln1118_202_fu_1134363_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_280_fu_1349_p2() {
    mul_ln1118_280_fu_1349_p2 = (!mul_ln1118_280_fu_1349_p0.read().is_01() || !ap_const_lv24_69.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_280_fu_1349_p0.read()) * sc_biguint<24>(ap_const_lv24_69);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_282_fu_1693_p0() {
    mul_ln1118_282_fu_1693_p0 =  (sc_lv<16>) (sext_ln1118_201_fu_1134350_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_282_fu_1693_p2() {
    mul_ln1118_282_fu_1693_p2 = (!mul_ln1118_282_fu_1693_p0.read().is_01() || !ap_const_lv25_1FFFF1E.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_282_fu_1693_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF1E);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_284_fu_1643_p0() {
    mul_ln1118_284_fu_1643_p0 =  (sc_lv<16>) (sext_ln1118_201_fu_1134350_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_284_fu_1643_p2() {
    mul_ln1118_284_fu_1643_p2 = (!mul_ln1118_284_fu_1643_p0.read().is_01() || !ap_const_lv25_83.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_284_fu_1643_p0.read()) * sc_biguint<25>(ap_const_lv25_83);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_285_fu_1347_p0() {
    mul_ln1118_285_fu_1347_p0 =  (sc_lv<16>) (sext_ln1118_201_fu_1134350_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_285_fu_1347_p2() {
    mul_ln1118_285_fu_1347_p2 = (!mul_ln1118_285_fu_1347_p0.read().is_01() || !ap_const_lv25_CB.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_285_fu_1347_p0.read()) * sc_biguint<25>(ap_const_lv25_CB);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_286_fu_1672_p0() {
    mul_ln1118_286_fu_1672_p0 = sext_ln1118_200_fu_1134341_p0.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_286_fu_1672_p2() {
    mul_ln1118_286_fu_1672_p2 = (!mul_ln1118_286_fu_1672_p0.read().is_01() || !ap_const_lv26_153.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_286_fu_1672_p0.read()) * sc_biguint<26>(ap_const_lv26_153);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_28_fu_1776_p0() {
    mul_ln1118_28_fu_1776_p0 =  (sc_lv<16>) (sext_ln1118_21_fu_1127962_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_28_fu_1776_p2() {
    mul_ln1118_28_fu_1776_p2 = (!mul_ln1118_28_fu_1776_p0.read().is_01() || !ap_const_lv23_7FFFD3.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_28_fu_1776_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFD3);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_290_fu_1784_p0() {
    mul_ln1118_290_fu_1784_p0 =  (sc_lv<16>) (sext_ln1118_220_fu_1134845_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_290_fu_1784_p2() {
    mul_ln1118_290_fu_1784_p2 = (!mul_ln1118_290_fu_1784_p0.read().is_01() || !ap_const_lv25_95.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_290_fu_1784_p0.read()) * sc_biguint<25>(ap_const_lv25_95);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_291_fu_1704_p0() {
    mul_ln1118_291_fu_1704_p0 =  (sc_lv<16>) (sext_ln1118_219_fu_1134829_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_291_fu_1704_p2() {
    mul_ln1118_291_fu_1704_p2 = (!mul_ln1118_291_fu_1704_p0.read().is_01() || !ap_const_lv26_3FFFDF7.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_291_fu_1704_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFDF7);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_292_fu_1489_p0() {
    mul_ln1118_292_fu_1489_p0 =  (sc_lv<16>) (sext_ln1118_219_fu_1134829_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_292_fu_1489_p2() {
    mul_ln1118_292_fu_1489_p2 = (!mul_ln1118_292_fu_1489_p0.read().is_01() || !ap_const_lv26_3FFFC6F.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_292_fu_1489_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFC6F);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_294_fu_1572_p0() {
    mul_ln1118_294_fu_1572_p0 =  (sc_lv<16>) (sext_ln1118_217_fu_1134815_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_294_fu_1572_p2() {
    mul_ln1118_294_fu_1572_p2 = (!mul_ln1118_294_fu_1572_p0.read().is_01() || !ap_const_lv22_3FFFE3.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_294_fu_1572_p0.read()) * sc_bigint<22>(ap_const_lv22_3FFFE3);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_295_fu_1573_p0() {
    mul_ln1118_295_fu_1573_p0 =  (sc_lv<16>) (sext_ln1118_219_fu_1134829_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_295_fu_1573_p2() {
    mul_ln1118_295_fu_1573_p2 = (!mul_ln1118_295_fu_1573_p0.read().is_01() || !ap_const_lv26_3FFFD67.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_295_fu_1573_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFD67);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_296_fu_1493_p0() {
    mul_ln1118_296_fu_1493_p0 =  (sc_lv<16>) (sext_ln1118_220_fu_1134845_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_296_fu_1493_p2() {
    mul_ln1118_296_fu_1493_p2 = (!mul_ln1118_296_fu_1493_p0.read().is_01() || !ap_const_lv25_9D.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_296_fu_1493_p0.read()) * sc_biguint<25>(ap_const_lv25_9D);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_298_fu_1843_p0() {
    mul_ln1118_298_fu_1843_p0 =  (sc_lv<16>) (sext_ln1118_218_fu_1134821_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_298_fu_1843_p2() {
    mul_ln1118_298_fu_1843_p2 = (!mul_ln1118_298_fu_1843_p0.read().is_01() || !ap_const_lv24_45.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_298_fu_1843_p0.read()) * sc_biguint<24>(ap_const_lv24_45);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_299_fu_1345_p0() {
    mul_ln1118_299_fu_1345_p0 =  (sc_lv<16>) (sext_ln1118_219_fu_1134829_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_299_fu_1345_p2() {
    mul_ln1118_299_fu_1345_p2 = (!mul_ln1118_299_fu_1345_p0.read().is_01() || !ap_const_lv26_3FFFECA.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_299_fu_1345_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFECA);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_29_fu_1566_p0() {
    mul_ln1118_29_fu_1566_p0 =  (sc_lv<16>) (sext_ln1118_21_fu_1127962_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_29_fu_1566_p2() {
    mul_ln1118_29_fu_1566_p2 = (!mul_ln1118_29_fu_1566_p0.read().is_01() || !ap_const_lv23_36.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_29_fu_1566_p0.read()) * sc_biguint<23>(ap_const_lv23_36);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_300_fu_1745_p0() {
    mul_ln1118_300_fu_1745_p0 =  (sc_lv<16>) (sext_ln1118_217_fu_1134815_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_300_fu_1745_p2() {
    mul_ln1118_300_fu_1745_p2 = (!mul_ln1118_300_fu_1745_p0.read().is_01() || !ap_const_lv22_1D.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_300_fu_1745_p0.read()) * sc_biguint<22>(ap_const_lv22_1D);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_303_fu_1805_p0() {
    mul_ln1118_303_fu_1805_p0 =  (sc_lv<16>) (sext_ln1118_220_fu_1134845_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_303_fu_1805_p2() {
    mul_ln1118_303_fu_1805_p2 = (!mul_ln1118_303_fu_1805_p0.read().is_01() || !ap_const_lv25_1FFFF1F.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_303_fu_1805_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF1F);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_304_fu_1578_p0() {
    mul_ln1118_304_fu_1578_p0 =  (sc_lv<16>) (sext_ln1118_220_fu_1134845_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_304_fu_1578_p2() {
    mul_ln1118_304_fu_1578_p2 = (!mul_ln1118_304_fu_1578_p0.read().is_01() || !ap_const_lv25_D6.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_304_fu_1578_p0.read()) * sc_biguint<25>(ap_const_lv25_D6);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_306_fu_1580_p0() {
    mul_ln1118_306_fu_1580_p0 =  (sc_lv<16>) (sext_ln1118_220_fu_1134845_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_306_fu_1580_p2() {
    mul_ln1118_306_fu_1580_p2 = (!mul_ln1118_306_fu_1580_p0.read().is_01() || !ap_const_lv25_B9.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_306_fu_1580_p0.read()) * sc_biguint<25>(ap_const_lv25_B9);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_307_fu_1567_p0() {
    mul_ln1118_307_fu_1567_p0 =  (sc_lv<16>) (sext_ln1118_219_fu_1134829_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_307_fu_1567_p2() {
    mul_ln1118_307_fu_1567_p2 = (!mul_ln1118_307_fu_1567_p0.read().is_01() || !ap_const_lv26_156.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_307_fu_1567_p0.read()) * sc_biguint<26>(ap_const_lv26_156);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_308_fu_1354_p0() {
    mul_ln1118_308_fu_1354_p0 =  (sc_lv<16>) (sext_ln1118_219_fu_1134829_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_308_fu_1354_p2() {
    mul_ln1118_308_fu_1354_p2 = (!mul_ln1118_308_fu_1354_p0.read().is_01() || !ap_const_lv26_3FFFCF9.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_308_fu_1354_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFCF9);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_309_fu_1754_p0() {
    mul_ln1118_309_fu_1754_p0 =  (sc_lv<16>) (sext_ln1118_219_fu_1134829_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_309_fu_1754_p2() {
    mul_ln1118_309_fu_1754_p2 = (!mul_ln1118_309_fu_1754_p0.read().is_01() || !ap_const_lv26_3FFFE6B.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_309_fu_1754_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFE6B);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_30_fu_1546_p0() {
    mul_ln1118_30_fu_1546_p0 =  (sc_lv<16>) (sext_ln1118_22_fu_1127970_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_30_fu_1546_p2() {
    mul_ln1118_30_fu_1546_p2 = (!mul_ln1118_30_fu_1546_p0.read().is_01() || !ap_const_lv21_B.is_01())? sc_lv<21>(): sc_bigint<16>(mul_ln1118_30_fu_1546_p0.read()) * sc_biguint<21>(ap_const_lv21_B);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_310_fu_1596_p0() {
    mul_ln1118_310_fu_1596_p0 =  (sc_lv<16>) (sext_ln1118_220_fu_1134845_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_310_fu_1596_p2() {
    mul_ln1118_310_fu_1596_p2 = (!mul_ln1118_310_fu_1596_p0.read().is_01() || !ap_const_lv25_1FFFF06.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_310_fu_1596_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF06);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_311_fu_1516_p0() {
    mul_ln1118_311_fu_1516_p0 =  (sc_lv<16>) (sext_ln1118_219_fu_1134829_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_311_fu_1516_p2() {
    mul_ln1118_311_fu_1516_p2 = (!mul_ln1118_311_fu_1516_p0.read().is_01() || !ap_const_lv26_3FFFED3.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_311_fu_1516_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFED3);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_313_fu_1599_p0() {
    mul_ln1118_313_fu_1599_p0 =  (sc_lv<16>) (sext_ln1118_218_fu_1134821_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_313_fu_1599_p2() {
    mul_ln1118_313_fu_1599_p2 = (!mul_ln1118_313_fu_1599_p0.read().is_01() || !ap_const_lv24_55.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_313_fu_1599_p0.read()) * sc_biguint<24>(ap_const_lv24_55);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_314_fu_1609_p0() {
    mul_ln1118_314_fu_1609_p0 =  (sc_lv<16>) (sext_ln1118_219_fu_1134829_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_314_fu_1609_p2() {
    mul_ln1118_314_fu_1609_p2 = (!mul_ln1118_314_fu_1609_p0.read().is_01() || !ap_const_lv26_3FFFED2.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_314_fu_1609_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFED2);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_316_fu_1466_p0() {
    mul_ln1118_316_fu_1466_p0 =  (sc_lv<16>) (sext_ln1118_219_fu_1134829_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_316_fu_1466_p2() {
    mul_ln1118_316_fu_1466_p2 = (!mul_ln1118_316_fu_1466_p0.read().is_01() || !ap_const_lv26_184.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_316_fu_1466_p0.read()) * sc_biguint<26>(ap_const_lv26_184);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_319_fu_1750_p0() {
    mul_ln1118_319_fu_1750_p0 =  (sc_lv<16>) (sext_ln1118_225_fu_1135252_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_319_fu_1750_p2() {
    mul_ln1118_319_fu_1750_p2 = (!mul_ln1118_319_fu_1750_p0.read().is_01() || !ap_const_lv24_56.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_319_fu_1750_p0.read()) * sc_biguint<24>(ap_const_lv24_56);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_31_fu_1790_p0() {
    mul_ln1118_31_fu_1790_p0 =  (sc_lv<16>) (sext_ln1118_18_fu_1127932_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_31_fu_1790_p2() {
    mul_ln1118_31_fu_1790_p2 = (!mul_ln1118_31_fu_1790_p0.read().is_01() || !ap_const_lv25_D7.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_31_fu_1790_p0.read()) * sc_biguint<25>(ap_const_lv25_D7);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_320_fu_1470_p0() {
    mul_ln1118_320_fu_1470_p0 = sext_ln1118_227_fu_1135278_p0.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_320_fu_1470_p2() {
    mul_ln1118_320_fu_1470_p2 = (!mul_ln1118_320_fu_1470_p0.read().is_01() || !ap_const_lv22_3FFFE7.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_320_fu_1470_p0.read()) * sc_bigint<22>(ap_const_lv22_3FFFE7);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_322_fu_1472_p0() {
    mul_ln1118_322_fu_1472_p0 =  (sc_lv<16>) (sext_ln1118_225_fu_1135252_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_322_fu_1472_p2() {
    mul_ln1118_322_fu_1472_p2 = (!mul_ln1118_322_fu_1472_p0.read().is_01() || !ap_const_lv24_69.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_322_fu_1472_p0.read()) * sc_biguint<24>(ap_const_lv24_69);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_323_fu_1662_p0() {
    mul_ln1118_323_fu_1662_p0 =  (sc_lv<16>) (sext_ln1118_228_fu_1135283_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_323_fu_1662_p2() {
    mul_ln1118_323_fu_1662_p2 = (!mul_ln1118_323_fu_1662_p0.read().is_01() || !ap_const_lv23_7FFFCF.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_323_fu_1662_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFCF);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_324_fu_1366_p0() {
    mul_ln1118_324_fu_1366_p0 =  (sc_lv<16>) (sext_ln1118_226_fu_1135263_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_324_fu_1366_p2() {
    mul_ln1118_324_fu_1366_p2 = (!mul_ln1118_324_fu_1366_p0.read().is_01() || !ap_const_lv26_3FFFE1D.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_324_fu_1366_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFE1D);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_325_fu_1718_p0() {
    mul_ln1118_325_fu_1718_p0 =  (sc_lv<16>) (sext_ln1118_225_fu_1135252_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_325_fu_1718_p2() {
    mul_ln1118_325_fu_1718_p2 = (!mul_ln1118_325_fu_1718_p0.read().is_01() || !ap_const_lv24_FFFFAC.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_325_fu_1718_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFAC);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_326_fu_1814_p0() {
    mul_ln1118_326_fu_1814_p0 =  (sc_lv<16>) (sext_ln1118_226_fu_1135263_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_326_fu_1814_p2() {
    mul_ln1118_326_fu_1814_p2 = (!mul_ln1118_326_fu_1814_p0.read().is_01() || !ap_const_lv26_129.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_326_fu_1814_p0.read()) * sc_biguint<26>(ap_const_lv26_129);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_327_fu_1634_p0() {
    mul_ln1118_327_fu_1634_p0 =  (sc_lv<16>) (sext_ln1118_228_fu_1135283_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_327_fu_1634_p2() {
    mul_ln1118_327_fu_1634_p2 = (!mul_ln1118_327_fu_1634_p0.read().is_01() || !ap_const_lv23_7FFFC5.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_327_fu_1634_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFC5);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_32_fu_1667_p0() {
    mul_ln1118_32_fu_1667_p0 =  (sc_lv<16>) (sext_ln1118_18_fu_1127932_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_32_fu_1667_p2() {
    mul_ln1118_32_fu_1667_p2 = (!mul_ln1118_32_fu_1667_p0.read().is_01() || !ap_const_lv25_98.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_32_fu_1667_p0.read()) * sc_biguint<25>(ap_const_lv25_98);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_330_fu_1751_p0() {
    mul_ln1118_330_fu_1751_p0 =  (sc_lv<16>) (sext_ln1118_225_fu_1135252_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_330_fu_1751_p2() {
    mul_ln1118_330_fu_1751_p2 = (!mul_ln1118_330_fu_1751_p0.read().is_01() || !ap_const_lv24_FFFFA6.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_330_fu_1751_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFA6);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_331_fu_1695_p0() {
    mul_ln1118_331_fu_1695_p0 =  (sc_lv<16>) (sext_ln1118_224_fu_1135244_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_331_fu_1695_p2() {
    mul_ln1118_331_fu_1695_p2 = (!mul_ln1118_331_fu_1695_p0.read().is_01() || !ap_const_lv25_1FFFF68.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_331_fu_1695_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF68);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_332_fu_1468_p0() {
    mul_ln1118_332_fu_1468_p0 =  (sc_lv<16>) (sext_ln1118_226_fu_1135263_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_332_fu_1468_p2() {
    mul_ln1118_332_fu_1468_p2 = (!mul_ln1118_332_fu_1468_p0.read().is_01() || !ap_const_lv26_115.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_332_fu_1468_p0.read()) * sc_biguint<26>(ap_const_lv26_115);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_334_fu_1698_p0() {
    mul_ln1118_334_fu_1698_p0 =  (sc_lv<16>) (sext_ln1118_226_fu_1135263_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_334_fu_1698_p2() {
    mul_ln1118_334_fu_1698_p2 = (!mul_ln1118_334_fu_1698_p0.read().is_01() || !ap_const_lv26_132.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_334_fu_1698_p0.read()) * sc_biguint<26>(ap_const_lv26_132);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_336_fu_1586_p0() {
    mul_ln1118_336_fu_1586_p0 =  (sc_lv<16>) (sext_ln1118_224_fu_1135244_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_336_fu_1586_p2() {
    mul_ln1118_336_fu_1586_p2 = (!mul_ln1118_336_fu_1586_p0.read().is_01() || !ap_const_lv25_85.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_336_fu_1586_p0.read()) * sc_biguint<25>(ap_const_lv25_85);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_337_fu_1473_p0() {
    mul_ln1118_337_fu_1473_p0 =  (sc_lv<16>) (sext_ln1118_224_fu_1135244_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_337_fu_1473_p2() {
    mul_ln1118_337_fu_1473_p2 = (!mul_ln1118_337_fu_1473_p0.read().is_01() || !ap_const_lv25_1FFFF6B.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_337_fu_1473_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF6B);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_339_fu_1808_p0() {
    mul_ln1118_339_fu_1808_p0 =  (sc_lv<16>) (sext_ln1118_226_fu_1135263_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_339_fu_1808_p2() {
    mul_ln1118_339_fu_1808_p2 = (!mul_ln1118_339_fu_1808_p0.read().is_01() || !ap_const_lv26_126.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_339_fu_1808_p0.read()) * sc_biguint<26>(ap_const_lv26_126);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_33_fu_1765_p0() {
    mul_ln1118_33_fu_1765_p0 =  (sc_lv<16>) (sext_ln1118_18_fu_1127932_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_33_fu_1765_p2() {
    mul_ln1118_33_fu_1765_p2 = (!mul_ln1118_33_fu_1765_p0.read().is_01() || !ap_const_lv25_8C.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_33_fu_1765_p0.read()) * sc_biguint<25>(ap_const_lv25_8C);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_341_fu_1594_p0() {
    mul_ln1118_341_fu_1594_p0 =  (sc_lv<16>) (sext_ln1118_226_fu_1135263_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_341_fu_1594_p2() {
    mul_ln1118_341_fu_1594_p2 = (!mul_ln1118_341_fu_1594_p0.read().is_01() || !ap_const_lv26_3FFFEE5.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_341_fu_1594_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFEE5);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_342_fu_1406_p0() {
    mul_ln1118_342_fu_1406_p0 =  (sc_lv<16>) (sext_ln1118_224_fu_1135244_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_342_fu_1406_p2() {
    mul_ln1118_342_fu_1406_p2 = (!mul_ln1118_342_fu_1406_p0.read().is_01() || !ap_const_lv25_D2.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_342_fu_1406_p0.read()) * sc_biguint<25>(ap_const_lv25_D2);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_343_fu_1515_p0() {
    mul_ln1118_343_fu_1515_p0 =  (sc_lv<16>) (sext_ln1118_237_fu_1135738_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_343_fu_1515_p2() {
    mul_ln1118_343_fu_1515_p2 = (!mul_ln1118_343_fu_1515_p0.read().is_01() || !ap_const_lv24_FFFF8F.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_343_fu_1515_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF8F);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_344_fu_1570_p0() {
    mul_ln1118_344_fu_1570_p0 =  (sc_lv<16>) (sext_ln1118_240_fu_1135759_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_344_fu_1570_p2() {
    mul_ln1118_344_fu_1570_p2 = (!mul_ln1118_344_fu_1570_p0.read().is_01() || !ap_const_lv25_93.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_344_fu_1570_p0.read()) * sc_biguint<25>(ap_const_lv25_93);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_346_fu_1787_p0() {
    mul_ln1118_346_fu_1787_p0 =  (sc_lv<16>) (sext_ln1118_236_fu_1135728_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_346_fu_1787_p2() {
    mul_ln1118_346_fu_1787_p2 = (!mul_ln1118_346_fu_1787_p0.read().is_01() || !ap_const_lv26_136.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_346_fu_1787_p0.read()) * sc_biguint<26>(ap_const_lv26_136);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_347_fu_1383_p0() {
    mul_ln1118_347_fu_1383_p0 =  (sc_lv<16>) (sext_ln1118_237_fu_1135738_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_347_fu_1383_p2() {
    mul_ln1118_347_fu_1383_p2 = (!mul_ln1118_347_fu_1383_p0.read().is_01() || !ap_const_lv24_FFFFAE.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_347_fu_1383_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFAE);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_348_fu_1789_p0() {
    mul_ln1118_348_fu_1789_p0 =  (sc_lv<16>) (sext_ln1118_236_fu_1135728_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_348_fu_1789_p2() {
    mul_ln1118_348_fu_1789_p2 = (!mul_ln1118_348_fu_1789_p0.read().is_01() || !ap_const_lv26_187.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_348_fu_1789_p0.read()) * sc_biguint<26>(ap_const_lv26_187);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_34_fu_1739_p0() {
    mul_ln1118_34_fu_1739_p0 =  (sc_lv<16>) (sext_ln1118_18_fu_1127932_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_34_fu_1739_p2() {
    mul_ln1118_34_fu_1739_p2 = (!mul_ln1118_34_fu_1739_p0.read().is_01() || !ap_const_lv25_9D.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_34_fu_1739_p0.read()) * sc_biguint<25>(ap_const_lv25_9D);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_350_fu_1761_p0() {
    mul_ln1118_350_fu_1761_p0 =  (sc_lv<16>) (sext_ln1118_236_fu_1135728_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_350_fu_1761_p2() {
    mul_ln1118_350_fu_1761_p2 = (!mul_ln1118_350_fu_1761_p0.read().is_01() || !ap_const_lv26_3FFFE74.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_350_fu_1761_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFE74);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_351_fu_1738_p0() {
    mul_ln1118_351_fu_1738_p0 =  (sc_lv<16>) (sext_ln1118_240_fu_1135759_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_351_fu_1738_p2() {
    mul_ln1118_351_fu_1738_p2 = (!mul_ln1118_351_fu_1738_p0.read().is_01() || !ap_const_lv25_D8.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_351_fu_1738_p0.read()) * sc_biguint<25>(ap_const_lv25_D8);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_352_fu_1577_p0() {
    mul_ln1118_352_fu_1577_p0 =  (sc_lv<16>) (sext_ln1118_240_fu_1135759_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_352_fu_1577_p2() {
    mul_ln1118_352_fu_1577_p2 = (!mul_ln1118_352_fu_1577_p0.read().is_01() || !ap_const_lv25_1FFFF74.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_352_fu_1577_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF74);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_354_fu_1741_p0() {
    mul_ln1118_354_fu_1741_p0 =  (sc_lv<16>) (sext_ln1118_236_fu_1135728_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_354_fu_1741_p2() {
    mul_ln1118_354_fu_1741_p2 = (!mul_ln1118_354_fu_1741_p0.read().is_01() || !ap_const_lv26_1AD.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_354_fu_1741_p0.read()) * sc_biguint<26>(ap_const_lv26_1AD);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_356_fu_1582_p0() {
    mul_ln1118_356_fu_1582_p0 =  (sc_lv<16>) (sext_ln1118_240_fu_1135759_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_356_fu_1582_p2() {
    mul_ln1118_356_fu_1582_p2 = (!mul_ln1118_356_fu_1582_p0.read().is_01() || !ap_const_lv25_1FFFF13.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_356_fu_1582_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF13);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_358_fu_1641_p0() {
    mul_ln1118_358_fu_1641_p0 =  (sc_lv<16>) (sext_ln1118_239_fu_1135753_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_358_fu_1641_p2() {
    mul_ln1118_358_fu_1641_p2 = (!mul_ln1118_358_fu_1641_p0.read().is_01() || !ap_const_lv23_23.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_358_fu_1641_p0.read()) * sc_biguint<23>(ap_const_lv23_23);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_360_fu_1415_p0() {
    mul_ln1118_360_fu_1415_p0 =  (sc_lv<16>) (sext_ln1118_237_fu_1135738_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_360_fu_1415_p2() {
    mul_ln1118_360_fu_1415_p2 = (!mul_ln1118_360_fu_1415_p0.read().is_01() || !ap_const_lv24_FFFFA9.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_360_fu_1415_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFA9);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_361_fu_1701_p0() {
    mul_ln1118_361_fu_1701_p0 =  (sc_lv<16>) (sext_ln1118_240_fu_1135759_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_361_fu_1701_p2() {
    mul_ln1118_361_fu_1701_p2 = (!mul_ln1118_361_fu_1701_p0.read().is_01() || !ap_const_lv25_1FFFF6C.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_361_fu_1701_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF6C);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_362_fu_1531_p0() {
    mul_ln1118_362_fu_1531_p0 =  (sc_lv<16>) (sext_ln1118_236_fu_1135728_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_362_fu_1531_p2() {
    mul_ln1118_362_fu_1531_p2 = (!mul_ln1118_362_fu_1531_p0.read().is_01() || !ap_const_lv26_3FFFEF9.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_362_fu_1531_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFEF9);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_367_fu_1536_p0() {
    mul_ln1118_367_fu_1536_p0 =  (sc_lv<16>) (sext_ln1118_253_fu_1136265_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_367_fu_1536_p2() {
    mul_ln1118_367_fu_1536_p2 = (!mul_ln1118_367_fu_1536_p0.read().is_01() || !ap_const_lv24_FFFFB7.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_367_fu_1536_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFB7);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_368_fu_1480_p0() {
    mul_ln1118_368_fu_1480_p0 =  (sc_lv<16>) (sext_ln1118_253_fu_1136265_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_368_fu_1480_p2() {
    mul_ln1118_368_fu_1480_p2 = (!mul_ln1118_368_fu_1480_p0.read().is_01() || !ap_const_lv24_FFFFAB.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_368_fu_1480_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFAB);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_369_fu_1425_p0() {
    mul_ln1118_369_fu_1425_p0 =  (sc_lv<16>) (sext_ln1118_252_fu_1136257_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_369_fu_1425_p2() {
    mul_ln1118_369_fu_1425_p2 = (!mul_ln1118_369_fu_1425_p0.read().is_01() || !ap_const_lv25_1FFFF5B.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_369_fu_1425_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF5B);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_36_fu_1429_p0() {
    mul_ln1118_36_fu_1429_p0 =  (sc_lv<16>) (sext_ln1118_20_fu_1127949_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_36_fu_1429_p2() {
    mul_ln1118_36_fu_1429_p2 = (!mul_ln1118_36_fu_1429_p0.read().is_01() || !ap_const_lv26_3FFFEBC.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_36_fu_1429_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFEBC);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_370_fu_1428_p0() {
    mul_ln1118_370_fu_1428_p0 =  (sc_lv<16>) (sext_ln1118_255_fu_1136277_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_370_fu_1428_p2() {
    mul_ln1118_370_fu_1428_p2 = (!mul_ln1118_370_fu_1428_p0.read().is_01() || !ap_const_lv23_3A.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_370_fu_1428_p0.read()) * sc_biguint<23>(ap_const_lv23_3A);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_372_fu_1700_p0() {
    mul_ln1118_372_fu_1700_p0 = sext_ln1118_254_fu_1136272_p0.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_372_fu_1700_p2() {
    mul_ln1118_372_fu_1700_p2 = (!mul_ln1118_372_fu_1700_p0.read().is_01() || !ap_const_lv22_17.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_372_fu_1700_p0.read()) * sc_biguint<22>(ap_const_lv22_17);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_373_fu_1755_p0() {
    mul_ln1118_373_fu_1755_p0 =  (sc_lv<16>) (sext_ln1118_251_fu_1136247_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_373_fu_1755_p2() {
    mul_ln1118_373_fu_1755_p2 = (!mul_ln1118_373_fu_1755_p0.read().is_01() || !ap_const_lv26_12D.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_373_fu_1755_p0.read()) * sc_biguint<26>(ap_const_lv26_12D);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_375_fu_1595_p0() {
    mul_ln1118_375_fu_1595_p0 =  (sc_lv<16>) (sext_ln1118_251_fu_1136247_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_375_fu_1595_p2() {
    mul_ln1118_375_fu_1595_p2 = (!mul_ln1118_375_fu_1595_p0.read().is_01() || !ap_const_lv26_150.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_375_fu_1595_p0.read()) * sc_biguint<26>(ap_const_lv26_150);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_377_fu_1540_p0() {
    mul_ln1118_377_fu_1540_p0 =  (sc_lv<16>) (sext_ln1118_251_fu_1136247_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_377_fu_1540_p2() {
    mul_ln1118_377_fu_1540_p2 = (!mul_ln1118_377_fu_1540_p0.read().is_01() || !ap_const_lv26_3FFFE64.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_377_fu_1540_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFE64);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_378_fu_1598_p0() {
    mul_ln1118_378_fu_1598_p0 =  (sc_lv<16>) (sext_ln1118_252_fu_1136257_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_378_fu_1598_p2() {
    mul_ln1118_378_fu_1598_p2 = (!mul_ln1118_378_fu_1598_p0.read().is_01() || !ap_const_lv25_1FFFF1A.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_378_fu_1598_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF1A);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_379_fu_1545_p0() {
    mul_ln1118_379_fu_1545_p0 =  (sc_lv<16>) (sext_ln1118_255_fu_1136277_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_379_fu_1545_p2() {
    mul_ln1118_379_fu_1545_p2 = (!mul_ln1118_379_fu_1545_p0.read().is_01() || !ap_const_lv23_7FFFDB.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_379_fu_1545_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFDB);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_37_fu_1796_p0() {
    mul_ln1118_37_fu_1796_p0 =  (sc_lv<16>) (sext_ln1118_18_fu_1127932_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_37_fu_1796_p2() {
    mul_ln1118_37_fu_1796_p2 = (!mul_ln1118_37_fu_1796_p0.read().is_01() || !ap_const_lv25_1FFFF5B.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_37_fu_1796_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF5B);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_381_fu_1601_p0() {
    mul_ln1118_381_fu_1601_p0 =  (sc_lv<16>) (sext_ln1118_252_fu_1136257_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_381_fu_1601_p2() {
    mul_ln1118_381_fu_1601_p2 = (!mul_ln1118_381_fu_1601_p0.read().is_01() || !ap_const_lv25_1FFFF35.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_381_fu_1601_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF35);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_382_fu_1494_p0() {
    mul_ln1118_382_fu_1494_p0 =  (sc_lv<16>) (sext_ln1118_251_fu_1136247_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_382_fu_1494_p2() {
    mul_ln1118_382_fu_1494_p2 = (!mul_ln1118_382_fu_1494_p0.read().is_01() || !ap_const_lv26_158.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_382_fu_1494_p0.read()) * sc_biguint<26>(ap_const_lv26_158);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_384_fu_1530_p0() {
    mul_ln1118_384_fu_1530_p0 =  (sc_lv<16>) (sext_ln1118_275_fu_1136808_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_384_fu_1530_p2() {
    mul_ln1118_384_fu_1530_p2 = (!mul_ln1118_384_fu_1530_p0.read().is_01() || !ap_const_lv23_7FFFDA.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_384_fu_1530_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFDA);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_385_fu_1645_p0() {
    mul_ln1118_385_fu_1645_p0 =  (sc_lv<16>) (sext_ln1118_272_fu_1136785_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_385_fu_1645_p2() {
    mul_ln1118_385_fu_1645_p2 = (!mul_ln1118_385_fu_1645_p0.read().is_01() || !ap_const_lv24_65.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_385_fu_1645_p0.read()) * sc_biguint<24>(ap_const_lv24_65);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_388_fu_1476_p0() {
    mul_ln1118_388_fu_1476_p0 =  (sc_lv<16>) (sext_ln1118_272_fu_1136785_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_388_fu_1476_p2() {
    mul_ln1118_388_fu_1476_p2 = (!mul_ln1118_388_fu_1476_p0.read().is_01() || !ap_const_lv24_FFFF9E.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_388_fu_1476_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF9E);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_391_fu_1821_p0() {
    mul_ln1118_391_fu_1821_p0 =  (sc_lv<16>) (sext_ln1118_272_fu_1136785_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_391_fu_1821_p2() {
    mul_ln1118_391_fu_1821_p2 = (!mul_ln1118_391_fu_1821_p0.read().is_01() || !ap_const_lv24_FFFFB2.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_391_fu_1821_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFB2);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_392_fu_1651_p0() {
    mul_ln1118_392_fu_1651_p0 =  (sc_lv<16>) (sext_ln1118_271_fu_1136774_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_392_fu_1651_p2() {
    mul_ln1118_392_fu_1651_p2 = (!mul_ln1118_392_fu_1651_p0.read().is_01() || !ap_const_lv25_D5.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_392_fu_1651_p0.read()) * sc_biguint<25>(ap_const_lv25_D5);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_394_fu_1767_p0() {
    mul_ln1118_394_fu_1767_p0 =  (sc_lv<16>) (sext_ln1118_272_fu_1136785_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_394_fu_1767_p2() {
    mul_ln1118_394_fu_1767_p2 = (!mul_ln1118_394_fu_1767_p0.read().is_01() || !ap_const_lv24_52.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_394_fu_1767_p0.read()) * sc_biguint<24>(ap_const_lv24_52);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_395_fu_1369_p0() {
    mul_ln1118_395_fu_1369_p0 =  (sc_lv<16>) (sext_ln1118_272_fu_1136785_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_395_fu_1369_p2() {
    mul_ln1118_395_fu_1369_p2 = (!mul_ln1118_395_fu_1369_p0.read().is_01() || !ap_const_lv24_6F.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_395_fu_1369_p0.read()) * sc_biguint<24>(ap_const_lv24_6F);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_396_fu_1799_p0() {
    mul_ln1118_396_fu_1799_p0 = sext_ln1118_270_fu_1136769_p0.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_396_fu_1799_p2() {
    mul_ln1118_396_fu_1799_p2 = (!mul_ln1118_396_fu_1799_p0.read().is_01() || !ap_const_lv26_117.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_396_fu_1799_p0.read()) * sc_biguint<26>(ap_const_lv26_117);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_397_fu_1395_p0() {
    mul_ln1118_397_fu_1395_p0 =  (sc_lv<16>) (sext_ln1118_272_fu_1136785_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_397_fu_1395_p2() {
    mul_ln1118_397_fu_1395_p2 = (!mul_ln1118_397_fu_1395_p0.read().is_01() || !ap_const_lv24_54.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_397_fu_1395_p0.read()) * sc_biguint<24>(ap_const_lv24_54);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_398_fu_1824_p0() {
    mul_ln1118_398_fu_1824_p0 =  (sc_lv<16>) (sext_ln1118_271_fu_1136774_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_398_fu_1824_p2() {
    mul_ln1118_398_fu_1824_p2 = (!mul_ln1118_398_fu_1824_p0.read().is_01() || !ap_const_lv25_1FFFF05.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_398_fu_1824_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF05);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_399_fu_1640_p0() {
    mul_ln1118_399_fu_1640_p0 =  (sc_lv<16>) (sext_ln1118_272_fu_1136785_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_399_fu_1640_p2() {
    mul_ln1118_399_fu_1640_p2 = (!mul_ln1118_399_fu_1640_p0.read().is_01() || !ap_const_lv24_FFFFB1.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_399_fu_1640_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFB1);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_39_fu_1798_p0() {
    mul_ln1118_39_fu_1798_p0 =  (sc_lv<16>) (sext_ln1118_20_fu_1127949_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_39_fu_1798_p2() {
    mul_ln1118_39_fu_1798_p2 = (!mul_ln1118_39_fu_1798_p0.read().is_01() || !ap_const_lv26_3FFFE51.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_39_fu_1798_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFE51);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_400_fu_1614_p0() {
    mul_ln1118_400_fu_1614_p0 =  (sc_lv<16>) (sext_ln1118_272_fu_1136785_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_400_fu_1614_p2() {
    mul_ln1118_400_fu_1614_p2 = (!mul_ln1118_400_fu_1614_p0.read().is_01() || !ap_const_lv24_FFFFB4.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_400_fu_1614_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFB4);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_401_fu_1507_p0() {
    mul_ln1118_401_fu_1507_p0 =  (sc_lv<16>) (sext_ln1118_272_fu_1136785_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_401_fu_1507_p2() {
    mul_ln1118_401_fu_1507_p2 = (!mul_ln1118_401_fu_1507_p0.read().is_01() || !ap_const_lv24_FFFF8A.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_401_fu_1507_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF8A);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_402_fu_1373_p0() {
    mul_ln1118_402_fu_1373_p0 =  (sc_lv<16>) (sext_ln1118_271_fu_1136774_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_402_fu_1373_p2() {
    mul_ln1118_402_fu_1373_p2 = (!mul_ln1118_402_fu_1373_p0.read().is_01() || !ap_const_lv25_1FFFF7D.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_402_fu_1373_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF7D);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_403_fu_1833_p0() {
    mul_ln1118_403_fu_1833_p0 = sext_ln1118_274_fu_1136803_p0.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_403_fu_1833_p2() {
    mul_ln1118_403_fu_1833_p2 = (!mul_ln1118_403_fu_1833_p0.read().is_01() || !ap_const_lv22_3FFFED.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_403_fu_1833_p0.read()) * sc_bigint<22>(ap_const_lv22_3FFFED);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_404_fu_1699_p0() {
    mul_ln1118_404_fu_1699_p0 =  (sc_lv<16>) (sext_ln1118_286_fu_1137307_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_404_fu_1699_p2() {
    mul_ln1118_404_fu_1699_p2 = (!mul_ln1118_404_fu_1699_p0.read().is_01() || !ap_const_lv25_B6.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_404_fu_1699_p0.read()) * sc_biguint<25>(ap_const_lv25_B6);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_405_fu_1538_p0() {
    mul_ln1118_405_fu_1538_p0 =  (sc_lv<16>) (sext_ln1118_285_fu_1137299_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_405_fu_1538_p2() {
    mul_ln1118_405_fu_1538_p2 = (!mul_ln1118_405_fu_1538_p0.read().is_01() || !ap_const_lv26_3FFFEAB.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_405_fu_1538_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFEAB);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_406_fu_1782_p0() {
    mul_ln1118_406_fu_1782_p0 =  (sc_lv<16>) (sext_ln1118_289_fu_1137330_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_406_fu_1782_p2() {
    mul_ln1118_406_fu_1782_p2 = (!mul_ln1118_406_fu_1782_p0.read().is_01() || !ap_const_lv23_7FFFCD.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_406_fu_1782_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFCD);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_410_fu_1435_p0() {
    mul_ln1118_410_fu_1435_p0 =  (sc_lv<16>) (sext_ln1118_286_fu_1137307_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_410_fu_1435_p2() {
    mul_ln1118_410_fu_1435_p2 = (!mul_ln1118_410_fu_1435_p0.read().is_01() || !ap_const_lv25_A2.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_410_fu_1435_p0.read()) * sc_biguint<25>(ap_const_lv25_A2);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_411_fu_1544_p0() {
    mul_ln1118_411_fu_1544_p0 =  (sc_lv<16>) (sext_ln1118_285_fu_1137299_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_411_fu_1544_p2() {
    mul_ln1118_411_fu_1544_p2 = (!mul_ln1118_411_fu_1544_p0.read().is_01() || !ap_const_lv26_3FFFE89.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_411_fu_1544_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFE89);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_413_fu_1605_p0() {
    mul_ln1118_413_fu_1605_p0 =  (sc_lv<16>) (sext_ln1118_286_fu_1137307_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_413_fu_1605_p2() {
    mul_ln1118_413_fu_1605_p2 = (!mul_ln1118_413_fu_1605_p0.read().is_01() || !ap_const_lv25_1FFFF59.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_413_fu_1605_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF59);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_414_fu_1358_p0() {
    mul_ln1118_414_fu_1358_p0 =  (sc_lv<16>) (sext_ln1118_287_fu_1137319_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_414_fu_1358_p2() {
    mul_ln1118_414_fu_1358_p2 = (!mul_ln1118_414_fu_1358_p0.read().is_01() || !ap_const_lv24_FFFF87.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_414_fu_1358_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF87);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_415_fu_1721_p0() {
    mul_ln1118_415_fu_1721_p0 =  (sc_lv<16>) (sext_ln1118_286_fu_1137307_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_415_fu_1721_p2() {
    mul_ln1118_415_fu_1721_p2 = (!mul_ln1118_415_fu_1721_p0.read().is_01() || !ap_const_lv25_1FFFF1D.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_415_fu_1721_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF1D);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_416_fu_1608_p0() {
    mul_ln1118_416_fu_1608_p0 =  (sc_lv<16>) (sext_ln1118_285_fu_1137299_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_416_fu_1608_p2() {
    mul_ln1118_416_fu_1608_p2 = (!mul_ln1118_416_fu_1608_p0.read().is_01() || !ap_const_lv26_130.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_416_fu_1608_p0.read()) * sc_biguint<26>(ap_const_lv26_130);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_417_fu_1780_p0() {
    mul_ln1118_417_fu_1780_p0 =  (sc_lv<16>) (sext_ln1118_287_fu_1137319_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_417_fu_1780_p2() {
    mul_ln1118_417_fu_1780_p2 = (!mul_ln1118_417_fu_1780_p0.read().is_01() || !ap_const_lv24_FFFFA8.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_417_fu_1780_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFA8);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_418_fu_1610_p0() {
    mul_ln1118_418_fu_1610_p0 =  (sc_lv<16>) (sext_ln1118_289_fu_1137330_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_418_fu_1610_p2() {
    mul_ln1118_418_fu_1610_p2 = (!mul_ln1118_418_fu_1610_p0.read().is_01() || !ap_const_lv23_7FFFD6.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_418_fu_1610_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFD6);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_419_fu_1668_p0() {
    mul_ln1118_419_fu_1668_p0 =  (sc_lv<16>) (sext_ln1118_286_fu_1137307_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_419_fu_1668_p2() {
    mul_ln1118_419_fu_1668_p2 = (!mul_ln1118_419_fu_1668_p0.read().is_01() || !ap_const_lv25_1FFFF53.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_419_fu_1668_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF53);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_41_fu_1633_p0() {
    mul_ln1118_41_fu_1633_p0 =  (sc_lv<16>) (sext_ln1118_18_fu_1127932_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_41_fu_1633_p2() {
    mul_ln1118_41_fu_1633_p2 = (!mul_ln1118_41_fu_1633_p0.read().is_01() || !ap_const_lv25_1FFFF50.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_41_fu_1633_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF50);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_421_fu_1727_p0() {
    mul_ln1118_421_fu_1727_p0 =  (sc_lv<16>) (sext_ln1118_289_fu_1137330_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_421_fu_1727_p2() {
    mul_ln1118_421_fu_1727_p2 = (!mul_ln1118_421_fu_1727_p0.read().is_01() || !ap_const_lv23_7FFFCA.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_421_fu_1727_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFCA);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_422_fu_1386_p0() {
    mul_ln1118_422_fu_1386_p0 =  (sc_lv<16>) (sext_ln1118_285_fu_1137299_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_422_fu_1386_p2() {
    mul_ln1118_422_fu_1386_p2 = (!mul_ln1118_422_fu_1386_p0.read().is_01() || !ap_const_lv26_3FFFEA1.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_422_fu_1386_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFEA1);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_424_fu_1502_p0() {
    mul_ln1118_424_fu_1502_p0 =  (sc_lv<16>) (sext_ln1118_301_fu_1137853_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_424_fu_1502_p2() {
    mul_ln1118_424_fu_1502_p2 = (!mul_ln1118_424_fu_1502_p0.read().is_01() || !ap_const_lv23_7FFFC3.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_424_fu_1502_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFC3);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_426_fu_1483_p0() {
    mul_ln1118_426_fu_1483_p0 =  (sc_lv<16>) (sext_ln1118_302_fu_1137859_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_426_fu_1483_p2() {
    mul_ln1118_426_fu_1483_p2 = (!mul_ln1118_426_fu_1483_p0.read().is_01() || !ap_const_lv26_185.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_426_fu_1483_p0.read()) * sc_biguint<26>(ap_const_lv26_185);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_427_fu_1554_p0() {
    mul_ln1118_427_fu_1554_p0 =  (sc_lv<16>) (sext_ln1118_302_fu_1137859_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_427_fu_1554_p2() {
    mul_ln1118_427_fu_1554_p2 = (!mul_ln1118_427_fu_1554_p0.read().is_01() || !ap_const_lv26_15C.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_427_fu_1554_p0.read()) * sc_biguint<26>(ap_const_lv26_15C);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_42_fu_1396_p0() {
    mul_ln1118_42_fu_1396_p0 =  (sc_lv<16>) (sext_ln1118_20_fu_1127949_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_42_fu_1396_p2() {
    mul_ln1118_42_fu_1396_p2 = (!mul_ln1118_42_fu_1396_p0.read().is_01() || !ap_const_lv26_3FFFE37.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_42_fu_1396_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFE37);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_431_fu_1450_p0() {
    mul_ln1118_431_fu_1450_p0 =  (sc_lv<16>) (sext_ln1118_302_fu_1137859_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_431_fu_1450_p2() {
    mul_ln1118_431_fu_1450_p2 = (!mul_ln1118_431_fu_1450_p0.read().is_01() || !ap_const_lv26_146.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_431_fu_1450_p0.read()) * sc_biguint<26>(ap_const_lv26_146);
}

}

