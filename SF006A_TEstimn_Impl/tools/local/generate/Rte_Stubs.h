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
extern VAR(float32, AUTOMATIC) TEstimn_Ip_AmbT;
extern VAR(boolean, AUTOMATIC) TEstimn_Ip_AmbTVld;
extern VAR(boolean, AUTOMATIC) TEstimn_Ip_AssiMechTEstimnDi;
extern VAR(boolean, AUTOMATIC) TEstimn_Ip_DualEcuFltMtgtnEna;
extern VAR(float32, AUTOMATIC) TEstimn_Ip_EcuTFild;
extern VAR(float32, AUTOMATIC) TEstimn_Ip_EngOilT;
extern VAR(boolean, AUTOMATIC) TEstimn_Ip_EngOilTVld;
extern VAR(float32, AUTOMATIC) TEstimn_Ip_HwVel;
extern VAR(uint32, AUTOMATIC) TEstimn_Ip_IgnTiOff;
extern VAR(uint8, AUTOMATIC) TEstimn_Ip_MotAndThermProtnLoaMod;
extern VAR(float32, AUTOMATIC) TEstimn_Ip_MotCurrPeakEstimd;
extern VAR(boolean, AUTOMATIC) TEstimn_Ip_VehTiVld;

/* Outputs */
extern VAR(float32, AUTOMATIC) TEstimn_Op_AssiMechT;
extern VAR(float32, AUTOMATIC) TEstimn_Op_MotFetT;
extern VAR(float32, AUTOMATIC) TEstimn_Op_MotMagT;
extern VAR(float32, AUTOMATIC) TEstimn_Op_MotWidgT;

/* Calibrations */
extern CONST(float32, AUTOMATIC) TEstimn_Cal_TEstimnAmbPwrMplr[3];
extern CONST(float32, AUTOMATIC) TEstimn_Cal_TEstimnAmbTSca[3];
extern CONST(float32, AUTOMATIC) TEstimn_Cal_TEstimnAssiMechAmbLpFilFrq;
extern CONST(float32, AUTOMATIC) TEstimn_Cal_TEstimnAssiMechAmbLpFilFrqDualEcuFltMtgtn;
extern CONST(float32, AUTOMATIC) TEstimn_Cal_TEstimnAssiMechAmbLpFilFrqFetMtgtnEna;
extern CONST(float32, AUTOMATIC) TEstimn_Cal_TEstimnAssiMechAmbMplr[3];
extern CONST(float32, AUTOMATIC) TEstimn_Cal_TEstimnAssiMechCorrLim[3];
extern CONST(float32, AUTOMATIC) TEstimn_Cal_TEstimnAssiMechDampgSca[3];
extern CONST(float32, AUTOMATIC) TEstimn_Cal_TEstimnAssiMechDftT[3];
extern CONST(float32, AUTOMATIC) TEstimn_Cal_TEstimnAssiMechLLFilCoeffA1[3];
extern CONST(float32, AUTOMATIC) TEstimn_Cal_TEstimnAssiMechLLFilCoeffB0[3];
extern CONST(float32, AUTOMATIC) TEstimn_Cal_TEstimnAssiMechLLFilCoeffB1[3];
extern CONST(float32, AUTOMATIC) TEstimn_Cal_TEstimnAssiMechSlew[3];
extern CONST(float32, AUTOMATIC) TEstimn_Cal_TEstimnCorrnTAssiMech[3];
extern CONST(float32, AUTOMATIC) TEstimn_Cal_TEstimnCorrnTCu[3];
extern CONST(float32, AUTOMATIC) TEstimn_Cal_TEstimnCorrnTMag[3];
extern CONST(float32, AUTOMATIC) TEstimn_Cal_TEstimnCorrnTSi[3];
extern CONST(float32, AUTOMATIC) TEstimn_Cal_TEstimnCuAmbLpFilFrq;
extern CONST(float32, AUTOMATIC) TEstimn_Cal_TEstimnCuAmbLpFilFrqDualEcuFltMtgtn;
extern CONST(float32, AUTOMATIC) TEstimn_Cal_TEstimnCuAmbLpFilFrqFetMtgtnEna;
extern CONST(float32, AUTOMATIC) TEstimn_Cal_TEstimnCuAmbMplr[3];
extern CONST(float32, AUTOMATIC) TEstimn_Cal_TEstimnCuCorrnLim[3];
extern CONST(float32, AUTOMATIC) TEstimn_Cal_TEstimnCuLLFilCoeffA1[3];
extern CONST(float32, AUTOMATIC) TEstimn_Cal_TEstimnCuLLFilCoeffB0[3];
extern CONST(float32, AUTOMATIC) TEstimn_Cal_TEstimnCuLLFilCoeffB1[3];
extern CONST(float32, AUTOMATIC) TEstimn_Cal_TEstimnEngTSca[3];
extern CONST(boolean, AUTOMATIC) TEstimn_Cal_TEstimnIgnOffCtrlEna;
extern CONST(float32, AUTOMATIC) TEstimn_Cal_TEstimnIgnOffMsgWaitTi;
extern CONST(float32, AUTOMATIC) TEstimn_Cal_TEstimnMagAmbLpFilFrq;
extern CONST(float32, AUTOMATIC) TEstimn_Cal_TEstimnMagAmbLpFilFrqDualEcuFltMtgtn;
extern CONST(float32, AUTOMATIC) TEstimn_Cal_TEstimnMagAmbLpFilFrqFetMtgtnEna;
extern CONST(float32, AUTOMATIC) TEstimn_Cal_TEstimnMagAmbMplr[3];
extern CONST(float32, AUTOMATIC) TEstimn_Cal_TEstimnMagCorrnLim[3];
extern CONST(float32, AUTOMATIC) TEstimn_Cal_TEstimnMagLLFilCoeffA1[3];
extern CONST(float32, AUTOMATIC) TEstimn_Cal_TEstimnMagLLFilCoeffB0[3];
extern CONST(float32, AUTOMATIC) TEstimn_Cal_TEstimnMagLLFilCoeffB1[3];
extern CONST(float32, AUTOMATIC) TEstimn_Cal_TEstimnSiAmbLpFilFrq;
extern CONST(float32, AUTOMATIC) TEstimn_Cal_TEstimnSiAmbLpFilFrqDualEcuFltMtgtn;
extern CONST(float32, AUTOMATIC) TEstimn_Cal_TEstimnSiAmbLpFilFrqFetMtgtnEna;
extern CONST(float32, AUTOMATIC) TEstimn_Cal_TEstimnSiAmbMplr[3];
extern CONST(float32, AUTOMATIC) TEstimn_Cal_TEstimnSiCorrnLim[3];
extern CONST(float32, AUTOMATIC) TEstimn_Cal_TEstimnSiLLFilCoeffA1[3];
extern CONST(float32, AUTOMATIC) TEstimn_Cal_TEstimnSiLLFilCoeffB0[3];
extern CONST(float32, AUTOMATIC) TEstimn_Cal_TEstimnSiLLFilCoeffB1[3];
extern CONST(float32, AUTOMATIC) TEstimn_Cal_TEstimnTauAssiMech[3];
extern CONST(float32, AUTOMATIC) TEstimn_Cal_TEstimnTauCu[3];
extern CONST(float32, AUTOMATIC) TEstimn_Cal_TEstimnTauMag[3];
extern CONST(float32, AUTOMATIC) TEstimn_Cal_TEstimnTauSi[3];
extern CONST(boolean, AUTOMATIC) TEstimn_Cal_TEstimnWghtAvrgTDi[3];

