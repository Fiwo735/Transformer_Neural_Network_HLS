#include "myproject.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void myproject::thread_ap_clk_no_reset_() {
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_CS_fsm = ap_ST_fsm_state1;
    } else {
        ap_CS_fsm = ap_NS_fsm.read();
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_enable_reg_pp5_iter0 = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp5_stage0.read()) && 
             esl_seteq<1,1,1>(ap_block_pp5_stage0_subdone.read(), ap_const_boolean_0) && 
             esl_seteq<1,1,1>(ap_const_logic_1, ap_condition_pp5_exit_iter0_state23.read()))) {
            ap_enable_reg_pp5_iter0 = ap_const_logic_0;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read())) {
            ap_enable_reg_pp5_iter0 = ap_const_logic_1;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_enable_reg_pp5_iter1 = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_block_pp5_stage0_subdone.read(), ap_const_boolean_0) && 
             esl_seteq<1,1,1>(ap_const_logic_1, ap_condition_pp5_exit_iter0_state23.read()))) {
            ap_enable_reg_pp5_iter1 = (ap_condition_pp5_exit_iter0_state23.read() ^ ap_const_logic_1);
        } else if (esl_seteq<1,1,1>(ap_block_pp5_stage0_subdone.read(), ap_const_boolean_0)) {
            ap_enable_reg_pp5_iter1 = ap_enable_reg_pp5_iter0.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read())) {
            ap_enable_reg_pp5_iter1 = ap_const_logic_0;
        }
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        i_0_0_reg_233 = add_ln36_reg_105445.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        i_0_0_reg_233 = ap_const_lv5_0;
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read())) {
        i_0_1_reg_244 = add_ln36_1_reg_106414.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        i_0_1_reg_244 = ap_const_lv5_0;
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read())) {
        i_0_2_reg_255 = add_ln36_2_reg_107383.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        i_0_2_reg_255 = ap_const_lv5_0;
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        i_0_3_reg_266 = add_ln36_3_reg_108352.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        i_0_3_reg_266 = ap_const_lv5_0;
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read())) {
        i_0_4_reg_277 = add_ln36_4_reg_109321.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read())) {
        i_0_4_reg_277 = ap_const_lv5_0;
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read())) {
        j1_0_reg_288 = ap_const_lv3_0;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp5_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp5_stage0_11001.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp5_iter0.read()) && 
                esl_seteq<1,1,1>(icmp_ln46_fu_104434_p2.read(), ap_const_lv1_0))) {
        j1_0_reg_288 = j_fu_104440_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        add_ln1192_104_reg_105210 = add_ln1192_104_fu_389_p2.read();
        add_ln1192_106_reg_105286 = add_ln1192_106_fu_395_p2.read();
        add_ln1192_137_reg_105326 = add_ln1192_137_fu_401_p2.read();
        add_ln1192_2_reg_104486 = add_ln1192_2_fu_329_p2.read();
        add_ln1192_37_reg_104790 = add_ln1192_37_fu_353_p2.read();
        add_ln1192_39_reg_104866 = add_ln1192_39_fu_359_p2.read();
        add_ln1192_41_reg_104942 = add_ln1192_41_fu_365_p2.read();
        add_ln1192_4_reg_104526 = add_ln1192_4_fu_335_p2.read();
        add_ln1192_6_reg_104602 = add_ln1192_6_fu_341_p2.read();
        add_ln1192_70_reg_105018 = add_ln1192_70_fu_371_p2.read();
        add_ln1192_72_reg_105094 = add_ln1192_72_fu_377_p2.read();
        add_ln1192_74_reg_105134 = add_ln1192_74_fu_383_p2.read();
        add_ln1192_8_reg_104678 = add_ln1192_8_fu_347_p2.read();
        add_ln36_5_reg_105402 = add_ln36_5_fu_407_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        add_ln1192_1843_reg_107393 = add_ln1192_1843_fu_62810_p2.read();
        add_ln1192_1844_reg_107433 = add_ln1192_1844_fu_62816_p2.read();
        add_ln1192_1845_reg_107509 = add_ln1192_1845_fu_62822_p2.read();
        add_ln1192_1846_reg_107585 = add_ln1192_1846_fu_62828_p2.read();
        add_ln1192_1847_reg_107697 = add_ln1192_1847_fu_62834_p2.read();
        add_ln1192_1848_reg_107773 = add_ln1192_1848_fu_62840_p2.read();
        add_ln1192_1849_reg_107849 = add_ln1192_1849_fu_62846_p2.read();
        add_ln1192_1850_reg_107925 = add_ln1192_1850_fu_62852_p2.read();
        add_ln1192_1851_reg_108001 = add_ln1192_1851_fu_62858_p2.read();
        add_ln1192_1852_reg_108041 = add_ln1192_1852_fu_62864_p2.read();
        add_ln1192_1853_reg_108117 = add_ln1192_1853_fu_62870_p2.read();
        add_ln1192_1854_reg_108193 = add_ln1192_1854_fu_62876_p2.read();
        add_ln1192_1855_reg_108233 = add_ln1192_1855_fu_62882_p2.read();
        add_ln36_8_reg_108309 = add_ln36_8_fu_62888_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read())) {
        add_ln1192_2757_reg_108362 = add_ln1192_2757_fu_83637_p2.read();
        add_ln1192_2758_reg_108402 = add_ln1192_2758_fu_83643_p2.read();
        add_ln1192_2759_reg_108478 = add_ln1192_2759_fu_83649_p2.read();
        add_ln1192_2760_reg_108554 = add_ln1192_2760_fu_83655_p2.read();
        add_ln1192_2761_reg_108666 = add_ln1192_2761_fu_83661_p2.read();
        add_ln1192_2762_reg_108742 = add_ln1192_2762_fu_83667_p2.read();
        add_ln1192_2763_reg_108818 = add_ln1192_2763_fu_83673_p2.read();
        add_ln1192_2764_reg_108894 = add_ln1192_2764_fu_83679_p2.read();
        add_ln1192_2765_reg_108970 = add_ln1192_2765_fu_83685_p2.read();
        add_ln1192_2766_reg_109010 = add_ln1192_2766_fu_83691_p2.read();
        add_ln1192_2767_reg_109086 = add_ln1192_2767_fu_83697_p2.read();
        add_ln1192_2768_reg_109162 = add_ln1192_2768_fu_83703_p2.read();
        add_ln1192_2769_reg_109202 = add_ln1192_2769_fu_83709_p2.read();
        add_ln36_9_reg_109278 = add_ln36_9_fu_83715_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        add_ln1192_338_reg_105455 = add_ln1192_338_fu_21156_p2.read();
        add_ln1192_340_reg_105495 = add_ln1192_340_fu_21162_p2.read();
        add_ln1192_342_reg_105571 = add_ln1192_342_fu_21168_p2.read();
        add_ln1192_344_reg_105647 = add_ln1192_344_fu_21174_p2.read();
        add_ln1192_351_reg_105759 = add_ln1192_351_fu_21180_p2.read();
        add_ln1192_353_reg_105835 = add_ln1192_353_fu_21186_p2.read();
        add_ln1192_355_reg_105911 = add_ln1192_355_fu_21192_p2.read();
        add_ln1192_384_reg_105987 = add_ln1192_384_fu_21198_p2.read();
        add_ln1192_386_reg_106063 = add_ln1192_386_fu_21204_p2.read();
        add_ln1192_388_reg_106103 = add_ln1192_388_fu_21210_p2.read();
        add_ln1192_418_reg_106179 = add_ln1192_418_fu_21216_p2.read();
        add_ln1192_420_reg_106255 = add_ln1192_420_fu_21222_p2.read();
        add_ln1192_451_reg_106295 = add_ln1192_451_fu_21228_p2.read();
        add_ln36_6_reg_106371 = add_ln36_6_fu_21234_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        add_ln1192_929_reg_106424 = add_ln1192_929_fu_41983_p2.read();
        add_ln1192_930_reg_106464 = add_ln1192_930_fu_41989_p2.read();
        add_ln1192_931_reg_106540 = add_ln1192_931_fu_41995_p2.read();
        add_ln1192_932_reg_106616 = add_ln1192_932_fu_42001_p2.read();
        add_ln1192_933_reg_106728 = add_ln1192_933_fu_42007_p2.read();
        add_ln1192_934_reg_106804 = add_ln1192_934_fu_42013_p2.read();
        add_ln1192_935_reg_106880 = add_ln1192_935_fu_42019_p2.read();
        add_ln1192_936_reg_106956 = add_ln1192_936_fu_42025_p2.read();
        add_ln1192_937_reg_107032 = add_ln1192_937_fu_42031_p2.read();
        add_ln1192_938_reg_107072 = add_ln1192_938_fu_42037_p2.read();
        add_ln1192_939_reg_107148 = add_ln1192_939_fu_42043_p2.read();
        add_ln1192_940_reg_107224 = add_ln1192_940_fu_42049_p2.read();
        add_ln1192_941_reg_107264 = add_ln1192_941_fu_42055_p2.read();
        add_ln36_7_reg_107340 = add_ln36_7_fu_42061_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        add_ln36_1_reg_106414 = add_ln36_1_fu_21246_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        add_ln36_2_reg_107383 = add_ln36_2_fu_42073_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read())) {
        add_ln36_3_reg_108352 = add_ln36_3_fu_62900_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        add_ln36_4_reg_109321 = add_ln36_4_fu_83727_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        add_ln36_reg_105445 = add_ln36_fu_419_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp5_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp5_stage0_11001.read(), ap_const_boolean_0))) {
        icmp_ln46_reg_109326 = icmp_ln46_fu_104434_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp5_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp5_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(icmp_ln46_fu_104434_p2.read(), ap_const_lv1_0))) {
        zext_ln48_reg_109335 = zext_ln48_fu_104446_p1.read();
    }
}

