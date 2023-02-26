/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  FordMsg07EBusHiSpd.c
 *        Config:  C:/Users/NZ5334/Documents/Synergy/Working/ses_dev_ea4/MM531A_FordMsg07EBusHiSpd_Impl/tools/Component.dpa
 *     SW-C Type:  FordMsg07EBusHiSpd
 *  Generated at:  Wed Apr 18 10:31:33 2018
 *
 *     Generator:  MICROSAR RTE Generator Version 4.13.0
 *                 RTE Core Version 1.13.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  C-Code implementation template for SW-C <FordMsg07EBusHiSpd>
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of version logging area >>                DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/* PRQA S 0777, 0779 EOF */ /* MD_MSR_5.1_777, MD_MSR_5.1_779 */

/**********************************************************************************************************************
* Copyright 2017, 2018 Nexteer 
* Nexteer Confidential
*
* Module File Name  : FordMsg07EBusHiSpd.c
* Module Description: FordMsg07EBusHiSpd - MM531A 
* Project           : CBD
* Author            : Ramachandran M G(TATA Elxsi)
***********************************************************************************************************************
* Version Control:
* %version:          2 %
* %derived_by:       nz5334 %
*----------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author    Change Description                                                              SCR #
* --------  -------  --------  --------------------------------------------------------------------------  ------------
* 11/16/17   1       RMG(TATA) Initial version                                                               EA4#17268
* 03/28/18	 2        KP(TATA) Rename output signals per FDD v3.0.0										     EA4#20153
*----------------------------------------------------------------------------------------------------------------------
**********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of version logging area >>                  DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *
 * AUTOSAR Modeling Object Descriptions
 *
 **********************************************************************************************************************
 *
 * Port Prototypes:
 * ================
 * CmpdSteerPinionAgQlyFac
 *   Compensated Steering Pinion Angle Quality Factor is received as input from EPS and processed to CAN Bus
 *
 * Ford_StePinAn_No_Cnt
 *   This signal increments by 1 in every periodic cycle and set to zero once crosses 15.Customer datatype should be used. Datatype:Ford_StePinAn_No_Cnt with the range of 0 to 15.
 *
 * Ford_StePinAn_No_Cs
 *   Calculated by using the least significant 8 bits of the sum of the least significant 8 bits of the Steering Pinion Relative Angle signal checksum and the least significant 8 bits of the Steering Pinion Angle Counter signal checksum.Customer datatype should be used. Datatype:Ford_StePinAn_No_Cs with the range of 0 to 255.
 *
 * Ford_StePinCompAnEst_D_Qf
 *   Processed signal of input CmpdSteerPinionAgQlyFac.Customer datatype should be used. Datatype:Ford_StePinCompAnEst_D_Qf.Elements are 0 - "Cx0'_Faulty", 1 - "Cx1_No_Data_Exists", 2 -"Cx2_Degraded", 3 - "Cx3_OK"
 *
 * Ford_StePinComp_An_Est
 *   Processed signal of input Compensated Steering Pinion Angle.Customer datatype should be used. Datatype: Ford_StePinComp_An_Est with the range of 0 to 32767.
 *
 * Ford_StePinRelInit_An_Sns
 *   Processed signal of input RelSteerPinionAg.Customer datatype should be  used. Datatype: Ford_StePinRelInit_An_Sns with range of 0 to 65535.
 *
 * Ford_StePw_B_Rq
 *   Processed value of Steering Power Request.Customer datatype should be used.Datatype: Ford_StePw_B_Rq. Elements are 0 - "Cx0_No", 1 - "Cx1_Yes"
 *
 *********************************************************************************************************************/

