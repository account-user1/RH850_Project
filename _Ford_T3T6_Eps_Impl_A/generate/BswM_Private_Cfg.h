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
 *              File: BswM_Private_Cfg.h
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


#if !defined(BSWM_PRIVATE_CFG_H)
#define BSWM_PRIVATE_CFG_H


/* -----------------------------------------------------------------------------
    &&&~ INCLUDE
 ----------------------------------------------------------------------------- */
#include "BswM_Cfg.h"

#include "Com.h" 
#include "Nm.h" 
#include "Rte_BswM.h" 
#include "EcuM_Init_PBCfg.h" 
#include "BswM_UserTypes.h" 
#include "Fee_30_SmallSector.h" 
#include "NvM.h" 
#include "Dem.h" 
#include "Rte_Main.h" 
#include "WdgM.h" 
#include "Can.h" 
#include "CanIf.h" 
#include "PduR.h" 
#include "CanSM_EcuM.h" 
#include "CanTp.h" 
#include "ComM.h" 
#include "Dcm.h" 
#include "EcuM.h" 
#include "SchM_BswM.h" 
#include "CanXcp.h" 
#include "Xcp.h" 
#include "CDD_FlsMem.h" 
#include "CDD_GuardCfgAndDiagc.h" 
#include "CDD_SyncCrc.h" 
#include "CanNm.h" 


/**********************************************************************************************************************
 *  GLOBAL CONSTANT MACROS
**********************************************************************************************************************/
#define BSWM_INIT_GEN                STD_ON 
#define BSWM_MODENOTIFICATIONFCT     STD_OFF 
#define BSWM_SWCMODEREQUESTUPDATEFCT STD_ON 


#if (BSWM_CONFIGURATION_VARIANT == BSWM_CONFIGURATION_VARIANT_PRECOMPILE && BSWM_POSTBUILD_VARIANT_SUPPORT == STD_OFF)
# define BSWM_FUNCTION_BASED STD_ON
#else
# define BSWM_FUNCTION_BASED STD_OFF
#endif

#if (defined (BSWM_ACTIONLISTSTRUEIDXOFRULES))
# if ((BSWM_ACTIONLISTSTRUEIDXOFRULES == STD_ON) && defined (BSWM_NO_ACTIONLISTSTRUEIDXOFRULES))
#  define BSWM_NO_ACTIONLIST BSWM_NO_ACTIONLISTSTRUEIDXOFRULES
# endif
#endif
#if (defined(BSWM_NO_ACTIONLIST))
#else
# if(defined(BSWM_ACTIONLISTSFALSEIDXOFRULES))
#  if ((BSWM_ACTIONLISTSFALSEIDXOFRULES == STD_ON) && defined (BSWM_NO_ACTIONLISTSFALSEIDXOFRULES))
#   define BSWM_NO_ACTIONLIST BSWM_NO_ACTIONLISTSFALSEIDXOFRULES
#  endif
# endif
#endif
#if (defined(BSWM_NO_ACTIONLIST))
#else
# if(defined(BSWM_SIZEOFACTIONLISTS))
#  if (BSWM_SIZEOFACTIONLISTS == STD_ON)
#   define BSWM_NO_ACTIONLIST BswM_GetSizeOfActionLists()
#  endif
# endif
#endif
#if (defined(BSWM_NO_ACTIONLIST))
#else
# define BSWM_NO_ACTIONLIST 255
#endif

#define BSWM_GROUPCONTROL_IDLE   (uint8)0x00u
#define BSWM_GROUPCONTROL_NORMAL (uint8)0x01u
#define BSWM_GROUPCONTROL_REINIT (uint8)0x02u
#define BSWM_GROUPCONTROL_DM     (uint8)0x04u




/**********************************************************************************************************************
 *  GLOBAL FUNCTION MACROS
**********************************************************************************************************************/
/** 
  \defgroup  DataAccessMacros  Data Access Macros
  \brief  generated data access macros to abstract the generated data from the code to read and write CONST or VAR data.
  \{
*/ 
  /* PRQA S 3453 MACROS_3453 */  /* MD_CSL_3453 */
/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: GLOBAL FUNCTION MACROS
**********************************************************************************************************************/
/** 
  \defgroup  BswMPCGetRootDataMacros  BswM Get Root Data Macros (PRE_COMPILE)
  \brief  These are used to get data pointers of root data.
  \{
*/ 
#define BswM_GetActionItemsOfPCConfig()                               BswM_ConfigPtr->ActionItemsOfPCConfig
#define BswM_GetActionsOfPCConfig()                                   BswM_ConfigPtr->ActionsOfPCConfig
#define BswM_GetExpressionsOfPCConfig()                               BswM_ConfigPtr->ExpressionsOfPCConfig
#define BswM_GetSizeOfComPduGroupSwitchParametersOfPCConfig()         BswM_ConfigPtr->SizeOfComPduGroupSwitchParametersOfPCConfig
#define BswM_GetSizeOfComPduGroupSwitchSubParametersOfPCConfig()      BswM_ConfigPtr->SizeOfComPduGroupSwitchSubParametersOfPCConfig
/** 
  \}
*/ 

