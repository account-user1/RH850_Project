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
 *          File:  Rte_CDD_FordBlaBoxIfCmp2.h
 *        Config:  EPS.dpa
 *   ECU-Project:  PSCM_FD
 *
 *     Generator:  MICROSAR RTE Generator Version 4.13.0
 *                 RTE Core Version 1.13.0
 *       License:  Unlimited license CBD1601056 for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <CDD_FordBlaBoxIfCmp2>
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_CDD_FORDBLABOXIFCMP2_H
# define _RTE_CDD_FORDBLABOXIFCMP2_H

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

# include "Rte_CDD_FordBlaBoxIfCmp2_Type.h"
# include "Rte_DataHandleType.h"

# ifndef RTE_CORE

/**********************************************************************************************************************
 * extern declaration of RTE buffers for optimized macro implementation
 *********************************************************************************************************************/
#  define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(uint16, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmp2_FordBrkPlsRednActvnCntr_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FordFeatSt1, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmp2_FordEvasSteerAssiFeatSt_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmp2_FordEvasSteerAssiIntSts_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmp2_FordEvasSteerAssiSwVers_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmp2_FordEvasSteerAssiTqReq_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FordFeatSt1, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmp2_FordSteerTqDstbcRejctnFeatSt_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmp2_FordSteerTqDstbcRejctnIntSts_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmp2_FordSteerTqDstbcRejctnSwVers_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmp2_FordSteerTqDstbcRejctnTqReq_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmp2_FordTqSteerCmpActvnCntr_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ford_EsaOn_B_Stat, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmp2_FordVehEvasSteerAssiSts_Ford_EsaOn_B_Stat; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_DualEcuIdn_EcuId_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FordArbnCmd1, RTE_VAR_INIT) Rte_FordCmdArbn_FordEvasSteerAssiArbnCmd_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FordArbnCmd1, RTE_VAR_INIT) Rte_FordCmdArbn_FordSteerTqDstbcRejctnArbnCmd_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmp2_FordWrSrvBrkPlsRednActvnCntr_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmp2_FordWrSrvEvasSteerAssiIntSts_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmp2_FordWrSrvSteerTqDstbcRejctnIntSts_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmp2_FordWrSrvTqSteerCmpActvnCntr_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#  define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# endif /* !defined(RTE_CORE) */


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

#  define Rte_InitValue_EcuId_Val (0U)
#  define Rte_InitValue_FordBrkPlsRednActvnCntr_Val (0U)
#  define Rte_InitValue_FordEvasSteerAssiArbnCmd_Val (0U)
#  define Rte_InitValue_FordEvasSteerAssiFeatSt_Val (0U)
#  define Rte_InitValue_FordEvasSteerAssiIntSts_Val (0U)
#  define Rte_InitValue_FordEvasSteerAssiSwVers_Val (0U)
#  define Rte_InitValue_FordSteerTqDstbcRejctnArbnCmd_Val (0U)
#  define Rte_InitValue_FordSteerTqDstbcRejctnFeatSt_Val (0U)
#  define Rte_InitValue_FordSteerTqDstbcRejctnIntSts_Val (0U)
#  define Rte_InitValue_FordSteerTqDstbcRejctnSwVers_Val (0U)
#  define Rte_InitValue_FordSteerTqDstbcRejctnTqReq_Val (0.0F)
#  define Rte_InitValue_FordTqSteerCmpActvnCntr_Val (0U)
#  define Rte_InitValue_FordWrSrvBrkPlsRednActvnCntr_Val (0U)
#  define Rte_InitValue_FordWrSrvEvasSteerAssiIntSts_Val (0U)
#  define Rte_InitValue_FordWrSrvSteerTqDstbcRejctnIntSts_Val (0U)
#  define Rte_InitValue_FordWrSrvTqSteerCmpActvnCntr_Val (0U)
# endif


# ifndef RTE_CORE

