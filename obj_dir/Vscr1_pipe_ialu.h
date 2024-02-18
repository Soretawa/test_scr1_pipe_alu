// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary model header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef VERILATED_VSCR1_PIPE_IALU_H_
#define VERILATED_VSCR1_PIPE_IALU_H_  // guard

#include "verilated.h"

class Vscr1_pipe_ialu__Syms;
class Vscr1_pipe_ialu___024root;

// This class is the main interface to the Verilated model
class alignas(VL_CACHE_LINE_BYTES) Vscr1_pipe_ialu VL_NOT_FINAL : public VerilatedModel {
  private:
    // Symbol table holding complete model state (owned by this class)
    Vscr1_pipe_ialu__Syms* const vlSymsp;

  public:

    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(&clk,0,0);
    VL_IN8(&rst_n,0,0);
    VL_IN8(&exu2ialu_rvm_cmd_vd_i,0,0);
    VL_OUT8(&ialu2exu_rvm_res_rdy_o,0,0);
    VL_IN8(&exu2ialu_cmd_i,4,0);
    VL_OUT8(&ialu2exu_cmp_res_o,0,0);
    VL_IN(&exu2ialu_main_op1_i,31,0);
    VL_IN(&exu2ialu_main_op2_i,31,0);
    VL_OUT(&ialu2exu_main_res_o,31,0);
    VL_IN(&exu2ialu_addr_op1_i,31,0);
    VL_IN(&exu2ialu_addr_op2_i,31,0);
    VL_OUT(&ialu2exu_addr_res_o,31,0);

    // CELLS
    // Public to allow access to /* verilator public */ items.
    // Otherwise the application code can consider these internals.

    // Root instance pointer to allow access to model internals,
    // including inlined /* verilator public_flat_* */ items.
    Vscr1_pipe_ialu___024root* const rootp;

    // CONSTRUCTORS
    /// Construct the model; called by application code
    /// If contextp is null, then the model will use the default global context
    /// If name is "", then makes a wrapper with a
    /// single model invisible with respect to DPI scope names.
    explicit Vscr1_pipe_ialu(VerilatedContext* contextp, const char* name = "TOP");
    explicit Vscr1_pipe_ialu(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    virtual ~Vscr1_pipe_ialu();
  private:
    VL_UNCOPYABLE(Vscr1_pipe_ialu);  ///< Copying not allowed

  public:
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval() { eval_step(); }
    /// Evaluate when calling multiple units/models per time step.
    void eval_step();
    /// Evaluate at end of a timestep for tracing, when using eval_step().
    /// Application must call after all eval() and before time changes.
    void eval_end_step() {}
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    /// Are there scheduled events to handle?
    bool eventsPending();
    /// Returns time at next time slot. Aborts if !eventsPending()
    uint64_t nextTimeSlot();
    /// Trace signals in the model; called by application code
    void trace(VerilatedVcdC* tfp, int levels, int options = 0);
    /// Retrieve name of this model instance (as passed to constructor).
    const char* name() const;

    // Abstract methods from VerilatedModel
    const char* hierName() const override final;
    const char* modelName() const override final;
    unsigned threads() const override final;
    /// Prepare for cloning the model at the process level (e.g. fork in Linux)
    /// Release necessary resources. Called before cloning.
    void prepareClone() const;
    /// Re-init after cloning the model at the process level (e.g. fork in Linux)
    /// Re-allocate necessary resources. Called after cloning.
    void atClone() const;
};

#endif  // guard