/* PIMs */
extern VAR(TFilStValRec1, AUTOMATIC) TEstimn_Pim_TFilStVal;
extern VAR(float32, AUTOMATIC) TEstimn_Pim_dTEstimnAmbPwr;
extern VAR(float32, AUTOMATIC) TEstimn_Pim_dTEstimnAssiMechCorrn;
extern VAR(float32, AUTOMATIC) TEstimn_Pim_dTEstimnAssiMechDampgSca;
extern VAR(float32, AUTOMATIC) TEstimn_Pim_dTEstimnAssiMechFil;
extern VAR(float32, AUTOMATIC) TEstimn_Pim_dTEstimnCuCorrn;
extern VAR(float32, AUTOMATIC) TEstimn_Pim_dTEstimnMagCorrn;
extern VAR(float32, AUTOMATIC) TEstimn_Pim_dTEstimnScadAmbT;
extern VAR(float32, AUTOMATIC) TEstimn_Pim_dTEstimnScadEngT;
extern VAR(float32, AUTOMATIC) TEstimn_Pim_dTEstimnSiCorrn;
extern VAR(float32, AUTOMATIC) TEstimn_Pim_dTEstimnWghtAvrgT;
extern VAR(boolean, AUTOMATIC) TEstimn_Pim_AmbTVldPrev;
extern VAR(FilLpRec1, AUTOMATIC) TEstimn_Pim_AssiMechFilLp;
extern VAR(float32, AUTOMATIC) TEstimn_Pim_AssiMechTEstimnPrev;
extern VAR(boolean, AUTOMATIC) TEstimn_Pim_AssiMechTInitEna;
extern VAR(float32, AUTOMATIC) TEstimn_Pim_AssiMechTSlewLimPrev;
extern VAR(FilLpRec1, AUTOMATIC) TEstimn_Pim_CuFilLp;
extern VAR(float32, AUTOMATIC) TEstimn_Pim_CuTEstimnPrev;
extern VAR(boolean, AUTOMATIC) TEstimn_Pim_DualEcuFltMtgtnPrev;
extern VAR(boolean, AUTOMATIC) TEstimn_Pim_EngOilTVldPrev;
extern VAR(boolean, AUTOMATIC) TEstimn_Pim_FetMtgtnEnaPrev;
extern VAR(float32, AUTOMATIC) TEstimn_Pim_FilAssiMechLLValPwrUp;
extern VAR(float32, AUTOMATIC) TEstimn_Pim_FilAssiMechLpValPwrUp;
extern VAR(float32, AUTOMATIC) TEstimn_Pim_FilCuLLValPwrUp;
extern VAR(float32, AUTOMATIC) TEstimn_Pim_FilCuLpValPwrUp;
extern VAR(float32, AUTOMATIC) TEstimn_Pim_FilMagLLValPwrUp;
extern VAR(float32, AUTOMATIC) TEstimn_Pim_FilMagLpValPwrUp;
extern VAR(float32, AUTOMATIC) TEstimn_Pim_FilSiLLValPwrUp;
extern VAR(float32, AUTOMATIC) TEstimn_Pim_FilSiLpValPwrUp;
extern VAR(FilLpRec1, AUTOMATIC) TEstimn_Pim_MagFilLp;
extern VAR(float32, AUTOMATIC) TEstimn_Pim_MagTEstimnPrev;
extern VAR(boolean, AUTOMATIC) TEstimn_Pim_RepInitCntrFlg;
extern VAR(float32, AUTOMATIC) TEstimn_Pim_RepInitCntrVal;
extern VAR(FilLpRec1, AUTOMATIC) TEstimn_Pim_SiFilLp;
extern VAR(float32, AUTOMATIC) TEstimn_Pim_SiTEstimnPrev;
extern VAR(uint8, AUTOMATIC) TEstimn_Pim_TEstimnFltMtgtnCalIdx;

/* IRVs */
extern VAR(boolean, AUTOMATIC) TEstimn_Irv_FilStVariRepInitFlg;

/* Arguments and Returns */
extern VAR(uint8, AUTOMATIC) TEstimn_Srv_TFilStVal_GetErrorStatus_RequestResultPtr;
extern VAR(Std_ReturnType, AUTOMATIC) TEstimn_Srv_TFilStVal_GetErrorStatus_Return;
extern VAR(boolean, AUTOMATIC) TEstimn_Srv_TFilStVal_SetRamBlockStatus_BlockChanged;
extern VAR(Std_ReturnType, AUTOMATIC) TEstimn_Srv_TFilStVal_SetRamBlockStatus_Return;


/*** Input Stubs ***/

#ifdef Rte_Read_AmbT_Val
# undef Rte_Read_AmbT_Val
#else
#error Rte_Read_AmbT_Val is missing
#endif
#define Rte_Read_AmbT_Val(data) (*(data) = TEstimn_Ip_AmbT)

#ifdef Rte_Read_AmbTVld_Logl
# undef Rte_Read_AmbTVld_Logl
#else
#error Rte_Read_AmbTVld_Logl is missing
#endif
#define Rte_Read_AmbTVld_Logl(data) (*(data) = TEstimn_Ip_AmbTVld)

#ifdef Rte_Read_AssiMechTEstimnDi_Logl
# undef Rte_Read_AssiMechTEstimnDi_Logl
#else
#error Rte_Read_AssiMechTEstimnDi_Logl is missing
#endif
#define Rte_Read_AssiMechTEstimnDi_Logl(data) (*(data) = TEstimn_Ip_AssiMechTEstimnDi)

