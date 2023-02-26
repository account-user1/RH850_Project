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
 *          File:  Rte_FordMsg07EBusHiSpd.h
 *        Config:  EPS.dpa
 *   ECU-Project:  PSCM_FD
 *
 *     Generator:  MICROSAR RTE Generator Version 4.13.0
 *                 RTE Core Version 1.13.0
 *       License:  Unlimited license CBD1601056 for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <FordMsg07EBusHiSpd>
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_FORDMSG07EBUSHISPD_H
# define _RTE_FORDMSG07EBUSHISPD_H

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

# include "Rte_FordMsg07EBusHiSpd_Type.h"
# include "Rte_DataHandleType.h"

# ifndef RTE_CORE

/**********************************************************************************************************************
 * extern declaration of RTE buffers for optimized macro implementation
 *********************************************************************************************************************/
#  define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(float32, RTE_VAR_INIT) Rte_FordHwAgArbn_FordCmpdHwPosntoSerlCom_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ford_StePinCompAnEst_D_Qf, RTE_VAR_INIT) Rte_FordHwAgArbn_FordCmpdHwPosnQlyFac_Ford_StePinCompAnEst_D_Qf; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ford_StePw_B_Rq, RTE_VAR_INIT) Rte_FordMsg07EBusHiSpd_FordVehSteerPwrReq_Ford_StePw_B_Rq; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_FordHwAgArbn_FordRelHwPosntoSerlCom_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#  define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# endif /* !defined(RTE_CORE) */


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

#  define Rte_InitValue_CmpdSteerPinionAg_Val (0.0F)
#  define Rte_InitValue_CmpdSteerPinionAgQlyFac_Ford_StePinCompAnEst_D_Qf (1U)
#  define Rte_InitValue_FordVehSteerPwrReq_Ford_StePw_B_Rq (FALSE)
#  define Rte_InitValue_Ford_StePinAn_No_Cnt_Ford_StePinAn_No_Cnt (0U)
#  define Rte_InitValue_Ford_StePinAn_No_Cs_Ford_StePinAn_No_Cs (0U)
#  define Rte_InitValue_Ford_StePinCompAnEst_D_Qf_Ford_StePinCompAnEst_D_Qf (1U)
#  define Rte_InitValue_Ford_StePinComp_An_Est_Ford_StePinComp_An_Est (0U)
#  define Rte_InitValue_Ford_StePinRelInit_An_Sns_Ford_StePinRelInit_An_Sns (65535U)
#  define Rte_InitValue_Ford_StePw_B_Rq_Ford_StePw_B_Rq (FALSE)
#  define Rte_InitValue_RelSteerPinionAg_Val (3353.5F)
# endif


# define RTE_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_FordMsg07EBusHiSpd_Ford_StePinAn_No_Cnt_Ford_StePinAn_No_Cnt(Ford_StePinAn_No_Cnt data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_FordMsg07EBusHiSpd_Ford_StePinAn_No_Cs_Ford_StePinAn_No_Cs(Ford_StePinAn_No_Cs data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_FordMsg07EBusHiSpd_Ford_StePinCompAnEst_D_Qf_Ford_StePinCompAnEst_D_Qf(Ford_StePinCompAnEst_D_Qf data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_FordMsg07EBusHiSpd_Ford_StePinComp_An_Est_Ford_StePinComp_An_Est(Ford_StePinComp_An_Est data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_FordMsg07EBusHiSpd_Ford_StePinRelInit_An_Sns_Ford_StePinRelInit_An_Sns(Ford_StePinRelInit_An_Sns data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_FordMsg07EBusHiSpd_Ford_StePw_B_Rq_Ford_StePw_B_Rq(Ford_StePw_B_Rq data); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# ifndef RTE_CORE

