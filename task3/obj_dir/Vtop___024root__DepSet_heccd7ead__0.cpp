// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop___024root.h"

VL_INLINE_OPT void Vtop___024root___sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__0\n"); );
    // Body
    vlSelf->__Vdly__top__DOT__myClockTick__DOT__count 
        = vlSelf->top__DOT__myClockTick__DOT__count;
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__1\n"); );
    // Body
    vlSelf->top__DOT__myF1__DOT__current = ((IData)(vlSelf->rst)
                                             ? 0U : 
                                            ((IData)(vlSelf->tick)
                                              ? vlSelf->top__DOT__myF1__DOT__next
                                              : vlSelf->top__DOT__myF1__DOT__current));
    if (((((((((0U == vlSelf->top__DOT__myF1__DOT__current) 
               | (1U == vlSelf->top__DOT__myF1__DOT__current)) 
              | (2U == vlSelf->top__DOT__myF1__DOT__current)) 
             | (3U == vlSelf->top__DOT__myF1__DOT__current)) 
            | (4U == vlSelf->top__DOT__myF1__DOT__current)) 
           | (5U == vlSelf->top__DOT__myF1__DOT__current)) 
          | (6U == vlSelf->top__DOT__myF1__DOT__current)) 
         | (7U == vlSelf->top__DOT__myF1__DOT__current))) {
        if ((0U == vlSelf->top__DOT__myF1__DOT__current)) {
            vlSelf->top__DOT__myF1__DOT__next = 1U;
            vlSelf->dout = 0U;
        } else if ((1U == vlSelf->top__DOT__myF1__DOT__current)) {
            vlSelf->top__DOT__myF1__DOT__next = 2U;
            vlSelf->dout = 1U;
        } else if ((2U == vlSelf->top__DOT__myF1__DOT__current)) {
            vlSelf->top__DOT__myF1__DOT__next = 3U;
            vlSelf->dout = 3U;
        } else if ((3U == vlSelf->top__DOT__myF1__DOT__current)) {
            vlSelf->top__DOT__myF1__DOT__next = 4U;
            vlSelf->dout = 7U;
        } else if ((4U == vlSelf->top__DOT__myF1__DOT__current)) {
            vlSelf->top__DOT__myF1__DOT__next = 5U;
            vlSelf->dout = 0xfU;
        } else if ((5U == vlSelf->top__DOT__myF1__DOT__current)) {
            vlSelf->top__DOT__myF1__DOT__next = 6U;
            vlSelf->dout = 0x1fU;
        } else if ((6U == vlSelf->top__DOT__myF1__DOT__current)) {
            vlSelf->top__DOT__myF1__DOT__next = 7U;
            vlSelf->dout = 0x3fU;
        } else {
            vlSelf->top__DOT__myF1__DOT__next = 8U;
            vlSelf->dout = 0x7fU;
        }
    } else {
        vlSelf->top__DOT__myF1__DOT__next = 0U;
        vlSelf->dout = ((8U == vlSelf->top__DOT__myF1__DOT__current)
                         ? 0xffU : 0U);
    }
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__2(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__2\n"); );
    // Body
    if (vlSelf->rst) {
        vlSelf->tick = 0U;
        vlSelf->__Vdly__top__DOT__myClockTick__DOT__count 
            = vlSelf->N;
    } else if (vlSelf->en) {
        if ((0U == (IData)(vlSelf->top__DOT__myClockTick__DOT__count))) {
            vlSelf->tick = 1U;
            vlSelf->__Vdly__top__DOT__myClockTick__DOT__count 
                = vlSelf->N;
        } else {
            vlSelf->__Vdly__top__DOT__myClockTick__DOT__count 
                = (0xffffU & ((IData)(vlSelf->top__DOT__myClockTick__DOT__count) 
                              - (IData)(1U)));
            vlSelf->tick = 0U;
        }
    }
    vlSelf->top__DOT__myClockTick__DOT__count = vlSelf->__Vdly__top__DOT__myClockTick__DOT__count;
}

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vtop___024root___sequent__TOP__0(vlSelf);
    }
    if ((((IData)(vlSelf->rst) & (~ (IData)(vlSelf->__Vclklast__TOP__rst))) 
         | ((IData)(vlSelf->__VinpClk__TOP__tick) & 
            (~ (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__tick))))) {
        Vtop___024root___sequent__TOP__1(vlSelf);
    }
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vtop___024root___sequent__TOP__2(vlSelf);
    }
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP__rst = vlSelf->rst;
    vlSelf->__Vclklast__TOP____VinpClk__TOP__tick = vlSelf->__VinpClk__TOP__tick;
    vlSelf->__VinpClk__TOP__tick = vlSelf->tick;
}

QData Vtop___024root___change_request_1(Vtop___024root* vlSelf);

VL_INLINE_OPT QData Vtop___024root___change_request(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___change_request\n"); );
    // Body
    return (Vtop___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vtop___024root___change_request_1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    __req |= ((vlSelf->tick ^ vlSelf->__Vchglast__TOP__tick));
    VL_DEBUG_IF( if(__req && ((vlSelf->tick ^ vlSelf->__Vchglast__TOP__tick))) VL_DBG_MSGF("        CHANGE: top.sv:10: tick\n"); );
    // Final
    vlSelf->__Vchglast__TOP__tick = vlSelf->tick;
    return __req;
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->en & 0xfeU))) {
        Verilated::overWidthError("en");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
}
#endif  // VL_DEBUG
