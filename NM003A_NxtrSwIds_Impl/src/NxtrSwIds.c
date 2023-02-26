/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  NxtrSwIds.c
 *     SW-C Type:  NxtrSwIds
 *  Generated at:  Tue Jan 26 09:31:07 2016
 *
 *     Generator:  MICROSAR RTE Generator Version 4.3.0
 *                 RTE Core Version 1.3.0
 *       License:  Unlimited license CBD1400351 (THE ECU PRODUCT "STEERING SYSTEMS", THE ECU SUPPLIER "NEXTEER", THE VEHICLE MANUFACTURER "GENERAL MOTORS CORPORATION") for Nexteer Automotive Corporation
 *
 *   Description:  C-Code implementation template for SW-C <NxtrSwIds>
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of version logging area >>                DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/***********************************************************************************************************************
* Copyright 2016 Nexteer
* Nexteer Confidential
*
* Module File Name: NxtrSwIds.c
* Module Description: Nexteer Software Identification
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
***********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of version logging area >>                  DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

#include "Rte_NxtrSwIds.h"


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
#include "NxtrSwIds.h"


/******************************************** File Level Rule Deviations *********************************************/

/********************************************* Embedded Local Constants **********************************************/
static CONST(uint8, NxtrSwIds_CONST) NxtrSwIds_BuildDate_Cnt_str[11U] = __DATE__;
static CONST(uint8, NxtrSwIds_CONST) NxtrSwIds_BuildTi_Cnt_str[8U] = __TIME__;


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
 * Ary1D_u8_16: Array with 16 element(s) of type uint8
 * Ary1D_u8_20: Array with 20 element(s) of type uint8
 * Ary1D_u8_6: Array with 6 element(s) of type uint8
 *
 *********************************************************************************************************************/


#define NxtrSwIds_START_SEC_CODE
#include "NxtrSwIds_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: NxtrSwIdsInit1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 *********************************************************************************************************************/

FUNC(void, NxtrSwIds_CODE) NxtrSwIdsInit1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: NxtrSwIdsInit1
 *********************************************************************************************************************/

	/* Dummy initialization function to allow application mapping */

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: NxtrSwIdsPsrInfoRd_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <NxtrSwIdsPsrInfoRd>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType NxtrSwIdsPsrInfoRd_Oper(uint32 *PsrId, uint8 *PsrRev)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_NxtrSwIdsPsrInfoRd_PortIf1_E_NOT_OK
 *
 *********************************************************************************************************************/

FUNC(Std_ReturnType, NxtrSwIds_CODE) NxtrSwIdsPsrInfoRd_Oper(P2VAR(uint32, AUTOMATIC, RTE_NXTRSWIDS_APPL_VAR) PsrId, P2VAR(uint8, AUTOMATIC, RTE_NXTRSWIDS_APPL_VAR) PsrRev) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: NxtrSwIdsPsrInfoRd_Oper (returns application error)
 *********************************************************************************************************************/

	VAR(Std_ReturnType, AUTOMATIC) RtnCod_Cnt_T_u08 = RTE_E_OK;

	if (NxtrSwIds_SwOrigin_Cnt_enum == SWORIGIN_PSR)
	{
		*PsrId = NxtrSwIds_PsrId_Cnt_u32;
		*PsrRev = NxtrSwIds_PsrRev_Cnt_u08;
	}
	else
	{
		RtnCod_Cnt_T_u08 = RTE_E_NxtrSwIdsPsrInfoRd_PortIf1_E_NOT_OK;
	}

	return RtnCod_Cnt_T_u08;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: NxtrSwIdsSwBuildDateTiRd_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <NxtrSwIdsSwBuildDateTiRd>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void NxtrSwIdsSwBuildDateTiRd_Oper(uint8 *SwBuildDateTi)
 *
 *********************************************************************************************************************/

#ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(void, NxtrSwIds_CODE) NxtrSwIdsSwBuildDateTiRd_Oper(P2VAR(uint8, AUTOMATIC, RTE_NXTRSWIDS_APPL_VAR) SwBuildDateTi) /* PRQA S 0850 */ /* MD_MSR_19.8 */
#else
FUNC(void, NxtrSwIds_CODE) NxtrSwIdsSwBuildDateTiRd_Oper(P2VAR(Ary1D_u8_20, AUTOMATIC, RTE_NXTRSWIDS_APPL_VAR) SwBuildDateTi) /* PRQA S 0850 */ /* MD_MSR_19.8 */
#endif
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: NxtrSwIdsSwBuildDateTiRd_Oper
 *********************************************************************************************************************/

	VAR(uint8, AUTOMATIC) Index_Cnt_T_u08;

	/* Populate the array with the build date (11 characters) */
	for (Index_Cnt_T_u08 = 0U; Index_Cnt_T_u08 < 11U; Index_Cnt_T_u08 += 1U)
	{
		SwBuildDateTi[Index_Cnt_T_u08] = NxtrSwIds_BuildDate_Cnt_str[Index_Cnt_T_u08];
	}

	/* Add a space (' ' == 0x20 but QAC hates when you assign a char ' ' to a uint8 type) to the array */
	SwBuildDateTi[11U] = 0x20U;

	/* Cap it off with the build time (8 characters) */
	for (Index_Cnt_T_u08 = 0U; Index_Cnt_T_u08 < 8U; Index_Cnt_T_u08 += 1U)
	{
		SwBuildDateTi[Index_Cnt_T_u08 + 12U] = NxtrSwIds_BuildTi_Cnt_str[Index_Cnt_T_u08];
	}

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: NxtrSwIdsSwRelInfoRd_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <NxtrSwIdsSwRelInfoRd>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void NxtrSwIdsSwRelInfoRd_Oper(uint8 *SwOrigin, uint8 *SwAuthor)
 *
 *********************************************************************************************************************/

#ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(void, NxtrSwIds_CODE) NxtrSwIdsSwRelInfoRd_Oper(P2VAR(uint8, AUTOMATIC, RTE_NXTRSWIDS_APPL_VAR) SwOrigin, P2VAR(uint8, AUTOMATIC, RTE_NXTRSWIDS_APPL_VAR) SwAuthor) /* PRQA S 0850 */ /* MD_MSR_19.8 */
#else
FUNC(void, NxtrSwIds_CODE) NxtrSwIdsSwRelInfoRd_Oper(P2VAR(uint8, AUTOMATIC, RTE_NXTRSWIDS_APPL_VAR) SwOrigin, P2VAR(Ary1D_u8_6, AUTOMATIC, RTE_NXTRSWIDS_APPL_VAR) SwAuthor) /* PRQA S 0850 */ /* MD_MSR_19.8 */
#endif
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: NxtrSwIdsSwRelInfoRd_Oper
 *********************************************************************************************************************/

	VAR(uint8, AUTOMATIC) Index_Cnt_T_u08;

	*SwOrigin = (uint8)NxtrSwIds_SwOrigin_Cnt_enum;

	for (Index_Cnt_T_u08 = 0U; Index_Cnt_T_u08 < 6U; Index_Cnt_T_u08 += 1U)
	{
		SwAuthor[Index_Cnt_T_u08] = NxtrSwIds_SwAuthor_Cnt_u08[Index_Cnt_T_u08];
	}

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: NxtrSwIdsSwRelNrRd_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <NxtrSwIdsSwRelNrRd>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void NxtrSwIdsSwRelNrRd_Oper(uint8 *SwRelNr)
 *
 *********************************************************************************************************************/

#ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(void, NxtrSwIds_CODE) NxtrSwIdsSwRelNrRd_Oper(P2VAR(uint8, AUTOMATIC, RTE_NXTRSWIDS_APPL_VAR) SwRelNr) /* PRQA S 0850 */ /* MD_MSR_19.8 */
#else
FUNC(void, NxtrSwIds_CODE) NxtrSwIdsSwRelNrRd_Oper(P2VAR(Ary1D_u8_16, AUTOMATIC, RTE_NXTRSWIDS_APPL_VAR) SwRelNr) /* PRQA S 0850 */ /* MD_MSR_19.8 */
#endif
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: NxtrSwIdsSwRelNrRd_Oper
 *********************************************************************************************************************/

	VAR(uint8, AUTOMATIC) Index_Cnt_T_u08;

	for (Index_Cnt_T_u08 = 0U; Index_Cnt_T_u08 < 16U; Index_Cnt_T_u08 += 1U)
	{
		SwRelNr[Index_Cnt_T_u08] = NxtrSwIds_SwRelNr_Cnt_str.Nr[Index_Cnt_T_u08];
	}

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: NxtrSwIdsSwRelVerRd_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <NxtrSwIdsSwRelVerRd>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void NxtrSwIdsSwRelVerRd_Oper(uint8 *SwRelVer)
 *
 *********************************************************************************************************************/

#ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(void, NxtrSwIds_CODE) NxtrSwIdsSwRelVerRd_Oper(P2VAR(uint8, AUTOMATIC, RTE_NXTRSWIDS_APPL_VAR) SwRelVer) /* PRQA S 0850 */ /* MD_MSR_19.8 */
#else
FUNC(void, NxtrSwIds_CODE) NxtrSwIdsSwRelVerRd_Oper(P2VAR(Ary1D_u8_16, AUTOMATIC, RTE_NXTRSWIDS_APPL_VAR) SwRelVer) /* PRQA S 0850 */ /* MD_MSR_19.8 */
#endif
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: NxtrSwIdsSwRelVerRd_Oper
 *********************************************************************************************************************/

	VAR(uint8, AUTOMATIC) Index_Cnt_T_u08;

	for (Index_Cnt_T_u08 = 0U; Index_Cnt_T_u08 < 16U; Index_Cnt_T_u08 += 1U)
	{
		SwRelVer[Index_Cnt_T_u08] = NxtrSwIds_SwRelNr_Cnt_str.Ver[Index_Cnt_T_u08];
	}

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}


#define NxtrSwIds_STOP_SEC_CODE
#include "NxtrSwIds_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


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
