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
extern VAR(float32, AUTOMATIC) MotCurrRegVltgLimr_Ip_MotCtrlMotInduDaxEstimdIvs;
extern VAR(float32, AUTOMATIC) MotCurrRegVltgLimr_Ip_MotCtrlMotInduQaxEstimdIvs;
extern VAR(float32, AUTOMATIC) MotCurrRegVltgLimr_Ip_MotCtrlMotREstimd;

/* Calibrations */
extern CONST(float32, AUTOMATIC) MotCurrRegVltgLimr_Cal_MotCurrRegVltgLimrCurrLoaScarSlewRate;
extern CONST(float32, AUTOMATIC) MotCurrRegVltgLimr_Cal_MotCurrRegVltgLimrDaxAntiWdupCoeff;
extern CONST(float32, AUTOMATIC) MotCurrRegVltgLimr_Cal_MotCurrRegVltgLimrDualEcuLoaScarSlewRate;
extern CONST(float32, AUTOMATIC) MotCurrRegVltgLimr_Cal_MotCurrRegVltgLimrIvtrLoaScarSlewRate;
extern CONST(boolean, AUTOMATIC) MotCurrRegVltgLimr_Cal_MotCurrRegVltgLimrMotCurrPredEna;
extern CONST(float32, AUTOMATIC) MotCurrRegVltgLimr_Cal_MotCurrRegVltgLimrMotCurrPredTi;
extern CONST(boolean, AUTOMATIC) MotCurrRegVltgLimr_Cal_MotCurrRegVltgLimrMotCurrQaxRefMdfnRplEna;
extern CONST(boolean, AUTOMATIC) MotCurrRegVltgLimr_Cal_MotCurrRegVltgLimrMotVltgBrdgFilEna;
extern CONST(float32, AUTOMATIC) MotCurrRegVltgLimr_Cal_MotCurrRegVltgLimrMotVltgBrdgLpFilFrq;
extern CONST(float32, AUTOMATIC) MotCurrRegVltgLimr_Cal_MotCurrRegVltgLimrMotVltgDaxIntglHiLim;
extern CONST(float32, AUTOMATIC) MotCurrRegVltgLimr_Cal_MotCurrRegVltgLimrMotVltgDaxIntglLoLim;
extern CONST(boolean, AUTOMATIC) MotCurrRegVltgLimr_Cal_MotCurrRegVltgLimrMotVltgQaxFfFilEna;
extern CONST(float32, AUTOMATIC) MotCurrRegVltgLimr_Cal_MotCurrRegVltgLimrMotVltgQaxFfLpFilFrq;
extern CONST(float32, AUTOMATIC) MotCurrRegVltgLimr_Cal_MotCurrRegVltgLimrMotVltgQaxIntglHiLim;
extern CONST(float32, AUTOMATIC) MotCurrRegVltgLimr_Cal_MotCurrRegVltgLimrMotVltgQaxIntglLoLim;
extern CONST(float32, AUTOMATIC) MotCurrRegVltgLimr_Cal_MotCurrRegVltgLimrQaxAntiWdupCoeff;
extern CONST(boolean, AUTOMATIC) MotCurrRegVltgLimr_Cal_MotCurrRegVltgLimrQaxAntiWdupScagDi;
extern CONST(boolean, AUTOMATIC) MotCurrRegVltgLimr_Cal_MotCurrRegCfgCurrLoopSecOrderTrfFctEna;
extern CONST(float32, AUTOMATIC) MotCurrRegVltgLimr_Cal_MotCurrRegCfgMotRVirtDax;
extern CONST(float32, AUTOMATIC) MotCurrRegVltgLimr_Cal_MotCurrRegCfgMotRVirtQax;
extern CONST(boolean, AUTOMATIC) MotCurrRegVltgLimr_Cal_MotRefMdlFbCtrlDi;
extern CONST(float32, AUTOMATIC) MotCurrRegVltgLimr_Cal_MotRefMdlIvtrDeadTiBrdgVltgSca;

