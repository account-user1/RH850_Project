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
 *          File:  Rte_CDD_MotAg5Meas.h
 *        Config:  EPS.dpa
 *   ECU-Project:  PSCM_FD
 *
 *     Generator:  MICROSAR RTE Generator Version 4.13.0
 *                 RTE Core Version 1.13.0
 *       License:  Unlimited license CBD1601056 for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <CDD_MotAg5Meas>
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_CDD_MOTAG5MEAS_H
# define _RTE_CDD_MOTAG5MEAS_H

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

# include "Rte_CDD_MotAg5Meas_Type.h"
# include "Rte_DataHandleType.h"

# ifndef RTE_CORE

/**********************************************************************************************************************
 * extern declaration of RTE buffers for optimized macro implementation
 *********************************************************************************************************************/
#  define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(float32, RTE_VAR_INIT) Rte_CDD_MotAg5Meas_MotAg5CosRtAmpRecpr_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_CDD_MotAg5Meas_MotAg5CosRtOffs_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(SigQlfr1, RTE_VAR_INIT) Rte_CDD_MotAg5Meas_MotAg5MeclQlfr_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CDD_MotAg5Meas_MotAg5MeclRollgCntr_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_CDD_MotAg5Meas_MotAg5SinRtAmpRecpr_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_CDD_MotAg5Meas_MotAg5SinRtOffs_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_CDD_MotCtrlMgr_MotAg5Cos_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CDD_FordT3T6McuCfg_MotAg5CosAdcFaild_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(u0p16, RTE_VAR_INIT) Rte_CDD_MotCtrlMgr_MotAg5RawMecl_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_CDD_MotCtrlMgr_MotAg5Sin_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CDD_FordT3T6McuCfg_MotAg5SinAdcFaild_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_CDD_MotVel_MotVelMrf_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#  define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# endif /* !defined(RTE_CORE) */


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

#  define Rte_InitValue_MotAg5Cos_Val (1.65F)
#  define Rte_InitValue_MotAg5CosAdcFaild_Logl (FALSE)
#  define Rte_InitValue_MotAg5CosRtAmpRecpr_Val (1.0F)
#  define Rte_InitValue_MotAg5CosRtOffs_Val (2.5F)
#  define Rte_InitValue_MotAg5MeclQlfr_Val (0U)
#  define Rte_InitValue_MotAg5MeclRollgCntr_Val (0U)
#  define Rte_InitValue_MotAg5RawMecl_Val (0U)
#  define Rte_InitValue_MotAg5Sin_Val (1.65F)
#  define Rte_InitValue_MotAg5SinAdcFaild_Logl (FALSE)
#  define Rte_InitValue_MotAg5SinRtAmpRecpr_Val (1.0F)
#  define Rte_InitValue_MotAg5SinRtOffs_Val (2.5F)
#  define Rte_InitValue_MotVelMrf_Val (0.0F)
# endif


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Buffers for inter-runnable variables
 *********************************************************************************************************************/

#  define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(boolean, RTE_VAR_INIT) Rte_Irv_CDD_MotAg5Meas_MotAg5PrtclOk; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(MotAgRtPrmRec1, RTE_VAR_INIT) Rte_Irv_CDD_MotAg5Meas_MotAg5RtVari; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#  define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
# endif /* !defined(RTE_CORE) */


# define RTE_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(void, RTE_CODE) Rte_IrvWrite_CDD_MotAg5Meas_MotAg5MeasPer3_MotAg5RtVari(P2CONST(MotAgRtPrmRec1, AUTOMATIC, RTE_CDD_MOTAG5MEAS_APPL_DATA) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# ifndef RTE_CORE

