set moduleName softmax_latency_ap_fixed_ap_fixed_sa_softmax_config0_s
set isTopModule 0
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
set C_modelName {softmax_latency<ap_fixed,ap_fixed,sa_softmax_config0>}
set C_modelType { void 0 }
set C_modelArgList {
	{ data_V int 16 regular {array 8 { 1 1 } 1 1 }  }
	{ data_V_offset int 1 regular  }
	{ data_V_offset1 int 1 regular  }
	{ res_V int 32 regular {array 8 { 0 0 } 0 1 }  }
	{ res_V_offset int 1 regular  }
	{ res_V_offset3 int 1 regular  }
}
set C_modelArgMapList {[ 
	{ "Name" : "data_V", "interface" : "memory", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "data_V_offset", "interface" : "wire", "bitwidth" : 1, "direction" : "READONLY"} , 
 	{ "Name" : "data_V_offset1", "interface" : "wire", "bitwidth" : 1, "direction" : "READONLY"} , 
 	{ "Name" : "res_V", "interface" : "memory", "bitwidth" : 32, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_V_offset", "interface" : "wire", "bitwidth" : 1, "direction" : "READONLY"} , 
 	{ "Name" : "res_V_offset3", "interface" : "wire", "bitwidth" : 1, "direction" : "READONLY"} ]}
# RTL Port declarations: 
set portNum 25
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ ap_ce sc_in sc_logic 1 ce -1 } 
	{ data_V_address0 sc_out sc_lv 3 signal 0 } 
	{ data_V_ce0 sc_out sc_logic 1 signal 0 } 
	{ data_V_q0 sc_in sc_lv 16 signal 0 } 
	{ data_V_address1 sc_out sc_lv 3 signal 0 } 
	{ data_V_ce1 sc_out sc_logic 1 signal 0 } 
	{ data_V_q1 sc_in sc_lv 16 signal 0 } 
	{ data_V_offset sc_in sc_lv 1 signal 1 } 
	{ data_V_offset1 sc_in sc_lv 1 signal 2 } 
	{ res_V_address0 sc_out sc_lv 3 signal 3 } 
	{ res_V_ce0 sc_out sc_logic 1 signal 3 } 
	{ res_V_we0 sc_out sc_logic 1 signal 3 } 
	{ res_V_d0 sc_out sc_lv 32 signal 3 } 
	{ res_V_address1 sc_out sc_lv 3 signal 3 } 
	{ res_V_ce1 sc_out sc_logic 1 signal 3 } 
	{ res_V_we1 sc_out sc_logic 1 signal 3 } 
	{ res_V_d1 sc_out sc_lv 32 signal 3 } 
	{ res_V_offset sc_in sc_lv 1 signal 4 } 
	{ res_V_offset3 sc_in sc_lv 1 signal 5 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "ap_ce", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "ce", "bundle":{"name": "ap_ce", "role": "default" }} , 
 	{ "name": "data_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "data_V", "role": "address0" }} , 
 	{ "name": "data_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "data_V", "role": "ce0" }} , 
 	{ "name": "data_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "data_V", "role": "q0" }} , 
 	{ "name": "data_V_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "data_V", "role": "address1" }} , 
 	{ "name": "data_V_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "data_V", "role": "ce1" }} , 
 	{ "name": "data_V_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "data_V", "role": "q1" }} , 
 	{ "name": "data_V_offset", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "data_V_offset", "role": "default" }} , 
 	{ "name": "data_V_offset1", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "data_V_offset1", "role": "default" }} , 
 	{ "name": "res_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "res_V", "role": "address0" }} , 
 	{ "name": "res_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_V", "role": "ce0" }} , 
 	{ "name": "res_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_V", "role": "we0" }} , 
 	{ "name": "res_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "res_V", "role": "d0" }} , 
 	{ "name": "res_V_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "res_V", "role": "address1" }} , 
 	{ "name": "res_V_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_V", "role": "ce1" }} , 
 	{ "name": "res_V_we1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_V", "role": "we1" }} , 
 	{ "name": "res_V_d1", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "res_V", "role": "d1" }} , 
 	{ "name": "res_V_offset", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "res_V_offset", "role": "default" }} , 
 	{ "name": "res_V_offset3", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "res_V_offset3", "role": "default" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "2", "3", "4"],
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
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.exp_table13_U", "Parent" : "0"},
	{"ID" : "2", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.invert_table15_U", "Parent" : "0"},
	{"ID" : "3", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.myproject_mul_mul_16s_16s_32_1_1_U410", "Parent" : "0"},
	{"ID" : "4", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.myproject_mul_mul_16s_16s_32_1_1_U411", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
	softmax_latency_ap_fixed_ap_fixed_sa_softmax_config0_s {
		data_V {Type I LastRead 1 FirstWrite -1}
		data_V_offset {Type I LastRead 0 FirstWrite -1}
		data_V_offset1 {Type I LastRead 0 FirstWrite -1}
		res_V {Type O LastRead -1 FirstWrite 3}
		res_V_offset {Type I LastRead 0 FirstWrite -1}
		res_V_offset3 {Type I LastRead 0 FirstWrite -1}
		exp_table13 {Type I LastRead -1 FirstWrite -1}
		invert_table15 {Type I LastRead -1 FirstWrite -1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "3", "Max" : "3"}
	, {"Name" : "Interval", "Min" : "1", "Max" : "1"}
]}

set PipelineEnableSignalInfo {[
	{"Pipeline" : "0", "EnableSignal" : "ap_enable_pp0"}
]}

set Spec2ImplPortList { 
	data_V { ap_memory {  { data_V_address0 mem_address 1 3 }  { data_V_ce0 mem_ce 1 1 }  { data_V_q0 mem_dout 0 16 }  { data_V_address1 MemPortADDR2 1 3 }  { data_V_ce1 MemPortCE2 1 1 }  { data_V_q1 MemPortDOUT2 0 16 } } }
	data_V_offset { ap_none {  { data_V_offset in_data 0 1 } } }
	data_V_offset1 { ap_none {  { data_V_offset1 in_data 0 1 } } }
	res_V { ap_memory {  { res_V_address0 mem_address 1 3 }  { res_V_ce0 mem_ce 1 1 }  { res_V_we0 mem_we 1 1 }  { res_V_d0 mem_din 1 32 }  { res_V_address1 MemPortADDR2 1 3 }  { res_V_ce1 MemPortCE2 1 1 }  { res_V_we1 MemPortWE2 1 1 }  { res_V_d1 MemPortDIN2 1 32 } } }
	res_V_offset { ap_none {  { res_V_offset in_data 0 1 } } }
	res_V_offset3 { ap_none {  { res_V_offset3 in_data 0 1 } } }
}
