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
    bufp->chgBit(oldp+1,(vlSelf->en));
    bufp->chgBit(oldp+2,(vlSelf->rst));
    bufp->chgSData(oldp+3,(vlSelf->N),16);
    bufp->chgBit(oldp+4,(vlSelf->tick));
    bufp->chgCData(oldp+5,(vlSelf->dout),8);
    bufp->chgSData(oldp+6,(vlSelf->top__DOT__myClockTick__DOT__count),16);
    bufp->chgIData(oldp+7,(vlSelf->top__DOT__myF1__DOT__current),32);
    bufp->chgIData(oldp+8,((((((((((0U == vlSelf->top__DOT__myF1__DOT__current) 
                                   | (1U == vlSelf->top__DOT__myF1__DOT__current)) 
                                  | (2U == vlSelf->top__DOT__myF1__DOT__current)) 
                                 | (3U == vlSelf->top__DOT__myF1__DOT__current)) 
                                | (4U == vlSelf->top__DOT__myF1__DOT__current)) 
                               | (5U == vlSelf->top__DOT__myF1__DOT__current)) 
                              | (6U == vlSelf->top__DOT__myF1__DOT__current)) 
                             | (7U == vlSelf->top__DOT__myF1__DOT__current))
                             ? ((0U == vlSelf->top__DOT__myF1__DOT__current)
                                 ? 1U : ((1U == vlSelf->top__DOT__myF1__DOT__current)
                                          ? 2U : ((2U 
                                                   == vlSelf->top__DOT__myF1__DOT__current)
                                                   ? 3U
                                                   : 
                                                  ((3U 
                                                    == vlSelf->top__DOT__myF1__DOT__current)
                                                    ? 4U
                                                    : 
                                                   ((4U 
                                                     == vlSelf->top__DOT__myF1__DOT__current)
                                                     ? 5U
                                                     : 
                                                    ((5U 
                                                      == vlSelf->top__DOT__myF1__DOT__current)
                                                      ? 6U
                                                      : 
                                                     ((6U 
                                                       == vlSelf->top__DOT__myF1__DOT__current)
                                                       ? 7U
                                                       : 8U)))))))
                             : 0U)),32);
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