/* PIMs */
extern VAR(float32, AUTOMATIC) MotCurrRegVltgLimr_Pim_dMotCurrRegVltgLimrAntiWdupCmdScaDax;
extern VAR(float32, AUTOMATIC) MotCurrRegVltgLimr_Pim_dMotCurrRegVltgLimrAntiWdupCmdScaQax;
extern VAR(float32, AUTOMATIC) MotCurrRegVltgLimr_Pim_dMotCurrRegVltgLimrMotCurrCmdErr;
extern VAR(float32, AUTOMATIC) MotCurrRegVltgLimr_Pim_dMotCurrRegVltgLimrMotCurrCmdErrDax;
extern VAR(float32, AUTOMATIC) MotCurrRegVltgLimr_Pim_dMotCurrRegVltgLimrMotCurrCmdErrQax;
extern VAR(float32, AUTOMATIC) MotCurrRegVltgLimr_Pim_dMotCurrRegVltgLimrMotCurrCmdScaDax;
extern VAR(float32, AUTOMATIC) MotCurrRegVltgLimr_Pim_dMotCurrRegVltgLimrMotCurrCmdScaQax;
extern VAR(float32, AUTOMATIC) MotCurrRegVltgLimr_Pim_dMotCurrRegVltgLimrMotVltgBrdgFild;
extern VAR(float32, AUTOMATIC) MotCurrRegVltgLimr_Pim_dMotCurrRegVltgLimrMotVltgCmdFinal;
extern VAR(float32, AUTOMATIC) MotCurrRegVltgLimr_Pim_dMotCurrRegVltgLimrMotVltgCmdPreLim;
extern VAR(float32, AUTOMATIC) MotCurrRegVltgLimr_Pim_dMotCurrRegVltgLimrMotVltgDampgDax;
extern VAR(float32, AUTOMATIC) MotCurrRegVltgLimr_Pim_dMotCurrRegVltgLimrMotVltgDampgQax;
extern VAR(float32, AUTOMATIC) MotCurrRegVltgLimr_Pim_dMotCurrRegVltgLimrMotVltgDaxFb;
extern VAR(float32, AUTOMATIC) MotCurrRegVltgLimr_Pim_dMotCurrRegVltgLimrMotVltgDaxIntglPreLim;
extern VAR(float32, AUTOMATIC) MotCurrRegVltgLimr_Pim_dMotCurrRegVltgLimrMotVltgDecoupldFbDax;
extern VAR(float32, AUTOMATIC) MotCurrRegVltgLimr_Pim_dMotCurrRegVltgLimrMotVltgDecoupldFbQax;
extern VAR(float32, AUTOMATIC) MotCurrRegVltgLimr_Pim_dMotCurrRegVltgLimrMotVltgDircFbDax;
extern VAR(float32, AUTOMATIC) MotCurrRegVltgLimr_Pim_dMotCurrRegVltgLimrMotVltgDircFbQax;
extern VAR(float32, AUTOMATIC) MotCurrRegVltgLimr_Pim_dMotCurrRegVltgLimrMotVltgPreLimDax;
extern VAR(float32, AUTOMATIC) MotCurrRegVltgLimr_Pim_dMotCurrRegVltgLimrMotVltgPreLimQax;
extern VAR(float32, AUTOMATIC) MotCurrRegVltgLimr_Pim_dMotCurrRegVltgLimrMotVltgPropCmdDax;
extern VAR(float32, AUTOMATIC) MotCurrRegVltgLimr_Pim_dMotCurrRegVltgLimrMotVltgPropCmdQax;
extern VAR(float32, AUTOMATIC) MotCurrRegVltgLimr_Pim_dMotCurrRegVltgLimrMotVltgQaxFb;
extern VAR(float32, AUTOMATIC) MotCurrRegVltgLimr_Pim_dMotCurrRegVltgLimrMotVltgQaxFfFild;
extern VAR(float32, AUTOMATIC) MotCurrRegVltgLimr_Pim_dMotCurrRegVltgLimrMotVltgQaxIntglPreLim;
extern VAR(float32, AUTOMATIC) MotCurrRegVltgLimr_Pim_dMotCurrRegVltgLimrMotVltgSatnIvsRat;
extern VAR(float32, AUTOMATIC) MotCurrRegVltgLimr_Pim_dMotCurrRegVltgLimrMotVltgSatnRat;
extern VAR(float32, AUTOMATIC) MotCurrRegVltgLimr_Pim_dMotCurrRegVltgLimrPhaAdvPreDly;
extern VAR(float32, AUTOMATIC) MotCurrRegVltgLimr_Pim_AntiWdupCmdScaDax;
extern VAR(float32, AUTOMATIC) MotCurrRegVltgLimr_Pim_AntiWdupCmdScaQax;
extern VAR(float32, AUTOMATIC) MotCurrRegVltgLimr_Pim_CurrLoaScarPrev;
extern VAR(float32, AUTOMATIC) MotCurrRegVltgLimr_Pim_DualEcuLoaScarPrev;
extern VAR(float32, AUTOMATIC) MotCurrRegVltgLimr_Pim_IvtrLoaScarPrev;
extern VAR(float32, AUTOMATIC) MotCurrRegVltgLimr_Pim_MotCtrlMotVltgDaxPrev;
extern VAR(float32, AUTOMATIC) MotCurrRegVltgLimr_Pim_MotCtrlMotVltgQaxPrev;
extern VAR(FilLpRec1, AUTOMATIC) MotCurrRegVltgLimr_Pim_MotVltgBrdgLpFil;
extern VAR(float32, AUTOMATIC) MotCurrRegVltgLimr_Pim_MotVltgIntglCmdDaxPrev;
extern VAR(float32, AUTOMATIC) MotCurrRegVltgLimr_Pim_MotVltgIntglCmdQaxPrev;
extern VAR(FilLpRec1, AUTOMATIC) MotCurrRegVltgLimr_Pim_MotVltgQaxFfLpFil;

