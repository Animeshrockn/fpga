set moduleName kernel_gemm
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
set C_modelName {kernel_gemm}
set C_modelType { void 0 }
set C_modelArgList {
	{ func_bus float 32 regular {axi_master 2}  }
	{ C int 32 regular {axi_slave 0}  }
	{ A int 32 regular {axi_slave 0}  }
	{ B int 32 regular {axi_slave 0}  }
	{ alpha float 32 regular  }
	{ beta float 32 regular  }
}
set C_modelArgMapList {[ 
	{ "Name" : "func_bus", "interface" : "axi_master", "bitwidth" : 32, "direction" : "READWRITE", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "C","cData": "float","bit_use": { "low": 0,"up": 31},"offset": { "type": "dynamic","port_name": "C","bundle": "ctrl_bus"},"direction": "READWRITE","cArray": [{"low" : 0,"up" : 4194303,"step" : 1}]},{"cName": "A","cData": "float","bit_use": { "low": 0,"up": 31},"offset": { "type": "dynamic","port_name": "A","bundle": "ctrl_bus"},"direction": "READONLY","cArray": [{"low" : 0,"up" : 4194303,"step" : 1}]},{"cName": "B","cData": "float","bit_use": { "low": 0,"up": 31},"offset": { "type": "dynamic","port_name": "B","bundle": "ctrl_bus"},"direction": "READONLY","cArray": [{"low" : 0,"up" : 4194303,"step" : 1}]}]}]} , 
 	{ "Name" : "C", "interface" : "axi_slave", "bundle":"ctrl_bus","type":"ap_none","bitwidth" : 32, "direction" : "READONLY", "offset" : {"in":16}, "offset_end" : {"in":23}} , 
 	{ "Name" : "A", "interface" : "axi_slave", "bundle":"ctrl_bus","type":"ap_none","bitwidth" : 32, "direction" : "READONLY", "offset" : {"in":24}, "offset_end" : {"in":31}} , 
 	{ "Name" : "B", "interface" : "axi_slave", "bundle":"ctrl_bus","type":"ap_none","bitwidth" : 32, "direction" : "READONLY", "offset" : {"in":32}, "offset_end" : {"in":39}} , 
 	{ "Name" : "alpha", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "alpha","cData": "float","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 0,"step" : 0}]}]}]} , 
 	{ "Name" : "beta", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "beta","cData": "float","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 0,"step" : 0}]}]}]} ]}
# RTL Port declarations: 
set portNum 67
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst_n sc_in sc_logic 1 reset -1 active_low_sync } 
	{ m_axi_func_bus_AWVALID sc_out sc_logic 1 signal 0 } 
	{ m_axi_func_bus_AWREADY sc_in sc_logic 1 signal 0 } 
	{ m_axi_func_bus_AWADDR sc_out sc_lv 32 signal 0 } 
	{ m_axi_func_bus_AWID sc_out sc_lv 1 signal 0 } 
	{ m_axi_func_bus_AWLEN sc_out sc_lv 8 signal 0 } 
	{ m_axi_func_bus_AWSIZE sc_out sc_lv 3 signal 0 } 
	{ m_axi_func_bus_AWBURST sc_out sc_lv 2 signal 0 } 
	{ m_axi_func_bus_AWLOCK sc_out sc_lv 2 signal 0 } 
	{ m_axi_func_bus_AWCACHE sc_out sc_lv 4 signal 0 } 
	{ m_axi_func_bus_AWPROT sc_out sc_lv 3 signal 0 } 
	{ m_axi_func_bus_AWQOS sc_out sc_lv 4 signal 0 } 
	{ m_axi_func_bus_AWREGION sc_out sc_lv 4 signal 0 } 
	{ m_axi_func_bus_AWUSER sc_out sc_lv 1 signal 0 } 
	{ m_axi_func_bus_WVALID sc_out sc_logic 1 signal 0 } 
	{ m_axi_func_bus_WREADY sc_in sc_logic 1 signal 0 } 
	{ m_axi_func_bus_WDATA sc_out sc_lv 32 signal 0 } 
	{ m_axi_func_bus_WSTRB sc_out sc_lv 4 signal 0 } 
	{ m_axi_func_bus_WLAST sc_out sc_logic 1 signal 0 } 
	{ m_axi_func_bus_WID sc_out sc_lv 1 signal 0 } 
	{ m_axi_func_bus_WUSER sc_out sc_lv 1 signal 0 } 
	{ m_axi_func_bus_ARVALID sc_out sc_logic 1 signal 0 } 
	{ m_axi_func_bus_ARREADY sc_in sc_logic 1 signal 0 } 
	{ m_axi_func_bus_ARADDR sc_out sc_lv 32 signal 0 } 
	{ m_axi_func_bus_ARID sc_out sc_lv 1 signal 0 } 
	{ m_axi_func_bus_ARLEN sc_out sc_lv 8 signal 0 } 
	{ m_axi_func_bus_ARSIZE sc_out sc_lv 3 signal 0 } 
	{ m_axi_func_bus_ARBURST sc_out sc_lv 2 signal 0 } 
	{ m_axi_func_bus_ARLOCK sc_out sc_lv 2 signal 0 } 
	{ m_axi_func_bus_ARCACHE sc_out sc_lv 4 signal 0 } 
	{ m_axi_func_bus_ARPROT sc_out sc_lv 3 signal 0 } 
	{ m_axi_func_bus_ARQOS sc_out sc_lv 4 signal 0 } 
	{ m_axi_func_bus_ARREGION sc_out sc_lv 4 signal 0 } 
	{ m_axi_func_bus_ARUSER sc_out sc_lv 1 signal 0 } 
	{ m_axi_func_bus_RVALID sc_in sc_logic 1 signal 0 } 
	{ m_axi_func_bus_RREADY sc_out sc_logic 1 signal 0 } 
	{ m_axi_func_bus_RDATA sc_in sc_lv 32 signal 0 } 
	{ m_axi_func_bus_RLAST sc_in sc_logic 1 signal 0 } 
	{ m_axi_func_bus_RID sc_in sc_lv 1 signal 0 } 
	{ m_axi_func_bus_RUSER sc_in sc_lv 1 signal 0 } 
	{ m_axi_func_bus_RRESP sc_in sc_lv 2 signal 0 } 
	{ m_axi_func_bus_BVALID sc_in sc_logic 1 signal 0 } 
	{ m_axi_func_bus_BREADY sc_out sc_logic 1 signal 0 } 
	{ m_axi_func_bus_BRESP sc_in sc_lv 2 signal 0 } 
	{ m_axi_func_bus_BID sc_in sc_lv 1 signal 0 } 
	{ m_axi_func_bus_BUSER sc_in sc_lv 1 signal 0 } 
	{ alpha sc_in sc_lv 32 signal 4 } 
	{ beta sc_in sc_lv 32 signal 5 } 
	{ s_axi_ctrl_bus_AWVALID sc_in sc_logic 1 signal -1 } 
	{ s_axi_ctrl_bus_AWREADY sc_out sc_logic 1 signal -1 } 
	{ s_axi_ctrl_bus_AWADDR sc_in sc_lv 6 signal -1 } 
	{ s_axi_ctrl_bus_WVALID sc_in sc_logic 1 signal -1 } 
	{ s_axi_ctrl_bus_WREADY sc_out sc_logic 1 signal -1 } 
	{ s_axi_ctrl_bus_WDATA sc_in sc_lv 32 signal -1 } 
	{ s_axi_ctrl_bus_WSTRB sc_in sc_lv 4 signal -1 } 
	{ s_axi_ctrl_bus_ARVALID sc_in sc_logic 1 signal -1 } 
	{ s_axi_ctrl_bus_ARREADY sc_out sc_logic 1 signal -1 } 
	{ s_axi_ctrl_bus_ARADDR sc_in sc_lv 6 signal -1 } 
	{ s_axi_ctrl_bus_RVALID sc_out sc_logic 1 signal -1 } 
	{ s_axi_ctrl_bus_RREADY sc_in sc_logic 1 signal -1 } 
	{ s_axi_ctrl_bus_RDATA sc_out sc_lv 32 signal -1 } 
	{ s_axi_ctrl_bus_RRESP sc_out sc_lv 2 signal -1 } 
	{ s_axi_ctrl_bus_BVALID sc_out sc_logic 1 signal -1 } 
	{ s_axi_ctrl_bus_BREADY sc_in sc_logic 1 signal -1 } 
	{ s_axi_ctrl_bus_BRESP sc_out sc_lv 2 signal -1 } 
	{ interrupt sc_out sc_logic 1 signal -1 } 
}
set NewPortList {[ 
	{ "name": "s_axi_ctrl_bus_AWADDR", "direction": "in", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "ctrl_bus", "role": "AWADDR" },"address":[{"name":"kernel_gemm","role":"start","value":"0","valid_bit":"0"},{"name":"kernel_gemm","role":"continue","value":"0","valid_bit":"4"},{"name":"kernel_gemm","role":"auto_start","value":"0","valid_bit":"7"},{"name":"C","role":"data","value":"16"},{"name":"A","role":"data","value":"24"},{"name":"B","role":"data","value":"32"}] },
	{ "name": "s_axi_ctrl_bus_AWVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ctrl_bus", "role": "AWVALID" } },
	{ "name": "s_axi_ctrl_bus_AWREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ctrl_bus", "role": "AWREADY" } },
	{ "name": "s_axi_ctrl_bus_WVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ctrl_bus", "role": "WVALID" } },
	{ "name": "s_axi_ctrl_bus_WREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ctrl_bus", "role": "WREADY" } },
	{ "name": "s_axi_ctrl_bus_WDATA", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ctrl_bus", "role": "WDATA" } },
	{ "name": "s_axi_ctrl_bus_WSTRB", "direction": "in", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "ctrl_bus", "role": "WSTRB" } },
	{ "name": "s_axi_ctrl_bus_ARADDR", "direction": "in", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "ctrl_bus", "role": "ARADDR" },"address":[{"name":"kernel_gemm","role":"start","value":"0","valid_bit":"0"},{"name":"kernel_gemm","role":"done","value":"0","valid_bit":"1"},{"name":"kernel_gemm","role":"idle","value":"0","valid_bit":"2"},{"name":"kernel_gemm","role":"ready","value":"0","valid_bit":"3"},{"name":"kernel_gemm","role":"auto_start","value":"0","valid_bit":"7"}] },
	{ "name": "s_axi_ctrl_bus_ARVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ctrl_bus", "role": "ARVALID" } },
	{ "name": "s_axi_ctrl_bus_ARREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ctrl_bus", "role": "ARREADY" } },
	{ "name": "s_axi_ctrl_bus_RVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ctrl_bus", "role": "RVALID" } },
	{ "name": "s_axi_ctrl_bus_RREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ctrl_bus", "role": "RREADY" } },
	{ "name": "s_axi_ctrl_bus_RDATA", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ctrl_bus", "role": "RDATA" } },
	{ "name": "s_axi_ctrl_bus_RRESP", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "ctrl_bus", "role": "RRESP" } },
	{ "name": "s_axi_ctrl_bus_BVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ctrl_bus", "role": "BVALID" } },
	{ "name": "s_axi_ctrl_bus_BREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ctrl_bus", "role": "BREADY" } },
	{ "name": "s_axi_ctrl_bus_BRESP", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "ctrl_bus", "role": "BRESP" } },
	{ "name": "interrupt", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ctrl_bus", "role": "interrupt" } }, 
 	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst_n", "role": "default" }} , 
 	{ "name": "m_axi_func_bus_AWVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "func_bus", "role": "AWVALID" }} , 
 	{ "name": "m_axi_func_bus_AWREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "func_bus", "role": "AWREADY" }} , 
 	{ "name": "m_axi_func_bus_AWADDR", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "func_bus", "role": "AWADDR" }} , 
 	{ "name": "m_axi_func_bus_AWID", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "func_bus", "role": "AWID" }} , 
 	{ "name": "m_axi_func_bus_AWLEN", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "func_bus", "role": "AWLEN" }} , 
 	{ "name": "m_axi_func_bus_AWSIZE", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "func_bus", "role": "AWSIZE" }} , 
 	{ "name": "m_axi_func_bus_AWBURST", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "func_bus", "role": "AWBURST" }} , 
 	{ "name": "m_axi_func_bus_AWLOCK", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "func_bus", "role": "AWLOCK" }} , 
 	{ "name": "m_axi_func_bus_AWCACHE", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "func_bus", "role": "AWCACHE" }} , 
 	{ "name": "m_axi_func_bus_AWPROT", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "func_bus", "role": "AWPROT" }} , 
 	{ "name": "m_axi_func_bus_AWQOS", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "func_bus", "role": "AWQOS" }} , 
 	{ "name": "m_axi_func_bus_AWREGION", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "func_bus", "role": "AWREGION" }} , 
 	{ "name": "m_axi_func_bus_AWUSER", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "func_bus", "role": "AWUSER" }} , 
 	{ "name": "m_axi_func_bus_WVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "func_bus", "role": "WVALID" }} , 
 	{ "name": "m_axi_func_bus_WREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "func_bus", "role": "WREADY" }} , 
 	{ "name": "m_axi_func_bus_WDATA", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "func_bus", "role": "WDATA" }} , 
 	{ "name": "m_axi_func_bus_WSTRB", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "func_bus", "role": "WSTRB" }} , 
 	{ "name": "m_axi_func_bus_WLAST", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "func_bus", "role": "WLAST" }} , 
 	{ "name": "m_axi_func_bus_WID", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "func_bus", "role": "WID" }} , 
 	{ "name": "m_axi_func_bus_WUSER", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "func_bus", "role": "WUSER" }} , 
 	{ "name": "m_axi_func_bus_ARVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "func_bus", "role": "ARVALID" }} , 
 	{ "name": "m_axi_func_bus_ARREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "func_bus", "role": "ARREADY" }} , 
 	{ "name": "m_axi_func_bus_ARADDR", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "func_bus", "role": "ARADDR" }} , 
 	{ "name": "m_axi_func_bus_ARID", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "func_bus", "role": "ARID" }} , 
 	{ "name": "m_axi_func_bus_ARLEN", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "func_bus", "role": "ARLEN" }} , 
 	{ "name": "m_axi_func_bus_ARSIZE", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "func_bus", "role": "ARSIZE" }} , 
 	{ "name": "m_axi_func_bus_ARBURST", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "func_bus", "role": "ARBURST" }} , 
 	{ "name": "m_axi_func_bus_ARLOCK", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "func_bus", "role": "ARLOCK" }} , 
 	{ "name": "m_axi_func_bus_ARCACHE", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "func_bus", "role": "ARCACHE" }} , 
 	{ "name": "m_axi_func_bus_ARPROT", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "func_bus", "role": "ARPROT" }} , 
 	{ "name": "m_axi_func_bus_ARQOS", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "func_bus", "role": "ARQOS" }} , 
 	{ "name": "m_axi_func_bus_ARREGION", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "func_bus", "role": "ARREGION" }} , 
 	{ "name": "m_axi_func_bus_ARUSER", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "func_bus", "role": "ARUSER" }} , 
 	{ "name": "m_axi_func_bus_RVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "func_bus", "role": "RVALID" }} , 
 	{ "name": "m_axi_func_bus_RREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "func_bus", "role": "RREADY" }} , 
 	{ "name": "m_axi_func_bus_RDATA", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "func_bus", "role": "RDATA" }} , 
 	{ "name": "m_axi_func_bus_RLAST", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "func_bus", "role": "RLAST" }} , 
 	{ "name": "m_axi_func_bus_RID", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "func_bus", "role": "RID" }} , 
 	{ "name": "m_axi_func_bus_RUSER", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "func_bus", "role": "RUSER" }} , 
 	{ "name": "m_axi_func_bus_RRESP", "direction": "in", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "func_bus", "role": "RRESP" }} , 
 	{ "name": "m_axi_func_bus_BVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "func_bus", "role": "BVALID" }} , 
 	{ "name": "m_axi_func_bus_BREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "func_bus", "role": "BREADY" }} , 
 	{ "name": "m_axi_func_bus_BRESP", "direction": "in", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "func_bus", "role": "BRESP" }} , 
 	{ "name": "m_axi_func_bus_BID", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "func_bus", "role": "BID" }} , 
 	{ "name": "m_axi_func_bus_BUSER", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "func_bus", "role": "BUSER" }} , 
 	{ "name": "alpha", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "alpha", "role": "default" }} , 
 	{ "name": "beta", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "beta", "role": "default" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "2", "3", "4"],
		"CDFG" : "kernel_gemm",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "257731620865", "EstimateLatencyMax" : "257731620865",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "func_bus", "Type" : "MAXI", "Direction" : "IO",
				"BlockSignal" : [
					{"Name" : "func_bus_blk_n_AR", "Type" : "RtlSignal"},
					{"Name" : "func_bus_blk_n_AW", "Type" : "RtlSignal"},
					{"Name" : "func_bus_blk_n_B", "Type" : "RtlSignal"},
					{"Name" : "func_bus_blk_n_R", "Type" : "RtlSignal"},
					{"Name" : "func_bus_blk_n_W", "Type" : "RtlSignal"}]},
			{"Name" : "C", "Type" : "None", "Direction" : "I"},
			{"Name" : "A", "Type" : "None", "Direction" : "I"},
			{"Name" : "B", "Type" : "None", "Direction" : "I"},
			{"Name" : "alpha", "Type" : "None", "Direction" : "I"},
			{"Name" : "beta", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.kernel_gemm_ctrl_bus_s_axi_U", "Parent" : "0"},
	{"ID" : "2", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.kernel_gemm_func_bus_m_axi_U", "Parent" : "0"},
	{"ID" : "3", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.kernel_gemm_fadd_bkb_U1", "Parent" : "0"},
	{"ID" : "4", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.kernel_gemm_fmul_cud_U2", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
	kernel_gemm {
		func_bus {Type IO LastRead 40 FirstWrite 14}
		C {Type I LastRead 0 FirstWrite -1}
		A {Type I LastRead 0 FirstWrite -1}
		B {Type I LastRead 0 FirstWrite -1}
		alpha {Type I LastRead 0 FirstWrite -1}
		beta {Type I LastRead 0 FirstWrite -1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "257731620865", "Max" : "257731620865"}
	, {"Name" : "Interval", "Min" : "33583106", "Max" : "33583106"}
]}

set PipelineEnableSignalInfo {[
]}

set Spec2ImplPortList { 
	func_bus { m_axi {  { m_axi_func_bus_AWVALID VALID 1 1 }  { m_axi_func_bus_AWREADY READY 0 1 }  { m_axi_func_bus_AWADDR ADDR 1 32 }  { m_axi_func_bus_AWID ID 1 1 }  { m_axi_func_bus_AWLEN LEN 1 8 }  { m_axi_func_bus_AWSIZE SIZE 1 3 }  { m_axi_func_bus_AWBURST BURST 1 2 }  { m_axi_func_bus_AWLOCK LOCK 1 2 }  { m_axi_func_bus_AWCACHE CACHE 1 4 }  { m_axi_func_bus_AWPROT PROT 1 3 }  { m_axi_func_bus_AWQOS QOS 1 4 }  { m_axi_func_bus_AWREGION REGION 1 4 }  { m_axi_func_bus_AWUSER USER 1 1 }  { m_axi_func_bus_WVALID VALID 1 1 }  { m_axi_func_bus_WREADY READY 0 1 }  { m_axi_func_bus_WDATA DATA 1 32 }  { m_axi_func_bus_WSTRB STRB 1 4 }  { m_axi_func_bus_WLAST LAST 1 1 }  { m_axi_func_bus_WID ID 1 1 }  { m_axi_func_bus_WUSER USER 1 1 }  { m_axi_func_bus_ARVALID VALID 1 1 }  { m_axi_func_bus_ARREADY READY 0 1 }  { m_axi_func_bus_ARADDR ADDR 1 32 }  { m_axi_func_bus_ARID ID 1 1 }  { m_axi_func_bus_ARLEN LEN 1 8 }  { m_axi_func_bus_ARSIZE SIZE 1 3 }  { m_axi_func_bus_ARBURST BURST 1 2 }  { m_axi_func_bus_ARLOCK LOCK 1 2 }  { m_axi_func_bus_ARCACHE CACHE 1 4 }  { m_axi_func_bus_ARPROT PROT 1 3 }  { m_axi_func_bus_ARQOS QOS 1 4 }  { m_axi_func_bus_ARREGION REGION 1 4 }  { m_axi_func_bus_ARUSER USER 1 1 }  { m_axi_func_bus_RVALID VALID 0 1 }  { m_axi_func_bus_RREADY READY 1 1 }  { m_axi_func_bus_RDATA DATA 0 32 }  { m_axi_func_bus_RLAST LAST 0 1 }  { m_axi_func_bus_RID ID 0 1 }  { m_axi_func_bus_RUSER USER 0 1 }  { m_axi_func_bus_RRESP RESP 0 2 }  { m_axi_func_bus_BVALID VALID 0 1 }  { m_axi_func_bus_BREADY READY 1 1 }  { m_axi_func_bus_BRESP RESP 0 2 }  { m_axi_func_bus_BID ID 0 1 }  { m_axi_func_bus_BUSER USER 0 1 } } }
	alpha { ap_none {  { alpha in_data 0 32 } } }
	beta { ap_none {  { beta in_data 0 32 } } }
}

set busDeadlockParameterList { 
	{ func_bus { NUM_READ_OUTSTANDING 16 NUM_WRITE_OUTSTANDING 16 MAX_READ_BURST_LENGTH 16 MAX_WRITE_BURST_LENGTH 16 } } \
}

# RTL port scheduling information:
set fifoSchedulingInfoList { 
}

# RTL bus port read request latency information:
set busReadReqLatencyList { 
	{ func_bus 1 }
}

# RTL bus port write response latency information:
set busWriteResLatencyList { 
	{ func_bus 1 }
}

# RTL array port load latency information:
set memoryLoadLatencyList { 
}
