/**********************************************************************************************************************
 *  COPYRIGHT
 *  -------------------------------------------------------------------------------------------------------------------
 *  \verbatim
 *
 *                 This software is copyright protected and proprietary to Vector Informatik GmbH.
 *                 Vector Informatik GmbH grants to you only those rights as set out in the license conditions.
 *                 All other rights remain with Vector Informatik GmbH.
 *  \endverbatim
 *  -------------------------------------------------------------------------------------------------------------------
 *  LICENSE
 *  -------------------------------------------------------------------------------------------------------------------
 *            Module: BswM
 *           Program: MSR_Ford_SLP1 (MSR_Ford_SLP1)
 *          Customer: Nexteer Automotive Corporation
 *       Expiry Date: Not restricted
 *  Ordered Derivat.: R7F701373EABG
 *    License Scope : The usage is restricted to CBD1601056_D00
 *
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *              File: BswM_Callout_Stubs.c
 *   Generation Time: 2018-01-24 11:45:08
 *           Project: EPS - Version 1.0
 *          Delivery: CBD1601056_D00
 *      Tool Version: DaVinci Configurator (beta) 5.14.21 SP3
 *
 *
 *********************************************************************************************************************/

/**********************************************************************************************************************
 ! BETA VERSION                                                                                                       !
 !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
 ! These programs are fully operative programs. With regard to the fact that the programs are a beta-version only,    !
 ! Vector Informatik's liability shall be expressly excluded in cases of ordinary negligence, to the extent           !
 ! admissible by law or statute.                                                                                      !
 !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
**********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK User Version>                           DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/**********************************************************************************************************************
* Module File Name  : BswM_Callout_Stubs.c
* Module Description: BSWM Callout Functions
* Project           : Ford T3T6
* Author            : Bobby Osteen
***********************************************************************************************************************
* Version Control:
* %version:          12 %
* %derived_by:       gz324f %
*----------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author         Change Description                                                           SCR #
* -------   -------  --------  ---------------------------------------------------------------------------     --------
* 07/25/17  2        XL        Added and modified callout for NvMProxy                                         14121
* 07/26/17  3        XL        Added callout for DiagcMgrPwrDwn                                                14121
* 08/14/17  4        XL        Added function call to enable MtrCtrlIsr                                        14121
* 08/15/17  5        XL        Fixed function call to enable MtrCtrlIsr                                        14121
* 08/21/17  6        XL        Added NvMReadAll and shutdown                                                   14121
* 08/25/17  7        XL        Added BswM_PrepShtdwn                                                           14121
* 09/08/17  8        XL        Modified function call to enable MtrCtrlIsr                                     14121
* 01/11/18  9        XL        Modified for CAN FD update                                                      19297
* 01/26/18  10       BDO       Updated for Identity Manager		                           
* 02/20/18  11       XL        Added Customer DID NvM update during shutdown                                   20166
* 02/22/18  12       XL        Added StackMeas NvM update during shutdown                                      20166
**********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>                                       DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/*********************************************************************************************************************
    INCLUDES
 *********************************************************************************************************************/
/* PRQA S 0857 EOF */ /* MD_MSR_1.1_857 */
#define BSWM_CALLOUT_STUBS_SOURCE
#include "BswM.h"
#include "BswM_Private_Cfg.h"



/**********************************************************************************************************************
 *  Additional configured User includes
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK User Includes>                          DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
#include "STM0_RegDefns.h"
#include "INTCTL_RegDefns.h"
#include "CDD_NvMProxy.h"
#include "CDD_NvMProxy_Cbk.h"
#include "DiagcMgr.h"
#include "Os.h"
#include "CustDiag.h"
#include "StackMeas.h"

#define BSWMWRALLPASSD_CNT_U08  0x55U
#define BSWMWRALLFAILD_CNT_U08  0xAAU

#define BSWM_START_SEC_VAR_ZERO_INIT_8BIT
/* PRQA S 5087 1 */ /* MD_MSR_19.1 */
#include "MemMap.h"
STATIC VAR(uint8, BSWM_VAR_NOINIT) BswM_WrAllFaild_Uls_M_u8;
#define BSWM_STOP_SEC_VAR_ZERO_INIT_8BIT
/* PRQA S 5087 1 */ /* MD_MSR_19.1 */
#include "MemMap.h"


#define GlobalShared_START_SEC_VAR_CLEARED_32
#include "MemMap.h"
volatile VAR(uint32, AUTOMATIC) Counter_Cnt_D_u32;
#define STOP_SEC_VAR
#include "MemMap.h"

#include "Rte_Main.h"
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>                                       DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/



/**********************************************************************************************************************
 *  CALLOUT FUNCTIONS
 *********************************************************************************************************************/
#define BSWM_START_SEC_CODE
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *  GENERIC CALLOUTS
 *********************************************************************************************************************/