/* Arguments and Returns */


/*** Input Stubs ***/

#ifdef Rte_Read_MotCtrlMotInduDaxEstimdIvs_Val
# undef Rte_Read_MotCtrlMotInduDaxEstimdIvs_Val
#endif
#define Rte_Read_MotCtrlMotInduDaxEstimdIvs_Val(data) (*(data) = MotCurrRegVltgLimr_Ip_MotCtrlMotInduDaxEstimdIvs)

#ifdef Rte_Read_MotCtrlMotInduQaxEstimdIvs_Val
# undef Rte_Read_MotCtrlMotInduQaxEstimdIvs_Val
#endif
#define Rte_Read_MotCtrlMotInduQaxEstimdIvs_Val(data) (*(data) = MotCurrRegVltgLimr_Ip_MotCtrlMotInduQaxEstimdIvs)

#ifdef Rte_Read_MotCtrlMotREstimd_Val
# undef Rte_Read_MotCtrlMotREstimd_Val
#endif
#define Rte_Read_MotCtrlMotREstimd_Val(data) (*(data) = MotCurrRegVltgLimr_Ip_MotCtrlMotREstimd)


/*** Calibration Stubs ***/

#ifdef Rte_Prm_MotCurrRegVltgLimrCurrLoaScarSlewRate_Val
# undef Rte_Prm_MotCurrRegVltgLimrCurrLoaScarSlewRate_Val
#endif
#define Rte_Prm_MotCurrRegVltgLimrCurrLoaScarSlewRate_Val() (MotCurrRegVltgLimr_Cal_MotCurrRegVltgLimrCurrLoaScarSlewRate)

#ifdef Rte_Prm_MotCurrRegVltgLimrDaxAntiWdupCoeff_Val
# undef Rte_Prm_MotCurrRegVltgLimrDaxAntiWdupCoeff_Val
#endif
#define Rte_Prm_MotCurrRegVltgLimrDaxAntiWdupCoeff_Val() (MotCurrRegVltgLimr_Cal_MotCurrRegVltgLimrDaxAntiWdupCoeff)

#ifdef Rte_Prm_MotCurrRegVltgLimrDualEcuLoaScarSlewRate_Val
# undef Rte_Prm_MotCurrRegVltgLimrDualEcuLoaScarSlewRate_Val
#endif
#define Rte_Prm_MotCurrRegVltgLimrDualEcuLoaScarSlewRate_Val() (MotCurrRegVltgLimr_Cal_MotCurrRegVltgLimrDualEcuLoaScarSlewRate)

#ifdef Rte_Prm_MotCurrRegVltgLimrIvtrLoaScarSlewRate_Val
# undef Rte_Prm_MotCurrRegVltgLimrIvtrLoaScarSlewRate_Val
#endif
#define Rte_Prm_MotCurrRegVltgLimrIvtrLoaScarSlewRate_Val() (MotCurrRegVltgLimr_Cal_MotCurrRegVltgLimrIvtrLoaScarSlewRate)

#ifdef Rte_Prm_MotCurrRegVltgLimrMotCurrPredEna_Logl
# undef Rte_Prm_MotCurrRegVltgLimrMotCurrPredEna_Logl
#endif
#define Rte_Prm_MotCurrRegVltgLimrMotCurrPredEna_Logl() (MotCurrRegVltgLimr_Cal_MotCurrRegVltgLimrMotCurrPredEna)

