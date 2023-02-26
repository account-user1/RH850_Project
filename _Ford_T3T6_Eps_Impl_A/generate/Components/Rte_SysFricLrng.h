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
 *          File:  Rte_SysFricLrng.h
 *        Config:  EPS.dpa
 *   ECU-Project:  PSCM_FD
 *
 *     Generator:  MICROSAR RTE Generator Version 4.13.0
 *                 RTE Core Version 1.13.0
 *       License:  Unlimited license CBD1601056 for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <SysFricLrng>
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_SYSFRICLRNG_H
# define _RTE_SYSFRICLRNG_H

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

# include "Rte_SysFricLrng_Type.h"
# include "Rte_DataHandleType.h"

# ifndef RTE_CORE

/**********************************************************************************************************************
 * extern declaration of RTE buffers for optimized macro implementation
 *********************************************************************************************************************/
#  define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(float32, RTE_VAR_INIT) Rte_SysFricLrng_MaxLrndFric_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_SysFricLrng_SysFricEstimd_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_SysFricLrng_SysFricOffs_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_SysFricLrng_SysSatnFricEstimd_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_TEstimn_AssiMechT_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_SysFricLrng_FricLrngCustEna_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CmnMfgSrv_FricLrngDi_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_ImcSigArbn_HwAgImcCorrd_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_HwAgSysArbn_PinionAgConf_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_ImcSigArbn_HwTqImcCorrd_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_HwAgSysArbn_HwVel_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_MotTqTranlDampg_MotTqCmdCrfDampd_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_VehSigCdng_VehLatA_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_ImcSigArbn_VehSpdImcCorrd_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_VehSigCdng_VehSpdVld_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#  define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# endif /* !defined(RTE_CORE) */


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

#  define Rte_InitValue_AssiMechT_Val (0.0F)
#  define Rte_InitValue_FricLrngCustEna_Logl (TRUE)
#  define Rte_InitValue_FricLrngDi_Logl (FALSE)
#  define Rte_InitValue_HwAg_Val (0.0F)
#  define Rte_InitValue_HwAgAuthy_Val (0.0F)
#  define Rte_InitValue_HwTq_Val (0.0F)
#  define Rte_InitValue_HwVel_Val (0.0F)
#  define Rte_InitValue_MaxLrndFric_Val (0.0F)
#  define Rte_InitValue_MotTqCmdCrf_Val (0.0F)
#  define Rte_InitValue_SysFricEstimd_Val (0.0F)
#  define Rte_InitValue_SysFricOffs_Val (0.0F)
#  define Rte_InitValue_SysSatnFricEstimd_Val (0.0F)
#  define Rte_InitValue_VehLatA_Val (0.0F)
#  define Rte_InitValue_VehSpd_Val (0.0F)
#  define Rte_InitValue_VehSpdVld_Logl (FALSE)
# endif


# ifndef RTE_CORE

