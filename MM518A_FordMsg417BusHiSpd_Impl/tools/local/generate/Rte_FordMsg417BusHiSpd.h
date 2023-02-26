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
 *        Config:  C:/Component/MM518A_FordMsg417BusHiSpd_Impl/tools/Component.dpa
 *     SW-C Type:  FordMsg417BusHiSpd
 *  Generated at:  Wed Nov 29 15:17:58 2017
 *
 *     Generator:  MICROSAR RTE Generator Version 4.13.0
 *                 RTE Core Version 1.13.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <FordMsg417BusHiSpd> (Contract Phase)
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_FORDMSG417BUSHISPD_H
# define _RTE_FORDMSG417BUSHISPD_H

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

# include "Rte_FordMsg417BusHiSpd_Type.h"
# include "Rte_DataHandleType.h"


/**********************************************************************************************************************
 * Component Data Structures and Port Data Structures
 *********************************************************************************************************************/

struct Rte_CDS_FordMsg417BusHiSpd
{
  /* dummy entry */
  uint8 _dummy;
};

# define RTE_START_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern CONSTP2CONST(struct Rte_CDS_FordMsg417BusHiSpd, RTE_CONST, RTE_CONST) Rte_Inst_FordMsg417BusHiSpd; /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

typedef P2CONST(struct Rte_CDS_FordMsg417BusHiSpd, TYPEDEF, RTE_CONST) Rte_Instance;


/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

# define Rte_InitValue_FordVehEvasSteerAssiSts_Ford_EsaOn_B_Stat (TRUE)
# define Rte_InitValue_FordVehLatCtrlLimSts_Ford_LatCtlLim_D_Stat (0U)
# define Rte_InitValue_FordVehLatCtrlSteerSts_Ford_LatCtlSte_D_Stat (0U)
# define Rte_InitValue_FordVehSelDrvModSteerSts_Ford_SelDrvMdeSte_D_Stat (0U)
# define Rte_InitValue_FordVehTrlrAidEnaSts_Ford_TrlrAidEnbl_D2_Stat (0U)
# define Rte_InitValue_FordVehTrlrAidMsgTxtReq_Ford_TrlrAidMsgTxt_D2_Rq (0U)
# define Rte_InitValue_Ford_EsaOn_B_Stat1_Ford_EsaOn_B_Stat (TRUE)
# define Rte_InitValue_Ford_LatCtlLim_D_Stat1_Ford_LatCtlLim_D_Stat (0U)
# define Rte_InitValue_Ford_LatCtlSte_D_Stat1_Ford_LatCtlSte_D_Stat (0U)
# define Rte_InitValue_Ford_SelDrvMdeSte_D_Stat1_Ford_SelDrvMdeSte_D_Stat (0U)
# define Rte_InitValue_Ford_TrlrAidEnbl_D2_Stat1_Ford_TrlrAidEnbl_D2_Stat (0U)
# define Rte_InitValue_Ford_TrlrAidMsgTxt_D2_Rq1_Ford_TrlrAidMsgTxt_D2_Rq (0U)


