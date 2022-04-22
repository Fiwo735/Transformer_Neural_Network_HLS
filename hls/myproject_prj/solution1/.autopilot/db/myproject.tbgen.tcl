set moduleName myproject
set isTopModule 1
set isTaskLevelControl 1
set isCombinational 0
set isDatapathOnly 0
set isFreeRunPipelineModule 0
set isPipelined 1
set pipeline_type function
set FunctionProtocol ap_ctrl_hs
set isOneStateSeq 0
set ProfileFlag 0
set StallSigGenFlag 0
set isEnableWaveformDebug 1
set C_modelName {myproject}
set C_modelType { void 0 }
set C_modelArgList {
	{ fc1_input_V int 256 regular {pointer 0}  }
	{ layer13_out_0_V int 16 regular {pointer 1}  }
	{ layer13_out_1_V int 16 regular {pointer 1}  }
	{ layer13_out_2_V int 16 regular {pointer 1}  }
	{ layer13_out_3_V int 16 regular {pointer 1}  }
	{ layer13_out_4_V int 16 regular {pointer 1}  }
	{ const_size_in_1 int 16 regular {pointer 1}  }
	{ const_size_out_1 int 16 regular {pointer 1}  }
}
set C_modelArgMapList {[ 
	{ "Name" : "fc1_input_V", "interface" : "wire", "bitwidth" : 256, "direction" : "READONLY", "bitSlice":[{"low":0,"up":15,"cElement": [{"cName": "fc1_input.V","cData": "int16","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 0,"up" : 0,"step" : 2}]}]},{"low":16,"up":31,"cElement": [{"cName": "fc1_input.V","cData": "int16","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 1,"up" : 1,"step" : 2}]}]},{"low":32,"up":47,"cElement": [{"cName": "fc1_input.V","cData": "int16","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 2,"up" : 2,"step" : 2}]}]},{"low":48,"up":63,"cElement": [{"cName": "fc1_input.V","cData": "int16","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 3,"up" : 3,"step" : 2}]}]},{"low":64,"up":79,"cElement": [{"cName": "fc1_input.V","cData": "int16","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 4,"up" : 4,"step" : 2}]}]},{"low":80,"up":95,"cElement": [{"cName": "fc1_input.V","cData": "int16","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 5,"up" : 5,"step" : 2}]}]},{"low":96,"up":111,"cElement": [{"cName": "fc1_input.V","cData": "int16","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 6,"up" : 6,"step" : 2}]}]},{"low":112,"up":127,"cElement": [{"cName": "fc1_input.V","cData": "int16","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 7,"up" : 7,"step" : 2}]}]},{"low":128,"up":143,"cElement": [{"cName": "fc1_input.V","cData": "int16","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 8,"up" : 8,"step" : 2}]}]},{"low":144,"up":159,"cElement": [{"cName": "fc1_input.V","cData": "int16","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 9,"up" : 9,"step" : 2}]}]},{"low":160,"up":175,"cElement": [{"cName": "fc1_input.V","cData": "int16","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 10,"up" : 10,"step" : 2}]}]},{"low":176,"up":191,"cElement": [{"cName": "fc1_input.V","cData": "int16","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 11,"up" : 11,"step" : 2}]}]},{"low":192,"up":207,"cElement": [{"cName": "fc1_input.V","cData": "int16","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 12,"up" : 12,"step" : 2}]}]},{"low":208,"up":223,"cElement": [{"cName": "fc1_input.V","cData": "int16","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 13,"up" : 13,"step" : 2}]}]},{"low":224,"up":239,"cElement": [{"cName": "fc1_input.V","cData": "int16","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 14,"up" : 14,"step" : 2}]}]},{"low":240,"up":255,"cElement": [{"cName": "fc1_input.V","cData": "int16","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 15,"up" : 15,"step" : 2}]}]}]} , 
 	{ "Name" : "layer13_out_0_V", "interface" : "wire", "bitwidth" : 16, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":15,"cElement": [{"cName": "layer13_out.V","cData": "int16","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 0,"up" : 0,"step" : 2}]}]}]} , 
 	{ "Name" : "layer13_out_1_V", "interface" : "wire", "bitwidth" : 16, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":15,"cElement": [{"cName": "layer13_out.V","cData": "int16","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 1,"up" : 1,"step" : 2}]}]}]} , 
 	{ "Name" : "layer13_out_2_V", "interface" : "wire", "bitwidth" : 16, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":15,"cElement": [{"cName": "layer13_out.V","cData": "int16","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 2,"up" : 2,"step" : 2}]}]}]} , 
 	{ "Name" : "layer13_out_3_V", "interface" : "wire", "bitwidth" : 16, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":15,"cElement": [{"cName": "layer13_out.V","cData": "int16","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 3,"up" : 3,"step" : 2}]}]}]} , 
 	{ "Name" : "layer13_out_4_V", "interface" : "wire", "bitwidth" : 16, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":15,"cElement": [{"cName": "layer13_out.V","cData": "int16","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 4,"up" : 4,"step" : 2}]}]}]} , 
 	{ "Name" : "const_size_in_1", "interface" : "wire", "bitwidth" : 16, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":15,"cElement": [{"cName": "const_size_in_1","cData": "unsigned short","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 0,"up" : 0,"step" : 1}]}]}]} , 
 	{ "Name" : "const_size_out_1", "interface" : "wire", "bitwidth" : 16, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":15,"cElement": [{"cName": "const_size_out_1","cData": "unsigned short","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 0,"up" : 0,"step" : 1}]}]}]} ]}
