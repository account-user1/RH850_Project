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
 *          File:  Rte_CDD_MotVel.h
 *        Config:  EPS.dpa
 *   ECU-Project:  PSCM_FD
 *
 *     Generator:  MICROSAR RTE Generator Version 4.13.0
 *                 RTE Core Version 1.13.0
 *       License:  Unlimited license CBD1601056 for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <CDD_MotVel>
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_CDD_MOTVEL_H
# define _RTE_CDD_MOTVEL_H

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

# include "Rte_CDD_MotVel_Type.h"
# include "Rte_DataHandleType.h"

# ifndef RTE_CORE

/**********************************************************************************************************************
 * extern declaration of RTE buffers for optimized macro implementation
 *********************************************************************************************************************/
#  define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(float32, RTE_VAR_INIT) Rte_CDD_MotVel_MotVelCrf_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_CDD_MotVel_MotVelMrf_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CDD_MotVel_MotVelVld_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(sint8, RTE_VAR_INIT) Rte_PolarityCfg_AssiMechPolarity_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CDD_MotCtrlMgr_MotAgBufIdx_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_MotAgCorrln_MotAgMeclIdptSig_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#  define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# endif /* !defined(RTE_CORE) */


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

#  define Rte_InitValue_AssiMechPolarity_Val (1)
#  define Rte_InitValue_MotAgBufIdx_Val (0U)
#  define Rte_InitValue_MotAgMeclIdptSig_Val (3U)
#  define Rte_InitValue_MotVelCrf_Val (0.0F)
#  define Rte_InitValue_MotVelMrf_Val (0.0F)
#  define Rte_InitValue_MotVelVld_Logl (TRUE)
# endif


# define RTE_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_MotVel_MotAgBuf_Ary1D(P2VAR(u0p16, AUTOMATIC, RTE_CDD_MOTVEL_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_MotVel_MotAgBuf_Ary1D(P2VAR(Ary1D_u0p16_8, AUTOMATIC, RTE_CDD_MOTVEL_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_MotVel_MotAgTiBuf_Ary1D(P2VAR(uint32, AUTOMATIC, RTE_CDD_MOTVEL_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_MotVel_MotAgTiBuf_Ary1D(P2VAR(Ary1D_u32_8, AUTOMATIC, RTE_CDD_MOTVEL_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif

# define RTE_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# ifndef RTE_CORE

/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Read_AssiMechPolarity_Val Rte_Read_CDD_MotVel_AssiMechPolarity_Val
#  define Rte_Read_CDD_MotVel_AssiMechPolarity_Val(data) (*(data) = Rte_PolarityCfg_AssiMechPolarity_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_MotAgBuf_Ary1D Rte_Read_CDD_MotVel_MotAgBuf_Ary1D
#  define Rte_Read_MotAgBufIdx_Val Rte_Read_CDD_MotVel_MotAgBufIdx_Val
#  define Rte_Read_CDD_MotVel_MotAgBufIdx_Val(data) (*(data) = Rte_CDD_MotCtrlMgr_MotAgBufIdx_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_MotAgMeclIdptSig_Val Rte_Read_CDD_MotVel_MotAgMeclIdptSig_Val
#  define Rte_Read_CDD_MotVel_MotAgMeclIdptSig_Val(data) (*(data) = Rte_MotAgCorrln_MotAgMeclIdptSig_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_MotAgTiBuf_Ary1D Rte_Read_CDD_MotVel_MotAgTiBuf_Ary1D


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Write_MotVelCrf_Val Rte_Write_CDD_MotVel_MotVelCrf_Val
#  define Rte_Write_CDD_MotVel_MotVelCrf_Val(data) (Rte_CDD_MotVel_MotVelCrf_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_MotVelMrf_Val Rte_Write_CDD_MotVel_MotVelMrf_Val
#  define Rte_Write_CDD_MotVel_MotVelMrf_Val(data) (Rte_CDD_MotVel_MotVelMrf_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_MotVelVld_Logl Rte_Write_CDD_MotVel_MotVelVld_Logl
#  define Rte_Write_CDD_MotVel_MotVelVld_Logl(data) (Rte_CDD_MotVel_MotVelVld_Logl = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */


/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Rte_Pim (Per-Instance Memory)
 *********************************************************************************************************************/

#  ifndef RTE_MICROSAR_PIM_EXPORT
#   define RTE_START_SEC_VAR_DEFAULT_RTE_Appl10_PIM_GROUP_UNSPECIFIED
#   include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotVel_dMotVelAvrgTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotVel_dMotVelTiStampRef; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(u0p16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotVel_dMotVelMotAgRef; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotVel_MotAgBufIdxPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotVel_MotAgBufIdxPrim; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotVel_MotVelIninCntr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary1D_u0p16_8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotVel_MotAgBufPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary1D_u32_8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotVel_MotAgTiBufPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#   define RTE_STOP_SEC_VAR_DEFAULT_RTE_Appl10_PIM_GROUP_UNSPECIFIED
#   include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  endif

#  define Rte_Pim_dMotVelAvrgTi() \
  (&Rte_CDD_MotVel_dMotVelAvrgTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_dMotVelTiStampRef() \
  (&Rte_CDD_MotVel_dMotVelTiStampRef) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_dMotVelMotAgRef() \
  (&Rte_CDD_MotVel_dMotVelMotAgRef) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_MotAgBufIdxPrev() \
  (&Rte_CDD_MotVel_MotAgBufIdxPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_MotAgBufIdxPrim() \
  (&Rte_CDD_MotVel_MotAgBufIdxPrim) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_MotVelIninCntr() \
  (&Rte_CDD_MotVel_MotVelIninCntr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Pim_MotAgBufPrev() (&((*RtePim_MotAgBufPrev())[0]))
#  else
#   define Rte_Pim_MotAgBufPrev() RtePim_MotAgBufPrev()
#  endif
#  define RtePim_MotAgBufPrev() \
  (&Rte_CDD_MotVel_MotAgBufPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Pim_MotAgTiBufPrev() (&((*RtePim_MotAgTiBufPrev())[0]))
#  else
#   define Rte_Pim_MotAgTiBufPrev() RtePim_MotAgTiBufPrev()
#  endif
#  define RtePim_MotAgTiBufPrev() \
  (&Rte_CDD_MotVel_MotAgTiBufPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */


# endif /* !defined(RTE_CORE) */


# define CDD_MotVel_START_SEC_CODE
# include "CDD_MotVel_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * Runnable entities
 *********************************************************************************************************************/

# ifndef RTE_CORE
#  define RTE_RUNNABLE_MotVelInit1 MotVelInit1
#  define RTE_RUNNABLE_MotVelPer2 MotVelPer2
# endif

FUNC(void, CDD_MotVel_CODE) MotVelInit1(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(void, CDD_MotVel_CODE) MotVelPer2(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */

# define CDD_MotVel_STOP_SEC_CODE
# include "CDD_MotVel_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_CDD_MOTVEL_H */

/**********************************************************************************************************************
 MISRA 2004 violations and justifications
 *********************************************************************************************************************/

/* module specific MISRA deviations:
   MD_Rte_3451:  MISRA rule: 8.8
     Reason:     Schedulable entities are declared by the RTE and also by the BSW modules.
     Risk:       No functional risk.
     Prevention: Not required.

*/
