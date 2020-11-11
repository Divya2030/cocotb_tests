// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vtop__Syms.h"
#include "Vtop.h"



// FUNCTIONS
Vtop__Syms::Vtop__Syms(Vtop* topp, const char* namep)
    // Setup locals
    : __Vm_namep(namep)
    , __Vm_didInit(false)
    // Setup submodule names
{
    // Pointer to top level
    TOPp = topp;
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOPp->__Vconfigure(this, true);
    // Setup scopes
    __Vscope_TOP.configure(this, name(), "TOP", "TOP", 0, VerilatedScope::SCOPE_OTHER);
    __Vscope_adder.configure(this, name(), "adder", "adder", -9, VerilatedScope::SCOPE_MODULE);
    
    // Setup scope hierarchy
    __Vhier.add(0, &__Vscope_adder);
    
    // Setup export functions
    for (int __Vfinal=0; __Vfinal<2; __Vfinal++) {
        __Vscope_TOP.varInsert(__Vfinal,"A", &(TOPp->A), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,1 ,3,0);
        __Vscope_TOP.varInsert(__Vfinal,"B", &(TOPp->B), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,1 ,3,0);
        __Vscope_TOP.varInsert(__Vfinal,"X", &(TOPp->X), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,1 ,4,0);
        __Vscope_adder.varInsert(__Vfinal,"A", &(TOPp->adder__DOT__A), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,3,0);
        __Vscope_adder.varInsert(__Vfinal,"B", &(TOPp->adder__DOT__B), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,3,0);
        __Vscope_adder.varInsert(__Vfinal,"X", &(TOPp->adder__DOT__X), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,4,0);
    }
}
