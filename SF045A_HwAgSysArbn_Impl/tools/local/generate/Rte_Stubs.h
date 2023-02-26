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
extern VAR(float32, AUTOMATIC) HwAgSysArbn_Ip_CmplncErrPinionToHw;
extern VAR(float32, AUTOMATIC) HwAgSysArbn_Ip_HwAg;
extern VAR(float32, AUTOMATIC) HwAgSysArbn_Ip_HwAgCorrd;
extern VAR(uint8, AUTOMATIC) HwAgSysArbn_Ip_HwAgIdptSig;
extern VAR(float32, AUTOMATIC) HwAgSysArbn_Ip_HwAgSnsrls;
extern VAR(float32, AUTOMATIC) HwAgSysArbn_Ip_HwAgSnsrlsConf;
extern VAR(float32, AUTOMATIC) HwAgSysArbn_Ip_HwTq;
extern VAR(float32, AUTOMATIC) HwAgSysArbn_Ip_MotVelCrf;
extern VAR(boolean, AUTOMATIC) HwAgSysArbn_Ip_MotVelVld;

/* Outputs */
extern VAR(float32, AUTOMATIC) HwAgSysArbn_Op_HwAgFinal;
extern VAR(float32, AUTOMATIC) HwAgSysArbn_Op_HwAgNotCorrd;
extern VAR(float32, AUTOMATIC) HwAgSysArbn_Op_HwAgToSerlCom;
extern VAR(boolean, AUTOMATIC) HwAgSysArbn_Op_HwAgVldToSerlCom;
extern VAR(float32, AUTOMATIC) HwAgSysArbn_Op_HwVel;
extern VAR(float32, AUTOMATIC) HwAgSysArbn_Op_HwVelToSerlCom;
extern VAR(float32, AUTOMATIC) HwAgSysArbn_Op_PinionAg;
extern VAR(float32, AUTOMATIC) HwAgSysArbn_Op_PinionAgConf;
extern VAR(float32, AUTOMATIC) HwAgSysArbn_Op_PinionVel;
extern VAR(float32, AUTOMATIC) HwAgSysArbn_Op_PinionVelConf;

/* Calibrations */
extern CONST(float32, AUTOMATIC) HwAgSysArbn_Cal_HwAgSysArbnHwAgConf1Snsr;
extern CONST(float32, AUTOMATIC) HwAgSysArbn_Cal_HwAgSysArbnHwAgConf2Snsr;
extern CONST(float32, AUTOMATIC) HwAgSysArbn_Cal_HwAgSysArbnHwAgConfNoSnsr;
extern CONST(float32, AUTOMATIC) HwAgSysArbn_Cal_HwAgSysArbnHwAgCorrdCorrlnThd;
extern CONST(uint16, AUTOMATIC) HwAgSysArbn_Cal_HwAgSysArbnHwAgCorrlnFailDebStep;
extern CONST(uint16, AUTOMATIC) HwAgSysArbn_Cal_HwAgSysArbnHwAgCorrlnPassDebStep;
extern CONST(float32, AUTOMATIC) HwAgSysArbn_Cal_HwAgSysArbnHwAgCorrlnRng;
extern CONST(uint8, AUTOMATIC) HwAgSysArbn_Cal_HwAgSysArbnHwAgIdptSigLim;
extern CONST(float32, AUTOMATIC) HwAgSysArbn_Cal_HwAgSysArbnHwAgSlewRate;
extern CONST(float32, AUTOMATIC) HwAgSysArbn_Cal_HwAgSysArbnHwAgSnsrlsCorrlnThd;
extern CONST(float32, AUTOMATIC) HwAgSysArbn_Cal_HwAgSysArbnHwAgSnsrlsKineThd;
extern CONST(uint32, AUTOMATIC) HwAgSysArbn_Cal_HwAgSysArbnHwAgToMotAgCorrlnElpdTiLim;
extern CONST(float32, AUTOMATIC) HwAgSysArbn_Cal_HwAgSysArbnSerlComHwAgCorrdConf;
extern CONST(float32, AUTOMATIC) HwAgSysArbn_Cal_HwAgSysArbnSerlComHwAgSnsrlsConf;
extern CONST(float32, AUTOMATIC) HwAgSysArbn_Cal_HwAgSysArbnSlewRateTmr;
extern CONST(float32, AUTOMATIC) HwAgSysArbn_Cal_HwAgSysArbnTqSnsrVelFilFrq;
extern CONST(float32, AUTOMATIC) HwAgSysArbn_Cal_SysGlbPrmSysKineRat;
extern CONST(float32, AUTOMATIC) HwAgSysArbn_Cal_SysGlbPrmTorsBarStfn;

