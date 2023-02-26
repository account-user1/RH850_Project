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
 *        Config:  EPS.dpa
 *   ECU-Project:  PSCM_FD
 *
 *     Generator:  MICROSAR RTE Generator Version 4.13.0
 *                 RTE Core Version 1.13.0
 *       License:  Unlimited license CBD1601056 for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <FordMsg459BusHiSpd>
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_FORDMSG459BUSHISPD_H
# define _RTE_FORDMSG459BUSHISPD_H

# ifndef RTE_CORE
#  ifdef RTE_APPLICATION_HEADER_FILE
#   error Multiple application header files included.
#  endif
#  define RTE_APPLICATION_HEADER_FILE
#  ifndef RTE_PTR2ARRAYBASETYPE_PASSING
#   define RTE_PTR2ARRAYBASETYPE_PASSING
#  endif
# endif

# ifdef __cplusplus
extern "C"
{
# endif /* __cplusplus */

/* include files */

# include "Rte_FordMsg459BusHiSpd_Type.h"
# include "Rte_DataHandleType.h"

# ifndef RTE_CORE

#  include "Com.h"


/**********************************************************************************************************************
 * extern declaration of RTE buffers for optimized macro implementation
 *********************************************************************************************************************/
#  define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(uint8, RTE_VAR_INIT) Rte_FordMsg459BusHiSpd_FordVehTrlrAidAcqSts_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_INIT) Rte_FordMsg459BusHiSpd_FordVehTrlrAidHitchAg_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_INIT) Rte_FordMsg459BusHiSpd_FordVehTrlrAidHitchAgRate_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_FordMsg459BusHiSpd_FordVehTrlrAidIdnVal_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_FordMsg459BusHiSpd_FordVehTrlrAidTrakgSt_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_FordMsg459BusHiSpd_FordVehTrlrAidTrakgStVld_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_FordMsg459BusHiSpd_FordVehTrlrAidTrlrRvsGuidcSts_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_FordMsg459BusHiSpd_FordVehTrlrBallToAxle_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_FordMsg459BusHiSpd_FordVehTrlrHitchAgVld_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_FordMsg459BusHiSpd_FordVehTrlrHitchRateVld_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_FordMsg459BusHiSpd_FordVehTrlrTarVld_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_FordMsg459BusHiSpd_TrlrAidStsThreePrsntInt_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_DiagcMgr_ClrDiagcFlgProxy_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_FordCanDtcInhb_FordCanDtcInhb_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_FordCanDtcInhb_FordEpsLifeCycMod_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_FordMsg459BusHiSpd_FordTrlrBackupAssiEnad_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#  define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# endif /* !defined(RTE_CORE) */


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

#  define Rte_InitValue_ClrDiagcFlgProxy_Val (0U)
#  define Rte_InitValue_FordCanDtcInhb_Logl (TRUE)
#  define Rte_InitValue_FordEpsLifeCycMod_Val (0U)
#  define Rte_InitValue_FordTrlrBackupAssiEnad_Logl (FALSE)
#  define Rte_InitValue_FordVehTrlrAidAcqSts_Val (0U)
#  define Rte_InitValue_FordVehTrlrAidHitchAg_Val (720U)
#  define Rte_InitValue_FordVehTrlrAidHitchAgRate_Val (400U)
#  define Rte_InitValue_FordVehTrlrAidIdnVal_Val (0U)
#  define Rte_InitValue_FordVehTrlrAidTrakgSt_Val (0U)
#  define Rte_InitValue_FordVehTrlrAidTrakgStVld_Logl (FALSE)
#  define Rte_InitValue_FordVehTrlrAidTrlrRvsGuidcSts_Val (0U)
#  define Rte_InitValue_FordVehTrlrBallToAxle_Val (255U)
#  define Rte_InitValue_FordVehTrlrHitchAgVld_Logl (FALSE)
#  define Rte_InitValue_FordVehTrlrHitchRateVld_Logl (FALSE)
#  define Rte_InitValue_FordVehTrlrTarVld_Logl (FALSE)
#  define Rte_InitValue_Ford_HitchToVehAxle_L_Calc_Ford_HitchToVehAxle_L_Calc (255U)
#  define Rte_InitValue_Ford_TrlrAidTrgtId_No_Actl_Ford_TrlrAidTrgtId_No_Actl (0U)
#  define Rte_InitValue_Ford_TrlrAid_An3_Actl_Ford_TrlrAid_An3_Actl (720U)
#  define Rte_InitValue_Ford_TrlrAid_AnRate2_Actl_Ford_TrlrAid_AnRate2_Actl (400U)
#  define Rte_InitValue_Ford_TrlrAid_D2_Stat_Ford_TrlrAid_D2_Stat (0U)
#  define Rte_InitValue_Ford_TrlrRvrse_D_Stat_Ford_TrlrRvrse_D_Stat (0U)
#  define Rte_InitValue_Ford_TrlrTrgtAcquire_D_Stat_Ford_TrlrTrgtAcquire_D_Stat (0U)
#  define Rte_InitValue_TrlrAidStsThreePrsntInt_Logl (FALSE)
# endif


# ifndef RTE_CORE

/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Read_ClrDiagcFlgProxy_Val Rte_Read_FordMsg459BusHiSpd_ClrDiagcFlgProxy_Val
#  define Rte_Read_FordMsg459BusHiSpd_ClrDiagcFlgProxy_Val(data) (*(data) = Rte_DiagcMgr_ClrDiagcFlgProxy_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordCanDtcInhb_Logl Rte_Read_FordMsg459BusHiSpd_FordCanDtcInhb_Logl
#  define Rte_Read_FordMsg459BusHiSpd_FordCanDtcInhb_Logl(data) (*(data) = Rte_FordCanDtcInhb_FordCanDtcInhb_Logl, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordEpsLifeCycMod_Val Rte_Read_FordMsg459BusHiSpd_FordEpsLifeCycMod_Val
#  define Rte_Read_FordMsg459BusHiSpd_FordEpsLifeCycMod_Val(data) (*(data) = Rte_FordCanDtcInhb_FordEpsLifeCycMod_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordTrlrBackupAssiEnad_Logl Rte_Read_FordMsg459BusHiSpd_FordTrlrBackupAssiEnad_Logl
#  define Rte_Read_FordMsg459BusHiSpd_FordTrlrBackupAssiEnad_Logl(data) (*(data) = Rte_FordMsg459BusHiSpd_FordTrlrBackupAssiEnad_Logl, ((Std_ReturnType)RTE_E_UNCONNECTED)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_Ford_HitchToVehAxle_L_Calc_Ford_HitchToVehAxle_L_Calc Rte_Read_FordMsg459BusHiSpd_Ford_HitchToVehAxle_L_Calc_Ford_HitchToVehAxle_L_Calc
#  define Rte_Read_FordMsg459BusHiSpd_Ford_HitchToVehAxle_L_Calc_Ford_HitchToVehAxle_L_Calc(data) ((void)Com_ReceiveSignal(ComConf_ComSignal_HitchToVehAxle_L_Calc_0bf22cce, (data)), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_Ford_TrlrAidTrgtId_No_Actl_Ford_TrlrAidTrgtId_No_Actl Rte_Read_FordMsg459BusHiSpd_Ford_TrlrAidTrgtId_No_Actl_Ford_TrlrAidTrgtId_No_Actl
#  define Rte_Read_FordMsg459BusHiSpd_Ford_TrlrAidTrgtId_No_Actl_Ford_TrlrAidTrgtId_No_Actl(data) ((void)Com_ReceiveSignal(ComConf_ComSignal_TrlrAidTrgtId_No_Actl_0bf22cce, (data)), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_Ford_TrlrAid_An3_Actl_Ford_TrlrAid_An3_Actl Rte_Read_FordMsg459BusHiSpd_Ford_TrlrAid_An3_Actl_Ford_TrlrAid_An3_Actl
#  define Rte_Read_FordMsg459BusHiSpd_Ford_TrlrAid_An3_Actl_Ford_TrlrAid_An3_Actl(data) ((void)Com_ReceiveSignal(ComConf_ComSignal_TrlrAid_An3_Actl_0bf22cce, (data)), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_Ford_TrlrAid_AnRate2_Actl_Ford_TrlrAid_AnRate2_Actl Rte_Read_FordMsg459BusHiSpd_Ford_TrlrAid_AnRate2_Actl_Ford_TrlrAid_AnRate2_Actl
#  define Rte_Read_FordMsg459BusHiSpd_Ford_TrlrAid_AnRate2_Actl_Ford_TrlrAid_AnRate2_Actl(data) ((void)Com_ReceiveSignal(ComConf_ComSignal_TrlrAid_AnRate2_Actl_0bf22cce, (data)), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_Ford_TrlrAid_D2_Stat_Ford_TrlrAid_D2_Stat Rte_Read_FordMsg459BusHiSpd_Ford_TrlrAid_D2_Stat_Ford_TrlrAid_D2_Stat
#  define Rte_Read_FordMsg459BusHiSpd_Ford_TrlrAid_D2_Stat_Ford_TrlrAid_D2_Stat(data) ((void)Com_ReceiveSignal(ComConf_ComSignal_TrlrAid_D2_Stat_0bf22cce, (data)), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_Ford_TrlrRvrse_D_Stat_Ford_TrlrRvrse_D_Stat Rte_Read_FordMsg459BusHiSpd_Ford_TrlrRvrse_D_Stat_Ford_TrlrRvrse_D_Stat
#  define Rte_Read_FordMsg459BusHiSpd_Ford_TrlrRvrse_D_Stat_Ford_TrlrRvrse_D_Stat(data) ((void)Com_ReceiveSignal(ComConf_ComSignal_TrlrRvrse_D_Stat_0bf22cce, (data)), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_Ford_TrlrTrgtAcquire_D_Stat_Ford_TrlrTrgtAcquire_D_Stat Rte_Read_FordMsg459BusHiSpd_Ford_TrlrTrgtAcquire_D_Stat_Ford_TrlrTrgtAcquire_D_Stat
#  define Rte_Read_FordMsg459BusHiSpd_Ford_TrlrTrgtAcquire_D_Stat_Ford_TrlrTrgtAcquire_D_Stat(data) ((void)Com_ReceiveSignal(ComConf_ComSignal_TrlrTrgtAcquire_D_Stat_0bf22cce, (data)), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Write_FordVehTrlrAidAcqSts_Val Rte_Write_FordMsg459BusHiSpd_FordVehTrlrAidAcqSts_Val
#  define Rte_Write_FordMsg459BusHiSpd_FordVehTrlrAidAcqSts_Val(data) (Rte_FordMsg459BusHiSpd_FordVehTrlrAidAcqSts_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_FordVehTrlrAidHitchAg_Val Rte_Write_FordMsg459BusHiSpd_FordVehTrlrAidHitchAg_Val
#  define Rte_Write_FordMsg459BusHiSpd_FordVehTrlrAidHitchAg_Val(data) (Rte_FordMsg459BusHiSpd_FordVehTrlrAidHitchAg_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_FordVehTrlrAidHitchAgRate_Val Rte_Write_FordMsg459BusHiSpd_FordVehTrlrAidHitchAgRate_Val
#  define Rte_Write_FordMsg459BusHiSpd_FordVehTrlrAidHitchAgRate_Val(data) (Rte_FordMsg459BusHiSpd_FordVehTrlrAidHitchAgRate_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_FordVehTrlrAidIdnVal_Val Rte_Write_FordMsg459BusHiSpd_FordVehTrlrAidIdnVal_Val
#  define Rte_Write_FordMsg459BusHiSpd_FordVehTrlrAidIdnVal_Val(data) (Rte_FordMsg459BusHiSpd_FordVehTrlrAidIdnVal_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_FordVehTrlrAidTrakgSt_Val Rte_Write_FordMsg459BusHiSpd_FordVehTrlrAidTrakgSt_Val
#  define Rte_Write_FordMsg459BusHiSpd_FordVehTrlrAidTrakgSt_Val(data) (Rte_FordMsg459BusHiSpd_FordVehTrlrAidTrakgSt_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_FordVehTrlrAidTrakgStVld_Logl Rte_Write_FordMsg459BusHiSpd_FordVehTrlrAidTrakgStVld_Logl
#  define Rte_Write_FordMsg459BusHiSpd_FordVehTrlrAidTrakgStVld_Logl(data) (Rte_FordMsg459BusHiSpd_FordVehTrlrAidTrakgStVld_Logl = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_FordVehTrlrAidTrlrRvsGuidcSts_Val Rte_Write_FordMsg459BusHiSpd_FordVehTrlrAidTrlrRvsGuidcSts_Val
#  define Rte_Write_FordMsg459BusHiSpd_FordVehTrlrAidTrlrRvsGuidcSts_Val(data) (Rte_FordMsg459BusHiSpd_FordVehTrlrAidTrlrRvsGuidcSts_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_FordVehTrlrBallToAxle_Val Rte_Write_FordMsg459BusHiSpd_FordVehTrlrBallToAxle_Val
#  define Rte_Write_FordMsg459BusHiSpd_FordVehTrlrBallToAxle_Val(data) (Rte_FordMsg459BusHiSpd_FordVehTrlrBallToAxle_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_FordVehTrlrHitchAgVld_Logl Rte_Write_FordMsg459BusHiSpd_FordVehTrlrHitchAgVld_Logl
#  define Rte_Write_FordMsg459BusHiSpd_FordVehTrlrHitchAgVld_Logl(data) (Rte_FordMsg459BusHiSpd_FordVehTrlrHitchAgVld_Logl = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_FordVehTrlrHitchRateVld_Logl Rte_Write_FordMsg459BusHiSpd_FordVehTrlrHitchRateVld_Logl
#  define Rte_Write_FordMsg459BusHiSpd_FordVehTrlrHitchRateVld_Logl(data) (Rte_FordMsg459BusHiSpd_FordVehTrlrHitchRateVld_Logl = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_FordVehTrlrTarVld_Logl Rte_Write_FordMsg459BusHiSpd_FordVehTrlrTarVld_Logl
#  define Rte_Write_FordMsg459BusHiSpd_FordVehTrlrTarVld_Logl(data) (Rte_FordMsg459BusHiSpd_FordVehTrlrTarVld_Logl = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_TrlrAidStsThreePrsntInt_Logl Rte_Write_FordMsg459BusHiSpd_TrlrAidStsThreePrsntInt_Logl
#  define Rte_Write_FordMsg459BusHiSpd_TrlrAidStsThreePrsntInt_Logl(data) (Rte_FordMsg459BusHiSpd_TrlrAidStsThreePrsntInt_Logl = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */


/**********************************************************************************************************************
 * Rte_Call_<p>_<o> (unmapped) for synchronous C/S communication
 *********************************************************************************************************************/
#  define RTE_START_SEC_CDD_NXTRTI_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(void, RTE_CDD_NXTRTI_APPL_CODE) GetRefTmr100MicroSec32bit_Oper(P2VAR(uint32, AUTOMATIC, RTE_CDD_NXTRTI_APPL_VAR) RefTmr); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_CDD_NXTRTI_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_GetRefTmr100MicroSec32bit_Oper(arg1) (GetRefTmr100MicroSec32bit_Oper(arg1), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define RTE_START_SEC_CDD_NXTRTI_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(void, RTE_CDD_NXTRTI_APPL_CODE) GetTiSpan100MicroSec32bit_Oper(uint32 RefTmr, P2VAR(uint32, AUTOMATIC, RTE_CDD_NXTRTI_APPL_VAR) TiSpan); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_CDD_NXTRTI_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_GetTiSpan100MicroSec32bit_Oper(arg1, arg2) (GetTiSpan100MicroSec32bit_Oper(arg1, arg2), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define RTE_START_SEC_DIAGCMGRPROXYAPPL10_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(Std_ReturnType, RTE_DIAGCMGRPROXYAPPL10_APPL_CODE) SetNtcSts10_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_DIAGCMGRPROXYAPPL10_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_SetNtcSts_Oper SetNtcSts10_Oper


/**********************************************************************************************************************
 * Rte_Prm (Calibration component calibration parameters)
 *********************************************************************************************************************/

#  define Rte_Prm_FordMsg459BusHiSpdDiagMsgMissTmrThd_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->FordMsg459BusHiSpdDiagMsgMissTmrThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_FordMsg459BusHiSpdHitchAgInvldFaildThd_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->FordMsg459BusHiSpdHitchAgInvldFaildThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_FordMsg459BusHiSpdHitchAgInvldPassdThd_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->FordMsg459BusHiSpdHitchAgInvldPassdThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_FordMsg459BusHiSpdHitchAgRateInvldFaildThd_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->FordMsg459BusHiSpdHitchAgRateInvldFaildThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_FordMsg459BusHiSpdHitchAgRateInvldPassdThd_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->FordMsg459BusHiSpdHitchAgRateInvldPassdThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_FordMsg459BusHiSpdPrsntFlgMsgMissTmrThd_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->FordMsg459BusHiSpdPrsntFlgMsgMissTmrThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_FordMsg459BusHiSpdRcvrDiagMsgMissTmrThd_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->FordMsg459BusHiSpdRcvrDiagMsgMissTmrThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_FordMsg459BusHiSpdRcvrPrsntFlgTmrThd_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->FordMsg459BusHiSpdRcvrPrsntFlgTmrThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_FordMsg459BusHiSpdTrackStInvldFaildThd_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->FordMsg459BusHiSpdTrackStInvldFaildThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_FordMsg459BusHiSpdTrackStInvldPassdThd_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->FordMsg459BusHiSpdTrackStInvldPassdThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_FordMsg459BusHiSpdTrlrHitchAgVldInvldMsgThd_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->FordMsg459BusHiSpdTrlrHitchAgVldInvldMsgThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_FordMsg459BusHiSpdTrlrHitchAgVldMissMsgThd_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->FordMsg459BusHiSpdTrlrHitchAgVldMissMsgThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_FordMsg459BusHiSpdTrlrHitchRateVldInvldMsgThd_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->FordMsg459BusHiSpdTrlrHitchRateVldInvldMsgThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_FordMsg459BusHiSpdTrlrHitchRateVldMissMsgThd_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->FordMsg459BusHiSpdTrlrHitchRateVldMissMsgThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_FordMsg459BusHiSpdTrlrRcvrHitchAgVldThd_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->FordMsg459BusHiSpdTrlrRcvrHitchAgVldThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_FordMsg459BusHiSpdTrlrRcvrHitchRateVldThd_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->FordMsg459BusHiSpdTrlrRcvrHitchRateVldThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_FordMsg459BusHiSpdTrlrRcvrTarVldThd_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->FordMsg459BusHiSpdTrlrRcvrTarVldThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_FordMsg459BusHiSpdTrlrRcvrTrackStVldThd_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->FordMsg459BusHiSpdTrlrRcvrTrackStVldThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_FordMsg459BusHiSpdTrlrTarVldMissMsgThd_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->FordMsg459BusHiSpdTrlrTarVldMissMsgThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_FordMsg459BusHiSpdTrlrTrackStVldInvldMsgThd_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->FordMsg459BusHiSpdTrlrTrackStVldInvldMsgThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_FordMsg459BusHiSpdTrlrTrackStVldMissMsgThd_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->FordMsg459BusHiSpdTrlrTrackStVldMissMsgThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Rte_Pim (Per-Instance Memory)
 *********************************************************************************************************************/

#  ifndef RTE_MICROSAR_PIM_EXPORT
#   define RTE_START_SEC_VAR_DEFAULT_RTE_Appl10_PIM_GROUP_UNSPECIFIED
#   include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg459BusHiSpd_FordVehMsg459MissTmr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg459BusHiSpd_FordVehMsg459RxdTmr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg459BusHiSpd_FordVehTrlrAidTrackStFaildTmr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg459BusHiSpd_FordVehTrlrAidTrackStPassdTmr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg459BusHiSpd_FordVehTrlrHitchAgFaildTmr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg459BusHiSpd_FordVehTrlrHitchAgPassdTmr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg459BusHiSpd_FordVehTrlrHitchAgRateFaildTmr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg459BusHiSpd_FordVehTrlrHitchAgRatePassdTmr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg459BusHiSpd_FordVehTrlrAidHitchAgPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg459BusHiSpd_FordVehTrlrAidHitchAgRatePrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg459BusHiSpd_ClrDiagcFlgProxyPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg459BusHiSpd_FordVehTrlrAidAcqStsPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg459BusHiSpd_FordVehTrlrAidGuidcRevsStsPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg459BusHiSpd_FordVehTrlrAidIdnValPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg459BusHiSpd_FordVehTrlrAidTrackStPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg459BusHiSpd_FordVehTrlrBallToAxlePrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg459BusHiSpd_FirstTranVldFlg; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg459BusHiSpd_FordVehMsg459Miss; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg459BusHiSpd_FordVehTrlrHitchAgVldPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg459BusHiSpd_FordVehTrlrHitchRateVldPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg459BusHiSpd_FordVehTrlrTarVldPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg459BusHiSpd_FordVehTrlrTrackStVldPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg459BusHiSpd_TrlrAidStsThreePrsntIntPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#   define RTE_STOP_SEC_VAR_DEFAULT_RTE_Appl10_PIM_GROUP_UNSPECIFIED
#   include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  endif

#  define Rte_Pim_FordVehMsg459MissTmr() \
  (&Rte_FordMsg459BusHiSpd_FordVehMsg459MissTmr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_FordVehMsg459RxdTmr() \
  (&Rte_FordMsg459BusHiSpd_FordVehMsg459RxdTmr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_FordVehTrlrAidTrackStFaildTmr() \
  (&Rte_FordMsg459BusHiSpd_FordVehTrlrAidTrackStFaildTmr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_FordVehTrlrAidTrackStPassdTmr() \
  (&Rte_FordMsg459BusHiSpd_FordVehTrlrAidTrackStPassdTmr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_FordVehTrlrHitchAgFaildTmr() \
  (&Rte_FordMsg459BusHiSpd_FordVehTrlrHitchAgFaildTmr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_FordVehTrlrHitchAgPassdTmr() \
  (&Rte_FordMsg459BusHiSpd_FordVehTrlrHitchAgPassdTmr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_FordVehTrlrHitchAgRateFaildTmr() \
  (&Rte_FordMsg459BusHiSpd_FordVehTrlrHitchAgRateFaildTmr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_FordVehTrlrHitchAgRatePassdTmr() \
  (&Rte_FordMsg459BusHiSpd_FordVehTrlrHitchAgRatePassdTmr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_FordVehTrlrAidHitchAgPrev() \
  (&Rte_FordMsg459BusHiSpd_FordVehTrlrAidHitchAgPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_FordVehTrlrAidHitchAgRatePrev() \
  (&Rte_FordMsg459BusHiSpd_FordVehTrlrAidHitchAgRatePrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_ClrDiagcFlgProxyPrev() \
  (&Rte_FordMsg459BusHiSpd_ClrDiagcFlgProxyPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_FordVehTrlrAidAcqStsPrev() \
  (&Rte_FordMsg459BusHiSpd_FordVehTrlrAidAcqStsPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_FordVehTrlrAidGuidcRevsStsPrev() \
  (&Rte_FordMsg459BusHiSpd_FordVehTrlrAidGuidcRevsStsPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_FordVehTrlrAidIdnValPrev() \
  (&Rte_FordMsg459BusHiSpd_FordVehTrlrAidIdnValPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_FordVehTrlrAidTrackStPrev() \
  (&Rte_FordMsg459BusHiSpd_FordVehTrlrAidTrackStPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_FordVehTrlrBallToAxlePrev() \
  (&Rte_FordMsg459BusHiSpd_FordVehTrlrBallToAxlePrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_FirstTranVldFlg() \
  (&Rte_FordMsg459BusHiSpd_FirstTranVldFlg) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_FordVehMsg459Miss() \
  (&Rte_FordMsg459BusHiSpd_FordVehMsg459Miss) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_FordVehTrlrHitchAgVldPrev() \
  (&Rte_FordMsg459BusHiSpd_FordVehTrlrHitchAgVldPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_FordVehTrlrHitchRateVldPrev() \
  (&Rte_FordMsg459BusHiSpd_FordVehTrlrHitchRateVldPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_FordVehTrlrTarVldPrev() \
  (&Rte_FordMsg459BusHiSpd_FordVehTrlrTarVldPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_FordVehTrlrTrackStVldPrev() \
  (&Rte_FordMsg459BusHiSpd_FordVehTrlrTrackStVldPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_TrlrAidStsThreePrsntIntPrev() \
  (&Rte_FordMsg459BusHiSpd_TrlrAidStsThreePrsntIntPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */


# endif /* !defined(RTE_CORE) */


# define FordMsg459BusHiSpd_START_SEC_CODE
# include "FordMsg459BusHiSpd_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * Runnable entities
 *********************************************************************************************************************/

# ifndef RTE_CORE
#  define RTE_RUNNABLE_FordMsg459BusHiSpdInit1 FordMsg459BusHiSpdInit1
#  define RTE_RUNNABLE_FordMsg459BusHiSpdPer1 FordMsg459BusHiSpdPer1
# endif

FUNC(void, FordMsg459BusHiSpd_CODE) FordMsg459BusHiSpdInit1(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(void, FordMsg459BusHiSpd_CODE) FordMsg459BusHiSpdPer1(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */

# define FordMsg459BusHiSpd_STOP_SEC_CODE
# include "FordMsg459BusHiSpd_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Application errors
 *********************************************************************************************************************/

#  define RTE_E_SetNtcSts_PortIf1_E_NOT_OK (1U)
# endif /* !defined(RTE_CORE) */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_FORDMSG459BUSHISPD_H */

/**********************************************************************************************************************
 MISRA 2004 violations and justifications
 *********************************************************************************************************************/

/* module specific MISRA deviations:
   MD_Rte_3451:  MISRA rule: 8.8
     Reason:     Schedulable entities are declared by the RTE and also by the BSW modules.
     Risk:       No functional risk.
     Prevention: Not required.

*/
