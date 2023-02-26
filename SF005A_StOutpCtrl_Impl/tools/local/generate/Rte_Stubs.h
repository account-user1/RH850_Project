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
extern VAR(boolean, AUTOMATIC) StOutpCtrl_Ip_DiagcStsCtrldShtDwnFltPrsnt;
extern VAR(float32, AUTOMATIC) StOutpCtrl_Ip_LoaRateLim;
extern VAR(float32, AUTOMATIC) StOutpCtrl_Ip_LoaSca;
extern VAR(boolean, AUTOMATIC) StOutpCtrl_Ip_MotTqTranlDampgCmpl;
extern VAR(float32, AUTOMATIC) StOutpCtrl_Ip_SysDiMotTqCmdSca;
extern VAR(float32, AUTOMATIC) StOutpCtrl_Ip_SysDiRampRate;
extern VAR(boolean, AUTOMATIC) StOutpCtrl_Ip_SysMotTqCmdRampRateDi;
extern VAR(float32, AUTOMATIC) StOutpCtrl_Ip_SysOperMotTqCmdSca;
extern VAR(float32, AUTOMATIC) StOutpCtrl_Ip_SysOperRampRate;
extern VAR(boolean, AUTOMATIC) StOutpCtrl_Ip_SysStFltOutpReqDi;
extern VAR(float32, AUTOMATIC) StOutpCtrl_Ip_VehStrtStopMotTqCmdSca;
extern VAR(float32, AUTOMATIC) StOutpCtrl_Ip_VehStrtStopRampRate;

/* Outputs */
extern VAR(float32, AUTOMATIC) StOutpCtrl_Op_SysMotTqCmdSca;
extern VAR(boolean, AUTOMATIC) StOutpCtrl_Op_SysStReqDi;

/* PIMs */
extern VAR(float32, AUTOMATIC) StOutpCtrl_Pim_dStOutpCtrlRateLim;
extern VAR(float32, AUTOMATIC) StOutpCtrl_Pim_dStOutpCtrlTarSca;
extern VAR(float32, AUTOMATIC) StOutpCtrl_Pim_StOutpCtrlPrevCmdSca;
extern VAR(uint8, AUTOMATIC) StOutpCtrl_Pim_StOutpCtrlPrevSrc;

/* Arguments and Returns */


/*** Input Stubs ***/

#ifdef Rte_Read_DiagcStsCtrldShtDwnFltPrsnt_Logl
# undef Rte_Read_DiagcStsCtrldShtDwnFltPrsnt_Logl
#endif
#define Rte_Read_DiagcStsCtrldShtDwnFltPrsnt_Logl(data) (*(data) = StOutpCtrl_Ip_DiagcStsCtrldShtDwnFltPrsnt)

#ifdef Rte_Read_LoaRateLim_Val
# undef Rte_Read_LoaRateLim_Val
#endif
#define Rte_Read_LoaRateLim_Val(data) (*(data) = StOutpCtrl_Ip_LoaRateLim)

#ifdef Rte_Read_LoaSca_Val
# undef Rte_Read_LoaSca_Val
#endif
#define Rte_Read_LoaSca_Val(data) (*(data) = StOutpCtrl_Ip_LoaSca)

#ifdef Rte_Read_MotTqTranlDampgCmpl_Logl
# undef Rte_Read_MotTqTranlDampgCmpl_Logl
#endif
#define Rte_Read_MotTqTranlDampgCmpl_Logl(data) (*(data) = StOutpCtrl_Ip_MotTqTranlDampgCmpl)

#ifdef Rte_Read_SysDiMotTqCmdSca_Val
# undef Rte_Read_SysDiMotTqCmdSca_Val
#endif
#define Rte_Read_SysDiMotTqCmdSca_Val(data) (*(data) = StOutpCtrl_Ip_SysDiMotTqCmdSca)

