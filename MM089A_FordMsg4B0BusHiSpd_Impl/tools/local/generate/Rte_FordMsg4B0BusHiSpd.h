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
 *        Config:  C:/Users/NZ5334/Documents/Synergy/Working/ses_dev_ea4/MM089A_FordMsg4B0BusHiSpd_Impl/tools/Component.dpa
 *     SW-C Type:  FordMsg4B0BusHiSpd
 *  Generated at:  Fri May  4 17:44:11 2018
 *
 *     Generator:  MICROSAR RTE Generator Version 4.13.0
 *                 RTE Core Version 1.13.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <FordMsg4B0BusHiSpd> (Contract Phase)
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_FORDMSG4B0BUSHISPD_H
# define _RTE_FORDMSG4B0BUSHISPD_H

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

# include "Rte_FordMsg4B0BusHiSpd_Type.h"
# include "Rte_DataHandleType.h"


/**********************************************************************************************************************
 * Component Data Structures and Port Data Structures
 *********************************************************************************************************************/

struct Rte_CDS_FordMsg4B0BusHiSpd
{
  /* PIM Handles section */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_CanDtcInhbRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_ClrDiagcFlgProxyPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordMsg4B0Miss; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint16, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehYawStabyRawPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehYawStabyVldPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_IniVehYawStabyInvld; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_MsgFltNtcDiagcRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_MsgFltRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_MsgMissNtcDiagcRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_MsgNoDataExistNtcDiagcRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_MsgNoDataExistRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_MsgNotRxdRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_MsgRxdNtcDiagcRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_MsgVldNtcDiagcRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_MsgVldRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  /* Vendor specific section */
};

# define RTE_START_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern CONSTP2CONST(struct Rte_CDS_FordMsg4B0BusHiSpd, RTE_CONST, RTE_CONST) Rte_Inst_FordMsg4B0BusHiSpd; /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

typedef P2CONST(struct Rte_CDS_FordMsg4B0BusHiSpd, TYPEDEF, RTE_CONST) Rte_Instance;


/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

# define Rte_InitValue_ClrDiagcFlgProxy_Val (0U)
# define Rte_InitValue_FordBrkOscnRednEnad_Logl (FALSE)
# define Rte_InitValue_FordCanDtcInhb_Logl (TRUE)
# define Rte_InitValue_FordEpsLifeCycMod_Val (0U)
# define Rte_InitValue_FordEvasSteerAssiEnad_Logl (FALSE)
# define Rte_InitValue_FordLaneCentrAssiEnad_Logl (FALSE)
# define Rte_InitValue_FordTqSteerCmpEnad_Logl (FALSE)
# define Rte_InitValue_FordVehYawStabyRaw_Val (256U)
# define Rte_InitValue_FordVehYawStabyVld_Logl (FALSE)
# define Rte_InitValue_Ford_YawStabilityIndex_Ford_YawStabilityIndex (256U)
# define Rte_InitValue_LaneDetnWarnEnad_Logl (FALSE)
# define Rte_InitValue_LaneKeepAssiEnad_Logl (FALSE)
# define Rte_InitValue_TrfcJamAssiEnad_Logl (FALSE)


