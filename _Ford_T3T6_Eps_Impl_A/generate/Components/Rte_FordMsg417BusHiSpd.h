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
 *          File:  Rte_FordMsg417BusHiSpd.h
 *        Config:  EPS.dpa
 *   ECU-Project:  PSCM_FD
 *
 *     Generator:  MICROSAR RTE Generator Version 4.13.0
 *                 RTE Core Version 1.13.0
 *       License:  Unlimited license CBD1601056 for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <FordMsg417BusHiSpd>
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_FORDMSG417BUSHISPD_H
# define _RTE_FORDMSG417BUSHISPD_H

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

# include "Rte_FordMsg417BusHiSpd_Type.h"
# include "Rte_DataHandleType.h"

# ifndef RTE_CORE

/**********************************************************************************************************************
 * extern declaration of RTE buffers for optimized macro implementation
 *********************************************************************************************************************/
#  define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(Ford_EsaOn_B_Stat, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmp2_FordVehEvasSteerAssiSts_Ford_EsaOn_B_Stat; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ford_LatCtlLim_D_Stat, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmp1_FordVehLatCtrlLimSts_Ford_LatCtlLim_D_Stat; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ford_LatCtlSte_D_Stat, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmp1_FordVehLatCtrlSteerSts_Ford_LatCtlSte_D_Stat; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ford_SelDrvMdeSte_D_Stat, RTE_VAR_INIT) Rte_FordMsg417BusHiSpd_FordVehSelDrvModSteerSts_Ford_SelDrvMdeSte_D_Stat; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ford_TrlrAidEnbl_D2_Stat, RTE_VAR_INIT) Rte_FordMsg417BusHiSpd_FordVehTrlrAidEnaSts_Ford_TrlrAidEnbl_D2_Stat; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ford_TrlrAidMsgTxt_D2_Rq, RTE_VAR_INIT) Rte_FordMsg417BusHiSpd_FordVehTrlrAidMsgTxtReq_Ford_TrlrAidMsgTxt_D2_Rq; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#  define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# endif /* !defined(RTE_CORE) */


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

#  define Rte_InitValue_FordVehEvasSteerAssiSts_Ford_EsaOn_B_Stat (TRUE)
#  define Rte_InitValue_FordVehLatCtrlLimSts_Ford_LatCtlLim_D_Stat (0U)
#  define Rte_InitValue_FordVehLatCtrlSteerSts_Ford_LatCtlSte_D_Stat (0U)
#  define Rte_InitValue_FordVehSelDrvModSteerSts_Ford_SelDrvMdeSte_D_Stat (0U)
#  define Rte_InitValue_FordVehTrlrAidEnaSts_Ford_TrlrAidEnbl_D2_Stat (0U)
#  define Rte_InitValue_FordVehTrlrAidMsgTxtReq_Ford_TrlrAidMsgTxt_D2_Rq (0U)
#  define Rte_InitValue_Ford_EsaOn_B_Stat1_Ford_EsaOn_B_Stat (TRUE)
#  define Rte_InitValue_Ford_LatCtlLim_D_Stat1_Ford_LatCtlLim_D_Stat (0U)
#  define Rte_InitValue_Ford_LatCtlSte_D_Stat1_Ford_LatCtlSte_D_Stat (0U)
#  define Rte_InitValue_Ford_SelDrvMdeSte_D_Stat1_Ford_SelDrvMdeSte_D_Stat (0U)
#  define Rte_InitValue_Ford_TrlrAidEnbl_D2_Stat1_Ford_TrlrAidEnbl_D2_Stat (0U)
#  define Rte_InitValue_Ford_TrlrAidMsgTxt_D2_Rq1_Ford_TrlrAidMsgTxt_D2_Rq (0U)
# endif


# define RTE_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_FordMsg417BusHiSpd_Ford_EsaOn_B_Stat1_Ford_EsaOn_B_Stat(Ford_EsaOn_B_Stat data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_FordMsg417BusHiSpd_Ford_LatCtlLim_D_Stat1_Ford_LatCtlLim_D_Stat(Ford_LatCtlLim_D_Stat data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_FordMsg417BusHiSpd_Ford_LatCtlSte_D_Stat1_Ford_LatCtlSte_D_Stat(Ford_LatCtlSte_D_Stat data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_FordMsg417BusHiSpd_Ford_SelDrvMdeSte_D_Stat1_Ford_SelDrvMdeSte_D_Stat(Ford_SelDrvMdeSte_D_Stat data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_FordMsg417BusHiSpd_Ford_TrlrAidEnbl_D2_Stat1_Ford_TrlrAidEnbl_D2_Stat(Ford_TrlrAidEnbl_D2_Stat data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_FordMsg417BusHiSpd_Ford_TrlrAidMsgTxt_D2_Rq1_Ford_TrlrAidMsgTxt_D2_Rq(Ford_TrlrAidMsgTxt_D2_Rq data); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# ifndef RTE_CORE

