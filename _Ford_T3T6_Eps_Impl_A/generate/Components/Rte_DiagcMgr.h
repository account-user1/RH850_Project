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
 *          File:  Rte_DiagcMgr.h
 *        Config:  EPS.dpa
 *   ECU-Project:  PSCM_FD
 *
 *     Generator:  MICROSAR RTE Generator Version 4.13.0
 *                 RTE Core Version 1.13.0
 *       License:  Unlimited license CBD1601056 for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <DiagcMgr>
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_DIAGCMGR_H
# define _RTE_DIAGCMGR_H

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

# include "Rte_DiagcMgr_Type.h"
# include "Rte_DataHandleType.h"

# include "Rte_Hook.h"

# ifndef RTE_CORE

/**********************************************************************************************************************
 * extern declaration of RTE buffers for optimized macro implementation
 *********************************************************************************************************************/
#  define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(uint8, RTE_VAR_INIT) Rte_DiagcMgr_ClrDiagcFlgProxy_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_DiagcMgr_DiagcStsCtrldShtDwnFltPrsnt_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_DiagcMgr_DiagcStsNonRcvrlReqDiFltPrsnt_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_DiagcMgr_SysDiMotTqCmdSca_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_DiagcMgr_SysDiRampRate_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_DiagcMgr_SysStFltOutpReqDi_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_BattVltg_BrdgVltg_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_EcuTMeas_EcuTFild_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_ImcSigArbn_HwTqImcCorrd_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_INIT) Rte_CmnMfgSrv_IgnCntr_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CmnMfgSrv_MfgDiagcInhb_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(MfgEnaSt1, RTE_VAR_INIT) Rte_CmnMfgSrv_MfgEnaSt_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_MotTqCmdSca_MotTqCmdMrfScad_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_INIT) Rte_CDD_FlsMem_SwApplCrc_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(SysSt1, RTE_VAR_INIT) Rte_SysStMod_SysSt_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#  define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# endif /* !defined(RTE_CORE) */


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

#  define Rte_InitValue_BrdgVltg_Val (6.0F)
#  define Rte_InitValue_ClrDiagcFlgProxy_Val (0U)
#  define Rte_InitValue_DiagcStsCtrldShtDwnFltPrsnt_Logl (FALSE)
#  define Rte_InitValue_DiagcStsNonRcvrlReqDiFltPrsnt_Logl (FALSE)
#  define Rte_InitValue_EcuTFild_Val (25.0F)
#  define Rte_InitValue_HwTq_Val (0.0F)
#  define Rte_InitValue_IgnCntr_Val (0U)
#  define Rte_InitValue_MfgDiagcInhb_Logl (FALSE)
#  define Rte_InitValue_MfgEnaSt_Val (0U)
#  define Rte_InitValue_MotTqCmdMrfScad_Val (0.0F)
#  define Rte_InitValue_SwApplCrc_Val (0U)
#  define Rte_InitValue_SysDiMotTqCmdSca_Val (1.0F)
#  define Rte_InitValue_SysDiRampRate_Val (0.1F)
#  define Rte_InitValue_SysSt_Val (3U)
#  define Rte_InitValue_SysStFltOutpReqDi_Logl (FALSE)
# endif


# define RTE_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/


# define RTE_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# ifndef RTE_CORE