/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Read_MotAg5Cos_Val Rte_Read_CDD_MotAg5Meas_MotAg5Cos_Val
#  define Rte_Read_CDD_MotAg5Meas_MotAg5Cos_Val(data) (*(data) = Rte_CDD_MotCtrlMgr_MotAg5Cos_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_MotAg5CosAdcFaild_Logl Rte_Read_CDD_MotAg5Meas_MotAg5CosAdcFaild_Logl
#  define Rte_Read_CDD_MotAg5Meas_MotAg5CosAdcFaild_Logl(data) (*(data) = Rte_CDD_FordT3T6McuCfg_MotAg5CosAdcFaild_Logl, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_MotAg5RawMecl_Val Rte_Read_CDD_MotAg5Meas_MotAg5RawMecl_Val
#  define Rte_Read_CDD_MotAg5Meas_MotAg5RawMecl_Val(data) (*(data) = Rte_CDD_MotCtrlMgr_MotAg5RawMecl_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_MotAg5Sin_Val Rte_Read_CDD_MotAg5Meas_MotAg5Sin_Val
#  define Rte_Read_CDD_MotAg5Meas_MotAg5Sin_Val(data) (*(data) = Rte_CDD_MotCtrlMgr_MotAg5Sin_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_MotAg5SinAdcFaild_Logl Rte_Read_CDD_MotAg5Meas_MotAg5SinAdcFaild_Logl
#  define Rte_Read_CDD_MotAg5Meas_MotAg5SinAdcFaild_Logl(data) (*(data) = Rte_CDD_FordT3T6McuCfg_MotAg5SinAdcFaild_Logl, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_MotVelMrf_Val Rte_Read_CDD_MotAg5Meas_MotVelMrf_Val
#  define Rte_Read_CDD_MotAg5Meas_MotVelMrf_Val(data) (*(data) = Rte_CDD_MotVel_MotVelMrf_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Write_MotAg5CosRtAmpRecpr_Val Rte_Write_CDD_MotAg5Meas_MotAg5CosRtAmpRecpr_Val
#  define Rte_Write_CDD_MotAg5Meas_MotAg5CosRtAmpRecpr_Val(data) (Rte_CDD_MotAg5Meas_MotAg5CosRtAmpRecpr_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_MotAg5CosRtOffs_Val Rte_Write_CDD_MotAg5Meas_MotAg5CosRtOffs_Val
#  define Rte_Write_CDD_MotAg5Meas_MotAg5CosRtOffs_Val(data) (Rte_CDD_MotAg5Meas_MotAg5CosRtOffs_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_MotAg5MeclQlfr_Val Rte_Write_CDD_MotAg5Meas_MotAg5MeclQlfr_Val
#  define Rte_Write_CDD_MotAg5Meas_MotAg5MeclQlfr_Val(data) (Rte_CDD_MotAg5Meas_MotAg5MeclQlfr_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_MotAg5MeclRollgCntr_Val Rte_Write_CDD_MotAg5Meas_MotAg5MeclRollgCntr_Val
#  define Rte_Write_CDD_MotAg5Meas_MotAg5MeclRollgCntr_Val(data) (Rte_CDD_MotAg5Meas_MotAg5MeclRollgCntr_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_MotAg5SinRtAmpRecpr_Val Rte_Write_CDD_MotAg5Meas_MotAg5SinRtAmpRecpr_Val
#  define Rte_Write_CDD_MotAg5Meas_MotAg5SinRtAmpRecpr_Val(data) (Rte_CDD_MotAg5Meas_MotAg5SinRtAmpRecpr_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_MotAg5SinRtOffs_Val Rte_Write_CDD_MotAg5Meas_MotAg5SinRtOffs_Val
#  define Rte_Write_CDD_MotAg5Meas_MotAg5SinRtOffs_Val(data) (Rte_CDD_MotAg5Meas_MotAg5SinRtOffs_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */


/**********************************************************************************************************************
 * Rte_Call_<p>_<o> (unmapped) for synchronous C/S communication
 *********************************************************************************************************************/
