set moduleName matmul_ap_fixed_ap_fixed_2ul_8ul_8ul_2ul_s
set isTopModule 0
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
set C_modelName {matmul<ap_fixed,ap_fixed,2ul,8ul,8ul,2ul>}
set C_modelType { void 0 }
set C_modelArgList {
	{ a_V int 35 regular {array 32 { 1 3 } 1 1 }  }
	{ a_V_offset int 2 regular  }
	{ b_V int 35 regular {array 32 { 1 3 } 1 1 }  }
	{ res_V int 35 regular {array 8 { 2 3 } 1 1 }  }
}
set C_modelArgMapList {[ 
	{ "Name" : "a_V", "interface" : "memory", "bitwidth" : 35, "direction" : "READONLY"} , 
 	{ "Name" : "a_V_offset", "interface" : "wire", "bitwidth" : 2, "direction" : "READONLY"} , 
 	{ "Name" : "b_V", "interface" : "memory", "bitwidth" : 35, "direction" : "READONLY"} , 
 	{ "Name" : "res_V", "interface" : "memory", "bitwidth" : 35, "direction" : "READWRITE"} ]}
# RTL Port declarations: 
set portNum 18
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ a_V_address0 sc_out sc_lv 5 signal 0 } 
	{ a_V_ce0 sc_out sc_logic 1 signal 0 } 
	{ a_V_q0 sc_in sc_lv 35 signal 0 } 
	{ a_V_offset sc_in sc_lv 2 signal 1 } 
	{ b_V_address0 sc_out sc_lv 5 signal 2 } 
	{ b_V_ce0 sc_out sc_logic 1 signal 2 } 
	{ b_V_q0 sc_in sc_lv 35 signal 2 } 
	{ res_V_address0 sc_out sc_lv 3 signal 3 } 
	{ res_V_ce0 sc_out sc_logic 1 signal 3 } 
	{ res_V_we0 sc_out sc_logic 1 signal 3 } 
	{ res_V_d0 sc_out sc_lv 35 signal 3 } 
	{ res_V_q0 sc_in sc_lv 35 signal 3 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "a_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "a_V", "role": "address0" }} , 
 	{ "name": "a_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "a_V", "role": "ce0" }} , 
 	{ "name": "a_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":35, "type": "signal", "bundle":{"name": "a_V", "role": "q0" }} , 
 	{ "name": "a_V_offset", "direction": "in", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "a_V_offset", "role": "default" }} , 
 	{ "name": "b_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "b_V", "role": "address0" }} , 
 	{ "name": "b_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "b_V", "role": "ce0" }} , 
 	{ "name": "b_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":35, "type": "signal", "bundle":{"name": "b_V", "role": "q0" }} , 
 	{ "name": "res_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "res_V", "role": "address0" }} , 
 	{ "name": "res_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_V", "role": "ce0" }} , 
 	{ "name": "res_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_V", "role": "we0" }} , 
 	{ "name": "res_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":35, "type": "signal", "bundle":{"name": "res_V", "role": "d0" }} , 
 	{ "name": "res_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":35, "type": "signal", "bundle":{"name": "res_V", "role": "q0" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "",
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
			{"Name" : "res_V", "Type" : "Memory", "Direction" : "IO"}]}]}


set ArgLastReadFirstWriteLatency {
	matmul_ap_fixed_ap_fixed_2ul_8ul_8ul_2ul_s {
		a_V {Type I LastRead 3 FirstWrite -1}
		a_V_offset {Type I LastRead 0 FirstWrite -1}
		b_V {Type I LastRead 3 FirstWrite -1}
		res_V {Type IO LastRead 4 FirstWrite 5}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "145", "Max" : "145"}
	, {"Name" : "Interval", "Min" : "145", "Max" : "145"}
]}

set PipelineEnableSignalInfo {[
]}

set Spec2ImplPortList { 
	a_V { ap_memory {  { a_V_address0 mem_address 1 5 }  { a_V_ce0 mem_ce 1 1 }  { a_V_q0 mem_dout 0 35 } } }
	a_V_offset { ap_none {  { a_V_offset in_data 0 2 } } }
	b_V { ap_memory {  { b_V_address0 mem_address 1 5 }  { b_V_ce0 mem_ce 1 1 }  { b_V_q0 mem_dout 0 35 } } }
	res_V { ap_memory {  { res_V_address0 mem_address 1 3 }  { res_V_ce0 mem_ce 1 1 }  { res_V_we0 mem_we 1 1 }  { res_V_d0 mem_din 1 35 }  { res_V_q0 mem_dout 0 35 } } }
}
set moduleName matmul_ap_fixed_ap_fixed_2ul_8ul_8ul_2ul_s
set isTopModule 0
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
set C_modelName {matmul<ap_fixed,ap_fixed,2ul,8ul,8ul,2ul>}
set C_modelType { void 0 }
set C_modelArgList {
	{ a_V int 35 regular {array 32 { 1 3 } 1 1 }  }
	{ a_V_offset int 2 regular  }
	{ b_V int 35 regular {array 32 { 1 3 } 1 1 }  }
	{ res_V int 35 regular {array 8 { 2 3 } 1 1 }  }
}
set C_modelArgMapList {[ 
	{ "Name" : "a_V", "interface" : "memory", "bitwidth" : 35, "direction" : "READONLY"} , 
 	{ "Name" : "a_V_offset", "interface" : "wire", "bitwidth" : 2, "direction" : "READONLY"} , 
 	{ "Name" : "b_V", "interface" : "memory", "bitwidth" : 35, "direction" : "READONLY"} , 
 	{ "Name" : "res_V", "interface" : "memory", "bitwidth" : 35, "direction" : "READWRITE"} ]}