#ifdef Rte_Read_DualEcuFltMtgtnEna_Logl
# undef Rte_Read_DualEcuFltMtgtnEna_Logl
#else
#error Rte_Read_DualEcuFltMtgtnEna_Logl is missing
#endif
#define Rte_Read_DualEcuFltMtgtnEna_Logl(data) (*(data) = TEstimn_Ip_DualEcuFltMtgtnEna)

#ifdef Rte_Read_EcuTFild_Val
# undef Rte_Read_EcuTFild_Val
#else
#error Rte_Read_EcuTFild_Val is missing
#endif
#define Rte_Read_EcuTFild_Val(data) (*(data) = TEstimn_Ip_EcuTFild)

#ifdef Rte_Read_EngOilT_Val
# undef Rte_Read_EngOilT_Val
#else
#error Rte_Read_EngOilT_Val is missing
#endif
#define Rte_Read_EngOilT_Val(data) (*(data) = TEstimn_Ip_EngOilT)

#ifdef Rte_Read_EngOilTVld_Logl
# undef Rte_Read_EngOilTVld_Logl
#else
#error Rte_Read_EngOilTVld_Logl is missing
#endif
#define Rte_Read_EngOilTVld_Logl(data) (*(data) = TEstimn_Ip_EngOilTVld)

#ifdef Rte_Read_HwVel_Val
# undef Rte_Read_HwVel_Val
#else
#error Rte_Read_HwVel_Val is missing
#endif
#define Rte_Read_HwVel_Val(data) (*(data) = TEstimn_Ip_HwVel)

#ifdef Rte_Read_IgnTiOff_Val
# undef Rte_Read_IgnTiOff_Val
#else
#error Rte_Read_IgnTiOff_Val is missing
#endif
#define Rte_Read_IgnTiOff_Val(data) (*(data) = TEstimn_Ip_IgnTiOff)

#ifdef Rte_Read_MotAndThermProtnLoaMod_Val
# undef Rte_Read_MotAndThermProtnLoaMod_Val
#else
#error Rte_Read_MotAndThermProtnLoaMod_Val is missing
#endif
#define Rte_Read_MotAndThermProtnLoaMod_Val(data) (*(data) = TEstimn_Ip_MotAndThermProtnLoaMod)

#ifdef Rte_Read_MotCurrPeakEstimd_Val
# undef Rte_Read_MotCurrPeakEstimd_Val
#else
#error Rte_Read_MotCurrPeakEstimd_Val is missing
#endif
#define Rte_Read_MotCurrPeakEstimd_Val(data) (*(data) = TEstimn_Ip_MotCurrPeakEstimd)

#ifdef Rte_Read_VehTiVld_Logl
# undef Rte_Read_VehTiVld_Logl
#else
#error Rte_Read_VehTiVld_Logl is missing
#endif
#define Rte_Read_VehTiVld_Logl(data) (*(data) = TEstimn_Ip_VehTiVld)


/*** Output Stubs ***/

#ifdef Rte_Write_AssiMechT_Val
# undef Rte_Write_AssiMechT_Val
#else
#error Rte_Write_AssiMechT_Val is missing
#endif
#define Rte_Write_AssiMechT_Val(data) (TEstimn_Op_AssiMechT = (data))

#ifdef Rte_Write_MotFetT_Val
# undef Rte_Write_MotFetT_Val
#else
#error Rte_Write_MotFetT_Val is missing
#endif
#define Rte_Write_MotFetT_Val(data) (TEstimn_Op_MotFetT = (data))

#ifdef Rte_Write_MotMagT_Val
# undef Rte_Write_MotMagT_Val
#else
#error Rte_Write_MotMagT_Val is missing
#endif
#define Rte_Write_MotMagT_Val(data) (TEstimn_Op_MotMagT = (data))

#ifdef Rte_Write_MotWidgT_Val
# undef Rte_Write_MotWidgT_Val
#else
#error Rte_Write_MotWidgT_Val is missing
#endif
#define Rte_Write_MotWidgT_Val(data) (TEstimn_Op_MotWidgT = (data))


/*** Calibration Stubs ***/

#ifdef Rte_Prm_TEstimnAmbPwrMplr_Ary1D
# undef Rte_Prm_TEstimnAmbPwrMplr_Ary1D
#else
#error Rte_Prm_TEstimnAmbPwrMplr_Ary1D is missing
#endif
#define Rte_Prm_TEstimnAmbPwrMplr_Ary1D() (&(TEstimn_Cal_TEstimnAmbPwrMplr[0]))

#ifdef Rte_Prm_TEstimnAmbTSca_Ary1D
# undef Rte_Prm_TEstimnAmbTSca_Ary1D
#else
#error Rte_Prm_TEstimnAmbTSca_Ary1D is missing
#endif
#define Rte_Prm_TEstimnAmbTSca_Ary1D() (&(TEstimn_Cal_TEstimnAmbTSca[0]))

#ifdef Rte_Prm_TEstimnAssiMechAmbLpFilFrq_Val
# undef Rte_Prm_TEstimnAssiMechAmbLpFilFrq_Val
#else
#error Rte_Prm_TEstimnAssiMechAmbLpFilFrq_Val is missing
#endif
#define Rte_Prm_TEstimnAssiMechAmbLpFilFrq_Val() (TEstimn_Cal_TEstimnAssiMechAmbLpFilFrq)

#ifdef Rte_Prm_TEstimnAssiMechAmbLpFilFrqDualEcuFltMtgtn_Val
# undef Rte_Prm_TEstimnAssiMechAmbLpFilFrqDualEcuFltMtgtn_Val
#else
#error Rte_Prm_TEstimnAssiMechAmbLpFilFrqDualEcuFltMtgtn_Val is missing
#endif
#define Rte_Prm_TEstimnAssiMechAmbLpFilFrqDualEcuFltMtgtn_Val() (TEstimn_Cal_TEstimnAssiMechAmbLpFilFrqDualEcuFltMtgtn)

#ifdef Rte_Prm_TEstimnAssiMechAmbLpFilFrqFetMtgtnEna_Val
# undef Rte_Prm_TEstimnAssiMechAmbLpFilFrqFetMtgtnEna_Val
#else
#error Rte_Prm_TEstimnAssiMechAmbLpFilFrqFetMtgtnEna_Val is missing
#endif
#define Rte_Prm_TEstimnAssiMechAmbLpFilFrqFetMtgtnEna_Val() (TEstimn_Cal_TEstimnAssiMechAmbLpFilFrqFetMtgtnEna)

