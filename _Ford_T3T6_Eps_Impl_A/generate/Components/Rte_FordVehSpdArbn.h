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
 *          File:  Rte_FordVehSpdArbn.h
 *        Config:  EPS.dpa
 *   ECU-Project:  PSCM_FD
 *
 *     Generator:  MICROSAR RTE Generator Version 4.13.0
 *                 RTE Core Version 1.13.0
 *       License:  Unlimited license CBD1601056 for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <FordVehSpdArbn>
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_FORDVEHSPDARBN_H
# define _RTE_FORDVEHSPDARBN_H

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

# include "Rte_FordVehSpdArbn_Type.h"
# include "Rte_DataHandleType.h"

# ifndef RTE_CORE

/**********************************************************************************************************************
 * extern declaration of RTE buffers for optimized macro implementation
 *********************************************************************************************************************/
#  define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(float32, RTE_VAR_INIT) Rte_FordVehSpdArbn_FordVehSpd_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_FordVehSpdArbn_FordVehSpdLoQly_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_FordVehSpdArbn_FordVehSpdLoQlyVld_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_FordVehSpdArbn_FordVehSpdVld_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CustDiag_FordAbsPrsnt_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CustDiag_FordEscPrsnt_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_FordMsg217BusHiSpd_FordVehFrntLeWhlSpd_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_FordMsg217BusHiSpd_FordVehFrntLeWhlSpdVld_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_FordMsg217BusHiSpd_FordVehFrntRiWhlSpd_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_FordMsg217BusHiSpd_FordVehFrntRiWhlSpdVld_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_FordMsg217BusHiSpd_FordVehReLeWhlSpd_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_FordMsg217BusHiSpd_FordVehReLeWhlSpdVld_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_FordMsg217BusHiSpd_FordVehReRiWhlSpd_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_FordMsg217BusHiSpd_FordVehReRiWhlSpdVld_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_FordMsg415BusHiSpd_FordVehSpdBrkModl_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_FordMsg415BusHiSpd_FordVehSpdBrkModlLoQlyVld_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_FordMsg415BusHiSpd_FordVehSpdBrkModlVld_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_FordMsg202BusHiSpd_FordVehSpdEngModl_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_FordMsg202BusHiSpd_FordVehSpdEngModLoQlyVld_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_FordMsg202BusHiSpd_FordVehSpdEngModlVld_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_FordMsg40ABusHiSpd_FordVehTireCircum_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#  define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# endif /* !defined(RTE_CORE) */


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

#  define Rte_InitValue_FordAbsModlPrsnt_Logl (FALSE)
#  define Rte_InitValue_FordEscModlPrsnt_Logl (FALSE)
#  define Rte_InitValue_FordVehFrntLeWhlSpd_Val (0.0F)
#  define Rte_InitValue_FordVehFrntLeWhlSpdVld_Logl (FALSE)
#  define Rte_InitValue_FordVehFrntRiWhlSpd_Val (0.0F)
#  define Rte_InitValue_FordVehFrntRiWhlSpdVld_Logl (FALSE)
#  define Rte_InitValue_FordVehReLeWhlSpd_Val (0.0F)
#  define Rte_InitValue_FordVehReLeWhlSpdVld_Logl (FALSE)
#  define Rte_InitValue_FordVehReRiWhlSpd_Val (0.0F)
#  define Rte_InitValue_FordVehReRiWhlSpdVld_Logl (FALSE)
#  define Rte_InitValue_FordVehSpd_Val (0.0F)
#  define Rte_InitValue_FordVehSpdBrkModl_Val (0.0F)
#  define Rte_InitValue_FordVehSpdBrkModlLoQlyVld_Logl (FALSE)
#  define Rte_InitValue_FordVehSpdBrkModlVld_Logl (FALSE)
#  define Rte_InitValue_FordVehSpdEngModl_Val (0.0F)
#  define Rte_InitValue_FordVehSpdEngModlLoQlyVld_Logl (FALSE)
#  define Rte_InitValue_FordVehSpdEngModlVld_Logl (FALSE)
#  define Rte_InitValue_FordVehSpdLoQly_Val (0.0F)
#  define Rte_InitValue_FordVehSpdLoQlyVld_Logl (FALSE)
#  define Rte_InitValue_FordVehSpdVld_Logl (FALSE)
#  define Rte_InitValue_FordVehTireCircumIn_Val (0.0F)
# endif


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Buffers for inter-runnable variables
 *********************************************************************************************************************/

