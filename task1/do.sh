#!/bin/sh

# cleanup
rm -rf obj_dir
rm -f counter.vcd

# run Verilator to translate Verilog into C++, including C++ testbench
verilator -Wall --cc --trace lfsr.sv --exe lfsr_tb.cpp

# run verilator to translat everilog to c++ including testbench
make -j -C obj_dir/ -f Vlfsr.mk Vlfsr

# run executable simulation file
obj_dir/Vlfsr

# run gtkwave to see waveforms
gtkwave lfsr.vcd