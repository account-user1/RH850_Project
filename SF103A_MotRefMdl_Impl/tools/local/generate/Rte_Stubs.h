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
extern VAR(float32, AUTOMATIC) MotRefMdl_Ip_BrdgVltg;
extern VAR(boolean, AUTOMATIC) MotRefMdl_Ip_DualEcuMotCtrlMtgtnEna;
extern VAR(uint8, AUTOMATIC) MotRefMdl_Ip_MotAndThermProtnLoaMod;
extern VAR(float32, AUTOMATIC) MotRefMdl_Ip_MotBackEmfConEstimd;
extern VAR(float32, AUTOMATIC) MotRefMdl_Ip_MotInduDaxEstimd;
extern VAR(float32, AUTOMATIC) MotRefMdl_Ip_MotInduQaxEstimd;
extern VAR(MotQuad1, AUTOMATIC) MotRefMdl_Ip_MotQuad;
extern VAR(float32, AUTOMATIC) MotRefMdl_Ip_MotREstimd;
extern VAR(float32, AUTOMATIC) MotRefMdl_Ip_MotTqCmdMrfScad;
extern VAR(float32, AUTOMATIC) MotRefMdl_Ip_MotVelMrf;

/* Outputs */
extern VAR(float32, AUTOMATIC) MotRefMdl_Op_MotBackEmfVltg;
extern VAR(float32, AUTOMATIC) MotRefMdl_Op_MotCurrAg;
extern VAR(float32, AUTOMATIC) MotRefMdl_Op_MotCurrDaxCmd;
extern VAR(float32, AUTOMATIC) MotRefMdl_Op_MotCurrDaxMax;
extern VAR(float32, AUTOMATIC) MotRefMdl_Op_MotCurrQaxCmd;
extern VAR(float32, AUTOMATIC) MotRefMdl_Op_MotReacncDax;
extern VAR(float32, AUTOMATIC) MotRefMdl_Op_MotReacncQax;
extern VAR(float32, AUTOMATIC) MotRefMdl_Op_MotVltgDaxFf;
extern VAR(float32, AUTOMATIC) MotRefMdl_Op_MotVltgDaxFfStat;
extern VAR(float32, AUTOMATIC) MotRefMdl_Op_MotVltgQaxFf;
extern VAR(float32, AUTOMATIC) MotRefMdl_Op_MotVltgQaxFfStat;
extern VAR(float32, AUTOMATIC) MotRefMdl_Op_MotVltgSatnIndFf;

/* Calibrations */
extern CONST(float32, AUTOMATIC) MotRefMdl_Cal_MotRefMdlCurrDaxBoostGain;
extern CONST(u4p12, AUTOMATIC) MotRefMdl_Cal_MotRefMdlCurrDaxBoostTqScaX[11];
extern CONST(u1p15, AUTOMATIC) MotRefMdl_Cal_MotRefMdlCurrDaxBoostTqScaY[11];
extern CONST(float32, AUTOMATIC) MotRefMdl_Cal_MotRefMdlCurrDaxQaxRefDelta[8];
extern CONST(float32, AUTOMATIC) MotRefMdl_Cal_MotRefMdlCurrItrnTolr;
extern CONST(boolean, AUTOMATIC) MotRefMdl_Cal_MotRefMdlFbCtrlDi;
extern CONST(float32, AUTOMATIC) MotRefMdl_Cal_MotRefMdlIvtrDeadTiBrdgVltgSca;
extern CONST(uint8, AUTOMATIC) MotRefMdl_Cal_MotRefMdlMinCurrItrnLim;
extern CONST(float32, AUTOMATIC) MotRefMdl_Cal_MotRefMdlMotCurrDaxMaxSca;
extern CONST(float32, AUTOMATIC) MotRefMdl_Cal_MotRefMdlMotVelLpFilFrq;
extern CONST(float32, AUTOMATIC) MotRefMdl_Cal_MotRefMdlMotVltgDerivtvTiCon;
extern CONST(u11p5, AUTOMATIC) MotRefMdl_Cal_MotRefMdlQuad13VltgSdlX[10];
extern CONST(u3p13, AUTOMATIC) MotRefMdl_Cal_MotRefMdlQuad13VltgSdlY[10];
extern CONST(u11p5, AUTOMATIC) MotRefMdl_Cal_MotRefMdlQuad24VltgSdlX[10];
extern CONST(u3p13, AUTOMATIC) MotRefMdl_Cal_MotRefMdlQuad24VltgSdlY[10];
extern CONST(uint8, AUTOMATIC) MotRefMdl_Cal_MotRefMdlRefLocnItrnLim;
extern CONST(uint8, AUTOMATIC) MotRefMdl_Cal_MotRefMdlTqItrnLim;
extern CONST(float32, AUTOMATIC) MotRefMdl_Cal_MotRefMdlTqItrnTolr;
extern CONST(boolean, AUTOMATIC) MotRefMdl_Cal_MotRefMdlVltgModDynCmpEna;
extern CONST(float32, AUTOMATIC) MotRefMdl_Cal_MotRefMdlVltgOverRThdSca;
extern CONST(uint8, AUTOMATIC) MotRefMdl_Cal_SysGlbPrmMotPoleCnt;

