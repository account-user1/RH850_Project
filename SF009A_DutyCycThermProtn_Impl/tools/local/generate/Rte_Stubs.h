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

#include "math_stubs.h"

/*** Extern Statements ***/

/* Inputs */
extern VAR(boolean, AUTOMATIC) DutyCycThermProtn_Ip_DiagcStsLimdTPrfmnc;
extern VAR(boolean, AUTOMATIC) DutyCycThermProtn_Ip_DualEcuFltMtgtnEna;
extern VAR(boolean, AUTOMATIC) DutyCycThermProtn_Ip_DutyCycThermProtnDi;
extern VAR(float32, AUTOMATIC) DutyCycThermProtn_Ip_EcuTFild;
extern VAR(uint32, AUTOMATIC) DutyCycThermProtn_Ip_IgnTiOff;
extern VAR(uint8, AUTOMATIC) DutyCycThermProtn_Ip_MotAndThermProtnLoaMod;
extern VAR(float32, AUTOMATIC) DutyCycThermProtn_Ip_MotCurrPeakEstimd;
extern VAR(float32, AUTOMATIC) DutyCycThermProtn_Ip_MotCurrPeakEstimdFild;
extern VAR(float32, AUTOMATIC) DutyCycThermProtn_Ip_MotFetT;
extern VAR(float32, AUTOMATIC) DutyCycThermProtn_Ip_MotMagT;
extern VAR(float32, AUTOMATIC) DutyCycThermProtn_Ip_MotVelCrf;
extern VAR(float32, AUTOMATIC) DutyCycThermProtn_Ip_MotWidgT;
extern VAR(boolean, AUTOMATIC) DutyCycThermProtn_Ip_VehTiVld;

/* Outputs */
extern VAR(u16p0, AUTOMATIC) DutyCycThermProtn_Op_DutyCycThermProtnMaxOutp;
extern VAR(float32, AUTOMATIC) DutyCycThermProtn_Op_ThermDutyCycProtnLoadDptLim;
extern VAR(float32, AUTOMATIC) DutyCycThermProtn_Op_ThermDutyCycProtnTDptLim;
extern VAR(float32, AUTOMATIC) DutyCycThermProtn_Op_ThermLimSlowFilMax;
extern VAR(float32, AUTOMATIC) DutyCycThermProtn_Op_ThermMotTqLim;
extern VAR(float32, AUTOMATIC) DutyCycThermProtn_Op_ThermRednFac;

/* Calibrations */
extern CONST(s15p0, AUTOMATIC) DutyCycThermProtn_Cal_DutyCycThermProtnAbsltCtrlTFetMtgtnTblX[4];
extern CONST(s15p0, AUTOMATIC) DutyCycThermProtn_Cal_DutyCycThermProtnAbsltCtrlTTblX[4];
extern CONST(u9p7, AUTOMATIC) DutyCycThermProtn_Cal_DutyCycThermProtnAbsltCtrlTTqFetMtgtnTblY[4];
extern CONST(u9p7, AUTOMATIC) DutyCycThermProtn_Cal_DutyCycThermProtnAbsltCtrlTTqTblY[4];
extern CONST(s15p0, AUTOMATIC) DutyCycThermProtn_Cal_DutyCycThermProtnAbsltCuTFetMtgtnTblX[4];
extern CONST(s15p0, AUTOMATIC) DutyCycThermProtn_Cal_DutyCycThermProtnAbsltCuTTblX[4];
extern CONST(u9p7, AUTOMATIC) DutyCycThermProtn_Cal_DutyCycThermProtnAbsltCuTTqFetMtgtnTblY[4];
extern CONST(u9p7, AUTOMATIC) DutyCycThermProtn_Cal_DutyCycThermProtnAbsltCuTTqTblY[4];
extern CONST(float32, AUTOMATIC) DutyCycThermProtn_Cal_DutyCycThermProtnAbsltMotVelBreakPt;
extern CONST(float32, AUTOMATIC) DutyCycThermProtn_Cal_DutyCycThermProtnAbsltTTqSlewHiLim;
extern CONST(float32, AUTOMATIC) DutyCycThermProtn_Cal_DutyCycThermProtnAbsltTTqSlewLoLim;
extern CONST(float32, AUTOMATIC) DutyCycThermProtn_Cal_DutyCycThermProtnCtrlT;
extern CONST(boolean, AUTOMATIC) DutyCycThermProtn_Cal_DutyCycThermProtnCtrlTSeln;
extern CONST(u16p0, AUTOMATIC) DutyCycThermProtn_Cal_DutyCycThermProtnDutyCycFildThd;
extern CONST(boolean, AUTOMATIC) DutyCycThermProtn_Cal_DutyCycThermProtnIgnOffCtrlEna;
extern CONST(float32, AUTOMATIC) DutyCycThermProtn_Cal_DutyCycThermProtnIgnOffMsgWaitTi;
extern CONST(u9p7, AUTOMATIC) DutyCycThermProtn_Cal_DutyCycThermProtnLstTblValNonStall[5][2];
extern CONST(u9p7, AUTOMATIC) DutyCycThermProtn_Cal_DutyCycThermProtnLstTblValStall[5][2];
extern CONST(boolean, AUTOMATIC) DutyCycThermProtn_Cal_DutyCycThermProtnMotPrTSeln;
extern CONST(u3p13, AUTOMATIC) DutyCycThermProtn_Cal_DutyCycThermProtnMplr1FetMtgtnNonStallTblY[5];
extern CONST(u3p13, AUTOMATIC) DutyCycThermProtn_Cal_DutyCycThermProtnMplr1FetMtgtnStallTblY[5];
extern CONST(u3p13, AUTOMATIC) DutyCycThermProtn_Cal_DutyCycThermProtnMplr1NonStallTblY[5];
extern CONST(u3p13, AUTOMATIC) DutyCycThermProtn_Cal_DutyCycThermProtnMplr1StallTblY[5];
extern CONST(u3p13, AUTOMATIC) DutyCycThermProtn_Cal_DutyCycThermProtnMplr2FetMtgtnNonStallTblY[5];
extern CONST(u3p13, AUTOMATIC) DutyCycThermProtn_Cal_DutyCycThermProtnMplr2FetMtgtnStallTblY[5];
extern CONST(u3p13, AUTOMATIC) DutyCycThermProtn_Cal_DutyCycThermProtnMplr2NonStallTblY[5];
extern CONST(u3p13, AUTOMATIC) DutyCycThermProtn_Cal_DutyCycThermProtnMplr2StallTblY[5];
extern CONST(u3p13, AUTOMATIC) DutyCycThermProtn_Cal_DutyCycThermProtnMplr3FetMtgtnNonStallTblY[5];
extern CONST(u3p13, AUTOMATIC) DutyCycThermProtn_Cal_DutyCycThermProtnMplr3FetMtgtnStallTblY[5];
extern CONST(u3p13, AUTOMATIC) DutyCycThermProtn_Cal_DutyCycThermProtnMplr3NonStallTblY[5];
extern CONST(u3p13, AUTOMATIC) DutyCycThermProtn_Cal_DutyCycThermProtnMplr3StallTblY[5];
extern CONST(u3p13, AUTOMATIC) DutyCycThermProtn_Cal_DutyCycThermProtnMplr4FetMtgtnNonStallTblY[5];
extern CONST(u3p13, AUTOMATIC) DutyCycThermProtn_Cal_DutyCycThermProtnMplr4FetMtgtnStallTblY[5];
extern CONST(u3p13, AUTOMATIC) DutyCycThermProtn_Cal_DutyCycThermProtnMplr4NonStallTblY[5];
extern CONST(u3p13, AUTOMATIC) DutyCycThermProtn_Cal_DutyCycThermProtnMplr4StallTblY[5];
extern CONST(u3p13, AUTOMATIC) DutyCycThermProtn_Cal_DutyCycThermProtnMplr5FetMtgtnNonStallTblY[5];
extern CONST(u3p13, AUTOMATIC) DutyCycThermProtn_Cal_DutyCycThermProtnMplr5FetMtgtnStallTblY[5];
extern CONST(u3p13, AUTOMATIC) DutyCycThermProtn_Cal_DutyCycThermProtnMplr5NonStallTblY[5];
extern CONST(u3p13, AUTOMATIC) DutyCycThermProtn_Cal_DutyCycThermProtnMplr5StallTblY[5];
extern CONST(u3p13, AUTOMATIC) DutyCycThermProtn_Cal_DutyCycThermProtnMplr6FetMtgtnNonStallTblY[5];
extern CONST(u3p13, AUTOMATIC) DutyCycThermProtn_Cal_DutyCycThermProtnMplr6FetMtgtnStallTblY[5];
extern CONST(u3p13, AUTOMATIC) DutyCycThermProtn_Cal_DutyCycThermProtnMplr6NonStallTblY[5];
extern CONST(u3p13, AUTOMATIC) DutyCycThermProtn_Cal_DutyCycThermProtnMplr6StallTblY[5];
extern CONST(s15p0, AUTOMATIC) DutyCycThermProtn_Cal_DutyCycThermProtnMplrFetMtgtnTblX[5];
extern CONST(boolean, AUTOMATIC) DutyCycThermProtn_Cal_DutyCycThermProtnMplrTSeln;
extern CONST(s15p0, AUTOMATIC) DutyCycThermProtn_Cal_DutyCycThermProtnMplrTblX[5];
extern CONST(boolean, AUTOMATIC) DutyCycThermProtn_Cal_DutyCycThermProtnSlowFilTSeln;
extern CONST(float32, AUTOMATIC) DutyCycThermProtn_Cal_DutyCycThermProtnThermLimScaFac;
extern CONST(u16p0, AUTOMATIC) DutyCycThermProtn_Cal_DutyCycThermProtnThermLoadLimTblX[8][2];
extern CONST(u9p7, AUTOMATIC) DutyCycThermProtn_Cal_DutyCycThermProtnThermLoadLimTblY[8][2];
extern CONST(float32, AUTOMATIC) DutyCycThermProtn_Cal_DutyCycThermProtnTqCmdSlewDwn;
extern CONST(float32, AUTOMATIC) DutyCycThermProtn_Cal_DutyCycThermProtnTqCmdSlewUp;

