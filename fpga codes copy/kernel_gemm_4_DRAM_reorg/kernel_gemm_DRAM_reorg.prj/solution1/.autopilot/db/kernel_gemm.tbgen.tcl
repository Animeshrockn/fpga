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
	{ gmem int 512 regular {axi_master 2}  }
	{ C_V int 32 regular {axi_slave 0}  }
	{ A_V int 32 regular {axi_slave 0}  }
	{ B_V int 32 regular {axi_slave 0}  }
	{ alpha float 32 regular  }
	{ beta float 32 regular  }
}
set C_modelArgMapList {[ 
	{ "Name" : "gmem", "interface" : "axi_master", "bitwidth" : 512, "direction" : "READWRITE", "bitSlice":[{"low":0,"up":511,"cElement": [{"cName": "C.V","cData": "int512","bit_use": { "low": 0,"up": 511},"offset": { "type": "dynamic","port_name": "C_V","bundle": "control"},"direction": "READWRITE","cArray": [{"low" : 0,"up" : 262143,"step" : 1}]},{"cName": "A.V","cData": "int512","bit_use": { "low": 0,"up": 511},"offset": { "type": "dynamic","port_name": "A_V","bundle": "control"},"direction": "READONLY","cArray": [{"low" : 0,"up" : 262143,"step" : 1}]},{"cName": "B.V","cData": "int512","bit_use": { "low": 0,"up": 511},"offset": { "type": "dynamic","port_name": "B_V","bundle": "control"},"direction": "READONLY","cArray": [{"low" : 0,"up" : 262143,"step" : 1}]}]}]} , 
 	{ "Name" : "C_V", "interface" : "axi_slave", "bundle":"control","type":"ap_none","bitwidth" : 32, "direction" : "READONLY", "offset" : {"in":16}, "offset_end" : {"in":23}} , 
 	{ "Name" : "A_V", "interface" : "axi_slave", "bundle":"control","type":"ap_none","bitwidth" : 32, "direction" : "READONLY", "offset" : {"in":24}, "offset_end" : {"in":31}} , 
 	{ "Name" : "B_V", "interface" : "axi_slave", "bundle":"control","type":"ap_none","bitwidth" : 32, "direction" : "READONLY", "offset" : {"in":32}, "offset_end" : {"in":39}} , 
 	{ "Name" : "alpha", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "alpha","cData": "float","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 0,"step" : 0}]}]}]} , 
 	{ "Name" : "beta", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "beta","cData": "float","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 0,"step" : 0}]}]}]} ]}
# RTL Port declarations: 
set portNum 67
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst_n sc_in sc_logic 1 reset -1 active_low_sync } 
	{ m_axi_gmem_AWVALID sc_out sc_logic 1 signal 0 } 
	{ m_axi_gmem_AWREADY sc_in sc_logic 1 signal 0 } 
	{ m_axi_gmem_AWADDR sc_out sc_lv 32 signal 0 } 
	{ m_axi_gmem_AWID sc_out sc_lv 1 signal 0 } 
	{ m_axi_gmem_AWLEN sc_out sc_lv 8 signal 0 } 
	{ m_axi_gmem_AWSIZE sc_out sc_lv 3 signal 0 } 
	{ m_axi_gmem_AWBURST sc_out sc_lv 2 signal 0 } 
	{ m_axi_gmem_AWLOCK sc_out sc_lv 2 signal 0 } 
	{ m_axi_gmem_AWCACHE sc_out sc_lv 4 signal 0 } 
	{ m_axi_gmem_AWPROT sc_out sc_lv 3 signal 0 } 
	{ m_axi_gmem_AWQOS sc_out sc_lv 4 signal 0 } 
	{ m_axi_gmem_AWREGION sc_out sc_lv 4 signal 0 } 
	{ m_axi_gmem_AWUSER sc_out sc_lv 1 signal 0 } 
	{ m_axi_gmem_WVALID sc_out sc_logic 1 signal 0 } 
	{ m_axi_gmem_WREADY sc_in sc_logic 1 signal 0 } 
	{ m_axi_gmem_WDATA sc_out sc_lv 512 signal 0 } 
	{ m_axi_gmem_WSTRB sc_out sc_lv 64 signal 0 } 
	{ m_axi_gmem_WLAST sc_out sc_logic 1 signal 0 } 
	{ m_axi_gmem_WID sc_out sc_lv 1 signal 0 } 
	{ m_axi_gmem_WUSER sc_out sc_lv 1 signal 0 } 
	{ m_axi_gmem_ARVALID sc_out sc_logic 1 signal 0 } 
	{ m_axi_gmem_ARREADY sc_in sc_logic 1 signal 0 } 
	{ m_axi_gmem_ARADDR sc_out sc_lv 32 signal 0 } 
	{ m_axi_gmem_ARID sc_out sc_lv 1 signal 0 } 
	{ m_axi_gmem_ARLEN sc_out sc_lv 8 signal 0 } 
	{ m_axi_gmem_ARSIZE sc_out sc_lv 3 signal 0 } 
	{ m_axi_gmem_ARBURST sc_out sc_lv 2 signal 0 } 
	{ m_axi_gmem_ARLOCK sc_out sc_lv 2 signal 0 } 
	{ m_axi_gmem_ARCACHE sc_out sc_lv 4 signal 0 } 
	{ m_axi_gmem_ARPROT sc_out sc_lv 3 signal 0 } 
	{ m_axi_gmem_ARQOS sc_out sc_lv 4 signal 0 } 
	{ m_axi_gmem_ARREGION sc_out sc_lv 4 signal 0 } 
	{ m_axi_gmem_ARUSER sc_out sc_lv 1 signal 0 } 
	{ m_axi_gmem_RVALID sc_in sc_logic 1 signal 0 } 
	{ m_axi_gmem_RREADY sc_out sc_logic 1 signal 0 } 
	{ m_axi_gmem_RDATA sc_in sc_lv 512 signal 0 } 
	{ m_axi_gmem_RLAST sc_in sc_logic 1 signal 0 } 
	{ m_axi_gmem_RID sc_in sc_lv 1 signal 0 } 
	{ m_axi_gmem_RUSER sc_in sc_lv 1 signal 0 } 
	{ m_axi_gmem_RRESP sc_in sc_lv 2 signal 0 } 
	{ m_axi_gmem_BVALID sc_in sc_logic 1 signal 0 } 
	{ m_axi_gmem_BREADY sc_out sc_logic 1 signal 0 } 
	{ m_axi_gmem_BRESP sc_in sc_lv 2 signal 0 } 
	{ m_axi_gmem_BID sc_in sc_lv 1 signal 0 } 
	{ m_axi_gmem_BUSER sc_in sc_lv 1 signal 0 } 
	{ alpha sc_in sc_lv 32 signal 4 } 
	{ beta sc_in sc_lv 32 signal 5 } 
	{ s_axi_control_AWVALID sc_in sc_logic 1 signal -1 } 
	{ s_axi_control_AWREADY sc_out sc_logic 1 signal -1 } 
	{ s_axi_control_AWADDR sc_in sc_lv 6 signal -1 } 
	{ s_axi_control_WVALID sc_in sc_logic 1 signal -1 } 
	{ s_axi_control_WREADY sc_out sc_logic 1 signal -1 } 
	{ s_axi_control_WDATA sc_in sc_lv 32 signal -1 } 
	{ s_axi_control_WSTRB sc_in sc_lv 4 signal -1 } 
	{ s_axi_control_ARVALID sc_in sc_logic 1 signal -1 } 
	{ s_axi_control_ARREADY sc_out sc_logic 1 signal -1 } 
	{ s_axi_control_ARADDR sc_in sc_lv 6 signal -1 } 
	{ s_axi_control_RVALID sc_out sc_logic 1 signal -1 } 
	{ s_axi_control_RREADY sc_in sc_logic 1 signal -1 } 
	{ s_axi_control_RDATA sc_out sc_lv 32 signal -1 } 
	{ s_axi_control_RRESP sc_out sc_lv 2 signal -1 } 
	{ s_axi_control_BVALID sc_out sc_logic 1 signal -1 } 
	{ s_axi_control_BREADY sc_in sc_logic 1 signal -1 } 
	{ s_axi_control_BRESP sc_out sc_lv 2 signal -1 } 
	{ interrupt sc_out sc_logic 1 signal -1 } 
}
set NewPortList {[ 
	{ "name": "s_axi_control_AWADDR", "direction": "in", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "control", "role": "AWADDR" },"address":[{"name":"kernel_gemm","role":"start","value":"0","valid_bit":"0"},{"name":"kernel_gemm","role":"continue","value":"0","valid_bit":"4"},{"name":"kernel_gemm","role":"auto_start","value":"0","valid_bit":"7"},{"name":"C_V","role":"data","value":"16"},{"name":"A_V","role":"data","value":"24"},{"name":"B_V","role":"data","value":"32"}] },
	{ "name": "s_axi_control_AWVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "control", "role": "AWVALID" } },
	{ "name": "s_axi_control_AWREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "control", "role": "AWREADY" } },
	{ "name": "s_axi_control_WVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "control", "role": "WVALID" } },
	{ "name": "s_axi_control_WREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "control", "role": "WREADY" } },
	{ "name": "s_axi_control_WDATA", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "control", "role": "WDATA" } },
	{ "name": "s_axi_control_WSTRB", "direction": "in", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "control", "role": "WSTRB" } },
	{ "name": "s_axi_control_ARADDR", "direction": "in", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "control", "role": "ARADDR" },"address":[{"name":"kernel_gemm","role":"start","value":"0","valid_bit":"0"},{"name":"kernel_gemm","role":"done","value":"0","valid_bit":"1"},{"name":"kernel_gemm","role":"idle","value":"0","valid_bit":"2"},{"name":"kernel_gemm","role":"ready","value":"0","valid_bit":"3"},{"name":"kernel_gemm","role":"auto_start","value":"0","valid_bit":"7"}] },
	{ "name": "s_axi_control_ARVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "control", "role": "ARVALID" } },
	{ "name": "s_axi_control_ARREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "control", "role": "ARREADY" } },
	{ "name": "s_axi_control_RVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "control", "role": "RVALID" } },
	{ "name": "s_axi_control_RREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "control", "role": "RREADY" } },
	{ "name": "s_axi_control_RDATA", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "control", "role": "RDATA" } },
	{ "name": "s_axi_control_RRESP", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "control", "role": "RRESP" } },
	{ "name": "s_axi_control_BVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "control", "role": "BVALID" } },
	{ "name": "s_axi_control_BREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "control", "role": "BREADY" } },
	{ "name": "s_axi_control_BRESP", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "control", "role": "BRESP" } },
	{ "name": "interrupt", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "control", "role": "interrupt" } }, 
 	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst_n", "role": "default" }} , 
 	{ "name": "m_axi_gmem_AWVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "gmem", "role": "AWVALID" }} , 
 	{ "name": "m_axi_gmem_AWREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "gmem", "role": "AWREADY" }} , 
 	{ "name": "m_axi_gmem_AWADDR", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "gmem", "role": "AWADDR" }} , 
 	{ "name": "m_axi_gmem_AWID", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "gmem", "role": "AWID" }} , 
 	{ "name": "m_axi_gmem_AWLEN", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "gmem", "role": "AWLEN" }} , 
 	{ "name": "m_axi_gmem_AWSIZE", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "gmem", "role": "AWSIZE" }} , 
 	{ "name": "m_axi_gmem_AWBURST", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "gmem", "role": "AWBURST" }} , 
 	{ "name": "m_axi_gmem_AWLOCK", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "gmem", "role": "AWLOCK" }} , 
 	{ "name": "m_axi_gmem_AWCACHE", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "gmem", "role": "AWCACHE" }} , 
 	{ "name": "m_axi_gmem_AWPROT", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "gmem", "role": "AWPROT" }} , 
 	{ "name": "m_axi_gmem_AWQOS", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "gmem", "role": "AWQOS" }} , 
 	{ "name": "m_axi_gmem_AWREGION", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "gmem", "role": "AWREGION" }} , 
 	{ "name": "m_axi_gmem_AWUSER", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "gmem", "role": "AWUSER" }} , 
 	{ "name": "m_axi_gmem_WVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "gmem", "role": "WVALID" }} , 
 	{ "name": "m_axi_gmem_WREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "gmem", "role": "WREADY" }} , 
 	{ "name": "m_axi_gmem_WDATA", "direction": "out", "datatype": "sc_lv", "bitwidth":512, "type": "signal", "bundle":{"name": "gmem", "role": "WDATA" }} , 
 	{ "name": "m_axi_gmem_WSTRB", "direction": "out", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "gmem", "role": "WSTRB" }} , 
 	{ "name": "m_axi_gmem_WLAST", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "gmem", "role": "WLAST" }} , 
 	{ "name": "m_axi_gmem_WID", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "gmem", "role": "WID" }} , 
 	{ "name": "m_axi_gmem_WUSER", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "gmem", "role": "WUSER" }} , 
 	{ "name": "m_axi_gmem_ARVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "gmem", "role": "ARVALID" }} , 
 	{ "name": "m_axi_gmem_ARREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "gmem", "role": "ARREADY" }} , 
 	{ "name": "m_axi_gmem_ARADDR", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "gmem", "role": "ARADDR" }} , 
 	{ "name": "m_axi_gmem_ARID", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "gmem", "role": "ARID" }} , 
 	{ "name": "m_axi_gmem_ARLEN", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "gmem", "role": "ARLEN" }} , 
 	{ "name": "m_axi_gmem_ARSIZE", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "gmem", "role": "ARSIZE" }} , 
 	{ "name": "m_axi_gmem_ARBURST", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "gmem", "role": "ARBURST" }} , 
 	{ "name": "m_axi_gmem_ARLOCK", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "gmem", "role": "ARLOCK" }} , 
 	{ "name": "m_axi_gmem_ARCACHE", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "gmem", "role": "ARCACHE" }} , 
 	{ "name": "m_axi_gmem_ARPROT", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "gmem", "role": "ARPROT" }} , 
 	{ "name": "m_axi_gmem_ARQOS", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "gmem", "role": "ARQOS" }} , 
 	{ "name": "m_axi_gmem_ARREGION", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "gmem", "role": "ARREGION" }} , 
 	{ "name": "m_axi_gmem_ARUSER", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "gmem", "role": "ARUSER" }} , 
 	{ "name": "m_axi_gmem_RVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "gmem", "role": "RVALID" }} , 
 	{ "name": "m_axi_gmem_RREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "gmem", "role": "RREADY" }} , 
 	{ "name": "m_axi_gmem_RDATA", "direction": "in", "datatype": "sc_lv", "bitwidth":512, "type": "signal", "bundle":{"name": "gmem", "role": "RDATA" }} , 
 	{ "name": "m_axi_gmem_RLAST", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "gmem", "role": "RLAST" }} , 
 	{ "name": "m_axi_gmem_RID", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "gmem", "role": "RID" }} , 
 	{ "name": "m_axi_gmem_RUSER", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "gmem", "role": "RUSER" }} , 
 	{ "name": "m_axi_gmem_RRESP", "direction": "in", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "gmem", "role": "RRESP" }} , 
 	{ "name": "m_axi_gmem_BVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "gmem", "role": "BVALID" }} , 
 	{ "name": "m_axi_gmem_BREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "gmem", "role": "BREADY" }} , 
 	{ "name": "m_axi_gmem_BRESP", "direction": "in", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "gmem", "role": "BRESP" }} , 
 	{ "name": "m_axi_gmem_BID", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "gmem", "role": "BID" }} , 
 	{ "name": "m_axi_gmem_BUSER", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "gmem", "role": "BUSER" }} , 
 	{ "name": "alpha", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "alpha", "role": "default" }} , 
 	{ "name": "beta", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "beta", "role": "default" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "2", "3", "4", "5", "6", "7", "8", "9", "10", "11", "12", "13", "14", "15", "16", "17", "18", "19", "20", "21", "22", "23", "24", "25", "26", "27", "28", "29", "287", "288", "289", "290", "291", "292", "293", "294", "295", "296", "297", "298", "299", "300", "301", "302", "303", "304", "305", "306", "307", "308", "309", "310", "311", "312", "313", "314", "315", "316", "317", "318", "319", "320", "321", "322", "323", "324", "325", "326", "327", "328", "329", "330", "331", "332", "333", "334", "335", "336", "337", "338", "339", "340", "341", "342", "343", "344", "345", "346", "347", "348", "349", "350", "351", "352", "353", "354", "355", "356", "357", "358", "359", "360", "361", "362", "363", "364", "365", "366", "367", "368", "369", "370", "371", "372", "373", "374", "375", "376", "377", "378", "379", "380", "381", "382", "383", "384", "385", "386", "387", "388", "389", "390", "391", "392", "393", "394", "395", "396", "397", "398", "399", "400", "401", "402", "403", "404", "405", "406", "407", "408", "409", "410", "411", "412", "413", "414", "415", "416"],
		"CDFG" : "kernel_gemm",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "577025", "EstimateLatencyMax" : "71958529",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"DependenceCheck" : [
			{"FromInitialState" : "ap_enable_state14_pp1_iter0_stage0", "FromInitialIteration" : "ap_enable_reg_pp1_iter0", "FromInitialOperation" : "ap_enable_operation_173", "FromInitialSV" : "4", "FromFinalState" : "ap_enable_state15_pp1_iter1_stage0", "FromFinalIteration" : "ap_enable_reg_pp1_iter1", "FromFinalOperation" : "ap_enable_operation_188", "FromFinalSV" : "5", "FromAddress" : "local_C_0_V_address0", "FromType" : "R", "ToInitialState" : "ap_enable_state20_pp1_iter6_stage0", "ToInitialIteration" : "ap_enable_reg_pp1_iter6", "ToInitialNextIteration" : "null", "ToInitialOperation" : "ap_enable_operation_984", "ToInitialSV" : "10", "ToFinalState" : "ap_enable_state20_pp1_iter6_stage0", "ToFinalIteration" : "ap_enable_reg_pp1_iter6", "ToFinalOperation" : "ap_enable_operation_984", "ToFinalSV" : "10", "ToAddress" : "local_C_0_V_address1", "ToType" : "W", "PipelineBlock" : "ap_block_pp1", "AddressWidth" : "7", "II" : "1", "Pragma" : "(kernel_gemm.cpp:67:1)", "Type" : "WAR"},
			{"FromInitialState" : "ap_enable_state14_pp1_iter0_stage0", "FromInitialIteration" : "ap_enable_reg_pp1_iter0", "FromInitialOperation" : "ap_enable_operation_175", "FromInitialSV" : "4", "FromFinalState" : "ap_enable_state15_pp1_iter1_stage0", "FromFinalIteration" : "ap_enable_reg_pp1_iter1", "FromFinalOperation" : "ap_enable_operation_205", "FromFinalSV" : "5", "FromAddress" : "local_C_1_V_address0", "FromType" : "R", "ToInitialState" : "ap_enable_state20_pp1_iter6_stage0", "ToInitialIteration" : "ap_enable_reg_pp1_iter6", "ToInitialNextIteration" : "null", "ToInitialOperation" : "ap_enable_operation_1002", "ToInitialSV" : "10", "ToFinalState" : "ap_enable_state20_pp1_iter6_stage0", "ToFinalIteration" : "ap_enable_reg_pp1_iter6", "ToFinalOperation" : "ap_enable_operation_1002", "ToFinalSV" : "10", "ToAddress" : "local_C_1_V_address1", "ToType" : "W", "PipelineBlock" : "ap_block_pp1", "AddressWidth" : "7", "II" : "1", "Pragma" : "(kernel_gemm.cpp:67:1)", "Type" : "WAR"},
			{"FromInitialState" : "ap_enable_state14_pp1_iter0_stage0", "FromInitialIteration" : "ap_enable_reg_pp1_iter0", "FromInitialOperation" : "ap_enable_operation_177", "FromInitialSV" : "4", "FromFinalState" : "ap_enable_state15_pp1_iter1_stage0", "FromFinalIteration" : "ap_enable_reg_pp1_iter1", "FromFinalOperation" : "ap_enable_operation_222", "FromFinalSV" : "5", "FromAddress" : "local_C_2_V_address0", "FromType" : "R", "ToInitialState" : "ap_enable_state20_pp1_iter6_stage0", "ToInitialIteration" : "ap_enable_reg_pp1_iter6", "ToInitialNextIteration" : "null", "ToInitialOperation" : "ap_enable_operation_1020", "ToInitialSV" : "10", "ToFinalState" : "ap_enable_state20_pp1_iter6_stage0", "ToFinalIteration" : "ap_enable_reg_pp1_iter6", "ToFinalOperation" : "ap_enable_operation_1020", "ToFinalSV" : "10", "ToAddress" : "local_C_2_V_address1", "ToType" : "W", "PipelineBlock" : "ap_block_pp1", "AddressWidth" : "7", "II" : "1", "Pragma" : "(kernel_gemm.cpp:67:1)", "Type" : "WAR"},
			{"FromInitialState" : "ap_enable_state14_pp1_iter0_stage0", "FromInitialIteration" : "ap_enable_reg_pp1_iter0", "FromInitialOperation" : "ap_enable_operation_179", "FromInitialSV" : "4", "FromFinalState" : "ap_enable_state15_pp1_iter1_stage0", "FromFinalIteration" : "ap_enable_reg_pp1_iter1", "FromFinalOperation" : "ap_enable_operation_239", "FromFinalSV" : "5", "FromAddress" : "local_C_3_V_address0", "FromType" : "R", "ToInitialState" : "ap_enable_state20_pp1_iter6_stage0", "ToInitialIteration" : "ap_enable_reg_pp1_iter6", "ToInitialNextIteration" : "null", "ToInitialOperation" : "ap_enable_operation_1038", "ToInitialSV" : "10", "ToFinalState" : "ap_enable_state20_pp1_iter6_stage0", "ToFinalIteration" : "ap_enable_reg_pp1_iter6", "ToFinalOperation" : "ap_enable_operation_1038", "ToFinalSV" : "10", "ToAddress" : "local_C_3_V_address1", "ToType" : "W", "PipelineBlock" : "ap_block_pp1", "AddressWidth" : "7", "II" : "1", "Pragma" : "(kernel_gemm.cpp:67:1)", "Type" : "WAR"},
			{"FromInitialState" : "ap_enable_state14_pp1_iter0_stage0", "FromInitialIteration" : "ap_enable_reg_pp1_iter0", "FromInitialOperation" : "ap_enable_operation_181", "FromInitialSV" : "4", "FromFinalState" : "ap_enable_state15_pp1_iter1_stage0", "FromFinalIteration" : "ap_enable_reg_pp1_iter1", "FromFinalOperation" : "ap_enable_operation_256", "FromFinalSV" : "5", "FromAddress" : "local_C_4_V_address0", "FromType" : "R", "ToInitialState" : "ap_enable_state20_pp1_iter6_stage0", "ToInitialIteration" : "ap_enable_reg_pp1_iter6", "ToInitialNextIteration" : "null", "ToInitialOperation" : "ap_enable_operation_1056", "ToInitialSV" : "10", "ToFinalState" : "ap_enable_state20_pp1_iter6_stage0", "ToFinalIteration" : "ap_enable_reg_pp1_iter6", "ToFinalOperation" : "ap_enable_operation_1056", "ToFinalSV" : "10", "ToAddress" : "local_C_4_V_address1", "ToType" : "W", "PipelineBlock" : "ap_block_pp1", "AddressWidth" : "7", "II" : "1", "Pragma" : "(kernel_gemm.cpp:67:1)", "Type" : "WAR"},
			{"FromInitialState" : "ap_enable_state14_pp1_iter0_stage0", "FromInitialIteration" : "ap_enable_reg_pp1_iter0", "FromInitialOperation" : "ap_enable_operation_183", "FromInitialSV" : "4", "FromFinalState" : "ap_enable_state15_pp1_iter1_stage0", "FromFinalIteration" : "ap_enable_reg_pp1_iter1", "FromFinalOperation" : "ap_enable_operation_273", "FromFinalSV" : "5", "FromAddress" : "local_C_5_V_address0", "FromType" : "R", "ToInitialState" : "ap_enable_state20_pp1_iter6_stage0", "ToInitialIteration" : "ap_enable_reg_pp1_iter6", "ToInitialNextIteration" : "null", "ToInitialOperation" : "ap_enable_operation_1074", "ToInitialSV" : "10", "ToFinalState" : "ap_enable_state20_pp1_iter6_stage0", "ToFinalIteration" : "ap_enable_reg_pp1_iter6", "ToFinalOperation" : "ap_enable_operation_1074", "ToFinalSV" : "10", "ToAddress" : "local_C_5_V_address1", "ToType" : "W", "PipelineBlock" : "ap_block_pp1", "AddressWidth" : "7", "II" : "1", "Pragma" : "(kernel_gemm.cpp:67:1)", "Type" : "WAR"},
			{"FromInitialState" : "ap_enable_state14_pp1_iter0_stage0", "FromInitialIteration" : "ap_enable_reg_pp1_iter0", "FromInitialOperation" : "ap_enable_operation_185", "FromInitialSV" : "4", "FromFinalState" : "ap_enable_state15_pp1_iter1_stage0", "FromFinalIteration" : "ap_enable_reg_pp1_iter1", "FromFinalOperation" : "ap_enable_operation_290", "FromFinalSV" : "5", "FromAddress" : "local_C_6_V_address0", "FromType" : "R", "ToInitialState" : "ap_enable_state20_pp1_iter6_stage0", "ToInitialIteration" : "ap_enable_reg_pp1_iter6", "ToInitialNextIteration" : "null", "ToInitialOperation" : "ap_enable_operation_1092", "ToInitialSV" : "10", "ToFinalState" : "ap_enable_state20_pp1_iter6_stage0", "ToFinalIteration" : "ap_enable_reg_pp1_iter6", "ToFinalOperation" : "ap_enable_operation_1092", "ToFinalSV" : "10", "ToAddress" : "local_C_6_V_address1", "ToType" : "W", "PipelineBlock" : "ap_block_pp1", "AddressWidth" : "7", "II" : "1", "Pragma" : "(kernel_gemm.cpp:67:1)", "Type" : "WAR"},
			{"FromInitialState" : "ap_enable_state14_pp1_iter0_stage0", "FromInitialIteration" : "ap_enable_reg_pp1_iter0", "FromInitialOperation" : "ap_enable_operation_187", "FromInitialSV" : "4", "FromFinalState" : "ap_enable_state15_pp1_iter1_stage0", "FromFinalIteration" : "ap_enable_reg_pp1_iter1", "FromFinalOperation" : "ap_enable_operation_307", "FromFinalSV" : "5", "FromAddress" : "local_C_7_V_address0", "FromType" : "R", "ToInitialState" : "ap_enable_state20_pp1_iter6_stage0", "ToInitialIteration" : "ap_enable_reg_pp1_iter6", "ToInitialNextIteration" : "null", "ToInitialOperation" : "ap_enable_operation_1110", "ToInitialSV" : "10", "ToFinalState" : "ap_enable_state20_pp1_iter6_stage0", "ToFinalIteration" : "ap_enable_reg_pp1_iter6", "ToFinalOperation" : "ap_enable_operation_1110", "ToFinalSV" : "10", "ToAddress" : "local_C_7_V_address1", "ToType" : "W", "PipelineBlock" : "ap_block_pp1", "AddressWidth" : "7", "II" : "1", "Pragma" : "(kernel_gemm.cpp:67:1)", "Type" : "WAR"},
			{"FromInitialState" : "ap_enable_state20_pp1_iter6_stage0", "FromInitialIteration" : "ap_enable_reg_pp1_iter6", "FromInitialOperation" : "ap_enable_operation_984", "FromInitialSV" : "10", "FromFinalState" : "ap_enable_state20_pp1_iter6_stage0", "FromFinalIteration" : "ap_enable_reg_pp1_iter6", "FromFinalOperation" : "ap_enable_operation_984", "FromFinalSV" : "10", "FromAddress" : "local_C_0_V_address1", "FromType" : "W", "ToInitialState" : "ap_enable_state14_pp1_iter0_stage0", "ToInitialIteration" : "ap_enable_reg_pp1_iter0", "ToInitialNextIteration" : "ap_enable_reg_pp1_iter1", "ToInitialOperation" : "ap_enable_operation_173", "ToInitialSV" : "4", "ToFinalState" : "ap_enable_state15_pp1_iter1_stage0", "ToFinalIteration" : "ap_enable_reg_pp1_iter1", "ToFinalOperation" : "ap_enable_operation_188", "ToFinalSV" : "5", "ToAddress" : "local_C_0_V_address0", "ToType" : "R", "PipelineBlock" : "ap_block_pp1", "AddressWidth" : "7", "II" : "1", "Pragma" : "(kernel_gemm.cpp:67:1)", "Type" : "RAW", "StateEnableSignalListForFifoShift" : ["ap_enable_state14_pp1_iter0_stage0", "ap_enable_state15_pp1_iter1_stage0", "ap_enable_state20_pp1_iter6_stage0"]},
			{"FromInitialState" : "ap_enable_state20_pp1_iter6_stage0", "FromInitialIteration" : "ap_enable_reg_pp1_iter6", "FromInitialOperation" : "ap_enable_operation_1002", "FromInitialSV" : "10", "FromFinalState" : "ap_enable_state20_pp1_iter6_stage0", "FromFinalIteration" : "ap_enable_reg_pp1_iter6", "FromFinalOperation" : "ap_enable_operation_1002", "FromFinalSV" : "10", "FromAddress" : "local_C_1_V_address1", "FromType" : "W", "ToInitialState" : "ap_enable_state14_pp1_iter0_stage0", "ToInitialIteration" : "ap_enable_reg_pp1_iter0", "ToInitialNextIteration" : "ap_enable_reg_pp1_iter1", "ToInitialOperation" : "ap_enable_operation_175", "ToInitialSV" : "4", "ToFinalState" : "ap_enable_state15_pp1_iter1_stage0", "ToFinalIteration" : "ap_enable_reg_pp1_iter1", "ToFinalOperation" : "ap_enable_operation_205", "ToFinalSV" : "5", "ToAddress" : "local_C_1_V_address0", "ToType" : "R", "PipelineBlock" : "ap_block_pp1", "AddressWidth" : "7", "II" : "1", "Pragma" : "(kernel_gemm.cpp:67:1)", "Type" : "RAW", "StateEnableSignalListForFifoShift" : ["ap_enable_state14_pp1_iter0_stage0", "ap_enable_state15_pp1_iter1_stage0", "ap_enable_state20_pp1_iter6_stage0"]},
			{"FromInitialState" : "ap_enable_state20_pp1_iter6_stage0", "FromInitialIteration" : "ap_enable_reg_pp1_iter6", "FromInitialOperation" : "ap_enable_operation_1020", "FromInitialSV" : "10", "FromFinalState" : "ap_enable_state20_pp1_iter6_stage0", "FromFinalIteration" : "ap_enable_reg_pp1_iter6", "FromFinalOperation" : "ap_enable_operation_1020", "FromFinalSV" : "10", "FromAddress" : "local_C_2_V_address1", "FromType" : "W", "ToInitialState" : "ap_enable_state14_pp1_iter0_stage0", "ToInitialIteration" : "ap_enable_reg_pp1_iter0", "ToInitialNextIteration" : "ap_enable_reg_pp1_iter1", "ToInitialOperation" : "ap_enable_operation_177", "ToInitialSV" : "4", "ToFinalState" : "ap_enable_state15_pp1_iter1_stage0", "ToFinalIteration" : "ap_enable_reg_pp1_iter1", "ToFinalOperation" : "ap_enable_operation_222", "ToFinalSV" : "5", "ToAddress" : "local_C_2_V_address0", "ToType" : "R", "PipelineBlock" : "ap_block_pp1", "AddressWidth" : "7", "II" : "1", "Pragma" : "(kernel_gemm.cpp:67:1)", "Type" : "RAW", "StateEnableSignalListForFifoShift" : ["ap_enable_state14_pp1_iter0_stage0", "ap_enable_state15_pp1_iter1_stage0", "ap_enable_state20_pp1_iter6_stage0"]},
			{"FromInitialState" : "ap_enable_state20_pp1_iter6_stage0", "FromInitialIteration" : "ap_enable_reg_pp1_iter6", "FromInitialOperation" : "ap_enable_operation_1038", "FromInitialSV" : "10", "FromFinalState" : "ap_enable_state20_pp1_iter6_stage0", "FromFinalIteration" : "ap_enable_reg_pp1_iter6", "FromFinalOperation" : "ap_enable_operation_1038", "FromFinalSV" : "10", "FromAddress" : "local_C_3_V_address1", "FromType" : "W", "ToInitialState" : "ap_enable_state14_pp1_iter0_stage0", "ToInitialIteration" : "ap_enable_reg_pp1_iter0", "ToInitialNextIteration" : "ap_enable_reg_pp1_iter1", "ToInitialOperation" : "ap_enable_operation_179", "ToInitialSV" : "4", "ToFinalState" : "ap_enable_state15_pp1_iter1_stage0", "ToFinalIteration" : "ap_enable_reg_pp1_iter1", "ToFinalOperation" : "ap_enable_operation_239", "ToFinalSV" : "5", "ToAddress" : "local_C_3_V_address0", "ToType" : "R", "PipelineBlock" : "ap_block_pp1", "AddressWidth" : "7", "II" : "1", "Pragma" : "(kernel_gemm.cpp:67:1)", "Type" : "RAW", "StateEnableSignalListForFifoShift" : ["ap_enable_state14_pp1_iter0_stage0", "ap_enable_state15_pp1_iter1_stage0", "ap_enable_state20_pp1_iter6_stage0"]},
			{"FromInitialState" : "ap_enable_state20_pp1_iter6_stage0", "FromInitialIteration" : "ap_enable_reg_pp1_iter6", "FromInitialOperation" : "ap_enable_operation_1056", "FromInitialSV" : "10", "FromFinalState" : "ap_enable_state20_pp1_iter6_stage0", "FromFinalIteration" : "ap_enable_reg_pp1_iter6", "FromFinalOperation" : "ap_enable_operation_1056", "FromFinalSV" : "10", "FromAddress" : "local_C_4_V_address1", "FromType" : "W", "ToInitialState" : "ap_enable_state14_pp1_iter0_stage0", "ToInitialIteration" : "ap_enable_reg_pp1_iter0", "ToInitialNextIteration" : "ap_enable_reg_pp1_iter1", "ToInitialOperation" : "ap_enable_operation_181", "ToInitialSV" : "4", "ToFinalState" : "ap_enable_state15_pp1_iter1_stage0", "ToFinalIteration" : "ap_enable_reg_pp1_iter1", "ToFinalOperation" : "ap_enable_operation_256", "ToFinalSV" : "5", "ToAddress" : "local_C_4_V_address0", "ToType" : "R", "PipelineBlock" : "ap_block_pp1", "AddressWidth" : "7", "II" : "1", "Pragma" : "(kernel_gemm.cpp:67:1)", "Type" : "RAW", "StateEnableSignalListForFifoShift" : ["ap_enable_state14_pp1_iter0_stage0", "ap_enable_state15_pp1_iter1_stage0", "ap_enable_state20_pp1_iter6_stage0"]},
			{"FromInitialState" : "ap_enable_state20_pp1_iter6_stage0", "FromInitialIteration" : "ap_enable_reg_pp1_iter6", "FromInitialOperation" : "ap_enable_operation_1074", "FromInitialSV" : "10", "FromFinalState" : "ap_enable_state20_pp1_iter6_stage0", "FromFinalIteration" : "ap_enable_reg_pp1_iter6", "FromFinalOperation" : "ap_enable_operation_1074", "FromFinalSV" : "10", "FromAddress" : "local_C_5_V_address1", "FromType" : "W", "ToInitialState" : "ap_enable_state14_pp1_iter0_stage0", "ToInitialIteration" : "ap_enable_reg_pp1_iter0", "ToInitialNextIteration" : "ap_enable_reg_pp1_iter1", "ToInitialOperation" : "ap_enable_operation_183", "ToInitialSV" : "4", "ToFinalState" : "ap_enable_state15_pp1_iter1_stage0", "ToFinalIteration" : "ap_enable_reg_pp1_iter1", "ToFinalOperation" : "ap_enable_operation_273", "ToFinalSV" : "5", "ToAddress" : "local_C_5_V_address0", "ToType" : "R", "PipelineBlock" : "ap_block_pp1", "AddressWidth" : "7", "II" : "1", "Pragma" : "(kernel_gemm.cpp:67:1)", "Type" : "RAW", "StateEnableSignalListForFifoShift" : ["ap_enable_state14_pp1_iter0_stage0", "ap_enable_state15_pp1_iter1_stage0", "ap_enable_state20_pp1_iter6_stage0"]},
			{"FromInitialState" : "ap_enable_state20_pp1_iter6_stage0", "FromInitialIteration" : "ap_enable_reg_pp1_iter6", "FromInitialOperation" : "ap_enable_operation_1092", "FromInitialSV" : "10", "FromFinalState" : "ap_enable_state20_pp1_iter6_stage0", "FromFinalIteration" : "ap_enable_reg_pp1_iter6", "FromFinalOperation" : "ap_enable_operation_1092", "FromFinalSV" : "10", "FromAddress" : "local_C_6_V_address1", "FromType" : "W", "ToInitialState" : "ap_enable_state14_pp1_iter0_stage0", "ToInitialIteration" : "ap_enable_reg_pp1_iter0", "ToInitialNextIteration" : "ap_enable_reg_pp1_iter1", "ToInitialOperation" : "ap_enable_operation_185", "ToInitialSV" : "4", "ToFinalState" : "ap_enable_state15_pp1_iter1_stage0", "ToFinalIteration" : "ap_enable_reg_pp1_iter1", "ToFinalOperation" : "ap_enable_operation_290", "ToFinalSV" : "5", "ToAddress" : "local_C_6_V_address0", "ToType" : "R", "PipelineBlock" : "ap_block_pp1", "AddressWidth" : "7", "II" : "1", "Pragma" : "(kernel_gemm.cpp:67:1)", "Type" : "RAW", "StateEnableSignalListForFifoShift" : ["ap_enable_state14_pp1_iter0_stage0", "ap_enable_state15_pp1_iter1_stage0", "ap_enable_state20_pp1_iter6_stage0"]},
			{"FromInitialState" : "ap_enable_state20_pp1_iter6_stage0", "FromInitialIteration" : "ap_enable_reg_pp1_iter6", "FromInitialOperation" : "ap_enable_operation_1110", "FromInitialSV" : "10", "FromFinalState" : "ap_enable_state20_pp1_iter6_stage0", "FromFinalIteration" : "ap_enable_reg_pp1_iter6", "FromFinalOperation" : "ap_enable_operation_1110", "FromFinalSV" : "10", "FromAddress" : "local_C_7_V_address1", "FromType" : "W", "ToInitialState" : "ap_enable_state14_pp1_iter0_stage0", "ToInitialIteration" : "ap_enable_reg_pp1_iter0", "ToInitialNextIteration" : "ap_enable_reg_pp1_iter1", "ToInitialOperation" : "ap_enable_operation_187", "ToInitialSV" : "4", "ToFinalState" : "ap_enable_state15_pp1_iter1_stage0", "ToFinalIteration" : "ap_enable_reg_pp1_iter1", "ToFinalOperation" : "ap_enable_operation_307", "ToFinalSV" : "5", "ToAddress" : "local_C_7_V_address0", "ToType" : "R", "PipelineBlock" : "ap_block_pp1", "AddressWidth" : "7", "II" : "1", "Pragma" : "(kernel_gemm.cpp:67:1)", "Type" : "RAW", "StateEnableSignalListForFifoShift" : ["ap_enable_state14_pp1_iter0_stage0", "ap_enable_state15_pp1_iter1_stage0", "ap_enable_state20_pp1_iter6_stage0"]}],
		"WaitState" : [
			{"State" : "ap_ST_fsm_state23", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_compute_fu_769"},
			{"State" : "ap_ST_fsm_state23", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_compute_fu_769"},
			{"State" : "ap_ST_fsm_state23", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_load_fu_792"},
			{"State" : "ap_ST_fsm_state23", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_load_fu_792"}],
		"Port" : [
			{"Name" : "gmem", "Type" : "MAXI", "Direction" : "IO",
				"BlockSignal" : [
					{"Name" : "gmem_blk_n_AR", "Type" : "RtlSignal"},
					{"Name" : "gmem_blk_n_R", "Type" : "RtlSignal"},
					{"Name" : "gmem_blk_n_AW", "Type" : "RtlSignal"},
					{"Name" : "gmem_blk_n_W", "Type" : "RtlSignal"},
					{"Name" : "gmem_blk_n_B", "Type" : "RtlSignal"}],
				"SubConnect" : [
					{"ID" : "287", "SubInstance" : "grp_load_fu_792", "Port" : "A_V"}]},
			{"Name" : "C_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "A_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "B_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "alpha", "Type" : "None", "Direction" : "I"},
			{"Name" : "beta", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.kernel_gemm_control_s_axi_U", "Parent" : "0"},
	{"ID" : "2", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.kernel_gemm_gmem_m_axi_U", "Parent" : "0"},
	{"ID" : "3", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.local_A_ping_V_U", "Parent" : "0"},
	{"ID" : "4", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.local_B_ping_0_V_U", "Parent" : "0"},
	{"ID" : "5", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.local_B_ping_1_V_U", "Parent" : "0"},
	{"ID" : "6", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.local_B_ping_2_V_U", "Parent" : "0"},
	{"ID" : "7", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.local_B_ping_3_V_U", "Parent" : "0"},
	{"ID" : "8", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.local_B_ping_4_V_U", "Parent" : "0"},
	{"ID" : "9", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.local_B_ping_5_V_U", "Parent" : "0"},
	{"ID" : "10", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.local_B_ping_6_V_U", "Parent" : "0"},
	{"ID" : "11", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.local_B_ping_7_V_U", "Parent" : "0"},
	{"ID" : "12", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.local_A_pong_V_U", "Parent" : "0"},
	{"ID" : "13", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.local_B_pong_0_V_U", "Parent" : "0"},
	{"ID" : "14", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.local_B_pong_1_V_U", "Parent" : "0"},
	{"ID" : "15", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.local_B_pong_2_V_U", "Parent" : "0"},
	{"ID" : "16", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.local_B_pong_3_V_U", "Parent" : "0"},
	{"ID" : "17", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.local_B_pong_4_V_U", "Parent" : "0"},
	{"ID" : "18", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.local_B_pong_5_V_U", "Parent" : "0"},
	{"ID" : "19", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.local_B_pong_6_V_U", "Parent" : "0"},
	{"ID" : "20", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.local_B_pong_7_V_U", "Parent" : "0"},
	{"ID" : "21", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.local_C_0_V_U", "Parent" : "0"},
	{"ID" : "22", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.local_C_1_V_U", "Parent" : "0"},
	{"ID" : "23", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.local_C_2_V_U", "Parent" : "0"},
	{"ID" : "24", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.local_C_3_V_U", "Parent" : "0"},
	{"ID" : "25", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.local_C_4_V_U", "Parent" : "0"},
	{"ID" : "26", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.local_C_5_V_U", "Parent" : "0"},
	{"ID" : "27", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.local_C_6_V_U", "Parent" : "0"},
	{"ID" : "28", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.local_C_7_V_U", "Parent" : "0"},
	{"ID" : "29", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_compute_fu_769", "Parent" : "0", "Child" : ["30", "31", "32", "33", "34", "35", "36", "37", "38", "39", "40", "41", "42", "43", "44", "45", "46", "47", "48", "49", "50", "51", "52", "53", "54", "55", "56", "57", "58", "59", "60", "61", "62", "63", "64", "65", "66", "67", "68", "69", "70", "71", "72", "73", "74", "75", "76", "77", "78", "79", "80", "81", "82", "83", "84", "85", "86", "87", "88", "89", "90", "91", "92", "93", "94", "95", "96", "97", "98", "99", "100", "101", "102", "103", "104", "105", "106", "107", "108", "109", "110", "111", "112", "113", "114", "115", "116", "117", "118", "119", "120", "121", "122", "123", "124", "125", "126", "127", "128", "129", "130", "131", "132", "133", "134", "135", "136", "137", "138", "139", "140", "141", "142", "143", "144", "145", "146", "147", "148", "149", "150", "151", "152", "153", "154", "155", "156", "157", "158", "159", "160", "161", "162", "163", "164", "165", "166", "167", "168", "169", "170", "171", "172", "173", "174", "175", "176", "177", "178", "179", "180", "181", "182", "183", "184", "185", "186", "187", "188", "189", "190", "191", "192", "193", "194", "195", "196", "197", "198", "199", "200", "201", "202", "203", "204", "205", "206", "207", "208", "209", "210", "211", "212", "213", "214", "215", "216", "217", "218", "219", "220", "221", "222", "223", "224", "225", "226", "227", "228", "229", "230", "231", "232", "233", "234", "235", "236", "237", "238", "239", "240", "241", "242", "243", "244", "245", "246", "247", "248", "249", "250", "251", "252", "253", "254", "255", "256", "257", "258", "259", "260", "261", "262", "263", "264", "265", "266", "267", "268", "269", "270", "271", "272", "273", "274", "275", "276", "277", "278", "279", "280", "281", "282", "283", "284", "285", "286"],
		"CDFG" : "compute",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "1", "EstimateLatencyMax" : "16403",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"DependenceCheck" : [
			{"FromInitialState" : "ap_enable_state11_pp0_iter9_stage0", "FromInitialIteration" : "ap_enable_reg_pp0_iter9", "FromInitialOperation" : "ap_enable_operation_607", "FromInitialSV" : "10", "FromFinalState" : "ap_enable_state12_pp0_iter10_stage0", "FromFinalIteration" : "ap_enable_reg_pp0_iter10", "FromFinalOperation" : "ap_enable_operation_750", "FromFinalSV" : "11", "FromAddress" : "local_C_0_V_address0", "FromType" : "R", "ToInitialState" : "ap_enable_state20_pp0_iter18_stage0", "ToInitialIteration" : "ap_enable_reg_pp0_iter18", "ToInitialNextIteration" : "null", "ToInitialOperation" : "ap_enable_operation_2060", "ToInitialSV" : "19", "ToFinalState" : "ap_enable_state20_pp0_iter18_stage0", "ToFinalIteration" : "ap_enable_reg_pp0_iter18", "ToFinalOperation" : "ap_enable_operation_2060", "ToFinalSV" : "19", "ToAddress" : "local_C_0_V_address1", "ToType" : "W", "PipelineBlock" : "ap_block_pp0", "AddressWidth" : "7", "II" : "1", "Pragma" : "(kernel_gemm.cpp:25:1)", "Type" : "WAR"},
			{"FromInitialState" : "ap_enable_state11_pp0_iter9_stage0", "FromInitialIteration" : "ap_enable_reg_pp0_iter9", "FromInitialOperation" : "ap_enable_operation_625", "FromInitialSV" : "10", "FromFinalState" : "ap_enable_state12_pp0_iter10_stage0", "FromFinalIteration" : "ap_enable_reg_pp0_iter10", "FromFinalOperation" : "ap_enable_operation_783", "FromFinalSV" : "11", "FromAddress" : "local_C_1_V_address0", "FromType" : "R", "ToInitialState" : "ap_enable_state20_pp0_iter18_stage0", "ToInitialIteration" : "ap_enable_reg_pp0_iter18", "ToInitialNextIteration" : "null", "ToInitialOperation" : "ap_enable_operation_2078", "ToInitialSV" : "19", "ToFinalState" : "ap_enable_state20_pp0_iter18_stage0", "ToFinalIteration" : "ap_enable_reg_pp0_iter18", "ToFinalOperation" : "ap_enable_operation_2078", "ToFinalSV" : "19", "ToAddress" : "local_C_1_V_address1", "ToType" : "W", "PipelineBlock" : "ap_block_pp0", "AddressWidth" : "7", "II" : "1", "Pragma" : "(kernel_gemm.cpp:25:1)", "Type" : "WAR"},
			{"FromInitialState" : "ap_enable_state11_pp0_iter9_stage0", "FromInitialIteration" : "ap_enable_reg_pp0_iter9", "FromInitialOperation" : "ap_enable_operation_643", "FromInitialSV" : "10", "FromFinalState" : "ap_enable_state12_pp0_iter10_stage0", "FromFinalIteration" : "ap_enable_reg_pp0_iter10", "FromFinalOperation" : "ap_enable_operation_816", "FromFinalSV" : "11", "FromAddress" : "local_C_2_V_address0", "FromType" : "R", "ToInitialState" : "ap_enable_state20_pp0_iter18_stage0", "ToInitialIteration" : "ap_enable_reg_pp0_iter18", "ToInitialNextIteration" : "null", "ToInitialOperation" : "ap_enable_operation_2096", "ToInitialSV" : "19", "ToFinalState" : "ap_enable_state20_pp0_iter18_stage0", "ToFinalIteration" : "ap_enable_reg_pp0_iter18", "ToFinalOperation" : "ap_enable_operation_2096", "ToFinalSV" : "19", "ToAddress" : "local_C_2_V_address1", "ToType" : "W", "PipelineBlock" : "ap_block_pp0", "AddressWidth" : "7", "II" : "1", "Pragma" : "(kernel_gemm.cpp:25:1)", "Type" : "WAR"},
			{"FromInitialState" : "ap_enable_state11_pp0_iter9_stage0", "FromInitialIteration" : "ap_enable_reg_pp0_iter9", "FromInitialOperation" : "ap_enable_operation_661", "FromInitialSV" : "10", "FromFinalState" : "ap_enable_state12_pp0_iter10_stage0", "FromFinalIteration" : "ap_enable_reg_pp0_iter10", "FromFinalOperation" : "ap_enable_operation_849", "FromFinalSV" : "11", "FromAddress" : "local_C_3_V_address0", "FromType" : "R", "ToInitialState" : "ap_enable_state20_pp0_iter18_stage0", "ToInitialIteration" : "ap_enable_reg_pp0_iter18", "ToInitialNextIteration" : "null", "ToInitialOperation" : "ap_enable_operation_2114", "ToInitialSV" : "19", "ToFinalState" : "ap_enable_state20_pp0_iter18_stage0", "ToFinalIteration" : "ap_enable_reg_pp0_iter18", "ToFinalOperation" : "ap_enable_operation_2114", "ToFinalSV" : "19", "ToAddress" : "local_C_3_V_address1", "ToType" : "W", "PipelineBlock" : "ap_block_pp0", "AddressWidth" : "7", "II" : "1", "Pragma" : "(kernel_gemm.cpp:25:1)", "Type" : "WAR"},
			{"FromInitialState" : "ap_enable_state11_pp0_iter9_stage0", "FromInitialIteration" : "ap_enable_reg_pp0_iter9", "FromInitialOperation" : "ap_enable_operation_679", "FromInitialSV" : "10", "FromFinalState" : "ap_enable_state12_pp0_iter10_stage0", "FromFinalIteration" : "ap_enable_reg_pp0_iter10", "FromFinalOperation" : "ap_enable_operation_882", "FromFinalSV" : "11", "FromAddress" : "local_C_4_V_address0", "FromType" : "R", "ToInitialState" : "ap_enable_state20_pp0_iter18_stage0", "ToInitialIteration" : "ap_enable_reg_pp0_iter18", "ToInitialNextIteration" : "null", "ToInitialOperation" : "ap_enable_operation_2132", "ToInitialSV" : "19", "ToFinalState" : "ap_enable_state20_pp0_iter18_stage0", "ToFinalIteration" : "ap_enable_reg_pp0_iter18", "ToFinalOperation" : "ap_enable_operation_2132", "ToFinalSV" : "19", "ToAddress" : "local_C_4_V_address1", "ToType" : "W", "PipelineBlock" : "ap_block_pp0", "AddressWidth" : "7", "II" : "1", "Pragma" : "(kernel_gemm.cpp:25:1)", "Type" : "WAR"},
			{"FromInitialState" : "ap_enable_state11_pp0_iter9_stage0", "FromInitialIteration" : "ap_enable_reg_pp0_iter9", "FromInitialOperation" : "ap_enable_operation_697", "FromInitialSV" : "10", "FromFinalState" : "ap_enable_state12_pp0_iter10_stage0", "FromFinalIteration" : "ap_enable_reg_pp0_iter10", "FromFinalOperation" : "ap_enable_operation_915", "FromFinalSV" : "11", "FromAddress" : "local_C_5_V_address0", "FromType" : "R", "ToInitialState" : "ap_enable_state20_pp0_iter18_stage0", "ToInitialIteration" : "ap_enable_reg_pp0_iter18", "ToInitialNextIteration" : "null", "ToInitialOperation" : "ap_enable_operation_2150", "ToInitialSV" : "19", "ToFinalState" : "ap_enable_state20_pp0_iter18_stage0", "ToFinalIteration" : "ap_enable_reg_pp0_iter18", "ToFinalOperation" : "ap_enable_operation_2150", "ToFinalSV" : "19", "ToAddress" : "local_C_5_V_address1", "ToType" : "W", "PipelineBlock" : "ap_block_pp0", "AddressWidth" : "7", "II" : "1", "Pragma" : "(kernel_gemm.cpp:25:1)", "Type" : "WAR"},
			{"FromInitialState" : "ap_enable_state11_pp0_iter9_stage0", "FromInitialIteration" : "ap_enable_reg_pp0_iter9", "FromInitialOperation" : "ap_enable_operation_715", "FromInitialSV" : "10", "FromFinalState" : "ap_enable_state12_pp0_iter10_stage0", "FromFinalIteration" : "ap_enable_reg_pp0_iter10", "FromFinalOperation" : "ap_enable_operation_948", "FromFinalSV" : "11", "FromAddress" : "local_C_6_V_address0", "FromType" : "R", "ToInitialState" : "ap_enable_state20_pp0_iter18_stage0", "ToInitialIteration" : "ap_enable_reg_pp0_iter18", "ToInitialNextIteration" : "null", "ToInitialOperation" : "ap_enable_operation_2168", "ToInitialSV" : "19", "ToFinalState" : "ap_enable_state20_pp0_iter18_stage0", "ToFinalIteration" : "ap_enable_reg_pp0_iter18", "ToFinalOperation" : "ap_enable_operation_2168", "ToFinalSV" : "19", "ToAddress" : "local_C_6_V_address1", "ToType" : "W", "PipelineBlock" : "ap_block_pp0", "AddressWidth" : "7", "II" : "1", "Pragma" : "(kernel_gemm.cpp:25:1)", "Type" : "WAR"},
			{"FromInitialState" : "ap_enable_state11_pp0_iter9_stage0", "FromInitialIteration" : "ap_enable_reg_pp0_iter9", "FromInitialOperation" : "ap_enable_operation_733", "FromInitialSV" : "10", "FromFinalState" : "ap_enable_state12_pp0_iter10_stage0", "FromFinalIteration" : "ap_enable_reg_pp0_iter10", "FromFinalOperation" : "ap_enable_operation_981", "FromFinalSV" : "11", "FromAddress" : "local_C_7_V_address0", "FromType" : "R", "ToInitialState" : "ap_enable_state20_pp0_iter18_stage0", "ToInitialIteration" : "ap_enable_reg_pp0_iter18", "ToInitialNextIteration" : "null", "ToInitialOperation" : "ap_enable_operation_2186", "ToInitialSV" : "19", "ToFinalState" : "ap_enable_state20_pp0_iter18_stage0", "ToFinalIteration" : "ap_enable_reg_pp0_iter18", "ToFinalOperation" : "ap_enable_operation_2186", "ToFinalSV" : "19", "ToAddress" : "local_C_7_V_address1", "ToType" : "W", "PipelineBlock" : "ap_block_pp0", "AddressWidth" : "7", "II" : "1", "Pragma" : "(kernel_gemm.cpp:25:1)", "Type" : "WAR"},
			{"FromInitialState" : "ap_enable_state20_pp0_iter18_stage0", "FromInitialIteration" : "ap_enable_reg_pp0_iter18", "FromInitialOperation" : "ap_enable_operation_2060", "FromInitialSV" : "19", "FromFinalState" : "ap_enable_state20_pp0_iter18_stage0", "FromFinalIteration" : "ap_enable_reg_pp0_iter18", "FromFinalOperation" : "ap_enable_operation_2060", "FromFinalSV" : "19", "FromAddress" : "local_C_0_V_address1", "FromType" : "W", "ToInitialState" : "ap_enable_state11_pp0_iter9_stage0", "ToInitialIteration" : "ap_enable_reg_pp0_iter9", "ToInitialNextIteration" : "ap_enable_reg_pp0_iter10", "ToInitialOperation" : "ap_enable_operation_607", "ToInitialSV" : "10", "ToFinalState" : "ap_enable_state12_pp0_iter10_stage0", "ToFinalIteration" : "ap_enable_reg_pp0_iter10", "ToFinalOperation" : "ap_enable_operation_750", "ToFinalSV" : "11", "ToAddress" : "local_C_0_V_address0", "ToType" : "R", "PipelineBlock" : "ap_block_pp0", "AddressWidth" : "7", "II" : "1", "Pragma" : "(kernel_gemm.cpp:25:1)", "Type" : "RAW", "StateEnableSignalListForFifoShift" : ["ap_enable_state11_pp0_iter9_stage0", "ap_enable_state12_pp0_iter10_stage0", "ap_enable_state20_pp0_iter18_stage0"]},
			{"FromInitialState" : "ap_enable_state20_pp0_iter18_stage0", "FromInitialIteration" : "ap_enable_reg_pp0_iter18", "FromInitialOperation" : "ap_enable_operation_2078", "FromInitialSV" : "19", "FromFinalState" : "ap_enable_state20_pp0_iter18_stage0", "FromFinalIteration" : "ap_enable_reg_pp0_iter18", "FromFinalOperation" : "ap_enable_operation_2078", "FromFinalSV" : "19", "FromAddress" : "local_C_1_V_address1", "FromType" : "W", "ToInitialState" : "ap_enable_state11_pp0_iter9_stage0", "ToInitialIteration" : "ap_enable_reg_pp0_iter9", "ToInitialNextIteration" : "ap_enable_reg_pp0_iter10", "ToInitialOperation" : "ap_enable_operation_625", "ToInitialSV" : "10", "ToFinalState" : "ap_enable_state12_pp0_iter10_stage0", "ToFinalIteration" : "ap_enable_reg_pp0_iter10", "ToFinalOperation" : "ap_enable_operation_783", "ToFinalSV" : "11", "ToAddress" : "local_C_1_V_address0", "ToType" : "R", "PipelineBlock" : "ap_block_pp0", "AddressWidth" : "7", "II" : "1", "Pragma" : "(kernel_gemm.cpp:25:1)", "Type" : "RAW", "StateEnableSignalListForFifoShift" : ["ap_enable_state11_pp0_iter9_stage0", "ap_enable_state12_pp0_iter10_stage0", "ap_enable_state20_pp0_iter18_stage0"]},
			{"FromInitialState" : "ap_enable_state20_pp0_iter18_stage0", "FromInitialIteration" : "ap_enable_reg_pp0_iter18", "FromInitialOperation" : "ap_enable_operation_2096", "FromInitialSV" : "19", "FromFinalState" : "ap_enable_state20_pp0_iter18_stage0", "FromFinalIteration" : "ap_enable_reg_pp0_iter18", "FromFinalOperation" : "ap_enable_operation_2096", "FromFinalSV" : "19", "FromAddress" : "local_C_2_V_address1", "FromType" : "W", "ToInitialState" : "ap_enable_state11_pp0_iter9_stage0", "ToInitialIteration" : "ap_enable_reg_pp0_iter9", "ToInitialNextIteration" : "ap_enable_reg_pp0_iter10", "ToInitialOperation" : "ap_enable_operation_643", "ToInitialSV" : "10", "ToFinalState" : "ap_enable_state12_pp0_iter10_stage0", "ToFinalIteration" : "ap_enable_reg_pp0_iter10", "ToFinalOperation" : "ap_enable_operation_816", "ToFinalSV" : "11", "ToAddress" : "local_C_2_V_address0", "ToType" : "R", "PipelineBlock" : "ap_block_pp0", "AddressWidth" : "7", "II" : "1", "Pragma" : "(kernel_gemm.cpp:25:1)", "Type" : "RAW", "StateEnableSignalListForFifoShift" : ["ap_enable_state11_pp0_iter9_stage0", "ap_enable_state12_pp0_iter10_stage0", "ap_enable_state20_pp0_iter18_stage0"]},
			{"FromInitialState" : "ap_enable_state20_pp0_iter18_stage0", "FromInitialIteration" : "ap_enable_reg_pp0_iter18", "FromInitialOperation" : "ap_enable_operation_2114", "FromInitialSV" : "19", "FromFinalState" : "ap_enable_state20_pp0_iter18_stage0", "FromFinalIteration" : "ap_enable_reg_pp0_iter18", "FromFinalOperation" : "ap_enable_operation_2114", "FromFinalSV" : "19", "FromAddress" : "local_C_3_V_address1", "FromType" : "W", "ToInitialState" : "ap_enable_state11_pp0_iter9_stage0", "ToInitialIteration" : "ap_enable_reg_pp0_iter9", "ToInitialNextIteration" : "ap_enable_reg_pp0_iter10", "ToInitialOperation" : "ap_enable_operation_661", "ToInitialSV" : "10", "ToFinalState" : "ap_enable_state12_pp0_iter10_stage0", "ToFinalIteration" : "ap_enable_reg_pp0_iter10", "ToFinalOperation" : "ap_enable_operation_849", "ToFinalSV" : "11", "ToAddress" : "local_C_3_V_address0", "ToType" : "R", "PipelineBlock" : "ap_block_pp0", "AddressWidth" : "7", "II" : "1", "Pragma" : "(kernel_gemm.cpp:25:1)", "Type" : "RAW", "StateEnableSignalListForFifoShift" : ["ap_enable_state11_pp0_iter9_stage0", "ap_enable_state12_pp0_iter10_stage0", "ap_enable_state20_pp0_iter18_stage0"]},
			{"FromInitialState" : "ap_enable_state20_pp0_iter18_stage0", "FromInitialIteration" : "ap_enable_reg_pp0_iter18", "FromInitialOperation" : "ap_enable_operation_2132", "FromInitialSV" : "19", "FromFinalState" : "ap_enable_state20_pp0_iter18_stage0", "FromFinalIteration" : "ap_enable_reg_pp0_iter18", "FromFinalOperation" : "ap_enable_operation_2132", "FromFinalSV" : "19", "FromAddress" : "local_C_4_V_address1", "FromType" : "W", "ToInitialState" : "ap_enable_state11_pp0_iter9_stage0", "ToInitialIteration" : "ap_enable_reg_pp0_iter9", "ToInitialNextIteration" : "ap_enable_reg_pp0_iter10", "ToInitialOperation" : "ap_enable_operation_679", "ToInitialSV" : "10", "ToFinalState" : "ap_enable_state12_pp0_iter10_stage0", "ToFinalIteration" : "ap_enable_reg_pp0_iter10", "ToFinalOperation" : "ap_enable_operation_882", "ToFinalSV" : "11", "ToAddress" : "local_C_4_V_address0", "ToType" : "R", "PipelineBlock" : "ap_block_pp0", "AddressWidth" : "7", "II" : "1", "Pragma" : "(kernel_gemm.cpp:25:1)", "Type" : "RAW", "StateEnableSignalListForFifoShift" : ["ap_enable_state11_pp0_iter9_stage0", "ap_enable_state12_pp0_iter10_stage0", "ap_enable_state20_pp0_iter18_stage0"]},
			{"FromInitialState" : "ap_enable_state20_pp0_iter18_stage0", "FromInitialIteration" : "ap_enable_reg_pp0_iter18", "FromInitialOperation" : "ap_enable_operation_2150", "FromInitialSV" : "19", "FromFinalState" : "ap_enable_state20_pp0_iter18_stage0", "FromFinalIteration" : "ap_enable_reg_pp0_iter18", "FromFinalOperation" : "ap_enable_operation_2150", "FromFinalSV" : "19", "FromAddress" : "local_C_5_V_address1", "FromType" : "W", "ToInitialState" : "ap_enable_state11_pp0_iter9_stage0", "ToInitialIteration" : "ap_enable_reg_pp0_iter9", "ToInitialNextIteration" : "ap_enable_reg_pp0_iter10", "ToInitialOperation" : "ap_enable_operation_697", "ToInitialSV" : "10", "ToFinalState" : "ap_enable_state12_pp0_iter10_stage0", "ToFinalIteration" : "ap_enable_reg_pp0_iter10", "ToFinalOperation" : "ap_enable_operation_915", "ToFinalSV" : "11", "ToAddress" : "local_C_5_V_address0", "ToType" : "R", "PipelineBlock" : "ap_block_pp0", "AddressWidth" : "7", "II" : "1", "Pragma" : "(kernel_gemm.cpp:25:1)", "Type" : "RAW", "StateEnableSignalListForFifoShift" : ["ap_enable_state11_pp0_iter9_stage0", "ap_enable_state12_pp0_iter10_stage0", "ap_enable_state20_pp0_iter18_stage0"]},
			{"FromInitialState" : "ap_enable_state20_pp0_iter18_stage0", "FromInitialIteration" : "ap_enable_reg_pp0_iter18", "FromInitialOperation" : "ap_enable_operation_2168", "FromInitialSV" : "19", "FromFinalState" : "ap_enable_state20_pp0_iter18_stage0", "FromFinalIteration" : "ap_enable_reg_pp0_iter18", "FromFinalOperation" : "ap_enable_operation_2168", "FromFinalSV" : "19", "FromAddress" : "local_C_6_V_address1", "FromType" : "W", "ToInitialState" : "ap_enable_state11_pp0_iter9_stage0", "ToInitialIteration" : "ap_enable_reg_pp0_iter9", "ToInitialNextIteration" : "ap_enable_reg_pp0_iter10", "ToInitialOperation" : "ap_enable_operation_715", "ToInitialSV" : "10", "ToFinalState" : "ap_enable_state12_pp0_iter10_stage0", "ToFinalIteration" : "ap_enable_reg_pp0_iter10", "ToFinalOperation" : "ap_enable_operation_948", "ToFinalSV" : "11", "ToAddress" : "local_C_6_V_address0", "ToType" : "R", "PipelineBlock" : "ap_block_pp0", "AddressWidth" : "7", "II" : "1", "Pragma" : "(kernel_gemm.cpp:25:1)", "Type" : "RAW", "StateEnableSignalListForFifoShift" : ["ap_enable_state11_pp0_iter9_stage0", "ap_enable_state12_pp0_iter10_stage0", "ap_enable_state20_pp0_iter18_stage0"]},
			{"FromInitialState" : "ap_enable_state20_pp0_iter18_stage0", "FromInitialIteration" : "ap_enable_reg_pp0_iter18", "FromInitialOperation" : "ap_enable_operation_2186", "FromInitialSV" : "19", "FromFinalState" : "ap_enable_state20_pp0_iter18_stage0", "FromFinalIteration" : "ap_enable_reg_pp0_iter18", "FromFinalOperation" : "ap_enable_operation_2186", "FromFinalSV" : "19", "FromAddress" : "local_C_7_V_address1", "FromType" : "W", "ToInitialState" : "ap_enable_state11_pp0_iter9_stage0", "ToInitialIteration" : "ap_enable_reg_pp0_iter9", "ToInitialNextIteration" : "ap_enable_reg_pp0_iter10", "ToInitialOperation" : "ap_enable_operation_733", "ToInitialSV" : "10", "ToFinalState" : "ap_enable_state12_pp0_iter10_stage0", "ToFinalIteration" : "ap_enable_reg_pp0_iter10", "ToFinalOperation" : "ap_enable_operation_981", "ToFinalSV" : "11", "ToAddress" : "local_C_7_V_address0", "ToType" : "R", "PipelineBlock" : "ap_block_pp0", "AddressWidth" : "7", "II" : "1", "Pragma" : "(kernel_gemm.cpp:25:1)", "Type" : "RAW", "StateEnableSignalListForFifoShift" : ["ap_enable_state11_pp0_iter9_stage0", "ap_enable_state12_pp0_iter10_stage0", "ap_enable_state20_pp0_iter18_stage0"]}],
		"Port" : [
			{"Name" : "flag", "Type" : "None", "Direction" : "I"},
			{"Name" : "local_A_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "local_B_0_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "local_B_1_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "local_B_2_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "local_B_3_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "local_B_4_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "local_B_5_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "local_B_6_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "local_B_7_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "local_C_0_V", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "local_C_1_V", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "local_C_2_V", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "local_C_3_V", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "local_C_4_V", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "local_C_5_V", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "local_C_6_V", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "local_C_7_V", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "alpha", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "30", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_fu_769.kernel_gemm_fadd_bkb_U17", "Parent" : "29"},
	{"ID" : "31", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_fu_769.kernel_gemm_fadd_bkb_U18", "Parent" : "29"},
	{"ID" : "32", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_fu_769.kernel_gemm_fadd_bkb_U19", "Parent" : "29"},
	{"ID" : "33", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_fu_769.kernel_gemm_fadd_bkb_U20", "Parent" : "29"},
	{"ID" : "34", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_fu_769.kernel_gemm_fadd_bkb_U21", "Parent" : "29"},
	{"ID" : "35", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_fu_769.kernel_gemm_fadd_bkb_U22", "Parent" : "29"},
	{"ID" : "36", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_fu_769.kernel_gemm_fadd_bkb_U23", "Parent" : "29"},
	{"ID" : "37", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_fu_769.kernel_gemm_fadd_bkb_U24", "Parent" : "29"},
	{"ID" : "38", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_fu_769.kernel_gemm_fadd_bkb_U25", "Parent" : "29"},
	{"ID" : "39", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_fu_769.kernel_gemm_fadd_bkb_U26", "Parent" : "29"},
	{"ID" : "40", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_fu_769.kernel_gemm_fadd_bkb_U27", "Parent" : "29"},
	{"ID" : "41", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_fu_769.kernel_gemm_fadd_bkb_U28", "Parent" : "29"},
	{"ID" : "42", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_fu_769.kernel_gemm_fadd_bkb_U29", "Parent" : "29"},
	{"ID" : "43", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_fu_769.kernel_gemm_fadd_bkb_U30", "Parent" : "29"},
	{"ID" : "44", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_fu_769.kernel_gemm_fadd_bkb_U31", "Parent" : "29"},
	{"ID" : "45", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_fu_769.kernel_gemm_fadd_bkb_U32", "Parent" : "29"},
	{"ID" : "46", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_fu_769.kernel_gemm_fadd_bkb_U33", "Parent" : "29"},
	{"ID" : "47", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_fu_769.kernel_gemm_fadd_bkb_U34", "Parent" : "29"},
	{"ID" : "48", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_fu_769.kernel_gemm_fadd_bkb_U35", "Parent" : "29"},
	{"ID" : "49", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_fu_769.kernel_gemm_fadd_bkb_U36", "Parent" : "29"},
	{"ID" : "50", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_fu_769.kernel_gemm_fadd_bkb_U37", "Parent" : "29"},
	{"ID" : "51", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_fu_769.kernel_gemm_fadd_bkb_U38", "Parent" : "29"},
	{"ID" : "52", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_fu_769.kernel_gemm_fadd_bkb_U39", "Parent" : "29"},
	{"ID" : "53", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_fu_769.kernel_gemm_fadd_bkb_U40", "Parent" : "29"},
	{"ID" : "54", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_fu_769.kernel_gemm_fadd_bkb_U41", "Parent" : "29"},
	{"ID" : "55", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_fu_769.kernel_gemm_fadd_bkb_U42", "Parent" : "29"},
	{"ID" : "56", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_fu_769.kernel_gemm_fadd_bkb_U43", "Parent" : "29"},
	{"ID" : "57", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_fu_769.kernel_gemm_fadd_bkb_U44", "Parent" : "29"},
	{"ID" : "58", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_fu_769.kernel_gemm_fadd_bkb_U45", "Parent" : "29"},
	{"ID" : "59", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_fu_769.kernel_gemm_fadd_bkb_U46", "Parent" : "29"},
	{"ID" : "60", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_fu_769.kernel_gemm_fadd_bkb_U47", "Parent" : "29"},
	{"ID" : "61", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_fu_769.kernel_gemm_fadd_bkb_U48", "Parent" : "29"},
	{"ID" : "62", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_fu_769.kernel_gemm_fadd_bkb_U49", "Parent" : "29"},
	{"ID" : "63", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_fu_769.kernel_gemm_fadd_bkb_U50", "Parent" : "29"},
	{"ID" : "64", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_fu_769.kernel_gemm_fadd_bkb_U51", "Parent" : "29"},
	{"ID" : "65", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_fu_769.kernel_gemm_fadd_bkb_U52", "Parent" : "29"},
	{"ID" : "66", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_fu_769.kernel_gemm_fadd_bkb_U53", "Parent" : "29"},
	{"ID" : "67", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_fu_769.kernel_gemm_fadd_bkb_U54", "Parent" : "29"},
	{"ID" : "68", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_fu_769.kernel_gemm_fadd_bkb_U55", "Parent" : "29"},
	{"ID" : "69", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_fu_769.kernel_gemm_fadd_bkb_U56", "Parent" : "29"},
	{"ID" : "70", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_fu_769.kernel_gemm_fadd_bkb_U57", "Parent" : "29"},
	{"ID" : "71", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_fu_769.kernel_gemm_fadd_bkb_U58", "Parent" : "29"},
	{"ID" : "72", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_fu_769.kernel_gemm_fadd_bkb_U59", "Parent" : "29"},
	{"ID" : "73", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_fu_769.kernel_gemm_fadd_bkb_U60", "Parent" : "29"},
	{"ID" : "74", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_fu_769.kernel_gemm_fadd_bkb_U61", "Parent" : "29"},
	{"ID" : "75", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_fu_769.kernel_gemm_fadd_bkb_U62", "Parent" : "29"},
	{"ID" : "76", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_fu_769.kernel_gemm_fadd_bkb_U63", "Parent" : "29"},
	{"ID" : "77", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_fu_769.kernel_gemm_fadd_bkb_U64", "Parent" : "29"},
	{"ID" : "78", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_fu_769.kernel_gemm_fadd_bkb_U65", "Parent" : "29"},
	{"ID" : "79", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_fu_769.kernel_gemm_fadd_bkb_U66", "Parent" : "29"},
	{"ID" : "80", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_fu_769.kernel_gemm_fadd_bkb_U67", "Parent" : "29"},
	{"ID" : "81", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_fu_769.kernel_gemm_fadd_bkb_U68", "Parent" : "29"},
	{"ID" : "82", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_fu_769.kernel_gemm_fadd_bkb_U69", "Parent" : "29"},
	{"ID" : "83", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_fu_769.kernel_gemm_fadd_bkb_U70", "Parent" : "29"},
	{"ID" : "84", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_fu_769.kernel_gemm_fadd_bkb_U71", "Parent" : "29"},
	{"ID" : "85", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_fu_769.kernel_gemm_fadd_bkb_U72", "Parent" : "29"},
	{"ID" : "86", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_fu_769.kernel_gemm_fadd_bkb_U73", "Parent" : "29"},
	{"ID" : "87", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_fu_769.kernel_gemm_fadd_bkb_U74", "Parent" : "29"},
	{"ID" : "88", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_fu_769.kernel_gemm_fadd_bkb_U75", "Parent" : "29"},
	{"ID" : "89", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_fu_769.kernel_gemm_fadd_bkb_U76", "Parent" : "29"},
	{"ID" : "90", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_fu_769.kernel_gemm_fadd_bkb_U77", "Parent" : "29"},
	{"ID" : "91", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_fu_769.kernel_gemm_fadd_bkb_U78", "Parent" : "29"},
	{"ID" : "92", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_fu_769.kernel_gemm_fadd_bkb_U79", "Parent" : "29"},
	{"ID" : "93", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_fu_769.kernel_gemm_fadd_bkb_U80", "Parent" : "29"},
	{"ID" : "94", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_fu_769.kernel_gemm_fadd_bkb_U81", "Parent" : "29"},
	{"ID" : "95", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_fu_769.kernel_gemm_fadd_bkb_U82", "Parent" : "29"},
	{"ID" : "96", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_fu_769.kernel_gemm_fadd_bkb_U83", "Parent" : "29"},
	{"ID" : "97", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_fu_769.kernel_gemm_fadd_bkb_U84", "Parent" : "29"},
	{"ID" : "98", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_fu_769.kernel_gemm_fadd_bkb_U85", "Parent" : "29"},
	{"ID" : "99", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_fu_769.kernel_gemm_fadd_bkb_U86", "Parent" : "29"},
	{"ID" : "100", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_fu_769.kernel_gemm_fadd_bkb_U87", "Parent" : "29"},
	{"ID" : "101", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_fu_769.kernel_gemm_fadd_bkb_U88", "Parent" : "29"},
	{"ID" : "102", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_fu_769.kernel_gemm_fadd_bkb_U89", "Parent" : "29"},
	{"ID" : "103", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_fu_769.kernel_gemm_fadd_bkb_U90", "Parent" : "29"},
	{"ID" : "104", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_fu_769.kernel_gemm_fadd_bkb_U91", "Parent" : "29"},
	{"ID" : "105", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_fu_769.kernel_gemm_fadd_bkb_U92", "Parent" : "29"},
	{"ID" : "106", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_fu_769.kernel_gemm_fadd_bkb_U93", "Parent" : "29"},
	{"ID" : "107", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_fu_769.kernel_gemm_fadd_bkb_U94", "Parent" : "29"},
	{"ID" : "108", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_fu_769.kernel_gemm_fadd_bkb_U95", "Parent" : "29"},
	{"ID" : "109", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_fu_769.kernel_gemm_fadd_bkb_U96", "Parent" : "29"},
	{"ID" : "110", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_fu_769.kernel_gemm_fadd_bkb_U97", "Parent" : "29"},
	{"ID" : "111", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_fu_769.kernel_gemm_fadd_bkb_U98", "Parent" : "29"},
	{"ID" : "112", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_fu_769.kernel_gemm_fadd_bkb_U99", "Parent" : "29"},
	{"ID" : "113", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_fu_769.kernel_gemm_fadd_bkb_U100", "Parent" : "29"},
	{"ID" : "114", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_fu_769.kernel_gemm_fadd_bkb_U101", "Parent" : "29"},
	{"ID" : "115", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_fu_769.kernel_gemm_fadd_bkb_U102", "Parent" : "29"},
	{"ID" : "116", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_fu_769.kernel_gemm_fadd_bkb_U103", "Parent" : "29"},
	{"ID" : "117", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_fu_769.kernel_gemm_fadd_bkb_U104", "Parent" : "29"},
	{"ID" : "118", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_fu_769.kernel_gemm_fadd_bkb_U105", "Parent" : "29"},
	{"ID" : "119", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_fu_769.kernel_gemm_fadd_bkb_U106", "Parent" : "29"},
	{"ID" : "120", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_fu_769.kernel_gemm_fadd_bkb_U107", "Parent" : "29"},
	{"ID" : "121", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_fu_769.kernel_gemm_fadd_bkb_U108", "Parent" : "29"},
	{"ID" : "122", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_fu_769.kernel_gemm_fadd_bkb_U109", "Parent" : "29"},
	{"ID" : "123", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_fu_769.kernel_gemm_fadd_bkb_U110", "Parent" : "29"},
	{"ID" : "124", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_fu_769.kernel_gemm_fadd_bkb_U111", "Parent" : "29"},
	{"ID" : "125", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_fu_769.kernel_gemm_fadd_bkb_U112", "Parent" : "29"},
	{"ID" : "126", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_fu_769.kernel_gemm_fadd_bkb_U113", "Parent" : "29"},
	{"ID" : "127", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_fu_769.kernel_gemm_fadd_bkb_U114", "Parent" : "29"},
	{"ID" : "128", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_fu_769.kernel_gemm_fadd_bkb_U115", "Parent" : "29"},
	{"ID" : "129", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_fu_769.kernel_gemm_fadd_bkb_U116", "Parent" : "29"},
	{"ID" : "130", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_fu_769.kernel_gemm_fadd_bkb_U117", "Parent" : "29"},
	{"ID" : "131", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_fu_769.kernel_gemm_fadd_bkb_U118", "Parent" : "29"},
	{"ID" : "132", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_fu_769.kernel_gemm_fadd_bkb_U119", "Parent" : "29"},
	{"ID" : "133", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_fu_769.kernel_gemm_fadd_bkb_U120", "Parent" : "29"},
	{"ID" : "134", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_fu_769.kernel_gemm_fadd_bkb_U121", "Parent" : "29"},
	{"ID" : "135", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_fu_769.kernel_gemm_fadd_bkb_U122", "Parent" : "29"},
	{"ID" : "136", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_fu_769.kernel_gemm_fadd_bkb_U123", "Parent" : "29"},
	{"ID" : "137", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_fu_769.kernel_gemm_fadd_bkb_U124", "Parent" : "29"},
	{"ID" : "138", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_fu_769.kernel_gemm_fadd_bkb_U125", "Parent" : "29"},
	{"ID" : "139", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_fu_769.kernel_gemm_fadd_bkb_U126", "Parent" : "29"},
	{"ID" : "140", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_fu_769.kernel_gemm_fadd_bkb_U127", "Parent" : "29"},
	{"ID" : "141", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_fu_769.kernel_gemm_fadd_bkb_U128", "Parent" : "29"},
	{"ID" : "142", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_fu_769.kernel_gemm_fadd_bkb_U129", "Parent" : "29"},
	{"ID" : "143", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_fu_769.kernel_gemm_fadd_bkb_U130", "Parent" : "29"},
	{"ID" : "144", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_fu_769.kernel_gemm_fadd_bkb_U131", "Parent" : "29"},
	{"ID" : "145", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_fu_769.kernel_gemm_fadd_bkb_U132", "Parent" : "29"},
	{"ID" : "146", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_fu_769.kernel_gemm_fadd_bkb_U133", "Parent" : "29"},
	{"ID" : "147", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_fu_769.kernel_gemm_fadd_bkb_U134", "Parent" : "29"},
	{"ID" : "148", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_fu_769.kernel_gemm_fadd_bkb_U135", "Parent" : "29"},
	{"ID" : "149", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_fu_769.kernel_gemm_fadd_bkb_U136", "Parent" : "29"},
	{"ID" : "150", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_fu_769.kernel_gemm_fadd_bkb_U137", "Parent" : "29"},
	{"ID" : "151", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_fu_769.kernel_gemm_fadd_bkb_U138", "Parent" : "29"},
	{"ID" : "152", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_fu_769.kernel_gemm_fadd_bkb_U139", "Parent" : "29"},
	{"ID" : "153", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_fu_769.kernel_gemm_fadd_bkb_U140", "Parent" : "29"},
	{"ID" : "154", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_fu_769.kernel_gemm_fadd_bkb_U141", "Parent" : "29"},
	{"ID" : "155", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_fu_769.kernel_gemm_fadd_bkb_U142", "Parent" : "29"},
	{"ID" : "156", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_fu_769.kernel_gemm_fadd_bkb_U143", "Parent" : "29"},
	{"ID" : "157", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_fu_769.kernel_gemm_fadd_bkb_U144", "Parent" : "29"},
	{"ID" : "158", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_fu_769.kernel_gemm_fmul_cud_U145", "Parent" : "29"},
	{"ID" : "159", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_fu_769.kernel_gemm_fmul_cud_U146", "Parent" : "29"},
	{"ID" : "160", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_fu_769.kernel_gemm_fmul_cud_U147", "Parent" : "29"},
	{"ID" : "161", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_fu_769.kernel_gemm_fmul_cud_U148", "Parent" : "29"},
	{"ID" : "162", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_fu_769.kernel_gemm_fmul_cud_U149", "Parent" : "29"},
	{"ID" : "163", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_fu_769.kernel_gemm_fmul_cud_U150", "Parent" : "29"},
	{"ID" : "164", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_fu_769.kernel_gemm_fmul_cud_U151", "Parent" : "29"},
	{"ID" : "165", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_fu_769.kernel_gemm_fmul_cud_U152", "Parent" : "29"},
	{"ID" : "166", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_fu_769.kernel_gemm_fmul_cud_U153", "Parent" : "29"},
	{"ID" : "167", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_fu_769.kernel_gemm_fmul_cud_U154", "Parent" : "29"},
	{"ID" : "168", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_fu_769.kernel_gemm_fmul_cud_U155", "Parent" : "29"},
	{"ID" : "169", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_fu_769.kernel_gemm_fmul_cud_U156", "Parent" : "29"},
	{"ID" : "170", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_fu_769.kernel_gemm_fmul_cud_U157", "Parent" : "29"},
	{"ID" : "171", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_fu_769.kernel_gemm_fmul_cud_U158", "Parent" : "29"},
	{"ID" : "172", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_fu_769.kernel_gemm_fmul_cud_U159", "Parent" : "29"},
	{"ID" : "173", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_fu_769.kernel_gemm_fmul_cud_U160", "Parent" : "29"},
	{"ID" : "174", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_fu_769.kernel_gemm_fmul_cud_U161", "Parent" : "29"},
	{"ID" : "175", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_fu_769.kernel_gemm_fmul_cud_U162", "Parent" : "29"},
	{"ID" : "176", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_fu_769.kernel_gemm_fmul_cud_U163", "Parent" : "29"},
	{"ID" : "177", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_fu_769.kernel_gemm_fmul_cud_U164", "Parent" : "29"},
	{"ID" : "178", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_fu_769.kernel_gemm_fmul_cud_U165", "Parent" : "29"},
	{"ID" : "179", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_fu_769.kernel_gemm_fmul_cud_U166", "Parent" : "29"},
	{"ID" : "180", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_fu_769.kernel_gemm_fmul_cud_U167", "Parent" : "29"},
	{"ID" : "181", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_fu_769.kernel_gemm_fmul_cud_U168", "Parent" : "29"},
	{"ID" : "182", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_fu_769.kernel_gemm_fmul_cud_U169", "Parent" : "29"},
	{"ID" : "183", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_fu_769.kernel_gemm_fmul_cud_U170", "Parent" : "29"},
	{"ID" : "184", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_fu_769.kernel_gemm_fmul_cud_U171", "Parent" : "29"},
	{"ID" : "185", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_fu_769.kernel_gemm_fmul_cud_U172", "Parent" : "29"},
	{"ID" : "186", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_fu_769.kernel_gemm_fmul_cud_U173", "Parent" : "29"},
	{"ID" : "187", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_fu_769.kernel_gemm_fmul_cud_U174", "Parent" : "29"},
	{"ID" : "188", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_fu_769.kernel_gemm_fmul_cud_U175", "Parent" : "29"},
	{"ID" : "189", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_fu_769.kernel_gemm_fmul_cud_U176", "Parent" : "29"},
	{"ID" : "190", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_fu_769.kernel_gemm_fmul_cud_U177", "Parent" : "29"},
	{"ID" : "191", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_fu_769.kernel_gemm_fmul_cud_U178", "Parent" : "29"},
	{"ID" : "192", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_fu_769.kernel_gemm_fmul_cud_U179", "Parent" : "29"},
	{"ID" : "193", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_fu_769.kernel_gemm_fmul_cud_U180", "Parent" : "29"},
	{"ID" : "194", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_fu_769.kernel_gemm_fmul_cud_U181", "Parent" : "29"},
	{"ID" : "195", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_fu_769.kernel_gemm_fmul_cud_U182", "Parent" : "29"},
	{"ID" : "196", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_fu_769.kernel_gemm_fmul_cud_U183", "Parent" : "29"},
	{"ID" : "197", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_fu_769.kernel_gemm_fmul_cud_U184", "Parent" : "29"},
	{"ID" : "198", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_fu_769.kernel_gemm_fmul_cud_U185", "Parent" : "29"},
	{"ID" : "199", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_fu_769.kernel_gemm_fmul_cud_U186", "Parent" : "29"},
	{"ID" : "200", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_fu_769.kernel_gemm_fmul_cud_U187", "Parent" : "29"},
	{"ID" : "201", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_fu_769.kernel_gemm_fmul_cud_U188", "Parent" : "29"},
	{"ID" : "202", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_fu_769.kernel_gemm_fmul_cud_U189", "Parent" : "29"},
	{"ID" : "203", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_fu_769.kernel_gemm_fmul_cud_U190", "Parent" : "29"},
	{"ID" : "204", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_fu_769.kernel_gemm_fmul_cud_U191", "Parent" : "29"},
	{"ID" : "205", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_fu_769.kernel_gemm_fmul_cud_U192", "Parent" : "29"},
	{"ID" : "206", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_fu_769.kernel_gemm_fmul_cud_U193", "Parent" : "29"},
	{"ID" : "207", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_fu_769.kernel_gemm_fmul_cud_U194", "Parent" : "29"},
	{"ID" : "208", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_fu_769.kernel_gemm_fmul_cud_U195", "Parent" : "29"},
	{"ID" : "209", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_fu_769.kernel_gemm_fmul_cud_U196", "Parent" : "29"},
	{"ID" : "210", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_fu_769.kernel_gemm_fmul_cud_U197", "Parent" : "29"},
	{"ID" : "211", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_fu_769.kernel_gemm_fmul_cud_U198", "Parent" : "29"},
	{"ID" : "212", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_fu_769.kernel_gemm_fmul_cud_U199", "Parent" : "29"},
	{"ID" : "213", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_fu_769.kernel_gemm_fmul_cud_U200", "Parent" : "29"},
	{"ID" : "214", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_fu_769.kernel_gemm_fmul_cud_U201", "Parent" : "29"},
	{"ID" : "215", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_fu_769.kernel_gemm_fmul_cud_U202", "Parent" : "29"},
	{"ID" : "216", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_fu_769.kernel_gemm_fmul_cud_U203", "Parent" : "29"},
	{"ID" : "217", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_fu_769.kernel_gemm_fmul_cud_U204", "Parent" : "29"},
	{"ID" : "218", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_fu_769.kernel_gemm_fmul_cud_U205", "Parent" : "29"},
	{"ID" : "219", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_fu_769.kernel_gemm_fmul_cud_U206", "Parent" : "29"},
	{"ID" : "220", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_fu_769.kernel_gemm_fmul_cud_U207", "Parent" : "29"},
	{"ID" : "221", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_fu_769.kernel_gemm_fmul_cud_U208", "Parent" : "29"},
	{"ID" : "222", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_fu_769.kernel_gemm_fmul_cud_U209", "Parent" : "29"},
	{"ID" : "223", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_fu_769.kernel_gemm_fmul_cud_U210", "Parent" : "29"},
	{"ID" : "224", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_fu_769.kernel_gemm_fmul_cud_U211", "Parent" : "29"},
	{"ID" : "225", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_fu_769.kernel_gemm_fmul_cud_U212", "Parent" : "29"},
	{"ID" : "226", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_fu_769.kernel_gemm_fmul_cud_U213", "Parent" : "29"},
	{"ID" : "227", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_fu_769.kernel_gemm_fmul_cud_U214", "Parent" : "29"},
	{"ID" : "228", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_fu_769.kernel_gemm_fmul_cud_U215", "Parent" : "29"},
	{"ID" : "229", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_fu_769.kernel_gemm_fmul_cud_U216", "Parent" : "29"},
	{"ID" : "230", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_fu_769.kernel_gemm_fmul_cud_U217", "Parent" : "29"},
	{"ID" : "231", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_fu_769.kernel_gemm_fmul_cud_U218", "Parent" : "29"},
	{"ID" : "232", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_fu_769.kernel_gemm_fmul_cud_U219", "Parent" : "29"},
	{"ID" : "233", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_fu_769.kernel_gemm_fmul_cud_U220", "Parent" : "29"},
	{"ID" : "234", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_fu_769.kernel_gemm_fmul_cud_U221", "Parent" : "29"},
	{"ID" : "235", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_fu_769.kernel_gemm_fmul_cud_U222", "Parent" : "29"},
	{"ID" : "236", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_fu_769.kernel_gemm_fmul_cud_U223", "Parent" : "29"},
	{"ID" : "237", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_fu_769.kernel_gemm_fmul_cud_U224", "Parent" : "29"},
	{"ID" : "238", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_fu_769.kernel_gemm_fmul_cud_U225", "Parent" : "29"},
	{"ID" : "239", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_fu_769.kernel_gemm_fmul_cud_U226", "Parent" : "29"},
	{"ID" : "240", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_fu_769.kernel_gemm_fmul_cud_U227", "Parent" : "29"},
	{"ID" : "241", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_fu_769.kernel_gemm_fmul_cud_U228", "Parent" : "29"},
	{"ID" : "242", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_fu_769.kernel_gemm_fmul_cud_U229", "Parent" : "29"},
	{"ID" : "243", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_fu_769.kernel_gemm_fmul_cud_U230", "Parent" : "29"},
	{"ID" : "244", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_fu_769.kernel_gemm_fmul_cud_U231", "Parent" : "29"},
	{"ID" : "245", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_fu_769.kernel_gemm_fmul_cud_U232", "Parent" : "29"},
	{"ID" : "246", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_fu_769.kernel_gemm_fmul_cud_U233", "Parent" : "29"},
	{"ID" : "247", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_fu_769.kernel_gemm_fmul_cud_U234", "Parent" : "29"},
	{"ID" : "248", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_fu_769.kernel_gemm_fmul_cud_U235", "Parent" : "29"},
	{"ID" : "249", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_fu_769.kernel_gemm_fmul_cud_U236", "Parent" : "29"},
	{"ID" : "250", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_fu_769.kernel_gemm_fmul_cud_U237", "Parent" : "29"},
	{"ID" : "251", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_fu_769.kernel_gemm_fmul_cud_U238", "Parent" : "29"},
	{"ID" : "252", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_fu_769.kernel_gemm_fmul_cud_U239", "Parent" : "29"},
	{"ID" : "253", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_fu_769.kernel_gemm_fmul_cud_U240", "Parent" : "29"},
	{"ID" : "254", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_fu_769.kernel_gemm_fmul_cud_U241", "Parent" : "29"},
	{"ID" : "255", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_fu_769.kernel_gemm_fmul_cud_U242", "Parent" : "29"},
	{"ID" : "256", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_fu_769.kernel_gemm_fmul_cud_U243", "Parent" : "29"},
	{"ID" : "257", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_fu_769.kernel_gemm_fmul_cud_U244", "Parent" : "29"},
	{"ID" : "258", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_fu_769.kernel_gemm_fmul_cud_U245", "Parent" : "29"},
	{"ID" : "259", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_fu_769.kernel_gemm_fmul_cud_U246", "Parent" : "29"},
	{"ID" : "260", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_fu_769.kernel_gemm_fmul_cud_U247", "Parent" : "29"},
	{"ID" : "261", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_fu_769.kernel_gemm_fmul_cud_U248", "Parent" : "29"},
	{"ID" : "262", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_fu_769.kernel_gemm_fmul_cud_U249", "Parent" : "29"},
	{"ID" : "263", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_fu_769.kernel_gemm_fmul_cud_U250", "Parent" : "29"},
	{"ID" : "264", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_fu_769.kernel_gemm_fmul_cud_U251", "Parent" : "29"},
	{"ID" : "265", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_fu_769.kernel_gemm_fmul_cud_U252", "Parent" : "29"},
	{"ID" : "266", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_fu_769.kernel_gemm_fmul_cud_U253", "Parent" : "29"},
	{"ID" : "267", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_fu_769.kernel_gemm_fmul_cud_U254", "Parent" : "29"},
	{"ID" : "268", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_fu_769.kernel_gemm_fmul_cud_U255", "Parent" : "29"},
	{"ID" : "269", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_fu_769.kernel_gemm_fmul_cud_U256", "Parent" : "29"},
	{"ID" : "270", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_fu_769.kernel_gemm_fmul_cud_U257", "Parent" : "29"},
	{"ID" : "271", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_fu_769.kernel_gemm_fmul_cud_U258", "Parent" : "29"},
	{"ID" : "272", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_fu_769.kernel_gemm_fmul_cud_U259", "Parent" : "29"},
	{"ID" : "273", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_fu_769.kernel_gemm_fmul_cud_U260", "Parent" : "29"},
	{"ID" : "274", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_fu_769.kernel_gemm_fmul_cud_U261", "Parent" : "29"},
	{"ID" : "275", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_fu_769.kernel_gemm_fmul_cud_U262", "Parent" : "29"},
	{"ID" : "276", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_fu_769.kernel_gemm_fmul_cud_U263", "Parent" : "29"},
	{"ID" : "277", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_fu_769.kernel_gemm_fmul_cud_U264", "Parent" : "29"},
	{"ID" : "278", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_fu_769.kernel_gemm_fmul_cud_U265", "Parent" : "29"},
	{"ID" : "279", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_fu_769.kernel_gemm_fmul_cud_U266", "Parent" : "29"},
	{"ID" : "280", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_fu_769.kernel_gemm_fmul_cud_U267", "Parent" : "29"},
	{"ID" : "281", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_fu_769.kernel_gemm_fmul_cud_U268", "Parent" : "29"},
	{"ID" : "282", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_fu_769.kernel_gemm_fmul_cud_U269", "Parent" : "29"},
	{"ID" : "283", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_fu_769.kernel_gemm_fmul_cud_U270", "Parent" : "29"},
	{"ID" : "284", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_fu_769.kernel_gemm_fmul_cud_U271", "Parent" : "29"},
	{"ID" : "285", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_fu_769.kernel_gemm_fmul_cud_U272", "Parent" : "29"},
	{"ID" : "286", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_fu_769.kernel_gemm_fmul_cud_U273", "Parent" : "29"},
	{"ID" : "287", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_load_fu_792", "Parent" : "0",
		"CDFG" : "load",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "1", "EstimateLatencyMax" : "2070",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "flag", "Type" : "None", "Direction" : "I"},
			{"Name" : "i", "Type" : "None", "Direction" : "I"},
			{"Name" : "j", "Type" : "None", "Direction" : "I"},
			{"Name" : "k", "Type" : "None", "Direction" : "I"},
			{"Name" : "local_A_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "local_B_0_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "local_B_1_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "local_B_2_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "local_B_3_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "local_B_4_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "local_B_5_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "local_B_6_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "local_B_7_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "A_V", "Type" : "MAXI", "Direction" : "I",
				"BlockSignal" : [
					{"Name" : "A_V_blk_n_AR", "Type" : "RtlSignal"},
					{"Name" : "A_V_blk_n_R", "Type" : "RtlSignal"}]},
			{"Name" : "A_V_offset", "Type" : "None", "Direction" : "I"},
			{"Name" : "B_V_offset", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "288", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.kernel_gemm_fmul_cud_U295", "Parent" : "0"},
	{"ID" : "289", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.kernel_gemm_fmul_cud_U296", "Parent" : "0"},
	{"ID" : "290", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.kernel_gemm_fmul_cud_U297", "Parent" : "0"},
	{"ID" : "291", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.kernel_gemm_fmul_cud_U298", "Parent" : "0"},
	{"ID" : "292", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.kernel_gemm_fmul_cud_U299", "Parent" : "0"},
	{"ID" : "293", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.kernel_gemm_fmul_cud_U300", "Parent" : "0"},
	{"ID" : "294", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.kernel_gemm_fmul_cud_U301", "Parent" : "0"},
	{"ID" : "295", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.kernel_gemm_fmul_cud_U302", "Parent" : "0"},
	{"ID" : "296", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.kernel_gemm_fmul_cud_U303", "Parent" : "0"},
	{"ID" : "297", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.kernel_gemm_fmul_cud_U304", "Parent" : "0"},
	{"ID" : "298", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.kernel_gemm_fmul_cud_U305", "Parent" : "0"},
	{"ID" : "299", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.kernel_gemm_fmul_cud_U306", "Parent" : "0"},
	{"ID" : "300", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.kernel_gemm_fmul_cud_U307", "Parent" : "0"},
	{"ID" : "301", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.kernel_gemm_fmul_cud_U308", "Parent" : "0"},
	{"ID" : "302", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.kernel_gemm_fmul_cud_U309", "Parent" : "0"},
	{"ID" : "303", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.kernel_gemm_fmul_cud_U310", "Parent" : "0"},
	{"ID" : "304", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.kernel_gemm_fmul_cud_U311", "Parent" : "0"},
	{"ID" : "305", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.kernel_gemm_fmul_cud_U312", "Parent" : "0"},
	{"ID" : "306", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.kernel_gemm_fmul_cud_U313", "Parent" : "0"},
	{"ID" : "307", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.kernel_gemm_fmul_cud_U314", "Parent" : "0"},
	{"ID" : "308", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.kernel_gemm_fmul_cud_U315", "Parent" : "0"},
	{"ID" : "309", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.kernel_gemm_fmul_cud_U316", "Parent" : "0"},
	{"ID" : "310", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.kernel_gemm_fmul_cud_U317", "Parent" : "0"},
	{"ID" : "311", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.kernel_gemm_fmul_cud_U318", "Parent" : "0"},
	{"ID" : "312", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.kernel_gemm_fmul_cud_U319", "Parent" : "0"},
	{"ID" : "313", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.kernel_gemm_fmul_cud_U320", "Parent" : "0"},
	{"ID" : "314", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.kernel_gemm_fmul_cud_U321", "Parent" : "0"},
	{"ID" : "315", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.kernel_gemm_fmul_cud_U322", "Parent" : "0"},
	{"ID" : "316", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.kernel_gemm_fmul_cud_U323", "Parent" : "0"},
	{"ID" : "317", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.kernel_gemm_fmul_cud_U324", "Parent" : "0"},
	{"ID" : "318", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.kernel_gemm_fmul_cud_U325", "Parent" : "0"},
	{"ID" : "319", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.kernel_gemm_fmul_cud_U326", "Parent" : "0"},
	{"ID" : "320", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.kernel_gemm_fmul_cud_U327", "Parent" : "0"},
	{"ID" : "321", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.kernel_gemm_fmul_cud_U328", "Parent" : "0"},
	{"ID" : "322", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.kernel_gemm_fmul_cud_U329", "Parent" : "0"},
	{"ID" : "323", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.kernel_gemm_fmul_cud_U330", "Parent" : "0"},
	{"ID" : "324", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.kernel_gemm_fmul_cud_U331", "Parent" : "0"},
	{"ID" : "325", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.kernel_gemm_fmul_cud_U332", "Parent" : "0"},
	{"ID" : "326", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.kernel_gemm_fmul_cud_U333", "Parent" : "0"},
	{"ID" : "327", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.kernel_gemm_fmul_cud_U334", "Parent" : "0"},
	{"ID" : "328", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.kernel_gemm_fmul_cud_U335", "Parent" : "0"},
	{"ID" : "329", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.kernel_gemm_fmul_cud_U336", "Parent" : "0"},
	{"ID" : "330", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.kernel_gemm_fmul_cud_U337", "Parent" : "0"},
	{"ID" : "331", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.kernel_gemm_fmul_cud_U338", "Parent" : "0"},
	{"ID" : "332", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.kernel_gemm_fmul_cud_U339", "Parent" : "0"},
	{"ID" : "333", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.kernel_gemm_fmul_cud_U340", "Parent" : "0"},
	{"ID" : "334", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.kernel_gemm_fmul_cud_U341", "Parent" : "0"},
	{"ID" : "335", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.kernel_gemm_fmul_cud_U342", "Parent" : "0"},
	{"ID" : "336", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.kernel_gemm_fmul_cud_U343", "Parent" : "0"},
	{"ID" : "337", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.kernel_gemm_fmul_cud_U344", "Parent" : "0"},
	{"ID" : "338", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.kernel_gemm_fmul_cud_U345", "Parent" : "0"},
	{"ID" : "339", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.kernel_gemm_fmul_cud_U346", "Parent" : "0"},
	{"ID" : "340", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.kernel_gemm_fmul_cud_U347", "Parent" : "0"},
	{"ID" : "341", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.kernel_gemm_fmul_cud_U348", "Parent" : "0"},
	{"ID" : "342", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.kernel_gemm_fmul_cud_U349", "Parent" : "0"},
	{"ID" : "343", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.kernel_gemm_fmul_cud_U350", "Parent" : "0"},
	{"ID" : "344", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.kernel_gemm_fmul_cud_U351", "Parent" : "0"},
	{"ID" : "345", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.kernel_gemm_fmul_cud_U352", "Parent" : "0"},
	{"ID" : "346", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.kernel_gemm_fmul_cud_U353", "Parent" : "0"},
	{"ID" : "347", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.kernel_gemm_fmul_cud_U354", "Parent" : "0"},
	{"ID" : "348", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.kernel_gemm_fmul_cud_U355", "Parent" : "0"},
	{"ID" : "349", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.kernel_gemm_fmul_cud_U356", "Parent" : "0"},
	{"ID" : "350", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.kernel_gemm_fmul_cud_U357", "Parent" : "0"},
	{"ID" : "351", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.kernel_gemm_fmul_cud_U358", "Parent" : "0"},
	{"ID" : "352", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.kernel_gemm_fmul_cud_U359", "Parent" : "0"},
	{"ID" : "353", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.kernel_gemm_fmul_cud_U360", "Parent" : "0"},
	{"ID" : "354", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.kernel_gemm_fmul_cud_U361", "Parent" : "0"},
	{"ID" : "355", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.kernel_gemm_fmul_cud_U362", "Parent" : "0"},
	{"ID" : "356", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.kernel_gemm_fmul_cud_U363", "Parent" : "0"},
	{"ID" : "357", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.kernel_gemm_fmul_cud_U364", "Parent" : "0"},
	{"ID" : "358", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.kernel_gemm_fmul_cud_U365", "Parent" : "0"},
	{"ID" : "359", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.kernel_gemm_fmul_cud_U366", "Parent" : "0"},
	{"ID" : "360", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.kernel_gemm_fmul_cud_U367", "Parent" : "0"},
	{"ID" : "361", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.kernel_gemm_fmul_cud_U368", "Parent" : "0"},
	{"ID" : "362", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.kernel_gemm_fmul_cud_U369", "Parent" : "0"},
	{"ID" : "363", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.kernel_gemm_fmul_cud_U370", "Parent" : "0"},
	{"ID" : "364", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.kernel_gemm_fmul_cud_U371", "Parent" : "0"},
	{"ID" : "365", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.kernel_gemm_fmul_cud_U372", "Parent" : "0"},
	{"ID" : "366", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.kernel_gemm_fmul_cud_U373", "Parent" : "0"},
	{"ID" : "367", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.kernel_gemm_fmul_cud_U374", "Parent" : "0"},
	{"ID" : "368", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.kernel_gemm_fmul_cud_U375", "Parent" : "0"},
	{"ID" : "369", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.kernel_gemm_fmul_cud_U376", "Parent" : "0"},
	{"ID" : "370", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.kernel_gemm_fmul_cud_U377", "Parent" : "0"},
	{"ID" : "371", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.kernel_gemm_fmul_cud_U378", "Parent" : "0"},
	{"ID" : "372", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.kernel_gemm_fmul_cud_U379", "Parent" : "0"},
	{"ID" : "373", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.kernel_gemm_fmul_cud_U380", "Parent" : "0"},
	{"ID" : "374", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.kernel_gemm_fmul_cud_U381", "Parent" : "0"},
	{"ID" : "375", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.kernel_gemm_fmul_cud_U382", "Parent" : "0"},
	{"ID" : "376", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.kernel_gemm_fmul_cud_U383", "Parent" : "0"},
	{"ID" : "377", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.kernel_gemm_fmul_cud_U384", "Parent" : "0"},
	{"ID" : "378", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.kernel_gemm_fmul_cud_U385", "Parent" : "0"},
	{"ID" : "379", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.kernel_gemm_fmul_cud_U386", "Parent" : "0"},
	{"ID" : "380", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.kernel_gemm_fmul_cud_U387", "Parent" : "0"},
	{"ID" : "381", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.kernel_gemm_fmul_cud_U388", "Parent" : "0"},
	{"ID" : "382", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.kernel_gemm_fmul_cud_U389", "Parent" : "0"},
	{"ID" : "383", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.kernel_gemm_fmul_cud_U390", "Parent" : "0"},
	{"ID" : "384", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.kernel_gemm_fmul_cud_U391", "Parent" : "0"},
	{"ID" : "385", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.kernel_gemm_fmul_cud_U392", "Parent" : "0"},
	{"ID" : "386", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.kernel_gemm_fmul_cud_U393", "Parent" : "0"},
	{"ID" : "387", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.kernel_gemm_fmul_cud_U394", "Parent" : "0"},
	{"ID" : "388", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.kernel_gemm_fmul_cud_U395", "Parent" : "0"},
	{"ID" : "389", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.kernel_gemm_fmul_cud_U396", "Parent" : "0"},
	{"ID" : "390", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.kernel_gemm_fmul_cud_U397", "Parent" : "0"},
	{"ID" : "391", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.kernel_gemm_fmul_cud_U398", "Parent" : "0"},
	{"ID" : "392", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.kernel_gemm_fmul_cud_U399", "Parent" : "0"},
	{"ID" : "393", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.kernel_gemm_fmul_cud_U400", "Parent" : "0"},
	{"ID" : "394", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.kernel_gemm_fmul_cud_U401", "Parent" : "0"},
	{"ID" : "395", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.kernel_gemm_fmul_cud_U402", "Parent" : "0"},
	{"ID" : "396", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.kernel_gemm_fmul_cud_U403", "Parent" : "0"},
	{"ID" : "397", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.kernel_gemm_fmul_cud_U404", "Parent" : "0"},
	{"ID" : "398", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.kernel_gemm_fmul_cud_U405", "Parent" : "0"},
	{"ID" : "399", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.kernel_gemm_fmul_cud_U406", "Parent" : "0"},
	{"ID" : "400", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.kernel_gemm_fmul_cud_U407", "Parent" : "0"},
	{"ID" : "401", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.kernel_gemm_fmul_cud_U408", "Parent" : "0"},
	{"ID" : "402", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.kernel_gemm_fmul_cud_U409", "Parent" : "0"},
	{"ID" : "403", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.kernel_gemm_fmul_cud_U410", "Parent" : "0"},
	{"ID" : "404", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.kernel_gemm_fmul_cud_U411", "Parent" : "0"},
	{"ID" : "405", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.kernel_gemm_fmul_cud_U412", "Parent" : "0"},
	{"ID" : "406", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.kernel_gemm_fmul_cud_U413", "Parent" : "0"},
	{"ID" : "407", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.kernel_gemm_fmul_cud_U414", "Parent" : "0"},
	{"ID" : "408", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.kernel_gemm_fmul_cud_U415", "Parent" : "0"},
	{"ID" : "409", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.kernel_gemm_fmul_cud_U416", "Parent" : "0"},
	{"ID" : "410", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.kernel_gemm_fmul_cud_U417", "Parent" : "0"},
	{"ID" : "411", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.kernel_gemm_fmul_cud_U418", "Parent" : "0"},
	{"ID" : "412", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.kernel_gemm_fmul_cud_U419", "Parent" : "0"},
	{"ID" : "413", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.kernel_gemm_fmul_cud_U420", "Parent" : "0"},
	{"ID" : "414", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.kernel_gemm_fmul_cud_U421", "Parent" : "0"},
	{"ID" : "415", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.kernel_gemm_fmul_cud_U422", "Parent" : "0"},
	{"ID" : "416", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.kernel_gemm_mux_8DeQ_U423", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
	kernel_gemm {
		gmem {Type IO LastRead 13 FirstWrite -1}
		C_V {Type I LastRead 0 FirstWrite -1}
		A_V {Type I LastRead 0 FirstWrite -1}
		B_V {Type I LastRead 0 FirstWrite -1}
		alpha {Type I LastRead 0 FirstWrite -1}
		beta {Type I LastRead 0 FirstWrite -1}}
	compute {
		flag {Type I LastRead 0 FirstWrite -1}
		local_A_V {Type I LastRead 1 FirstWrite -1}
		local_B_0_V {Type I LastRead 6 FirstWrite -1}
		local_B_1_V {Type I LastRead 6 FirstWrite -1}
		local_B_2_V {Type I LastRead 6 FirstWrite -1}
		local_B_3_V {Type I LastRead 6 FirstWrite -1}
		local_B_4_V {Type I LastRead 6 FirstWrite -1}
		local_B_5_V {Type I LastRead 6 FirstWrite -1}
		local_B_6_V {Type I LastRead 6 FirstWrite -1}
		local_B_7_V {Type I LastRead 6 FirstWrite -1}
		local_C_0_V {Type IO LastRead 10 FirstWrite 19}
		local_C_1_V {Type IO LastRead 10 FirstWrite 19}
		local_C_2_V {Type IO LastRead 10 FirstWrite 19}
		local_C_3_V {Type IO LastRead 10 FirstWrite 19}
		local_C_4_V {Type IO LastRead 10 FirstWrite 19}
		local_C_5_V {Type IO LastRead 10 FirstWrite 19}
		local_C_6_V {Type IO LastRead 10 FirstWrite 19}
		local_C_7_V {Type IO LastRead 10 FirstWrite 19}
		alpha {Type I LastRead 0 FirstWrite -1}}
	load {
		flag {Type I LastRead 0 FirstWrite -1}
		i {Type I LastRead 0 FirstWrite -1}
		j {Type I LastRead 0 FirstWrite -1}
		k {Type I LastRead 0 FirstWrite -1}
		local_A_V {Type O LastRead -1 FirstWrite 11}
		local_B_0_V {Type O LastRead -1 FirstWrite 13}
		local_B_1_V {Type O LastRead -1 FirstWrite 13}
		local_B_2_V {Type O LastRead -1 FirstWrite 13}
		local_B_3_V {Type O LastRead -1 FirstWrite 13}
		local_B_4_V {Type O LastRead -1 FirstWrite 13}
		local_B_5_V {Type O LastRead -1 FirstWrite 13}
		local_B_6_V {Type O LastRead -1 FirstWrite 13}
		local_B_7_V {Type O LastRead -1 FirstWrite 13}
		A_V {Type I LastRead 12 FirstWrite -1}
		A_V_offset {Type I LastRead 0 FirstWrite -1}
		B_V_offset {Type I LastRead 0 FirstWrite -1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "577025", "Max" : "71958529"}
	, {"Name" : "Interval", "Min" : "577026", "Max" : "71958530"}
]}

set PipelineEnableSignalInfo {[
	{"Pipeline" : "0", "EnableSignal" : "ap_enable_pp0"}
	{"Pipeline" : "1", "EnableSignal" : "ap_enable_pp1"}
	{"Pipeline" : "2", "EnableSignal" : "ap_enable_pp2"}
]}

set Spec2ImplPortList { 
	gmem { m_axi {  { m_axi_gmem_AWVALID VALID 1 1 }  { m_axi_gmem_AWREADY READY 0 1 }  { m_axi_gmem_AWADDR ADDR 1 32 }  { m_axi_gmem_AWID ID 1 1 }  { m_axi_gmem_AWLEN LEN 1 8 }  { m_axi_gmem_AWSIZE SIZE 1 3 }  { m_axi_gmem_AWBURST BURST 1 2 }  { m_axi_gmem_AWLOCK LOCK 1 2 }  { m_axi_gmem_AWCACHE CACHE 1 4 }  { m_axi_gmem_AWPROT PROT 1 3 }  { m_axi_gmem_AWQOS QOS 1 4 }  { m_axi_gmem_AWREGION REGION 1 4 }  { m_axi_gmem_AWUSER USER 1 1 }  { m_axi_gmem_WVALID VALID 1 1 }  { m_axi_gmem_WREADY READY 0 1 }  { m_axi_gmem_WDATA DATA 1 512 }  { m_axi_gmem_WSTRB STRB 1 64 }  { m_axi_gmem_WLAST LAST 1 1 }  { m_axi_gmem_WID ID 1 1 }  { m_axi_gmem_WUSER USER 1 1 }  { m_axi_gmem_ARVALID VALID 1 1 }  { m_axi_gmem_ARREADY READY 0 1 }  { m_axi_gmem_ARADDR ADDR 1 32 }  { m_axi_gmem_ARID ID 1 1 }  { m_axi_gmem_ARLEN LEN 1 8 }  { m_axi_gmem_ARSIZE SIZE 1 3 }  { m_axi_gmem_ARBURST BURST 1 2 }  { m_axi_gmem_ARLOCK LOCK 1 2 }  { m_axi_gmem_ARCACHE CACHE 1 4 }  { m_axi_gmem_ARPROT PROT 1 3 }  { m_axi_gmem_ARQOS QOS 1 4 }  { m_axi_gmem_ARREGION REGION 1 4 }  { m_axi_gmem_ARUSER USER 1 1 }  { m_axi_gmem_RVALID VALID 0 1 }  { m_axi_gmem_RREADY READY 1 1 }  { m_axi_gmem_RDATA DATA 0 512 }  { m_axi_gmem_RLAST LAST 0 1 }  { m_axi_gmem_RID ID 0 1 }  { m_axi_gmem_RUSER USER 0 1 }  { m_axi_gmem_RRESP RESP 0 2 }  { m_axi_gmem_BVALID VALID 0 1 }  { m_axi_gmem_BREADY READY 1 1 }  { m_axi_gmem_BRESP RESP 0 2 }  { m_axi_gmem_BID ID 0 1 }  { m_axi_gmem_BUSER USER 0 1 } } }
	alpha { ap_none {  { alpha in_data 0 32 } } }
	beta { ap_none {  { beta in_data 0 32 } } }
}

set busDeadlockParameterList { 
	{ gmem { NUM_READ_OUTSTANDING 16 NUM_WRITE_OUTSTANDING 16 MAX_READ_BURST_LENGTH 16 MAX_WRITE_BURST_LENGTH 16 } } \
}

# RTL port scheduling information:
set fifoSchedulingInfoList { 
}

# RTL bus port read request latency information:
set busReadReqLatencyList { 
	{ gmem 1 }
}

# RTL bus port write response latency information:
set busWriteResLatencyList { 
	{ gmem 1 }
}

# RTL array port load latency information:
set memoryLoadLatencyList { 
}
