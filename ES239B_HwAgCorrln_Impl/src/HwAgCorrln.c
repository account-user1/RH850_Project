/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  HwAgCorrln.c
 *     SW-C Type:  HwAgCorrln
 *  Generated at:  Tue Mar 28 14:01:47 2017
 *
 *     Generator:  MICROSAR RTE Generator Version 4.3.0
 *                 RTE Core Version 1.3.0
 *       License:  Unlimited license CBD1400351 (THE ECU PRODUCT "STEERING SYSTEMS", THE ECU SUPPLIER "NEXTEER", THE VEHICLE MANUFACTURER "GENERAL MOTORS CORPORATION") for Nexteer Automotive Corporation
 *
 *   Description:  C-Code implementation template for SW-C <HwAgCorrln>
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of version logging area >>                DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/**********************************************************************************************************************
* Copyright 2016,2017 Nexteer 
* Nexteer Confidential
*
* Module File Name: HwAgCorrln.c
* Module Description: Implementation of Handwheel Angle Correlation FDD ES239B
* Project           : CBD
* Author            : Matthew Leser
*****************************************************************************
* Version Control:
* %version:          1
* %derived_by:       nz2796
*---------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author         Change Description                                                           SCR #
* -------   -------  --------  ---------------------------------------------------------------------------     ----------
* 11/1/16   1        ML        Initial Version                                                                 EA4#7066
* 03/28/17  2        JK        Updated to FDD v 2.0.1                                                          EA4#10437
**********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of version logging area >>                  DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *
 * AUTOSAR Modelling Object Descriptions
 *
 **********************************************************************************************************************

 Data Types:
 ===========
  SigQlfr1
    uint8 represents integers with a minimum value of 0 and a maximum value of 255.
     The order-relation on uint8 is: x < y if y - x is positive.
     uint8 has a lexical representation consisting of a finite-length sequence 
     of decimal digits (#x30-#x39).
     
     For example: 1, 0, 126, +10.

 *********************************************************************************************************************/

#include "Rte_HwAgCorrln.h"


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

#include "NxtrMath.h"
#include "FltInj.h" 
 
 /* MISRA-C:2004 Rule 19.1 [NXTRDEV 19.1.1]: AUTOSAR requires deviation from this rule for Memory Mapping include statements */
 /* MISRA-C:2004 Rule 19.11: AUTOSAR requires deviation from this rule for Memory Mapping include statements */
 
#define HWAGCORRLNMAXSTALL_CNT_U08     200U

#define CORRLNSTSMINVAL_CNT_U08     0U
#define CORRLNSTSMAXVAL_CNT_U08     1U
#define NRVLDSIGMIN_CNT_U08         0U
#define NRVLDSIGMAX_CNT_U08         2U
#define MAXSTALLCNTR_CNT_U08		255U


static FUNC (boolean, HwAgCorrln_CODE) HwAgSigAvlChk(uint8 SigRollg_Cnt_T_u08,
												   SigQlfr1 SigQlfr_Cnt_T_enum,
												   P2VAR(uint8, AUTOMATIC, HwAgCorrln_VAR) LstRollgCnt_Cnt_T_u08,
												   P2VAR(uint8, AUTOMATIC, HwAgCorrln_VAR) LstStallCnt_Cnt_T_u08);
														
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of include and declaration area >>          DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *
 * Used AUTOSAR Data Types
 *
 **********************************************************************************************************************
 *
 * Enumeration Types:
 * ==================
 * SigQlfr1: Enumeration of integer in interval [0...255] with enumerators
 *   SIGQLFR_NORES (0U)
 *   SIGQLFR_PASSD (1U)
 *   SIGQLFR_FAILD (2U)
 *
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   uint8 *Rte_Pim_HwAgARollgCntPrev(void)
 *   uint8 *Rte_Pim_HwAgAStallCntPrev(void)
 *   boolean *Rte_Pim_dHwAgCorrlnAgAAvl(void)
 *
 *********************************************************************************************************************/


#define HwAgCorrln_START_SEC_CODE
#include "HwAgCorrln_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: HwAgCorrlnInit1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 *********************************************************************************************************************/

