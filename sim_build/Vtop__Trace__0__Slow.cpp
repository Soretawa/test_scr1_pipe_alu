// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP____024unit__0(Vtop___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("$unit", VerilatedTracePrefixType::SCOPE_MODULE);
    Vtop___024root__trace_init_sub__TOP____024unit__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->declBit(c+1,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"exu2ialu_rvm_cmd_vd_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4,0,"ialu2exu_rvm_res_rdy_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+5,0,"exu2ialu_main_op1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+6,0,"exu2ialu_main_op2_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+7,0,"exu2ialu_cmd_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+8,0,"ialu2exu_main_res_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+9,0,"ialu2exu_cmp_res_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+10,0,"exu2ialu_addr_op1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+11,0,"exu2ialu_addr_op2_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+12,0,"ialu2exu_addr_res_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("scr1_pipe_ialu", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+13,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+14,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+15,0,"exu2ialu_rvm_cmd_vd_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+16,0,"ialu2exu_rvm_res_rdy_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+17,0,"exu2ialu_main_op1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+18,0,"exu2ialu_main_op2_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+19,0,"exu2ialu_cmd_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+20,0,"ialu2exu_main_res_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+21,0,"ialu2exu_cmp_res_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+22,0,"exu2ialu_addr_op1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+23,0,"exu2ialu_addr_op2_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+24,0,"ialu2exu_addr_res_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+97,0,"SCR1_MUL_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+98,0,"SCR1_MUL_RES_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+99,0,"SCR1_MDU_SUM_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+100,0,"SCR1_DIV_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+101,0,"SCR1_DIV_CNT_INIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declQuad(c+25,0,"main_sum_res",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->pushPrefix("main_sum_flags", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+27,0,"z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+28,0,"s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+29,0,"o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+30,0,"c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->declBit(c+31,0,"main_sum_pos_ovflw",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+32,0,"main_sum_neg_ovflw",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+33,0,"main_ops_diff_sgn",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+34,0,"main_ops_non_zero",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+35,0,"ialu_cmd_shft",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+36,0,"shft_op1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+37,0,"shft_op2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+38,0,"shft_cmd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+39,0,"shft_res",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+40,0,"mdu_cmd_is_iter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+41,0,"mdu_iter_req",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+42,0,"mdu_iter_rdy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+43,0,"mdu_corr_req",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+44,0,"div_corr_req",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+45,0,"rem_corr_req",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+46,0,"mdu_fsm_ff",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+47,0,"mdu_fsm_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+48,0,"mdu_fsm_idle",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+49,0,"mdu_fsm_corr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+50,0,"mdu_cmd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+51,0,"mdu_cmd_mul",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+52,0,"mdu_cmd_div",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+53,0,"mul_cmd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+54,0,"mul_cmd_hi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+55,0,"div_cmd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+56,0,"div_cmd_div",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+57,0,"div_cmd_rem",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+58,0,"mul_op1_is_sgn",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+59,0,"mul_op2_is_sgn",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+60,0,"mul_op1_sgn",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+61,0,"mul_op2_sgn",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+62,0,"mul_op1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declQuad(c+64,0,"mul_op2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declQuad(c+66,0,"mul_res",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+68,0,"div_ops_are_sgn",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+69,0,"div_op1_is_neg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+70,0,"div_op2_is_neg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+71,0,"div_res_rem_c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+72,0,"div_res_rem",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+73,0,"div_res_quo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+74,0,"div_quo_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+75,0,"div_dvdnd_lo_upd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+76,0,"div_dvdnd_lo_ff",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+77,0,"div_dvdnd_lo_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+78,0,"mdu_sum_sub",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+79,0,"mdu_sum_op1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declQuad(c+81,0,"mdu_sum_op2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declQuad(c+83,0,"mdu_sum_res",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declBit(c+85,0,"mdu_iter_cnt_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+86,0,"mdu_iter_cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+87,0,"mdu_iter_cnt_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+88,0,"mdu_res_upd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+89,0,"mdu_res_c_ff",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+90,0,"mdu_res_c_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+91,0,"mdu_res_hi_ff",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+92,0,"mdu_res_hi_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+93,0,"mdu_res_lo_ff",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+94,0,"mdu_res_lo_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+95,0,"sgn",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+96,0,"inv",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP____024unit__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP____024unit__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+102,0,"SCR1_MTVEC_BASE_WR_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+103,0,"SCR1_TDU_TRIG_NUM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+104,0,"SCR1_ARCH_RST_VECTOR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1, 31,0);
    tracep->declBus(c+105,0,"SCR1_ARCH_MTVEC_BASE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1, 31,0);
    tracep->declBus(c+106,0,"SCR1_TCM_ADDR_MASK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1, 31,0);
    tracep->declBus(c+107,0,"SCR1_TCM_ADDR_PATTERN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1, 31,0);
    tracep->declBus(c+108,0,"SCR1_TIMER_ADDR_MASK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1, 31,0);
    tracep->declBus(c+109,0,"SCR1_TIMER_ADDR_PATTERN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1, 31,0);
    tracep->declBus(c+110,0,"SCR1_SIM_EXIT_ADDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+111,0,"SCR1_SIM_PRINT_ADDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+112,0,"SCR1_SIM_EXT_IRQ_ADDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+113,0,"SCR1_SIM_SOFT_IRQ_ADDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+114,0,"SCR1_IALU_OP_ALL_NUM_E",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+100,0,"SCR1_IALU_OP_WIDTH_E",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+115,0,"SCR1_IALU_CMD_ALL_NUM_E",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+116,0,"SCR1_IALU_CMD_WIDTH_E",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+114,0,"SCR1_SUM2_OP_ALL_NUM_E",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+100,0,"SCR1_SUM2_OP_WIDTH_E",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+117,0,"SCR1_LSU_CMD_ALL_NUM_E",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+118,0,"SCR1_LSU_CMD_WIDTH_E",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+114,0,"SCR1_CSR_OP_ALL_NUM_E",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+100,0,"SCR1_CSR_OP_WIDTH_E",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+118,0,"SCR1_CSR_CMD_ALL_NUM_E",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+114,0,"SCR1_CSR_CMD_WIDTH_E",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+119,0,"SCR1_RD_WB_ALL_NUM_E",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+120,0,"SCR1_RD_WB_WIDTH_E",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+116,0,"SCR1_GPR_FIELD_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+121,0,"SCR1_CSR_ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+122,0,"SCR1_CSR_MTVEC_BASE_ZERO_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+102,0,"SCR1_CSR_MTVEC_BASE_VAL_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+123,0,"SCR1_CSR_MTVEC_BASE_WR_RST_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1, 31,6);
    tracep->declBus(c+124,0,"SCR1_CSR_MTVEC_BASE_RO_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+125,0,"SCR1_EXC_CODE_WIDTH_E",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+126,0,"SCR1_EXC_CODE_IRQ_M_SOFTWARE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1, 3,0);
    tracep->declBus(c+127,0,"SCR1_EXC_CODE_IRQ_M_TIMER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1, 3,0);
    tracep->declBus(c+128,0,"SCR1_EXC_CODE_IRQ_M_EXTERNAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1, 3,0);
    tracep->declBus(c+129,0,"SCR1_EXC_CODE_RESET",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1, 3,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_top(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_top\n"); );
    // Body
    Vtop___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtop___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vtop___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtop___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtop___024root__trace_register(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_register\n"); );
    // Body
    tracep->addConstCb(&Vtop___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vtop___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vtop___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vtop___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtop___024root__trace_const_0_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtop___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_const_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtop___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtop___024root__trace_const_0_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_const_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+97,(0x20U),32);
    bufp->fullIData(oldp+98,(0x40U),32);
    bufp->fullIData(oldp+99,(0x21U),32);
    bufp->fullIData(oldp+100,(1U),32);
    bufp->fullIData(oldp+101,(0x40000000U),32);
    bufp->fullIData(oldp+102,(0x1aU),32);
    bufp->fullIData(oldp+103,(2U),32);
    bufp->fullIData(oldp+104,(0x200U),32);
    bufp->fullIData(oldp+105,(0x1c0U),32);
    bufp->fullIData(oldp+106,(0xffff0000U),32);
    bufp->fullIData(oldp+107,(0x480000U),32);
    bufp->fullIData(oldp+108,(0xffffffe0U),32);
    bufp->fullIData(oldp+109,(0x490000U),32);
    bufp->fullIData(oldp+110,(0xf8U),32);
    bufp->fullIData(oldp+111,(0xf0000000U),32);
    bufp->fullIData(oldp+112,(0xf0000100U),32);
    bufp->fullIData(oldp+113,(0xf0000200U),32);
    bufp->fullIData(oldp+114,(2U),32);
    bufp->fullIData(oldp+115,(0x17U),32);
    bufp->fullIData(oldp+116,(5U),32);
    bufp->fullIData(oldp+117,(9U),32);
    bufp->fullIData(oldp+118,(4U),32);
    bufp->fullIData(oldp+119,(7U),32);
    bufp->fullIData(oldp+120,(3U),32);
    bufp->fullIData(oldp+121,(0xcU),32);
    bufp->fullIData(oldp+122,(6U),32);
    bufp->fullIData(oldp+123,(7U),26);
    bufp->fullIData(oldp+124,(0U),32);
    bufp->fullIData(oldp+125,(4U),32);
    bufp->fullCData(oldp+126,(3U),4);
    bufp->fullCData(oldp+127,(7U),4);
    bufp->fullCData(oldp+128,(0xbU),4);
    bufp->fullCData(oldp+129,(0U),4);
}

VL_ATTR_COLD void Vtop___024root__trace_full_0_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtop___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtop___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtop___024root__trace_full_0_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->clk));
    bufp->fullBit(oldp+2,(vlSelf->rst_n));
    bufp->fullBit(oldp+3,(vlSelf->exu2ialu_rvm_cmd_vd_i));
    bufp->fullBit(oldp+4,(vlSelf->ialu2exu_rvm_res_rdy_o));
    bufp->fullIData(oldp+5,(vlSelf->exu2ialu_main_op1_i),32);
    bufp->fullIData(oldp+6,(vlSelf->exu2ialu_main_op2_i),32);
    bufp->fullCData(oldp+7,(vlSelf->exu2ialu_cmd_i),5);
    bufp->fullIData(oldp+8,(vlSelf->ialu2exu_main_res_o),32);
    bufp->fullBit(oldp+9,(vlSelf->ialu2exu_cmp_res_o));
    bufp->fullIData(oldp+10,(vlSelf->exu2ialu_addr_op1_i),32);
    bufp->fullIData(oldp+11,(vlSelf->exu2ialu_addr_op2_i),32);
    bufp->fullIData(oldp+12,(vlSelf->ialu2exu_addr_res_o),32);
    bufp->fullBit(oldp+13,(vlSelf->scr1_pipe_ialu__DOT__clk));
    bufp->fullBit(oldp+14,(vlSelf->scr1_pipe_ialu__DOT__rst_n));
    bufp->fullBit(oldp+15,(vlSelf->scr1_pipe_ialu__DOT__exu2ialu_rvm_cmd_vd_i));
    bufp->fullBit(oldp+16,(vlSelf->scr1_pipe_ialu__DOT__ialu2exu_rvm_res_rdy_o));
    bufp->fullIData(oldp+17,(vlSelf->scr1_pipe_ialu__DOT__exu2ialu_main_op1_i),32);
    bufp->fullIData(oldp+18,(vlSelf->scr1_pipe_ialu__DOT__exu2ialu_main_op2_i),32);
    bufp->fullCData(oldp+19,(vlSelf->scr1_pipe_ialu__DOT__exu2ialu_cmd_i),5);
    bufp->fullIData(oldp+20,(vlSelf->scr1_pipe_ialu__DOT__ialu2exu_main_res_o),32);
    bufp->fullBit(oldp+21,(vlSelf->scr1_pipe_ialu__DOT__ialu2exu_cmp_res_o));
    bufp->fullIData(oldp+22,(vlSelf->scr1_pipe_ialu__DOT__exu2ialu_addr_op1_i),32);
    bufp->fullIData(oldp+23,(vlSelf->scr1_pipe_ialu__DOT__exu2ialu_addr_op2_i),32);
    bufp->fullIData(oldp+24,(vlSelf->scr1_pipe_ialu__DOT__ialu2exu_addr_res_o),32);
    bufp->fullQData(oldp+25,(vlSelf->scr1_pipe_ialu__DOT__main_sum_res),33);
    bufp->fullBit(oldp+27,((1U & ((IData)(vlSelf->scr1_pipe_ialu__DOT__main_sum_flags) 
                                  >> 3U))));
    bufp->fullBit(oldp+28,((1U & ((IData)(vlSelf->scr1_pipe_ialu__DOT__main_sum_flags) 
                                  >> 2U))));
    bufp->fullBit(oldp+29,((1U & ((IData)(vlSelf->scr1_pipe_ialu__DOT__main_sum_flags) 
                                  >> 1U))));
    bufp->fullBit(oldp+30,((1U & (IData)(vlSelf->scr1_pipe_ialu__DOT__main_sum_flags))));
    bufp->fullBit(oldp+31,(vlSelf->scr1_pipe_ialu__DOT__main_sum_pos_ovflw));
    bufp->fullBit(oldp+32,(vlSelf->scr1_pipe_ialu__DOT__main_sum_neg_ovflw));
    bufp->fullBit(oldp+33,(vlSelf->scr1_pipe_ialu__DOT__main_ops_diff_sgn));
    bufp->fullBit(oldp+34,(vlSelf->scr1_pipe_ialu__DOT__main_ops_non_zero));
    bufp->fullBit(oldp+35,(vlSelf->scr1_pipe_ialu__DOT__ialu_cmd_shft));
    bufp->fullIData(oldp+36,(vlSelf->scr1_pipe_ialu__DOT__shft_op1),32);
    bufp->fullCData(oldp+37,(vlSelf->scr1_pipe_ialu__DOT__shft_op2),5);
    bufp->fullCData(oldp+38,(vlSelf->scr1_pipe_ialu__DOT__shft_cmd),2);
    bufp->fullIData(oldp+39,(vlSelf->scr1_pipe_ialu__DOT__shft_res),32);
    bufp->fullBit(oldp+40,(vlSelf->scr1_pipe_ialu__DOT__mdu_cmd_is_iter));
    bufp->fullBit(oldp+41,(vlSelf->scr1_pipe_ialu__DOT__mdu_iter_req));
    bufp->fullBit(oldp+42,(vlSelf->scr1_pipe_ialu__DOT__mdu_iter_rdy));
    bufp->fullBit(oldp+43,(vlSelf->scr1_pipe_ialu__DOT__mdu_corr_req));
    bufp->fullBit(oldp+44,(vlSelf->scr1_pipe_ialu__DOT__div_corr_req));
    bufp->fullBit(oldp+45,(vlSelf->scr1_pipe_ialu__DOT__rem_corr_req));
    bufp->fullCData(oldp+46,(vlSelf->scr1_pipe_ialu__DOT__mdu_fsm_ff),2);
    bufp->fullCData(oldp+47,(vlSelf->scr1_pipe_ialu__DOT__mdu_fsm_next),2);
    bufp->fullBit(oldp+48,(vlSelf->scr1_pipe_ialu__DOT__mdu_fsm_idle));
    bufp->fullBit(oldp+49,(vlSelf->scr1_pipe_ialu__DOT__mdu_fsm_corr));
    bufp->fullCData(oldp+50,(vlSelf->scr1_pipe_ialu__DOT__mdu_cmd),2);
    bufp->fullBit(oldp+51,(vlSelf->scr1_pipe_ialu__DOT__mdu_cmd_mul));
    bufp->fullBit(oldp+52,(vlSelf->scr1_pipe_ialu__DOT__mdu_cmd_div));
    bufp->fullCData(oldp+53,(vlSelf->scr1_pipe_ialu__DOT__mul_cmd),2);
    bufp->fullBit(oldp+54,(vlSelf->scr1_pipe_ialu__DOT__mul_cmd_hi));
    bufp->fullCData(oldp+55,(vlSelf->scr1_pipe_ialu__DOT__div_cmd),2);
    bufp->fullBit(oldp+56,(vlSelf->scr1_pipe_ialu__DOT__div_cmd_div));
    bufp->fullBit(oldp+57,(vlSelf->scr1_pipe_ialu__DOT__div_cmd_rem));
    bufp->fullBit(oldp+58,(vlSelf->scr1_pipe_ialu__DOT__mul_op1_is_sgn));
    bufp->fullBit(oldp+59,(vlSelf->scr1_pipe_ialu__DOT__mul_op2_is_sgn));
    bufp->fullBit(oldp+60,(vlSelf->scr1_pipe_ialu__DOT__mul_op1_sgn));
    bufp->fullBit(oldp+61,(vlSelf->scr1_pipe_ialu__DOT__mul_op2_sgn));
    bufp->fullQData(oldp+62,(vlSelf->scr1_pipe_ialu__DOT__mul_op1),33);
    bufp->fullQData(oldp+64,(vlSelf->scr1_pipe_ialu__DOT__mul_op2),33);
    bufp->fullQData(oldp+66,(vlSelf->scr1_pipe_ialu__DOT__mul_res),64);
    bufp->fullBit(oldp+68,(vlSelf->scr1_pipe_ialu__DOT__div_ops_are_sgn));
    bufp->fullBit(oldp+69,(vlSelf->scr1_pipe_ialu__DOT__div_op1_is_neg));
    bufp->fullBit(oldp+70,(vlSelf->scr1_pipe_ialu__DOT__div_op2_is_neg));
    bufp->fullBit(oldp+71,(vlSelf->scr1_pipe_ialu__DOT__div_res_rem_c));
    bufp->fullIData(oldp+72,(vlSelf->scr1_pipe_ialu__DOT__div_res_rem),32);
    bufp->fullIData(oldp+73,(vlSelf->scr1_pipe_ialu__DOT__div_res_quo),32);
    bufp->fullBit(oldp+74,(vlSelf->scr1_pipe_ialu__DOT__div_quo_bit));
    bufp->fullBit(oldp+75,(vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_upd));
    bufp->fullIData(oldp+76,(vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_ff),32);
    bufp->fullIData(oldp+77,(vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_next),32);
    bufp->fullBit(oldp+78,(vlSelf->scr1_pipe_ialu__DOT__mdu_sum_sub));
    bufp->fullQData(oldp+79,(vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op1),33);
    bufp->fullQData(oldp+81,(vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op2),33);
    bufp->fullQData(oldp+83,(vlSelf->scr1_pipe_ialu__DOT__mdu_sum_res),33);
    bufp->fullBit(oldp+85,(vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt_en));
    bufp->fullIData(oldp+86,(vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt),32);
    bufp->fullIData(oldp+87,(vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt_next),32);
    bufp->fullBit(oldp+88,(vlSelf->scr1_pipe_ialu__DOT__mdu_res_upd));
    bufp->fullBit(oldp+89,(vlSelf->scr1_pipe_ialu__DOT__mdu_res_c_ff));
    bufp->fullBit(oldp+90,(vlSelf->scr1_pipe_ialu__DOT__mdu_res_c_next));
    bufp->fullIData(oldp+91,(vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_ff),32);
    bufp->fullIData(oldp+92,(vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_next),32);
    bufp->fullIData(oldp+93,(vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_ff),32);
    bufp->fullIData(oldp+94,(vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_next),32);
    bufp->fullBit(oldp+95,(vlSelf->scr1_pipe_ialu__DOT__unnamedblk1__DOT__sgn));
    bufp->fullBit(oldp+96,(vlSelf->scr1_pipe_ialu__DOT__unnamedblk1__DOT__inv));
}
