############################################################
## This file is generated automatically by Vivado HLS.
## Please DO NOT edit it.
## Copyright (C) 2014 Xilinx Inc. All rights reserved.
############################################################
open_project tansig
set_top tansig
add_files tansig.c
add_files -tb updatelayer.c
add_files -tb main.c
open_solution "solution1"
set_part {xc7z020clg484-1}
create_clock -period 10 -name default
source "./tansig/solution1/directives.tcl"
csim_design
csynth_design
cosim_design -trace_level none -rtl verilog -tool auto
export_design -format ip_catalog
