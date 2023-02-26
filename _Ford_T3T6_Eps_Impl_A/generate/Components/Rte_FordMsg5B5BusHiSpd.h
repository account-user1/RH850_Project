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
 *          File:  Rte_FordMsg5B5BusHiSpd.h
 *        Config:  EPS.dpa
 *   ECU-Project:  PSCM_FD
 *
 *     Generator:  MICROSAR RTE Generator Version 4.13.0
 *                 RTE Core Version 1.13.0
 *       License:  Unlimited license CBD1601056 for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <FordMsg5B5BusHiSpd>
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_FORDMSG5B5BUSHISPD_H
# define _RTE_FORDMSG5B5BUSHISPD_H

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

# include "Rte_FordMsg5B5BusHiSpd_Type.h"
# include "Rte_DataHandleType.h"

# ifndef RTE_CORE

/**********************************************************************************************************************
 * extern declaration of RTE buffers for optimized macro implementation
 *********************************************************************************************************************/
#  define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(uint8, RTE_VAR_INIT) Rte_FordMsg5B5BusHiSpd_Ford_PSCM_AutoSarNMControl_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_FordMsg5B5BusHiSpd_Ford_PSCM_AutoSarNMNodeId_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_FordMsg5B5BusHiSpd_Ford_PSCM_AutoSarNMReserved1_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_FordMsg5B5BusHiSpd_Ford_PSCM_AutoSarNMReserved2_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_FordMsg5B5BusHiSpd_Ford_PSCM_AutoSarNMReserved3_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_FordMsg5B5BusHiSpd_Ford_PSCM_AutoSarNMReserved4_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_FordMsg5B5BusHiSpd_Ford_PSCM_GWNMProxy_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_FordMsg5B5BusHiSpd_Ford_PSCM_GWOnBoardTester_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#  define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# endif /* !defined(RTE_CORE) */


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

#  define Rte_InitValue_Ford_PSCM_AutoSarNMControl_Val (0U)
#  define Rte_InitValue_Ford_PSCM_AutoSarNMNodeId_Val (181U)
#  define Rte_InitValue_Ford_PSCM_AutoSarNMReserved1_Val (255U)
#  define Rte_InitValue_Ford_PSCM_AutoSarNMReserved2_Val (255U)
#  define Rte_InitValue_Ford_PSCM_AutoSarNMReserved3_Val (255U)
#  define Rte_InitValue_Ford_PSCM_AutoSarNMReserved4_Val (255U)
#  define Rte_InitValue_Ford_PSCM_GWNMProxy_Val (255U)
#  define Rte_InitValue_Ford_PSCM_GWOnBoardTester_Val (255U)
# endif


# ifndef RTE_CORE

/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Write_Ford_PSCM_AutoSarNMControl_Val Rte_Write_FordMsg5B5BusHiSpd_Ford_PSCM_AutoSarNMControl_Val
#  define Rte_Write_FordMsg5B5BusHiSpd_Ford_PSCM_AutoSarNMControl_Val(data) (Rte_FordMsg5B5BusHiSpd_Ford_PSCM_AutoSarNMControl_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_Ford_PSCM_AutoSarNMNodeId_Val Rte_Write_FordMsg5B5BusHiSpd_Ford_PSCM_AutoSarNMNodeId_Val
#  define Rte_Write_FordMsg5B5BusHiSpd_Ford_PSCM_AutoSarNMNodeId_Val(data) (Rte_FordMsg5B5BusHiSpd_Ford_PSCM_AutoSarNMNodeId_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_Ford_PSCM_AutoSarNMReserved1_Val Rte_Write_FordMsg5B5BusHiSpd_Ford_PSCM_AutoSarNMReserved1_Val
#  define Rte_Write_FordMsg5B5BusHiSpd_Ford_PSCM_AutoSarNMReserved1_Val(data) (Rte_FordMsg5B5BusHiSpd_Ford_PSCM_AutoSarNMReserved1_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_Ford_PSCM_AutoSarNMReserved2_Val Rte_Write_FordMsg5B5BusHiSpd_Ford_PSCM_AutoSarNMReserved2_Val
#  define Rte_Write_FordMsg5B5BusHiSpd_Ford_PSCM_AutoSarNMReserved2_Val(data) (Rte_FordMsg5B5BusHiSpd_Ford_PSCM_AutoSarNMReserved2_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_Ford_PSCM_AutoSarNMReserved3_Val Rte_Write_FordMsg5B5BusHiSpd_Ford_PSCM_AutoSarNMReserved3_Val
#  define Rte_Write_FordMsg5B5BusHiSpd_Ford_PSCM_AutoSarNMReserved3_Val(data) (Rte_FordMsg5B5BusHiSpd_Ford_PSCM_AutoSarNMReserved3_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_Ford_PSCM_AutoSarNMReserved4_Val Rte_Write_FordMsg5B5BusHiSpd_Ford_PSCM_AutoSarNMReserved4_Val
#  define Rte_Write_FordMsg5B5BusHiSpd_Ford_PSCM_AutoSarNMReserved4_Val(data) (Rte_FordMsg5B5BusHiSpd_Ford_PSCM_AutoSarNMReserved4_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_Ford_PSCM_GWNMProxy_Val Rte_Write_FordMsg5B5BusHiSpd_Ford_PSCM_GWNMProxy_Val
#  define Rte_Write_FordMsg5B5BusHiSpd_Ford_PSCM_GWNMProxy_Val(data) (Rte_FordMsg5B5BusHiSpd_Ford_PSCM_GWNMProxy_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_Ford_PSCM_GWOnBoardTester_Val Rte_Write_FordMsg5B5BusHiSpd_Ford_PSCM_GWOnBoardTester_Val
#  define Rte_Write_FordMsg5B5BusHiSpd_Ford_PSCM_GWOnBoardTester_Val(data) (Rte_FordMsg5B5BusHiSpd_Ford_PSCM_GWOnBoardTester_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */


/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Rte_Pim (Per-Instance Memory)
 *********************************************************************************************************************/

#  ifndef RTE_MICROSAR_PIM_EXPORT
#   define RTE_START_SEC_VAR_DEFAULT_RTE_Appl10_PIM_GROUP_UNSPECIFIED
#   include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg5B5BusHiSpd_PwrSteerCtrlModlArNmCtrlPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg5B5BusHiSpd_PwrSteerCtrlModlArNmNodIdnPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg5B5BusHiSpd_PwrSteerCtrlModlArNmResd1Prev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg5B5BusHiSpd_PwrSteerCtrlModlArNmResd2Prev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg5B5BusHiSpd_PwrSteerCtrlModlArNmResd3Prev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg5B5BusHiSpd_PwrSteerCtrlModlArNmResd4Prev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg5B5BusHiSpd_PwrSteerCtrlModlGatewyNmOnBdTestPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg5B5BusHiSpd_PwrSteerCtrlModlGatewyNmProxyPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#   define RTE_STOP_SEC_VAR_DEFAULT_RTE_Appl10_PIM_GROUP_UNSPECIFIED
#   include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  endif

#  define Rte_Pim_PwrSteerCtrlModlArNmCtrlPrev() \
  (&Rte_FordMsg5B5BusHiSpd_PwrSteerCtrlModlArNmCtrlPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_PwrSteerCtrlModlArNmNodIdnPrev() \
  (&Rte_FordMsg5B5BusHiSpd_PwrSteerCtrlModlArNmNodIdnPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_PwrSteerCtrlModlArNmResd1Prev() \
  (&Rte_FordMsg5B5BusHiSpd_PwrSteerCtrlModlArNmResd1Prev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_PwrSteerCtrlModlArNmResd2Prev() \
  (&Rte_FordMsg5B5BusHiSpd_PwrSteerCtrlModlArNmResd2Prev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_PwrSteerCtrlModlArNmResd3Prev() \
  (&Rte_FordMsg5B5BusHiSpd_PwrSteerCtrlModlArNmResd3Prev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_PwrSteerCtrlModlArNmResd4Prev() \
  (&Rte_FordMsg5B5BusHiSpd_PwrSteerCtrlModlArNmResd4Prev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_PwrSteerCtrlModlGatewyNmOnBdTestPrev() \
  (&Rte_FordMsg5B5BusHiSpd_PwrSteerCtrlModlGatewyNmOnBdTestPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_PwrSteerCtrlModlGatewyNmProxyPrev() \
  (&Rte_FordMsg5B5BusHiSpd_PwrSteerCtrlModlGatewyNmProxyPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */


# endif /* !defined(RTE_CORE) */


# define FordMsg5B5BusHiSpd_START_SEC_CODE
# include "FordMsg5B5BusHiSpd_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * Runnable entities
 *********************************************************************************************************************/

# ifndef RTE_CORE
#  define RTE_RUNNABLE_FordMsg5B5BusHiSpdInit1 FordMsg5B5BusHiSpdInit1
#  define RTE_RUNNABLE_FordMsg5B5BusHiSpdPer1 FordMsg5B5BusHiSpdPer1
# endif

FUNC(void, FordMsg5B5BusHiSpd_CODE) FordMsg5B5BusHiSpdInit1(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(void, FordMsg5B5BusHiSpd_CODE) FordMsg5B5BusHiSpdPer1(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */

# define FordMsg5B5BusHiSpd_STOP_SEC_CODE
# include "FordMsg5B5BusHiSpd_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_FORDMSG5B5BUSHISPD_H */

/**********************************************************************************************************************
 MISRA 2004 violations and justifications
 *********************************************************************************************************************/

/* module specific MISRA deviations:
   MD_Rte_3451:  MISRA rule: 8.8
     Reason:     Schedulable entities are declared by the RTE and also by the BSW modules.
     Risk:       No functional risk.
     Prevention: Not required.

*/
