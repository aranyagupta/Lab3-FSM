#!/bin/sh

# cleanup
rm -rf obj_dir
rm -f top.vcd

# run Verilator to translate Verilog into C++, including C++ testbench
verilator -Wall --cc --trace top.sv --exe top_tb.cpp

# run verilator to translat everilog to c++ including testbench
make -j -C obj_dir/ -f Vtop.mk Vtop

# run executable simulation file
obj_dir/Vtop

# run gtkwave to see waveforms
gtkwave top.vcd