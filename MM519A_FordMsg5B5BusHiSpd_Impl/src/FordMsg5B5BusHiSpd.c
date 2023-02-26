/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  FordMsg5B5BusHiSpd.c
 *        Config:  C:/Users/NZ5334/Documents/Synergy/Working/ses_dev_ea4/MM519A_FordMsg5B5BusHiSpd_Impl/tools/Component.dpa
 *     SW-C Type:  FordMsg5B5BusHiSpd
 *  Generated at:  Wed Apr 18 10:56:53 2018
 *
 *     Generator:  MICROSAR RTE Generator Version 4.13.0
 *                 RTE Core Version 1.13.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  C-Code implementation template for SW-C <FordMsg5B5BusHiSpd>
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of version logging area >>                DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/* PRQA S 0777, 0779 EOF */ /* MD_MSR_5.1_777, MD_MSR_5.1_779 */
/**********************************************************************************************************************
* Copyright 2017, 2018 Nexteer 
* Nexteer Confidential
*
* Module File Name  : FordMsg5B5BusHiSpd.c
* Module Description: FordMsg5B5BusHiSpd - MM519A
* Project           : CBD
* Author            : Kiran Paul(TATA Elxsi)
***********************************************************************************************************************
* Version Control:
* %version:          2 %
* %derived_by:       nz5334 %
*----------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author    Change Description                                                              SCR #
* --------  -------  --------  --------------------------------------------------------------------------  ------------
* 11/17/17   1       KP(TATA)  Initial version																EA4#17265  
* 04/05/18   2       KP(TATA)  Renamed output signals per FDD v3.0.0										EA4#20152
*----------------------------------------------------------------------------------------------------------------------
**********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of version logging area >>                  DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *
 * AUTOSAR Modelling Object Descriptions
 *
 **********************************************************************************************************************
 *
 * Port Prototypes:
 * ================
 * Ford_PSCM_AutoSarNMControl
 *   Ford Power Steering Control Module AUTOSAR NM Control
 *
 * Ford_PSCM_AutoSarNMNodeId
 *   Ford Power Steering Control Module AUTOSAR NM Node Identification
 *
 * Ford_PSCM_AutoSarNMReserved1
 *   It provide Power Steering Control Module AUTOSAR NM Reserved 1 to CAN. Doc Unit: Ford_PSCM_AutoSarNMReserved1.
 *
 * Ford_PSCM_AutoSarNMReserved2
 *   It provide Power Steering Control Module AUTOSAR NM Reserved 2 to CAN.Doc Unit: Ford_PSCM_AutoSarNMReserved2.
 *
 * Ford_PSCM_AutoSarNMReserved3
 *   It Provide Power Steering Control Module AUTOSAR NM Reserved 3 to CAN. Doc Unit: Ford_PSCM_AutoSarNMReserved3 
 *
 * Ford_PSCM_AutoSarNMReserved4
 *   It provide Power Steering Control Module AUTOSAR NM Reserved 4 to CAN.Doc Unit: Ford_PSCM_AutoSarNMReserved4.
 *
 * Ford_PSCM_GWNMProxy
 *   It Provide Power Steering Control Module Gateway NM Proxy to CAN.Doc Unit: Ford_PSCM_GWNMProxy 
 *
 * Ford_PSCM_GWOnBoardTester
 *   It provide Power Steering Control Module Gateway On Board Tester to CAN. Doc Unit: Ford_PSCM_GWOnBoardTester.
 *
 *********************************************************************************************************************/

#include "Rte_FordMsg5B5BusHiSpd.h" /* PRQA S 0857 */ /* MD_MSR_1.1_857 */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

#include "NxtrMath.h"

/* MISRA-C:2004 Rule 19.1 [NXTRDEV 19.1.1]: AUTOSAR requires deviation from this rule for Memory Mapping include statements */
 
/* MISRA-C:2004 Rule 16.10 [NXTRDEV 16.10.1]: There is no appropriate action to take on the return values for Rte_Write_ */ 

