/******************************************************************************************************************
* Copyright 2016 Nexteer
* Nexteer Confidential
*
* Module File Name:   Rte_Stubs.h
* Module Description: Stubs header for Polyspace analysis.  Generated from TL109A_SwcSuprt.
* Project:            CBD
* Author:             Owen Tosh
******************************************************************************************************************/


#ifndef RTE_STUBS_H
#define RTE_STUBS_H


/*** Extern Statements ***/

/* Inputs */
extern VAR(boolean, AUTOMATIC) DmaCfgAndUse_Ip_DmaAdc0ResTrig;
extern VAR(boolean, AUTOMATIC) DmaCfgAndUse_Ip_DmaAdc1ResTrig;
extern VAR(boolean, AUTOMATIC) DmaCfgAndUse_Ip_DmaTwoMiliSecToMotCtrlTrig;

/* PIMs */
extern VAR(uint32, AUTOMATIC) DmaCfgAndUse_Pim_d2MilliSecAdcActDmaTrfTi;
extern VAR(uint32, AUTOMATIC) DmaCfgAndUse_Pim_DmaCfgAndUse2MilliSecAdcMaxDmaTrfTi;
extern VAR(uint32, AUTOMATIC) DmaCfgAndUse_Pim_DmaCfgAndUse2MilliSecAdcStrtTi;

/* Arguments and Returns */
extern VAR(uint32, AUTOMATIC) DmaCfgAndUse_Srv_GetRefTmr1MicroSec32bit_RefTmr;
extern VAR(uint32, AUTOMATIC) DmaCfgAndUse_Srv_GetTiSpan1MicroSec32bit_RefTmr;
extern VAR(uint32, AUTOMATIC) DmaCfgAndUse_Srv_GetTiSpan1MicroSec32bit_TiSpan;
extern VAR(Std_ReturnType, AUTOMATIC) DmaCfgAndUse_Srv_GetTiSpan1MicroSec32bit_Return;
extern VAR(uint32, AUTOMATIC) DmaCfgAndUse_Srv_ReadErrInjReg_ErrId;
extern VAR(Std_ReturnType, AUTOMATIC) DmaCfgAndUse_Cli_DmaWaitForMotCtrlTo2MilliSecTrf_Return;


/*** Input Stubs ***/

#ifdef Rte_Read_DmaAdc0ResTrig_Logl
# undef Rte_Read_DmaAdc0ResTrig_Logl
#endif
#define Rte_Read_DmaAdc0ResTrig_Logl(data) (*(data) = DmaCfgAndUse_Ip_DmaAdc0ResTrig)

#ifdef Rte_Read_DmaAdc1ResTrig_Logl
# undef Rte_Read_DmaAdc1ResTrig_Logl
#endif
#define Rte_Read_DmaAdc1ResTrig_Logl(data) (*(data) = DmaCfgAndUse_Ip_DmaAdc1ResTrig)

#ifdef Rte_Read_DmaTwoMiliSecToMotCtrlTrig_Logl
# undef Rte_Read_DmaTwoMiliSecToMotCtrlTrig_Logl
#endif
#define Rte_Read_DmaTwoMiliSecToMotCtrlTrig_Logl(data) (*(data) = DmaCfgAndUse_Ip_DmaTwoMiliSecToMotCtrlTrig)


/*** PIM Stubs ***/

#ifdef Rte_Pim_d2MilliSecAdcActDmaTrfTi
# undef Rte_Pim_d2MilliSecAdcActDmaTrfTi
#endif
#define Rte_Pim_d2MilliSecAdcActDmaTrfTi() (&DmaCfgAndUse_Pim_d2MilliSecAdcActDmaTrfTi)

#ifdef Rte_Pim_DmaCfgAndUse2MilliSecAdcMaxDmaTrfTi
# undef Rte_Pim_DmaCfgAndUse2MilliSecAdcMaxDmaTrfTi
#endif
#define Rte_Pim_DmaCfgAndUse2MilliSecAdcMaxDmaTrfTi() (&DmaCfgAndUse_Pim_DmaCfgAndUse2MilliSecAdcMaxDmaTrfTi)

#ifdef Rte_Pim_DmaCfgAndUse2MilliSecAdcStrtTi
# undef Rte_Pim_DmaCfgAndUse2MilliSecAdcStrtTi
#endif
#define Rte_Pim_DmaCfgAndUse2MilliSecAdcStrtTi() (&DmaCfgAndUse_Pim_DmaCfgAndUse2MilliSecAdcStrtTi)


/*** Client Stub ***/

extern FUNC(void, AUTOMATIC) Rte_Stub(void);


#endif
