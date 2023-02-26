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
 *        Config:  EPS.dpa
 *   ECU-Project:  PSCM_FD
 *
 *     Generator:  MICROSAR RTE Generator Version 4.13.0
 *                 RTE Core Version 1.13.0
 *       License:  Unlimited license CBD1601056 for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <FordMsg2FDBusHiSpd>
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_FORDMSG2FDBUSHISPD_H
# define _RTE_FORDMSG2FDBUSHISPD_H

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

# include "Rte_FordMsg2FDBusHiSpd_Type.h"
# include "Rte_DataHandleType.h"

# ifndef RTE_CORE

#  include "Com.h"


/**********************************************************************************************************************
 * extern declaration of RTE buffers for optimized macro implementation
 *********************************************************************************************************************/
#  define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(uint8, RTE_VAR_INIT) Rte_FordMsg2FDBusHiSpd_FordVehEvasSteerAssiReq_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_FordMsg2FDBusHiSpd_FordVehEvasSteerAssiReqVld_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_DiagcMgr_ClrDiagcFlgProxy_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_FordCanDtcInhb_FordCanDtcInhb_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_FordCanDtcInhb_FordEpsLifeCycMod_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CustDiag_FordEvasSteerAssiEnad_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */

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
#  define Rte_InitValue_FordEvasSteerAssiEnad_Logl (FALSE)
#  define Rte_InitValue_FordVehEvasSteerAssiReq_Val (1U)
#  define Rte_InitValue_FordVehEvasSteerAssiReqVld_Logl (FALSE)
#  define Rte_InitValue_Ford_EsaOn_B_Rq1_Ford_EsaOn_B_Rq (TRUE)
# endif


# ifndef RTE_CORE

/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Read_ClrDiagcFlgProxy_Val Rte_Read_FordMsg2FDBusHiSpd_ClrDiagcFlgProxy_Val
#  define Rte_Read_FordMsg2FDBusHiSpd_ClrDiagcFlgProxy_Val(data) (*(data) = Rte_DiagcMgr_ClrDiagcFlgProxy_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordCanDtcInhb_Logl Rte_Read_FordMsg2FDBusHiSpd_FordCanDtcInhb_Logl
#  define Rte_Read_FordMsg2FDBusHiSpd_FordCanDtcInhb_Logl(data) (*(data) = Rte_FordCanDtcInhb_FordCanDtcInhb_Logl, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordEpsLifeCycMod_Val Rte_Read_FordMsg2FDBusHiSpd_FordEpsLifeCycMod_Val
#  define Rte_Read_FordMsg2FDBusHiSpd_FordEpsLifeCycMod_Val(data) (*(data) = Rte_FordCanDtcInhb_FordEpsLifeCycMod_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordEvasSteerAssiEnad_Logl Rte_Read_FordMsg2FDBusHiSpd_FordEvasSteerAssiEnad_Logl
#  define Rte_Read_FordMsg2FDBusHiSpd_FordEvasSteerAssiEnad_Logl(data) (*(data) = Rte_CustDiag_FordEvasSteerAssiEnad_Logl, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_Ford_EsaOn_B_Rq1_Ford_EsaOn_B_Rq Rte_Read_FordMsg2FDBusHiSpd_Ford_EsaOn_B_Rq1_Ford_EsaOn_B_Rq
#  define Rte_Read_FordMsg2FDBusHiSpd_Ford_EsaOn_B_Rq1_Ford_EsaOn_B_Rq(data) ((void)Com_ReceiveSignal(ComConf_ComSignal_EsaOn_B_Rq_bffaafb8, (data)), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Write_FordVehEvasSteerAssiReq_Val Rte_Write_FordMsg2FDBusHiSpd_FordVehEvasSteerAssiReq_Val
#  define Rte_Write_FordMsg2FDBusHiSpd_FordVehEvasSteerAssiReq_Val(data) (Rte_FordMsg2FDBusHiSpd_FordVehEvasSteerAssiReq_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_FordVehEvasSteerAssiReqVld_Logl Rte_Write_FordMsg2FDBusHiSpd_FordVehEvasSteerAssiReqVld_Logl
#  define Rte_Write_FordMsg2FDBusHiSpd_FordVehEvasSteerAssiReqVld_Logl(data) (Rte_FordMsg2FDBusHiSpd_FordVehEvasSteerAssiReqVld_Logl = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */


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

