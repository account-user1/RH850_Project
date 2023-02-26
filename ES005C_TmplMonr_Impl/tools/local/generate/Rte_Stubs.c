/******************************************************************************************************************
* Copyright 2016 Nexteer
* Nexteer Confidential
*
* Module File Name:   Rte_Stubs.c
* Module Description: Stubs for Polyspace analysis.  Generated from TL109A_SwcSuprt.
* Project:            CBD
* Author:             Owen Tosh
******************************************************************************************************************/


#include "Rte_TmplMonr.h"
#include "float.h"


/*** Server Port Stubs ***/

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_TmplMonr_CtrlErrOut_Oper(boolean PinSt_Arg, TrigReg1 TrigReg_Arg)
{
    TmplMonr_Srv_CtrlErrOut_PinSt = PinSt_Arg;
    TmplMonr_Srv_CtrlErrOut_TrigReg = TrigReg_Arg;
    return (Std_ReturnType)0U;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_TmplMonr_GetRefTmr1MicroSec32bit_Oper(uint32 * RefTmr_Arg)
{
    *RefTmr_Arg = TmplMonr_Srv_GetRefTmr1MicroSec32bit_RefTmr;
    return (Std_ReturnType)0U;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_TmplMonr_GetTiSpan1MicroSec32bit_Oper(uint32 RefTmr_Arg, uint32 * TiSpan_Arg)
{
    TmplMonr_Srv_GetTiSpan1MicroSec32bit_RefTmr = RefTmr_Arg;
    *TiSpan_Arg = TmplMonr_Srv_GetTiSpan1MicroSec32bit_TiSpan;
    return (Std_ReturnType)0U;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_TmplMonr_IoHwAb_GetGpioPwrOutpEnaFb_Oper(boolean * PinSt_Arg)
{
    *PinSt_Arg = TmplMonr_Srv_IoHwAb_GetGpioPwrOutpEnaFb_PinSt;
    return TmplMonr_Srv_IoHwAb_GetGpioPwrOutpEnaFb_Return;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_TmplMonr_IoHwAb_SetGpioTmplMonrWdg_Oper(boolean PinSt_Arg)
{
    TmplMonr_Srv_IoHwAb_SetGpioTmplMonrWdg_PinSt = PinSt_Arg;
    return TmplMonr_Srv_IoHwAb_SetGpioTmplMonrWdg_Return;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_TmplMonr_SetNtcSts_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg)
{
    TmplMonr_Srv_SetNtcSts_NtcNr = NtcNr_Arg;
    TmplMonr_Srv_SetNtcSts_NtcStInfo = NtcStInfo_Arg;
    TmplMonr_Srv_SetNtcSts_NtcSts = NtcSts_Arg;
    TmplMonr_Srv_SetNtcSts_DebStep = DebStep_Arg;
    return TmplMonr_Srv_SetNtcSts_Return;
}


/*** Client Port Stubs ***/

FUNC(void, AUTOMATIC) Rte_Stub(void)
{
    TmplMonrInit1();
    TmplMonrPer1();
    TmplMonrPer2();
    TmplMonrPer3();
}

