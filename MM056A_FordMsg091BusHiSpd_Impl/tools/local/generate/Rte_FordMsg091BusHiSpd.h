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
 *          File:  Rte_FordMsg091BusHiSpd.h
 *        Config:  C:/Users/NZ5334/Documents/Synergy/Working/ses_dev_ea4/MM056A_FordMsg091BusHiSpd_Impl/tools/Component.dpa
 *     SW-C Type:  FordMsg091BusHiSpd
 *  Generated at:  Sat Apr 14 20:07:42 2018
 *
 *     Generator:  MICROSAR RTE Generator Version 4.13.0
 *                 RTE Core Version 1.13.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <FordMsg091BusHiSpd> (Contract Phase)
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_FORDMSG091BUSHISPD_H
# define _RTE_FORDMSG091BUSHISPD_H

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

# include "Rte_FordMsg091BusHiSpd_Type.h"
# include "Rte_DataHandleType.h"


/**********************************************************************************************************************
 * Component Data Structures and Port Data Structures
 *********************************************************************************************************************/

struct Rte_CDS_FordMsg091BusHiSpd
{
  /* PIM Handles section */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_ClrDiagcFlgProxyPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FirstTranVldFlg; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehMsg091Miss; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehYawRatePrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint16, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehYawRateRawPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehYawRateRawVldFaildRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehYawRateRawVldMissRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehYawRateRawVldPassdRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehYawRateRawVldPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_InvldMsgFaildRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_InvldMsgPassdRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_MissMsgFaildRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_MissMsgPassdRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  /* Vendor specific section */
};

# define RTE_START_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern CONSTP2CONST(struct Rte_CDS_FordMsg091BusHiSpd, RTE_CONST, RTE_CONST) Rte_Inst_FordMsg091BusHiSpd; /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

typedef P2CONST(struct Rte_CDS_FordMsg091BusHiSpd, TYPEDEF, RTE_CONST) Rte_Instance;


/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

# define Rte_InitValue_ClrDiagcFlgProxy_Val (0U)
# define Rte_InitValue_FordCanDtcInhb_Logl (TRUE)
# define Rte_InitValue_FordEpsLifeCycMod_Val (0U)
# define Rte_InitValue_FordLaneCentrAssiEnad_Logl (FALSE)
# define Rte_InitValue_FordTrfcJamAssiEnad_Logl (FALSE)
# define Rte_InitValue_FordTrlrBackUpAssiEnad_Logl (FALSE)
# define Rte_InitValue_FordVehYawRate_Val (6.6066F)
# define Rte_InitValue_FordVehYawRateRaw_Ford_VehYaw_W_Actl (65534U)
# define Rte_InitValue_FordVehYawRateRawVld_Logl (FALSE)
# define Rte_InitValue_Ford_VehYaw_W_Actl_Ford_VehYaw_W_Actl (65534U)


# define RTE_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordMsg091BusHiSpd_ClrDiagcFlgProxy_Val(P2VAR(uint8, AUTOMATIC, RTE_FORDMSG091BUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordMsg091BusHiSpd_FordCanDtcInhb_Logl(P2VAR(boolean, AUTOMATIC, RTE_FORDMSG091BUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordMsg091BusHiSpd_FordEpsLifeCycMod_Val(P2VAR(uint8, AUTOMATIC, RTE_FORDMSG091BUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordMsg091BusHiSpd_FordLaneCentrAssiEnad_Logl(P2VAR(boolean, AUTOMATIC, RTE_FORDMSG091BUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordMsg091BusHiSpd_FordTrfcJamAssiEnad_Logl(P2VAR(boolean, AUTOMATIC, RTE_FORDMSG091BUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordMsg091BusHiSpd_FordTrlrBackUpAssiEnad_Logl(P2VAR(boolean, AUTOMATIC, RTE_FORDMSG091BUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordMsg091BusHiSpd_Ford_VehYaw_W_Actl_Ford_VehYaw_W_Actl(P2VAR(Ford_VehYaw_W_Actl, AUTOMATIC, RTE_FORDMSG091BUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_FordMsg091BusHiSpd_FordVehYawRate_Val(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_FordMsg091BusHiSpd_FordVehYawRateRaw_Ford_VehYaw_W_Actl(Ford_VehYaw_W_Actl data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_FordMsg091BusHiSpd_FordVehYawRateRawVld_Logl(boolean data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_FordMsg091BusHiSpd_GetRefTmr100MicroSec32bit_Oper(P2VAR(uint32, AUTOMATIC, RTE_FORDMSG091BUSHISPD_APPL_VAR) RefTmr_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_FordMsg091BusHiSpd_GetTiSpan100MicroSec32bit_Oper(uint32 RefTmr_Arg, P2VAR(uint32, AUTOMATIC, RTE_FORDMSG091BUSHISPD_APPL_VAR) TiSpan_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_FordMsg091BusHiSpd_SetNtcSts_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_FordMsg091BusHiSpd_FordMsg091BusHiSpdInvldMsgFaildThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_FordMsg091BusHiSpd_FordMsg091BusHiSpdInvldMsgPassdThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_FordMsg091BusHiSpd_FordMsg091BusHiSpdMissMsgFaildThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_FordMsg091BusHiSpd_FordMsg091BusHiSpdMissMsgPassdThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_FordMsg091BusHiSpd_FordMsg091BusHiSpdYawRateRawVldMissFaildThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_FordMsg091BusHiSpd_FordMsg091BusHiSpdYawRateRawVldSigFaildThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_FordMsg091BusHiSpd_FordMsg091BusHiSpdYawRateRawVldSigPassdThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */



/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Read_ClrDiagcFlgProxy_Val Rte_Read_FordMsg091BusHiSpd_ClrDiagcFlgProxy_Val
# define Rte_Read_FordCanDtcInhb_Logl Rte_Read_FordMsg091BusHiSpd_FordCanDtcInhb_Logl
# define Rte_Read_FordEpsLifeCycMod_Val Rte_Read_FordMsg091BusHiSpd_FordEpsLifeCycMod_Val
# define Rte_Read_FordLaneCentrAssiEnad_Logl Rte_Read_FordMsg091BusHiSpd_FordLaneCentrAssiEnad_Logl
# define Rte_Read_FordTrfcJamAssiEnad_Logl Rte_Read_FordMsg091BusHiSpd_FordTrfcJamAssiEnad_Logl
# define Rte_Read_FordTrlrBackUpAssiEnad_Logl Rte_Read_FordMsg091BusHiSpd_FordTrlrBackUpAssiEnad_Logl
# define Rte_Read_Ford_VehYaw_W_Actl_Ford_VehYaw_W_Actl Rte_Read_FordMsg091BusHiSpd_Ford_VehYaw_W_Actl_Ford_VehYaw_W_Actl


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Write_FordVehYawRate_Val Rte_Write_FordMsg091BusHiSpd_FordVehYawRate_Val
# define Rte_Write_FordVehYawRateRaw_Ford_VehYaw_W_Actl Rte_Write_FordMsg091BusHiSpd_FordVehYawRateRaw_Ford_VehYaw_W_Actl
# define Rte_Write_FordVehYawRateRawVld_Logl Rte_Write_FordMsg091BusHiSpd_FordVehYawRateRawVld_Logl


/**********************************************************************************************************************
 * Rte_Call_<p>_<o> (C/S invocation)
 *********************************************************************************************************************/
# define Rte_Call_GetRefTmr100MicroSec32bit_Oper Rte_Call_FordMsg091BusHiSpd_GetRefTmr100MicroSec32bit_Oper
# define Rte_Call_GetTiSpan100MicroSec32bit_Oper Rte_Call_FordMsg091BusHiSpd_GetTiSpan100MicroSec32bit_Oper
# define Rte_Call_SetNtcSts_Oper Rte_Call_FordMsg091BusHiSpd_SetNtcSts_Oper


/**********************************************************************************************************************
 * Rte_Prm (Calibration component calibration parameters)
 *********************************************************************************************************************/

# define Rte_Prm_FordMsg091BusHiSpdInvldMsgFaildThd_Val Rte_Prm_FordMsg091BusHiSpd_FordMsg091BusHiSpdInvldMsgFaildThd_Val

# define Rte_Prm_FordMsg091BusHiSpdInvldMsgPassdThd_Val Rte_Prm_FordMsg091BusHiSpd_FordMsg091BusHiSpdInvldMsgPassdThd_Val

# define Rte_Prm_FordMsg091BusHiSpdMissMsgFaildThd_Val Rte_Prm_FordMsg091BusHiSpd_FordMsg091BusHiSpdMissMsgFaildThd_Val

# define Rte_Prm_FordMsg091BusHiSpdMissMsgPassdThd_Val Rte_Prm_FordMsg091BusHiSpd_FordMsg091BusHiSpdMissMsgPassdThd_Val

# define Rte_Prm_FordMsg091BusHiSpdYawRateRawVldMissFaildThd_Val Rte_Prm_FordMsg091BusHiSpd_FordMsg091BusHiSpdYawRateRawVldMissFaildThd_Val

# define Rte_Prm_FordMsg091BusHiSpdYawRateRawVldSigFaildThd_Val Rte_Prm_FordMsg091BusHiSpd_FordMsg091BusHiSpdYawRateRawVldSigFaildThd_Val

# define Rte_Prm_FordMsg091BusHiSpdYawRateRawVldSigPassdThd_Val Rte_Prm_FordMsg091BusHiSpd_FordMsg091BusHiSpdYawRateRawVldSigPassdThd_Val

/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Rte_Pim (Per-Instance Memory)
 *********************************************************************************************************************/

