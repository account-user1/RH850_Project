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

/* PIMs */
extern VAR(uint32, AUTOMATIC) VrfyCritReg_Pim_MCalWrVrfyRegFltInfoStorg;
extern VAR(uint32, AUTOMATIC) VrfyCritReg_Pim_dVrfyCritRegCritRegActVal;
extern VAR(uint32, AUTOMATIC) VrfyCritReg_Pim_dVrfyCritRegCritRegAdr;
extern VAR(uint32, AUTOMATIC) VrfyCritReg_Pim_dVrfyCritRegCritRegDesVal;
extern VAR(uint32, AUTOMATIC) VrfyCritReg_Pim_dVrfyCritRegSysCritRegActVal;
extern VAR(uint32, AUTOMATIC) VrfyCritReg_Pim_dVrfyCritRegSysCritRegAdr;
extern VAR(uint32, AUTOMATIC) VrfyCritReg_Pim_dVrfyCritRegSysCritRegDesVal;
extern VAR(uint32, AUTOMATIC) VrfyCritReg_Pim_MCalReadVrfyCritRegFltInfo;

/* Arguments and Returns */
extern VAR(uint8, AUTOMATIC) VrfyCritReg_Srv_MCalWrVrfyRegFltInfoStorg_GetErrorStatus_RequestResultPtr;
extern VAR(Std_ReturnType, AUTOMATIC) VrfyCritReg_Srv_MCalWrVrfyRegFltInfoStorg_GetErrorStatus_Return;
extern VAR(boolean, AUTOMATIC) VrfyCritReg_Srv_MCalWrVrfyRegFltInfoStorg_SetRamBlockStatus_BlockChanged;
extern VAR(Std_ReturnType, AUTOMATIC) VrfyCritReg_Srv_MCalWrVrfyRegFltInfoStorg_SetRamBlockStatus_Return;
extern VAR(NtcNr1, AUTOMATIC) VrfyCritReg_Srv_SetNtcSts_NtcNr;
extern VAR(uint8, AUTOMATIC) VrfyCritReg_Srv_SetNtcSts_NtcStInfo;
extern VAR(NtcSts1, AUTOMATIC) VrfyCritReg_Srv_SetNtcSts_NtcSts;
extern VAR(uint16, AUTOMATIC) VrfyCritReg_Srv_SetNtcSts_DebStep;
extern VAR(Std_ReturnType, AUTOMATIC) VrfyCritReg_Srv_SetNtcSts_Return;
extern VAR(uint8, AUTOMATIC) VrfyCritReg_Cli_MCalReadVrfyFailFltInfo_PrphlId;
extern VAR(uint16, AUTOMATIC) VrfyCritReg_Cli_MCalReadVrfyFailFltInfo_ErrId;


/*** PIM Stubs ***/

#ifdef Rte_Pim_MCalWrVrfyRegFltInfoStorg
# undef Rte_Pim_MCalWrVrfyRegFltInfoStorg
#endif
#define Rte_Pim_MCalWrVrfyRegFltInfoStorg() (&VrfyCritReg_Pim_MCalWrVrfyRegFltInfoStorg)

#ifdef Rte_Pim_dVrfyCritRegCritRegActVal
# undef Rte_Pim_dVrfyCritRegCritRegActVal
#endif
#define Rte_Pim_dVrfyCritRegCritRegActVal() (&VrfyCritReg_Pim_dVrfyCritRegCritRegActVal)

#ifdef Rte_Pim_dVrfyCritRegCritRegAdr
# undef Rte_Pim_dVrfyCritRegCritRegAdr
#endif
#define Rte_Pim_dVrfyCritRegCritRegAdr() (&VrfyCritReg_Pim_dVrfyCritRegCritRegAdr)

#ifdef Rte_Pim_dVrfyCritRegCritRegDesVal
# undef Rte_Pim_dVrfyCritRegCritRegDesVal
#endif
#define Rte_Pim_dVrfyCritRegCritRegDesVal() (&VrfyCritReg_Pim_dVrfyCritRegCritRegDesVal)

#ifdef Rte_Pim_dVrfyCritRegSysCritRegActVal
# undef Rte_Pim_dVrfyCritRegSysCritRegActVal
#endif
#define Rte_Pim_dVrfyCritRegSysCritRegActVal() (&VrfyCritReg_Pim_dVrfyCritRegSysCritRegActVal)

#ifdef Rte_Pim_dVrfyCritRegSysCritRegAdr
# undef Rte_Pim_dVrfyCritRegSysCritRegAdr
#endif
#define Rte_Pim_dVrfyCritRegSysCritRegAdr() (&VrfyCritReg_Pim_dVrfyCritRegSysCritRegAdr)

#ifdef Rte_Pim_dVrfyCritRegSysCritRegDesVal
# undef Rte_Pim_dVrfyCritRegSysCritRegDesVal
#endif
#define Rte_Pim_dVrfyCritRegSysCritRegDesVal() (&VrfyCritReg_Pim_dVrfyCritRegSysCritRegDesVal)

#ifdef Rte_Pim_MCalReadVrfyCritRegFltInfo
# undef Rte_Pim_MCalReadVrfyCritRegFltInfo
#endif
#define Rte_Pim_MCalReadVrfyCritRegFltInfo() (&VrfyCritReg_Pim_MCalReadVrfyCritRegFltInfo)


/*** Client Stub ***/

extern FUNC(void, AUTOMATIC) Rte_Stub(void);


#endif
