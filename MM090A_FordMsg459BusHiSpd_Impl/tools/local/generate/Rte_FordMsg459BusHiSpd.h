/**********************************************************************************************************************
 *  COPYRIGHT
 *  -------------------------------------------------------------------------------------------------------------------
 *
 *                This software is copyright protected and proprietary to Vector Informatik GmbH.
 *                Vector Informatik GmbH grants to you only those rights as set out in the license conditions.
 *                All other rights remain with Vector Informatik GmbH.
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  Rte_FordMsg459BusHiSpd.h
 *        Config:  C:/Users/NZ5334/Documents/Synergy/Working/ses_dev_ea4/MM090A_FordMsg459BusHiSpd_Impl/tools/Component.dpa
 *     SW-C Type:  FordMsg459BusHiSpd
 *  Generated at:  Sat May  5 14:24:26 2018
 *
 *     Generator:  MICROSAR RTE Generator Version 4.13.0
 *                 RTE Core Version 1.13.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <FordMsg459BusHiSpd> (Contract Phase)
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_FORDMSG459BUSHISPD_H
# define _RTE_FORDMSG459BUSHISPD_H

# ifdef RTE_APPLICATION_HEADER_FILE
#  error Multiple application header files included.
# endif
# define RTE_APPLICATION_HEADER_FILE
# ifndef RTE_PTR2ARRAYBASETYPE_PASSING
#  define RTE_PTR2ARRAYBASETYPE_PASSING
# endif

# ifdef __cplusplus
extern "C"
{
# endif /* __cplusplus */

/* include files */

# include "Rte_FordMsg459BusHiSpd_Type.h"
# include "Rte_DataHandleType.h"


/**********************************************************************************************************************
 * Component Data Structures and Port Data Structures
 *********************************************************************************************************************/

struct Rte_CDS_FordMsg459BusHiSpd
{
  /* PIM Handles section */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_ClrDiagcFlgProxyPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FirstTranVldFlg; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehMsg459Miss; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehMsg459MissTmr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehMsg459RxdTmr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehTrlrAidAcqStsPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehTrlrAidGuidcRevsStsPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint16, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehTrlrAidHitchAgPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint16, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehTrlrAidHitchAgRatePrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehTrlrAidIdnValPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehTrlrAidTrackStFaildTmr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehTrlrAidTrackStPassdTmr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehTrlrAidTrackStPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehTrlrBallToAxlePrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehTrlrHitchAgFaildTmr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehTrlrHitchAgPassdTmr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehTrlrHitchAgRateFaildTmr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehTrlrHitchAgRatePassdTmr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehTrlrHitchAgVldPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehTrlrHitchRateVldPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehTrlrTarVldPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehTrlrTrackStVldPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_TrlrAidStsThreePrsntIntPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  /* Vendor specific section */
};

# define RTE_START_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern CONSTP2CONST(struct Rte_CDS_FordMsg459BusHiSpd, RTE_CONST, RTE_CONST) Rte_Inst_FordMsg459BusHiSpd; /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

typedef P2CONST(struct Rte_CDS_FordMsg459BusHiSpd, TYPEDEF, RTE_CONST) Rte_Instance;


/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

# define Rte_InitValue_ClrDiagcFlgProxy_Val (0U)
# define Rte_InitValue_FordCanDtcInhb_Logl (TRUE)
# define Rte_InitValue_FordEpsLifeCycMod_Val (0U)
# define Rte_InitValue_FordTrlrBackupAssiEnad_Logl (FALSE)
# define Rte_InitValue_FordVehTrlrAidAcqSts_Val (0U)
# define Rte_InitValue_FordVehTrlrAidHitchAg_Val (720U)
# define Rte_InitValue_FordVehTrlrAidHitchAgRate_Val (400U)
# define Rte_InitValue_FordVehTrlrAidIdnVal_Val (0U)
# define Rte_InitValue_FordVehTrlrAidTrakgSt_Val (0U)
# define Rte_InitValue_FordVehTrlrAidTrakgStVld_Logl (FALSE)
# define Rte_InitValue_FordVehTrlrAidTrlrRvsGuidcSts_Val (0U)
# define Rte_InitValue_FordVehTrlrBallToAxle_Val (255U)
# define Rte_InitValue_FordVehTrlrHitchAgVld_Logl (FALSE)
# define Rte_InitValue_FordVehTrlrHitchRateVld_Logl (FALSE)
# define Rte_InitValue_FordVehTrlrTarVld_Logl (FALSE)
# define Rte_InitValue_Ford_HitchToVehAxle_L_Calc_Ford_HitchToVehAxle_L_Calc (255U)
# define Rte_InitValue_Ford_TrlrAidTrgtId_No_Actl_Ford_TrlrAidTrgtId_No_Actl (0U)
# define Rte_InitValue_Ford_TrlrAid_An3_Actl_Ford_TrlrAid_An3_Actl (720U)
# define Rte_InitValue_Ford_TrlrAid_AnRate2_Actl_Ford_TrlrAid_AnRate2_Actl (400U)
# define Rte_InitValue_Ford_TrlrAid_D2_Stat_Ford_TrlrAid_D2_Stat (0U)
# define Rte_InitValue_Ford_TrlrRvrse_D_Stat_Ford_TrlrRvrse_D_Stat (0U)
# define Rte_InitValue_Ford_TrlrTrgtAcquire_D_Stat_Ford_TrlrTrgtAcquire_D_Stat (0U)
# define Rte_InitValue_TrlrAidStsThreePrsntInt_Logl (FALSE)


