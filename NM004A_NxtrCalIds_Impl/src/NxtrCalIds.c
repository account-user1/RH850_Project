/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  NxtrCalIds.c
 *     SW-C Type:  NxtrCalIds
 *  Generated at:  Mon Apr 11 14:40:14 2016
 *
 *     Generator:  MICROSAR RTE Generator Version 4.3.0
 *                 RTE Core Version 1.3.0
 *       License:  Unlimited license CBD1400351 (THE ECU PRODUCT "STEERING SYSTEMS", THE ECU SUPPLIER "NEXTEER", THE VEHICLE MANUFACTURER "GENERAL MOTORS CORPORATION") for Nexteer Automotive Corporation
 *
 *   Description:  C-Code implementation template for SW-C <NxtrCalIds>
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of version logging area >>                DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/***********************************************************************************************************************
* Copyright 2016 Nexteer
* Nexteer Confidential
*
* Module File Name: NxtrCalIds.c
* Module Description: Nexteer Calibration Identification
* Project           : Component Based Design
* Author            : Jared Julien
************************************************************************************************************************
* Version Control:
* %version:         1 %
* %derived_by:      kzdyfh %
* ---------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author    Change Description                                                           SCR #
* --------  -------  --------  ---------------------------------------------------------------------------  ----------
* 01/26/16  1        JWJ       Initial file creation                                                        EA4#2733
* 01/28/16  2        JWJ       Removed local table that stored cal addresses as compiler didn't like it     EA4#2733
* 01/28/16  3        JWJ       Correct cal name mismatch for group #2 conditional in devt info read         EA4#2733
***********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of version logging area >>                  DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

#include "Rte_NxtrCalIds.h"


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of include and declaration area >>          DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *
 * Used AUTOSAR Data Types
 *
 **********************************************************************************************************************
 *
 * Array Types:
 * ============
 * Ary1D_u8_48: Array with 48 element(s) of type uint8
 * Ary1D_u8_6: Array with 6 element(s) of type uint8
 *
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Calibration Parameters:
 * =======================
 *   Calibration Component Calibration Parameters:
 *   ---------------------------------------------
 *   uint32 Rte_Prm_NxtrCalIdsCal0DevlpRelNr_Val(void)
 *   uint32 Rte_Prm_NxtrCalIdsCal0DevlpTiStamp_Val(void)
 *   uint32 Rte_Prm_NxtrCalIdsCal1DevlpRelNr_Val(void)
 *   uint32 Rte_Prm_NxtrCalIdsCal1DevlpTiStamp_Val(void)
 *   uint32 Rte_Prm_NxtrCalIdsCal2DevlpRelNr_Val(void)
 *   uint32 Rte_Prm_NxtrCalIdsCal2DevlpTiStamp_Val(void)
 *   uint8 Rte_Prm_NxtrCalIdsCal0DevlpRelSt_Val(void)
 *   uint8 Rte_Prm_NxtrCalIdsCal0DevlpVers_Val(void)
 *   uint8 Rte_Prm_NxtrCalIdsCal1DevlpRelSt_Val(void)
 *   uint8 Rte_Prm_NxtrCalIdsCal1DevlpVers_Val(void)
 *   uint8 Rte_Prm_NxtrCalIdsCal2DevlpRelSt_Val(void)
 *   uint8 Rte_Prm_NxtrCalIdsCal2DevlpVers_Val(void)
 *   uint8 *Rte_Prm_NxtrCalIdsCal0DevlpAuthor_Ary1D(void)
 *   uint8 *Rte_Prm_NxtrCalIdsCal0DevlpDescr_Ary1D(void)
 *   uint8 *Rte_Prm_NxtrCalIdsCal1DevlpAuthor_Ary1D(void)
 *   uint8 *Rte_Prm_NxtrCalIdsCal1DevlpDescr_Ary1D(void)
 *   uint8 *Rte_Prm_NxtrCalIdsCal2DevlpAuthor_Ary1D(void)
 *   uint8 *Rte_Prm_NxtrCalIdsCal2DevlpDescr_Ary1D(void)
 *
 *********************************************************************************************************************/