# define RTE_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordMsg417BusHiSpd_FordVehEvasSteerAssiSts_Ford_EsaOn_B_Stat(P2VAR(Ford_EsaOn_B_Stat, AUTOMATIC, RTE_FORDMSG417BUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordMsg417BusHiSpd_FordVehLatCtrlLimSts_Ford_LatCtlLim_D_Stat(P2VAR(Ford_LatCtlLim_D_Stat, AUTOMATIC, RTE_FORDMSG417BUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordMsg417BusHiSpd_FordVehLatCtrlSteerSts_Ford_LatCtlSte_D_Stat(P2VAR(Ford_LatCtlSte_D_Stat, AUTOMATIC, RTE_FORDMSG417BUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordMsg417BusHiSpd_FordVehSelDrvModSteerSts_Ford_SelDrvMdeSte_D_Stat(P2VAR(Ford_SelDrvMdeSte_D_Stat, AUTOMATIC, RTE_FORDMSG417BUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordMsg417BusHiSpd_FordVehTrlrAidEnaSts_Ford_TrlrAidEnbl_D2_Stat(P2VAR(Ford_TrlrAidEnbl_D2_Stat, AUTOMATIC, RTE_FORDMSG417BUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordMsg417BusHiSpd_FordVehTrlrAidMsgTxtReq_Ford_TrlrAidMsgTxt_D2_Rq(P2VAR(Ford_TrlrAidMsgTxt_D2_Rq, AUTOMATIC, RTE_FORDMSG417BUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_FordMsg417BusHiSpd_Ford_EsaOn_B_Stat1_Ford_EsaOn_B_Stat(Ford_EsaOn_B_Stat data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_FordMsg417BusHiSpd_Ford_LatCtlLim_D_Stat1_Ford_LatCtlLim_D_Stat(Ford_LatCtlLim_D_Stat data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_FordMsg417BusHiSpd_Ford_LatCtlSte_D_Stat1_Ford_LatCtlSte_D_Stat(Ford_LatCtlSte_D_Stat data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_FordMsg417BusHiSpd_Ford_SelDrvMdeSte_D_Stat1_Ford_SelDrvMdeSte_D_Stat(Ford_SelDrvMdeSte_D_Stat data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_FordMsg417BusHiSpd_Ford_TrlrAidEnbl_D2_Stat1_Ford_TrlrAidEnbl_D2_Stat(Ford_TrlrAidEnbl_D2_Stat data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_FordMsg417BusHiSpd_Ford_TrlrAidMsgTxt_D2_Rq1_Ford_TrlrAidMsgTxt_D2_Rq(Ford_TrlrAidMsgTxt_D2_Rq data); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */



/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Read_FordVehEvasSteerAssiSts_Ford_EsaOn_B_Stat Rte_Read_FordMsg417BusHiSpd_FordVehEvasSteerAssiSts_Ford_EsaOn_B_Stat
# define Rte_Read_FordVehLatCtrlLimSts_Ford_LatCtlLim_D_Stat Rte_Read_FordMsg417BusHiSpd_FordVehLatCtrlLimSts_Ford_LatCtlLim_D_Stat
# define Rte_Read_FordVehLatCtrlSteerSts_Ford_LatCtlSte_D_Stat Rte_Read_FordMsg417BusHiSpd_FordVehLatCtrlSteerSts_Ford_LatCtlSte_D_Stat
# define Rte_Read_FordVehSelDrvModSteerSts_Ford_SelDrvMdeSte_D_Stat Rte_Read_FordMsg417BusHiSpd_FordVehSelDrvModSteerSts_Ford_SelDrvMdeSte_D_Stat
# define Rte_Read_FordVehTrlrAidEnaSts_Ford_TrlrAidEnbl_D2_Stat Rte_Read_FordMsg417BusHiSpd_FordVehTrlrAidEnaSts_Ford_TrlrAidEnbl_D2_Stat
# define Rte_Read_FordVehTrlrAidMsgTxtReq_Ford_TrlrAidMsgTxt_D2_Rq Rte_Read_FordMsg417BusHiSpd_FordVehTrlrAidMsgTxtReq_Ford_TrlrAidMsgTxt_D2_Rq


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Write_Ford_EsaOn_B_Stat1_Ford_EsaOn_B_Stat Rte_Write_FordMsg417BusHiSpd_Ford_EsaOn_B_Stat1_Ford_EsaOn_B_Stat
# define Rte_Write_Ford_LatCtlLim_D_Stat1_Ford_LatCtlLim_D_Stat Rte_Write_FordMsg417BusHiSpd_Ford_LatCtlLim_D_Stat1_Ford_LatCtlLim_D_Stat
# define Rte_Write_Ford_LatCtlSte_D_Stat1_Ford_LatCtlSte_D_Stat Rte_Write_FordMsg417BusHiSpd_Ford_LatCtlSte_D_Stat1_Ford_LatCtlSte_D_Stat
# define Rte_Write_Ford_SelDrvMdeSte_D_Stat1_Ford_SelDrvMdeSte_D_Stat Rte_Write_FordMsg417BusHiSpd_Ford_SelDrvMdeSte_D_Stat1_Ford_SelDrvMdeSte_D_Stat
# define Rte_Write_Ford_TrlrAidEnbl_D2_Stat1_Ford_TrlrAidEnbl_D2_Stat Rte_Write_FordMsg417BusHiSpd_Ford_TrlrAidEnbl_D2_Stat1_Ford_TrlrAidEnbl_D2_Stat
# define Rte_Write_Ford_TrlrAidMsgTxt_D2_Rq1_Ford_TrlrAidMsgTxt_D2_Rq Rte_Write_FordMsg417BusHiSpd_Ford_TrlrAidMsgTxt_D2_Rq1_Ford_TrlrAidMsgTxt_D2_Rq




