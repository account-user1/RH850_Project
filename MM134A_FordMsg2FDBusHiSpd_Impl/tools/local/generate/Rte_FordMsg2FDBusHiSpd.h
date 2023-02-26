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
 *          File:  Rte_FordMsg2FDBusHiSpd.h
 *        Config:  C:/Users/nz4826/Documents/Mrudula/Synergy_working/comp_dev_ea4/MM134A_FordMsg2FDBusHiSpd_Impl/tools/Component.dpa
 *     SW-C Type:  FordMsg2FDBusHiSpd
 *  Generated at:  Wed Apr 25 15:01:30 2018
 *
 *     Generator:  MICROSAR RTE Generator Version 4.13.0
 *                 RTE Core Version 1.13.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <FordMsg2FDBusHiSpd> (Contract Phase)
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_FORDMSG2FDBUSHISPD_H
# define _RTE_FORDMSG2FDBUSHISPD_H

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

# include "Rte_FordMsg2FDBusHiSpd_Type.h"
# include "Rte_DataHandleType.h"


/**********************************************************************************************************************
 * Component Data Structures and Port Data Structures
 *********************************************************************************************************************/

struct Rte_CDS_FordMsg2FDBusHiSpd
{
  /* PIM Handles section */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_ClrDiagcFlgProxyPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FirstTranVldFlg; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehEvasSteerAssiReqPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehEvasSteerAssiReqVldPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehMsg2FDMiss; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehMsg2FDMissTmr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehMsg2FDNotRxdRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehMsg2FDRxdRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehMsg2FDRxdTmr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  /* Vendor specific section */
};

# define RTE_START_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern CONSTP2CONST(struct Rte_CDS_FordMsg2FDBusHiSpd, RTE_CONST, RTE_CONST) Rte_Inst_FordMsg2FDBusHiSpd; /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

typedef P2CONST(struct Rte_CDS_FordMsg2FDBusHiSpd, TYPEDEF, RTE_CONST) Rte_Instance;


/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

# define Rte_InitValue_ClrDiagcFlgProxy_Val (0U)
# define Rte_InitValue_FordCanDtcInhb_Logl (TRUE)
# define Rte_InitValue_FordEpsLifeCycMod_Val (0U)
# define Rte_InitValue_FordEvasSteerAssiEnad_Logl (FALSE)
# define Rte_InitValue_FordVehEvasSteerAssiReq_Val (1U)
# define Rte_InitValue_FordVehEvasSteerAssiReqVld_Logl (FALSE)
# define Rte_InitValue_Ford_EsaOn_B_Rq1_Ford_EsaOn_B_Rq (TRUE)


# define RTE_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordMsg2FDBusHiSpd_ClrDiagcFlgProxy_Val(P2VAR(uint8, AUTOMATIC, RTE_FORDMSG2FDBUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordMsg2FDBusHiSpd_FordCanDtcInhb_Logl(P2VAR(boolean, AUTOMATIC, RTE_FORDMSG2FDBUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordMsg2FDBusHiSpd_FordEpsLifeCycMod_Val(P2VAR(uint8, AUTOMATIC, RTE_FORDMSG2FDBUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordMsg2FDBusHiSpd_FordEvasSteerAssiEnad_Logl(P2VAR(boolean, AUTOMATIC, RTE_FORDMSG2FDBUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordMsg2FDBusHiSpd_Ford_EsaOn_B_Rq1_Ford_EsaOn_B_Rq(P2VAR(Ford_EsaOn_B_Rq, AUTOMATIC, RTE_FORDMSG2FDBUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_FordMsg2FDBusHiSpd_FordVehEvasSteerAssiReq_Val(uint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_FordMsg2FDBusHiSpd_FordVehEvasSteerAssiReqVld_Logl(boolean data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_FordMsg2FDBusHiSpd_GetRefTmr100MicroSec32bit_Oper(P2VAR(uint32, AUTOMATIC, RTE_FORDMSG2FDBUSHISPD_APPL_VAR) RefTmr_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_FordMsg2FDBusHiSpd_GetTiSpan100MicroSec32bit_Oper(uint32 RefTmr_Arg, P2VAR(uint32, AUTOMATIC, RTE_FORDMSG2FDBUSHISPD_APPL_VAR) TiSpan_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_FordMsg2FDBusHiSpd_SetNtcSts_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_FordMsg2FDBusHiSpd_FordMsg2FDBusHiSpdFordVehEvasSteerAssiReqVldNotRxdTiThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_FordMsg2FDBusHiSpd_FordMsg2FDBusHiSpdFordVehEvasSteerAssiReqVldRxdTiThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_FordMsg2FDBusHiSpd_FordMsg2FDBusHiSpdMissMsgFaildTiThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_FordMsg2FDBusHiSpd_FordMsg2FDBusHiSpdMissMsgPassdTiThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */



