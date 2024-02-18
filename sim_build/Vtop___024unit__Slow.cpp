// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop__Syms.h"
#include "Vtop___024unit.h"

// Parameter definitions for Vtop___024unit
constexpr CData/*3:0*/ Vtop___024unit::SCR1_EXC_CODE_IRQ_M_SOFTWARE;
constexpr CData/*3:0*/ Vtop___024unit::SCR1_EXC_CODE_IRQ_M_TIMER;
constexpr CData/*3:0*/ Vtop___024unit::SCR1_EXC_CODE_IRQ_M_EXTERNAL;
constexpr CData/*3:0*/ Vtop___024unit::SCR1_EXC_CODE_RESET;
constexpr IData/*31:0*/ Vtop___024unit::SCR1_MTVEC_BASE_WR_BITS;
constexpr IData/*31:0*/ Vtop___024unit::SCR1_TDU_TRIG_NUM;
constexpr IData/*31:0*/ Vtop___024unit::SCR1_ARCH_RST_VECTOR;
constexpr IData/*31:0*/ Vtop___024unit::SCR1_ARCH_MTVEC_BASE;
constexpr IData/*31:0*/ Vtop___024unit::SCR1_TCM_ADDR_MASK;
constexpr IData/*31:0*/ Vtop___024unit::SCR1_TCM_ADDR_PATTERN;
constexpr IData/*31:0*/ Vtop___024unit::SCR1_TIMER_ADDR_MASK;
constexpr IData/*31:0*/ Vtop___024unit::SCR1_TIMER_ADDR_PATTERN;
constexpr IData/*31:0*/ Vtop___024unit::SCR1_SIM_EXIT_ADDR;
constexpr IData/*31:0*/ Vtop___024unit::SCR1_SIM_PRINT_ADDR;
constexpr IData/*31:0*/ Vtop___024unit::SCR1_SIM_EXT_IRQ_ADDR;
constexpr IData/*31:0*/ Vtop___024unit::SCR1_SIM_SOFT_IRQ_ADDR;
constexpr IData/*31:0*/ Vtop___024unit::SCR1_CSR_ADDR_WIDTH;
constexpr IData/*31:0*/ Vtop___024unit::SCR1_CSR_MTVEC_BASE_ZERO_BITS;
constexpr IData/*31:0*/ Vtop___024unit::SCR1_CSR_MTVEC_BASE_VAL_BITS;
constexpr IData/*25:0*/ Vtop___024unit::SCR1_CSR_MTVEC_BASE_WR_RST_VAL;
constexpr IData/*31:0*/ Vtop___024unit::SCR1_CSR_MTVEC_BASE_RO_BITS;
constexpr IData/*31:0*/ Vtop___024unit::SCR1_EXC_CODE_WIDTH_E;
constexpr IData/*31:0*/ Vtop___024unit::SCR1_IALU_OP_ALL_NUM_E;
constexpr IData/*31:0*/ Vtop___024unit::SCR1_IALU_OP_WIDTH_E;
constexpr IData/*31:0*/ Vtop___024unit::SCR1_IALU_CMD_ALL_NUM_E;
constexpr IData/*31:0*/ Vtop___024unit::SCR1_IALU_CMD_WIDTH_E;
constexpr IData/*31:0*/ Vtop___024unit::SCR1_SUM2_OP_ALL_NUM_E;
constexpr IData/*31:0*/ Vtop___024unit::SCR1_SUM2_OP_WIDTH_E;
constexpr IData/*31:0*/ Vtop___024unit::SCR1_LSU_CMD_ALL_NUM_E;
constexpr IData/*31:0*/ Vtop___024unit::SCR1_LSU_CMD_WIDTH_E;
constexpr IData/*31:0*/ Vtop___024unit::SCR1_CSR_OP_ALL_NUM_E;
constexpr IData/*31:0*/ Vtop___024unit::SCR1_CSR_OP_WIDTH_E;
constexpr IData/*31:0*/ Vtop___024unit::SCR1_CSR_CMD_ALL_NUM_E;
constexpr IData/*31:0*/ Vtop___024unit::SCR1_CSR_CMD_WIDTH_E;
constexpr IData/*31:0*/ Vtop___024unit::SCR1_RD_WB_ALL_NUM_E;
constexpr IData/*31:0*/ Vtop___024unit::SCR1_RD_WB_WIDTH_E;
constexpr IData/*31:0*/ Vtop___024unit::SCR1_GPR_FIELD_WIDTH;


void Vtop___024unit___ctor_var_reset(Vtop___024unit* vlSelf);

Vtop___024unit::Vtop___024unit(Vtop__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtop___024unit___ctor_var_reset(this);
}

void Vtop___024unit___configure_coverage(Vtop___024unit* vlSelf, bool first);

void Vtop___024unit::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
    Vtop___024unit___configure_coverage(this, first);
}

Vtop___024unit::~Vtop___024unit() {
}

// Coverage
void Vtop___024unit::__vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
    const char* hierp, const char* pagep, const char* commentp, const char* linescovp) {
    uint32_t* count32p = countp;
    static uint32_t fake_zero_count = 0;
    if (!enable) count32p = &fake_zero_count;
    *count32p = 0;
    VL_COVER_INSERT(vlSymsp->_vm_contextp__->coveragep(), VerilatedModule::name(), count32p,  "filename",filenamep,  "lineno",lineno,  "column",column,
        "hier",std::string{VerilatedModule::name()} + hierp,  "page",pagep,  "comment",commentp,  (linescovp[0] ? "linescov" : ""), linescovp);
}
