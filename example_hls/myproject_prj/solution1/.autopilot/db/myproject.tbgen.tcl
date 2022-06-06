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
	{ data_in_V int 30 regular {array 5 { 1 3 } 1 1 }  }
	{ data_out_V int 30 regular {array 5 { 0 3 } 0 1 }  }
}
set C_modelArgMapList {[ 
	{ "Name" : "data_in_V", "interface" : "memory", "bitwidth" : 30, "direction" : "READONLY", "bitSlice":[{"low":0,"up":29,"cElement": [{"cName": "data_in.V","cData": "int30","bit_use": { "low": 0,"up": 29},"cArray": [{"low" : 0,"up" : 4,"step" : 1}]}]}]} , 
 	{ "Name" : "data_out_V", "interface" : "memory", "bitwidth" : 30, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":29,"cElement": [{"cName": "data_out.V","cData": "int30","bit_use": { "low": 0,"up": 29},"cArray": [{"low" : 0,"up" : 4,"step" : 1}]}]}]} ]}
# RTL Port declarations: 
set portNum 13
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ data_in_V_address0 sc_out sc_lv 3 signal 0 } 
	{ data_in_V_ce0 sc_out sc_logic 1 signal 0 } 
	{ data_in_V_q0 sc_in sc_lv 30 signal 0 } 
	{ data_out_V_address0 sc_out sc_lv 3 signal 1 } 
	{ data_out_V_ce0 sc_out sc_logic 1 signal 1 } 
	{ data_out_V_we0 sc_out sc_logic 1 signal 1 } 
	{ data_out_V_d0 sc_out sc_lv 30 signal 1 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "data_in_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "data_in_V", "role": "address0" }} , 
 	{ "name": "data_in_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "data_in_V", "role": "ce0" }} , 
 	{ "name": "data_in_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":30, "type": "signal", "bundle":{"name": "data_in_V", "role": "q0" }} , 
 	{ "name": "data_out_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "data_out_V", "role": "address0" }} , 
 	{ "name": "data_out_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "data_out_V", "role": "ce0" }} , 
 	{ "name": "data_out_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "data_out_V", "role": "we0" }} , 
 	{ "name": "data_out_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":30, "type": "signal", "bundle":{"name": "data_out_V", "role": "d0" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1"],
		"CDFG" : "myproject",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "129", "EstimateLatencyMax" : "129",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "data_in_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "data_out_V", "Type" : "Memory", "Direction" : "O"}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.accum_V_U", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
	myproject {
		data_in_V {Type I LastRead 3 FirstWrite -1}
		data_out_V {Type O LastRead -1 FirstWrite 5}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "129", "Max" : "129"}
	, {"Name" : "Interval", "Min" : "130", "Max" : "130"}
]}

set PipelineEnableSignalInfo {[
]}

set Spec2ImplPortList { 
	data_in_V { ap_memory {  { data_in_V_address0 mem_address 1 3 }  { data_in_V_ce0 mem_ce 1 1 }  { data_in_V_q0 mem_dout 0 30 } } }
	data_out_V { ap_memory {  { data_out_V_address0 mem_address 1 3 }  { data_out_V_ce0 mem_ce 1 1 }  { data_out_V_we0 mem_we 1 1 }  { data_out_V_d0 mem_din 1 30 } } }
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
	{ data_in_V int 30 regular {array 5 { 1 3 } 1 1 }  }
	{ data_out_V int 30 regular {array 5 { 0 3 } 0 1 }  }
}
set C_modelArgMapList {[ 
	{ "Name" : "data_in_V", "interface" : "memory", "bitwidth" : 30, "direction" : "READONLY", "bitSlice":[{"low":0,"up":29,"cElement": [{"cName": "data_in.V","cData": "int30","bit_use": { "low": 0,"up": 29},"cArray": [{"low" : 0,"up" : 4,"step" : 1}]}]}]} , 
 	{ "Name" : "data_out_V", "interface" : "memory", "bitwidth" : 30, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":29,"cElement": [{"cName": "data_out.V","cData": "int30","bit_use": { "low": 0,"up": 29},"cArray": [{"low" : 0,"up" : 4,"step" : 1}]}]}]} ]}
# RTL Port declarations: 
set portNum 13
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ data_in_V_address0 sc_out sc_lv 3 signal 0 } 
	{ data_in_V_ce0 sc_out sc_logic 1 signal 0 } 
	{ data_in_V_q0 sc_in sc_lv 30 signal 0 } 
	{ data_out_V_address0 sc_out sc_lv 3 signal 1 } 
	{ data_out_V_ce0 sc_out sc_logic 1 signal 1 } 
	{ data_out_V_we0 sc_out sc_logic 1 signal 1 } 
	{ data_out_V_d0 sc_out sc_lv 30 signal 1 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "data_in_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "data_in_V", "role": "address0" }} , 
 	{ "name": "data_in_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "data_in_V", "role": "ce0" }} , 
 	{ "name": "data_in_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":30, "type": "signal", "bundle":{"name": "data_in_V", "role": "q0" }} , 
 	{ "name": "data_out_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "data_out_V", "role": "address0" }} , 
 	{ "name": "data_out_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "data_out_V", "role": "ce0" }} , 
 	{ "name": "data_out_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "data_out_V", "role": "we0" }} , 
 	{ "name": "data_out_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":30, "type": "signal", "bundle":{"name": "data_out_V", "role": "d0" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "2"],
		"CDFG" : "myproject",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "9329", "EstimateLatencyMax" : "9329",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "data_in_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "data_out_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "value1", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.value1_U", "Parent" : "0"},
	{"ID" : "2", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.accum_V_U", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
	myproject {
		data_in_V {Type I LastRead 3 FirstWrite -1}
		data_out_V {Type O LastRead -1 FirstWrite 5}
		value1 {Type I LastRead -1 FirstWrite -1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "9329", "Max" : "9329"}
	, {"Name" : "Interval", "Min" : "9330", "Max" : "9330"}
]}

set PipelineEnableSignalInfo {[
]}

set Spec2ImplPortList { 
	data_in_V { ap_memory {  { data_in_V_address0 mem_address 1 3 }  { data_in_V_ce0 mem_ce 1 1 }  { data_in_V_q0 mem_dout 0 30 } } }
	data_out_V { ap_memory {  { data_out_V_address0 mem_address 1 3 }  { data_out_V_ce0 mem_ce 1 1 }  { data_out_V_we0 mem_we 1 1 }  { data_out_V_d0 mem_din 1 30 } } }
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
	{ data_in_V int 30 regular {array 5 { 1 3 } 1 1 }  }
	{ data_out_V int 30 regular {array 5 { 0 3 } 0 1 }  }
}
set C_modelArgMapList {[ 
	{ "Name" : "data_in_V", "interface" : "memory", "bitwidth" : 30, "direction" : "READONLY", "bitSlice":[{"low":0,"up":29,"cElement": [{"cName": "data_in.V","cData": "int30","bit_use": { "low": 0,"up": 29},"cArray": [{"low" : 0,"up" : 4,"step" : 1}]}]}]} , 
 	{ "Name" : "data_out_V", "interface" : "memory", "bitwidth" : 30, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":29,"cElement": [{"cName": "data_out.V","cData": "int30","bit_use": { "low": 0,"up": 29},"cArray": [{"low" : 0,"up" : 4,"step" : 1}]}]}]} ]}
# RTL Port declarations: 
set portNum 13
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ data_in_V_address0 sc_out sc_lv 3 signal 0 } 
	{ data_in_V_ce0 sc_out sc_logic 1 signal 0 } 
	{ data_in_V_q0 sc_in sc_lv 30 signal 0 } 
	{ data_out_V_address0 sc_out sc_lv 3 signal 1 } 
	{ data_out_V_ce0 sc_out sc_logic 1 signal 1 } 
	{ data_out_V_we0 sc_out sc_logic 1 signal 1 } 
	{ data_out_V_d0 sc_out sc_lv 30 signal 1 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "data_in_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "data_in_V", "role": "address0" }} , 
 	{ "name": "data_in_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "data_in_V", "role": "ce0" }} , 
 	{ "name": "data_in_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":30, "type": "signal", "bundle":{"name": "data_in_V", "role": "q0" }} , 
 	{ "name": "data_out_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "data_out_V", "role": "address0" }} , 
 	{ "name": "data_out_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "data_out_V", "role": "ce0" }} , 
 	{ "name": "data_out_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "data_out_V", "role": "we0" }} , 
 	{ "name": "data_out_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":30, "type": "signal", "bundle":{"name": "data_out_V", "role": "d0" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "2", "3", "4"],
		"CDFG" : "myproject",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "418829", "EstimateLatencyMax" : "418829",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "data_in_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "data_out_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "value1", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "value2", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.value1_U", "Parent" : "0"},
	{"ID" : "2", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.value2_U", "Parent" : "0"},
	{"ID" : "3", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.accum_V_U", "Parent" : "0"},
	{"ID" : "4", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.myproject_mul_mul_15ns_15ns_29_1_1_U1", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
	myproject {
		data_in_V {Type I LastRead 3 FirstWrite -1}
		data_out_V {Type O LastRead -1 FirstWrite 5}
		value1 {Type I LastRead -1 FirstWrite -1}
		value2 {Type I LastRead -1 FirstWrite -1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "418829", "Max" : "418829"}
	, {"Name" : "Interval", "Min" : "418830", "Max" : "418830"}
]}

set PipelineEnableSignalInfo {[
]}

set Spec2ImplPortList { 
	data_in_V { ap_memory {  { data_in_V_address0 mem_address 1 3 }  { data_in_V_ce0 mem_ce 1 1 }  { data_in_V_q0 mem_dout 0 30 } } }
	data_out_V { ap_memory {  { data_out_V_address0 mem_address 1 3 }  { data_out_V_ce0 mem_ce 1 1 }  { data_out_V_we0 mem_we 1 1 }  { data_out_V_d0 mem_din 1 30 } } }
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
	{ data_in_V int 30 regular {array 5 { 1 3 } 1 1 }  }
	{ data_out_V int 30 regular {array 5 { 0 3 } 0 1 }  }
}
set C_modelArgMapList {[ 
	{ "Name" : "data_in_V", "interface" : "memory", "bitwidth" : 30, "direction" : "READONLY", "bitSlice":[{"low":0,"up":29,"cElement": [{"cName": "data_in.V","cData": "int30","bit_use": { "low": 0,"up": 29},"cArray": [{"low" : 0,"up" : 4,"step" : 1}]}]}]} , 
 	{ "Name" : "data_out_V", "interface" : "memory", "bitwidth" : 30, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":29,"cElement": [{"cName": "data_out.V","cData": "int30","bit_use": { "low": 0,"up": 29},"cArray": [{"low" : 0,"up" : 4,"step" : 1}]}]}]} ]}
# RTL Port declarations: 
set portNum 13
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ data_in_V_address0 sc_out sc_lv 3 signal 0 } 
	{ data_in_V_ce0 sc_out sc_logic 1 signal 0 } 
	{ data_in_V_q0 sc_in sc_lv 30 signal 0 } 
	{ data_out_V_address0 sc_out sc_lv 3 signal 1 } 
	{ data_out_V_ce0 sc_out sc_logic 1 signal 1 } 
	{ data_out_V_we0 sc_out sc_logic 1 signal 1 } 
	{ data_out_V_d0 sc_out sc_lv 30 signal 1 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "data_in_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "data_in_V", "role": "address0" }} , 
 	{ "name": "data_in_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "data_in_V", "role": "ce0" }} , 
 	{ "name": "data_in_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":30, "type": "signal", "bundle":{"name": "data_in_V", "role": "q0" }} , 
 	{ "name": "data_out_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "data_out_V", "role": "address0" }} , 
 	{ "name": "data_out_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "data_out_V", "role": "ce0" }} , 
 	{ "name": "data_out_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "data_out_V", "role": "we0" }} , 
 	{ "name": "data_out_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":30, "type": "signal", "bundle":{"name": "data_out_V", "role": "d0" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1"],
		"CDFG" : "myproject",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "323", "EstimateLatencyMax" : "323",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "data_in_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "data_out_V", "Type" : "Memory", "Direction" : "O"}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.accum_V_U", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
	myproject {
		data_in_V {Type I LastRead 13 FirstWrite -1}
		data_out_V {Type O LastRead -1 FirstWrite 18}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "323", "Max" : "323"}
	, {"Name" : "Interval", "Min" : "324", "Max" : "324"}
]}

set PipelineEnableSignalInfo {[
	{"Pipeline" : "5", "EnableSignal" : "ap_enable_pp5"}
]}

set Spec2ImplPortList { 
	data_in_V { ap_memory {  { data_in_V_address0 mem_address 1 3 }  { data_in_V_ce0 mem_ce 1 1 }  { data_in_V_q0 mem_dout 0 30 } } }
	data_out_V { ap_memory {  { data_out_V_address0 mem_address 1 3 }  { data_out_V_ce0 mem_ce 1 1 }  { data_out_V_we0 mem_we 1 1 }  { data_out_V_d0 mem_din 1 30 } } }
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