# RTL Port declarations: 
set portNum 22
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ fc1_input_V_ap_vld sc_in sc_logic 1 invld 0 } 
	{ fc1_input_V sc_in sc_lv 256 signal 0 } 
	{ layer13_out_0_V sc_out sc_lv 16 signal 1 } 
	{ layer13_out_0_V_ap_vld sc_out sc_logic 1 outvld 1 } 
	{ layer13_out_1_V sc_out sc_lv 16 signal 2 } 
	{ layer13_out_1_V_ap_vld sc_out sc_logic 1 outvld 2 } 
	{ layer13_out_2_V sc_out sc_lv 16 signal 3 } 
	{ layer13_out_2_V_ap_vld sc_out sc_logic 1 outvld 3 } 
	{ layer13_out_3_V sc_out sc_lv 16 signal 4 } 
	{ layer13_out_3_V_ap_vld sc_out sc_logic 1 outvld 4 } 
	{ layer13_out_4_V sc_out sc_lv 16 signal 5 } 
	{ layer13_out_4_V_ap_vld sc_out sc_logic 1 outvld 5 } 
	{ const_size_in_1 sc_out sc_lv 16 signal 6 } 
	{ const_size_in_1_ap_vld sc_out sc_logic 1 outvld 6 } 
	{ const_size_out_1 sc_out sc_lv 16 signal 7 } 
	{ const_size_out_1_ap_vld sc_out sc_logic 1 outvld 7 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "fc1_input_V_ap_vld", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "invld", "bundle":{"name": "fc1_input_V", "role": "ap_vld" }} , 
 	{ "name": "fc1_input_V", "direction": "in", "datatype": "sc_lv", "bitwidth":256, "type": "signal", "bundle":{"name": "fc1_input_V", "role": "default" }} , 
 	{ "name": "layer13_out_0_V", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "layer13_out_0_V", "role": "default" }} , 
 	{ "name": "layer13_out_0_V_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "layer13_out_0_V", "role": "ap_vld" }} , 
 	{ "name": "layer13_out_1_V", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "layer13_out_1_V", "role": "default" }} , 
 	{ "name": "layer13_out_1_V_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "layer13_out_1_V", "role": "ap_vld" }} , 
 	{ "name": "layer13_out_2_V", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "layer13_out_2_V", "role": "default" }} , 
 	{ "name": "layer13_out_2_V_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "layer13_out_2_V", "role": "ap_vld" }} , 
 	{ "name": "layer13_out_3_V", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "layer13_out_3_V", "role": "default" }} , 
 	{ "name": "layer13_out_3_V_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "layer13_out_3_V", "role": "ap_vld" }} , 
 	{ "name": "layer13_out_4_V", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "layer13_out_4_V", "role": "default" }} , 
 	{ "name": "layer13_out_4_V_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "layer13_out_4_V", "role": "ap_vld" }} , 
 	{ "name": "const_size_in_1", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "const_size_in_1", "role": "default" }} , 
 	{ "name": "const_size_in_1_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "const_size_in_1", "role": "ap_vld" }} , 
 	{ "name": "const_size_out_1", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "const_size_out_1", "role": "default" }} , 
 	{ "name": "const_size_out_1_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "const_size_out_1", "role": "ap_vld" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "2", "3", "4", "5", "6", "7", "8"],
		"CDFG" : "myproject",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "10", "EstimateLatencyMin" : "10", "EstimateLatencyMax" : "10",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "fc1_input_V", "Type" : "Vld", "Direction" : "I",
				"BlockSignal" : [
					{"Name" : "fc1_input_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "layer13_out_0_V", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "layer13_out_1_V", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "layer13_out_2_V", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "layer13_out_3_V", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "layer13_out_4_V", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "const_size_in_1", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "const_size_out_1", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "exp_table1", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "8", "SubInstance" : "grp_softmax_latency_ap_fixed_ap_fixed_softmax_config13_s_fu_409", "Port" : "exp_table1"}]},
			{"Name" : "invert_table2", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "8", "SubInstance" : "grp_softmax_latency_ap_fixed_ap_fixed_softmax_config13_s_fu_409", "Port" : "invert_table2"}]}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_fu_123", "Parent" : "0",
		"CDFG" : "dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1",
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
			{"Name" : "data_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_2_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_3_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_4_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_5_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_6_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_7_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_8_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_9_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_10_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_11_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_12_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_13_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_14_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_15_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_16_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_17_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_18_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_19_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_20_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_21_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_22_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_23_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_24_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_25_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_26_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_27_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_28_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_29_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_30_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_31_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_32_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_33_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_34_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_35_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_36_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_37_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_38_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_39_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_40_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_41_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_42_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_43_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_44_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_45_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_46_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_47_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_48_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_49_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_50_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_51_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_52_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_53_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_54_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_55_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_56_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_57_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_58_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_59_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_60_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_61_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_62_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_63_V_read", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "2", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_2_fu_191", "Parent" : "0",
		"CDFG" : "dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_2",
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
			{"Name" : "data_V_read", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "3", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s_fu_197", "Parent" : "0",
		"CDFG" : "dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s",
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
			{"Name" : "data_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_2_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_3_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_4_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_5_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_6_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_7_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_8_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_9_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_10_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_11_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_12_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_13_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_14_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_15_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_16_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_17_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_18_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_19_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_20_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_21_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_22_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_23_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_24_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_25_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_26_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_27_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_28_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_29_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_30_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_31_V_read", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "4", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_dense_latency_ap_fixed_ap_fixed_config11_0_0_0_0_0_0_fu_233", "Parent" : "0",
		"CDFG" : "dense_latency_ap_fixed_ap_fixed_config11_0_0_0_0_0_0",
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
			{"Name" : "data_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_2_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_3_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_4_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_5_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_6_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_7_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_8_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_9_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_10_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_11_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_12_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_13_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_14_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_15_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_16_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_17_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_18_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_19_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_20_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_21_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_22_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_23_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_24_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_25_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_26_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_27_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_28_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_29_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_30_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_31_V_read", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "5", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.call_ret1_relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config4_s_fu_269", "Parent" : "0",
		"CDFG" : "relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config4_s",
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
			{"Name" : "data_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_2_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_3_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_4_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_5_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_6_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_7_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_8_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_9_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_10_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_11_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_12_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_13_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_14_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_15_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_16_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_17_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_18_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_19_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_20_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_21_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_22_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_23_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_24_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_25_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_26_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_27_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_28_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_29_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_30_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_31_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_32_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_33_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_34_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_35_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_36_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_37_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_38_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_39_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_40_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_41_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_42_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_43_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_44_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_45_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_46_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_47_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_48_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_49_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_50_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_51_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_52_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_53_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_54_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_55_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_56_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_57_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_58_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_59_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_60_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_61_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_62_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_63_V_read", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "6", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.call_ret3_relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config7_s_fu_337", "Parent" : "0",
		"CDFG" : "relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config7_s",
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
			{"Name" : "data_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_2_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_3_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_4_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_5_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_6_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_7_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_8_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_9_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_10_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_11_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_12_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_13_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_14_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_15_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_16_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_17_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_18_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_19_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_20_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_21_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_22_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_23_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_24_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_25_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_26_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_27_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_28_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_29_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_30_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_31_V_read", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "7", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.call_ret5_relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config10_s_fu_373", "Parent" : "0",
		"CDFG" : "relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config10_s",
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
			{"Name" : "data_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_2_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_3_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_4_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_5_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_6_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_7_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_8_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_9_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_10_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_11_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_12_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_13_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_14_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_15_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_16_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_17_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_18_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_19_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_20_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_21_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_22_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_23_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_24_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_25_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_26_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_27_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_28_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_29_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_30_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_31_V_read", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "8", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_softmax_latency_ap_fixed_ap_fixed_softmax_config13_s_fu_409", "Parent" : "0", "Child" : ["9", "10", "11", "12", "13", "14", "15"],
		"CDFG" : "softmax_latency_ap_fixed_ap_fixed_softmax_config13_s",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "2", "EstimateLatencyMin" : "2", "EstimateLatencyMax" : "2",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "1",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "data_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_2_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_3_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_4_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "exp_table1", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "invert_table2", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "9", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_softmax_latency_ap_fixed_ap_fixed_softmax_config13_s_fu_409.exp_table1_U", "Parent" : "8"},
	{"ID" : "10", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_softmax_latency_ap_fixed_ap_fixed_softmax_config13_s_fu_409.invert_table2_U", "Parent" : "8"},
	{"ID" : "11", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_softmax_latency_ap_fixed_ap_fixed_softmax_config13_s_fu_409.myproject_mul_mul_14s_18s_26_1_1_U258", "Parent" : "8"},
	{"ID" : "12", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_softmax_latency_ap_fixed_ap_fixed_softmax_config13_s_fu_409.myproject_mul_mul_14s_18s_26_1_1_U259", "Parent" : "8"},
	{"ID" : "13", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_softmax_latency_ap_fixed_ap_fixed_softmax_config13_s_fu_409.myproject_mul_mul_14s_18s_26_1_1_U260", "Parent" : "8"},
	{"ID" : "14", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_softmax_latency_ap_fixed_ap_fixed_softmax_config13_s_fu_409.myproject_mul_mul_14s_18s_26_1_1_U261", "Parent" : "8"},
	{"ID" : "15", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_softmax_latency_ap_fixed_ap_fixed_softmax_config13_s_fu_409.myproject_mul_mul_14s_18s_26_1_1_U262", "Parent" : "8"}]}


set ArgLastReadFirstWriteLatency {
	myproject {
		fc1_input_V {Type I LastRead 0 FirstWrite -1}
		layer13_out_0_V {Type O LastRead -1 FirstWrite 10}
		layer13_out_1_V {Type O LastRead -1 FirstWrite 10}
		layer13_out_2_V {Type O LastRead -1 FirstWrite 10}
		layer13_out_3_V {Type O LastRead -1 FirstWrite 10}
		layer13_out_4_V {Type O LastRead -1 FirstWrite 10}
		const_size_in_1 {Type O LastRead -1 FirstWrite 10}
		const_size_out_1 {Type O LastRead -1 FirstWrite 10}
		exp_table1 {Type I LastRead -1 FirstWrite -1}
		invert_table2 {Type I LastRead -1 FirstWrite -1}}
	dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1 {
		data_0_V_read {Type I LastRead 0 FirstWrite -1}
		data_1_V_read {Type I LastRead 0 FirstWrite -1}
		data_2_V_read {Type I LastRead 0 FirstWrite -1}
		data_3_V_read {Type I LastRead 0 FirstWrite -1}
		data_4_V_read {Type I LastRead 0 FirstWrite -1}
		data_5_V_read {Type I LastRead 0 FirstWrite -1}
		data_6_V_read {Type I LastRead 0 FirstWrite -1}
		data_7_V_read {Type I LastRead 0 FirstWrite -1}
		data_8_V_read {Type I LastRead 0 FirstWrite -1}
		data_9_V_read {Type I LastRead 0 FirstWrite -1}
		data_10_V_read {Type I LastRead 0 FirstWrite -1}
		data_11_V_read {Type I LastRead 0 FirstWrite -1}
		data_12_V_read {Type I LastRead 0 FirstWrite -1}
		data_13_V_read {Type I LastRead 0 FirstWrite -1}
		data_14_V_read {Type I LastRead 0 FirstWrite -1}
		data_15_V_read {Type I LastRead 0 FirstWrite -1}
		data_16_V_read {Type I LastRead 0 FirstWrite -1}
		data_17_V_read {Type I LastRead 0 FirstWrite -1}
		data_18_V_read {Type I LastRead 0 FirstWrite -1}
		data_19_V_read {Type I LastRead 0 FirstWrite -1}
		data_20_V_read {Type I LastRead 0 FirstWrite -1}
		data_21_V_read {Type I LastRead 0 FirstWrite -1}
		data_22_V_read {Type I LastRead 0 FirstWrite -1}
		data_23_V_read {Type I LastRead 0 FirstWrite -1}
		data_24_V_read {Type I LastRead 0 FirstWrite -1}
		data_25_V_read {Type I LastRead 0 FirstWrite -1}
		data_26_V_read {Type I LastRead 0 FirstWrite -1}
		data_27_V_read {Type I LastRead 0 FirstWrite -1}
		data_28_V_read {Type I LastRead 0 FirstWrite -1}
		data_29_V_read {Type I LastRead 0 FirstWrite -1}
		data_30_V_read {Type I LastRead 0 FirstWrite -1}
		data_31_V_read {Type I LastRead 0 FirstWrite -1}
		data_32_V_read {Type I LastRead 0 FirstWrite -1}
		data_33_V_read {Type I LastRead 0 FirstWrite -1}
		data_34_V_read {Type I LastRead 0 FirstWrite -1}
		data_35_V_read {Type I LastRead 0 FirstWrite -1}
		data_36_V_read {Type I LastRead 0 FirstWrite -1}
		data_37_V_read {Type I LastRead 0 FirstWrite -1}
		data_38_V_read {Type I LastRead 0 FirstWrite -1}
		data_39_V_read {Type I LastRead 0 FirstWrite -1}
		data_40_V_read {Type I LastRead 0 FirstWrite -1}
		data_41_V_read {Type I LastRead 0 FirstWrite -1}
		data_42_V_read {Type I LastRead 0 FirstWrite -1}
		data_43_V_read {Type I LastRead 0 FirstWrite -1}
		data_44_V_read {Type I LastRead 0 FirstWrite -1}
		data_45_V_read {Type I LastRead 0 FirstWrite -1}
		data_46_V_read {Type I LastRead 0 FirstWrite -1}
		data_47_V_read {Type I LastRead 0 FirstWrite -1}
		data_48_V_read {Type I LastRead 0 FirstWrite -1}
		data_49_V_read {Type I LastRead 0 FirstWrite -1}
		data_50_V_read {Type I LastRead 0 FirstWrite -1}
		data_51_V_read {Type I LastRead 0 FirstWrite -1}
		data_52_V_read {Type I LastRead 0 FirstWrite -1}
		data_53_V_read {Type I LastRead 0 FirstWrite -1}
		data_54_V_read {Type I LastRead 0 FirstWrite -1}
		data_55_V_read {Type I LastRead 0 FirstWrite -1}
		data_56_V_read {Type I LastRead 0 FirstWrite -1}
		data_57_V_read {Type I LastRead 0 FirstWrite -1}
		data_58_V_read {Type I LastRead 0 FirstWrite -1}
		data_59_V_read {Type I LastRead 0 FirstWrite -1}
		data_60_V_read {Type I LastRead 0 FirstWrite -1}
		data_61_V_read {Type I LastRead 0 FirstWrite -1}
		data_62_V_read {Type I LastRead 0 FirstWrite -1}
		data_63_V_read {Type I LastRead 0 FirstWrite -1}}
	dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_2 {
		data_V_read {Type I LastRead 0 FirstWrite -1}}
	dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s {
		data_0_V_read {Type I LastRead 0 FirstWrite -1}
		data_1_V_read {Type I LastRead 0 FirstWrite -1}
		data_2_V_read {Type I LastRead 0 FirstWrite -1}
		data_3_V_read {Type I LastRead 0 FirstWrite -1}
		data_4_V_read {Type I LastRead 0 FirstWrite -1}
		data_5_V_read {Type I LastRead 0 FirstWrite -1}
		data_6_V_read {Type I LastRead 0 FirstWrite -1}
		data_7_V_read {Type I LastRead 0 FirstWrite -1}
		data_8_V_read {Type I LastRead 0 FirstWrite -1}
		data_9_V_read {Type I LastRead 0 FirstWrite -1}
		data_10_V_read {Type I LastRead 0 FirstWrite -1}
		data_11_V_read {Type I LastRead 0 FirstWrite -1}
		data_12_V_read {Type I LastRead 0 FirstWrite -1}
		data_13_V_read {Type I LastRead 0 FirstWrite -1}
		data_14_V_read {Type I LastRead 0 FirstWrite -1}
		data_15_V_read {Type I LastRead 0 FirstWrite -1}
		data_16_V_read {Type I LastRead 0 FirstWrite -1}
		data_17_V_read {Type I LastRead 0 FirstWrite -1}
		data_18_V_read {Type I LastRead 0 FirstWrite -1}
		data_19_V_read {Type I LastRead 0 FirstWrite -1}
		data_20_V_read {Type I LastRead 0 FirstWrite -1}
		data_21_V_read {Type I LastRead 0 FirstWrite -1}
		data_22_V_read {Type I LastRead 0 FirstWrite -1}
		data_23_V_read {Type I LastRead 0 FirstWrite -1}
		data_24_V_read {Type I LastRead 0 FirstWrite -1}
		data_25_V_read {Type I LastRead 0 FirstWrite -1}
		data_26_V_read {Type I LastRead 0 FirstWrite -1}
		data_27_V_read {Type I LastRead 0 FirstWrite -1}
		data_28_V_read {Type I LastRead 0 FirstWrite -1}
		data_29_V_read {Type I LastRead 0 FirstWrite -1}
		data_30_V_read {Type I LastRead 0 FirstWrite -1}
		data_31_V_read {Type I LastRead 0 FirstWrite -1}}
	dense_latency_ap_fixed_ap_fixed_config11_0_0_0_0_0_0 {
		data_0_V_read {Type I LastRead 0 FirstWrite -1}
		data_1_V_read {Type I LastRead 0 FirstWrite -1}
		data_2_V_read {Type I LastRead 0 FirstWrite -1}
		data_3_V_read {Type I LastRead 0 FirstWrite -1}
		data_4_V_read {Type I LastRead 0 FirstWrite -1}
		data_5_V_read {Type I LastRead 0 FirstWrite -1}
		data_6_V_read {Type I LastRead 0 FirstWrite -1}
		data_7_V_read {Type I LastRead 0 FirstWrite -1}
		data_8_V_read {Type I LastRead 0 FirstWrite -1}
		data_9_V_read {Type I LastRead 0 FirstWrite -1}
		data_10_V_read {Type I LastRead 0 FirstWrite -1}
		data_11_V_read {Type I LastRead 0 FirstWrite -1}
		data_12_V_read {Type I LastRead 0 FirstWrite -1}
		data_13_V_read {Type I LastRead 0 FirstWrite -1}
		data_14_V_read {Type I LastRead 0 FirstWrite -1}
		data_15_V_read {Type I LastRead 0 FirstWrite -1}
		data_16_V_read {Type I LastRead 0 FirstWrite -1}
		data_17_V_read {Type I LastRead 0 FirstWrite -1}
		data_18_V_read {Type I LastRead 0 FirstWrite -1}
		data_19_V_read {Type I LastRead 0 FirstWrite -1}
		data_20_V_read {Type I LastRead 0 FirstWrite -1}
		data_21_V_read {Type I LastRead 0 FirstWrite -1}
		data_22_V_read {Type I LastRead 0 FirstWrite -1}
		data_23_V_read {Type I LastRead 0 FirstWrite -1}
		data_24_V_read {Type I LastRead 0 FirstWrite -1}
		data_25_V_read {Type I LastRead 0 FirstWrite -1}
		data_26_V_read {Type I LastRead 0 FirstWrite -1}
		data_27_V_read {Type I LastRead 0 FirstWrite -1}
		data_28_V_read {Type I LastRead 0 FirstWrite -1}
		data_29_V_read {Type I LastRead 0 FirstWrite -1}
		data_30_V_read {Type I LastRead 0 FirstWrite -1}
		data_31_V_read {Type I LastRead 0 FirstWrite -1}}
	relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config4_s {
		data_0_V_read {Type I LastRead 0 FirstWrite -1}
		data_1_V_read {Type I LastRead 0 FirstWrite -1}
		data_2_V_read {Type I LastRead 0 FirstWrite -1}
		data_3_V_read {Type I LastRead 0 FirstWrite -1}
		data_4_V_read {Type I LastRead 0 FirstWrite -1}
		data_5_V_read {Type I LastRead 0 FirstWrite -1}
		data_6_V_read {Type I LastRead 0 FirstWrite -1}
		data_7_V_read {Type I LastRead 0 FirstWrite -1}
		data_8_V_read {Type I LastRead 0 FirstWrite -1}
		data_9_V_read {Type I LastRead 0 FirstWrite -1}
		data_10_V_read {Type I LastRead 0 FirstWrite -1}
		data_11_V_read {Type I LastRead 0 FirstWrite -1}
		data_12_V_read {Type I LastRead 0 FirstWrite -1}
		data_13_V_read {Type I LastRead 0 FirstWrite -1}
		data_14_V_read {Type I LastRead 0 FirstWrite -1}
		data_15_V_read {Type I LastRead 0 FirstWrite -1}
		data_16_V_read {Type I LastRead 0 FirstWrite -1}
		data_17_V_read {Type I LastRead 0 FirstWrite -1}
		data_18_V_read {Type I LastRead 0 FirstWrite -1}
		data_19_V_read {Type I LastRead 0 FirstWrite -1}
		data_20_V_read {Type I LastRead 0 FirstWrite -1}
		data_21_V_read {Type I LastRead 0 FirstWrite -1}
		data_22_V_read {Type I LastRead 0 FirstWrite -1}
		data_23_V_read {Type I LastRead 0 FirstWrite -1}
		data_24_V_read {Type I LastRead 0 FirstWrite -1}
		data_25_V_read {Type I LastRead 0 FirstWrite -1}
		data_26_V_read {Type I LastRead 0 FirstWrite -1}
		data_27_V_read {Type I LastRead 0 FirstWrite -1}
		data_28_V_read {Type I LastRead 0 FirstWrite -1}
		data_29_V_read {Type I LastRead 0 FirstWrite -1}
		data_30_V_read {Type I LastRead 0 FirstWrite -1}
		data_31_V_read {Type I LastRead 0 FirstWrite -1}
		data_32_V_read {Type I LastRead 0 FirstWrite -1}
		data_33_V_read {Type I LastRead 0 FirstWrite -1}
		data_34_V_read {Type I LastRead 0 FirstWrite -1}
		data_35_V_read {Type I LastRead 0 FirstWrite -1}
		data_36_V_read {Type I LastRead 0 FirstWrite -1}
		data_37_V_read {Type I LastRead 0 FirstWrite -1}
		data_38_V_read {Type I LastRead 0 FirstWrite -1}
		data_39_V_read {Type I LastRead 0 FirstWrite -1}
		data_40_V_read {Type I LastRead 0 FirstWrite -1}
		data_41_V_read {Type I LastRead 0 FirstWrite -1}
		data_42_V_read {Type I LastRead 0 FirstWrite -1}
		data_43_V_read {Type I LastRead 0 FirstWrite -1}
		data_44_V_read {Type I LastRead 0 FirstWrite -1}
		data_45_V_read {Type I LastRead 0 FirstWrite -1}
		data_46_V_read {Type I LastRead 0 FirstWrite -1}
		data_47_V_read {Type I LastRead 0 FirstWrite -1}
		data_48_V_read {Type I LastRead 0 FirstWrite -1}
		data_49_V_read {Type I LastRead 0 FirstWrite -1}
		data_50_V_read {Type I LastRead 0 FirstWrite -1}
		data_51_V_read {Type I LastRead 0 FirstWrite -1}
		data_52_V_read {Type I LastRead 0 FirstWrite -1}
		data_53_V_read {Type I LastRead 0 FirstWrite -1}
		data_54_V_read {Type I LastRead 0 FirstWrite -1}
		data_55_V_read {Type I LastRead 0 FirstWrite -1}
		data_56_V_read {Type I LastRead 0 FirstWrite -1}
		data_57_V_read {Type I LastRead 0 FirstWrite -1}
		data_58_V_read {Type I LastRead 0 FirstWrite -1}
		data_59_V_read {Type I LastRead 0 FirstWrite -1}
		data_60_V_read {Type I LastRead 0 FirstWrite -1}
		data_61_V_read {Type I LastRead 0 FirstWrite -1}
		data_62_V_read {Type I LastRead 0 FirstWrite -1}
		data_63_V_read {Type I LastRead 0 FirstWrite -1}}
	relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config7_s {
		data_0_V_read {Type I LastRead 0 FirstWrite -1}
		data_1_V_read {Type I LastRead 0 FirstWrite -1}
		data_2_V_read {Type I LastRead 0 FirstWrite -1}
		data_3_V_read {Type I LastRead 0 FirstWrite -1}
		data_4_V_read {Type I LastRead 0 FirstWrite -1}
		data_5_V_read {Type I LastRead 0 FirstWrite -1}
		data_6_V_read {Type I LastRead 0 FirstWrite -1}
		data_7_V_read {Type I LastRead 0 FirstWrite -1}
		data_8_V_read {Type I LastRead 0 FirstWrite -1}
		data_9_V_read {Type I LastRead 0 FirstWrite -1}
		data_10_V_read {Type I LastRead 0 FirstWrite -1}
		data_11_V_read {Type I LastRead 0 FirstWrite -1}
		data_12_V_read {Type I LastRead 0 FirstWrite -1}
		data_13_V_read {Type I LastRead 0 FirstWrite -1}
		data_14_V_read {Type I LastRead 0 FirstWrite -1}
		data_15_V_read {Type I LastRead 0 FirstWrite -1}
		data_16_V_read {Type I LastRead 0 FirstWrite -1}
		data_17_V_read {Type I LastRead 0 FirstWrite -1}
		data_18_V_read {Type I LastRead 0 FirstWrite -1}
		data_19_V_read {Type I LastRead 0 FirstWrite -1}
		data_20_V_read {Type I LastRead 0 FirstWrite -1}
		data_21_V_read {Type I LastRead 0 FirstWrite -1}
		data_22_V_read {Type I LastRead 0 FirstWrite -1}
		data_23_V_read {Type I LastRead 0 FirstWrite -1}
		data_24_V_read {Type I LastRead 0 FirstWrite -1}
		data_25_V_read {Type I LastRead 0 FirstWrite -1}
		data_26_V_read {Type I LastRead 0 FirstWrite -1}
		data_27_V_read {Type I LastRead 0 FirstWrite -1}
		data_28_V_read {Type I LastRead 0 FirstWrite -1}
		data_29_V_read {Type I LastRead 0 FirstWrite -1}
		data_30_V_read {Type I LastRead 0 FirstWrite -1}
		data_31_V_read {Type I LastRead 0 FirstWrite -1}}
	relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config10_s {
		data_0_V_read {Type I LastRead 0 FirstWrite -1}
		data_1_V_read {Type I LastRead 0 FirstWrite -1}
		data_2_V_read {Type I LastRead 0 FirstWrite -1}
		data_3_V_read {Type I LastRead 0 FirstWrite -1}
		data_4_V_read {Type I LastRead 0 FirstWrite -1}
		data_5_V_read {Type I LastRead 0 FirstWrite -1}
		data_6_V_read {Type I LastRead 0 FirstWrite -1}
		data_7_V_read {Type I LastRead 0 FirstWrite -1}
		data_8_V_read {Type I LastRead 0 FirstWrite -1}
		data_9_V_read {Type I LastRead 0 FirstWrite -1}
		data_10_V_read {Type I LastRead 0 FirstWrite -1}
		data_11_V_read {Type I LastRead 0 FirstWrite -1}
		data_12_V_read {Type I LastRead 0 FirstWrite -1}
		data_13_V_read {Type I LastRead 0 FirstWrite -1}
		data_14_V_read {Type I LastRead 0 FirstWrite -1}
		data_15_V_read {Type I LastRead 0 FirstWrite -1}
		data_16_V_read {Type I LastRead 0 FirstWrite -1}
		data_17_V_read {Type I LastRead 0 FirstWrite -1}
		data_18_V_read {Type I LastRead 0 FirstWrite -1}
		data_19_V_read {Type I LastRead 0 FirstWrite -1}
		data_20_V_read {Type I LastRead 0 FirstWrite -1}
		data_21_V_read {Type I LastRead 0 FirstWrite -1}
		data_22_V_read {Type I LastRead 0 FirstWrite -1}
		data_23_V_read {Type I LastRead 0 FirstWrite -1}
		data_24_V_read {Type I LastRead 0 FirstWrite -1}
		data_25_V_read {Type I LastRead 0 FirstWrite -1}
		data_26_V_read {Type I LastRead 0 FirstWrite -1}
		data_27_V_read {Type I LastRead 0 FirstWrite -1}
		data_28_V_read {Type I LastRead 0 FirstWrite -1}
		data_29_V_read {Type I LastRead 0 FirstWrite -1}
		data_30_V_read {Type I LastRead 0 FirstWrite -1}
		data_31_V_read {Type I LastRead 0 FirstWrite -1}}
	softmax_latency_ap_fixed_ap_fixed_softmax_config13_s {
		data_0_V_read {Type I LastRead 0 FirstWrite -1}
		data_1_V_read {Type I LastRead 0 FirstWrite -1}
		data_2_V_read {Type I LastRead 0 FirstWrite -1}
		data_3_V_read {Type I LastRead 0 FirstWrite -1}
		data_4_V_read {Type I LastRead 0 FirstWrite -1}
		exp_table1 {Type I LastRead -1 FirstWrite -1}
		invert_table2 {Type I LastRead -1 FirstWrite -1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "10", "Max" : "10"}
	, {"Name" : "Interval", "Min" : "1", "Max" : "1"}
]}

set PipelineEnableSignalInfo {[
	{"Pipeline" : "0", "EnableSignal" : "ap_enable_pp0"}
]}

set Spec2ImplPortList { 
	fc1_input_V { ap_vld {  { fc1_input_V_ap_vld in_vld 0 1 }  { fc1_input_V in_data 0 256 } } }
	layer13_out_0_V { ap_vld {  { layer13_out_0_V out_data 1 16 }  { layer13_out_0_V_ap_vld out_vld 1 1 } } }
	layer13_out_1_V { ap_vld {  { layer13_out_1_V out_data 1 16 }  { layer13_out_1_V_ap_vld out_vld 1 1 } } }
	layer13_out_2_V { ap_vld {  { layer13_out_2_V out_data 1 16 }  { layer13_out_2_V_ap_vld out_vld 1 1 } } }
	layer13_out_3_V { ap_vld {  { layer13_out_3_V out_data 1 16 }  { layer13_out_3_V_ap_vld out_vld 1 1 } } }
	layer13_out_4_V { ap_vld {  { layer13_out_4_V out_data 1 16 }  { layer13_out_4_V_ap_vld out_vld 1 1 } } }
	const_size_in_1 { ap_vld {  { const_size_in_1 out_data 1 16 }  { const_size_in_1_ap_vld out_vld 1 1 } } }
	const_size_out_1 { ap_vld {  { const_size_out_1 out_data 1 16 }  { const_size_out_1_ap_vld out_vld 1 1 } } }
}

set busDeadlockParameterList { 
}

# RTL port scheduling information:
set fifoSchedulingInfoList { 
}

# RTL bus port read request latency information:
set busReadReqLatencyList { 
}

# RTL bus port write response latency information:
set busWriteResLatencyList { 
}

# RTL array port load latency information:
set memoryLoadLatencyList { 
}
set moduleName myproject
set isTopModule 1
set isTaskLevelControl 1
set isCombinational 0
set isDatapathOnly 0
set isFreeRunPipelineModule 0
set isPipelined 0
set pipeline_type none
set FunctionProtocol ap_ctrl_hs
set isOneStateSeq 0
set ProfileFlag 0
set StallSigGenFlag 0
set isEnableWaveformDebug 1
set C_modelName {myproject}
set C_modelType { void 0 }
set C_modelArgList {
	{ data_in_V int 35 regular {array 16 { 1 1 } 1 1 }  }
	{ data_out_V int 35 regular {array 5 { 0 0 } 0 1 }  }
	{ const_size_in_1 int 16 regular {pointer 1}  }
	{ const_size_out_1 int 16 regular {pointer 1}  }
}
set C_modelArgMapList {[ 
	{ "Name" : "data_in_V", "interface" : "memory", "bitwidth" : 35, "direction" : "READONLY", "bitSlice":[{"low":0,"up":34,"cElement": [{"cName": "data_in.V","cData": "int35","bit_use": { "low": 0,"up": 34},"cArray": [{"low" : 0,"up" : 15,"step" : 1}]}]}]} , 
 	{ "Name" : "data_out_V", "interface" : "memory", "bitwidth" : 35, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":34,"cElement": [{"cName": "data_out.V","cData": "int35","bit_use": { "low": 0,"up": 34},"cArray": [{"low" : 0,"up" : 4,"step" : 1}]}]}]} , 
 	{ "Name" : "const_size_in_1", "interface" : "wire", "bitwidth" : 16, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":15,"cElement": [{"cName": "const_size_in_1","cData": "unsigned short","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 0,"up" : 0,"step" : 1}]}]}]} , 
 	{ "Name" : "const_size_out_1", "interface" : "wire", "bitwidth" : 16, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":15,"cElement": [{"cName": "const_size_out_1","cData": "unsigned short","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 0,"up" : 0,"step" : 1}]}]}]} ]}
# RTL Port declarations: 
set portNum 24
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ data_in_V_address0 sc_out sc_lv 4 signal 0 } 
	{ data_in_V_ce0 sc_out sc_logic 1 signal 0 } 
	{ data_in_V_q0 sc_in sc_lv 35 signal 0 } 
	{ data_in_V_address1 sc_out sc_lv 4 signal 0 } 
	{ data_in_V_ce1 sc_out sc_logic 1 signal 0 } 
	{ data_in_V_q1 sc_in sc_lv 35 signal 0 } 
	{ data_out_V_address0 sc_out sc_lv 3 signal 1 } 
	{ data_out_V_ce0 sc_out sc_logic 1 signal 1 } 
	{ data_out_V_we0 sc_out sc_logic 1 signal 1 } 
	{ data_out_V_d0 sc_out sc_lv 35 signal 1 } 
	{ data_out_V_address1 sc_out sc_lv 3 signal 1 } 
	{ data_out_V_ce1 sc_out sc_logic 1 signal 1 } 
	{ data_out_V_we1 sc_out sc_logic 1 signal 1 } 
	{ data_out_V_d1 sc_out sc_lv 35 signal 1 } 
	{ const_size_in_1 sc_out sc_lv 16 signal 2 } 
	{ const_size_in_1_ap_vld sc_out sc_logic 1 outvld 2 } 
	{ const_size_out_1 sc_out sc_lv 16 signal 3 } 
	{ const_size_out_1_ap_vld sc_out sc_logic 1 outvld 3 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "data_in_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "data_in_V", "role": "address0" }} , 
 	{ "name": "data_in_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "data_in_V", "role": "ce0" }} , 
 	{ "name": "data_in_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":35, "type": "signal", "bundle":{"name": "data_in_V", "role": "q0" }} , 
 	{ "name": "data_in_V_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "data_in_V", "role": "address1" }} , 
 	{ "name": "data_in_V_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "data_in_V", "role": "ce1" }} , 
 	{ "name": "data_in_V_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":35, "type": "signal", "bundle":{"name": "data_in_V", "role": "q1" }} , 
 	{ "name": "data_out_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "data_out_V", "role": "address0" }} , 
 	{ "name": "data_out_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "data_out_V", "role": "ce0" }} , 
 	{ "name": "data_out_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "data_out_V", "role": "we0" }} , 
 	{ "name": "data_out_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":35, "type": "signal", "bundle":{"name": "data_out_V", "role": "d0" }} , 
 	{ "name": "data_out_V_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "data_out_V", "role": "address1" }} , 
 	{ "name": "data_out_V_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "data_out_V", "role": "ce1" }} , 
 	{ "name": "data_out_V_we1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "data_out_V", "role": "we1" }} , 
 	{ "name": "data_out_V_d1", "direction": "out", "datatype": "sc_lv", "bitwidth":35, "type": "signal", "bundle":{"name": "data_out_V", "role": "d1" }} , 
 	{ "name": "const_size_in_1", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "const_size_in_1", "role": "default" }} , 
 	{ "name": "const_size_in_1_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "const_size_in_1", "role": "ap_vld" }} , 
 	{ "name": "const_size_out_1", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "const_size_out_1", "role": "default" }} , 
 	{ "name": "const_size_out_1_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "const_size_out_1", "role": "ap_vld" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "2", "3", "4", "5", "6", "7", "8", "9", "10", "11", "67", "68", "69", "72", "76", "79", "80", "81", "82", "83"],
		"CDFG" : "myproject",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "2329667", "EstimateLatencyMax" : "2329667",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"WaitState" : [
			{"State" : "ap_ST_fsm_state20", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_transformer_fu_489"},
			{"State" : "ap_ST_fsm_state41", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_init_invert_table_ap_fixed_16_6_5_3_0_softmax_config0_s_fu_513"},
			{"State" : "ap_ST_fsm_state41", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s_fu_518"},
			{"State" : "ap_ST_fsm_state41", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_init_exp_table_ap_fixed_16_6_5_3_0_softmax_config0_s_fu_523"}],
		"Port" : [
			{"Name" : "data_in_V", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "67", "SubInstance" : "grp_dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_2_fu_499", "Port" : "data_V"}]},
			{"Name" : "data_out_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "const_size_in_1", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "const_size_out_1", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "cls_token_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "sigmoid_table11", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "11", "SubInstance" : "grp_transformer_fu_489", "Port" : "sigmoid_table11"}]},
			{"Name" : "sigmoid_table8", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "11", "SubInstance" : "grp_transformer_fu_489", "Port" : "sigmoid_table8"}]}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.cls_token_V_U", "Parent" : "0"},
	{"ID" : "2", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.exp_table_V_U", "Parent" : "0"},
	{"ID" : "3", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.invert_table_V_U", "Parent" : "0"},
	{"ID" : "4", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.log_table_V_U", "Parent" : "0"},
	{"ID" : "5", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.embedded_input_V_U", "Parent" : "0"},
	{"ID" : "6", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.embedded_with_cls_V_U", "Parent" : "0"},
	{"ID" : "7", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.transformer_0_out_U", "Parent" : "0"},
	{"ID" : "8", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.mlp_dimensions_reduced_V_U", "Parent" : "0"},
	{"ID" : "9", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.mlp_out_U", "Parent" : "0"},
	{"ID" : "10", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.mlp_out_red_V_U", "Parent" : "0"},
	{"ID" : "11", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_transformer_fu_489", "Parent" : "0", "Child" : ["12", "13", "14", "15", "16", "17", "18", "19", "20", "21", "22", "61", "62", "63", "65"],
		"CDFG" : "transformer",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "1837994", "EstimateLatencyMax" : "1837994",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"WaitState" : [
			{"State" : "ap_ST_fsm_state2", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_self_attention_fu_421"}],
		"Port" : [
			{"Name" : "data_V", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "22", "SubInstance" : "grp_self_attention_fu_421", "Port" : "data_V"}]},
			{"Name" : "res_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "sigmoid_table11", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "65", "SubInstance" : "grp_sigmoid_ap_fixed_ap_fixed_sigmoid_config0_s_fu_455", "Port" : "sigmoid_table11"}]},
			{"Name" : "sigmoid_table8", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "63", "SubInstance" : "grp_sigmoid_ap_fixed_ap_fixed_sigmoid_config1_s_fu_445", "Port" : "sigmoid_table8"}]}]},
	{"ID" : "12", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_transformer_fu_489.sigmoid_result_i6_U", "Parent" : "11"},
	{"ID" : "13", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_transformer_fu_489.sigmoid_result_i_U", "Parent" : "11"},
	{"ID" : "14", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_transformer_fu_489.self_attention_out_V_U", "Parent" : "11"},
	{"ID" : "15", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_transformer_fu_489.norm0_in_el_V_U", "Parent" : "11"},
	{"ID" : "16", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_transformer_fu_489.SiLU0_out_V_U", "Parent" : "11"},
	{"ID" : "17", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_transformer_fu_489.dense0_out_V_U", "Parent" : "11"},
	{"ID" : "18", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_transformer_fu_489.SiLU1_out_V_U", "Parent" : "11"},
	{"ID" : "19", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_transformer_fu_489.dense1_out_U", "Parent" : "11"},
	{"ID" : "20", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_transformer_fu_489.sum_out_V_U", "Parent" : "11"},
	{"ID" : "21", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_transformer_fu_489.sum_out_flat_V_U", "Parent" : "11"},
	{"ID" : "22", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_transformer_fu_489.grp_self_attention_fu_421", "Parent" : "11", "Child" : ["23", "24", "25", "26", "27", "28", "29", "30", "31", "32", "33", "34", "35", "36", "37", "38", "39", "40", "41", "42", "43", "44", "45", "46", "47", "48", "49", "52", "55", "56", "57", "58", "59", "60"],
		"CDFG" : "self_attention",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "1837161", "EstimateLatencyMax" : "1837161",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"WaitState" : [
			{"State" : "ap_ST_fsm_state103", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_init_invert_table_ap_fixed_sa_softmax_config0_s_fu_1266"},
			{"State" : "ap_ST_fsm_state103", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_init_exp_table_ap_fixed_16_6_5_3_0_sa_softmax_config0_s_fu_1271"},
			{"State" : "ap_ST_fsm_state2", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_p_fill_n_a_ap_fixed_unsigned_long_double_s_fu_1276"},
			{"State" : "ap_ST_fsm_state92", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_matmul_ap_fixed_ap_fixed_2ul_8ul_8ul_2ul_s_fu_1288"},
			{"State" : "ap_ST_fsm_state115", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_matmul_ap_fixed_ap_fixed_2ul_2ul_2ul_8ul_s_fu_1297"}],
		"Port" : [
			{"Name" : "data_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "res_V", "Type" : "Memory", "Direction" : "O"}]},
	{"ID" : "23", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_transformer_fu_489.grp_self_attention_fu_421.exp_table_V_U", "Parent" : "22"},
	{"ID" : "24", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_transformer_fu_489.grp_self_attention_fu_421.invert_table_V_U", "Parent" : "22"},
	{"ID" : "25", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_transformer_fu_489.grp_self_attention_fu_421.res_V_assign_U", "Parent" : "22"},
	{"ID" : "26", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_transformer_fu_489.grp_self_attention_fu_421.qkv_in_el_V_U", "Parent" : "22"},
	{"ID" : "27", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_transformer_fu_489.grp_self_attention_fu_421.qkv_out_el_V_U", "Parent" : "22"},
	{"ID" : "28", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_transformer_fu_489.grp_self_attention_fu_421.qkv_reshaped_V_U", "Parent" : "22"},
	{"ID" : "29", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_transformer_fu_489.grp_self_attention_fu_421.queries_V_U", "Parent" : "22"},
	{"ID" : "30", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_transformer_fu_489.grp_self_attention_fu_421.keys_V_U", "Parent" : "22"},
	{"ID" : "31", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_transformer_fu_489.grp_self_attention_fu_421.values_V_U", "Parent" : "22"},
	{"ID" : "32", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_transformer_fu_489.grp_self_attention_fu_421.queries_outer_transposed_V_U", "Parent" : "22"},
	{"ID" : "33", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_transformer_fu_489.grp_self_attention_fu_421.keys_outer_transposed_V_U", "Parent" : "22"},
	{"ID" : "34", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_transformer_fu_489.grp_self_attention_fu_421.keys_transposed_V_U", "Parent" : "22"},
	{"ID" : "35", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_transformer_fu_489.grp_self_attention_fu_421.energy_U", "Parent" : "22"},
	{"ID" : "36", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_transformer_fu_489.grp_self_attention_fu_421.energy_scaled_V_U", "Parent" : "22"},
	{"ID" : "37", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_transformer_fu_489.grp_self_attention_fu_421.energy_scaled_red_V_U", "Parent" : "22"},
	{"ID" : "38", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_transformer_fu_489.grp_self_attention_fu_421.res_V_assign_3_U", "Parent" : "22"},
	{"ID" : "39", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_transformer_fu_489.grp_self_attention_fu_421.attention_flat_V_U", "Parent" : "22"},
	{"ID" : "40", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_transformer_fu_489.grp_self_attention_fu_421.values_transposed_V_U", "Parent" : "22"},
	{"ID" : "41", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_transformer_fu_489.grp_self_attention_fu_421.scaled_attention_U", "Parent" : "22"},
	{"ID" : "42", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_transformer_fu_489.grp_self_attention_fu_421.scaled_attention_transposed_V_U", "Parent" : "22"},
	{"ID" : "43", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_transformer_fu_489.grp_self_attention_fu_421.scaled_attention_reshaped_V_U", "Parent" : "22"},
	{"ID" : "44", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_transformer_fu_489.grp_self_attention_fu_421.result_U", "Parent" : "22"},
	{"ID" : "45", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_transformer_fu_489.grp_self_attention_fu_421.sum_out_V_U", "Parent" : "22"},
	{"ID" : "46", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_transformer_fu_489.grp_self_attention_fu_421.sum_out_flat_V_U", "Parent" : "22"},
	{"ID" : "47", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_transformer_fu_489.grp_self_attention_fu_421.grp_dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_fu_1202", "Parent" : "22",
		"CDFG" : "dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "24",
		"VariableLatency" : "0", "ExactLatency" : "32", "EstimateLatencyMin" : "32", "EstimateLatencyMax" : "32",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "data_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "data_V_offset", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "p_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read1", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read2", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read3", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read4", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read5", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read6", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read7", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read8", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read9", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read10", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read11", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read12", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read13", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read14", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read15", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read16", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read17", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read18", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read19", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read20", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read21", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read22", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read23", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read24", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read25", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read26", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read27", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read28", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read29", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read30", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read31", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read32", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read33", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read34", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read35", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read36", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read37", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read38", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read39", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read40", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read41", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read42", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read43", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read44", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read45", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read46", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read47", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "48", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_transformer_fu_489.grp_self_attention_fu_421.grp_dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_fu_1258", "Parent" : "22",
		"CDFG" : "dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "8",
		"VariableLatency" : "0", "ExactLatency" : "16", "EstimateLatencyMin" : "16", "EstimateLatencyMax" : "16",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "data_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "data_V_offset", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_V", "Type" : "Memory", "Direction" : "O"}]},
	{"ID" : "49", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_transformer_fu_489.grp_self_attention_fu_421.grp_init_invert_table_ap_fixed_sa_softmax_config0_s_fu_1266", "Parent" : "22", "Child" : ["50", "51"],
		"CDFG" : "init_invert_table_ap_fixed_sa_softmax_config0_s",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "458753", "EstimateLatencyMax" : "458753",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "table_out_V", "Type" : "Memory", "Direction" : "O"}]},
	{"ID" : "50", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_transformer_fu_489.grp_self_attention_fu_421.grp_init_invert_table_ap_fixed_sa_softmax_config0_s_fu_1266.myproject_fdiv_32ns_32ns_32_9_1_U66", "Parent" : "49"},
	{"ID" : "51", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_transformer_fu_489.grp_self_attention_fu_421.grp_init_invert_table_ap_fixed_sa_softmax_config0_s_fu_1266.myproject_fpext_32ns_64_2_1_U67", "Parent" : "49"},
	{"ID" : "52", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_transformer_fu_489.grp_self_attention_fu_421.grp_init_exp_table_ap_fixed_16_6_5_3_0_sa_softmax_config0_s_fu_1271", "Parent" : "22", "Child" : ["53", "54"],
		"CDFG" : "init_exp_table_ap_fixed_16_6_5_3_0_sa_softmax_config0_s",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "425985", "EstimateLatencyMax" : "425985",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "table_out_V", "Type" : "Memory", "Direction" : "O"}]},
	{"ID" : "53", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_transformer_fu_489.grp_self_attention_fu_421.grp_init_exp_table_ap_fixed_16_6_5_3_0_sa_softmax_config0_s_fu_1271.myproject_fpext_32ns_64_2_1_U61", "Parent" : "52"},
	{"ID" : "54", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_transformer_fu_489.grp_self_attention_fu_421.grp_init_exp_table_ap_fixed_16_6_5_3_0_sa_softmax_config0_s_fu_1271.myproject_fexp_32ns_32ns_32_8_full_dsp_1_U62", "Parent" : "52"},
	{"ID" : "55", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_transformer_fu_489.grp_self_attention_fu_421.grp_p_fill_n_a_ap_fixed_unsigned_long_double_s_fu_1276", "Parent" : "22",
		"CDFG" : "p_fill_n_a_ap_fixed_unsigned_long_double_s",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "49", "EstimateLatencyMax" : "49",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : []},
	{"ID" : "56", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_transformer_fu_489.grp_self_attention_fu_421.grp_transpose_2d_ap_fixed_sa_transpose_config0_s_fu_1280", "Parent" : "22",
		"CDFG" : "transpose_2d_ap_fixed_sa_transpose_config0_s",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "8",
		"VariableLatency" : "0", "ExactLatency" : "8", "EstimateLatencyMin" : "8", "EstimateLatencyMax" : "8",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "data_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "data_V_offset", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_t_V", "Type" : "Memory", "Direction" : "O"}]},
	{"ID" : "57", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_transformer_fu_489.grp_self_attention_fu_421.grp_matmul_ap_fixed_ap_fixed_2ul_8ul_8ul_2ul_s_fu_1288", "Parent" : "22",
		"CDFG" : "matmul_ap_fixed_ap_fixed_2ul_8ul_8ul_2ul_s",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "145", "EstimateLatencyMax" : "145",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "a_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "a_V_offset", "Type" : "None", "Direction" : "I"},
			{"Name" : "b_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "res_V", "Type" : "Memory", "Direction" : "IO"}]},
	{"ID" : "58", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_transformer_fu_489.grp_self_attention_fu_421.grp_matmul_ap_fixed_ap_fixed_2ul_2ul_2ul_8ul_s_fu_1297", "Parent" : "22",
		"CDFG" : "matmul_ap_fixed_ap_fixed_2ul_2ul_2ul_8ul_s",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "133", "EstimateLatencyMax" : "133",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "a_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "a_V_offset", "Type" : "None", "Direction" : "I"},
			{"Name" : "b_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "res_V", "Type" : "Memory", "Direction" : "IO"}]},
	{"ID" : "59", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_transformer_fu_489.grp_self_attention_fu_421.myproject_mul_mul_16s_16s_32_1_1_U77", "Parent" : "22"},
	{"ID" : "60", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_transformer_fu_489.grp_self_attention_fu_421.myproject_mul_mul_16s_16s_32_1_1_U78", "Parent" : "22"},
	{"ID" : "61", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_transformer_fu_489.grp_dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_fu_429", "Parent" : "11",
		"CDFG" : "dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "16",
		"VariableLatency" : "0", "ExactLatency" : "24", "EstimateLatencyMin" : "24", "EstimateLatencyMax" : "24",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "data_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "data_V_offset", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_V", "Type" : "Memory", "Direction" : "O"}]},
	{"ID" : "62", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_transformer_fu_489.grp_dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s_fu_437", "Parent" : "11",
		"CDFG" : "dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "16",
		"VariableLatency" : "0", "ExactLatency" : "24", "EstimateLatencyMin" : "24", "EstimateLatencyMax" : "24",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "data_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "data_V_offset", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_V", "Type" : "Memory", "Direction" : "O"}]},
	{"ID" : "63", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_transformer_fu_489.grp_sigmoid_ap_fixed_ap_fixed_sigmoid_config1_s_fu_445", "Parent" : "11", "Child" : ["64"],
		"CDFG" : "sigmoid_ap_fixed_ap_fixed_sigmoid_config1_s",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "16",
		"VariableLatency" : "0", "ExactLatency" : "18", "EstimateLatencyMin" : "18", "EstimateLatencyMax" : "18",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "data_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "data_V_offset", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "sigmoid_table8", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "64", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_transformer_fu_489.grp_sigmoid_ap_fixed_ap_fixed_sigmoid_config1_s_fu_445.sigmoid_table8_U", "Parent" : "63"},
	{"ID" : "65", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_transformer_fu_489.grp_sigmoid_ap_fixed_ap_fixed_sigmoid_config0_s_fu_455", "Parent" : "11", "Child" : ["66"],
		"CDFG" : "sigmoid_ap_fixed_ap_fixed_sigmoid_config0_s",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "8",
		"VariableLatency" : "0", "ExactLatency" : "10", "EstimateLatencyMin" : "10", "EstimateLatencyMax" : "10",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "data_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "data_V_offset", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "sigmoid_table11", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "66", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_transformer_fu_489.grp_sigmoid_ap_fixed_ap_fixed_sigmoid_config0_s_fu_455.sigmoid_table11_U", "Parent" : "65"},
	{"ID" : "67", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_2_fu_499", "Parent" : "0",
		"CDFG" : "dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_2",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "8",
		"VariableLatency" : "0", "ExactLatency" : "16", "EstimateLatencyMin" : "16", "EstimateLatencyMax" : "16",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "data_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "res_V", "Type" : "Memory", "Direction" : "O"}]},
	{"ID" : "68", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_dense_latency_ap_fixed_ap_fixed_mlp_config_0_0_0_0_0_0_fu_507", "Parent" : "0",
		"CDFG" : "dense_latency_ap_fixed_ap_fixed_mlp_config_0_0_0_0_0_0",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "8",
		"VariableLatency" : "0", "ExactLatency" : "11", "EstimateLatencyMin" : "11", "EstimateLatencyMax" : "11",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "data_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "res_V", "Type" : "Memory", "Direction" : "O"}]},
	{"ID" : "69", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_init_invert_table_ap_fixed_16_6_5_3_0_softmax_config0_s_fu_513", "Parent" : "0", "Child" : ["70", "71"],
		"CDFG" : "init_invert_table_ap_fixed_16_6_5_3_0_softmax_config0_s",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "458753", "EstimateLatencyMax" : "458753",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "table_out_V", "Type" : "Memory", "Direction" : "O"}]},
	{"ID" : "70", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_init_invert_table_ap_fixed_16_6_5_3_0_softmax_config0_s_fu_513.myproject_fdiv_32ns_32ns_32_9_1_U126", "Parent" : "69"},
	{"ID" : "71", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_init_invert_table_ap_fixed_16_6_5_3_0_softmax_config0_s_fu_513.myproject_fpext_32ns_64_2_1_U127", "Parent" : "69"},
	{"ID" : "72", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s_fu_518", "Parent" : "0", "Child" : ["73", "74", "75"],
		"CDFG" : "init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "491521", "EstimateLatencyMax" : "491521",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "table_out_V", "Type" : "Memory", "Direction" : "O"}]},
	{"ID" : "73", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s_fu_518.myproject_fpext_32ns_64_2_1_U117", "Parent" : "72"},
	{"ID" : "74", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s_fu_518.myproject_fcmp_32ns_32ns_1_2_1_U118", "Parent" : "72"},
	{"ID" : "75", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s_fu_518.myproject_flog_32ns_32ns_32_9_full_dsp_1_U119", "Parent" : "72"},
	{"ID" : "76", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_init_exp_table_ap_fixed_16_6_5_3_0_softmax_config0_s_fu_523", "Parent" : "0", "Child" : ["77", "78"],
		"CDFG" : "init_exp_table_ap_fixed_16_6_5_3_0_softmax_config0_s",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "425985", "EstimateLatencyMax" : "425985",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "table_out_V", "Type" : "Memory", "Direction" : "O"}]},
	{"ID" : "77", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_init_exp_table_ap_fixed_16_6_5_3_0_softmax_config0_s_fu_523.myproject_fpext_32ns_64_2_1_U123", "Parent" : "76"},
	{"ID" : "78", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_init_exp_table_ap_fixed_16_6_5_3_0_softmax_config0_s_fu_523.myproject_fexp_32ns_32ns_32_8_full_dsp_1_U124", "Parent" : "76"},
	{"ID" : "79", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.myproject_mul_mul_16s_16s_32_1_1_U129", "Parent" : "0"},
	{"ID" : "80", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.myproject_mul_mul_16s_16s_32_1_1_U130", "Parent" : "0"},
	{"ID" : "81", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.myproject_mul_mul_16s_16s_32_1_1_U131", "Parent" : "0"},
	{"ID" : "82", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.myproject_mul_mul_16s_16s_32_1_1_U132", "Parent" : "0"},
	{"ID" : "83", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.myproject_mul_mul_16s_16s_32_1_1_U133", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
	myproject {
		data_in_V {Type I LastRead 8 FirstWrite -1}
		data_out_V {Type O LastRead -1 FirstWrite 44}
		const_size_in_1 {Type O LastRead -1 FirstWrite 16}
		const_size_out_1 {Type O LastRead -1 FirstWrite 16}
		cls_token_V {Type I LastRead -1 FirstWrite -1}
		sigmoid_table11 {Type I LastRead -1 FirstWrite -1}
		sigmoid_table8 {Type I LastRead -1 FirstWrite -1}}
	transformer {
		data_V {Type I LastRead 23 FirstWrite -1}
		res_V {Type O LastRead -1 FirstWrite 10}
		sigmoid_table11 {Type I LastRead -1 FirstWrite -1}
		sigmoid_table8 {Type I LastRead -1 FirstWrite -1}}
	self_attention {
		data_V {Type I LastRead 23 FirstWrite -1}
		res_V {Type O LastRead -1 FirstWrite 25}}
	dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1 {
		data_V {Type I LastRead 8 FirstWrite -1}
		data_V_offset {Type I LastRead 0 FirstWrite -1}
		res_V {Type O LastRead -1 FirstWrite 9}
		p_read {Type I LastRead 4 FirstWrite -1}
		p_read1 {Type I LastRead 4 FirstWrite -1}
		p_read2 {Type I LastRead 4 FirstWrite -1}
		p_read3 {Type I LastRead 4 FirstWrite -1}
		p_read4 {Type I LastRead 4 FirstWrite -1}
		p_read5 {Type I LastRead 4 FirstWrite -1}
		p_read6 {Type I LastRead 4 FirstWrite -1}
		p_read7 {Type I LastRead 4 FirstWrite -1}
		p_read8 {Type I LastRead 4 FirstWrite -1}
		p_read9 {Type I LastRead 4 FirstWrite -1}
		p_read10 {Type I LastRead 4 FirstWrite -1}
		p_read11 {Type I LastRead 4 FirstWrite -1}
		p_read12 {Type I LastRead 4 FirstWrite -1}
		p_read13 {Type I LastRead 4 FirstWrite -1}
		p_read14 {Type I LastRead 4 FirstWrite -1}
		p_read15 {Type I LastRead 4 FirstWrite -1}
		p_read16 {Type I LastRead 4 FirstWrite -1}
		p_read17 {Type I LastRead 4 FirstWrite -1}
		p_read18 {Type I LastRead 4 FirstWrite -1}
		p_read19 {Type I LastRead 4 FirstWrite -1}
		p_read20 {Type I LastRead 4 FirstWrite -1}
		p_read21 {Type I LastRead 4 FirstWrite -1}
		p_read22 {Type I LastRead 4 FirstWrite -1}
		p_read23 {Type I LastRead 4 FirstWrite -1}
		p_read24 {Type I LastRead 4 FirstWrite -1}
		p_read25 {Type I LastRead 4 FirstWrite -1}
		p_read26 {Type I LastRead 4 FirstWrite -1}
		p_read27 {Type I LastRead 4 FirstWrite -1}
		p_read28 {Type I LastRead 4 FirstWrite -1}
		p_read29 {Type I LastRead 4 FirstWrite -1}
		p_read30 {Type I LastRead 4 FirstWrite -1}
		p_read31 {Type I LastRead 4 FirstWrite -1}
		p_read32 {Type I LastRead 4 FirstWrite -1}
		p_read33 {Type I LastRead 4 FirstWrite -1}
		p_read34 {Type I LastRead 4 FirstWrite -1}
		p_read35 {Type I LastRead 4 FirstWrite -1}
		p_read36 {Type I LastRead 4 FirstWrite -1}
		p_read37 {Type I LastRead 4 FirstWrite -1}
		p_read38 {Type I LastRead 4 FirstWrite -1}
		p_read39 {Type I LastRead 4 FirstWrite -1}
		p_read40 {Type I LastRead 4 FirstWrite -1}
		p_read41 {Type I LastRead 4 FirstWrite -1}
		p_read42 {Type I LastRead 4 FirstWrite -1}
		p_read43 {Type I LastRead 4 FirstWrite -1}
		p_read44 {Type I LastRead 4 FirstWrite -1}
		p_read45 {Type I LastRead 4 FirstWrite -1}
		p_read46 {Type I LastRead 4 FirstWrite -1}
		p_read47 {Type I LastRead 4 FirstWrite -1}}
	dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1 {
		data_V {Type I LastRead 8 FirstWrite -1}
		data_V_offset {Type I LastRead 0 FirstWrite -1}
		res_V {Type O LastRead -1 FirstWrite 9}}
	init_invert_table_ap_fixed_sa_softmax_config0_s {
		table_out_V {Type O LastRead -1 FirstWrite 14}}
	init_exp_table_ap_fixed_16_6_5_3_0_sa_softmax_config0_s {
		table_out_V {Type O LastRead -1 FirstWrite 13}}
	p_fill_n_a_ap_fixed_unsigned_long_double_s {}
	transpose_2d_ap_fixed_sa_transpose_config0_s {
		data_V {Type I LastRead 8 FirstWrite -1}
		data_V_offset {Type I LastRead 0 FirstWrite -1}
		data_t_V {Type O LastRead -1 FirstWrite 1}}
	matmul_ap_fixed_ap_fixed_2ul_8ul_8ul_2ul_s {
		a_V {Type I LastRead 3 FirstWrite -1}
		a_V_offset {Type I LastRead 0 FirstWrite -1}
		b_V {Type I LastRead 3 FirstWrite -1}
		res_V {Type IO LastRead 4 FirstWrite 5}}
	matmul_ap_fixed_ap_fixed_2ul_2ul_2ul_8ul_s {
		a_V {Type I LastRead 3 FirstWrite -1}
		a_V_offset {Type I LastRead 0 FirstWrite -1}
		b_V {Type I LastRead 3 FirstWrite -1}
		res_V {Type IO LastRead 4 FirstWrite 5}}
	dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0 {
		data_V {Type I LastRead 16 FirstWrite -1}
		data_V_offset {Type I LastRead 0 FirstWrite -1}
		res_V {Type O LastRead -1 FirstWrite 17}}
	dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s {
		data_V {Type I LastRead 8 FirstWrite -1}
		data_V_offset {Type I LastRead 0 FirstWrite -1}
		res_V {Type O LastRead -1 FirstWrite 9}}
	sigmoid_ap_fixed_ap_fixed_sigmoid_config1_s {
		data_V {Type I LastRead 16 FirstWrite -1}
		data_V_offset {Type I LastRead 0 FirstWrite -1}
		res_V {Type O LastRead -1 FirstWrite 3}
		sigmoid_table8 {Type I LastRead -1 FirstWrite -1}}
	sigmoid_ap_fixed_ap_fixed_sigmoid_config0_s {
		data_V {Type I LastRead 8 FirstWrite -1}
		data_V_offset {Type I LastRead 0 FirstWrite -1}
		res_V {Type O LastRead -1 FirstWrite 3}
		sigmoid_table11 {Type I LastRead -1 FirstWrite -1}}
	dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_2 {
		data_V {Type I LastRead 8 FirstWrite -1}
		res_V {Type O LastRead -1 FirstWrite 9}}
	dense_latency_ap_fixed_ap_fixed_mlp_config_0_0_0_0_0_0 {
		data_V {Type I LastRead 8 FirstWrite -1}
		res_V {Type O LastRead -1 FirstWrite 9}}
	init_invert_table_ap_fixed_16_6_5_3_0_softmax_config0_s {
		table_out_V {Type O LastRead -1 FirstWrite 14}}
	init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s {
		table_out_V {Type O LastRead -1 FirstWrite 15}}
	init_exp_table_ap_fixed_16_6_5_3_0_softmax_config0_s {
		table_out_V {Type O LastRead -1 FirstWrite 13}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "2329667", "Max" : "2329667"}
	, {"Name" : "Interval", "Min" : "2329668", "Max" : "2329668"}
]}

set PipelineEnableSignalInfo {[
]}

set Spec2ImplPortList { 
	data_in_V { ap_memory {  { data_in_V_address0 mem_address 1 4 }  { data_in_V_ce0 mem_ce 1 1 }  { data_in_V_q0 mem_dout 0 35 }  { data_in_V_address1 MemPortADDR2 1 4 }  { data_in_V_ce1 MemPortCE2 1 1 }  { data_in_V_q1 MemPortDOUT2 0 35 } } }
	data_out_V { ap_memory {  { data_out_V_address0 mem_address 1 3 }  { data_out_V_ce0 mem_ce 1 1 }  { data_out_V_we0 mem_we 1 1 }  { data_out_V_d0 mem_din 1 35 }  { data_out_V_address1 MemPortADDR2 1 3 }  { data_out_V_ce1 MemPortCE2 1 1 }  { data_out_V_we1 MemPortWE2 1 1 }  { data_out_V_d1 MemPortDIN2 1 35 } } }
	const_size_in_1 { ap_vld {  { const_size_in_1 out_data 1 16 }  { const_size_in_1_ap_vld out_vld 1 1 } } }
	const_size_out_1 { ap_vld {  { const_size_out_1 out_data 1 16 }  { const_size_out_1_ap_vld out_vld 1 1 } } }
}

set busDeadlockParameterList { 
}

# RTL port scheduling information:
set fifoSchedulingInfoList { 
}

# RTL bus port read request latency information:
set busReadReqLatencyList { 
}

# RTL bus port write response latency information:
set busWriteResLatencyList { 
}

# RTL array port load latency information:
set memoryLoadLatencyList { 
}
set moduleName myproject
set isTopModule 1
set isTaskLevelControl 1
set isCombinational 0
set isDatapathOnly 0
set isFreeRunPipelineModule 0
set isPipelined 0
set pipeline_type none
set FunctionProtocol ap_ctrl_hs
set isOneStateSeq 0
set ProfileFlag 0
set StallSigGenFlag 0
set isEnableWaveformDebug 1
set C_modelName {myproject}
set C_modelType { void 0 }
set C_modelArgList {
	{ data_in_V int 35 regular {array 16 { 1 1 } 1 1 }  }
	{ data_out_V int 35 regular {array 5 { 0 0 } 0 1 }  }
	{ const_size_in_1 int 16 regular {pointer 1}  }
	{ const_size_out_1 int 16 regular {pointer 1}  }
}
set C_modelArgMapList {[ 
	{ "Name" : "data_in_V", "interface" : "memory", "bitwidth" : 35, "direction" : "READONLY", "bitSlice":[{"low":0,"up":34,"cElement": [{"cName": "data_in.V","cData": "int35","bit_use": { "low": 0,"up": 34},"cArray": [{"low" : 0,"up" : 15,"step" : 1}]}]}]} , 
 	{ "Name" : "data_out_V", "interface" : "memory", "bitwidth" : 35, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":34,"cElement": [{"cName": "data_out.V","cData": "int35","bit_use": { "low": 0,"up": 34},"cArray": [{"low" : 0,"up" : 4,"step" : 1}]}]}]} , 
 	{ "Name" : "const_size_in_1", "interface" : "wire", "bitwidth" : 16, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":15,"cElement": [{"cName": "const_size_in_1","cData": "unsigned short","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 0,"up" : 0,"step" : 1}]}]}]} , 
 	{ "Name" : "const_size_out_1", "interface" : "wire", "bitwidth" : 16, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":15,"cElement": [{"cName": "const_size_out_1","cData": "unsigned short","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 0,"up" : 0,"step" : 1}]}]}]} ]}
# RTL Port declarations: 
set portNum 24
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ data_in_V_address0 sc_out sc_lv 4 signal 0 } 
	{ data_in_V_ce0 sc_out sc_logic 1 signal 0 } 
	{ data_in_V_q0 sc_in sc_lv 35 signal 0 } 
	{ data_in_V_address1 sc_out sc_lv 4 signal 0 } 
	{ data_in_V_ce1 sc_out sc_logic 1 signal 0 } 
	{ data_in_V_q1 sc_in sc_lv 35 signal 0 } 
	{ data_out_V_address0 sc_out sc_lv 3 signal 1 } 
	{ data_out_V_ce0 sc_out sc_logic 1 signal 1 } 
	{ data_out_V_we0 sc_out sc_logic 1 signal 1 } 
	{ data_out_V_d0 sc_out sc_lv 35 signal 1 } 
	{ data_out_V_address1 sc_out sc_lv 3 signal 1 } 
	{ data_out_V_ce1 sc_out sc_logic 1 signal 1 } 
	{ data_out_V_we1 sc_out sc_logic 1 signal 1 } 
	{ data_out_V_d1 sc_out sc_lv 35 signal 1 } 
	{ const_size_in_1 sc_out sc_lv 16 signal 2 } 
	{ const_size_in_1_ap_vld sc_out sc_logic 1 outvld 2 } 
	{ const_size_out_1 sc_out sc_lv 16 signal 3 } 
	{ const_size_out_1_ap_vld sc_out sc_logic 1 outvld 3 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "data_in_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "data_in_V", "role": "address0" }} , 
 	{ "name": "data_in_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "data_in_V", "role": "ce0" }} , 
 	{ "name": "data_in_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":35, "type": "signal", "bundle":{"name": "data_in_V", "role": "q0" }} , 
 	{ "name": "data_in_V_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "data_in_V", "role": "address1" }} , 
 	{ "name": "data_in_V_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "data_in_V", "role": "ce1" }} , 
 	{ "name": "data_in_V_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":35, "type": "signal", "bundle":{"name": "data_in_V", "role": "q1" }} , 
 	{ "name": "data_out_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "data_out_V", "role": "address0" }} , 
 	{ "name": "data_out_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "data_out_V", "role": "ce0" }} , 
 	{ "name": "data_out_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "data_out_V", "role": "we0" }} , 
 	{ "name": "data_out_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":35, "type": "signal", "bundle":{"name": "data_out_V", "role": "d0" }} , 
 	{ "name": "data_out_V_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "data_out_V", "role": "address1" }} , 
 	{ "name": "data_out_V_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "data_out_V", "role": "ce1" }} , 
 	{ "name": "data_out_V_we1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "data_out_V", "role": "we1" }} , 
 	{ "name": "data_out_V_d1", "direction": "out", "datatype": "sc_lv", "bitwidth":35, "type": "signal", "bundle":{"name": "data_out_V", "role": "d1" }} , 
 	{ "name": "const_size_in_1", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "const_size_in_1", "role": "default" }} , 
 	{ "name": "const_size_in_1_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "const_size_in_1", "role": "ap_vld" }} , 
 	{ "name": "const_size_out_1", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "const_size_out_1", "role": "default" }} , 
 	{ "name": "const_size_out_1_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "const_size_out_1", "role": "ap_vld" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "2", "3", "4", "5", "6", "7", "8", "9", "10", "11", "67", "68", "69", "72", "76", "79", "80", "81", "82", "83"],
		"CDFG" : "myproject",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "2329667", "EstimateLatencyMax" : "2329667",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"WaitState" : [
			{"State" : "ap_ST_fsm_state20", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_transformer_fu_489"},
			{"State" : "ap_ST_fsm_state41", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_init_invert_table_ap_fixed_16_6_5_3_0_softmax_config0_s_fu_513"},
			{"State" : "ap_ST_fsm_state41", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s_fu_518"},
			{"State" : "ap_ST_fsm_state41", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_init_exp_table_ap_fixed_16_6_5_3_0_softmax_config0_s_fu_523"}],
		"Port" : [
			{"Name" : "data_in_V", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "67", "SubInstance" : "grp_dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_2_fu_499", "Port" : "data_V"}]},
			{"Name" : "data_out_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "const_size_in_1", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "const_size_out_1", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "cls_token_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "sigmoid_table11", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "11", "SubInstance" : "grp_transformer_fu_489", "Port" : "sigmoid_table11"}]},
			{"Name" : "sigmoid_table8", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "11", "SubInstance" : "grp_transformer_fu_489", "Port" : "sigmoid_table8"}]}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.cls_token_V_U", "Parent" : "0"},
	{"ID" : "2", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.exp_table_V_U", "Parent" : "0"},
	{"ID" : "3", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.invert_table_V_U", "Parent" : "0"},
	{"ID" : "4", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.log_table_V_U", "Parent" : "0"},
	{"ID" : "5", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.embedded_input_V_U", "Parent" : "0"},
	{"ID" : "6", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.embedded_with_cls_V_U", "Parent" : "0"},
	{"ID" : "7", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.transformer_0_out_U", "Parent" : "0"},
	{"ID" : "8", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.mlp_dimensions_reduced_V_U", "Parent" : "0"},
	{"ID" : "9", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.mlp_out_U", "Parent" : "0"},
	{"ID" : "10", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.mlp_out_red_V_U", "Parent" : "0"},
	{"ID" : "11", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_transformer_fu_489", "Parent" : "0", "Child" : ["12", "13", "14", "15", "16", "17", "18", "19", "20", "21", "22", "61", "62", "63", "65"],
		"CDFG" : "transformer",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "1837994", "EstimateLatencyMax" : "1837994",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"WaitState" : [
			{"State" : "ap_ST_fsm_state2", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_self_attention_fu_421"}],
		"Port" : [
			{"Name" : "data_V", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "22", "SubInstance" : "grp_self_attention_fu_421", "Port" : "data_V"}]},
			{"Name" : "res_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "sigmoid_table11", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "65", "SubInstance" : "grp_sigmoid_ap_fixed_ap_fixed_sigmoid_config0_s_fu_455", "Port" : "sigmoid_table11"}]},
			{"Name" : "sigmoid_table8", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "63", "SubInstance" : "grp_sigmoid_ap_fixed_ap_fixed_sigmoid_config1_s_fu_445", "Port" : "sigmoid_table8"}]}]},
	{"ID" : "12", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_transformer_fu_489.sigmoid_result_i6_U", "Parent" : "11"},
	{"ID" : "13", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_transformer_fu_489.sigmoid_result_i_U", "Parent" : "11"},
	{"ID" : "14", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_transformer_fu_489.self_attention_out_V_U", "Parent" : "11"},
	{"ID" : "15", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_transformer_fu_489.norm0_in_el_V_U", "Parent" : "11"},
	{"ID" : "16", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_transformer_fu_489.SiLU0_out_V_U", "Parent" : "11"},
	{"ID" : "17", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_transformer_fu_489.dense0_out_V_U", "Parent" : "11"},
	{"ID" : "18", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_transformer_fu_489.SiLU1_out_V_U", "Parent" : "11"},
	{"ID" : "19", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_transformer_fu_489.dense1_out_U", "Parent" : "11"},
	{"ID" : "20", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_transformer_fu_489.sum_out_V_U", "Parent" : "11"},
	{"ID" : "21", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_transformer_fu_489.sum_out_flat_V_U", "Parent" : "11"},
	{"ID" : "22", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_transformer_fu_489.grp_self_attention_fu_421", "Parent" : "11", "Child" : ["23", "24", "25", "26", "27", "28", "29", "30", "31", "32", "33", "34", "35", "36", "37", "38", "39", "40", "41", "42", "43", "44", "45", "46", "47", "48", "49", "52", "55", "56", "57", "58", "59", "60"],
		"CDFG" : "self_attention",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "1837161", "EstimateLatencyMax" : "1837161",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"WaitState" : [
			{"State" : "ap_ST_fsm_state103", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_init_invert_table_ap_fixed_sa_softmax_config0_s_fu_1266"},
			{"State" : "ap_ST_fsm_state103", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_init_exp_table_ap_fixed_16_6_5_3_0_sa_softmax_config0_s_fu_1271"},
			{"State" : "ap_ST_fsm_state2", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_p_fill_n_a_ap_fixed_unsigned_long_double_s_fu_1276"},
			{"State" : "ap_ST_fsm_state92", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_matmul_ap_fixed_ap_fixed_2ul_8ul_8ul_2ul_s_fu_1288"},
			{"State" : "ap_ST_fsm_state115", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_matmul_ap_fixed_ap_fixed_2ul_2ul_2ul_8ul_s_fu_1297"}],
		"Port" : [
			{"Name" : "data_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "res_V", "Type" : "Memory", "Direction" : "O"}]},
	{"ID" : "23", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_transformer_fu_489.grp_self_attention_fu_421.exp_table_V_U", "Parent" : "22"},
	{"ID" : "24", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_transformer_fu_489.grp_self_attention_fu_421.invert_table_V_U", "Parent" : "22"},
	{"ID" : "25", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_transformer_fu_489.grp_self_attention_fu_421.res_V_assign_U", "Parent" : "22"},
	{"ID" : "26", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_transformer_fu_489.grp_self_attention_fu_421.qkv_in_el_V_U", "Parent" : "22"},
	{"ID" : "27", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_transformer_fu_489.grp_self_attention_fu_421.qkv_out_el_V_U", "Parent" : "22"},
	{"ID" : "28", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_transformer_fu_489.grp_self_attention_fu_421.qkv_reshaped_V_U", "Parent" : "22"},
	{"ID" : "29", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_transformer_fu_489.grp_self_attention_fu_421.queries_V_U", "Parent" : "22"},
	{"ID" : "30", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_transformer_fu_489.grp_self_attention_fu_421.keys_V_U", "Parent" : "22"},
	{"ID" : "31", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_transformer_fu_489.grp_self_attention_fu_421.values_V_U", "Parent" : "22"},
	{"ID" : "32", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_transformer_fu_489.grp_self_attention_fu_421.queries_outer_transposed_V_U", "Parent" : "22"},
	{"ID" : "33", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_transformer_fu_489.grp_self_attention_fu_421.keys_outer_transposed_V_U", "Parent" : "22"},
	{"ID" : "34", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_transformer_fu_489.grp_self_attention_fu_421.keys_transposed_V_U", "Parent" : "22"},
	{"ID" : "35", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_transformer_fu_489.grp_self_attention_fu_421.energy_U", "Parent" : "22"},
	{"ID" : "36", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_transformer_fu_489.grp_self_attention_fu_421.energy_scaled_V_U", "Parent" : "22"},
	{"ID" : "37", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_transformer_fu_489.grp_self_attention_fu_421.energy_scaled_red_V_U", "Parent" : "22"},
	{"ID" : "38", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_transformer_fu_489.grp_self_attention_fu_421.res_V_assign_3_U", "Parent" : "22"},
	{"ID" : "39", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_transformer_fu_489.grp_self_attention_fu_421.attention_flat_V_U", "Parent" : "22"},
	{"ID" : "40", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_transformer_fu_489.grp_self_attention_fu_421.values_transposed_V_U", "Parent" : "22"},
	{"ID" : "41", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_transformer_fu_489.grp_self_attention_fu_421.scaled_attention_U", "Parent" : "22"},
	{"ID" : "42", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_transformer_fu_489.grp_self_attention_fu_421.scaled_attention_transposed_V_U", "Parent" : "22"},
	{"ID" : "43", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_transformer_fu_489.grp_self_attention_fu_421.scaled_attention_reshaped_V_U", "Parent" : "22"},
	{"ID" : "44", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_transformer_fu_489.grp_self_attention_fu_421.result_U", "Parent" : "22"},
	{"ID" : "45", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_transformer_fu_489.grp_self_attention_fu_421.sum_out_V_U", "Parent" : "22"},
	{"ID" : "46", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_transformer_fu_489.grp_self_attention_fu_421.sum_out_flat_V_U", "Parent" : "22"},
	{"ID" : "47", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_transformer_fu_489.grp_self_attention_fu_421.grp_dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_fu_1202", "Parent" : "22",
		"CDFG" : "dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "24",
		"VariableLatency" : "0", "ExactLatency" : "32", "EstimateLatencyMin" : "32", "EstimateLatencyMax" : "32",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "data_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "data_V_offset", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "p_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read1", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read2", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read3", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read4", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read5", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read6", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read7", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read8", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read9", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read10", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read11", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read12", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read13", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read14", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read15", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read16", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read17", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read18", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read19", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read20", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read21", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read22", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read23", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read24", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read25", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read26", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read27", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read28", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read29", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read30", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read31", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read32", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read33", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read34", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read35", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read36", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read37", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read38", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read39", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read40", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read41", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read42", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read43", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read44", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read45", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read46", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read47", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "48", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_transformer_fu_489.grp_self_attention_fu_421.grp_dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_fu_1258", "Parent" : "22",
		"CDFG" : "dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "8",
		"VariableLatency" : "0", "ExactLatency" : "16", "EstimateLatencyMin" : "16", "EstimateLatencyMax" : "16",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "data_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "data_V_offset", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_V", "Type" : "Memory", "Direction" : "O"}]},
	{"ID" : "49", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_transformer_fu_489.grp_self_attention_fu_421.grp_init_invert_table_ap_fixed_sa_softmax_config0_s_fu_1266", "Parent" : "22", "Child" : ["50", "51"],
		"CDFG" : "init_invert_table_ap_fixed_sa_softmax_config0_s",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "458753", "EstimateLatencyMax" : "458753",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "table_out_V", "Type" : "Memory", "Direction" : "O"}]},
	{"ID" : "50", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_transformer_fu_489.grp_self_attention_fu_421.grp_init_invert_table_ap_fixed_sa_softmax_config0_s_fu_1266.myproject_fdiv_32ns_32ns_32_9_1_U66", "Parent" : "49"},
	{"ID" : "51", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_transformer_fu_489.grp_self_attention_fu_421.grp_init_invert_table_ap_fixed_sa_softmax_config0_s_fu_1266.myproject_fpext_32ns_64_2_1_U67", "Parent" : "49"},
	{"ID" : "52", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_transformer_fu_489.grp_self_attention_fu_421.grp_init_exp_table_ap_fixed_16_6_5_3_0_sa_softmax_config0_s_fu_1271", "Parent" : "22", "Child" : ["53", "54"],
		"CDFG" : "init_exp_table_ap_fixed_16_6_5_3_0_sa_softmax_config0_s",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "425985", "EstimateLatencyMax" : "425985",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "table_out_V", "Type" : "Memory", "Direction" : "O"}]},
	{"ID" : "53", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_transformer_fu_489.grp_self_attention_fu_421.grp_init_exp_table_ap_fixed_16_6_5_3_0_sa_softmax_config0_s_fu_1271.myproject_fpext_32ns_64_2_1_U61", "Parent" : "52"},
	{"ID" : "54", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_transformer_fu_489.grp_self_attention_fu_421.grp_init_exp_table_ap_fixed_16_6_5_3_0_sa_softmax_config0_s_fu_1271.myproject_fexp_32ns_32ns_32_8_full_dsp_1_U62", "Parent" : "52"},
	{"ID" : "55", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_transformer_fu_489.grp_self_attention_fu_421.grp_p_fill_n_a_ap_fixed_unsigned_long_double_s_fu_1276", "Parent" : "22",
		"CDFG" : "p_fill_n_a_ap_fixed_unsigned_long_double_s",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "49", "EstimateLatencyMax" : "49",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : []},
	{"ID" : "56", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_transformer_fu_489.grp_self_attention_fu_421.grp_transpose_2d_ap_fixed_sa_transpose_config0_s_fu_1280", "Parent" : "22",
		"CDFG" : "transpose_2d_ap_fixed_sa_transpose_config0_s",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "8",
		"VariableLatency" : "0", "ExactLatency" : "8", "EstimateLatencyMin" : "8", "EstimateLatencyMax" : "8",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "data_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "data_V_offset", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_t_V", "Type" : "Memory", "Direction" : "O"}]},
	{"ID" : "57", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_transformer_fu_489.grp_self_attention_fu_421.grp_matmul_ap_fixed_ap_fixed_2ul_8ul_8ul_2ul_s_fu_1288", "Parent" : "22",
		"CDFG" : "matmul_ap_fixed_ap_fixed_2ul_8ul_8ul_2ul_s",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "145", "EstimateLatencyMax" : "145",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "a_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "a_V_offset", "Type" : "None", "Direction" : "I"},
			{"Name" : "b_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "res_V", "Type" : "Memory", "Direction" : "IO"}]},
	{"ID" : "58", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_transformer_fu_489.grp_self_attention_fu_421.grp_matmul_ap_fixed_ap_fixed_2ul_2ul_2ul_8ul_s_fu_1297", "Parent" : "22",
		"CDFG" : "matmul_ap_fixed_ap_fixed_2ul_2ul_2ul_8ul_s",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "133", "EstimateLatencyMax" : "133",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "a_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "a_V_offset", "Type" : "None", "Direction" : "I"},
			{"Name" : "b_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "res_V", "Type" : "Memory", "Direction" : "IO"}]},
	{"ID" : "59", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_transformer_fu_489.grp_self_attention_fu_421.myproject_mul_mul_16s_16s_32_1_1_U77", "Parent" : "22"},
	{"ID" : "60", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_transformer_fu_489.grp_self_attention_fu_421.myproject_mul_mul_16s_16s_32_1_1_U78", "Parent" : "22"},
	{"ID" : "61", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_transformer_fu_489.grp_dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_fu_429", "Parent" : "11",
		"CDFG" : "dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "16",
		"VariableLatency" : "0", "ExactLatency" : "24", "EstimateLatencyMin" : "24", "EstimateLatencyMax" : "24",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "data_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "data_V_offset", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_V", "Type" : "Memory", "Direction" : "O"}]},
	{"ID" : "62", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_transformer_fu_489.grp_dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s_fu_437", "Parent" : "11",
		"CDFG" : "dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "16",
		"VariableLatency" : "0", "ExactLatency" : "24", "EstimateLatencyMin" : "24", "EstimateLatencyMax" : "24",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "data_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "data_V_offset", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_V", "Type" : "Memory", "Direction" : "O"}]},
	{"ID" : "63", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_transformer_fu_489.grp_sigmoid_ap_fixed_ap_fixed_sigmoid_config1_s_fu_445", "Parent" : "11", "Child" : ["64"],
		"CDFG" : "sigmoid_ap_fixed_ap_fixed_sigmoid_config1_s",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "16",
		"VariableLatency" : "0", "ExactLatency" : "18", "EstimateLatencyMin" : "18", "EstimateLatencyMax" : "18",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "data_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "data_V_offset", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "sigmoid_table8", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "64", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_transformer_fu_489.grp_sigmoid_ap_fixed_ap_fixed_sigmoid_config1_s_fu_445.sigmoid_table8_U", "Parent" : "63"},
	{"ID" : "65", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_transformer_fu_489.grp_sigmoid_ap_fixed_ap_fixed_sigmoid_config0_s_fu_455", "Parent" : "11", "Child" : ["66"],
		"CDFG" : "sigmoid_ap_fixed_ap_fixed_sigmoid_config0_s",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "8",
		"VariableLatency" : "0", "ExactLatency" : "10", "EstimateLatencyMin" : "10", "EstimateLatencyMax" : "10",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "data_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "data_V_offset", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "sigmoid_table11", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "66", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_transformer_fu_489.grp_sigmoid_ap_fixed_ap_fixed_sigmoid_config0_s_fu_455.sigmoid_table11_U", "Parent" : "65"},
	{"ID" : "67", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_2_fu_499", "Parent" : "0",
		"CDFG" : "dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_2",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "8",
		"VariableLatency" : "0", "ExactLatency" : "16", "EstimateLatencyMin" : "16", "EstimateLatencyMax" : "16",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "data_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "res_V", "Type" : "Memory", "Direction" : "O"}]},
	{"ID" : "68", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_dense_latency_ap_fixed_ap_fixed_mlp_config_0_0_0_0_0_0_fu_507", "Parent" : "0",
		"CDFG" : "dense_latency_ap_fixed_ap_fixed_mlp_config_0_0_0_0_0_0",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "8",
		"VariableLatency" : "0", "ExactLatency" : "11", "EstimateLatencyMin" : "11", "EstimateLatencyMax" : "11",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "data_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "res_V", "Type" : "Memory", "Direction" : "O"}]},
	{"ID" : "69", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_init_invert_table_ap_fixed_16_6_5_3_0_softmax_config0_s_fu_513", "Parent" : "0", "Child" : ["70", "71"],
		"CDFG" : "init_invert_table_ap_fixed_16_6_5_3_0_softmax_config0_s",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "458753", "EstimateLatencyMax" : "458753",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "table_out_V", "Type" : "Memory", "Direction" : "O"}]},
	{"ID" : "70", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_init_invert_table_ap_fixed_16_6_5_3_0_softmax_config0_s_fu_513.myproject_fdiv_32ns_32ns_32_9_1_U126", "Parent" : "69"},
	{"ID" : "71", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_init_invert_table_ap_fixed_16_6_5_3_0_softmax_config0_s_fu_513.myproject_fpext_32ns_64_2_1_U127", "Parent" : "69"},
	{"ID" : "72", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s_fu_518", "Parent" : "0", "Child" : ["73", "74", "75"],
		"CDFG" : "init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "491521", "EstimateLatencyMax" : "491521",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "table_out_V", "Type" : "Memory", "Direction" : "O"}]},
	{"ID" : "73", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s_fu_518.myproject_fpext_32ns_64_2_1_U117", "Parent" : "72"},
	{"ID" : "74", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s_fu_518.myproject_fcmp_32ns_32ns_1_2_1_U118", "Parent" : "72"},
	{"ID" : "75", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s_fu_518.myproject_flog_32ns_32ns_32_9_full_dsp_1_U119", "Parent" : "72"},
	{"ID" : "76", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_init_exp_table_ap_fixed_16_6_5_3_0_softmax_config0_s_fu_523", "Parent" : "0", "Child" : ["77", "78"],
		"CDFG" : "init_exp_table_ap_fixed_16_6_5_3_0_softmax_config0_s",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "425985", "EstimateLatencyMax" : "425985",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "table_out_V", "Type" : "Memory", "Direction" : "O"}]},
	{"ID" : "77", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_init_exp_table_ap_fixed_16_6_5_3_0_softmax_config0_s_fu_523.myproject_fpext_32ns_64_2_1_U123", "Parent" : "76"},
	{"ID" : "78", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_init_exp_table_ap_fixed_16_6_5_3_0_softmax_config0_s_fu_523.myproject_fexp_32ns_32ns_32_8_full_dsp_1_U124", "Parent" : "76"},
	{"ID" : "79", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.myproject_mul_mul_16s_16s_32_1_1_U129", "Parent" : "0"},
	{"ID" : "80", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.myproject_mul_mul_16s_16s_32_1_1_U130", "Parent" : "0"},
	{"ID" : "81", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.myproject_mul_mul_16s_16s_32_1_1_U131", "Parent" : "0"},
	{"ID" : "82", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.myproject_mul_mul_16s_16s_32_1_1_U132", "Parent" : "0"},
	{"ID" : "83", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.myproject_mul_mul_16s_16s_32_1_1_U133", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
	myproject {
		data_in_V {Type I LastRead 8 FirstWrite -1}
		data_out_V {Type O LastRead -1 FirstWrite 44}
		const_size_in_1 {Type O LastRead -1 FirstWrite 16}
		const_size_out_1 {Type O LastRead -1 FirstWrite 16}
		cls_token_V {Type I LastRead -1 FirstWrite -1}
		sigmoid_table11 {Type I LastRead -1 FirstWrite -1}
		sigmoid_table8 {Type I LastRead -1 FirstWrite -1}}
	transformer {
		data_V {Type I LastRead 23 FirstWrite -1}
		res_V {Type O LastRead -1 FirstWrite 10}
		sigmoid_table11 {Type I LastRead -1 FirstWrite -1}
		sigmoid_table8 {Type I LastRead -1 FirstWrite -1}}
	self_attention {
		data_V {Type I LastRead 23 FirstWrite -1}
		res_V {Type O LastRead -1 FirstWrite 25}}
	dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1 {
		data_V {Type I LastRead 8 FirstWrite -1}
		data_V_offset {Type I LastRead 0 FirstWrite -1}
		res_V {Type O LastRead -1 FirstWrite 9}
		p_read {Type I LastRead 4 FirstWrite -1}
		p_read1 {Type I LastRead 4 FirstWrite -1}
		p_read2 {Type I LastRead 4 FirstWrite -1}
		p_read3 {Type I LastRead 4 FirstWrite -1}
		p_read4 {Type I LastRead 4 FirstWrite -1}
		p_read5 {Type I LastRead 4 FirstWrite -1}
		p_read6 {Type I LastRead 4 FirstWrite -1}
		p_read7 {Type I LastRead 4 FirstWrite -1}
		p_read8 {Type I LastRead 4 FirstWrite -1}
		p_read9 {Type I LastRead 4 FirstWrite -1}
		p_read10 {Type I LastRead 4 FirstWrite -1}
		p_read11 {Type I LastRead 4 FirstWrite -1}
		p_read12 {Type I LastRead 4 FirstWrite -1}
		p_read13 {Type I LastRead 4 FirstWrite -1}
		p_read14 {Type I LastRead 4 FirstWrite -1}
		p_read15 {Type I LastRead 4 FirstWrite -1}
		p_read16 {Type I LastRead 4 FirstWrite -1}
		p_read17 {Type I LastRead 4 FirstWrite -1}
		p_read18 {Type I LastRead 4 FirstWrite -1}
		p_read19 {Type I LastRead 4 FirstWrite -1}
		p_read20 {Type I LastRead 4 FirstWrite -1}
		p_read21 {Type I LastRead 4 FirstWrite -1}
		p_read22 {Type I LastRead 4 FirstWrite -1}
		p_read23 {Type I LastRead 4 FirstWrite -1}
		p_read24 {Type I LastRead 4 FirstWrite -1}
		p_read25 {Type I LastRead 4 FirstWrite -1}
		p_read26 {Type I LastRead 4 FirstWrite -1}
		p_read27 {Type I LastRead 4 FirstWrite -1}
		p_read28 {Type I LastRead 4 FirstWrite -1}
		p_read29 {Type I LastRead 4 FirstWrite -1}
		p_read30 {Type I LastRead 4 FirstWrite -1}
		p_read31 {Type I LastRead 4 FirstWrite -1}
		p_read32 {Type I LastRead 4 FirstWrite -1}
		p_read33 {Type I LastRead 4 FirstWrite -1}
		p_read34 {Type I LastRead 4 FirstWrite -1}
		p_read35 {Type I LastRead 4 FirstWrite -1}
		p_read36 {Type I LastRead 4 FirstWrite -1}
		p_read37 {Type I LastRead 4 FirstWrite -1}
		p_read38 {Type I LastRead 4 FirstWrite -1}
		p_read39 {Type I LastRead 4 FirstWrite -1}
		p_read40 {Type I LastRead 4 FirstWrite -1}
		p_read41 {Type I LastRead 4 FirstWrite -1}
		p_read42 {Type I LastRead 4 FirstWrite -1}
		p_read43 {Type I LastRead 4 FirstWrite -1}
		p_read44 {Type I LastRead 4 FirstWrite -1}
		p_read45 {Type I LastRead 4 FirstWrite -1}
		p_read46 {Type I LastRead 4 FirstWrite -1}
		p_read47 {Type I LastRead 4 FirstWrite -1}}
	dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1 {
		data_V {Type I LastRead 8 FirstWrite -1}
		data_V_offset {Type I LastRead 0 FirstWrite -1}
		res_V {Type O LastRead -1 FirstWrite 9}}
	init_invert_table_ap_fixed_sa_softmax_config0_s {
		table_out_V {Type O LastRead -1 FirstWrite 14}}
	init_exp_table_ap_fixed_16_6_5_3_0_sa_softmax_config0_s {
		table_out_V {Type O LastRead -1 FirstWrite 13}}
	p_fill_n_a_ap_fixed_unsigned_long_double_s {}
	transpose_2d_ap_fixed_sa_transpose_config0_s {
		data_V {Type I LastRead 8 FirstWrite -1}
		data_V_offset {Type I LastRead 0 FirstWrite -1}
		data_t_V {Type O LastRead -1 FirstWrite 1}}
	matmul_ap_fixed_ap_fixed_2ul_8ul_8ul_2ul_s {
		a_V {Type I LastRead 3 FirstWrite -1}
		a_V_offset {Type I LastRead 0 FirstWrite -1}
		b_V {Type I LastRead 3 FirstWrite -1}
		res_V {Type IO LastRead 4 FirstWrite 5}}
	matmul_ap_fixed_ap_fixed_2ul_2ul_2ul_8ul_s {
		a_V {Type I LastRead 3 FirstWrite -1}
		a_V_offset {Type I LastRead 0 FirstWrite -1}
		b_V {Type I LastRead 3 FirstWrite -1}
		res_V {Type IO LastRead 4 FirstWrite 5}}
	dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0 {
		data_V {Type I LastRead 16 FirstWrite -1}
		data_V_offset {Type I LastRead 0 FirstWrite -1}
		res_V {Type O LastRead -1 FirstWrite 17}}
	dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s {
		data_V {Type I LastRead 8 FirstWrite -1}
		data_V_offset {Type I LastRead 0 FirstWrite -1}
		res_V {Type O LastRead -1 FirstWrite 9}}
	sigmoid_ap_fixed_ap_fixed_sigmoid_config1_s {
		data_V {Type I LastRead 16 FirstWrite -1}
		data_V_offset {Type I LastRead 0 FirstWrite -1}
		res_V {Type O LastRead -1 FirstWrite 3}
		sigmoid_table8 {Type I LastRead -1 FirstWrite -1}}
	sigmoid_ap_fixed_ap_fixed_sigmoid_config0_s {
		data_V {Type I LastRead 8 FirstWrite -1}
		data_V_offset {Type I LastRead 0 FirstWrite -1}
		res_V {Type O LastRead -1 FirstWrite 3}
		sigmoid_table11 {Type I LastRead -1 FirstWrite -1}}
	dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_2 {
		data_V {Type I LastRead 8 FirstWrite -1}
		res_V {Type O LastRead -1 FirstWrite 9}}
	dense_latency_ap_fixed_ap_fixed_mlp_config_0_0_0_0_0_0 {
		data_V {Type I LastRead 8 FirstWrite -1}
		res_V {Type O LastRead -1 FirstWrite 9}}
	init_invert_table_ap_fixed_16_6_5_3_0_softmax_config0_s {
		table_out_V {Type O LastRead -1 FirstWrite 14}}
	init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s {
		table_out_V {Type O LastRead -1 FirstWrite 15}}
	init_exp_table_ap_fixed_16_6_5_3_0_softmax_config0_s {
		table_out_V {Type O LastRead -1 FirstWrite 13}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "2329667", "Max" : "2329667"}
	, {"Name" : "Interval", "Min" : "2329668", "Max" : "2329668"}
]}

set PipelineEnableSignalInfo {[
]}

set Spec2ImplPortList { 
	data_in_V { ap_memory {  { data_in_V_address0 mem_address 1 4 }  { data_in_V_ce0 mem_ce 1 1 }  { data_in_V_q0 mem_dout 0 35 }  { data_in_V_address1 MemPortADDR2 1 4 }  { data_in_V_ce1 MemPortCE2 1 1 }  { data_in_V_q1 MemPortDOUT2 0 35 } } }
	data_out_V { ap_memory {  { data_out_V_address0 mem_address 1 3 }  { data_out_V_ce0 mem_ce 1 1 }  { data_out_V_we0 mem_we 1 1 }  { data_out_V_d0 mem_din 1 35 }  { data_out_V_address1 MemPortADDR2 1 3 }  { data_out_V_ce1 MemPortCE2 1 1 }  { data_out_V_we1 MemPortWE2 1 1 }  { data_out_V_d1 MemPortDIN2 1 35 } } }
	const_size_in_1 { ap_vld {  { const_size_in_1 out_data 1 16 }  { const_size_in_1_ap_vld out_vld 1 1 } } }
	const_size_out_1 { ap_vld {  { const_size_out_1 out_data 1 16 }  { const_size_out_1_ap_vld out_vld 1 1 } } }
}

set busDeadlockParameterList { 
}

# RTL port scheduling information:
set fifoSchedulingInfoList { 
}

# RTL bus port read request latency information:
set busReadReqLatencyList { 
}

# RTL bus port write response latency information:
set busWriteResLatencyList { 
}

# RTL array port load latency information:
set memoryLoadLatencyList { 
}
set moduleName myproject
set isTopModule 1
set isTaskLevelControl 1
set isCombinational 0
set isDatapathOnly 0
set isFreeRunPipelineModule 0
set isPipelined 0
set pipeline_type none
set FunctionProtocol ap_ctrl_hs
set isOneStateSeq 0
set ProfileFlag 0
set StallSigGenFlag 0
set isEnableWaveformDebug 1
set C_modelName {myproject}
set C_modelType { void 0 }
set C_modelArgList {
	{ data_in_V int 35 regular {array 16 { 1 1 } 1 1 }  }
	{ data_out_V int 35 regular {array 5 { 0 0 } 0 1 }  }
	{ const_size_in_1 int 16 regular {pointer 1}  }
	{ const_size_out_1 int 16 regular {pointer 1}  }
}
set C_modelArgMapList {[ 
	{ "Name" : "data_in_V", "interface" : "memory", "bitwidth" : 35, "direction" : "READONLY", "bitSlice":[{"low":0,"up":34,"cElement": [{"cName": "data_in.V","cData": "int35","bit_use": { "low": 0,"up": 34},"cArray": [{"low" : 0,"up" : 15,"step" : 1}]}]}]} , 
 	{ "Name" : "data_out_V", "interface" : "memory", "bitwidth" : 35, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":34,"cElement": [{"cName": "data_out.V","cData": "int35","bit_use": { "low": 0,"up": 34},"cArray": [{"low" : 0,"up" : 4,"step" : 1}]}]}]} , 
 	{ "Name" : "const_size_in_1", "interface" : "wire", "bitwidth" : 16, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":15,"cElement": [{"cName": "const_size_in_1","cData": "unsigned short","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 0,"up" : 0,"step" : 1}]}]}]} , 
 	{ "Name" : "const_size_out_1", "interface" : "wire", "bitwidth" : 16, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":15,"cElement": [{"cName": "const_size_out_1","cData": "unsigned short","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 0,"up" : 0,"step" : 1}]}]}]} ]}
# RTL Port declarations: 
set portNum 24
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ data_in_V_address0 sc_out sc_lv 4 signal 0 } 
	{ data_in_V_ce0 sc_out sc_logic 1 signal 0 } 
	{ data_in_V_q0 sc_in sc_lv 35 signal 0 } 
	{ data_in_V_address1 sc_out sc_lv 4 signal 0 } 
	{ data_in_V_ce1 sc_out sc_logic 1 signal 0 } 
	{ data_in_V_q1 sc_in sc_lv 35 signal 0 } 
	{ data_out_V_address0 sc_out sc_lv 3 signal 1 } 
	{ data_out_V_ce0 sc_out sc_logic 1 signal 1 } 
	{ data_out_V_we0 sc_out sc_logic 1 signal 1 } 
	{ data_out_V_d0 sc_out sc_lv 35 signal 1 } 
	{ data_out_V_address1 sc_out sc_lv 3 signal 1 } 
	{ data_out_V_ce1 sc_out sc_logic 1 signal 1 } 
	{ data_out_V_we1 sc_out sc_logic 1 signal 1 } 
	{ data_out_V_d1 sc_out sc_lv 35 signal 1 } 
	{ const_size_in_1 sc_out sc_lv 16 signal 2 } 
	{ const_size_in_1_ap_vld sc_out sc_logic 1 outvld 2 } 
	{ const_size_out_1 sc_out sc_lv 16 signal 3 } 
	{ const_size_out_1_ap_vld sc_out sc_logic 1 outvld 3 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "data_in_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "data_in_V", "role": "address0" }} , 
 	{ "name": "data_in_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "data_in_V", "role": "ce0" }} , 
 	{ "name": "data_in_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":35, "type": "signal", "bundle":{"name": "data_in_V", "role": "q0" }} , 
 	{ "name": "data_in_V_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "data_in_V", "role": "address1" }} , 
 	{ "name": "data_in_V_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "data_in_V", "role": "ce1" }} , 
 	{ "name": "data_in_V_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":35, "type": "signal", "bundle":{"name": "data_in_V", "role": "q1" }} , 
 	{ "name": "data_out_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "data_out_V", "role": "address0" }} , 
 	{ "name": "data_out_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "data_out_V", "role": "ce0" }} , 
 	{ "name": "data_out_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "data_out_V", "role": "we0" }} , 
 	{ "name": "data_out_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":35, "type": "signal", "bundle":{"name": "data_out_V", "role": "d0" }} , 
 	{ "name": "data_out_V_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "data_out_V", "role": "address1" }} , 
 	{ "name": "data_out_V_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "data_out_V", "role": "ce1" }} , 
 	{ "name": "data_out_V_we1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "data_out_V", "role": "we1" }} , 
 	{ "name": "data_out_V_d1", "direction": "out", "datatype": "sc_lv", "bitwidth":35, "type": "signal", "bundle":{"name": "data_out_V", "role": "d1" }} , 
 	{ "name": "const_size_in_1", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "const_size_in_1", "role": "default" }} , 
 	{ "name": "const_size_in_1_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "const_size_in_1", "role": "ap_vld" }} , 
 	{ "name": "const_size_out_1", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "const_size_out_1", "role": "default" }} , 
 	{ "name": "const_size_out_1_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "const_size_out_1", "role": "ap_vld" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "2", "3", "4", "5", "6", "7", "8", "9", "10", "11", "60", "61", "62", "65", "69", "72", "73", "74", "75", "76"],
		"CDFG" : "myproject",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "2329185", "EstimateLatencyMax" : "2329185",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"WaitState" : [
			{"State" : "ap_ST_fsm_state20", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_transformer_fu_485"},
			{"State" : "ap_ST_fsm_state41", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_init_invert_table_ap_fixed_16_6_5_3_0_softmax_config0_s_fu_505"},
			{"State" : "ap_ST_fsm_state41", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s_fu_510"},
			{"State" : "ap_ST_fsm_state41", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_init_exp_table_ap_fixed_16_6_5_3_0_softmax_config0_s_fu_515"}],
		"Port" : [
			{"Name" : "data_in_V", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "60", "SubInstance" : "grp_dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_2_fu_491", "Port" : "data_V"}]},
			{"Name" : "data_out_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "const_size_in_1", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "const_size_out_1", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "cls_token_V", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.cls_token_V_U", "Parent" : "0"},
	{"ID" : "2", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.exp_table_V_U", "Parent" : "0"},
	{"ID" : "3", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.invert_table_V_U", "Parent" : "0"},
	{"ID" : "4", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.log_table_V_U", "Parent" : "0"},
	{"ID" : "5", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.embedded_input_V_U", "Parent" : "0"},
	{"ID" : "6", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.embedded_with_cls_V_U", "Parent" : "0"},
	{"ID" : "7", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.transformer_0_out_U", "Parent" : "0"},
	{"ID" : "8", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.mlp_dimensions_reduced_V_U", "Parent" : "0"},
	{"ID" : "9", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.mlp_out_U", "Parent" : "0"},
	{"ID" : "10", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.mlp_out_red_V_U", "Parent" : "0"},
	{"ID" : "11", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_transformer_fu_485", "Parent" : "0", "Child" : ["12", "13", "14", "15", "16", "17", "56", "57", "58", "59"],
		"CDFG" : "transformer",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "1837512", "EstimateLatencyMax" : "1837512",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"WaitState" : [
			{"State" : "ap_ST_fsm_state2", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_self_attention_fu_2221"}],
		"Port" : [
			{"Name" : "data_V", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "17", "SubInstance" : "grp_self_attention_fu_2221", "Port" : "data_V"}]},
			{"Name" : "res_V", "Type" : "Memory", "Direction" : "O"}]},
	{"ID" : "12", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_transformer_fu_485.self_attention_out_V_U", "Parent" : "11"},
	{"ID" : "13", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_transformer_fu_485.norm0_in_el_V_U", "Parent" : "11"},
	{"ID" : "14", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_transformer_fu_485.dense1_out_U", "Parent" : "11"},
	{"ID" : "15", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_transformer_fu_485.sum_out_V_U", "Parent" : "11"},
	{"ID" : "16", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_transformer_fu_485.sum_out_flat_V_U", "Parent" : "11"},
	{"ID" : "17", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_transformer_fu_485.grp_self_attention_fu_2221", "Parent" : "11", "Child" : ["18", "19", "20", "21", "22", "23", "24", "25", "26", "27", "28", "29", "30", "31", "32", "33", "34", "35", "36", "37", "38", "39", "40", "41", "42", "43", "44", "47", "50", "51", "52", "53", "54", "55"],
		"CDFG" : "self_attention",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "1837161", "EstimateLatencyMax" : "1837161",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"WaitState" : [
			{"State" : "ap_ST_fsm_state103", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_init_invert_table_ap_fixed_sa_softmax_config0_s_fu_1266"},
			{"State" : "ap_ST_fsm_state103", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_init_exp_table_ap_fixed_16_6_5_3_0_sa_softmax_config0_s_fu_1271"},
			{"State" : "ap_ST_fsm_state2", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_p_fill_n_a_ap_fixed_unsigned_long_double_s_fu_1276"},
			{"State" : "ap_ST_fsm_state92", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_matmul_ap_fixed_ap_fixed_2ul_8ul_8ul_2ul_s_fu_1288"},
			{"State" : "ap_ST_fsm_state115", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_matmul_ap_fixed_ap_fixed_2ul_2ul_2ul_8ul_s_fu_1297"}],
		"Port" : [
			{"Name" : "data_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "res_V", "Type" : "Memory", "Direction" : "O"}]},
	{"ID" : "18", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_transformer_fu_485.grp_self_attention_fu_2221.exp_table_V_U", "Parent" : "17"},
	{"ID" : "19", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_transformer_fu_485.grp_self_attention_fu_2221.invert_table_V_U", "Parent" : "17"},
	{"ID" : "20", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_transformer_fu_485.grp_self_attention_fu_2221.res_V_assign_U", "Parent" : "17"},
	{"ID" : "21", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_transformer_fu_485.grp_self_attention_fu_2221.qkv_in_el_V_U", "Parent" : "17"},
	{"ID" : "22", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_transformer_fu_485.grp_self_attention_fu_2221.qkv_out_el_V_U", "Parent" : "17"},
	{"ID" : "23", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_transformer_fu_485.grp_self_attention_fu_2221.qkv_reshaped_V_U", "Parent" : "17"},
	{"ID" : "24", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_transformer_fu_485.grp_self_attention_fu_2221.queries_V_U", "Parent" : "17"},
	{"ID" : "25", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_transformer_fu_485.grp_self_attention_fu_2221.keys_V_U", "Parent" : "17"},
	{"ID" : "26", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_transformer_fu_485.grp_self_attention_fu_2221.values_V_U", "Parent" : "17"},
	{"ID" : "27", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_transformer_fu_485.grp_self_attention_fu_2221.queries_outer_transposed_V_U", "Parent" : "17"},
	{"ID" : "28", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_transformer_fu_485.grp_self_attention_fu_2221.keys_outer_transposed_V_U", "Parent" : "17"},
	{"ID" : "29", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_transformer_fu_485.grp_self_attention_fu_2221.keys_transposed_V_U", "Parent" : "17"},
	{"ID" : "30", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_transformer_fu_485.grp_self_attention_fu_2221.energy_U", "Parent" : "17"},
	{"ID" : "31", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_transformer_fu_485.grp_self_attention_fu_2221.energy_scaled_V_U", "Parent" : "17"},
	{"ID" : "32", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_transformer_fu_485.grp_self_attention_fu_2221.energy_scaled_red_V_U", "Parent" : "17"},
	{"ID" : "33", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_transformer_fu_485.grp_self_attention_fu_2221.res_V_assign_2_U", "Parent" : "17"},
	{"ID" : "34", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_transformer_fu_485.grp_self_attention_fu_2221.attention_flat_V_U", "Parent" : "17"},
	{"ID" : "35", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_transformer_fu_485.grp_self_attention_fu_2221.values_transposed_V_U", "Parent" : "17"},
	{"ID" : "36", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_transformer_fu_485.grp_self_attention_fu_2221.scaled_attention_U", "Parent" : "17"},
	{"ID" : "37", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_transformer_fu_485.grp_self_attention_fu_2221.scaled_attention_transposed_V_U", "Parent" : "17"},
	{"ID" : "38", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_transformer_fu_485.grp_self_attention_fu_2221.scaled_attention_reshaped_V_U", "Parent" : "17"},
	{"ID" : "39", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_transformer_fu_485.grp_self_attention_fu_2221.result_U", "Parent" : "17"},
	{"ID" : "40", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_transformer_fu_485.grp_self_attention_fu_2221.sum_out_V_U", "Parent" : "17"},
	{"ID" : "41", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_transformer_fu_485.grp_self_attention_fu_2221.sum_out_flat_V_U", "Parent" : "17"},
	{"ID" : "42", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_transformer_fu_485.grp_self_attention_fu_2221.grp_dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_fu_1202", "Parent" : "17",
		"CDFG" : "dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "24",
		"VariableLatency" : "0", "ExactLatency" : "32", "EstimateLatencyMin" : "32", "EstimateLatencyMax" : "32",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "data_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "data_V_offset", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "p_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read1", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read2", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read3", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read4", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read5", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read6", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read7", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read8", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read9", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read10", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read11", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read12", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read13", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read14", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read15", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read16", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read17", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read18", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read19", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read20", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read21", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read22", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read23", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read24", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read25", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read26", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read27", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read28", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read29", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read30", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read31", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read32", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read33", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read34", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read35", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read36", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read37", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read38", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read39", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read40", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read41", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read42", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read43", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read44", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read45", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read46", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read47", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "43", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_transformer_fu_485.grp_self_attention_fu_2221.grp_dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_fu_1258", "Parent" : "17",
		"CDFG" : "dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "8",
		"VariableLatency" : "0", "ExactLatency" : "16", "EstimateLatencyMin" : "16", "EstimateLatencyMax" : "16",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "data_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "data_V_offset", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_V", "Type" : "Memory", "Direction" : "O"}]},
	{"ID" : "44", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_transformer_fu_485.grp_self_attention_fu_2221.grp_init_invert_table_ap_fixed_sa_softmax_config0_s_fu_1266", "Parent" : "17", "Child" : ["45", "46"],
		"CDFG" : "init_invert_table_ap_fixed_sa_softmax_config0_s",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "458753", "EstimateLatencyMax" : "458753",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "table_out_V", "Type" : "Memory", "Direction" : "O"}]},
	{"ID" : "45", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_transformer_fu_485.grp_self_attention_fu_2221.grp_init_invert_table_ap_fixed_sa_softmax_config0_s_fu_1266.myproject_fdiv_32ns_32ns_32_9_1_U66", "Parent" : "44"},
	{"ID" : "46", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_transformer_fu_485.grp_self_attention_fu_2221.grp_init_invert_table_ap_fixed_sa_softmax_config0_s_fu_1266.myproject_fpext_32ns_64_2_1_U67", "Parent" : "44"},
	{"ID" : "47", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_transformer_fu_485.grp_self_attention_fu_2221.grp_init_exp_table_ap_fixed_16_6_5_3_0_sa_softmax_config0_s_fu_1271", "Parent" : "17", "Child" : ["48", "49"],
		"CDFG" : "init_exp_table_ap_fixed_16_6_5_3_0_sa_softmax_config0_s",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "425985", "EstimateLatencyMax" : "425985",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "table_out_V", "Type" : "Memory", "Direction" : "O"}]},
	{"ID" : "48", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_transformer_fu_485.grp_self_attention_fu_2221.grp_init_exp_table_ap_fixed_16_6_5_3_0_sa_softmax_config0_s_fu_1271.myproject_fpext_32ns_64_2_1_U61", "Parent" : "47"},
	{"ID" : "49", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_transformer_fu_485.grp_self_attention_fu_2221.grp_init_exp_table_ap_fixed_16_6_5_3_0_sa_softmax_config0_s_fu_1271.myproject_fexp_32ns_32ns_32_8_full_dsp_1_U62", "Parent" : "47"},
	{"ID" : "50", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_transformer_fu_485.grp_self_attention_fu_2221.grp_p_fill_n_a_ap_fixed_unsigned_long_double_s_fu_1276", "Parent" : "17",
		"CDFG" : "p_fill_n_a_ap_fixed_unsigned_long_double_s",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "49", "EstimateLatencyMax" : "49",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : []},
	{"ID" : "51", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_transformer_fu_485.grp_self_attention_fu_2221.grp_transpose_2d_ap_fixed_sa_transpose_config0_s_fu_1280", "Parent" : "17",
		"CDFG" : "transpose_2d_ap_fixed_sa_transpose_config0_s",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "8",
		"VariableLatency" : "0", "ExactLatency" : "8", "EstimateLatencyMin" : "8", "EstimateLatencyMax" : "8",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "data_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "data_V_offset", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_t_V", "Type" : "Memory", "Direction" : "O"}]},
	{"ID" : "52", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_transformer_fu_485.grp_self_attention_fu_2221.grp_matmul_ap_fixed_ap_fixed_2ul_8ul_8ul_2ul_s_fu_1288", "Parent" : "17",
		"CDFG" : "matmul_ap_fixed_ap_fixed_2ul_8ul_8ul_2ul_s",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "145", "EstimateLatencyMax" : "145",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "a_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "a_V_offset", "Type" : "None", "Direction" : "I"},
			{"Name" : "b_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "res_V", "Type" : "Memory", "Direction" : "IO"}]},
	{"ID" : "53", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_transformer_fu_485.grp_self_attention_fu_2221.grp_matmul_ap_fixed_ap_fixed_2ul_2ul_2ul_8ul_s_fu_1297", "Parent" : "17",
		"CDFG" : "matmul_ap_fixed_ap_fixed_2ul_2ul_2ul_8ul_s",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "133", "EstimateLatencyMax" : "133",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "a_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "a_V_offset", "Type" : "None", "Direction" : "I"},
			{"Name" : "b_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "res_V", "Type" : "Memory", "Direction" : "IO"}]},
	{"ID" : "54", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_transformer_fu_485.grp_self_attention_fu_2221.myproject_mul_mul_16s_16s_32_1_1_U77", "Parent" : "17"},
	{"ID" : "55", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_transformer_fu_485.grp_self_attention_fu_2221.myproject_mul_mul_16s_16s_32_1_1_U78", "Parent" : "17"},
	{"ID" : "56", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_transformer_fu_485.grp_dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s_fu_2229", "Parent" : "11",
		"CDFG" : "dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "1", "EstimateLatencyMin" : "1", "EstimateLatencyMax" : "1",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "p_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read1", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read2", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read3", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read4", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read5", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read6", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read7", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read8", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read9", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read10", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read11", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read12", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read13", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read14", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read15", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read16", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read17", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read18", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read19", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read20", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read21", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read22", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read23", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read24", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read25", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read26", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read27", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read28", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read29", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read30", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read31", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_V_offset", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read32", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read33", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read34", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read35", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read36", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read37", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read38", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read39", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read40", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read41", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read42", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read43", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read44", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read45", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read46", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read47", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read48", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read49", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read50", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read51", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read52", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read53", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read54", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read55", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read56", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read57", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read58", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read59", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read60", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read61", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read62", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read63", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read64", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read65", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read66", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read67", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read68", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read69", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read70", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read71", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read72", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read73", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read74", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read75", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read76", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read77", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read78", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read79", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read80", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read81", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read82", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read83", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read84", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read85", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read86", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read87", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read88", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read89", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read90", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read91", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read92", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read93", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read94", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read95", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "57", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_transformer_fu_485.grp_dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_fu_2427", "Parent" : "11",
		"CDFG" : "dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "8",
		"VariableLatency" : "0", "ExactLatency" : "8", "EstimateLatencyMin" : "8", "EstimateLatencyMax" : "8",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "p_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read1", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read2", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read3", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read4", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read5", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read6", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read7", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read8", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read9", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read10", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read11", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read12", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read13", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read14", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read15", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read16", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read17", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read18", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read19", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read20", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read21", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read22", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read23", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read24", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read25", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read26", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read27", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read28", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read29", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read30", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read31", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read32", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read33", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read34", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read35", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read36", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read37", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read38", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read39", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read40", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read41", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read42", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read43", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read44", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read45", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read46", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read47", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read48", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read49", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read50", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read51", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read52", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read53", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read54", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read55", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read56", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read57", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read58", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read59", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read60", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read61", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read62", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read63", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_V_offset", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_V", "Type" : "Memory", "Direction" : "O"}]},
	{"ID" : "58", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_transformer_fu_485.call_ret_relu_ap_fixed_ap_fixed_35_15_5_3_0_sigmoid_config1_s_fu_2562", "Parent" : "11",
		"CDFG" : "relu_ap_fixed_ap_fixed_35_15_5_3_0_sigmoid_config1_s",
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
			{"Name" : "data_16_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_16_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_17_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_17_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_18_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_18_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_19_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_19_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_20_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_20_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_21_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_21_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_22_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_22_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_23_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_23_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_24_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_24_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_25_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_25_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_26_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_26_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_27_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_27_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_28_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_28_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_29_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_29_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_30_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_30_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_31_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_31_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_V_offset", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_0_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_0_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_1_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_1_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_2_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_2_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_3_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_3_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_4_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_4_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_5_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_5_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_6_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_6_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_7_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_7_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_8_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_8_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_9_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_9_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_10_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_10_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_11_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_11_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_12_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_12_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_13_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_13_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_14_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_14_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_15_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_15_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_16_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_16_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_17_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_17_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_18_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_18_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_19_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_19_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_20_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_20_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_21_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_21_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_22_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_22_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_23_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_23_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_24_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_24_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_25_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_25_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_26_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_26_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_27_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_27_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_28_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_28_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_29_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_29_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_30_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_30_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_31_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_31_1_V_read", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "59", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_transformer_fu_485.grp_relu_ap_fixed_ap_fixed_35_15_5_3_0_sigmoid_config0_s_fu_2824", "Parent" : "11",
		"CDFG" : "relu_ap_fixed_ap_fixed_35_15_5_3_0_sigmoid_config0_s",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "8",
		"VariableLatency" : "0", "ExactLatency" : "8", "EstimateLatencyMin" : "8", "EstimateLatencyMax" : "8",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "data_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "data_V_offset", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_0_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_0_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_1_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_1_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_2_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_2_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_3_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_3_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_4_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_4_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_5_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_5_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_6_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_6_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_7_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_7_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_8_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_8_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_9_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_9_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_10_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_10_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_11_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_11_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_12_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_12_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_13_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_13_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_14_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_14_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_15_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_15_1_V_read", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "60", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_2_fu_491", "Parent" : "0",
		"CDFG" : "dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_2",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "8",
		"VariableLatency" : "0", "ExactLatency" : "16", "EstimateLatencyMin" : "16", "EstimateLatencyMax" : "16",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "data_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "res_V", "Type" : "Memory", "Direction" : "O"}]},
	{"ID" : "61", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_dense_latency_ap_fixed_ap_fixed_mlp_config_0_0_0_0_0_0_fu_499", "Parent" : "0",
		"CDFG" : "dense_latency_ap_fixed_ap_fixed_mlp_config_0_0_0_0_0_0",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "8",
		"VariableLatency" : "0", "ExactLatency" : "11", "EstimateLatencyMin" : "11", "EstimateLatencyMax" : "11",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "data_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "res_V", "Type" : "Memory", "Direction" : "O"}]},
	{"ID" : "62", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_init_invert_table_ap_fixed_16_6_5_3_0_softmax_config0_s_fu_505", "Parent" : "0", "Child" : ["63", "64"],
		"CDFG" : "init_invert_table_ap_fixed_16_6_5_3_0_softmax_config0_s",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "458753", "EstimateLatencyMax" : "458753",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "table_out_V", "Type" : "Memory", "Direction" : "O"}]},
	{"ID" : "63", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_init_invert_table_ap_fixed_16_6_5_3_0_softmax_config0_s_fu_505.myproject_fdiv_32ns_32ns_32_9_1_U435", "Parent" : "62"},
	{"ID" : "64", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_init_invert_table_ap_fixed_16_6_5_3_0_softmax_config0_s_fu_505.myproject_fpext_32ns_64_2_1_U436", "Parent" : "62"},
	{"ID" : "65", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s_fu_510", "Parent" : "0", "Child" : ["66", "67", "68"],
		"CDFG" : "init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "491521", "EstimateLatencyMax" : "491521",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "table_out_V", "Type" : "Memory", "Direction" : "O"}]},
	{"ID" : "66", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s_fu_510.myproject_fpext_32ns_64_2_1_U426", "Parent" : "65"},
	{"ID" : "67", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s_fu_510.myproject_fcmp_32ns_32ns_1_2_1_U427", "Parent" : "65"},
	{"ID" : "68", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s_fu_510.myproject_flog_32ns_32ns_32_9_full_dsp_1_U428", "Parent" : "65"},
	{"ID" : "69", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_init_exp_table_ap_fixed_16_6_5_3_0_softmax_config0_s_fu_515", "Parent" : "0", "Child" : ["70", "71"],
		"CDFG" : "init_exp_table_ap_fixed_16_6_5_3_0_softmax_config0_s",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "425985", "EstimateLatencyMax" : "425985",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "table_out_V", "Type" : "Memory", "Direction" : "O"}]},
	{"ID" : "70", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_init_exp_table_ap_fixed_16_6_5_3_0_softmax_config0_s_fu_515.myproject_fpext_32ns_64_2_1_U432", "Parent" : "69"},
	{"ID" : "71", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_init_exp_table_ap_fixed_16_6_5_3_0_softmax_config0_s_fu_515.myproject_fexp_32ns_32ns_32_8_full_dsp_1_U433", "Parent" : "69"},
	{"ID" : "72", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.myproject_mul_mul_16s_16s_32_1_1_U438", "Parent" : "0"},
	{"ID" : "73", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.myproject_mul_mul_16s_16s_32_1_1_U439", "Parent" : "0"},
	{"ID" : "74", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.myproject_mul_mul_16s_16s_32_1_1_U440", "Parent" : "0"},
	{"ID" : "75", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.myproject_mul_mul_16s_16s_32_1_1_U441", "Parent" : "0"},
	{"ID" : "76", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.myproject_mul_mul_16s_16s_32_1_1_U442", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
	myproject {
		data_in_V {Type I LastRead 8 FirstWrite -1}
		data_out_V {Type O LastRead -1 FirstWrite 44}
		const_size_in_1 {Type O LastRead -1 FirstWrite 16}
		const_size_out_1 {Type O LastRead -1 FirstWrite 16}
		cls_token_V {Type I LastRead -1 FirstWrite -1}}
	transformer {
		data_V {Type I LastRead 23 FirstWrite -1}
		res_V {Type O LastRead -1 FirstWrite 10}}
	self_attention {
		data_V {Type I LastRead 23 FirstWrite -1}
		res_V {Type O LastRead -1 FirstWrite 25}}
	dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1 {
		data_V {Type I LastRead 8 FirstWrite -1}
		data_V_offset {Type I LastRead 0 FirstWrite -1}
		res_V {Type O LastRead -1 FirstWrite 9}
		p_read {Type I LastRead 4 FirstWrite -1}
		p_read1 {Type I LastRead 4 FirstWrite -1}
		p_read2 {Type I LastRead 4 FirstWrite -1}
		p_read3 {Type I LastRead 4 FirstWrite -1}
		p_read4 {Type I LastRead 4 FirstWrite -1}
		p_read5 {Type I LastRead 4 FirstWrite -1}
		p_read6 {Type I LastRead 4 FirstWrite -1}
		p_read7 {Type I LastRead 4 FirstWrite -1}
		p_read8 {Type I LastRead 4 FirstWrite -1}
		p_read9 {Type I LastRead 4 FirstWrite -1}
		p_read10 {Type I LastRead 4 FirstWrite -1}
		p_read11 {Type I LastRead 4 FirstWrite -1}
		p_read12 {Type I LastRead 4 FirstWrite -1}
		p_read13 {Type I LastRead 4 FirstWrite -1}
		p_read14 {Type I LastRead 4 FirstWrite -1}
		p_read15 {Type I LastRead 4 FirstWrite -1}
		p_read16 {Type I LastRead 4 FirstWrite -1}
		p_read17 {Type I LastRead 4 FirstWrite -1}
		p_read18 {Type I LastRead 4 FirstWrite -1}
		p_read19 {Type I LastRead 4 FirstWrite -1}
		p_read20 {Type I LastRead 4 FirstWrite -1}
		p_read21 {Type I LastRead 4 FirstWrite -1}
		p_read22 {Type I LastRead 4 FirstWrite -1}
		p_read23 {Type I LastRead 4 FirstWrite -1}
		p_read24 {Type I LastRead 4 FirstWrite -1}
		p_read25 {Type I LastRead 4 FirstWrite -1}
		p_read26 {Type I LastRead 4 FirstWrite -1}
		p_read27 {Type I LastRead 4 FirstWrite -1}
		p_read28 {Type I LastRead 4 FirstWrite -1}
		p_read29 {Type I LastRead 4 FirstWrite -1}
		p_read30 {Type I LastRead 4 FirstWrite -1}
		p_read31 {Type I LastRead 4 FirstWrite -1}
		p_read32 {Type I LastRead 4 FirstWrite -1}
		p_read33 {Type I LastRead 4 FirstWrite -1}
		p_read34 {Type I LastRead 4 FirstWrite -1}
		p_read35 {Type I LastRead 4 FirstWrite -1}
		p_read36 {Type I LastRead 4 FirstWrite -1}
		p_read37 {Type I LastRead 4 FirstWrite -1}
		p_read38 {Type I LastRead 4 FirstWrite -1}
		p_read39 {Type I LastRead 4 FirstWrite -1}
		p_read40 {Type I LastRead 4 FirstWrite -1}
		p_read41 {Type I LastRead 4 FirstWrite -1}
		p_read42 {Type I LastRead 4 FirstWrite -1}
		p_read43 {Type I LastRead 4 FirstWrite -1}
		p_read44 {Type I LastRead 4 FirstWrite -1}
		p_read45 {Type I LastRead 4 FirstWrite -1}
		p_read46 {Type I LastRead 4 FirstWrite -1}
		p_read47 {Type I LastRead 4 FirstWrite -1}}
	dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1 {
		data_V {Type I LastRead 8 FirstWrite -1}
		data_V_offset {Type I LastRead 0 FirstWrite -1}
		res_V {Type O LastRead -1 FirstWrite 9}}
	init_invert_table_ap_fixed_sa_softmax_config0_s {
		table_out_V {Type O LastRead -1 FirstWrite 14}}
	init_exp_table_ap_fixed_16_6_5_3_0_sa_softmax_config0_s {
		table_out_V {Type O LastRead -1 FirstWrite 13}}
	p_fill_n_a_ap_fixed_unsigned_long_double_s {}
	transpose_2d_ap_fixed_sa_transpose_config0_s {
		data_V {Type I LastRead 8 FirstWrite -1}
		data_V_offset {Type I LastRead 0 FirstWrite -1}
		data_t_V {Type O LastRead -1 FirstWrite 1}}
	matmul_ap_fixed_ap_fixed_2ul_8ul_8ul_2ul_s {
		a_V {Type I LastRead 3 FirstWrite -1}
		a_V_offset {Type I LastRead 0 FirstWrite -1}
		b_V {Type I LastRead 3 FirstWrite -1}
		res_V {Type IO LastRead 4 FirstWrite 5}}
	matmul_ap_fixed_ap_fixed_2ul_2ul_2ul_8ul_s {
		a_V {Type I LastRead 3 FirstWrite -1}
		a_V_offset {Type I LastRead 0 FirstWrite -1}
		b_V {Type I LastRead 3 FirstWrite -1}
		res_V {Type IO LastRead 4 FirstWrite 5}}
	dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s {
		p_read {Type I LastRead 0 FirstWrite -1}
		p_read1 {Type I LastRead 0 FirstWrite -1}
		p_read2 {Type I LastRead 0 FirstWrite -1}
		p_read3 {Type I LastRead 0 FirstWrite -1}
		p_read4 {Type I LastRead 0 FirstWrite -1}
		p_read5 {Type I LastRead 0 FirstWrite -1}
		p_read6 {Type I LastRead 0 FirstWrite -1}
		p_read7 {Type I LastRead 0 FirstWrite -1}
		p_read8 {Type I LastRead 0 FirstWrite -1}
		p_read9 {Type I LastRead 0 FirstWrite -1}
		p_read10 {Type I LastRead 0 FirstWrite -1}
		p_read11 {Type I LastRead 0 FirstWrite -1}
		p_read12 {Type I LastRead 0 FirstWrite -1}
		p_read13 {Type I LastRead 0 FirstWrite -1}
		p_read14 {Type I LastRead 0 FirstWrite -1}
		p_read15 {Type I LastRead 0 FirstWrite -1}
		p_read16 {Type I LastRead 0 FirstWrite -1}
		p_read17 {Type I LastRead 0 FirstWrite -1}
		p_read18 {Type I LastRead 0 FirstWrite -1}
		p_read19 {Type I LastRead 0 FirstWrite -1}
		p_read20 {Type I LastRead 0 FirstWrite -1}
		p_read21 {Type I LastRead 0 FirstWrite -1}
		p_read22 {Type I LastRead 0 FirstWrite -1}
		p_read23 {Type I LastRead 0 FirstWrite -1}
		p_read24 {Type I LastRead 0 FirstWrite -1}
		p_read25 {Type I LastRead 0 FirstWrite -1}
		p_read26 {Type I LastRead 0 FirstWrite -1}
		p_read27 {Type I LastRead 0 FirstWrite -1}
		p_read28 {Type I LastRead 0 FirstWrite -1}
		p_read29 {Type I LastRead 0 FirstWrite -1}
		p_read30 {Type I LastRead 0 FirstWrite -1}
		p_read31 {Type I LastRead 0 FirstWrite -1}
		data_V_offset {Type I LastRead 0 FirstWrite -1}
		p_read32 {Type I LastRead 0 FirstWrite -1}
		p_read33 {Type I LastRead 0 FirstWrite -1}
		p_read34 {Type I LastRead 0 FirstWrite -1}
		p_read35 {Type I LastRead 0 FirstWrite -1}
		p_read36 {Type I LastRead 0 FirstWrite -1}
		p_read37 {Type I LastRead 0 FirstWrite -1}
		p_read38 {Type I LastRead 0 FirstWrite -1}
		p_read39 {Type I LastRead 0 FirstWrite -1}
		p_read40 {Type I LastRead 0 FirstWrite -1}
		p_read41 {Type I LastRead 0 FirstWrite -1}
		p_read42 {Type I LastRead 0 FirstWrite -1}
		p_read43 {Type I LastRead 0 FirstWrite -1}
		p_read44 {Type I LastRead 0 FirstWrite -1}
		p_read45 {Type I LastRead 0 FirstWrite -1}
		p_read46 {Type I LastRead 0 FirstWrite -1}
		p_read47 {Type I LastRead 0 FirstWrite -1}
		p_read48 {Type I LastRead 0 FirstWrite -1}
		p_read49 {Type I LastRead 0 FirstWrite -1}
		p_read50 {Type I LastRead 0 FirstWrite -1}
		p_read51 {Type I LastRead 0 FirstWrite -1}
		p_read52 {Type I LastRead 0 FirstWrite -1}
		p_read53 {Type I LastRead 0 FirstWrite -1}
		p_read54 {Type I LastRead 0 FirstWrite -1}
		p_read55 {Type I LastRead 0 FirstWrite -1}
		p_read56 {Type I LastRead 0 FirstWrite -1}
		p_read57 {Type I LastRead 0 FirstWrite -1}
		p_read58 {Type I LastRead 0 FirstWrite -1}
		p_read59 {Type I LastRead 0 FirstWrite -1}
		p_read60 {Type I LastRead 0 FirstWrite -1}
		p_read61 {Type I LastRead 0 FirstWrite -1}
		p_read62 {Type I LastRead 0 FirstWrite -1}
		p_read63 {Type I LastRead 0 FirstWrite -1}
		p_read64 {Type I LastRead 0 FirstWrite -1}
		p_read65 {Type I LastRead 0 FirstWrite -1}
		p_read66 {Type I LastRead 0 FirstWrite -1}
		p_read67 {Type I LastRead 0 FirstWrite -1}
		p_read68 {Type I LastRead 0 FirstWrite -1}
		p_read69 {Type I LastRead 0 FirstWrite -1}
		p_read70 {Type I LastRead 0 FirstWrite -1}
		p_read71 {Type I LastRead 0 FirstWrite -1}
		p_read72 {Type I LastRead 0 FirstWrite -1}
		p_read73 {Type I LastRead 0 FirstWrite -1}
		p_read74 {Type I LastRead 0 FirstWrite -1}
		p_read75 {Type I LastRead 0 FirstWrite -1}
		p_read76 {Type I LastRead 0 FirstWrite -1}
		p_read77 {Type I LastRead 0 FirstWrite -1}
		p_read78 {Type I LastRead 0 FirstWrite -1}
		p_read79 {Type I LastRead 0 FirstWrite -1}
		p_read80 {Type I LastRead 0 FirstWrite -1}
		p_read81 {Type I LastRead 0 FirstWrite -1}
		p_read82 {Type I LastRead 0 FirstWrite -1}
		p_read83 {Type I LastRead 0 FirstWrite -1}
		p_read84 {Type I LastRead 0 FirstWrite -1}
		p_read85 {Type I LastRead 0 FirstWrite -1}
		p_read86 {Type I LastRead 0 FirstWrite -1}
		p_read87 {Type I LastRead 0 FirstWrite -1}
		p_read88 {Type I LastRead 0 FirstWrite -1}
		p_read89 {Type I LastRead 0 FirstWrite -1}
		p_read90 {Type I LastRead 0 FirstWrite -1}
		p_read91 {Type I LastRead 0 FirstWrite -1}
		p_read92 {Type I LastRead 0 FirstWrite -1}
		p_read93 {Type I LastRead 0 FirstWrite -1}
		p_read94 {Type I LastRead 0 FirstWrite -1}
		p_read95 {Type I LastRead 0 FirstWrite -1}}
	dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0 {
		p_read {Type I LastRead 0 FirstWrite -1}
		p_read1 {Type I LastRead 0 FirstWrite -1}
		p_read2 {Type I LastRead 0 FirstWrite -1}
		p_read3 {Type I LastRead 0 FirstWrite -1}
		p_read4 {Type I LastRead 0 FirstWrite -1}
		p_read5 {Type I LastRead 0 FirstWrite -1}
		p_read6 {Type I LastRead 0 FirstWrite -1}
		p_read7 {Type I LastRead 0 FirstWrite -1}
		p_read8 {Type I LastRead 0 FirstWrite -1}
		p_read9 {Type I LastRead 0 FirstWrite -1}
		p_read10 {Type I LastRead 0 FirstWrite -1}
		p_read11 {Type I LastRead 0 FirstWrite -1}
		p_read12 {Type I LastRead 0 FirstWrite -1}
		p_read13 {Type I LastRead 0 FirstWrite -1}
		p_read14 {Type I LastRead 0 FirstWrite -1}
		p_read15 {Type I LastRead 0 FirstWrite -1}
		p_read16 {Type I LastRead 0 FirstWrite -1}
		p_read17 {Type I LastRead 0 FirstWrite -1}
		p_read18 {Type I LastRead 0 FirstWrite -1}
		p_read19 {Type I LastRead 0 FirstWrite -1}
		p_read20 {Type I LastRead 0 FirstWrite -1}
		p_read21 {Type I LastRead 0 FirstWrite -1}
		p_read22 {Type I LastRead 0 FirstWrite -1}
		p_read23 {Type I LastRead 0 FirstWrite -1}
		p_read24 {Type I LastRead 0 FirstWrite -1}
		p_read25 {Type I LastRead 0 FirstWrite -1}
		p_read26 {Type I LastRead 0 FirstWrite -1}
		p_read27 {Type I LastRead 0 FirstWrite -1}
		p_read28 {Type I LastRead 0 FirstWrite -1}
		p_read29 {Type I LastRead 0 FirstWrite -1}
		p_read30 {Type I LastRead 0 FirstWrite -1}
		p_read31 {Type I LastRead 0 FirstWrite -1}
		p_read32 {Type I LastRead 0 FirstWrite -1}
		p_read33 {Type I LastRead 0 FirstWrite -1}
		p_read34 {Type I LastRead 0 FirstWrite -1}
		p_read35 {Type I LastRead 0 FirstWrite -1}
		p_read36 {Type I LastRead 0 FirstWrite -1}
		p_read37 {Type I LastRead 0 FirstWrite -1}
		p_read38 {Type I LastRead 0 FirstWrite -1}
		p_read39 {Type I LastRead 0 FirstWrite -1}
		p_read40 {Type I LastRead 0 FirstWrite -1}
		p_read41 {Type I LastRead 0 FirstWrite -1}
		p_read42 {Type I LastRead 0 FirstWrite -1}
		p_read43 {Type I LastRead 0 FirstWrite -1}
		p_read44 {Type I LastRead 0 FirstWrite -1}
		p_read45 {Type I LastRead 0 FirstWrite -1}
		p_read46 {Type I LastRead 0 FirstWrite -1}
		p_read47 {Type I LastRead 0 FirstWrite -1}
		p_read48 {Type I LastRead 0 FirstWrite -1}
		p_read49 {Type I LastRead 0 FirstWrite -1}
		p_read50 {Type I LastRead 0 FirstWrite -1}
		p_read51 {Type I LastRead 0 FirstWrite -1}
		p_read52 {Type I LastRead 0 FirstWrite -1}
		p_read53 {Type I LastRead 0 FirstWrite -1}
		p_read54 {Type I LastRead 0 FirstWrite -1}
		p_read55 {Type I LastRead 0 FirstWrite -1}
		p_read56 {Type I LastRead 0 FirstWrite -1}
		p_read57 {Type I LastRead 0 FirstWrite -1}
		p_read58 {Type I LastRead 0 FirstWrite -1}
		p_read59 {Type I LastRead 0 FirstWrite -1}
		p_read60 {Type I LastRead 0 FirstWrite -1}
		p_read61 {Type I LastRead 0 FirstWrite -1}
		p_read62 {Type I LastRead 0 FirstWrite -1}
		p_read63 {Type I LastRead 0 FirstWrite -1}
		data_V_offset {Type I LastRead 0 FirstWrite -1}
		res_V {Type O LastRead -1 FirstWrite 1}}
	relu_ap_fixed_ap_fixed_35_15_5_3_0_sigmoid_config1_s {
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
		data_16_0_V_read {Type I LastRead 0 FirstWrite -1}
		data_16_1_V_read {Type I LastRead 0 FirstWrite -1}
		data_17_0_V_read {Type I LastRead 0 FirstWrite -1}
		data_17_1_V_read {Type I LastRead 0 FirstWrite -1}
		data_18_0_V_read {Type I LastRead 0 FirstWrite -1}
		data_18_1_V_read {Type I LastRead 0 FirstWrite -1}
		data_19_0_V_read {Type I LastRead 0 FirstWrite -1}
		data_19_1_V_read {Type I LastRead 0 FirstWrite -1}
		data_20_0_V_read {Type I LastRead 0 FirstWrite -1}
		data_20_1_V_read {Type I LastRead 0 FirstWrite -1}
		data_21_0_V_read {Type I LastRead 0 FirstWrite -1}
		data_21_1_V_read {Type I LastRead 0 FirstWrite -1}
		data_22_0_V_read {Type I LastRead 0 FirstWrite -1}
		data_22_1_V_read {Type I LastRead 0 FirstWrite -1}
		data_23_0_V_read {Type I LastRead 0 FirstWrite -1}
		data_23_1_V_read {Type I LastRead 0 FirstWrite -1}
		data_24_0_V_read {Type I LastRead 0 FirstWrite -1}
		data_24_1_V_read {Type I LastRead 0 FirstWrite -1}
		data_25_0_V_read {Type I LastRead 0 FirstWrite -1}
		data_25_1_V_read {Type I LastRead 0 FirstWrite -1}
		data_26_0_V_read {Type I LastRead 0 FirstWrite -1}
		data_26_1_V_read {Type I LastRead 0 FirstWrite -1}
		data_27_0_V_read {Type I LastRead 0 FirstWrite -1}
		data_27_1_V_read {Type I LastRead 0 FirstWrite -1}
		data_28_0_V_read {Type I LastRead 0 FirstWrite -1}
		data_28_1_V_read {Type I LastRead 0 FirstWrite -1}
		data_29_0_V_read {Type I LastRead 0 FirstWrite -1}
		data_29_1_V_read {Type I LastRead 0 FirstWrite -1}
		data_30_0_V_read {Type I LastRead 0 FirstWrite -1}
		data_30_1_V_read {Type I LastRead 0 FirstWrite -1}
		data_31_0_V_read {Type I LastRead 0 FirstWrite -1}
		data_31_1_V_read {Type I LastRead 0 FirstWrite -1}
		data_V_offset {Type I LastRead 0 FirstWrite -1}
		res_0_0_V_read {Type I LastRead 0 FirstWrite -1}
		res_0_1_V_read {Type I LastRead 0 FirstWrite -1}
		res_1_0_V_read {Type I LastRead 0 FirstWrite -1}
		res_1_1_V_read {Type I LastRead 0 FirstWrite -1}
		res_2_0_V_read {Type I LastRead 0 FirstWrite -1}
		res_2_1_V_read {Type I LastRead 0 FirstWrite -1}
		res_3_0_V_read {Type I LastRead 0 FirstWrite -1}
		res_3_1_V_read {Type I LastRead 0 FirstWrite -1}
		res_4_0_V_read {Type I LastRead 0 FirstWrite -1}
		res_4_1_V_read {Type I LastRead 0 FirstWrite -1}
		res_5_0_V_read {Type I LastRead 0 FirstWrite -1}
		res_5_1_V_read {Type I LastRead 0 FirstWrite -1}
		res_6_0_V_read {Type I LastRead 0 FirstWrite -1}
		res_6_1_V_read {Type I LastRead 0 FirstWrite -1}
		res_7_0_V_read {Type I LastRead 0 FirstWrite -1}
		res_7_1_V_read {Type I LastRead 0 FirstWrite -1}
		res_8_0_V_read {Type I LastRead 0 FirstWrite -1}
		res_8_1_V_read {Type I LastRead 0 FirstWrite -1}
		res_9_0_V_read {Type I LastRead 0 FirstWrite -1}
		res_9_1_V_read {Type I LastRead 0 FirstWrite -1}
		res_10_0_V_read {Type I LastRead 0 FirstWrite -1}
		res_10_1_V_read {Type I LastRead 0 FirstWrite -1}
		res_11_0_V_read {Type I LastRead 0 FirstWrite -1}
		res_11_1_V_read {Type I LastRead 0 FirstWrite -1}
		res_12_0_V_read {Type I LastRead 0 FirstWrite -1}
		res_12_1_V_read {Type I LastRead 0 FirstWrite -1}
		res_13_0_V_read {Type I LastRead 0 FirstWrite -1}
		res_13_1_V_read {Type I LastRead 0 FirstWrite -1}
		res_14_0_V_read {Type I LastRead 0 FirstWrite -1}
		res_14_1_V_read {Type I LastRead 0 FirstWrite -1}
		res_15_0_V_read {Type I LastRead 0 FirstWrite -1}
		res_15_1_V_read {Type I LastRead 0 FirstWrite -1}
		res_16_0_V_read {Type I LastRead 0 FirstWrite -1}
		res_16_1_V_read {Type I LastRead 0 FirstWrite -1}
		res_17_0_V_read {Type I LastRead 0 FirstWrite -1}
		res_17_1_V_read {Type I LastRead 0 FirstWrite -1}
		res_18_0_V_read {Type I LastRead 0 FirstWrite -1}
		res_18_1_V_read {Type I LastRead 0 FirstWrite -1}
		res_19_0_V_read {Type I LastRead 0 FirstWrite -1}
		res_19_1_V_read {Type I LastRead 0 FirstWrite -1}
		res_20_0_V_read {Type I LastRead 0 FirstWrite -1}
		res_20_1_V_read {Type I LastRead 0 FirstWrite -1}
		res_21_0_V_read {Type I LastRead 0 FirstWrite -1}
		res_21_1_V_read {Type I LastRead 0 FirstWrite -1}
		res_22_0_V_read {Type I LastRead 0 FirstWrite -1}
		res_22_1_V_read {Type I LastRead 0 FirstWrite -1}
		res_23_0_V_read {Type I LastRead 0 FirstWrite -1}
		res_23_1_V_read {Type I LastRead 0 FirstWrite -1}
		res_24_0_V_read {Type I LastRead 0 FirstWrite -1}
		res_24_1_V_read {Type I LastRead 0 FirstWrite -1}
		res_25_0_V_read {Type I LastRead 0 FirstWrite -1}
		res_25_1_V_read {Type I LastRead 0 FirstWrite -1}
		res_26_0_V_read {Type I LastRead 0 FirstWrite -1}
		res_26_1_V_read {Type I LastRead 0 FirstWrite -1}
		res_27_0_V_read {Type I LastRead 0 FirstWrite -1}
		res_27_1_V_read {Type I LastRead 0 FirstWrite -1}
		res_28_0_V_read {Type I LastRead 0 FirstWrite -1}
		res_28_1_V_read {Type I LastRead 0 FirstWrite -1}
		res_29_0_V_read {Type I LastRead 0 FirstWrite -1}
		res_29_1_V_read {Type I LastRead 0 FirstWrite -1}
		res_30_0_V_read {Type I LastRead 0 FirstWrite -1}
		res_30_1_V_read {Type I LastRead 0 FirstWrite -1}
		res_31_0_V_read {Type I LastRead 0 FirstWrite -1}
		res_31_1_V_read {Type I LastRead 0 FirstWrite -1}}
	relu_ap_fixed_ap_fixed_35_15_5_3_0_sigmoid_config0_s {
		data_V {Type I LastRead 8 FirstWrite -1}
		data_V_offset {Type I LastRead 0 FirstWrite -1}
		res_0_0_V_read {Type I LastRead 7 FirstWrite -1}
		res_0_1_V_read {Type I LastRead 7 FirstWrite -1}
		res_1_0_V_read {Type I LastRead 7 FirstWrite -1}
		res_1_1_V_read {Type I LastRead 7 FirstWrite -1}
		res_2_0_V_read {Type I LastRead 7 FirstWrite -1}
		res_2_1_V_read {Type I LastRead 7 FirstWrite -1}
		res_3_0_V_read {Type I LastRead 7 FirstWrite -1}
		res_3_1_V_read {Type I LastRead 7 FirstWrite -1}
		res_4_0_V_read {Type I LastRead 7 FirstWrite -1}
		res_4_1_V_read {Type I LastRead 7 FirstWrite -1}
		res_5_0_V_read {Type I LastRead 7 FirstWrite -1}
		res_5_1_V_read {Type I LastRead 7 FirstWrite -1}
		res_6_0_V_read {Type I LastRead 7 FirstWrite -1}
		res_6_1_V_read {Type I LastRead 7 FirstWrite -1}
		res_7_0_V_read {Type I LastRead 7 FirstWrite -1}
		res_7_1_V_read {Type I LastRead 7 FirstWrite -1}
		res_8_0_V_read {Type I LastRead 7 FirstWrite -1}
		res_8_1_V_read {Type I LastRead 7 FirstWrite -1}
		res_9_0_V_read {Type I LastRead 7 FirstWrite -1}
		res_9_1_V_read {Type I LastRead 7 FirstWrite -1}
		res_10_0_V_read {Type I LastRead 7 FirstWrite -1}
		res_10_1_V_read {Type I LastRead 7 FirstWrite -1}
		res_11_0_V_read {Type I LastRead 7 FirstWrite -1}
		res_11_1_V_read {Type I LastRead 7 FirstWrite -1}
		res_12_0_V_read {Type I LastRead 7 FirstWrite -1}
		res_12_1_V_read {Type I LastRead 7 FirstWrite -1}
		res_13_0_V_read {Type I LastRead 7 FirstWrite -1}
		res_13_1_V_read {Type I LastRead 7 FirstWrite -1}
		res_14_0_V_read {Type I LastRead 7 FirstWrite -1}
		res_14_1_V_read {Type I LastRead 7 FirstWrite -1}
		res_15_0_V_read {Type I LastRead 7 FirstWrite -1}
		res_15_1_V_read {Type I LastRead 7 FirstWrite -1}}
	dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_2 {
		data_V {Type I LastRead 8 FirstWrite -1}
		res_V {Type O LastRead -1 FirstWrite 9}}
	dense_latency_ap_fixed_ap_fixed_mlp_config_0_0_0_0_0_0 {
		data_V {Type I LastRead 8 FirstWrite -1}
		res_V {Type O LastRead -1 FirstWrite 9}}
	init_invert_table_ap_fixed_16_6_5_3_0_softmax_config0_s {
		table_out_V {Type O LastRead -1 FirstWrite 14}}
	init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s {
		table_out_V {Type O LastRead -1 FirstWrite 15}}
	init_exp_table_ap_fixed_16_6_5_3_0_softmax_config0_s {
		table_out_V {Type O LastRead -1 FirstWrite 13}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "2329185", "Max" : "2329185"}
	, {"Name" : "Interval", "Min" : "2329186", "Max" : "2329186"}
]}

set PipelineEnableSignalInfo {[
]}

set Spec2ImplPortList { 
	data_in_V { ap_memory {  { data_in_V_address0 mem_address 1 4 }  { data_in_V_ce0 mem_ce 1 1 }  { data_in_V_q0 mem_dout 0 35 }  { data_in_V_address1 MemPortADDR2 1 4 }  { data_in_V_ce1 MemPortCE2 1 1 }  { data_in_V_q1 MemPortDOUT2 0 35 } } }
	data_out_V { ap_memory {  { data_out_V_address0 mem_address 1 3 }  { data_out_V_ce0 mem_ce 1 1 }  { data_out_V_we0 mem_we 1 1 }  { data_out_V_d0 mem_din 1 35 }  { data_out_V_address1 MemPortADDR2 1 3 }  { data_out_V_ce1 MemPortCE2 1 1 }  { data_out_V_we1 MemPortWE2 1 1 }  { data_out_V_d1 MemPortDIN2 1 35 } } }
	const_size_in_1 { ap_vld {  { const_size_in_1 out_data 1 16 }  { const_size_in_1_ap_vld out_vld 1 1 } } }
	const_size_out_1 { ap_vld {  { const_size_out_1 out_data 1 16 }  { const_size_out_1_ap_vld out_vld 1 1 } } }
}

set busDeadlockParameterList { 
}

# RTL port scheduling information:
set fifoSchedulingInfoList { 
}

# RTL bus port read request latency information:
set busReadReqLatencyList { 
}

# RTL bus port write response latency information:
set busWriteResLatencyList { 
}

# RTL array port load latency information:
set memoryLoadLatencyList { 
}
set moduleName myproject
set isTopModule 1
set isTaskLevelControl 1
set isCombinational 0
set isDatapathOnly 0
set isFreeRunPipelineModule 0
set isPipelined 0
set pipeline_type none
set FunctionProtocol ap_ctrl_hs
set isOneStateSeq 0
set ProfileFlag 0
set StallSigGenFlag 0
set isEnableWaveformDebug 1
set C_modelName {myproject}
set C_modelType { void 0 }
set C_modelArgList {
	{ data_in_V int 35 regular {array 16 { 1 1 } 1 1 }  }
	{ data_out_V int 35 regular {array 5 { 0 0 } 0 1 }  }
	{ const_size_in_1 int 16 regular {pointer 1}  }
	{ const_size_out_1 int 16 regular {pointer 1}  }
}
set C_modelArgMapList {[ 
	{ "Name" : "data_in_V", "interface" : "memory", "bitwidth" : 35, "direction" : "READONLY", "bitSlice":[{"low":0,"up":34,"cElement": [{"cName": "data_in.V","cData": "int35","bit_use": { "low": 0,"up": 34},"cArray": [{"low" : 0,"up" : 15,"step" : 1}]}]}]} , 
 	{ "Name" : "data_out_V", "interface" : "memory", "bitwidth" : 35, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":34,"cElement": [{"cName": "data_out.V","cData": "int35","bit_use": { "low": 0,"up": 34},"cArray": [{"low" : 0,"up" : 4,"step" : 1}]}]}]} , 
 	{ "Name" : "const_size_in_1", "interface" : "wire", "bitwidth" : 16, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":15,"cElement": [{"cName": "const_size_in_1","cData": "unsigned short","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 0,"up" : 0,"step" : 1}]}]}]} , 
 	{ "Name" : "const_size_out_1", "interface" : "wire", "bitwidth" : 16, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":15,"cElement": [{"cName": "const_size_out_1","cData": "unsigned short","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 0,"up" : 0,"step" : 1}]}]}]} ]}
# RTL Port declarations: 
set portNum 24
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ data_in_V_address0 sc_out sc_lv 4 signal 0 } 
	{ data_in_V_ce0 sc_out sc_logic 1 signal 0 } 
	{ data_in_V_q0 sc_in sc_lv 35 signal 0 } 
	{ data_in_V_address1 sc_out sc_lv 4 signal 0 } 
	{ data_in_V_ce1 sc_out sc_logic 1 signal 0 } 
	{ data_in_V_q1 sc_in sc_lv 35 signal 0 } 
	{ data_out_V_address0 sc_out sc_lv 3 signal 1 } 
	{ data_out_V_ce0 sc_out sc_logic 1 signal 1 } 
	{ data_out_V_we0 sc_out sc_logic 1 signal 1 } 
	{ data_out_V_d0 sc_out sc_lv 35 signal 1 } 
	{ data_out_V_address1 sc_out sc_lv 3 signal 1 } 
	{ data_out_V_ce1 sc_out sc_logic 1 signal 1 } 
	{ data_out_V_we1 sc_out sc_logic 1 signal 1 } 
	{ data_out_V_d1 sc_out sc_lv 35 signal 1 } 
	{ const_size_in_1 sc_out sc_lv 16 signal 2 } 
	{ const_size_in_1_ap_vld sc_out sc_logic 1 outvld 2 } 
	{ const_size_out_1 sc_out sc_lv 16 signal 3 } 
	{ const_size_out_1_ap_vld sc_out sc_logic 1 outvld 3 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "data_in_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "data_in_V", "role": "address0" }} , 
 	{ "name": "data_in_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "data_in_V", "role": "ce0" }} , 
 	{ "name": "data_in_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":35, "type": "signal", "bundle":{"name": "data_in_V", "role": "q0" }} , 
 	{ "name": "data_in_V_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "data_in_V", "role": "address1" }} , 
 	{ "name": "data_in_V_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "data_in_V", "role": "ce1" }} , 
 	{ "name": "data_in_V_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":35, "type": "signal", "bundle":{"name": "data_in_V", "role": "q1" }} , 
 	{ "name": "data_out_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "data_out_V", "role": "address0" }} , 
 	{ "name": "data_out_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "data_out_V", "role": "ce0" }} , 
 	{ "name": "data_out_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "data_out_V", "role": "we0" }} , 
 	{ "name": "data_out_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":35, "type": "signal", "bundle":{"name": "data_out_V", "role": "d0" }} , 
 	{ "name": "data_out_V_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "data_out_V", "role": "address1" }} , 
 	{ "name": "data_out_V_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "data_out_V", "role": "ce1" }} , 
 	{ "name": "data_out_V_we1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "data_out_V", "role": "we1" }} , 
 	{ "name": "data_out_V_d1", "direction": "out", "datatype": "sc_lv", "bitwidth":35, "type": "signal", "bundle":{"name": "data_out_V", "role": "d1" }} , 
 	{ "name": "const_size_in_1", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "const_size_in_1", "role": "default" }} , 
 	{ "name": "const_size_in_1_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "const_size_in_1", "role": "ap_vld" }} , 
 	{ "name": "const_size_out_1", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "const_size_out_1", "role": "default" }} , 
 	{ "name": "const_size_out_1_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "const_size_out_1", "role": "ap_vld" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "2", "3", "4", "28", "29", "32", "33"],
		"CDFG" : "myproject",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "2094", "EstimateLatencyMax" : "2094",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"WaitState" : [
			{"State" : "ap_ST_fsm_state15", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_transformer_fu_822"},
			{"State" : "ap_ST_fsm_state15", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s_fu_853"}],
		"Port" : [
			{"Name" : "data_in_V", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "28", "SubInstance" : "grp_dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_2_fu_847", "Port" : "data_V"}]},
			{"Name" : "data_out_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "const_size_in_1", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "const_size_out_1", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "exp_table13", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "4", "SubInstance" : "grp_transformer_fu_822", "Port" : "exp_table13"}]},
			{"Name" : "invert_table15", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "4", "SubInstance" : "grp_transformer_fu_822", "Port" : "invert_table15"}]},
			{"Name" : "exp_table3", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "33", "SubInstance" : "grp_softmax_latency_ap_fixed_ap_fixed_softmax_config0_s_fu_863", "Port" : "exp_table3"}]},
			{"Name" : "invert_table4", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "33", "SubInstance" : "grp_softmax_latency_ap_fixed_ap_fixed_softmax_config0_s_fu_863", "Port" : "invert_table4"}]}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.log_table_i_U", "Parent" : "0"},
	{"ID" : "2", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.transformer_0_out_U", "Parent" : "0"},
	{"ID" : "3", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.mlp_dimensions_reduced_V_U", "Parent" : "0"},
	{"ID" : "4", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_transformer_fu_822", "Parent" : "0", "Child" : ["5", "22", "23", "24", "25", "26", "27"],
		"CDFG" : "transformer",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "201", "EstimateLatencyMax" : "201",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"WaitState" : [
			{"State" : "ap_ST_fsm_state2", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_self_attention_fu_513"}],
		"Port" : [
			{"Name" : "data_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_3_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_5_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_7_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_9_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_11_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_13_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_15_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_17_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_19_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_21_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_23_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_25_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_27_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_29_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_31_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "exp_table13", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "5", "SubInstance" : "grp_self_attention_fu_513", "Port" : "exp_table13"}]},
			{"Name" : "invert_table15", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "5", "SubInstance" : "grp_self_attention_fu_513", "Port" : "invert_table15"}]}]},
	{"ID" : "5", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_transformer_fu_822.grp_self_attention_fu_513", "Parent" : "4", "Child" : ["6", "7", "8", "9", "10", "11", "12", "13", "14", "15", "16", "17"],
		"CDFG" : "self_attention",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "174", "EstimateLatencyMax" : "174",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"WaitState" : [
			{"State" : "ap_ST_fsm_state2", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_p_fill_n_a_ap_fixed_unsigned_long_double_s_fu_2001"}],
		"Port" : [
			{"Name" : "data_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_3_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_5_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_7_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_9_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_11_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_13_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_15_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_17_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_19_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_21_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_23_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_25_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_27_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_29_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_31_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "exp_table13", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "17", "SubInstance" : "grp_softmax_latency_ap_fixed_ap_fixed_sa_softmax_config0_s_fu_2286", "Port" : "exp_table13"}]},
			{"Name" : "invert_table15", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "17", "SubInstance" : "grp_softmax_latency_ap_fixed_ap_fixed_sa_softmax_config0_s_fu_2286", "Port" : "invert_table15"}]}]},
	{"ID" : "6", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_transformer_fu_822.grp_self_attention_fu_513.qkv_out_U", "Parent" : "5"},
	{"ID" : "7", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_transformer_fu_822.grp_self_attention_fu_513.energy_scaled_red_V_U", "Parent" : "5"},
	{"ID" : "8", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_transformer_fu_822.grp_self_attention_fu_513.attention_U", "Parent" : "5"},
	{"ID" : "9", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_transformer_fu_822.grp_self_attention_fu_513.grp_dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_fu_1323", "Parent" : "5",
		"CDFG" : "dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1",
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
			{"Name" : "p_read1", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read3", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read5", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read7", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read9", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read11", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read13", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read15", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read17", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read19", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read21", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read23", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read25", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read27", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read29", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read31", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_V_offset", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read32", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read33", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read34", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read35", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read36", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read37", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read38", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read39", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read40", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read41", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read42", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read43", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read44", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read45", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read46", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read47", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read48", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read49", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read50", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read51", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read52", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read53", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read54", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read55", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read56", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read57", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read58", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read59", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read60", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read61", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read62", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read63", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read64", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read65", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read66", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read67", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read68", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read69", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read70", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read71", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read72", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read73", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read74", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read75", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read76", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read77", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read78", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read79", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read80", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read81", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read82", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read83", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read84", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read85", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read86", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read87", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read88", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read89", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read90", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read91", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read92", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read93", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read94", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read95", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read96", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read97", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read98", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read99", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read100", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read101", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read102", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read103", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read104", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read105", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read106", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read107", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read108", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read109", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read110", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read111", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read112", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read113", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read114", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read115", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read116", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read117", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read118", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read119", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read120", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read121", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read122", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read123", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read124", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read125", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read126", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read127", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_V_offset", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read318", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read319", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read320", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read321", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read322", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read323", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read324", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read325", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read326", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read327", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read328", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read329", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read330", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read331", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read332", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read333", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read334", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read335", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read336", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read337", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read338", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read339", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read340", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read341", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read342", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read343", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read344", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read345", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read346", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read347", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read348", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read349", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read350", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read351", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read352", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read353", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read354", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read355", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read356", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read357", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read358", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read359", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read360", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read361", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read362", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read363", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read364", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read365", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "10", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_transformer_fu_822.grp_self_attention_fu_513.grp_dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_fu_1605", "Parent" : "5",
		"CDFG" : "dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1",
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
			{"Name" : "p_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read1", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read2", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read3", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read4", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read5", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read6", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read7", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read8", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read9", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read10", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read11", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read12", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read13", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read14", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read15", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read16", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read17", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read18", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read19", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read20", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read21", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read22", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read23", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read24", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read25", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read26", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read27", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read28", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read29", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read30", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read31", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_V_offset", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read32", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read33", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read34", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read35", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read36", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read37", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read38", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read39", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read40", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read41", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read42", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read43", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read44", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read45", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read46", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read47", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read48", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read49", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read50", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read51", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read52", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read53", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read54", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read55", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read56", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read57", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read58", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read59", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read60", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read61", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read62", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read63", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_V_offset", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "11", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_transformer_fu_822.grp_self_attention_fu_513.grp_matmul_ap_fixed_ap_fixed_2ul_2ul_2ul_8ul_s_fu_1711", "Parent" : "5",
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
			{"Name" : "res_V_offset", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "12", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_transformer_fu_822.grp_self_attention_fu_513.grp_matmul_ap_fixed_ap_fixed_2ul_8ul_8ul_2ul_s_fu_1892", "Parent" : "5",
		"CDFG" : "matmul_ap_fixed_ap_fixed_2ul_8ul_8ul_2ul_s",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "2", "EstimateLatencyMin" : "2", "EstimateLatencyMax" : "2",
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
			{"Name" : "a_4_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "a_4_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "a_5_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "a_5_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "a_6_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "a_6_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "a_7_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "a_7_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "a_8_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "a_8_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "a_9_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "a_9_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "a_10_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "a_10_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "a_11_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "a_11_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "a_12_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "a_12_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "a_13_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "a_13_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "a_14_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "a_14_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "a_15_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "a_15_1_V_read", "Type" : "None", "Direction" : "I"},
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
			{"Name" : "res_0_0_V_read_2", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_0_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_0_1_V_read_2", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_0_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_1_0_V_read_2", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_1_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_1_1_V_read_2", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_1_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_2_0_V_read_2", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_2_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_2_1_V_read_2", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_2_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_3_0_V_read_2", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_3_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_3_1_V_read_2", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_3_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_V_offset", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "13", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_transformer_fu_822.grp_self_attention_fu_513.grp_p_fill_n_a_ap_fixed_unsigned_long_double_s_fu_2001", "Parent" : "5",
		"CDFG" : "p_fill_n_a_ap_fixed_unsigned_long_double_s",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "49", "EstimateLatencyMax" : "49",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : []},
	{"ID" : "14", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_transformer_fu_822.grp_self_attention_fu_513.call_ret2_transpose_2d_ap_fixed_sa_transpose_config0_s_fu_2005", "Parent" : "5",
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
			{"Name" : "data_t_V_offset", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "15", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_transformer_fu_822.grp_self_attention_fu_513.call_ret_transpose_2d_ap_fixed_sa_transpose_config0_s_fu_2111", "Parent" : "5",
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
			{"Name" : "data_t_V_offset", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "16", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_transformer_fu_822.grp_self_attention_fu_513.grp_join_equally_ap_fixed_35_15_5_3_0_2ul_48ul_s_fu_2185", "Parent" : "5",
		"CDFG" : "join_equally_ap_fixed_35_15_5_3_0_2ul_48ul_s",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "48",
		"VariableLatency" : "0", "ExactLatency" : "47", "EstimateLatencyMin" : "47", "EstimateLatencyMax" : "47",
		"Combinational" : "0",
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
			{"Name" : "data_16_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_16_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_17_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_17_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_18_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_18_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_19_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_19_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_20_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_20_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_21_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_21_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_22_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_22_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_23_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_23_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_24_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_24_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_25_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_25_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_26_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_26_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_27_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_27_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_28_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_28_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_29_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_29_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_30_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_30_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_31_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_31_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_32_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_32_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_33_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_33_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_34_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_34_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_35_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_35_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_36_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_36_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_37_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_37_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_38_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_38_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_39_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_39_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_40_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_40_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_41_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_41_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_42_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_42_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_43_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_43_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_44_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_44_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_45_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_45_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_46_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_46_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_47_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_47_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_V", "Type" : "Memory", "Direction" : "O"}]},
	{"ID" : "17", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_transformer_fu_822.grp_self_attention_fu_513.grp_softmax_latency_ap_fixed_ap_fixed_sa_softmax_config0_s_fu_2286", "Parent" : "5", "Child" : ["18", "19", "20", "21"],
		"CDFG" : "softmax_latency_ap_fixed_ap_fixed_sa_softmax_config0_s",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "3", "EstimateLatencyMin" : "3", "EstimateLatencyMax" : "3",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "1",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "data_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "data_V_offset", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_V_offset1", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "res_V_offset", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_V_offset3", "Type" : "None", "Direction" : "I"},
			{"Name" : "exp_table13", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "invert_table15", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "18", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_transformer_fu_822.grp_self_attention_fu_513.grp_softmax_latency_ap_fixed_ap_fixed_sa_softmax_config0_s_fu_2286.exp_table13_U", "Parent" : "17"},
	{"ID" : "19", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_transformer_fu_822.grp_self_attention_fu_513.grp_softmax_latency_ap_fixed_ap_fixed_sa_softmax_config0_s_fu_2286.invert_table15_U", "Parent" : "17"},
	{"ID" : "20", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_transformer_fu_822.grp_self_attention_fu_513.grp_softmax_latency_ap_fixed_ap_fixed_sa_softmax_config0_s_fu_2286.myproject_mul_mul_16s_16s_32_1_1_U410", "Parent" : "17"},
	{"ID" : "21", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_transformer_fu_822.grp_self_attention_fu_513.grp_softmax_latency_ap_fixed_ap_fixed_sa_softmax_config0_s_fu_2286.myproject_mul_mul_16s_16s_32_1_1_U411", "Parent" : "17"},
	{"ID" : "22", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_transformer_fu_822.grp_dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s_fu_553", "Parent" : "4",
		"CDFG" : "dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s",
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
			{"Name" : "p_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read1", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read2", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read3", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read4", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read5", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read6", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read7", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read8", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read9", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read10", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read11", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read12", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read13", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read14", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read15", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read16", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read17", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read18", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read19", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read20", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read21", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read22", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read23", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read24", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read25", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read26", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read27", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read28", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read29", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read30", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read31", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_V_offset", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read32", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read33", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read34", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read35", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read36", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read37", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read38", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read39", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read40", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read41", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read42", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read43", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read44", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read45", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read46", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read47", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read48", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read49", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read50", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read51", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read52", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read53", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read54", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read55", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read56", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read57", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read58", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read59", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read60", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read61", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read62", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read63", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read64", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read65", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read66", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read67", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read68", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read69", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read70", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read71", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read72", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read73", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read74", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read75", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read76", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read77", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read78", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read79", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read80", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read81", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read82", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read83", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read84", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read85", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read86", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read87", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read88", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read89", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read90", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read91", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read92", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read93", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read94", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read95", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_V_offset", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "23", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_transformer_fu_822.grp_dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_fu_723", "Parent" : "4",
		"CDFG" : "dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0",
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
			{"Name" : "p_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read1", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read2", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read3", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read4", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read5", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read6", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read7", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read8", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read9", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read10", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read11", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read12", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read13", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read14", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read15", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read16", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read17", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read18", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read19", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read20", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read21", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read22", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read23", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read24", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read25", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read26", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read27", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read28", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read29", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read30", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read31", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read32", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read33", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read34", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read35", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read36", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read37", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read38", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read39", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read40", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read41", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read42", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read43", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read44", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read45", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read46", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read47", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read48", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read49", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read50", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read51", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read52", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read53", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read54", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read55", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read56", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read57", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read58", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read59", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read60", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read61", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read62", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read63", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_V_offset", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read64", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read65", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read66", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read67", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read68", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read69", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read70", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read71", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read72", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read73", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read74", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read75", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read76", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read77", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read78", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read79", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read80", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read81", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read82", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read83", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read84", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read85", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read86", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read87", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read88", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read89", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read90", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read91", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read92", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read93", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read94", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read95", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_V_offset", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "24", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_transformer_fu_822.call_ret5_relu_ap_fixed_ap_fixed_35_15_5_3_0_sigmoid_config1_s_fu_861", "Parent" : "4",
		"CDFG" : "relu_ap_fixed_ap_fixed_35_15_5_3_0_sigmoid_config1_s",
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
			{"Name" : "data_16_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_16_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_17_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_17_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_18_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_18_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_19_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_19_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_20_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_20_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_21_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_21_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_22_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_22_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_23_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_23_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_24_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_24_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_25_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_25_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_26_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_26_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_27_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_27_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_28_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_28_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_29_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_29_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_30_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_30_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_31_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_31_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_V_offset", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_0_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_0_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_1_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_1_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_2_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_2_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_3_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_3_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_4_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_4_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_5_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_5_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_6_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_6_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_7_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_7_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_8_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_8_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_9_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_9_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_10_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_10_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_11_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_11_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_12_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_12_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_13_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_13_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_14_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_14_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_15_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_15_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_16_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_16_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_17_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_17_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_18_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_18_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_19_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_19_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_20_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_20_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_21_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_21_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_22_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_22_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_23_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_23_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_24_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_24_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_25_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_25_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_26_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_26_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_27_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_27_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_28_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_28_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_29_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_29_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_30_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_30_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_31_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_31_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_V_offset", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "25", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_transformer_fu_822.call_ret6_relu_ap_fixed_ap_fixed_35_15_5_3_0_sigmoid_config1_s_fu_1061", "Parent" : "4",
		"CDFG" : "relu_ap_fixed_ap_fixed_35_15_5_3_0_sigmoid_config1_s",
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
			{"Name" : "data_16_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_16_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_17_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_17_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_18_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_18_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_19_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_19_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_20_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_20_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_21_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_21_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_22_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_22_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_23_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_23_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_24_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_24_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_25_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_25_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_26_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_26_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_27_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_27_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_28_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_28_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_29_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_29_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_30_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_30_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_31_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_31_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_V_offset", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_0_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_0_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_1_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_1_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_2_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_2_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_3_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_3_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_4_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_4_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_5_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_5_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_6_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_6_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_7_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_7_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_8_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_8_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_9_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_9_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_10_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_10_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_11_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_11_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_12_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_12_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_13_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_13_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_14_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_14_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_15_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_15_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_16_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_16_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_17_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_17_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_18_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_18_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_19_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_19_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_20_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_20_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_21_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_21_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_22_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_22_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_23_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_23_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_24_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_24_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_25_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_25_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_26_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_26_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_27_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_27_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_28_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_28_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_29_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_29_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_30_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_30_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_31_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_31_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_V_offset", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "26", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_transformer_fu_822.call_ret1_relu_ap_fixed_ap_fixed_35_15_5_3_0_sigmoid_config0_s_fu_1197", "Parent" : "4",
		"CDFG" : "relu_ap_fixed_ap_fixed_35_15_5_3_0_sigmoid_config0_s",
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
			{"Name" : "res_0_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_0_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_1_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_1_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_2_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_2_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_3_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_3_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_4_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_4_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_5_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_5_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_6_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_6_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_7_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_7_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_8_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_8_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_9_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_9_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_10_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_10_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_11_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_11_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_12_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_12_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_13_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_13_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_14_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_14_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_15_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_15_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_V_offset", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "27", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_transformer_fu_822.call_ret2_relu_ap_fixed_ap_fixed_35_15_5_3_0_sigmoid_config0_s_fu_1301", "Parent" : "4",
		"CDFG" : "relu_ap_fixed_ap_fixed_35_15_5_3_0_sigmoid_config0_s",
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
			{"Name" : "res_0_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_0_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_1_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_1_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_2_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_2_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_3_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_3_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_4_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_4_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_5_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_5_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_6_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_6_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_7_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_7_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_8_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_8_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_9_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_9_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_10_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_10_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_11_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_11_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_12_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_12_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_13_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_13_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_14_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_14_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_15_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_15_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_V_offset", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "28", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_2_fu_847", "Parent" : "0",
		"CDFG" : "dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_2",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "8",
		"VariableLatency" : "0", "ExactLatency" : "9", "EstimateLatencyMin" : "9", "EstimateLatencyMax" : "9",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "data_V", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "29", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s_fu_853", "Parent" : "0", "Child" : ["30", "31"],
		"CDFG" : "init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "2047", "EstimateLatencyMax" : "2047",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "table_out_V", "Type" : "Memory", "Direction" : "O"}]},
	{"ID" : "30", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s_fu_853.myproject_fpext_32ns_64_2_1_U1023", "Parent" : "29"},
	{"ID" : "31", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s_fu_853.myproject_flog_32ns_32ns_32_9_full_dsp_1_U1024", "Parent" : "29"},
	{"ID" : "32", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_dense_latency_ap_fixed_ap_fixed_mlp_config_0_0_0_0_0_0_fu_858", "Parent" : "0",
		"CDFG" : "dense_latency_ap_fixed_ap_fixed_mlp_config_0_0_0_0_0_0",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "8",
		"VariableLatency" : "0", "ExactLatency" : "9", "EstimateLatencyMin" : "9", "EstimateLatencyMax" : "9",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "data_V", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "33", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_softmax_latency_ap_fixed_ap_fixed_softmax_config0_s_fu_863", "Parent" : "0", "Child" : ["34", "35", "36", "37", "38", "39", "40"],
		"CDFG" : "softmax_latency_ap_fixed_ap_fixed_softmax_config0_s",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "2", "EstimateLatencyMin" : "2", "EstimateLatencyMax" : "2",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "data_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_2_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_3_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_4_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "exp_table3", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "invert_table4", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "34", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_softmax_latency_ap_fixed_ap_fixed_softmax_config0_s_fu_863.exp_table3_U", "Parent" : "33"},
	{"ID" : "35", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_softmax_latency_ap_fixed_ap_fixed_softmax_config0_s_fu_863.invert_table4_U", "Parent" : "33"},
	{"ID" : "36", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_softmax_latency_ap_fixed_ap_fixed_softmax_config0_s_fu_863.myproject_mul_mul_16s_16s_26_1_1_U1028", "Parent" : "33"},
	{"ID" : "37", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_softmax_latency_ap_fixed_ap_fixed_softmax_config0_s_fu_863.myproject_mul_mul_16s_16s_26_1_1_U1029", "Parent" : "33"},
	{"ID" : "38", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_softmax_latency_ap_fixed_ap_fixed_softmax_config0_s_fu_863.myproject_mul_mul_16s_16s_26_1_1_U1030", "Parent" : "33"},
	{"ID" : "39", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_softmax_latency_ap_fixed_ap_fixed_softmax_config0_s_fu_863.myproject_mul_mul_16s_16s_26_1_1_U1031", "Parent" : "33"},
	{"ID" : "40", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_softmax_latency_ap_fixed_ap_fixed_softmax_config0_s_fu_863.myproject_mul_mul_16s_16s_26_1_1_U1032", "Parent" : "33"}]}


set ArgLastReadFirstWriteLatency {
	myproject {
		data_in_V {Type I LastRead 8 FirstWrite -1}
		data_out_V {Type O LastRead -1 FirstWrite 45}
		const_size_in_1 {Type O LastRead -1 FirstWrite 47}
		const_size_out_1 {Type O LastRead -1 FirstWrite 47}
		exp_table13 {Type I LastRead -1 FirstWrite -1}
		invert_table15 {Type I LastRead -1 FirstWrite -1}
		exp_table3 {Type I LastRead -1 FirstWrite -1}
		invert_table4 {Type I LastRead -1 FirstWrite -1}}
	transformer {
		data_1_V_read {Type I LastRead 0 FirstWrite -1}
		data_3_V_read {Type I LastRead 0 FirstWrite -1}
		data_5_V_read {Type I LastRead 0 FirstWrite -1}
		data_7_V_read {Type I LastRead 0 FirstWrite -1}
		data_9_V_read {Type I LastRead 0 FirstWrite -1}
		data_11_V_read {Type I LastRead 0 FirstWrite -1}
		data_13_V_read {Type I LastRead 0 FirstWrite -1}
		data_15_V_read {Type I LastRead 0 FirstWrite -1}
		data_17_V_read {Type I LastRead 0 FirstWrite -1}
		data_19_V_read {Type I LastRead 0 FirstWrite -1}
		data_21_V_read {Type I LastRead 0 FirstWrite -1}
		data_23_V_read {Type I LastRead 0 FirstWrite -1}
		data_25_V_read {Type I LastRead 0 FirstWrite -1}
		data_27_V_read {Type I LastRead 0 FirstWrite -1}
		data_29_V_read {Type I LastRead 0 FirstWrite -1}
		data_31_V_read {Type I LastRead 0 FirstWrite -1}
		res_V {Type O LastRead -1 FirstWrite 12}
		exp_table13 {Type I LastRead -1 FirstWrite -1}
		invert_table15 {Type I LastRead -1 FirstWrite -1}}
	self_attention {
		data_1_V_read {Type I LastRead 1 FirstWrite -1}
		data_3_V_read {Type I LastRead 1 FirstWrite -1}
		data_5_V_read {Type I LastRead 1 FirstWrite -1}
		data_7_V_read {Type I LastRead 1 FirstWrite -1}
		data_9_V_read {Type I LastRead 1 FirstWrite -1}
		data_11_V_read {Type I LastRead 1 FirstWrite -1}
		data_13_V_read {Type I LastRead 1 FirstWrite -1}
		data_15_V_read {Type I LastRead 1 FirstWrite -1}
		data_17_V_read {Type I LastRead 1 FirstWrite -1}
		data_19_V_read {Type I LastRead 1 FirstWrite -1}
		data_21_V_read {Type I LastRead 1 FirstWrite -1}
		data_23_V_read {Type I LastRead 1 FirstWrite -1}
		data_25_V_read {Type I LastRead 1 FirstWrite -1}
		data_27_V_read {Type I LastRead 1 FirstWrite -1}
		data_29_V_read {Type I LastRead 1 FirstWrite -1}
		data_31_V_read {Type I LastRead 1 FirstWrite -1}
		exp_table13 {Type I LastRead -1 FirstWrite -1}
		invert_table15 {Type I LastRead -1 FirstWrite -1}}
	dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1 {
		p_read1 {Type I LastRead 0 FirstWrite -1}
		p_read3 {Type I LastRead 0 FirstWrite -1}
		p_read5 {Type I LastRead 0 FirstWrite -1}
		p_read7 {Type I LastRead 0 FirstWrite -1}
		p_read9 {Type I LastRead 0 FirstWrite -1}
		p_read11 {Type I LastRead 0 FirstWrite -1}
		p_read13 {Type I LastRead 0 FirstWrite -1}
		p_read15 {Type I LastRead 0 FirstWrite -1}
		p_read17 {Type I LastRead 0 FirstWrite -1}
		p_read19 {Type I LastRead 0 FirstWrite -1}
		p_read21 {Type I LastRead 0 FirstWrite -1}
		p_read23 {Type I LastRead 0 FirstWrite -1}
		p_read25 {Type I LastRead 0 FirstWrite -1}
		p_read27 {Type I LastRead 0 FirstWrite -1}
		p_read29 {Type I LastRead 0 FirstWrite -1}
		p_read31 {Type I LastRead 0 FirstWrite -1}
		data_V_offset {Type I LastRead 0 FirstWrite -1}
		p_read32 {Type I LastRead 0 FirstWrite -1}
		p_read33 {Type I LastRead 0 FirstWrite -1}
		p_read34 {Type I LastRead 0 FirstWrite -1}
		p_read35 {Type I LastRead 0 FirstWrite -1}
		p_read36 {Type I LastRead 0 FirstWrite -1}
		p_read37 {Type I LastRead 0 FirstWrite -1}
		p_read38 {Type I LastRead 0 FirstWrite -1}
		p_read39 {Type I LastRead 0 FirstWrite -1}
		p_read40 {Type I LastRead 0 FirstWrite -1}
		p_read41 {Type I LastRead 0 FirstWrite -1}
		p_read42 {Type I LastRead 0 FirstWrite -1}
		p_read43 {Type I LastRead 0 FirstWrite -1}
		p_read44 {Type I LastRead 0 FirstWrite -1}
		p_read45 {Type I LastRead 0 FirstWrite -1}
		p_read46 {Type I LastRead 0 FirstWrite -1}
		p_read47 {Type I LastRead 0 FirstWrite -1}
		p_read48 {Type I LastRead 0 FirstWrite -1}
		p_read49 {Type I LastRead 0 FirstWrite -1}
		p_read50 {Type I LastRead 0 FirstWrite -1}
		p_read51 {Type I LastRead 0 FirstWrite -1}
		p_read52 {Type I LastRead 0 FirstWrite -1}
		p_read53 {Type I LastRead 0 FirstWrite -1}
		p_read54 {Type I LastRead 0 FirstWrite -1}
		p_read55 {Type I LastRead 0 FirstWrite -1}
		p_read56 {Type I LastRead 0 FirstWrite -1}
		p_read57 {Type I LastRead 0 FirstWrite -1}
		p_read58 {Type I LastRead 0 FirstWrite -1}
		p_read59 {Type I LastRead 0 FirstWrite -1}
		p_read60 {Type I LastRead 0 FirstWrite -1}
		p_read61 {Type I LastRead 0 FirstWrite -1}
		p_read62 {Type I LastRead 0 FirstWrite -1}
		p_read63 {Type I LastRead 0 FirstWrite -1}
		p_read64 {Type I LastRead 0 FirstWrite -1}
		p_read65 {Type I LastRead 0 FirstWrite -1}
		p_read66 {Type I LastRead 0 FirstWrite -1}
		p_read67 {Type I LastRead 0 FirstWrite -1}
		p_read68 {Type I LastRead 0 FirstWrite -1}
		p_read69 {Type I LastRead 0 FirstWrite -1}
		p_read70 {Type I LastRead 0 FirstWrite -1}
		p_read71 {Type I LastRead 0 FirstWrite -1}
		p_read72 {Type I LastRead 0 FirstWrite -1}
		p_read73 {Type I LastRead 0 FirstWrite -1}
		p_read74 {Type I LastRead 0 FirstWrite -1}
		p_read75 {Type I LastRead 0 FirstWrite -1}
		p_read76 {Type I LastRead 0 FirstWrite -1}
		p_read77 {Type I LastRead 0 FirstWrite -1}
		p_read78 {Type I LastRead 0 FirstWrite -1}
		p_read79 {Type I LastRead 0 FirstWrite -1}
		p_read80 {Type I LastRead 0 FirstWrite -1}
		p_read81 {Type I LastRead 0 FirstWrite -1}
		p_read82 {Type I LastRead 0 FirstWrite -1}
		p_read83 {Type I LastRead 0 FirstWrite -1}
		p_read84 {Type I LastRead 0 FirstWrite -1}
		p_read85 {Type I LastRead 0 FirstWrite -1}
		p_read86 {Type I LastRead 0 FirstWrite -1}
		p_read87 {Type I LastRead 0 FirstWrite -1}
		p_read88 {Type I LastRead 0 FirstWrite -1}
		p_read89 {Type I LastRead 0 FirstWrite -1}
		p_read90 {Type I LastRead 0 FirstWrite -1}
		p_read91 {Type I LastRead 0 FirstWrite -1}
		p_read92 {Type I LastRead 0 FirstWrite -1}
		p_read93 {Type I LastRead 0 FirstWrite -1}
		p_read94 {Type I LastRead 0 FirstWrite -1}
		p_read95 {Type I LastRead 0 FirstWrite -1}
		p_read96 {Type I LastRead 0 FirstWrite -1}
		p_read97 {Type I LastRead 0 FirstWrite -1}
		p_read98 {Type I LastRead 0 FirstWrite -1}
		p_read99 {Type I LastRead 0 FirstWrite -1}
		p_read100 {Type I LastRead 0 FirstWrite -1}
		p_read101 {Type I LastRead 0 FirstWrite -1}
		p_read102 {Type I LastRead 0 FirstWrite -1}
		p_read103 {Type I LastRead 0 FirstWrite -1}
		p_read104 {Type I LastRead 0 FirstWrite -1}
		p_read105 {Type I LastRead 0 FirstWrite -1}
		p_read106 {Type I LastRead 0 FirstWrite -1}
		p_read107 {Type I LastRead 0 FirstWrite -1}
		p_read108 {Type I LastRead 0 FirstWrite -1}
		p_read109 {Type I LastRead 0 FirstWrite -1}
		p_read110 {Type I LastRead 0 FirstWrite -1}
		p_read111 {Type I LastRead 0 FirstWrite -1}
		p_read112 {Type I LastRead 0 FirstWrite -1}
		p_read113 {Type I LastRead 0 FirstWrite -1}
		p_read114 {Type I LastRead 0 FirstWrite -1}
		p_read115 {Type I LastRead 0 FirstWrite -1}
		p_read116 {Type I LastRead 0 FirstWrite -1}
		p_read117 {Type I LastRead 0 FirstWrite -1}
		p_read118 {Type I LastRead 0 FirstWrite -1}
		p_read119 {Type I LastRead 0 FirstWrite -1}
		p_read120 {Type I LastRead 0 FirstWrite -1}
		p_read121 {Type I LastRead 0 FirstWrite -1}
		p_read122 {Type I LastRead 0 FirstWrite -1}
		p_read123 {Type I LastRead 0 FirstWrite -1}
		p_read124 {Type I LastRead 0 FirstWrite -1}
		p_read125 {Type I LastRead 0 FirstWrite -1}
		p_read126 {Type I LastRead 0 FirstWrite -1}
		p_read127 {Type I LastRead 0 FirstWrite -1}
		res_V_offset {Type I LastRead 0 FirstWrite -1}
		p_read318 {Type I LastRead 0 FirstWrite -1}
		p_read319 {Type I LastRead 0 FirstWrite -1}
		p_read320 {Type I LastRead 0 FirstWrite -1}
		p_read321 {Type I LastRead 0 FirstWrite -1}
		p_read322 {Type I LastRead 0 FirstWrite -1}
		p_read323 {Type I LastRead 0 FirstWrite -1}
		p_read324 {Type I LastRead 0 FirstWrite -1}
		p_read325 {Type I LastRead 0 FirstWrite -1}
		p_read326 {Type I LastRead 0 FirstWrite -1}
		p_read327 {Type I LastRead 0 FirstWrite -1}
		p_read328 {Type I LastRead 0 FirstWrite -1}
		p_read329 {Type I LastRead 0 FirstWrite -1}
		p_read330 {Type I LastRead 0 FirstWrite -1}
		p_read331 {Type I LastRead 0 FirstWrite -1}
		p_read332 {Type I LastRead 0 FirstWrite -1}
		p_read333 {Type I LastRead 0 FirstWrite -1}
		p_read334 {Type I LastRead 0 FirstWrite -1}
		p_read335 {Type I LastRead 0 FirstWrite -1}
		p_read336 {Type I LastRead 0 FirstWrite -1}
		p_read337 {Type I LastRead 0 FirstWrite -1}
		p_read338 {Type I LastRead 0 FirstWrite -1}
		p_read339 {Type I LastRead 0 FirstWrite -1}
		p_read340 {Type I LastRead 0 FirstWrite -1}
		p_read341 {Type I LastRead 0 FirstWrite -1}
		p_read342 {Type I LastRead 0 FirstWrite -1}
		p_read343 {Type I LastRead 0 FirstWrite -1}
		p_read344 {Type I LastRead 0 FirstWrite -1}
		p_read345 {Type I LastRead 0 FirstWrite -1}
		p_read346 {Type I LastRead 0 FirstWrite -1}
		p_read347 {Type I LastRead 0 FirstWrite -1}
		p_read348 {Type I LastRead 0 FirstWrite -1}
		p_read349 {Type I LastRead 0 FirstWrite -1}
		p_read350 {Type I LastRead 0 FirstWrite -1}
		p_read351 {Type I LastRead 0 FirstWrite -1}
		p_read352 {Type I LastRead 0 FirstWrite -1}
		p_read353 {Type I LastRead 0 FirstWrite -1}
		p_read354 {Type I LastRead 0 FirstWrite -1}
		p_read355 {Type I LastRead 0 FirstWrite -1}
		p_read356 {Type I LastRead 0 FirstWrite -1}
		p_read357 {Type I LastRead 0 FirstWrite -1}
		p_read358 {Type I LastRead 0 FirstWrite -1}
		p_read359 {Type I LastRead 0 FirstWrite -1}
		p_read360 {Type I LastRead 0 FirstWrite -1}
		p_read361 {Type I LastRead 0 FirstWrite -1}
		p_read362 {Type I LastRead 0 FirstWrite -1}
		p_read363 {Type I LastRead 0 FirstWrite -1}
		p_read364 {Type I LastRead 0 FirstWrite -1}
		p_read365 {Type I LastRead 0 FirstWrite -1}}
	dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1 {
		p_read {Type I LastRead 0 FirstWrite -1}
		p_read1 {Type I LastRead 0 FirstWrite -1}
		p_read2 {Type I LastRead 0 FirstWrite -1}
		p_read3 {Type I LastRead 0 FirstWrite -1}
		p_read4 {Type I LastRead 0 FirstWrite -1}
		p_read5 {Type I LastRead 0 FirstWrite -1}
		p_read6 {Type I LastRead 0 FirstWrite -1}
		p_read7 {Type I LastRead 0 FirstWrite -1}
		p_read8 {Type I LastRead 0 FirstWrite -1}
		p_read9 {Type I LastRead 0 FirstWrite -1}
		p_read10 {Type I LastRead 0 FirstWrite -1}
		p_read11 {Type I LastRead 0 FirstWrite -1}
		p_read12 {Type I LastRead 0 FirstWrite -1}
		p_read13 {Type I LastRead 0 FirstWrite -1}
		p_read14 {Type I LastRead 0 FirstWrite -1}
		p_read15 {Type I LastRead 0 FirstWrite -1}
		p_read16 {Type I LastRead 0 FirstWrite -1}
		p_read17 {Type I LastRead 0 FirstWrite -1}
		p_read18 {Type I LastRead 0 FirstWrite -1}
		p_read19 {Type I LastRead 0 FirstWrite -1}
		p_read20 {Type I LastRead 0 FirstWrite -1}
		p_read21 {Type I LastRead 0 FirstWrite -1}
		p_read22 {Type I LastRead 0 FirstWrite -1}
		p_read23 {Type I LastRead 0 FirstWrite -1}
		p_read24 {Type I LastRead 0 FirstWrite -1}
		p_read25 {Type I LastRead 0 FirstWrite -1}
		p_read26 {Type I LastRead 0 FirstWrite -1}
		p_read27 {Type I LastRead 0 FirstWrite -1}
		p_read28 {Type I LastRead 0 FirstWrite -1}
		p_read29 {Type I LastRead 0 FirstWrite -1}
		p_read30 {Type I LastRead 0 FirstWrite -1}
		p_read31 {Type I LastRead 0 FirstWrite -1}
		data_V_offset {Type I LastRead 0 FirstWrite -1}
		p_read32 {Type I LastRead 0 FirstWrite -1}
		p_read33 {Type I LastRead 0 FirstWrite -1}
		p_read34 {Type I LastRead 0 FirstWrite -1}
		p_read35 {Type I LastRead 0 FirstWrite -1}
		p_read36 {Type I LastRead 0 FirstWrite -1}
		p_read37 {Type I LastRead 0 FirstWrite -1}
		p_read38 {Type I LastRead 0 FirstWrite -1}
		p_read39 {Type I LastRead 0 FirstWrite -1}
		p_read40 {Type I LastRead 0 FirstWrite -1}
		p_read41 {Type I LastRead 0 FirstWrite -1}
		p_read42 {Type I LastRead 0 FirstWrite -1}
		p_read43 {Type I LastRead 0 FirstWrite -1}
		p_read44 {Type I LastRead 0 FirstWrite -1}
		p_read45 {Type I LastRead 0 FirstWrite -1}
		p_read46 {Type I LastRead 0 FirstWrite -1}
		p_read47 {Type I LastRead 0 FirstWrite -1}
		p_read48 {Type I LastRead 0 FirstWrite -1}
		p_read49 {Type I LastRead 0 FirstWrite -1}
		p_read50 {Type I LastRead 0 FirstWrite -1}
		p_read51 {Type I LastRead 0 FirstWrite -1}
		p_read52 {Type I LastRead 0 FirstWrite -1}
		p_read53 {Type I LastRead 0 FirstWrite -1}
		p_read54 {Type I LastRead 0 FirstWrite -1}
		p_read55 {Type I LastRead 0 FirstWrite -1}
		p_read56 {Type I LastRead 0 FirstWrite -1}
		p_read57 {Type I LastRead 0 FirstWrite -1}
		p_read58 {Type I LastRead 0 FirstWrite -1}
		p_read59 {Type I LastRead 0 FirstWrite -1}
		p_read60 {Type I LastRead 0 FirstWrite -1}
		p_read61 {Type I LastRead 0 FirstWrite -1}
		p_read62 {Type I LastRead 0 FirstWrite -1}
		p_read63 {Type I LastRead 0 FirstWrite -1}
		res_V_offset {Type I LastRead 0 FirstWrite -1}}
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
		res_V_offset {Type I LastRead 0 FirstWrite -1}}
	matmul_ap_fixed_ap_fixed_2ul_8ul_8ul_2ul_s {
		a_0_0_V_read {Type I LastRead 0 FirstWrite -1}
		a_0_1_V_read {Type I LastRead 0 FirstWrite -1}
		a_1_0_V_read {Type I LastRead 0 FirstWrite -1}
		a_1_1_V_read {Type I LastRead 0 FirstWrite -1}
		a_2_0_V_read {Type I LastRead 0 FirstWrite -1}
		a_2_1_V_read {Type I LastRead 0 FirstWrite -1}
		a_3_0_V_read {Type I LastRead 0 FirstWrite -1}
		a_3_1_V_read {Type I LastRead 0 FirstWrite -1}
		a_4_0_V_read {Type I LastRead 0 FirstWrite -1}
		a_4_1_V_read {Type I LastRead 0 FirstWrite -1}
		a_5_0_V_read {Type I LastRead 0 FirstWrite -1}
		a_5_1_V_read {Type I LastRead 0 FirstWrite -1}
		a_6_0_V_read {Type I LastRead 0 FirstWrite -1}
		a_6_1_V_read {Type I LastRead 0 FirstWrite -1}
		a_7_0_V_read {Type I LastRead 0 FirstWrite -1}
		a_7_1_V_read {Type I LastRead 0 FirstWrite -1}
		a_8_0_V_read {Type I LastRead 0 FirstWrite -1}
		a_8_1_V_read {Type I LastRead 0 FirstWrite -1}
		a_9_0_V_read {Type I LastRead 0 FirstWrite -1}
		a_9_1_V_read {Type I LastRead 0 FirstWrite -1}
		a_10_0_V_read {Type I LastRead 0 FirstWrite -1}
		a_10_1_V_read {Type I LastRead 0 FirstWrite -1}
		a_11_0_V_read {Type I LastRead 0 FirstWrite -1}
		a_11_1_V_read {Type I LastRead 0 FirstWrite -1}
		a_12_0_V_read {Type I LastRead 0 FirstWrite -1}
		a_12_1_V_read {Type I LastRead 0 FirstWrite -1}
		a_13_0_V_read {Type I LastRead 0 FirstWrite -1}
		a_13_1_V_read {Type I LastRead 0 FirstWrite -1}
		a_14_0_V_read {Type I LastRead 0 FirstWrite -1}
		a_14_1_V_read {Type I LastRead 0 FirstWrite -1}
		a_15_0_V_read {Type I LastRead 0 FirstWrite -1}
		a_15_1_V_read {Type I LastRead 0 FirstWrite -1}
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
		res_0_0_V_read_2 {Type I LastRead 0 FirstWrite -1}
		res_0_0_V_read {Type I LastRead 0 FirstWrite -1}
		res_0_1_V_read_2 {Type I LastRead 0 FirstWrite -1}
		res_0_1_V_read {Type I LastRead 0 FirstWrite -1}
		res_1_0_V_read_2 {Type I LastRead 0 FirstWrite -1}
		res_1_0_V_read {Type I LastRead 0 FirstWrite -1}
		res_1_1_V_read_2 {Type I LastRead 0 FirstWrite -1}
		res_1_1_V_read {Type I LastRead 0 FirstWrite -1}
		res_2_0_V_read_2 {Type I LastRead 0 FirstWrite -1}
		res_2_0_V_read {Type I LastRead 0 FirstWrite -1}
		res_2_1_V_read_2 {Type I LastRead 0 FirstWrite -1}
		res_2_1_V_read {Type I LastRead 0 FirstWrite -1}
		res_3_0_V_read_2 {Type I LastRead 0 FirstWrite -1}
		res_3_0_V_read {Type I LastRead 0 FirstWrite -1}
		res_3_1_V_read_2 {Type I LastRead 0 FirstWrite -1}
		res_3_1_V_read {Type I LastRead 0 FirstWrite -1}
		res_V_offset {Type I LastRead 0 FirstWrite -1}}
	p_fill_n_a_ap_fixed_unsigned_long_double_s {}
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
		data_t_V_offset {Type I LastRead 0 FirstWrite -1}}
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
		data_t_V_offset {Type I LastRead 0 FirstWrite -1}}
	join_equally_ap_fixed_35_15_5_3_0_2ul_48ul_s {
		data_0_0_V_read {Type I LastRead 0 FirstWrite -1}
		data_0_1_V_read {Type I LastRead 0 FirstWrite -1}
		data_1_0_V_read {Type I LastRead 1 FirstWrite -1}
		data_1_1_V_read {Type I LastRead 1 FirstWrite -1}
		data_2_0_V_read {Type I LastRead 2 FirstWrite -1}
		data_2_1_V_read {Type I LastRead 2 FirstWrite -1}
		data_3_0_V_read {Type I LastRead 3 FirstWrite -1}
		data_3_1_V_read {Type I LastRead 3 FirstWrite -1}
		data_4_0_V_read {Type I LastRead 4 FirstWrite -1}
		data_4_1_V_read {Type I LastRead 4 FirstWrite -1}
		data_5_0_V_read {Type I LastRead 5 FirstWrite -1}
		data_5_1_V_read {Type I LastRead 5 FirstWrite -1}
		data_6_0_V_read {Type I LastRead 6 FirstWrite -1}
		data_6_1_V_read {Type I LastRead 6 FirstWrite -1}
		data_7_0_V_read {Type I LastRead 7 FirstWrite -1}
		data_7_1_V_read {Type I LastRead 7 FirstWrite -1}
		data_8_0_V_read {Type I LastRead 8 FirstWrite -1}
		data_8_1_V_read {Type I LastRead 8 FirstWrite -1}
		data_9_0_V_read {Type I LastRead 9 FirstWrite -1}
		data_9_1_V_read {Type I LastRead 9 FirstWrite -1}
		data_10_0_V_read {Type I LastRead 10 FirstWrite -1}
		data_10_1_V_read {Type I LastRead 10 FirstWrite -1}
		data_11_0_V_read {Type I LastRead 11 FirstWrite -1}
		data_11_1_V_read {Type I LastRead 11 FirstWrite -1}
		data_12_0_V_read {Type I LastRead 12 FirstWrite -1}
		data_12_1_V_read {Type I LastRead 12 FirstWrite -1}
		data_13_0_V_read {Type I LastRead 13 FirstWrite -1}
		data_13_1_V_read {Type I LastRead 13 FirstWrite -1}
		data_14_0_V_read {Type I LastRead 14 FirstWrite -1}
		data_14_1_V_read {Type I LastRead 14 FirstWrite -1}
		data_15_0_V_read {Type I LastRead 15 FirstWrite -1}
		data_15_1_V_read {Type I LastRead 15 FirstWrite -1}
		data_16_0_V_read {Type I LastRead 16 FirstWrite -1}
		data_16_1_V_read {Type I LastRead 16 FirstWrite -1}
		data_17_0_V_read {Type I LastRead 17 FirstWrite -1}
		data_17_1_V_read {Type I LastRead 17 FirstWrite -1}
		data_18_0_V_read {Type I LastRead 18 FirstWrite -1}
		data_18_1_V_read {Type I LastRead 18 FirstWrite -1}
		data_19_0_V_read {Type I LastRead 19 FirstWrite -1}
		data_19_1_V_read {Type I LastRead 19 FirstWrite -1}
		data_20_0_V_read {Type I LastRead 20 FirstWrite -1}
		data_20_1_V_read {Type I LastRead 20 FirstWrite -1}
		data_21_0_V_read {Type I LastRead 21 FirstWrite -1}
		data_21_1_V_read {Type I LastRead 21 FirstWrite -1}
		data_22_0_V_read {Type I LastRead 22 FirstWrite -1}
		data_22_1_V_read {Type I LastRead 22 FirstWrite -1}
		data_23_0_V_read {Type I LastRead 23 FirstWrite -1}
		data_23_1_V_read {Type I LastRead 23 FirstWrite -1}
		data_24_0_V_read {Type I LastRead 24 FirstWrite -1}
		data_24_1_V_read {Type I LastRead 24 FirstWrite -1}
		data_25_0_V_read {Type I LastRead 25 FirstWrite -1}
		data_25_1_V_read {Type I LastRead 25 FirstWrite -1}
		data_26_0_V_read {Type I LastRead 26 FirstWrite -1}
		data_26_1_V_read {Type I LastRead 26 FirstWrite -1}
		data_27_0_V_read {Type I LastRead 27 FirstWrite -1}
		data_27_1_V_read {Type I LastRead 27 FirstWrite -1}
		data_28_0_V_read {Type I LastRead 28 FirstWrite -1}
		data_28_1_V_read {Type I LastRead 28 FirstWrite -1}
		data_29_0_V_read {Type I LastRead 29 FirstWrite -1}
		data_29_1_V_read {Type I LastRead 29 FirstWrite -1}
		data_30_0_V_read {Type I LastRead 30 FirstWrite -1}
		data_30_1_V_read {Type I LastRead 30 FirstWrite -1}
		data_31_0_V_read {Type I LastRead 31 FirstWrite -1}
		data_31_1_V_read {Type I LastRead 31 FirstWrite -1}
		data_32_0_V_read {Type I LastRead 32 FirstWrite -1}
		data_32_1_V_read {Type I LastRead 32 FirstWrite -1}
		data_33_0_V_read {Type I LastRead 33 FirstWrite -1}
		data_33_1_V_read {Type I LastRead 33 FirstWrite -1}
		data_34_0_V_read {Type I LastRead 34 FirstWrite -1}
		data_34_1_V_read {Type I LastRead 34 FirstWrite -1}
		data_35_0_V_read {Type I LastRead 35 FirstWrite -1}
		data_35_1_V_read {Type I LastRead 35 FirstWrite -1}
		data_36_0_V_read {Type I LastRead 36 FirstWrite -1}
		data_36_1_V_read {Type I LastRead 36 FirstWrite -1}
		data_37_0_V_read {Type I LastRead 37 FirstWrite -1}
		data_37_1_V_read {Type I LastRead 37 FirstWrite -1}
		data_38_0_V_read {Type I LastRead 38 FirstWrite -1}
		data_38_1_V_read {Type I LastRead 38 FirstWrite -1}
		data_39_0_V_read {Type I LastRead 39 FirstWrite -1}
		data_39_1_V_read {Type I LastRead 39 FirstWrite -1}
		data_40_0_V_read {Type I LastRead 40 FirstWrite -1}
		data_40_1_V_read {Type I LastRead 40 FirstWrite -1}
		data_41_0_V_read {Type I LastRead 41 FirstWrite -1}
		data_41_1_V_read {Type I LastRead 41 FirstWrite -1}
		data_42_0_V_read {Type I LastRead 42 FirstWrite -1}
		data_42_1_V_read {Type I LastRead 42 FirstWrite -1}
		data_43_0_V_read {Type I LastRead 43 FirstWrite -1}
		data_43_1_V_read {Type I LastRead 43 FirstWrite -1}
		data_44_0_V_read {Type I LastRead 44 FirstWrite -1}
		data_44_1_V_read {Type I LastRead 44 FirstWrite -1}
		data_45_0_V_read {Type I LastRead 45 FirstWrite -1}
		data_45_1_V_read {Type I LastRead 45 FirstWrite -1}
		data_46_0_V_read {Type I LastRead 46 FirstWrite -1}
		data_46_1_V_read {Type I LastRead 46 FirstWrite -1}
		data_47_0_V_read {Type I LastRead 47 FirstWrite -1}
		data_47_1_V_read {Type I LastRead 47 FirstWrite -1}
		res_V {Type O LastRead -1 FirstWrite 0}}
	softmax_latency_ap_fixed_ap_fixed_sa_softmax_config0_s {
		data_V {Type I LastRead 1 FirstWrite -1}
		data_V_offset {Type I LastRead 0 FirstWrite -1}
		data_V_offset1 {Type I LastRead 0 FirstWrite -1}
		res_V {Type O LastRead -1 FirstWrite 3}
		res_V_offset {Type I LastRead 0 FirstWrite -1}
		res_V_offset3 {Type I LastRead 0 FirstWrite -1}
		exp_table13 {Type I LastRead -1 FirstWrite -1}
		invert_table15 {Type I LastRead -1 FirstWrite -1}}
	dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s {
		p_read {Type I LastRead 0 FirstWrite -1}
		p_read1 {Type I LastRead 0 FirstWrite -1}
		p_read2 {Type I LastRead 0 FirstWrite -1}
		p_read3 {Type I LastRead 0 FirstWrite -1}
		p_read4 {Type I LastRead 0 FirstWrite -1}
		p_read5 {Type I LastRead 0 FirstWrite -1}
		p_read6 {Type I LastRead 0 FirstWrite -1}
		p_read7 {Type I LastRead 0 FirstWrite -1}
		p_read8 {Type I LastRead 0 FirstWrite -1}
		p_read9 {Type I LastRead 0 FirstWrite -1}
		p_read10 {Type I LastRead 0 FirstWrite -1}
		p_read11 {Type I LastRead 0 FirstWrite -1}
		p_read12 {Type I LastRead 0 FirstWrite -1}
		p_read13 {Type I LastRead 0 FirstWrite -1}
		p_read14 {Type I LastRead 0 FirstWrite -1}
		p_read15 {Type I LastRead 0 FirstWrite -1}
		p_read16 {Type I LastRead 0 FirstWrite -1}
		p_read17 {Type I LastRead 0 FirstWrite -1}
		p_read18 {Type I LastRead 0 FirstWrite -1}
		p_read19 {Type I LastRead 0 FirstWrite -1}
		p_read20 {Type I LastRead 0 FirstWrite -1}
		p_read21 {Type I LastRead 0 FirstWrite -1}
		p_read22 {Type I LastRead 0 FirstWrite -1}
		p_read23 {Type I LastRead 0 FirstWrite -1}
		p_read24 {Type I LastRead 0 FirstWrite -1}
		p_read25 {Type I LastRead 0 FirstWrite -1}
		p_read26 {Type I LastRead 0 FirstWrite -1}
		p_read27 {Type I LastRead 0 FirstWrite -1}
		p_read28 {Type I LastRead 0 FirstWrite -1}
		p_read29 {Type I LastRead 0 FirstWrite -1}
		p_read30 {Type I LastRead 0 FirstWrite -1}
		p_read31 {Type I LastRead 0 FirstWrite -1}
		data_V_offset {Type I LastRead 0 FirstWrite -1}
		p_read32 {Type I LastRead 0 FirstWrite -1}
		p_read33 {Type I LastRead 0 FirstWrite -1}
		p_read34 {Type I LastRead 0 FirstWrite -1}
		p_read35 {Type I LastRead 0 FirstWrite -1}
		p_read36 {Type I LastRead 0 FirstWrite -1}
		p_read37 {Type I LastRead 0 FirstWrite -1}
		p_read38 {Type I LastRead 0 FirstWrite -1}
		p_read39 {Type I LastRead 0 FirstWrite -1}
		p_read40 {Type I LastRead 0 FirstWrite -1}
		p_read41 {Type I LastRead 0 FirstWrite -1}
		p_read42 {Type I LastRead 0 FirstWrite -1}
		p_read43 {Type I LastRead 0 FirstWrite -1}
		p_read44 {Type I LastRead 0 FirstWrite -1}
		p_read45 {Type I LastRead 0 FirstWrite -1}
		p_read46 {Type I LastRead 0 FirstWrite -1}
		p_read47 {Type I LastRead 0 FirstWrite -1}
		p_read48 {Type I LastRead 0 FirstWrite -1}
		p_read49 {Type I LastRead 0 FirstWrite -1}
		p_read50 {Type I LastRead 0 FirstWrite -1}
		p_read51 {Type I LastRead 0 FirstWrite -1}
		p_read52 {Type I LastRead 0 FirstWrite -1}
		p_read53 {Type I LastRead 0 FirstWrite -1}
		p_read54 {Type I LastRead 0 FirstWrite -1}
		p_read55 {Type I LastRead 0 FirstWrite -1}
		p_read56 {Type I LastRead 0 FirstWrite -1}
		p_read57 {Type I LastRead 0 FirstWrite -1}
		p_read58 {Type I LastRead 0 FirstWrite -1}
		p_read59 {Type I LastRead 0 FirstWrite -1}
		p_read60 {Type I LastRead 0 FirstWrite -1}
		p_read61 {Type I LastRead 0 FirstWrite -1}
		p_read62 {Type I LastRead 0 FirstWrite -1}
		p_read63 {Type I LastRead 0 FirstWrite -1}
		p_read64 {Type I LastRead 0 FirstWrite -1}
		p_read65 {Type I LastRead 0 FirstWrite -1}
		p_read66 {Type I LastRead 0 FirstWrite -1}
		p_read67 {Type I LastRead 0 FirstWrite -1}
		p_read68 {Type I LastRead 0 FirstWrite -1}
		p_read69 {Type I LastRead 0 FirstWrite -1}
		p_read70 {Type I LastRead 0 FirstWrite -1}
		p_read71 {Type I LastRead 0 FirstWrite -1}
		p_read72 {Type I LastRead 0 FirstWrite -1}
		p_read73 {Type I LastRead 0 FirstWrite -1}
		p_read74 {Type I LastRead 0 FirstWrite -1}
		p_read75 {Type I LastRead 0 FirstWrite -1}
		p_read76 {Type I LastRead 0 FirstWrite -1}
		p_read77 {Type I LastRead 0 FirstWrite -1}
		p_read78 {Type I LastRead 0 FirstWrite -1}
		p_read79 {Type I LastRead 0 FirstWrite -1}
		p_read80 {Type I LastRead 0 FirstWrite -1}
		p_read81 {Type I LastRead 0 FirstWrite -1}
		p_read82 {Type I LastRead 0 FirstWrite -1}
		p_read83 {Type I LastRead 0 FirstWrite -1}
		p_read84 {Type I LastRead 0 FirstWrite -1}
		p_read85 {Type I LastRead 0 FirstWrite -1}
		p_read86 {Type I LastRead 0 FirstWrite -1}
		p_read87 {Type I LastRead 0 FirstWrite -1}
		p_read88 {Type I LastRead 0 FirstWrite -1}
		p_read89 {Type I LastRead 0 FirstWrite -1}
		p_read90 {Type I LastRead 0 FirstWrite -1}
		p_read91 {Type I LastRead 0 FirstWrite -1}
		p_read92 {Type I LastRead 0 FirstWrite -1}
		p_read93 {Type I LastRead 0 FirstWrite -1}
		p_read94 {Type I LastRead 0 FirstWrite -1}
		p_read95 {Type I LastRead 0 FirstWrite -1}
		res_V_offset {Type I LastRead 0 FirstWrite -1}}
	dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0 {
		p_read {Type I LastRead 0 FirstWrite -1}
		p_read1 {Type I LastRead 0 FirstWrite -1}
		p_read2 {Type I LastRead 0 FirstWrite -1}
		p_read3 {Type I LastRead 0 FirstWrite -1}
		p_read4 {Type I LastRead 0 FirstWrite -1}
		p_read5 {Type I LastRead 0 FirstWrite -1}
		p_read6 {Type I LastRead 0 FirstWrite -1}
		p_read7 {Type I LastRead 0 FirstWrite -1}
		p_read8 {Type I LastRead 0 FirstWrite -1}
		p_read9 {Type I LastRead 0 FirstWrite -1}
		p_read10 {Type I LastRead 0 FirstWrite -1}
		p_read11 {Type I LastRead 0 FirstWrite -1}
		p_read12 {Type I LastRead 0 FirstWrite -1}
		p_read13 {Type I LastRead 0 FirstWrite -1}
		p_read14 {Type I LastRead 0 FirstWrite -1}
		p_read15 {Type I LastRead 0 FirstWrite -1}
		p_read16 {Type I LastRead 0 FirstWrite -1}
		p_read17 {Type I LastRead 0 FirstWrite -1}
		p_read18 {Type I LastRead 0 FirstWrite -1}
		p_read19 {Type I LastRead 0 FirstWrite -1}
		p_read20 {Type I LastRead 0 FirstWrite -1}
		p_read21 {Type I LastRead 0 FirstWrite -1}
		p_read22 {Type I LastRead 0 FirstWrite -1}
		p_read23 {Type I LastRead 0 FirstWrite -1}
		p_read24 {Type I LastRead 0 FirstWrite -1}
		p_read25 {Type I LastRead 0 FirstWrite -1}
		p_read26 {Type I LastRead 0 FirstWrite -1}
		p_read27 {Type I LastRead 0 FirstWrite -1}
		p_read28 {Type I LastRead 0 FirstWrite -1}
		p_read29 {Type I LastRead 0 FirstWrite -1}
		p_read30 {Type I LastRead 0 FirstWrite -1}
		p_read31 {Type I LastRead 0 FirstWrite -1}
		p_read32 {Type I LastRead 0 FirstWrite -1}
		p_read33 {Type I LastRead 0 FirstWrite -1}
		p_read34 {Type I LastRead 0 FirstWrite -1}
		p_read35 {Type I LastRead 0 FirstWrite -1}
		p_read36 {Type I LastRead 0 FirstWrite -1}
		p_read37 {Type I LastRead 0 FirstWrite -1}
		p_read38 {Type I LastRead 0 FirstWrite -1}
		p_read39 {Type I LastRead 0 FirstWrite -1}
		p_read40 {Type I LastRead 0 FirstWrite -1}
		p_read41 {Type I LastRead 0 FirstWrite -1}
		p_read42 {Type I LastRead 0 FirstWrite -1}
		p_read43 {Type I LastRead 0 FirstWrite -1}
		p_read44 {Type I LastRead 0 FirstWrite -1}
		p_read45 {Type I LastRead 0 FirstWrite -1}
		p_read46 {Type I LastRead 0 FirstWrite -1}
		p_read47 {Type I LastRead 0 FirstWrite -1}
		p_read48 {Type I LastRead 0 FirstWrite -1}
		p_read49 {Type I LastRead 0 FirstWrite -1}
		p_read50 {Type I LastRead 0 FirstWrite -1}
		p_read51 {Type I LastRead 0 FirstWrite -1}
		p_read52 {Type I LastRead 0 FirstWrite -1}
		p_read53 {Type I LastRead 0 FirstWrite -1}
		p_read54 {Type I LastRead 0 FirstWrite -1}
		p_read55 {Type I LastRead 0 FirstWrite -1}
		p_read56 {Type I LastRead 0 FirstWrite -1}
		p_read57 {Type I LastRead 0 FirstWrite -1}
		p_read58 {Type I LastRead 0 FirstWrite -1}
		p_read59 {Type I LastRead 0 FirstWrite -1}
		p_read60 {Type I LastRead 0 FirstWrite -1}
		p_read61 {Type I LastRead 0 FirstWrite -1}
		p_read62 {Type I LastRead 0 FirstWrite -1}
		p_read63 {Type I LastRead 0 FirstWrite -1}
		data_V_offset {Type I LastRead 0 FirstWrite -1}
		p_read64 {Type I LastRead 0 FirstWrite -1}
		p_read65 {Type I LastRead 0 FirstWrite -1}
		p_read66 {Type I LastRead 0 FirstWrite -1}
		p_read67 {Type I LastRead 0 FirstWrite -1}
		p_read68 {Type I LastRead 0 FirstWrite -1}
		p_read69 {Type I LastRead 0 FirstWrite -1}
		p_read70 {Type I LastRead 0 FirstWrite -1}
		p_read71 {Type I LastRead 0 FirstWrite -1}
		p_read72 {Type I LastRead 0 FirstWrite -1}
		p_read73 {Type I LastRead 0 FirstWrite -1}
		p_read74 {Type I LastRead 0 FirstWrite -1}
		p_read75 {Type I LastRead 0 FirstWrite -1}
		p_read76 {Type I LastRead 0 FirstWrite -1}
		p_read77 {Type I LastRead 0 FirstWrite -1}
		p_read78 {Type I LastRead 0 FirstWrite -1}
		p_read79 {Type I LastRead 0 FirstWrite -1}
		p_read80 {Type I LastRead 0 FirstWrite -1}
		p_read81 {Type I LastRead 0 FirstWrite -1}
		p_read82 {Type I LastRead 0 FirstWrite -1}
		p_read83 {Type I LastRead 0 FirstWrite -1}
		p_read84 {Type I LastRead 0 FirstWrite -1}
		p_read85 {Type I LastRead 0 FirstWrite -1}
		p_read86 {Type I LastRead 0 FirstWrite -1}
		p_read87 {Type I LastRead 0 FirstWrite -1}
		p_read88 {Type I LastRead 0 FirstWrite -1}
		p_read89 {Type I LastRead 0 FirstWrite -1}
		p_read90 {Type I LastRead 0 FirstWrite -1}
		p_read91 {Type I LastRead 0 FirstWrite -1}
		p_read92 {Type I LastRead 0 FirstWrite -1}
		p_read93 {Type I LastRead 0 FirstWrite -1}
		p_read94 {Type I LastRead 0 FirstWrite -1}
		p_read95 {Type I LastRead 0 FirstWrite -1}
		res_V_offset {Type I LastRead 0 FirstWrite -1}}
	relu_ap_fixed_ap_fixed_35_15_5_3_0_sigmoid_config1_s {
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
		data_16_0_V_read {Type I LastRead 0 FirstWrite -1}
		data_16_1_V_read {Type I LastRead 0 FirstWrite -1}
		data_17_0_V_read {Type I LastRead 0 FirstWrite -1}
		data_17_1_V_read {Type I LastRead 0 FirstWrite -1}
		data_18_0_V_read {Type I LastRead 0 FirstWrite -1}
		data_18_1_V_read {Type I LastRead 0 FirstWrite -1}
		data_19_0_V_read {Type I LastRead 0 FirstWrite -1}
		data_19_1_V_read {Type I LastRead 0 FirstWrite -1}
		data_20_0_V_read {Type I LastRead 0 FirstWrite -1}
		data_20_1_V_read {Type I LastRead 0 FirstWrite -1}
		data_21_0_V_read {Type I LastRead 0 FirstWrite -1}
		data_21_1_V_read {Type I LastRead 0 FirstWrite -1}
		data_22_0_V_read {Type I LastRead 0 FirstWrite -1}
		data_22_1_V_read {Type I LastRead 0 FirstWrite -1}
		data_23_0_V_read {Type I LastRead 0 FirstWrite -1}
		data_23_1_V_read {Type I LastRead 0 FirstWrite -1}
		data_24_0_V_read {Type I LastRead 0 FirstWrite -1}
		data_24_1_V_read {Type I LastRead 0 FirstWrite -1}
		data_25_0_V_read {Type I LastRead 0 FirstWrite -1}
		data_25_1_V_read {Type I LastRead 0 FirstWrite -1}
		data_26_0_V_read {Type I LastRead 0 FirstWrite -1}
		data_26_1_V_read {Type I LastRead 0 FirstWrite -1}
		data_27_0_V_read {Type I LastRead 0 FirstWrite -1}
		data_27_1_V_read {Type I LastRead 0 FirstWrite -1}
		data_28_0_V_read {Type I LastRead 0 FirstWrite -1}
		data_28_1_V_read {Type I LastRead 0 FirstWrite -1}
		data_29_0_V_read {Type I LastRead 0 FirstWrite -1}
		data_29_1_V_read {Type I LastRead 0 FirstWrite -1}
		data_30_0_V_read {Type I LastRead 0 FirstWrite -1}
		data_30_1_V_read {Type I LastRead 0 FirstWrite -1}
		data_31_0_V_read {Type I LastRead 0 FirstWrite -1}
		data_31_1_V_read {Type I LastRead 0 FirstWrite -1}
		data_V_offset {Type I LastRead 0 FirstWrite -1}
		res_0_0_V_read {Type I LastRead 0 FirstWrite -1}
		res_0_1_V_read {Type I LastRead 0 FirstWrite -1}
		res_1_0_V_read {Type I LastRead 0 FirstWrite -1}
		res_1_1_V_read {Type I LastRead 0 FirstWrite -1}
		res_2_0_V_read {Type I LastRead 0 FirstWrite -1}
		res_2_1_V_read {Type I LastRead 0 FirstWrite -1}
		res_3_0_V_read {Type I LastRead 0 FirstWrite -1}
		res_3_1_V_read {Type I LastRead 0 FirstWrite -1}
		res_4_0_V_read {Type I LastRead 0 FirstWrite -1}
		res_4_1_V_read {Type I LastRead 0 FirstWrite -1}
		res_5_0_V_read {Type I LastRead 0 FirstWrite -1}
		res_5_1_V_read {Type I LastRead 0 FirstWrite -1}
		res_6_0_V_read {Type I LastRead 0 FirstWrite -1}
		res_6_1_V_read {Type I LastRead 0 FirstWrite -1}
		res_7_0_V_read {Type I LastRead 0 FirstWrite -1}
		res_7_1_V_read {Type I LastRead 0 FirstWrite -1}
		res_8_0_V_read {Type I LastRead 0 FirstWrite -1}
		res_8_1_V_read {Type I LastRead 0 FirstWrite -1}
		res_9_0_V_read {Type I LastRead 0 FirstWrite -1}
		res_9_1_V_read {Type I LastRead 0 FirstWrite -1}
		res_10_0_V_read {Type I LastRead 0 FirstWrite -1}
		res_10_1_V_read {Type I LastRead 0 FirstWrite -1}
		res_11_0_V_read {Type I LastRead 0 FirstWrite -1}
		res_11_1_V_read {Type I LastRead 0 FirstWrite -1}
		res_12_0_V_read {Type I LastRead 0 FirstWrite -1}
		res_12_1_V_read {Type I LastRead 0 FirstWrite -1}
		res_13_0_V_read {Type I LastRead 0 FirstWrite -1}
		res_13_1_V_read {Type I LastRead 0 FirstWrite -1}
		res_14_0_V_read {Type I LastRead 0 FirstWrite -1}
		res_14_1_V_read {Type I LastRead 0 FirstWrite -1}
		res_15_0_V_read {Type I LastRead 0 FirstWrite -1}
		res_15_1_V_read {Type I LastRead 0 FirstWrite -1}
		res_16_0_V_read {Type I LastRead 0 FirstWrite -1}
		res_16_1_V_read {Type I LastRead 0 FirstWrite -1}
		res_17_0_V_read {Type I LastRead 0 FirstWrite -1}
		res_17_1_V_read {Type I LastRead 0 FirstWrite -1}
		res_18_0_V_read {Type I LastRead 0 FirstWrite -1}
		res_18_1_V_read {Type I LastRead 0 FirstWrite -1}
		res_19_0_V_read {Type I LastRead 0 FirstWrite -1}
		res_19_1_V_read {Type I LastRead 0 FirstWrite -1}
		res_20_0_V_read {Type I LastRead 0 FirstWrite -1}
		res_20_1_V_read {Type I LastRead 0 FirstWrite -1}
		res_21_0_V_read {Type I LastRead 0 FirstWrite -1}
		res_21_1_V_read {Type I LastRead 0 FirstWrite -1}
		res_22_0_V_read {Type I LastRead 0 FirstWrite -1}
		res_22_1_V_read {Type I LastRead 0 FirstWrite -1}
		res_23_0_V_read {Type I LastRead 0 FirstWrite -1}
		res_23_1_V_read {Type I LastRead 0 FirstWrite -1}
		res_24_0_V_read {Type I LastRead 0 FirstWrite -1}
		res_24_1_V_read {Type I LastRead 0 FirstWrite -1}
		res_25_0_V_read {Type I LastRead 0 FirstWrite -1}
		res_25_1_V_read {Type I LastRead 0 FirstWrite -1}
		res_26_0_V_read {Type I LastRead 0 FirstWrite -1}
		res_26_1_V_read {Type I LastRead 0 FirstWrite -1}
		res_27_0_V_read {Type I LastRead 0 FirstWrite -1}
		res_27_1_V_read {Type I LastRead 0 FirstWrite -1}
		res_28_0_V_read {Type I LastRead 0 FirstWrite -1}
		res_28_1_V_read {Type I LastRead 0 FirstWrite -1}
		res_29_0_V_read {Type I LastRead 0 FirstWrite -1}
		res_29_1_V_read {Type I LastRead 0 FirstWrite -1}
		res_30_0_V_read {Type I LastRead 0 FirstWrite -1}
		res_30_1_V_read {Type I LastRead 0 FirstWrite -1}
		res_31_0_V_read {Type I LastRead 0 FirstWrite -1}
		res_31_1_V_read {Type I LastRead 0 FirstWrite -1}
		res_V_offset {Type I LastRead 0 FirstWrite -1}}
	relu_ap_fixed_ap_fixed_35_15_5_3_0_sigmoid_config1_s {
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
		data_16_0_V_read {Type I LastRead 0 FirstWrite -1}
		data_16_1_V_read {Type I LastRead 0 FirstWrite -1}
		data_17_0_V_read {Type I LastRead 0 FirstWrite -1}
		data_17_1_V_read {Type I LastRead 0 FirstWrite -1}
		data_18_0_V_read {Type I LastRead 0 FirstWrite -1}
		data_18_1_V_read {Type I LastRead 0 FirstWrite -1}
		data_19_0_V_read {Type I LastRead 0 FirstWrite -1}
		data_19_1_V_read {Type I LastRead 0 FirstWrite -1}
		data_20_0_V_read {Type I LastRead 0 FirstWrite -1}
		data_20_1_V_read {Type I LastRead 0 FirstWrite -1}
		data_21_0_V_read {Type I LastRead 0 FirstWrite -1}
		data_21_1_V_read {Type I LastRead 0 FirstWrite -1}
		data_22_0_V_read {Type I LastRead 0 FirstWrite -1}
		data_22_1_V_read {Type I LastRead 0 FirstWrite -1}
		data_23_0_V_read {Type I LastRead 0 FirstWrite -1}
		data_23_1_V_read {Type I LastRead 0 FirstWrite -1}
		data_24_0_V_read {Type I LastRead 0 FirstWrite -1}
		data_24_1_V_read {Type I LastRead 0 FirstWrite -1}
		data_25_0_V_read {Type I LastRead 0 FirstWrite -1}
		data_25_1_V_read {Type I LastRead 0 FirstWrite -1}
		data_26_0_V_read {Type I LastRead 0 FirstWrite -1}
		data_26_1_V_read {Type I LastRead 0 FirstWrite -1}
		data_27_0_V_read {Type I LastRead 0 FirstWrite -1}
		data_27_1_V_read {Type I LastRead 0 FirstWrite -1}
		data_28_0_V_read {Type I LastRead 0 FirstWrite -1}
		data_28_1_V_read {Type I LastRead 0 FirstWrite -1}
		data_29_0_V_read {Type I LastRead 0 FirstWrite -1}
		data_29_1_V_read {Type I LastRead 0 FirstWrite -1}
		data_30_0_V_read {Type I LastRead 0 FirstWrite -1}
		data_30_1_V_read {Type I LastRead 0 FirstWrite -1}
		data_31_0_V_read {Type I LastRead 0 FirstWrite -1}
		data_31_1_V_read {Type I LastRead 0 FirstWrite -1}
		data_V_offset {Type I LastRead 0 FirstWrite -1}
		res_0_0_V_read {Type I LastRead 0 FirstWrite -1}
		res_0_1_V_read {Type I LastRead 0 FirstWrite -1}
		res_1_0_V_read {Type I LastRead 0 FirstWrite -1}
		res_1_1_V_read {Type I LastRead 0 FirstWrite -1}
		res_2_0_V_read {Type I LastRead 0 FirstWrite -1}
		res_2_1_V_read {Type I LastRead 0 FirstWrite -1}
		res_3_0_V_read {Type I LastRead 0 FirstWrite -1}
		res_3_1_V_read {Type I LastRead 0 FirstWrite -1}
		res_4_0_V_read {Type I LastRead 0 FirstWrite -1}
		res_4_1_V_read {Type I LastRead 0 FirstWrite -1}
		res_5_0_V_read {Type I LastRead 0 FirstWrite -1}
		res_5_1_V_read {Type I LastRead 0 FirstWrite -1}
		res_6_0_V_read {Type I LastRead 0 FirstWrite -1}
		res_6_1_V_read {Type I LastRead 0 FirstWrite -1}
		res_7_0_V_read {Type I LastRead 0 FirstWrite -1}
		res_7_1_V_read {Type I LastRead 0 FirstWrite -1}
		res_8_0_V_read {Type I LastRead 0 FirstWrite -1}
		res_8_1_V_read {Type I LastRead 0 FirstWrite -1}
		res_9_0_V_read {Type I LastRead 0 FirstWrite -1}
		res_9_1_V_read {Type I LastRead 0 FirstWrite -1}
		res_10_0_V_read {Type I LastRead 0 FirstWrite -1}
		res_10_1_V_read {Type I LastRead 0 FirstWrite -1}
		res_11_0_V_read {Type I LastRead 0 FirstWrite -1}
		res_11_1_V_read {Type I LastRead 0 FirstWrite -1}
		res_12_0_V_read {Type I LastRead 0 FirstWrite -1}
		res_12_1_V_read {Type I LastRead 0 FirstWrite -1}
		res_13_0_V_read {Type I LastRead 0 FirstWrite -1}
		res_13_1_V_read {Type I LastRead 0 FirstWrite -1}
		res_14_0_V_read {Type I LastRead 0 FirstWrite -1}
		res_14_1_V_read {Type I LastRead 0 FirstWrite -1}
		res_15_0_V_read {Type I LastRead 0 FirstWrite -1}
		res_15_1_V_read {Type I LastRead 0 FirstWrite -1}
		res_16_0_V_read {Type I LastRead 0 FirstWrite -1}
		res_16_1_V_read {Type I LastRead 0 FirstWrite -1}
		res_17_0_V_read {Type I LastRead 0 FirstWrite -1}
		res_17_1_V_read {Type I LastRead 0 FirstWrite -1}
		res_18_0_V_read {Type I LastRead 0 FirstWrite -1}
		res_18_1_V_read {Type I LastRead 0 FirstWrite -1}
		res_19_0_V_read {Type I LastRead 0 FirstWrite -1}
		res_19_1_V_read {Type I LastRead 0 FirstWrite -1}
		res_20_0_V_read {Type I LastRead 0 FirstWrite -1}
		res_20_1_V_read {Type I LastRead 0 FirstWrite -1}
		res_21_0_V_read {Type I LastRead 0 FirstWrite -1}
		res_21_1_V_read {Type I LastRead 0 FirstWrite -1}
		res_22_0_V_read {Type I LastRead 0 FirstWrite -1}
		res_22_1_V_read {Type I LastRead 0 FirstWrite -1}
		res_23_0_V_read {Type I LastRead 0 FirstWrite -1}
		res_23_1_V_read {Type I LastRead 0 FirstWrite -1}
		res_24_0_V_read {Type I LastRead 0 FirstWrite -1}
		res_24_1_V_read {Type I LastRead 0 FirstWrite -1}
		res_25_0_V_read {Type I LastRead 0 FirstWrite -1}
		res_25_1_V_read {Type I LastRead 0 FirstWrite -1}
		res_26_0_V_read {Type I LastRead 0 FirstWrite -1}
		res_26_1_V_read {Type I LastRead 0 FirstWrite -1}
		res_27_0_V_read {Type I LastRead 0 FirstWrite -1}
		res_27_1_V_read {Type I LastRead 0 FirstWrite -1}
		res_28_0_V_read {Type I LastRead 0 FirstWrite -1}
		res_28_1_V_read {Type I LastRead 0 FirstWrite -1}
		res_29_0_V_read {Type I LastRead 0 FirstWrite -1}
		res_29_1_V_read {Type I LastRead 0 FirstWrite -1}
		res_30_0_V_read {Type I LastRead 0 FirstWrite -1}
		res_30_1_V_read {Type I LastRead 0 FirstWrite -1}
		res_31_0_V_read {Type I LastRead 0 FirstWrite -1}
		res_31_1_V_read {Type I LastRead 0 FirstWrite -1}
		res_V_offset {Type I LastRead 0 FirstWrite -1}}
	relu_ap_fixed_ap_fixed_35_15_5_3_0_sigmoid_config0_s {
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
		res_0_0_V_read {Type I LastRead 0 FirstWrite -1}
		res_0_1_V_read {Type I LastRead 0 FirstWrite -1}
		res_1_0_V_read {Type I LastRead 0 FirstWrite -1}
		res_1_1_V_read {Type I LastRead 0 FirstWrite -1}
		res_2_0_V_read {Type I LastRead 0 FirstWrite -1}
		res_2_1_V_read {Type I LastRead 0 FirstWrite -1}
		res_3_0_V_read {Type I LastRead 0 FirstWrite -1}
		res_3_1_V_read {Type I LastRead 0 FirstWrite -1}
		res_4_0_V_read {Type I LastRead 0 FirstWrite -1}
		res_4_1_V_read {Type I LastRead 0 FirstWrite -1}
		res_5_0_V_read {Type I LastRead 0 FirstWrite -1}
		res_5_1_V_read {Type I LastRead 0 FirstWrite -1}
		res_6_0_V_read {Type I LastRead 0 FirstWrite -1}
		res_6_1_V_read {Type I LastRead 0 FirstWrite -1}
		res_7_0_V_read {Type I LastRead 0 FirstWrite -1}
		res_7_1_V_read {Type I LastRead 0 FirstWrite -1}
		res_8_0_V_read {Type I LastRead 0 FirstWrite -1}
		res_8_1_V_read {Type I LastRead 0 FirstWrite -1}
		res_9_0_V_read {Type I LastRead 0 FirstWrite -1}
		res_9_1_V_read {Type I LastRead 0 FirstWrite -1}
		res_10_0_V_read {Type I LastRead 0 FirstWrite -1}
		res_10_1_V_read {Type I LastRead 0 FirstWrite -1}
		res_11_0_V_read {Type I LastRead 0 FirstWrite -1}
		res_11_1_V_read {Type I LastRead 0 FirstWrite -1}
		res_12_0_V_read {Type I LastRead 0 FirstWrite -1}
		res_12_1_V_read {Type I LastRead 0 FirstWrite -1}
		res_13_0_V_read {Type I LastRead 0 FirstWrite -1}
		res_13_1_V_read {Type I LastRead 0 FirstWrite -1}
		res_14_0_V_read {Type I LastRead 0 FirstWrite -1}
		res_14_1_V_read {Type I LastRead 0 FirstWrite -1}
		res_15_0_V_read {Type I LastRead 0 FirstWrite -1}
		res_15_1_V_read {Type I LastRead 0 FirstWrite -1}
		res_V_offset {Type I LastRead 0 FirstWrite -1}}
	relu_ap_fixed_ap_fixed_35_15_5_3_0_sigmoid_config0_s {
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
		res_0_0_V_read {Type I LastRead 0 FirstWrite -1}
		res_0_1_V_read {Type I LastRead 0 FirstWrite -1}
		res_1_0_V_read {Type I LastRead 0 FirstWrite -1}
		res_1_1_V_read {Type I LastRead 0 FirstWrite -1}
		res_2_0_V_read {Type I LastRead 0 FirstWrite -1}
		res_2_1_V_read {Type I LastRead 0 FirstWrite -1}
		res_3_0_V_read {Type I LastRead 0 FirstWrite -1}
		res_3_1_V_read {Type I LastRead 0 FirstWrite -1}
		res_4_0_V_read {Type I LastRead 0 FirstWrite -1}
		res_4_1_V_read {Type I LastRead 0 FirstWrite -1}
		res_5_0_V_read {Type I LastRead 0 FirstWrite -1}
		res_5_1_V_read {Type I LastRead 0 FirstWrite -1}
		res_6_0_V_read {Type I LastRead 0 FirstWrite -1}
		res_6_1_V_read {Type I LastRead 0 FirstWrite -1}
		res_7_0_V_read {Type I LastRead 0 FirstWrite -1}
		res_7_1_V_read {Type I LastRead 0 FirstWrite -1}
		res_8_0_V_read {Type I LastRead 0 FirstWrite -1}
		res_8_1_V_read {Type I LastRead 0 FirstWrite -1}
		res_9_0_V_read {Type I LastRead 0 FirstWrite -1}
		res_9_1_V_read {Type I LastRead 0 FirstWrite -1}
		res_10_0_V_read {Type I LastRead 0 FirstWrite -1}
		res_10_1_V_read {Type I LastRead 0 FirstWrite -1}
		res_11_0_V_read {Type I LastRead 0 FirstWrite -1}
		res_11_1_V_read {Type I LastRead 0 FirstWrite -1}
		res_12_0_V_read {Type I LastRead 0 FirstWrite -1}
		res_12_1_V_read {Type I LastRead 0 FirstWrite -1}
		res_13_0_V_read {Type I LastRead 0 FirstWrite -1}
		res_13_1_V_read {Type I LastRead 0 FirstWrite -1}
		res_14_0_V_read {Type I LastRead 0 FirstWrite -1}
		res_14_1_V_read {Type I LastRead 0 FirstWrite -1}
		res_15_0_V_read {Type I LastRead 0 FirstWrite -1}
		res_15_1_V_read {Type I LastRead 0 FirstWrite -1}
		res_V_offset {Type I LastRead 0 FirstWrite -1}}
	dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_2 {
		data_V {Type I LastRead 8 FirstWrite -1}}
	init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s {
		table_out_V {Type O LastRead -1 FirstWrite 0}}
	dense_latency_ap_fixed_ap_fixed_mlp_config_0_0_0_0_0_0 {
		data_V {Type I LastRead 8 FirstWrite -1}}
	softmax_latency_ap_fixed_ap_fixed_softmax_config0_s {
		data_0_V_read {Type I LastRead 0 FirstWrite -1}
		data_1_V_read {Type I LastRead 0 FirstWrite -1}
		data_2_V_read {Type I LastRead 0 FirstWrite -1}
		data_3_V_read {Type I LastRead 0 FirstWrite -1}
		data_4_V_read {Type I LastRead 0 FirstWrite -1}
		exp_table3 {Type I LastRead -1 FirstWrite -1}
		invert_table4 {Type I LastRead -1 FirstWrite -1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "2094", "Max" : "2094"}
	, {"Name" : "Interval", "Min" : "2095", "Max" : "2095"}
]}

set PipelineEnableSignalInfo {[
]}

set Spec2ImplPortList { 
	data_in_V { ap_memory {  { data_in_V_address0 mem_address 1 4 }  { data_in_V_ce0 mem_ce 1 1 }  { data_in_V_q0 mem_dout 0 35 }  { data_in_V_address1 MemPortADDR2 1 4 }  { data_in_V_ce1 MemPortCE2 1 1 }  { data_in_V_q1 MemPortDOUT2 0 35 } } }
	data_out_V { ap_memory {  { data_out_V_address0 mem_address 1 3 }  { data_out_V_ce0 mem_ce 1 1 }  { data_out_V_we0 mem_we 1 1 }  { data_out_V_d0 mem_din 1 35 }  { data_out_V_address1 MemPortADDR2 1 3 }  { data_out_V_ce1 MemPortCE2 1 1 }  { data_out_V_we1 MemPortWE2 1 1 }  { data_out_V_d1 MemPortDIN2 1 35 } } }
	const_size_in_1 { ap_vld {  { const_size_in_1 out_data 1 16 }  { const_size_in_1_ap_vld out_vld 1 1 } } }
	const_size_out_1 { ap_vld {  { const_size_out_1 out_data 1 16 }  { const_size_out_1_ap_vld out_vld 1 1 } } }
}

set busDeadlockParameterList { 
}

# RTL port scheduling information:
set fifoSchedulingInfoList { 
}

# RTL bus port read request latency information:
set busReadReqLatencyList { 
}

# RTL bus port write response latency information:
set busWriteResLatencyList { 
}

# RTL array port load latency information:
set memoryLoadLatencyList { 
}