/* PIMs */
extern VAR(DutyCycThermProtnFilStValRec1, AUTOMATIC) DutyCycThermProtn_Pim_FilStVal;
extern VAR(float32, AUTOMATIC) DutyCycThermProtn_Pim_dDutyCycThermProtnAbsltCtrlrTTqLim;
extern VAR(float32, AUTOMATIC) DutyCycThermProtn_Pim_dDutyCycThermProtnAbsltCuTTqLim;
extern VAR(float32, AUTOMATIC) DutyCycThermProtn_Pim_dDutyCycThermProtnAbsltTTqLim;
extern VAR(u9p7, AUTOMATIC) DutyCycThermProtn_Pim_dDutyCycThermProtnLstTblVal;
extern VAR(u9p7, AUTOMATIC) DutyCycThermProtn_Pim_dDutyCycThermProtnLstTblValSlew;
extern VAR(u3p13, AUTOMATIC) DutyCycThermProtn_Pim_dDutyCycThermProtnMplr1;
extern VAR(float32, AUTOMATIC) DutyCycThermProtn_Pim_dDutyCycThermProtnMplr12T;
extern VAR(u3p13, AUTOMATIC) DutyCycThermProtn_Pim_dDutyCycThermProtnMplr2;
extern VAR(u3p13, AUTOMATIC) DutyCycThermProtn_Pim_dDutyCycThermProtnMplr3;
extern VAR(float32, AUTOMATIC) DutyCycThermProtn_Pim_dDutyCycThermProtnMplr36T;
extern VAR(u3p13, AUTOMATIC) DutyCycThermProtn_Pim_dDutyCycThermProtnMplr4;
extern VAR(u3p13, AUTOMATIC) DutyCycThermProtn_Pim_dDutyCycThermProtnMplr5;
extern VAR(u3p13, AUTOMATIC) DutyCycThermProtn_Pim_dDutyCycThermProtnMplr6;
extern VAR(float32, AUTOMATIC) DutyCycThermProtn_Pim_dDutyCycThermProtnThermLoadLim;
extern VAR(float32, AUTOMATIC) DutyCycThermProtn_Pim_dDutyCycThermProtnThermLoadLimTblYVal;
extern VAR(float32, AUTOMATIC) DutyCycThermProtn_Pim_AbsltTLimSlewStVari;
extern VAR(boolean, AUTOMATIC) DutyCycThermProtn_Pim_FetLoaMtgtnEnaPrev;
extern VAR(uint8, AUTOMATIC) DutyCycThermProtn_Pim_FetMtgtnEnaCalIdx;
extern VAR(FilLpRec1, AUTOMATIC) DutyCycThermProtn_Pim_Fil1ValStVari;
extern VAR(FilLpRec1, AUTOMATIC) DutyCycThermProtn_Pim_Fil2ValStVari;
extern VAR(uint8, AUTOMATIC) DutyCycThermProtn_Pim_Fil3ValPwrUp;
extern VAR(uint8, AUTOMATIC) DutyCycThermProtn_Pim_Fil4ValPwrUp;
extern VAR(uint8, AUTOMATIC) DutyCycThermProtn_Pim_Fil5ValPwrUp;
extern VAR(uint8, AUTOMATIC) DutyCycThermProtn_Pim_Fil6ValPwrUp;
extern VAR(FilLpRec1, AUTOMATIC) DutyCycThermProtn_Pim_Fild3Val;
extern VAR(FilLpRec1, AUTOMATIC) DutyCycThermProtn_Pim_Fild4Val;
extern VAR(FilLpRec1, AUTOMATIC) DutyCycThermProtn_Pim_Fild5Val;
extern VAR(FilLpRec1, AUTOMATIC) DutyCycThermProtn_Pim_Fild6Val;
extern VAR(float32, AUTOMATIC) DutyCycThermProtn_Pim_LstTblValRateLimrStVari;
extern VAR(boolean, AUTOMATIC) DutyCycThermProtn_Pim_ReInitCntrFlg;
extern VAR(float32, AUTOMATIC) DutyCycThermProtn_Pim_ReInitCntrVal;

/* IRVs */
extern VAR(boolean, AUTOMATIC) DutyCycThermProtn_Irv_FilStVariReInitFlg;

/* Arguments and Returns */
extern VAR(uint8, AUTOMATIC) DutyCycThermProtn_Srv_FilStVal_GetErrorStatus_RequestResultPtr;
extern VAR(Std_ReturnType, AUTOMATIC) DutyCycThermProtn_Srv_FilStVal_GetErrorStatus_Return;
extern VAR(boolean, AUTOMATIC) DutyCycThermProtn_Srv_FilStVal_SetRamBlockStatus_BlockChanged;
extern VAR(Std_ReturnType, AUTOMATIC) DutyCycThermProtn_Srv_FilStVal_SetRamBlockStatus_Return;
extern VAR(NtcNr1, AUTOMATIC) DutyCycThermProtn_Srv_SetNtcSts_NtcNr;
extern VAR(uint8, AUTOMATIC) DutyCycThermProtn_Srv_SetNtcSts_NtcStInfo;
extern VAR(NtcSts1, AUTOMATIC) DutyCycThermProtn_Srv_SetNtcSts_NtcSts;
extern VAR(uint16, AUTOMATIC) DutyCycThermProtn_Srv_SetNtcSts_DebStep;
extern VAR(Std_ReturnType, AUTOMATIC) DutyCycThermProtn_Srv_SetNtcSts_Return;


