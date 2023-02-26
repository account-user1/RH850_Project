/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  CDD_FordT3T6McuCfg.c
 *        Config:  C:/Users/gz324f/Desktop/working/component/Common/CM012A_FordT3T6McuCfg_Impl/tools/Component.dpa
 *     SW-C Type:  CDD_FordT3T6McuCfg
 *  Generated at:  Mon Sep 11 15:03:45 2017
 *
 *     Generator:  MICROSAR RTE Generator Version 4.13.0
 *                 RTE Core Version 1.13.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  C-Code implementation template for SW-C <CDD_FordT3T6McuCfg>
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of version logging area >>                DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/**********************************************************************************************************************
* Copyright 2017 Nexteer
* Nexteer Confidential
*
* Module File Name: CDD_FordT3T6McuCfg_Stub.c
* Module Description: Ford T3/T6 Mcu Configuration implementation for CM012A
* Project           : Ford T3/T6
* Author            : Xin Liu
***********************************************************************************************************************
* Version Control:
* %version:          8 %
* %derived_by:       gz324f %
*----------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author         Change Description                                                           SCR #
* -------   -------  --------  ---------------------------------------------------------------------------     --------
* 08/01/17  1        XL        Initial Version                                                                 EA4#14121
* 08/14/17  2        XL        ADC content added                                                               EA4#14121
* 08/25/17  3        XL        Bug fix in FordT3T6McuCfgPer3                                                   EA4#14121
* 09/11/17  4        XL        Updated for design 2.0.0                                                        EA4#14121
* 09/26/17  5        XL        Added back wait logic for Init3                                                 EA4#14121
* 11/21/17  6        XL        Removed stubbed DMA registers call since CM107B is integrated                   EA4#17612
* 02/28/18  7        XL        Updated CHRGPMPDIAGSCAGFAC_ULS_F32 per CM012A update                            EA4#21185
* 03/06/18  8        XL        Updated for CM012A FET Mitigation                                               EA4#21326
**********************************************************************************************************************/
 
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
 * HwAgSnsrTyp1
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 *********************************************************************************************************************/

#include "Rte_CDD_FordT3T6McuCfg.h" /* PRQA S 0857 */ /* MD_MSR_1.1_857 */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
#include "NxtrMath.h"
#include "CDD_MotCtrlMgr_Data.h"
#include "PIC2C_RegDefns.h"
#include "SYSCTL_RegDefns.h"
#include "ADCF0_RegDefns.h"
#include "ADCF1_RegDefns.h"

#include "Os.h"

/* Stub for enable DMA. TODO remove later */
#include "PEG_RegDefns.h"
#include "FSGD4A_RegDefns.h"


/********************************************* Embedded Local Constants **********************************************/
#define ADCCNVWAITTI_CNT_U32						((uint32)25U)

#define ADCF0CFGANDUSE_ADCSCAGFAC_VOLTPERCNT_F32 	(0.0008058608F)
#define ADCOUTPMAX_VOLT_F32							(5.0F)
#define ADCOUTPMIN_VOLT_F32							(0.0F)

#define CHRGPMPDIAGSCAGFAC_ULS_F32					(11.0F)			/* (20+2)/2 */
#define PWRDISCNCTSWTDIAGSCAGFAC_ULS_F32			(6.747126437F)	/* (200+34.8)/34.8 */
#define BATTVLTGSWD1SCAGFAC_ULS_F32					(6.0F)			/* (100+20)/20 */
#define BATTVLTGSCAGFAC_ULS_F32						(11.0F)			/* (20+2)/2 */

#define BATTADCOUTPMAX_VOLT_F32						(40.0F)


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
 * boolean: Boolean (standard type)
 * float32: Real in interval [-FLT_MAX...FLT_MAX] with single precision (standard type)
 * float32: Real in interval [-FLT_MAX...FLT_MAX] with single precision (standard type)
 * uint32: Integer in interval [0...4294967295] (standard type)
 * uint8: Integer in interval [0...255] (standard type)
 * uint8: Integer in interval [0...255] (standard type)
 *
 * Enumeration Types:
 * ==================
 * HwAgSnsrTyp1: Enumeration of integer in interval [0...255] with enumerators
 *   HWAGSNSRTYP_NOSNSR (0U)
 *   HWAGSNSRTYP_A1335 (1U)
 *
 *********************************************************************************************************************/