#define PWRSTEERCTRLMODLARNMCTRLMAXVAL_CNT_U08              ((uint8)0U)
#define PWRSTEERCTRLMODLARNMCTRLMINVAL_CNT_U08              ((uint8)0U)
#define PWRSTEERCTRLMODLARNMNODIDNMAXVAL_CNT_U08            ((uint8)181U)
#define PWRSTEERCTRLMODLARNMNODIDNMINVAL_CNT_U08            ((uint8)181U)
#define PWRSTEERCTRLMODLARNMNODIDN_CNT_U08		            ((uint8)181U)
#define PWRSTEERCTRLMODLARNMRESD1MAXVAL_CNT_U08             ((uint8)255U)
#define PWRSTEERCTRLMODLARNMRESD1MINVAL_CNT_U08             ((uint8)255U)
#define PWRSTEERCTRLMODLARNMRESD2MINVAL_CNT_U08             ((uint8)255U)
#define PWRSTEERCTRLMODLARNMRESD2MAXVAL_CNT_U08             ((uint8)255U)
#define PWRSTEERCTRLMODLARNMRESD3MAXVAL_CNT_U08             ((uint8)255U)
#define PWRSTEERCTRLMODLARNMRESD3MINVAL_CNT_U08             ((uint8)255U)
#define PWRSTEERCTRLMODLARNMRESD4MAXVAL_CNT_U08             ((uint8)255U)
#define PWRSTEERCTRLMODLARNMRESD4MINVAL_CNT_U08             ((uint8)255U)
#define PWRSTEERCTRLMODLGATEWYNMONBDTESTMAXVAL_CNT_U08      ((uint8)255U)
#define PWRSTEERCTRLMODLGATEWYNMONBDTESTMINVAL_CNT_U08      ((uint8)255U)
#define PWRSTEERCTRLMODLGATEWYNMPROXYMAXVAL_CNT_U08         ((uint8)255U)
#define PWRSTEERCTRLMODLGATEWYNMPROXYMINVAL_CNT_U08      	((uint8)255U)

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
 * uint8: Integer in interval [0...255] (standard type)
 *
 *********************************************************************************************************************/


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


