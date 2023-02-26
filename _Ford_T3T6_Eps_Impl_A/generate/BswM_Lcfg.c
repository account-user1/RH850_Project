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
 *              File: BswM_Lcfg.c
 *   Generation Time: 2018-03-29 13:28:46
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

    
/* -----------------------------------------------------------------------------
    &&&~ INCLUDE
 ----------------------------------------------------------------------------- */
/* PRQA S 0857 EOF */ /* MD_MSR_1.1_857 */
#include "BswM.h"
#include "BswM_Private_Cfg.h"
#include "SchM_BswM.h"

#if !defined (BSWM_LOCAL)
# define BSWM_LOCAL static
#endif

#if !defined (BSWM_LOCAL_INLINE) /* COV_BSWM_LOCAL_INLINE */
# define BSWM_LOCAL_INLINE LOCAL_INLINE
#endif

/* -----------------------------------------------------------------------------
    &&&~ MACROS
 ----------------------------------------------------------------------------- */
/* PRQA S 3453 1 */ /* MD_BswM_3453 */
#define BswM_SetIpduGroup(pduId, bitVal) Com_SetIpduGroup(BswM_ComIPduGroupState, (pduId), (bitVal))
#define BswM_SetIpduReinitGroup(pduId, bitVal)
/* PRQA S 3453 1 */ /* MD_BswM_3453 */
#define BswM_SetIpduDMGroup(pduId, bitVal) Com_SetIpduGroup(BswM_ComRxIPduGroupDMState, (pduId), (bitVal))

/* PRQA S 3453 1 */ /* MD_BswM_3453 */
#define BswM_MarkPduGroupControlInvocation(control) BswM_PduGroupControlInvocation |= (control)
#define BswM_MarkDmControlInvocation() BswM_PduGroupControlInvocation |= BSWM_GROUPCONTROL_DM



#define BSWM_START_SEC_CODE
/* PRQA S 5087 1 */ /* MD_MSR_19.1 */
#include "MemMap.h"

/* -----------------------------------------------------------------------------
    &&&~ LOCAL FUNCTION DECLARATIONS
 ----------------------------------------------------------------------------- */
/**********************************************************************************************************************
 *  BswM_Action_RuleHandler()
 **********************************************************************************************************************/
/*!
 * \brief       Executes a rule.
 * \details     Arbitrates a rule and executes corresponding action list.
 * \param[in]   handleId  Id of the rule to execute.
 * \return      E_OK      No action list was executed or corresponding action list was completely executed.
 * \return      E_NOT_OK  Action list was aborted because an action failed.
 * \pre         -
 * \context     ANY
 * \reentrant   TRUE
 * \synchronous TRUE
 */
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_Action_RuleHandler(BswM_HandleType handleId);


/**********************************************************************************************************************
 *  BswM_UpdateTimer()
 **********************************************************************************************************************/
/*!
 * \brief       Updates a timer.
 * \details     Set timer value of passed timerId to passed value and calculates the new state.
 * \param[in]   timerId   Id of the timer to update.
 * \param[in]   value     New value of the timer.
 * \pre         -
 * \context     ANY
 * \reentrant   TRUE
 * \synchronous TRUE
 */
BSWM_LOCAL_INLINE FUNC(void, BSWM_CODE) BswM_UpdateTimer(BswM_SizeOfTimerValueType timerId, BswM_TimerValueType value);

/*! \addtogroup    BswMGeneratedFunctions BswM Generated Functions
 * \{
 */
/* PRQA S 0779 FUNCTIONDECLARATIONS */ /* MD_BswM_0779 */

/**********************************************************************************************************************
 *  BswMActionFunctions
 *********************************************************************************************************************/
/*! \defgroup    BswMActionFunctions
 * \{
 */

/*!
 * \{
 * \brief       Executes an action.
 * \details     Generated function which executes the configured action.
 * \param[IN]   handleId  ID of the parameter set which shall be used for calling the action.
 * \return      E_OK      Action was successfully executed.
 * \return      E_NOT_OK  Execution of Action failed
 * \pre         -
 * \context     ANY
 * \reentrant   TRUE
 * \synchronous TRUE
 */
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_Action_INIT_Action_Fee_30_SmallSector_Init_ECU1(BswM_HandleType handleId);
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_Action_INIT_Action_NvM_Init_ECU1(BswM_HandleType handleId);
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_Action_INIT_Action_NvMReadAll_ECU1(BswM_HandleType handleId);
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_Action_INIT_Action_Dem_Init_ECU1(BswM_HandleType handleId);
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_Action_INIT_Action_RteStart_ECU1(BswM_HandleType handleId);
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_Action_INIT_Action_WdgM_Init_ECU1(BswM_HandleType handleId);
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_Action_INIT_Action_Can_Init_ECU1(BswM_HandleType handleId);
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_Action_INIT_Action_CanIf_Init_ECU1(BswM_HandleType handleId);
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_Action_INIT_Action_Com_Init_ECU1(BswM_HandleType handleId);
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_Action_INIT_Action_PduR_Init_ECU1(BswM_HandleType handleId);
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_Action_INIT_Action_CanSM_Init_ECU1(BswM_HandleType handleId);
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_Action_INIT_Action_CanTp_Init_ECU1(BswM_HandleType handleId);
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_Action_INIT_Action_ComM_Init_ECU1(BswM_HandleType handleId);
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_Action_INIT_Action_Dcm_Init_ECU1(BswM_HandleType handleId);
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_Action_ESH_Action_EcuMClearValidatedWakeupEvents_ECU1(BswM_HandleType handleId);
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_Action_GenericMode(BswM_HandleType handleId);
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_Action_ESH_Action_EcuMGoToSelectedShutdownTarget_ECU1(BswM_HandleType handleId);
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_Action_TimerControl(BswM_HandleType handleId);
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_Action_ESH_Action_OnEnterPostRun_ECU1(BswM_HandleType handleId);
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_Action_ESH_Action_OnEnterShutdown_ECU1(BswM_HandleType handleId);
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_Action_ESH_Action_OnEnterPrepShutdown_ECU1(BswM_HandleType handleId);
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_Action_ESH_Action_OnEnterWakeup_ECU1(BswM_HandleType handleId);
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_Action_ESH_Action_OnEnterRun_ECU1(BswM_HandleType handleId);
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_Action_ESH_Action_OnEnterWaitForNvm_ECU1(BswM_HandleType handleId);
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_Action_ESH_Action_EnterExclusiveArea_ECU1(BswM_HandleType handleId);
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_Action_ESH_Action_ExitExclusiveArea_ECU1(BswM_HandleType handleId);
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_Action_INIT_Action_EnableInterrupts_ECU1(BswM_HandleType handleId);
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_Action_INIT_Action_CanXcp_Init_ECU1(BswM_HandleType handleId);
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_Action_INIT_Action_Xcp_Init_ECU1(BswM_HandleType handleId);
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_Action_BswM_DiagcMgrPwrDwn_ECU1(BswM_HandleType handleId);
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_Action_BswM_FinalizeShtdwn_ECU1(BswM_HandleType handleId);
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_Action_BswM_SHUTDOWN_NvMWriteAll_ECU1(BswM_HandleType handleId);
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_Action_BswM_PrepShtdwn_ECU1(BswM_HandleType handleId);
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_Action_INIT_Action_FlsMem_Init_ECU1(BswM_HandleType handleId);
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_Action_INIT_Action_GuardCfgAndDiagc_Init_ECU1(BswM_HandleType handleId);
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_Action_INIT_Action_SyncCrc_Init_ECU1(BswM_HandleType handleId);
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_Action_ComMAllowCom(BswM_HandleType handleId);
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_Action_INIT_Action_CanNm_Init_ECU1(BswM_HandleType handleId);
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_Action_INIT_Action_Nm_Init_ECU1(BswM_HandleType handleId);
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_Action_ComDMControl(BswM_HandleType handleId);
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_Action_ComPduGroupSwitch(BswM_HandleType handleId);
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_Action_ESH_Action_ComMCheckPendingRequests_ECU1_ECU1(BswM_HandleType handleId);
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_Action_INIT_Action_Dem_SetOperationCycleState_ECU1(BswM_HandleType handleId);
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_Action_NmControl(BswM_HandleType handleId);
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_Action_INIT_Action_CanNm_NetworkRequest_ECU1(BswM_HandleType handleId);
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_Action_ESH_Action_ComMCheckPendingRequests_ECU2_ECU2(BswM_HandleType handleId);
/*! \} */ /* End of sharing description for BswMActionFunctions */
#define BswM_Action_INIT_Action_Fee_30_SmallSector_Init_ECU2 BswM_Action_INIT_Action_Fee_30_SmallSector_Init_ECU1
#define BswM_Action_INIT_Action_NvM_Init_ECU2 BswM_Action_INIT_Action_NvM_Init_ECU1
#define BswM_Action_INIT_Action_NvMReadAll_ECU2 BswM_Action_INIT_Action_NvMReadAll_ECU1
#define BswM_Action_INIT_Action_Dem_Init_ECU2 BswM_Action_INIT_Action_Dem_Init_ECU1
#define BswM_Action_INIT_Action_RteStart_ECU2 BswM_Action_INIT_Action_RteStart_ECU1
#define BswM_Action_INIT_Action_WdgM_Init_ECU2 BswM_Action_INIT_Action_WdgM_Init_ECU1
#define BswM_Action_INIT_Action_Can_Init_ECU2 BswM_Action_INIT_Action_Can_Init_ECU1
#define BswM_Action_INIT_Action_CanIf_Init_ECU2 BswM_Action_INIT_Action_CanIf_Init_ECU1
#define BswM_Action_INIT_Action_Com_Init_ECU2 BswM_Action_INIT_Action_Com_Init_ECU1
#define BswM_Action_INIT_Action_PduR_Init_ECU2 BswM_Action_INIT_Action_PduR_Init_ECU1
#define BswM_Action_INIT_Action_CanSM_Init_ECU2 BswM_Action_INIT_Action_CanSM_Init_ECU1
#define BswM_Action_INIT_Action_CanTp_Init_ECU2 BswM_Action_INIT_Action_CanTp_Init_ECU1
#define BswM_Action_INIT_Action_ComM_Init_ECU2 BswM_Action_INIT_Action_ComM_Init_ECU1
#define BswM_Action_INIT_Action_Dcm_Init_ECU2 BswM_Action_INIT_Action_Dcm_Init_ECU1
#define BswM_Action_ESH_Action_EcuMClearValidatedWakeupEvents_ECU2 BswM_Action_ESH_Action_EcuMClearValidatedWakeupEvents_ECU1
#define BswM_Action_ESH_Action_EcuMGoToSelectedShutdownTarget_ECU2 BswM_Action_ESH_Action_EcuMGoToSelectedShutdownTarget_ECU1
#define BswM_Action_ESH_Action_OnEnterPostRun_ECU2 BswM_Action_ESH_Action_OnEnterPostRun_ECU1
#define BswM_Action_ESH_Action_OnEnterShutdown_ECU2 BswM_Action_ESH_Action_OnEnterShutdown_ECU1
#define BswM_Action_ESH_Action_OnEnterPrepShutdown_ECU2 BswM_Action_ESH_Action_OnEnterPrepShutdown_ECU1
#define BswM_Action_ESH_Action_OnEnterWakeup_ECU2 BswM_Action_ESH_Action_OnEnterWakeup_ECU1
#define BswM_Action_ESH_Action_OnEnterRun_ECU2 BswM_Action_ESH_Action_OnEnterRun_ECU1
#define BswM_Action_ESH_Action_OnEnterWaitForNvm_ECU2 BswM_Action_ESH_Action_OnEnterWaitForNvm_ECU1
#define BswM_Action_ESH_Action_EnterExclusiveArea_ECU2 BswM_Action_ESH_Action_EnterExclusiveArea_ECU1
#define BswM_Action_ESH_Action_ExitExclusiveArea_ECU2 BswM_Action_ESH_Action_ExitExclusiveArea_ECU1
#define BswM_Action_INIT_Action_EnableInterrupts_ECU2 BswM_Action_INIT_Action_EnableInterrupts_ECU1
#define BswM_Action_INIT_Action_CanXcp_Init_ECU2 BswM_Action_INIT_Action_CanXcp_Init_ECU1
#define BswM_Action_INIT_Action_Xcp_Init_ECU2 BswM_Action_INIT_Action_Xcp_Init_ECU1
#define BswM_Action_BswM_DiagcMgrPwrDwn_ECU2 BswM_Action_BswM_DiagcMgrPwrDwn_ECU1
#define BswM_Action_BswM_FinalizeShtdwn_ECU2 BswM_Action_BswM_FinalizeShtdwn_ECU1
#define BswM_Action_BswM_SHUTDOWN_NvMWriteAll_ECU2 BswM_Action_BswM_SHUTDOWN_NvMWriteAll_ECU1
#define BswM_Action_BswM_PrepShtdwn_ECU2 BswM_Action_BswM_PrepShtdwn_ECU1
#define BswM_Action_INIT_Action_FlsMem_Init_ECU2 BswM_Action_INIT_Action_FlsMem_Init_ECU1
#define BswM_Action_INIT_Action_GuardCfgAndDiagc_Init_ECU2 BswM_Action_INIT_Action_GuardCfgAndDiagc_Init_ECU1
#define BswM_Action_INIT_Action_SyncCrc_Init_ECU2 BswM_Action_INIT_Action_SyncCrc_Init_ECU1
#define BswM_Action_INIT_Action_CanNm_Init_ECU2 BswM_Action_INIT_Action_CanNm_Init_ECU1
#define BswM_Action_INIT_Action_Nm_Init_ECU2 BswM_Action_INIT_Action_Nm_Init_ECU1
#define BswM_Action_INIT_Action_Dem_SetOperationCycleState_ECU2 BswM_Action_INIT_Action_Dem_SetOperationCycleState_ECU1
#define BswM_Action_INIT_Action_CanNm_NetworkRequest_ECU2 BswM_Action_INIT_Action_CanNm_NetworkRequest_ECU1
/*! \} */ /* End of group BswMActionFunctions */

/**********************************************************************************************************************
 *  BswMExpressionFunctions
 *********************************************************************************************************************/
/*! \defgroup    BswMExpressionFunctions
 * \{
 */

/*!
 * \{
 * \brief       Evaluates a logical expression.
 * \details     Generated function which evaluates the configured logical expression.
 * \return      1  If logical expression evaluates to true
 * \return      0  If logical expression evaluates to false
 * \pre         -
 * \context     ANY
 * \reentrant   TRUE
 * \synchronous TRUE
 */
BSWM_LOCAL FUNC(uint8, BSWM_CODE) BswM_ExpFct_ESH_LE_RunToPostRun_ECU1(void);
BSWM_LOCAL FUNC(uint8, BSWM_CODE) BswM_ExpFct_ESH_LE_RunReleased_ECU1(void);
BSWM_LOCAL FUNC(uint8, BSWM_CODE) BswM_ExpFct_ESH_LE_WaitForNvMToShutdown_ECU1(void);
BSWM_LOCAL FUNC(uint8, BSWM_CODE) BswM_ExpFct_ESH_LE_NoWakeup_ECU1(void);
BSWM_LOCAL FUNC(uint8, BSWM_CODE) BswM_ExpFct_ESH_LE_WakeupToPrepShutdown_ECU1(void);
BSWM_LOCAL FUNC(uint8, BSWM_CODE) BswM_ExpFct_ESH_LE_WaitForNvMToWakeup_ECU1(void);
BSWM_LOCAL FUNC(uint8, BSWM_CODE) BswM_ExpFct_ESH_LE_ValidWakeup_ECU1(void);
BSWM_LOCAL FUNC(uint8, BSWM_CODE) BswM_ExpFct_ESH_LE_WakeupToRun_ECU1(void);
BSWM_LOCAL FUNC(uint8, BSWM_CODE) BswM_ExpFct_ESH_LE_InitToWakeup_ECU1(void);
BSWM_LOCAL FUNC(uint8, BSWM_CODE) BswM_ExpFct_ESH_LE_PostRunToPrep_ECU1(void);
BSWM_LOCAL FUNC(uint8, BSWM_CODE) BswM_ExpFct_ESH_LE_PostRunReleased_ECU1(void);
BSWM_LOCAL FUNC(uint8, BSWM_CODE) BswM_ExpFct_ESH_LE_RunRequestsOrWakeup_ECU1(void);
BSWM_LOCAL FUNC(uint8, BSWM_CODE) BswM_ExpFct_ESH_LE_RunRequested_ECU1(void);
BSWM_LOCAL FUNC(uint8, BSWM_CODE) BswM_ExpFct_ESH_LE_PostRun_ECU1(void);
BSWM_LOCAL FUNC(uint8, BSWM_CODE) BswM_ExpFct_ESH_LE_PrepShutdownToWaitForNvM_ECU1(void);
BSWM_LOCAL FUNC(uint8, BSWM_CODE) BswM_ExpFct_ESH_LE_AllChannelsNoCom_ECU1(void);
BSWM_LOCAL FUNC(uint8, BSWM_CODE) BswM_ExpFct_ESH_LE_ComMNoPendingRequests_ECU1(void);
BSWM_LOCAL FUNC(uint8, BSWM_CODE) BswM_ExpFct_Nxtr_LE_EnterShutdown_ECU1(void);
BSWM_LOCAL FUNC(uint8, BSWM_CODE) BswM_ExpFct_CC_LE_FD1_CAN_f26020e5_RX_DM_ECU1(void);
BSWM_LOCAL FUNC(uint8, BSWM_CODE) BswM_ExpFct_CC_LE_FD1_CAN_f26020e5_RX_ECU1(void);
BSWM_LOCAL FUNC(uint8, BSWM_CODE) BswM_ExpFct_LE_EcuIdn2_ECU1(void);
BSWM_LOCAL FUNC(uint8, BSWM_CODE) BswM_ExpFct_LE_BswMEcuResetStart_ECU1(void);
BSWM_LOCAL FUNC(uint8, BSWM_CODE) BswM_ExpFct_ESH_LE_RunToPostRun_ECU2(void);
BSWM_LOCAL FUNC(uint8, BSWM_CODE) BswM_ExpFct_ESH_LE_WaitForNvMToShutdown_ECU2(void);
BSWM_LOCAL FUNC(uint8, BSWM_CODE) BswM_ExpFct_ESH_LE_WakeupToPrepShutdown_ECU2(void);
BSWM_LOCAL FUNC(uint8, BSWM_CODE) BswM_ExpFct_ESH_LE_WaitForNvMToWakeup_ECU2(void);
BSWM_LOCAL FUNC(uint8, BSWM_CODE) BswM_ExpFct_ESH_LE_WakeupToRun_ECU2(void);
BSWM_LOCAL FUNC(uint8, BSWM_CODE) BswM_ExpFct_ESH_LE_PostRunToPrep_ECU2(void);
BSWM_LOCAL FUNC(uint8, BSWM_CODE) BswM_ExpFct_ESH_LE_RunRequestsOrWakeup_ECU2(void);
/*! \} */ /* End of sharing description for BswMExpressionFunctions */
#define BswM_ExpFct_ESH_LE_RunReleased_ECU2 BswM_ExpFct_ESH_LE_RunReleased_ECU1
#define BswM_ExpFct_ESH_LE_NoWakeup_ECU2 BswM_ExpFct_ESH_LE_NoWakeup_ECU1
#define BswM_ExpFct_ESH_LE_ValidWakeup_ECU2 BswM_ExpFct_ESH_LE_ValidWakeup_ECU1
#define BswM_ExpFct_ESH_LE_InitToWakeup_ECU2 BswM_ExpFct_ESH_LE_InitToWakeup_ECU1
#define BswM_ExpFct_ESH_LE_PostRunReleased_ECU2 BswM_ExpFct_ESH_LE_PostRunReleased_ECU1
#define BswM_ExpFct_ESH_LE_RunRequested_ECU2 BswM_ExpFct_ESH_LE_RunRequested_ECU1
#define BswM_ExpFct_ESH_LE_PostRun_ECU2 BswM_ExpFct_ESH_LE_PostRun_ECU1
#define BswM_ExpFct_ESH_LE_PrepShutdownToWaitForNvM_ECU2 BswM_ExpFct_ESH_LE_PrepShutdownToWaitForNvM_ECU1
#define BswM_ExpFct_ESH_LE_AllChannelsNoCom_ECU2 BswM_ExpFct_ESH_LE_AllChannelsNoCom_ECU1
#define BswM_ExpFct_ESH_LE_ComMNoPendingRequests_ECU2 BswM_ExpFct_ESH_LE_ComMNoPendingRequests_ECU1
#define BswM_ExpFct_Nxtr_LE_EnterShutdown_ECU2 BswM_ExpFct_Nxtr_LE_EnterShutdown_ECU1
#define BswM_ExpFct_CC_LE_FD1_CAN_f26020e5_TX_ECU1 BswM_ExpFct_CC_LE_FD1_CAN_f26020e5_RX_DM_ECU1
#define BswM_ExpFct_CC_LE_FD1_CAN_f26020e5_RX_DM_ECU2 BswM_ExpFct_CC_LE_FD1_CAN_f26020e5_RX_DM_ECU1
#define BswM_ExpFct_CC_LE_FD1_CAN_f26020e5_TX_ECU2 BswM_ExpFct_CC_LE_FD1_CAN_f26020e5_RX_DM_ECU1
#define BswM_ExpFct_CC_LE_FD1_CAN_f26020e5_RX_ECU2 BswM_ExpFct_CC_LE_FD1_CAN_f26020e5_RX_ECU1
#define BswM_ExpFct_LE_EcuIdn2_ECU2 BswM_ExpFct_LE_EcuIdn2_ECU1
#define BswM_ExpFct_LE_BswMEcuResetStart_ECU2 BswM_ExpFct_LE_BswMEcuResetStart_ECU1
/*! \} */ /* End of group BswMExpressionFunctions */
/* PRQA L:FUNCTIONDECLARATIONS */
/*! \} */ /* End of group BswMGeneratedFunctions */