# RTL Port declarations: 
set portNum 18
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ a_V_address0 sc_out sc_lv 5 signal 0 } 
	{ a_V_ce0 sc_out sc_logic 1 signal 0 } 
	{ a_V_q0 sc_in sc_lv 35 signal 0 } 
	{ a_V_offset sc_in sc_lv 2 signal 1 } 
	{ b_V_address0 sc_out sc_lv 5 signal 2 } 
	{ b_V_ce0 sc_out sc_logic 1 signal 2 } 
	{ b_V_q0 sc_in sc_lv 35 signal 2 } 
	{ res_V_address0 sc_out sc_lv 3 signal 3 } 
	{ res_V_ce0 sc_out sc_logic 1 signal 3 } 
	{ res_V_we0 sc_out sc_logic 1 signal 3 } 
	{ res_V_d0 sc_out sc_lv 35 signal 3 } 
	{ res_V_q0 sc_in sc_lv 35 signal 3 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "a_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "a_V", "role": "address0" }} , 
 	{ "name": "a_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "a_V", "role": "ce0" }} , 
 	{ "name": "a_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":35, "type": "signal", "bundle":{"name": "a_V", "role": "q0" }} , 
 	{ "name": "a_V_offset", "direction": "in", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "a_V_offset", "role": "default" }} , 
 	{ "name": "b_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "b_V", "role": "address0" }} , 
 	{ "name": "b_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "b_V", "role": "ce0" }} , 
 	{ "name": "b_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":35, "type": "signal", "bundle":{"name": "b_V", "role": "q0" }} , 
 	{ "name": "res_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "res_V", "role": "address0" }} , 
 	{ "name": "res_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_V", "role": "ce0" }} , 
 	{ "name": "res_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_V", "role": "we0" }} , 
 	{ "name": "res_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":35, "type": "signal", "bundle":{"name": "res_V", "role": "d0" }} , 
 	{ "name": "res_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":35, "type": "signal", "bundle":{"name": "res_V", "role": "q0" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "",
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
			{"Name" : "res_V", "Type" : "Memory", "Direction" : "IO"}]}]}


set ArgLastReadFirstWriteLatency {
	matmul_ap_fixed_ap_fixed_2ul_8ul_8ul_2ul_s {
		a_V {Type I LastRead 3 FirstWrite -1}
		a_V_offset {Type I LastRead 0 FirstWrite -1}
		b_V {Type I LastRead 3 FirstWrite -1}
		res_V {Type IO LastRead 4 FirstWrite 5}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "145", "Max" : "145"}
	, {"Name" : "Interval", "Min" : "145", "Max" : "145"}
]}

set PipelineEnableSignalInfo {[
]}

set Spec2ImplPortList { 
	a_V { ap_memory {  { a_V_address0 mem_address 1 5 }  { a_V_ce0 mem_ce 1 1 }  { a_V_q0 mem_dout 0 35 } } }
	a_V_offset { ap_none {  { a_V_offset in_data 0 2 } } }
	b_V { ap_memory {  { b_V_address0 mem_address 1 5 }  { b_V_ce0 mem_ce 1 1 }  { b_V_q0 mem_dout 0 35 } } }
	res_V { ap_memory {  { res_V_address0 mem_address 1 3 }  { res_V_ce0 mem_ce 1 1 }  { res_V_we0 mem_we 1 1 }  { res_V_d0 mem_din 1 35 }  { res_V_q0 mem_dout 0 35 } } }
}
set moduleName matmul_ap_fixed_ap_fixed_2ul_8ul_8ul_2ul_s
set isTopModule 0
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
set C_modelName {matmul<ap_fixed,ap_fixed,2ul,8ul,8ul,2ul>}
set C_modelType { void 0 }
set C_modelArgList {
	{ a_V int 35 regular {array 32 { 1 3 } 1 1 }  }
	{ a_V_offset int 2 regular  }
	{ b_V int 35 regular {array 32 { 1 3 } 1 1 }  }
	{ res_V int 35 regular {array 8 { 2 3 } 1 1 }  }
}
set C_modelArgMapList {[ 
	{ "Name" : "a_V", "interface" : "memory", "bitwidth" : 35, "direction" : "READONLY"} , 
 	{ "Name" : "a_V_offset", "interface" : "wire", "bitwidth" : 2, "direction" : "READONLY"} , 
 	{ "Name" : "b_V", "interface" : "memory", "bitwidth" : 35, "direction" : "READONLY"} , 
 	{ "Name" : "res_V", "interface" : "memory", "bitwidth" : 35, "direction" : "READWRITE"} ]}