#ifdef Rte_Prm_MotCurrRegVltgLimrMotCurrPredTi_Val
# undef Rte_Prm_MotCurrRegVltgLimrMotCurrPredTi_Val
#endif
#define Rte_Prm_MotCurrRegVltgLimrMotCurrPredTi_Val() (MotCurrRegVltgLimr_Cal_MotCurrRegVltgLimrMotCurrPredTi)

#ifdef Rte_Prm_MotCurrRegVltgLimrMotCurrQaxRefMdfnRplEna_Logl
# undef Rte_Prm_MotCurrRegVltgLimrMotCurrQaxRefMdfnRplEna_Logl
#endif
#define Rte_Prm_MotCurrRegVltgLimrMotCurrQaxRefMdfnRplEna_Logl() (MotCurrRegVltgLimr_Cal_MotCurrRegVltgLimrMotCurrQaxRefMdfnRplEna)

#ifdef Rte_Prm_MotCurrRegVltgLimrMotVltgBrdgFilEna_Logl
# undef Rte_Prm_MotCurrRegVltgLimrMotVltgBrdgFilEna_Logl
#endif
#define Rte_Prm_MotCurrRegVltgLimrMotVltgBrdgFilEna_Logl() (MotCurrRegVltgLimr_Cal_MotCurrRegVltgLimrMotVltgBrdgFilEna)

#ifdef Rte_Prm_MotCurrRegVltgLimrMotVltgBrdgLpFilFrq_Val
# undef Rte_Prm_MotCurrRegVltgLimrMotVltgBrdgLpFilFrq_Val
#endif
#define Rte_Prm_MotCurrRegVltgLimrMotVltgBrdgLpFilFrq_Val() (MotCurrRegVltgLimr_Cal_MotCurrRegVltgLimrMotVltgBrdgLpFilFrq)

#ifdef Rte_Prm_MotCurrRegVltgLimrMotVltgDaxIntglHiLim_Val
# undef Rte_Prm_MotCurrRegVltgLimrMotVltgDaxIntglHiLim_Val
#endif
#define Rte_Prm_MotCurrRegVltgLimrMotVltgDaxIntglHiLim_Val() (MotCurrRegVltgLimr_Cal_MotCurrRegVltgLimrMotVltgDaxIntglHiLim)

#ifdef Rte_Prm_MotCurrRegVltgLimrMotVltgDaxIntglLoLim_Val
# undef Rte_Prm_MotCurrRegVltgLimrMotVltgDaxIntglLoLim_Val
#endif
#define Rte_Prm_MotCurrRegVltgLimrMotVltgDaxIntglLoLim_Val() (MotCurrRegVltgLimr_Cal_MotCurrRegVltgLimrMotVltgDaxIntglLoLim)

#ifdef Rte_Prm_MotCurrRegVltgLimrMotVltgQaxFfFilEna_Logl
# undef Rte_Prm_MotCurrRegVltgLimrMotVltgQaxFfFilEna_Logl
#endif
#define Rte_Prm_MotCurrRegVltgLimrMotVltgQaxFfFilEna_Logl() (MotCurrRegVltgLimr_Cal_MotCurrRegVltgLimrMotVltgQaxFfFilEna)

#ifdef Rte_Prm_MotCurrRegVltgLimrMotVltgQaxFfLpFilFrq_Val
# undef Rte_Prm_MotCurrRegVltgLimrMotVltgQaxFfLpFilFrq_Val
#endif
#define Rte_Prm_MotCurrRegVltgLimrMotVltgQaxFfLpFilFrq_Val() (MotCurrRegVltgLimr_Cal_MotCurrRegVltgLimrMotVltgQaxFfLpFilFrq)

#ifdef Rte_Prm_MotCurrRegVltgLimrMotVltgQaxIntglHiLim_Val
# undef Rte_Prm_MotCurrRegVltgLimrMotVltgQaxIntglHiLim_Val
#endif
#define Rte_Prm_MotCurrRegVltgLimrMotVltgQaxIntglHiLim_Val() (MotCurrRegVltgLimr_Cal_MotCurrRegVltgLimrMotVltgQaxIntglHiLim)

#ifdef Rte_Prm_MotCurrRegVltgLimrMotVltgQaxIntglLoLim_Val
# undef Rte_Prm_MotCurrRegVltgLimrMotVltgQaxIntglLoLim_Val
#endif
#define Rte_Prm_MotCurrRegVltgLimrMotVltgQaxIntglLoLim_Val() (MotCurrRegVltgLimr_Cal_MotCurrRegVltgLimrMotVltgQaxIntglLoLim)