#define BSWM_STOP_SEC_CODE
/* PRQA S 5087 1 */ /* MD_MSR_19.1 */
#include "MemMap.h"


/* -----------------------------------------------------------------------------
    &&&~ LOCAL VARIABLE DECLARATIONS
 ----------------------------------------------------------------------------- */

/* PRQA S 0779 VARIABLEDECLARATIONS */ /* MD_BswM_0779 */ 

#define BSWM_START_SEC_VAR_NOINIT_8BIT
/* PRQA S 5087 1 */ /* MD_MSR_19.1 */
#include "MemMap.h"

BSWM_LOCAL VAR(uint8, BSWM_VAR_NOINIT) BswM_PduGroupControlInvocation;

#define BSWM_STOP_SEC_VAR_NOINIT_8BIT
/* PRQA S 5087 1 */ /* MD_MSR_19.1 */
#include "MemMap.h"

#define BSWM_START_SEC_VAR_NOINIT_UNSPECIFIED
/* PRQA S 5087 1 */ /* MD_MSR_19.1 */
#include "MemMap.h"



BSWM_LOCAL VAR(BswM_ESH_RunRequest, BSWM_VAR_NOINIT) Request_ESH_RunRequest_0_requestedMode;
BSWM_LOCAL VAR(BswM_ESH_RunRequest, BSWM_VAR_NOINIT) Request_ESH_RunRequest_1_requestedMode;
BSWM_LOCAL VAR(BswM_ESH_RunRequest, BSWM_VAR_NOINIT) Request_ESH_PostRunRequest_0_requestedMode;
BSWM_LOCAL VAR(BswM_ESH_RunRequest, BSWM_VAR_NOINIT) Request_ESH_PostRunRequest_1_requestedMode;
BSWM_LOCAL VAR(Rte_ModeType_BswMEcuResetMod, BSWM_VAR_NOINIT) BswM_Mode_Notification_SwcModeNotification_BswM_MDGP_BswMEcuResetMod_BswM_MDGP_BswMEcuResetMod;


/* PRQA S 3218 3 */ /* MD_BswM_3218 */
BSWM_LOCAL VAR(Com_IpduGroupVector, BSWM_VAR_NOINIT) BswM_ComIPduGroupState;
BSWM_LOCAL VAR(Com_IpduGroupVector, BSWM_VAR_NOINIT) BswM_ComRxIPduGroupDMState;

#define BSWM_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/* PRQA S 5087 1 */ /* MD_MSR_19.1 */
#include "MemMap.h"

/* PRQA L:VARIABLEDECLARATIONS */

/**********************************************************************************************************************
 *  LOCAL DATA PROTOTYPES
**********************************************************************************************************************/
/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: LOCAL DATA TYPES AND STRUCTURES
**********************************************************************************************************************/



/**********************************************************************************************************************
 *  LOCAL DATA
**********************************************************************************************************************/
/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: LOCAL DATA
**********************************************************************************************************************/


