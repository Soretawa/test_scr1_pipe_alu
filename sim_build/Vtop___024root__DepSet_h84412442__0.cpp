// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop__Syms.h"
#include "Vtop___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop___024root___eval_triggers__ico(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_triggers__ico\n"); );
    // Body
    vlSelf->__VicoTriggered.set(0U, (IData)(vlSelf->__VicoFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

VL_INLINE_OPT void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_sequent__TOP__0\n"); );
    // Init
    CData/*0:0*/ scr1_pipe_ialu__DOT____VdfgExtracted_had502fbc__0;
    scr1_pipe_ialu__DOT____VdfgExtracted_had502fbc__0 = 0;
    CData/*0:0*/ scr1_pipe_ialu__DOT____VdfgTmp_hf0464054__0;
    scr1_pipe_ialu__DOT____VdfgTmp_hf0464054__0 = 0;
    CData/*0:0*/ scr1_pipe_ialu__DOT____VdfgTmp_h8ffc7e80__0;
    scr1_pipe_ialu__DOT____VdfgTmp_h8ffc7e80__0 = 0;
    QData/*63:0*/ scr1_pipe_ialu__DOT____VdfgTmp_h9863f6f0__0;
    scr1_pipe_ialu__DOT____VdfgTmp_h9863f6f0__0 = 0;
    // Body
    if ((1U & (~ (IData)(vlSelf->exu2ialu_rvm_cmd_vd_i)))) {
        ++(vlSymsp->__Vcoverage[914]);
    }
    vlSelf->scr1_pipe_ialu__DOT__clk = vlSelf->clk;
    vlSelf->scr1_pipe_ialu__DOT__rst_n = vlSelf->rst_n;
    vlSelf->scr1_pipe_ialu__DOT__exu2ialu_rvm_cmd_vd_i 
        = vlSelf->exu2ialu_rvm_cmd_vd_i;
    vlSelf->scr1_pipe_ialu__DOT__exu2ialu_main_op1_i 
        = vlSelf->exu2ialu_main_op1_i;
    vlSelf->scr1_pipe_ialu__DOT__exu2ialu_main_op2_i 
        = vlSelf->exu2ialu_main_op2_i;
    vlSelf->scr1_pipe_ialu__DOT__exu2ialu_cmd_i = vlSelf->exu2ialu_cmd_i;
    vlSelf->scr1_pipe_ialu__DOT__exu2ialu_addr_op1_i 
        = vlSelf->exu2ialu_addr_op1_i;
    vlSelf->scr1_pipe_ialu__DOT__exu2ialu_addr_op2_i 
        = vlSelf->exu2ialu_addr_op2_i;
    if (((IData)(vlSelf->clk) ^ (IData)(vlSelf->scr1_pipe_ialu__DOT____Vtogcov__clk))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__clk 
            = vlSelf->clk;
    }
    if (((IData)(vlSelf->rst_n) ^ (IData)(vlSelf->scr1_pipe_ialu__DOT____Vtogcov__rst_n))) {
        ++(vlSymsp->__Vcoverage[1]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__rst_n 
            = vlSelf->rst_n;
    }
    if (((IData)(vlSelf->exu2ialu_rvm_cmd_vd_i) ^ (IData)(vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_rvm_cmd_vd_i))) {
        ++(vlSymsp->__Vcoverage[2]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_rvm_cmd_vd_i 
            = vlSelf->exu2ialu_rvm_cmd_vd_i;
    }
    if (((IData)(vlSelf->scr1_pipe_ialu__DOT__mdu_res_c_ff) 
         ^ (IData)(vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_c_ff))) {
        ++(vlSymsp->__Vcoverage[769]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_c_ff 
            = vlSelf->scr1_pipe_ialu__DOT__mdu_res_c_ff;
    }
    if ((1U & ((IData)(vlSelf->scr1_pipe_ialu__DOT__mdu_fsm_ff) 
               ^ (IData)(vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_fsm_ff)))) {
        ++(vlSymsp->__Vcoverage[321]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_fsm_ff 
            = ((2U & (IData)(vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_fsm_ff)) 
               | (1U & (IData)(vlSelf->scr1_pipe_ialu__DOT__mdu_fsm_ff)));
    }
    if ((2U & ((IData)(vlSelf->scr1_pipe_ialu__DOT__mdu_fsm_ff) 
               ^ (IData)(vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_fsm_ff)))) {
        ++(vlSymsp->__Vcoverage[322]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_fsm_ff 
            = ((1U & (IData)(vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_fsm_ff)) 
               | (2U & (IData)(vlSelf->scr1_pipe_ialu__DOT__mdu_fsm_ff)));
    }
    if ((1U & ((IData)(vlSelf->exu2ialu_cmd_i) ^ (IData)(vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_cmd_i)))) {
        ++(vlSymsp->__Vcoverage[68]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_cmd_i 
            = ((0x1eU & (IData)(vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_cmd_i)) 
               | (1U & (IData)(vlSelf->exu2ialu_cmd_i)));
    }
    if ((2U & ((IData)(vlSelf->exu2ialu_cmd_i) ^ (IData)(vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_cmd_i)))) {
        ++(vlSymsp->__Vcoverage[69]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_cmd_i 
            = ((0x1dU & (IData)(vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_cmd_i)) 
               | (2U & (IData)(vlSelf->exu2ialu_cmd_i)));
    }
    if ((4U & ((IData)(vlSelf->exu2ialu_cmd_i) ^ (IData)(vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_cmd_i)))) {
        ++(vlSymsp->__Vcoverage[70]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_cmd_i 
            = ((0x1bU & (IData)(vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_cmd_i)) 
               | (4U & (IData)(vlSelf->exu2ialu_cmd_i)));
    }
    if ((8U & ((IData)(vlSelf->exu2ialu_cmd_i) ^ (IData)(vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_cmd_i)))) {
        ++(vlSymsp->__Vcoverage[71]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_cmd_i 
            = ((0x17U & (IData)(vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_cmd_i)) 
               | (8U & (IData)(vlSelf->exu2ialu_cmd_i)));
    }
    if ((0x10U & ((IData)(vlSelf->exu2ialu_cmd_i) ^ (IData)(vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_cmd_i)))) {
        ++(vlSymsp->__Vcoverage[72]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_cmd_i 
            = ((0xfU & (IData)(vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_cmd_i)) 
               | (0x10U & (IData)(vlSelf->exu2ialu_cmd_i)));
    }
    if ((1U & (vlSelf->exu2ialu_main_op1_i ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_main_op1_i))) {
        ++(vlSymsp->__Vcoverage[4]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_main_op1_i 
            = ((0xfffffffeU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_main_op1_i) 
               | (1U & vlSelf->exu2ialu_main_op1_i));
    }
    if ((2U & (vlSelf->exu2ialu_main_op1_i ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_main_op1_i))) {
        ++(vlSymsp->__Vcoverage[5]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_main_op1_i 
            = ((0xfffffffdU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_main_op1_i) 
               | (2U & vlSelf->exu2ialu_main_op1_i));
    }
    if ((4U & (vlSelf->exu2ialu_main_op1_i ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_main_op1_i))) {
        ++(vlSymsp->__Vcoverage[6]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_main_op1_i 
            = ((0xfffffffbU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_main_op1_i) 
               | (4U & vlSelf->exu2ialu_main_op1_i));
    }
    if ((8U & (vlSelf->exu2ialu_main_op1_i ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_main_op1_i))) {
        ++(vlSymsp->__Vcoverage[7]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_main_op1_i 
            = ((0xfffffff7U & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_main_op1_i) 
               | (8U & vlSelf->exu2ialu_main_op1_i));
    }
    if ((0x10U & (vlSelf->exu2ialu_main_op1_i ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_main_op1_i))) {
        ++(vlSymsp->__Vcoverage[8]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_main_op1_i 
            = ((0xffffffefU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_main_op1_i) 
               | (0x10U & vlSelf->exu2ialu_main_op1_i));
    }
    if ((0x20U & (vlSelf->exu2ialu_main_op1_i ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_main_op1_i))) {
        ++(vlSymsp->__Vcoverage[9]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_main_op1_i 
            = ((0xffffffdfU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_main_op1_i) 
               | (0x20U & vlSelf->exu2ialu_main_op1_i));
    }
    if ((0x40U & (vlSelf->exu2ialu_main_op1_i ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_main_op1_i))) {
        ++(vlSymsp->__Vcoverage[10]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_main_op1_i 
            = ((0xffffffbfU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_main_op1_i) 
               | (0x40U & vlSelf->exu2ialu_main_op1_i));
    }
    if ((0x80U & (vlSelf->exu2ialu_main_op1_i ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_main_op1_i))) {
        ++(vlSymsp->__Vcoverage[11]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_main_op1_i 
            = ((0xffffff7fU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_main_op1_i) 
               | (0x80U & vlSelf->exu2ialu_main_op1_i));
    }
    if ((0x100U & (vlSelf->exu2ialu_main_op1_i ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_main_op1_i))) {
        ++(vlSymsp->__Vcoverage[12]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_main_op1_i 
            = ((0xfffffeffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_main_op1_i) 
               | (0x100U & vlSelf->exu2ialu_main_op1_i));
    }
    if ((0x200U & (vlSelf->exu2ialu_main_op1_i ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_main_op1_i))) {
        ++(vlSymsp->__Vcoverage[13]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_main_op1_i 
            = ((0xfffffdffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_main_op1_i) 
               | (0x200U & vlSelf->exu2ialu_main_op1_i));
    }
    if ((0x400U & (vlSelf->exu2ialu_main_op1_i ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_main_op1_i))) {
        ++(vlSymsp->__Vcoverage[14]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_main_op1_i 
            = ((0xfffffbffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_main_op1_i) 
               | (0x400U & vlSelf->exu2ialu_main_op1_i));
    }
    if ((0x800U & (vlSelf->exu2ialu_main_op1_i ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_main_op1_i))) {
        ++(vlSymsp->__Vcoverage[15]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_main_op1_i 
            = ((0xfffff7ffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_main_op1_i) 
               | (0x800U & vlSelf->exu2ialu_main_op1_i));
    }
    if ((0x1000U & (vlSelf->exu2ialu_main_op1_i ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_main_op1_i))) {
        ++(vlSymsp->__Vcoverage[16]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_main_op1_i 
            = ((0xffffefffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_main_op1_i) 
               | (0x1000U & vlSelf->exu2ialu_main_op1_i));
    }
    if ((0x2000U & (vlSelf->exu2ialu_main_op1_i ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_main_op1_i))) {
        ++(vlSymsp->__Vcoverage[17]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_main_op1_i 
            = ((0xffffdfffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_main_op1_i) 
               | (0x2000U & vlSelf->exu2ialu_main_op1_i));
    }
    if ((0x4000U & (vlSelf->exu2ialu_main_op1_i ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_main_op1_i))) {
        ++(vlSymsp->__Vcoverage[18]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_main_op1_i 
            = ((0xffffbfffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_main_op1_i) 
               | (0x4000U & vlSelf->exu2ialu_main_op1_i));
    }
    if ((0x8000U & (vlSelf->exu2ialu_main_op1_i ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_main_op1_i))) {
        ++(vlSymsp->__Vcoverage[19]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_main_op1_i 
            = ((0xffff7fffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_main_op1_i) 
               | (0x8000U & vlSelf->exu2ialu_main_op1_i));
    }
    if ((0x10000U & (vlSelf->exu2ialu_main_op1_i ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_main_op1_i))) {
        ++(vlSymsp->__Vcoverage[20]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_main_op1_i 
            = ((0xfffeffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_main_op1_i) 
               | (0x10000U & vlSelf->exu2ialu_main_op1_i));
    }
    if ((0x20000U & (vlSelf->exu2ialu_main_op1_i ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_main_op1_i))) {
        ++(vlSymsp->__Vcoverage[21]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_main_op1_i 
            = ((0xfffdffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_main_op1_i) 
               | (0x20000U & vlSelf->exu2ialu_main_op1_i));
    }
    if ((0x40000U & (vlSelf->exu2ialu_main_op1_i ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_main_op1_i))) {
        ++(vlSymsp->__Vcoverage[22]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_main_op1_i 
            = ((0xfffbffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_main_op1_i) 
               | (0x40000U & vlSelf->exu2ialu_main_op1_i));
    }
    if ((0x80000U & (vlSelf->exu2ialu_main_op1_i ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_main_op1_i))) {
        ++(vlSymsp->__Vcoverage[23]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_main_op1_i 
            = ((0xfff7ffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_main_op1_i) 
               | (0x80000U & vlSelf->exu2ialu_main_op1_i));
    }
    if ((0x100000U & (vlSelf->exu2ialu_main_op1_i ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_main_op1_i))) {
        ++(vlSymsp->__Vcoverage[24]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_main_op1_i 
            = ((0xffefffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_main_op1_i) 
               | (0x100000U & vlSelf->exu2ialu_main_op1_i));
    }
    if ((0x200000U & (vlSelf->exu2ialu_main_op1_i ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_main_op1_i))) {
        ++(vlSymsp->__Vcoverage[25]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_main_op1_i 
            = ((0xffdfffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_main_op1_i) 
               | (0x200000U & vlSelf->exu2ialu_main_op1_i));
    }
    if ((0x400000U & (vlSelf->exu2ialu_main_op1_i ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_main_op1_i))) {
        ++(vlSymsp->__Vcoverage[26]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_main_op1_i 
            = ((0xffbfffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_main_op1_i) 
               | (0x400000U & vlSelf->exu2ialu_main_op1_i));
    }
    if ((0x800000U & (vlSelf->exu2ialu_main_op1_i ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_main_op1_i))) {
        ++(vlSymsp->__Vcoverage[27]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_main_op1_i 
            = ((0xff7fffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_main_op1_i) 
               | (0x800000U & vlSelf->exu2ialu_main_op1_i));
    }
    if ((0x1000000U & (vlSelf->exu2ialu_main_op1_i 
                       ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_main_op1_i))) {
        ++(vlSymsp->__Vcoverage[28]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_main_op1_i 
            = ((0xfeffffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_main_op1_i) 
               | (0x1000000U & vlSelf->exu2ialu_main_op1_i));
    }
    if ((0x2000000U & (vlSelf->exu2ialu_main_op1_i 
                       ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_main_op1_i))) {
        ++(vlSymsp->__Vcoverage[29]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_main_op1_i 
            = ((0xfdffffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_main_op1_i) 
               | (0x2000000U & vlSelf->exu2ialu_main_op1_i));
    }
    if ((0x4000000U & (vlSelf->exu2ialu_main_op1_i 
                       ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_main_op1_i))) {
        ++(vlSymsp->__Vcoverage[30]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_main_op1_i 
            = ((0xfbffffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_main_op1_i) 
               | (0x4000000U & vlSelf->exu2ialu_main_op1_i));
    }
    if ((0x8000000U & (vlSelf->exu2ialu_main_op1_i 
                       ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_main_op1_i))) {
        ++(vlSymsp->__Vcoverage[31]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_main_op1_i 
            = ((0xf7ffffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_main_op1_i) 
               | (0x8000000U & vlSelf->exu2ialu_main_op1_i));
    }
    if ((0x10000000U & (vlSelf->exu2ialu_main_op1_i 
                        ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_main_op1_i))) {
        ++(vlSymsp->__Vcoverage[32]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_main_op1_i 
            = ((0xefffffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_main_op1_i) 
               | (0x10000000U & vlSelf->exu2ialu_main_op1_i));
    }
    if ((0x20000000U & (vlSelf->exu2ialu_main_op1_i 
                        ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_main_op1_i))) {
        ++(vlSymsp->__Vcoverage[33]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_main_op1_i 
            = ((0xdfffffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_main_op1_i) 
               | (0x20000000U & vlSelf->exu2ialu_main_op1_i));
    }
    if ((0x40000000U & (vlSelf->exu2ialu_main_op1_i 
                        ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_main_op1_i))) {
        ++(vlSymsp->__Vcoverage[34]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_main_op1_i 
            = ((0xbfffffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_main_op1_i) 
               | (0x40000000U & vlSelf->exu2ialu_main_op1_i));
    }
    if (((vlSelf->exu2ialu_main_op1_i ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_main_op1_i) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[35]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_main_op1_i 
            = ((0x7fffffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_main_op1_i) 
               | (0x80000000U & vlSelf->exu2ialu_main_op1_i));
    }
    if ((1U & (vlSelf->exu2ialu_main_op2_i ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_main_op2_i))) {
        ++(vlSymsp->__Vcoverage[36]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_main_op2_i 
            = ((0xfffffffeU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_main_op2_i) 
               | (1U & vlSelf->exu2ialu_main_op2_i));
    }
    if ((2U & (vlSelf->exu2ialu_main_op2_i ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_main_op2_i))) {
        ++(vlSymsp->__Vcoverage[37]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_main_op2_i 
            = ((0xfffffffdU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_main_op2_i) 
               | (2U & vlSelf->exu2ialu_main_op2_i));
    }
    if ((4U & (vlSelf->exu2ialu_main_op2_i ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_main_op2_i))) {
        ++(vlSymsp->__Vcoverage[38]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_main_op2_i 
            = ((0xfffffffbU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_main_op2_i) 
               | (4U & vlSelf->exu2ialu_main_op2_i));
    }
    if ((8U & (vlSelf->exu2ialu_main_op2_i ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_main_op2_i))) {
        ++(vlSymsp->__Vcoverage[39]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_main_op2_i 
            = ((0xfffffff7U & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_main_op2_i) 
               | (8U & vlSelf->exu2ialu_main_op2_i));
    }
    if ((0x10U & (vlSelf->exu2ialu_main_op2_i ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_main_op2_i))) {
        ++(vlSymsp->__Vcoverage[40]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_main_op2_i 
            = ((0xffffffefU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_main_op2_i) 
               | (0x10U & vlSelf->exu2ialu_main_op2_i));
    }
    if ((0x20U & (vlSelf->exu2ialu_main_op2_i ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_main_op2_i))) {
        ++(vlSymsp->__Vcoverage[41]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_main_op2_i 
            = ((0xffffffdfU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_main_op2_i) 
               | (0x20U & vlSelf->exu2ialu_main_op2_i));
    }
    if ((0x40U & (vlSelf->exu2ialu_main_op2_i ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_main_op2_i))) {
        ++(vlSymsp->__Vcoverage[42]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_main_op2_i 
            = ((0xffffffbfU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_main_op2_i) 
               | (0x40U & vlSelf->exu2ialu_main_op2_i));
    }
    if ((0x80U & (vlSelf->exu2ialu_main_op2_i ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_main_op2_i))) {
        ++(vlSymsp->__Vcoverage[43]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_main_op2_i 
            = ((0xffffff7fU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_main_op2_i) 
               | (0x80U & vlSelf->exu2ialu_main_op2_i));
    }
    if ((0x100U & (vlSelf->exu2ialu_main_op2_i ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_main_op2_i))) {
        ++(vlSymsp->__Vcoverage[44]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_main_op2_i 
            = ((0xfffffeffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_main_op2_i) 
               | (0x100U & vlSelf->exu2ialu_main_op2_i));
    }
    if ((0x200U & (vlSelf->exu2ialu_main_op2_i ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_main_op2_i))) {
        ++(vlSymsp->__Vcoverage[45]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_main_op2_i 
            = ((0xfffffdffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_main_op2_i) 
               | (0x200U & vlSelf->exu2ialu_main_op2_i));
    }
    if ((0x400U & (vlSelf->exu2ialu_main_op2_i ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_main_op2_i))) {
        ++(vlSymsp->__Vcoverage[46]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_main_op2_i 
            = ((0xfffffbffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_main_op2_i) 
               | (0x400U & vlSelf->exu2ialu_main_op2_i));
    }
    if ((0x800U & (vlSelf->exu2ialu_main_op2_i ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_main_op2_i))) {
        ++(vlSymsp->__Vcoverage[47]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_main_op2_i 
            = ((0xfffff7ffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_main_op2_i) 
               | (0x800U & vlSelf->exu2ialu_main_op2_i));
    }
    if ((0x1000U & (vlSelf->exu2ialu_main_op2_i ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_main_op2_i))) {
        ++(vlSymsp->__Vcoverage[48]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_main_op2_i 
            = ((0xffffefffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_main_op2_i) 
               | (0x1000U & vlSelf->exu2ialu_main_op2_i));
    }
    if ((0x2000U & (vlSelf->exu2ialu_main_op2_i ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_main_op2_i))) {
        ++(vlSymsp->__Vcoverage[49]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_main_op2_i 
            = ((0xffffdfffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_main_op2_i) 
               | (0x2000U & vlSelf->exu2ialu_main_op2_i));
    }
    if ((0x4000U & (vlSelf->exu2ialu_main_op2_i ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_main_op2_i))) {
        ++(vlSymsp->__Vcoverage[50]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_main_op2_i 
            = ((0xffffbfffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_main_op2_i) 
               | (0x4000U & vlSelf->exu2ialu_main_op2_i));
    }
    if ((0x8000U & (vlSelf->exu2ialu_main_op2_i ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_main_op2_i))) {
        ++(vlSymsp->__Vcoverage[51]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_main_op2_i 
            = ((0xffff7fffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_main_op2_i) 
               | (0x8000U & vlSelf->exu2ialu_main_op2_i));
    }
    if ((0x10000U & (vlSelf->exu2ialu_main_op2_i ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_main_op2_i))) {
        ++(vlSymsp->__Vcoverage[52]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_main_op2_i 
            = ((0xfffeffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_main_op2_i) 
               | (0x10000U & vlSelf->exu2ialu_main_op2_i));
    }
    if ((0x20000U & (vlSelf->exu2ialu_main_op2_i ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_main_op2_i))) {
        ++(vlSymsp->__Vcoverage[53]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_main_op2_i 
            = ((0xfffdffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_main_op2_i) 
               | (0x20000U & vlSelf->exu2ialu_main_op2_i));
    }
    if ((0x40000U & (vlSelf->exu2ialu_main_op2_i ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_main_op2_i))) {
        ++(vlSymsp->__Vcoverage[54]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_main_op2_i 
            = ((0xfffbffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_main_op2_i) 
               | (0x40000U & vlSelf->exu2ialu_main_op2_i));
    }
    if ((0x80000U & (vlSelf->exu2ialu_main_op2_i ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_main_op2_i))) {
        ++(vlSymsp->__Vcoverage[55]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_main_op2_i 
            = ((0xfff7ffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_main_op2_i) 
               | (0x80000U & vlSelf->exu2ialu_main_op2_i));
    }
    if ((0x100000U & (vlSelf->exu2ialu_main_op2_i ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_main_op2_i))) {
        ++(vlSymsp->__Vcoverage[56]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_main_op2_i 
            = ((0xffefffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_main_op2_i) 
               | (0x100000U & vlSelf->exu2ialu_main_op2_i));
    }
    if ((0x200000U & (vlSelf->exu2ialu_main_op2_i ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_main_op2_i))) {
        ++(vlSymsp->__Vcoverage[57]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_main_op2_i 
            = ((0xffdfffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_main_op2_i) 
               | (0x200000U & vlSelf->exu2ialu_main_op2_i));
    }
    if ((0x400000U & (vlSelf->exu2ialu_main_op2_i ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_main_op2_i))) {
        ++(vlSymsp->__Vcoverage[58]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_main_op2_i 
            = ((0xffbfffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_main_op2_i) 
               | (0x400000U & vlSelf->exu2ialu_main_op2_i));
    }
    if ((0x800000U & (vlSelf->exu2ialu_main_op2_i ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_main_op2_i))) {
        ++(vlSymsp->__Vcoverage[59]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_main_op2_i 
            = ((0xff7fffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_main_op2_i) 
               | (0x800000U & vlSelf->exu2ialu_main_op2_i));
    }
    if ((0x1000000U & (vlSelf->exu2ialu_main_op2_i 
                       ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_main_op2_i))) {
        ++(vlSymsp->__Vcoverage[60]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_main_op2_i 
            = ((0xfeffffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_main_op2_i) 
               | (0x1000000U & vlSelf->exu2ialu_main_op2_i));
    }
    if ((0x2000000U & (vlSelf->exu2ialu_main_op2_i 
                       ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_main_op2_i))) {
        ++(vlSymsp->__Vcoverage[61]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_main_op2_i 
            = ((0xfdffffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_main_op2_i) 
               | (0x2000000U & vlSelf->exu2ialu_main_op2_i));
    }
    if ((0x4000000U & (vlSelf->exu2ialu_main_op2_i 
                       ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_main_op2_i))) {
        ++(vlSymsp->__Vcoverage[62]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_main_op2_i 
            = ((0xfbffffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_main_op2_i) 
               | (0x4000000U & vlSelf->exu2ialu_main_op2_i));
    }
    if ((0x8000000U & (vlSelf->exu2ialu_main_op2_i 
                       ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_main_op2_i))) {
        ++(vlSymsp->__Vcoverage[63]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_main_op2_i 
            = ((0xf7ffffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_main_op2_i) 
               | (0x8000000U & vlSelf->exu2ialu_main_op2_i));
    }
    if ((0x10000000U & (vlSelf->exu2ialu_main_op2_i 
                        ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_main_op2_i))) {
        ++(vlSymsp->__Vcoverage[64]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_main_op2_i 
            = ((0xefffffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_main_op2_i) 
               | (0x10000000U & vlSelf->exu2ialu_main_op2_i));
    }
    if ((0x20000000U & (vlSelf->exu2ialu_main_op2_i 
                        ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_main_op2_i))) {
        ++(vlSymsp->__Vcoverage[65]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_main_op2_i 
            = ((0xdfffffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_main_op2_i) 
               | (0x20000000U & vlSelf->exu2ialu_main_op2_i));
    }
    if ((0x40000000U & (vlSelf->exu2ialu_main_op2_i 
                        ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_main_op2_i))) {
        ++(vlSymsp->__Vcoverage[66]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_main_op2_i 
            = ((0xbfffffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_main_op2_i) 
               | (0x40000000U & vlSelf->exu2ialu_main_op2_i));
    }
    if (((vlSelf->exu2ialu_main_op2_i ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_main_op2_i) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[67]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_main_op2_i 
            = ((0x7fffffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_main_op2_i) 
               | (0x80000000U & vlSelf->exu2ialu_main_op2_i));
    }
    if ((1U & (vlSelf->exu2ialu_addr_op1_i ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_addr_op1_i))) {
        ++(vlSymsp->__Vcoverage[106]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_addr_op1_i 
            = ((0xfffffffeU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_addr_op1_i) 
               | (1U & vlSelf->exu2ialu_addr_op1_i));
    }
    if ((2U & (vlSelf->exu2ialu_addr_op1_i ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_addr_op1_i))) {
        ++(vlSymsp->__Vcoverage[107]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_addr_op1_i 
            = ((0xfffffffdU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_addr_op1_i) 
               | (2U & vlSelf->exu2ialu_addr_op1_i));
    }
    if ((4U & (vlSelf->exu2ialu_addr_op1_i ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_addr_op1_i))) {
        ++(vlSymsp->__Vcoverage[108]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_addr_op1_i 
            = ((0xfffffffbU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_addr_op1_i) 
               | (4U & vlSelf->exu2ialu_addr_op1_i));
    }
    if ((8U & (vlSelf->exu2ialu_addr_op1_i ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_addr_op1_i))) {
        ++(vlSymsp->__Vcoverage[109]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_addr_op1_i 
            = ((0xfffffff7U & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_addr_op1_i) 
               | (8U & vlSelf->exu2ialu_addr_op1_i));
    }
    if ((0x10U & (vlSelf->exu2ialu_addr_op1_i ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_addr_op1_i))) {
        ++(vlSymsp->__Vcoverage[110]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_addr_op1_i 
            = ((0xffffffefU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_addr_op1_i) 
               | (0x10U & vlSelf->exu2ialu_addr_op1_i));
    }
    if ((0x20U & (vlSelf->exu2ialu_addr_op1_i ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_addr_op1_i))) {
        ++(vlSymsp->__Vcoverage[111]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_addr_op1_i 
            = ((0xffffffdfU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_addr_op1_i) 
               | (0x20U & vlSelf->exu2ialu_addr_op1_i));
    }
    if ((0x40U & (vlSelf->exu2ialu_addr_op1_i ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_addr_op1_i))) {
        ++(vlSymsp->__Vcoverage[112]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_addr_op1_i 
            = ((0xffffffbfU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_addr_op1_i) 
               | (0x40U & vlSelf->exu2ialu_addr_op1_i));
    }
    if ((0x80U & (vlSelf->exu2ialu_addr_op1_i ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_addr_op1_i))) {
        ++(vlSymsp->__Vcoverage[113]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_addr_op1_i 
            = ((0xffffff7fU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_addr_op1_i) 
               | (0x80U & vlSelf->exu2ialu_addr_op1_i));
    }
    if ((0x100U & (vlSelf->exu2ialu_addr_op1_i ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_addr_op1_i))) {
        ++(vlSymsp->__Vcoverage[114]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_addr_op1_i 
            = ((0xfffffeffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_addr_op1_i) 
               | (0x100U & vlSelf->exu2ialu_addr_op1_i));
    }
    if ((0x200U & (vlSelf->exu2ialu_addr_op1_i ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_addr_op1_i))) {
        ++(vlSymsp->__Vcoverage[115]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_addr_op1_i 
            = ((0xfffffdffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_addr_op1_i) 
               | (0x200U & vlSelf->exu2ialu_addr_op1_i));
    }
    if ((0x400U & (vlSelf->exu2ialu_addr_op1_i ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_addr_op1_i))) {
        ++(vlSymsp->__Vcoverage[116]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_addr_op1_i 
            = ((0xfffffbffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_addr_op1_i) 
               | (0x400U & vlSelf->exu2ialu_addr_op1_i));
    }
    if ((0x800U & (vlSelf->exu2ialu_addr_op1_i ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_addr_op1_i))) {
        ++(vlSymsp->__Vcoverage[117]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_addr_op1_i 
            = ((0xfffff7ffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_addr_op1_i) 
               | (0x800U & vlSelf->exu2ialu_addr_op1_i));
    }
    if ((0x1000U & (vlSelf->exu2ialu_addr_op1_i ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_addr_op1_i))) {
        ++(vlSymsp->__Vcoverage[118]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_addr_op1_i 
            = ((0xffffefffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_addr_op1_i) 
               | (0x1000U & vlSelf->exu2ialu_addr_op1_i));
    }
    if ((0x2000U & (vlSelf->exu2ialu_addr_op1_i ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_addr_op1_i))) {
        ++(vlSymsp->__Vcoverage[119]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_addr_op1_i 
            = ((0xffffdfffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_addr_op1_i) 
               | (0x2000U & vlSelf->exu2ialu_addr_op1_i));
    }
    if ((0x4000U & (vlSelf->exu2ialu_addr_op1_i ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_addr_op1_i))) {
        ++(vlSymsp->__Vcoverage[120]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_addr_op1_i 
            = ((0xffffbfffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_addr_op1_i) 
               | (0x4000U & vlSelf->exu2ialu_addr_op1_i));
    }
    if ((0x8000U & (vlSelf->exu2ialu_addr_op1_i ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_addr_op1_i))) {
        ++(vlSymsp->__Vcoverage[121]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_addr_op1_i 
            = ((0xffff7fffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_addr_op1_i) 
               | (0x8000U & vlSelf->exu2ialu_addr_op1_i));
    }
    if ((0x10000U & (vlSelf->exu2ialu_addr_op1_i ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_addr_op1_i))) {
        ++(vlSymsp->__Vcoverage[122]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_addr_op1_i 
            = ((0xfffeffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_addr_op1_i) 
               | (0x10000U & vlSelf->exu2ialu_addr_op1_i));
    }
    if ((0x20000U & (vlSelf->exu2ialu_addr_op1_i ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_addr_op1_i))) {
        ++(vlSymsp->__Vcoverage[123]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_addr_op1_i 
            = ((0xfffdffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_addr_op1_i) 
               | (0x20000U & vlSelf->exu2ialu_addr_op1_i));
    }
    if ((0x40000U & (vlSelf->exu2ialu_addr_op1_i ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_addr_op1_i))) {
        ++(vlSymsp->__Vcoverage[124]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_addr_op1_i 
            = ((0xfffbffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_addr_op1_i) 
               | (0x40000U & vlSelf->exu2ialu_addr_op1_i));
    }
    if ((0x80000U & (vlSelf->exu2ialu_addr_op1_i ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_addr_op1_i))) {
        ++(vlSymsp->__Vcoverage[125]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_addr_op1_i 
            = ((0xfff7ffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_addr_op1_i) 
               | (0x80000U & vlSelf->exu2ialu_addr_op1_i));
    }
    if ((0x100000U & (vlSelf->exu2ialu_addr_op1_i ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_addr_op1_i))) {
        ++(vlSymsp->__Vcoverage[126]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_addr_op1_i 
            = ((0xffefffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_addr_op1_i) 
               | (0x100000U & vlSelf->exu2ialu_addr_op1_i));
    }
    if ((0x200000U & (vlSelf->exu2ialu_addr_op1_i ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_addr_op1_i))) {
        ++(vlSymsp->__Vcoverage[127]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_addr_op1_i 
            = ((0xffdfffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_addr_op1_i) 
               | (0x200000U & vlSelf->exu2ialu_addr_op1_i));
    }
    if ((0x400000U & (vlSelf->exu2ialu_addr_op1_i ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_addr_op1_i))) {
        ++(vlSymsp->__Vcoverage[128]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_addr_op1_i 
            = ((0xffbfffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_addr_op1_i) 
               | (0x400000U & vlSelf->exu2ialu_addr_op1_i));
    }
    if ((0x800000U & (vlSelf->exu2ialu_addr_op1_i ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_addr_op1_i))) {
        ++(vlSymsp->__Vcoverage[129]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_addr_op1_i 
            = ((0xff7fffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_addr_op1_i) 
               | (0x800000U & vlSelf->exu2ialu_addr_op1_i));
    }
    if ((0x1000000U & (vlSelf->exu2ialu_addr_op1_i 
                       ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_addr_op1_i))) {
        ++(vlSymsp->__Vcoverage[130]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_addr_op1_i 
            = ((0xfeffffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_addr_op1_i) 
               | (0x1000000U & vlSelf->exu2ialu_addr_op1_i));
    }
    if ((0x2000000U & (vlSelf->exu2ialu_addr_op1_i 
                       ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_addr_op1_i))) {
        ++(vlSymsp->__Vcoverage[131]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_addr_op1_i 
            = ((0xfdffffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_addr_op1_i) 
               | (0x2000000U & vlSelf->exu2ialu_addr_op1_i));
    }
    if ((0x4000000U & (vlSelf->exu2ialu_addr_op1_i 
                       ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_addr_op1_i))) {
        ++(vlSymsp->__Vcoverage[132]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_addr_op1_i 
            = ((0xfbffffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_addr_op1_i) 
               | (0x4000000U & vlSelf->exu2ialu_addr_op1_i));
    }
    if ((0x8000000U & (vlSelf->exu2ialu_addr_op1_i 
                       ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_addr_op1_i))) {
        ++(vlSymsp->__Vcoverage[133]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_addr_op1_i 
            = ((0xf7ffffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_addr_op1_i) 
               | (0x8000000U & vlSelf->exu2ialu_addr_op1_i));
    }
    if ((0x10000000U & (vlSelf->exu2ialu_addr_op1_i 
                        ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_addr_op1_i))) {
        ++(vlSymsp->__Vcoverage[134]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_addr_op1_i 
            = ((0xefffffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_addr_op1_i) 
               | (0x10000000U & vlSelf->exu2ialu_addr_op1_i));
    }
    if ((0x20000000U & (vlSelf->exu2ialu_addr_op1_i 
                        ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_addr_op1_i))) {
        ++(vlSymsp->__Vcoverage[135]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_addr_op1_i 
            = ((0xdfffffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_addr_op1_i) 
               | (0x20000000U & vlSelf->exu2ialu_addr_op1_i));
    }
    if ((0x40000000U & (vlSelf->exu2ialu_addr_op1_i 
                        ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_addr_op1_i))) {
        ++(vlSymsp->__Vcoverage[136]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_addr_op1_i 
            = ((0xbfffffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_addr_op1_i) 
               | (0x40000000U & vlSelf->exu2ialu_addr_op1_i));
    }
    if (((vlSelf->exu2ialu_addr_op1_i ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_addr_op1_i) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[137]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_addr_op1_i 
            = ((0x7fffffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_addr_op1_i) 
               | (0x80000000U & vlSelf->exu2ialu_addr_op1_i));
    }
    if ((1U & (vlSelf->exu2ialu_addr_op2_i ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_addr_op2_i))) {
        ++(vlSymsp->__Vcoverage[138]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_addr_op2_i 
            = ((0xfffffffeU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_addr_op2_i) 
               | (1U & vlSelf->exu2ialu_addr_op2_i));
    }
    if ((2U & (vlSelf->exu2ialu_addr_op2_i ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_addr_op2_i))) {
        ++(vlSymsp->__Vcoverage[139]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_addr_op2_i 
            = ((0xfffffffdU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_addr_op2_i) 
               | (2U & vlSelf->exu2ialu_addr_op2_i));
    }
    if ((4U & (vlSelf->exu2ialu_addr_op2_i ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_addr_op2_i))) {
        ++(vlSymsp->__Vcoverage[140]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_addr_op2_i 
            = ((0xfffffffbU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_addr_op2_i) 
               | (4U & vlSelf->exu2ialu_addr_op2_i));
    }
    if ((8U & (vlSelf->exu2ialu_addr_op2_i ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_addr_op2_i))) {
        ++(vlSymsp->__Vcoverage[141]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_addr_op2_i 
            = ((0xfffffff7U & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_addr_op2_i) 
               | (8U & vlSelf->exu2ialu_addr_op2_i));
    }
    if ((0x10U & (vlSelf->exu2ialu_addr_op2_i ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_addr_op2_i))) {
        ++(vlSymsp->__Vcoverage[142]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_addr_op2_i 
            = ((0xffffffefU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_addr_op2_i) 
               | (0x10U & vlSelf->exu2ialu_addr_op2_i));
    }
    if ((0x20U & (vlSelf->exu2ialu_addr_op2_i ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_addr_op2_i))) {
        ++(vlSymsp->__Vcoverage[143]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_addr_op2_i 
            = ((0xffffffdfU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_addr_op2_i) 
               | (0x20U & vlSelf->exu2ialu_addr_op2_i));
    }
    if ((0x40U & (vlSelf->exu2ialu_addr_op2_i ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_addr_op2_i))) {
        ++(vlSymsp->__Vcoverage[144]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_addr_op2_i 
            = ((0xffffffbfU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_addr_op2_i) 
               | (0x40U & vlSelf->exu2ialu_addr_op2_i));
    }
    if ((0x80U & (vlSelf->exu2ialu_addr_op2_i ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_addr_op2_i))) {
        ++(vlSymsp->__Vcoverage[145]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_addr_op2_i 
            = ((0xffffff7fU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_addr_op2_i) 
               | (0x80U & vlSelf->exu2ialu_addr_op2_i));
    }
    if ((0x100U & (vlSelf->exu2ialu_addr_op2_i ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_addr_op2_i))) {
        ++(vlSymsp->__Vcoverage[146]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_addr_op2_i 
            = ((0xfffffeffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_addr_op2_i) 
               | (0x100U & vlSelf->exu2ialu_addr_op2_i));
    }
    if ((0x200U & (vlSelf->exu2ialu_addr_op2_i ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_addr_op2_i))) {
        ++(vlSymsp->__Vcoverage[147]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_addr_op2_i 
            = ((0xfffffdffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_addr_op2_i) 
               | (0x200U & vlSelf->exu2ialu_addr_op2_i));
    }
    if ((0x400U & (vlSelf->exu2ialu_addr_op2_i ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_addr_op2_i))) {
        ++(vlSymsp->__Vcoverage[148]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_addr_op2_i 
            = ((0xfffffbffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_addr_op2_i) 
               | (0x400U & vlSelf->exu2ialu_addr_op2_i));
    }
    if ((0x800U & (vlSelf->exu2ialu_addr_op2_i ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_addr_op2_i))) {
        ++(vlSymsp->__Vcoverage[149]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_addr_op2_i 
            = ((0xfffff7ffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_addr_op2_i) 
               | (0x800U & vlSelf->exu2ialu_addr_op2_i));
    }
    if ((0x1000U & (vlSelf->exu2ialu_addr_op2_i ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_addr_op2_i))) {
        ++(vlSymsp->__Vcoverage[150]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_addr_op2_i 
            = ((0xffffefffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_addr_op2_i) 
               | (0x1000U & vlSelf->exu2ialu_addr_op2_i));
    }
    if ((0x2000U & (vlSelf->exu2ialu_addr_op2_i ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_addr_op2_i))) {
        ++(vlSymsp->__Vcoverage[151]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_addr_op2_i 
            = ((0xffffdfffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_addr_op2_i) 
               | (0x2000U & vlSelf->exu2ialu_addr_op2_i));
    }
    if ((0x4000U & (vlSelf->exu2ialu_addr_op2_i ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_addr_op2_i))) {
        ++(vlSymsp->__Vcoverage[152]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_addr_op2_i 
            = ((0xffffbfffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_addr_op2_i) 
               | (0x4000U & vlSelf->exu2ialu_addr_op2_i));
    }
    if ((0x8000U & (vlSelf->exu2ialu_addr_op2_i ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_addr_op2_i))) {
        ++(vlSymsp->__Vcoverage[153]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_addr_op2_i 
            = ((0xffff7fffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_addr_op2_i) 
               | (0x8000U & vlSelf->exu2ialu_addr_op2_i));
    }
    if ((0x10000U & (vlSelf->exu2ialu_addr_op2_i ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_addr_op2_i))) {
        ++(vlSymsp->__Vcoverage[154]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_addr_op2_i 
            = ((0xfffeffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_addr_op2_i) 
               | (0x10000U & vlSelf->exu2ialu_addr_op2_i));
    }
    if ((0x20000U & (vlSelf->exu2ialu_addr_op2_i ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_addr_op2_i))) {
        ++(vlSymsp->__Vcoverage[155]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_addr_op2_i 
            = ((0xfffdffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_addr_op2_i) 
               | (0x20000U & vlSelf->exu2ialu_addr_op2_i));
    }
    if ((0x40000U & (vlSelf->exu2ialu_addr_op2_i ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_addr_op2_i))) {
        ++(vlSymsp->__Vcoverage[156]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_addr_op2_i 
            = ((0xfffbffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_addr_op2_i) 
               | (0x40000U & vlSelf->exu2ialu_addr_op2_i));
    }
    if ((0x80000U & (vlSelf->exu2ialu_addr_op2_i ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_addr_op2_i))) {
        ++(vlSymsp->__Vcoverage[157]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_addr_op2_i 
            = ((0xfff7ffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_addr_op2_i) 
               | (0x80000U & vlSelf->exu2ialu_addr_op2_i));
    }
    if ((0x100000U & (vlSelf->exu2ialu_addr_op2_i ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_addr_op2_i))) {
        ++(vlSymsp->__Vcoverage[158]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_addr_op2_i 
            = ((0xffefffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_addr_op2_i) 
               | (0x100000U & vlSelf->exu2ialu_addr_op2_i));
    }
    if ((0x200000U & (vlSelf->exu2ialu_addr_op2_i ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_addr_op2_i))) {
        ++(vlSymsp->__Vcoverage[159]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_addr_op2_i 
            = ((0xffdfffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_addr_op2_i) 
               | (0x200000U & vlSelf->exu2ialu_addr_op2_i));
    }
    if ((0x400000U & (vlSelf->exu2ialu_addr_op2_i ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_addr_op2_i))) {
        ++(vlSymsp->__Vcoverage[160]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_addr_op2_i 
            = ((0xffbfffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_addr_op2_i) 
               | (0x400000U & vlSelf->exu2ialu_addr_op2_i));
    }
    if ((0x800000U & (vlSelf->exu2ialu_addr_op2_i ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_addr_op2_i))) {
        ++(vlSymsp->__Vcoverage[161]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_addr_op2_i 
            = ((0xff7fffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_addr_op2_i) 
               | (0x800000U & vlSelf->exu2ialu_addr_op2_i));
    }
    if ((0x1000000U & (vlSelf->exu2ialu_addr_op2_i 
                       ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_addr_op2_i))) {
        ++(vlSymsp->__Vcoverage[162]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_addr_op2_i 
            = ((0xfeffffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_addr_op2_i) 
               | (0x1000000U & vlSelf->exu2ialu_addr_op2_i));
    }
    if ((0x2000000U & (vlSelf->exu2ialu_addr_op2_i 
                       ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_addr_op2_i))) {
        ++(vlSymsp->__Vcoverage[163]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_addr_op2_i 
            = ((0xfdffffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_addr_op2_i) 
               | (0x2000000U & vlSelf->exu2ialu_addr_op2_i));
    }
    if ((0x4000000U & (vlSelf->exu2ialu_addr_op2_i 
                       ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_addr_op2_i))) {
        ++(vlSymsp->__Vcoverage[164]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_addr_op2_i 
            = ((0xfbffffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_addr_op2_i) 
               | (0x4000000U & vlSelf->exu2ialu_addr_op2_i));
    }
    if ((0x8000000U & (vlSelf->exu2ialu_addr_op2_i 
                       ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_addr_op2_i))) {
        ++(vlSymsp->__Vcoverage[165]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_addr_op2_i 
            = ((0xf7ffffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_addr_op2_i) 
               | (0x8000000U & vlSelf->exu2ialu_addr_op2_i));
    }
    if ((0x10000000U & (vlSelf->exu2ialu_addr_op2_i 
                        ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_addr_op2_i))) {
        ++(vlSymsp->__Vcoverage[166]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_addr_op2_i 
            = ((0xefffffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_addr_op2_i) 
               | (0x10000000U & vlSelf->exu2ialu_addr_op2_i));
    }
    if ((0x20000000U & (vlSelf->exu2ialu_addr_op2_i 
                        ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_addr_op2_i))) {
        ++(vlSymsp->__Vcoverage[167]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_addr_op2_i 
            = ((0xdfffffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_addr_op2_i) 
               | (0x20000000U & vlSelf->exu2ialu_addr_op2_i));
    }
    if ((0x40000000U & (vlSelf->exu2ialu_addr_op2_i 
                        ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_addr_op2_i))) {
        ++(vlSymsp->__Vcoverage[168]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_addr_op2_i 
            = ((0xbfffffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_addr_op2_i) 
               | (0x40000000U & vlSelf->exu2ialu_addr_op2_i));
    }
    if (((vlSelf->exu2ialu_addr_op2_i ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_addr_op2_i) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[169]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_addr_op2_i 
            = ((0x7fffffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_addr_op2_i) 
               | (0x80000000U & vlSelf->exu2ialu_addr_op2_i));
    }
    if ((1U & (vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_ff 
               ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_ff))) {
        ++(vlSymsp->__Vcoverage[541]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_ff 
            = ((0xfffffffeU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_ff) 
               | (1U & vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_ff));
    }
    if ((2U & (vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_ff 
               ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_ff))) {
        ++(vlSymsp->__Vcoverage[542]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_ff 
            = ((0xfffffffdU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_ff) 
               | (2U & vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_ff));
    }
    if ((4U & (vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_ff 
               ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_ff))) {
        ++(vlSymsp->__Vcoverage[543]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_ff 
            = ((0xfffffffbU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_ff) 
               | (4U & vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_ff));
    }
    if ((8U & (vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_ff 
               ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_ff))) {
        ++(vlSymsp->__Vcoverage[544]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_ff 
            = ((0xfffffff7U & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_ff) 
               | (8U & vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_ff));
    }
    if ((0x10U & (vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_ff 
                  ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_ff))) {
        ++(vlSymsp->__Vcoverage[545]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_ff 
            = ((0xffffffefU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_ff) 
               | (0x10U & vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_ff));
    }
    if ((0x20U & (vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_ff 
                  ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_ff))) {
        ++(vlSymsp->__Vcoverage[546]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_ff 
            = ((0xffffffdfU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_ff) 
               | (0x20U & vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_ff));
    }
    if ((0x40U & (vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_ff 
                  ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_ff))) {
        ++(vlSymsp->__Vcoverage[547]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_ff 
            = ((0xffffffbfU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_ff) 
               | (0x40U & vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_ff));
    }
    if ((0x80U & (vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_ff 
                  ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_ff))) {
        ++(vlSymsp->__Vcoverage[548]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_ff 
            = ((0xffffff7fU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_ff) 
               | (0x80U & vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_ff));
    }
    if ((0x100U & (vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_ff 
                   ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_ff))) {
        ++(vlSymsp->__Vcoverage[549]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_ff 
            = ((0xfffffeffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_ff) 
               | (0x100U & vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_ff));
    }
    if ((0x200U & (vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_ff 
                   ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_ff))) {
        ++(vlSymsp->__Vcoverage[550]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_ff 
            = ((0xfffffdffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_ff) 
               | (0x200U & vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_ff));
    }
    if ((0x400U & (vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_ff 
                   ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_ff))) {
        ++(vlSymsp->__Vcoverage[551]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_ff 
            = ((0xfffffbffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_ff) 
               | (0x400U & vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_ff));
    }
    if ((0x800U & (vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_ff 
                   ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_ff))) {
        ++(vlSymsp->__Vcoverage[552]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_ff 
            = ((0xfffff7ffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_ff) 
               | (0x800U & vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_ff));
    }
    if ((0x1000U & (vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_ff 
                    ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_ff))) {
        ++(vlSymsp->__Vcoverage[553]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_ff 
            = ((0xffffefffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_ff) 
               | (0x1000U & vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_ff));
    }
    if ((0x2000U & (vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_ff 
                    ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_ff))) {
        ++(vlSymsp->__Vcoverage[554]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_ff 
            = ((0xffffdfffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_ff) 
               | (0x2000U & vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_ff));
    }
    if ((0x4000U & (vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_ff 
                    ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_ff))) {
        ++(vlSymsp->__Vcoverage[555]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_ff 
            = ((0xffffbfffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_ff) 
               | (0x4000U & vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_ff));
    }
    if ((0x8000U & (vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_ff 
                    ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_ff))) {
        ++(vlSymsp->__Vcoverage[556]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_ff 
            = ((0xffff7fffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_ff) 
               | (0x8000U & vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_ff));
    }
    if ((0x10000U & (vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_ff 
                     ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_ff))) {
        ++(vlSymsp->__Vcoverage[557]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_ff 
            = ((0xfffeffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_ff) 
               | (0x10000U & vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_ff));
    }
    if ((0x20000U & (vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_ff 
                     ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_ff))) {
        ++(vlSymsp->__Vcoverage[558]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_ff 
            = ((0xfffdffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_ff) 
               | (0x20000U & vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_ff));
    }
    if ((0x40000U & (vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_ff 
                     ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_ff))) {
        ++(vlSymsp->__Vcoverage[559]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_ff 
            = ((0xfffbffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_ff) 
               | (0x40000U & vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_ff));
    }
    if ((0x80000U & (vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_ff 
                     ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_ff))) {
        ++(vlSymsp->__Vcoverage[560]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_ff 
            = ((0xfff7ffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_ff) 
               | (0x80000U & vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_ff));
    }
    if ((0x100000U & (vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_ff 
                      ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_ff))) {
        ++(vlSymsp->__Vcoverage[561]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_ff 
            = ((0xffefffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_ff) 
               | (0x100000U & vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_ff));
    }
    if ((0x200000U & (vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_ff 
                      ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_ff))) {
        ++(vlSymsp->__Vcoverage[562]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_ff 
            = ((0xffdfffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_ff) 
               | (0x200000U & vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_ff));
    }
    if ((0x400000U & (vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_ff 
                      ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_ff))) {
        ++(vlSymsp->__Vcoverage[563]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_ff 
            = ((0xffbfffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_ff) 
               | (0x400000U & vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_ff));
    }
    if ((0x800000U & (vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_ff 
                      ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_ff))) {
        ++(vlSymsp->__Vcoverage[564]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_ff 
            = ((0xff7fffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_ff) 
               | (0x800000U & vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_ff));
    }
    if ((0x1000000U & (vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_ff 
                       ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_ff))) {
        ++(vlSymsp->__Vcoverage[565]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_ff 
            = ((0xfeffffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_ff) 
               | (0x1000000U & vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_ff));
    }
    if ((0x2000000U & (vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_ff 
                       ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_ff))) {
        ++(vlSymsp->__Vcoverage[566]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_ff 
            = ((0xfdffffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_ff) 
               | (0x2000000U & vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_ff));
    }
    if ((0x4000000U & (vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_ff 
                       ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_ff))) {
        ++(vlSymsp->__Vcoverage[567]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_ff 
            = ((0xfbffffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_ff) 
               | (0x4000000U & vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_ff));
    }
    if ((0x8000000U & (vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_ff 
                       ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_ff))) {
        ++(vlSymsp->__Vcoverage[568]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_ff 
            = ((0xf7ffffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_ff) 
               | (0x8000000U & vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_ff));
    }
    if ((0x10000000U & (vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_ff 
                        ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_ff))) {
        ++(vlSymsp->__Vcoverage[569]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_ff 
            = ((0xefffffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_ff) 
               | (0x10000000U & vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_ff));
    }
    if ((0x20000000U & (vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_ff 
                        ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_ff))) {
        ++(vlSymsp->__Vcoverage[570]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_ff 
            = ((0xdfffffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_ff) 
               | (0x20000000U & vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_ff));
    }
    if ((0x40000000U & (vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_ff 
                        ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_ff))) {
        ++(vlSymsp->__Vcoverage[571]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_ff 
            = ((0xbfffffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_ff) 
               | (0x40000000U & vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_ff));
    }
    if (((vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_ff 
          ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_ff) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[572]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_ff 
            = ((0x7fffffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_ff) 
               | (0x80000000U & vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_ff));
    }
    if ((1U & (vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt 
               ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt))) {
        ++(vlSymsp->__Vcoverage[705]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt 
            = ((0xfffffffeU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt) 
               | (1U & vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt));
    }
    if ((2U & (vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt 
               ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt))) {
        ++(vlSymsp->__Vcoverage[706]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt 
            = ((0xfffffffdU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt) 
               | (2U & vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt));
    }
    if ((4U & (vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt 
               ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt))) {
        ++(vlSymsp->__Vcoverage[707]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt 
            = ((0xfffffffbU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt) 
               | (4U & vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt));
    }
    if ((8U & (vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt 
               ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt))) {
        ++(vlSymsp->__Vcoverage[708]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt 
            = ((0xfffffff7U & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt) 
               | (8U & vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt));
    }
    if ((0x10U & (vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt 
                  ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt))) {
        ++(vlSymsp->__Vcoverage[709]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt 
            = ((0xffffffefU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt) 
               | (0x10U & vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt));
    }
    if ((0x20U & (vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt 
                  ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt))) {
        ++(vlSymsp->__Vcoverage[710]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt 
            = ((0xffffffdfU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt) 
               | (0x20U & vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt));
    }
    if ((0x40U & (vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt 
                  ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt))) {
        ++(vlSymsp->__Vcoverage[711]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt 
            = ((0xffffffbfU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt) 
               | (0x40U & vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt));
    }
    if ((0x80U & (vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt 
                  ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt))) {
        ++(vlSymsp->__Vcoverage[712]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt 
            = ((0xffffff7fU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt) 
               | (0x80U & vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt));
    }
    if ((0x100U & (vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt 
                   ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt))) {
        ++(vlSymsp->__Vcoverage[713]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt 
            = ((0xfffffeffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt) 
               | (0x100U & vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt));
    }
    if ((0x200U & (vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt 
                   ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt))) {
        ++(vlSymsp->__Vcoverage[714]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt 
            = ((0xfffffdffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt) 
               | (0x200U & vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt));
    }
    if ((0x400U & (vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt 
                   ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt))) {
        ++(vlSymsp->__Vcoverage[715]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt 
            = ((0xfffffbffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt) 
               | (0x400U & vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt));
    }
    if ((0x800U & (vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt 
                   ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt))) {
        ++(vlSymsp->__Vcoverage[716]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt 
            = ((0xfffff7ffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt) 
               | (0x800U & vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt));
    }
    if ((0x1000U & (vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt 
                    ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt))) {
        ++(vlSymsp->__Vcoverage[717]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt 
            = ((0xffffefffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt) 
               | (0x1000U & vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt));
    }
    if ((0x2000U & (vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt 
                    ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt))) {
        ++(vlSymsp->__Vcoverage[718]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt 
            = ((0xffffdfffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt) 
               | (0x2000U & vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt));
    }
    if ((0x4000U & (vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt 
                    ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt))) {
        ++(vlSymsp->__Vcoverage[719]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt 
            = ((0xffffbfffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt) 
               | (0x4000U & vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt));
    }
    if ((0x8000U & (vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt 
                    ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt))) {
        ++(vlSymsp->__Vcoverage[720]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt 
            = ((0xffff7fffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt) 
               | (0x8000U & vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt));
    }
    if ((0x10000U & (vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt 
                     ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt))) {
        ++(vlSymsp->__Vcoverage[721]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt 
            = ((0xfffeffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt) 
               | (0x10000U & vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt));
    }
    if ((0x20000U & (vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt 
                     ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt))) {
        ++(vlSymsp->__Vcoverage[722]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt 
            = ((0xfffdffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt) 
               | (0x20000U & vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt));
    }
    if ((0x40000U & (vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt 
                     ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt))) {
        ++(vlSymsp->__Vcoverage[723]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt 
            = ((0xfffbffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt) 
               | (0x40000U & vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt));
    }
    if ((0x80000U & (vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt 
                     ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt))) {
        ++(vlSymsp->__Vcoverage[724]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt 
            = ((0xfff7ffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt) 
               | (0x80000U & vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt));
    }
    if ((0x100000U & (vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt 
                      ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt))) {
        ++(vlSymsp->__Vcoverage[725]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt 
            = ((0xffefffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt) 
               | (0x100000U & vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt));
    }
    if ((0x200000U & (vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt 
                      ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt))) {
        ++(vlSymsp->__Vcoverage[726]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt 
            = ((0xffdfffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt) 
               | (0x200000U & vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt));
    }
    if ((0x400000U & (vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt 
                      ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt))) {
        ++(vlSymsp->__Vcoverage[727]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt 
            = ((0xffbfffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt) 
               | (0x400000U & vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt));
    }
    if ((0x800000U & (vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt 
                      ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt))) {
        ++(vlSymsp->__Vcoverage[728]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt 
            = ((0xff7fffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt) 
               | (0x800000U & vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt));
    }
    if ((0x1000000U & (vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt 
                       ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt))) {
        ++(vlSymsp->__Vcoverage[729]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt 
            = ((0xfeffffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt) 
               | (0x1000000U & vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt));
    }
    if ((0x2000000U & (vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt 
                       ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt))) {
        ++(vlSymsp->__Vcoverage[730]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt 
            = ((0xfdffffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt) 
               | (0x2000000U & vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt));
    }
    if ((0x4000000U & (vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt 
                       ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt))) {
        ++(vlSymsp->__Vcoverage[731]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt 
            = ((0xfbffffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt) 
               | (0x4000000U & vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt));
    }
    if ((0x8000000U & (vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt 
                       ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt))) {
        ++(vlSymsp->__Vcoverage[732]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt 
            = ((0xf7ffffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt) 
               | (0x8000000U & vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt));
    }
    if ((0x10000000U & (vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt 
                        ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt))) {
        ++(vlSymsp->__Vcoverage[733]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt 
            = ((0xefffffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt) 
               | (0x10000000U & vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt));
    }
    if ((0x20000000U & (vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt 
                        ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt))) {
        ++(vlSymsp->__Vcoverage[734]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt 
            = ((0xdfffffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt) 
               | (0x20000000U & vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt));
    }
    if ((0x40000000U & (vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt 
                        ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt))) {
        ++(vlSymsp->__Vcoverage[735]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt 
            = ((0xbfffffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt) 
               | (0x40000000U & vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt));
    }
    if (((vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt 
          ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[736]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt 
            = ((0x7fffffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt) 
               | (0x80000000U & vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt));
    }
    if ((1U & (vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_ff 
               ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_ff))) {
        ++(vlSymsp->__Vcoverage[771]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_ff 
            = ((0xfffffffeU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_ff) 
               | (1U & vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_ff));
    }
    if ((2U & (vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_ff 
               ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_ff))) {
        ++(vlSymsp->__Vcoverage[772]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_ff 
            = ((0xfffffffdU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_ff) 
               | (2U & vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_ff));
    }
    if ((4U & (vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_ff 
               ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_ff))) {
        ++(vlSymsp->__Vcoverage[773]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_ff 
            = ((0xfffffffbU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_ff) 
               | (4U & vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_ff));
    }
    if ((8U & (vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_ff 
               ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_ff))) {
        ++(vlSymsp->__Vcoverage[774]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_ff 
            = ((0xfffffff7U & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_ff) 
               | (8U & vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_ff));
    }
    if ((0x10U & (vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_ff 
                  ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_ff))) {
        ++(vlSymsp->__Vcoverage[775]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_ff 
            = ((0xffffffefU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_ff) 
               | (0x10U & vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_ff));
    }
    if ((0x20U & (vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_ff 
                  ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_ff))) {
        ++(vlSymsp->__Vcoverage[776]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_ff 
            = ((0xffffffdfU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_ff) 
               | (0x20U & vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_ff));
    }
    if ((0x40U & (vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_ff 
                  ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_ff))) {
        ++(vlSymsp->__Vcoverage[777]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_ff 
            = ((0xffffffbfU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_ff) 
               | (0x40U & vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_ff));
    }
    if ((0x80U & (vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_ff 
                  ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_ff))) {
        ++(vlSymsp->__Vcoverage[778]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_ff 
            = ((0xffffff7fU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_ff) 
               | (0x80U & vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_ff));
    }
    if ((0x100U & (vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_ff 
                   ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_ff))) {
        ++(vlSymsp->__Vcoverage[779]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_ff 
            = ((0xfffffeffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_ff) 
               | (0x100U & vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_ff));
    }
    if ((0x200U & (vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_ff 
                   ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_ff))) {
        ++(vlSymsp->__Vcoverage[780]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_ff 
            = ((0xfffffdffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_ff) 
               | (0x200U & vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_ff));
    }
    if ((0x400U & (vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_ff 
                   ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_ff))) {
        ++(vlSymsp->__Vcoverage[781]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_ff 
            = ((0xfffffbffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_ff) 
               | (0x400U & vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_ff));
    }
    if ((0x800U & (vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_ff 
                   ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_ff))) {
        ++(vlSymsp->__Vcoverage[782]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_ff 
            = ((0xfffff7ffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_ff) 
               | (0x800U & vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_ff));
    }
    if ((0x1000U & (vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_ff 
                    ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_ff))) {
        ++(vlSymsp->__Vcoverage[783]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_ff 
            = ((0xffffefffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_ff) 
               | (0x1000U & vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_ff));
    }
    if ((0x2000U & (vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_ff 
                    ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_ff))) {
        ++(vlSymsp->__Vcoverage[784]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_ff 
            = ((0xffffdfffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_ff) 
               | (0x2000U & vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_ff));
    }
    if ((0x4000U & (vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_ff 
                    ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_ff))) {
        ++(vlSymsp->__Vcoverage[785]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_ff 
            = ((0xffffbfffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_ff) 
               | (0x4000U & vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_ff));
    }
    if ((0x8000U & (vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_ff 
                    ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_ff))) {
        ++(vlSymsp->__Vcoverage[786]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_ff 
            = ((0xffff7fffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_ff) 
               | (0x8000U & vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_ff));
    }
    if ((0x10000U & (vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_ff 
                     ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_ff))) {
        ++(vlSymsp->__Vcoverage[787]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_ff 
            = ((0xfffeffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_ff) 
               | (0x10000U & vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_ff));
    }
    if ((0x20000U & (vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_ff 
                     ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_ff))) {
        ++(vlSymsp->__Vcoverage[788]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_ff 
            = ((0xfffdffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_ff) 
               | (0x20000U & vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_ff));
    }
    if ((0x40000U & (vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_ff 
                     ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_ff))) {
        ++(vlSymsp->__Vcoverage[789]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_ff 
            = ((0xfffbffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_ff) 
               | (0x40000U & vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_ff));
    }
    if ((0x80000U & (vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_ff 
                     ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_ff))) {
        ++(vlSymsp->__Vcoverage[790]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_ff 
            = ((0xfff7ffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_ff) 
               | (0x80000U & vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_ff));
    }
    if ((0x100000U & (vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_ff 
                      ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_ff))) {
        ++(vlSymsp->__Vcoverage[791]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_ff 
            = ((0xffefffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_ff) 
               | (0x100000U & vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_ff));
    }
    if ((0x200000U & (vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_ff 
                      ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_ff))) {
        ++(vlSymsp->__Vcoverage[792]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_ff 
            = ((0xffdfffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_ff) 
               | (0x200000U & vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_ff));
    }
    if ((0x400000U & (vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_ff 
                      ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_ff))) {
        ++(vlSymsp->__Vcoverage[793]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_ff 
            = ((0xffbfffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_ff) 
               | (0x400000U & vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_ff));
    }
    if ((0x800000U & (vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_ff 
                      ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_ff))) {
        ++(vlSymsp->__Vcoverage[794]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_ff 
            = ((0xff7fffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_ff) 
               | (0x800000U & vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_ff));
    }
    if ((0x1000000U & (vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_ff 
                       ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_ff))) {
        ++(vlSymsp->__Vcoverage[795]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_ff 
            = ((0xfeffffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_ff) 
               | (0x1000000U & vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_ff));
    }
    if ((0x2000000U & (vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_ff 
                       ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_ff))) {
        ++(vlSymsp->__Vcoverage[796]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_ff 
            = ((0xfdffffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_ff) 
               | (0x2000000U & vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_ff));
    }
    if ((0x4000000U & (vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_ff 
                       ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_ff))) {
        ++(vlSymsp->__Vcoverage[797]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_ff 
            = ((0xfbffffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_ff) 
               | (0x4000000U & vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_ff));
    }
    if ((0x8000000U & (vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_ff 
                       ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_ff))) {
        ++(vlSymsp->__Vcoverage[798]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_ff 
            = ((0xf7ffffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_ff) 
               | (0x8000000U & vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_ff));
    }
    if ((0x10000000U & (vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_ff 
                        ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_ff))) {
        ++(vlSymsp->__Vcoverage[799]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_ff 
            = ((0xefffffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_ff) 
               | (0x10000000U & vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_ff));
    }
    if ((0x20000000U & (vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_ff 
                        ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_ff))) {
        ++(vlSymsp->__Vcoverage[800]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_ff 
            = ((0xdfffffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_ff) 
               | (0x20000000U & vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_ff));
    }
    if ((0x40000000U & (vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_ff 
                        ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_ff))) {
        ++(vlSymsp->__Vcoverage[801]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_ff 
            = ((0xbfffffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_ff) 
               | (0x40000000U & vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_ff));
    }
    if (((vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_ff 
          ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_ff) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[802]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_ff 
            = ((0x7fffffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_ff) 
               | (0x80000000U & vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_ff));
    }
    if ((1U & (vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_ff 
               ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_ff))) {
        ++(vlSymsp->__Vcoverage[835]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_ff 
            = ((0xfffffffeU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_ff) 
               | (1U & vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_ff));
    }
    if ((2U & (vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_ff 
               ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_ff))) {
        ++(vlSymsp->__Vcoverage[836]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_ff 
            = ((0xfffffffdU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_ff) 
               | (2U & vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_ff));
    }
    if ((4U & (vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_ff 
               ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_ff))) {
        ++(vlSymsp->__Vcoverage[837]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_ff 
            = ((0xfffffffbU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_ff) 
               | (4U & vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_ff));
    }
    if ((8U & (vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_ff 
               ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_ff))) {
        ++(vlSymsp->__Vcoverage[838]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_ff 
            = ((0xfffffff7U & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_ff) 
               | (8U & vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_ff));
    }
    if ((0x10U & (vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_ff 
                  ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_ff))) {
        ++(vlSymsp->__Vcoverage[839]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_ff 
            = ((0xffffffefU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_ff) 
               | (0x10U & vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_ff));
    }
    if ((0x20U & (vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_ff 
                  ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_ff))) {
        ++(vlSymsp->__Vcoverage[840]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_ff 
            = ((0xffffffdfU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_ff) 
               | (0x20U & vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_ff));
    }
    if ((0x40U & (vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_ff 
                  ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_ff))) {
        ++(vlSymsp->__Vcoverage[841]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_ff 
            = ((0xffffffbfU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_ff) 
               | (0x40U & vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_ff));
    }
    if ((0x80U & (vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_ff 
                  ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_ff))) {
        ++(vlSymsp->__Vcoverage[842]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_ff 
            = ((0xffffff7fU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_ff) 
               | (0x80U & vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_ff));
    }
    if ((0x100U & (vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_ff 
                   ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_ff))) {
        ++(vlSymsp->__Vcoverage[843]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_ff 
            = ((0xfffffeffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_ff) 
               | (0x100U & vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_ff));
    }
    if ((0x200U & (vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_ff 
                   ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_ff))) {
        ++(vlSymsp->__Vcoverage[844]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_ff 
            = ((0xfffffdffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_ff) 
               | (0x200U & vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_ff));
    }
    if ((0x400U & (vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_ff 
                   ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_ff))) {
        ++(vlSymsp->__Vcoverage[845]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_ff 
            = ((0xfffffbffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_ff) 
               | (0x400U & vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_ff));
    }
    if ((0x800U & (vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_ff 
                   ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_ff))) {
        ++(vlSymsp->__Vcoverage[846]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_ff 
            = ((0xfffff7ffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_ff) 
               | (0x800U & vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_ff));
    }
    if ((0x1000U & (vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_ff 
                    ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_ff))) {
        ++(vlSymsp->__Vcoverage[847]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_ff 
            = ((0xffffefffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_ff) 
               | (0x1000U & vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_ff));
    }
    if ((0x2000U & (vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_ff 
                    ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_ff))) {
        ++(vlSymsp->__Vcoverage[848]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_ff 
            = ((0xffffdfffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_ff) 
               | (0x2000U & vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_ff));
    }
    if ((0x4000U & (vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_ff 
                    ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_ff))) {
        ++(vlSymsp->__Vcoverage[849]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_ff 
            = ((0xffffbfffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_ff) 
               | (0x4000U & vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_ff));
    }
    if ((0x8000U & (vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_ff 
                    ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_ff))) {
        ++(vlSymsp->__Vcoverage[850]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_ff 
            = ((0xffff7fffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_ff) 
               | (0x8000U & vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_ff));
    }
    if ((0x10000U & (vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_ff 
                     ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_ff))) {
        ++(vlSymsp->__Vcoverage[851]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_ff 
            = ((0xfffeffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_ff) 
               | (0x10000U & vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_ff));
    }
    if ((0x20000U & (vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_ff 
                     ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_ff))) {
        ++(vlSymsp->__Vcoverage[852]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_ff 
            = ((0xfffdffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_ff) 
               | (0x20000U & vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_ff));
    }
    if ((0x40000U & (vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_ff 
                     ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_ff))) {
        ++(vlSymsp->__Vcoverage[853]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_ff 
            = ((0xfffbffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_ff) 
               | (0x40000U & vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_ff));
    }
    if ((0x80000U & (vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_ff 
                     ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_ff))) {
        ++(vlSymsp->__Vcoverage[854]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_ff 
            = ((0xfff7ffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_ff) 
               | (0x80000U & vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_ff));
    }
    if ((0x100000U & (vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_ff 
                      ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_ff))) {
        ++(vlSymsp->__Vcoverage[855]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_ff 
            = ((0xffefffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_ff) 
               | (0x100000U & vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_ff));
    }
    if ((0x200000U & (vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_ff 
                      ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_ff))) {
        ++(vlSymsp->__Vcoverage[856]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_ff 
            = ((0xffdfffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_ff) 
               | (0x200000U & vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_ff));
    }
    if ((0x400000U & (vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_ff 
                      ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_ff))) {
        ++(vlSymsp->__Vcoverage[857]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_ff 
            = ((0xffbfffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_ff) 
               | (0x400000U & vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_ff));
    }
    if ((0x800000U & (vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_ff 
                      ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_ff))) {
        ++(vlSymsp->__Vcoverage[858]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_ff 
            = ((0xff7fffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_ff) 
               | (0x800000U & vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_ff));
    }
    if ((0x1000000U & (vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_ff 
                       ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_ff))) {
        ++(vlSymsp->__Vcoverage[859]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_ff 
            = ((0xfeffffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_ff) 
               | (0x1000000U & vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_ff));
    }
    if ((0x2000000U & (vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_ff 
                       ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_ff))) {
        ++(vlSymsp->__Vcoverage[860]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_ff 
            = ((0xfdffffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_ff) 
               | (0x2000000U & vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_ff));
    }
    if ((0x4000000U & (vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_ff 
                       ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_ff))) {
        ++(vlSymsp->__Vcoverage[861]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_ff 
            = ((0xfbffffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_ff) 
               | (0x4000000U & vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_ff));
    }
    if ((0x8000000U & (vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_ff 
                       ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_ff))) {
        ++(vlSymsp->__Vcoverage[862]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_ff 
            = ((0xf7ffffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_ff) 
               | (0x8000000U & vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_ff));
    }
    if ((0x10000000U & (vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_ff 
                        ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_ff))) {
        ++(vlSymsp->__Vcoverage[863]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_ff 
            = ((0xefffffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_ff) 
               | (0x10000000U & vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_ff));
    }
    if ((0x20000000U & (vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_ff 
                        ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_ff))) {
        ++(vlSymsp->__Vcoverage[864]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_ff 
            = ((0xdfffffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_ff) 
               | (0x20000000U & vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_ff));
    }
    if ((0x40000000U & (vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_ff 
                        ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_ff))) {
        ++(vlSymsp->__Vcoverage[865]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_ff 
            = ((0xbfffffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_ff) 
               | (0x40000000U & vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_ff));
    }
    if (((vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_ff 
          ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_ff) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[866]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_ff 
            = ((0x7fffffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_ff) 
               | (0x80000000U & vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_ff));
    }
    vlSelf->scr1_pipe_ialu__DOT__mdu_iter_rdy = (1U 
                                                 & vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt);
    vlSelf->scr1_pipe_ialu__DOT__main_ops_non_zero 
        = ((0U != vlSelf->exu2ialu_main_op1_i) & (0U 
                                                  != vlSelf->exu2ialu_main_op2_i));
    vlSelf->ialu2exu_addr_res_o = (vlSelf->exu2ialu_addr_op1_i 
                                   + vlSelf->exu2ialu_addr_op2_i);
    vlSelf->scr1_pipe_ialu__DOT__ialu_cmd_shft = ((0xcU 
                                                   == (IData)(vlSelf->exu2ialu_cmd_i)) 
                                                  | ((0xdU 
                                                      == (IData)(vlSelf->exu2ialu_cmd_i)) 
                                                     | (0xeU 
                                                        == (IData)(vlSelf->exu2ialu_cmd_i))));
    vlSelf->scr1_pipe_ialu__DOT__main_sum_res = (0x1ffffffffULL 
                                                 & ((4U 
                                                     != (IData)(vlSelf->exu2ialu_cmd_i))
                                                     ? 
                                                    ((QData)((IData)(vlSelf->exu2ialu_main_op1_i)) 
                                                     - (QData)((IData)(vlSelf->exu2ialu_main_op2_i)))
                                                     : 
                                                    ((QData)((IData)(vlSelf->exu2ialu_main_op1_i)) 
                                                     + (QData)((IData)(vlSelf->exu2ialu_main_op2_i)))));
    vlSelf->scr1_pipe_ialu__DOT__main_sum_pos_ovflw 
        = (((~ (vlSelf->exu2ialu_main_op1_i >> 0x1fU)) 
            & (vlSelf->exu2ialu_main_op2_i >> 0x1fU)) 
           & (vlSelf->scr1_pipe_ialu__DOT__main_sum_res 
              >> 0x1fU));
    vlSelf->scr1_pipe_ialu__DOT__main_sum_neg_ovflw 
        = (((vlSelf->exu2ialu_main_op1_i >> 0x1fU) 
            & (~ (vlSelf->exu2ialu_main_op2_i >> 0x1fU))) 
           & (~ (vlSelf->scr1_pipe_ialu__DOT__main_sum_res 
                 >> 0x1fU)));
    vlSelf->scr1_pipe_ialu__DOT__main_sum_flags = (
                                                   (0xeU 
                                                    & (IData)(vlSelf->scr1_pipe_ialu__DOT__main_sum_flags)) 
                                                   | (1U 
                                                      & (IData)(
                                                                (vlSelf->scr1_pipe_ialu__DOT__main_sum_res 
                                                                 >> 0x20U))));
    vlSelf->scr1_pipe_ialu__DOT__main_sum_flags = (
                                                   (7U 
                                                    & (IData)(vlSelf->scr1_pipe_ialu__DOT__main_sum_flags)) 
                                                   | (8U 
                                                      & ((~ (IData)(
                                                                    (0U 
                                                                     != (IData)(vlSelf->scr1_pipe_ialu__DOT__main_sum_res)))) 
                                                         << 3U)));
    vlSelf->scr1_pipe_ialu__DOT__main_sum_flags = (
                                                   (9U 
                                                    & (IData)(vlSelf->scr1_pipe_ialu__DOT__main_sum_flags)) 
                                                   | ((4U 
                                                       & ((IData)(
                                                                  (vlSelf->scr1_pipe_ialu__DOT__main_sum_res 
                                                                   >> 0x1fU)) 
                                                          << 2U)) 
                                                      | (((IData)(vlSelf->scr1_pipe_ialu__DOT__main_sum_pos_ovflw) 
                                                          | (IData)(vlSelf->scr1_pipe_ialu__DOT__main_sum_neg_ovflw)) 
                                                         << 1U)));
    vlSelf->scr1_pipe_ialu__DOT__main_ops_diff_sgn 
        = ((vlSelf->exu2ialu_main_op1_i ^ vlSelf->exu2ialu_main_op2_i) 
           >> 0x1fU);
    vlSelf->scr1_pipe_ialu__DOT__mdu_fsm_idle = (0U 
                                                 == (IData)(vlSelf->scr1_pipe_ialu__DOT__mdu_fsm_ff));
    vlSelf->scr1_pipe_ialu__DOT__mdu_fsm_corr = (2U 
                                                 == (IData)(vlSelf->scr1_pipe_ialu__DOT__mdu_fsm_ff));
    vlSelf->scr1_pipe_ialu__DOT__div_cmd_rem = ((0x15U 
                                                 == (IData)(vlSelf->exu2ialu_cmd_i)) 
                                                | (0x16U 
                                                   == (IData)(vlSelf->exu2ialu_cmd_i)));
    scr1_pipe_ialu__DOT____VdfgTmp_h8ffc7e80__0 = (
                                                   (0x16U 
                                                    == (IData)(vlSelf->exu2ialu_cmd_i)) 
                                                   | (0x14U 
                                                      == (IData)(vlSelf->exu2ialu_cmd_i)));
    scr1_pipe_ialu__DOT____VdfgTmp_hf0464054__0 = (
                                                   (0x10U 
                                                    == (IData)(vlSelf->exu2ialu_cmd_i)) 
                                                   | (0x11U 
                                                      == (IData)(vlSelf->exu2ialu_cmd_i)));
    if (((IData)(vlSelf->scr1_pipe_ialu__DOT__mdu_iter_rdy) 
         ^ (IData)(vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_rdy))) {
        ++(vlSymsp->__Vcoverage[317]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_rdy 
            = vlSelf->scr1_pipe_ialu__DOT__mdu_iter_rdy;
    }
    if (((IData)(vlSelf->scr1_pipe_ialu__DOT__main_ops_non_zero) 
         ^ (IData)(vlSelf->scr1_pipe_ialu__DOT____Vtogcov__main_ops_non_zero))) {
        ++(vlSymsp->__Vcoverage[242]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__main_ops_non_zero 
            = vlSelf->scr1_pipe_ialu__DOT__main_ops_non_zero;
    }
    vlSelf->scr1_pipe_ialu__DOT__ialu2exu_addr_res_o 
        = vlSelf->ialu2exu_addr_res_o;
    if ((1U & (vlSelf->ialu2exu_addr_res_o ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_addr_res_o))) {
        ++(vlSymsp->__Vcoverage[170]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_addr_res_o 
            = ((0xfffffffeU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_addr_res_o) 
               | (1U & vlSelf->ialu2exu_addr_res_o));
    }
    if ((2U & (vlSelf->ialu2exu_addr_res_o ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_addr_res_o))) {
        ++(vlSymsp->__Vcoverage[171]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_addr_res_o 
            = ((0xfffffffdU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_addr_res_o) 
               | (2U & vlSelf->ialu2exu_addr_res_o));
    }
    if ((4U & (vlSelf->ialu2exu_addr_res_o ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_addr_res_o))) {
        ++(vlSymsp->__Vcoverage[172]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_addr_res_o 
            = ((0xfffffffbU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_addr_res_o) 
               | (4U & vlSelf->ialu2exu_addr_res_o));
    }
    if ((8U & (vlSelf->ialu2exu_addr_res_o ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_addr_res_o))) {
        ++(vlSymsp->__Vcoverage[173]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_addr_res_o 
            = ((0xfffffff7U & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_addr_res_o) 
               | (8U & vlSelf->ialu2exu_addr_res_o));
    }
    if ((0x10U & (vlSelf->ialu2exu_addr_res_o ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_addr_res_o))) {
        ++(vlSymsp->__Vcoverage[174]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_addr_res_o 
            = ((0xffffffefU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_addr_res_o) 
               | (0x10U & vlSelf->ialu2exu_addr_res_o));
    }
    if ((0x20U & (vlSelf->ialu2exu_addr_res_o ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_addr_res_o))) {
        ++(vlSymsp->__Vcoverage[175]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_addr_res_o 
            = ((0xffffffdfU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_addr_res_o) 
               | (0x20U & vlSelf->ialu2exu_addr_res_o));
    }
    if ((0x40U & (vlSelf->ialu2exu_addr_res_o ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_addr_res_o))) {
        ++(vlSymsp->__Vcoverage[176]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_addr_res_o 
            = ((0xffffffbfU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_addr_res_o) 
               | (0x40U & vlSelf->ialu2exu_addr_res_o));
    }
    if ((0x80U & (vlSelf->ialu2exu_addr_res_o ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_addr_res_o))) {
        ++(vlSymsp->__Vcoverage[177]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_addr_res_o 
            = ((0xffffff7fU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_addr_res_o) 
               | (0x80U & vlSelf->ialu2exu_addr_res_o));
    }
    if ((0x100U & (vlSelf->ialu2exu_addr_res_o ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_addr_res_o))) {
        ++(vlSymsp->__Vcoverage[178]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_addr_res_o 
            = ((0xfffffeffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_addr_res_o) 
               | (0x100U & vlSelf->ialu2exu_addr_res_o));
    }
    if ((0x200U & (vlSelf->ialu2exu_addr_res_o ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_addr_res_o))) {
        ++(vlSymsp->__Vcoverage[179]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_addr_res_o 
            = ((0xfffffdffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_addr_res_o) 
               | (0x200U & vlSelf->ialu2exu_addr_res_o));
    }
    if ((0x400U & (vlSelf->ialu2exu_addr_res_o ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_addr_res_o))) {
        ++(vlSymsp->__Vcoverage[180]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_addr_res_o 
            = ((0xfffffbffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_addr_res_o) 
               | (0x400U & vlSelf->ialu2exu_addr_res_o));
    }
    if ((0x800U & (vlSelf->ialu2exu_addr_res_o ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_addr_res_o))) {
        ++(vlSymsp->__Vcoverage[181]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_addr_res_o 
            = ((0xfffff7ffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_addr_res_o) 
               | (0x800U & vlSelf->ialu2exu_addr_res_o));
    }
    if ((0x1000U & (vlSelf->ialu2exu_addr_res_o ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_addr_res_o))) {
        ++(vlSymsp->__Vcoverage[182]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_addr_res_o 
            = ((0xffffefffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_addr_res_o) 
               | (0x1000U & vlSelf->ialu2exu_addr_res_o));
    }
    if ((0x2000U & (vlSelf->ialu2exu_addr_res_o ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_addr_res_o))) {
        ++(vlSymsp->__Vcoverage[183]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_addr_res_o 
            = ((0xffffdfffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_addr_res_o) 
               | (0x2000U & vlSelf->ialu2exu_addr_res_o));
    }
    if ((0x4000U & (vlSelf->ialu2exu_addr_res_o ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_addr_res_o))) {
        ++(vlSymsp->__Vcoverage[184]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_addr_res_o 
            = ((0xffffbfffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_addr_res_o) 
               | (0x4000U & vlSelf->ialu2exu_addr_res_o));
    }
    if ((0x8000U & (vlSelf->ialu2exu_addr_res_o ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_addr_res_o))) {
        ++(vlSymsp->__Vcoverage[185]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_addr_res_o 
            = ((0xffff7fffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_addr_res_o) 
               | (0x8000U & vlSelf->ialu2exu_addr_res_o));
    }
    if ((0x10000U & (vlSelf->ialu2exu_addr_res_o ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_addr_res_o))) {
        ++(vlSymsp->__Vcoverage[186]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_addr_res_o 
            = ((0xfffeffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_addr_res_o) 
               | (0x10000U & vlSelf->ialu2exu_addr_res_o));
    }
    if ((0x20000U & (vlSelf->ialu2exu_addr_res_o ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_addr_res_o))) {
        ++(vlSymsp->__Vcoverage[187]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_addr_res_o 
            = ((0xfffdffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_addr_res_o) 
               | (0x20000U & vlSelf->ialu2exu_addr_res_o));
    }
    if ((0x40000U & (vlSelf->ialu2exu_addr_res_o ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_addr_res_o))) {
        ++(vlSymsp->__Vcoverage[188]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_addr_res_o 
            = ((0xfffbffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_addr_res_o) 
               | (0x40000U & vlSelf->ialu2exu_addr_res_o));
    }
    if ((0x80000U & (vlSelf->ialu2exu_addr_res_o ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_addr_res_o))) {
        ++(vlSymsp->__Vcoverage[189]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_addr_res_o 
            = ((0xfff7ffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_addr_res_o) 
               | (0x80000U & vlSelf->ialu2exu_addr_res_o));
    }
    if ((0x100000U & (vlSelf->ialu2exu_addr_res_o ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_addr_res_o))) {
        ++(vlSymsp->__Vcoverage[190]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_addr_res_o 
            = ((0xffefffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_addr_res_o) 
               | (0x100000U & vlSelf->ialu2exu_addr_res_o));
    }
    if ((0x200000U & (vlSelf->ialu2exu_addr_res_o ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_addr_res_o))) {
        ++(vlSymsp->__Vcoverage[191]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_addr_res_o 
            = ((0xffdfffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_addr_res_o) 
               | (0x200000U & vlSelf->ialu2exu_addr_res_o));
    }
    if ((0x400000U & (vlSelf->ialu2exu_addr_res_o ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_addr_res_o))) {
        ++(vlSymsp->__Vcoverage[192]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_addr_res_o 
            = ((0xffbfffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_addr_res_o) 
               | (0x400000U & vlSelf->ialu2exu_addr_res_o));
    }
    if ((0x800000U & (vlSelf->ialu2exu_addr_res_o ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_addr_res_o))) {
        ++(vlSymsp->__Vcoverage[193]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_addr_res_o 
            = ((0xff7fffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_addr_res_o) 
               | (0x800000U & vlSelf->ialu2exu_addr_res_o));
    }
    if ((0x1000000U & (vlSelf->ialu2exu_addr_res_o 
                       ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_addr_res_o))) {
        ++(vlSymsp->__Vcoverage[194]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_addr_res_o 
            = ((0xfeffffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_addr_res_o) 
               | (0x1000000U & vlSelf->ialu2exu_addr_res_o));
    }
    if ((0x2000000U & (vlSelf->ialu2exu_addr_res_o 
                       ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_addr_res_o))) {
        ++(vlSymsp->__Vcoverage[195]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_addr_res_o 
            = ((0xfdffffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_addr_res_o) 
               | (0x2000000U & vlSelf->ialu2exu_addr_res_o));
    }
    if ((0x4000000U & (vlSelf->ialu2exu_addr_res_o 
                       ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_addr_res_o))) {
        ++(vlSymsp->__Vcoverage[196]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_addr_res_o 
            = ((0xfbffffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_addr_res_o) 
               | (0x4000000U & vlSelf->ialu2exu_addr_res_o));
    }
    if ((0x8000000U & (vlSelf->ialu2exu_addr_res_o 
                       ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_addr_res_o))) {
        ++(vlSymsp->__Vcoverage[197]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_addr_res_o 
            = ((0xf7ffffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_addr_res_o) 
               | (0x8000000U & vlSelf->ialu2exu_addr_res_o));
    }
    if ((0x10000000U & (vlSelf->ialu2exu_addr_res_o 
                        ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_addr_res_o))) {
        ++(vlSymsp->__Vcoverage[198]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_addr_res_o 
            = ((0xefffffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_addr_res_o) 
               | (0x10000000U & vlSelf->ialu2exu_addr_res_o));
    }
    if ((0x20000000U & (vlSelf->ialu2exu_addr_res_o 
                        ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_addr_res_o))) {
        ++(vlSymsp->__Vcoverage[199]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_addr_res_o 
            = ((0xdfffffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_addr_res_o) 
               | (0x20000000U & vlSelf->ialu2exu_addr_res_o));
    }
    if ((0x40000000U & (vlSelf->ialu2exu_addr_res_o 
                        ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_addr_res_o))) {
        ++(vlSymsp->__Vcoverage[200]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_addr_res_o 
            = ((0xbfffffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_addr_res_o) 
               | (0x40000000U & vlSelf->ialu2exu_addr_res_o));
    }
    if (((vlSelf->ialu2exu_addr_res_o ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_addr_res_o) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[201]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_addr_res_o 
            = ((0x7fffffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_addr_res_o) 
               | (0x80000000U & vlSelf->ialu2exu_addr_res_o));
    }
    if (((IData)(vlSelf->scr1_pipe_ialu__DOT__ialu_cmd_shft) 
         ^ (IData)(vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu_cmd_shft))) {
        ++(vlSymsp->__Vcoverage[243]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu_cmd_shft 
            = vlSelf->scr1_pipe_ialu__DOT__ialu_cmd_shft;
    }
    vlSelf->scr1_pipe_ialu__DOT__shft_cmd = ((IData)(vlSelf->scr1_pipe_ialu__DOT__ialu_cmd_shft)
                                              ? (((0xcU 
                                                   != (IData)(vlSelf->exu2ialu_cmd_i)) 
                                                  << 1U) 
                                                 | (0xeU 
                                                    == (IData)(vlSelf->exu2ialu_cmd_i)))
                                              : 0U);
    if (((IData)(vlSelf->scr1_pipe_ialu__DOT__main_sum_pos_ovflw) 
         ^ (IData)(vlSelf->scr1_pipe_ialu__DOT____Vtogcov__main_sum_pos_ovflw))) {
        ++(vlSymsp->__Vcoverage[239]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__main_sum_pos_ovflw 
            = vlSelf->scr1_pipe_ialu__DOT__main_sum_pos_ovflw;
    }
    if (((IData)(vlSelf->scr1_pipe_ialu__DOT__main_sum_neg_ovflw) 
         ^ (IData)(vlSelf->scr1_pipe_ialu__DOT____Vtogcov__main_sum_neg_ovflw))) {
        ++(vlSymsp->__Vcoverage[240]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__main_sum_neg_ovflw 
            = vlSelf->scr1_pipe_ialu__DOT__main_sum_neg_ovflw;
    }
    if ((8U & ((IData)(vlSelf->scr1_pipe_ialu__DOT__main_sum_flags) 
               ^ (IData)(vlSelf->scr1_pipe_ialu__DOT____Vtogcov__main_sum_flags)))) {
        ++(vlSymsp->__Vcoverage[235]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__main_sum_flags 
            = ((7U & (IData)(vlSelf->scr1_pipe_ialu__DOT____Vtogcov__main_sum_flags)) 
               | (8U & (IData)(vlSelf->scr1_pipe_ialu__DOT__main_sum_flags)));
    }
    if ((4U & ((IData)(vlSelf->scr1_pipe_ialu__DOT__main_sum_flags) 
               ^ (IData)(vlSelf->scr1_pipe_ialu__DOT____Vtogcov__main_sum_flags)))) {
        ++(vlSymsp->__Vcoverage[236]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__main_sum_flags 
            = ((0xbU & (IData)(vlSelf->scr1_pipe_ialu__DOT____Vtogcov__main_sum_flags)) 
               | (4U & (IData)(vlSelf->scr1_pipe_ialu__DOT__main_sum_flags)));
    }
    if ((2U & ((IData)(vlSelf->scr1_pipe_ialu__DOT__main_sum_flags) 
               ^ (IData)(vlSelf->scr1_pipe_ialu__DOT____Vtogcov__main_sum_flags)))) {
        ++(vlSymsp->__Vcoverage[237]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__main_sum_flags 
            = ((0xdU & (IData)(vlSelf->scr1_pipe_ialu__DOT____Vtogcov__main_sum_flags)) 
               | (2U & (IData)(vlSelf->scr1_pipe_ialu__DOT__main_sum_flags)));
    }
    if ((1U & ((IData)(vlSelf->scr1_pipe_ialu__DOT__main_sum_flags) 
               ^ (IData)(vlSelf->scr1_pipe_ialu__DOT____Vtogcov__main_sum_flags)))) {
        ++(vlSymsp->__Vcoverage[238]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__main_sum_flags 
            = ((0xeU & (IData)(vlSelf->scr1_pipe_ialu__DOT____Vtogcov__main_sum_flags)) 
               | (1U & (IData)(vlSelf->scr1_pipe_ialu__DOT__main_sum_flags)));
    }
    vlSelf->scr1_pipe_ialu__DOT__ialu2exu_cmp_res_o = 0U;
    if ((1U & (~ ((IData)(vlSelf->exu2ialu_cmd_i) >> 4U)))) {
        if ((1U & (~ ((IData)(vlSelf->exu2ialu_cmd_i) 
                      >> 3U)))) {
            if ((4U & (IData)(vlSelf->exu2ialu_cmd_i))) {
                if ((2U & (IData)(vlSelf->exu2ialu_cmd_i))) {
                    if ((1U & (~ (IData)(vlSelf->exu2ialu_cmd_i)))) {
                        ++(vlSymsp->__Vcoverage[933]);
                    }
                    if ((1U & (IData)(vlSelf->exu2ialu_cmd_i))) {
                        ++(vlSymsp->__Vcoverage[934]);
                    }
                }
                if ((1U & (~ ((IData)(vlSelf->exu2ialu_cmd_i) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlSelf->exu2ialu_cmd_i)))) {
                        ++(vlSymsp->__Vcoverage[931]);
                    }
                    if ((1U & (IData)(vlSelf->exu2ialu_cmd_i))) {
                        ++(vlSymsp->__Vcoverage[932]);
                    }
                }
            }
            if ((1U & (~ ((IData)(vlSelf->exu2ialu_cmd_i) 
                          >> 2U)))) {
                if ((2U & (IData)(vlSelf->exu2ialu_cmd_i))) {
                    if ((1U & (IData)(vlSelf->exu2ialu_cmd_i))) {
                        ++(vlSymsp->__Vcoverage[930]);
                    }
                    if ((1U & (~ (IData)(vlSelf->exu2ialu_cmd_i)))) {
                        ++(vlSymsp->__Vcoverage[929]);
                    }
                }
                if ((1U & (~ ((IData)(vlSelf->exu2ialu_cmd_i) 
                              >> 1U)))) {
                    if ((1U & (IData)(vlSelf->exu2ialu_cmd_i))) {
                        ++(vlSymsp->__Vcoverage[928]);
                    }
                    if ((1U & (~ (IData)(vlSelf->exu2ialu_cmd_i)))) {
                        ++(vlSymsp->__Vcoverage[945]);
                    }
                }
            }
        }
        if ((8U & (IData)(vlSelf->exu2ialu_cmd_i))) {
            if ((1U & (~ ((IData)(vlSelf->exu2ialu_cmd_i) 
                          >> 2U)))) {
                if ((1U & (~ ((IData)(vlSelf->exu2ialu_cmd_i) 
                              >> 1U)))) {
                    if ((1U & (IData)(vlSelf->exu2ialu_cmd_i))) {
                        ++(vlSymsp->__Vcoverage[936]);
                    }
                    if ((1U & (~ (IData)(vlSelf->exu2ialu_cmd_i)))) {
                        ++(vlSymsp->__Vcoverage[935]);
                    }
                }
                if ((2U & (IData)(vlSelf->exu2ialu_cmd_i))) {
                    if ((1U & (IData)(vlSelf->exu2ialu_cmd_i))) {
                        ++(vlSymsp->__Vcoverage[938]);
                        vlSelf->scr1_pipe_ialu__DOT__ialu2exu_cmp_res_o 
                            = (1U & (~ (IData)(vlSelf->scr1_pipe_ialu__DOT__main_sum_flags)));
                    } else {
                        vlSelf->scr1_pipe_ialu__DOT__ialu2exu_cmp_res_o 
                            = (1U & (~ (((IData)(vlSelf->scr1_pipe_ialu__DOT__main_sum_flags) 
                                         >> 2U) ^ ((IData)(vlSelf->scr1_pipe_ialu__DOT__main_sum_flags) 
                                                   >> 1U))));
                    }
                    if ((1U & (~ (IData)(vlSelf->exu2ialu_cmd_i)))) {
                        ++(vlSymsp->__Vcoverage[937]);
                    }
                } else {
                    vlSelf->scr1_pipe_ialu__DOT__ialu2exu_cmp_res_o 
                        = (1U & ((1U & (IData)(vlSelf->exu2ialu_cmd_i))
                                  ? (~ ((IData)(vlSelf->scr1_pipe_ialu__DOT__main_sum_flags) 
                                        >> 3U)) : ((IData)(vlSelf->scr1_pipe_ialu__DOT__main_sum_flags) 
                                                   >> 3U)));
                }
            }
            if ((4U & (IData)(vlSelf->exu2ialu_cmd_i))) {
                if ((1U & (~ ((IData)(vlSelf->exu2ialu_cmd_i) 
                              >> 1U)))) {
                    ++(vlSymsp->__Vcoverage[939]);
                }
                if ((2U & (IData)(vlSelf->exu2ialu_cmd_i))) {
                    if ((1U & (~ (IData)(vlSelf->exu2ialu_cmd_i)))) {
                        ++(vlSymsp->__Vcoverage[939]);
                    }
                    if ((1U & (IData)(vlSelf->exu2ialu_cmd_i))) {
                        ++(vlSymsp->__Vcoverage[940]);
                    }
                }
            }
        } else if ((4U & (IData)(vlSelf->exu2ialu_cmd_i))) {
            if ((2U & (IData)(vlSelf->exu2ialu_cmd_i))) {
                vlSelf->scr1_pipe_ialu__DOT__ialu2exu_cmp_res_o 
                    = (1U & ((1U & (IData)(vlSelf->exu2ialu_cmd_i))
                              ? (IData)(vlSelf->scr1_pipe_ialu__DOT__main_sum_flags)
                              : (((IData)(vlSelf->scr1_pipe_ialu__DOT__main_sum_flags) 
                                  >> 2U) ^ ((IData)(vlSelf->scr1_pipe_ialu__DOT__main_sum_flags) 
                                            >> 1U))));
            }
        }
    }
    if ((1U & ((IData)(vlSelf->scr1_pipe_ialu__DOT__main_sum_res) 
               ^ (IData)(vlSelf->scr1_pipe_ialu__DOT____Vtogcov__main_sum_res)))) {
        ++(vlSymsp->__Vcoverage[202]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__main_sum_res 
            = ((0x1fffffffeULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__main_sum_res) 
               | (IData)((IData)((1U & (IData)(vlSelf->scr1_pipe_ialu__DOT__main_sum_res)))));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__main_sum_res 
                        >> 1U)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__main_sum_res 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[203]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__main_sum_res 
            = ((0x1fffffffdULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__main_sum_res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__main_sum_res 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__main_sum_res 
                        >> 2U)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__main_sum_res 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[204]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__main_sum_res 
            = ((0x1fffffffbULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__main_sum_res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__main_sum_res 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__main_sum_res 
                        >> 3U)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__main_sum_res 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[205]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__main_sum_res 
            = ((0x1fffffff7ULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__main_sum_res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__main_sum_res 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__main_sum_res 
                        >> 4U)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__main_sum_res 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[206]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__main_sum_res 
            = ((0x1ffffffefULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__main_sum_res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__main_sum_res 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__main_sum_res 
                        >> 5U)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__main_sum_res 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[207]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__main_sum_res 
            = ((0x1ffffffdfULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__main_sum_res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__main_sum_res 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__main_sum_res 
                        >> 6U)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__main_sum_res 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[208]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__main_sum_res 
            = ((0x1ffffffbfULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__main_sum_res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__main_sum_res 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__main_sum_res 
                        >> 7U)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__main_sum_res 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[209]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__main_sum_res 
            = ((0x1ffffff7fULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__main_sum_res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__main_sum_res 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__main_sum_res 
                        >> 8U)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__main_sum_res 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[210]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__main_sum_res 
            = ((0x1fffffeffULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__main_sum_res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__main_sum_res 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__main_sum_res 
                        >> 9U)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__main_sum_res 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[211]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__main_sum_res 
            = ((0x1fffffdffULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__main_sum_res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__main_sum_res 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__main_sum_res 
                        >> 0xaU)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__main_sum_res 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[212]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__main_sum_res 
            = ((0x1fffffbffULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__main_sum_res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__main_sum_res 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__main_sum_res 
                        >> 0xbU)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__main_sum_res 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[213]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__main_sum_res 
            = ((0x1fffff7ffULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__main_sum_res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__main_sum_res 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__main_sum_res 
                        >> 0xcU)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__main_sum_res 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[214]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__main_sum_res 
            = ((0x1ffffefffULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__main_sum_res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__main_sum_res 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__main_sum_res 
                        >> 0xdU)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__main_sum_res 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[215]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__main_sum_res 
            = ((0x1ffffdfffULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__main_sum_res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__main_sum_res 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__main_sum_res 
                        >> 0xeU)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__main_sum_res 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[216]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__main_sum_res 
            = ((0x1ffffbfffULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__main_sum_res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__main_sum_res 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__main_sum_res 
                        >> 0xfU)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__main_sum_res 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[217]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__main_sum_res 
            = ((0x1ffff7fffULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__main_sum_res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__main_sum_res 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__main_sum_res 
                        >> 0x10U)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__main_sum_res 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[218]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__main_sum_res 
            = ((0x1fffeffffULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__main_sum_res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__main_sum_res 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__main_sum_res 
                        >> 0x11U)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__main_sum_res 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[219]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__main_sum_res 
            = ((0x1fffdffffULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__main_sum_res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__main_sum_res 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__main_sum_res 
                        >> 0x12U)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__main_sum_res 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[220]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__main_sum_res 
            = ((0x1fffbffffULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__main_sum_res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__main_sum_res 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__main_sum_res 
                        >> 0x13U)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__main_sum_res 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[221]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__main_sum_res 
            = ((0x1fff7ffffULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__main_sum_res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__main_sum_res 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__main_sum_res 
                        >> 0x14U)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__main_sum_res 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[222]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__main_sum_res 
            = ((0x1ffefffffULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__main_sum_res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__main_sum_res 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__main_sum_res 
                        >> 0x15U)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__main_sum_res 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[223]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__main_sum_res 
            = ((0x1ffdfffffULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__main_sum_res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__main_sum_res 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__main_sum_res 
                        >> 0x16U)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__main_sum_res 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[224]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__main_sum_res 
            = ((0x1ffbfffffULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__main_sum_res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__main_sum_res 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__main_sum_res 
                        >> 0x17U)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__main_sum_res 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[225]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__main_sum_res 
            = ((0x1ff7fffffULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__main_sum_res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__main_sum_res 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__main_sum_res 
                        >> 0x18U)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__main_sum_res 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[226]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__main_sum_res 
            = ((0x1feffffffULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__main_sum_res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__main_sum_res 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__main_sum_res 
                        >> 0x19U)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__main_sum_res 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[227]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__main_sum_res 
            = ((0x1fdffffffULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__main_sum_res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__main_sum_res 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__main_sum_res 
                        >> 0x1aU)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__main_sum_res 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[228]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__main_sum_res 
            = ((0x1fbffffffULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__main_sum_res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__main_sum_res 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__main_sum_res 
                        >> 0x1bU)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__main_sum_res 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[229]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__main_sum_res 
            = ((0x1f7ffffffULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__main_sum_res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__main_sum_res 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__main_sum_res 
                        >> 0x1cU)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__main_sum_res 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[230]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__main_sum_res 
            = ((0x1efffffffULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__main_sum_res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__main_sum_res 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__main_sum_res 
                        >> 0x1dU)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__main_sum_res 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[231]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__main_sum_res 
            = ((0x1dfffffffULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__main_sum_res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__main_sum_res 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__main_sum_res 
                        >> 0x1eU)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__main_sum_res 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[232]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__main_sum_res 
            = ((0x1bfffffffULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__main_sum_res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__main_sum_res 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__main_sum_res 
                        >> 0x1fU)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__main_sum_res 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[233]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__main_sum_res 
            = ((0x17fffffffULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__main_sum_res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__main_sum_res 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((IData)(((vlSelf->scr1_pipe_ialu__DOT__main_sum_res 
                  ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__main_sum_res) 
                 >> 0x20U))) {
        ++(vlSymsp->__Vcoverage[234]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__main_sum_res 
            = ((0xffffffffULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__main_sum_res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__main_sum_res 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if (((IData)(vlSelf->scr1_pipe_ialu__DOT__main_ops_diff_sgn) 
         ^ (IData)(vlSelf->scr1_pipe_ialu__DOT____Vtogcov__main_ops_diff_sgn))) {
        ++(vlSymsp->__Vcoverage[241]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__main_ops_diff_sgn 
            = vlSelf->scr1_pipe_ialu__DOT__main_ops_diff_sgn;
    }
    if (((IData)(vlSelf->scr1_pipe_ialu__DOT__mdu_fsm_idle) 
         ^ (IData)(vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_fsm_idle))) {
        ++(vlSymsp->__Vcoverage[325]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_fsm_idle 
            = vlSelf->scr1_pipe_ialu__DOT__mdu_fsm_idle;
    }
    if (((IData)(vlSelf->scr1_pipe_ialu__DOT__mdu_fsm_corr) 
         ^ (IData)(vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_fsm_corr))) {
        ++(vlSymsp->__Vcoverage[326]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_fsm_corr 
            = vlSelf->scr1_pipe_ialu__DOT__mdu_fsm_corr;
    }
    if (((IData)(vlSelf->scr1_pipe_ialu__DOT__div_cmd_rem) 
         ^ (IData)(vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_cmd_rem))) {
        ++(vlSymsp->__Vcoverage[336]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_cmd_rem 
            = vlSelf->scr1_pipe_ialu__DOT__div_cmd_rem;
    }
    vlSelf->scr1_pipe_ialu__DOT__mdu_cmd_is_iter = 
        ((0x13U == (IData)(vlSelf->exu2ialu_cmd_i)) 
         | ((0x14U == (IData)(vlSelf->exu2ialu_cmd_i)) 
            | (IData)(vlSelf->scr1_pipe_ialu__DOT__div_cmd_rem)));
    vlSelf->scr1_pipe_ialu__DOT__div_cmd = (((IData)(vlSelf->scr1_pipe_ialu__DOT__div_cmd_rem) 
                                             << 1U) 
                                            | (IData)(scr1_pipe_ialu__DOT____VdfgTmp_h8ffc7e80__0));
    vlSelf->scr1_pipe_ialu__DOT__div_ops_are_sgn = 
        (1U & (~ (IData)(scr1_pipe_ialu__DOT____VdfgTmp_h8ffc7e80__0)));
    vlSelf->scr1_pipe_ialu__DOT__mul_op2_is_sgn = (1U 
                                                   & (~ (IData)(scr1_pipe_ialu__DOT____VdfgTmp_hf0464054__0)));
    vlSelf->scr1_pipe_ialu__DOT__mul_cmd = (((IData)(scr1_pipe_ialu__DOT____VdfgTmp_hf0464054__0) 
                                             << 1U) 
                                            | ((0x10U 
                                                == (IData)(vlSelf->exu2ialu_cmd_i)) 
                                               | (0x12U 
                                                  == (IData)(vlSelf->exu2ialu_cmd_i))));
    vlSelf->scr1_pipe_ialu__DOT__mdu_cmd_mul = ((0xfU 
                                                 == (IData)(vlSelf->exu2ialu_cmd_i)) 
                                                | ((0x12U 
                                                    == (IData)(vlSelf->exu2ialu_cmd_i)) 
                                                   | (IData)(scr1_pipe_ialu__DOT____VdfgTmp_hf0464054__0)));
    if ((2U != (IData)(vlSelf->scr1_pipe_ialu__DOT__shft_cmd))) {
        if ((3U == (IData)(vlSelf->scr1_pipe_ialu__DOT__shft_cmd))) {
            ++(vlSymsp->__Vcoverage[901]);
        }
        if ((3U != (IData)(vlSelf->scr1_pipe_ialu__DOT__shft_cmd))) {
            ++(vlSymsp->__Vcoverage[902]);
        }
    }
    if ((1U & ((IData)(vlSelf->scr1_pipe_ialu__DOT__shft_cmd) 
               ^ (IData)(vlSelf->scr1_pipe_ialu__DOT____Vtogcov__shft_cmd)))) {
        ++(vlSymsp->__Vcoverage[281]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__shft_cmd 
            = ((2U & (IData)(vlSelf->scr1_pipe_ialu__DOT____Vtogcov__shft_cmd)) 
               | (1U & (IData)(vlSelf->scr1_pipe_ialu__DOT__shft_cmd)));
    }
    if ((2U & ((IData)(vlSelf->scr1_pipe_ialu__DOT__shft_cmd) 
               ^ (IData)(vlSelf->scr1_pipe_ialu__DOT____Vtogcov__shft_cmd)))) {
        ++(vlSymsp->__Vcoverage[282]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__shft_cmd 
            = ((1U & (IData)(vlSelf->scr1_pipe_ialu__DOT____Vtogcov__shft_cmd)) 
               | (2U & (IData)(vlSelf->scr1_pipe_ialu__DOT__shft_cmd)));
    }
    vlSelf->scr1_pipe_ialu__DOT__shft_op1 = vlSelf->exu2ialu_main_op1_i;
    vlSelf->scr1_pipe_ialu__DOT__shft_op2 = (0x1fU 
                                             & vlSelf->exu2ialu_main_op2_i);
    if ((2U == (IData)(vlSelf->scr1_pipe_ialu__DOT__shft_cmd))) {
        ++(vlSymsp->__Vcoverage[900]);
        vlSelf->scr1_pipe_ialu__DOT__shft_res = (vlSelf->scr1_pipe_ialu__DOT__shft_op1 
                                                 >> (IData)(vlSelf->scr1_pipe_ialu__DOT__shft_op2));
    } else {
        vlSelf->scr1_pipe_ialu__DOT__shft_res = ((3U 
                                                  == (IData)(vlSelf->scr1_pipe_ialu__DOT__shft_cmd))
                                                  ? 
                                                 VL_SHIFTRS_III(32,32,5, vlSelf->scr1_pipe_ialu__DOT__shft_op1, (IData)(vlSelf->scr1_pipe_ialu__DOT__shft_op2))
                                                  : 
                                                 (vlSelf->scr1_pipe_ialu__DOT__shft_op1 
                                                  << (IData)(vlSelf->scr1_pipe_ialu__DOT__shft_op2)));
    }
    if (((IData)(vlSelf->scr1_pipe_ialu__DOT__ialu2exu_cmp_res_o) 
         ^ (IData)(vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_cmp_res_o))) {
        ++(vlSymsp->__Vcoverage[105]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_cmp_res_o 
            = vlSelf->scr1_pipe_ialu__DOT__ialu2exu_cmp_res_o;
    }
    vlSelf->ialu2exu_cmp_res_o = vlSelf->scr1_pipe_ialu__DOT__ialu2exu_cmp_res_o;
    if (((IData)(vlSelf->scr1_pipe_ialu__DOT__mdu_cmd_is_iter) 
         ^ (IData)(vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_cmd_is_iter))) {
        ++(vlSymsp->__Vcoverage[315]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_cmd_is_iter 
            = vlSelf->scr1_pipe_ialu__DOT__mdu_cmd_is_iter;
    }
    vlSelf->scr1_pipe_ialu__DOT__mdu_cmd_div = vlSelf->scr1_pipe_ialu__DOT__mdu_cmd_is_iter;
    vlSelf->scr1_pipe_ialu__DOT__mdu_iter_req = ((IData)(vlSelf->scr1_pipe_ialu__DOT__mdu_cmd_is_iter) 
                                                 & ((IData)(vlSelf->scr1_pipe_ialu__DOT__main_ops_non_zero) 
                                                    & (IData)(vlSelf->scr1_pipe_ialu__DOT__mdu_fsm_idle)));
    vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt_next 
        = ((IData)(vlSelf->scr1_pipe_ialu__DOT__mdu_fsm_idle)
            ? ((IData)(vlSelf->scr1_pipe_ialu__DOT__mdu_cmd_is_iter)
                ? 0x40000000U : vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt)
            : VL_SHIFTR_III(32,32,32, vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt, 1U));
    vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_next 
        = ((1U & ((~ (IData)(vlSelf->scr1_pipe_ialu__DOT__mdu_cmd_is_iter)) 
                  | (IData)(vlSelf->scr1_pipe_ialu__DOT__mdu_fsm_corr)))
            ? 0U : ((IData)(vlSelf->scr1_pipe_ialu__DOT__mdu_fsm_idle)
                     ? VL_SHIFTL_III(32,32,32, vlSelf->exu2ialu_main_op1_i, 1U)
                     : VL_SHIFTL_III(32,32,32, vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_ff, 1U)));
    vlSelf->scr1_pipe_ialu__DOT____VdfgExtracted_h4eb2c666__0 
        = ((~ (IData)(vlSelf->scr1_pipe_ialu__DOT__mdu_fsm_corr)) 
           & (IData)(vlSelf->scr1_pipe_ialu__DOT__mdu_cmd_is_iter));
    if ((1U & ((IData)(vlSelf->scr1_pipe_ialu__DOT__div_cmd) 
               ^ (IData)(vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_cmd)))) {
        ++(vlSymsp->__Vcoverage[333]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_cmd 
            = ((2U & (IData)(vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_cmd)) 
               | (1U & (IData)(vlSelf->scr1_pipe_ialu__DOT__div_cmd)));
    }
    if ((2U & ((IData)(vlSelf->scr1_pipe_ialu__DOT__div_cmd) 
               ^ (IData)(vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_cmd)))) {
        ++(vlSymsp->__Vcoverage[334]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_cmd 
            = ((1U & (IData)(vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_cmd)) 
               | (2U & (IData)(vlSelf->scr1_pipe_ialu__DOT__div_cmd)));
    }
    vlSelf->scr1_pipe_ialu__DOT__div_cmd_div = (0U 
                                                == (IData)(vlSelf->scr1_pipe_ialu__DOT__div_cmd));
    if (((IData)(vlSelf->scr1_pipe_ialu__DOT__div_ops_are_sgn) 
         ^ (IData)(vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_ops_are_sgn))) {
        ++(vlSymsp->__Vcoverage[471]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_ops_are_sgn 
            = vlSelf->scr1_pipe_ialu__DOT__div_ops_are_sgn;
    }
    vlSelf->scr1_pipe_ialu__DOT__div_op2_is_neg = ((IData)(vlSelf->scr1_pipe_ialu__DOT__div_ops_are_sgn) 
                                                   & (vlSelf->exu2ialu_main_op2_i 
                                                      >> 0x1fU));
    vlSelf->scr1_pipe_ialu__DOT__div_op1_is_neg = ((IData)(vlSelf->scr1_pipe_ialu__DOT__div_ops_are_sgn) 
                                                   & (vlSelf->exu2ialu_main_op1_i 
                                                      >> 0x1fU));
    if (((IData)(vlSelf->scr1_pipe_ialu__DOT__mul_op2_is_sgn) 
         ^ (IData)(vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_op2_is_sgn))) {
        ++(vlSymsp->__Vcoverage[338]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_op2_is_sgn 
            = vlSelf->scr1_pipe_ialu__DOT__mul_op2_is_sgn;
    }
    vlSelf->scr1_pipe_ialu__DOT__mul_op2_sgn = ((IData)(vlSelf->scr1_pipe_ialu__DOT__mul_op2_is_sgn) 
                                                & (vlSelf->exu2ialu_main_op2_i 
                                                   >> 0x1fU));
    if ((1U & ((IData)(vlSelf->scr1_pipe_ialu__DOT__mul_cmd) 
               ^ (IData)(vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_cmd)))) {
        ++(vlSymsp->__Vcoverage[330]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_cmd 
            = ((2U & (IData)(vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_cmd)) 
               | (1U & (IData)(vlSelf->scr1_pipe_ialu__DOT__mul_cmd)));
    }
    if ((2U & ((IData)(vlSelf->scr1_pipe_ialu__DOT__mul_cmd) 
               ^ (IData)(vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_cmd)))) {
        ++(vlSymsp->__Vcoverage[331]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_cmd 
            = ((1U & (IData)(vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_cmd)) 
               | (2U & (IData)(vlSelf->scr1_pipe_ialu__DOT__mul_cmd)));
    }
    vlSelf->scr1_pipe_ialu__DOT__mul_cmd_hi = (0U != (IData)(vlSelf->scr1_pipe_ialu__DOT__mul_cmd));
    vlSelf->scr1_pipe_ialu__DOT__mul_op1_is_sgn = (1U 
                                                   & (~ (IData)(
                                                                (3U 
                                                                 == (IData)(vlSelf->scr1_pipe_ialu__DOT__mul_cmd)))));
    if (((IData)(vlSelf->scr1_pipe_ialu__DOT__mdu_cmd_mul) 
         ^ (IData)(vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_cmd_mul))) {
        ++(vlSymsp->__Vcoverage[329]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_cmd_mul 
            = vlSelf->scr1_pipe_ialu__DOT__mdu_cmd_mul;
    }
    if ((1U & ((IData)(vlSelf->scr1_pipe_ialu__DOT__shft_op2) 
               ^ (IData)(vlSelf->scr1_pipe_ialu__DOT____Vtogcov__shft_op2)))) {
        ++(vlSymsp->__Vcoverage[276]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__shft_op2 
            = ((0x1eU & (IData)(vlSelf->scr1_pipe_ialu__DOT____Vtogcov__shft_op2)) 
               | (1U & (IData)(vlSelf->scr1_pipe_ialu__DOT__shft_op2)));
    }
    if ((2U & ((IData)(vlSelf->scr1_pipe_ialu__DOT__shft_op2) 
               ^ (IData)(vlSelf->scr1_pipe_ialu__DOT____Vtogcov__shft_op2)))) {
        ++(vlSymsp->__Vcoverage[277]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__shft_op2 
            = ((0x1dU & (IData)(vlSelf->scr1_pipe_ialu__DOT____Vtogcov__shft_op2)) 
               | (2U & (IData)(vlSelf->scr1_pipe_ialu__DOT__shft_op2)));
    }
    if ((4U & ((IData)(vlSelf->scr1_pipe_ialu__DOT__shft_op2) 
               ^ (IData)(vlSelf->scr1_pipe_ialu__DOT____Vtogcov__shft_op2)))) {
        ++(vlSymsp->__Vcoverage[278]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__shft_op2 
            = ((0x1bU & (IData)(vlSelf->scr1_pipe_ialu__DOT____Vtogcov__shft_op2)) 
               | (4U & (IData)(vlSelf->scr1_pipe_ialu__DOT__shft_op2)));
    }
    if ((8U & ((IData)(vlSelf->scr1_pipe_ialu__DOT__shft_op2) 
               ^ (IData)(vlSelf->scr1_pipe_ialu__DOT____Vtogcov__shft_op2)))) {
        ++(vlSymsp->__Vcoverage[279]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__shft_op2 
            = ((0x17U & (IData)(vlSelf->scr1_pipe_ialu__DOT____Vtogcov__shft_op2)) 
               | (8U & (IData)(vlSelf->scr1_pipe_ialu__DOT__shft_op2)));
    }
    if ((0x10U & ((IData)(vlSelf->scr1_pipe_ialu__DOT__shft_op2) 
                  ^ (IData)(vlSelf->scr1_pipe_ialu__DOT____Vtogcov__shft_op2)))) {
        ++(vlSymsp->__Vcoverage[280]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__shft_op2 
            = ((0xfU & (IData)(vlSelf->scr1_pipe_ialu__DOT____Vtogcov__shft_op2)) 
               | (0x10U & (IData)(vlSelf->scr1_pipe_ialu__DOT__shft_op2)));
    }
    if ((1U & (vlSelf->scr1_pipe_ialu__DOT__shft_op1 
               ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__shft_op1))) {
        ++(vlSymsp->__Vcoverage[244]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__shft_op1 
            = ((0xfffffffeU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__shft_op1) 
               | (1U & vlSelf->scr1_pipe_ialu__DOT__shft_op1));
    }
    if ((2U & (vlSelf->scr1_pipe_ialu__DOT__shft_op1 
               ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__shft_op1))) {
        ++(vlSymsp->__Vcoverage[245]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__shft_op1 
            = ((0xfffffffdU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__shft_op1) 
               | (2U & vlSelf->scr1_pipe_ialu__DOT__shft_op1));
    }
    if ((4U & (vlSelf->scr1_pipe_ialu__DOT__shft_op1 
               ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__shft_op1))) {
        ++(vlSymsp->__Vcoverage[246]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__shft_op1 
            = ((0xfffffffbU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__shft_op1) 
               | (4U & vlSelf->scr1_pipe_ialu__DOT__shft_op1));
    }
    if ((8U & (vlSelf->scr1_pipe_ialu__DOT__shft_op1 
               ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__shft_op1))) {
        ++(vlSymsp->__Vcoverage[247]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__shft_op1 
            = ((0xfffffff7U & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__shft_op1) 
               | (8U & vlSelf->scr1_pipe_ialu__DOT__shft_op1));
    }
    if ((0x10U & (vlSelf->scr1_pipe_ialu__DOT__shft_op1 
                  ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__shft_op1))) {
        ++(vlSymsp->__Vcoverage[248]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__shft_op1 
            = ((0xffffffefU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__shft_op1) 
               | (0x10U & vlSelf->scr1_pipe_ialu__DOT__shft_op1));
    }
    if ((0x20U & (vlSelf->scr1_pipe_ialu__DOT__shft_op1 
                  ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__shft_op1))) {
        ++(vlSymsp->__Vcoverage[249]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__shft_op1 
            = ((0xffffffdfU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__shft_op1) 
               | (0x20U & vlSelf->scr1_pipe_ialu__DOT__shft_op1));
    }
    if ((0x40U & (vlSelf->scr1_pipe_ialu__DOT__shft_op1 
                  ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__shft_op1))) {
        ++(vlSymsp->__Vcoverage[250]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__shft_op1 
            = ((0xffffffbfU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__shft_op1) 
               | (0x40U & vlSelf->scr1_pipe_ialu__DOT__shft_op1));
    }
    if ((0x80U & (vlSelf->scr1_pipe_ialu__DOT__shft_op1 
                  ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__shft_op1))) {
        ++(vlSymsp->__Vcoverage[251]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__shft_op1 
            = ((0xffffff7fU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__shft_op1) 
               | (0x80U & vlSelf->scr1_pipe_ialu__DOT__shft_op1));
    }
    if ((0x100U & (vlSelf->scr1_pipe_ialu__DOT__shft_op1 
                   ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__shft_op1))) {
        ++(vlSymsp->__Vcoverage[252]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__shft_op1 
            = ((0xfffffeffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__shft_op1) 
               | (0x100U & vlSelf->scr1_pipe_ialu__DOT__shft_op1));
    }
    if ((0x200U & (vlSelf->scr1_pipe_ialu__DOT__shft_op1 
                   ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__shft_op1))) {
        ++(vlSymsp->__Vcoverage[253]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__shft_op1 
            = ((0xfffffdffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__shft_op1) 
               | (0x200U & vlSelf->scr1_pipe_ialu__DOT__shft_op1));
    }
    if ((0x400U & (vlSelf->scr1_pipe_ialu__DOT__shft_op1 
                   ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__shft_op1))) {
        ++(vlSymsp->__Vcoverage[254]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__shft_op1 
            = ((0xfffffbffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__shft_op1) 
               | (0x400U & vlSelf->scr1_pipe_ialu__DOT__shft_op1));
    }
    if ((0x800U & (vlSelf->scr1_pipe_ialu__DOT__shft_op1 
                   ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__shft_op1))) {
        ++(vlSymsp->__Vcoverage[255]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__shft_op1 
            = ((0xfffff7ffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__shft_op1) 
               | (0x800U & vlSelf->scr1_pipe_ialu__DOT__shft_op1));
    }
    if ((0x1000U & (vlSelf->scr1_pipe_ialu__DOT__shft_op1 
                    ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__shft_op1))) {
        ++(vlSymsp->__Vcoverage[256]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__shft_op1 
            = ((0xffffefffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__shft_op1) 
               | (0x1000U & vlSelf->scr1_pipe_ialu__DOT__shft_op1));
    }
    if ((0x2000U & (vlSelf->scr1_pipe_ialu__DOT__shft_op1 
                    ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__shft_op1))) {
        ++(vlSymsp->__Vcoverage[257]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__shft_op1 
            = ((0xffffdfffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__shft_op1) 
               | (0x2000U & vlSelf->scr1_pipe_ialu__DOT__shft_op1));
    }
    if ((0x4000U & (vlSelf->scr1_pipe_ialu__DOT__shft_op1 
                    ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__shft_op1))) {
        ++(vlSymsp->__Vcoverage[258]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__shft_op1 
            = ((0xffffbfffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__shft_op1) 
               | (0x4000U & vlSelf->scr1_pipe_ialu__DOT__shft_op1));
    }
    if ((0x8000U & (vlSelf->scr1_pipe_ialu__DOT__shft_op1 
                    ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__shft_op1))) {
        ++(vlSymsp->__Vcoverage[259]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__shft_op1 
            = ((0xffff7fffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__shft_op1) 
               | (0x8000U & vlSelf->scr1_pipe_ialu__DOT__shft_op1));
    }
    if ((0x10000U & (vlSelf->scr1_pipe_ialu__DOT__shft_op1 
                     ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__shft_op1))) {
        ++(vlSymsp->__Vcoverage[260]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__shft_op1 
            = ((0xfffeffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__shft_op1) 
               | (0x10000U & vlSelf->scr1_pipe_ialu__DOT__shft_op1));
    }
    if ((0x20000U & (vlSelf->scr1_pipe_ialu__DOT__shft_op1 
                     ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__shft_op1))) {
        ++(vlSymsp->__Vcoverage[261]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__shft_op1 
            = ((0xfffdffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__shft_op1) 
               | (0x20000U & vlSelf->scr1_pipe_ialu__DOT__shft_op1));
    }
    if ((0x40000U & (vlSelf->scr1_pipe_ialu__DOT__shft_op1 
                     ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__shft_op1))) {
        ++(vlSymsp->__Vcoverage[262]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__shft_op1 
            = ((0xfffbffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__shft_op1) 
               | (0x40000U & vlSelf->scr1_pipe_ialu__DOT__shft_op1));
    }
    if ((0x80000U & (vlSelf->scr1_pipe_ialu__DOT__shft_op1 
                     ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__shft_op1))) {
        ++(vlSymsp->__Vcoverage[263]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__shft_op1 
            = ((0xfff7ffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__shft_op1) 
               | (0x80000U & vlSelf->scr1_pipe_ialu__DOT__shft_op1));
    }
    if ((0x100000U & (vlSelf->scr1_pipe_ialu__DOT__shft_op1 
                      ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__shft_op1))) {
        ++(vlSymsp->__Vcoverage[264]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__shft_op1 
            = ((0xffefffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__shft_op1) 
               | (0x100000U & vlSelf->scr1_pipe_ialu__DOT__shft_op1));
    }
    if ((0x200000U & (vlSelf->scr1_pipe_ialu__DOT__shft_op1 
                      ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__shft_op1))) {
        ++(vlSymsp->__Vcoverage[265]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__shft_op1 
            = ((0xffdfffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__shft_op1) 
               | (0x200000U & vlSelf->scr1_pipe_ialu__DOT__shft_op1));
    }
    if ((0x400000U & (vlSelf->scr1_pipe_ialu__DOT__shft_op1 
                      ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__shft_op1))) {
        ++(vlSymsp->__Vcoverage[266]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__shft_op1 
            = ((0xffbfffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__shft_op1) 
               | (0x400000U & vlSelf->scr1_pipe_ialu__DOT__shft_op1));
    }
    if ((0x800000U & (vlSelf->scr1_pipe_ialu__DOT__shft_op1 
                      ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__shft_op1))) {
        ++(vlSymsp->__Vcoverage[267]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__shft_op1 
            = ((0xff7fffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__shft_op1) 
               | (0x800000U & vlSelf->scr1_pipe_ialu__DOT__shft_op1));
    }
    if ((0x1000000U & (vlSelf->scr1_pipe_ialu__DOT__shft_op1 
                       ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__shft_op1))) {
        ++(vlSymsp->__Vcoverage[268]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__shft_op1 
            = ((0xfeffffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__shft_op1) 
               | (0x1000000U & vlSelf->scr1_pipe_ialu__DOT__shft_op1));
    }
    if ((0x2000000U & (vlSelf->scr1_pipe_ialu__DOT__shft_op1 
                       ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__shft_op1))) {
        ++(vlSymsp->__Vcoverage[269]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__shft_op1 
            = ((0xfdffffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__shft_op1) 
               | (0x2000000U & vlSelf->scr1_pipe_ialu__DOT__shft_op1));
    }
    if ((0x4000000U & (vlSelf->scr1_pipe_ialu__DOT__shft_op1 
                       ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__shft_op1))) {
        ++(vlSymsp->__Vcoverage[270]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__shft_op1 
            = ((0xfbffffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__shft_op1) 
               | (0x4000000U & vlSelf->scr1_pipe_ialu__DOT__shft_op1));
    }
    if ((0x8000000U & (vlSelf->scr1_pipe_ialu__DOT__shft_op1 
                       ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__shft_op1))) {
        ++(vlSymsp->__Vcoverage[271]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__shft_op1 
            = ((0xf7ffffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__shft_op1) 
               | (0x8000000U & vlSelf->scr1_pipe_ialu__DOT__shft_op1));
    }
    if ((0x10000000U & (vlSelf->scr1_pipe_ialu__DOT__shft_op1 
                        ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__shft_op1))) {
        ++(vlSymsp->__Vcoverage[272]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__shft_op1 
            = ((0xefffffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__shft_op1) 
               | (0x10000000U & vlSelf->scr1_pipe_ialu__DOT__shft_op1));
    }
    if ((0x20000000U & (vlSelf->scr1_pipe_ialu__DOT__shft_op1 
                        ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__shft_op1))) {
        ++(vlSymsp->__Vcoverage[273]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__shft_op1 
            = ((0xdfffffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__shft_op1) 
               | (0x20000000U & vlSelf->scr1_pipe_ialu__DOT__shft_op1));
    }
    if ((0x40000000U & (vlSelf->scr1_pipe_ialu__DOT__shft_op1 
                        ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__shft_op1))) {
        ++(vlSymsp->__Vcoverage[274]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__shft_op1 
            = ((0xbfffffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__shft_op1) 
               | (0x40000000U & vlSelf->scr1_pipe_ialu__DOT__shft_op1));
    }
    if (((vlSelf->scr1_pipe_ialu__DOT__shft_op1 ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__shft_op1) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[275]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__shft_op1 
            = ((0x7fffffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__shft_op1) 
               | (0x80000000U & vlSelf->scr1_pipe_ialu__DOT__shft_op1));
    }
    if ((1U & (vlSelf->scr1_pipe_ialu__DOT__shft_res 
               ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__shft_res))) {
        ++(vlSymsp->__Vcoverage[283]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__shft_res 
            = ((0xfffffffeU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__shft_res) 
               | (1U & vlSelf->scr1_pipe_ialu__DOT__shft_res));
    }
    if ((2U & (vlSelf->scr1_pipe_ialu__DOT__shft_res 
               ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__shft_res))) {
        ++(vlSymsp->__Vcoverage[284]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__shft_res 
            = ((0xfffffffdU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__shft_res) 
               | (2U & vlSelf->scr1_pipe_ialu__DOT__shft_res));
    }
    if ((4U & (vlSelf->scr1_pipe_ialu__DOT__shft_res 
               ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__shft_res))) {
        ++(vlSymsp->__Vcoverage[285]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__shft_res 
            = ((0xfffffffbU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__shft_res) 
               | (4U & vlSelf->scr1_pipe_ialu__DOT__shft_res));
    }
    if ((8U & (vlSelf->scr1_pipe_ialu__DOT__shft_res 
               ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__shft_res))) {
        ++(vlSymsp->__Vcoverage[286]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__shft_res 
            = ((0xfffffff7U & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__shft_res) 
               | (8U & vlSelf->scr1_pipe_ialu__DOT__shft_res));
    }
    if ((0x10U & (vlSelf->scr1_pipe_ialu__DOT__shft_res 
                  ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__shft_res))) {
        ++(vlSymsp->__Vcoverage[287]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__shft_res 
            = ((0xffffffefU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__shft_res) 
               | (0x10U & vlSelf->scr1_pipe_ialu__DOT__shft_res));
    }
    if ((0x20U & (vlSelf->scr1_pipe_ialu__DOT__shft_res 
                  ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__shft_res))) {
        ++(vlSymsp->__Vcoverage[288]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__shft_res 
            = ((0xffffffdfU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__shft_res) 
               | (0x20U & vlSelf->scr1_pipe_ialu__DOT__shft_res));
    }
    if ((0x40U & (vlSelf->scr1_pipe_ialu__DOT__shft_res 
                  ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__shft_res))) {
        ++(vlSymsp->__Vcoverage[289]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__shft_res 
            = ((0xffffffbfU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__shft_res) 
               | (0x40U & vlSelf->scr1_pipe_ialu__DOT__shft_res));
    }
    if ((0x80U & (vlSelf->scr1_pipe_ialu__DOT__shft_res 
                  ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__shft_res))) {
        ++(vlSymsp->__Vcoverage[290]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__shft_res 
            = ((0xffffff7fU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__shft_res) 
               | (0x80U & vlSelf->scr1_pipe_ialu__DOT__shft_res));
    }
    if ((0x100U & (vlSelf->scr1_pipe_ialu__DOT__shft_res 
                   ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__shft_res))) {
        ++(vlSymsp->__Vcoverage[291]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__shft_res 
            = ((0xfffffeffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__shft_res) 
               | (0x100U & vlSelf->scr1_pipe_ialu__DOT__shft_res));
    }
    if ((0x200U & (vlSelf->scr1_pipe_ialu__DOT__shft_res 
                   ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__shft_res))) {
        ++(vlSymsp->__Vcoverage[292]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__shft_res 
            = ((0xfffffdffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__shft_res) 
               | (0x200U & vlSelf->scr1_pipe_ialu__DOT__shft_res));
    }
    if ((0x400U & (vlSelf->scr1_pipe_ialu__DOT__shft_res 
                   ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__shft_res))) {
        ++(vlSymsp->__Vcoverage[293]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__shft_res 
            = ((0xfffffbffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__shft_res) 
               | (0x400U & vlSelf->scr1_pipe_ialu__DOT__shft_res));
    }
    if ((0x800U & (vlSelf->scr1_pipe_ialu__DOT__shft_res 
                   ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__shft_res))) {
        ++(vlSymsp->__Vcoverage[294]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__shft_res 
            = ((0xfffff7ffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__shft_res) 
               | (0x800U & vlSelf->scr1_pipe_ialu__DOT__shft_res));
    }
    if ((0x1000U & (vlSelf->scr1_pipe_ialu__DOT__shft_res 
                    ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__shft_res))) {
        ++(vlSymsp->__Vcoverage[295]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__shft_res 
            = ((0xffffefffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__shft_res) 
               | (0x1000U & vlSelf->scr1_pipe_ialu__DOT__shft_res));
    }
    if ((0x2000U & (vlSelf->scr1_pipe_ialu__DOT__shft_res 
                    ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__shft_res))) {
        ++(vlSymsp->__Vcoverage[296]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__shft_res 
            = ((0xffffdfffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__shft_res) 
               | (0x2000U & vlSelf->scr1_pipe_ialu__DOT__shft_res));
    }
    if ((0x4000U & (vlSelf->scr1_pipe_ialu__DOT__shft_res 
                    ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__shft_res))) {
        ++(vlSymsp->__Vcoverage[297]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__shft_res 
            = ((0xffffbfffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__shft_res) 
               | (0x4000U & vlSelf->scr1_pipe_ialu__DOT__shft_res));
    }
    if ((0x8000U & (vlSelf->scr1_pipe_ialu__DOT__shft_res 
                    ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__shft_res))) {
        ++(vlSymsp->__Vcoverage[298]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__shft_res 
            = ((0xffff7fffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__shft_res) 
               | (0x8000U & vlSelf->scr1_pipe_ialu__DOT__shft_res));
    }
    if ((0x10000U & (vlSelf->scr1_pipe_ialu__DOT__shft_res 
                     ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__shft_res))) {
        ++(vlSymsp->__Vcoverage[299]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__shft_res 
            = ((0xfffeffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__shft_res) 
               | (0x10000U & vlSelf->scr1_pipe_ialu__DOT__shft_res));
    }
    if ((0x20000U & (vlSelf->scr1_pipe_ialu__DOT__shft_res 
                     ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__shft_res))) {
        ++(vlSymsp->__Vcoverage[300]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__shft_res 
            = ((0xfffdffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__shft_res) 
               | (0x20000U & vlSelf->scr1_pipe_ialu__DOT__shft_res));
    }
    if ((0x40000U & (vlSelf->scr1_pipe_ialu__DOT__shft_res 
                     ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__shft_res))) {
        ++(vlSymsp->__Vcoverage[301]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__shft_res 
            = ((0xfffbffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__shft_res) 
               | (0x40000U & vlSelf->scr1_pipe_ialu__DOT__shft_res));
    }
    if ((0x80000U & (vlSelf->scr1_pipe_ialu__DOT__shft_res 
                     ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__shft_res))) {
        ++(vlSymsp->__Vcoverage[302]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__shft_res 
            = ((0xfff7ffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__shft_res) 
               | (0x80000U & vlSelf->scr1_pipe_ialu__DOT__shft_res));
    }
    if ((0x100000U & (vlSelf->scr1_pipe_ialu__DOT__shft_res 
                      ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__shft_res))) {
        ++(vlSymsp->__Vcoverage[303]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__shft_res 
            = ((0xffefffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__shft_res) 
               | (0x100000U & vlSelf->scr1_pipe_ialu__DOT__shft_res));
    }
    if ((0x200000U & (vlSelf->scr1_pipe_ialu__DOT__shft_res 
                      ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__shft_res))) {
        ++(vlSymsp->__Vcoverage[304]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__shft_res 
            = ((0xffdfffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__shft_res) 
               | (0x200000U & vlSelf->scr1_pipe_ialu__DOT__shft_res));
    }
    if ((0x400000U & (vlSelf->scr1_pipe_ialu__DOT__shft_res 
                      ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__shft_res))) {
        ++(vlSymsp->__Vcoverage[305]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__shft_res 
            = ((0xffbfffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__shft_res) 
               | (0x400000U & vlSelf->scr1_pipe_ialu__DOT__shft_res));
    }
    if ((0x800000U & (vlSelf->scr1_pipe_ialu__DOT__shft_res 
                      ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__shft_res))) {
        ++(vlSymsp->__Vcoverage[306]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__shft_res 
            = ((0xff7fffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__shft_res) 
               | (0x800000U & vlSelf->scr1_pipe_ialu__DOT__shft_res));
    }
    if ((0x1000000U & (vlSelf->scr1_pipe_ialu__DOT__shft_res 
                       ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__shft_res))) {
        ++(vlSymsp->__Vcoverage[307]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__shft_res 
            = ((0xfeffffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__shft_res) 
               | (0x1000000U & vlSelf->scr1_pipe_ialu__DOT__shft_res));
    }
    if ((0x2000000U & (vlSelf->scr1_pipe_ialu__DOT__shft_res 
                       ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__shft_res))) {
        ++(vlSymsp->__Vcoverage[308]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__shft_res 
            = ((0xfdffffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__shft_res) 
               | (0x2000000U & vlSelf->scr1_pipe_ialu__DOT__shft_res));
    }
    if ((0x4000000U & (vlSelf->scr1_pipe_ialu__DOT__shft_res 
                       ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__shft_res))) {
        ++(vlSymsp->__Vcoverage[309]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__shft_res 
            = ((0xfbffffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__shft_res) 
               | (0x4000000U & vlSelf->scr1_pipe_ialu__DOT__shft_res));
    }
    if ((0x8000000U & (vlSelf->scr1_pipe_ialu__DOT__shft_res 
                       ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__shft_res))) {
        ++(vlSymsp->__Vcoverage[310]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__shft_res 
            = ((0xf7ffffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__shft_res) 
               | (0x8000000U & vlSelf->scr1_pipe_ialu__DOT__shft_res));
    }
    if ((0x10000000U & (vlSelf->scr1_pipe_ialu__DOT__shft_res 
                        ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__shft_res))) {
        ++(vlSymsp->__Vcoverage[311]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__shft_res 
            = ((0xefffffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__shft_res) 
               | (0x10000000U & vlSelf->scr1_pipe_ialu__DOT__shft_res));
    }
    if ((0x20000000U & (vlSelf->scr1_pipe_ialu__DOT__shft_res 
                        ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__shft_res))) {
        ++(vlSymsp->__Vcoverage[312]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__shft_res 
            = ((0xdfffffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__shft_res) 
               | (0x20000000U & vlSelf->scr1_pipe_ialu__DOT__shft_res));
    }
    if ((0x40000000U & (vlSelf->scr1_pipe_ialu__DOT__shft_res 
                        ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__shft_res))) {
        ++(vlSymsp->__Vcoverage[313]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__shft_res 
            = ((0xbfffffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__shft_res) 
               | (0x40000000U & vlSelf->scr1_pipe_ialu__DOT__shft_res));
    }
    if (((vlSelf->scr1_pipe_ialu__DOT__shft_res ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__shft_res) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[314]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__shft_res 
            = ((0x7fffffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__shft_res) 
               | (0x80000000U & vlSelf->scr1_pipe_ialu__DOT__shft_res));
    }
    if (((IData)(vlSelf->scr1_pipe_ialu__DOT__mdu_iter_req) 
         ^ (IData)(vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_req))) {
        ++(vlSymsp->__Vcoverage[316]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_req 
            = vlSelf->scr1_pipe_ialu__DOT__mdu_iter_req;
    }
    if ((1U & (vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt_next 
               ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt_next))) {
        ++(vlSymsp->__Vcoverage[737]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt_next 
            = ((0xfffffffeU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt_next) 
               | (1U & vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt_next));
    }
    if ((2U & (vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt_next 
               ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt_next))) {
        ++(vlSymsp->__Vcoverage[738]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt_next 
            = ((0xfffffffdU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt_next) 
               | (2U & vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt_next));
    }
    if ((4U & (vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt_next 
               ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt_next))) {
        ++(vlSymsp->__Vcoverage[739]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt_next 
            = ((0xfffffffbU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt_next) 
               | (4U & vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt_next));
    }
    if ((8U & (vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt_next 
               ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt_next))) {
        ++(vlSymsp->__Vcoverage[740]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt_next 
            = ((0xfffffff7U & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt_next) 
               | (8U & vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt_next));
    }
    if ((0x10U & (vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt_next 
                  ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt_next))) {
        ++(vlSymsp->__Vcoverage[741]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt_next 
            = ((0xffffffefU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt_next) 
               | (0x10U & vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt_next));
    }
    if ((0x20U & (vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt_next 
                  ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt_next))) {
        ++(vlSymsp->__Vcoverage[742]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt_next 
            = ((0xffffffdfU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt_next) 
               | (0x20U & vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt_next));
    }
    if (vlSelf->exu2ialu_rvm_cmd_vd_i) {
        ++(vlSymsp->__Vcoverage[913]);
        if ((0U != (IData)(vlSelf->scr1_pipe_ialu__DOT__mdu_fsm_ff))) {
            if ((1U != (IData)(vlSelf->scr1_pipe_ialu__DOT__mdu_fsm_ff))) {
                if ((2U == (IData)(vlSelf->scr1_pipe_ialu__DOT__mdu_fsm_ff))) {
                    ++(vlSymsp->__Vcoverage[912]);
                }
            }
            if ((1U == (IData)(vlSelf->scr1_pipe_ialu__DOT__mdu_fsm_ff))) {
                ++(vlSymsp->__Vcoverage[911]);
            }
        }
        if ((0U == (IData)(vlSelf->scr1_pipe_ialu__DOT__mdu_fsm_ff))) {
            ++(vlSymsp->__Vcoverage[910]);
        }
    }
    if ((0x40U & (vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt_next 
                  ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt_next))) {
        ++(vlSymsp->__Vcoverage[743]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt_next 
            = ((0xffffffbfU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt_next) 
               | (0x40U & vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt_next));
    }
    if ((0x80U & (vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt_next 
                  ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt_next))) {
        ++(vlSymsp->__Vcoverage[744]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt_next 
            = ((0xffffff7fU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt_next) 
               | (0x80U & vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt_next));
    }
    if ((0x100U & (vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt_next 
                   ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt_next))) {
        ++(vlSymsp->__Vcoverage[745]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt_next 
            = ((0xfffffeffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt_next) 
               | (0x100U & vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt_next));
    }
    if ((0x200U & (vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt_next 
                   ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt_next))) {
        ++(vlSymsp->__Vcoverage[746]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt_next 
            = ((0xfffffdffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt_next) 
               | (0x200U & vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt_next));
    }
    if ((0x400U & (vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt_next 
                   ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt_next))) {
        ++(vlSymsp->__Vcoverage[747]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt_next 
            = ((0xfffffbffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt_next) 
               | (0x400U & vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt_next));
    }
    if ((0x800U & (vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt_next 
                   ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt_next))) {
        ++(vlSymsp->__Vcoverage[748]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt_next 
            = ((0xfffff7ffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt_next) 
               | (0x800U & vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt_next));
    }
    if ((0x1000U & (vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt_next 
                    ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt_next))) {
        ++(vlSymsp->__Vcoverage[749]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt_next 
            = ((0xffffefffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt_next) 
               | (0x1000U & vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt_next));
    }
    if ((0x2000U & (vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt_next 
                    ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt_next))) {
        ++(vlSymsp->__Vcoverage[750]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt_next 
            = ((0xffffdfffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt_next) 
               | (0x2000U & vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt_next));
    }
    if ((0x4000U & (vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt_next 
                    ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt_next))) {
        ++(vlSymsp->__Vcoverage[751]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt_next 
            = ((0xffffbfffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt_next) 
               | (0x4000U & vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt_next));
    }
    if ((0x8000U & (vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt_next 
                    ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt_next))) {
        ++(vlSymsp->__Vcoverage[752]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt_next 
            = ((0xffff7fffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt_next) 
               | (0x8000U & vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt_next));
    }
    if ((0x10000U & (vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt_next 
                     ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt_next))) {
        ++(vlSymsp->__Vcoverage[753]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt_next 
            = ((0xfffeffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt_next) 
               | (0x10000U & vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt_next));
    }
    if ((0x20000U & (vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt_next 
                     ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt_next))) {
        ++(vlSymsp->__Vcoverage[754]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt_next 
            = ((0xfffdffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt_next) 
               | (0x20000U & vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt_next));
    }
    if ((0x40000U & (vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt_next 
                     ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt_next))) {
        ++(vlSymsp->__Vcoverage[755]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt_next 
            = ((0xfffbffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt_next) 
               | (0x40000U & vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt_next));
    }
    if ((0x80000U & (vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt_next 
                     ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt_next))) {
        ++(vlSymsp->__Vcoverage[756]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt_next 
            = ((0xfff7ffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt_next) 
               | (0x80000U & vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt_next));
    }
    if ((0x100000U & (vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt_next 
                      ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt_next))) {
        ++(vlSymsp->__Vcoverage[757]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt_next 
            = ((0xffefffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt_next) 
               | (0x100000U & vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt_next));
    }
    if ((0x200000U & (vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt_next 
                      ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt_next))) {
        ++(vlSymsp->__Vcoverage[758]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt_next 
            = ((0xffdfffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt_next) 
               | (0x200000U & vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt_next));
    }
    if ((0x400000U & (vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt_next 
                      ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt_next))) {
        ++(vlSymsp->__Vcoverage[759]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt_next 
            = ((0xffbfffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt_next) 
               | (0x400000U & vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt_next));
    }
    if ((0x800000U & (vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt_next 
                      ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt_next))) {
        ++(vlSymsp->__Vcoverage[760]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt_next 
            = ((0xff7fffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt_next) 
               | (0x800000U & vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt_next));
    }
    if ((0x1000000U & (vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt_next 
                       ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt_next))) {
        ++(vlSymsp->__Vcoverage[761]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt_next 
            = ((0xfeffffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt_next) 
               | (0x1000000U & vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt_next));
    }
    if ((0x2000000U & (vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt_next 
                       ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt_next))) {
        ++(vlSymsp->__Vcoverage[762]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt_next 
            = ((0xfdffffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt_next) 
               | (0x2000000U & vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt_next));
    }
    if ((0x4000000U & (vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt_next 
                       ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt_next))) {
        ++(vlSymsp->__Vcoverage[763]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt_next 
            = ((0xfbffffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt_next) 
               | (0x4000000U & vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt_next));
    }
    if ((0x8000000U & (vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt_next 
                       ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt_next))) {
        ++(vlSymsp->__Vcoverage[764]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt_next 
            = ((0xf7ffffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt_next) 
               | (0x8000000U & vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt_next));
    }
    if ((0x10000000U & (vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt_next 
                        ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt_next))) {
        ++(vlSymsp->__Vcoverage[765]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt_next 
            = ((0xefffffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt_next) 
               | (0x10000000U & vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt_next));
    }
    if ((0x20000000U & (vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt_next 
                        ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt_next))) {
        ++(vlSymsp->__Vcoverage[766]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt_next 
            = ((0xdfffffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt_next) 
               | (0x20000000U & vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt_next));
    }
    if ((0x40000000U & (vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt_next 
                        ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt_next))) {
        ++(vlSymsp->__Vcoverage[767]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt_next 
            = ((0xbfffffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt_next) 
               | (0x40000000U & vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt_next));
    }
    if (((vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt_next 
          ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt_next) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[768]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt_next 
            = ((0x7fffffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt_next) 
               | (0x80000000U & vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt_next));
    }
    if ((1U & (vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_next 
               ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_next))) {
        ++(vlSymsp->__Vcoverage[573]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_next 
            = ((0xfffffffeU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_next) 
               | (1U & vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_next));
    }
    if ((2U & (vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_next 
               ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_next))) {
        ++(vlSymsp->__Vcoverage[574]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_next 
            = ((0xfffffffdU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_next) 
               | (2U & vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_next));
    }
    if ((4U & (vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_next 
               ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_next))) {
        ++(vlSymsp->__Vcoverage[575]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_next 
            = ((0xfffffffbU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_next) 
               | (4U & vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_next));
    }
    if ((8U & (vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_next 
               ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_next))) {
        ++(vlSymsp->__Vcoverage[576]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_next 
            = ((0xfffffff7U & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_next) 
               | (8U & vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_next));
    }
    if ((0x10U & (vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_next 
                  ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_next))) {
        ++(vlSymsp->__Vcoverage[577]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_next 
            = ((0xffffffefU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_next) 
               | (0x10U & vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_next));
    }
    if ((0x20U & (vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_next 
                  ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_next))) {
        ++(vlSymsp->__Vcoverage[578]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_next 
            = ((0xffffffdfU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_next) 
               | (0x20U & vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_next));
    }
    if ((0x40U & (vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_next 
                  ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_next))) {
        ++(vlSymsp->__Vcoverage[579]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_next 
            = ((0xffffffbfU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_next) 
               | (0x40U & vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_next));
    }
    if ((0x80U & (vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_next 
                  ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_next))) {
        ++(vlSymsp->__Vcoverage[580]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_next 
            = ((0xffffff7fU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_next) 
               | (0x80U & vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_next));
    }
    if ((0x100U & (vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_next 
                   ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_next))) {
        ++(vlSymsp->__Vcoverage[581]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_next 
            = ((0xfffffeffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_next) 
               | (0x100U & vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_next));
    }
    if ((0x200U & (vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_next 
                   ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_next))) {
        ++(vlSymsp->__Vcoverage[582]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_next 
            = ((0xfffffdffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_next) 
               | (0x200U & vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_next));
    }
    if ((0x400U & (vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_next 
                   ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_next))) {
        ++(vlSymsp->__Vcoverage[583]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_next 
            = ((0xfffffbffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_next) 
               | (0x400U & vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_next));
    }
    if ((0x800U & (vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_next 
                   ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_next))) {
        ++(vlSymsp->__Vcoverage[584]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_next 
            = ((0xfffff7ffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_next) 
               | (0x800U & vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_next));
    }
    if ((0x1000U & (vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_next 
                    ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_next))) {
        ++(vlSymsp->__Vcoverage[585]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_next 
            = ((0xffffefffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_next) 
               | (0x1000U & vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_next));
    }
    if ((0x2000U & (vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_next 
                    ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_next))) {
        ++(vlSymsp->__Vcoverage[586]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_next 
            = ((0xffffdfffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_next) 
               | (0x2000U & vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_next));
    }
    if ((0x4000U & (vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_next 
                    ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_next))) {
        ++(vlSymsp->__Vcoverage[587]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_next 
            = ((0xffffbfffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_next) 
               | (0x4000U & vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_next));
    }
    if ((0x8000U & (vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_next 
                    ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_next))) {
        ++(vlSymsp->__Vcoverage[588]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_next 
            = ((0xffff7fffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_next) 
               | (0x8000U & vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_next));
    }
    if ((0x10000U & (vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_next 
                     ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_next))) {
        ++(vlSymsp->__Vcoverage[589]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_next 
            = ((0xfffeffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_next) 
               | (0x10000U & vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_next));
    }
    if ((0x20000U & (vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_next 
                     ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_next))) {
        ++(vlSymsp->__Vcoverage[590]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_next 
            = ((0xfffdffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_next) 
               | (0x20000U & vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_next));
    }
    if ((0x40000U & (vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_next 
                     ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_next))) {
        ++(vlSymsp->__Vcoverage[591]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_next 
            = ((0xfffbffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_next) 
               | (0x40000U & vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_next));
    }
    if ((0x80000U & (vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_next 
                     ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_next))) {
        ++(vlSymsp->__Vcoverage[592]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_next 
            = ((0xfff7ffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_next) 
               | (0x80000U & vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_next));
    }
    if ((0x100000U & (vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_next 
                      ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_next))) {
        ++(vlSymsp->__Vcoverage[593]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_next 
            = ((0xffefffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_next) 
               | (0x100000U & vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_next));
    }
    if ((0x200000U & (vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_next 
                      ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_next))) {
        ++(vlSymsp->__Vcoverage[594]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_next 
            = ((0xffdfffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_next) 
               | (0x200000U & vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_next));
    }
    if ((0x400000U & (vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_next 
                      ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_next))) {
        ++(vlSymsp->__Vcoverage[595]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_next 
            = ((0xffbfffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_next) 
               | (0x400000U & vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_next));
    }
    if ((0x800000U & (vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_next 
                      ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_next))) {
        ++(vlSymsp->__Vcoverage[596]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_next 
            = ((0xff7fffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_next) 
               | (0x800000U & vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_next));
    }
    if ((0x1000000U & (vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_next 
                       ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_next))) {
        ++(vlSymsp->__Vcoverage[597]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_next 
            = ((0xfeffffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_next) 
               | (0x1000000U & vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_next));
    }
    if ((0x2000000U & (vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_next 
                       ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_next))) {
        ++(vlSymsp->__Vcoverage[598]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_next 
            = ((0xfdffffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_next) 
               | (0x2000000U & vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_next));
    }
    if ((0x4000000U & (vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_next 
                       ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_next))) {
        ++(vlSymsp->__Vcoverage[599]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_next 
            = ((0xfbffffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_next) 
               | (0x4000000U & vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_next));
    }
    if ((0x8000000U & (vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_next 
                       ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_next))) {
        ++(vlSymsp->__Vcoverage[600]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_next 
            = ((0xf7ffffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_next) 
               | (0x8000000U & vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_next));
    }
    if ((0x10000000U & (vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_next 
                        ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_next))) {
        ++(vlSymsp->__Vcoverage[601]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_next 
            = ((0xefffffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_next) 
               | (0x10000000U & vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_next));
    }
    if ((0x20000000U & (vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_next 
                        ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_next))) {
        ++(vlSymsp->__Vcoverage[602]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_next 
            = ((0xdfffffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_next) 
               | (0x20000000U & vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_next));
    }
    if ((0x40000000U & (vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_next 
                        ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_next))) {
        ++(vlSymsp->__Vcoverage[603]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_next 
            = ((0xbfffffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_next) 
               | (0x40000000U & vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_next));
    }
    if (((vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_next 
          ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_next) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[604]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_next 
            = ((0x7fffffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_next) 
               | (0x80000000U & vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_next));
    }
    if ((1U & (~ (IData)(vlSelf->scr1_pipe_ialu__DOT____VdfgExtracted_h4eb2c666__0)))) {
        ++(vlSymsp->__Vcoverage[917]);
    }
    if (((IData)(vlSelf->scr1_pipe_ialu__DOT__div_cmd_div) 
         ^ (IData)(vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_cmd_div))) {
        ++(vlSymsp->__Vcoverage[335]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_cmd_div 
            = vlSelf->scr1_pipe_ialu__DOT__div_cmd_div;
    }
    vlSelf->scr1_pipe_ialu__DOT__div_corr_req = ((IData)(vlSelf->scr1_pipe_ialu__DOT__div_cmd_div) 
                                                 & (IData)(vlSelf->scr1_pipe_ialu__DOT__main_ops_diff_sgn));
    if (((IData)(vlSelf->scr1_pipe_ialu__DOT__div_op2_is_neg) 
         ^ (IData)(vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_op2_is_neg))) {
        ++(vlSymsp->__Vcoverage[473]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_op2_is_neg 
            = vlSelf->scr1_pipe_ialu__DOT__div_op2_is_neg;
    }
    if (((IData)(vlSelf->scr1_pipe_ialu__DOT__div_op1_is_neg) 
         ^ (IData)(vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_op1_is_neg))) {
        ++(vlSymsp->__Vcoverage[472]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_op1_is_neg 
            = vlSelf->scr1_pipe_ialu__DOT__div_op1_is_neg;
    }
    if (((IData)(vlSelf->scr1_pipe_ialu__DOT__mul_op2_sgn) 
         ^ (IData)(vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_op2_sgn))) {
        ++(vlSymsp->__Vcoverage[340]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_op2_sgn 
            = vlSelf->scr1_pipe_ialu__DOT__mul_op2_sgn;
    }
    if (((IData)(vlSelf->scr1_pipe_ialu__DOT__mul_cmd_hi) 
         ^ (IData)(vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_cmd_hi))) {
        ++(vlSymsp->__Vcoverage[332]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_cmd_hi 
            = vlSelf->scr1_pipe_ialu__DOT__mul_cmd_hi;
    }
    if (((IData)(vlSelf->scr1_pipe_ialu__DOT__mul_op1_is_sgn) 
         ^ (IData)(vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_op1_is_sgn))) {
        ++(vlSymsp->__Vcoverage[337]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_op1_is_sgn 
            = vlSelf->scr1_pipe_ialu__DOT__mul_op1_is_sgn;
    }
    vlSelf->scr1_pipe_ialu__DOT__mul_op1_sgn = ((IData)(vlSelf->scr1_pipe_ialu__DOT__mul_op1_is_sgn) 
                                                & (vlSelf->exu2ialu_main_op1_i 
                                                   >> 0x1fU));
    vlSelf->scr1_pipe_ialu__DOT__mdu_cmd = ((IData)(vlSelf->scr1_pipe_ialu__DOT__mdu_cmd_is_iter)
                                             ? 2U : 
                                            ((IData)(vlSelf->scr1_pipe_ialu__DOT__mdu_cmd_mul)
                                              ? 1U : 0U));
    if ((2U != (IData)(vlSelf->scr1_pipe_ialu__DOT__mdu_cmd))) {
        ++(vlSymsp->__Vcoverage[923]);
    }
    if ((1U & ((IData)(vlSelf->scr1_pipe_ialu__DOT__mdu_cmd) 
               ^ (IData)(vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_cmd)))) {
        ++(vlSymsp->__Vcoverage[327]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_cmd 
            = ((2U & (IData)(vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_cmd)) 
               | (1U & (IData)(vlSelf->scr1_pipe_ialu__DOT__mdu_cmd)));
    }
    if ((2U & ((IData)(vlSelf->scr1_pipe_ialu__DOT__mdu_cmd) 
               ^ (IData)(vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_cmd)))) {
        ++(vlSymsp->__Vcoverage[328]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_cmd 
            = ((1U & (IData)(vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_cmd)) 
               | (2U & (IData)(vlSelf->scr1_pipe_ialu__DOT__mdu_cmd)));
    }
    vlSelf->scr1_pipe_ialu__DOT__mdu_sum_sub = 0U;
    vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op1 = 0ULL;
    vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op2 = 0ULL;
    if ((2U == (IData)(vlSelf->scr1_pipe_ialu__DOT__mdu_cmd))) {
        ++(vlSymsp->__Vcoverage[922]);
        if (vlSelf->scr1_pipe_ialu__DOT__mdu_fsm_corr) {
            vlSelf->scr1_pipe_ialu__DOT__unnamedblk1__DOT__sgn 
                = (1U & ((IData)(vlSelf->scr1_pipe_ialu__DOT__div_op1_is_neg) 
                         ^ (IData)(vlSelf->scr1_pipe_ialu__DOT__mdu_res_c_ff)));
            vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op1 
                = (0x1ffffffffULL & (QData)((IData)(vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_ff)));
        } else {
            vlSelf->scr1_pipe_ialu__DOT__unnamedblk1__DOT__sgn 
                = (1U & ((~ (IData)(vlSelf->scr1_pipe_ialu__DOT__mdu_fsm_idle)) 
                         & (~ vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_ff)));
            vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op1 
                = (0x1ffffffffULL & ((IData)(vlSelf->scr1_pipe_ialu__DOT__mdu_fsm_idle)
                                      ? VL_EXTENDS_QI(33,2, 
                                                      (((IData)(vlSelf->scr1_pipe_ialu__DOT__div_op1_is_neg) 
                                                        << 1U) 
                                                       | (vlSelf->exu2ialu_main_op1_i 
                                                          >> 0x1fU)))
                                      : (((QData)((IData)(vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_ff)) 
                                          << 1U) | (QData)((IData)(
                                                                   (vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_ff 
                                                                    >> 0x1fU))))));
        }
        vlSelf->scr1_pipe_ialu__DOT__unnamedblk1__DOT__inv 
            = ((IData)(vlSelf->scr1_pipe_ialu__DOT__div_ops_are_sgn) 
               & (IData)(vlSelf->scr1_pipe_ialu__DOT__main_ops_diff_sgn));
        vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op2 = 
            (((QData)((IData)(vlSelf->scr1_pipe_ialu__DOT__div_op2_is_neg)) 
              << 0x20U) | (QData)((IData)(vlSelf->exu2ialu_main_op2_i)));
        vlSelf->scr1_pipe_ialu__DOT__mdu_sum_sub = 
            (1U ^ ((IData)(vlSelf->scr1_pipe_ialu__DOT__unnamedblk1__DOT__inv) 
                   ^ (IData)(vlSelf->scr1_pipe_ialu__DOT__unnamedblk1__DOT__sgn)));
    }
    vlSelf->scr1_pipe_ialu__DOT__mdu_sum_res = (0x1ffffffffULL 
                                                & ((IData)(vlSelf->scr1_pipe_ialu__DOT__mdu_sum_sub)
                                                    ? 
                                                   (vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op1 
                                                    - vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op2)
                                                    : 
                                                   (vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op1 
                                                    + vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op2)));
    if (((IData)(vlSelf->scr1_pipe_ialu__DOT__div_corr_req) 
         ^ (IData)(vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_corr_req))) {
        ++(vlSymsp->__Vcoverage[319]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_corr_req 
            = vlSelf->scr1_pipe_ialu__DOT__div_corr_req;
    }
    vlSelf->scr1_pipe_ialu__DOT__mul_op2 = ((IData)(vlSelf->scr1_pipe_ialu__DOT__mdu_cmd_mul)
                                             ? (((QData)((IData)(vlSelf->scr1_pipe_ialu__DOT__mul_op2_sgn)) 
                                                 << 0x20U) 
                                                | (QData)((IData)(vlSelf->exu2ialu_main_op2_i)))
                                             : 0ULL);
    if ((1U & ((IData)(vlSelf->scr1_pipe_ialu__DOT__mul_op2) 
               ^ (IData)(vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_op2)))) {
        ++(vlSymsp->__Vcoverage[374]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_op2 
            = ((0x1fffffffeULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_op2) 
               | (IData)((IData)((1U & (IData)(vlSelf->scr1_pipe_ialu__DOT__mul_op2)))));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mul_op2 
                        >> 1U)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_op2 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[375]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_op2 
            = ((0x1fffffffdULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_op2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mul_op2 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mul_op2 
                        >> 2U)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_op2 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[376]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_op2 
            = ((0x1fffffffbULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_op2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mul_op2 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mul_op2 
                        >> 3U)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_op2 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[377]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_op2 
            = ((0x1fffffff7ULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_op2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mul_op2 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mul_op2 
                        >> 4U)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_op2 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[378]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_op2 
            = ((0x1ffffffefULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_op2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mul_op2 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mul_op2 
                        >> 5U)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_op2 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[379]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_op2 
            = ((0x1ffffffdfULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_op2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mul_op2 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mul_op2 
                        >> 6U)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_op2 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[380]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_op2 
            = ((0x1ffffffbfULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_op2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mul_op2 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mul_op2 
                        >> 7U)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_op2 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[381]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_op2 
            = ((0x1ffffff7fULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_op2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mul_op2 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mul_op2 
                        >> 8U)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_op2 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[382]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_op2 
            = ((0x1fffffeffULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_op2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mul_op2 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mul_op2 
                        >> 9U)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_op2 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[383]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_op2 
            = ((0x1fffffdffULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_op2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mul_op2 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mul_op2 
                        >> 0xaU)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_op2 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[384]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_op2 
            = ((0x1fffffbffULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_op2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mul_op2 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mul_op2 
                        >> 0xbU)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_op2 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[385]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_op2 
            = ((0x1fffff7ffULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_op2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mul_op2 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mul_op2 
                        >> 0xcU)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_op2 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[386]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_op2 
            = ((0x1ffffefffULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_op2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mul_op2 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mul_op2 
                        >> 0xdU)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_op2 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[387]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_op2 
            = ((0x1ffffdfffULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_op2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mul_op2 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mul_op2 
                        >> 0xeU)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_op2 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[388]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_op2 
            = ((0x1ffffbfffULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_op2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mul_op2 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mul_op2 
                        >> 0xfU)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_op2 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[389]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_op2 
            = ((0x1ffff7fffULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_op2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mul_op2 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mul_op2 
                        >> 0x10U)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_op2 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[390]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_op2 
            = ((0x1fffeffffULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_op2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mul_op2 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mul_op2 
                        >> 0x11U)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_op2 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[391]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_op2 
            = ((0x1fffdffffULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_op2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mul_op2 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mul_op2 
                        >> 0x12U)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_op2 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[392]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_op2 
            = ((0x1fffbffffULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_op2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mul_op2 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mul_op2 
                        >> 0x13U)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_op2 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[393]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_op2 
            = ((0x1fff7ffffULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_op2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mul_op2 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mul_op2 
                        >> 0x14U)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_op2 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[394]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_op2 
            = ((0x1ffefffffULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_op2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mul_op2 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mul_op2 
                        >> 0x15U)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_op2 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[395]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_op2 
            = ((0x1ffdfffffULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_op2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mul_op2 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mul_op2 
                        >> 0x16U)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_op2 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[396]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_op2 
            = ((0x1ffbfffffULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_op2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mul_op2 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mul_op2 
                        >> 0x17U)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_op2 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[397]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_op2 
            = ((0x1ff7fffffULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_op2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mul_op2 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mul_op2 
                        >> 0x18U)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_op2 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[398]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_op2 
            = ((0x1feffffffULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_op2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mul_op2 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mul_op2 
                        >> 0x19U)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_op2 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[399]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_op2 
            = ((0x1fdffffffULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_op2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mul_op2 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mul_op2 
                        >> 0x1aU)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_op2 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[400]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_op2 
            = ((0x1fbffffffULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_op2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mul_op2 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mul_op2 
                        >> 0x1bU)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_op2 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[401]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_op2 
            = ((0x1f7ffffffULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_op2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mul_op2 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mul_op2 
                        >> 0x1cU)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_op2 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[402]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_op2 
            = ((0x1efffffffULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_op2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mul_op2 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mul_op2 
                        >> 0x1dU)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_op2 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[403]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_op2 
            = ((0x1dfffffffULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_op2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mul_op2 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mul_op2 
                        >> 0x1eU)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_op2 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[404]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_op2 
            = ((0x1bfffffffULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_op2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mul_op2 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mul_op2 
                        >> 0x1fU)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_op2 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[405]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_op2 
            = ((0x17fffffffULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_op2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mul_op2 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mul_op2 
                        >> 0x20U)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_op2 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[406]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_op2 
            = ((0xffffffffULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_op2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mul_op2 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if (((IData)(vlSelf->scr1_pipe_ialu__DOT__mul_op1_sgn) 
         ^ (IData)(vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_op1_sgn))) {
        ++(vlSymsp->__Vcoverage[339]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_op1_sgn 
            = vlSelf->scr1_pipe_ialu__DOT__mul_op1_sgn;
    }
    if (((IData)(vlSelf->scr1_pipe_ialu__DOT__mdu_sum_sub) 
         ^ (IData)(vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_sub))) {
        ++(vlSymsp->__Vcoverage[605]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_sub 
            = vlSelf->scr1_pipe_ialu__DOT__mdu_sum_sub;
    }
    if ((1U & ((IData)(vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op1) 
               ^ (IData)(vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op1)))) {
        ++(vlSymsp->__Vcoverage[606]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op1 
            = ((0x1fffffffeULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op1) 
               | (IData)((IData)((1U & (IData)(vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op1)))));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op1 
                        >> 1U)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op1 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[607]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op1 
            = ((0x1fffffffdULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op1 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op1 
                        >> 2U)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op1 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[608]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op1 
            = ((0x1fffffffbULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op1 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op1 
                        >> 3U)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op1 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[609]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op1 
            = ((0x1fffffff7ULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op1 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op1 
                        >> 4U)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op1 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[610]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op1 
            = ((0x1ffffffefULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op1 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op1 
                        >> 5U)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op1 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[611]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op1 
            = ((0x1ffffffdfULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op1 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op1 
                        >> 6U)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op1 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[612]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op1 
            = ((0x1ffffffbfULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op1 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op1 
                        >> 7U)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op1 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[613]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op1 
            = ((0x1ffffff7fULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op1 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op1 
                        >> 8U)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op1 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[614]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op1 
            = ((0x1fffffeffULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op1 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op1 
                        >> 9U)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op1 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[615]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op1 
            = ((0x1fffffdffULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op1 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op1 
                        >> 0xaU)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op1 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[616]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op1 
            = ((0x1fffffbffULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op1 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op1 
                        >> 0xbU)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op1 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[617]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op1 
            = ((0x1fffff7ffULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op1 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op1 
                        >> 0xcU)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op1 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[618]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op1 
            = ((0x1ffffefffULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op1 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op1 
                        >> 0xdU)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op1 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[619]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op1 
            = ((0x1ffffdfffULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op1 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op1 
                        >> 0xeU)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op1 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[620]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op1 
            = ((0x1ffffbfffULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op1 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op1 
                        >> 0xfU)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op1 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[621]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op1 
            = ((0x1ffff7fffULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op1 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op1 
                        >> 0x10U)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op1 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[622]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op1 
            = ((0x1fffeffffULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op1 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op1 
                        >> 0x11U)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op1 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[623]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op1 
            = ((0x1fffdffffULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op1 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op1 
                        >> 0x12U)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op1 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[624]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op1 
            = ((0x1fffbffffULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op1 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op1 
                        >> 0x13U)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op1 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[625]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op1 
            = ((0x1fff7ffffULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op1 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op1 
                        >> 0x14U)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op1 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[626]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op1 
            = ((0x1ffefffffULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op1 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op1 
                        >> 0x15U)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op1 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[627]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op1 
            = ((0x1ffdfffffULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op1 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op1 
                        >> 0x16U)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op1 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[628]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op1 
            = ((0x1ffbfffffULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op1 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op1 
                        >> 0x17U)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op1 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[629]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op1 
            = ((0x1ff7fffffULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op1 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op1 
                        >> 0x18U)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op1 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[630]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op1 
            = ((0x1feffffffULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op1 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op1 
                        >> 0x19U)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op1 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[631]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op1 
            = ((0x1fdffffffULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op1 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op1 
                        >> 0x1aU)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op1 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[632]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op1 
            = ((0x1fbffffffULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op1 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op1 
                        >> 0x1bU)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op1 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[633]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op1 
            = ((0x1f7ffffffULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op1 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op1 
                        >> 0x1cU)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op1 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[634]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op1 
            = ((0x1efffffffULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op1 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op1 
                        >> 0x1dU)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op1 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[635]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op1 
            = ((0x1dfffffffULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op1 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op1 
                        >> 0x1eU)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op1 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[636]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op1 
            = ((0x1bfffffffULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op1 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op1 
                        >> 0x1fU)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op1 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[637]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op1 
            = ((0x17fffffffULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op1 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op1 
                        >> 0x20U)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op1 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[638]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op1 
            = ((0xffffffffULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op1 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)(vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op2) 
               ^ (IData)(vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op2)))) {
        ++(vlSymsp->__Vcoverage[639]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op2 
            = ((0x1fffffffeULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op2) 
               | (IData)((IData)((1U & (IData)(vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op2)))));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op2 
                        >> 1U)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op2 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[640]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op2 
            = ((0x1fffffffdULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op2 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op2 
                        >> 2U)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op2 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[641]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op2 
            = ((0x1fffffffbULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op2 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op2 
                        >> 3U)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op2 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[642]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op2 
            = ((0x1fffffff7ULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op2 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op2 
                        >> 4U)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op2 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[643]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op2 
            = ((0x1ffffffefULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op2 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op2 
                        >> 5U)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op2 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[644]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op2 
            = ((0x1ffffffdfULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op2 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op2 
                        >> 6U)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op2 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[645]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op2 
            = ((0x1ffffffbfULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op2 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op2 
                        >> 7U)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op2 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[646]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op2 
            = ((0x1ffffff7fULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op2 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op2 
                        >> 8U)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op2 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[647]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op2 
            = ((0x1fffffeffULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op2 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op2 
                        >> 9U)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op2 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[648]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op2 
            = ((0x1fffffdffULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op2 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op2 
                        >> 0xaU)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op2 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[649]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op2 
            = ((0x1fffffbffULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op2 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op2 
                        >> 0xbU)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op2 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[650]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op2 
            = ((0x1fffff7ffULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op2 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op2 
                        >> 0xcU)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op2 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[651]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op2 
            = ((0x1ffffefffULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op2 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op2 
                        >> 0xdU)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op2 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[652]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op2 
            = ((0x1ffffdfffULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op2 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op2 
                        >> 0xeU)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op2 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[653]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op2 
            = ((0x1ffffbfffULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op2 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op2 
                        >> 0xfU)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op2 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[654]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op2 
            = ((0x1ffff7fffULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op2 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op2 
                        >> 0x10U)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op2 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[655]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op2 
            = ((0x1fffeffffULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op2 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op2 
                        >> 0x11U)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op2 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[656]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op2 
            = ((0x1fffdffffULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op2 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op2 
                        >> 0x12U)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op2 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[657]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op2 
            = ((0x1fffbffffULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op2 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op2 
                        >> 0x13U)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op2 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[658]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op2 
            = ((0x1fff7ffffULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op2 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op2 
                        >> 0x14U)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op2 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[659]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op2 
            = ((0x1ffefffffULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op2 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op2 
                        >> 0x15U)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op2 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[660]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op2 
            = ((0x1ffdfffffULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op2 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op2 
                        >> 0x16U)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op2 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[661]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op2 
            = ((0x1ffbfffffULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op2 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op2 
                        >> 0x17U)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op2 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[662]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op2 
            = ((0x1ff7fffffULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op2 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op2 
                        >> 0x18U)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op2 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[663]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op2 
            = ((0x1feffffffULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op2 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op2 
                        >> 0x19U)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op2 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[664]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op2 
            = ((0x1fdffffffULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op2 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op2 
                        >> 0x1aU)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op2 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[665]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op2 
            = ((0x1fbffffffULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op2 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op2 
                        >> 0x1bU)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op2 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[666]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op2 
            = ((0x1f7ffffffULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op2 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op2 
                        >> 0x1cU)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op2 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[667]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op2 
            = ((0x1efffffffULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op2 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op2 
                        >> 0x1dU)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op2 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[668]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op2 
            = ((0x1dfffffffULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op2 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op2 
                        >> 0x1eU)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op2 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[669]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op2 
            = ((0x1bfffffffULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op2 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op2 
                        >> 0x1fU)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op2 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[670]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op2 
            = ((0x17fffffffULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op2 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op2 
                        >> 0x20U)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op2 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[671]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op2 
            = ((0xffffffffULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op2 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)(vlSelf->scr1_pipe_ialu__DOT__mdu_sum_res) 
               ^ (IData)(vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_res)))) {
        ++(vlSymsp->__Vcoverage[672]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_res 
            = ((0x1fffffffeULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_res) 
               | (IData)((IData)((1U & (IData)(vlSelf->scr1_pipe_ialu__DOT__mdu_sum_res)))));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_res 
                        >> 1U)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_res 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[673]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_res 
            = ((0x1fffffffdULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_res 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_res 
                        >> 2U)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_res 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[674]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_res 
            = ((0x1fffffffbULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_res 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_res 
                        >> 3U)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_res 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[675]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_res 
            = ((0x1fffffff7ULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_res 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_res 
                        >> 4U)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_res 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[676]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_res 
            = ((0x1ffffffefULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_res 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_res 
                        >> 5U)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_res 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[677]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_res 
            = ((0x1ffffffdfULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_res 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_res 
                        >> 6U)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_res 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[678]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_res 
            = ((0x1ffffffbfULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_res 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_res 
                        >> 7U)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_res 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[679]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_res 
            = ((0x1ffffff7fULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_res 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_res 
                        >> 8U)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_res 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[680]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_res 
            = ((0x1fffffeffULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_res 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_res 
                        >> 9U)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_res 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[681]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_res 
            = ((0x1fffffdffULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_res 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_res 
                        >> 0xaU)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_res 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[682]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_res 
            = ((0x1fffffbffULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_res 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_res 
                        >> 0xbU)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_res 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[683]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_res 
            = ((0x1fffff7ffULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_res 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_res 
                        >> 0xcU)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_res 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[684]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_res 
            = ((0x1ffffefffULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_res 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_res 
                        >> 0xdU)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_res 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[685]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_res 
            = ((0x1ffffdfffULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_res 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_res 
                        >> 0xeU)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_res 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[686]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_res 
            = ((0x1ffffbfffULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_res 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_res 
                        >> 0xfU)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_res 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[687]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_res 
            = ((0x1ffff7fffULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_res 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_res 
                        >> 0x10U)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_res 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[688]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_res 
            = ((0x1fffeffffULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_res 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_res 
                        >> 0x11U)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_res 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[689]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_res 
            = ((0x1fffdffffULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_res 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_res 
                        >> 0x12U)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_res 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[690]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_res 
            = ((0x1fffbffffULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_res 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_res 
                        >> 0x13U)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_res 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[691]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_res 
            = ((0x1fff7ffffULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_res 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_res 
                        >> 0x14U)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_res 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[692]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_res 
            = ((0x1ffefffffULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_res 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_res 
                        >> 0x15U)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_res 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[693]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_res 
            = ((0x1ffdfffffULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_res 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_res 
                        >> 0x16U)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_res 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[694]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_res 
            = ((0x1ffbfffffULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_res 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_res 
                        >> 0x17U)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_res 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[695]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_res 
            = ((0x1ff7fffffULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_res 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_res 
                        >> 0x18U)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_res 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[696]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_res 
            = ((0x1feffffffULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_res 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_res 
                        >> 0x19U)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_res 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[697]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_res 
            = ((0x1fdffffffULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_res 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_res 
                        >> 0x1aU)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_res 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[698]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_res 
            = ((0x1fbffffffULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_res 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_res 
                        >> 0x1bU)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_res 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[699]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_res 
            = ((0x1f7ffffffULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_res 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_res 
                        >> 0x1cU)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_res 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[700]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_res 
            = ((0x1efffffffULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_res 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_res 
                        >> 0x1dU)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_res 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[701]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_res 
            = ((0x1dfffffffULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_res 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_res 
                        >> 0x1eU)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_res 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[702]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_res 
            = ((0x1bfffffffULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_res 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_res 
                        >> 0x1fU)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_res 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[703]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_res 
            = ((0x17fffffffULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_res 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_res 
                        >> 0x20U)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_res 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[704]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_res 
            = ((0xffffffffULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_res 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    vlSelf->scr1_pipe_ialu__DOT__div_res_rem = 0U;
    vlSelf->scr1_pipe_ialu__DOT__div_res_rem_c = 0U;
    vlSelf->scr1_pipe_ialu__DOT__div_res_quo = 0U;
    vlSelf->scr1_pipe_ialu__DOT__div_quo_bit = 0U;
    if (vlSelf->scr1_pipe_ialu__DOT____VdfgExtracted_h4eb2c666__0) {
        ++(vlSymsp->__Vcoverage[916]);
        vlSelf->scr1_pipe_ialu__DOT__div_res_rem = (IData)(vlSelf->scr1_pipe_ialu__DOT__mdu_sum_res);
        vlSelf->scr1_pipe_ialu__DOT__div_res_rem_c 
            = (1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_res 
                             >> 0x20U)));
        vlSelf->scr1_pipe_ialu__DOT__div_quo_bit = 
            (1U & ((~ ((IData)(vlSelf->scr1_pipe_ialu__DOT__div_op1_is_neg) 
                       ^ (IData)(vlSelf->scr1_pipe_ialu__DOT__div_res_rem_c))) 
                   | ((IData)(vlSelf->scr1_pipe_ialu__DOT__div_op1_is_neg) 
                      & (0U == ((vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_next 
                                 | (IData)(vlSelf->scr1_pipe_ialu__DOT__mdu_sum_res)) 
                                | (IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_res 
                                           >> 0x20U)))))));
        vlSelf->scr1_pipe_ialu__DOT__div_res_quo = 
            ((IData)(vlSelf->scr1_pipe_ialu__DOT__mdu_fsm_idle)
              ? (IData)(vlSelf->scr1_pipe_ialu__DOT__div_quo_bit)
              : ((vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_ff 
                  << 1U) | (IData)(vlSelf->scr1_pipe_ialu__DOT__div_quo_bit)));
    }
    if (vlSelf->scr1_pipe_ialu__DOT__mdu_cmd_is_iter) {
        vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_next 
            = vlSelf->scr1_pipe_ialu__DOT__div_res_rem;
        vlSelf->scr1_pipe_ialu__DOT__mdu_res_c_next 
            = vlSelf->scr1_pipe_ialu__DOT__div_res_rem_c;
        vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_next 
            = vlSelf->scr1_pipe_ialu__DOT__div_res_quo;
    } else {
        vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_next 
            = vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_ff;
        vlSelf->scr1_pipe_ialu__DOT__mdu_res_c_next 
            = vlSelf->scr1_pipe_ialu__DOT__mdu_res_c_ff;
        vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_next 
            = vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_ff;
    }
    vlSelf->scr1_pipe_ialu__DOT__mul_op1 = ((IData)(vlSelf->scr1_pipe_ialu__DOT__mdu_cmd_mul)
                                             ? (((QData)((IData)(vlSelf->scr1_pipe_ialu__DOT__mul_op1_sgn)) 
                                                 << 0x20U) 
                                                | (QData)((IData)(vlSelf->exu2ialu_main_op1_i)))
                                             : 0ULL);
    if ((1U & ((IData)(vlSelf->scr1_pipe_ialu__DOT__mul_op1) 
               ^ (IData)(vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_op1)))) {
        ++(vlSymsp->__Vcoverage[341]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_op1 
            = ((0x1fffffffeULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_op1) 
               | (IData)((IData)((1U & (IData)(vlSelf->scr1_pipe_ialu__DOT__mul_op1)))));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mul_op1 
                        >> 1U)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_op1 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[342]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_op1 
            = ((0x1fffffffdULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_op1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mul_op1 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mul_op1 
                        >> 2U)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_op1 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[343]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_op1 
            = ((0x1fffffffbULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_op1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mul_op1 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mul_op1 
                        >> 3U)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_op1 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[344]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_op1 
            = ((0x1fffffff7ULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_op1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mul_op1 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mul_op1 
                        >> 4U)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_op1 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[345]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_op1 
            = ((0x1ffffffefULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_op1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mul_op1 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mul_op1 
                        >> 5U)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_op1 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[346]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_op1 
            = ((0x1ffffffdfULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_op1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mul_op1 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mul_op1 
                        >> 6U)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_op1 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[347]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_op1 
            = ((0x1ffffffbfULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_op1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mul_op1 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mul_op1 
                        >> 7U)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_op1 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[348]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_op1 
            = ((0x1ffffff7fULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_op1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mul_op1 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mul_op1 
                        >> 8U)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_op1 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[349]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_op1 
            = ((0x1fffffeffULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_op1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mul_op1 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mul_op1 
                        >> 9U)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_op1 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[350]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_op1 
            = ((0x1fffffdffULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_op1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mul_op1 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mul_op1 
                        >> 0xaU)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_op1 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[351]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_op1 
            = ((0x1fffffbffULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_op1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mul_op1 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mul_op1 
                        >> 0xbU)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_op1 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[352]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_op1 
            = ((0x1fffff7ffULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_op1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mul_op1 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mul_op1 
                        >> 0xcU)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_op1 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[353]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_op1 
            = ((0x1ffffefffULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_op1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mul_op1 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mul_op1 
                        >> 0xdU)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_op1 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[354]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_op1 
            = ((0x1ffffdfffULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_op1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mul_op1 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mul_op1 
                        >> 0xeU)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_op1 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[355]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_op1 
            = ((0x1ffffbfffULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_op1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mul_op1 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mul_op1 
                        >> 0xfU)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_op1 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[356]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_op1 
            = ((0x1ffff7fffULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_op1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mul_op1 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mul_op1 
                        >> 0x10U)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_op1 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[357]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_op1 
            = ((0x1fffeffffULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_op1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mul_op1 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mul_op1 
                        >> 0x11U)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_op1 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[358]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_op1 
            = ((0x1fffdffffULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_op1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mul_op1 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mul_op1 
                        >> 0x12U)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_op1 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[359]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_op1 
            = ((0x1fffbffffULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_op1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mul_op1 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mul_op1 
                        >> 0x13U)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_op1 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[360]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_op1 
            = ((0x1fff7ffffULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_op1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mul_op1 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mul_op1 
                        >> 0x14U)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_op1 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[361]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_op1 
            = ((0x1ffefffffULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_op1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mul_op1 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mul_op1 
                        >> 0x15U)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_op1 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[362]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_op1 
            = ((0x1ffdfffffULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_op1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mul_op1 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mul_op1 
                        >> 0x16U)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_op1 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[363]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_op1 
            = ((0x1ffbfffffULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_op1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mul_op1 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mul_op1 
                        >> 0x17U)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_op1 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[364]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_op1 
            = ((0x1ff7fffffULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_op1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mul_op1 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mul_op1 
                        >> 0x18U)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_op1 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[365]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_op1 
            = ((0x1feffffffULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_op1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mul_op1 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mul_op1 
                        >> 0x19U)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_op1 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[366]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_op1 
            = ((0x1fdffffffULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_op1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mul_op1 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mul_op1 
                        >> 0x1aU)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_op1 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[367]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_op1 
            = ((0x1fbffffffULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_op1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mul_op1 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mul_op1 
                        >> 0x1bU)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_op1 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[368]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_op1 
            = ((0x1f7ffffffULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_op1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mul_op1 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mul_op1 
                        >> 0x1cU)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_op1 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[369]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_op1 
            = ((0x1efffffffULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_op1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mul_op1 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mul_op1 
                        >> 0x1dU)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_op1 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[370]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_op1 
            = ((0x1dfffffffULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_op1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mul_op1 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mul_op1 
                        >> 0x1eU)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_op1 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[371]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_op1 
            = ((0x1bfffffffULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_op1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mul_op1 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mul_op1 
                        >> 0x1fU)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_op1 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[372]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_op1 
            = ((0x17fffffffULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_op1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mul_op1 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mul_op1 
                        >> 0x20U)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_op1 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[373]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_op1 
            = ((0xffffffffULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_op1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mul_op1 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    scr1_pipe_ialu__DOT____VdfgTmp_h9863f6f0__0 = VL_MULS_QQQ(64, 
                                                              VL_EXTENDS_QQ(64,33, vlSelf->scr1_pipe_ialu__DOT__mul_op1), 
                                                              VL_EXTENDS_QQ(64,33, vlSelf->scr1_pipe_ialu__DOT__mul_op2));
    vlSelf->scr1_pipe_ialu__DOT__mul_res = ((IData)(vlSelf->scr1_pipe_ialu__DOT__mdu_cmd_mul)
                                             ? scr1_pipe_ialu__DOT____VdfgTmp_h9863f6f0__0
                                             : 0ULL);
    if ((1U & (vlSelf->scr1_pipe_ialu__DOT__div_res_rem 
               ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_rem))) {
        ++(vlSymsp->__Vcoverage[475]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_rem 
            = ((0xfffffffeU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_rem) 
               | (1U & vlSelf->scr1_pipe_ialu__DOT__div_res_rem));
    }
    if ((2U & (vlSelf->scr1_pipe_ialu__DOT__div_res_rem 
               ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_rem))) {
        ++(vlSymsp->__Vcoverage[476]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_rem 
            = ((0xfffffffdU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_rem) 
               | (2U & vlSelf->scr1_pipe_ialu__DOT__div_res_rem));
    }
    if ((4U & (vlSelf->scr1_pipe_ialu__DOT__div_res_rem 
               ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_rem))) {
        ++(vlSymsp->__Vcoverage[477]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_rem 
            = ((0xfffffffbU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_rem) 
               | (4U & vlSelf->scr1_pipe_ialu__DOT__div_res_rem));
    }
    if ((8U & (vlSelf->scr1_pipe_ialu__DOT__div_res_rem 
               ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_rem))) {
        ++(vlSymsp->__Vcoverage[478]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_rem 
            = ((0xfffffff7U & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_rem) 
               | (8U & vlSelf->scr1_pipe_ialu__DOT__div_res_rem));
    }
    if ((0x10U & (vlSelf->scr1_pipe_ialu__DOT__div_res_rem 
                  ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_rem))) {
        ++(vlSymsp->__Vcoverage[479]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_rem 
            = ((0xffffffefU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_rem) 
               | (0x10U & vlSelf->scr1_pipe_ialu__DOT__div_res_rem));
    }
    if ((0x20U & (vlSelf->scr1_pipe_ialu__DOT__div_res_rem 
                  ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_rem))) {
        ++(vlSymsp->__Vcoverage[480]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_rem 
            = ((0xffffffdfU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_rem) 
               | (0x20U & vlSelf->scr1_pipe_ialu__DOT__div_res_rem));
    }
    if ((0x40U & (vlSelf->scr1_pipe_ialu__DOT__div_res_rem 
                  ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_rem))) {
        ++(vlSymsp->__Vcoverage[481]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_rem 
            = ((0xffffffbfU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_rem) 
               | (0x40U & vlSelf->scr1_pipe_ialu__DOT__div_res_rem));
    }
    if ((0x80U & (vlSelf->scr1_pipe_ialu__DOT__div_res_rem 
                  ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_rem))) {
        ++(vlSymsp->__Vcoverage[482]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_rem 
            = ((0xffffff7fU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_rem) 
               | (0x80U & vlSelf->scr1_pipe_ialu__DOT__div_res_rem));
    }
    if ((0x100U & (vlSelf->scr1_pipe_ialu__DOT__div_res_rem 
                   ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_rem))) {
        ++(vlSymsp->__Vcoverage[483]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_rem 
            = ((0xfffffeffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_rem) 
               | (0x100U & vlSelf->scr1_pipe_ialu__DOT__div_res_rem));
    }
    if ((0x200U & (vlSelf->scr1_pipe_ialu__DOT__div_res_rem 
                   ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_rem))) {
        ++(vlSymsp->__Vcoverage[484]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_rem 
            = ((0xfffffdffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_rem) 
               | (0x200U & vlSelf->scr1_pipe_ialu__DOT__div_res_rem));
    }
    if ((0x400U & (vlSelf->scr1_pipe_ialu__DOT__div_res_rem 
                   ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_rem))) {
        ++(vlSymsp->__Vcoverage[485]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_rem 
            = ((0xfffffbffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_rem) 
               | (0x400U & vlSelf->scr1_pipe_ialu__DOT__div_res_rem));
    }
    if ((0x800U & (vlSelf->scr1_pipe_ialu__DOT__div_res_rem 
                   ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_rem))) {
        ++(vlSymsp->__Vcoverage[486]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_rem 
            = ((0xfffff7ffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_rem) 
               | (0x800U & vlSelf->scr1_pipe_ialu__DOT__div_res_rem));
    }
    if ((0x1000U & (vlSelf->scr1_pipe_ialu__DOT__div_res_rem 
                    ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_rem))) {
        ++(vlSymsp->__Vcoverage[487]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_rem 
            = ((0xffffefffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_rem) 
               | (0x1000U & vlSelf->scr1_pipe_ialu__DOT__div_res_rem));
    }
    if ((0x2000U & (vlSelf->scr1_pipe_ialu__DOT__div_res_rem 
                    ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_rem))) {
        ++(vlSymsp->__Vcoverage[488]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_rem 
            = ((0xffffdfffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_rem) 
               | (0x2000U & vlSelf->scr1_pipe_ialu__DOT__div_res_rem));
    }
    if ((0x4000U & (vlSelf->scr1_pipe_ialu__DOT__div_res_rem 
                    ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_rem))) {
        ++(vlSymsp->__Vcoverage[489]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_rem 
            = ((0xffffbfffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_rem) 
               | (0x4000U & vlSelf->scr1_pipe_ialu__DOT__div_res_rem));
    }
    if ((0x8000U & (vlSelf->scr1_pipe_ialu__DOT__div_res_rem 
                    ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_rem))) {
        ++(vlSymsp->__Vcoverage[490]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_rem 
            = ((0xffff7fffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_rem) 
               | (0x8000U & vlSelf->scr1_pipe_ialu__DOT__div_res_rem));
    }
    if ((0x10000U & (vlSelf->scr1_pipe_ialu__DOT__div_res_rem 
                     ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_rem))) {
        ++(vlSymsp->__Vcoverage[491]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_rem 
            = ((0xfffeffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_rem) 
               | (0x10000U & vlSelf->scr1_pipe_ialu__DOT__div_res_rem));
    }
    if ((0x20000U & (vlSelf->scr1_pipe_ialu__DOT__div_res_rem 
                     ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_rem))) {
        ++(vlSymsp->__Vcoverage[492]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_rem 
            = ((0xfffdffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_rem) 
               | (0x20000U & vlSelf->scr1_pipe_ialu__DOT__div_res_rem));
    }
    if ((0x40000U & (vlSelf->scr1_pipe_ialu__DOT__div_res_rem 
                     ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_rem))) {
        ++(vlSymsp->__Vcoverage[493]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_rem 
            = ((0xfffbffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_rem) 
               | (0x40000U & vlSelf->scr1_pipe_ialu__DOT__div_res_rem));
    }
    if ((0x80000U & (vlSelf->scr1_pipe_ialu__DOT__div_res_rem 
                     ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_rem))) {
        ++(vlSymsp->__Vcoverage[494]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_rem 
            = ((0xfff7ffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_rem) 
               | (0x80000U & vlSelf->scr1_pipe_ialu__DOT__div_res_rem));
    }
    if ((0x100000U & (vlSelf->scr1_pipe_ialu__DOT__div_res_rem 
                      ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_rem))) {
        ++(vlSymsp->__Vcoverage[495]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_rem 
            = ((0xffefffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_rem) 
               | (0x100000U & vlSelf->scr1_pipe_ialu__DOT__div_res_rem));
    }
    if ((0x200000U & (vlSelf->scr1_pipe_ialu__DOT__div_res_rem 
                      ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_rem))) {
        ++(vlSymsp->__Vcoverage[496]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_rem 
            = ((0xffdfffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_rem) 
               | (0x200000U & vlSelf->scr1_pipe_ialu__DOT__div_res_rem));
    }
    if ((0x400000U & (vlSelf->scr1_pipe_ialu__DOT__div_res_rem 
                      ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_rem))) {
        ++(vlSymsp->__Vcoverage[497]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_rem 
            = ((0xffbfffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_rem) 
               | (0x400000U & vlSelf->scr1_pipe_ialu__DOT__div_res_rem));
    }
    if ((0x800000U & (vlSelf->scr1_pipe_ialu__DOT__div_res_rem 
                      ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_rem))) {
        ++(vlSymsp->__Vcoverage[498]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_rem 
            = ((0xff7fffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_rem) 
               | (0x800000U & vlSelf->scr1_pipe_ialu__DOT__div_res_rem));
    }
    if ((0x1000000U & (vlSelf->scr1_pipe_ialu__DOT__div_res_rem 
                       ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_rem))) {
        ++(vlSymsp->__Vcoverage[499]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_rem 
            = ((0xfeffffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_rem) 
               | (0x1000000U & vlSelf->scr1_pipe_ialu__DOT__div_res_rem));
    }
    if ((0x2000000U & (vlSelf->scr1_pipe_ialu__DOT__div_res_rem 
                       ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_rem))) {
        ++(vlSymsp->__Vcoverage[500]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_rem 
            = ((0xfdffffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_rem) 
               | (0x2000000U & vlSelf->scr1_pipe_ialu__DOT__div_res_rem));
    }
    if ((0x4000000U & (vlSelf->scr1_pipe_ialu__DOT__div_res_rem 
                       ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_rem))) {
        ++(vlSymsp->__Vcoverage[501]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_rem 
            = ((0xfbffffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_rem) 
               | (0x4000000U & vlSelf->scr1_pipe_ialu__DOT__div_res_rem));
    }
    if ((0x8000000U & (vlSelf->scr1_pipe_ialu__DOT__div_res_rem 
                       ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_rem))) {
        ++(vlSymsp->__Vcoverage[502]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_rem 
            = ((0xf7ffffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_rem) 
               | (0x8000000U & vlSelf->scr1_pipe_ialu__DOT__div_res_rem));
    }
    if ((0x10000000U & (vlSelf->scr1_pipe_ialu__DOT__div_res_rem 
                        ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_rem))) {
        ++(vlSymsp->__Vcoverage[503]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_rem 
            = ((0xefffffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_rem) 
               | (0x10000000U & vlSelf->scr1_pipe_ialu__DOT__div_res_rem));
    }
    if ((0x20000000U & (vlSelf->scr1_pipe_ialu__DOT__div_res_rem 
                        ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_rem))) {
        ++(vlSymsp->__Vcoverage[504]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_rem 
            = ((0xdfffffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_rem) 
               | (0x20000000U & vlSelf->scr1_pipe_ialu__DOT__div_res_rem));
    }
    if ((0x40000000U & (vlSelf->scr1_pipe_ialu__DOT__div_res_rem 
                        ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_rem))) {
        ++(vlSymsp->__Vcoverage[505]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_rem 
            = ((0xbfffffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_rem) 
               | (0x40000000U & vlSelf->scr1_pipe_ialu__DOT__div_res_rem));
    }
    if (((vlSelf->scr1_pipe_ialu__DOT__div_res_rem 
          ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_rem) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[506]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_rem 
            = ((0x7fffffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_rem) 
               | (0x80000000U & vlSelf->scr1_pipe_ialu__DOT__div_res_rem));
    }
    if (((IData)(vlSelf->scr1_pipe_ialu__DOT__div_quo_bit) 
         ^ (IData)(vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_quo_bit))) {
        ++(vlSymsp->__Vcoverage[539]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_quo_bit 
            = vlSelf->scr1_pipe_ialu__DOT__div_quo_bit;
    }
    if (((IData)(vlSelf->scr1_pipe_ialu__DOT__div_res_rem_c) 
         ^ (IData)(vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_rem_c))) {
        ++(vlSymsp->__Vcoverage[474]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_rem_c 
            = vlSelf->scr1_pipe_ialu__DOT__div_res_rem_c;
    }
    vlSelf->scr1_pipe_ialu__DOT__rem_corr_req = ((IData)(vlSelf->scr1_pipe_ialu__DOT__div_cmd_rem) 
                                                 & ((0U 
                                                     != vlSelf->scr1_pipe_ialu__DOT__div_res_rem) 
                                                    & ((IData)(vlSelf->scr1_pipe_ialu__DOT__div_op1_is_neg) 
                                                       ^ (IData)(vlSelf->scr1_pipe_ialu__DOT__div_res_rem_c))));
    if ((1U & (vlSelf->scr1_pipe_ialu__DOT__div_res_quo 
               ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_quo))) {
        ++(vlSymsp->__Vcoverage[507]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_quo 
            = ((0xfffffffeU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_quo) 
               | (1U & vlSelf->scr1_pipe_ialu__DOT__div_res_quo));
    }
    if ((2U & (vlSelf->scr1_pipe_ialu__DOT__div_res_quo 
               ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_quo))) {
        ++(vlSymsp->__Vcoverage[508]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_quo 
            = ((0xfffffffdU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_quo) 
               | (2U & vlSelf->scr1_pipe_ialu__DOT__div_res_quo));
    }
    if ((4U & (vlSelf->scr1_pipe_ialu__DOT__div_res_quo 
               ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_quo))) {
        ++(vlSymsp->__Vcoverage[509]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_quo 
            = ((0xfffffffbU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_quo) 
               | (4U & vlSelf->scr1_pipe_ialu__DOT__div_res_quo));
    }
    if ((8U & (vlSelf->scr1_pipe_ialu__DOT__div_res_quo 
               ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_quo))) {
        ++(vlSymsp->__Vcoverage[510]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_quo 
            = ((0xfffffff7U & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_quo) 
               | (8U & vlSelf->scr1_pipe_ialu__DOT__div_res_quo));
    }
    if ((0x10U & (vlSelf->scr1_pipe_ialu__DOT__div_res_quo 
                  ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_quo))) {
        ++(vlSymsp->__Vcoverage[511]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_quo 
            = ((0xffffffefU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_quo) 
               | (0x10U & vlSelf->scr1_pipe_ialu__DOT__div_res_quo));
    }
    if ((0x20U & (vlSelf->scr1_pipe_ialu__DOT__div_res_quo 
                  ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_quo))) {
        ++(vlSymsp->__Vcoverage[512]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_quo 
            = ((0xffffffdfU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_quo) 
               | (0x20U & vlSelf->scr1_pipe_ialu__DOT__div_res_quo));
    }
    if ((0x40U & (vlSelf->scr1_pipe_ialu__DOT__div_res_quo 
                  ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_quo))) {
        ++(vlSymsp->__Vcoverage[513]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_quo 
            = ((0xffffffbfU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_quo) 
               | (0x40U & vlSelf->scr1_pipe_ialu__DOT__div_res_quo));
    }
    if ((0x80U & (vlSelf->scr1_pipe_ialu__DOT__div_res_quo 
                  ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_quo))) {
        ++(vlSymsp->__Vcoverage[514]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_quo 
            = ((0xffffff7fU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_quo) 
               | (0x80U & vlSelf->scr1_pipe_ialu__DOT__div_res_quo));
    }
    if ((0x100U & (vlSelf->scr1_pipe_ialu__DOT__div_res_quo 
                   ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_quo))) {
        ++(vlSymsp->__Vcoverage[515]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_quo 
            = ((0xfffffeffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_quo) 
               | (0x100U & vlSelf->scr1_pipe_ialu__DOT__div_res_quo));
    }
    if ((0x200U & (vlSelf->scr1_pipe_ialu__DOT__div_res_quo 
                   ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_quo))) {
        ++(vlSymsp->__Vcoverage[516]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_quo 
            = ((0xfffffdffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_quo) 
               | (0x200U & vlSelf->scr1_pipe_ialu__DOT__div_res_quo));
    }
    if ((0x400U & (vlSelf->scr1_pipe_ialu__DOT__div_res_quo 
                   ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_quo))) {
        ++(vlSymsp->__Vcoverage[517]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_quo 
            = ((0xfffffbffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_quo) 
               | (0x400U & vlSelf->scr1_pipe_ialu__DOT__div_res_quo));
    }
    if ((0x800U & (vlSelf->scr1_pipe_ialu__DOT__div_res_quo 
                   ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_quo))) {
        ++(vlSymsp->__Vcoverage[518]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_quo 
            = ((0xfffff7ffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_quo) 
               | (0x800U & vlSelf->scr1_pipe_ialu__DOT__div_res_quo));
    }
    if ((0x1000U & (vlSelf->scr1_pipe_ialu__DOT__div_res_quo 
                    ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_quo))) {
        ++(vlSymsp->__Vcoverage[519]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_quo 
            = ((0xffffefffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_quo) 
               | (0x1000U & vlSelf->scr1_pipe_ialu__DOT__div_res_quo));
    }
    if ((0x2000U & (vlSelf->scr1_pipe_ialu__DOT__div_res_quo 
                    ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_quo))) {
        ++(vlSymsp->__Vcoverage[520]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_quo 
            = ((0xffffdfffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_quo) 
               | (0x2000U & vlSelf->scr1_pipe_ialu__DOT__div_res_quo));
    }
    if ((0x4000U & (vlSelf->scr1_pipe_ialu__DOT__div_res_quo 
                    ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_quo))) {
        ++(vlSymsp->__Vcoverage[521]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_quo 
            = ((0xffffbfffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_quo) 
               | (0x4000U & vlSelf->scr1_pipe_ialu__DOT__div_res_quo));
    }
    if ((0x8000U & (vlSelf->scr1_pipe_ialu__DOT__div_res_quo 
                    ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_quo))) {
        ++(vlSymsp->__Vcoverage[522]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_quo 
            = ((0xffff7fffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_quo) 
               | (0x8000U & vlSelf->scr1_pipe_ialu__DOT__div_res_quo));
    }
    if ((0x10000U & (vlSelf->scr1_pipe_ialu__DOT__div_res_quo 
                     ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_quo))) {
        ++(vlSymsp->__Vcoverage[523]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_quo 
            = ((0xfffeffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_quo) 
               | (0x10000U & vlSelf->scr1_pipe_ialu__DOT__div_res_quo));
    }
    if ((0x20000U & (vlSelf->scr1_pipe_ialu__DOT__div_res_quo 
                     ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_quo))) {
        ++(vlSymsp->__Vcoverage[524]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_quo 
            = ((0xfffdffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_quo) 
               | (0x20000U & vlSelf->scr1_pipe_ialu__DOT__div_res_quo));
    }
    if ((0x40000U & (vlSelf->scr1_pipe_ialu__DOT__div_res_quo 
                     ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_quo))) {
        ++(vlSymsp->__Vcoverage[525]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_quo 
            = ((0xfffbffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_quo) 
               | (0x40000U & vlSelf->scr1_pipe_ialu__DOT__div_res_quo));
    }
    if ((0x80000U & (vlSelf->scr1_pipe_ialu__DOT__div_res_quo 
                     ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_quo))) {
        ++(vlSymsp->__Vcoverage[526]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_quo 
            = ((0xfff7ffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_quo) 
               | (0x80000U & vlSelf->scr1_pipe_ialu__DOT__div_res_quo));
    }
    if ((0x100000U & (vlSelf->scr1_pipe_ialu__DOT__div_res_quo 
                      ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_quo))) {
        ++(vlSymsp->__Vcoverage[527]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_quo 
            = ((0xffefffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_quo) 
               | (0x100000U & vlSelf->scr1_pipe_ialu__DOT__div_res_quo));
    }
    if ((0x200000U & (vlSelf->scr1_pipe_ialu__DOT__div_res_quo 
                      ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_quo))) {
        ++(vlSymsp->__Vcoverage[528]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_quo 
            = ((0xffdfffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_quo) 
               | (0x200000U & vlSelf->scr1_pipe_ialu__DOT__div_res_quo));
    }
    if ((0x400000U & (vlSelf->scr1_pipe_ialu__DOT__div_res_quo 
                      ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_quo))) {
        ++(vlSymsp->__Vcoverage[529]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_quo 
            = ((0xffbfffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_quo) 
               | (0x400000U & vlSelf->scr1_pipe_ialu__DOT__div_res_quo));
    }
    if ((0x800000U & (vlSelf->scr1_pipe_ialu__DOT__div_res_quo 
                      ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_quo))) {
        ++(vlSymsp->__Vcoverage[530]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_quo 
            = ((0xff7fffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_quo) 
               | (0x800000U & vlSelf->scr1_pipe_ialu__DOT__div_res_quo));
    }
    if ((0x1000000U & (vlSelf->scr1_pipe_ialu__DOT__div_res_quo 
                       ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_quo))) {
        ++(vlSymsp->__Vcoverage[531]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_quo 
            = ((0xfeffffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_quo) 
               | (0x1000000U & vlSelf->scr1_pipe_ialu__DOT__div_res_quo));
    }
    if ((0x2000000U & (vlSelf->scr1_pipe_ialu__DOT__div_res_quo 
                       ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_quo))) {
        ++(vlSymsp->__Vcoverage[532]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_quo 
            = ((0xfdffffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_quo) 
               | (0x2000000U & vlSelf->scr1_pipe_ialu__DOT__div_res_quo));
    }
    if ((0x4000000U & (vlSelf->scr1_pipe_ialu__DOT__div_res_quo 
                       ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_quo))) {
        ++(vlSymsp->__Vcoverage[533]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_quo 
            = ((0xfbffffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_quo) 
               | (0x4000000U & vlSelf->scr1_pipe_ialu__DOT__div_res_quo));
    }
    if ((0x8000000U & (vlSelf->scr1_pipe_ialu__DOT__div_res_quo 
                       ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_quo))) {
        ++(vlSymsp->__Vcoverage[534]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_quo 
            = ((0xf7ffffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_quo) 
               | (0x8000000U & vlSelf->scr1_pipe_ialu__DOT__div_res_quo));
    }
    if ((0x10000000U & (vlSelf->scr1_pipe_ialu__DOT__div_res_quo 
                        ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_quo))) {
        ++(vlSymsp->__Vcoverage[535]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_quo 
            = ((0xefffffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_quo) 
               | (0x10000000U & vlSelf->scr1_pipe_ialu__DOT__div_res_quo));
    }
    if ((0x20000000U & (vlSelf->scr1_pipe_ialu__DOT__div_res_quo 
                        ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_quo))) {
        ++(vlSymsp->__Vcoverage[536]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_quo 
            = ((0xdfffffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_quo) 
               | (0x20000000U & vlSelf->scr1_pipe_ialu__DOT__div_res_quo));
    }
    if ((0x40000000U & (vlSelf->scr1_pipe_ialu__DOT__div_res_quo 
                        ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_quo))) {
        ++(vlSymsp->__Vcoverage[537]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_quo 
            = ((0xbfffffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_quo) 
               | (0x40000000U & vlSelf->scr1_pipe_ialu__DOT__div_res_quo));
    }
    if (((vlSelf->scr1_pipe_ialu__DOT__div_res_quo 
          ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_quo) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[538]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_quo 
            = ((0x7fffffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_quo) 
               | (0x80000000U & vlSelf->scr1_pipe_ialu__DOT__div_res_quo));
    }
    vlSelf->scr1_pipe_ialu__DOT____VdfgExtracted_h7eacfea1__0 
        = ((IData)(vlSelf->scr1_pipe_ialu__DOT__mul_cmd_hi)
            ? ((IData)(vlSelf->scr1_pipe_ialu__DOT__mdu_cmd_mul)
                ? (IData)((scr1_pipe_ialu__DOT____VdfgTmp_h9863f6f0__0 
                           >> 0x20U)) : 0U) : ((IData)(vlSelf->scr1_pipe_ialu__DOT__mdu_cmd_mul)
                                                ? (IData)(scr1_pipe_ialu__DOT____VdfgTmp_h9863f6f0__0)
                                                : 0U));
    if ((1U & (vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_next 
               ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_next))) {
        ++(vlSymsp->__Vcoverage[803]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_next 
            = ((0xfffffffeU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_next) 
               | (1U & vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_next));
    }
    if ((2U & (vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_next 
               ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_next))) {
        ++(vlSymsp->__Vcoverage[804]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_next 
            = ((0xfffffffdU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_next) 
               | (2U & vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_next));
    }
    if ((4U & (vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_next 
               ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_next))) {
        ++(vlSymsp->__Vcoverage[805]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_next 
            = ((0xfffffffbU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_next) 
               | (4U & vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_next));
    }
    if ((8U & (vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_next 
               ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_next))) {
        ++(vlSymsp->__Vcoverage[806]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_next 
            = ((0xfffffff7U & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_next) 
               | (8U & vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_next));
    }
    if ((0x10U & (vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_next 
                  ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_next))) {
        ++(vlSymsp->__Vcoverage[807]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_next 
            = ((0xffffffefU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_next) 
               | (0x10U & vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_next));
    }
    if ((0x20U & (vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_next 
                  ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_next))) {
        ++(vlSymsp->__Vcoverage[808]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_next 
            = ((0xffffffdfU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_next) 
               | (0x20U & vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_next));
    }
    if ((0x40U & (vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_next 
                  ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_next))) {
        ++(vlSymsp->__Vcoverage[809]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_next 
            = ((0xffffffbfU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_next) 
               | (0x40U & vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_next));
    }
    if ((0x80U & (vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_next 
                  ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_next))) {
        ++(vlSymsp->__Vcoverage[810]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_next 
            = ((0xffffff7fU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_next) 
               | (0x80U & vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_next));
    }
    if ((0x100U & (vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_next 
                   ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_next))) {
        ++(vlSymsp->__Vcoverage[811]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_next 
            = ((0xfffffeffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_next) 
               | (0x100U & vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_next));
    }
    if ((0x200U & (vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_next 
                   ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_next))) {
        ++(vlSymsp->__Vcoverage[812]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_next 
            = ((0xfffffdffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_next) 
               | (0x200U & vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_next));
    }
    if ((0x400U & (vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_next 
                   ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_next))) {
        ++(vlSymsp->__Vcoverage[813]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_next 
            = ((0xfffffbffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_next) 
               | (0x400U & vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_next));
    }
    if ((0x800U & (vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_next 
                   ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_next))) {
        ++(vlSymsp->__Vcoverage[814]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_next 
            = ((0xfffff7ffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_next) 
               | (0x800U & vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_next));
    }
    if ((0x1000U & (vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_next 
                    ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_next))) {
        ++(vlSymsp->__Vcoverage[815]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_next 
            = ((0xffffefffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_next) 
               | (0x1000U & vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_next));
    }
    if ((0x2000U & (vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_next 
                    ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_next))) {
        ++(vlSymsp->__Vcoverage[816]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_next 
            = ((0xffffdfffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_next) 
               | (0x2000U & vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_next));
    }
    if ((0x4000U & (vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_next 
                    ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_next))) {
        ++(vlSymsp->__Vcoverage[817]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_next 
            = ((0xffffbfffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_next) 
               | (0x4000U & vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_next));
    }
    if ((0x8000U & (vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_next 
                    ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_next))) {
        ++(vlSymsp->__Vcoverage[818]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_next 
            = ((0xffff7fffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_next) 
               | (0x8000U & vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_next));
    }
    if ((0x10000U & (vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_next 
                     ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_next))) {
        ++(vlSymsp->__Vcoverage[819]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_next 
            = ((0xfffeffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_next) 
               | (0x10000U & vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_next));
    }
    if ((0x20000U & (vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_next 
                     ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_next))) {
        ++(vlSymsp->__Vcoverage[820]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_next 
            = ((0xfffdffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_next) 
               | (0x20000U & vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_next));
    }
    if ((0x40000U & (vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_next 
                     ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_next))) {
        ++(vlSymsp->__Vcoverage[821]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_next 
            = ((0xfffbffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_next) 
               | (0x40000U & vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_next));
    }
    if ((0x80000U & (vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_next 
                     ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_next))) {
        ++(vlSymsp->__Vcoverage[822]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_next 
            = ((0xfff7ffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_next) 
               | (0x80000U & vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_next));
    }
    if ((0x100000U & (vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_next 
                      ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_next))) {
        ++(vlSymsp->__Vcoverage[823]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_next 
            = ((0xffefffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_next) 
               | (0x100000U & vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_next));
    }
    if ((0x200000U & (vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_next 
                      ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_next))) {
        ++(vlSymsp->__Vcoverage[824]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_next 
            = ((0xffdfffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_next) 
               | (0x200000U & vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_next));
    }
    if ((0x400000U & (vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_next 
                      ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_next))) {
        ++(vlSymsp->__Vcoverage[825]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_next 
            = ((0xffbfffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_next) 
               | (0x400000U & vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_next));
    }
    if ((0x800000U & (vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_next 
                      ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_next))) {
        ++(vlSymsp->__Vcoverage[826]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_next 
            = ((0xff7fffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_next) 
               | (0x800000U & vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_next));
    }
    if ((0x1000000U & (vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_next 
                       ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_next))) {
        ++(vlSymsp->__Vcoverage[827]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_next 
            = ((0xfeffffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_next) 
               | (0x1000000U & vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_next));
    }
    if ((0x2000000U & (vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_next 
                       ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_next))) {
        ++(vlSymsp->__Vcoverage[828]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_next 
            = ((0xfdffffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_next) 
               | (0x2000000U & vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_next));
    }
    if ((0x4000000U & (vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_next 
                       ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_next))) {
        ++(vlSymsp->__Vcoverage[829]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_next 
            = ((0xfbffffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_next) 
               | (0x4000000U & vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_next));
    }
    if ((0x8000000U & (vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_next 
                       ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_next))) {
        ++(vlSymsp->__Vcoverage[830]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_next 
            = ((0xf7ffffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_next) 
               | (0x8000000U & vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_next));
    }
    if ((0x10000000U & (vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_next 
                        ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_next))) {
        ++(vlSymsp->__Vcoverage[831]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_next 
            = ((0xefffffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_next) 
               | (0x10000000U & vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_next));
    }
    if ((0x20000000U & (vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_next 
                        ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_next))) {
        ++(vlSymsp->__Vcoverage[832]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_next 
            = ((0xdfffffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_next) 
               | (0x20000000U & vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_next));
    }
    if ((0x40000000U & (vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_next 
                        ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_next))) {
        ++(vlSymsp->__Vcoverage[833]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_next 
            = ((0xbfffffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_next) 
               | (0x40000000U & vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_next));
    }
    if (((vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_next 
          ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_next) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[834]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_next 
            = ((0x7fffffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_next) 
               | (0x80000000U & vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_next));
    }
    if (((IData)(vlSelf->scr1_pipe_ialu__DOT__mdu_res_c_next) 
         ^ (IData)(vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_c_next))) {
        ++(vlSymsp->__Vcoverage[770]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_c_next 
            = vlSelf->scr1_pipe_ialu__DOT__mdu_res_c_next;
    }
    if (((IData)(vlSelf->scr1_pipe_ialu__DOT__rem_corr_req) 
         ^ (IData)(vlSelf->scr1_pipe_ialu__DOT____Vtogcov__rem_corr_req))) {
        ++(vlSymsp->__Vcoverage[320]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__rem_corr_req 
            = vlSelf->scr1_pipe_ialu__DOT__rem_corr_req;
    }
    vlSelf->scr1_pipe_ialu__DOT__mdu_corr_req = ((IData)(vlSelf->scr1_pipe_ialu__DOT__mdu_cmd_is_iter) 
                                                 & ((IData)(vlSelf->scr1_pipe_ialu__DOT__div_corr_req) 
                                                    | (IData)(vlSelf->scr1_pipe_ialu__DOT__rem_corr_req)));
    if ((1U & (vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_next 
               ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_next))) {
        ++(vlSymsp->__Vcoverage[867]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_next 
            = ((0xfffffffeU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_next) 
               | (1U & vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_next));
    }
    if ((2U & (vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_next 
               ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_next))) {
        ++(vlSymsp->__Vcoverage[868]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_next 
            = ((0xfffffffdU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_next) 
               | (2U & vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_next));
    }
    if ((4U & (vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_next 
               ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_next))) {
        ++(vlSymsp->__Vcoverage[869]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_next 
            = ((0xfffffffbU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_next) 
               | (4U & vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_next));
    }
    if ((8U & (vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_next 
               ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_next))) {
        ++(vlSymsp->__Vcoverage[870]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_next 
            = ((0xfffffff7U & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_next) 
               | (8U & vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_next));
    }
    if ((0x10U & (vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_next 
                  ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_next))) {
        ++(vlSymsp->__Vcoverage[871]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_next 
            = ((0xffffffefU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_next) 
               | (0x10U & vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_next));
    }
    if ((0x20U & (vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_next 
                  ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_next))) {
        ++(vlSymsp->__Vcoverage[872]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_next 
            = ((0xffffffdfU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_next) 
               | (0x20U & vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_next));
    }
    if ((0x40U & (vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_next 
                  ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_next))) {
        ++(vlSymsp->__Vcoverage[873]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_next 
            = ((0xffffffbfU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_next) 
               | (0x40U & vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_next));
    }
    if ((0x80U & (vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_next 
                  ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_next))) {
        ++(vlSymsp->__Vcoverage[874]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_next 
            = ((0xffffff7fU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_next) 
               | (0x80U & vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_next));
    }
    if ((0x100U & (vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_next 
                   ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_next))) {
        ++(vlSymsp->__Vcoverage[875]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_next 
            = ((0xfffffeffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_next) 
               | (0x100U & vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_next));
    }
    if ((0x200U & (vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_next 
                   ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_next))) {
        ++(vlSymsp->__Vcoverage[876]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_next 
            = ((0xfffffdffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_next) 
               | (0x200U & vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_next));
    }
    if ((0x400U & (vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_next 
                   ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_next))) {
        ++(vlSymsp->__Vcoverage[877]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_next 
            = ((0xfffffbffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_next) 
               | (0x400U & vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_next));
    }
    if ((0x800U & (vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_next 
                   ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_next))) {
        ++(vlSymsp->__Vcoverage[878]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_next 
            = ((0xfffff7ffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_next) 
               | (0x800U & vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_next));
    }
    if ((0x1000U & (vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_next 
                    ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_next))) {
        ++(vlSymsp->__Vcoverage[879]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_next 
            = ((0xffffefffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_next) 
               | (0x1000U & vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_next));
    }
    if ((0x2000U & (vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_next 
                    ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_next))) {
        ++(vlSymsp->__Vcoverage[880]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_next 
            = ((0xffffdfffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_next) 
               | (0x2000U & vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_next));
    }
    if ((0x4000U & (vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_next 
                    ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_next))) {
        ++(vlSymsp->__Vcoverage[881]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_next 
            = ((0xffffbfffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_next) 
               | (0x4000U & vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_next));
    }
    if ((0x8000U & (vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_next 
                    ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_next))) {
        ++(vlSymsp->__Vcoverage[882]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_next 
            = ((0xffff7fffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_next) 
               | (0x8000U & vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_next));
    }
    if ((0x10000U & (vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_next 
                     ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_next))) {
        ++(vlSymsp->__Vcoverage[883]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_next 
            = ((0xfffeffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_next) 
               | (0x10000U & vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_next));
    }
    if ((0x20000U & (vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_next 
                     ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_next))) {
        ++(vlSymsp->__Vcoverage[884]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_next 
            = ((0xfffdffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_next) 
               | (0x20000U & vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_next));
    }
    if ((0x40000U & (vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_next 
                     ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_next))) {
        ++(vlSymsp->__Vcoverage[885]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_next 
            = ((0xfffbffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_next) 
               | (0x40000U & vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_next));
    }
    if ((0x80000U & (vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_next 
                     ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_next))) {
        ++(vlSymsp->__Vcoverage[886]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_next 
            = ((0xfff7ffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_next) 
               | (0x80000U & vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_next));
    }
    if ((0x100000U & (vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_next 
                      ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_next))) {
        ++(vlSymsp->__Vcoverage[887]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_next 
            = ((0xffefffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_next) 
               | (0x100000U & vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_next));
    }
    if ((0x200000U & (vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_next 
                      ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_next))) {
        ++(vlSymsp->__Vcoverage[888]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_next 
            = ((0xffdfffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_next) 
               | (0x200000U & vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_next));
    }
    if ((0x400000U & (vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_next 
                      ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_next))) {
        ++(vlSymsp->__Vcoverage[889]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_next 
            = ((0xffbfffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_next) 
               | (0x400000U & vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_next));
    }
    if ((0x800000U & (vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_next 
                      ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_next))) {
        ++(vlSymsp->__Vcoverage[890]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_next 
            = ((0xff7fffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_next) 
               | (0x800000U & vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_next));
    }
    if ((0x1000000U & (vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_next 
                       ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_next))) {
        ++(vlSymsp->__Vcoverage[891]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_next 
            = ((0xfeffffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_next) 
               | (0x1000000U & vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_next));
    }
    if ((0x2000000U & (vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_next 
                       ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_next))) {
        ++(vlSymsp->__Vcoverage[892]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_next 
            = ((0xfdffffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_next) 
               | (0x2000000U & vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_next));
    }
    if ((0x4000000U & (vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_next 
                       ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_next))) {
        ++(vlSymsp->__Vcoverage[893]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_next 
            = ((0xfbffffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_next) 
               | (0x4000000U & vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_next));
    }
    if ((0x8000000U & (vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_next 
                       ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_next))) {
        ++(vlSymsp->__Vcoverage[894]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_next 
            = ((0xf7ffffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_next) 
               | (0x8000000U & vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_next));
    }
    if ((0x10000000U & (vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_next 
                        ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_next))) {
        ++(vlSymsp->__Vcoverage[895]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_next 
            = ((0xefffffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_next) 
               | (0x10000000U & vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_next));
    }
    if ((0x20000000U & (vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_next 
                        ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_next))) {
        ++(vlSymsp->__Vcoverage[896]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_next 
            = ((0xdfffffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_next) 
               | (0x20000000U & vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_next));
    }
    if ((0x40000000U & (vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_next 
                        ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_next))) {
        ++(vlSymsp->__Vcoverage[897]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_next 
            = ((0xbfffffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_next) 
               | (0x40000000U & vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_next));
    }
    if (((vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_next 
          ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_next) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[898]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_next 
            = ((0x7fffffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_next) 
               | (0x80000000U & vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_next));
    }
    vlSelf->scr1_pipe_ialu__DOT__ialu2exu_main_res_o = 0U;
    if ((1U & ((IData)(vlSelf->scr1_pipe_ialu__DOT__mul_res) 
               ^ (IData)(vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_res)))) {
        ++(vlSymsp->__Vcoverage[407]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_res 
            = ((0xfffffffffffffffeULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_res) 
               | (IData)((IData)((1U & (IData)(vlSelf->scr1_pipe_ialu__DOT__mul_res)))));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mul_res 
                        >> 1U)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_res 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[408]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_res 
            = ((0xfffffffffffffffdULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mul_res 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mul_res 
                        >> 2U)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_res 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[409]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_res 
            = ((0xfffffffffffffffbULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mul_res 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mul_res 
                        >> 3U)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_res 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[410]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_res 
            = ((0xfffffffffffffff7ULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mul_res 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mul_res 
                        >> 4U)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_res 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[411]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_res 
            = ((0xffffffffffffffefULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mul_res 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mul_res 
                        >> 5U)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_res 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[412]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_res 
            = ((0xffffffffffffffdfULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mul_res 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mul_res 
                        >> 6U)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_res 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[413]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_res 
            = ((0xffffffffffffffbfULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mul_res 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mul_res 
                        >> 7U)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_res 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[414]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_res 
            = ((0xffffffffffffff7fULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mul_res 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mul_res 
                        >> 8U)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_res 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[415]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_res 
            = ((0xfffffffffffffeffULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mul_res 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mul_res 
                        >> 9U)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_res 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[416]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_res 
            = ((0xfffffffffffffdffULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mul_res 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mul_res 
                        >> 0xaU)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_res 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[417]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_res 
            = ((0xfffffffffffffbffULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mul_res 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mul_res 
                        >> 0xbU)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_res 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[418]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_res 
            = ((0xfffffffffffff7ffULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mul_res 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mul_res 
                        >> 0xcU)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_res 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[419]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_res 
            = ((0xffffffffffffefffULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mul_res 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mul_res 
                        >> 0xdU)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_res 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[420]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_res 
            = ((0xffffffffffffdfffULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mul_res 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mul_res 
                        >> 0xeU)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_res 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[421]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_res 
            = ((0xffffffffffffbfffULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mul_res 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mul_res 
                        >> 0xfU)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_res 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[422]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_res 
            = ((0xffffffffffff7fffULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mul_res 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mul_res 
                        >> 0x10U)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_res 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[423]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_res 
            = ((0xfffffffffffeffffULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mul_res 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mul_res 
                        >> 0x11U)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_res 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[424]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_res 
            = ((0xfffffffffffdffffULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mul_res 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mul_res 
                        >> 0x12U)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_res 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[425]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_res 
            = ((0xfffffffffffbffffULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mul_res 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mul_res 
                        >> 0x13U)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_res 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[426]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_res 
            = ((0xfffffffffff7ffffULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mul_res 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mul_res 
                        >> 0x14U)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_res 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[427]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_res 
            = ((0xffffffffffefffffULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mul_res 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mul_res 
                        >> 0x15U)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_res 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[428]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_res 
            = ((0xffffffffffdfffffULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mul_res 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mul_res 
                        >> 0x16U)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_res 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[429]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_res 
            = ((0xffffffffffbfffffULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mul_res 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mul_res 
                        >> 0x17U)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_res 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[430]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_res 
            = ((0xffffffffff7fffffULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mul_res 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mul_res 
                        >> 0x18U)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_res 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[431]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_res 
            = ((0xfffffffffeffffffULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mul_res 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mul_res 
                        >> 0x19U)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_res 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[432]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_res 
            = ((0xfffffffffdffffffULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mul_res 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mul_res 
                        >> 0x1aU)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_res 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[433]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_res 
            = ((0xfffffffffbffffffULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mul_res 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mul_res 
                        >> 0x1bU)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_res 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[434]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_res 
            = ((0xfffffffff7ffffffULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mul_res 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mul_res 
                        >> 0x1cU)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_res 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[435]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_res 
            = ((0xffffffffefffffffULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mul_res 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mul_res 
                        >> 0x1dU)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_res 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[436]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_res 
            = ((0xffffffffdfffffffULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mul_res 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mul_res 
                        >> 0x1eU)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_res 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[437]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_res 
            = ((0xffffffffbfffffffULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mul_res 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mul_res 
                        >> 0x1fU)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_res 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[438]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_res 
            = ((0xffffffff7fffffffULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mul_res 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mul_res 
                        >> 0x20U)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_res 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[439]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_res 
            = ((0xfffffffeffffffffULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mul_res 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mul_res 
                        >> 0x21U)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_res 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[440]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_res 
            = ((0xfffffffdffffffffULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mul_res 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mul_res 
                        >> 0x22U)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_res 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[441]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_res 
            = ((0xfffffffbffffffffULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mul_res 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mul_res 
                        >> 0x23U)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_res 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[442]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_res 
            = ((0xfffffff7ffffffffULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mul_res 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mul_res 
                        >> 0x24U)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_res 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[443]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_res 
            = ((0xffffffefffffffffULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mul_res 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mul_res 
                        >> 0x25U)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_res 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[444]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_res 
            = ((0xffffffdfffffffffULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mul_res 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mul_res 
                        >> 0x26U)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_res 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[445]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_res 
            = ((0xffffffbfffffffffULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mul_res 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mul_res 
                        >> 0x27U)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_res 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[446]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_res 
            = ((0xffffff7fffffffffULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mul_res 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mul_res 
                        >> 0x28U)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_res 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[447]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_res 
            = ((0xfffffeffffffffffULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mul_res 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mul_res 
                        >> 0x29U)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_res 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[448]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_res 
            = ((0xfffffdffffffffffULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mul_res 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mul_res 
                        >> 0x2aU)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_res 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[449]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_res 
            = ((0xfffffbffffffffffULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mul_res 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mul_res 
                        >> 0x2bU)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_res 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[450]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_res 
            = ((0xfffff7ffffffffffULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mul_res 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mul_res 
                        >> 0x2cU)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_res 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[451]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_res 
            = ((0xffffefffffffffffULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mul_res 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mul_res 
                        >> 0x2dU)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_res 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[452]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_res 
            = ((0xffffdfffffffffffULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mul_res 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mul_res 
                        >> 0x2eU)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_res 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[453]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_res 
            = ((0xffffbfffffffffffULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mul_res 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mul_res 
                        >> 0x2fU)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_res 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[454]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_res 
            = ((0xffff7fffffffffffULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mul_res 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mul_res 
                        >> 0x30U)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_res 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[455]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_res 
            = ((0xfffeffffffffffffULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mul_res 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mul_res 
                        >> 0x31U)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_res 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[456]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_res 
            = ((0xfffdffffffffffffULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mul_res 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mul_res 
                        >> 0x32U)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_res 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[457]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_res 
            = ((0xfffbffffffffffffULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mul_res 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mul_res 
                        >> 0x33U)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_res 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[458]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_res 
            = ((0xfff7ffffffffffffULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mul_res 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mul_res 
                        >> 0x34U)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_res 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[459]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_res 
            = ((0xffefffffffffffffULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mul_res 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mul_res 
                        >> 0x35U)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_res 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[460]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_res 
            = ((0xffdfffffffffffffULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mul_res 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mul_res 
                        >> 0x36U)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_res 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[461]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_res 
            = ((0xffbfffffffffffffULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mul_res 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mul_res 
                        >> 0x37U)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_res 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[462]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_res 
            = ((0xff7fffffffffffffULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mul_res 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mul_res 
                        >> 0x38U)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_res 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[463]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_res 
            = ((0xfeffffffffffffffULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mul_res 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mul_res 
                        >> 0x39U)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_res 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[464]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_res 
            = ((0xfdffffffffffffffULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mul_res 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mul_res 
                        >> 0x3aU)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_res 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[465]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_res 
            = ((0xfbffffffffffffffULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mul_res 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mul_res 
                        >> 0x3bU)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_res 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[466]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_res 
            = ((0xf7ffffffffffffffULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mul_res 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mul_res 
                        >> 0x3cU)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_res 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[467]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_res 
            = ((0xefffffffffffffffULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mul_res 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mul_res 
                        >> 0x3dU)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_res 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[468]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_res 
            = ((0xdfffffffffffffffULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mul_res 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mul_res 
                        >> 0x3eU)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_res 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[469]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_res 
            = ((0xbfffffffffffffffULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mul_res 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((IData)(((vlSelf->scr1_pipe_ialu__DOT__mul_res 
                  ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_res) 
                 >> 0x3fU))) {
        ++(vlSymsp->__Vcoverage[470]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_res 
            = ((0x7fffffffffffffffULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mul_res 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    if (((IData)(vlSelf->scr1_pipe_ialu__DOT__mdu_corr_req) 
         ^ (IData)(vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_corr_req))) {
        ++(vlSymsp->__Vcoverage[318]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_corr_req 
            = vlSelf->scr1_pipe_ialu__DOT__mdu_corr_req;
    }
    vlSelf->scr1_pipe_ialu__DOT__mdu_fsm_next = 0U;
    if (vlSelf->exu2ialu_rvm_cmd_vd_i) {
        if ((0U == (IData)(vlSelf->scr1_pipe_ialu__DOT__mdu_fsm_ff))) {
            vlSelf->scr1_pipe_ialu__DOT__mdu_fsm_next 
                = ((IData)(vlSelf->scr1_pipe_ialu__DOT__mdu_iter_req)
                    ? 1U : 0U);
        } else if ((1U == (IData)(vlSelf->scr1_pipe_ialu__DOT__mdu_fsm_ff))) {
            vlSelf->scr1_pipe_ialu__DOT__mdu_fsm_next 
                = ((IData)(vlSelf->scr1_pipe_ialu__DOT__mdu_iter_rdy)
                    ? ((IData)(vlSelf->scr1_pipe_ialu__DOT__mdu_corr_req)
                        ? 2U : 0U) : 1U);
        } else if ((2U == (IData)(vlSelf->scr1_pipe_ialu__DOT__mdu_fsm_ff))) {
            vlSelf->scr1_pipe_ialu__DOT__mdu_fsm_next = 0U;
        }
    }
    scr1_pipe_ialu__DOT____VdfgExtracted_had502fbc__0 
        = ((~ (IData)(vlSelf->scr1_pipe_ialu__DOT__mdu_corr_req)) 
           & (IData)(vlSelf->scr1_pipe_ialu__DOT__mdu_iter_rdy));
    if ((0x10U & (IData)(vlSelf->exu2ialu_cmd_i))) {
        if ((1U & (~ ((IData)(vlSelf->exu2ialu_cmd_i) 
                      >> 3U)))) {
            if ((1U & (~ ((IData)(vlSelf->exu2ialu_cmd_i) 
                          >> 2U)))) {
                if ((2U & (IData)(vlSelf->exu2ialu_cmd_i))) {
                    if ((1U & (IData)(vlSelf->exu2ialu_cmd_i))) {
                        ++(vlSymsp->__Vcoverage[944]);
                        if ((0U != (IData)(vlSelf->scr1_pipe_ialu__DOT__mdu_fsm_ff))) {
                            if ((1U != (IData)(vlSelf->scr1_pipe_ialu__DOT__mdu_fsm_ff))) {
                                if ((2U == (IData)(vlSelf->scr1_pipe_ialu__DOT__mdu_fsm_ff))) {
                                    ++(vlSymsp->__Vcoverage[943]);
                                }
                            }
                            if ((1U == (IData)(vlSelf->scr1_pipe_ialu__DOT__mdu_fsm_ff))) {
                                ++(vlSymsp->__Vcoverage[942]);
                            }
                        }
                        if ((0U == (IData)(vlSelf->scr1_pipe_ialu__DOT__mdu_fsm_ff))) {
                            ++(vlSymsp->__Vcoverage[941]);
                        }
                    }
                    if ((1U & (~ (IData)(vlSelf->exu2ialu_cmd_i)))) {
                        ++(vlSymsp->__Vcoverage[940]);
                    }
                }
                if ((1U & (~ ((IData)(vlSelf->exu2ialu_cmd_i) 
                              >> 1U)))) {
                    ++(vlSymsp->__Vcoverage[940]);
                }
            }
            if ((4U & (IData)(vlSelf->exu2ialu_cmd_i))) {
                if ((2U & (IData)(vlSelf->exu2ialu_cmd_i))) {
                    if ((1U & (IData)(vlSelf->exu2ialu_cmd_i))) {
                        ++(vlSymsp->__Vcoverage[945]);
                    }
                    if ((1U & (~ (IData)(vlSelf->exu2ialu_cmd_i)))) {
                        ++(vlSymsp->__Vcoverage[944]);
                        if ((0U == (IData)(vlSelf->scr1_pipe_ialu__DOT__mdu_fsm_ff))) {
                            ++(vlSymsp->__Vcoverage[941]);
                            vlSelf->scr1_pipe_ialu__DOT__ialu2exu_main_res_o 
                                = (((0U != vlSelf->exu2ialu_main_op2_i) 
                                    | (IData)(vlSelf->scr1_pipe_ialu__DOT__div_cmd_rem))
                                    ? vlSelf->exu2ialu_main_op1_i
                                    : 0xffffffffU);
                        } else if ((1U == (IData)(vlSelf->scr1_pipe_ialu__DOT__mdu_fsm_ff))) {
                            vlSelf->scr1_pipe_ialu__DOT__ialu2exu_main_res_o 
                                = ((IData)(vlSelf->scr1_pipe_ialu__DOT__div_cmd_rem)
                                    ? vlSelf->scr1_pipe_ialu__DOT__div_res_rem
                                    : vlSelf->scr1_pipe_ialu__DOT__div_res_quo);
                        } else if ((2U == (IData)(vlSelf->scr1_pipe_ialu__DOT__mdu_fsm_ff))) {
                            vlSelf->scr1_pipe_ialu__DOT__ialu2exu_main_res_o 
                                = ((IData)(vlSelf->scr1_pipe_ialu__DOT__div_cmd_rem)
                                    ? (IData)(vlSelf->scr1_pipe_ialu__DOT__mdu_sum_res)
                                    : (- vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_ff));
                        }
                        if ((0U != (IData)(vlSelf->scr1_pipe_ialu__DOT__mdu_fsm_ff))) {
                            if ((1U != (IData)(vlSelf->scr1_pipe_ialu__DOT__mdu_fsm_ff))) {
                                if ((2U == (IData)(vlSelf->scr1_pipe_ialu__DOT__mdu_fsm_ff))) {
                                    ++(vlSymsp->__Vcoverage[943]);
                                }
                            }
                            if ((1U == (IData)(vlSelf->scr1_pipe_ialu__DOT__mdu_fsm_ff))) {
                                ++(vlSymsp->__Vcoverage[942]);
                            }
                        }
                    }
                } else if ((0U == (IData)(vlSelf->scr1_pipe_ialu__DOT__mdu_fsm_ff))) {
                    vlSelf->scr1_pipe_ialu__DOT__ialu2exu_main_res_o 
                        = (((0U != vlSelf->exu2ialu_main_op2_i) 
                            | (IData)(vlSelf->scr1_pipe_ialu__DOT__div_cmd_rem))
                            ? vlSelf->exu2ialu_main_op1_i
                            : 0xffffffffU);
                } else if ((1U == (IData)(vlSelf->scr1_pipe_ialu__DOT__mdu_fsm_ff))) {
                    vlSelf->scr1_pipe_ialu__DOT__ialu2exu_main_res_o 
                        = ((IData)(vlSelf->scr1_pipe_ialu__DOT__div_cmd_rem)
                            ? vlSelf->scr1_pipe_ialu__DOT__div_res_rem
                            : vlSelf->scr1_pipe_ialu__DOT__div_res_quo);
                } else if ((2U == (IData)(vlSelf->scr1_pipe_ialu__DOT__mdu_fsm_ff))) {
                    vlSelf->scr1_pipe_ialu__DOT__ialu2exu_main_res_o 
                        = ((IData)(vlSelf->scr1_pipe_ialu__DOT__div_cmd_rem)
                            ? (IData)(vlSelf->scr1_pipe_ialu__DOT__mdu_sum_res)
                            : (- vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_ff));
                }
                if ((1U & (~ ((IData)(vlSelf->exu2ialu_cmd_i) 
                              >> 1U)))) {
                    ++(vlSymsp->__Vcoverage[944]);
                    if ((0U == (IData)(vlSelf->scr1_pipe_ialu__DOT__mdu_fsm_ff))) {
                        ++(vlSymsp->__Vcoverage[941]);
                    }
                    if ((0U != (IData)(vlSelf->scr1_pipe_ialu__DOT__mdu_fsm_ff))) {
                        if ((1U == (IData)(vlSelf->scr1_pipe_ialu__DOT__mdu_fsm_ff))) {
                            ++(vlSymsp->__Vcoverage[942]);
                        }
                        if ((1U != (IData)(vlSelf->scr1_pipe_ialu__DOT__mdu_fsm_ff))) {
                            if ((2U == (IData)(vlSelf->scr1_pipe_ialu__DOT__mdu_fsm_ff))) {
                                ++(vlSymsp->__Vcoverage[943]);
                            }
                        }
                    }
                }
            } else if ((2U & (IData)(vlSelf->exu2ialu_cmd_i))) {
                if ((1U & (IData)(vlSelf->exu2ialu_cmd_i))) {
                    if ((0U == (IData)(vlSelf->scr1_pipe_ialu__DOT__mdu_fsm_ff))) {
                        vlSelf->scr1_pipe_ialu__DOT__ialu2exu_main_res_o 
                            = (((0U != vlSelf->exu2ialu_main_op2_i) 
                                | (IData)(vlSelf->scr1_pipe_ialu__DOT__div_cmd_rem))
                                ? vlSelf->exu2ialu_main_op1_i
                                : 0xffffffffU);
                    } else if ((1U == (IData)(vlSelf->scr1_pipe_ialu__DOT__mdu_fsm_ff))) {
                        vlSelf->scr1_pipe_ialu__DOT__ialu2exu_main_res_o 
                            = ((IData)(vlSelf->scr1_pipe_ialu__DOT__div_cmd_rem)
                                ? vlSelf->scr1_pipe_ialu__DOT__div_res_rem
                                : vlSelf->scr1_pipe_ialu__DOT__div_res_quo);
                    } else if ((2U == (IData)(vlSelf->scr1_pipe_ialu__DOT__mdu_fsm_ff))) {
                        vlSelf->scr1_pipe_ialu__DOT__ialu2exu_main_res_o 
                            = ((IData)(vlSelf->scr1_pipe_ialu__DOT__div_cmd_rem)
                                ? (IData)(vlSelf->scr1_pipe_ialu__DOT__mdu_sum_res)
                                : (- vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_ff));
                    }
                } else {
                    vlSelf->scr1_pipe_ialu__DOT__ialu2exu_main_res_o 
                        = vlSelf->scr1_pipe_ialu__DOT____VdfgExtracted_h7eacfea1__0;
                }
            } else {
                vlSelf->scr1_pipe_ialu__DOT__ialu2exu_main_res_o 
                    = vlSelf->scr1_pipe_ialu__DOT____VdfgExtracted_h7eacfea1__0;
            }
        }
        if ((8U & (IData)(vlSelf->exu2ialu_cmd_i))) {
            ++(vlSymsp->__Vcoverage[945]);
        }
    } else if ((8U & (IData)(vlSelf->exu2ialu_cmd_i))) {
        vlSelf->scr1_pipe_ialu__DOT__ialu2exu_main_res_o 
            = ((4U & (IData)(vlSelf->exu2ialu_cmd_i))
                ? ((2U & (IData)(vlSelf->exu2ialu_cmd_i))
                    ? ((1U & (IData)(vlSelf->exu2ialu_cmd_i))
                        ? vlSelf->scr1_pipe_ialu__DOT____VdfgExtracted_h7eacfea1__0
                        : vlSelf->scr1_pipe_ialu__DOT__shft_res)
                    : vlSelf->scr1_pipe_ialu__DOT__shft_res)
                : ((2U & (IData)(vlSelf->exu2ialu_cmd_i))
                    ? ((1U & (IData)(vlSelf->exu2ialu_cmd_i))
                        ? (~ (1U & (IData)(vlSelf->scr1_pipe_ialu__DOT__main_sum_flags)))
                        : (~ ((1U & ((IData)(vlSelf->scr1_pipe_ialu__DOT__main_sum_flags) 
                                     >> 2U)) ^ (1U 
                                                & ((IData)(vlSelf->scr1_pipe_ialu__DOT__main_sum_flags) 
                                                   >> 1U)))))
                    : ((1U & (IData)(vlSelf->exu2ialu_cmd_i))
                        ? (~ (1U & ((IData)(vlSelf->scr1_pipe_ialu__DOT__main_sum_flags) 
                                    >> 3U))) : (1U 
                                                & ((IData)(vlSelf->scr1_pipe_ialu__DOT__main_sum_flags) 
                                                   >> 3U)))));
    } else if ((4U & (IData)(vlSelf->exu2ialu_cmd_i))) {
        vlSelf->scr1_pipe_ialu__DOT__ialu2exu_main_res_o 
            = ((2U & (IData)(vlSelf->exu2ialu_cmd_i))
                ? ((1U & (IData)(vlSelf->exu2ialu_cmd_i))
                    ? (1U & (IData)(vlSelf->scr1_pipe_ialu__DOT__main_sum_flags))
                    : ((1U & ((IData)(vlSelf->scr1_pipe_ialu__DOT__main_sum_flags) 
                              >> 2U)) ^ (1U & ((IData)(vlSelf->scr1_pipe_ialu__DOT__main_sum_flags) 
                                               >> 1U))))
                : ((1U & (IData)(vlSelf->exu2ialu_cmd_i))
                    ? (IData)(vlSelf->scr1_pipe_ialu__DOT__main_sum_res)
                    : (IData)(vlSelf->scr1_pipe_ialu__DOT__main_sum_res)));
    } else if ((2U & (IData)(vlSelf->exu2ialu_cmd_i))) {
        vlSelf->scr1_pipe_ialu__DOT__ialu2exu_main_res_o 
            = ((1U & (IData)(vlSelf->exu2ialu_cmd_i))
                ? (vlSelf->exu2ialu_main_op1_i ^ vlSelf->exu2ialu_main_op2_i)
                : (vlSelf->exu2ialu_main_op1_i | vlSelf->exu2ialu_main_op2_i));
    } else if ((1U & (IData)(vlSelf->exu2ialu_cmd_i))) {
        vlSelf->scr1_pipe_ialu__DOT__ialu2exu_main_res_o 
            = (vlSelf->exu2ialu_main_op1_i & vlSelf->exu2ialu_main_op2_i);
    }
    vlSelf->ialu2exu_main_res_o = vlSelf->scr1_pipe_ialu__DOT__ialu2exu_main_res_o;
    if ((1U & (vlSelf->scr1_pipe_ialu__DOT__ialu2exu_main_res_o 
               ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_main_res_o))) {
        ++(vlSymsp->__Vcoverage[73]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_main_res_o 
            = ((0xfffffffeU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_main_res_o) 
               | (1U & vlSelf->scr1_pipe_ialu__DOT__ialu2exu_main_res_o));
    }
    if ((2U & (vlSelf->scr1_pipe_ialu__DOT__ialu2exu_main_res_o 
               ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_main_res_o))) {
        ++(vlSymsp->__Vcoverage[74]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_main_res_o 
            = ((0xfffffffdU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_main_res_o) 
               | (2U & vlSelf->scr1_pipe_ialu__DOT__ialu2exu_main_res_o));
    }
    if ((4U & (vlSelf->scr1_pipe_ialu__DOT__ialu2exu_main_res_o 
               ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_main_res_o))) {
        ++(vlSymsp->__Vcoverage[75]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_main_res_o 
            = ((0xfffffffbU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_main_res_o) 
               | (4U & vlSelf->scr1_pipe_ialu__DOT__ialu2exu_main_res_o));
    }
    if ((8U & (vlSelf->scr1_pipe_ialu__DOT__ialu2exu_main_res_o 
               ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_main_res_o))) {
        ++(vlSymsp->__Vcoverage[76]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_main_res_o 
            = ((0xfffffff7U & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_main_res_o) 
               | (8U & vlSelf->scr1_pipe_ialu__DOT__ialu2exu_main_res_o));
    }
    if ((0x10U & (vlSelf->scr1_pipe_ialu__DOT__ialu2exu_main_res_o 
                  ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_main_res_o))) {
        ++(vlSymsp->__Vcoverage[77]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_main_res_o 
            = ((0xffffffefU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_main_res_o) 
               | (0x10U & vlSelf->scr1_pipe_ialu__DOT__ialu2exu_main_res_o));
    }
    if ((0x20U & (vlSelf->scr1_pipe_ialu__DOT__ialu2exu_main_res_o 
                  ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_main_res_o))) {
        ++(vlSymsp->__Vcoverage[78]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_main_res_o 
            = ((0xffffffdfU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_main_res_o) 
               | (0x20U & vlSelf->scr1_pipe_ialu__DOT__ialu2exu_main_res_o));
    }
    if ((0x40U & (vlSelf->scr1_pipe_ialu__DOT__ialu2exu_main_res_o 
                  ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_main_res_o))) {
        ++(vlSymsp->__Vcoverage[79]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_main_res_o 
            = ((0xffffffbfU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_main_res_o) 
               | (0x40U & vlSelf->scr1_pipe_ialu__DOT__ialu2exu_main_res_o));
    }
    if ((0x80U & (vlSelf->scr1_pipe_ialu__DOT__ialu2exu_main_res_o 
                  ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_main_res_o))) {
        ++(vlSymsp->__Vcoverage[80]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_main_res_o 
            = ((0xffffff7fU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_main_res_o) 
               | (0x80U & vlSelf->scr1_pipe_ialu__DOT__ialu2exu_main_res_o));
    }
    if ((0x100U & (vlSelf->scr1_pipe_ialu__DOT__ialu2exu_main_res_o 
                   ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_main_res_o))) {
        ++(vlSymsp->__Vcoverage[81]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_main_res_o 
            = ((0xfffffeffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_main_res_o) 
               | (0x100U & vlSelf->scr1_pipe_ialu__DOT__ialu2exu_main_res_o));
    }
    if ((0x200U & (vlSelf->scr1_pipe_ialu__DOT__ialu2exu_main_res_o 
                   ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_main_res_o))) {
        ++(vlSymsp->__Vcoverage[82]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_main_res_o 
            = ((0xfffffdffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_main_res_o) 
               | (0x200U & vlSelf->scr1_pipe_ialu__DOT__ialu2exu_main_res_o));
    }
    if ((0x400U & (vlSelf->scr1_pipe_ialu__DOT__ialu2exu_main_res_o 
                   ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_main_res_o))) {
        ++(vlSymsp->__Vcoverage[83]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_main_res_o 
            = ((0xfffffbffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_main_res_o) 
               | (0x400U & vlSelf->scr1_pipe_ialu__DOT__ialu2exu_main_res_o));
    }
    if ((0x800U & (vlSelf->scr1_pipe_ialu__DOT__ialu2exu_main_res_o 
                   ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_main_res_o))) {
        ++(vlSymsp->__Vcoverage[84]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_main_res_o 
            = ((0xfffff7ffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_main_res_o) 
               | (0x800U & vlSelf->scr1_pipe_ialu__DOT__ialu2exu_main_res_o));
    }
    if ((0x1000U & (vlSelf->scr1_pipe_ialu__DOT__ialu2exu_main_res_o 
                    ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_main_res_o))) {
        ++(vlSymsp->__Vcoverage[85]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_main_res_o 
            = ((0xffffefffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_main_res_o) 
               | (0x1000U & vlSelf->scr1_pipe_ialu__DOT__ialu2exu_main_res_o));
    }
    if ((0x2000U & (vlSelf->scr1_pipe_ialu__DOT__ialu2exu_main_res_o 
                    ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_main_res_o))) {
        ++(vlSymsp->__Vcoverage[86]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_main_res_o 
            = ((0xffffdfffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_main_res_o) 
               | (0x2000U & vlSelf->scr1_pipe_ialu__DOT__ialu2exu_main_res_o));
    }
    if ((0x4000U & (vlSelf->scr1_pipe_ialu__DOT__ialu2exu_main_res_o 
                    ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_main_res_o))) {
        ++(vlSymsp->__Vcoverage[87]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_main_res_o 
            = ((0xffffbfffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_main_res_o) 
               | (0x4000U & vlSelf->scr1_pipe_ialu__DOT__ialu2exu_main_res_o));
    }
    if ((0x8000U & (vlSelf->scr1_pipe_ialu__DOT__ialu2exu_main_res_o 
                    ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_main_res_o))) {
        ++(vlSymsp->__Vcoverage[88]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_main_res_o 
            = ((0xffff7fffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_main_res_o) 
               | (0x8000U & vlSelf->scr1_pipe_ialu__DOT__ialu2exu_main_res_o));
    }
    if ((0x10000U & (vlSelf->scr1_pipe_ialu__DOT__ialu2exu_main_res_o 
                     ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_main_res_o))) {
        ++(vlSymsp->__Vcoverage[89]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_main_res_o 
            = ((0xfffeffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_main_res_o) 
               | (0x10000U & vlSelf->scr1_pipe_ialu__DOT__ialu2exu_main_res_o));
    }
    if ((0x20000U & (vlSelf->scr1_pipe_ialu__DOT__ialu2exu_main_res_o 
                     ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_main_res_o))) {
        ++(vlSymsp->__Vcoverage[90]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_main_res_o 
            = ((0xfffdffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_main_res_o) 
               | (0x20000U & vlSelf->scr1_pipe_ialu__DOT__ialu2exu_main_res_o));
    }
    if ((0x40000U & (vlSelf->scr1_pipe_ialu__DOT__ialu2exu_main_res_o 
                     ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_main_res_o))) {
        ++(vlSymsp->__Vcoverage[91]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_main_res_o 
            = ((0xfffbffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_main_res_o) 
               | (0x40000U & vlSelf->scr1_pipe_ialu__DOT__ialu2exu_main_res_o));
    }
    if ((0x80000U & (vlSelf->scr1_pipe_ialu__DOT__ialu2exu_main_res_o 
                     ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_main_res_o))) {
        ++(vlSymsp->__Vcoverage[92]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_main_res_o 
            = ((0xfff7ffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_main_res_o) 
               | (0x80000U & vlSelf->scr1_pipe_ialu__DOT__ialu2exu_main_res_o));
    }
    if ((0x100000U & (vlSelf->scr1_pipe_ialu__DOT__ialu2exu_main_res_o 
                      ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_main_res_o))) {
        ++(vlSymsp->__Vcoverage[93]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_main_res_o 
            = ((0xffefffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_main_res_o) 
               | (0x100000U & vlSelf->scr1_pipe_ialu__DOT__ialu2exu_main_res_o));
    }
    if ((0x200000U & (vlSelf->scr1_pipe_ialu__DOT__ialu2exu_main_res_o 
                      ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_main_res_o))) {
        ++(vlSymsp->__Vcoverage[94]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_main_res_o 
            = ((0xffdfffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_main_res_o) 
               | (0x200000U & vlSelf->scr1_pipe_ialu__DOT__ialu2exu_main_res_o));
    }
    if ((0x400000U & (vlSelf->scr1_pipe_ialu__DOT__ialu2exu_main_res_o 
                      ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_main_res_o))) {
        ++(vlSymsp->__Vcoverage[95]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_main_res_o 
            = ((0xffbfffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_main_res_o) 
               | (0x400000U & vlSelf->scr1_pipe_ialu__DOT__ialu2exu_main_res_o));
    }
    if ((0x800000U & (vlSelf->scr1_pipe_ialu__DOT__ialu2exu_main_res_o 
                      ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_main_res_o))) {
        ++(vlSymsp->__Vcoverage[96]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_main_res_o 
            = ((0xff7fffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_main_res_o) 
               | (0x800000U & vlSelf->scr1_pipe_ialu__DOT__ialu2exu_main_res_o));
    }
    if ((0x1000000U & (vlSelf->scr1_pipe_ialu__DOT__ialu2exu_main_res_o 
                       ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_main_res_o))) {
        ++(vlSymsp->__Vcoverage[97]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_main_res_o 
            = ((0xfeffffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_main_res_o) 
               | (0x1000000U & vlSelf->scr1_pipe_ialu__DOT__ialu2exu_main_res_o));
    }
    if ((0x2000000U & (vlSelf->scr1_pipe_ialu__DOT__ialu2exu_main_res_o 
                       ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_main_res_o))) {
        ++(vlSymsp->__Vcoverage[98]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_main_res_o 
            = ((0xfdffffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_main_res_o) 
               | (0x2000000U & vlSelf->scr1_pipe_ialu__DOT__ialu2exu_main_res_o));
    }
    if ((0x4000000U & (vlSelf->scr1_pipe_ialu__DOT__ialu2exu_main_res_o 
                       ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_main_res_o))) {
        ++(vlSymsp->__Vcoverage[99]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_main_res_o 
            = ((0xfbffffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_main_res_o) 
               | (0x4000000U & vlSelf->scr1_pipe_ialu__DOT__ialu2exu_main_res_o));
    }
    if ((0x8000000U & (vlSelf->scr1_pipe_ialu__DOT__ialu2exu_main_res_o 
                       ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_main_res_o))) {
        ++(vlSymsp->__Vcoverage[100]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_main_res_o 
            = ((0xf7ffffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_main_res_o) 
               | (0x8000000U & vlSelf->scr1_pipe_ialu__DOT__ialu2exu_main_res_o));
    }
    if ((0x10000000U & (vlSelf->scr1_pipe_ialu__DOT__ialu2exu_main_res_o 
                        ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_main_res_o))) {
        ++(vlSymsp->__Vcoverage[101]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_main_res_o 
            = ((0xefffffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_main_res_o) 
               | (0x10000000U & vlSelf->scr1_pipe_ialu__DOT__ialu2exu_main_res_o));
    }
    if ((0x20000000U & (vlSelf->scr1_pipe_ialu__DOT__ialu2exu_main_res_o 
                        ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_main_res_o))) {
        ++(vlSymsp->__Vcoverage[102]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_main_res_o 
            = ((0xdfffffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_main_res_o) 
               | (0x20000000U & vlSelf->scr1_pipe_ialu__DOT__ialu2exu_main_res_o));
    }
    if ((0x40000000U & (vlSelf->scr1_pipe_ialu__DOT__ialu2exu_main_res_o 
                        ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_main_res_o))) {
        ++(vlSymsp->__Vcoverage[103]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_main_res_o 
            = ((0xbfffffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_main_res_o) 
               | (0x40000000U & vlSelf->scr1_pipe_ialu__DOT__ialu2exu_main_res_o));
    }
    if (((vlSelf->scr1_pipe_ialu__DOT__ialu2exu_main_res_o 
          ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_main_res_o) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[104]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_main_res_o 
            = ((0x7fffffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_main_res_o) 
               | (0x80000000U & vlSelf->scr1_pipe_ialu__DOT__ialu2exu_main_res_o));
    }
    if ((1U & ((IData)(vlSelf->scr1_pipe_ialu__DOT__mdu_fsm_next) 
               ^ (IData)(vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_fsm_next)))) {
        ++(vlSymsp->__Vcoverage[323]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_fsm_next 
            = ((2U & (IData)(vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_fsm_next)) 
               | (1U & (IData)(vlSelf->scr1_pipe_ialu__DOT__mdu_fsm_next)));
    }
    if ((2U & ((IData)(vlSelf->scr1_pipe_ialu__DOT__mdu_fsm_next) 
               ^ (IData)(vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_fsm_next)))) {
        ++(vlSymsp->__Vcoverage[324]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_fsm_next 
            = ((1U & (IData)(vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_fsm_next)) 
               | (2U & (IData)(vlSelf->scr1_pipe_ialu__DOT__mdu_fsm_next)));
    }
    vlSelf->scr1_pipe_ialu__DOT__ialu2exu_rvm_res_rdy_o = 1U;
    if ((0x10U & (IData)(vlSelf->exu2ialu_cmd_i))) {
        if ((1U & (~ ((IData)(vlSelf->exu2ialu_cmd_i) 
                      >> 3U)))) {
            if ((4U & (IData)(vlSelf->exu2ialu_cmd_i))) {
                if ((2U & (IData)(vlSelf->exu2ialu_cmd_i))) {
                    if ((1U & (~ (IData)(vlSelf->exu2ialu_cmd_i)))) {
                        if ((0U == (IData)(vlSelf->scr1_pipe_ialu__DOT__mdu_fsm_ff))) {
                            vlSelf->scr1_pipe_ialu__DOT__ialu2exu_rvm_res_rdy_o 
                                = (1U & (~ (IData)(vlSelf->scr1_pipe_ialu__DOT__mdu_iter_req)));
                        } else if ((1U == (IData)(vlSelf->scr1_pipe_ialu__DOT__mdu_fsm_ff))) {
                            vlSelf->scr1_pipe_ialu__DOT__ialu2exu_rvm_res_rdy_o 
                                = scr1_pipe_ialu__DOT____VdfgExtracted_had502fbc__0;
                        } else if ((2U == (IData)(vlSelf->scr1_pipe_ialu__DOT__mdu_fsm_ff))) {
                            vlSelf->scr1_pipe_ialu__DOT__ialu2exu_rvm_res_rdy_o = 1U;
                        }
                    }
                } else if ((0U == (IData)(vlSelf->scr1_pipe_ialu__DOT__mdu_fsm_ff))) {
                    vlSelf->scr1_pipe_ialu__DOT__ialu2exu_rvm_res_rdy_o 
                        = (1U & (~ (IData)(vlSelf->scr1_pipe_ialu__DOT__mdu_iter_req)));
                } else if ((1U == (IData)(vlSelf->scr1_pipe_ialu__DOT__mdu_fsm_ff))) {
                    vlSelf->scr1_pipe_ialu__DOT__ialu2exu_rvm_res_rdy_o 
                        = scr1_pipe_ialu__DOT____VdfgExtracted_had502fbc__0;
                } else if ((2U == (IData)(vlSelf->scr1_pipe_ialu__DOT__mdu_fsm_ff))) {
                    vlSelf->scr1_pipe_ialu__DOT__ialu2exu_rvm_res_rdy_o = 1U;
                }
            } else if ((2U & (IData)(vlSelf->exu2ialu_cmd_i))) {
                if ((1U & (IData)(vlSelf->exu2ialu_cmd_i))) {
                    if ((0U == (IData)(vlSelf->scr1_pipe_ialu__DOT__mdu_fsm_ff))) {
                        vlSelf->scr1_pipe_ialu__DOT__ialu2exu_rvm_res_rdy_o 
                            = (1U & (~ (IData)(vlSelf->scr1_pipe_ialu__DOT__mdu_iter_req)));
                    } else if ((1U == (IData)(vlSelf->scr1_pipe_ialu__DOT__mdu_fsm_ff))) {
                        vlSelf->scr1_pipe_ialu__DOT__ialu2exu_rvm_res_rdy_o 
                            = scr1_pipe_ialu__DOT____VdfgExtracted_had502fbc__0;
                    } else if ((2U == (IData)(vlSelf->scr1_pipe_ialu__DOT__mdu_fsm_ff))) {
                        vlSelf->scr1_pipe_ialu__DOT__ialu2exu_rvm_res_rdy_o = 1U;
                    }
                }
            }
        }
    }
    if (((IData)(vlSelf->scr1_pipe_ialu__DOT__ialu2exu_rvm_res_rdy_o) 
         ^ (IData)(vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_rvm_res_rdy_o))) {
        ++(vlSymsp->__Vcoverage[3]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_rvm_res_rdy_o 
            = vlSelf->scr1_pipe_ialu__DOT__ialu2exu_rvm_res_rdy_o;
    }
    vlSelf->ialu2exu_rvm_res_rdy_o = vlSelf->scr1_pipe_ialu__DOT__ialu2exu_rvm_res_rdy_o;
    vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_upd = 
        ((~ (IData)(vlSelf->scr1_pipe_ialu__DOT__ialu2exu_rvm_res_rdy_o)) 
         & (IData)(vlSelf->exu2ialu_rvm_cmd_vd_i));
    if (((IData)(vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_upd) 
         ^ (IData)(vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_upd))) {
        ++(vlSymsp->__Vcoverage[540]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_upd 
            = vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_upd;
    }
    vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt_en = vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_upd;
    vlSelf->scr1_pipe_ialu__DOT__mdu_res_upd = vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_upd;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop___024root___eval_triggers__act(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, ((IData)(vlSelf->clk) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__clk__0))));
    vlSelf->__VactTriggered.set(1U, (((IData)(vlSelf->clk) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__clk__0))) 
                                     | ((~ (IData)(vlSelf->rst_n)) 
                                        & (IData)(vlSelf->__Vtrigprevexpr___TOP__rst_n__0))));
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = vlSelf->clk;
    vlSelf->__Vtrigprevexpr___TOP__rst_n__0 = vlSelf->rst_n;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__act(vlSelf);
    }
#endif
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__0\n"); );
    // Body
    ++(vlSymsp->__Vcoverage[906]);
    ++(vlSymsp->__Vcoverage[921]);
    ++(vlSymsp->__Vcoverage[927]);
    if (vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_upd) {
        ++(vlSymsp->__Vcoverage[904]);
        ++(vlSymsp->__Vcoverage[919]);
        ++(vlSymsp->__Vcoverage[925]);
        vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt = vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt_next;
        vlSelf->scr1_pipe_ialu__DOT__mdu_res_c_ff = vlSelf->scr1_pipe_ialu__DOT__mdu_res_c_next;
        vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_ff 
            = vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_next;
        vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_ff 
            = vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_next;
        vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_ff 
            = vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_next;
    }
    if ((1U & (~ (IData)(vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_upd)))) {
        ++(vlSymsp->__Vcoverage[905]);
        ++(vlSymsp->__Vcoverage[920]);
        ++(vlSymsp->__Vcoverage[926]);
    }
    if ((1U & (vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt 
               ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt))) {
        ++(vlSymsp->__Vcoverage[705]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt 
            = ((0xfffffffeU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt) 
               | (1U & vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt));
    }
    if ((2U & (vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt 
               ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt))) {
        ++(vlSymsp->__Vcoverage[706]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt 
            = ((0xfffffffdU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt) 
               | (2U & vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt));
    }
    if ((4U & (vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt 
               ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt))) {
        ++(vlSymsp->__Vcoverage[707]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt 
            = ((0xfffffffbU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt) 
               | (4U & vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt));
    }
    if ((8U & (vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt 
               ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt))) {
        ++(vlSymsp->__Vcoverage[708]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt 
            = ((0xfffffff7U & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt) 
               | (8U & vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt));
    }
    if ((0x10U & (vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt 
                  ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt))) {
        ++(vlSymsp->__Vcoverage[709]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt 
            = ((0xffffffefU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt) 
               | (0x10U & vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt));
    }
    if ((0x20U & (vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt 
                  ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt))) {
        ++(vlSymsp->__Vcoverage[710]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt 
            = ((0xffffffdfU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt) 
               | (0x20U & vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt));
    }
    if ((0x40U & (vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt 
                  ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt))) {
        ++(vlSymsp->__Vcoverage[711]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt 
            = ((0xffffffbfU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt) 
               | (0x40U & vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt));
    }
    if ((0x80U & (vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt 
                  ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt))) {
        ++(vlSymsp->__Vcoverage[712]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt 
            = ((0xffffff7fU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt) 
               | (0x80U & vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt));
    }
    if ((0x100U & (vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt 
                   ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt))) {
        ++(vlSymsp->__Vcoverage[713]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt 
            = ((0xfffffeffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt) 
               | (0x100U & vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt));
    }
    if ((0x200U & (vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt 
                   ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt))) {
        ++(vlSymsp->__Vcoverage[714]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt 
            = ((0xfffffdffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt) 
               | (0x200U & vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt));
    }
    if ((0x400U & (vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt 
                   ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt))) {
        ++(vlSymsp->__Vcoverage[715]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt 
            = ((0xfffffbffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt) 
               | (0x400U & vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt));
    }
    if ((0x800U & (vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt 
                   ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt))) {
        ++(vlSymsp->__Vcoverage[716]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt 
            = ((0xfffff7ffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt) 
               | (0x800U & vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt));
    }
    if ((0x1000U & (vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt 
                    ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt))) {
        ++(vlSymsp->__Vcoverage[717]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt 
            = ((0xffffefffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt) 
               | (0x1000U & vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt));
    }
    if ((0x2000U & (vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt 
                    ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt))) {
        ++(vlSymsp->__Vcoverage[718]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt 
            = ((0xffffdfffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt) 
               | (0x2000U & vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt));
    }
    if ((0x4000U & (vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt 
                    ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt))) {
        ++(vlSymsp->__Vcoverage[719]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt 
            = ((0xffffbfffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt) 
               | (0x4000U & vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt));
    }
    if ((0x8000U & (vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt 
                    ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt))) {
        ++(vlSymsp->__Vcoverage[720]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt 
            = ((0xffff7fffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt) 
               | (0x8000U & vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt));
    }
    if ((0x10000U & (vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt 
                     ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt))) {
        ++(vlSymsp->__Vcoverage[721]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt 
            = ((0xfffeffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt) 
               | (0x10000U & vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt));
    }
    if ((0x20000U & (vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt 
                     ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt))) {
        ++(vlSymsp->__Vcoverage[722]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt 
            = ((0xfffdffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt) 
               | (0x20000U & vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt));
    }
    if ((0x40000U & (vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt 
                     ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt))) {
        ++(vlSymsp->__Vcoverage[723]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt 
            = ((0xfffbffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt) 
               | (0x40000U & vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt));
    }
    if ((0x80000U & (vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt 
                     ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt))) {
        ++(vlSymsp->__Vcoverage[724]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt 
            = ((0xfff7ffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt) 
               | (0x80000U & vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt));
    }
    if ((0x100000U & (vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt 
                      ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt))) {
        ++(vlSymsp->__Vcoverage[725]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt 
            = ((0xffefffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt) 
               | (0x100000U & vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt));
    }
    if ((0x200000U & (vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt 
                      ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt))) {
        ++(vlSymsp->__Vcoverage[726]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt 
            = ((0xffdfffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt) 
               | (0x200000U & vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt));
    }
    if ((0x400000U & (vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt 
                      ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt))) {
        ++(vlSymsp->__Vcoverage[727]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt 
            = ((0xffbfffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt) 
               | (0x400000U & vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt));
    }
    if ((0x800000U & (vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt 
                      ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt))) {
        ++(vlSymsp->__Vcoverage[728]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt 
            = ((0xff7fffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt) 
               | (0x800000U & vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt));
    }
    if ((0x1000000U & (vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt 
                       ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt))) {
        ++(vlSymsp->__Vcoverage[729]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt 
            = ((0xfeffffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt) 
               | (0x1000000U & vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt));
    }
    if ((0x2000000U & (vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt 
                       ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt))) {
        ++(vlSymsp->__Vcoverage[730]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt 
            = ((0xfdffffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt) 
               | (0x2000000U & vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt));
    }
    if ((0x4000000U & (vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt 
                       ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt))) {
        ++(vlSymsp->__Vcoverage[731]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt 
            = ((0xfbffffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt) 
               | (0x4000000U & vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt));
    }
    if ((0x8000000U & (vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt 
                       ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt))) {
        ++(vlSymsp->__Vcoverage[732]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt 
            = ((0xf7ffffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt) 
               | (0x8000000U & vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt));
    }
    if ((0x10000000U & (vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt 
                        ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt))) {
        ++(vlSymsp->__Vcoverage[733]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt 
            = ((0xefffffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt) 
               | (0x10000000U & vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt));
    }
    if ((0x20000000U & (vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt 
                        ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt))) {
        ++(vlSymsp->__Vcoverage[734]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt 
            = ((0xdfffffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt) 
               | (0x20000000U & vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt));
    }
    if ((0x40000000U & (vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt 
                        ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt))) {
        ++(vlSymsp->__Vcoverage[735]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt 
            = ((0xbfffffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt) 
               | (0x40000000U & vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt));
    }
    if (((vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt 
          ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[736]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt 
            = ((0x7fffffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt) 
               | (0x80000000U & vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt));
    }
    vlSelf->scr1_pipe_ialu__DOT__mdu_iter_rdy = (1U 
                                                 & vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt);
    if (((IData)(vlSelf->scr1_pipe_ialu__DOT__mdu_res_c_ff) 
         ^ (IData)(vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_c_ff))) {
        ++(vlSymsp->__Vcoverage[769]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_c_ff 
            = vlSelf->scr1_pipe_ialu__DOT__mdu_res_c_ff;
    }
    if ((1U & (vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_ff 
               ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_ff))) {
        ++(vlSymsp->__Vcoverage[771]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_ff 
            = ((0xfffffffeU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_ff) 
               | (1U & vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_ff));
    }
    if ((2U & (vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_ff 
               ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_ff))) {
        ++(vlSymsp->__Vcoverage[772]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_ff 
            = ((0xfffffffdU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_ff) 
               | (2U & vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_ff));
    }
    if ((4U & (vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_ff 
               ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_ff))) {
        ++(vlSymsp->__Vcoverage[773]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_ff 
            = ((0xfffffffbU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_ff) 
               | (4U & vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_ff));
    }
    if ((8U & (vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_ff 
               ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_ff))) {
        ++(vlSymsp->__Vcoverage[774]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_ff 
            = ((0xfffffff7U & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_ff) 
               | (8U & vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_ff));
    }
    if ((0x10U & (vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_ff 
                  ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_ff))) {
        ++(vlSymsp->__Vcoverage[775]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_ff 
            = ((0xffffffefU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_ff) 
               | (0x10U & vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_ff));
    }
    if ((0x20U & (vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_ff 
                  ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_ff))) {
        ++(vlSymsp->__Vcoverage[776]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_ff 
            = ((0xffffffdfU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_ff) 
               | (0x20U & vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_ff));
    }
    if ((0x40U & (vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_ff 
                  ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_ff))) {
        ++(vlSymsp->__Vcoverage[777]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_ff 
            = ((0xffffffbfU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_ff) 
               | (0x40U & vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_ff));
    }
    if ((0x80U & (vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_ff 
                  ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_ff))) {
        ++(vlSymsp->__Vcoverage[778]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_ff 
            = ((0xffffff7fU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_ff) 
               | (0x80U & vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_ff));
    }
    if ((0x100U & (vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_ff 
                   ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_ff))) {
        ++(vlSymsp->__Vcoverage[779]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_ff 
            = ((0xfffffeffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_ff) 
               | (0x100U & vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_ff));
    }
    if ((0x200U & (vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_ff 
                   ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_ff))) {
        ++(vlSymsp->__Vcoverage[780]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_ff 
            = ((0xfffffdffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_ff) 
               | (0x200U & vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_ff));
    }
    if ((0x400U & (vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_ff 
                   ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_ff))) {
        ++(vlSymsp->__Vcoverage[781]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_ff 
            = ((0xfffffbffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_ff) 
               | (0x400U & vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_ff));
    }
    if ((0x800U & (vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_ff 
                   ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_ff))) {
        ++(vlSymsp->__Vcoverage[782]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_ff 
            = ((0xfffff7ffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_ff) 
               | (0x800U & vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_ff));
    }
    if ((0x1000U & (vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_ff 
                    ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_ff))) {
        ++(vlSymsp->__Vcoverage[783]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_ff 
            = ((0xffffefffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_ff) 
               | (0x1000U & vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_ff));
    }
    if ((0x2000U & (vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_ff 
                    ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_ff))) {
        ++(vlSymsp->__Vcoverage[784]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_ff 
            = ((0xffffdfffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_ff) 
               | (0x2000U & vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_ff));
    }
    if ((0x4000U & (vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_ff 
                    ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_ff))) {
        ++(vlSymsp->__Vcoverage[785]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_ff 
            = ((0xffffbfffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_ff) 
               | (0x4000U & vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_ff));
    }
    if ((0x8000U & (vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_ff 
                    ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_ff))) {
        ++(vlSymsp->__Vcoverage[786]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_ff 
            = ((0xffff7fffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_ff) 
               | (0x8000U & vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_ff));
    }
    if ((0x10000U & (vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_ff 
                     ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_ff))) {
        ++(vlSymsp->__Vcoverage[787]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_ff 
            = ((0xfffeffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_ff) 
               | (0x10000U & vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_ff));
    }
    if ((0x20000U & (vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_ff 
                     ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_ff))) {
        ++(vlSymsp->__Vcoverage[788]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_ff 
            = ((0xfffdffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_ff) 
               | (0x20000U & vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_ff));
    }
    if ((0x40000U & (vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_ff 
                     ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_ff))) {
        ++(vlSymsp->__Vcoverage[789]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_ff 
            = ((0xfffbffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_ff) 
               | (0x40000U & vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_ff));
    }
    if ((0x80000U & (vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_ff 
                     ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_ff))) {
        ++(vlSymsp->__Vcoverage[790]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_ff 
            = ((0xfff7ffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_ff) 
               | (0x80000U & vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_ff));
    }
    if ((0x100000U & (vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_ff 
                      ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_ff))) {
        ++(vlSymsp->__Vcoverage[791]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_ff 
            = ((0xffefffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_ff) 
               | (0x100000U & vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_ff));
    }
    if ((0x200000U & (vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_ff 
                      ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_ff))) {
        ++(vlSymsp->__Vcoverage[792]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_ff 
            = ((0xffdfffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_ff) 
               | (0x200000U & vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_ff));
    }
    if ((0x400000U & (vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_ff 
                      ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_ff))) {
        ++(vlSymsp->__Vcoverage[793]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_ff 
            = ((0xffbfffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_ff) 
               | (0x400000U & vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_ff));
    }
    if ((0x800000U & (vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_ff 
                      ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_ff))) {
        ++(vlSymsp->__Vcoverage[794]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_ff 
            = ((0xff7fffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_ff) 
               | (0x800000U & vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_ff));
    }
    if ((0x1000000U & (vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_ff 
                       ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_ff))) {
        ++(vlSymsp->__Vcoverage[795]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_ff 
            = ((0xfeffffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_ff) 
               | (0x1000000U & vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_ff));
    }
    if ((0x2000000U & (vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_ff 
                       ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_ff))) {
        ++(vlSymsp->__Vcoverage[796]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_ff 
            = ((0xfdffffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_ff) 
               | (0x2000000U & vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_ff));
    }
    if ((0x4000000U & (vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_ff 
                       ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_ff))) {
        ++(vlSymsp->__Vcoverage[797]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_ff 
            = ((0xfbffffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_ff) 
               | (0x4000000U & vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_ff));
    }
    if ((0x8000000U & (vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_ff 
                       ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_ff))) {
        ++(vlSymsp->__Vcoverage[798]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_ff 
            = ((0xf7ffffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_ff) 
               | (0x8000000U & vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_ff));
    }
    if ((0x10000000U & (vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_ff 
                        ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_ff))) {
        ++(vlSymsp->__Vcoverage[799]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_ff 
            = ((0xefffffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_ff) 
               | (0x10000000U & vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_ff));
    }
    if ((0x20000000U & (vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_ff 
                        ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_ff))) {
        ++(vlSymsp->__Vcoverage[800]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_ff 
            = ((0xdfffffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_ff) 
               | (0x20000000U & vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_ff));
    }
    if ((0x40000000U & (vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_ff 
                        ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_ff))) {
        ++(vlSymsp->__Vcoverage[801]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_ff 
            = ((0xbfffffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_ff) 
               | (0x40000000U & vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_ff));
    }
    if (((vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_ff 
          ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_ff) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[802]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_ff 
            = ((0x7fffffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_ff) 
               | (0x80000000U & vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_ff));
    }
    if ((1U & (vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_ff 
               ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_ff))) {
        ++(vlSymsp->__Vcoverage[835]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_ff 
            = ((0xfffffffeU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_ff) 
               | (1U & vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_ff));
    }
    if ((2U & (vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_ff 
               ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_ff))) {
        ++(vlSymsp->__Vcoverage[836]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_ff 
            = ((0xfffffffdU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_ff) 
               | (2U & vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_ff));
    }
    if ((4U & (vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_ff 
               ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_ff))) {
        ++(vlSymsp->__Vcoverage[837]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_ff 
            = ((0xfffffffbU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_ff) 
               | (4U & vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_ff));
    }
    if ((8U & (vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_ff 
               ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_ff))) {
        ++(vlSymsp->__Vcoverage[838]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_ff 
            = ((0xfffffff7U & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_ff) 
               | (8U & vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_ff));
    }
    if ((0x10U & (vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_ff 
                  ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_ff))) {
        ++(vlSymsp->__Vcoverage[839]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_ff 
            = ((0xffffffefU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_ff) 
               | (0x10U & vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_ff));
    }
    if ((0x20U & (vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_ff 
                  ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_ff))) {
        ++(vlSymsp->__Vcoverage[840]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_ff 
            = ((0xffffffdfU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_ff) 
               | (0x20U & vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_ff));
    }
    if ((0x40U & (vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_ff 
                  ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_ff))) {
        ++(vlSymsp->__Vcoverage[841]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_ff 
            = ((0xffffffbfU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_ff) 
               | (0x40U & vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_ff));
    }
    if ((0x80U & (vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_ff 
                  ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_ff))) {
        ++(vlSymsp->__Vcoverage[842]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_ff 
            = ((0xffffff7fU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_ff) 
               | (0x80U & vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_ff));
    }
    if ((0x100U & (vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_ff 
                   ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_ff))) {
        ++(vlSymsp->__Vcoverage[843]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_ff 
            = ((0xfffffeffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_ff) 
               | (0x100U & vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_ff));
    }
    if ((0x200U & (vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_ff 
                   ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_ff))) {
        ++(vlSymsp->__Vcoverage[844]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_ff 
            = ((0xfffffdffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_ff) 
               | (0x200U & vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_ff));
    }
    if ((0x400U & (vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_ff 
                   ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_ff))) {
        ++(vlSymsp->__Vcoverage[845]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_ff 
            = ((0xfffffbffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_ff) 
               | (0x400U & vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_ff));
    }
    if ((0x800U & (vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_ff 
                   ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_ff))) {
        ++(vlSymsp->__Vcoverage[846]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_ff 
            = ((0xfffff7ffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_ff) 
               | (0x800U & vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_ff));
    }
    if ((0x1000U & (vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_ff 
                    ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_ff))) {
        ++(vlSymsp->__Vcoverage[847]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_ff 
            = ((0xffffefffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_ff) 
               | (0x1000U & vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_ff));
    }
    if ((0x2000U & (vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_ff 
                    ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_ff))) {
        ++(vlSymsp->__Vcoverage[848]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_ff 
            = ((0xffffdfffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_ff) 
               | (0x2000U & vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_ff));
    }
    if ((0x4000U & (vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_ff 
                    ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_ff))) {
        ++(vlSymsp->__Vcoverage[849]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_ff 
            = ((0xffffbfffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_ff) 
               | (0x4000U & vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_ff));
    }
    if ((0x8000U & (vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_ff 
                    ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_ff))) {
        ++(vlSymsp->__Vcoverage[850]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_ff 
            = ((0xffff7fffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_ff) 
               | (0x8000U & vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_ff));
    }
    if ((0x10000U & (vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_ff 
                     ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_ff))) {
        ++(vlSymsp->__Vcoverage[851]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_ff 
            = ((0xfffeffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_ff) 
               | (0x10000U & vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_ff));
    }
    if ((0x20000U & (vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_ff 
                     ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_ff))) {
        ++(vlSymsp->__Vcoverage[852]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_ff 
            = ((0xfffdffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_ff) 
               | (0x20000U & vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_ff));
    }
    if ((0x40000U & (vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_ff 
                     ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_ff))) {
        ++(vlSymsp->__Vcoverage[853]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_ff 
            = ((0xfffbffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_ff) 
               | (0x40000U & vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_ff));
    }
    if ((0x80000U & (vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_ff 
                     ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_ff))) {
        ++(vlSymsp->__Vcoverage[854]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_ff 
            = ((0xfff7ffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_ff) 
               | (0x80000U & vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_ff));
    }
    if ((0x100000U & (vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_ff 
                      ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_ff))) {
        ++(vlSymsp->__Vcoverage[855]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_ff 
            = ((0xffefffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_ff) 
               | (0x100000U & vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_ff));
    }
    if ((0x200000U & (vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_ff 
                      ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_ff))) {
        ++(vlSymsp->__Vcoverage[856]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_ff 
            = ((0xffdfffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_ff) 
               | (0x200000U & vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_ff));
    }
    if ((0x400000U & (vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_ff 
                      ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_ff))) {
        ++(vlSymsp->__Vcoverage[857]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_ff 
            = ((0xffbfffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_ff) 
               | (0x400000U & vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_ff));
    }
    if ((0x800000U & (vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_ff 
                      ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_ff))) {
        ++(vlSymsp->__Vcoverage[858]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_ff 
            = ((0xff7fffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_ff) 
               | (0x800000U & vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_ff));
    }
    if ((0x1000000U & (vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_ff 
                       ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_ff))) {
        ++(vlSymsp->__Vcoverage[859]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_ff 
            = ((0xfeffffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_ff) 
               | (0x1000000U & vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_ff));
    }
    if ((0x2000000U & (vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_ff 
                       ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_ff))) {
        ++(vlSymsp->__Vcoverage[860]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_ff 
            = ((0xfdffffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_ff) 
               | (0x2000000U & vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_ff));
    }
    if ((0x4000000U & (vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_ff 
                       ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_ff))) {
        ++(vlSymsp->__Vcoverage[861]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_ff 
            = ((0xfbffffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_ff) 
               | (0x4000000U & vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_ff));
    }
    if ((0x8000000U & (vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_ff 
                       ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_ff))) {
        ++(vlSymsp->__Vcoverage[862]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_ff 
            = ((0xf7ffffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_ff) 
               | (0x8000000U & vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_ff));
    }
    if ((0x10000000U & (vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_ff 
                        ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_ff))) {
        ++(vlSymsp->__Vcoverage[863]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_ff 
            = ((0xefffffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_ff) 
               | (0x10000000U & vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_ff));
    }
    if ((0x20000000U & (vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_ff 
                        ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_ff))) {
        ++(vlSymsp->__Vcoverage[864]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_ff 
            = ((0xdfffffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_ff) 
               | (0x20000000U & vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_ff));
    }
    if ((0x40000000U & (vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_ff 
                        ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_ff))) {
        ++(vlSymsp->__Vcoverage[865]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_ff 
            = ((0xbfffffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_ff) 
               | (0x40000000U & vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_ff));
    }
    if (((vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_ff 
          ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_ff) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[866]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_ff 
            = ((0x7fffffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_ff) 
               | (0x80000000U & vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_ff));
    }
    if ((1U & (vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_ff 
               ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_ff))) {
        ++(vlSymsp->__Vcoverage[541]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_ff 
            = ((0xfffffffeU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_ff) 
               | (1U & vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_ff));
    }
    if ((2U & (vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_ff 
               ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_ff))) {
        ++(vlSymsp->__Vcoverage[542]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_ff 
            = ((0xfffffffdU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_ff) 
               | (2U & vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_ff));
    }
    if ((4U & (vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_ff 
               ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_ff))) {
        ++(vlSymsp->__Vcoverage[543]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_ff 
            = ((0xfffffffbU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_ff) 
               | (4U & vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_ff));
    }
    if ((8U & (vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_ff 
               ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_ff))) {
        ++(vlSymsp->__Vcoverage[544]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_ff 
            = ((0xfffffff7U & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_ff) 
               | (8U & vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_ff));
    }
    if ((0x10U & (vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_ff 
                  ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_ff))) {
        ++(vlSymsp->__Vcoverage[545]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_ff 
            = ((0xffffffefU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_ff) 
               | (0x10U & vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_ff));
    }
    if ((0x20U & (vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_ff 
                  ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_ff))) {
        ++(vlSymsp->__Vcoverage[546]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_ff 
            = ((0xffffffdfU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_ff) 
               | (0x20U & vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_ff));
    }
    if ((0x40U & (vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_ff 
                  ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_ff))) {
        ++(vlSymsp->__Vcoverage[547]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_ff 
            = ((0xffffffbfU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_ff) 
               | (0x40U & vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_ff));
    }
    if ((0x80U & (vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_ff 
                  ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_ff))) {
        ++(vlSymsp->__Vcoverage[548]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_ff 
            = ((0xffffff7fU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_ff) 
               | (0x80U & vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_ff));
    }
    if ((0x100U & (vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_ff 
                   ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_ff))) {
        ++(vlSymsp->__Vcoverage[549]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_ff 
            = ((0xfffffeffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_ff) 
               | (0x100U & vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_ff));
    }
    if ((0x200U & (vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_ff 
                   ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_ff))) {
        ++(vlSymsp->__Vcoverage[550]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_ff 
            = ((0xfffffdffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_ff) 
               | (0x200U & vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_ff));
    }
    if ((0x400U & (vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_ff 
                   ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_ff))) {
        ++(vlSymsp->__Vcoverage[551]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_ff 
            = ((0xfffffbffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_ff) 
               | (0x400U & vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_ff));
    }
    if ((0x800U & (vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_ff 
                   ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_ff))) {
        ++(vlSymsp->__Vcoverage[552]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_ff 
            = ((0xfffff7ffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_ff) 
               | (0x800U & vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_ff));
    }
    if ((0x1000U & (vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_ff 
                    ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_ff))) {
        ++(vlSymsp->__Vcoverage[553]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_ff 
            = ((0xffffefffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_ff) 
               | (0x1000U & vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_ff));
    }
    if ((0x2000U & (vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_ff 
                    ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_ff))) {
        ++(vlSymsp->__Vcoverage[554]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_ff 
            = ((0xffffdfffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_ff) 
               | (0x2000U & vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_ff));
    }
    if ((0x4000U & (vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_ff 
                    ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_ff))) {
        ++(vlSymsp->__Vcoverage[555]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_ff 
            = ((0xffffbfffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_ff) 
               | (0x4000U & vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_ff));
    }
    if ((0x8000U & (vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_ff 
                    ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_ff))) {
        ++(vlSymsp->__Vcoverage[556]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_ff 
            = ((0xffff7fffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_ff) 
               | (0x8000U & vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_ff));
    }
    if ((0x10000U & (vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_ff 
                     ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_ff))) {
        ++(vlSymsp->__Vcoverage[557]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_ff 
            = ((0xfffeffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_ff) 
               | (0x10000U & vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_ff));
    }
    if ((0x20000U & (vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_ff 
                     ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_ff))) {
        ++(vlSymsp->__Vcoverage[558]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_ff 
            = ((0xfffdffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_ff) 
               | (0x20000U & vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_ff));
    }
    if ((0x40000U & (vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_ff 
                     ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_ff))) {
        ++(vlSymsp->__Vcoverage[559]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_ff 
            = ((0xfffbffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_ff) 
               | (0x40000U & vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_ff));
    }
    if ((0x80000U & (vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_ff 
                     ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_ff))) {
        ++(vlSymsp->__Vcoverage[560]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_ff 
            = ((0xfff7ffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_ff) 
               | (0x80000U & vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_ff));
    }
    if ((0x100000U & (vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_ff 
                      ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_ff))) {
        ++(vlSymsp->__Vcoverage[561]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_ff 
            = ((0xffefffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_ff) 
               | (0x100000U & vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_ff));
    }
    if ((0x200000U & (vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_ff 
                      ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_ff))) {
        ++(vlSymsp->__Vcoverage[562]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_ff 
            = ((0xffdfffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_ff) 
               | (0x200000U & vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_ff));
    }
    if ((0x400000U & (vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_ff 
                      ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_ff))) {
        ++(vlSymsp->__Vcoverage[563]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_ff 
            = ((0xffbfffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_ff) 
               | (0x400000U & vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_ff));
    }
    if ((0x800000U & (vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_ff 
                      ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_ff))) {
        ++(vlSymsp->__Vcoverage[564]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_ff 
            = ((0xff7fffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_ff) 
               | (0x800000U & vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_ff));
    }
    if ((0x1000000U & (vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_ff 
                       ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_ff))) {
        ++(vlSymsp->__Vcoverage[565]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_ff 
            = ((0xfeffffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_ff) 
               | (0x1000000U & vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_ff));
    }
    if ((0x2000000U & (vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_ff 
                       ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_ff))) {
        ++(vlSymsp->__Vcoverage[566]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_ff 
            = ((0xfdffffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_ff) 
               | (0x2000000U & vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_ff));
    }
    if ((0x4000000U & (vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_ff 
                       ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_ff))) {
        ++(vlSymsp->__Vcoverage[567]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_ff 
            = ((0xfbffffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_ff) 
               | (0x4000000U & vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_ff));
    }
    if ((0x8000000U & (vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_ff 
                       ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_ff))) {
        ++(vlSymsp->__Vcoverage[568]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_ff 
            = ((0xf7ffffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_ff) 
               | (0x8000000U & vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_ff));
    }
    if ((0x10000000U & (vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_ff 
                        ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_ff))) {
        ++(vlSymsp->__Vcoverage[569]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_ff 
            = ((0xefffffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_ff) 
               | (0x10000000U & vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_ff));
    }
    if ((0x20000000U & (vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_ff 
                        ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_ff))) {
        ++(vlSymsp->__Vcoverage[570]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_ff 
            = ((0xdfffffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_ff) 
               | (0x20000000U & vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_ff));
    }
    if ((0x40000000U & (vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_ff 
                        ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_ff))) {
        ++(vlSymsp->__Vcoverage[571]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_ff 
            = ((0xbfffffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_ff) 
               | (0x40000000U & vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_ff));
    }
    if (((vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_ff 
          ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_ff) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[572]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_ff 
            = ((0x7fffffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_ff) 
               | (0x80000000U & vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_ff));
    }
    if (((IData)(vlSelf->scr1_pipe_ialu__DOT__mdu_iter_rdy) 
         ^ (IData)(vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_rdy))) {
        ++(vlSymsp->__Vcoverage[317]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_rdy 
            = vlSelf->scr1_pipe_ialu__DOT__mdu_iter_rdy;
    }
}
