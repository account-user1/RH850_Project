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
extern VAR(float32, AUTOMATIC) BattVltgCorrln_Ip_BattVltg;
extern VAR(boolean, AUTOMATIC) BattVltgCorrln_Ip_BattVltgAdcFaild;
extern VAR(float32, AUTOMATIC) BattVltgCorrln_Ip_BattVltgSwd1;
extern VAR(boolean, AUTOMATIC) BattVltgCorrln_Ip_BattVltgSwd1AdcFaild;
extern VAR(boolean, AUTOMATIC) BattVltgCorrln_Ip_DiagcStsIvtr1Inactv;
extern VAR(boolean, AUTOMATIC) BattVltgCorrln_Ip_InhbBattVltgDiagc;
extern VAR(uint8, AUTOMATIC) BattVltgCorrln_Ip_StrtUpSt;
extern VAR(SysSt1, AUTOMATIC) BattVltgCorrln_Ip_SysSt;

/* Outputs */
extern VAR(uint8, AUTOMATIC) BattVltgCorrln_Op_BattSwdVltgCorrlnSts;
extern VAR(uint8, AUTOMATIC) BattVltgCorrln_Op_BattVltgCorrlnIdptSig;
extern VAR(boolean, AUTOMATIC) BattVltgCorrln_Op_DftBrdgVltgActv;
extern VAR(boolean, AUTOMATIC) BattVltgCorrln_Op_SwdVltgLimd;

/* Calibrations */
extern CONST(float32, AUTOMATIC) BattVltgCorrln_Cal_BattVltgCorrlnAllwdVltgDif;
extern CONST(float32, AUTOMATIC) BattVltgCorrln_Cal_BattVltgCorrlnBattLoVltg;
extern CONST(float32, AUTOMATIC) BattVltgCorrln_Cal_BattVltgCorrlnBattOverVltg;
extern CONST(float32, AUTOMATIC) BattVltgCorrln_Cal_BattVltgCorrlnBattUnderVltg;
extern CONST(uint16, AUTOMATIC) BattVltgCorrln_Cal_BattVltgCorrlnNtc0x03C0x044FailStep;
extern CONST(uint16, AUTOMATIC) BattVltgCorrln_Cal_BattVltgCorrlnNtc0x03C0x044PassStep;
extern CONST(uint16, AUTOMATIC) BattVltgCorrln_Cal_BattVltgCorrlnNtc0x0B0FailStep;
extern CONST(uint16, AUTOMATIC) BattVltgCorrln_Cal_BattVltgCorrlnNtc0x0B0PassStep;
extern CONST(uint16, AUTOMATIC) BattVltgCorrln_Cal_BattVltgCorrlnNtc0x0B1FailStep;
extern CONST(uint16, AUTOMATIC) BattVltgCorrln_Cal_BattVltgCorrlnNtc0x0B1PassStep;
extern CONST(uint16, AUTOMATIC) BattVltgCorrln_Cal_BattVltgCorrlnNtc0x0B5FailStep;
extern CONST(uint16, AUTOMATIC) BattVltgCorrln_Cal_BattVltgCorrlnNtc0x0B5PassStep;
extern CONST(float32, AUTOMATIC) BattVltgCorrln_Cal_BattVltgCorrlnRcvrlBattLoVltg;
extern CONST(float32, AUTOMATIC) BattVltgCorrln_Cal_BattVltgCorrlnRcvrlBattOverVltg;
extern CONST(float32, AUTOMATIC) BattVltgCorrln_Cal_BattVltgCorrlnRcvrlBattUnderVltg;
extern CONST(float32, AUTOMATIC) BattVltgCorrln_Cal_BattVltgCorrlnSwdMax;
extern CONST(float32, AUTOMATIC) BattVltgCorrln_Cal_BattVltgCorrlnSysMinVltg;

/* PIMs */
extern VAR(boolean, AUTOMATIC) BattVltgCorrln_Pim_dBattVltgCorrlnBattVltgAndSwd1Ok;
extern VAR(uint8, AUTOMATIC) BattVltgCorrln_Pim_dBattVltgCorrlnBattVltgRngOk;
extern VAR(uint8, AUTOMATIC) BattVltgCorrln_Pim_dBattVltgCorrlnBattVltgSwd1RngOk;
extern VAR(SigQlfr1, AUTOMATIC) BattVltgCorrln_Pim_dBattVltgCorrlnNtc0x03CQlfrSts;
extern VAR(SigQlfr1, AUTOMATIC) BattVltgCorrln_Pim_dBattVltgCorrlnNtc0x044QlfrSts;

