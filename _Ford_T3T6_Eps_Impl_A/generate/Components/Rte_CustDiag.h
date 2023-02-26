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
 *          File:  Rte_CustDiag.h
 *        Config:  EPS.dpa
 *   ECU-Project:  PSCM_FD
 *
 *     Generator:  MICROSAR RTE Generator Version 4.13.0
 *                 RTE Core Version 1.13.0
 *       License:  Unlimited license CBD1601056 for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <CustDiag>
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_CUSTDIAG_H
# define _RTE_CUSTDIAG_H

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

# include "Rte_CustDiag_Type.h"
# include "Rte_DataHandleType.h"

# ifndef RTE_CORE

/**********************************************************************************************************************
 * extern declaration of RTE buffers for optimized macro implementation
 *********************************************************************************************************************/
#  define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(uint8, RTE_VAR_INIT) Rte_CustDiag_ClrDiagcReq_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CustDiag_CustXcpEna_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CustDiag_FordAbsPrsnt_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CustDiag_FordActvNiblCtrlEnad_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CustDiag_FordActvParkAssiEnad_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CustDiag_FordActvRtnEnad_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CustDiag_FordAfsEquid_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CustDiag_FordBrkPlsRejctnEnad_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CustDiag_FordDrvrSteerRcmdnEnad_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CustDiag_FordEngTqClass_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CustDiag_FordEscPrsnt_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CustDiag_FordEvasSteerAssiEnad_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CustDiag_FordLaneCentrAssiEnad_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CustDiag_FordLaneDprtrWarnEnad_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CustDiag_FordLaneKeepAssiEnad_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CustDiag_FordPullDriftCmpEnad_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CustDiag_FordResrchFctEnad_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CustDiag_FordSelDrvModEnad_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CustDiag_FordSoftEndStopEnad_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(sint16, RTE_VAR_INIT) Rte_CustDiag_FordSrvPullDriftCmpRstVal_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CustDiag_FordStrtStopSt_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CustDiag_FordTqSteerCmpEnad_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CustDiag_FordTrfcJamAssiEnad_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CustDiag_FordTrlrBackupAssi5WhlEnad_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CustDiag_FordTrlrBackupAssiEnad_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CustDiag_FordTrlrBackupAssiTrigEnad_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CustDiag_RstReq_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CustDiag_RtnDC00Req_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_DualEcuIdn_EcuId_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_EcuTMeas_EcuTFild_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(s23pm8, RTE_VAR_INIT) Rte_FordHwTqCdng_FordAppldFinalMotTq_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_FordHwAgArbn_FordCmpdHwPosntoSerlCom_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_FordVltgIf_FordEpsCurr_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_FordCanDtcInhb_FordEpsLifeCycMod_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FordEpsSysSt1, RTE_VAR_INIT) Rte_FordSysSt_FordEpsSysSt_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_FordVltgIf_FordEpsVltg_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(sint16, RTE_VAR_INIT) Rte_FordHwTqCdng_FordInpTqRaw_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_FordVltgIf_FordMaxBattCurr_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_FordVltgIf_FordMinBattVltg_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_FordMsg40ABusHiSpd_FordVehGlbRealTi_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_FordMsg430BusHiSpd_FordVehOdom_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_FordVehSpdArbn_FordVehSpdLoQly_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_FordVehSpdArbn_FordVehSpdLoQlyVld_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_FordMsg414BusHiSpd_FordVehSteerPinionAgOffs_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_HwAgSysArbn_HwVelToSerlCom_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_INIT) Rte_CmnMfgSrv_IgnCntr_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_CDD_MotCtrlMgr_MotCurrQax_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_ImcSigArbn_VehSpdImcCorrd_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#  define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# endif /* !defined(RTE_CORE) */


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

#  define Rte_InitValue_ClrDiagcReq_Val (0U)
#  define Rte_InitValue_CustXcpEna_Logl (FALSE)
#  define Rte_InitValue_EcuId_Val (0U)
#  define Rte_InitValue_EcuTFild_Val (25.0F)
#  define Rte_InitValue_FordAbsPrsnt_Logl (TRUE)
#  define Rte_InitValue_FordActvNiblCtrlEnad_Logl (FALSE)
#  define Rte_InitValue_FordActvParkAssiEnad_Logl (FALSE)
#  define Rte_InitValue_FordActvRtnEnad_Logl (TRUE)
#  define Rte_InitValue_FordAfsEquid_Logl (FALSE)
#  define Rte_InitValue_FordBrkPlsRejctnEnad_Logl (FALSE)
#  define Rte_InitValue_FordCmpdHwPosn_Val (0.0F)
#  define Rte_InitValue_FordDrvrSteerRcmdnEnad_Logl (FALSE)
#  define Rte_InitValue_FordEngTqClass_Val (2U)
#  define Rte_InitValue_FordEpsCurr_Val (140.75F)
#  define Rte_InitValue_FordEpsLifeCycMod_Val (0U)
#  define Rte_InitValue_FordEpsSysSt_Val (0U)
#  define Rte_InitValue_FordEpsVltg_Val (18.75F)
#  define Rte_InitValue_FordEscPrsnt_Logl (TRUE)
#  define Rte_InitValue_FordEvasSteerAssiEnad_Logl (FALSE)
#  define Rte_InitValue_FordLaneCentrAssiEnad_Logl (FALSE)
#  define Rte_InitValue_FordLaneDprtrWarnEnad_Logl (FALSE)
#  define Rte_InitValue_FordLaneKeepAssiEnad_Logl (FALSE)
#  define Rte_InitValue_FordMaxBattCurr_Val (0.0F)
#  define Rte_InitValue_FordMinBattVltg_Val (0.0F)
#  define Rte_InitValue_FordPullDriftCmpEnad_Logl (FALSE)
#  define Rte_InitValue_FordResrchFctEnad_Logl (FALSE)
#  define Rte_InitValue_FordSelDrvModEnad_Logl (FALSE)
#  define Rte_InitValue_FordSoftEndStopEnad_Logl (FALSE)
#  define Rte_InitValue_FordSrvPullDriftCmpRstVal_Val (0)
#  define Rte_InitValue_FordStrtStopSt_Val (0U)
#  define Rte_InitValue_FordTqSteerCmpEnad_Logl (FALSE)
#  define Rte_InitValue_FordTrfcJamAssiEnad_Logl (FALSE)
#  define Rte_InitValue_FordTrlrBackupAssi5WhlEnad_Logl (FALSE)
#  define Rte_InitValue_FordTrlrBackupAssiEnad_Logl (FALSE)
#  define Rte_InitValue_FordTrlrBackupAssiTrigEnad_Logl (FALSE)
#  define Rte_InitValue_FordVehGlbRealTi_Val (0.1F)
#  define Rte_InitValue_FordVehOdom_Val (0.0F)
#  define Rte_InitValue_FordVehSpdLoQly_Val (0.0F)
#  define Rte_InitValue_FordVehSpdLoQlyVld_Logl (FALSE)
#  define Rte_InitValue_FordVehSteerPinionAgOffs_Val (0.0F)
#  define Rte_InitValue_HwVelToSerlCom_Val (0.0F)
#  define Rte_InitValue_IgnCntr_Val (0U)
#  define Rte_InitValue_MotCurrQax_Val (0.0F)
#  define Rte_InitValue_RstReq_Val (0U)
#  define Rte_InitValue_RtnDC00Req_Val (0U)
#  define Rte_InitValue_VehSpd_Val (0.0F)
# endif


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Buffers for Mode Management
 *********************************************************************************************************************/
#  define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(uint8, RTE_VAR_INIT) Rte_ModeMachine_CustDiag_BswM_MSI_BswMEcuResetMod_BswM_MDGP_BswMEcuResetMod; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#  define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# endif /* !defined(RTE_CORE) */



# define RTE_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CustDiag_FordVehIdnNr_Ary1D(P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CustDiag_FordVehIdnNr_Ary1D(P2VAR(Ary1D_u08_17, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Switch_CustDiag_BswM_MSI_BswMEcuResetMod_BswM_MDGP_BswMEcuResetMod(uint8 nextMode); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# ifndef RTE_CORE