/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Read_CmpdSteerPinionAg_Val Rte_Read_FordMsg07EBusHiSpd_CmpdSteerPinionAg_Val
#  define Rte_Read_FordMsg07EBusHiSpd_CmpdSteerPinionAg_Val(data) (*(data) = Rte_FordHwAgArbn_FordCmpdHwPosntoSerlCom_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_CmpdSteerPinionAgQlyFac_Ford_StePinCompAnEst_D_Qf Rte_Read_FordMsg07EBusHiSpd_CmpdSteerPinionAgQlyFac_Ford_StePinCompAnEst_D_Qf
#  define Rte_Read_FordMsg07EBusHiSpd_CmpdSteerPinionAgQlyFac_Ford_StePinCompAnEst_D_Qf(data) (*(data) = Rte_FordHwAgArbn_FordCmpdHwPosnQlyFac_Ford_StePinCompAnEst_D_Qf, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordVehSteerPwrReq_Ford_StePw_B_Rq Rte_Read_FordMsg07EBusHiSpd_FordVehSteerPwrReq_Ford_StePw_B_Rq
#  define Rte_Read_FordMsg07EBusHiSpd_FordVehSteerPwrReq_Ford_StePw_B_Rq(data) (*(data) = Rte_FordMsg07EBusHiSpd_FordVehSteerPwrReq_Ford_StePw_B_Rq, ((Std_ReturnType)RTE_E_UNCONNECTED)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_RelSteerPinionAg_Val Rte_Read_FordMsg07EBusHiSpd_RelSteerPinionAg_Val
#  define Rte_Read_FordMsg07EBusHiSpd_RelSteerPinionAg_Val(data) (*(data) = Rte_FordHwAgArbn_FordRelHwPosntoSerlCom_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Write_Ford_StePinAn_No_Cnt_Ford_StePinAn_No_Cnt Rte_Write_FordMsg07EBusHiSpd_Ford_StePinAn_No_Cnt_Ford_StePinAn_No_Cnt
#  define Rte_Write_Ford_StePinAn_No_Cs_Ford_StePinAn_No_Cs Rte_Write_FordMsg07EBusHiSpd_Ford_StePinAn_No_Cs_Ford_StePinAn_No_Cs
#  define Rte_Write_Ford_StePinCompAnEst_D_Qf_Ford_StePinCompAnEst_D_Qf Rte_Write_FordMsg07EBusHiSpd_Ford_StePinCompAnEst_D_Qf_Ford_StePinCompAnEst_D_Qf
#  define Rte_Write_Ford_StePinComp_An_Est_Ford_StePinComp_An_Est Rte_Write_FordMsg07EBusHiSpd_Ford_StePinComp_An_Est_Ford_StePinComp_An_Est
#  define Rte_Write_Ford_StePinRelInit_An_Sns_Ford_StePinRelInit_An_Sns Rte_Write_FordMsg07EBusHiSpd_Ford_StePinRelInit_An_Sns_Ford_StePinRelInit_An_Sns
#  define Rte_Write_Ford_StePw_B_Rq_Ford_StePw_B_Rq Rte_Write_FordMsg07EBusHiSpd_Ford_StePw_B_Rq_Ford_StePw_B_Rq


/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Rte_Pim (Per-Instance Memory)
 *********************************************************************************************************************/

#  ifndef RTE_MICROSAR_PIM_EXPORT
#   define RTE_START_SEC_VAR_DEFAULT_RTE_Appl10_PIM_GROUP_UNSPECIFIED
#   include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg07EBusHiSpd_SteerPinionAgCntrPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#   define RTE_STOP_SEC_VAR_DEFAULT_RTE_Appl10_PIM_GROUP_UNSPECIFIED
#   include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  endif

#  define Rte_Pim_SteerPinionAgCntrPrev() \
  (&Rte_FordMsg07EBusHiSpd_SteerPinionAgCntrPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */


# endif /* !defined(RTE_CORE) */


# define FordMsg07EBusHiSpd_START_SEC_CODE
# include "FordMsg07EBusHiSpd_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * Runnable entities
 *********************************************************************************************************************/

# ifndef RTE_CORE
#  define RTE_RUNNABLE_FordMsg07EBusHiSpdInit1 FordMsg07EBusHiSpdInit1
#  define RTE_RUNNABLE_FordMsg07EBusHiSpdPer1 FordMsg07EBusHiSpdPer1
# endif

FUNC(void, FordMsg07EBusHiSpd_CODE) FordMsg07EBusHiSpdInit1(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(void, FordMsg07EBusHiSpd_CODE) FordMsg07EBusHiSpdPer1(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */

# define FordMsg07EBusHiSpd_STOP_SEC_CODE
# include "FordMsg07EBusHiSpd_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_FORDMSG07EBUSHISPD_H */

/**********************************************************************************************************************
 MISRA 2004 violations and justifications
 *********************************************************************************************************************/

/* module specific MISRA deviations:
   MD_Rte_3451:  MISRA rule: 8.8
     Reason:     Schedulable entities are declared by the RTE and also by the BSW modules.
     Risk:       No functional risk.
     Prevention: Not required.

*/
