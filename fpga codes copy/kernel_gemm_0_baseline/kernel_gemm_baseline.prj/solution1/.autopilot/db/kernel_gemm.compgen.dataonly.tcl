# This script segment is generated automatically by AutoPilot

set axilite_register_dict [dict create]
set port_ctrl_bus {
ap_start { }
ap_done { }
ap_ready { }
ap_idle { }
C { 
	dir I
	width 32
	depth 1
	mode ap_none
	offset 16
	offset_end 23
}
A { 
	dir I
	width 32
	depth 1
	mode ap_none
	offset 24
	offset_end 31
}
B { 
	dir I
	width 32
	depth 1
	mode ap_none
	offset 32
	offset_end 39
}
}
dict set axilite_register_dict ctrl_bus $port_ctrl_bus