/* PIMs */
extern VAR(boolean, AUTOMATIC) HwAgSysArbn_Pim_HwAgKineFlt;
extern VAR(boolean, AUTOMATIC) HwAgSysArbn_Pim_HwAgLtch;
extern VAR(float32, AUTOMATIC) HwAgSysArbn_Pim_HwAgPrev;
extern VAR(boolean, AUTOMATIC) HwAgSysArbn_Pim_HwAgToMotAgCorrln;
extern VAR(uint32, AUTOMATIC) HwAgSysArbn_Pim_HwAgToMotAgCorrlnDurnRefTmr;
extern VAR(float32, AUTOMATIC) HwAgSysArbn_Pim_PrevHwAgNotCorrd;
extern VAR(float32, AUTOMATIC) HwAgSysArbn_Pim_PrevPinionAgConf;
extern VAR(float32, AUTOMATIC) HwAgSysArbn_Pim_PrevSeldHwAg;
extern VAR(sint8, AUTOMATIC) HwAgSysArbn_Pim_PrevSrcSeln;
extern VAR(float32, AUTOMATIC) HwAgSysArbn_Pim_SeldHwAgConf;
extern VAR(uint32, AUTOMATIC) HwAgSysArbn_Pim_SlewElpdRefTmr;
extern VAR(boolean, AUTOMATIC) HwAgSysArbn_Pim_SlewSts;
extern VAR(float32, AUTOMATIC) HwAgSysArbn_Pim_TqSnsrAgPrev;
extern VAR(FilLpRec1, AUTOMATIC) HwAgSysArbn_Pim_TqSnsrVelFil;

/* Arguments and Returns */
extern VAR(NtcNr1, AUTOMATIC) HwAgSysArbn_Srv_GetNtcQlfrSts_NtcNr;
extern VAR(SigQlfr1, AUTOMATIC) HwAgSysArbn_Srv_GetNtcQlfrSts_NtcQlfr;
extern VAR(Std_ReturnType, AUTOMATIC) HwAgSysArbn_Srv_GetNtcQlfrSts_Return;
extern VAR(uint32, AUTOMATIC) HwAgSysArbn_Srv_GetRefTmr100MicroSec32bit_RefTmr;
extern VAR(uint32, AUTOMATIC) HwAgSysArbn_Srv_GetTiSpan100MicroSec32bit_RefTmr;
extern VAR(uint32, AUTOMATIC) HwAgSysArbn_Srv_GetTiSpan100MicroSec32bit_TiSpan;
extern VAR(NtcNr1, AUTOMATIC) HwAgSysArbn_Srv_SetNtcSts_NtcNr;
extern VAR(uint8, AUTOMATIC) HwAgSysArbn_Srv_SetNtcSts_NtcStInfo;
extern VAR(NtcSts1, AUTOMATIC) HwAgSysArbn_Srv_SetNtcSts_NtcSts;
extern VAR(uint16, AUTOMATIC) HwAgSysArbn_Srv_SetNtcSts_DebStep;
extern VAR(Std_ReturnType, AUTOMATIC) HwAgSysArbn_Srv_SetNtcSts_Return;


