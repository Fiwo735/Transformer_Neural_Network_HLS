#include "dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_963_fu_10289123_p2() {
    add_ln703_963_fu_10289123_p2 = (!mult_736_V_fu_10265937_p1.read().is_01() || !mult_704_V_fu_10265359_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_736_V_fu_10265937_p1.read()) + sc_bigint<16>(mult_704_V_fu_10265359_p1.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_964_fu_10289129_p2() {
    add_ln703_964_fu_10289129_p2 = (!sext_ln703_95_fu_10289119_p1.read().is_01() || !add_ln703_963_fu_10289123_p2.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln703_95_fu_10289119_p1.read()) + sc_biguint<16>(add_ln703_963_fu_10289123_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_965_fu_10289135_p2() {
    add_ln703_965_fu_10289135_p2 = (!sext_ln203_458_fu_10267002_p1.read().is_01() || !sext_ln203_453_fu_10266537_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln203_458_fu_10267002_p1.read()) + sc_bigint<15>(sext_ln203_453_fu_10266537_p1.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_966_fu_10289145_p2() {
    add_ln703_966_fu_10289145_p2 = (!mult_864_V_fu_10268214_p1.read().is_01() || !mult_832_V_fu_10267622_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_864_V_fu_10268214_p1.read()) + sc_bigint<16>(mult_832_V_fu_10267622_p1.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_967_fu_10289151_p2() {
    add_ln703_967_fu_10289151_p2 = (!sext_ln703_96_fu_10289141_p1.read().is_01() || !add_ln703_966_fu_10289145_p2.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln703_96_fu_10289141_p1.read()) + sc_biguint<16>(add_ln703_966_fu_10289145_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_968_fu_10289157_p2() {
    add_ln703_968_fu_10289157_p2 = (!add_ln703_964_fu_10289129_p2.read().is_01() || !add_ln703_967_fu_10289151_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_964_fu_10289129_p2.read()) + sc_biguint<16>(add_ln703_967_fu_10289151_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_969_fu_10289163_p2() {
    add_ln703_969_fu_10289163_p2 = (!mult_928_V_fu_10269427_p1.read().is_01() || !mult_896_V_fu_10268872_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_928_V_fu_10269427_p1.read()) + sc_bigint<16>(mult_896_V_fu_10268872_p1.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_970_fu_10289169_p2() {
    add_ln703_970_fu_10289169_p2 = (!mult_1024_V_fu_10271063_p1.read().is_01() || !mult_960_V_fu_10269937_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_1024_V_fu_10271063_p1.read()) + sc_bigint<16>(mult_960_V_fu_10269937_p1.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_971_fu_10289175_p2() {
    add_ln703_971_fu_10289175_p2 = (!add_ln703_969_fu_10289163_p2.read().is_01() || !add_ln703_970_fu_10289169_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_969_fu_10289163_p2.read()) + sc_biguint<16>(add_ln703_970_fu_10289169_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_972_fu_10289181_p2() {
    add_ln703_972_fu_10289181_p2 = (!mult_1088_V_fu_10272237_p1.read().is_01() || !mult_1056_V_fu_10271537_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_1088_V_fu_10272237_p1.read()) + sc_bigint<16>(mult_1056_V_fu_10271537_p1.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_973_fu_10289187_p2() {
    add_ln703_973_fu_10289187_p2 = (!mult_1184_V_fu_10273833_p1.read().is_01() || !mult_1152_V_fu_10273336_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_1184_V_fu_10273833_p1.read()) + sc_bigint<16>(mult_1152_V_fu_10273336_p1.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_974_fu_10289193_p2() {
    add_ln703_974_fu_10289193_p2 = (!add_ln703_972_fu_10289181_p2.read().is_01() || !add_ln703_973_fu_10289187_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_972_fu_10289181_p2.read()) + sc_biguint<16>(add_ln703_973_fu_10289187_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_975_fu_10289199_p2() {
    add_ln703_975_fu_10289199_p2 = (!add_ln703_971_fu_10289175_p2.read().is_01() || !add_ln703_974_fu_10289193_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_971_fu_10289175_p2.read()) + sc_biguint<16>(add_ln703_974_fu_10289193_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_976_fu_10301064_p2() {
    add_ln703_976_fu_10301064_p2 = (!add_ln703_968_reg_10302428.read().is_01() || !add_ln703_975_reg_10302433.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_968_reg_10302428.read()) + sc_biguint<16>(add_ln703_975_reg_10302433.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_977_fu_10301068_p2() {
    add_ln703_977_fu_10301068_p2 = (!add_ln703_961_fu_10301059_p2.read().is_01() || !add_ln703_976_fu_10301064_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_961_fu_10301059_p2.read()) + sc_biguint<16>(add_ln703_976_fu_10301064_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_978_fu_10289205_p2() {
    add_ln703_978_fu_10289205_p2 = (!sext_ln203_606_fu_10274997_p1.read().is_01() || !sext_ln203_594_fu_10274450_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln203_606_fu_10274997_p1.read()) + sc_bigint<14>(sext_ln203_594_fu_10274450_p1.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_979_fu_10289215_p2() {
    add_ln703_979_fu_10289215_p2 = (!sext_ln203_629_fu_10276205_p1.read().is_01() || !sext_ln203_617_fu_10275613_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln203_629_fu_10276205_p1.read()) + sc_bigint<15>(sext_ln203_617_fu_10275613_p1.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_980_fu_10289221_p2() {
    add_ln703_980_fu_10289221_p2 = (!sext_ln703_97_fu_10289211_p1.read().is_01() || !add_ln703_979_fu_10289215_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_97_fu_10289211_p1.read()) + sc_biguint<15>(add_ln703_979_fu_10289215_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_981_fu_10289231_p2() {
    add_ln703_981_fu_10289231_p2 = (!sext_ln203_656_fu_10277238_p1.read().is_01() || !sext_ln203_640_fu_10276697_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln203_656_fu_10277238_p1.read()) + sc_bigint<15>(sext_ln203_640_fu_10276697_p1.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_982_fu_10289237_p2() {
    add_ln703_982_fu_10289237_p2 = (!sext_ln203_687_fu_10278347_p1.read().is_01() || !sext_ln203_674_fu_10277788_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln203_687_fu_10278347_p1.read()) + sc_bigint<14>(sext_ln203_674_fu_10277788_p1.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_983_fu_10289247_p2() {
    add_ln703_983_fu_10289247_p2 = (!add_ln703_981_fu_10289231_p2.read().is_01() || !sext_ln703_99_fu_10289243_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(add_ln703_981_fu_10289231_p2.read()) + sc_bigint<15>(sext_ln703_99_fu_10289243_p1.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_984_fu_10289257_p2() {
    add_ln703_984_fu_10289257_p2 = (!sext_ln703_98_fu_10289227_p1.read().is_01() || !sext_ln703_100_fu_10289253_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln703_98_fu_10289227_p1.read()) + sc_bigint<16>(sext_ln703_100_fu_10289253_p1.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_985_fu_10289263_p2() {
    add_ln703_985_fu_10289263_p2 = (!sext_ln203_711_fu_10279577_p1.read().is_01() || !sext_ln203_698_fu_10278920_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln203_711_fu_10279577_p1.read()) + sc_bigint<14>(sext_ln203_698_fu_10278920_p1.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_986_fu_10289273_p2() {
    add_ln703_986_fu_10289273_p2 = (!mult_1568_V_fu_10280716_p1.read().is_01() || !mult_1536_V_fu_10280117_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_1568_V_fu_10280716_p1.read()) + sc_bigint<16>(mult_1536_V_fu_10280117_p1.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_987_fu_10289279_p2() {
    add_ln703_987_fu_10289279_p2 = (!sext_ln703_101_fu_10289269_p1.read().is_01() || !add_ln703_986_fu_10289273_p2.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln703_101_fu_10289269_p1.read()) + sc_biguint<16>(add_ln703_986_fu_10289273_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_988_fu_10289285_p2() {
    add_ln703_988_fu_10289285_p2 = (!mult_1632_V_fu_10281859_p1.read().is_01() || !mult_1600_V_fu_10281301_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_1632_V_fu_10281859_p1.read()) + sc_bigint<16>(mult_1600_V_fu_10281301_p1.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_989_fu_10289291_p2() {
    add_ln703_989_fu_10289291_p2 = (!mult_1696_V_fu_10282894_p4.read().is_01() || !mult_1664_V_fu_10282310_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(mult_1696_V_fu_10282894_p4.read()) + sc_bigint<16>(mult_1664_V_fu_10282310_p1.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_990_fu_10289297_p2() {
    add_ln703_990_fu_10289297_p2 = (!add_ln703_988_fu_10289285_p2.read().is_01() || !add_ln703_989_fu_10289291_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_988_fu_10289285_p2.read()) + sc_biguint<16>(add_ln703_989_fu_10289291_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_991_fu_10301074_p2() {
    add_ln703_991_fu_10301074_p2 = (!add_ln703_987_reg_10302443.read().is_01() || !add_ln703_990_reg_10302448.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_987_reg_10302443.read()) + sc_biguint<16>(add_ln703_990_reg_10302448.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_992_fu_10301078_p2() {
    add_ln703_992_fu_10301078_p2 = (!add_ln703_984_reg_10302438.read().is_01() || !add_ln703_991_fu_10301074_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_984_reg_10302438.read()) + sc_biguint<16>(add_ln703_991_fu_10301074_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_993_fu_10289303_p2() {
    add_ln703_993_fu_10289303_p2 = (!sext_ln203_791_fu_10283854_p1.read().is_01() || !sext_ln203_782_fu_10283445_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln203_791_fu_10283854_p1.read()) + sc_bigint<14>(sext_ln203_782_fu_10283445_p1.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_994_fu_10289313_p2() {
    add_ln703_994_fu_10289313_p2 = (!mult_1824_V_fu_10284990_p1.read().is_01() || !mult_1792_V_fu_10284424_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_1824_V_fu_10284990_p1.read()) + sc_bigint<16>(mult_1792_V_fu_10284424_p1.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_995_fu_10289319_p2() {
    add_ln703_995_fu_10289319_p2 = (!sext_ln703_102_fu_10289309_p1.read().is_01() || !add_ln703_994_fu_10289313_p2.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln703_102_fu_10289309_p1.read()) + sc_biguint<16>(add_ln703_994_fu_10289313_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_996_fu_10289325_p2() {
    add_ln703_996_fu_10289325_p2 = (!mult_1888_V_fu_10286195_p1.read().is_01() || !mult_1856_V_fu_10285546_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_1888_V_fu_10286195_p1.read()) + sc_bigint<16>(mult_1856_V_fu_10285546_p1.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_997_fu_10289331_p2() {
    add_ln703_997_fu_10289331_p2 = (!mult_1952_V_fu_10287301_p1.read().is_01() || !mult_1920_V_fu_10286791_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_1952_V_fu_10287301_p1.read()) + sc_bigint<16>(mult_1920_V_fu_10286791_p1.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_998_fu_10289337_p2() {
    add_ln703_998_fu_10289337_p2 = (!add_ln703_996_fu_10289325_p2.read().is_01() || !add_ln703_997_fu_10289331_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_996_fu_10289325_p2.read()) + sc_biguint<16>(add_ln703_997_fu_10289331_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_999_fu_10289343_p2() {
    add_ln703_999_fu_10289343_p2 = (!add_ln703_995_fu_10289319_p2.read().is_01() || !add_ln703_998_fu_10289337_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_995_fu_10289319_p2.read()) + sc_biguint<16>(add_ln703_998_fu_10289337_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_fu_10289029_p2() {
    add_ln703_fu_10289029_p2 = (!sext_ln203_184_fu_10253661_p1.read().is_01() || !sext_ln203_169_fu_10253106_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln203_184_fu_10253661_p1.read()) + sc_bigint<15>(sext_ln203_169_fu_10253106_p1.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_ap_block_pp0_stage0() {
    ap_block_pp0_stage0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_ap_block_pp0_stage0_11001() {
    ap_block_pp0_stage0_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_ap_block_state1_pp0_stage0_iter0() {
    ap_block_state1_pp0_stage0_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_ap_block_state2_pp0_stage0_iter1() {
    ap_block_state2_pp0_stage0_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_ap_return_0() {
    if (esl_seteq<1,1,1>(ap_const_logic_0, ap_ce_reg.read())) {
        ap_return_0 = ap_return_0_int_reg.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce_reg.read())) {
        ap_return_0 = add_ln703_1200_fu_10301088_p2.read();
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_ap_return_1() {
    if (esl_seteq<1,1,1>(ap_const_logic_0, ap_ce_reg.read())) {
        ap_return_1 = ap_return_1_int_reg.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce_reg.read())) {
        ap_return_1 = acc_1_V_fu_10301141_p2.read();
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_ap_return_10() {
    if (esl_seteq<1,1,1>(ap_const_logic_0, ap_ce_reg.read())) {
        ap_return_10 = ap_return_10_int_reg.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce_reg.read())) {
        ap_return_10 = acc_10_V_fu_10301452_p2.read();
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_ap_return_11() {
    if (esl_seteq<1,1,1>(ap_const_logic_0, ap_ce_reg.read())) {
        ap_return_11 = ap_return_11_int_reg.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce_reg.read())) {
        ap_return_11 = acc_11_V_fu_10301505_p2.read();
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_ap_return_12() {
    if (esl_seteq<1,1,1>(ap_const_logic_0, ap_ce_reg.read())) {
        ap_return_12 = ap_return_12_int_reg.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce_reg.read())) {
        ap_return_12 = acc_12_V_fu_10301544_p2.read();
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_ap_return_13() {
    if (esl_seteq<1,1,1>(ap_const_logic_0, ap_ce_reg.read())) {
        ap_return_13 = ap_return_13_int_reg.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce_reg.read())) {
        ap_return_13 = acc_13_V_fu_10301573_p2.read();
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_ap_return_14() {
    if (esl_seteq<1,1,1>(ap_const_logic_0, ap_ce_reg.read())) {
        ap_return_14 = ap_return_14_int_reg.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce_reg.read())) {
        ap_return_14 = acc_14_V_fu_10301606_p2.read();
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_ap_return_15() {
    if (esl_seteq<1,1,1>(ap_const_logic_0, ap_ce_reg.read())) {
        ap_return_15 = ap_return_15_int_reg.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce_reg.read())) {
        ap_return_15 = acc_15_V_fu_10301659_p2.read();
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_ap_return_16() {
    if (esl_seteq<1,1,1>(ap_const_logic_0, ap_ce_reg.read())) {
        ap_return_16 = ap_return_16_int_reg.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce_reg.read())) {
        ap_return_16 = acc_16_V_fu_10301702_p2.read();
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_ap_return_17() {
    if (esl_seteq<1,1,1>(ap_const_logic_0, ap_ce_reg.read())) {
        ap_return_17 = ap_return_17_int_reg.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce_reg.read())) {
        ap_return_17 = acc_17_V_fu_10301721_p2.read();
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_ap_return_18() {
    if (esl_seteq<1,1,1>(ap_const_logic_0, ap_ce_reg.read())) {
        ap_return_18 = ap_return_18_int_reg.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce_reg.read())) {
        ap_return_18 = acc_18_V_fu_10301740_p2.read();
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_ap_return_19() {
    if (esl_seteq<1,1,1>(ap_const_logic_0, ap_ce_reg.read())) {
        ap_return_19 = ap_return_19_int_reg.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce_reg.read())) {
        ap_return_19 = acc_19_V_fu_10301793_p2.read();
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_ap_return_2() {
    if (esl_seteq<1,1,1>(ap_const_logic_0, ap_ce_reg.read())) {
        ap_return_2 = ap_return_2_int_reg.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce_reg.read())) {
        ap_return_2 = acc_2_V_fu_10301194_p2.read();
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_ap_return_20() {
    if (esl_seteq<1,1,1>(ap_const_logic_0, ap_ce_reg.read())) {
        ap_return_20 = ap_return_20_int_reg.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce_reg.read())) {
        ap_return_20 = acc_20_V_fu_10301822_p2.read();
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_ap_return_21() {
    if (esl_seteq<1,1,1>(ap_const_logic_0, ap_ce_reg.read())) {
        ap_return_21 = ap_return_21_int_reg.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce_reg.read())) {
        ap_return_21 = acc_21_V_fu_10301840_p2.read();
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_ap_return_22() {
    if (esl_seteq<1,1,1>(ap_const_logic_0, ap_ce_reg.read())) {
        ap_return_22 = ap_return_22_int_reg.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce_reg.read())) {
        ap_return_22 = acc_22_V_fu_10301892_p2.read();
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_ap_return_23() {
    if (esl_seteq<1,1,1>(ap_const_logic_0, ap_ce_reg.read())) {
        ap_return_23 = ap_return_23_int_reg.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce_reg.read())) {
        ap_return_23 = acc_23_V_fu_10301941_p2.read();
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_ap_return_24() {
    if (esl_seteq<1,1,1>(ap_const_logic_0, ap_ce_reg.read())) {
        ap_return_24 = ap_return_24_int_reg.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce_reg.read())) {
        ap_return_24 = acc_24_V_fu_10301960_p2.read();
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_ap_return_25() {
    if (esl_seteq<1,1,1>(ap_const_logic_0, ap_ce_reg.read())) {
        ap_return_25 = ap_return_25_int_reg.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce_reg.read())) {
        ap_return_25 = acc_25_V_fu_10301979_p2.read();
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_ap_return_26() {
    if (esl_seteq<1,1,1>(ap_const_logic_0, ap_ce_reg.read())) {
        ap_return_26 = ap_return_26_int_reg.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce_reg.read())) {
        ap_return_26 = acc_26_V_fu_10302018_p2.read();
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_ap_return_27() {
    if (esl_seteq<1,1,1>(ap_const_logic_0, ap_ce_reg.read())) {
        ap_return_27 = ap_return_27_int_reg.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce_reg.read())) {
        ap_return_27 = acc_27_V_fu_10302061_p2.read();
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_ap_return_28() {
    if (esl_seteq<1,1,1>(ap_const_logic_0, ap_ce_reg.read())) {
        ap_return_28 = ap_return_28_int_reg.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce_reg.read())) {
        ap_return_28 = acc_28_V_fu_10302104_p2.read();
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_ap_return_29() {
    if (esl_seteq<1,1,1>(ap_const_logic_0, ap_ce_reg.read())) {
        ap_return_29 = ap_return_29_int_reg.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce_reg.read())) {
        ap_return_29 = acc_29_V_fu_10302123_p2.read();
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_ap_return_3() {
    if (esl_seteq<1,1,1>(ap_const_logic_0, ap_ce_reg.read())) {
        ap_return_3 = ap_return_3_int_reg.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce_reg.read())) {
        ap_return_3 = acc_3_V_fu_10301237_p2.read();
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_ap_return_30() {
    if (esl_seteq<1,1,1>(ap_const_logic_0, ap_ce_reg.read())) {
        ap_return_30 = ap_return_30_int_reg.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce_reg.read())) {
        ap_return_30 = acc_30_V_fu_10302162_p2.read();
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_ap_return_31() {
    if (esl_seteq<1,1,1>(ap_const_logic_0, ap_ce_reg.read())) {
        ap_return_31 = ap_return_31_int_reg.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce_reg.read())) {
        ap_return_31 = acc_31_V_fu_10302215_p2.read();
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_ap_return_4() {
    if (esl_seteq<1,1,1>(ap_const_logic_0, ap_ce_reg.read())) {
        ap_return_4 = ap_return_4_int_reg.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce_reg.read())) {
        ap_return_4 = acc_4_V_fu_10301276_p2.read();
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_ap_return_5() {
    if (esl_seteq<1,1,1>(ap_const_logic_0, ap_ce_reg.read())) {
        ap_return_5 = ap_return_5_int_reg.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce_reg.read())) {
        ap_return_5 = acc_5_V_fu_10301295_p2.read();
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_ap_return_6() {
    if (esl_seteq<1,1,1>(ap_const_logic_0, ap_ce_reg.read())) {
        ap_return_6 = ap_return_6_int_reg.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce_reg.read())) {
        ap_return_6 = acc_6_V_fu_10301314_p2.read();
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_ap_return_7() {
    if (esl_seteq<1,1,1>(ap_const_logic_0, ap_ce_reg.read())) {
        ap_return_7 = ap_return_7_int_reg.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce_reg.read())) {
        ap_return_7 = acc_7_V_fu_10301347_p2.read();
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_ap_return_8() {
    if (esl_seteq<1,1,1>(ap_const_logic_0, ap_ce_reg.read())) {
        ap_return_8 = ap_return_8_int_reg.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce_reg.read())) {
        ap_return_8 = acc_8_V_fu_10301380_p2.read();
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_ap_return_9() {
    if (esl_seteq<1,1,1>(ap_const_logic_0, ap_ce_reg.read())) {
        ap_return_9 = ap_return_9_int_reg.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce_reg.read())) {
        ap_return_9 = acc_9_V_fu_10301409_p2.read();
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1000_fu_3318_p0() {
    mul_ln1118_1000_fu_3318_p0 =  (sc_lv<16>) (sext_ln708_294_fu_10261807_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1000_fu_3318_p2() {
    mul_ln1118_1000_fu_3318_p2 = (!mul_ln1118_1000_fu_3318_p0.read().is_01() || !ap_const_lv24_FFFF94.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1000_fu_3318_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF94);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1001_fu_1668_p0() {
    mul_ln1118_1001_fu_1668_p0 =  (sc_lv<16>) (sext_ln708_294_fu_10261807_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1001_fu_1668_p2() {
    mul_ln1118_1001_fu_1668_p2 = (!mul_ln1118_1001_fu_1668_p0.read().is_01() || !ap_const_lv24_FFFFB4.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1001_fu_1668_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFB4);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1002_fu_2520_p0() {
    mul_ln1118_1002_fu_2520_p0 =  (sc_lv<16>) (sext_ln708_294_fu_10261807_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1002_fu_2520_p2() {
    mul_ln1118_1002_fu_2520_p2 = (!mul_ln1118_1002_fu_2520_p0.read().is_01() || !ap_const_lv24_FFFFAA.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1002_fu_2520_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFAA);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1003_fu_1723_p0() {
    mul_ln1118_1003_fu_1723_p0 =  (sc_lv<16>) (sext_ln708_294_fu_10261807_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1003_fu_1723_p2() {
    mul_ln1118_1003_fu_1723_p2 = (!mul_ln1118_1003_fu_1723_p0.read().is_01() || !ap_const_lv24_69.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1003_fu_1723_p0.read()) * sc_biguint<24>(ap_const_lv24_69);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1004_fu_3229_p0() {
    mul_ln1118_1004_fu_3229_p0 =  (sc_lv<16>) (sext_ln708_293_fu_10261797_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1004_fu_3229_p2() {
    mul_ln1118_1004_fu_3229_p2 = (!mul_ln1118_1004_fu_3229_p0.read().is_01() || !ap_const_lv25_1FFFF7B.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_1004_fu_3229_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF7B);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1005_fu_2631_p0() {
    mul_ln1118_1005_fu_2631_p0 =  (sc_lv<16>) (sext_ln1118_681_fu_10262413_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1005_fu_2631_p2() {
    mul_ln1118_1005_fu_2631_p2 = (!mul_ln1118_1005_fu_2631_p0.read().is_01() || !ap_const_lv24_75.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1005_fu_2631_p0.read()) * sc_biguint<24>(ap_const_lv24_75);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1006_fu_3044_p0() {
    mul_ln1118_1006_fu_3044_p0 =  (sc_lv<16>) (sext_ln1118_677_fu_10262385_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1006_fu_3044_p2() {
    mul_ln1118_1006_fu_3044_p2 = (!mul_ln1118_1006_fu_3044_p0.read().is_01() || !ap_const_lv26_1D4.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_1006_fu_3044_p0.read()) * sc_biguint<26>(ap_const_lv26_1D4);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1007_fu_3535_p0() {
    mul_ln1118_1007_fu_3535_p0 = sext_ln1118_679_fu_10262402_p0.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1007_fu_3535_p2() {
    mul_ln1118_1007_fu_3535_p2 = (!mul_ln1118_1007_fu_3535_p0.read().is_01() || !ap_const_lv21_1FFFF5.is_01())? sc_lv<21>(): sc_bigint<16>(mul_ln1118_1007_fu_3535_p0.read()) * sc_bigint<21>(ap_const_lv21_1FFFF5);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1008_fu_3046_p0() {
    mul_ln1118_1008_fu_3046_p0 =  (sc_lv<16>) (sext_ln1118_676_fu_10262377_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1008_fu_3046_p2() {
    mul_ln1118_1008_fu_3046_p2 = (!mul_ln1118_1008_fu_3046_p0.read().is_01() || !ap_const_lv25_C2.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_1008_fu_3046_p0.read()) * sc_biguint<25>(ap_const_lv25_C2);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1009_fu_3537_p0() {
    mul_ln1118_1009_fu_3537_p0 =  (sc_lv<16>) (sext_ln1118_681_fu_10262413_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1009_fu_3537_p2() {
    mul_ln1118_1009_fu_3537_p2 = (!mul_ln1118_1009_fu_3537_p0.read().is_01() || !ap_const_lv24_72.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1009_fu_3537_p0.read()) * sc_biguint<24>(ap_const_lv24_72);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1010_fu_3538_p0() {
    mul_ln1118_1010_fu_3538_p0 =  (sc_lv<16>) (sext_ln1118_677_fu_10262385_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1010_fu_3538_p2() {
    mul_ln1118_1010_fu_3538_p2 = (!mul_ln1118_1010_fu_3538_p0.read().is_01() || !ap_const_lv26_3FFFEE2.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_1010_fu_3538_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFEE2);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1011_fu_3049_p0() {
    mul_ln1118_1011_fu_3049_p0 =  (sc_lv<16>) (sext_ln1118_680_fu_10262407_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1011_fu_3049_p2() {
    mul_ln1118_1011_fu_3049_p2 = (!mul_ln1118_1011_fu_3049_p0.read().is_01() || !ap_const_lv22_3FFFE7.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_1011_fu_3049_p0.read()) * sc_bigint<22>(ap_const_lv22_3FFFE7);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1012_fu_3050_p0() {
    mul_ln1118_1012_fu_3050_p0 =  (sc_lv<16>) (sext_ln1118_682_fu_10262420_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1012_fu_3050_p2() {
    mul_ln1118_1012_fu_3050_p2 = (!mul_ln1118_1012_fu_3050_p0.read().is_01() || !ap_const_lv23_35.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_1012_fu_3050_p0.read()) * sc_biguint<23>(ap_const_lv23_35);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1013_fu_3051_p0() {
    mul_ln1118_1013_fu_3051_p0 =  (sc_lv<16>) (sext_ln1118_681_fu_10262413_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1013_fu_3051_p2() {
    mul_ln1118_1013_fu_3051_p2 = (!mul_ln1118_1013_fu_3051_p0.read().is_01() || !ap_const_lv24_69.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1013_fu_3051_p0.read()) * sc_biguint<24>(ap_const_lv24_69);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1014_fu_3542_p0() {
    mul_ln1118_1014_fu_3542_p0 =  (sc_lv<16>) (sext_ln1118_676_fu_10262377_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1014_fu_3542_p2() {
    mul_ln1118_1014_fu_3542_p2 = (!mul_ln1118_1014_fu_3542_p0.read().is_01() || !ap_const_lv25_9F.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_1014_fu_3542_p0.read()) * sc_biguint<25>(ap_const_lv25_9F);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1015_fu_3053_p0() {
    mul_ln1118_1015_fu_3053_p0 =  (sc_lv<16>) (sext_ln1118_682_fu_10262420_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1015_fu_3053_p2() {
    mul_ln1118_1015_fu_3053_p2 = (!mul_ln1118_1015_fu_3053_p0.read().is_01() || !ap_const_lv23_37.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_1015_fu_3053_p0.read()) * sc_biguint<23>(ap_const_lv23_37);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1016_fu_3544_p0() {
    mul_ln1118_1016_fu_3544_p0 =  (sc_lv<16>) (sext_ln1118_676_fu_10262377_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1016_fu_3544_p2() {
    mul_ln1118_1016_fu_3544_p2 = (!mul_ln1118_1016_fu_3544_p0.read().is_01() || !ap_const_lv25_1FFFF33.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_1016_fu_3544_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF33);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1017_fu_3055_p0() {
    mul_ln1118_1017_fu_3055_p0 =  (sc_lv<16>) (sext_ln1118_677_fu_10262385_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1017_fu_3055_p2() {
    mul_ln1118_1017_fu_3055_p2 = (!mul_ln1118_1017_fu_3055_p0.read().is_01() || !ap_const_lv26_118.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_1017_fu_3055_p0.read()) * sc_biguint<26>(ap_const_lv26_118);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1018_fu_2477_p0() {
    mul_ln1118_1018_fu_2477_p0 =  (sc_lv<16>) (sext_ln1118_676_fu_10262377_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1018_fu_2477_p2() {
    mul_ln1118_1018_fu_2477_p2 = (!mul_ln1118_1018_fu_2477_p0.read().is_01() || !ap_const_lv25_1FFFF6A.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_1018_fu_2477_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF6A);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1019_fu_3057_p0() {
    mul_ln1118_1019_fu_3057_p0 =  (sc_lv<16>) (sext_ln1118_677_fu_10262385_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1019_fu_3057_p2() {
    mul_ln1118_1019_fu_3057_p2 = (!mul_ln1118_1019_fu_3057_p0.read().is_01() || !ap_const_lv26_199.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_1019_fu_3057_p0.read()) * sc_biguint<26>(ap_const_lv26_199);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1020_fu_2969_p0() {
    mul_ln1118_1020_fu_2969_p0 =  (sc_lv<16>) (sext_ln1118_677_fu_10262385_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1020_fu_2969_p2() {
    mul_ln1118_1020_fu_2969_p2 = (!mul_ln1118_1020_fu_2969_p0.read().is_01() || !ap_const_lv26_14F.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_1020_fu_2969_p0.read()) * sc_biguint<26>(ap_const_lv26_14F);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1021_fu_1990_p0() {
    mul_ln1118_1021_fu_1990_p0 =  (sc_lv<16>) (sext_ln1118_677_fu_10262385_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1021_fu_1990_p2() {
    mul_ln1118_1021_fu_1990_p2 = (!mul_ln1118_1021_fu_1990_p0.read().is_01() || !ap_const_lv26_172.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_1021_fu_1990_p0.read()) * sc_biguint<26>(ap_const_lv26_172);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1022_fu_3550_p0() {
    mul_ln1118_1022_fu_3550_p0 =  (sc_lv<16>) (sext_ln1118_677_fu_10262385_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1022_fu_3550_p2() {
    mul_ln1118_1022_fu_3550_p2 = (!mul_ln1118_1022_fu_3550_p0.read().is_01() || !ap_const_lv26_3FFFEBE.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_1022_fu_3550_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFEBE);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1023_fu_3551_p0() {
    mul_ln1118_1023_fu_3551_p0 =  (sc_lv<16>) (sext_ln1118_677_fu_10262385_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1023_fu_3551_p2() {
    mul_ln1118_1023_fu_3551_p2 = (!mul_ln1118_1023_fu_3551_p0.read().is_01() || !ap_const_lv26_15B.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_1023_fu_3551_p0.read()) * sc_biguint<26>(ap_const_lv26_15B);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1024_fu_3062_p0() {
    mul_ln1118_1024_fu_3062_p0 =  (sc_lv<16>) (sext_ln1118_677_fu_10262385_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1024_fu_3062_p2() {
    mul_ln1118_1024_fu_3062_p2 = (!mul_ln1118_1024_fu_3062_p0.read().is_01() || !ap_const_lv26_10A.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_1024_fu_3062_p0.read()) * sc_biguint<26>(ap_const_lv26_10A);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1025_fu_1994_p0() {
    mul_ln1118_1025_fu_1994_p0 =  (sc_lv<16>) (sext_ln1118_682_fu_10262420_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1025_fu_1994_p2() {
    mul_ln1118_1025_fu_1994_p2 = (!mul_ln1118_1025_fu_1994_p0.read().is_01() || !ap_const_lv23_26.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_1025_fu_1994_p0.read()) * sc_biguint<23>(ap_const_lv23_26);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1026_fu_3554_p0() {
    mul_ln1118_1026_fu_3554_p0 =  (sc_lv<16>) (sext_ln1118_680_fu_10262407_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1026_fu_3554_p2() {
    mul_ln1118_1026_fu_3554_p2 = (!mul_ln1118_1026_fu_3554_p0.read().is_01() || !ap_const_lv22_15.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_1026_fu_3554_p0.read()) * sc_biguint<22>(ap_const_lv22_15);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1027_fu_3065_p0() {
    mul_ln1118_1027_fu_3065_p0 =  (sc_lv<16>) (sext_ln708_331_fu_10262963_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1027_fu_3065_p2() {
    mul_ln1118_1027_fu_3065_p2 = (!mul_ln1118_1027_fu_3065_p0.read().is_01() || !ap_const_lv26_177.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_1027_fu_3065_p0.read()) * sc_biguint<26>(ap_const_lv26_177);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1028_fu_3556_p0() {
    mul_ln1118_1028_fu_3556_p0 =  (sc_lv<16>) (sext_ln708_329_fu_10262945_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1028_fu_3556_p2() {
    mul_ln1118_1028_fu_3556_p2 = (!mul_ln1118_1028_fu_3556_p0.read().is_01() || !ap_const_lv25_ED.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_1028_fu_3556_p0.read()) * sc_biguint<25>(ap_const_lv25_ED);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1029_fu_2577_p0() {
    mul_ln1118_1029_fu_2577_p0 =  (sc_lv<16>) (sext_ln708_329_fu_10262945_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1029_fu_2577_p2() {
    mul_ln1118_1029_fu_2577_p2 = (!mul_ln1118_1029_fu_2577_p0.read().is_01() || !ap_const_lv25_1FFFF64.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_1029_fu_2577_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF64);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1030_fu_2578_p0() {
    mul_ln1118_1030_fu_2578_p0 =  (sc_lv<16>) (sext_ln708_328_fu_10262933_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1030_fu_2578_p2() {
    mul_ln1118_1030_fu_2578_p2 = (!mul_ln1118_1030_fu_2578_p0.read().is_01() || !ap_const_lv24_FFFFAF.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1030_fu_2578_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFAF);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1031_fu_3069_p0() {
    mul_ln1118_1031_fu_3069_p0 =  (sc_lv<16>) (sext_ln708_330_fu_10262956_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1031_fu_3069_p2() {
    mul_ln1118_1031_fu_3069_p2 = (!mul_ln1118_1031_fu_3069_p0.read().is_01() || !ap_const_lv23_7FFFD9.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_1031_fu_3069_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFD9);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1032_fu_2001_p0() {
    mul_ln1118_1032_fu_2001_p0 =  (sc_lv<16>) (sext_ln708_328_fu_10262933_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1032_fu_2001_p2() {
    mul_ln1118_1032_fu_2001_p2 = (!mul_ln1118_1032_fu_2001_p0.read().is_01() || !ap_const_lv24_61.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1032_fu_2001_p0.read()) * sc_biguint<24>(ap_const_lv24_61);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1033_fu_1964_p0() {
    mul_ln1118_1033_fu_1964_p0 =  (sc_lv<16>) (sext_ln708_332_fu_10262969_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1033_fu_1964_p2() {
    mul_ln1118_1033_fu_1964_p2 = (!mul_ln1118_1033_fu_1964_p0.read().is_01() || !ap_const_lv22_3FFFED.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_1033_fu_1964_p0.read()) * sc_bigint<22>(ap_const_lv22_3FFFED);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1034_fu_2554_p0() {
    mul_ln1118_1034_fu_2554_p0 =  (sc_lv<16>) (sext_ln708_328_fu_10262933_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1034_fu_2554_p2() {
    mul_ln1118_1034_fu_2554_p2 = (!mul_ln1118_1034_fu_2554_p0.read().is_01() || !ap_const_lv24_FFFF99.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1034_fu_2554_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF99);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1035_fu_2872_p0() {
    mul_ln1118_1035_fu_2872_p0 =  (sc_lv<16>) (sext_ln708_328_fu_10262933_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1035_fu_2872_p2() {
    mul_ln1118_1035_fu_2872_p2 = (!mul_ln1118_1035_fu_2872_p0.read().is_01() || !ap_const_lv24_75.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1035_fu_2872_p0.read()) * sc_biguint<24>(ap_const_lv24_75);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1036_fu_1939_p0() {
    mul_ln1118_1036_fu_1939_p0 =  (sc_lv<16>) (sext_ln708_330_fu_10262956_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1036_fu_1939_p2() {
    mul_ln1118_1036_fu_1939_p2 = (!mul_ln1118_1036_fu_1939_p0.read().is_01() || !ap_const_lv23_25.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_1036_fu_1939_p0.read()) * sc_biguint<23>(ap_const_lv23_25);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1037_fu_3644_p0() {
    mul_ln1118_1037_fu_3644_p0 =  (sc_lv<16>) (sext_ln708_329_fu_10262945_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1037_fu_3644_p2() {
    mul_ln1118_1037_fu_3644_p2 = (!mul_ln1118_1037_fu_3644_p0.read().is_01() || !ap_const_lv25_85.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_1037_fu_3644_p0.read()) * sc_biguint<25>(ap_const_lv25_85);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1038_fu_1868_p0() {
    mul_ln1118_1038_fu_1868_p0 =  (sc_lv<16>) (sext_ln708_329_fu_10262945_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1038_fu_1868_p2() {
    mul_ln1118_1038_fu_1868_p2 = (!mul_ln1118_1038_fu_1868_p0.read().is_01() || !ap_const_lv25_F6.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_1038_fu_1868_p0.read()) * sc_biguint<25>(ap_const_lv25_F6);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1039_fu_2050_p0() {
    mul_ln1118_1039_fu_2050_p0 =  (sc_lv<16>) (sext_ln708_330_fu_10262956_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1039_fu_2050_p2() {
    mul_ln1118_1039_fu_2050_p2 = (!mul_ln1118_1039_fu_2050_p0.read().is_01() || !ap_const_lv23_7FFFDA.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_1039_fu_2050_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFDA);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1040_fu_2061_p0() {
    mul_ln1118_1040_fu_2061_p0 =  (sc_lv<16>) (sext_ln708_329_fu_10262945_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1040_fu_2061_p2() {
    mul_ln1118_1040_fu_2061_p2 = (!mul_ln1118_1040_fu_2061_p0.read().is_01() || !ap_const_lv25_D8.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_1040_fu_2061_p0.read()) * sc_biguint<25>(ap_const_lv25_D8);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1041_fu_3510_p0() {
    mul_ln1118_1041_fu_3510_p0 =  (sc_lv<16>) (sext_ln708_329_fu_10262945_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1041_fu_3510_p2() {
    mul_ln1118_1041_fu_3510_p2 = (!mul_ln1118_1041_fu_3510_p0.read().is_01() || !ap_const_lv25_91.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_1041_fu_3510_p0.read()) * sc_biguint<25>(ap_const_lv25_91);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1042_fu_2514_p0() {
    mul_ln1118_1042_fu_2514_p0 =  (sc_lv<16>) (sext_ln708_331_fu_10262963_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1042_fu_2514_p2() {
    mul_ln1118_1042_fu_2514_p2 = (!mul_ln1118_1042_fu_2514_p0.read().is_01() || !ap_const_lv26_132.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_1042_fu_2514_p0.read()) * sc_biguint<26>(ap_const_lv26_132);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1043_fu_1717_p0() {
    mul_ln1118_1043_fu_1717_p0 =  (sc_lv<16>) (sext_ln708_329_fu_10262945_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1043_fu_1717_p2() {
    mul_ln1118_1043_fu_1717_p2 = (!mul_ln1118_1043_fu_1717_p0.read().is_01() || !ap_const_lv25_1FFFF13.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_1043_fu_1717_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF13);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1044_fu_1773_p0() {
    mul_ln1118_1044_fu_1773_p0 =  (sc_lv<16>) (sext_ln708_328_fu_10262933_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1044_fu_1773_p2() {
    mul_ln1118_1044_fu_1773_p2 = (!mul_ln1118_1044_fu_1773_p0.read().is_01() || !ap_const_lv24_57.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1044_fu_1773_p0.read()) * sc_biguint<24>(ap_const_lv24_57);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1045_fu_2227_p0() {
    mul_ln1118_1045_fu_2227_p0 =  (sc_lv<16>) (sext_ln708_328_fu_10262933_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1045_fu_2227_p2() {
    mul_ln1118_1045_fu_2227_p2 = (!mul_ln1118_1045_fu_2227_p0.read().is_01() || !ap_const_lv24_4D.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1045_fu_2227_p0.read()) * sc_biguint<24>(ap_const_lv24_4D);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1046_fu_3278_p0() {
    mul_ln1118_1046_fu_3278_p0 =  (sc_lv<16>) (sext_ln708_328_fu_10262933_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1046_fu_3278_p2() {
    mul_ln1118_1046_fu_3278_p2 = (!mul_ln1118_1046_fu_3278_p0.read().is_01() || !ap_const_lv24_6F.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1046_fu_3278_p0.read()) * sc_biguint<24>(ap_const_lv24_6F);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1047_fu_3533_p0() {
    mul_ln1118_1047_fu_3533_p0 =  (sc_lv<16>) (sext_ln708_328_fu_10262933_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1047_fu_3533_p2() {
    mul_ln1118_1047_fu_3533_p2 = (!mul_ln1118_1047_fu_3533_p0.read().is_01() || !ap_const_lv24_FFFF97.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1047_fu_3533_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF97);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1048_fu_2935_p0() {
    mul_ln1118_1048_fu_2935_p0 =  (sc_lv<16>) (sext_ln1118_699_fu_10263536_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1048_fu_2935_p2() {
    mul_ln1118_1048_fu_2935_p2 = (!mul_ln1118_1048_fu_2935_p0.read().is_01() || !ap_const_lv22_3FFFEA.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_1048_fu_2935_p0.read()) * sc_bigint<22>(ap_const_lv22_3FFFEA);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1049_fu_3190_p0() {
    mul_ln1118_1049_fu_3190_p0 =  (sc_lv<16>) (sext_ln1118_698_fu_10263522_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1049_fu_3190_p2() {
    mul_ln1118_1049_fu_3190_p2 = (!mul_ln1118_1049_fu_3190_p0.read().is_01() || !ap_const_lv25_93.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_1049_fu_3190_p0.read()) * sc_biguint<25>(ap_const_lv25_93);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1050_fu_2592_p0() {
    mul_ln1118_1050_fu_2592_p0 =  (sc_lv<16>) (sext_ln1118_698_fu_10263522_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1050_fu_2592_p2() {
    mul_ln1118_1050_fu_2592_p2 = (!mul_ln1118_1050_fu_2592_p0.read().is_01() || !ap_const_lv25_DC.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_1050_fu_2592_p0.read()) * sc_biguint<25>(ap_const_lv25_DC);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1051_fu_1795_p0() {
    mul_ln1118_1051_fu_1795_p0 =  (sc_lv<16>) (sext_ln1118_698_fu_10263522_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1051_fu_1795_p2() {
    mul_ln1118_1051_fu_1795_p2 = (!mul_ln1118_1051_fu_1795_p0.read().is_01() || !ap_const_lv25_87.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_1051_fu_1795_p0.read()) * sc_biguint<25>(ap_const_lv25_87);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1052_fu_1652_p0() {
    mul_ln1118_1052_fu_1652_p0 =  (sc_lv<16>) (sext_ln1118_698_fu_10263522_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1052_fu_1652_p2() {
    mul_ln1118_1052_fu_1652_p2 = (!mul_ln1118_1052_fu_1652_p0.read().is_01() || !ap_const_lv25_1FFFF35.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_1052_fu_1652_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF35);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1053_fu_2703_p0() {
    mul_ln1118_1053_fu_2703_p0 =  (sc_lv<16>) (sext_ln1118_698_fu_10263522_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1053_fu_2703_p2() {
    mul_ln1118_1053_fu_2703_p2 = (!mul_ln1118_1053_fu_2703_p0.read().is_01() || !ap_const_lv25_86.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_1053_fu_2703_p0.read()) * sc_biguint<25>(ap_const_lv25_86);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1054_fu_1707_p0() {
    mul_ln1118_1054_fu_1707_p0 =  (sc_lv<16>) (sext_ln1118_698_fu_10263522_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1054_fu_1707_p2() {
    mul_ln1118_1054_fu_1707_p2 = (!mul_ln1118_1054_fu_1707_p0.read().is_01() || !ap_const_lv25_94.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_1054_fu_1707_p0.read()) * sc_biguint<25>(ap_const_lv25_94);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1055_fu_2360_p0() {
    mul_ln1118_1055_fu_2360_p0 =  (sc_lv<16>) (sext_ln1118_702_fu_10263552_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1055_fu_2360_p2() {
    mul_ln1118_1055_fu_2360_p2 = (!mul_ln1118_1055_fu_2360_p0.read().is_01() || !ap_const_lv23_7FFFCB.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_1055_fu_2360_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFCB);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1056_fu_2871_p0() {
    mul_ln1118_1056_fu_2871_p0 =  (sc_lv<16>) (sext_ln1118_702_fu_10263552_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1056_fu_2871_p2() {
    mul_ln1118_1056_fu_2871_p2 = (!mul_ln1118_1056_fu_2871_p0.read().is_01() || !ap_const_lv23_7FFFD9.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_1056_fu_2871_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFD9);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1057_fu_2017_p0() {
    mul_ln1118_1057_fu_2017_p0 =  (sc_lv<16>) (sext_ln1118_702_fu_10263552_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1057_fu_2017_p2() {
    mul_ln1118_1057_fu_2017_p2 = (!mul_ln1118_1057_fu_2017_p0.read().is_01() || !ap_const_lv23_7FFFD6.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_1057_fu_2017_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFD6);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1058_fu_3523_p0() {
    mul_ln1118_1058_fu_3523_p0 = sext_ln1118_700_fu_10263542_p0.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1058_fu_3523_p2() {
    mul_ln1118_1058_fu_3523_p2 = (!mul_ln1118_1058_fu_3523_p0.read().is_01() || !ap_const_lv24_FFFF83.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1058_fu_3523_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF83);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1059_fu_2527_p0() {
    mul_ln1118_1059_fu_2527_p0 =  (sc_lv<16>) (sext_ln1118_698_fu_10263522_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1059_fu_2527_p2() {
    mul_ln1118_1059_fu_2527_p2 = (!mul_ln1118_1059_fu_2527_p0.read().is_01() || !ap_const_lv25_8C.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_1059_fu_2527_p0.read()) * sc_biguint<25>(ap_const_lv25_8C);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1060_fu_2782_p0() {
    mul_ln1118_1060_fu_2782_p0 =  (sc_lv<16>) (sext_ln1118_698_fu_10263522_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1060_fu_2782_p2() {
    mul_ln1118_1060_fu_2782_p2 = (!mul_ln1118_1060_fu_2782_p0.read().is_01() || !ap_const_lv25_1FFFF63.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_1060_fu_2782_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF63);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1061_fu_2160_p0() {
    mul_ln1118_1061_fu_2160_p0 =  (sc_lv<16>) (sext_ln1118_702_fu_10263552_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1061_fu_2160_p2() {
    mul_ln1118_1061_fu_2160_p2 = (!mul_ln1118_1061_fu_2160_p0.read().is_01() || !ap_const_lv23_2D.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_1061_fu_2160_p0.read()) * sc_biguint<23>(ap_const_lv23_2D);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1062_fu_3631_p0() {
    mul_ln1118_1062_fu_3631_p0 =  (sc_lv<16>) (sext_ln1118_702_fu_10263552_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1062_fu_3631_p2() {
    mul_ln1118_1062_fu_3631_p2 = (!mul_ln1118_1062_fu_3631_p0.read().is_01() || !ap_const_lv23_7FFFDA.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_1062_fu_3631_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFDA);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1063_fu_2162_p0() {
    mul_ln1118_1063_fu_2162_p0 =  (sc_lv<16>) (sext_ln1118_699_fu_10263536_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1063_fu_2162_p2() {
    mul_ln1118_1063_fu_2162_p2 = (!mul_ln1118_1063_fu_2162_p0.read().is_01() || !ap_const_lv22_1B.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_1063_fu_2162_p0.read()) * sc_biguint<22>(ap_const_lv22_1B);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1064_fu_2163_p0() {
    mul_ln1118_1064_fu_2163_p0 =  (sc_lv<16>) (sext_ln1118_698_fu_10263522_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1064_fu_2163_p2() {
    mul_ln1118_1064_fu_2163_p2 = (!mul_ln1118_1064_fu_2163_p0.read().is_01() || !ap_const_lv25_B4.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_1064_fu_2163_p0.read()) * sc_biguint<25>(ap_const_lv25_B4);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1065_fu_2654_p0() {
    mul_ln1118_1065_fu_2654_p0 =  (sc_lv<16>) (sext_ln1118_702_fu_10263552_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1065_fu_2654_p2() {
    mul_ln1118_1065_fu_2654_p2 = (!mul_ln1118_1065_fu_2654_p0.read().is_01() || !ap_const_lv23_2C.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_1065_fu_2654_p0.read()) * sc_biguint<23>(ap_const_lv23_2C);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1066_fu_2655_p0() {
    mul_ln1118_1066_fu_2655_p0 = sext_ln1118_701_fu_10263547_p0.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1066_fu_2655_p2() {
    mul_ln1118_1066_fu_2655_p2 = (!mul_ln1118_1066_fu_2655_p0.read().is_01() || !ap_const_lv21_1FFFF5.is_01())? sc_lv<21>(): sc_bigint<16>(mul_ln1118_1066_fu_2655_p0.read()) * sc_bigint<21>(ap_const_lv21_1FFFF5);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1067_fu_2166_p0() {
    mul_ln1118_1067_fu_2166_p0 =  (sc_lv<16>) (sext_ln1118_698_fu_10263522_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1067_fu_2166_p2() {
    mul_ln1118_1067_fu_2166_p2 = (!mul_ln1118_1067_fu_2166_p0.read().is_01() || !ap_const_lv25_1FFFF6C.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_1067_fu_2166_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF6C);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1068_fu_2657_p0() {
    mul_ln1118_1068_fu_2657_p0 =  (sc_lv<16>) (sext_ln708_376_fu_10264153_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1068_fu_2657_p2() {
    mul_ln1118_1068_fu_2657_p2 = (!mul_ln1118_1068_fu_2657_p0.read().is_01() || !ap_const_lv24_FFFF9D.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1068_fu_2657_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF9D);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1069_fu_1678_p0() {
    mul_ln1118_1069_fu_1678_p0 =  (sc_lv<16>) (sext_ln708_375_fu_10264147_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1069_fu_1678_p2() {
    mul_ln1118_1069_fu_1678_p2 = (!mul_ln1118_1069_fu_1678_p0.read().is_01() || !ap_const_lv26_12C.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_1069_fu_1678_p0.read()) * sc_biguint<26>(ap_const_lv26_12C);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1070_fu_3149_p0() {
    mul_ln1118_1070_fu_3149_p0 =  (sc_lv<16>) (sext_ln708_374_fu_10264135_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1070_fu_3149_p2() {
    mul_ln1118_1070_fu_3149_p2 = (!mul_ln1118_1070_fu_3149_p0.read().is_01() || !ap_const_lv25_AE.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_1070_fu_3149_p0.read()) * sc_biguint<25>(ap_const_lv25_AE);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1071_fu_2660_p0() {
    mul_ln1118_1071_fu_2660_p0 =  (sc_lv<16>) (sext_ln708_374_fu_10264135_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1071_fu_2660_p2() {
    mul_ln1118_1071_fu_2660_p2 = (!mul_ln1118_1071_fu_2660_p0.read().is_01() || !ap_const_lv25_8E.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_1071_fu_2660_p0.read()) * sc_biguint<25>(ap_const_lv25_8E);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1072_fu_2171_p0() {
    mul_ln1118_1072_fu_2171_p0 =  (sc_lv<16>) (sext_ln708_374_fu_10264135_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1072_fu_2171_p2() {
    mul_ln1118_1072_fu_2171_p2 = (!mul_ln1118_1072_fu_2171_p0.read().is_01() || !ap_const_lv25_95.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_1072_fu_2171_p0.read()) * sc_biguint<25>(ap_const_lv25_95);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1073_fu_2172_p0() {
    mul_ln1118_1073_fu_2172_p0 =  (sc_lv<16>) (sext_ln708_374_fu_10264135_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1073_fu_2172_p2() {
    mul_ln1118_1073_fu_2172_p2 = (!mul_ln1118_1073_fu_2172_p0.read().is_01() || !ap_const_lv25_1FFFF73.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_1073_fu_2172_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF73);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1074_fu_2173_p0() {
    mul_ln1118_1074_fu_2173_p0 =  (sc_lv<16>) (sext_ln708_374_fu_10264135_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1074_fu_2173_p2() {
    mul_ln1118_1074_fu_2173_p2 = (!mul_ln1118_1074_fu_2173_p0.read().is_01() || !ap_const_lv25_91.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_1074_fu_2173_p0.read()) * sc_biguint<25>(ap_const_lv25_91);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1075_fu_1684_p0() {
    mul_ln1118_1075_fu_1684_p0 =  (sc_lv<16>) (sext_ln708_376_fu_10264153_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1075_fu_1684_p2() {
    mul_ln1118_1075_fu_1684_p2 = (!mul_ln1118_1075_fu_1684_p0.read().is_01() || !ap_const_lv24_51.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1075_fu_1684_p0.read()) * sc_biguint<24>(ap_const_lv24_51);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1076_fu_2175_p0() {
    mul_ln1118_1076_fu_2175_p0 =  (sc_lv<16>) (sext_ln708_373_fu_10264128_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1076_fu_2175_p2() {
    mul_ln1118_1076_fu_2175_p2 = (!mul_ln1118_1076_fu_2175_p0.read().is_01() || !ap_const_lv23_35.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_1076_fu_2175_p0.read()) * sc_biguint<23>(ap_const_lv23_35);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1077_fu_2176_p0() {
    mul_ln1118_1077_fu_2176_p0 =  (sc_lv<16>) (sext_ln708_374_fu_10264135_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1077_fu_2176_p2() {
    mul_ln1118_1077_fu_2176_p2 = (!mul_ln1118_1077_fu_2176_p0.read().is_01() || !ap_const_lv25_1FFFF28.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_1077_fu_2176_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF28);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1078_fu_2177_p0() {
    mul_ln1118_1078_fu_2177_p0 =  (sc_lv<16>) (sext_ln708_376_fu_10264153_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1078_fu_2177_p2() {
    mul_ln1118_1078_fu_2177_p2 = (!mul_ln1118_1078_fu_2177_p0.read().is_01() || !ap_const_lv24_61.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1078_fu_2177_p0.read()) * sc_biguint<24>(ap_const_lv24_61);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1079_fu_2178_p0() {
    mul_ln1118_1079_fu_2178_p0 =  (sc_lv<16>) (sext_ln708_372_fu_10264122_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1079_fu_2178_p2() {
    mul_ln1118_1079_fu_2178_p2 = (!mul_ln1118_1079_fu_2178_p0.read().is_01() || !ap_const_lv22_3FFFE3.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_1079_fu_2178_p0.read()) * sc_bigint<22>(ap_const_lv22_3FFFE3);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1080_fu_2179_p0() {
    mul_ln1118_1080_fu_2179_p0 =  (sc_lv<16>) (sext_ln708_372_fu_10264122_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1080_fu_2179_p2() {
    mul_ln1118_1080_fu_2179_p2 = (!mul_ln1118_1080_fu_2179_p0.read().is_01() || !ap_const_lv22_3FFFEA.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_1080_fu_2179_p0.read()) * sc_bigint<22>(ap_const_lv22_3FFFEA);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1081_fu_1690_p0() {
    mul_ln1118_1081_fu_1690_p0 =  (sc_lv<16>) (sext_ln708_376_fu_10264153_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1081_fu_1690_p2() {
    mul_ln1118_1081_fu_1690_p2 = (!mul_ln1118_1081_fu_1690_p0.read().is_01() || !ap_const_lv24_6C.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1081_fu_1690_p0.read()) * sc_biguint<24>(ap_const_lv24_6C);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1082_fu_3161_p0() {
    mul_ln1118_1082_fu_3161_p0 =  (sc_lv<16>) (sext_ln708_374_fu_10264135_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1082_fu_3161_p2() {
    mul_ln1118_1082_fu_3161_p2 = (!mul_ln1118_1082_fu_3161_p0.read().is_01() || !ap_const_lv25_1FFFF3E.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_1082_fu_3161_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF3E);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1083_fu_2182_p0() {
    mul_ln1118_1083_fu_2182_p0 =  (sc_lv<16>) (sext_ln708_373_fu_10264128_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1083_fu_2182_p2() {
    mul_ln1118_1083_fu_2182_p2 = (!mul_ln1118_1083_fu_2182_p0.read().is_01() || !ap_const_lv23_7FFFCC.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_1083_fu_2182_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFCC);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1084_fu_3163_p0() {
    mul_ln1118_1084_fu_3163_p0 =  (sc_lv<16>) (sext_ln708_373_fu_10264128_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1084_fu_3163_p2() {
    mul_ln1118_1084_fu_3163_p2 = (!mul_ln1118_1084_fu_3163_p0.read().is_01() || !ap_const_lv23_7FFFDA.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_1084_fu_3163_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFDA);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1085_fu_2674_p0() {
    mul_ln1118_1085_fu_2674_p0 =  (sc_lv<16>) (sext_ln708_375_fu_10264147_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1085_fu_2674_p2() {
    mul_ln1118_1085_fu_2674_p2 = (!mul_ln1118_1085_fu_2674_p0.read().is_01() || !ap_const_lv26_3FFFDE8.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_1085_fu_2674_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFDE8);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1086_fu_3165_p0() {
    mul_ln1118_1086_fu_3165_p0 =  (sc_lv<16>) (sext_ln708_374_fu_10264135_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1086_fu_3165_p2() {
    mul_ln1118_1086_fu_3165_p2 = (!mul_ln1118_1086_fu_3165_p0.read().is_01() || !ap_const_lv25_89.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_1086_fu_3165_p0.read()) * sc_biguint<25>(ap_const_lv25_89);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1087_fu_1696_p0() {
    mul_ln1118_1087_fu_1696_p0 =  (sc_lv<16>) (sext_ln1118_726_fu_10264711_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1087_fu_1696_p2() {
    mul_ln1118_1087_fu_1696_p2 = (!mul_ln1118_1087_fu_1696_p0.read().is_01() || !ap_const_lv24_FFFF87.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1087_fu_1696_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF87);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1088_fu_3581_p0() {
    mul_ln1118_1088_fu_3581_p0 =  (sc_lv<16>) (sext_ln1118_726_fu_10264711_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1088_fu_3581_p2() {
    mul_ln1118_1088_fu_3581_p2 = (!mul_ln1118_1088_fu_3581_p0.read().is_01() || !ap_const_lv24_FFFFA2.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1088_fu_3581_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFA2);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1089_fu_2920_p0() {
    mul_ln1118_1089_fu_2920_p0 =  (sc_lv<16>) (sext_ln1118_725_fu_10264700_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1089_fu_2920_p2() {
    mul_ln1118_1089_fu_2920_p2 = (!mul_ln1118_1089_fu_2920_p0.read().is_01() || !ap_const_lv25_87.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_1089_fu_2920_p0.read()) * sc_biguint<25>(ap_const_lv25_87);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1090_fu_2123_p0() {
    mul_ln1118_1090_fu_2123_p0 =  (sc_lv<16>) (sext_ln1118_725_fu_10264700_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1090_fu_2123_p2() {
    mul_ln1118_1090_fu_2123_p2 = (!mul_ln1118_1090_fu_2123_p0.read().is_01() || !ap_const_lv25_1FFFF17.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_1090_fu_2123_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF17);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1091_fu_2713_p0() {
    mul_ln1118_1091_fu_2713_p0 =  (sc_lv<16>) (sext_ln1118_725_fu_10264700_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1091_fu_2713_p2() {
    mul_ln1118_1091_fu_2713_p2 = (!mul_ln1118_1091_fu_2713_p0.read().is_01() || !ap_const_lv25_1FFFF2D.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_1091_fu_2713_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF2D);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1092_fu_1644_p0() {
    mul_ln1118_1092_fu_1644_p0 =  (sc_lv<16>) (sext_ln1118_725_fu_10264700_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1092_fu_1644_p2() {
    mul_ln1118_1092_fu_1644_p2 = (!mul_ln1118_1092_fu_1644_p0.read().is_01() || !ap_const_lv25_9D.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_1092_fu_1644_p0.read()) * sc_biguint<25>(ap_const_lv25_9D);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1093_fu_3349_p0() {
    mul_ln1118_1093_fu_3349_p0 =  (sc_lv<16>) (sext_ln1118_729_fu_10264731_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1093_fu_3349_p2() {
    mul_ln1118_1093_fu_3349_p2 = (!mul_ln1118_1093_fu_3349_p0.read().is_01() || !ap_const_lv21_1FFFF5.is_01())? sc_lv<21>(): sc_bigint<16>(mul_ln1118_1093_fu_3349_p0.read()) * sc_bigint<21>(ap_const_lv21_1FFFF5);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1094_fu_3549_p0() {
    mul_ln1118_1094_fu_3549_p0 = sext_ln1118_724_fu_10264695_p0.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1094_fu_3549_p2() {
    mul_ln1118_1094_fu_3549_p2 = (!mul_ln1118_1094_fu_3549_p0.read().is_01() || !ap_const_lv23_32.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_1094_fu_3549_p0.read()) * sc_biguint<23>(ap_const_lv23_32);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1095_fu_3605_p0() {
    mul_ln1118_1095_fu_3605_p0 =  (sc_lv<16>) (sext_ln1118_725_fu_10264700_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1095_fu_3605_p2() {
    mul_ln1118_1095_fu_3605_p2 = (!mul_ln1118_1095_fu_3605_p0.read().is_01() || !ap_const_lv25_1FFFF69.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_1095_fu_3605_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF69);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1096_fu_1955_p0() {
    mul_ln1118_1096_fu_1955_p0 =  (sc_lv<16>) (sext_ln1118_725_fu_10264700_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1096_fu_1955_p2() {
    mul_ln1118_1096_fu_1955_p2 = (!mul_ln1118_1096_fu_1955_p0.read().is_01() || !ap_const_lv25_86.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_1096_fu_1955_p0.read()) * sc_biguint<25>(ap_const_lv25_86);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1097_fu_3660_p0() {
    mul_ln1118_1097_fu_3660_p0 =  (sc_lv<16>) (sext_ln1118_725_fu_10264700_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1097_fu_3660_p2() {
    mul_ln1118_1097_fu_3660_p2 = (!mul_ln1118_1097_fu_3660_p0.read().is_01() || !ap_const_lv25_1FFFF59.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_1097_fu_3660_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF59);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1098_fu_2266_p0() {
    mul_ln1118_1098_fu_2266_p0 =  (sc_lv<16>) (sext_ln1118_726_fu_10264711_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1098_fu_2266_p2() {
    mul_ln1118_1098_fu_2266_p2 = (!mul_ln1118_1098_fu_2266_p0.read().is_01() || !ap_const_lv24_FFFF91.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1098_fu_2266_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF91);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1099_fu_2720_p0() {
    mul_ln1118_1099_fu_2720_p0 =  (sc_lv<16>) (sext_ln1118_726_fu_10264711_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1099_fu_2720_p2() {
    mul_ln1118_1099_fu_2720_p2 = (!mul_ln1118_1099_fu_2720_p0.read().is_01() || !ap_const_lv24_FFFFAE.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1099_fu_2720_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFAE);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1100_fu_1923_p0() {
    mul_ln1118_1100_fu_1923_p0 =  (sc_lv<16>) (sext_ln1118_726_fu_10264711_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1100_fu_1923_p2() {
    mul_ln1118_1100_fu_1923_p2 = (!mul_ln1118_1100_fu_1923_p0.read().is_01() || !ap_const_lv24_5D.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1100_fu_1923_p0.read()) * sc_biguint<24>(ap_const_lv24_5D);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1101_fu_2377_p0() {
    mul_ln1118_1101_fu_2377_p0 =  (sc_lv<16>) (sext_ln1118_726_fu_10264711_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1101_fu_2377_p2() {
    mul_ln1118_1101_fu_2377_p2 = (!mul_ln1118_1101_fu_2377_p0.read().is_01() || !ap_const_lv24_FFFFB7.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1101_fu_2377_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFB7);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1102_fu_2234_p0() {
    mul_ln1118_1102_fu_2234_p0 =  (sc_lv<16>) (sext_ln1118_726_fu_10264711_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1102_fu_2234_p2() {
    mul_ln1118_1102_fu_2234_p2 = (!mul_ln1118_1102_fu_2234_p0.read().is_01() || !ap_const_lv24_74.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1102_fu_2234_p0.read()) * sc_biguint<24>(ap_const_lv24_74);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1103_fu_1835_p0() {
    mul_ln1118_1103_fu_1835_p0 =  (sc_lv<16>) (sext_ln1118_726_fu_10264711_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1103_fu_1835_p2() {
    mul_ln1118_1103_fu_1835_p2 = (!mul_ln1118_1103_fu_1835_p0.read().is_01() || !ap_const_lv24_61.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1103_fu_1835_p0.read()) * sc_biguint<24>(ap_const_lv24_61);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1104_fu_2886_p0() {
    mul_ln1118_1104_fu_2886_p0 =  (sc_lv<16>) (sext_ln1118_741_fu_10265302_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1104_fu_2886_p2() {
    mul_ln1118_1104_fu_2886_p2 = (!mul_ln1118_1104_fu_2886_p0.read().is_01() || !ap_const_lv25_1FFFF0E.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_1104_fu_2886_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF0E);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1105_fu_2288_p0() {
    mul_ln1118_1105_fu_2288_p0 =  (sc_lv<16>) (sext_ln1118_744_fu_10265329_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1105_fu_2288_p2() {
    mul_ln1118_1105_fu_2288_p2 = (!mul_ln1118_1105_fu_2288_p0.read().is_01() || !ap_const_lv24_47.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1105_fu_2288_p0.read()) * sc_biguint<24>(ap_const_lv24_47);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1106_fu_3197_p0() {
    mul_ln1118_1106_fu_3197_p0 =  (sc_lv<16>) (sext_ln1118_741_fu_10265302_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1106_fu_3197_p2() {
    mul_ln1118_1106_fu_3197_p2 = (!mul_ln1118_1106_fu_3197_p0.read().is_01() || !ap_const_lv25_1FFFF79.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_1106_fu_3197_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF79);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1107_fu_1746_p0() {
    mul_ln1118_1107_fu_1746_p0 =  (sc_lv<16>) (sext_ln1118_743_fu_10265323_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1107_fu_1746_p2() {
    mul_ln1118_1107_fu_1746_p2 = (!mul_ln1118_1107_fu_1746_p0.read().is_01() || !ap_const_lv22_3FFFED.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_1107_fu_1746_p0.read()) * sc_bigint<22>(ap_const_lv22_3FFFED);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1108_fu_2399_p0() {
    mul_ln1118_1108_fu_2399_p0 =  (sc_lv<16>) (sext_ln1118_741_fu_10265302_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1108_fu_2399_p2() {
    mul_ln1118_1108_fu_2399_p2 = (!mul_ln1118_1108_fu_2399_p0.read().is_01() || !ap_const_lv25_BE.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_1108_fu_2399_p0.read()) * sc_biguint<25>(ap_const_lv25_BE);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1109_fu_2057_p0() {
    mul_ln1118_1109_fu_2057_p0 =  (sc_lv<16>) (sext_ln1118_741_fu_10265302_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1109_fu_2057_p2() {
    mul_ln1118_1109_fu_2057_p2 = (!mul_ln1118_1109_fu_2057_p0.read().is_01() || !ap_const_lv25_1FFFF0D.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_1109_fu_2057_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF0D);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1110_fu_2511_p0() {
    mul_ln1118_1110_fu_2511_p0 =  (sc_lv<16>) (sext_ln1118_741_fu_10265302_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1110_fu_2511_p2() {
    mul_ln1118_1110_fu_2511_p2 = (!mul_ln1118_1110_fu_2511_p0.read().is_01() || !ap_const_lv25_B3.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_1110_fu_2511_p0.read()) * sc_biguint<25>(ap_const_lv25_B3);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1111_fu_2311_p0() {
    mul_ln1118_1111_fu_2311_p0 =  (sc_lv<16>) (sext_ln1118_742_fu_10265318_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1111_fu_2311_p2() {
    mul_ln1118_1111_fu_2311_p2 = (!mul_ln1118_1111_fu_2311_p0.read().is_01() || !ap_const_lv21_1FFFF5.is_01())? sc_lv<21>(): sc_bigint<16>(mul_ln1118_1111_fu_2311_p0.read()) * sc_bigint<21>(ap_const_lv21_1FFFF5);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1112_fu_1713_p0() {
    mul_ln1118_1112_fu_1713_p0 =  (sc_lv<16>) (sext_ln1118_741_fu_10265302_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1112_fu_1713_p2() {
    mul_ln1118_1112_fu_1713_p2 = (!mul_ln1118_1112_fu_1713_p0.read().is_01() || !ap_const_lv25_1FFFF67.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_1112_fu_1713_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF67);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1113_fu_1968_p0() {
    mul_ln1118_1113_fu_1968_p0 =  (sc_lv<16>) (sext_ln1118_744_fu_10265329_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1113_fu_1968_p2() {
    mul_ln1118_1113_fu_1968_p2 = (!mul_ln1118_1113_fu_1968_p0.read().is_01() || !ap_const_lv24_FFFFAF.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1113_fu_1968_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFAF);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1114_fu_2621_p0() {
    mul_ln1118_1114_fu_2621_p0 =  (sc_lv<16>) (sext_ln1118_741_fu_10265302_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1114_fu_2621_p2() {
    mul_ln1118_1114_fu_2621_p2 = (!mul_ln1118_1114_fu_2621_p0.read().is_01() || !ap_const_lv25_93.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_1114_fu_2621_p0.read()) * sc_biguint<25>(ap_const_lv25_93);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1115_fu_2876_p0() {
    mul_ln1118_1115_fu_2876_p0 =  (sc_lv<16>) (sext_ln1118_745_fu_10265339_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1115_fu_2876_p2() {
    mul_ln1118_1115_fu_2876_p2 = (!mul_ln1118_1115_fu_2876_p0.read().is_01() || !ap_const_lv23_7FFFC3.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_1115_fu_2876_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFC3);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1116_fu_2835_p0() {
    mul_ln1118_1116_fu_2835_p0 =  (sc_lv<16>) (sext_ln1118_744_fu_10265329_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1116_fu_2835_p2() {
    mul_ln1118_1116_fu_2835_p2 = (!mul_ln1118_1116_fu_2835_p0.read().is_01() || !ap_const_lv24_FFFFB7.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1116_fu_2835_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFB7);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1117_fu_3326_p0() {
    mul_ln1118_1117_fu_3326_p0 =  (sc_lv<16>) (sext_ln1118_743_fu_10265323_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1117_fu_3326_p2() {
    mul_ln1118_1117_fu_3326_p2 = (!mul_ln1118_1117_fu_3326_p0.read().is_01() || !ap_const_lv22_3FFFEA.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_1117_fu_3326_p0.read()) * sc_bigint<22>(ap_const_lv22_3FFFEA);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1118_fu_1768_p0() {
    mul_ln1118_1118_fu_1768_p0 =  (sc_lv<16>) (sext_ln1118_741_fu_10265302_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1118_fu_1768_p2() {
    mul_ln1118_1118_fu_1768_p2 = (!mul_ln1118_1118_fu_1768_p0.read().is_01() || !ap_const_lv25_9A.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_1118_fu_1768_p0.read()) * sc_biguint<25>(ap_const_lv25_9A);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1119_fu_3328_p0() {
    mul_ln1118_1119_fu_3328_p0 =  (sc_lv<16>) (sext_ln1118_745_fu_10265339_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1119_fu_3328_p2() {
    mul_ln1118_1119_fu_3328_p2 = (!mul_ln1118_1119_fu_3328_p0.read().is_01() || !ap_const_lv23_7FFFD5.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_1119_fu_3328_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFD5);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1120_fu_3329_p0() {
    mul_ln1118_1120_fu_3329_p0 =  (sc_lv<16>) (sext_ln1118_744_fu_10265329_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1120_fu_3329_p2() {
    mul_ln1118_1120_fu_3329_p2 = (!mul_ln1118_1120_fu_3329_p0.read().is_01() || !ap_const_lv24_5B.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1120_fu_3329_p0.read()) * sc_biguint<24>(ap_const_lv24_5B);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1121_fu_3330_p0() {
    mul_ln1118_1121_fu_3330_p0 =  (sc_lv<16>) (sext_ln1118_741_fu_10265302_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1121_fu_3330_p2() {
    mul_ln1118_1121_fu_3330_p2 = (!mul_ln1118_1121_fu_3330_p0.read().is_01() || !ap_const_lv25_1FFFF4C.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_1121_fu_3330_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF4C);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1122_fu_3331_p0() {
    mul_ln1118_1122_fu_3331_p0 =  (sc_lv<16>) (sext_ln1118_744_fu_10265329_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1122_fu_3331_p2() {
    mul_ln1118_1122_fu_3331_p2 = (!mul_ln1118_1122_fu_3331_p0.read().is_01() || !ap_const_lv24_5C.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1122_fu_3331_p0.read()) * sc_biguint<24>(ap_const_lv24_5C);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1123_fu_3332_p0() {
    mul_ln1118_1123_fu_3332_p0 =  (sc_lv<16>) (sext_ln1118_744_fu_10265329_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1123_fu_3332_p2() {
    mul_ln1118_1123_fu_3332_p2 = (!mul_ln1118_1123_fu_3332_p0.read().is_01() || !ap_const_lv24_55.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1123_fu_3332_p0.read()) * sc_biguint<24>(ap_const_lv24_55);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1124_fu_3333_p0() {
    mul_ln1118_1124_fu_3333_p0 =  (sc_lv<16>) (sext_ln1118_741_fu_10265302_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1124_fu_3333_p2() {
    mul_ln1118_1124_fu_3333_p2 = (!mul_ln1118_1124_fu_3333_p0.read().is_01() || !ap_const_lv25_1FFFF74.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_1124_fu_3333_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF74);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1125_fu_3245_p0() {
    mul_ln1118_1125_fu_3245_p0 =  (sc_lv<16>) (sext_ln1118_741_fu_10265302_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1125_fu_3245_p2() {
    mul_ln1118_1125_fu_3245_p2 = (!mul_ln1118_1125_fu_3245_p0.read().is_01() || !ap_const_lv25_F2.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_1125_fu_3245_p0.read()) * sc_biguint<25>(ap_const_lv25_F2);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1126_fu_3335_p0() {
    mul_ln1118_1126_fu_3335_p0 =  (sc_lv<16>) (sext_ln1118_741_fu_10265302_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1126_fu_3335_p2() {
    mul_ln1118_1126_fu_3335_p2 = (!mul_ln1118_1126_fu_3335_p0.read().is_01() || !ap_const_lv25_1FFFF21.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_1126_fu_3335_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF21);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1127_fu_1777_p0() {
    mul_ln1118_1127_fu_1777_p0 =  (sc_lv<16>) (sext_ln1118_758_fu_10265915_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1127_fu_1777_p2() {
    mul_ln1118_1127_fu_1777_p2 = (!mul_ln1118_1127_fu_1777_p0.read().is_01() || !ap_const_lv23_29.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_1127_fu_1777_p0.read()) * sc_biguint<23>(ap_const_lv23_29);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1128_fu_2268_p0() {
    mul_ln1118_1128_fu_2268_p0 =  (sc_lv<16>) (sext_ln1118_756_fu_10265897_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1128_fu_2268_p2() {
    mul_ln1118_1128_fu_2268_p2 = (!mul_ln1118_1128_fu_2268_p0.read().is_01() || !ap_const_lv25_1FFFF1D.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_1128_fu_2268_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF1D);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1129_fu_2759_p0() {
    mul_ln1118_1129_fu_2759_p0 =  (sc_lv<16>) (sext_ln1118_756_fu_10265897_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1129_fu_2759_p2() {
    mul_ln1118_1129_fu_2759_p2 = (!mul_ln1118_1129_fu_2759_p0.read().is_01() || !ap_const_lv25_D4.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_1129_fu_2759_p0.read()) * sc_biguint<25>(ap_const_lv25_D4);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1130_fu_2849_p0() {
    mul_ln1118_1130_fu_2849_p0 =  (sc_lv<16>) (sext_ln1118_758_fu_10265915_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1130_fu_2849_p2() {
    mul_ln1118_1130_fu_2849_p2 = (!mul_ln1118_1130_fu_2849_p0.read().is_01() || !ap_const_lv23_2E.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_1130_fu_2849_p0.read()) * sc_biguint<23>(ap_const_lv23_2E);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1131_fu_1781_p0() {
    mul_ln1118_1131_fu_1781_p0 =  (sc_lv<16>) (sext_ln1118_756_fu_10265897_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1131_fu_1781_p2() {
    mul_ln1118_1131_fu_1781_p2 = (!mul_ln1118_1131_fu_1781_p0.read().is_01() || !ap_const_lv25_1FFFF45.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_1131_fu_1781_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF45);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1132_fu_3341_p0() {
    mul_ln1118_1132_fu_3341_p0 =  (sc_lv<16>) (sext_ln1118_756_fu_10265897_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1132_fu_3341_p2() {
    mul_ln1118_1132_fu_3341_p2 = (!mul_ln1118_1132_fu_3341_p0.read().is_01() || !ap_const_lv25_DD.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_1132_fu_3341_p0.read()) * sc_biguint<25>(ap_const_lv25_DD);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1133_fu_3342_p0() {
    mul_ln1118_1133_fu_3342_p0 =  (sc_lv<16>) (sext_ln1118_755_fu_10265887_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1133_fu_3342_p2() {
    mul_ln1118_1133_fu_3342_p2 = (!mul_ln1118_1133_fu_3342_p0.read().is_01() || !ap_const_lv24_53.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1133_fu_3342_p0.read()) * sc_biguint<24>(ap_const_lv24_53);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1134_fu_2853_p0() {
    mul_ln1118_1134_fu_2853_p0 =  (sc_lv<16>) (sext_ln1118_758_fu_10265915_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1134_fu_2853_p2() {
    mul_ln1118_1134_fu_2853_p2 = (!mul_ln1118_1134_fu_2853_p0.read().is_01() || !ap_const_lv23_26.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_1134_fu_2853_p0.read()) * sc_biguint<23>(ap_const_lv23_26);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1135_fu_3344_p0() {
    mul_ln1118_1135_fu_3344_p0 =  (sc_lv<16>) (sext_ln1118_756_fu_10265897_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1135_fu_3344_p2() {
    mul_ln1118_1135_fu_3344_p2 = (!mul_ln1118_1135_fu_3344_p0.read().is_01() || !ap_const_lv25_AE.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_1135_fu_3344_p0.read()) * sc_biguint<25>(ap_const_lv25_AE);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1136_fu_3345_p0() {
    mul_ln1118_1136_fu_3345_p0 =  (sc_lv<16>) (sext_ln1118_754_fu_10265881_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1136_fu_3345_p2() {
    mul_ln1118_1136_fu_3345_p2 = (!mul_ln1118_1136_fu_3345_p0.read().is_01() || !ap_const_lv26_11A.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_1136_fu_3345_p0.read()) * sc_biguint<26>(ap_const_lv26_11A);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1137_fu_1787_p0() {
    mul_ln1118_1137_fu_1787_p0 =  (sc_lv<16>) (sext_ln1118_755_fu_10265887_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1137_fu_1787_p2() {
    mul_ln1118_1137_fu_1787_p2 = (!mul_ln1118_1137_fu_1787_p0.read().is_01() || !ap_const_lv24_FFFFBA.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1137_fu_1787_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFBA);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1138_fu_1699_p0() {
    mul_ln1118_1138_fu_1699_p0 =  (sc_lv<16>) (sext_ln1118_757_fu_10265910_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1138_fu_1699_p2() {
    mul_ln1118_1138_fu_1699_p2 = (!mul_ln1118_1138_fu_1699_p0.read().is_01() || !ap_const_lv22_1D.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_1138_fu_1699_p0.read()) * sc_biguint<22>(ap_const_lv22_1D);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1139_fu_1789_p0() {
    mul_ln1118_1139_fu_1789_p0 =  (sc_lv<16>) (sext_ln1118_755_fu_10265887_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1139_fu_1789_p2() {
    mul_ln1118_1139_fu_1789_p2 = (!mul_ln1118_1139_fu_1789_p0.read().is_01() || !ap_const_lv24_FFFFA4.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1139_fu_1789_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFA4);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1140_fu_2859_p0() {
    mul_ln1118_1140_fu_2859_p0 =  (sc_lv<16>) (sext_ln1118_754_fu_10265881_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1140_fu_2859_p2() {
    mul_ln1118_1140_fu_2859_p2 = (!mul_ln1118_1140_fu_2859_p0.read().is_01() || !ap_const_lv26_10D.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_1140_fu_2859_p0.read()) * sc_biguint<26>(ap_const_lv26_10D);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1141_fu_3350_p0() {
    mul_ln1118_1141_fu_3350_p0 =  (sc_lv<16>) (sext_ln1118_756_fu_10265897_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1141_fu_3350_p2() {
    mul_ln1118_1141_fu_3350_p2 = (!mul_ln1118_1141_fu_3350_p0.read().is_01() || !ap_const_lv25_1FFFF52.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_1141_fu_3350_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF52);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1142_fu_3351_p0() {
    mul_ln1118_1142_fu_3351_p0 =  (sc_lv<16>) (sext_ln1118_756_fu_10265897_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1142_fu_3351_p2() {
    mul_ln1118_1142_fu_3351_p2 = (!mul_ln1118_1142_fu_3351_p0.read().is_01() || !ap_const_lv25_B9.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_1142_fu_3351_p0.read()) * sc_biguint<25>(ap_const_lv25_B9);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1143_fu_2832_p0() {
    mul_ln1118_1143_fu_2832_p0 =  (sc_lv<16>) (sext_ln1118_756_fu_10265897_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1143_fu_2832_p2() {
    mul_ln1118_1143_fu_2832_p2 = (!mul_ln1118_1143_fu_2832_p0.read().is_01() || !ap_const_lv25_1FFFF4D.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_1143_fu_2832_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF4D);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1144_fu_2307_p0() {
    mul_ln1118_1144_fu_2307_p0 =  (sc_lv<16>) (sext_ln1118_756_fu_10265897_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1144_fu_2307_p2() {
    mul_ln1118_1144_fu_2307_p2 = (!mul_ln1118_1144_fu_2307_p0.read().is_01() || !ap_const_lv25_E6.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_1144_fu_2307_p0.read()) * sc_biguint<25>(ap_const_lv25_E6);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1145_fu_2489_p0() {
    mul_ln1118_1145_fu_2489_p0 =  (sc_lv<16>) (sext_ln1118_758_fu_10265915_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1145_fu_2489_p2() {
    mul_ln1118_1145_fu_2489_p2 = (!mul_ln1118_1145_fu_2489_p0.read().is_01() || !ap_const_lv23_7FFFC7.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_1145_fu_2489_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFC7);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1146_fu_3079_p0() {
    mul_ln1118_1146_fu_3079_p0 =  (sc_lv<16>) (sext_ln1118_755_fu_10265887_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1146_fu_3079_p2() {
    mul_ln1118_1146_fu_3079_p2 = (!mul_ln1118_1146_fu_3079_p0.read().is_01() || !ap_const_lv24_FFFF91.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1146_fu_3079_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF91);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1147_fu_2282_p0() {
    mul_ln1118_1147_fu_2282_p0 =  (sc_lv<16>) (sext_ln1118_755_fu_10265887_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1147_fu_2282_p2() {
    mul_ln1118_1147_fu_2282_p2 = (!mul_ln1118_1147_fu_2282_p0.read().is_01() || !ap_const_lv24_61.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1147_fu_2282_p0.read()) * sc_biguint<24>(ap_const_lv24_61);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1148_fu_1757_p0() {
    mul_ln1118_1148_fu_1757_p0 =  (sc_lv<16>) (sext_ln1118_755_fu_10265887_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1148_fu_1757_p2() {
    mul_ln1118_1148_fu_1757_p2 = (!mul_ln1118_1148_fu_1757_p0.read().is_01() || !ap_const_lv24_FFFFB6.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1148_fu_1757_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFB6);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1149_fu_3054_p0() {
    mul_ln1118_1149_fu_3054_p0 =  (sc_lv<16>) (sext_ln1118_768_fu_10266463_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1149_fu_3054_p2() {
    mul_ln1118_1149_fu_3054_p2 = (!mul_ln1118_1149_fu_3054_p0.read().is_01() || !ap_const_lv26_3FFFEBB.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_1149_fu_3054_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFEBB);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1150_fu_3301_p0() {
    mul_ln1118_1150_fu_3301_p0 =  (sc_lv<16>) (sext_ln1118_767_fu_10266448_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1150_fu_3301_p2() {
    mul_ln1118_1150_fu_3301_p2 = (!mul_ln1118_1150_fu_3301_p0.read().is_01() || !ap_const_lv25_FB.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_1150_fu_3301_p0.read()) * sc_biguint<25>(ap_const_lv25_FB);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1151_fu_2902_p0() {
    mul_ln1118_1151_fu_2902_p0 = sext_ln1118_766_fu_10266443_p0.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1151_fu_2902_p2() {
    mul_ln1118_1151_fu_2902_p2 = (!mul_ln1118_1151_fu_2902_p0.read().is_01() || !ap_const_lv23_7FFFDA.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_1151_fu_2902_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFDA);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1152_fu_2560_p0() {
    mul_ln1118_1152_fu_2560_p0 =  (sc_lv<16>) (sext_ln1118_770_fu_10266478_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1152_fu_2560_p2() {
    mul_ln1118_1152_fu_2560_p2 = (!mul_ln1118_1152_fu_2560_p0.read().is_01() || !ap_const_lv24_FFFFA1.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1152_fu_2560_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFA1);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1153_fu_3213_p0() {
    mul_ln1118_1153_fu_3213_p0 =  (sc_lv<16>) (sext_ln1118_768_fu_10266463_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1153_fu_3213_p2() {
    mul_ln1118_1153_fu_3213_p2 = (!mul_ln1118_1153_fu_3213_p0.read().is_01() || !ap_const_lv26_3FFFDF9.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_1153_fu_3213_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFDF9);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1154_fu_1762_p0() {
    mul_ln1118_1154_fu_1762_p0 =  (sc_lv<16>) (sext_ln1118_770_fu_10266478_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1154_fu_1762_p2() {
    mul_ln1118_1154_fu_1762_p2 = (!mul_ln1118_1154_fu_1762_p0.read().is_01() || !ap_const_lv24_FFFFA5.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1154_fu_1762_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFA5);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1155_fu_2216_p0() {
    mul_ln1118_1155_fu_2216_p0 =  (sc_lv<16>) (sext_ln1118_767_fu_10266448_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1155_fu_2216_p2() {
    mul_ln1118_1155_fu_2216_p2 = (!mul_ln1118_1155_fu_2216_p0.read().is_01() || !ap_const_lv25_9C.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_1155_fu_2216_p0.read()) * sc_biguint<25>(ap_const_lv25_9C);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1156_fu_2073_p0() {
    mul_ln1118_1156_fu_2073_p0 =  (sc_lv<16>) (sext_ln1118_768_fu_10266463_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1156_fu_2073_p2() {
    mul_ln1118_1156_fu_2073_p2 = (!mul_ln1118_1156_fu_2073_p0.read().is_01() || !ap_const_lv26_3FFFED1.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_1156_fu_2073_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFED1);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1157_fu_2925_p0() {
    mul_ln1118_1157_fu_2925_p0 =  (sc_lv<16>) (sext_ln1118_767_fu_10266448_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1157_fu_2925_p2() {
    mul_ln1118_1157_fu_2925_p2 = (!mul_ln1118_1157_fu_2925_p0.read().is_01() || !ap_const_lv25_1FFFF62.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_1157_fu_2925_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF62);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1158_fu_2327_p0() {
    mul_ln1118_1158_fu_2327_p0 =  (sc_lv<16>) (sext_ln1118_767_fu_10266448_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1158_fu_2327_p2() {
    mul_ln1118_1158_fu_2327_p2 = (!mul_ln1118_1158_fu_2327_p0.read().is_01() || !ap_const_lv25_1FFFF44.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_1158_fu_2327_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF44);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1159_fu_2184_p0() {
    mul_ln1118_1159_fu_2184_p0 =  (sc_lv<16>) (sext_ln1118_768_fu_10266463_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1159_fu_2184_p2() {
    mul_ln1118_1159_fu_2184_p2 = (!mul_ln1118_1159_fu_2184_p0.read().is_01() || !ap_const_lv26_3FFFEE4.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_1159_fu_2184_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFEE4);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1160_fu_1984_p0() {
    mul_ln1118_1160_fu_1984_p0 =  (sc_lv<16>) (sext_ln1118_767_fu_10266448_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1160_fu_1984_p2() {
    mul_ln1118_1160_fu_1984_p2 = (!mul_ln1118_1160_fu_1984_p0.read().is_01() || !ap_const_lv25_B3.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_1160_fu_1984_p0.read()) * sc_biguint<25>(ap_const_lv25_B3);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1161_fu_3689_p0() {
    mul_ln1118_1161_fu_3689_p0 =  (sc_lv<16>) (sext_ln1118_767_fu_10266448_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1161_fu_3689_p2() {
    mul_ln1118_1161_fu_3689_p2 = (!mul_ln1118_1161_fu_3689_p0.read().is_01() || !ap_const_lv25_1FFFF64.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_1161_fu_3689_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF64);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1162_fu_2693_p0() {
    mul_ln1118_1162_fu_2693_p0 =  (sc_lv<16>) (sext_ln1118_767_fu_10266448_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1162_fu_2693_p2() {
    mul_ln1118_1162_fu_2693_p2 = (!mul_ln1118_1162_fu_2693_p0.read().is_01() || !ap_const_lv25_B9.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_1162_fu_2693_p0.read()) * sc_biguint<25>(ap_const_lv25_B9);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1163_fu_2095_p0() {
    mul_ln1118_1163_fu_2095_p0 =  (sc_lv<16>) (sext_ln1118_767_fu_10266448_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1163_fu_2095_p2() {
    mul_ln1118_1163_fu_2095_p2 = (!mul_ln1118_1163_fu_2095_p0.read().is_01() || !ap_const_lv25_8E.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_1163_fu_2095_p0.read()) * sc_biguint<25>(ap_const_lv25_8E);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1164_fu_2549_p0() {
    mul_ln1118_1164_fu_2549_p0 =  (sc_lv<16>) (sext_ln1118_767_fu_10266448_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1164_fu_2549_p2() {
    mul_ln1118_1164_fu_2549_p2 = (!mul_ln1118_1164_fu_2549_p0.read().is_01() || !ap_const_lv25_A2.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_1164_fu_2549_p0.read()) * sc_biguint<25>(ap_const_lv25_A2);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1165_fu_3003_p0() {
    mul_ln1118_1165_fu_3003_p0 = sext_ln1118_769_fu_10266473_p0.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1165_fu_3003_p2() {
    mul_ln1118_1165_fu_3003_p2 = (!mul_ln1118_1165_fu_3003_p0.read().is_01() || !ap_const_lv22_19.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_1165_fu_3003_p0.read()) * sc_biguint<22>(ap_const_lv22_19);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1166_fu_2007_p0() {
    mul_ln1118_1166_fu_2007_p0 =  (sc_lv<16>) (sext_ln1118_770_fu_10266478_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1166_fu_2007_p2() {
    mul_ln1118_1166_fu_2007_p2 = (!mul_ln1118_1166_fu_2007_p0.read().is_01() || !ap_const_lv24_5A.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1166_fu_2007_p0.read()) * sc_biguint<24>(ap_const_lv24_5A);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1167_fu_1665_p0() {
    mul_ln1118_1167_fu_1665_p0 =  (sc_lv<16>) (sext_ln1118_767_fu_10266448_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1167_fu_1665_p2() {
    mul_ln1118_1167_fu_1665_p2 = (!mul_ln1118_1167_fu_1665_p0.read().is_01() || !ap_const_lv25_C5.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_1167_fu_1665_p0.read()) * sc_biguint<25>(ap_const_lv25_C5);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1168_fu_1863_p0() {
    mul_ln1118_1168_fu_1863_p0 =  (sc_lv<16>) (sext_ln1118_767_fu_10266448_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1168_fu_1863_p2() {
    mul_ln1118_1168_fu_1863_p2 = (!mul_ln1118_1168_fu_1863_p0.read().is_01() || !ap_const_lv25_1FFFF43.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_1168_fu_1863_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF43);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1169_fu_2317_p0() {
    mul_ln1118_1169_fu_2317_p0 =  (sc_lv<16>) (sext_ln1118_768_fu_10266463_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1169_fu_2317_p2() {
    mul_ln1118_1169_fu_2317_p2 = (!mul_ln1118_1169_fu_2317_p0.read().is_01() || !ap_const_lv26_14D.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_1169_fu_2317_p0.read()) * sc_biguint<26>(ap_const_lv26_14D);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1170_fu_3681_p0() {
    mul_ln1118_1170_fu_3681_p0 =  (sc_lv<16>) (sext_ln1118_768_fu_10266463_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1170_fu_3681_p2() {
    mul_ln1118_1170_fu_3681_p2 = (!mul_ln1118_1170_fu_3681_p0.read().is_01() || !ap_const_lv26_3FFFEA5.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_1170_fu_3681_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFEA5);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1171_fu_1775_p0() {
    mul_ln1118_1171_fu_1775_p0 =  (sc_lv<16>) (sext_ln1118_780_fu_10266965_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1171_fu_1775_p2() {
    mul_ln1118_1171_fu_1775_p2 = (!mul_ln1118_1171_fu_1775_p0.read().is_01() || !ap_const_lv24_69.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1171_fu_1775_p0.read()) * sc_biguint<24>(ap_const_lv24_69);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1172_fu_2442_p0() {
    mul_ln1118_1172_fu_2442_p0 =  (sc_lv<16>) (sext_ln1118_779_fu_10266952_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1172_fu_2442_p2() {
    mul_ln1118_1172_fu_2442_p2 = (!mul_ln1118_1172_fu_2442_p0.read().is_01() || !ap_const_lv25_1FFFF6E.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_1172_fu_2442_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF6E);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1173_fu_2443_p0() {
    mul_ln1118_1173_fu_2443_p0 = sext_ln1118_778_fu_10266947_p0.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1173_fu_2443_p2() {
    mul_ln1118_1173_fu_2443_p2 = (!mul_ln1118_1173_fu_2443_p0.read().is_01() || !ap_const_lv26_115.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_1173_fu_2443_p0.read()) * sc_biguint<26>(ap_const_lv26_115);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1174_fu_2444_p0() {
    mul_ln1118_1174_fu_2444_p0 =  (sc_lv<16>) (sext_ln1118_779_fu_10266952_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1174_fu_2444_p2() {
    mul_ln1118_1174_fu_2444_p2 = (!mul_ln1118_1174_fu_2444_p0.read().is_01() || !ap_const_lv25_CB.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_1174_fu_2444_p0.read()) * sc_biguint<25>(ap_const_lv25_CB);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1175_fu_2445_p0() {
    mul_ln1118_1175_fu_2445_p0 =  (sc_lv<16>) (sext_ln1118_780_fu_10266965_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1175_fu_2445_p2() {
    mul_ln1118_1175_fu_2445_p2 = (!mul_ln1118_1175_fu_2445_p0.read().is_01() || !ap_const_lv24_FFFF8D.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1175_fu_2445_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF8D);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1176_fu_2936_p0() {
    mul_ln1118_1176_fu_2936_p0 =  (sc_lv<16>) (sext_ln1118_782_fu_10266982_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1176_fu_2936_p2() {
    mul_ln1118_1176_fu_2936_p2 = (!mul_ln1118_1176_fu_2936_p0.read().is_01() || !ap_const_lv23_29.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_1176_fu_2936_p0.read()) * sc_biguint<23>(ap_const_lv23_29);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1177_fu_2447_p0() {
    mul_ln1118_1177_fu_2447_p0 =  (sc_lv<16>) (sext_ln1118_780_fu_10266965_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1177_fu_2447_p2() {
    mul_ln1118_1177_fu_2447_p2 = (!mul_ln1118_1177_fu_2447_p0.read().is_01() || !ap_const_lv24_FFFFA4.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1177_fu_2447_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFA4);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1178_fu_1869_p0() {
    mul_ln1118_1178_fu_1869_p0 =  (sc_lv<16>) (sext_ln1118_780_fu_10266965_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1178_fu_1869_p2() {
    mul_ln1118_1178_fu_1869_p2 = (!mul_ln1118_1178_fu_1869_p0.read().is_01() || !ap_const_lv24_63.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1178_fu_1869_p0.read()) * sc_biguint<24>(ap_const_lv24_63);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1179_fu_2939_p0() {
    mul_ln1118_1179_fu_2939_p0 =  (sc_lv<16>) (sext_ln1118_779_fu_10266952_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1179_fu_2939_p2() {
    mul_ln1118_1179_fu_2939_p2 = (!mul_ln1118_1179_fu_2939_p0.read().is_01() || !ap_const_lv25_C3.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_1179_fu_2939_p0.read()) * sc_biguint<25>(ap_const_lv25_C3);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1180_fu_2450_p0() {
    mul_ln1118_1180_fu_2450_p0 =  (sc_lv<16>) (sext_ln1118_779_fu_10266952_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1180_fu_2450_p2() {
    mul_ln1118_1180_fu_2450_p2 = (!mul_ln1118_1180_fu_2450_p0.read().is_01() || !ap_const_lv25_1FFFF75.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_1180_fu_2450_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF75);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1181_fu_1961_p0() {
    mul_ln1118_1181_fu_1961_p0 =  (sc_lv<16>) (sext_ln1118_779_fu_10266952_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1181_fu_1961_p2() {
    mul_ln1118_1181_fu_1961_p2 = (!mul_ln1118_1181_fu_1961_p0.read().is_01() || !ap_const_lv25_8A.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_1181_fu_1961_p0.read()) * sc_biguint<25>(ap_const_lv25_8A);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1182_fu_2452_p0() {
    mul_ln1118_1182_fu_2452_p0 =  (sc_lv<16>) (sext_ln1118_779_fu_10266952_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1182_fu_2452_p2() {
    mul_ln1118_1182_fu_2452_p2 = (!mul_ln1118_1182_fu_2452_p0.read().is_01() || !ap_const_lv25_C5.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_1182_fu_2452_p0.read()) * sc_biguint<25>(ap_const_lv25_C5);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1183_fu_2943_p0() {
    mul_ln1118_1183_fu_2943_p0 =  (sc_lv<16>) (sext_ln1118_782_fu_10266982_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1183_fu_2943_p2() {
    mul_ln1118_1183_fu_2943_p2 = (!mul_ln1118_1183_fu_2943_p0.read().is_01() || !ap_const_lv23_7FFFDD.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_1183_fu_2943_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFDD);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1184_fu_2454_p0() {
    mul_ln1118_1184_fu_2454_p0 =  (sc_lv<16>) (sext_ln1118_779_fu_10266952_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1184_fu_2454_p2() {
    mul_ln1118_1184_fu_2454_p2 = (!mul_ln1118_1184_fu_2454_p0.read().is_01() || !ap_const_lv25_87.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_1184_fu_2454_p0.read()) * sc_biguint<25>(ap_const_lv25_87);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1185_fu_3435_p0() {
    mul_ln1118_1185_fu_3435_p0 =  (sc_lv<16>) (sext_ln1118_779_fu_10266952_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1185_fu_3435_p2() {
    mul_ln1118_1185_fu_3435_p2 = (!mul_ln1118_1185_fu_3435_p0.read().is_01() || !ap_const_lv25_CA.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_1185_fu_3435_p0.read()) * sc_biguint<25>(ap_const_lv25_CA);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1186_fu_1966_p0() {
    mul_ln1118_1186_fu_1966_p0 =  (sc_lv<16>) (sext_ln1118_780_fu_10266965_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1186_fu_1966_p2() {
    mul_ln1118_1186_fu_1966_p2 = (!mul_ln1118_1186_fu_1966_p0.read().is_01() || !ap_const_lv24_6A.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1186_fu_1966_p0.read()) * sc_biguint<24>(ap_const_lv24_6A);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1187_fu_2457_p0() {
    mul_ln1118_1187_fu_2457_p0 =  (sc_lv<16>) (sext_ln1118_781_fu_10266976_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1187_fu_2457_p2() {
    mul_ln1118_1187_fu_2457_p2 = (!mul_ln1118_1187_fu_2457_p0.read().is_01() || !ap_const_lv22_3FFFE5.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_1187_fu_2457_p0.read()) * sc_bigint<22>(ap_const_lv22_3FFFE5);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1188_fu_2948_p0() {
    mul_ln1118_1188_fu_2948_p0 =  (sc_lv<16>) (sext_ln1118_780_fu_10266965_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1188_fu_2948_p2() {
    mul_ln1118_1188_fu_2948_p2 = (!mul_ln1118_1188_fu_2948_p0.read().is_01() || !ap_const_lv24_76.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1188_fu_2948_p0.read()) * sc_biguint<24>(ap_const_lv24_76);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1189_fu_2459_p0() {
    mul_ln1118_1189_fu_2459_p0 =  (sc_lv<16>) (sext_ln1118_781_fu_10266976_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1189_fu_2459_p2() {
    mul_ln1118_1189_fu_2459_p2 = (!mul_ln1118_1189_fu_2459_p0.read().is_01() || !ap_const_lv22_13.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_1189_fu_2459_p0.read()) * sc_biguint<22>(ap_const_lv22_13);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1190_fu_3440_p0() {
    mul_ln1118_1190_fu_3440_p0 =  (sc_lv<16>) (sext_ln1118_780_fu_10266965_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1190_fu_3440_p2() {
    mul_ln1118_1190_fu_3440_p2 = (!mul_ln1118_1190_fu_3440_p0.read().is_01() || !ap_const_lv24_FFFF95.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1190_fu_3440_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF95);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1191_fu_3441_p0() {
    mul_ln1118_1191_fu_3441_p0 =  (sc_lv<16>) (sext_ln1118_779_fu_10266952_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1191_fu_3441_p2() {
    mul_ln1118_1191_fu_3441_p2 = (!mul_ln1118_1191_fu_3441_p0.read().is_01() || !ap_const_lv25_D8.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_1191_fu_3441_p0.read()) * sc_biguint<25>(ap_const_lv25_D8);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1192_fu_2462_p0() {
    mul_ln1118_1192_fu_2462_p0 =  (sc_lv<16>) (sext_ln1118_798_fu_10267583_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1192_fu_2462_p2() {
    mul_ln1118_1192_fu_2462_p2 = (!mul_ln1118_1192_fu_2462_p0.read().is_01() || !ap_const_lv24_FFFF83.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1192_fu_2462_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF83);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1193_fu_1973_p0() {
    mul_ln1118_1193_fu_1973_p0 =  (sc_lv<16>) (sext_ln1118_798_fu_10267583_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1193_fu_1973_p2() {
    mul_ln1118_1193_fu_1973_p2 = (!mul_ln1118_1193_fu_1973_p0.read().is_01() || !ap_const_lv24_79.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1193_fu_1973_p0.read()) * sc_biguint<24>(ap_const_lv24_79);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1194_fu_3444_p0() {
    mul_ln1118_1194_fu_3444_p0 =  (sc_lv<16>) (sext_ln1118_798_fu_10267583_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1194_fu_3444_p2() {
    mul_ln1118_1194_fu_3444_p2 = (!mul_ln1118_1194_fu_3444_p0.read().is_01() || !ap_const_lv24_53.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1194_fu_3444_p0.read()) * sc_biguint<24>(ap_const_lv24_53);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1195_fu_2955_p0() {
    mul_ln1118_1195_fu_2955_p0 =  (sc_lv<16>) (sext_ln1118_798_fu_10267583_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1195_fu_2955_p2() {
    mul_ln1118_1195_fu_2955_p2 = (!mul_ln1118_1195_fu_2955_p0.read().is_01() || !ap_const_lv24_FFFFA1.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1195_fu_2955_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFA1);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1196_fu_2956_p0() {
    mul_ln1118_1196_fu_2956_p0 =  (sc_lv<16>) (sext_ln1118_800_fu_10267601_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1196_fu_2956_p2() {
    mul_ln1118_1196_fu_2956_p2 = (!mul_ln1118_1196_fu_2956_p0.read().is_01() || !ap_const_lv23_3D.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_1196_fu_2956_p0.read()) * sc_biguint<23>(ap_const_lv23_3D);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1197_fu_2957_p0() {
    mul_ln1118_1197_fu_2957_p0 =  (sc_lv<16>) (sext_ln1118_798_fu_10267583_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1197_fu_2957_p2() {
    mul_ln1118_1197_fu_2957_p2 = (!mul_ln1118_1197_fu_2957_p0.read().is_01() || !ap_const_lv24_FFFFA9.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1197_fu_2957_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFA9);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1198_fu_2958_p0() {
    mul_ln1118_1198_fu_2958_p0 =  (sc_lv<16>) (sext_ln1118_800_fu_10267601_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1198_fu_2958_p2() {
    mul_ln1118_1198_fu_2958_p2 = (!mul_ln1118_1198_fu_2958_p0.read().is_01() || !ap_const_lv23_2B.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_1198_fu_2958_p0.read()) * sc_biguint<23>(ap_const_lv23_2B);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1199_fu_2945_p0() {
    mul_ln1118_1199_fu_2945_p0 = sext_ln1118_796_fu_10267574_p0.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1199_fu_2945_p2() {
    mul_ln1118_1199_fu_2945_p2 = (!mul_ln1118_1199_fu_2945_p0.read().is_01() || !ap_const_lv21_D.is_01())? sc_lv<21>(): sc_bigint<16>(mul_ln1118_1199_fu_2945_p0.read()) * sc_biguint<21>(ap_const_lv21_D);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1200_fu_3127_p0() {
    mul_ln1118_1200_fu_3127_p0 =  (sc_lv<16>) (sext_ln1118_800_fu_10267601_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1200_fu_3127_p2() {
    mul_ln1118_1200_fu_3127_p2 = (!mul_ln1118_1200_fu_3127_p0.read().is_01() || !ap_const_lv23_35.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_1200_fu_3127_p0.read()) * sc_biguint<23>(ap_const_lv23_35);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1201_fu_2194_p0() {
    mul_ln1118_1201_fu_2194_p0 =  (sc_lv<16>) (sext_ln1118_795_fu_10267564_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1201_fu_2194_p2() {
    mul_ln1118_1201_fu_2194_p2 = (!mul_ln1118_1201_fu_2194_p0.read().is_01() || !ap_const_lv25_BD.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_1201_fu_2194_p0.read()) * sc_biguint<25>(ap_const_lv25_BD);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1202_fu_1669_p0() {
    mul_ln1118_1202_fu_1669_p0 =  (sc_lv<16>) (sext_ln1118_798_fu_10267583_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1202_fu_1669_p2() {
    mul_ln1118_1202_fu_1669_p2 = (!mul_ln1118_1202_fu_1669_p0.read().is_01() || !ap_const_lv24_FFFF98.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1202_fu_1669_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF98);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1203_fu_3102_p0() {
    mul_ln1118_1203_fu_3102_p0 =  (sc_lv<16>) (sext_ln1118_795_fu_10267564_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1203_fu_3102_p2() {
    mul_ln1118_1203_fu_3102_p2 = (!mul_ln1118_1203_fu_3102_p0.read().is_01() || !ap_const_lv25_FA.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_1203_fu_3102_p0.read()) * sc_biguint<25>(ap_const_lv25_FA);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1204_fu_2305_p0() {
    mul_ln1118_1204_fu_2305_p0 =  (sc_lv<16>) (sext_ln1118_794_fu_10267558_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1204_fu_2305_p2() {
    mul_ln1118_1204_fu_2305_p2 = (!mul_ln1118_1204_fu_2305_p0.read().is_01() || !ap_const_lv26_3FFFEF4.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_1204_fu_2305_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFEF4);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1205_fu_2188_p0() {
    mul_ln1118_1205_fu_2188_p0 =  (sc_lv<16>) (sext_ln1118_798_fu_10267583_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1205_fu_2188_p2() {
    mul_ln1118_1205_fu_2188_p2 = (!mul_ln1118_1205_fu_2188_p0.read().is_01() || !ap_const_lv24_FFFFB7.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1205_fu_2188_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFB7);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1206_fu_2456_p0() {
    mul_ln1118_1206_fu_2456_p0 =  (sc_lv<16>) (sext_ln1118_798_fu_10267583_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1206_fu_2456_p2() {
    mul_ln1118_1206_fu_2456_p2 = (!mul_ln1118_1206_fu_2456_p0.read().is_01() || !ap_const_lv24_FFFFB5.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1206_fu_2456_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFB5);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1207_fu_2455_p0() {
    mul_ln1118_1207_fu_2455_p0 =  (sc_lv<16>) (sext_ln1118_795_fu_10267564_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1207_fu_2455_p2() {
    mul_ln1118_1207_fu_2455_p2 = (!mul_ln1118_1207_fu_2455_p0.read().is_01() || !ap_const_lv25_D1.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_1207_fu_2455_p0.read()) * sc_biguint<25>(ap_const_lv25_D1);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1208_fu_1857_p0() {
    mul_ln1118_1208_fu_1857_p0 =  (sc_lv<16>) (sext_ln1118_794_fu_10267558_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1208_fu_1857_p2() {
    mul_ln1118_1208_fu_1857_p2 = (!mul_ln1118_1208_fu_1857_p0.read().is_01() || !ap_const_lv26_118.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_1208_fu_1857_p0.read()) * sc_biguint<26>(ap_const_lv26_118);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1209_fu_3363_p0() {
    mul_ln1118_1209_fu_3363_p0 =  (sc_lv<16>) (sext_ln1118_795_fu_10267564_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1209_fu_3363_p2() {
    mul_ln1118_1209_fu_3363_p2 = (!mul_ln1118_1209_fu_3363_p0.read().is_01() || !ap_const_lv25_9A.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_1209_fu_3363_p0.read()) * sc_biguint<25>(ap_const_lv25_9A);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1210_fu_1969_p0() {
    mul_ln1118_1210_fu_1969_p0 =  (sc_lv<16>) (sext_ln1118_798_fu_10267583_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1210_fu_1969_p2() {
    mul_ln1118_1210_fu_1969_p2 = (!mul_ln1118_1210_fu_1969_p0.read().is_01() || !ap_const_lv24_62.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1210_fu_1969_p0.read()) * sc_biguint<24>(ap_const_lv24_62);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1211_fu_1769_p0() {
    mul_ln1118_1211_fu_1769_p0 =  (sc_lv<16>) (sext_ln1118_798_fu_10267583_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1211_fu_1769_p2() {
    mul_ln1118_1211_fu_1769_p2 = (!mul_ln1118_1211_fu_1769_p0.read().is_01() || !ap_const_lv24_74.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1211_fu_1769_p0.read()) * sc_biguint<24>(ap_const_lv24_74);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1212_fu_2877_p0() {
    mul_ln1118_1212_fu_2877_p0 =  (sc_lv<16>) (sext_ln1118_795_fu_10267564_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1212_fu_2877_p2() {
    mul_ln1118_1212_fu_2877_p2 = (!mul_ln1118_1212_fu_2877_p0.read().is_01() || !ap_const_lv25_1FFFF59.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_1212_fu_2877_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF59);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1213_fu_2677_p0() {
    mul_ln1118_1213_fu_2677_p0 =  (sc_lv<16>) (sext_ln1118_795_fu_10267564_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1213_fu_2677_p2() {
    mul_ln1118_1213_fu_2677_p2 = (!mul_ln1118_1213_fu_2677_p0.read().is_01() || !ap_const_lv25_1FFFF5B.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_1213_fu_2677_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF5B);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1214_fu_2932_p0() {
    mul_ln1118_1214_fu_2932_p0 =  (sc_lv<16>) (sext_ln1118_811_fu_10268167_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1214_fu_2932_p2() {
    mul_ln1118_1214_fu_2932_p2 = (!mul_ln1118_1214_fu_2932_p0.read().is_01() || !ap_const_lv25_1FFFF5D.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_1214_fu_2932_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF5D);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1215_fu_2533_p0() {
    mul_ln1118_1215_fu_2533_p0 =  (sc_lv<16>) (sext_ln1118_810_fu_10268159_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1215_fu_2533_p2() {
    mul_ln1118_1215_fu_2533_p2 = (!mul_ln1118_1215_fu_2533_p0.read().is_01() || !ap_const_lv24_FFFFAE.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1215_fu_2533_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFAE);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1216_fu_1736_p0() {
    mul_ln1118_1216_fu_1736_p0 =  (sc_lv<16>) (sext_ln1118_810_fu_10268159_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1216_fu_1736_p2() {
    mul_ln1118_1216_fu_1736_p2 = (!mul_ln1118_1216_fu_1736_p0.read().is_01() || !ap_const_lv24_FFFFBB.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1216_fu_1736_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFBB);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1217_fu_1991_p0() {
    mul_ln1118_1217_fu_1991_p0 =  (sc_lv<16>) (sext_ln1118_811_fu_10268167_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1217_fu_1991_p2() {
    mul_ln1118_1217_fu_1991_p2 = (!mul_ln1118_1217_fu_1991_p0.read().is_01() || !ap_const_lv25_96.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_1217_fu_1991_p0.read()) * sc_biguint<25>(ap_const_lv25_96);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1218_fu_3497_p0() {
    mul_ln1118_1218_fu_3497_p0 =  (sc_lv<16>) (sext_ln1118_811_fu_10268167_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1218_fu_3497_p2() {
    mul_ln1118_1218_fu_3497_p2 = (!mul_ln1118_1218_fu_3497_p0.read().is_01() || !ap_const_lv25_1FFFF2B.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_1218_fu_3497_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF2B);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1219_fu_3354_p0() {
    mul_ln1118_1219_fu_3354_p0 =  (sc_lv<16>) (sext_ln1118_811_fu_10268167_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1219_fu_3354_p2() {
    mul_ln1118_1219_fu_3354_p2 = (!mul_ln1118_1219_fu_3354_p0.read().is_01() || !ap_const_lv25_9A.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_1219_fu_3354_p0.read()) * sc_biguint<25>(ap_const_lv25_9A);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1220_fu_3353_p0() {
    mul_ln1118_1220_fu_3353_p0 =  (sc_lv<16>) (sext_ln1118_810_fu_10268159_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1220_fu_3353_p2() {
    mul_ln1118_1220_fu_3353_p2 = (!mul_ln1118_1220_fu_3353_p0.read().is_01() || !ap_const_lv24_FFFFAC.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1220_fu_3353_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFAC);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1221_fu_2556_p0() {
    mul_ln1118_1221_fu_2556_p0 =  (sc_lv<16>) (sext_ln1118_815_fu_10268194_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1221_fu_2556_p2() {
    mul_ln1118_1221_fu_2556_p2 = (!mul_ln1118_1221_fu_2556_p0.read().is_01() || !ap_const_lv22_3FFFE7.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_1221_fu_2556_p0.read()) * sc_bigint<22>(ap_const_lv22_3FFFE7);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1222_fu_1759_p0() {
    mul_ln1118_1222_fu_1759_p0 =  (sc_lv<16>) (sext_ln1118_811_fu_10268167_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1222_fu_1759_p2() {
    mul_ln1118_1222_fu_1759_p2 = (!mul_ln1118_1222_fu_1759_p0.read().is_01() || !ap_const_lv25_EC.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_1222_fu_1759_p0.read()) * sc_biguint<25>(ap_const_lv25_EC);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1223_fu_2668_p0() {
    mul_ln1118_1223_fu_2668_p0 =  (sc_lv<16>) (sext_ln1118_815_fu_10268194_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1223_fu_2668_p2() {
    mul_ln1118_1223_fu_2668_p2 = (!mul_ln1118_1223_fu_2668_p0.read().is_01() || !ap_const_lv22_3FFFE6.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_1223_fu_2668_p0.read()) * sc_bigint<22>(ap_const_lv22_3FFFE6);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1224_fu_2468_p0() {
    mul_ln1118_1224_fu_2468_p0 =  (sc_lv<16>) (sext_ln1118_811_fu_10268167_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1224_fu_2468_p2() {
    mul_ln1118_1224_fu_2468_p2 = (!mul_ln1118_1224_fu_2468_p0.read().is_01() || !ap_const_lv25_A8.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_1224_fu_2468_p0.read()) * sc_biguint<25>(ap_const_lv25_A8);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1225_fu_3320_p0() {
    mul_ln1118_1225_fu_3320_p0 = sext_ln1118_809_fu_10268154_p0.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1225_fu_3320_p2() {
    mul_ln1118_1225_fu_3320_p2 = (!mul_ln1118_1225_fu_3320_p0.read().is_01() || !ap_const_lv26_121.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_1225_fu_3320_p0.read()) * sc_biguint<26>(ap_const_lv26_121);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1226_fu_3606_p0() {
    mul_ln1118_1226_fu_3606_p0 =  (sc_lv<16>) (sext_ln1118_811_fu_10268167_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1226_fu_3606_p2() {
    mul_ln1118_1226_fu_3606_p2 = (!mul_ln1118_1226_fu_3606_p0.read().is_01() || !ap_const_lv25_1FFFF34.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_1226_fu_3606_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF34);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1227_fu_3117_p0() {
    mul_ln1118_1227_fu_3117_p0 =  (sc_lv<16>) (sext_ln1118_811_fu_10268167_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1227_fu_3117_p2() {
    mul_ln1118_1227_fu_3117_p2 = (!mul_ln1118_1227_fu_3117_p0.read().is_01() || !ap_const_lv25_E2.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_1227_fu_3117_p0.read()) * sc_biguint<25>(ap_const_lv25_E2);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1228_fu_3118_p0() {
    mul_ln1118_1228_fu_3118_p0 =  (sc_lv<16>) (sext_ln1118_813_fu_10268184_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1228_fu_3118_p2() {
    mul_ln1118_1228_fu_3118_p2 = (!mul_ln1118_1228_fu_3118_p0.read().is_01() || !ap_const_lv23_7FFFDD.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_1228_fu_3118_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFDD);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1229_fu_3119_p0() {
    mul_ln1118_1229_fu_3119_p0 =  (sc_lv<16>) (sext_ln1118_811_fu_10268167_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1229_fu_3119_p2() {
    mul_ln1118_1229_fu_3119_p2 = (!mul_ln1118_1229_fu_3119_p0.read().is_01() || !ap_const_lv25_1FFFF79.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_1229_fu_3119_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF79);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1230_fu_3120_p0() {
    mul_ln1118_1230_fu_3120_p0 =  (sc_lv<16>) (sext_ln1118_813_fu_10268184_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1230_fu_3120_p2() {
    mul_ln1118_1230_fu_3120_p2 = (!mul_ln1118_1230_fu_3120_p0.read().is_01() || !ap_const_lv23_26.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_1230_fu_3120_p0.read()) * sc_biguint<23>(ap_const_lv23_26);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1231_fu_3611_p0() {
    mul_ln1118_1231_fu_3611_p0 =  (sc_lv<16>) (sext_ln1118_810_fu_10268159_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1231_fu_3611_p2() {
    mul_ln1118_1231_fu_3611_p2 = (!mul_ln1118_1231_fu_3611_p0.read().is_01() || !ap_const_lv24_FFFF91.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1231_fu_3611_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF91);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1232_fu_3122_p0() {
    mul_ln1118_1232_fu_3122_p0 =  (sc_lv<16>) (sext_ln1118_832_fu_10268841_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1232_fu_3122_p2() {
    mul_ln1118_1232_fu_3122_p2 = (!mul_ln1118_1232_fu_3122_p0.read().is_01() || !ap_const_lv23_7FFFD1.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_1232_fu_3122_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFD1);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1233_fu_3613_p0() {
    mul_ln1118_1233_fu_3613_p0 =  (sc_lv<16>) (sext_ln1118_832_fu_10268841_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1233_fu_3613_p2() {
    mul_ln1118_1233_fu_3613_p2 = (!mul_ln1118_1233_fu_3613_p0.read().is_01() || !ap_const_lv23_7FFFD9.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_1233_fu_3613_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFD9);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1234_fu_2055_p0() {
    mul_ln1118_1234_fu_2055_p0 =  (sc_lv<16>) (sext_ln1118_831_fu_10268832_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1234_fu_2055_p2() {
    mul_ln1118_1234_fu_2055_p2 = (!mul_ln1118_1234_fu_2055_p0.read().is_01() || !ap_const_lv26_105.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_1234_fu_2055_p0.read()) * sc_biguint<26>(ap_const_lv26_105);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1235_fu_3615_p0() {
    mul_ln1118_1235_fu_3615_p0 =  (sc_lv<16>) (sext_ln1118_830_fu_10268826_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1235_fu_3615_p2() {
    mul_ln1118_1235_fu_3615_p2 = (!mul_ln1118_1235_fu_3615_p0.read().is_01() || !ap_const_lv22_3FFFE7.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_1235_fu_3615_p0.read()) * sc_bigint<22>(ap_const_lv22_3FFFE7);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1236_fu_3616_p0() {
    mul_ln1118_1236_fu_3616_p0 =  (sc_lv<16>) (sext_ln1118_834_fu_10268852_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1236_fu_3616_p2() {
    mul_ln1118_1236_fu_3616_p2 = (!mul_ln1118_1236_fu_3616_p0.read().is_01() || !ap_const_lv24_4F.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1236_fu_3616_p0.read()) * sc_biguint<24>(ap_const_lv24_4F);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1237_fu_3617_p0() {
    mul_ln1118_1237_fu_3617_p0 =  (sc_lv<16>) (sext_ln1118_829_fu_10268812_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1237_fu_3617_p2() {
    mul_ln1118_1237_fu_3617_p2 = (!mul_ln1118_1237_fu_3617_p0.read().is_01() || !ap_const_lv25_C9.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_1237_fu_3617_p0.read()) * sc_biguint<25>(ap_const_lv25_C9);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1238_fu_3618_p0() {
    mul_ln1118_1238_fu_3618_p0 =  (sc_lv<16>) (sext_ln1118_831_fu_10268832_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1238_fu_3618_p2() {
    mul_ln1118_1238_fu_3618_p2 = (!mul_ln1118_1238_fu_3618_p0.read().is_01() || !ap_const_lv26_3FFFE5F.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_1238_fu_3618_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFE5F);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1239_fu_3530_p0() {
    mul_ln1118_1239_fu_3530_p0 =  (sc_lv<16>) (sext_ln1118_831_fu_10268832_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1239_fu_3530_p2() {
    mul_ln1118_1239_fu_3530_p2 = (!mul_ln1118_1239_fu_3530_p0.read().is_01() || !ap_const_lv26_3FFFE9A.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_1239_fu_3530_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFE9A);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1240_fu_3531_p0() {
    mul_ln1118_1240_fu_3531_p0 =  (sc_lv<16>) (sext_ln1118_829_fu_10268812_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1240_fu_3531_p2() {
    mul_ln1118_1240_fu_3531_p2 = (!mul_ln1118_1240_fu_3531_p0.read().is_01() || !ap_const_lv25_1FFFF5D.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_1240_fu_3531_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF5D);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1241_fu_3131_p0() {
    mul_ln1118_1241_fu_3131_p0 =  (sc_lv<16>) (sext_ln1118_834_fu_10268852_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1241_fu_3131_p2() {
    mul_ln1118_1241_fu_3131_p2 = (!mul_ln1118_1241_fu_3131_p0.read().is_01() || !ap_const_lv24_5F.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1241_fu_3131_p0.read()) * sc_biguint<24>(ap_const_lv24_5F);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1242_fu_2063_p0() {
    mul_ln1118_1242_fu_2063_p0 =  (sc_lv<16>) (sext_ln1118_834_fu_10268852_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1242_fu_2063_p2() {
    mul_ln1118_1242_fu_2063_p2 = (!mul_ln1118_1242_fu_2063_p0.read().is_01() || !ap_const_lv24_71.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1242_fu_2063_p0.read()) * sc_biguint<24>(ap_const_lv24_71);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1243_fu_3623_p0() {
    mul_ln1118_1243_fu_3623_p0 =  (sc_lv<16>) (sext_ln1118_829_fu_10268812_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1243_fu_3623_p2() {
    mul_ln1118_1243_fu_3623_p2 = (!mul_ln1118_1243_fu_3623_p0.read().is_01() || !ap_const_lv25_1FFFF56.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_1243_fu_3623_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF56);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1244_fu_3624_p0() {
    mul_ln1118_1244_fu_3624_p0 =  (sc_lv<16>) (sext_ln1118_831_fu_10268832_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1244_fu_3624_p2() {
    mul_ln1118_1244_fu_3624_p2 = (!mul_ln1118_1244_fu_3624_p0.read().is_01() || !ap_const_lv26_3FFFE7B.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_1244_fu_3624_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFE7B);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1245_fu_3625_p0() {
    mul_ln1118_1245_fu_3625_p0 =  (sc_lv<16>) (sext_ln1118_829_fu_10268812_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1245_fu_3625_p2() {
    mul_ln1118_1245_fu_3625_p2 = (!mul_ln1118_1245_fu_3625_p0.read().is_01() || !ap_const_lv25_BC.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_1245_fu_3625_p0.read()) * sc_biguint<25>(ap_const_lv25_BC);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1246_fu_3626_p0() {
    mul_ln1118_1246_fu_3626_p0 =  (sc_lv<16>) (sext_ln1118_832_fu_10268841_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1246_fu_3626_p2() {
    mul_ln1118_1246_fu_3626_p2 = (!mul_ln1118_1246_fu_3626_p0.read().is_01() || !ap_const_lv23_25.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_1246_fu_3626_p0.read()) * sc_biguint<23>(ap_const_lv23_25);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1247_fu_3137_p0() {
    mul_ln1118_1247_fu_3137_p0 =  (sc_lv<16>) (sext_ln1118_829_fu_10268812_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1247_fu_3137_p2() {
    mul_ln1118_1247_fu_3137_p2 = (!mul_ln1118_1247_fu_3137_p0.read().is_01() || !ap_const_lv25_1FFFF0C.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_1247_fu_3137_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF0C);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1248_fu_3628_p0() {
    mul_ln1118_1248_fu_3628_p0 =  (sc_lv<16>) (sext_ln1118_834_fu_10268852_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1248_fu_3628_p2() {
    mul_ln1118_1248_fu_3628_p2 = (!mul_ln1118_1248_fu_3628_p0.read().is_01() || !ap_const_lv24_FFFF96.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1248_fu_3628_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF96);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1249_fu_3139_p0() {
    mul_ln1118_1249_fu_3139_p0 =  (sc_lv<16>) (sext_ln1118_834_fu_10268852_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1249_fu_3139_p2() {
    mul_ln1118_1249_fu_3139_p2 = (!mul_ln1118_1249_fu_3139_p0.read().is_01() || !ap_const_lv24_5A.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1249_fu_3139_p0.read()) * sc_biguint<24>(ap_const_lv24_5A);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1250_fu_3630_p0() {
    mul_ln1118_1250_fu_3630_p0 =  (sc_lv<16>) (sext_ln1118_829_fu_10268812_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1250_fu_3630_p2() {
    mul_ln1118_1250_fu_3630_p2 = (!mul_ln1118_1250_fu_3630_p0.read().is_01() || !ap_const_lv25_A8.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_1250_fu_3630_p0.read()) * sc_biguint<25>(ap_const_lv25_A8);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1251_fu_2562_p0() {
    mul_ln1118_1251_fu_2562_p0 =  (sc_lv<16>) (sext_ln1118_830_fu_10268826_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1251_fu_2562_p2() {
    mul_ln1118_1251_fu_2562_p2 = (!mul_ln1118_1251_fu_2562_p0.read().is_01() || !ap_const_lv22_15.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_1251_fu_2562_p0.read()) * sc_biguint<22>(ap_const_lv22_15);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1252_fu_3632_p0() {
    mul_ln1118_1252_fu_3632_p0 =  (sc_lv<16>) (sext_ln1118_829_fu_10268812_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1252_fu_3632_p2() {
    mul_ln1118_1252_fu_3632_p2 = (!mul_ln1118_1252_fu_3632_p0.read().is_01() || !ap_const_lv25_1FFFF1A.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_1252_fu_3632_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF1A);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1253_fu_3143_p0() {
    mul_ln1118_1253_fu_3143_p0 =  (sc_lv<16>) (sext_ln1118_829_fu_10268812_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1253_fu_3143_p2() {
    mul_ln1118_1253_fu_3143_p2 = (!mul_ln1118_1253_fu_3143_p0.read().is_01() || !ap_const_lv25_85.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_1253_fu_3143_p0.read()) * sc_biguint<25>(ap_const_lv25_85);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1254_fu_1924_p0() {
    mul_ln1118_1254_fu_1924_p0 =  (sc_lv<16>) (sext_ln1118_829_fu_10268812_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1254_fu_1924_p2() {
    mul_ln1118_1254_fu_1924_p2 = (!mul_ln1118_1254_fu_1924_p0.read().is_01() || !ap_const_lv25_1FFFF22.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_1254_fu_1924_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF22);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1255_fu_3493_p0() {
    mul_ln1118_1255_fu_3493_p0 =  (sc_lv<16>) (sext_ln1118_834_fu_10268852_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1255_fu_3493_p2() {
    mul_ln1118_1255_fu_3493_p2 = (!mul_ln1118_1255_fu_3493_p0.read().is_01() || !ap_const_lv24_4C.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1255_fu_3493_p0.read()) * sc_biguint<24>(ap_const_lv24_4C);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1256_fu_2696_p0() {
    mul_ln1118_1256_fu_2696_p0 =  (sc_lv<16>) (sext_ln1118_831_fu_10268832_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1256_fu_2696_p2() {
    mul_ln1118_1256_fu_2696_p2 = (!mul_ln1118_1256_fu_2696_p0.read().is_01() || !ap_const_lv26_3FFFE8E.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_1256_fu_2696_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFE8E);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1257_fu_3286_p0() {
    mul_ln1118_1257_fu_3286_p0 =  (sc_lv<16>) (sext_ln1118_829_fu_10268812_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1257_fu_3286_p2() {
    mul_ln1118_1257_fu_3286_p2 = (!mul_ln1118_1257_fu_3286_p0.read().is_01() || !ap_const_lv25_98.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_1257_fu_3286_p0.read()) * sc_biguint<25>(ap_const_lv25_98);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1258_fu_2353_p0() {
    mul_ln1118_1258_fu_2353_p0 =  (sc_lv<16>) (sext_ln1118_843_fu_10269392_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1258_fu_2353_p2() {
    mul_ln1118_1258_fu_2353_p2 = (!mul_ln1118_1258_fu_2353_p0.read().is_01() || !ap_const_lv25_1FFFF07.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_1258_fu_2353_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF07);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1259_fu_1692_p0() {
    mul_ln1118_1259_fu_1692_p0 =  (sc_lv<16>) (sext_ln1118_845_fu_10269405_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1259_fu_1692_p2() {
    mul_ln1118_1259_fu_1692_p2 = (!mul_ln1118_1259_fu_1692_p0.read().is_01() || !ap_const_lv23_2E.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_1259_fu_1692_p0.read()) * sc_biguint<23>(ap_const_lv23_2E);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1260_fu_3546_p0() {
    mul_ln1118_1260_fu_3546_p0 =  (sc_lv<16>) (sext_ln1118_845_fu_10269405_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1260_fu_3546_p2() {
    mul_ln1118_1260_fu_3546_p2 = (!mul_ln1118_1260_fu_3546_p0.read().is_01() || !ap_const_lv23_7FFFDB.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_1260_fu_3546_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFDB);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1261_fu_2152_p0() {
    mul_ln1118_1261_fu_2152_p0 =  (sc_lv<16>) (sext_ln1118_843_fu_10269392_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1261_fu_2152_p2() {
    mul_ln1118_1261_fu_2152_p2 = (!mul_ln1118_1261_fu_2152_p0.read().is_01() || !ap_const_lv25_1FFFF2B.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_1261_fu_2152_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF2B);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1262_fu_2350_p0() {
    mul_ln1118_1262_fu_2350_p0 =  (sc_lv<16>) (sext_ln1118_842_fu_10269384_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1262_fu_2350_p2() {
    mul_ln1118_1262_fu_2350_p2 = (!mul_ln1118_1262_fu_2350_p0.read().is_01() || !ap_const_lv24_FFFFA6.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1262_fu_2350_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFA6);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1263_fu_2804_p0() {
    mul_ln1118_1263_fu_2804_p0 =  (sc_lv<16>) (sext_ln1118_843_fu_10269392_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1263_fu_2804_p2() {
    mul_ln1118_1263_fu_2804_p2 = (!mul_ln1118_1263_fu_2804_p0.read().is_01() || !ap_const_lv25_1FFFF30.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_1263_fu_2804_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF30);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1264_fu_2860_p0() {
    mul_ln1118_1264_fu_2860_p0 =  (sc_lv<16>) (sext_ln1118_842_fu_10269384_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1264_fu_2860_p2() {
    mul_ln1118_1264_fu_2860_p2 = (!mul_ln1118_1264_fu_2860_p0.read().is_01() || !ap_const_lv24_6C.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1264_fu_2860_p0.read()) * sc_biguint<24>(ap_const_lv24_6C);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1265_fu_1864_p0() {
    mul_ln1118_1265_fu_1864_p0 =  (sc_lv<16>) (sext_ln1118_843_fu_10269392_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1265_fu_1864_p2() {
    mul_ln1118_1265_fu_1864_p2 = (!mul_ln1118_1265_fu_1864_p0.read().is_01() || !ap_const_lv25_1FFFF3C.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_1265_fu_1864_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF3C);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1266_fu_2915_p0() {
    mul_ln1118_1266_fu_2915_p0 =  (sc_lv<16>) (sext_ln1118_841_fu_10269376_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1266_fu_2915_p2() {
    mul_ln1118_1266_fu_2915_p2 = (!mul_ln1118_1266_fu_2915_p0.read().is_01() || !ap_const_lv26_3FFFEBB.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_1266_fu_2915_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFEBB);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1267_fu_1720_p0() {
    mul_ln1118_1267_fu_1720_p0 =  (sc_lv<16>) (sext_ln1118_841_fu_10269376_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1267_fu_1720_p2() {
    mul_ln1118_1267_fu_1720_p2 = (!mul_ln1118_1267_fu_1720_p0.read().is_01() || !ap_const_lv26_125.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_1267_fu_1720_p0.read()) * sc_biguint<26>(ap_const_lv26_125);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1268_fu_3425_p0() {
    mul_ln1118_1268_fu_3425_p0 =  (sc_lv<16>) (sext_ln1118_843_fu_10269392_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1268_fu_3425_p2() {
    mul_ln1118_1268_fu_3425_p2 = (!mul_ln1118_1268_fu_3425_p0.read().is_01() || !ap_const_lv25_1FFFF5F.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_1268_fu_3425_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF5F);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1269_fu_2827_p0() {
    mul_ln1118_1269_fu_2827_p0 =  (sc_lv<16>) (sext_ln1118_841_fu_10269376_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1269_fu_2827_p2() {
    mul_ln1118_1269_fu_2827_p2 = (!mul_ln1118_1269_fu_2827_p0.read().is_01() || !ap_const_lv26_165.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_1269_fu_2827_p0.read()) * sc_biguint<26>(ap_const_lv26_165);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1270_fu_1831_p0() {
    mul_ln1118_1270_fu_1831_p0 =  (sc_lv<16>) (sext_ln1118_845_fu_10269405_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1270_fu_1831_p2() {
    mul_ln1118_1270_fu_1831_p2 = (!mul_ln1118_1270_fu_1831_p0.read().is_01() || !ap_const_lv23_3D.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_1270_fu_1831_p0.read()) * sc_biguint<23>(ap_const_lv23_3D);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1271_fu_1688_p0() {
    mul_ln1118_1271_fu_1688_p0 =  (sc_lv<16>) (sext_ln1118_845_fu_10269405_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1271_fu_1688_p2() {
    mul_ln1118_1271_fu_1688_p2 = (!mul_ln1118_1271_fu_1688_p0.read().is_01() || !ap_const_lv23_7FFFD3.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_1271_fu_1688_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFD3);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1272_fu_2540_p0() {
    mul_ln1118_1272_fu_2540_p0 =  (sc_lv<16>) (sext_ln1118_842_fu_10269384_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1272_fu_2540_p2() {
    mul_ln1118_1272_fu_2540_p2 = (!mul_ln1118_1272_fu_2540_p0.read().is_01() || !ap_const_lv24_4F.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1272_fu_2540_p0.read()) * sc_biguint<24>(ap_const_lv24_4F);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1273_fu_1942_p0() {
    mul_ln1118_1273_fu_1942_p0 =  (sc_lv<16>) (sext_ln1118_841_fu_10269376_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1273_fu_1942_p2() {
    mul_ln1118_1273_fu_1942_p2 = (!mul_ln1118_1273_fu_1942_p0.read().is_01() || !ap_const_lv26_3FFFED8.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_1273_fu_1942_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFED8);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1274_fu_2396_p0() {
    mul_ln1118_1274_fu_2396_p0 =  (sc_lv<16>) (sext_ln1118_842_fu_10269384_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1274_fu_2396_p2() {
    mul_ln1118_1274_fu_2396_p2 = (!mul_ln1118_1274_fu_2396_p0.read().is_01() || !ap_const_lv24_FFFF98.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1274_fu_2396_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF98);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1275_fu_2651_p0() {
    mul_ln1118_1275_fu_2651_p0 =  (sc_lv<16>) (sext_ln1118_857_fu_10269897_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1275_fu_2651_p2() {
    mul_ln1118_1275_fu_2651_p2 = (!mul_ln1118_1275_fu_2651_p0.read().is_01() || !ap_const_lv25_B1.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_1275_fu_2651_p0.read()) * sc_biguint<25>(ap_const_lv25_B1);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1276_fu_2053_p0() {
    mul_ln1118_1276_fu_2053_p0 =  (sc_lv<16>) (sext_ln1118_857_fu_10269897_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1276_fu_2053_p2() {
    mul_ln1118_1276_fu_2053_p2 = (!mul_ln1118_1276_fu_2053_p0.read().is_01() || !ap_const_lv25_CE.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_1276_fu_2053_p0.read()) * sc_biguint<25>(ap_const_lv25_CE);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1277_fu_1654_p0() {
    mul_ln1118_1277_fu_1654_p0 =  (sc_lv<16>) (sext_ln1118_856_fu_10269886_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1277_fu_1654_p2() {
    mul_ln1118_1277_fu_1654_p2 = (!mul_ln1118_1277_fu_1654_p0.read().is_01() || !ap_const_lv24_FFFF8B.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1277_fu_1654_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF8B);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1278_fu_2961_p0() {
    mul_ln1118_1278_fu_2961_p0 =  (sc_lv<16>) (sext_ln1118_859_fu_10269914_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1278_fu_2961_p2() {
    mul_ln1118_1278_fu_2961_p2 = (!mul_ln1118_1278_fu_2961_p0.read().is_01() || !ap_const_lv22_3FFFE9.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_1278_fu_2961_p0.read()) * sc_bigint<22>(ap_const_lv22_3FFFE9);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1279_fu_1965_p0() {
    mul_ln1118_1279_fu_1965_p0 =  (sc_lv<16>) (sext_ln1118_857_fu_10269897_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1279_fu_1965_p2() {
    mul_ln1118_1279_fu_1965_p2 = (!mul_ln1118_1279_fu_1965_p0.read().is_01() || !ap_const_lv25_1FFFF17.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_1279_fu_1965_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF17);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1280_fu_2618_p0() {
    mul_ln1118_1280_fu_2618_p0 =  (sc_lv<16>) (sext_ln1118_857_fu_10269897_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1280_fu_2618_p2() {
    mul_ln1118_1280_fu_2618_p2 = (!mul_ln1118_1280_fu_2618_p0.read().is_01() || !ap_const_lv25_1FFFF4A.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_1280_fu_2618_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF4A);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1281_fu_2873_p0() {
    mul_ln1118_1281_fu_2873_p0 =  (sc_lv<16>) (sext_ln1118_857_fu_10269897_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1281_fu_2873_p2() {
    mul_ln1118_1281_fu_2873_p2 = (!mul_ln1118_1281_fu_2873_p0.read().is_01() || !ap_const_lv25_A5.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_1281_fu_2873_p0.read()) * sc_biguint<25>(ap_const_lv25_A5);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1282_fu_2233_p0() {
    mul_ln1118_1282_fu_2233_p0 =  (sc_lv<16>) (sext_ln1118_857_fu_10269897_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1282_fu_2233_p2() {
    mul_ln1118_1282_fu_2233_p2 = (!mul_ln1118_1282_fu_2233_p0.read().is_01() || !ap_const_lv25_C5.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_1282_fu_2233_p0.read()) * sc_biguint<25>(ap_const_lv25_C5);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1283_fu_2724_p0() {
    mul_ln1118_1283_fu_2724_p0 =  (sc_lv<16>) (sext_ln1118_857_fu_10269897_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1283_fu_2724_p2() {
    mul_ln1118_1283_fu_2724_p2 = (!mul_ln1118_1283_fu_2724_p0.read().is_01() || !ap_const_lv25_92.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_1283_fu_2724_p0.read()) * sc_biguint<25>(ap_const_lv25_92);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1284_fu_2725_p0() {
    mul_ln1118_1284_fu_2725_p0 =  (sc_lv<16>) (sext_ln1118_857_fu_10269897_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1284_fu_2725_p2() {
    mul_ln1118_1284_fu_2725_p2 = (!mul_ln1118_1284_fu_2725_p0.read().is_01() || !ap_const_lv25_1FFFF4F.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_1284_fu_2725_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF4F);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1285_fu_1657_p0() {
    mul_ln1118_1285_fu_1657_p0 =  (sc_lv<16>) (sext_ln1118_856_fu_10269886_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1285_fu_1657_p2() {
    mul_ln1118_1285_fu_1657_p2 = (!mul_ln1118_1285_fu_1657_p0.read().is_01() || !ap_const_lv24_6A.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1285_fu_1657_p0.read()) * sc_biguint<24>(ap_const_lv24_6A);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1286_fu_3217_p0() {
    mul_ln1118_1286_fu_3217_p0 =  (sc_lv<16>) (sext_ln1118_856_fu_10269886_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1286_fu_3217_p2() {
    mul_ln1118_1286_fu_3217_p2 = (!mul_ln1118_1286_fu_3217_p0.read().is_01() || !ap_const_lv24_FFFF87.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1286_fu_3217_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF87);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1287_fu_2728_p0() {
    mul_ln1118_1287_fu_2728_p0 =  (sc_lv<16>) (sext_ln1118_855_fu_10269881_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1287_fu_2728_p2() {
    mul_ln1118_1287_fu_2728_p2 = (!mul_ln1118_1287_fu_2728_p0.read().is_01() || !ap_const_lv23_7FFFCB.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_1287_fu_2728_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFCB);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1288_fu_2729_p0() {
    mul_ln1118_1288_fu_2729_p0 =  (sc_lv<16>) (sext_ln1118_856_fu_10269886_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1288_fu_2729_p2() {
    mul_ln1118_1288_fu_2729_p2 = (!mul_ln1118_1288_fu_2729_p0.read().is_01() || !ap_const_lv24_FFFFAD.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1288_fu_2729_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFAD);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1289_fu_3220_p0() {
    mul_ln1118_1289_fu_3220_p0 =  (sc_lv<16>) (sext_ln1118_856_fu_10269886_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1289_fu_3220_p2() {
    mul_ln1118_1289_fu_3220_p2 = (!mul_ln1118_1289_fu_3220_p0.read().is_01() || !ap_const_lv24_FFFF93.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1289_fu_3220_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF93);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1290_fu_2241_p0() {
    mul_ln1118_1290_fu_2241_p0 =  (sc_lv<16>) (sext_ln1118_856_fu_10269886_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1290_fu_2241_p2() {
    mul_ln1118_1290_fu_2241_p2 = (!mul_ln1118_1290_fu_2241_p0.read().is_01() || !ap_const_lv24_5E.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1290_fu_2241_p0.read()) * sc_biguint<24>(ap_const_lv24_5E);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1291_fu_3222_p0() {
    mul_ln1118_1291_fu_3222_p0 =  (sc_lv<16>) (sext_ln1118_856_fu_10269886_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1291_fu_3222_p2() {
    mul_ln1118_1291_fu_3222_p2 = (!mul_ln1118_1291_fu_3222_p0.read().is_01() || !ap_const_lv24_5A.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1291_fu_3222_p0.read()) * sc_biguint<24>(ap_const_lv24_5A);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1292_fu_2733_p0() {
    mul_ln1118_1292_fu_2733_p0 =  (sc_lv<16>) (sext_ln1118_857_fu_10269897_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1292_fu_2733_p2() {
    mul_ln1118_1292_fu_2733_p2 = (!mul_ln1118_1292_fu_2733_p0.read().is_01() || !ap_const_lv25_1FFFF03.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_1292_fu_2733_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF03);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1293_fu_3224_p0() {
    mul_ln1118_1293_fu_3224_p0 = sext_ln1118_872_fu_10270501_p0.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1293_fu_3224_p2() {
    mul_ln1118_1293_fu_3224_p2 = (!mul_ln1118_1293_fu_3224_p0.read().is_01() || !ap_const_lv22_3FFFE6.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_1293_fu_3224_p0.read()) * sc_bigint<22>(ap_const_lv22_3FFFE6);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1294_fu_2735_p0() {
    mul_ln1118_1294_fu_2735_p0 =  (sc_lv<16>) (sext_ln1118_871_fu_10270493_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1294_fu_2735_p2() {
    mul_ln1118_1294_fu_2735_p2 = (!mul_ln1118_1294_fu_2735_p0.read().is_01() || !ap_const_lv25_87.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_1294_fu_2735_p0.read()) * sc_biguint<25>(ap_const_lv25_87);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1295_fu_2736_p0() {
    mul_ln1118_1295_fu_2736_p0 =  (sc_lv<16>) (sext_ln1118_874_fu_10270510_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1295_fu_2736_p2() {
    mul_ln1118_1295_fu_2736_p2 = (!mul_ln1118_1295_fu_2736_p0.read().is_01() || !ap_const_lv23_7FFFD1.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_1295_fu_2736_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFD1);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1296_fu_2737_p0() {
    mul_ln1118_1296_fu_2737_p0 =  (sc_lv<16>) (sext_ln1118_870_fu_10270485_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1296_fu_2737_p2() {
    mul_ln1118_1296_fu_2737_p2 = (!mul_ln1118_1296_fu_2737_p0.read().is_01() || !ap_const_lv24_FFFFAC.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1296_fu_2737_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFAC);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1297_fu_3228_p0() {
    mul_ln1118_1297_fu_3228_p0 =  (sc_lv<16>) (sext_ln1118_871_fu_10270493_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1297_fu_3228_p2() {
    mul_ln1118_1297_fu_3228_p2 = (!mul_ln1118_1297_fu_3228_p0.read().is_01() || !ap_const_lv25_1FFFF38.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_1297_fu_3228_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF38);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1298_fu_2739_p0() {
    mul_ln1118_1298_fu_2739_p0 =  (sc_lv<16>) (sext_ln1118_870_fu_10270485_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1298_fu_2739_p2() {
    mul_ln1118_1298_fu_2739_p2 = (!mul_ln1118_1298_fu_2739_p0.read().is_01() || !ap_const_lv24_FFFF95.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1298_fu_2739_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF95);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1299_fu_2740_p0() {
    mul_ln1118_1299_fu_2740_p0 =  (sc_lv<16>) (sext_ln1118_870_fu_10270485_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1299_fu_2740_p2() {
    mul_ln1118_1299_fu_2740_p2 = (!mul_ln1118_1299_fu_2740_p0.read().is_01() || !ap_const_lv24_FFFFB1.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1299_fu_2740_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFB1);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1300_fu_3231_p0() {
    mul_ln1118_1300_fu_3231_p0 =  (sc_lv<16>) (sext_ln1118_871_fu_10270493_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1300_fu_3231_p2() {
    mul_ln1118_1300_fu_3231_p2 = (!mul_ln1118_1300_fu_3231_p0.read().is_01() || !ap_const_lv25_D5.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_1300_fu_3231_p0.read()) * sc_biguint<25>(ap_const_lv25_D5);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1301_fu_2074_p0() {
    mul_ln1118_1301_fu_2074_p0 =  (sc_lv<16>) (sext_ln1118_870_fu_10270485_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1301_fu_2074_p2() {
    mul_ln1118_1301_fu_2074_p2 = (!mul_ln1118_1301_fu_2074_p0.read().is_01() || !ap_const_lv24_FFFFBD.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1301_fu_2074_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFBD);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1302_fu_2253_p0() {
    mul_ln1118_1302_fu_2253_p0 =  (sc_lv<16>) (sext_ln1118_871_fu_10270493_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1302_fu_2253_p2() {
    mul_ln1118_1302_fu_2253_p2 = (!mul_ln1118_1302_fu_2253_p0.read().is_01() || !ap_const_lv25_BF.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_1302_fu_2253_p0.read()) * sc_biguint<25>(ap_const_lv25_BF);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1303_fu_3234_p0() {
    mul_ln1118_1303_fu_3234_p0 = sext_ln1118_887_fu_10270993_p0.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1303_fu_3234_p2() {
    mul_ln1118_1303_fu_3234_p2 = (!mul_ln1118_1303_fu_3234_p0.read().is_01() || !ap_const_lv21_1FFFF5.is_01())? sc_lv<21>(): sc_bigint<16>(mul_ln1118_1303_fu_3234_p0.read()) * sc_bigint<21>(ap_const_lv21_1FFFF5);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1304_fu_2745_p0() {
    mul_ln1118_1304_fu_2745_p0 =  (sc_lv<16>) (sext_ln1118_886_fu_10270985_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1304_fu_2745_p2() {
    mul_ln1118_1304_fu_2745_p2 = (!mul_ln1118_1304_fu_2745_p0.read().is_01() || !ap_const_lv26_3FFFEEB.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_1304_fu_2745_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFEEB);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1305_fu_2746_p0() {
    mul_ln1118_1305_fu_2746_p0 =  (sc_lv<16>) (sext_ln1118_885_fu_10270975_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1305_fu_2746_p2() {
    mul_ln1118_1305_fu_2746_p2 = (!mul_ln1118_1305_fu_2746_p0.read().is_01() || !ap_const_lv25_1FFFF0C.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_1305_fu_2746_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF0C);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1306_fu_2257_p0() {
    mul_ln1118_1306_fu_2257_p0 =  (sc_lv<16>) (sext_ln1118_885_fu_10270975_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1306_fu_2257_p2() {
    mul_ln1118_1306_fu_2257_p2 = (!mul_ln1118_1306_fu_2257_p0.read().is_01() || !ap_const_lv25_95.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_1306_fu_2257_p0.read()) * sc_biguint<25>(ap_const_lv25_95);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1307_fu_2748_p0() {
    mul_ln1118_1307_fu_2748_p0 =  (sc_lv<16>) (sext_ln1118_889_fu_10271002_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1307_fu_2748_p2() {
    mul_ln1118_1307_fu_2748_p2 = (!mul_ln1118_1307_fu_2748_p0.read().is_01() || !ap_const_lv24_FFFFA3.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1307_fu_2748_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFA3);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1308_fu_2749_p0() {
    mul_ln1118_1308_fu_2749_p0 =  (sc_lv<16>) (sext_ln1118_884_fu_10270969_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1308_fu_2749_p2() {
    mul_ln1118_1308_fu_2749_p2 = (!mul_ln1118_1308_fu_2749_p0.read().is_01() || !ap_const_lv23_3A.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_1308_fu_2749_p0.read()) * sc_biguint<23>(ap_const_lv23_3A);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1309_fu_3541_p0() {
    mul_ln1118_1309_fu_3541_p0 =  (sc_lv<16>) (sext_ln1118_889_fu_10271002_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1309_fu_3541_p2() {
    mul_ln1118_1309_fu_3541_p2 = (!mul_ln1118_1309_fu_3541_p0.read().is_01() || !ap_const_lv24_FFFFAB.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1309_fu_3541_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFAB);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1310_fu_3560_p0() {
    mul_ln1118_1310_fu_3560_p0 =  (sc_lv<16>) (sext_ln1118_885_fu_10270975_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1310_fu_3560_p2() {
    mul_ln1118_1310_fu_3560_p2 = (!mul_ln1118_1310_fu_3560_p0.read().is_01() || !ap_const_lv25_1FFFF69.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_1310_fu_3560_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF69);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1311_fu_3334_p0() {
    mul_ln1118_1311_fu_3334_p0 =  (sc_lv<16>) (sext_ln1118_885_fu_10270975_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1311_fu_3334_p2() {
    mul_ln1118_1311_fu_3334_p2 = (!mul_ln1118_1311_fu_3334_p0.read().is_01() || !ap_const_lv25_1FFFF54.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_1311_fu_3334_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF54);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1312_fu_2673_p0() {
    mul_ln1118_1312_fu_2673_p0 =  (sc_lv<16>) (sext_ln1118_886_fu_10270985_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1312_fu_2673_p2() {
    mul_ln1118_1312_fu_2673_p2 = (!mul_ln1118_1312_fu_2673_p0.read().is_01() || !ap_const_lv26_172.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_1312_fu_2673_p0.read()) * sc_biguint<26>(ap_const_lv26_172);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1313_fu_1876_p0() {
    mul_ln1118_1313_fu_1876_p0 =  (sc_lv<16>) (sext_ln1118_885_fu_10270975_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1313_fu_1876_p2() {
    mul_ln1118_1313_fu_1876_p2 = (!mul_ln1118_1313_fu_1876_p0.read().is_01() || !ap_const_lv25_1FFFF46.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_1313_fu_1876_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF46);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1314_fu_3445_p0() {
    mul_ln1118_1314_fu_3445_p0 =  (sc_lv<16>) (sext_ln1118_885_fu_10270975_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1314_fu_3445_p2() {
    mul_ln1118_1314_fu_3445_p2 = (!mul_ln1118_1314_fu_3445_p0.read().is_01() || !ap_const_lv25_8A.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_1314_fu_3445_p0.read()) * sc_biguint<25>(ap_const_lv25_8A);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1315_fu_1941_p0() {
    mul_ln1118_1315_fu_1941_p0 =  (sc_lv<16>) (sext_ln1118_884_fu_10270969_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1315_fu_1941_p2() {
    mul_ln1118_1315_fu_1941_p2 = (!mul_ln1118_1315_fu_1941_p0.read().is_01() || !ap_const_lv23_7FFFD6.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_1315_fu_1941_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFD6);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1316_fu_1715_p0() {
    mul_ln1118_1316_fu_1715_p0 =  (sc_lv<16>) (sext_ln1118_886_fu_10270985_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1316_fu_1715_p2() {
    mul_ln1118_1316_fu_1715_p2 = (!mul_ln1118_1316_fu_1715_p0.read().is_01() || !ap_const_lv26_125.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_1316_fu_1715_p0.read()) * sc_biguint<26>(ap_const_lv26_125);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1317_fu_2899_p0() {
    mul_ln1118_1317_fu_2899_p0 =  (sc_lv<16>) (sext_ln1118_889_fu_10271002_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1317_fu_2899_p2() {
    mul_ln1118_1317_fu_2899_p2 = (!mul_ln1118_1317_fu_2899_p0.read().is_01() || !ap_const_lv24_49.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1317_fu_2899_p0.read()) * sc_biguint<24>(ap_const_lv24_49);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1318_fu_1903_p0() {
    mul_ln1118_1318_fu_1903_p0 =  (sc_lv<16>) (sext_ln1118_889_fu_10271002_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1318_fu_1903_p2() {
    mul_ln1118_1318_fu_1903_p2 = (!mul_ln1118_1318_fu_1903_p0.read().is_01() || !ap_const_lv24_FFFF98.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1318_fu_1903_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF98);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1319_fu_3210_p0() {
    mul_ln1118_1319_fu_3210_p0 =  (sc_lv<16>) (sext_ln1118_889_fu_10271002_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1319_fu_3210_p2() {
    mul_ln1118_1319_fu_3210_p2 = (!mul_ln1118_1319_fu_3210_p0.read().is_01() || !ap_const_lv24_52.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1319_fu_3210_p0.read()) * sc_biguint<24>(ap_const_lv24_52);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1320_fu_2015_p0() {
    mul_ln1118_1320_fu_2015_p0 =  (sc_lv<16>) (sext_ln1118_886_fu_10270985_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1320_fu_2015_p2() {
    mul_ln1118_1320_fu_2015_p2 = (!mul_ln1118_1320_fu_2015_p0.read().is_01() || !ap_const_lv26_17F.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_1320_fu_2015_p0.read()) * sc_biguint<26>(ap_const_lv26_17F);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1321_fu_1815_p0() {
    mul_ln1118_1321_fu_1815_p0 =  (sc_lv<16>) (sext_ln1118_901_fu_10271488_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1321_fu_1815_p2() {
    mul_ln1118_1321_fu_1815_p2 = (!mul_ln1118_1321_fu_1815_p0.read().is_01() || !ap_const_lv25_92.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_1321_fu_1815_p0.read()) * sc_biguint<25>(ap_const_lv25_92);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1322_fu_2667_p0() {
    mul_ln1118_1322_fu_2667_p0 = sext_ln1118_903_fu_10271510_p0.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1322_fu_2667_p2() {
    mul_ln1118_1322_fu_2667_p2 = (!mul_ln1118_1322_fu_2667_p0.read().is_01() || !ap_const_lv21_D.is_01())? sc_lv<21>(): sc_bigint<16>(mul_ln1118_1322_fu_2667_p0.read()) * sc_biguint<21>(ap_const_lv21_D);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1323_fu_3121_p0() {
    mul_ln1118_1323_fu_3121_p0 =  (sc_lv<16>) (sext_ln1118_901_fu_10271488_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1323_fu_3121_p2() {
    mul_ln1118_1323_fu_3121_p2 = (!mul_ln1118_1323_fu_3121_p0.read().is_01() || !ap_const_lv25_9A.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_1323_fu_3121_p0.read()) * sc_biguint<25>(ap_const_lv25_9A);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1324_fu_2580_p0() {
    mul_ln1118_1324_fu_2580_p0 =  (sc_lv<16>) (sext_ln1118_900_fu_10271480_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1324_fu_2580_p2() {
    mul_ln1118_1324_fu_2580_p2 = (!mul_ln1118_1324_fu_2580_p0.read().is_01() || !ap_const_lv24_63.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1324_fu_2580_p0.read()) * sc_biguint<24>(ap_const_lv24_63);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1325_fu_2181_p0() {
    mul_ln1118_1325_fu_2181_p0 =  (sc_lv<16>) (sext_ln1118_902_fu_10271503_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1325_fu_2181_p2() {
    mul_ln1118_1325_fu_2181_p2 = (!mul_ln1118_1325_fu_2181_p0.read().is_01() || !ap_const_lv23_3A.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_1325_fu_2181_p0.read()) * sc_biguint<23>(ap_const_lv23_3A);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1326_fu_2635_p0() {
    mul_ln1118_1326_fu_2635_p0 =  (sc_lv<16>) (sext_ln1118_901_fu_10271488_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1326_fu_2635_p2() {
    mul_ln1118_1326_fu_2635_p2 = (!mul_ln1118_1326_fu_2635_p0.read().is_01() || !ap_const_lv25_1FFFF5B.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_1326_fu_2635_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF5B);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1327_fu_2236_p0() {
    mul_ln1118_1327_fu_2236_p0 =  (sc_lv<16>) (sext_ln1118_901_fu_10271488_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1327_fu_2236_p2() {
    mul_ln1118_1327_fu_2236_p2 = (!mul_ln1118_1327_fu_2236_p0.read().is_01() || !ap_const_lv25_A2.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_1327_fu_2236_p0.read()) * sc_biguint<25>(ap_const_lv25_A2);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1328_fu_1894_p0() {
    mul_ln1118_1328_fu_1894_p0 =  (sc_lv<16>) (sext_ln1118_902_fu_10271503_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1328_fu_1894_p2() {
    mul_ln1118_1328_fu_1894_p2 = (!mul_ln1118_1328_fu_1894_p0.read().is_01() || !ap_const_lv23_2D.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_1328_fu_1894_p0.read()) * sc_biguint<23>(ap_const_lv23_2D);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1329_fu_1694_p0() {
    mul_ln1118_1329_fu_1694_p0 =  (sc_lv<16>) (sext_ln1118_900_fu_10271480_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1329_fu_1694_p2() {
    mul_ln1118_1329_fu_1694_p2 = (!mul_ln1118_1329_fu_1694_p0.read().is_01() || !ap_const_lv24_53.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1329_fu_1694_p0.read()) * sc_biguint<24>(ap_const_lv24_53);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1330_fu_3001_p0() {
    mul_ln1118_1330_fu_3001_p0 =  (sc_lv<16>) (sext_ln1118_900_fu_10271480_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1330_fu_3001_p2() {
    mul_ln1118_1330_fu_3001_p2 = (!mul_ln1118_1330_fu_3001_p0.read().is_01() || !ap_const_lv24_FFFFB7.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1330_fu_3001_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFB7);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1331_fu_2602_p0() {
    mul_ln1118_1331_fu_2602_p0 =  (sc_lv<16>) (sext_ln1118_901_fu_10271488_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1331_fu_2602_p2() {
    mul_ln1118_1331_fu_2602_p2 = (!mul_ln1118_1331_fu_2602_p0.read().is_01() || !ap_const_lv25_EB.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_1331_fu_2602_p0.read()) * sc_biguint<25>(ap_const_lv25_EB);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1332_fu_3454_p0() {
    mul_ln1118_1332_fu_3454_p0 =  (sc_lv<16>) (sext_ln1118_901_fu_10271488_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1332_fu_3454_p2() {
    mul_ln1118_1332_fu_3454_p2 = (!mul_ln1118_1332_fu_3454_p0.read().is_01() || !ap_const_lv25_1FFFF03.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_1332_fu_3454_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF03);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1333_fu_2060_p0() {
    mul_ln1118_1333_fu_2060_p0 =  (sc_lv<16>) (sext_ln1118_901_fu_10271488_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1333_fu_2060_p2() {
    mul_ln1118_1333_fu_2060_p2 = (!mul_ln1118_1333_fu_2060_p0.read().is_01() || !ap_const_lv25_1FFFF2E.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_1333_fu_2060_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF2E);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1334_fu_3111_p0() {
    mul_ln1118_1334_fu_3111_p0 =  (sc_lv<16>) (sext_ln1118_900_fu_10271480_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1334_fu_3111_p2() {
    mul_ln1118_1334_fu_3111_p2 = (!mul_ln1118_1334_fu_3111_p0.read().is_01() || !ap_const_lv24_56.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1334_fu_3111_p0.read()) * sc_biguint<24>(ap_const_lv24_56);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1335_fu_3622_p0() {
    mul_ln1118_1335_fu_3622_p0 =  (sc_lv<16>) (sext_ln1118_902_fu_10271503_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1335_fu_3622_p2() {
    mul_ln1118_1335_fu_3622_p2 = (!mul_ln1118_1335_fu_3622_p0.read().is_01() || !ap_const_lv23_7FFFD6.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_1335_fu_3622_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFD6);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1336_fu_2768_p0() {
    mul_ln1118_1336_fu_2768_p0 =  (sc_lv<16>) (sext_ln1118_901_fu_10271488_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1336_fu_2768_p2() {
    mul_ln1118_1336_fu_2768_p2 = (!mul_ln1118_1336_fu_2768_p0.read().is_01() || !ap_const_lv25_9C.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_1336_fu_2768_p0.read()) * sc_biguint<25>(ap_const_lv25_9C);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1337_fu_1971_p0() {
    mul_ln1118_1337_fu_1971_p0 =  (sc_lv<16>) (sext_ln1118_901_fu_10271488_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1337_fu_1971_p2() {
    mul_ln1118_1337_fu_1971_p2 = (!mul_ln1118_1337_fu_1971_p0.read().is_01() || !ap_const_lv25_97.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_1337_fu_1971_p0.read()) * sc_biguint<25>(ap_const_lv25_97);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1338_fu_1840_p0() {
    mul_ln1118_1338_fu_1840_p0 = sext_ln1118_899_fu_10271475_p0.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1338_fu_1840_p2() {
    mul_ln1118_1338_fu_1840_p2 = (!mul_ln1118_1338_fu_1840_p0.read().is_01() || !ap_const_lv26_3FFFEFB.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_1338_fu_1840_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFEFB);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1339_fu_2821_p0() {
    mul_ln1118_1339_fu_2821_p0 =  (sc_lv<16>) (sext_ln1118_901_fu_10271488_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1339_fu_2821_p2() {
    mul_ln1118_1339_fu_2821_p2 = (!mul_ln1118_1339_fu_2821_p0.read().is_01() || !ap_const_lv25_1FFFF72.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_1339_fu_2821_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF72);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1340_fu_1842_p0() {
    mul_ln1118_1340_fu_1842_p0 =  (sc_lv<16>) (sext_ln1118_901_fu_10271488_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1340_fu_1842_p2() {
    mul_ln1118_1340_fu_1842_p2 = (!mul_ln1118_1340_fu_1842_p0.read().is_01() || !ap_const_lv25_B5.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_1340_fu_1842_p0.read()) * sc_biguint<25>(ap_const_lv25_B5);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1341_fu_1843_p0() {
    mul_ln1118_1341_fu_1843_p0 =  (sc_lv<16>) (sext_ln1118_919_fu_10272175_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1341_fu_1843_p2() {
    mul_ln1118_1341_fu_1843_p2 = (!mul_ln1118_1341_fu_1843_p0.read().is_01() || !ap_const_lv24_FFFFB4.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1341_fu_1843_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFB4);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1342_fu_1844_p0() {
    mul_ln1118_1342_fu_1844_p0 =  (sc_lv<16>) (sext_ln1118_918_fu_10272167_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1342_fu_1844_p2() {
    mul_ln1118_1342_fu_1844_p2 = (!mul_ln1118_1342_fu_1844_p0.read().is_01() || !ap_const_lv25_E3.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_1342_fu_1844_p0.read()) * sc_biguint<25>(ap_const_lv25_E3);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1343_fu_1845_p0() {
    mul_ln1118_1343_fu_1845_p0 =  (sc_lv<16>) (sext_ln1118_924_fu_10272203_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1343_fu_1845_p2() {
    mul_ln1118_1343_fu_1845_p2 = (!mul_ln1118_1343_fu_1845_p0.read().is_01() || !ap_const_lv22_19.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_1343_fu_1845_p0.read()) * sc_biguint<22>(ap_const_lv22_19);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1344_fu_2336_p0() {
    mul_ln1118_1344_fu_2336_p0 = sext_ln1118_921_fu_10272188_p0.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1344_fu_2336_p2() {
    mul_ln1118_1344_fu_2336_p2 = (!mul_ln1118_1344_fu_2336_p0.read().is_01() || !ap_const_lv21_1FFFF3.is_01())? sc_lv<21>(): sc_bigint<16>(mul_ln1118_1344_fu_2336_p0.read()) * sc_bigint<21>(ap_const_lv21_1FFFF3);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1345_fu_1847_p0() {
    mul_ln1118_1345_fu_1847_p0 =  (sc_lv<16>) (sext_ln1118_919_fu_10272175_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1345_fu_1847_p2() {
    mul_ln1118_1345_fu_1847_p2 = (!mul_ln1118_1345_fu_1847_p0.read().is_01() || !ap_const_lv24_FFFF99.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1345_fu_1847_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF99);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1346_fu_1848_p0() {
    mul_ln1118_1346_fu_1848_p0 =  (sc_lv<16>) (sext_ln1118_922_fu_10272193_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1346_fu_1848_p2() {
    mul_ln1118_1346_fu_1848_p2 = (!mul_ln1118_1346_fu_1848_p0.read().is_01() || !ap_const_lv23_7FFFD3.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_1346_fu_1848_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFD3);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1347_fu_1849_p0() {
    mul_ln1118_1347_fu_1849_p0 =  (sc_lv<16>) (sext_ln1118_922_fu_10272193_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1347_fu_1849_p2() {
    mul_ln1118_1347_fu_1849_p2 = (!mul_ln1118_1347_fu_1849_p0.read().is_01() || !ap_const_lv23_32.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_1347_fu_1849_p0.read()) * sc_biguint<23>(ap_const_lv23_32);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1348_fu_1850_p0() {
    mul_ln1118_1348_fu_1850_p0 =  (sc_lv<16>) (sext_ln1118_919_fu_10272175_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1348_fu_1850_p2() {
    mul_ln1118_1348_fu_1850_p2 = (!mul_ln1118_1348_fu_1850_p0.read().is_01() || !ap_const_lv24_4D.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1348_fu_1850_p0.read()) * sc_biguint<24>(ap_const_lv24_4D);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1349_fu_1851_p0() {
    mul_ln1118_1349_fu_1851_p0 =  (sc_lv<16>) (sext_ln1118_918_fu_10272167_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1349_fu_1851_p2() {
    mul_ln1118_1349_fu_1851_p2 = (!mul_ln1118_1349_fu_1851_p0.read().is_01() || !ap_const_lv25_A9.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_1349_fu_1851_p0.read()) * sc_biguint<25>(ap_const_lv25_A9);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1350_fu_1852_p0() {
    mul_ln1118_1350_fu_1852_p0 =  (sc_lv<16>) (sext_ln1118_918_fu_10272167_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1350_fu_1852_p2() {
    mul_ln1118_1350_fu_1852_p2 = (!mul_ln1118_1350_fu_1852_p0.read().is_01() || !ap_const_lv25_1FFFF51.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_1350_fu_1852_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF51);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1351_fu_3412_p0() {
    mul_ln1118_1351_fu_3412_p0 =  (sc_lv<16>) (sext_ln1118_918_fu_10272167_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1351_fu_3412_p2() {
    mul_ln1118_1351_fu_3412_p2 = (!mul_ln1118_1351_fu_3412_p0.read().is_01() || !ap_const_lv25_87.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_1351_fu_3412_p0.read()) * sc_biguint<25>(ap_const_lv25_87);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1352_fu_1854_p0() {
    mul_ln1118_1352_fu_1854_p0 =  (sc_lv<16>) (sext_ln1118_919_fu_10272175_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1352_fu_1854_p2() {
    mul_ln1118_1352_fu_1854_p2 = (!mul_ln1118_1352_fu_1854_p0.read().is_01() || !ap_const_lv24_FFFF9E.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1352_fu_1854_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF9E);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1353_fu_1855_p0() {
    mul_ln1118_1353_fu_1855_p0 =  (sc_lv<16>) (sext_ln1118_919_fu_10272175_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1353_fu_1855_p2() {
    mul_ln1118_1353_fu_1855_p2 = (!mul_ln1118_1353_fu_1855_p0.read().is_01() || !ap_const_lv24_FFFFA9.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1353_fu_1855_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFA9);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1354_fu_3415_p0() {
    mul_ln1118_1354_fu_3415_p0 =  (sc_lv<16>) (sext_ln1118_924_fu_10272203_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1354_fu_3415_p2() {
    mul_ln1118_1354_fu_3415_p2 = (!mul_ln1118_1354_fu_3415_p0.read().is_01() || !ap_const_lv22_3FFFED.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_1354_fu_3415_p0.read()) * sc_bigint<22>(ap_const_lv22_3FFFED);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1355_fu_2837_p0() {
    mul_ln1118_1355_fu_2837_p0 =  (sc_lv<16>) (sext_ln708_616_fu_10272747_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1355_fu_2837_p2() {
    mul_ln1118_1355_fu_2837_p2 = (!mul_ln1118_1355_fu_2837_p0.read().is_01() || !ap_const_lv25_1FFFF7A.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_1355_fu_2837_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF7A);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1356_fu_1858_p0() {
    mul_ln1118_1356_fu_1858_p0 =  (sc_lv<16>) (sext_ln708_616_fu_10272747_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1356_fu_1858_p2() {
    mul_ln1118_1356_fu_1858_p2 = (!mul_ln1118_1356_fu_1858_p0.read().is_01() || !ap_const_lv25_89.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_1356_fu_1858_p0.read()) * sc_biguint<25>(ap_const_lv25_89);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1357_fu_2349_p0() {
    mul_ln1118_1357_fu_2349_p0 =  (sc_lv<16>) (sext_ln708_616_fu_10272747_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1357_fu_2349_p2() {
    mul_ln1118_1357_fu_2349_p2 = (!mul_ln1118_1357_fu_2349_p0.read().is_01() || !ap_const_lv25_95.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_1357_fu_2349_p0.read()) * sc_biguint<25>(ap_const_lv25_95);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1358_fu_1860_p0() {
    mul_ln1118_1358_fu_1860_p0 =  (sc_lv<16>) (sext_ln708_617_fu_10272762_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1358_fu_1860_p2() {
    mul_ln1118_1358_fu_1860_p2 = (!mul_ln1118_1358_fu_1860_p0.read().is_01() || !ap_const_lv23_34.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_1358_fu_1860_p0.read()) * sc_biguint<23>(ap_const_lv23_34);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1359_fu_2351_p0() {
    mul_ln1118_1359_fu_2351_p0 =  (sc_lv<16>) (sext_ln708_616_fu_10272747_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1359_fu_2351_p2() {
    mul_ln1118_1359_fu_2351_p2 = (!mul_ln1118_1359_fu_2351_p0.read().is_01() || !ap_const_lv25_1FFFF59.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_1359_fu_2351_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF59);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1360_fu_1862_p0() {
    mul_ln1118_1360_fu_1862_p0 =  (sc_lv<16>) (sext_ln708_616_fu_10272747_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1360_fu_1862_p2() {
    mul_ln1118_1360_fu_1862_p2 = (!mul_ln1118_1360_fu_1862_p0.read().is_01() || !ap_const_lv25_EF.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_1360_fu_1862_p0.read()) * sc_biguint<25>(ap_const_lv25_EF);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1361_fu_3422_p0() {
    mul_ln1118_1361_fu_3422_p0 =  (sc_lv<16>) (sext_ln708_617_fu_10272762_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1361_fu_3422_p2() {
    mul_ln1118_1361_fu_3422_p2 = (!mul_ln1118_1361_fu_3422_p0.read().is_01() || !ap_const_lv23_7FFFDA.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_1361_fu_3422_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFDA);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1362_fu_3423_p0() {
    mul_ln1118_1362_fu_3423_p0 =  (sc_lv<16>) (sext_ln708_616_fu_10272747_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1362_fu_3423_p2() {
    mul_ln1118_1362_fu_3423_p2 = (!mul_ln1118_1362_fu_3423_p0.read().is_01() || !ap_const_lv25_1FFFF64.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_1362_fu_3423_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF64);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1363_fu_1865_p0() {
    mul_ln1118_1363_fu_1865_p0 =  (sc_lv<16>) (sext_ln708_616_fu_10272747_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1363_fu_1865_p2() {
    mul_ln1118_1363_fu_1865_p2 = (!mul_ln1118_1363_fu_1865_p0.read().is_01() || !ap_const_lv25_E1.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_1363_fu_1865_p0.read()) * sc_biguint<25>(ap_const_lv25_E1);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1364_fu_2356_p0() {
    mul_ln1118_1364_fu_2356_p0 = sext_ln708_615_fu_10272742_p0.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1364_fu_2356_p2() {
    mul_ln1118_1364_fu_2356_p2 = (!mul_ln1118_1364_fu_2356_p0.read().is_01() || !ap_const_lv26_3FFFEE9.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_1364_fu_2356_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFEE9);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1365_fu_1995_p0() {
    mul_ln1118_1365_fu_1995_p0 =  (sc_lv<16>) (sext_ln708_616_fu_10272747_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1365_fu_1995_p2() {
    mul_ln1118_1365_fu_1995_p2 = (!mul_ln1118_1365_fu_1995_p0.read().is_01() || !ap_const_lv25_1FFFF5C.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_1365_fu_1995_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF5C);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1366_fu_2449_p0() {
    mul_ln1118_1366_fu_2449_p0 = sext_ln708_618_fu_10272768_p0.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1366_fu_2449_p2() {
    mul_ln1118_1366_fu_2449_p2 = (!mul_ln1118_1366_fu_2449_p0.read().is_01() || !ap_const_lv22_3FFFEA.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_1366_fu_2449_p0.read()) * sc_bigint<22>(ap_const_lv22_3FFFEA);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1367_fu_2903_p0() {
    mul_ln1118_1367_fu_2903_p0 =  (sc_lv<16>) (sext_ln708_616_fu_10272747_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1367_fu_2903_p2() {
    mul_ln1118_1367_fu_2903_p2 = (!mul_ln1118_1367_fu_2903_p0.read().is_01() || !ap_const_lv25_C6.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_1367_fu_2903_p0.read()) * sc_biguint<25>(ap_const_lv25_C6);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1368_fu_2106_p0() {
    mul_ln1118_1368_fu_2106_p0 =  (sc_lv<16>) (sext_ln708_619_fu_10272773_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1368_fu_2106_p2() {
    mul_ln1118_1368_fu_2106_p2 = (!mul_ln1118_1368_fu_2106_p0.read().is_01() || !ap_const_lv24_5C.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1368_fu_2106_p0.read()) * sc_biguint<24>(ap_const_lv24_5C);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1369_fu_3104_p0() {
    mul_ln1118_1369_fu_3104_p0 =  (sc_lv<16>) (sext_ln708_619_fu_10272773_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1369_fu_3104_p2() {
    mul_ln1118_1369_fu_3104_p2 = (!mul_ln1118_1369_fu_3104_p0.read().is_01() || !ap_const_lv24_FFFFAE.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1369_fu_3104_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFAE);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1370_fu_2035_p0() {
    mul_ln1118_1370_fu_2035_p0 =  (sc_lv<16>) (sext_ln708_619_fu_10272773_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1370_fu_2035_p2() {
    mul_ln1118_1370_fu_2035_p2 = (!mul_ln1118_1370_fu_2035_p0.read().is_01() || !ap_const_lv24_FFFFAD.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1370_fu_2035_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFAD);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1371_fu_3193_p0() {
    mul_ln1118_1371_fu_3193_p0 = sext_ln708_614_fu_10272737_p0.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1371_fu_3193_p2() {
    mul_ln1118_1371_fu_3193_p2 = (!mul_ln1118_1371_fu_3193_p0.read().is_01() || !ap_const_lv21_B.is_01())? sc_lv<21>(): sc_bigint<16>(mul_ln1118_1371_fu_3193_p0.read()) * sc_biguint<21>(ap_const_lv21_B);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1372_fu_3448_p0() {
    mul_ln1118_1372_fu_3448_p0 =  (sc_lv<16>) (sext_ln708_619_fu_10272773_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1372_fu_3448_p2() {
    mul_ln1118_1372_fu_3448_p2 = (!mul_ln1118_1372_fu_3448_p0.read().is_01() || !ap_const_lv24_FFFF86.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1372_fu_3448_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF86);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1373_fu_2850_p0() {
    mul_ln1118_1373_fu_2850_p0 =  (sc_lv<16>) (sext_ln708_616_fu_10272747_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1373_fu_2850_p2() {
    mul_ln1118_1373_fu_2850_p2 = (!mul_ln1118_1373_fu_2850_p0.read().is_01() || !ap_const_lv25_1FFFF2C.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_1373_fu_2850_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF2C);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1374_fu_3503_p0() {
    mul_ln1118_1374_fu_3503_p0 =  (sc_lv<16>) (sext_ln708_616_fu_10272747_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1374_fu_3503_p2() {
    mul_ln1118_1374_fu_3503_p2 = (!mul_ln1118_1374_fu_3503_p0.read().is_01() || !ap_const_lv25_DD.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_1374_fu_3503_p0.read()) * sc_biguint<25>(ap_const_lv25_DD);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1375_fu_1910_p0() {
    mul_ln1118_1375_fu_1910_p0 =  (sc_lv<16>) (sext_ln1118_943_fu_10273303_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1375_fu_1910_p2() {
    mul_ln1118_1375_fu_1910_p2 = (!mul_ln1118_1375_fu_1910_p0.read().is_01() || !ap_const_lv25_1FFFF24.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_1375_fu_1910_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF24);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1376_fu_1909_p0() {
    mul_ln1118_1376_fu_1909_p0 =  (sc_lv<16>) (sext_ln1118_943_fu_10273303_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1376_fu_1909_p2() {
    mul_ln1118_1376_fu_1909_p2 = (!mul_ln1118_1376_fu_1909_p0.read().is_01() || !ap_const_lv25_1FFFF52.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_1376_fu_1909_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF52);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1377_fu_2363_p0() {
    mul_ln1118_1377_fu_2363_p0 =  (sc_lv<16>) (sext_ln1118_944_fu_10273314_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1377_fu_2363_p2() {
    mul_ln1118_1377_fu_2363_p2 = (!mul_ln1118_1377_fu_2363_p0.read().is_01() || !ap_const_lv24_FFFFA2.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1377_fu_2363_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFA2);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1378_fu_2817_p0() {
    mul_ln1118_1378_fu_2817_p0 =  (sc_lv<16>) (sext_ln1118_943_fu_10273303_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1378_fu_2817_p2() {
    mul_ln1118_1378_fu_2817_p2 = (!mul_ln1118_1378_fu_2817_p0.read().is_01() || !ap_const_lv25_1FFFF4F.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_1378_fu_2817_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF4F);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1379_fu_3271_p0() {
    mul_ln1118_1379_fu_3271_p0 =  (sc_lv<16>) (sext_ln1118_943_fu_10273303_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1379_fu_3271_p2() {
    mul_ln1118_1379_fu_3271_p2 = (!mul_ln1118_1379_fu_3271_p0.read().is_01() || !ap_const_lv25_1FFFF64.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_1379_fu_3271_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF64);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1380_fu_2474_p0() {
    mul_ln1118_1380_fu_2474_p0 =  (sc_lv<16>) (sext_ln1118_942_fu_10273294_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1380_fu_2474_p2() {
    mul_ln1118_1380_fu_2474_p2 = (!mul_ln1118_1380_fu_2474_p0.read().is_01() || !ap_const_lv23_33.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_1380_fu_2474_p0.read()) * sc_biguint<23>(ap_const_lv23_33);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1381_fu_2530_p0() {
    mul_ln1118_1381_fu_2530_p0 = sext_ln1118_941_fu_10273289_p0.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1381_fu_2530_p2() {
    mul_ln1118_1381_fu_2530_p2 = (!mul_ln1118_1381_fu_2530_p0.read().is_01() || !ap_const_lv26_3FFFEC1.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_1381_fu_2530_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFEC1);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1382_fu_2785_p0() {
    mul_ln1118_1382_fu_2785_p0 =  (sc_lv<16>) (sext_ln1118_942_fu_10273294_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1382_fu_2785_p2() {
    mul_ln1118_1382_fu_2785_p2 = (!mul_ln1118_1382_fu_2785_p0.read().is_01() || !ap_const_lv23_2A.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_1382_fu_2785_p0.read()) * sc_biguint<23>(ap_const_lv23_2A);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1383_fu_2187_p0() {
    mul_ln1118_1383_fu_2187_p0 =  (sc_lv<16>) (sext_ln1118_943_fu_10273303_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1383_fu_2187_p2() {
    mul_ln1118_1383_fu_2187_p2 = (!mul_ln1118_1383_fu_2187_p0.read().is_01() || !ap_const_lv25_1FFFF6B.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_1383_fu_2187_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF6B);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1384_fu_1788_p0() {
    mul_ln1118_1384_fu_1788_p0 =  (sc_lv<16>) (sext_ln1118_944_fu_10273314_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1384_fu_1788_p2() {
    mul_ln1118_1384_fu_1788_p2 = (!mul_ln1118_1384_fu_1788_p0.read().is_01() || !ap_const_lv24_FFFFB5.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1384_fu_1788_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFB5);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1385_fu_2242_p0() {
    mul_ln1118_1385_fu_2242_p0 =  (sc_lv<16>) (sext_ln1118_943_fu_10273303_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1385_fu_2242_p2() {
    mul_ln1118_1385_fu_2242_p2 = (!mul_ln1118_1385_fu_2242_p0.read().is_01() || !ap_const_lv25_9D.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_1385_fu_2242_p0.read()) * sc_biguint<25>(ap_const_lv25_9D);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1386_fu_2298_p0() {
    mul_ln1118_1386_fu_2298_p0 =  (sc_lv<16>) (sext_ln1118_944_fu_10273314_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1386_fu_2298_p2() {
    mul_ln1118_1386_fu_2298_p2 = (!mul_ln1118_1386_fu_2298_p0.read().is_01() || !ap_const_lv24_58.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1386_fu_2298_p0.read()) * sc_biguint<24>(ap_const_lv24_58);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1387_fu_3150_p0() {
    mul_ln1118_1387_fu_3150_p0 =  (sc_lv<16>) (sext_ln1118_942_fu_10273294_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1387_fu_3150_p2() {
    mul_ln1118_1387_fu_3150_p2 = (!mul_ln1118_1387_fu_3150_p0.read().is_01() || !ap_const_lv23_26.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_1387_fu_3150_p0.read()) * sc_biguint<23>(ap_const_lv23_26);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1388_fu_2609_p0() {
    mul_ln1118_1388_fu_2609_p0 =  (sc_lv<16>) (sext_ln1118_942_fu_10273294_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1388_fu_2609_p2() {
    mul_ln1118_1388_fu_2609_p2 = (!mul_ln1118_1388_fu_2609_p0.read().is_01() || !ap_const_lv23_7FFFCE.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_1388_fu_2609_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFCE);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1389_fu_2608_p0() {
    mul_ln1118_1389_fu_2608_p0 =  (sc_lv<16>) (sext_ln1118_943_fu_10273303_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1389_fu_2608_p2() {
    mul_ln1118_1389_fu_2608_p2 = (!mul_ln1118_1389_fu_2608_p0.read().is_01() || !ap_const_lv25_B8.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_1389_fu_2608_p0.read()) * sc_biguint<25>(ap_const_lv25_B8);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1390_fu_2010_p0() {
    mul_ln1118_1390_fu_2010_p0 =  (sc_lv<16>) (sext_ln1118_942_fu_10273294_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1390_fu_2010_p2() {
    mul_ln1118_1390_fu_2010_p2 = (!mul_ln1118_1390_fu_2010_p0.read().is_01() || !ap_const_lv23_7FFFCA.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_1390_fu_2010_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFCA);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1391_fu_2066_p0() {
    mul_ln1118_1391_fu_2066_p0 =  (sc_lv<16>) (sext_ln1118_944_fu_10273314_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1391_fu_2066_p2() {
    mul_ln1118_1391_fu_2066_p2 = (!mul_ln1118_1391_fu_2066_p0.read().is_01() || !ap_const_lv24_6E.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1391_fu_2066_p0.read()) * sc_biguint<24>(ap_const_lv24_6E);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1392_fu_2719_p0() {
    mul_ln1118_1392_fu_2719_p0 =  (sc_lv<16>) (sext_ln1118_954_fu_10273793_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1392_fu_2719_p2() {
    mul_ln1118_1392_fu_2719_p2 = (!mul_ln1118_1392_fu_2719_p0.read().is_01() || !ap_const_lv25_1FFFF35.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_1392_fu_2719_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF35);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1393_fu_3495_p0() {
    mul_ln1118_1393_fu_3495_p0 =  (sc_lv<16>) (sext_ln1118_954_fu_10273793_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1393_fu_3495_p2() {
    mul_ln1118_1393_fu_3495_p2 = (!mul_ln1118_1393_fu_3495_p0.read().is_01() || !ap_const_lv25_1FFFF3E.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_1393_fu_3495_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF3E);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1394_fu_2516_p0() {
    mul_ln1118_1394_fu_2516_p0 =  (sc_lv<16>) (sext_ln1118_953_fu_10273785_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1394_fu_2516_p2() {
    mul_ln1118_1394_fu_2516_p2 = (!mul_ln1118_1394_fu_2516_p0.read().is_01() || !ap_const_lv24_58.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1394_fu_2516_p0.read()) * sc_biguint<24>(ap_const_lv24_58);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1395_fu_3007_p0() {
    mul_ln1118_1395_fu_3007_p0 =  (sc_lv<16>) (sext_ln1118_952_fu_10273776_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1395_fu_3007_p2() {
    mul_ln1118_1395_fu_3007_p2 = (!mul_ln1118_1395_fu_3007_p0.read().is_01() || !ap_const_lv26_3FFFED4.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_1395_fu_3007_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFED4);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1396_fu_3498_p0() {
    mul_ln1118_1396_fu_3498_p0 =  (sc_lv<16>) (sext_ln1118_954_fu_10273793_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1396_fu_3498_p2() {
    mul_ln1118_1396_fu_3498_p2 = (!mul_ln1118_1396_fu_3498_p0.read().is_01() || !ap_const_lv25_A5.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_1396_fu_3498_p0.read()) * sc_biguint<25>(ap_const_lv25_A5);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1397_fu_3009_p0() {
    mul_ln1118_1397_fu_3009_p0 =  (sc_lv<16>) (sext_ln1118_953_fu_10273785_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1397_fu_3009_p2() {
    mul_ln1118_1397_fu_3009_p2 = (!mul_ln1118_1397_fu_3009_p0.read().is_01() || !ap_const_lv24_FFFFA8.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1397_fu_3009_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFA8);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1398_fu_2431_p0() {
    mul_ln1118_1398_fu_2431_p0 =  (sc_lv<16>) (sext_ln1118_955_fu_10273809_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1398_fu_2431_p2() {
    mul_ln1118_1398_fu_2431_p2 = (!mul_ln1118_1398_fu_2431_p0.read().is_01() || !ap_const_lv23_37.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_1398_fu_2431_p0.read()) * sc_biguint<23>(ap_const_lv23_37);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1399_fu_3011_p0() {
    mul_ln1118_1399_fu_3011_p0 =  (sc_lv<16>) (sext_ln1118_954_fu_10273793_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1399_fu_3011_p2() {
    mul_ln1118_1399_fu_3011_p2 = (!mul_ln1118_1399_fu_3011_p0.read().is_01() || !ap_const_lv25_1FFFF58.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_1399_fu_3011_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF58);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1400_fu_3012_p0() {
    mul_ln1118_1400_fu_3012_p0 =  (sc_lv<16>) (sext_ln1118_952_fu_10273776_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1400_fu_3012_p2() {
    mul_ln1118_1400_fu_3012_p2 = (!mul_ln1118_1400_fu_3012_p0.read().is_01() || !ap_const_lv26_3FFFEE6.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_1400_fu_3012_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFEE6);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1401_fu_3013_p0() {
    mul_ln1118_1401_fu_3013_p0 =  (sc_lv<16>) (sext_ln1118_953_fu_10273785_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1401_fu_3013_p2() {
    mul_ln1118_1401_fu_3013_p2 = (!mul_ln1118_1401_fu_3013_p0.read().is_01() || !ap_const_lv24_FFFFAE.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1401_fu_3013_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFAE);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1402_fu_3014_p0() {
    mul_ln1118_1402_fu_3014_p0 =  (sc_lv<16>) (sext_ln1118_952_fu_10273776_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1402_fu_3014_p2() {
    mul_ln1118_1402_fu_3014_p2 = (!mul_ln1118_1402_fu_3014_p0.read().is_01() || !ap_const_lv26_135.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_1402_fu_3014_p0.read()) * sc_biguint<26>(ap_const_lv26_135);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1403_fu_3505_p0() {
    mul_ln1118_1403_fu_3505_p0 =  (sc_lv<16>) (sext_ln1118_954_fu_10273793_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1403_fu_3505_p2() {
    mul_ln1118_1403_fu_3505_p2 = (!mul_ln1118_1403_fu_3505_p0.read().is_01() || !ap_const_lv25_BE.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_1403_fu_3505_p0.read()) * sc_biguint<25>(ap_const_lv25_BE);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1404_fu_2437_p0() {
    mul_ln1118_1404_fu_2437_p0 =  (sc_lv<16>) (sext_ln1118_954_fu_10273793_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1404_fu_2437_p2() {
    mul_ln1118_1404_fu_2437_p2 = (!mul_ln1118_1404_fu_2437_p0.read().is_01() || !ap_const_lv25_A8.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_1404_fu_2437_p0.read()) * sc_biguint<25>(ap_const_lv25_A8);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1405_fu_3017_p0() {
    mul_ln1118_1405_fu_3017_p0 =  (sc_lv<16>) (sext_ln1118_954_fu_10273793_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1405_fu_3017_p2() {
    mul_ln1118_1405_fu_3017_p2 = (!mul_ln1118_1405_fu_3017_p0.read().is_01() || !ap_const_lv25_A1.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_1405_fu_3017_p0.read()) * sc_biguint<25>(ap_const_lv25_A1);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1406_fu_2528_p0() {
    mul_ln1118_1406_fu_2528_p0 =  (sc_lv<16>) (sext_ln1118_952_fu_10273776_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1406_fu_2528_p2() {
    mul_ln1118_1406_fu_2528_p2 = (!mul_ln1118_1406_fu_2528_p0.read().is_01() || !ap_const_lv26_10B.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_1406_fu_2528_p0.read()) * sc_biguint<26>(ap_const_lv26_10B);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1407_fu_3019_p0() {
    mul_ln1118_1407_fu_3019_p0 =  (sc_lv<16>) (sext_ln1118_954_fu_10273793_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1407_fu_3019_p2() {
    mul_ln1118_1407_fu_3019_p2 = (!mul_ln1118_1407_fu_3019_p0.read().is_01() || !ap_const_lv25_8D.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_1407_fu_3019_p0.read()) * sc_biguint<25>(ap_const_lv25_8D);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1408_fu_1951_p0() {
    mul_ln1118_1408_fu_1951_p0 =  (sc_lv<16>) (sext_ln1118_954_fu_10273793_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1408_fu_1951_p2() {
    mul_ln1118_1408_fu_1951_p2 = (!mul_ln1118_1408_fu_1951_p0.read().is_01() || !ap_const_lv25_F6.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_1408_fu_1951_p0.read()) * sc_biguint<25>(ap_const_lv25_F6);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1409_fu_3511_p0() {
    mul_ln1118_1409_fu_3511_p0 =  (sc_lv<16>) (sext_ln1118_954_fu_10273793_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1409_fu_3511_p2() {
    mul_ln1118_1409_fu_3511_p2 = (!mul_ln1118_1409_fu_3511_p0.read().is_01() || !ap_const_lv25_B2.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_1409_fu_3511_p0.read()) * sc_biguint<25>(ap_const_lv25_B2);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1410_fu_3512_p0() {
    mul_ln1118_1410_fu_3512_p0 =  (sc_lv<16>) (sext_ln1118_953_fu_10273785_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1410_fu_3512_p2() {
    mul_ln1118_1410_fu_3512_p2 = (!mul_ln1118_1410_fu_3512_p0.read().is_01() || !ap_const_lv24_4E.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1410_fu_3512_p0.read()) * sc_biguint<24>(ap_const_lv24_4E);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1411_fu_1954_p0() {
    mul_ln1118_1411_fu_1954_p0 =  (sc_lv<16>) (sext_ln1118_955_fu_10273809_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1411_fu_1954_p2() {
    mul_ln1118_1411_fu_1954_p2 = (!mul_ln1118_1411_fu_1954_p0.read().is_01() || !ap_const_lv23_7FFFC7.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_1411_fu_1954_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFC7);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1412_fu_3024_p0() {
    mul_ln1118_1412_fu_3024_p0 =  (sc_lv<16>) (sext_ln1118_954_fu_10273793_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1412_fu_3024_p2() {
    mul_ln1118_1412_fu_3024_p2 = (!mul_ln1118_1412_fu_3024_p0.read().is_01() || !ap_const_lv25_1FFFF3F.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_1412_fu_3024_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF3F);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1413_fu_3515_p0() {
    mul_ln1118_1413_fu_3515_p0 =  (sc_lv<16>) (sext_ln1118_952_fu_10273776_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1413_fu_3515_p2() {
    mul_ln1118_1413_fu_3515_p2 = (!mul_ln1118_1413_fu_3515_p0.read().is_01() || !ap_const_lv26_149.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_1413_fu_3515_p0.read()) * sc_biguint<26>(ap_const_lv26_149);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1414_fu_3516_p0() {
    mul_ln1118_1414_fu_3516_p0 =  (sc_lv<16>) (sext_ln1118_954_fu_10273793_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1414_fu_3516_p2() {
    mul_ln1118_1414_fu_3516_p2 = (!mul_ln1118_1414_fu_3516_p0.read().is_01() || !ap_const_lv25_1FFFF36.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_1414_fu_3516_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF36);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1415_fu_2537_p0() {
    mul_ln1118_1415_fu_2537_p0 =  (sc_lv<16>) (sext_ln1118_971_fu_10274397_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1415_fu_2537_p2() {
    mul_ln1118_1415_fu_2537_p2 = (!mul_ln1118_1415_fu_2537_p0.read().is_01() || !ap_const_lv26_188.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_1415_fu_2537_p0.read()) * sc_biguint<26>(ap_const_lv26_188);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1416_fu_3028_p0() {
    mul_ln1118_1416_fu_3028_p0 =  (sc_lv<16>) (sext_ln1118_971_fu_10274397_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1416_fu_3028_p2() {
    mul_ln1118_1416_fu_3028_p2 = (!mul_ln1118_1416_fu_3028_p0.read().is_01() || !ap_const_lv26_3FFFEDB.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_1416_fu_3028_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFEDB);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1417_fu_3029_p0() {
    mul_ln1118_1417_fu_3029_p0 =  (sc_lv<16>) (sext_ln1118_970_fu_10274391_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1417_fu_3029_p2() {
    mul_ln1118_1417_fu_3029_p2 = (!mul_ln1118_1417_fu_3029_p0.read().is_01() || !ap_const_lv24_FFFF99.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1417_fu_3029_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF99);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1418_fu_2941_p0() {
    mul_ln1118_1418_fu_2941_p0 =  (sc_lv<16>) (sext_ln1118_970_fu_10274391_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1418_fu_2941_p2() {
    mul_ln1118_1418_fu_2941_p2 = (!mul_ln1118_1418_fu_2941_p0.read().is_01() || !ap_const_lv24_FFFFB2.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1418_fu_2941_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFB2);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1419_fu_3521_p0() {
    mul_ln1118_1419_fu_3521_p0 =  (sc_lv<16>) (sext_ln1118_969_fu_10274380_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1419_fu_3521_p2() {
    mul_ln1118_1419_fu_3521_p2 = (!mul_ln1118_1419_fu_3521_p0.read().is_01() || !ap_const_lv25_98.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_1419_fu_3521_p0.read()) * sc_biguint<25>(ap_const_lv25_98);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1420_fu_2633_p0() {
    mul_ln1118_1420_fu_2633_p0 = sext_ln1118_973_fu_10274409_p0.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1420_fu_2633_p2() {
    mul_ln1118_1420_fu_2633_p2 = (!mul_ln1118_1420_fu_2633_p0.read().is_01() || !ap_const_lv22_1D.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_1420_fu_2633_p0.read()) * sc_biguint<22>(ap_const_lv22_1D);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1421_fu_1700_p0() {
    mul_ln1118_1421_fu_1700_p0 =  (sc_lv<16>) (sext_ln1118_969_fu_10274380_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1421_fu_1700_p2() {
    mul_ln1118_1421_fu_1700_p2 = (!mul_ln1118_1421_fu_1700_p0.read().is_01() || !ap_const_lv25_1FFFF30.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_1421_fu_1700_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF30);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1422_fu_2290_p0() {
    mul_ln1118_1422_fu_2290_p0 =  (sc_lv<16>) (sext_ln1118_969_fu_10274380_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1422_fu_2290_p2() {
    mul_ln1118_1422_fu_2290_p2 = (!mul_ln1118_1422_fu_2290_p0.read().is_01() || !ap_const_lv25_1FFFF48.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_1422_fu_2290_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF48);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1423_fu_1765_p0() {
    mul_ln1118_1423_fu_1765_p0 =  (sc_lv<16>) (sext_ln1118_969_fu_10274380_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1423_fu_1765_p2() {
    mul_ln1118_1423_fu_1765_p2 = (!mul_ln1118_1423_fu_1765_p0.read().is_01() || !ap_const_lv25_1FFFF7D.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_1423_fu_1765_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF7D);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1424_fu_1947_p0() {
    mul_ln1118_1424_fu_1947_p0 =  (sc_lv<16>) (sext_ln1118_969_fu_10274380_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1424_fu_1947_p2() {
    mul_ln1118_1424_fu_1947_p2 = (!mul_ln1118_1424_fu_1947_p0.read().is_01() || !ap_const_lv25_D1.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_1424_fu_1947_p0.read()) * sc_biguint<25>(ap_const_lv25_D1);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1425_fu_2265_p0() {
    mul_ln1118_1425_fu_2265_p0 =  (sc_lv<16>) (sext_ln1118_969_fu_10274380_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1425_fu_2265_p2() {
    mul_ln1118_1425_fu_2265_p2 = (!mul_ln1118_1425_fu_2265_p0.read().is_01() || !ap_const_lv25_91.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_1425_fu_2265_p0.read()) * sc_biguint<25>(ap_const_lv25_91);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1426_fu_1740_p0() {
    mul_ln1118_1426_fu_1740_p0 =  (sc_lv<16>) (sext_ln1118_969_fu_10274380_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1426_fu_1740_p2() {
    mul_ln1118_1426_fu_1740_p2 = (!mul_ln1118_1426_fu_1740_p0.read().is_01() || !ap_const_lv25_96.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_1426_fu_1740_p0.read()) * sc_biguint<25>(ap_const_lv25_96);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1427_fu_3201_p0() {
    mul_ln1118_1427_fu_3201_p0 = sext_ln1118_968_fu_10274375_p0.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1427_fu_3201_p2() {
    mul_ln1118_1427_fu_3201_p2 = (!mul_ln1118_1427_fu_3201_p0.read().is_01() || !ap_const_lv21_1FFFF5.is_01())? sc_lv<21>(): sc_bigint<16>(mul_ln1118_1427_fu_3201_p0.read()) * sc_bigint<21>(ap_const_lv21_1FFFF5);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1428_fu_3598_p0() {
    mul_ln1118_1428_fu_3598_p0 =  (sc_lv<16>) (sext_ln1118_971_fu_10274397_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1428_fu_3598_p2() {
    mul_ln1118_1428_fu_3598_p2 = (!mul_ln1118_1428_fu_3598_p0.read().is_01() || !ap_const_lv26_10B.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_1428_fu_3598_p0.read()) * sc_biguint<26>(ap_const_lv26_10B);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1429_fu_3654_p0() {
    mul_ln1118_1429_fu_3654_p0 =  (sc_lv<16>) (sext_ln1118_971_fu_10274397_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1429_fu_3654_p2() {
    mul_ln1118_1429_fu_3654_p2 = (!mul_ln1118_1429_fu_3654_p0.read().is_01() || !ap_const_lv26_14C.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_1429_fu_3654_p0.read()) * sc_biguint<26>(ap_const_lv26_14C);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1430_fu_2260_p0() {
    mul_ln1118_1430_fu_2260_p0 =  (sc_lv<16>) (sext_ln1118_991_fu_10274960_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1430_fu_2260_p2() {
    mul_ln1118_1430_fu_2260_p2 = (!mul_ln1118_1430_fu_2260_p0.read().is_01() || !ap_const_lv24_6F.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1430_fu_2260_p0.read()) * sc_biguint<24>(ap_const_lv24_6F);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1431_fu_2458_p0() {
    mul_ln1118_1431_fu_2458_p0 =  (sc_lv<16>) (sext_ln1118_986_fu_10274927_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1431_fu_2458_p2() {
    mul_ln1118_1431_fu_2458_p2 = (!mul_ln1118_1431_fu_2458_p0.read().is_01() || !ap_const_lv25_C8.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_1431_fu_2458_p0.read()) * sc_biguint<25>(ap_const_lv25_C8);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1432_fu_1661_p0() {
    mul_ln1118_1432_fu_1661_p0 = sext_ln1118_985_fu_10274922_p0.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1432_fu_1661_p2() {
    mul_ln1118_1432_fu_1661_p2 = (!mul_ln1118_1432_fu_1661_p0.read().is_01() || !ap_const_lv26_10B.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_1432_fu_1661_p0.read()) * sc_biguint<26>(ap_const_lv26_10B);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1433_fu_2968_p0() {
    mul_ln1118_1433_fu_2968_p0 =  (sc_lv<16>) (sext_ln1118_986_fu_10274927_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1433_fu_2968_p2() {
    mul_ln1118_1433_fu_2968_p2 = (!mul_ln1118_1433_fu_2968_p0.read().is_01() || !ap_const_lv25_94.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_1433_fu_2968_p0.read()) * sc_biguint<25>(ap_const_lv25_94);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1434_fu_2370_p0() {
    mul_ln1118_1434_fu_2370_p0 =  (sc_lv<16>) (sext_ln1118_987_fu_10274940_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1434_fu_2370_p2() {
    mul_ln1118_1434_fu_2370_p2 = (!mul_ln1118_1434_fu_2370_p0.read().is_01() || !ap_const_lv23_34.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_1434_fu_2370_p0.read()) * sc_biguint<23>(ap_const_lv23_34);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1435_fu_3023_p0() {
    mul_ln1118_1435_fu_3023_p0 =  (sc_lv<16>) (sext_ln1118_986_fu_10274927_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1435_fu_3023_p2() {
    mul_ln1118_1435_fu_3023_p2 = (!mul_ln1118_1435_fu_3023_p0.read().is_01() || !ap_const_lv25_CD.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_1435_fu_3023_p0.read()) * sc_biguint<25>(ap_const_lv25_CD);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1436_fu_2027_p0() {
    mul_ln1118_1436_fu_2027_p0 =  (sc_lv<16>) (sext_ln1118_989_fu_10274951_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1436_fu_2027_p2() {
    mul_ln1118_1436_fu_2027_p2 = (!mul_ln1118_1436_fu_2027_p0.read().is_01() || !ap_const_lv21_1FFFF3.is_01())? sc_lv<21>(): sc_bigint<16>(mul_ln1118_1436_fu_2027_p0.read()) * sc_bigint<21>(ap_const_lv21_1FFFF3);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1437_fu_1685_p0() {
    mul_ln1118_1437_fu_1685_p0 = sext_ln1118_988_fu_10274946_p0.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1437_fu_1685_p2() {
    mul_ln1118_1437_fu_1685_p2 = (!mul_ln1118_1437_fu_1685_p0.read().is_01() || !ap_const_lv22_3FFFE9.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_1437_fu_1685_p0.read()) * sc_bigint<22>(ap_const_lv22_3FFFE9);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1438_fu_1741_p0() {
    mul_ln1118_1438_fu_1741_p0 =  (sc_lv<16>) (sext_ln1118_986_fu_10274927_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1438_fu_1741_p2() {
    mul_ln1118_1438_fu_1741_p2 = (!mul_ln1118_1438_fu_1741_p0.read().is_01() || !ap_const_lv25_1FFFF49.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_1438_fu_1741_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF49);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1439_fu_2337_p0() {
    mul_ln1118_1439_fu_2337_p0 =  (sc_lv<16>) (sext_ln1118_991_fu_10274960_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1439_fu_2337_p2() {
    mul_ln1118_1439_fu_2337_p2 = (!mul_ln1118_1439_fu_2337_p0.read().is_01() || !ap_const_lv24_FFFFBB.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1439_fu_2337_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFBB);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1440_fu_3047_p0() {
    mul_ln1118_1440_fu_3047_p0 =  (sc_lv<16>) (sext_ln1118_986_fu_10274927_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1440_fu_3047_p2() {
    mul_ln1118_1440_fu_3047_p2 = (!mul_ln1118_1440_fu_3047_p0.read().is_01() || !ap_const_lv25_B0.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_1440_fu_3047_p0.read()) * sc_biguint<25>(ap_const_lv25_B0);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1441_fu_2648_p0() {
    mul_ln1118_1441_fu_2648_p0 =  (sc_lv<16>) (sext_ln1118_986_fu_10274927_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1441_fu_2648_p2() {
    mul_ln1118_1441_fu_2648_p2 = (!mul_ln1118_1441_fu_2648_p0.read().is_01() || !ap_const_lv25_DA.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_1441_fu_2648_p0.read()) * sc_biguint<25>(ap_const_lv25_DA);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1442_fu_2249_p0() {
    mul_ln1118_1442_fu_2249_p0 =  (sc_lv<16>) (sext_ln1118_991_fu_10274960_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1442_fu_2249_p2() {
    mul_ln1118_1442_fu_2249_p2 = (!mul_ln1118_1442_fu_2249_p0.read().is_01() || !ap_const_lv24_7A.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1442_fu_2249_p0.read()) * sc_biguint<24>(ap_const_lv24_7A);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1443_fu_1651_p0() {
    mul_ln1118_1443_fu_1651_p0 =  (sc_lv<16>) (sext_ln1118_991_fu_10274960_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1443_fu_1651_p2() {
    mul_ln1118_1443_fu_1651_p2 = (!mul_ln1118_1443_fu_1651_p0.read().is_01() || !ap_const_lv24_59.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1443_fu_1651_p0.read()) * sc_biguint<24>(ap_const_lv24_59);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1444_fu_3356_p0() {
    mul_ln1118_1444_fu_3356_p0 =  (sc_lv<16>) (sext_ln1118_986_fu_10274927_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1444_fu_3356_p2() {
    mul_ln1118_1444_fu_3356_p2 = (!mul_ln1118_1444_fu_3356_p0.read().is_01() || !ap_const_lv25_1FFFF47.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_1444_fu_3356_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF47);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1445_fu_2161_p0() {
    mul_ln1118_1445_fu_2161_p0 =  (sc_lv<16>) (sext_ln1118_986_fu_10274927_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1445_fu_2161_p2() {
    mul_ln1118_1445_fu_2161_p2 = (!mul_ln1118_1445_fu_2161_p0.read().is_01() || !ap_const_lv25_B4.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_1445_fu_2161_p0.read()) * sc_biguint<25>(ap_const_lv25_B4);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1446_fu_2217_p0() {
    mul_ln1118_1446_fu_2217_p0 =  (sc_lv<16>) (sext_ln1118_986_fu_10274927_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1446_fu_2217_p2() {
    mul_ln1118_1446_fu_2217_p2 = (!mul_ln1118_1446_fu_2217_p0.read().is_01() || !ap_const_lv25_BB.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_1446_fu_2217_p0.read()) * sc_biguint<25>(ap_const_lv25_BB);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1447_fu_3325_p0() {
    mul_ln1118_1447_fu_3325_p0 =  (sc_lv<16>) (sext_ln1118_991_fu_10274960_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1447_fu_3325_p2() {
    mul_ln1118_1447_fu_3325_p2 = (!mul_ln1118_1447_fu_3325_p0.read().is_01() || !ap_const_lv24_67.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1447_fu_3325_p0.read()) * sc_biguint<24>(ap_const_lv24_67);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1448_fu_2611_p0() {
    mul_ln1118_1448_fu_2611_p0 =  (sc_lv<16>) (sext_ln1118_987_fu_10274940_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1448_fu_2611_p2() {
    mul_ln1118_1448_fu_2611_p2 = (!mul_ln1118_1448_fu_2611_p0.read().is_01() || !ap_const_lv23_7FFFD7.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_1448_fu_2611_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFD7);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1449_fu_2122_p0() {
    mul_ln1118_1449_fu_2122_p0 =  (sc_lv<16>) (sext_ln1118_1006_fu_10275579_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1449_fu_2122_p2() {
    mul_ln1118_1449_fu_2122_p2 = (!mul_ln1118_1449_fu_2122_p0.read().is_01() || !ap_const_lv24_FFFF93.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1449_fu_2122_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF93);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1450_fu_2613_p0() {
    mul_ln1118_1450_fu_2613_p0 =  (sc_lv<16>) (sext_ln1118_1006_fu_10275579_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1450_fu_2613_p2() {
    mul_ln1118_1450_fu_2613_p2 = (!mul_ln1118_1450_fu_2613_p0.read().is_01() || !ap_const_lv24_FFFFBB.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1450_fu_2613_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFBB);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1451_fu_3683_p0() {
    mul_ln1118_1451_fu_3683_p0 =  (sc_lv<16>) (sext_ln1118_1005_fu_10275567_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1451_fu_3683_p2() {
    mul_ln1118_1451_fu_3683_p2 = (!mul_ln1118_1451_fu_3683_p0.read().is_01() || !ap_const_lv25_1FFFF69.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_1451_fu_3683_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF69);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1452_fu_3105_p0() {
    mul_ln1118_1452_fu_3105_p0 =  (sc_lv<16>) (sext_ln1118_1007_fu_10275585_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1452_fu_3105_p2() {
    mul_ln1118_1452_fu_3105_p2 = (!mul_ln1118_1452_fu_3105_p0.read().is_01() || !ap_const_lv23_7FFFD7.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_1452_fu_3105_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFD7);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1453_fu_2126_p0() {
    mul_ln1118_1453_fu_2126_p0 =  (sc_lv<16>) (sext_ln1118_1004_fu_10275561_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1453_fu_2126_p2() {
    mul_ln1118_1453_fu_2126_p2 = (!mul_ln1118_1453_fu_2126_p0.read().is_01() || !ap_const_lv26_3FFFEDD.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_1453_fu_2126_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFEDD);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1454_fu_3597_p0() {
    mul_ln1118_1454_fu_3597_p0 =  (sc_lv<16>) (sext_ln1118_1005_fu_10275567_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1454_fu_3597_p2() {
    mul_ln1118_1454_fu_3597_p2 = (!mul_ln1118_1454_fu_3597_p0.read().is_01() || !ap_const_lv25_92.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_1454_fu_3597_p0.read()) * sc_biguint<25>(ap_const_lv25_92);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1455_fu_2128_p0() {
    mul_ln1118_1455_fu_2128_p0 =  (sc_lv<16>) (sext_ln1118_1005_fu_10275567_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1455_fu_2128_p2() {
    mul_ln1118_1455_fu_2128_p2 = (!mul_ln1118_1455_fu_2128_p0.read().is_01() || !ap_const_lv25_EE.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_1455_fu_2128_p0.read()) * sc_biguint<25>(ap_const_lv25_EE);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1456_fu_2129_p0() {
    mul_ln1118_1456_fu_2129_p0 =  (sc_lv<16>) (sext_ln1118_1005_fu_10275567_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1456_fu_2129_p2() {
    mul_ln1118_1456_fu_2129_p2 = (!mul_ln1118_1456_fu_2129_p0.read().is_01() || !ap_const_lv25_AC.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_1456_fu_2129_p0.read()) * sc_biguint<25>(ap_const_lv25_AC);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1457_fu_2130_p0() {
    mul_ln1118_1457_fu_2130_p0 =  (sc_lv<16>) (sext_ln1118_1005_fu_10275567_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1457_fu_2130_p2() {
    mul_ln1118_1457_fu_2130_p2 = (!mul_ln1118_1457_fu_2130_p0.read().is_01() || !ap_const_lv25_1FFFF06.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_1457_fu_2130_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF06);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1458_fu_2042_p0() {
    mul_ln1118_1458_fu_2042_p0 =  (sc_lv<16>) (sext_ln1118_1004_fu_10275561_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1458_fu_2042_p2() {
    mul_ln1118_1458_fu_2042_p2 = (!mul_ln1118_1458_fu_2042_p0.read().is_01() || !ap_const_lv26_198.is_01())? sc_lv<26>(): sc_bigint<16>(mul_ln1118_1458_fu_2042_p0.read()) * sc_biguint<26>(ap_const_lv26_198);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1459_fu_2622_p0() {
    mul_ln1118_1459_fu_2622_p0 =  (sc_lv<16>) (sext_ln1118_1005_fu_10275567_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1459_fu_2622_p2() {
    mul_ln1118_1459_fu_2622_p2 = (!mul_ln1118_1459_fu_2622_p0.read().is_01() || !ap_const_lv25_93.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_1459_fu_2622_p0.read()) * sc_biguint<25>(ap_const_lv25_93);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1460_fu_2623_p0() {
    mul_ln1118_1460_fu_2623_p0 =  (sc_lv<16>) (sext_ln1118_1007_fu_10275585_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1460_fu_2623_p2() {
    mul_ln1118_1460_fu_2623_p2 = (!mul_ln1118_1460_fu_2623_p0.read().is_01() || !ap_const_lv23_7FFFCE.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_1460_fu_2623_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFCE);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1461_fu_2624_p0() {
    mul_ln1118_1461_fu_2624_p0 =  (sc_lv<16>) (sext_ln1118_1005_fu_10275567_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1461_fu_2624_p2() {
    mul_ln1118_1461_fu_2624_p2 = (!mul_ln1118_1461_fu_2624_p0.read().is_01() || !ap_const_lv25_1FFFF76.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_1461_fu_2624_p0.read()) * sc_bigint<25>(ap_const_lv25_1FFFF76);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1462_fu_1645_p0() {
    mul_ln1118_1462_fu_1645_p0 =  (sc_lv<16>) (sext_ln1118_1005_fu_10275567_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1462_fu_1645_p2() {
    mul_ln1118_1462_fu_1645_p2 = (!mul_ln1118_1462_fu_1645_p0.read().is_01() || !ap_const_lv25_ED.is_01())? sc_lv<25>(): sc_bigint<16>(mul_ln1118_1462_fu_1645_p0.read()) * sc_biguint<25>(ap_const_lv25_ED);
}

}

