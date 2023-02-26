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
 *          File:  Rte_CDD_MotAg6Meas.h
 *        Config:  EPS.dpa
 *   ECU-Project:  PSCM_FD
 *
 *     Generator:  MICROSAR RTE Generator Version 4.13.0
 *                 RTE Core Version 1.13.0
 *       License:  Unlimited license CBD1601056 for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <CDD_MotAg6Meas>
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_CDD_MOTAG6MEAS_H
# define _RTE_CDD_MOTAG6MEAS_H

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

# include "Rte_CDD_MotAg6Meas_Type.h"
# include "Rte_DataHandleType.h"

# ifndef RTE_CORE

/**********************************************************************************************************************
 * extern declaration of RTE buffers for optimized macro implementation
 *********************************************************************************************************************/
#  define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(float32, RTE_VAR_INIT) Rte_CDD_MotAg6Meas_MotAg6CosRtAmpRecpr_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_CDD_MotAg6Meas_MotAg6CosRtOffs_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(SigQlfr1, RTE_VAR_INIT) Rte_CDD_MotAg6Meas_MotAg6MeclQlfr_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CDD_MotAg6Meas_MotAg6MeclRollgCntr_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_CDD_MotAg6Meas_MotAg6SinRtAmpRecpr_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_CDD_MotAg6Meas_MotAg6SinRtOffs_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_CDD_MotCtrlMgr_MotAg6Cos_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CDD_FordT3T6McuCfg_MotAg6CosAdcFaild_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(u0p16, RTE_VAR_INIT) Rte_CDD_MotCtrlMgr_MotAg6RawMecl_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_CDD_MotCtrlMgr_MotAg6Sin_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CDD_FordT3T6McuCfg_MotAg6SinAdcFaild_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_CDD_MotVel_MotVelMrf_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#  define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# endif /* !defined(RTE_CORE) */


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

#  define Rte_InitValue_MotAg6Cos_Val (1.65F)
#  define Rte_InitValue_MotAg6CosAdcFaild_Logl (FALSE)
#  define Rte_InitValue_MotAg6CosRtAmpRecpr_Val (1.0F)
#  define Rte_InitValue_MotAg6CosRtOffs_Val (2.5F)
#  define Rte_InitValue_MotAg6MeclQlfr_Val (0U)
#  define Rte_InitValue_MotAg6MeclRollgCntr_Val (0U)
#  define Rte_InitValue_MotAg6RawMecl_Val (0U)
#  define Rte_InitValue_MotAg6Sin_Val (1.65F)
#  define Rte_InitValue_MotAg6SinAdcFaild_Logl (FALSE)
#  define Rte_InitValue_MotAg6SinRtAmpRecpr_Val (1.0F)
#  define Rte_InitValue_MotAg6SinRtOffs_Val (2.5F)
#  define Rte_InitValue_MotVelMrf_Val (0.0F)
# endif


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Buffers for inter-runnable variables
 *********************************************************************************************************************/

#  define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(boolean, RTE_VAR_INIT) Rte_Irv_CDD_MotAg6Meas_MotAg6PrtclOk; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(MotAgRtPrmRec1, RTE_VAR_INIT) Rte_Irv_CDD_MotAg6Meas_MotAg6RtVari; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#  define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
# endif /* !defined(RTE_CORE) */


# define RTE_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(void, RTE_CODE) Rte_IrvWrite_CDD_MotAg6Meas_MotAg6MeasPer3_MotAg6RtVari(P2CONST(MotAgRtPrmRec1, AUTOMATIC, RTE_CDD_MOTAG6MEAS_APPL_DATA) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# ifndef RTE_CORE

