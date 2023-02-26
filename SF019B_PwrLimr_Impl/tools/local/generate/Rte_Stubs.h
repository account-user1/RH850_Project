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
extern VAR(boolean, AUTOMATIC) PwrLimr_Ip_AltFltActv;
extern VAR(float32, AUTOMATIC) PwrLimr_Ip_BrdgVltg;
extern VAR(float32, AUTOMATIC) PwrLimr_Ip_DualEcuFltMtgtnSca;
extern VAR(uint8, AUTOMATIC) PwrLimr_Ip_MotAndThermProtnLoaMod;
extern VAR(float32, AUTOMATIC) PwrLimr_Ip_MotBackEmfConEstimd;
extern VAR(float32, AUTOMATIC) PwrLimr_Ip_MotTqCmdMrf;
extern VAR(float32, AUTOMATIC) PwrLimr_Ip_MotVelMrf;

/* Outputs */
extern VAR(float32, AUTOMATIC) PwrLimr_Op_MotTqCmdPwrLimd;
extern VAR(float32, AUTOMATIC) PwrLimr_Op_PwrLimrRednFac;

/* Calibrations */
extern CONST(float32, AUTOMATIC) PwrLimr_Cal_PwrLimrAssiRednLpFilFrq;
extern CONST(float32, AUTOMATIC) PwrLimr_Cal_PwrLimrBackEmfConStdT;
extern CONST(float32, AUTOMATIC) PwrLimr_Cal_PwrLimrBrdgVltgAdjSlew;
extern CONST(float32, AUTOMATIC) PwrLimr_Cal_PwrLimrBrdgVltgAltFltAdj;
extern CONST(float32, AUTOMATIC) PwrLimr_Cal_PwrLimrFilAssiRednThd;
extern CONST(float32, AUTOMATIC) PwrLimr_Cal_PwrLimrLoVoltAssiRcvrThd;
extern CONST(uint16, AUTOMATIC) PwrLimr_Cal_PwrLimrLoVoltAssiRcvrTi;
extern CONST(s11p4, AUTOMATIC) PwrLimr_Cal_PwrLimrMotEnvlpX[14];
extern CONST(u5p11, AUTOMATIC) PwrLimr_Cal_PwrLimrMotEnvlpY[14];
extern CONST(float32, AUTOMATIC) PwrLimr_Cal_PwrLimrMotVelLpFilFrq;
extern CONST(float32, AUTOMATIC) PwrLimr_Cal_PwrLimrSpdAdjSlewDec;
extern CONST(boolean, AUTOMATIC) PwrLimr_Cal_PwrLimrSpdAdjSlewEna;
extern CONST(float32, AUTOMATIC) PwrLimr_Cal_PwrLimrSpdAdjSlewInc;
extern CONST(u11p5, AUTOMATIC) PwrLimr_Cal_PwrLimrStdOperMotEnvlpX[6];
extern CONST(u4p12, AUTOMATIC) PwrLimr_Cal_PwrLimrStdOperMotEnvlpY[6];
extern CONST(u5p11, AUTOMATIC) PwrLimr_Cal_PwrLimrVltgDptMotVelOffsX[10];
extern CONST(u11p5, AUTOMATIC) PwrLimr_Cal_PwrLimrVltgDptMotVelOffsY[10];

/* PIMs */
extern VAR(float32, AUTOMATIC) PwrLimr_Pim_dPwrLimrFildMotVel;
extern VAR(float32, AUTOMATIC) PwrLimr_Pim_dPwrLimrLimDif;
extern VAR(float32, AUTOMATIC) PwrLimr_Pim_dPwrLimrMinStdOperLim;
extern VAR(float32, AUTOMATIC) PwrLimr_Pim_dPwrLimrMotEnvlpSpd;
extern VAR(float32, AUTOMATIC) PwrLimr_Pim_dPwrLimrMotTqCmdIvtrLoaSca;
extern VAR(float32, AUTOMATIC) PwrLimr_Pim_dPwrLimrOutpVelOffs;
extern VAR(float32, AUTOMATIC) PwrLimr_Pim_dPwrLimrSpdAdj;
extern VAR(float32, AUTOMATIC) PwrLimr_Pim_dPwrLimrTLimMaxCurr;
extern VAR(float32, AUTOMATIC) PwrLimr_Pim_dPwrLimrTqEnvlpLim1;
extern VAR(float32, AUTOMATIC) PwrLimr_Pim_dPwrLimrTqEnvlpLim4;
extern VAR(float32, AUTOMATIC) PwrLimr_Pim_dPwrLimrTqLim;
extern VAR(float32, AUTOMATIC) PwrLimr_Pim_dPwrLimrTqLim1;
extern VAR(float32, AUTOMATIC) PwrLimr_Pim_dPwrLimrTqLim4;
extern VAR(float32, AUTOMATIC) PwrLimr_Pim_BrdgVltgRateLim;
extern VAR(boolean, AUTOMATIC) PwrLimr_Pim_LimdAssiLoVltgPrev;
extern VAR(FilLpRec1, AUTOMATIC) PwrLimr_Pim_MotVelLpFil;
extern VAR(float32, AUTOMATIC) PwrLimr_Pim_OutpVelOffsRateLimd;
extern VAR(uint32, AUTOMATIC) PwrLimr_Pim_RefTmr;
extern VAR(uint32, AUTOMATIC) PwrLimr_Pim_RefTmrPrev;
extern VAR(FilLpRec1, AUTOMATIC) PwrLimr_Pim_TqLimLpFil;