/* PIMs */
extern VAR(float32, AUTOMATIC) MotRefMdl_Pim_dMotRefMdlCurrDaxAtPeakTq;
extern VAR(float32, AUTOMATIC) MotRefMdl_Pim_dMotRefMdlCurrDaxMin;
extern VAR(float32, AUTOMATIC) MotRefMdl_Pim_dMotRefMdlCurrQaxMin;
extern VAR(float32, AUTOMATIC) MotRefMdl_Pim_dMotRefMdlCurrSqdMin;
extern VAR(float32, AUTOMATIC) MotRefMdl_Pim_dMotRefMdlInterCalcnCurrDaxMax;
extern VAR(uint8, AUTOMATIC) MotRefMdl_Pim_dMotRefMdlMinCurrNrItrn;
extern VAR(float32, AUTOMATIC) MotRefMdl_Pim_dMotRefMdlMotCurrDaxBoost;
extern VAR(float32, AUTOMATIC) MotRefMdl_Pim_dMotRefMdlMotTqCmdLimd;
extern VAR(float32, AUTOMATIC) MotRefMdl_Pim_dMotRefMdlMotVelFildFf;
extern VAR(float32, AUTOMATIC) MotRefMdl_Pim_dMotRefMdlMotVltgDaxFfDyn;
extern VAR(float32, AUTOMATIC) MotRefMdl_Pim_dMotRefMdlMotVltgDaxFfDynTerm;
extern VAR(float32, AUTOMATIC) MotRefMdl_Pim_dMotRefMdlMotVltgDaxFfStat;
extern VAR(float32, AUTOMATIC) MotRefMdl_Pim_dMotRefMdlMotVltgQaxFfDyn;
extern VAR(float32, AUTOMATIC) MotRefMdl_Pim_dMotRefMdlMotVltgQaxFfDynTerm;
extern VAR(float32, AUTOMATIC) MotRefMdl_Pim_dMotRefMdlMotVltgQaxFfStat;
extern VAR(float32, AUTOMATIC) MotRefMdl_Pim_dMotRefMdlPeakTq;
extern VAR(uint8, AUTOMATIC) MotRefMdl_Pim_dMotRefMdlPeakTqNrItrn;
extern VAR(float32, AUTOMATIC) MotRefMdl_Pim_dMotRefMdlPhaAdvAtPeakTq;
extern VAR(float32, AUTOMATIC) MotRefMdl_Pim_dMotRefMdlReacncDaxOverR;
extern VAR(float32, AUTOMATIC) MotRefMdl_Pim_dMotRefMdlReacncQaxOverR;
extern VAR(float32, AUTOMATIC) MotRefMdl_Pim_dMotRefMdlRelncTqCoeff;
extern VAR(float32, AUTOMATIC) MotRefMdl_Pim_CosDelta[8];
extern VAR(float32, AUTOMATIC) MotRefMdl_Pim_MotCurrDaxCmdPrev;
extern VAR(float32, AUTOMATIC) MotRefMdl_Pim_MotCurrQaxCmdPrev;
extern VAR(FilLpRec1, AUTOMATIC) MotRefMdl_Pim_MotVelLpFil;
extern VAR(float32, AUTOMATIC) MotRefMdl_Pim_SinDelta[8];
extern VAR(float32, AUTOMATIC) MotRefMdl_Pim_VltgDaxFfTermPrev;
extern VAR(float32, AUTOMATIC) MotRefMdl_Pim_VltgQaxFfTermPrev;