# define RTE_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordMsg459BusHiSpd_ClrDiagcFlgProxy_Val(P2VAR(uint8, AUTOMATIC, RTE_FORDMSG459BUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordMsg459BusHiSpd_FordCanDtcInhb_Logl(P2VAR(boolean, AUTOMATIC, RTE_FORDMSG459BUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordMsg459BusHiSpd_FordEpsLifeCycMod_Val(P2VAR(uint8, AUTOMATIC, RTE_FORDMSG459BUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordMsg459BusHiSpd_FordTrlrBackupAssiEnad_Logl(P2VAR(boolean, AUTOMATIC, RTE_FORDMSG459BUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordMsg459BusHiSpd_Ford_HitchToVehAxle_L_Calc_Ford_HitchToVehAxle_L_Calc(P2VAR(Ford_HitchToVehAxle_L_Calc, AUTOMATIC, RTE_FORDMSG459BUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordMsg459BusHiSpd_Ford_TrlrAidTrgtId_No_Actl_Ford_TrlrAidTrgtId_No_Actl(P2VAR(Ford_TrlrAidTrgtId_No_Actl, AUTOMATIC, RTE_FORDMSG459BUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordMsg459BusHiSpd_Ford_TrlrAid_An3_Actl_Ford_TrlrAid_An3_Actl(P2VAR(Ford_TrlrAid_An3_Actl, AUTOMATIC, RTE_FORDMSG459BUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordMsg459BusHiSpd_Ford_TrlrAid_AnRate2_Actl_Ford_TrlrAid_AnRate2_Actl(P2VAR(Ford_TrlrAid_AnRate2_Actl, AUTOMATIC, RTE_FORDMSG459BUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordMsg459BusHiSpd_Ford_TrlrAid_D2_Stat_Ford_TrlrAid_D2_Stat(P2VAR(Ford_TrlrAid_D2_Stat, AUTOMATIC, RTE_FORDMSG459BUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordMsg459BusHiSpd_Ford_TrlrRvrse_D_Stat_Ford_TrlrRvrse_D_Stat(P2VAR(Ford_TrlrRvrse_D_Stat, AUTOMATIC, RTE_FORDMSG459BUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordMsg459BusHiSpd_Ford_TrlrTrgtAcquire_D_Stat_Ford_TrlrTrgtAcquire_D_Stat(P2VAR(Ford_TrlrTrgtAcquire_D_Stat, AUTOMATIC, RTE_FORDMSG459BUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_FordMsg459BusHiSpd_FordVehTrlrAidAcqSts_Val(uint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_FordMsg459BusHiSpd_FordVehTrlrAidHitchAg_Val(uint16 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_FordMsg459BusHiSpd_FordVehTrlrAidHitchAgRate_Val(uint16 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_FordMsg459BusHiSpd_FordVehTrlrAidIdnVal_Val(uint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_FordMsg459BusHiSpd_FordVehTrlrAidTrakgSt_Val(uint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_FordMsg459BusHiSpd_FordVehTrlrAidTrakgStVld_Logl(boolean data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_FordMsg459BusHiSpd_FordVehTrlrAidTrlrRvsGuidcSts_Val(uint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_FordMsg459BusHiSpd_FordVehTrlrBallToAxle_Val(uint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_FordMsg459BusHiSpd_FordVehTrlrHitchAgVld_Logl(boolean data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_FordMsg459BusHiSpd_FordVehTrlrHitchRateVld_Logl(boolean data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_FordMsg459BusHiSpd_FordVehTrlrTarVld_Logl(boolean data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_FordMsg459BusHiSpd_TrlrAidStsThreePrsntInt_Logl(boolean data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_FordMsg459BusHiSpd_GetRefTmr100MicroSec32bit_Oper(P2VAR(uint32, AUTOMATIC, RTE_FORDMSG459BUSHISPD_APPL_VAR) RefTmr_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_FordMsg459BusHiSpd_GetTiSpan100MicroSec32bit_Oper(uint32 RefTmr_Arg, P2VAR(uint32, AUTOMATIC, RTE_FORDMSG459BUSHISPD_APPL_VAR) TiSpan_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_FordMsg459BusHiSpd_SetNtcSts_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_FordMsg459BusHiSpd_FordMsg459BusHiSpdDiagMsgMissTmrThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_FordMsg459BusHiSpd_FordMsg459BusHiSpdHitchAgInvldFaildThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_FordMsg459BusHiSpd_FordMsg459BusHiSpdHitchAgInvldPassdThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_FordMsg459BusHiSpd_FordMsg459BusHiSpdHitchAgRateInvldFaildThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_FordMsg459BusHiSpd_FordMsg459BusHiSpdHitchAgRateInvldPassdThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_FordMsg459BusHiSpd_FordMsg459BusHiSpdPrsntFlgMsgMissTmrThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_FordMsg459BusHiSpd_FordMsg459BusHiSpdRcvrDiagMsgMissTmrThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_FordMsg459BusHiSpd_FordMsg459BusHiSpdRcvrPrsntFlgTmrThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_FordMsg459BusHiSpd_FordMsg459BusHiSpdTrackStInvldFaildThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_FordMsg459BusHiSpd_FordMsg459BusHiSpdTrackStInvldPassdThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_FordMsg459BusHiSpd_FordMsg459BusHiSpdTrlrHitchAgVldInvldMsgThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_FordMsg459BusHiSpd_FordMsg459BusHiSpdTrlrHitchAgVldMissMsgThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_FordMsg459BusHiSpd_FordMsg459BusHiSpdTrlrHitchRateVldInvldMsgThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_FordMsg459BusHiSpd_FordMsg459BusHiSpdTrlrHitchRateVldMissMsgThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_FordMsg459BusHiSpd_FordMsg459BusHiSpdTrlrRcvrHitchAgVldThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_FordMsg459BusHiSpd_FordMsg459BusHiSpdTrlrRcvrHitchRateVldThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_FordMsg459BusHiSpd_FordMsg459BusHiSpdTrlrRcvrTarVldThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_FordMsg459BusHiSpd_FordMsg459BusHiSpdTrlrRcvrTrackStVldThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_FordMsg459BusHiSpd_FordMsg459BusHiSpdTrlrTarVldMissMsgThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_FordMsg459BusHiSpd_FordMsg459BusHiSpdTrlrTrackStVldInvldMsgThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_FordMsg459BusHiSpd_FordMsg459BusHiSpdTrlrTrackStVldMissMsgThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */



