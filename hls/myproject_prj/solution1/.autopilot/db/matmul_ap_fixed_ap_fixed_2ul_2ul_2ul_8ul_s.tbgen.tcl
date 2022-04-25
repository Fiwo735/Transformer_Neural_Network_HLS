set moduleName matmul_ap_fixed_ap_fixed_2ul_2ul_2ul_8ul_s
set isTopModule 0
set isTaskLevelControl 1
set isCombinational 0
set isDatapathOnly 1
set isFreeRunPipelineModule 0
set isPipelined 1
set pipeline_type function
set FunctionProtocol ap_ctrl_hs
set isOneStateSeq 0
set ProfileFlag 0
set StallSigGenFlag 0
set isEnableWaveformDebug 1
set C_modelName {matmul<ap_fixed,ap_fixed,2ul,2ul,2ul,8ul>}
set C_modelType { int 1120 }
set C_modelArgList {
	{ a_0_0_V_read int 35 regular  }
	{ a_0_1_V_read int 35 regular  }
	{ a_1_0_V_read int 35 regular  }
	{ a_1_1_V_read int 35 regular  }
	{ a_2_0_V_read int 35 regular  }
	{ a_2_1_V_read int 35 regular  }
	{ a_3_0_V_read int 35 regular  }
	{ a_3_1_V_read int 35 regular  }
	{ a_V_offset int 1 regular  }
	{ b_0_0_V_read int 35 regular  }
	{ b_0_1_V_read int 35 regular  }
	{ b_1_0_V_read int 35 regular  }
	{ b_1_1_V_read int 35 regular  }
	{ b_2_0_V_read int 35 regular  }
	{ b_2_1_V_read int 35 regular  }
	{ b_3_0_V_read int 35 regular  }
	{ b_3_1_V_read int 35 regular  }
	{ b_4_0_V_read int 35 regular  }
	{ b_4_1_V_read int 35 regular  }
	{ b_5_0_V_read int 35 regular  }
	{ b_5_1_V_read int 35 regular  }
	{ b_6_0_V_read int 35 regular  }
	{ b_6_1_V_read int 35 regular  }
	{ b_7_0_V_read int 35 regular  }
	{ b_7_1_V_read int 35 regular  }
	{ b_8_0_V_read int 35 regular  }
	{ b_8_1_V_read int 35 regular  }
	{ b_9_0_V_read int 35 regular  }
	{ b_9_1_V_read int 35 regular  }
	{ b_10_0_V_read int 35 regular  }
	{ b_10_1_V_read int 35 regular  }
	{ b_11_0_V_read int 35 regular  }
	{ b_11_1_V_read int 35 regular  }
	{ b_12_0_V_read int 35 regular  }
	{ b_12_1_V_read int 35 regular  }
	{ b_13_0_V_read int 35 regular  }
	{ b_13_1_V_read int 35 regular  }
	{ b_14_0_V_read int 35 regular  }
	{ b_14_1_V_read int 35 regular  }
	{ b_15_0_V_read int 35 regular  }
	{ b_15_1_V_read int 35 regular  }
	{ b_V_offset int 1 regular  }
	{ res_0_0_V_read_4 int 35 regular  }
	{ res_0_0_V_read int 35 regular  }
	{ res_0_1_V_read_4 int 35 regular  }
	{ res_0_1_V_read int 35 regular  }
	{ res_1_0_V_read_4 int 35 regular  }
	{ res_1_0_V_read int 35 regular  }
	{ res_1_1_V_read_4 int 35 regular  }
	{ res_1_1_V_read int 35 regular  }
	{ res_2_0_V_read_4 int 35 regular  }
	{ res_2_0_V_read int 35 regular  }
	{ res_2_1_V_read_4 int 35 regular  }
	{ res_2_1_V_read int 35 regular  }
	{ res_3_0_V_read_4 int 35 regular  }
	{ res_3_0_V_read int 35 regular  }
	{ res_3_1_V_read_4 int 35 regular  }
	{ res_3_1_V_read int 35 regular  }
	{ res_4_0_V_read_2 int 35 regular  }
	{ res_4_0_V_read int 35 regular  }
	{ res_4_1_V_read_2 int 35 regular  }
	{ res_4_1_V_read int 35 regular  }
	{ res_5_0_V_read_2 int 35 regular  }
	{ res_5_0_V_read int 35 regular  }
	{ res_5_1_V_read_2 int 35 regular  }
	{ res_5_1_V_read int 35 regular  }
	{ res_6_0_V_read_2 int 35 regular  }
	{ res_6_0_V_read int 35 regular  }
	{ res_6_1_V_read_2 int 35 regular  }
	{ res_6_1_V_read int 35 regular  }
	{ res_7_0_V_read_2 int 35 regular  }
	{ res_7_0_V_read int 35 regular  }
	{ res_7_1_V_read_2 int 35 regular  }
	{ res_7_1_V_read int 35 regular  }
	{ res_8_0_V_read_2 int 35 regular  }
	{ res_8_0_V_read int 35 regular  }
	{ res_8_1_V_read_2 int 35 regular  }
	{ res_8_1_V_read int 35 regular  }
	{ res_9_0_V_read_2 int 35 regular  }
	{ res_9_0_V_read int 35 regular  }
	{ res_9_1_V_read_2 int 35 regular  }
	{ res_9_1_V_read int 35 regular  }
	{ res_10_0_V_read_2 int 35 regular  }
	{ res_10_0_V_read int 35 regular  }
	{ res_10_1_V_read_2 int 35 regular  }
	{ res_10_1_V_read int 35 regular  }
	{ res_11_0_V_read_2 int 35 regular  }
	{ res_11_0_V_read int 35 regular  }
	{ res_11_1_V_read_2 int 35 regular  }
	{ res_11_1_V_read int 35 regular  }
	{ res_12_0_V_read_2 int 35 regular  }
	{ res_12_0_V_read int 35 regular  }
	{ res_12_1_V_read_2 int 35 regular  }
	{ res_12_1_V_read int 35 regular  }
	{ res_13_0_V_read_2 int 35 regular  }
	{ res_13_0_V_read int 35 regular  }
	{ res_13_1_V_read_2 int 35 regular  }
	{ res_13_1_V_read int 35 regular  }
	{ res_14_0_V_read_2 int 35 regular  }
	{ res_14_0_V_read int 35 regular  }
	{ res_14_1_V_read_2 int 35 regular  }
	{ res_14_1_V_read int 35 regular  }
	{ res_15_0_V_read_2 int 35 regular  }
	{ res_15_0_V_read int 35 regular  }
	{ res_15_1_V_read_2 int 35 regular  }
	{ res_15_1_V_read int 35 regular  }
	{ res_V_offset int 1 regular  }
}
set C_modelArgMapList {[ 
	{ "Name" : "a_0_0_V_read", "interface" : "wire", "bitwidth" : 35, "direction" : "READONLY"} , 
 	{ "Name" : "a_0_1_V_read", "interface" : "wire", "bitwidth" : 35, "direction" : "READONLY"} , 
 	{ "Name" : "a_1_0_V_read", "interface" : "wire", "bitwidth" : 35, "direction" : "READONLY"} , 
 	{ "Name" : "a_1_1_V_read", "interface" : "wire", "bitwidth" : 35, "direction" : "READONLY"} , 
 	{ "Name" : "a_2_0_V_read", "interface" : "wire", "bitwidth" : 35, "direction" : "READONLY"} , 
 	{ "Name" : "a_2_1_V_read", "interface" : "wire", "bitwidth" : 35, "direction" : "READONLY"} , 
 	{ "Name" : "a_3_0_V_read", "interface" : "wire", "bitwidth" : 35, "direction" : "READONLY"} , 
 	{ "Name" : "a_3_1_V_read", "interface" : "wire", "bitwidth" : 35, "direction" : "READONLY"} , 
 	{ "Name" : "a_V_offset", "interface" : "wire", "bitwidth" : 1, "direction" : "READONLY"} , 
 	{ "Name" : "b_0_0_V_read", "interface" : "wire", "bitwidth" : 35, "direction" : "READONLY"} , 
 	{ "Name" : "b_0_1_V_read", "interface" : "wire", "bitwidth" : 35, "direction" : "READONLY"} , 
 	{ "Name" : "b_1_0_V_read", "interface" : "wire", "bitwidth" : 35, "direction" : "READONLY"} , 
 	{ "Name" : "b_1_1_V_read", "interface" : "wire", "bitwidth" : 35, "direction" : "READONLY"} , 
 	{ "Name" : "b_2_0_V_read", "interface" : "wire", "bitwidth" : 35, "direction" : "READONLY"} , 
 	{ "Name" : "b_2_1_V_read", "interface" : "wire", "bitwidth" : 35, "direction" : "READONLY"} , 
 	{ "Name" : "b_3_0_V_read", "interface" : "wire", "bitwidth" : 35, "direction" : "READONLY"} , 
 	{ "Name" : "b_3_1_V_read", "interface" : "wire", "bitwidth" : 35, "direction" : "READONLY"} , 
 	{ "Name" : "b_4_0_V_read", "interface" : "wire", "bitwidth" : 35, "direction" : "READONLY"} , 
 	{ "Name" : "b_4_1_V_read", "interface" : "wire", "bitwidth" : 35, "direction" : "READONLY"} , 
 	{ "Name" : "b_5_0_V_read", "interface" : "wire", "bitwidth" : 35, "direction" : "READONLY"} , 
 	{ "Name" : "b_5_1_V_read", "interface" : "wire", "bitwidth" : 35, "direction" : "READONLY"} , 
 	{ "Name" : "b_6_0_V_read", "interface" : "wire", "bitwidth" : 35, "direction" : "READONLY"} , 
 	{ "Name" : "b_6_1_V_read", "interface" : "wire", "bitwidth" : 35, "direction" : "READONLY"} , 
 	{ "Name" : "b_7_0_V_read", "interface" : "wire", "bitwidth" : 35, "direction" : "READONLY"} , 
 	{ "Name" : "b_7_1_V_read", "interface" : "wire", "bitwidth" : 35, "direction" : "READONLY"} , 
 	{ "Name" : "b_8_0_V_read", "interface" : "wire", "bitwidth" : 35, "direction" : "READONLY"} , 
 	{ "Name" : "b_8_1_V_read", "interface" : "wire", "bitwidth" : 35, "direction" : "READONLY"} , 
 	{ "Name" : "b_9_0_V_read", "interface" : "wire", "bitwidth" : 35, "direction" : "READONLY"} , 
 	{ "Name" : "b_9_1_V_read", "interface" : "wire", "bitwidth" : 35, "direction" : "READONLY"} , 
 	{ "Name" : "b_10_0_V_read", "interface" : "wire", "bitwidth" : 35, "direction" : "READONLY"} , 
 	{ "Name" : "b_10_1_V_read", "interface" : "wire", "bitwidth" : 35, "direction" : "READONLY"} , 
 	{ "Name" : "b_11_0_V_read", "interface" : "wire", "bitwidth" : 35, "direction" : "READONLY"} , 
 	{ "Name" : "b_11_1_V_read", "interface" : "wire", "bitwidth" : 35, "direction" : "READONLY"} , 
 	{ "Name" : "b_12_0_V_read", "interface" : "wire", "bitwidth" : 35, "direction" : "READONLY"} , 
 	{ "Name" : "b_12_1_V_read", "interface" : "wire", "bitwidth" : 35, "direction" : "READONLY"} , 
 	{ "Name" : "b_13_0_V_read", "interface" : "wire", "bitwidth" : 35, "direction" : "READONLY"} , 
 	{ "Name" : "b_13_1_V_read", "interface" : "wire", "bitwidth" : 35, "direction" : "READONLY"} , 
 	{ "Name" : "b_14_0_V_read", "interface" : "wire", "bitwidth" : 35, "direction" : "READONLY"} , 
 	{ "Name" : "b_14_1_V_read", "interface" : "wire", "bitwidth" : 35, "direction" : "READONLY"} , 
 	{ "Name" : "b_15_0_V_read", "interface" : "wire", "bitwidth" : 35, "direction" : "READONLY"} , 
 	{ "Name" : "b_15_1_V_read", "interface" : "wire", "bitwidth" : 35, "direction" : "READONLY"} , 
 	{ "Name" : "b_V_offset", "interface" : "wire", "bitwidth" : 1, "direction" : "READONLY"} , 
 	{ "Name" : "res_0_0_V_read_4", "interface" : "wire", "bitwidth" : 35, "direction" : "READONLY"} , 
 	{ "Name" : "res_0_0_V_read", "interface" : "wire", "bitwidth" : 35, "direction" : "READONLY"} , 
 	{ "Name" : "res_0_1_V_read_4", "interface" : "wire", "bitwidth" : 35, "direction" : "READONLY"} , 
 	{ "Name" : "res_0_1_V_read", "interface" : "wire", "bitwidth" : 35, "direction" : "READONLY"} , 
 	{ "Name" : "res_1_0_V_read_4", "interface" : "wire", "bitwidth" : 35, "direction" : "READONLY"} , 
 	{ "Name" : "res_1_0_V_read", "interface" : "wire", "bitwidth" : 35, "direction" : "READONLY"} , 
 	{ "Name" : "res_1_1_V_read_4", "interface" : "wire", "bitwidth" : 35, "direction" : "READONLY"} , 
 	{ "Name" : "res_1_1_V_read", "interface" : "wire", "bitwidth" : 35, "direction" : "READONLY"} , 
 	{ "Name" : "res_2_0_V_read_4", "interface" : "wire", "bitwidth" : 35, "direction" : "READONLY"} , 
 	{ "Name" : "res_2_0_V_read", "interface" : "wire", "bitwidth" : 35, "direction" : "READONLY"} , 
 	{ "Name" : "res_2_1_V_read_4", "interface" : "wire", "bitwidth" : 35, "direction" : "READONLY"} , 
 	{ "Name" : "res_2_1_V_read", "interface" : "wire", "bitwidth" : 35, "direction" : "READONLY"} , 
 	{ "Name" : "res_3_0_V_read_4", "interface" : "wire", "bitwidth" : 35, "direction" : "READONLY"} , 
 	{ "Name" : "res_3_0_V_read", "interface" : "wire", "bitwidth" : 35, "direction" : "READONLY"} , 
 	{ "Name" : "res_3_1_V_read_4", "interface" : "wire", "bitwidth" : 35, "direction" : "READONLY"} , 
 	{ "Name" : "res_3_1_V_read", "interface" : "wire", "bitwidth" : 35, "direction" : "READONLY"} , 
 	{ "Name" : "res_4_0_V_read_2", "interface" : "wire", "bitwidth" : 35, "direction" : "READONLY"} , 
 	{ "Name" : "res_4_0_V_read", "interface" : "wire", "bitwidth" : 35, "direction" : "READONLY"} , 
 	{ "Name" : "res_4_1_V_read_2", "interface" : "wire", "bitwidth" : 35, "direction" : "READONLY"} , 
 	{ "Name" : "res_4_1_V_read", "interface" : "wire", "bitwidth" : 35, "direction" : "READONLY"} , 
 	{ "Name" : "res_5_0_V_read_2", "interface" : "wire", "bitwidth" : 35, "direction" : "READONLY"} , 
 	{ "Name" : "res_5_0_V_read", "interface" : "wire", "bitwidth" : 35, "direction" : "READONLY"} , 
 	{ "Name" : "res_5_1_V_read_2", "interface" : "wire", "bitwidth" : 35, "direction" : "READONLY"} , 
 	{ "Name" : "res_5_1_V_read", "interface" : "wire", "bitwidth" : 35, "direction" : "READONLY"} , 
 	{ "Name" : "res_6_0_V_read_2", "interface" : "wire", "bitwidth" : 35, "direction" : "READONLY"} , 
 	{ "Name" : "res_6_0_V_read", "interface" : "wire", "bitwidth" : 35, "direction" : "READONLY"} , 
 	{ "Name" : "res_6_1_V_read_2", "interface" : "wire", "bitwidth" : 35, "direction" : "READONLY"} , 
 	{ "Name" : "res_6_1_V_read", "interface" : "wire", "bitwidth" : 35, "direction" : "READONLY"} , 
 	{ "Name" : "res_7_0_V_read_2", "interface" : "wire", "bitwidth" : 35, "direction" : "READONLY"} , 
 	{ "Name" : "res_7_0_V_read", "interface" : "wire", "bitwidth" : 35, "direction" : "READONLY"} , 
 	{ "Name" : "res_7_1_V_read_2", "interface" : "wire", "bitwidth" : 35, "direction" : "READONLY"} , 
 	{ "Name" : "res_7_1_V_read", "interface" : "wire", "bitwidth" : 35, "direction" : "READONLY"} , 
 	{ "Name" : "res_8_0_V_read_2", "interface" : "wire", "bitwidth" : 35, "direction" : "READONLY"} , 
 	{ "Name" : "res_8_0_V_read", "interface" : "wire", "bitwidth" : 35, "direction" : "READONLY"} , 
 	{ "Name" : "res_8_1_V_read_2", "interface" : "wire", "bitwidth" : 35, "direction" : "READONLY"} , 
 	{ "Name" : "res_8_1_V_read", "interface" : "wire", "bitwidth" : 35, "direction" : "READONLY"} , 
 	{ "Name" : "res_9_0_V_read_2", "interface" : "wire", "bitwidth" : 35, "direction" : "READONLY"} , 
 	{ "Name" : "res_9_0_V_read", "interface" : "wire", "bitwidth" : 35, "direction" : "READONLY"} , 
 	{ "Name" : "res_9_1_V_read_2", "interface" : "wire", "bitwidth" : 35, "direction" : "READONLY"} , 
 	{ "Name" : "res_9_1_V_read", "interface" : "wire", "bitwidth" : 35, "direction" : "READONLY"} , 
 	{ "Name" : "res_10_0_V_read_2", "interface" : "wire", "bitwidth" : 35, "direction" : "READONLY"} , 
 	{ "Name" : "res_10_0_V_read", "interface" : "wire", "bitwidth" : 35, "direction" : "READONLY"} , 
 	{ "Name" : "res_10_1_V_read_2", "interface" : "wire", "bitwidth" : 35, "direction" : "READONLY"} , 
 	{ "Name" : "res_10_1_V_read", "interface" : "wire", "bitwidth" : 35, "direction" : "READONLY"} , 
 	{ "Name" : "res_11_0_V_read_2", "interface" : "wire", "bitwidth" : 35, "direction" : "READONLY"} , 
 	{ "Name" : "res_11_0_V_read", "interface" : "wire", "bitwidth" : 35, "direction" : "READONLY"} , 
 	{ "Name" : "res_11_1_V_read_2", "interface" : "wire", "bitwidth" : 35, "direction" : "READONLY"} , 
 	{ "Name" : "res_11_1_V_read", "interface" : "wire", "bitwidth" : 35, "direction" : "READONLY"} , 
 	{ "Name" : "res_12_0_V_read_2", "interface" : "wire", "bitwidth" : 35, "direction" : "READONLY"} , 
 	{ "Name" : "res_12_0_V_read", "interface" : "wire", "bitwidth" : 35, "direction" : "READONLY"} , 
 	{ "Name" : "res_12_1_V_read_2", "interface" : "wire", "bitwidth" : 35, "direction" : "READONLY"} , 
 	{ "Name" : "res_12_1_V_read", "interface" : "wire", "bitwidth" : 35, "direction" : "READONLY"} , 
 	{ "Name" : "res_13_0_V_read_2", "interface" : "wire", "bitwidth" : 35, "direction" : "READONLY"} , 
 	{ "Name" : "res_13_0_V_read", "interface" : "wire", "bitwidth" : 35, "direction" : "READONLY"} , 
 	{ "Name" : "res_13_1_V_read_2", "interface" : "wire", "bitwidth" : 35, "direction" : "READONLY"} , 
 	{ "Name" : "res_13_1_V_read", "interface" : "wire", "bitwidth" : 35, "direction" : "READONLY"} , 
 	{ "Name" : "res_14_0_V_read_2", "interface" : "wire", "bitwidth" : 35, "direction" : "READONLY"} , 
 	{ "Name" : "res_14_0_V_read", "interface" : "wire", "bitwidth" : 35, "direction" : "READONLY"} , 
 	{ "Name" : "res_14_1_V_read_2", "interface" : "wire", "bitwidth" : 35, "direction" : "READONLY"} , 
 	{ "Name" : "res_14_1_V_read", "interface" : "wire", "bitwidth" : 35, "direction" : "READONLY"} , 
 	{ "Name" : "res_15_0_V_read_2", "interface" : "wire", "bitwidth" : 35, "direction" : "READONLY"} , 
 	{ "Name" : "res_15_0_V_read", "interface" : "wire", "bitwidth" : 35, "direction" : "READONLY"} , 
 	{ "Name" : "res_15_1_V_read_2", "interface" : "wire", "bitwidth" : 35, "direction" : "READONLY"} , 
 	{ "Name" : "res_15_1_V_read", "interface" : "wire", "bitwidth" : 35, "direction" : "READONLY"} , 
 	{ "Name" : "res_V_offset", "interface" : "wire", "bitwidth" : 1, "direction" : "READONLY"} , 
 	{ "Name" : "ap_return", "interface" : "wire", "bitwidth" : 1120} ]}