#  define RTE_START_SEC_DIAGCMGR_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(void, RTE_DIAGCMGR_APPL_CODE) CnvSnpshtData_f32_Oper(P2VAR(uint32, AUTOMATIC, RTE_DIAGCMGR_APPL_VAR) SnpshtDataCnvd_Arg, float32 SnpshtData_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_DIAGCMGR_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_CnvSnpshtData_f32_Oper(arg1, arg2) (CnvSnpshtData_f32_Oper(arg1, arg2), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define RTE_START_SEC_DIAGCMGR_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(void, RTE_DIAGCMGR_APPL_CODE) CnvSnpshtData_logl_Oper(P2VAR(uint32, AUTOMATIC, RTE_DIAGCMGR_APPL_VAR) SnpshtDataCnvd_Arg, boolean SnpshtData_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_DIAGCMGR_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_CnvSnpshtData_logl_Oper(arg1, arg2) (CnvSnpshtData_logl_Oper(arg1, arg2), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define RTE_START_SEC_DIAGCMGRPROXYAPPL10_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(Std_ReturnType, RTE_DIAGCMGRPROXYAPPL10_APPL_CODE) GetNtcQlfrSts10_Oper(NtcNr1 NtcNr_Arg, P2VAR(SigQlfr1, AUTOMATIC, RTE_DIAGCMGRPROXYAPPL10_APPL_VAR) NtcQlfr_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_DIAGCMGRPROXYAPPL10_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_GetNtcQlfrSts_Oper GetNtcQlfrSts10_Oper
#  define RTE_START_SEC_NVMPROXY_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(Std_ReturnType, RTE_NVMPROXY_APPL_CODE) NvMProxy_GetErrorStatus(NvM_BlockIdType parg0, P2VAR(NvM_RequestResultType, AUTOMATIC, RTE_NVMPROXY_APPL_VAR) ErrorStatus_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_NVMPROXY_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_MotAg5EolPrm_GetErrorStatus(arg1) (NvMProxy_GetErrorStatus((NvM_BlockIdType)73, arg1)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define RTE_START_SEC_NVMPROXY_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(Std_ReturnType, RTE_NVMPROXY_APPL_CODE) NvMProxy_SetRamBlockStatus(NvM_BlockIdType parg0, boolean RamBlockStatus_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_NVMPROXY_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_MotAg5EolPrm_SetRamBlockStatus(arg1) (NvMProxy_SetRamBlockStatus((NvM_BlockIdType)73, arg1)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Call_MotAg5StVari_GetErrorStatus(arg1) (NvMProxy_GetErrorStatus((NvM_BlockIdType)76, arg1)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Call_MotAg5StVari_SetRamBlockStatus(arg1) (NvMProxy_SetRamBlockStatus((NvM_BlockIdType)76, arg1)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define RTE_START_SEC_DIAGCMGRPROXYAPPL10_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(Std_ReturnType, RTE_DIAGCMGRPROXYAPPL10_APPL_CODE) SetNtcStsAndSnpshtData10_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg, uint32 SpclSnpshtData0_Arg, uint32 SpclSnpshtData1_Arg, uint32 SpclSnpshtData2_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_DIAGCMGRPROXYAPPL10_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_SetNtcStsAndSnpshtData_Oper SetNtcStsAndSnpshtData10_Oper


/**********************************************************************************************************************
 * Inter-runnable variables
 *********************************************************************************************************************/

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
#  define Rte_IrvRead_MotAg5MeasPer1_MotAg5RtVari(data) \
  (*(data) = Rte_Irv_CDD_MotAg5Meas_MotAg5RtVari)
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
#  define Rte_IrvWrite_MotAg5MeasPer1_MotAg5PrtclOk(data) \
  (Rte_Irv_CDD_MotAg5Meas_MotAg5PrtclOk = (data))
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
#  define Rte_IrvRead_MotAg5MeasPer3_MotAg5PrtclOk() \
  Rte_Irv_CDD_MotAg5Meas_MotAg5PrtclOk
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
#  define Rte_IrvWrite_MotAg5MeasPer3_MotAg5RtVari(data) \
  Rte_IrvWrite_CDD_MotAg5Meas_MotAg5MeasPer3_MotAg5RtVari(data)
/* PRQA L:L1 */


/**********************************************************************************************************************
 * Rte_Prm (Calibration component calibration parameters)
 *********************************************************************************************************************/

#  define Rte_Prm_MotAg5MeasAmpSqdMaxThd_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->MotAg5MeasAmpSqdMaxThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_MotAg5MeasAmpSqdMinThd_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->MotAg5MeasAmpSqdMinThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_MotAg5MeasLpFilFrq_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->MotAg5MeasLpFilFrq_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_MotAg5MeasRtAmpRecprLim_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->MotAg5MeasRtAmpRecprLim_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_MotAg5MeasRtFilEnaThd_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->MotAg5MeasRtFilEnaThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_MotAg5MeasRtMotVelFilEnaThd_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->MotAg5MeasRtMotVelFilEnaThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_MotAg5MeasRtOffsLim_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->MotAg5MeasRtOffsLim_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_MotAg5MeasRtToNomRatLim_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->MotAg5MeasRtToNomRatLim_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_MotAg5MeasOffs_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->MotAg5MeasOffs_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Rte_Pim (Per-Instance Memory)
 *********************************************************************************************************************/