void myproject::thread_ap_NS_fsm() {
    switch (ap_CS_fsm.read().to_uint64()) {
        case 1 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
                ap_NS_fsm = ap_ST_fsm_state2;
            } else {
                ap_NS_fsm = ap_ST_fsm_state1;
            }
            break;
        case 2 : 
            ap_NS_fsm = ap_ST_fsm_state3;
            break;
        case 4 : 
            ap_NS_fsm = ap_ST_fsm_state4;
            break;
        case 8 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln36_fu_413_p2.read()))) {
                ap_NS_fsm = ap_ST_fsm_state5;
            } else {
                ap_NS_fsm = ap_ST_fsm_state6;
            }
            break;
        case 16 : 
            ap_NS_fsm = ap_ST_fsm_state4;
            break;
        case 32 : 
            ap_NS_fsm = ap_ST_fsm_state7;
            break;
        case 64 : 
            ap_NS_fsm = ap_ST_fsm_state8;
            break;
        case 128 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln36_1_fu_21240_p2.read()))) {
                ap_NS_fsm = ap_ST_fsm_state9;
            } else {
                ap_NS_fsm = ap_ST_fsm_state10;
            }
            break;
        case 256 : 
            ap_NS_fsm = ap_ST_fsm_state8;
            break;
        case 512 : 
            ap_NS_fsm = ap_ST_fsm_state11;
            break;
        case 1024 : 
            ap_NS_fsm = ap_ST_fsm_state12;
            break;
        case 2048 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln36_2_fu_42067_p2.read()))) {
                ap_NS_fsm = ap_ST_fsm_state13;
            } else {
                ap_NS_fsm = ap_ST_fsm_state14;
            }
            break;
        case 4096 : 
            ap_NS_fsm = ap_ST_fsm_state12;
            break;
        case 8192 : 
            ap_NS_fsm = ap_ST_fsm_state15;
            break;
        case 16384 : 
            ap_NS_fsm = ap_ST_fsm_state16;
            break;
        case 32768 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln36_3_fu_62894_p2.read()))) {
                ap_NS_fsm = ap_ST_fsm_state17;
            } else {
                ap_NS_fsm = ap_ST_fsm_state18;
            }
            break;
        case 65536 : 
            ap_NS_fsm = ap_ST_fsm_state16;
            break;
        case 131072 : 
            ap_NS_fsm = ap_ST_fsm_state19;
            break;
        case 262144 : 
            ap_NS_fsm = ap_ST_fsm_state20;
            break;
        case 524288 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln36_4_fu_83721_p2.read()))) {
                ap_NS_fsm = ap_ST_fsm_state21;
            } else {
                ap_NS_fsm = ap_ST_fsm_state22;
            }
            break;
        case 1048576 : 
            ap_NS_fsm = ap_ST_fsm_state20;
            break;
        case 2097152 : 
            ap_NS_fsm = ap_ST_fsm_pp5_stage0;
            break;
        case 4194304 : 
            if (!(esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp5_iter0.read()) && esl_seteq<1,1,1>(ap_block_pp5_stage0_subdone.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(icmp_ln46_fu_104434_p2.read(), ap_const_lv1_1))) {
                ap_NS_fsm = ap_ST_fsm_pp5_stage0;
            } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp5_iter0.read()) && esl_seteq<1,1,1>(ap_block_pp5_stage0_subdone.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(icmp_ln46_fu_104434_p2.read(), ap_const_lv1_1))) {
                ap_NS_fsm = ap_ST_fsm_state25;
            } else {
                ap_NS_fsm = ap_ST_fsm_pp5_stage0;
            }
            break;
        case 8388608 : 
            ap_NS_fsm = ap_ST_fsm_state1;
            break;
        default : 
            ap_NS_fsm =  (sc_lv<24>) ("XXXXXXXXXXXXXXXXXXXXXXXX");
            break;
    }
}

}

