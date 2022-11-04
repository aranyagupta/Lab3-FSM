#include "verilated.h"
#include "verilated_vcd_c.h"
#include "Vtop.h"

#include "vbuddy.cpp"     // include vbuddy code
#define MAX_SIM_CYC 100000
// set vbdValue to 42 and it works every second
bool time_flag = false;
int timer = 0;
int main(int argc, char **argv, char **env) {
  int simcyc;     // simulation clock count
  int tick;       // each clk cycle has two ticks for two edges

  Verilated::commandArgs(argc, argv);
  // init top verilog instance
  Vtop * top = new Vtop;
  // init trace dump
  Verilated::traceEverOn(true);
  VerilatedVcdC* tfp = new VerilatedVcdC;
  top->trace (tfp, 99);
  tfp->open ("clktick.vcd");
 
  // init Vbuddy
  if (vbdOpen()!=1) return(-1);
  vbdHeader("L3T4:F1LIGHT");
  vbdSetMode(0);        // Flag mode set to one-shot

  // initialize simulation inputs
  top->clk = 1;
  top->rst = 1;
  top->trigger = 0;
  
  // run simulation for MAX_SIM_CYC clock cycles
  for (simcyc=0; simcyc<MAX_SIM_CYC; simcyc++) {
    // dump variables into VCD file and toggle clock
    for (tick=0; tick<2; tick++) {
      tfp->dump (2*simcyc+tick);
      top->clk = !top->clk;
      top->eval ();
    }

    // Display toggle neopixel
    
    // vbdHex(2, (int(top->dout)>>4) & 0xF);
    // vbdHex(1, top->dout & 0xF);
    vbdBar(top->dout & 0xFF);
    if (top->dout != 0){
      time_flag = true;
    }

    if (top->dout==0 && time_flag){
      vbdInitWatch();
      time_flag = false;
    }

    if (!vbdFlag() && top->dout==0 && !time_flag){
      vbdHeader(std::to_string(vbdElapsed()).c_str());
      time_flag = false;
    }

    if (vbdFlag() && top->dout==0 && !time_flag){
      vbdHeader("0");
    }
    
    

    // set up input signals of testbench
    top->rst = (simcyc < 2);    // assert reset for 1st cycle
    top->trigger = vbdFlag();
    vbdCycle(simcyc);

    if (Verilated::gotFinish())  exit(0);
  }

  vbdClose();     // ++++
  tfp->close(); 
  exit(0);
}
