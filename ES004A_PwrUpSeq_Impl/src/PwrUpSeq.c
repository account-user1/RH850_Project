/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  PwrUpSeq.c
 *        Config:  C:/Users/nz3541/Documents/SynergyWorkingEA4/ES004A_PwrUpSeq_Impl/tools/Component.dpa
 *     SW-C Type:  PwrUpSeq
 *  Generated at:  Fri Jun 16 11:34:57 2017
 *
 *     Generator:  MICROSAR RTE Generator Version 4.13.0
 *                 RTE Core Version 1.13.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  C-Code implementation template for SW-C <PwrUpSeq>
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of version logging area >>                DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

 /**********************************************************************************************************************
* Copyright 2016,2017 Nexteer 
* Nexteer Confidential
*
* Module File Name  : PwrUpSeq.c
* Module Description: Power Up Sequence
* Project           : CBD
* Author            : Rijvi Ahmed
***********************************************************************************************************************
* Version Control:
* %version:          5 %
* %derived_by:       nz3541 %
*---------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author    Change Description                                                             SCR #
* --------  -------  --------  -----------------------------------------------------------------------------  -------
* 04/10/15   1       Rijvi        Initial version                                                             EA4#258
* 01/13/16   2       SV           Updated for FDD ver 1.2.0													  EA4#3320
* 07/15/16   3       Rijvi        Updated for FDD ver 1.4.0													  EA4#6489
* 01/04/17   4       AJM          Updated for FDD ver 1.5.0													  EA4#8722
* 06/19/17   5       SPP          Remove application data types                                               EA4#12439
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
 * SysSt1
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 *********************************************************************************************************************/

#include "Rte_PwrUpSeq.h" /* PRQA S 0857 */ /* MD_MSR_1.1_857 */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

#include "ElecGlbPrm.h"

/* MISRA-C:2004 Rule 19.1 [NXTRDEV 19.1.1]: AUTOSAR requires deviation from this rule for Memory Mapping include statements */
/* MISRA-C:2004 Rule 16.10 [NXTRDEV 16.10.1]: There is no appropriate action to take on the return value for Rte_Read and Rte_Write and Rte_Call_IoHwAb_SetGpioPwrTurnOffCtrl_Oper */ 

#define PWRTURNOFFCTRLTHD_CNT_U08		2U
#define PINSTHI_CNT_U08					1U
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
 * Enumeration Types:
 * ==================
 * SysSt1: Enumeration of integer in interval [0...255] with enumerators
 *   SYSST_DI (0U)
 *   SYSST_OFF (1U)
 *   SYSST_ENA (2U)
 *   SYSST_WRMININ (3U)
 *
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   uint8 *Rte_Pim_PwrTurnOffCtrlPrev(void)
 *
 *********************************************************************************************************************/