#  define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(uint16, RTE_VAR_INIT) Rte_Irv_FordVehSpdArbn_FordVehArbnTireCircum; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#  define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
# endif /* !defined(RTE_CORE) */


# ifndef RTE_CORE

/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Read_FordAbsModlPrsnt_Logl Rte_Read_FordVehSpdArbn_FordAbsModlPrsnt_Logl
#  define Rte_Read_FordVehSpdArbn_FordAbsModlPrsnt_Logl(data) (*(data) = Rte_CustDiag_FordAbsPrsnt_Logl, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordEscModlPrsnt_Logl Rte_Read_FordVehSpdArbn_FordEscModlPrsnt_Logl
#  define Rte_Read_FordVehSpdArbn_FordEscModlPrsnt_Logl(data) (*(data) = Rte_CustDiag_FordEscPrsnt_Logl, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordVehFrntLeWhlSpd_Val Rte_Read_FordVehSpdArbn_FordVehFrntLeWhlSpd_Val
#  define Rte_Read_FordVehSpdArbn_FordVehFrntLeWhlSpd_Val(data) (*(data) = Rte_FordMsg217BusHiSpd_FordVehFrntLeWhlSpd_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordVehFrntLeWhlSpdVld_Logl Rte_Read_FordVehSpdArbn_FordVehFrntLeWhlSpdVld_Logl
#  define Rte_Read_FordVehSpdArbn_FordVehFrntLeWhlSpdVld_Logl(data) (*(data) = Rte_FordMsg217BusHiSpd_FordVehFrntLeWhlSpdVld_Logl, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordVehFrntRiWhlSpd_Val Rte_Read_FordVehSpdArbn_FordVehFrntRiWhlSpd_Val
#  define Rte_Read_FordVehSpdArbn_FordVehFrntRiWhlSpd_Val(data) (*(data) = Rte_FordMsg217BusHiSpd_FordVehFrntRiWhlSpd_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordVehFrntRiWhlSpdVld_Logl Rte_Read_FordVehSpdArbn_FordVehFrntRiWhlSpdVld_Logl
#  define Rte_Read_FordVehSpdArbn_FordVehFrntRiWhlSpdVld_Logl(data) (*(data) = Rte_FordMsg217BusHiSpd_FordVehFrntRiWhlSpdVld_Logl, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordVehReLeWhlSpd_Val Rte_Read_FordVehSpdArbn_FordVehReLeWhlSpd_Val
#  define Rte_Read_FordVehSpdArbn_FordVehReLeWhlSpd_Val(data) (*(data) = Rte_FordMsg217BusHiSpd_FordVehReLeWhlSpd_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordVehReLeWhlSpdVld_Logl Rte_Read_FordVehSpdArbn_FordVehReLeWhlSpdVld_Logl
#  define Rte_Read_FordVehSpdArbn_FordVehReLeWhlSpdVld_Logl(data) (*(data) = Rte_FordMsg217BusHiSpd_FordVehReLeWhlSpdVld_Logl, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordVehReRiWhlSpd_Val Rte_Read_FordVehSpdArbn_FordVehReRiWhlSpd_Val
#  define Rte_Read_FordVehSpdArbn_FordVehReRiWhlSpd_Val(data) (*(data) = Rte_FordMsg217BusHiSpd_FordVehReRiWhlSpd_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordVehReRiWhlSpdVld_Logl Rte_Read_FordVehSpdArbn_FordVehReRiWhlSpdVld_Logl
#  define Rte_Read_FordVehSpdArbn_FordVehReRiWhlSpdVld_Logl(data) (*(data) = Rte_FordMsg217BusHiSpd_FordVehReRiWhlSpdVld_Logl, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordVehSpdBrkModl_Val Rte_Read_FordVehSpdArbn_FordVehSpdBrkModl_Val
#  define Rte_Read_FordVehSpdArbn_FordVehSpdBrkModl_Val(data) (*(data) = Rte_FordMsg415BusHiSpd_FordVehSpdBrkModl_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordVehSpdBrkModlLoQlyVld_Logl Rte_Read_FordVehSpdArbn_FordVehSpdBrkModlLoQlyVld_Logl
#  define Rte_Read_FordVehSpdArbn_FordVehSpdBrkModlLoQlyVld_Logl(data) (*(data) = Rte_FordMsg415BusHiSpd_FordVehSpdBrkModlLoQlyVld_Logl, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordVehSpdBrkModlVld_Logl Rte_Read_FordVehSpdArbn_FordVehSpdBrkModlVld_Logl
#  define Rte_Read_FordVehSpdArbn_FordVehSpdBrkModlVld_Logl(data) (*(data) = Rte_FordMsg415BusHiSpd_FordVehSpdBrkModlVld_Logl, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordVehSpdEngModl_Val Rte_Read_FordVehSpdArbn_FordVehSpdEngModl_Val
#  define Rte_Read_FordVehSpdArbn_FordVehSpdEngModl_Val(data) (*(data) = Rte_FordMsg202BusHiSpd_FordVehSpdEngModl_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordVehSpdEngModlLoQlyVld_Logl Rte_Read_FordVehSpdArbn_FordVehSpdEngModlLoQlyVld_Logl
#  define Rte_Read_FordVehSpdArbn_FordVehSpdEngModlLoQlyVld_Logl(data) (*(data) = Rte_FordMsg202BusHiSpd_FordVehSpdEngModLoQlyVld_Logl, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordVehSpdEngModlVld_Logl Rte_Read_FordVehSpdArbn_FordVehSpdEngModlVld_Logl
#  define Rte_Read_FordVehSpdArbn_FordVehSpdEngModlVld_Logl(data) (*(data) = Rte_FordMsg202BusHiSpd_FordVehSpdEngModlVld_Logl, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordVehTireCircumIn_Val Rte_Read_FordVehSpdArbn_FordVehTireCircumIn_Val
#  define Rte_Read_FordVehSpdArbn_FordVehTireCircumIn_Val(data) (*(data) = Rte_FordMsg40ABusHiSpd_FordVehTireCircum_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Write_FordVehSpd_Val Rte_Write_FordVehSpdArbn_FordVehSpd_Val
#  define Rte_Write_FordVehSpdArbn_FordVehSpd_Val(data) (Rte_FordVehSpdArbn_FordVehSpd_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_FordVehSpdLoQly_Val Rte_Write_FordVehSpdArbn_FordVehSpdLoQly_Val
#  define Rte_Write_FordVehSpdArbn_FordVehSpdLoQly_Val(data) (Rte_FordVehSpdArbn_FordVehSpdLoQly_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_FordVehSpdLoQlyVld_Logl Rte_Write_FordVehSpdArbn_FordVehSpdLoQlyVld_Logl
#  define Rte_Write_FordVehSpdArbn_FordVehSpdLoQlyVld_Logl(data) (Rte_FordVehSpdArbn_FordVehSpdLoQlyVld_Logl = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_FordVehSpdVld_Logl Rte_Write_FordVehSpdArbn_FordVehSpdVld_Logl
#  define Rte_Write_FordVehSpdArbn_FordVehSpdVld_Logl(data) (Rte_FordVehSpdArbn_FordVehSpdVld_Logl = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */


/**********************************************************************************************************************
 * Rte_Call_<p>_<o> (unmapped) for synchronous C/S communication
 *********************************************************************************************************************/
#  define RTE_START_SEC_NVMPROXY_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(Std_ReturnType, RTE_NVMPROXY_APPL_CODE) NvMProxy_GetErrorStatus(NvM_BlockIdType parg0, P2VAR(NvM_RequestResultType, AUTOMATIC, RTE_NVMPROXY_APPL_VAR) ErrorStatus_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_NVMPROXY_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_FordVehTireCircum_GetErrorStatus(arg1) (NvMProxy_GetErrorStatus((NvM_BlockIdType)41, arg1)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define RTE_START_SEC_NVMPROXY_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(Std_ReturnType, RTE_NVMPROXY_APPL_CODE) NvMProxy_SetRamBlockStatus(NvM_BlockIdType parg0, boolean RamBlockStatus_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_NVMPROXY_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_FordVehTireCircum_SetRamBlockStatus(arg1) (NvMProxy_SetRamBlockStatus((NvM_BlockIdType)41, arg1)) /* PRQA S 3453 */ /* MD_MSR_19.7 */


/**********************************************************************************************************************
 * Inter-runnable variables
 *********************************************************************************************************************/

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
#  define Rte_IrvWrite_FordVehSpdArbnInit1_FordVehArbnTireCircum(data) \
  (Rte_Irv_FordVehSpdArbn_FordVehArbnTireCircum = (data))
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
#  define Rte_IrvRead_FordVehSpdArbnPer1_FordVehArbnTireCircum() \
  Rte_Irv_FordVehSpdArbn_FordVehArbnTireCircum