/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Read_ClrDiagcFlgProxy_Val Rte_Read_FordMsg459BusHiSpd_ClrDiagcFlgProxy_Val
# define Rte_Read_FordCanDtcInhb_Logl Rte_Read_FordMsg459BusHiSpd_FordCanDtcInhb_Logl
# define Rte_Read_FordEpsLifeCycMod_Val Rte_Read_FordMsg459BusHiSpd_FordEpsLifeCycMod_Val
# define Rte_Read_FordTrlrBackupAssiEnad_Logl Rte_Read_FordMsg459BusHiSpd_FordTrlrBackupAssiEnad_Logl
# define Rte_Read_Ford_HitchToVehAxle_L_Calc_Ford_HitchToVehAxle_L_Calc Rte_Read_FordMsg459BusHiSpd_Ford_HitchToVehAxle_L_Calc_Ford_HitchToVehAxle_L_Calc
# define Rte_Read_Ford_TrlrAidTrgtId_No_Actl_Ford_TrlrAidTrgtId_No_Actl Rte_Read_FordMsg459BusHiSpd_Ford_TrlrAidTrgtId_No_Actl_Ford_TrlrAidTrgtId_No_Actl
# define Rte_Read_Ford_TrlrAid_An3_Actl_Ford_TrlrAid_An3_Actl Rte_Read_FordMsg459BusHiSpd_Ford_TrlrAid_An3_Actl_Ford_TrlrAid_An3_Actl
# define Rte_Read_Ford_TrlrAid_AnRate2_Actl_Ford_TrlrAid_AnRate2_Actl Rte_Read_FordMsg459BusHiSpd_Ford_TrlrAid_AnRate2_Actl_Ford_TrlrAid_AnRate2_Actl
# define Rte_Read_Ford_TrlrAid_D2_Stat_Ford_TrlrAid_D2_Stat Rte_Read_FordMsg459BusHiSpd_Ford_TrlrAid_D2_Stat_Ford_TrlrAid_D2_Stat
# define Rte_Read_Ford_TrlrRvrse_D_Stat_Ford_TrlrRvrse_D_Stat Rte_Read_FordMsg459BusHiSpd_Ford_TrlrRvrse_D_Stat_Ford_TrlrRvrse_D_Stat
# define Rte_Read_Ford_TrlrTrgtAcquire_D_Stat_Ford_TrlrTrgtAcquire_D_Stat Rte_Read_FordMsg459BusHiSpd_Ford_TrlrTrgtAcquire_D_Stat_Ford_TrlrTrgtAcquire_D_Stat


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Write_FordVehTrlrAidAcqSts_Val Rte_Write_FordMsg459BusHiSpd_FordVehTrlrAidAcqSts_Val
# define Rte_Write_FordVehTrlrAidHitchAg_Val Rte_Write_FordMsg459BusHiSpd_FordVehTrlrAidHitchAg_Val
# define Rte_Write_FordVehTrlrAidHitchAgRate_Val Rte_Write_FordMsg459BusHiSpd_FordVehTrlrAidHitchAgRate_Val
# define Rte_Write_FordVehTrlrAidIdnVal_Val Rte_Write_FordMsg459BusHiSpd_FordVehTrlrAidIdnVal_Val
# define Rte_Write_FordVehTrlrAidTrakgSt_Val Rte_Write_FordMsg459BusHiSpd_FordVehTrlrAidTrakgSt_Val
# define Rte_Write_FordVehTrlrAidTrakgStVld_Logl Rte_Write_FordMsg459BusHiSpd_FordVehTrlrAidTrakgStVld_Logl
# define Rte_Write_FordVehTrlrAidTrlrRvsGuidcSts_Val Rte_Write_FordMsg459BusHiSpd_FordVehTrlrAidTrlrRvsGuidcSts_Val
# define Rte_Write_FordVehTrlrBallToAxle_Val Rte_Write_FordMsg459BusHiSpd_FordVehTrlrBallToAxle_Val
# define Rte_Write_FordVehTrlrHitchAgVld_Logl Rte_Write_FordMsg459BusHiSpd_FordVehTrlrHitchAgVld_Logl
# define Rte_Write_FordVehTrlrHitchRateVld_Logl Rte_Write_FordMsg459BusHiSpd_FordVehTrlrHitchRateVld_Logl
# define Rte_Write_FordVehTrlrTarVld_Logl Rte_Write_FordMsg459BusHiSpd_FordVehTrlrTarVld_Logl
# define Rte_Write_TrlrAidStsThreePrsntInt_Logl Rte_Write_FordMsg459BusHiSpd_TrlrAidStsThreePrsntInt_Logl