#include "Rte_FordMsg07EBusHiSpd.h" /* PRQA S 0857 */ /* MD_MSR_1.1_857 */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
  #include "NxtrMath.h"
  #include "NxtrFixdPt.h"

 /* MISRA-C:2004 Rule 19.1 [NXTRDEV 19.1.1]: AUTOSAR requires deviation from this rule for Memory Mapping include statements */
 
 /* MISRA-C:2004 Rule 16.10 [NXTRDEV 16.10.1]: There is no appropriate action to take on the return values for Rte_Read and Rte_Write */ 
 
  #define RELSTEERPINIONAGMIN_HWDEG_F32    (-3200.0F)
  #define RELSTEERPINIONAGMAX_HWDEG_F32    (3353.5F)
  #define RELSTEERPINIONAGOFFS_HWDEG_F32   (3200.0F)
  #define PINIONAGSCAG_HWDEGPERCNT_F32     (0.1F)
  #define STEERPINIONAGCNTRMIN_CNT_U08     ((uint8)0U)
  #define STEERPINIONAGCNTRMAX_CNT_U08     ((uint8)15U)
  #define STEERPINIONRELAGMIN_CNT_U16      ((uint16)0U)
  #define STEERPINIONRELAGMAX_CNT_U16      ((uint16)65535U)
  #define CMPDSTEERPINIONAGMIN_HWDEG_F32   (-1600.0F)
  #define CMPDSTEERPINIONAGMAX_HWDEG_F32   (1676.7F)
  #define STEERPINIONCMPDAGMIN_CNT_U16     ((uint16)0U)
  #define STEERPINIONCMPDAGMAX_CNT_U16     ((uint16)32767U)
  #define STEERPINIONAGCHKSMIN_CNT_U08     ((uint8)0U)
  #define STEERPINIONAGCHKSMAX_CNT_U08     ((uint8)255U)
  #define RISHIFT_CNT_U16                  ((uint16)8U)
  #define MASKTOCALCCHKS_CNT_U16           ((uint16)255U)
  #define CMPDPINIONAGOFFS_HWDEG_F32       (1600.0F)

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
 * Ford_StePinAn_No_Cnt: Integer in interval [0...15]
 *   Unit: [unitless], Factor: 1, Offset: 0
 * Ford_StePinAn_No_Cs: Integer in interval [0...255]
 *   Unit: [Unitless], Factor: 1, Offset: 0
 * Ford_StePinComp_An_Est: Integer in interval [0...32767]
 *   Unit: [degrees], Factor: 0.1, Offset: -1600
 * Ford_StePw_B_Rq: Boolean
 * float32: Real in interval [-FLT_MAX...FLT_MAX] with single precision (standard type)
 * uint8: Integer in interval [0...255] (standard type)
 *
 * Enumeration Types:
 * ==================
 * Ford_StePinCompAnEst_D_Qf: Enumeration of integer in interval [0...3] with enumerators
 *   Cx0_Faulty (0U)
 *   Cx1_No_Data_Exists (1U)
 *   Cx2_Degraded (2U)
 *   Cx3_OK (3U)
 * Ford_StePinRelInit_An_Sns: Enumeration of integer in interval [0...65535] with enumerators
 *   CxFFFE_NoDataExists (65534U)
 *   CxFFFF_Faulty (65535U)
 *   Unit: [degrees], Factor: 0.1, Offset: -3200
 *
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   uint8 *Rte_Pim_SteerPinionAgCntrPrev(void)
 *
 *********************************************************************************************************************/