/** 
  \defgroup  BswMPCGetConstantDuplicatedRootDataMacros  BswM Get Constant Duplicated Root Data Macros (PRE_COMPILE)
  \brief  These macros can be used to read deduplicated by constance root data elements.
  \{
*/ 
#define BswM_GetActionListQueueOfPCConfig()                           BswM_ActionListQueue.raw  /**< the pointer to BswM_ActionListQueue */
#define BswM_GetActionListsOfPCConfig()                               BswM_ActionLists  /**< the pointer to BswM_ActionLists */
#define BswM_GetCanSMChannelMappingOfPCConfig()                       BswM_CanSMChannelMapping  /**< the pointer to BswM_CanSMChannelMapping */
#define BswM_GetCanSMChannelStateOfPCConfig()                         BswM_CanSMChannelState  /**< the pointer to BswM_CanSMChannelState */
#define BswM_GetComDMControlParametersOfPCConfig()                    BswM_ComDMControlParameters  /**< the pointer to BswM_ComDMControlParameters */
#define BswM_GetComDMControlSubParametersOfPCConfig()                 BswM_ComDMControlSubParameters  /**< the pointer to BswM_ComDMControlSubParameters */
#define BswM_GetComMAllowComParametersOfPCConfig()                    BswM_ComMAllowComParameters  /**< the pointer to BswM_ComMAllowComParameters */
#define BswM_GetComMChannelMappingOfPCConfig()                        BswM_ComMChannelMapping  /**< the pointer to BswM_ComMChannelMapping */
#define BswM_GetComMChannelStateOfPCConfig()                          BswM_ComMChannelState  /**< the pointer to BswM_ComMChannelState */
#define BswM_GetComPduGroupSwitchParametersOfPCConfig()               BswM_ComPduGroupSwitchParameters  /**< the pointer to BswM_ComPduGroupSwitchParameters */
#define BswM_GetComPduGroupSwitchSubParametersOfPCConfig()            BswM_ComPduGroupSwitchSubParameters  /**< the pointer to BswM_ComPduGroupSwitchSubParameters */
#define BswM_GetDeferredRulesOfPCConfig()                             BswM_DeferredRules  /**< the pointer to BswM_DeferredRules */
#define BswM_GetGenericMappingOfPCConfig()                            BswM_GenericMapping  /**< the pointer to BswM_GenericMapping */
#define BswM_GetGenericModeParametersOfPCConfig()                     BswM_GenericModeParameters  /**< the pointer to BswM_GenericModeParameters */
#define BswM_GetGenericStateOfPCConfig()                              BswM_GenericState  /**< the pointer to BswM_GenericState */
#define BswM_GetImmediateUserOfPCConfig()                             BswM_ImmediateUser  /**< the pointer to BswM_ImmediateUser */
#define BswM_GetInitActionListsOfPCConfig()                           BswM_InitActionLists  /**< the pointer to BswM_InitActionLists */
#define BswM_GetInitValuesOfPCConfig()                                BswM_InitValues  /**< the pointer to BswM_InitValues */
#define BswM_GetInitializedOfPCConfig()                               BswM_Initialized  /**< the pointer to BswM_Initialized */
#define BswM_GetModeRequestQueueOfPCConfig()                          BswM_ModeRequestQueue  /**< the pointer to BswM_ModeRequestQueue */
#define BswM_GetNmControlParametersOfPCConfig()                       BswM_NmControlParameters  /**< the pointer to BswM_NmControlParameters */
#define BswM_GetRuleStatesOfPCConfig()                                BswM_RuleStates  /**< the pointer to BswM_RuleStates */
#define BswM_GetRulesIndOfPCConfig()                                  BswM_RulesInd  /**< the pointer to BswM_RulesInd */
#define BswM_GetRulesOfPCConfig()                                     BswM_Rules  /**< the pointer to BswM_Rules */
#define BswM_GetSizeOfActionItemsOfPCConfig()                         72U  /**< the number of accomplishable value elements in BswM_ActionItems */
#define BswM_GetSizeOfActionListsOfPCConfig()                         22U  /**< the number of accomplishable value elements in BswM_ActionLists */
#define BswM_GetSizeOfActionsOfPCConfig()                             47U  /**< the number of accomplishable value elements in BswM_Actions */
#define BswM_GetSizeOfCanSMChannelMappingOfPCConfig()                 1U  /**< the number of accomplishable value elements in BswM_CanSMChannelMapping */
#define BswM_GetSizeOfComDMControlParametersOfPCConfig()              2U  /**< the number of accomplishable value elements in BswM_ComDMControlParameters */
#define BswM_GetSizeOfComDMControlSubParametersOfPCConfig()           2U  /**< the number of accomplishable value elements in BswM_ComDMControlSubParameters */
#define BswM_GetSizeOfComMAllowComParametersOfPCConfig()              2U  /**< the number of accomplishable value elements in BswM_ComMAllowComParameters */
#define BswM_GetSizeOfComMChannelMappingOfPCConfig()                  1U  /**< the number of accomplishable value elements in BswM_ComMChannelMapping */
#define BswM_GetSizeOfDeferredRulesOfPCConfig()                       9U  /**< the number of accomplishable value elements in BswM_DeferredRules */
#define BswM_GetSizeOfExpressionsOfPCConfig()                         22U  /**< the number of accomplishable value elements in BswM_Expressions */
#define BswM_GetSizeOfGenericMappingOfPCConfig()                      3U  /**< the number of accomplishable value elements in BswM_GenericMapping */
#define BswM_GetSizeOfGenericModeParametersOfPCConfig()               6U  /**< the number of accomplishable value elements in BswM_GenericModeParameters */
#define BswM_GetSizeOfImmediateUserOfPCConfig()                       3U  /**< the number of accomplishable value elements in BswM_ImmediateUser */
#define BswM_GetSizeOfInitActionListsOfPCConfig()                     1U  /**< the number of accomplishable value elements in BswM_InitActionLists */
#define BswM_GetSizeOfInitValuesOfPCConfig()                          3U  /**< the number of accomplishable value elements in BswM_InitValues */
#define BswM_GetSizeOfNmControlParametersOfPCConfig()                 1U  /**< the number of accomplishable value elements in BswM_NmControlParameters */
#define BswM_GetSizeOfRulesIndOfPCConfig()                            11U  /**< the number of accomplishable value elements in BswM_RulesInd */
#define BswM_GetSizeOfRulesOfPCConfig()                               17U  /**< the number of accomplishable value elements in BswM_Rules */
#define BswM_GetSizeOfTimerControlParametersOfPCConfig()              1U  /**< the number of accomplishable value elements in BswM_TimerControlParameters */
#define BswM_GetSizeOfTimerStateOfPCConfig()                          1U  /**< the number of accomplishable value elements in BswM_TimerState */
#define BswM_GetSizeOfTimerValueOfPCConfig()                          1U  /**< the number of accomplishable value elements in BswM_TimerValue */
#define BswM_GetTimerControlParametersOfPCConfig()                    BswM_TimerControlParameters  /**< the pointer to BswM_TimerControlParameters */
#define BswM_GetTimerStateOfPCConfig()                                BswM_TimerState.raw  /**< the pointer to BswM_TimerState */
#define BswM_GetTimerValueOfPCConfig()                                BswM_TimerValue.raw  /**< the pointer to BswM_TimerValue */
/** 
  \}
*/ 

/** 
  \defgroup  BswMPCGetDuplicatedRootDataMacros  BswM Get Duplicated Root Data Macros (PRE_COMPILE)
  \brief  These macros can be used to read deduplicated root data elements.
  \{
*/ 
#define BswM_GetSizeOfActionListQueueOfPCConfig()                     BswM_GetSizeOfActionListsOfPCConfig()  /**< the number of accomplishable value elements in BswM_ActionListQueue */
#define BswM_GetSizeOfCanSMChannelStateOfPCConfig()                   BswM_GetSizeOfCanSMChannelMappingOfPCConfig()  /**< the number of accomplishable value elements in BswM_CanSMChannelState */
#define BswM_GetSizeOfComMChannelStateOfPCConfig()                    BswM_GetSizeOfComMChannelMappingOfPCConfig()  /**< the number of accomplishable value elements in BswM_ComMChannelState */
#define BswM_GetSizeOfGenericStateOfPCConfig()                        BswM_GetSizeOfGenericMappingOfPCConfig()  /**< the number of accomplishable value elements in BswM_GenericState */
#define BswM_GetSizeOfModeRequestQueueOfPCConfig()                    BswM_GetSizeOfImmediateUserOfPCConfig()  /**< the number of accomplishable value elements in BswM_ModeRequestQueue */
#define BswM_GetSizeOfRuleStatesOfPCConfig()                          BswM_GetSizeOfRulesOfPCConfig()  /**< the number of accomplishable value elements in BswM_RuleStates */
/** 
  \}
*/ 