/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Read_BrdgVltg_Val Rte_Read_DiagcMgr_BrdgVltg_Val
#  define Rte_Read_DiagcMgr_BrdgVltg_Val(data) (*(data) = Rte_BattVltg_BrdgVltg_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_EcuTFild_Val Rte_Read_DiagcMgr_EcuTFild_Val
#  define Rte_Read_DiagcMgr_EcuTFild_Val(data) (*(data) = Rte_EcuTMeas_EcuTFild_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_HwTq_Val Rte_Read_DiagcMgr_HwTq_Val
#  define Rte_Read_DiagcMgr_HwTq_Val(data) (*(data) = Rte_ImcSigArbn_HwTqImcCorrd_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_IgnCntr_Val Rte_Read_DiagcMgr_IgnCntr_Val
#  define Rte_Read_DiagcMgr_IgnCntr_Val(data) (*(data) = Rte_CmnMfgSrv_IgnCntr_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_MfgDiagcInhb_Logl Rte_Read_DiagcMgr_MfgDiagcInhb_Logl
#  define Rte_Read_DiagcMgr_MfgDiagcInhb_Logl(data) (*(data) = Rte_CmnMfgSrv_MfgDiagcInhb_Logl, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_MfgEnaSt_Val Rte_Read_DiagcMgr_MfgEnaSt_Val
#  define Rte_Read_DiagcMgr_MfgEnaSt_Val(data) (*(data) = Rte_CmnMfgSrv_MfgEnaSt_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_MotTqCmdMrfScad_Val Rte_Read_DiagcMgr_MotTqCmdMrfScad_Val
#  define Rte_Read_DiagcMgr_MotTqCmdMrfScad_Val(data) (*(data) = Rte_MotTqCmdSca_MotTqCmdMrfScad_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_SwApplCrc_Val Rte_Read_DiagcMgr_SwApplCrc_Val
#  define Rte_Read_DiagcMgr_SwApplCrc_Val(data) (*(data) = Rte_CDD_FlsMem_SwApplCrc_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_SysSt_Val Rte_Read_DiagcMgr_SysSt_Val
#  define Rte_Read_DiagcMgr_SysSt_Val(data) (*(data) = Rte_SysStMod_SysSt_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Write_ClrDiagcFlgProxy_Val Rte_Write_DiagcMgr_ClrDiagcFlgProxy_Val
#  define Rte_Write_DiagcMgr_ClrDiagcFlgProxy_Val(data) (Rte_DiagcMgr_ClrDiagcFlgProxy_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_DiagcStsCtrldShtDwnFltPrsnt_Logl Rte_Write_DiagcMgr_DiagcStsCtrldShtDwnFltPrsnt_Logl
#  define Rte_Write_DiagcMgr_DiagcStsCtrldShtDwnFltPrsnt_Logl(data) (Rte_DiagcMgr_DiagcStsCtrldShtDwnFltPrsnt_Logl = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_DiagcStsNonRcvrlReqDiFltPrsnt_Logl Rte_Write_DiagcMgr_DiagcStsNonRcvrlReqDiFltPrsnt_Logl
#  define Rte_Write_DiagcMgr_DiagcStsNonRcvrlReqDiFltPrsnt_Logl(data) (Rte_DiagcMgr_DiagcStsNonRcvrlReqDiFltPrsnt_Logl = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_SysDiMotTqCmdSca_Val Rte_Write_DiagcMgr_SysDiMotTqCmdSca_Val
#  define Rte_Write_DiagcMgr_SysDiMotTqCmdSca_Val(data) (Rte_DiagcMgr_SysDiMotTqCmdSca_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_SysDiRampRate_Val Rte_Write_DiagcMgr_SysDiRampRate_Val
#  define Rte_Write_DiagcMgr_SysDiRampRate_Val(data) (Rte_DiagcMgr_SysDiRampRate_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_SysStFltOutpReqDi_Logl Rte_Write_DiagcMgr_SysStFltOutpReqDi_Logl
#  define Rte_Write_DiagcMgr_SysStFltOutpReqDi_Logl(data) (Rte_DiagcMgr_SysStFltOutpReqDi_Logl = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */


/**********************************************************************************************************************
 * Rte_Call_<p>_<o> (unmapped) for synchronous C/S communication
 *********************************************************************************************************************/