/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Read_ClrDiagcFlgProxy_Val Rte_Read_FordMsg2FDBusHiSpd_ClrDiagcFlgProxy_Val
# define Rte_Read_FordCanDtcInhb_Logl Rte_Read_FordMsg2FDBusHiSpd_FordCanDtcInhb_Logl
# define Rte_Read_FordEpsLifeCycMod_Val Rte_Read_FordMsg2FDBusHiSpd_FordEpsLifeCycMod_Val
# define Rte_Read_FordEvasSteerAssiEnad_Logl Rte_Read_FordMsg2FDBusHiSpd_FordEvasSteerAssiEnad_Logl
# define Rte_Read_Ford_EsaOn_B_Rq1_Ford_EsaOn_B_Rq Rte_Read_FordMsg2FDBusHiSpd_Ford_EsaOn_B_Rq1_Ford_EsaOn_B_Rq


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Write_FordVehEvasSteerAssiReq_Val Rte_Write_FordMsg2FDBusHiSpd_FordVehEvasSteerAssiReq_Val
# define Rte_Write_FordVehEvasSteerAssiReqVld_Logl Rte_Write_FordMsg2FDBusHiSpd_FordVehEvasSteerAssiReqVld_Logl


/**********************************************************************************************************************
 * Rte_Call_<p>_<o> (C/S invocation)
 *********************************************************************************************************************/
# define Rte_Call_GetRefTmr100MicroSec32bit_Oper Rte_Call_FordMsg2FDBusHiSpd_GetRefTmr100MicroSec32bit_Oper
# define Rte_Call_GetTiSpan100MicroSec32bit_Oper Rte_Call_FordMsg2FDBusHiSpd_GetTiSpan100MicroSec32bit_Oper
# define Rte_Call_SetNtcSts_Oper Rte_Call_FordMsg2FDBusHiSpd_SetNtcSts_Oper


/**********************************************************************************************************************
 * Rte_Prm (Calibration component calibration parameters)
 *********************************************************************************************************************/

# define Rte_Prm_FordMsg2FDBusHiSpdFordVehEvasSteerAssiReqVldNotRxdTiThd_Val Rte_Prm_FordMsg2FDBusHiSpd_FordMsg2FDBusHiSpdFordVehEvasSteerAssiReqVldNotRxdTiThd_Val

# define Rte_Prm_FordMsg2FDBusHiSpdFordVehEvasSteerAssiReqVldRxdTiThd_Val Rte_Prm_FordMsg2FDBusHiSpd_FordMsg2FDBusHiSpdFordVehEvasSteerAssiReqVldRxdTiThd_Val

# define Rte_Prm_FordMsg2FDBusHiSpdMissMsgFaildTiThd_Val Rte_Prm_FordMsg2FDBusHiSpd_FordMsg2FDBusHiSpdMissMsgFaildTiThd_Val

# define Rte_Prm_FordMsg2FDBusHiSpdMissMsgPassdTiThd_Val Rte_Prm_FordMsg2FDBusHiSpd_FordMsg2FDBusHiSpdMissMsgPassdTiThd_Val

/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Rte_Pim (Per-Instance Memory)
 *********************************************************************************************************************/