/*** Input Stubs ***/

#ifdef Rte_Read_DiagcStsLimdTPrfmnc_Logl
# undef Rte_Read_DiagcStsLimdTPrfmnc_Logl
#else
#error Rte_Read_DiagcStsLimdTPrfmnc_Logl is missing
#endif
#define Rte_Read_DiagcStsLimdTPrfmnc_Logl(data) (*(data) = DutyCycThermProtn_Ip_DiagcStsLimdTPrfmnc)

#ifdef Rte_Read_DualEcuFltMtgtnEna_Logl
# undef Rte_Read_DualEcuFltMtgtnEna_Logl
#else
#error Rte_Read_DualEcuFltMtgtnEna_Logl is missing
#endif
#define Rte_Read_DualEcuFltMtgtnEna_Logl(data) (*(data) = DutyCycThermProtn_Ip_DualEcuFltMtgtnEna)

#ifdef Rte_Read_DutyCycThermProtnDi_Logl
# undef Rte_Read_DutyCycThermProtnDi_Logl
#else
#error Rte_Read_DutyCycThermProtnDi_Logl is missing
#endif
#define Rte_Read_DutyCycThermProtnDi_Logl(data) (*(data) = DutyCycThermProtn_Ip_DutyCycThermProtnDi)

#ifdef Rte_Read_EcuTFild_Val
# undef Rte_Read_EcuTFild_Val
#else
#error Rte_Read_EcuTFild_Val is missing
#endif
#define Rte_Read_EcuTFild_Val(data) (*(data) = DutyCycThermProtn_Ip_EcuTFild)

#ifdef Rte_Read_IgnTiOff_Val
# undef Rte_Read_IgnTiOff_Val
#else
#error Rte_Read_IgnTiOff_Val is missing
#endif
#define Rte_Read_IgnTiOff_Val(data) (*(data) = DutyCycThermProtn_Ip_IgnTiOff)

#ifdef Rte_Read_MotAndThermProtnLoaMod_Val
# undef Rte_Read_MotAndThermProtnLoaMod_Val
#else
#error Rte_Read_MotAndThermProtnLoaMod_Val is missing
#endif
#define Rte_Read_MotAndThermProtnLoaMod_Val(data) (*(data) = DutyCycThermProtn_Ip_MotAndThermProtnLoaMod)

#ifdef Rte_Read_MotCurrPeakEstimd_Val
# undef Rte_Read_MotCurrPeakEstimd_Val
#else
#error Rte_Read_MotCurrPeakEstimd_Val is missing
#endif
#define Rte_Read_MotCurrPeakEstimd_Val(data) (*(data) = DutyCycThermProtn_Ip_MotCurrPeakEstimd)

#ifdef Rte_Read_MotCurrPeakEstimdFild_Val
# undef Rte_Read_MotCurrPeakEstimdFild_Val
#else
#error Rte_Read_MotCurrPeakEstimdFild_Val is missing
#endif
#define Rte_Read_MotCurrPeakEstimdFild_Val(data) (*(data) = DutyCycThermProtn_Ip_MotCurrPeakEstimdFild)

#ifdef Rte_Read_MotFetT_Val
# undef Rte_Read_MotFetT_Val
#else
#error Rte_Read_MotFetT_Val is missing
#endif
#define Rte_Read_MotFetT_Val(data) (*(data) = DutyCycThermProtn_Ip_MotFetT)

#ifdef Rte_Read_MotMagT_Val
# undef Rte_Read_MotMagT_Val
#else
#error Rte_Read_MotMagT_Val is missing
#endif
#define Rte_Read_MotMagT_Val(data) (*(data) = DutyCycThermProtn_Ip_MotMagT)

#ifdef Rte_Read_MotVelCrf_Val
# undef Rte_Read_MotVelCrf_Val
#else
#error Rte_Read_MotVelCrf_Val is missing
#endif
#define Rte_Read_MotVelCrf_Val(data) (*(data) = DutyCycThermProtn_Ip_MotVelCrf)

#ifdef Rte_Read_MotWidgT_Val
# undef Rte_Read_MotWidgT_Val
#else
#error Rte_Read_MotWidgT_Val is missing
#endif
#define Rte_Read_MotWidgT_Val(data) (*(data) = DutyCycThermProtn_Ip_MotWidgT)

#ifdef Rte_Read_VehTiVld_Logl
# undef Rte_Read_VehTiVld_Logl
#else
#error Rte_Read_VehTiVld_Logl is missing
#endif
#define Rte_Read_VehTiVld_Logl(data) (*(data) = DutyCycThermProtn_Ip_VehTiVld)


/*** Output Stubs ***/

#ifdef Rte_Write_DutyCycThermProtnMaxOutp_Val
# undef Rte_Write_DutyCycThermProtnMaxOutp_Val
#else
#error Rte_Write_DutyCycThermProtnMaxOutp_Val is missing
#endif
#define Rte_Write_DutyCycThermProtnMaxOutp_Val(data) (DutyCycThermProtn_Op_DutyCycThermProtnMaxOutp = (data))

#ifdef Rte_Write_ThermDutyCycProtnLoadDptLim_Val
# undef Rte_Write_ThermDutyCycProtnLoadDptLim_Val
#else
#error Rte_Write_ThermDutyCycProtnLoadDptLim_Val is missing
#endif
#define Rte_Write_ThermDutyCycProtnLoadDptLim_Val(data) (DutyCycThermProtn_Op_ThermDutyCycProtnLoadDptLim = (data))

#ifdef Rte_Write_ThermDutyCycProtnTDptLim_Val
# undef Rte_Write_ThermDutyCycProtnTDptLim_Val
#else
#error Rte_Write_ThermDutyCycProtnTDptLim_Val is missing
#endif
#define Rte_Write_ThermDutyCycProtnTDptLim_Val(data) (DutyCycThermProtn_Op_ThermDutyCycProtnTDptLim = (data))

#ifdef Rte_Write_ThermLimSlowFilMax_Val
# undef Rte_Write_ThermLimSlowFilMax_Val
#else
#error Rte_Write_ThermLimSlowFilMax_Val is missing
#endif
#define Rte_Write_ThermLimSlowFilMax_Val(data) (DutyCycThermProtn_Op_ThermLimSlowFilMax = (data))

#ifdef Rte_Write_ThermMotTqLim_Val
# undef Rte_Write_ThermMotTqLim_Val
#else
#error Rte_Write_ThermMotTqLim_Val is missing
#endif
#define Rte_Write_ThermMotTqLim_Val(data) (DutyCycThermProtn_Op_ThermMotTqLim = (data))

#ifdef Rte_Write_ThermRednFac_Val
# undef Rte_Write_ThermRednFac_Val
#else
#error Rte_Write_ThermRednFac_Val is missing
#endif
#define Rte_Write_ThermRednFac_Val(data) (DutyCycThermProtn_Op_ThermRednFac = (data))


/*** Calibration Stubs ***/

#ifdef Rte_Prm_DutyCycThermProtnAbsltCtrlTFetMtgtnTblX_Ary1D
# undef Rte_Prm_DutyCycThermProtnAbsltCtrlTFetMtgtnTblX_Ary1D
#else
#error Rte_Prm_DutyCycThermProtnAbsltCtrlTFetMtgtnTblX_Ary1D is missing
#endif
#define Rte_Prm_DutyCycThermProtnAbsltCtrlTFetMtgtnTblX_Ary1D() (&(DutyCycThermProtn_Cal_DutyCycThermProtnAbsltCtrlTFetMtgtnTblX[0]))

#ifdef Rte_Prm_DutyCycThermProtnAbsltCtrlTTblX_Ary1D
# undef Rte_Prm_DutyCycThermProtnAbsltCtrlTTblX_Ary1D
#else
#error Rte_Prm_DutyCycThermProtnAbsltCtrlTTblX_Ary1D is missing
#endif
#define Rte_Prm_DutyCycThermProtnAbsltCtrlTTblX_Ary1D() (&(DutyCycThermProtn_Cal_DutyCycThermProtnAbsltCtrlTTblX[0]))