#ifdef Rte_Prm_MotCurrRegVltgLimrQaxAntiWdupCoeff_Val
# undef Rte_Prm_MotCurrRegVltgLimrQaxAntiWdupCoeff_Val
#endif
#define Rte_Prm_MotCurrRegVltgLimrQaxAntiWdupCoeff_Val() (MotCurrRegVltgLimr_Cal_MotCurrRegVltgLimrQaxAntiWdupCoeff)

#ifdef Rte_Prm_MotCurrRegVltgLimrQaxAntiWdupScagDi_Logl
# undef Rte_Prm_MotCurrRegVltgLimrQaxAntiWdupScagDi_Logl
#endif
#define Rte_Prm_MotCurrRegVltgLimrQaxAntiWdupScagDi_Logl() (MotCurrRegVltgLimr_Cal_MotCurrRegVltgLimrQaxAntiWdupScagDi)

#ifdef Rte_Prm_MotCurrRegCfgCurrLoopSecOrderTrfFctEna_Logl
# undef Rte_Prm_MotCurrRegCfgCurrLoopSecOrderTrfFctEna_Logl
#endif
#define Rte_Prm_MotCurrRegCfgCurrLoopSecOrderTrfFctEna_Logl() (MotCurrRegVltgLimr_Cal_MotCurrRegCfgCurrLoopSecOrderTrfFctEna)

#ifdef Rte_Prm_MotCurrRegCfgMotRVirtDax_Val
# undef Rte_Prm_MotCurrRegCfgMotRVirtDax_Val
#endif
#define Rte_Prm_MotCurrRegCfgMotRVirtDax_Val() (MotCurrRegVltgLimr_Cal_MotCurrRegCfgMotRVirtDax)

#ifdef Rte_Prm_MotCurrRegCfgMotRVirtQax_Val
# undef Rte_Prm_MotCurrRegCfgMotRVirtQax_Val
#endif
#define Rte_Prm_MotCurrRegCfgMotRVirtQax_Val() (MotCurrRegVltgLimr_Cal_MotCurrRegCfgMotRVirtQax)

#ifdef Rte_Prm_MotRefMdlFbCtrlDi_Logl
# undef Rte_Prm_MotRefMdlFbCtrlDi_Logl
#endif
#define Rte_Prm_MotRefMdlFbCtrlDi_Logl() (MotCurrRegVltgLimr_Cal_MotRefMdlFbCtrlDi)

#ifdef Rte_Prm_MotRefMdlIvtrDeadTiBrdgVltgSca_Val
# undef Rte_Prm_MotRefMdlIvtrDeadTiBrdgVltgSca_Val
#endif
#define Rte_Prm_MotRefMdlIvtrDeadTiBrdgVltgSca_Val() (MotCurrRegVltgLimr_Cal_MotRefMdlIvtrDeadTiBrdgVltgSca)


/*** PIM Stubs ***/

#ifdef Rte_Pim_dMotCurrRegVltgLimrAntiWdupCmdScaDax
# undef Rte_Pim_dMotCurrRegVltgLimrAntiWdupCmdScaDax
#endif
#define Rte_Pim_dMotCurrRegVltgLimrAntiWdupCmdScaDax() (&MotCurrRegVltgLimr_Pim_dMotCurrRegVltgLimrAntiWdupCmdScaDax)

#ifdef Rte_Pim_dMotCurrRegVltgLimrAntiWdupCmdScaQax
# undef Rte_Pim_dMotCurrRegVltgLimrAntiWdupCmdScaQax
#endif
#define Rte_Pim_dMotCurrRegVltgLimrAntiWdupCmdScaQax() (&MotCurrRegVltgLimr_Pim_dMotCurrRegVltgLimrAntiWdupCmdScaQax)

#ifdef Rte_Pim_dMotCurrRegVltgLimrMotCurrCmdErr
# undef Rte_Pim_dMotCurrRegVltgLimrMotCurrCmdErr
#endif
#define Rte_Pim_dMotCurrRegVltgLimrMotCurrCmdErr() (&MotCurrRegVltgLimr_Pim_dMotCurrRegVltgLimrMotCurrCmdErr)

#ifdef Rte_Pim_dMotCurrRegVltgLimrMotCurrCmdErrDax
# undef Rte_Pim_dMotCurrRegVltgLimrMotCurrCmdErrDax
#endif
#define Rte_Pim_dMotCurrRegVltgLimrMotCurrCmdErrDax() (&MotCurrRegVltgLimr_Pim_dMotCurrRegVltgLimrMotCurrCmdErrDax)

