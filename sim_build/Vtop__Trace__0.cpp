// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__trace_chg_0_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtop___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtop___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtop___024root__trace_chg_0_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    bufp->chgBit(oldp+0,(vlSelf->clk));
    bufp->chgBit(oldp+1,(vlSelf->rst_n));
    bufp->chgBit(oldp+2,(vlSelf->exu2ialu_rvm_cmd_vd_i));
    bufp->chgBit(oldp+3,(vlSelf->ialu2exu_rvm_res_rdy_o));
    bufp->chgIData(oldp+4,(vlSelf->exu2ialu_main_op1_i),32);
    bufp->chgIData(oldp+5,(vlSelf->exu2ialu_main_op2_i),32);
    bufp->chgCData(oldp+6,(vlSelf->exu2ialu_cmd_i),5);
    bufp->chgIData(oldp+7,(vlSelf->ialu2exu_main_res_o),32);
    bufp->chgBit(oldp+8,(vlSelf->ialu2exu_cmp_res_o));
    bufp->chgIData(oldp+9,(vlSelf->exu2ialu_addr_op1_i),32);
    bufp->chgIData(oldp+10,(vlSelf->exu2ialu_addr_op2_i),32);
    bufp->chgIData(oldp+11,(vlSelf->ialu2exu_addr_res_o),32);
    bufp->chgBit(oldp+12,(vlSelf->scr1_pipe_ialu__DOT__clk));
    bufp->chgBit(oldp+13,(vlSelf->scr1_pipe_ialu__DOT__rst_n));
    bufp->chgBit(oldp+14,(vlSelf->scr1_pipe_ialu__DOT__exu2ialu_rvm_cmd_vd_i));
    bufp->chgBit(oldp+15,(vlSelf->scr1_pipe_ialu__DOT__ialu2exu_rvm_res_rdy_o));
    bufp->chgIData(oldp+16,(vlSelf->scr1_pipe_ialu__DOT__exu2ialu_main_op1_i),32);
    bufp->chgIData(oldp+17,(vlSelf->scr1_pipe_ialu__DOT__exu2ialu_main_op2_i),32);
    bufp->chgCData(oldp+18,(vlSelf->scr1_pipe_ialu__DOT__exu2ialu_cmd_i),5);
    bufp->chgIData(oldp+19,(vlSelf->scr1_pipe_ialu__DOT__ialu2exu_main_res_o),32);
    bufp->chgBit(oldp+20,(vlSelf->scr1_pipe_ialu__DOT__ialu2exu_cmp_res_o));
    bufp->chgIData(oldp+21,(vlSelf->scr1_pipe_ialu__DOT__exu2ialu_addr_op1_i),32);
    bufp->chgIData(oldp+22,(vlSelf->scr1_pipe_ialu__DOT__exu2ialu_addr_op2_i),32);
    bufp->chgIData(oldp+23,(vlSelf->scr1_pipe_ialu__DOT__ialu2exu_addr_res_o),32);
    bufp->chgQData(oldp+24,(vlSelf->scr1_pipe_ialu__DOT__main_sum_res),33);
    bufp->chgBit(oldp+26,((1U & ((IData)(vlSelf->scr1_pipe_ialu__DOT__main_sum_flags) 
                                 >> 3U))));
    bufp->chgBit(oldp+27,((1U & ((IData)(vlSelf->scr1_pipe_ialu__DOT__main_sum_flags) 
                                 >> 2U))));
    bufp->chgBit(oldp+28,((1U & ((IData)(vlSelf->scr1_pipe_ialu__DOT__main_sum_flags) 
                                 >> 1U))));
    bufp->chgBit(oldp+29,((1U & (IData)(vlSelf->scr1_pipe_ialu__DOT__main_sum_flags))));
    bufp->chgBit(oldp+30,(vlSelf->scr1_pipe_ialu__DOT__main_sum_pos_ovflw));
    bufp->chgBit(oldp+31,(vlSelf->scr1_pipe_ialu__DOT__main_sum_neg_ovflw));
    bufp->chgBit(oldp+32,(vlSelf->scr1_pipe_ialu__DOT__main_ops_diff_sgn));
    bufp->chgBit(oldp+33,(vlSelf->scr1_pipe_ialu__DOT__main_ops_non_zero));
    bufp->chgBit(oldp+34,(vlSelf->scr1_pipe_ialu__DOT__ialu_cmd_shft));
    bufp->chgIData(oldp+35,(vlSelf->scr1_pipe_ialu__DOT__shft_op1),32);
    bufp->chgCData(oldp+36,(vlSelf->scr1_pipe_ialu__DOT__shft_op2),5);
    bufp->chgCData(oldp+37,(vlSelf->scr1_pipe_ialu__DOT__shft_cmd),2);
    bufp->chgIData(oldp+38,(vlSelf->scr1_pipe_ialu__DOT__shft_res),32);
    bufp->chgBit(oldp+39,(vlSelf->scr1_pipe_ialu__DOT__mdu_cmd_is_iter));
    bufp->chgBit(oldp+40,(vlSelf->scr1_pipe_ialu__DOT__mdu_iter_req));
    bufp->chgBit(oldp+41,(vlSelf->scr1_pipe_ialu__DOT__mdu_iter_rdy));
    bufp->chgBit(oldp+42,(vlSelf->scr1_pipe_ialu__DOT__mdu_corr_req));
    bufp->chgBit(oldp+43,(vlSelf->scr1_pipe_ialu__DOT__div_corr_req));
    bufp->chgBit(oldp+44,(vlSelf->scr1_pipe_ialu__DOT__rem_corr_req));
    bufp->chgCData(oldp+45,(vlSelf->scr1_pipe_ialu__DOT__mdu_fsm_ff),2);
    bufp->chgCData(oldp+46,(vlSelf->scr1_pipe_ialu__DOT__mdu_fsm_next),2);
    bufp->chgBit(oldp+47,(vlSelf->scr1_pipe_ialu__DOT__mdu_fsm_idle));
    bufp->chgBit(oldp+48,(vlSelf->scr1_pipe_ialu__DOT__mdu_fsm_corr));
    bufp->chgCData(oldp+49,(vlSelf->scr1_pipe_ialu__DOT__mdu_cmd),2);
    bufp->chgBit(oldp+50,(vlSelf->scr1_pipe_ialu__DOT__mdu_cmd_mul));
    bufp->chgBit(oldp+51,(vlSelf->scr1_pipe_ialu__DOT__mdu_cmd_div));
    bufp->chgCData(oldp+52,(vlSelf->scr1_pipe_ialu__DOT__mul_cmd),2);
    bufp->chgBit(oldp+53,(vlSelf->scr1_pipe_ialu__DOT__mul_cmd_hi));
    bufp->chgCData(oldp+54,(vlSelf->scr1_pipe_ialu__DOT__div_cmd),2);
    bufp->chgBit(oldp+55,(vlSelf->scr1_pipe_ialu__DOT__div_cmd_div));
    bufp->chgBit(oldp+56,(vlSelf->scr1_pipe_ialu__DOT__div_cmd_rem));
    bufp->chgBit(oldp+57,(vlSelf->scr1_pipe_ialu__DOT__mul_op1_is_sgn));
    bufp->chgBit(oldp+58,(vlSelf->scr1_pipe_ialu__DOT__mul_op2_is_sgn));
    bufp->chgBit(oldp+59,(vlSelf->scr1_pipe_ialu__DOT__mul_op1_sgn));
    bufp->chgBit(oldp+60,(vlSelf->scr1_pipe_ialu__DOT__mul_op2_sgn));
    bufp->chgQData(oldp+61,(vlSelf->scr1_pipe_ialu__DOT__mul_op1),33);
    bufp->chgQData(oldp+63,(vlSelf->scr1_pipe_ialu__DOT__mul_op2),33);
    bufp->chgQData(oldp+65,(vlSelf->scr1_pipe_ialu__DOT__mul_res),64);
    bufp->chgBit(oldp+67,(vlSelf->scr1_pipe_ialu__DOT__div_ops_are_sgn));
    bufp->chgBit(oldp+68,(vlSelf->scr1_pipe_ialu__DOT__div_op1_is_neg));
    bufp->chgBit(oldp+69,(vlSelf->scr1_pipe_ialu__DOT__div_op2_is_neg));
    bufp->chgBit(oldp+70,(vlSelf->scr1_pipe_ialu__DOT__div_res_rem_c));
    bufp->chgIData(oldp+71,(vlSelf->scr1_pipe_ialu__DOT__div_res_rem),32);
    bufp->chgIData(oldp+72,(vlSelf->scr1_pipe_ialu__DOT__div_res_quo),32);
    bufp->chgBit(oldp+73,(vlSelf->scr1_pipe_ialu__DOT__div_quo_bit));
    bufp->chgBit(oldp+74,(vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_upd));
    bufp->chgIData(oldp+75,(vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_ff),32);
    bufp->chgIData(oldp+76,(vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_next),32);
    bufp->chgBit(oldp+77,(vlSelf->scr1_pipe_ialu__DOT__mdu_sum_sub));
    bufp->chgQData(oldp+78,(vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op1),33);
    bufp->chgQData(oldp+80,(vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op2),33);
    bufp->chgQData(oldp+82,(vlSelf->scr1_pipe_ialu__DOT__mdu_sum_res),33);
    bufp->chgBit(oldp+84,(vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt_en));
    bufp->chgIData(oldp+85,(vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt),32);
    bufp->chgIData(oldp+86,(vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt_next),32);
    bufp->chgBit(oldp+87,(vlSelf->scr1_pipe_ialu__DOT__mdu_res_upd));
    bufp->chgBit(oldp+88,(vlSelf->scr1_pipe_ialu__DOT__mdu_res_c_ff));
    bufp->chgBit(oldp+89,(vlSelf->scr1_pipe_ialu__DOT__mdu_res_c_next));
    bufp->chgIData(oldp+90,(vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_ff),32);
    bufp->chgIData(oldp+91,(vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_next),32);
    bufp->chgIData(oldp+92,(vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_ff),32);
    bufp->chgIData(oldp+93,(vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_next),32);
    bufp->chgBit(oldp+94,(vlSelf->scr1_pipe_ialu__DOT__unnamedblk1__DOT__sgn));
    bufp->chgBit(oldp+95,(vlSelf->scr1_pipe_ialu__DOT__unnamedblk1__DOT__inv));
}

void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_cleanup\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        __Vm_traceActivity[__Vi0] = 0;
    }
    // Body
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}
