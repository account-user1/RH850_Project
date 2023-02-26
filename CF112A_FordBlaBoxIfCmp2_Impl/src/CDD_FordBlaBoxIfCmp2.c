/***********************************************************************************************************************
* Copyright 2018 Nexteer
* Nexteer Confidential
*
* Module File Name: CDD_FordBlaBoxIfCmp2.c
* Module Description: This file contains the RTE runnables for the CDD_FordBlaBoxIfCmp2 component
* Project           : CBD
* Author            : Disha Srivastava
************************************************************************************************************************
* Version Control:
* %version:         1 %
* %derived_by:      nz2610 %
* ---------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author    Change Description                                                           SCR #
* --------  -------  --------  ---------------------------------------------------------------------------  ----------
* 04/24/18  1        DS       Initial version  							   								 EA4#22952
*
***********************************************************************************************************************/

/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  CDD_FordBlaBoxIfCmp2.c
 *        Config:  C:/Users/nz2610/Documents/Synergy/Working/CF112A_FordBlaBoxIfCmp2_Impl/tools/Component.dpa
 *     SW-C Type:  CDD_FordBlaBoxIfCmp2
 *  Generated at:  Sun May  6 12:14:29 2018
 *
 *     Generator:  MICROSAR RTE Generator Version 4.13.0
 *                 RTE Core Version 1.13.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  C-Code implementation template for SW-C <CDD_FordBlaBoxIfCmp2>
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of version logging area >>                DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/* PRQA S 0777, 0779 EOF */ /* MD_MSR_5.1_777, MD_MSR_5.1_779 */

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of version logging area >>                  DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *
 * AUTOSAR Modelling Object Descriptions
 *
 **********************************************************************************************************************
 *
 * Data Types:
 * ===========
 * FordArbnCmd1
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * FordFeatSt1
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 *********************************************************************************************************************/

#include "Rte_CDD_FordBlaBoxIfCmp2.h" /* PRQA S 0857 */ /* MD_MSR_1.1_857 */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
 #include "fih_interfaces.h"
 #define ECUID1_CNT_U08	1

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
 * boolean: Boolean (standard type)
 * float32: Real in interval [-FLT_MAX...FLT_MAX] with single precision (standard type)
 * uint16: Integer in interval [0...65535] (standard type)
 * uint32: Integer in interval [0...4294967295] (standard type)
 * uint8: Integer in interval [0...255] (standard type)
 *
 * Enumeration Types:
 * ==================
 * FordArbnCmd1: Enumeration of integer in interval [0...255] with enumerators
 *   Cx0_PASSIVE (0U)
 *   Cx3_ACTIVE (3U)
 *   Cx5_LOCKED (5U)
 *   Cx99_DONT_CARE (99U)
 * FordFeatSt1: Enumeration of integer in interval [0...255] with enumerators
 *   Cx0_PASSIVE (0U)
 *   Cx1_ACTIVATION_REQUEST (1U)
 *   Cx2_RAMP_IN_REQUEST (2U)
 *   Cx3_ACTIVE (3U)
 *   Cx4_RAMP_OUT_REQUEST (4U)
 *   Cx5_LOCKED (5U)
 *
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   boolean *Rte_Pim_EvasSteerAssiFctCallTog(void)
 *
 *********************************************************************************************************************/


#define CDD_FordBlaBoxIfCmp2_START_SEC_CODE
#include "CDD_FordBlaBoxIfCmp2_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: FordBlaBoxIfCmp2Init1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 **********************************************************************************************************************
 *
 * Input Interfaces:
 * =================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Read_EcuId_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_FordEvasSteerAssiArbnCmd_Val(FordArbnCmd1 *data)
 *   Std_ReturnType Rte_Read_FordSteerTqDstbcRejctnArbnCmd_Val(FordArbnCmd1 *data)
 *   Std_ReturnType Rte_Read_FordWrSrvBrkPlsRednActvnCntr_Val(uint16 *data)
 *   Std_ReturnType Rte_Read_FordWrSrvEvasSteerAssiIntSts_Val(uint32 *data)
 *   Std_ReturnType Rte_Read_FordWrSrvSteerTqDstbcRejctnIntSts_Val(uint32 *data)
 *   Std_ReturnType Rte_Read_FordWrSrvTqSteerCmpActvnCntr_Val(uint16 *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_FordBrkPlsRednActvnCntr_Val(uint16 data)
 *   Std_ReturnType Rte_Write_FordEvasSteerAssiFeatSt_Val(FordFeatSt1 data)
 *   Std_ReturnType Rte_Write_FordEvasSteerAssiIntSts_Val(uint32 data)
 *   Std_ReturnType Rte_Write_FordEvasSteerAssiSwVers_Val(uint32 data)
 *   Std_ReturnType Rte_Write_FordEvasSteerAssiTqReq_Val(float32 data)
 *   Std_ReturnType Rte_Write_FordSteerTqDstbcRejctnFeatSt_Val(FordFeatSt1 data)
 *   Std_ReturnType Rte_Write_FordSteerTqDstbcRejctnIntSts_Val(uint32 data)
 *   Std_ReturnType Rte_Write_FordSteerTqDstbcRejctnSwVers_Val(uint32 data)
 *   Std_ReturnType Rte_Write_FordSteerTqDstbcRejctnTqReq_Val(float32 data)
 *   Std_ReturnType Rte_Write_FordTqSteerCmpActvnCntr_Val(uint16 data)
 *   Std_ReturnType Rte_Write_FordVehEvasSteerAssiSts_Val(Ford_EsaOn_B_Stat data)
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: FordBlaBoxIfCmp2Init1_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, CDD_FordBlaBoxIfCmp2_CODE) FordBlaBoxIfCmp2Init1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: FordBlaBoxIfCmp2Init1
 *********************************************************************************************************************/