/**********************************************************************************************************************
 *  GLOBAL DATA
**********************************************************************************************************************/
/* PRQA S 0310 GLOBALDATADECLARATIONS */ /* MD_BswM_0310 */ 
/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: GLOBAL DATA
**********************************************************************************************************************/
/**********************************************************************************************************************
  BswM_ActionItemsECU1
**********************************************************************************************************************/
/** 
  \var    BswM_ActionItemsECU1
  \details
  Element         Description
  ActionsIdx      the index of the 1:1 relation pointing to BswM_Actions
  ParameterIdx    the index of the 0:1 relation pointing to BswM_ComMAllowComParameters,BswM_ComMModeLimitationParameters,BswM_ComMModeSwitchParameters,BswM_ComDMControlParameters,BswM_EcuMSelectShutdownTargetParameters,BswM_EcuMStateSwitchParameters,BswM_LinScheduleRequestParameters,BswM_NmControlParameters,BswM_ComSwitchIPduModeParameters,BswM_ComPduGroupSwitchParameters,BswM_ComPduGroupHandlingParameters,BswM_ComDMHandlingParameters,BswM_ComTriggerIPduSendParameters,BswM_PduRouterControlParameters,BswM_TimerControlParameters,BswM_GenericModeParameters,BswM_J1939DcmStateParameters,BswM_J1939RmStateParameters,BswM_SdClientParameters,BswM_SdConsumedParameters,BswM_SdServerParameters,BswM_RuleControlParameters,BswM_ActionLists,BswM_Rules
*/ 
#define BSWM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(BswM_ActionItemsType, BSWM_CONST) BswM_ActionItemsECU1[72] = {
    /* Index    ActionsIdx  ParameterIdx                             Referable Keys */
  { /*     0 */         2U, BSWM_NO_PARAMETERIDXOFACTIONITEMS },  /* [AL_INIT_AL_Initialize] */
  { /*     1 */        18U, BSWM_NO_PARAMETERIDXOFACTIONITEMS },  /* [AL_INIT_AL_Initialize] */
  { /*     2 */         1U, BSWM_NO_PARAMETERIDXOFACTIONITEMS },  /* [AL_INIT_AL_Initialize] */
  { /*     3 */        19U, BSWM_NO_PARAMETERIDXOFACTIONITEMS },  /* [AL_INIT_AL_Initialize] */
  { /*     4 */        24U, BSWM_NO_PARAMETERIDXOFACTIONITEMS },  /* [AL_INIT_AL_Initialize] */
  { /*     5 */        11U, BSWM_NO_PARAMETERIDXOFACTIONITEMS },  /* [AL_INIT_AL_Initialize] */
  { /*     6 */        16U, BSWM_NO_PARAMETERIDXOFACTIONITEMS },  /* [AL_INIT_AL_Initialize] */
  { /*     7 */         5U, BSWM_NO_PARAMETERIDXOFACTIONITEMS },  /* [AL_INIT_AL_Initialize] */
  { /*     8 */        21U, BSWM_NO_PARAMETERIDXOFACTIONITEMS },  /* [AL_INIT_AL_Initialize] */
  { /*     9 */        20U, BSWM_NO_PARAMETERIDXOFACTIONITEMS },  /* [AL_INIT_AL_Initialize] */
  { /*    10 */        23U, BSWM_NO_PARAMETERIDXOFACTIONITEMS },  /* [AL_INIT_AL_Initialize] */
  { /*    11 */         8U, BSWM_NO_PARAMETERIDXOFACTIONITEMS },  /* [AL_INIT_AL_Initialize] */
  { /*    12 */         6U, BSWM_NO_PARAMETERIDXOFACTIONITEMS },  /* [AL_INIT_AL_Initialize] */
  { /*    13 */         7U, BSWM_NO_PARAMETERIDXOFACTIONITEMS },  /* [AL_INIT_AL_Initialize] */
  { /*    14 */        14U, BSWM_NO_PARAMETERIDXOFACTIONITEMS },  /* [AL_INIT_AL_Initialize] */
  { /*    15 */        13U, BSWM_NO_PARAMETERIDXOFACTIONITEMS },  /* [AL_INIT_AL_Initialize] */
  { /*    16 */        17U, BSWM_NO_PARAMETERIDXOFACTIONITEMS },  /* [AL_INIT_AL_Initialize] */
  { /*    17 */        15U, BSWM_NO_PARAMETERIDXOFACTIONITEMS },  /* [AL_INIT_AL_Initialize] */
  { /*    18 */         9U, BSWM_NO_PARAMETERIDXOFACTIONITEMS },  /* [AL_INIT_AL_Initialize] */
  { /*    19 */         3U, BSWM_NO_PARAMETERIDXOFACTIONITEMS },  /* [AL_INIT_AL_Initialize] */
  { /*    20 */        10U, BSWM_NO_PARAMETERIDXOFACTIONITEMS },  /* [AL_INIT_AL_Initialize] */
  { /*    21 */        22U, BSWM_NO_PARAMETERIDXOFACTIONITEMS },  /* [AL_INIT_AL_Initialize] */
  { /*    22 */         4U, BSWM_NO_PARAMETERIDXOFACTIONITEMS },  /* [AL_INIT_AL_Initialize] */
  { /*    23 */        12U, BSWM_NO_PARAMETERIDXOFACTIONITEMS },  /* [AL_INIT_AL_Initialize] */
  { /*    24 */        38U,                                0U },  /* [AL_ESH_AL_RunToPostRun] */
  { /*    25 */        35U, BSWM_NO_PARAMETERIDXOFACTIONITEMS },  /* [AL_ESH_AL_RunToPostRun] */
  { /*    26 */        31U, BSWM_NO_PARAMETERIDXOFACTIONITEMS },  /* [AL_ESH_AL_RunToPostRun] */
  { /*    27 */        36U,                                0U },  /* [AL_ESH_AL_RunToPostRun] */
  { /*    28 */        28U, BSWM_NO_PARAMETERIDXOFACTIONITEMS },  /* [AL_ESH_AL_WaitForNvMToShutdown] */
  { /*    29 */        34U, BSWM_NO_PARAMETERIDXOFACTIONITEMS },  /* [AL_ESH_AL_WaitForNvMToShutdown] */
  { /*    30 */        30U, BSWM_NO_PARAMETERIDXOFACTIONITEMS },  /* [AL_ESH_AL_WakeupToPrep] */
  { /*    31 */        36U,                                1U },  /* [AL_ESH_AL_WakeupToPrep] */
  { /*    32 */        26U, BSWM_NO_PARAMETERIDXOFACTIONITEMS },  /* [AL_ESH_AL_WaitForNvMWakeup] */
  { /*    33 */        36U,                                2U },  /* [AL_ESH_AL_WaitForNvMWakeup] */
  { /*    34 */        38U,                                1U },  /* [AL_ESH_AL_WakeupToRun] */
  { /*    35 */        25U,                                0U },  /* [AL_ESH_AL_WakeupToRun] */
  { /*    36 */        29U, BSWM_NO_PARAMETERIDXOFACTIONITEMS },  /* [AL_ESH_AL_WakeupToRun] */
  { /*    37 */        36U,                                3U },  /* [AL_ESH_AL_WakeupToRun] */
  { /*    38 */        26U, BSWM_NO_PARAMETERIDXOFACTIONITEMS },  /* [AL_ESH_AL_InitToWakeup] */
  { /*    39 */        36U,                                2U },  /* [AL_ESH_AL_InitToWakeup] */
  { /*    40 */        30U, BSWM_NO_PARAMETERIDXOFACTIONITEMS },  /* [AL_ESH_AL_PostRunToPrepShutdown] */
  { /*    41 */        36U,                                1U },  /* [AL_ESH_AL_PostRunToPrepShutdown] */
  { /*    42 */         0U,                                6U },  /* [AL_ESH_AL_ESH_PostRunToPrepCheck] */
  { /*    43 */        38U,                                1U },  /* [AL_ESH_AL_PostRunToRun] */
  { /*    44 */        25U,                                0U },  /* [AL_ESH_AL_PostRunToRun] */
  { /*    45 */        29U, BSWM_NO_PARAMETERIDXOFACTIONITEMS },  /* [AL_ESH_AL_PostRunToRun] */
  { /*    46 */        36U,                                3U },  /* [AL_ESH_AL_PostRunToRun] */
  { /*    47 */        33U, BSWM_NO_PARAMETERIDXOFACTIONITEMS },  /* [AL_ESH_AL_ExitPostRun] */
  { /*    48 */        37U, BSWM_NO_PARAMETERIDXOFACTIONITEMS },  /* [AL_ESH_AL_ExitPostRun] */
  { /*    49 */         0U,                                7U },  /* [AL_ESH_AL_ExitPostRun] */
    /* Index    ActionsIdx  ParameterIdx                             Referable Keys */
  { /*    50 */        32U, BSWM_NO_PARAMETERIDXOFACTIONITEMS },  /* [AL_ESH_AL_ExitPostRun] */
  { /*    51 */        37U, BSWM_NO_PARAMETERIDXOFACTIONITEMS },  /* [AL_ESH_AL_PrepShutdownToWaitForNvM] */
  { /*    52 */        27U, BSWM_NO_PARAMETERIDXOFACTIONITEMS },  /* [AL_ESH_AL_PrepShutdownToWaitForNvM] */
  { /*    53 */        36U,                                4U },  /* [AL_ESH_AL_PrepShutdownToWaitForNvM] */
  { /*    54 */        33U, BSWM_NO_PARAMETERIDXOFACTIONITEMS },  /* [AL_ESH_AL_ExitRun] */
  { /*    55 */        37U, BSWM_NO_PARAMETERIDXOFACTIONITEMS },  /* [AL_ESH_AL_ExitRun] */
  { /*    56 */         0U,                               10U },  /* [AL_ESH_AL_ExitRun] */
  { /*    57 */        32U, BSWM_NO_PARAMETERIDXOFACTIONITEMS },  /* [AL_ESH_AL_ExitRun] */
  { /*    58 */        36U,                                5U },  /* [AL_SHUTDOWN] */
  { /*    59 */        42U, BSWM_NO_PARAMETERIDXOFACTIONITEMS },  /* [AL_SHUTDOWN] */
  { /*    60 */        44U, BSWM_NO_PARAMETERIDXOFACTIONITEMS },  /* [AL_SHUTDOWN] */
  { /*    61 */        41U, BSWM_NO_PARAMETERIDXOFACTIONITEMS },  /* [AL_SHUTDOWN] */
  { /*    62 */        43U, BSWM_NO_PARAMETERIDXOFACTIONITEMS },  /* [AL_SHUTDOWN] */
  { /*    63 */        40U,                                0U },  /* [AL_CC_AL_FD1_CAN_f26020e5_Disable_DM] */
  { /*    64 */        40U,                                1U },  /* [AL_CC_AL_FD1_CAN_f26020e5_Enable_DM] */
  { /*    65 */        39U,                                0U },  /* [AL_CC_AL_FD1_CAN_f26020e5_RX_Disable] */
  { /*    66 */        39U,                                1U },  /* [AL_CC_AL_FD1_CAN_f26020e5_RX_EnableNoinit] */
  { /*    67 */        39U,                                2U },  /* [AL_CC_AL_FD1_CAN_f26020e5_TX_Disable] */
  { /*    68 */        39U,                                3U },  /* [AL_CC_AL_FD1_CAN_f26020e5_TX_EnableNoinit] */
  { /*    69 */        45U,                                0U },  /* [AL_NmDisable] */
  { /*    70 */        46U,                               18U },  /* [AL_DisableAllCom] */
  { /*    71 */        46U,                               20U }   /* [AL_DisableAllCom] */
};
#define BSWM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  BswM_ActionItemsECU2
**********************************************************************************************************************/
/** 
  \var    BswM_ActionItemsECU2
  \details
  Element         Description
  ActionsIdx      the index of the 1:1 relation pointing to BswM_Actions
  ParameterIdx    the index of the 0:1 relation pointing to BswM_ComMAllowComParameters,BswM_ComMModeLimitationParameters,BswM_ComMModeSwitchParameters,BswM_ComDMControlParameters,BswM_EcuMSelectShutdownTargetParameters,BswM_EcuMStateSwitchParameters,BswM_LinScheduleRequestParameters,BswM_NmControlParameters,BswM_ComSwitchIPduModeParameters,BswM_ComPduGroupSwitchParameters,BswM_ComPduGroupHandlingParameters,BswM_ComDMHandlingParameters,BswM_ComTriggerIPduSendParameters,BswM_PduRouterControlParameters,BswM_TimerControlParameters,BswM_GenericModeParameters,BswM_J1939DcmStateParameters,BswM_J1939RmStateParameters,BswM_SdClientParameters,BswM_SdConsumedParameters,BswM_SdServerParameters,BswM_RuleControlParameters,BswM_ActionLists,BswM_Rules
*/ 
#define BSWM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(BswM_ActionItemsType, BSWM_CONST) BswM_ActionItemsECU2[72] = {
    /* Index    ActionsIdx  ParameterIdx                             Referable Keys */
  { /*     0 */         2U, BSWM_NO_PARAMETERIDXOFACTIONITEMS },  /* [AL_INIT_AL_Initialize] */
  { /*     1 */        18U, BSWM_NO_PARAMETERIDXOFACTIONITEMS },  /* [AL_INIT_AL_Initialize] */
  { /*     2 */         1U, BSWM_NO_PARAMETERIDXOFACTIONITEMS },  /* [AL_INIT_AL_Initialize] */
  { /*     3 */        19U, BSWM_NO_PARAMETERIDXOFACTIONITEMS },  /* [AL_INIT_AL_Initialize] */
  { /*     4 */        24U, BSWM_NO_PARAMETERIDXOFACTIONITEMS },  /* [AL_INIT_AL_Initialize] */
  { /*     5 */        11U, BSWM_NO_PARAMETERIDXOFACTIONITEMS },  /* [AL_INIT_AL_Initialize] */
  { /*     6 */        16U, BSWM_NO_PARAMETERIDXOFACTIONITEMS },  /* [AL_INIT_AL_Initialize] */
  { /*     7 */         5U, BSWM_NO_PARAMETERIDXOFACTIONITEMS },  /* [AL_INIT_AL_Initialize] */
  { /*     8 */        21U, BSWM_NO_PARAMETERIDXOFACTIONITEMS },  /* [AL_INIT_AL_Initialize] */
  { /*     9 */        20U, BSWM_NO_PARAMETERIDXOFACTIONITEMS },  /* [AL_INIT_AL_Initialize] */
  { /*    10 */        23U, BSWM_NO_PARAMETERIDXOFACTIONITEMS },  /* [AL_INIT_AL_Initialize] */
  { /*    11 */         8U, BSWM_NO_PARAMETERIDXOFACTIONITEMS },  /* [AL_INIT_AL_Initialize] */
  { /*    12 */         6U, BSWM_NO_PARAMETERIDXOFACTIONITEMS },  /* [AL_INIT_AL_Initialize] */
  { /*    13 */         7U, BSWM_NO_PARAMETERIDXOFACTIONITEMS },  /* [AL_INIT_AL_Initialize] */
  { /*    14 */        14U, BSWM_NO_PARAMETERIDXOFACTIONITEMS },  /* [AL_INIT_AL_Initialize] */
  { /*    15 */        13U, BSWM_NO_PARAMETERIDXOFACTIONITEMS },  /* [AL_INIT_AL_Initialize] */
  { /*    16 */        17U, BSWM_NO_PARAMETERIDXOFACTIONITEMS },  /* [AL_INIT_AL_Initialize] */
  { /*    17 */        15U, BSWM_NO_PARAMETERIDXOFACTIONITEMS },  /* [AL_INIT_AL_Initialize] */
  { /*    18 */         9U, BSWM_NO_PARAMETERIDXOFACTIONITEMS },  /* [AL_INIT_AL_Initialize] */
  { /*    19 */         3U, BSWM_NO_PARAMETERIDXOFACTIONITEMS },  /* [AL_INIT_AL_Initialize] */
  { /*    20 */        10U, BSWM_NO_PARAMETERIDXOFACTIONITEMS },  /* [AL_INIT_AL_Initialize] */
  { /*    21 */        22U, BSWM_NO_PARAMETERIDXOFACTIONITEMS },  /* [AL_INIT_AL_Initialize] */
  { /*    22 */         4U, BSWM_NO_PARAMETERIDXOFACTIONITEMS },  /* [AL_INIT_AL_Initialize] */
  { /*    23 */        12U, BSWM_NO_PARAMETERIDXOFACTIONITEMS },  /* [AL_INIT_AL_Initialize] */
  { /*    24 */        38U,                                0U },  /* [AL_ESH_AL_RunToPostRun] */
  { /*    25 */        35U, BSWM_NO_PARAMETERIDXOFACTIONITEMS },  /* [AL_ESH_AL_RunToPostRun] */
  { /*    26 */        31U, BSWM_NO_PARAMETERIDXOFACTIONITEMS },  /* [AL_ESH_AL_RunToPostRun] */
  { /*    27 */        36U,                                0U },  /* [AL_ESH_AL_RunToPostRun] */
  { /*    28 */        28U, BSWM_NO_PARAMETERIDXOFACTIONITEMS },  /* [AL_ESH_AL_WaitForNvMToShutdown] */
  { /*    29 */        34U, BSWM_NO_PARAMETERIDXOFACTIONITEMS },  /* [AL_ESH_AL_WaitForNvMToShutdown] */
  { /*    30 */        30U, BSWM_NO_PARAMETERIDXOFACTIONITEMS },  /* [AL_ESH_AL_WakeupToPrep] */
  { /*    31 */        36U,                                1U },  /* [AL_ESH_AL_WakeupToPrep] */
  { /*    32 */        26U, BSWM_NO_PARAMETERIDXOFACTIONITEMS },  /* [AL_ESH_AL_WaitForNvMWakeup] */
  { /*    33 */        36U,                                2U },  /* [AL_ESH_AL_WaitForNvMWakeup] */
  { /*    34 */        38U,                                1U },  /* [AL_ESH_AL_WakeupToRun] */
  { /*    35 */        25U,                                0U },  /* [AL_ESH_AL_WakeupToRun] */
  { /*    36 */        29U, BSWM_NO_PARAMETERIDXOFACTIONITEMS },  /* [AL_ESH_AL_WakeupToRun] */
  { /*    37 */        36U,                                3U },  /* [AL_ESH_AL_WakeupToRun] */
  { /*    38 */        26U, BSWM_NO_PARAMETERIDXOFACTIONITEMS },  /* [AL_ESH_AL_InitToWakeup] */
  { /*    39 */        36U,                                2U },  /* [AL_ESH_AL_InitToWakeup] */
  { /*    40 */        30U, BSWM_NO_PARAMETERIDXOFACTIONITEMS },  /* [AL_ESH_AL_PostRunToPrepShutdown] */
  { /*    41 */        36U,                                1U },  /* [AL_ESH_AL_PostRunToPrepShutdown] */
  { /*    42 */         0U,                                6U },  /* [AL_ESH_AL_ESH_PostRunToPrepCheck] */
  { /*    43 */        38U,                                1U },  /* [AL_ESH_AL_PostRunToRun] */
  { /*    44 */        25U,                                0U },  /* [AL_ESH_AL_PostRunToRun] */
  { /*    45 */        29U, BSWM_NO_PARAMETERIDXOFACTIONITEMS },  /* [AL_ESH_AL_PostRunToRun] */
  { /*    46 */        36U,                                3U },  /* [AL_ESH_AL_PostRunToRun] */
  { /*    47 */        33U, BSWM_NO_PARAMETERIDXOFACTIONITEMS },  /* [AL_ESH_AL_ExitPostRun] */
  { /*    48 */        37U, BSWM_NO_PARAMETERIDXOFACTIONITEMS },  /* [AL_ESH_AL_ExitPostRun] */
  { /*    49 */         0U,                                7U },  /* [AL_ESH_AL_ExitPostRun] */
    /* Index    ActionsIdx  ParameterIdx                             Referable Keys */
  { /*    50 */        32U, BSWM_NO_PARAMETERIDXOFACTIONITEMS },  /* [AL_ESH_AL_ExitPostRun] */
  { /*    51 */        37U, BSWM_NO_PARAMETERIDXOFACTIONITEMS },  /* [AL_ESH_AL_PrepShutdownToWaitForNvM] */
  { /*    52 */        27U, BSWM_NO_PARAMETERIDXOFACTIONITEMS },  /* [AL_ESH_AL_PrepShutdownToWaitForNvM] */
  { /*    53 */        36U,                                4U },  /* [AL_ESH_AL_PrepShutdownToWaitForNvM] */
  { /*    54 */        33U, BSWM_NO_PARAMETERIDXOFACTIONITEMS },  /* [AL_ESH_AL_ExitRun] */
  { /*    55 */        37U, BSWM_NO_PARAMETERIDXOFACTIONITEMS },  /* [AL_ESH_AL_ExitRun] */
  { /*    56 */         0U,                               10U },  /* [AL_ESH_AL_ExitRun] */
  { /*    57 */        32U, BSWM_NO_PARAMETERIDXOFACTIONITEMS },  /* [AL_ESH_AL_ExitRun] */
  { /*    58 */        36U,                                5U },  /* [AL_SHUTDOWN] */
  { /*    59 */        42U, BSWM_NO_PARAMETERIDXOFACTIONITEMS },  /* [AL_SHUTDOWN] */
  { /*    60 */        44U, BSWM_NO_PARAMETERIDXOFACTIONITEMS },  /* [AL_SHUTDOWN] */
  { /*    61 */        41U, BSWM_NO_PARAMETERIDXOFACTIONITEMS },  /* [AL_SHUTDOWN] */
  { /*    62 */        43U, BSWM_NO_PARAMETERIDXOFACTIONITEMS },  /* [AL_SHUTDOWN] */
  { /*    63 */        40U,                                0U },  /* [AL_CC_AL_FD1_CAN_f26020e5_Disable_DM] */
  { /*    64 */        40U,                                1U },  /* [AL_CC_AL_FD1_CAN_f26020e5_Enable_DM] */
  { /*    65 */        39U,                                0U },  /* [AL_CC_AL_FD1_CAN_f26020e5_RX_Disable] */
  { /*    66 */        39U,                                1U },  /* [AL_CC_AL_FD1_CAN_f26020e5_RX_EnableNoinit] */
  { /*    67 */        39U,                                2U },  /* [AL_CC_AL_FD1_CAN_f26020e5_TX_Disable] */
  { /*    68 */        39U,                                2U },  /* [AL_CC_AL_FD1_CAN_f26020e5_TX_EnableNoinit] */
  { /*    69 */        45U,                                0U },  /* [AL_NmDisable] */
  { /*    70 */        46U,                               20U },  /* [AL_DisableAllCom] */
  { /*    71 */        46U,                               18U }   /* [AL_DisableAllCom] */
};
#define BSWM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  BswM_ActionLists
**********************************************************************************************************************/
/** 
  \var    BswM_ActionLists
  \details
  Element                Description
  ActionItemsEndIdx      the end index of the 0:n relation pointing to BswM_ActionItems
  ActionItemsStartIdx    the start index of the 0:n relation pointing to BswM_ActionItems
  MaskedBits             contains bitcoded the boolean data of BswM_ActionItemsUsedOfActionLists, BswM_ConditionalOfActionLists
*/ 
#define BSWM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(BswM_ActionListsType, BSWM_CONST) BswM_ActionLists[22] = {
    /* Index    ActionItemsEndIdx  ActionItemsStartIdx  MaskedBits        Comment                   Referable Keys */
  { /*     0 */               24U,                  0U,      0x03U },  /* [Priority: 0] */  /* [AL_INIT_AL_Initialize] */
  { /*     1 */               28U,                 24U,      0x03U },  /* [Priority: 0] */  /* [AL_ESH_AL_RunToPostRun] */
  { /*     2 */               30U,                 28U,      0x03U },  /* [Priority: 0] */  /* [AL_ESH_AL_WaitForNvMToShutdown] */
  { /*     3 */               32U,                 30U,      0x03U },  /* [Priority: 0] */  /* [AL_ESH_AL_WakeupToPrep] */
  { /*     4 */               34U,                 32U,      0x03U },  /* [Priority: 0] */  /* [AL_ESH_AL_WaitForNvMWakeup] */
  { /*     5 */               38U,                 34U,      0x03U },  /* [Priority: 0] */  /* [AL_ESH_AL_WakeupToRun] */
  { /*     6 */               40U,                 38U,      0x03U },  /* [Priority: 0] */  /* [AL_ESH_AL_InitToWakeup] */
  { /*     7 */               42U,                 40U,      0x03U },  /* [Priority: 0] */  /* [AL_ESH_AL_PostRunToPrepShutdown] */
  { /*     8 */               43U,                 42U,      0x03U },  /* [Priority: 0] */  /* [AL_ESH_AL_ESH_PostRunToPrepCheck] */
  { /*     9 */               47U,                 43U,      0x03U },  /* [Priority: 0] */  /* [AL_ESH_AL_PostRunToRun] */
  { /*    10 */               51U,                 47U,      0x03U },  /* [Priority: 0] */  /* [AL_ESH_AL_ExitPostRun] */
  { /*    11 */               54U,                 51U,      0x03U },  /* [Priority: 0] */  /* [AL_ESH_AL_PrepShutdownToWaitForNvM] */
  { /*    12 */               58U,                 54U,      0x03U },  /* [Priority: 0] */  /* [AL_ESH_AL_ExitRun] */
  { /*    13 */               63U,                 58U,      0x03U },  /* [Priority: 0] */  /* [AL_SHUTDOWN] */
  { /*    14 */               64U,                 63U,      0x02U },  /* [Priority: 0] */  /* [AL_CC_AL_FD1_CAN_f26020e5_Disable_DM] */
  { /*    15 */               65U,                 64U,      0x02U },  /* [Priority: 0] */  /* [AL_CC_AL_FD1_CAN_f26020e5_Enable_DM] */
  { /*    16 */               66U,                 65U,      0x02U },  /* [Priority: 0] */  /* [AL_CC_AL_FD1_CAN_f26020e5_RX_Disable] */
  { /*    17 */               67U,                 66U,      0x02U },  /* [Priority: 0] */  /* [AL_CC_AL_FD1_CAN_f26020e5_RX_EnableNoinit] */
  { /*    18 */               68U,                 67U,      0x02U },  /* [Priority: 0] */  /* [AL_CC_AL_FD1_CAN_f26020e5_TX_Disable] */
  { /*    19 */               69U,                 68U,      0x02U },  /* [Priority: 0] */  /* [AL_CC_AL_FD1_CAN_f26020e5_TX_EnableNoinit] */
  { /*    20 */               70U,                 69U,      0x02U },  /* [Priority: 0] */  /* [AL_NmDisable] */
  { /*    21 */               72U,                 70U,      0x02U }   /* [Priority: 0] */  /* [AL_DisableAllCom] */
};
#define BSWM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  BswM_ActionsECU1
**********************************************************************************************************************/
/** 
  \var    BswM_ActionsECU1
  \brief  Holds pointer to all expression functions.
*/ 
#define BSWM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(BswM_ActionFuncType, BSWM_CONST) BswM_ActionsECU1[47] = {
  /* Index    Actions                                                         Referable Keys */
  /*     0 */BswM_Action_RuleHandler                                    ,  /* [R_ESH_PostRunNested, R_ESH_PostRunToPrepNested, R_ESH_RunToPostRunNested] */
  /*     1 */BswM_Action_INIT_Action_Xcp_Init_ECU1                      ,  /* [A_INIT_Action_Xcp_Init] */
  /*     2 */BswM_Action_INIT_Action_WdgM_Init_ECU1                     ,  /* [A_INIT_Action_WdgM_Init] */
  /*     3 */BswM_Action_INIT_Action_SyncCrc_Init_ECU1                  ,  /* [A_INIT_Action_SyncCrc_Init] */
  /*     4 */BswM_Action_INIT_Action_RteStart_ECU1                      ,  /* [A_INIT_Action_RteStart] */
  /*     5 */BswM_Action_INIT_Action_PduR_Init_ECU1                     ,  /* [A_INIT_Action_PduR_Init] */
  /*     6 */BswM_Action_INIT_Action_NvM_Init_ECU1                      ,  /* [A_INIT_Action_NvM_Init] */
  /*     7 */BswM_Action_INIT_Action_NvMReadAll_ECU1                    ,  /* [A_INIT_Action_NvMReadAll] */
  /*     8 */BswM_Action_INIT_Action_Nm_Init_ECU1                       ,  /* [A_INIT_Action_Nm_Init] */
  /*     9 */BswM_Action_INIT_Action_GuardCfgAndDiagc_Init_ECU1         ,  /* [A_INIT_Action_GuardCfgAndDiagc_Init] */
  /*    10 */BswM_Action_INIT_Action_FlsMem_Init_ECU1                   ,  /* [A_INIT_Action_FlsMem_Init] */
  /*    11 */BswM_Action_INIT_Action_Fee_30_SmallSector_Init_ECU1       ,  /* [A_INIT_Action_Fee_30_SmallSector_Init] */
  /*    12 */BswM_Action_INIT_Action_EnableInterrupts_ECU1              ,  /* [A_INIT_Action_EnableInterrupts] */
  /*    13 */BswM_Action_INIT_Action_Dem_SetOperationCycleState_ECU1    ,  /* [A_INIT_Action_Dem_SetOperationCycleState] */
  /*    14 */BswM_Action_INIT_Action_Dem_Init_ECU1                      ,  /* [A_INIT_Action_Dem_Init] */
  /*    15 */BswM_Action_INIT_Action_Dcm_Init_ECU1                      ,  /* [A_INIT_Action_Dcm_Init] */
  /*    16 */BswM_Action_INIT_Action_Com_Init_ECU1                      ,  /* [A_INIT_Action_Com_Init] */
  /*    17 */BswM_Action_INIT_Action_ComM_Init_ECU1                     ,  /* [A_INIT_Action_ComM_Init] */
  /*    18 */BswM_Action_INIT_Action_Can_Init_ECU1                      ,  /* [A_INIT_Action_Can_Init] */
  /*    19 */BswM_Action_INIT_Action_CanXcp_Init_ECU1                   ,  /* [A_INIT_Action_CanXcp_Init] */
  /*    20 */BswM_Action_INIT_Action_CanTp_Init_ECU1                    ,  /* [A_INIT_Action_CanTp_Init] */
  /*    21 */BswM_Action_INIT_Action_CanSM_Init_ECU1                    ,  /* [A_INIT_Action_CanSM_Init] */
  /*    22 */BswM_Action_INIT_Action_CanNm_NetworkRequest_ECU1          ,  /* [A_INIT_Action_CanNm_NetworkRequest] */
  /*    23 */BswM_Action_INIT_Action_CanNm_Init_ECU1                    ,  /* [A_INIT_Action_CanNm_Init] */
  /*    24 */BswM_Action_INIT_Action_CanIf_Init_ECU1                    ,  /* [A_INIT_Action_CanIf_Init] */
  /*    25 */BswM_Action_TimerControl                                   ,  /* [A_ESH_Action_SelfRunRequestTimer_Start] */
  /*    26 */BswM_Action_ESH_Action_OnEnterWakeup_ECU1                  ,  /* [A_ESH_Action_OnEnterWakeup] */
  /*    27 */BswM_Action_ESH_Action_OnEnterWaitForNvm_ECU1              ,  /* [A_ESH_Action_OnEnterWaitForNvm] */
  /*    28 */BswM_Action_ESH_Action_OnEnterShutdown_ECU1                ,  /* [A_ESH_Action_OnEnterShutdown] */
  /*    29 */BswM_Action_ESH_Action_OnEnterRun_ECU1                     ,  /* [A_ESH_Action_OnEnterRun] */
  /*    30 */BswM_Action_ESH_Action_OnEnterPrepShutdown_ECU1            ,  /* [A_ESH_Action_OnEnterPrepShutdown] */
  /*    31 */BswM_Action_ESH_Action_OnEnterPostRun_ECU1                 ,  /* [A_ESH_Action_OnEnterPostRun] */
  /*    32 */BswM_Action_ESH_Action_ExitExclusiveArea_ECU1              ,  /* [A_ESH_Action_ExitExclusiveArea] */
  /*    33 */BswM_Action_ESH_Action_EnterExclusiveArea_ECU1             ,  /* [A_ESH_Action_EnterExclusiveArea] */
  /*    34 */BswM_Action_ESH_Action_EcuMGoToSelectedShutdownTarget_ECU1 ,  /* [A_ESH_Action_EcuMGoToSelectedShutdownTarget] */
  /*    35 */BswM_Action_ESH_Action_EcuMClearValidatedWakeupEvents_ECU1 ,  /* [A_ESH_Action_EcuMClearValidatedWakeupEvents] */
  /*    36 */BswM_Action_GenericMode                                    ,  /* [A_ESH_Action_ESH_PostRun, A_ESH_Action_ESH_PrepShutdown, A_ESH_Action_ESH_Run, A_ESH_Action_ESH_WaitForNvm, A_ESH_Action_ESH_Wakeup, A_GENERIC_SWITCH_BSWM_STATE_TO_BSWM_NXTR_SHUTDOWN] */
  /*    37 */BswM_Action_ESH_Action_ComMCheckPendingRequests_ECU1_ECU1  ,  /* [A_ESH_Action_ComMCheckPendingRequests_ECU1] */
  /*    38 */BswM_Action_ComMAllowCom                                   ,  /* [A_ESH_Action_ComMAllow_FD1_CAN_f26020e5, A_ESH_Action_ComMDisallow_FD1_CAN_f26020e5] */
  /*    39 */BswM_Action_ComPduGroupSwitch                              ,  /* [A_CC_DisablePDUGroup_PSCM_FD_oFD1_CAN_Rx_fcef2243, A_CC_DisablePDUGroup_PSCM_FD_oFD1_CAN_Tx_fcef2243, A_CC_EnablePDUGroup_PSCM_FD_oFD1_CAN_Rx_fcef2243, A_CC_EnablePDUGroup_PSCM_FD_oFD1_CAN_Tx_fcef2243] */
  /*    40 */BswM_Action_ComDMControl                                   ,  /* [A_CC_DisableDM_PSCM_FD_oFD1_CAN_Rx_fcef2243, A_CC_EnableDM_PSCM_FD_oFD1_CAN_Rx_fcef2243] */
  /*    41 */BswM_Action_BswM_SHUTDOWN_NvMWriteAll_ECU1                 ,  /* [A_BswM_SHUTDOWN_NvMWriteAll] */
  /*    42 */BswM_Action_BswM_PrepShtdwn_ECU1                           ,  /* [A_BswM_PrepShtdwn] */
  /*    43 */BswM_Action_BswM_FinalizeShtdwn_ECU1                       ,  /* [A_BswM_FinalizeShtdwn] */
  /*    44 */BswM_Action_BswM_DiagcMgrPwrDwn_ECU1                       ,  /* [A_BswM_DiagcMgrPwrDwn] */
  /*    45 */BswM_Action_NmControl                                      ,  /* [A_BSWM_NM_DISABLE_FD1_CAN_f26020e5] */
  /*    46 */BswM_Action_ActionListHandler                                 /* [AL_CC_AL_FD1_CAN_f26020e5_TX_Disable, AL_NmDisable] */
};
#define BSWM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  BswM_ActionsECU2
**********************************************************************************************************************/
/** 
  \var    BswM_ActionsECU2
  \brief  Holds pointer to all expression functions.
*/ 
#define BSWM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(BswM_ActionFuncType, BSWM_CONST) BswM_ActionsECU2[47] = {
  /* Index    Actions                                                         Referable Keys */
  /*     0 */BswM_Action_RuleHandler                                    ,  /* [R_ESH_PostRunNested, R_ESH_PostRunToPrepNested, R_ESH_RunToPostRunNested] */
  /*     1 */BswM_Action_INIT_Action_Xcp_Init_ECU1                      ,  /* [A_INIT_Action_Xcp_Init] */
  /*     2 */BswM_Action_INIT_Action_WdgM_Init_ECU1                     ,  /* [A_INIT_Action_WdgM_Init] */
  /*     3 */BswM_Action_INIT_Action_SyncCrc_Init_ECU1                  ,  /* [A_INIT_Action_SyncCrc_Init] */
  /*     4 */BswM_Action_INIT_Action_RteStart_ECU1                      ,  /* [A_INIT_Action_RteStart] */
  /*     5 */BswM_Action_INIT_Action_PduR_Init_ECU1                     ,  /* [A_INIT_Action_PduR_Init] */
  /*     6 */BswM_Action_INIT_Action_NvM_Init_ECU1                      ,  /* [A_INIT_Action_NvM_Init] */
  /*     7 */BswM_Action_INIT_Action_NvMReadAll_ECU1                    ,  /* [A_INIT_Action_NvMReadAll] */
  /*     8 */BswM_Action_INIT_Action_Nm_Init_ECU1                       ,  /* [A_INIT_Action_Nm_Init] */
  /*     9 */BswM_Action_INIT_Action_GuardCfgAndDiagc_Init_ECU1         ,  /* [A_INIT_Action_GuardCfgAndDiagc_Init] */
  /*    10 */BswM_Action_INIT_Action_FlsMem_Init_ECU1                   ,  /* [A_INIT_Action_FlsMem_Init] */
  /*    11 */BswM_Action_INIT_Action_Fee_30_SmallSector_Init_ECU1       ,  /* [A_INIT_Action_Fee_30_SmallSector_Init] */
  /*    12 */BswM_Action_INIT_Action_EnableInterrupts_ECU1              ,  /* [A_INIT_Action_EnableInterrupts] */
  /*    13 */BswM_Action_INIT_Action_Dem_SetOperationCycleState_ECU1    ,  /* [A_INIT_Action_Dem_SetOperationCycleState] */
  /*    14 */BswM_Action_INIT_Action_Dem_Init_ECU1                      ,  /* [A_INIT_Action_Dem_Init] */
  /*    15 */BswM_Action_INIT_Action_Dcm_Init_ECU1                      ,  /* [A_INIT_Action_Dcm_Init] */
  /*    16 */BswM_Action_INIT_Action_Com_Init_ECU1                      ,  /* [A_INIT_Action_Com_Init] */
  /*    17 */BswM_Action_INIT_Action_ComM_Init_ECU1                     ,  /* [A_INIT_Action_ComM_Init] */
  /*    18 */BswM_Action_INIT_Action_Can_Init_ECU1                      ,  /* [A_INIT_Action_Can_Init] */
  /*    19 */BswM_Action_INIT_Action_CanXcp_Init_ECU1                   ,  /* [A_INIT_Action_CanXcp_Init] */
  /*    20 */BswM_Action_INIT_Action_CanTp_Init_ECU1                    ,  /* [A_INIT_Action_CanTp_Init] */
  /*    21 */BswM_Action_INIT_Action_CanSM_Init_ECU1                    ,  /* [A_INIT_Action_CanSM_Init] */
  /*    22 */BswM_Action_INIT_Action_CanNm_NetworkRequest_ECU1          ,  /* [A_INIT_Action_CanNm_NetworkRequest] */
  /*    23 */BswM_Action_INIT_Action_CanNm_Init_ECU1                    ,  /* [A_INIT_Action_CanNm_Init] */
  /*    24 */BswM_Action_INIT_Action_CanIf_Init_ECU1                    ,  /* [A_INIT_Action_CanIf_Init] */
  /*    25 */BswM_Action_TimerControl                                   ,  /* [A_ESH_Action_SelfRunRequestTimer_Start] */
  /*    26 */BswM_Action_ESH_Action_OnEnterWakeup_ECU1                  ,  /* [A_ESH_Action_OnEnterWakeup] */
  /*    27 */BswM_Action_ESH_Action_OnEnterWaitForNvm_ECU1              ,  /* [A_ESH_Action_OnEnterWaitForNvm] */
  /*    28 */BswM_Action_ESH_Action_OnEnterShutdown_ECU1                ,  /* [A_ESH_Action_OnEnterShutdown] */
  /*    29 */BswM_Action_ESH_Action_OnEnterRun_ECU1                     ,  /* [A_ESH_Action_OnEnterRun] */
  /*    30 */BswM_Action_ESH_Action_OnEnterPrepShutdown_ECU1            ,  /* [A_ESH_Action_OnEnterPrepShutdown] */
  /*    31 */BswM_Action_ESH_Action_OnEnterPostRun_ECU1                 ,  /* [A_ESH_Action_OnEnterPostRun] */
  /*    32 */BswM_Action_ESH_Action_ExitExclusiveArea_ECU1              ,  /* [A_ESH_Action_ExitExclusiveArea] */
  /*    33 */BswM_Action_ESH_Action_EnterExclusiveArea_ECU1             ,  /* [A_ESH_Action_EnterExclusiveArea] */
  /*    34 */BswM_Action_ESH_Action_EcuMGoToSelectedShutdownTarget_ECU1 ,  /* [A_ESH_Action_EcuMGoToSelectedShutdownTarget] */
  /*    35 */BswM_Action_ESH_Action_EcuMClearValidatedWakeupEvents_ECU1 ,  /* [A_ESH_Action_EcuMClearValidatedWakeupEvents] */
  /*    36 */BswM_Action_GenericMode                                    ,  /* [A_ESH_Action_ESH_PostRun, A_ESH_Action_ESH_PrepShutdown, A_ESH_Action_ESH_Run, A_ESH_Action_ESH_WaitForNvm, A_ESH_Action_ESH_Wakeup, A_GENERIC_SWITCH_BSWM_STATE_TO_BSWM_NXTR_SHUTDOWN] */
  /*    37 */BswM_Action_ESH_Action_ComMCheckPendingRequests_ECU2_ECU2  ,  /* [A_ESH_Action_ComMCheckPendingRequests_ECU2] */
  /*    38 */BswM_Action_ComMAllowCom                                   ,  /* [A_ESH_Action_ComMAllow_FD1_CAN_f26020e5, A_ESH_Action_ComMDisallow_FD1_CAN_f26020e5] */
  /*    39 */BswM_Action_ComPduGroupSwitch                              ,  /* [A_CC_DisablePDUGroup_PSCM_FD_oFD1_CAN_Rx_fcef2243, A_CC_DisablePDUGroup_PSCM_FD_oFD1_CAN_Tx_fcef2243, A_CC_EnablePDUGroup_PSCM_FD_oFD1_CAN_Rx_fcef2243] */
  /*    40 */BswM_Action_ComDMControl                                   ,  /* [A_CC_DisableDM_PSCM_FD_oFD1_CAN_Rx_fcef2243, A_CC_EnableDM_PSCM_FD_oFD1_CAN_Rx_fcef2243] */
  /*    41 */BswM_Action_BswM_SHUTDOWN_NvMWriteAll_ECU1                 ,  /* [A_BswM_SHUTDOWN_NvMWriteAll] */
  /*    42 */BswM_Action_BswM_PrepShtdwn_ECU1                           ,  /* [A_BswM_PrepShtdwn] */
  /*    43 */BswM_Action_BswM_FinalizeShtdwn_ECU1                       ,  /* [A_BswM_FinalizeShtdwn] */
  /*    44 */BswM_Action_BswM_DiagcMgrPwrDwn_ECU1                       ,  /* [A_BswM_DiagcMgrPwrDwn] */
  /*    45 */BswM_Action_NmControl                                      ,  /* [A_BSWM_NM_DISABLE_FD1_CAN_f26020e5] */
  /*    46 */BswM_Action_ActionListHandler                                 /* [AL_CC_AL_FD1_CAN_f26020e5_TX_Disable, AL_NmDisable] */
};
#define BSWM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  BswM_ComDMControlParameters
**********************************************************************************************************************/
/** 
  \var    BswM_ComDMControlParameters
  \details
  Element                              Description
  ComDMControlSubParametersEndIdx      the end index of the 0:n relation pointing to BswM_ComDMControlSubParameters
  ComDMControlSubParametersStartIdx    the start index of the 0:n relation pointing to BswM_ComDMControlSubParameters
*/ 
#define BSWM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(BswM_ComDMControlParametersType, BSWM_CONST) BswM_ComDMControlParameters[2] = {
    /* Index    ComDMControlSubParametersEndIdx  ComDMControlSubParametersStartIdx        Referable Keys */
  { /*     0 */                              1U,                                0U },  /* [A_CC_DisableDM_PSCM_FD_oFD1_CAN_Rx_fcef2243] */
  { /*     1 */                              2U,                                1U }   /* [A_CC_EnableDM_PSCM_FD_oFD1_CAN_Rx_fcef2243] */
};
#define BSWM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  BswM_ComDMControlSubParameters
**********************************************************************************************************************/
/** 
  \var    BswM_ComDMControlSubParameters
  \details
  Element    Description
  BitVal 
*/ 
#define BSWM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(BswM_ComDMControlSubParametersType, BSWM_CONST) BswM_ComDMControlSubParameters[2] = {
    /* Index    BitVal        Referable Keys */
  { /*     0 */ FALSE  },  /* [A_CC_DisableDM_PSCM_FD_oFD1_CAN_Rx_fcef2243] */
  { /*     1 */ TRUE   }   /* [A_CC_EnableDM_PSCM_FD_oFD1_CAN_Rx_fcef2243] */
};
#define BSWM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  BswM_ComMAllowComParameters
**********************************************************************************************************************/
/** 
  \var    BswM_ComMAllowComParameters
  \details
  Element    Description
  Allowed
*/ 
#define BSWM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(BswM_ComMAllowComParametersType, BSWM_CONST) BswM_ComMAllowComParameters[2] = {
    /* Index    Allowed        Referable Keys */
  { /*     0 */ FALSE   },  /* [A_ESH_Action_ComMDisallow_FD1_CAN_f26020e5] */
  { /*     1 */ TRUE    }   /* [A_ESH_Action_ComMAllow_FD1_CAN_f26020e5] */
};
#define BSWM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  BswM_ComPduGroupSwitchParameters
**********************************************************************************************************************/
/** 
  \var    BswM_ComPduGroupSwitchParameters
  \details
  Element                                   Description
  ComPduGroupSwitchSubParametersEndIdx      the end index of the 0:n relation pointing to BswM_ComPduGroupSwitchSubParameters
  ComPduGroupSwitchSubParametersStartIdx    the start index of the 0:n relation pointing to BswM_ComPduGroupSwitchSubParameters
*/ 
#define BSWM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(BswM_ComPduGroupSwitchParametersType, BSWM_CONST) BswM_ComPduGroupSwitchParameters[4] = {
    /* Index    ComPduGroupSwitchSubParametersEndIdx  ComPduGroupSwitchSubParametersStartIdx        Referable Keys */
  { /*     0 */                                   1U,                                     0U },  /* [A_CC_DisablePDUGroup_PSCM_FD_oFD1_CAN_Rx_fcef2243] */
  { /*     1 */                                   2U,                                     1U },  /* [A_CC_EnablePDUGroup_PSCM_FD_oFD1_CAN_Rx_fcef2243] */
  { /*     2 */                                   3U,                                     2U },  /* [A_CC_DisablePDUGroup_PSCM_FD_oFD1_CAN_Tx_fcef2243] */
  { /*     3 */                                   4U,                                     3U }   /* [A_CC_EnablePDUGroup_PSCM_FD_oFD1_CAN_Tx_fcef2243] */
};
#define BSWM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  BswM_ComPduGroupSwitchSubParameters
**********************************************************************************************************************/
/** 
  \var    BswM_ComPduGroupSwitchSubParameters
  \details
  Element        Description
  IpduGroupId
  BitVal     
*/ 
#define BSWM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(BswM_ComPduGroupSwitchSubParametersType, BSWM_CONST) BswM_ComPduGroupSwitchSubParameters[4] = {
    /* Index    IpduGroupId                                        BitVal        Referable Keys */
  { /*     0 */ ComConf_ComIPduGroup_PSCM_FD_oFD1_CAN_Rx_fcef2243, FALSE  },  /* [A_CC_DisablePDUGroup_PSCM_FD_oFD1_CAN_Rx_fcef2243] */
  { /*     1 */ ComConf_ComIPduGroup_PSCM_FD_oFD1_CAN_Rx_fcef2243, TRUE   },  /* [A_CC_EnablePDUGroup_PSCM_FD_oFD1_CAN_Rx_fcef2243] */
  { /*     2 */ ComConf_ComIPduGroup_PSCM_FD_oFD1_CAN_Tx_fcef2243, FALSE  },  /* [A_CC_DisablePDUGroup_PSCM_FD_oFD1_CAN_Tx_fcef2243] */
  { /*     3 */ ComConf_ComIPduGroup_PSCM_FD_oFD1_CAN_Tx_fcef2243, TRUE   }   /* [A_CC_EnablePDUGroup_PSCM_FD_oFD1_CAN_Tx_fcef2243] */
};
#define BSWM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  BswM_DeferredRules
**********************************************************************************************************************/
/** 
  \var    BswM_DeferredRules
  \details
  Element     Description
  RulesIdx    the index of the 1:1 relation pointing to BswM_Rules
*/ 
#define BSWM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(BswM_DeferredRulesType, BSWM_CONST) BswM_DeferredRules[9] = {
    /* Index    RulesIdx        Referable Keys */
  { /*     0 */       0U },  /* [R_ESH_RunToPostRun] */
  { /*     1 */       1U },  /* [R_ESH_WaitToShutdown] */
  { /*     2 */       2U },  /* [R_ESH_WakeupToPrep] */
  { /*     3 */       3U },  /* [R_ESH_WaitToWakeup] */
  { /*     4 */       4U },  /* [R_ESH_WakeupToRun] */
  { /*     5 */       8U },  /* [R_ESH_PostRun] */
  { /*     6 */      11U },  /* [R_BswM_EnterShutdownRule] */
  { /*     7 */      15U },  /* [R_EcuResetStartRule] */
  { /*     8 */      16U }   /* [R_Ecu2DisableComRule] */
};
#define BSWM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  BswM_ExpressionsECU1
**********************************************************************************************************************/
/** 
  \var    BswM_ExpressionsECU1
  \brief  Holds pointer to all expression functions.
*/ 
#define BSWM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(BswM_ExpressionFuncType, BSWM_CONST) BswM_ExpressionsECU1[22] = {
  /* Index    Expressions                                           Referable Keys */
  /*     0 */BswM_ExpFct_Nxtr_LE_EnterShutdown_ECU1           ,  /* [LE_Nxtr_LE_EnterShutdown] */
  /*     1 */BswM_ExpFct_LE_EcuIdn2_ECU1                      ,  /* [LE_LE_EcuIdn2] */
  /*     2 */BswM_ExpFct_LE_BswMEcuResetStart_ECU1            ,  /* [LE_LE_BswMEcuResetStart] */
  /*     3 */BswM_ExpFct_ESH_LE_WakeupToRun_ECU1              ,  /* [LE_ESH_LE_WakeupToRun] */
  /*     4 */BswM_ExpFct_ESH_LE_WakeupToPrepShutdown_ECU1     ,  /* [LE_ESH_LE_WakeupToPrepShutdown] */
  /*     5 */BswM_ExpFct_ESH_LE_WaitForNvMToWakeup_ECU1       ,  /* [LE_ESH_LE_WaitForNvMToWakeup] */
  /*     6 */BswM_ExpFct_ESH_LE_WaitForNvMToShutdown_ECU1     ,  /* [LE_ESH_LE_WaitForNvMToShutdown] */
  /*     7 */BswM_ExpFct_ESH_LE_ValidWakeup_ECU1              ,  /* [LE_ESH_LE_ValidWakeup] */
  /*     8 */BswM_ExpFct_ESH_LE_RunToPostRun_ECU1             ,  /* [LE_ESH_LE_RunToPostRun] */
  /*     9 */BswM_ExpFct_ESH_LE_RunRequestsOrWakeup_ECU1      ,  /* [LE_ESH_LE_RunRequestsOrWakeup] */
  /*    10 */BswM_ExpFct_ESH_LE_RunRequested_ECU1             ,  /* [LE_ESH_LE_RunRequested] */
  /*    11 */BswM_ExpFct_ESH_LE_RunReleased_ECU1              ,  /* [LE_ESH_LE_RunReleased] */
  /*    12 */BswM_ExpFct_ESH_LE_PrepShutdownToWaitForNvM_ECU1 ,  /* [LE_ESH_LE_PrepShutdownToWaitForNvM] */
  /*    13 */BswM_ExpFct_ESH_LE_PostRunToPrep_ECU1            ,  /* [LE_ESH_LE_PostRunToPrep] */
  /*    14 */BswM_ExpFct_ESH_LE_PostRunReleased_ECU1          ,  /* [LE_ESH_LE_PostRunReleased] */
  /*    15 */BswM_ExpFct_ESH_LE_PostRun_ECU1                  ,  /* [LE_ESH_LE_PostRun] */
  /*    16 */BswM_ExpFct_ESH_LE_NoWakeup_ECU1                 ,  /* [LE_ESH_LE_NoWakeup] */
  /*    17 */BswM_ExpFct_ESH_LE_InitToWakeup_ECU1             ,  /* [LE_ESH_LE_InitToWakeup] */
  /*    18 */BswM_ExpFct_ESH_LE_ComMNoPendingRequests_ECU1    ,  /* [LE_ESH_LE_ComMNoPendingRequests] */
  /*    19 */BswM_ExpFct_ESH_LE_AllChannelsNoCom_ECU1         ,  /* [LE_ESH_LE_AllChannelsNoCom] */
  /*    20 */BswM_ExpFct_CC_LE_FD1_CAN_f26020e5_RX_DM_ECU1    ,  /* [LE_CC_LE_FD1_CAN_f26020e5_RX_DM, LE_CC_LE_FD1_CAN_f26020e5_TX] */
  /*    21 */BswM_ExpFct_CC_LE_FD1_CAN_f26020e5_RX_ECU1          /* [LE_CC_LE_FD1_CAN_f26020e5_RX] */
};
#define BSWM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  BswM_ExpressionsECU2
**********************************************************************************************************************/
/** 
  \var    BswM_ExpressionsECU2
  \brief  Holds pointer to all expression functions.
*/ 
#define BSWM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(BswM_ExpressionFuncType, BSWM_CONST) BswM_ExpressionsECU2[22] = {
  /* Index    Expressions                                           Referable Keys */
  /*     0 */BswM_ExpFct_Nxtr_LE_EnterShutdown_ECU1           ,  /* [LE_Nxtr_LE_EnterShutdown] */
  /*     1 */BswM_ExpFct_LE_EcuIdn2_ECU1                      ,  /* [LE_LE_EcuIdn2] */
  /*     2 */BswM_ExpFct_LE_BswMEcuResetStart_ECU1            ,  /* [LE_LE_BswMEcuResetStart] */
  /*     3 */BswM_ExpFct_ESH_LE_WakeupToRun_ECU2              ,  /* [LE_ESH_LE_WakeupToRun] */
  /*     4 */BswM_ExpFct_ESH_LE_WakeupToPrepShutdown_ECU2     ,  /* [LE_ESH_LE_WakeupToPrepShutdown] */
  /*     5 */BswM_ExpFct_ESH_LE_WaitForNvMToWakeup_ECU2       ,  /* [LE_ESH_LE_WaitForNvMToWakeup] */
  /*     6 */BswM_ExpFct_ESH_LE_WaitForNvMToShutdown_ECU2     ,  /* [LE_ESH_LE_WaitForNvMToShutdown] */
  /*     7 */BswM_ExpFct_ESH_LE_ValidWakeup_ECU1              ,  /* [LE_ESH_LE_ValidWakeup] */
  /*     8 */BswM_ExpFct_ESH_LE_RunToPostRun_ECU2             ,  /* [LE_ESH_LE_RunToPostRun] */
  /*     9 */BswM_ExpFct_ESH_LE_RunRequestsOrWakeup_ECU2      ,  /* [LE_ESH_LE_RunRequestsOrWakeup] */
  /*    10 */BswM_ExpFct_ESH_LE_RunRequested_ECU1             ,  /* [LE_ESH_LE_RunRequested] */
  /*    11 */BswM_ExpFct_ESH_LE_RunReleased_ECU1              ,  /* [LE_ESH_LE_RunReleased] */
  /*    12 */BswM_ExpFct_ESH_LE_PrepShutdownToWaitForNvM_ECU1 ,  /* [LE_ESH_LE_PrepShutdownToWaitForNvM] */
  /*    13 */BswM_ExpFct_ESH_LE_PostRunToPrep_ECU2            ,  /* [LE_ESH_LE_PostRunToPrep] */
  /*    14 */BswM_ExpFct_ESH_LE_PostRunReleased_ECU1          ,  /* [LE_ESH_LE_PostRunReleased] */
  /*    15 */BswM_ExpFct_ESH_LE_PostRun_ECU1                  ,  /* [LE_ESH_LE_PostRun] */
  /*    16 */BswM_ExpFct_ESH_LE_NoWakeup_ECU1                 ,  /* [LE_ESH_LE_NoWakeup] */
  /*    17 */BswM_ExpFct_ESH_LE_InitToWakeup_ECU1             ,  /* [LE_ESH_LE_InitToWakeup] */
  /*    18 */BswM_ExpFct_ESH_LE_ComMNoPendingRequests_ECU1    ,  /* [LE_ESH_LE_ComMNoPendingRequests] */
  /*    19 */BswM_ExpFct_ESH_LE_AllChannelsNoCom_ECU1         ,  /* [LE_ESH_LE_AllChannelsNoCom] */
  /*    20 */BswM_ExpFct_CC_LE_FD1_CAN_f26020e5_RX_DM_ECU1    ,  /* [LE_CC_LE_FD1_CAN_f26020e5_RX_DM, LE_CC_LE_FD1_CAN_f26020e5_TX] */
  /*    21 */BswM_ExpFct_CC_LE_FD1_CAN_f26020e5_RX_ECU1          /* [LE_CC_LE_FD1_CAN_f26020e5_RX] */
};
#define BSWM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  BswM_GenericMapping
**********************************************************************************************************************/
/** 
  \var    BswM_GenericMapping
  \brief  Maps the external id of BswMGenericRequest to an internal id and references immediate request ports.
  \details
  Element                  Description
  ExternalId               External id of BswMGenericRequest.
  ImmediateUserEndIdx      the end index of the 0:n relation pointing to BswM_ImmediateUser
  ImmediateUserStartIdx    the start index of the 0:n relation pointing to BswM_ImmediateUser
  InitValue                Initialization value of port.
*/ 
#define BSWM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(BswM_GenericMappingType, BSWM_CONST) BswM_GenericMapping[3] = {
    /* Index    ExternalId  ImmediateUserEndIdx                          ImmediateUserStartIdx                          InitValue                                                            Referable Keys */
  { /*     0 */ 0         ,                                          2U,                                            1U, BSWM_GENERICVALUE_BSWM_STATE_BSWM_NXTR_SHUTDOWN               },  /* [GENERIC_0, MRP_BSWM_STATE] */
  { /*     1 */ 230       ,                                          3U,                                            2U, BSWM_GENERICVALUE_ESH_State_ESH_INIT                          },  /* [GENERIC_1, MRP_ESH_State] */
  { /*     2 */ 232       , BSWM_NO_IMMEDIATEUSERENDIDXOFGENERICMAPPING, BSWM_NO_IMMEDIATEUSERSTARTIDXOFGENERICMAPPING, BSWM_GENERICVALUE_ESH_ComMPendingRequests_ESH_COMM_NO_REQUEST }   /* [GENERIC_2, MRP_ESH_ComMPendingRequests] */
};
#define BSWM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  BswM_GenericModeParameters
**********************************************************************************************************************/
/** 
  \var    BswM_GenericModeParameters
  \details
  Element    Description
  Mode   
  User   
*/ 
#define BSWM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(BswM_GenericModeParametersType, BSWM_CONST) BswM_GenericModeParameters[6] = {
    /* Index    Mode                                             User                           Referable Keys */
  { /*     0 */ BSWM_GENERICVALUE_ESH_State_ESH_POST_RUN       , BSWM_GENERIC_ESH_State  },  /* [A_ESH_Action_ESH_PostRun] */
  { /*     1 */ BSWM_GENERICVALUE_ESH_State_ESH_PREP_SHUTDOWN  , BSWM_GENERIC_ESH_State  },  /* [A_ESH_Action_ESH_PrepShutdown] */
  { /*     2 */ BSWM_GENERICVALUE_ESH_State_ESH_WAKEUP         , BSWM_GENERIC_ESH_State  },  /* [A_ESH_Action_ESH_Wakeup] */
  { /*     3 */ BSWM_GENERICVALUE_ESH_State_ESH_RUN            , BSWM_GENERIC_ESH_State  },  /* [A_ESH_Action_ESH_Run] */
  { /*     4 */ BSWM_GENERICVALUE_ESH_State_ESH_WAIT_FOR_NVM   , BSWM_GENERIC_ESH_State  },  /* [A_ESH_Action_ESH_WaitForNvm] */
  { /*     5 */ BSWM_GENERICVALUE_BSWM_STATE_BSWM_NXTR_SHUTDOWN, BSWM_GENERIC_BSWM_STATE }   /* [A_GENERIC_SWITCH_BSWM_STATE_TO_BSWM_NXTR_SHUTDOWN] */
};
#define BSWM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  BswM_ImmediateUser
**********************************************************************************************************************/
/** 
  \var    BswM_ImmediateUser
  \brief  Contains all immediate request ports.
  \details
  Element             Description
  MaskedBits          contains bitcoded the boolean data of BswM_ForcedOfImmediateUser, BswM_OnInitOfImmediateUser, BswM_RulesIndUsedOfImmediateUser
  RulesIndEndIdx      the end index of the 0:n relation pointing to BswM_RulesInd
  RulesIndStartIdx    the start index of the 0:n relation pointing to BswM_RulesInd
*/ 
#define BSWM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(BswM_ImmediateUserType, BSWM_CONST) BswM_ImmediateUser[3] = {
    /* Index    MaskedBits  RulesIndEndIdx                         RulesIndStartIdx                               Comment                                                 Referable Keys */
  { /*     0 */      0x01U,                                    3U,                                      0U },  /* [Name: CC_CanSMIndication_FD1_CAN_f26020e5] */  /* [MRP_CC_CanSMIndication_FD1_CAN_f26020e5, CANSM_CHANNEL_0] */
  { /*     1 */      0x04U, BSWM_NO_RULESINDENDIDXOFIMMEDIATEUSER, BSWM_NO_RULESINDSTARTIDXOFIMMEDIATEUSER },  /* [Name: BSWM_STATE]                          */  /* [MRP_BSWM_STATE, GENERIC_0] */
  { /*     2 */      0x03U,                                   11U,                                      3U }   /* [Name: ESH_State]                           */  /* [MRP_ESH_State, GENERIC_1] */
};
#define BSWM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  BswM_InitValues
**********************************************************************************************************************/
/** 
  \var    BswM_InitValues
  \brief  Holds initialization values for generic modes.
*/ 
#define BSWM_START_SEC_CONST_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(BswM_InitValuesType, BSWM_CONST) BswM_InitValues[3] = {
  /* Index    InitValues                                                         Referable Keys */
  /*     0 */BSWM_GENERICVALUE_ESH_State_ESH_INIT                          ,  /* [MRP_ESH_State] */
  /*     1 */BSWM_GENERICVALUE_ESH_ComMPendingRequests_ESH_COMM_NO_REQUEST ,  /* [MRP_ESH_ComMPendingRequests] */
  /*     2 */BSWM_GENERICVALUE_BSWM_STATE_BSWM_NXTR_SHUTDOWN                  /* [MRP_BSWM_STATE] */
};
#define BSWM_STOP_SEC_CONST_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  BswM_Rules
**********************************************************************************************************************/
/** 
  \var    BswM_Rules
  \details
  Element                Description
  ActionListsFalseIdx    the index of the 0:1 relation pointing to BswM_ActionLists
  ActionListsTrueIdx     the index of the 0:1 relation pointing to BswM_ActionLists
  ExpressionsIdx         the index of the 1:1 relation pointing to BswM_Expressions
  Id                     External id of rule.
  Init                   Initialization value of rule state (TRUE, FALSE, UNDEFINED or DEACTIVATED).
  MaskedBits             contains bitcoded the boolean data of BswM_ActionListsFalseUsedOfRules, BswM_ActionListsTrueUsedOfRules
*/ 
#define BSWM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(BswM_RulesType, BSWM_CONST) BswM_Rules[17] = {
    /* Index    ActionListsFalseIdx                 ActionListsTrueIdx  ExpressionsIdx  Id   Init            MaskedBits        Referable Keys */
  { /*     0 */ BSWM_NO_ACTIONLISTSFALSEIDXOFRULES,                12U,             8U, 12U, BSWM_FALSE    ,      0x01U },  /* [R_ESH_RunToPostRun, MRP_ESH_State, MRP_ESH_ComMIndication_FD1_CAN_f26020e5, MRP_ESH_RunRequest_0, MRP_ESH_RunRequest_1, MRP_ESH_SelfRunRequestTimer] */
  { /*     1 */ BSWM_NO_ACTIONLISTSFALSEIDXOFRULES,                 2U,             6U, 14U, BSWM_FALSE    ,      0x01U },  /* [R_ESH_WaitToShutdown, MRP_ESH_State, MRP_ESH_EcuM_GetValidatedWakeupEvents, MRP_ESH_ComMPendingRequests] */
  { /*     2 */ BSWM_NO_ACTIONLISTSFALSEIDXOFRULES,                 3U,             4U, 16U, BSWM_FALSE    ,      0x01U },  /* [R_ESH_WakeupToPrep, MRP_ESH_State, MRP_ESH_EcuM_GetPendingWakeupEvents, MRP_ESH_EcuM_GetValidatedWakeupEvents, MRP_ESH_ComMPendingRequests] */
  { /*     3 */ BSWM_NO_ACTIONLISTSFALSEIDXOFRULES,                 4U,             5U, 15U, BSWM_FALSE    ,      0x01U },  /* [R_ESH_WaitToWakeup, MRP_ESH_State, MRP_ESH_EcuM_GetValidatedWakeupEvents, MRP_ESH_ComMPendingRequests] */
  { /*     4 */ BSWM_NO_ACTIONLISTSFALSEIDXOFRULES,                 5U,             3U, 17U, BSWM_FALSE    ,      0x01U },  /* [R_ESH_WakeupToRun, MRP_ESH_State, MRP_ESH_EcuM_GetValidatedWakeupEvents, MRP_ESH_ComMPendingRequests] */
  { /*     5 */ BSWM_NO_ACTIONLISTSFALSEIDXOFRULES,                 6U,            17U,  7U, BSWM_FALSE    ,      0x01U },  /* [R_ESH_InitToWakeup, MRP_ESH_State] */
  { /*     6 */ BSWM_NO_ACTIONLISTSFALSEIDXOFRULES,                 7U,            13U, 10U, BSWM_FALSE    ,      0x01U },  /* [R_ESH_PostRunToPrepNested] */
  { /*     7 */                                 8U,                 9U,             9U,  9U, BSWM_FALSE    ,      0x03U },  /* [R_ESH_PostRunNested] */
  { /*     8 */ BSWM_NO_ACTIONLISTSFALSEIDXOFRULES,                10U,            15U,  8U, BSWM_FALSE    ,      0x01U },  /* [R_ESH_PostRun, MRP_ESH_State, MRP_ESH_SelfRunRequestTimer] */
  { /*     9 */ BSWM_NO_ACTIONLISTSFALSEIDXOFRULES,                11U,            12U, 11U, BSWM_FALSE    ,      0x01U },  /* [R_ESH_PrepToWait, MRP_ESH_State] */
  { /*    10 */ BSWM_NO_ACTIONLISTSFALSEIDXOFRULES,                 1U,            18U, 13U, BSWM_FALSE    ,      0x01U },  /* [R_ESH_RunToPostRunNested] */
  { /*    11 */ BSWM_NO_ACTIONLISTSFALSEIDXOFRULES,                13U,             0U,  1U, BSWM_FALSE    ,      0x01U },  /* [R_BswM_EnterShutdownRule, MRP_ModeRequest_SysStMod] */
  { /*    12 */                                14U,                15U,            20U,  3U, BSWM_FALSE    ,      0x03U },  /* [R_CC_FD1_CAN_f26020e5_RX_DM, MRP_CC_CanSMIndication_FD1_CAN_f26020e5] */
  { /*    13 */                                16U,                17U,            21U,  2U, BSWM_FALSE    ,      0x03U },  /* [R_CC_FD1_CAN_f26020e5_RX, MRP_CC_CanSMIndication_FD1_CAN_f26020e5] */
  { /*    14 */                                18U,                19U,            20U,  4U, BSWM_FALSE    ,      0x03U },  /* [R_CC_FD1_CAN_f26020e5_TX, MRP_CC_CanSMIndication_FD1_CAN_f26020e5] */
  { /*    15 */ BSWM_NO_ACTIONLISTSFALSEIDXOFRULES,                21U,             2U, 18U, BSWM_FALSE    ,      0x01U },  /* [R_EcuResetStartRule, MRP_SwcModeNotification_BswM_MDGP_BswMEcuResetMod] */
  { /*    16 */ BSWM_NO_ACTIONLISTSFALSEIDXOFRULES,                21U,             1U,  0U, BSWM_UNDEFINED,      0x01U }   /* [R_Ecu2DisableComRule, MRP_ModeRequest_EcuIdn] */
};
#define BSWM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  BswM_RulesInd
**********************************************************************************************************************/
/** 
  \var    BswM_RulesInd
  \brief  the indexes of the 1:1 sorted relation pointing to BswM_Rules
*/ 
#define BSWM_START_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(BswM_RulesIndType, BSWM_CONST) BswM_RulesInd[11] = {
  /* Index    RulesInd      Referable Keys */
  /*     0 */      12U,  /* [MRP_CC_CanSMIndication_FD1_CAN_f26020e5] */
  /*     1 */      13U,  /* [MRP_CC_CanSMIndication_FD1_CAN_f26020e5] */
  /*     2 */      14U,  /* [MRP_CC_CanSMIndication_FD1_CAN_f26020e5] */
  /*     3 */       0U,  /* [MRP_ESH_State] */
  /*     4 */       1U,  /* [MRP_ESH_State] */
  /*     5 */       2U,  /* [MRP_ESH_State] */
  /*     6 */       3U,  /* [MRP_ESH_State] */
  /*     7 */       4U,  /* [MRP_ESH_State] */
  /*     8 */       5U,  /* [MRP_ESH_State] */
  /*     9 */       8U,  /* [MRP_ESH_State] */
  /*    10 */       9U   /* [MRP_ESH_State] */
};
#define BSWM_STOP_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  BswM_ActionListQueue
**********************************************************************************************************************/
/** 
  \var    BswM_ActionListQueue
  \brief  Variable to store action lists which shall be executed.
*/ 
#define BSWM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(uBswM_ActionListQueueType, BSWM_VAR_NOINIT) BswM_ActionListQueue;  /* PRQA S 0759 */  /* MD_CSL_18.4 */
  /* Index        Referable Keys  */
  /*     0 */  /* [AL_INIT_AL_Initialize] */
  /*     1 */  /* [AL_ESH_AL_RunToPostRun] */
  /*     2 */  /* [AL_ESH_AL_WaitForNvMToShutdown] */
  /*     3 */  /* [AL_ESH_AL_WakeupToPrep] */
  /*     4 */  /* [AL_ESH_AL_WaitForNvMWakeup] */
  /*     5 */  /* [AL_ESH_AL_WakeupToRun] */
  /*     6 */  /* [AL_ESH_AL_InitToWakeup] */
  /*     7 */  /* [AL_ESH_AL_PostRunToPrepShutdown] */
  /*     8 */  /* [AL_ESH_AL_ESH_PostRunToPrepCheck] */
  /*     9 */  /* [AL_ESH_AL_PostRunToRun] */
  /*    10 */  /* [AL_ESH_AL_ExitPostRun] */
  /*    11 */  /* [AL_ESH_AL_PrepShutdownToWaitForNvM] */
  /*    12 */  /* [AL_ESH_AL_ExitRun] */
  /*    13 */  /* [AL_SHUTDOWN] */
  /*    14 */  /* [AL_CC_AL_FD1_CAN_f26020e5_Disable_DM] */
  /*    15 */  /* [AL_CC_AL_FD1_CAN_f26020e5_Enable_DM] */
  /*    16 */  /* [AL_CC_AL_FD1_CAN_f26020e5_RX_Disable] */
  /*    17 */  /* [AL_CC_AL_FD1_CAN_f26020e5_RX_EnableNoinit] */
  /*    18 */  /* [AL_CC_AL_FD1_CAN_f26020e5_TX_Disable] */
  /*    19 */  /* [AL_CC_AL_FD1_CAN_f26020e5_TX_EnableNoinit] */
  /*    20 */  /* [AL_NmDisable] */
  /*    21 */  /* [AL_DisableAllCom] */