# define RTE_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordMsg4B0BusHiSpd_ClrDiagcFlgProxy_Val(P2VAR(uint8, AUTOMATIC, RTE_FORDMSG4B0BUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordMsg4B0BusHiSpd_FordBrkOscnRednEnad_Logl(P2VAR(boolean, AUTOMATIC, RTE_FORDMSG4B0BUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordMsg4B0BusHiSpd_FordCanDtcInhb_Logl(P2VAR(boolean, AUTOMATIC, RTE_FORDMSG4B0BUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordMsg4B0BusHiSpd_FordEpsLifeCycMod_Val(P2VAR(uint8, AUTOMATIC, RTE_FORDMSG4B0BUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordMsg4B0BusHiSpd_FordEvasSteerAssiEnad_Logl(P2VAR(boolean, AUTOMATIC, RTE_FORDMSG4B0BUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordMsg4B0BusHiSpd_FordLaneCentrAssiEnad_Logl(P2VAR(boolean, AUTOMATIC, RTE_FORDMSG4B0BUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordMsg4B0BusHiSpd_FordTqSteerCmpEnad_Logl(P2VAR(boolean, AUTOMATIC, RTE_FORDMSG4B0BUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordMsg4B0BusHiSpd_Ford_YawStabilityIndex_Ford_YawStabilityIndex(P2VAR(Ford_YawStabilityIndex, AUTOMATIC, RTE_FORDMSG4B0BUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordMsg4B0BusHiSpd_LaneDetnWarnEnad_Logl(P2VAR(boolean, AUTOMATIC, RTE_FORDMSG4B0BUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordMsg4B0BusHiSpd_LaneKeepAssiEnad_Logl(P2VAR(boolean, AUTOMATIC, RTE_FORDMSG4B0BUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordMsg4B0BusHiSpd_TrfcJamAssiEnad_Logl(P2VAR(boolean, AUTOMATIC, RTE_FORDMSG4B0BUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_FordMsg4B0BusHiSpd_FordVehYawStabyRaw_Val(uint16 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_FordMsg4B0BusHiSpd_FordVehYawStabyVld_Logl(boolean data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_FordMsg4B0BusHiSpd_GetRefTmr100MicroSec32bit_Oper(P2VAR(uint32, AUTOMATIC, RTE_FORDMSG4B0BUSHISPD_APPL_VAR) RefTmr_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_FordMsg4B0BusHiSpd_GetTiSpan100MicroSec32bit_Oper(uint32 RefTmr_Arg, P2VAR(uint32, AUTOMATIC, RTE_FORDMSG4B0BUSHISPD_APPL_VAR) TiSpan_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_FordMsg4B0BusHiSpd_SetNtcSts_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(u16p0, RTE_CODE) Rte_Prm_FordMsg4B0BusHiSpd_FordMsg4B0BusHiSpdCanDtcInhbTiThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(u16p0, RTE_CODE) Rte_Prm_FordMsg4B0BusHiSpd_FordMsg4B0BusHiSpdMsgFltNtcDiagcTiThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(u16p0, RTE_CODE) Rte_Prm_FordMsg4B0BusHiSpd_FordMsg4B0BusHiSpdMsgFltTiThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(u16p0, RTE_CODE) Rte_Prm_FordMsg4B0BusHiSpd_FordMsg4B0BusHiSpdMsgMissNtcDiagcTiThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(u16p0, RTE_CODE) Rte_Prm_FordMsg4B0BusHiSpd_FordMsg4B0BusHiSpdMsgMissTiThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(u16p0, RTE_CODE) Rte_Prm_FordMsg4B0BusHiSpd_FordMsg4B0BusHiSpdMsgRxdNtcDiagcTiThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(u16p0, RTE_CODE) Rte_Prm_FordMsg4B0BusHiSpd_FordMsg4B0BusHiSpdMsgVldNtcDiagcTiThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(u16p0, RTE_CODE) Rte_Prm_FordMsg4B0BusHiSpd_FordMsg4B0BusHiSpdMsgVldTiThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */



/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Read_ClrDiagcFlgProxy_Val Rte_Read_FordMsg4B0BusHiSpd_ClrDiagcFlgProxy_Val
# define Rte_Read_FordBrkOscnRednEnad_Logl Rte_Read_FordMsg4B0BusHiSpd_FordBrkOscnRednEnad_Logl
# define Rte_Read_FordCanDtcInhb_Logl Rte_Read_FordMsg4B0BusHiSpd_FordCanDtcInhb_Logl
# define Rte_Read_FordEpsLifeCycMod_Val Rte_Read_FordMsg4B0BusHiSpd_FordEpsLifeCycMod_Val
# define Rte_Read_FordEvasSteerAssiEnad_Logl Rte_Read_FordMsg4B0BusHiSpd_FordEvasSteerAssiEnad_Logl
# define Rte_Read_FordLaneCentrAssiEnad_Logl Rte_Read_FordMsg4B0BusHiSpd_FordLaneCentrAssiEnad_Logl
# define Rte_Read_FordTqSteerCmpEnad_Logl Rte_Read_FordMsg4B0BusHiSpd_FordTqSteerCmpEnad_Logl
# define Rte_Read_Ford_YawStabilityIndex_Ford_YawStabilityIndex Rte_Read_FordMsg4B0BusHiSpd_Ford_YawStabilityIndex_Ford_YawStabilityIndex
# define Rte_Read_LaneDetnWarnEnad_Logl Rte_Read_FordMsg4B0BusHiSpd_LaneDetnWarnEnad_Logl
# define Rte_Read_LaneKeepAssiEnad_Logl Rte_Read_FordMsg4B0BusHiSpd_LaneKeepAssiEnad_Logl
# define Rte_Read_TrfcJamAssiEnad_Logl Rte_Read_FordMsg4B0BusHiSpd_TrfcJamAssiEnad_Logl


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Write_FordVehYawStabyRaw_Val Rte_Write_FordMsg4B0BusHiSpd_FordVehYawStabyRaw_Val
# define Rte_Write_FordVehYawStabyVld_Logl Rte_Write_FordMsg4B0BusHiSpd_FordVehYawStabyVld_Logl