#define FordMsg5B5BusHiSpd_START_SEC_CODE
#include "FordMsg5B5BusHiSpd_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: FordMsg5B5BusHiSpdInit1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: FordMsg5B5BusHiSpdInit1_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, FordMsg5B5BusHiSpd_CODE) FordMsg5B5BusHiSpdInit1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: FordMsg5B5BusHiSpdInit1
 *********************************************************************************************************************/
    *Rte_Pim_PwrSteerCtrlModlArNmNodIdnPrev() = PWRSTEERCTRLMODLARNMNODIDN_CNT_U08;
	*Rte_Pim_PwrSteerCtrlModlArNmCtrlPrev()   = PWRSTEERCTRLMODLARNMCTRLMINVAL_CNT_U08;
	*Rte_Pim_PwrSteerCtrlModlArNmResd1Prev()  = PWRSTEERCTRLMODLARNMRESD1MAXVAL_CNT_U08;
	*Rte_Pim_PwrSteerCtrlModlArNmResd2Prev()  = PWRSTEERCTRLMODLARNMRESD2MAXVAL_CNT_U08;
	*Rte_Pim_PwrSteerCtrlModlGatewyNmOnBdTestPrev() = PWRSTEERCTRLMODLGATEWYNMONBDTESTMAXVAL_CNT_U08;
	*Rte_Pim_PwrSteerCtrlModlGatewyNmProxyPrev() = PWRSTEERCTRLMODLGATEWYNMPROXYMAXVAL_CNT_U08;
	*Rte_Pim_PwrSteerCtrlModlArNmResd3Prev() = PWRSTEERCTRLMODLARNMRESD3MAXVAL_CNT_U08;
	*Rte_Pim_PwrSteerCtrlModlArNmResd4Prev() = PWRSTEERCTRLMODLARNMRESD4MAXVAL_CNT_U08;
		
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

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
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: FordMsg5B5BusHiSpdPer1_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, FordMsg5B5BusHiSpd_CODE) FordMsg5B5BusHiSpdPer1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: FordMsg5B5BusHiSpdPer1
 *********************************************************************************************************************/
  
    
  VAR(uint8, AUTOMATIC) Ford_PSCM_AutoSarNMNodeId_Cnt_T_u08;
  VAR(uint8, AUTOMATIC) Ford_PSCM_AutoSarNMControl_Cnt_T_u08;
  VAR(uint8, AUTOMATIC) Ford_PSCM_AutoSarNMReserved1_Cnt_T_u08;
  VAR(uint8, AUTOMATIC) Ford_PSCM_AutoSarNMReserved2_Cnt_T_u08;
  VAR(uint8, AUTOMATIC) Ford_PSCM_AutoSarNMReserved3_Cnt_T_u08;
  VAR(uint8, AUTOMATIC) Ford_PSCM_AutoSarNMReserved4_Cnt_T_u08;
  VAR(uint8, AUTOMATIC) Ford_PSCM_GWOnBoardTester_Cnt_T_u08;
  VAR(uint8, AUTOMATIC) Ford_PSCM_GWNMProxy_Cnt_T_u08;
 
      
  Ford_PSCM_AutoSarNMNodeId_Cnt_T_u08 = Lim_u08(*Rte_Pim_PwrSteerCtrlModlArNmNodIdnPrev(), PWRSTEERCTRLMODLARNMNODIDNMINVAL_CNT_U08, PWRSTEERCTRLMODLARNMNODIDNMAXVAL_CNT_U08);
  Ford_PSCM_AutoSarNMControl_Cnt_T_u08   = Lim_u08(*Rte_Pim_PwrSteerCtrlModlArNmCtrlPrev(),PWRSTEERCTRLMODLARNMCTRLMINVAL_CNT_U08,PWRSTEERCTRLMODLARNMCTRLMAXVAL_CNT_U08);
  Ford_PSCM_AutoSarNMReserved1_Cnt_T_u08  = Lim_u08(*Rte_Pim_PwrSteerCtrlModlArNmResd1Prev(),PWRSTEERCTRLMODLARNMRESD1MINVAL_CNT_U08,PWRSTEERCTRLMODLARNMRESD1MAXVAL_CNT_U08);
  Ford_PSCM_AutoSarNMReserved2_Cnt_T_u08  = Lim_u08(*Rte_Pim_PwrSteerCtrlModlArNmResd2Prev(),PWRSTEERCTRLMODLARNMRESD2MINVAL_CNT_U08,PWRSTEERCTRLMODLARNMRESD2MAXVAL_CNT_U08);
  Ford_PSCM_AutoSarNMReserved3_Cnt_T_u08 = Lim_u08(*Rte_Pim_PwrSteerCtrlModlArNmResd3Prev(),PWRSTEERCTRLMODLARNMRESD3MINVAL_CNT_U08,PWRSTEERCTRLMODLARNMRESD3MAXVAL_CNT_U08);
  Ford_PSCM_AutoSarNMReserved4_Cnt_T_u08 = Lim_u08(*Rte_Pim_PwrSteerCtrlModlArNmResd4Prev(),PWRSTEERCTRLMODLARNMRESD4MINVAL_CNT_U08,PWRSTEERCTRLMODLARNMRESD4MAXVAL_CNT_U08);
  Ford_PSCM_GWOnBoardTester_Cnt_T_u08 = Lim_u08(*Rte_Pim_PwrSteerCtrlModlGatewyNmOnBdTestPrev(),PWRSTEERCTRLMODLGATEWYNMONBDTESTMINVAL_CNT_U08,PWRSTEERCTRLMODLGATEWYNMONBDTESTMAXVAL_CNT_U08);
  Ford_PSCM_GWNMProxy_Cnt_T_u08 = Lim_u08(*Rte_Pim_PwrSteerCtrlModlGatewyNmProxyPrev(),PWRSTEERCTRLMODLGATEWYNMPROXYMINVAL_CNT_U08,PWRSTEERCTRLMODLGATEWYNMPROXYMAXVAL_CNT_U08); 
  
 /* Write RTE outputs */
  (void)Rte_Write_Ford_PSCM_AutoSarNMNodeId_Val(Ford_PSCM_AutoSarNMNodeId_Cnt_T_u08);
  (void)Rte_Write_Ford_PSCM_AutoSarNMControl_Val(Ford_PSCM_AutoSarNMControl_Cnt_T_u08);
  (void)Rte_Write_Ford_PSCM_AutoSarNMReserved1_Val(Ford_PSCM_AutoSarNMReserved1_Cnt_T_u08);
  (void)Rte_Write_Ford_PSCM_AutoSarNMReserved2_Val(Ford_PSCM_AutoSarNMReserved2_Cnt_T_u08);
  (void)Rte_Write_Ford_PSCM_AutoSarNMReserved3_Val(Ford_PSCM_AutoSarNMReserved3_Cnt_T_u08);
  (void)Rte_Write_Ford_PSCM_AutoSarNMReserved4_Val(Ford_PSCM_AutoSarNMReserved4_Cnt_T_u08);  
  (void)Rte_Write_Ford_PSCM_GWOnBoardTester_Val(Ford_PSCM_GWOnBoardTester_Cnt_T_u08);  
  (void)Rte_Write_Ford_PSCM_GWNMProxy_Val(Ford_PSCM_GWNMProxy_Cnt_T_u08);  
  
  
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}


#define FordMsg5B5BusHiSpd_STOP_SEC_CODE
#include "FordMsg5B5BusHiSpd_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


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
