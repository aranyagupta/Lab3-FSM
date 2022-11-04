// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated.h"

class Vtop__Syms;

class Vtop___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_IN8(trigger,0,0);
    VL_OUT8(dout,7,0);
    VL_OUT8(cmd_seq,0,0);
    VL_OUT8(cmd_delay,0,0);
    VL_OUT8(LFSROut,7,0);
    VL_OUT8(time_out_0,0,0);
    VL_OUT8(time_out_1,0,0);
    CData/*6:0*/ top__DOT____Vcellout__myLFSR__data_out;
    CData/*6:0*/ top__DOT__myLFSR__DOT__sreg;
    CData/*7:0*/ top__DOT__myDelay__DOT__count;
    CData/*0:0*/ __Vclklast__TOP__clk;
    CData/*0:0*/ __Vclklast__TOP__rst;
    CData/*0:0*/ __Vclklast__TOP__trigger;
    SData/*15:0*/ top__DOT__myClktick__DOT__count;
    SData/*15:0*/ __Vdly__top__DOT__myClktick__DOT__count;
    IData/*31:0*/ top__DOT__myDelay__DOT__current_state;
    IData/*31:0*/ top__DOT__myDelay__DOT__next_state;
    IData/*31:0*/ top__DOT__myF1FSM__DOT__current;
    IData/*31:0*/ top__DOT__myF1FSM__DOT__next;

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop___024root(Vtop__Syms* symsp, const char* name);
    ~Vtop___024root();
    VL_UNCOPYABLE(Vtop___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
