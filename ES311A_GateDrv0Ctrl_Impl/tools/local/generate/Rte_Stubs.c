/******************************************************************************************************************
* Copyright 2016 Nexteer
* Nexteer Confidential
*
* Module File Name:   Rte_Stubs.c
* Module Description: Stubs for Polyspace analysis.  Generated from TL109A_SwcSuprt.
* Project:            CBD
* Author:             Owen Tosh
******************************************************************************************************************/


#include "Rte_GateDrv0Ctrl.h"
#include "float.h"


/*** Server Port Stubs ***/

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_GateDrv0Ctrl_GetNtcQlfrSts_Oper(NtcNr1 NtcNr_Arg, SigQlfr1 * NtcQlfr_Arg)
{
    GateDrv0Ctrl_Srv_GetNtcQlfrSts_NtcNr = NtcNr_Arg;
    *NtcQlfr_Arg = GateDrv0Ctrl_Srv_GetNtcQlfrSts_NtcQlfr;
    return GateDrv0Ctrl_Srv_GetNtcQlfrSts_Return;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_GateDrv0Ctrl_IoHwAb_GetGpioMotDrvr0Diag_Oper(boolean * PinSt_Arg)
{
    *PinSt_Arg = GateDrv0Ctrl_Srv_IoHwAb_GetGpioMotDrvr0Diag_PinSt;
    return GateDrv0Ctrl_Srv_IoHwAb_GetGpioMotDrvr0Diag_Return;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_GateDrv0Ctrl_IoHwAb_SetGpioGateDrv0Rst_Oper(boolean PinSt_Arg)
{
    GateDrv0Ctrl_Srv_IoHwAb_SetGpioGateDrv0Rst_PinSt = PinSt_Arg;
    return (Std_ReturnType)0U;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_GateDrv0Ctrl_IoHwAb_SetGpioSysFlt2A_Oper(boolean PinSt_Arg)
{
    GateDrv0Ctrl_Srv_IoHwAb_SetGpioSysFlt2A_PinSt = PinSt_Arg;
    return GateDrv0Ctrl_Srv_IoHwAb_SetGpioSysFlt2A_Return;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_GateDrv0Ctrl_SetNtcSts_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg)
{
    GateDrv0Ctrl_Srv_SetNtcSts_NtcNr = NtcNr_Arg;
    GateDrv0Ctrl_Srv_SetNtcSts_NtcStInfo = NtcStInfo_Arg;
    GateDrv0Ctrl_Srv_SetNtcSts_NtcSts = NtcSts_Arg;
    GateDrv0Ctrl_Srv_SetNtcSts_DebStep = DebStep_Arg;
    return GateDrv0Ctrl_Srv_SetNtcSts_Return;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_GateDrv0Ctrl_SetNtcStsAndSnpshtData_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg, uint32 SpclSnpshtData0_Arg, uint32 SpclSnpshtData1_Arg, uint32 SpclSnpshtData2_Arg)
{
    GateDrv0Ctrl_Srv_SetNtcStsAndSnpshtData_NtcNr = NtcNr_Arg;
    GateDrv0Ctrl_Srv_SetNtcStsAndSnpshtData_NtcStInfo = NtcStInfo_Arg;
    GateDrv0Ctrl_Srv_SetNtcStsAndSnpshtData_NtcSts = NtcSts_Arg;
    GateDrv0Ctrl_Srv_SetNtcStsAndSnpshtData_DebStep = DebStep_Arg;
    GateDrv0Ctrl_Srv_SetNtcStsAndSnpshtData_SpclSnpshtData0 = SpclSnpshtData0_Arg;
    GateDrv0Ctrl_Srv_SetNtcStsAndSnpshtData_SpclSnpshtData1 = SpclSnpshtData1_Arg;
    GateDrv0Ctrl_Srv_SetNtcStsAndSnpshtData_SpclSnpshtData2 = SpclSnpshtData2_Arg;
    return GateDrv0Ctrl_Srv_SetNtcStsAndSnpshtData_Return;
}


/*** Client Port Stubs ***/

FUNC(void, AUTOMATIC) Rte_Stub(void)
{
    GateDrv0CtrlInit1();
    GateDrv0CtrlPer1();
    GateDrv0CtrlPer2();
}