# RTL Port declarations: 
set portNum 18
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ a_V_address0 sc_out sc_lv 5 signal 0 } 
	{ a_V_ce0 sc_out sc_logic 1 signal 0 } 
	{ a_V_q0 sc_in sc_lv 35 signal 0 } 
	{ a_V_offset sc_in sc_lv 2 signal 1 } 
	{ b_V_address0 sc_out sc_lv 5 signal 2 } 
	{ b_V_ce0 sc_out sc_logic 1 signal 2 } 
	{ b_V_q0 sc_in sc_lv 35 signal 2 } 
	{ res_V_address0 sc_out sc_lv 3 signal 3 } 
	{ res_V_ce0 sc_out sc_logic 1 signal 3 } 
	{ res_V_we0 sc_out sc_logic 1 signal 3 } 
	{ res_V_d0 sc_out sc_lv 35 signal 3 } 
	{ res_V_q0 sc_in sc_lv 35 signal 3 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "a_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "a_V", "role": "address0" }} , 
 	{ "name": "a_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "a_V", "role": "ce0" }} , 
 	{ "name": "a_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":35, "type": "signal", "bundle":{"name": "a_V", "role": "q0" }} , 
 	{ "name": "a_V_offset", "direction": "in", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "a_V_offset", "role": "default" }} , 
 	{ "name": "b_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "b_V", "role": "address0" }} , 
 	{ "name": "b_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "b_V", "role": "ce0" }} , 
 	{ "name": "b_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":35, "type": "signal", "bundle":{"name": "b_V", "role": "q0" }} , 
 	{ "name": "res_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "res_V", "role": "address0" }} , 
 	{ "name": "res_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_V", "role": "ce0" }} , 
 	{ "name": "res_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_V", "role": "we0" }} , 
 	{ "name": "res_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":35, "type": "signal", "bundle":{"name": "res_V", "role": "d0" }} , 
 	{ "name": "res_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":35, "type": "signal", "bundle":{"name": "res_V", "role": "q0" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "",
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
			{"Name" : "res_V", "Type" : "Memory", "Direction" : "IO"}]}]}


set ArgLastReadFirstWriteLatency {
	matmul_ap_fixed_ap_fixed_2ul_8ul_8ul_2ul_s {
		a_V {Type I LastRead 3 FirstWrite -1}
		a_V_offset {Type I LastRead 0 FirstWrite -1}
		b_V {Type I LastRead 3 FirstWrite -1}
		res_V {Type IO LastRead 4 FirstWrite 5}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "145", "Max" : "145"}
	, {"Name" : "Interval", "Min" : "145", "Max" : "145"}
]}

set PipelineEnableSignalInfo {[
]}

