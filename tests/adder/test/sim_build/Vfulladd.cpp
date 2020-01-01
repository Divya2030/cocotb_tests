// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfulladd.h for the primary calling header

#include "Vfulladd.h"
#include "Vfulladd__Syms.h"


//--------------------


void Vfulladd::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vfulladd::eval\n"); );
    Vfulladd__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    Vfulladd* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
#ifdef VL_DEBUG
    // Debug assertions
    _eval_debug_assertions();
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // MTask 0 start
    VL_DEBUG_IF(VL_DBG_MSGF("MTask0 starting\n"););
    Verilated::mtaskId(0);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT(__FILE__,__LINE__,__FILE__,"Verilated model didn't converge");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

void Vfulladd::_eval_initial_loop(Vfulladd__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    _eval_initial(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        _eval_settle(vlSymsp);
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT(__FILE__,__LINE__,__FILE__,"Verilated model didn't DC converge");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

//--------------------
// Internal Methods

VL_INLINE_OPT void Vfulladd::_combo__TOP__1(Vfulladd__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfulladd::_combo__TOP__1\n"); );
    Vfulladd* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->c_in) ^ vlTOPp->fulladd__DOT____Vtogcov__c_in)) {
        ++(vlSymsp->__Vcoverage[9]);
        vlTOPp->fulladd__DOT____Vtogcov__c_in = vlTOPp->c_in;
    }
    if ((1U & ((IData)(vlTOPp->b) ^ vlTOPp->fulladd__DOT____Vtogcov__b))) {
        ++(vlSymsp->__Vcoverage[5]);
        vlTOPp->fulladd__DOT____Vtogcov__b = ((0xeU 
                                               & (IData)(vlTOPp->fulladd__DOT____Vtogcov__b)) 
                                              | (1U 
                                                 & (IData)(vlTOPp->b)));
    }
    if ((2U & ((IData)(vlTOPp->b) ^ vlTOPp->fulladd__DOT____Vtogcov__b))) {
        ++(vlSymsp->__Vcoverage[6]);
        vlTOPp->fulladd__DOT____Vtogcov__b = ((0xdU 
                                               & (IData)(vlTOPp->fulladd__DOT____Vtogcov__b)) 
                                              | (2U 
                                                 & (IData)(vlTOPp->b)));
    }
    if ((4U & ((IData)(vlTOPp->b) ^ vlTOPp->fulladd__DOT____Vtogcov__b))) {
        ++(vlSymsp->__Vcoverage[7]);
        vlTOPp->fulladd__DOT____Vtogcov__b = ((0xbU 
                                               & (IData)(vlTOPp->fulladd__DOT____Vtogcov__b)) 
                                              | (4U 
                                                 & (IData)(vlTOPp->b)));
    }
    if ((8U & ((IData)(vlTOPp->b) ^ vlTOPp->fulladd__DOT____Vtogcov__b))) {
        ++(vlSymsp->__Vcoverage[8]);
        vlTOPp->fulladd__DOT____Vtogcov__b = ((7U & (IData)(vlTOPp->fulladd__DOT____Vtogcov__b)) 
                                              | (8U 
                                                 & (IData)(vlTOPp->b)));
    }
    if ((1U & ((IData)(vlTOPp->a) ^ vlTOPp->fulladd__DOT____Vtogcov__a))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlTOPp->fulladd__DOT____Vtogcov__a = ((0x1eU 
                                               & (IData)(vlTOPp->fulladd__DOT____Vtogcov__a)) 
                                              | (1U 
                                                 & (IData)(vlTOPp->a)));
    }
    if ((2U & ((IData)(vlTOPp->a) ^ vlTOPp->fulladd__DOT____Vtogcov__a))) {
        ++(vlSymsp->__Vcoverage[1]);
        vlTOPp->fulladd__DOT____Vtogcov__a = ((0x1dU 
                                               & (IData)(vlTOPp->fulladd__DOT____Vtogcov__a)) 
                                              | (2U 
                                                 & (IData)(vlTOPp->a)));
    }
    if ((4U & ((IData)(vlTOPp->a) ^ vlTOPp->fulladd__DOT____Vtogcov__a))) {
        ++(vlSymsp->__Vcoverage[2]);
        vlTOPp->fulladd__DOT____Vtogcov__a = ((0x1bU 
                                               & (IData)(vlTOPp->fulladd__DOT____Vtogcov__a)) 
                                              | (4U 
                                                 & (IData)(vlTOPp->a)));
    }
    if ((8U & ((IData)(vlTOPp->a) ^ vlTOPp->fulladd__DOT____Vtogcov__a))) {
        ++(vlSymsp->__Vcoverage[3]);
        vlTOPp->fulladd__DOT____Vtogcov__a = ((0x17U 
                                               & (IData)(vlTOPp->fulladd__DOT____Vtogcov__a)) 
                                              | (8U 
                                                 & (IData)(vlTOPp->a)));
    }
    if ((0x10U & ((IData)(vlTOPp->a) ^ vlTOPp->fulladd__DOT____Vtogcov__a))) {
        ++(vlSymsp->__Vcoverage[4]);
        vlTOPp->fulladd__DOT____Vtogcov__a = ((0xfU 
                                               & (IData)(vlTOPp->fulladd__DOT____Vtogcov__a)) 
                                              | (0x10U 
                                                 & (IData)(vlTOPp->a)));
    }
    vlTOPp->c_out = (1U & ((((IData)(vlTOPp->a) + (IData)(vlTOPp->b)) 
                            + (IData)(vlTOPp->c_in)) 
                           >> 4U));
    vlTOPp->sum = (0xfU & (((IData)(vlTOPp->a) + (IData)(vlTOPp->b)) 
                           + (IData)(vlTOPp->c_in)));
    if (((IData)(vlTOPp->c_out) ^ vlTOPp->fulladd__DOT____Vtogcov__c_out)) {
        ++(vlSymsp->__Vcoverage[10]);
        vlTOPp->fulladd__DOT____Vtogcov__c_out = vlTOPp->c_out;
    }
    if ((1U & ((IData)(vlTOPp->sum) ^ vlTOPp->fulladd__DOT____Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[11]);
        vlTOPp->fulladd__DOT____Vtogcov__sum = ((0xeU 
                                                 & (IData)(vlTOPp->fulladd__DOT____Vtogcov__sum)) 
                                                | (1U 
                                                   & (IData)(vlTOPp->sum)));
    }
    if ((2U & ((IData)(vlTOPp->sum) ^ vlTOPp->fulladd__DOT____Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[12]);
        vlTOPp->fulladd__DOT____Vtogcov__sum = ((0xdU 
                                                 & (IData)(vlTOPp->fulladd__DOT____Vtogcov__sum)) 
                                                | (2U 
                                                   & (IData)(vlTOPp->sum)));
    }
    if ((4U & ((IData)(vlTOPp->sum) ^ vlTOPp->fulladd__DOT____Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[13]);
        vlTOPp->fulladd__DOT____Vtogcov__sum = ((0xbU 
                                                 & (IData)(vlTOPp->fulladd__DOT____Vtogcov__sum)) 
                                                | (4U 
                                                   & (IData)(vlTOPp->sum)));
    }
    if ((8U & ((IData)(vlTOPp->sum) ^ vlTOPp->fulladd__DOT____Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[14]);
        vlTOPp->fulladd__DOT____Vtogcov__sum = ((7U 
                                                 & (IData)(vlTOPp->fulladd__DOT____Vtogcov__sum)) 
                                                | (8U 
                                                   & (IData)(vlTOPp->sum)));
    }
}

void Vfulladd::_eval(Vfulladd__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfulladd::_eval\n"); );
    Vfulladd* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
}

VL_INLINE_OPT QData Vfulladd::_change_request(Vfulladd__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfulladd::_change_request\n"); );
    Vfulladd* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vfulladd::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfulladd::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((a & 0xe0U))) {
        Verilated::overWidthError("a");}
    if (VL_UNLIKELY((b & 0xf0U))) {
        Verilated::overWidthError("b");}
    if (VL_UNLIKELY((c_in & 0xfeU))) {
        Verilated::overWidthError("c_in");}
}
#endif // VL_DEBUG
