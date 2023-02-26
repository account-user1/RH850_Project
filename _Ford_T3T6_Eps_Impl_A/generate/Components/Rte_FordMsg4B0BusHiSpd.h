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
 *          File:  Rte_FordMsg4B0BusHiSpd.h
 *        Config:  EPS.dpa
 *   ECU-Project:  PSCM_FD
 *
 *     Generator:  MICROSAR RTE Generator Version 4.13.0
 *                 RTE Core Version 1.13.0
 *       License:  Unlimited license CBD1601056 for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <FordMsg4B0BusHiSpd>
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_FORDMSG4B0BUSHISPD_H
# define _RTE_FORDMSG4B0BUSHISPD_H

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

# include "Rte_FordMsg4B0BusHiSpd_Type.h"
# include "Rte_DataHandleType.h"

# ifndef RTE_CORE

#  include "Com.h"


/**********************************************************************************************************************
 * extern declaration of RTE buffers for optimized macro implementation
 *********************************************************************************************************************/
#  define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(uint16, RTE_VAR_INIT) Rte_FordMsg4B0BusHiSpd_FordVehYawStabyRaw_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_FordMsg4B0BusHiSpd_FordVehYawStabyVld_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_DiagcMgr_ClrDiagcFlgProxy_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CustDiag_FordBrkPlsRejctnEnad_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_FordCanDtcInhb_FordCanDtcInhb_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_FordCanDtcInhb_FordEpsLifeCycMod_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CustDiag_FordEvasSteerAssiEnad_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CustDiag_FordLaneCentrAssiEnad_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CustDiag_FordTqSteerCmpEnad_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CustDiag_FordLaneDprtrWarnEnad_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CustDiag_FordLaneKeepAssiEnad_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CustDiag_FordTrfcJamAssiEnad_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#  define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# endif /* !defined(RTE_CORE) */


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

#  define Rte_InitValue_ClrDiagcFlgProxy_Val (0U)
#  define Rte_InitValue_FordBrkOscnRednEnad_Logl (FALSE)
#  define Rte_InitValue_FordCanDtcInhb_Logl (TRUE)
#  define Rte_InitValue_FordEpsLifeCycMod_Val (0U)
#  define Rte_InitValue_FordEvasSteerAssiEnad_Logl (FALSE)
#  define Rte_InitValue_FordLaneCentrAssiEnad_Logl (FALSE)
#  define Rte_InitValue_FordTqSteerCmpEnad_Logl (FALSE)
#  define Rte_InitValue_FordVehYawStabyRaw_Val (256U)
#  define Rte_InitValue_FordVehYawStabyVld_Logl (FALSE)
#  define Rte_InitValue_Ford_YawStabilityIndex_Ford_YawStabilityIndex (256U)
#  define Rte_InitValue_LaneDetnWarnEnad_Logl (FALSE)
#  define Rte_InitValue_LaneKeepAssiEnad_Logl (FALSE)
#  define Rte_InitValue_TrfcJamAssiEnad_Logl (FALSE)
# endif


# ifndef RTE_CORE