/**********************************************************************************************************************
 * Rte_Call_<p>_<o> (C/S invocation)
 *********************************************************************************************************************/
# define Rte_Call_GetRefTmr100MicroSec32bit_Oper Rte_Call_FordMsg459BusHiSpd_GetRefTmr100MicroSec32bit_Oper
# define Rte_Call_GetTiSpan100MicroSec32bit_Oper Rte_Call_FordMsg459BusHiSpd_GetTiSpan100MicroSec32bit_Oper
# define Rte_Call_SetNtcSts_Oper Rte_Call_FordMsg459BusHiSpd_SetNtcSts_Oper


/**********************************************************************************************************************
 * Rte_Prm (Calibration component calibration parameters)
 *********************************************************************************************************************/

# define Rte_Prm_FordMsg459BusHiSpdDiagMsgMissTmrThd_Val Rte_Prm_FordMsg459BusHiSpd_FordMsg459BusHiSpdDiagMsgMissTmrThd_Val

# define Rte_Prm_FordMsg459BusHiSpdHitchAgInvldFaildThd_Val Rte_Prm_FordMsg459BusHiSpd_FordMsg459BusHiSpdHitchAgInvldFaildThd_Val

# define Rte_Prm_FordMsg459BusHiSpdHitchAgInvldPassdThd_Val Rte_Prm_FordMsg459BusHiSpd_FordMsg459BusHiSpdHitchAgInvldPassdThd_Val

