set moduleName compute
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
set C_modelName {compute}
set C_modelType { void 0 }
set C_modelArgList {
	{ flag int 1 regular  }
	{ local_A_0_V int 512 regular {array 16 { 1 3 } 1 1 }  }
	{ local_B_V int 512 regular {array 16 { 1 3 } 1 1 }  }
	{ local_C_V int 512 regular {array 16 { 1 0 } 1 1 }  }
	{ alpha float 32 regular  }
}
set C_modelArgMapList {[ 
	{ "Name" : "flag", "interface" : "wire", "bitwidth" : 1, "direction" : "READONLY"} , 
 	{ "Name" : "local_A_0_V", "interface" : "memory", "bitwidth" : 512, "direction" : "READONLY"} , 
 	{ "Name" : "local_B_V", "interface" : "memory", "bitwidth" : 512, "direction" : "READONLY"} , 
 	{ "Name" : "local_C_V", "interface" : "memory", "bitwidth" : 512, "direction" : "READWRITE"} , 
 	{ "Name" : "alpha", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY"} ]}
# RTL Port declarations: 
set portNum 21
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ flag sc_in sc_lv 1 signal 0 } 
	{ local_A_0_V_address0 sc_out sc_lv 4 signal 1 } 
	{ local_A_0_V_ce0 sc_out sc_logic 1 signal 1 } 
	{ local_A_0_V_q0 sc_in sc_lv 512 signal 1 } 
	{ local_B_V_address0 sc_out sc_lv 4 signal 2 } 
	{ local_B_V_ce0 sc_out sc_logic 1 signal 2 } 
	{ local_B_V_q0 sc_in sc_lv 512 signal 2 } 
	{ local_C_V_address0 sc_out sc_lv 4 signal 3 } 
	{ local_C_V_ce0 sc_out sc_logic 1 signal 3 } 
	{ local_C_V_q0 sc_in sc_lv 512 signal 3 } 
	{ local_C_V_address1 sc_out sc_lv 4 signal 3 } 
	{ local_C_V_ce1 sc_out sc_logic 1 signal 3 } 
	{ local_C_V_we1 sc_out sc_logic 1 signal 3 } 
	{ local_C_V_d1 sc_out sc_lv 512 signal 3 } 
	{ alpha sc_in sc_lv 32 signal 4 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "flag", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "flag", "role": "default" }} , 
 	{ "name": "local_A_0_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "local_A_0_V", "role": "address0" }} , 
 	{ "name": "local_A_0_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "local_A_0_V", "role": "ce0" }} , 
 	{ "name": "local_A_0_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":512, "type": "signal", "bundle":{"name": "local_A_0_V", "role": "q0" }} , 
 	{ "name": "local_B_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "local_B_V", "role": "address0" }} , 
 	{ "name": "local_B_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "local_B_V", "role": "ce0" }} , 
 	{ "name": "local_B_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":512, "type": "signal", "bundle":{"name": "local_B_V", "role": "q0" }} , 
 	{ "name": "local_C_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "local_C_V", "role": "address0" }} , 
 	{ "name": "local_C_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "local_C_V", "role": "ce0" }} , 
 	{ "name": "local_C_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":512, "type": "signal", "bundle":{"name": "local_C_V", "role": "q0" }} , 
 	{ "name": "local_C_V_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "local_C_V", "role": "address1" }} , 
 	{ "name": "local_C_V_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "local_C_V", "role": "ce1" }} , 
 	{ "name": "local_C_V_we1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "local_C_V", "role": "we1" }} , 
 	{ "name": "local_C_V_d1", "direction": "out", "datatype": "sc_lv", "bitwidth":512, "type": "signal", "bundle":{"name": "local_C_V", "role": "d1" }} , 
 	{ "name": "alpha", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "alpha", "role": "default" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "2", "3", "4", "5", "6", "7", "8", "9", "10", "11", "12", "13", "14", "15", "16", "17", "18", "19", "20", "21", "22", "23", "24", "25", "26", "27", "28", "29", "30", "31", "32", "33"],
		"CDFG" : "compute",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "1", "EstimateLatencyMax" : "275",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"DependenceCheck" : [
			{"FromInitialState" : "ap_enable_state11_pp0_iter9_stage0", "FromInitialIteration" : "ap_enable_reg_pp0_iter9", "FromInitialOperation" : "ap_enable_operation_135", "FromInitialSV" : "10", "FromFinalState" : "ap_enable_state12_pp0_iter10_stage0", "FromFinalIteration" : "ap_enable_reg_pp0_iter10", "FromFinalOperation" : "ap_enable_operation_152", "FromFinalSV" : "11", "FromAddress" : "local_C_V_address0", "FromType" : "R", "ToInitialState" : "ap_enable_state20_pp0_iter18_stage0", "ToInitialIteration" : "ap_enable_reg_pp0_iter18", "ToInitialNextIteration" : "null", "ToInitialOperation" : "ap_enable_operation_335", "ToInitialSV" : "19", "ToFinalState" : "ap_enable_state20_pp0_iter18_stage0", "ToFinalIteration" : "ap_enable_reg_pp0_iter18", "ToFinalOperation" : "ap_enable_operation_335", "ToFinalSV" : "19", "ToAddress" : "local_C_V_address1", "ToType" : "W", "PipelineBlock" : "ap_block_pp0", "AddressWidth" : "4", "II" : "1", "Pragma" : "(kernel_gemm.cpp:25:1)", "Type" : "WAR"},
			{"FromInitialState" : "ap_enable_state20_pp0_iter18_stage0", "FromInitialIteration" : "ap_enable_reg_pp0_iter18", "FromInitialOperation" : "ap_enable_operation_335", "FromInitialSV" : "19", "FromFinalState" : "ap_enable_state20_pp0_iter18_stage0", "FromFinalIteration" : "ap_enable_reg_pp0_iter18", "FromFinalOperation" : "ap_enable_operation_335", "FromFinalSV" : "19", "FromAddress" : "local_C_V_address1", "FromType" : "W", "ToInitialState" : "ap_enable_state11_pp0_iter9_stage0", "ToInitialIteration" : "ap_enable_reg_pp0_iter9", "ToInitialNextIteration" : "ap_enable_reg_pp0_iter10", "ToInitialOperation" : "ap_enable_operation_135", "ToInitialSV" : "10", "ToFinalState" : "ap_enable_state12_pp0_iter10_stage0", "ToFinalIteration" : "ap_enable_reg_pp0_iter10", "ToFinalOperation" : "ap_enable_operation_152", "ToFinalSV" : "11", "ToAddress" : "local_C_V_address0", "ToType" : "R", "PipelineBlock" : "ap_block_pp0", "AddressWidth" : "4", "II" : "1", "Pragma" : "(kernel_gemm.cpp:25:1)", "Type" : "RAW", "StateEnableSignalListForFifoShift" : ["ap_enable_state11_pp0_iter9_stage0", "ap_enable_state12_pp0_iter10_stage0", "ap_enable_state20_pp0_iter18_stage0"]}],
		"Port" : [
			{"Name" : "flag", "Type" : "None", "Direction" : "I"},
			{"Name" : "local_A_0_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "local_B_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "local_C_V", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "alpha", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.kernel_gemm_fadd_bkb_U10", "Parent" : "0"},
	{"ID" : "2", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.kernel_gemm_fadd_bkb_U11", "Parent" : "0"},
	{"ID" : "3", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.kernel_gemm_fadd_bkb_U12", "Parent" : "0"},
	{"ID" : "4", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.kernel_gemm_fadd_bkb_U13", "Parent" : "0"},
	{"ID" : "5", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.kernel_gemm_fadd_bkb_U14", "Parent" : "0"},
	{"ID" : "6", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.kernel_gemm_fadd_bkb_U15", "Parent" : "0"},
	{"ID" : "7", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.kernel_gemm_fadd_bkb_U16", "Parent" : "0"},
	{"ID" : "8", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.kernel_gemm_fadd_bkb_U17", "Parent" : "0"},
	{"ID" : "9", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.kernel_gemm_fadd_bkb_U18", "Parent" : "0"},
	{"ID" : "10", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.kernel_gemm_fadd_bkb_U19", "Parent" : "0"},
	{"ID" : "11", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.kernel_gemm_fadd_bkb_U20", "Parent" : "0"},
	{"ID" : "12", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.kernel_gemm_fadd_bkb_U21", "Parent" : "0"},
	{"ID" : "13", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.kernel_gemm_fadd_bkb_U22", "Parent" : "0"},
	{"ID" : "14", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.kernel_gemm_fadd_bkb_U23", "Parent" : "0"},
	{"ID" : "15", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.kernel_gemm_fadd_bkb_U24", "Parent" : "0"},
	{"ID" : "16", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.kernel_gemm_fadd_bkb_U25", "Parent" : "0"},
	{"ID" : "17", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.kernel_gemm_fmul_cud_U26", "Parent" : "0"},
	{"ID" : "18", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.kernel_gemm_fmul_cud_U27", "Parent" : "0"},
	{"ID" : "19", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.kernel_gemm_fmul_cud_U28", "Parent" : "0"},
	{"ID" : "20", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.kernel_gemm_fmul_cud_U29", "Parent" : "0"},
	{"ID" : "21", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.kernel_gemm_fmul_cud_U30", "Parent" : "0"},
	{"ID" : "22", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.kernel_gemm_fmul_cud_U31", "Parent" : "0"},
	{"ID" : "23", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.kernel_gemm_fmul_cud_U32", "Parent" : "0"},
	{"ID" : "24", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.kernel_gemm_fmul_cud_U33", "Parent" : "0"},
	{"ID" : "25", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.kernel_gemm_fmul_cud_U34", "Parent" : "0"},
	{"ID" : "26", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.kernel_gemm_fmul_cud_U35", "Parent" : "0"},
	{"ID" : "27", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.kernel_gemm_fmul_cud_U36", "Parent" : "0"},
	{"ID" : "28", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.kernel_gemm_fmul_cud_U37", "Parent" : "0"},
	{"ID" : "29", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.kernel_gemm_fmul_cud_U38", "Parent" : "0"},
	{"ID" : "30", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.kernel_gemm_fmul_cud_U39", "Parent" : "0"},
	{"ID" : "31", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.kernel_gemm_fmul_cud_U40", "Parent" : "0"},
	{"ID" : "32", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.kernel_gemm_fmul_cud_U41", "Parent" : "0"},
	{"ID" : "33", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.kernel_gemm_fmul_cud_U42", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
	compute {
		flag {Type I LastRead 0 FirstWrite -1}
		local_A_0_V {Type I LastRead 1 FirstWrite -1}
		local_B_V {Type I LastRead 6 FirstWrite -1}
		local_C_V {Type IO LastRead 10 FirstWrite 19}
		alpha {Type I LastRead 0 FirstWrite -1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "1", "Max" : "275"}
	, {"Name" : "Interval", "Min" : "1", "Max" : "275"}
]}

set PipelineEnableSignalInfo {[
	{"Pipeline" : "0", "EnableSignal" : "ap_enable_pp0"}
]}

set Spec2ImplPortList { 
	flag { ap_none {  { flag in_data 0 1 } } }
	local_A_0_V { ap_memory {  { local_A_0_V_address0 mem_address 1 4 }  { local_A_0_V_ce0 mem_ce 1 1 }  { local_A_0_V_q0 mem_dout 0 512 } } }
	local_B_V { ap_memory {  { local_B_V_address0 mem_address 1 4 }  { local_B_V_ce0 mem_ce 1 1 }  { local_B_V_q0 mem_dout 0 512 } } }
	local_C_V { ap_memory {  { local_C_V_address0 mem_address 1 4 }  { local_C_V_ce0 mem_ce 1 1 }  { local_C_V_q0 mem_dout 0 512 }  { local_C_V_address1 MemPortADDR2 1 4 }  { local_C_V_ce1 MemPortCE2 1 1 }  { local_C_V_we1 MemPortWE2 1 1 }  { local_C_V_d1 MemPortDIN2 1 512 } } }
	alpha { ap_none {  { alpha in_data 0 32 } } }
}