set Spec2ImplPortList { 
	a_V { ap_memory {  { a_V_address0 mem_address 1 5 }  { a_V_ce0 mem_ce 1 1 }  { a_V_q0 mem_dout 0 35 } } }
	a_V_offset { ap_none {  { a_V_offset in_data 0 2 } } }
	b_V { ap_memory {  { b_V_address0 mem_address 1 5 }  { b_V_ce0 mem_ce 1 1 }  { b_V_q0 mem_dout 0 35 } } }
	res_V { ap_memory {  { res_V_address0 mem_address 1 3 }  { res_V_ce0 mem_ce 1 1 }  { res_V_we0 mem_we 1 1 }  { res_V_d0 mem_din 1 35 }  { res_V_q0 mem_dout 0 35 } } }
}
set moduleName matmul_ap_fixed_ap_fixed_2ul_8ul_8ul_2ul_s
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
set C_modelName {matmul<ap_fixed,ap_fixed,2ul,8ul,8ul,2ul>}
set C_modelType { int 280 }
set C_modelArgList {
	{ a_0_0_V_read int 35 regular  }
	{ a_0_1_V_read int 35 regular  }
	{ a_1_0_V_read int 35 regular  }
	{ a_1_1_V_read int 35 regular  }
	{ a_2_0_V_read int 35 regular  }
	{ a_2_1_V_read int 35 regular  }
	{ a_3_0_V_read int 35 regular  }
	{ a_3_1_V_read int 35 regular  }
	{ a_4_0_V_read int 35 regular  }
	{ a_4_1_V_read int 35 regular  }
	{ a_5_0_V_read int 35 regular  }
	{ a_5_1_V_read int 35 regular  }
	{ a_6_0_V_read int 35 regular  }
	{ a_6_1_V_read int 35 regular  }
	{ a_7_0_V_read int 35 regular  }
	{ a_7_1_V_read int 35 regular  }
	{ a_8_0_V_read int 35 regular  }
	{ a_8_1_V_read int 35 regular  }
	{ a_9_0_V_read int 35 regular  }
	{ a_9_1_V_read int 35 regular  }
	{ a_10_0_V_read int 35 regular  }
	{ a_10_1_V_read int 35 regular  }
	{ a_11_0_V_read int 35 regular  }
	{ a_11_1_V_read int 35 regular  }
	{ a_12_0_V_read int 35 regular  }
	{ a_12_1_V_read int 35 regular  }
	{ a_13_0_V_read int 35 regular  }
	{ a_13_1_V_read int 35 regular  }
	{ a_14_0_V_read int 35 regular  }
	{ a_14_1_V_read int 35 regular  }
	{ a_15_0_V_read int 35 regular  }
	{ a_15_1_V_read int 35 regular  }
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
	{ res_0_0_V_read_2 int 35 regular  }
	{ res_0_0_V_read int 35 regular  }
	{ res_0_1_V_read_2 int 35 regular  }
	{ res_0_1_V_read int 35 regular  }
	{ res_1_0_V_read_2 int 35 regular  }
	{ res_1_0_V_read int 35 regular  }
	{ res_1_1_V_read_2 int 35 regular  }
	{ res_1_1_V_read int 35 regular  }
	{ res_2_0_V_read_2 int 35 regular  }
	{ res_2_0_V_read int 35 regular  }
	{ res_2_1_V_read_2 int 35 regular  }
	{ res_2_1_V_read int 35 regular  }
	{ res_3_0_V_read_2 int 35 regular  }
	{ res_3_0_V_read int 35 regular  }
	{ res_3_1_V_read_2 int 35 regular  }
	{ res_3_1_V_read int 35 regular  }
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
 	{ "Name" : "a_4_0_V_read", "interface" : "wire", "bitwidth" : 35, "direction" : "READONLY"} , 
 	{ "Name" : "a_4_1_V_read", "interface" : "wire", "bitwidth" : 35, "direction" : "READONLY"} , 
 	{ "Name" : "a_5_0_V_read", "interface" : "wire", "bitwidth" : 35, "direction" : "READONLY"} , 
 	{ "Name" : "a_5_1_V_read", "interface" : "wire", "bitwidth" : 35, "direction" : "READONLY"} , 
 	{ "Name" : "a_6_0_V_read", "interface" : "wire", "bitwidth" : 35, "direction" : "READONLY"} , 
 	{ "Name" : "a_6_1_V_read", "interface" : "wire", "bitwidth" : 35, "direction" : "READONLY"} , 
 	{ "Name" : "a_7_0_V_read", "interface" : "wire", "bitwidth" : 35, "direction" : "READONLY"} , 
 	{ "Name" : "a_7_1_V_read", "interface" : "wire", "bitwidth" : 35, "direction" : "READONLY"} , 
 	{ "Name" : "a_8_0_V_read", "interface" : "wire", "bitwidth" : 35, "direction" : "READONLY"} , 
 	{ "Name" : "a_8_1_V_read", "interface" : "wire", "bitwidth" : 35, "direction" : "READONLY"} , 
 	{ "Name" : "a_9_0_V_read", "interface" : "wire", "bitwidth" : 35, "direction" : "READONLY"} , 
 	{ "Name" : "a_9_1_V_read", "interface" : "wire", "bitwidth" : 35, "direction" : "READONLY"} , 
 	{ "Name" : "a_10_0_V_read", "interface" : "wire", "bitwidth" : 35, "direction" : "READONLY"} , 
 	{ "Name" : "a_10_1_V_read", "interface" : "wire", "bitwidth" : 35, "direction" : "READONLY"} , 
 	{ "Name" : "a_11_0_V_read", "interface" : "wire", "bitwidth" : 35, "direction" : "READONLY"} , 
 	{ "Name" : "a_11_1_V_read", "interface" : "wire", "bitwidth" : 35, "direction" : "READONLY"} , 
 	{ "Name" : "a_12_0_V_read", "interface" : "wire", "bitwidth" : 35, "direction" : "READONLY"} , 
 	{ "Name" : "a_12_1_V_read", "interface" : "wire", "bitwidth" : 35, "direction" : "READONLY"} , 
 	{ "Name" : "a_13_0_V_read", "interface" : "wire", "bitwidth" : 35, "direction" : "READONLY"} , 
 	{ "Name" : "a_13_1_V_read", "interface" : "wire", "bitwidth" : 35, "direction" : "READONLY"} , 
 	{ "Name" : "a_14_0_V_read", "interface" : "wire", "bitwidth" : 35, "direction" : "READONLY"} , 
 	{ "Name" : "a_14_1_V_read", "interface" : "wire", "bitwidth" : 35, "direction" : "READONLY"} , 
 	{ "Name" : "a_15_0_V_read", "interface" : "wire", "bitwidth" : 35, "direction" : "READONLY"} , 
 	{ "Name" : "a_15_1_V_read", "interface" : "wire", "bitwidth" : 35, "direction" : "READONLY"} , 
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
 	{ "Name" : "res_0_0_V_read_2", "interface" : "wire", "bitwidth" : 35, "direction" : "READONLY"} , 
 	{ "Name" : "res_0_0_V_read", "interface" : "wire", "bitwidth" : 35, "direction" : "READONLY"} , 
 	{ "Name" : "res_0_1_V_read_2", "interface" : "wire", "bitwidth" : 35, "direction" : "READONLY"} , 
 	{ "Name" : "res_0_1_V_read", "interface" : "wire", "bitwidth" : 35, "direction" : "READONLY"} , 
 	{ "Name" : "res_1_0_V_read_2", "interface" : "wire", "bitwidth" : 35, "direction" : "READONLY"} , 
 	{ "Name" : "res_1_0_V_read", "interface" : "wire", "bitwidth" : 35, "direction" : "READONLY"} , 
 	{ "Name" : "res_1_1_V_read_2", "interface" : "wire", "bitwidth" : 35, "direction" : "READONLY"} , 
 	{ "Name" : "res_1_1_V_read", "interface" : "wire", "bitwidth" : 35, "direction" : "READONLY"} , 
 	{ "Name" : "res_2_0_V_read_2", "interface" : "wire", "bitwidth" : 35, "direction" : "READONLY"} , 
 	{ "Name" : "res_2_0_V_read", "interface" : "wire", "bitwidth" : 35, "direction" : "READONLY"} , 
 	{ "Name" : "res_2_1_V_read_2", "interface" : "wire", "bitwidth" : 35, "direction" : "READONLY"} , 
 	{ "Name" : "res_2_1_V_read", "interface" : "wire", "bitwidth" : 35, "direction" : "READONLY"} , 
 	{ "Name" : "res_3_0_V_read_2", "interface" : "wire", "bitwidth" : 35, "direction" : "READONLY"} , 
 	{ "Name" : "res_3_0_V_read", "interface" : "wire", "bitwidth" : 35, "direction" : "READONLY"} , 
 	{ "Name" : "res_3_1_V_read_2", "interface" : "wire", "bitwidth" : 35, "direction" : "READONLY"} , 
 	{ "Name" : "res_3_1_V_read", "interface" : "wire", "bitwidth" : 35, "direction" : "READONLY"} , 
 	{ "Name" : "res_V_offset", "interface" : "wire", "bitwidth" : 1, "direction" : "READONLY"} , 
 	{ "Name" : "ap_return", "interface" : "wire", "bitwidth" : 280} ]}
