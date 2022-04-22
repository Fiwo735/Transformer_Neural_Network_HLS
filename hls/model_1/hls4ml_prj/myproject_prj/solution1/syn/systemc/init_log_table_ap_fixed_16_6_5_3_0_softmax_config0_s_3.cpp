#include "init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_add_ln581_fu_50710_p2() {
    add_ln581_fu_50710_p2 = (!ap_const_lv12_FF6.is_01() || !sub_ln575_reg_50943.read().is_01())? sc_lv<12>(): (sc_bigint<12>(ap_const_lv12_FF6) + sc_biguint<12>(sub_ln575_reg_50943.read()));
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_and_ln581_fu_50828_p2() {
    and_ln581_fu_50828_p2 = (icmp_ln581_fu_50705_p2.read() & xor_ln582_fu_50822_p2.read());
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_and_ln582_fu_50811_p2() {
    and_ln582_fu_50811_p2 = (icmp_ln582_fu_50732_p2.read() & xor_ln571_fu_50806_p2.read());
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_and_ln585_1_fu_50846_p2() {
    and_ln585_1_fu_50846_p2 = (and_ln581_fu_50828_p2.read() & icmp_ln585_fu_50741_p2.read());
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_and_ln585_fu_50840_p2() {
    and_ln585_fu_50840_p2 = (and_ln581_fu_50828_p2.read() & xor_ln585_fu_50834_p2.read());
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_and_ln603_fu_50864_p2() {
    and_ln603_fu_50864_p2 = (icmp_ln603_fu_50757_p2.read() & xor_ln581_fu_50858_p2.read());
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1() {
    ap_CS_fsm_state1 = ap_CS_fsm.read()[0];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state10() {
    ap_CS_fsm_state10 = ap_CS_fsm.read()[9];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state100() {
    ap_CS_fsm_state100 = ap_CS_fsm.read()[99];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1000() {
    ap_CS_fsm_state1000 = ap_CS_fsm.read()[999];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1001() {
    ap_CS_fsm_state1001 = ap_CS_fsm.read()[1000];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1002() {
    ap_CS_fsm_state1002 = ap_CS_fsm.read()[1001];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1003() {
    ap_CS_fsm_state1003 = ap_CS_fsm.read()[1002];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1004() {
    ap_CS_fsm_state1004 = ap_CS_fsm.read()[1003];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1005() {
    ap_CS_fsm_state1005 = ap_CS_fsm.read()[1004];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1006() {
    ap_CS_fsm_state1006 = ap_CS_fsm.read()[1005];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1007() {
    ap_CS_fsm_state1007 = ap_CS_fsm.read()[1006];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1008() {
    ap_CS_fsm_state1008 = ap_CS_fsm.read()[1007];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1009() {
    ap_CS_fsm_state1009 = ap_CS_fsm.read()[1008];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state101() {
    ap_CS_fsm_state101 = ap_CS_fsm.read()[100];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1010() {
    ap_CS_fsm_state1010 = ap_CS_fsm.read()[1009];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1011() {
    ap_CS_fsm_state1011 = ap_CS_fsm.read()[1010];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1012() {
    ap_CS_fsm_state1012 = ap_CS_fsm.read()[1011];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1013() {
    ap_CS_fsm_state1013 = ap_CS_fsm.read()[1012];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1014() {
    ap_CS_fsm_state1014 = ap_CS_fsm.read()[1013];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1015() {
    ap_CS_fsm_state1015 = ap_CS_fsm.read()[1014];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1016() {
    ap_CS_fsm_state1016 = ap_CS_fsm.read()[1015];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1017() {
    ap_CS_fsm_state1017 = ap_CS_fsm.read()[1016];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1018() {
    ap_CS_fsm_state1018 = ap_CS_fsm.read()[1017];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1019() {
    ap_CS_fsm_state1019 = ap_CS_fsm.read()[1018];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state102() {
    ap_CS_fsm_state102 = ap_CS_fsm.read()[101];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1020() {
    ap_CS_fsm_state1020 = ap_CS_fsm.read()[1019];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1021() {
    ap_CS_fsm_state1021 = ap_CS_fsm.read()[1020];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1022() {
    ap_CS_fsm_state1022 = ap_CS_fsm.read()[1021];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1023() {
    ap_CS_fsm_state1023 = ap_CS_fsm.read()[1022];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1024() {
    ap_CS_fsm_state1024 = ap_CS_fsm.read()[1023];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1025() {
    ap_CS_fsm_state1025 = ap_CS_fsm.read()[1024];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1026() {
    ap_CS_fsm_state1026 = ap_CS_fsm.read()[1025];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1027() {
    ap_CS_fsm_state1027 = ap_CS_fsm.read()[1026];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1028() {
    ap_CS_fsm_state1028 = ap_CS_fsm.read()[1027];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1029() {
    ap_CS_fsm_state1029 = ap_CS_fsm.read()[1028];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state103() {
    ap_CS_fsm_state103 = ap_CS_fsm.read()[102];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1030() {
    ap_CS_fsm_state1030 = ap_CS_fsm.read()[1029];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1031() {
    ap_CS_fsm_state1031 = ap_CS_fsm.read()[1030];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1032() {
    ap_CS_fsm_state1032 = ap_CS_fsm.read()[1031];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1033() {
    ap_CS_fsm_state1033 = ap_CS_fsm.read()[1032];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1034() {
    ap_CS_fsm_state1034 = ap_CS_fsm.read()[1033];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1035() {
    ap_CS_fsm_state1035 = ap_CS_fsm.read()[1034];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1036() {
    ap_CS_fsm_state1036 = ap_CS_fsm.read()[1035];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1037() {
    ap_CS_fsm_state1037 = ap_CS_fsm.read()[1036];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1038() {
    ap_CS_fsm_state1038 = ap_CS_fsm.read()[1037];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1039() {
    ap_CS_fsm_state1039 = ap_CS_fsm.read()[1038];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state104() {
    ap_CS_fsm_state104 = ap_CS_fsm.read()[103];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1040() {
    ap_CS_fsm_state1040 = ap_CS_fsm.read()[1039];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1041() {
    ap_CS_fsm_state1041 = ap_CS_fsm.read()[1040];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1042() {
    ap_CS_fsm_state1042 = ap_CS_fsm.read()[1041];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1043() {
    ap_CS_fsm_state1043 = ap_CS_fsm.read()[1042];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1044() {
    ap_CS_fsm_state1044 = ap_CS_fsm.read()[1043];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1045() {
    ap_CS_fsm_state1045 = ap_CS_fsm.read()[1044];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1046() {
    ap_CS_fsm_state1046 = ap_CS_fsm.read()[1045];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1047() {
    ap_CS_fsm_state1047 = ap_CS_fsm.read()[1046];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1048() {
    ap_CS_fsm_state1048 = ap_CS_fsm.read()[1047];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1049() {
    ap_CS_fsm_state1049 = ap_CS_fsm.read()[1048];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state105() {
    ap_CS_fsm_state105 = ap_CS_fsm.read()[104];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1050() {
    ap_CS_fsm_state1050 = ap_CS_fsm.read()[1049];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1051() {
    ap_CS_fsm_state1051 = ap_CS_fsm.read()[1050];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1052() {
    ap_CS_fsm_state1052 = ap_CS_fsm.read()[1051];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1053() {
    ap_CS_fsm_state1053 = ap_CS_fsm.read()[1052];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1054() {
    ap_CS_fsm_state1054 = ap_CS_fsm.read()[1053];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1055() {
    ap_CS_fsm_state1055 = ap_CS_fsm.read()[1054];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1056() {
    ap_CS_fsm_state1056 = ap_CS_fsm.read()[1055];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1057() {
    ap_CS_fsm_state1057 = ap_CS_fsm.read()[1056];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1058() {
    ap_CS_fsm_state1058 = ap_CS_fsm.read()[1057];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1059() {
    ap_CS_fsm_state1059 = ap_CS_fsm.read()[1058];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state106() {
    ap_CS_fsm_state106 = ap_CS_fsm.read()[105];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1060() {
    ap_CS_fsm_state1060 = ap_CS_fsm.read()[1059];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1061() {
    ap_CS_fsm_state1061 = ap_CS_fsm.read()[1060];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1062() {
    ap_CS_fsm_state1062 = ap_CS_fsm.read()[1061];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1063() {
    ap_CS_fsm_state1063 = ap_CS_fsm.read()[1062];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1064() {
    ap_CS_fsm_state1064 = ap_CS_fsm.read()[1063];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1065() {
    ap_CS_fsm_state1065 = ap_CS_fsm.read()[1064];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1066() {
    ap_CS_fsm_state1066 = ap_CS_fsm.read()[1065];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1067() {
    ap_CS_fsm_state1067 = ap_CS_fsm.read()[1066];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1068() {
    ap_CS_fsm_state1068 = ap_CS_fsm.read()[1067];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1069() {
    ap_CS_fsm_state1069 = ap_CS_fsm.read()[1068];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state107() {
    ap_CS_fsm_state107 = ap_CS_fsm.read()[106];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1070() {
    ap_CS_fsm_state1070 = ap_CS_fsm.read()[1069];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1071() {
    ap_CS_fsm_state1071 = ap_CS_fsm.read()[1070];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1072() {
    ap_CS_fsm_state1072 = ap_CS_fsm.read()[1071];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1073() {
    ap_CS_fsm_state1073 = ap_CS_fsm.read()[1072];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1074() {
    ap_CS_fsm_state1074 = ap_CS_fsm.read()[1073];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1075() {
    ap_CS_fsm_state1075 = ap_CS_fsm.read()[1074];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1076() {
    ap_CS_fsm_state1076 = ap_CS_fsm.read()[1075];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1077() {
    ap_CS_fsm_state1077 = ap_CS_fsm.read()[1076];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1078() {
    ap_CS_fsm_state1078 = ap_CS_fsm.read()[1077];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1079() {
    ap_CS_fsm_state1079 = ap_CS_fsm.read()[1078];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state108() {
    ap_CS_fsm_state108 = ap_CS_fsm.read()[107];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1080() {
    ap_CS_fsm_state1080 = ap_CS_fsm.read()[1079];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1081() {
    ap_CS_fsm_state1081 = ap_CS_fsm.read()[1080];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1082() {
    ap_CS_fsm_state1082 = ap_CS_fsm.read()[1081];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1083() {
    ap_CS_fsm_state1083 = ap_CS_fsm.read()[1082];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1084() {
    ap_CS_fsm_state1084 = ap_CS_fsm.read()[1083];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1085() {
    ap_CS_fsm_state1085 = ap_CS_fsm.read()[1084];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1086() {
    ap_CS_fsm_state1086 = ap_CS_fsm.read()[1085];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1087() {
    ap_CS_fsm_state1087 = ap_CS_fsm.read()[1086];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1088() {
    ap_CS_fsm_state1088 = ap_CS_fsm.read()[1087];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1089() {
    ap_CS_fsm_state1089 = ap_CS_fsm.read()[1088];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state109() {
    ap_CS_fsm_state109 = ap_CS_fsm.read()[108];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1090() {
    ap_CS_fsm_state1090 = ap_CS_fsm.read()[1089];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1091() {
    ap_CS_fsm_state1091 = ap_CS_fsm.read()[1090];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1092() {
    ap_CS_fsm_state1092 = ap_CS_fsm.read()[1091];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1093() {
    ap_CS_fsm_state1093 = ap_CS_fsm.read()[1092];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1094() {
    ap_CS_fsm_state1094 = ap_CS_fsm.read()[1093];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1095() {
    ap_CS_fsm_state1095 = ap_CS_fsm.read()[1094];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1096() {
    ap_CS_fsm_state1096 = ap_CS_fsm.read()[1095];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1097() {
    ap_CS_fsm_state1097 = ap_CS_fsm.read()[1096];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1098() {
    ap_CS_fsm_state1098 = ap_CS_fsm.read()[1097];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1099() {
    ap_CS_fsm_state1099 = ap_CS_fsm.read()[1098];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state11() {
    ap_CS_fsm_state11 = ap_CS_fsm.read()[10];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state110() {
    ap_CS_fsm_state110 = ap_CS_fsm.read()[109];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1100() {
    ap_CS_fsm_state1100 = ap_CS_fsm.read()[1099];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1101() {
    ap_CS_fsm_state1101 = ap_CS_fsm.read()[1100];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1102() {
    ap_CS_fsm_state1102 = ap_CS_fsm.read()[1101];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1103() {
    ap_CS_fsm_state1103 = ap_CS_fsm.read()[1102];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1104() {
    ap_CS_fsm_state1104 = ap_CS_fsm.read()[1103];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1105() {
    ap_CS_fsm_state1105 = ap_CS_fsm.read()[1104];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1106() {
    ap_CS_fsm_state1106 = ap_CS_fsm.read()[1105];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1107() {
    ap_CS_fsm_state1107 = ap_CS_fsm.read()[1106];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1108() {
    ap_CS_fsm_state1108 = ap_CS_fsm.read()[1107];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1109() {
    ap_CS_fsm_state1109 = ap_CS_fsm.read()[1108];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state111() {
    ap_CS_fsm_state111 = ap_CS_fsm.read()[110];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1110() {
    ap_CS_fsm_state1110 = ap_CS_fsm.read()[1109];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1111() {
    ap_CS_fsm_state1111 = ap_CS_fsm.read()[1110];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1112() {
    ap_CS_fsm_state1112 = ap_CS_fsm.read()[1111];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1113() {
    ap_CS_fsm_state1113 = ap_CS_fsm.read()[1112];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1114() {
    ap_CS_fsm_state1114 = ap_CS_fsm.read()[1113];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1115() {
    ap_CS_fsm_state1115 = ap_CS_fsm.read()[1114];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1116() {
    ap_CS_fsm_state1116 = ap_CS_fsm.read()[1115];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1117() {
    ap_CS_fsm_state1117 = ap_CS_fsm.read()[1116];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1118() {
    ap_CS_fsm_state1118 = ap_CS_fsm.read()[1117];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1119() {
    ap_CS_fsm_state1119 = ap_CS_fsm.read()[1118];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state112() {
    ap_CS_fsm_state112 = ap_CS_fsm.read()[111];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1120() {
    ap_CS_fsm_state1120 = ap_CS_fsm.read()[1119];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1121() {
    ap_CS_fsm_state1121 = ap_CS_fsm.read()[1120];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1122() {
    ap_CS_fsm_state1122 = ap_CS_fsm.read()[1121];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1123() {
    ap_CS_fsm_state1123 = ap_CS_fsm.read()[1122];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1124() {
    ap_CS_fsm_state1124 = ap_CS_fsm.read()[1123];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1125() {
    ap_CS_fsm_state1125 = ap_CS_fsm.read()[1124];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1126() {
    ap_CS_fsm_state1126 = ap_CS_fsm.read()[1125];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1127() {
    ap_CS_fsm_state1127 = ap_CS_fsm.read()[1126];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1128() {
    ap_CS_fsm_state1128 = ap_CS_fsm.read()[1127];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1129() {
    ap_CS_fsm_state1129 = ap_CS_fsm.read()[1128];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state113() {
    ap_CS_fsm_state113 = ap_CS_fsm.read()[112];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1130() {
    ap_CS_fsm_state1130 = ap_CS_fsm.read()[1129];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1131() {
    ap_CS_fsm_state1131 = ap_CS_fsm.read()[1130];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1132() {
    ap_CS_fsm_state1132 = ap_CS_fsm.read()[1131];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1133() {
    ap_CS_fsm_state1133 = ap_CS_fsm.read()[1132];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1134() {
    ap_CS_fsm_state1134 = ap_CS_fsm.read()[1133];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1135() {
    ap_CS_fsm_state1135 = ap_CS_fsm.read()[1134];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1136() {
    ap_CS_fsm_state1136 = ap_CS_fsm.read()[1135];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1137() {
    ap_CS_fsm_state1137 = ap_CS_fsm.read()[1136];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1138() {
    ap_CS_fsm_state1138 = ap_CS_fsm.read()[1137];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1139() {
    ap_CS_fsm_state1139 = ap_CS_fsm.read()[1138];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state114() {
    ap_CS_fsm_state114 = ap_CS_fsm.read()[113];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1140() {
    ap_CS_fsm_state1140 = ap_CS_fsm.read()[1139];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1141() {
    ap_CS_fsm_state1141 = ap_CS_fsm.read()[1140];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1142() {
    ap_CS_fsm_state1142 = ap_CS_fsm.read()[1141];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1143() {
    ap_CS_fsm_state1143 = ap_CS_fsm.read()[1142];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1144() {
    ap_CS_fsm_state1144 = ap_CS_fsm.read()[1143];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1145() {
    ap_CS_fsm_state1145 = ap_CS_fsm.read()[1144];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1146() {
    ap_CS_fsm_state1146 = ap_CS_fsm.read()[1145];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1147() {
    ap_CS_fsm_state1147 = ap_CS_fsm.read()[1146];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1148() {
    ap_CS_fsm_state1148 = ap_CS_fsm.read()[1147];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1149() {
    ap_CS_fsm_state1149 = ap_CS_fsm.read()[1148];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state115() {
    ap_CS_fsm_state115 = ap_CS_fsm.read()[114];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1150() {
    ap_CS_fsm_state1150 = ap_CS_fsm.read()[1149];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1151() {
    ap_CS_fsm_state1151 = ap_CS_fsm.read()[1150];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1152() {
    ap_CS_fsm_state1152 = ap_CS_fsm.read()[1151];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1153() {
    ap_CS_fsm_state1153 = ap_CS_fsm.read()[1152];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1154() {
    ap_CS_fsm_state1154 = ap_CS_fsm.read()[1153];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1155() {
    ap_CS_fsm_state1155 = ap_CS_fsm.read()[1154];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1156() {
    ap_CS_fsm_state1156 = ap_CS_fsm.read()[1155];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1157() {
    ap_CS_fsm_state1157 = ap_CS_fsm.read()[1156];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1158() {
    ap_CS_fsm_state1158 = ap_CS_fsm.read()[1157];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1159() {
    ap_CS_fsm_state1159 = ap_CS_fsm.read()[1158];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state116() {
    ap_CS_fsm_state116 = ap_CS_fsm.read()[115];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1160() {
    ap_CS_fsm_state1160 = ap_CS_fsm.read()[1159];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1161() {
    ap_CS_fsm_state1161 = ap_CS_fsm.read()[1160];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1162() {
    ap_CS_fsm_state1162 = ap_CS_fsm.read()[1161];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1163() {
    ap_CS_fsm_state1163 = ap_CS_fsm.read()[1162];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1164() {
    ap_CS_fsm_state1164 = ap_CS_fsm.read()[1163];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1165() {
    ap_CS_fsm_state1165 = ap_CS_fsm.read()[1164];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1166() {
    ap_CS_fsm_state1166 = ap_CS_fsm.read()[1165];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1167() {
    ap_CS_fsm_state1167 = ap_CS_fsm.read()[1166];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1168() {
    ap_CS_fsm_state1168 = ap_CS_fsm.read()[1167];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1169() {
    ap_CS_fsm_state1169 = ap_CS_fsm.read()[1168];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state117() {
    ap_CS_fsm_state117 = ap_CS_fsm.read()[116];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1170() {
    ap_CS_fsm_state1170 = ap_CS_fsm.read()[1169];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1171() {
    ap_CS_fsm_state1171 = ap_CS_fsm.read()[1170];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1172() {
    ap_CS_fsm_state1172 = ap_CS_fsm.read()[1171];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1173() {
    ap_CS_fsm_state1173 = ap_CS_fsm.read()[1172];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1174() {
    ap_CS_fsm_state1174 = ap_CS_fsm.read()[1173];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1175() {
    ap_CS_fsm_state1175 = ap_CS_fsm.read()[1174];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1176() {
    ap_CS_fsm_state1176 = ap_CS_fsm.read()[1175];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1177() {
    ap_CS_fsm_state1177 = ap_CS_fsm.read()[1176];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1178() {
    ap_CS_fsm_state1178 = ap_CS_fsm.read()[1177];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1179() {
    ap_CS_fsm_state1179 = ap_CS_fsm.read()[1178];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state118() {
    ap_CS_fsm_state118 = ap_CS_fsm.read()[117];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1180() {
    ap_CS_fsm_state1180 = ap_CS_fsm.read()[1179];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1181() {
    ap_CS_fsm_state1181 = ap_CS_fsm.read()[1180];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1182() {
    ap_CS_fsm_state1182 = ap_CS_fsm.read()[1181];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1183() {
    ap_CS_fsm_state1183 = ap_CS_fsm.read()[1182];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1184() {
    ap_CS_fsm_state1184 = ap_CS_fsm.read()[1183];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1185() {
    ap_CS_fsm_state1185 = ap_CS_fsm.read()[1184];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1186() {
    ap_CS_fsm_state1186 = ap_CS_fsm.read()[1185];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1187() {
    ap_CS_fsm_state1187 = ap_CS_fsm.read()[1186];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1188() {
    ap_CS_fsm_state1188 = ap_CS_fsm.read()[1187];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1189() {
    ap_CS_fsm_state1189 = ap_CS_fsm.read()[1188];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state119() {
    ap_CS_fsm_state119 = ap_CS_fsm.read()[118];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1190() {
    ap_CS_fsm_state1190 = ap_CS_fsm.read()[1189];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1191() {
    ap_CS_fsm_state1191 = ap_CS_fsm.read()[1190];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1192() {
    ap_CS_fsm_state1192 = ap_CS_fsm.read()[1191];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1193() {
    ap_CS_fsm_state1193 = ap_CS_fsm.read()[1192];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1194() {
    ap_CS_fsm_state1194 = ap_CS_fsm.read()[1193];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1195() {
    ap_CS_fsm_state1195 = ap_CS_fsm.read()[1194];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1196() {
    ap_CS_fsm_state1196 = ap_CS_fsm.read()[1195];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1197() {
    ap_CS_fsm_state1197 = ap_CS_fsm.read()[1196];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1198() {
    ap_CS_fsm_state1198 = ap_CS_fsm.read()[1197];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1199() {
    ap_CS_fsm_state1199 = ap_CS_fsm.read()[1198];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state12() {
    ap_CS_fsm_state12 = ap_CS_fsm.read()[11];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state120() {
    ap_CS_fsm_state120 = ap_CS_fsm.read()[119];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1200() {
    ap_CS_fsm_state1200 = ap_CS_fsm.read()[1199];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1201() {
    ap_CS_fsm_state1201 = ap_CS_fsm.read()[1200];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1202() {
    ap_CS_fsm_state1202 = ap_CS_fsm.read()[1201];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1203() {
    ap_CS_fsm_state1203 = ap_CS_fsm.read()[1202];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1204() {
    ap_CS_fsm_state1204 = ap_CS_fsm.read()[1203];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1205() {
    ap_CS_fsm_state1205 = ap_CS_fsm.read()[1204];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1206() {
    ap_CS_fsm_state1206 = ap_CS_fsm.read()[1205];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1207() {
    ap_CS_fsm_state1207 = ap_CS_fsm.read()[1206];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1208() {
    ap_CS_fsm_state1208 = ap_CS_fsm.read()[1207];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1209() {
    ap_CS_fsm_state1209 = ap_CS_fsm.read()[1208];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state121() {
    ap_CS_fsm_state121 = ap_CS_fsm.read()[120];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1210() {
    ap_CS_fsm_state1210 = ap_CS_fsm.read()[1209];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1211() {
    ap_CS_fsm_state1211 = ap_CS_fsm.read()[1210];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1212() {
    ap_CS_fsm_state1212 = ap_CS_fsm.read()[1211];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1213() {
    ap_CS_fsm_state1213 = ap_CS_fsm.read()[1212];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1214() {
    ap_CS_fsm_state1214 = ap_CS_fsm.read()[1213];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1215() {
    ap_CS_fsm_state1215 = ap_CS_fsm.read()[1214];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1216() {
    ap_CS_fsm_state1216 = ap_CS_fsm.read()[1215];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1217() {
    ap_CS_fsm_state1217 = ap_CS_fsm.read()[1216];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1218() {
    ap_CS_fsm_state1218 = ap_CS_fsm.read()[1217];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1219() {
    ap_CS_fsm_state1219 = ap_CS_fsm.read()[1218];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state122() {
    ap_CS_fsm_state122 = ap_CS_fsm.read()[121];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1220() {
    ap_CS_fsm_state1220 = ap_CS_fsm.read()[1219];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1221() {
    ap_CS_fsm_state1221 = ap_CS_fsm.read()[1220];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1222() {
    ap_CS_fsm_state1222 = ap_CS_fsm.read()[1221];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1223() {
    ap_CS_fsm_state1223 = ap_CS_fsm.read()[1222];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1224() {
    ap_CS_fsm_state1224 = ap_CS_fsm.read()[1223];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1225() {
    ap_CS_fsm_state1225 = ap_CS_fsm.read()[1224];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1226() {
    ap_CS_fsm_state1226 = ap_CS_fsm.read()[1225];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1227() {
    ap_CS_fsm_state1227 = ap_CS_fsm.read()[1226];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1228() {
    ap_CS_fsm_state1228 = ap_CS_fsm.read()[1227];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1229() {
    ap_CS_fsm_state1229 = ap_CS_fsm.read()[1228];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state123() {
    ap_CS_fsm_state123 = ap_CS_fsm.read()[122];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1230() {
    ap_CS_fsm_state1230 = ap_CS_fsm.read()[1229];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1231() {
    ap_CS_fsm_state1231 = ap_CS_fsm.read()[1230];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1232() {
    ap_CS_fsm_state1232 = ap_CS_fsm.read()[1231];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1233() {
    ap_CS_fsm_state1233 = ap_CS_fsm.read()[1232];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1234() {
    ap_CS_fsm_state1234 = ap_CS_fsm.read()[1233];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1235() {
    ap_CS_fsm_state1235 = ap_CS_fsm.read()[1234];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1236() {
    ap_CS_fsm_state1236 = ap_CS_fsm.read()[1235];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1237() {
    ap_CS_fsm_state1237 = ap_CS_fsm.read()[1236];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1238() {
    ap_CS_fsm_state1238 = ap_CS_fsm.read()[1237];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1239() {
    ap_CS_fsm_state1239 = ap_CS_fsm.read()[1238];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state124() {
    ap_CS_fsm_state124 = ap_CS_fsm.read()[123];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1240() {
    ap_CS_fsm_state1240 = ap_CS_fsm.read()[1239];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1241() {
    ap_CS_fsm_state1241 = ap_CS_fsm.read()[1240];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1242() {
    ap_CS_fsm_state1242 = ap_CS_fsm.read()[1241];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1243() {
    ap_CS_fsm_state1243 = ap_CS_fsm.read()[1242];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1244() {
    ap_CS_fsm_state1244 = ap_CS_fsm.read()[1243];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1245() {
    ap_CS_fsm_state1245 = ap_CS_fsm.read()[1244];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1246() {
    ap_CS_fsm_state1246 = ap_CS_fsm.read()[1245];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1247() {
    ap_CS_fsm_state1247 = ap_CS_fsm.read()[1246];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1248() {
    ap_CS_fsm_state1248 = ap_CS_fsm.read()[1247];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1249() {
    ap_CS_fsm_state1249 = ap_CS_fsm.read()[1248];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state125() {
    ap_CS_fsm_state125 = ap_CS_fsm.read()[124];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1250() {
    ap_CS_fsm_state1250 = ap_CS_fsm.read()[1249];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1251() {
    ap_CS_fsm_state1251 = ap_CS_fsm.read()[1250];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1252() {
    ap_CS_fsm_state1252 = ap_CS_fsm.read()[1251];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1253() {
    ap_CS_fsm_state1253 = ap_CS_fsm.read()[1252];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1254() {
    ap_CS_fsm_state1254 = ap_CS_fsm.read()[1253];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1255() {
    ap_CS_fsm_state1255 = ap_CS_fsm.read()[1254];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1256() {
    ap_CS_fsm_state1256 = ap_CS_fsm.read()[1255];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1257() {
    ap_CS_fsm_state1257 = ap_CS_fsm.read()[1256];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1258() {
    ap_CS_fsm_state1258 = ap_CS_fsm.read()[1257];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1259() {
    ap_CS_fsm_state1259 = ap_CS_fsm.read()[1258];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state126() {
    ap_CS_fsm_state126 = ap_CS_fsm.read()[125];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1260() {
    ap_CS_fsm_state1260 = ap_CS_fsm.read()[1259];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1261() {
    ap_CS_fsm_state1261 = ap_CS_fsm.read()[1260];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1262() {
    ap_CS_fsm_state1262 = ap_CS_fsm.read()[1261];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1263() {
    ap_CS_fsm_state1263 = ap_CS_fsm.read()[1262];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1264() {
    ap_CS_fsm_state1264 = ap_CS_fsm.read()[1263];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1265() {
    ap_CS_fsm_state1265 = ap_CS_fsm.read()[1264];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1266() {
    ap_CS_fsm_state1266 = ap_CS_fsm.read()[1265];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1267() {
    ap_CS_fsm_state1267 = ap_CS_fsm.read()[1266];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1268() {
    ap_CS_fsm_state1268 = ap_CS_fsm.read()[1267];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1269() {
    ap_CS_fsm_state1269 = ap_CS_fsm.read()[1268];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state127() {
    ap_CS_fsm_state127 = ap_CS_fsm.read()[126];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1270() {
    ap_CS_fsm_state1270 = ap_CS_fsm.read()[1269];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1271() {
    ap_CS_fsm_state1271 = ap_CS_fsm.read()[1270];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1272() {
    ap_CS_fsm_state1272 = ap_CS_fsm.read()[1271];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1273() {
    ap_CS_fsm_state1273 = ap_CS_fsm.read()[1272];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1274() {
    ap_CS_fsm_state1274 = ap_CS_fsm.read()[1273];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1275() {
    ap_CS_fsm_state1275 = ap_CS_fsm.read()[1274];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1276() {
    ap_CS_fsm_state1276 = ap_CS_fsm.read()[1275];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1277() {
    ap_CS_fsm_state1277 = ap_CS_fsm.read()[1276];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1278() {
    ap_CS_fsm_state1278 = ap_CS_fsm.read()[1277];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1279() {
    ap_CS_fsm_state1279 = ap_CS_fsm.read()[1278];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state128() {
    ap_CS_fsm_state128 = ap_CS_fsm.read()[127];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1280() {
    ap_CS_fsm_state1280 = ap_CS_fsm.read()[1279];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1281() {
    ap_CS_fsm_state1281 = ap_CS_fsm.read()[1280];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1282() {
    ap_CS_fsm_state1282 = ap_CS_fsm.read()[1281];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1283() {
    ap_CS_fsm_state1283 = ap_CS_fsm.read()[1282];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1284() {
    ap_CS_fsm_state1284 = ap_CS_fsm.read()[1283];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1285() {
    ap_CS_fsm_state1285 = ap_CS_fsm.read()[1284];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1286() {
    ap_CS_fsm_state1286 = ap_CS_fsm.read()[1285];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1287() {
    ap_CS_fsm_state1287 = ap_CS_fsm.read()[1286];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1288() {
    ap_CS_fsm_state1288 = ap_CS_fsm.read()[1287];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1289() {
    ap_CS_fsm_state1289 = ap_CS_fsm.read()[1288];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state129() {
    ap_CS_fsm_state129 = ap_CS_fsm.read()[128];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1290() {
    ap_CS_fsm_state1290 = ap_CS_fsm.read()[1289];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1291() {
    ap_CS_fsm_state1291 = ap_CS_fsm.read()[1290];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1292() {
    ap_CS_fsm_state1292 = ap_CS_fsm.read()[1291];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1293() {
    ap_CS_fsm_state1293 = ap_CS_fsm.read()[1292];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1294() {
    ap_CS_fsm_state1294 = ap_CS_fsm.read()[1293];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1295() {
    ap_CS_fsm_state1295 = ap_CS_fsm.read()[1294];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1296() {
    ap_CS_fsm_state1296 = ap_CS_fsm.read()[1295];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1297() {
    ap_CS_fsm_state1297 = ap_CS_fsm.read()[1296];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1298() {
    ap_CS_fsm_state1298 = ap_CS_fsm.read()[1297];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1299() {
    ap_CS_fsm_state1299 = ap_CS_fsm.read()[1298];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state13() {
    ap_CS_fsm_state13 = ap_CS_fsm.read()[12];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state130() {
    ap_CS_fsm_state130 = ap_CS_fsm.read()[129];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1300() {
    ap_CS_fsm_state1300 = ap_CS_fsm.read()[1299];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1301() {
    ap_CS_fsm_state1301 = ap_CS_fsm.read()[1300];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1302() {
    ap_CS_fsm_state1302 = ap_CS_fsm.read()[1301];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1303() {
    ap_CS_fsm_state1303 = ap_CS_fsm.read()[1302];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1304() {
    ap_CS_fsm_state1304 = ap_CS_fsm.read()[1303];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1305() {
    ap_CS_fsm_state1305 = ap_CS_fsm.read()[1304];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1306() {
    ap_CS_fsm_state1306 = ap_CS_fsm.read()[1305];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1307() {
    ap_CS_fsm_state1307 = ap_CS_fsm.read()[1306];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1308() {
    ap_CS_fsm_state1308 = ap_CS_fsm.read()[1307];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1309() {
    ap_CS_fsm_state1309 = ap_CS_fsm.read()[1308];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state131() {
    ap_CS_fsm_state131 = ap_CS_fsm.read()[130];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1310() {
    ap_CS_fsm_state1310 = ap_CS_fsm.read()[1309];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1311() {
    ap_CS_fsm_state1311 = ap_CS_fsm.read()[1310];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1312() {
    ap_CS_fsm_state1312 = ap_CS_fsm.read()[1311];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1313() {
    ap_CS_fsm_state1313 = ap_CS_fsm.read()[1312];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1314() {
    ap_CS_fsm_state1314 = ap_CS_fsm.read()[1313];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1315() {
    ap_CS_fsm_state1315 = ap_CS_fsm.read()[1314];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1316() {
    ap_CS_fsm_state1316 = ap_CS_fsm.read()[1315];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1317() {
    ap_CS_fsm_state1317 = ap_CS_fsm.read()[1316];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1318() {
    ap_CS_fsm_state1318 = ap_CS_fsm.read()[1317];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1319() {
    ap_CS_fsm_state1319 = ap_CS_fsm.read()[1318];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state132() {
    ap_CS_fsm_state132 = ap_CS_fsm.read()[131];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1320() {
    ap_CS_fsm_state1320 = ap_CS_fsm.read()[1319];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1321() {
    ap_CS_fsm_state1321 = ap_CS_fsm.read()[1320];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1322() {
    ap_CS_fsm_state1322 = ap_CS_fsm.read()[1321];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1323() {
    ap_CS_fsm_state1323 = ap_CS_fsm.read()[1322];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1324() {
    ap_CS_fsm_state1324 = ap_CS_fsm.read()[1323];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1325() {
    ap_CS_fsm_state1325 = ap_CS_fsm.read()[1324];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1326() {
    ap_CS_fsm_state1326 = ap_CS_fsm.read()[1325];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1327() {
    ap_CS_fsm_state1327 = ap_CS_fsm.read()[1326];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1328() {
    ap_CS_fsm_state1328 = ap_CS_fsm.read()[1327];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1329() {
    ap_CS_fsm_state1329 = ap_CS_fsm.read()[1328];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state133() {
    ap_CS_fsm_state133 = ap_CS_fsm.read()[132];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1330() {
    ap_CS_fsm_state1330 = ap_CS_fsm.read()[1329];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1331() {
    ap_CS_fsm_state1331 = ap_CS_fsm.read()[1330];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1332() {
    ap_CS_fsm_state1332 = ap_CS_fsm.read()[1331];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1333() {
    ap_CS_fsm_state1333 = ap_CS_fsm.read()[1332];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1334() {
    ap_CS_fsm_state1334 = ap_CS_fsm.read()[1333];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1335() {
    ap_CS_fsm_state1335 = ap_CS_fsm.read()[1334];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1336() {
    ap_CS_fsm_state1336 = ap_CS_fsm.read()[1335];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1337() {
    ap_CS_fsm_state1337 = ap_CS_fsm.read()[1336];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1338() {
    ap_CS_fsm_state1338 = ap_CS_fsm.read()[1337];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1339() {
    ap_CS_fsm_state1339 = ap_CS_fsm.read()[1338];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state134() {
    ap_CS_fsm_state134 = ap_CS_fsm.read()[133];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1340() {
    ap_CS_fsm_state1340 = ap_CS_fsm.read()[1339];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1341() {
    ap_CS_fsm_state1341 = ap_CS_fsm.read()[1340];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1342() {
    ap_CS_fsm_state1342 = ap_CS_fsm.read()[1341];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1343() {
    ap_CS_fsm_state1343 = ap_CS_fsm.read()[1342];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1344() {
    ap_CS_fsm_state1344 = ap_CS_fsm.read()[1343];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1345() {
    ap_CS_fsm_state1345 = ap_CS_fsm.read()[1344];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1346() {
    ap_CS_fsm_state1346 = ap_CS_fsm.read()[1345];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1347() {
    ap_CS_fsm_state1347 = ap_CS_fsm.read()[1346];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1348() {
    ap_CS_fsm_state1348 = ap_CS_fsm.read()[1347];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1349() {
    ap_CS_fsm_state1349 = ap_CS_fsm.read()[1348];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state135() {
    ap_CS_fsm_state135 = ap_CS_fsm.read()[134];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1350() {
    ap_CS_fsm_state1350 = ap_CS_fsm.read()[1349];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1351() {
    ap_CS_fsm_state1351 = ap_CS_fsm.read()[1350];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1352() {
    ap_CS_fsm_state1352 = ap_CS_fsm.read()[1351];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1353() {
    ap_CS_fsm_state1353 = ap_CS_fsm.read()[1352];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1354() {
    ap_CS_fsm_state1354 = ap_CS_fsm.read()[1353];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1355() {
    ap_CS_fsm_state1355 = ap_CS_fsm.read()[1354];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1356() {
    ap_CS_fsm_state1356 = ap_CS_fsm.read()[1355];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1357() {
    ap_CS_fsm_state1357 = ap_CS_fsm.read()[1356];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1358() {
    ap_CS_fsm_state1358 = ap_CS_fsm.read()[1357];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1359() {
    ap_CS_fsm_state1359 = ap_CS_fsm.read()[1358];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state136() {
    ap_CS_fsm_state136 = ap_CS_fsm.read()[135];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1360() {
    ap_CS_fsm_state1360 = ap_CS_fsm.read()[1359];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1361() {
    ap_CS_fsm_state1361 = ap_CS_fsm.read()[1360];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1362() {
    ap_CS_fsm_state1362 = ap_CS_fsm.read()[1361];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1363() {
    ap_CS_fsm_state1363 = ap_CS_fsm.read()[1362];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1364() {
    ap_CS_fsm_state1364 = ap_CS_fsm.read()[1363];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1365() {
    ap_CS_fsm_state1365 = ap_CS_fsm.read()[1364];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1366() {
    ap_CS_fsm_state1366 = ap_CS_fsm.read()[1365];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1367() {
    ap_CS_fsm_state1367 = ap_CS_fsm.read()[1366];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1368() {
    ap_CS_fsm_state1368 = ap_CS_fsm.read()[1367];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1369() {
    ap_CS_fsm_state1369 = ap_CS_fsm.read()[1368];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state137() {
    ap_CS_fsm_state137 = ap_CS_fsm.read()[136];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1370() {
    ap_CS_fsm_state1370 = ap_CS_fsm.read()[1369];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1371() {
    ap_CS_fsm_state1371 = ap_CS_fsm.read()[1370];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1372() {
    ap_CS_fsm_state1372 = ap_CS_fsm.read()[1371];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1373() {
    ap_CS_fsm_state1373 = ap_CS_fsm.read()[1372];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1374() {
    ap_CS_fsm_state1374 = ap_CS_fsm.read()[1373];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1375() {
    ap_CS_fsm_state1375 = ap_CS_fsm.read()[1374];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1376() {
    ap_CS_fsm_state1376 = ap_CS_fsm.read()[1375];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1377() {
    ap_CS_fsm_state1377 = ap_CS_fsm.read()[1376];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1378() {
    ap_CS_fsm_state1378 = ap_CS_fsm.read()[1377];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1379() {
    ap_CS_fsm_state1379 = ap_CS_fsm.read()[1378];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state138() {
    ap_CS_fsm_state138 = ap_CS_fsm.read()[137];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1380() {
    ap_CS_fsm_state1380 = ap_CS_fsm.read()[1379];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1381() {
    ap_CS_fsm_state1381 = ap_CS_fsm.read()[1380];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1382() {
    ap_CS_fsm_state1382 = ap_CS_fsm.read()[1381];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1383() {
    ap_CS_fsm_state1383 = ap_CS_fsm.read()[1382];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1384() {
    ap_CS_fsm_state1384 = ap_CS_fsm.read()[1383];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1385() {
    ap_CS_fsm_state1385 = ap_CS_fsm.read()[1384];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1386() {
    ap_CS_fsm_state1386 = ap_CS_fsm.read()[1385];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1387() {
    ap_CS_fsm_state1387 = ap_CS_fsm.read()[1386];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1388() {
    ap_CS_fsm_state1388 = ap_CS_fsm.read()[1387];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1389() {
    ap_CS_fsm_state1389 = ap_CS_fsm.read()[1388];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state139() {
    ap_CS_fsm_state139 = ap_CS_fsm.read()[138];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1390() {
    ap_CS_fsm_state1390 = ap_CS_fsm.read()[1389];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1391() {
    ap_CS_fsm_state1391 = ap_CS_fsm.read()[1390];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1392() {
    ap_CS_fsm_state1392 = ap_CS_fsm.read()[1391];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1393() {
    ap_CS_fsm_state1393 = ap_CS_fsm.read()[1392];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1394() {
    ap_CS_fsm_state1394 = ap_CS_fsm.read()[1393];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1395() {
    ap_CS_fsm_state1395 = ap_CS_fsm.read()[1394];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1396() {
    ap_CS_fsm_state1396 = ap_CS_fsm.read()[1395];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1397() {
    ap_CS_fsm_state1397 = ap_CS_fsm.read()[1396];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1398() {
    ap_CS_fsm_state1398 = ap_CS_fsm.read()[1397];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1399() {
    ap_CS_fsm_state1399 = ap_CS_fsm.read()[1398];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state14() {
    ap_CS_fsm_state14 = ap_CS_fsm.read()[13];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state140() {
    ap_CS_fsm_state140 = ap_CS_fsm.read()[139];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1400() {
    ap_CS_fsm_state1400 = ap_CS_fsm.read()[1399];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1401() {
    ap_CS_fsm_state1401 = ap_CS_fsm.read()[1400];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1402() {
    ap_CS_fsm_state1402 = ap_CS_fsm.read()[1401];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1403() {
    ap_CS_fsm_state1403 = ap_CS_fsm.read()[1402];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1404() {
    ap_CS_fsm_state1404 = ap_CS_fsm.read()[1403];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1405() {
    ap_CS_fsm_state1405 = ap_CS_fsm.read()[1404];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1406() {
    ap_CS_fsm_state1406 = ap_CS_fsm.read()[1405];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1407() {
    ap_CS_fsm_state1407 = ap_CS_fsm.read()[1406];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1408() {
    ap_CS_fsm_state1408 = ap_CS_fsm.read()[1407];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1409() {
    ap_CS_fsm_state1409 = ap_CS_fsm.read()[1408];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state141() {
    ap_CS_fsm_state141 = ap_CS_fsm.read()[140];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1410() {
    ap_CS_fsm_state1410 = ap_CS_fsm.read()[1409];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1411() {
    ap_CS_fsm_state1411 = ap_CS_fsm.read()[1410];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1412() {
    ap_CS_fsm_state1412 = ap_CS_fsm.read()[1411];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1413() {
    ap_CS_fsm_state1413 = ap_CS_fsm.read()[1412];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1414() {
    ap_CS_fsm_state1414 = ap_CS_fsm.read()[1413];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1415() {
    ap_CS_fsm_state1415 = ap_CS_fsm.read()[1414];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1416() {
    ap_CS_fsm_state1416 = ap_CS_fsm.read()[1415];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1417() {
    ap_CS_fsm_state1417 = ap_CS_fsm.read()[1416];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1418() {
    ap_CS_fsm_state1418 = ap_CS_fsm.read()[1417];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1419() {
    ap_CS_fsm_state1419 = ap_CS_fsm.read()[1418];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state142() {
    ap_CS_fsm_state142 = ap_CS_fsm.read()[141];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1420() {
    ap_CS_fsm_state1420 = ap_CS_fsm.read()[1419];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1421() {
    ap_CS_fsm_state1421 = ap_CS_fsm.read()[1420];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1422() {
    ap_CS_fsm_state1422 = ap_CS_fsm.read()[1421];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1423() {
    ap_CS_fsm_state1423 = ap_CS_fsm.read()[1422];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1424() {
    ap_CS_fsm_state1424 = ap_CS_fsm.read()[1423];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1425() {
    ap_CS_fsm_state1425 = ap_CS_fsm.read()[1424];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1426() {
    ap_CS_fsm_state1426 = ap_CS_fsm.read()[1425];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1427() {
    ap_CS_fsm_state1427 = ap_CS_fsm.read()[1426];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1428() {
    ap_CS_fsm_state1428 = ap_CS_fsm.read()[1427];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1429() {
    ap_CS_fsm_state1429 = ap_CS_fsm.read()[1428];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state143() {
    ap_CS_fsm_state143 = ap_CS_fsm.read()[142];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1430() {
    ap_CS_fsm_state1430 = ap_CS_fsm.read()[1429];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1431() {
    ap_CS_fsm_state1431 = ap_CS_fsm.read()[1430];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1432() {
    ap_CS_fsm_state1432 = ap_CS_fsm.read()[1431];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1433() {
    ap_CS_fsm_state1433 = ap_CS_fsm.read()[1432];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1434() {
    ap_CS_fsm_state1434 = ap_CS_fsm.read()[1433];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1435() {
    ap_CS_fsm_state1435 = ap_CS_fsm.read()[1434];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1436() {
    ap_CS_fsm_state1436 = ap_CS_fsm.read()[1435];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1437() {
    ap_CS_fsm_state1437 = ap_CS_fsm.read()[1436];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1438() {
    ap_CS_fsm_state1438 = ap_CS_fsm.read()[1437];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1439() {
    ap_CS_fsm_state1439 = ap_CS_fsm.read()[1438];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state144() {
    ap_CS_fsm_state144 = ap_CS_fsm.read()[143];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1440() {
    ap_CS_fsm_state1440 = ap_CS_fsm.read()[1439];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1441() {
    ap_CS_fsm_state1441 = ap_CS_fsm.read()[1440];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1442() {
    ap_CS_fsm_state1442 = ap_CS_fsm.read()[1441];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1443() {
    ap_CS_fsm_state1443 = ap_CS_fsm.read()[1442];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1444() {
    ap_CS_fsm_state1444 = ap_CS_fsm.read()[1443];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1445() {
    ap_CS_fsm_state1445 = ap_CS_fsm.read()[1444];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1446() {
    ap_CS_fsm_state1446 = ap_CS_fsm.read()[1445];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1447() {
    ap_CS_fsm_state1447 = ap_CS_fsm.read()[1446];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1448() {
    ap_CS_fsm_state1448 = ap_CS_fsm.read()[1447];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1449() {
    ap_CS_fsm_state1449 = ap_CS_fsm.read()[1448];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state145() {
    ap_CS_fsm_state145 = ap_CS_fsm.read()[144];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1450() {
    ap_CS_fsm_state1450 = ap_CS_fsm.read()[1449];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1451() {
    ap_CS_fsm_state1451 = ap_CS_fsm.read()[1450];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1452() {
    ap_CS_fsm_state1452 = ap_CS_fsm.read()[1451];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1453() {
    ap_CS_fsm_state1453 = ap_CS_fsm.read()[1452];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1454() {
    ap_CS_fsm_state1454 = ap_CS_fsm.read()[1453];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1455() {
    ap_CS_fsm_state1455 = ap_CS_fsm.read()[1454];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1456() {
    ap_CS_fsm_state1456 = ap_CS_fsm.read()[1455];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1457() {
    ap_CS_fsm_state1457 = ap_CS_fsm.read()[1456];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1458() {
    ap_CS_fsm_state1458 = ap_CS_fsm.read()[1457];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1459() {
    ap_CS_fsm_state1459 = ap_CS_fsm.read()[1458];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state146() {
    ap_CS_fsm_state146 = ap_CS_fsm.read()[145];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1460() {
    ap_CS_fsm_state1460 = ap_CS_fsm.read()[1459];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1461() {
    ap_CS_fsm_state1461 = ap_CS_fsm.read()[1460];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1462() {
    ap_CS_fsm_state1462 = ap_CS_fsm.read()[1461];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1463() {
    ap_CS_fsm_state1463 = ap_CS_fsm.read()[1462];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1464() {
    ap_CS_fsm_state1464 = ap_CS_fsm.read()[1463];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1465() {
    ap_CS_fsm_state1465 = ap_CS_fsm.read()[1464];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1466() {
    ap_CS_fsm_state1466 = ap_CS_fsm.read()[1465];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1467() {
    ap_CS_fsm_state1467 = ap_CS_fsm.read()[1466];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1468() {
    ap_CS_fsm_state1468 = ap_CS_fsm.read()[1467];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1469() {
    ap_CS_fsm_state1469 = ap_CS_fsm.read()[1468];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state147() {
    ap_CS_fsm_state147 = ap_CS_fsm.read()[146];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1470() {
    ap_CS_fsm_state1470 = ap_CS_fsm.read()[1469];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1471() {
    ap_CS_fsm_state1471 = ap_CS_fsm.read()[1470];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1472() {
    ap_CS_fsm_state1472 = ap_CS_fsm.read()[1471];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1473() {
    ap_CS_fsm_state1473 = ap_CS_fsm.read()[1472];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1474() {
    ap_CS_fsm_state1474 = ap_CS_fsm.read()[1473];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1475() {
    ap_CS_fsm_state1475 = ap_CS_fsm.read()[1474];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1476() {
    ap_CS_fsm_state1476 = ap_CS_fsm.read()[1475];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1477() {
    ap_CS_fsm_state1477 = ap_CS_fsm.read()[1476];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1478() {
    ap_CS_fsm_state1478 = ap_CS_fsm.read()[1477];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1479() {
    ap_CS_fsm_state1479 = ap_CS_fsm.read()[1478];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state148() {
    ap_CS_fsm_state148 = ap_CS_fsm.read()[147];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1480() {
    ap_CS_fsm_state1480 = ap_CS_fsm.read()[1479];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1481() {
    ap_CS_fsm_state1481 = ap_CS_fsm.read()[1480];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1482() {
    ap_CS_fsm_state1482 = ap_CS_fsm.read()[1481];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1483() {
    ap_CS_fsm_state1483 = ap_CS_fsm.read()[1482];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1484() {
    ap_CS_fsm_state1484 = ap_CS_fsm.read()[1483];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1485() {
    ap_CS_fsm_state1485 = ap_CS_fsm.read()[1484];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1486() {
    ap_CS_fsm_state1486 = ap_CS_fsm.read()[1485];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1487() {
    ap_CS_fsm_state1487 = ap_CS_fsm.read()[1486];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1488() {
    ap_CS_fsm_state1488 = ap_CS_fsm.read()[1487];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1489() {
    ap_CS_fsm_state1489 = ap_CS_fsm.read()[1488];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state149() {
    ap_CS_fsm_state149 = ap_CS_fsm.read()[148];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1490() {
    ap_CS_fsm_state1490 = ap_CS_fsm.read()[1489];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1491() {
    ap_CS_fsm_state1491 = ap_CS_fsm.read()[1490];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1492() {
    ap_CS_fsm_state1492 = ap_CS_fsm.read()[1491];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1493() {
    ap_CS_fsm_state1493 = ap_CS_fsm.read()[1492];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1494() {
    ap_CS_fsm_state1494 = ap_CS_fsm.read()[1493];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1495() {
    ap_CS_fsm_state1495 = ap_CS_fsm.read()[1494];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1496() {
    ap_CS_fsm_state1496 = ap_CS_fsm.read()[1495];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1497() {
    ap_CS_fsm_state1497 = ap_CS_fsm.read()[1496];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1498() {
    ap_CS_fsm_state1498 = ap_CS_fsm.read()[1497];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1499() {
    ap_CS_fsm_state1499 = ap_CS_fsm.read()[1498];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state15() {
    ap_CS_fsm_state15 = ap_CS_fsm.read()[14];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state150() {
    ap_CS_fsm_state150 = ap_CS_fsm.read()[149];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1500() {
    ap_CS_fsm_state1500 = ap_CS_fsm.read()[1499];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1501() {
    ap_CS_fsm_state1501 = ap_CS_fsm.read()[1500];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1502() {
    ap_CS_fsm_state1502 = ap_CS_fsm.read()[1501];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1503() {
    ap_CS_fsm_state1503 = ap_CS_fsm.read()[1502];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1504() {
    ap_CS_fsm_state1504 = ap_CS_fsm.read()[1503];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1505() {
    ap_CS_fsm_state1505 = ap_CS_fsm.read()[1504];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1506() {
    ap_CS_fsm_state1506 = ap_CS_fsm.read()[1505];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1507() {
    ap_CS_fsm_state1507 = ap_CS_fsm.read()[1506];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1508() {
    ap_CS_fsm_state1508 = ap_CS_fsm.read()[1507];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1509() {
    ap_CS_fsm_state1509 = ap_CS_fsm.read()[1508];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state151() {
    ap_CS_fsm_state151 = ap_CS_fsm.read()[150];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1510() {
    ap_CS_fsm_state1510 = ap_CS_fsm.read()[1509];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1511() {
    ap_CS_fsm_state1511 = ap_CS_fsm.read()[1510];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1512() {
    ap_CS_fsm_state1512 = ap_CS_fsm.read()[1511];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1513() {
    ap_CS_fsm_state1513 = ap_CS_fsm.read()[1512];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1514() {
    ap_CS_fsm_state1514 = ap_CS_fsm.read()[1513];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1515() {
    ap_CS_fsm_state1515 = ap_CS_fsm.read()[1514];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1516() {
    ap_CS_fsm_state1516 = ap_CS_fsm.read()[1515];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1517() {
    ap_CS_fsm_state1517 = ap_CS_fsm.read()[1516];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1518() {
    ap_CS_fsm_state1518 = ap_CS_fsm.read()[1517];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1519() {
    ap_CS_fsm_state1519 = ap_CS_fsm.read()[1518];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state152() {
    ap_CS_fsm_state152 = ap_CS_fsm.read()[151];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1520() {
    ap_CS_fsm_state1520 = ap_CS_fsm.read()[1519];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1521() {
    ap_CS_fsm_state1521 = ap_CS_fsm.read()[1520];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1522() {
    ap_CS_fsm_state1522 = ap_CS_fsm.read()[1521];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1523() {
    ap_CS_fsm_state1523 = ap_CS_fsm.read()[1522];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1524() {
    ap_CS_fsm_state1524 = ap_CS_fsm.read()[1523];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1525() {
    ap_CS_fsm_state1525 = ap_CS_fsm.read()[1524];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1526() {
    ap_CS_fsm_state1526 = ap_CS_fsm.read()[1525];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1527() {
    ap_CS_fsm_state1527 = ap_CS_fsm.read()[1526];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1528() {
    ap_CS_fsm_state1528 = ap_CS_fsm.read()[1527];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1529() {
    ap_CS_fsm_state1529 = ap_CS_fsm.read()[1528];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state153() {
    ap_CS_fsm_state153 = ap_CS_fsm.read()[152];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1530() {
    ap_CS_fsm_state1530 = ap_CS_fsm.read()[1529];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1531() {
    ap_CS_fsm_state1531 = ap_CS_fsm.read()[1530];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1532() {
    ap_CS_fsm_state1532 = ap_CS_fsm.read()[1531];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1533() {
    ap_CS_fsm_state1533 = ap_CS_fsm.read()[1532];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1534() {
    ap_CS_fsm_state1534 = ap_CS_fsm.read()[1533];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1535() {
    ap_CS_fsm_state1535 = ap_CS_fsm.read()[1534];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1536() {
    ap_CS_fsm_state1536 = ap_CS_fsm.read()[1535];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1537() {
    ap_CS_fsm_state1537 = ap_CS_fsm.read()[1536];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1538() {
    ap_CS_fsm_state1538 = ap_CS_fsm.read()[1537];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1539() {
    ap_CS_fsm_state1539 = ap_CS_fsm.read()[1538];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state154() {
    ap_CS_fsm_state154 = ap_CS_fsm.read()[153];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1540() {
    ap_CS_fsm_state1540 = ap_CS_fsm.read()[1539];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1541() {
    ap_CS_fsm_state1541 = ap_CS_fsm.read()[1540];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1542() {
    ap_CS_fsm_state1542 = ap_CS_fsm.read()[1541];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1543() {
    ap_CS_fsm_state1543 = ap_CS_fsm.read()[1542];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1544() {
    ap_CS_fsm_state1544 = ap_CS_fsm.read()[1543];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1545() {
    ap_CS_fsm_state1545 = ap_CS_fsm.read()[1544];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1546() {
    ap_CS_fsm_state1546 = ap_CS_fsm.read()[1545];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1547() {
    ap_CS_fsm_state1547 = ap_CS_fsm.read()[1546];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1548() {
    ap_CS_fsm_state1548 = ap_CS_fsm.read()[1547];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1549() {
    ap_CS_fsm_state1549 = ap_CS_fsm.read()[1548];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state155() {
    ap_CS_fsm_state155 = ap_CS_fsm.read()[154];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1550() {
    ap_CS_fsm_state1550 = ap_CS_fsm.read()[1549];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1551() {
    ap_CS_fsm_state1551 = ap_CS_fsm.read()[1550];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1552() {
    ap_CS_fsm_state1552 = ap_CS_fsm.read()[1551];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1553() {
    ap_CS_fsm_state1553 = ap_CS_fsm.read()[1552];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1554() {
    ap_CS_fsm_state1554 = ap_CS_fsm.read()[1553];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1555() {
    ap_CS_fsm_state1555 = ap_CS_fsm.read()[1554];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1556() {
    ap_CS_fsm_state1556 = ap_CS_fsm.read()[1555];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1557() {
    ap_CS_fsm_state1557 = ap_CS_fsm.read()[1556];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1558() {
    ap_CS_fsm_state1558 = ap_CS_fsm.read()[1557];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1559() {
    ap_CS_fsm_state1559 = ap_CS_fsm.read()[1558];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state156() {
    ap_CS_fsm_state156 = ap_CS_fsm.read()[155];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1560() {
    ap_CS_fsm_state1560 = ap_CS_fsm.read()[1559];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1561() {
    ap_CS_fsm_state1561 = ap_CS_fsm.read()[1560];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1562() {
    ap_CS_fsm_state1562 = ap_CS_fsm.read()[1561];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1563() {
    ap_CS_fsm_state1563 = ap_CS_fsm.read()[1562];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1564() {
    ap_CS_fsm_state1564 = ap_CS_fsm.read()[1563];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1565() {
    ap_CS_fsm_state1565 = ap_CS_fsm.read()[1564];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1566() {
    ap_CS_fsm_state1566 = ap_CS_fsm.read()[1565];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1567() {
    ap_CS_fsm_state1567 = ap_CS_fsm.read()[1566];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1568() {
    ap_CS_fsm_state1568 = ap_CS_fsm.read()[1567];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1569() {
    ap_CS_fsm_state1569 = ap_CS_fsm.read()[1568];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state157() {
    ap_CS_fsm_state157 = ap_CS_fsm.read()[156];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1570() {
    ap_CS_fsm_state1570 = ap_CS_fsm.read()[1569];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1571() {
    ap_CS_fsm_state1571 = ap_CS_fsm.read()[1570];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1572() {
    ap_CS_fsm_state1572 = ap_CS_fsm.read()[1571];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1573() {
    ap_CS_fsm_state1573 = ap_CS_fsm.read()[1572];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1574() {
    ap_CS_fsm_state1574 = ap_CS_fsm.read()[1573];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1575() {
    ap_CS_fsm_state1575 = ap_CS_fsm.read()[1574];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1576() {
    ap_CS_fsm_state1576 = ap_CS_fsm.read()[1575];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1577() {
    ap_CS_fsm_state1577 = ap_CS_fsm.read()[1576];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1578() {
    ap_CS_fsm_state1578 = ap_CS_fsm.read()[1577];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1579() {
    ap_CS_fsm_state1579 = ap_CS_fsm.read()[1578];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state158() {
    ap_CS_fsm_state158 = ap_CS_fsm.read()[157];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1580() {
    ap_CS_fsm_state1580 = ap_CS_fsm.read()[1579];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1581() {
    ap_CS_fsm_state1581 = ap_CS_fsm.read()[1580];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1582() {
    ap_CS_fsm_state1582 = ap_CS_fsm.read()[1581];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1583() {
    ap_CS_fsm_state1583 = ap_CS_fsm.read()[1582];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1584() {
    ap_CS_fsm_state1584 = ap_CS_fsm.read()[1583];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1585() {
    ap_CS_fsm_state1585 = ap_CS_fsm.read()[1584];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1586() {
    ap_CS_fsm_state1586 = ap_CS_fsm.read()[1585];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1587() {
    ap_CS_fsm_state1587 = ap_CS_fsm.read()[1586];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1588() {
    ap_CS_fsm_state1588 = ap_CS_fsm.read()[1587];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1589() {
    ap_CS_fsm_state1589 = ap_CS_fsm.read()[1588];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state159() {
    ap_CS_fsm_state159 = ap_CS_fsm.read()[158];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1590() {
    ap_CS_fsm_state1590 = ap_CS_fsm.read()[1589];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1591() {
    ap_CS_fsm_state1591 = ap_CS_fsm.read()[1590];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1592() {
    ap_CS_fsm_state1592 = ap_CS_fsm.read()[1591];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1593() {
    ap_CS_fsm_state1593 = ap_CS_fsm.read()[1592];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1594() {
    ap_CS_fsm_state1594 = ap_CS_fsm.read()[1593];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1595() {
    ap_CS_fsm_state1595 = ap_CS_fsm.read()[1594];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1596() {
    ap_CS_fsm_state1596 = ap_CS_fsm.read()[1595];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1597() {
    ap_CS_fsm_state1597 = ap_CS_fsm.read()[1596];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1598() {
    ap_CS_fsm_state1598 = ap_CS_fsm.read()[1597];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1599() {
    ap_CS_fsm_state1599 = ap_CS_fsm.read()[1598];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state16() {
    ap_CS_fsm_state16 = ap_CS_fsm.read()[15];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state160() {
    ap_CS_fsm_state160 = ap_CS_fsm.read()[159];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1600() {
    ap_CS_fsm_state1600 = ap_CS_fsm.read()[1599];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1601() {
    ap_CS_fsm_state1601 = ap_CS_fsm.read()[1600];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1602() {
    ap_CS_fsm_state1602 = ap_CS_fsm.read()[1601];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1603() {
    ap_CS_fsm_state1603 = ap_CS_fsm.read()[1602];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1604() {
    ap_CS_fsm_state1604 = ap_CS_fsm.read()[1603];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1605() {
    ap_CS_fsm_state1605 = ap_CS_fsm.read()[1604];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1606() {
    ap_CS_fsm_state1606 = ap_CS_fsm.read()[1605];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1607() {
    ap_CS_fsm_state1607 = ap_CS_fsm.read()[1606];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1608() {
    ap_CS_fsm_state1608 = ap_CS_fsm.read()[1607];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1609() {
    ap_CS_fsm_state1609 = ap_CS_fsm.read()[1608];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state161() {
    ap_CS_fsm_state161 = ap_CS_fsm.read()[160];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1610() {
    ap_CS_fsm_state1610 = ap_CS_fsm.read()[1609];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1611() {
    ap_CS_fsm_state1611 = ap_CS_fsm.read()[1610];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1612() {
    ap_CS_fsm_state1612 = ap_CS_fsm.read()[1611];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1613() {
    ap_CS_fsm_state1613 = ap_CS_fsm.read()[1612];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1614() {
    ap_CS_fsm_state1614 = ap_CS_fsm.read()[1613];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1615() {
    ap_CS_fsm_state1615 = ap_CS_fsm.read()[1614];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1616() {
    ap_CS_fsm_state1616 = ap_CS_fsm.read()[1615];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1617() {
    ap_CS_fsm_state1617 = ap_CS_fsm.read()[1616];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1618() {
    ap_CS_fsm_state1618 = ap_CS_fsm.read()[1617];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1619() {
    ap_CS_fsm_state1619 = ap_CS_fsm.read()[1618];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state162() {
    ap_CS_fsm_state162 = ap_CS_fsm.read()[161];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1620() {
    ap_CS_fsm_state1620 = ap_CS_fsm.read()[1619];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1621() {
    ap_CS_fsm_state1621 = ap_CS_fsm.read()[1620];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1622() {
    ap_CS_fsm_state1622 = ap_CS_fsm.read()[1621];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1623() {
    ap_CS_fsm_state1623 = ap_CS_fsm.read()[1622];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1624() {
    ap_CS_fsm_state1624 = ap_CS_fsm.read()[1623];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1625() {
    ap_CS_fsm_state1625 = ap_CS_fsm.read()[1624];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1626() {
    ap_CS_fsm_state1626 = ap_CS_fsm.read()[1625];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1627() {
    ap_CS_fsm_state1627 = ap_CS_fsm.read()[1626];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1628() {
    ap_CS_fsm_state1628 = ap_CS_fsm.read()[1627];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1629() {
    ap_CS_fsm_state1629 = ap_CS_fsm.read()[1628];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state163() {
    ap_CS_fsm_state163 = ap_CS_fsm.read()[162];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1630() {
    ap_CS_fsm_state1630 = ap_CS_fsm.read()[1629];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1631() {
    ap_CS_fsm_state1631 = ap_CS_fsm.read()[1630];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1632() {
    ap_CS_fsm_state1632 = ap_CS_fsm.read()[1631];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1633() {
    ap_CS_fsm_state1633 = ap_CS_fsm.read()[1632];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1634() {
    ap_CS_fsm_state1634 = ap_CS_fsm.read()[1633];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1635() {
    ap_CS_fsm_state1635 = ap_CS_fsm.read()[1634];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1636() {
    ap_CS_fsm_state1636 = ap_CS_fsm.read()[1635];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1637() {
    ap_CS_fsm_state1637 = ap_CS_fsm.read()[1636];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1638() {
    ap_CS_fsm_state1638 = ap_CS_fsm.read()[1637];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1639() {
    ap_CS_fsm_state1639 = ap_CS_fsm.read()[1638];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state164() {
    ap_CS_fsm_state164 = ap_CS_fsm.read()[163];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1640() {
    ap_CS_fsm_state1640 = ap_CS_fsm.read()[1639];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1641() {
    ap_CS_fsm_state1641 = ap_CS_fsm.read()[1640];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1642() {
    ap_CS_fsm_state1642 = ap_CS_fsm.read()[1641];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1643() {
    ap_CS_fsm_state1643 = ap_CS_fsm.read()[1642];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1644() {
    ap_CS_fsm_state1644 = ap_CS_fsm.read()[1643];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1645() {
    ap_CS_fsm_state1645 = ap_CS_fsm.read()[1644];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1646() {
    ap_CS_fsm_state1646 = ap_CS_fsm.read()[1645];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1647() {
    ap_CS_fsm_state1647 = ap_CS_fsm.read()[1646];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1648() {
    ap_CS_fsm_state1648 = ap_CS_fsm.read()[1647];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1649() {
    ap_CS_fsm_state1649 = ap_CS_fsm.read()[1648];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state165() {
    ap_CS_fsm_state165 = ap_CS_fsm.read()[164];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1650() {
    ap_CS_fsm_state1650 = ap_CS_fsm.read()[1649];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1651() {
    ap_CS_fsm_state1651 = ap_CS_fsm.read()[1650];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1652() {
    ap_CS_fsm_state1652 = ap_CS_fsm.read()[1651];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1653() {
    ap_CS_fsm_state1653 = ap_CS_fsm.read()[1652];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1654() {
    ap_CS_fsm_state1654 = ap_CS_fsm.read()[1653];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1655() {
    ap_CS_fsm_state1655 = ap_CS_fsm.read()[1654];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1656() {
    ap_CS_fsm_state1656 = ap_CS_fsm.read()[1655];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1657() {
    ap_CS_fsm_state1657 = ap_CS_fsm.read()[1656];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1658() {
    ap_CS_fsm_state1658 = ap_CS_fsm.read()[1657];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1659() {
    ap_CS_fsm_state1659 = ap_CS_fsm.read()[1658];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state166() {
    ap_CS_fsm_state166 = ap_CS_fsm.read()[165];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1660() {
    ap_CS_fsm_state1660 = ap_CS_fsm.read()[1659];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1661() {
    ap_CS_fsm_state1661 = ap_CS_fsm.read()[1660];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1662() {
    ap_CS_fsm_state1662 = ap_CS_fsm.read()[1661];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1663() {
    ap_CS_fsm_state1663 = ap_CS_fsm.read()[1662];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1664() {
    ap_CS_fsm_state1664 = ap_CS_fsm.read()[1663];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1665() {
    ap_CS_fsm_state1665 = ap_CS_fsm.read()[1664];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1666() {
    ap_CS_fsm_state1666 = ap_CS_fsm.read()[1665];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1667() {
    ap_CS_fsm_state1667 = ap_CS_fsm.read()[1666];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1668() {
    ap_CS_fsm_state1668 = ap_CS_fsm.read()[1667];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1669() {
    ap_CS_fsm_state1669 = ap_CS_fsm.read()[1668];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state167() {
    ap_CS_fsm_state167 = ap_CS_fsm.read()[166];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1670() {
    ap_CS_fsm_state1670 = ap_CS_fsm.read()[1669];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1671() {
    ap_CS_fsm_state1671 = ap_CS_fsm.read()[1670];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1672() {
    ap_CS_fsm_state1672 = ap_CS_fsm.read()[1671];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1673() {
    ap_CS_fsm_state1673 = ap_CS_fsm.read()[1672];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1674() {
    ap_CS_fsm_state1674 = ap_CS_fsm.read()[1673];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1675() {
    ap_CS_fsm_state1675 = ap_CS_fsm.read()[1674];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1676() {
    ap_CS_fsm_state1676 = ap_CS_fsm.read()[1675];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1677() {
    ap_CS_fsm_state1677 = ap_CS_fsm.read()[1676];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1678() {
    ap_CS_fsm_state1678 = ap_CS_fsm.read()[1677];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1679() {
    ap_CS_fsm_state1679 = ap_CS_fsm.read()[1678];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state168() {
    ap_CS_fsm_state168 = ap_CS_fsm.read()[167];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1680() {
    ap_CS_fsm_state1680 = ap_CS_fsm.read()[1679];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1681() {
    ap_CS_fsm_state1681 = ap_CS_fsm.read()[1680];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1682() {
    ap_CS_fsm_state1682 = ap_CS_fsm.read()[1681];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1683() {
    ap_CS_fsm_state1683 = ap_CS_fsm.read()[1682];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1684() {
    ap_CS_fsm_state1684 = ap_CS_fsm.read()[1683];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1685() {
    ap_CS_fsm_state1685 = ap_CS_fsm.read()[1684];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1686() {
    ap_CS_fsm_state1686 = ap_CS_fsm.read()[1685];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1687() {
    ap_CS_fsm_state1687 = ap_CS_fsm.read()[1686];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1688() {
    ap_CS_fsm_state1688 = ap_CS_fsm.read()[1687];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1689() {
    ap_CS_fsm_state1689 = ap_CS_fsm.read()[1688];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state169() {
    ap_CS_fsm_state169 = ap_CS_fsm.read()[168];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1690() {
    ap_CS_fsm_state1690 = ap_CS_fsm.read()[1689];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1691() {
    ap_CS_fsm_state1691 = ap_CS_fsm.read()[1690];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1692() {
    ap_CS_fsm_state1692 = ap_CS_fsm.read()[1691];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1693() {
    ap_CS_fsm_state1693 = ap_CS_fsm.read()[1692];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1694() {
    ap_CS_fsm_state1694 = ap_CS_fsm.read()[1693];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1695() {
    ap_CS_fsm_state1695 = ap_CS_fsm.read()[1694];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1696() {
    ap_CS_fsm_state1696 = ap_CS_fsm.read()[1695];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1697() {
    ap_CS_fsm_state1697 = ap_CS_fsm.read()[1696];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1698() {
    ap_CS_fsm_state1698 = ap_CS_fsm.read()[1697];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1699() {
    ap_CS_fsm_state1699 = ap_CS_fsm.read()[1698];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state17() {
    ap_CS_fsm_state17 = ap_CS_fsm.read()[16];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state170() {
    ap_CS_fsm_state170 = ap_CS_fsm.read()[169];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1700() {
    ap_CS_fsm_state1700 = ap_CS_fsm.read()[1699];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1701() {
    ap_CS_fsm_state1701 = ap_CS_fsm.read()[1700];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1702() {
    ap_CS_fsm_state1702 = ap_CS_fsm.read()[1701];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1703() {
    ap_CS_fsm_state1703 = ap_CS_fsm.read()[1702];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1704() {
    ap_CS_fsm_state1704 = ap_CS_fsm.read()[1703];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1705() {
    ap_CS_fsm_state1705 = ap_CS_fsm.read()[1704];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1706() {
    ap_CS_fsm_state1706 = ap_CS_fsm.read()[1705];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1707() {
    ap_CS_fsm_state1707 = ap_CS_fsm.read()[1706];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1708() {
    ap_CS_fsm_state1708 = ap_CS_fsm.read()[1707];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1709() {
    ap_CS_fsm_state1709 = ap_CS_fsm.read()[1708];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state171() {
    ap_CS_fsm_state171 = ap_CS_fsm.read()[170];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1710() {
    ap_CS_fsm_state1710 = ap_CS_fsm.read()[1709];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1711() {
    ap_CS_fsm_state1711 = ap_CS_fsm.read()[1710];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1712() {
    ap_CS_fsm_state1712 = ap_CS_fsm.read()[1711];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1713() {
    ap_CS_fsm_state1713 = ap_CS_fsm.read()[1712];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1714() {
    ap_CS_fsm_state1714 = ap_CS_fsm.read()[1713];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1715() {
    ap_CS_fsm_state1715 = ap_CS_fsm.read()[1714];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1716() {
    ap_CS_fsm_state1716 = ap_CS_fsm.read()[1715];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1717() {
    ap_CS_fsm_state1717 = ap_CS_fsm.read()[1716];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1718() {
    ap_CS_fsm_state1718 = ap_CS_fsm.read()[1717];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1719() {
    ap_CS_fsm_state1719 = ap_CS_fsm.read()[1718];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state172() {
    ap_CS_fsm_state172 = ap_CS_fsm.read()[171];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1720() {
    ap_CS_fsm_state1720 = ap_CS_fsm.read()[1719];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1721() {
    ap_CS_fsm_state1721 = ap_CS_fsm.read()[1720];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1722() {
    ap_CS_fsm_state1722 = ap_CS_fsm.read()[1721];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1723() {
    ap_CS_fsm_state1723 = ap_CS_fsm.read()[1722];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1724() {
    ap_CS_fsm_state1724 = ap_CS_fsm.read()[1723];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1725() {
    ap_CS_fsm_state1725 = ap_CS_fsm.read()[1724];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1726() {
    ap_CS_fsm_state1726 = ap_CS_fsm.read()[1725];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1727() {
    ap_CS_fsm_state1727 = ap_CS_fsm.read()[1726];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1728() {
    ap_CS_fsm_state1728 = ap_CS_fsm.read()[1727];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1729() {
    ap_CS_fsm_state1729 = ap_CS_fsm.read()[1728];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state173() {
    ap_CS_fsm_state173 = ap_CS_fsm.read()[172];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1730() {
    ap_CS_fsm_state1730 = ap_CS_fsm.read()[1729];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1731() {
    ap_CS_fsm_state1731 = ap_CS_fsm.read()[1730];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1732() {
    ap_CS_fsm_state1732 = ap_CS_fsm.read()[1731];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1733() {
    ap_CS_fsm_state1733 = ap_CS_fsm.read()[1732];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1734() {
    ap_CS_fsm_state1734 = ap_CS_fsm.read()[1733];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1735() {
    ap_CS_fsm_state1735 = ap_CS_fsm.read()[1734];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1736() {
    ap_CS_fsm_state1736 = ap_CS_fsm.read()[1735];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1737() {
    ap_CS_fsm_state1737 = ap_CS_fsm.read()[1736];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1738() {
    ap_CS_fsm_state1738 = ap_CS_fsm.read()[1737];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1739() {
    ap_CS_fsm_state1739 = ap_CS_fsm.read()[1738];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state174() {
    ap_CS_fsm_state174 = ap_CS_fsm.read()[173];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1740() {
    ap_CS_fsm_state1740 = ap_CS_fsm.read()[1739];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1741() {
    ap_CS_fsm_state1741 = ap_CS_fsm.read()[1740];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1742() {
    ap_CS_fsm_state1742 = ap_CS_fsm.read()[1741];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1743() {
    ap_CS_fsm_state1743 = ap_CS_fsm.read()[1742];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1744() {
    ap_CS_fsm_state1744 = ap_CS_fsm.read()[1743];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1745() {
    ap_CS_fsm_state1745 = ap_CS_fsm.read()[1744];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1746() {
    ap_CS_fsm_state1746 = ap_CS_fsm.read()[1745];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1747() {
    ap_CS_fsm_state1747 = ap_CS_fsm.read()[1746];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1748() {
    ap_CS_fsm_state1748 = ap_CS_fsm.read()[1747];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1749() {
    ap_CS_fsm_state1749 = ap_CS_fsm.read()[1748];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state175() {
    ap_CS_fsm_state175 = ap_CS_fsm.read()[174];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1750() {
    ap_CS_fsm_state1750 = ap_CS_fsm.read()[1749];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1751() {
    ap_CS_fsm_state1751 = ap_CS_fsm.read()[1750];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1752() {
    ap_CS_fsm_state1752 = ap_CS_fsm.read()[1751];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1753() {
    ap_CS_fsm_state1753 = ap_CS_fsm.read()[1752];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1754() {
    ap_CS_fsm_state1754 = ap_CS_fsm.read()[1753];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1755() {
    ap_CS_fsm_state1755 = ap_CS_fsm.read()[1754];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1756() {
    ap_CS_fsm_state1756 = ap_CS_fsm.read()[1755];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1757() {
    ap_CS_fsm_state1757 = ap_CS_fsm.read()[1756];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1758() {
    ap_CS_fsm_state1758 = ap_CS_fsm.read()[1757];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1759() {
    ap_CS_fsm_state1759 = ap_CS_fsm.read()[1758];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state176() {
    ap_CS_fsm_state176 = ap_CS_fsm.read()[175];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1760() {
    ap_CS_fsm_state1760 = ap_CS_fsm.read()[1759];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1761() {
    ap_CS_fsm_state1761 = ap_CS_fsm.read()[1760];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1762() {
    ap_CS_fsm_state1762 = ap_CS_fsm.read()[1761];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1763() {
    ap_CS_fsm_state1763 = ap_CS_fsm.read()[1762];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1764() {
    ap_CS_fsm_state1764 = ap_CS_fsm.read()[1763];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1765() {
    ap_CS_fsm_state1765 = ap_CS_fsm.read()[1764];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1766() {
    ap_CS_fsm_state1766 = ap_CS_fsm.read()[1765];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1767() {
    ap_CS_fsm_state1767 = ap_CS_fsm.read()[1766];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1768() {
    ap_CS_fsm_state1768 = ap_CS_fsm.read()[1767];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1769() {
    ap_CS_fsm_state1769 = ap_CS_fsm.read()[1768];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state177() {
    ap_CS_fsm_state177 = ap_CS_fsm.read()[176];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1770() {
    ap_CS_fsm_state1770 = ap_CS_fsm.read()[1769];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1771() {
    ap_CS_fsm_state1771 = ap_CS_fsm.read()[1770];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1772() {
    ap_CS_fsm_state1772 = ap_CS_fsm.read()[1771];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1773() {
    ap_CS_fsm_state1773 = ap_CS_fsm.read()[1772];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1774() {
    ap_CS_fsm_state1774 = ap_CS_fsm.read()[1773];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1775() {
    ap_CS_fsm_state1775 = ap_CS_fsm.read()[1774];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1776() {
    ap_CS_fsm_state1776 = ap_CS_fsm.read()[1775];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1777() {
    ap_CS_fsm_state1777 = ap_CS_fsm.read()[1776];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1778() {
    ap_CS_fsm_state1778 = ap_CS_fsm.read()[1777];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1779() {
    ap_CS_fsm_state1779 = ap_CS_fsm.read()[1778];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state178() {
    ap_CS_fsm_state178 = ap_CS_fsm.read()[177];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1780() {
    ap_CS_fsm_state1780 = ap_CS_fsm.read()[1779];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1781() {
    ap_CS_fsm_state1781 = ap_CS_fsm.read()[1780];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1782() {
    ap_CS_fsm_state1782 = ap_CS_fsm.read()[1781];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1783() {
    ap_CS_fsm_state1783 = ap_CS_fsm.read()[1782];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1784() {
    ap_CS_fsm_state1784 = ap_CS_fsm.read()[1783];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1785() {
    ap_CS_fsm_state1785 = ap_CS_fsm.read()[1784];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1786() {
    ap_CS_fsm_state1786 = ap_CS_fsm.read()[1785];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1787() {
    ap_CS_fsm_state1787 = ap_CS_fsm.read()[1786];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1788() {
    ap_CS_fsm_state1788 = ap_CS_fsm.read()[1787];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1789() {
    ap_CS_fsm_state1789 = ap_CS_fsm.read()[1788];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state179() {
    ap_CS_fsm_state179 = ap_CS_fsm.read()[178];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1790() {
    ap_CS_fsm_state1790 = ap_CS_fsm.read()[1789];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1791() {
    ap_CS_fsm_state1791 = ap_CS_fsm.read()[1790];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1792() {
    ap_CS_fsm_state1792 = ap_CS_fsm.read()[1791];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1793() {
    ap_CS_fsm_state1793 = ap_CS_fsm.read()[1792];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1794() {
    ap_CS_fsm_state1794 = ap_CS_fsm.read()[1793];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1795() {
    ap_CS_fsm_state1795 = ap_CS_fsm.read()[1794];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1796() {
    ap_CS_fsm_state1796 = ap_CS_fsm.read()[1795];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1797() {
    ap_CS_fsm_state1797 = ap_CS_fsm.read()[1796];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1798() {
    ap_CS_fsm_state1798 = ap_CS_fsm.read()[1797];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1799() {
    ap_CS_fsm_state1799 = ap_CS_fsm.read()[1798];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state18() {
    ap_CS_fsm_state18 = ap_CS_fsm.read()[17];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state180() {
    ap_CS_fsm_state180 = ap_CS_fsm.read()[179];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1800() {
    ap_CS_fsm_state1800 = ap_CS_fsm.read()[1799];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1801() {
    ap_CS_fsm_state1801 = ap_CS_fsm.read()[1800];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1802() {
    ap_CS_fsm_state1802 = ap_CS_fsm.read()[1801];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1803() {
    ap_CS_fsm_state1803 = ap_CS_fsm.read()[1802];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1804() {
    ap_CS_fsm_state1804 = ap_CS_fsm.read()[1803];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1805() {
    ap_CS_fsm_state1805 = ap_CS_fsm.read()[1804];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1806() {
    ap_CS_fsm_state1806 = ap_CS_fsm.read()[1805];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1807() {
    ap_CS_fsm_state1807 = ap_CS_fsm.read()[1806];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1808() {
    ap_CS_fsm_state1808 = ap_CS_fsm.read()[1807];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1809() {
    ap_CS_fsm_state1809 = ap_CS_fsm.read()[1808];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state181() {
    ap_CS_fsm_state181 = ap_CS_fsm.read()[180];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1810() {
    ap_CS_fsm_state1810 = ap_CS_fsm.read()[1809];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1811() {
    ap_CS_fsm_state1811 = ap_CS_fsm.read()[1810];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1812() {
    ap_CS_fsm_state1812 = ap_CS_fsm.read()[1811];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1813() {
    ap_CS_fsm_state1813 = ap_CS_fsm.read()[1812];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1814() {
    ap_CS_fsm_state1814 = ap_CS_fsm.read()[1813];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1815() {
    ap_CS_fsm_state1815 = ap_CS_fsm.read()[1814];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1816() {
    ap_CS_fsm_state1816 = ap_CS_fsm.read()[1815];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1817() {
    ap_CS_fsm_state1817 = ap_CS_fsm.read()[1816];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1818() {
    ap_CS_fsm_state1818 = ap_CS_fsm.read()[1817];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1819() {
    ap_CS_fsm_state1819 = ap_CS_fsm.read()[1818];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state182() {
    ap_CS_fsm_state182 = ap_CS_fsm.read()[181];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1820() {
    ap_CS_fsm_state1820 = ap_CS_fsm.read()[1819];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1821() {
    ap_CS_fsm_state1821 = ap_CS_fsm.read()[1820];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1822() {
    ap_CS_fsm_state1822 = ap_CS_fsm.read()[1821];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1823() {
    ap_CS_fsm_state1823 = ap_CS_fsm.read()[1822];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1824() {
    ap_CS_fsm_state1824 = ap_CS_fsm.read()[1823];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1825() {
    ap_CS_fsm_state1825 = ap_CS_fsm.read()[1824];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1826() {
    ap_CS_fsm_state1826 = ap_CS_fsm.read()[1825];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1827() {
    ap_CS_fsm_state1827 = ap_CS_fsm.read()[1826];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1828() {
    ap_CS_fsm_state1828 = ap_CS_fsm.read()[1827];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1829() {
    ap_CS_fsm_state1829 = ap_CS_fsm.read()[1828];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state183() {
    ap_CS_fsm_state183 = ap_CS_fsm.read()[182];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1830() {
    ap_CS_fsm_state1830 = ap_CS_fsm.read()[1829];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1831() {
    ap_CS_fsm_state1831 = ap_CS_fsm.read()[1830];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1832() {
    ap_CS_fsm_state1832 = ap_CS_fsm.read()[1831];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1833() {
    ap_CS_fsm_state1833 = ap_CS_fsm.read()[1832];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1834() {
    ap_CS_fsm_state1834 = ap_CS_fsm.read()[1833];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1835() {
    ap_CS_fsm_state1835 = ap_CS_fsm.read()[1834];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1836() {
    ap_CS_fsm_state1836 = ap_CS_fsm.read()[1835];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1837() {
    ap_CS_fsm_state1837 = ap_CS_fsm.read()[1836];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1838() {
    ap_CS_fsm_state1838 = ap_CS_fsm.read()[1837];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1839() {
    ap_CS_fsm_state1839 = ap_CS_fsm.read()[1838];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state184() {
    ap_CS_fsm_state184 = ap_CS_fsm.read()[183];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1840() {
    ap_CS_fsm_state1840 = ap_CS_fsm.read()[1839];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1841() {
    ap_CS_fsm_state1841 = ap_CS_fsm.read()[1840];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1842() {
    ap_CS_fsm_state1842 = ap_CS_fsm.read()[1841];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1843() {
    ap_CS_fsm_state1843 = ap_CS_fsm.read()[1842];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1844() {
    ap_CS_fsm_state1844 = ap_CS_fsm.read()[1843];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1845() {
    ap_CS_fsm_state1845 = ap_CS_fsm.read()[1844];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1846() {
    ap_CS_fsm_state1846 = ap_CS_fsm.read()[1845];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1847() {
    ap_CS_fsm_state1847 = ap_CS_fsm.read()[1846];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1848() {
    ap_CS_fsm_state1848 = ap_CS_fsm.read()[1847];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1849() {
    ap_CS_fsm_state1849 = ap_CS_fsm.read()[1848];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state185() {
    ap_CS_fsm_state185 = ap_CS_fsm.read()[184];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1850() {
    ap_CS_fsm_state1850 = ap_CS_fsm.read()[1849];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1851() {
    ap_CS_fsm_state1851 = ap_CS_fsm.read()[1850];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1852() {
    ap_CS_fsm_state1852 = ap_CS_fsm.read()[1851];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1853() {
    ap_CS_fsm_state1853 = ap_CS_fsm.read()[1852];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1854() {
    ap_CS_fsm_state1854 = ap_CS_fsm.read()[1853];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1855() {
    ap_CS_fsm_state1855 = ap_CS_fsm.read()[1854];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1856() {
    ap_CS_fsm_state1856 = ap_CS_fsm.read()[1855];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1857() {
    ap_CS_fsm_state1857 = ap_CS_fsm.read()[1856];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1858() {
    ap_CS_fsm_state1858 = ap_CS_fsm.read()[1857];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1859() {
    ap_CS_fsm_state1859 = ap_CS_fsm.read()[1858];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state186() {
    ap_CS_fsm_state186 = ap_CS_fsm.read()[185];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1860() {
    ap_CS_fsm_state1860 = ap_CS_fsm.read()[1859];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1861() {
    ap_CS_fsm_state1861 = ap_CS_fsm.read()[1860];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1862() {
    ap_CS_fsm_state1862 = ap_CS_fsm.read()[1861];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1863() {
    ap_CS_fsm_state1863 = ap_CS_fsm.read()[1862];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1864() {
    ap_CS_fsm_state1864 = ap_CS_fsm.read()[1863];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1865() {
    ap_CS_fsm_state1865 = ap_CS_fsm.read()[1864];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1866() {
    ap_CS_fsm_state1866 = ap_CS_fsm.read()[1865];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1867() {
    ap_CS_fsm_state1867 = ap_CS_fsm.read()[1866];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1868() {
    ap_CS_fsm_state1868 = ap_CS_fsm.read()[1867];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1869() {
    ap_CS_fsm_state1869 = ap_CS_fsm.read()[1868];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state187() {
    ap_CS_fsm_state187 = ap_CS_fsm.read()[186];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1870() {
    ap_CS_fsm_state1870 = ap_CS_fsm.read()[1869];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1871() {
    ap_CS_fsm_state1871 = ap_CS_fsm.read()[1870];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1872() {
    ap_CS_fsm_state1872 = ap_CS_fsm.read()[1871];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1873() {
    ap_CS_fsm_state1873 = ap_CS_fsm.read()[1872];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1874() {
    ap_CS_fsm_state1874 = ap_CS_fsm.read()[1873];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1875() {
    ap_CS_fsm_state1875 = ap_CS_fsm.read()[1874];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1876() {
    ap_CS_fsm_state1876 = ap_CS_fsm.read()[1875];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1877() {
    ap_CS_fsm_state1877 = ap_CS_fsm.read()[1876];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1878() {
    ap_CS_fsm_state1878 = ap_CS_fsm.read()[1877];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1879() {
    ap_CS_fsm_state1879 = ap_CS_fsm.read()[1878];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state188() {
    ap_CS_fsm_state188 = ap_CS_fsm.read()[187];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1880() {
    ap_CS_fsm_state1880 = ap_CS_fsm.read()[1879];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1881() {
    ap_CS_fsm_state1881 = ap_CS_fsm.read()[1880];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1882() {
    ap_CS_fsm_state1882 = ap_CS_fsm.read()[1881];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1883() {
    ap_CS_fsm_state1883 = ap_CS_fsm.read()[1882];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1884() {
    ap_CS_fsm_state1884 = ap_CS_fsm.read()[1883];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1885() {
    ap_CS_fsm_state1885 = ap_CS_fsm.read()[1884];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1886() {
    ap_CS_fsm_state1886 = ap_CS_fsm.read()[1885];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1887() {
    ap_CS_fsm_state1887 = ap_CS_fsm.read()[1886];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1888() {
    ap_CS_fsm_state1888 = ap_CS_fsm.read()[1887];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1889() {
    ap_CS_fsm_state1889 = ap_CS_fsm.read()[1888];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state189() {
    ap_CS_fsm_state189 = ap_CS_fsm.read()[188];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1890() {
    ap_CS_fsm_state1890 = ap_CS_fsm.read()[1889];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1891() {
    ap_CS_fsm_state1891 = ap_CS_fsm.read()[1890];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1892() {
    ap_CS_fsm_state1892 = ap_CS_fsm.read()[1891];
}

void init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s::thread_ap_CS_fsm_state1893() {
    ap_CS_fsm_state1893 = ap_CS_fsm.read()[1892];
}

}

