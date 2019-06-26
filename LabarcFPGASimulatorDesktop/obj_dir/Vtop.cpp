// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop.h"              // For This
#include "Vtop__Syms.h"


//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(Vtop) {
    Vtop__Syms* __restrict vlSymsp = __VlSymsp = new Vtop__Syms(this, name());
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void Vtop::__Vconfigure(Vtop__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

Vtop::~Vtop() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------


void Vtop::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtop::eval\n"); );
    Vtop__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
#ifdef VL_DEBUG
    // Debug assertions
    _eval_debug_assertions();
#endif // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    while (VL_LIKELY(__Vchange)) {
	VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
	_eval(vlSymsp);
	__Vchange = _change_request(vlSymsp);
	if (VL_UNLIKELY(++__VclockLoop > 100)) VL_FATAL_MT(__FILE__,__LINE__,__FILE__,"Verilated model didn't converge");
    }
}

void Vtop::_eval_initial_loop(Vtop__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    _eval_initial(vlSymsp);
    int __VclockLoop = 0;
    QData __Vchange = 1;
    while (VL_LIKELY(__Vchange)) {
	_eval_settle(vlSymsp);
	_eval(vlSymsp);
	__Vchange = _change_request(vlSymsp);
	if (VL_UNLIKELY(++__VclockLoop > 100)) VL_FATAL_MT(__FILE__,__LINE__,__FILE__,"Verilated model didn't DC converge");
    }
}

//--------------------
// Internal Methods

VL_INLINE_OPT void Vtop::_sequent__TOP__1(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_sequent__TOP__1\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    VL_SIG8(__Vdly__top__DOT__clk_1,0,0);
    VL_SIG8(__Vdly__top__DOT__estado_atual,3,0);
    VL_SIG8(__Vdly__top__DOT__num_carros,3,0);
    // Body
    __Vdly__top__DOT__clk_1 = vlTOPp->top__DOT__clk_1;
    __Vdly__top__DOT__estado_atual = vlTOPp->top__DOT__estado_atual;
    __Vdly__top__DOT__num_carros = vlTOPp->top__DOT__num_carros;
    // ALWAYS at top.sv:32
    __Vdly__top__DOT__clk_1 = (1U & (~ (IData)(vlTOPp->top__DOT__clk_1)));
    // ALWAYS at top.sv:32
    if (vlTOPp->top__DOT__reset) {
	__Vdly__top__DOT__estado_atual = 0U;
	__Vdly__top__DOT__num_carros = 0U;
    }
    if ((0U == (IData)(vlTOPp->top__DOT__estado_atual))) {
	if (((1U < (IData)(vlTOPp->top__DOT__cancela_entrada)) 
	     & (0xaU > (IData)(vlTOPp->top__DOT__num_carros)))) {
	    __Vdly__top__DOT__estado_atual = 1U;
	} else {
	    if (((IData)(vlTOPp->top__DOT__cancela_saida) 
		 & (0U < (IData)(vlTOPp->top__DOT__num_carros)))) {
		__Vdly__top__DOT__estado_atual = 3U;
	    }
	}
    } else {
	if ((1U == (IData)(vlTOPp->top__DOT__estado_atual))) {
	    if ((2U > (IData)(vlTOPp->top__DOT__cancela_entrada))) {
		__Vdly__top__DOT__estado_atual = 2U;
	    }
	} else {
	    if ((2U == (IData)(vlTOPp->top__DOT__estado_atual))) {
		__Vdly__top__DOT__num_carros = (0xfU 
						& ((IData)(1U) 
						   + (IData)(vlTOPp->top__DOT__num_carros)));
		__Vdly__top__DOT__estado_atual = 0U;
	    } else {
		if ((3U == (IData)(vlTOPp->top__DOT__estado_atual))) {
		    if ((1U & (~ (IData)(vlTOPp->top__DOT__cancela_saida)))) {
			__Vdly__top__DOT__estado_atual = 4U;
		    }
		} else {
		    if ((4U == (IData)(vlTOPp->top__DOT__estado_atual))) {
			__Vdly__top__DOT__num_carros 
			    = (0xfU & ((IData)(vlTOPp->top__DOT__num_carros) 
				       - (IData)(1U)));
			__Vdly__top__DOT__estado_atual = 0U;
		    }
		}
	    }
	}
    }
    vlTOPp->top__DOT__clk_1 = __Vdly__top__DOT__clk_1;
    vlTOPp->top__DOT__estado_atual = __Vdly__top__DOT__estado_atual;
    vlTOPp->top__DOT__num_carros = __Vdly__top__DOT__num_carros;
}

