/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  FordMsg3CCBusHiSpd.c
 *        Config:  C:/Users/NZ5334/Documents/Synergy/Working/ses_dev_ea4/MM533A_FordMsg3CCBusHiSpd_Impl/tools/Component.dpa
 *     SW-C Type:  FordMsg3CCBusHiSpd
 *  Generated at:  Thu Apr 26 15:57:21 2018
 *
 *     Generator:  MICROSAR RTE Generator Version 4.13.0
 *                 RTE Core Version 1.13.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  C-Code implementation template for SW-C <FordMsg3CCBusHiSpd>
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of version logging area >>                DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/* PRQA S 0777, 0779 EOF */ /* MD_MSR_5.1_777, MD_MSR_5.1_779 */
/**********************************************************************************************************************
* Copyright 2018 Nexteer 
* Nexteer Confidential
*
* Module File Name  : FordMsg451BusHiSpd.c
* Module Description: Ford Message 451 Bus High Speed
* Project           : CBD 
* Author            : Kiran Paul(TATA ELXSI)
***********************************************************************************************************************
* Version Control:
* %version:          1 %
* %derived_by:       nz5334 %
*----------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author         Change Description                                                           SCR #
* -------   -------  --------  ---------------------------------------------------------------------------     --------
* 04/19/18   1       KP(TATA)   Initial version                                                                 
* **********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of version logging area >>                  DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *
 * AUTOSAR Modelling Object Descriptions
 *
 **********************************************************************************************************************
 *
 * Component Types:
 * ================
 * FordMsg3CCBusHiSpd
 *   The purpose of the Ford Message 3CC Bus High Speed function is to transmit Electric Power Assisted Steering information to other vehicle modules
 *
 *
 * Port Prototypes:
 * ================
 * FordVehLaneAssiAvl
 *   Ford Vehicle Lane Assist Available is received as input from EPS and processed to CAN Bus
 *
 * FordVehLaneAssiHandsOff
 *   Ford Vehicle Lane Assist Hands Off is received as input from EPS and processed to CAN Bus
 *
 * FordVehLaneAssiRejctn
 *   Ford Vehicle Lane Assist Rejection is received as input from EPS and processed to CAN Bus
 *
 * FordVehLoSpdMtnCtrlBrkDecelEna
 *   Ford Vehicle Low Speed Motion Control Brake Deceleration Enable is received as input from EPS and processed to CAN Bus
 *
 * FordVehLoSpdMtnCtrlBrkTqReq
 *   Ford Vehicle Low Speed Motion Control Brake Torque Request is received as input from EPS and processed to CAN Bus
 *
 * FordVehTrfcJamAvdHandsOnConf
 *   Ford Vehicle Traffic Jam Avoidance Hands On Confidence is received as input from EPS and processed to CAN Bus
 *
 * FordVehTrlrAgTarCalcn
 *   Ford Vehicle Trailer Angle Target Calculation is received as input from EPS and processed to CAN Bus
 *
 * Ford_LaActAvail_D_Actl
 *   Processed value of Ford_LaActAvail_D_Actl. Customer datatype should be used. Datatype:Ford_LaActAvail_D_Actl Elements are: 0 - "Cx0_LCA_LKA_LDW_Suppress", 1 - "Cx1_LCA_LKA_Suppress_LDW_Avail2 - "Cx2_LCA_LKA_Avail_LDW_Suppress", 3 - "Cx3_LKA_LCA_LDW_Avail"
 *
 * Ford_LaActDeny_B_Actl
 *   Processed value of Ford_LaActDeny_B_Actl1. Customer datatype should be used. Datatype:Ford_LaActDeny_B_Actl. Elements are: 0 - "Cx0_LA_Not_Denied", 1 - "Cx1_LA_Denied
 *
 * Ford_LaHandsOff_B_Actl
 *   Processed value of Ford_LaHandsOff_B_Actl. Customer datatype should be used. Datatype:Ford_LaHandsOff_B_Actl. Elements are: 0 - "Cx0_Hands_On", 1 - "Cx1_Hands_Off
 *
 * Ford_LsmcBrkDecelEnbl_D_Rq
 *   Processed value of Ford_LsmcBrkDecelEnbl_D_Rq. Customer datatype should be used. Datatype:Ford_LsmcBrkDecelEnbl_D_Rq. Elements are: 0 - "Cx0' _Off", 1 - "Cx1_On2 - "Cx2_NotUsed1", 3 - "Cx3_NotUsed2
 *
 * Ford_LsmcBrk_Tq_Rq
 *   Processed value of Ford_LsmcBrk_Tq_Rq. Customer datatype should be used. Datatype:Ford_LsmcBrk_Tq_Rq with the range of 0 to 32764.
 *
 * Ford_TjaHandsOnCnfdnc_B_Est
 *   Processed value of Ford_TjaHandsOnCnfdnc_B_Est.Customer datatype should be used. Datatype:Ford_TjaHandsOnCnfdnc_B_Est1. Elements are: 0 - "C' x0_Low_Confidence", 1 - "Cx1_High_Confidence
 *
 * Ford_TrlrAn_An_TrgtCalc
 *   Processed value of Ford_TrlrAn_An_TrgtCalc.Customer datatype should be  used. Datatype:Ford_TrlrAn_An_TrgtCalc with the range of 0 to 255.
 *
 *
 * Runnable Entities:
 * ==================
 * FordMsg3CCBusHiSpdInit1
 *   Initialization Runnable
 *
 * FordMsg3CCBusHiSpdPer1
 *   Periodic Runnable at 10ms
 *
 *********************************************************************************************************************/

