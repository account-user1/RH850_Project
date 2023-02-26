/******************************************************************************************************************
* Copyright 2016 Nexteer
* Nexteer Confidential
*
* Module File Name:   Rte_Stubs.c
* Module Description: Stubs for Polyspace analysis.  Generated from TL109A_SwcSuprt.
* Project:            CBD
* Author:             Owen Tosh
******************************************************************************************************************/


#include "Rte_DualCtrlrOutpMgr.h"
#include "float.h"


/*** Server Port Stubs ***/

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DualCtrlrOutpMgr_GetRefTmr100MicroSec32bit_Oper(uint32 * RefTmr_Arg)
{
    *RefTmr_Arg = DualCtrlrOutpMgr_Srv_GetRefTmr100MicroSec32bit_RefTmr;
    return (Std_ReturnType)0U;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DualCtrlrOutpMgr_GetSigImcData_logl_Oper(uint16 SigId_Arg, boolean * Data_Arg, ImcArbnRxSts1 * Sts_Arg)
{
    DualCtrlrOutpMgr_Srv_GetSigImcData_logl_SigId = SigId_Arg;
    *Data_Arg = DualCtrlrOutpMgr_Srv_GetSigImcData_logl_Data;
    *Sts_Arg = DualCtrlrOutpMgr_Srv_GetSigImcData_logl_Sts;
    return DualCtrlrOutpMgr_Srv_GetSigImcData_logl_Return;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DualCtrlrOutpMgr_GetTiSpan100MicroSec32bit_Oper(uint32 RefTmr_Arg, uint32 * TiSpan_Arg)
{
    DualCtrlrOutpMgr_Srv_GetTiSpan100MicroSec32bit_RefTmr = RefTmr_Arg;
    *TiSpan_Arg = DualCtrlrOutpMgr_Srv_GetTiSpan100MicroSec32bit_TiSpan;
    return (Std_ReturnType)0U;
}


/*** Client Port Stubs ***/

FUNC(void, AUTOMATIC) Rte_Stub(void)
{
    DualCtrlrOutpMgrInit1();
    DualCtrlrOutpMgrPer1();
    DualCtrlrOutpMgrPer2();
}

