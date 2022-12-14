set moduleName load
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
set C_modelName {load}
set C_modelType { void 0 }
set C_modelArgList {
	{ flag int 1 regular  }
	{ i int 12 regular  }
	{ j int 12 regular  }
	{ k int 12 regular  }
	{ local_A_V int 512 regular {array 1024 { 0 3 } 0 1 }  }
	{ local_B_0_V int 512 regular {array 128 { 0 3 } 0 1 }  }
	{ local_B_1_V int 512 regular {array 128 { 0 3 } 0 1 }  }
	{ local_B_2_V int 512 regular {array 128 { 0 3 } 0 1 }  }
	{ local_B_3_V int 512 regular {array 128 { 0 3 } 0 1 }  }
	{ local_B_4_V int 512 regular {array 128 { 0 3 } 0 1 }  }
	{ local_B_5_V int 512 regular {array 128 { 0 3 } 0 1 }  }
	{ local_B_6_V int 512 regular {array 128 { 0 3 } 0 1 }  }
	{ local_B_7_V int 512 regular {array 128 { 0 3 } 0 1 }  }
	{ A_V int 512 regular {axi_master 0}  }
	{ A_V_offset int 26 regular  }
	{ B_V_offset int 26 regular  }
}
set C_modelArgMapList {[ 
	{ "Name" : "flag", "interface" : "wire", "bitwidth" : 1, "direction" : "READONLY"} , 
 	{ "Name" : "i", "interface" : "wire", "bitwidth" : 12, "direction" : "READONLY"} , 
 	{ "Name" : "j", "interface" : "wire", "bitwidth" : 12, "direction" : "READONLY"} , 
 	{ "Name" : "k", "interface" : "wire", "bitwidth" : 12, "direction" : "READONLY"} , 
 	{ "Name" : "local_A_V", "interface" : "memory", "bitwidth" : 512, "direction" : "WRITEONLY"} , 
 	{ "Name" : "local_B_0_V", "interface" : "memory", "bitwidth" : 512, "direction" : "WRITEONLY"} , 
 	{ "Name" : "local_B_1_V", "interface" : "memory", "bitwidth" : 512, "direction" : "WRITEONLY"} , 
 	{ "Name" : "local_B_2_V", "interface" : "memory", "bitwidth" : 512, "direction" : "WRITEONLY"} , 
 	{ "Name" : "local_B_3_V", "interface" : "memory", "bitwidth" : 512, "direction" : "WRITEONLY"} , 
 	{ "Name" : "local_B_4_V", "interface" : "memory", "bitwidth" : 512, "direction" : "WRITEONLY"} , 
 	{ "Name" : "local_B_5_V", "interface" : "memory", "bitwidth" : 512, "direction" : "WRITEONLY"} , 
 	{ "Name" : "local_B_6_V", "interface" : "memory", "bitwidth" : 512, "direction" : "WRITEONLY"} , 
 	{ "Name" : "local_B_7_V", "interface" : "memory", "bitwidth" : 512, "direction" : "WRITEONLY"} , 
 	{ "Name" : "A_V", "interface" : "axi_master", "bitwidth" : 512, "direction" : "READONLY"} , 
 	{ "Name" : "A_V_offset", "interface" : "wire", "bitwidth" : 26, "direction" : "READONLY"} , 
 	{ "Name" : "B_V_offset", "interface" : "wire", "bitwidth" : 26, "direction" : "READONLY"} ]}
