// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__trace_chg_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtop___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_top_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtop___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vtop___024root__trace_chg_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    bufp->chgBit(oldp+0,(vlSelf->clk));
    bufp->chgBit(oldp+1,(vlSelf->rst));
    bufp->chgBit(oldp+2,(vlSelf->trigger));
    bufp->chgCData(oldp+3,(vlSelf->dout),8);
    bufp->chgBit(oldp+4,(vlSelf->cmd_seq));
    bufp->chgBit(oldp+5,(vlSelf->cmd_delay));
    bufp->chgCData(oldp+6,(vlSelf->LFSROut),8);
    bufp->chgBit(oldp+7,(vlSelf->time_out_0));
    bufp->chgBit(oldp+8,(vlSelf->time_out_1));
    bufp->chgSData(oldp+9,(vlSelf->top__DOT__myClktick__DOT__count),16);
    bufp->chgCData(oldp+10,(vlSelf->top__DOT__myDelay__DOT__count),8);
    bufp->chgIData(oldp+11,(vlSelf->top__DOT__myDelay__DOT__current_state),32);
    bufp->chgIData(oldp+12,(((0U == vlSelf->top__DOT__myDelay__DOT__current_state)
                              ? ((IData)(vlSelf->cmd_delay)
                                  ? 1U : vlSelf->top__DOT__myDelay__DOT__current_state)
                              : ((1U == vlSelf->top__DOT__myDelay__DOT__current_state)
                                  ? ((0U == (IData)(vlSelf->top__DOT__myDelay__DOT__count))
                                      ? 2U : vlSelf->top__DOT__myDelay__DOT__current_state)
                                  : ((2U == vlSelf->top__DOT__myDelay__DOT__current_state)
                                      ? ((IData)(vlSelf->cmd_delay)
                                          ? 3U : 0U)
                                      : ((3U == vlSelf->top__DOT__myDelay__DOT__current_state)
                                          ? ((IData)(vlSelf->cmd_delay)
                                              ? vlSelf->top__DOT__myDelay__DOT__current_state
                                              : 0U)
                                          : 0U))))),32);
    bufp->chgBit(oldp+13,(((IData)(vlSelf->cmd_seq)
                            ? (IData)(vlSelf->time_out_1)
                            : (IData)(vlSelf->time_out_0))));
    bufp->chgIData(oldp+14,(vlSelf->top__DOT__myF1FSM__DOT__current),32);
    bufp->chgIData(oldp+15,((((((((((0U == vlSelf->top__DOT__myF1FSM__DOT__current) 
                                    | (1U == vlSelf->top__DOT__myF1FSM__DOT__current)) 
                                   | (2U == vlSelf->top__DOT__myF1FSM__DOT__current)) 
                                  | (3U == vlSelf->top__DOT__myF1FSM__DOT__current)) 
                                 | (4U == vlSelf->top__DOT__myF1FSM__DOT__current)) 
                                | (5U == vlSelf->top__DOT__myF1FSM__DOT__current)) 
                               | (6U == vlSelf->top__DOT__myF1FSM__DOT__current)) 
                              | (7U == vlSelf->top__DOT__myF1FSM__DOT__current))
                              ? ((0U == vlSelf->top__DOT__myF1FSM__DOT__current)
                                  ? 1U : ((1U == vlSelf->top__DOT__myF1FSM__DOT__current)
                                           ? 2U : (
                                                   (2U 
                                                    == vlSelf->top__DOT__myF1FSM__DOT__current)
                                                    ? 3U
                                                    : 
                                                   ((3U 
                                                     == vlSelf->top__DOT__myF1FSM__DOT__current)
                                                     ? 4U
                                                     : 
                                                    ((4U 
                                                      == vlSelf->top__DOT__myF1FSM__DOT__current)
                                                      ? 5U
                                                      : 
                                                     ((5U 
                                                       == vlSelf->top__DOT__myF1FSM__DOT__current)
                                                       ? 6U
                                                       : 
                                                      ((6U 
                                                        == vlSelf->top__DOT__myF1FSM__DOT__current)
                                                        ? 7U
                                                        : 8U)))))))
                              : 0U)),32);
    bufp->chgCData(oldp+16,(vlSelf->top__DOT____Vcellout__myLFSR__data_out),7);
    bufp->chgCData(oldp+17,(vlSelf->top__DOT__myLFSR__DOT__sreg),7);
}

void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_cleanup\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    // Body
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}
