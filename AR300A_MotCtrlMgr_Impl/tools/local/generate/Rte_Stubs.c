/******************************************************************************************************************
* Copyright 2016 Nexteer
* Nexteer Confidential
*
* Module File Name:   Rte_Stubs.c
* Module Description: Stubs for Polyspace analysis.  Generated from TL109A_SwcSuprt.
* Project:            CBD
* Author:             Owen Tosh
******************************************************************************************************************/


#include "Rte_CDD_MotCtrlMgr.h"
#include "float.h"


/*** Server Port Stubs ***/

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CDD_MotCtrlMgr_DmaEna2MilliSecToMotCtrlTrf_Oper()
{
    return (Std_ReturnType)0U;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CDD_MotCtrlMgr_DmaWaitForMotCtrlTo2MilliSecTrf_Oper()
{
    return MotCtrlMgr_Srv_DmaWaitForMotCtrlTo2MilliSecTrf_Return;
}


/*** Client Port Stubs ***/

FUNC(void, AUTOMATIC) Rte_Stub(void)
{
    MotCtrlMgrPer1();
    MotCtrlMgrPer2();
}