/**********************************************************************************************************************
 * Rte_Call_<p>_<o> (C/S invocation)
 *********************************************************************************************************************/
# define Rte_Call_GetRefTmr100MicroSec32bit_Oper Rte_Call_FordMsg4B0BusHiSpd_GetRefTmr100MicroSec32bit_Oper
# define Rte_Call_GetTiSpan100MicroSec32bit_Oper Rte_Call_FordMsg4B0BusHiSpd_GetTiSpan100MicroSec32bit_Oper
# define Rte_Call_SetNtcSts_Oper Rte_Call_FordMsg4B0BusHiSpd_SetNtcSts_Oper


/**********************************************************************************************************************
 * Rte_Prm (Calibration component calibration parameters)
 *********************************************************************************************************************/

# define Rte_Prm_FordMsg4B0BusHiSpdCanDtcInhbTiThd_Val Rte_Prm_FordMsg4B0BusHiSpd_FordMsg4B0BusHiSpdCanDtcInhbTiThd_Val

# define Rte_Prm_FordMsg4B0BusHiSpdMsgFltNtcDiagcTiThd_Val Rte_Prm_FordMsg4B0BusHiSpd_FordMsg4B0BusHiSpdMsgFltNtcDiagcTiThd_Val

# define Rte_Prm_FordMsg4B0BusHiSpdMsgFltTiThd_Val Rte_Prm_FordMsg4B0BusHiSpd_FordMsg4B0BusHiSpdMsgFltTiThd_Val

# define Rte_Prm_FordMsg4B0BusHiSpdMsgMissNtcDiagcTiThd_Val Rte_Prm_FordMsg4B0BusHiSpd_FordMsg4B0BusHiSpdMsgMissNtcDiagcTiThd_Val

# define Rte_Prm_FordMsg4B0BusHiSpdMsgMissTiThd_Val Rte_Prm_FordMsg4B0BusHiSpd_FordMsg4B0BusHiSpdMsgMissTiThd_Val

# define Rte_Prm_FordMsg4B0BusHiSpdMsgRxdNtcDiagcTiThd_Val Rte_Prm_FordMsg4B0BusHiSpd_FordMsg4B0BusHiSpdMsgRxdNtcDiagcTiThd_Val

# define Rte_Prm_FordMsg4B0BusHiSpdMsgVldNtcDiagcTiThd_Val Rte_Prm_FordMsg4B0BusHiSpd_FordMsg4B0BusHiSpdMsgVldNtcDiagcTiThd_Val

# define Rte_Prm_FordMsg4B0BusHiSpdMsgVldTiThd_Val Rte_Prm_FordMsg4B0BusHiSpd_FordMsg4B0BusHiSpdMsgVldTiThd_Val

/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Rte_Pim (Per-Instance Memory)
 *********************************************************************************************************************/

# define Rte_Pim_CanDtcInhbRefTi() (Rte_Inst_FordMsg4B0BusHiSpd->Pim_CanDtcInhbRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_MsgFltNtcDiagcRefTi() (Rte_Inst_FordMsg4B0BusHiSpd->Pim_MsgFltNtcDiagcRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_MsgFltRefTi() (Rte_Inst_FordMsg4B0BusHiSpd->Pim_MsgFltRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_MsgMissNtcDiagcRefTi() (Rte_Inst_FordMsg4B0BusHiSpd->Pim_MsgMissNtcDiagcRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_MsgNoDataExistNtcDiagcRefTi() (Rte_Inst_FordMsg4B0BusHiSpd->Pim_MsgNoDataExistNtcDiagcRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_MsgNoDataExistRefTi() (Rte_Inst_FordMsg4B0BusHiSpd->Pim_MsgNoDataExistRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_MsgNotRxdRefTi() (Rte_Inst_FordMsg4B0BusHiSpd->Pim_MsgNotRxdRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_MsgRxdNtcDiagcRefTi() (Rte_Inst_FordMsg4B0BusHiSpd->Pim_MsgRxdNtcDiagcRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_MsgVldNtcDiagcRefTi() (Rte_Inst_FordMsg4B0BusHiSpd->Pim_MsgVldNtcDiagcRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_MsgVldRefTi() (Rte_Inst_FordMsg4B0BusHiSpd->Pim_MsgVldRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FordVehYawStabyRawPrev() (Rte_Inst_FordMsg4B0BusHiSpd->Pim_FordVehYawStabyRawPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_ClrDiagcFlgProxyPrev() (Rte_Inst_FordMsg4B0BusHiSpd->Pim_ClrDiagcFlgProxyPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FordMsg4B0Miss() (Rte_Inst_FordMsg4B0BusHiSpd->Pim_FordMsg4B0Miss) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FordVehYawStabyVldPrev() (Rte_Inst_FordMsg4B0BusHiSpd->Pim_FordVehYawStabyVldPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_IniVehYawStabyInvld() (Rte_Inst_FordMsg4B0BusHiSpd->Pim_IniVehYawStabyInvld) /* PRQA S 3453 */ /* MD_MSR_19.7 */