# define Rte_Prm_FordMsg459BusHiSpdHitchAgRateInvldFaildThd_Val Rte_Prm_FordMsg459BusHiSpd_FordMsg459BusHiSpdHitchAgRateInvldFaildThd_Val

# define Rte_Prm_FordMsg459BusHiSpdHitchAgRateInvldPassdThd_Val Rte_Prm_FordMsg459BusHiSpd_FordMsg459BusHiSpdHitchAgRateInvldPassdThd_Val

# define Rte_Prm_FordMsg459BusHiSpdPrsntFlgMsgMissTmrThd_Val Rte_Prm_FordMsg459BusHiSpd_FordMsg459BusHiSpdPrsntFlgMsgMissTmrThd_Val

# define Rte_Prm_FordMsg459BusHiSpdRcvrDiagMsgMissTmrThd_Val Rte_Prm_FordMsg459BusHiSpd_FordMsg459BusHiSpdRcvrDiagMsgMissTmrThd_Val

# define Rte_Prm_FordMsg459BusHiSpdRcvrPrsntFlgTmrThd_Val Rte_Prm_FordMsg459BusHiSpd_FordMsg459BusHiSpdRcvrPrsntFlgTmrThd_Val

# define Rte_Prm_FordMsg459BusHiSpdTrackStInvldFaildThd_Val Rte_Prm_FordMsg459BusHiSpd_FordMsg459BusHiSpdTrackStInvldFaildThd_Val

# define Rte_Prm_FordMsg459BusHiSpdTrackStInvldPassdThd_Val Rte_Prm_FordMsg459BusHiSpd_FordMsg459BusHiSpdTrackStInvldPassdThd_Val

# define Rte_Prm_FordMsg459BusHiSpdTrlrHitchAgVldInvldMsgThd_Val Rte_Prm_FordMsg459BusHiSpd_FordMsg459BusHiSpdTrlrHitchAgVldInvldMsgThd_Val

# define Rte_Prm_FordMsg459BusHiSpdTrlrHitchAgVldMissMsgThd_Val Rte_Prm_FordMsg459BusHiSpd_FordMsg459BusHiSpdTrlrHitchAgVldMissMsgThd_Val

# define Rte_Prm_FordMsg459BusHiSpdTrlrHitchRateVldInvldMsgThd_Val Rte_Prm_FordMsg459BusHiSpd_FordMsg459BusHiSpdTrlrHitchRateVldInvldMsgThd_Val

# define Rte_Prm_FordMsg459BusHiSpdTrlrHitchRateVldMissMsgThd_Val Rte_Prm_FordMsg459BusHiSpd_FordMsg459BusHiSpdTrlrHitchRateVldMissMsgThd_Val

# define Rte_Prm_FordMsg459BusHiSpdTrlrRcvrHitchAgVldThd_Val Rte_Prm_FordMsg459BusHiSpd_FordMsg459BusHiSpdTrlrRcvrHitchAgVldThd_Val

# define Rte_Prm_FordMsg459BusHiSpdTrlrRcvrHitchRateVldThd_Val Rte_Prm_FordMsg459BusHiSpd_FordMsg459BusHiSpdTrlrRcvrHitchRateVldThd_Val

# define Rte_Prm_FordMsg459BusHiSpdTrlrRcvrTarVldThd_Val Rte_Prm_FordMsg459BusHiSpd_FordMsg459BusHiSpdTrlrRcvrTarVldThd_Val

# define Rte_Prm_FordMsg459BusHiSpdTrlrRcvrTrackStVldThd_Val Rte_Prm_FordMsg459BusHiSpd_FordMsg459BusHiSpdTrlrRcvrTrackStVldThd_Val

# define Rte_Prm_FordMsg459BusHiSpdTrlrTarVldMissMsgThd_Val Rte_Prm_FordMsg459BusHiSpd_FordMsg459BusHiSpdTrlrTarVldMissMsgThd_Val

# define Rte_Prm_FordMsg459BusHiSpdTrlrTrackStVldInvldMsgThd_Val Rte_Prm_FordMsg459BusHiSpd_FordMsg459BusHiSpdTrlrTrackStVldInvldMsgThd_Val