/* Arguments and Returns */
extern VAR(NtcNr1, AUTOMATIC) BattVltgCorrln_Srv_GetNtcQlfrSts_NtcNr;
extern VAR(SigQlfr1, AUTOMATIC) BattVltgCorrln_Srv_GetNtcQlfrSts_NtcQlfr;
extern VAR(Std_ReturnType, AUTOMATIC) BattVltgCorrln_Srv_GetNtcQlfrSts_Return;
extern VAR(NtcNr1, AUTOMATIC) BattVltgCorrln_Srv_SetNtcSts_NtcNr;
extern VAR(uint8, AUTOMATIC) BattVltgCorrln_Srv_SetNtcSts_NtcStInfo;
extern VAR(NtcSts1, AUTOMATIC) BattVltgCorrln_Srv_SetNtcSts_NtcSts;
extern VAR(uint16, AUTOMATIC) BattVltgCorrln_Srv_SetNtcSts_DebStep;
extern VAR(Std_ReturnType, AUTOMATIC) BattVltgCorrln_Srv_SetNtcSts_Return;


/*** Input Stubs ***/

#ifdef Rte_Read_BattVltg_Val
# undef Rte_Read_BattVltg_Val
#endif
#define Rte_Read_BattVltg_Val(data) (*(data) = BattVltgCorrln_Ip_BattVltg)

#ifdef Rte_Read_BattVltgAdcFaild_Logl
# undef Rte_Read_BattVltgAdcFaild_Logl
#endif
#define Rte_Read_BattVltgAdcFaild_Logl(data) (*(data) = BattVltgCorrln_Ip_BattVltgAdcFaild)

#ifdef Rte_Read_BattVltgSwd1_Val
# undef Rte_Read_BattVltgSwd1_Val
#endif
#define Rte_Read_BattVltgSwd1_Val(data) (*(data) = BattVltgCorrln_Ip_BattVltgSwd1)

#ifdef Rte_Read_BattVltgSwd1AdcFaild_Logl
# undef Rte_Read_BattVltgSwd1AdcFaild_Logl
#endif
#define Rte_Read_BattVltgSwd1AdcFaild_Logl(data) (*(data) = BattVltgCorrln_Ip_BattVltgSwd1AdcFaild)

#ifdef Rte_Read_DiagcStsIvtr1Inactv_Logl
# undef Rte_Read_DiagcStsIvtr1Inactv_Logl
#endif
#define Rte_Read_DiagcStsIvtr1Inactv_Logl(data) (*(data) = BattVltgCorrln_Ip_DiagcStsIvtr1Inactv)

#ifdef Rte_Read_InhbBattVltgDiagc_Logl
# undef Rte_Read_InhbBattVltgDiagc_Logl
#endif
#define Rte_Read_InhbBattVltgDiagc_Logl(data) (*(data) = BattVltgCorrln_Ip_InhbBattVltgDiagc)

#ifdef Rte_Read_StrtUpSt_Val
# undef Rte_Read_StrtUpSt_Val
#endif
#define Rte_Read_StrtUpSt_Val(data) (*(data) = BattVltgCorrln_Ip_StrtUpSt)

#ifdef Rte_Read_SysSt_Val
# undef Rte_Read_SysSt_Val
#endif
#define Rte_Read_SysSt_Val(data) (*(data) = BattVltgCorrln_Ip_SysSt)


/*** Output Stubs ***/

#ifdef Rte_Write_BattSwdVltgCorrlnSts_Val
# undef Rte_Write_BattSwdVltgCorrlnSts_Val
#endif
#define Rte_Write_BattSwdVltgCorrlnSts_Val(data) (BattVltgCorrln_Op_BattSwdVltgCorrlnSts = (data))

#ifdef Rte_Write_BattVltgCorrlnIdptSig_Val
# undef Rte_Write_BattVltgCorrlnIdptSig_Val
#endif
#define Rte_Write_BattVltgCorrlnIdptSig_Val(data) (BattVltgCorrln_Op_BattVltgCorrlnIdptSig = (data))

#ifdef Rte_Write_DftBrdgVltgActv_Logl
# undef Rte_Write_DftBrdgVltgActv_Logl
#endif
#define Rte_Write_DftBrdgVltgActv_Logl(data) (BattVltgCorrln_Op_DftBrdgVltgActv = (data))