/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Read_EcuId_Val Rte_Read_CustDiag_EcuId_Val
#  define Rte_Read_CustDiag_EcuId_Val(data) (*(data) = Rte_DualEcuIdn_EcuId_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_EcuTFild_Val Rte_Read_CustDiag_EcuTFild_Val
#  define Rte_Read_CustDiag_EcuTFild_Val(data) (*(data) = Rte_EcuTMeas_EcuTFild_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordAppldFinalMotTq_Val Rte_Read_CustDiag_FordAppldFinalMotTq_Val
#  define Rte_Read_CustDiag_FordAppldFinalMotTq_Val(data) (*(data) = Rte_FordHwTqCdng_FordAppldFinalMotTq_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordCmpdHwPosn_Val Rte_Read_CustDiag_FordCmpdHwPosn_Val
#  define Rte_Read_CustDiag_FordCmpdHwPosn_Val(data) (*(data) = Rte_FordHwAgArbn_FordCmpdHwPosntoSerlCom_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordEpsCurr_Val Rte_Read_CustDiag_FordEpsCurr_Val
#  define Rte_Read_CustDiag_FordEpsCurr_Val(data) (*(data) = Rte_FordVltgIf_FordEpsCurr_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordEpsLifeCycMod_Val Rte_Read_CustDiag_FordEpsLifeCycMod_Val
#  define Rte_Read_CustDiag_FordEpsLifeCycMod_Val(data) (*(data) = Rte_FordCanDtcInhb_FordEpsLifeCycMod_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordEpsSysSt_Val Rte_Read_CustDiag_FordEpsSysSt_Val
#  define Rte_Read_CustDiag_FordEpsSysSt_Val(data) (*(data) = Rte_FordSysSt_FordEpsSysSt_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordEpsVltg_Val Rte_Read_CustDiag_FordEpsVltg_Val
#  define Rte_Read_CustDiag_FordEpsVltg_Val(data) (*(data) = Rte_FordVltgIf_FordEpsVltg_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordInpTqRaw_Val Rte_Read_CustDiag_FordInpTqRaw_Val
#  define Rte_Read_CustDiag_FordInpTqRaw_Val(data) (*(data) = Rte_FordHwTqCdng_FordInpTqRaw_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordMaxBattCurr_Val Rte_Read_CustDiag_FordMaxBattCurr_Val
#  define Rte_Read_CustDiag_FordMaxBattCurr_Val(data) (*(data) = Rte_FordVltgIf_FordMaxBattCurr_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordMinBattVltg_Val Rte_Read_CustDiag_FordMinBattVltg_Val
#  define Rte_Read_CustDiag_FordMinBattVltg_Val(data) (*(data) = Rte_FordVltgIf_FordMinBattVltg_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordVehGlbRealTi_Val Rte_Read_CustDiag_FordVehGlbRealTi_Val
#  define Rte_Read_CustDiag_FordVehGlbRealTi_Val(data) (*(data) = Rte_FordMsg40ABusHiSpd_FordVehGlbRealTi_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordVehIdnNr_Ary1D Rte_Read_CustDiag_FordVehIdnNr_Ary1D
#  define Rte_Read_FordVehOdom_Val Rte_Read_CustDiag_FordVehOdom_Val
#  define Rte_Read_CustDiag_FordVehOdom_Val(data) (*(data) = Rte_FordMsg430BusHiSpd_FordVehOdom_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordVehSpdLoQly_Val Rte_Read_CustDiag_FordVehSpdLoQly_Val
#  define Rte_Read_CustDiag_FordVehSpdLoQly_Val(data) (*(data) = Rte_FordVehSpdArbn_FordVehSpdLoQly_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordVehSpdLoQlyVld_Logl Rte_Read_CustDiag_FordVehSpdLoQlyVld_Logl
#  define Rte_Read_CustDiag_FordVehSpdLoQlyVld_Logl(data) (*(data) = Rte_FordVehSpdArbn_FordVehSpdLoQlyVld_Logl, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordVehSteerPinionAgOffs_Val Rte_Read_CustDiag_FordVehSteerPinionAgOffs_Val
#  define Rte_Read_CustDiag_FordVehSteerPinionAgOffs_Val(data) (*(data) = Rte_FordMsg414BusHiSpd_FordVehSteerPinionAgOffs_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_HwVelToSerlCom_Val Rte_Read_CustDiag_HwVelToSerlCom_Val
#  define Rte_Read_CustDiag_HwVelToSerlCom_Val(data) (*(data) = Rte_HwAgSysArbn_HwVelToSerlCom_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_IgnCntr_Val Rte_Read_CustDiag_IgnCntr_Val
#  define Rte_Read_CustDiag_IgnCntr_Val(data) (*(data) = Rte_CmnMfgSrv_IgnCntr_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_MotCurrQax_Val Rte_Read_CustDiag_MotCurrQax_Val
#  define Rte_Read_CustDiag_MotCurrQax_Val(data) (*(data) = Rte_CDD_MotCtrlMgr_MotCurrQax_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_VehSpd_Val Rte_Read_CustDiag_VehSpd_Val
#  define Rte_Read_CustDiag_VehSpd_Val(data) (*(data) = Rte_ImcSigArbn_VehSpdImcCorrd_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Write_ClrDiagcReq_Val Rte_Write_CustDiag_ClrDiagcReq_Val
#  define Rte_Write_CustDiag_ClrDiagcReq_Val(data) (Rte_CustDiag_ClrDiagcReq_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_CustXcpEna_Logl Rte_Write_CustDiag_CustXcpEna_Logl
#  define Rte_Write_CustDiag_CustXcpEna_Logl(data) (Rte_CustDiag_CustXcpEna_Logl = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_FordAbsPrsnt_Logl Rte_Write_CustDiag_FordAbsPrsnt_Logl
#  define Rte_Write_CustDiag_FordAbsPrsnt_Logl(data) (Rte_CustDiag_FordAbsPrsnt_Logl = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_FordActvNiblCtrlEnad_Logl Rte_Write_CustDiag_FordActvNiblCtrlEnad_Logl
#  define Rte_Write_CustDiag_FordActvNiblCtrlEnad_Logl(data) (Rte_CustDiag_FordActvNiblCtrlEnad_Logl = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_FordActvParkAssiEnad_Logl Rte_Write_CustDiag_FordActvParkAssiEnad_Logl
#  define Rte_Write_CustDiag_FordActvParkAssiEnad_Logl(data) (Rte_CustDiag_FordActvParkAssiEnad_Logl = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_FordActvRtnEnad_Logl Rte_Write_CustDiag_FordActvRtnEnad_Logl
#  define Rte_Write_CustDiag_FordActvRtnEnad_Logl(data) (Rte_CustDiag_FordActvRtnEnad_Logl = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_FordAfsEquid_Logl Rte_Write_CustDiag_FordAfsEquid_Logl
#  define Rte_Write_CustDiag_FordAfsEquid_Logl(data) (Rte_CustDiag_FordAfsEquid_Logl = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_FordBrkPlsRejctnEnad_Logl Rte_Write_CustDiag_FordBrkPlsRejctnEnad_Logl
#  define Rte_Write_CustDiag_FordBrkPlsRejctnEnad_Logl(data) (Rte_CustDiag_FordBrkPlsRejctnEnad_Logl = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_FordDrvrSteerRcmdnEnad_Logl Rte_Write_CustDiag_FordDrvrSteerRcmdnEnad_Logl
#  define Rte_Write_CustDiag_FordDrvrSteerRcmdnEnad_Logl(data) (Rte_CustDiag_FordDrvrSteerRcmdnEnad_Logl = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_FordEngTqClass_Val Rte_Write_CustDiag_FordEngTqClass_Val
#  define Rte_Write_CustDiag_FordEngTqClass_Val(data) (Rte_CustDiag_FordEngTqClass_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_FordEscPrsnt_Logl Rte_Write_CustDiag_FordEscPrsnt_Logl
#  define Rte_Write_CustDiag_FordEscPrsnt_Logl(data) (Rte_CustDiag_FordEscPrsnt_Logl = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_FordEvasSteerAssiEnad_Logl Rte_Write_CustDiag_FordEvasSteerAssiEnad_Logl
#  define Rte_Write_CustDiag_FordEvasSteerAssiEnad_Logl(data) (Rte_CustDiag_FordEvasSteerAssiEnad_Logl = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_FordLaneCentrAssiEnad_Logl Rte_Write_CustDiag_FordLaneCentrAssiEnad_Logl
#  define Rte_Write_CustDiag_FordLaneCentrAssiEnad_Logl(data) (Rte_CustDiag_FordLaneCentrAssiEnad_Logl = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_FordLaneDprtrWarnEnad_Logl Rte_Write_CustDiag_FordLaneDprtrWarnEnad_Logl
#  define Rte_Write_CustDiag_FordLaneDprtrWarnEnad_Logl(data) (Rte_CustDiag_FordLaneDprtrWarnEnad_Logl = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_FordLaneKeepAssiEnad_Logl Rte_Write_CustDiag_FordLaneKeepAssiEnad_Logl
#  define Rte_Write_CustDiag_FordLaneKeepAssiEnad_Logl(data) (Rte_CustDiag_FordLaneKeepAssiEnad_Logl = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_FordPullDriftCmpEnad_Logl Rte_Write_CustDiag_FordPullDriftCmpEnad_Logl
#  define Rte_Write_CustDiag_FordPullDriftCmpEnad_Logl(data) (Rte_CustDiag_FordPullDriftCmpEnad_Logl = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_FordResrchFctEnad_Logl Rte_Write_CustDiag_FordResrchFctEnad_Logl
#  define Rte_Write_CustDiag_FordResrchFctEnad_Logl(data) (Rte_CustDiag_FordResrchFctEnad_Logl = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_FordSelDrvModEnad_Logl Rte_Write_CustDiag_FordSelDrvModEnad_Logl
#  define Rte_Write_CustDiag_FordSelDrvModEnad_Logl(data) (Rte_CustDiag_FordSelDrvModEnad_Logl = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_FordSoftEndStopEnad_Logl Rte_Write_CustDiag_FordSoftEndStopEnad_Logl
#  define Rte_Write_CustDiag_FordSoftEndStopEnad_Logl(data) (Rte_CustDiag_FordSoftEndStopEnad_Logl = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_FordSrvPullDriftCmpRstVal_Val Rte_Write_CustDiag_FordSrvPullDriftCmpRstVal_Val
#  define Rte_Write_CustDiag_FordSrvPullDriftCmpRstVal_Val(data) (Rte_CustDiag_FordSrvPullDriftCmpRstVal_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_FordStrtStopSt_Val Rte_Write_CustDiag_FordStrtStopSt_Val
#  define Rte_Write_CustDiag_FordStrtStopSt_Val(data) (Rte_CustDiag_FordStrtStopSt_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_FordTqSteerCmpEnad_Logl Rte_Write_CustDiag_FordTqSteerCmpEnad_Logl
#  define Rte_Write_CustDiag_FordTqSteerCmpEnad_Logl(data) (Rte_CustDiag_FordTqSteerCmpEnad_Logl = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_FordTrfcJamAssiEnad_Logl Rte_Write_CustDiag_FordTrfcJamAssiEnad_Logl
#  define Rte_Write_CustDiag_FordTrfcJamAssiEnad_Logl(data) (Rte_CustDiag_FordTrfcJamAssiEnad_Logl = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_FordTrlrBackupAssi5WhlEnad_Logl Rte_Write_CustDiag_FordTrlrBackupAssi5WhlEnad_Logl
#  define Rte_Write_CustDiag_FordTrlrBackupAssi5WhlEnad_Logl(data) (Rte_CustDiag_FordTrlrBackupAssi5WhlEnad_Logl = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_FordTrlrBackupAssiEnad_Logl Rte_Write_CustDiag_FordTrlrBackupAssiEnad_Logl
#  define Rte_Write_CustDiag_FordTrlrBackupAssiEnad_Logl(data) (Rte_CustDiag_FordTrlrBackupAssiEnad_Logl = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_FordTrlrBackupAssiTrigEnad_Logl Rte_Write_CustDiag_FordTrlrBackupAssiTrigEnad_Logl
#  define Rte_Write_CustDiag_FordTrlrBackupAssiTrigEnad_Logl(data) (Rte_CustDiag_FordTrlrBackupAssiTrigEnad_Logl = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_RstReq_Val Rte_Write_CustDiag_RstReq_Val
#  define Rte_Write_CustDiag_RstReq_Val(data) (Rte_CustDiag_RstReq_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_RtnDC00Req_Val Rte_Write_CustDiag_RtnDC00Req_Val
#  define Rte_Write_CustDiag_RtnDC00Req_Val(data) (Rte_CustDiag_RtnDC00Req_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */


/**********************************************************************************************************************
 * Rte_Mode_<p>_<m>
 *********************************************************************************************************************/
#  define Rte_Mode_BswM_MSI_BswMEcuResetMod_BswM_MDGP_BswMEcuResetMod() (Rte_ModeMachine_CustDiag_BswM_MSI_BswMEcuResetMod_BswM_MDGP_BswMEcuResetMod) /* PRQA S 3453 */ /* MD_MSR_19.7 */


/**********************************************************************************************************************
 * Rte_Switch_<p>_<m>
 *********************************************************************************************************************/
#  define Rte_Switch_BswM_MSI_BswMEcuResetMod_BswM_MDGP_BswMEcuResetMod Rte_Switch_CustDiag_BswM_MSI_BswMEcuResetMod_BswM_MDGP_BswMEcuResetMod


/**********************************************************************************************************************
 * Rte_Call_<p>_<o> (unmapped) for synchronous C/S communication
 *********************************************************************************************************************/
