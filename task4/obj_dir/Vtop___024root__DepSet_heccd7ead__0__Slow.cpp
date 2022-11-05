// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop___024root.h"

VL_ATTR_COLD void Vtop___024root___initial__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___initial__TOP__0\n"); );
    // Body
    vlSelf->top__DOT__myF1FSM__DOT__triggerFlag = 0U;
    vlSelf->top__DOT__myDelay__DOT__count = 0U;
}

VL_ATTR_COLD void Vtop___024root___settle__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__0\n"); );
    // Body
    vlSelf->LFSROut = vlSelf->top__DOT____Vcellout__myLFSR__data_out;
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
    vlSelf->time_out_0 = ((0U != vlSelf->top__DOT__myDelay__DOT__current_state) 
                          & ((1U != vlSelf->top__DOT__myDelay__DOT__current_state) 
                             & (2U == vlSelf->top__DOT__myDelay__DOT__current_state)));
    vlSelf->cmd_delay = (8U == vlSelf->top__DOT__myF1FSM__DOT__current);
    vlSelf->top__DOT____Vcellinp__myF1FSM__en = ((IData)(vlSelf->cmd_seq)
                                                  ? (IData)(vlSelf->time_out_1)
                                                  : (IData)(vlSelf->time_out_0));
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

VL_ATTR_COLD void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP__rst = vlSelf->rst;
    vlSelf->__Vclklast__TOP__trigger = vlSelf->trigger;
    Vtop___024root___initial__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    // Body
    Vtop___024root___settle__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void Vtop___024root___final(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___final\n"); );
}

VL_ATTR_COLD void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->trigger = VL_RAND_RESET_I(1);
    vlSelf->countDownSpeed = VL_RAND_RESET_I(8);
    vlSelf->dout = VL_RAND_RESET_I(8);
    vlSelf->cmd_seq = VL_RAND_RESET_I(1);
    vlSelf->cmd_delay = VL_RAND_RESET_I(1);
    vlSelf->LFSROut = VL_RAND_RESET_I(8);
    vlSelf->time_out_0 = VL_RAND_RESET_I(1);
    vlSelf->time_out_1 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT____Vcellout__myLFSR__data_out = VL_RAND_RESET_I(7);
    vlSelf->top__DOT____Vcellinp__myF1FSM__en = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__myLFSR__DOT__sreg = VL_RAND_RESET_I(7);
    vlSelf->top__DOT__myDelay__DOT__count = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__myDelay__DOT__current_state = 0;
    vlSelf->top__DOT__myDelay__DOT__next_state = 0;
    vlSelf->top__DOT__myClktick__DOT__count = VL_RAND_RESET_I(16);
    vlSelf->top__DOT__myF1FSM__DOT__current = 0;
    vlSelf->top__DOT__myF1FSM__DOT__next = 0;
    vlSelf->top__DOT__myF1FSM__DOT__triggerFlag = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
