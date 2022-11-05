// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vf1_fsm.h for the primary calling header

#include "verilated.h"

#include "Vf1_fsm___024root.h"

VL_INLINE_OPT void Vf1_fsm___024root___sequent__TOP__0(Vf1_fsm___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1_fsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_fsm___024root___sequent__TOP__0\n"); );
    // Body
    vlSelf->f1_fsm__DOT__current = ((IData)(vlSelf->rst)
                                     ? 0U : ((IData)(vlSelf->en)
                                              ? vlSelf->f1_fsm__DOT__next
                                              : vlSelf->f1_fsm__DOT__current));
    if (((((((((0U == vlSelf->f1_fsm__DOT__current) 
               | (1U == vlSelf->f1_fsm__DOT__current)) 
              | (2U == vlSelf->f1_fsm__DOT__current)) 
             | (3U == vlSelf->f1_fsm__DOT__current)) 
            | (4U == vlSelf->f1_fsm__DOT__current)) 
           | (5U == vlSelf->f1_fsm__DOT__current)) 
          | (6U == vlSelf->f1_fsm__DOT__current)) | 
         (7U == vlSelf->f1_fsm__DOT__current))) {
        if ((0U == vlSelf->f1_fsm__DOT__current)) {
            vlSelf->f1_fsm__DOT__next = 1U;
            vlSelf->dout = 0U;
        } else if ((1U == vlSelf->f1_fsm__DOT__current)) {
            vlSelf->f1_fsm__DOT__next = 2U;
            vlSelf->dout = 1U;
        } else if ((2U == vlSelf->f1_fsm__DOT__current)) {
            vlSelf->f1_fsm__DOT__next = 3U;
            vlSelf->dout = 3U;
        } else if ((3U == vlSelf->f1_fsm__DOT__current)) {
            vlSelf->f1_fsm__DOT__next = 4U;
            vlSelf->dout = 7U;
        } else if ((4U == vlSelf->f1_fsm__DOT__current)) {
            vlSelf->f1_fsm__DOT__next = 5U;
            vlSelf->dout = 0xfU;
        } else if ((5U == vlSelf->f1_fsm__DOT__current)) {
            vlSelf->f1_fsm__DOT__next = 6U;
            vlSelf->dout = 0x1fU;
        } else if ((6U == vlSelf->f1_fsm__DOT__current)) {
            vlSelf->f1_fsm__DOT__next = 7U;
            vlSelf->dout = 0x3fU;
        } else {
            vlSelf->f1_fsm__DOT__next = 8U;
            vlSelf->dout = 0x7fU;
        }
    } else {
        vlSelf->f1_fsm__DOT__next = 0U;
        vlSelf->dout = ((8U == vlSelf->f1_fsm__DOT__current)
                         ? 0xffU : 0U);
    }
}

void Vf1_fsm___024root___eval(Vf1_fsm___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1_fsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_fsm___024root___eval\n"); );
    // Body
    if ((((IData)(vlSelf->en) & (~ (IData)(vlSelf->__Vclklast__TOP__en))) 
         | ((IData)(vlSelf->rst) & (~ (IData)(vlSelf->__Vclklast__TOP__rst))))) {
        Vf1_fsm___024root___sequent__TOP__0(vlSelf);
    }
    // Final
    vlSelf->__Vclklast__TOP__en = vlSelf->en;
    vlSelf->__Vclklast__TOP__rst = vlSelf->rst;
}

#ifdef VL_DEBUG
void Vf1_fsm___024root___eval_debug_assertions(Vf1_fsm___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1_fsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_fsm___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
    if (VL_UNLIKELY((vlSelf->en & 0xfeU))) {
        Verilated::overWidthError("en");}
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
}
#endif  // VL_DEBUG