#ifdef Rte_Prm_DutyCycThermProtnAbsltCtrlTTqFetMtgtnTblY_Ary1D
# undef Rte_Prm_DutyCycThermProtnAbsltCtrlTTqFetMtgtnTblY_Ary1D
#else
#error Rte_Prm_DutyCycThermProtnAbsltCtrlTTqFetMtgtnTblY_Ary1D is missing
#endif
#define Rte_Prm_DutyCycThermProtnAbsltCtrlTTqFetMtgtnTblY_Ary1D() (&(DutyCycThermProtn_Cal_DutyCycThermProtnAbsltCtrlTTqFetMtgtnTblY[0]))

#ifdef Rte_Prm_DutyCycThermProtnAbsltCtrlTTqTblY_Ary1D
# undef Rte_Prm_DutyCycThermProtnAbsltCtrlTTqTblY_Ary1D
#else
#error Rte_Prm_DutyCycThermProtnAbsltCtrlTTqTblY_Ary1D is missing
#endif
#define Rte_Prm_DutyCycThermProtnAbsltCtrlTTqTblY_Ary1D() (&(DutyCycThermProtn_Cal_DutyCycThermProtnAbsltCtrlTTqTblY[0]))

#ifdef Rte_Prm_DutyCycThermProtnAbsltCuTFetMtgtnTblX_Ary1D
# undef Rte_Prm_DutyCycThermProtnAbsltCuTFetMtgtnTblX_Ary1D
#else
#error Rte_Prm_DutyCycThermProtnAbsltCuTFetMtgtnTblX_Ary1D is missing
#endif
#define Rte_Prm_DutyCycThermProtnAbsltCuTFetMtgtnTblX_Ary1D() (&(DutyCycThermProtn_Cal_DutyCycThermProtnAbsltCuTFetMtgtnTblX[0]))

#ifdef Rte_Prm_DutyCycThermProtnAbsltCuTTblX_Ary1D
# undef Rte_Prm_DutyCycThermProtnAbsltCuTTblX_Ary1D
#else
#error Rte_Prm_DutyCycThermProtnAbsltCuTTblX_Ary1D is missing
#endif
#define Rte_Prm_DutyCycThermProtnAbsltCuTTblX_Ary1D() (&(DutyCycThermProtn_Cal_DutyCycThermProtnAbsltCuTTblX[0]))

#ifdef Rte_Prm_DutyCycThermProtnAbsltCuTTqFetMtgtnTblY_Ary1D
# undef Rte_Prm_DutyCycThermProtnAbsltCuTTqFetMtgtnTblY_Ary1D
#else
#error Rte_Prm_DutyCycThermProtnAbsltCuTTqFetMtgtnTblY_Ary1D is missing
#endif
#define Rte_Prm_DutyCycThermProtnAbsltCuTTqFetMtgtnTblY_Ary1D() (&(DutyCycThermProtn_Cal_DutyCycThermProtnAbsltCuTTqFetMtgtnTblY[0]))

#ifdef Rte_Prm_DutyCycThermProtnAbsltCuTTqTblY_Ary1D
# undef Rte_Prm_DutyCycThermProtnAbsltCuTTqTblY_Ary1D
#else
#error Rte_Prm_DutyCycThermProtnAbsltCuTTqTblY_Ary1D is missing
#endif
#define Rte_Prm_DutyCycThermProtnAbsltCuTTqTblY_Ary1D() (&(DutyCycThermProtn_Cal_DutyCycThermProtnAbsltCuTTqTblY[0]))

#ifdef Rte_Prm_DutyCycThermProtnAbsltMotVelBreakPt_Val
# undef Rte_Prm_DutyCycThermProtnAbsltMotVelBreakPt_Val
#else
#error Rte_Prm_DutyCycThermProtnAbsltMotVelBreakPt_Val is missing
#endif
#define Rte_Prm_DutyCycThermProtnAbsltMotVelBreakPt_Val() (DutyCycThermProtn_Cal_DutyCycThermProtnAbsltMotVelBreakPt)

#ifdef Rte_Prm_DutyCycThermProtnAbsltTTqSlewHiLim_Val
# undef Rte_Prm_DutyCycThermProtnAbsltTTqSlewHiLim_Val
#else
#error Rte_Prm_DutyCycThermProtnAbsltTTqSlewHiLim_Val is missing
#endif
#define Rte_Prm_DutyCycThermProtnAbsltTTqSlewHiLim_Val() (DutyCycThermProtn_Cal_DutyCycThermProtnAbsltTTqSlewHiLim)

#ifdef Rte_Prm_DutyCycThermProtnAbsltTTqSlewLoLim_Val
# undef Rte_Prm_DutyCycThermProtnAbsltTTqSlewLoLim_Val
#else
#error Rte_Prm_DutyCycThermProtnAbsltTTqSlewLoLim_Val is missing
#endif
#define Rte_Prm_DutyCycThermProtnAbsltTTqSlewLoLim_Val() (DutyCycThermProtn_Cal_DutyCycThermProtnAbsltTTqSlewLoLim)

#ifdef Rte_Prm_DutyCycThermProtnCtrlT_Val
# undef Rte_Prm_DutyCycThermProtnCtrlT_Val
#else
#error Rte_Prm_DutyCycThermProtnCtrlT_Val is missing
#endif
#define Rte_Prm_DutyCycThermProtnCtrlT_Val() (DutyCycThermProtn_Cal_DutyCycThermProtnCtrlT)

#ifdef Rte_Prm_DutyCycThermProtnCtrlTSeln_Logl
# undef Rte_Prm_DutyCycThermProtnCtrlTSeln_Logl
#else
#error Rte_Prm_DutyCycThermProtnCtrlTSeln_Logl is missing
#endif
#define Rte_Prm_DutyCycThermProtnCtrlTSeln_Logl() (DutyCycThermProtn_Cal_DutyCycThermProtnCtrlTSeln)

#ifdef Rte_Prm_DutyCycThermProtnDutyCycFildThd_Val
# undef Rte_Prm_DutyCycThermProtnDutyCycFildThd_Val
#else
#error Rte_Prm_DutyCycThermProtnDutyCycFildThd_Val is missing
#endif
#define Rte_Prm_DutyCycThermProtnDutyCycFildThd_Val() (DutyCycThermProtn_Cal_DutyCycThermProtnDutyCycFildThd)

#ifdef Rte_Prm_DutyCycThermProtnIgnOffCtrlEna_Logl
# undef Rte_Prm_DutyCycThermProtnIgnOffCtrlEna_Logl
#else
#error Rte_Prm_DutyCycThermProtnIgnOffCtrlEna_Logl is missing
#endif
#define Rte_Prm_DutyCycThermProtnIgnOffCtrlEna_Logl() (DutyCycThermProtn_Cal_DutyCycThermProtnIgnOffCtrlEna)

#ifdef Rte_Prm_DutyCycThermProtnIgnOffMsgWaitTi_Val
# undef Rte_Prm_DutyCycThermProtnIgnOffMsgWaitTi_Val
#else
#error Rte_Prm_DutyCycThermProtnIgnOffMsgWaitTi_Val is missing
#endif
#define Rte_Prm_DutyCycThermProtnIgnOffMsgWaitTi_Val() (DutyCycThermProtn_Cal_DutyCycThermProtnIgnOffMsgWaitTi)

#ifdef Rte_Prm_DutyCycThermProtnLstTblValNonStall_Ary2D
# undef Rte_Prm_DutyCycThermProtnLstTblValNonStall_Ary2D
#else
#error Rte_Prm_DutyCycThermProtnLstTblValNonStall_Ary2D is missing
#endif
#define Rte_Prm_DutyCycThermProtnLstTblValNonStall_Ary2D() (&(DutyCycThermProtn_Cal_DutyCycThermProtnLstTblValNonStall[0][0]))