# RTL Port declarations: 
set portNum 94
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
	{ a_4_0_V_read sc_in sc_lv 35 signal 8 } 
	{ a_4_1_V_read sc_in sc_lv 35 signal 9 } 
	{ a_5_0_V_read sc_in sc_lv 35 signal 10 } 
	{ a_5_1_V_read sc_in sc_lv 35 signal 11 } 
	{ a_6_0_V_read sc_in sc_lv 35 signal 12 } 
	{ a_6_1_V_read sc_in sc_lv 35 signal 13 } 
	{ a_7_0_V_read sc_in sc_lv 35 signal 14 } 
	{ a_7_1_V_read sc_in sc_lv 35 signal 15 } 
	{ a_8_0_V_read sc_in sc_lv 35 signal 16 } 
	{ a_8_1_V_read sc_in sc_lv 35 signal 17 } 
	{ a_9_0_V_read sc_in sc_lv 35 signal 18 } 
	{ a_9_1_V_read sc_in sc_lv 35 signal 19 } 
	{ a_10_0_V_read sc_in sc_lv 35 signal 20 } 
	{ a_10_1_V_read sc_in sc_lv 35 signal 21 } 
	{ a_11_0_V_read sc_in sc_lv 35 signal 22 } 
	{ a_11_1_V_read sc_in sc_lv 35 signal 23 } 
	{ a_12_0_V_read sc_in sc_lv 35 signal 24 } 
	{ a_12_1_V_read sc_in sc_lv 35 signal 25 } 
	{ a_13_0_V_read sc_in sc_lv 35 signal 26 } 
	{ a_13_1_V_read sc_in sc_lv 35 signal 27 } 
	{ a_14_0_V_read sc_in sc_lv 35 signal 28 } 
	{ a_14_1_V_read sc_in sc_lv 35 signal 29 } 
	{ a_15_0_V_read sc_in sc_lv 35 signal 30 } 
	{ a_15_1_V_read sc_in sc_lv 35 signal 31 } 
	{ a_V_offset sc_in sc_lv 1 signal 32 } 
	{ b_0_0_V_read sc_in sc_lv 35 signal 33 } 
	{ b_0_1_V_read sc_in sc_lv 35 signal 34 } 
	{ b_1_0_V_read sc_in sc_lv 35 signal 35 } 
	{ b_1_1_V_read sc_in sc_lv 35 signal 36 } 
	{ b_2_0_V_read sc_in sc_lv 35 signal 37 } 
	{ b_2_1_V_read sc_in sc_lv 35 signal 38 } 
	{ b_3_0_V_read sc_in sc_lv 35 signal 39 } 
	{ b_3_1_V_read sc_in sc_lv 35 signal 40 } 
	{ b_4_0_V_read sc_in sc_lv 35 signal 41 } 
	{ b_4_1_V_read sc_in sc_lv 35 signal 42 } 
	{ b_5_0_V_read sc_in sc_lv 35 signal 43 } 
	{ b_5_1_V_read sc_in sc_lv 35 signal 44 } 
	{ b_6_0_V_read sc_in sc_lv 35 signal 45 } 
	{ b_6_1_V_read sc_in sc_lv 35 signal 46 } 
	{ b_7_0_V_read sc_in sc_lv 35 signal 47 } 
	{ b_7_1_V_read sc_in sc_lv 35 signal 48 } 
	{ b_8_0_V_read sc_in sc_lv 35 signal 49 } 
	{ b_8_1_V_read sc_in sc_lv 35 signal 50 } 
	{ b_9_0_V_read sc_in sc_lv 35 signal 51 } 
	{ b_9_1_V_read sc_in sc_lv 35 signal 52 } 
	{ b_10_0_V_read sc_in sc_lv 35 signal 53 } 
	{ b_10_1_V_read sc_in sc_lv 35 signal 54 } 
	{ b_11_0_V_read sc_in sc_lv 35 signal 55 } 
	{ b_11_1_V_read sc_in sc_lv 35 signal 56 } 
	{ b_12_0_V_read sc_in sc_lv 35 signal 57 } 
	{ b_12_1_V_read sc_in sc_lv 35 signal 58 } 
	{ b_13_0_V_read sc_in sc_lv 35 signal 59 } 
	{ b_13_1_V_read sc_in sc_lv 35 signal 60 } 
	{ b_14_0_V_read sc_in sc_lv 35 signal 61 } 
	{ b_14_1_V_read sc_in sc_lv 35 signal 62 } 
	{ b_15_0_V_read sc_in sc_lv 35 signal 63 } 
	{ b_15_1_V_read sc_in sc_lv 35 signal 64 } 
	{ b_V_offset sc_in sc_lv 1 signal 65 } 
	{ res_0_0_V_read_2 sc_in sc_lv 35 signal 66 } 
	{ res_0_0_V_read sc_in sc_lv 35 signal 67 } 
	{ res_0_1_V_read_2 sc_in sc_lv 35 signal 68 } 
	{ res_0_1_V_read sc_in sc_lv 35 signal 69 } 
	{ res_1_0_V_read_2 sc_in sc_lv 35 signal 70 } 
	{ res_1_0_V_read sc_in sc_lv 35 signal 71 } 
	{ res_1_1_V_read_2 sc_in sc_lv 35 signal 72 } 
	{ res_1_1_V_read sc_in sc_lv 35 signal 73 } 
	{ res_2_0_V_read_2 sc_in sc_lv 35 signal 74 } 
	{ res_2_0_V_read sc_in sc_lv 35 signal 75 } 
	{ res_2_1_V_read_2 sc_in sc_lv 35 signal 76 } 
	{ res_2_1_V_read sc_in sc_lv 35 signal 77 } 
	{ res_3_0_V_read_2 sc_in sc_lv 35 signal 78 } 
	{ res_3_0_V_read sc_in sc_lv 35 signal 79 } 
	{ res_3_1_V_read_2 sc_in sc_lv 35 signal 80 } 
	{ res_3_1_V_read sc_in sc_lv 35 signal 81 } 
	{ res_V_offset sc_in sc_lv 1 signal 82 } 
	{ ap_return_0 sc_out sc_lv 35 signal -1 } 
	{ ap_return_1 sc_out sc_lv 35 signal -1 } 
	{ ap_return_2 sc_out sc_lv 35 signal -1 } 
	{ ap_return_3 sc_out sc_lv 35 signal -1 } 
	{ ap_return_4 sc_out sc_lv 35 signal -1 } 
	{ ap_return_5 sc_out sc_lv 35 signal -1 } 
	{ ap_return_6 sc_out sc_lv 35 signal -1 } 
	{ ap_return_7 sc_out sc_lv 35 signal -1 } 
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
 	{ "name": "a_4_0_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":35, "type": "signal", "bundle":{"name": "a_4_0_V_read", "role": "default" }} , 
 	{ "name": "a_4_1_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":35, "type": "signal", "bundle":{"name": "a_4_1_V_read", "role": "default" }} , 
 	{ "name": "a_5_0_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":35, "type": "signal", "bundle":{"name": "a_5_0_V_read", "role": "default" }} , 
 	{ "name": "a_5_1_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":35, "type": "signal", "bundle":{"name": "a_5_1_V_read", "role": "default" }} , 
 	{ "name": "a_6_0_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":35, "type": "signal", "bundle":{"name": "a_6_0_V_read", "role": "default" }} , 
 	{ "name": "a_6_1_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":35, "type": "signal", "bundle":{"name": "a_6_1_V_read", "role": "default" }} , 
 	{ "name": "a_7_0_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":35, "type": "signal", "bundle":{"name": "a_7_0_V_read", "role": "default" }} , 
 	{ "name": "a_7_1_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":35, "type": "signal", "bundle":{"name": "a_7_1_V_read", "role": "default" }} , 
 	{ "name": "a_8_0_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":35, "type": "signal", "bundle":{"name": "a_8_0_V_read", "role": "default" }} , 
 	{ "name": "a_8_1_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":35, "type": "signal", "bundle":{"name": "a_8_1_V_read", "role": "default" }} , 
 	{ "name": "a_9_0_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":35, "type": "signal", "bundle":{"name": "a_9_0_V_read", "role": "default" }} , 
 	{ "name": "a_9_1_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":35, "type": "signal", "bundle":{"name": "a_9_1_V_read", "role": "default" }} , 
 	{ "name": "a_10_0_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":35, "type": "signal", "bundle":{"name": "a_10_0_V_read", "role": "default" }} , 
 	{ "name": "a_10_1_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":35, "type": "signal", "bundle":{"name": "a_10_1_V_read", "role": "default" }} , 
 	{ "name": "a_11_0_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":35, "type": "signal", "bundle":{"name": "a_11_0_V_read", "role": "default" }} , 
 	{ "name": "a_11_1_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":35, "type": "signal", "bundle":{"name": "a_11_1_V_read", "role": "default" }} , 
 	{ "name": "a_12_0_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":35, "type": "signal", "bundle":{"name": "a_12_0_V_read", "role": "default" }} , 
 	{ "name": "a_12_1_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":35, "type": "signal", "bundle":{"name": "a_12_1_V_read", "role": "default" }} , 
 	{ "name": "a_13_0_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":35, "type": "signal", "bundle":{"name": "a_13_0_V_read", "role": "default" }} , 
 	{ "name": "a_13_1_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":35, "type": "signal", "bundle":{"name": "a_13_1_V_read", "role": "default" }} , 
 	{ "name": "a_14_0_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":35, "type": "signal", "bundle":{"name": "a_14_0_V_read", "role": "default" }} , 
 	{ "name": "a_14_1_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":35, "type": "signal", "bundle":{"name": "a_14_1_V_read", "role": "default" }} , 
 	{ "name": "a_15_0_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":35, "type": "signal", "bundle":{"name": "a_15_0_V_read", "role": "default" }} , 
 	{ "name": "a_15_1_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":35, "type": "signal", "bundle":{"name": "a_15_1_V_read", "role": "default" }} , 
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
 	{ "name": "res_0_0_V_read_2", "direction": "in", "datatype": "sc_lv", "bitwidth":35, "type": "signal", "bundle":{"name": "res_0_0_V_read_2", "role": "default" }} , 
 	{ "name": "res_0_0_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":35, "type": "signal", "bundle":{"name": "res_0_0_V_read", "role": "default" }} , 
 	{ "name": "res_0_1_V_read_2", "direction": "in", "datatype": "sc_lv", "bitwidth":35, "type": "signal", "bundle":{"name": "res_0_1_V_read_2", "role": "default" }} , 
 	{ "name": "res_0_1_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":35, "type": "signal", "bundle":{"name": "res_0_1_V_read", "role": "default" }} , 
 	{ "name": "res_1_0_V_read_2", "direction": "in", "datatype": "sc_lv", "bitwidth":35, "type": "signal", "bundle":{"name": "res_1_0_V_read_2", "role": "default" }} , 
 	{ "name": "res_1_0_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":35, "type": "signal", "bundle":{"name": "res_1_0_V_read", "role": "default" }} , 
 	{ "name": "res_1_1_V_read_2", "direction": "in", "datatype": "sc_lv", "bitwidth":35, "type": "signal", "bundle":{"name": "res_1_1_V_read_2", "role": "default" }} , 
 	{ "name": "res_1_1_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":35, "type": "signal", "bundle":{"name": "res_1_1_V_read", "role": "default" }} , 
 	{ "name": "res_2_0_V_read_2", "direction": "in", "datatype": "sc_lv", "bitwidth":35, "type": "signal", "bundle":{"name": "res_2_0_V_read_2", "role": "default" }} , 
 	{ "name": "res_2_0_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":35, "type": "signal", "bundle":{"name": "res_2_0_V_read", "role": "default" }} , 
 	{ "name": "res_2_1_V_read_2", "direction": "in", "datatype": "sc_lv", "bitwidth":35, "type": "signal", "bundle":{"name": "res_2_1_V_read_2", "role": "default" }} , 
 	{ "name": "res_2_1_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":35, "type": "signal", "bundle":{"name": "res_2_1_V_read", "role": "default" }} , 
 	{ "name": "res_3_0_V_read_2", "direction": "in", "datatype": "sc_lv", "bitwidth":35, "type": "signal", "bundle":{"name": "res_3_0_V_read_2", "role": "default" }} , 
 	{ "name": "res_3_0_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":35, "type": "signal", "bundle":{"name": "res_3_0_V_read", "role": "default" }} , 
 	{ "name": "res_3_1_V_read_2", "direction": "in", "datatype": "sc_lv", "bitwidth":35, "type": "signal", "bundle":{"name": "res_3_1_V_read_2", "role": "default" }} , 
 	{ "name": "res_3_1_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":35, "type": "signal", "bundle":{"name": "res_3_1_V_read", "role": "default" }} , 
 	{ "name": "res_V_offset", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "res_V_offset", "role": "default" }} , 
 	{ "name": "ap_return_0", "direction": "out", "datatype": "sc_lv", "bitwidth":35, "type": "signal", "bundle":{"name": "ap_return_0", "role": "default" }} , 
 	{ "name": "ap_return_1", "direction": "out", "datatype": "sc_lv", "bitwidth":35, "type": "signal", "bundle":{"name": "ap_return_1", "role": "default" }} , 
 	{ "name": "ap_return_2", "direction": "out", "datatype": "sc_lv", "bitwidth":35, "type": "signal", "bundle":{"name": "ap_return_2", "role": "default" }} , 
 	{ "name": "ap_return_3", "direction": "out", "datatype": "sc_lv", "bitwidth":35, "type": "signal", "bundle":{"name": "ap_return_3", "role": "default" }} , 
 	{ "name": "ap_return_4", "direction": "out", "datatype": "sc_lv", "bitwidth":35, "type": "signal", "bundle":{"name": "ap_return_4", "role": "default" }} , 
 	{ "name": "ap_return_5", "direction": "out", "datatype": "sc_lv", "bitwidth":35, "type": "signal", "bundle":{"name": "ap_return_5", "role": "default" }} , 
 	{ "name": "ap_return_6", "direction": "out", "datatype": "sc_lv", "bitwidth":35, "type": "signal", "bundle":{"name": "ap_return_6", "role": "default" }} , 
 	{ "name": "ap_return_7", "direction": "out", "datatype": "sc_lv", "bitwidth":35, "type": "signal", "bundle":{"name": "ap_return_7", "role": "default" }} , 
 	{ "name": "ap_ce", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "ce", "bundle":{"name": "ap_ce", "role": "default" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "",
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
			{"Name" : "res_V_offset", "Type" : "None", "Direction" : "I"}]}]}