#  define RTE_START_SEC_DIAGCMGR_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(void, RTE_DIAGCMGR_APPL_CODE) ClrAllDiagc_Oper(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_DIAGCMGR_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_ClrAllDiagc_Oper() (ClrAllDiagc_Oper(), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define RTE_START_SEC_DIAGCMGR_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(void, RTE_DIAGCMGR_APPL_CODE) ClrLtchCntrData_Oper(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_DIAGCMGR_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_ClrLtchCntrData_Oper() (ClrLtchCntrData_Oper(), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define RTE_START_SEC_NVMPROXY_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(Std_ReturnType, RTE_NVMPROXY_APPL_CODE) NvMProxy_GetErrorStatus(NvM_BlockIdType parg0, P2VAR(NvM_RequestResultType, AUTOMATIC, RTE_NVMPROXY_APPL_VAR) ErrorStatus_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_NVMPROXY_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_Did205A_GetErrorStatus(arg1) (NvMProxy_GetErrorStatus((NvM_BlockIdType)32, arg1)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define RTE_START_SEC_NVMPROXY_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(Std_ReturnType, RTE_NVMPROXY_APPL_CODE) NvMProxy_SetRamBlockStatus(NvM_BlockIdType parg0, boolean RamBlockStatus_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_NVMPROXY_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_Did205A_SetRamBlockStatus(arg1) (NvMProxy_SetRamBlockStatus((NvM_BlockIdType)32, arg1)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Call_Did205B_GetErrorStatus(arg1) (NvMProxy_GetErrorStatus((NvM_BlockIdType)19, arg1)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Call_Did205B_SetRamBlockStatus(arg1) (NvMProxy_SetRamBlockStatus((NvM_BlockIdType)19, arg1)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Call_Did3003_GetErrorStatus(arg1) (NvMProxy_GetErrorStatus((NvM_BlockIdType)44, arg1)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Call_Did3003_SetRamBlockStatus(arg1) (NvMProxy_SetRamBlockStatus((NvM_BlockIdType)44, arg1)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Call_Did301A_GetErrorStatus(arg1) (NvMProxy_GetErrorStatus((NvM_BlockIdType)34, arg1)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Call_Did301A_SetRamBlockStatus(arg1) (NvMProxy_SetRamBlockStatus((NvM_BlockIdType)34, arg1)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Call_Did630F_GetErrorStatus(arg1) (NvMProxy_GetErrorStatus((NvM_BlockIdType)10, arg1)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Call_Did630F_SetRamBlockStatus(arg1) (NvMProxy_SetRamBlockStatus((NvM_BlockIdType)10, arg1)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Call_Did630FChk_GetErrorStatus(arg1) (NvMProxy_GetErrorStatus((NvM_BlockIdType)13, arg1)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Call_Did630FChk_SetRamBlockStatus(arg1) (NvMProxy_SetRamBlockStatus((NvM_BlockIdType)13, arg1)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Call_DidDE00_GetErrorStatus(arg1) (NvMProxy_GetErrorStatus((NvM_BlockIdType)48, arg1)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Call_DidDE00_SetRamBlockStatus(arg1) (NvMProxy_SetRamBlockStatus((NvM_BlockIdType)48, arg1)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Call_DidDE01_GetErrorStatus(arg1) (NvMProxy_GetErrorStatus((NvM_BlockIdType)45, arg1)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Call_DidDE01_SetRamBlockStatus(arg1) (NvMProxy_SetRamBlockStatus((NvM_BlockIdType)45, arg1)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Call_DidDE02_GetErrorStatus(arg1) (NvMProxy_GetErrorStatus((NvM_BlockIdType)43, arg1)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Call_DidDE02_SetRamBlockStatus(arg1) (NvMProxy_SetRamBlockStatus((NvM_BlockIdType)43, arg1)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Call_DidDE03_GetErrorStatus(arg1) (NvMProxy_GetErrorStatus((NvM_BlockIdType)47, arg1)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Call_DidDE03_SetRamBlockStatus(arg1) (NvMProxy_SetRamBlockStatus((NvM_BlockIdType)47, arg1)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Call_DidDE04_GetErrorStatus(arg1) (NvMProxy_GetErrorStatus((NvM_BlockIdType)42, arg1)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Call_DidDE04_SetRamBlockStatus(arg1) (NvMProxy_SetRamBlockStatus((NvM_BlockIdType)42, arg1)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Call_DidDE05_GetErrorStatus(arg1) (NvMProxy_GetErrorStatus((NvM_BlockIdType)21, arg1)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Call_DidDE05_SetRamBlockStatus(arg1) (NvMProxy_SetRamBlockStatus((NvM_BlockIdType)21, arg1)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Call_DidEE00_GetErrorStatus(arg1) (NvMProxy_GetErrorStatus((NvM_BlockIdType)20, arg1)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Call_DidEE00_SetRamBlockStatus(arg1) (NvMProxy_SetRamBlockStatus((NvM_BlockIdType)20, arg1)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Call_DidEE01_GetErrorStatus(arg1) (NvMProxy_GetErrorStatus((NvM_BlockIdType)46, arg1)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Call_DidEE01_SetRamBlockStatus(arg1) (NvMProxy_SetRamBlockStatus((NvM_BlockIdType)46, arg1)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Call_DidEE02_GetErrorStatus(arg1) (NvMProxy_GetErrorStatus((NvM_BlockIdType)50, arg1)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Call_DidEE02_SetRamBlockStatus(arg1) (NvMProxy_SetRamBlockStatus((NvM_BlockIdType)50, arg1)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Call_DidEE21_GetErrorStatus(arg1) (NvMProxy_GetErrorStatus((NvM_BlockIdType)9, arg1)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Call_DidEE21_SetRamBlockStatus(arg1) (NvMProxy_SetRamBlockStatus((NvM_BlockIdType)9, arg1)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Call_DidEE22_GetErrorStatus(arg1) (NvMProxy_GetErrorStatus((NvM_BlockIdType)11, arg1)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Call_DidEE22_SetRamBlockStatus(arg1) (NvMProxy_SetRamBlockStatus((NvM_BlockIdType)11, arg1)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Call_DidEE23_GetErrorStatus(arg1) (NvMProxy_GetErrorStatus((NvM_BlockIdType)12, arg1)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Call_DidEE23_SetRamBlockStatus(arg1) (NvMProxy_SetRamBlockStatus((NvM_BlockIdType)12, arg1)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Call_DidEE40_GetErrorStatus(arg1) (NvMProxy_GetErrorStatus((NvM_BlockIdType)22, arg1)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Call_DidEE40_SetRamBlockStatus(arg1) (NvMProxy_SetRamBlockStatus((NvM_BlockIdType)22, arg1)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Call_DidEE41_GetErrorStatus(arg1) (NvMProxy_GetErrorStatus((NvM_BlockIdType)35, arg1)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Call_DidEE41_SetRamBlockStatus(arg1) (NvMProxy_SetRamBlockStatus((NvM_BlockIdType)35, arg1)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Call_DidEE81_GetErrorStatus(arg1) (NvMProxy_GetErrorStatus((NvM_BlockIdType)33, arg1)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Call_DidEE81_SetRamBlockStatus(arg1) (NvMProxy_SetRamBlockStatus((NvM_BlockIdType)33, arg1)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Call_DidEE82_GetErrorStatus(arg1) (NvMProxy_GetErrorStatus((NvM_BlockIdType)28, arg1)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Call_DidEE82_SetRamBlockStatus(arg1) (NvMProxy_SetRamBlockStatus((NvM_BlockIdType)28, arg1)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Call_DidEE83_GetErrorStatus(arg1) (NvMProxy_GetErrorStatus((NvM_BlockIdType)36, arg1)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Call_DidEE83_SetRamBlockStatus(arg1) (NvMProxy_SetRamBlockStatus((NvM_BlockIdType)36, arg1)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Call_DidEE84_GetErrorStatus(arg1) (NvMProxy_GetErrorStatus((NvM_BlockIdType)24, arg1)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Call_DidEE84_SetRamBlockStatus(arg1) (NvMProxy_SetRamBlockStatus((NvM_BlockIdType)24, arg1)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Call_DidEE85_GetErrorStatus(arg1) (NvMProxy_GetErrorStatus((NvM_BlockIdType)31, arg1)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Call_DidEE85_SetRamBlockStatus(arg1) (NvMProxy_SetRamBlockStatus((NvM_BlockIdType)31, arg1)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Call_DidEE86_GetErrorStatus(arg1) (NvMProxy_GetErrorStatus((NvM_BlockIdType)29, arg1)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Call_DidEE86_SetRamBlockStatus(arg1) (NvMProxy_SetRamBlockStatus((NvM_BlockIdType)29, arg1)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Call_DidEE87_GetErrorStatus(arg1) (NvMProxy_GetErrorStatus((NvM_BlockIdType)15, arg1)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Call_DidEE87_SetRamBlockStatus(arg1) (NvMProxy_SetRamBlockStatus((NvM_BlockIdType)15, arg1)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Call_DidEE88_GetErrorStatus(arg1) (NvMProxy_GetErrorStatus((NvM_BlockIdType)30, arg1)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Call_DidEE88_SetRamBlockStatus(arg1) (NvMProxy_SetRamBlockStatus((NvM_BlockIdType)30, arg1)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Call_DidEED0_GetErrorStatus(arg1) (NvMProxy_GetErrorStatus((NvM_BlockIdType)37, arg1)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Call_DidEED0_SetRamBlockStatus(arg1) (NvMProxy_SetRamBlockStatus((NvM_BlockIdType)37, arg1)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Call_DidF110_GetErrorStatus(arg1) (NvMProxy_GetErrorStatus((NvM_BlockIdType)16, arg1)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Call_DidF110_SetRamBlockStatus(arg1) (NvMProxy_SetRamBlockStatus((NvM_BlockIdType)16, arg1)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Call_DidF111_GetErrorStatus(arg1) (NvMProxy_GetErrorStatus((NvM_BlockIdType)51, arg1)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Call_DidF111_SetRamBlockStatus(arg1) (NvMProxy_SetRamBlockStatus((NvM_BlockIdType)51, arg1)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Call_DidF113_GetErrorStatus(arg1) (NvMProxy_GetErrorStatus((NvM_BlockIdType)49, arg1)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Call_DidF113_SetRamBlockStatus(arg1) (NvMProxy_SetRamBlockStatus((NvM_BlockIdType)49, arg1)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Call_DidF15F_GetErrorStatus(arg1) (NvMProxy_GetErrorStatus((NvM_BlockIdType)25, arg1)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Call_DidF15F_SetRamBlockStatus(arg1) (NvMProxy_SetRamBlockStatus((NvM_BlockIdType)25, arg1)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Call_DidF162_GetErrorStatus(arg1) (NvMProxy_GetErrorStatus((NvM_BlockIdType)27, arg1)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Call_DidF162_SetRamBlockStatus(arg1) (NvMProxy_SetRamBlockStatus((NvM_BlockIdType)27, arg1)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Call_DidF163_GetErrorStatus(arg1) (NvMProxy_GetErrorStatus((NvM_BlockIdType)17, arg1)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Call_DidF163_SetRamBlockStatus(arg1) (NvMProxy_SetRamBlockStatus((NvM_BlockIdType)17, arg1)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Call_DidF166_GetErrorStatus(arg1) (NvMProxy_GetErrorStatus((NvM_BlockIdType)26, arg1)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Call_DidF166_SetRamBlockStatus(arg1) (NvMProxy_SetRamBlockStatus((NvM_BlockIdType)26, arg1)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Call_DidF18A_GetErrorStatus(arg1) (NvMProxy_GetErrorStatus((NvM_BlockIdType)23, arg1)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Call_DidF18A_SetRamBlockStatus(arg1) (NvMProxy_SetRamBlockStatus((NvM_BlockIdType)23, arg1)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Call_DidF18C_GetErrorStatus(arg1) (NvMProxy_GetErrorStatus((NvM_BlockIdType)18, arg1)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Call_DidF18C_SetRamBlockStatus(arg1) (NvMProxy_SetRamBlockStatus((NvM_BlockIdType)18, arg1)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Call_DidF190_GetErrorStatus(arg1) (NvMProxy_GetErrorStatus((NvM_BlockIdType)14, arg1)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Call_DidF190_SetRamBlockStatus(arg1) (NvMProxy_SetRamBlockStatus((NvM_BlockIdType)14, arg1)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define RTE_START_SEC_CDD_NXTRTI_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(void, RTE_CDD_NXTRTI_APPL_CODE) GetRefTmr100MicroSec32bit_Oper(P2VAR(uint32, AUTOMATIC, RTE_CDD_NXTRTI_APPL_VAR) RefTmr); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_CDD_NXTRTI_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_GetRefTmr100MicroSec32bit_Oper(arg1) (GetRefTmr100MicroSec32bit_Oper(arg1), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define RTE_START_SEC_IMCARBN_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(Std_ReturnType, RTE_IMCARBN_APPL_CODE) GetSigImcData_logl_Oper(uint16 SigId_Arg, P2VAR(boolean, AUTOMATIC, RTE_IMCARBN_APPL_VAR) Data_Arg, P2VAR(ImcArbnRxSts1, AUTOMATIC, RTE_IMCARBN_APPL_VAR) Sts_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_IMCARBN_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_GetSigImcData_logl_Oper GetSigImcData_logl_Oper
#  define RTE_START_SEC_IMCARBN_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(Std_ReturnType, RTE_IMCARBN_APPL_CODE) GetSigImcData_u08_Oper(uint16 SigId_Arg, P2VAR(uint8, AUTOMATIC, RTE_IMCARBN_APPL_VAR) Data_Arg, P2VAR(ImcArbnRxSts1, AUTOMATIC, RTE_IMCARBN_APPL_VAR) Sts_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_IMCARBN_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_GetSigImcData_u08_Oper GetSigImcData_u08_Oper
#  define RTE_START_SEC_DIAGCMGRPROXYAPPL10_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(Std_ReturnType, RTE_DIAGCMGRPROXYAPPL10_APPL_CODE) SetNtcSts10_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_DIAGCMGRPROXYAPPL10_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_SetNtcSts_Oper SetNtcSts10_Oper


/**********************************************************************************************************************
 * Rte_CData (SW-C local calibration parameters)
 *********************************************************************************************************************/

