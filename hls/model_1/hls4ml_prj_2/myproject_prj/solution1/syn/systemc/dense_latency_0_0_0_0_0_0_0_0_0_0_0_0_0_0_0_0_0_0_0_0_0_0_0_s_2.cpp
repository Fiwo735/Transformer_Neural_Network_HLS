#include "dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_ap_clk_no_reset_() {
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_CS_fsm = ap_ST_fsm_state1;
    } else {
        ap_CS_fsm = ap_NS_fsm.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1) && esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1))) {
        add_ln703_108_reg_1149633 = add_ln703_108_fu_1140498_p2.read();
        add_ln703_110_reg_1149638 = add_ln703_110_fu_1140510_p2.read();
        add_ln703_111_reg_1149643 = add_ln703_111_fu_1140516_p2.read();
        add_ln703_115_reg_1149648 = add_ln703_115_fu_1140522_p2.read();
        add_ln703_128_reg_1149653 = add_ln703_128_fu_1140556_p2.read();
        add_ln703_12_reg_1149578 = add_ln703_12_fu_1140100_p2.read();
        add_ln703_130_reg_1149658 = add_ln703_130_fu_1140568_p2.read();
        add_ln703_133_reg_1149663 = add_ln703_133_fu_1140586_p2.read();
        add_ln703_137_reg_1149668 = add_ln703_137_fu_1140598_p2.read();
        add_ln703_138_reg_1149673 = add_ln703_138_fu_1140604_p2.read();
        add_ln703_15_reg_1149583 = add_ln703_15_fu_1140118_p2.read();
        add_ln703_163_reg_1149678 = add_ln703_163_fu_1140692_p2.read();
        add_ln703_166_reg_1149683 = add_ln703_166_fu_1140714_p2.read();
        add_ln703_167_reg_1149688 = add_ln703_167_fu_1140720_p2.read();
        add_ln703_193_reg_1149693 = add_ln703_193_fu_1140812_p2.read();
        add_ln703_196_reg_1149698 = add_ln703_196_fu_1140834_p2.read();
        add_ln703_201_reg_1149703 = add_ln703_201_fu_1140840_p2.read();
        add_ln703_20_reg_1149588 = add_ln703_20_fu_1140136_p2.read();
        add_ln703_216_reg_1149708 = add_ln703_216_fu_1140886_p2.read();
        add_ln703_219_reg_1149713 = add_ln703_219_fu_1140908_p2.read();
        add_ln703_21_reg_1149593 = add_ln703_21_fu_1140142_p2.read();
        add_ln703_222_reg_1149718 = add_ln703_222_fu_1140926_p2.read();
        add_ln703_231_reg_1149723 = add_ln703_231_fu_1140968_p2.read();
        add_ln703_232_reg_1149728 = add_ln703_232_fu_1140974_p2.read();
        add_ln703_255_reg_1149733 = add_ln703_255_fu_1141066_p2.read();
        add_ln703_262_reg_1149738 = add_ln703_262_fu_1141116_p2.read();
        add_ln703_263_reg_1149743 = add_ln703_263_fu_1141122_p2.read();
        add_ln703_285_reg_1149748 = add_ln703_285_fu_1141214_p2.read();
        add_ln703_291_reg_1149753 = add_ln703_291_fu_1141254_p2.read();
        add_ln703_314_reg_1149758 = add_ln703_314_fu_1141338_p2.read();
        add_ln703_316_reg_1149763 = add_ln703_316_fu_1141350_p2.read();
        add_ln703_317_reg_1149768 = add_ln703_317_fu_1141356_p2.read();
        add_ln703_341_reg_1149773 = add_ln703_341_fu_1141448_p2.read();
        add_ln703_343_reg_1149778 = add_ln703_343_fu_1141464_p2.read();
        add_ln703_344_reg_1149783 = add_ln703_344_fu_1141470_p2.read();
        add_ln703_369_reg_1149788 = add_ln703_369_fu_1141562_p2.read();
        add_ln703_376_reg_1149793 = add_ln703_376_fu_1141604_p2.read();
        add_ln703_392_reg_1149798 = add_ln703_392_fu_1141646_p2.read();
        add_ln703_395_reg_1149803 = add_ln703_395_fu_1141668_p2.read();
        add_ln703_398_reg_1149808 = add_ln703_398_fu_1141690_p2.read();
        add_ln703_403_reg_1149813 = add_ln703_403_fu_1141712_p2.read();
        add_ln703_404_reg_1149818 = add_ln703_404_fu_1141718_p2.read();
        add_ln703_40_reg_1149598 = add_ln703_40_fu_1140192_p2.read();
        add_ln703_424_reg_1149823 = add_ln703_424_fu_1141764_p2.read();
        add_ln703_427_reg_1149828 = add_ln703_427_fu_1141782_p2.read();
        add_ln703_430_reg_1149833 = add_ln703_430_fu_1141800_p2.read();
        add_ln703_439_reg_1149838 = add_ln703_439_fu_1141842_p2.read();
        add_ln703_43_reg_1149603 = add_ln703_43_fu_1140214_p2.read();
        add_ln703_440_reg_1149843 = add_ln703_440_fu_1141848_p2.read();
        add_ln703_454_reg_1149848 = add_ln703_454_fu_1141886_p2.read();
        add_ln703_456_reg_1149853 = add_ln703_456_fu_1141898_p2.read();
        add_ln703_459_reg_1149858 = add_ln703_459_fu_1141924_p2.read();
        add_ln703_463_reg_1149863 = add_ln703_463_fu_1141940_p2.read();
        add_ln703_464_reg_1149868 = add_ln703_464_fu_1141946_p2.read();
        add_ln703_46_reg_1149608 = add_ln703_46_fu_1140232_p2.read();
        add_ln703_482_reg_1149873 = add_ln703_482_fu_1141992_p2.read();
        add_ln703_485_reg_1149878 = add_ln703_485_fu_1142010_p2.read();
        add_ln703_488_reg_1149883 = add_ln703_488_fu_1142028_p2.read();
        add_ln703_493_reg_1149888 = add_ln703_493_fu_1142050_p2.read();
        add_ln703_494_reg_1149893 = add_ln703_494_fu_1142056_p2.read();
        add_ln703_498_reg_1149898 = add_ln703_498_fu_1142062_p2.read();
        add_ln703_513_reg_1149903 = add_ln703_513_fu_1142108_p2.read();
        add_ln703_516_reg_1149908 = add_ln703_516_fu_1142126_p2.read();
        add_ln703_519_reg_1149913 = add_ln703_519_fu_1142144_p2.read();
        add_ln703_51_reg_1149613 = add_ln703_51_fu_1140258_p2.read();
        add_ln703_528_reg_1149918 = add_ln703_528_fu_1142194_p2.read();
        add_ln703_52_reg_1149618 = add_ln703_52_fu_1140264_p2.read();
        add_ln703_552_reg_1149923 = add_ln703_552_fu_1142282_p2.read();
        add_ln703_559_reg_1149928 = add_ln703_559_fu_1142324_p2.read();
        add_ln703_560_reg_1149933 = add_ln703_560_fu_1142330_p2.read();
        add_ln703_575_reg_1149938 = add_ln703_575_fu_1142372_p2.read();
        add_ln703_578_reg_1149943 = add_ln703_578_fu_1142390_p2.read();
        add_ln703_581_reg_1149948 = add_ln703_581_fu_1142408_p2.read();
        add_ln703_586_reg_1149953 = add_ln703_586_fu_1142426_p2.read();
        add_ln703_587_reg_1149958 = add_ln703_587_fu_1142432_p2.read();
        add_ln703_591_reg_1149963 = add_ln703_591_fu_1142438_p2.read();
        add_ln703_606_reg_1149968 = add_ln703_606_fu_1142480_p2.read();
        add_ln703_609_reg_1149973 = add_ln703_609_fu_1142506_p2.read();
        add_ln703_612_reg_1149978 = add_ln703_612_fu_1142524_p2.read();
        add_ln703_621_reg_1149983 = add_ln703_621_fu_1142574_p2.read();
        add_ln703_645_reg_1149988 = add_ln703_645_fu_1142658_p2.read();
        add_ln703_648_reg_1149993 = add_ln703_648_fu_1142680_p2.read();
        add_ln703_649_reg_1149998 = add_ln703_649_fu_1142686_p2.read();
        add_ln703_653_reg_1150003 = add_ln703_653_fu_1142692_p2.read();
        add_ln703_675_reg_1150008 = add_ln703_675_fu_1142796_p2.read();
        add_ln703_678_reg_1150013 = add_ln703_678_fu_1142822_p2.read();
        add_ln703_679_reg_1150018 = add_ln703_679_fu_1142828_p2.read();
        add_ln703_700_reg_1150023 = add_ln703_700_fu_1142914_p2.read();
        add_ln703_704_reg_1150028 = add_ln703_704_fu_1142950_p2.read();
        add_ln703_723_reg_1150033 = add_ln703_723_fu_1143028_p2.read();
        add_ln703_729_reg_1150038 = add_ln703_729_fu_1143072_p2.read();
        add_ln703_730_reg_1150043 = add_ln703_730_fu_1143078_p2.read();
        add_ln703_752_reg_1150048 = add_ln703_752_fu_1143162_p2.read();
        add_ln703_758_reg_1150053 = add_ln703_758_fu_1143202_p2.read();
        add_ln703_781_reg_1150058 = add_ln703_781_fu_1143294_p2.read();
        add_ln703_788_reg_1150063 = add_ln703_788_fu_1143340_p2.read();
        add_ln703_789_reg_1150068 = add_ln703_789_fu_1143346_p2.read();
        add_ln703_78_reg_1149623 = add_ln703_78_fu_1140348_p2.read();
        add_ln703_811_reg_1150073 = add_ln703_811_fu_1143438_p2.read();
        add_ln703_813_reg_1150078 = add_ln703_813_fu_1143450_p2.read();
        add_ln703_814_reg_1150083 = add_ln703_814_fu_1143456_p2.read();
        add_ln703_833_reg_1150088 = add_ln703_833_fu_1143498_p2.read();
        add_ln703_836_reg_1150093 = add_ln703_836_fu_1143516_p2.read();
        add_ln703_839_reg_1150098 = add_ln703_839_fu_1143534_p2.read();
        add_ln703_844_reg_1150103 = add_ln703_844_fu_1143556_p2.read();
        add_ln703_845_reg_1150108 = add_ln703_845_fu_1143562_p2.read();
        add_ln703_849_reg_1150113 = add_ln703_849_fu_1143568_p2.read();
        add_ln703_85_reg_1149628 = add_ln703_85_fu_1140398_p2.read();
        add_ln703_872_reg_1150118 = add_ln703_872_fu_1143664_p2.read();
        add_ln703_875_reg_1150123 = add_ln703_875_fu_1143686_p2.read();
        add_ln703_876_reg_1150128 = add_ln703_876_fu_1143692_p2.read();
        add_ln703_902_reg_1150133 = add_ln703_902_fu_1143790_p2.read();
        add_ln703_905_reg_1150138 = add_ln703_905_fu_1143808_p2.read();
        add_ln703_906_reg_1150143 = add_ln703_906_fu_1143814_p2.read();
        add_ln703_932_reg_1150148 = add_ln703_932_fu_1143898_p2.read();
        add_ln703_935_reg_1150153 = add_ln703_935_fu_1143916_p2.read();
        add_ln703_936_reg_1150158 = add_ln703_936_fu_1143922_p2.read();
        add_ln703_9_reg_1149573 = add_ln703_9_fu_1140078_p2.read();
        ap_port_reg_data_30_V_read = data_30_V_read.read();
        data_24_V_read_6_reg_1149263 = data_24_V_read.read();
        data_25_V_read_6_reg_1149249 = data_25_V_read.read();
        data_26_V_read_6_reg_1149234 = data_26_V_read.read();
        data_27_V_read_6_reg_1149222 = data_27_V_read.read();
        data_28_V_read71_reg_1149207 = data_28_V_read.read();
        data_29_V_read72_reg_1149191 = data_29_V_read.read();
        data_31_V_read74_reg_1149177 = data_31_V_read.read();
        mult_739_V_reg_1149350 = mul_ln1118_479_fu_1453_p2.read().range(25, 10);
        mult_752_V_reg_1149375 = mul_ln1118_485_fu_1357_p2.read().range(25, 10);
        sext_ln1118_335_reg_1149330 = sext_ln1118_335_fu_1138969_p1.read();
        sext_ln1118_336_reg_1149335 = sext_ln1118_336_fu_1138979_p1.read();
        sext_ln1118_337_reg_1149340 = sext_ln1118_337_fu_1138984_p1.read();
        sext_ln1118_349_reg_1149400 = sext_ln1118_349_fu_1139388_p1.read();
        sext_ln1118_350_reg_1149414 = sext_ln1118_350_fu_1139394_p1.read();
        sext_ln1118_362_reg_1149442 = sext_ln1118_362_fu_1139628_p1.read();
        sext_ln1118_363_reg_1149451 = sext_ln1118_363_fu_1139633_p1.read();
        sext_ln1118_365_reg_1149456 = sext_ln1118_365_fu_1139638_p1.read();
        sext_ln1118_380_reg_1149468 = sext_ln1118_380_fu_1139763_p1.read();
        sext_ln1118_381_reg_1149478 = sext_ln1118_381_fu_1139769_p1.read();
        sext_ln1118_384_reg_1149485 = sext_ln1118_384_fu_1139775_p1.read();
        sext_ln1118_399_reg_1149496 = sext_ln1118_399_fu_1139872_p1.read();
        sext_ln1118_400_reg_1149502 = sext_ln1118_400_fu_1139877_p1.read();
        sext_ln1118_410_reg_1149530 = sext_ln1118_410_fu_1139943_p1.read();
        sext_ln1118_449_reg_1149555 = sext_ln1118_449_fu_1140012_p1.read();
        tmp_1006_reg_1149427 = grp_fu_1612_p2.read().range(21, 10);
        tmp_1026_reg_1149491 = mul_ln1118_559_fu_1381_p2.read().range(22, 10);
        tmp_1032_reg_1149510 = mul_ln1118_568_fu_1492_p2.read().range(23, 10);
        tmp_1033_reg_1149515 = grp_fu_1547_p2.read().range(23, 10);
        tmp_1038_reg_1149525 = mul_ln1118_585_fu_1711_p2.read().range(23, 10);
        tmp_1042_reg_1149535 = mul_ln1118_590_fu_1632_p2.read().range(22, 10);
        tmp_1050_reg_1149545 = mul_ln1118_614_fu_1498_p2.read().range(21, 10);
        tmp_1061_reg_1149563 = mul_ln1118_650_fu_1553_p2.read().range(23, 10);
        tmp_1064_reg_1149568 = mul_ln1118_656_fu_1338_p2.read().range(23, 10);
        tmp_999_reg_1149345 = mul_ln1118_477_fu_1451_p2.read().range(23, 10);
        trunc_ln708_105_reg_1149285 = trunc_ln708_105_fu_1129423_p1.read().range(15, 9);
        trunc_ln708_118_reg_1149290 = trunc_ln708_118_fu_1129725_p1.read().range(15, 9);
        trunc_ln708_149_reg_1149295 = trunc_ln708_149_fu_1130219_p1.read().range(15, 6);
        trunc_ln708_18_reg_1149275 = trunc_ln708_18_fu_1127818_p1.read().range(15, 9);
        trunc_ln708_21_reg_1149280 = trunc_ln708_21_fu_1127858_p1.read().range(15, 8);
        trunc_ln708_224_reg_1149300 = trunc_ln708_224_fu_1131606_p1.read().range(15, 6);
        trunc_ln708_409_reg_1149305 = trunc_ln708_409_fu_1135030_p1.read().range(15, 2);
        trunc_ln708_517_reg_1149310 = trunc_ln708_517_fu_1136885_p1.read().range(15, 7);
        trunc_ln708_566_reg_1149315 = trunc_ln708_566_fu_1137813_p1.read().range(15, 9);
        trunc_ln708_5_reg_1149269 = trunc_ln708_5_fu_1127588_p1.read().range(15, 10);
        trunc_ln708_615_reg_1149320 = add_ln1118_36_fu_1138689_p2.read().range(19, 10);
        trunc_ln708_632_reg_1149325 = sub_ln1118_144_fu_1138939_p2.read().range(20, 10);
        trunc_ln708_640_reg_1149355 = sub_ln1118_147_fu_1139127_p2.read().range(21, 10);
        trunc_ln708_644_reg_1149360 = sub_ln1118_600_fu_1139227_p2.read().range(18, 10);
        trunc_ln708_645_reg_1149365 = mul_ln1118_482_fu_1569_p2.read().range(24, 10);
        trunc_ln708_647_reg_1149370 = trunc_ln708_647_fu_1139267_p1.read().range(21, 10);
        trunc_ln708_653_reg_1149380 = grp_fu_1659_p2.read().range(24, 10);
        trunc_ln708_655_reg_1149385 = trunc_ln708_655_fu_1139319_p1.read().range(15, 10);
        trunc_ln708_658_reg_1149390 = mul_ln1118_494_fu_1555_p2.read().range(24, 10);
        trunc_ln708_662_reg_1149395 = sub_ln1118_151_fu_1139367_p2.read().range(19, 10);
        trunc_ln708_671_reg_1149422 = sub_ln1118_154_fu_1139461_p2.read().range(23, 10);
        trunc_ln708_682_reg_1149432 = trunc_ln708_682_fu_1139515_p1.read().range(24, 10);
        trunc_ln708_688_reg_1149437 = trunc_ln708_688_fu_1139575_p1.read().range(15, 9);
        trunc_ln708_719_reg_1149463 = trunc_ln708_719_fu_1139753_p1.read().range(15, 10);
        trunc_ln708_766_reg_1149520 = trunc_ln708_766_fu_1139909_p1.read().range(15, 6);
        trunc_ln708_803_reg_1149540 = trunc_ln708_803_fu_1139977_p1.read().range(15, 6);
        trunc_ln708_837_reg_1149550 = trunc_ln708_837_fu_1140002_p1.read().range(15, 7);
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_ap_NS_fsm() {
    switch (ap_CS_fsm.read().to_uint64()) {
        case 1 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1) && esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1))) {
                ap_NS_fsm = ap_ST_fsm_state2;
            } else {
                ap_NS_fsm = ap_ST_fsm_state1;
            }
            break;
        case 2 : 
            if ((esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()))) {
                ap_NS_fsm = ap_ST_fsm_state1;
            } else {
                ap_NS_fsm = ap_ST_fsm_state2;
            }
            break;
        default : 
            ap_NS_fsm =  (sc_lv<2>) ("XX");
            break;
    }
}

}