/** 
  \defgroup  BswMPCGetDataMacros  BswM Get Data Macros (PRE_COMPILE)
  \brief  These macros can be used to read CONST and VAR data.
  \{
*/ 
#define BswM_GetActionsIdxOfActionItems(Index)                        (BswM_GetActionItemsOfPCConfig()[(Index)].ActionsIdxOfActionItems)
#define BswM_GetParameterIdxOfActionItems(Index)                      (BswM_GetActionItemsOfPCConfig()[(Index)].ParameterIdxOfActionItems)
#define BswM_GetActionListQueue(Index)                                (BswM_GetActionListQueueOfPCConfig()[(Index)])
#define BswM_GetActionItemsEndIdxOfActionLists(Index)                 (BswM_GetActionListsOfPCConfig()[(Index)].ActionItemsEndIdxOfActionLists)
#define BswM_GetActionItemsStartIdxOfActionLists(Index)               (BswM_GetActionListsOfPCConfig()[(Index)].ActionItemsStartIdxOfActionLists)
#define BswM_GetMaskedBitsOfActionLists(Index)                        (BswM_GetActionListsOfPCConfig()[(Index)].MaskedBitsOfActionLists)
#define BswM_GetActions(Index)                                        (BswM_GetActionsOfPCConfig()[(Index)])
#define BswM_GetCanSMChannelState(Index)                              (BswM_GetCanSMChannelStateOfPCConfig()[(Index)])
#define BswM_GetComDMControlSubParametersEndIdxOfComDMControlParameters(Index) (BswM_GetComDMControlParametersOfPCConfig()[(Index)].ComDMControlSubParametersEndIdxOfComDMControlParameters)
#define BswM_GetComDMControlSubParametersStartIdxOfComDMControlParameters(Index) (BswM_GetComDMControlParametersOfPCConfig()[(Index)].ComDMControlSubParametersStartIdxOfComDMControlParameters)
#define BswM_GetBitValOfComDMControlSubParameters(Index)              (BswM_GetComDMControlSubParametersOfPCConfig()[(Index)].BitValOfComDMControlSubParameters)
#define BswM_GetAllowedOfComMAllowComParameters(Index)                (BswM_GetComMAllowComParametersOfPCConfig()[(Index)].AllowedOfComMAllowComParameters)
#define BswM_GetComMChannelState(Index)                               (BswM_GetComMChannelStateOfPCConfig()[(Index)])
#define BswM_GetComPduGroupSwitchSubParametersEndIdxOfComPduGroupSwitchParameters(Index) (BswM_GetComPduGroupSwitchParametersOfPCConfig()[(Index)].ComPduGroupSwitchSubParametersEndIdxOfComPduGroupSwitchParameters)
#define BswM_GetComPduGroupSwitchSubParametersStartIdxOfComPduGroupSwitchParameters(Index) (BswM_GetComPduGroupSwitchParametersOfPCConfig()[(Index)].ComPduGroupSwitchSubParametersStartIdxOfComPduGroupSwitchParameters)
#define BswM_GetBitValOfComPduGroupSwitchSubParameters(Index)         (BswM_GetComPduGroupSwitchSubParametersOfPCConfig()[(Index)].BitValOfComPduGroupSwitchSubParameters)
#define BswM_GetIpduGroupIdOfComPduGroupSwitchSubParameters(Index)    (BswM_GetComPduGroupSwitchSubParametersOfPCConfig()[(Index)].IpduGroupIdOfComPduGroupSwitchSubParameters)
#define BswM_GetRulesIdxOfDeferredRules(Index)                        (BswM_GetDeferredRulesOfPCConfig()[(Index)].RulesIdxOfDeferredRules)
#define BswM_GetExpressions(Index)                                    (BswM_GetExpressionsOfPCConfig()[(Index)])
#define BswM_GetExternalIdOfGenericMapping(Index)                     (BswM_GetGenericMappingOfPCConfig()[(Index)].ExternalIdOfGenericMapping)
#define BswM_GetImmediateUserEndIdxOfGenericMapping(Index)            (BswM_GetGenericMappingOfPCConfig()[(Index)].ImmediateUserEndIdxOfGenericMapping)
#define BswM_GetImmediateUserStartIdxOfGenericMapping(Index)          (BswM_GetGenericMappingOfPCConfig()[(Index)].ImmediateUserStartIdxOfGenericMapping)
#define BswM_GetInitValueOfGenericMapping(Index)                      (BswM_GetGenericMappingOfPCConfig()[(Index)].InitValueOfGenericMapping)
#define BswM_GetModeOfGenericModeParameters(Index)                    (BswM_GetGenericModeParametersOfPCConfig()[(Index)].ModeOfGenericModeParameters)
#define BswM_GetUserOfGenericModeParameters(Index)                    (BswM_GetGenericModeParametersOfPCConfig()[(Index)].UserOfGenericModeParameters)
#define BswM_GetGenericState(Index)                                   (BswM_GetGenericStateOfPCConfig()[(Index)])
#define BswM_GetMaskedBitsOfImmediateUser(Index)                      (BswM_GetImmediateUserOfPCConfig()[(Index)].MaskedBitsOfImmediateUser)
#define BswM_GetRulesIndEndIdxOfImmediateUser(Index)                  (BswM_GetImmediateUserOfPCConfig()[(Index)].RulesIndEndIdxOfImmediateUser)
#define BswM_GetRulesIndStartIdxOfImmediateUser(Index)                (BswM_GetImmediateUserOfPCConfig()[(Index)].RulesIndStartIdxOfImmediateUser)
#define BswM_GetInitValues(Index)                                     (BswM_GetInitValuesOfPCConfig()[(Index)])
#define BswM_IsInitialized()                                          ((BswM_GetInitializedOfPCConfig()) != FALSE)
#define BswM_GetModeRequestQueue(Index)                               (BswM_GetModeRequestQueueOfPCConfig()[(Index)])
#define BswM_GetRuleStates(Index)                                     (BswM_GetRuleStatesOfPCConfig()[(Index)])
#define BswM_GetActionListsFalseIdxOfRules(Index)                     (BswM_GetRulesOfPCConfig()[(Index)].ActionListsFalseIdxOfRules)
#define BswM_GetActionListsTrueIdxOfRules(Index)                      (BswM_GetRulesOfPCConfig()[(Index)].ActionListsTrueIdxOfRules)
#define BswM_GetExpressionsIdxOfRules(Index)                          (BswM_GetRulesOfPCConfig()[(Index)].ExpressionsIdxOfRules)
#define BswM_GetIdOfRules(Index)                                      (BswM_GetRulesOfPCConfig()[(Index)].IdOfRules)
#define BswM_GetInitOfRules(Index)                                    (BswM_GetRulesOfPCConfig()[(Index)].InitOfRules)
#define BswM_GetMaskedBitsOfRules(Index)                              (BswM_GetRulesOfPCConfig()[(Index)].MaskedBitsOfRules)
#define BswM_GetRulesInd(Index)                                       (BswM_GetRulesIndOfPCConfig()[(Index)])
#define BswM_GetTimerState(Index)                                     (BswM_GetTimerStateOfPCConfig()[(Index)])
#define BswM_GetTimerValue(Index)                                     (BswM_GetTimerValueOfPCConfig()[(Index)])
/** 
  \}
*/ 

/** 
  \defgroup  BswMPCGetBitDataMacros  BswM Get Bit Data Macros (PRE_COMPILE)
  \brief  These macros can be used to read bitcoded data elements.
  \{
*/ 
#define BswM_IsConditionalOfActionLists(Index)                        (BSWM_CONDITIONALOFACTIONLISTS_MASK == (BswM_GetMaskedBitsOfActionLists(Index) & BSWM_CONDITIONALOFACTIONLISTS_MASK))  /**< If true, action list is executed on condition else on trigger. */
#define BswM_IsForcedOfImmediateUser(Index)                           (BSWM_FORCEDOFIMMEDIATEUSER_MASK == (BswM_GetMaskedBitsOfImmediateUser(Index) & BSWM_FORCEDOFIMMEDIATEUSER_MASK))  /**< Forced immediate request (will never be queued). */
#define BswM_IsOnInitOfImmediateUser(Index)                           (BSWM_ONINITOFIMMEDIATEUSER_MASK == (BswM_GetMaskedBitsOfImmediateUser(Index) & BSWM_ONINITOFIMMEDIATEUSER_MASK))  /**< Arbitrate depending rules on initialization. */
/** 
  \}
*/ 

