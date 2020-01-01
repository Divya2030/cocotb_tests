// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _Vfulladd_H_
#define _Vfulladd_H_

#include "verilated.h"
#include "verilated_cov.h"

class Vfulladd__Syms;

//----------

VL_MODULE(Vfulladd) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    // Begin mtask footprint all: 
    VL_IN8(a,4,0);
    VL_IN8(b,3,0);
    VL_IN8(c_in,0,0);
    VL_OUT8(c_out,0,0);
    VL_OUT8(sum,3,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    // Begin mtask footprint all: 
    VL_SIG8(fulladd__DOT____Vtogcov__a,4,0);
    VL_SIG8(fulladd__DOT____Vtogcov__b,3,0);
    VL_SIG8(fulladd__DOT____Vtogcov__c_in,0,0);
    VL_SIG8(fulladd__DOT____Vtogcov__c_out,0,0);
    VL_SIG8(fulladd__DOT____Vtogcov__sum,3,0);
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    Vfulladd__Syms* __VlSymsp;  // Symbol table
  private:
    // Coverage
    void __vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp);
    
    // PARAMETERS
    // Parameters marked /*verilator public*/ for use by application code
  public:
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vfulladd);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    Vfulladd(const char* name="TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~Vfulladd();
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval();
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(Vfulladd__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(Vfulladd__Syms* symsp, bool first);
  private:
    static QData _change_request(Vfulladd__Syms* __restrict vlSymsp);
  public:
    static void _combo__TOP__1(Vfulladd__Syms* __restrict vlSymsp);
  private:
    void _configure_coverage(Vfulladd__Syms* __restrict vlSymsp, bool first) VL_ATTR_COLD;
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(Vfulladd__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif // VL_DEBUG
  public:
    static void _eval_initial(Vfulladd__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(Vfulladd__Syms* __restrict vlSymsp) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(128);

#endif // guard