#  define Rte_Prm_FordMsg2FDBusHiSpdFordVehEvasSteerAssiReqVldNotRxdTiThd_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->FordMsg2FDBusHiSpdFordVehEvasSteerAssiReqVldNotRxdTiThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_FordMsg2FDBusHiSpdFordVehEvasSteerAssiReqVldRxdTiThd_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->FordMsg2FDBusHiSpdFordVehEvasSteerAssiReqVldRxdTiThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_FordMsg2FDBusHiSpdMissMsgFaildTiThd_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->FordMsg2FDBusHiSpdMissMsgFaildTiThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_FordMsg2FDBusHiSpdMissMsgPassdTiThd_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->FordMsg2FDBusHiSpdMissMsgPassdTiThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Rte_Pim (Per-Instance Memory)
 *********************************************************************************************************************/

#  ifndef RTE_MICROSAR_PIM_EXPORT
#   define RTE_START_SEC_VAR_DEFAULT_RTE_Appl10_PIM_GROUP_UNSPECIFIED
#   include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg2FDBusHiSpd_FordVehMsg2FDMissTmr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg2FDBusHiSpd_FordVehMsg2FDNotRxdRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg2FDBusHiSpd_FordVehMsg2FDRxdRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg2FDBusHiSpd_FordVehMsg2FDRxdTmr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg2FDBusHiSpd_ClrDiagcFlgProxyPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg2FDBusHiSpd_FordVehEvasSteerAssiReqPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg2FDBusHiSpd_FirstTranVldFlg; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg2FDBusHiSpd_FordVehEvasSteerAssiReqVldPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg2FDBusHiSpd_FordVehMsg2FDMiss; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#   define RTE_STOP_SEC_VAR_DEFAULT_RTE_Appl10_PIM_GROUP_UNSPECIFIED
#   include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  endif

#  define Rte_Pim_FordVehMsg2FDMissTmr() \
  (&Rte_FordMsg2FDBusHiSpd_FordVehMsg2FDMissTmr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_FordVehMsg2FDNotRxdRefTi() \
  (&Rte_FordMsg2FDBusHiSpd_FordVehMsg2FDNotRxdRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_FordVehMsg2FDRxdRefTi() \
  (&Rte_FordMsg2FDBusHiSpd_FordVehMsg2FDRxdRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_FordVehMsg2FDRxdTmr() \
  (&Rte_FordMsg2FDBusHiSpd_FordVehMsg2FDRxdTmr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_ClrDiagcFlgProxyPrev() \
  (&Rte_FordMsg2FDBusHiSpd_ClrDiagcFlgProxyPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_FordVehEvasSteerAssiReqPrev() \
  (&Rte_FordMsg2FDBusHiSpd_FordVehEvasSteerAssiReqPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_FirstTranVldFlg() \
  (&Rte_FordMsg2FDBusHiSpd_FirstTranVldFlg) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_FordVehEvasSteerAssiReqVldPrev() \
  (&Rte_FordMsg2FDBusHiSpd_FordVehEvasSteerAssiReqVldPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_FordVehMsg2FDMiss() \
  (&Rte_FordMsg2FDBusHiSpd_FordVehMsg2FDMiss) /* PRQA S 3453 */ /* MD_MSR_19.7 */


# endif /* !defined(RTE_CORE) */


# define FordMsg2FDBusHiSpd_START_SEC_CODE
# include "FordMsg2FDBusHiSpd_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * Runnable entities
 *********************************************************************************************************************/

# ifndef RTE_CORE
#  define RTE_RUNNABLE_FordMsg2FDBusHiSpdInit1 FordMsg2FDBusHiSpdInit1
#  define RTE_RUNNABLE_FordMsg2FDBusHiSpdPer1 FordMsg2FDBusHiSpdPer1
# endif

FUNC(void, FordMsg2FDBusHiSpd_CODE) FordMsg2FDBusHiSpdInit1(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(void, FordMsg2FDBusHiSpd_CODE) FordMsg2FDBusHiSpdPer1(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */

# define FordMsg2FDBusHiSpd_STOP_SEC_CODE
# include "FordMsg2FDBusHiSpd_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Application errors
 *********************************************************************************************************************/

#  define RTE_E_SetNtcSts_PortIf1_E_NOT_OK (1U)
# endif /* !defined(RTE_CORE) */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_FORDMSG2FDBUSHISPD_H */

/**********************************************************************************************************************
 MISRA 2004 violations and justifications
 *********************************************************************************************************************/

/* module specific MISRA deviations:
   MD_Rte_3451:  MISRA rule: 8.8
     Reason:     Schedulable entities are declared by the RTE and also by the BSW modules.
     Risk:       No functional risk.
     Prevention: Not required.

*/