#include "Rte_FordMsg3CCBusHiSpd.h" /* PRQA S 0857 */ /* MD_MSR_1.1_857 */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
 
 #include "NxtrFixdPt.h"
 #include "NxtrMath.h"
 
 /******************************************** File Level Rule Deviations *********************************************/
/* MISRA-C:2004 Rule 19.1 [NXTRDEV 19.1.1]: AUTOSAR requires deviation from this rule for Memory Mapping include statements */
/* MISRA-C:2004 Rule 16.10 [NXTRDEV 16.10.1]: There is no appropriate action to take on the return values for Rte_Read, Rte_Write */

 /********************************************* Embedded Local Constants **********************************************/

#define LOSPDMTNCTRLBRKDECELMAX_CNT_U16   	   	((uint16)32764U)
#define LOSPDMTNCTRLBRKDECELMIN_CNT_U16        	((uint16)0U)
#define SCAGFACBRKTQREQ_NWTMTR_F32			   	(0.25F)
#define Cx1_Hands_Off							(TRUE)
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
 * Ford_LaActDeny_B_Actl: Boolean
 * Ford_LaHandsOff_B_Actl: Boolean
 * Ford_LsmcBrk_Tq_Rq: Integer in interval [0...8191]
 *   Unit: [Nm], Factor: 4, Offset: 0
 * Ford_TjaHandsOnCnfdnc_B_Est: Boolean
 * Ford_TrlrAn_An_TrgtCalc: Integer in interval [0...255]
 *   Unit: [degrees], Factor: 1, Offset: -128
 * float32: Real in interval [-FLT_MAX...FLT_MAX] with single precision (standard type)
 * uint8: Integer in interval [0...255] (standard type)
 *
 * Enumeration Types:
 * ==================
 * Ford_LaActAvail_D_Actl: Enumeration of integer in interval [0...3] with enumerators
 *   Cx0_LCA_LKA_LDW_Suppress (0U)
 *   Cx1_LCA_LKA_Suppress_LDW_Avail (1U)
 *   Cx2_LCA_LKA_Avail_LDW_Suppress (2U)
 *   Cx3_LKA_LCA_LDW_Avail (3U)
 * Ford_LsmcBrkDecelEnbl_D_Rq: Enumeration of integer in interval [0...3] with enumerators
 *   Cx0_Off (0U)
 *   Cx1_On (1U)
 *   Cx2_NotUsed1 (2U)
 *   Cx3_NotUsed2 (3U)
 *
 *********************************************************************************************************************/