/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Read_AssiMechT_Val Rte_Read_SysFricLrng_AssiMechT_Val
#  define Rte_Read_SysFricLrng_AssiMechT_Val(data) (*(data) = Rte_TEstimn_AssiMechT_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FricLrngCustEna_Logl Rte_Read_SysFricLrng_FricLrngCustEna_Logl
#  define Rte_Read_SysFricLrng_FricLrngCustEna_Logl(data) (*(data) = Rte_SysFricLrng_FricLrngCustEna_Logl, ((Std_ReturnType)RTE_E_UNCONNECTED)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FricLrngDi_Logl Rte_Read_SysFricLrng_FricLrngDi_Logl
#  define Rte_Read_SysFricLrng_FricLrngDi_Logl(data) (*(data) = Rte_CmnMfgSrv_FricLrngDi_Logl, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_HwAg_Val Rte_Read_SysFricLrng_HwAg_Val
#  define Rte_Read_SysFricLrng_HwAg_Val(data) (*(data) = Rte_ImcSigArbn_HwAgImcCorrd_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_HwAgAuthy_Val Rte_Read_SysFricLrng_HwAgAuthy_Val
#  define Rte_Read_SysFricLrng_HwAgAuthy_Val(data) (*(data) = Rte_HwAgSysArbn_PinionAgConf_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_HwTq_Val Rte_Read_SysFricLrng_HwTq_Val
#  define Rte_Read_SysFricLrng_HwTq_Val(data) (*(data) = Rte_ImcSigArbn_HwTqImcCorrd_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_HwVel_Val Rte_Read_SysFricLrng_HwVel_Val
#  define Rte_Read_SysFricLrng_HwVel_Val(data) (*(data) = Rte_HwAgSysArbn_HwVel_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_MotTqCmdCrf_Val Rte_Read_SysFricLrng_MotTqCmdCrf_Val
#  define Rte_Read_SysFricLrng_MotTqCmdCrf_Val(data) (*(data) = Rte_MotTqTranlDampg_MotTqCmdCrfDampd_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_VehLatA_Val Rte_Read_SysFricLrng_VehLatA_Val
#  define Rte_Read_SysFricLrng_VehLatA_Val(data) (*(data) = Rte_VehSigCdng_VehLatA_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_VehSpd_Val Rte_Read_SysFricLrng_VehSpd_Val
#  define Rte_Read_SysFricLrng_VehSpd_Val(data) (*(data) = Rte_ImcSigArbn_VehSpdImcCorrd_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_VehSpdVld_Logl Rte_Read_SysFricLrng_VehSpdVld_Logl
#  define Rte_Read_SysFricLrng_VehSpdVld_Logl(data) (*(data) = Rte_VehSigCdng_VehSpdVld_Logl, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Write_MaxLrndFric_Val Rte_Write_SysFricLrng_MaxLrndFric_Val
#  define Rte_Write_SysFricLrng_MaxLrndFric_Val(data) (Rte_SysFricLrng_MaxLrndFric_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_SysFricEstimd_Val Rte_Write_SysFricLrng_SysFricEstimd_Val
#  define Rte_Write_SysFricLrng_SysFricEstimd_Val(data) (Rte_SysFricLrng_SysFricEstimd_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_SysFricOffs_Val Rte_Write_SysFricLrng_SysFricOffs_Val
#  define Rte_Write_SysFricLrng_SysFricOffs_Val(data) (Rte_SysFricLrng_SysFricOffs_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_SysSatnFricEstimd_Val Rte_Write_SysFricLrng_SysSatnFricEstimd_Val
#  define Rte_Write_SysFricLrng_SysSatnFricEstimd_Val(data) (Rte_SysFricLrng_SysSatnFricEstimd_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */


/**********************************************************************************************************************
 * Rte_Call_<p>_<o> (unmapped) for synchronous C/S communication
 *********************************************************************************************************************/
#  define RTE_START_SEC_FLTINJ_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(void, RTE_FLTINJ_APPL_CODE) FltInj_f32_Oper(P2VAR(float32, AUTOMATIC, RTE_FLTINJ_APPL_VAR) SigPah_Arg, uint16 LocnKey_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_FLTINJ_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_FltInj_f32_Oper(arg1, arg2) (FltInj_f32_Oper(arg1, arg2), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define RTE_START_SEC_NVMPROXY_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(Std_ReturnType, RTE_NVMPROXY_APPL_CODE) NvMProxy_SetRamBlockStatus(NvM_BlockIdType parg0, boolean RamBlockStatus_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_NVMPROXY_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_FricLrngData_SetRamBlockStatus(arg1) (NvMProxy_SetRamBlockStatus((NvM_BlockIdType)83, arg1)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Call_FricNonLrngData_SetRamBlockStatus(arg1) (NvMProxy_SetRamBlockStatus((NvM_BlockIdType)82, arg1)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define RTE_START_SEC_DIAGCMGRPROXYAPPL10_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(Std_ReturnType, RTE_DIAGCMGRPROXYAPPL10_APPL_CODE) GetNtcQlfrSts10_Oper(NtcNr1 NtcNr_Arg, P2VAR(SigQlfr1, AUTOMATIC, RTE_DIAGCMGRPROXYAPPL10_APPL_VAR) NtcQlfr_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_DIAGCMGRPROXYAPPL10_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_GetNtcQlfrSts_Oper GetNtcQlfrSts10_Oper
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
 * Rte_CData (SW-C local calibration parameters)
 *********************************************************************************************************************/