#define CDD_FordT3T6McuCfg_START_SEC_CODE
#include "CDD_FordT3T6McuCfg_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: FordT3T6McuCfgInit2
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: FordT3T6McuCfgInit2_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, CDD_FordT3T6McuCfg_CODE) FordT3T6McuCfgInit2(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: FordT3T6McuCfgInit2
 *********************************************************************************************************************/
	
	/* TODO confirm if this function needs to run after Adcf0CfgAndUseInit1 and Adcf1CfgAndUseInit1 as CM012A mentioned
	T1xx run this function before the ADC init */
	
	PIC2CTRGPREMUX0_PREMUX04 = 0x000U;
	PIC2CTRGPREMUX0_PREMUX03 = 0x012U;
	PIC2CTRGPREMUX0_PREMUX02 = 0x012U;
	PIC2CTRGPREMUX0_PREMUX00 = 0x480U;	/* TODO: confirm with Lucas why MUX00 and MUX01 are combined to 12 bits */
	
	PIC2CTRGPREMUX1_PREMUX14 = 0x000U;
	PIC2CTRGPREMUX1_PREMUX13 = 0x019U;
	PIC2CTRGPREMUX1_PREMUX12 = 0x019U;
	PIC2CTRGPREMUX1_PREMUX11 = 0x019U;
	PIC2CTRGPREMUX1_PREMUX10 = 0x000U;
	
	PIC2CTRGMUX0_MUX04 = 0x000U;
	PIC2CTRGMUX0_MUX03 = 0x001U;
	PIC2CTRGMUX0_MUX02 = 0x001U;
	PIC2CTRGMUX0_MUX01 = 0x001U;
	PIC2CTRGMUX0_MUX00 = 0x000U;
		
	PIC2CTRGMUX1_MUX14 = 0x000U;
	PIC2CTRGMUX1_MUX13 = 0x001U;
	PIC2CTRGMUX1_MUX12 = 0x001U;
	PIC2CTRGMUX1_MUX11 = 0x001U;
	PIC2CTRGMUX1_MUX10 = 0x000U;

	PIC2CEDGSEL0_EDGSEL04 = 0x0U;
	PIC2CEDGSEL0_EDGSEL03 = 0x0U;
	PIC2CEDGSEL0_EDGSEL02 = 0x0U;
	PIC2CEDGSEL0_EDGSEL01 = 0x0U;
	PIC2CEDGSEL0_EDGSEL00 = 0x0U;
	
	PIC2CEDGSEL1_EDGSEL14 = 0x0U;
	PIC2CEDGSEL1_EDGSEL13 = 0x0U;
	PIC2CEDGSEL1_EDGSEL12 = 0x0U;
	PIC2CEDGSEL1_EDGSEL11 = 0x0U;
	PIC2CEDGSEL1_EDGSEL10 = 0x0U;
	
	PIC2CENP2TIM0_ENP2TIM07 = 0x0U;
	PIC2CENP2TIM0_ENP2TIM06 = 0x0U;
	PIC2CENP2TIM0_ENP2TIM05 = 0x0U;
	PIC2CENP2TIM0_ENP2TIM04 = 0x0U;
	PIC2CENP2TIM0_ENP2TIM03 = 0x0U;
	PIC2CENP2TIM0_ENP2TIM02 = 0x0U;
	PIC2CENP2TIM0_ENP2TIM01 = 0x0U;
	PIC2CENP2TIM0_ENP2TIM00 = 0x0U;
	
	PIC2CENP2TIM1_ENP2TIM17 = 0x0U;
	PIC2CENP2TIM1_ENP2TIM16 = 0x0U;
	PIC2CENP2TIM1_ENP2TIM15 = 0x0U;
	PIC2CENP2TIM1_ENP2TIM14 = 0x0U;
	PIC2CENP2TIM1_ENP2TIM13 = 0x0U;
	PIC2CENP2TIM1_ENP2TIM12 = 0x0U;
	PIC2CENP2TIM1_ENP2TIM11 = 0x0U;
	PIC2CENP2TIM1_ENP2TIM10 = 0x0U;
	
	PIC2CENHIZDTM_HIZ2ECM = 0x0U;
	PIC2CENHIZDTM_HIZ1ECM = 0x0U;
	PIC2CENHIZDTM_HIZ0ECM = 0x0U;
	PIC2CENHIZDTM_HIZ2ESO = 0x0U;
	PIC2CENHIZDTM_HIZ1ESO = 0x0U;
	PIC2CENHIZDTM_HIZ0ESO = 0x0U;
	
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: FordT3T6McuCfgInit3
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 **********************************************************************************************************************
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_GetRefTmr1MicroSec32bit_Oper(uint32 *RefTmr)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetTiSpan1MicroSec32bit_Oper(uint32 RefTmr, uint32 *TiSpan)
 *     Synchronous Server Invocation. Timeout: None
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: FordT3T6McuCfgInit3_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, CDD_FordT3T6McuCfg_CODE) FordT3T6McuCfgInit3(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: FordT3T6McuCfgInit3
 *********************************************************************************************************************/

	VAR(uint32, AUTOMATIC) StartTime_Cnt_T_u32;
	VAR(uint32, AUTOMATIC) ElapsedTime_Cnt_T_u32;
	
	Rte_Call_GetRefTmr1MicroSec32bit_Oper(&StartTime_Cnt_T_u32);
	
	do
	{
		Rte_Call_GetTiSpan1MicroSec32bit_Oper(StartTime_Cnt_T_u32, &ElapsedTime_Cnt_T_u32);
	} while (ElapsedTime_Cnt_T_u32 < ADCCNVWAITTI_CNT_U32);

	/* Call trusted function to access DMA buffer */
	Call_Adcf0OutpInin();
	
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: FordT3T6McuCfgInit4
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
 *   Std_ReturnType Rte_Write_Adc1ScanGroup2Ref0_Val(float32 data)
 *   Std_ReturnType Rte_Write_Adc1ScanGroup2Ref1_Val(float32 data)
 *   Std_ReturnType Rte_Write_Adc1ScanGroup3Ref0_Val(float32 data)
 *   Std_ReturnType Rte_Write_Adc1ScanGroup3Ref1_Val(float32 data)
 *   Std_ReturnType Rte_Write_Adc1SelfDiag0_Val(float32 data)
 *   Std_ReturnType Rte_Write_Adc1SelfDiag2_Val(float32 data)
 *   Std_ReturnType Rte_Write_Adc1SelfDiag4_Val(float32 data)
 *   Std_ReturnType Rte_Write_BattRtnCurrAdc_Val(float32 data)
 *   Std_ReturnType Rte_Write_BattVltg_Val(float32 data)
 *   Std_ReturnType Rte_Write_BattVltgSwd1_Val(float32 data)
 *   Std_ReturnType Rte_Write_ChrgPmpDiag_Val(float32 data)
 *   Std_ReturnType Rte_Write_EcuT_Val(float32 data)
 *   Std_ReturnType Rte_Write_MotAg2Cos_Val(float32 data)
 *   Std_ReturnType Rte_Write_MotAg2Sin_Val(float32 data)
 *   Std_ReturnType Rte_Write_PwrDiscnctSwtDiag_Val(float32 data)
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: FordT3T6McuCfgInit4_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, CDD_FordT3T6McuCfg_CODE) FordT3T6McuCfgInit4(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: FordT3T6McuCfgInit4
 *********************************************************************************************************************/

	(void)Rte_Write_Adc1ScanGroup3Ref0_Val(	Lim_f32( ((float32)ADCF1DR00_DR0 * 1.0F * ADCF0CFGANDUSE_ADCSCAGFAC_VOLTPERCNT_F32),
													ADCOUTPMIN_VOLT_F32, ADCOUTPMAX_VOLT_F32 ) );
	(void)Rte_Write_EcuT_Val(				Lim_f32( ((float32)ADCF1DR00_DR1 * 1.0F * ADCF0CFGANDUSE_ADCSCAGFAC_VOLTPERCNT_F32),
													ADCOUTPMIN_VOLT_F32, ADCOUTPMAX_VOLT_F32 ) );													
	(void)Rte_Write_ChrgPmpDiag_Val(		Lim_f32( ((float32)ADCF1DR02_DR2 * CHRGPMPDIAGSCAGFAC_ULS_F32 * ADCF0CFGANDUSE_ADCSCAGFAC_VOLTPERCNT_F32),
													ADCOUTPMIN_VOLT_F32, BATTADCOUTPMAX_VOLT_F32 ) );
	(void)Rte_Write_PwrDiscnctSwtDiag_Val(	Lim_f32( ((float32)ADCF1DR02_DR3 * PWRDISCNCTSWTDIAGSCAGFAC_ULS_F32 * ADCF0CFGANDUSE_ADCSCAGFAC_VOLTPERCNT_F32),
													ADCOUTPMIN_VOLT_F32, BATTADCOUTPMAX_VOLT_F32 ) );	
	(void)Rte_Write_MotAg2Cos_Val(			Lim_f32( ((float32)ADCF1DR04_DR4 * 1.0F * ADCF0CFGANDUSE_ADCSCAGFAC_VOLTPERCNT_F32),
													ADCOUTPMIN_VOLT_F32, ADCOUTPMAX_VOLT_F32 ) );
	(void)Rte_Write_BattRtnCurrAdc_Val(		Lim_f32( ((float32)ADCF1DR04_DR5 * 1.0F * ADCF0CFGANDUSE_ADCSCAGFAC_VOLTPERCNT_F32),
													ADCOUTPMIN_VOLT_F32, ADCOUTPMAX_VOLT_F32 ) );													
	(void)Rte_Write_MotAg2Sin_Val(			Lim_f32( ((float32)ADCF1DR06_DR6 * 1.0F * ADCF0CFGANDUSE_ADCSCAGFAC_VOLTPERCNT_F32),
													ADCOUTPMIN_VOLT_F32, ADCOUTPMAX_VOLT_F32 ) );
	(void)Rte_Write_BattVltgSwd1_Val(		Lim_f32( ((float32)ADCF1DR06_DR7 * BATTVLTGSWD1SCAGFAC_ULS_F32 * ADCF0CFGANDUSE_ADCSCAGFAC_VOLTPERCNT_F32),
													ADCOUTPMIN_VOLT_F32, BATTADCOUTPMAX_VOLT_F32 ) );
	(void)Rte_Write_Adc1ScanGroup3Ref1_Val(	Lim_f32( ((float32)ADCF1DR08_DR8 * 1.0F * ADCF0CFGANDUSE_ADCSCAGFAC_VOLTPERCNT_F32),
													ADCOUTPMIN_VOLT_F32, ADCOUTPMAX_VOLT_F32 ) );
	(void)Rte_Write_Adc1ScanGroup2Ref0_Val(	Lim_f32( ((float32)ADCF1DR08_DR9 * 1.0F * ADCF0CFGANDUSE_ADCSCAGFAC_VOLTPERCNT_F32),
													ADCOUTPMIN_VOLT_F32, ADCOUTPMAX_VOLT_F32 ) );													
	(void)Rte_Write_BattVltg_Val(			Lim_f32( ((float32)ADCF1DR10_DR10 * BATTVLTGSCAGFAC_ULS_F32 * ADCF0CFGANDUSE_ADCSCAGFAC_VOLTPERCNT_F32),
													ADCOUTPMIN_VOLT_F32, BATTADCOUTPMAX_VOLT_F32 ) );
	(void)Rte_Write_Adc1ScanGroup2Ref1_Val(	Lim_f32( ((float32)ADCF1DR10_DR11 * 1.0F * ADCF0CFGANDUSE_ADCSCAGFAC_VOLTPERCNT_F32),
													ADCOUTPMIN_VOLT_F32, ADCOUTPMAX_VOLT_F32 ) );	
	(void)Rte_Write_Adc1SelfDiag0_Val(		Lim_f32( ((float32)ADCF1DR20_DR21 * 1.0F * ADCF0CFGANDUSE_ADCSCAGFAC_VOLTPERCNT_F32),
													ADCOUTPMIN_VOLT_F32, ADCOUTPMAX_VOLT_F32 ) );
	(void)Rte_Write_Adc1SelfDiag2_Val(		Lim_f32( ((float32)ADCF1DR22_DR22 * 1.0F * ADCF0CFGANDUSE_ADCSCAGFAC_VOLTPERCNT_F32),
													ADCOUTPMIN_VOLT_F32, ADCOUTPMAX_VOLT_F32 ) );													
	(void)Rte_Write_Adc1SelfDiag4_Val(		Lim_f32( ((float32)ADCF1DR22_DR23 * 1.0F * ADCF0CFGANDUSE_ADCSCAGFAC_VOLTPERCNT_F32),
													ADCOUTPMIN_VOLT_F32, ADCOUTPMAX_VOLT_F32 ) );
													
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: FordT3T6McuCfgInit5
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
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_HwAg1SnsrNr_Val(uint8 data)
 *   Std_ReturnType Rte_Write_HwAg1SnsrTyp_Val(HwAgSnsrTyp1 data)
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: FordT3T6McuCfgInit5_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, CDD_FordT3T6McuCfg_CODE) FordT3T6McuCfgInit5(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: FordT3T6McuCfgInit5
 *********************************************************************************************************************/
	
	VAR(uint8, AUTOMATIC) EcuId_Cnt_T_u08;
	VAR(uint8, AUTOMATIC) HwAg1SnsrNr_Cnt_T_u08;
	VAR(HwAgSnsrTyp1, AUTOMATIC) HwAg1SnsrTyp_Cnt_T_enum;
	
	(void)Rte_Read_EcuId_Val(&EcuId_Cnt_T_u08);
	
	if (1U == EcuId_Cnt_T_u08)
	{
		HwAg1SnsrTyp_Cnt_T_enum = HWAGSNSRTYP_A1335;
		HwAg1SnsrNr_Cnt_T_u08 = 1U;
	}
	else
	{
		HwAg1SnsrTyp_Cnt_T_enum = HWAGSNSRTYP_NOSNSR;
		HwAg1SnsrNr_Cnt_T_u08 = 0U;
	}
	
	(void)Rte_Write_HwAg1SnsrTyp_Val(HwAg1SnsrTyp_Cnt_T_enum);
	(void)Rte_Write_HwAg1SnsrNr_Val(HwAg1SnsrNr_Cnt_T_u08);
	
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: FordT3T6McuCfgPer2
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on TimingEvent every 2ms
 *
 **********************************************************************************************************************
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_Adc1ScanGroup2Ref0_Val(float32 data)
 *   Std_ReturnType Rte_Write_Adc1ScanGroup2Ref1_Val(float32 data)
 *   Std_ReturnType Rte_Write_Adc1ScanGroup3Ref0_Val(float32 data)
 *   Std_ReturnType Rte_Write_Adc1ScanGroup3Ref1_Val(float32 data)
 *   Std_ReturnType Rte_Write_Adc1SelfDiag0_Val(float32 data)
 *   Std_ReturnType Rte_Write_Adc1SelfDiag2_Val(float32 data)
 *   Std_ReturnType Rte_Write_Adc1SelfDiag4_Val(float32 data)
 *   Std_ReturnType Rte_Write_BattRtnCurrAdc_Val(float32 data)
 *   Std_ReturnType Rte_Write_BattVltg_Val(float32 data)
 *   Std_ReturnType Rte_Write_BattVltgSwd1_Val(float32 data)
 *   Std_ReturnType Rte_Write_ChrgPmpDiag_Val(float32 data)
 *   Std_ReturnType Rte_Write_EcuT_Val(float32 data)
 *   Std_ReturnType Rte_Write_MotAg2Cos_Val(float32 data)
 *   Std_ReturnType Rte_Write_MotAg2Sin_Val(float32 data)
 *   Std_ReturnType Rte_Write_PwrDiscnctSwtDiag_Val(float32 data)
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: FordT3T6McuCfgPer2_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, CDD_FordT3T6McuCfg_CODE) FordT3T6McuCfgPer2(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: FordT3T6McuCfgPer2
 *********************************************************************************************************************/

	(void)Rte_Write_Adc1ScanGroup3Ref0_Val(	Lim_f32( ((float32)MOTCTRLMGR_MotCtrlAdc1RawRes[0] * 1.0F * ADCF0CFGANDUSE_ADCSCAGFAC_VOLTPERCNT_F32),
													ADCOUTPMIN_VOLT_F32, ADCOUTPMAX_VOLT_F32 ) );
	(void)Rte_Write_EcuT_Val(				Lim_f32( ((float32)MOTCTRLMGR_MotCtrlAdc1RawRes[1] * 1.0F * ADCF0CFGANDUSE_ADCSCAGFAC_VOLTPERCNT_F32),
													ADCOUTPMIN_VOLT_F32, ADCOUTPMAX_VOLT_F32 ) );													
	(void)Rte_Write_ChrgPmpDiag_Val(		Lim_f32( ((float32)MOTCTRLMGR_MotCtrlAdc1RawRes[2] * CHRGPMPDIAGSCAGFAC_ULS_F32 * ADCF0CFGANDUSE_ADCSCAGFAC_VOLTPERCNT_F32),
													ADCOUTPMIN_VOLT_F32, BATTADCOUTPMAX_VOLT_F32 ) );
	(void)Rte_Write_PwrDiscnctSwtDiag_Val(	Lim_f32( ((float32)MOTCTRLMGR_MotCtrlAdc1RawRes[3] * PWRDISCNCTSWTDIAGSCAGFAC_ULS_F32 * ADCF0CFGANDUSE_ADCSCAGFAC_VOLTPERCNT_F32),
													ADCOUTPMIN_VOLT_F32, BATTADCOUTPMAX_VOLT_F32 ) );	
	(void)Rte_Write_MotAg2Cos_Val(			Lim_f32( ((float32)MOTCTRLMGR_MotCtrlAdc1RawRes[4] * 1.0F * ADCF0CFGANDUSE_ADCSCAGFAC_VOLTPERCNT_F32),
													ADCOUTPMIN_VOLT_F32, ADCOUTPMAX_VOLT_F32 ) );
	(void)Rte_Write_BattRtnCurrAdc_Val(		Lim_f32( ((float32)MOTCTRLMGR_MotCtrlAdc1RawRes[5] * 1.0F * ADCF0CFGANDUSE_ADCSCAGFAC_VOLTPERCNT_F32),
													ADCOUTPMIN_VOLT_F32, ADCOUTPMAX_VOLT_F32 ) );													
	(void)Rte_Write_MotAg2Sin_Val(			Lim_f32( ((float32)MOTCTRLMGR_MotCtrlAdc1RawRes[6] * 1.0F * ADCF0CFGANDUSE_ADCSCAGFAC_VOLTPERCNT_F32),
													ADCOUTPMIN_VOLT_F32, ADCOUTPMAX_VOLT_F32 ) );
	(void)Rte_Write_BattVltgSwd1_Val(		Lim_f32( ((float32)MOTCTRLMGR_MotCtrlAdc1RawRes[7] * BATTVLTGSWD1SCAGFAC_ULS_F32 * ADCF0CFGANDUSE_ADCSCAGFAC_VOLTPERCNT_F32),
													ADCOUTPMIN_VOLT_F32, BATTADCOUTPMAX_VOLT_F32 ) );
	(void)Rte_Write_Adc1ScanGroup3Ref1_Val(	Lim_f32( ((float32)MOTCTRLMGR_MotCtrlAdc1RawRes[8] * 1.0F * ADCF0CFGANDUSE_ADCSCAGFAC_VOLTPERCNT_F32),
													ADCOUTPMIN_VOLT_F32, ADCOUTPMAX_VOLT_F32 ) );
	(void)Rte_Write_Adc1ScanGroup2Ref0_Val(	Lim_f32( ((float32)MOTCTRLMGR_MotCtrlAdc1RawRes[9] * 1.0F * ADCF0CFGANDUSE_ADCSCAGFAC_VOLTPERCNT_F32),
													ADCOUTPMIN_VOLT_F32, ADCOUTPMAX_VOLT_F32 ) );													
	(void)Rte_Write_BattVltg_Val(			Lim_f32( ((float32)MOTCTRLMGR_MotCtrlAdc1RawRes[10] * BATTVLTGSCAGFAC_ULS_F32 * ADCF0CFGANDUSE_ADCSCAGFAC_VOLTPERCNT_F32),
													ADCOUTPMIN_VOLT_F32, BATTADCOUTPMAX_VOLT_F32 ) );
	(void)Rte_Write_Adc1ScanGroup2Ref1_Val(	Lim_f32( ((float32)MOTCTRLMGR_MotCtrlAdc1RawRes[11] * 1.0F * ADCF0CFGANDUSE_ADCSCAGFAC_VOLTPERCNT_F32),
													ADCOUTPMIN_VOLT_F32, ADCOUTPMAX_VOLT_F32 ) );	
	(void)Rte_Write_Adc1SelfDiag0_Val(		Lim_f32( ((float32)MOTCTRLMGR_MotCtrlAdc1RawRes[21] * 1.0F * ADCF0CFGANDUSE_ADCSCAGFAC_VOLTPERCNT_F32),
													ADCOUTPMIN_VOLT_F32, ADCOUTPMAX_VOLT_F32 ) );
	(void)Rte_Write_Adc1SelfDiag2_Val(		Lim_f32( ((float32)MOTCTRLMGR_MotCtrlAdc1RawRes[22] * 1.0F * ADCF0CFGANDUSE_ADCSCAGFAC_VOLTPERCNT_F32),
													ADCOUTPMIN_VOLT_F32, ADCOUTPMAX_VOLT_F32 ) );													
	(void)Rte_Write_Adc1SelfDiag4_Val(		Lim_f32( ((float32)MOTCTRLMGR_MotCtrlAdc1RawRes[23] * 1.0F * ADCF0CFGANDUSE_ADCSCAGFAC_VOLTPERCNT_F32),
													ADCOUTPMIN_VOLT_F32, ADCOUTPMAX_VOLT_F32 ) );

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: FordT3T6McuCfgPer3
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on TimingEvent every 2ms
 *
 **********************************************************************************************************************
 *
 * Input Interfaces:
 * =================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Read_Adc0Faild_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_Adc1Faild_Logl(boolean *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_BattRtnCurrAdcFaild_Logl(boolean data)
 *   Std_ReturnType Rte_Write_BattVltgAdcFaild_Logl(boolean data)
 *   Std_ReturnType Rte_Write_BattVltgSwd1AdcFaild_Logl(boolean data)
 *   Std_ReturnType Rte_Write_ChrgPmpDiagAdcFaild_Logl(boolean data)
 *   Std_ReturnType Rte_Write_EcuTAdcFaild_Logl(boolean data)
 *   Std_ReturnType Rte_Write_HwAg1SnsrNr_Val(uint8 data)
 *   Std_ReturnType Rte_Write_HwAg1SnsrTyp_Val(HwAgSnsrTyp1 data)
 *   Std_ReturnType Rte_Write_MotAg2CosAdcFaild_Logl(boolean data)
 *   Std_ReturnType Rte_Write_MotAg2SinAdcFaild_Logl(boolean data)
 *   Std_ReturnType Rte_Write_MotAg5CosAdcFaild_Logl(boolean data)
 *   Std_ReturnType Rte_Write_MotAg5SinAdcFaild_Logl(boolean data)
 *   Std_ReturnType Rte_Write_MotAg6CosAdcFaild_Logl(boolean data)
 *   Std_ReturnType Rte_Write_MotAg6SinAdcFaild_Logl(boolean data)
 *   Std_ReturnType Rte_Write_MotCurrAdcPeakAAdcFaild_Logl(boolean data)
 *   Std_ReturnType Rte_Write_MotCurrAdcPeakBAdcFaild_Logl(boolean data)
 *   Std_ReturnType Rte_Write_MotCurrAdcPeakCAdcFaild_Logl(boolean data)
 *   Std_ReturnType Rte_Write_MotCurrAdcVlyAAdcFaild_Logl(boolean data)
 *   Std_ReturnType Rte_Write_MotCurrAdcVlyBAdcFaild_Logl(boolean data)
 *   Std_ReturnType Rte_Write_MotCurrAdcVlyCAdcFaild_Logl(boolean data)
 *   Std_ReturnType Rte_Write_MotCurrSnsrOffs1AdcFaild_Logl(boolean data)
 *   Std_ReturnType Rte_Write_MotDrvr1IninTestCmpl_Logl(boolean data)
 *   Std_ReturnType Rte_Write_PwrDiscnctSwtDiagAdcFaild_Logl(boolean data)
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: FordT3T6McuCfgPer3_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, CDD_FordT3T6McuCfg_CODE) FordT3T6McuCfgPer3(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: FordT3T6McuCfgPer3
 *********************************************************************************************************************/

	VAR(boolean, AUTOMATIC) Adc0Faild_Cnt_T_logl;
	VAR(boolean, AUTOMATIC) Adc1Faild_Cnt_T_logl;

	(void)Rte_Read_Adc0Faild_Logl(&Adc0Faild_Cnt_T_logl);
	(void)Rte_Read_Adc1Faild_Logl(&Adc1Faild_Cnt_T_logl);
	
	(void)Rte_Write_MotCurrAdcPeakAAdcFaild_Logl(Adc0Faild_Cnt_T_logl);
	(void)Rte_Write_MotCurrAdcPeakBAdcFaild_Logl(Adc0Faild_Cnt_T_logl);
	(void)Rte_Write_MotCurrAdcPeakCAdcFaild_Logl(Adc0Faild_Cnt_T_logl);
	(void)Rte_Write_MotCurrAdcVlyAAdcFaild_Logl(Adc0Faild_Cnt_T_logl);
	(void)Rte_Write_MotCurrAdcVlyBAdcFaild_Logl(Adc0Faild_Cnt_T_logl);
	(void)Rte_Write_MotCurrAdcVlyCAdcFaild_Logl(Adc0Faild_Cnt_T_logl);
	(void)Rte_Write_MotCurrSnsrOffs1AdcFaild_Logl(Adc0Faild_Cnt_T_logl);
	(void)Rte_Write_MotAg5SinAdcFaild_Logl(Adc0Faild_Cnt_T_logl);
	(void)Rte_Write_MotAg5CosAdcFaild_Logl(Adc0Faild_Cnt_T_logl);
	(void)Rte_Write_MotAg6SinAdcFaild_Logl(Adc0Faild_Cnt_T_logl);
	(void)Rte_Write_MotAg6CosAdcFaild_Logl(Adc0Faild_Cnt_T_logl);
	
	(void)Rte_Write_BattVltgAdcFaild_Logl(Adc1Faild_Cnt_T_logl);
	(void)Rte_Write_EcuTAdcFaild_Logl(Adc1Faild_Cnt_T_logl);
	(void)Rte_Write_ChrgPmpDiagAdcFaild_Logl(Adc1Faild_Cnt_T_logl);
	(void)Rte_Write_PwrDiscnctSwtDiagAdcFaild_Logl(Adc1Faild_Cnt_T_logl);
	(void)Rte_Write_MotAg2CosAdcFaild_Logl(Adc1Faild_Cnt_T_logl);
	(void)Rte_Write_BattRtnCurrAdcFaild_Logl(Adc1Faild_Cnt_T_logl);
	(void)Rte_Write_MotAg2SinAdcFaild_Logl(Adc1Faild_Cnt_T_logl);
	(void)Rte_Write_BattVltgSwd1AdcFaild_Logl(Adc1Faild_Cnt_T_logl);
	
	(void)Rte_Write_MotDrvr1IninTestCmpl_Logl(TRUE);

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}


#define CDD_FordT3T6McuCfg_STOP_SEC_CODE
#include "CDD_FordT3T6McuCfg_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of function definition area >>            DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

 /**********************************************************************************************************************
  * Name:        FordT3T6McuCfgInit1
  * Description: PowerDownModeRegisterConfiguration
  * Inputs:      NONE
  * Outputs:     NONE
  * Usage Notes: Currently should be placed in initialization before OS, right after function Mcu_InitClock
				 Need to consult Vector/Renesas to see if we can merge this function into MCU settings
  ********************************************************************************************************************/
FUNC(void, CDD_FordT3T6McuCfg_CODE) FordT3T6McuCfgInit1(void)
{
	/* TODO update CM012A to remove this line */
	//MSR_LM2 = 0x00000001U;
	MSR_LM3 = 0x00000000U;
	MSR_LM4 = 0x00000001U;
	MSR_LM5 = 0x00000000U;
	MSR_LM6 = 0x00000001U;
	MSR_LM7 = 0x00000000U;
	MSR_LM8 = 0x00000001U;
	MSR_LM10 = 0x00000000U;
	MSR_LM11 = 0x00000000U;
	MSR_LM12 = 0x00000000U;

}

 /**********************************************************************************************************************
  * Name:        FordT3McuCfgPer1
  * Description: Performs the Raw ADC to Volts conversion on Adc0
  * Inputs:      NONE
  * Outputs:     NONE
  * Usage Notes: Should be called from Motor Control 
  ********************************************************************************************************************/
 
FUNC(void, CDD_FordT3T6McuCfg_CODE) FordT3T6McuCfgPer1(void)
{
	
	MOTCTRLMGR_MotCtrlAdc0ScanGroup3Ref0	= Lim_f32( ((float32)MOTCTRLMGR_MotCtrlAdc0RawRes[0] * 1.0F * ADCF0CFGANDUSE_ADCSCAGFAC_VOLTPERCNT_F32),
													ADCOUTPMIN_VOLT_F32, ADCOUTPMAX_VOLT_F32 );
	MOTCTRLMGR_MotCtrlMotCurrAdcVlyA 		= Lim_f32( ((float32)MOTCTRLMGR_MotCtrlAdc0RawRes[1] * 1.0F * ADCF0CFGANDUSE_ADCSCAGFAC_VOLTPERCNT_F32),
													ADCOUTPMIN_VOLT_F32, ADCOUTPMAX_VOLT_F32 );
	MOTCTRLMGR_MotCtrlMotCurrAdcVlyB		= Lim_f32( ((float32)MOTCTRLMGR_MotCtrlAdc0RawRes[2] * 1.0F * ADCF0CFGANDUSE_ADCSCAGFAC_VOLTPERCNT_F32),
													ADCOUTPMIN_VOLT_F32, ADCOUTPMAX_VOLT_F32 );
	MOTCTRLMGR_MotCtrlMotCurrAdcVlyC		= Lim_f32( ((float32)MOTCTRLMGR_MotCtrlAdc0RawRes[3] * 1.0F * ADCF0CFGANDUSE_ADCSCAGFAC_VOLTPERCNT_F32),
													ADCOUTPMIN_VOLT_F32, ADCOUTPMAX_VOLT_F32 );
	MOTCTRLMGR_MotCtrlAdc0ScanGroup3Ref1	= Lim_f32( ((float32)MOTCTRLMGR_MotCtrlAdc0RawRes[4] * 1.0F * ADCF0CFGANDUSE_ADCSCAGFAC_VOLTPERCNT_F32),
													ADCOUTPMIN_VOLT_F32, ADCOUTPMAX_VOLT_F32 );
	MOTCTRLMGR_MotCtrlAdc0ScanGroup2Ref0	= Lim_f32( ((float32)MOTCTRLMGR_MotCtrlAdc0RawRes[5] * 1.0F * ADCF0CFGANDUSE_ADCSCAGFAC_VOLTPERCNT_F32),
													ADCOUTPMIN_VOLT_F32, ADCOUTPMAX_VOLT_F32 );													
	MOTCTRLMGR_MotCtrlMotCurrAdcPeakA		= Lim_f32( ((float32)MOTCTRLMGR_MotCtrlAdc0RawRes[6] * 1.0F * ADCF0CFGANDUSE_ADCSCAGFAC_VOLTPERCNT_F32),
													ADCOUTPMIN_VOLT_F32, ADCOUTPMAX_VOLT_F32 );
	MOTCTRLMGR_MotCtrlMotCurrAdcPeakB		= Lim_f32( ((float32)MOTCTRLMGR_MotCtrlAdc0RawRes[7] * 1.0F * ADCF0CFGANDUSE_ADCSCAGFAC_VOLTPERCNT_F32),
													ADCOUTPMIN_VOLT_F32, ADCOUTPMAX_VOLT_F32 );
	MOTCTRLMGR_MotCtrlMotCurrAdcPeakC		= Lim_f32( ((float32)MOTCTRLMGR_MotCtrlAdc0RawRes[8] * 1.0F * ADCF0CFGANDUSE_ADCSCAGFAC_VOLTPERCNT_F32),
													ADCOUTPMIN_VOLT_F32, ADCOUTPMAX_VOLT_F32 );
	MOTCTRLMGR_MotCtrlMotCurrSnsrOffs1		= Lim_f32( ((float32)MOTCTRLMGR_MotCtrlAdc0RawRes[9] * 1.0F * ADCF0CFGANDUSE_ADCSCAGFAC_VOLTPERCNT_F32),
													ADCOUTPMIN_VOLT_F32, ADCOUTPMAX_VOLT_F32 );
	MOTCTRLMGR_MotCtrlMotAg5Sin				= Lim_f32( ((float32)MOTCTRLMGR_MotCtrlAdc0RawRes[10] * 1.0F * ADCF0CFGANDUSE_ADCSCAGFAC_VOLTPERCNT_F32),
													ADCOUTPMIN_VOLT_F32, ADCOUTPMAX_VOLT_F32 );
	MOTCTRLMGR_MotCtrlMotAg5Cos				= Lim_f32( ((float32)MOTCTRLMGR_MotCtrlAdc0RawRes[11] * 1.0F * ADCF0CFGANDUSE_ADCSCAGFAC_VOLTPERCNT_F32),
													ADCOUTPMIN_VOLT_F32, ADCOUTPMAX_VOLT_F32 );		
	MOTCTRLMGR_MotCtrlMotAg6Sin				= Lim_f32( ((float32)MOTCTRLMGR_MotCtrlAdc0RawRes[12] * 1.0F * ADCF0CFGANDUSE_ADCSCAGFAC_VOLTPERCNT_F32),
													ADCOUTPMIN_VOLT_F32, ADCOUTPMAX_VOLT_F32 );
	MOTCTRLMGR_MotCtrlMotAg6Cos				= Lim_f32( ((float32)MOTCTRLMGR_MotCtrlAdc0RawRes[13] * 1.0F * ADCF0CFGANDUSE_ADCSCAGFAC_VOLTPERCNT_F32),
													ADCOUTPMIN_VOLT_F32, ADCOUTPMAX_VOLT_F32 );
	MOTCTRLMGR_MotCtrlAdc0ScanGroup2Ref1	= Lim_f32( ((float32)MOTCTRLMGR_MotCtrlAdc0RawRes[14] * 1.0F * ADCF0CFGANDUSE_ADCSCAGFAC_VOLTPERCNT_F32),
													ADCOUTPMIN_VOLT_F32, ADCOUTPMAX_VOLT_F32 );
	MOTCTRLMGR_MotCtrlAdc0SelfDiag0			= Lim_f32( ((float32)MOTCTRLMGR_MotCtrlAdc0RawRes[21] * 1.0F * ADCF0CFGANDUSE_ADCSCAGFAC_VOLTPERCNT_F32),
													ADCOUTPMIN_VOLT_F32, ADCOUTPMAX_VOLT_F32 );
	MOTCTRLMGR_MotCtrlAdc0SelfDiag2			= Lim_f32( ((float32)MOTCTRLMGR_MotCtrlAdc0RawRes[22] * 1.0F * ADCF0CFGANDUSE_ADCSCAGFAC_VOLTPERCNT_F32),
													ADCOUTPMIN_VOLT_F32, ADCOUTPMAX_VOLT_F32 );
	MOTCTRLMGR_MotCtrlAdc0SelfDiag4			= Lim_f32( ((float32)MOTCTRLMGR_MotCtrlAdc0RawRes[23] * 1.0F * ADCF0CFGANDUSE_ADCSCAGFAC_VOLTPERCNT_F32),
													ADCOUTPMIN_VOLT_F32, ADCOUTPMAX_VOLT_F32 );	
													
}  

/**********************************************************************************************************************
  * Name:        Adcf0OutpInin
  * Description: ADCF 0 Output Initialization
  * Inputs:      NONE
  * Outputs:     NONE
  * Usage Notes: Called from FordT3T6McuCfgInit3 above via trusted function call.
  ********************************************************************************************************************/
  
FUNC(void, CDD_FordT3T6McuCfg_CODE) Adcf0OutpInin(void)
{
	
	MOTCTRLMGR_MotCtrlAdc0ScanGroup3Ref0	= Lim_f32( ((float32)ADCF0DR00_DR0 * 1.0F * ADCF0CFGANDUSE_ADCSCAGFAC_VOLTPERCNT_F32),
													ADCOUTPMIN_VOLT_F32, ADCOUTPMAX_VOLT_F32 );
	MOTCTRLMGR_MotCtrlMotCurrAdcVlyA 		= Lim_f32( ((float32)ADCF0DR00_DR1 * 1.0F * ADCF0CFGANDUSE_ADCSCAGFAC_VOLTPERCNT_F32),
													ADCOUTPMIN_VOLT_F32, ADCOUTPMAX_VOLT_F32 );
	MOTCTRLMGR_MotCtrlMotCurrAdcVlyB		= Lim_f32( ((float32)ADCF0DR02_DR2 * 1.0F * ADCF0CFGANDUSE_ADCSCAGFAC_VOLTPERCNT_F32),
													ADCOUTPMIN_VOLT_F32, ADCOUTPMAX_VOLT_F32 );
	MOTCTRLMGR_MotCtrlMotCurrAdcVlyC		= Lim_f32( ((float32)ADCF0DR02_DR3 * 1.0F * ADCF0CFGANDUSE_ADCSCAGFAC_VOLTPERCNT_F32),
													ADCOUTPMIN_VOLT_F32, ADCOUTPMAX_VOLT_F32 );
	MOTCTRLMGR_MotCtrlAdc0ScanGroup3Ref1	= Lim_f32( ((float32)ADCF0DR04_DR4 * 1.0F * ADCF0CFGANDUSE_ADCSCAGFAC_VOLTPERCNT_F32),
													ADCOUTPMIN_VOLT_F32, ADCOUTPMAX_VOLT_F32 );
	MOTCTRLMGR_MotCtrlAdc0ScanGroup2Ref0	= Lim_f32( ((float32)ADCF0DR04_DR5 * 1.0F * ADCF0CFGANDUSE_ADCSCAGFAC_VOLTPERCNT_F32),
													ADCOUTPMIN_VOLT_F32, ADCOUTPMAX_VOLT_F32 );													
	MOTCTRLMGR_MotCtrlMotCurrAdcPeakA		= Lim_f32( ((float32)ADCF0DR06_DR6 * 1.0F * ADCF0CFGANDUSE_ADCSCAGFAC_VOLTPERCNT_F32),
													ADCOUTPMIN_VOLT_F32, ADCOUTPMAX_VOLT_F32 );
	MOTCTRLMGR_MotCtrlMotCurrAdcPeakB		= Lim_f32( ((float32)ADCF0DR06_DR7 * 1.0F * ADCF0CFGANDUSE_ADCSCAGFAC_VOLTPERCNT_F32),
													ADCOUTPMIN_VOLT_F32, ADCOUTPMAX_VOLT_F32 );
	MOTCTRLMGR_MotCtrlMotCurrAdcPeakC		= Lim_f32( ((float32)ADCF0DR08_DR8 * 1.0F * ADCF0CFGANDUSE_ADCSCAGFAC_VOLTPERCNT_F32),
													ADCOUTPMIN_VOLT_F32, ADCOUTPMAX_VOLT_F32 );
	MOTCTRLMGR_MotCtrlMotCurrSnsrOffs1		= Lim_f32( ((float32)ADCF0DR08_DR9 * 1.0F * ADCF0CFGANDUSE_ADCSCAGFAC_VOLTPERCNT_F32),
													ADCOUTPMIN_VOLT_F32, ADCOUTPMAX_VOLT_F32 );
	MOTCTRLMGR_MotCtrlMotAg5Sin				= Lim_f32( ((float32)ADCF0DR10_DR10 * 1.0F * ADCF0CFGANDUSE_ADCSCAGFAC_VOLTPERCNT_F32),
													ADCOUTPMIN_VOLT_F32, ADCOUTPMAX_VOLT_F32 );
	MOTCTRLMGR_MotCtrlMotAg5Cos				= Lim_f32( ((float32)ADCF0DR10_DR11 * 1.0F * ADCF0CFGANDUSE_ADCSCAGFAC_VOLTPERCNT_F32),
													ADCOUTPMIN_VOLT_F32, ADCOUTPMAX_VOLT_F32 );		
	MOTCTRLMGR_MotCtrlMotAg6Sin				= Lim_f32( ((float32)ADCF0DR12_DR12 * 1.0F * ADCF0CFGANDUSE_ADCSCAGFAC_VOLTPERCNT_F32),
													ADCOUTPMIN_VOLT_F32, ADCOUTPMAX_VOLT_F32 );
	MOTCTRLMGR_MotCtrlMotAg6Cos				= Lim_f32( ((float32)ADCF0DR12_DR13 * 1.0F * ADCF0CFGANDUSE_ADCSCAGFAC_VOLTPERCNT_F32),
													ADCOUTPMIN_VOLT_F32, ADCOUTPMAX_VOLT_F32 );
	MOTCTRLMGR_MotCtrlAdc0ScanGroup2Ref1	= Lim_f32( ((float32)ADCF0DR14_DR14 * 1.0F * ADCF0CFGANDUSE_ADCSCAGFAC_VOLTPERCNT_F32),
													ADCOUTPMIN_VOLT_F32, ADCOUTPMAX_VOLT_F32 );
	MOTCTRLMGR_MotCtrlAdc0SelfDiag0			= Lim_f32( ((float32)ADCF0DR20_DR21 * 1.0F * ADCF0CFGANDUSE_ADCSCAGFAC_VOLTPERCNT_F32),
													ADCOUTPMIN_VOLT_F32, ADCOUTPMAX_VOLT_F32 );
	MOTCTRLMGR_MotCtrlAdc0SelfDiag2			= Lim_f32( ((float32)ADCF0DR22_DR22 * 1.0F * ADCF0CFGANDUSE_ADCSCAGFAC_VOLTPERCNT_F32),
													ADCOUTPMIN_VOLT_F32, ADCOUTPMAX_VOLT_F32 );
	MOTCTRLMGR_MotCtrlAdc0SelfDiag4			= Lim_f32( ((float32)ADCF0DR22_DR23 * 1.0F * ADCF0CFGANDUSE_ADCSCAGFAC_VOLTPERCNT_F32),
													ADCOUTPMIN_VOLT_F32, ADCOUTPMAX_VOLT_F32 );	
													
}
  
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of function definition area >>              DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of removed code area >>                   DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of removed code area >>                     DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
