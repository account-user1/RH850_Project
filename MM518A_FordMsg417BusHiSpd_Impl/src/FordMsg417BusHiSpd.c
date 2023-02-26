/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  FordMsg417BusHiSpd.c
 *        Config:  C:/Component/MM518A_FordMsg417BusHiSpd_Impl/tools/Component.dpa
 *     SW-C Type:  FordMsg417BusHiSpd
 *  Generated at:  Wed Nov 29 15:17:58 2017
 *
 *     Generator:  MICROSAR RTE Generator Version 4.13.0
 *                 RTE Core Version 1.13.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  C-Code implementation template for SW-C <FordMsg417BusHiSpd>
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of version logging area >>                DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/* PRQA S 0777, 0779 EOF */ /* MD_MSR_5.1_777, MD_MSR_5.1_779 */
/**********************************************************************************************************************
* Copyright 2017 Nexteer 
* Nexteer Confidential
*
* Module File Name  : FordMsg417BusHiSpd.c
* Module Description: FordMsg417BusHiSpd - MM518A 
* Project           : CBD
* Author            : Sheeja R(TATA Elxsi)
***********************************************************************************************************************
* Version Control:
* %version:          1 %
* %derived_by:       nz4qtt %
*----------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author    Change Description                                                              SCR #
* --------  -------  --------  --------------------------------------------------------------------------  ------------
* 11/20/17   1       SR(TATA)  Initial version																EA4#17262
*----------------------------------------------------------------------------------------------------------------------
**********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of version logging area >>                  DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

#include "Rte_FordMsg417BusHiSpd.h" /* PRQA S 0857 */ /* MD_MSR_1.1_857 */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/* MISRA-C:2004 Rule 19.1 [NXTRDEV 19.1.1]: AUTOSAR requires deviation from this rule for Memory Mapping include statements */
/* MISRA-C:2004 Rule 16.10 [NXTRDEV 16.10.1]: There is no appropriate action to take on the return values for Rte_Read and Rte_Write */ 


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of include and declaration area >>          DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *
 * Used AUTOSAR Data Types
 *
 **********************************************************************************************************************
 *
 * Primitive Types:
 * ================
 * Ford_EsaOn_B_Stat: Boolean
 *
 * Enumeration Types:
 * ==================
 * Ford_LatCtlLim_D_Stat: Enumeration of integer in interval [0...3] with enumerators
 *   Cx0_LimitNotReached (0U)
 *   Cx1_LimitClose (1U)
 *   Cx2_LimitReached (2U)
 *   Cx3_LimitWithDriverActive (3U)
 * Ford_LatCtlSte_D_Stat: Enumeration of integer in interval [0...7] with enumerators
 *   Cx0_Unavailable (0U)
 *   Cx1_Available (1U)
 *   Cx2_ContLatControlInProgress (2U)
 *   Cx3_RampOut (3U)
 *   Cx4_Denied (4U)
 *   Cx5_NotUsed1 (5U)
 *   Cx6_NotUsed2 (6U)
 *   Cx7_NotUsed3 (7U)
 * Ford_SelDrvMdeSte_D_Stat: Enumeration of integer in interval [0...3] with enumerators
 *   Cx0_NotAvailable (0U)
 *   Cx1_Available (1U)
 *   Cx2_TemporarilyNotAvailable (2U)
 *   Cx3_Faulty (3U)
 * Ford_TrlrAidEnbl_D2_Stat: Enumeration of integer in interval [0...7] with enumerators
 *   Cx0_Inactive (0U)
 *   Cx1_TbaActive (1U)
 *   Cx2_TbaSetup (2U)
 *   Cx3_TbaOffTrgSetup (3U)
 *   Cx4_TbaOffTrgActive (4U)
 *   Cx5_TbaActiveExpertAvail (5U)
 *   Cx6_TbaActiveExpertActive (6U)
 *   Cx7_NotUsed_1 (7U)
 * Ford_TrlrAidMsgTxt_D2_Rq: Enumeration of integer in interval [0...63] with enumerators
 *   Cx00_NoMessage (0U)
 *   Cx01_Message1 (1U)
 *   Cx02_Message2 (2U)
 *   Cx03_Message3 (3U)
 *   Cx04_Message4 (4U)
 *   Cx05_Message5 (5U)
 *   Cx06_Message6 (6U)
 *   Cx07_Message7 (7U)
 *   Cx08_Message8 (8U)
 *   Cx09_Message9 (9U)
 *   Cx0A_Message10 (10U)
 *   Cx0B_Message11 (11U)
 *   Cx0C_Message12 (12U)
 *   Cx0D_Message13 (13U)
 *   Cx0E_Message14 (14U)
 *   Cx0F_Message15 (15U)
 *   Cx10_Message16 (16U)
 *   Cx11_Message17 (17U)
 *   Cx12_Message18 (18U)
 *   Cx13_Message19 (19U)
 *   Cx14_Message20 (20U)
 *   Cx15_Message21 (21U)
 *   Cx16_Message22 (22U)
 *   Cx17_Message23 (23U)
 *   Cx18_Message24 (24U)
 *   Cx19_Message25 (25U)
 *   Cx1A_Message26 (26U)
 *   Cx1B_Message27 (27U)
 *   Cx1C_Message28 (28U)
 *   Cx1D_Message29 (29U)
 *   Cx1E_Message30 (30U)
 *   Cx1F_Message31 (31U)
 *   Cx23_Message35 (35U)
 *   Cx28_Message40 (40U)
 *   Cx2D_Message45 (45U)
 *   Cx32_Message50 (50U)
 *   Cx37_Message55 (55U)
 *   Cx3C_Message60 (60U)
 *   Cx3D_Message61 (61U)
 *   Cx3E_Message62 (62U)
 *   Cx3F_Message63 (63U)
 *
 *********************************************************************************************************************/