#ifdef Rte_Prm_DutyCycThermProtnLstTblValStall_Ary2D
# undef Rte_Prm_DutyCycThermProtnLstTblValStall_Ary2D
#else
#error Rte_Prm_DutyCycThermProtnLstTblValStall_Ary2D is missing
#endif
#define Rte_Prm_DutyCycThermProtnLstTblValStall_Ary2D() (&(DutyCycThermProtn_Cal_DutyCycThermProtnLstTblValStall[0][0]))

#ifdef Rte_Prm_DutyCycThermProtnMotPrTSeln_Logl
# undef Rte_Prm_DutyCycThermProtnMotPrTSeln_Logl
#else
#error Rte_Prm_DutyCycThermProtnMotPrTSeln_Logl is missing
#endif
#define Rte_Prm_DutyCycThermProtnMotPrTSeln_Logl() (DutyCycThermProtn_Cal_DutyCycThermProtnMotPrTSeln)

#ifdef Rte_Prm_DutyCycThermProtnMplr1FetMtgtnNonStallTblY_Ary1D
# undef Rte_Prm_DutyCycThermProtnMplr1FetMtgtnNonStallTblY_Ary1D
#else
#error Rte_Prm_DutyCycThermProtnMplr1FetMtgtnNonStallTblY_Ary1D is missing
#endif
#define Rte_Prm_DutyCycThermProtnMplr1FetMtgtnNonStallTblY_Ary1D() (&(DutyCycThermProtn_Cal_DutyCycThermProtnMplr1FetMtgtnNonStallTblY[0]))

#ifdef Rte_Prm_DutyCycThermProtnMplr1FetMtgtnStallTblY_Ary1D
# undef Rte_Prm_DutyCycThermProtnMplr1FetMtgtnStallTblY_Ary1D
#else
#error Rte_Prm_DutyCycThermProtnMplr1FetMtgtnStallTblY_Ary1D is missing
#endif
#define Rte_Prm_DutyCycThermProtnMplr1FetMtgtnStallTblY_Ary1D() (&(DutyCycThermProtn_Cal_DutyCycThermProtnMplr1FetMtgtnStallTblY[0]))

#ifdef Rte_Prm_DutyCycThermProtnMplr1NonStallTblY_Ary1D
# undef Rte_Prm_DutyCycThermProtnMplr1NonStallTblY_Ary1D
#else
#error Rte_Prm_DutyCycThermProtnMplr1NonStallTblY_Ary1D is missing
#endif
#define Rte_Prm_DutyCycThermProtnMplr1NonStallTblY_Ary1D() (&(DutyCycThermProtn_Cal_DutyCycThermProtnMplr1NonStallTblY[0]))

#ifdef Rte_Prm_DutyCycThermProtnMplr1StallTblY_Ary1D
# undef Rte_Prm_DutyCycThermProtnMplr1StallTblY_Ary1D
#else
#error Rte_Prm_DutyCycThermProtnMplr1StallTblY_Ary1D is missing
#endif
#define Rte_Prm_DutyCycThermProtnMplr1StallTblY_Ary1D() (&(DutyCycThermProtn_Cal_DutyCycThermProtnMplr1StallTblY[0]))

#ifdef Rte_Prm_DutyCycThermProtnMplr2FetMtgtnNonStallTblY_Ary1D
# undef Rte_Prm_DutyCycThermProtnMplr2FetMtgtnNonStallTblY_Ary1D
#else
#error Rte_Prm_DutyCycThermProtnMplr2FetMtgtnNonStallTblY_Ary1D is missing
#endif
#define Rte_Prm_DutyCycThermProtnMplr2FetMtgtnNonStallTblY_Ary1D() (&(DutyCycThermProtn_Cal_DutyCycThermProtnMplr2FetMtgtnNonStallTblY[0]))

#ifdef Rte_Prm_DutyCycThermProtnMplr2FetMtgtnStallTblY_Ary1D
# undef Rte_Prm_DutyCycThermProtnMplr2FetMtgtnStallTblY_Ary1D
#else
#error Rte_Prm_DutyCycThermProtnMplr2FetMtgtnStallTblY_Ary1D is missing
#endif
#define Rte_Prm_DutyCycThermProtnMplr2FetMtgtnStallTblY_Ary1D() (&(DutyCycThermProtn_Cal_DutyCycThermProtnMplr2FetMtgtnStallTblY[0]))

#ifdef Rte_Prm_DutyCycThermProtnMplr2NonStallTblY_Ary1D
# undef Rte_Prm_DutyCycThermProtnMplr2NonStallTblY_Ary1D
#else
#error Rte_Prm_DutyCycThermProtnMplr2NonStallTblY_Ary1D is missing
#endif
#define Rte_Prm_DutyCycThermProtnMplr2NonStallTblY_Ary1D() (&(DutyCycThermProtn_Cal_DutyCycThermProtnMplr2NonStallTblY[0]))

#ifdef Rte_Prm_DutyCycThermProtnMplr2StallTblY_Ary1D
# undef Rte_Prm_DutyCycThermProtnMplr2StallTblY_Ary1D
#else
#error Rte_Prm_DutyCycThermProtnMplr2StallTblY_Ary1D is missing
#endif
#define Rte_Prm_DutyCycThermProtnMplr2StallTblY_Ary1D() (&(DutyCycThermProtn_Cal_DutyCycThermProtnMplr2StallTblY[0]))

#ifdef Rte_Prm_DutyCycThermProtnMplr3FetMtgtnNonStallTblY_Ary1D
# undef Rte_Prm_DutyCycThermProtnMplr3FetMtgtnNonStallTblY_Ary1D
#else
#error Rte_Prm_DutyCycThermProtnMplr3FetMtgtnNonStallTblY_Ary1D is missing
#endif
#define Rte_Prm_DutyCycThermProtnMplr3FetMtgtnNonStallTblY_Ary1D() (&(DutyCycThermProtn_Cal_DutyCycThermProtnMplr3FetMtgtnNonStallTblY[0]))

#ifdef Rte_Prm_DutyCycThermProtnMplr3FetMtgtnStallTblY_Ary1D
# undef Rte_Prm_DutyCycThermProtnMplr3FetMtgtnStallTblY_Ary1D
#else
#error Rte_Prm_DutyCycThermProtnMplr3FetMtgtnStallTblY_Ary1D is missing
#endif
#define Rte_Prm_DutyCycThermProtnMplr3FetMtgtnStallTblY_Ary1D() (&(DutyCycThermProtn_Cal_DutyCycThermProtnMplr3FetMtgtnStallTblY[0]))

#ifdef Rte_Prm_DutyCycThermProtnMplr3NonStallTblY_Ary1D
# undef Rte_Prm_DutyCycThermProtnMplr3NonStallTblY_Ary1D
#else
#error Rte_Prm_DutyCycThermProtnMplr3NonStallTblY_Ary1D is missing
#endif
#define Rte_Prm_DutyCycThermProtnMplr3NonStallTblY_Ary1D() (&(DutyCycThermProtn_Cal_DutyCycThermProtnMplr3NonStallTblY[0]))

#ifdef Rte_Prm_DutyCycThermProtnMplr3StallTblY_Ary1D
# undef Rte_Prm_DutyCycThermProtnMplr3StallTblY_Ary1D
#else
#error Rte_Prm_DutyCycThermProtnMplr3StallTblY_Ary1D is missing
#endif
#define Rte_Prm_DutyCycThermProtnMplr3StallTblY_Ary1D() (&(DutyCycThermProtn_Cal_DutyCycThermProtnMplr3StallTblY[0]))