# RTL Port declarations: 
set portNum 142
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ a_0_0_V_read sc_in sc_lv 35 signal 0 } 
	{ a_0_1_V_read sc_in sc_lv 35 signal 1 } 
	{ a_1_0_V_read sc_in sc_lv 35 signal 2 } 
	{ a_1_1_V_read sc_in sc_lv 35 signal 3 } 
	{ a_2_0_V_read sc_in sc_lv 35 signal 4 } 
	{ a_2_1_V_read sc_in sc_lv 35 signal 5 } 
	{ a_3_0_V_read sc_in sc_lv 35 signal 6 } 
	{ a_3_1_V_read sc_in sc_lv 35 signal 7 } 
	{ a_V_offset sc_in sc_lv 1 signal 8 } 
	{ b_0_0_V_read sc_in sc_lv 35 signal 9 } 
	{ b_0_1_V_read sc_in sc_lv 35 signal 10 } 
	{ b_1_0_V_read sc_in sc_lv 35 signal 11 } 
	{ b_1_1_V_read sc_in sc_lv 35 signal 12 } 
	{ b_2_0_V_read sc_in sc_lv 35 signal 13 } 
	{ b_2_1_V_read sc_in sc_lv 35 signal 14 } 
	{ b_3_0_V_read sc_in sc_lv 35 signal 15 } 
	{ b_3_1_V_read sc_in sc_lv 35 signal 16 } 
	{ b_4_0_V_read sc_in sc_lv 35 signal 17 } 
	{ b_4_1_V_read sc_in sc_lv 35 signal 18 } 
	{ b_5_0_V_read sc_in sc_lv 35 signal 19 } 
	{ b_5_1_V_read sc_in sc_lv 35 signal 20 } 
	{ b_6_0_V_read sc_in sc_lv 35 signal 21 } 
	{ b_6_1_V_read sc_in sc_lv 35 signal 22 } 
	{ b_7_0_V_read sc_in sc_lv 35 signal 23 } 
	{ b_7_1_V_read sc_in sc_lv 35 signal 24 } 
	{ b_8_0_V_read sc_in sc_lv 35 signal 25 } 
	{ b_8_1_V_read sc_in sc_lv 35 signal 26 } 
	{ b_9_0_V_read sc_in sc_lv 35 signal 27 } 
	{ b_9_1_V_read sc_in sc_lv 35 signal 28 } 
	{ b_10_0_V_read sc_in sc_lv 35 signal 29 } 
	{ b_10_1_V_read sc_in sc_lv 35 signal 30 } 
	{ b_11_0_V_read sc_in sc_lv 35 signal 31 } 
	{ b_11_1_V_read sc_in sc_lv 35 signal 32 } 
	{ b_12_0_V_read sc_in sc_lv 35 signal 33 } 
	{ b_12_1_V_read sc_in sc_lv 35 signal 34 } 
	{ b_13_0_V_read sc_in sc_lv 35 signal 35 } 
	{ b_13_1_V_read sc_in sc_lv 35 signal 36 } 
	{ b_14_0_V_read sc_in sc_lv 35 signal 37 } 
	{ b_14_1_V_read sc_in sc_lv 35 signal 38 } 
	{ b_15_0_V_read sc_in sc_lv 35 signal 39 } 
	{ b_15_1_V_read sc_in sc_lv 35 signal 40 } 
	{ b_V_offset sc_in sc_lv 1 signal 41 } 
	{ res_0_0_V_read_4 sc_in sc_lv 35 signal 42 } 
	{ res_0_0_V_read sc_in sc_lv 35 signal 43 } 
	{ res_0_1_V_read_4 sc_in sc_lv 35 signal 44 } 
	{ res_0_1_V_read sc_in sc_lv 35 signal 45 } 
	{ res_1_0_V_read_4 sc_in sc_lv 35 signal 46 } 
	{ res_1_0_V_read sc_in sc_lv 35 signal 47 } 
	{ res_1_1_V_read_4 sc_in sc_lv 35 signal 48 } 
	{ res_1_1_V_read sc_in sc_lv 35 signal 49 } 
	{ res_2_0_V_read_4 sc_in sc_lv 35 signal 50 } 
	{ res_2_0_V_read sc_in sc_lv 35 signal 51 } 
	{ res_2_1_V_read_4 sc_in sc_lv 35 signal 52 } 
	{ res_2_1_V_read sc_in sc_lv 35 signal 53 } 
	{ res_3_0_V_read_4 sc_in sc_lv 35 signal 54 } 
	{ res_3_0_V_read sc_in sc_lv 35 signal 55 } 
	{ res_3_1_V_read_4 sc_in sc_lv 35 signal 56 } 
	{ res_3_1_V_read sc_in sc_lv 35 signal 57 } 
	{ res_4_0_V_read_2 sc_in sc_lv 35 signal 58 } 
	{ res_4_0_V_read sc_in sc_lv 35 signal 59 } 
	{ res_4_1_V_read_2 sc_in sc_lv 35 signal 60 } 
	{ res_4_1_V_read sc_in sc_lv 35 signal 61 } 
	{ res_5_0_V_read_2 sc_in sc_lv 35 signal 62 } 
	{ res_5_0_V_read sc_in sc_lv 35 signal 63 } 
	{ res_5_1_V_read_2 sc_in sc_lv 35 signal 64 } 
	{ res_5_1_V_read sc_in sc_lv 35 signal 65 } 
	{ res_6_0_V_read_2 sc_in sc_lv 35 signal 66 } 
	{ res_6_0_V_read sc_in sc_lv 35 signal 67 } 
	{ res_6_1_V_read_2 sc_in sc_lv 35 signal 68 } 
	{ res_6_1_V_read sc_in sc_lv 35 signal 69 } 
	{ res_7_0_V_read_2 sc_in sc_lv 35 signal 70 } 
	{ res_7_0_V_read sc_in sc_lv 35 signal 71 } 
	{ res_7_1_V_read_2 sc_in sc_lv 35 signal 72 } 
	{ res_7_1_V_read sc_in sc_lv 35 signal 73 } 
	{ res_8_0_V_read_2 sc_in sc_lv 35 signal 74 } 
	{ res_8_0_V_read sc_in sc_lv 35 signal 75 } 
	{ res_8_1_V_read_2 sc_in sc_lv 35 signal 76 } 
	{ res_8_1_V_read sc_in sc_lv 35 signal 77 } 
	{ res_9_0_V_read_2 sc_in sc_lv 35 signal 78 } 
	{ res_9_0_V_read sc_in sc_lv 35 signal 79 } 
	{ res_9_1_V_read_2 sc_in sc_lv 35 signal 80 } 
	{ res_9_1_V_read sc_in sc_lv 35 signal 81 } 
	{ res_10_0_V_read_2 sc_in sc_lv 35 signal 82 } 
	{ res_10_0_V_read sc_in sc_lv 35 signal 83 } 
	{ res_10_1_V_read_2 sc_in sc_lv 35 signal 84 } 
	{ res_10_1_V_read sc_in sc_lv 35 signal 85 } 
	{ res_11_0_V_read_2 sc_in sc_lv 35 signal 86 } 
	{ res_11_0_V_read sc_in sc_lv 35 signal 87 } 
	{ res_11_1_V_read_2 sc_in sc_lv 35 signal 88 } 
	{ res_11_1_V_read sc_in sc_lv 35 signal 89 } 
	{ res_12_0_V_read_2 sc_in sc_lv 35 signal 90 } 
	{ res_12_0_V_read sc_in sc_lv 35 signal 91 } 
	{ res_12_1_V_read_2 sc_in sc_lv 35 signal 92 } 
	{ res_12_1_V_read sc_in sc_lv 35 signal 93 } 
	{ res_13_0_V_read_2 sc_in sc_lv 35 signal 94 } 
	{ res_13_0_V_read sc_in sc_lv 35 signal 95 } 
	{ res_13_1_V_read_2 sc_in sc_lv 35 signal 96 } 
	{ res_13_1_V_read sc_in sc_lv 35 signal 97 } 
	{ res_14_0_V_read_2 sc_in sc_lv 35 signal 98 } 
	{ res_14_0_V_read sc_in sc_lv 35 signal 99 } 
	{ res_14_1_V_read_2 sc_in sc_lv 35 signal 100 } 
	{ res_14_1_V_read sc_in sc_lv 35 signal 101 } 
	{ res_15_0_V_read_2 sc_in sc_lv 35 signal 102 } 
	{ res_15_0_V_read sc_in sc_lv 35 signal 103 } 
	{ res_15_1_V_read_2 sc_in sc_lv 35 signal 104 } 
	{ res_15_1_V_read sc_in sc_lv 35 signal 105 } 
	{ res_V_offset sc_in sc_lv 1 signal 106 } 
	{ ap_return_0 sc_out sc_lv 35 signal -1 } 
	{ ap_return_1 sc_out sc_lv 35 signal -1 } 
	{ ap_return_2 sc_out sc_lv 35 signal -1 } 
	{ ap_return_3 sc_out sc_lv 35 signal -1 } 
	{ ap_return_4 sc_out sc_lv 35 signal -1 } 
	{ ap_return_5 sc_out sc_lv 35 signal -1 } 
	{ ap_return_6 sc_out sc_lv 35 signal -1 } 
	{ ap_return_7 sc_out sc_lv 35 signal -1 } 
	{ ap_return_8 sc_out sc_lv 35 signal -1 } 
	{ ap_return_9 sc_out sc_lv 35 signal -1 } 
	{ ap_return_10 sc_out sc_lv 35 signal -1 } 
	{ ap_return_11 sc_out sc_lv 35 signal -1 } 
	{ ap_return_12 sc_out sc_lv 35 signal -1 } 
	{ ap_return_13 sc_out sc_lv 35 signal -1 } 
	{ ap_return_14 sc_out sc_lv 35 signal -1 } 
	{ ap_return_15 sc_out sc_lv 35 signal -1 } 
	{ ap_return_16 sc_out sc_lv 35 signal -1 } 
	{ ap_return_17 sc_out sc_lv 35 signal -1 } 
	{ ap_return_18 sc_out sc_lv 35 signal -1 } 
	{ ap_return_19 sc_out sc_lv 35 signal -1 } 
	{ ap_return_20 sc_out sc_lv 35 signal -1 } 
	{ ap_return_21 sc_out sc_lv 35 signal -1 } 
	{ ap_return_22 sc_out sc_lv 35 signal -1 } 
	{ ap_return_23 sc_out sc_lv 35 signal -1 } 
	{ ap_return_24 sc_out sc_lv 35 signal -1 } 
	{ ap_return_25 sc_out sc_lv 35 signal -1 } 
	{ ap_return_26 sc_out sc_lv 35 signal -1 } 
	{ ap_return_27 sc_out sc_lv 35 signal -1 } 
	{ ap_return_28 sc_out sc_lv 35 signal -1 } 
	{ ap_return_29 sc_out sc_lv 35 signal -1 } 
	{ ap_return_30 sc_out sc_lv 35 signal -1 } 
	{ ap_return_31 sc_out sc_lv 35 signal -1 } 
	{ ap_ce sc_in sc_logic 1 ce -1 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "a_0_0_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":35, "type": "signal", "bundle":{"name": "a_0_0_V_read", "role": "default" }} , 
 	{ "name": "a_0_1_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":35, "type": "signal", "bundle":{"name": "a_0_1_V_read", "role": "default" }} , 
 	{ "name": "a_1_0_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":35, "type": "signal", "bundle":{"name": "a_1_0_V_read", "role": "default" }} , 
 	{ "name": "a_1_1_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":35, "type": "signal", "bundle":{"name": "a_1_1_V_read", "role": "default" }} , 
 	{ "name": "a_2_0_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":35, "type": "signal", "bundle":{"name": "a_2_0_V_read", "role": "default" }} , 
 	{ "name": "a_2_1_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":35, "type": "signal", "bundle":{"name": "a_2_1_V_read", "role": "default" }} , 
 	{ "name": "a_3_0_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":35, "type": "signal", "bundle":{"name": "a_3_0_V_read", "role": "default" }} , 
 	{ "name": "a_3_1_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":35, "type": "signal", "bundle":{"name": "a_3_1_V_read", "role": "default" }} , 
 	{ "name": "a_V_offset", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "a_V_offset", "role": "default" }} , 
 	{ "name": "b_0_0_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":35, "type": "signal", "bundle":{"name": "b_0_0_V_read", "role": "default" }} , 
 	{ "name": "b_0_1_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":35, "type": "signal", "bundle":{"name": "b_0_1_V_read", "role": "default" }} , 
 	{ "name": "b_1_0_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":35, "type": "signal", "bundle":{"name": "b_1_0_V_read", "role": "default" }} , 
 	{ "name": "b_1_1_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":35, "type": "signal", "bundle":{"name": "b_1_1_V_read", "role": "default" }} , 
 	{ "name": "b_2_0_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":35, "type": "signal", "bundle":{"name": "b_2_0_V_read", "role": "default" }} , 
 	{ "name": "b_2_1_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":35, "type": "signal", "bundle":{"name": "b_2_1_V_read", "role": "default" }} , 
 	{ "name": "b_3_0_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":35, "type": "signal", "bundle":{"name": "b_3_0_V_read", "role": "default" }} , 
 	{ "name": "b_3_1_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":35, "type": "signal", "bundle":{"name": "b_3_1_V_read", "role": "default" }} , 
 	{ "name": "b_4_0_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":35, "type": "signal", "bundle":{"name": "b_4_0_V_read", "role": "default" }} , 
 	{ "name": "b_4_1_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":35, "type": "signal", "bundle":{"name": "b_4_1_V_read", "role": "default" }} , 
 	{ "name": "b_5_0_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":35, "type": "signal", "bundle":{"name": "b_5_0_V_read", "role": "default" }} , 
 	{ "name": "b_5_1_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":35, "type": "signal", "bundle":{"name": "b_5_1_V_read", "role": "default" }} , 
 	{ "name": "b_6_0_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":35, "type": "signal", "bundle":{"name": "b_6_0_V_read", "role": "default" }} , 
 	{ "name": "b_6_1_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":35, "type": "signal", "bundle":{"name": "b_6_1_V_read", "role": "default" }} , 
 	{ "name": "b_7_0_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":35, "type": "signal", "bundle":{"name": "b_7_0_V_read", "role": "default" }} , 
 	{ "name": "b_7_1_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":35, "type": "signal", "bundle":{"name": "b_7_1_V_read", "role": "default" }} , 
 	{ "name": "b_8_0_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":35, "type": "signal", "bundle":{"name": "b_8_0_V_read", "role": "default" }} , 
 	{ "name": "b_8_1_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":35, "type": "signal", "bundle":{"name": "b_8_1_V_read", "role": "default" }} , 
 	{ "name": "b_9_0_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":35, "type": "signal", "bundle":{"name": "b_9_0_V_read", "role": "default" }} , 
 	{ "name": "b_9_1_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":35, "type": "signal", "bundle":{"name": "b_9_1_V_read", "role": "default" }} , 
 	{ "name": "b_10_0_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":35, "type": "signal", "bundle":{"name": "b_10_0_V_read", "role": "default" }} , 
 	{ "name": "b_10_1_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":35, "type": "signal", "bundle":{"name": "b_10_1_V_read", "role": "default" }} , 
 	{ "name": "b_11_0_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":35, "type": "signal", "bundle":{"name": "b_11_0_V_read", "role": "default" }} , 
 	{ "name": "b_11_1_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":35, "type": "signal", "bundle":{"name": "b_11_1_V_read", "role": "default" }} , 
 	{ "name": "b_12_0_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":35, "type": "signal", "bundle":{"name": "b_12_0_V_read", "role": "default" }} , 
 	{ "name": "b_12_1_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":35, "type": "signal", "bundle":{"name": "b_12_1_V_read", "role": "default" }} , 
 	{ "name": "b_13_0_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":35, "type": "signal", "bundle":{"name": "b_13_0_V_read", "role": "default" }} , 
 	{ "name": "b_13_1_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":35, "type": "signal", "bundle":{"name": "b_13_1_V_read", "role": "default" }} , 
 	{ "name": "b_14_0_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":35, "type": "signal", "bundle":{"name": "b_14_0_V_read", "role": "default" }} , 
 	{ "name": "b_14_1_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":35, "type": "signal", "bundle":{"name": "b_14_1_V_read", "role": "default" }} , 
 	{ "name": "b_15_0_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":35, "type": "signal", "bundle":{"name": "b_15_0_V_read", "role": "default" }} , 
 	{ "name": "b_15_1_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":35, "type": "signal", "bundle":{"name": "b_15_1_V_read", "role": "default" }} , 
 	{ "name": "b_V_offset", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "b_V_offset", "role": "default" }} , 
 	{ "name": "res_0_0_V_read_4", "direction": "in", "datatype": "sc_lv", "bitwidth":35, "type": "signal", "bundle":{"name": "res_0_0_V_read_4", "role": "default" }} , 
 	{ "name": "res_0_0_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":35, "type": "signal", "bundle":{"name": "res_0_0_V_read", "role": "default" }} , 
 	{ "name": "res_0_1_V_read_4", "direction": "in", "datatype": "sc_lv", "bitwidth":35, "type": "signal", "bundle":{"name": "res_0_1_V_read_4", "role": "default" }} , 
 	{ "name": "res_0_1_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":35, "type": "signal", "bundle":{"name": "res_0_1_V_read", "role": "default" }} , 
 	{ "name": "res_1_0_V_read_4", "direction": "in", "datatype": "sc_lv", "bitwidth":35, "type": "signal", "bundle":{"name": "res_1_0_V_read_4", "role": "default" }} , 
 	{ "name": "res_1_0_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":35, "type": "signal", "bundle":{"name": "res_1_0_V_read", "role": "default" }} , 
 	{ "name": "res_1_1_V_read_4", "direction": "in", "datatype": "sc_lv", "bitwidth":35, "type": "signal", "bundle":{"name": "res_1_1_V_read_4", "role": "default" }} , 
 	{ "name": "res_1_1_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":35, "type": "signal", "bundle":{"name": "res_1_1_V_read", "role": "default" }} , 
 	{ "name": "res_2_0_V_read_4", "direction": "in", "datatype": "sc_lv", "bitwidth":35, "type": "signal", "bundle":{"name": "res_2_0_V_read_4", "role": "default" }} , 
 	{ "name": "res_2_0_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":35, "type": "signal", "bundle":{"name": "res_2_0_V_read", "role": "default" }} , 
 	{ "name": "res_2_1_V_read_4", "direction": "in", "datatype": "sc_lv", "bitwidth":35, "type": "signal", "bundle":{"name": "res_2_1_V_read_4", "role": "default" }} , 
 	{ "name": "res_2_1_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":35, "type": "signal", "bundle":{"name": "res_2_1_V_read", "role": "default" }} , 
 	{ "name": "res_3_0_V_read_4", "direction": "in", "datatype": "sc_lv", "bitwidth":35, "type": "signal", "bundle":{"name": "res_3_0_V_read_4", "role": "default" }} , 
 	{ "name": "res_3_0_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":35, "type": "signal", "bundle":{"name": "res_3_0_V_read", "role": "default" }} , 
 	{ "name": "res_3_1_V_read_4", "direction": "in", "datatype": "sc_lv", "bitwidth":35, "type": "signal", "bundle":{"name": "res_3_1_V_read_4", "role": "default" }} , 
 	{ "name": "res_3_1_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":35, "type": "signal", "bundle":{"name": "res_3_1_V_read", "role": "default" }} , 
 	{ "name": "res_4_0_V_read_2", "direction": "in", "datatype": "sc_lv", "bitwidth":35, "type": "signal", "bundle":{"name": "res_4_0_V_read_2", "role": "default" }} , 
 	{ "name": "res_4_0_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":35, "type": "signal", "bundle":{"name": "res_4_0_V_read", "role": "default" }} , 
 	{ "name": "res_4_1_V_read_2", "direction": "in", "datatype": "sc_lv", "bitwidth":35, "type": "signal", "bundle":{"name": "res_4_1_V_read_2", "role": "default" }} , 
 	{ "name": "res_4_1_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":35, "type": "signal", "bundle":{"name": "res_4_1_V_read", "role": "default" }} , 
 	{ "name": "res_5_0_V_read_2", "direction": "in", "datatype": "sc_lv", "bitwidth":35, "type": "signal", "bundle":{"name": "res_5_0_V_read_2", "role": "default" }} , 
 	{ "name": "res_5_0_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":35, "type": "signal", "bundle":{"name": "res_5_0_V_read", "role": "default" }} , 
 	{ "name": "res_5_1_V_read_2", "direction": "in", "datatype": "sc_lv", "bitwidth":35, "type": "signal", "bundle":{"name": "res_5_1_V_read_2", "role": "default" }} , 
 	{ "name": "res_5_1_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":35, "type": "signal", "bundle":{"name": "res_5_1_V_read", "role": "default" }} , 
 	{ "name": "res_6_0_V_read_2", "direction": "in", "datatype": "sc_lv", "bitwidth":35, "type": "signal", "bundle":{"name": "res_6_0_V_read_2", "role": "default" }} , 
 	{ "name": "res_6_0_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":35, "type": "signal", "bundle":{"name": "res_6_0_V_read", "role": "default" }} , 
 	{ "name": "res_6_1_V_read_2", "direction": "in", "datatype": "sc_lv", "bitwidth":35, "type": "signal", "bundle":{"name": "res_6_1_V_read_2", "role": "default" }} , 
 	{ "name": "res_6_1_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":35, "type": "signal", "bundle":{"name": "res_6_1_V_read", "role": "default" }} , 
 	{ "name": "res_7_0_V_read_2", "direction": "in", "datatype": "sc_lv", "bitwidth":35, "type": "signal", "bundle":{"name": "res_7_0_V_read_2", "role": "default" }} , 
 	{ "name": "res_7_0_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":35, "type": "signal", "bundle":{"name": "res_7_0_V_read", "role": "default" }} , 
 	{ "name": "res_7_1_V_read_2", "direction": "in", "datatype": "sc_lv", "bitwidth":35, "type": "signal", "bundle":{"name": "res_7_1_V_read_2", "role": "default" }} , 
 	{ "name": "res_7_1_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":35, "type": "signal", "bundle":{"name": "res_7_1_V_read", "role": "default" }} , 
 	{ "name": "res_8_0_V_read_2", "direction": "in", "datatype": "sc_lv", "bitwidth":35, "type": "signal", "bundle":{"name": "res_8_0_V_read_2", "role": "default" }} , 
 	{ "name": "res_8_0_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":35, "type": "signal", "bundle":{"name": "res_8_0_V_read", "role": "default" }} , 
 	{ "name": "res_8_1_V_read_2", "direction": "in", "datatype": "sc_lv", "bitwidth":35, "type": "signal", "bundle":{"name": "res_8_1_V_read_2", "role": "default" }} , 
 	{ "name": "res_8_1_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":35, "type": "signal", "bundle":{"name": "res_8_1_V_read", "role": "default" }} , 
 	{ "name": "res_9_0_V_read_2", "direction": "in", "datatype": "sc_lv", "bitwidth":35, "type": "signal", "bundle":{"name": "res_9_0_V_read_2", "role": "default" }} , 
 	{ "name": "res_9_0_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":35, "type": "signal", "bundle":{"name": "res_9_0_V_read", "role": "default" }} , 
 	{ "name": "res_9_1_V_read_2", "direction": "in", "datatype": "sc_lv", "bitwidth":35, "type": "signal", "bundle":{"name": "res_9_1_V_read_2", "role": "default" }} , 
 	{ "name": "res_9_1_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":35, "type": "signal", "bundle":{"name": "res_9_1_V_read", "role": "default" }} , 
 	{ "name": "res_10_0_V_read_2", "direction": "in", "datatype": "sc_lv", "bitwidth":35, "type": "signal", "bundle":{"name": "res_10_0_V_read_2", "role": "default" }} , 
 	{ "name": "res_10_0_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":35, "type": "signal", "bundle":{"name": "res_10_0_V_read", "role": "default" }} , 
 	{ "name": "res_10_1_V_read_2", "direction": "in", "datatype": "sc_lv", "bitwidth":35, "type": "signal", "bundle":{"name": "res_10_1_V_read_2", "role": "default" }} , 
 	{ "name": "res_10_1_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":35, "type": "signal", "bundle":{"name": "res_10_1_V_read", "role": "default" }} , 
 	{ "name": "res_11_0_V_read_2", "direction": "in", "datatype": "sc_lv", "bitwidth":35, "type": "signal", "bundle":{"name": "res_11_0_V_read_2", "role": "default" }} , 
 	{ "name": "res_11_0_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":35, "type": "signal", "bundle":{"name": "res_11_0_V_read", "role": "default" }} , 
 	{ "name": "res_11_1_V_read_2", "direction": "in", "datatype": "sc_lv", "bitwidth":35, "type": "signal", "bundle":{"name": "res_11_1_V_read_2", "role": "default" }} , 
 	{ "name": "res_11_1_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":35, "type": "signal", "bundle":{"name": "res_11_1_V_read", "role": "default" }} , 
 	{ "name": "res_12_0_V_read_2", "direction": "in", "datatype": "sc_lv", "bitwidth":35, "type": "signal", "bundle":{"name": "res_12_0_V_read_2", "role": "default" }} , 
 	{ "name": "res_12_0_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":35, "type": "signal", "bundle":{"name": "res_12_0_V_read", "role": "default" }} , 
 	{ "name": "res_12_1_V_read_2", "direction": "in", "datatype": "sc_lv", "bitwidth":35, "type": "signal", "bundle":{"name": "res_12_1_V_read_2", "role": "default" }} , 
 	{ "name": "res_12_1_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":35, "type": "signal", "bundle":{"name": "res_12_1_V_read", "role": "default" }} , 
 	{ "name": "res_13_0_V_read_2", "direction": "in", "datatype": "sc_lv", "bitwidth":35, "type": "signal", "bundle":{"name": "res_13_0_V_read_2", "role": "default" }} , 
 	{ "name": "res_13_0_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":35, "type": "signal", "bundle":{"name": "res_13_0_V_read", "role": "default" }} , 
 	{ "name": "res_13_1_V_read_2", "direction": "in", "datatype": "sc_lv", "bitwidth":35, "type": "signal", "bundle":{"name": "res_13_1_V_read_2", "role": "default" }} , 
 	{ "name": "res_13_1_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":35, "type": "signal", "bundle":{"name": "res_13_1_V_read", "role": "default" }} , 
 	{ "name": "res_14_0_V_read_2", "direction": "in", "datatype": "sc_lv", "bitwidth":35, "type": "signal", "bundle":{"name": "res_14_0_V_read_2", "role": "default" }} , 
 	{ "name": "res_14_0_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":35, "type": "signal", "bundle":{"name": "res_14_0_V_read", "role": "default" }} , 
 	{ "name": "res_14_1_V_read_2", "direction": "in", "datatype": "sc_lv", "bitwidth":35, "type": "signal", "bundle":{"name": "res_14_1_V_read_2", "role": "default" }} , 
 	{ "name": "res_14_1_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":35, "type": "signal", "bundle":{"name": "res_14_1_V_read", "role": "default" }} , 
 	{ "name": "res_15_0_V_read_2", "direction": "in", "datatype": "sc_lv", "bitwidth":35, "type": "signal", "bundle":{"name": "res_15_0_V_read_2", "role": "default" }} , 
 	{ "name": "res_15_0_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":35, "type": "signal", "bundle":{"name": "res_15_0_V_read", "role": "default" }} , 
 	{ "name": "res_15_1_V_read_2", "direction": "in", "datatype": "sc_lv", "bitwidth":35, "type": "signal", "bundle":{"name": "res_15_1_V_read_2", "role": "default" }} , 
 	{ "name": "res_15_1_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":35, "type": "signal", "bundle":{"name": "res_15_1_V_read", "role": "default" }} , 
 	{ "name": "res_V_offset", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "res_V_offset", "role": "default" }} , 
 	{ "name": "ap_return_0", "direction": "out", "datatype": "sc_lv", "bitwidth":35, "type": "signal", "bundle":{"name": "ap_return_0", "role": "default" }} , 
 	{ "name": "ap_return_1", "direction": "out", "datatype": "sc_lv", "bitwidth":35, "type": "signal", "bundle":{"name": "ap_return_1", "role": "default" }} , 
 	{ "name": "ap_return_2", "direction": "out", "datatype": "sc_lv", "bitwidth":35, "type": "signal", "bundle":{"name": "ap_return_2", "role": "default" }} , 
 	{ "name": "ap_return_3", "direction": "out", "datatype": "sc_lv", "bitwidth":35, "type": "signal", "bundle":{"name": "ap_return_3", "role": "default" }} , 
 	{ "name": "ap_return_4", "direction": "out", "datatype": "sc_lv", "bitwidth":35, "type": "signal", "bundle":{"name": "ap_return_4", "role": "default" }} , 
 	{ "name": "ap_return_5", "direction": "out", "datatype": "sc_lv", "bitwidth":35, "type": "signal", "bundle":{"name": "ap_return_5", "role": "default" }} , 
 	{ "name": "ap_return_6", "direction": "out", "datatype": "sc_lv", "bitwidth":35, "type": "signal", "bundle":{"name": "ap_return_6", "role": "default" }} , 
 	{ "name": "ap_return_7", "direction": "out", "datatype": "sc_lv", "bitwidth":35, "type": "signal", "bundle":{"name": "ap_return_7", "role": "default" }} , 
 	{ "name": "ap_return_8", "direction": "out", "datatype": "sc_lv", "bitwidth":35, "type": "signal", "bundle":{"name": "ap_return_8", "role": "default" }} , 
 	{ "name": "ap_return_9", "direction": "out", "datatype": "sc_lv", "bitwidth":35, "type": "signal", "bundle":{"name": "ap_return_9", "role": "default" }} , 
 	{ "name": "ap_return_10", "direction": "out", "datatype": "sc_lv", "bitwidth":35, "type": "signal", "bundle":{"name": "ap_return_10", "role": "default" }} , 
 	{ "name": "ap_return_11", "direction": "out", "datatype": "sc_lv", "bitwidth":35, "type": "signal", "bundle":{"name": "ap_return_11", "role": "default" }} , 
 	{ "name": "ap_return_12", "direction": "out", "datatype": "sc_lv", "bitwidth":35, "type": "signal", "bundle":{"name": "ap_return_12", "role": "default" }} , 
 	{ "name": "ap_return_13", "direction": "out", "datatype": "sc_lv", "bitwidth":35, "type": "signal", "bundle":{"name": "ap_return_13", "role": "default" }} , 
 	{ "name": "ap_return_14", "direction": "out", "datatype": "sc_lv", "bitwidth":35, "type": "signal", "bundle":{"name": "ap_return_14", "role": "default" }} , 
 	{ "name": "ap_return_15", "direction": "out", "datatype": "sc_lv", "bitwidth":35, "type": "signal", "bundle":{"name": "ap_return_15", "role": "default" }} , 
 	{ "name": "ap_return_16", "direction": "out", "datatype": "sc_lv", "bitwidth":35, "type": "signal", "bundle":{"name": "ap_return_16", "role": "default" }} , 
 	{ "name": "ap_return_17", "direction": "out", "datatype": "sc_lv", "bitwidth":35, "type": "signal", "bundle":{"name": "ap_return_17", "role": "default" }} , 
 	{ "name": "ap_return_18", "direction": "out", "datatype": "sc_lv", "bitwidth":35, "type": "signal", "bundle":{"name": "ap_return_18", "role": "default" }} , 
 	{ "name": "ap_return_19", "direction": "out", "datatype": "sc_lv", "bitwidth":35, "type": "signal", "bundle":{"name": "ap_return_19", "role": "default" }} , 
 	{ "name": "ap_return_20", "direction": "out", "datatype": "sc_lv", "bitwidth":35, "type": "signal", "bundle":{"name": "ap_return_20", "role": "default" }} , 
 	{ "name": "ap_return_21", "direction": "out", "datatype": "sc_lv", "bitwidth":35, "type": "signal", "bundle":{"name": "ap_return_21", "role": "default" }} , 
 	{ "name": "ap_return_22", "direction": "out", "datatype": "sc_lv", "bitwidth":35, "type": "signal", "bundle":{"name": "ap_return_22", "role": "default" }} , 
 	{ "name": "ap_return_23", "direction": "out", "datatype": "sc_lv", "bitwidth":35, "type": "signal", "bundle":{"name": "ap_return_23", "role": "default" }} , 
 	{ "name": "ap_return_24", "direction": "out", "datatype": "sc_lv", "bitwidth":35, "type": "signal", "bundle":{"name": "ap_return_24", "role": "default" }} , 
 	{ "name": "ap_return_25", "direction": "out", "datatype": "sc_lv", "bitwidth":35, "type": "signal", "bundle":{"name": "ap_return_25", "role": "default" }} , 
 	{ "name": "ap_return_26", "direction": "out", "datatype": "sc_lv", "bitwidth":35, "type": "signal", "bundle":{"name": "ap_return_26", "role": "default" }} , 
 	{ "name": "ap_return_27", "direction": "out", "datatype": "sc_lv", "bitwidth":35, "type": "signal", "bundle":{"name": "ap_return_27", "role": "default" }} , 
 	{ "name": "ap_return_28", "direction": "out", "datatype": "sc_lv", "bitwidth":35, "type": "signal", "bundle":{"name": "ap_return_28", "role": "default" }} , 
 	{ "name": "ap_return_29", "direction": "out", "datatype": "sc_lv", "bitwidth":35, "type": "signal", "bundle":{"name": "ap_return_29", "role": "default" }} , 
 	{ "name": "ap_return_30", "direction": "out", "datatype": "sc_lv", "bitwidth":35, "type": "signal", "bundle":{"name": "ap_return_30", "role": "default" }} , 
 	{ "name": "ap_return_31", "direction": "out", "datatype": "sc_lv", "bitwidth":35, "type": "signal", "bundle":{"name": "ap_return_31", "role": "default" }} , 
 	{ "name": "ap_ce", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "ce", "bundle":{"name": "ap_ce", "role": "default" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "",
		"CDFG" : "matmul_ap_fixed_ap_fixed_2ul_2ul_2ul_8ul_s",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "1", "EstimateLatencyMin" : "1", "EstimateLatencyMax" : "1",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "a_0_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "a_0_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "a_1_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "a_1_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "a_2_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "a_2_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "a_3_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "a_3_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "a_V_offset", "Type" : "None", "Direction" : "I"},
			{"Name" : "b_0_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "b_0_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "b_1_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "b_1_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "b_2_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "b_2_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "b_3_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "b_3_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "b_4_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "b_4_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "b_5_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "b_5_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "b_6_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "b_6_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "b_7_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "b_7_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "b_8_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "b_8_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "b_9_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "b_9_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "b_10_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "b_10_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "b_11_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "b_11_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "b_12_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "b_12_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "b_13_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "b_13_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "b_14_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "b_14_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "b_15_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "b_15_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "b_V_offset", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_0_0_V_read_4", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_0_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_0_1_V_read_4", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_0_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_1_0_V_read_4", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_1_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_1_1_V_read_4", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_1_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_2_0_V_read_4", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_2_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_2_1_V_read_4", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_2_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_3_0_V_read_4", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_3_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_3_1_V_read_4", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_3_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_4_0_V_read_2", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_4_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_4_1_V_read_2", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_4_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_5_0_V_read_2", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_5_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_5_1_V_read_2", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_5_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_6_0_V_read_2", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_6_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_6_1_V_read_2", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_6_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_7_0_V_read_2", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_7_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_7_1_V_read_2", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_7_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_8_0_V_read_2", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_8_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_8_1_V_read_2", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_8_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_9_0_V_read_2", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_9_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_9_1_V_read_2", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_9_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_10_0_V_read_2", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_10_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_10_1_V_read_2", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_10_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_11_0_V_read_2", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_11_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_11_1_V_read_2", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_11_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_12_0_V_read_2", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_12_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_12_1_V_read_2", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_12_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_13_0_V_read_2", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_13_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_13_1_V_read_2", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_13_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_14_0_V_read_2", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_14_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_14_1_V_read_2", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_14_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_15_0_V_read_2", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_15_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_15_1_V_read_2", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_15_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_V_offset", "Type" : "None", "Direction" : "I"}]}]}


set ArgLastReadFirstWriteLatency {
	matmul_ap_fixed_ap_fixed_2ul_2ul_2ul_8ul_s {
		a_0_0_V_read {Type I LastRead 0 FirstWrite -1}
		a_0_1_V_read {Type I LastRead 0 FirstWrite -1}
		a_1_0_V_read {Type I LastRead 0 FirstWrite -1}
		a_1_1_V_read {Type I LastRead 0 FirstWrite -1}
		a_2_0_V_read {Type I LastRead 0 FirstWrite -1}
		a_2_1_V_read {Type I LastRead 0 FirstWrite -1}
		a_3_0_V_read {Type I LastRead 0 FirstWrite -1}
		a_3_1_V_read {Type I LastRead 0 FirstWrite -1}
		a_V_offset {Type I LastRead 0 FirstWrite -1}
		b_0_0_V_read {Type I LastRead 0 FirstWrite -1}
		b_0_1_V_read {Type I LastRead 0 FirstWrite -1}
		b_1_0_V_read {Type I LastRead 0 FirstWrite -1}
		b_1_1_V_read {Type I LastRead 0 FirstWrite -1}
		b_2_0_V_read {Type I LastRead 0 FirstWrite -1}
		b_2_1_V_read {Type I LastRead 0 FirstWrite -1}
		b_3_0_V_read {Type I LastRead 0 FirstWrite -1}
		b_3_1_V_read {Type I LastRead 0 FirstWrite -1}
		b_4_0_V_read {Type I LastRead 0 FirstWrite -1}
		b_4_1_V_read {Type I LastRead 0 FirstWrite -1}
		b_5_0_V_read {Type I LastRead 0 FirstWrite -1}
		b_5_1_V_read {Type I LastRead 0 FirstWrite -1}
		b_6_0_V_read {Type I LastRead 0 FirstWrite -1}
		b_6_1_V_read {Type I LastRead 0 FirstWrite -1}
		b_7_0_V_read {Type I LastRead 0 FirstWrite -1}
		b_7_1_V_read {Type I LastRead 0 FirstWrite -1}
		b_8_0_V_read {Type I LastRead 0 FirstWrite -1}
		b_8_1_V_read {Type I LastRead 0 FirstWrite -1}
		b_9_0_V_read {Type I LastRead 0 FirstWrite -1}
		b_9_1_V_read {Type I LastRead 0 FirstWrite -1}
		b_10_0_V_read {Type I LastRead 0 FirstWrite -1}
		b_10_1_V_read {Type I LastRead 0 FirstWrite -1}
		b_11_0_V_read {Type I LastRead 0 FirstWrite -1}
		b_11_1_V_read {Type I LastRead 0 FirstWrite -1}
		b_12_0_V_read {Type I LastRead 0 FirstWrite -1}
		b_12_1_V_read {Type I LastRead 0 FirstWrite -1}
		b_13_0_V_read {Type I LastRead 0 FirstWrite -1}
		b_13_1_V_read {Type I LastRead 0 FirstWrite -1}
		b_14_0_V_read {Type I LastRead 0 FirstWrite -1}
		b_14_1_V_read {Type I LastRead 0 FirstWrite -1}
		b_15_0_V_read {Type I LastRead 0 FirstWrite -1}
		b_15_1_V_read {Type I LastRead 0 FirstWrite -1}
		b_V_offset {Type I LastRead 0 FirstWrite -1}
		res_0_0_V_read_4 {Type I LastRead 0 FirstWrite -1}
		res_0_0_V_read {Type I LastRead 0 FirstWrite -1}
		res_0_1_V_read_4 {Type I LastRead 0 FirstWrite -1}
		res_0_1_V_read {Type I LastRead 0 FirstWrite -1}
		res_1_0_V_read_4 {Type I LastRead 0 FirstWrite -1}
		res_1_0_V_read {Type I LastRead 0 FirstWrite -1}
		res_1_1_V_read_4 {Type I LastRead 0 FirstWrite -1}
		res_1_1_V_read {Type I LastRead 0 FirstWrite -1}
		res_2_0_V_read_4 {Type I LastRead 0 FirstWrite -1}
		res_2_0_V_read {Type I LastRead 0 FirstWrite -1}
		res_2_1_V_read_4 {Type I LastRead 0 FirstWrite -1}
		res_2_1_V_read {Type I LastRead 0 FirstWrite -1}
		res_3_0_V_read_4 {Type I LastRead 0 FirstWrite -1}
		res_3_0_V_read {Type I LastRead 0 FirstWrite -1}
		res_3_1_V_read_4 {Type I LastRead 0 FirstWrite -1}
		res_3_1_V_read {Type I LastRead 0 FirstWrite -1}
		res_4_0_V_read_2 {Type I LastRead 0 FirstWrite -1}
		res_4_0_V_read {Type I LastRead 0 FirstWrite -1}
		res_4_1_V_read_2 {Type I LastRead 0 FirstWrite -1}
		res_4_1_V_read {Type I LastRead 0 FirstWrite -1}
		res_5_0_V_read_2 {Type I LastRead 0 FirstWrite -1}
		res_5_0_V_read {Type I LastRead 0 FirstWrite -1}
		res_5_1_V_read_2 {Type I LastRead 0 FirstWrite -1}
		res_5_1_V_read {Type I LastRead 0 FirstWrite -1}
		res_6_0_V_read_2 {Type I LastRead 0 FirstWrite -1}
		res_6_0_V_read {Type I LastRead 0 FirstWrite -1}
		res_6_1_V_read_2 {Type I LastRead 0 FirstWrite -1}
		res_6_1_V_read {Type I LastRead 0 FirstWrite -1}
		res_7_0_V_read_2 {Type I LastRead 0 FirstWrite -1}
		res_7_0_V_read {Type I LastRead 0 FirstWrite -1}
		res_7_1_V_read_2 {Type I LastRead 0 FirstWrite -1}
		res_7_1_V_read {Type I LastRead 0 FirstWrite -1}
		res_8_0_V_read_2 {Type I LastRead 0 FirstWrite -1}
		res_8_0_V_read {Type I LastRead 0 FirstWrite -1}
		res_8_1_V_read_2 {Type I LastRead 0 FirstWrite -1}
		res_8_1_V_read {Type I LastRead 0 FirstWrite -1}
		res_9_0_V_read_2 {Type I LastRead 0 FirstWrite -1}
		res_9_0_V_read {Type I LastRead 0 FirstWrite -1}
		res_9_1_V_read_2 {Type I LastRead 0 FirstWrite -1}
		res_9_1_V_read {Type I LastRead 0 FirstWrite -1}
		res_10_0_V_read_2 {Type I LastRead 0 FirstWrite -1}
		res_10_0_V_read {Type I LastRead 0 FirstWrite -1}
		res_10_1_V_read_2 {Type I LastRead 0 FirstWrite -1}
		res_10_1_V_read {Type I LastRead 0 FirstWrite -1}
		res_11_0_V_read_2 {Type I LastRead 0 FirstWrite -1}
		res_11_0_V_read {Type I LastRead 0 FirstWrite -1}
		res_11_1_V_read_2 {Type I LastRead 0 FirstWrite -1}
		res_11_1_V_read {Type I LastRead 0 FirstWrite -1}
		res_12_0_V_read_2 {Type I LastRead 0 FirstWrite -1}
		res_12_0_V_read {Type I LastRead 0 FirstWrite -1}
		res_12_1_V_read_2 {Type I LastRead 0 FirstWrite -1}
		res_12_1_V_read {Type I LastRead 0 FirstWrite -1}
		res_13_0_V_read_2 {Type I LastRead 0 FirstWrite -1}
		res_13_0_V_read {Type I LastRead 0 FirstWrite -1}
		res_13_1_V_read_2 {Type I LastRead 0 FirstWrite -1}
		res_13_1_V_read {Type I LastRead 0 FirstWrite -1}
		res_14_0_V_read_2 {Type I LastRead 0 FirstWrite -1}
		res_14_0_V_read {Type I LastRead 0 FirstWrite -1}
		res_14_1_V_read_2 {Type I LastRead 0 FirstWrite -1}
		res_14_1_V_read {Type I LastRead 0 FirstWrite -1}
		res_15_0_V_read_2 {Type I LastRead 0 FirstWrite -1}
		res_15_0_V_read {Type I LastRead 0 FirstWrite -1}
		res_15_1_V_read_2 {Type I LastRead 0 FirstWrite -1}
		res_15_1_V_read {Type I LastRead 0 FirstWrite -1}
		res_V_offset {Type I LastRead 0 FirstWrite -1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "1", "Max" : "1"}
	, {"Name" : "Interval", "Min" : "1", "Max" : "1"}
]}

set PipelineEnableSignalInfo {[
]}

set Spec2ImplPortList { 
	a_0_0_V_read { ap_none {  { a_0_0_V_read in_data 0 35 } } }
	a_0_1_V_read { ap_none {  { a_0_1_V_read in_data 0 35 } } }
	a_1_0_V_read { ap_none {  { a_1_0_V_read in_data 0 35 } } }
	a_1_1_V_read { ap_none {  { a_1_1_V_read in_data 0 35 } } }
	a_2_0_V_read { ap_none {  { a_2_0_V_read in_data 0 35 } } }
	a_2_1_V_read { ap_none {  { a_2_1_V_read in_data 0 35 } } }
	a_3_0_V_read { ap_none {  { a_3_0_V_read in_data 0 35 } } }
	a_3_1_V_read { ap_none {  { a_3_1_V_read in_data 0 35 } } }
	a_V_offset { ap_none {  { a_V_offset in_data 0 1 } } }
	b_0_0_V_read { ap_none {  { b_0_0_V_read in_data 0 35 } } }
	b_0_1_V_read { ap_none {  { b_0_1_V_read in_data 0 35 } } }
	b_1_0_V_read { ap_none {  { b_1_0_V_read in_data 0 35 } } }
	b_1_1_V_read { ap_none {  { b_1_1_V_read in_data 0 35 } } }
	b_2_0_V_read { ap_none {  { b_2_0_V_read in_data 0 35 } } }
	b_2_1_V_read { ap_none {  { b_2_1_V_read in_data 0 35 } } }
	b_3_0_V_read { ap_none {  { b_3_0_V_read in_data 0 35 } } }
	b_3_1_V_read { ap_none {  { b_3_1_V_read in_data 0 35 } } }
	b_4_0_V_read { ap_none {  { b_4_0_V_read in_data 0 35 } } }
	b_4_1_V_read { ap_none {  { b_4_1_V_read in_data 0 35 } } }
	b_5_0_V_read { ap_none {  { b_5_0_V_read in_data 0 35 } } }
	b_5_1_V_read { ap_none {  { b_5_1_V_read in_data 0 35 } } }
	b_6_0_V_read { ap_none {  { b_6_0_V_read in_data 0 35 } } }
	b_6_1_V_read { ap_none {  { b_6_1_V_read in_data 0 35 } } }
	b_7_0_V_read { ap_none {  { b_7_0_V_read in_data 0 35 } } }
	b_7_1_V_read { ap_none {  { b_7_1_V_read in_data 0 35 } } }
	b_8_0_V_read { ap_none {  { b_8_0_V_read in_data 0 35 } } }
	b_8_1_V_read { ap_none {  { b_8_1_V_read in_data 0 35 } } }
	b_9_0_V_read { ap_none {  { b_9_0_V_read in_data 0 35 } } }
	b_9_1_V_read { ap_none {  { b_9_1_V_read in_data 0 35 } } }
	b_10_0_V_read { ap_none {  { b_10_0_V_read in_data 0 35 } } }
	b_10_1_V_read { ap_none {  { b_10_1_V_read in_data 0 35 } } }
	b_11_0_V_read { ap_none {  { b_11_0_V_read in_data 0 35 } } }
	b_11_1_V_read { ap_none {  { b_11_1_V_read in_data 0 35 } } }
	b_12_0_V_read { ap_none {  { b_12_0_V_read in_data 0 35 } } }
	b_12_1_V_read { ap_none {  { b_12_1_V_read in_data 0 35 } } }
	b_13_0_V_read { ap_none {  { b_13_0_V_read in_data 0 35 } } }
	b_13_1_V_read { ap_none {  { b_13_1_V_read in_data 0 35 } } }
	b_14_0_V_read { ap_none {  { b_14_0_V_read in_data 0 35 } } }
	b_14_1_V_read { ap_none {  { b_14_1_V_read in_data 0 35 } } }
	b_15_0_V_read { ap_none {  { b_15_0_V_read in_data 0 35 } } }
	b_15_1_V_read { ap_none {  { b_15_1_V_read in_data 0 35 } } }
	b_V_offset { ap_none {  { b_V_offset in_data 0 1 } } }
	res_0_0_V_read_4 { ap_none {  { res_0_0_V_read_4 in_data 0 35 } } }
	res_0_0_V_read { ap_none {  { res_0_0_V_read in_data 0 35 } } }
	res_0_1_V_read_4 { ap_none {  { res_0_1_V_read_4 in_data 0 35 } } }
	res_0_1_V_read { ap_none {  { res_0_1_V_read in_data 0 35 } } }
	res_1_0_V_read_4 { ap_none {  { res_1_0_V_read_4 in_data 0 35 } } }
	res_1_0_V_read { ap_none {  { res_1_0_V_read in_data 0 35 } } }
	res_1_1_V_read_4 { ap_none {  { res_1_1_V_read_4 in_data 0 35 } } }
	res_1_1_V_read { ap_none {  { res_1_1_V_read in_data 0 35 } } }
	res_2_0_V_read_4 { ap_none {  { res_2_0_V_read_4 in_data 0 35 } } }
	res_2_0_V_read { ap_none {  { res_2_0_V_read in_data 0 35 } } }
	res_2_1_V_read_4 { ap_none {  { res_2_1_V_read_4 in_data 0 35 } } }
	res_2_1_V_read { ap_none {  { res_2_1_V_read in_data 0 35 } } }
	res_3_0_V_read_4 { ap_none {  { res_3_0_V_read_4 in_data 0 35 } } }
	res_3_0_V_read { ap_none {  { res_3_0_V_read in_data 0 35 } } }
	res_3_1_V_read_4 { ap_none {  { res_3_1_V_read_4 in_data 0 35 } } }
	res_3_1_V_read { ap_none {  { res_3_1_V_read in_data 0 35 } } }
	res_4_0_V_read_2 { ap_none {  { res_4_0_V_read_2 in_data 0 35 } } }
	res_4_0_V_read { ap_none {  { res_4_0_V_read in_data 0 35 } } }
	res_4_1_V_read_2 { ap_none {  { res_4_1_V_read_2 in_data 0 35 } } }
	res_4_1_V_read { ap_none {  { res_4_1_V_read in_data 0 35 } } }
	res_5_0_V_read_2 { ap_none {  { res_5_0_V_read_2 in_data 0 35 } } }
	res_5_0_V_read { ap_none {  { res_5_0_V_read in_data 0 35 } } }
	res_5_1_V_read_2 { ap_none {  { res_5_1_V_read_2 in_data 0 35 } } }
	res_5_1_V_read { ap_none {  { res_5_1_V_read in_data 0 35 } } }
	res_6_0_V_read_2 { ap_none {  { res_6_0_V_read_2 in_data 0 35 } } }
	res_6_0_V_read { ap_none {  { res_6_0_V_read in_data 0 35 } } }
	res_6_1_V_read_2 { ap_none {  { res_6_1_V_read_2 in_data 0 35 } } }
	res_6_1_V_read { ap_none {  { res_6_1_V_read in_data 0 35 } } }
	res_7_0_V_read_2 { ap_none {  { res_7_0_V_read_2 in_data 0 35 } } }
	res_7_0_V_read { ap_none {  { res_7_0_V_read in_data 0 35 } } }
	res_7_1_V_read_2 { ap_none {  { res_7_1_V_read_2 in_data 0 35 } } }
	res_7_1_V_read { ap_none {  { res_7_1_V_read in_data 0 35 } } }
	res_8_0_V_read_2 { ap_none {  { res_8_0_V_read_2 in_data 0 35 } } }
	res_8_0_V_read { ap_none {  { res_8_0_V_read in_data 0 35 } } }
	res_8_1_V_read_2 { ap_none {  { res_8_1_V_read_2 in_data 0 35 } } }
	res_8_1_V_read { ap_none {  { res_8_1_V_read in_data 0 35 } } }
	res_9_0_V_read_2 { ap_none {  { res_9_0_V_read_2 in_data 0 35 } } }
	res_9_0_V_read { ap_none {  { res_9_0_V_read in_data 0 35 } } }
	res_9_1_V_read_2 { ap_none {  { res_9_1_V_read_2 in_data 0 35 } } }
	res_9_1_V_read { ap_none {  { res_9_1_V_read in_data 0 35 } } }
	res_10_0_V_read_2 { ap_none {  { res_10_0_V_read_2 in_data 0 35 } } }
	res_10_0_V_read { ap_none {  { res_10_0_V_read in_data 0 35 } } }
	res_10_1_V_read_2 { ap_none {  { res_10_1_V_read_2 in_data 0 35 } } }
	res_10_1_V_read { ap_none {  { res_10_1_V_read in_data 0 35 } } }
	res_11_0_V_read_2 { ap_none {  { res_11_0_V_read_2 in_data 0 35 } } }
	res_11_0_V_read { ap_none {  { res_11_0_V_read in_data 0 35 } } }
	res_11_1_V_read_2 { ap_none {  { res_11_1_V_read_2 in_data 0 35 } } }
	res_11_1_V_read { ap_none {  { res_11_1_V_read in_data 0 35 } } }
	res_12_0_V_read_2 { ap_none {  { res_12_0_V_read_2 in_data 0 35 } } }
	res_12_0_V_read { ap_none {  { res_12_0_V_read in_data 0 35 } } }
	res_12_1_V_read_2 { ap_none {  { res_12_1_V_read_2 in_data 0 35 } } }
	res_12_1_V_read { ap_none {  { res_12_1_V_read in_data 0 35 } } }
	res_13_0_V_read_2 { ap_none {  { res_13_0_V_read_2 in_data 0 35 } } }
	res_13_0_V_read { ap_none {  { res_13_0_V_read in_data 0 35 } } }
	res_13_1_V_read_2 { ap_none {  { res_13_1_V_read_2 in_data 0 35 } } }
	res_13_1_V_read { ap_none {  { res_13_1_V_read in_data 0 35 } } }
	res_14_0_V_read_2 { ap_none {  { res_14_0_V_read_2 in_data 0 35 } } }
	res_14_0_V_read { ap_none {  { res_14_0_V_read in_data 0 35 } } }
	res_14_1_V_read_2 { ap_none {  { res_14_1_V_read_2 in_data 0 35 } } }
	res_14_1_V_read { ap_none {  { res_14_1_V_read in_data 0 35 } } }
	res_15_0_V_read_2 { ap_none {  { res_15_0_V_read_2 in_data 0 35 } } }
	res_15_0_V_read { ap_none {  { res_15_0_V_read in_data 0 35 } } }
	res_15_1_V_read_2 { ap_none {  { res_15_1_V_read_2 in_data 0 35 } } }
	res_15_1_V_read { ap_none {  { res_15_1_V_read in_data 0 35 } } }
	res_V_offset { ap_none {  { res_V_offset in_data 0 1 } } }
}
