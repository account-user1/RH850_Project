/******************************************************************************************************************
* Copyright 2016 Nexteer
* Nexteer Confidential
*
* Module File Name:   Rte_Stubs.c
* Module Description: Stubs for Polyspace analysis.  Generated from TL109A_SwcSuprt.
* Project:            CBD
* Author:             Owen Tosh
******************************************************************************************************************/


#include "Rte_CDD_Uart1CfgAndUse.h"
#include "float.h"


/*** Server Port Stubs ***/

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CDD_Uart1CfgAndUse_GetTxRateGroup_Oper(uint8 RateGroup_Arg, uint8 * Buf_Ary1D)
{
    unsigned short i;
    Uart1CfgAndUse_Srv_GetTxRateGroup_RateGroup = RateGroup_Arg;
    for(i = 0; i < 2048U; i++)
    {
        Buf_Ary1D[i] = Uart1CfgAndUse_Srv_GetTxRateGroup_Buf[i];
    }
    return Uart1CfgAndUse_Srv_GetTxRateGroup_Return;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CDD_Uart1CfgAndUse_SetRxSigGroup_Oper(uint8 SigGroup_Arg, ImcArbnRxDataSrc1 DataSrc_Arg, const uint8 * Buf_Ary1D)
{
    unsigned short i;
    Uart1CfgAndUse_Srv_SetRxSigGroup_SigGroup = SigGroup_Arg;
    Uart1CfgAndUse_Srv_SetRxSigGroup_DataSrc = DataSrc_Arg;
    for(i = 0; i < 8U; i++)
    {
        Uart1CfgAndUse_Srv_SetRxSigGroup_Buf[i] = Buf_Ary1D[i];
    }
    return Uart1CfgAndUse_Srv_SetRxSigGroup_Return;
}


/*** Client Port Stubs ***/

FUNC(void, AUTOMATIC) Rte_Stub(void)
{
    Uart1CfgAndUseInit1();
    Uart1CfgAndUsePer1();
    Uart1CfgAndUsePer2();
    Uart1CfgAndUsePer3();
    Uart1CfgAndUsePer4();
}