#ifdef Rte_Write_SwdVltgLimd_Logl
# undef Rte_Write_SwdVltgLimd_Logl
#endif
#define Rte_Write_SwdVltgLimd_Logl(data) (BattVltgCorrln_Op_SwdVltgLimd = (data))


/*** Calibration Stubs ***/

#ifdef Rte_Prm_BattVltgCorrlnAllwdVltgDif_Val
# undef Rte_Prm_BattVltgCorrlnAllwdVltgDif_Val
#endif
#define Rte_Prm_BattVltgCorrlnAllwdVltgDif_Val() (BattVltgCorrln_Cal_BattVltgCorrlnAllwdVltgDif)

#ifdef Rte_Prm_BattVltgCorrlnBattLoVltg_Val
# undef Rte_Prm_BattVltgCorrlnBattLoVltg_Val
#endif
#define Rte_Prm_BattVltgCorrlnBattLoVltg_Val() (BattVltgCorrln_Cal_BattVltgCorrlnBattLoVltg)

#ifdef Rte_Prm_BattVltgCorrlnBattOverVltg_Val
# undef Rte_Prm_BattVltgCorrlnBattOverVltg_Val
#endif
#define Rte_Prm_BattVltgCorrlnBattOverVltg_Val() (BattVltgCorrln_Cal_BattVltgCorrlnBattOverVltg)

#ifdef Rte_Prm_BattVltgCorrlnBattUnderVltg_Val
# undef Rte_Prm_BattVltgCorrlnBattUnderVltg_Val
#endif
#define Rte_Prm_BattVltgCorrlnBattUnderVltg_Val() (BattVltgCorrln_Cal_BattVltgCorrlnBattUnderVltg)

#ifdef Rte_Prm_BattVltgCorrlnNtc0x03C0x044FailStep_Val
# undef Rte_Prm_BattVltgCorrlnNtc0x03C0x044FailStep_Val
#endif
#define Rte_Prm_BattVltgCorrlnNtc0x03C0x044FailStep_Val() (BattVltgCorrln_Cal_BattVltgCorrlnNtc0x03C0x044FailStep)

#ifdef Rte_Prm_BattVltgCorrlnNtc0x03C0x044PassStep_Val
# undef Rte_Prm_BattVltgCorrlnNtc0x03C0x044PassStep_Val
#endif
#define Rte_Prm_BattVltgCorrlnNtc0x03C0x044PassStep_Val() (BattVltgCorrln_Cal_BattVltgCorrlnNtc0x03C0x044PassStep)

#ifdef Rte_Prm_BattVltgCorrlnNtc0x0B0FailStep_Val
# undef Rte_Prm_BattVltgCorrlnNtc0x0B0FailStep_Val
#endif
#define Rte_Prm_BattVltgCorrlnNtc0x0B0FailStep_Val() (BattVltgCorrln_Cal_BattVltgCorrlnNtc0x0B0FailStep)

#ifdef Rte_Prm_BattVltgCorrlnNtc0x0B0PassStep_Val
# undef Rte_Prm_BattVltgCorrlnNtc0x0B0PassStep_Val
#endif
#define Rte_Prm_BattVltgCorrlnNtc0x0B0PassStep_Val() (BattVltgCorrln_Cal_BattVltgCorrlnNtc0x0B0PassStep)

#ifdef Rte_Prm_BattVltgCorrlnNtc0x0B1FailStep_Val
# undef Rte_Prm_BattVltgCorrlnNtc0x0B1FailStep_Val
#endif
#define Rte_Prm_BattVltgCorrlnNtc0x0B1FailStep_Val() (BattVltgCorrln_Cal_BattVltgCorrlnNtc0x0B1FailStep)

#ifdef Rte_Prm_BattVltgCorrlnNtc0x0B1PassStep_Val
# undef Rte_Prm_BattVltgCorrlnNtc0x0B1PassStep_Val
#endif
#define Rte_Prm_BattVltgCorrlnNtc0x0B1PassStep_Val() (BattVltgCorrln_Cal_BattVltgCorrlnNtc0x0B1PassStep)

#ifdef Rte_Prm_BattVltgCorrlnNtc0x0B5FailStep_Val
# undef Rte_Prm_BattVltgCorrlnNtc0x0B5FailStep_Val
#endif
#define Rte_Prm_BattVltgCorrlnNtc0x0B5FailStep_Val() (BattVltgCorrln_Cal_BattVltgCorrlnNtc0x0B5FailStep)