/* PRQA L:L1 */


/**********************************************************************************************************************
 * Rte_Prm (Calibration component calibration parameters)
 *********************************************************************************************************************/

#  define Rte_Prm_FordVehSpdArbnTireCircumMax_Val() (((P2CONST(Rte_Calprm_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP])->FordVehSpdArbnTireCircumMax_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_FordVehSpdArbnTireCircumMin_Val() (((P2CONST(Rte_Calprm_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP])->FordVehSpdArbnTireCircumMin_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_FordVehSpdArbnDrvnWhl_Logl() (((P2CONST(Rte_Calprm_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP])->FordVehSpdArbnDrvnWhl_Logl) /* PRQA S 3453 */ /* MD_MSR_19.7 */

/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Rte_Pim (Per-Instance Memory)
 *********************************************************************************************************************/

#  ifndef RTE_MICROSAR_PIM_EXPORT
#   define RTE_START_SEC_VAR_DEFAULT_RTE_Appl10_PIM_GROUP_UNSPECIFIED
#   include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordVehSpdArbn_FordVehTireCircum; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#   define RTE_STOP_SEC_VAR_DEFAULT_RTE_Appl10_PIM_GROUP_UNSPECIFIED
#   include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  endif

#  define Rte_Pim_FordVehTireCircum() \
  (&Rte_FordVehSpdArbn_FordVehTireCircum) /* PRQA S 3453 */ /* MD_MSR_19.7 */


# endif /* !defined(RTE_CORE) */


# define FordVehSpdArbn_START_SEC_CODE
# include "FordVehSpdArbn_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * Runnable entities
 *********************************************************************************************************************/

# ifndef RTE_CORE
#  define RTE_RUNNABLE_FordVehSpdArbnInit1 FordVehSpdArbnInit1
#  define RTE_RUNNABLE_FordVehSpdArbnPer1 FordVehSpdArbnPer1
# endif

FUNC(void, FordVehSpdArbn_CODE) FordVehSpdArbnInit1(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(void, FordVehSpdArbn_CODE) FordVehSpdArbnPer1(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */

# define FordVehSpdArbn_STOP_SEC_CODE
# include "FordVehSpdArbn_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Application errors
 *********************************************************************************************************************/

#  define RTE_E_NvMService_AC3_SRBS_E_NOT_OK (1U)
# endif /* !defined(RTE_CORE) */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_FORDVEHSPDARBN_H */

/**********************************************************************************************************************
 MISRA 2004 violations and justifications
 *********************************************************************************************************************/

/* module specific MISRA deviations:
   MD_Rte_3451:  MISRA rule: 8.8
     Reason:     Schedulable entities are declared by the RTE and also by the BSW modules.
     Risk:       No functional risk.
     Prevention: Not required.

*/
