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
    VL_OUT8(tick,0,0);
    VL_IN8(en,0,0);
    VL_OUT8(dout,7,0);
    CData/*0:0*/ __VinpClk__TOP__tick;
    CData/*0:0*/ __Vclklast__TOP__clk;
    CData/*0:0*/ __Vclklast__TOP__rst;
    CData/*0:0*/ __Vclklast__TOP____VinpClk__TOP__tick;
    CData/*0:0*/ __Vchglast__TOP__tick;
    VL_IN16(N,15,0);
    SData/*15:0*/ top__DOT__myClockTick__DOT__count;
    SData/*15:0*/ __Vdly__top__DOT__myClockTick__DOT__count;
    IData/*31:0*/ top__DOT__myF1__DOT__current;
    IData/*31:0*/ top__DOT__myF1__DOT__next;

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