/* Arguments and Returns */


/*** Input Stubs ***/

#ifdef Rte_Read_BrdgVltg_Val
# undef Rte_Read_BrdgVltg_Val
#endif
#define Rte_Read_BrdgVltg_Val(data) (*(data) = MotRefMdl_Ip_BrdgVltg)

#ifdef Rte_Read_DualEcuMotCtrlMtgtnEna_Logl
# undef Rte_Read_DualEcuMotCtrlMtgtnEna_Logl
#endif
#define Rte_Read_DualEcuMotCtrlMtgtnEna_Logl(data) (*(data) = MotRefMdl_Ip_DualEcuMotCtrlMtgtnEna)

#ifdef Rte_Read_MotAndThermProtnLoaMod_Val
# undef Rte_Read_MotAndThermProtnLoaMod_Val
#endif
#define Rte_Read_MotAndThermProtnLoaMod_Val(data) (*(data) = MotRefMdl_Ip_MotAndThermProtnLoaMod)

#ifdef Rte_Read_MotBackEmfConEstimd_Val
# undef Rte_Read_MotBackEmfConEstimd_Val
#endif
#define Rte_Read_MotBackEmfConEstimd_Val(data) (*(data) = MotRefMdl_Ip_MotBackEmfConEstimd)

#ifdef Rte_Read_MotInduDaxEstimd_Val
# undef Rte_Read_MotInduDaxEstimd_Val
#endif
#define Rte_Read_MotInduDaxEstimd_Val(data) (*(data) = MotRefMdl_Ip_MotInduDaxEstimd)

#ifdef Rte_Read_MotInduQaxEstimd_Val
# undef Rte_Read_MotInduQaxEstimd_Val
#endif
#define Rte_Read_MotInduQaxEstimd_Val(data) (*(data) = MotRefMdl_Ip_MotInduQaxEstimd)

#ifdef Rte_Read_MotQuad_Val
# undef Rte_Read_MotQuad_Val
#endif
#define Rte_Read_MotQuad_Val(data) (*(data) = MotRefMdl_Ip_MotQuad)

#ifdef Rte_Read_MotREstimd_Val
# undef Rte_Read_MotREstimd_Val
#endif
#define Rte_Read_MotREstimd_Val(data) (*(data) = MotRefMdl_Ip_MotREstimd)

#ifdef Rte_Read_MotTqCmdMrfScad_Val
# undef Rte_Read_MotTqCmdMrfScad_Val
#endif
#define Rte_Read_MotTqCmdMrfScad_Val(data) (*(data) = MotRefMdl_Ip_MotTqCmdMrfScad)

#ifdef Rte_Read_MotVelMrf_Val
# undef Rte_Read_MotVelMrf_Val
#endif
#define Rte_Read_MotVelMrf_Val(data) (*(data) = MotRefMdl_Ip_MotVelMrf)


/*** Output Stubs ***/

