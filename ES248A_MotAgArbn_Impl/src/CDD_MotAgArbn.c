/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  CDD_MotAgArbn.c
 *        Config:  C:/_EA4SynWrkgCpy/ES248A_MotAgArbn_Impl/tools/Component.dpa
 *     SW-C Type:  CDD_MotAgArbn
 *  Generated at:  Thu Sep 28 15:20:06 2017
 *
 *     Generator:  MICROSAR RTE Generator Version 4.13.0
 *                 RTE Core Version 1.13.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  C-Code implementation template for SW-C <CDD_MotAgArbn>
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of version logging area >>                DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/**********************************************************************************************************************
* Copyright 2015, 2017 Nexteer 
* Nexteer Confidential
*
* Module File Name  : CDD_MotAgArbn.c
* Module Description: Implementation of Motor Angle Arbitration FDD ES248A 
* Project           : CBD
* Author            : Spandana Balani
***********************************************************************************************************************
* Version Control:
* %version:           3 %
* %derived_by:        nz2554 %
*---------------------------------------------------------------------------------------------------------------------
*   Date      Rev     Author    Change Description                                                             SCR #
* --------  -------  --------  ---------------------------------------------------------------------------- ----------
* 08/02/15   1       SB        Initial version                                                              EA4#845
* 02/08/17   2       ML        Updated to design vers. 1.2.0                                                EA4#8834
* 09/27/17   3       SR        Added display variables as in design 1.3.0.
*                              Changed runnable name from CDD_MotAgArbnInit1 to MotAgArbnInit1              EA4#15132
**********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of version logging area >>                  DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

#include "Rte_CDD_MotAgArbn.h" /* PRQA S 0857 */ /* MD_MSR_1.1_857 */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/* MISRA-C:2004 Rule 19.1 [NXTRDEV 19.1.1]: AUTOSAR requires deviation from this rule for Memory Mapping include statements */

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
 *   uint8 *Rte_Pim_MotAgARollgCntPrev(void)
 *   uint8 *Rte_Pim_MotAgAStallCntPrev(void)
 *   uint8 *Rte_Pim_MotAgBRollgCntPrev(void)
 *   uint8 *Rte_Pim_MotAgBStallCntPrev(void)
 *   boolean *Rte_Pim_dMotAgArbnAAvl(void)
 *   boolean *Rte_Pim_dMotAgArbnBAvl(void)
 *
 *********************************************************************************************************************/


#define CDD_MotAgArbn_START_SEC_CODE
#include "CDD_MotAgArbn_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: MotAgArbnInit1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: MotAgArbnInit1_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, CDD_MotAgArbn_CODE) MotAgArbnInit1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: MotAgArbnInit1
 *********************************************************************************************************************/
/* Init function is added to have a RTE function associated with the periodic 
which runs at motor control ISR rate so that Calibrations and PIMs can be 
initialized/configured through RTE */

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}


#define CDD_MotAgArbn_STOP_SEC_CODE
#include "CDD_MotAgArbn_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


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
