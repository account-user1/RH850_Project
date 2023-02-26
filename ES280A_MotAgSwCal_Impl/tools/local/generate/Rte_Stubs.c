/******************************************************************************************************************
* Copyright 2016 Nexteer
* Nexteer Confidential
*
* Module File Name:   Rte_Stubs.c
* Module Description: Stubs for Polyspace analysis.  Generated from TL109A_SwcSuprt.
* Project:            CBD
* Author:             Owen Tosh
******************************************************************************************************************/


#include "Rte_CDD_MotAgSwCal.h"
#include "float.h"


/*** Server Port Stubs ***/

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CDD_MotAgSwCal_SwCalStsCallBack_Oper(uint8 ElecRev_Arg, uint16 PosIdx_Arg, const 
uint16 * SnsrData_Ary1D)
{
    unsigned short i;
    MotAgSwCal_Srv_SwCalStsCallBack_ElecRev = ElecRev_Arg;
    MotAgSwCal_Srv_SwCalStsCallBack_PosIdx = PosIdx_Arg;
    for(i = 0; i < 12; i++)
    {
        MotAgSwCal_Srv_SwCalStsCallBack_SnsrData[i] = SnsrData_Ary1D[i];
    }
    return (Std_ReturnType)0U;
}


/*** Client Port Stubs ***/

FUNC(void, AUTOMATIC) Rte_Stub(void)
{
    MotAgSwCalInit1();
    MotAgSwCalPer1();
    MotAgSwCalPer2();
    SwCalGetPrm_Oper(&MotAgSwCal_Cli_SwCalGetPrm_BoostModlnIdx, &MotAgSwCal_Cli_SwCalGetPrm_HldModlnIdx, &MotAgSwCal_Cli_SwCalGetPrm_CoolDwnModlnIdx, &MotAgSwCal_Cli_SwCalGetPrm_Ramp1Ti, &MotAgSwCal_Cli_SwCalGetPrm_Ramp2Ti, &MotAgSwCal_Cli_SwCalGetPrm_Ramp3Ti, &MotAgSwCal_Cli_SwCalGetPrm_BoostTi, &MotAgSwCal_Cli_SwCalGetPrm_HldTi, &MotAgSwCal_Cli_SwCalGetPrm_CoolDwnTi, &MotAgSwCal_Cli_SwCalGetPrm_PosnStepSize, &MotAgSwCal_Cli_SwCalGetPrm_ElecRevCnt);
    MotAgSwCal_Cli_SwCalSetPrm_Return = SwCalSetPrm_Oper(MotAgSwCal_Cli_SwCalSetPrm_BoostModlnIdx, MotAgSwCal_Cli_SwCalSetPrm_HldModlnIdx, MotAgSwCal_Cli_SwCalSetPrm_CoolDwnModlnIdx, MotAgSwCal_Cli_SwCalSetPrm_Ramp1Ti, MotAgSwCal_Cli_SwCalSetPrm_Ramp2Ti, MotAgSwCal_Cli_SwCalSetPrm_Ramp3Ti, MotAgSwCal_Cli_SwCalSetPrm_BoostTi, MotAgSwCal_Cli_SwCalSetPrm_HldTi, MotAgSwCal_Cli_SwCalSetPrm_CoolDwnTi, MotAgSwCal_Cli_SwCalSetPrm_PosnStepSize, MotAgSwCal_Cli_SwCalSetPrm_ElecRevCnt);
    SwCalStop_Oper();
    SwCalStrt_Oper();
}