#ifdef Rte_Prm_TEstimnAssiMechAmbMplr_Ary1D
# undef Rte_Prm_TEstimnAssiMechAmbMplr_Ary1D
#else
#error Rte_Prm_TEstimnAssiMechAmbMplr_Ary1D is missing
#endif
#define Rte_Prm_TEstimnAssiMechAmbMplr_Ary1D() (&(TEstimn_Cal_TEstimnAssiMechAmbMplr[0]))

#ifdef Rte_Prm_TEstimnAssiMechCorrLim_Ary1D
# undef Rte_Prm_TEstimnAssiMechCorrLim_Ary1D
#else
#error Rte_Prm_TEstimnAssiMechCorrLim_Ary1D is missing
#endif
#define Rte_Prm_TEstimnAssiMechCorrLim_Ary1D() (&(TEstimn_Cal_TEstimnAssiMechCorrLim[0]))

#ifdef Rte_Prm_TEstimnAssiMechDampgSca_Ary1D
# undef Rte_Prm_TEstimnAssiMechDampgSca_Ary1D
#else
#error Rte_Prm_TEstimnAssiMechDampgSca_Ary1D is missing
#endif
#define Rte_Prm_TEstimnAssiMechDampgSca_Ary1D() (&(TEstimn_Cal_TEstimnAssiMechDampgSca[0]))

#ifdef Rte_Prm_TEstimnAssiMechDftT_Ary1D
# undef Rte_Prm_TEstimnAssiMechDftT_Ary1D
#else
#error Rte_Prm_TEstimnAssiMechDftT_Ary1D is missing
#endif
#define Rte_Prm_TEstimnAssiMechDftT_Ary1D() (&(TEstimn_Cal_TEstimnAssiMechDftT[0]))

#ifdef Rte_Prm_TEstimnAssiMechLLFilCoeffA1_Ary1D
# undef Rte_Prm_TEstimnAssiMechLLFilCoeffA1_Ary1D
#else
#error Rte_Prm_TEstimnAssiMechLLFilCoeffA1_Ary1D is missing
#endif
#define Rte_Prm_TEstimnAssiMechLLFilCoeffA1_Ary1D() (&(TEstimn_Cal_TEstimnAssiMechLLFilCoeffA1[0]))

#ifdef Rte_Prm_TEstimnAssiMechLLFilCoeffB0_Ary1D
# undef Rte_Prm_TEstimnAssiMechLLFilCoeffB0_Ary1D
#else
#error Rte_Prm_TEstimnAssiMechLLFilCoeffB0_Ary1D is missing
#endif
#define Rte_Prm_TEstimnAssiMechLLFilCoeffB0_Ary1D() (&(TEstimn_Cal_TEstimnAssiMechLLFilCoeffB0[0]))

#ifdef Rte_Prm_TEstimnAssiMechLLFilCoeffB1_Ary1D
# undef Rte_Prm_TEstimnAssiMechLLFilCoeffB1_Ary1D
#else
#error Rte_Prm_TEstimnAssiMechLLFilCoeffB1_Ary1D is missing
#endif
#define Rte_Prm_TEstimnAssiMechLLFilCoeffB1_Ary1D() (&(TEstimn_Cal_TEstimnAssiMechLLFilCoeffB1[0]))

#ifdef Rte_Prm_TEstimnAssiMechSlew_Ary1D
# undef Rte_Prm_TEstimnAssiMechSlew_Ary1D
#else
#error Rte_Prm_TEstimnAssiMechSlew_Ary1D is missing
#endif
#define Rte_Prm_TEstimnAssiMechSlew_Ary1D() (&(TEstimn_Cal_TEstimnAssiMechSlew[0]))

#ifdef Rte_Prm_TEstimnCorrnTAssiMech_Ary1D
# undef Rte_Prm_TEstimnCorrnTAssiMech_Ary1D
#else
#error Rte_Prm_TEstimnCorrnTAssiMech_Ary1D is missing
#endif
#define Rte_Prm_TEstimnCorrnTAssiMech_Ary1D() (&(TEstimn_Cal_TEstimnCorrnTAssiMech[0]))

#ifdef Rte_Prm_TEstimnCorrnTCu_Ary1D
# undef Rte_Prm_TEstimnCorrnTCu_Ary1D
#else
#error Rte_Prm_TEstimnCorrnTCu_Ary1D is missing
#endif
#define Rte_Prm_TEstimnCorrnTCu_Ary1D() (&(TEstimn_Cal_TEstimnCorrnTCu[0]))

#ifdef Rte_Prm_TEstimnCorrnTMag_Ary1D
# undef Rte_Prm_TEstimnCorrnTMag_Ary1D
#else
#error Rte_Prm_TEstimnCorrnTMag_Ary1D is missing
#endif
#define Rte_Prm_TEstimnCorrnTMag_Ary1D() (&(TEstimn_Cal_TEstimnCorrnTMag[0]))

#ifdef Rte_Prm_TEstimnCorrnTSi_Ary1D
# undef Rte_Prm_TEstimnCorrnTSi_Ary1D
#else
#error Rte_Prm_TEstimnCorrnTSi_Ary1D is missing
#endif
#define Rte_Prm_TEstimnCorrnTSi_Ary1D() (&(TEstimn_Cal_TEstimnCorrnTSi[0]))

#ifdef Rte_Prm_TEstimnCuAmbLpFilFrq_Val
# undef Rte_Prm_TEstimnCuAmbLpFilFrq_Val
#else
#error Rte_Prm_TEstimnCuAmbLpFilFrq_Val is missing
#endif
#define Rte_Prm_TEstimnCuAmbLpFilFrq_Val() (TEstimn_Cal_TEstimnCuAmbLpFilFrq)

#ifdef Rte_Prm_TEstimnCuAmbLpFilFrqDualEcuFltMtgtn_Val
# undef Rte_Prm_TEstimnCuAmbLpFilFrqDualEcuFltMtgtn_Val
#else
#error Rte_Prm_TEstimnCuAmbLpFilFrqDualEcuFltMtgtn_Val is missing
#endif
#define Rte_Prm_TEstimnCuAmbLpFilFrqDualEcuFltMtgtn_Val() (TEstimn_Cal_TEstimnCuAmbLpFilFrqDualEcuFltMtgtn)