#define NxtrCalIds_START_SEC_CODE
#include "NxtrCalIds_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: NxtrCalIdsCalDevlpRd_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <NxtrCalIdsCalDevlpRd>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType NxtrCalIdsCalDevlpRd_Oper(uint8 CalRegn, uint8 *CalAuthor, uint8 *CalVers, uint32 *CalTiStamp, uint8 *CalDescr)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_NxtrCalIdsCalDevlpRd_PortIf1_E_NOT_OK
 *
 *********************************************************************************************************************/

#ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, NxtrCalIds_CODE) NxtrCalIdsCalDevlpRd_Oper(uint8 CalRegn, P2VAR(uint8, AUTOMATIC, RTE_NXTRCALIDS_APPL_VAR) CalAuthor, P2VAR(uint8, AUTOMATIC, RTE_NXTRCALIDS_APPL_VAR) CalVers, P2VAR(uint32, AUTOMATIC, RTE_NXTRCALIDS_APPL_VAR) CalTiStamp, P2VAR(uint8, AUTOMATIC, RTE_NXTRCALIDS_APPL_VAR) CalDescr) /* PRQA S 0850 */ /* MD_MSR_19.8 */
#else
FUNC(Std_ReturnType, NxtrCalIds_CODE) NxtrCalIdsCalDevlpRd_Oper(uint8 CalRegn, P2VAR(Ary1D_u8_6, AUTOMATIC, RTE_NXTRCALIDS_APPL_VAR) CalAuthor, P2VAR(uint8, AUTOMATIC, RTE_NXTRCALIDS_APPL_VAR) CalVers, P2VAR(uint32, AUTOMATIC, RTE_NXTRCALIDS_APPL_VAR) CalTiStamp, P2VAR(Ary1D_u8_48, AUTOMATIC, RTE_NXTRCALIDS_APPL_VAR) CalDescr) /* PRQA S 0850 */ /* MD_MSR_19.8 */
#endif
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: NxtrCalIdsCalDevlpRd_Oper (returns application error)
 *********************************************************************************************************************/

	VAR(Std_ReturnType, AUTOMATIC) RtnCod_Cnt_T_u08 = RTE_E_OK;
	VAR(uint8, AUTOMATIC) Index_Cnt_T_u08;
	P2CONST(uint8, AUTOMATIC, AUTOMATIC) AuthorPtr_Cnt_T_u08 = NULL_PTR;
	P2CONST(uint8, AUTOMATIC, AUTOMATIC) DescPtr_Cnt_T_u08 = NULL_PTR;

	if (CalRegn == 0U)
	{
		if (Rte_Prm_NxtrCalIdsCal0DevlpRelSt_Val() == 1U)
		{
			*CalVers = Rte_Prm_NxtrCalIdsCal0DevlpVers_Val();
			*CalTiStamp = Rte_Prm_NxtrCalIdsCal0DevlpTiStamp_Val();
			AuthorPtr_Cnt_T_u08 = Rte_Prm_NxtrCalIdsCal0DevlpAuthor_Ary1D();
			DescPtr_Cnt_T_u08 = Rte_Prm_NxtrCalIdsCal0DevlpDescr_Ary1D();
		}
		else
		{
			RtnCod_Cnt_T_u08 = RTE_E_NxtrCalIdsCalDevlpRd_PortIf1_E_NOT_OK;
		}
	}
	else if (CalRegn == 1U)
	{
		if (Rte_Prm_NxtrCalIdsCal1DevlpRelSt_Val() == 1U)
		{
			*CalVers = Rte_Prm_NxtrCalIdsCal1DevlpVers_Val();
			*CalTiStamp = Rte_Prm_NxtrCalIdsCal1DevlpTiStamp_Val();
			AuthorPtr_Cnt_T_u08 = Rte_Prm_NxtrCalIdsCal1DevlpAuthor_Ary1D();
			DescPtr_Cnt_T_u08 = Rte_Prm_NxtrCalIdsCal1DevlpDescr_Ary1D();
		}
		else
		{
			RtnCod_Cnt_T_u08 = RTE_E_NxtrCalIdsCalDevlpRd_PortIf1_E_NOT_OK;
		}
	}
	else if (CalRegn == 2U)
	{
		if (Rte_Prm_NxtrCalIdsCal2DevlpRelSt_Val() == 1U)
		{
			*CalVers = Rte_Prm_NxtrCalIdsCal2DevlpVers_Val();
			*CalTiStamp = Rte_Prm_NxtrCalIdsCal2DevlpTiStamp_Val();
			AuthorPtr_Cnt_T_u08 = Rte_Prm_NxtrCalIdsCal2DevlpAuthor_Ary1D();
			DescPtr_Cnt_T_u08 = Rte_Prm_NxtrCalIdsCal2DevlpDescr_Ary1D();
		}
		else
		{
			RtnCod_Cnt_T_u08 = RTE_E_NxtrCalIdsCalDevlpRd_PortIf1_E_NOT_OK;
		}
	}
	else
	{
		RtnCod_Cnt_T_u08 = RTE_E_NxtrCalIdsCalDevlpRd_PortIf1_E_NOT_OK;
	}

	if (RtnCod_Cnt_T_u08 == RTE_E_OK)
	{
		for (Index_Cnt_T_u08 = 0U; Index_Cnt_T_u08 < 6U; Index_Cnt_T_u08 += 1U)
		{
			CalAuthor[Index_Cnt_T_u08] = AuthorPtr_Cnt_T_u08[Index_Cnt_T_u08];
		}

		for (Index_Cnt_T_u08 = 0U; Index_Cnt_T_u08 < 48U; Index_Cnt_T_u08 += 1U)
		{
			CalDescr[Index_Cnt_T_u08] = DescPtr_Cnt_T_u08[Index_Cnt_T_u08];
		}
	}

	return RtnCod_Cnt_T_u08;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: NxtrCalIdsCalRelRd_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <NxtrCalIdsCalRelRd>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void NxtrCalIdsCalRelRd_Oper(uint8 CalRegn, uint32 *RelNr, uint8 *RelSt)
 *
 *********************************************************************************************************************/