# define FordMsg417BusHiSpd_START_SEC_CODE
# include "FordMsg417BusHiSpd_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 *
 * Runnable Entity Name: FordMsg417BusHiSpdInit1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_FordMsg417BusHiSpdInit1 FordMsg417BusHiSpdInit1
FUNC(void, FordMsg417BusHiSpd_CODE) FordMsg417BusHiSpdInit1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: FordMsg417BusHiSpdPer1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on TimingEvent every 10ms
 *
 **********************************************************************************************************************
 *
 * Input Interfaces:
 * =================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Read_FordVehEvasSteerAssiSts_Ford_EsaOn_B_Stat(Ford_EsaOn_B_Stat *data)
 *   Std_ReturnType Rte_Read_FordVehLatCtrlLimSts_Ford_LatCtlLim_D_Stat(Ford_LatCtlLim_D_Stat *data)
 *   Std_ReturnType Rte_Read_FordVehLatCtrlSteerSts_Ford_LatCtlSte_D_Stat(Ford_LatCtlSte_D_Stat *data)
 *   Std_ReturnType Rte_Read_FordVehSelDrvModSteerSts_Ford_SelDrvMdeSte_D_Stat(Ford_SelDrvMdeSte_D_Stat *data)
 *   Std_ReturnType Rte_Read_FordVehTrlrAidEnaSts_Ford_TrlrAidEnbl_D2_Stat(Ford_TrlrAidEnbl_D2_Stat *data)
 *   Std_ReturnType Rte_Read_FordVehTrlrAidMsgTxtReq_Ford_TrlrAidMsgTxt_D2_Rq(Ford_TrlrAidMsgTxt_D2_Rq *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_Ford_EsaOn_B_Stat1_Ford_EsaOn_B_Stat(Ford_EsaOn_B_Stat data)
 *   Std_ReturnType Rte_Write_Ford_LatCtlLim_D_Stat1_Ford_LatCtlLim_D_Stat(Ford_LatCtlLim_D_Stat data)
 *   Std_ReturnType Rte_Write_Ford_LatCtlSte_D_Stat1_Ford_LatCtlSte_D_Stat(Ford_LatCtlSte_D_Stat data)
 *   Std_ReturnType Rte_Write_Ford_SelDrvMdeSte_D_Stat1_Ford_SelDrvMdeSte_D_Stat(Ford_SelDrvMdeSte_D_Stat data)
 *   Std_ReturnType Rte_Write_Ford_TrlrAidEnbl_D2_Stat1_Ford_TrlrAidEnbl_D2_Stat(Ford_TrlrAidEnbl_D2_Stat data)
 *   Std_ReturnType Rte_Write_Ford_TrlrAidMsgTxt_D2_Rq1_Ford_TrlrAidMsgTxt_D2_Rq(Ford_TrlrAidMsgTxt_D2_Rq data)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_FordMsg417BusHiSpdPer1 FordMsg417BusHiSpdPer1
FUNC(void, FordMsg417BusHiSpd_CODE) FordMsg417BusHiSpdPer1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define FordMsg417BusHiSpd_STOP_SEC_CODE
# include "FordMsg417BusHiSpd_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_FORDMSG417BUSHISPD_H */