#ifdef Rte_Prm_TEstimnCuAmbLpFilFrqFetMtgtnEna_Val
# undef Rte_Prm_TEstimnCuAmbLpFilFrqFetMtgtnEna_Val
#else
#error Rte_Prm_TEstimnCuAmbLpFilFrqFetMtgtnEna_Val is missing
#endif
#define Rte_Prm_TEstimnCuAmbLpFilFrqFetMtgtnEna_Val() (TEstimn_Cal_TEstimnCuAmbLpFilFrqFetMtgtnEna)

#ifdef Rte_Prm_TEstimnCuAmbMplr_Ary1D
# undef Rte_Prm_TEstimnCuAmbMplr_Ary1D
#else
#error Rte_Prm_TEstimnCuAmbMplr_Ary1D is missing
#endif
#define Rte_Prm_TEstimnCuAmbMplr_Ary1D() (&(TEstimn_Cal_TEstimnCuAmbMplr[0]))

#ifdef Rte_Prm_TEstimnCuCorrnLim_Ary1D
# undef Rte_Prm_TEstimnCuCorrnLim_Ary1D
#else
#error Rte_Prm_TEstimnCuCorrnLim_Ary1D is missing
#endif
#define Rte_Prm_TEstimnCuCorrnLim_Ary1D() (&(TEstimn_Cal_TEstimnCuCorrnLim[0]))

#ifdef Rte_Prm_TEstimnCuLLFilCoeffA1_Ary1D
# undef Rte_Prm_TEstimnCuLLFilCoeffA1_Ary1D
#else
#error Rte_Prm_TEstimnCuLLFilCoeffA1_Ary1D is missing
#endif
#define Rte_Prm_TEstimnCuLLFilCoeffA1_Ary1D() (&(TEstimn_Cal_TEstimnCuLLFilCoeffA1[0]))

#ifdef Rte_Prm_TEstimnCuLLFilCoeffB0_Ary1D
# undef Rte_Prm_TEstimnCuLLFilCoeffB0_Ary1D
#else
#error Rte_Prm_TEstimnCuLLFilCoeffB0_Ary1D is missing
#endif
#define Rte_Prm_TEstimnCuLLFilCoeffB0_Ary1D() (&(TEstimn_Cal_TEstimnCuLLFilCoeffB0[0]))

#ifdef Rte_Prm_TEstimnCuLLFilCoeffB1_Ary1D
# undef Rte_Prm_TEstimnCuLLFilCoeffB1_Ary1D
#else
#error Rte_Prm_TEstimnCuLLFilCoeffB1_Ary1D is missing
#endif
#define Rte_Prm_TEstimnCuLLFilCoeffB1_Ary1D() (&(TEstimn_Cal_TEstimnCuLLFilCoeffB1[0]))

#ifdef Rte_Prm_TEstimnEngTSca_Ary1D
# undef Rte_Prm_TEstimnEngTSca_Ary1D
#else
#error Rte_Prm_TEstimnEngTSca_Ary1D is missing
#endif
#define Rte_Prm_TEstimnEngTSca_Ary1D() (&(TEstimn_Cal_TEstimnEngTSca[0]))

#ifdef Rte_Prm_TEstimnIgnOffCtrlEna_Logl
# undef Rte_Prm_TEstimnIgnOffCtrlEna_Logl
#else
#error Rte_Prm_TEstimnIgnOffCtrlEna_Logl is missing
#endif
#define Rte_Prm_TEstimnIgnOffCtrlEna_Logl() (TEstimn_Cal_TEstimnIgnOffCtrlEna)

#ifdef Rte_Prm_TEstimnIgnOffMsgWaitTi_Val
# undef Rte_Prm_TEstimnIgnOffMsgWaitTi_Val
#else
#error Rte_Prm_TEstimnIgnOffMsgWaitTi_Val is missing
#endif
#define Rte_Prm_TEstimnIgnOffMsgWaitTi_Val() (TEstimn_Cal_TEstimnIgnOffMsgWaitTi)

#ifdef Rte_Prm_TEstimnMagAmbLpFilFrq_Val
# undef Rte_Prm_TEstimnMagAmbLpFilFrq_Val
#else
#error Rte_Prm_TEstimnMagAmbLpFilFrq_Val is missing
#endif
#define Rte_Prm_TEstimnMagAmbLpFilFrq_Val() (TEstimn_Cal_TEstimnMagAmbLpFilFrq)

#ifdef Rte_Prm_TEstimnMagAmbLpFilFrqDualEcuFltMtgtn_Val
# undef Rte_Prm_TEstimnMagAmbLpFilFrqDualEcuFltMtgtn_Val
#else
#error Rte_Prm_TEstimnMagAmbLpFilFrqDualEcuFltMtgtn_Val is missing
#endif
#define Rte_Prm_TEstimnMagAmbLpFilFrqDualEcuFltMtgtn_Val() (TEstimn_Cal_TEstimnMagAmbLpFilFrqDualEcuFltMtgtn)

#ifdef Rte_Prm_TEstimnMagAmbLpFilFrqFetMtgtnEna_Val
# undef Rte_Prm_TEstimnMagAmbLpFilFrqFetMtgtnEna_Val
#else
#error Rte_Prm_TEstimnMagAmbLpFilFrqFetMtgtnEna_Val is missing
#endif
#define Rte_Prm_TEstimnMagAmbLpFilFrqFetMtgtnEna_Val() (TEstimn_Cal_TEstimnMagAmbLpFilFrqFetMtgtnEna)

#ifdef Rte_Prm_TEstimnMagAmbMplr_Ary1D
# undef Rte_Prm_TEstimnMagAmbMplr_Ary1D
#else
#error Rte_Prm_TEstimnMagAmbMplr_Ary1D is missing
#endif
#define Rte_Prm_TEstimnMagAmbMplr_Ary1D() (&(TEstimn_Cal_TEstimnMagAmbMplr[0]))

#ifdef Rte_Prm_TEstimnMagCorrnLim_Ary1D
# undef Rte_Prm_TEstimnMagCorrnLim_Ary1D
#else
#error Rte_Prm_TEstimnMagCorrnLim_Ary1D is missing
#endif
#define Rte_Prm_TEstimnMagCorrnLim_Ary1D() (&(TEstimn_Cal_TEstimnMagCorrnLim[0]))