FUNC(void, NxtrCalIds_CODE) NxtrCalIdsCalRelRd_Oper(uint8 CalRegn, P2VAR(uint32, AUTOMATIC, RTE_NXTRCALIDS_APPL_VAR) RelNr, P2VAR(uint8, AUTOMATIC, RTE_NXTRCALIDS_APPL_VAR) RelSt) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: NxtrCalIdsCalRelRd_Oper
 *********************************************************************************************************************/

	if (CalRegn == 0U)
	{
		*RelNr = Rte_Prm_NxtrCalIdsCal0DevlpRelNr_Val();
		*RelSt = Rte_Prm_NxtrCalIdsCal0DevlpRelSt_Val();
	}
	else if (CalRegn == 1U)
	{
		*RelNr = Rte_Prm_NxtrCalIdsCal1DevlpRelNr_Val();
		*RelSt = Rte_Prm_NxtrCalIdsCal1DevlpRelSt_Val();
	}
	else if (CalRegn == 2U)
	{
		*RelNr = Rte_Prm_NxtrCalIdsCal2DevlpRelNr_Val();
		*RelSt = Rte_Prm_NxtrCalIdsCal2DevlpRelSt_Val();
	}
	else
	{
		*RelNr = 0U;
		*RelSt = 0U;
	}

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: NxtrCalIdsInit1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 *********************************************************************************************************************/

FUNC(void, NxtrCalIds_CODE) NxtrCalIdsInit1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: NxtrCalIdsInit1
 *********************************************************************************************************************/

	/* Dummy initialization function for application mapping */

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}


#define NxtrCalIds_STOP_SEC_CODE
#include "NxtrCalIds_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


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
