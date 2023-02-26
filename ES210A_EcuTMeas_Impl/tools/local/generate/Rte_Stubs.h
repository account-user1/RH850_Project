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
extern VAR(float32, AUTOMATIC) EcuTMeas_Ip_EcuT;
extern VAR(boolean, AUTOMATIC) EcuTMeas_Ip_EcuTAdcFaild;

/* Outputs */
extern VAR(boolean, AUTOMATIC) EcuTMeas_Op_DiagcStsLimdTPrfmnc;
extern VAR(float32, AUTOMATIC) EcuTMeas_Op_EcuTFild;

/* PIMs */
extern VAR(float32, AUTOMATIC) EcuTMeas_Pim_dEcuTMeasEcuTCalcd;
extern VAR(FilLpRec1, AUTOMATIC) EcuTMeas_Pim_EcuTFilStVari;

/* Arguments and Returns */
extern VAR(uint32, AUTOMATIC) EcuTMeas_Srv_CnvSnpshtData_f32_SnpshtDataCnvd;
extern VAR(float32, AUTOMATIC) EcuTMeas_Srv_CnvSnpshtData_f32_SnpshtData;
extern VAR(uint32, AUTOMATIC) EcuTMeas_Srv_CnvSnpshtData_logl_SnpshtDataCnvd;
extern VAR(boolean, AUTOMATIC) EcuTMeas_Srv_CnvSnpshtData_logl_SnpshtData;
extern VAR(NtcNr1, AUTOMATIC) EcuTMeas_Srv_GetNtcActv_NtcNr;
extern VAR(boolean, AUTOMATIC) EcuTMeas_Srv_GetNtcActv_NtcActv;
extern VAR(Std_ReturnType, AUTOMATIC) EcuTMeas_Srv_GetNtcActv_Return;
extern VAR(NtcNr1, AUTOMATIC) EcuTMeas_Srv_SetNtcStsAndSnpshtData_NtcNr;
extern VAR(uint8, AUTOMATIC) EcuTMeas_Srv_SetNtcStsAndSnpshtData_NtcStInfo;
extern VAR(NtcSts1, AUTOMATIC) EcuTMeas_Srv_SetNtcStsAndSnpshtData_NtcSts;
extern VAR(uint16, AUTOMATIC) EcuTMeas_Srv_SetNtcStsAndSnpshtData_DebStep;
extern VAR(uint32, AUTOMATIC) EcuTMeas_Srv_SetNtcStsAndSnpshtData_SpclSnpshtData0;
extern VAR(uint32, AUTOMATIC) EcuTMeas_Srv_SetNtcStsAndSnpshtData_SpclSnpshtData1;
extern VAR(uint32, AUTOMATIC) EcuTMeas_Srv_SetNtcStsAndSnpshtData_SpclSnpshtData2;
extern VAR(Std_ReturnType, AUTOMATIC) EcuTMeas_Srv_SetNtcStsAndSnpshtData_Return;


/*** Input Stubs ***/

#ifdef Rte_Read_EcuT_Val
# undef Rte_Read_EcuT_Val
#endif
#define Rte_Read_EcuT_Val(data) (*(data) = EcuTMeas_Ip_EcuT)

#ifdef Rte_Read_EcuTAdcFaild_Logl
# undef Rte_Read_EcuTAdcFaild_Logl
#endif
#define Rte_Read_EcuTAdcFaild_Logl(data) (*(data) = EcuTMeas_Ip_EcuTAdcFaild)


/*** Output Stubs ***/

#ifdef Rte_Write_DiagcStsLimdTPrfmnc_Logl
# undef Rte_Write_DiagcStsLimdTPrfmnc_Logl
#endif
#define Rte_Write_DiagcStsLimdTPrfmnc_Logl(data) (EcuTMeas_Op_DiagcStsLimdTPrfmnc = (data))

#ifdef Rte_Write_EcuTFild_Val
# undef Rte_Write_EcuTFild_Val
#endif
#define Rte_Write_EcuTFild_Val(data) (EcuTMeas_Op_EcuTFild = (data))


/*** PIM Stubs ***/

#ifdef Rte_Pim_dEcuTMeasEcuTCalcd
# undef Rte_Pim_dEcuTMeasEcuTCalcd
#endif
#define Rte_Pim_dEcuTMeasEcuTCalcd() (&EcuTMeas_Pim_dEcuTMeasEcuTCalcd)

#ifdef Rte_Pim_EcuTFilStVari
# undef Rte_Pim_EcuTFilStVari
#endif
#define Rte_Pim_EcuTFilStVari() (&EcuTMeas_Pim_EcuTFilStVari)


/*** Client Stub ***/

extern FUNC(void, AUTOMATIC) Rte_Stub(void);


#endif