#ifdef Rte_Prm_DutyCycThermProtnMplr4FetMtgtnNonStallTblY_Ary1D
# undef Rte_Prm_DutyCycThermProtnMplr4FetMtgtnNonStallTblY_Ary1D
#else
#error Rte_Prm_DutyCycThermProtnMplr4FetMtgtnNonStallTblY_Ary1D is missing
#endif
#define Rte_Prm_DutyCycThermProtnMplr4FetMtgtnNonStallTblY_Ary1D() (&(DutyCycThermProtn_Cal_DutyCycThermProtnMplr4FetMtgtnNonStallTblY[0]))

#ifdef Rte_Prm_DutyCycThermProtnMplr4FetMtgtnStallTblY_Ary1D
# undef Rte_Prm_DutyCycThermProtnMplr4FetMtgtnStallTblY_Ary1D
#else
#error Rte_Prm_DutyCycThermProtnMplr4FetMtgtnStallTblY_Ary1D is missing
#endif
#define Rte_Prm_DutyCycThermProtnMplr4FetMtgtnStallTblY_Ary1D() (&(DutyCycThermProtn_Cal_DutyCycThermProtnMplr4FetMtgtnStallTblY[0]))

#ifdef Rte_Prm_DutyCycThermProtnMplr4NonStallTblY_Ary1D
# undef Rte_Prm_DutyCycThermProtnMplr4NonStallTblY_Ary1D
#else
#error Rte_Prm_DutyCycThermProtnMplr4NonStallTblY_Ary1D is missing
#endif
#define Rte_Prm_DutyCycThermProtnMplr4NonStallTblY_Ary1D() (&(DutyCycThermProtn_Cal_DutyCycThermProtnMplr4NonStallTblY[0]))

#ifdef Rte_Prm_DutyCycThermProtnMplr4StallTblY_Ary1D
# undef Rte_Prm_DutyCycThermProtnMplr4StallTblY_Ary1D
#else
#error Rte_Prm_DutyCycThermProtnMplr4StallTblY_Ary1D is missing
#endif
#define Rte_Prm_DutyCycThermProtnMplr4StallTblY_Ary1D() (&(DutyCycThermProtn_Cal_DutyCycThermProtnMplr4StallTblY[0]))

#ifdef Rte_Prm_DutyCycThermProtnMplr5FetMtgtnNonStallTblY_Ary1D
# undef Rte_Prm_DutyCycThermProtnMplr5FetMtgtnNonStallTblY_Ary1D
#else
#error Rte_Prm_DutyCycThermProtnMplr5FetMtgtnNonStallTblY_Ary1D is missing
#endif
#define Rte_Prm_DutyCycThermProtnMplr5FetMtgtnNonStallTblY_Ary1D() (&(DutyCycThermProtn_Cal_DutyCycThermProtnMplr5FetMtgtnNonStallTblY[0]))

#ifdef Rte_Prm_DutyCycThermProtnMplr5FetMtgtnStallTblY_Ary1D
# undef Rte_Prm_DutyCycThermProtnMplr5FetMtgtnStallTblY_Ary1D
#else
#error Rte_Prm_DutyCycThermProtnMplr5FetMtgtnStallTblY_Ary1D is missing
#endif
#define Rte_Prm_DutyCycThermProtnMplr5FetMtgtnStallTblY_Ary1D() (&(DutyCycThermProtn_Cal_DutyCycThermProtnMplr5FetMtgtnStallTblY[0]))

#ifdef Rte_Prm_DutyCycThermProtnMplr5NonStallTblY_Ary1D
# undef Rte_Prm_DutyCycThermProtnMplr5NonStallTblY_Ary1D
#else
#error Rte_Prm_DutyCycThermProtnMplr5NonStallTblY_Ary1D is missing
#endif
#define Rte_Prm_DutyCycThermProtnMplr5NonStallTblY_Ary1D() (&(DutyCycThermProtn_Cal_DutyCycThermProtnMplr5NonStallTblY[0]))

#ifdef Rte_Prm_DutyCycThermProtnMplr5StallTblY_Ary1D
# undef Rte_Prm_DutyCycThermProtnMplr5StallTblY_Ary1D
#else
#error Rte_Prm_DutyCycThermProtnMplr5StallTblY_Ary1D is missing
#endif
#define Rte_Prm_DutyCycThermProtnMplr5StallTblY_Ary1D() (&(DutyCycThermProtn_Cal_DutyCycThermProtnMplr5StallTblY[0]))

#ifdef Rte_Prm_DutyCycThermProtnMplr6FetMtgtnNonStallTblY_Ary1D
# undef Rte_Prm_DutyCycThermProtnMplr6FetMtgtnNonStallTblY_Ary1D
#else
#error Rte_Prm_DutyCycThermProtnMplr6FetMtgtnNonStallTblY_Ary1D is missing
#endif
#define Rte_Prm_DutyCycThermProtnMplr6FetMtgtnNonStallTblY_Ary1D() (&(DutyCycThermProtn_Cal_DutyCycThermProtnMplr6FetMtgtnNonStallTblY[0]))

#ifdef Rte_Prm_DutyCycThermProtnMplr6FetMtgtnStallTblY_Ary1D
# undef Rte_Prm_DutyCycThermProtnMplr6FetMtgtnStallTblY_Ary1D
#else
#error Rte_Prm_DutyCycThermProtnMplr6FetMtgtnStallTblY_Ary1D is missing
#endif
#define Rte_Prm_DutyCycThermProtnMplr6FetMtgtnStallTblY_Ary1D() (&(DutyCycThermProtn_Cal_DutyCycThermProtnMplr6FetMtgtnStallTblY[0]))

#ifdef Rte_Prm_DutyCycThermProtnMplr6NonStallTblY_Ary1D
# undef Rte_Prm_DutyCycThermProtnMplr6NonStallTblY_Ary1D
#else
#error Rte_Prm_DutyCycThermProtnMplr6NonStallTblY_Ary1D is missing
#endif
#define Rte_Prm_DutyCycThermProtnMplr6NonStallTblY_Ary1D() (&(DutyCycThermProtn_Cal_DutyCycThermProtnMplr6NonStallTblY[0]))

#ifdef Rte_Prm_DutyCycThermProtnMplr6StallTblY_Ary1D
# undef Rte_Prm_DutyCycThermProtnMplr6StallTblY_Ary1D
#else
#error Rte_Prm_DutyCycThermProtnMplr6StallTblY_Ary1D is missing
#endif
#define Rte_Prm_DutyCycThermProtnMplr6StallTblY_Ary1D() (&(DutyCycThermProtn_Cal_DutyCycThermProtnMplr6StallTblY[0]))

#ifdef Rte_Prm_DutyCycThermProtnMplrFetMtgtnTblX_Ary1D
# undef Rte_Prm_DutyCycThermProtnMplrFetMtgtnTblX_Ary1D
#else
#error Rte_Prm_DutyCycThermProtnMplrFetMtgtnTblX_Ary1D is missing
#endif
#define Rte_Prm_DutyCycThermProtnMplrFetMtgtnTblX_Ary1D() (&(DutyCycThermProtn_Cal_DutyCycThermProtnMplrFetMtgtnTblX[0]))

#ifdef Rte_Prm_DutyCycThermProtnMplrTSeln_Logl
# undef Rte_Prm_DutyCycThermProtnMplrTSeln_Logl
#else
#error Rte_Prm_DutyCycThermProtnMplrTSeln_Logl is missing
#endif
#define Rte_Prm_DutyCycThermProtnMplrTSeln_Logl() (DutyCycThermProtn_Cal_DutyCycThermProtnMplrTSeln)

#ifdef Rte_Prm_DutyCycThermProtnMplrTblX_Ary1D
# undef Rte_Prm_DutyCycThermProtnMplrTblX_Ary1D
#else
#error Rte_Prm_DutyCycThermProtnMplrTblX_Ary1D is missing
#endif
#define Rte_Prm_DutyCycThermProtnMplrTblX_Ary1D() (&(DutyCycThermProtn_Cal_DutyCycThermProtnMplrTblX[0]))

