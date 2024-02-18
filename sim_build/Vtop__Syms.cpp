// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vtop__pch.h"
#include "Vtop.h"
#include "Vtop___024root.h"
#include "Vtop___024unit.h"

// FUNCTIONS
Vtop__Syms::~Vtop__Syms()
{

    // Tear down scope hierarchy
    __Vhier.remove(0, &__Vscope___024unit);
    __Vhier.remove(0, &__Vscope_scr1_pipe_ialu);

}

Vtop__Syms::Vtop__Syms(VerilatedContext* contextp, const char* namep, Vtop* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
    , TOP____024unit{this, Verilated::catName(namep, "$unit")}
{
        // Check resources
        Verilated::stackCheck(71);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.__PVT____024unit = &TOP____024unit;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    TOP____024unit.__Vconfigure(true);
    // Setup scopes
    __Vscope_TOP.configure(this, name(), "TOP", "TOP", 0, VerilatedScope::SCOPE_OTHER);
    __Vscope___024unit.configure(this, name(), "\\$unit ", "\\$unit ", -9, VerilatedScope::SCOPE_PACKAGE);
    __Vscope_scr1_pipe_ialu.configure(this, name(), "scr1_pipe_ialu", "scr1_pipe_ialu", -9, VerilatedScope::SCOPE_MODULE);
    __Vscope_scr1_pipe_ialu__unnamedblk1.configure(this, name(), "scr1_pipe_ialu.unnamedblk1", "unnamedblk1", -9, VerilatedScope::SCOPE_OTHER);

    // Set up scope hierarchy
    __Vhier.add(0, &__Vscope___024unit);
    __Vhier.add(0, &__Vscope_scr1_pipe_ialu);

    // Setup export functions
    for (int __Vfinal = 0; __Vfinal < 2; ++__Vfinal) {
        __Vscope_TOP.varInsert(__Vfinal,"clk", &(TOP.clk), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0);
        __Vscope_TOP.varInsert(__Vfinal,"exu2ialu_addr_op1_i", &(TOP.exu2ialu_addr_op1_i), false, VLVT_UINT32,VLVD_IN|VLVF_PUB_RW,1 ,31,0);
        __Vscope_TOP.varInsert(__Vfinal,"exu2ialu_addr_op2_i", &(TOP.exu2ialu_addr_op2_i), false, VLVT_UINT32,VLVD_IN|VLVF_PUB_RW,1 ,31,0);
        __Vscope_TOP.varInsert(__Vfinal,"exu2ialu_cmd_i", &(TOP.exu2ialu_cmd_i), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,1 ,4,0);
        __Vscope_TOP.varInsert(__Vfinal,"exu2ialu_main_op1_i", &(TOP.exu2ialu_main_op1_i), false, VLVT_UINT32,VLVD_IN|VLVF_PUB_RW,1 ,31,0);
        __Vscope_TOP.varInsert(__Vfinal,"exu2ialu_main_op2_i", &(TOP.exu2ialu_main_op2_i), false, VLVT_UINT32,VLVD_IN|VLVF_PUB_RW,1 ,31,0);
        __Vscope_TOP.varInsert(__Vfinal,"exu2ialu_rvm_cmd_vd_i", &(TOP.exu2ialu_rvm_cmd_vd_i), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0);
        __Vscope_TOP.varInsert(__Vfinal,"ialu2exu_addr_res_o", &(TOP.ialu2exu_addr_res_o), false, VLVT_UINT32,VLVD_OUT|VLVF_PUB_RW,1 ,31,0);
        __Vscope_TOP.varInsert(__Vfinal,"ialu2exu_cmp_res_o", &(TOP.ialu2exu_cmp_res_o), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0);
        __Vscope_TOP.varInsert(__Vfinal,"ialu2exu_main_res_o", &(TOP.ialu2exu_main_res_o), false, VLVT_UINT32,VLVD_OUT|VLVF_PUB_RW,1 ,31,0);
        __Vscope_TOP.varInsert(__Vfinal,"ialu2exu_rvm_res_rdy_o", &(TOP.ialu2exu_rvm_res_rdy_o), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0);
        __Vscope_TOP.varInsert(__Vfinal,"rst_n", &(TOP.rst_n), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0);
        __Vscope___024unit.varInsert(__Vfinal,"SCR1_ARCH_MTVEC_BASE", const_cast<void*>(static_cast<const void*>(&(TOP____024unit.SCR1_ARCH_MTVEC_BASE))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY,1 ,31,0);
        __Vscope___024unit.varInsert(__Vfinal,"SCR1_ARCH_RST_VECTOR", const_cast<void*>(static_cast<const void*>(&(TOP____024unit.SCR1_ARCH_RST_VECTOR))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY,1 ,31,0);
        __Vscope___024unit.varInsert(__Vfinal,"SCR1_CSR_ADDR_WIDTH", const_cast<void*>(static_cast<const void*>(&(TOP____024unit.SCR1_CSR_ADDR_WIDTH))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY,1 ,31,0);
        __Vscope___024unit.varInsert(__Vfinal,"SCR1_CSR_CMD_ALL_NUM_E", const_cast<void*>(static_cast<const void*>(&(TOP____024unit.SCR1_CSR_CMD_ALL_NUM_E))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope___024unit.varInsert(__Vfinal,"SCR1_CSR_CMD_WIDTH_E", const_cast<void*>(static_cast<const void*>(&(TOP____024unit.SCR1_CSR_CMD_WIDTH_E))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope___024unit.varInsert(__Vfinal,"SCR1_CSR_MTVEC_BASE_RO_BITS", const_cast<void*>(static_cast<const void*>(&(TOP____024unit.SCR1_CSR_MTVEC_BASE_RO_BITS))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY,1 ,31,0);
        __Vscope___024unit.varInsert(__Vfinal,"SCR1_CSR_MTVEC_BASE_VAL_BITS", const_cast<void*>(static_cast<const void*>(&(TOP____024unit.SCR1_CSR_MTVEC_BASE_VAL_BITS))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY,1 ,31,0);
        __Vscope___024unit.varInsert(__Vfinal,"SCR1_CSR_MTVEC_BASE_WR_RST_VAL", const_cast<void*>(static_cast<const void*>(&(TOP____024unit.SCR1_CSR_MTVEC_BASE_WR_RST_VAL))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY,1 ,31,6);
        __Vscope___024unit.varInsert(__Vfinal,"SCR1_CSR_MTVEC_BASE_ZERO_BITS", const_cast<void*>(static_cast<const void*>(&(TOP____024unit.SCR1_CSR_MTVEC_BASE_ZERO_BITS))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY,1 ,31,0);
        __Vscope___024unit.varInsert(__Vfinal,"SCR1_CSR_OP_ALL_NUM_E", const_cast<void*>(static_cast<const void*>(&(TOP____024unit.SCR1_CSR_OP_ALL_NUM_E))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope___024unit.varInsert(__Vfinal,"SCR1_CSR_OP_WIDTH_E", const_cast<void*>(static_cast<const void*>(&(TOP____024unit.SCR1_CSR_OP_WIDTH_E))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope___024unit.varInsert(__Vfinal,"SCR1_EXC_CODE_IRQ_M_EXTERNAL", const_cast<void*>(static_cast<const void*>(&(TOP____024unit.SCR1_EXC_CODE_IRQ_M_EXTERNAL))), true, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY,1 ,3,0);
        __Vscope___024unit.varInsert(__Vfinal,"SCR1_EXC_CODE_IRQ_M_SOFTWARE", const_cast<void*>(static_cast<const void*>(&(TOP____024unit.SCR1_EXC_CODE_IRQ_M_SOFTWARE))), true, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY,1 ,3,0);
        __Vscope___024unit.varInsert(__Vfinal,"SCR1_EXC_CODE_IRQ_M_TIMER", const_cast<void*>(static_cast<const void*>(&(TOP____024unit.SCR1_EXC_CODE_IRQ_M_TIMER))), true, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY,1 ,3,0);
        __Vscope___024unit.varInsert(__Vfinal,"SCR1_EXC_CODE_RESET", const_cast<void*>(static_cast<const void*>(&(TOP____024unit.SCR1_EXC_CODE_RESET))), true, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY,1 ,3,0);
        __Vscope___024unit.varInsert(__Vfinal,"SCR1_EXC_CODE_WIDTH_E", const_cast<void*>(static_cast<const void*>(&(TOP____024unit.SCR1_EXC_CODE_WIDTH_E))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY,1 ,31,0);
        __Vscope___024unit.varInsert(__Vfinal,"SCR1_GPR_FIELD_WIDTH", const_cast<void*>(static_cast<const void*>(&(TOP____024unit.SCR1_GPR_FIELD_WIDTH))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope___024unit.varInsert(__Vfinal,"SCR1_IALU_CMD_ALL_NUM_E", const_cast<void*>(static_cast<const void*>(&(TOP____024unit.SCR1_IALU_CMD_ALL_NUM_E))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope___024unit.varInsert(__Vfinal,"SCR1_IALU_CMD_WIDTH_E", const_cast<void*>(static_cast<const void*>(&(TOP____024unit.SCR1_IALU_CMD_WIDTH_E))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope___024unit.varInsert(__Vfinal,"SCR1_IALU_OP_ALL_NUM_E", const_cast<void*>(static_cast<const void*>(&(TOP____024unit.SCR1_IALU_OP_ALL_NUM_E))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope___024unit.varInsert(__Vfinal,"SCR1_IALU_OP_WIDTH_E", const_cast<void*>(static_cast<const void*>(&(TOP____024unit.SCR1_IALU_OP_WIDTH_E))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope___024unit.varInsert(__Vfinal,"SCR1_LSU_CMD_ALL_NUM_E", const_cast<void*>(static_cast<const void*>(&(TOP____024unit.SCR1_LSU_CMD_ALL_NUM_E))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope___024unit.varInsert(__Vfinal,"SCR1_LSU_CMD_WIDTH_E", const_cast<void*>(static_cast<const void*>(&(TOP____024unit.SCR1_LSU_CMD_WIDTH_E))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope___024unit.varInsert(__Vfinal,"SCR1_MTVEC_BASE_WR_BITS", const_cast<void*>(static_cast<const void*>(&(TOP____024unit.SCR1_MTVEC_BASE_WR_BITS))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY,1 ,31,0);
        __Vscope___024unit.varInsert(__Vfinal,"SCR1_RD_WB_ALL_NUM_E", const_cast<void*>(static_cast<const void*>(&(TOP____024unit.SCR1_RD_WB_ALL_NUM_E))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope___024unit.varInsert(__Vfinal,"SCR1_RD_WB_WIDTH_E", const_cast<void*>(static_cast<const void*>(&(TOP____024unit.SCR1_RD_WB_WIDTH_E))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope___024unit.varInsert(__Vfinal,"SCR1_SIM_EXIT_ADDR", const_cast<void*>(static_cast<const void*>(&(TOP____024unit.SCR1_SIM_EXIT_ADDR))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope___024unit.varInsert(__Vfinal,"SCR1_SIM_EXT_IRQ_ADDR", const_cast<void*>(static_cast<const void*>(&(TOP____024unit.SCR1_SIM_EXT_IRQ_ADDR))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope___024unit.varInsert(__Vfinal,"SCR1_SIM_PRINT_ADDR", const_cast<void*>(static_cast<const void*>(&(TOP____024unit.SCR1_SIM_PRINT_ADDR))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope___024unit.varInsert(__Vfinal,"SCR1_SIM_SOFT_IRQ_ADDR", const_cast<void*>(static_cast<const void*>(&(TOP____024unit.SCR1_SIM_SOFT_IRQ_ADDR))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope___024unit.varInsert(__Vfinal,"SCR1_SUM2_OP_ALL_NUM_E", const_cast<void*>(static_cast<const void*>(&(TOP____024unit.SCR1_SUM2_OP_ALL_NUM_E))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope___024unit.varInsert(__Vfinal,"SCR1_SUM2_OP_WIDTH_E", const_cast<void*>(static_cast<const void*>(&(TOP____024unit.SCR1_SUM2_OP_WIDTH_E))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope___024unit.varInsert(__Vfinal,"SCR1_TCM_ADDR_MASK", const_cast<void*>(static_cast<const void*>(&(TOP____024unit.SCR1_TCM_ADDR_MASK))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY,1 ,31,0);
        __Vscope___024unit.varInsert(__Vfinal,"SCR1_TCM_ADDR_PATTERN", const_cast<void*>(static_cast<const void*>(&(TOP____024unit.SCR1_TCM_ADDR_PATTERN))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY,1 ,31,0);
        __Vscope___024unit.varInsert(__Vfinal,"SCR1_TDU_TRIG_NUM", const_cast<void*>(static_cast<const void*>(&(TOP____024unit.SCR1_TDU_TRIG_NUM))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY,1 ,31,0);
        __Vscope___024unit.varInsert(__Vfinal,"SCR1_TIMER_ADDR_MASK", const_cast<void*>(static_cast<const void*>(&(TOP____024unit.SCR1_TIMER_ADDR_MASK))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY,1 ,31,0);
        __Vscope___024unit.varInsert(__Vfinal,"SCR1_TIMER_ADDR_PATTERN", const_cast<void*>(static_cast<const void*>(&(TOP____024unit.SCR1_TIMER_ADDR_PATTERN))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY,1 ,31,0);
        __Vscope_scr1_pipe_ialu.varInsert(__Vfinal,"SCR1_DIV_CNT_INIT", const_cast<void*>(static_cast<const void*>(&(TOP.scr1_pipe_ialu__DOT__SCR1_DIV_CNT_INIT))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_scr1_pipe_ialu.varInsert(__Vfinal,"SCR1_DIV_WIDTH", const_cast<void*>(static_cast<const void*>(&(TOP.scr1_pipe_ialu__DOT__SCR1_DIV_WIDTH))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_scr1_pipe_ialu.varInsert(__Vfinal,"SCR1_MDU_SUM_WIDTH", const_cast<void*>(static_cast<const void*>(&(TOP.scr1_pipe_ialu__DOT__SCR1_MDU_SUM_WIDTH))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_scr1_pipe_ialu.varInsert(__Vfinal,"SCR1_MUL_RES_WIDTH", const_cast<void*>(static_cast<const void*>(&(TOP.scr1_pipe_ialu__DOT__SCR1_MUL_RES_WIDTH))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_scr1_pipe_ialu.varInsert(__Vfinal,"SCR1_MUL_WIDTH", const_cast<void*>(static_cast<const void*>(&(TOP.scr1_pipe_ialu__DOT__SCR1_MUL_WIDTH))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_scr1_pipe_ialu.varInsert(__Vfinal,"clk", &(TOP.scr1_pipe_ialu__DOT__clk), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_scr1_pipe_ialu.varInsert(__Vfinal,"div_cmd", &(TOP.scr1_pipe_ialu__DOT__div_cmd), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,1,0);
        __Vscope_scr1_pipe_ialu.varInsert(__Vfinal,"div_cmd_div", &(TOP.scr1_pipe_ialu__DOT__div_cmd_div), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_scr1_pipe_ialu.varInsert(__Vfinal,"div_cmd_rem", &(TOP.scr1_pipe_ialu__DOT__div_cmd_rem), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_scr1_pipe_ialu.varInsert(__Vfinal,"div_corr_req", &(TOP.scr1_pipe_ialu__DOT__div_corr_req), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_scr1_pipe_ialu.varInsert(__Vfinal,"div_dvdnd_lo_ff", &(TOP.scr1_pipe_ialu__DOT__div_dvdnd_lo_ff), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_scr1_pipe_ialu.varInsert(__Vfinal,"div_dvdnd_lo_next", &(TOP.scr1_pipe_ialu__DOT__div_dvdnd_lo_next), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_scr1_pipe_ialu.varInsert(__Vfinal,"div_dvdnd_lo_upd", &(TOP.scr1_pipe_ialu__DOT__div_dvdnd_lo_upd), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_scr1_pipe_ialu.varInsert(__Vfinal,"div_op1_is_neg", &(TOP.scr1_pipe_ialu__DOT__div_op1_is_neg), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_scr1_pipe_ialu.varInsert(__Vfinal,"div_op2_is_neg", &(TOP.scr1_pipe_ialu__DOT__div_op2_is_neg), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_scr1_pipe_ialu.varInsert(__Vfinal,"div_ops_are_sgn", &(TOP.scr1_pipe_ialu__DOT__div_ops_are_sgn), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_scr1_pipe_ialu.varInsert(__Vfinal,"div_quo_bit", &(TOP.scr1_pipe_ialu__DOT__div_quo_bit), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_scr1_pipe_ialu.varInsert(__Vfinal,"div_res_quo", &(TOP.scr1_pipe_ialu__DOT__div_res_quo), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_scr1_pipe_ialu.varInsert(__Vfinal,"div_res_rem", &(TOP.scr1_pipe_ialu__DOT__div_res_rem), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_scr1_pipe_ialu.varInsert(__Vfinal,"div_res_rem_c", &(TOP.scr1_pipe_ialu__DOT__div_res_rem_c), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_scr1_pipe_ialu.varInsert(__Vfinal,"exu2ialu_addr_op1_i", &(TOP.scr1_pipe_ialu__DOT__exu2ialu_addr_op1_i), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_scr1_pipe_ialu.varInsert(__Vfinal,"exu2ialu_addr_op2_i", &(TOP.scr1_pipe_ialu__DOT__exu2ialu_addr_op2_i), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_scr1_pipe_ialu.varInsert(__Vfinal,"exu2ialu_cmd_i", &(TOP.scr1_pipe_ialu__DOT__exu2ialu_cmd_i), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,4,0);
        __Vscope_scr1_pipe_ialu.varInsert(__Vfinal,"exu2ialu_main_op1_i", &(TOP.scr1_pipe_ialu__DOT__exu2ialu_main_op1_i), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_scr1_pipe_ialu.varInsert(__Vfinal,"exu2ialu_main_op2_i", &(TOP.scr1_pipe_ialu__DOT__exu2ialu_main_op2_i), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_scr1_pipe_ialu.varInsert(__Vfinal,"exu2ialu_rvm_cmd_vd_i", &(TOP.scr1_pipe_ialu__DOT__exu2ialu_rvm_cmd_vd_i), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_scr1_pipe_ialu.varInsert(__Vfinal,"ialu2exu_addr_res_o", &(TOP.scr1_pipe_ialu__DOT__ialu2exu_addr_res_o), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_scr1_pipe_ialu.varInsert(__Vfinal,"ialu2exu_cmp_res_o", &(TOP.scr1_pipe_ialu__DOT__ialu2exu_cmp_res_o), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_scr1_pipe_ialu.varInsert(__Vfinal,"ialu2exu_main_res_o", &(TOP.scr1_pipe_ialu__DOT__ialu2exu_main_res_o), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_scr1_pipe_ialu.varInsert(__Vfinal,"ialu2exu_rvm_res_rdy_o", &(TOP.scr1_pipe_ialu__DOT__ialu2exu_rvm_res_rdy_o), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_scr1_pipe_ialu.varInsert(__Vfinal,"ialu_cmd_shft", &(TOP.scr1_pipe_ialu__DOT__ialu_cmd_shft), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_scr1_pipe_ialu.varInsert(__Vfinal,"main_ops_diff_sgn", &(TOP.scr1_pipe_ialu__DOT__main_ops_diff_sgn), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_scr1_pipe_ialu.varInsert(__Vfinal,"main_ops_non_zero", &(TOP.scr1_pipe_ialu__DOT__main_ops_non_zero), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_scr1_pipe_ialu.varInsert(__Vfinal,"main_sum_flags", &(TOP.scr1_pipe_ialu__DOT__main_sum_flags), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,3,0);
        __Vscope_scr1_pipe_ialu.varInsert(__Vfinal,"main_sum_neg_ovflw", &(TOP.scr1_pipe_ialu__DOT__main_sum_neg_ovflw), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_scr1_pipe_ialu.varInsert(__Vfinal,"main_sum_pos_ovflw", &(TOP.scr1_pipe_ialu__DOT__main_sum_pos_ovflw), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_scr1_pipe_ialu.varInsert(__Vfinal,"main_sum_res", &(TOP.scr1_pipe_ialu__DOT__main_sum_res), false, VLVT_UINT64,VLVD_NODIR|VLVF_PUB_RW,1 ,32,0);
        __Vscope_scr1_pipe_ialu.varInsert(__Vfinal,"mdu_cmd", &(TOP.scr1_pipe_ialu__DOT__mdu_cmd), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,1,0);
        __Vscope_scr1_pipe_ialu.varInsert(__Vfinal,"mdu_cmd_div", &(TOP.scr1_pipe_ialu__DOT__mdu_cmd_div), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_scr1_pipe_ialu.varInsert(__Vfinal,"mdu_cmd_is_iter", &(TOP.scr1_pipe_ialu__DOT__mdu_cmd_is_iter), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_scr1_pipe_ialu.varInsert(__Vfinal,"mdu_cmd_mul", &(TOP.scr1_pipe_ialu__DOT__mdu_cmd_mul), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_scr1_pipe_ialu.varInsert(__Vfinal,"mdu_corr_req", &(TOP.scr1_pipe_ialu__DOT__mdu_corr_req), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_scr1_pipe_ialu.varInsert(__Vfinal,"mdu_fsm_corr", &(TOP.scr1_pipe_ialu__DOT__mdu_fsm_corr), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_scr1_pipe_ialu.varInsert(__Vfinal,"mdu_fsm_ff", &(TOP.scr1_pipe_ialu__DOT__mdu_fsm_ff), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,1,0);
        __Vscope_scr1_pipe_ialu.varInsert(__Vfinal,"mdu_fsm_idle", &(TOP.scr1_pipe_ialu__DOT__mdu_fsm_idle), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_scr1_pipe_ialu.varInsert(__Vfinal,"mdu_fsm_next", &(TOP.scr1_pipe_ialu__DOT__mdu_fsm_next), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,1,0);
        __Vscope_scr1_pipe_ialu.varInsert(__Vfinal,"mdu_iter_cnt", &(TOP.scr1_pipe_ialu__DOT__mdu_iter_cnt), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_scr1_pipe_ialu.varInsert(__Vfinal,"mdu_iter_cnt_en", &(TOP.scr1_pipe_ialu__DOT__mdu_iter_cnt_en), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_scr1_pipe_ialu.varInsert(__Vfinal,"mdu_iter_cnt_next", &(TOP.scr1_pipe_ialu__DOT__mdu_iter_cnt_next), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_scr1_pipe_ialu.varInsert(__Vfinal,"mdu_iter_rdy", &(TOP.scr1_pipe_ialu__DOT__mdu_iter_rdy), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_scr1_pipe_ialu.varInsert(__Vfinal,"mdu_iter_req", &(TOP.scr1_pipe_ialu__DOT__mdu_iter_req), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_scr1_pipe_ialu.varInsert(__Vfinal,"mdu_res_c_ff", &(TOP.scr1_pipe_ialu__DOT__mdu_res_c_ff), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_scr1_pipe_ialu.varInsert(__Vfinal,"mdu_res_c_next", &(TOP.scr1_pipe_ialu__DOT__mdu_res_c_next), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_scr1_pipe_ialu.varInsert(__Vfinal,"mdu_res_hi_ff", &(TOP.scr1_pipe_ialu__DOT__mdu_res_hi_ff), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_scr1_pipe_ialu.varInsert(__Vfinal,"mdu_res_hi_next", &(TOP.scr1_pipe_ialu__DOT__mdu_res_hi_next), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_scr1_pipe_ialu.varInsert(__Vfinal,"mdu_res_lo_ff", &(TOP.scr1_pipe_ialu__DOT__mdu_res_lo_ff), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_scr1_pipe_ialu.varInsert(__Vfinal,"mdu_res_lo_next", &(TOP.scr1_pipe_ialu__DOT__mdu_res_lo_next), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_scr1_pipe_ialu.varInsert(__Vfinal,"mdu_res_upd", &(TOP.scr1_pipe_ialu__DOT__mdu_res_upd), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_scr1_pipe_ialu.varInsert(__Vfinal,"mdu_sum_op1", &(TOP.scr1_pipe_ialu__DOT__mdu_sum_op1), false, VLVT_UINT64,VLVD_NODIR|VLVF_PUB_RW,1 ,32,0);
        __Vscope_scr1_pipe_ialu.varInsert(__Vfinal,"mdu_sum_op2", &(TOP.scr1_pipe_ialu__DOT__mdu_sum_op2), false, VLVT_UINT64,VLVD_NODIR|VLVF_PUB_RW,1 ,32,0);
        __Vscope_scr1_pipe_ialu.varInsert(__Vfinal,"mdu_sum_res", &(TOP.scr1_pipe_ialu__DOT__mdu_sum_res), false, VLVT_UINT64,VLVD_NODIR|VLVF_PUB_RW,1 ,32,0);
        __Vscope_scr1_pipe_ialu.varInsert(__Vfinal,"mdu_sum_sub", &(TOP.scr1_pipe_ialu__DOT__mdu_sum_sub), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_scr1_pipe_ialu.varInsert(__Vfinal,"mul_cmd", &(TOP.scr1_pipe_ialu__DOT__mul_cmd), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,1,0);
        __Vscope_scr1_pipe_ialu.varInsert(__Vfinal,"mul_cmd_hi", &(TOP.scr1_pipe_ialu__DOT__mul_cmd_hi), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_scr1_pipe_ialu.varInsert(__Vfinal,"mul_op1", &(TOP.scr1_pipe_ialu__DOT__mul_op1), false, VLVT_UINT64,VLVD_NODIR|VLVF_PUB_RW,1 ,32,0);
        __Vscope_scr1_pipe_ialu.varInsert(__Vfinal,"mul_op1_is_sgn", &(TOP.scr1_pipe_ialu__DOT__mul_op1_is_sgn), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_scr1_pipe_ialu.varInsert(__Vfinal,"mul_op1_sgn", &(TOP.scr1_pipe_ialu__DOT__mul_op1_sgn), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_scr1_pipe_ialu.varInsert(__Vfinal,"mul_op2", &(TOP.scr1_pipe_ialu__DOT__mul_op2), false, VLVT_UINT64,VLVD_NODIR|VLVF_PUB_RW,1 ,32,0);
        __Vscope_scr1_pipe_ialu.varInsert(__Vfinal,"mul_op2_is_sgn", &(TOP.scr1_pipe_ialu__DOT__mul_op2_is_sgn), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_scr1_pipe_ialu.varInsert(__Vfinal,"mul_op2_sgn", &(TOP.scr1_pipe_ialu__DOT__mul_op2_sgn), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_scr1_pipe_ialu.varInsert(__Vfinal,"mul_res", &(TOP.scr1_pipe_ialu__DOT__mul_res), false, VLVT_UINT64,VLVD_NODIR|VLVF_PUB_RW,1 ,63,0);
        __Vscope_scr1_pipe_ialu.varInsert(__Vfinal,"rem_corr_req", &(TOP.scr1_pipe_ialu__DOT__rem_corr_req), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_scr1_pipe_ialu.varInsert(__Vfinal,"rst_n", &(TOP.scr1_pipe_ialu__DOT__rst_n), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_scr1_pipe_ialu.varInsert(__Vfinal,"shft_cmd", &(TOP.scr1_pipe_ialu__DOT__shft_cmd), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,1,0);
        __Vscope_scr1_pipe_ialu.varInsert(__Vfinal,"shft_op1", &(TOP.scr1_pipe_ialu__DOT__shft_op1), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_scr1_pipe_ialu.varInsert(__Vfinal,"shft_op2", &(TOP.scr1_pipe_ialu__DOT__shft_op2), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,4,0);
        __Vscope_scr1_pipe_ialu.varInsert(__Vfinal,"shft_res", &(TOP.scr1_pipe_ialu__DOT__shft_res), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_scr1_pipe_ialu__unnamedblk1.varInsert(__Vfinal,"inv", &(TOP.scr1_pipe_ialu__DOT__unnamedblk1__DOT__inv), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_scr1_pipe_ialu__unnamedblk1.varInsert(__Vfinal,"sgn", &(TOP.scr1_pipe_ialu__DOT__unnamedblk1__DOT__sgn), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
    }
}