/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Read_MotAg6Cos_Val Rte_Read_CDD_MotAg6Meas_MotAg6Cos_Val
#  define Rte_Read_CDD_MotAg6Meas_MotAg6Cos_Val(data) (*(data) = Rte_CDD_MotCtrlMgr_MotAg6Cos_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_MotAg6CosAdcFaild_Logl Rte_Read_CDD_MotAg6Meas_MotAg6CosAdcFaild_Logl
#  define Rte_Read_CDD_MotAg6Meas_MotAg6CosAdcFaild_Logl(data) (*(data) = Rte_CDD_FordT3T6McuCfg_MotAg6CosAdcFaild_Logl, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_MotAg6RawMecl_Val Rte_Read_CDD_MotAg6Meas_MotAg6RawMecl_Val
#  define Rte_Read_CDD_MotAg6Meas_MotAg6RawMecl_Val(data) (*(data) = Rte_CDD_MotCtrlMgr_MotAg6RawMecl_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_MotAg6Sin_Val Rte_Read_CDD_MotAg6Meas_MotAg6Sin_Val
#  define Rte_Read_CDD_MotAg6Meas_MotAg6Sin_Val(data) (*(data) = Rte_CDD_MotCtrlMgr_MotAg6Sin_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_MotAg6SinAdcFaild_Logl Rte_Read_CDD_MotAg6Meas_MotAg6SinAdcFaild_Logl
#  define Rte_Read_CDD_MotAg6Meas_MotAg6SinAdcFaild_Logl(data) (*(data) = Rte_CDD_FordT3T6McuCfg_MotAg6SinAdcFaild_Logl, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_MotVelMrf_Val Rte_Read_CDD_MotAg6Meas_MotVelMrf_Val
#  define Rte_Read_CDD_MotAg6Meas_MotVelMrf_Val(data) (*(data) = Rte_CDD_MotVel_MotVelMrf_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Write_MotAg6CosRtAmpRecpr_Val Rte_Write_CDD_MotAg6Meas_MotAg6CosRtAmpRecpr_Val
#  define Rte_Write_CDD_MotAg6Meas_MotAg6CosRtAmpRecpr_Val(data) (Rte_CDD_MotAg6Meas_MotAg6CosRtAmpRecpr_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_MotAg6CosRtOffs_Val Rte_Write_CDD_MotAg6Meas_MotAg6CosRtOffs_Val
#  define Rte_Write_CDD_MotAg6Meas_MotAg6CosRtOffs_Val(data) (Rte_CDD_MotAg6Meas_MotAg6CosRtOffs_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_MotAg6MeclQlfr_Val Rte_Write_CDD_MotAg6Meas_MotAg6MeclQlfr_Val
#  define Rte_Write_CDD_MotAg6Meas_MotAg6MeclQlfr_Val(data) (Rte_CDD_MotAg6Meas_MotAg6MeclQlfr_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_MotAg6MeclRollgCntr_Val Rte_Write_CDD_MotAg6Meas_MotAg6MeclRollgCntr_Val
#  define Rte_Write_CDD_MotAg6Meas_MotAg6MeclRollgCntr_Val(data) (Rte_CDD_MotAg6Meas_MotAg6MeclRollgCntr_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_MotAg6SinRtAmpRecpr_Val Rte_Write_CDD_MotAg6Meas_MotAg6SinRtAmpRecpr_Val
#  define Rte_Write_CDD_MotAg6Meas_MotAg6SinRtAmpRecpr_Val(data) (Rte_CDD_MotAg6Meas_MotAg6SinRtAmpRecpr_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_MotAg6SinRtOffs_Val Rte_Write_CDD_MotAg6Meas_MotAg6SinRtOffs_Val
#  define Rte_Write_CDD_MotAg6Meas_MotAg6SinRtOffs_Val(data) (Rte_CDD_MotAg6Meas_MotAg6SinRtOffs_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */


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

#  define Rte_Call_MotAg6EolPrm_GetErrorStatus(arg1) (NvMProxy_GetErrorStatus((NvM_BlockIdType)75, arg1)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define RTE_START_SEC_NVMPROXY_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(Std_ReturnType, RTE_NVMPROXY_APPL_CODE) NvMProxy_SetRamBlockStatus(NvM_BlockIdType parg0, boolean RamBlockStatus_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_NVMPROXY_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_MotAg6EolPrm_SetRamBlockStatus(arg1) (NvMProxy_SetRamBlockStatus((NvM_BlockIdType)75, arg1)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Call_MotAg6StVari_GetErrorStatus(arg1) (NvMProxy_GetErrorStatus((NvM_BlockIdType)74, arg1)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Call_MotAg6StVari_SetRamBlockStatus(arg1) (NvMProxy_SetRamBlockStatus((NvM_BlockIdType)74, arg1)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
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
#  define Rte_IrvRead_MotAg6MeasPer1_MotAg6RtVari(data) \
  (*(data) = Rte_Irv_CDD_MotAg6Meas_MotAg6RtVari)
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
#  define Rte_IrvWrite_MotAg6MeasPer1_MotAg6PrtclOk(data) \
  (Rte_Irv_CDD_MotAg6Meas_MotAg6PrtclOk = (data))
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
#  define Rte_IrvRead_MotAg6MeasPer3_MotAg6PrtclOk() \
  Rte_Irv_CDD_MotAg6Meas_MotAg6PrtclOk
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
#  define Rte_IrvWrite_MotAg6MeasPer3_MotAg6RtVari(data) \
  Rte_IrvWrite_CDD_MotAg6Meas_MotAg6MeasPer3_MotAg6RtVari(data)
/* PRQA L:L1 */


/**********************************************************************************************************************
 * Rte_Prm (Calibration component calibration parameters)
 *********************************************************************************************************************/

#  define Rte_Prm_MotAg6MeasAmpSqdMaxThd_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->MotAg6MeasAmpSqdMaxThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_MotAg6MeasAmpSqdMinThd_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->MotAg6MeasAmpSqdMinThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_MotAg6MeasLpFilFrq_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->MotAg6MeasLpFilFrq_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_MotAg6MeasRtAmpRecprLim_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->MotAg6MeasRtAmpRecprLim_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_MotAg6MeasRtFilEnaThd_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->MotAg6MeasRtFilEnaThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_MotAg6MeasRtMotVelFilEnaThd_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->MotAg6MeasRtMotVelFilEnaThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_MotAg6MeasRtOffsLim_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->MotAg6MeasRtOffsLim_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_MotAg6MeasRtToNomRatLim_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->MotAg6MeasRtToNomRatLim_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_MotAg6MeasOffs_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->MotAg6MeasOffs_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Rte_Pim (Per-Instance Memory)
 *********************************************************************************************************************/