# define Rte_Pim_FordVehYawRatePrev() (Rte_Inst_FordMsg091BusHiSpd->Pim_FordVehYawRatePrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FordVehYawRateRawVldFaildRefTi() (Rte_Inst_FordMsg091BusHiSpd->Pim_FordVehYawRateRawVldFaildRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FordVehYawRateRawVldMissRefTi() (Rte_Inst_FordMsg091BusHiSpd->Pim_FordVehYawRateRawVldMissRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FordVehYawRateRawVldPassdRefTi() (Rte_Inst_FordMsg091BusHiSpd->Pim_FordVehYawRateRawVldPassdRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_InvldMsgFaildRefTi() (Rte_Inst_FordMsg091BusHiSpd->Pim_InvldMsgFaildRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_InvldMsgPassdRefTi() (Rte_Inst_FordMsg091BusHiSpd->Pim_InvldMsgPassdRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_MissMsgFaildRefTi() (Rte_Inst_FordMsg091BusHiSpd->Pim_MissMsgFaildRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_MissMsgPassdRefTi() (Rte_Inst_FordMsg091BusHiSpd->Pim_MissMsgPassdRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FordVehYawRateRawPrev() (Rte_Inst_FordMsg091BusHiSpd->Pim_FordVehYawRateRawPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_ClrDiagcFlgProxyPrev() (Rte_Inst_FordMsg091BusHiSpd->Pim_ClrDiagcFlgProxyPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FirstTranVldFlg() (Rte_Inst_FordMsg091BusHiSpd->Pim_FirstTranVldFlg) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FordVehMsg091Miss() (Rte_Inst_FordMsg091BusHiSpd->Pim_FordVehMsg091Miss) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FordVehYawRateRawVldPrev() (Rte_Inst_FordMsg091BusHiSpd->Pim_FordVehYawRateRawVldPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */




/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   float32 *Rte_Pim_FordVehYawRatePrev(void)
 *   uint32 *Rte_Pim_FordVehYawRateRawVldFaildRefTi(void)
 *   uint32 *Rte_Pim_FordVehYawRateRawVldMissRefTi(void)
 *   uint32 *Rte_Pim_FordVehYawRateRawVldPassdRefTi(void)
 *   uint32 *Rte_Pim_InvldMsgFaildRefTi(void)
 *   uint32 *Rte_Pim_InvldMsgPassdRefTi(void)
 *   uint32 *Rte_Pim_MissMsgFaildRefTi(void)
 *   uint32 *Rte_Pim_MissMsgPassdRefTi(void)
 *   uint16 *Rte_Pim_FordVehYawRateRawPrev(void)
 *   uint8 *Rte_Pim_ClrDiagcFlgProxyPrev(void)
 *   boolean *Rte_Pim_FirstTranVldFlg(void)
 *   boolean *Rte_Pim_FordVehMsg091Miss(void)
 *   boolean *Rte_Pim_FordVehYawRateRawVldPrev(void)
 *
 * Calibration Parameters:
 * =======================
 *   Calibration Component Calibration Parameters:
 *   ---------------------------------------------
 *   uint16 Rte_Prm_FordMsg091BusHiSpdInvldMsgFaildThd_Val(void)
 *   uint16 Rte_Prm_FordMsg091BusHiSpdInvldMsgPassdThd_Val(void)
 *   uint16 Rte_Prm_FordMsg091BusHiSpdMissMsgFaildThd_Val(void)
 *   uint16 Rte_Prm_FordMsg091BusHiSpdMissMsgPassdThd_Val(void)
 *   uint16 Rte_Prm_FordMsg091BusHiSpdYawRateRawVldMissFaildThd_Val(void)
 *   uint16 Rte_Prm_FordMsg091BusHiSpdYawRateRawVldSigFaildThd_Val(void)
 *   uint16 Rte_Prm_FordMsg091BusHiSpdYawRateRawVldSigPassdThd_Val(void)
 *
 *********************************************************************************************************************/


# define FordMsg091BusHiSpd_START_SEC_CODE
# include "FordMsg091BusHiSpd_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 *
 * Runnable Entity Name: FordMsg091BusHiSpdInit1
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

# define RTE_RUNNABLE_FordMsg091BusHiSpdInit1 FordMsg091BusHiSpdInit1
FUNC(void, FordMsg091BusHiSpd_CODE) FordMsg091BusHiSpdInit1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: FordMsg091BusHiSpdPer1
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
 *   Std_ReturnType Rte_Read_FordLaneCentrAssiEnad_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_FordTrfcJamAssiEnad_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_FordTrlrBackUpAssiEnad_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_Ford_VehYaw_W_Actl_Ford_VehYaw_W_Actl(Ford_VehYaw_W_Actl *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_FordVehYawRate_Val(float32 data)
 *   Std_ReturnType Rte_Write_FordVehYawRateRaw_Ford_VehYaw_W_Actl(Ford_VehYaw_W_Actl data)
 *   Std_ReturnType Rte_Write_FordVehYawRateRawVld_Logl(boolean data)
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

# define RTE_RUNNABLE_FordMsg091BusHiSpdPer1 FordMsg091BusHiSpdPer1
FUNC(void, FordMsg091BusHiSpd_CODE) FordMsg091BusHiSpdPer1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define FordMsg091BusHiSpd_STOP_SEC_CODE
# include "FordMsg091BusHiSpd_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * Application errors
 *********************************************************************************************************************/

# define RTE_E_SetNtcSts_PortIf1_E_NOT_OK (1U)

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_FORDMSG091BUSHISPD_H */

#include "Rte_Stubs.h"