#  define RTE_START_SEC_NVMPROXY_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(Std_ReturnType, RTE_NVMPROXY_APPL_CODE) NvMProxy_SetRamBlockStatus(NvM_BlockIdType parg0, boolean RamBlockStatus_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_NVMPROXY_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_DiagcMgrApplCrc_SetRamBlockStatus(arg1) (NvMProxy_SetRamBlockStatus((NvM_BlockIdType)93, arg1)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Call_DiagcMgrLtchCntrAry_SetRamBlockStatus(arg1) (NvMProxy_SetRamBlockStatus((NvM_BlockIdType)94, arg1)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define RTE_START_SEC_DIAGCMGRSTUB_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(void, RTE_DIAGCMGRSTUB_APPL_CODE) GetDiagcDataStub_Oper(P2VAR(DiagcDataRec2, AUTOMATIC, RTE_DIAGCMGRSTUB_APPL_VAR) DiagcData_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_DIAGCMGRSTUB_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_GetDiagcDataAppl0_Oper(arg1) (GetDiagcDataStub_Oper(arg1), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Call_GetDiagcDataAppl1_Oper(arg1) (GetDiagcDataStub_Oper(arg1), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define RTE_START_SEC_DIAGCMGRPROXYAPPL10_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(void, RTE_DIAGCMGRPROXYAPPL10_APPL_CODE) GetDiagcDataAppl10_Oper(P2VAR(DiagcDataRec2, AUTOMATIC, RTE_DIAGCMGRPROXYAPPL10_APPL_VAR) DiagcData_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_DIAGCMGRPROXYAPPL10_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_GetDiagcDataAppl10_Oper(arg1) (GetDiagcDataAppl10_Oper(arg1), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Call_GetDiagcDataAppl2_Oper(arg1) (GetDiagcDataStub_Oper(arg1), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Call_GetDiagcDataAppl3_Oper(arg1) (GetDiagcDataStub_Oper(arg1), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Call_GetDiagcDataAppl4_Oper(arg1) (GetDiagcDataStub_Oper(arg1), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Call_GetDiagcDataAppl5_Oper(arg1) (GetDiagcDataStub_Oper(arg1), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Call_GetDiagcDataAppl6_Oper(arg1) (GetDiagcDataStub_Oper(arg1), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Call_GetDiagcDataAppl7_Oper(arg1) (GetDiagcDataStub_Oper(arg1), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Call_GetDiagcDataAppl8_Oper(arg1) (GetDiagcDataStub_Oper(arg1), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Call_GetDiagcDataAppl9_Oper(arg1) (GetDiagcDataStub_Oper(arg1), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define RTE_START_SEC_CDD_EXCPNHNDLG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(void, RTE_CDD_EXCPNHNDLG_APPL_CODE) GetMcuDiagcSpplData_Oper(P2VAR(uint32, AUTOMATIC, RTE_CDD_EXCPNHNDLG_APPL_VAR) McuDiagcData1_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_CDD_EXCPNHNDLG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_GetMcuDiagcSpplData_Oper(arg1) (GetMcuDiagcSpplData_Oper(arg1), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define RTE_START_SEC_DIAGCMGRSTUB_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(void, RTE_DIAGCMGRSTUB_APPL_CODE) GetNtcDebCntrStub_Oper(uint8 DebCntrIdx_Arg, P2VAR(sint16, AUTOMATIC, RTE_DIAGCMGRSTUB_APPL_VAR) DebCntr_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_DIAGCMGRSTUB_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_GetNtcDebCntrAppl0_Oper(arg1, arg2) (GetNtcDebCntrStub_Oper(arg1, arg2), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Call_GetNtcDebCntrAppl1_Oper(arg1, arg2) (GetNtcDebCntrStub_Oper(arg1, arg2), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define RTE_START_SEC_DIAGCMGRPROXYAPPL10_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(void, RTE_DIAGCMGRPROXYAPPL10_APPL_CODE) GetNtcDebCntrAppl10_Oper(uint8 DebCntrIdx_Arg, P2VAR(sint16, AUTOMATIC, RTE_DIAGCMGRPROXYAPPL10_APPL_VAR) DebCntr_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_DIAGCMGRPROXYAPPL10_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_GetNtcDebCntrAppl10_Oper(arg1, arg2) (GetNtcDebCntrAppl10_Oper(arg1, arg2), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Call_GetNtcDebCntrAppl2_Oper(arg1, arg2) (GetNtcDebCntrStub_Oper(arg1, arg2), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Call_GetNtcDebCntrAppl3_Oper(arg1, arg2) (GetNtcDebCntrStub_Oper(arg1, arg2), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Call_GetNtcDebCntrAppl4_Oper(arg1, arg2) (GetNtcDebCntrStub_Oper(arg1, arg2), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Call_GetNtcDebCntrAppl5_Oper(arg1, arg2) (GetNtcDebCntrStub_Oper(arg1, arg2), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Call_GetNtcDebCntrAppl6_Oper(arg1, arg2) (GetNtcDebCntrStub_Oper(arg1, arg2), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Call_GetNtcDebCntrAppl7_Oper(arg1, arg2) (GetNtcDebCntrStub_Oper(arg1, arg2), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Call_GetNtcDebCntrAppl8_Oper(arg1, arg2) (GetNtcDebCntrStub_Oper(arg1, arg2), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Call_GetNtcDebCntrAppl9_Oper(arg1, arg2) (GetNtcDebCntrStub_Oper(arg1, arg2), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define RTE_START_SEC_DIAGCMGRSTUB_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(void, RTE_DIAGCMGRSTUB_APPL_CODE) GetNtcInfoStub_Oper(uint8 NtcInfoIdx_Arg, P2VAR(NtcInfoRec4, AUTOMATIC, RTE_DIAGCMGRSTUB_APPL_VAR) NtcInfo_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_DIAGCMGRSTUB_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_GetNtcInfoAppl0_Oper(arg1, arg2) (GetNtcInfoStub_Oper(arg1, arg2), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Call_GetNtcInfoAppl1_Oper(arg1, arg2) (GetNtcInfoStub_Oper(arg1, arg2), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define RTE_START_SEC_DIAGCMGRPROXYAPPL10_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(void, RTE_DIAGCMGRPROXYAPPL10_APPL_CODE) GetNtcInfoAppl10_Oper(uint8 NtcInfoIdx_Arg, P2VAR(NtcInfoRec4, AUTOMATIC, RTE_DIAGCMGRPROXYAPPL10_APPL_VAR) NtcInfo_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_DIAGCMGRPROXYAPPL10_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_GetNtcInfoAppl10_Oper(arg1, arg2) (GetNtcInfoAppl10_Oper(arg1, arg2), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Call_GetNtcInfoAppl2_Oper(arg1, arg2) (GetNtcInfoStub_Oper(arg1, arg2), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Call_GetNtcInfoAppl3_Oper(arg1, arg2) (GetNtcInfoStub_Oper(arg1, arg2), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Call_GetNtcInfoAppl4_Oper(arg1, arg2) (GetNtcInfoStub_Oper(arg1, arg2), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Call_GetNtcInfoAppl5_Oper(arg1, arg2) (GetNtcInfoStub_Oper(arg1, arg2), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Call_GetNtcInfoAppl6_Oper(arg1, arg2) (GetNtcInfoStub_Oper(arg1, arg2), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Call_GetNtcInfoAppl7_Oper(arg1, arg2) (GetNtcInfoStub_Oper(arg1, arg2), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Call_GetNtcInfoAppl8_Oper(arg1, arg2) (GetNtcInfoStub_Oper(arg1, arg2), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Call_GetNtcInfoAppl9_Oper(arg1, arg2) (GetNtcInfoStub_Oper(arg1, arg2), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define RTE_START_SEC_DIAGCMGRPROXYAPPL10_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(Std_ReturnType, RTE_DIAGCMGRPROXYAPPL10_APPL_CODE) SetNtcSts10_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_DIAGCMGRPROXYAPPL10_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_SetNtcSts_Oper SetNtcSts10_Oper
#  define Rte_Call_SnpshtDataAry_SetRamBlockStatus(arg1) (NvMProxy_SetRamBlockStatus((NvM_BlockIdType)92, arg1)) /* PRQA S 3453 */ /* MD_MSR_19.7 */