# RTL Port declarations: 
set portNum 93
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ flag sc_in sc_lv 1 signal 0 } 
	{ i sc_in sc_lv 12 signal 1 } 
	{ j sc_in sc_lv 12 signal 2 } 
	{ k sc_in sc_lv 12 signal 3 } 
	{ local_A_V_address0 sc_out sc_lv 10 signal 4 } 
	{ local_A_V_ce0 sc_out sc_logic 1 signal 4 } 
	{ local_A_V_we0 sc_out sc_logic 1 signal 4 } 
	{ local_A_V_d0 sc_out sc_lv 512 signal 4 } 
	{ local_B_0_V_address0 sc_out sc_lv 7 signal 5 } 
	{ local_B_0_V_ce0 sc_out sc_logic 1 signal 5 } 
	{ local_B_0_V_we0 sc_out sc_logic 1 signal 5 } 
	{ local_B_0_V_d0 sc_out sc_lv 512 signal 5 } 
	{ local_B_1_V_address0 sc_out sc_lv 7 signal 6 } 
	{ local_B_1_V_ce0 sc_out sc_logic 1 signal 6 } 
	{ local_B_1_V_we0 sc_out sc_logic 1 signal 6 } 
	{ local_B_1_V_d0 sc_out sc_lv 512 signal 6 } 
	{ local_B_2_V_address0 sc_out sc_lv 7 signal 7 } 
	{ local_B_2_V_ce0 sc_out sc_logic 1 signal 7 } 
	{ local_B_2_V_we0 sc_out sc_logic 1 signal 7 } 
	{ local_B_2_V_d0 sc_out sc_lv 512 signal 7 } 
	{ local_B_3_V_address0 sc_out sc_lv 7 signal 8 } 
	{ local_B_3_V_ce0 sc_out sc_logic 1 signal 8 } 
	{ local_B_3_V_we0 sc_out sc_logic 1 signal 8 } 
	{ local_B_3_V_d0 sc_out sc_lv 512 signal 8 } 
	{ local_B_4_V_address0 sc_out sc_lv 7 signal 9 } 
	{ local_B_4_V_ce0 sc_out sc_logic 1 signal 9 } 
	{ local_B_4_V_we0 sc_out sc_logic 1 signal 9 } 
	{ local_B_4_V_d0 sc_out sc_lv 512 signal 9 } 
	{ local_B_5_V_address0 sc_out sc_lv 7 signal 10 } 
	{ local_B_5_V_ce0 sc_out sc_logic 1 signal 10 } 
	{ local_B_5_V_we0 sc_out sc_logic 1 signal 10 } 
	{ local_B_5_V_d0 sc_out sc_lv 512 signal 10 } 
	{ local_B_6_V_address0 sc_out sc_lv 7 signal 11 } 
	{ local_B_6_V_ce0 sc_out sc_logic 1 signal 11 } 
	{ local_B_6_V_we0 sc_out sc_logic 1 signal 11 } 
	{ local_B_6_V_d0 sc_out sc_lv 512 signal 11 } 
	{ local_B_7_V_address0 sc_out sc_lv 7 signal 12 } 
	{ local_B_7_V_ce0 sc_out sc_logic 1 signal 12 } 
	{ local_B_7_V_we0 sc_out sc_logic 1 signal 12 } 
	{ local_B_7_V_d0 sc_out sc_lv 512 signal 12 } 
	{ m_axi_A_V_AWVALID sc_out sc_logic 1 signal 13 } 
	{ m_axi_A_V_AWREADY sc_in sc_logic 1 signal 13 } 
	{ m_axi_A_V_AWADDR sc_out sc_lv 32 signal 13 } 
	{ m_axi_A_V_AWID sc_out sc_lv 1 signal 13 } 
	{ m_axi_A_V_AWLEN sc_out sc_lv 32 signal 13 } 
	{ m_axi_A_V_AWSIZE sc_out sc_lv 3 signal 13 } 
	{ m_axi_A_V_AWBURST sc_out sc_lv 2 signal 13 } 
	{ m_axi_A_V_AWLOCK sc_out sc_lv 2 signal 13 } 
	{ m_axi_A_V_AWCACHE sc_out sc_lv 4 signal 13 } 
	{ m_axi_A_V_AWPROT sc_out sc_lv 3 signal 13 } 
	{ m_axi_A_V_AWQOS sc_out sc_lv 4 signal 13 } 
	{ m_axi_A_V_AWREGION sc_out sc_lv 4 signal 13 } 
	{ m_axi_A_V_AWUSER sc_out sc_lv 1 signal 13 } 
	{ m_axi_A_V_WVALID sc_out sc_logic 1 signal 13 } 
	{ m_axi_A_V_WREADY sc_in sc_logic 1 signal 13 } 
	{ m_axi_A_V_WDATA sc_out sc_lv 512 signal 13 } 
	{ m_axi_A_V_WSTRB sc_out sc_lv 64 signal 13 } 
	{ m_axi_A_V_WLAST sc_out sc_logic 1 signal 13 } 
	{ m_axi_A_V_WID sc_out sc_lv 1 signal 13 } 
	{ m_axi_A_V_WUSER sc_out sc_lv 1 signal 13 } 
	{ m_axi_A_V_ARVALID sc_out sc_logic 1 signal 13 } 
	{ m_axi_A_V_ARREADY sc_in sc_logic 1 signal 13 } 
	{ m_axi_A_V_ARADDR sc_out sc_lv 32 signal 13 } 
	{ m_axi_A_V_ARID sc_out sc_lv 1 signal 13 } 
	{ m_axi_A_V_ARLEN sc_out sc_lv 32 signal 13 } 
	{ m_axi_A_V_ARSIZE sc_out sc_lv 3 signal 13 } 
	{ m_axi_A_V_ARBURST sc_out sc_lv 2 signal 13 } 
	{ m_axi_A_V_ARLOCK sc_out sc_lv 2 signal 13 } 
	{ m_axi_A_V_ARCACHE sc_out sc_lv 4 signal 13 } 
	{ m_axi_A_V_ARPROT sc_out sc_lv 3 signal 13 } 
	{ m_axi_A_V_ARQOS sc_out sc_lv 4 signal 13 } 
	{ m_axi_A_V_ARREGION sc_out sc_lv 4 signal 13 } 
	{ m_axi_A_V_ARUSER sc_out sc_lv 1 signal 13 } 
	{ m_axi_A_V_RVALID sc_in sc_logic 1 signal 13 } 
	{ m_axi_A_V_RREADY sc_out sc_logic 1 signal 13 } 
	{ m_axi_A_V_RDATA sc_in sc_lv 512 signal 13 } 
	{ m_axi_A_V_RLAST sc_in sc_logic 1 signal 13 } 
	{ m_axi_A_V_RID sc_in sc_lv 1 signal 13 } 
	{ m_axi_A_V_RUSER sc_in sc_lv 1 signal 13 } 
	{ m_axi_A_V_RRESP sc_in sc_lv 2 signal 13 } 
	{ m_axi_A_V_BVALID sc_in sc_logic 1 signal 13 } 
	{ m_axi_A_V_BREADY sc_out sc_logic 1 signal 13 } 
	{ m_axi_A_V_BRESP sc_in sc_lv 2 signal 13 } 
	{ m_axi_A_V_BID sc_in sc_lv 1 signal 13 } 
	{ m_axi_A_V_BUSER sc_in sc_lv 1 signal 13 } 
	{ A_V_offset sc_in sc_lv 26 signal 14 } 
	{ B_V_offset sc_in sc_lv 26 signal 15 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "flag", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "flag", "role": "default" }} , 
 	{ "name": "i", "direction": "in", "datatype": "sc_lv", "bitwidth":12, "type": "signal", "bundle":{"name": "i", "role": "default" }} , 
 	{ "name": "j", "direction": "in", "datatype": "sc_lv", "bitwidth":12, "type": "signal", "bundle":{"name": "j", "role": "default" }} , 
 	{ "name": "k", "direction": "in", "datatype": "sc_lv", "bitwidth":12, "type": "signal", "bundle":{"name": "k", "role": "default" }} , 
 	{ "name": "local_A_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "local_A_V", "role": "address0" }} , 
 	{ "name": "local_A_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "local_A_V", "role": "ce0" }} , 
 	{ "name": "local_A_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "local_A_V", "role": "we0" }} , 
 	{ "name": "local_A_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":512, "type": "signal", "bundle":{"name": "local_A_V", "role": "d0" }} , 
 	{ "name": "local_B_0_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "local_B_0_V", "role": "address0" }} , 
 	{ "name": "local_B_0_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "local_B_0_V", "role": "ce0" }} , 
 	{ "name": "local_B_0_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "local_B_0_V", "role": "we0" }} , 
 	{ "name": "local_B_0_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":512, "type": "signal", "bundle":{"name": "local_B_0_V", "role": "d0" }} , 
 	{ "name": "local_B_1_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "local_B_1_V", "role": "address0" }} , 
 	{ "name": "local_B_1_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "local_B_1_V", "role": "ce0" }} , 
 	{ "name": "local_B_1_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "local_B_1_V", "role": "we0" }} , 
 	{ "name": "local_B_1_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":512, "type": "signal", "bundle":{"name": "local_B_1_V", "role": "d0" }} , 
 	{ "name": "local_B_2_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "local_B_2_V", "role": "address0" }} , 
 	{ "name": "local_B_2_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "local_B_2_V", "role": "ce0" }} , 
 	{ "name": "local_B_2_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "local_B_2_V", "role": "we0" }} , 
 	{ "name": "local_B_2_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":512, "type": "signal", "bundle":{"name": "local_B_2_V", "role": "d0" }} , 
 	{ "name": "local_B_3_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "local_B_3_V", "role": "address0" }} , 
 	{ "name": "local_B_3_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "local_B_3_V", "role": "ce0" }} , 
 	{ "name": "local_B_3_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "local_B_3_V", "role": "we0" }} , 
 	{ "name": "local_B_3_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":512, "type": "signal", "bundle":{"name": "local_B_3_V", "role": "d0" }} , 
 	{ "name": "local_B_4_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "local_B_4_V", "role": "address0" }} , 
 	{ "name": "local_B_4_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "local_B_4_V", "role": "ce0" }} , 
 	{ "name": "local_B_4_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "local_B_4_V", "role": "we0" }} , 
 	{ "name": "local_B_4_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":512, "type": "signal", "bundle":{"name": "local_B_4_V", "role": "d0" }} , 
 	{ "name": "local_B_5_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "local_B_5_V", "role": "address0" }} , 
 	{ "name": "local_B_5_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "local_B_5_V", "role": "ce0" }} , 
 	{ "name": "local_B_5_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "local_B_5_V", "role": "we0" }} , 
 	{ "name": "local_B_5_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":512, "type": "signal", "bundle":{"name": "local_B_5_V", "role": "d0" }} , 
 	{ "name": "local_B_6_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "local_B_6_V", "role": "address0" }} , 
 	{ "name": "local_B_6_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "local_B_6_V", "role": "ce0" }} , 
 	{ "name": "local_B_6_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "local_B_6_V", "role": "we0" }} , 
 	{ "name": "local_B_6_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":512, "type": "signal", "bundle":{"name": "local_B_6_V", "role": "d0" }} , 
 	{ "name": "local_B_7_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "local_B_7_V", "role": "address0" }} , 
 	{ "name": "local_B_7_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "local_B_7_V", "role": "ce0" }} , 
 	{ "name": "local_B_7_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "local_B_7_V", "role": "we0" }} , 
 	{ "name": "local_B_7_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":512, "type": "signal", "bundle":{"name": "local_B_7_V", "role": "d0" }} , 
 	{ "name": "m_axi_A_V_AWVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "A_V", "role": "AWVALID" }} , 
 	{ "name": "m_axi_A_V_AWREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "A_V", "role": "AWREADY" }} , 
 	{ "name": "m_axi_A_V_AWADDR", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "A_V", "role": "AWADDR" }} , 
 	{ "name": "m_axi_A_V_AWID", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "A_V", "role": "AWID" }} , 
 	{ "name": "m_axi_A_V_AWLEN", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "A_V", "role": "AWLEN" }} , 
 	{ "name": "m_axi_A_V_AWSIZE", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "A_V", "role": "AWSIZE" }} , 
 	{ "name": "m_axi_A_V_AWBURST", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "A_V", "role": "AWBURST" }} , 
 	{ "name": "m_axi_A_V_AWLOCK", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "A_V", "role": "AWLOCK" }} , 
 	{ "name": "m_axi_A_V_AWCACHE", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "A_V", "role": "AWCACHE" }} , 
 	{ "name": "m_axi_A_V_AWPROT", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "A_V", "role": "AWPROT" }} , 
 	{ "name": "m_axi_A_V_AWQOS", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "A_V", "role": "AWQOS" }} , 
 	{ "name": "m_axi_A_V_AWREGION", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "A_V", "role": "AWREGION" }} , 
 	{ "name": "m_axi_A_V_AWUSER", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "A_V", "role": "AWUSER" }} , 
 	{ "name": "m_axi_A_V_WVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "A_V", "role": "WVALID" }} , 
 	{ "name": "m_axi_A_V_WREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "A_V", "role": "WREADY" }} , 
 	{ "name": "m_axi_A_V_WDATA", "direction": "out", "datatype": "sc_lv", "bitwidth":512, "type": "signal", "bundle":{"name": "A_V", "role": "WDATA" }} , 
 	{ "name": "m_axi_A_V_WSTRB", "direction": "out", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "A_V", "role": "WSTRB" }} , 
 	{ "name": "m_axi_A_V_WLAST", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "A_V", "role": "WLAST" }} , 
 	{ "name": "m_axi_A_V_WID", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "A_V", "role": "WID" }} , 
 	{ "name": "m_axi_A_V_WUSER", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "A_V", "role": "WUSER" }} , 
 	{ "name": "m_axi_A_V_ARVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "A_V", "role": "ARVALID" }} , 
 	{ "name": "m_axi_A_V_ARREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "A_V", "role": "ARREADY" }} , 
 	{ "name": "m_axi_A_V_ARADDR", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "A_V", "role": "ARADDR" }} , 
 	{ "name": "m_axi_A_V_ARID", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "A_V", "role": "ARID" }} , 
 	{ "name": "m_axi_A_V_ARLEN", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "A_V", "role": "ARLEN" }} , 
 	{ "name": "m_axi_A_V_ARSIZE", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "A_V", "role": "ARSIZE" }} , 
 	{ "name": "m_axi_A_V_ARBURST", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "A_V", "role": "ARBURST" }} , 
 	{ "name": "m_axi_A_V_ARLOCK", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "A_V", "role": "ARLOCK" }} , 
 	{ "name": "m_axi_A_V_ARCACHE", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "A_V", "role": "ARCACHE" }} , 
 	{ "name": "m_axi_A_V_ARPROT", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "A_V", "role": "ARPROT" }} , 
 	{ "name": "m_axi_A_V_ARQOS", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "A_V", "role": "ARQOS" }} , 
 	{ "name": "m_axi_A_V_ARREGION", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "A_V", "role": "ARREGION" }} , 
 	{ "name": "m_axi_A_V_ARUSER", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "A_V", "role": "ARUSER" }} , 
 	{ "name": "m_axi_A_V_RVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "A_V", "role": "RVALID" }} , 
 	{ "name": "m_axi_A_V_RREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "A_V", "role": "RREADY" }} , 
 	{ "name": "m_axi_A_V_RDATA", "direction": "in", "datatype": "sc_lv", "bitwidth":512, "type": "signal", "bundle":{"name": "A_V", "role": "RDATA" }} , 
 	{ "name": "m_axi_A_V_RLAST", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "A_V", "role": "RLAST" }} , 
 	{ "name": "m_axi_A_V_RID", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "A_V", "role": "RID" }} , 
 	{ "name": "m_axi_A_V_RUSER", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "A_V", "role": "RUSER" }} , 
 	{ "name": "m_axi_A_V_RRESP", "direction": "in", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "A_V", "role": "RRESP" }} , 
 	{ "name": "m_axi_A_V_BVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "A_V", "role": "BVALID" }} , 
 	{ "name": "m_axi_A_V_BREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "A_V", "role": "BREADY" }} , 
 	{ "name": "m_axi_A_V_BRESP", "direction": "in", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "A_V", "role": "BRESP" }} , 
 	{ "name": "m_axi_A_V_BID", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "A_V", "role": "BID" }} , 
 	{ "name": "m_axi_A_V_BUSER", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "A_V", "role": "BUSER" }} , 
 	{ "name": "A_V_offset", "direction": "in", "datatype": "sc_lv", "bitwidth":26, "type": "signal", "bundle":{"name": "A_V_offset", "role": "default" }} , 
 	{ "name": "B_V_offset", "direction": "in", "datatype": "sc_lv", "bitwidth":26, "type": "signal", "bundle":{"name": "B_V_offset", "role": "default" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "",
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
			{"Name" : "B_V_offset", "Type" : "None", "Direction" : "I"}]}]}


set ArgLastReadFirstWriteLatency {
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
	{"Name" : "Latency", "Min" : "1", "Max" : "2070"}
	, {"Name" : "Interval", "Min" : "1", "Max" : "2070"}
]}

set PipelineEnableSignalInfo {[
	{"Pipeline" : "0", "EnableSignal" : "ap_enable_pp0"}
	{"Pipeline" : "1", "EnableSignal" : "ap_enable_pp1"}
]}

set Spec2ImplPortList { 
	flag { ap_none {  { flag in_data 0 1 } } }
	i { ap_none {  { i in_data 0 12 } } }
	j { ap_none {  { j in_data 0 12 } } }
	k { ap_none {  { k in_data 0 12 } } }
	local_A_V { ap_memory {  { local_A_V_address0 mem_address 1 10 }  { local_A_V_ce0 mem_ce 1 1 }  { local_A_V_we0 mem_we 1 1 }  { local_A_V_d0 mem_din 1 512 } } }
	local_B_0_V { ap_memory {  { local_B_0_V_address0 mem_address 1 7 }  { local_B_0_V_ce0 mem_ce 1 1 }  { local_B_0_V_we0 mem_we 1 1 }  { local_B_0_V_d0 mem_din 1 512 } } }
	local_B_1_V { ap_memory {  { local_B_1_V_address0 mem_address 1 7 }  { local_B_1_V_ce0 mem_ce 1 1 }  { local_B_1_V_we0 mem_we 1 1 }  { local_B_1_V_d0 mem_din 1 512 } } }
	local_B_2_V { ap_memory {  { local_B_2_V_address0 mem_address 1 7 }  { local_B_2_V_ce0 mem_ce 1 1 }  { local_B_2_V_we0 mem_we 1 1 }  { local_B_2_V_d0 mem_din 1 512 } } }
	local_B_3_V { ap_memory {  { local_B_3_V_address0 mem_address 1 7 }  { local_B_3_V_ce0 mem_ce 1 1 }  { local_B_3_V_we0 mem_we 1 1 }  { local_B_3_V_d0 mem_din 1 512 } } }
	local_B_4_V { ap_memory {  { local_B_4_V_address0 mem_address 1 7 }  { local_B_4_V_ce0 mem_ce 1 1 }  { local_B_4_V_we0 mem_we 1 1 }  { local_B_4_V_d0 mem_din 1 512 } } }
	local_B_5_V { ap_memory {  { local_B_5_V_address0 mem_address 1 7 }  { local_B_5_V_ce0 mem_ce 1 1 }  { local_B_5_V_we0 mem_we 1 1 }  { local_B_5_V_d0 mem_din 1 512 } } }
	local_B_6_V { ap_memory {  { local_B_6_V_address0 mem_address 1 7 }  { local_B_6_V_ce0 mem_ce 1 1 }  { local_B_6_V_we0 mem_we 1 1 }  { local_B_6_V_d0 mem_din 1 512 } } }
	local_B_7_V { ap_memory {  { local_B_7_V_address0 mem_address 1 7 }  { local_B_7_V_ce0 mem_ce 1 1 }  { local_B_7_V_we0 mem_we 1 1 }  { local_B_7_V_d0 mem_din 1 512 } } }
	A_V { m_axi {  { m_axi_A_V_AWVALID VALID 1 1 }  { m_axi_A_V_AWREADY READY 0 1 }  { m_axi_A_V_AWADDR ADDR 1 32 }  { m_axi_A_V_AWID ID 1 1 }  { m_axi_A_V_AWLEN LEN 1 32 }  { m_axi_A_V_AWSIZE SIZE 1 3 }  { m_axi_A_V_AWBURST BURST 1 2 }  { m_axi_A_V_AWLOCK LOCK 1 2 }  { m_axi_A_V_AWCACHE CACHE 1 4 }  { m_axi_A_V_AWPROT PROT 1 3 }  { m_axi_A_V_AWQOS QOS 1 4 }  { m_axi_A_V_AWREGION REGION 1 4 }  { m_axi_A_V_AWUSER USER 1 1 }  { m_axi_A_V_WVALID VALID 1 1 }  { m_axi_A_V_WREADY READY 0 1 }  { m_axi_A_V_WDATA DATA 1 512 }  { m_axi_A_V_WSTRB STRB 1 64 }  { m_axi_A_V_WLAST LAST 1 1 }  { m_axi_A_V_WID ID 1 1 }  { m_axi_A_V_WUSER USER 1 1 }  { m_axi_A_V_ARVALID VALID 1 1 }  { m_axi_A_V_ARREADY READY 0 1 }  { m_axi_A_V_ARADDR ADDR 1 32 }  { m_axi_A_V_ARID ID 1 1 }  { m_axi_A_V_ARLEN LEN 1 32 }  { m_axi_A_V_ARSIZE SIZE 1 3 }  { m_axi_A_V_ARBURST BURST 1 2 }  { m_axi_A_V_ARLOCK LOCK 1 2 }  { m_axi_A_V_ARCACHE CACHE 1 4 }  { m_axi_A_V_ARPROT PROT 1 3 }  { m_axi_A_V_ARQOS QOS 1 4 }  { m_axi_A_V_ARREGION REGION 1 4 }  { m_axi_A_V_ARUSER USER 1 1 }  { m_axi_A_V_RVALID VALID 0 1 }  { m_axi_A_V_RREADY READY 1 1 }  { m_axi_A_V_RDATA DATA 0 512 }  { m_axi_A_V_RLAST LAST 0 1 }  { m_axi_A_V_RID ID 0 1 }  { m_axi_A_V_RUSER USER 0 1 }  { m_axi_A_V_RRESP RESP 0 2 }  { m_axi_A_V_BVALID VALID 0 1 }  { m_axi_A_V_BREADY READY 1 1 }  { m_axi_A_V_BRESP RESP 0 2 }  { m_axi_A_V_BID ID 0 1 }  { m_axi_A_V_BUSER USER 0 1 } } }
	A_V_offset { ap_none {  { A_V_offset in_data 0 26 } } }
	B_V_offset { ap_none {  { B_V_offset in_data 0 26 } } }
}