#define BSWM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  BswM_CanSMChannelState
**********************************************************************************************************************/
/** 
  \var    BswM_CanSMChannelState
  \brief  Variable to store current mode of BswMCanSMIndication mode request ports.
*/ 
#define BSWM_START_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(CanSM_BswMCurrentStateType, BSWM_VAR_NOINIT) BswM_CanSMChannelState[1];
  /* Index        Referable Keys  */
  /*     0 */  /* [CANSM_CHANNEL_0, MRP_CC_CanSMIndication_FD1_CAN_f26020e5] */

#define BSWM_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  BswM_ComMChannelState
**********************************************************************************************************************/
/** 
  \var    BswM_ComMChannelState
  \brief  Variable to store current mode of BswMComMIndication mode request ports.
*/ 
#define BSWM_START_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(ComM_ModeType, BSWM_VAR_NOINIT) BswM_ComMChannelState[1];
  /* Index        Referable Keys  */
  /*     0 */  /* [COMM_CHANNEL_0, MRP_ESH_ComMIndication_FD1_CAN_f26020e5] */

#define BSWM_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  BswM_GenericState
**********************************************************************************************************************/
/** 
  \var    BswM_GenericState
  \brief  Variable to store current mode of BswMGenericRequest mode request ports.
*/ 
#define BSWM_START_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(BswM_ModeType, BSWM_VAR_NOINIT) BswM_GenericState[3];
  /* Index        Referable Keys  */
  /*     0 */  /* [GENERIC_0, MRP_BSWM_STATE] */
  /*     1 */  /* [GENERIC_1, MRP_ESH_State] */
  /*     2 */  /* [GENERIC_2, MRP_ESH_ComMPendingRequests] */