/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Read_FordVehEvasSteerAssiSts_Ford_EsaOn_B_Stat Rte_Read_FordMsg417BusHiSpd_FordVehEvasSteerAssiSts_Ford_EsaOn_B_Stat
#  define Rte_Read_FordMsg417BusHiSpd_FordVehEvasSteerAssiSts_Ford_EsaOn_B_Stat(data) (*(data) = Rte_CDD_FordBlaBoxIfCmp2_FordVehEvasSteerAssiSts_Ford_EsaOn_B_Stat, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordVehLatCtrlLimSts_Ford_LatCtlLim_D_Stat Rte_Read_FordMsg417BusHiSpd_FordVehLatCtrlLimSts_Ford_LatCtlLim_D_Stat
#  define Rte_Read_FordMsg417BusHiSpd_FordVehLatCtrlLimSts_Ford_LatCtlLim_D_Stat(data) (*(data) = Rte_CDD_FordBlaBoxIfCmp1_FordVehLatCtrlLimSts_Ford_LatCtlLim_D_Stat, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordVehLatCtrlSteerSts_Ford_LatCtlSte_D_Stat Rte_Read_FordMsg417BusHiSpd_FordVehLatCtrlSteerSts_Ford_LatCtlSte_D_Stat
#  define Rte_Read_FordMsg417BusHiSpd_FordVehLatCtrlSteerSts_Ford_LatCtlSte_D_Stat(data) (*(data) = Rte_CDD_FordBlaBoxIfCmp1_FordVehLatCtrlSteerSts_Ford_LatCtlSte_D_Stat, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordVehSelDrvModSteerSts_Ford_SelDrvMdeSte_D_Stat Rte_Read_FordMsg417BusHiSpd_FordVehSelDrvModSteerSts_Ford_SelDrvMdeSte_D_Stat
#  define Rte_Read_FordMsg417BusHiSpd_FordVehSelDrvModSteerSts_Ford_SelDrvMdeSte_D_Stat(data) (*(data) = Rte_FordMsg417BusHiSpd_FordVehSelDrvModSteerSts_Ford_SelDrvMdeSte_D_Stat, ((Std_ReturnType)RTE_E_UNCONNECTED)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordVehTrlrAidEnaSts_Ford_TrlrAidEnbl_D2_Stat Rte_Read_FordMsg417BusHiSpd_FordVehTrlrAidEnaSts_Ford_TrlrAidEnbl_D2_Stat
#  define Rte_Read_FordMsg417BusHiSpd_FordVehTrlrAidEnaSts_Ford_TrlrAidEnbl_D2_Stat(data) (*(data) = Rte_FordMsg417BusHiSpd_FordVehTrlrAidEnaSts_Ford_TrlrAidEnbl_D2_Stat, ((Std_ReturnType)RTE_E_UNCONNECTED)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordVehTrlrAidMsgTxtReq_Ford_TrlrAidMsgTxt_D2_Rq Rte_Read_FordMsg417BusHiSpd_FordVehTrlrAidMsgTxtReq_Ford_TrlrAidMsgTxt_D2_Rq
#  define Rte_Read_FordMsg417BusHiSpd_FordVehTrlrAidMsgTxtReq_Ford_TrlrAidMsgTxt_D2_Rq(data) (*(data) = Rte_FordMsg417BusHiSpd_FordVehTrlrAidMsgTxtReq_Ford_TrlrAidMsgTxt_D2_Rq, ((Std_ReturnType)RTE_E_UNCONNECTED)) /* PRQA S 3453 */ /* MD_MSR_19.7 */


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Write_Ford_EsaOn_B_Stat1_Ford_EsaOn_B_Stat Rte_Write_FordMsg417BusHiSpd_Ford_EsaOn_B_Stat1_Ford_EsaOn_B_Stat
#  define Rte_Write_Ford_LatCtlLim_D_Stat1_Ford_LatCtlLim_D_Stat Rte_Write_FordMsg417BusHiSpd_Ford_LatCtlLim_D_Stat1_Ford_LatCtlLim_D_Stat
#  define Rte_Write_Ford_LatCtlSte_D_Stat1_Ford_LatCtlSte_D_Stat Rte_Write_FordMsg417BusHiSpd_Ford_LatCtlSte_D_Stat1_Ford_LatCtlSte_D_Stat
#  define Rte_Write_Ford_SelDrvMdeSte_D_Stat1_Ford_SelDrvMdeSte_D_Stat Rte_Write_FordMsg417BusHiSpd_Ford_SelDrvMdeSte_D_Stat1_Ford_SelDrvMdeSte_D_Stat
#  define Rte_Write_Ford_TrlrAidEnbl_D2_Stat1_Ford_TrlrAidEnbl_D2_Stat Rte_Write_FordMsg417BusHiSpd_Ford_TrlrAidEnbl_D2_Stat1_Ford_TrlrAidEnbl_D2_Stat
#  define Rte_Write_Ford_TrlrAidMsgTxt_D2_Rq1_Ford_TrlrAidMsgTxt_D2_Rq Rte_Write_FordMsg417BusHiSpd_Ford_TrlrAidMsgTxt_D2_Rq1_Ford_TrlrAidMsgTxt_D2_Rq


# endif /* !defined(RTE_CORE) */


# define FordMsg417BusHiSpd_START_SEC_CODE
# include "FordMsg417BusHiSpd_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * Runnable entities
 *********************************************************************************************************************/

# ifndef RTE_CORE
#  define RTE_RUNNABLE_FordMsg417BusHiSpdInit1 FordMsg417BusHiSpdInit1
#  define RTE_RUNNABLE_FordMsg417BusHiSpdPer1 FordMsg417BusHiSpdPer1
# endif

FUNC(void, FordMsg417BusHiSpd_CODE) FordMsg417BusHiSpdInit1(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(void, FordMsg417BusHiSpd_CODE) FordMsg417BusHiSpdPer1(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */

# define FordMsg417BusHiSpd_STOP_SEC_CODE
# include "FordMsg417BusHiSpd_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_FORDMSG417BUSHISPD_H */

/**********************************************************************************************************************
 MISRA 2004 violations and justifications
 *********************************************************************************************************************/

/* module specific MISRA deviations:
   MD_Rte_3451:  MISRA rule: 8.8
     Reason:     Schedulable entities are declared by the RTE and also by the BSW modules.
     Risk:       No functional risk.
     Prevention: Not required.

*/
