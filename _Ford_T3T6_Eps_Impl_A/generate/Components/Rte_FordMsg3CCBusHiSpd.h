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
 *          File:  Rte_FordMsg3CCBusHiSpd.h
 *        Config:  EPS.dpa
 *   ECU-Project:  PSCM_FD
 *
 *     Generator:  MICROSAR RTE Generator Version 4.13.0
 *                 RTE Core Version 1.13.0
 *       License:  Unlimited license CBD1601056 for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <FordMsg3CCBusHiSpd>
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_FORDMSG3CCBUSHISPD_H
# define _RTE_FORDMSG3CCBUSHISPD_H

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

# include "Rte_FordMsg3CCBusHiSpd_Type.h"
# include "Rte_DataHandleType.h"

# ifndef RTE_CORE

/**********************************************************************************************************************
 * extern declaration of RTE buffers for optimized macro implementation
 *********************************************************************************************************************/
#  define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(uint8, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmp1_FordVehLaneAssiAvl_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmp1_FordVehLaneAssiHandsOff_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmp1_FordVehLaneAssiRejctn_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmp1_FordVehLoSpdMtnCtrlBrkDecelEnaReq_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_FordMsg3CCBusHiSpd_FordVehLoSpdMtnCtrlBrkTqReq_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmp1_FordVehTrfcJamAvdHandsOnConf_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmp1_FordVehTrlrAgTarCalcn_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#  define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# endif /* !defined(RTE_CORE) */


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

#  define Rte_InitValue_FordVehLaneAssiAvl_Val (0U)
#  define Rte_InitValue_FordVehLaneAssiHandsOff_Val (1U)
#  define Rte_InitValue_FordVehLaneAssiRejctn_Val (0U)
#  define Rte_InitValue_FordVehLoSpdMtnCtrlBrkDecelEna_Val (0U)
#  define Rte_InitValue_FordVehLoSpdMtnCtrlBrkTqReq_Val (0.0F)
#  define Rte_InitValue_FordVehTrfcJamAvdHandsOnConf_Val (0U)
#  define Rte_InitValue_FordVehTrlrAgTarCalcn_Val (0U)
#  define Rte_InitValue_Ford_LaActAvail_D_Actl_Ford_LaActAvail_D_Actl (0U)
#  define Rte_InitValue_Ford_LaActDeny_B_Actl_Ford_LaActDeny_B_Actl (FALSE)
#  define Rte_InitValue_Ford_LaHandsOff_B_Actl_Ford_LaHandsOff_B_Actl (TRUE)
#  define Rte_InitValue_Ford_LsmcBrkDecelEnbl_D_Rq_Ford_LsmcBrkDecelEnbl_D_Rq (0U)
#  define Rte_InitValue_Ford_LsmcBrk_Tq_Rq_Ford_LsmcBrk_Tq_Rq (0U)
#  define Rte_InitValue_Ford_TjaHandsOnCnfdnc_B_Est_Ford_TjaHandsOnCnfdnc_B_Est (FALSE)
#  define Rte_InitValue_Ford_TrlrAn_An_TrgtCalc_Ford_TrlrAn_An_TrgtCalc (0U)
# endif


# define RTE_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_FordMsg3CCBusHiSpd_Ford_LaActAvail_D_Actl_Ford_LaActAvail_D_Actl(Ford_LaActAvail_D_Actl data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_FordMsg3CCBusHiSpd_Ford_LaActDeny_B_Actl_Ford_LaActDeny_B_Actl(Ford_LaActDeny_B_Actl data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_FordMsg3CCBusHiSpd_Ford_LaHandsOff_B_Actl_Ford_LaHandsOff_B_Actl(Ford_LaHandsOff_B_Actl data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_FordMsg3CCBusHiSpd_Ford_LsmcBrkDecelEnbl_D_Rq_Ford_LsmcBrkDecelEnbl_D_Rq(Ford_LsmcBrkDecelEnbl_D_Rq data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_FordMsg3CCBusHiSpd_Ford_LsmcBrk_Tq_Rq_Ford_LsmcBrk_Tq_Rq(Ford_LsmcBrk_Tq_Rq data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_FordMsg3CCBusHiSpd_Ford_TjaHandsOnCnfdnc_B_Est_Ford_TjaHandsOnCnfdnc_B_Est(Ford_TjaHandsOnCnfdnc_B_Est data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_FordMsg3CCBusHiSpd_Ford_TrlrAn_An_TrgtCalc_Ford_TrlrAn_An_TrgtCalc(Ford_TrlrAn_An_TrgtCalc data); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# ifndef RTE_CORE