#ifdef Rte_Prm_TEstimnMagLLFilCoeffA1_Ary1D
# undef Rte_Prm_TEstimnMagLLFilCoeffA1_Ary1D
#else
#error Rte_Prm_TEstimnMagLLFilCoeffA1_Ary1D is missing
#endif
#define Rte_Prm_TEstimnMagLLFilCoeffA1_Ary1D() (&(TEstimn_Cal_TEstimnMagLLFilCoeffA1[0]))

#ifdef Rte_Prm_TEstimnMagLLFilCoeffB0_Ary1D
# undef Rte_Prm_TEstimnMagLLFilCoeffB0_Ary1D
#else
#error Rte_Prm_TEstimnMagLLFilCoeffB0_Ary1D is missing
#endif
#define Rte_Prm_TEstimnMagLLFilCoeffB0_Ary1D() (&(TEstimn_Cal_TEstimnMagLLFilCoeffB0[0]))

#ifdef Rte_Prm_TEstimnMagLLFilCoeffB1_Ary1D
# undef Rte_Prm_TEstimnMagLLFilCoeffB1_Ary1D
#else
#error Rte_Prm_TEstimnMagLLFilCoeffB1_Ary1D is missing
#endif
#define Rte_Prm_TEstimnMagLLFilCoeffB1_Ary1D() (&(TEstimn_Cal_TEstimnMagLLFilCoeffB1[0]))

#ifdef Rte_Prm_TEstimnSiAmbLpFilFrq_Val
# undef Rte_Prm_TEstimnSiAmbLpFilFrq_Val
#else
#error Rte_Prm_TEstimnSiAmbLpFilFrq_Val is missing
#endif
#define Rte_Prm_TEstimnSiAmbLpFilFrq_Val() (TEstimn_Cal_TEstimnSiAmbLpFilFrq)

#ifdef Rte_Prm_TEstimnSiAmbLpFilFrqDualEcuFltMtgtn_Val
# undef Rte_Prm_TEstimnSiAmbLpFilFrqDualEcuFltMtgtn_Val
#else
#error Rte_Prm_TEstimnSiAmbLpFilFrqDualEcuFltMtgtn_Val is missing
#endif
#define Rte_Prm_TEstimnSiAmbLpFilFrqDualEcuFltMtgtn_Val() (TEstimn_Cal_TEstimnSiAmbLpFilFrqDualEcuFltMtgtn)

#ifdef Rte_Prm_TEstimnSiAmbLpFilFrqFetMtgtnEna_Val
# undef Rte_Prm_TEstimnSiAmbLpFilFrqFetMtgtnEna_Val
#else
#error Rte_Prm_TEstimnSiAmbLpFilFrqFetMtgtnEna_Val is missing
#endif
#define Rte_Prm_TEstimnSiAmbLpFilFrqFetMtgtnEna_Val() (TEstimn_Cal_TEstimnSiAmbLpFilFrqFetMtgtnEna)

#ifdef Rte_Prm_TEstimnSiAmbMplr_Ary1D
# undef Rte_Prm_TEstimnSiAmbMplr_Ary1D
#else
#error Rte_Prm_TEstimnSiAmbMplr_Ary1D is missing
#endif
#define Rte_Prm_TEstimnSiAmbMplr_Ary1D() (&(TEstimn_Cal_TEstimnSiAmbMplr[0]))

#ifdef Rte_Prm_TEstimnSiCorrnLim_Ary1D
# undef Rte_Prm_TEstimnSiCorrnLim_Ary1D
#else
#error Rte_Prm_TEstimnSiCorrnLim_Ary1D is missing
#endif
#define Rte_Prm_TEstimnSiCorrnLim_Ary1D() (&(TEstimn_Cal_TEstimnSiCorrnLim[0]))

#ifdef Rte_Prm_TEstimnSiLLFilCoeffA1_Ary1D
# undef Rte_Prm_TEstimnSiLLFilCoeffA1_Ary1D
#else
#error Rte_Prm_TEstimnSiLLFilCoeffA1_Ary1D is missing
#endif
#define Rte_Prm_TEstimnSiLLFilCoeffA1_Ary1D() (&(TEstimn_Cal_TEstimnSiLLFilCoeffA1[0]))

#ifdef Rte_Prm_TEstimnSiLLFilCoeffB0_Ary1D
# undef Rte_Prm_TEstimnSiLLFilCoeffB0_Ary1D
#else
#error Rte_Prm_TEstimnSiLLFilCoeffB0_Ary1D is missing
#endif
#define Rte_Prm_TEstimnSiLLFilCoeffB0_Ary1D() (&(TEstimn_Cal_TEstimnSiLLFilCoeffB0[0]))

#ifdef Rte_Prm_TEstimnSiLLFilCoeffB1_Ary1D
# undef Rte_Prm_TEstimnSiLLFilCoeffB1_Ary1D
#else
#error Rte_Prm_TEstimnSiLLFilCoeffB1_Ary1D is missing
#endif
#define Rte_Prm_TEstimnSiLLFilCoeffB1_Ary1D() (&(TEstimn_Cal_TEstimnSiLLFilCoeffB1[0]))

#ifdef Rte_Prm_TEstimnTauAssiMech_Ary1D
# undef Rte_Prm_TEstimnTauAssiMech_Ary1D
#else
#error Rte_Prm_TEstimnTauAssiMech_Ary1D is missing
#endif
#define Rte_Prm_TEstimnTauAssiMech_Ary1D() (&(TEstimn_Cal_TEstimnTauAssiMech[0]))

#ifdef Rte_Prm_TEstimnTauCu_Ary1D
# undef Rte_Prm_TEstimnTauCu_Ary1D
#else
#error Rte_Prm_TEstimnTauCu_Ary1D is missing
#endif
#define Rte_Prm_TEstimnTauCu_Ary1D() (&(TEstimn_Cal_TEstimnTauCu[0]))

#ifdef Rte_Prm_TEstimnTauMag_Ary1D
# undef Rte_Prm_TEstimnTauMag_Ary1D
#else
#error Rte_Prm_TEstimnTauMag_Ary1D is missing
#endif
#define Rte_Prm_TEstimnTauMag_Ary1D() (&(TEstimn_Cal_TEstimnTauMag[0]))

#ifdef Rte_Prm_TEstimnTauSi_Ary1D
# undef Rte_Prm_TEstimnTauSi_Ary1D
#else
#error Rte_Prm_TEstimnTauSi_Ary1D is missing
#endif
#define Rte_Prm_TEstimnTauSi_Ary1D() (&(TEstimn_Cal_TEstimnTauSi[0]))