#ifdef Rte_Write_MotBackEmfVltg_Val
# undef Rte_Write_MotBackEmfVltg_Val
#endif
#define Rte_Write_MotBackEmfVltg_Val(data) (MotRefMdl_Op_MotBackEmfVltg = (data))

#ifdef Rte_Write_MotCurrAg_Val
# undef Rte_Write_MotCurrAg_Val
#endif
#define Rte_Write_MotCurrAg_Val(data) (MotRefMdl_Op_MotCurrAg = (data))

#ifdef Rte_Write_MotCurrDaxCmd_Val
# undef Rte_Write_MotCurrDaxCmd_Val
#endif
#define Rte_Write_MotCurrDaxCmd_Val(data) (MotRefMdl_Op_MotCurrDaxCmd = (data))

#ifdef Rte_Write_MotCurrDaxMax_Val
# undef Rte_Write_MotCurrDaxMax_Val
#endif
#define Rte_Write_MotCurrDaxMax_Val(data) (MotRefMdl_Op_MotCurrDaxMax = (data))

#ifdef Rte_Write_MotCurrQaxCmd_Val
# undef Rte_Write_MotCurrQaxCmd_Val
#endif
#define Rte_Write_MotCurrQaxCmd_Val(data) (MotRefMdl_Op_MotCurrQaxCmd = (data))

#ifdef Rte_Write_MotReacncDax_Val
# undef Rte_Write_MotReacncDax_Val
#endif
#define Rte_Write_MotReacncDax_Val(data) (MotRefMdl_Op_MotReacncDax = (data))

#ifdef Rte_Write_MotReacncQax_Val
# undef Rte_Write_MotReacncQax_Val
#endif
#define Rte_Write_MotReacncQax_Val(data) (MotRefMdl_Op_MotReacncQax = (data))

#ifdef Rte_Write_MotVltgDaxFf_Val
# undef Rte_Write_MotVltgDaxFf_Val
#endif
#define Rte_Write_MotVltgDaxFf_Val(data) (MotRefMdl_Op_MotVltgDaxFf = (data))

#ifdef Rte_Write_MotVltgDaxFfStat_Val
# undef Rte_Write_MotVltgDaxFfStat_Val
#endif
#define Rte_Write_MotVltgDaxFfStat_Val(data) (MotRefMdl_Op_MotVltgDaxFfStat = (data))

#ifdef Rte_Write_MotVltgQaxFf_Val
# undef Rte_Write_MotVltgQaxFf_Val
#endif
#define Rte_Write_MotVltgQaxFf_Val(data) (MotRefMdl_Op_MotVltgQaxFf = (data))

#ifdef Rte_Write_MotVltgQaxFfStat_Val
# undef Rte_Write_MotVltgQaxFfStat_Val
#endif
#define Rte_Write_MotVltgQaxFfStat_Val(data) (MotRefMdl_Op_MotVltgQaxFfStat = (data))

#ifdef Rte_Write_MotVltgSatnIndFf_Val
# undef Rte_Write_MotVltgSatnIndFf_Val
#endif
#define Rte_Write_MotVltgSatnIndFf_Val(data) (MotRefMdl_Op_MotVltgSatnIndFf = (data))


/*** Calibration Stubs ***/

#ifdef Rte_Prm_MotRefMdlCurrDaxBoostGain_Val
# undef Rte_Prm_MotRefMdlCurrDaxBoostGain_Val
#endif
#define Rte_Prm_MotRefMdlCurrDaxBoostGain_Val() (MotRefMdl_Cal_MotRefMdlCurrDaxBoostGain)

#ifdef Rte_Prm_MotRefMdlCurrDaxBoostTqScaX_Ary1D
# undef Rte_Prm_MotRefMdlCurrDaxBoostTqScaX_Ary1D
#endif
#define Rte_Prm_MotRefMdlCurrDaxBoostTqScaX_Ary1D() (&(MotRefMdl_Cal_MotRefMdlCurrDaxBoostTqScaX[0]))