#ifdef Rte_Prm_BattVltgCorrlnNtc0x0B5PassStep_Val
# undef Rte_Prm_BattVltgCorrlnNtc0x0B5PassStep_Val
#endif
#define Rte_Prm_BattVltgCorrlnNtc0x0B5PassStep_Val() (BattVltgCorrln_Cal_BattVltgCorrlnNtc0x0B5PassStep)

#ifdef Rte_Prm_BattVltgCorrlnRcvrlBattLoVltg_Val
# undef Rte_Prm_BattVltgCorrlnRcvrlBattLoVltg_Val
#endif
#define Rte_Prm_BattVltgCorrlnRcvrlBattLoVltg_Val() (BattVltgCorrln_Cal_BattVltgCorrlnRcvrlBattLoVltg)

#ifdef Rte_Prm_BattVltgCorrlnRcvrlBattOverVltg_Val
# undef Rte_Prm_BattVltgCorrlnRcvrlBattOverVltg_Val
#endif
#define Rte_Prm_BattVltgCorrlnRcvrlBattOverVltg_Val() (BattVltgCorrln_Cal_BattVltgCorrlnRcvrlBattOverVltg)

#ifdef Rte_Prm_BattVltgCorrlnRcvrlBattUnderVltg_Val
# undef Rte_Prm_BattVltgCorrlnRcvrlBattUnderVltg_Val
#endif
#define Rte_Prm_BattVltgCorrlnRcvrlBattUnderVltg_Val() (BattVltgCorrln_Cal_BattVltgCorrlnRcvrlBattUnderVltg)

#ifdef Rte_Prm_BattVltgCorrlnSwdMax_Val
# undef Rte_Prm_BattVltgCorrlnSwdMax_Val
#endif
#define Rte_Prm_BattVltgCorrlnSwdMax_Val() (BattVltgCorrln_Cal_BattVltgCorrlnSwdMax)

#ifdef Rte_Prm_BattVltgCorrlnSysMinVltg_Val
# undef Rte_Prm_BattVltgCorrlnSysMinVltg_Val
#endif
#define Rte_Prm_BattVltgCorrlnSysMinVltg_Val() (BattVltgCorrln_Cal_BattVltgCorrlnSysMinVltg)


/*** PIM Stubs ***/

#ifdef Rte_Pim_dBattVltgCorrlnBattVltgAndSwd1Ok
# undef Rte_Pim_dBattVltgCorrlnBattVltgAndSwd1Ok
#endif
#define Rte_Pim_dBattVltgCorrlnBattVltgAndSwd1Ok() (&BattVltgCorrln_Pim_dBattVltgCorrlnBattVltgAndSwd1Ok)

#ifdef Rte_Pim_dBattVltgCorrlnBattVltgRngOk
# undef Rte_Pim_dBattVltgCorrlnBattVltgRngOk
#endif
#define Rte_Pim_dBattVltgCorrlnBattVltgRngOk() (&BattVltgCorrln_Pim_dBattVltgCorrlnBattVltgRngOk)

#ifdef Rte_Pim_dBattVltgCorrlnBattVltgSwd1RngOk
# undef Rte_Pim_dBattVltgCorrlnBattVltgSwd1RngOk
#endif
#define Rte_Pim_dBattVltgCorrlnBattVltgSwd1RngOk() (&BattVltgCorrln_Pim_dBattVltgCorrlnBattVltgSwd1RngOk)

#ifdef Rte_Pim_dBattVltgCorrlnNtc0x03CQlfrSts
# undef Rte_Pim_dBattVltgCorrlnNtc0x03CQlfrSts
#endif
#define Rte_Pim_dBattVltgCorrlnNtc0x03CQlfrSts() (&BattVltgCorrln_Pim_dBattVltgCorrlnNtc0x03CQlfrSts)

#ifdef Rte_Pim_dBattVltgCorrlnNtc0x044QlfrSts
# undef Rte_Pim_dBattVltgCorrlnNtc0x044QlfrSts
#endif
#define Rte_Pim_dBattVltgCorrlnNtc0x044QlfrSts() (&BattVltgCorrln_Pim_dBattVltgCorrlnNtc0x044QlfrSts)


/*** Client Stub ***/

extern FUNC(void, AUTOMATIC) Rte_Stub(void);


#endif