/* IRVs */
extern VAR(float32, AUTOMATIC) PwrLimr_Irv_MinStdOperLim;
extern VAR(float32, AUTOMATIC) PwrLimr_Irv_MotEnvlpSpd;
extern VAR(float32, AUTOMATIC) PwrLimr_Irv_TqEnvlpLim1;

/* Arguments and Returns */
extern VAR(uint32, AUTOMATIC) PwrLimr_Srv_GetRefTmr100MicroSec32bit_RefTmr;
extern VAR(uint32, AUTOMATIC) PwrLimr_Srv_GetTiSpan100MicroSec32bit_RefTmr;
extern VAR(uint32, AUTOMATIC) PwrLimr_Srv_GetTiSpan100MicroSec32bit_TiSpan;
extern VAR(NtcNr1, AUTOMATIC) PwrLimr_Srv_SetNtcSts_NtcNr;
extern VAR(uint8, AUTOMATIC) PwrLimr_Srv_SetNtcSts_NtcStInfo;
extern VAR(NtcSts1, AUTOMATIC) PwrLimr_Srv_SetNtcSts_NtcSts;
extern VAR(uint16, AUTOMATIC) PwrLimr_Srv_SetNtcSts_DebStep;
extern VAR(Std_ReturnType, AUTOMATIC) PwrLimr_Srv_SetNtcSts_Return;


/*** Input Stubs ***/

#ifdef Rte_Read_AltFltActv_Logl
# undef Rte_Read_AltFltActv_Logl
#endif
#define Rte_Read_AltFltActv_Logl(data) (*(data) = PwrLimr_Ip_AltFltActv)

#ifdef Rte_Read_BrdgVltg_Val
# undef Rte_Read_BrdgVltg_Val
#endif
#define Rte_Read_BrdgVltg_Val(data) (*(data) = PwrLimr_Ip_BrdgVltg)

#ifdef Rte_Read_DualEcuFltMtgtnSca_Val
# undef Rte_Read_DualEcuFltMtgtnSca_Val
#endif
#define Rte_Read_DualEcuFltMtgtnSca_Val(data) (*(data) = PwrLimr_Ip_DualEcuFltMtgtnSca)

#ifdef Rte_Read_MotAndThermProtnLoaMod_Val
# undef Rte_Read_MotAndThermProtnLoaMod_Val
#endif
#define Rte_Read_MotAndThermProtnLoaMod_Val(data) (*(data) = PwrLimr_Ip_MotAndThermProtnLoaMod)

#ifdef Rte_Read_MotBackEmfConEstimd_Val
# undef Rte_Read_MotBackEmfConEstimd_Val
#endif
#define Rte_Read_MotBackEmfConEstimd_Val(data) (*(data) = PwrLimr_Ip_MotBackEmfConEstimd)

#ifdef Rte_Read_MotTqCmdMrf_Val
# undef Rte_Read_MotTqCmdMrf_Val
#endif
#define Rte_Read_MotTqCmdMrf_Val(data) (*(data) = PwrLimr_Ip_MotTqCmdMrf)

#ifdef Rte_Read_MotVelMrf_Val
# undef Rte_Read_MotVelMrf_Val
#endif
#define Rte_Read_MotVelMrf_Val(data) (*(data) = PwrLimr_Ip_MotVelMrf)


/*** Output Stubs ***/

#ifdef Rte_Write_MotTqCmdPwrLimd_Val
# undef Rte_Write_MotTqCmdPwrLimd_Val
#endif
#define Rte_Write_MotTqCmdPwrLimd_Val(data) (PwrLimr_Op_MotTqCmdPwrLimd = (data))

