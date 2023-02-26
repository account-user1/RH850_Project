/******************************************************************************************************************
* Copyright 2016 Nexteer
* Nexteer Confidential
*
* Module File Name:   Rte_Stubs.c
* Module Description: Stubs for Polyspace analysis.  Generated from TL109A_SwcSuprt.
* Project:            CBD
* Author:             Owen Tosh
******************************************************************************************************************/


#include "Rte_CDD_VrfyCritReg.h"
#include "float.h"


/*** Server Port Stubs ***/

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CDD_VrfyCritReg_MCalWrVrfyRegFltInfoStorg_GetErrorStatus(uint8 * RequestResultPtr_Arg)
{
    *RequestResultPtr_Arg = VrfyCritReg_Srv_MCalWrVrfyRegFltInfoStorg_GetErrorStatus_RequestResultPtr;
    return VrfyCritReg_Srv_MCalWrVrfyRegFltInfoStorg_GetErrorStatus_Return;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CDD_VrfyCritReg_MCalWrVrfyRegFltInfoStorg_SetRamBlockStatus(boolean BlockChanged_Arg)
{
    VrfyCritReg_Srv_MCalWrVrfyRegFltInfoStorg_SetRamBlockStatus_BlockChanged = BlockChanged_Arg;
    return VrfyCritReg_Srv_MCalWrVrfyRegFltInfoStorg_SetRamBlockStatus_Return;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CDD_VrfyCritReg_SetNtcSts_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg)
{
    VrfyCritReg_Srv_SetNtcSts_NtcNr = NtcNr_Arg;
    VrfyCritReg_Srv_SetNtcSts_NtcStInfo = NtcStInfo_Arg;
    VrfyCritReg_Srv_SetNtcSts_NtcSts = NtcSts_Arg;
    VrfyCritReg_Srv_SetNtcSts_DebStep = DebStep_Arg;
    return VrfyCritReg_Srv_SetNtcSts_Return;
}


/*** Client Port Stubs ***/

FUNC(void, AUTOMATIC) Rte_Stub(void)
{
    VrfyCritRegInit1();
    VrfyCritRegPer1();
    VrfyCritRegPer2();
    MCalReadVrfyFailFltInfo_Oper(VrfyCritReg_Cli_MCalReadVrfyFailFltInfo_PrphlId, VrfyCritReg_Cli_MCalReadVrfyFailFltInfo_ErrId);
}