#ifdef Rte_Pim_dMotCurrRegVltgLimrMotCurrCmdErrQax
# undef Rte_Pim_dMotCurrRegVltgLimrMotCurrCmdErrQax
#endif
#define Rte_Pim_dMotCurrRegVltgLimrMotCurrCmdErrQax() (&MotCurrRegVltgLimr_Pim_dMotCurrRegVltgLimrMotCurrCmdErrQax)

#ifdef Rte_Pim_dMotCurrRegVltgLimrMotCurrCmdScaDax
# undef Rte_Pim_dMotCurrRegVltgLimrMotCurrCmdScaDax
#endif
#define Rte_Pim_dMotCurrRegVltgLimrMotCurrCmdScaDax() (&MotCurrRegVltgLimr_Pim_dMotCurrRegVltgLimrMotCurrCmdScaDax)

#ifdef Rte_Pim_dMotCurrRegVltgLimrMotCurrCmdScaQax
# undef Rte_Pim_dMotCurrRegVltgLimrMotCurrCmdScaQax
#endif
#define Rte_Pim_dMotCurrRegVltgLimrMotCurrCmdScaQax() (&MotCurrRegVltgLimr_Pim_dMotCurrRegVltgLimrMotCurrCmdScaQax)

#ifdef Rte_Pim_dMotCurrRegVltgLimrMotVltgBrdgFild
# undef Rte_Pim_dMotCurrRegVltgLimrMotVltgBrdgFild
#endif
#define Rte_Pim_dMotCurrRegVltgLimrMotVltgBrdgFild() (&MotCurrRegVltgLimr_Pim_dMotCurrRegVltgLimrMotVltgBrdgFild)

#ifdef Rte_Pim_dMotCurrRegVltgLimrMotVltgCmdFinal
# undef Rte_Pim_dMotCurrRegVltgLimrMotVltgCmdFinal
#endif
#define Rte_Pim_dMotCurrRegVltgLimrMotVltgCmdFinal() (&MotCurrRegVltgLimr_Pim_dMotCurrRegVltgLimrMotVltgCmdFinal)

#ifdef Rte_Pim_dMotCurrRegVltgLimrMotVltgCmdPreLim
# undef Rte_Pim_dMotCurrRegVltgLimrMotVltgCmdPreLim
#endif
#define Rte_Pim_dMotCurrRegVltgLimrMotVltgCmdPreLim() (&MotCurrRegVltgLimr_Pim_dMotCurrRegVltgLimrMotVltgCmdPreLim)

#ifdef Rte_Pim_dMotCurrRegVltgLimrMotVltgDampgDax
# undef Rte_Pim_dMotCurrRegVltgLimrMotVltgDampgDax
#endif
#define Rte_Pim_dMotCurrRegVltgLimrMotVltgDampgDax() (&MotCurrRegVltgLimr_Pim_dMotCurrRegVltgLimrMotVltgDampgDax)

#ifdef Rte_Pim_dMotCurrRegVltgLimrMotVltgDampgQax
# undef Rte_Pim_dMotCurrRegVltgLimrMotVltgDampgQax
#endif
#define Rte_Pim_dMotCurrRegVltgLimrMotVltgDampgQax() (&MotCurrRegVltgLimr_Pim_dMotCurrRegVltgLimrMotVltgDampgQax)

#ifdef Rte_Pim_dMotCurrRegVltgLimrMotVltgDaxFb
# undef Rte_Pim_dMotCurrRegVltgLimrMotVltgDaxFb
#endif
#define Rte_Pim_dMotCurrRegVltgLimrMotVltgDaxFb() (&MotCurrRegVltgLimr_Pim_dMotCurrRegVltgLimrMotVltgDaxFb)

#ifdef Rte_Pim_dMotCurrRegVltgLimrMotVltgDaxIntglPreLim
# undef Rte_Pim_dMotCurrRegVltgLimrMotVltgDaxIntglPreLim
#endif
#define Rte_Pim_dMotCurrRegVltgLimrMotVltgDaxIntglPreLim() (&MotCurrRegVltgLimr_Pim_dMotCurrRegVltgLimrMotVltgDaxIntglPreLim)

#ifdef Rte_Pim_dMotCurrRegVltgLimrMotVltgDecoupldFbDax
# undef Rte_Pim_dMotCurrRegVltgLimrMotVltgDecoupldFbDax
#endif
#define Rte_Pim_dMotCurrRegVltgLimrMotVltgDecoupldFbDax() (&MotCurrRegVltgLimr_Pim_dMotCurrRegVltgLimrMotVltgDecoupldFbDax)