VAR(uint8, AUTOMATIC) EcuId_Cnt_T_u08;
(void) Rte_Read_EcuId_Val(&EcuId_Cnt_T_u08);
if(EcuId_Cnt_T_u08 == ECUID1_CNT_U08) 
{
	FIH_ESA_init();
	FIH_STDR_init();
}
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: FordBlaBoxIfCmp2Per1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on TimingEvent every 4ms
 *
 **********************************************************************************************************************
 *
 * Input Interfaces:
 * =================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Read_EcuId_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_FordEvasSteerAssiArbnCmd_Val(FordArbnCmd1 *data)
 *   Std_ReturnType Rte_Read_FordSteerTqDstbcRejctnArbnCmd_Val(FordArbnCmd1 *data)
 *   Std_ReturnType Rte_Read_FordWrSrvBrkPlsRednActvnCntr_Val(uint16 *data)
 *   Std_ReturnType Rte_Read_FordWrSrvEvasSteerAssiIntSts_Val(uint32 *data)
 *   Std_ReturnType Rte_Read_FordWrSrvSteerTqDstbcRejctnIntSts_Val(uint32 *data)
 *   Std_ReturnType Rte_Read_FordWrSrvTqSteerCmpActvnCntr_Val(uint16 *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_FordBrkPlsRednActvnCntr_Val(uint16 data)
 *   Std_ReturnType Rte_Write_FordEvasSteerAssiFeatSt_Val(FordFeatSt1 data)
 *   Std_ReturnType Rte_Write_FordEvasSteerAssiIntSts_Val(uint32 data)
 *   Std_ReturnType Rte_Write_FordEvasSteerAssiSwVers_Val(uint32 data)
 *   Std_ReturnType Rte_Write_FordEvasSteerAssiTqReq_Val(float32 data)
 *   Std_ReturnType Rte_Write_FordSteerTqDstbcRejctnFeatSt_Val(FordFeatSt1 data)
 *   Std_ReturnType Rte_Write_FordSteerTqDstbcRejctnIntSts_Val(uint32 data)
 *   Std_ReturnType Rte_Write_FordSteerTqDstbcRejctnSwVers_Val(uint32 data)
 *   Std_ReturnType Rte_Write_FordSteerTqDstbcRejctnTqReq_Val(float32 data)
 *   Std_ReturnType Rte_Write_FordTqSteerCmpActvnCntr_Val(uint16 data)
 *   Std_ReturnType Rte_Write_FordVehEvasSteerAssiSts_Val(Ford_EsaOn_B_Stat data)
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: FordBlaBoxIfCmp2Per1_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, CDD_FordBlaBoxIfCmp2_CODE) FordBlaBoxIfCmp2Per1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: FordBlaBoxIfCmp2Per1
 *********************************************************************************************************************/
VAR(uint8, AUTOMATIC) EcuId_Cnt_T_u08;
(void) Rte_Read_EcuId_Val(&EcuId_Cnt_T_u08);
if(EcuId_Cnt_T_u08 == ECUID1_CNT_U08) 
{
	FIH_STDR_function();
	if(*Rte_Pim_EvasSteerAssiFctCallTog() == FALSE)
	{
		
		*Rte_Pim_EvasSteerAssiFctCallTog() = TRUE;
	}
	else
	{
		FIH_ESA_function();
		*Rte_Pim_EvasSteerAssiFctCallTog() = FALSE;
	}
	
}

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}


#define CDD_FordBlaBoxIfCmp2_STOP_SEC_CODE
#include "CDD_FordBlaBoxIfCmp2_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


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