/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Read_FordVehLaneAssiAvl_Val Rte_Read_FordMsg3CCBusHiSpd_FordVehLaneAssiAvl_Val
#  define Rte_Read_FordMsg3CCBusHiSpd_FordVehLaneAssiAvl_Val(data) (*(data) = Rte_CDD_FordBlaBoxIfCmp1_FordVehLaneAssiAvl_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordVehLaneAssiHandsOff_Val Rte_Read_FordMsg3CCBusHiSpd_FordVehLaneAssiHandsOff_Val
#  define Rte_Read_FordMsg3CCBusHiSpd_FordVehLaneAssiHandsOff_Val(data) (*(data) = Rte_CDD_FordBlaBoxIfCmp1_FordVehLaneAssiHandsOff_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordVehLaneAssiRejctn_Val Rte_Read_FordMsg3CCBusHiSpd_FordVehLaneAssiRejctn_Val
#  define Rte_Read_FordMsg3CCBusHiSpd_FordVehLaneAssiRejctn_Val(data) (*(data) = Rte_CDD_FordBlaBoxIfCmp1_FordVehLaneAssiRejctn_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordVehLoSpdMtnCtrlBrkDecelEna_Val Rte_Read_FordMsg3CCBusHiSpd_FordVehLoSpdMtnCtrlBrkDecelEna_Val
#  define Rte_Read_FordMsg3CCBusHiSpd_FordVehLoSpdMtnCtrlBrkDecelEna_Val(data) (*(data) = Rte_CDD_FordBlaBoxIfCmp1_FordVehLoSpdMtnCtrlBrkDecelEnaReq_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordVehLoSpdMtnCtrlBrkTqReq_Val Rte_Read_FordMsg3CCBusHiSpd_FordVehLoSpdMtnCtrlBrkTqReq_Val
#  define Rte_Read_FordMsg3CCBusHiSpd_FordVehLoSpdMtnCtrlBrkTqReq_Val(data) (*(data) = Rte_FordMsg3CCBusHiSpd_FordVehLoSpdMtnCtrlBrkTqReq_Val, ((Std_ReturnType)RTE_E_UNCONNECTED)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordVehTrfcJamAvdHandsOnConf_Val Rte_Read_FordMsg3CCBusHiSpd_FordVehTrfcJamAvdHandsOnConf_Val
#  define Rte_Read_FordMsg3CCBusHiSpd_FordVehTrfcJamAvdHandsOnConf_Val(data) (*(data) = Rte_CDD_FordBlaBoxIfCmp1_FordVehTrfcJamAvdHandsOnConf_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordVehTrlrAgTarCalcn_Val Rte_Read_FordMsg3CCBusHiSpd_FordVehTrlrAgTarCalcn_Val
#  define Rte_Read_FordMsg3CCBusHiSpd_FordVehTrlrAgTarCalcn_Val(data) (*(data) = Rte_CDD_FordBlaBoxIfCmp1_FordVehTrlrAgTarCalcn_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Write_Ford_LaActAvail_D_Actl_Ford_LaActAvail_D_Actl Rte_Write_FordMsg3CCBusHiSpd_Ford_LaActAvail_D_Actl_Ford_LaActAvail_D_Actl
#  define Rte_Write_Ford_LaActDeny_B_Actl_Ford_LaActDeny_B_Actl Rte_Write_FordMsg3CCBusHiSpd_Ford_LaActDeny_B_Actl_Ford_LaActDeny_B_Actl
#  define Rte_Write_Ford_LaHandsOff_B_Actl_Ford_LaHandsOff_B_Actl Rte_Write_FordMsg3CCBusHiSpd_Ford_LaHandsOff_B_Actl_Ford_LaHandsOff_B_Actl
#  define Rte_Write_Ford_LsmcBrkDecelEnbl_D_Rq_Ford_LsmcBrkDecelEnbl_D_Rq Rte_Write_FordMsg3CCBusHiSpd_Ford_LsmcBrkDecelEnbl_D_Rq_Ford_LsmcBrkDecelEnbl_D_Rq
#  define Rte_Write_Ford_LsmcBrk_Tq_Rq_Ford_LsmcBrk_Tq_Rq Rte_Write_FordMsg3CCBusHiSpd_Ford_LsmcBrk_Tq_Rq_Ford_LsmcBrk_Tq_Rq
#  define Rte_Write_Ford_TjaHandsOnCnfdnc_B_Est_Ford_TjaHandsOnCnfdnc_B_Est Rte_Write_FordMsg3CCBusHiSpd_Ford_TjaHandsOnCnfdnc_B_Est_Ford_TjaHandsOnCnfdnc_B_Est
#  define Rte_Write_Ford_TrlrAn_An_TrgtCalc_Ford_TrlrAn_An_TrgtCalc Rte_Write_FordMsg3CCBusHiSpd_Ford_TrlrAn_An_TrgtCalc_Ford_TrlrAn_An_TrgtCalc


# endif /* !defined(RTE_CORE) */


# define FordMsg3CCBusHiSpd_START_SEC_CODE
# include "FordMsg3CCBusHiSpd_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * Runnable entities
 *********************************************************************************************************************/

# ifndef RTE_CORE
#  define RTE_RUNNABLE_FordMsg3CCBusHiSpdInit1 FordMsg3CCBusHiSpdInit1
#  define RTE_RUNNABLE_FordMsg3CCBusHiSpdPer1 FordMsg3CCBusHiSpdPer1
# endif

FUNC(void, FordMsg3CCBusHiSpd_CODE) FordMsg3CCBusHiSpdInit1(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(void, FordMsg3CCBusHiSpd_CODE) FordMsg3CCBusHiSpdPer1(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */

# define FordMsg3CCBusHiSpd_STOP_SEC_CODE
# include "FordMsg3CCBusHiSpd_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_FORDMSG3CCBUSHISPD_H */

/**********************************************************************************************************************
 MISRA 2004 violations and justifications
 *********************************************************************************************************************/

/* module specific MISRA deviations:
   MD_Rte_3451:  MISRA rule: 8.8
     Reason:     Schedulable entities are declared by the RTE and also by the BSW modules.
     Risk:       No functional risk.
     Prevention: Not required.

*/