#ifdef Rte_Prm_TEstimnWghtAvrgTDi_Ary1D
# undef Rte_Prm_TEstimnWghtAvrgTDi_Ary1D
#else
#error Rte_Prm_TEstimnWghtAvrgTDi_Ary1D is missing
#endif
#define Rte_Prm_TEstimnWghtAvrgTDi_Ary1D() (&(TEstimn_Cal_TEstimnWghtAvrgTDi[0]))


/*** PIM Stubs ***/

#ifdef Rte_Pim_TFilStVal
# undef Rte_Pim_TFilStVal
#else
#error Rte_Pim_TFilStVal is missing
#endif
#define Rte_Pim_TFilStVal() (&TEstimn_Pim_TFilStVal)

#ifdef Rte_Pim_dTEstimnAmbPwr
# undef Rte_Pim_dTEstimnAmbPwr
#else
#error Rte_Pim_dTEstimnAmbPwr is missing
#endif
#define Rte_Pim_dTEstimnAmbPwr() (&TEstimn_Pim_dTEstimnAmbPwr)

#ifdef Rte_Pim_dTEstimnAssiMechCorrn
# undef Rte_Pim_dTEstimnAssiMechCorrn
#else
#error Rte_Pim_dTEstimnAssiMechCorrn is missing
#endif
#define Rte_Pim_dTEstimnAssiMechCorrn() (&TEstimn_Pim_dTEstimnAssiMechCorrn)

#ifdef Rte_Pim_dTEstimnAssiMechDampgSca
# undef Rte_Pim_dTEstimnAssiMechDampgSca
#else
#error Rte_Pim_dTEstimnAssiMechDampgSca is missing
#endif
#define Rte_Pim_dTEstimnAssiMechDampgSca() (&TEstimn_Pim_dTEstimnAssiMechDampgSca)

#ifdef Rte_Pim_dTEstimnAssiMechFil
# undef Rte_Pim_dTEstimnAssiMechFil
#else
#error Rte_Pim_dTEstimnAssiMechFil is missing
#endif
#define Rte_Pim_dTEstimnAssiMechFil() (&TEstimn_Pim_dTEstimnAssiMechFil)

#ifdef Rte_Pim_dTEstimnCuCorrn
# undef Rte_Pim_dTEstimnCuCorrn
#else
#error Rte_Pim_dTEstimnCuCorrn is missing
#endif
#define Rte_Pim_dTEstimnCuCorrn() (&TEstimn_Pim_dTEstimnCuCorrn)

#ifdef Rte_Pim_dTEstimnMagCorrn
# undef Rte_Pim_dTEstimnMagCorrn
#else
#error Rte_Pim_dTEstimnMagCorrn is missing
#endif
#define Rte_Pim_dTEstimnMagCorrn() (&TEstimn_Pim_dTEstimnMagCorrn)

#ifdef Rte_Pim_dTEstimnScadAmbT
# undef Rte_Pim_dTEstimnScadAmbT
#else
#error Rte_Pim_dTEstimnScadAmbT is missing
#endif
#define Rte_Pim_dTEstimnScadAmbT() (&TEstimn_Pim_dTEstimnScadAmbT)

#ifdef Rte_Pim_dTEstimnScadEngT
# undef Rte_Pim_dTEstimnScadEngT
#else
#error Rte_Pim_dTEstimnScadEngT is missing
#endif
#define Rte_Pim_dTEstimnScadEngT() (&TEstimn_Pim_dTEstimnScadEngT)

#ifdef Rte_Pim_dTEstimnSiCorrn
# undef Rte_Pim_dTEstimnSiCorrn
#else
#error Rte_Pim_dTEstimnSiCorrn is missing
#endif
#define Rte_Pim_dTEstimnSiCorrn() (&TEstimn_Pim_dTEstimnSiCorrn)

#ifdef Rte_Pim_dTEstimnWghtAvrgT
# undef Rte_Pim_dTEstimnWghtAvrgT
#else
#error Rte_Pim_dTEstimnWghtAvrgT is missing
#endif
#define Rte_Pim_dTEstimnWghtAvrgT() (&TEstimn_Pim_dTEstimnWghtAvrgT)

#ifdef Rte_Pim_AmbTVldPrev
# undef Rte_Pim_AmbTVldPrev
#else
#error Rte_Pim_AmbTVldPrev is missing
#endif
#define Rte_Pim_AmbTVldPrev() (&TEstimn_Pim_AmbTVldPrev)

#ifdef Rte_Pim_AssiMechFilLp
# undef Rte_Pim_AssiMechFilLp
#else
#error Rte_Pim_AssiMechFilLp is missing
#endif
#define Rte_Pim_AssiMechFilLp() (&TEstimn_Pim_AssiMechFilLp)

#ifdef Rte_Pim_AssiMechTEstimnPrev
# undef Rte_Pim_AssiMechTEstimnPrev
#else
#error Rte_Pim_AssiMechTEstimnPrev is missing
#endif
#define Rte_Pim_AssiMechTEstimnPrev() (&TEstimn_Pim_AssiMechTEstimnPrev)

#ifdef Rte_Pim_AssiMechTInitEna
# undef Rte_Pim_AssiMechTInitEna
#else
#error Rte_Pim_AssiMechTInitEna is missing
#endif
#define Rte_Pim_AssiMechTInitEna() (&TEstimn_Pim_AssiMechTInitEna)

#ifdef Rte_Pim_AssiMechTSlewLimPrev
# undef Rte_Pim_AssiMechTSlewLimPrev
#else
#error Rte_Pim_AssiMechTSlewLimPrev is missing
#endif
#define Rte_Pim_AssiMechTSlewLimPrev() (&TEstimn_Pim_AssiMechTSlewLimPrev)

#ifdef Rte_Pim_CuFilLp
# undef Rte_Pim_CuFilLp
#else
#error Rte_Pim_CuFilLp is missing
#endif
#define Rte_Pim_CuFilLp() (&TEstimn_Pim_CuFilLp)

#ifdef Rte_Pim_CuTEstimnPrev
# undef Rte_Pim_CuTEstimnPrev
#else
#error Rte_Pim_CuTEstimnPrev is missing
#endif
#define Rte_Pim_CuTEstimnPrev() (&TEstimn_Pim_CuTEstimnPrev)

#ifdef Rte_Pim_DualEcuFltMtgtnPrev
# undef Rte_Pim_DualEcuFltMtgtnPrev
#else
#error Rte_Pim_DualEcuFltMtgtnPrev is missing
#endif
#define Rte_Pim_DualEcuFltMtgtnPrev() (&TEstimn_Pim_DualEcuFltMtgtnPrev)