#  define Rte_CData_DidEE01Dft() (((P2CONST(Rte_Calprm_CustDiag_DEFAULT_RTE_CDATA_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CustDiag_DEFAULT_RTE_CDATA_GROUP])->DidEE01Dft) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_CData_DidEE02Dft() (((P2CONST(Rte_Calprm_CustDiag_DEFAULT_RTE_CDATA_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CustDiag_DEFAULT_RTE_CDATA_GROUP])->DidEE02Dft) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_CData_DidEE41Dft() (((P2CONST(Rte_Calprm_CustDiag_DEFAULT_RTE_CDATA_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CustDiag_DEFAULT_RTE_CDATA_GROUP])->DidEE41Dft) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_CData_DidEED0Dft() (((P2CONST(Rte_Calprm_CustDiag_DEFAULT_RTE_CDATA_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CustDiag_DEFAULT_RTE_CDATA_GROUP])->DidEED0Dft) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_CData_DidF162Dft() (((P2CONST(Rte_Calprm_CustDiag_DEFAULT_RTE_CDATA_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CustDiag_DEFAULT_RTE_CDATA_GROUP])->DidF162Dft) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_CData_DidF163Dft() (((P2CONST(Rte_Calprm_CustDiag_DEFAULT_RTE_CDATA_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CustDiag_DEFAULT_RTE_CDATA_GROUP])->DidF163Dft) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_CData_Did630FChkDft() (((P2CONST(Rte_Calprm_CustDiag_DEFAULT_RTE_CDATA_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CustDiag_DEFAULT_RTE_CDATA_GROUP])->Did630FChkDft) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_CData_Did205ADft() (&(((P2CONST(Rte_Calprm_CustDiag_DEFAULT_RTE_CDATA_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CustDiag_DEFAULT_RTE_CDATA_GROUP])->Did205ADft[0])) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  else
#   define Rte_CData_Did205ADft() (&((P2CONST(Rte_Calprm_CustDiag_DEFAULT_RTE_CDATA_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CustDiag_DEFAULT_RTE_CDATA_GROUP])->Did205ADft) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  endif

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_CData_Did205BDft() (&(((P2CONST(Rte_Calprm_CustDiag_DEFAULT_RTE_CDATA_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CustDiag_DEFAULT_RTE_CDATA_GROUP])->Did205BDft[0])) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  else
#   define Rte_CData_Did205BDft() (&((P2CONST(Rte_Calprm_CustDiag_DEFAULT_RTE_CDATA_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CustDiag_DEFAULT_RTE_CDATA_GROUP])->Did205BDft) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  endif

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_CData_Did3003Dft() (&(((P2CONST(Rte_Calprm_CustDiag_DEFAULT_RTE_CDATA_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CustDiag_DEFAULT_RTE_CDATA_GROUP])->Did3003Dft[0])) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  else
#   define Rte_CData_Did3003Dft() (&((P2CONST(Rte_Calprm_CustDiag_DEFAULT_RTE_CDATA_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CustDiag_DEFAULT_RTE_CDATA_GROUP])->Did3003Dft) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  endif

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_CData_Did301ADft() (&(((P2CONST(Rte_Calprm_CustDiag_DEFAULT_RTE_CDATA_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CustDiag_DEFAULT_RTE_CDATA_GROUP])->Did301ADft[0])) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  else
#   define Rte_CData_Did301ADft() (&((P2CONST(Rte_Calprm_CustDiag_DEFAULT_RTE_CDATA_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CustDiag_DEFAULT_RTE_CDATA_GROUP])->Did301ADft) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  endif

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_CData_Did630FDft() (&(((P2CONST(Rte_Calprm_CustDiag_DEFAULT_RTE_CDATA_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CustDiag_DEFAULT_RTE_CDATA_GROUP])->Did630FDft[0])) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  else
#   define Rte_CData_Did630FDft() (&((P2CONST(Rte_Calprm_CustDiag_DEFAULT_RTE_CDATA_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CustDiag_DEFAULT_RTE_CDATA_GROUP])->Did630FDft) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  endif

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_CData_DidDE00Dft() (&(((P2CONST(Rte_Calprm_CustDiag_DEFAULT_RTE_CDATA_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CustDiag_DEFAULT_RTE_CDATA_GROUP])->DidDE00Dft[0])) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  else
#   define Rte_CData_DidDE00Dft() (&((P2CONST(Rte_Calprm_CustDiag_DEFAULT_RTE_CDATA_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CustDiag_DEFAULT_RTE_CDATA_GROUP])->DidDE00Dft) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  endif

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_CData_DidDE01Dft() (&(((P2CONST(Rte_Calprm_CustDiag_DEFAULT_RTE_CDATA_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CustDiag_DEFAULT_RTE_CDATA_GROUP])->DidDE01Dft[0])) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  else
#   define Rte_CData_DidDE01Dft() (&((P2CONST(Rte_Calprm_CustDiag_DEFAULT_RTE_CDATA_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CustDiag_DEFAULT_RTE_CDATA_GROUP])->DidDE01Dft) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  endif

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_CData_DidDE02Dft() (&(((P2CONST(Rte_Calprm_CustDiag_DEFAULT_RTE_CDATA_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CustDiag_DEFAULT_RTE_CDATA_GROUP])->DidDE02Dft[0])) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  else
#   define Rte_CData_DidDE02Dft() (&((P2CONST(Rte_Calprm_CustDiag_DEFAULT_RTE_CDATA_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CustDiag_DEFAULT_RTE_CDATA_GROUP])->DidDE02Dft) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  endif

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_CData_DidDE03Dft() (&(((P2CONST(Rte_Calprm_CustDiag_DEFAULT_RTE_CDATA_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CustDiag_DEFAULT_RTE_CDATA_GROUP])->DidDE03Dft[0])) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  else
#   define Rte_CData_DidDE03Dft() (&((P2CONST(Rte_Calprm_CustDiag_DEFAULT_RTE_CDATA_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CustDiag_DEFAULT_RTE_CDATA_GROUP])->DidDE03Dft) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  endif

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_CData_DidDE04Dft() (&(((P2CONST(Rte_Calprm_CustDiag_DEFAULT_RTE_CDATA_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CustDiag_DEFAULT_RTE_CDATA_GROUP])->DidDE04Dft[0])) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  else
#   define Rte_CData_DidDE04Dft() (&((P2CONST(Rte_Calprm_CustDiag_DEFAULT_RTE_CDATA_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CustDiag_DEFAULT_RTE_CDATA_GROUP])->DidDE04Dft) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  endif

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_CData_DidDE05Dft() (&(((P2CONST(Rte_Calprm_CustDiag_DEFAULT_RTE_CDATA_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CustDiag_DEFAULT_RTE_CDATA_GROUP])->DidDE05Dft[0])) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  else
#   define Rte_CData_DidDE05Dft() (&((P2CONST(Rte_Calprm_CustDiag_DEFAULT_RTE_CDATA_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CustDiag_DEFAULT_RTE_CDATA_GROUP])->DidDE05Dft) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  endif

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_CData_DidEE00Dft() (&(((P2CONST(Rte_Calprm_CustDiag_DEFAULT_RTE_CDATA_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CustDiag_DEFAULT_RTE_CDATA_GROUP])->DidEE00Dft[0])) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  else
#   define Rte_CData_DidEE00Dft() (&((P2CONST(Rte_Calprm_CustDiag_DEFAULT_RTE_CDATA_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CustDiag_DEFAULT_RTE_CDATA_GROUP])->DidEE00Dft) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  endif

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_CData_DidEE21Dft() (&(((P2CONST(Rte_Calprm_CustDiag_DEFAULT_RTE_CDATA_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CustDiag_DEFAULT_RTE_CDATA_GROUP])->DidEE21Dft[0])) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  else
#   define Rte_CData_DidEE21Dft() (&((P2CONST(Rte_Calprm_CustDiag_DEFAULT_RTE_CDATA_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CustDiag_DEFAULT_RTE_CDATA_GROUP])->DidEE21Dft) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  endif

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_CData_DidEE22Dft() (&(((P2CONST(Rte_Calprm_CustDiag_DEFAULT_RTE_CDATA_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CustDiag_DEFAULT_RTE_CDATA_GROUP])->DidEE22Dft[0])) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  else
#   define Rte_CData_DidEE22Dft() (&((P2CONST(Rte_Calprm_CustDiag_DEFAULT_RTE_CDATA_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CustDiag_DEFAULT_RTE_CDATA_GROUP])->DidEE22Dft) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  endif

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_CData_DidEE23Dft() (&(((P2CONST(Rte_Calprm_CustDiag_DEFAULT_RTE_CDATA_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CustDiag_DEFAULT_RTE_CDATA_GROUP])->DidEE23Dft[0])) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  else
#   define Rte_CData_DidEE23Dft() (&((P2CONST(Rte_Calprm_CustDiag_DEFAULT_RTE_CDATA_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CustDiag_DEFAULT_RTE_CDATA_GROUP])->DidEE23Dft) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  endif

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_CData_DidEE40Dft() (&(((P2CONST(Rte_Calprm_CustDiag_DEFAULT_RTE_CDATA_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CustDiag_DEFAULT_RTE_CDATA_GROUP])->DidEE40Dft[0])) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  else
#   define Rte_CData_DidEE40Dft() (&((P2CONST(Rte_Calprm_CustDiag_DEFAULT_RTE_CDATA_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CustDiag_DEFAULT_RTE_CDATA_GROUP])->DidEE40Dft) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  endif

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_CData_DidEE81Dft() (&(((P2CONST(Rte_Calprm_CustDiag_DEFAULT_RTE_CDATA_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CustDiag_DEFAULT_RTE_CDATA_GROUP])->DidEE81Dft[0])) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  else
#   define Rte_CData_DidEE81Dft() (&((P2CONST(Rte_Calprm_CustDiag_DEFAULT_RTE_CDATA_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CustDiag_DEFAULT_RTE_CDATA_GROUP])->DidEE81Dft) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  endif

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_CData_DidEE82Dft() (&(((P2CONST(Rte_Calprm_CustDiag_DEFAULT_RTE_CDATA_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CustDiag_DEFAULT_RTE_CDATA_GROUP])->DidEE82Dft[0])) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  else
#   define Rte_CData_DidEE82Dft() (&((P2CONST(Rte_Calprm_CustDiag_DEFAULT_RTE_CDATA_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CustDiag_DEFAULT_RTE_CDATA_GROUP])->DidEE82Dft) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  endif

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_CData_DidEE83Dft() (&(((P2CONST(Rte_Calprm_CustDiag_DEFAULT_RTE_CDATA_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CustDiag_DEFAULT_RTE_CDATA_GROUP])->DidEE83Dft[0])) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  else
#   define Rte_CData_DidEE83Dft() (&((P2CONST(Rte_Calprm_CustDiag_DEFAULT_RTE_CDATA_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CustDiag_DEFAULT_RTE_CDATA_GROUP])->DidEE83Dft) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  endif

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_CData_DidEE84Dft() (&(((P2CONST(Rte_Calprm_CustDiag_DEFAULT_RTE_CDATA_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CustDiag_DEFAULT_RTE_CDATA_GROUP])->DidEE84Dft[0])) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  else
#   define Rte_CData_DidEE84Dft() (&((P2CONST(Rte_Calprm_CustDiag_DEFAULT_RTE_CDATA_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CustDiag_DEFAULT_RTE_CDATA_GROUP])->DidEE84Dft) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  endif

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_CData_DidEE85Dft() (&(((P2CONST(Rte_Calprm_CustDiag_DEFAULT_RTE_CDATA_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CustDiag_DEFAULT_RTE_CDATA_GROUP])->DidEE85Dft[0])) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  else
#   define Rte_CData_DidEE85Dft() (&((P2CONST(Rte_Calprm_CustDiag_DEFAULT_RTE_CDATA_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CustDiag_DEFAULT_RTE_CDATA_GROUP])->DidEE85Dft) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  endif

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_CData_DidEE86Dft() (&(((P2CONST(Rte_Calprm_CustDiag_DEFAULT_RTE_CDATA_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CustDiag_DEFAULT_RTE_CDATA_GROUP])->DidEE86Dft[0])) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  else
#   define Rte_CData_DidEE86Dft() (&((P2CONST(Rte_Calprm_CustDiag_DEFAULT_RTE_CDATA_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CustDiag_DEFAULT_RTE_CDATA_GROUP])->DidEE86Dft) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  endif

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_CData_DidEE87Dft() (&(((P2CONST(Rte_Calprm_CustDiag_DEFAULT_RTE_CDATA_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CustDiag_DEFAULT_RTE_CDATA_GROUP])->DidEE87Dft[0])) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  else
#   define Rte_CData_DidEE87Dft() (&((P2CONST(Rte_Calprm_CustDiag_DEFAULT_RTE_CDATA_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CustDiag_DEFAULT_RTE_CDATA_GROUP])->DidEE87Dft) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  endif

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_CData_DidEE88Dft() (&(((P2CONST(Rte_Calprm_CustDiag_DEFAULT_RTE_CDATA_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CustDiag_DEFAULT_RTE_CDATA_GROUP])->DidEE88Dft[0])) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  else
#   define Rte_CData_DidEE88Dft() (&((P2CONST(Rte_Calprm_CustDiag_DEFAULT_RTE_CDATA_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CustDiag_DEFAULT_RTE_CDATA_GROUP])->DidEE88Dft) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  endif

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_CData_DidF110Dft() (&(((P2CONST(Rte_Calprm_CustDiag_DEFAULT_RTE_CDATA_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CustDiag_DEFAULT_RTE_CDATA_GROUP])->DidF110Dft[0])) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  else
#   define Rte_CData_DidF110Dft() (&((P2CONST(Rte_Calprm_CustDiag_DEFAULT_RTE_CDATA_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CustDiag_DEFAULT_RTE_CDATA_GROUP])->DidF110Dft) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  endif

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_CData_DidF111Dft() (&(((P2CONST(Rte_Calprm_CustDiag_DEFAULT_RTE_CDATA_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CustDiag_DEFAULT_RTE_CDATA_GROUP])->DidF111Dft[0])) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  else
#   define Rte_CData_DidF111Dft() (&((P2CONST(Rte_Calprm_CustDiag_DEFAULT_RTE_CDATA_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CustDiag_DEFAULT_RTE_CDATA_GROUP])->DidF111Dft) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  endif

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_CData_DidF113Dft() (&(((P2CONST(Rte_Calprm_CustDiag_DEFAULT_RTE_CDATA_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CustDiag_DEFAULT_RTE_CDATA_GROUP])->DidF113Dft[0])) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  else
#   define Rte_CData_DidF113Dft() (&((P2CONST(Rte_Calprm_CustDiag_DEFAULT_RTE_CDATA_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CustDiag_DEFAULT_RTE_CDATA_GROUP])->DidF113Dft) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  endif

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_CData_DidF15FDft() (&(((P2CONST(Rte_Calprm_CustDiag_DEFAULT_RTE_CDATA_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CustDiag_DEFAULT_RTE_CDATA_GROUP])->DidF15FDft[0])) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  else
#   define Rte_CData_DidF15FDft() (&((P2CONST(Rte_Calprm_CustDiag_DEFAULT_RTE_CDATA_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CustDiag_DEFAULT_RTE_CDATA_GROUP])->DidF15FDft) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  endif

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_CData_DidF166Dft() (&(((P2CONST(Rte_Calprm_CustDiag_DEFAULT_RTE_CDATA_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CustDiag_DEFAULT_RTE_CDATA_GROUP])->DidF166Dft[0])) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  else
#   define Rte_CData_DidF166Dft() (&((P2CONST(Rte_Calprm_CustDiag_DEFAULT_RTE_CDATA_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CustDiag_DEFAULT_RTE_CDATA_GROUP])->DidF166Dft) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  endif

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_CData_DidF18ADft() (&(((P2CONST(Rte_Calprm_CustDiag_DEFAULT_RTE_CDATA_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CustDiag_DEFAULT_RTE_CDATA_GROUP])->DidF18ADft[0])) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  else
#   define Rte_CData_DidF18ADft() (&((P2CONST(Rte_Calprm_CustDiag_DEFAULT_RTE_CDATA_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CustDiag_DEFAULT_RTE_CDATA_GROUP])->DidF18ADft) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  endif

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_CData_DidF18CDft() (&(((P2CONST(Rte_Calprm_CustDiag_DEFAULT_RTE_CDATA_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CustDiag_DEFAULT_RTE_CDATA_GROUP])->DidF18CDft[0])) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  else
#   define Rte_CData_DidF18CDft() (&((P2CONST(Rte_Calprm_CustDiag_DEFAULT_RTE_CDATA_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CustDiag_DEFAULT_RTE_CDATA_GROUP])->DidF18CDft) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  endif

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_CData_DidF190Dft() (&(((P2CONST(Rte_Calprm_CustDiag_DEFAULT_RTE_CDATA_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CustDiag_DEFAULT_RTE_CDATA_GROUP])->DidF190Dft[0])) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  else
#   define Rte_CData_DidF190Dft() (&((P2CONST(Rte_Calprm_CustDiag_DEFAULT_RTE_CDATA_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CustDiag_DEFAULT_RTE_CDATA_GROUP])->DidF190Dft) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  endif

/**********************************************************************************************************************
 * Rte_Prm (Calibration component calibration parameters)
 *********************************************************************************************************************/

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Prm_NxtrCalIdsCal0DevlpDesc_Ary1D() (&(((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->NxtrCalIdsCal0DevlpDesc_Ary1D[0])) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  else
#   define Rte_Prm_NxtrCalIdsCal0DevlpDesc_Ary1D() (&((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->NxtrCalIdsCal0DevlpDesc_Ary1D) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  endif

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Prm_NxtrCalIdsCal1DevlpDesc_Ary1D() (&(((P2CONST(Rte_Calprm_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP])->NxtrCalIdsCal1DevlpDesc_Ary1D[0])) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  else
#   define Rte_Prm_NxtrCalIdsCal1DevlpDesc_Ary1D() (&((P2CONST(Rte_Calprm_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP])->NxtrCalIdsCal1DevlpDesc_Ary1D) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  endif

/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Rte_Pim (Per-Instance Memory)
 *********************************************************************************************************************/

#  ifndef RTE_MICROSAR_PIM_EXPORT
#   define RTE_START_SEC_VAR_DEFAULT_RTE_Appl10_PIM_GROUP_UNSPECIFIED
#   include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CustDiag_MaxCurr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CustDiag_MaxTemp; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CustDiag_MinVltg; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CustDiag_ClrDiagcReq; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CustDiag_DidEE01; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CustDiag_DidEE02; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CustDiag_DidEE41; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CustDiag_DidEED0; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CustDiag_DidF162; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CustDiag_DidF163; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CustDiag_EcuId; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(BswM_BswMEcuResetMod, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CustDiag_EcuResetMode; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CustDiag_EolByteNTCPara; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CustDiag_ReqDelayCnt; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CustDiag_RstReq; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CustDiag_RstStrt; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CustDiag_RtnDC00Req; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CustDiag_Did630FChk; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CustDiag_Rtn0202Strt; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary1D_u8_2, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CustDiag_Did205A; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary1D_u8_2, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CustDiag_Did205B; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary1D_u8_24, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CustDiag_Did3003; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary1D_u8_2, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CustDiag_Did301A; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary1D_u8_24, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CustDiag_Did630F; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary1D_u8_24, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CustDiag_DidDE00; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary1D_u8_24, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CustDiag_DidDE01; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary1D_u8_24, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CustDiag_DidDE02; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary1D_u8_64, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CustDiag_DidDE03; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary1D_u8_2, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CustDiag_DidDE04; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary1D_u8_24, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CustDiag_DidDE05; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary1D_u8_3, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CustDiag_DidEE00; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary1D_u8_20, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CustDiag_DidEE21; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary1D_u8_40, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CustDiag_DidEE22; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary1D_u8_40, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CustDiag_DidEE23; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary1D_u8_3, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CustDiag_DidEE40; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary1D_u8_4, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CustDiag_DidEE81; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary1D_u8_4, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CustDiag_DidEE82; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary1D_u8_4, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CustDiag_DidEE83; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary1D_u8_4, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CustDiag_DidEE84; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary1D_u8_4, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CustDiag_DidEE85; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary1D_u8_4, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CustDiag_DidEE86; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary1D_u8_4, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CustDiag_DidEE87; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary1D_u8_4, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CustDiag_DidEE88; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary1D_u8_24, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CustDiag_DidF110; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary1D_u8_24, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CustDiag_DidF111; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary1D_u8_24, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CustDiag_DidF113; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary1D_u8_10, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CustDiag_DidF15F; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary1D_u8_4, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CustDiag_DidF166; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary1D_u8_24, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CustDiag_DidF18A; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary1D_u8_16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CustDiag_DidF18C; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary1D_u8_24, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CustDiag_DidF190; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#   define RTE_STOP_SEC_VAR_DEFAULT_RTE_Appl10_PIM_GROUP_UNSPECIFIED
#   include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  endif

#  define Rte_Pim_MaxCurr() \
  (&Rte_CustDiag_MaxCurr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_MaxTemp() \
  (&Rte_CustDiag_MaxTemp) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_MinVltg() \
  (&Rte_CustDiag_MinVltg) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_ClrDiagcReq() \
  (&Rte_CustDiag_ClrDiagcReq) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_DidEE01() \
  (&Rte_CustDiag_DidEE01) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_DidEE02() \
  (&Rte_CustDiag_DidEE02) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_DidEE41() \
  (&Rte_CustDiag_DidEE41) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_DidEED0() \
  (&Rte_CustDiag_DidEED0) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_DidF162() \
  (&Rte_CustDiag_DidF162) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_DidF163() \
  (&Rte_CustDiag_DidF163) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_EcuId() \
  (&Rte_CustDiag_EcuId) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_EcuResetMode() \
  (&Rte_CustDiag_EcuResetMode) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_EolByteNTCPara() \
  (&Rte_CustDiag_EolByteNTCPara) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_ReqDelayCnt() \
  (&Rte_CustDiag_ReqDelayCnt) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_RstReq() \
  (&Rte_CustDiag_RstReq) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_RstStrt() \
  (&Rte_CustDiag_RstStrt) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_RtnDC00Req() \
  (&Rte_CustDiag_RtnDC00Req) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_Did630FChk() \
  (&Rte_CustDiag_Did630FChk) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_Rtn0202Strt() \
  (&Rte_CustDiag_Rtn0202Strt) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Pim_Did205A() (&((*RtePim_Did205A())[0]))
#  else
#   define Rte_Pim_Did205A() RtePim_Did205A()
#  endif
#  define RtePim_Did205A() \
  (&Rte_CustDiag_Did205A) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Pim_Did205B() (&((*RtePim_Did205B())[0]))
#  else
#   define Rte_Pim_Did205B() RtePim_Did205B()
#  endif
#  define RtePim_Did205B() \
  (&Rte_CustDiag_Did205B) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Pim_Did3003() (&((*RtePim_Did3003())[0]))
#  else
#   define Rte_Pim_Did3003() RtePim_Did3003()
#  endif
#  define RtePim_Did3003() \
  (&Rte_CustDiag_Did3003) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Pim_Did301A() (&((*RtePim_Did301A())[0]))
#  else
#   define Rte_Pim_Did301A() RtePim_Did301A()
#  endif
#  define RtePim_Did301A() \
  (&Rte_CustDiag_Did301A) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Pim_Did630F() (&((*RtePim_Did630F())[0]))
#  else
#   define Rte_Pim_Did630F() RtePim_Did630F()
#  endif
#  define RtePim_Did630F() \
  (&Rte_CustDiag_Did630F) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Pim_DidDE00() (&((*RtePim_DidDE00())[0]))
#  else
#   define Rte_Pim_DidDE00() RtePim_DidDE00()
#  endif
#  define RtePim_DidDE00() \
  (&Rte_CustDiag_DidDE00) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Pim_DidDE01() (&((*RtePim_DidDE01())[0]))
#  else
#   define Rte_Pim_DidDE01() RtePim_DidDE01()
#  endif
#  define RtePim_DidDE01() \
  (&Rte_CustDiag_DidDE01) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Pim_DidDE02() (&((*RtePim_DidDE02())[0]))
#  else
#   define Rte_Pim_DidDE02() RtePim_DidDE02()
#  endif
#  define RtePim_DidDE02() \
  (&Rte_CustDiag_DidDE02) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Pim_DidDE03() (&((*RtePim_DidDE03())[0]))
#  else
#   define Rte_Pim_DidDE03() RtePim_DidDE03()
#  endif
#  define RtePim_DidDE03() \
  (&Rte_CustDiag_DidDE03) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Pim_DidDE04() (&((*RtePim_DidDE04())[0]))
#  else
#   define Rte_Pim_DidDE04() RtePim_DidDE04()
#  endif
#  define RtePim_DidDE04() \
  (&Rte_CustDiag_DidDE04) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Pim_DidDE05() (&((*RtePim_DidDE05())[0]))
#  else
#   define Rte_Pim_DidDE05() RtePim_DidDE05()
#  endif
#  define RtePim_DidDE05() \
  (&Rte_CustDiag_DidDE05) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Pim_DidEE00() (&((*RtePim_DidEE00())[0]))
#  else
#   define Rte_Pim_DidEE00() RtePim_DidEE00()
#  endif
#  define RtePim_DidEE00() \
  (&Rte_CustDiag_DidEE00) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Pim_DidEE21() (&((*RtePim_DidEE21())[0]))
#  else
#   define Rte_Pim_DidEE21() RtePim_DidEE21()
#  endif
#  define RtePim_DidEE21() \
  (&Rte_CustDiag_DidEE21) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Pim_DidEE22() (&((*RtePim_DidEE22())[0]))
#  else
#   define Rte_Pim_DidEE22() RtePim_DidEE22()
#  endif
#  define RtePim_DidEE22() \
  (&Rte_CustDiag_DidEE22) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Pim_DidEE23() (&((*RtePim_DidEE23())[0]))
#  else
#   define Rte_Pim_DidEE23() RtePim_DidEE23()
#  endif
#  define RtePim_DidEE23() \
  (&Rte_CustDiag_DidEE23) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Pim_DidEE40() (&((*RtePim_DidEE40())[0]))
#  else
#   define Rte_Pim_DidEE40() RtePim_DidEE40()
#  endif
#  define RtePim_DidEE40() \
  (&Rte_CustDiag_DidEE40) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Pim_DidEE81() (&((*RtePim_DidEE81())[0]))
#  else
#   define Rte_Pim_DidEE81() RtePim_DidEE81()
#  endif
#  define RtePim_DidEE81() \
  (&Rte_CustDiag_DidEE81) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Pim_DidEE82() (&((*RtePim_DidEE82())[0]))
#  else
#   define Rte_Pim_DidEE82() RtePim_DidEE82()
#  endif
#  define RtePim_DidEE82() \
  (&Rte_CustDiag_DidEE82) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Pim_DidEE83() (&((*RtePim_DidEE83())[0]))
#  else
#   define Rte_Pim_DidEE83() RtePim_DidEE83()
#  endif
#  define RtePim_DidEE83() \
  (&Rte_CustDiag_DidEE83) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Pim_DidEE84() (&((*RtePim_DidEE84())[0]))
#  else
#   define Rte_Pim_DidEE84() RtePim_DidEE84()
#  endif
#  define RtePim_DidEE84() \
  (&Rte_CustDiag_DidEE84) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Pim_DidEE85() (&((*RtePim_DidEE85())[0]))
#  else
#   define Rte_Pim_DidEE85() RtePim_DidEE85()
#  endif
#  define RtePim_DidEE85() \
  (&Rte_CustDiag_DidEE85) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Pim_DidEE86() (&((*RtePim_DidEE86())[0]))
#  else
#   define Rte_Pim_DidEE86() RtePim_DidEE86()
#  endif
#  define RtePim_DidEE86() \
  (&Rte_CustDiag_DidEE86) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Pim_DidEE87() (&((*RtePim_DidEE87())[0]))
#  else
#   define Rte_Pim_DidEE87() RtePim_DidEE87()
#  endif
#  define RtePim_DidEE87() \
  (&Rte_CustDiag_DidEE87) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Pim_DidEE88() (&((*RtePim_DidEE88())[0]))
#  else
#   define Rte_Pim_DidEE88() RtePim_DidEE88()
#  endif
#  define RtePim_DidEE88() \
  (&Rte_CustDiag_DidEE88) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Pim_DidF110() (&((*RtePim_DidF110())[0]))
#  else
#   define Rte_Pim_DidF110() RtePim_DidF110()
#  endif
#  define RtePim_DidF110() \
  (&Rte_CustDiag_DidF110) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Pim_DidF111() (&((*RtePim_DidF111())[0]))
#  else
#   define Rte_Pim_DidF111() RtePim_DidF111()
#  endif
#  define RtePim_DidF111() \
  (&Rte_CustDiag_DidF111) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Pim_DidF113() (&((*RtePim_DidF113())[0]))
#  else
#   define Rte_Pim_DidF113() RtePim_DidF113()
#  endif
#  define RtePim_DidF113() \
  (&Rte_CustDiag_DidF113) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Pim_DidF15F() (&((*RtePim_DidF15F())[0]))
#  else
#   define Rte_Pim_DidF15F() RtePim_DidF15F()
#  endif
#  define RtePim_DidF15F() \
  (&Rte_CustDiag_DidF15F) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Pim_DidF166() (&((*RtePim_DidF166())[0]))
#  else
#   define Rte_Pim_DidF166() RtePim_DidF166()
#  endif
#  define RtePim_DidF166() \
  (&Rte_CustDiag_DidF166) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Pim_DidF18A() (&((*RtePim_DidF18A())[0]))
#  else
#   define Rte_Pim_DidF18A() RtePim_DidF18A()
#  endif
#  define RtePim_DidF18A() \
  (&Rte_CustDiag_DidF18A) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Pim_DidF18C() (&((*RtePim_DidF18C())[0]))
#  else
#   define Rte_Pim_DidF18C() RtePim_DidF18C()
#  endif
#  define RtePim_DidF18C() \
  (&Rte_CustDiag_DidF18C) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Pim_DidF190() (&((*RtePim_DidF190())[0]))
#  else
#   define Rte_Pim_DidF190() RtePim_DidF190()
#  endif
#  define RtePim_DidF190() \
  (&Rte_CustDiag_DidF190) /* PRQA S 3453 */ /* MD_MSR_19.7 */


# endif /* !defined(RTE_CORE) */


# define CustDiag_START_SEC_CODE
# include "CustDiag_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * Runnable entities
 *********************************************************************************************************************/

# ifndef RTE_CORE
#  define RTE_RUNNABLE_CustDiagInit1 CustDiagInit1
#  define RTE_RUNNABLE_CustDiagPer1 CustDiagPer1
#  define RTE_RUNNABLE_CustDiagPer2 CustDiagPer2
#  define RTE_RUNNABLE_CustDiagPer3 CustDiagPer3
#  define RTE_RUNNABLE_Customer_DID_ConditionCheckRead Customer_DID_ConditionCheckRead
#  define RTE_RUNNABLE_DataServices_DID_205A_Torque_Steer_Compensation_Activation_Counter_ReadData DataServices_DID_205A_Torque_Steer_Compensation_Activation_Counter_ReadData
#  define RTE_RUNNABLE_DataServices_DID_205A_Torque_Steer_Compensation_Activation_Counter_WriteData DataServices_DID_205A_Torque_Steer_Compensation_Activation_Counter_WriteData
#  define RTE_RUNNABLE_DataServices_DID_205B_Brake_Pull_Reduction_Activation_Counter_ReadData DataServices_DID_205B_Brake_Pull_Reduction_Activation_Counter_ReadData
#  define RTE_RUNNABLE_DataServices_DID_205B_Brake_Pull_Reduction_Activation_Counter_WriteData DataServices_DID_205B_Brake_Pull_Reduction_Activation_Counter_WriteData
#  define RTE_RUNNABLE_DataServices_DID_3003_Gear_Hardware_Part_Number_ReadData DataServices_DID_3003_Gear_Hardware_Part_Number_ReadData
#  define RTE_RUNNABLE_DataServices_DID_3003_Gear_Hardware_Part_Number_WriteData DataServices_DID_3003_Gear_Hardware_Part_Number_WriteData
#  define RTE_RUNNABLE_DataServices_DID_301A_Pull_Drift_Compensation_Value_ReadData DataServices_DID_301A_Pull_Drift_Compensation_Value_ReadData
#  define RTE_RUNNABLE_DataServices_DID_301A_Pull_Drift_Compensation_Value_WriteData DataServices_DID_301A_Pull_Drift_Compensation_Value_WriteData
#  define RTE_RUNNABLE_DataServices_DID_301F_Steering_Pinion_Rotation_Speed_ReadData DataServices_DID_301F_Steering_Pinion_Rotation_Speed_ReadData
#  define RTE_RUNNABLE_DataServices_DID_3020_Steering_Pinion_Angle_ReadData DataServices_DID_3020_Steering_Pinion_Angle_ReadData
#  define RTE_RUNNABLE_DataServices_DID_330C_Steering_Shaft_Torque_Sensor_2_ReadData DataServices_DID_330C_Steering_Shaft_Torque_Sensor_2_ReadData
#  define RTE_RUNNABLE_DataServices_DID_3B4B_Steering_wheel_angle_alignment_offset_ReadData DataServices_DID_3B4B_Steering_wheel_angle_alignment_offset_ReadData
#  define RTE_RUNNABLE_DataServices_DID_630F_Multiple_VIN_Storage_Original_VIN_ReadData DataServices_DID_630F_Multiple_VIN_Storage_Original_VIN_ReadData
#  define RTE_RUNNABLE_DataServices_DID_D100_Active_Diagnostic_Session_ReadData DataServices_DID_D100_Active_Diagnostic_Session_ReadData
#  define RTE_RUNNABLE_DataServices_DID_D111_ECU_Power_Supply_Voltage_ReadData DataServices_DID_D111_ECU_Power_Supply_Voltage_ReadData
#  define RTE_RUNNABLE_DataServices_DID_D117_ECU_Internal_Temperature_ReadData DataServices_DID_D117_ECU_Internal_Temperature_ReadData
#  define RTE_RUNNABLE_DataServices_DID_D118_Motor_Current_ReadData DataServices_DID_D118_Motor_Current_ReadData
#  define RTE_RUNNABLE_DataServices_DID_DD00_Global_Real_Time_ReadData DataServices_DID_DD00_Global_Real_Time_ReadData
#  define RTE_RUNNABLE_DataServices_DID_DD01_Total_Distance_ReadData DataServices_DID_DD01_Total_Distance_ReadData
#  define RTE_RUNNABLE_DataServices_DID_DD09_Vehicle_Speed_ReadData DataServices_DID_DD09_Vehicle_Speed_ReadData
#  define RTE_RUNNABLE_DataServices_DID_DE00_VehicleData_ReadData DataServices_DID_DE00_VehicleData_ReadData
#  define RTE_RUNNABLE_DataServices_DID_DE00_VehicleData_WriteData DataServices_DID_DE00_VehicleData_WriteData
#  define RTE_RUNNABLE_DataServices_DID_DE01_FIHSwFeatureConfig_ReadData DataServices_DID_DE01_FIHSwFeatureConfig_ReadData
#  define RTE_RUNNABLE_DataServices_DID_DE01_FIHSwFeatureConfig_WriteData DataServices_DID_DE01_FIHSwFeatureConfig_WriteData
#  define RTE_RUNNABLE_DataServices_DID_DE02_FeatureConfig_ReadData DataServices_DID_DE02_FeatureConfig_ReadData
#  define RTE_RUNNABLE_DataServices_DID_DE02_FeatureConfig_WriteData DataServices_DID_DE02_FeatureConfig_WriteData
#  define RTE_RUNNABLE_DataServices_DID_DE03_Enable_DisableDTCs_ReadData DataServices_DID_DE03_Enable_DisableDTCs_ReadData
#  define RTE_RUNNABLE_DataServices_DID_DE03_Enable_DisableDTCs_WriteData DataServices_DID_DE03_Enable_DisableDTCs_WriteData
#  define RTE_RUNNABLE_DataServices_DID_DE04_PDCResetValue_ReadData DataServices_DID_DE04_PDCResetValue_ReadData
#  define RTE_RUNNABLE_DataServices_DID_DE04_PDCResetValue_WriteData DataServices_DID_DE04_PDCResetValue_WriteData
#  define RTE_RUNNABLE_DataServices_DID_DE05_Unused_ReadData DataServices_DID_DE05_Unused_ReadData
#  define RTE_RUNNABLE_DataServices_DID_DE05_Unused_WriteData DataServices_DID_DE05_Unused_WriteData
#  define RTE_RUNNABLE_DataServices_DID_EE00_DevMessConfig_ReadData DataServices_DID_EE00_DevMessConfig_ReadData
#  define RTE_RUNNABLE_DataServices_DID_EE00_DevMessConfig_WriteData DataServices_DID_EE00_DevMessConfig_WriteData
#  define RTE_RUNNABLE_DataServices_DID_EE01_XCP_Enable_Disable_ReadData DataServices_DID_EE01_XCP_Enable_Disable_ReadData
#  define RTE_RUNNABLE_DataServices_DID_EE01_XCP_Enable_Disable_WriteData DataServices_DID_EE01_XCP_Enable_Disable_WriteData
#  define RTE_RUNNABLE_DataServices_DID_EE02_Assist_On_Off_ReadData DataServices_DID_EE02_Assist_On_Off_ReadData
#  define RTE_RUNNABLE_DataServices_DID_EE02_Assist_On_Off_WriteData DataServices_DID_EE02_Assist_On_Off_WriteData
#  define RTE_RUNNABLE_DataServices_DID_EE03_IgnCycleCounter_ReadData DataServices_DID_EE03_IgnCycleCounter_ReadData
#  define RTE_RUNNABLE_DataServices_DID_EE04_IgnOnTime_ReadData DataServices_DID_EE04_IgnOnTime_ReadData
#  define RTE_RUNNABLE_DataServices_DID_EE05_FinalMotTq_ReadData DataServices_DID_EE05_FinalMotTq_ReadData
#  define RTE_RUNNABLE_DataServices_DID_EE06_VINChanged_ReadData DataServices_DID_EE06_VINChanged_ReadData
#  define RTE_RUNNABLE_DataServices_DID_EE07_EPSSystemState_ReadData DataServices_DID_EE07_EPSSystemState_ReadData
#  define RTE_RUNNABLE_DataServices_DID_EE20_LoAFaultReporting_ReadData DataServices_DID_EE20_LoAFaultReporting_ReadData
#  define RTE_RUNNABLE_DataServices_DID_EE21_CurrentLvlCounter_ReadData DataServices_DID_EE21_CurrentLvlCounter_ReadData
#  define RTE_RUNNABLE_DataServices_DID_EE22_VoltageLvlCounters_ReadData DataServices_DID_EE22_VoltageLvlCounters_ReadData
#  define RTE_RUNNABLE_DataServices_DID_EE23_TempLvlCounters_ReadData DataServices_DID_EE23_TempLvlCounters_ReadData
#  define RTE_RUNNABLE_DataServices_DID_EE40_ResearchMessConfig_ReadData DataServices_DID_EE40_ResearchMessConfig_ReadData
#  define RTE_RUNNABLE_DataServices_DID_EE40_ResearchMessConfig_WriteData DataServices_DID_EE40_ResearchMessConfig_WriteData
#  define RTE_RUNNABLE_DataServices_DID_EE41_ResearchFeatureSwitch_ReadData DataServices_DID_EE41_ResearchFeatureSwitch_ReadData
#  define RTE_RUNNABLE_DataServices_DID_EE41_ResearchFeatureSwitch_WriteData DataServices_DID_EE41_ResearchFeatureSwitch_WriteData
#  define RTE_RUNNABLE_DataServices_DID_EE42_ActiveFeatures_ReadData DataServices_DID_EE42_ActiveFeatures_ReadData
#  define RTE_RUNNABLE_DataServices_DID_EE43_SDMSteeringMode_ReadData DataServices_DID_EE43_SDMSteeringMode_ReadData
#  define RTE_RUNNABLE_DataServices_DID_EE80_FIHSwVer_ReadData DataServices_DID_EE80_FIHSwVer_ReadData
#  define RTE_RUNNABLE_DataServices_DID_EE81_FIHSwReserved0_ReadData DataServices_DID_EE81_FIHSwReserved0_ReadData
#  define RTE_RUNNABLE_DataServices_DID_EE81_FIHSwReserved0_WriteData DataServices_DID_EE81_FIHSwReserved0_WriteData
#  define RTE_RUNNABLE_DataServices_DID_EE82_FIHSwReserved1_ReadData DataServices_DID_EE82_FIHSwReserved1_ReadData
#  define RTE_RUNNABLE_DataServices_DID_EE82_FIHSwReserved1_WriteData DataServices_DID_EE82_FIHSwReserved1_WriteData
#  define RTE_RUNNABLE_DataServices_DID_EE83_FIHSwReserved2_ReadData DataServices_DID_EE83_FIHSwReserved2_ReadData
#  define RTE_RUNNABLE_DataServices_DID_EE83_FIHSwReserved2_WriteData DataServices_DID_EE83_FIHSwReserved2_WriteData
#  define RTE_RUNNABLE_DataServices_DID_EE84_FIHSwReserved3_ReadData DataServices_DID_EE84_FIHSwReserved3_ReadData
#  define RTE_RUNNABLE_DataServices_DID_EE84_FIHSwReserved3_WriteData DataServices_DID_EE84_FIHSwReserved3_WriteData
#  define RTE_RUNNABLE_DataServices_DID_EE85_FIHSwReserved4_ReadData DataServices_DID_EE85_FIHSwReserved4_ReadData
#  define RTE_RUNNABLE_DataServices_DID_EE85_FIHSwReserved4_WriteData DataServices_DID_EE85_FIHSwReserved4_WriteData
#  define RTE_RUNNABLE_DataServices_DID_EE86_FIHSwReserved5_ReadData DataServices_DID_EE86_FIHSwReserved5_ReadData
#  define RTE_RUNNABLE_DataServices_DID_EE86_FIHSwReserved5_WriteData DataServices_DID_EE86_FIHSwReserved5_WriteData
#  define RTE_RUNNABLE_DataServices_DID_EE87_FIHSwReserved6_ReadData DataServices_DID_EE87_FIHSwReserved6_ReadData
#  define RTE_RUNNABLE_DataServices_DID_EE87_FIHSwReserved6_WriteData DataServices_DID_EE87_FIHSwReserved6_WriteData
#  define RTE_RUNNABLE_DataServices_DID_EE88_FIHSwReserved7_ReadData DataServices_DID_EE88_FIHSwReserved7_ReadData
#  define RTE_RUNNABLE_DataServices_DID_EE88_FIHSwReserved7_WriteData DataServices_DID_EE88_FIHSwReserved7_WriteData
#  define RTE_RUNNABLE_DataServices_DID_EED0_SupplierFactoryMode_ReadData DataServices_DID_EED0_SupplierFactoryMode_ReadData
#  define RTE_RUNNABLE_DataServices_DID_EED0_SupplierFactoryMode_WriteData DataServices_DID_EED0_SupplierFactoryMode_WriteData
#  define RTE_RUNNABLE_DataServices_DID_EED1_SupplierInternalFaultCode_ReadData DataServices_DID_EED1_SupplierInternalFaultCode_ReadData
#  define RTE_RUNNABLE_DataServices_DID_EED2_SupplierInternalErrorMemory_ReadData DataServices_DID_EED2_SupplierInternalErrorMemory_ReadData
#  define RTE_RUNNABLE_DataServices_DID_F10A_ECU_Cal_Config_Part_Number_ReadData DataServices_DID_F10A_ECU_Cal_Config_Part_Number_ReadData
#  define RTE_RUNNABLE_DataServices_DID_F110_Subsystem_Specific_Diagnostic_Specification_Part_Number_ReadData DataServices_DID_F110_Subsystem_Specific_Diagnostic_Specification_Part_Number_ReadData
#  define RTE_RUNNABLE_DataServices_DID_F110_Subsystem_Specific_Diagnostic_Specification_Part_Number_WriteData DataServices_DID_F110_Subsystem_Specific_Diagnostic_Specification_Part_Number_WriteData
#  define RTE_RUNNABLE_DataServices_DID_F111_ECU_Core_Assembly_Number_ReadData DataServices_DID_F111_ECU_Core_Assembly_Number_ReadData
#  define RTE_RUNNABLE_DataServices_DID_F111_ECU_Core_Assembly_Number_WriteData DataServices_DID_F111_ECU_Core_Assembly_Number_WriteData
#  define RTE_RUNNABLE_DataServices_DID_F113_ECU_Delivery_Assembly_Number_ReadData DataServices_DID_F113_ECU_Delivery_Assembly_Number_ReadData
#  define RTE_RUNNABLE_DataServices_DID_F113_ECU_Delivery_Assembly_Number_WriteData DataServices_DID_F113_ECU_Delivery_Assembly_Number_WriteData
#  define RTE_RUNNABLE_DataServices_DID_F124_ECU_Calibration_Data_1_Number_ReadData DataServices_DID_F124_ECU_Calibration_Data_1_Number_ReadData
#  define RTE_RUNNABLE_DataServices_DID_F15F_NOS_Generation_Tool_Version_Number_ReadData DataServices_DID_F15F_NOS_Generation_Tool_Version_Number_ReadData
#  define RTE_RUNNABLE_DataServices_DID_F162_Software_Download_Specification_Version_ReadData DataServices_DID_F162_Software_Download_Specification_Version_ReadData
#  define RTE_RUNNABLE_DataServices_DID_F162_Software_Download_Specification_Version_WriteData DataServices_DID_F162_Software_Download_Specification_Version_WriteData
#  define RTE_RUNNABLE_DataServices_DID_F163_Diagnostic_Specification_Version_ReadData DataServices_DID_F163_Diagnostic_Specification_Version_ReadData
#  define RTE_RUNNABLE_DataServices_DID_F163_Diagnostic_Specification_Version_WriteData DataServices_DID_F163_Diagnostic_Specification_Version_WriteData
#  define RTE_RUNNABLE_DataServices_DID_F166_NOS_Message_Database_1_Version_Number_ReadData DataServices_DID_F166_NOS_Message_Database_1_Version_Number_ReadData
#  define RTE_RUNNABLE_DataServices_DID_F166_NOS_Message_Database_1_Version_Number_WriteData DataServices_DID_F166_NOS_Message_Database_1_Version_Number_WriteData
#  define RTE_RUNNABLE_DataServices_DID_F17C_NOS_Bootloader_Generation_Tool_Version_Number_ReadData DataServices_DID_F17C_NOS_Bootloader_Generation_Tool_Version_Number_ReadData
#  define RTE_RUNNABLE_DataServices_DID_F180_Boot_Software_Identification_ReadData DataServices_DID_F180_Boot_Software_Identification_ReadData
#  define RTE_RUNNABLE_DataServices_DID_F188_Vehicle_Manufacturer_ECU_Software_Number_ReadData DataServices_DID_F188_Vehicle_Manufacturer_ECU_Software_Number_ReadData
#  define RTE_RUNNABLE_DataServices_DID_F18A_System_Supplier_Identifier_ReadData DataServices_DID_F18A_System_Supplier_Identifier_ReadData
#  define RTE_RUNNABLE_DataServices_DID_F18A_System_Supplier_Identifier_WriteData DataServices_DID_F18A_System_Supplier_Identifier_WriteData
#  define RTE_RUNNABLE_DataServices_DID_F18C_ECU_Serial_Number_ReadData DataServices_DID_F18C_ECU_Serial_Number_ReadData
#  define RTE_RUNNABLE_DataServices_DID_F18C_ECU_Serial_Number_WriteData DataServices_DID_F18C_ECU_Serial_Number_WriteData
#  define RTE_RUNNABLE_DataServices_DID_F190_Vehicle_Identification_Number_ReadData DataServices_DID_F190_Vehicle_Identification_Number_ReadData
#  define RTE_RUNNABLE_RoutineServices_RTN_0202_On_Demand_Self_Test_RequestResults RoutineServices_RTN_0202_On_Demand_Self_Test_RequestResults
#  define RTE_RUNNABLE_RoutineServices_RTN_0202_On_Demand_Self_Test_Start RoutineServices_RTN_0202_On_Demand_Self_Test_Start
#  define RTE_RUNNABLE_RoutineServices_RTN_0202_On_Demand_Self_Test_Stop RoutineServices_RTN_0202_On_Demand_Self_Test_Stop
#  define RTE_RUNNABLE_RoutineServices_RTN_200E_Calibrate_Steering_Angle_Centre_Position_Start RoutineServices_RTN_200E_Calibrate_Steering_Angle_Centre_Position_Start
#  define RTE_RUNNABLE_RoutineServices_RTN_200F_Clear_Steering_Angle_Centre_Position_Calibration_Start RoutineServices_RTN_200F_Clear_Steering_Angle_Centre_Position_Calibration_Start
#  define RTE_RUNNABLE_RoutineServices_RTN_DC00_Reset_Assist_Fault_Counters_Start RoutineServices_RTN_DC00_Reset_Assist_Fault_Counters_Start
#  define RTE_RUNNABLE_ServiceRequestNotification_Confirmation ServiceRequestNotification_Confirmation
#  define RTE_RUNNABLE_ServiceRequestNotification_Indication ServiceRequestNotification_Indication
# endif

FUNC(void, CustDiag_CODE) CustDiagInit1(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(void, CustDiag_CODE) CustDiagPer1(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(void, CustDiag_CODE) CustDiagPer2(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(void, CustDiag_CODE) CustDiagPer3(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(Std_ReturnType, CustDiag_CODE) Customer_DID_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) ErrorCode); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_205A_Torque_Steer_Compensation_Activation_Counter_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_205A_Torque_Steer_Compensation_Activation_Counter_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data2ByteType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_205A_Torque_Steer_Compensation_Activation_Counter_WriteData(P2CONST(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) ErrorCode); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_205A_Torque_Steer_Compensation_Activation_Counter_WriteData(P2CONST(Dcm_Data2ByteType, AUTOMATIC, RTE_CUSTDIAG_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) ErrorCode); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_205B_Brake_Pull_Reduction_Activation_Counter_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_205B_Brake_Pull_Reduction_Activation_Counter_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data2ByteType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_205B_Brake_Pull_Reduction_Activation_Counter_WriteData(P2CONST(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) ErrorCode); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_205B_Brake_Pull_Reduction_Activation_Counter_WriteData(P2CONST(Dcm_Data2ByteType, AUTOMATIC, RTE_CUSTDIAG_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) ErrorCode); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_3003_Gear_Hardware_Part_Number_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_3003_Gear_Hardware_Part_Number_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data24ByteType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_3003_Gear_Hardware_Part_Number_WriteData(P2CONST(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) ErrorCode); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_3003_Gear_Hardware_Part_Number_WriteData(P2CONST(Dcm_Data24ByteType, AUTOMATIC, RTE_CUSTDIAG_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) ErrorCode); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_301A_Pull_Drift_Compensation_Value_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_301A_Pull_Drift_Compensation_Value_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data2ByteType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_301A_Pull_Drift_Compensation_Value_WriteData(P2CONST(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) ErrorCode); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_301A_Pull_Drift_Compensation_Value_WriteData(P2CONST(Dcm_Data2ByteType, AUTOMATIC, RTE_CUSTDIAG_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) ErrorCode); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_301F_Steering_Pinion_Rotation_Speed_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_301F_Steering_Pinion_Rotation_Speed_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_3020_Steering_Pinion_Angle_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_3020_Steering_Pinion_Angle_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data2ByteType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_330C_Steering_Shaft_Torque_Sensor_2_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_330C_Steering_Shaft_Torque_Sensor_2_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_3B4B_Steering_wheel_angle_alignment_offset_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_3B4B_Steering_wheel_angle_alignment_offset_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data2ByteType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_630F_Multiple_VIN_Storage_Original_VIN_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_630F_Multiple_VIN_Storage_Original_VIN_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data24ByteType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_D100_Active_Diagnostic_Session_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_D100_Active_Diagnostic_Session_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_D111_ECU_Power_Supply_Voltage_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_D111_ECU_Power_Supply_Voltage_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_D117_ECU_Internal_Temperature_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_D117_ECU_Internal_Temperature_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_D118_Motor_Current_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_D118_Motor_Current_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data2ByteType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_DD00_Global_Real_Time_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_DD00_Global_Real_Time_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data4ByteType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_DD01_Total_Distance_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_DD01_Total_Distance_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data3ByteType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_DD09_Vehicle_Speed_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_DD09_Vehicle_Speed_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_DE00_VehicleData_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_DE00_VehicleData_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data24ByteType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_DE00_VehicleData_WriteData(P2CONST(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) ErrorCode); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_DE00_VehicleData_WriteData(P2CONST(Dcm_Data24ByteType, AUTOMATIC, RTE_CUSTDIAG_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) ErrorCode); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_DE01_FIHSwFeatureConfig_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_DE01_FIHSwFeatureConfig_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data24ByteType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_DE01_FIHSwFeatureConfig_WriteData(P2CONST(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) ErrorCode); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_DE01_FIHSwFeatureConfig_WriteData(P2CONST(Dcm_Data24ByteType, AUTOMATIC, RTE_CUSTDIAG_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) ErrorCode); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_DE02_FeatureConfig_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_DE02_FeatureConfig_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data24ByteType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_DE02_FeatureConfig_WriteData(P2CONST(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) ErrorCode); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_DE02_FeatureConfig_WriteData(P2CONST(Dcm_Data24ByteType, AUTOMATIC, RTE_CUSTDIAG_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) ErrorCode); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_DE03_Enable_DisableDTCs_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_DE03_Enable_DisableDTCs_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data64ByteType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_DE03_Enable_DisableDTCs_WriteData(P2CONST(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) ErrorCode); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_DE03_Enable_DisableDTCs_WriteData(P2CONST(Dcm_Data64ByteType, AUTOMATIC, RTE_CUSTDIAG_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) ErrorCode); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_DE04_PDCResetValue_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_DE04_PDCResetValue_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data2ByteType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_DE04_PDCResetValue_WriteData(P2CONST(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) ErrorCode); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_DE04_PDCResetValue_WriteData(P2CONST(Dcm_Data2ByteType, AUTOMATIC, RTE_CUSTDIAG_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) ErrorCode); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_DE05_Unused_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_DE05_Unused_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data24ByteType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_DE05_Unused_WriteData(P2CONST(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) ErrorCode); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_DE05_Unused_WriteData(P2CONST(Dcm_Data24ByteType, AUTOMATIC, RTE_CUSTDIAG_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) ErrorCode); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_EE00_DevMessConfig_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_EE00_DevMessConfig_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data3ByteType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_EE00_DevMessConfig_WriteData(P2CONST(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) ErrorCode); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_EE00_DevMessConfig_WriteData(P2CONST(Dcm_Data3ByteType, AUTOMATIC, RTE_CUSTDIAG_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) ErrorCode); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_EE01_XCP_Enable_Disable_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_EE01_XCP_Enable_Disable_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_EE01_XCP_Enable_Disable_WriteData(P2CONST(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) ErrorCode); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_EE01_XCP_Enable_Disable_WriteData(P2CONST(Dcm_Data1ByteType, AUTOMATIC, RTE_CUSTDIAG_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) ErrorCode); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_EE02_Assist_On_Off_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_EE02_Assist_On_Off_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_EE02_Assist_On_Off_WriteData(P2CONST(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) ErrorCode); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_EE02_Assist_On_Off_WriteData(P2CONST(Dcm_Data1ByteType, AUTOMATIC, RTE_CUSTDIAG_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) ErrorCode); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_EE03_IgnCycleCounter_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_EE03_IgnCycleCounter_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data2ByteType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_EE04_IgnOnTime_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_EE04_IgnOnTime_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data2ByteType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_EE05_FinalMotTq_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_EE05_FinalMotTq_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data2ByteType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_EE06_VINChanged_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_EE06_VINChanged_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_EE07_EPSSystemState_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_EE07_EPSSystemState_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_EE20_LoAFaultReporting_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_EE20_LoAFaultReporting_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data24ByteType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_EE21_CurrentLvlCounter_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_EE21_CurrentLvlCounter_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data20ByteType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_EE22_VoltageLvlCounters_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_EE22_VoltageLvlCounters_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data40ByteType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_EE23_TempLvlCounters_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_EE23_TempLvlCounters_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data40ByteType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_EE40_ResearchMessConfig_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_EE40_ResearchMessConfig_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data3ByteType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_EE40_ResearchMessConfig_WriteData(P2CONST(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) ErrorCode); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_EE40_ResearchMessConfig_WriteData(P2CONST(Dcm_Data3ByteType, AUTOMATIC, RTE_CUSTDIAG_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) ErrorCode); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_EE41_ResearchFeatureSwitch_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_EE41_ResearchFeatureSwitch_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_EE41_ResearchFeatureSwitch_WriteData(P2CONST(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) ErrorCode); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_EE41_ResearchFeatureSwitch_WriteData(P2CONST(Dcm_Data1ByteType, AUTOMATIC, RTE_CUSTDIAG_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) ErrorCode); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_EE42_ActiveFeatures_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_EE42_ActiveFeatures_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_EE43_SDMSteeringMode_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_EE43_SDMSteeringMode_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_EE80_FIHSwVer_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_EE80_FIHSwVer_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_EE81_FIHSwReserved0_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_EE81_FIHSwReserved0_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data4ByteType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_EE81_FIHSwReserved0_WriteData(P2CONST(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) ErrorCode); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_EE81_FIHSwReserved0_WriteData(P2CONST(Dcm_Data4ByteType, AUTOMATIC, RTE_CUSTDIAG_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) ErrorCode); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_EE82_FIHSwReserved1_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_EE82_FIHSwReserved1_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data4ByteType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_EE82_FIHSwReserved1_WriteData(P2CONST(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) ErrorCode); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_EE82_FIHSwReserved1_WriteData(P2CONST(Dcm_Data4ByteType, AUTOMATIC, RTE_CUSTDIAG_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) ErrorCode); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_EE83_FIHSwReserved2_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_EE83_FIHSwReserved2_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data4ByteType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_EE83_FIHSwReserved2_WriteData(P2CONST(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) ErrorCode); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_EE83_FIHSwReserved2_WriteData(P2CONST(Dcm_Data4ByteType, AUTOMATIC, RTE_CUSTDIAG_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) ErrorCode); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_EE84_FIHSwReserved3_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_EE84_FIHSwReserved3_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data4ByteType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_EE84_FIHSwReserved3_WriteData(P2CONST(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) ErrorCode); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_EE84_FIHSwReserved3_WriteData(P2CONST(Dcm_Data4ByteType, AUTOMATIC, RTE_CUSTDIAG_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) ErrorCode); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_EE85_FIHSwReserved4_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_EE85_FIHSwReserved4_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data4ByteType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_EE85_FIHSwReserved4_WriteData(P2CONST(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) ErrorCode); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_EE85_FIHSwReserved4_WriteData(P2CONST(Dcm_Data4ByteType, AUTOMATIC, RTE_CUSTDIAG_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) ErrorCode); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_EE86_FIHSwReserved5_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_EE86_FIHSwReserved5_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data4ByteType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_EE86_FIHSwReserved5_WriteData(P2CONST(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) ErrorCode); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_EE86_FIHSwReserved5_WriteData(P2CONST(Dcm_Data4ByteType, AUTOMATIC, RTE_CUSTDIAG_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) ErrorCode); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_EE87_FIHSwReserved6_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_EE87_FIHSwReserved6_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data4ByteType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_EE87_FIHSwReserved6_WriteData(P2CONST(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) ErrorCode); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_EE87_FIHSwReserved6_WriteData(P2CONST(Dcm_Data4ByteType, AUTOMATIC, RTE_CUSTDIAG_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) ErrorCode); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_EE88_FIHSwReserved7_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_EE88_FIHSwReserved7_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data4ByteType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_EE88_FIHSwReserved7_WriteData(P2CONST(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) ErrorCode); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_EE88_FIHSwReserved7_WriteData(P2CONST(Dcm_Data4ByteType, AUTOMATIC, RTE_CUSTDIAG_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) ErrorCode); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_EED0_SupplierFactoryMode_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_EED0_SupplierFactoryMode_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_EED0_SupplierFactoryMode_WriteData(P2CONST(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) ErrorCode); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_EED0_SupplierFactoryMode_WriteData(P2CONST(Dcm_Data1ByteType, AUTOMATIC, RTE_CUSTDIAG_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) ErrorCode); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_EED1_SupplierInternalFaultCode_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_EED1_SupplierInternalFaultCode_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data7ByteType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_EED2_SupplierInternalErrorMemory_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_EED2_SupplierInternalErrorMemory_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data4ByteType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_F10A_ECU_Cal_Config_Part_Number_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_F10A_ECU_Cal_Config_Part_Number_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data24ByteType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_F110_Subsystem_Specific_Diagnostic_Specification_Part_Number_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_F110_Subsystem_Specific_Diagnostic_Specification_Part_Number_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data24ByteType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_F110_Subsystem_Specific_Diagnostic_Specification_Part_Number_WriteData(P2CONST(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) ErrorCode); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_F110_Subsystem_Specific_Diagnostic_Specification_Part_Number_WriteData(P2CONST(Dcm_Data24ByteType, AUTOMATIC, RTE_CUSTDIAG_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) ErrorCode); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_F111_ECU_Core_Assembly_Number_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_F111_ECU_Core_Assembly_Number_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data24ByteType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_F111_ECU_Core_Assembly_Number_WriteData(P2CONST(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) ErrorCode); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_F111_ECU_Core_Assembly_Number_WriteData(P2CONST(Dcm_Data24ByteType, AUTOMATIC, RTE_CUSTDIAG_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) ErrorCode); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_F113_ECU_Delivery_Assembly_Number_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_F113_ECU_Delivery_Assembly_Number_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data24ByteType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_F113_ECU_Delivery_Assembly_Number_WriteData(P2CONST(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) ErrorCode); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_F113_ECU_Delivery_Assembly_Number_WriteData(P2CONST(Dcm_Data24ByteType, AUTOMATIC, RTE_CUSTDIAG_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) ErrorCode); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_F124_ECU_Calibration_Data_1_Number_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_F124_ECU_Calibration_Data_1_Number_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data24ByteType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_F15F_NOS_Generation_Tool_Version_Number_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_F15F_NOS_Generation_Tool_Version_Number_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data10ByteType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_F162_Software_Download_Specification_Version_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_F162_Software_Download_Specification_Version_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_F162_Software_Download_Specification_Version_WriteData(P2CONST(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) ErrorCode); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_F162_Software_Download_Specification_Version_WriteData(P2CONST(Dcm_Data1ByteType, AUTOMATIC, RTE_CUSTDIAG_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) ErrorCode); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_F163_Diagnostic_Specification_Version_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_F163_Diagnostic_Specification_Version_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_F163_Diagnostic_Specification_Version_WriteData(P2CONST(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) ErrorCode); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_F163_Diagnostic_Specification_Version_WriteData(P2CONST(Dcm_Data1ByteType, AUTOMATIC, RTE_CUSTDIAG_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) ErrorCode); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_F166_NOS_Message_Database_1_Version_Number_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_F166_NOS_Message_Database_1_Version_Number_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data4ByteType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_F166_NOS_Message_Database_1_Version_Number_WriteData(P2CONST(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) ErrorCode); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_F166_NOS_Message_Database_1_Version_Number_WriteData(P2CONST(Dcm_Data4ByteType, AUTOMATIC, RTE_CUSTDIAG_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) ErrorCode); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_F17C_NOS_Bootloader_Generation_Tool_Version_Number_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_F17C_NOS_Bootloader_Generation_Tool_Version_Number_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data11ByteType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_F180_Boot_Software_Identification_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_F180_Boot_Software_Identification_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data25ByteType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_F188_Vehicle_Manufacturer_ECU_Software_Number_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_F188_Vehicle_Manufacturer_ECU_Software_Number_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data24ByteType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_F18A_System_Supplier_Identifier_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_F18A_System_Supplier_Identifier_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data24ByteType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_F18A_System_Supplier_Identifier_WriteData(P2CONST(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) ErrorCode); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_F18A_System_Supplier_Identifier_WriteData(P2CONST(Dcm_Data24ByteType, AUTOMATIC, RTE_CUSTDIAG_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) ErrorCode); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_F18C_ECU_Serial_Number_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_F18C_ECU_Serial_Number_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data16ByteType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_F18C_ECU_Serial_Number_WriteData(P2CONST(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) ErrorCode); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_F18C_ECU_Serial_Number_WriteData(P2CONST(Dcm_Data16ByteType, AUTOMATIC, RTE_CUSTDIAG_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) ErrorCode); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_F190_Vehicle_Identification_Number_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_F190_Vehicle_Identification_Number_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data24ByteType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, CustDiag_CODE) RoutineServices_RTN_0202_On_Demand_Self_Test_RequestResults(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Out_ResData, P2VAR(uint16, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) DataLength, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) ErrorCode); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, CustDiag_CODE) RoutineServices_RTN_0202_On_Demand_Self_Test_RequestResults(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data159ByteType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Out_ResData, P2VAR(uint16, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) DataLength, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) ErrorCode); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
FUNC(Std_ReturnType, CustDiag_CODE) RoutineServices_RTN_0202_On_Demand_Self_Test_Start(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Out_ResData, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) ErrorCode); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, CustDiag_CODE) RoutineServices_RTN_0202_On_Demand_Self_Test_Stop(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Out_ResData, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) ErrorCode); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, CustDiag_CODE) RoutineServices_RTN_200E_Calibrate_Steering_Angle_Centre_Position_Start(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Out_ResData, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) ErrorCode); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, CustDiag_CODE) RoutineServices_RTN_200F_Clear_Steering_Angle_Centre_Position_Calibration_Start(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Out_ResData, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) ErrorCode); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, CustDiag_CODE) RoutineServices_RTN_DC00_Reset_Assist_Fault_Counters_Start(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Out_ResData, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) ErrorCode); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, CustDiag_CODE) ServiceRequestNotification_Confirmation(uint8 SID, uint8 ReqType, uint16 SourceAddress, Dcm_ConfirmationStatusType ConfirmationStatus); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, CustDiag_CODE) ServiceRequestNotification_Indication(uint8 SID, P2CONST(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_DATA) RequestData, uint16 DataSize, uint8 ReqType, uint16 SourceAddress, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) ErrorCode); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, CustDiag_CODE) ServiceRequestNotification_Indication(uint8 SID, P2CONST(Dcm_Data1028ByteType, AUTOMATIC, RTE_CUSTDIAG_APPL_DATA) RequestData, uint16 DataSize, uint8 ReqType, uint16 SourceAddress, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) ErrorCode); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif

# define CustDiag_STOP_SEC_CODE
# include "CustDiag_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Application errors
 *********************************************************************************************************************/

#  define RTE_E_DataServices_DID_205A_Torque_Steer_Compensation_Activation_Counter_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_205A_Torque_Steer_Compensation_Activation_Counter_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_205B_Brake_Pull_Reduction_Activation_Counter_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_205B_Brake_Pull_Reduction_Activation_Counter_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_3003_Gear_Hardware_Part_Number_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_3003_Gear_Hardware_Part_Number_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_301A_Pull_Drift_Compensation_Value_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_301A_Pull_Drift_Compensation_Value_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_301F_Steering_Pinion_Rotation_Speed_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_301F_Steering_Pinion_Rotation_Speed_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_3020_Steering_Pinion_Angle_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_3020_Steering_Pinion_Angle_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_330C_Steering_Shaft_Torque_Sensor_2_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_330C_Steering_Shaft_Torque_Sensor_2_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_3B4B_Steering_wheel_angle_alignment_offset_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_3B4B_Steering_wheel_angle_alignment_offset_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_630F_Multiple_VIN_Storage_Original_VIN_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_630F_Multiple_VIN_Storage_Original_VIN_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_D100_Active_Diagnostic_Session_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_D100_Active_Diagnostic_Session_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_D111_ECU_Power_Supply_Voltage_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_D111_ECU_Power_Supply_Voltage_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_D117_ECU_Internal_Temperature_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_D117_ECU_Internal_Temperature_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_D118_Motor_Current_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_D118_Motor_Current_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_DD00_Global_Real_Time_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_DD00_Global_Real_Time_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_DD01_Total_Distance_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_DD01_Total_Distance_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_DD09_Vehicle_Speed_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_DD09_Vehicle_Speed_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_DE00_VehicleData_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_DE00_VehicleData_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_DE01_FIHSwFeatureConfig_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_DE01_FIHSwFeatureConfig_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_DE02_FeatureConfig_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_DE02_FeatureConfig_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_DE03_Enable_DisableDTCs_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_DE03_Enable_DisableDTCs_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_DE04_PDCResetValue_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_DE04_PDCResetValue_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_DE05_Unused_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_DE05_Unused_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_EE00_DevMessConfig_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_EE00_DevMessConfig_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_EE01_XCP_Enable_Disable_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_EE01_XCP_Enable_Disable_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_EE02_Assist_On_Off_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_EE02_Assist_On_Off_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_EE03_IgnCycleCounter_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_EE03_IgnCycleCounter_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_EE04_IgnOnTime_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_EE04_IgnOnTime_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_EE05_FinalMotTq_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_EE05_FinalMotTq_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_EE06_VINChanged_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_EE06_VINChanged_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_EE07_EPSSystemState_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_EE07_EPSSystemState_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_EE20_LoAFaultReporting_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_EE20_LoAFaultReporting_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_EE21_CurrentLvlCounter_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_EE21_CurrentLvlCounter_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_EE22_VoltageLvlCounters_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_EE22_VoltageLvlCounters_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_EE23_TempLvlCounters_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_EE23_TempLvlCounters_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_EE40_ResearchMessConfig_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_EE40_ResearchMessConfig_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_EE41_ResearchFeatureSwitch_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_EE41_ResearchFeatureSwitch_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_EE42_ActiveFeatures_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_EE42_ActiveFeatures_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_EE43_SDMSteeringMode_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_EE43_SDMSteeringMode_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_EE80_FIHSwVer_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_EE80_FIHSwVer_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_EE81_FIHSwReserved0_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_EE81_FIHSwReserved0_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_EE82_FIHSwReserved1_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_EE82_FIHSwReserved1_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_EE83_FIHSwReserved2_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_EE83_FIHSwReserved2_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_EE84_FIHSwReserved3_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_EE84_FIHSwReserved3_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_EE85_FIHSwReserved4_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_EE85_FIHSwReserved4_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_EE86_FIHSwReserved5_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_EE86_FIHSwReserved5_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_EE87_FIHSwReserved6_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_EE87_FIHSwReserved6_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_EE88_FIHSwReserved7_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_EE88_FIHSwReserved7_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_EED0_SupplierFactoryMode_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_EED0_SupplierFactoryMode_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_EED1_SupplierInternalFaultCode_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_EED1_SupplierInternalFaultCode_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_EED2_SupplierInternalErrorMemory_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_EED2_SupplierInternalErrorMemory_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_F10A_ECU_Cal_Config_Part_Number_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_F10A_ECU_Cal_Config_Part_Number_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_F110_Subsystem_Specific_Diagnostic_Specification_Part_Number_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_F110_Subsystem_Specific_Diagnostic_Specification_Part_Number_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_F111_ECU_Core_Assembly_Number_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_F111_ECU_Core_Assembly_Number_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_F113_ECU_Delivery_Assembly_Number_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_F113_ECU_Delivery_Assembly_Number_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_F124_ECU_Calibration_Data_1_Number_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_F124_ECU_Calibration_Data_1_Number_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_F15F_NOS_Generation_Tool_Version_Number_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_F15F_NOS_Generation_Tool_Version_Number_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_F162_Software_Download_Specification_Version_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_F162_Software_Download_Specification_Version_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_F163_Diagnostic_Specification_Version_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_F163_Diagnostic_Specification_Version_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_F166_NOS_Message_Database_1_Version_Number_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_F166_NOS_Message_Database_1_Version_Number_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_F17C_NOS_Bootloader_Generation_Tool_Version_Number_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_F17C_NOS_Bootloader_Generation_Tool_Version_Number_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_F180_Boot_Software_Identification_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_F180_Boot_Software_Identification_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_F188_Vehicle_Manufacturer_ECU_Software_Number_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_F188_Vehicle_Manufacturer_ECU_Software_Number_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_F18A_System_Supplier_Identifier_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_F18A_System_Supplier_Identifier_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_F18C_ECU_Serial_Number_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_F18C_ECU_Serial_Number_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_F190_Vehicle_Identification_Number_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_F190_Vehicle_Identification_Number_E_NOT_OK (1U)

#  define RTE_E_GetSigImcData_logl_PortIf1_E_NOT_OK (1U)

#  define RTE_E_GetSigImcData_u08_PortIf1_E_NOT_OK (1U)

#  define RTE_E_NvMService_AC3_SRBS_Defs_E_NOT_OK (1U)

#  define RTE_E_RoutineServices_RTN_0202_On_Demand_Self_Test_DCM_E_FORCE_RCRRP (12U)

#  define RTE_E_RoutineServices_RTN_0202_On_Demand_Self_Test_DCM_E_PENDING (10U)

#  define RTE_E_RoutineServices_RTN_0202_On_Demand_Self_Test_E_NOT_OK (1U)

#  define RTE_E_RoutineServices_RTN_200E_Calibrate_Steering_Angle_Centre_Position_DCM_E_FORCE_RCRRP (12U)

#  define RTE_E_RoutineServices_RTN_200E_Calibrate_Steering_Angle_Centre_Position_DCM_E_PENDING (10U)

#  define RTE_E_RoutineServices_RTN_200E_Calibrate_Steering_Angle_Centre_Position_E_NOT_OK (1U)

#  define RTE_E_RoutineServices_RTN_200F_Clear_Steering_Angle_Centre_Position_Calibration_DCM_E_FORCE_RCRRP (12U)

#  define RTE_E_RoutineServices_RTN_200F_Clear_Steering_Angle_Centre_Position_Calibration_DCM_E_PENDING (10U)

#  define RTE_E_RoutineServices_RTN_200F_Clear_Steering_Angle_Centre_Position_Calibration_E_NOT_OK (1U)

#  define RTE_E_RoutineServices_RTN_DC00_Reset_Assist_Fault_Counters_DCM_E_FORCE_RCRRP (12U)

#  define RTE_E_RoutineServices_RTN_DC00_Reset_Assist_Fault_Counters_DCM_E_PENDING (10U)

#  define RTE_E_RoutineServices_RTN_DC00_Reset_Assist_Fault_Counters_E_NOT_OK (1U)

#  define RTE_E_ServiceRequestNotification_E_NOT_OK (1U)

#  define RTE_E_ServiceRequestNotification_E_REQUEST_NOT_ACCEPTED (8U)

#  define RTE_E_SetNtcSts_PortIf1_E_NOT_OK (1U)
# endif /* !defined(RTE_CORE) */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_CUSTDIAG_H */

/**********************************************************************************************************************
 MISRA 2004 violations and justifications
 *********************************************************************************************************************/

/* module specific MISRA deviations:
   MD_Rte_3451:  MISRA rule: 8.8
     Reason:     Schedulable entities are declared by the RTE and also by the BSW modules.
     Risk:       No functional risk.
     Prevention: Not required.

*/