FUNC(void, BSWM_CODE) BswM_INIT_NvMReadAll(void)
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK BswM_INIT_NvMReadAll>                   DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
 
    NvM_RequestResultType MultiBlockStatus;
	
    NvM_ReadAll();
    
	/* Loop until ReadAll operation completes */
    do
    {
		Os_Call_NvM_MainFunction();
		Fee_30_SmallSector_MainFunction();
		Os_Call_Fls_MainFunction();
				
		NvM_GetErrorStatus(NvMConf___MultiBlockRequest, &MultiBlockStatus);

    }
    while(MultiBlockStatus==NVM_REQ_PENDING);

    NvMProxy_Init0();

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>                                       DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

} /* End of BswM_INIT_NvMReadAll */


FUNC(void, BSWM_CODE) BswM_ESH_OnEnterPostRun(void)
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK BswM_ESH_OnEnterPostRun>                DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>                                       DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

} /* End of BswM_ESH_OnEnterPostRun */


FUNC(void, BSWM_CODE) BswM_ESH_OnEnterShutdown(void)
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK BswM_ESH_OnEnterShutdown>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>                                       DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

} /* End of BswM_ESH_OnEnterShutdown */


FUNC(void, BSWM_CODE) BswM_ESH_OnEnterPrepShutdown(void)
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK BswM_ESH_OnEnterPrepShutdown>           DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>                                       DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

} /* End of BswM_ESH_OnEnterPrepShutdown */


FUNC(void, BSWM_CODE) BswM_ESH_OnEnterWakeup(void)
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK BswM_ESH_OnEnterWakeup>                 DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>                                       DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

} /* End of BswM_ESH_OnEnterWakeup */


FUNC(void, BSWM_CODE) BswM_ESH_OnEnterRun(void)
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK BswM_ESH_OnEnterRun>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

ComM_RequestComMode(ComMConf_ComMUser_USR_CHNL_cd1e16dc, COMM_FULL_COMMUNICATION);

    
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>                                       DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

} /* End of BswM_ESH_OnEnterRun */


FUNC(void, BSWM_CODE) BswM_ESH_OnEnterWaitForNvm(void)
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK BswM_ESH_OnEnterWaitForNvm>             DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>                                       DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

} /* End of BswM_ESH_OnEnterWaitForNvm */


FUNC(void, BSWM_CODE) BswM_AL_SetProgrammableInterrupts(void)
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK BswM_AL_SetProgrammableInterrupts>      DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
	STM0TS = 4U;
    Os_EnableInterruptSource(CanIsr_1, FALSE);
	/* Motor Control ISR, source 17. Clear bit 17 in IMR0 
		TODO find a better way to do this, e.g use IMR0_IMR0EIKM17 or EIC17_MK17*/
    Os_ModifyPeripheral32(InterruptController, (uint32)(&IMR0_BASE), (~((uint32)(1u << 17u))), 0x0U); 
	
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>                                       DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

} /* End of BswM_AL_SetProgrammableInterrupts */


FUNC(void, BSWM_CODE) BswM_DiagcMgrPwrDwn(void)
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK BswM_DiagcMgrPwrDwn>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
	
	/* TODO add condition check later */
	(void)DiagcMgrPwrDwn();

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>                                       DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

} /* End of BswM_DiagcMgrPwrDwn */


FUNC(void, BSWM_CODE) BswM_FinalizeShtdwn(void)
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK BswM_FinalizeShtdwn>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

	VAR(NvM_RequestResultType, AUTOMATIC) ClsChkStatus;
	
	/* TODO: add condition check for quick ignition cycle back when ready */
	/* Issue the close check write only if the WriteAll didn't fail */
	if(BswM_WrAllFaild_Uls_M_u8 == BSWMWRALLPASSD_CNT_U08)
	{
		/* Close Check Block Write */
		NvMProxy_ClsChkWr_Oper();
	}
	else
	{
		/* TODO: Write a different value in ClsChk to indicate failed NvM_WriteAll Operation */
	}

	/* Commit the close check flag to FEE */
	do
	{
		NvM_MainFunction();
		Fee_30_SmallSector_MainFunction();
		Fls_MainFunction();

		NvM_GetErrorStatus(NvMConf_NvMBlockDescriptor_Rte_NvmBlock_CDD_NvMProxy_ShtdwnClsChk, &ClsChkStatus);

	} while (ClsChkStatus==NVM_REQ_PENDING);

	/* Power Down */
	/* TODO add logic later */
	EcuM_GoDown(BSWM_MODULE_ID);
	
	
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>                                       DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

} /* End of BswM_FinalizeShtdwn */


