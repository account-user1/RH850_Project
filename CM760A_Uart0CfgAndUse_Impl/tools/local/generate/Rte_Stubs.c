/******************************************************************************************************************
* Copyright 2016 Nexteer
* Nexteer Confidential
*
* Module File Name:   Rte_Stubs.c
* Module Description: Stubs for Polyspace analysis.  Generated from TL109A_SwcSuprt.
* Project:            CBD
* Author:             Owen Tosh
******************************************************************************************************************/


#include "Rte_CDD_Uart0CfgAndUse.h"
#include "float.h"


/*** Server Port Stubs ***/

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CDD_Uart0CfgAndUse_GetTxRateGroup_Oper(uint8 RateGroup_Arg, uint8 * Buf_Ary1D)
{
    unsigned short i;
    Uart0CfgAndUse_Srv_GetTxRateGroup_RateGroup = RateGroup_Arg;
    for(i = 0; i < 2048U; i++)
    {
        Buf_Ary1D[i] = Uart0CfgAndUse_Srv_GetTxRateGroup_Buf[i];
    }
    return Uart0CfgAndUse_Srv_GetTxRateGroup_Return;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CDD_Uart0CfgAndUse_SetRxSigGroup_Oper(uint8 SigGroup_Arg, ImcArbnRxDataSrc1 DataSrc_Arg, const uint8 * Buf_Ary1D)
{
    unsigned short i;
    Uart0CfgAndUse_Srv_SetRxSigGroup_SigGroup = SigGroup_Arg;
    Uart0CfgAndUse_Srv_SetRxSigGroup_DataSrc = DataSrc_Arg;
    for(i = 0; i < 8U; i++)
    {
        Uart0CfgAndUse_Srv_SetRxSigGroup_Buf[i] = Buf_Ary1D[i] ;
    }
    return Uart0CfgAndUse_Srv_SetRxSigGroup_Return;
}


/*** Client Port Stubs ***/

FUNC(void, AUTOMATIC) Rte_Stub(void)
{
    Uart0CfgAndUseInit1();
    Uart0CfgAndUsePer1();
    Uart0CfgAndUsePer2();
    Uart0CfgAndUsePer3();
    Uart0CfgAndUsePer4();
}