#ifdef Rte_Write_PwrLimrRednFac_Val
# undef Rte_Write_PwrLimrRednFac_Val
#endif
#define Rte_Write_PwrLimrRednFac_Val(data) (PwrLimr_Op_PwrLimrRednFac = (data))


/*** Calibration Stubs ***/

#ifdef Rte_Prm_PwrLimrAssiRednLpFilFrq_Val
# undef Rte_Prm_PwrLimrAssiRednLpFilFrq_Val
#endif
#define Rte_Prm_PwrLimrAssiRednLpFilFrq_Val() (PwrLimr_Cal_PwrLimrAssiRednLpFilFrq)

#ifdef Rte_Prm_PwrLimrBackEmfConStdT_Val
# undef Rte_Prm_PwrLimrBackEmfConStdT_Val
#endif
#define Rte_Prm_PwrLimrBackEmfConStdT_Val() (PwrLimr_Cal_PwrLimrBackEmfConStdT)

#ifdef Rte_Prm_PwrLimrBrdgVltgAdjSlew_Val
# undef Rte_Prm_PwrLimrBrdgVltgAdjSlew_Val
#endif
#define Rte_Prm_PwrLimrBrdgVltgAdjSlew_Val() (PwrLimr_Cal_PwrLimrBrdgVltgAdjSlew)

#ifdef Rte_Prm_PwrLimrBrdgVltgAltFltAdj_Val
# undef Rte_Prm_PwrLimrBrdgVltgAltFltAdj_Val
#endif
#define Rte_Prm_PwrLimrBrdgVltgAltFltAdj_Val() (PwrLimr_Cal_PwrLimrBrdgVltgAltFltAdj)

#ifdef Rte_Prm_PwrLimrFilAssiRednThd_Val
# undef Rte_Prm_PwrLimrFilAssiRednThd_Val
#endif
#define Rte_Prm_PwrLimrFilAssiRednThd_Val() (PwrLimr_Cal_PwrLimrFilAssiRednThd)

#ifdef Rte_Prm_PwrLimrLoVoltAssiRcvrThd_Val
# undef Rte_Prm_PwrLimrLoVoltAssiRcvrThd_Val
#endif
#define Rte_Prm_PwrLimrLoVoltAssiRcvrThd_Val() (PwrLimr_Cal_PwrLimrLoVoltAssiRcvrThd)

#ifdef Rte_Prm_PwrLimrLoVoltAssiRcvrTi_Val
# undef Rte_Prm_PwrLimrLoVoltAssiRcvrTi_Val
#endif
#define Rte_Prm_PwrLimrLoVoltAssiRcvrTi_Val() (PwrLimr_Cal_PwrLimrLoVoltAssiRcvrTi)

#ifdef Rte_Prm_PwrLimrMotEnvlpX_Ary1D
# undef Rte_Prm_PwrLimrMotEnvlpX_Ary1D
#endif
#define Rte_Prm_PwrLimrMotEnvlpX_Ary1D() (&(PwrLimr_Cal_PwrLimrMotEnvlpX[0]))

#ifdef Rte_Prm_PwrLimrMotEnvlpY_Ary1D
# undef Rte_Prm_PwrLimrMotEnvlpY_Ary1D
#endif
#define Rte_Prm_PwrLimrMotEnvlpY_Ary1D() (&(PwrLimr_Cal_PwrLimrMotEnvlpY[0]))

#ifdef Rte_Prm_PwrLimrMotVelLpFilFrq_Val
# undef Rte_Prm_PwrLimrMotVelLpFilFrq_Val
#endif
#define Rte_Prm_PwrLimrMotVelLpFilFrq_Val() (PwrLimr_Cal_PwrLimrMotVelLpFilFrq)

#ifdef Rte_Prm_PwrLimrSpdAdjSlewDec_Val
# undef Rte_Prm_PwrLimrSpdAdjSlewDec_Val
#endif
#define Rte_Prm_PwrLimrSpdAdjSlewDec_Val() (PwrLimr_Cal_PwrLimrSpdAdjSlewDec)

#ifdef Rte_Prm_PwrLimrSpdAdjSlewEna_Logl
# undef Rte_Prm_PwrLimrSpdAdjSlewEna_Logl
#endif
#define Rte_Prm_PwrLimrSpdAdjSlewEna_Logl() (PwrLimr_Cal_PwrLimrSpdAdjSlewEna)

#ifdef Rte_Prm_PwrLimrSpdAdjSlewInc_Val
# undef Rte_Prm_PwrLimrSpdAdjSlewInc_Val
#endif
#define Rte_Prm_PwrLimrSpdAdjSlewInc_Val() (PwrLimr_Cal_PwrLimrSpdAdjSlewInc)