#  define Rte_CData_FricLrngDataDft() (&((P2CONST(Rte_Calprm_SysFricLrng_DEFAULT_RTE_CDATA_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_SysFricLrng_DEFAULT_RTE_CDATA_GROUP])->FricLrngDataDft) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_CData_FricNonLrngDataDft() (&((P2CONST(Rte_Calprm_SysFricLrng_DEFAULT_RTE_CDATA_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_SysFricLrng_DEFAULT_RTE_CDATA_GROUP])->FricNonLrngDataDft) /* PRQA S 3453 */ /* MD_MSR_19.7 */

/**********************************************************************************************************************
 * Rte_Prm (Calibration component calibration parameters)
 *********************************************************************************************************************/

#  define Rte_Prm_SysFricLrngAvrgFricFrq_Val() (((P2CONST(Rte_Calprm_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP])->SysFricLrngAvrgFricFrq_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_SysFricLrngBasLineEolFric_Val() (((P2CONST(Rte_Calprm_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP])->SysFricLrngBasLineEolFric_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_SysFricLrngDataPrepLpFilFrq_Val() (((P2CONST(Rte_Calprm_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP])->SysFricLrngDataPrepLpFilFrq_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_SysFricLrngEolFricDifHiLim_Val() (((P2CONST(Rte_Calprm_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP])->SysFricLrngEolFricDifHiLim_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_SysFricLrngEolFricDifLoLim_Val() (((P2CONST(Rte_Calprm_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP])->SysFricLrngEolFricDifLoLim_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_SysFricLrngEolFricDifScagFac_Val() (((P2CONST(Rte_Calprm_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP])->SysFricLrngEolFricDifScagFac_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_SysFricLrngFricDiagcThd_Val() (((P2CONST(Rte_Calprm_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP])->SysFricLrngFricDiagcThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_SysFricLrngFricOffs_Val() (((P2CONST(Rte_Calprm_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP])->SysFricLrngFricOffs_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_SysFricLrngFricOffsHiLim_Val() (((P2CONST(Rte_Calprm_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP])->SysFricLrngFricOffsHiLim_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_SysFricLrngFricOffsLoLim_Val() (((P2CONST(Rte_Calprm_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP])->SysFricLrngFricOffsLoLim_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_SysFricLrngFricOffsLpFilFrq_Val() (((P2CONST(Rte_Calprm_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP])->SysFricLrngFricOffsLpFilFrq_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_SysFricLrngGain_Val() (((P2CONST(Rte_Calprm_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP])->SysFricLrngGain_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_SysFricLrngHiFricDiagcThd_Val() (((P2CONST(Rte_Calprm_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP])->SysFricLrngHiFricDiagcThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_SysFricLrngHwPosnAuthyThd_Val() (((P2CONST(Rte_Calprm_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP])->SysFricLrngHwPosnAuthyThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_SysFricLrngHwVelConstrLim_Val() (((P2CONST(Rte_Calprm_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP])->SysFricLrngHwVelConstrLim_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_SysFricLrngHwVelHiLim_Val() (((P2CONST(Rte_Calprm_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP])->SysFricLrngHwVelHiLim_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_SysFricLrngHwVelLoLim_Val() (((P2CONST(Rte_Calprm_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP])->SysFricLrngHwVelLoLim_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_SysFricLrngIgnCycFricChgLim_Val() (((P2CONST(Rte_Calprm_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP])->SysFricLrngIgnCycFricChgLim_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_SysFricLrngIgnCycFricOffs_Val() (((P2CONST(Rte_Calprm_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP])->SysFricLrngIgnCycFricOffs_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_SysFricLrngLatAHiLim_Val() (((P2CONST(Rte_Calprm_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP])->SysFricLrngLatAHiLim_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_SysFricLrngLatALoLim_Val() (((P2CONST(Rte_Calprm_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP])->SysFricLrngLatALoLim_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_SysFricLrngTHiLim_Val() (((P2CONST(Rte_Calprm_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP])->SysFricLrngTHiLim_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_SysFricLrngTLoLim_Val() (((P2CONST(Rte_Calprm_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP])->SysFricLrngTLoLim_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_SysFricLrngThd_Val() (((P2CONST(Rte_Calprm_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP])->SysFricLrngThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_SysFricLrngDebStep_Val() (((P2CONST(Rte_Calprm_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP])->SysFricLrngDebStep_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_SysFricLrngHiFricDebStep_Val() (((P2CONST(Rte_Calprm_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP])->SysFricLrngHiFricDebStep_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_SysFricLrngRngCntrThd_Val() (((P2CONST(Rte_Calprm_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP])->SysFricLrngRngCntrThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Prm_SysFricLrngBasLineFric_Ary1D() (&(((P2CONST(Rte_Calprm_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP])->SysFricLrngBasLineFric_Ary1D[0])) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  else
#   define Rte_Prm_SysFricLrngBasLineFric_Ary1D() (&((P2CONST(Rte_Calprm_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP])->SysFricLrngBasLineFric_Ary1D) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  endif

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Prm_SysFricLrngBasLineHys_Ary2D() ((P2CONST(float32, AUTOMATIC, RTE_VAR_NOINIT)) &(((P2CONST(Rte_Calprm_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP])->SysFricLrngBasLineHys_Ary2D[0][0])) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  else
#   define Rte_Prm_SysFricLrngBasLineHys_Ary2D() (&((P2CONST(Rte_Calprm_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP])->SysFricLrngBasLineHys_Ary2D) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  endif

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Prm_SysFricLrngBasLineRngCntr_Ary2D() ((P2CONST(uint16, AUTOMATIC, RTE_VAR_NOINIT)) &(((P2CONST(Rte_Calprm_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP])->SysFricLrngBasLineRngCntr_Ary2D[0][0])) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  else
#   define Rte_Prm_SysFricLrngBasLineRngCntr_Ary2D() (&((P2CONST(Rte_Calprm_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP])->SysFricLrngBasLineRngCntr_Ary2D) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  endif

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Prm_SysFricLrngFricChgWght_Ary1D() (&(((P2CONST(Rte_Calprm_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP])->SysFricLrngFricChgWght_Ary1D[0])) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  else
#   define Rte_Prm_SysFricLrngFricChgWght_Ary1D() (&((P2CONST(Rte_Calprm_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP])->SysFricLrngFricChgWght_Ary1D) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  endif

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Prm_SysFricLrngFricHysHwAgPt_Ary1D() (&(((P2CONST(Rte_Calprm_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP])->SysFricLrngFricHysHwAgPt_Ary1D[0])) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  else
#   define Rte_Prm_SysFricLrngFricHysHwAgPt_Ary1D() (&((P2CONST(Rte_Calprm_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP])->SysFricLrngFricHysHwAgPt_Ary1D) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  endif

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Prm_SysFricLrngIvsTrsmRatX_Ary1D() (&(((P2CONST(Rte_Calprm_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP])->SysFricLrngIvsTrsmRatX_Ary1D[0])) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  else
#   define Rte_Prm_SysFricLrngIvsTrsmRatX_Ary1D() (&((P2CONST(Rte_Calprm_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP])->SysFricLrngIvsTrsmRatX_Ary1D) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  endif

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Prm_SysFricLrngIvsTrsmRatY_Ary1D() (&(((P2CONST(Rte_Calprm_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP])->SysFricLrngIvsTrsmRatY_Ary1D[0])) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  else
#   define Rte_Prm_SysFricLrngIvsTrsmRatY_Ary1D() (&((P2CONST(Rte_Calprm_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP])->SysFricLrngIvsTrsmRatY_Ary1D) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  endif

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Prm_SysFricLrngMaskVehSpd_Ary1D() (&(((P2CONST(Rte_Calprm_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP])->SysFricLrngMaskVehSpd_Ary1D[0])) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  else
#   define Rte_Prm_SysFricLrngMaskVehSpd_Ary1D() (&((P2CONST(Rte_Calprm_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP])->SysFricLrngMaskVehSpd_Ary1D) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  endif

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Prm_SysFricLrngVehSpd_Ary2D() ((P2CONST(float32, AUTOMATIC, RTE_VAR_NOINIT)) &(((P2CONST(Rte_Calprm_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP])->SysFricLrngVehSpd_Ary2D[0][0])) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  else
#   define Rte_Prm_SysFricLrngVehSpd_Ary2D() (&((P2CONST(Rte_Calprm_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP])->SysFricLrngVehSpd_Ary2D) /* PRQA S 3453 */ /* MD_MSR_19.7 */
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

extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_SysFricLrng_EstimdFric; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_SysFricLrng_FricOffs; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_SysFricLrng_PrevMaxRawAvrgFric; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_SysFricLrng_SatnEstimdFric; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_SysFricLrng_RefTmrLrngConstr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(SysFricLrngOperMod1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_SysFricLrng_FricLrngOperModPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_SysFricLrng_FricLrngRunOneTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_SysFricLrng_FricOffsOutpDi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary1D_f32_12, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_SysFricLrng_ColTqAry; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary1D_f32_4, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_SysFricLrng_FilAvrgFric; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary1D_f32_12, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_SysFricLrng_HwAgBuf; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary1D_f32_12, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_SysFricLrng_HwVelBuf; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary1D_f32_4, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_SysFricLrng_RawAvrgFric; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary1D_f32_4, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_SysFricLrng_SatnAvrgFric; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary1D_f32_4, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_SysFricLrng_VehBasLineFric; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_SysFricLrng_AssiMechTLpFil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_SysFricLrng_AvrgFricLpFil1; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_SysFricLrng_AvrgFricLpFil2; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_SysFricLrng_AvrgFricLpFil3; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_SysFricLrng_AvrgFricLpFil4; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_SysFricLrng_ColTqLpFil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_SysFricLrng_FricChgLpFil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(SysFricDataRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_SysFricLrng_FricLrngData; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(SysFricNonLrngDataRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_SysFricLrng_FricNonLrngData; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_SysFricLrng_HwAgAuthyLpFil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_SysFricLrng_HwAgLpFil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_SysFricLrng_HwVelLpFil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_SysFricLrng_LatALpFil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_SysFricLrng_VehSpdLpFil; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#   define RTE_STOP_SEC_VAR_DEFAULT_RTE_Appl10_PIM_GROUP_UNSPECIFIED
#   include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  endif

#  define Rte_Pim_EstimdFric() \
  (&Rte_SysFricLrng_EstimdFric) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_FricOffs() \
  (&Rte_SysFricLrng_FricOffs) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_PrevMaxRawAvrgFric() \
  (&Rte_SysFricLrng_PrevMaxRawAvrgFric) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_SatnEstimdFric() \
  (&Rte_SysFricLrng_SatnEstimdFric) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_RefTmrLrngConstr() \
  (&Rte_SysFricLrng_RefTmrLrngConstr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_FricLrngOperModPrev() \
  (&Rte_SysFricLrng_FricLrngOperModPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_FricLrngRunOneTi() \
  (&Rte_SysFricLrng_FricLrngRunOneTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_FricOffsOutpDi() \
  (&Rte_SysFricLrng_FricOffsOutpDi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Pim_ColTqAry() (&((*RtePim_ColTqAry())[0]))
#  else
#   define Rte_Pim_ColTqAry() RtePim_ColTqAry()
#  endif
#  define RtePim_ColTqAry() \
  (&Rte_SysFricLrng_ColTqAry) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Pim_FilAvrgFric() (&((*RtePim_FilAvrgFric())[0]))
#  else
#   define Rte_Pim_FilAvrgFric() RtePim_FilAvrgFric()
#  endif
#  define RtePim_FilAvrgFric() \
  (&Rte_SysFricLrng_FilAvrgFric) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Pim_HwAgBuf() (&((*RtePim_HwAgBuf())[0]))
#  else
#   define Rte_Pim_HwAgBuf() RtePim_HwAgBuf()
#  endif
#  define RtePim_HwAgBuf() \
  (&Rte_SysFricLrng_HwAgBuf) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Pim_HwVelBuf() (&((*RtePim_HwVelBuf())[0]))
#  else
#   define Rte_Pim_HwVelBuf() RtePim_HwVelBuf()
#  endif
#  define RtePim_HwVelBuf() \
  (&Rte_SysFricLrng_HwVelBuf) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Pim_RawAvrgFric() (&((*RtePim_RawAvrgFric())[0]))
#  else
#   define Rte_Pim_RawAvrgFric() RtePim_RawAvrgFric()
#  endif
#  define RtePim_RawAvrgFric() \
  (&Rte_SysFricLrng_RawAvrgFric) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Pim_SatnAvrgFric() (&((*RtePim_SatnAvrgFric())[0]))
#  else
#   define Rte_Pim_SatnAvrgFric() RtePim_SatnAvrgFric()
#  endif
#  define RtePim_SatnAvrgFric() \
  (&Rte_SysFricLrng_SatnAvrgFric) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Pim_VehBasLineFric() (&((*RtePim_VehBasLineFric())[0]))
#  else
#   define Rte_Pim_VehBasLineFric() RtePim_VehBasLineFric()
#  endif
#  define RtePim_VehBasLineFric() \
  (&Rte_SysFricLrng_VehBasLineFric) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_AssiMechTLpFil() \
  (&Rte_SysFricLrng_AssiMechTLpFil) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_AvrgFricLpFil1() \
  (&Rte_SysFricLrng_AvrgFricLpFil1) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_AvrgFricLpFil2() \
  (&Rte_SysFricLrng_AvrgFricLpFil2) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_AvrgFricLpFil3() \
  (&Rte_SysFricLrng_AvrgFricLpFil3) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_AvrgFricLpFil4() \
  (&Rte_SysFricLrng_AvrgFricLpFil4) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_ColTqLpFil() \
  (&Rte_SysFricLrng_ColTqLpFil) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_FricChgLpFil() \
  (&Rte_SysFricLrng_FricChgLpFil) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_FricLrngData() \
  (&Rte_SysFricLrng_FricLrngData) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_FricNonLrngData() \
  (&Rte_SysFricLrng_FricNonLrngData) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_HwAgAuthyLpFil() \
  (&Rte_SysFricLrng_HwAgAuthyLpFil) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_HwAgLpFil() \
  (&Rte_SysFricLrng_HwAgLpFil) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_HwVelLpFil() \
  (&Rte_SysFricLrng_HwVelLpFil) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_LatALpFil() \
  (&Rte_SysFricLrng_LatALpFil) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_VehSpdLpFil() \
  (&Rte_SysFricLrng_VehSpdLpFil) /* PRQA S 3453 */ /* MD_MSR_19.7 */


# endif /* !defined(RTE_CORE) */


# define SysFricLrng_START_SEC_CODE
# include "SysFricLrng_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * Runnable entities
 *********************************************************************************************************************/

# ifndef RTE_CORE
#  define RTE_RUNNABLE_ClrFricLrngOperMod_Oper ClrFricLrngOperMod_Oper
#  define RTE_RUNNABLE_GetFricData_Oper GetFricData_Oper
#  define RTE_RUNNABLE_GetFricLrngData_Oper GetFricLrngData_Oper
#  define RTE_RUNNABLE_GetFricOffsOutpDi_Oper GetFricOffsOutpDi_Oper
#  define RTE_RUNNABLE_InitFricLrngTbl_Oper InitFricLrngTbl_Oper
#  define RTE_RUNNABLE_SetFricData_Oper SetFricData_Oper
#  define RTE_RUNNABLE_SetFricLrngData_Oper SetFricLrngData_Oper
#  define RTE_RUNNABLE_SetFricOffsOutpDi_Oper SetFricOffsOutpDi_Oper
#  define RTE_RUNNABLE_SysFricLrngInit1 SysFricLrngInit1
#  define RTE_RUNNABLE_SysFricLrngPer1 SysFricLrngPer1
# endif

FUNC(void, SysFricLrng_CODE) ClrFricLrngOperMod_Oper(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(void, SysFricLrng_CODE) GetFricData_Oper(P2VAR(float32, AUTOMATIC, RTE_SYSFRICLRNG_APPL_VAR) FricOffs_Arg, P2VAR(float32, AUTOMATIC, RTE_SYSFRICLRNG_APPL_VAR) BasLineFric_Arg, P2VAR(float32, AUTOMATIC, RTE_SYSFRICLRNG_APPL_VAR) VehLrndFric_Arg, P2VAR(float32, AUTOMATIC, RTE_SYSFRICLRNG_APPL_VAR) Hys_Arg, P2VAR(uint16, AUTOMATIC, RTE_SYSFRICLRNG_APPL_VAR) RngCntr_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(void, SysFricLrng_CODE) GetFricData_Oper(P2VAR(float32, AUTOMATIC, RTE_SYSFRICLRNG_APPL_VAR) FricOffs_Arg, P2VAR(Ary1D_f32_4, AUTOMATIC, RTE_SYSFRICLRNG_APPL_VAR) BasLineFric_Arg, P2VAR(Ary1D_f32_4, AUTOMATIC, RTE_SYSFRICLRNG_APPL_VAR) VehLrndFric_Arg, P2VAR(Ary2D_f32_8_4, AUTOMATIC, RTE_SYSFRICLRNG_APPL_VAR) Hys_Arg, P2VAR(Ary2D_u16_8_3, AUTOMATIC, RTE_SYSFRICLRNG_APPL_VAR) RngCntr_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
FUNC(void, SysFricLrng_CODE) GetFricLrngData_Oper(P2VAR(boolean, AUTOMATIC, RTE_SYSFRICLRNG_APPL_VAR) FricLrngEna_Arg, P2VAR(boolean, AUTOMATIC, RTE_SYSFRICLRNG_APPL_VAR) FricLrngOffsOutpEna_Arg, P2VAR(SysFricLrngOperMod1, AUTOMATIC, RTE_SYSFRICLRNG_APPL_VAR) FricLrngOperMod_Arg, P2VAR(float32, AUTOMATIC, RTE_SYSFRICLRNG_APPL_VAR) EolFric_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, SysFricLrng_CODE) GetFricOffsOutpDi_Oper(P2VAR(boolean, AUTOMATIC, RTE_SYSFRICLRNG_APPL_VAR) FricOffsOutpDi_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, SysFricLrng_CODE) InitFricLrngTbl_Oper(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(void, SysFricLrng_CODE) SetFricData_Oper(float32 FricOffs_Arg, P2CONST(float32, AUTOMATIC, RTE_SYSFRICLRNG_APPL_DATA) BasLineFric_Arg, P2CONST(float32, AUTOMATIC, RTE_SYSFRICLRNG_APPL_DATA) VehLrndFric_Arg, P2CONST(float32, AUTOMATIC, RTE_SYSFRICLRNG_APPL_DATA) Hys_Arg, P2CONST(uint16, AUTOMATIC, RTE_SYSFRICLRNG_APPL_DATA) RngCntr_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(void, SysFricLrng_CODE) SetFricData_Oper(float32 FricOffs_Arg, P2CONST(Ary1D_f32_4, AUTOMATIC, RTE_SYSFRICLRNG_APPL_DATA) BasLineFric_Arg, P2CONST(Ary1D_f32_4, AUTOMATIC, RTE_SYSFRICLRNG_APPL_DATA) VehLrndFric_Arg, P2CONST(Ary2D_f32_8_4, AUTOMATIC, RTE_SYSFRICLRNG_APPL_DATA) Hys_Arg, P2CONST(Ary2D_u16_8_3, AUTOMATIC, RTE_SYSFRICLRNG_APPL_DATA) RngCntr_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
FUNC(void, SysFricLrng_CODE) SetFricLrngData_Oper(boolean FricLrngEna_Arg, boolean FricLrngOffsOutpEna_Arg, SysFricLrngOperMod1 FricLrngOperMod_Arg, float32 EolFric_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, SysFricLrng_CODE) SetFricOffsOutpDi_Oper(boolean FricOffsOutpDi_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, SysFricLrng_CODE) SysFricLrngInit1(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(void, SysFricLrng_CODE) SysFricLrngPer1(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */

# define SysFricLrng_STOP_SEC_CODE
# include "SysFricLrng_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Application errors
 *********************************************************************************************************************/

#  define RTE_E_GetNtcQlfrSts_PortIf1_E_NOT_OK (1U)

#  define RTE_E_NvMService_AC3_SRBS_Defs_E_NOT_OK (1U)

#  define RTE_E_SetNtcSts_PortIf1_E_NOT_OK (1U)
# endif /* !defined(RTE_CORE) */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_SYSFRICLRNG_H */

/**********************************************************************************************************************
 MISRA 2004 violations and justifications
 *********************************************************************************************************************/

/* module specific MISRA deviations:
   MD_Rte_3451:  MISRA rule: 8.8
     Reason:     Schedulable entities are declared by the RTE and also by the BSW modules.
     Risk:       No functional risk.
     Prevention: Not required.

*/