#ifdef Rte_Prm_MotRefMdlCurrDaxBoostTqScaY_Ary1D
# undef Rte_Prm_MotRefMdlCurrDaxBoostTqScaY_Ary1D
#endif
#define Rte_Prm_MotRefMdlCurrDaxBoostTqScaY_Ary1D() (&(MotRefMdl_Cal_MotRefMdlCurrDaxBoostTqScaY[0]))

#ifdef Rte_Prm_MotRefMdlCurrDaxQaxRefDelta_Ary1D
# undef Rte_Prm_MotRefMdlCurrDaxQaxRefDelta_Ary1D
#endif
#define Rte_Prm_MotRefMdlCurrDaxQaxRefDelta_Ary1D() (&(MotRefMdl_Cal_MotRefMdlCurrDaxQaxRefDelta[0]))

#ifdef Rte_Prm_MotRefMdlCurrItrnTolr_Val
# undef Rte_Prm_MotRefMdlCurrItrnTolr_Val
#endif
#define Rte_Prm_MotRefMdlCurrItrnTolr_Val() (MotRefMdl_Cal_MotRefMdlCurrItrnTolr)

#ifdef Rte_Prm_MotRefMdlFbCtrlDi_Logl
# undef Rte_Prm_MotRefMdlFbCtrlDi_Logl
#endif
#define Rte_Prm_MotRefMdlFbCtrlDi_Logl() (MotRefMdl_Cal_MotRefMdlFbCtrlDi)

#ifdef Rte_Prm_MotRefMdlIvtrDeadTiBrdgVltgSca_Val
# undef Rte_Prm_MotRefMdlIvtrDeadTiBrdgVltgSca_Val
#endif
#define Rte_Prm_MotRefMdlIvtrDeadTiBrdgVltgSca_Val() (MotRefMdl_Cal_MotRefMdlIvtrDeadTiBrdgVltgSca)

#ifdef Rte_Prm_MotRefMdlMinCurrItrnLim_Val
# undef Rte_Prm_MotRefMdlMinCurrItrnLim_Val
#endif
#define Rte_Prm_MotRefMdlMinCurrItrnLim_Val() (MotRefMdl_Cal_MotRefMdlMinCurrItrnLim)

#ifdef Rte_Prm_MotRefMdlMotCurrDaxMaxSca_Val
# undef Rte_Prm_MotRefMdlMotCurrDaxMaxSca_Val
#endif
#define Rte_Prm_MotRefMdlMotCurrDaxMaxSca_Val() (MotRefMdl_Cal_MotRefMdlMotCurrDaxMaxSca)

#ifdef Rte_Prm_MotRefMdlMotVelLpFilFrq_Val
# undef Rte_Prm_MotRefMdlMotVelLpFilFrq_Val
#endif
#define Rte_Prm_MotRefMdlMotVelLpFilFrq_Val() (MotRefMdl_Cal_MotRefMdlMotVelLpFilFrq)

#ifdef Rte_Prm_MotRefMdlMotVltgDerivtvTiCon_Val
# undef Rte_Prm_MotRefMdlMotVltgDerivtvTiCon_Val
#endif
#define Rte_Prm_MotRefMdlMotVltgDerivtvTiCon_Val() (MotRefMdl_Cal_MotRefMdlMotVltgDerivtvTiCon)

#ifdef Rte_Prm_MotRefMdlQuad13VltgSdlX_Ary1D
# undef Rte_Prm_MotRefMdlQuad13VltgSdlX_Ary1D
#endif
#define Rte_Prm_MotRefMdlQuad13VltgSdlX_Ary1D() (&(MotRefMdl_Cal_MotRefMdlQuad13VltgSdlX[0]))

#ifdef Rte_Prm_MotRefMdlQuad13VltgSdlY_Ary1D
# undef Rte_Prm_MotRefMdlQuad13VltgSdlY_Ary1D
#endif
#define Rte_Prm_MotRefMdlQuad13VltgSdlY_Ary1D() (&(MotRefMdl_Cal_MotRefMdlQuad13VltgSdlY[0]))