#  ifndef RTE_MICROSAR_PIM_EXPORT
#   define RTE_START_SEC_VAR_DEFAULT_RTE_Appl10_PIM_GROUP_UNSPECIFIED
#   include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAg5Meas_dMotAg5MeasAmpVal; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(u0p16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAg5Meas_PrevMotAg5Mecl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAg5Meas_MotAg5PrevRollgCntr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAg5Meas_MotAg5NvmFltEna; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAg5Meas_MotAg5CosMaxLpFil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAg5Meas_MotAg5CosMinLpFil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(MotAgEolPrmRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAg5Meas_MotAg5EolPrm; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(MotAgRtPrmRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAg5Meas_MotAg5RtPrm; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAg5Meas_MotAg5SinMaxLpFil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAg5Meas_MotAg5SinMinLpFil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(MotAgStVariRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAg5Meas_MotAg5StVari; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#   define RTE_STOP_SEC_VAR_DEFAULT_RTE_Appl10_PIM_GROUP_UNSPECIFIED
#   include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  endif

#  define Rte_Pim_dMotAg5MeasAmpVal() \
  (&Rte_CDD_MotAg5Meas_dMotAg5MeasAmpVal) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_PrevMotAg5Mecl() \
  (&Rte_CDD_MotAg5Meas_PrevMotAg5Mecl) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_MotAg5PrevRollgCntr() \
  (&Rte_CDD_MotAg5Meas_MotAg5PrevRollgCntr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_MotAg5NvmFltEna() \
  (&Rte_CDD_MotAg5Meas_MotAg5NvmFltEna) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_MotAg5CosMaxLpFil() \
  (&Rte_CDD_MotAg5Meas_MotAg5CosMaxLpFil) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_MotAg5CosMinLpFil() \
  (&Rte_CDD_MotAg5Meas_MotAg5CosMinLpFil) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_MotAg5EolPrm() \
  (&Rte_CDD_MotAg5Meas_MotAg5EolPrm) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_MotAg5RtPrm() \
  (&Rte_CDD_MotAg5Meas_MotAg5RtPrm) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_MotAg5SinMaxLpFil() \
  (&Rte_CDD_MotAg5Meas_MotAg5SinMaxLpFil) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_MotAg5SinMinLpFil() \
  (&Rte_CDD_MotAg5Meas_MotAg5SinMinLpFil) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_MotAg5StVari() \
  (&Rte_CDD_MotAg5Meas_MotAg5StVari) /* PRQA S 3453 */ /* MD_MSR_19.7 */


# endif /* !defined(RTE_CORE) */


# define CDD_MotAg5Meas_START_SEC_CODE
# include "CDD_MotAg5Meas_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * Runnable entities
 *********************************************************************************************************************/

# ifndef RTE_CORE
#  define RTE_RUNNABLE_MotAg5EolPrmRead_Oper MotAg5EolPrmRead_Oper
#  define RTE_RUNNABLE_MotAg5EolPrmWr_Oper MotAg5EolPrmWr_Oper
#  define RTE_RUNNABLE_MotAg5MeasInit1 MotAg5MeasInit1
#  define RTE_RUNNABLE_MotAg5MeasPer1 MotAg5MeasPer1
#  define RTE_RUNNABLE_MotAg5MeasPer3 MotAg5MeasPer3
# endif

FUNC(void, CDD_MotAg5Meas_CODE) MotAg5EolPrmRead_Oper(P2VAR(MotAgEolPrmRec1, AUTOMATIC, RTE_CDD_MOTAG5MEAS_APPL_VAR) MotAgEolPrmData_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, CDD_MotAg5Meas_CODE) MotAg5EolPrmWr_Oper(P2CONST(MotAgEolPrmRec1, AUTOMATIC, RTE_CDD_MOTAG5MEAS_APPL_DATA) MotAgEolPrmData_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, CDD_MotAg5Meas_CODE) MotAg5MeasInit1(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(void, CDD_MotAg5Meas_CODE) MotAg5MeasPer1(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(void, CDD_MotAg5Meas_CODE) MotAg5MeasPer3(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */

# define CDD_MotAg5Meas_STOP_SEC_CODE
# include "CDD_MotAg5Meas_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Application errors
 *********************************************************************************************************************/

#  define RTE_E_GetNtcQlfrSts1_PortIf1_E_NOT_OK (1U)

#  define RTE_E_NvMService_AC3_SRBS_E_NOT_OK (1U)

#  define RTE_E_SetNtcStsAndSnpshtData_PortIf1_E_NOT_OK (1U)
# endif /* !defined(RTE_CORE) */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_CDD_MOTAG5MEAS_H */

/**********************************************************************************************************************
 MISRA 2004 violations and justifications
 *********************************************************************************************************************/

/* module specific MISRA deviations:
   MD_Rte_3451:  MISRA rule: 8.8
     Reason:     Schedulable entities are declared by the RTE and also by the BSW modules.
     Risk:       No functional risk.
     Prevention: Not required.

*/