set ArgLastReadFirstWriteLatency {
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
		res_V_offset {Type I LastRead 0 FirstWrite -1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "2", "Max" : "2"}
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
	a_4_0_V_read { ap_none {  { a_4_0_V_read in_data 0 35 } } }
	a_4_1_V_read { ap_none {  { a_4_1_V_read in_data 0 35 } } }
	a_5_0_V_read { ap_none {  { a_5_0_V_read in_data 0 35 } } }
	a_5_1_V_read { ap_none {  { a_5_1_V_read in_data 0 35 } } }
	a_6_0_V_read { ap_none {  { a_6_0_V_read in_data 0 35 } } }
	a_6_1_V_read { ap_none {  { a_6_1_V_read in_data 0 35 } } }
	a_7_0_V_read { ap_none {  { a_7_0_V_read in_data 0 35 } } }
	a_7_1_V_read { ap_none {  { a_7_1_V_read in_data 0 35 } } }
	a_8_0_V_read { ap_none {  { a_8_0_V_read in_data 0 35 } } }
	a_8_1_V_read { ap_none {  { a_8_1_V_read in_data 0 35 } } }
	a_9_0_V_read { ap_none {  { a_9_0_V_read in_data 0 35 } } }
	a_9_1_V_read { ap_none {  { a_9_1_V_read in_data 0 35 } } }
	a_10_0_V_read { ap_none {  { a_10_0_V_read in_data 0 35 } } }
	a_10_1_V_read { ap_none {  { a_10_1_V_read in_data 0 35 } } }
	a_11_0_V_read { ap_none {  { a_11_0_V_read in_data 0 35 } } }
	a_11_1_V_read { ap_none {  { a_11_1_V_read in_data 0 35 } } }
	a_12_0_V_read { ap_none {  { a_12_0_V_read in_data 0 35 } } }
	a_12_1_V_read { ap_none {  { a_12_1_V_read in_data 0 35 } } }
	a_13_0_V_read { ap_none {  { a_13_0_V_read in_data 0 35 } } }
	a_13_1_V_read { ap_none {  { a_13_1_V_read in_data 0 35 } } }
	a_14_0_V_read { ap_none {  { a_14_0_V_read in_data 0 35 } } }
	a_14_1_V_read { ap_none {  { a_14_1_V_read in_data 0 35 } } }
	a_15_0_V_read { ap_none {  { a_15_0_V_read in_data 0 35 } } }
	a_15_1_V_read { ap_none {  { a_15_1_V_read in_data 0 35 } } }
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
	res_0_0_V_read_2 { ap_none {  { res_0_0_V_read_2 in_data 0 35 } } }
	res_0_0_V_read { ap_none {  { res_0_0_V_read in_data 0 35 } } }
	res_0_1_V_read_2 { ap_none {  { res_0_1_V_read_2 in_data 0 35 } } }
	res_0_1_V_read { ap_none {  { res_0_1_V_read in_data 0 35 } } }
	res_1_0_V_read_2 { ap_none {  { res_1_0_V_read_2 in_data 0 35 } } }
	res_1_0_V_read { ap_none {  { res_1_0_V_read in_data 0 35 } } }
	res_1_1_V_read_2 { ap_none {  { res_1_1_V_read_2 in_data 0 35 } } }
	res_1_1_V_read { ap_none {  { res_1_1_V_read in_data 0 35 } } }
	res_2_0_V_read_2 { ap_none {  { res_2_0_V_read_2 in_data 0 35 } } }
	res_2_0_V_read { ap_none {  { res_2_0_V_read in_data 0 35 } } }
	res_2_1_V_read_2 { ap_none {  { res_2_1_V_read_2 in_data 0 35 } } }
	res_2_1_V_read { ap_none {  { res_2_1_V_read in_data 0 35 } } }
	res_3_0_V_read_2 { ap_none {  { res_3_0_V_read_2 in_data 0 35 } } }
	res_3_0_V_read { ap_none {  { res_3_0_V_read in_data 0 35 } } }
	res_3_1_V_read_2 { ap_none {  { res_3_1_V_read_2 in_data 0 35 } } }
	res_3_1_V_read { ap_none {  { res_3_1_V_read in_data 0 35 } } }
	res_V_offset { ap_none {  { res_V_offset in_data 0 1 } } }
}