FUNC(void, HwAgCorrln_CODE) HwAgCorrlnInit1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: HwAgCorrlnInit1
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: HwAgCorrlnPer1
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
 *   Std_ReturnType Rte_Read_HwAgAQlfr_Val(SigQlfr1 *data)
 *   Std_ReturnType Rte_Read_HwAgARollgCntr_Val(uint8 *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_HwAgCorrlnSt_Val(uint8 data)
 *   Std_ReturnType Rte_Write_HwAgIdptSig_Val(uint8 data)
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_FltInj_u08_Oper(uint8 *SigPah_Arg, uint16 LocnKey_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *
 *********************************************************************************************************************/

FUNC(void, HwAgCorrln_CODE) HwAgCorrlnPer1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: HwAgCorrlnPer1
 *********************************************************************************************************************/
	 VAR (uint8, AUTOMATIC)    HwAgARollgCntr_Cnt_T_u08;
	 VAR (uint8, AUTOMATIC)    HwAgCorrlnSt_Cnt_T_u08;
	 VAR (uint8, AUTOMATIC)    HwAgIdptSig_Cnt_T_u08;
	 VAR (SigQlfr1, AUTOMATIC) HwAgAQlfr_Cnt_T_enum;
	 VAR (boolean, AUTOMATIC)  HwAgAAvl_Cnt_T_lgc;
	 
	 /* Read Inputs */
	 (void)Rte_Read_HwAgAQlfr_Val(&HwAgAQlfr_Cnt_T_enum);
	 (void)Rte_Read_HwAgARollgCntr_Val(&HwAgARollgCntr_Cnt_T_u08);
	 
	 /****** Start of 'Corrln Signal Availability' ******/
	 /* HwAgAAvlChk */
	 HwAgAAvl_Cnt_T_lgc = HwAgSigAvlChk(HwAgARollgCntr_Cnt_T_u08,
										HwAgAQlfr_Cnt_T_enum,
										Rte_Pim_HwAgARollgCntPrev(),
										Rte_Pim_HwAgAStallCntPrev());
										
	 *Rte_Pim_dHwAgCorrlnAgAAvl() = HwAgAAvl_Cnt_T_lgc;
	 
	 /****** End of Corrln Signal Availability ******/
	 
	 /****** Start of 'Correlation' ******/
	 
	 if(HwAgAAvl_Cnt_T_lgc == TRUE)
	 {
		 HwAgCorrlnSt_Cnt_T_u08 = Lim_u08(1U, CORRLNSTSMINVAL_CNT_U08, CORRLNSTSMAXVAL_CNT_U08);
		 HwAgIdptSig_Cnt_T_u08 = Lim_u08(1U, NRVLDSIGMIN_CNT_U08, NRVLDSIGMAX_CNT_U08);
	 }
	 else
	 {
		 HwAgCorrlnSt_Cnt_T_u08 = Lim_u08(0U, CORRLNSTSMINVAL_CNT_U08, CORRLNSTSMAXVAL_CNT_U08);
		 HwAgIdptSig_Cnt_T_u08 = Lim_u08(0U, NRVLDSIGMIN_CNT_U08, NRVLDSIGMAX_CNT_U08);
	 }
	 
	 #if (STD_ON == FLTINJENA)    
     (void)Rte_Call_FltInj_u08_Oper(&HwAgIdptSig_Cnt_T_u08,FLTINJ_HWAGCORRLN_HWAGIDPTSIG);   /* REQ: ES239A #139 I */       
     #endif
	 
	 (void)Rte_Write_HwAgCorrlnSt_Val(HwAgCorrlnSt_Cnt_T_u08);
	 (void)Rte_Write_HwAgIdptSig_Val(HwAgIdptSig_Cnt_T_u08);
	 
	 /****** End of 'Correlation' ******/
	 
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}


#define HwAgCorrln_STOP_SEC_CODE
#include "HwAgCorrln_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of function definition area >>            DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
 /*****************************************************************************************************************
  * Name        :   HwAgSigAvlChk
  * Description :   Implementation of 'HwAgSigAvlChk' block.
  *                 Checks Signal Availability.
  * Inputs      :   SigRollg_Cnt_T_u08, SigQlfr_Cnt_T_enum
  *                 *LstRollgCnt_Cnt_T_u08, *LstStallCnt_Cnt_T_u08
  * Outputs     :   SigAvl_Cnt_T_lgc
  * Usage Notes :   None
  ****************************************************************************************************************/
  
static FUNC (boolean, HwAgCorrln_CODE) HwAgSigAvlChk(uint8 SigRollg_Cnt_T_u08,
												   SigQlfr1 SigQlfr_Cnt_T_enum,
												   P2VAR(uint8, AUTOMATIC, HwAgCorrln_VAR) LstRollgCnt_Cnt_T_u08,
												   P2VAR(uint8, AUTOMATIC, HwAgCorrln_VAR) LstStallCnt_Cnt_T_u08)
{
    VAR(boolean, AUTOMATIC) SigAvl_Cnt_T_lgc;
    
    if (SigRollg_Cnt_T_u08 == *LstRollgCnt_Cnt_T_u08)
    {
        if(*LstStallCnt_Cnt_T_u08 < MAXSTALLCNTR_CNT_U08)
        {
            *LstStallCnt_Cnt_T_u08 = *LstStallCnt_Cnt_T_u08 + 1U;
        }
    }
    else
    {
        *LstStallCnt_Cnt_T_u08 = 0U;
    }
    
    if (*LstStallCnt_Cnt_T_u08 >= HWAGCORRLNMAXSTALL_CNT_U08)
    {
        SigAvl_Cnt_T_lgc = FALSE;
    }
    else
    {
        if(SigQlfr_Cnt_T_enum < SIGQLFR_FAILD)                                                           
        {
            SigAvl_Cnt_T_lgc = TRUE;
        }
        else
        {
            SigAvl_Cnt_T_lgc = FALSE;
        }
    }
    *LstRollgCnt_Cnt_T_u08 = SigRollg_Cnt_T_u08;

    return SigAvl_Cnt_T_lgc;    
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