/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Read_ClrDiagcFlgProxy_Val Rte_Read_FordMsg4B0BusHiSpd_ClrDiagcFlgProxy_Val
#  define Rte_Read_FordMsg4B0BusHiSpd_ClrDiagcFlgProxy_Val(data) (*(data) = Rte_DiagcMgr_ClrDiagcFlgProxy_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordBrkOscnRednEnad_Logl Rte_Read_FordMsg4B0BusHiSpd_FordBrkOscnRednEnad_Logl
#  define Rte_Read_FordMsg4B0BusHiSpd_FordBrkOscnRednEnad_Logl(data) (*(data) = Rte_CustDiag_FordBrkPlsRejctnEnad_Logl, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordCanDtcInhb_Logl Rte_Read_FordMsg4B0BusHiSpd_FordCanDtcInhb_Logl
#  define Rte_Read_FordMsg4B0BusHiSpd_FordCanDtcInhb_Logl(data) (*(data) = Rte_FordCanDtcInhb_FordCanDtcInhb_Logl, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordEpsLifeCycMod_Val Rte_Read_FordMsg4B0BusHiSpd_FordEpsLifeCycMod_Val
#  define Rte_Read_FordMsg4B0BusHiSpd_FordEpsLifeCycMod_Val(data) (*(data) = Rte_FordCanDtcInhb_FordEpsLifeCycMod_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordEvasSteerAssiEnad_Logl Rte_Read_FordMsg4B0BusHiSpd_FordEvasSteerAssiEnad_Logl
#  define Rte_Read_FordMsg4B0BusHiSpd_FordEvasSteerAssiEnad_Logl(data) (*(data) = Rte_CustDiag_FordEvasSteerAssiEnad_Logl, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordLaneCentrAssiEnad_Logl Rte_Read_FordMsg4B0BusHiSpd_FordLaneCentrAssiEnad_Logl
#  define Rte_Read_FordMsg4B0BusHiSpd_FordLaneCentrAssiEnad_Logl(data) (*(data) = Rte_CustDiag_FordLaneCentrAssiEnad_Logl, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordTqSteerCmpEnad_Logl Rte_Read_FordMsg4B0BusHiSpd_FordTqSteerCmpEnad_Logl
#  define Rte_Read_FordMsg4B0BusHiSpd_FordTqSteerCmpEnad_Logl(data) (*(data) = Rte_CustDiag_FordTqSteerCmpEnad_Logl, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_Ford_YawStabilityIndex_Ford_YawStabilityIndex Rte_Read_FordMsg4B0BusHiSpd_Ford_YawStabilityIndex_Ford_YawStabilityIndex
#  define Rte_Read_FordMsg4B0BusHiSpd_Ford_YawStabilityIndex_Ford_YawStabilityIndex(data) ((void)Com_ReceiveSignal(ComConf_ComSignal_YawStabilityIndex_706a037f, (data)), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_LaneDetnWarnEnad_Logl Rte_Read_FordMsg4B0BusHiSpd_LaneDetnWarnEnad_Logl
#  define Rte_Read_FordMsg4B0BusHiSpd_LaneDetnWarnEnad_Logl(data) (*(data) = Rte_CustDiag_FordLaneDprtrWarnEnad_Logl, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_LaneKeepAssiEnad_Logl Rte_Read_FordMsg4B0BusHiSpd_LaneKeepAssiEnad_Logl
#  define Rte_Read_FordMsg4B0BusHiSpd_LaneKeepAssiEnad_Logl(data) (*(data) = Rte_CustDiag_FordLaneKeepAssiEnad_Logl, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_TrfcJamAssiEnad_Logl Rte_Read_FordMsg4B0BusHiSpd_TrfcJamAssiEnad_Logl
#  define Rte_Read_FordMsg4B0BusHiSpd_TrfcJamAssiEnad_Logl(data) (*(data) = Rte_CustDiag_FordTrfcJamAssiEnad_Logl, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Write_FordVehYawStabyRaw_Val Rte_Write_FordMsg4B0BusHiSpd_FordVehYawStabyRaw_Val
#  define Rte_Write_FordMsg4B0BusHiSpd_FordVehYawStabyRaw_Val(data) (Rte_FordMsg4B0BusHiSpd_FordVehYawStabyRaw_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_FordVehYawStabyVld_Logl Rte_Write_FordMsg4B0BusHiSpd_FordVehYawStabyVld_Logl
#  define Rte_Write_FordMsg4B0BusHiSpd_FordVehYawStabyVld_Logl(data) (Rte_FordMsg4B0BusHiSpd_FordVehYawStabyVld_Logl = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */


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