#define FordMsg3CCBusHiSpd_START_SEC_CODE
#include "FordMsg3CCBusHiSpd_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: FordMsg3CCBusHiSpdInit1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 **********************************************************************************************************************
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_Ford_LaHandsOff_B_Actl_Ford_LaHandsOff_B_Actl(Ford_LaHandsOff_B_Actl data)
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: FordMsg3CCBusHiSpdInit1_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, FordMsg3CCBusHiSpd_CODE) FordMsg3CCBusHiSpdInit1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: FordMsg3CCBusHiSpdInit1
 *********************************************************************************************************************/
	VAR(Ford_LaHandsOff_B_Actl, AUTOMATIC) Ford_LaHandsOff_B_Actl_Cnt_T_enum;
 
	Ford_LaHandsOff_B_Actl_Cnt_T_enum = Cx1_Hands_Off;
	(void) Rte_Write_Ford_LaHandsOff_B_Actl_Ford_LaHandsOff_B_Actl(Ford_LaHandsOff_B_Actl_Cnt_T_enum);
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: FordMsg3CCBusHiSpdPer1
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
 *   Std_ReturnType Rte_Read_FordVehLaneAssiAvl_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_FordVehLaneAssiHandsOff_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_FordVehLaneAssiRejctn_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_FordVehLoSpdMtnCtrlBrkDecelEna_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_FordVehLoSpdMtnCtrlBrkTqReq_Val(float32 *data)
 *   Std_ReturnType Rte_Read_FordVehTrfcJamAvdHandsOnConf_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_FordVehTrlrAgTarCalcn_Val(uint8 *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_Ford_LaActAvail_D_Actl_Ford_LaActAvail_D_Actl(Ford_LaActAvail_D_Actl data)
 *   Std_ReturnType Rte_Write_Ford_LaActDeny_B_Actl_Ford_LaActDeny_B_Actl(Ford_LaActDeny_B_Actl data)
 *   Std_ReturnType Rte_Write_Ford_LaHandsOff_B_Actl_Ford_LaHandsOff_B_Actl(Ford_LaHandsOff_B_Actl data)
 *   Std_ReturnType Rte_Write_Ford_LsmcBrkDecelEnbl_D_Rq_Ford_LsmcBrkDecelEnbl_D_Rq(Ford_LsmcBrkDecelEnbl_D_Rq data)
 *   Std_ReturnType Rte_Write_Ford_LsmcBrk_Tq_Rq_Ford_LsmcBrk_Tq_Rq(Ford_LsmcBrk_Tq_Rq data)
 *   Std_ReturnType Rte_Write_Ford_TjaHandsOnCnfdnc_B_Est_Ford_TjaHandsOnCnfdnc_B_Est(Ford_TjaHandsOnCnfdnc_B_Est data)
 *   Std_ReturnType Rte_Write_Ford_TrlrAn_An_TrgtCalc_Ford_TrlrAn_An_TrgtCalc(Ford_TrlrAn_An_TrgtCalc data)
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: FordMsg3CCBusHiSpdPer1_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, FordMsg3CCBusHiSpd_CODE) FordMsg3CCBusHiSpdPer1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: FordMsg3CCBusHiSpdPer1
 *********************************************************************************************************************/

	VAR(uint8, AUTOMATIC)   FordVehLaneAssiAvl_Cnt_T_u08;
	VAR(uint8, AUTOMATIC)   FordVehLaneAssiRejctn_Cnt_T_u08;
	VAR(uint8, AUTOMATIC)   FordVehLaneAssiHandsOff_Cnt_T_u08;
	VAR(uint8, AUTOMATIC)   FordVehLoSpdMtnCtrlBrkDecelEna_Cnt_T_u08;
	VAR(uint8, AUTOMATIC)   FordVehTrfcJamAvdHandsOnConf_Cnt_T_u08;
	VAR(uint8, AUTOMATIC)   FordVehTrlrAgTarCalcn_Cnt_T_u08;
	
	VAR(uint16, AUTOMATIC)   Ford_LsmcBrk_Tq_Rq_Cnt_T_u16;
	
	VAR(float32, AUTOMATIC) FordVehLoSpdMtnCtrlBrkTqReq_NwtMtr_T_f32;
	VAR(float32, AUTOMATIC) FordVehLoSpdMtntemp_NwtMtr_T_f32;
	
	VAR(Ford_LaActAvail_D_Actl, AUTOMATIC) 		Ford_LaActAvail_D_Actl_Cnt_T_enum;
	VAR(Ford_LaActDeny_B_Actl, AUTOMATIC) 		Ford_LaActDeny_B_Actl_Cnt_T_enum;
	VAR(Ford_LaHandsOff_B_Actl, AUTOMATIC) 		Ford_LaHandsOff_B_Actl_Cnt_T_enum;
	VAR(Ford_LsmcBrk_Tq_Rq, AUTOMATIC) 			Ford_LsmcBrk_Tq_Rq_Cnt_T_enum;
	VAR(Ford_LsmcBrkDecelEnbl_D_Rq, AUTOMATIC) 	Ford_LsmcBrkDecelEnbl_D_Rq_Cnt_T_enum;
	VAR(Ford_TjaHandsOnCnfdnc_B_Est, AUTOMATIC)	Ford_TjaHandsOnCnfdnc_B_Est_Cnt_T_enum;
	VAR(Ford_TrlrAn_An_TrgtCalc, AUTOMATIC) 	Ford_TrlrAn_An_TrgtCalc_Cnt_T_enum;
 
	/*** Read Inputs from RTE ***/
	(void) Rte_Read_FordVehLaneAssiAvl_Val(&FordVehLaneAssiAvl_Cnt_T_u08);
	(void) Rte_Read_FordVehLaneAssiHandsOff_Val(&FordVehLaneAssiHandsOff_Cnt_T_u08);
	(void) Rte_Read_FordVehLaneAssiRejctn_Val(&FordVehLaneAssiRejctn_Cnt_T_u08);
	(void) Rte_Read_FordVehLoSpdMtnCtrlBrkDecelEna_Val(&FordVehLoSpdMtnCtrlBrkDecelEna_Cnt_T_u08);
	(void) Rte_Read_FordVehLoSpdMtnCtrlBrkTqReq_Val(&FordVehLoSpdMtnCtrlBrkTqReq_NwtMtr_T_f32);
	(void) Rte_Read_FordVehTrfcJamAvdHandsOnConf_Val(&FordVehTrfcJamAvdHandsOnConf_Cnt_T_u08);
	(void) Rte_Read_FordVehTrlrAgTarCalcn_Val(&FordVehTrlrAgTarCalcn_Cnt_T_u08);
 
 
	/***Start of Ford_LaActAvail_D_Actl1Procg***/
	Ford_LaActAvail_D_Actl_Cnt_T_enum = (Ford_LaActAvail_D_Actl)FordVehLaneAssiAvl_Cnt_T_u08;
	/***End of Ford_LaActAvail_D_Actl1Procg***/
	
	/***Start of Ford_LsmcBrkDecelEnbl_D_Rq1Procg***/
	Ford_LsmcBrkDecelEnbl_D_Rq_Cnt_T_enum = (Ford_LsmcBrkDecelEnbl_D_Rq)FordVehLoSpdMtnCtrlBrkDecelEna_Cnt_T_u08;
	/***End of Ford_LsmcBrkDecelEnbl_D_Rq1Procg***/
 
	/***Start of Ford_LaActDeny_B_Actl1Procg***/
	Ford_LaActDeny_B_Actl_Cnt_T_enum = (Ford_LaActDeny_B_Actl)FordVehLaneAssiRejctn_Cnt_T_u08;
	/***End of Ford_LaActDeny_B_Actl1Procg***/
	
	/***Start of Ford_TjaHandsOnCnfdnc_B_Est1Procg***/
	Ford_TjaHandsOnCnfdnc_B_Est_Cnt_T_enum = (Ford_TjaHandsOnCnfdnc_B_Est)FordVehTrfcJamAvdHandsOnConf_Cnt_T_u08;
	/***End of Ford_TjaHandsOnCnfdnc_B_Est1Procg***/
 
	/***Start of Ford_LaHandsOff_B_Actl1Procg***/
	Ford_LaHandsOff_B_Actl_Cnt_T_enum  =(Ford_LaHandsOff_B_Actl)FordVehLaneAssiHandsOff_Cnt_T_u08;
	/***End of Ford_LaHandsOff_B_Actl1Procg***/
	
	/***Start of Ford_TrlrAn_An_TrgtCalcProcg***/
	Ford_TrlrAn_An_TrgtCalc_Cnt_T_enum = FordVehTrlrAgTarCalcn_Cnt_T_u08;
	/***End of Ford_TrlrAn_An_TrgtCalcProcg***/
 
	/***Start of Ford_LsmcBrk_Tq_RqProcg***/
	FordVehLoSpdMtntemp_NwtMtr_T_f32 = (FordVehLoSpdMtnCtrlBrkTqReq_NwtMtr_T_f32 * SCAGFACBRKTQREQ_NWTMTR_F32);
 
	Ford_LsmcBrk_Tq_Rq_Cnt_T_u16 = FloatToFixd_u16_f32(FordVehLoSpdMtntemp_NwtMtr_T_f32, NXTRFIXDPT_FLOATTOP0_ULS_F32);
  
	Ford_LsmcBrk_Tq_Rq_Cnt_T_u16 = Lim_u16(Ford_LsmcBrk_Tq_Rq_Cnt_T_u16,LOSPDMTNCTRLBRKDECELMIN_CNT_U16,LOSPDMTNCTRLBRKDECELMAX_CNT_U16);
	Ford_LsmcBrk_Tq_Rq_Cnt_T_enum = (Ford_LsmcBrk_Tq_Rq)Ford_LsmcBrk_Tq_Rq_Cnt_T_u16;
	/***End of Ford_LsmcBrk_Tq_RqProcg***/
 
	/*** Write Outputs to RTE ***/
 
	(void) Rte_Write_Ford_LaActAvail_D_Actl_Ford_LaActAvail_D_Actl(Ford_LaActAvail_D_Actl_Cnt_T_enum);
	(void) Rte_Write_Ford_LaActDeny_B_Actl_Ford_LaActDeny_B_Actl(Ford_LaActDeny_B_Actl_Cnt_T_enum);
	(void) Rte_Write_Ford_LaHandsOff_B_Actl_Ford_LaHandsOff_B_Actl(Ford_LaHandsOff_B_Actl_Cnt_T_enum);
	(void) Rte_Write_Ford_LsmcBrkDecelEnbl_D_Rq_Ford_LsmcBrkDecelEnbl_D_Rq(Ford_LsmcBrkDecelEnbl_D_Rq_Cnt_T_enum);
	(void) Rte_Write_Ford_LsmcBrk_Tq_Rq_Ford_LsmcBrk_Tq_Rq(Ford_LsmcBrk_Tq_Rq_Cnt_T_enum);
	(void) Rte_Write_Ford_TjaHandsOnCnfdnc_B_Est_Ford_TjaHandsOnCnfdnc_B_Est(Ford_TjaHandsOnCnfdnc_B_Est_Cnt_T_enum);
	(void) Rte_Write_Ford_TrlrAn_An_TrgtCalc_Ford_TrlrAn_An_TrgtCalc(Ford_TrlrAn_An_TrgtCalc_Cnt_T_enum);

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}


#define FordMsg3CCBusHiSpd_STOP_SEC_CODE
#include "FordMsg3CCBusHiSpd_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


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