#define BSWM_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  BswM_Initialized
**********************************************************************************************************************/
#define BSWM_START_SEC_VAR_ZERO_INIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(BswM_InitializedType, BSWM_VAR_ZERO_INIT) BswM_Initialized = FALSE;
#define BSWM_STOP_SEC_VAR_ZERO_INIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  BswM_ModeRequestQueue
**********************************************************************************************************************/
/** 
  \var    BswM_ModeRequestQueue
  \brief  Variable to store an immediate mode request which must be queued because of a current active arbitration.
*/ 
#define BSWM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(BswM_ModeRequestQueueType, BSWM_VAR_NOINIT) BswM_ModeRequestQueue[3];
  /* Index        Referable Keys  */
  /*     0 */  /* [MRP_CC_CanSMIndication_FD1_CAN_f26020e5, CANSM_CHANNEL_0] */
  /*     1 */  /* [MRP_BSWM_STATE, GENERIC_0] */
  /*     2 */  /* [MRP_ESH_State, GENERIC_1] */

#define BSWM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  BswM_RuleStates
**********************************************************************************************************************/
/** 
  \var    BswM_RuleStates
  \brief  Stores the last execution state of the rule.
*/ 
#define BSWM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(BswM_RuleStatesType, BSWM_VAR_NOINIT) BswM_RuleStates[17];
  /* Index        Referable Keys  */
  /*     0 */  /* [R_ESH_RunToPostRun, MRP_ESH_State, MRP_ESH_ComMIndication_FD1_CAN_f26020e5, MRP_ESH_RunRequest_0, MRP_ESH_RunRequest_1, MRP_ESH_SelfRunRequestTimer] */
  /*     1 */  /* [R_ESH_WaitToShutdown, MRP_ESH_State, MRP_ESH_EcuM_GetValidatedWakeupEvents, MRP_ESH_ComMPendingRequests] */
  /*     2 */  /* [R_ESH_WakeupToPrep, MRP_ESH_State, MRP_ESH_EcuM_GetPendingWakeupEvents, MRP_ESH_EcuM_GetValidatedWakeupEvents, MRP_ESH_ComMPendingRequests] */
  /*     3 */  /* [R_ESH_WaitToWakeup, MRP_ESH_State, MRP_ESH_EcuM_GetValidatedWakeupEvents, MRP_ESH_ComMPendingRequests] */
  /*     4 */  /* [R_ESH_WakeupToRun, MRP_ESH_State, MRP_ESH_EcuM_GetValidatedWakeupEvents, MRP_ESH_ComMPendingRequests] */
  /*     5 */  /* [R_ESH_InitToWakeup, MRP_ESH_State] */
  /*     6 */  /* [R_ESH_PostRunToPrepNested] */
  /*     7 */  /* [R_ESH_PostRunNested] */
  /*     8 */  /* [R_ESH_PostRun, MRP_ESH_State, MRP_ESH_SelfRunRequestTimer] */
  /*     9 */  /* [R_ESH_PrepToWait, MRP_ESH_State] */
  /*    10 */  /* [R_ESH_RunToPostRunNested] */
  /*    11 */  /* [R_BswM_EnterShutdownRule, MRP_ModeRequest_SysStMod] */
  /*    12 */  /* [R_CC_FD1_CAN_f26020e5_RX_DM, MRP_CC_CanSMIndication_FD1_CAN_f26020e5] */
  /*    13 */  /* [R_CC_FD1_CAN_f26020e5_RX, MRP_CC_CanSMIndication_FD1_CAN_f26020e5] */
  /*    14 */  /* [R_CC_FD1_CAN_f26020e5_TX, MRP_CC_CanSMIndication_FD1_CAN_f26020e5] */
  /*    15 */  /* [R_EcuResetStartRule, MRP_SwcModeNotification_BswM_MDGP_BswMEcuResetMod] */
  /*    16 */  /* [R_Ecu2DisableComRule, MRP_ModeRequest_EcuIdn] */