/** 
  \defgroup  BswMPCGetDeduplicatedDataMacros  BswM Get Deduplicated Data Macros (PRE_COMPILE)
  \brief  These macros can be used to read deduplicated data elements.
  \{
*/ 
#define BswM_IsParameterUsedOfActionItems(Index)                      (((boolean)(BswM_GetParameterIdxOfActionItems(Index) != BSWM_NO_PARAMETERIDXOFACTIONITEMS)) != FALSE)  /**< TRUE, if the 0:1 relation has minimum 1 relation pointing to BswM_ComMAllowComParameters,BswM_ComMModeLimitationParameters,BswM_ComMModeSwitchParameters,BswM_ComDMControlParameters,BswM_EcuMSelectShutdownTargetParameters,BswM_EcuMStateSwitchParameters,BswM_LinScheduleRequestParameters,BswM_NmControlParameters,BswM_ComSwitchIPduModeParameters,BswM_ComPduGroupSwitchParameters,BswM_ComPduGroupHandlingParameters,BswM_ComDMHandlingParameters,BswM_ComTriggerIPduSendParameters,BswM_PduRouterControlParameters,BswM_TimerControlParameters,BswM_GenericModeParameters,BswM_J1939DcmStateParameters,BswM_J1939RmStateParameters,BswM_SdClientParameters,BswM_SdConsumedParameters,BswM_SdServerParameters,BswM_RuleControlParameters,BswM_ActionLists,BswM_Rules */
#define BswM_IsActionItemsUsedOfActionLists(Index)                    (((TRUE)) != FALSE)  /**< TRUE, if the 0:n relation has 1 relation pointing to BswM_ActionItems */
#define BswM_GetExternalIdOfCanSMChannelMapping(Index)                ComMConf_ComMChannel_FD1_CAN_f26020e5  /**< External id of BswMCanSMIndication. */
#define BswM_GetImmediateUserEndIdxOfCanSMChannelMapping(Index)       1U  /**< the end index of the 0:n relation pointing to BswM_ImmediateUser */
#define BswM_GetImmediateUserStartIdxOfCanSMChannelMapping(Index)     0U  /**< the start index of the 0:n relation pointing to BswM_ImmediateUser */
#define BswM_IsImmediateUserUsedOfCanSMChannelMapping(Index)          (((TRUE)) != FALSE)  /**< TRUE, if the 0:n relation has 1 relation pointing to BswM_ImmediateUser */
#define BswM_GetInitValueOfCanSMChannelMapping(Index)                 CANSM_BSWM_NO_COMMUNICATION  /**< Initialization value of port. */
#define BswM_IsComDMControlSubParametersUsedOfComDMControlParameters(Index) (((TRUE)) != FALSE)  /**< TRUE, if the 0:n relation has 1 relation pointing to BswM_ComDMControlSubParameters */
#define BswM_GetIpduGroupIdOfComDMControlSubParameters(Index)         ComConf_ComIPduGroup_PSCM_FD_oFD1_CAN_Rx_fcef2243
#define BswM_GetChannelOfComMAllowComParameters(Index)                ComMConf_ComMChannel_FD1_CAN_f26020e5
#define BswM_GetExternalIdOfComMChannelMapping(Index)                 ComMConf_ComMChannel_FD1_CAN_f26020e5  /**< External id of BswMComMIndication. */
#define BswM_GetInitValueOfComMChannelMapping(Index)                  COMM_NO_COMMUNICATION  /**< Initialization value of port. */
#define BswM_IsComPduGroupSwitchSubParametersUsedOfComPduGroupSwitchParameters(Index) (((TRUE)) != FALSE)  /**< TRUE, if the 0:n relation has 1 relation pointing to BswM_ComPduGroupSwitchSubParameters */
#define BswM_GetControlOfComPduGroupSwitchParameters(Index)           BSWM_GROUPCONTROL_NORMAL
#define BswM_IsImmediateUserUsedOfGenericMapping(Index)               (((boolean)(BswM_GetImmediateUserStartIdxOfGenericMapping(Index) != BSWM_NO_IMMEDIATEUSERSTARTIDXOFGENERICMAPPING)) != FALSE)  /**< TRUE, if the 0:n relation has 1 relation pointing to BswM_ImmediateUser */
#define BswM_IsRulesIndUsedOfImmediateUser(Index)                     (((boolean)(BswM_GetRulesIndStartIdxOfImmediateUser(Index) != BSWM_NO_RULESINDSTARTIDXOFIMMEDIATEUSER)) != FALSE)  /**< TRUE, if the 0:n relation has 1 relation pointing to BswM_RulesInd */
#define BswM_GetInitActionLists(Index)                                0UL  /**< List of all action lists which shall be executed at end of Bswm_Init. */
#define BswM_GetChannelOfNmControlParameters(Index)                   ComMConf_ComMChannel_FD1_CAN_f26020e5
#define BswM_GetControlOfNmControlParameters(Index)                   0U
#define BswM_IsActionListsFalseUsedOfRules(Index)                     (((boolean)(BswM_GetActionListsFalseIdxOfRules(Index) != BSWM_NO_ACTIONLISTSFALSEIDXOFRULES)) != FALSE)  /**< TRUE, if the 0:1 relation has minimum 1 relation pointing to BswM_ActionLists */
#define BswM_IsActionListsTrueUsedOfRules(Index)                      (((TRUE)) != FALSE)  /**< TRUE, if the 0:1 relation has minimum 1 relation pointing to BswM_ActionLists */
#define BswM_GetSizeOfActionItems()                                   BswM_GetSizeOfActionItemsOfPCConfig()
#define BswM_GetSizeOfActionListQueue()                               BswM_GetSizeOfActionListQueueOfPCConfig()
#define BswM_GetSizeOfActionLists()                                   BswM_GetSizeOfActionListsOfPCConfig()
#define BswM_GetSizeOfActions()                                       BswM_GetSizeOfActionsOfPCConfig()
#define BswM_GetSizeOfCanSMChannelMapping()                           BswM_GetSizeOfCanSMChannelMappingOfPCConfig()
#define BswM_GetSizeOfCanSMChannelState()                             BswM_GetSizeOfCanSMChannelStateOfPCConfig()
#define BswM_GetSizeOfComDMControlParameters()                        BswM_GetSizeOfComDMControlParametersOfPCConfig()
#define BswM_GetSizeOfComDMControlSubParameters()                     BswM_GetSizeOfComDMControlSubParametersOfPCConfig()
#define BswM_GetSizeOfComMAllowComParameters()                        BswM_GetSizeOfComMAllowComParametersOfPCConfig()
#define BswM_GetSizeOfComMChannelMapping()                            BswM_GetSizeOfComMChannelMappingOfPCConfig()
#define BswM_GetSizeOfComMChannelState()                              BswM_GetSizeOfComMChannelStateOfPCConfig()
#define BswM_GetSizeOfComPduGroupSwitchParameters()                   BswM_GetSizeOfComPduGroupSwitchParametersOfPCConfig()
#define BswM_GetSizeOfComPduGroupSwitchSubParameters()                BswM_GetSizeOfComPduGroupSwitchSubParametersOfPCConfig()
#define BswM_GetSizeOfDeferredRules()                                 BswM_GetSizeOfDeferredRulesOfPCConfig()
#define BswM_GetSizeOfExpressions()                                   BswM_GetSizeOfExpressionsOfPCConfig()
#define BswM_GetSizeOfGenericMapping()                                BswM_GetSizeOfGenericMappingOfPCConfig()
#define BswM_GetSizeOfGenericModeParameters()                         BswM_GetSizeOfGenericModeParametersOfPCConfig()
#define BswM_GetSizeOfGenericState()                                  BswM_GetSizeOfGenericStateOfPCConfig()
#define BswM_GetSizeOfImmediateUser()                                 BswM_GetSizeOfImmediateUserOfPCConfig()
#define BswM_GetSizeOfInitActionLists()                               BswM_GetSizeOfInitActionListsOfPCConfig()
#define BswM_GetSizeOfInitValues()                                    BswM_GetSizeOfInitValuesOfPCConfig()
#define BswM_GetSizeOfModeRequestQueue()                              BswM_GetSizeOfModeRequestQueueOfPCConfig()
#define BswM_GetSizeOfNmControlParameters()                           BswM_GetSizeOfNmControlParametersOfPCConfig()
#define BswM_GetSizeOfRuleStates()                                    BswM_GetSizeOfRuleStatesOfPCConfig()
#define BswM_GetSizeOfRules()                                         BswM_GetSizeOfRulesOfPCConfig()
#define BswM_GetSizeOfRulesInd()                                      BswM_GetSizeOfRulesIndOfPCConfig()
#define BswM_GetSizeOfTimerControlParameters()                        BswM_GetSizeOfTimerControlParametersOfPCConfig()
#define BswM_GetSizeOfTimerState()                                    BswM_GetSizeOfTimerStateOfPCConfig()
#define BswM_GetSizeOfTimerValue()                                    BswM_GetSizeOfTimerValueOfPCConfig()
#define BswM_GetTimerOfTimerControlParameters(Index)                  BSWM_TMR_ESH_SelfRunRequestTimer
#define BswM_GetValueOfTimerControlParameters(Index)                  10UL
/** 
  \}
*/ 