#ifdef Rte_Prm_DutyCycThermProtnSlowFilTSeln_Logl
# undef Rte_Prm_DutyCycThermProtnSlowFilTSeln_Logl
#else
#error Rte_Prm_DutyCycThermProtnSlowFilTSeln_Logl is missing
#endif
#define Rte_Prm_DutyCycThermProtnSlowFilTSeln_Logl() (DutyCycThermProtn_Cal_DutyCycThermProtnSlowFilTSeln)

#ifdef Rte_Prm_DutyCycThermProtnThermLimScaFac_Val
# undef Rte_Prm_DutyCycThermProtnThermLimScaFac_Val
#else
#error Rte_Prm_DutyCycThermProtnThermLimScaFac_Val is missing
#endif
#define Rte_Prm_DutyCycThermProtnThermLimScaFac_Val() (DutyCycThermProtn_Cal_DutyCycThermProtnThermLimScaFac)

#ifdef Rte_Prm_DutyCycThermProtnThermLoadLimTblX_Ary2D
# undef Rte_Prm_DutyCycThermProtnThermLoadLimTblX_Ary2D
#else
#error Rte_Prm_DutyCycThermProtnThermLoadLimTblX_Ary2D is missing
#endif
#define Rte_Prm_DutyCycThermProtnThermLoadLimTblX_Ary2D() (&(DutyCycThermProtn_Cal_DutyCycThermProtnThermLoadLimTblX[0][0]))

#ifdef Rte_Prm_DutyCycThermProtnThermLoadLimTblY_Ary2D
# undef Rte_Prm_DutyCycThermProtnThermLoadLimTblY_Ary2D
#else
#error Rte_Prm_DutyCycThermProtnThermLoadLimTblY_Ary2D is missing
#endif
#define Rte_Prm_DutyCycThermProtnThermLoadLimTblY_Ary2D() (&(DutyCycThermProtn_Cal_DutyCycThermProtnThermLoadLimTblY[0][0]))

#ifdef Rte_Prm_DutyCycThermProtnTqCmdSlewDwn_Val
# undef Rte_Prm_DutyCycThermProtnTqCmdSlewDwn_Val
#else
#error Rte_Prm_DutyCycThermProtnTqCmdSlewDwn_Val is missing
#endif
#define Rte_Prm_DutyCycThermProtnTqCmdSlewDwn_Val() (DutyCycThermProtn_Cal_DutyCycThermProtnTqCmdSlewDwn)

#ifdef Rte_Prm_DutyCycThermProtnTqCmdSlewUp_Val
# undef Rte_Prm_DutyCycThermProtnTqCmdSlewUp_Val
#else
#error Rte_Prm_DutyCycThermProtnTqCmdSlewUp_Val is missing
#endif
#define Rte_Prm_DutyCycThermProtnTqCmdSlewUp_Val() (DutyCycThermProtn_Cal_DutyCycThermProtnTqCmdSlewUp)


/*** PIM Stubs ***/

#ifdef Rte_Pim_FilStVal
# undef Rte_Pim_FilStVal
#else
#error Rte_Pim_FilStVal is missing
#endif
#define Rte_Pim_FilStVal() (&DutyCycThermProtn_Pim_FilStVal)

#ifdef Rte_Pim_dDutyCycThermProtnAbsltCtrlrTTqLim
# undef Rte_Pim_dDutyCycThermProtnAbsltCtrlrTTqLim
#else
#error Rte_Pim_dDutyCycThermProtnAbsltCtrlrTTqLim is missing
#endif
#define Rte_Pim_dDutyCycThermProtnAbsltCtrlrTTqLim() (&DutyCycThermProtn_Pim_dDutyCycThermProtnAbsltCtrlrTTqLim)

#ifdef Rte_Pim_dDutyCycThermProtnAbsltCuTTqLim
# undef Rte_Pim_dDutyCycThermProtnAbsltCuTTqLim
#else
#error Rte_Pim_dDutyCycThermProtnAbsltCuTTqLim is missing
#endif
#define Rte_Pim_dDutyCycThermProtnAbsltCuTTqLim() (&DutyCycThermProtn_Pim_dDutyCycThermProtnAbsltCuTTqLim)

#ifdef Rte_Pim_dDutyCycThermProtnAbsltTTqLim
# undef Rte_Pim_dDutyCycThermProtnAbsltTTqLim
#else
#error Rte_Pim_dDutyCycThermProtnAbsltTTqLim is missing
#endif
#define Rte_Pim_dDutyCycThermProtnAbsltTTqLim() (&DutyCycThermProtn_Pim_dDutyCycThermProtnAbsltTTqLim)

#ifdef Rte_Pim_dDutyCycThermProtnLstTblVal
# undef Rte_Pim_dDutyCycThermProtnLstTblVal
#else
#error Rte_Pim_dDutyCycThermProtnLstTblVal is missing
#endif
#define Rte_Pim_dDutyCycThermProtnLstTblVal() (&DutyCycThermProtn_Pim_dDutyCycThermProtnLstTblVal)

#ifdef Rte_Pim_dDutyCycThermProtnLstTblValSlew
# undef Rte_Pim_dDutyCycThermProtnLstTblValSlew
#else
#error Rte_Pim_dDutyCycThermProtnLstTblValSlew is missing
#endif
#define Rte_Pim_dDutyCycThermProtnLstTblValSlew() (&DutyCycThermProtn_Pim_dDutyCycThermProtnLstTblValSlew)

#ifdef Rte_Pim_dDutyCycThermProtnMplr1
# undef Rte_Pim_dDutyCycThermProtnMplr1
#else
#error Rte_Pim_dDutyCycThermProtnMplr1 is missing
#endif
#define Rte_Pim_dDutyCycThermProtnMplr1() (&DutyCycThermProtn_Pim_dDutyCycThermProtnMplr1)

#ifdef Rte_Pim_dDutyCycThermProtnMplr12T
# undef Rte_Pim_dDutyCycThermProtnMplr12T
#else
#error Rte_Pim_dDutyCycThermProtnMplr12T is missing
#endif
#define Rte_Pim_dDutyCycThermProtnMplr12T() (&DutyCycThermProtn_Pim_dDutyCycThermProtnMplr12T)

#ifdef Rte_Pim_dDutyCycThermProtnMplr2
# undef Rte_Pim_dDutyCycThermProtnMplr2
#else
#error Rte_Pim_dDutyCycThermProtnMplr2 is missing
#endif
#define Rte_Pim_dDutyCycThermProtnMplr2() (&DutyCycThermProtn_Pim_dDutyCycThermProtnMplr2)

#ifdef Rte_Pim_dDutyCycThermProtnMplr3
# undef Rte_Pim_dDutyCycThermProtnMplr3
#else
#error Rte_Pim_dDutyCycThermProtnMplr3 is missing
#endif
#define Rte_Pim_dDutyCycThermProtnMplr3() (&DutyCycThermProtn_Pim_dDutyCycThermProtnMplr3)

#ifdef Rte_Pim_dDutyCycThermProtnMplr36T
# undef Rte_Pim_dDutyCycThermProtnMplr36T
#else
#error Rte_Pim_dDutyCycThermProtnMplr36T is missing
#endif
#define Rte_Pim_dDutyCycThermProtnMplr36T() (&DutyCycThermProtn_Pim_dDutyCycThermProtnMplr36T)

#ifdef Rte_Pim_dDutyCycThermProtnMplr4
# undef Rte_Pim_dDutyCycThermProtnMplr4
#else
#error Rte_Pim_dDutyCycThermProtnMplr4 is missing
#endif
#define Rte_Pim_dDutyCycThermProtnMplr4() (&DutyCycThermProtn_Pim_dDutyCycThermProtnMplr4)