/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   uint32 *Rte_Pim_CanDtcInhbRefTi(void)
 *   uint32 *Rte_Pim_MsgFltNtcDiagcRefTi(void)
 *   uint32 *Rte_Pim_MsgFltRefTi(void)
 *   uint32 *Rte_Pim_MsgMissNtcDiagcRefTi(void)
 *   uint32 *Rte_Pim_MsgNoDataExistNtcDiagcRefTi(void)
 *   uint32 *Rte_Pim_MsgNoDataExistRefTi(void)
 *   uint32 *Rte_Pim_MsgNotRxdRefTi(void)
 *   uint32 *Rte_Pim_MsgRxdNtcDiagcRefTi(void)
 *   uint32 *Rte_Pim_MsgVldNtcDiagcRefTi(void)
 *   uint32 *Rte_Pim_MsgVldRefTi(void)
 *   uint16 *Rte_Pim_FordVehYawStabyRawPrev(void)
 *   uint8 *Rte_Pim_ClrDiagcFlgProxyPrev(void)
 *   boolean *Rte_Pim_FordMsg4B0Miss(void)
 *   boolean *Rte_Pim_FordVehYawStabyVldPrev(void)
 *   boolean *Rte_Pim_IniVehYawStabyInvld(void)
 *
 * Calibration Parameters:
 * =======================
 *   Calibration Component Calibration Parameters:
 *   ---------------------------------------------
 *   u16p0 Rte_Prm_FordMsg4B0BusHiSpdCanDtcInhbTiThd_Val(void)
 *   u16p0 Rte_Prm_FordMsg4B0BusHiSpdMsgFltNtcDiagcTiThd_Val(void)
 *   u16p0 Rte_Prm_FordMsg4B0BusHiSpdMsgFltTiThd_Val(void)
 *   u16p0 Rte_Prm_FordMsg4B0BusHiSpdMsgMissNtcDiagcTiThd_Val(void)
 *   u16p0 Rte_Prm_FordMsg4B0BusHiSpdMsgMissTiThd_Val(void)
 *   u16p0 Rte_Prm_FordMsg4B0BusHiSpdMsgRxdNtcDiagcTiThd_Val(void)
 *   u16p0 Rte_Prm_FordMsg4B0BusHiSpdMsgVldNtcDiagcTiThd_Val(void)
 *   u16p0 Rte_Prm_FordMsg4B0BusHiSpdMsgVldTiThd_Val(void)
 *
 *********************************************************************************************************************/


# define FordMsg4B0BusHiSpd_START_SEC_CODE
# include "FordMsg4B0BusHiSpd_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 *
 * Runnable Entity Name: FordMsg4B0BusHiSpdInit1
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

# define RTE_RUNNABLE_FordMsg4B0BusHiSpdInit1 FordMsg4B0BusHiSpdInit1
FUNC(void, FordMsg4B0BusHiSpd_CODE) FordMsg4B0BusHiSpdInit1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: FordMsg4B0BusHiSpdPer1
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
 *   Std_ReturnType Rte_Read_FordBrkOscnRednEnad_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_FordCanDtcInhb_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_FordEpsLifeCycMod_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_FordEvasSteerAssiEnad_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_FordLaneCentrAssiEnad_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_FordTqSteerCmpEnad_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_Ford_YawStabilityIndex_Ford_YawStabilityIndex(Ford_YawStabilityIndex *data)
 *   Std_ReturnType Rte_Read_LaneDetnWarnEnad_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_LaneKeepAssiEnad_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_TrfcJamAssiEnad_Logl(boolean *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_FordVehYawStabyRaw_Val(uint16 data)
 *   Std_ReturnType Rte_Write_FordVehYawStabyVld_Logl(boolean data)
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

# define RTE_RUNNABLE_FordMsg4B0BusHiSpdPer1 FordMsg4B0BusHiSpdPer1
FUNC(void, FordMsg4B0BusHiSpd_CODE) FordMsg4B0BusHiSpdPer1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define FordMsg4B0BusHiSpd_STOP_SEC_CODE
# include "FordMsg4B0BusHiSpd_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * Application errors
 *********************************************************************************************************************/

# define RTE_E_SetNtcSts_PortIf1_E_NOT_OK (1U)

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_FORDMSG4B0BUSHISPD_H */
