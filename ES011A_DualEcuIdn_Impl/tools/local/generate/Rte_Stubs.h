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
extern VAR(boolean, AUTOMATIC) DualEcuIdn_Ip_EcuComTiOut;

/* Outputs */
extern VAR(uint8, AUTOMATIC) DualEcuIdn_Op_EcuId;

/* PIMs */
extern VAR(uint8, AUTOMATIC) DualEcuIdn_Pim_EcuIdInt;
extern VAR(boolean, AUTOMATIC) DualEcuIdn_Pim_EcuIdnEvlnCmpl;
extern VAR(uint8, AUTOMATIC) DualEcuIdn_Pim_SecdryEcuIdnReqTiOutCntr;

/* Arguments and Returns */
extern VAR(uint16, AUTOMATIC) DualEcuIdn_Srv_GetSigImcData_u08_SigId;
extern VAR(uint8, AUTOMATIC) DualEcuIdn_Srv_GetSigImcData_u08_Data;
extern VAR(ImcArbnRxSts1, AUTOMATIC) DualEcuIdn_Srv_GetSigImcData_u08_Sts;
extern VAR(Std_ReturnType, AUTOMATIC) DualEcuIdn_Srv_GetSigImcData_u08_Return;
extern VAR(boolean, AUTOMATIC) DualEcuIdn_Srv_IoHwAb_GetGpioEcuIdnPin1_PinSt;
extern VAR(Std_ReturnType, AUTOMATIC) DualEcuIdn_Srv_IoHwAb_GetGpioEcuIdnPin1_Return;
extern VAR(boolean, AUTOMATIC) DualEcuIdn_Srv_IoHwAb_GetGpioEcuIdnPin2_PinSt;
extern VAR(Std_ReturnType, AUTOMATIC) DualEcuIdn_Srv_IoHwAb_GetGpioEcuIdnPin2_Return;
extern VAR(NtcNr1, AUTOMATIC) DualEcuIdn_Srv_SetNtcSts_NtcNr;
extern VAR(uint8, AUTOMATIC) DualEcuIdn_Srv_SetNtcSts_NtcStInfo;
extern VAR(NtcSts1, AUTOMATIC) DualEcuIdn_Srv_SetNtcSts_NtcSts;
extern VAR(uint16, AUTOMATIC) DualEcuIdn_Srv_SetNtcSts_DebStep;
extern VAR(Std_ReturnType, AUTOMATIC) DualEcuIdn_Srv_SetNtcSts_Return;


/*** Input Stubs ***/

#ifdef Rte_Read_EcuComTiOut_Logl
# undef Rte_Read_EcuComTiOut_Logl
#endif
#define Rte_Read_EcuComTiOut_Logl(data) (*(data) = DualEcuIdn_Ip_EcuComTiOut)


/*** Output Stubs ***/

#ifdef Rte_Write_EcuId_Val
# undef Rte_Write_EcuId_Val
#endif
#define Rte_Write_EcuId_Val(data) (DualEcuIdn_Op_EcuId = (data))


/*** PIM Stubs ***/

#ifdef Rte_Pim_EcuIdInt
# undef Rte_Pim_EcuIdInt
#endif
#define Rte_Pim_EcuIdInt() (&DualEcuIdn_Pim_EcuIdInt)

#ifdef Rte_Pim_EcuIdnEvlnCmpl
# undef Rte_Pim_EcuIdnEvlnCmpl
#endif
#define Rte_Pim_EcuIdnEvlnCmpl() (&DualEcuIdn_Pim_EcuIdnEvlnCmpl)

#ifdef Rte_Pim_SecdryEcuIdnReqTiOutCntr
# undef Rte_Pim_SecdryEcuIdnReqTiOutCntr
#endif
#define Rte_Pim_SecdryEcuIdnReqTiOutCntr() (&DualEcuIdn_Pim_SecdryEcuIdnReqTiOutCntr)


/*** Client Stub ***/

extern FUNC(void, AUTOMATIC) Rte_Stub(void);


#endif