# define Rte_Pim_FordVehMsg2FDMissTmr() (Rte_Inst_FordMsg2FDBusHiSpd->Pim_FordVehMsg2FDMissTmr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FordVehMsg2FDNotRxdRefTi() (Rte_Inst_FordMsg2FDBusHiSpd->Pim_FordVehMsg2FDNotRxdRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FordVehMsg2FDRxdRefTi() (Rte_Inst_FordMsg2FDBusHiSpd->Pim_FordVehMsg2FDRxdRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FordVehMsg2FDRxdTmr() (Rte_Inst_FordMsg2FDBusHiSpd->Pim_FordVehMsg2FDRxdTmr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_ClrDiagcFlgProxyPrev() (Rte_Inst_FordMsg2FDBusHiSpd->Pim_ClrDiagcFlgProxyPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FordVehEvasSteerAssiReqPrev() (Rte_Inst_FordMsg2FDBusHiSpd->Pim_FordVehEvasSteerAssiReqPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FirstTranVldFlg() (Rte_Inst_FordMsg2FDBusHiSpd->Pim_FirstTranVldFlg) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FordVehEvasSteerAssiReqVldPrev() (Rte_Inst_FordMsg2FDBusHiSpd->Pim_FordVehEvasSteerAssiReqVldPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FordVehMsg2FDMiss() (Rte_Inst_FordMsg2FDBusHiSpd->Pim_FordVehMsg2FDMiss) /* PRQA S 3453 */ /* MD_MSR_19.7 */




/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   uint32 *Rte_Pim_FordVehMsg2FDMissTmr(void)
 *   uint32 *Rte_Pim_FordVehMsg2FDNotRxdRefTi(void)
 *   uint32 *Rte_Pim_FordVehMsg2FDRxdRefTi(void)
 *   uint32 *Rte_Pim_FordVehMsg2FDRxdTmr(void)
 *   uint8 *Rte_Pim_ClrDiagcFlgProxyPrev(void)
 *   uint8 *Rte_Pim_FordVehEvasSteerAssiReqPrev(void)
 *   boolean *Rte_Pim_FirstTranVldFlg(void)
 *   boolean *Rte_Pim_FordVehEvasSteerAssiReqVldPrev(void)
 *   boolean *Rte_Pim_FordVehMsg2FDMiss(void)
 *
 * Calibration Parameters:
 * =======================
 *   Calibration Component Calibration Parameters:
 *   ---------------------------------------------
 *   uint16 Rte_Prm_FordMsg2FDBusHiSpdFordVehEvasSteerAssiReqVldNotRxdTiThd_Val(void)
 *   uint16 Rte_Prm_FordMsg2FDBusHiSpdFordVehEvasSteerAssiReqVldRxdTiThd_Val(void)
 *   uint16 Rte_Prm_FordMsg2FDBusHiSpdMissMsgFaildTiThd_Val(void)
 *   uint16 Rte_Prm_FordMsg2FDBusHiSpdMissMsgPassdTiThd_Val(void)
 *
 *********************************************************************************************************************/


# define FordMsg2FDBusHiSpd_START_SEC_CODE
# include "FordMsg2FDBusHiSpd_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 *
 * Runnable Entity Name: FordMsg2FDBusHiSpdInit1
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

# define RTE_RUNNABLE_FordMsg2FDBusHiSpdInit1 FordMsg2FDBusHiSpdInit1
FUNC(void, FordMsg2FDBusHiSpd_CODE) FordMsg2FDBusHiSpdInit1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: FordMsg2FDBusHiSpdPer1
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
 *   Std_ReturnType Rte_Read_FordEvasSteerAssiEnad_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_Ford_EsaOn_B_Rq1_Ford_EsaOn_B_Rq(Ford_EsaOn_B_Rq *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_FordVehEvasSteerAssiReq_Val(uint8 data)
 *   Std_ReturnType Rte_Write_FordVehEvasSteerAssiReqVld_Logl(boolean data)
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

# define RTE_RUNNABLE_FordMsg2FDBusHiSpdPer1 FordMsg2FDBusHiSpdPer1
FUNC(void, FordMsg2FDBusHiSpd_CODE) FordMsg2FDBusHiSpdPer1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define FordMsg2FDBusHiSpd_STOP_SEC_CODE
# include "FordMsg2FDBusHiSpd_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * Application errors
 *********************************************************************************************************************/

# define RTE_E_SetNtcSts_PortIf1_E_NOT_OK (1U)

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_FORDMSG2FDBUSHISPD_H */

#include "Rte_Stubs.h"