#define PwrUpSeq_START_SEC_CODE
#include "PwrUpSeq_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: PwrTurnOffCtrl_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <PwrTurnOffCtrl>
 *
 **********************************************************************************************************************
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_IoHwAb_SetGpioPwrTurnOffCtrl_Oper(boolean PinSt_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_SetGpio_PortIf1_E_NOT_OK
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void PwrTurnOffCtrl_Oper(boolean PinSt_Arg)
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: PwrTurnOffCtrl_Oper_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, PwrUpSeq_CODE) PwrTurnOffCtrl_Oper(boolean PinSt_Arg) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: PwrTurnOffCtrl_Oper
 *********************************************************************************************************************/

	(void)Rte_Call_IoHwAb_SetGpioPwrTurnOffCtrl_Oper(PinSt_Arg);
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: PwrUpSeqInit1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: PwrUpSeqInit1_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, PwrUpSeq_CODE) PwrUpSeqInit1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: PwrUpSeqInit1
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: PwrUpSeqPer1
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
 *   Std_ReturnType Rte_Read_CodFlsCrcChkCmpl_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_CurrMeasWrmIninTestCmpl_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_MotDrvr0IninTestCmpl_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_MotDrvr1IninTestCmpl_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_PwrDiscnctATestCmpl_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_PwrDiscnctBTestCmpl_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_SysSt_Val(SysSt1 *data)
 *   Std_ReturnType Rte_Read_TmplMonIninTestCmpl_Logl(boolean *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_StrtUpSt_Val(uint8 data)
 *   Std_ReturnType Rte_Write_SysStWrmIninCmpl_Logl(boolean data)
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: PwrUpSeqPer1_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, PwrUpSeq_CODE) PwrUpSeqPer1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: PwrUpSeqPer1
 *********************************************************************************************************************/

	/* Temporary variables (for module i/p) */
	VAR(boolean, AUTOMATIC)  CodFlsCrcChkCmpl_Cnt_T_lgc;
	VAR(boolean, AUTOMATIC)  PwrDiscnctATestCmpl_Cnt_T_lgc;
	VAR(boolean, AUTOMATIC)  TmplMonIninTestCmpl_Cnt_T_lgc;
	VAR(boolean, AUTOMATIC)  PwrDiscnctBTestCmpl_Cnt_T_lgc;
	VAR(boolean, AUTOMATIC)  MotDrvr0IninTestCmpl_Cnt_T_lgc;
	VAR(boolean, AUTOMATIC)  MotDrvr1IninTestCmpl_Cnt_T_lgc;
	VAR(boolean, AUTOMATIC)  CurrMeasWrmIninTestCmpl_Cnt_T_lgc;
	VAR(SysSt1,  AUTOMATIC)  SysSt_Cnt_T_enum;
	
	/* Temporary variables (for module o/p) */
	VAR(uint8,   AUTOMATIC)  StrtUpSt_Cnt_T_u08;
	VAR(boolean, AUTOMATIC)  SysStWrmIninCmpl_Cnt_T_lgc;
	
	
	/* Read module inputs */
	(void) Rte_Read_CodFlsCrcChkCmpl_Logl( &CodFlsCrcChkCmpl_Cnt_T_lgc );
	(void) Rte_Read_PwrDiscnctATestCmpl_Logl( &PwrDiscnctATestCmpl_Cnt_T_lgc ); 
	(void) Rte_Read_TmplMonIninTestCmpl_Logl( &TmplMonIninTestCmpl_Cnt_T_lgc ); 
	(void) Rte_Read_PwrDiscnctBTestCmpl_Logl( &PwrDiscnctBTestCmpl_Cnt_T_lgc );  
	(void) Rte_Read_MotDrvr0IninTestCmpl_Logl( &MotDrvr0IninTestCmpl_Cnt_T_lgc ); 
	(void) Rte_Read_MotDrvr1IninTestCmpl_Logl( &MotDrvr1IninTestCmpl_Cnt_T_lgc );  
	(void) Rte_Read_CurrMeasWrmIninTestCmpl_Logl( &CurrMeasWrmIninTestCmpl_Cnt_T_lgc ); 
	(void) Rte_Read_SysSt_Val( &SysSt_Cnt_T_enum ); 
	
	/* During WARM_INIT, sequential initializations(start) of following components are triggered by this component.     
	    1. Power Disconnect Sequence A
		2. Temporal Monitor
		3. Power Disconnect Sequence B
		4. Gate Drive Diagnostic 1
		5. Current Measurement
		6. Flash Memory
	*/
	
	switch( SysSt_Cnt_T_enum )
	{
				
		case SYSST_ENA: 
				StrtUpSt_Cnt_T_u08 = ELECGLBPRM_STRTUPSTWARMININCMPL_CNT_U08;
				SysStWrmIninCmpl_Cnt_T_lgc = TRUE;
		break;
				
		case SYSST_WRMININ:
				if( PwrDiscnctATestCmpl_Cnt_T_lgc == FALSE ) 
				{
					/* None of the initialization is done. 1 is running */
					StrtUpSt_Cnt_T_u08 = ELECGLBPRM_STRTUPSTPWRDISCNCTATESTSTRT_CNT_U08;
					SysStWrmIninCmpl_Cnt_T_lgc = FALSE;
				}
				else if( TmplMonIninTestCmpl_Cnt_T_lgc == FALSE )
				{
					/* Initialization of 1 is done and 2 is running*/
					StrtUpSt_Cnt_T_u08 = ELECGLBPRM_STRTUPSTTMPLMONININTESTSTRT_CNT_U08;
					SysStWrmIninCmpl_Cnt_T_lgc = FALSE;
				}
				else if( PwrDiscnctBTestCmpl_Cnt_T_lgc == FALSE )
				{
					/* Initialization of 1 & 2 are done and 3 is running*/
					StrtUpSt_Cnt_T_u08 = ELECGLBPRM_STRTUPSTPWRDISCNCTBTESTSTRT_CNT_U08;
					SysStWrmIninCmpl_Cnt_T_lgc = FALSE;
				}
				else if( (MotDrvr0IninTestCmpl_Cnt_T_lgc == FALSE) || (MotDrvr1IninTestCmpl_Cnt_T_lgc == FALSE) )
				{
					/* Initialization of 1, 2 & 3 are done and 4 is running*/
					StrtUpSt_Cnt_T_u08 = ELECGLBPRM_STRTUPSTMTRDRVRININSTRT_CNT_U08;
					SysStWrmIninCmpl_Cnt_T_lgc = FALSE;
				}
				else if( CurrMeasWrmIninTestCmpl_Cnt_T_lgc == FALSE )
				{
					/* Initialization of 1, 2, 3 & 4 are done and 5 is running*/
					StrtUpSt_Cnt_T_u08 = ELECGLBPRM_STRTUPSTCURRMEASWRMININTESTSTRT_CNT_U08;
					SysStWrmIninCmpl_Cnt_T_lgc = FALSE;
				}
				else if( CodFlsCrcChkCmpl_Cnt_T_lgc == FALSE )
				{
					/* Initialization of 1, 2, 3, 4 & 5 are done and 6 is running*/
				    StrtUpSt_Cnt_T_u08 = ELECGLBPRM_STRTUPSTFLSMEMININSTRT_CNT_U08;
					SysStWrmIninCmpl_Cnt_T_lgc = FALSE;
				}
				else
				{
					/* All the initializations are done, but the system is still in WARM_INIT  */
					StrtUpSt_Cnt_T_u08 = ELECGLBPRM_STRTUPSTWARMININCMPL_CNT_U08;
					SysStWrmIninCmpl_Cnt_T_lgc = TRUE;
				}
		break;
				
		case SYSST_DI:
		case SYSST_OFF:
		default :
				StrtUpSt_Cnt_T_u08 = ELECGLBPRM_STRTUPSTDI_CNT_U08;
				SysStWrmIninCmpl_Cnt_T_lgc = FALSE;
		break;
	}
	
	*Rte_Pim_PwrTurnOffCtrlPrev() += 1U;
	if(*Rte_Pim_PwrTurnOffCtrlPrev() == PWRTURNOFFCTRLTHD_CNT_U08)
	{
		PwrTurnOffCtrl_Oper(PINSTHI_CNT_U08);
	}
	/* Write module outputs */ 
	(void) Rte_Write_StrtUpSt_Val( StrtUpSt_Cnt_T_u08 ); 
	(void) Rte_Write_SysStWrmIninCmpl_Logl( SysStWrmIninCmpl_Cnt_T_lgc ); 
 
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}


#define PwrUpSeq_STOP_SEC_CODE
#include "PwrUpSeq_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


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