#ifdef Rte_Prm_MotRefMdlQuad24VltgSdlX_Ary1D
# undef Rte_Prm_MotRefMdlQuad24VltgSdlX_Ary1D
#endif
#define Rte_Prm_MotRefMdlQuad24VltgSdlX_Ary1D() (&(MotRefMdl_Cal_MotRefMdlQuad24VltgSdlX[0]))

#ifdef Rte_Prm_MotRefMdlQuad24VltgSdlY_Ary1D
# undef Rte_Prm_MotRefMdlQuad24VltgSdlY_Ary1D
#endif
#define Rte_Prm_MotRefMdlQuad24VltgSdlY_Ary1D() (&(MotRefMdl_Cal_MotRefMdlQuad24VltgSdlY[0]))

#ifdef Rte_Prm_MotRefMdlRefLocnItrnLim_Val
# undef Rte_Prm_MotRefMdlRefLocnItrnLim_Val
#endif
#define Rte_Prm_MotRefMdlRefLocnItrnLim_Val() (MotRefMdl_Cal_MotRefMdlRefLocnItrnLim)

#ifdef Rte_Prm_MotRefMdlTqItrnLim_Val
# undef Rte_Prm_MotRefMdlTqItrnLim_Val
#endif
#define Rte_Prm_MotRefMdlTqItrnLim_Val() (MotRefMdl_Cal_MotRefMdlTqItrnLim)

#ifdef Rte_Prm_MotRefMdlTqItrnTolr_Val
# undef Rte_Prm_MotRefMdlTqItrnTolr_Val
#endif
#define Rte_Prm_MotRefMdlTqItrnTolr_Val() (MotRefMdl_Cal_MotRefMdlTqItrnTolr)

#ifdef Rte_Prm_MotRefMdlVltgModDynCmpEna_Logl
# undef Rte_Prm_MotRefMdlVltgModDynCmpEna_Logl
#endif
#define Rte_Prm_MotRefMdlVltgModDynCmpEna_Logl() (MotRefMdl_Cal_MotRefMdlVltgModDynCmpEna)

#ifdef Rte_Prm_MotRefMdlVltgOverRThdSca_Val
# undef Rte_Prm_MotRefMdlVltgOverRThdSca_Val
#endif
#define Rte_Prm_MotRefMdlVltgOverRThdSca_Val() (MotRefMdl_Cal_MotRefMdlVltgOverRThdSca)

#ifdef Rte_Prm_SysGlbPrmMotPoleCnt_Val
# undef Rte_Prm_SysGlbPrmMotPoleCnt_Val
#endif
#define Rte_Prm_SysGlbPrmMotPoleCnt_Val() (MotRefMdl_Cal_SysGlbPrmMotPoleCnt)


/*** PIM Stubs ***/

#ifdef Rte_Pim_dMotRefMdlCurrDaxAtPeakTq
# undef Rte_Pim_dMotRefMdlCurrDaxAtPeakTq
#endif
#define Rte_Pim_dMotRefMdlCurrDaxAtPeakTq() (&MotRefMdl_Pim_dMotRefMdlCurrDaxAtPeakTq)

#ifdef Rte_Pim_dMotRefMdlCurrDaxMin
# undef Rte_Pim_dMotRefMdlCurrDaxMin
#endif
#define Rte_Pim_dMotRefMdlCurrDaxMin() (&MotRefMdl_Pim_dMotRefMdlCurrDaxMin)

#ifdef Rte_Pim_dMotRefMdlCurrQaxMin
# undef Rte_Pim_dMotRefMdlCurrQaxMin
#endif
#define Rte_Pim_dMotRefMdlCurrQaxMin() (&MotRefMdl_Pim_dMotRefMdlCurrQaxMin)

