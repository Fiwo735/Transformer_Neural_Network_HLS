set moduleName transpose_2d_ap_fixed_sa_transpose_config0_s
set isTopModule 0
set isTaskLevelControl 1
set isCombinational 1
set isDatapathOnly 0
set isFreeRunPipelineModule 0
set isPipelined 0
set pipeline_type function
set FunctionProtocol ap_ctrl_hs
set isOneStateSeq 0
set ProfileFlag 0
set StallSigGenFlag 0
set isEnableWaveformDebug 1
set C_modelName {transpose_2d<ap_fixed,sa_transpose_config0>}
set C_modelType { int 1120 }
set C_modelArgList {
	{ data_0_0_V_read int 35 regular  }
	{ data_0_1_V_read int 35 regular  }
	{ data_1_0_V_read int 35 regular  }
	{ data_1_1_V_read int 35 regular  }
	{ data_2_0_V_read int 35 regular  }
	{ data_2_1_V_read int 35 regular  }
	{ data_3_0_V_read int 35 regular  }
	{ data_3_1_V_read int 35 regular  }
	{ data_4_0_V_read int 35 regular  }
	{ data_4_1_V_read int 35 regular  }
	{ data_5_0_V_read int 35 regular  }
	{ data_5_1_V_read int 35 regular  }
	{ data_6_0_V_read int 35 regular  }
	{ data_6_1_V_read int 35 regular  }
	{ data_7_0_V_read int 35 regular  }
	{ data_7_1_V_read int 35 regular  }
	{ data_8_0_V_read int 35 regular  }
	{ data_8_1_V_read int 35 regular  }
	{ data_9_0_V_read int 35 regular  }
	{ data_9_1_V_read int 35 regular  }
	{ data_10_0_V_read int 35 regular  }
	{ data_10_1_V_read int 35 regular  }
	{ data_11_0_V_read int 35 regular  }
	{ data_11_1_V_read int 35 regular  }
	{ data_12_0_V_read int 35 regular  }
	{ data_12_1_V_read int 35 regular  }
	{ data_13_0_V_read int 35 regular  }
	{ data_13_1_V_read int 35 regular  }
	{ data_14_0_V_read int 35 regular  }
	{ data_14_1_V_read int 35 regular  }
	{ data_15_0_V_read int 35 regular  }
	{ data_15_1_V_read int 35 regular  }
	{ data_V_offset int 1 regular  }
	{ data_t_0_0_V_read int 35 regular  }
	{ data_t_0_1_V_read int 35 regular  }
	{ data_t_1_0_V_read int 35 regular  }
	{ data_t_1_1_V_read int 35 regular  }
	{ data_t_2_0_V_read int 35 regular  }
	{ data_t_2_1_V_read int 35 regular  }
	{ data_t_3_0_V_read int 35 regular  }
	{ data_t_3_1_V_read int 35 regular  }
	{ data_t_4_0_V_read int 35 regular  }
	{ data_t_4_1_V_read int 35 regular  }
	{ data_t_5_0_V_read int 35 regular  }
	{ data_t_5_1_V_read int 35 regular  }
	{ data_t_6_0_V_read int 35 regular  }
	{ data_t_6_1_V_read int 35 regular  }
	{ data_t_7_0_V_read int 35 regular  }
	{ data_t_7_1_V_read int 35 regular  }
	{ data_t_8_0_V_read int 35 regular  }
	{ data_t_8_1_V_read int 35 regular  }
	{ data_t_9_0_V_read int 35 regular  }
	{ data_t_9_1_V_read int 35 regular  }
	{ data_t_10_0_V_read int 35 regular  }
	{ data_t_10_1_V_read int 35 regular  }
	{ data_t_11_0_V_read int 35 regular  }
	{ data_t_11_1_V_read int 35 regular  }
	{ data_t_12_0_V_read int 35 regular  }
	{ data_t_12_1_V_read int 35 regular  }
	{ data_t_13_0_V_read int 35 regular  }
	{ data_t_13_1_V_read int 35 regular  }
	{ data_t_14_0_V_read int 35 regular  }
	{ data_t_14_1_V_read int 35 regular  }
	{ data_t_15_0_V_read int 35 regular  }
	{ data_t_15_1_V_read int 35 regular  }
	{ data_t_V_offset int 1 regular  }
}
set C_modelArgMapList {[ 
	{ "Name" : "data_0_0_V_read", "interface" : "wire", "bitwidth" : 35, "direction" : "READONLY"} , 
 	{ "Name" : "data_0_1_V_read", "interface" : "wire", "bitwidth" : 35, "direction" : "READONLY"} , 
 	{ "Name" : "data_1_0_V_read", "interface" : "wire", "bitwidth" : 35, "direction" : "READONLY"} , 
 	{ "Name" : "data_1_1_V_read", "interface" : "wire", "bitwidth" : 35, "direction" : "READONLY"} , 
 	{ "Name" : "data_2_0_V_read", "interface" : "wire", "bitwidth" : 35, "direction" : "READONLY"} , 
 	{ "Name" : "data_2_1_V_read", "interface" : "wire", "bitwidth" : 35, "direction" : "READONLY"} , 
 	{ "Name" : "data_3_0_V_read", "interface" : "wire", "bitwidth" : 35, "direction" : "READONLY"} , 
 	{ "Name" : "data_3_1_V_read", "interface" : "wire", "bitwidth" : 35, "direction" : "READONLY"} , 
 	{ "Name" : "data_4_0_V_read", "interface" : "wire", "bitwidth" : 35, "direction" : "READONLY"} , 
 	{ "Name" : "data_4_1_V_read", "interface" : "wire", "bitwidth" : 35, "direction" : "READONLY"} , 
 	{ "Name" : "data_5_0_V_read", "interface" : "wire", "bitwidth" : 35, "direction" : "READONLY"} , 
 	{ "Name" : "data_5_1_V_read", "interface" : "wire", "bitwidth" : 35, "direction" : "READONLY"} , 
 	{ "Name" : "data_6_0_V_read", "interface" : "wire", "bitwidth" : 35, "direction" : "READONLY"} , 
 	{ "Name" : "data_6_1_V_read", "interface" : "wire", "bitwidth" : 35, "direction" : "READONLY"} , 
 	{ "Name" : "data_7_0_V_read", "interface" : "wire", "bitwidth" : 35, "direction" : "READONLY"} , 
 	{ "Name" : "data_7_1_V_read", "interface" : "wire", "bitwidth" : 35, "direction" : "READONLY"} , 
 	{ "Name" : "data_8_0_V_read", "interface" : "wire", "bitwidth" : 35, "direction" : "READONLY"} , 
 	{ "Name" : "data_8_1_V_read", "interface" : "wire", "bitwidth" : 35, "direction" : "READONLY"} , 
 	{ "Name" : "data_9_0_V_read", "interface" : "wire", "bitwidth" : 35, "direction" : "READONLY"} , 
 	{ "Name" : "data_9_1_V_read", "interface" : "wire", "bitwidth" : 35, "direction" : "READONLY"} , 
 	{ "Name" : "data_10_0_V_read", "interface" : "wire", "bitwidth" : 35, "direction" : "READONLY"} , 
 	{ "Name" : "data_10_1_V_read", "interface" : "wire", "bitwidth" : 35, "direction" : "READONLY"} , 
 	{ "Name" : "data_11_0_V_read", "interface" : "wire", "bitwidth" : 35, "direction" : "READONLY"} , 
 	{ "Name" : "data_11_1_V_read", "interface" : "wire", "bitwidth" : 35, "direction" : "READONLY"} , 
 	{ "Name" : "data_12_0_V_read", "interface" : "wire", "bitwidth" : 35, "direction" : "READONLY"} , 
 	{ "Name" : "data_12_1_V_read", "interface" : "wire", "bitwidth" : 35, "direction" : "READONLY"} , 
 	{ "Name" : "data_13_0_V_read", "interface" : "wire", "bitwidth" : 35, "direction" : "READONLY"} , 
 	{ "Name" : "data_13_1_V_read", "interface" : "wire", "bitwidth" : 35, "direction" : "READONLY"} , 
 	{ "Name" : "data_14_0_V_read", "interface" : "wire", "bitwidth" : 35, "direction" : "READONLY"} , 
 	{ "Name" : "data_14_1_V_read", "interface" : "wire", "bitwidth" : 35, "direction" : "READONLY"} , 
 	{ "Name" : "data_15_0_V_read", "interface" : "wire", "bitwidth" : 35, "direction" : "READONLY"} , 
 	{ "Name" : "data_15_1_V_read", "interface" : "wire", "bitwidth" : 35, "direction" : "READONLY"} , 
 	{ "Name" : "data_V_offset", "interface" : "wire", "bitwidth" : 1, "direction" : "READONLY"} , 
 	{ "Name" : "data_t_0_0_V_read", "interface" : "wire", "bitwidth" : 35, "direction" : "READONLY"} , 
 	{ "Name" : "data_t_0_1_V_read", "interface" : "wire", "bitwidth" : 35, "direction" : "READONLY"} , 
 	{ "Name" : "data_t_1_0_V_read", "interface" : "wire", "bitwidth" : 35, "direction" : "READONLY"} , 
 	{ "Name" : "data_t_1_1_V_read", "interface" : "wire", "bitwidth" : 35, "direction" : "READONLY"} , 
 	{ "Name" : "data_t_2_0_V_read", "interface" : "wire", "bitwidth" : 35, "direction" : "READONLY"} , 
 	{ "Name" : "data_t_2_1_V_read", "interface" : "wire", "bitwidth" : 35, "direction" : "READONLY"} , 
 	{ "Name" : "data_t_3_0_V_read", "interface" : "wire", "bitwidth" : 35, "direction" : "READONLY"} , 
 	{ "Name" : "data_t_3_1_V_read", "interface" : "wire", "bitwidth" : 35, "direction" : "READONLY"} , 
 	{ "Name" : "data_t_4_0_V_read", "interface" : "wire", "bitwidth" : 35, "direction" : "READONLY"} , 
 	{ "Name" : "data_t_4_1_V_read", "interface" : "wire", "bitwidth" : 35, "direction" : "READONLY"} , 
 	{ "Name" : "data_t_5_0_V_read", "interface" : "wire", "bitwidth" : 35, "direction" : "READONLY"} , 
 	{ "Name" : "data_t_5_1_V_read", "interface" : "wire", "bitwidth" : 35, "direction" : "READONLY"} , 
 	{ "Name" : "data_t_6_0_V_read", "interface" : "wire", "bitwidth" : 35, "direction" : "READONLY"} , 
 	{ "Name" : "data_t_6_1_V_read", "interface" : "wire", "bitwidth" : 35, "direction" : "READONLY"} , 
 	{ "Name" : "data_t_7_0_V_read", "interface" : "wire", "bitwidth" : 35, "direction" : "READONLY"} , 
 	{ "Name" : "data_t_7_1_V_read", "interface" : "wire", "bitwidth" : 35, "direction" : "READONLY"} , 
 	{ "Name" : "data_t_8_0_V_read", "interface" : "wire", "bitwidth" : 35, "direction" : "READONLY"} , 
 	{ "Name" : "data_t_8_1_V_read", "interface" : "wire", "bitwidth" : 35, "direction" : "READONLY"} , 
 	{ "Name" : "data_t_9_0_V_read", "interface" : "wire", "bitwidth" : 35, "direction" : "READONLY"} , 
 	{ "Name" : "data_t_9_1_V_read", "interface" : "wire", "bitwidth" : 35, "direction" : "READONLY"} , 
 	{ "Name" : "data_t_10_0_V_read", "interface" : "wire", "bitwidth" : 35, "direction" : "READONLY"} , 
 	{ "Name" : "data_t_10_1_V_read", "interface" : "wire", "bitwidth" : 35, "direction" : "READONLY"} , 
 	{ "Name" : "data_t_11_0_V_read", "interface" : "wire", "bitwidth" : 35, "direction" : "READONLY"} , 
 	{ "Name" : "data_t_11_1_V_read", "interface" : "wire", "bitwidth" : 35, "direction" : "READONLY"} , 
 	{ "Name" : "data_t_12_0_V_read", "interface" : "wire", "bitwidth" : 35, "direction" : "READONLY"} , 
 	{ "Name" : "data_t_12_1_V_read", "interface" : "wire", "bitwidth" : 35, "direction" : "READONLY"} , 
 	{ "Name" : "data_t_13_0_V_read", "interface" : "wire", "bitwidth" : 35, "direction" : "READONLY"} , 
 	{ "Name" : "data_t_13_1_V_read", "interface" : "wire", "bitwidth" : 35, "direction" : "READONLY"} , 
 	{ "Name" : "data_t_14_0_V_read", "interface" : "wire", "bitwidth" : 35, "direction" : "READONLY"} , 
 	{ "Name" : "data_t_14_1_V_read", "interface" : "wire", "bitwidth" : 35, "direction" : "READONLY"} , 
 	{ "Name" : "data_t_15_0_V_read", "interface" : "wire", "bitwidth" : 35, "direction" : "READONLY"} , 
 	{ "Name" : "data_t_15_1_V_read", "interface" : "wire", "bitwidth" : 35, "direction" : "READONLY"} , 
 	{ "Name" : "data_t_V_offset", "interface" : "wire", "bitwidth" : 1, "direction" : "READONLY"} , 
 	{ "Name" : "ap_return", "interface" : "wire", "bitwidth" : 1120} ]}
