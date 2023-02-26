/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  CDD_MotVel.c
 *        Config:  C:/Users/nz3541/Documents/SynergyWorkingEA4/SF040A_MotVel_Impl/tools/Component.dpa
 *     SW-C Type:  CDD_MotVel
 *  Generated at:  Thu Jul 20 09:08:54 2017
 *
 *     Generator:  MICROSAR RTE Generator Version 4.13.0
 *                 RTE Core Version 1.13.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  C-Code implementation template for SW-C <CDD_MotVel>
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of version logging area >>                DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/**********************************************************************************************************************
* Copyright 2016, 2017 Nexteer 
* Nexteer Confidential
*
* Module File Name  : CDD_MotVel.c
* Module Description: Implementation of calculation of Motor Velocity
* Project           : CBD 
* Author            : Rijvi Ahmed
***********************************************************************************************************************
* Version Control:
* %version:          4 %
* %derived_by:       nz3541 %
*----------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author         Change Description                                                           SCR #
* -------   -------  --------  ---------------------------------------------------------------------------     --------
* 04/11/16   1       Rijvi       Initial Version                                                                EA4#4987
* 08/23/16   2       Selva       Updated to version 1.4.0 Design                                                EA4#6744
* 11/21/16   3       TATA        Updated to version 2.1.0 Design                                                EA4#7903
* 07/11/17   4       SPP         Remove application data types                                                 EA4#12461
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
 * Data Types:
 * ===========
 * u0p16
 *   uint16 represents integers with a minimum value of 0 and a maximum value of 65535.
 *      The order-relation on uint16 is: x < y if y - x is positive.
 *      uint16 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 1267, +10000.
 *
 *********************************************************************************************************************/

#include "Rte_CDD_MotVel.h" /* PRQA S 0857 */ /* MD_MSR_1.1_857 */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

#include "CDD_MotVel_private.h"
#include "NxtrFixdPt.h"
#include "NxtrMath.h"
#include "ArchGlbPrm.h"


/******************************************** File Level Rule Deviations *********************************************/

/* MISRA-C:2004 Rule 12.4 [NXTRDEV 12.4.1]: Function will not any side effects as the function maps back to constant */
/* MISRA-C:2004 Rule 19.1 [NXTRDEV 19.1.1]: AUTOSAR requires deviation from this rule for Memory Mapping include statements */
/* MISRA-C:2004 Rule 16.10 [NXTRDEV 16.10.1]: There is no appropriate action to take on the return value for Rte_Read and Rte_Write.*/


/********************************************* Embedded Local Constants **********************************************/
#define MOTVELMAXININVAL_CNT_U08        31U 			
#define MOTAGMECHIDPTSIGTHD_ULS_U08     1U
#define MOTVELMIN_MOTRADPERSEC_F32      (-1350.0F)
#define MOTVELMAX_MOTRADPERSEC_F32      1350.0F
#define BITMASK16BIT_CNT_U32            0xFFFFU           /* Equivalent to 65535U in Decimal*/
#define BUFSIZECOMBD_CNT_U08            16U
#define SECTOMICROSEC_ULS_F32           1000000.0F

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
 * sint8: Integer in interval [-128...127] (standard type)
 * u0p16: Integer in interval [0...65535]
 * uint16: Integer in interval [0...65535] (standard type)
 * uint32: Integer in interval [0...4294967295] (standard type)
 * uint8: Integer in interval [0...255] (standard type)
 *
 * Array Types:
 * ============
 * Ary1D_u0p16_8: Array with 8 element(s) of type u0p16
 * Ary1D_u32_8: Array with 8 element(s) of type uint32
 *
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   float32 *Rte_Pim_dMotVelAvrgTi(void)
 *   float32 *Rte_Pim_dMotVelTiStampRef(void)
 *   u0p16 *Rte_Pim_dMotVelMotAgRef(void)
 *   uint8 *Rte_Pim_MotAgBufIdxPrev(void)
 *   uint8 *Rte_Pim_MotAgBufIdxPrim(void)
 *   uint8 *Rte_Pim_MotVelIninCntr(void)
 *   u0p16 *Rte_Pim_MotAgBufPrev(void)
 *     Returnvalue: u0p16* is of type Ary1D_u0p16_8
 *   uint32 *Rte_Pim_MotAgTiBufPrev(void)
 *     Returnvalue: uint32* is of type Ary1D_u32_8
 *
 *********************************************************************************************************************/