#ifdef Rte_Pim_dDutyCycThermProtnMplr5
# undef Rte_Pim_dDutyCycThermProtnMplr5
#else
#error Rte_Pim_dDutyCycThermProtnMplr5 is missing
#endif
#define Rte_Pim_dDutyCycThermProtnMplr5() (&DutyCycThermProtn_Pim_dDutyCycThermProtnMplr5)

#ifdef Rte_Pim_dDutyCycThermProtnMplr6
# undef Rte_Pim_dDutyCycThermProtnMplr6
#else
#error Rte_Pim_dDutyCycThermProtnMplr6 is missing
#endif
#define Rte_Pim_dDutyCycThermProtnMplr6() (&DutyCycThermProtn_Pim_dDutyCycThermProtnMplr6)

#ifdef Rte_Pim_dDutyCycThermProtnThermLoadLim
# undef Rte_Pim_dDutyCycThermProtnThermLoadLim
#else
#error Rte_Pim_dDutyCycThermProtnThermLoadLim is missing
#endif
#define Rte_Pim_dDutyCycThermProtnThermLoadLim() (&DutyCycThermProtn_Pim_dDutyCycThermProtnThermLoadLim)

#ifdef Rte_Pim_dDutyCycThermProtnThermLoadLimTblYVal
# undef Rte_Pim_dDutyCycThermProtnThermLoadLimTblYVal
#else
#error Rte_Pim_dDutyCycThermProtnThermLoadLimTblYVal is missing
#endif
#define Rte_Pim_dDutyCycThermProtnThermLoadLimTblYVal() (&DutyCycThermProtn_Pim_dDutyCycThermProtnThermLoadLimTblYVal)

#ifdef Rte_Pim_AbsltTLimSlewStVari
# undef Rte_Pim_AbsltTLimSlewStVari
#else
#error Rte_Pim_AbsltTLimSlewStVari is missing
#endif
#define Rte_Pim_AbsltTLimSlewStVari() (&DutyCycThermProtn_Pim_AbsltTLimSlewStVari)

#ifdef Rte_Pim_FetLoaMtgtnEnaPrev
# undef Rte_Pim_FetLoaMtgtnEnaPrev
#else
#error Rte_Pim_FetLoaMtgtnEnaPrev is missing
#endif
#define Rte_Pim_FetLoaMtgtnEnaPrev() (&DutyCycThermProtn_Pim_FetLoaMtgtnEnaPrev)

#ifdef Rte_Pim_FetMtgtnEnaCalIdx
# undef Rte_Pim_FetMtgtnEnaCalIdx
#else
#error Rte_Pim_FetMtgtnEnaCalIdx is missing
#endif
#define Rte_Pim_FetMtgtnEnaCalIdx() (&DutyCycThermProtn_Pim_FetMtgtnEnaCalIdx)

#ifdef Rte_Pim_Fil1ValStVari
# undef Rte_Pim_Fil1ValStVari
#else
#error Rte_Pim_Fil1ValStVari is missing
#endif
#define Rte_Pim_Fil1ValStVari() (&DutyCycThermProtn_Pim_Fil1ValStVari)

#ifdef Rte_Pim_Fil2ValStVari
# undef Rte_Pim_Fil2ValStVari
#else
#error Rte_Pim_Fil2ValStVari is missing
#endif
#define Rte_Pim_Fil2ValStVari() (&DutyCycThermProtn_Pim_Fil2ValStVari)

#ifdef Rte_Pim_Fil3ValPwrUp
# undef Rte_Pim_Fil3ValPwrUp
#else
#error Rte_Pim_Fil3ValPwrUp is missing
#endif
#define Rte_Pim_Fil3ValPwrUp() (&DutyCycThermProtn_Pim_Fil3ValPwrUp)

#ifdef Rte_Pim_Fil4ValPwrUp
# undef Rte_Pim_Fil4ValPwrUp
#else
#error Rte_Pim_Fil4ValPwrUp is missing
#endif
#define Rte_Pim_Fil4ValPwrUp() (&DutyCycThermProtn_Pim_Fil4ValPwrUp)

#ifdef Rte_Pim_Fil5ValPwrUp
# undef Rte_Pim_Fil5ValPwrUp
#else
#error Rte_Pim_Fil5ValPwrUp is missing
#endif
#define Rte_Pim_Fil5ValPwrUp() (&DutyCycThermProtn_Pim_Fil5ValPwrUp)

#ifdef Rte_Pim_Fil6ValPwrUp
# undef Rte_Pim_Fil6ValPwrUp
#else
#error Rte_Pim_Fil6ValPwrUp is missing
#endif
#define Rte_Pim_Fil6ValPwrUp() (&DutyCycThermProtn_Pim_Fil6ValPwrUp)

#ifdef Rte_Pim_Fild3Val
# undef Rte_Pim_Fild3Val
#else
#error Rte_Pim_Fild3Val is missing
#endif
#define Rte_Pim_Fild3Val() (&DutyCycThermProtn_Pim_Fild3Val)

#ifdef Rte_Pim_Fild4Val
# undef Rte_Pim_Fild4Val
#else
#error Rte_Pim_Fild4Val is missing
#endif
#define Rte_Pim_Fild4Val() (&DutyCycThermProtn_Pim_Fild4Val)

#ifdef Rte_Pim_Fild5Val
# undef Rte_Pim_Fild5Val
#else
#error Rte_Pim_Fild5Val is missing
#endif
#define Rte_Pim_Fild5Val() (&DutyCycThermProtn_Pim_Fild5Val)

#ifdef Rte_Pim_Fild6Val
# undef Rte_Pim_Fild6Val
#else
#error Rte_Pim_Fild6Val is missing
#endif
#define Rte_Pim_Fild6Val() (&DutyCycThermProtn_Pim_Fild6Val)

#ifdef Rte_Pim_LstTblValRateLimrStVari
# undef Rte_Pim_LstTblValRateLimrStVari
#else
#error Rte_Pim_LstTblValRateLimrStVari is missing
#endif
#define Rte_Pim_LstTblValRateLimrStVari() (&DutyCycThermProtn_Pim_LstTblValRateLimrStVari)

#ifdef Rte_Pim_ReInitCntrFlg
# undef Rte_Pim_ReInitCntrFlg
#else
#error Rte_Pim_ReInitCntrFlg is missing
#endif
#define Rte_Pim_ReInitCntrFlg() (&DutyCycThermProtn_Pim_ReInitCntrFlg)

#ifdef Rte_Pim_ReInitCntrVal
# undef Rte_Pim_ReInitCntrVal
#else
#error Rte_Pim_ReInitCntrVal is missing
#endif
#define Rte_Pim_ReInitCntrVal() (&DutyCycThermProtn_Pim_ReInitCntrVal)


/*** IRV Stubs ***/

#ifdef Rte_IrvRead_DutyCycThermProtnPer1_FilStVariReInitFlg
# undef Rte_IrvRead_DutyCycThermProtnPer1_FilStVariReInitFlg
#else
#error FilStVariReInitFlg is missing
#endif
#define Rte_IrvRead_DutyCycThermProtnPer1_FilStVariReInitFlg() (DutyCycThermProtn_Irv_FilStVariReInitFlg)

#ifdef Rte_IrvWrite_DutyCycThermProtnInit1_FilStVariReInitFlg
# undef Rte_IrvWrite_DutyCycThermProtnInit1_FilStVariReInitFlg
#else
#error FilStVariReInitFlg is missing
#endif
#define Rte_IrvWrite_DutyCycThermProtnInit1_FilStVariReInitFlg(data) (DutyCycThermProtn_Irv_FilStVariReInitFlg = (data))


/*** Client Stub ***/

extern FUNC(void, AUTOMATIC) Rte_Stub(void);


#endif
