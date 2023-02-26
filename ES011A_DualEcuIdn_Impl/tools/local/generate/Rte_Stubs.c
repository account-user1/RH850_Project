/******************************************************************************************************************
* Copyright 2016 Nexteer
* Nexteer Confidential
*
* Module File Name:   Rte_Stubs.c
* Module Description: Stubs for Polyspace analysis.  Generated from TL109A_SwcSuprt.
* Project:            CBD
* Author:             Owen Tosh
******************************************************************************************************************/


#include "Rte_DualEcuIdn.h"
#include "float.h"


/*** Server Port Stubs ***/

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DualEcuIdn_GetSigImcData_u08_Oper(uint16 SigId_Arg, uint8 * Data_Arg, ImcArbnRxSts1 * Sts_Arg)
{
    DualEcuIdn_Srv_GetSigImcData_u08_SigId = SigId_Arg;
    *Data_Arg = DualEcuIdn_Srv_GetSigImcData_u08_Data;
    *Sts_Arg = DualEcuIdn_Srv_GetSigImcData_u08_Sts;
    return DualEcuIdn_Srv_GetSigImcData_u08_Return;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DualEcuIdn_IoHwAb_GetGpioEcuIdnPin1_Oper(boolean * PinSt_Arg)
{
    *PinSt_Arg = DualEcuIdn_Srv_IoHwAb_GetGpioEcuIdnPin1_PinSt;
    return DualEcuIdn_Srv_IoHwAb_GetGpioEcuIdnPin1_Return;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DualEcuIdn_IoHwAb_GetGpioEcuIdnPin2_Oper(boolean * PinSt_Arg)
{
    *PinSt_Arg = DualEcuIdn_Srv_IoHwAb_GetGpioEcuIdnPin2_PinSt;
    return DualEcuIdn_Srv_IoHwAb_GetGpioEcuIdnPin2_Return;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DualEcuIdn_SetNtcSts_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg)
{
    DualEcuIdn_Srv_SetNtcSts_NtcNr = NtcNr_Arg;
    DualEcuIdn_Srv_SetNtcSts_NtcStInfo = NtcStInfo_Arg;
    DualEcuIdn_Srv_SetNtcSts_NtcSts = NtcSts_Arg;
    DualEcuIdn_Srv_SetNtcSts_DebStep = DebStep_Arg;
    return DualEcuIdn_Srv_SetNtcSts_Return;
}


/*** Client Port Stubs ***/

FUNC(void, AUTOMATIC) Rte_Stub(void)
{
    DualEcuIdnInit1();
    DualEcuIdnPer1();
}