FUNC(void, BSWM_CODE) BswM_SHUTDOWN_NvMWriteAll(void)
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK BswM_SHUTDOWN_NvMWriteAll>              DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

 	VAR(NvM_RequestResultType, AUTOMATIC) MultiBlockStatus;

 	/* update NvM for Customer DIDs */
 	ShutDownUpdateNvM();

	/* update Stack measurement */
	MeasStack();
	
	BswM_WrAllFaild_Uls_M_u8 = BSWMWRALLPASSD_CNT_U08;
	
	/* Force storing of RAM block statuses in case of restart event (i.e. quick ignition cycle) */
	NvMProxy_MultiBlkCallBack(NVM_WRITE_ALL, NVM_REQ_PENDING);
	NvM_WriteAll();
	
	/* Loop until WriteAll completes */
	do
	{
		NvM_MainFunction();
		Fee_30_SmallSector_MainFunction();
		Fls_MainFunction();

		NvM_GetErrorStatus(NvMConf___MultiBlockRequest, &MultiBlockStatus);
		
		Counter_Cnt_D_u32++;
		/* TODO: add condition check for quick ignition cycle back when ready */
	} while (MultiBlockStatus==NVM_REQ_PENDING);
	
	if (MultiBlockStatus == NVM_REQ_NOT_OK)
	{
		BswM_WrAllFaild_Uls_M_u8 = BSWMWRALLFAILD_CNT_U08;
	}

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>                                       DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

} /* End of BswM_SHUTDOWN_NvMWriteAll */


FUNC(void, BSWM_CODE) BswM_PrepShtdwn(void)
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK BswM_PrepShtdwn>                        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
 	
	GetResource(SHUTDOWN_ONGOING); /* Resource prevent all other task other than TmplMonr and Watchdog from running */
	(void)WdgM_CheckpointReached(WdgMConf_WdgMSupervisedEntity_SE_10msBSW_Appl10, WdgMConf_WdgMCheckpoint_ChkPt_10msBSW_Appl10_End); /* This task cannot be "active" when the deactivate call is made below */
	WdgM_DeactivateSupervisionEntity(WdgMConf_WdgMSupervisedEntity_SE_10msBSW_Appl10);
	WdgM_DeactivateSupervisionEntity(WdgMConf_WdgMSupervisedEntity_SE_2ms_Appl10);
	WdgM_DeactivateSupervisionEntity(WdgMConf_WdgMSupervisedEntity_SE_4ms_Appl10);
	WdgM_DeactivateSupervisionEntity(WdgMConf_WdgMSupervisedEntity_SE_10ms_Appl10);
	WdgM_DeactivateSupervisionEntity(WdgMConf_WdgMSupervisedEntity_SE_100ms_Appl10);

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>                                       DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

} /* End of BswM_PrepShtdwn */


FUNC(void, BSWM_CODE) ESH_ComM_CheckPendingRequests_ECU1(void)
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK ESH_ComM_CheckPendingRequests_ECU1>     DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>                                       DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
  ComM_StateType FD1_CAN_f26020e5 = COMM_NO_COM_NO_PENDING_REQUEST;
  
  (void)ComM_GetState(ComMConf_ComMChannel_FD1_CAN_f26020e5, &FD1_CAN_f26020e5); /* SBSW_BSWM_FCTCALL_LOCALVAR */
  
  if(FD1_CAN_f26020e5 != COMM_NO_COM_NO_PENDING_REQUEST)
  {
    BswM_RequestMode(BSWM_GENERIC_ESH_ComMPendingRequests, BSWM_GENERICVALUE_ESH_ComMPendingRequests_ESH_COMM_PENDING_REQUEST);
  }
  else
  {
    BswM_RequestMode(BSWM_GENERIC_ESH_ComMPendingRequests, BSWM_GENERICVALUE_ESH_ComMPendingRequests_ESH_COMM_NO_REQUEST);
  }
  
} /* End of ESH_ComM_CheckPendingRequests_ECU1 */


FUNC(void, BSWM_CODE) ESH_ComM_CheckPendingRequests_ECU2(void)
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK ESH_ComM_CheckPendingRequests_ECU2>     DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>                                       DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
  ComM_StateType FD1_CAN_f26020e5 = COMM_NO_COM_NO_PENDING_REQUEST;
  
  (void)ComM_GetState(ComMConf_ComMChannel_FD1_CAN_f26020e5, &FD1_CAN_f26020e5); /* SBSW_BSWM_FCTCALL_LOCALVAR */
  
  if(FD1_CAN_f26020e5 != COMM_NO_COM_NO_PENDING_REQUEST)
  {
    BswM_RequestMode(BSWM_GENERIC_ESH_ComMPendingRequests, BSWM_GENERICVALUE_ESH_ComMPendingRequests_ESH_COMM_PENDING_REQUEST);
  }
  else
  {
    BswM_RequestMode(BSWM_GENERIC_ESH_ComMPendingRequests, BSWM_GENERICVALUE_ESH_ComMPendingRequests_ESH_COMM_NO_REQUEST);
  }
  
} /* End of ESH_ComM_CheckPendingRequests_ECU2 */


#define BSWM_STOP_SEC_CODE
#include "MemMap.h"  /* PRQA S 5087 */ /* MD_MSR_19.1 */

#if 0
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK ESH_ComM_CheckPendingRequests>          DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>                                       DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

#endif


/**********************************************************************************************************************
 *  END OF FILE: BSWM_CALLOUT_STUBS.C
 *********************************************************************************************************************/