#define BSWM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  BswM_TimerState
**********************************************************************************************************************/
/** 
  \var    BswM_TimerState
  \brief  Variable to store current state of BswMTimer (STARTED, STOPPER OR EXPIRED).
*/ 
#define BSWM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(uBswM_TimerStateType, BSWM_VAR_NOINIT) BswM_TimerState;  /* PRQA S 0759 */  /* MD_CSL_18.4 */
  /* Index        Referable Keys  */
  /*     0 */  /* [MRP_ESH_SelfRunRequestTimer] */

#define BSWM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  BswM_TimerValue
**********************************************************************************************************************/
/** 
  \var    BswM_TimerValue
  \brief  Variable to store current timer values.
*/ 
#define BSWM_START_SEC_VAR_NOINIT_32BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(uBswM_TimerValueType, BSWM_VAR_NOINIT) BswM_TimerValue;  /* PRQA S 0759 */  /* MD_CSL_18.4 */
  /* Index        Referable Keys  */
  /*     0 */  /* [MRP_ESH_SelfRunRequestTimer] */

#define BSWM_STOP_SEC_VAR_NOINIT_32BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  BswM_PCConfig
**********************************************************************************************************************/
/** 
  \var    BswM_PCConfig
  \details
  Element                                 Description
  ActionItems                             the pointer to BswM_ActionItems
  Actions                                 the pointer to BswM_Actions
  Expressions                             the pointer to BswM_Expressions
  SizeOfComPduGroupSwitchParameters       the number of accomplishable value elements in BswM_ComPduGroupSwitchParameters
  SizeOfComPduGroupSwitchSubParameters    the number of accomplishable value elements in BswM_ComPduGroupSwitchSubParameters
*/ 
#define BSWM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(BswM_PCConfigsType, BSWM_CONST) BswM_PCConfig = {
  { /* Index: 0 Keys: [Config_ECU1] */
      BswM_ActionItemsECU1                  /**< the pointer to BswM_ActionItemsECU1 */
    , BswM_ActionsECU1                      /**< the pointer to BswM_ActionsECU1 */
    , BswM_ExpressionsECU1                  /**< the pointer to BswM_ExpressionsECU1 */
    , 4U                                    /**< the number of elements in BswM_ComPduGroupSwitchParameters */
    , 4U                                    /**< the number of elements in BswM_ComPduGroupSwitchSubParameters */
  },
  { /* Index: 1 Keys: [Config_ECU2] */
      BswM_ActionItemsECU2                  /**< the pointer to BswM_ActionItemsECU2 */
    , BswM_ActionsECU2                      /**< the pointer to BswM_ActionsECU2 */
    , BswM_ExpressionsECU2                  /**< the pointer to BswM_ExpressionsECU2 */
    , 3U                                    /**< the number of elements in BswM_ComPduGroupSwitchParameters */
    , 3U                                    /**< the number of elements in BswM_ComPduGroupSwitchSubParameters */
  }
};
#define BSWM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */


/* PRQA L:GLOBALDATADECLARATIONS */


#define BSWM_START_SEC_CODE
/* PRQA S 5087 1 */ /* MD_MSR_19.1 */
#include "MemMap.h"


/* -----------------------------------------------------------------------------
    &&&~ FUNCTIONS
 ----------------------------------------------------------------------------- */
/**********************************************************************************************************************
 *  BswM_ExecuteIpduGroupControl()
 **********************************************************************************************************************/
FUNC(void, BSWM_CODE) BswM_ExecuteIpduGroupControl(void)
{
  Com_IpduGroupVector ipduGroupState;
  Com_IpduGroupVector dmState;
  uint16 iCnt;
  uint8 controlInvocation = BSWM_GROUPCONTROL_IDLE;

  SchM_Enter_BswM_BSWM_EXCLUSIVE_AREA_0(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  if(BswM_PduGroupControlInvocation != BSWM_GROUPCONTROL_IDLE)
  {
    if((BswM_PduGroupControlInvocation & BSWM_GROUPCONTROL_NORMAL) != 0u)
    {
      iCnt = BSWM_IPDUGROUPVECTORSIZE;
      while(iCnt-- > (uint16)0x0000) /* PRQA S 3440 */ /* MD_BswM_3440 */
      {
        ipduGroupState[iCnt] = BswM_ComIPduGroupState[iCnt]; /* SBSW_BSWM_SETIPDUGROUPVECTOR */
      }
    }
    if((BswM_PduGroupControlInvocation & BSWM_GROUPCONTROL_DM) != 0u)
    {
      iCnt = BSWM_IPDUGROUPVECTORSIZE;
      while(iCnt-- > (uint16)0x0000) /* PRQA S 3440 */ /* MD_BswM_3440 */
      {
        dmState[iCnt] = BswM_ComRxIPduGroupDMState[iCnt]; /* SBSW_BSWM_SETIPDUGROUPVECTOR */
      }
    }
    controlInvocation = BswM_PduGroupControlInvocation;
    BswM_PduGroupControlInvocation = BSWM_GROUPCONTROL_IDLE;
  }
  SchM_Exit_BswM_BSWM_EXCLUSIVE_AREA_0(); /* PRQA S 3109 */ /* MD_MSR_14.3 */

  if(controlInvocation != BSWM_GROUPCONTROL_IDLE)
  {
    if((controlInvocation & BSWM_GROUPCONTROL_NORMAL) != 0u)
    {
      Com_IpduGroupControl(ipduGroupState, FALSE); /* SBSW_BSWM_IPDUGROUPVECTORCALL */
    }
    if((controlInvocation & BSWM_GROUPCONTROL_DM) != 0u)
    {
      Com_ReceptionDMControl(dmState); /* SBSW_BSWM_IPDUGROUPVECTORCALL */
    }
  }
} /* PRQA S 6010, 6030 */ /* MD_MSR_STPTH, MD_MSR_STCYC */

/**********************************************************************************************************************
 *  BswM_Action_RuleHandler()
 **********************************************************************************************************************/
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_Action_RuleHandler(BswM_HandleType handleId)
{
  BswM_HandleType actionListIndex;
  Std_ReturnType retVal = E_NOT_OK;
  
  if (handleId < BswM_GetSizeOfRules())
  {
    SchM_Enter_BswM_BSWM_EXCLUSIVE_AREA_0(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
    actionListIndex = BswM_ArbitrateRule(handleId);
    SchM_Exit_BswM_BSWM_EXCLUSIVE_AREA_0(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
    if(actionListIndex < BswM_GetSizeOfActionLists())
    {
      retVal = BswM_Action_ActionListHandler(actionListIndex);
    }
    else
    {
      retVal = E_OK;
    }
  }
  return retVal;
} 


/**********************************************************************************************************************
 *  BswM_UpdateTimer()
 **********************************************************************************************************************/
BSWM_LOCAL_INLINE FUNC(void, BSWM_CODE) BswM_UpdateTimer(BswM_SizeOfTimerValueType timerId, BswM_TimerValueType value)
{
  if (timerId < BswM_GetSizeOfTimerValue())
  {
      SchM_Enter_BswM_BSWM_EXCLUSIVE_AREA_0(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
      BswM_SetTimerValue(timerId, value); /* SBSW_BSWM_SETTIMER */
      BswM_SetTimerState(timerId, (BswM_TimerStateType)((value != 0u) ? BSWM_TIMER_STARTED : BSWM_TIMER_STOPPED)); /* SBSW_BSWM_SETTIMER */
      SchM_Exit_BswM_BSWM_EXCLUSIVE_AREA_0(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  }
}

/**********************************************************************************************************************
 *  BswM_Init_Gen
 *********************************************************************************************************************/
FUNC(void, BSWM_CODE) BswM_Init_Gen(void)
{
  uint16 uIndex;

  Request_ESH_RunRequest_0_requestedMode = RELEASED;
  Request_ESH_RunRequest_1_requestedMode = RELEASED;
  Request_ESH_PostRunRequest_0_requestedMode = RELEASED;
  Request_ESH_PostRunRequest_1_requestedMode = RELEASED;
  BswM_Mode_Notification_SwcModeNotification_BswM_MDGP_BswMEcuResetMod_BswM_MDGP_BswMEcuResetMod = RTE_MODE_BswMEcuResetMod_EcuResetDisabled;
  BswM_PduGroupControlInvocation = BSWM_GROUPCONTROL_IDLE;

  /* PRQA S 3109 COMCLEARIPDU */ /* MD_BswM_3109 */
  Com_ClearIpduGroupVector(BswM_ComIPduGroupState); /* SBSW_BSWM_IPDUGROUPVECTORCALL */
  Com_ClearIpduGroupVector(BswM_ComRxIPduGroupDMState); /* SBSW_BSWM_IPDUGROUPVECTORCALL */
  /* PRQA L:COMCLEARIPDU */

  for(uIndex = 0u; uIndex < BswM_GetSizeOfInitActionLists(); uIndex++)
  {
    (void)BswM_Action_ActionListHandler((BswM_HandleType)BswM_GetInitActionLists(uIndex));
  }
}

/**********************************************************************************************************************
 *  BswM_SwcModeRequestUpdateFct
 *********************************************************************************************************************/
FUNC(void, BSWM_CODE) BswM_SwcModeRequestUpdateFct(void)
{
  uint32 mode;
  mode = Rte_Mode_Notification_SwcModeNotification_BswM_MDGP_BswMEcuResetMod_BswM_MDGP_BswMEcuResetMod();
  if (mode != RTE_TRANSITION_BswMEcuResetMod)
  {
    BswM_Mode_Notification_SwcModeNotification_BswM_MDGP_BswMEcuResetMod_BswM_MDGP_BswMEcuResetMod = (Rte_ModeType_BswMEcuResetMod)mode;
  }
  (void)Rte_Read_Request_ESH_RunRequest_0_requestedMode(&Request_ESH_RunRequest_0_requestedMode); /* SBSW_BSWM_RTE_READ */
  (void)Rte_Read_Request_ESH_RunRequest_1_requestedMode(&Request_ESH_RunRequest_1_requestedMode); /* SBSW_BSWM_RTE_READ */
  (void)Rte_Read_Request_ESH_PostRunRequest_0_requestedMode(&Request_ESH_PostRunRequest_0_requestedMode); /* SBSW_BSWM_RTE_READ */
  (void)Rte_Read_Request_ESH_PostRunRequest_1_requestedMode(&Request_ESH_PostRunRequest_1_requestedMode); /* SBSW_BSWM_RTE_READ */
}

/**********************************************************************************************************************
 *  BswMActionFunctions
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  BswM_Action_INIT_Action_Fee_30_SmallSector_Init_ECU1
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_Action_INIT_Action_Fee_30_SmallSector_Init_ECU1(BswM_HandleType handleId)
{
  BSWM_DUMMY_STATEMENT(handleId); /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */

  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BswM_3200 */
  Fee_30_SmallSector_Init();
  /*lint -restore */
  return E_OK;
}

/**********************************************************************************************************************
 *  BswM_Action_INIT_Action_NvM_Init_ECU1
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_Action_INIT_Action_NvM_Init_ECU1(BswM_HandleType handleId)
{
  BSWM_DUMMY_STATEMENT(handleId); /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */

  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BswM_3200 */
  NvM_Init();
  /*lint -restore */
  return E_OK;
}

/**********************************************************************************************************************
 *  BswM_Action_INIT_Action_NvMReadAll_ECU1
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_Action_INIT_Action_NvMReadAll_ECU1(BswM_HandleType handleId)
{
  BSWM_DUMMY_STATEMENT(handleId); /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */

  BswM_INIT_NvMReadAll();
  return E_OK;
}

/**********************************************************************************************************************
 *  BswM_Action_INIT_Action_Dem_Init_ECU1
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_Action_INIT_Action_Dem_Init_ECU1(BswM_HandleType handleId)
{
  BSWM_DUMMY_STATEMENT(handleId); /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */

  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BswM_3200 */
  Dem_Init(Dem_Config_Ptr);
  /*lint -restore */
  return E_OK;
}

/**********************************************************************************************************************
 *  BswM_Action_INIT_Action_RteStart_ECU1
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_Action_INIT_Action_RteStart_ECU1(BswM_HandleType handleId)
{
  BSWM_DUMMY_STATEMENT(handleId); /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */

  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BswM_3200 */
  (void)Rte_Start();
  /*lint -restore */
  return E_OK;
}

