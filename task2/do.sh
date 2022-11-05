#!/bin/sh

# cleanup
rm -rf obj_dir
rm -f counter.vcd

# run Verilator to translate Verilog into C++, including C++ testbench
verilator -Wall --cc --trace f1_fsm.sv --exe f1_fsm_tb.cpp

# run verilator to translat everilog to c++ including testbench
make -j -C obj_dir/ -f Vf1_fsm.mk Vf1_fsm

# run executable simulation file
obj_dir/Vf1_fsm

# run gtkwave to see waveforms
gtkwave f1_fsm.vcd