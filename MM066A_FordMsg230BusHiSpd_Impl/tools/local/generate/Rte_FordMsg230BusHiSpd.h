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
 *          File:  Rte_FordMsg230BusHiSpd.h
 *        Config:  C:/Users/NZ5334/Documents/Synergy/Working/ses_dev_ea4/MM066A_FordMsg230BusHiSpd_Impl/tools/Component.dpa
 *     SW-C Type:  FordMsg230BusHiSpd
 *  Generated at:  Fri Apr 13 12:13:07 2018
 *
 *     Generator:  MICROSAR RTE Generator Version 4.13.0
 *                 RTE Core Version 1.13.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <FordMsg230BusHiSpd> (Contract Phase)
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_FORDMSG230BUSHISPD_H
# define _RTE_FORDMSG230BUSHISPD_H

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

# include "Rte_FordMsg230BusHiSpd_Type.h"
# include "Rte_DataHandleType.h"


/**********************************************************************************************************************
 * Component Data Structures and Port Data Structures
 *********************************************************************************************************************/

struct Rte_CDS_FordMsg230BusHiSpd
{
  /* PIM Handles section */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_ClrDiagcFlgProxyPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FirstTranVldFlg; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehGearLvrPosnInvldFaildRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehGearLvrPosnInvldPassdRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(Ford_GearLvrPos_D_Actl, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehGearLvrPosnPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehGearLvrPosnVldFaildRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehGearLvrPosnVldIntPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehGearLvrPosnVldPassdRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehMsg230Miss; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_GearLvrPosnVldMissRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_MissMsgFaildRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_MissMsgPassdRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  /* Vendor specific section */
};

# define RTE_START_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern CONSTP2CONST(struct Rte_CDS_FordMsg230BusHiSpd, RTE_CONST, RTE_CONST) Rte_Inst_FordMsg230BusHiSpd; /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

typedef P2CONST(struct Rte_CDS_FordMsg230BusHiSpd, TYPEDEF, RTE_CONST) Rte_Instance;


/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

# define Rte_InitValue_ClrDiagcFlgProxy_Val (0U)
# define Rte_InitValue_FordCanDtcInhb_Logl (TRUE)
# define Rte_InitValue_FordEpsLifeCycMod_Val (0U)
# define Rte_InitValue_FordTrlrBackupAssiEnad_Logl (FALSE)
# define Rte_InitValue_FordVehGearLvrPosn_Ford_GearLvrPos_D_Actl (14U)
# define Rte_InitValue_FordVehGearLvrPosnVldInt_Logl (FALSE)
# define Rte_InitValue_Ford_GearLvrPos_D_Actl_Ford_GearLvrPos_D_Actl (14U)


# define RTE_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordMsg230BusHiSpd_ClrDiagcFlgProxy_Val(P2VAR(uint8, AUTOMATIC, RTE_FORDMSG230BUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordMsg230BusHiSpd_FordCanDtcInhb_Logl(P2VAR(boolean, AUTOMATIC, RTE_FORDMSG230BUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordMsg230BusHiSpd_FordEpsLifeCycMod_Val(P2VAR(uint8, AUTOMATIC, RTE_FORDMSG230BUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordMsg230BusHiSpd_FordTrlrBackupAssiEnad_Logl(P2VAR(boolean, AUTOMATIC, RTE_FORDMSG230BUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordMsg230BusHiSpd_Ford_GearLvrPos_D_Actl_Ford_GearLvrPos_D_Actl(P2VAR(Ford_GearLvrPos_D_Actl, AUTOMATIC, RTE_FORDMSG230BUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_FordMsg230BusHiSpd_FordVehGearLvrPosn_Ford_GearLvrPos_D_Actl(Ford_GearLvrPos_D_Actl data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_FordMsg230BusHiSpd_FordVehGearLvrPosnVldInt_Logl(boolean data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_FordMsg230BusHiSpd_GetRefTmr100MicroSec32bit_Oper(P2VAR(uint32, AUTOMATIC, RTE_FORDMSG230BUSHISPD_APPL_VAR) RefTmr_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_FordMsg230BusHiSpd_GetTiSpan100MicroSec32bit_Oper(uint32 RefTmr_Arg, P2VAR(uint32, AUTOMATIC, RTE_FORDMSG230BUSHISPD_APPL_VAR) TiSpan_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_FordMsg230BusHiSpd_SetNtcSts_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_FordMsg230BusHiSpd_FordMsg230BusHiSpdFordVehGearLvrPosnFaildTiThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_FordMsg230BusHiSpd_FordMsg230BusHiSpdFordVehGearLvrPosnPassdTiThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_FordMsg230BusHiSpd_FordMsg230BusHiSpdGearLvrPosnMissTiThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_FordMsg230BusHiSpd_FordMsg230BusHiSpdInvldSigFaildThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_FordMsg230BusHiSpd_FordMsg230BusHiSpdInvldSigPassdThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_FordMsg230BusHiSpd_FordMsg230BusHiSpdMissMsgFaildThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_FordMsg230BusHiSpd_FordMsg230BusHiSpdMissMsgPassdThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */



/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Read_ClrDiagcFlgProxy_Val Rte_Read_FordMsg230BusHiSpd_ClrDiagcFlgProxy_Val
# define Rte_Read_FordCanDtcInhb_Logl Rte_Read_FordMsg230BusHiSpd_FordCanDtcInhb_Logl
# define Rte_Read_FordEpsLifeCycMod_Val Rte_Read_FordMsg230BusHiSpd_FordEpsLifeCycMod_Val
# define Rte_Read_FordTrlrBackupAssiEnad_Logl Rte_Read_FordMsg230BusHiSpd_FordTrlrBackupAssiEnad_Logl
# define Rte_Read_Ford_GearLvrPos_D_Actl_Ford_GearLvrPos_D_Actl Rte_Read_FordMsg230BusHiSpd_Ford_GearLvrPos_D_Actl_Ford_GearLvrPos_D_Actl


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Write_FordVehGearLvrPosn_Ford_GearLvrPos_D_Actl Rte_Write_FordMsg230BusHiSpd_FordVehGearLvrPosn_Ford_GearLvrPos_D_Actl
# define Rte_Write_FordVehGearLvrPosnVldInt_Logl Rte_Write_FordMsg230BusHiSpd_FordVehGearLvrPosnVldInt_Logl


/**********************************************************************************************************************
 * Rte_Call_<p>_<o> (C/S invocation)
 *********************************************************************************************************************/
# define Rte_Call_GetRefTmr100MicroSec32bit_Oper Rte_Call_FordMsg230BusHiSpd_GetRefTmr100MicroSec32bit_Oper
# define Rte_Call_GetTiSpan100MicroSec32bit_Oper Rte_Call_FordMsg230BusHiSpd_GetTiSpan100MicroSec32bit_Oper
# define Rte_Call_SetNtcSts_Oper Rte_Call_FordMsg230BusHiSpd_SetNtcSts_Oper


/**********************************************************************************************************************
 * Rte_Prm (Calibration component calibration parameters)
 *********************************************************************************************************************/

# define Rte_Prm_FordMsg230BusHiSpdFordVehGearLvrPosnFaildTiThd_Val Rte_Prm_FordMsg230BusHiSpd_FordMsg230BusHiSpdFordVehGearLvrPosnFaildTiThd_Val

# define Rte_Prm_FordMsg230BusHiSpdFordVehGearLvrPosnPassdTiThd_Val Rte_Prm_FordMsg230BusHiSpd_FordMsg230BusHiSpdFordVehGearLvrPosnPassdTiThd_Val

# define Rte_Prm_FordMsg230BusHiSpdGearLvrPosnMissTiThd_Val Rte_Prm_FordMsg230BusHiSpd_FordMsg230BusHiSpdGearLvrPosnMissTiThd_Val

# define Rte_Prm_FordMsg230BusHiSpdInvldSigFaildThd_Val Rte_Prm_FordMsg230BusHiSpd_FordMsg230BusHiSpdInvldSigFaildThd_Val

# define Rte_Prm_FordMsg230BusHiSpdInvldSigPassdThd_Val Rte_Prm_FordMsg230BusHiSpd_FordMsg230BusHiSpdInvldSigPassdThd_Val

# define Rte_Prm_FordMsg230BusHiSpdMissMsgFaildThd_Val Rte_Prm_FordMsg230BusHiSpd_FordMsg230BusHiSpdMissMsgFaildThd_Val

# define Rte_Prm_FordMsg230BusHiSpdMissMsgPassdThd_Val Rte_Prm_FordMsg230BusHiSpd_FordMsg230BusHiSpdMissMsgPassdThd_Val

/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Rte_Pim (Per-Instance Memory)
 *********************************************************************************************************************/

# define Rte_Pim_FordVehGearLvrPosnInvldFaildRefTi() (Rte_Inst_FordMsg230BusHiSpd->Pim_FordVehGearLvrPosnInvldFaildRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FordVehGearLvrPosnInvldPassdRefTi() (Rte_Inst_FordMsg230BusHiSpd->Pim_FordVehGearLvrPosnInvldPassdRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FordVehGearLvrPosnVldFaildRefTi() (Rte_Inst_FordMsg230BusHiSpd->Pim_FordVehGearLvrPosnVldFaildRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FordVehGearLvrPosnVldPassdRefTi() (Rte_Inst_FordMsg230BusHiSpd->Pim_FordVehGearLvrPosnVldPassdRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_GearLvrPosnVldMissRefTi() (Rte_Inst_FordMsg230BusHiSpd->Pim_GearLvrPosnVldMissRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_MissMsgFaildRefTi() (Rte_Inst_FordMsg230BusHiSpd->Pim_MissMsgFaildRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_MissMsgPassdRefTi() (Rte_Inst_FordMsg230BusHiSpd->Pim_MissMsgPassdRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_ClrDiagcFlgProxyPrev() (Rte_Inst_FordMsg230BusHiSpd->Pim_ClrDiagcFlgProxyPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FordVehGearLvrPosnPrev() (Rte_Inst_FordMsg230BusHiSpd->Pim_FordVehGearLvrPosnPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FirstTranVldFlg() (Rte_Inst_FordMsg230BusHiSpd->Pim_FirstTranVldFlg) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FordVehGearLvrPosnVldIntPrev() (Rte_Inst_FordMsg230BusHiSpd->Pim_FordVehGearLvrPosnVldIntPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FordVehMsg230Miss() (Rte_Inst_FordMsg230BusHiSpd->Pim_FordVehMsg230Miss) /* PRQA S 3453 */ /* MD_MSR_19.7 */




/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   uint32 *Rte_Pim_FordVehGearLvrPosnInvldFaildRefTi(void)
 *   uint32 *Rte_Pim_FordVehGearLvrPosnInvldPassdRefTi(void)
 *   uint32 *Rte_Pim_FordVehGearLvrPosnVldFaildRefTi(void)
 *   uint32 *Rte_Pim_FordVehGearLvrPosnVldPassdRefTi(void)
 *   uint32 *Rte_Pim_GearLvrPosnVldMissRefTi(void)
 *   uint32 *Rte_Pim_MissMsgFaildRefTi(void)
 *   uint32 *Rte_Pim_MissMsgPassdRefTi(void)
 *   uint8 *Rte_Pim_ClrDiagcFlgProxyPrev(void)
 *   Ford_GearLvrPos_D_Actl *Rte_Pim_FordVehGearLvrPosnPrev(void)
 *   boolean *Rte_Pim_FirstTranVldFlg(void)
 *   boolean *Rte_Pim_FordVehGearLvrPosnVldIntPrev(void)
 *   boolean *Rte_Pim_FordVehMsg230Miss(void)
 *
 * Calibration Parameters:
 * =======================
 *   Calibration Component Calibration Parameters:
 *   ---------------------------------------------
 *   uint16 Rte_Prm_FordMsg230BusHiSpdFordVehGearLvrPosnFaildTiThd_Val(void)
 *   uint16 Rte_Prm_FordMsg230BusHiSpdFordVehGearLvrPosnPassdTiThd_Val(void)
 *   uint16 Rte_Prm_FordMsg230BusHiSpdGearLvrPosnMissTiThd_Val(void)
 *   uint16 Rte_Prm_FordMsg230BusHiSpdInvldSigFaildThd_Val(void)
 *   uint16 Rte_Prm_FordMsg230BusHiSpdInvldSigPassdThd_Val(void)
 *   uint16 Rte_Prm_FordMsg230BusHiSpdMissMsgFaildThd_Val(void)
 *   uint16 Rte_Prm_FordMsg230BusHiSpdMissMsgPassdThd_Val(void)
 *
 *********************************************************************************************************************/


# define FordMsg230BusHiSpd_START_SEC_CODE
# include "FordMsg230BusHiSpd_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 *
 * Runnable Entity Name: FordMsg230BusHiSpdInit1
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

# define RTE_RUNNABLE_FordMsg230BusHiSpdInit1 FordMsg230BusHiSpdInit1
FUNC(void, FordMsg230BusHiSpd_CODE) FordMsg230BusHiSpdInit1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: FordMsg230BusHiSpdPer1
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
 *   Std_ReturnType Rte_Read_Ford_GearLvrPos_D_Actl_Ford_GearLvrPos_D_Actl(Ford_GearLvrPos_D_Actl *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_FordVehGearLvrPosn_Ford_GearLvrPos_D_Actl(Ford_GearLvrPos_D_Actl data)
 *   Std_ReturnType Rte_Write_FordVehGearLvrPosnVldInt_Logl(boolean data)
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

# define RTE_RUNNABLE_FordMsg230BusHiSpdPer1 FordMsg230BusHiSpdPer1
FUNC(void, FordMsg230BusHiSpd_CODE) FordMsg230BusHiSpdPer1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define FordMsg230BusHiSpd_STOP_SEC_CODE
# include "FordMsg230BusHiSpd_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * Application errors
 *********************************************************************************************************************/

# define RTE_E_SetNtcSts_PortIf1_E_NOT_OK (1U)

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_FORDMSG230BUSHISPD_H */

#include "Rte_Stubs.h"