/**********************************************************************************************************************
 *  BswM_Action_INIT_Action_WdgM_Init_ECU1
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_Action_INIT_Action_WdgM_Init_ECU1(BswM_HandleType handleId)
{
  BSWM_DUMMY_STATEMENT(handleId); /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */

  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BswM_3200 */
  WdgM_Init(&WdgMConfig_Mode0_core0);
  /*lint -restore */
  return E_OK;
}

/**********************************************************************************************************************
 *  BswM_Action_INIT_Action_Can_Init_ECU1
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_Action_INIT_Action_Can_Init_ECU1(BswM_HandleType handleId)
{
  BSWM_DUMMY_STATEMENT(handleId); /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */

  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BswM_3200 */
  Can_Init(EcuM_GlobalPCConfig_Ptr->CfgPtr_Can_Init);
  /*lint -restore */
  return E_OK;
}

/**********************************************************************************************************************
 *  BswM_Action_INIT_Action_CanIf_Init_ECU1
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_Action_INIT_Action_CanIf_Init_ECU1(BswM_HandleType handleId)
{
  BSWM_DUMMY_STATEMENT(handleId); /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */

  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BswM_3200 */
  CanIf_Init(EcuM_GlobalPCConfig_Ptr->CfgPtr_CanIf_Init);
  /*lint -restore */
  return E_OK;
}

/**********************************************************************************************************************
 *  BswM_Action_INIT_Action_Com_Init_ECU1
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_Action_INIT_Action_Com_Init_ECU1(BswM_HandleType handleId)
{
  BSWM_DUMMY_STATEMENT(handleId); /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */

  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BswM_3200 */
  Com_Init(Com_Config_Ptr);
  /*lint -restore */
  return E_OK;
}

/**********************************************************************************************************************
 *  BswM_Action_INIT_Action_PduR_Init_ECU1
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_Action_INIT_Action_PduR_Init_ECU1(BswM_HandleType handleId)
{
  BSWM_DUMMY_STATEMENT(handleId); /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */

  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BswM_3200 */
  PduR_Init(PduR_Config_Ptr);
  /*lint -restore */
  return E_OK;
}

/**********************************************************************************************************************
 *  BswM_Action_INIT_Action_CanSM_Init_ECU1
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_Action_INIT_Action_CanSM_Init_ECU1(BswM_HandleType handleId)
{
  BSWM_DUMMY_STATEMENT(handleId); /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */

  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BswM_3200 */
  CanSM_Init(CanSM_Config_Ptr);
  /*lint -restore */
  return E_OK;
}

/**********************************************************************************************************************
 *  BswM_Action_INIT_Action_CanTp_Init_ECU1
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_Action_INIT_Action_CanTp_Init_ECU1(BswM_HandleType handleId)
{
  BSWM_DUMMY_STATEMENT(handleId); /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */

  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BswM_3200 */
  CanTp_Init(CanTp_Config_Ptr);
  /*lint -restore */
  return E_OK;
}

/**********************************************************************************************************************
 *  BswM_Action_INIT_Action_ComM_Init_ECU1
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_Action_INIT_Action_ComM_Init_ECU1(BswM_HandleType handleId)
{
  BSWM_DUMMY_STATEMENT(handleId); /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */

  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BswM_3200 */
  ComM_Init();
  /*lint -restore */
  return E_OK;
}

/**********************************************************************************************************************
 *  BswM_Action_INIT_Action_Dcm_Init_ECU1
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_Action_INIT_Action_Dcm_Init_ECU1(BswM_HandleType handleId)
{
  BSWM_DUMMY_STATEMENT(handleId); /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */

  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BswM_3200 */
  Dcm_Init(NULL_PTR);
  /*lint -restore */
  return E_OK;
}

/**********************************************************************************************************************
 *  BswM_Action_ESH_Action_EcuMClearValidatedWakeupEvents_ECU1
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_Action_ESH_Action_EcuMClearValidatedWakeupEvents_ECU1(BswM_HandleType handleId)
{
  BSWM_DUMMY_STATEMENT(handleId); /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */

  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BswM_3200 */
  EcuM_ClearValidatedWakeupEvent(ECUM_WKSOURCE_ALL_SOURCES);
  /*lint -restore */
  return E_OK;
}

/**********************************************************************************************************************
 *  BswM_Action_GenericMode
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_Action_GenericMode(BswM_HandleType handleId)
{

  BswM_RequestMode(BswM_GetUserOfGenericModeParameters(handleId), BswM_GetModeOfGenericModeParameters(handleId));
  return E_OK;
}

/**********************************************************************************************************************
 *  BswM_Action_ESH_Action_EcuMGoToSelectedShutdownTarget_ECU1
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_Action_ESH_Action_EcuMGoToSelectedShutdownTarget_ECU1(BswM_HandleType handleId)
{
  BSWM_DUMMY_STATEMENT(handleId); /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */

  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BswM_3200 */
  (void)EcuM_GoToSelectedShutdownTarget();
  /*lint -restore */
  return E_OK;
}

/**********************************************************************************************************************
 *  BswM_Action_TimerControl
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_Action_TimerControl(BswM_HandleType handleId)
{

  BswM_UpdateTimer(BswM_GetTimerOfTimerControlParameters(handleId), BswM_GetValueOfTimerControlParameters(handleId));
  return E_OK;
}

/**********************************************************************************************************************
 *  BswM_Action_ESH_Action_OnEnterPostRun_ECU1
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_Action_ESH_Action_OnEnterPostRun_ECU1(BswM_HandleType handleId)
{
  BSWM_DUMMY_STATEMENT(handleId); /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */

  BswM_ESH_OnEnterPostRun();
  return E_OK;
}

/**********************************************************************************************************************
 *  BswM_Action_ESH_Action_OnEnterShutdown_ECU1
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_Action_ESH_Action_OnEnterShutdown_ECU1(BswM_HandleType handleId)
{
  BSWM_DUMMY_STATEMENT(handleId); /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */

  BswM_ESH_OnEnterShutdown();
  return E_OK;
}

/**********************************************************************************************************************
 *  BswM_Action_ESH_Action_OnEnterPrepShutdown_ECU1
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_Action_ESH_Action_OnEnterPrepShutdown_ECU1(BswM_HandleType handleId)
{
  BSWM_DUMMY_STATEMENT(handleId); /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */

  BswM_ESH_OnEnterPrepShutdown();
  return E_OK;
}

/**********************************************************************************************************************
 *  BswM_Action_ESH_Action_OnEnterWakeup_ECU1
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_Action_ESH_Action_OnEnterWakeup_ECU1(BswM_HandleType handleId)
{
  BSWM_DUMMY_STATEMENT(handleId); /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */

  BswM_ESH_OnEnterWakeup();
  return E_OK;
}

/**********************************************************************************************************************
 *  BswM_Action_ESH_Action_OnEnterRun_ECU1
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_Action_ESH_Action_OnEnterRun_ECU1(BswM_HandleType handleId)
{
  BSWM_DUMMY_STATEMENT(handleId); /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */

  BswM_ESH_OnEnterRun();
  return E_OK;
}

/**********************************************************************************************************************
 *  BswM_Action_ESH_Action_OnEnterWaitForNvm_ECU1
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_Action_ESH_Action_OnEnterWaitForNvm_ECU1(BswM_HandleType handleId)
{
  BSWM_DUMMY_STATEMENT(handleId); /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */

  BswM_ESH_OnEnterWaitForNvm();
  return E_OK;
}

/**********************************************************************************************************************
 *  BswM_Action_ESH_Action_EnterExclusiveArea_ECU1
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_Action_ESH_Action_EnterExclusiveArea_ECU1(BswM_HandleType handleId)
{
  BSWM_DUMMY_STATEMENT(handleId); /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */

  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BswM_3200 */
  SchM_Enter_BswM_BSWM_EXCLUSIVE_AREA_0();
  /*lint -restore */
  return E_OK;
}

/**********************************************************************************************************************
 *  BswM_Action_ESH_Action_ExitExclusiveArea_ECU1
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_Action_ESH_Action_ExitExclusiveArea_ECU1(BswM_HandleType handleId)
{
  BSWM_DUMMY_STATEMENT(handleId); /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */

  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BswM_3200 */
  SchM_Exit_BswM_BSWM_EXCLUSIVE_AREA_0();
  /*lint -restore */
  return E_OK;
}

/**********************************************************************************************************************
 *  BswM_Action_INIT_Action_EnableInterrupts_ECU1
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_Action_INIT_Action_EnableInterrupts_ECU1(BswM_HandleType handleId)
{
  BSWM_DUMMY_STATEMENT(handleId); /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */

  BswM_AL_SetProgrammableInterrupts();
  return E_OK;
}

/**********************************************************************************************************************
 *  BswM_Action_INIT_Action_CanXcp_Init_ECU1
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_Action_INIT_Action_CanXcp_Init_ECU1(BswM_HandleType handleId)
{
  BSWM_DUMMY_STATEMENT(handleId); /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */

  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BswM_3200 */
  CanXcp_Init(EcuM_GlobalPCConfig_Ptr->CfgPtr_CanXcp_Init);
  /*lint -restore */
  return E_OK;
}

/**********************************************************************************************************************
 *  BswM_Action_INIT_Action_Xcp_Init_ECU1
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_Action_INIT_Action_Xcp_Init_ECU1(BswM_HandleType handleId)
{
  BSWM_DUMMY_STATEMENT(handleId); /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */

  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BswM_3200 */
  Xcp_Init();
  /*lint -restore */
  return E_OK;
}

/**********************************************************************************************************************
 *  BswM_Action_BswM_DiagcMgrPwrDwn_ECU1
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_Action_BswM_DiagcMgrPwrDwn_ECU1(BswM_HandleType handleId)
{
  BSWM_DUMMY_STATEMENT(handleId); /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */

  BswM_DiagcMgrPwrDwn();
  return E_OK;
}

/**********************************************************************************************************************
 *  BswM_Action_BswM_FinalizeShtdwn_ECU1
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_Action_BswM_FinalizeShtdwn_ECU1(BswM_HandleType handleId)
{
  BSWM_DUMMY_STATEMENT(handleId); /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */

  BswM_FinalizeShtdwn();
  return E_OK;
}

/**********************************************************************************************************************
 *  BswM_Action_BswM_SHUTDOWN_NvMWriteAll_ECU1
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_Action_BswM_SHUTDOWN_NvMWriteAll_ECU1(BswM_HandleType handleId)
{
  BSWM_DUMMY_STATEMENT(handleId); /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */

  BswM_SHUTDOWN_NvMWriteAll();
  return E_OK;
}

/**********************************************************************************************************************
 *  BswM_Action_BswM_PrepShtdwn_ECU1
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_Action_BswM_PrepShtdwn_ECU1(BswM_HandleType handleId)
{
  BSWM_DUMMY_STATEMENT(handleId); /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */

  BswM_PrepShtdwn();
  return E_OK;
}

/**********************************************************************************************************************
 *  BswM_Action_INIT_Action_FlsMem_Init_ECU1
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_Action_INIT_Action_FlsMem_Init_ECU1(BswM_HandleType handleId)
{
  BSWM_DUMMY_STATEMENT(handleId); /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */

  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BswM_3200 */
  FlsMemInit2();
  /*lint -restore */
  return E_OK;
}

/**********************************************************************************************************************
 *  BswM_Action_INIT_Action_GuardCfgAndDiagc_Init_ECU1
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_Action_INIT_Action_GuardCfgAndDiagc_Init_ECU1(BswM_HandleType handleId)
{
  BSWM_DUMMY_STATEMENT(handleId); /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */

  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BswM_3200 */
  GuardCfgAndDiagcInit1();
  /*lint -restore */
  return E_OK;
}

/**********************************************************************************************************************
 *  BswM_Action_INIT_Action_SyncCrc_Init_ECU1
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_Action_INIT_Action_SyncCrc_Init_ECU1(BswM_HandleType handleId)
{
  BSWM_DUMMY_STATEMENT(handleId); /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */

  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BswM_3200 */
  SyncCrcInit0();
  /*lint -restore */
  return E_OK;
}

/**********************************************************************************************************************
 *  BswM_Action_ComMAllowCom
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_Action_ComMAllowCom(BswM_HandleType handleId)
{

  ComM_CommunicationAllowed(BswM_GetChannelOfComMAllowComParameters(handleId), BswM_GetAllowedOfComMAllowComParameters(handleId));
  return E_OK;
}

/**********************************************************************************************************************
 *  BswM_Action_INIT_Action_CanNm_Init_ECU1
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_Action_INIT_Action_CanNm_Init_ECU1(BswM_HandleType handleId)
{
  BSWM_DUMMY_STATEMENT(handleId); /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */

  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BswM_3200 */
  CanNm_Init(CanNm_Config_Ptr);
  /*lint -restore */
  return E_OK;
}

/**********************************************************************************************************************
 *  BswM_Action_INIT_Action_Nm_Init_ECU1
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_Action_INIT_Action_Nm_Init_ECU1(BswM_HandleType handleId)
{
  BSWM_DUMMY_STATEMENT(handleId); /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */

  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BswM_3200 */
  Nm_Init();
  /*lint -restore */
  return E_OK;
}

/**********************************************************************************************************************
 *  BswM_Action_ComDMControl
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_Action_ComDMControl(BswM_HandleType handleId)
{

  BswM_SizeOfComDMControlSubParametersType idx;
  BSWM_DUMMY_STATEMENT(handleId); /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */
  
  for(idx = BswM_GetComDMControlSubParametersStartIdxOfComDMControlParameters(handleId); idx < BswM_GetComDMControlSubParametersEndIdxOfComDMControlParameters(handleId); idx++)
  {
    BswM_SetIpduDMGroup(BswM_GetIpduGroupIdOfComDMControlSubParameters(idx), BswM_GetBitValOfComDMControlSubParameters(idx)); /* PRQA S 3109 */ /* MD_BswM_3109 */ /* SBSW_BSWM_IPDUGROUPVECTORCALL */
  }
  BswM_MarkDmControlInvocation();
  return E_OK;
}

