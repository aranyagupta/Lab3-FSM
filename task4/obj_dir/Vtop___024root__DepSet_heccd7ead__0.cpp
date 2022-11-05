// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop___024root.h"

VL_INLINE_OPT void Vtop___024root___sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__0\n"); );
    // Init
    CData/*6:0*/ __Vdly__top__DOT__myLFSR__DOT__sreg;
    // Body
    __Vdly__top__DOT__myLFSR__DOT__sreg = vlSelf->top__DOT__myLFSR__DOT__sreg;
    __Vdly__top__DOT__myLFSR__DOT__sreg = ((IData)(vlSelf->rst)
                                            ? 0x7fU
                                            : ((0x7eU 
                                                & ((IData)(vlSelf->top__DOT__myLFSR__DOT__sreg) 
                                                   << 1U)) 
                                               | (1U 
                                                  & VL_REDXOR_8(
                                                                (0x44U 
                                                                 & (IData)(vlSelf->top__DOT__myLFSR__DOT__sreg))))));
    vlSelf->top__DOT____Vcellout__myLFSR__data_out 
        = vlSelf->top__DOT__myLFSR__DOT__sreg;
    vlSelf->top__DOT__myLFSR__DOT__sreg = __Vdly__top__DOT__myLFSR__DOT__sreg;
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__1\n"); );
    // Init
    SData/*15:0*/ __Vdly__top__DOT__myClktick__DOT__count;
    // Body
    __Vdly__top__DOT__myClktick__DOT__count = vlSelf->top__DOT__myClktick__DOT__count;
    if (vlSelf->rst) {
        vlSelf->time_out_1 = 0U;
        __Vdly__top__DOT__myClktick__DOT__count = vlSelf->countDownSpeed;
        vlSelf->top__DOT__myDelay__DOT__current_state = 0U;
    } else {
        if (vlSelf->cmd_seq) {
            if ((0U == (IData)(vlSelf->top__DOT__myClktick__DOT__count))) {
                vlSelf->time_out_1 = 1U;
                __Vdly__top__DOT__myClktick__DOT__count 
                    = vlSelf->countDownSpeed;
            } else {
                __Vdly__top__DOT__myClktick__DOT__count 
                    = (0xffffU & ((IData)(vlSelf->top__DOT__myClktick__DOT__count) 
                                  - (IData)(1U)));
                vlSelf->time_out_1 = 0U;
            }
        }
        vlSelf->top__DOT__myDelay__DOT__current_state 
            = vlSelf->top__DOT__myDelay__DOT__next_state;
    }
    vlSelf->top__DOT__myDelay__DOT__count = (0xffU 
                                             & ((((IData)(vlSelf->rst) 
                                                  | (IData)(vlSelf->cmd_delay)) 
                                                 | (0U 
                                                    == (IData)(vlSelf->top__DOT__myDelay__DOT__count)))
                                                 ? 
                                                ((IData)(vlSelf->LFSROut) 
                                                 - (IData)(1U))
                                                 : 
                                                ((IData)(vlSelf->top__DOT__myDelay__DOT__count) 
                                                 - (IData)(1U))));
    vlSelf->top__DOT__myClktick__DOT__count = __Vdly__top__DOT__myClktick__DOT__count;
    vlSelf->time_out_0 = ((0U != vlSelf->top__DOT__myDelay__DOT__current_state) 
                          & ((1U != vlSelf->top__DOT__myDelay__DOT__current_state) 
                             & (2U == vlSelf->top__DOT__myDelay__DOT__current_state)));
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__2(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__2\n"); );
    // Init
    IData/*31:0*/ __Vdly__top__DOT__myF1FSM__DOT__current;
    // Body
    __Vdly__top__DOT__myF1FSM__DOT__current = vlSelf->top__DOT__myF1FSM__DOT__current;
    if (vlSelf->rst) {
        __Vdly__top__DOT__myF1FSM__DOT__current = 0U;
    } else if ((((~ (IData)(vlSelf->trigger)) & (0U 
                                                 != vlSelf->top__DOT__myF1FSM__DOT__current)) 
                & (IData)(vlSelf->top__DOT__myF1FSM__DOT__triggerFlag))) {
        __Vdly__top__DOT__myF1FSM__DOT__current = ((IData)(vlSelf->top__DOT____Vcellinp__myF1FSM__en)
                                                    ? vlSelf->top__DOT__myF1FSM__DOT__next
                                                    : vlSelf->top__DOT__myF1FSM__DOT__current);
    } else if ((((~ (IData)(vlSelf->trigger)) & (0U 
                                                 == vlSelf->top__DOT__myF1FSM__DOT__current)) 
                & (~ (IData)(vlSelf->top__DOT__myF1FSM__DOT__triggerFlag)))) {
        __Vdly__top__DOT__myF1FSM__DOT__current = vlSelf->top__DOT__myF1FSM__DOT__current;
    } else if ((((~ (IData)(vlSelf->trigger)) & (0U 
                                                 == vlSelf->top__DOT__myF1FSM__DOT__current)) 
                & (IData)(vlSelf->top__DOT__myF1FSM__DOT__triggerFlag))) {
        __Vdly__top__DOT__myF1FSM__DOT__current = vlSelf->top__DOT__myF1FSM__DOT__current;
        vlSelf->top__DOT__myF1FSM__DOT__triggerFlag = 0U;
        vlSelf->cmd_seq = 1U;
    } else if ((((IData)(vlSelf->trigger) & (0U != vlSelf->top__DOT__myF1FSM__DOT__current)) 
                & (IData)(vlSelf->top__DOT__myF1FSM__DOT__triggerFlag))) {
        __Vdly__top__DOT__myF1FSM__DOT__current = ((IData)(vlSelf->top__DOT____Vcellinp__myF1FSM__en)
                                                    ? vlSelf->top__DOT__myF1FSM__DOT__next
                                                    : vlSelf->top__DOT__myF1FSM__DOT__current);
    } else if ((((IData)(vlSelf->trigger) & (0U == vlSelf->top__DOT__myF1FSM__DOT__current)) 
                & (~ (IData)(vlSelf->top__DOT__myF1FSM__DOT__triggerFlag)))) {
        __Vdly__top__DOT__myF1FSM__DOT__current = vlSelf->top__DOT__myF1FSM__DOT__next;
        vlSelf->top__DOT__myF1FSM__DOT__triggerFlag = 1U;
        vlSelf->cmd_seq = 1U;
    } else {
        __Vdly__top__DOT__myF1FSM__DOT__current = (
                                                   (((IData)(vlSelf->trigger) 
                                                     & (0U 
                                                        == vlSelf->top__DOT__myF1FSM__DOT__current)) 
                                                    & (IData)(vlSelf->top__DOT__myF1FSM__DOT__triggerFlag))
                                                    ? vlSelf->top__DOT__myF1FSM__DOT__current
                                                    : 0U);
    }
    vlSelf->top__DOT____Vcellinp__myF1FSM__en = ((IData)(vlSelf->cmd_seq)
                                                  ? (IData)(vlSelf->time_out_1)
                                                  : (IData)(vlSelf->time_out_0));
    vlSelf->top__DOT__myF1FSM__DOT__current = __Vdly__top__DOT__myF1FSM__DOT__current;
    if (((((((((0U == vlSelf->top__DOT__myF1FSM__DOT__current) 
               | (1U == vlSelf->top__DOT__myF1FSM__DOT__current)) 
              | (2U == vlSelf->top__DOT__myF1FSM__DOT__current)) 
             | (3U == vlSelf->top__DOT__myF1FSM__DOT__current)) 
            | (4U == vlSelf->top__DOT__myF1FSM__DOT__current)) 
           | (5U == vlSelf->top__DOT__myF1FSM__DOT__current)) 
          | (6U == vlSelf->top__DOT__myF1FSM__DOT__current)) 
         | (7U == vlSelf->top__DOT__myF1FSM__DOT__current))) {
        if ((0U == vlSelf->top__DOT__myF1FSM__DOT__current)) {
            vlSelf->top__DOT__myF1FSM__DOT__next = 1U;
            vlSelf->dout = 0U;
        } else if ((1U == vlSelf->top__DOT__myF1FSM__DOT__current)) {
            vlSelf->top__DOT__myF1FSM__DOT__next = 2U;
            vlSelf->dout = 1U;
        } else if ((2U == vlSelf->top__DOT__myF1FSM__DOT__current)) {
            vlSelf->top__DOT__myF1FSM__DOT__next = 3U;
            vlSelf->dout = 3U;
        } else if ((3U == vlSelf->top__DOT__myF1FSM__DOT__current)) {
            vlSelf->top__DOT__myF1FSM__DOT__next = 4U;
            vlSelf->dout = 7U;
        } else if ((4U == vlSelf->top__DOT__myF1FSM__DOT__current)) {
            vlSelf->top__DOT__myF1FSM__DOT__next = 5U;
            vlSelf->dout = 0xfU;
        } else if ((5U == vlSelf->top__DOT__myF1FSM__DOT__current)) {
            vlSelf->top__DOT__myF1FSM__DOT__next = 6U;
            vlSelf->dout = 0x1fU;
        } else if ((6U == vlSelf->top__DOT__myF1FSM__DOT__current)) {
            vlSelf->top__DOT__myF1FSM__DOT__next = 7U;
            vlSelf->dout = 0x3fU;
        } else {
            vlSelf->top__DOT__myF1FSM__DOT__next = 8U;
            vlSelf->dout = 0x7fU;
        }
    } else {
        vlSelf->top__DOT__myF1FSM__DOT__next = 0U;
        vlSelf->dout = ((8U == vlSelf->top__DOT__myF1FSM__DOT__current)
                         ? 0xffU : 0U);
    }
    vlSelf->cmd_delay = (8U == vlSelf->top__DOT__myF1FSM__DOT__current);
    vlSelf->top__DOT__myDelay__DOT__next_state = ((0U 
                                                   == vlSelf->top__DOT__myDelay__DOT__current_state)
                                                   ? 
                                                  ((IData)(vlSelf->cmd_delay)
                                                    ? 1U
                                                    : vlSelf->top__DOT__myDelay__DOT__current_state)
                                                   : 
                                                  ((1U 
                                                    == vlSelf->top__DOT__myDelay__DOT__current_state)
                                                    ? 
                                                   ((0U 
                                                     == (IData)(vlSelf->top__DOT__myDelay__DOT__count))
                                                     ? 2U
                                                     : vlSelf->top__DOT__myDelay__DOT__current_state)
                                                    : 
                                                   ((2U 
                                                     == vlSelf->top__DOT__myDelay__DOT__current_state)
                                                     ? 
                                                    ((IData)(vlSelf->cmd_delay)
                                                      ? 3U
                                                      : 0U)
                                                     : 
                                                    ((3U 
                                                      == vlSelf->top__DOT__myDelay__DOT__current_state)
                                                      ? 
                                                     ((IData)(vlSelf->cmd_delay)
                                                       ? vlSelf->top__DOT__myDelay__DOT__current_state
                                                       : 0U)
                                                      : 0U))));
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__3(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__3\n"); );
    // Body
    vlSelf->LFSROut = vlSelf->top__DOT____Vcellout__myLFSR__data_out;
}

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    // Body
    if ((((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk))) 
         | ((IData)(vlSelf->rst) & (~ (IData)(vlSelf->__Vclklast__TOP__rst))))) {
        Vtop___024root___sequent__TOP__0(vlSelf);
    }
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vtop___024root___sequent__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    if (((((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk))) 
          | ((IData)(vlSelf->rst) & (~ (IData)(vlSelf->__Vclklast__TOP__rst)))) 
         | ((IData)(vlSelf->trigger) & (~ (IData)(vlSelf->__Vclklast__TOP__trigger))))) {
        Vtop___024root___sequent__TOP__2(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    if ((((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk))) 
         | ((IData)(vlSelf->rst) & (~ (IData)(vlSelf->__Vclklast__TOP__rst))))) {
        Vtop___024root___sequent__TOP__3(vlSelf);
    }
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP__rst = vlSelf->rst;
    vlSelf->__Vclklast__TOP__trigger = vlSelf->trigger;
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
    if (VL_UNLIKELY((vlSelf->trigger & 0xfeU))) {
        Verilated::overWidthError("trigger");}
}
#endif  // VL_DEBUG
