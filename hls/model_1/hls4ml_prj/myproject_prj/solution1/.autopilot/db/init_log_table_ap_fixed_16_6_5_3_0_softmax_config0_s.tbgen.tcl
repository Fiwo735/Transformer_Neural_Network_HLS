set moduleName init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s
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
set C_modelName {init_log_table<ap_fixed<16, 6, 5, 3, 0>, softmax_config0>}
set C_modelType { void 0 }
set C_modelArgList {
	{ table_out_V int 16 regular {array 32768 { 0 3 } 0 1 }  }
}
set C_modelArgMapList {[ 
	{ "Name" : "table_out_V", "interface" : "memory", "bitwidth" : 16, "direction" : "WRITEONLY"} ]}
# RTL Port declarations: 
set portNum 10
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ table_out_V_address0 sc_out sc_lv 15 signal 0 } 
	{ table_out_V_ce0 sc_out sc_logic 1 signal 0 } 
	{ table_out_V_we0 sc_out sc_logic 1 signal 0 } 
	{ table_out_V_d0 sc_out sc_lv 16 signal 0 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "table_out_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":15, "type": "signal", "bundle":{"name": "table_out_V", "role": "address0" }} , 
 	{ "name": "table_out_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "table_out_V", "role": "ce0" }} , 
 	{ "name": "table_out_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "table_out_V", "role": "we0" }} , 
 	{ "name": "table_out_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "table_out_V", "role": "d0" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "2", "3"],
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
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.myproject_fpext_32ns_64_2_1_U117", "Parent" : "0"},
	{"ID" : "2", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.myproject_fcmp_32ns_32ns_1_2_1_U118", "Parent" : "0"},
	{"ID" : "3", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.myproject_flog_32ns_32ns_32_9_full_dsp_1_U119", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
	init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s {
		table_out_V {Type O LastRead -1 FirstWrite 15}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "491521", "Max" : "491521"}
	, {"Name" : "Interval", "Min" : "491521", "Max" : "491521"}
]}

set PipelineEnableSignalInfo {[
]}

set Spec2ImplPortList { 
	table_out_V { ap_memory {  { table_out_V_address0 mem_address 1 15 }  { table_out_V_ce0 mem_ce 1 1 }  { table_out_V_we0 mem_we 1 1 }  { table_out_V_d0 mem_din 1 16 } } }
}
set moduleName init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s
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
set C_modelName {init_log_table<ap_fixed<16, 6, 5, 3, 0>, softmax_config0>}
set C_modelType { void 0 }
set C_modelArgList {
	{ table_out_V int 16 regular {array 32768 { 0 3 } 0 1 }  }
}
set C_modelArgMapList {[ 
	{ "Name" : "table_out_V", "interface" : "memory", "bitwidth" : 16, "direction" : "WRITEONLY"} ]}
# RTL Port declarations: 
set portNum 10
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ table_out_V_address0 sc_out sc_lv 15 signal 0 } 
	{ table_out_V_ce0 sc_out sc_logic 1 signal 0 } 
	{ table_out_V_we0 sc_out sc_logic 1 signal 0 } 
	{ table_out_V_d0 sc_out sc_lv 16 signal 0 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "table_out_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":15, "type": "signal", "bundle":{"name": "table_out_V", "role": "address0" }} , 
 	{ "name": "table_out_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "table_out_V", "role": "ce0" }} , 
 	{ "name": "table_out_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "table_out_V", "role": "we0" }} , 
 	{ "name": "table_out_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "table_out_V", "role": "d0" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "2", "3"],
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
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.myproject_fpext_32ns_64_2_1_U117", "Parent" : "0"},
	{"ID" : "2", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.myproject_fcmp_32ns_32ns_1_2_1_U118", "Parent" : "0"},
	{"ID" : "3", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.myproject_flog_32ns_32ns_32_9_full_dsp_1_U119", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
	init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s {
		table_out_V {Type O LastRead -1 FirstWrite 15}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "491521", "Max" : "491521"}
	, {"Name" : "Interval", "Min" : "491521", "Max" : "491521"}
]}

set PipelineEnableSignalInfo {[
]}

set Spec2ImplPortList { 
	table_out_V { ap_memory {  { table_out_V_address0 mem_address 1 15 }  { table_out_V_ce0 mem_ce 1 1 }  { table_out_V_we0 mem_we 1 1 }  { table_out_V_d0 mem_din 1 16 } } }
}
set moduleName init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s
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
set C_modelName {init_log_table<ap_fixed<16, 6, 5, 3, 0>, softmax_config0>}
set C_modelType { void 0 }
set C_modelArgList {
	{ table_out_V int 16 regular {array 32768 { 0 3 } 0 1 }  }
}
set C_modelArgMapList {[ 
	{ "Name" : "table_out_V", "interface" : "memory", "bitwidth" : 16, "direction" : "WRITEONLY"} ]}
# RTL Port declarations: 
set portNum 10
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ table_out_V_address0 sc_out sc_lv 15 signal 0 } 
	{ table_out_V_ce0 sc_out sc_logic 1 signal 0 } 
	{ table_out_V_we0 sc_out sc_logic 1 signal 0 } 
	{ table_out_V_d0 sc_out sc_lv 16 signal 0 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "table_out_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":15, "type": "signal", "bundle":{"name": "table_out_V", "role": "address0" }} , 
 	{ "name": "table_out_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "table_out_V", "role": "ce0" }} , 
 	{ "name": "table_out_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "table_out_V", "role": "we0" }} , 
 	{ "name": "table_out_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "table_out_V", "role": "d0" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "2", "3"],
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
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.myproject_fpext_32ns_64_2_1_U426", "Parent" : "0"},
	{"ID" : "2", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.myproject_fcmp_32ns_32ns_1_2_1_U427", "Parent" : "0"},
	{"ID" : "3", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.myproject_flog_32ns_32ns_32_9_full_dsp_1_U428", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
	init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s {
		table_out_V {Type O LastRead -1 FirstWrite 15}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "491521", "Max" : "491521"}
	, {"Name" : "Interval", "Min" : "491521", "Max" : "491521"}
]}

set PipelineEnableSignalInfo {[
]}

set Spec2ImplPortList { 
	table_out_V { ap_memory {  { table_out_V_address0 mem_address 1 15 }  { table_out_V_ce0 mem_ce 1 1 }  { table_out_V_we0 mem_we 1 1 }  { table_out_V_d0 mem_din 1 16 } } }
}
set moduleName init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s
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
set C_modelName {init_log_table<ap_fixed<16, 6, 5, 3, 0>, softmax_config0>}
set C_modelType { void 0 }
set C_modelArgList {
	{ table_out_V int 16 regular {array 4096 { 0 0 } 0 1 }  }
}
set C_modelArgMapList {[ 
	{ "Name" : "table_out_V", "interface" : "memory", "bitwidth" : 16, "direction" : "WRITEONLY"} ]}
# RTL Port declarations: 
set portNum 14
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ table_out_V_address0 sc_out sc_lv 12 signal 0 } 
	{ table_out_V_ce0 sc_out sc_logic 1 signal 0 } 
	{ table_out_V_we0 sc_out sc_logic 1 signal 0 } 
	{ table_out_V_d0 sc_out sc_lv 16 signal 0 } 
	{ table_out_V_address1 sc_out sc_lv 12 signal 0 } 
	{ table_out_V_ce1 sc_out sc_logic 1 signal 0 } 
	{ table_out_V_we1 sc_out sc_logic 1 signal 0 } 
	{ table_out_V_d1 sc_out sc_lv 16 signal 0 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "table_out_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":12, "type": "signal", "bundle":{"name": "table_out_V", "role": "address0" }} , 
 	{ "name": "table_out_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "table_out_V", "role": "ce0" }} , 
 	{ "name": "table_out_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "table_out_V", "role": "we0" }} , 
 	{ "name": "table_out_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "table_out_V", "role": "d0" }} , 
 	{ "name": "table_out_V_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":12, "type": "signal", "bundle":{"name": "table_out_V", "role": "address1" }} , 
 	{ "name": "table_out_V_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "table_out_V", "role": "ce1" }} , 
 	{ "name": "table_out_V_we1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "table_out_V", "role": "we1" }} , 
 	{ "name": "table_out_V_d1", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "table_out_V", "role": "d1" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "2"],
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
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.myproject_fpext_32ns_64_2_1_U1023", "Parent" : "0"},
	{"ID" : "2", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.myproject_flog_32ns_32ns_32_9_full_dsp_1_U1024", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
	init_log_table_ap_fixed_16_6_5_3_0_softmax_config0_s {
		table_out_V {Type O LastRead -1 FirstWrite 0}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "2047", "Max" : "2047"}
	, {"Name" : "Interval", "Min" : "2047", "Max" : "2047"}
]}

set PipelineEnableSignalInfo {[
]}

set Spec2ImplPortList { 
	table_out_V { ap_memory {  { table_out_V_address0 mem_address 1 12 }  { table_out_V_ce0 mem_ce 1 1 }  { table_out_V_we0 mem_we 1 1 }  { table_out_V_d0 mem_din 1 16 }  { table_out_V_address1 MemPortADDR2 1 12 }  { table_out_V_ce1 MemPortCE2 1 1 }  { table_out_V_we1 MemPortWE2 1 1 }  { table_out_V_d1 MemPortDIN2 1 16 } } }
}