/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Read_EcuId_Val Rte_Read_CDD_FordBlaBoxIfCmp2_EcuId_Val
#  define Rte_Read_CDD_FordBlaBoxIfCmp2_EcuId_Val(data) (*(data) = Rte_DualEcuIdn_EcuId_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordEvasSteerAssiArbnCmd_Val Rte_Read_CDD_FordBlaBoxIfCmp2_FordEvasSteerAssiArbnCmd_Val
#  define Rte_Read_CDD_FordBlaBoxIfCmp2_FordEvasSteerAssiArbnCmd_Val(data) (*(data) = Rte_FordCmdArbn_FordEvasSteerAssiArbnCmd_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordSteerTqDstbcRejctnArbnCmd_Val Rte_Read_CDD_FordBlaBoxIfCmp2_FordSteerTqDstbcRejctnArbnCmd_Val
#  define Rte_Read_CDD_FordBlaBoxIfCmp2_FordSteerTqDstbcRejctnArbnCmd_Val(data) (*(data) = Rte_FordCmdArbn_FordSteerTqDstbcRejctnArbnCmd_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordWrSrvBrkPlsRednActvnCntr_Val Rte_Read_CDD_FordBlaBoxIfCmp2_FordWrSrvBrkPlsRednActvnCntr_Val
#  define Rte_Read_CDD_FordBlaBoxIfCmp2_FordWrSrvBrkPlsRednActvnCntr_Val(data) (*(data) = Rte_CDD_FordBlaBoxIfCmp2_FordWrSrvBrkPlsRednActvnCntr_Val, ((Std_ReturnType)RTE_E_UNCONNECTED)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordWrSrvEvasSteerAssiIntSts_Val Rte_Read_CDD_FordBlaBoxIfCmp2_FordWrSrvEvasSteerAssiIntSts_Val
#  define Rte_Read_CDD_FordBlaBoxIfCmp2_FordWrSrvEvasSteerAssiIntSts_Val(data) (*(data) = Rte_CDD_FordBlaBoxIfCmp2_FordWrSrvEvasSteerAssiIntSts_Val, ((Std_ReturnType)RTE_E_UNCONNECTED)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordWrSrvSteerTqDstbcRejctnIntSts_Val Rte_Read_CDD_FordBlaBoxIfCmp2_FordWrSrvSteerTqDstbcRejctnIntSts_Val
#  define Rte_Read_CDD_FordBlaBoxIfCmp2_FordWrSrvSteerTqDstbcRejctnIntSts_Val(data) (*(data) = Rte_CDD_FordBlaBoxIfCmp2_FordWrSrvSteerTqDstbcRejctnIntSts_Val, ((Std_ReturnType)RTE_E_UNCONNECTED)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordWrSrvTqSteerCmpActvnCntr_Val Rte_Read_CDD_FordBlaBoxIfCmp2_FordWrSrvTqSteerCmpActvnCntr_Val
#  define Rte_Read_CDD_FordBlaBoxIfCmp2_FordWrSrvTqSteerCmpActvnCntr_Val(data) (*(data) = Rte_CDD_FordBlaBoxIfCmp2_FordWrSrvTqSteerCmpActvnCntr_Val, ((Std_ReturnType)RTE_E_UNCONNECTED)) /* PRQA S 3453 */ /* MD_MSR_19.7 */


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Write_FordBrkPlsRednActvnCntr_Val Rte_Write_CDD_FordBlaBoxIfCmp2_FordBrkPlsRednActvnCntr_Val
#  define Rte_Write_CDD_FordBlaBoxIfCmp2_FordBrkPlsRednActvnCntr_Val(data) (Rte_CDD_FordBlaBoxIfCmp2_FordBrkPlsRednActvnCntr_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_FordEvasSteerAssiFeatSt_Val Rte_Write_CDD_FordBlaBoxIfCmp2_FordEvasSteerAssiFeatSt_Val
#  define Rte_Write_CDD_FordBlaBoxIfCmp2_FordEvasSteerAssiFeatSt_Val(data) (Rte_CDD_FordBlaBoxIfCmp2_FordEvasSteerAssiFeatSt_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_FordEvasSteerAssiIntSts_Val Rte_Write_CDD_FordBlaBoxIfCmp2_FordEvasSteerAssiIntSts_Val
#  define Rte_Write_CDD_FordBlaBoxIfCmp2_FordEvasSteerAssiIntSts_Val(data) (Rte_CDD_FordBlaBoxIfCmp2_FordEvasSteerAssiIntSts_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_FordEvasSteerAssiSwVers_Val Rte_Write_CDD_FordBlaBoxIfCmp2_FordEvasSteerAssiSwVers_Val
#  define Rte_Write_CDD_FordBlaBoxIfCmp2_FordEvasSteerAssiSwVers_Val(data) (Rte_CDD_FordBlaBoxIfCmp2_FordEvasSteerAssiSwVers_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_FordEvasSteerAssiTqReq_Val Rte_Write_CDD_FordBlaBoxIfCmp2_FordEvasSteerAssiTqReq_Val
#  define Rte_Write_CDD_FordBlaBoxIfCmp2_FordEvasSteerAssiTqReq_Val(data) (Rte_CDD_FordBlaBoxIfCmp2_FordEvasSteerAssiTqReq_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_FordSteerTqDstbcRejctnFeatSt_Val Rte_Write_CDD_FordBlaBoxIfCmp2_FordSteerTqDstbcRejctnFeatSt_Val
#  define Rte_Write_CDD_FordBlaBoxIfCmp2_FordSteerTqDstbcRejctnFeatSt_Val(data) (Rte_CDD_FordBlaBoxIfCmp2_FordSteerTqDstbcRejctnFeatSt_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_FordSteerTqDstbcRejctnIntSts_Val Rte_Write_CDD_FordBlaBoxIfCmp2_FordSteerTqDstbcRejctnIntSts_Val
#  define Rte_Write_CDD_FordBlaBoxIfCmp2_FordSteerTqDstbcRejctnIntSts_Val(data) (Rte_CDD_FordBlaBoxIfCmp2_FordSteerTqDstbcRejctnIntSts_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_FordSteerTqDstbcRejctnSwVers_Val Rte_Write_CDD_FordBlaBoxIfCmp2_FordSteerTqDstbcRejctnSwVers_Val
#  define Rte_Write_CDD_FordBlaBoxIfCmp2_FordSteerTqDstbcRejctnSwVers_Val(data) (Rte_CDD_FordBlaBoxIfCmp2_FordSteerTqDstbcRejctnSwVers_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_FordSteerTqDstbcRejctnTqReq_Val Rte_Write_CDD_FordBlaBoxIfCmp2_FordSteerTqDstbcRejctnTqReq_Val
#  define Rte_Write_CDD_FordBlaBoxIfCmp2_FordSteerTqDstbcRejctnTqReq_Val(data) (Rte_CDD_FordBlaBoxIfCmp2_FordSteerTqDstbcRejctnTqReq_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_FordTqSteerCmpActvnCntr_Val Rte_Write_CDD_FordBlaBoxIfCmp2_FordTqSteerCmpActvnCntr_Val
#  define Rte_Write_CDD_FordBlaBoxIfCmp2_FordTqSteerCmpActvnCntr_Val(data) (Rte_CDD_FordBlaBoxIfCmp2_FordTqSteerCmpActvnCntr_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_FordVehEvasSteerAssiSts_Ford_EsaOn_B_Stat Rte_Write_CDD_FordBlaBoxIfCmp2_FordVehEvasSteerAssiSts_Ford_EsaOn_B_Stat
#  define Rte_Write_CDD_FordBlaBoxIfCmp2_FordVehEvasSteerAssiSts_Ford_EsaOn_B_Stat(data) (Rte_CDD_FordBlaBoxIfCmp2_FordVehEvasSteerAssiSts_Ford_EsaOn_B_Stat = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */


/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Rte_Pim (Per-Instance Memory)
 *********************************************************************************************************************/

#  ifndef RTE_MICROSAR_PIM_EXPORT
#   define RTE_START_SEC_VAR_DEFAULT_RTE_Appl10_PIM_GROUP_UNSPECIFIED
#   include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_FordBlaBoxIfCmp2_EvasSteerAssiFctCallTog; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#   define RTE_STOP_SEC_VAR_DEFAULT_RTE_Appl10_PIM_GROUP_UNSPECIFIED
#   include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  endif

#  define Rte_Pim_EvasSteerAssiFctCallTog() \
  (&Rte_CDD_FordBlaBoxIfCmp2_EvasSteerAssiFctCallTog) /* PRQA S 3453 */ /* MD_MSR_19.7 */


# endif /* !defined(RTE_CORE) */


# define CDD_FordBlaBoxIfCmp2_START_SEC_CODE
# include "CDD_FordBlaBoxIfCmp2_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * Runnable entities
 *********************************************************************************************************************/

# ifndef RTE_CORE
#  define RTE_RUNNABLE_FordBlaBoxIfCmp2Init1 FordBlaBoxIfCmp2Init1
#  define RTE_RUNNABLE_FordBlaBoxIfCmp2Per1 FordBlaBoxIfCmp2Per1
# endif

FUNC(void, CDD_FordBlaBoxIfCmp2_CODE) FordBlaBoxIfCmp2Init1(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(void, CDD_FordBlaBoxIfCmp2_CODE) FordBlaBoxIfCmp2Per1(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */

# define CDD_FordBlaBoxIfCmp2_STOP_SEC_CODE
# include "CDD_FordBlaBoxIfCmp2_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_CDD_FORDBLABOXIFCMP2_H */

/**********************************************************************************************************************
 MISRA 2004 violations and justifications
 *********************************************************************************************************************/

/* module specific MISRA deviations:
   MD_Rte_3451:  MISRA rule: 8.8
     Reason:     Schedulable entities are declared by the RTE and also by the BSW modules.
     Risk:       No functional risk.
     Prevention: Not required.

*/