#ifdef Rte_Pim_dMotCurrRegVltgLimrMotVltgDecoupldFbQax
# undef Rte_Pim_dMotCurrRegVltgLimrMotVltgDecoupldFbQax
#endif
#define Rte_Pim_dMotCurrRegVltgLimrMotVltgDecoupldFbQax() (&MotCurrRegVltgLimr_Pim_dMotCurrRegVltgLimrMotVltgDecoupldFbQax)

#ifdef Rte_Pim_dMotCurrRegVltgLimrMotVltgDircFbDax
# undef Rte_Pim_dMotCurrRegVltgLimrMotVltgDircFbDax
#endif
#define Rte_Pim_dMotCurrRegVltgLimrMotVltgDircFbDax() (&MotCurrRegVltgLimr_Pim_dMotCurrRegVltgLimrMotVltgDircFbDax)

#ifdef Rte_Pim_dMotCurrRegVltgLimrMotVltgDircFbQax
# undef Rte_Pim_dMotCurrRegVltgLimrMotVltgDircFbQax
#endif
#define Rte_Pim_dMotCurrRegVltgLimrMotVltgDircFbQax() (&MotCurrRegVltgLimr_Pim_dMotCurrRegVltgLimrMotVltgDircFbQax)

#ifdef Rte_Pim_dMotCurrRegVltgLimrMotVltgPreLimDax
# undef Rte_Pim_dMotCurrRegVltgLimrMotVltgPreLimDax
#endif
#define Rte_Pim_dMotCurrRegVltgLimrMotVltgPreLimDax() (&MotCurrRegVltgLimr_Pim_dMotCurrRegVltgLimrMotVltgPreLimDax)

#ifdef Rte_Pim_dMotCurrRegVltgLimrMotVltgPreLimQax
# undef Rte_Pim_dMotCurrRegVltgLimrMotVltgPreLimQax
#endif
#define Rte_Pim_dMotCurrRegVltgLimrMotVltgPreLimQax() (&MotCurrRegVltgLimr_Pim_dMotCurrRegVltgLimrMotVltgPreLimQax)

#ifdef Rte_Pim_dMotCurrRegVltgLimrMotVltgPropCmdDax
# undef Rte_Pim_dMotCurrRegVltgLimrMotVltgPropCmdDax
#endif
#define Rte_Pim_dMotCurrRegVltgLimrMotVltgPropCmdDax() (&MotCurrRegVltgLimr_Pim_dMotCurrRegVltgLimrMotVltgPropCmdDax)

#ifdef Rte_Pim_dMotCurrRegVltgLimrMotVltgPropCmdQax
# undef Rte_Pim_dMotCurrRegVltgLimrMotVltgPropCmdQax
#endif
#define Rte_Pim_dMotCurrRegVltgLimrMotVltgPropCmdQax() (&MotCurrRegVltgLimr_Pim_dMotCurrRegVltgLimrMotVltgPropCmdQax)

#ifdef Rte_Pim_dMotCurrRegVltgLimrMotVltgQaxFb
# undef Rte_Pim_dMotCurrRegVltgLimrMotVltgQaxFb
#endif
#define Rte_Pim_dMotCurrRegVltgLimrMotVltgQaxFb() (&MotCurrRegVltgLimr_Pim_dMotCurrRegVltgLimrMotVltgQaxFb)

#ifdef Rte_Pim_dMotCurrRegVltgLimrMotVltgQaxFfFild
# undef Rte_Pim_dMotCurrRegVltgLimrMotVltgQaxFfFild
#endif
#define Rte_Pim_dMotCurrRegVltgLimrMotVltgQaxFfFild() (&MotCurrRegVltgLimr_Pim_dMotCurrRegVltgLimrMotVltgQaxFfFild)

#ifdef Rte_Pim_dMotCurrRegVltgLimrMotVltgQaxIntglPreLim
# undef Rte_Pim_dMotCurrRegVltgLimrMotVltgQaxIntglPreLim
#endif
#define Rte_Pim_dMotCurrRegVltgLimrMotVltgQaxIntglPreLim() (&MotCurrRegVltgLimr_Pim_dMotCurrRegVltgLimrMotVltgQaxIntglPreLim)