/** 
  \defgroup  BswMPCSetDataMacros  BswM Set Data Macros (PRE_COMPILE)
  \brief  These macros can be used to write data.
  \{
*/ 
#define BswM_SetActionListQueue(Index, Value)                         BswM_GetActionListQueueOfPCConfig()[(Index)] = (Value)
#define BswM_SetCanSMChannelState(Index, Value)                       BswM_GetCanSMChannelStateOfPCConfig()[(Index)] = (Value)
#define BswM_SetComMChannelState(Index, Value)                        BswM_GetComMChannelStateOfPCConfig()[(Index)] = (Value)
#define BswM_SetGenericState(Index, Value)                            BswM_GetGenericStateOfPCConfig()[(Index)] = (Value)
#define BswM_SetInitialized(Value)                                    BswM_GetInitializedOfPCConfig() = (Value)
#define BswM_SetModeRequestQueue(Index, Value)                        BswM_GetModeRequestQueueOfPCConfig()[(Index)] = (Value)
#define BswM_SetRuleStates(Index, Value)                              BswM_GetRuleStatesOfPCConfig()[(Index)] = (Value)
#define BswM_SetTimerState(Index, Value)                              BswM_GetTimerStateOfPCConfig()[(Index)] = (Value)
#define BswM_SetTimerValue(Index, Value)                              BswM_GetTimerValueOfPCConfig()[(Index)] = (Value)
/** 
  \}
*/ 