/**********************************************************************************************************************
 * Exclusive Areas
 *********************************************************************************************************************/

#  define Rte_Enter_DiagcMgrExclusiveArea() SuspendOSInterrupts()  /* RteAnalyzer(ExclusiveArea, OS_INTERRUPT_BLOCKING) */

#  define Rte_Exit_DiagcMgrExclusiveArea() ResumeOSInterrupts()  /* RteAnalyzer(ExclusiveArea, OS_INTERRUPT_BLOCKING) */


/**********************************************************************************************************************
 * Rte_CData (SW-C local calibration parameters)
 *********************************************************************************************************************/

#  define Rte_CData_DiagcMgrApplCrcDft() (((P2CONST(Rte_Calprm_DiagcMgr_DEFAULT_RTE_CDATA_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_DiagcMgr_DEFAULT_RTE_CDATA_GROUP])->DiagcMgrApplCrcDft) /* PRQA S 3453 */ /* MD_MSR_19.7 */

/**********************************************************************************************************************
 * Rte_Prm (Calibration component calibration parameters)
 *********************************************************************************************************************/

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Prm_DiagcMgrFltResp_Ary1D() (&(((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->DiagcMgrFltResp_Ary1D[0])) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  else
#   define Rte_Prm_DiagcMgrFltResp_Ary1D() (&((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->DiagcMgrFltResp_Ary1D) /* PRQA S 3453 */ /* MD_MSR_19.7 */
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

extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_DiagcMgr_DiagcMgrApplCrc; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_DiagcMgr_DtcEnaSts; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_DiagcMgr_ClrDiagcFlg; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_DiagcMgr_PrevClrDtcFlg; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary1D_u08_20, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_DiagcMgr_DiagcMgrLtchCntrAry; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary1D_NtcFltInfoRec2_20, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_DiagcMgr_DiagcMgrNtcFltAry; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary1D_u08_DiagcMgr1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_DiagcMgr_DtcIdxPrevSts; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#   define RTE_STOP_SEC_VAR_DEFAULT_RTE_Appl10_PIM_GROUP_UNSPECIFIED
#   include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  endif

#  define Rte_Pim_DiagcMgrApplCrc() \
  (&Rte_DiagcMgr_DiagcMgrApplCrc) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_DtcEnaSts() \
  (&Rte_DiagcMgr_DtcEnaSts) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_ClrDiagcFlg() \
  (&Rte_DiagcMgr_ClrDiagcFlg) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_PrevClrDtcFlg() \
  (&Rte_DiagcMgr_PrevClrDtcFlg) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Pim_DiagcMgrLtchCntrAry() (&((*RtePim_DiagcMgrLtchCntrAry())[0]))
#  else
#   define Rte_Pim_DiagcMgrLtchCntrAry() RtePim_DiagcMgrLtchCntrAry()
#  endif
#  define RtePim_DiagcMgrLtchCntrAry() \
  (&Rte_DiagcMgr_DiagcMgrLtchCntrAry) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Pim_DiagcMgrNtcFltAry() (&((*RtePim_DiagcMgrNtcFltAry())[0]))
#  else
#   define Rte_Pim_DiagcMgrNtcFltAry() RtePim_DiagcMgrNtcFltAry()
#  endif
#  define RtePim_DiagcMgrNtcFltAry() \
  (&Rte_DiagcMgr_DiagcMgrNtcFltAry) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Pim_DtcIdxPrevSts() (&((*RtePim_DtcIdxPrevSts())[0]))
#  else
#   define Rte_Pim_DtcIdxPrevSts() RtePim_DtcIdxPrevSts()
#  endif
#  define RtePim_DtcIdxPrevSts() \
  (&Rte_DiagcMgr_DtcIdxPrevSts) /* PRQA S 3453 */ /* MD_MSR_19.7 */


# endif /* !defined(RTE_CORE) */


# define DiagcMgr_START_SEC_CODE
# include "DiagcMgr_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * Runnable entities
 *********************************************************************************************************************/

# ifndef RTE_CORE
#  define RTE_RUNNABLE_ClrAllDiagc_Oper ClrAllDiagc_Oper
#  define RTE_RUNNABLE_ClrLtchCntrData_Oper ClrLtchCntrData_Oper
#  define RTE_RUNNABLE_ClrSnpshtData_Oper ClrSnpshtData_Oper
#  define RTE_RUNNABLE_CnvSnpshtData_f32_Oper CnvSnpshtData_f32_Oper
#  define RTE_RUNNABLE_CnvSnpshtData_logl_Oper CnvSnpshtData_logl_Oper
#  define RTE_RUNNABLE_CnvSnpshtData_s08_Oper CnvSnpshtData_s08_Oper
#  define RTE_RUNNABLE_CnvSnpshtData_s16_Oper CnvSnpshtData_s16_Oper
#  define RTE_RUNNABLE_CnvSnpshtData_s32_Oper CnvSnpshtData_s32_Oper
#  define RTE_RUNNABLE_CnvSnpshtData_u08_Oper CnvSnpshtData_u08_Oper
#  define RTE_RUNNABLE_CnvSnpshtData_u16_Oper CnvSnpshtData_u16_Oper
#  define RTE_RUNNABLE_DiagcMgrIninCore_Oper DiagcMgrIninCore_Oper
#  define RTE_RUNNABLE_DiagcMgrInit1 DiagcMgrInit1
#  define RTE_RUNNABLE_DiagcMgrPer1 DiagcMgrPer1
#  define RTE_RUNNABLE_DiagcMgrPer2 DiagcMgrPer2
#  define RTE_RUNNABLE_GetNtcActvCore_Oper GetNtcActvCore_Oper
#  define RTE_RUNNABLE_GetNtcQlfrStsCore_Oper GetNtcQlfrStsCore_Oper
#  define RTE_RUNNABLE_GetNtcStsCore_Oper GetNtcStsCore_Oper
#  define RTE_RUNNABLE_ReadLtchCntrData_Oper ReadLtchCntrData_Oper
#  define RTE_RUNNABLE_ReadNtcFltAry_Oper ReadNtcFltAry_Oper
#  define RTE_RUNNABLE_ReadNtcInfoAndDebCntr_Oper ReadNtcInfoAndDebCntr_Oper
#  define RTE_RUNNABLE_ReadSnpshtData_Oper ReadSnpshtData_Oper
#  define RTE_RUNNABLE_SetNtcStsCore_Oper SetNtcStsCore_Oper
# endif

FUNC(void, DiagcMgr_CODE) ClrAllDiagc_Oper(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, DiagcMgr_CODE) ClrLtchCntrData_Oper(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, DiagcMgr_CODE) ClrSnpshtData_Oper(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, DiagcMgr_CODE) CnvSnpshtData_f32_Oper(P2VAR(uint32, AUTOMATIC, RTE_DIAGCMGR_APPL_VAR) SnpshtDataCnvd_Arg, float32 SnpshtData_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, DiagcMgr_CODE) CnvSnpshtData_logl_Oper(P2VAR(uint32, AUTOMATIC, RTE_DIAGCMGR_APPL_VAR) SnpshtDataCnvd_Arg, boolean SnpshtData_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, DiagcMgr_CODE) CnvSnpshtData_s08_Oper(P2VAR(uint32, AUTOMATIC, RTE_DIAGCMGR_APPL_VAR) SnpshtDataCnvd_Arg, sint8 SnpshtData_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, DiagcMgr_CODE) CnvSnpshtData_s16_Oper(P2VAR(uint32, AUTOMATIC, RTE_DIAGCMGR_APPL_VAR) SnpshtDataCnvd_Arg, sint16 SnpshtData_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, DiagcMgr_CODE) CnvSnpshtData_s32_Oper(P2VAR(uint32, AUTOMATIC, RTE_DIAGCMGR_APPL_VAR) SnpshtDataCnvd_Arg, sint32 SnpshtData_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, DiagcMgr_CODE) CnvSnpshtData_u08_Oper(P2VAR(uint32, AUTOMATIC, RTE_DIAGCMGR_APPL_VAR) SnpshtDataCnvd_Arg, uint8 SnpshtData_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, DiagcMgr_CODE) CnvSnpshtData_u16_Oper(P2VAR(uint32, AUTOMATIC, RTE_DIAGCMGR_APPL_VAR) SnpshtDataCnvd_Arg, uint16 SnpshtData_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(void, DiagcMgr_CODE) DiagcMgrIninCore_Oper(uint8 ApplIdx_Arg, uint8 NtcInfoArySize_Arg, P2VAR(NtcInfoRec4, AUTOMATIC, RTE_DIAGCMGR_APPL_VAR) NtcInfoAry_Arg, P2VAR(DiagcDataRec2, AUTOMATIC, RTE_DIAGCMGR_APPL_VAR) DiagcData_Arg, P2VAR(DiagcDataRec2, AUTOMATIC, RTE_DIAGCMGR_APPL_VAR) ProxySetNtcData_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(void, DiagcMgr_CODE) DiagcMgrIninCore_Oper(uint8 ApplIdx_Arg, uint8 NtcInfoArySize_Arg, P2VAR(Ary1D_NtcInfoRec4_DiagcMgr, AUTOMATIC, RTE_DIAGCMGR_APPL_VAR) NtcInfoAry_Arg, P2VAR(DiagcDataRec2, AUTOMATIC, RTE_DIAGCMGR_APPL_VAR) DiagcData_Arg, P2VAR(DiagcDataRec2, AUTOMATIC, RTE_DIAGCMGR_APPL_VAR) ProxySetNtcData_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
FUNC(void, DiagcMgr_CODE) DiagcMgrInit1(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(void, DiagcMgr_CODE) DiagcMgrPer1(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(void, DiagcMgr_CODE) DiagcMgrPer2(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(void, DiagcMgr_CODE) GetNtcActvCore_Oper(NtcNr1 NtcNr_Arg, P2VAR(boolean, AUTOMATIC, RTE_DIAGCMGR_APPL_VAR) NtcActv_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, DiagcMgr_CODE) GetNtcQlfrStsCore_Oper(NtcNr1 NtcNr_Arg, P2VAR(SigQlfr1, AUTOMATIC, RTE_DIAGCMGR_APPL_VAR) NtcQlfr_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, DiagcMgr_CODE) GetNtcStsCore_Oper(NtcNr1 NtcNr_Arg, P2VAR(uint8, AUTOMATIC, RTE_DIAGCMGR_APPL_VAR) NtcInfoSts_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(void, DiagcMgr_CODE) ReadLtchCntrData_Oper(P2VAR(uint8, AUTOMATIC, RTE_DIAGCMGR_APPL_VAR) ReadLtchCntrAry_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(void, DiagcMgr_CODE) ReadLtchCntrData_Oper(P2VAR(Ary1D_u08_20, AUTOMATIC, RTE_DIAGCMGR_APPL_VAR) ReadLtchCntrAry_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(void, DiagcMgr_CODE) ReadNtcFltAry_Oper(P2VAR(ReadFltInfoRec1, AUTOMATIC, RTE_DIAGCMGR_APPL_VAR) DiagcMgrReadFltInfo_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(void, DiagcMgr_CODE) ReadNtcFltAry_Oper(P2VAR(Ary1D_ReadFltInfoRec1_20, AUTOMATIC, RTE_DIAGCMGR_APPL_VAR) DiagcMgrReadFltInfo_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
FUNC(void, DiagcMgr_CODE) ReadNtcInfoAndDebCntr_Oper(NtcNr1 NtcNr_Arg, P2VAR(NtcInfoRec4, AUTOMATIC, RTE_DIAGCMGR_APPL_VAR) NtcInfo_Arg, P2VAR(sint16, AUTOMATIC, RTE_DIAGCMGR_APPL_VAR) DebCntr_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(void, DiagcMgr_CODE) ReadSnpshtData_Oper(P2VAR(SnpshtDataRec2, AUTOMATIC, RTE_DIAGCMGR_APPL_VAR) ReadSnpshtDataAry_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(void, DiagcMgr_CODE) ReadSnpshtData_Oper(P2VAR(Ary1D_SnpshtDataRec2_8, AUTOMATIC, RTE_DIAGCMGR_APPL_VAR) ReadSnpshtDataAry_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
FUNC(Std_ReturnType, DiagcMgr_CODE) SetNtcStsCore_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg, P2VAR(DiagcDataRec2, AUTOMATIC, RTE_DIAGCMGR_APPL_VAR) DiagcData_Arg, P2VAR(DiagcDataRec2, AUTOMATIC, RTE_DIAGCMGR_APPL_VAR) ProxySetNtcData_Arg, P2VAR(NtcInfoRec4, AUTOMATIC, RTE_DIAGCMGR_APPL_VAR) NtcInfo_Arg, P2VAR(sint16, AUTOMATIC, RTE_DIAGCMGR_APPL_VAR) NtcInfoDebCntr_Arg, uint32 SpclSnpshtData0_Arg, uint32 SpclSnpshtData1_Arg, uint32 SpclSnpshtData2_Arg, boolean SpclSnpshtDataPrsnt_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define DiagcMgr_STOP_SEC_CODE
# include "DiagcMgr_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Application errors
 *********************************************************************************************************************/

#  define RTE_E_NvMService_AC3_SRBS_E_NOT_OK (1U)

#  define RTE_E_NvMService_AC3_SRBS_Defs_E_NOT_OK (1U)

#  define RTE_E_SetNtcStsCore_PortIf2_E_NOT_OK (1U)

#  define RTE_E_SetNtcSts_PortIf1_E_NOT_OK (1U)
# endif /* !defined(RTE_CORE) */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_DIAGCMGR_H */

/**********************************************************************************************************************
 MISRA 2004 violations and justifications
 *********************************************************************************************************************/

/* module specific MISRA deviations:
   MD_Rte_3451:  MISRA rule: 8.8
     Reason:     Schedulable entities are declared by the RTE and also by the BSW modules.
     Risk:       No functional risk.
     Prevention: Not required.

*/