#  ifndef RTE_MICROSAR_PIM_EXPORT
#   define RTE_START_SEC_VAR_DEFAULT_RTE_Appl10_PIM_GROUP_UNSPECIFIED
#   include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAg6Meas_dMotAg6MeasAmpVal; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(u0p16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAg6Meas_PrevMotAg6Mecl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAg6Meas_MotAg6PrevRollgCntr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAg6Meas_MotAg6NvmFltEna; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAg6Meas_MotAg6CosMaxLpFil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAg6Meas_MotAg6CosMinLpFil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(MotAgEolPrmRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAg6Meas_MotAg6EolPrm; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(MotAgRtPrmRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAg6Meas_MotAg6RtPrm; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAg6Meas_MotAg6SinMaxLpFil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAg6Meas_MotAg6SinMinLpFil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(MotAgStVariRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAg6Meas_MotAg6StVari; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#   define RTE_STOP_SEC_VAR_DEFAULT_RTE_Appl10_PIM_GROUP_UNSPECIFIED
#   include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  endif

#  define Rte_Pim_dMotAg6MeasAmpVal() \
  (&Rte_CDD_MotAg6Meas_dMotAg6MeasAmpVal) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_PrevMotAg6Mecl() \
  (&Rte_CDD_MotAg6Meas_PrevMotAg6Mecl) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_MotAg6PrevRollgCntr() \
  (&Rte_CDD_MotAg6Meas_MotAg6PrevRollgCntr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_MotAg6NvmFltEna() \
  (&Rte_CDD_MotAg6Meas_MotAg6NvmFltEna) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_MotAg6CosMaxLpFil() \
  (&Rte_CDD_MotAg6Meas_MotAg6CosMaxLpFil) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_MotAg6CosMinLpFil() \
  (&Rte_CDD_MotAg6Meas_MotAg6CosMinLpFil) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_MotAg6EolPrm() \
  (&Rte_CDD_MotAg6Meas_MotAg6EolPrm) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_MotAg6RtPrm() \
  (&Rte_CDD_MotAg6Meas_MotAg6RtPrm) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_MotAg6SinMaxLpFil() \
  (&Rte_CDD_MotAg6Meas_MotAg6SinMaxLpFil) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_MotAg6SinMinLpFil() \
  (&Rte_CDD_MotAg6Meas_MotAg6SinMinLpFil) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_MotAg6StVari() \
  (&Rte_CDD_MotAg6Meas_MotAg6StVari) /* PRQA S 3453 */ /* MD_MSR_19.7 */


# endif /* !defined(RTE_CORE) */


# define CDD_MotAg6Meas_START_SEC_CODE
# include "CDD_MotAg6Meas_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * Runnable entities
 *********************************************************************************************************************/

# ifndef RTE_CORE
#  define RTE_RUNNABLE_MotAg6EolPrmRead_Oper MotAg6EolPrmRead_Oper
#  define RTE_RUNNABLE_MotAg6EolPrmWr_Oper MotAg6EolPrmWr_Oper
#  define RTE_RUNNABLE_MotAg6MeasInit1 MotAg6MeasInit1
#  define RTE_RUNNABLE_MotAg6MeasPer1 MotAg6MeasPer1
#  define RTE_RUNNABLE_MotAg6MeasPer3 MotAg6MeasPer3
# endif

FUNC(void, CDD_MotAg6Meas_CODE) MotAg6EolPrmRead_Oper(P2VAR(MotAgEolPrmRec1, AUTOMATIC, RTE_CDD_MOTAG6MEAS_APPL_VAR) MotAgEolPrmData_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, CDD_MotAg6Meas_CODE) MotAg6EolPrmWr_Oper(P2CONST(MotAgEolPrmRec1, AUTOMATIC, RTE_CDD_MOTAG6MEAS_APPL_DATA) MotAgEolPrmData_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, CDD_MotAg6Meas_CODE) MotAg6MeasInit1(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(void, CDD_MotAg6Meas_CODE) MotAg6MeasPer1(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(void, CDD_MotAg6Meas_CODE) MotAg6MeasPer3(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */

# define CDD_MotAg6Meas_STOP_SEC_CODE
# include "CDD_MotAg6Meas_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


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

#endif /* _RTE_CDD_MOTAG6MEAS_H */

/**********************************************************************************************************************
 MISRA 2004 violations and justifications
 *********************************************************************************************************************/

/* module specific MISRA deviations:
   MD_Rte_3451:  MISRA rule: 8.8
     Reason:     Schedulable entities are declared by the RTE and also by the BSW modules.
     Risk:       No functional risk.
     Prevention: Not required.

*/