#ifdef Rte_Pim_EngOilTVldPrev
# undef Rte_Pim_EngOilTVldPrev
#else
#error Rte_Pim_EngOilTVldPrev is missing
#endif
#define Rte_Pim_EngOilTVldPrev() (&TEstimn_Pim_EngOilTVldPrev)

#ifdef Rte_Pim_FetMtgtnEnaPrev
# undef Rte_Pim_FetMtgtnEnaPrev
#else
#error Rte_Pim_FetMtgtnEnaPrev is missing
#endif
#define Rte_Pim_FetMtgtnEnaPrev() (&TEstimn_Pim_FetMtgtnEnaPrev)

#ifdef Rte_Pim_FilAssiMechLLValPwrUp
# undef Rte_Pim_FilAssiMechLLValPwrUp
#else
#error Rte_Pim_FilAssiMechLLValPwrUp is missing
#endif
#define Rte_Pim_FilAssiMechLLValPwrUp() (&TEstimn_Pim_FilAssiMechLLValPwrUp)

#ifdef Rte_Pim_FilAssiMechLpValPwrUp
# undef Rte_Pim_FilAssiMechLpValPwrUp
#else
#error Rte_Pim_FilAssiMechLpValPwrUp is missing
#endif
#define Rte_Pim_FilAssiMechLpValPwrUp() (&TEstimn_Pim_FilAssiMechLpValPwrUp)

#ifdef Rte_Pim_FilCuLLValPwrUp
# undef Rte_Pim_FilCuLLValPwrUp
#else
#error Rte_Pim_FilCuLLValPwrUp is missing
#endif
#define Rte_Pim_FilCuLLValPwrUp() (&TEstimn_Pim_FilCuLLValPwrUp)

#ifdef Rte_Pim_FilCuLpValPwrUp
# undef Rte_Pim_FilCuLpValPwrUp
#else
#error Rte_Pim_FilCuLpValPwrUp is missing
#endif
#define Rte_Pim_FilCuLpValPwrUp() (&TEstimn_Pim_FilCuLpValPwrUp)

#ifdef Rte_Pim_FilMagLLValPwrUp
# undef Rte_Pim_FilMagLLValPwrUp
#else
#error Rte_Pim_FilMagLLValPwrUp is missing
#endif
#define Rte_Pim_FilMagLLValPwrUp() (&TEstimn_Pim_FilMagLLValPwrUp)

#ifdef Rte_Pim_FilMagLpValPwrUp
# undef Rte_Pim_FilMagLpValPwrUp
#else
#error Rte_Pim_FilMagLpValPwrUp is missing
#endif
#define Rte_Pim_FilMagLpValPwrUp() (&TEstimn_Pim_FilMagLpValPwrUp)

#ifdef Rte_Pim_FilSiLLValPwrUp
# undef Rte_Pim_FilSiLLValPwrUp
#else
#error Rte_Pim_FilSiLLValPwrUp is missing
#endif
#define Rte_Pim_FilSiLLValPwrUp() (&TEstimn_Pim_FilSiLLValPwrUp)

#ifdef Rte_Pim_FilSiLpValPwrUp
# undef Rte_Pim_FilSiLpValPwrUp
#else
#error Rte_Pim_FilSiLpValPwrUp is missing
#endif
#define Rte_Pim_FilSiLpValPwrUp() (&TEstimn_Pim_FilSiLpValPwrUp)

#ifdef Rte_Pim_MagFilLp
# undef Rte_Pim_MagFilLp
#else
#error Rte_Pim_MagFilLp is missing
#endif
#define Rte_Pim_MagFilLp() (&TEstimn_Pim_MagFilLp)

#ifdef Rte_Pim_MagTEstimnPrev
# undef Rte_Pim_MagTEstimnPrev
#else
#error Rte_Pim_MagTEstimnPrev is missing
#endif
#define Rte_Pim_MagTEstimnPrev() (&TEstimn_Pim_MagTEstimnPrev)

#ifdef Rte_Pim_RepInitCntrFlg
# undef Rte_Pim_RepInitCntrFlg
#else
#error Rte_Pim_RepInitCntrFlg is missing
#endif
#define Rte_Pim_RepInitCntrFlg() (&TEstimn_Pim_RepInitCntrFlg)

#ifdef Rte_Pim_RepInitCntrVal
# undef Rte_Pim_RepInitCntrVal
#else
#error Rte_Pim_RepInitCntrVal is missing
#endif
#define Rte_Pim_RepInitCntrVal() (&TEstimn_Pim_RepInitCntrVal)

#ifdef Rte_Pim_SiFilLp
# undef Rte_Pim_SiFilLp
#else
#error Rte_Pim_SiFilLp is missing
#endif
#define Rte_Pim_SiFilLp() (&TEstimn_Pim_SiFilLp)

#ifdef Rte_Pim_SiTEstimnPrev
# undef Rte_Pim_SiTEstimnPrev
#else
#error Rte_Pim_SiTEstimnPrev is missing
#endif
#define Rte_Pim_SiTEstimnPrev() (&TEstimn_Pim_SiTEstimnPrev)

#ifdef Rte_Pim_TEstimnFltMtgtnCalIdx
# undef Rte_Pim_TEstimnFltMtgtnCalIdx
#else
#error Rte_Pim_TEstimnFltMtgtnCalIdx is missing
#endif
#define Rte_Pim_TEstimnFltMtgtnCalIdx() (&TEstimn_Pim_TEstimnFltMtgtnCalIdx)


/*** IRV Stubs ***/

#ifdef Rte_IrvRead_TEstimnPer1_FilStVariRepInitFlg
# undef Rte_IrvRead_TEstimnPer1_FilStVariRepInitFlg
#else
#error FilStVariRepInitFlg is missing
#endif
#define Rte_IrvRead_TEstimnPer1_FilStVariRepInitFlg() (TEstimn_Irv_FilStVariRepInitFlg)

#ifdef Rte_IrvWrite_TEstimnInit1_FilStVariRepInitFlg
# undef Rte_IrvWrite_TEstimnInit1_FilStVariRepInitFlg
#else
#error FilStVariRepInitFlg is missing
#endif
#define Rte_IrvWrite_TEstimnInit1_FilStVariRepInitFlg(data) (TEstimn_Irv_FilStVariRepInitFlg = (data))


/*** Client Stub ***/

extern FUNC(void, AUTOMATIC) Rte_Stub(void);


#endif
