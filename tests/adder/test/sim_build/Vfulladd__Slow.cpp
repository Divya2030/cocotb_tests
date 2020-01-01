// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfulladd.h for the primary calling header

#include "Vfulladd.h"
#include "Vfulladd__Syms.h"


//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(Vfulladd) {
    Vfulladd__Syms* __restrict vlSymsp = __VlSymsp = new Vfulladd__Syms(this, name());
    Vfulladd* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void Vfulladd::__Vconfigure(Vfulladd__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    this->_configure_coverage(vlSymsp, first);
}

Vfulladd::~Vfulladd() {
    delete __VlSymsp; __VlSymsp=NULL;
}

// Coverage
void Vfulladd::__vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
    const char* hierp, const char* pagep, const char* commentp) {
    static uint32_t fake_zero_count = 0;
    if (!enable) countp = &fake_zero_count;
    *countp = 0;
    VL_COVER_INSERT(countp,  "filename",filenamep,  "lineno",lineno,  "column",column,
        "hier",std::string(name())+hierp,  "page",pagep,  "comment",commentp);
}

//--------------------
// Internal Methods

void Vfulladd::_eval_initial(Vfulladd__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfulladd::_eval_initial\n"); );
    Vfulladd* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vfulladd::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfulladd::final\n"); );
    // Variables
    Vfulladd__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vfulladd* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vfulladd::_eval_settle(Vfulladd__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfulladd::_eval_settle\n"); );
    Vfulladd* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
}

void Vfulladd::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfulladd::_ctor_var_reset\n"); );
    // Body
    a = 0;
    b = 0;
    c_in = 0;
    c_out = 0;
    sum = 0;
    fulladd__DOT____Vtogcov__a = 0;
    fulladd__DOT____Vtogcov__b = 0;
    fulladd__DOT____Vtogcov__c_in = 0;
    fulladd__DOT____Vtogcov__c_out = 0;
    fulladd__DOT____Vtogcov__sum = 0;
}

void Vfulladd::_configure_coverage(Vfulladd__Syms* __restrict vlSymsp, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfulladd::_configure_coverage\n"); );
    // Body
    if (0 && vlSymsp && first) {}  // Prevent unused
    __vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "/home/divya/cocotb_tests/tests/adder/hdl/adder.v", 1, 0, ".fulladd", "v_toggle/fulladd", "a[0]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[1]), first, "/home/divya/cocotb_tests/tests/adder/hdl/adder.v", 1, 0, ".fulladd", "v_toggle/fulladd", "a[1]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[2]), first, "/home/divya/cocotb_tests/tests/adder/hdl/adder.v", 1, 0, ".fulladd", "v_toggle/fulladd", "a[2]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[3]), first, "/home/divya/cocotb_tests/tests/adder/hdl/adder.v", 1, 0, ".fulladd", "v_toggle/fulladd", "a[3]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[4]), first, "/home/divya/cocotb_tests/tests/adder/hdl/adder.v", 1, 0, ".fulladd", "v_toggle/fulladd", "a[4]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[5]), first, "/home/divya/cocotb_tests/tests/adder/hdl/adder.v", 2, 0, ".fulladd", "v_toggle/fulladd", "b[0]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "/home/divya/cocotb_tests/tests/adder/hdl/adder.v", 2, 0, ".fulladd", "v_toggle/fulladd", "b[1]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[7]), first, "/home/divya/cocotb_tests/tests/adder/hdl/adder.v", 2, 0, ".fulladd", "v_toggle/fulladd", "b[2]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[8]), first, "/home/divya/cocotb_tests/tests/adder/hdl/adder.v", 2, 0, ".fulladd", "v_toggle/fulladd", "b[3]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[9]), first, "/home/divya/cocotb_tests/tests/adder/hdl/adder.v", 3, 0, ".fulladd", "v_toggle/fulladd", "c_in");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[10]), first, "/home/divya/cocotb_tests/tests/adder/hdl/adder.v", 4, 0, ".fulladd", "v_toggle/fulladd", "c_out");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[11]), first, "/home/divya/cocotb_tests/tests/adder/hdl/adder.v", 5, 0, ".fulladd", "v_toggle/fulladd", "sum[0]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[12]), first, "/home/divya/cocotb_tests/tests/adder/hdl/adder.v", 5, 0, ".fulladd", "v_toggle/fulladd", "sum[1]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[13]), first, "/home/divya/cocotb_tests/tests/adder/hdl/adder.v", 5, 0, ".fulladd", "v_toggle/fulladd", "sum[2]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[14]), first, "/home/divya/cocotb_tests/tests/adder/hdl/adder.v", 5, 0, ".fulladd", "v_toggle/fulladd", "sum[3]");
}