#  ifndef RTE_MICROSAR_PIM_EXPORT
#   define RTE_START_SEC_CONST_DEFAULT_RTE_CALPRM_GROUP_UNSPECIFIED
#   include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern CONST(u16p0, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP) Rte_CalRegn01Cmn_FordMsg4B0BusHiSpdCanDtcInhbTiThd_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern CONST(u16p0, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP) Rte_CalRegn01Cmn_FordMsg4B0BusHiSpdMsgFltNtcDiagcTiThd_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern CONST(u16p0, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP) Rte_CalRegn01Cmn_FordMsg4B0BusHiSpdMsgFltTiThd_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern CONST(u16p0, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP) Rte_CalRegn01Cmn_FordMsg4B0BusHiSpdMsgMissNtcDiagcTiThd_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern CONST(u16p0, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP) Rte_CalRegn01Cmn_FordMsg4B0BusHiSpdMsgMissTiThd_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern CONST(u16p0, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP) Rte_CalRegn01Cmn_FordMsg4B0BusHiSpdMsgRxdNtcDiagcTiThd_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern CONST(u16p0, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP) Rte_CalRegn01Cmn_FordMsg4B0BusHiSpdMsgVldNtcDiagcTiThd_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern CONST(u16p0, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP) Rte_CalRegn01Cmn_FordMsg4B0BusHiSpdMsgVldTiThd_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#   define RTE_STOP_SEC_CONST_DEFAULT_RTE_CALPRM_GROUP_UNSPECIFIED
#   include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  endif

#  define Rte_Prm_FordMsg4B0BusHiSpdCanDtcInhbTiThd_Val() (Rte_CalRegn01Cmn_FordMsg4B0BusHiSpdCanDtcInhbTiThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_FordMsg4B0BusHiSpdMsgFltNtcDiagcTiThd_Val() (Rte_CalRegn01Cmn_FordMsg4B0BusHiSpdMsgFltNtcDiagcTiThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_FordMsg4B0BusHiSpdMsgFltTiThd_Val() (Rte_CalRegn01Cmn_FordMsg4B0BusHiSpdMsgFltTiThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_FordMsg4B0BusHiSpdMsgMissNtcDiagcTiThd_Val() (Rte_CalRegn01Cmn_FordMsg4B0BusHiSpdMsgMissNtcDiagcTiThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_FordMsg4B0BusHiSpdMsgMissTiThd_Val() (Rte_CalRegn01Cmn_FordMsg4B0BusHiSpdMsgMissTiThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_FordMsg4B0BusHiSpdMsgRxdNtcDiagcTiThd_Val() (Rte_CalRegn01Cmn_FordMsg4B0BusHiSpdMsgRxdNtcDiagcTiThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_FordMsg4B0BusHiSpdMsgVldNtcDiagcTiThd_Val() (Rte_CalRegn01Cmn_FordMsg4B0BusHiSpdMsgVldNtcDiagcTiThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_FordMsg4B0BusHiSpdMsgVldTiThd_Val() (Rte_CalRegn01Cmn_FordMsg4B0BusHiSpdMsgVldTiThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Rte_Pim (Per-Instance Memory)
 *********************************************************************************************************************/

#  ifndef RTE_MICROSAR_PIM_EXPORT
#   define RTE_START_SEC_VAR_DEFAULT_RTE_Appl10_PIM_GROUP_UNSPECIFIED
#   include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg4B0BusHiSpd_CanDtcInhbRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg4B0BusHiSpd_MsgFltNtcDiagcRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg4B0BusHiSpd_MsgFltRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg4B0BusHiSpd_MsgMissNtcDiagcRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg4B0BusHiSpd_MsgNoDataExistNtcDiagcRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg4B0BusHiSpd_MsgNoDataExistRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg4B0BusHiSpd_MsgNotRxdRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg4B0BusHiSpd_MsgRxdNtcDiagcRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg4B0BusHiSpd_MsgVldNtcDiagcRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg4B0BusHiSpd_MsgVldRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg4B0BusHiSpd_FordVehYawStabyRawPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg4B0BusHiSpd_ClrDiagcFlgProxyPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg4B0BusHiSpd_FordMsg4B0Miss; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg4B0BusHiSpd_FordVehYawStabyVldPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg4B0BusHiSpd_IniVehYawStabyInvld; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#   define RTE_STOP_SEC_VAR_DEFAULT_RTE_Appl10_PIM_GROUP_UNSPECIFIED
#   include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  endif