VL_INLINE_OPT void Vtop::_settle__TOP__2(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_settle__TOP__2\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at top.sv:25
    vlTOPp->top__DOT__cancela_entrada = (3U & (IData)(vlTOPp->SWI));
    vlTOPp->top__DOT__cancela_saida = (1U & ((IData)(vlTOPp->SWI) 
					     >> 7U));
    vlTOPp->top__DOT__reset = (1U & ((IData)(vlTOPp->SWI) 
				     >> 6U));
    // ALWAYS at top.sv:52
    vlTOPp->LED = ((0x87U & (IData)(vlTOPp->LED)) | 
		   ((IData)(vlTOPp->top__DOT__num_carros) 
		    << 3U));
    vlTOPp->LED = ((0xfeU & (IData)(vlTOPp->LED)) | 
		   (1U & (IData)(vlTOPp->top__DOT__cancela_entrada)));
    vlTOPp->LED = ((0xfdU & (IData)(vlTOPp->LED)) | 
		   ((IData)(vlTOPp->top__DOT__cancela_saida) 
		    << 1U));
    vlTOPp->LED = ((0x7fU & (IData)(vlTOPp->LED)) | 
		   ((IData)(vlTOPp->top__DOT__clk_1) 
		    << 7U));
}

void Vtop::_eval(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_eval\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->clk_2) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_2)))) {
	vlTOPp->_sequent__TOP__1(vlSymsp);
    }
    vlTOPp->_settle__TOP__2(vlSymsp);
    // Final
    vlTOPp->__Vclklast__TOP__clk_2 = vlTOPp->clk_2;
}

void Vtop::_eval_initial(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_eval_initial\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vtop::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::final\n"); );
    // Variables
    Vtop__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vtop::_eval_settle(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_eval_settle\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__2(vlSymsp);
}

VL_INLINE_OPT QData Vtop::_change_request(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_change_request\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vtop::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((clk_2 & 0xfeU))) {
	Verilated::overWidthError("clk_2");}
}
#endif // VL_DEBUG

void Vtop::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_ctor_var_reset\n"); );
    // Body
    clk_2 = VL_RAND_RESET_I(1);
    SWI = VL_RAND_RESET_I(8);
    LED = VL_RAND_RESET_I(8);
    SEG = VL_RAND_RESET_I(8);
    lcd_a = VL_RAND_RESET_Q(64);
    lcd_b = VL_RAND_RESET_Q(64);
    lcd_instruction = VL_RAND_RESET_I(32);
    { int __Vi0=0; for (; __Vi0<32; ++__Vi0) {
	    lcd_registrador[__Vi0] = VL_RAND_RESET_I(8);
    }}
    lcd_pc = VL_RAND_RESET_I(8);
    lcd_SrcA = VL_RAND_RESET_I(8);
    lcd_SrcB = VL_RAND_RESET_I(8);
    lcd_ALUResult = VL_RAND_RESET_I(8);
    lcd_Result = VL_RAND_RESET_I(8);
    lcd_WriteData = VL_RAND_RESET_I(8);
    lcd_ReadData = VL_RAND_RESET_I(8);
    lcd_MemWrite = VL_RAND_RESET_I(1);
    lcd_Branch = VL_RAND_RESET_I(1);
    lcd_MemtoReg = VL_RAND_RESET_I(1);
    lcd_RegWrite = VL_RAND_RESET_I(1);
    top__DOT__num_carros = VL_RAND_RESET_I(4);
    top__DOT__cancela_entrada = VL_RAND_RESET_I(2);
    top__DOT__cancela_saida = VL_RAND_RESET_I(1);
    top__DOT__estado_atual = VL_RAND_RESET_I(4);
    top__DOT__clk_1 = VL_RAND_RESET_I(1);
    top__DOT__reset = VL_RAND_RESET_I(1);
    __Vclklast__TOP__clk_2 = VL_RAND_RESET_I(1);
}