#ifdef Rte_Pim_dMotRefMdlCurrSqdMin
# undef Rte_Pim_dMotRefMdlCurrSqdMin
#endif
#define Rte_Pim_dMotRefMdlCurrSqdMin() (&MotRefMdl_Pim_dMotRefMdlCurrSqdMin)

#ifdef Rte_Pim_dMotRefMdlInterCalcnCurrDaxMax
# undef Rte_Pim_dMotRefMdlInterCalcnCurrDaxMax
#endif
#define Rte_Pim_dMotRefMdlInterCalcnCurrDaxMax() (&MotRefMdl_Pim_dMotRefMdlInterCalcnCurrDaxMax)

#ifdef Rte_Pim_dMotRefMdlMinCurrNrItrn
# undef Rte_Pim_dMotRefMdlMinCurrNrItrn
#endif
#define Rte_Pim_dMotRefMdlMinCurrNrItrn() (&MotRefMdl_Pim_dMotRefMdlMinCurrNrItrn)

#ifdef Rte_Pim_dMotRefMdlMotCurrDaxBoost
# undef Rte_Pim_dMotRefMdlMotCurrDaxBoost
#endif
#define Rte_Pim_dMotRefMdlMotCurrDaxBoost() (&MotRefMdl_Pim_dMotRefMdlMotCurrDaxBoost)

#ifdef Rte_Pim_dMotRefMdlMotTqCmdLimd
# undef Rte_Pim_dMotRefMdlMotTqCmdLimd
#endif
#define Rte_Pim_dMotRefMdlMotTqCmdLimd() (&MotRefMdl_Pim_dMotRefMdlMotTqCmdLimd)

#ifdef Rte_Pim_dMotRefMdlMotVelFildFf
# undef Rte_Pim_dMotRefMdlMotVelFildFf
#endif
#define Rte_Pim_dMotRefMdlMotVelFildFf() (&MotRefMdl_Pim_dMotRefMdlMotVelFildFf)

#ifdef Rte_Pim_dMotRefMdlMotVltgDaxFfDyn
# undef Rte_Pim_dMotRefMdlMotVltgDaxFfDyn
#endif
#define Rte_Pim_dMotRefMdlMotVltgDaxFfDyn() (&MotRefMdl_Pim_dMotRefMdlMotVltgDaxFfDyn)

#ifdef Rte_Pim_dMotRefMdlMotVltgDaxFfDynTerm
# undef Rte_Pim_dMotRefMdlMotVltgDaxFfDynTerm
#endif
#define Rte_Pim_dMotRefMdlMotVltgDaxFfDynTerm() (&MotRefMdl_Pim_dMotRefMdlMotVltgDaxFfDynTerm)

#ifdef Rte_Pim_dMotRefMdlMotVltgDaxFfStat
# undef Rte_Pim_dMotRefMdlMotVltgDaxFfStat
#endif
#define Rte_Pim_dMotRefMdlMotVltgDaxFfStat() (&MotRefMdl_Pim_dMotRefMdlMotVltgDaxFfStat)

#ifdef Rte_Pim_dMotRefMdlMotVltgQaxFfDyn
# undef Rte_Pim_dMotRefMdlMotVltgQaxFfDyn
#endif
#define Rte_Pim_dMotRefMdlMotVltgQaxFfDyn() (&MotRefMdl_Pim_dMotRefMdlMotVltgQaxFfDyn)

#ifdef Rte_Pim_dMotRefMdlMotVltgQaxFfDynTerm
# undef Rte_Pim_dMotRefMdlMotVltgQaxFfDynTerm
#endif
#define Rte_Pim_dMotRefMdlMotVltgQaxFfDynTerm() (&MotRefMdl_Pim_dMotRefMdlMotVltgQaxFfDynTerm)

#ifdef Rte_Pim_dMotRefMdlMotVltgQaxFfStat
# undef Rte_Pim_dMotRefMdlMotVltgQaxFfStat
#endif
#define Rte_Pim_dMotRefMdlMotVltgQaxFfStat() (&MotRefMdl_Pim_dMotRefMdlMotVltgQaxFfStat)