/*** Input Stubs ***/

#ifdef Rte_Read_CmplncErrPinionToHw_Val
# undef Rte_Read_CmplncErrPinionToHw_Val
#endif
#define Rte_Read_CmplncErrPinionToHw_Val(data) (*(data) = HwAgSysArbn_Ip_CmplncErrPinionToHw)

#ifdef Rte_Read_HwAg_Val
# undef Rte_Read_HwAg_Val
#endif
#define Rte_Read_HwAg_Val(data) (*(data) = HwAgSysArbn_Ip_HwAg)

#ifdef Rte_Read_HwAgCorrd_Val
# undef Rte_Read_HwAgCorrd_Val
#endif
#define Rte_Read_HwAgCorrd_Val(data) (*(data) = HwAgSysArbn_Ip_HwAgCorrd)

#ifdef Rte_Read_HwAgIdptSig_Val
# undef Rte_Read_HwAgIdptSig_Val
#endif
#define Rte_Read_HwAgIdptSig_Val(data) (*(data) = HwAgSysArbn_Ip_HwAgIdptSig)

#ifdef Rte_Read_HwAgSnsrls_Val
# undef Rte_Read_HwAgSnsrls_Val
#endif
#define Rte_Read_HwAgSnsrls_Val(data) (*(data) = HwAgSysArbn_Ip_HwAgSnsrls)

#ifdef Rte_Read_HwAgSnsrlsConf_Val
# undef Rte_Read_HwAgSnsrlsConf_Val
#endif
#define Rte_Read_HwAgSnsrlsConf_Val(data) (*(data) = HwAgSysArbn_Ip_HwAgSnsrlsConf)

#ifdef Rte_Read_HwTq_Val
# undef Rte_Read_HwTq_Val
#endif
#define Rte_Read_HwTq_Val(data) (*(data) = HwAgSysArbn_Ip_HwTq)

#ifdef Rte_Read_MotVelCrf_Val
# undef Rte_Read_MotVelCrf_Val
#endif
#define Rte_Read_MotVelCrf_Val(data) (*(data) = HwAgSysArbn_Ip_MotVelCrf)

#ifdef Rte_Read_MotVelVld_Logl
# undef Rte_Read_MotVelVld_Logl
#endif
#define Rte_Read_MotVelVld_Logl(data) (*(data) = HwAgSysArbn_Ip_MotVelVld)


/*** Output Stubs ***/

#ifdef Rte_Write_HwAgFinal_Val
# undef Rte_Write_HwAgFinal_Val
#endif
#define Rte_Write_HwAgFinal_Val(data) (HwAgSysArbn_Op_HwAgFinal = (data))

#ifdef Rte_Write_HwAgNotCorrd_Val
# undef Rte_Write_HwAgNotCorrd_Val
#endif
#define Rte_Write_HwAgNotCorrd_Val(data) (HwAgSysArbn_Op_HwAgNotCorrd = (data))

#ifdef Rte_Write_HwAgToSerlCom_Val
# undef Rte_Write_HwAgToSerlCom_Val
#endif
#define Rte_Write_HwAgToSerlCom_Val(data) (HwAgSysArbn_Op_HwAgToSerlCom = (data))

#ifdef Rte_Write_HwAgVldToSerlCom_Logl
# undef Rte_Write_HwAgVldToSerlCom_Logl
#endif
#define Rte_Write_HwAgVldToSerlCom_Logl(data) (HwAgSysArbn_Op_HwAgVldToSerlCom = (data))

#ifdef Rte_Write_HwVel_Val
# undef Rte_Write_HwVel_Val
#endif
#define Rte_Write_HwVel_Val(data) (HwAgSysArbn_Op_HwVel = (data))

#ifdef Rte_Write_HwVelToSerlCom_Val
# undef Rte_Write_HwVelToSerlCom_Val
#endif
#define Rte_Write_HwVelToSerlCom_Val(data) (HwAgSysArbn_Op_HwVelToSerlCom = (data))