#ifdef Rte_Read_SysDiRampRate_Val
# undef Rte_Read_SysDiRampRate_Val
#endif
#define Rte_Read_SysDiRampRate_Val(data) (*(data) = StOutpCtrl_Ip_SysDiRampRate)

#ifdef Rte_Read_SysMotTqCmdRampRateDi_Logl
# undef Rte_Read_SysMotTqCmdRampRateDi_Logl
#endif
#define Rte_Read_SysMotTqCmdRampRateDi_Logl(data) (*(data) = StOutpCtrl_Ip_SysMotTqCmdRampRateDi)

#ifdef Rte_Read_SysOperMotTqCmdSca_Val
# undef Rte_Read_SysOperMotTqCmdSca_Val
#endif
#define Rte_Read_SysOperMotTqCmdSca_Val(data) (*(data) = StOutpCtrl_Ip_SysOperMotTqCmdSca)

#ifdef Rte_Read_SysOperRampRate_Val
# undef Rte_Read_SysOperRampRate_Val
#endif
#define Rte_Read_SysOperRampRate_Val(data) (*(data) = StOutpCtrl_Ip_SysOperRampRate)

#ifdef Rte_Read_SysStFltOutpReqDi_Logl
# undef Rte_Read_SysStFltOutpReqDi_Logl
#endif
#define Rte_Read_SysStFltOutpReqDi_Logl(data) (*(data) = StOutpCtrl_Ip_SysStFltOutpReqDi)

#ifdef Rte_Read_VehStrtStopMotTqCmdSca_Val
# undef Rte_Read_VehStrtStopMotTqCmdSca_Val
#endif
#define Rte_Read_VehStrtStopMotTqCmdSca_Val(data) (*(data) = StOutpCtrl_Ip_VehStrtStopMotTqCmdSca)

#ifdef Rte_Read_VehStrtStopRampRate_Val
# undef Rte_Read_VehStrtStopRampRate_Val
#endif
#define Rte_Read_VehStrtStopRampRate_Val(data) (*(data) = StOutpCtrl_Ip_VehStrtStopRampRate)


/*** Output Stubs ***/

#ifdef Rte_Write_SysMotTqCmdSca_Val
# undef Rte_Write_SysMotTqCmdSca_Val
#endif
#define Rte_Write_SysMotTqCmdSca_Val(data) (StOutpCtrl_Op_SysMotTqCmdSca = (data))

#ifdef Rte_Write_SysStReqDi_Logl
# undef Rte_Write_SysStReqDi_Logl
#endif
#define Rte_Write_SysStReqDi_Logl(data) (StOutpCtrl_Op_SysStReqDi = (data))


/*** PIM Stubs ***/

#ifdef Rte_Pim_dStOutpCtrlRateLim
# undef Rte_Pim_dStOutpCtrlRateLim
#endif
#define Rte_Pim_dStOutpCtrlRateLim() (&StOutpCtrl_Pim_dStOutpCtrlRateLim)

#ifdef Rte_Pim_dStOutpCtrlTarSca
# undef Rte_Pim_dStOutpCtrlTarSca
#endif
#define Rte_Pim_dStOutpCtrlTarSca() (&StOutpCtrl_Pim_dStOutpCtrlTarSca)

#ifdef Rte_Pim_StOutpCtrlPrevCmdSca
# undef Rte_Pim_StOutpCtrlPrevCmdSca
#endif
#define Rte_Pim_StOutpCtrlPrevCmdSca() (&StOutpCtrl_Pim_StOutpCtrlPrevCmdSca)

#ifdef Rte_Pim_StOutpCtrlPrevSrc
# undef Rte_Pim_StOutpCtrlPrevSrc
#endif
#define Rte_Pim_StOutpCtrlPrevSrc() (&StOutpCtrl_Pim_StOutpCtrlPrevSrc)


/*** Client Stub ***/

extern FUNC(void, AUTOMATIC) Rte_Stub(void);


#endif