#ifdef Rte_Prm_PwrLimrStdOperMotEnvlpX_Ary1D
# undef Rte_Prm_PwrLimrStdOperMotEnvlpX_Ary1D
#endif
#define Rte_Prm_PwrLimrStdOperMotEnvlpX_Ary1D() (&(PwrLimr_Cal_PwrLimrStdOperMotEnvlpX[0]))

#ifdef Rte_Prm_PwrLimrStdOperMotEnvlpY_Ary1D
# undef Rte_Prm_PwrLimrStdOperMotEnvlpY_Ary1D
#endif
#define Rte_Prm_PwrLimrStdOperMotEnvlpY_Ary1D() (&(PwrLimr_Cal_PwrLimrStdOperMotEnvlpY[0]))

#ifdef Rte_Prm_PwrLimrVltgDptMotVelOffsX_Ary1D
# undef Rte_Prm_PwrLimrVltgDptMotVelOffsX_Ary1D
#endif
#define Rte_Prm_PwrLimrVltgDptMotVelOffsX_Ary1D() (&(PwrLimr_Cal_PwrLimrVltgDptMotVelOffsX[0]))

#ifdef Rte_Prm_PwrLimrVltgDptMotVelOffsY_Ary1D
# undef Rte_Prm_PwrLimrVltgDptMotVelOffsY_Ary1D
#endif
#define Rte_Prm_PwrLimrVltgDptMotVelOffsY_Ary1D() (&(PwrLimr_Cal_PwrLimrVltgDptMotVelOffsY[0]))


/*** PIM Stubs ***/

#ifdef Rte_Pim_dPwrLimrFildMotVel
# undef Rte_Pim_dPwrLimrFildMotVel
#endif
#define Rte_Pim_dPwrLimrFildMotVel() (&PwrLimr_Pim_dPwrLimrFildMotVel)

#ifdef Rte_Pim_dPwrLimrLimDif
# undef Rte_Pim_dPwrLimrLimDif
#endif
#define Rte_Pim_dPwrLimrLimDif() (&PwrLimr_Pim_dPwrLimrLimDif)

#ifdef Rte_Pim_dPwrLimrMinStdOperLim
# undef Rte_Pim_dPwrLimrMinStdOperLim
#endif
#define Rte_Pim_dPwrLimrMinStdOperLim() (&PwrLimr_Pim_dPwrLimrMinStdOperLim)

#ifdef Rte_Pim_dPwrLimrMotEnvlpSpd
# undef Rte_Pim_dPwrLimrMotEnvlpSpd
#endif
#define Rte_Pim_dPwrLimrMotEnvlpSpd() (&PwrLimr_Pim_dPwrLimrMotEnvlpSpd)

#ifdef Rte_Pim_dPwrLimrMotTqCmdIvtrLoaSca
# undef Rte_Pim_dPwrLimrMotTqCmdIvtrLoaSca
#endif
#define Rte_Pim_dPwrLimrMotTqCmdIvtrLoaSca() (&PwrLimr_Pim_dPwrLimrMotTqCmdIvtrLoaSca)

#ifdef Rte_Pim_dPwrLimrOutpVelOffs
# undef Rte_Pim_dPwrLimrOutpVelOffs
#endif
#define Rte_Pim_dPwrLimrOutpVelOffs() (&PwrLimr_Pim_dPwrLimrOutpVelOffs)

#ifdef Rte_Pim_dPwrLimrSpdAdj
# undef Rte_Pim_dPwrLimrSpdAdj
#endif
#define Rte_Pim_dPwrLimrSpdAdj() (&PwrLimr_Pim_dPwrLimrSpdAdj)

#ifdef Rte_Pim_dPwrLimrTLimMaxCurr
# undef Rte_Pim_dPwrLimrTLimMaxCurr
#endif
#define Rte_Pim_dPwrLimrTLimMaxCurr() (&PwrLimr_Pim_dPwrLimrTLimMaxCurr)

#ifdef Rte_Pim_dPwrLimrTqEnvlpLim1
# undef Rte_Pim_dPwrLimrTqEnvlpLim1
#endif
#define Rte_Pim_dPwrLimrTqEnvlpLim1() (&PwrLimr_Pim_dPwrLimrTqEnvlpLim1)

#ifdef Rte_Pim_dPwrLimrTqEnvlpLim4
# undef Rte_Pim_dPwrLimrTqEnvlpLim4
#endif
#define Rte_Pim_dPwrLimrTqEnvlpLim4() (&PwrLimr_Pim_dPwrLimrTqEnvlpLim4)

