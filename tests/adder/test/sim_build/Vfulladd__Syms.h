// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef _Vfulladd__Syms_H_
#define _Vfulladd__Syms_H_

#include "verilated.h"

// INCLUDE MODULE CLASSES
#include "Vfulladd.h"

// SYMS CLASS
class Vfulladd__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_didInit;
    
    // SUBCELL STATE
    Vfulladd*                      TOPp;
    
    // COVERAGE
    uint32_t __Vcoverage[15];
    
    // SCOPE HIERARCHY
    VerilatedHierarchy __Vhier;
    
    // CREATORS
    Vfulladd__Syms(Vfulladd* topp, const char* namep);
    ~Vfulladd__Syms() {}
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    
} VL_ATTR_ALIGNED(64);

#endif  // guard