#ifdef Rte_Pim_dMotRefMdlPeakTq
# undef Rte_Pim_dMotRefMdlPeakTq
#endif
#define Rte_Pim_dMotRefMdlPeakTq() (&MotRefMdl_Pim_dMotRefMdlPeakTq)

#ifdef Rte_Pim_dMotRefMdlPeakTqNrItrn
# undef Rte_Pim_dMotRefMdlPeakTqNrItrn
#endif
#define Rte_Pim_dMotRefMdlPeakTqNrItrn() (&MotRefMdl_Pim_dMotRefMdlPeakTqNrItrn)

#ifdef Rte_Pim_dMotRefMdlPhaAdvAtPeakTq
# undef Rte_Pim_dMotRefMdlPhaAdvAtPeakTq
#endif
#define Rte_Pim_dMotRefMdlPhaAdvAtPeakTq() (&MotRefMdl_Pim_dMotRefMdlPhaAdvAtPeakTq)

#ifdef Rte_Pim_dMotRefMdlReacncDaxOverR
# undef Rte_Pim_dMotRefMdlReacncDaxOverR
#endif
#define Rte_Pim_dMotRefMdlReacncDaxOverR() (&MotRefMdl_Pim_dMotRefMdlReacncDaxOverR)

#ifdef Rte_Pim_dMotRefMdlReacncQaxOverR
# undef Rte_Pim_dMotRefMdlReacncQaxOverR
#endif
#define Rte_Pim_dMotRefMdlReacncQaxOverR() (&MotRefMdl_Pim_dMotRefMdlReacncQaxOverR)

#ifdef Rte_Pim_dMotRefMdlRelncTqCoeff
# undef Rte_Pim_dMotRefMdlRelncTqCoeff
#endif
#define Rte_Pim_dMotRefMdlRelncTqCoeff() (&MotRefMdl_Pim_dMotRefMdlRelncTqCoeff)

#ifdef Rte_Pim_CosDelta
# undef Rte_Pim_CosDelta
#endif
#define Rte_Pim_CosDelta() (&(MotRefMdl_Pim_CosDelta[0]))

#ifdef Rte_Pim_MotCurrDaxCmdPrev
# undef Rte_Pim_MotCurrDaxCmdPrev
#endif
#define Rte_Pim_MotCurrDaxCmdPrev() (&MotRefMdl_Pim_MotCurrDaxCmdPrev)

#ifdef Rte_Pim_MotCurrQaxCmdPrev
# undef Rte_Pim_MotCurrQaxCmdPrev
#endif
#define Rte_Pim_MotCurrQaxCmdPrev() (&MotRefMdl_Pim_MotCurrQaxCmdPrev)

#ifdef Rte_Pim_MotVelLpFil
# undef Rte_Pim_MotVelLpFil
#endif
#define Rte_Pim_MotVelLpFil() (&MotRefMdl_Pim_MotVelLpFil)

#ifdef Rte_Pim_SinDelta
# undef Rte_Pim_SinDelta
#endif
#define Rte_Pim_SinDelta() (&(MotRefMdl_Pim_SinDelta[0]))

#ifdef Rte_Pim_VltgDaxFfTermPrev
# undef Rte_Pim_VltgDaxFfTermPrev
#endif
#define Rte_Pim_VltgDaxFfTermPrev() (&MotRefMdl_Pim_VltgDaxFfTermPrev)

#ifdef Rte_Pim_VltgQaxFfTermPrev
# undef Rte_Pim_VltgQaxFfTermPrev
#endif
#define Rte_Pim_VltgQaxFfTermPrev() (&MotRefMdl_Pim_VltgQaxFfTermPrev)


/*** Client Stub ***/

extern FUNC(void, AUTOMATIC) Rte_Stub(void);


#endif