#ifdef Rte_Pim_dPwrLimrTqLim
# undef Rte_Pim_dPwrLimrTqLim
#endif
#define Rte_Pim_dPwrLimrTqLim() (&PwrLimr_Pim_dPwrLimrTqLim)

#ifdef Rte_Pim_dPwrLimrTqLim1
# undef Rte_Pim_dPwrLimrTqLim1
#endif
#define Rte_Pim_dPwrLimrTqLim1() (&PwrLimr_Pim_dPwrLimrTqLim1)

#ifdef Rte_Pim_dPwrLimrTqLim4
# undef Rte_Pim_dPwrLimrTqLim4
#endif
#define Rte_Pim_dPwrLimrTqLim4() (&PwrLimr_Pim_dPwrLimrTqLim4)

#ifdef Rte_Pim_BrdgVltgRateLim
# undef Rte_Pim_BrdgVltgRateLim
#endif
#define Rte_Pim_BrdgVltgRateLim() (&PwrLimr_Pim_BrdgVltgRateLim)

#ifdef Rte_Pim_LimdAssiLoVltgPrev
# undef Rte_Pim_LimdAssiLoVltgPrev
#endif
#define Rte_Pim_LimdAssiLoVltgPrev() (&PwrLimr_Pim_LimdAssiLoVltgPrev)

#ifdef Rte_Pim_MotVelLpFil
# undef Rte_Pim_MotVelLpFil
#endif
#define Rte_Pim_MotVelLpFil() (&PwrLimr_Pim_MotVelLpFil)

#ifdef Rte_Pim_OutpVelOffsRateLimd
# undef Rte_Pim_OutpVelOffsRateLimd
#endif
#define Rte_Pim_OutpVelOffsRateLimd() (&PwrLimr_Pim_OutpVelOffsRateLimd)

#ifdef Rte_Pim_RefTmr
# undef Rte_Pim_RefTmr
#endif
#define Rte_Pim_RefTmr() (&PwrLimr_Pim_RefTmr)

#ifdef Rte_Pim_RefTmrPrev
# undef Rte_Pim_RefTmrPrev
#endif
#define Rte_Pim_RefTmrPrev() (&PwrLimr_Pim_RefTmrPrev)

#ifdef Rte_Pim_TqLimLpFil
# undef Rte_Pim_TqLimLpFil
#endif
#define Rte_Pim_TqLimLpFil() (&PwrLimr_Pim_TqLimLpFil)


/*** IRV Stubs ***/

#ifdef Rte_IrvRead_PwrLimrPer2_MinStdOperLim
# undef Rte_IrvRead_PwrLimrPer2_MinStdOperLim
#endif
#define Rte_IrvRead_PwrLimrPer2_MinStdOperLim() (PwrLimr_Irv_MinStdOperLim)

#ifdef Rte_IrvWrite_PwrLimrPer1_MinStdOperLim
# undef Rte_IrvWrite_PwrLimrPer1_MinStdOperLim
#endif
#define Rte_IrvWrite_PwrLimrPer1_MinStdOperLim(data) (PwrLimr_Irv_MinStdOperLim = (data))

#ifdef Rte_IrvRead_PwrLimrPer2_MotEnvlpSpd
# undef Rte_IrvRead_PwrLimrPer2_MotEnvlpSpd
#endif
#define Rte_IrvRead_PwrLimrPer2_MotEnvlpSpd() (PwrLimr_Irv_MotEnvlpSpd)

#ifdef Rte_IrvWrite_PwrLimrPer1_MotEnvlpSpd
# undef Rte_IrvWrite_PwrLimrPer1_MotEnvlpSpd
#endif
#define Rte_IrvWrite_PwrLimrPer1_MotEnvlpSpd(data) (PwrLimr_Irv_MotEnvlpSpd = (data))

#ifdef Rte_IrvRead_PwrLimrPer2_TqEnvlpLim1
# undef Rte_IrvRead_PwrLimrPer2_TqEnvlpLim1
#endif
#define Rte_IrvRead_PwrLimrPer2_TqEnvlpLim1() (PwrLimr_Irv_TqEnvlpLim1)

#ifdef Rte_IrvWrite_PwrLimrPer1_TqEnvlpLim1
# undef Rte_IrvWrite_PwrLimrPer1_TqEnvlpLim1
#endif
#define Rte_IrvWrite_PwrLimrPer1_TqEnvlpLim1(data) (PwrLimr_Irv_TqEnvlpLim1 = (data))


/*** Client Stub ***/

extern FUNC(void, AUTOMATIC) Rte_Stub(void);


#endif