#ifdef Rte_Write_PinionAg_Val
# undef Rte_Write_PinionAg_Val
#endif
#define Rte_Write_PinionAg_Val(data) (HwAgSysArbn_Op_PinionAg = (data))

#ifdef Rte_Write_PinionAgConf_Val
# undef Rte_Write_PinionAgConf_Val
#endif
#define Rte_Write_PinionAgConf_Val(data) (HwAgSysArbn_Op_PinionAgConf = (data))

#ifdef Rte_Write_PinionVel_Val
# undef Rte_Write_PinionVel_Val
#endif
#define Rte_Write_PinionVel_Val(data) (HwAgSysArbn_Op_PinionVel = (data))

#ifdef Rte_Write_PinionVelConf_Val
# undef Rte_Write_PinionVelConf_Val
#endif
#define Rte_Write_PinionVelConf_Val(data) (HwAgSysArbn_Op_PinionVelConf = (data))


/*** Calibration Stubs ***/

#ifdef Rte_Prm_HwAgSysArbnHwAgConf1Snsr_Val
# undef Rte_Prm_HwAgSysArbnHwAgConf1Snsr_Val
#endif
#define Rte_Prm_HwAgSysArbnHwAgConf1Snsr_Val() (HwAgSysArbn_Cal_HwAgSysArbnHwAgConf1Snsr)

#ifdef Rte_Prm_HwAgSysArbnHwAgConf2Snsr_Val
# undef Rte_Prm_HwAgSysArbnHwAgConf2Snsr_Val
#endif
#define Rte_Prm_HwAgSysArbnHwAgConf2Snsr_Val() (HwAgSysArbn_Cal_HwAgSysArbnHwAgConf2Snsr)

#ifdef Rte_Prm_HwAgSysArbnHwAgConfNoSnsr_Val
# undef Rte_Prm_HwAgSysArbnHwAgConfNoSnsr_Val
#endif
#define Rte_Prm_HwAgSysArbnHwAgConfNoSnsr_Val() (HwAgSysArbn_Cal_HwAgSysArbnHwAgConfNoSnsr)

#ifdef Rte_Prm_HwAgSysArbnHwAgCorrdCorrlnThd_Val
# undef Rte_Prm_HwAgSysArbnHwAgCorrdCorrlnThd_Val
#endif
#define Rte_Prm_HwAgSysArbnHwAgCorrdCorrlnThd_Val() (HwAgSysArbn_Cal_HwAgSysArbnHwAgCorrdCorrlnThd)

#ifdef Rte_Prm_HwAgSysArbnHwAgCorrlnFailDebStep_Val
# undef Rte_Prm_HwAgSysArbnHwAgCorrlnFailDebStep_Val
#endif
#define Rte_Prm_HwAgSysArbnHwAgCorrlnFailDebStep_Val() (HwAgSysArbn_Cal_HwAgSysArbnHwAgCorrlnFailDebStep)

#ifdef Rte_Prm_HwAgSysArbnHwAgCorrlnPassDebStep_Val
# undef Rte_Prm_HwAgSysArbnHwAgCorrlnPassDebStep_Val
#endif
#define Rte_Prm_HwAgSysArbnHwAgCorrlnPassDebStep_Val() (HwAgSysArbn_Cal_HwAgSysArbnHwAgCorrlnPassDebStep)

#ifdef Rte_Prm_HwAgSysArbnHwAgCorrlnRng_Val
# undef Rte_Prm_HwAgSysArbnHwAgCorrlnRng_Val
#endif
#define Rte_Prm_HwAgSysArbnHwAgCorrlnRng_Val() (HwAgSysArbn_Cal_HwAgSysArbnHwAgCorrlnRng)