#define FordMsg07EBusHiSpd_START_SEC_CODE
#include "FordMsg07EBusHiSpd_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: FordMsg07EBusHiSpdInit1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: FordMsg07EBusHiSpdInit1_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, FordMsg07EBusHiSpd_CODE) FordMsg07EBusHiSpdInit1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: FordMsg07EBusHiSpdInit1
 *********************************************************************************************************************/

  /*** Do Nothing ***/
		   
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: FordMsg07EBusHiSpdPer1
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
 *   Std_ReturnType Rte_Read_CmpdSteerPinionAg_Val(float32 *data)
 *   Std_ReturnType Rte_Read_CmpdSteerPinionAgQlyFac_Ford_StePinCompAnEst_D_Qf(Ford_StePinCompAnEst_D_Qf *data)
 *   Std_ReturnType Rte_Read_FordVehSteerPwrReq_Ford_StePw_B_Rq(Ford_StePw_B_Rq *data)
 *   Std_ReturnType Rte_Read_RelSteerPinionAg_Val(float32 *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_Ford_StePinAn_No_Cnt_Ford_StePinAn_No_Cnt(Ford_StePinAn_No_Cnt data)
 *   Std_ReturnType Rte_Write_Ford_StePinAn_No_Cs_Ford_StePinAn_No_Cs(Ford_StePinAn_No_Cs data)
 *   Std_ReturnType Rte_Write_Ford_StePinCompAnEst_D_Qf_Ford_StePinCompAnEst_D_Qf(Ford_StePinCompAnEst_D_Qf data)
 *   Std_ReturnType Rte_Write_Ford_StePinComp_An_Est_Ford_StePinComp_An_Est(Ford_StePinComp_An_Est data)
 *   Std_ReturnType Rte_Write_Ford_StePinRelInit_An_Sns_Ford_StePinRelInit_An_Sns(Ford_StePinRelInit_An_Sns data)
 *   Std_ReturnType Rte_Write_Ford_StePw_B_Rq_Ford_StePw_B_Rq(Ford_StePw_B_Rq data)
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: FordMsg07EBusHiSpdPer1_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, FordMsg07EBusHiSpd_CODE) FordMsg07EBusHiSpdPer1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: FordMsg07EBusHiSpdPer1
 *********************************************************************************************************************/
   VAR(Ford_StePw_B_Rq, AUTOMATIC) FordVehSteerPwrReq_Cnt_T_enum;
   VAR(Ford_StePinCompAnEst_D_Qf, AUTOMATIC) CmpdSteerPinionAgQlyFac_Cnt_T_enum;
  
   VAR(uint8, AUTOMATIC) SteerPinionAgCntr_Cnt_T_u08;
   
   VAR(Ford_StePinAn_No_Cnt, AUTOMATIC) Ford_StePinAn_No_Cnt_Cnt_T_enum;
   VAR(Ford_StePinAn_No_Cs, AUTOMATIC) Ford_StePinAn_No_Cs_Cnt_T_enum;  
   VAR(Ford_StePinRelInit_An_Sns, AUTOMATIC) Ford_StePinRelInit_An_Sns_Cnt_T_enum;
   VAR(Ford_StePinComp_An_Est, AUTOMATIC) Ford_StePinComp_An_Est_Cnt_T_enum;
   
   VAR(uint16, AUTOMATIC) Ford_StePinRelInit_An_Sns_Cnt_T_u16;
   VAR(uint16, AUTOMATIC) Ford_StePinRelInit_An_SnsSum_Cnt_T_u16;
   VAR(uint16, AUTOMATIC) Ford_StePinRelInit_An_SnsBit_Cnt_T_u16;
   VAR(uint16, AUTOMATIC) Ford_StePinAn_No_CntSumBit_Cnt_T_u16;
   
   VAR(float32, AUTOMATIC) RelSteerPinionAg_HwDeg_T_f32;
   VAR(float32, AUTOMATIC) RelSteerPinionAgSum_HwDeg_T_f32;
   VAR(float32, AUTOMATIC) CmpdSteerPinionAg_HwDeg_T_f32;
   VAR(float32, AUTOMATIC) CmpdSteerPinionAgSum_HwDeg_T_f32;
   
   
    
    /*Reading inputs from RTE*/
	(void)Rte_Read_FordVehSteerPwrReq_Ford_StePw_B_Rq(&FordVehSteerPwrReq_Cnt_T_enum);
	(void)Rte_Read_RelSteerPinionAg_Val(&RelSteerPinionAg_HwDeg_T_f32);
	(void)Rte_Read_CmpdSteerPinionAg_Val(&CmpdSteerPinionAg_HwDeg_T_f32);
	(void)Rte_Read_CmpdSteerPinionAgQlyFac_Ford_StePinCompAnEst_D_Qf(&CmpdSteerPinionAgQlyFac_Cnt_T_enum);
	
	/** Start of CnvRelSteerPinionAg **/
	RelSteerPinionAgSum_HwDeg_T_f32 = Lim_f32(RelSteerPinionAg_HwDeg_T_f32, RELSTEERPINIONAGMIN_HWDEG_F32, RELSTEERPINIONAGMAX_HWDEG_F32) + RELSTEERPINIONAGOFFS_HWDEG_F32;
	Ford_StePinRelInit_An_Sns_Cnt_T_enum = FloatToFixd_u16_f32((RelSteerPinionAgSum_HwDeg_T_f32/PINIONAGSCAG_HWDEGPERCNT_F32), NXTRFIXDPT_FLOATTOP0_ULS_F32);
	Ford_StePinRelInit_An_Sns_Cnt_T_u16 = Lim_u16 (Ford_StePinRelInit_An_Sns_Cnt_T_enum, STEERPINIONRELAGMIN_CNT_U16, STEERPINIONRELAGMAX_CNT_U16);
	/** End of CnvRelSteerPinionAg **/

	/** Start of CalcSteerPinionAgCntr **/
	if((*Rte_Pim_SteerPinionAgCntrPrev() + 1U) > STEERPINIONAGCNTRMAX_CNT_U08)
	{
	    SteerPinionAgCntr_Cnt_T_u08 = 0U;
	}
	else
	{
	    SteerPinionAgCntr_Cnt_T_u08 = *Rte_Pim_SteerPinionAgCntrPrev() + 1U;
	}
	Ford_StePinAn_No_Cnt_Cnt_T_enum = Lim_u08(SteerPinionAgCntr_Cnt_T_u08, STEERPINIONAGCNTRMIN_CNT_U08, STEERPINIONAGCNTRMAX_CNT_U08);
	*Rte_Pim_SteerPinionAgCntrPrev() = Ford_StePinAn_No_Cnt_Cnt_T_enum;
	/** End of CalcSteerPinionAgCntr **/

	/** Start of  CnvCmpdSteerPinionAg **/
	CmpdSteerPinionAgSum_HwDeg_T_f32 = Lim_f32(CmpdSteerPinionAg_HwDeg_T_f32, CMPDSTEERPINIONAGMIN_HWDEG_F32, CMPDSTEERPINIONAGMAX_HWDEG_F32) + CMPDPINIONAGOFFS_HWDEG_F32;
	Ford_StePinComp_An_Est_Cnt_T_enum = FloatToFixd_u16_f32((CmpdSteerPinionAgSum_HwDeg_T_f32/PINIONAGSCAG_HWDEGPERCNT_F32), NXTRFIXDPT_FLOATTOP0_ULS_F32);
	Ford_StePinComp_An_Est_Cnt_T_enum = Lim_u16 (Ford_StePinComp_An_Est_Cnt_T_enum, STEERPINIONCMPDAGMIN_CNT_U16, STEERPINIONCMPDAGMAX_CNT_U16);
	/** End of  CnvCmpdSteerPinionAg **/
	
	/** Start of CalcSteerPinionAgChks **/
	Ford_StePinRelInit_An_SnsSum_Cnt_T_u16 = (Ford_StePinRelInit_An_Sns_Cnt_T_u16 >> RISHIFT_CNT_U16) + (Ford_StePinRelInit_An_Sns_Cnt_T_u16 & MASKTOCALCCHKS_CNT_U16);
    Ford_StePinRelInit_An_SnsBit_Cnt_T_u16 = (Ford_StePinRelInit_An_SnsSum_Cnt_T_u16 & MASKTOCALCCHKS_CNT_U16);
	Ford_StePinAn_No_CntSumBit_Cnt_T_u16 = (((uint16)(Ford_StePinAn_No_Cnt_Cnt_T_enum) + Ford_StePinRelInit_An_SnsBit_Cnt_T_u16) & MASKTOCALCCHKS_CNT_U16);
	Ford_StePinAn_No_Cs_Cnt_T_enum = (uint8) Ford_StePinAn_No_CntSumBit_Cnt_T_u16;
	Ford_StePinAn_No_Cs_Cnt_T_enum = (~Ford_StePinAn_No_Cs_Cnt_T_enum);
	Ford_StePinAn_No_Cs_Cnt_T_enum = Lim_u08(Ford_StePinAn_No_Cs_Cnt_T_enum, STEERPINIONAGCHKSMIN_CNT_U08, STEERPINIONAGCHKSMAX_CNT_U08);
   /** End of CalcSteerPinionAgChks **/
   
	/* Write RTE outputs */
	(void)Rte_Write_Ford_StePw_B_Rq_Ford_StePw_B_Rq(FordVehSteerPwrReq_Cnt_T_enum);
	(void)Rte_Write_Ford_StePinCompAnEst_D_Qf_Ford_StePinCompAnEst_D_Qf(CmpdSteerPinionAgQlyFac_Cnt_T_enum);
	(void)Rte_Write_Ford_StePinAn_No_Cnt_Ford_StePinAn_No_Cnt(Ford_StePinAn_No_Cnt_Cnt_T_enum);
	(void)Rte_Write_Ford_StePinAn_No_Cs_Ford_StePinAn_No_Cs(Ford_StePinAn_No_Cs_Cnt_T_enum);
	(void)Rte_Write_Ford_StePinComp_An_Est_Ford_StePinComp_An_Est(Ford_StePinComp_An_Est_Cnt_T_enum);
	(void)Rte_Write_Ford_StePinRelInit_An_Sns_Ford_StePinRelInit_An_Sns(Ford_StePinRelInit_An_Sns_Cnt_T_enum);

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}


#define FordMsg07EBusHiSpd_STOP_SEC_CODE
#include "FordMsg07EBusHiSpd_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


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