/** 
  \defgroup  BswMPCHasMacros  BswM Has Macros (PRE_COMPILE)
  \brief  These macros can be used to detect at runtime a deactivated piece of information. TRUE in the CONFIGURATION_VARIANT PRE-COMPILE, TRUE or FALSE in the CONFIGURATION_VARIANT POST-BUILD.
  \{
*/ 
#define BswM_HasActionItems()                                         (BswM_GetActionItemsOfPCConfig() != NULL_PTR)
#define BswM_HasActionsIdxOfActionItems()                             (TRUE != FALSE)
#define BswM_HasParameterIdxOfActionItems()                           (TRUE != FALSE)
#define BswM_HasParameterUsedOfActionItems()                          (TRUE != FALSE)
#define BswM_HasActionListQueue()                                     (TRUE != FALSE)
#define BswM_HasActionLists()                                         (TRUE != FALSE)
#define BswM_HasActionItemsEndIdxOfActionLists()                      (TRUE != FALSE)
#define BswM_HasActionItemsStartIdxOfActionLists()                    (TRUE != FALSE)
#define BswM_HasActionItemsUsedOfActionLists()                        (TRUE != FALSE)
#define BswM_HasConditionalOfActionLists()                            (TRUE != FALSE)
#define BswM_HasMaskedBitsOfActionLists()                             (TRUE != FALSE)
#define BswM_HasActions()                                             (BswM_GetActionsOfPCConfig() != NULL_PTR)
#define BswM_HasCanSMChannelMapping()                                 (TRUE != FALSE)
#define BswM_HasExternalIdOfCanSMChannelMapping()                     (TRUE != FALSE)
#define BswM_HasImmediateUserEndIdxOfCanSMChannelMapping()            (TRUE != FALSE)
#define BswM_HasImmediateUserStartIdxOfCanSMChannelMapping()          (TRUE != FALSE)
#define BswM_HasImmediateUserUsedOfCanSMChannelMapping()              (TRUE != FALSE)
#define BswM_HasInitValueOfCanSMChannelMapping()                      (TRUE != FALSE)
#define BswM_HasCanSMChannelState()                                   (TRUE != FALSE)
#define BswM_HasComDMControlParameters()                              (TRUE != FALSE)
#define BswM_HasComDMControlSubParametersEndIdxOfComDMControlParameters() (TRUE != FALSE)
#define BswM_HasComDMControlSubParametersStartIdxOfComDMControlParameters() (TRUE != FALSE)
#define BswM_HasComDMControlSubParametersUsedOfComDMControlParameters() (TRUE != FALSE)
#define BswM_HasComDMControlSubParameters()                           (TRUE != FALSE)
#define BswM_HasBitValOfComDMControlSubParameters()                   (TRUE != FALSE)
#define BswM_HasIpduGroupIdOfComDMControlSubParameters()              (TRUE != FALSE)
#define BswM_HasComMAllowComParameters()                              (TRUE != FALSE)
#define BswM_HasAllowedOfComMAllowComParameters()                     (TRUE != FALSE)
#define BswM_HasChannelOfComMAllowComParameters()                     (TRUE != FALSE)
#define BswM_HasComMChannelMapping()                                  (TRUE != FALSE)
#define BswM_HasExternalIdOfComMChannelMapping()                      (TRUE != FALSE)
#define BswM_HasInitValueOfComMChannelMapping()                       (TRUE != FALSE)
#define BswM_HasComMChannelState()                                    (TRUE != FALSE)
#define BswM_HasComPduGroupSwitchParameters()                         (TRUE != FALSE)
#define BswM_HasComPduGroupSwitchSubParametersEndIdxOfComPduGroupSwitchParameters() (TRUE != FALSE)
#define BswM_HasComPduGroupSwitchSubParametersStartIdxOfComPduGroupSwitchParameters() (TRUE != FALSE)
#define BswM_HasComPduGroupSwitchSubParametersUsedOfComPduGroupSwitchParameters() (TRUE != FALSE)
#define BswM_HasControlOfComPduGroupSwitchParameters()                (TRUE != FALSE)
#define BswM_HasComPduGroupSwitchSubParameters()                      (TRUE != FALSE)
#define BswM_HasBitValOfComPduGroupSwitchSubParameters()              (TRUE != FALSE)
#define BswM_HasIpduGroupIdOfComPduGroupSwitchSubParameters()         (TRUE != FALSE)
#define BswM_HasDeferredRules()                                       (TRUE != FALSE)
#define BswM_HasRulesIdxOfDeferredRules()                             (TRUE != FALSE)
#define BswM_HasExpressions()                                         (BswM_GetExpressionsOfPCConfig() != NULL_PTR)
#define BswM_HasGenericMapping()                                      (TRUE != FALSE)
#define BswM_HasExternalIdOfGenericMapping()                          (TRUE != FALSE)
#define BswM_HasImmediateUserEndIdxOfGenericMapping()                 (TRUE != FALSE)
#define BswM_HasImmediateUserStartIdxOfGenericMapping()               (TRUE != FALSE)
#define BswM_HasImmediateUserUsedOfGenericMapping()                   (TRUE != FALSE)
#define BswM_HasInitValueOfGenericMapping()                           (TRUE != FALSE)
#define BswM_HasGenericModeParameters()                               (TRUE != FALSE)
#define BswM_HasModeOfGenericModeParameters()                         (TRUE != FALSE)
#define BswM_HasUserOfGenericModeParameters()                         (TRUE != FALSE)
#define BswM_HasGenericState()                                        (TRUE != FALSE)
#define BswM_HasImmediateUser()                                       (TRUE != FALSE)
#define BswM_HasForcedOfImmediateUser()                               (TRUE != FALSE)
#define BswM_HasMaskedBitsOfImmediateUser()                           (TRUE != FALSE)
#define BswM_HasOnInitOfImmediateUser()                               (TRUE != FALSE)
#define BswM_HasRulesIndEndIdxOfImmediateUser()                       (TRUE != FALSE)
#define BswM_HasRulesIndStartIdxOfImmediateUser()                     (TRUE != FALSE)
#define BswM_HasRulesIndUsedOfImmediateUser()                         (TRUE != FALSE)
#define BswM_HasInitActionLists()                                     (TRUE != FALSE)
#define BswM_HasInitValues()                                          (TRUE != FALSE)
#define BswM_HasInitialized()                                         (TRUE != FALSE)
#define BswM_HasModeRequestQueue()                                    (TRUE != FALSE)
#define BswM_HasNmControlParameters()                                 (TRUE != FALSE)
#define BswM_HasChannelOfNmControlParameters()                        (TRUE != FALSE)
#define BswM_HasControlOfNmControlParameters()                        (TRUE != FALSE)
#define BswM_HasRuleStates()                                          (TRUE != FALSE)
#define BswM_HasRules()                                               (TRUE != FALSE)
#define BswM_HasActionListsFalseIdxOfRules()                          (TRUE != FALSE)
#define BswM_HasActionListsFalseUsedOfRules()                         (TRUE != FALSE)
#define BswM_HasActionListsTrueIdxOfRules()                           (TRUE != FALSE)
#define BswM_HasActionListsTrueUsedOfRules()                          (TRUE != FALSE)
#define BswM_HasExpressionsIdxOfRules()                               (TRUE != FALSE)
#define BswM_HasIdOfRules()                                           (TRUE != FALSE)
#define BswM_HasInitOfRules()                                         (TRUE != FALSE)
#define BswM_HasMaskedBitsOfRules()                                   (TRUE != FALSE)
#define BswM_HasRulesInd()                                            (TRUE != FALSE)
#define BswM_HasSizeOfActionItems()                                   (TRUE != FALSE)
#define BswM_HasSizeOfActionListQueue()                               (TRUE != FALSE)
#define BswM_HasSizeOfActionLists()                                   (TRUE != FALSE)
#define BswM_HasSizeOfActions()                                       (TRUE != FALSE)
#define BswM_HasSizeOfCanSMChannelMapping()                           (TRUE != FALSE)
#define BswM_HasSizeOfCanSMChannelState()                             (TRUE != FALSE)
#define BswM_HasSizeOfComDMControlParameters()                        (TRUE != FALSE)
#define BswM_HasSizeOfComDMControlSubParameters()                     (TRUE != FALSE)
#define BswM_HasSizeOfComMAllowComParameters()                        (TRUE != FALSE)
#define BswM_HasSizeOfComMChannelMapping()                            (TRUE != FALSE)
#define BswM_HasSizeOfComMChannelState()                              (TRUE != FALSE)
#define BswM_HasSizeOfComPduGroupSwitchParameters()                   (TRUE != FALSE)
#define BswM_HasSizeOfComPduGroupSwitchSubParameters()                (TRUE != FALSE)
#define BswM_HasSizeOfDeferredRules()                                 (TRUE != FALSE)
#define BswM_HasSizeOfExpressions()                                   (TRUE != FALSE)
#define BswM_HasSizeOfGenericMapping()                                (TRUE != FALSE)
#define BswM_HasSizeOfGenericModeParameters()                         (TRUE != FALSE)
#define BswM_HasSizeOfGenericState()                                  (TRUE != FALSE)
#define BswM_HasSizeOfImmediateUser()                                 (TRUE != FALSE)
#define BswM_HasSizeOfInitActionLists()                               (TRUE != FALSE)
#define BswM_HasSizeOfInitValues()                                    (TRUE != FALSE)
#define BswM_HasSizeOfModeRequestQueue()                              (TRUE != FALSE)
#define BswM_HasSizeOfNmControlParameters()                           (TRUE != FALSE)
#define BswM_HasSizeOfRuleStates()                                    (TRUE != FALSE)
#define BswM_HasSizeOfRules()                                         (TRUE != FALSE)
#define BswM_HasSizeOfRulesInd()                                      (TRUE != FALSE)
#define BswM_HasSizeOfTimerControlParameters()                        (TRUE != FALSE)
#define BswM_HasSizeOfTimerState()                                    (TRUE != FALSE)
#define BswM_HasSizeOfTimerValue()                                    (TRUE != FALSE)
#define BswM_HasTimerControlParameters()                              (TRUE != FALSE)
#define BswM_HasTimerOfTimerControlParameters()                       (TRUE != FALSE)
#define BswM_HasValueOfTimerControlParameters()                       (TRUE != FALSE)
#define BswM_HasTimerState()                                          (TRUE != FALSE)
#define BswM_HasTimerValue()                                          (TRUE != FALSE)
#define BswM_HasPCConfig()                                            (TRUE != FALSE)
#define BswM_HasActionItemsOfPCConfig()                               (TRUE != FALSE)
#define BswM_HasActionListQueueOfPCConfig()                           (TRUE != FALSE)
#define BswM_HasActionListsOfPCConfig()                               (TRUE != FALSE)
#define BswM_HasActionsOfPCConfig()                                   (TRUE != FALSE)
#define BswM_HasCanSMChannelMappingOfPCConfig()                       (TRUE != FALSE)
#define BswM_HasCanSMChannelStateOfPCConfig()                         (TRUE != FALSE)
#define BswM_HasComDMControlParametersOfPCConfig()                    (TRUE != FALSE)
#define BswM_HasComDMControlSubParametersOfPCConfig()                 (TRUE != FALSE)
#define BswM_HasComMAllowComParametersOfPCConfig()                    (TRUE != FALSE)
#define BswM_HasComMChannelMappingOfPCConfig()                        (TRUE != FALSE)
#define BswM_HasComMChannelStateOfPCConfig()                          (TRUE != FALSE)
#define BswM_HasComPduGroupSwitchParametersOfPCConfig()               (TRUE != FALSE)
#define BswM_HasComPduGroupSwitchSubParametersOfPCConfig()            (TRUE != FALSE)
#define BswM_HasDeferredRulesOfPCConfig()                             (TRUE != FALSE)
#define BswM_HasExpressionsOfPCConfig()                               (TRUE != FALSE)
#define BswM_HasGenericMappingOfPCConfig()                            (TRUE != FALSE)
#define BswM_HasGenericModeParametersOfPCConfig()                     (TRUE != FALSE)
#define BswM_HasGenericStateOfPCConfig()                              (TRUE != FALSE)
#define BswM_HasImmediateUserOfPCConfig()                             (TRUE != FALSE)
#define BswM_HasInitActionListsOfPCConfig()                           (TRUE != FALSE)
#define BswM_HasInitValuesOfPCConfig()                                (TRUE != FALSE)
#define BswM_HasInitializedOfPCConfig()                               (TRUE != FALSE)
#define BswM_HasModeRequestQueueOfPCConfig()                          (TRUE != FALSE)
#define BswM_HasNmControlParametersOfPCConfig()                       (TRUE != FALSE)
#define BswM_HasRuleStatesOfPCConfig()                                (TRUE != FALSE)
#define BswM_HasRulesIndOfPCConfig()                                  (TRUE != FALSE)
#define BswM_HasRulesOfPCConfig()                                     (TRUE != FALSE)
#define BswM_HasSizeOfActionItemsOfPCConfig()                         (TRUE != FALSE)
#define BswM_HasSizeOfActionListQueueOfPCConfig()                     (TRUE != FALSE)
#define BswM_HasSizeOfActionListsOfPCConfig()                         (TRUE != FALSE)
#define BswM_HasSizeOfActionsOfPCConfig()                             (TRUE != FALSE)
#define BswM_HasSizeOfCanSMChannelMappingOfPCConfig()                 (TRUE != FALSE)
#define BswM_HasSizeOfCanSMChannelStateOfPCConfig()                   (TRUE != FALSE)
#define BswM_HasSizeOfComDMControlParametersOfPCConfig()              (TRUE != FALSE)
#define BswM_HasSizeOfComDMControlSubParametersOfPCConfig()           (TRUE != FALSE)
#define BswM_HasSizeOfComMAllowComParametersOfPCConfig()              (TRUE != FALSE)
#define BswM_HasSizeOfComMChannelMappingOfPCConfig()                  (TRUE != FALSE)
#define BswM_HasSizeOfComMChannelStateOfPCConfig()                    (TRUE != FALSE)
#define BswM_HasSizeOfComPduGroupSwitchParametersOfPCConfig()         (TRUE != FALSE)
#define BswM_HasSizeOfComPduGroupSwitchSubParametersOfPCConfig()      (TRUE != FALSE)
#define BswM_HasSizeOfDeferredRulesOfPCConfig()                       (TRUE != FALSE)
#define BswM_HasSizeOfExpressionsOfPCConfig()                         (TRUE != FALSE)
#define BswM_HasSizeOfGenericMappingOfPCConfig()                      (TRUE != FALSE)
#define BswM_HasSizeOfGenericModeParametersOfPCConfig()               (TRUE != FALSE)
#define BswM_HasSizeOfGenericStateOfPCConfig()                        (TRUE != FALSE)
#define BswM_HasSizeOfImmediateUserOfPCConfig()                       (TRUE != FALSE)
#define BswM_HasSizeOfInitActionListsOfPCConfig()                     (TRUE != FALSE)
#define BswM_HasSizeOfInitValuesOfPCConfig()                          (TRUE != FALSE)
#define BswM_HasSizeOfModeRequestQueueOfPCConfig()                    (TRUE != FALSE)
#define BswM_HasSizeOfNmControlParametersOfPCConfig()                 (TRUE != FALSE)
#define BswM_HasSizeOfRuleStatesOfPCConfig()                          (TRUE != FALSE)
#define BswM_HasSizeOfRulesIndOfPCConfig()                            (TRUE != FALSE)
#define BswM_HasSizeOfRulesOfPCConfig()                               (TRUE != FALSE)
#define BswM_HasSizeOfTimerControlParametersOfPCConfig()              (TRUE != FALSE)
#define BswM_HasSizeOfTimerStateOfPCConfig()                          (TRUE != FALSE)
#define BswM_HasSizeOfTimerValueOfPCConfig()                          (TRUE != FALSE)
#define BswM_HasTimerControlParametersOfPCConfig()                    (TRUE != FALSE)
#define BswM_HasTimerStateOfPCConfig()                                (TRUE != FALSE)
#define BswM_HasTimerValueOfPCConfig()                                (TRUE != FALSE)
/** 
  \}
*/ 