#  define Rte_Pim_CanDtcInhbRefTi() \
  (&Rte_FordMsg4B0BusHiSpd_CanDtcInhbRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_MsgFltNtcDiagcRefTi() \
  (&Rte_FordMsg4B0BusHiSpd_MsgFltNtcDiagcRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_MsgFltRefTi() \
  (&Rte_FordMsg4B0BusHiSpd_MsgFltRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_MsgMissNtcDiagcRefTi() \
  (&Rte_FordMsg4B0BusHiSpd_MsgMissNtcDiagcRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_MsgNoDataExistNtcDiagcRefTi() \
  (&Rte_FordMsg4B0BusHiSpd_MsgNoDataExistNtcDiagcRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_MsgNoDataExistRefTi() \
  (&Rte_FordMsg4B0BusHiSpd_MsgNoDataExistRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_MsgNotRxdRefTi() \
  (&Rte_FordMsg4B0BusHiSpd_MsgNotRxdRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_MsgRxdNtcDiagcRefTi() \
  (&Rte_FordMsg4B0BusHiSpd_MsgRxdNtcDiagcRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_MsgVldNtcDiagcRefTi() \
  (&Rte_FordMsg4B0BusHiSpd_MsgVldNtcDiagcRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_MsgVldRefTi() \
  (&Rte_FordMsg4B0BusHiSpd_MsgVldRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_FordVehYawStabyRawPrev() \
  (&Rte_FordMsg4B0BusHiSpd_FordVehYawStabyRawPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_ClrDiagcFlgProxyPrev() \
  (&Rte_FordMsg4B0BusHiSpd_ClrDiagcFlgProxyPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_FordMsg4B0Miss() \
  (&Rte_FordMsg4B0BusHiSpd_FordMsg4B0Miss) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_FordVehYawStabyVldPrev() \
  (&Rte_FordMsg4B0BusHiSpd_FordVehYawStabyVldPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_IniVehYawStabyInvld() \
  (&Rte_FordMsg4B0BusHiSpd_IniVehYawStabyInvld) /* PRQA S 3453 */ /* MD_MSR_19.7 */


# endif /* !defined(RTE_CORE) */


# define FordMsg4B0BusHiSpd_START_SEC_CODE
# include "FordMsg4B0BusHiSpd_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * Runnable entities
 *********************************************************************************************************************/

# ifndef RTE_CORE
#  define RTE_RUNNABLE_FordMsg4B0BusHiSpdInit1 FordMsg4B0BusHiSpdInit1
#  define RTE_RUNNABLE_FordMsg4B0BusHiSpdPer1 FordMsg4B0BusHiSpdPer1
# endif

FUNC(void, FordMsg4B0BusHiSpd_CODE) FordMsg4B0BusHiSpdInit1(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(void, FordMsg4B0BusHiSpd_CODE) FordMsg4B0BusHiSpdPer1(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */

# define FordMsg4B0BusHiSpd_STOP_SEC_CODE
# include "FordMsg4B0BusHiSpd_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Application errors
 *********************************************************************************************************************/

#  define RTE_E_SetNtcSts_PortIf1_E_NOT_OK (1U)
# endif /* !defined(RTE_CORE) */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_FORDMSG4B0BUSHISPD_H */

/**********************************************************************************************************************
 MISRA 2004 violations and justifications
 *********************************************************************************************************************/

/* module specific MISRA deviations:
   MD_Rte_3451:  MISRA rule: 8.8
     Reason:     Schedulable entities are declared by the RTE and also by the BSW modules.
     Risk:       No functional risk.
     Prevention: Not required.

*/