# define Rte_Prm_FordMsg459BusHiSpdTrlrTrackStVldMissMsgThd_Val Rte_Prm_FordMsg459BusHiSpd_FordMsg459BusHiSpdTrlrTrackStVldMissMsgThd_Val

/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Rte_Pim (Per-Instance Memory)
 *********************************************************************************************************************/

# define Rte_Pim_FordVehMsg459MissTmr() (Rte_Inst_FordMsg459BusHiSpd->Pim_FordVehMsg459MissTmr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FordVehMsg459RxdTmr() (Rte_Inst_FordMsg459BusHiSpd->Pim_FordVehMsg459RxdTmr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FordVehTrlrAidTrackStFaildTmr() (Rte_Inst_FordMsg459BusHiSpd->Pim_FordVehTrlrAidTrackStFaildTmr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FordVehTrlrAidTrackStPassdTmr() (Rte_Inst_FordMsg459BusHiSpd->Pim_FordVehTrlrAidTrackStPassdTmr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FordVehTrlrHitchAgFaildTmr() (Rte_Inst_FordMsg459BusHiSpd->Pim_FordVehTrlrHitchAgFaildTmr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FordVehTrlrHitchAgPassdTmr() (Rte_Inst_FordMsg459BusHiSpd->Pim_FordVehTrlrHitchAgPassdTmr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FordVehTrlrHitchAgRateFaildTmr() (Rte_Inst_FordMsg459BusHiSpd->Pim_FordVehTrlrHitchAgRateFaildTmr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FordVehTrlrHitchAgRatePassdTmr() (Rte_Inst_FordMsg459BusHiSpd->Pim_FordVehTrlrHitchAgRatePassdTmr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FordVehTrlrAidHitchAgPrev() (Rte_Inst_FordMsg459BusHiSpd->Pim_FordVehTrlrAidHitchAgPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FordVehTrlrAidHitchAgRatePrev() (Rte_Inst_FordMsg459BusHiSpd->Pim_FordVehTrlrAidHitchAgRatePrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_ClrDiagcFlgProxyPrev() (Rte_Inst_FordMsg459BusHiSpd->Pim_ClrDiagcFlgProxyPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FordVehTrlrAidAcqStsPrev() (Rte_Inst_FordMsg459BusHiSpd->Pim_FordVehTrlrAidAcqStsPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FordVehTrlrAidGuidcRevsStsPrev() (Rte_Inst_FordMsg459BusHiSpd->Pim_FordVehTrlrAidGuidcRevsStsPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FordVehTrlrAidIdnValPrev() (Rte_Inst_FordMsg459BusHiSpd->Pim_FordVehTrlrAidIdnValPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FordVehTrlrAidTrackStPrev() (Rte_Inst_FordMsg459BusHiSpd->Pim_FordVehTrlrAidTrackStPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FordVehTrlrBallToAxlePrev() (Rte_Inst_FordMsg459BusHiSpd->Pim_FordVehTrlrBallToAxlePrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FirstTranVldFlg() (Rte_Inst_FordMsg459BusHiSpd->Pim_FirstTranVldFlg) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FordVehMsg459Miss() (Rte_Inst_FordMsg459BusHiSpd->Pim_FordVehMsg459Miss) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FordVehTrlrHitchAgVldPrev() (Rte_Inst_FordMsg459BusHiSpd->Pim_FordVehTrlrHitchAgVldPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FordVehTrlrHitchRateVldPrev() (Rte_Inst_FordMsg459BusHiSpd->Pim_FordVehTrlrHitchRateVldPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FordVehTrlrTarVldPrev() (Rte_Inst_FordMsg459BusHiSpd->Pim_FordVehTrlrTarVldPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FordVehTrlrTrackStVldPrev() (Rte_Inst_FordMsg459BusHiSpd->Pim_FordVehTrlrTrackStVldPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_TrlrAidStsThreePrsntIntPrev() (Rte_Inst_FordMsg459BusHiSpd->Pim_TrlrAidStsThreePrsntIntPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */




/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   uint32 *Rte_Pim_FordVehMsg459MissTmr(void)
 *   uint32 *Rte_Pim_FordVehMsg459RxdTmr(void)
 *   uint32 *Rte_Pim_FordVehTrlrAidTrackStFaildTmr(void)
 *   uint32 *Rte_Pim_FordVehTrlrAidTrackStPassdTmr(void)
 *   uint32 *Rte_Pim_FordVehTrlrHitchAgFaildTmr(void)
 *   uint32 *Rte_Pim_FordVehTrlrHitchAgPassdTmr(void)
 *   uint32 *Rte_Pim_FordVehTrlrHitchAgRateFaildTmr(void)
 *   uint32 *Rte_Pim_FordVehTrlrHitchAgRatePassdTmr(void)
 *   uint16 *Rte_Pim_FordVehTrlrAidHitchAgPrev(void)
 *   uint16 *Rte_Pim_FordVehTrlrAidHitchAgRatePrev(void)
 *   uint8 *Rte_Pim_ClrDiagcFlgProxyPrev(void)
 *   uint8 *Rte_Pim_FordVehTrlrAidAcqStsPrev(void)
 *   uint8 *Rte_Pim_FordVehTrlrAidGuidcRevsStsPrev(void)
 *   uint8 *Rte_Pim_FordVehTrlrAidIdnValPrev(void)
 *   uint8 *Rte_Pim_FordVehTrlrAidTrackStPrev(void)
 *   uint8 *Rte_Pim_FordVehTrlrBallToAxlePrev(void)
 *   boolean *Rte_Pim_FirstTranVldFlg(void)
 *   boolean *Rte_Pim_FordVehMsg459Miss(void)
 *   boolean *Rte_Pim_FordVehTrlrHitchAgVldPrev(void)
 *   boolean *Rte_Pim_FordVehTrlrHitchRateVldPrev(void)
 *   boolean *Rte_Pim_FordVehTrlrTarVldPrev(void)
 *   boolean *Rte_Pim_FordVehTrlrTrackStVldPrev(void)
 *   boolean *Rte_Pim_TrlrAidStsThreePrsntIntPrev(void)
 *
 * Calibration Parameters:
 * =======================
 *   Calibration Component Calibration Parameters:
 *   ---------------------------------------------
 *   uint16 Rte_Prm_FordMsg459BusHiSpdDiagMsgMissTmrThd_Val(void)
 *   uint16 Rte_Prm_FordMsg459BusHiSpdHitchAgInvldFaildThd_Val(void)
 *   uint16 Rte_Prm_FordMsg459BusHiSpdHitchAgInvldPassdThd_Val(void)
 *   uint16 Rte_Prm_FordMsg459BusHiSpdHitchAgRateInvldFaildThd_Val(void)
 *   uint16 Rte_Prm_FordMsg459BusHiSpdHitchAgRateInvldPassdThd_Val(void)
 *   uint16 Rte_Prm_FordMsg459BusHiSpdPrsntFlgMsgMissTmrThd_Val(void)
 *   uint16 Rte_Prm_FordMsg459BusHiSpdRcvrDiagMsgMissTmrThd_Val(void)
 *   uint16 Rte_Prm_FordMsg459BusHiSpdRcvrPrsntFlgTmrThd_Val(void)
 *   uint16 Rte_Prm_FordMsg459BusHiSpdTrackStInvldFaildThd_Val(void)
 *   uint16 Rte_Prm_FordMsg459BusHiSpdTrackStInvldPassdThd_Val(void)
 *   uint16 Rte_Prm_FordMsg459BusHiSpdTrlrHitchAgVldInvldMsgThd_Val(void)
 *   uint16 Rte_Prm_FordMsg459BusHiSpdTrlrHitchAgVldMissMsgThd_Val(void)
 *   uint16 Rte_Prm_FordMsg459BusHiSpdTrlrHitchRateVldInvldMsgThd_Val(void)
 *   uint16 Rte_Prm_FordMsg459BusHiSpdTrlrHitchRateVldMissMsgThd_Val(void)
 *   uint16 Rte_Prm_FordMsg459BusHiSpdTrlrRcvrHitchAgVldThd_Val(void)
 *   uint16 Rte_Prm_FordMsg459BusHiSpdTrlrRcvrHitchRateVldThd_Val(void)
 *   uint16 Rte_Prm_FordMsg459BusHiSpdTrlrRcvrTarVldThd_Val(void)
 *   uint16 Rte_Prm_FordMsg459BusHiSpdTrlrRcvrTrackStVldThd_Val(void)
 *   uint16 Rte_Prm_FordMsg459BusHiSpdTrlrTarVldMissMsgThd_Val(void)
 *   uint16 Rte_Prm_FordMsg459BusHiSpdTrlrTrackStVldInvldMsgThd_Val(void)
 *   uint16 Rte_Prm_FordMsg459BusHiSpdTrlrTrackStVldMissMsgThd_Val(void)
 *
 *********************************************************************************************************************/


