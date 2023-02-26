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
 *          File:  Rte_FordMsg3B3BusHiSpd.h
 *        Config:  C:/_Synergy_Projects/Working/MM072A_FordMsg3B3BusHiSpd_Impl/tools/Component.dpa
 *     SW-C Type:  FordMsg3B3BusHiSpd
 *  Generated at:  Tue Feb 20 11:17:21 2018
 *
 *     Generator:  MICROSAR RTE Generator Version 4.13.0
 *                 RTE Core Version 1.13.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <FordMsg3B3BusHiSpd> (Contract Phase)
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_FORDMSG3B3BUSHISPD_H
# define _RTE_FORDMSG3B3BUSHISPD_H

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

# include "Rte_FordMsg3B3BusHiSpd_Type.h"
# include "Rte_DataHandleType.h"


/**********************************************************************************************************************
 * Component Data Structures and Port Data Structures
 *********************************************************************************************************************/

struct Rte_CDS_FordMsg3B3BusHiSpd
{
  /* PIM Handles section */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_ClrDiagcFlgProxyPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FirstTranVldFlg; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehIgnStsInvldSigFaildRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehIgnStsInvldSigPassdRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(Ford_Ignition_Status, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehIgnStsPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehIgnStsVldPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(Ford_LifeCycMde_D_Actl, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehLifeCycModPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehMsg3B3Miss; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehMsg3B3Rxd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_IgnStsVldFaildRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_IgnStsVldMissRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_IgnStsVldPassdRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_MissMsgFaildRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_MissMsgPassdRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  /* Vendor specific section */
};

# define RTE_START_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern CONSTP2CONST(struct Rte_CDS_FordMsg3B3BusHiSpd, RTE_CONST, RTE_CONST) Rte_Inst_FordMsg3B3BusHiSpd; /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

typedef P2CONST(struct Rte_CDS_FordMsg3B3BusHiSpd, TYPEDEF, RTE_CONST) Rte_Instance;


/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

# define Rte_InitValue_ClrDiagcFlgProxy_Val (0U)
# define Rte_InitValue_FordCanDtcInhb_Val (1U)
# define Rte_InitValue_FordEpsLifeCycMod_Val (0U)
# define Rte_InitValue_FordInvldMsgDiagcInhb_Val (0U)
# define Rte_InitValue_FordMfgDiagcInhb_Val (0U)
# define Rte_InitValue_FordMissMsgDiagcInhb_Val (0U)
# define Rte_InitValue_FordTrlrBackUpAssiEnad_Logl (FALSE)
# define Rte_InitValue_FordVehIgnSts_Ford_Ignition_Status (0U)
# define Rte_InitValue_FordVehIgnStsVld_Logl (FALSE)
# define Rte_InitValue_FordVehLifeCycMod_Ford_LifeCycMde_D_Actl (0U)
# define Rte_InitValue_Ford_Ignition_Status1_Ford_Ignition_Status (0U)
# define Rte_InitValue_Ford_LifeCycMde_D_Actl1_Ford_LifeCycMde_D_Actl (0U)


# define RTE_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordMsg3B3BusHiSpd_ClrDiagcFlgProxy_Val(P2VAR(uint8, AUTOMATIC, RTE_FORDMSG3B3BUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordMsg3B3BusHiSpd_FordCanDtcInhb_Val(P2VAR(uint8, AUTOMATIC, RTE_FORDMSG3B3BUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordMsg3B3BusHiSpd_FordEpsLifeCycMod_Val(P2VAR(uint8, AUTOMATIC, RTE_FORDMSG3B3BUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordMsg3B3BusHiSpd_FordInvldMsgDiagcInhb_Val(P2VAR(uint8, AUTOMATIC, RTE_FORDMSG3B3BUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordMsg3B3BusHiSpd_FordMfgDiagcInhb_Val(P2VAR(uint8, AUTOMATIC, RTE_FORDMSG3B3BUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordMsg3B3BusHiSpd_FordMissMsgDiagcInhb_Val(P2VAR(uint8, AUTOMATIC, RTE_FORDMSG3B3BUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordMsg3B3BusHiSpd_FordTrlrBackUpAssiEnad_Logl(P2VAR(boolean, AUTOMATIC, RTE_FORDMSG3B3BUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordMsg3B3BusHiSpd_Ford_Ignition_Status1_Ford_Ignition_Status(P2VAR(Ford_Ignition_Status, AUTOMATIC, RTE_FORDMSG3B3BUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordMsg3B3BusHiSpd_Ford_LifeCycMde_D_Actl1_Ford_LifeCycMde_D_Actl(P2VAR(Ford_LifeCycMde_D_Actl, AUTOMATIC, RTE_FORDMSG3B3BUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_FordMsg3B3BusHiSpd_FordVehIgnSts_Ford_Ignition_Status(Ford_Ignition_Status data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_FordMsg3B3BusHiSpd_FordVehIgnStsVld_Logl(boolean data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_FordMsg3B3BusHiSpd_FordVehLifeCycMod_Ford_LifeCycMde_D_Actl(Ford_LifeCycMde_D_Actl data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_FordMsg3B3BusHiSpd_GetRefTmr100MicroSec32bit_Oper(P2VAR(uint32, AUTOMATIC, RTE_FORDMSG3B3BUSHISPD_APPL_VAR) RefTmr_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_FordMsg3B3BusHiSpd_GetTiSpan100MicroSec32bit_Oper(uint32 RefTmr_Arg, P2VAR(uint32, AUTOMATIC, RTE_FORDMSG3B3BUSHISPD_APPL_VAR) TiSpan_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_FordMsg3B3BusHiSpd_SetNtcSts_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(u16p0, RTE_CODE) Rte_Prm_FordMsg3B3BusHiSpd_FordMsg3B3BusHiSpdIgnStsVldFaildThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(u16p0, RTE_CODE) Rte_Prm_FordMsg3B3BusHiSpd_FordMsg3B3BusHiSpdIgnStsVldMissThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(u16p0, RTE_CODE) Rte_Prm_FordMsg3B3BusHiSpd_FordMsg3B3BusHiSpdIgnStsVldPassdThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(u16p0, RTE_CODE) Rte_Prm_FordMsg3B3BusHiSpd_FordMsg3B3BusHiSpdInvldSigFaildThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(u16p0, RTE_CODE) Rte_Prm_FordMsg3B3BusHiSpd_FordMsg3B3BusHiSpdInvldSigPassdThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(u16p0, RTE_CODE) Rte_Prm_FordMsg3B3BusHiSpd_FordMsg3B3BusHiSpdMissMsgFaildThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(u16p0, RTE_CODE) Rte_Prm_FordMsg3B3BusHiSpd_FordMsg3B3BusHiSpdMissMsgPassdThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */



/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Read_ClrDiagcFlgProxy_Val Rte_Read_FordMsg3B3BusHiSpd_ClrDiagcFlgProxy_Val
# define Rte_Read_FordCanDtcInhb_Val Rte_Read_FordMsg3B3BusHiSpd_FordCanDtcInhb_Val
# define Rte_Read_FordEpsLifeCycMod_Val Rte_Read_FordMsg3B3BusHiSpd_FordEpsLifeCycMod_Val
# define Rte_Read_FordInvldMsgDiagcInhb_Val Rte_Read_FordMsg3B3BusHiSpd_FordInvldMsgDiagcInhb_Val
# define Rte_Read_FordMfgDiagcInhb_Val Rte_Read_FordMsg3B3BusHiSpd_FordMfgDiagcInhb_Val
# define Rte_Read_FordMissMsgDiagcInhb_Val Rte_Read_FordMsg3B3BusHiSpd_FordMissMsgDiagcInhb_Val
# define Rte_Read_FordTrlrBackUpAssiEnad_Logl Rte_Read_FordMsg3B3BusHiSpd_FordTrlrBackUpAssiEnad_Logl
# define Rte_Read_Ford_Ignition_Status1_Ford_Ignition_Status Rte_Read_FordMsg3B3BusHiSpd_Ford_Ignition_Status1_Ford_Ignition_Status
# define Rte_Read_Ford_LifeCycMde_D_Actl1_Ford_LifeCycMde_D_Actl Rte_Read_FordMsg3B3BusHiSpd_Ford_LifeCycMde_D_Actl1_Ford_LifeCycMde_D_Actl


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Write_FordVehIgnSts_Ford_Ignition_Status Rte_Write_FordMsg3B3BusHiSpd_FordVehIgnSts_Ford_Ignition_Status
# define Rte_Write_FordVehIgnStsVld_Logl Rte_Write_FordMsg3B3BusHiSpd_FordVehIgnStsVld_Logl
# define Rte_Write_FordVehLifeCycMod_Ford_LifeCycMde_D_Actl Rte_Write_FordMsg3B3BusHiSpd_FordVehLifeCycMod_Ford_LifeCycMde_D_Actl


/**********************************************************************************************************************
 * Rte_Call_<p>_<o> (C/S invocation)
 *********************************************************************************************************************/
# define Rte_Call_GetRefTmr100MicroSec32bit_Oper Rte_Call_FordMsg3B3BusHiSpd_GetRefTmr100MicroSec32bit_Oper
# define Rte_Call_GetTiSpan100MicroSec32bit_Oper Rte_Call_FordMsg3B3BusHiSpd_GetTiSpan100MicroSec32bit_Oper
# define Rte_Call_SetNtcSts_Oper Rte_Call_FordMsg3B3BusHiSpd_SetNtcSts_Oper


/**********************************************************************************************************************
 * Rte_Prm (Calibration component calibration parameters)
 *********************************************************************************************************************/

# define Rte_Prm_FordMsg3B3BusHiSpdIgnStsVldFaildThd_Val Rte_Prm_FordMsg3B3BusHiSpd_FordMsg3B3BusHiSpdIgnStsVldFaildThd_Val

# define Rte_Prm_FordMsg3B3BusHiSpdIgnStsVldMissThd_Val Rte_Prm_FordMsg3B3BusHiSpd_FordMsg3B3BusHiSpdIgnStsVldMissThd_Val

# define Rte_Prm_FordMsg3B3BusHiSpdIgnStsVldPassdThd_Val Rte_Prm_FordMsg3B3BusHiSpd_FordMsg3B3BusHiSpdIgnStsVldPassdThd_Val

# define Rte_Prm_FordMsg3B3BusHiSpdInvldSigFaildThd_Val Rte_Prm_FordMsg3B3BusHiSpd_FordMsg3B3BusHiSpdInvldSigFaildThd_Val

# define Rte_Prm_FordMsg3B3BusHiSpdInvldSigPassdThd_Val Rte_Prm_FordMsg3B3BusHiSpd_FordMsg3B3BusHiSpdInvldSigPassdThd_Val

# define Rte_Prm_FordMsg3B3BusHiSpdMissMsgFaildThd_Val Rte_Prm_FordMsg3B3BusHiSpd_FordMsg3B3BusHiSpdMissMsgFaildThd_Val

# define Rte_Prm_FordMsg3B3BusHiSpdMissMsgPassdThd_Val Rte_Prm_FordMsg3B3BusHiSpd_FordMsg3B3BusHiSpdMissMsgPassdThd_Val

/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Rte_Pim (Per-Instance Memory)
 *********************************************************************************************************************/

# define Rte_Pim_FordVehIgnStsInvldSigFaildRefTi() (Rte_Inst_FordMsg3B3BusHiSpd->Pim_FordVehIgnStsInvldSigFaildRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FordVehIgnStsInvldSigPassdRefTi() (Rte_Inst_FordMsg3B3BusHiSpd->Pim_FordVehIgnStsInvldSigPassdRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_IgnStsVldFaildRefTi() (Rte_Inst_FordMsg3B3BusHiSpd->Pim_IgnStsVldFaildRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_IgnStsVldMissRefTi() (Rte_Inst_FordMsg3B3BusHiSpd->Pim_IgnStsVldMissRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_IgnStsVldPassdRefTi() (Rte_Inst_FordMsg3B3BusHiSpd->Pim_IgnStsVldPassdRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_MissMsgFaildRefTi() (Rte_Inst_FordMsg3B3BusHiSpd->Pim_MissMsgFaildRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_MissMsgPassdRefTi() (Rte_Inst_FordMsg3B3BusHiSpd->Pim_MissMsgPassdRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_ClrDiagcFlgProxyPrev() (Rte_Inst_FordMsg3B3BusHiSpd->Pim_ClrDiagcFlgProxyPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FordVehIgnStsPrev() (Rte_Inst_FordMsg3B3BusHiSpd->Pim_FordVehIgnStsPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FordVehLifeCycModPrev() (Rte_Inst_FordMsg3B3BusHiSpd->Pim_FordVehLifeCycModPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FirstTranVldFlg() (Rte_Inst_FordMsg3B3BusHiSpd->Pim_FirstTranVldFlg) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FordVehIgnStsVldPrev() (Rte_Inst_FordMsg3B3BusHiSpd->Pim_FordVehIgnStsVldPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FordVehMsg3B3Miss() (Rte_Inst_FordMsg3B3BusHiSpd->Pim_FordVehMsg3B3Miss) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FordVehMsg3B3Rxd() (Rte_Inst_FordMsg3B3BusHiSpd->Pim_FordVehMsg3B3Rxd) /* PRQA S 3453 */ /* MD_MSR_19.7 */




/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   uint32 *Rte_Pim_FordVehIgnStsInvldSigFaildRefTi(void)
 *   uint32 *Rte_Pim_FordVehIgnStsInvldSigPassdRefTi(void)
 *   uint32 *Rte_Pim_IgnStsVldFaildRefTi(void)
 *   uint32 *Rte_Pim_IgnStsVldMissRefTi(void)
 *   uint32 *Rte_Pim_IgnStsVldPassdRefTi(void)
 *   uint32 *Rte_Pim_MissMsgFaildRefTi(void)
 *   uint32 *Rte_Pim_MissMsgPassdRefTi(void)
 *   uint8 *Rte_Pim_ClrDiagcFlgProxyPrev(void)
 *   Ford_Ignition_Status *Rte_Pim_FordVehIgnStsPrev(void)
 *   Ford_LifeCycMde_D_Actl *Rte_Pim_FordVehLifeCycModPrev(void)
 *   boolean *Rte_Pim_FirstTranVldFlg(void)
 *   boolean *Rte_Pim_FordVehIgnStsVldPrev(void)
 *   boolean *Rte_Pim_FordVehMsg3B3Miss(void)
 *   boolean *Rte_Pim_FordVehMsg3B3Rxd(void)
 *
 * Calibration Parameters:
 * =======================
 *   Calibration Component Calibration Parameters:
 *   ---------------------------------------------
 *   u16p0 Rte_Prm_FordMsg3B3BusHiSpdIgnStsVldFaildThd_Val(void)
 *   u16p0 Rte_Prm_FordMsg3B3BusHiSpdIgnStsVldMissThd_Val(void)
 *   u16p0 Rte_Prm_FordMsg3B3BusHiSpdIgnStsVldPassdThd_Val(void)
 *   u16p0 Rte_Prm_FordMsg3B3BusHiSpdInvldSigFaildThd_Val(void)
 *   u16p0 Rte_Prm_FordMsg3B3BusHiSpdInvldSigPassdThd_Val(void)
 *   u16p0 Rte_Prm_FordMsg3B3BusHiSpdMissMsgFaildThd_Val(void)
 *   u16p0 Rte_Prm_FordMsg3B3BusHiSpdMissMsgPassdThd_Val(void)
 *
 *********************************************************************************************************************/


# define FordMsg3B3BusHiSpd_START_SEC_CODE
# include "FordMsg3B3BusHiSpd_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 *
 * Runnable Entity Name: FordMsg3B3BusHiSpdInit1
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

# define RTE_RUNNABLE_FordMsg3B3BusHiSpdInit1 FordMsg3B3BusHiSpdInit1
FUNC(void, FordMsg3B3BusHiSpd_CODE) FordMsg3B3BusHiSpdInit1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: FordMsg3B3BusHiSpdPer1
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
 *   Std_ReturnType Rte_Read_FordCanDtcInhb_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_FordEpsLifeCycMod_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_FordInvldMsgDiagcInhb_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_FordMfgDiagcInhb_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_FordMissMsgDiagcInhb_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_FordTrlrBackUpAssiEnad_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_Ford_Ignition_Status1_Ford_Ignition_Status(Ford_Ignition_Status *data)
 *   Std_ReturnType Rte_Read_Ford_LifeCycMde_D_Actl1_Ford_LifeCycMde_D_Actl(Ford_LifeCycMde_D_Actl *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_FordVehIgnSts_Ford_Ignition_Status(Ford_Ignition_Status data)
 *   Std_ReturnType Rte_Write_FordVehIgnStsVld_Logl(boolean data)
 *   Std_ReturnType Rte_Write_FordVehLifeCycMod_Ford_LifeCycMde_D_Actl(Ford_LifeCycMde_D_Actl data)
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

# define RTE_RUNNABLE_FordMsg3B3BusHiSpdPer1 FordMsg3B3BusHiSpdPer1
FUNC(void, FordMsg3B3BusHiSpd_CODE) FordMsg3B3BusHiSpdPer1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define FordMsg3B3BusHiSpd_STOP_SEC_CODE
# include "FordMsg3B3BusHiSpd_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * Application errors
 *********************************************************************************************************************/

# define RTE_E_SetNtcSts_PortIf1_E_NOT_OK (1U)

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_FORDMSG3B3BUSHISPD_H */

#include "Rte_Stubs.h"
