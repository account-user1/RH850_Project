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
 *        Config:  C:/Users/NZ5334/Documents/Synergy/Working/ses_dev_ea4/MM519A_FordMsg5B5BusHiSpd_Impl/tools/Component.dpa
 *     SW-C Type:  FordMsg5B5BusHiSpd
 *  Generated at:  Wed Apr 18 10:56:53 2018
 *
 *     Generator:  MICROSAR RTE Generator Version 4.13.0
 *                 RTE Core Version 1.13.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <FordMsg5B5BusHiSpd> (Contract Phase)
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_FORDMSG5B5BUSHISPD_H
# define _RTE_FORDMSG5B5BUSHISPD_H

# ifdef RTE_APPLICATION_HEADER_FILE
#  error Multiple application header files included.
# endif
# define RTE_APPLICATION_HEADER_FILE
# ifndef RTE_PTR2ARRAYBASETYPE_PASSING
#  define RTE_PTR2ARRAYBASETYPE_PASSING
# endif

# ifdef __cplusplus
extern "C"
{
# endif /* __cplusplus */

/* include files */

# include "Rte_FordMsg5B5BusHiSpd_Type.h"
# include "Rte_DataHandleType.h"


/**********************************************************************************************************************
 * Component Data Structures and Port Data Structures
 *********************************************************************************************************************/

struct Rte_CDS_FordMsg5B5BusHiSpd
{
  /* PIM Handles section */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_PwrSteerCtrlModlArNmCtrlPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_PwrSteerCtrlModlArNmNodIdnPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_PwrSteerCtrlModlArNmResd1Prev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_PwrSteerCtrlModlArNmResd2Prev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_PwrSteerCtrlModlArNmResd3Prev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_PwrSteerCtrlModlArNmResd4Prev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_PwrSteerCtrlModlGatewyNmOnBdTestPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_PwrSteerCtrlModlGatewyNmProxyPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  /* Vendor specific section */
};

# define RTE_START_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern CONSTP2CONST(struct Rte_CDS_FordMsg5B5BusHiSpd, RTE_CONST, RTE_CONST) Rte_Inst_FordMsg5B5BusHiSpd; /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

typedef P2CONST(struct Rte_CDS_FordMsg5B5BusHiSpd, TYPEDEF, RTE_CONST) Rte_Instance;


/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

# define Rte_InitValue_Ford_PSCM_AutoSarNMControl_Val (0U)
# define Rte_InitValue_Ford_PSCM_AutoSarNMNodeId_Val (181U)
# define Rte_InitValue_Ford_PSCM_AutoSarNMReserved1_Val (255U)
# define Rte_InitValue_Ford_PSCM_AutoSarNMReserved2_Val (255U)
# define Rte_InitValue_Ford_PSCM_AutoSarNMReserved3_Val (255U)
# define Rte_InitValue_Ford_PSCM_AutoSarNMReserved4_Val (255U)
# define Rte_InitValue_Ford_PSCM_GWNMProxy_Val (255U)
# define Rte_InitValue_Ford_PSCM_GWOnBoardTester_Val (255U)


# define RTE_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_FordMsg5B5BusHiSpd_Ford_PSCM_AutoSarNMControl_Val(uint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_FordMsg5B5BusHiSpd_Ford_PSCM_AutoSarNMNodeId_Val(uint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_FordMsg5B5BusHiSpd_Ford_PSCM_AutoSarNMReserved1_Val(uint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_FordMsg5B5BusHiSpd_Ford_PSCM_AutoSarNMReserved2_Val(uint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_FordMsg5B5BusHiSpd_Ford_PSCM_AutoSarNMReserved3_Val(uint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_FordMsg5B5BusHiSpd_Ford_PSCM_AutoSarNMReserved4_Val(uint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_FordMsg5B5BusHiSpd_Ford_PSCM_GWNMProxy_Val(uint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_FordMsg5B5BusHiSpd_Ford_PSCM_GWOnBoardTester_Val(uint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */



/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Write_Ford_PSCM_AutoSarNMControl_Val Rte_Write_FordMsg5B5BusHiSpd_Ford_PSCM_AutoSarNMControl_Val
# define Rte_Write_Ford_PSCM_AutoSarNMNodeId_Val Rte_Write_FordMsg5B5BusHiSpd_Ford_PSCM_AutoSarNMNodeId_Val
# define Rte_Write_Ford_PSCM_AutoSarNMReserved1_Val Rte_Write_FordMsg5B5BusHiSpd_Ford_PSCM_AutoSarNMReserved1_Val
# define Rte_Write_Ford_PSCM_AutoSarNMReserved2_Val Rte_Write_FordMsg5B5BusHiSpd_Ford_PSCM_AutoSarNMReserved2_Val
# define Rte_Write_Ford_PSCM_AutoSarNMReserved3_Val Rte_Write_FordMsg5B5BusHiSpd_Ford_PSCM_AutoSarNMReserved3_Val
# define Rte_Write_Ford_PSCM_AutoSarNMReserved4_Val Rte_Write_FordMsg5B5BusHiSpd_Ford_PSCM_AutoSarNMReserved4_Val
# define Rte_Write_Ford_PSCM_GWNMProxy_Val Rte_Write_FordMsg5B5BusHiSpd_Ford_PSCM_GWNMProxy_Val
# define Rte_Write_Ford_PSCM_GWOnBoardTester_Val Rte_Write_FordMsg5B5BusHiSpd_Ford_PSCM_GWOnBoardTester_Val


/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Rte_Pim (Per-Instance Memory)
 *********************************************************************************************************************/

# define Rte_Pim_PwrSteerCtrlModlArNmCtrlPrev() (Rte_Inst_FordMsg5B5BusHiSpd->Pim_PwrSteerCtrlModlArNmCtrlPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_PwrSteerCtrlModlArNmNodIdnPrev() (Rte_Inst_FordMsg5B5BusHiSpd->Pim_PwrSteerCtrlModlArNmNodIdnPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_PwrSteerCtrlModlArNmResd1Prev() (Rte_Inst_FordMsg5B5BusHiSpd->Pim_PwrSteerCtrlModlArNmResd1Prev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_PwrSteerCtrlModlArNmResd2Prev() (Rte_Inst_FordMsg5B5BusHiSpd->Pim_PwrSteerCtrlModlArNmResd2Prev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_PwrSteerCtrlModlArNmResd3Prev() (Rte_Inst_FordMsg5B5BusHiSpd->Pim_PwrSteerCtrlModlArNmResd3Prev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_PwrSteerCtrlModlArNmResd4Prev() (Rte_Inst_FordMsg5B5BusHiSpd->Pim_PwrSteerCtrlModlArNmResd4Prev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_PwrSteerCtrlModlGatewyNmOnBdTestPrev() (Rte_Inst_FordMsg5B5BusHiSpd->Pim_PwrSteerCtrlModlGatewyNmOnBdTestPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_PwrSteerCtrlModlGatewyNmProxyPrev() (Rte_Inst_FordMsg5B5BusHiSpd->Pim_PwrSteerCtrlModlGatewyNmProxyPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */




/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   uint8 *Rte_Pim_PwrSteerCtrlModlArNmCtrlPrev(void)
 *   uint8 *Rte_Pim_PwrSteerCtrlModlArNmNodIdnPrev(void)
 *   uint8 *Rte_Pim_PwrSteerCtrlModlArNmResd1Prev(void)
 *   uint8 *Rte_Pim_PwrSteerCtrlModlArNmResd2Prev(void)
 *   uint8 *Rte_Pim_PwrSteerCtrlModlArNmResd3Prev(void)
 *   uint8 *Rte_Pim_PwrSteerCtrlModlArNmResd4Prev(void)
 *   uint8 *Rte_Pim_PwrSteerCtrlModlGatewyNmOnBdTestPrev(void)
 *   uint8 *Rte_Pim_PwrSteerCtrlModlGatewyNmProxyPrev(void)
 *
 *********************************************************************************************************************/


# define FordMsg5B5BusHiSpd_START_SEC_CODE
# include "FordMsg5B5BusHiSpd_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 *
 * Runnable Entity Name: FordMsg5B5BusHiSpdInit1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_FordMsg5B5BusHiSpdInit1 FordMsg5B5BusHiSpdInit1
FUNC(void, FordMsg5B5BusHiSpd_CODE) FordMsg5B5BusHiSpdInit1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: FordMsg5B5BusHiSpdPer1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on TimingEvent every 10ms
 *
 **********************************************************************************************************************
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_Ford_PSCM_AutoSarNMControl_Val(uint8 data)
 *   Std_ReturnType Rte_Write_Ford_PSCM_AutoSarNMNodeId_Val(uint8 data)
 *   Std_ReturnType Rte_Write_Ford_PSCM_AutoSarNMReserved1_Val(uint8 data)
 *   Std_ReturnType Rte_Write_Ford_PSCM_AutoSarNMReserved2_Val(uint8 data)
 *   Std_ReturnType Rte_Write_Ford_PSCM_AutoSarNMReserved3_Val(uint8 data)
 *   Std_ReturnType Rte_Write_Ford_PSCM_AutoSarNMReserved4_Val(uint8 data)
 *   Std_ReturnType Rte_Write_Ford_PSCM_GWNMProxy_Val(uint8 data)
 *   Std_ReturnType Rte_Write_Ford_PSCM_GWOnBoardTester_Val(uint8 data)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_FordMsg5B5BusHiSpdPer1 FordMsg5B5BusHiSpdPer1
FUNC(void, FordMsg5B5BusHiSpd_CODE) FordMsg5B5BusHiSpdPer1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define FordMsg5B5BusHiSpd_STOP_SEC_CODE
# include "FordMsg5B5BusHiSpd_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_FORDMSG5B5BUSHISPD_H */

#include "Rte_Stubs.h"