# define FordMsg459BusHiSpd_START_SEC_CODE
# include "FordMsg459BusHiSpd_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 *
 * Runnable Entity Name: FordMsg459BusHiSpdInit1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 **********************************************************************************************************************
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_GetRefTmr100MicroSec32bit_Oper(uint32 *RefTmr_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_FordMsg459BusHiSpdInit1 FordMsg459BusHiSpdInit1
FUNC(void, FordMsg459BusHiSpd_CODE) FordMsg459BusHiSpdInit1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: FordMsg459BusHiSpdPer1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on TimingEvent every 10ms
 *
 **********************************************************************************************************************
 *
 * Input Interfaces:
 * =================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Read_ClrDiagcFlgProxy_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_FordCanDtcInhb_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_FordEpsLifeCycMod_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_FordTrlrBackupAssiEnad_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_Ford_HitchToVehAxle_L_Calc_Ford_HitchToVehAxle_L_Calc(Ford_HitchToVehAxle_L_Calc *data)
 *   Std_ReturnType Rte_Read_Ford_TrlrAidTrgtId_No_Actl_Ford_TrlrAidTrgtId_No_Actl(Ford_TrlrAidTrgtId_No_Actl *data)
 *   Std_ReturnType Rte_Read_Ford_TrlrAid_An3_Actl_Ford_TrlrAid_An3_Actl(Ford_TrlrAid_An3_Actl *data)
 *   Std_ReturnType Rte_Read_Ford_TrlrAid_AnRate2_Actl_Ford_TrlrAid_AnRate2_Actl(Ford_TrlrAid_AnRate2_Actl *data)
 *   Std_ReturnType Rte_Read_Ford_TrlrAid_D2_Stat_Ford_TrlrAid_D2_Stat(Ford_TrlrAid_D2_Stat *data)
 *   Std_ReturnType Rte_Read_Ford_TrlrRvrse_D_Stat_Ford_TrlrRvrse_D_Stat(Ford_TrlrRvrse_D_Stat *data)
 *   Std_ReturnType Rte_Read_Ford_TrlrTrgtAcquire_D_Stat_Ford_TrlrTrgtAcquire_D_Stat(Ford_TrlrTrgtAcquire_D_Stat *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_FordVehTrlrAidAcqSts_Val(uint8 data)
 *   Std_ReturnType Rte_Write_FordVehTrlrAidHitchAg_Val(uint16 data)
 *   Std_ReturnType Rte_Write_FordVehTrlrAidHitchAgRate_Val(uint16 data)
 *   Std_ReturnType Rte_Write_FordVehTrlrAidIdnVal_Val(uint8 data)
 *   Std_ReturnType Rte_Write_FordVehTrlrAidTrakgSt_Val(uint8 data)
 *   Std_ReturnType Rte_Write_FordVehTrlrAidTrakgStVld_Logl(boolean data)
 *   Std_ReturnType Rte_Write_FordVehTrlrAidTrlrRvsGuidcSts_Val(uint8 data)
 *   Std_ReturnType Rte_Write_FordVehTrlrBallToAxle_Val(uint8 data)
 *   Std_ReturnType Rte_Write_FordVehTrlrHitchAgVld_Logl(boolean data)
 *   Std_ReturnType Rte_Write_FordVehTrlrHitchRateVld_Logl(boolean data)
 *   Std_ReturnType Rte_Write_FordVehTrlrTarVld_Logl(boolean data)
 *   Std_ReturnType Rte_Write_TrlrAidStsThreePrsntInt_Logl(boolean data)
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_GetRefTmr100MicroSec32bit_Oper(uint32 *RefTmr_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetTiSpan100MicroSec32bit_Oper(uint32 RefTmr_Arg, uint32 *TiSpan_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_SetNtcSts_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_SetNtcSts_PortIf1_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_FordMsg459BusHiSpdPer1 FordMsg459BusHiSpdPer1
FUNC(void, FordMsg459BusHiSpd_CODE) FordMsg459BusHiSpdPer1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define FordMsg459BusHiSpd_STOP_SEC_CODE
# include "FordMsg459BusHiSpd_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * Application errors
 *********************************************************************************************************************/

# define RTE_E_SetNtcSts_PortIf1_E_NOT_OK (1U)

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_FORDMSG459BUSHISPD_H */

#include "Rte_Stubs.h"