# RTL Port declarations: 
set portNum 99
set portList { 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ data_0_0_V_read sc_in sc_lv 35 signal 0 } 
	{ data_0_1_V_read sc_in sc_lv 35 signal 1 } 
	{ data_1_0_V_read sc_in sc_lv 35 signal 2 } 
	{ data_1_1_V_read sc_in sc_lv 35 signal 3 } 
	{ data_2_0_V_read sc_in sc_lv 35 signal 4 } 
	{ data_2_1_V_read sc_in sc_lv 35 signal 5 } 
	{ data_3_0_V_read sc_in sc_lv 35 signal 6 } 
	{ data_3_1_V_read sc_in sc_lv 35 signal 7 } 
	{ data_4_0_V_read sc_in sc_lv 35 signal 8 } 
	{ data_4_1_V_read sc_in sc_lv 35 signal 9 } 
	{ data_5_0_V_read sc_in sc_lv 35 signal 10 } 
	{ data_5_1_V_read sc_in sc_lv 35 signal 11 } 
	{ data_6_0_V_read sc_in sc_lv 35 signal 12 } 
	{ data_6_1_V_read sc_in sc_lv 35 signal 13 } 
	{ data_7_0_V_read sc_in sc_lv 35 signal 14 } 
	{ data_7_1_V_read sc_in sc_lv 35 signal 15 } 
	{ data_8_0_V_read sc_in sc_lv 35 signal 16 } 
	{ data_8_1_V_read sc_in sc_lv 35 signal 17 } 
	{ data_9_0_V_read sc_in sc_lv 35 signal 18 } 
	{ data_9_1_V_read sc_in sc_lv 35 signal 19 } 
	{ data_10_0_V_read sc_in sc_lv 35 signal 20 } 
	{ data_10_1_V_read sc_in sc_lv 35 signal 21 } 
	{ data_11_0_V_read sc_in sc_lv 35 signal 22 } 
	{ data_11_1_V_read sc_in sc_lv 35 signal 23 } 
	{ data_12_0_V_read sc_in sc_lv 35 signal 24 } 
	{ data_12_1_V_read sc_in sc_lv 35 signal 25 } 
	{ data_13_0_V_read sc_in sc_lv 35 signal 26 } 
	{ data_13_1_V_read sc_in sc_lv 35 signal 27 } 
	{ data_14_0_V_read sc_in sc_lv 35 signal 28 } 
	{ data_14_1_V_read sc_in sc_lv 35 signal 29 } 
	{ data_15_0_V_read sc_in sc_lv 35 signal 30 } 
	{ data_15_1_V_read sc_in sc_lv 35 signal 31 } 
	{ data_V_offset sc_in sc_lv 1 signal 32 } 
	{ data_t_0_0_V_read sc_in sc_lv 35 signal 33 } 
	{ data_t_0_1_V_read sc_in sc_lv 35 signal 34 } 
	{ data_t_1_0_V_read sc_in sc_lv 35 signal 35 } 
	{ data_t_1_1_V_read sc_in sc_lv 35 signal 36 } 
	{ data_t_2_0_V_read sc_in sc_lv 35 signal 37 } 
	{ data_t_2_1_V_read sc_in sc_lv 35 signal 38 } 
	{ data_t_3_0_V_read sc_in sc_lv 35 signal 39 } 
	{ data_t_3_1_V_read sc_in sc_lv 35 signal 40 } 
	{ data_t_4_0_V_read sc_in sc_lv 35 signal 41 } 
	{ data_t_4_1_V_read sc_in sc_lv 35 signal 42 } 
	{ data_t_5_0_V_read sc_in sc_lv 35 signal 43 } 
	{ data_t_5_1_V_read sc_in sc_lv 35 signal 44 } 
	{ data_t_6_0_V_read sc_in sc_lv 35 signal 45 } 
	{ data_t_6_1_V_read sc_in sc_lv 35 signal 46 } 
	{ data_t_7_0_V_read sc_in sc_lv 35 signal 47 } 
	{ data_t_7_1_V_read sc_in sc_lv 35 signal 48 } 
	{ data_t_8_0_V_read sc_in sc_lv 35 signal 49 } 
	{ data_t_8_1_V_read sc_in sc_lv 35 signal 50 } 
	{ data_t_9_0_V_read sc_in sc_lv 35 signal 51 } 
	{ data_t_9_1_V_read sc_in sc_lv 35 signal 52 } 
	{ data_t_10_0_V_read sc_in sc_lv 35 signal 53 } 
	{ data_t_10_1_V_read sc_in sc_lv 35 signal 54 } 
	{ data_t_11_0_V_read sc_in sc_lv 35 signal 55 } 
	{ data_t_11_1_V_read sc_in sc_lv 35 signal 56 } 
	{ data_t_12_0_V_read sc_in sc_lv 35 signal 57 } 
	{ data_t_12_1_V_read sc_in sc_lv 35 signal 58 } 
	{ data_t_13_0_V_read sc_in sc_lv 35 signal 59 } 
	{ data_t_13_1_V_read sc_in sc_lv 35 signal 60 } 
	{ data_t_14_0_V_read sc_in sc_lv 35 signal 61 } 
	{ data_t_14_1_V_read sc_in sc_lv 35 signal 62 } 
	{ data_t_15_0_V_read sc_in sc_lv 35 signal 63 } 
	{ data_t_15_1_V_read sc_in sc_lv 35 signal 64 } 
	{ data_t_V_offset sc_in sc_lv 1 signal 65 } 
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
}
set NewPortList {[ 
	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "data_0_0_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":35, "type": "signal", "bundle":{"name": "data_0_0_V_read", "role": "default" }} , 
 	{ "name": "data_0_1_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":35, "type": "signal", "bundle":{"name": "data_0_1_V_read", "role": "default" }} , 
 	{ "name": "data_1_0_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":35, "type": "signal", "bundle":{"name": "data_1_0_V_read", "role": "default" }} , 
 	{ "name": "data_1_1_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":35, "type": "signal", "bundle":{"name": "data_1_1_V_read", "role": "default" }} , 
 	{ "name": "data_2_0_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":35, "type": "signal", "bundle":{"name": "data_2_0_V_read", "role": "default" }} , 
 	{ "name": "data_2_1_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":35, "type": "signal", "bundle":{"name": "data_2_1_V_read", "role": "default" }} , 
 	{ "name": "data_3_0_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":35, "type": "signal", "bundle":{"name": "data_3_0_V_read", "role": "default" }} , 
 	{ "name": "data_3_1_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":35, "type": "signal", "bundle":{"name": "data_3_1_V_read", "role": "default" }} , 
 	{ "name": "data_4_0_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":35, "type": "signal", "bundle":{"name": "data_4_0_V_read", "role": "default" }} , 
 	{ "name": "data_4_1_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":35, "type": "signal", "bundle":{"name": "data_4_1_V_read", "role": "default" }} , 
 	{ "name": "data_5_0_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":35, "type": "signal", "bundle":{"name": "data_5_0_V_read", "role": "default" }} , 
 	{ "name": "data_5_1_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":35, "type": "signal", "bundle":{"name": "data_5_1_V_read", "role": "default" }} , 
 	{ "name": "data_6_0_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":35, "type": "signal", "bundle":{"name": "data_6_0_V_read", "role": "default" }} , 
 	{ "name": "data_6_1_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":35, "type": "signal", "bundle":{"name": "data_6_1_V_read", "role": "default" }} , 
 	{ "name": "data_7_0_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":35, "type": "signal", "bundle":{"name": "data_7_0_V_read", "role": "default" }} , 
 	{ "name": "data_7_1_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":35, "type": "signal", "bundle":{"name": "data_7_1_V_read", "role": "default" }} , 
 	{ "name": "data_8_0_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":35, "type": "signal", "bundle":{"name": "data_8_0_V_read", "role": "default" }} , 
 	{ "name": "data_8_1_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":35, "type": "signal", "bundle":{"name": "data_8_1_V_read", "role": "default" }} , 
 	{ "name": "data_9_0_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":35, "type": "signal", "bundle":{"name": "data_9_0_V_read", "role": "default" }} , 
 	{ "name": "data_9_1_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":35, "type": "signal", "bundle":{"name": "data_9_1_V_read", "role": "default" }} , 
 	{ "name": "data_10_0_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":35, "type": "signal", "bundle":{"name": "data_10_0_V_read", "role": "default" }} , 
 	{ "name": "data_10_1_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":35, "type": "signal", "bundle":{"name": "data_10_1_V_read", "role": "default" }} , 
 	{ "name": "data_11_0_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":35, "type": "signal", "bundle":{"name": "data_11_0_V_read", "role": "default" }} , 
 	{ "name": "data_11_1_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":35, "type": "signal", "bundle":{"name": "data_11_1_V_read", "role": "default" }} , 
 	{ "name": "data_12_0_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":35, "type": "signal", "bundle":{"name": "data_12_0_V_read", "role": "default" }} , 
 	{ "name": "data_12_1_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":35, "type": "signal", "bundle":{"name": "data_12_1_V_read", "role": "default" }} , 
 	{ "name": "data_13_0_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":35, "type": "signal", "bundle":{"name": "data_13_0_V_read", "role": "default" }} , 
 	{ "name": "data_13_1_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":35, "type": "signal", "bundle":{"name": "data_13_1_V_read", "role": "default" }} , 
 	{ "name": "data_14_0_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":35, "type": "signal", "bundle":{"name": "data_14_0_V_read", "role": "default" }} , 
 	{ "name": "data_14_1_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":35, "type": "signal", "bundle":{"name": "data_14_1_V_read", "role": "default" }} , 
 	{ "name": "data_15_0_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":35, "type": "signal", "bundle":{"name": "data_15_0_V_read", "role": "default" }} , 
 	{ "name": "data_15_1_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":35, "type": "signal", "bundle":{"name": "data_15_1_V_read", "role": "default" }} , 
 	{ "name": "data_V_offset", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "data_V_offset", "role": "default" }} , 
 	{ "name": "data_t_0_0_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":35, "type": "signal", "bundle":{"name": "data_t_0_0_V_read", "role": "default" }} , 
 	{ "name": "data_t_0_1_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":35, "type": "signal", "bundle":{"name": "data_t_0_1_V_read", "role": "default" }} , 
 	{ "name": "data_t_1_0_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":35, "type": "signal", "bundle":{"name": "data_t_1_0_V_read", "role": "default" }} , 
 	{ "name": "data_t_1_1_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":35, "type": "signal", "bundle":{"name": "data_t_1_1_V_read", "role": "default" }} , 
 	{ "name": "data_t_2_0_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":35, "type": "signal", "bundle":{"name": "data_t_2_0_V_read", "role": "default" }} , 
 	{ "name": "data_t_2_1_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":35, "type": "signal", "bundle":{"name": "data_t_2_1_V_read", "role": "default" }} , 
 	{ "name": "data_t_3_0_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":35, "type": "signal", "bundle":{"name": "data_t_3_0_V_read", "role": "default" }} , 
 	{ "name": "data_t_3_1_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":35, "type": "signal", "bundle":{"name": "data_t_3_1_V_read", "role": "default" }} , 
 	{ "name": "data_t_4_0_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":35, "type": "signal", "bundle":{"name": "data_t_4_0_V_read", "role": "default" }} , 
 	{ "name": "data_t_4_1_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":35, "type": "signal", "bundle":{"name": "data_t_4_1_V_read", "role": "default" }} , 
 	{ "name": "data_t_5_0_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":35, "type": "signal", "bundle":{"name": "data_t_5_0_V_read", "role": "default" }} , 
 	{ "name": "data_t_5_1_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":35, "type": "signal", "bundle":{"name": "data_t_5_1_V_read", "role": "default" }} , 
 	{ "name": "data_t_6_0_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":35, "type": "signal", "bundle":{"name": "data_t_6_0_V_read", "role": "default" }} , 
 	{ "name": "data_t_6_1_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":35, "type": "signal", "bundle":{"name": "data_t_6_1_V_read", "role": "default" }} , 
 	{ "name": "data_t_7_0_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":35, "type": "signal", "bundle":{"name": "data_t_7_0_V_read", "role": "default" }} , 
 	{ "name": "data_t_7_1_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":35, "type": "signal", "bundle":{"name": "data_t_7_1_V_read", "role": "default" }} , 
 	{ "name": "data_t_8_0_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":35, "type": "signal", "bundle":{"name": "data_t_8_0_V_read", "role": "default" }} , 
 	{ "name": "data_t_8_1_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":35, "type": "signal", "bundle":{"name": "data_t_8_1_V_read", "role": "default" }} , 
 	{ "name": "data_t_9_0_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":35, "type": "signal", "bundle":{"name": "data_t_9_0_V_read", "role": "default" }} , 
 	{ "name": "data_t_9_1_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":35, "type": "signal", "bundle":{"name": "data_t_9_1_V_read", "role": "default" }} , 
 	{ "name": "data_t_10_0_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":35, "type": "signal", "bundle":{"name": "data_t_10_0_V_read", "role": "default" }} , 
 	{ "name": "data_t_10_1_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":35, "type": "signal", "bundle":{"name": "data_t_10_1_V_read", "role": "default" }} , 
 	{ "name": "data_t_11_0_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":35, "type": "signal", "bundle":{"name": "data_t_11_0_V_read", "role": "default" }} , 
 	{ "name": "data_t_11_1_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":35, "type": "signal", "bundle":{"name": "data_t_11_1_V_read", "role": "default" }} , 
 	{ "name": "data_t_12_0_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":35, "type": "signal", "bundle":{"name": "data_t_12_0_V_read", "role": "default" }} , 
 	{ "name": "data_t_12_1_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":35, "type": "signal", "bundle":{"name": "data_t_12_1_V_read", "role": "default" }} , 
 	{ "name": "data_t_13_0_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":35, "type": "signal", "bundle":{"name": "data_t_13_0_V_read", "role": "default" }} , 
 	{ "name": "data_t_13_1_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":35, "type": "signal", "bundle":{"name": "data_t_13_1_V_read", "role": "default" }} , 
 	{ "name": "data_t_14_0_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":35, "type": "signal", "bundle":{"name": "data_t_14_0_V_read", "role": "default" }} , 
 	{ "name": "data_t_14_1_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":35, "type": "signal", "bundle":{"name": "data_t_14_1_V_read", "role": "default" }} , 
 	{ "name": "data_t_15_0_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":35, "type": "signal", "bundle":{"name": "data_t_15_0_V_read", "role": "default" }} , 
 	{ "name": "data_t_15_1_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":35, "type": "signal", "bundle":{"name": "data_t_15_1_V_read", "role": "default" }} , 
 	{ "name": "data_t_V_offset", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "data_t_V_offset", "role": "default" }} , 
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
 	{ "name": "ap_return_31", "direction": "out", "datatype": "sc_lv", "bitwidth":35, "type": "signal", "bundle":{"name": "ap_return_31", "role": "default" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "",
		"CDFG" : "transpose_2d_ap_fixed_sa_transpose_config0_s",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "1", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "0", "EstimateLatencyMin" : "0", "EstimateLatencyMax" : "0",
		"Combinational" : "1",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "data_0_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_0_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_1_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_1_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_2_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_2_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_3_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_3_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_4_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_4_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_5_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_5_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_6_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_6_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_7_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_7_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_8_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_8_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_9_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_9_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_10_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_10_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_11_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_11_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_12_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_12_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_13_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_13_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_14_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_14_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_15_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_15_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_V_offset", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_t_0_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_t_0_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_t_1_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_t_1_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_t_2_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_t_2_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_t_3_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_t_3_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_t_4_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_t_4_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_t_5_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_t_5_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_t_6_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_t_6_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_t_7_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_t_7_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_t_8_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_t_8_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_t_9_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_t_9_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_t_10_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_t_10_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_t_11_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_t_11_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_t_12_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_t_12_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_t_13_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_t_13_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_t_14_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_t_14_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_t_15_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_t_15_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_t_V_offset", "Type" : "None", "Direction" : "I"}]}]}


set ArgLastReadFirstWriteLatency {
	transpose_2d_ap_fixed_sa_transpose_config0_s {
		data_0_0_V_read {Type I LastRead 0 FirstWrite -1}
		data_0_1_V_read {Type I LastRead 0 FirstWrite -1}
		data_1_0_V_read {Type I LastRead 0 FirstWrite -1}
		data_1_1_V_read {Type I LastRead 0 FirstWrite -1}
		data_2_0_V_read {Type I LastRead 0 FirstWrite -1}
		data_2_1_V_read {Type I LastRead 0 FirstWrite -1}
		data_3_0_V_read {Type I LastRead 0 FirstWrite -1}
		data_3_1_V_read {Type I LastRead 0 FirstWrite -1}
		data_4_0_V_read {Type I LastRead 0 FirstWrite -1}
		data_4_1_V_read {Type I LastRead 0 FirstWrite -1}
		data_5_0_V_read {Type I LastRead 0 FirstWrite -1}
		data_5_1_V_read {Type I LastRead 0 FirstWrite -1}
		data_6_0_V_read {Type I LastRead 0 FirstWrite -1}
		data_6_1_V_read {Type I LastRead 0 FirstWrite -1}
		data_7_0_V_read {Type I LastRead 0 FirstWrite -1}
		data_7_1_V_read {Type I LastRead 0 FirstWrite -1}
		data_8_0_V_read {Type I LastRead 0 FirstWrite -1}
		data_8_1_V_read {Type I LastRead 0 FirstWrite -1}
		data_9_0_V_read {Type I LastRead 0 FirstWrite -1}
		data_9_1_V_read {Type I LastRead 0 FirstWrite -1}
		data_10_0_V_read {Type I LastRead 0 FirstWrite -1}
		data_10_1_V_read {Type I LastRead 0 FirstWrite -1}
		data_11_0_V_read {Type I LastRead 0 FirstWrite -1}
		data_11_1_V_read {Type I LastRead 0 FirstWrite -1}
		data_12_0_V_read {Type I LastRead 0 FirstWrite -1}
		data_12_1_V_read {Type I LastRead 0 FirstWrite -1}
		data_13_0_V_read {Type I LastRead 0 FirstWrite -1}
		data_13_1_V_read {Type I LastRead 0 FirstWrite -1}
		data_14_0_V_read {Type I LastRead 0 FirstWrite -1}
		data_14_1_V_read {Type I LastRead 0 FirstWrite -1}
		data_15_0_V_read {Type I LastRead 0 FirstWrite -1}
		data_15_1_V_read {Type I LastRead 0 FirstWrite -1}
		data_V_offset {Type I LastRead 0 FirstWrite -1}
		data_t_0_0_V_read {Type I LastRead 0 FirstWrite -1}
		data_t_0_1_V_read {Type I LastRead 0 FirstWrite -1}
		data_t_1_0_V_read {Type I LastRead 0 FirstWrite -1}
		data_t_1_1_V_read {Type I LastRead 0 FirstWrite -1}
		data_t_2_0_V_read {Type I LastRead 0 FirstWrite -1}
		data_t_2_1_V_read {Type I LastRead 0 FirstWrite -1}
		data_t_3_0_V_read {Type I LastRead 0 FirstWrite -1}
		data_t_3_1_V_read {Type I LastRead 0 FirstWrite -1}
		data_t_4_0_V_read {Type I LastRead 0 FirstWrite -1}
		data_t_4_1_V_read {Type I LastRead 0 FirstWrite -1}
		data_t_5_0_V_read {Type I LastRead 0 FirstWrite -1}
		data_t_5_1_V_read {Type I LastRead 0 FirstWrite -1}
		data_t_6_0_V_read {Type I LastRead 0 FirstWrite -1}
		data_t_6_1_V_read {Type I LastRead 0 FirstWrite -1}
		data_t_7_0_V_read {Type I LastRead 0 FirstWrite -1}
		data_t_7_1_V_read {Type I LastRead 0 FirstWrite -1}
		data_t_8_0_V_read {Type I LastRead 0 FirstWrite -1}
		data_t_8_1_V_read {Type I LastRead 0 FirstWrite -1}
		data_t_9_0_V_read {Type I LastRead 0 FirstWrite -1}
		data_t_9_1_V_read {Type I LastRead 0 FirstWrite -1}
		data_t_10_0_V_read {Type I LastRead 0 FirstWrite -1}
		data_t_10_1_V_read {Type I LastRead 0 FirstWrite -1}
		data_t_11_0_V_read {Type I LastRead 0 FirstWrite -1}
		data_t_11_1_V_read {Type I LastRead 0 FirstWrite -1}
		data_t_12_0_V_read {Type I LastRead 0 FirstWrite -1}
		data_t_12_1_V_read {Type I LastRead 0 FirstWrite -1}
		data_t_13_0_V_read {Type I LastRead 0 FirstWrite -1}
		data_t_13_1_V_read {Type I LastRead 0 FirstWrite -1}
		data_t_14_0_V_read {Type I LastRead 0 FirstWrite -1}
		data_t_14_1_V_read {Type I LastRead 0 FirstWrite -1}
		data_t_15_0_V_read {Type I LastRead 0 FirstWrite -1}
		data_t_15_1_V_read {Type I LastRead 0 FirstWrite -1}
		data_t_V_offset {Type I LastRead 0 FirstWrite -1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "0", "Max" : "0"}
	, {"Name" : "Interval", "Min" : "1", "Max" : "1"}
]}

set PipelineEnableSignalInfo {[
]}

set Spec2ImplPortList { 
	data_0_0_V_read { ap_none {  { data_0_0_V_read in_data 0 35 } } }
	data_0_1_V_read { ap_none {  { data_0_1_V_read in_data 0 35 } } }
	data_1_0_V_read { ap_none {  { data_1_0_V_read in_data 0 35 } } }
	data_1_1_V_read { ap_none {  { data_1_1_V_read in_data 0 35 } } }
	data_2_0_V_read { ap_none {  { data_2_0_V_read in_data 0 35 } } }
	data_2_1_V_read { ap_none {  { data_2_1_V_read in_data 0 35 } } }
	data_3_0_V_read { ap_none {  { data_3_0_V_read in_data 0 35 } } }
	data_3_1_V_read { ap_none {  { data_3_1_V_read in_data 0 35 } } }
	data_4_0_V_read { ap_none {  { data_4_0_V_read in_data 0 35 } } }
	data_4_1_V_read { ap_none {  { data_4_1_V_read in_data 0 35 } } }
	data_5_0_V_read { ap_none {  { data_5_0_V_read in_data 0 35 } } }
	data_5_1_V_read { ap_none {  { data_5_1_V_read in_data 0 35 } } }
	data_6_0_V_read { ap_none {  { data_6_0_V_read in_data 0 35 } } }
	data_6_1_V_read { ap_none {  { data_6_1_V_read in_data 0 35 } } }
	data_7_0_V_read { ap_none {  { data_7_0_V_read in_data 0 35 } } }
	data_7_1_V_read { ap_none {  { data_7_1_V_read in_data 0 35 } } }
	data_8_0_V_read { ap_none {  { data_8_0_V_read in_data 0 35 } } }
	data_8_1_V_read { ap_none {  { data_8_1_V_read in_data 0 35 } } }
	data_9_0_V_read { ap_none {  { data_9_0_V_read in_data 0 35 } } }
	data_9_1_V_read { ap_none {  { data_9_1_V_read in_data 0 35 } } }
	data_10_0_V_read { ap_none {  { data_10_0_V_read in_data 0 35 } } }
	data_10_1_V_read { ap_none {  { data_10_1_V_read in_data 0 35 } } }
	data_11_0_V_read { ap_none {  { data_11_0_V_read in_data 0 35 } } }
	data_11_1_V_read { ap_none {  { data_11_1_V_read in_data 0 35 } } }
	data_12_0_V_read { ap_none {  { data_12_0_V_read in_data 0 35 } } }
	data_12_1_V_read { ap_none {  { data_12_1_V_read in_data 0 35 } } }
	data_13_0_V_read { ap_none {  { data_13_0_V_read in_data 0 35 } } }
	data_13_1_V_read { ap_none {  { data_13_1_V_read in_data 0 35 } } }
	data_14_0_V_read { ap_none {  { data_14_0_V_read in_data 0 35 } } }
	data_14_1_V_read { ap_none {  { data_14_1_V_read in_data 0 35 } } }
	data_15_0_V_read { ap_none {  { data_15_0_V_read in_data 0 35 } } }
	data_15_1_V_read { ap_none {  { data_15_1_V_read in_data 0 35 } } }
	data_V_offset { ap_none {  { data_V_offset in_data 0 1 } } }
	data_t_0_0_V_read { ap_none {  { data_t_0_0_V_read in_data 0 35 } } }
	data_t_0_1_V_read { ap_none {  { data_t_0_1_V_read in_data 0 35 } } }
	data_t_1_0_V_read { ap_none {  { data_t_1_0_V_read in_data 0 35 } } }
	data_t_1_1_V_read { ap_none {  { data_t_1_1_V_read in_data 0 35 } } }
	data_t_2_0_V_read { ap_none {  { data_t_2_0_V_read in_data 0 35 } } }
	data_t_2_1_V_read { ap_none {  { data_t_2_1_V_read in_data 0 35 } } }
	data_t_3_0_V_read { ap_none {  { data_t_3_0_V_read in_data 0 35 } } }
	data_t_3_1_V_read { ap_none {  { data_t_3_1_V_read in_data 0 35 } } }
	data_t_4_0_V_read { ap_none {  { data_t_4_0_V_read in_data 0 35 } } }
	data_t_4_1_V_read { ap_none {  { data_t_4_1_V_read in_data 0 35 } } }
	data_t_5_0_V_read { ap_none {  { data_t_5_0_V_read in_data 0 35 } } }
	data_t_5_1_V_read { ap_none {  { data_t_5_1_V_read in_data 0 35 } } }
	data_t_6_0_V_read { ap_none {  { data_t_6_0_V_read in_data 0 35 } } }
	data_t_6_1_V_read { ap_none {  { data_t_6_1_V_read in_data 0 35 } } }
	data_t_7_0_V_read { ap_none {  { data_t_7_0_V_read in_data 0 35 } } }
	data_t_7_1_V_read { ap_none {  { data_t_7_1_V_read in_data 0 35 } } }
	data_t_8_0_V_read { ap_none {  { data_t_8_0_V_read in_data 0 35 } } }
	data_t_8_1_V_read { ap_none {  { data_t_8_1_V_read in_data 0 35 } } }
	data_t_9_0_V_read { ap_none {  { data_t_9_0_V_read in_data 0 35 } } }
	data_t_9_1_V_read { ap_none {  { data_t_9_1_V_read in_data 0 35 } } }
	data_t_10_0_V_read { ap_none {  { data_t_10_0_V_read in_data 0 35 } } }
	data_t_10_1_V_read { ap_none {  { data_t_10_1_V_read in_data 0 35 } } }
	data_t_11_0_V_read { ap_none {  { data_t_11_0_V_read in_data 0 35 } } }
	data_t_11_1_V_read { ap_none {  { data_t_11_1_V_read in_data 0 35 } } }
	data_t_12_0_V_read { ap_none {  { data_t_12_0_V_read in_data 0 35 } } }
	data_t_12_1_V_read { ap_none {  { data_t_12_1_V_read in_data 0 35 } } }
	data_t_13_0_V_read { ap_none {  { data_t_13_0_V_read in_data 0 35 } } }
	data_t_13_1_V_read { ap_none {  { data_t_13_1_V_read in_data 0 35 } } }
	data_t_14_0_V_read { ap_none {  { data_t_14_0_V_read in_data 0 35 } } }
	data_t_14_1_V_read { ap_none {  { data_t_14_1_V_read in_data 0 35 } } }
	data_t_15_0_V_read { ap_none {  { data_t_15_0_V_read in_data 0 35 } } }
	data_t_15_1_V_read { ap_none {  { data_t_15_1_V_read in_data 0 35 } } }
	data_t_V_offset { ap_none {  { data_t_V_offset in_data 0 1 } } }
}