#define CDD_MotVel_START_SEC_CODE
#include "CDD_MotVel_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: MotVelInit1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: MotVelInit1_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, CDD_MotVel_CODE) MotVelInit1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: MotVelInit1
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: MotVelPer2
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
 *   Std_ReturnType Rte_Read_AssiMechPolarity_Val(sint8 *data)
 *   Std_ReturnType Rte_Read_MotAgBuf_Ary1D(u0p16 *data)
 *     Argument data: u0p16* is of type Ary1D_u0p16_8
 *   Std_ReturnType Rte_Read_MotAgBufIdx_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_MotAgMeclIdptSig_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_MotAgTiBuf_Ary1D(uint32 *data)
 *     Argument data: uint32* is of type Ary1D_u32_8
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_MotVelCrf_Val(float32 data)
 *   Std_ReturnType Rte_Write_MotVelMrf_Val(float32 data)
 *   Std_ReturnType Rte_Write_MotVelVld_Logl(boolean data)
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: MotVelPer2_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, CDD_MotVel_CODE) MotVelPer2(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: MotVelPer2
 *********************************************************************************************************************/
 
 
 
 VAR(uint8,   AUTOMATIC)  MotAgBufIdx_Cnt_T_u08;
 VAR(uint32, AUTOMATIC)  SumTiStampBufSt_MicroSec_T_u32 = 0U;
 VAR(uint8,   AUTOMATIC)  i;
 VAR(uint16, AUTOMATIC)  TiStampRef_MicroSec_T_u16;
 VAR(uint16,  AUTOMATIC)  MotAgRef_MotRev_T_u0p16;
 VAR(sint32, AUTOMATIC)  TiStamp1_MicroSec_T_s32;
 VAR(sint32, AUTOMATIC)  TiStamp2_MicroSec_T_s32;
 VAR(uint16,  AUTOMATIC)  MotAg1_MotRev_T_u0p16;
 VAR(uint16,  AUTOMATIC)  MotAg2_MotRev_T_u0p16;
 VAR(float32, AUTOMATIC)  MotAg1_MotRad_T_f32;
 VAR(float32, AUTOMATIC)  MotAg2_MotRad_T_f32;
 VAR(float32, AUTOMATIC)  SumAgTi_MotRadSec_T_f32=0.0F;
 VAR(float32, AUTOMATIC)  SqrdSumTiStamp1_MicroSecSqr_T_f32 = 0.0F;
 VAR(float32, AUTOMATIC)  MotVelCrf_MotRadpSec_T_f32;
 VAR(float32, AUTOMATIC)  MotVelMrf_MotRadpSec_T_f32;
 
 VAR(uint8,   AUTOMATIC)  MotAgMeclIdptSig_Cnt_T_u08;
 VAR(uint32, AUTOMATIC)  AdjTiStampRef_MicroSec_T_u32 ;
 VAR(uint16,  AUTOMATIC)  MotAgBuf_MotRev_T_u0p16[BUFSIZE_CNT_U08];
 VAR(uint32,  AUTOMATIC)  MotAgTiBuf_MicroSec_T_u32[BUFSIZE_CNT_U08];
 VAR(sint8,   AUTOMATIC)  AssiMechPolarity_Uls_T_s08;
 VAR(boolean,   AUTOMATIC) MotVelVld_Cnt_T_logl;
 
  /* Read Rte inputs */
 (void)Rte_Read_MotAgBufIdx_Val( &MotAgBufIdx_Cnt_T_u08 );              
 (void)Rte_Read_MotAgTiBuf_Ary1D( MotAgTiBuf_MicroSec_T_u32 );          
 (void)Rte_Read_MotAgBuf_Ary1D( MotAgBuf_MotRev_T_u0p16 );				
 (void)Rte_Read_AssiMechPolarity_Val( &AssiMechPolarity_Uls_T_s08 ); 	
 (void)Rte_Read_MotAgMeclIdptSig_Val( &MotAgMeclIdptSig_Cnt_T_u08 );    
 
 
 /**************************************************************************************************/
 /*** -------------------------------- START: MtrVelMRFCalc ------------------------------------ ***/
 /**************************************************************************************************/
 
 *Rte_Pim_MotAgBufIdxPrev()   =  (*Rte_Pim_MotAgBufIdxPrev()  + 1U) & (BUFSIZE_CNT_U08 - 1U) ;
 TiStampRef_MicroSec_T_u16    =  (uint16)((Rte_Pim_MotAgTiBufPrev()[*Rte_Pim_MotAgBufIdxPrev() ])& BITMASK16BIT_CNT_U32);
 MotAgRef_MotRev_T_u0p16      =  Rte_Pim_MotAgBufPrev()[*Rte_Pim_MotAgBufIdxPrev() ];
 *Rte_Pim_MotAgBufIdxPrev()   =  MotAgBufIdx_Cnt_T_u08 ;
 
 *Rte_Pim_dMotVelTiStampRef() =  (float32)TiStampRef_MicroSec_T_u16;
 *Rte_Pim_dMotVelMotAgRef()   =  MotAgRef_MotRev_T_u0p16;
 
 /* In Design Previous time buffer is combined with Current time buffer to form one buffer of BUFSIZE_CNT_U08*2 size. Same applies to Angle buffer too. 
 As each result is the summation of each value of buffer and all values in the buffer has same operation, Software implementation instead of combining buffers it uses individual buffers and thereby reduces the number of iterations in 
 the implementation  i.e., it computes SumTiStampBufSt_MicroSec_T_u32 from one value  of current buffer and one value  of previous buffers within one loop rather using two loops (if we combine the buffers ). So instead of 16 iterations the 
 entire arithmetic operations needs only 8 iterations. 
 Same Rationale applies to SumTiStampBufSt block and SumAg SqurdSum block Implementation*/
 
 /*SumTiStampBufSt*/
 for(i = 0U; i < BUFSIZE_CNT_U08; i++)
 {
     SumTiStampBufSt_MicroSec_T_u32 = SumTiStampBufSt_MicroSec_T_u32 + 
	                                 (uint32)((uint32)(uint16)((uint16)((Rte_Pim_MotAgTiBufPrev()[i])& BITMASK16BIT_CNT_U32) - TiStampRef_MicroSec_T_u16) + 
									  (uint32)(uint16)((uint16)(MotAgTiBuf_MicroSec_T_u32[i]& BITMASK16BIT_CNT_U32) - TiStampRef_MicroSec_T_u16)); 
 }

 AdjTiStampRef_MicroSec_T_u32 = SumTiStampBufSt_MicroSec_T_u32 / (uint32)(BUFSIZECOMBD_CNT_U08);
 *Rte_Pim_dMotVelAvrgTi() = (float32)AdjTiStampRef_MicroSec_T_u32;
 
 /*SumAg SqurdSum*/
 for(i = 0U; i < BUFSIZE_CNT_U08; i++)
 {
	 TiStamp1_MicroSec_T_s32 = ((sint32) (uint16)((uint16)((Rte_Pim_MotAgTiBufPrev()[i]) & BITMASK16BIT_CNT_U32)-(uint16)TiStampRef_MicroSec_T_u16)) - (sint32)(AdjTiStampRef_MicroSec_T_u32);
	 TiStamp2_MicroSec_T_s32 = ((sint32) (uint16)((uint16)(MotAgTiBuf_MicroSec_T_u32[i] & BITMASK16BIT_CNT_U32)-(uint16)TiStampRef_MicroSec_T_u16)) - (sint32)(AdjTiStampRef_MicroSec_T_u32);
	 MotAg1_MotRev_T_u0p16 = Rte_Pim_MotAgBufPrev()[i] - MotAgRef_MotRev_T_u0p16;
	 MotAg2_MotRev_T_u0p16 = MotAgBuf_MotRev_T_u0p16[i] - MotAgRef_MotRev_T_u0p16;
	 MotAg1_MotRad_T_f32 = (FixdToFloat_f32_u16(MotAg1_MotRev_T_u0p16, NXTRFIXDPT_P16TOFLOAT_ULS_F32 )*ARCHGLBPRM_2PI_ULS_F32);
	 MotAg2_MotRad_T_f32 = (FixdToFloat_f32_u16(MotAg2_MotRev_T_u0p16, NXTRFIXDPT_P16TOFLOAT_ULS_F32 )*ARCHGLBPRM_2PI_ULS_F32);
	 
	 if (MotAg1_MotRad_T_f32 > ARCHGLBPRM_PI_ULS_F32)
	 {
		 MotAg1_MotRad_T_f32 = MotAg1_MotRad_T_f32 - ARCHGLBPRM_2PI_ULS_F32;
	 }
	 
	 if (MotAg2_MotRad_T_f32 > ARCHGLBPRM_PI_ULS_F32)
	 {
		 MotAg2_MotRad_T_f32 = MotAg2_MotRad_T_f32 - ARCHGLBPRM_2PI_ULS_F32;
	 } 
	 
	 SumAgTi_MotRadSec_T_f32 =  SumAgTi_MotRadSec_T_f32 + ((MotAg1_MotRad_T_f32 * (float32)TiStamp1_MicroSec_T_s32)/SECTOMICROSEC_ULS_F32) + ((MotAg2_MotRad_T_f32 * (float32)TiStamp2_MicroSec_T_s32)/SECTOMICROSEC_ULS_F32);
	 SqrdSumTiStamp1_MicroSecSqr_T_f32 =  SqrdSumTiStamp1_MicroSecSqr_T_f32 + (((float32)TiStamp1_MicroSec_T_s32 * (float32)TiStamp1_MicroSec_T_s32) + ((float32)TiStamp2_MicroSec_T_s32 * (float32)TiStamp2_MicroSec_T_s32));
     Rte_Pim_MotAgTiBufPrev()[i] = MotAgTiBuf_MicroSec_T_u32[i];
	 Rte_Pim_MotAgBufPrev()[i]  = MotAgBuf_MotRev_T_u0p16[i];
 }
 
 if(SqrdSumTiStamp1_MicroSecSqr_T_f32 > ARCHGLBPRM_FLOATZEROTHD_ULS_F32)
 {
	 MotVelMrf_MotRadpSec_T_f32 = ((SumAgTi_MotRadSec_T_f32 * SECTOMICROSEC_ULS_F32 * SECTOMICROSEC_ULS_F32) / SqrdSumTiStamp1_MicroSecSqr_T_f32);
 }
 else
 {
	 MotVelMrf_MotRadpSec_T_f32 = (SumAgTi_MotRadSec_T_f32 / (ARCHGLBPRM_2MILLISEC_SEC_F32 * ARCHGLBPRM_2MILLISEC_SEC_F32)) * ARCHGLBPRM_2PI_ULS_F32;
 }
 
 
 MotVelMrf_MotRadpSec_T_f32 = Lim_f32(MotVelMrf_MotRadpSec_T_f32, MOTVELMIN_MOTRADPERSEC_F32, MOTVELMAX_MOTRADPERSEC_F32);
 
 if( *Rte_Pim_MotVelIninCntr() < MOTVELMAXININVAL_CNT_U08 )
 {
	  *Rte_Pim_MotVelIninCntr() = *Rte_Pim_MotVelIninCntr() + 1U;
	  MotVelMrf_MotRadpSec_T_f32 = 0.0F;
 }
 
 /**************************************************************************************************/
 /*** --------------------------------   END: MtrVelMRFCalc ------------------------------------ ***/
 /**************************************************************************************************/
 
 
 
 /**************************************************************************************************/
 /*** ------------------------------ START: MtrVelCRFCalc --------------------------------- ***/
 /**************************************************************************************************/
 
 MotVelCrf_MotRadpSec_T_f32 = MotVelMrf_MotRadpSec_T_f32 * (float32)AssiMechPolarity_Uls_T_s08 ;
 MotVelCrf_MotRadpSec_T_f32 = Lim_f32(MotVelCrf_MotRadpSec_T_f32, MOTVELMIN_MOTRADPERSEC_F32, MOTVELMAX_MOTRADPERSEC_F32);
 
 /**************************************************************************************************/
 /*** ------------------------------   END: MtrVelCRFCalc --------------------------------- ***/
 /**************************************************************************************************/
 
 
  /**************************************************************************************************/
 /*** ------------------------------ START: MotVelVldCalc --------------------------------- ***/
 /**************************************************************************************************/
 
 if(MotAgMeclIdptSig_Cnt_T_u08 <= MOTAGMECHIDPTSIGTHD_ULS_U08)
 {
 	MotVelVld_Cnt_T_logl = FALSE;
 }	
 else
 {
	MotVelVld_Cnt_T_logl = TRUE;
 } 
 

 /**************************************************************************************************/
 /*** ------------------------------   END: MotVelVldCalc --------------------------------- ***/
 /**************************************************************************************************/
 
 /* Write Rte Outputs */
 (void)Rte_Write_MotVelCrf_Val(MotVelCrf_MotRadpSec_T_f32);  
 (void)Rte_Write_MotVelMrf_Val(MotVelMrf_MotRadpSec_T_f32);  
 (void)Rte_Write_MotVelVld_Logl(MotVelVld_Cnt_T_logl);      
 
 
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}


#define CDD_MotVel_STOP_SEC_CODE
#include "CDD_MotVel_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


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