/**********************************************************************************************************************
 *  BswM_Action_ComPduGroupSwitch
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_Action_ComPduGroupSwitch(BswM_HandleType handleId)
{

  BswM_SizeOfComPduGroupSwitchSubParametersType idx;
  BswM_SizeOfComPduGroupSwitchSubParametersType idxControl;
  for(idx = BswM_GetComPduGroupSwitchSubParametersStartIdxOfComPduGroupSwitchParameters(handleId); idx < BswM_GetComPduGroupSwitchSubParametersEndIdxOfComPduGroupSwitchParameters(handleId); idx++)
  {
    BswM_SetIpduGroup(BswM_GetIpduGroupIdOfComPduGroupSwitchSubParameters(idx), BswM_GetBitValOfComPduGroupSwitchSubParameters(idx)); /* PRQA S 3109 */ /* MD_BswM_3109 */ /* SBSW_BSWM_IPDUGROUPVECTORCALL */
    BswM_SetIpduDMGroup(BswM_GetIpduGroupIdOfComPduGroupSwitchSubParameters(idx), BswM_GetBitValOfComPduGroupSwitchSubParameters(idx)); /* PRQA S 3109 */ /* MD_BswM_3109 */ /* SBSW_BSWM_IPDUGROUPVECTORCALL */
  }
  if(BswM_GetControlOfComPduGroupSwitchParameters(handleId) != BSWM_GROUPCONTROL_NORMAL)
  {
    for(idxControl = BswM_GetComPduGroupSwitchSubParametersStartIdxOfComPduGroupSwitchParameters(handleId); idxControl < BswM_GetComPduGroupSwitchSubParametersEndIdxOfComPduGroupSwitchParameters(handleId); idxControl++)
    {
      BswM_SetIpduReinitGroup(BswM_GetIpduGroupIdOfComPduGroupSwitchSubParameters(idxControl), BswM_GetBitValOfComPduGroupSwitchSubParameters(idxControl)); /* PRQA S 3109 */ /* MD_BswM_3109 */ /* SBSW_BSWM_IPDUGROUPVECTORCALL */
    }
  }
  BswM_MarkPduGroupControlInvocation(BswM_GetControlOfComPduGroupSwitchParameters(handleId));
  return E_OK;
}

/**********************************************************************************************************************
 *  BswM_Action_ESH_Action_ComMCheckPendingRequests_ECU1_ECU1
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_Action_ESH_Action_ComMCheckPendingRequests_ECU1_ECU1(BswM_HandleType handleId)
{
  BSWM_DUMMY_STATEMENT(handleId); /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */

  ESH_ComM_CheckPendingRequests_ECU1();
  return E_OK;
}

/**********************************************************************************************************************
 *  BswM_Action_INIT_Action_Dem_SetOperationCycleState_ECU1
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_Action_INIT_Action_Dem_SetOperationCycleState_ECU1(BswM_HandleType handleId)
{
  BSWM_DUMMY_STATEMENT(handleId); /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */

  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BswM_3200 */
  Dem_SetOperationCycleState(Dem_IgnitionCycle, DEM_CYCLE_STATE_START);
  /*lint -restore */
  return E_OK;
}

/**********************************************************************************************************************
 *  BswM_Action_NmControl
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_Action_NmControl(BswM_HandleType handleId)
{

  Std_ReturnType retVal = E_OK;
  if(BswM_GetControlOfNmControlParameters(handleId) != 0u)
  {
    retVal = Nm_EnableCommunication(BswM_GetChannelOfNmControlParameters(handleId));
  }
  else 
  {
    retVal = Nm_DisableCommunication(BswM_GetChannelOfNmControlParameters(handleId));
  }
  return retVal;
}

/**********************************************************************************************************************
 *  BswM_Action_INIT_Action_CanNm_NetworkRequest_ECU1
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_Action_INIT_Action_CanNm_NetworkRequest_ECU1(BswM_HandleType handleId)
{
  BSWM_DUMMY_STATEMENT(handleId); /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */

  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BswM_3200 */
  CanNm_NetworkRequest(0);
  /*lint -restore */
  return E_OK;
}

/**********************************************************************************************************************
 *  BswM_Action_ESH_Action_ComMCheckPendingRequests_ECU2_ECU2
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_Action_ESH_Action_ComMCheckPendingRequests_ECU2_ECU2(BswM_HandleType handleId)
{
  BSWM_DUMMY_STATEMENT(handleId); /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */

  ESH_ComM_CheckPendingRequests_ECU2();
  return E_OK;
}

/**********************************************************************************************************************
 *  BswMExpressionFunctions
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  BswM_ExpFct_ESH_LE_RunToPostRun_ECU1
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(uint8, BSWM_CODE) BswM_ExpFct_ESH_LE_RunToPostRun_ECU1(void)
{
  /* PRQA S 3415 1 */ /* MD_MSR_12.4 */
  return (uint8)(((BswM_GetGenericState(1) == BSWM_GENERICVALUE_ESH_State_ESH_RUN) && (BswM_ExpFct_ESH_LE_AllChannelsNoCom_ECU1() != 0u) && (BswM_ExpFct_ESH_LE_RunReleased_ECU1() != 0u) && (BswM_GetTimerState(0) == BSWM_TIMER_EXPIRED)) ? 1u : 0u);
}

/**********************************************************************************************************************
 *  BswM_ExpFct_ESH_LE_RunReleased_ECU1
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(uint8, BSWM_CODE) BswM_ExpFct_ESH_LE_RunReleased_ECU1(void)
{
  return (uint8)(((Request_ESH_RunRequest_0_requestedMode == RELEASED) && (Request_ESH_RunRequest_1_requestedMode == RELEASED)) ? 1u : 0u);
}

/**********************************************************************************************************************
 *  BswM_ExpFct_ESH_LE_WaitForNvMToShutdown_ECU1
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(uint8, BSWM_CODE) BswM_ExpFct_ESH_LE_WaitForNvMToShutdown_ECU1(void)
{
  /* PRQA S 3415 1 */ /* MD_MSR_12.4 */
  return (uint8)(((BswM_GetGenericState(1) == BSWM_GENERICVALUE_ESH_State_ESH_WAIT_FOR_NVM) && (BswM_ExpFct_ESH_LE_NoWakeup_ECU1() != 0u)) ? 1u : 0u);
}

/**********************************************************************************************************************
 *  BswM_ExpFct_ESH_LE_NoWakeup_ECU1
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(uint8, BSWM_CODE) BswM_ExpFct_ESH_LE_NoWakeup_ECU1(void)
{
  return (uint8)(((EcuM_GetValidatedWakeupEvents() == 0u) && (BswM_GetGenericState(2) == BSWM_GENERICVALUE_ESH_ComMPendingRequests_ESH_COMM_NO_REQUEST)) ? 1u : 0u);
}

/**********************************************************************************************************************
 *  BswM_ExpFct_ESH_LE_WakeupToPrepShutdown_ECU1
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(uint8, BSWM_CODE) BswM_ExpFct_ESH_LE_WakeupToPrepShutdown_ECU1(void)
{
  /* PRQA S 3415 1 */ /* MD_MSR_12.4 */
  return (uint8)(((BswM_GetGenericState(1) == BSWM_GENERICVALUE_ESH_State_ESH_WAKEUP) && (EcuM_GetPendingWakeupEvents() == 0u) && (BswM_ExpFct_ESH_LE_NoWakeup_ECU1() != 0u)) ? 1u : 0u);
}

/**********************************************************************************************************************
 *  BswM_ExpFct_ESH_LE_WaitForNvMToWakeup_ECU1
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(uint8, BSWM_CODE) BswM_ExpFct_ESH_LE_WaitForNvMToWakeup_ECU1(void)
{
  /* PRQA S 3415 1 */ /* MD_MSR_12.4 */
  return (uint8)(((BswM_GetGenericState(1) == BSWM_GENERICVALUE_ESH_State_ESH_WAIT_FOR_NVM) && (BswM_ExpFct_ESH_LE_ValidWakeup_ECU1() != 0u)) ? 1u : 0u);
}

/**********************************************************************************************************************
 *  BswM_ExpFct_ESH_LE_ValidWakeup_ECU1
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(uint8, BSWM_CODE) BswM_ExpFct_ESH_LE_ValidWakeup_ECU1(void)
{
  return (uint8)(((EcuM_GetValidatedWakeupEvents() != 0u) || (BswM_GetGenericState(2) == BSWM_GENERICVALUE_ESH_ComMPendingRequests_ESH_COMM_PENDING_REQUEST)) ? 1u : 0u);
}

/**********************************************************************************************************************
 *  BswM_ExpFct_ESH_LE_WakeupToRun_ECU1
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(uint8, BSWM_CODE) BswM_ExpFct_ESH_LE_WakeupToRun_ECU1(void)
{
  /* PRQA S 3415 1 */ /* MD_MSR_12.4 */
  return (uint8)(((BswM_GetGenericState(1) == BSWM_GENERICVALUE_ESH_State_ESH_WAKEUP) && (BswM_ExpFct_ESH_LE_ValidWakeup_ECU1() != 0u)) ? 1u : 0u);
}

/**********************************************************************************************************************
 *  BswM_ExpFct_ESH_LE_InitToWakeup_ECU1
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(uint8, BSWM_CODE) BswM_ExpFct_ESH_LE_InitToWakeup_ECU1(void)
{
  return (uint8)((BswM_GetGenericState(1) == BSWM_GENERICVALUE_ESH_State_ESH_INIT) ? 1u : 0u);
}

/**********************************************************************************************************************
 *  BswM_ExpFct_ESH_LE_PostRunToPrep_ECU1
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(uint8, BSWM_CODE) BswM_ExpFct_ESH_LE_PostRunToPrep_ECU1(void)
{
  return (uint8)((BswM_ExpFct_ESH_LE_PostRunReleased_ECU1() != 0u) ? 1u : 0u);
}

/**********************************************************************************************************************
 *  BswM_ExpFct_ESH_LE_PostRunReleased_ECU1
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(uint8, BSWM_CODE) BswM_ExpFct_ESH_LE_PostRunReleased_ECU1(void)
{
  return (uint8)(((Request_ESH_PostRunRequest_0_requestedMode == RELEASED) && (Request_ESH_PostRunRequest_1_requestedMode == RELEASED)) ? 1u : 0u);
}

/**********************************************************************************************************************
 *  BswM_ExpFct_ESH_LE_RunRequestsOrWakeup_ECU1
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(uint8, BSWM_CODE) BswM_ExpFct_ESH_LE_RunRequestsOrWakeup_ECU1(void)
{
  /* PRQA S 3415 1 */ /* MD_MSR_12.4 */
  return (uint8)(((BswM_ExpFct_ESH_LE_RunRequested_ECU1() != 0u) || (BswM_ExpFct_ESH_LE_ValidWakeup_ECU1() != 0u)) ? 1u : 0u);
}

/**********************************************************************************************************************
 *  BswM_ExpFct_ESH_LE_RunRequested_ECU1
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(uint8, BSWM_CODE) BswM_ExpFct_ESH_LE_RunRequested_ECU1(void)
{
  return (uint8)(((Request_ESH_RunRequest_0_requestedMode == REQUESTED) || (Request_ESH_RunRequest_1_requestedMode == REQUESTED)) ? 1u : 0u);
}

/**********************************************************************************************************************
 *  BswM_ExpFct_ESH_LE_PostRun_ECU1
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(uint8, BSWM_CODE) BswM_ExpFct_ESH_LE_PostRun_ECU1(void)
{
  return (uint8)(((BswM_GetGenericState(1) == BSWM_GENERICVALUE_ESH_State_ESH_POST_RUN) && (BswM_GetTimerState(0) == BSWM_TIMER_EXPIRED)) ? 1u : 0u);
}

/**********************************************************************************************************************
 *  BswM_ExpFct_ESH_LE_PrepShutdownToWaitForNvM_ECU1
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(uint8, BSWM_CODE) BswM_ExpFct_ESH_LE_PrepShutdownToWaitForNvM_ECU1(void)
{
  return (uint8)((BswM_GetGenericState(1) == BSWM_GENERICVALUE_ESH_State_ESH_PREP_SHUTDOWN) ? 1u : 0u);
}

/**********************************************************************************************************************
 *  BswM_ExpFct_ESH_LE_AllChannelsNoCom_ECU1
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(uint8, BSWM_CODE) BswM_ExpFct_ESH_LE_AllChannelsNoCom_ECU1(void)
{
  return (uint8)((BswM_GetComMChannelState(0) == COMM_NO_COMMUNICATION) ? 1u : 0u);
}

/**********************************************************************************************************************
 *  BswM_ExpFct_ESH_LE_ComMNoPendingRequests_ECU1
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(uint8, BSWM_CODE) BswM_ExpFct_ESH_LE_ComMNoPendingRequests_ECU1(void)
{
  return (uint8)((BswM_GetGenericState(2) == BSWM_GENERICVALUE_ESH_ComMPendingRequests_ESH_COMM_NO_REQUEST) ? 1u : 0u);
}

/**********************************************************************************************************************
 *  BswM_ExpFct_Nxtr_LE_EnterShutdown_ECU1
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(uint8, BSWM_CODE) BswM_ExpFct_Nxtr_LE_EnterShutdown_ECU1(void)
{
  return (uint8)((Rte_SysStMod_SysSt_Val == 1u) ? 1u : 0u);
}

/**********************************************************************************************************************
 *  BswM_ExpFct_CC_LE_FD1_CAN_f26020e5_RX_DM_ECU1
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(uint8, BSWM_CODE) BswM_ExpFct_CC_LE_FD1_CAN_f26020e5_RX_DM_ECU1(void)
{
  return (uint8)((BswM_GetCanSMChannelState(0) == CANSM_BSWM_FULL_COMMUNICATION) ? 1u : 0u);
}

/**********************************************************************************************************************
 *  BswM_ExpFct_CC_LE_FD1_CAN_f26020e5_RX_ECU1
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(uint8, BSWM_CODE) BswM_ExpFct_CC_LE_FD1_CAN_f26020e5_RX_ECU1(void)
{
  return (uint8)((BswM_GetCanSMChannelState(0) != CANSM_BSWM_NO_COMMUNICATION) ? 1u : 0u);
}

/**********************************************************************************************************************
 *  BswM_ExpFct_LE_EcuIdn2_ECU1
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(uint8, BSWM_CODE) BswM_ExpFct_LE_EcuIdn2_ECU1(void)
{
  return (uint8)((Rte_DualEcuIdn_EcuId_Val == 2u) ? 1u : 0u);
}

/**********************************************************************************************************************
 *  BswM_ExpFct_LE_BswMEcuResetStart_ECU1
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(uint8, BSWM_CODE) BswM_ExpFct_LE_BswMEcuResetStart_ECU1(void)
{
  return (uint8)((BswM_Mode_Notification_SwcModeNotification_BswM_MDGP_BswMEcuResetMod_BswM_MDGP_BswMEcuResetMod == RTE_MODE_BswMEcuResetMod_EcuResetStarted) ? 1u : 0u);
}

/**********************************************************************************************************************
 *  BswM_ExpFct_ESH_LE_RunToPostRun_ECU2
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(uint8, BSWM_CODE) BswM_ExpFct_ESH_LE_RunToPostRun_ECU2(void)
{
  /* PRQA S 3415 1 */ /* MD_MSR_12.4 */
  return (uint8)(((BswM_GetGenericState(1) == BSWM_GENERICVALUE_ESH_State_ESH_RUN) && (BswM_ExpFct_ESH_LE_AllChannelsNoCom_ECU2() != 0u) && (BswM_ExpFct_ESH_LE_RunReleased_ECU2() != 0u) && (BswM_GetTimerState(0) == BSWM_TIMER_EXPIRED)) ? 1u : 0u);
}

/**********************************************************************************************************************
 *  BswM_ExpFct_ESH_LE_WaitForNvMToShutdown_ECU2
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(uint8, BSWM_CODE) BswM_ExpFct_ESH_LE_WaitForNvMToShutdown_ECU2(void)
{
  /* PRQA S 3415 1 */ /* MD_MSR_12.4 */
  return (uint8)(((BswM_GetGenericState(1) == BSWM_GENERICVALUE_ESH_State_ESH_WAIT_FOR_NVM) && (BswM_ExpFct_ESH_LE_NoWakeup_ECU2() != 0u)) ? 1u : 0u);
}

/**********************************************************************************************************************
 *  BswM_ExpFct_ESH_LE_WakeupToPrepShutdown_ECU2
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(uint8, BSWM_CODE) BswM_ExpFct_ESH_LE_WakeupToPrepShutdown_ECU2(void)
{
  /* PRQA S 3415 1 */ /* MD_MSR_12.4 */
  return (uint8)(((BswM_GetGenericState(1) == BSWM_GENERICVALUE_ESH_State_ESH_WAKEUP) && (EcuM_GetPendingWakeupEvents() == 0u) && (BswM_ExpFct_ESH_LE_NoWakeup_ECU2() != 0u)) ? 1u : 0u);
}

/**********************************************************************************************************************
 *  BswM_ExpFct_ESH_LE_WaitForNvMToWakeup_ECU2
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(uint8, BSWM_CODE) BswM_ExpFct_ESH_LE_WaitForNvMToWakeup_ECU2(void)
{
  /* PRQA S 3415 1 */ /* MD_MSR_12.4 */
  return (uint8)(((BswM_GetGenericState(1) == BSWM_GENERICVALUE_ESH_State_ESH_WAIT_FOR_NVM) && (BswM_ExpFct_ESH_LE_ValidWakeup_ECU2() != 0u)) ? 1u : 0u);
}

/**********************************************************************************************************************
 *  BswM_ExpFct_ESH_LE_WakeupToRun_ECU2
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(uint8, BSWM_CODE) BswM_ExpFct_ESH_LE_WakeupToRun_ECU2(void)
{
  /* PRQA S 3415 1 */ /* MD_MSR_12.4 */
  return (uint8)(((BswM_GetGenericState(1) == BSWM_GENERICVALUE_ESH_State_ESH_WAKEUP) && (BswM_ExpFct_ESH_LE_ValidWakeup_ECU2() != 0u)) ? 1u : 0u);
}

/**********************************************************************************************************************
 *  BswM_ExpFct_ESH_LE_PostRunToPrep_ECU2
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(uint8, BSWM_CODE) BswM_ExpFct_ESH_LE_PostRunToPrep_ECU2(void)
{
  return (uint8)((BswM_ExpFct_ESH_LE_PostRunReleased_ECU2() != 0u) ? 1u : 0u);
}

/**********************************************************************************************************************
 *  BswM_ExpFct_ESH_LE_RunRequestsOrWakeup_ECU2
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(uint8, BSWM_CODE) BswM_ExpFct_ESH_LE_RunRequestsOrWakeup_ECU2(void)
{
  /* PRQA S 3415 1 */ /* MD_MSR_12.4 */
  return (uint8)(((BswM_ExpFct_ESH_LE_RunRequested_ECU2() != 0u) || (BswM_ExpFct_ESH_LE_ValidWakeup_ECU2() != 0u)) ? 1u : 0u);
}



#define BSWM_STOP_SEC_CODE
/* PRQA S 5087 1 */ /* MD_MSR_19.1 */
#include "MemMap.h"