#ifdef Rte_Pim_dMotCurrRegVltgLimrMotVltgSatnIvsRat
# undef Rte_Pim_dMotCurrRegVltgLimrMotVltgSatnIvsRat
#endif
#define Rte_Pim_dMotCurrRegVltgLimrMotVltgSatnIvsRat() (&MotCurrRegVltgLimr_Pim_dMotCurrRegVltgLimrMotVltgSatnIvsRat)

#ifdef Rte_Pim_dMotCurrRegVltgLimrMotVltgSatnRat
# undef Rte_Pim_dMotCurrRegVltgLimrMotVltgSatnRat
#endif
#define Rte_Pim_dMotCurrRegVltgLimrMotVltgSatnRat() (&MotCurrRegVltgLimr_Pim_dMotCurrRegVltgLimrMotVltgSatnRat)

#ifdef Rte_Pim_dMotCurrRegVltgLimrPhaAdvPreDly
# undef Rte_Pim_dMotCurrRegVltgLimrPhaAdvPreDly
#endif
#define Rte_Pim_dMotCurrRegVltgLimrPhaAdvPreDly() (&MotCurrRegVltgLimr_Pim_dMotCurrRegVltgLimrPhaAdvPreDly)

#ifdef Rte_Pim_AntiWdupCmdScaDax
# undef Rte_Pim_AntiWdupCmdScaDax
#endif
#define Rte_Pim_AntiWdupCmdScaDax() (&MotCurrRegVltgLimr_Pim_AntiWdupCmdScaDax)

#ifdef Rte_Pim_AntiWdupCmdScaQax
# undef Rte_Pim_AntiWdupCmdScaQax
#endif
#define Rte_Pim_AntiWdupCmdScaQax() (&MotCurrRegVltgLimr_Pim_AntiWdupCmdScaQax)

#ifdef Rte_Pim_CurrLoaScarPrev
# undef Rte_Pim_CurrLoaScarPrev
#endif
#define Rte_Pim_CurrLoaScarPrev() (&MotCurrRegVltgLimr_Pim_CurrLoaScarPrev)

#ifdef Rte_Pim_DualEcuLoaScarPrev
# undef Rte_Pim_DualEcuLoaScarPrev
#endif
#define Rte_Pim_DualEcuLoaScarPrev() (&MotCurrRegVltgLimr_Pim_DualEcuLoaScarPrev)

#ifdef Rte_Pim_IvtrLoaScarPrev
# undef Rte_Pim_IvtrLoaScarPrev
#endif
#define Rte_Pim_IvtrLoaScarPrev() (&MotCurrRegVltgLimr_Pim_IvtrLoaScarPrev)

#ifdef Rte_Pim_MotCtrlMotVltgDaxPrev
# undef Rte_Pim_MotCtrlMotVltgDaxPrev
#endif
#define Rte_Pim_MotCtrlMotVltgDaxPrev() (&MotCurrRegVltgLimr_Pim_MotCtrlMotVltgDaxPrev)

#ifdef Rte_Pim_MotCtrlMotVltgQaxPrev
# undef Rte_Pim_MotCtrlMotVltgQaxPrev
#endif
#define Rte_Pim_MotCtrlMotVltgQaxPrev() (&MotCurrRegVltgLimr_Pim_MotCtrlMotVltgQaxPrev)

#ifdef Rte_Pim_MotVltgBrdgLpFil
# undef Rte_Pim_MotVltgBrdgLpFil
#endif
#define Rte_Pim_MotVltgBrdgLpFil() (&MotCurrRegVltgLimr_Pim_MotVltgBrdgLpFil)

#ifdef Rte_Pim_MotVltgIntglCmdDaxPrev
# undef Rte_Pim_MotVltgIntglCmdDaxPrev
#endif
#define Rte_Pim_MotVltgIntglCmdDaxPrev() (&MotCurrRegVltgLimr_Pim_MotVltgIntglCmdDaxPrev)

#ifdef Rte_Pim_MotVltgIntglCmdQaxPrev
# undef Rte_Pim_MotVltgIntglCmdQaxPrev
#endif
#define Rte_Pim_MotVltgIntglCmdQaxPrev() (&MotCurrRegVltgLimr_Pim_MotVltgIntglCmdQaxPrev)

#ifdef Rte_Pim_MotVltgQaxFfLpFil
# undef Rte_Pim_MotVltgQaxFfLpFil
#endif
#define Rte_Pim_MotVltgQaxFfLpFil() (&MotCurrRegVltgLimr_Pim_MotVltgQaxFfLpFil)


/*** Client Stub ***/

extern FUNC(void, AUTOMATIC) Rte_Stub(void);


#endif
