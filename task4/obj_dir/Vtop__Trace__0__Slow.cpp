// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+8,"clk", false,-1);
    tracep->declBit(c+9,"rst", false,-1);
    tracep->declBit(c+10,"trigger", false,-1);
    tracep->declBus(c+11,"countDownSpeed", false,-1, 7,0);
    tracep->declBus(c+12,"dout", false,-1, 7,0);
    tracep->declBit(c+13,"cmd_seq", false,-1);
    tracep->declBit(c+14,"cmd_delay", false,-1);
    tracep->declBus(c+15,"LFSROut", false,-1, 7,0);
    tracep->declBit(c+16,"time_out_0", false,-1);
    tracep->declBit(c+17,"time_out_1", false,-1);
    tracep->pushNamePrefix("top ");
    tracep->declBit(c+8,"clk", false,-1);
    tracep->declBit(c+9,"rst", false,-1);
    tracep->declBit(c+10,"trigger", false,-1);
    tracep->declBus(c+11,"countDownSpeed", false,-1, 7,0);
    tracep->declBus(c+12,"dout", false,-1, 7,0);
    tracep->declBit(c+13,"cmd_seq", false,-1);
    tracep->declBit(c+14,"cmd_delay", false,-1);
    tracep->declBus(c+15,"LFSROut", false,-1, 7,0);
    tracep->declBit(c+16,"time_out_0", false,-1);
    tracep->declBit(c+17,"time_out_1", false,-1);
    tracep->pushNamePrefix("myClktick ");
    tracep->declBus(c+22,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+8,"clk", false,-1);
    tracep->declBit(c+9,"rst", false,-1);
    tracep->declBit(c+13,"en", false,-1);
    tracep->declBus(c+18,"N", false,-1, 15,0);
    tracep->declBit(c+17,"tick", false,-1);
    tracep->declBus(c+1,"count", false,-1, 15,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("myDelay ");
    tracep->declBus(c+23,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+8,"clk", false,-1);
    tracep->declBit(c+9,"rst", false,-1);
    tracep->declBit(c+14,"trigger", false,-1);
    tracep->declBus(c+15,"n", false,-1, 7,0);
    tracep->declBit(c+16,"time_out", false,-1);
    tracep->declBus(c+2,"count", false,-1, 7,0);
    tracep->declBus(c+3,"current_state", false,-1, 31,0);
    tracep->declBus(c+19,"next_state", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("myF1FSM ");
    tracep->declBit(c+9,"rst", false,-1);
    tracep->declBit(c+4,"en", false,-1);
    tracep->declBit(c+8,"clk", false,-1);
    tracep->declBit(c+10,"trigger", false,-1);
    tracep->declBit(c+13,"cmd_seq", false,-1);
    tracep->declBit(c+14,"cmd_delay", false,-1);
    tracep->declBus(c+12,"dout", false,-1, 7,0);
    tracep->declBus(c+5,"current", false,-1, 31,0);
    tracep->declBus(c+6,"next", false,-1, 31,0);
    tracep->declBit(c+7,"triggerFlag", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("myLFSR ");
    tracep->declBus(c+24,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+8,"clk", false,-1);
    tracep->declBit(c+9,"rst", false,-1);
    tracep->declBit(c+25,"en", false,-1);
    tracep->declBus(c+20,"data_out", false,-1, 6,0);
    tracep->declBus(c+21,"sreg", false,-1, 6,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vtop___024root__trace_init_top(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_top\n"); );
    // Body
    Vtop___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtop___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtop___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtop___024root__trace_register(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vtop___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vtop___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vtop___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtop___024root__trace_full_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtop___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_top_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtop___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtop___024root__trace_full_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullSData(oldp+1,(vlSelf->top__DOT__myClktick__DOT__count),16);
    bufp->fullCData(oldp+2,(vlSelf->top__DOT__myDelay__DOT__count),8);
    bufp->fullIData(oldp+3,(vlSelf->top__DOT__myDelay__DOT__current_state),32);
    bufp->fullBit(oldp+4,(vlSelf->top__DOT____Vcellinp__myF1FSM__en));
    bufp->fullIData(oldp+5,(vlSelf->top__DOT__myF1FSM__DOT__current),32);
    bufp->fullIData(oldp+6,(vlSelf->top__DOT__myF1FSM__DOT__next),32);
    bufp->fullBit(oldp+7,(vlSelf->top__DOT__myF1FSM__DOT__triggerFlag));
    bufp->fullBit(oldp+8,(vlSelf->clk));
    bufp->fullBit(oldp+9,(vlSelf->rst));
    bufp->fullBit(oldp+10,(vlSelf->trigger));
    bufp->fullCData(oldp+11,(vlSelf->countDownSpeed),8);
    bufp->fullCData(oldp+12,(vlSelf->dout),8);
    bufp->fullBit(oldp+13,(vlSelf->cmd_seq));
    bufp->fullBit(oldp+14,(vlSelf->cmd_delay));
    bufp->fullCData(oldp+15,(vlSelf->LFSROut),8);
    bufp->fullBit(oldp+16,(vlSelf->time_out_0));
    bufp->fullBit(oldp+17,(vlSelf->time_out_1));
    bufp->fullSData(oldp+18,(vlSelf->countDownSpeed),16);
    bufp->fullIData(oldp+19,(((0U == vlSelf->top__DOT__myDelay__DOT__current_state)
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
    bufp->fullCData(oldp+20,(vlSelf->top__DOT____Vcellout__myLFSR__data_out),7);
    bufp->fullCData(oldp+21,(vlSelf->top__DOT__myLFSR__DOT__sreg),7);
    bufp->fullIData(oldp+22,(0x10U),32);
    bufp->fullIData(oldp+23,(8U),32);
    bufp->fullIData(oldp+24,(7U),32);
    bufp->fullBit(oldp+25,(1U));
}