#ifdef Rte_Prm_HwAgSysArbnHwAgIdptSigLim_Val
# undef Rte_Prm_HwAgSysArbnHwAgIdptSigLim_Val
#endif
#define Rte_Prm_HwAgSysArbnHwAgIdptSigLim_Val() (HwAgSysArbn_Cal_HwAgSysArbnHwAgIdptSigLim)

#ifdef Rte_Prm_HwAgSysArbnHwAgSlewRate_Val
# undef Rte_Prm_HwAgSysArbnHwAgSlewRate_Val
#endif
#define Rte_Prm_HwAgSysArbnHwAgSlewRate_Val() (HwAgSysArbn_Cal_HwAgSysArbnHwAgSlewRate)

#ifdef Rte_Prm_HwAgSysArbnHwAgSnsrlsCorrlnThd_Val
# undef Rte_Prm_HwAgSysArbnHwAgSnsrlsCorrlnThd_Val
#endif
#define Rte_Prm_HwAgSysArbnHwAgSnsrlsCorrlnThd_Val() (HwAgSysArbn_Cal_HwAgSysArbnHwAgSnsrlsCorrlnThd)

#ifdef Rte_Prm_HwAgSysArbnHwAgSnsrlsKineThd_Val
# undef Rte_Prm_HwAgSysArbnHwAgSnsrlsKineThd_Val
#endif
#define Rte_Prm_HwAgSysArbnHwAgSnsrlsKineThd_Val() (HwAgSysArbn_Cal_HwAgSysArbnHwAgSnsrlsKineThd)

#ifdef Rte_Prm_HwAgSysArbnHwAgToMotAgCorrlnElpdTiLim_Val
# undef Rte_Prm_HwAgSysArbnHwAgToMotAgCorrlnElpdTiLim_Val
#endif
#define Rte_Prm_HwAgSysArbnHwAgToMotAgCorrlnElpdTiLim_Val() (HwAgSysArbn_Cal_HwAgSysArbnHwAgToMotAgCorrlnElpdTiLim)

#ifdef Rte_Prm_HwAgSysArbnSerlComHwAgCorrdConf_Val
# undef Rte_Prm_HwAgSysArbnSerlComHwAgCorrdConf_Val
#endif
#define Rte_Prm_HwAgSysArbnSerlComHwAgCorrdConf_Val() (HwAgSysArbn_Cal_HwAgSysArbnSerlComHwAgCorrdConf)

#ifdef Rte_Prm_HwAgSysArbnSerlComHwAgSnsrlsConf_Val
# undef Rte_Prm_HwAgSysArbnSerlComHwAgSnsrlsConf_Val
#endif
#define Rte_Prm_HwAgSysArbnSerlComHwAgSnsrlsConf_Val() (HwAgSysArbn_Cal_HwAgSysArbnSerlComHwAgSnsrlsConf)

#ifdef Rte_Prm_HwAgSysArbnSlewRateTmr_Val
# undef Rte_Prm_HwAgSysArbnSlewRateTmr_Val
#endif
#define Rte_Prm_HwAgSysArbnSlewRateTmr_Val() (HwAgSysArbn_Cal_HwAgSysArbnSlewRateTmr)

#ifdef Rte_Prm_HwAgSysArbnTqSnsrVelFilFrq_Val
# undef Rte_Prm_HwAgSysArbnTqSnsrVelFilFrq_Val
#endif
#define Rte_Prm_HwAgSysArbnTqSnsrVelFilFrq_Val() (HwAgSysArbn_Cal_HwAgSysArbnTqSnsrVelFilFrq)

#ifdef Rte_Prm_SysGlbPrmSysKineRat_Val
# undef Rte_Prm_SysGlbPrmSysKineRat_Val
#endif
#define Rte_Prm_SysGlbPrmSysKineRat_Val() (HwAgSysArbn_Cal_SysGlbPrmSysKineRat)