/** 
  \defgroup  BswMPCIncrementDataMacros  BswM Increment Data Macros (PRE_COMPILE)
  \brief  These macros can be used to increment VAR data with numerical nature.
  \{
*/ 
#define BswM_IncActionListQueue(Index)                                BswM_GetActionListQueue(Index)++
#define BswM_IncCanSMChannelState(Index)                              BswM_GetCanSMChannelState(Index)++
#define BswM_IncComMChannelState(Index)                               BswM_GetComMChannelState(Index)++
#define BswM_IncGenericState(Index)                                   BswM_GetGenericState(Index)++
#define BswM_IncModeRequestQueue(Index)                               BswM_GetModeRequestQueue(Index)++
#define BswM_IncRuleStates(Index)                                     BswM_GetRuleStates(Index)++
#define BswM_IncTimerState(Index)                                     BswM_GetTimerState(Index)++
#define BswM_IncTimerValue(Index)                                     BswM_GetTimerValue(Index)++
/** 
  \}
*/ 

/** 
  \defgroup  BswMPCDecrementDataMacros  BswM Decrement Data Macros (PRE_COMPILE)
  \brief  These macros can be used to decrement VAR data with numerical nature.
  \{
*/ 
#define BswM_DecActionListQueue(Index)                                BswM_GetActionListQueue(Index)--
#define BswM_DecCanSMChannelState(Index)                              BswM_GetCanSMChannelState(Index)--
#define BswM_DecComMChannelState(Index)                               BswM_GetComMChannelState(Index)--
#define BswM_DecGenericState(Index)                                   BswM_GetGenericState(Index)--
#define BswM_DecModeRequestQueue(Index)                               BswM_GetModeRequestQueue(Index)--
#define BswM_DecRuleStates(Index)                                     BswM_GetRuleStates(Index)--
#define BswM_DecTimerState(Index)                                     BswM_GetTimerState(Index)--
#define BswM_DecTimerValue(Index)                                     BswM_GetTimerValue(Index)--
/** 
  \}
*/ 

  /* PRQA L:MACROS_3453 */
/** 
  \}
*/ 

/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: GLOBAL ACCESS FUNCTION MACROS
**********************************************************************************************************************/


/** 
  \defgroup  DataAccessMacros  Data Access Macros
  \brief  generated data access macros to abstract the generated data from the code to read and write CONST or VAR data.
  \{
*/ 
  /* PRQA S 3453 MACROS_3453 */  /* MD_CSL_3453 */
/**********************************************************************************************************************
  CONFIGURATION CLASS: POST_BUILD
  SECTION: GLOBAL FUNCTION MACROS
**********************************************************************************************************************/
  /* PRQA L:MACROS_3453 */
/** 
  \}
*/ 

/**********************************************************************************************************************
  CONFIGURATION CLASS: POST_BUILD
  SECTION: GLOBAL ACCESS FUNCTION MACROS
**********************************************************************************************************************/


/**********************************************************************************************************************
 *  GLOBAL DATA PROTOTYPES
**********************************************************************************************************************/
/* PRQA S 3451 EXTERNDECLARATIONS */ /* MD_BswM_3451 */ 
/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: GLOBAL DATA PROTOTYPES
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
extern CONST(BswM_ActionItemsType, BSWM_CONST) BswM_ActionItemsECU1[72];
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
extern CONST(BswM_ActionItemsType, BSWM_CONST) BswM_ActionItemsECU2[72];
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
extern CONST(BswM_ActionListsType, BSWM_CONST) BswM_ActionLists[22];
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
extern CONST(BswM_ActionFuncType, BSWM_CONST) BswM_ActionsECU1[47];
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
extern CONST(BswM_ActionFuncType, BSWM_CONST) BswM_ActionsECU2[47];
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
extern CONST(BswM_ComDMControlParametersType, BSWM_CONST) BswM_ComDMControlParameters[2];
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
extern CONST(BswM_ComDMControlSubParametersType, BSWM_CONST) BswM_ComDMControlSubParameters[2];
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
extern CONST(BswM_ComMAllowComParametersType, BSWM_CONST) BswM_ComMAllowComParameters[2];
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
extern CONST(BswM_ComPduGroupSwitchParametersType, BSWM_CONST) BswM_ComPduGroupSwitchParameters[4];  /* PRQA S 0777 */  /* MD_MSR_5.1_777 */
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
extern CONST(BswM_ComPduGroupSwitchSubParametersType, BSWM_CONST) BswM_ComPduGroupSwitchSubParameters[4];  /* PRQA S 0777 */  /* MD_MSR_5.1_777 */
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
extern CONST(BswM_DeferredRulesType, BSWM_CONST) BswM_DeferredRules[9];
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
extern CONST(BswM_ExpressionFuncType, BSWM_CONST) BswM_ExpressionsECU1[22];
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
extern CONST(BswM_ExpressionFuncType, BSWM_CONST) BswM_ExpressionsECU2[22];
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
extern CONST(BswM_GenericMappingType, BSWM_CONST) BswM_GenericMapping[3];
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
extern CONST(BswM_GenericModeParametersType, BSWM_CONST) BswM_GenericModeParameters[6];
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
extern CONST(BswM_ImmediateUserType, BSWM_CONST) BswM_ImmediateUser[3];
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
extern CONST(BswM_InitValuesType, BSWM_CONST) BswM_InitValues[3];
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
extern CONST(BswM_RulesType, BSWM_CONST) BswM_Rules[17];
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
extern CONST(BswM_RulesIndType, BSWM_CONST) BswM_RulesInd[11];
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
extern VAR(uBswM_ActionListQueueType, BSWM_VAR_NOINIT) BswM_ActionListQueue;  /* PRQA S 0759 */  /* MD_CSL_18.4 */
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
extern VAR(CanSM_BswMCurrentStateType, BSWM_VAR_NOINIT) BswM_CanSMChannelState[1];
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
extern VAR(ComM_ModeType, BSWM_VAR_NOINIT) BswM_ComMChannelState[1];
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
extern VAR(BswM_ModeType, BSWM_VAR_NOINIT) BswM_GenericState[3];
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
extern VAR(BswM_InitializedType, BSWM_VAR_ZERO_INIT) BswM_Initialized;
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
extern VAR(BswM_ModeRequestQueueType, BSWM_VAR_NOINIT) BswM_ModeRequestQueue[3];
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
extern VAR(BswM_RuleStatesType, BSWM_VAR_NOINIT) BswM_RuleStates[17];
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
extern VAR(uBswM_TimerStateType, BSWM_VAR_NOINIT) BswM_TimerState;  /* PRQA S 0759 */  /* MD_CSL_18.4 */
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
extern VAR(uBswM_TimerValueType, BSWM_VAR_NOINIT) BswM_TimerValue;  /* PRQA S 0759 */  /* MD_CSL_18.4 */
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
extern CONST(BswM_PCConfigsType, BSWM_CONST) BswM_PCConfig;
#define BSWM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */



/**********************************************************************************************************************
  CONFIGURATION CLASS: POST_BUILD
  SECTION: GLOBAL DATA PROTOTYPES
**********************************************************************************************************************/

/* PRQA L:EXTERNDECLARATIONS */


#define BSWM_START_SEC_VAR_NOINIT_UNSPECIFIED
/* PRQA S 5087 1 */ /* MD_MSR_19.1 */
#include "MemMap.h"

#if (BSWM_USE_INIT_POINTER == STD_ON)
extern  P2CONST(BswM_ConfigType, AUTOMATIC, BSWM_PBCFG) BswM_ConfigPtr;
#endif

#define BSWM_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/* PRQA S 5087 1 */ /* MD_MSR_19.1 */
#include "MemMap.h"

/**********************************************************************************************************************
 *  GLOBAL FUNCTION PROTOTYPES
**********************************************************************************************************************/
/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: GLOBAL FUNCTION PROTOTYPES
**********************************************************************************************************************/


/**********************************************************************************************************************
  CONFIGURATION CLASS: POST_BUILD
  SECTION: GLOBAL FUNCTION PROTOTYPES
**********************************************************************************************************************/


/* -----------------------------------------------------------------------------
    &&&~ EXTERNAL DECLARATIONS
 ----------------------------------------------------------------------------- */

#define BSWM_START_SEC_CODE
/* PRQA S 5087 1 */ /* MD_MSR_19.1 */
#include "MemMap.h"

/*! \addtogroup    BswMGeneratedFunctions BswM Generated Functions
 * \{
 */
/* PRQA S 0779 FUNCTIONDECLARATIONS */ /* MD_BswM_0779 */

/**********************************************************************************************************************
 *  Init
 *********************************************************************************************************************/
/*! \defgroup    Init
 * \{
 */
/**********************************************************************************************************************
 *  BswM_Init_Gen
 *********************************************************************************************************************/
/*!
 * \brief       Initializes BswM.
 * \details     Part of the BswM_Init. Initializes all generated variables and executes action lists for initialization.
 * \pre         -
 * \reentrant   FALSE
 * \synchronous TRUE
 * \note        May only be called by BswM_Init.
 */
extern FUNC(void, BSWM_CODE) BswM_Init_Gen(void);
/*! \} */ /* End of group Init */

/**********************************************************************************************************************
 *  SwcModeRequestUpdate
 *********************************************************************************************************************/
/*! \defgroup    SwcModeRequestUpdate
 * \{
 */
/**********************************************************************************************************************
 *  BswM_SwcModeRequestUpdateFct
 *********************************************************************************************************************/
/*!
 * \brief       Reads port values from RTE.
 * \details     Gets the current value of SwcModeRequest Ports and SwcNotification Ports from RTE.
 * \pre         -
 * \context     TASK
 * \reentrant   TRUE
 * \synchronous TRUE
 * \note        May only be called by BswM_MainFunction.
 */
extern FUNC(void, BSWM_CODE) BswM_SwcModeRequestUpdateFct(void);
/*! \} */ /* End of group SwcModeRequestUpdate */
/* PRQA L:FUNCTIONDECLARATIONS */
/*! \} */ /* End of group BswMGeneratedFunctions */


#if (BSWM_FUNCTION_BASED == STD_OFF)
/**********************************************************************************************************************
 *  BswM_Action_ActionListHandler()
 **********************************************************************************************************************/
/*!
 * \brief       Executes an action list.
 * \details     Executes all actions of an action list.
 * \param[in]   handleId  Id of the action list to execute.
 * \return      E_OK      Action list was completely executed.
 * \return      E_NOT_OK  Action list was aborted because an action failed.
 * \pre         -
 * \context     ANY
 * \reentrant   TRUE
 * \synchronous TRUE
 */
extern FUNC(Std_ReturnType, BSWM_CODE) BswM_Action_ActionListHandler(BswM_HandleType handleId);
#endif

#if ((BSWM_RULES == STD_ON)  && (BSWM_FUNCTION_BASED == STD_OFF))
/**********************************************************************************************************************
 *  BswM_ArbitrateRule()
 **********************************************************************************************************************/
/*!
 * \brief       Arbitrates a rule.
 * \details     Evaluates the logical expression of the rule and determines the action list to execute.
 * \param[in]   ruleId  Id of the rule to arbitrate
 * \return      ID of action list to execute (BSWM_NO_ACTIONLIST if no action list shall be executed)
 * \pre         -
 * \context     ANY
 * \reentrant   TRUE
 * \synchronous TRUE
 */
extern FUNC(BswM_SizeOfActionListsType, BSWM_CODE) BswM_ArbitrateRule(BswM_HandleType ruleId);
#endif

/**********************************************************************************************************************
 *  BswM_ExecuteIpduGroupControl()
 **********************************************************************************************************************/
/*!
 * \brief       Enabes and disables PDU Groups and DeadlineMonitoring in Com.
 * \details     Forwards the changes to the local Com_IpduGroupVector caused by executed actions to the corresponding 
 *              Com APIS.
 * \pre         -
 * \context     ANY
 * \reentrant   TRUE
 * \synchronous TRUE
 */
extern FUNC(void, BSWM_CODE) BswM_ExecuteIpduGroupControl(void);

#if(BSWM_IMMEDIATEUSER == STD_ON)
# if (BSWM_DEV_ERROR_REPORT == STD_ON)
/**********************************************************************************************************************
 *  BswM_ImmediateModeRequest()
 **********************************************************************************************************************/
/*!
 * \brief       Processes an immediate mode request.
 * \details     Queues mode request and starts arbitration of depending rules if no other request is currently active.
 * \param[in]   start   Handle of first mode request.
 * \param[in]   end     Handle of last mode request.
 * \param[in]   sid     Service Id of calling API. Only available if BSWM_DEV_ERROR_REPORT is STD_ON.
 * \pre         -
 * \context     ANY
 * \reentrant   TRUE
 * \synchronous TRUE
 */
extern FUNC(void, BSWM_CODE) BswM_ImmediateModeRequest(BswM_SizeOfImmediateUserType start, BswM_SizeOfImmediateUserType end, uint8 sid);
# else
extern FUNC(void, BSWM_CODE) BswM_ImmediateModeRequest(BswM_SizeOfImmediateUserType start, BswM_SizeOfImmediateUserType end);
# endif
#endif

#define BSWM_STOP_SEC_CODE
/* PRQA S 5087 1 */ /* MD_MSR_19.1 */
#include "MemMap.h"

#endif /* BSWM_PRIVATE_CFG_H */


