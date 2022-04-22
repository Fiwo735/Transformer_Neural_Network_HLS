############################################################
## This file is generated automatically by Vivado HLS.
## Please DO NOT edit it.
## Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
############################################################
open_project myproject_prj
set_top myproject
add_files firmware/myproject.cpp -cflags "-std=c++0x"
add_files -tb myproject_test.cpp -cflags "-std=c++0x -DRTL_SIM -Wno-unknown-pragmas" -csimflags "-Wno-unknown-pragmas"
add_files -tb tb_data -cflags "-Wno-unknown-pragmas" -csimflags "-Wno-unknown-pragmas"
add_files -tb firmware/weights -cflags "-Wno-unknown-pragmas" -csimflags "-Wno-unknown-pragmas"
open_solution "solution1"
set_part {xcu250-figd2104-2L-e}
create_clock -period 5 -name default
config_array_partition -maximum_size 4096
config_compile -name_max_length 60
#source "./myproject_prj/solution1/directives.tcl"
csim_design
csynth_design
cosim_design -trace_level all
export_design -format ip_catalog