#ifdef Rte_Prm_SysGlbPrmTorsBarStfn_Val
# undef Rte_Prm_SysGlbPrmTorsBarStfn_Val
#endif
#define Rte_Prm_SysGlbPrmTorsBarStfn_Val() (HwAgSysArbn_Cal_SysGlbPrmTorsBarStfn)


/*** PIM Stubs ***/

#ifdef Rte_Pim_HwAgKineFlt
# undef Rte_Pim_HwAgKineFlt
#endif
#define Rte_Pim_HwAgKineFlt() (&HwAgSysArbn_Pim_HwAgKineFlt)

#ifdef Rte_Pim_HwAgLtch
# undef Rte_Pim_HwAgLtch
#endif
#define Rte_Pim_HwAgLtch() (&HwAgSysArbn_Pim_HwAgLtch)

#ifdef Rte_Pim_HwAgPrev
# undef Rte_Pim_HwAgPrev
#endif
#define Rte_Pim_HwAgPrev() (&HwAgSysArbn_Pim_HwAgPrev)

#ifdef Rte_Pim_HwAgToMotAgCorrln
# undef Rte_Pim_HwAgToMotAgCorrln
#endif
#define Rte_Pim_HwAgToMotAgCorrln() (&HwAgSysArbn_Pim_HwAgToMotAgCorrln)

#ifdef Rte_Pim_HwAgToMotAgCorrlnDurnRefTmr
# undef Rte_Pim_HwAgToMotAgCorrlnDurnRefTmr
#endif
#define Rte_Pim_HwAgToMotAgCorrlnDurnRefTmr() (&HwAgSysArbn_Pim_HwAgToMotAgCorrlnDurnRefTmr)

#ifdef Rte_Pim_PrevHwAgNotCorrd
# undef Rte_Pim_PrevHwAgNotCorrd
#endif
#define Rte_Pim_PrevHwAgNotCorrd() (&HwAgSysArbn_Pim_PrevHwAgNotCorrd)

#ifdef Rte_Pim_PrevPinionAgConf
# undef Rte_Pim_PrevPinionAgConf
#endif
#define Rte_Pim_PrevPinionAgConf() (&HwAgSysArbn_Pim_PrevPinionAgConf)

#ifdef Rte_Pim_PrevSeldHwAg
# undef Rte_Pim_PrevSeldHwAg
#endif
#define Rte_Pim_PrevSeldHwAg() (&HwAgSysArbn_Pim_PrevSeldHwAg)

#ifdef Rte_Pim_PrevSrcSeln
# undef Rte_Pim_PrevSrcSeln
#endif
#define Rte_Pim_PrevSrcSeln() (&HwAgSysArbn_Pim_PrevSrcSeln)

#ifdef Rte_Pim_SeldHwAgConf
# undef Rte_Pim_SeldHwAgConf
#endif
#define Rte_Pim_SeldHwAgConf() (&HwAgSysArbn_Pim_SeldHwAgConf)

#ifdef Rte_Pim_SlewElpdRefTmr
# undef Rte_Pim_SlewElpdRefTmr
#endif
#define Rte_Pim_SlewElpdRefTmr() (&HwAgSysArbn_Pim_SlewElpdRefTmr)

#ifdef Rte_Pim_SlewSts
# undef Rte_Pim_SlewSts
#endif
#define Rte_Pim_SlewSts() (&HwAgSysArbn_Pim_SlewSts)

#ifdef Rte_Pim_TqSnsrAgPrev
# undef Rte_Pim_TqSnsrAgPrev
#endif
#define Rte_Pim_TqSnsrAgPrev() (&HwAgSysArbn_Pim_TqSnsrAgPrev)

#ifdef Rte_Pim_TqSnsrVelFil
# undef Rte_Pim_TqSnsrVelFil
#endif
#define Rte_Pim_TqSnsrVelFil() (&HwAgSysArbn_Pim_TqSnsrVelFil)


/*** Client Stub ***/

extern FUNC(void, AUTOMATIC) Rte_Stub(void);


#endif