#define FordMsg417BusHiSpd_START_SEC_CODE
#include "FordMsg417BusHiSpd_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: FordMsg417BusHiSpdInit1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: FordMsg417BusHiSpdInit1_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, FordMsg417BusHiSpd_CODE) FordMsg417BusHiSpdInit1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: FordMsg417BusHiSpdInit1
 *********************************************************************************************************************/
								/**Do Nothing**/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

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
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: FordMsg417BusHiSpdPer1_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, FordMsg417BusHiSpd_CODE) FordMsg417BusHiSpdPer1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: FordMsg417BusHiSpdPer1
 *********************************************************************************************************************/

  VAR(Ford_TrlrAidMsgTxt_D2_Rq, AUTOMATIC) Ford_TrlrAidMsgTxt_D2_Rq_Cnt_T_enum;
  VAR(Ford_TrlrAidEnbl_D2_Stat, AUTOMATIC) Ford_TrlrAidEnbl_D2_Stat_Cnt_T_enum;
  VAR(Ford_SelDrvMdeSte_D_Stat, AUTOMATIC) FordVehSelDrvModSteerSts_Cnt_T_enum;
  VAR(Ford_EsaOn_B_Stat, AUTOMATIC) FordVehEvasSteerAssiSts_Cnt_T_enum;
  VAR(Ford_LatCtlLim_D_Stat, AUTOMATIC) FordVehLatCtrlLimSts_Cnt_T_enum;
  VAR(Ford_LatCtlSte_D_Stat, AUTOMATIC) FordVehLatCtrlSteerSts_Cnt_T_enum;
  
     /*Reading inputs from RTE*/
  (void)Rte_Read_FordVehEvasSteerAssiSts_Ford_EsaOn_B_Stat(&FordVehEvasSteerAssiSts_Cnt_T_enum);
  (void)Rte_Read_FordVehLatCtrlLimSts_Ford_LatCtlLim_D_Stat(&FordVehLatCtrlLimSts_Cnt_T_enum);
  (void)Rte_Read_FordVehLatCtrlSteerSts_Ford_LatCtlSte_D_Stat(&FordVehLatCtrlSteerSts_Cnt_T_enum);
  (void)Rte_Read_FordVehSelDrvModSteerSts_Ford_SelDrvMdeSte_D_Stat(&FordVehSelDrvModSteerSts_Cnt_T_enum);
  (void)Rte_Read_FordVehTrlrAidEnaSts_Ford_TrlrAidEnbl_D2_Stat(&Ford_TrlrAidEnbl_D2_Stat_Cnt_T_enum);
  (void)Rte_Read_FordVehTrlrAidMsgTxtReq_Ford_TrlrAidMsgTxt_D2_Rq(&Ford_TrlrAidMsgTxt_D2_Rq_Cnt_T_enum);

	 
	
	/* Write RTE outputs */
	(void)Rte_Write_Ford_EsaOn_B_Stat1_Ford_EsaOn_B_Stat(FordVehEvasSteerAssiSts_Cnt_T_enum);
    (void)Rte_Write_Ford_LatCtlLim_D_Stat1_Ford_LatCtlLim_D_Stat(FordVehLatCtrlLimSts_Cnt_T_enum);
    (void)Rte_Write_Ford_LatCtlSte_D_Stat1_Ford_LatCtlSte_D_Stat(FordVehLatCtrlSteerSts_Cnt_T_enum);
    (void)Rte_Write_Ford_SelDrvMdeSte_D_Stat1_Ford_SelDrvMdeSte_D_Stat(FordVehSelDrvModSteerSts_Cnt_T_enum);
	(void)Rte_Write_Ford_TrlrAidEnbl_D2_Stat1_Ford_TrlrAidEnbl_D2_Stat(Ford_TrlrAidEnbl_D2_Stat_Cnt_T_enum);
	(void)Rte_Write_Ford_TrlrAidMsgTxt_D2_Rq1_Ford_TrlrAidMsgTxt_D2_Rq(Ford_TrlrAidMsgTxt_D2_Rq_Cnt_T_enum);
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}


#define FordMsg417BusHiSpd_STOP_SEC_CODE
#include "FordMsg417BusHiSpd_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of function definition area >>            DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of function definition area >>              DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of removed code area >>                   DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of removed code area >>                     DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
