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
 *              File: BswM_Cfg.h
 *   Generation Time: 2018-03-29 13:28:44
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


#if !defined(BSWM_CFG_H)
#define BSWM_CFG_H

/* -----------------------------------------------------------------------------
    &&&~ INCLUDE
 ----------------------------------------------------------------------------- */
#include "Std_Types.h"
#include "BswM_ComM.h"
#include "BswM_CanSM.h"
#include "BswM_Dcm.h"
#include "BswM_EcuM.h"
#include "BswM_NvM.h"
#include "ComStack_Types.h" 
#include "Com_Types.h" 


/* -----------------------------------------------------------------------------
    &&&~ GENERAL DEFINES
 ----------------------------------------------------------------------------- */
#ifndef BSWM_USE_DUMMY_FUNCTIONS
#define BSWM_USE_DUMMY_FUNCTIONS STD_OFF /* /MICROSAR/EcuC/EcucGeneral/DummyFunction */
#endif
#ifndef BSWM_USE_DUMMY_STATEMENT
#define BSWM_USE_DUMMY_STATEMENT STD_ON /* /MICROSAR/EcuC/EcucGeneral/DummyStatement */
#endif
#ifndef BSWM_DUMMY_STATEMENT
#define BSWM_DUMMY_STATEMENT(v) (v)=(v) /* PRQA S 3453 */ /* MD_MSR_19.7 */  /* /MICROSAR/EcuC/EcucGeneral/DummyStatementKind */
#endif
#ifndef BSWM_DUMMY_STATEMENT_CONST
#define BSWM_DUMMY_STATEMENT_CONST(v) (void)(v) /* PRQA S 3453 */ /* MD_MSR_19.7 */  /* /MICROSAR/EcuC/EcucGeneral/DummyStatementKind */
#endif
#ifndef BSWM_ATOMIC_BIT_ACCESS_IN_BITFIELD
#define BSWM_ATOMIC_BIT_ACCESS_IN_BITFIELD STD_OFF /* /MICROSAR/EcuC/EcucGeneral/AtomicBitAccessInBitfield */
#endif
#ifndef BSWM_ATOMIC_VARIABLE_ACCESS
#define BSWM_ATOMIC_VARIABLE_ACCESS 32U /* /MICROSAR/EcuC/EcucGeneral/AtomicVariableAccess */
#endif
#ifndef BSWM_PROCESSOR_RH850_1373
#define BSWM_PROCESSOR_RH850_1373
#endif
#ifndef BSWM_COMP_GREENHILLS
#define BSWM_COMP_GREENHILLS
#endif
#ifndef BSWM_GEN_GENERATOR_MSR
#define BSWM_GEN_GENERATOR_MSR
#endif
#ifndef BSWM_CPUTYPE_BITORDER_LSB2MSB
#define BSWM_CPUTYPE_BITORDER_LSB2MSB /* /MICROSAR/EcuC/EcucGeneral/BitOrder */
#endif
#ifndef BSWM_CONFIGURATION_VARIANT_PRECOMPILE
#define BSWM_CONFIGURATION_VARIANT_PRECOMPILE 1
#endif
#ifndef BSWM_CONFIGURATION_VARIANT_LINKTIME
#define BSWM_CONFIGURATION_VARIANT_LINKTIME 2
#endif
#ifndef BSWM_CONFIGURATION_VARIANT_POSTBUILD_LOADABLE
#define BSWM_CONFIGURATION_VARIANT_POSTBUILD_LOADABLE 3
#endif
#ifndef BSWM_CONFIGURATION_VARIANT
#define BSWM_CONFIGURATION_VARIANT BSWM_CONFIGURATION_VARIANT_PRECOMPILE
#endif
#ifndef BSWM_POSTBUILD_VARIANT_SUPPORT
#define BSWM_POSTBUILD_VARIANT_SUPPORT STD_ON
#endif


#if !defined (BSWM_DUMMY_STATEMENT)
# define BSWM_DUMMY_STATEMENT(statement) (void)statement
#endif

/* -----------------------------------------------------------------------------
    &&&~ CONFIGURATION DEFINES
 ----------------------------------------------------------------------------- */

/* START of Checksum include for */
/* START of Checksum include for - SysService_Asr4BswMCfg5PrecompileCRC */

#define BSWM_DEV_ERROR_DETECT                STD_ON
#define BSWM_DEV_ERROR_REPORT                STD_ON
#define BSWM_MODE_CHECK                      STD_ON
#define BSWM_ENABLE_CANSM                    STD_ON
#define BSWM_ENABLE_FRSM                     STD_OFF
#define BSWM_ENABLE_LINSM                    STD_OFF
#define BSWM_ENABLE_ETHIF                    STD_OFF
#define BSWM_ENABLE_ETHSM                    STD_OFF
#define BSWM_ENABLE_LINTP                    STD_OFF
#define BSWM_ENABLE_DCM                      STD_ON
#define BSWM_ENABLE_NVM                      STD_ON
#define BSWM_ENABLE_ECUM                     STD_ON
#define BSWM_ENABLE_COMM                     STD_ON
#define BSWM_ENABLE_J1939DCM                 STD_OFF
#define BSWM_ENABLE_J1939NM                  STD_OFF
#define BSWM_ENABLE_SD                       STD_OFF
#define BSWM_ENABLE_NM                       STD_OFF
#define BSWM_ENABLE_PDUR                     STD_OFF
#define BSWM_ENABLE_WDGM                     STD_OFF
#define BSWM_ENABLE_RULE_CONTROL             STD_OFF
#define BSWM_VERSION_INFO_API                STD_OFF
#define BSWM_COMM_PNC_SUPPORT                STD_OFF
#define BSWM_COMM_INITIATE_RESET             STD_OFF
#define BSWM_CHANNEL_COUNT                   1U
#define BSWM_WAKEUP_SOURCE_COUNT             6U
#define BSWM_IPDU_GROUP_CONTROL              STD_ON
#define BSWM_ECUM_MODE_HANDLING              STD_OFF
#define BSWM_IPDUGROUPVECTORSIZE             1U


/* END of Checksum include for - SysService_Asr4BswMCfg5PrecompileCRC */

/* END of Checksum include for */

/* -----------------------------------------------------------------------------
    &&&~ RULE DEFINES
 ----------------------------------------------------------------------------- */
#define BswMConf_BswMRule_ESH_RunToPostRun (12) 
#define BswMConf_BswMRule_ESH_WaitToShutdown (14) 
#define BswMConf_BswMRule_ESH_WakeupToPrep (16) 
#define BswMConf_BswMRule_ESH_WaitToWakeup (15) 
#define BswMConf_BswMRule_ESH_WakeupToRun (17) 
#define BswMConf_BswMRule_ESH_InitToWakeup (7) 
#define BswMConf_BswMRule_ESH_PostRunToPrepNested (10) 
#define BswMConf_BswMRule_ESH_PostRunNested (9) 
#define BswMConf_BswMRule_ESH_PostRun (8) 
#define BswMConf_BswMRule_ESH_PrepToWait (11) 
#define BswMConf_BswMRule_ESH_RunToPostRunNested (13) 
#define BswMConf_BswMRule_BswM_EnterShutdownRule (1) 
#define BswMConf_BswMRule_CC_FD1_CAN_f26020e5_RX_DM (3) 
#define BswMConf_BswMRule_CC_FD1_CAN_f26020e5_RX (2) 
#define BswMConf_BswMRule_CC_FD1_CAN_f26020e5_TX (4) 
#define BswMConf_BswMRule_EcuResetStartRule (18) 
#define BswMConf_BswMRule_Ecu2DisableComRule (0) 


/* -----------------------------------------------------------------------------
    &&&~ GENERIC DEFINES
 ----------------------------------------------------------------------------- */
#define BSWM_GENERIC_ESH_State               230U 
#define BSWM_GENERIC_ESH_ComMPendingRequests 232U 
#define BSWM_GENERIC_BSWM_STATE              0U 

#define BSWM_GENERICVALUE_ESH_State_ESH_INIT                               0x0000U 
#define BSWM_GENERICVALUE_ESH_State_ESH_POST_RUN                           0x0002U 
#define BSWM_GENERICVALUE_ESH_State_ESH_PREP_SHUTDOWN                      0x0003U 
#define BSWM_GENERICVALUE_ESH_State_ESH_RUN                                0x0001U 
#define BSWM_GENERICVALUE_ESH_State_ESH_SHUTDOWN                           0x0005U 
#define BSWM_GENERICVALUE_ESH_State_ESH_WAIT_FOR_NVM                       0x0004U 
#define BSWM_GENERICVALUE_ESH_State_ESH_WAKEUP                             0x0006U 
#define BSWM_GENERICVALUE_ESH_ComMPendingRequests_ESH_COMM_NO_REQUEST      0x0000U 
#define BSWM_GENERICVALUE_ESH_ComMPendingRequests_ESH_COMM_PENDING_REQUEST 0x0001U 
#define BSWM_GENERICVALUE_BSWM_STATE_BSWM_NXTR_SHUTDOWN                    0x0000U 


/* -----------------------------------------------------------------------------
    &&&~ TIMER DEFINES
 ----------------------------------------------------------------------------- */
#define BSWM_TMR_ESH_SelfRunRequestTimer 0U 


/* -----------------------------------------------------------------------------
    &&&~ TYPEDEF
 ----------------------------------------------------------------------------- */

typedef uint8 BswM_UserDomainType; /* user domain: CanSM, LinSM... */

/* It is possible to configure any user number from 0 to 65535 */
typedef uint16 BswM_UserType;
typedef uint16 BswM_ModeType;
typedef uint8 BswM_HandleType;
typedef P2FUNC (uint8, BSWM_CODE, BswM_ExpressionFuncType)(void);
typedef P2FUNC (Std_ReturnType, BSWM_CODE, BswM_ActionFuncType)(BswM_HandleType handleId);

/**********************************************************************************************************************
 *  GLOBAL CONSTANT MACROS
**********************************************************************************************************************/
/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: GLOBAL CONSTANT MACROS
**********************************************************************************************************************/
/** 
  \defgroup  BswMPCDataSwitches  BswM Data Switches  (PRE_COMPILE)
  \brief  These defines are used to deactivate data and their processing.
  \{
*/ 
#define BSWM_ACTIONITEMS                                              STD_ON
#define BSWM_ABORTOFACTIONITEMS                                       STD_OFF  /**< Deactivateable: 'BswM_ActionItemsECU1.Abort' Reason: 'the value of BswM_AbortOfActionItems is always 'false' due to this, the array is deactivated.' and Deactivateable: 'BswM_ActionItemsECU2.Abort' Reason: 'the value of BswM_AbortOfActionItems is always 'false' due to this, the array is deactivated.' */
#define BSWM_ACTIONSIDXOFACTIONITEMS                                  STD_ON
#define BSWM_PARAMETERIDXOFACTIONITEMS                                STD_ON
#define BSWM_PARAMETERUSEDOFACTIONITEMS                               STD_ON
#define BSWM_REPORTOFACTIONITEMS                                      STD_OFF  /**< Deactivateable: 'BswM_ActionItemsECU1.Report' Reason: 'No Dem event is configured.' and Deactivateable: 'BswM_ActionItemsECU2.Report' Reason: 'No Dem event is configured.' */
#define BSWM_ACTIONLISTQUEUE                                          STD_ON
#define BSWM_ACTIONLISTS                                              STD_ON
#define BSWM_ACTIONITEMSENDIDXOFACTIONLISTS                           STD_ON
#define BSWM_ACTIONITEMSSTARTIDXOFACTIONLISTS                         STD_ON
#define BSWM_ACTIONITEMSUSEDOFACTIONLISTS                             STD_ON
#define BSWM_CONDITIONALOFACTIONLISTS                                 STD_ON
#define BSWM_MASKEDBITSOFACTIONLISTS                                  STD_ON
#define BSWM_ACTIONS                                                  STD_ON
#define BSWM_CANSMCHANNELMAPPING                                      STD_ON
#define BSWM_EXTERNALIDOFCANSMCHANNELMAPPING                          STD_ON
#define BSWM_IMMEDIATEUSERENDIDXOFCANSMCHANNELMAPPING                 STD_ON
#define BSWM_IMMEDIATEUSERSTARTIDXOFCANSMCHANNELMAPPING               STD_ON
#define BSWM_IMMEDIATEUSERUSEDOFCANSMCHANNELMAPPING                   STD_ON
#define BSWM_INITVALUEOFCANSMCHANNELMAPPING                           STD_ON
#define BSWM_CANSMCHANNELSTATE                                        STD_ON
#define BSWM_COMDMCONTROLPARAMETERS                                   STD_ON
#define BSWM_COMDMCONTROLSUBPARAMETERSENDIDXOFCOMDMCONTROLPARAMETERS  STD_ON
#define BSWM_COMDMCONTROLSUBPARAMETERSSTARTIDXOFCOMDMCONTROLPARAMETERS STD_ON
#define BSWM_COMDMCONTROLSUBPARAMETERSUSEDOFCOMDMCONTROLPARAMETERS    STD_ON
#define BSWM_COMDMCONTROLSUBPARAMETERS                                STD_ON
#define BSWM_BITVALOFCOMDMCONTROLSUBPARAMETERS                        STD_ON
#define BSWM_IPDUGROUPIDOFCOMDMCONTROLSUBPARAMETERS                   STD_ON
#define BSWM_COMDMHANDLINGDISABLEPARAMETERS                           STD_OFF  /**< Deactivateable: 'BswM_ComDMHandlingDisableParametersECU1' Reason: 'Action of type 'ComDMHandling' not in configuration.' and Deactivateable: 'BswM_ComDMHandlingDisableParametersECU2' Reason: 'Action of type 'ComDMHandling' not in configuration.' */
#define BSWM_IPDUGROUPIDOFCOMDMHANDLINGDISABLEPARAMETERS              STD_OFF  /**< Deactivateable: 'BswM_ComDMHandlingDisableParametersECU1.IpduGroupId' Reason: 'Action of type 'ComDMHandling' not in configuration.' and Deactivateable: 'BswM_ComDMHandlingDisableParametersECU2.IpduGroupId' Reason: 'Action of type 'ComDMHandling' not in configuration.' */
#define BSWM_COMDMHANDLINGENABLEPARAMETERS                            STD_OFF  /**< Deactivateable: 'BswM_ComDMHandlingEnableParametersECU1' Reason: 'Action of type 'ComDMHandling' not in configuration.' and Deactivateable: 'BswM_ComDMHandlingEnableParametersECU2' Reason: 'Action of type 'ComDMHandling' not in configuration.' */
#define BSWM_IPDUGROUPIDOFCOMDMHANDLINGENABLEPARAMETERS               STD_OFF  /**< Deactivateable: 'BswM_ComDMHandlingEnableParametersECU1.IpduGroupId' Reason: 'Action of type 'ComDMHandling' not in configuration.' and Deactivateable: 'BswM_ComDMHandlingEnableParametersECU2.IpduGroupId' Reason: 'Action of type 'ComDMHandling' not in configuration.' */
#define BSWM_COMDMHANDLINGPARAMETERS                                  STD_OFF  /**< Deactivateable: 'BswM_ComDMHandlingParametersECU1' Reason: 'Action of type 'ComDMHandling' not in configuration.' and Deactivateable: 'BswM_ComDMHandlingParametersECU2' Reason: 'Action of type 'ComDMHandling' not in configuration.' */
#define BSWM_COMDMHANDLINGDISABLEPARAMETERSENDIDXOFCOMDMHANDLINGPARAMETERS STD_OFF  /**< Deactivateable: 'BswM_ComDMHandlingParametersECU1.ComDMHandlingDisableParametersEndIdx' Reason: 'Action of type 'ComDMHandling' not in configuration.' and Deactivateable: 'BswM_ComDMHandlingParametersECU2.ComDMHandlingDisableParametersEndIdx' Reason: 'Action of type 'ComDMHandling' not in configuration.' */
#define BSWM_COMDMHANDLINGDISABLEPARAMETERSSTARTIDXOFCOMDMHANDLINGPARAMETERS STD_OFF  /**< Deactivateable: 'BswM_ComDMHandlingParametersECU1.ComDMHandlingDisableParametersStartIdx' Reason: 'Action of type 'ComDMHandling' not in configuration.' and Deactivateable: 'BswM_ComDMHandlingParametersECU2.ComDMHandlingDisableParametersStartIdx' Reason: 'Action of type 'ComDMHandling' not in configuration.' */
#define BSWM_COMDMHANDLINGDISABLEPARAMETERSUSEDOFCOMDMHANDLINGPARAMETERS STD_OFF  /**< Deactivateable: 'BswM_ComDMHandlingParametersECU1.ComDMHandlingDisableParametersUsed' Reason: 'Action of type 'ComDMHandling' not in configuration.' and Deactivateable: 'BswM_ComDMHandlingParametersECU2.ComDMHandlingDisableParametersUsed' Reason: 'Action of type 'ComDMHandling' not in configuration.' */
#define BSWM_COMDMHANDLINGENABLEPARAMETERSENDIDXOFCOMDMHANDLINGPARAMETERS STD_OFF  /**< Deactivateable: 'BswM_ComDMHandlingParametersECU1.ComDMHandlingEnableParametersEndIdx' Reason: 'Action of type 'ComDMHandling' not in configuration.' and Deactivateable: 'BswM_ComDMHandlingParametersECU2.ComDMHandlingEnableParametersEndIdx' Reason: 'Action of type 'ComDMHandling' not in configuration.' */
#define BSWM_COMDMHANDLINGENABLEPARAMETERSSTARTIDXOFCOMDMHANDLINGPARAMETERS STD_OFF  /**< Deactivateable: 'BswM_ComDMHandlingParametersECU1.ComDMHandlingEnableParametersStartIdx' Reason: 'Action of type 'ComDMHandling' not in configuration.' and Deactivateable: 'BswM_ComDMHandlingParametersECU2.ComDMHandlingEnableParametersStartIdx' Reason: 'Action of type 'ComDMHandling' not in configuration.' */
#define BSWM_COMDMHANDLINGENABLEPARAMETERSUSEDOFCOMDMHANDLINGPARAMETERS STD_OFF  /**< Deactivateable: 'BswM_ComDMHandlingParametersECU1.ComDMHandlingEnableParametersUsed' Reason: 'Action of type 'ComDMHandling' not in configuration.' and Deactivateable: 'BswM_ComDMHandlingParametersECU2.ComDMHandlingEnableParametersUsed' Reason: 'Action of type 'ComDMHandling' not in configuration.' */
#define BSWM_COMMALLOWCOMPARAMETERS                                   STD_ON
#define BSWM_ALLOWEDOFCOMMALLOWCOMPARAMETERS                          STD_ON
#define BSWM_CHANNELOFCOMMALLOWCOMPARAMETERS                          STD_ON
#define BSWM_COMMCHANNELMAPPING                                       STD_ON
#define BSWM_EXTERNALIDOFCOMMCHANNELMAPPING                           STD_ON
#define BSWM_IMMEDIATEUSERENDIDXOFCOMMCHANNELMAPPING                  STD_OFF  /**< Deactivateable: 'BswM_ComMChannelMapping.ImmediateUserEndIdx' Reason: 'the optional indirection is deactivated because ImmediateUserUsedOfComMChannelMapping is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' and Deactivateable: 'BswM_ComMChannelMapping.ImmediateUserEndIdx' Reason: 'the optional indirection is deactivated because ImmediateUserUsedOfComMChannelMapping is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define BSWM_IMMEDIATEUSERSTARTIDXOFCOMMCHANNELMAPPING                STD_OFF  /**< Deactivateable: 'BswM_ComMChannelMapping.ImmediateUserStartIdx' Reason: 'the optional indirection is deactivated because ImmediateUserUsedOfComMChannelMapping is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' and Deactivateable: 'BswM_ComMChannelMapping.ImmediateUserStartIdx' Reason: 'the optional indirection is deactivated because ImmediateUserUsedOfComMChannelMapping is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define BSWM_IMMEDIATEUSERUSEDOFCOMMCHANNELMAPPING                    STD_OFF  /**< Deactivateable: 'BswM_ComMChannelMapping.ImmediateUserUsed' Reason: 'the optional indirection is deactivated because ImmediateUserUsedOfComMChannelMapping is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' and Deactivateable: 'BswM_ComMChannelMapping.ImmediateUserUsed' Reason: 'the optional indirection is deactivated because ImmediateUserUsedOfComMChannelMapping is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define BSWM_INITVALUEOFCOMMCHANNELMAPPING                            STD_ON
#define BSWM_COMMCHANNELSTATE                                         STD_ON
#define BSWM_COMMINITIATERESETMAPPING                                 STD_OFF  /**< Deactivateable: 'BswM_ComMInitiateResetMappingECU1' Reason: 'No Mode Request for BswMComMInitiateReset configured.' and Deactivateable: 'BswM_ComMInitiateResetMappingECU2' Reason: 'No Mode Request for BswMComMInitiateReset configured.' */
#define BSWM_IMMEDIATEUSERENDIDXOFCOMMINITIATERESETMAPPING            STD_OFF  /**< Deactivateable: 'BswM_ComMInitiateResetMappingECU1.ImmediateUserEndIdx' Reason: 'No Mode Request for BswMComMInitiateReset configured.' and Deactivateable: 'BswM_ComMInitiateResetMappingECU2.ImmediateUserEndIdx' Reason: 'No Mode Request for BswMComMInitiateReset configured.' */
#define BSWM_IMMEDIATEUSERSTARTIDXOFCOMMINITIATERESETMAPPING          STD_OFF  /**< Deactivateable: 'BswM_ComMInitiateResetMappingECU1.ImmediateUserStartIdx' Reason: 'No Mode Request for BswMComMInitiateReset configured.' and Deactivateable: 'BswM_ComMInitiateResetMappingECU2.ImmediateUserStartIdx' Reason: 'No Mode Request for BswMComMInitiateReset configured.' */
#define BSWM_IMMEDIATEUSERUSEDOFCOMMINITIATERESETMAPPING              STD_OFF  /**< Deactivateable: 'BswM_ComMInitiateResetMappingECU1.ImmediateUserUsed' Reason: 'No Mode Request for BswMComMInitiateReset configured.' and Deactivateable: 'BswM_ComMInitiateResetMappingECU2.ImmediateUserUsed' Reason: 'No Mode Request for BswMComMInitiateReset configured.' */
#define BSWM_INITVALUEOFCOMMINITIATERESETMAPPING                      STD_OFF  /**< Deactivateable: 'BswM_ComMInitiateResetMappingECU1.InitValue' Reason: 'No Mode Request for BswMComMInitiateReset configured.' and Deactivateable: 'BswM_ComMInitiateResetMappingECU2.InitValue' Reason: 'No Mode Request for BswMComMInitiateReset configured.' */
#define BSWM_COMMINITIATERESETSTATE                                   STD_OFF  /**< Deactivateable: 'BswM_ComMInitiateResetStateECU1' Reason: 'No Mode Request for BswMComMInitiateReset configured.' and Deactivateable: 'BswM_ComMInitiateResetStateECU2' Reason: 'No Mode Request for BswMComMInitiateReset configured.' */
#define BSWM_COMMMODELIMITATIONPARAMETERS                             STD_OFF  /**< Deactivateable: 'BswM_ComMModeLimitationParametersECU1' Reason: 'Action of type 'ComMModeLimitation' not in configuration.' and Deactivateable: 'BswM_ComMModeLimitationParametersECU2' Reason: 'Action of type 'ComMModeLimitation' not in configuration.' */
#define BSWM_CHANNELOFCOMMMODELIMITATIONPARAMETERS                    STD_OFF  /**< Deactivateable: 'BswM_ComMModeLimitationParametersECU1.Channel' Reason: 'Action of type 'ComMModeLimitation' not in configuration.' and Deactivateable: 'BswM_ComMModeLimitationParametersECU2.Channel' Reason: 'Action of type 'ComMModeLimitation' not in configuration.' */
#define BSWM_STATUSOFCOMMMODELIMITATIONPARAMETERS                     STD_OFF  /**< Deactivateable: 'BswM_ComMModeLimitationParametersECU1.Status' Reason: 'Action of type 'ComMModeLimitation' not in configuration.' and Deactivateable: 'BswM_ComMModeLimitationParametersECU2.Status' Reason: 'Action of type 'ComMModeLimitation' not in configuration.' */
#define BSWM_COMMMODESWITCHPARAMETERS                                 STD_OFF  /**< Deactivateable: 'BswM_ComMModeSwitchParametersECU1' Reason: 'Action of type 'ComMModeSwitch' not in configuration.' and Deactivateable: 'BswM_ComMModeSwitchParametersECU2' Reason: 'Action of type 'ComMModeSwitch' not in configuration.' */
#define BSWM_COMMODEOFCOMMMODESWITCHPARAMETERS                        STD_OFF  /**< Deactivateable: 'BswM_ComMModeSwitchParametersECU1.ComMode' Reason: 'Action of type 'ComMModeSwitch' not in configuration.' and Deactivateable: 'BswM_ComMModeSwitchParametersECU2.ComMode' Reason: 'Action of type 'ComMModeSwitch' not in configuration.' */
#define BSWM_USEROFCOMMMODESWITCHPARAMETERS                           STD_OFF  /**< Deactivateable: 'BswM_ComMModeSwitchParametersECU1.User' Reason: 'Action of type 'ComMModeSwitch' not in configuration.' and Deactivateable: 'BswM_ComMModeSwitchParametersECU2.User' Reason: 'Action of type 'ComMModeSwitch' not in configuration.' */
#define BSWM_COMMPNCMAPPING                                           STD_OFF  /**< Deactivateable: 'BswM_ComMPncMappingECU1' Reason: 'No Mode Request for BswMComMPncRequest configured.' and Deactivateable: 'BswM_ComMPncMappingECU2' Reason: 'No Mode Request for BswMComMPncRequest configured.' */
#define BSWM_EXTERNALIDOFCOMMPNCMAPPING                               STD_OFF  /**< Deactivateable: 'BswM_ComMPncMappingECU1.ExternalId' Reason: 'No Mode Request for BswMComMPncRequest configured.' and Deactivateable: 'BswM_ComMPncMappingECU2.ExternalId' Reason: 'No Mode Request for BswMComMPncRequest configured.' */
#define BSWM_IMMEDIATEUSERENDIDXOFCOMMPNCMAPPING                      STD_OFF  /**< Deactivateable: 'BswM_ComMPncMappingECU1.ImmediateUserEndIdx' Reason: 'No Mode Request for BswMComMPncRequest configured.' and Deactivateable: 'BswM_ComMPncMappingECU2.ImmediateUserEndIdx' Reason: 'No Mode Request for BswMComMPncRequest configured.' */
#define BSWM_IMMEDIATEUSERSTARTIDXOFCOMMPNCMAPPING                    STD_OFF  /**< Deactivateable: 'BswM_ComMPncMappingECU1.ImmediateUserStartIdx' Reason: 'No Mode Request for BswMComMPncRequest configured.' and Deactivateable: 'BswM_ComMPncMappingECU2.ImmediateUserStartIdx' Reason: 'No Mode Request for BswMComMPncRequest configured.' */
#define BSWM_IMMEDIATEUSERUSEDOFCOMMPNCMAPPING                        STD_OFF  /**< Deactivateable: 'BswM_ComMPncMappingECU1.ImmediateUserUsed' Reason: 'No Mode Request for BswMComMPncRequest configured.' and Deactivateable: 'BswM_ComMPncMappingECU2.ImmediateUserUsed' Reason: 'No Mode Request for BswMComMPncRequest configured.' */
#define BSWM_INITVALUEOFCOMMPNCMAPPING                                STD_OFF  /**< Deactivateable: 'BswM_ComMPncMappingECU1.InitValue' Reason: 'No Mode Request for BswMComMPncRequest configured.' and Deactivateable: 'BswM_ComMPncMappingECU2.InitValue' Reason: 'No Mode Request for BswMComMPncRequest configured.' */
#define BSWM_COMMPNCSTATE                                             STD_OFF  /**< Deactivateable: 'BswM_ComMPncStateECU1' Reason: 'No Mode Request for BswMComMPncRequest configured.' and Deactivateable: 'BswM_ComMPncStateECU2' Reason: 'No Mode Request for BswMComMPncRequest configured.' */
#define BSWM_COMPDUGROUPHANDLINGPARAMETERS                            STD_OFF  /**< Deactivateable: 'BswM_ComPduGroupHandlingParametersECU1' Reason: 'Action of type 'ComPduGroupHandling' not in configuration.' and Deactivateable: 'BswM_ComPduGroupHandlingParametersECU2' Reason: 'Action of type 'ComPduGroupHandling' not in configuration.' */
#define BSWM_COMPDUGROUPHANDLINGSTARTPARAMETERSENDIDXOFCOMPDUGROUPHANDLINGPARAMETERS STD_OFF  /**< Deactivateable: 'BswM_ComPduGroupHandlingParametersECU1.ComPduGroupHandlingStartParametersEndIdx' Reason: 'Action of type 'ComPduGroupHandling' not in configuration.' and Deactivateable: 'BswM_ComPduGroupHandlingParametersECU2.ComPduGroupHandlingStartParametersEndIdx' Reason: 'Action of type 'ComPduGroupHandling' not in configuration.' */
#define BSWM_COMPDUGROUPHANDLINGSTARTPARAMETERSSTARTIDXOFCOMPDUGROUPHANDLINGPARAMETERS STD_OFF  /**< Deactivateable: 'BswM_ComPduGroupHandlingParametersECU1.ComPduGroupHandlingStartParametersStartIdx' Reason: 'Action of type 'ComPduGroupHandling' not in configuration.' and Deactivateable: 'BswM_ComPduGroupHandlingParametersECU2.ComPduGroupHandlingStartParametersStartIdx' Reason: 'Action of type 'ComPduGroupHandling' not in configuration.' */
#define BSWM_COMPDUGROUPHANDLINGSTARTPARAMETERSUSEDOFCOMPDUGROUPHANDLINGPARAMETERS STD_OFF  /**< Deactivateable: 'BswM_ComPduGroupHandlingParametersECU1.ComPduGroupHandlingStartParametersUsed' Reason: 'Action of type 'ComPduGroupHandling' not in configuration.' and Deactivateable: 'BswM_ComPduGroupHandlingParametersECU2.ComPduGroupHandlingStartParametersUsed' Reason: 'Action of type 'ComPduGroupHandling' not in configuration.' */
#define BSWM_COMPDUGROUPHANDLINGSTOPPARAMETERSENDIDXOFCOMPDUGROUPHANDLINGPARAMETERS STD_OFF  /**< Deactivateable: 'BswM_ComPduGroupHandlingParametersECU1.ComPduGroupHandlingStopParametersEndIdx' Reason: 'Action of type 'ComPduGroupHandling' not in configuration.' and Deactivateable: 'BswM_ComPduGroupHandlingParametersECU2.ComPduGroupHandlingStopParametersEndIdx' Reason: 'Action of type 'ComPduGroupHandling' not in configuration.' */
#define BSWM_COMPDUGROUPHANDLINGSTOPPARAMETERSSTARTIDXOFCOMPDUGROUPHANDLINGPARAMETERS STD_OFF  /**< Deactivateable: 'BswM_ComPduGroupHandlingParametersECU1.ComPduGroupHandlingStopParametersStartIdx' Reason: 'Action of type 'ComPduGroupHandling' not in configuration.' and Deactivateable: 'BswM_ComPduGroupHandlingParametersECU2.ComPduGroupHandlingStopParametersStartIdx' Reason: 'Action of type 'ComPduGroupHandling' not in configuration.' */
#define BSWM_COMPDUGROUPHANDLINGSTOPPARAMETERSUSEDOFCOMPDUGROUPHANDLINGPARAMETERS STD_OFF  /**< Deactivateable: 'BswM_ComPduGroupHandlingParametersECU1.ComPduGroupHandlingStopParametersUsed' Reason: 'Action of type 'ComPduGroupHandling' not in configuration.' and Deactivateable: 'BswM_ComPduGroupHandlingParametersECU2.ComPduGroupHandlingStopParametersUsed' Reason: 'Action of type 'ComPduGroupHandling' not in configuration.' */
#define BSWM_COMPDUGROUPHANDLINGSTARTPARAMETERS                       STD_OFF  /**< Deactivateable: 'BswM_ComPduGroupHandlingStartParametersECU1' Reason: 'Action of type 'ComPduGroupHandling' not in configuration.' and Deactivateable: 'BswM_ComPduGroupHandlingStartParametersECU2' Reason: 'Action of type 'ComPduGroupHandling' not in configuration.' */
#define BSWM_INITIALIZEOFCOMPDUGROUPHANDLINGSTARTPARAMETERS           STD_OFF  /**< Deactivateable: 'BswM_ComPduGroupHandlingStartParametersECU1.Initialize' Reason: 'Action of type 'ComPduGroupHandling' not in configuration.' and Deactivateable: 'BswM_ComPduGroupHandlingStartParametersECU2.Initialize' Reason: 'Action of type 'ComPduGroupHandling' not in configuration.' */
#define BSWM_IPDUGROUPIDOFCOMPDUGROUPHANDLINGSTARTPARAMETERS          STD_OFF  /**< Deactivateable: 'BswM_ComPduGroupHandlingStartParametersECU1.IpduGroupId' Reason: 'Action of type 'ComPduGroupHandling' not in configuration.' and Deactivateable: 'BswM_ComPduGroupHandlingStartParametersECU2.IpduGroupId' Reason: 'Action of type 'ComPduGroupHandling' not in configuration.' */
#define BSWM_COMPDUGROUPHANDLINGSTOPPARAMETERS                        STD_OFF  /**< Deactivateable: 'BswM_ComPduGroupHandlingStopParametersECU1' Reason: 'Action of type 'ComPduGroupHandling' not in configuration.' and Deactivateable: 'BswM_ComPduGroupHandlingStopParametersECU2' Reason: 'Action of type 'ComPduGroupHandling' not in configuration.' */
#define BSWM_IPDUGROUPIDOFCOMPDUGROUPHANDLINGSTOPPARAMETERS           STD_OFF  /**< Deactivateable: 'BswM_ComPduGroupHandlingStopParametersECU1.IpduGroupId' Reason: 'Action of type 'ComPduGroupHandling' not in configuration.' and Deactivateable: 'BswM_ComPduGroupHandlingStopParametersECU2.IpduGroupId' Reason: 'Action of type 'ComPduGroupHandling' not in configuration.' */
#define BSWM_COMPDUGROUPSWITCHPARAMETERS                              STD_ON
#define BSWM_COMPDUGROUPSWITCHSUBPARAMETERSENDIDXOFCOMPDUGROUPSWITCHPARAMETERS STD_ON
#define BSWM_COMPDUGROUPSWITCHSUBPARAMETERSSTARTIDXOFCOMPDUGROUPSWITCHPARAMETERS STD_ON
#define BSWM_COMPDUGROUPSWITCHSUBPARAMETERSUSEDOFCOMPDUGROUPSWITCHPARAMETERS STD_ON
#define BSWM_CONTROLOFCOMPDUGROUPSWITCHPARAMETERS                     STD_ON
#define BSWM_COMPDUGROUPSWITCHSUBPARAMETERS                           STD_ON
#define BSWM_BITVALOFCOMPDUGROUPSWITCHSUBPARAMETERS                   STD_ON
#define BSWM_IPDUGROUPIDOFCOMPDUGROUPSWITCHSUBPARAMETERS              STD_ON
#define BSWM_COMSWITCHIPDUMODEPARAMETERS                              STD_OFF  /**< Deactivateable: 'BswM_ComSwitchIPduModeParametersECU1' Reason: 'Action of type 'ComSwitchIPduMode' not in configuration.' and Deactivateable: 'BswM_ComSwitchIPduModeParametersECU2' Reason: 'Action of type 'ComSwitchIPduMode' not in configuration.' */
#define BSWM_MODEOFCOMSWITCHIPDUMODEPARAMETERS                        STD_OFF  /**< Deactivateable: 'BswM_ComSwitchIPduModeParametersECU1.Mode' Reason: 'Action of type 'ComSwitchIPduMode' not in configuration.' and Deactivateable: 'BswM_ComSwitchIPduModeParametersECU2.Mode' Reason: 'Action of type 'ComSwitchIPduMode' not in configuration.' */
#define BSWM_PDUIDOFCOMSWITCHIPDUMODEPARAMETERS                       STD_OFF  /**< Deactivateable: 'BswM_ComSwitchIPduModeParametersECU1.PduId' Reason: 'Action of type 'ComSwitchIPduMode' not in configuration.' and Deactivateable: 'BswM_ComSwitchIPduModeParametersECU2.PduId' Reason: 'Action of type 'ComSwitchIPduMode' not in configuration.' */
#define BSWM_COMTRIGGERIPDUSENDPARAMETERS                             STD_OFF  /**< Deactivateable: 'BswM_ComTriggerIPduSendParametersECU1' Reason: 'Action of type 'ComTriggerIPduSend' not in configuration.' and Deactivateable: 'BswM_ComTriggerIPduSendParametersECU2' Reason: 'Action of type 'ComTriggerIPduSend' not in configuration.' */
#define BSWM_COMTRIGGERIPDUSENDSUBPARAMETERSENDIDXOFCOMTRIGGERIPDUSENDPARAMETERS STD_OFF  /**< Deactivateable: 'BswM_ComTriggerIPduSendParametersECU1.ComTriggerIPduSendSubParametersEndIdx' Reason: 'Action of type 'ComTriggerIPduSend' not in configuration.' and Deactivateable: 'BswM_ComTriggerIPduSendParametersECU2.ComTriggerIPduSendSubParametersEndIdx' Reason: 'Action of type 'ComTriggerIPduSend' not in configuration.' */
#define BSWM_COMTRIGGERIPDUSENDSUBPARAMETERSSTARTIDXOFCOMTRIGGERIPDUSENDPARAMETERS STD_OFF  /**< Deactivateable: 'BswM_ComTriggerIPduSendParametersECU1.ComTriggerIPduSendSubParametersStartIdx' Reason: 'Action of type 'ComTriggerIPduSend' not in configuration.' and Deactivateable: 'BswM_ComTriggerIPduSendParametersECU2.ComTriggerIPduSendSubParametersStartIdx' Reason: 'Action of type 'ComTriggerIPduSend' not in configuration.' */
#define BSWM_COMTRIGGERIPDUSENDSUBPARAMETERSUSEDOFCOMTRIGGERIPDUSENDPARAMETERS STD_OFF  /**< Deactivateable: 'BswM_ComTriggerIPduSendParametersECU1.ComTriggerIPduSendSubParametersUsed' Reason: 'Action of type 'ComTriggerIPduSend' not in configuration.' and Deactivateable: 'BswM_ComTriggerIPduSendParametersECU2.ComTriggerIPduSendSubParametersUsed' Reason: 'Action of type 'ComTriggerIPduSend' not in configuration.' */
#define BSWM_COMTRIGGERIPDUSENDSUBPARAMETERS                          STD_OFF  /**< Deactivateable: 'BswM_ComTriggerIPduSendSubParametersECU1' Reason: 'Action of type 'ComTriggerIPduSend' not in configuration.' and Deactivateable: 'BswM_ComTriggerIPduSendSubParametersECU2' Reason: 'Action of type 'ComTriggerIPduSend' not in configuration.' */
#define BSWM_PDUIDOFCOMTRIGGERIPDUSENDSUBPARAMETERS                   STD_OFF  /**< Deactivateable: 'BswM_ComTriggerIPduSendSubParametersECU1.PduId' Reason: 'Action of type 'ComTriggerIPduSend' not in configuration.' and Deactivateable: 'BswM_ComTriggerIPduSendSubParametersECU2.PduId' Reason: 'Action of type 'ComTriggerIPduSend' not in configuration.' */
#define BSWM_DCMAPPLUPDATEMAPPING                                     STD_OFF  /**< Deactivateable: 'BswM_DcmApplUpdateMappingECU1' Reason: 'No Mode Request for BswMDcmApplicationUpdatedIndication configured.' and Deactivateable: 'BswM_DcmApplUpdateMappingECU2' Reason: 'No Mode Request for BswMDcmApplicationUpdatedIndication configured.' */
#define BSWM_IMMEDIATEUSERENDIDXOFDCMAPPLUPDATEMAPPING                STD_OFF  /**< Deactivateable: 'BswM_DcmApplUpdateMappingECU1.ImmediateUserEndIdx' Reason: 'No Mode Request for BswMDcmApplicationUpdatedIndication configured.' and Deactivateable: 'BswM_DcmApplUpdateMappingECU2.ImmediateUserEndIdx' Reason: 'No Mode Request for BswMDcmApplicationUpdatedIndication configured.' */
#define BSWM_IMMEDIATEUSERSTARTIDXOFDCMAPPLUPDATEMAPPING              STD_OFF  /**< Deactivateable: 'BswM_DcmApplUpdateMappingECU1.ImmediateUserStartIdx' Reason: 'No Mode Request for BswMDcmApplicationUpdatedIndication configured.' and Deactivateable: 'BswM_DcmApplUpdateMappingECU2.ImmediateUserStartIdx' Reason: 'No Mode Request for BswMDcmApplicationUpdatedIndication configured.' */
#define BSWM_IMMEDIATEUSERUSEDOFDCMAPPLUPDATEMAPPING                  STD_OFF  /**< Deactivateable: 'BswM_DcmApplUpdateMappingECU1.ImmediateUserUsed' Reason: 'No Mode Request for BswMDcmApplicationUpdatedIndication configured.' and Deactivateable: 'BswM_DcmApplUpdateMappingECU2.ImmediateUserUsed' Reason: 'No Mode Request for BswMDcmApplicationUpdatedIndication configured.' */
#define BSWM_INITVALUEOFDCMAPPLUPDATEMAPPING                          STD_OFF  /**< Deactivateable: 'BswM_DcmApplUpdateMappingECU1.InitValue' Reason: 'No Mode Request for BswMDcmApplicationUpdatedIndication configured.' and Deactivateable: 'BswM_DcmApplUpdateMappingECU2.InitValue' Reason: 'No Mode Request for BswMDcmApplicationUpdatedIndication configured.' */
#define BSWM_DCMAPPLUPDATESTATE                                       STD_OFF  /**< Deactivateable: 'BswM_DcmApplUpdateStateECU1' Reason: 'No Mode Request for BswMDcmApplicationUpdatedIndication configured.' and Deactivateable: 'BswM_DcmApplUpdateStateECU2' Reason: 'No Mode Request for BswMDcmApplicationUpdatedIndication configured.' */
#define BSWM_DCMCOMMAPPING                                            STD_OFF  /**< Deactivateable: 'BswM_DcmComMappingECU1' Reason: 'No Mode Request for BswMDcmComModeRequest configured.' and Deactivateable: 'BswM_DcmComMappingECU2' Reason: 'No Mode Request for BswMDcmComModeRequest configured.' */
#define BSWM_EXTERNALIDOFDCMCOMMAPPING                                STD_OFF  /**< Deactivateable: 'BswM_DcmComMappingECU1.ExternalId' Reason: 'No Mode Request for BswMDcmComModeRequest configured.' and Deactivateable: 'BswM_DcmComMappingECU2.ExternalId' Reason: 'No Mode Request for BswMDcmComModeRequest configured.' */
#define BSWM_IMMEDIATEUSERENDIDXOFDCMCOMMAPPING                       STD_OFF  /**< Deactivateable: 'BswM_DcmComMappingECU1.ImmediateUserEndIdx' Reason: 'No Mode Request for BswMDcmComModeRequest configured.' and Deactivateable: 'BswM_DcmComMappingECU2.ImmediateUserEndIdx' Reason: 'No Mode Request for BswMDcmComModeRequest configured.' */
#define BSWM_IMMEDIATEUSERSTARTIDXOFDCMCOMMAPPING                     STD_OFF  /**< Deactivateable: 'BswM_DcmComMappingECU1.ImmediateUserStartIdx' Reason: 'No Mode Request for BswMDcmComModeRequest configured.' and Deactivateable: 'BswM_DcmComMappingECU2.ImmediateUserStartIdx' Reason: 'No Mode Request for BswMDcmComModeRequest configured.' */
#define BSWM_IMMEDIATEUSERUSEDOFDCMCOMMAPPING                         STD_OFF  /**< Deactivateable: 'BswM_DcmComMappingECU1.ImmediateUserUsed' Reason: 'No Mode Request for BswMDcmComModeRequest configured.' and Deactivateable: 'BswM_DcmComMappingECU2.ImmediateUserUsed' Reason: 'No Mode Request for BswMDcmComModeRequest configured.' */
#define BSWM_INITVALUEOFDCMCOMMAPPING                                 STD_OFF  /**< Deactivateable: 'BswM_DcmComMappingECU1.InitValue' Reason: 'No Mode Request for BswMDcmComModeRequest configured.' and Deactivateable: 'BswM_DcmComMappingECU2.InitValue' Reason: 'No Mode Request for BswMDcmComModeRequest configured.' */
#define BSWM_DCMCOMSTATE                                              STD_OFF  /**< Deactivateable: 'BswM_DcmComStateECU1' Reason: 'No Mode Request for BswMDcmComModeRequest configured.' and Deactivateable: 'BswM_DcmComStateECU2' Reason: 'No Mode Request for BswMDcmComModeRequest configured.' */
#define BSWM_DEFERREDRULES                                            STD_ON
#define BSWM_RULESIDXOFDEFERREDRULES                                  STD_ON
#define BSWM_ECUMMODEMAPPING                                          STD_OFF  /**< Deactivateable: 'BswM_EcuMModeMappingECU1' Reason: 'No Mode Request for BswMEcuMIndication configured.' and Deactivateable: 'BswM_EcuMModeMappingECU2' Reason: 'No Mode Request for BswMEcuMIndication configured.' */
#define BSWM_IMMEDIATEUSERENDIDXOFECUMMODEMAPPING                     STD_OFF  /**< Deactivateable: 'BswM_EcuMModeMappingECU1.ImmediateUserEndIdx' Reason: 'No Mode Request for BswMEcuMIndication configured.' and Deactivateable: 'BswM_EcuMModeMappingECU2.ImmediateUserEndIdx' Reason: 'No Mode Request for BswMEcuMIndication configured.' */
#define BSWM_IMMEDIATEUSERSTARTIDXOFECUMMODEMAPPING                   STD_OFF  /**< Deactivateable: 'BswM_EcuMModeMappingECU1.ImmediateUserStartIdx' Reason: 'No Mode Request for BswMEcuMIndication configured.' and Deactivateable: 'BswM_EcuMModeMappingECU2.ImmediateUserStartIdx' Reason: 'No Mode Request for BswMEcuMIndication configured.' */
#define BSWM_IMMEDIATEUSERUSEDOFECUMMODEMAPPING                       STD_OFF  /**< Deactivateable: 'BswM_EcuMModeMappingECU1.ImmediateUserUsed' Reason: 'No Mode Request for BswMEcuMIndication configured.' and Deactivateable: 'BswM_EcuMModeMappingECU2.ImmediateUserUsed' Reason: 'No Mode Request for BswMEcuMIndication configured.' */
#define BSWM_INITVALUEOFECUMMODEMAPPING                               STD_OFF  /**< Deactivateable: 'BswM_EcuMModeMappingECU1.InitValue' Reason: 'No Mode Request for BswMEcuMIndication configured.' and Deactivateable: 'BswM_EcuMModeMappingECU2.InitValue' Reason: 'No Mode Request for BswMEcuMIndication configured.' */
#define BSWM_ECUMMODESTATE                                            STD_OFF  /**< Deactivateable: 'BswM_EcuMModeStateECU1' Reason: 'No Mode Request for BswMEcuMIndication configured.' and Deactivateable: 'BswM_EcuMModeStateECU2' Reason: 'No Mode Request for BswMEcuMIndication configured.' */
#define BSWM_ECUMRUNREQUESTMAPPING                                    STD_OFF  /**< Deactivateable: 'BswM_EcuMRunRequestMappingECU1' Reason: 'No Mode Request for BswMEcuMRUNRequestIndication configured.' and Deactivateable: 'BswM_EcuMRunRequestMappingECU2' Reason: 'No Mode Request for BswMEcuMRUNRequestIndication configured.' */
#define BSWM_EXTERNALIDOFECUMRUNREQUESTMAPPING                        STD_OFF  /**< Deactivateable: 'BswM_EcuMRunRequestMappingECU1.ExternalId' Reason: 'No Mode Request for BswMEcuMRUNRequestIndication configured.' and Deactivateable: 'BswM_EcuMRunRequestMappingECU2.ExternalId' Reason: 'No Mode Request for BswMEcuMRUNRequestIndication configured.' */
#define BSWM_IMMEDIATEUSERENDIDXOFECUMRUNREQUESTMAPPING               STD_OFF  /**< Deactivateable: 'BswM_EcuMRunRequestMappingECU1.ImmediateUserEndIdx' Reason: 'No Mode Request for BswMEcuMRUNRequestIndication configured.' and Deactivateable: 'BswM_EcuMRunRequestMappingECU2.ImmediateUserEndIdx' Reason: 'No Mode Request for BswMEcuMRUNRequestIndication configured.' */
#define BSWM_IMMEDIATEUSERSTARTIDXOFECUMRUNREQUESTMAPPING             STD_OFF  /**< Deactivateable: 'BswM_EcuMRunRequestMappingECU1.ImmediateUserStartIdx' Reason: 'No Mode Request for BswMEcuMRUNRequestIndication configured.' and Deactivateable: 'BswM_EcuMRunRequestMappingECU2.ImmediateUserStartIdx' Reason: 'No Mode Request for BswMEcuMRUNRequestIndication configured.' */
#define BSWM_IMMEDIATEUSERUSEDOFECUMRUNREQUESTMAPPING                 STD_OFF  /**< Deactivateable: 'BswM_EcuMRunRequestMappingECU1.ImmediateUserUsed' Reason: 'No Mode Request for BswMEcuMRUNRequestIndication configured.' and Deactivateable: 'BswM_EcuMRunRequestMappingECU2.ImmediateUserUsed' Reason: 'No Mode Request for BswMEcuMRUNRequestIndication configured.' */
#define BSWM_INITVALUEOFECUMRUNREQUESTMAPPING                         STD_OFF  /**< Deactivateable: 'BswM_EcuMRunRequestMappingECU1.InitValue' Reason: 'No Mode Request for BswMEcuMRUNRequestIndication configured.' and Deactivateable: 'BswM_EcuMRunRequestMappingECU2.InitValue' Reason: 'No Mode Request for BswMEcuMRUNRequestIndication configured.' */
#define BSWM_ECUMRUNREQUESTSTATE                                      STD_OFF  /**< Deactivateable: 'BswM_EcuMRunRequestStateECU1' Reason: 'No Mode Request for BswMEcuMRUNRequestIndication configured.' and Deactivateable: 'BswM_EcuMRunRequestStateECU2' Reason: 'No Mode Request for BswMEcuMRUNRequestIndication configured.' */
#define BSWM_ECUMSELECTSHUTDOWNTARGETPARAMETERS                       STD_OFF  /**< Deactivateable: 'BswM_EcuMSelectShutdownTargetParametersECU1' Reason: 'Action of type 'EcuMSelectShutdownTarget' not in configuration.' and Deactivateable: 'BswM_EcuMSelectShutdownTargetParametersECU2' Reason: 'Action of type 'EcuMSelectShutdownTarget' not in configuration.' */
#define BSWM_RESETSLEEPMODEOFECUMSELECTSHUTDOWNTARGETPARAMETERS       STD_OFF  /**< Deactivateable: 'BswM_EcuMSelectShutdownTargetParametersECU1.ResetSleepMode' Reason: 'Action of type 'EcuMSelectShutdownTarget' not in configuration.' and Deactivateable: 'BswM_EcuMSelectShutdownTargetParametersECU2.ResetSleepMode' Reason: 'Action of type 'EcuMSelectShutdownTarget' not in configuration.' */
#define BSWM_TARGETSTATEOFECUMSELECTSHUTDOWNTARGETPARAMETERS          STD_OFF  /**< Deactivateable: 'BswM_EcuMSelectShutdownTargetParametersECU1.TargetState' Reason: 'Action of type 'EcuMSelectShutdownTarget' not in configuration.' and Deactivateable: 'BswM_EcuMSelectShutdownTargetParametersECU2.TargetState' Reason: 'Action of type 'EcuMSelectShutdownTarget' not in configuration.' */
#define BSWM_ECUMSTATESWITCHPARAMETERS                                STD_OFF  /**< Deactivateable: 'BswM_EcuMStateSwitchParametersECU1' Reason: 'Action of type 'EcuMStateSwitch' not in configuration.' and Deactivateable: 'BswM_EcuMStateSwitchParametersECU2' Reason: 'Action of type 'EcuMStateSwitch' not in configuration.' */
#define BSWM_TARGETSTATEOFECUMSTATESWITCHPARAMETERS                   STD_OFF  /**< Deactivateable: 'BswM_EcuMStateSwitchParametersECU1.TargetState' Reason: 'Action of type 'EcuMStateSwitch' not in configuration.' and Deactivateable: 'BswM_EcuMStateSwitchParametersECU2.TargetState' Reason: 'Action of type 'EcuMStateSwitch' not in configuration.' */
#define BSWM_ECUMWAKEUPMAPPING                                        STD_OFF  /**< Deactivateable: 'BswM_EcuMWakeupMappingECU1' Reason: 'No Mode Request for BswMEcuMWakeupSource configured.' and Deactivateable: 'BswM_EcuMWakeupMappingECU2' Reason: 'No Mode Request for BswMEcuMWakeupSource configured.' */
#define BSWM_EXTERNALIDOFECUMWAKEUPMAPPING                            STD_OFF  /**< Deactivateable: 'BswM_EcuMWakeupMappingECU1.ExternalId' Reason: 'No Mode Request for BswMEcuMWakeupSource configured.' and Deactivateable: 'BswM_EcuMWakeupMappingECU2.ExternalId' Reason: 'No Mode Request for BswMEcuMWakeupSource configured.' */
#define BSWM_IMMEDIATEUSERENDIDXOFECUMWAKEUPMAPPING                   STD_OFF  /**< Deactivateable: 'BswM_EcuMWakeupMappingECU1.ImmediateUserEndIdx' Reason: 'No Mode Request for BswMEcuMWakeupSource configured.' and Deactivateable: 'BswM_EcuMWakeupMappingECU2.ImmediateUserEndIdx' Reason: 'No Mode Request for BswMEcuMWakeupSource configured.' */
#define BSWM_IMMEDIATEUSERSTARTIDXOFECUMWAKEUPMAPPING                 STD_OFF  /**< Deactivateable: 'BswM_EcuMWakeupMappingECU1.ImmediateUserStartIdx' Reason: 'No Mode Request for BswMEcuMWakeupSource configured.' and Deactivateable: 'BswM_EcuMWakeupMappingECU2.ImmediateUserStartIdx' Reason: 'No Mode Request for BswMEcuMWakeupSource configured.' */
#define BSWM_IMMEDIATEUSERUSEDOFECUMWAKEUPMAPPING                     STD_OFF  /**< Deactivateable: 'BswM_EcuMWakeupMappingECU1.ImmediateUserUsed' Reason: 'No Mode Request for BswMEcuMWakeupSource configured.' and Deactivateable: 'BswM_EcuMWakeupMappingECU2.ImmediateUserUsed' Reason: 'No Mode Request for BswMEcuMWakeupSource configured.' */
#define BSWM_INITVALUEOFECUMWAKEUPMAPPING                             STD_OFF  /**< Deactivateable: 'BswM_EcuMWakeupMappingECU1.InitValue' Reason: 'No Mode Request for BswMEcuMWakeupSource configured.' and Deactivateable: 'BswM_EcuMWakeupMappingECU2.InitValue' Reason: 'No Mode Request for BswMEcuMWakeupSource configured.' */
#define BSWM_ECUMWAKEUPSTATE                                          STD_OFF  /**< Deactivateable: 'BswM_EcuMWakeupStateECU1' Reason: 'No Mode Request for BswMEcuMWakeupSource configured.' and Deactivateable: 'BswM_EcuMWakeupStateECU2' Reason: 'No Mode Request for BswMEcuMWakeupSource configured.' */
#define BSWM_ETHIFPORTMAPPING                                         STD_OFF  /**< Deactivateable: 'BswM_EthIfPortMappingECU1' Reason: 'No Mode Request for BswMEthIfPortGroupLinkStateChg configured.' and Deactivateable: 'BswM_EthIfPortMappingECU2' Reason: 'No Mode Request for BswMEthIfPortGroupLinkStateChg configured.' */
#define BSWM_EXTERNALIDOFETHIFPORTMAPPING                             STD_OFF  /**< Deactivateable: 'BswM_EthIfPortMappingECU1.ExternalId' Reason: 'No Mode Request for BswMEthIfPortGroupLinkStateChg configured.' and Deactivateable: 'BswM_EthIfPortMappingECU2.ExternalId' Reason: 'No Mode Request for BswMEthIfPortGroupLinkStateChg configured.' */
#define BSWM_IMMEDIATEUSERENDIDXOFETHIFPORTMAPPING                    STD_OFF  /**< Deactivateable: 'BswM_EthIfPortMappingECU1.ImmediateUserEndIdx' Reason: 'No Mode Request for BswMEthIfPortGroupLinkStateChg configured.' and Deactivateable: 'BswM_EthIfPortMappingECU2.ImmediateUserEndIdx' Reason: 'No Mode Request for BswMEthIfPortGroupLinkStateChg configured.' */
#define BSWM_IMMEDIATEUSERSTARTIDXOFETHIFPORTMAPPING                  STD_OFF  /**< Deactivateable: 'BswM_EthIfPortMappingECU1.ImmediateUserStartIdx' Reason: 'No Mode Request for BswMEthIfPortGroupLinkStateChg configured.' and Deactivateable: 'BswM_EthIfPortMappingECU2.ImmediateUserStartIdx' Reason: 'No Mode Request for BswMEthIfPortGroupLinkStateChg configured.' */
#define BSWM_IMMEDIATEUSERUSEDOFETHIFPORTMAPPING                      STD_OFF  /**< Deactivateable: 'BswM_EthIfPortMappingECU1.ImmediateUserUsed' Reason: 'No Mode Request for BswMEthIfPortGroupLinkStateChg configured.' and Deactivateable: 'BswM_EthIfPortMappingECU2.ImmediateUserUsed' Reason: 'No Mode Request for BswMEthIfPortGroupLinkStateChg configured.' */
#define BSWM_INITVALUEOFETHIFPORTMAPPING                              STD_OFF  /**< Deactivateable: 'BswM_EthIfPortMappingECU1.InitValue' Reason: 'No Mode Request for BswMEthIfPortGroupLinkStateChg configured.' and Deactivateable: 'BswM_EthIfPortMappingECU2.InitValue' Reason: 'No Mode Request for BswMEthIfPortGroupLinkStateChg configured.' */
#define BSWM_ETHIFPORTSTATE                                           STD_OFF  /**< Deactivateable: 'BswM_EthIfPortStateECU1' Reason: 'No Mode Request for BswMEthIfPortGroupLinkStateChg configured.' and Deactivateable: 'BswM_EthIfPortStateECU2' Reason: 'No Mode Request for BswMEthIfPortGroupLinkStateChg configured.' */
#define BSWM_ETHSMMAPPING                                             STD_OFF  /**< Deactivateable: 'BswM_EthSMMappingECU1' Reason: 'No Mode Request for BswMEthSMIndication configured.' and Deactivateable: 'BswM_EthSMMappingECU2' Reason: 'No Mode Request for BswMEthSMIndication configured.' */
#define BSWM_EXTERNALIDOFETHSMMAPPING                                 STD_OFF  /**< Deactivateable: 'BswM_EthSMMappingECU1.ExternalId' Reason: 'No Mode Request for BswMEthSMIndication configured.' and Deactivateable: 'BswM_EthSMMappingECU2.ExternalId' Reason: 'No Mode Request for BswMEthSMIndication configured.' */
#define BSWM_IMMEDIATEUSERENDIDXOFETHSMMAPPING                        STD_OFF  /**< Deactivateable: 'BswM_EthSMMappingECU1.ImmediateUserEndIdx' Reason: 'No Mode Request for BswMEthSMIndication configured.' and Deactivateable: 'BswM_EthSMMappingECU2.ImmediateUserEndIdx' Reason: 'No Mode Request for BswMEthSMIndication configured.' */
#define BSWM_IMMEDIATEUSERSTARTIDXOFETHSMMAPPING                      STD_OFF  /**< Deactivateable: 'BswM_EthSMMappingECU1.ImmediateUserStartIdx' Reason: 'No Mode Request for BswMEthSMIndication configured.' and Deactivateable: 'BswM_EthSMMappingECU2.ImmediateUserStartIdx' Reason: 'No Mode Request for BswMEthSMIndication configured.' */
#define BSWM_IMMEDIATEUSERUSEDOFETHSMMAPPING                          STD_OFF  /**< Deactivateable: 'BswM_EthSMMappingECU1.ImmediateUserUsed' Reason: 'No Mode Request for BswMEthSMIndication configured.' and Deactivateable: 'BswM_EthSMMappingECU2.ImmediateUserUsed' Reason: 'No Mode Request for BswMEthSMIndication configured.' */
#define BSWM_INITVALUEOFETHSMMAPPING                                  STD_OFF  /**< Deactivateable: 'BswM_EthSMMappingECU1.InitValue' Reason: 'No Mode Request for BswMEthSMIndication configured.' and Deactivateable: 'BswM_EthSMMappingECU2.InitValue' Reason: 'No Mode Request for BswMEthSMIndication configured.' */
#define BSWM_ETHSMSTATE                                               STD_OFF  /**< Deactivateable: 'BswM_EthSMStateECU1' Reason: 'No Mode Request for BswMEthSMIndication configured.' and Deactivateable: 'BswM_EthSMStateECU2' Reason: 'No Mode Request for BswMEthSMIndication configured.' */
#define BSWM_EXPRESSIONS                                              STD_ON
#define BSWM_FINALMAGICNUMBER                                         STD_OFF  /**< Deactivateable: 'BswM_FinalMagicNumber' Reason: 'the module configuration does not support flashing of data.' */
#define BSWM_FRSMMAPPING                                              STD_OFF  /**< Deactivateable: 'BswM_FrSMMappingECU1' Reason: 'No Mode Request for BswMFrSMIndication configured.' and Deactivateable: 'BswM_FrSMMappingECU2' Reason: 'No Mode Request for BswMFrSMIndication configured.' */
#define BSWM_EXTERNALIDOFFRSMMAPPING                                  STD_OFF  /**< Deactivateable: 'BswM_FrSMMappingECU1.ExternalId' Reason: 'No Mode Request for BswMFrSMIndication configured.' and Deactivateable: 'BswM_FrSMMappingECU2.ExternalId' Reason: 'No Mode Request for BswMFrSMIndication configured.' */
#define BSWM_IMMEDIATEUSERENDIDXOFFRSMMAPPING                         STD_OFF  /**< Deactivateable: 'BswM_FrSMMappingECU1.ImmediateUserEndIdx' Reason: 'No Mode Request for BswMFrSMIndication configured.' and Deactivateable: 'BswM_FrSMMappingECU2.ImmediateUserEndIdx' Reason: 'No Mode Request for BswMFrSMIndication configured.' */
#define BSWM_IMMEDIATEUSERSTARTIDXOFFRSMMAPPING                       STD_OFF  /**< Deactivateable: 'BswM_FrSMMappingECU1.ImmediateUserStartIdx' Reason: 'No Mode Request for BswMFrSMIndication configured.' and Deactivateable: 'BswM_FrSMMappingECU2.ImmediateUserStartIdx' Reason: 'No Mode Request for BswMFrSMIndication configured.' */
#define BSWM_IMMEDIATEUSERUSEDOFFRSMMAPPING                           STD_OFF  /**< Deactivateable: 'BswM_FrSMMappingECU1.ImmediateUserUsed' Reason: 'No Mode Request for BswMFrSMIndication configured.' and Deactivateable: 'BswM_FrSMMappingECU2.ImmediateUserUsed' Reason: 'No Mode Request for BswMFrSMIndication configured.' */
#define BSWM_INITVALUEOFFRSMMAPPING                                   STD_OFF  /**< Deactivateable: 'BswM_FrSMMappingECU1.InitValue' Reason: 'No Mode Request for BswMFrSMIndication configured.' and Deactivateable: 'BswM_FrSMMappingECU2.InitValue' Reason: 'No Mode Request for BswMFrSMIndication configured.' */
#define BSWM_FRSMSTATE                                                STD_OFF  /**< Deactivateable: 'BswM_FrSMStateECU1' Reason: 'No Mode Request for BswMFrSMIndication configured.' and Deactivateable: 'BswM_FrSMStateECU2' Reason: 'No Mode Request for BswMFrSMIndication configured.' */
#define BSWM_GENERICMAPPING                                           STD_ON
#define BSWM_EXTERNALIDOFGENERICMAPPING                               STD_ON
#define BSWM_IMMEDIATEUSERENDIDXOFGENERICMAPPING                      STD_ON
#define BSWM_IMMEDIATEUSERSTARTIDXOFGENERICMAPPING                    STD_ON
#define BSWM_IMMEDIATEUSERUSEDOFGENERICMAPPING                        STD_ON
#define BSWM_INITVALUEOFGENERICMAPPING                                STD_ON
#define BSWM_GENERICMODEPARAMETERS                                    STD_ON
#define BSWM_MODEOFGENERICMODEPARAMETERS                              STD_ON
#define BSWM_USEROFGENERICMODEPARAMETERS                              STD_ON
#define BSWM_GENERICSTATE                                             STD_ON
#define BSWM_IMMEDIATEUSER                                            STD_ON
#define BSWM_FORCEDOFIMMEDIATEUSER                                    STD_ON
#define BSWM_MASKEDBITSOFIMMEDIATEUSER                                STD_ON
#define BSWM_ONINITOFIMMEDIATEUSER                                    STD_ON
#define BSWM_RULESINDENDIDXOFIMMEDIATEUSER                            STD_ON
#define BSWM_RULESINDSTARTIDXOFIMMEDIATEUSER                          STD_ON
#define BSWM_RULESINDUSEDOFIMMEDIATEUSER                              STD_ON
#define BSWM_INITACTIONLISTS                                          STD_ON
#define BSWM_INITDATAHASHCODE                                         STD_OFF  /**< Deactivateable: 'BswM_InitDataHashCode' Reason: 'the module configuration does not support flashing of data.' */
#define BSWM_INITVALUES                                               STD_ON
#define BSWM_INITIALIZED                                              STD_ON
#define BSWM_J1939DCMMAPPING                                          STD_OFF  /**< Deactivateable: 'BswM_J1939DcmMappingECU1' Reason: 'No Mode Request for BswMJ1939DcmBroadcastStatus configured.' and Deactivateable: 'BswM_J1939DcmMappingECU2' Reason: 'No Mode Request for BswMJ1939DcmBroadcastStatus configured.' */
#define BSWM_IMMEDIATEUSERENDIDXOFJ1939DCMMAPPING                     STD_OFF  /**< Deactivateable: 'BswM_J1939DcmMappingECU1.ImmediateUserEndIdx' Reason: 'No Mode Request for BswMJ1939DcmBroadcastStatus configured.' and Deactivateable: 'BswM_J1939DcmMappingECU2.ImmediateUserEndIdx' Reason: 'No Mode Request for BswMJ1939DcmBroadcastStatus configured.' */
#define BSWM_IMMEDIATEUSERSTARTIDXOFJ1939DCMMAPPING                   STD_OFF  /**< Deactivateable: 'BswM_J1939DcmMappingECU1.ImmediateUserStartIdx' Reason: 'No Mode Request for BswMJ1939DcmBroadcastStatus configured.' and Deactivateable: 'BswM_J1939DcmMappingECU2.ImmediateUserStartIdx' Reason: 'No Mode Request for BswMJ1939DcmBroadcastStatus configured.' */
#define BSWM_IMMEDIATEUSERUSEDOFJ1939DCMMAPPING                       STD_OFF  /**< Deactivateable: 'BswM_J1939DcmMappingECU1.ImmediateUserUsed' Reason: 'No Mode Request for BswMJ1939DcmBroadcastStatus configured.' and Deactivateable: 'BswM_J1939DcmMappingECU2.ImmediateUserUsed' Reason: 'No Mode Request for BswMJ1939DcmBroadcastStatus configured.' */
#define BSWM_INITVALUEOFJ1939DCMMAPPING                               STD_OFF  /**< Deactivateable: 'BswM_J1939DcmMappingECU1.InitValue' Reason: 'No Mode Request for BswMJ1939DcmBroadcastStatus configured.' and Deactivateable: 'BswM_J1939DcmMappingECU2.InitValue' Reason: 'No Mode Request for BswMJ1939DcmBroadcastStatus configured.' */
#define BSWM_J1939DCMSTATE                                            STD_OFF  /**< Deactivateable: 'BswM_J1939DcmStateECU1' Reason: 'No Mode Request for BswMJ1939DcmBroadcastStatus configured.' and Deactivateable: 'BswM_J1939DcmStateECU2' Reason: 'No Mode Request for BswMJ1939DcmBroadcastStatus configured.' */
#define BSWM_J1939DCMSTATEPARAMETERS                                  STD_OFF  /**< Deactivateable: 'BswM_J1939DcmStateParametersECU1' Reason: 'Action of type 'J1939DcmState' not in configuration.' and Deactivateable: 'BswM_J1939DcmStateParametersECU2' Reason: 'Action of type 'J1939DcmState' not in configuration.' */
#define BSWM_NETWORKOFJ1939DCMSTATEPARAMETERS                         STD_OFF  /**< Deactivateable: 'BswM_J1939DcmStateParametersECU1.Network' Reason: 'Action of type 'J1939DcmState' not in configuration.' and Deactivateable: 'BswM_J1939DcmStateParametersECU2.Network' Reason: 'Action of type 'J1939DcmState' not in configuration.' */
#define BSWM_NODEOFJ1939DCMSTATEPARAMETERS                            STD_OFF  /**< Deactivateable: 'BswM_J1939DcmStateParametersECU1.Node' Reason: 'Action of type 'J1939DcmState' not in configuration.' and Deactivateable: 'BswM_J1939DcmStateParametersECU2.Node' Reason: 'Action of type 'J1939DcmState' not in configuration.' */
#define BSWM_STATEOFJ1939DCMSTATEPARAMETERS                           STD_OFF  /**< Deactivateable: 'BswM_J1939DcmStateParametersECU1.State' Reason: 'Action of type 'J1939DcmState' not in configuration.' and Deactivateable: 'BswM_J1939DcmStateParametersECU2.State' Reason: 'Action of type 'J1939DcmState' not in configuration.' */
#define BSWM_J1939NMMAPPING                                           STD_OFF  /**< Deactivateable: 'BswM_J1939NmMappingECU1' Reason: 'No Mode Request for BswMJ1939NmIndication configured.' and Deactivateable: 'BswM_J1939NmMappingECU2' Reason: 'No Mode Request for BswMJ1939NmIndication configured.' */
#define BSWM_EXTERNALIDOFJ1939NMMAPPING                               STD_OFF  /**< Deactivateable: 'BswM_J1939NmMappingECU1.ExternalId' Reason: 'No Mode Request for BswMJ1939NmIndication configured.' and Deactivateable: 'BswM_J1939NmMappingECU2.ExternalId' Reason: 'No Mode Request for BswMJ1939NmIndication configured.' */
#define BSWM_IMMEDIATEUSERENDIDXOFJ1939NMMAPPING                      STD_OFF  /**< Deactivateable: 'BswM_J1939NmMappingECU1.ImmediateUserEndIdx' Reason: 'No Mode Request for BswMJ1939NmIndication configured.' and Deactivateable: 'BswM_J1939NmMappingECU2.ImmediateUserEndIdx' Reason: 'No Mode Request for BswMJ1939NmIndication configured.' */
#define BSWM_IMMEDIATEUSERSTARTIDXOFJ1939NMMAPPING                    STD_OFF  /**< Deactivateable: 'BswM_J1939NmMappingECU1.ImmediateUserStartIdx' Reason: 'No Mode Request for BswMJ1939NmIndication configured.' and Deactivateable: 'BswM_J1939NmMappingECU2.ImmediateUserStartIdx' Reason: 'No Mode Request for BswMJ1939NmIndication configured.' */
#define BSWM_IMMEDIATEUSERUSEDOFJ1939NMMAPPING                        STD_OFF  /**< Deactivateable: 'BswM_J1939NmMappingECU1.ImmediateUserUsed' Reason: 'No Mode Request for BswMJ1939NmIndication configured.' and Deactivateable: 'BswM_J1939NmMappingECU2.ImmediateUserUsed' Reason: 'No Mode Request for BswMJ1939NmIndication configured.' */
#define BSWM_INITVALUEOFJ1939NMMAPPING                                STD_OFF  /**< Deactivateable: 'BswM_J1939NmMappingECU1.InitValue' Reason: 'No Mode Request for BswMJ1939NmIndication configured.' and Deactivateable: 'BswM_J1939NmMappingECU2.InitValue' Reason: 'No Mode Request for BswMJ1939NmIndication configured.' */
#define BSWM_J1939NMSTATE                                             STD_OFF  /**< Deactivateable: 'BswM_J1939NmStateECU1' Reason: 'No Mode Request for BswMJ1939NmIndication configured.' and Deactivateable: 'BswM_J1939NmStateECU2' Reason: 'No Mode Request for BswMJ1939NmIndication configured.' */
#define BSWM_J1939RMSTATEPARAMETERS                                   STD_OFF  /**< Deactivateable: 'BswM_J1939RmStateParametersECU1' Reason: 'Action of type 'J1939RmState' not in configuration.' and Deactivateable: 'BswM_J1939RmStateParametersECU2' Reason: 'Action of type 'J1939RmState' not in configuration.' */
#define BSWM_NETWORKOFJ1939RMSTATEPARAMETERS                          STD_OFF  /**< Deactivateable: 'BswM_J1939RmStateParametersECU1.Network' Reason: 'Action of type 'J1939RmState' not in configuration.' and Deactivateable: 'BswM_J1939RmStateParametersECU2.Network' Reason: 'Action of type 'J1939RmState' not in configuration.' */
#define BSWM_NODEOFJ1939RMSTATEPARAMETERS                             STD_OFF  /**< Deactivateable: 'BswM_J1939RmStateParametersECU1.Node' Reason: 'Action of type 'J1939RmState' not in configuration.' and Deactivateable: 'BswM_J1939RmStateParametersECU2.Node' Reason: 'Action of type 'J1939RmState' not in configuration.' */
#define BSWM_STATEOFJ1939RMSTATEPARAMETERS                            STD_OFF  /**< Deactivateable: 'BswM_J1939RmStateParametersECU1.State' Reason: 'Action of type 'J1939RmState' not in configuration.' and Deactivateable: 'BswM_J1939RmStateParametersECU2.State' Reason: 'Action of type 'J1939RmState' not in configuration.' */
#define BSWM_LINSMMAPPING                                             STD_OFF  /**< Deactivateable: 'BswM_LinSMMappingECU1' Reason: 'No Mode Request for BswMLinSMIndication configured.' and Deactivateable: 'BswM_LinSMMappingECU2' Reason: 'No Mode Request for BswMLinSMIndication configured.' */
#define BSWM_EXTERNALIDOFLINSMMAPPING                                 STD_OFF  /**< Deactivateable: 'BswM_LinSMMappingECU1.ExternalId' Reason: 'No Mode Request for BswMLinSMIndication configured.' and Deactivateable: 'BswM_LinSMMappingECU2.ExternalId' Reason: 'No Mode Request for BswMLinSMIndication configured.' */
#define BSWM_IMMEDIATEUSERENDIDXOFLINSMMAPPING                        STD_OFF  /**< Deactivateable: 'BswM_LinSMMappingECU1.ImmediateUserEndIdx' Reason: 'No Mode Request for BswMLinSMIndication configured.' and Deactivateable: 'BswM_LinSMMappingECU2.ImmediateUserEndIdx' Reason: 'No Mode Request for BswMLinSMIndication configured.' */
#define BSWM_IMMEDIATEUSERSTARTIDXOFLINSMMAPPING                      STD_OFF  /**< Deactivateable: 'BswM_LinSMMappingECU1.ImmediateUserStartIdx' Reason: 'No Mode Request for BswMLinSMIndication configured.' and Deactivateable: 'BswM_LinSMMappingECU2.ImmediateUserStartIdx' Reason: 'No Mode Request for BswMLinSMIndication configured.' */
#define BSWM_IMMEDIATEUSERUSEDOFLINSMMAPPING                          STD_OFF  /**< Deactivateable: 'BswM_LinSMMappingECU1.ImmediateUserUsed' Reason: 'No Mode Request for BswMLinSMIndication configured.' and Deactivateable: 'BswM_LinSMMappingECU2.ImmediateUserUsed' Reason: 'No Mode Request for BswMLinSMIndication configured.' */
#define BSWM_INITVALUEOFLINSMMAPPING                                  STD_OFF  /**< Deactivateable: 'BswM_LinSMMappingECU1.InitValue' Reason: 'No Mode Request for BswMLinSMIndication configured.' and Deactivateable: 'BswM_LinSMMappingECU2.InitValue' Reason: 'No Mode Request for BswMLinSMIndication configured.' */
#define BSWM_LINSMSTATE                                               STD_OFF  /**< Deactivateable: 'BswM_LinSMStateECU1' Reason: 'No Mode Request for BswMLinSMIndication configured.' and Deactivateable: 'BswM_LinSMStateECU2' Reason: 'No Mode Request for BswMLinSMIndication configured.' */
#define BSWM_LINSCHEDULEENDMAPPING                                    STD_OFF  /**< Deactivateable: 'BswM_LinScheduleEndMappingECU1' Reason: 'No Mode Request for BswMLinScheduleEndNotification configured.' and Deactivateable: 'BswM_LinScheduleEndMappingECU2' Reason: 'No Mode Request for BswMLinScheduleEndNotification configured.' */
#define BSWM_EXTERNALIDOFLINSCHEDULEENDMAPPING                        STD_OFF  /**< Deactivateable: 'BswM_LinScheduleEndMappingECU1.ExternalId' Reason: 'No Mode Request for BswMLinScheduleEndNotification configured.' and Deactivateable: 'BswM_LinScheduleEndMappingECU2.ExternalId' Reason: 'No Mode Request for BswMLinScheduleEndNotification configured.' */
#define BSWM_IMMEDIATEUSERENDIDXOFLINSCHEDULEENDMAPPING               STD_OFF  /**< Deactivateable: 'BswM_LinScheduleEndMappingECU1.ImmediateUserEndIdx' Reason: 'No Mode Request for BswMLinScheduleEndNotification configured.' and Deactivateable: 'BswM_LinScheduleEndMappingECU2.ImmediateUserEndIdx' Reason: 'No Mode Request for BswMLinScheduleEndNotification configured.' */
#define BSWM_IMMEDIATEUSERSTARTIDXOFLINSCHEDULEENDMAPPING             STD_OFF  /**< Deactivateable: 'BswM_LinScheduleEndMappingECU1.ImmediateUserStartIdx' Reason: 'No Mode Request for BswMLinScheduleEndNotification configured.' and Deactivateable: 'BswM_LinScheduleEndMappingECU2.ImmediateUserStartIdx' Reason: 'No Mode Request for BswMLinScheduleEndNotification configured.' */
#define BSWM_IMMEDIATEUSERUSEDOFLINSCHEDULEENDMAPPING                 STD_OFF  /**< Deactivateable: 'BswM_LinScheduleEndMappingECU1.ImmediateUserUsed' Reason: 'No Mode Request for BswMLinScheduleEndNotification configured.' and Deactivateable: 'BswM_LinScheduleEndMappingECU2.ImmediateUserUsed' Reason: 'No Mode Request for BswMLinScheduleEndNotification configured.' */
#define BSWM_INITVALUEOFLINSCHEDULEENDMAPPING                         STD_OFF  /**< Deactivateable: 'BswM_LinScheduleEndMappingECU1.InitValue' Reason: 'No Mode Request for BswMLinScheduleEndNotification configured.' and Deactivateable: 'BswM_LinScheduleEndMappingECU2.InitValue' Reason: 'No Mode Request for BswMLinScheduleEndNotification configured.' */
#define BSWM_LINSCHEDULEENDSTATE                                      STD_OFF  /**< Deactivateable: 'BswM_LinScheduleEndStateECU1' Reason: 'No Mode Request for BswMLinScheduleEndNotification configured.' and Deactivateable: 'BswM_LinScheduleEndStateECU2' Reason: 'No Mode Request for BswMLinScheduleEndNotification configured.' */
#define BSWM_LINSCHEDULEMAPPING                                       STD_OFF  /**< Deactivateable: 'BswM_LinScheduleMappingECU1' Reason: 'No Mode Request for BswMLinScheduleIndication configured.' and Deactivateable: 'BswM_LinScheduleMappingECU2' Reason: 'No Mode Request for BswMLinScheduleIndication configured.' */
#define BSWM_EXTERNALIDOFLINSCHEDULEMAPPING                           STD_OFF  /**< Deactivateable: 'BswM_LinScheduleMappingECU1.ExternalId' Reason: 'No Mode Request for BswMLinScheduleIndication configured.' and Deactivateable: 'BswM_LinScheduleMappingECU2.ExternalId' Reason: 'No Mode Request for BswMLinScheduleIndication configured.' */
#define BSWM_IMMEDIATEUSERENDIDXOFLINSCHEDULEMAPPING                  STD_OFF  /**< Deactivateable: 'BswM_LinScheduleMappingECU1.ImmediateUserEndIdx' Reason: 'No Mode Request for BswMLinScheduleIndication configured.' and Deactivateable: 'BswM_LinScheduleMappingECU2.ImmediateUserEndIdx' Reason: 'No Mode Request for BswMLinScheduleIndication configured.' */
#define BSWM_IMMEDIATEUSERSTARTIDXOFLINSCHEDULEMAPPING                STD_OFF  /**< Deactivateable: 'BswM_LinScheduleMappingECU1.ImmediateUserStartIdx' Reason: 'No Mode Request for BswMLinScheduleIndication configured.' and Deactivateable: 'BswM_LinScheduleMappingECU2.ImmediateUserStartIdx' Reason: 'No Mode Request for BswMLinScheduleIndication configured.' */
#define BSWM_IMMEDIATEUSERUSEDOFLINSCHEDULEMAPPING                    STD_OFF  /**< Deactivateable: 'BswM_LinScheduleMappingECU1.ImmediateUserUsed' Reason: 'No Mode Request for BswMLinScheduleIndication configured.' and Deactivateable: 'BswM_LinScheduleMappingECU2.ImmediateUserUsed' Reason: 'No Mode Request for BswMLinScheduleIndication configured.' */
#define BSWM_INITVALUEOFLINSCHEDULEMAPPING                            STD_OFF  /**< Deactivateable: 'BswM_LinScheduleMappingECU1.InitValue' Reason: 'No Mode Request for BswMLinScheduleIndication configured.' and Deactivateable: 'BswM_LinScheduleMappingECU2.InitValue' Reason: 'No Mode Request for BswMLinScheduleIndication configured.' */
#define BSWM_LINSCHEDULEREQUESTPARAMETERS                             STD_OFF  /**< Deactivateable: 'BswM_LinScheduleRequestParametersECU1' Reason: 'Action of type 'LinScheduleRequest' not in configuration.' and Deactivateable: 'BswM_LinScheduleRequestParametersECU2' Reason: 'Action of type 'LinScheduleRequest' not in configuration.' */
#define BSWM_NETWORKOFLINSCHEDULEREQUESTPARAMETERS                    STD_OFF  /**< Deactivateable: 'BswM_LinScheduleRequestParametersECU1.Network' Reason: 'Action of type 'LinScheduleRequest' not in configuration.' and Deactivateable: 'BswM_LinScheduleRequestParametersECU2.Network' Reason: 'Action of type 'LinScheduleRequest' not in configuration.' */
#define BSWM_SCHEDULEOFLINSCHEDULEREQUESTPARAMETERS                   STD_OFF  /**< Deactivateable: 'BswM_LinScheduleRequestParametersECU1.Schedule' Reason: 'Action of type 'LinScheduleRequest' not in configuration.' and Deactivateable: 'BswM_LinScheduleRequestParametersECU2.Schedule' Reason: 'Action of type 'LinScheduleRequest' not in configuration.' */
#define BSWM_LINSCHEDULESTATE                                         STD_OFF  /**< Deactivateable: 'BswM_LinScheduleStateECU1' Reason: 'No Mode Request for BswMLinScheduleIndication configured.' and Deactivateable: 'BswM_LinScheduleStateECU2' Reason: 'No Mode Request for BswMLinScheduleIndication configured.' */
#define BSWM_LINTPMAPPING                                             STD_OFF  /**< Deactivateable: 'BswM_LinTPMappingECU1' Reason: 'No Mode Request for BswMLinTpModeRequest configured.' and Deactivateable: 'BswM_LinTPMappingECU2' Reason: 'No Mode Request for BswMLinTpModeRequest configured.' */
#define BSWM_EXTERNALIDOFLINTPMAPPING                                 STD_OFF  /**< Deactivateable: 'BswM_LinTPMappingECU1.ExternalId' Reason: 'No Mode Request for BswMLinTpModeRequest configured.' and Deactivateable: 'BswM_LinTPMappingECU2.ExternalId' Reason: 'No Mode Request for BswMLinTpModeRequest configured.' */
#define BSWM_IMMEDIATEUSERENDIDXOFLINTPMAPPING                        STD_OFF  /**< Deactivateable: 'BswM_LinTPMappingECU1.ImmediateUserEndIdx' Reason: 'No Mode Request for BswMLinTpModeRequest configured.' and Deactivateable: 'BswM_LinTPMappingECU2.ImmediateUserEndIdx' Reason: 'No Mode Request for BswMLinTpModeRequest configured.' */
#define BSWM_IMMEDIATEUSERSTARTIDXOFLINTPMAPPING                      STD_OFF  /**< Deactivateable: 'BswM_LinTPMappingECU1.ImmediateUserStartIdx' Reason: 'No Mode Request for BswMLinTpModeRequest configured.' and Deactivateable: 'BswM_LinTPMappingECU2.ImmediateUserStartIdx' Reason: 'No Mode Request for BswMLinTpModeRequest configured.' */
#define BSWM_IMMEDIATEUSERUSEDOFLINTPMAPPING                          STD_OFF  /**< Deactivateable: 'BswM_LinTPMappingECU1.ImmediateUserUsed' Reason: 'No Mode Request for BswMLinTpModeRequest configured.' and Deactivateable: 'BswM_LinTPMappingECU2.ImmediateUserUsed' Reason: 'No Mode Request for BswMLinTpModeRequest configured.' */
#define BSWM_INITVALUEOFLINTPMAPPING                                  STD_OFF  /**< Deactivateable: 'BswM_LinTPMappingECU1.InitValue' Reason: 'No Mode Request for BswMLinTpModeRequest configured.' and Deactivateable: 'BswM_LinTPMappingECU2.InitValue' Reason: 'No Mode Request for BswMLinTpModeRequest configured.' */
#define BSWM_LINTPSTATE                                               STD_OFF  /**< Deactivateable: 'BswM_LinTPStateECU1' Reason: 'No Mode Request for BswMLinTpModeRequest configured.' and Deactivateable: 'BswM_LinTPStateECU2' Reason: 'No Mode Request for BswMLinTpModeRequest configured.' */
#define BSWM_MODENOTIFICATIONMAPPING                                  STD_OFF  /**< Deactivateable: 'BswM_ModeNotificationMappingECU1' Reason: 'the struct is deactivated because all elements are deactivated.' and Deactivateable: 'BswM_ModeNotificationMappingECU2' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define BSWM_IMMEDIATEUSERENDIDXOFMODENOTIFICATIONMAPPING             STD_OFF  /**< Deactivateable: 'BswM_ModeNotificationMappingECU1.ImmediateUserEndIdx' Reason: 'the struct is deactivated because all elements are deactivated.' and Deactivateable: 'BswM_ModeNotificationMappingECU2.ImmediateUserEndIdx' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define BSWM_IMMEDIATEUSERSTARTIDXOFMODENOTIFICATIONMAPPING           STD_OFF  /**< Deactivateable: 'BswM_ModeNotificationMappingECU1.ImmediateUserStartIdx' Reason: 'the struct is deactivated because all elements are deactivated.' and Deactivateable: 'BswM_ModeNotificationMappingECU2.ImmediateUserStartIdx' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define BSWM_IMMEDIATEUSERUSEDOFMODENOTIFICATIONMAPPING               STD_OFF  /**< Deactivateable: 'BswM_ModeNotificationMappingECU1.ImmediateUserUsed' Reason: 'the struct is deactivated because all elements are deactivated.' and Deactivateable: 'BswM_ModeNotificationMappingECU2.ImmediateUserUsed' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define BSWM_MODEREQUESTMAPPING                                       STD_OFF  /**< Deactivateable: 'BswM_ModeRequestMappingECU1' Reason: 'the struct is deactivated because all elements are deactivated.' and Deactivateable: 'BswM_ModeRequestMappingECU2' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define BSWM_IMMEDIATEUSERENDIDXOFMODEREQUESTMAPPING                  STD_OFF  /**< Deactivateable: 'BswM_ModeRequestMappingECU1.ImmediateUserEndIdx' Reason: 'the struct is deactivated because all elements are deactivated.' and Deactivateable: 'BswM_ModeRequestMappingECU2.ImmediateUserEndIdx' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define BSWM_IMMEDIATEUSERSTARTIDXOFMODEREQUESTMAPPING                STD_OFF  /**< Deactivateable: 'BswM_ModeRequestMappingECU1.ImmediateUserStartIdx' Reason: 'the struct is deactivated because all elements are deactivated.' and Deactivateable: 'BswM_ModeRequestMappingECU2.ImmediateUserStartIdx' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define BSWM_IMMEDIATEUSERUSEDOFMODEREQUESTMAPPING                    STD_OFF  /**< Deactivateable: 'BswM_ModeRequestMappingECU1.ImmediateUserUsed' Reason: 'the struct is deactivated because all elements are deactivated.' and Deactivateable: 'BswM_ModeRequestMappingECU2.ImmediateUserUsed' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define BSWM_MODEREQUESTQUEUE                                         STD_ON
#define BSWM_NMCONTROLPARAMETERS                                      STD_ON
#define BSWM_CHANNELOFNMCONTROLPARAMETERS                             STD_ON
#define BSWM_CONTROLOFNMCONTROLPARAMETERS                             STD_ON
#define BSWM_NMMAPPING                                                STD_OFF  /**< Deactivateable: 'BswM_NmMappingECU1' Reason: 'No Mode Request for BswMNmIndication configured.' and Deactivateable: 'BswM_NmMappingECU2' Reason: 'No Mode Request for BswMNmIndication configured.' */
#define BSWM_EXTERNALIDOFNMMAPPING                                    STD_OFF  /**< Deactivateable: 'BswM_NmMappingECU1.ExternalId' Reason: 'No Mode Request for BswMNmIndication configured.' and Deactivateable: 'BswM_NmMappingECU2.ExternalId' Reason: 'No Mode Request for BswMNmIndication configured.' */
#define BSWM_IMMEDIATEUSERENDIDXOFNMMAPPING                           STD_OFF  /**< Deactivateable: 'BswM_NmMappingECU1.ImmediateUserEndIdx' Reason: 'No Mode Request for BswMNmIndication configured.' and Deactivateable: 'BswM_NmMappingECU2.ImmediateUserEndIdx' Reason: 'No Mode Request for BswMNmIndication configured.' */
#define BSWM_IMMEDIATEUSERSTARTIDXOFNMMAPPING                         STD_OFF  /**< Deactivateable: 'BswM_NmMappingECU1.ImmediateUserStartIdx' Reason: 'No Mode Request for BswMNmIndication configured.' and Deactivateable: 'BswM_NmMappingECU2.ImmediateUserStartIdx' Reason: 'No Mode Request for BswMNmIndication configured.' */
#define BSWM_IMMEDIATEUSERUSEDOFNMMAPPING                             STD_OFF  /**< Deactivateable: 'BswM_NmMappingECU1.ImmediateUserUsed' Reason: 'No Mode Request for BswMNmIndication configured.' and Deactivateable: 'BswM_NmMappingECU2.ImmediateUserUsed' Reason: 'No Mode Request for BswMNmIndication configured.' */
#define BSWM_INITVALUEOFNMMAPPING                                     STD_OFF  /**< Deactivateable: 'BswM_NmMappingECU1.InitValue' Reason: 'No Mode Request for BswMNmIndication configured.' and Deactivateable: 'BswM_NmMappingECU2.InitValue' Reason: 'No Mode Request for BswMNmIndication configured.' */
#define BSWM_NMSTATE                                                  STD_OFF  /**< Deactivateable: 'BswM_NmStateECU1' Reason: 'No Mode Request for BswMNmIndication configured.' and Deactivateable: 'BswM_NmStateECU2' Reason: 'No Mode Request for BswMNmIndication configured.' */
#define BSWM_NVMBLOCKMAPPING                                          STD_OFF  /**< Deactivateable: 'BswM_NvMBlockMappingECU1' Reason: 'No Mode Request for BswMNvMRequest configured.' and Deactivateable: 'BswM_NvMBlockMappingECU2' Reason: 'No Mode Request for BswMNvMRequest configured.' */
#define BSWM_EXTERNALIDOFNVMBLOCKMAPPING                              STD_OFF  /**< Deactivateable: 'BswM_NvMBlockMappingECU1.ExternalId' Reason: 'No Mode Request for BswMNvMRequest configured.' and Deactivateable: 'BswM_NvMBlockMappingECU2.ExternalId' Reason: 'No Mode Request for BswMNvMRequest configured.' */
#define BSWM_IMMEDIATEUSERENDIDXOFNVMBLOCKMAPPING                     STD_OFF  /**< Deactivateable: 'BswM_NvMBlockMappingECU1.ImmediateUserEndIdx' Reason: 'No Mode Request for BswMNvMRequest configured.' and Deactivateable: 'BswM_NvMBlockMappingECU2.ImmediateUserEndIdx' Reason: 'No Mode Request for BswMNvMRequest configured.' */
#define BSWM_IMMEDIATEUSERSTARTIDXOFNVMBLOCKMAPPING                   STD_OFF  /**< Deactivateable: 'BswM_NvMBlockMappingECU1.ImmediateUserStartIdx' Reason: 'No Mode Request for BswMNvMRequest configured.' and Deactivateable: 'BswM_NvMBlockMappingECU2.ImmediateUserStartIdx' Reason: 'No Mode Request for BswMNvMRequest configured.' */
#define BSWM_IMMEDIATEUSERUSEDOFNVMBLOCKMAPPING                       STD_OFF  /**< Deactivateable: 'BswM_NvMBlockMappingECU1.ImmediateUserUsed' Reason: 'No Mode Request for BswMNvMRequest configured.' and Deactivateable: 'BswM_NvMBlockMappingECU2.ImmediateUserUsed' Reason: 'No Mode Request for BswMNvMRequest configured.' */
#define BSWM_INITVALUEOFNVMBLOCKMAPPING                               STD_OFF  /**< Deactivateable: 'BswM_NvMBlockMappingECU1.InitValue' Reason: 'No Mode Request for BswMNvMRequest configured.' and Deactivateable: 'BswM_NvMBlockMappingECU2.InitValue' Reason: 'No Mode Request for BswMNvMRequest configured.' */
#define BSWM_NVMBLOCKSTATE                                            STD_OFF  /**< Deactivateable: 'BswM_NvMBlockStateECU1' Reason: 'No Mode Request for BswMNvMRequest configured.' and Deactivateable: 'BswM_NvMBlockStateECU2' Reason: 'No Mode Request for BswMNvMRequest configured.' */
#define BSWM_NVMJOBMAPPING                                            STD_OFF  /**< Deactivateable: 'BswM_NvMJobMappingECU1' Reason: 'No Mode Request for BswMNvMJobModeIndication configured.' and Deactivateable: 'BswM_NvMJobMappingECU2' Reason: 'No Mode Request for BswMNvMJobModeIndication configured.' */
#define BSWM_EXTERNALIDOFNVMJOBMAPPING                                STD_OFF  /**< Deactivateable: 'BswM_NvMJobMappingECU1.ExternalId' Reason: 'No Mode Request for BswMNvMJobModeIndication configured.' and Deactivateable: 'BswM_NvMJobMappingECU2.ExternalId' Reason: 'No Mode Request for BswMNvMJobModeIndication configured.' */
#define BSWM_IMMEDIATEUSERENDIDXOFNVMJOBMAPPING                       STD_OFF  /**< Deactivateable: 'BswM_NvMJobMappingECU1.ImmediateUserEndIdx' Reason: 'No Mode Request for BswMNvMJobModeIndication configured.' and Deactivateable: 'BswM_NvMJobMappingECU2.ImmediateUserEndIdx' Reason: 'No Mode Request for BswMNvMJobModeIndication configured.' */
#define BSWM_IMMEDIATEUSERSTARTIDXOFNVMJOBMAPPING                     STD_OFF  /**< Deactivateable: 'BswM_NvMJobMappingECU1.ImmediateUserStartIdx' Reason: 'No Mode Request for BswMNvMJobModeIndication configured.' and Deactivateable: 'BswM_NvMJobMappingECU2.ImmediateUserStartIdx' Reason: 'No Mode Request for BswMNvMJobModeIndication configured.' */
#define BSWM_IMMEDIATEUSERUSEDOFNVMJOBMAPPING                         STD_OFF  /**< Deactivateable: 'BswM_NvMJobMappingECU1.ImmediateUserUsed' Reason: 'No Mode Request for BswMNvMJobModeIndication configured.' and Deactivateable: 'BswM_NvMJobMappingECU2.ImmediateUserUsed' Reason: 'No Mode Request for BswMNvMJobModeIndication configured.' */
#define BSWM_INITVALUEOFNVMJOBMAPPING                                 STD_OFF  /**< Deactivateable: 'BswM_NvMJobMappingECU1.InitValue' Reason: 'No Mode Request for BswMNvMJobModeIndication configured.' and Deactivateable: 'BswM_NvMJobMappingECU2.InitValue' Reason: 'No Mode Request for BswMNvMJobModeIndication configured.' */
#define BSWM_NVMJOBSTATE                                              STD_OFF  /**< Deactivateable: 'BswM_NvMJobStateECU1' Reason: 'No Mode Request for BswMNvMJobModeIndication configured.' and Deactivateable: 'BswM_NvMJobStateECU2' Reason: 'No Mode Request for BswMNvMJobModeIndication configured.' */
#define BSWM_PDURRXINDICATIONMAPPING                                  STD_OFF  /**< Deactivateable: 'BswM_PduRRxIndicationMappingECU1' Reason: 'No Mode Request for BswMPduRRxIndication configured.' and Deactivateable: 'BswM_PduRRxIndicationMappingECU2' Reason: 'No Mode Request for BswMPduRRxIndication configured.' */
#define BSWM_EXTERNALIDOFPDURRXINDICATIONMAPPING                      STD_OFF  /**< Deactivateable: 'BswM_PduRRxIndicationMappingECU1.ExternalId' Reason: 'No Mode Request for BswMPduRRxIndication configured.' and Deactivateable: 'BswM_PduRRxIndicationMappingECU2.ExternalId' Reason: 'No Mode Request for BswMPduRRxIndication configured.' */
#define BSWM_IMMEDIATEUSERENDIDXOFPDURRXINDICATIONMAPPING             STD_OFF  /**< Deactivateable: 'BswM_PduRRxIndicationMappingECU1.ImmediateUserEndIdx' Reason: 'No Mode Request for BswMPduRRxIndication configured.' and Deactivateable: 'BswM_PduRRxIndicationMappingECU2.ImmediateUserEndIdx' Reason: 'No Mode Request for BswMPduRRxIndication configured.' */
#define BSWM_IMMEDIATEUSERSTARTIDXOFPDURRXINDICATIONMAPPING           STD_OFF  /**< Deactivateable: 'BswM_PduRRxIndicationMappingECU1.ImmediateUserStartIdx' Reason: 'No Mode Request for BswMPduRRxIndication configured.' and Deactivateable: 'BswM_PduRRxIndicationMappingECU2.ImmediateUserStartIdx' Reason: 'No Mode Request for BswMPduRRxIndication configured.' */
#define BSWM_IMMEDIATEUSERUSEDOFPDURRXINDICATIONMAPPING               STD_OFF  /**< Deactivateable: 'BswM_PduRRxIndicationMappingECU1.ImmediateUserUsed' Reason: 'No Mode Request for BswMPduRRxIndication configured.' and Deactivateable: 'BswM_PduRRxIndicationMappingECU2.ImmediateUserUsed' Reason: 'No Mode Request for BswMPduRRxIndication configured.' */
#define BSWM_INITVALUEOFPDURRXINDICATIONMAPPING                       STD_OFF  /**< Deactivateable: 'BswM_PduRRxIndicationMappingECU1.InitValue' Reason: 'No Mode Request for BswMPduRRxIndication configured.' and Deactivateable: 'BswM_PduRRxIndicationMappingECU2.InitValue' Reason: 'No Mode Request for BswMPduRRxIndication configured.' */
#define BSWM_PDURRXINDICATIONSTATEIDXOFPDURRXINDICATIONMAPPING        STD_OFF  /**< Deactivateable: 'BswM_PduRRxIndicationMappingECU1.PduRRxIndicationStateIdx' Reason: 'No Mode Request for BswMPduRRxIndication configured.' and Deactivateable: 'BswM_PduRRxIndicationMappingECU2.PduRRxIndicationStateIdx' Reason: 'No Mode Request for BswMPduRRxIndication configured.' */
#define BSWM_PDURRXINDICATIONSTATE                                    STD_OFF  /**< Deactivateable: 'BswM_PduRRxIndicationStateECU1' Reason: 'No Mode Request for BswMPduRRxIndication configured.' and Deactivateable: 'BswM_PduRRxIndicationStateECU2' Reason: 'No Mode Request for BswMPduRRxIndication configured.' */
#define BSWM_PDURTPRXINDICATIONMAPPING                                STD_OFF  /**< Deactivateable: 'BswM_PduRTpRxIndicationMappingECU1' Reason: 'No Mode Request for BswMPduRTpRxIndication configured.' and Deactivateable: 'BswM_PduRTpRxIndicationMappingECU2' Reason: 'No Mode Request for BswMPduRTpRxIndication configured.' */
#define BSWM_EXTERNALIDOFPDURTPRXINDICATIONMAPPING                    STD_OFF  /**< Deactivateable: 'BswM_PduRTpRxIndicationMappingECU1.ExternalId' Reason: 'No Mode Request for BswMPduRTpRxIndication configured.' and Deactivateable: 'BswM_PduRTpRxIndicationMappingECU2.ExternalId' Reason: 'No Mode Request for BswMPduRTpRxIndication configured.' */
#define BSWM_IMMEDIATEUSERENDIDXOFPDURTPRXINDICATIONMAPPING           STD_OFF  /**< Deactivateable: 'BswM_PduRTpRxIndicationMappingECU1.ImmediateUserEndIdx' Reason: 'No Mode Request for BswMPduRTpRxIndication configured.' and Deactivateable: 'BswM_PduRTpRxIndicationMappingECU2.ImmediateUserEndIdx' Reason: 'No Mode Request for BswMPduRTpRxIndication configured.' */
#define BSWM_IMMEDIATEUSERSTARTIDXOFPDURTPRXINDICATIONMAPPING         STD_OFF  /**< Deactivateable: 'BswM_PduRTpRxIndicationMappingECU1.ImmediateUserStartIdx' Reason: 'No Mode Request for BswMPduRTpRxIndication configured.' and Deactivateable: 'BswM_PduRTpRxIndicationMappingECU2.ImmediateUserStartIdx' Reason: 'No Mode Request for BswMPduRTpRxIndication configured.' */
#define BSWM_IMMEDIATEUSERUSEDOFPDURTPRXINDICATIONMAPPING             STD_OFF  /**< Deactivateable: 'BswM_PduRTpRxIndicationMappingECU1.ImmediateUserUsed' Reason: 'No Mode Request for BswMPduRTpRxIndication configured.' and Deactivateable: 'BswM_PduRTpRxIndicationMappingECU2.ImmediateUserUsed' Reason: 'No Mode Request for BswMPduRTpRxIndication configured.' */
#define BSWM_INITVALUEOFPDURTPRXINDICATIONMAPPING                     STD_OFF  /**< Deactivateable: 'BswM_PduRTpRxIndicationMappingECU1.InitValue' Reason: 'No Mode Request for BswMPduRTpRxIndication configured.' and Deactivateable: 'BswM_PduRTpRxIndicationMappingECU2.InitValue' Reason: 'No Mode Request for BswMPduRTpRxIndication configured.' */
#define BSWM_PDURTPRXINDICATIONSTATEIDXOFPDURTPRXINDICATIONMAPPING    STD_OFF  /**< Deactivateable: 'BswM_PduRTpRxIndicationMappingECU1.PduRTpRxIndicationStateIdx' Reason: 'No Mode Request for BswMPduRTpRxIndication configured.' and Deactivateable: 'BswM_PduRTpRxIndicationMappingECU2.PduRTpRxIndicationStateIdx' Reason: 'No Mode Request for BswMPduRTpRxIndication configured.' */
#define BSWM_PDURTPRXINDICATIONSTATE                                  STD_OFF  /**< Deactivateable: 'BswM_PduRTpRxIndicationStateECU1' Reason: 'No Mode Request for BswMPduRTpRxIndication configured.' and Deactivateable: 'BswM_PduRTpRxIndicationStateECU2' Reason: 'No Mode Request for BswMPduRTpRxIndication configured.' */
#define BSWM_PDURTPSTARTOFRECEPTIONMAPPING                            STD_OFF  /**< Deactivateable: 'BswM_PduRTpStartOfReceptionMappingECU1' Reason: 'No Mode Request for BswMPduRTpStartOfReception configured.' and Deactivateable: 'BswM_PduRTpStartOfReceptionMappingECU2' Reason: 'No Mode Request for BswMPduRTpStartOfReception configured.' */
#define BSWM_EXTERNALIDOFPDURTPSTARTOFRECEPTIONMAPPING                STD_OFF  /**< Deactivateable: 'BswM_PduRTpStartOfReceptionMappingECU1.ExternalId' Reason: 'No Mode Request for BswMPduRTpStartOfReception configured.' and Deactivateable: 'BswM_PduRTpStartOfReceptionMappingECU2.ExternalId' Reason: 'No Mode Request for BswMPduRTpStartOfReception configured.' */
#define BSWM_IMMEDIATEUSERENDIDXOFPDURTPSTARTOFRECEPTIONMAPPING       STD_OFF  /**< Deactivateable: 'BswM_PduRTpStartOfReceptionMappingECU1.ImmediateUserEndIdx' Reason: 'No Mode Request for BswMPduRTpStartOfReception configured.' and Deactivateable: 'BswM_PduRTpStartOfReceptionMappingECU2.ImmediateUserEndIdx' Reason: 'No Mode Request for BswMPduRTpStartOfReception configured.' */
#define BSWM_IMMEDIATEUSERSTARTIDXOFPDURTPSTARTOFRECEPTIONMAPPING     STD_OFF  /**< Deactivateable: 'BswM_PduRTpStartOfReceptionMappingECU1.ImmediateUserStartIdx' Reason: 'No Mode Request for BswMPduRTpStartOfReception configured.' and Deactivateable: 'BswM_PduRTpStartOfReceptionMappingECU2.ImmediateUserStartIdx' Reason: 'No Mode Request for BswMPduRTpStartOfReception configured.' */
#define BSWM_IMMEDIATEUSERUSEDOFPDURTPSTARTOFRECEPTIONMAPPING         STD_OFF  /**< Deactivateable: 'BswM_PduRTpStartOfReceptionMappingECU1.ImmediateUserUsed' Reason: 'No Mode Request for BswMPduRTpStartOfReception configured.' and Deactivateable: 'BswM_PduRTpStartOfReceptionMappingECU2.ImmediateUserUsed' Reason: 'No Mode Request for BswMPduRTpStartOfReception configured.' */
#define BSWM_INITVALUEOFPDURTPSTARTOFRECEPTIONMAPPING                 STD_OFF  /**< Deactivateable: 'BswM_PduRTpStartOfReceptionMappingECU1.InitValue' Reason: 'No Mode Request for BswMPduRTpStartOfReception configured.' and Deactivateable: 'BswM_PduRTpStartOfReceptionMappingECU2.InitValue' Reason: 'No Mode Request for BswMPduRTpStartOfReception configured.' */
#define BSWM_PDURTPSTARTOFRECEPTIONSTATEIDXOFPDURTPSTARTOFRECEPTIONMAPPING STD_OFF  /**< Deactivateable: 'BswM_PduRTpStartOfReceptionMappingECU1.PduRTpStartOfReceptionStateIdx' Reason: 'No Mode Request for BswMPduRTpStartOfReception configured.' and Deactivateable: 'BswM_PduRTpStartOfReceptionMappingECU2.PduRTpStartOfReceptionStateIdx' Reason: 'No Mode Request for BswMPduRTpStartOfReception configured.' */
#define BSWM_PDURTPSTARTOFRECEPTIONSTATE                              STD_OFF  /**< Deactivateable: 'BswM_PduRTpStartOfReceptionStateECU1' Reason: 'No Mode Request for BswMPduRTpStartOfReception configured.' and Deactivateable: 'BswM_PduRTpStartOfReceptionStateECU2' Reason: 'No Mode Request for BswMPduRTpStartOfReception configured.' */
#define BSWM_PDURTPTXCONFIRMATIONMAPPING                              STD_OFF  /**< Deactivateable: 'BswM_PduRTpTxConfirmationMappingECU1' Reason: 'No Mode Request for BswMPduRTpTxConfirmation configured.' and Deactivateable: 'BswM_PduRTpTxConfirmationMappingECU2' Reason: 'No Mode Request for BswMPduRTpTxConfirmation configured.' */
#define BSWM_EXTERNALIDOFPDURTPTXCONFIRMATIONMAPPING                  STD_OFF  /**< Deactivateable: 'BswM_PduRTpTxConfirmationMappingECU1.ExternalId' Reason: 'No Mode Request for BswMPduRTpTxConfirmation configured.' and Deactivateable: 'BswM_PduRTpTxConfirmationMappingECU2.ExternalId' Reason: 'No Mode Request for BswMPduRTpTxConfirmation configured.' */
#define BSWM_IMMEDIATEUSERENDIDXOFPDURTPTXCONFIRMATIONMAPPING         STD_OFF  /**< Deactivateable: 'BswM_PduRTpTxConfirmationMappingECU1.ImmediateUserEndIdx' Reason: 'No Mode Request for BswMPduRTpTxConfirmation configured.' and Deactivateable: 'BswM_PduRTpTxConfirmationMappingECU2.ImmediateUserEndIdx' Reason: 'No Mode Request for BswMPduRTpTxConfirmation configured.' */
#define BSWM_IMMEDIATEUSERSTARTIDXOFPDURTPTXCONFIRMATIONMAPPING       STD_OFF  /**< Deactivateable: 'BswM_PduRTpTxConfirmationMappingECU1.ImmediateUserStartIdx' Reason: 'No Mode Request for BswMPduRTpTxConfirmation configured.' and Deactivateable: 'BswM_PduRTpTxConfirmationMappingECU2.ImmediateUserStartIdx' Reason: 'No Mode Request for BswMPduRTpTxConfirmation configured.' */
#define BSWM_IMMEDIATEUSERUSEDOFPDURTPTXCONFIRMATIONMAPPING           STD_OFF  /**< Deactivateable: 'BswM_PduRTpTxConfirmationMappingECU1.ImmediateUserUsed' Reason: 'No Mode Request for BswMPduRTpTxConfirmation configured.' and Deactivateable: 'BswM_PduRTpTxConfirmationMappingECU2.ImmediateUserUsed' Reason: 'No Mode Request for BswMPduRTpTxConfirmation configured.' */
#define BSWM_INITVALUEOFPDURTPTXCONFIRMATIONMAPPING                   STD_OFF  /**< Deactivateable: 'BswM_PduRTpTxConfirmationMappingECU1.InitValue' Reason: 'No Mode Request for BswMPduRTpTxConfirmation configured.' and Deactivateable: 'BswM_PduRTpTxConfirmationMappingECU2.InitValue' Reason: 'No Mode Request for BswMPduRTpTxConfirmation configured.' */
#define BSWM_PDURTPTXCONFIRMATIONSTATEIDXOFPDURTPTXCONFIRMATIONMAPPING STD_OFF  /**< Deactivateable: 'BswM_PduRTpTxConfirmationMappingECU1.PduRTpTxConfirmationStateIdx' Reason: 'No Mode Request for BswMPduRTpTxConfirmation configured.' and Deactivateable: 'BswM_PduRTpTxConfirmationMappingECU2.PduRTpTxConfirmationStateIdx' Reason: 'No Mode Request for BswMPduRTpTxConfirmation configured.' */
#define BSWM_PDURTPTXCONFIRMATIONSTATE                                STD_OFF  /**< Deactivateable: 'BswM_PduRTpTxConfirmationStateECU1' Reason: 'No Mode Request for BswMPduRTpTxConfirmation configured.' and Deactivateable: 'BswM_PduRTpTxConfirmationStateECU2' Reason: 'No Mode Request for BswMPduRTpTxConfirmation configured.' */
#define BSWM_PDURTRANSMITMAPPING                                      STD_OFF  /**< Deactivateable: 'BswM_PduRTransmitMappingECU1' Reason: 'No Mode Request for BswMPduRTransmit configured.' and Deactivateable: 'BswM_PduRTransmitMappingECU2' Reason: 'No Mode Request for BswMPduRTransmit configured.' */
#define BSWM_EXTERNALIDOFPDURTRANSMITMAPPING                          STD_OFF  /**< Deactivateable: 'BswM_PduRTransmitMappingECU1.ExternalId' Reason: 'No Mode Request for BswMPduRTransmit configured.' and Deactivateable: 'BswM_PduRTransmitMappingECU2.ExternalId' Reason: 'No Mode Request for BswMPduRTransmit configured.' */
#define BSWM_IMMEDIATEUSERENDIDXOFPDURTRANSMITMAPPING                 STD_OFF  /**< Deactivateable: 'BswM_PduRTransmitMappingECU1.ImmediateUserEndIdx' Reason: 'No Mode Request for BswMPduRTransmit configured.' and Deactivateable: 'BswM_PduRTransmitMappingECU2.ImmediateUserEndIdx' Reason: 'No Mode Request for BswMPduRTransmit configured.' */
#define BSWM_IMMEDIATEUSERSTARTIDXOFPDURTRANSMITMAPPING               STD_OFF  /**< Deactivateable: 'BswM_PduRTransmitMappingECU1.ImmediateUserStartIdx' Reason: 'No Mode Request for BswMPduRTransmit configured.' and Deactivateable: 'BswM_PduRTransmitMappingECU2.ImmediateUserStartIdx' Reason: 'No Mode Request for BswMPduRTransmit configured.' */
#define BSWM_IMMEDIATEUSERUSEDOFPDURTRANSMITMAPPING                   STD_OFF  /**< Deactivateable: 'BswM_PduRTransmitMappingECU1.ImmediateUserUsed' Reason: 'No Mode Request for BswMPduRTransmit configured.' and Deactivateable: 'BswM_PduRTransmitMappingECU2.ImmediateUserUsed' Reason: 'No Mode Request for BswMPduRTransmit configured.' */
#define BSWM_INITVALUEOFPDURTRANSMITMAPPING                           STD_OFF  /**< Deactivateable: 'BswM_PduRTransmitMappingECU1.InitValue' Reason: 'No Mode Request for BswMPduRTransmit configured.' and Deactivateable: 'BswM_PduRTransmitMappingECU2.InitValue' Reason: 'No Mode Request for BswMPduRTransmit configured.' */
#define BSWM_PDURTRANSMITSTATEIDXOFPDURTRANSMITMAPPING                STD_OFF  /**< Deactivateable: 'BswM_PduRTransmitMappingECU1.PduRTransmitStateIdx' Reason: 'No Mode Request for BswMPduRTransmit configured.' and Deactivateable: 'BswM_PduRTransmitMappingECU2.PduRTransmitStateIdx' Reason: 'No Mode Request for BswMPduRTransmit configured.' */
#define BSWM_PDURTRANSMITSTATE                                        STD_OFF  /**< Deactivateable: 'BswM_PduRTransmitStateECU1' Reason: 'No Mode Request for BswMPduRTransmit configured.' and Deactivateable: 'BswM_PduRTransmitStateECU2' Reason: 'No Mode Request for BswMPduRTransmit configured.' */
#define BSWM_PDURTXCONFIRMATIONMAPPING                                STD_OFF  /**< Deactivateable: 'BswM_PduRTxConfirmationMappingECU1' Reason: 'No Mode Request for BswMPduRTxConfirmation configured.' and Deactivateable: 'BswM_PduRTxConfirmationMappingECU2' Reason: 'No Mode Request for BswMPduRTxConfirmation configured.' */
#define BSWM_EXTERNALIDOFPDURTXCONFIRMATIONMAPPING                    STD_OFF  /**< Deactivateable: 'BswM_PduRTxConfirmationMappingECU1.ExternalId' Reason: 'No Mode Request for BswMPduRTxConfirmation configured.' and Deactivateable: 'BswM_PduRTxConfirmationMappingECU2.ExternalId' Reason: 'No Mode Request for BswMPduRTxConfirmation configured.' */
#define BSWM_IMMEDIATEUSERENDIDXOFPDURTXCONFIRMATIONMAPPING           STD_OFF  /**< Deactivateable: 'BswM_PduRTxConfirmationMappingECU1.ImmediateUserEndIdx' Reason: 'No Mode Request for BswMPduRTxConfirmation configured.' and Deactivateable: 'BswM_PduRTxConfirmationMappingECU2.ImmediateUserEndIdx' Reason: 'No Mode Request for BswMPduRTxConfirmation configured.' */
#define BSWM_IMMEDIATEUSERSTARTIDXOFPDURTXCONFIRMATIONMAPPING         STD_OFF  /**< Deactivateable: 'BswM_PduRTxConfirmationMappingECU1.ImmediateUserStartIdx' Reason: 'No Mode Request for BswMPduRTxConfirmation configured.' and Deactivateable: 'BswM_PduRTxConfirmationMappingECU2.ImmediateUserStartIdx' Reason: 'No Mode Request for BswMPduRTxConfirmation configured.' */
#define BSWM_IMMEDIATEUSERUSEDOFPDURTXCONFIRMATIONMAPPING             STD_OFF  /**< Deactivateable: 'BswM_PduRTxConfirmationMappingECU1.ImmediateUserUsed' Reason: 'No Mode Request for BswMPduRTxConfirmation configured.' and Deactivateable: 'BswM_PduRTxConfirmationMappingECU2.ImmediateUserUsed' Reason: 'No Mode Request for BswMPduRTxConfirmation configured.' */
#define BSWM_INITVALUEOFPDURTXCONFIRMATIONMAPPING                     STD_OFF  /**< Deactivateable: 'BswM_PduRTxConfirmationMappingECU1.InitValue' Reason: 'No Mode Request for BswMPduRTxConfirmation configured.' and Deactivateable: 'BswM_PduRTxConfirmationMappingECU2.InitValue' Reason: 'No Mode Request for BswMPduRTxConfirmation configured.' */
#define BSWM_PDURTXCONFIRMATIONSTATEIDXOFPDURTXCONFIRMATIONMAPPING    STD_OFF  /**< Deactivateable: 'BswM_PduRTxConfirmationMappingECU1.PduRTxConfirmationStateIdx' Reason: 'No Mode Request for BswMPduRTxConfirmation configured.' and Deactivateable: 'BswM_PduRTxConfirmationMappingECU2.PduRTxConfirmationStateIdx' Reason: 'No Mode Request for BswMPduRTxConfirmation configured.' */
#define BSWM_PDURTXCONFIRMATIONSTATE                                  STD_OFF  /**< Deactivateable: 'BswM_PduRTxConfirmationStateECU1' Reason: 'No Mode Request for BswMPduRTxConfirmation configured.' and Deactivateable: 'BswM_PduRTxConfirmationStateECU2' Reason: 'No Mode Request for BswMPduRTxConfirmation configured.' */
#define BSWM_PDUROUTERCONTROLPARAMETERS                               STD_OFF  /**< Deactivateable: 'BswM_PduRouterControlParametersECU1' Reason: 'Action of type 'PduRouterControl' not in configuration.' and Deactivateable: 'BswM_PduRouterControlParametersECU2' Reason: 'Action of type 'PduRouterControl' not in configuration.' */
#define BSWM_PDUROUTERCONTROLSUBPARAMETERSENDIDXOFPDUROUTERCONTROLPARAMETERS STD_OFF  /**< Deactivateable: 'BswM_PduRouterControlParametersECU1.PduRouterControlSubParametersEndIdx' Reason: 'Action of type 'PduRouterControl' not in configuration.' and Deactivateable: 'BswM_PduRouterControlParametersECU2.PduRouterControlSubParametersEndIdx' Reason: 'Action of type 'PduRouterControl' not in configuration.' */
#define BSWM_PDUROUTERCONTROLSUBPARAMETERSSTARTIDXOFPDUROUTERCONTROLPARAMETERS STD_OFF  /**< Deactivateable: 'BswM_PduRouterControlParametersECU1.PduRouterControlSubParametersStartIdx' Reason: 'Action of type 'PduRouterControl' not in configuration.' and Deactivateable: 'BswM_PduRouterControlParametersECU2.PduRouterControlSubParametersStartIdx' Reason: 'Action of type 'PduRouterControl' not in configuration.' */
#define BSWM_PDUROUTERCONTROLSUBPARAMETERSUSEDOFPDUROUTERCONTROLPARAMETERS STD_OFF  /**< Deactivateable: 'BswM_PduRouterControlParametersECU1.PduRouterControlSubParametersUsed' Reason: 'Action of type 'PduRouterControl' not in configuration.' and Deactivateable: 'BswM_PduRouterControlParametersECU2.PduRouterControlSubParametersUsed' Reason: 'Action of type 'PduRouterControl' not in configuration.' */
#define BSWM_ROUTINGOFPDUROUTERCONTROLPARAMETERS                      STD_OFF  /**< Deactivateable: 'BswM_PduRouterControlParametersECU1.Routing' Reason: 'Action of type 'PduRouterControl' not in configuration.' and Deactivateable: 'BswM_PduRouterControlParametersECU2.Routing' Reason: 'Action of type 'PduRouterControl' not in configuration.' */
#define BSWM_PDUROUTERCONTROLSUBPARAMETERS                            STD_OFF  /**< Deactivateable: 'BswM_PduRouterControlSubParametersECU1' Reason: 'Action of type 'PduRouterControl' not in configuration.' and Deactivateable: 'BswM_PduRouterControlSubParametersECU2' Reason: 'Action of type 'PduRouterControl' not in configuration.' */
#define BSWM_IDOFPDUROUTERCONTROLSUBPARAMETERS                        STD_OFF  /**< Deactivateable: 'BswM_PduRouterControlSubParametersECU1.Id' Reason: 'Action of type 'PduRouterControl' not in configuration.' and Deactivateable: 'BswM_PduRouterControlSubParametersECU2.Id' Reason: 'Action of type 'PduRouterControl' not in configuration.' */
#define BSWM_RULECONTROLPARAMETERS                                    STD_OFF  /**< Deactivateable: 'BswM_RuleControlParametersECU1' Reason: 'Action of type 'RuleControl' not in configuration.' and Deactivateable: 'BswM_RuleControlParametersECU2' Reason: 'Action of type 'RuleControl' not in configuration.' */
#define BSWM_RULEIDOFRULECONTROLPARAMETERS                            STD_OFF  /**< Deactivateable: 'BswM_RuleControlParametersECU1.RuleId' Reason: 'Action of type 'RuleControl' not in configuration.' and Deactivateable: 'BswM_RuleControlParametersECU2.RuleId' Reason: 'Action of type 'RuleControl' not in configuration.' */
#define BSWM_STATEOFRULECONTROLPARAMETERS                             STD_OFF  /**< Deactivateable: 'BswM_RuleControlParametersECU1.State' Reason: 'Action of type 'RuleControl' not in configuration.' and Deactivateable: 'BswM_RuleControlParametersECU2.State' Reason: 'Action of type 'RuleControl' not in configuration.' */
#define BSWM_RULESTATES                                               STD_ON
#define BSWM_RULES                                                    STD_ON
#define BSWM_ACTIONLISTSFALSEIDXOFRULES                               STD_ON
#define BSWM_ACTIONLISTSFALSEUSEDOFRULES                              STD_ON
#define BSWM_ACTIONLISTSTRUEIDXOFRULES                                STD_ON
#define BSWM_ACTIONLISTSTRUEUSEDOFRULES                               STD_ON
#define BSWM_EXPRESSIONSIDXOFRULES                                    STD_ON
#define BSWM_IDOFRULES                                                STD_ON
#define BSWM_INITOFRULES                                              STD_ON
#define BSWM_MASKEDBITSOFRULES                                        STD_ON
#define BSWM_RULESIND                                                 STD_ON
#define BSWM_SDCLIENTPARAMETERS                                       STD_OFF  /**< Deactivateable: 'BswM_SdClientParametersECU1' Reason: 'Action of type 'SdClient' not in configuration.' and Deactivateable: 'BswM_SdClientParametersECU2' Reason: 'Action of type 'SdClient' not in configuration.' */
#define BSWM_IDOFSDCLIENTPARAMETERS                                   STD_OFF  /**< Deactivateable: 'BswM_SdClientParametersECU1.Id' Reason: 'Action of type 'SdClient' not in configuration.' and Deactivateable: 'BswM_SdClientParametersECU2.Id' Reason: 'Action of type 'SdClient' not in configuration.' */
#define BSWM_STATEOFSDCLIENTPARAMETERS                                STD_OFF  /**< Deactivateable: 'BswM_SdClientParametersECU1.State' Reason: 'Action of type 'SdClient' not in configuration.' and Deactivateable: 'BswM_SdClientParametersECU2.State' Reason: 'Action of type 'SdClient' not in configuration.' */
#define BSWM_SDCLIENTSERVICEMAPPING                                   STD_OFF  /**< Deactivateable: 'BswM_SdClientServiceMappingECU1' Reason: 'No Mode Request for BswMSdClientServiceCurrentState configured.' and Deactivateable: 'BswM_SdClientServiceMappingECU2' Reason: 'No Mode Request for BswMSdClientServiceCurrentState configured.' */
#define BSWM_EXTERNALIDOFSDCLIENTSERVICEMAPPING                       STD_OFF  /**< Deactivateable: 'BswM_SdClientServiceMappingECU1.ExternalId' Reason: 'No Mode Request for BswMSdClientServiceCurrentState configured.' and Deactivateable: 'BswM_SdClientServiceMappingECU2.ExternalId' Reason: 'No Mode Request for BswMSdClientServiceCurrentState configured.' */
#define BSWM_IMMEDIATEUSERENDIDXOFSDCLIENTSERVICEMAPPING              STD_OFF  /**< Deactivateable: 'BswM_SdClientServiceMappingECU1.ImmediateUserEndIdx' Reason: 'No Mode Request for BswMSdClientServiceCurrentState configured.' and Deactivateable: 'BswM_SdClientServiceMappingECU2.ImmediateUserEndIdx' Reason: 'No Mode Request for BswMSdClientServiceCurrentState configured.' */
#define BSWM_IMMEDIATEUSERSTARTIDXOFSDCLIENTSERVICEMAPPING            STD_OFF  /**< Deactivateable: 'BswM_SdClientServiceMappingECU1.ImmediateUserStartIdx' Reason: 'No Mode Request for BswMSdClientServiceCurrentState configured.' and Deactivateable: 'BswM_SdClientServiceMappingECU2.ImmediateUserStartIdx' Reason: 'No Mode Request for BswMSdClientServiceCurrentState configured.' */
#define BSWM_IMMEDIATEUSERUSEDOFSDCLIENTSERVICEMAPPING                STD_OFF  /**< Deactivateable: 'BswM_SdClientServiceMappingECU1.ImmediateUserUsed' Reason: 'No Mode Request for BswMSdClientServiceCurrentState configured.' and Deactivateable: 'BswM_SdClientServiceMappingECU2.ImmediateUserUsed' Reason: 'No Mode Request for BswMSdClientServiceCurrentState configured.' */
#define BSWM_INITVALUEOFSDCLIENTSERVICEMAPPING                        STD_OFF  /**< Deactivateable: 'BswM_SdClientServiceMappingECU1.InitValue' Reason: 'No Mode Request for BswMSdClientServiceCurrentState configured.' and Deactivateable: 'BswM_SdClientServiceMappingECU2.InitValue' Reason: 'No Mode Request for BswMSdClientServiceCurrentState configured.' */
#define BSWM_SDCLIENTSERVICESTATE                                     STD_OFF  /**< Deactivateable: 'BswM_SdClientServiceStateECU1' Reason: 'No Mode Request for BswMSdClientServiceCurrentState configured.' and Deactivateable: 'BswM_SdClientServiceStateECU2' Reason: 'No Mode Request for BswMSdClientServiceCurrentState configured.' */
#define BSWM_SDCONSUMEDEVENTMAPPING                                   STD_OFF  /**< Deactivateable: 'BswM_SdConsumedEventMappingECU1' Reason: 'No Mode Request for BswMSdConsumedEventGroupCurrentState configured.' and Deactivateable: 'BswM_SdConsumedEventMappingECU2' Reason: 'No Mode Request for BswMSdConsumedEventGroupCurrentState configured.' */
#define BSWM_EXTERNALIDOFSDCONSUMEDEVENTMAPPING                       STD_OFF  /**< Deactivateable: 'BswM_SdConsumedEventMappingECU1.ExternalId' Reason: 'No Mode Request for BswMSdConsumedEventGroupCurrentState configured.' and Deactivateable: 'BswM_SdConsumedEventMappingECU2.ExternalId' Reason: 'No Mode Request for BswMSdConsumedEventGroupCurrentState configured.' */
#define BSWM_IMMEDIATEUSERENDIDXOFSDCONSUMEDEVENTMAPPING              STD_OFF  /**< Deactivateable: 'BswM_SdConsumedEventMappingECU1.ImmediateUserEndIdx' Reason: 'No Mode Request for BswMSdConsumedEventGroupCurrentState configured.' and Deactivateable: 'BswM_SdConsumedEventMappingECU2.ImmediateUserEndIdx' Reason: 'No Mode Request for BswMSdConsumedEventGroupCurrentState configured.' */
#define BSWM_IMMEDIATEUSERSTARTIDXOFSDCONSUMEDEVENTMAPPING            STD_OFF  /**< Deactivateable: 'BswM_SdConsumedEventMappingECU1.ImmediateUserStartIdx' Reason: 'No Mode Request for BswMSdConsumedEventGroupCurrentState configured.' and Deactivateable: 'BswM_SdConsumedEventMappingECU2.ImmediateUserStartIdx' Reason: 'No Mode Request for BswMSdConsumedEventGroupCurrentState configured.' */
#define BSWM_IMMEDIATEUSERUSEDOFSDCONSUMEDEVENTMAPPING                STD_OFF  /**< Deactivateable: 'BswM_SdConsumedEventMappingECU1.ImmediateUserUsed' Reason: 'No Mode Request for BswMSdConsumedEventGroupCurrentState configured.' and Deactivateable: 'BswM_SdConsumedEventMappingECU2.ImmediateUserUsed' Reason: 'No Mode Request for BswMSdConsumedEventGroupCurrentState configured.' */
#define BSWM_INITVALUEOFSDCONSUMEDEVENTMAPPING                        STD_OFF  /**< Deactivateable: 'BswM_SdConsumedEventMappingECU1.InitValue' Reason: 'No Mode Request for BswMSdConsumedEventGroupCurrentState configured.' and Deactivateable: 'BswM_SdConsumedEventMappingECU2.InitValue' Reason: 'No Mode Request for BswMSdConsumedEventGroupCurrentState configured.' */
#define BSWM_SDCONSUMEDEVENTSTATE                                     STD_OFF  /**< Deactivateable: 'BswM_SdConsumedEventStateECU1' Reason: 'No Mode Request for BswMSdConsumedEventGroupCurrentState configured.' and Deactivateable: 'BswM_SdConsumedEventStateECU2' Reason: 'No Mode Request for BswMSdConsumedEventGroupCurrentState configured.' */
#define BSWM_SDCONSUMEDPARAMETERS                                     STD_OFF  /**< Deactivateable: 'BswM_SdConsumedParametersECU1' Reason: 'Action of type 'SdConsumed' not in configuration.' and Deactivateable: 'BswM_SdConsumedParametersECU2' Reason: 'Action of type 'SdConsumed' not in configuration.' */
#define BSWM_IDOFSDCONSUMEDPARAMETERS                                 STD_OFF  /**< Deactivateable: 'BswM_SdConsumedParametersECU1.Id' Reason: 'Action of type 'SdConsumed' not in configuration.' and Deactivateable: 'BswM_SdConsumedParametersECU2.Id' Reason: 'Action of type 'SdConsumed' not in configuration.' */
#define BSWM_STATEOFSDCONSUMEDPARAMETERS                              STD_OFF  /**< Deactivateable: 'BswM_SdConsumedParametersECU1.State' Reason: 'Action of type 'SdConsumed' not in configuration.' and Deactivateable: 'BswM_SdConsumedParametersECU2.State' Reason: 'Action of type 'SdConsumed' not in configuration.' */
#define BSWM_SDEVENTHANDLERMAPPING                                    STD_OFF  /**< Deactivateable: 'BswM_SdEventHandlerMappingECU1' Reason: 'No Mode Request for BswMSdEventHandlerCurrentState configured.' and Deactivateable: 'BswM_SdEventHandlerMappingECU2' Reason: 'No Mode Request for BswMSdEventHandlerCurrentState configured.' */
#define BSWM_EXTERNALIDOFSDEVENTHANDLERMAPPING                        STD_OFF  /**< Deactivateable: 'BswM_SdEventHandlerMappingECU1.ExternalId' Reason: 'No Mode Request for BswMSdEventHandlerCurrentState configured.' and Deactivateable: 'BswM_SdEventHandlerMappingECU2.ExternalId' Reason: 'No Mode Request for BswMSdEventHandlerCurrentState configured.' */
#define BSWM_IMMEDIATEUSERENDIDXOFSDEVENTHANDLERMAPPING               STD_OFF  /**< Deactivateable: 'BswM_SdEventHandlerMappingECU1.ImmediateUserEndIdx' Reason: 'No Mode Request for BswMSdEventHandlerCurrentState configured.' and Deactivateable: 'BswM_SdEventHandlerMappingECU2.ImmediateUserEndIdx' Reason: 'No Mode Request for BswMSdEventHandlerCurrentState configured.' */
#define BSWM_IMMEDIATEUSERSTARTIDXOFSDEVENTHANDLERMAPPING             STD_OFF  /**< Deactivateable: 'BswM_SdEventHandlerMappingECU1.ImmediateUserStartIdx' Reason: 'No Mode Request for BswMSdEventHandlerCurrentState configured.' and Deactivateable: 'BswM_SdEventHandlerMappingECU2.ImmediateUserStartIdx' Reason: 'No Mode Request for BswMSdEventHandlerCurrentState configured.' */
#define BSWM_IMMEDIATEUSERUSEDOFSDEVENTHANDLERMAPPING                 STD_OFF  /**< Deactivateable: 'BswM_SdEventHandlerMappingECU1.ImmediateUserUsed' Reason: 'No Mode Request for BswMSdEventHandlerCurrentState configured.' and Deactivateable: 'BswM_SdEventHandlerMappingECU2.ImmediateUserUsed' Reason: 'No Mode Request for BswMSdEventHandlerCurrentState configured.' */
#define BSWM_INITVALUEOFSDEVENTHANDLERMAPPING                         STD_OFF  /**< Deactivateable: 'BswM_SdEventHandlerMappingECU1.InitValue' Reason: 'No Mode Request for BswMSdEventHandlerCurrentState configured.' and Deactivateable: 'BswM_SdEventHandlerMappingECU2.InitValue' Reason: 'No Mode Request for BswMSdEventHandlerCurrentState configured.' */
#define BSWM_SDEVENTHANDLERSTATE                                      STD_OFF  /**< Deactivateable: 'BswM_SdEventHandlerStateECU1' Reason: 'No Mode Request for BswMSdEventHandlerCurrentState configured.' and Deactivateable: 'BswM_SdEventHandlerStateECU2' Reason: 'No Mode Request for BswMSdEventHandlerCurrentState configured.' */
#define BSWM_SDSERVERPARAMETERS                                       STD_OFF  /**< Deactivateable: 'BswM_SdServerParametersECU1' Reason: 'Action of type 'SdServer' not in configuration.' and Deactivateable: 'BswM_SdServerParametersECU2' Reason: 'Action of type 'SdServer' not in configuration.' */
#define BSWM_IDOFSDSERVERPARAMETERS                                   STD_OFF  /**< Deactivateable: 'BswM_SdServerParametersECU1.Id' Reason: 'Action of type 'SdServer' not in configuration.' and Deactivateable: 'BswM_SdServerParametersECU2.Id' Reason: 'Action of type 'SdServer' not in configuration.' */
#define BSWM_STATEOFSDSERVERPARAMETERS                                STD_OFF  /**< Deactivateable: 'BswM_SdServerParametersECU1.State' Reason: 'Action of type 'SdServer' not in configuration.' and Deactivateable: 'BswM_SdServerParametersECU2.State' Reason: 'Action of type 'SdServer' not in configuration.' */
#define BSWM_SIZEOFACTIONITEMS                                        STD_ON
#define BSWM_SIZEOFACTIONLISTQUEUE                                    STD_ON
#define BSWM_SIZEOFACTIONLISTS                                        STD_ON
#define BSWM_SIZEOFACTIONS                                            STD_ON
#define BSWM_SIZEOFCANSMCHANNELMAPPING                                STD_ON
#define BSWM_SIZEOFCANSMCHANNELSTATE                                  STD_ON
#define BSWM_SIZEOFCOMDMCONTROLPARAMETERS                             STD_ON
#define BSWM_SIZEOFCOMDMCONTROLSUBPARAMETERS                          STD_ON
#define BSWM_SIZEOFCOMMALLOWCOMPARAMETERS                             STD_ON
#define BSWM_SIZEOFCOMMCHANNELMAPPING                                 STD_ON
#define BSWM_SIZEOFCOMMCHANNELSTATE                                   STD_ON
#define BSWM_SIZEOFCOMPDUGROUPSWITCHPARAMETERS                        STD_ON
#define BSWM_SIZEOFCOMPDUGROUPSWITCHSUBPARAMETERS                     STD_ON
#define BSWM_SIZEOFDEFERREDRULES                                      STD_ON
#define BSWM_SIZEOFEXPRESSIONS                                        STD_ON
#define BSWM_SIZEOFGENERICMAPPING                                     STD_ON
#define BSWM_SIZEOFGENERICMODEPARAMETERS                              STD_ON
#define BSWM_SIZEOFGENERICSTATE                                       STD_ON
#define BSWM_SIZEOFIMMEDIATEUSER                                      STD_ON
#define BSWM_SIZEOFINITACTIONLISTS                                    STD_ON
#define BSWM_SIZEOFINITVALUES                                         STD_ON
#define BSWM_SIZEOFMODEREQUESTQUEUE                                   STD_ON
#define BSWM_SIZEOFNMCONTROLPARAMETERS                                STD_ON
#define BSWM_SIZEOFRULESTATES                                         STD_ON
#define BSWM_SIZEOFRULES                                              STD_ON
#define BSWM_SIZEOFRULESIND                                           STD_ON
#define BSWM_SIZEOFTIMERCONTROLPARAMETERS                             STD_ON
#define BSWM_SIZEOFTIMERSTATE                                         STD_ON
#define BSWM_SIZEOFTIMERVALUE                                         STD_ON
#define BSWM_TIMERCONTROLPARAMETERS                                   STD_ON
#define BSWM_TIMEROFTIMERCONTROLPARAMETERS                            STD_ON
#define BSWM_VALUEOFTIMERCONTROLPARAMETERS                            STD_ON
#define BSWM_TIMERSTATE                                               STD_ON
#define BSWM_TIMERVALUE                                               STD_ON
#define BSWM_WDGMMAPPING                                              STD_OFF  /**< Deactivateable: 'BswM_WdgMMappingECU1' Reason: 'No Mode Request for BswMWdgMRequestPartitionReset configured.' and Deactivateable: 'BswM_WdgMMappingECU2' Reason: 'No Mode Request for BswMWdgMRequestPartitionReset configured.' */
#define BSWM_EXTERNALIDOFWDGMMAPPING                                  STD_OFF  /**< Deactivateable: 'BswM_WdgMMappingECU1.ExternalId' Reason: 'No Mode Request for BswMWdgMRequestPartitionReset configured.' and Deactivateable: 'BswM_WdgMMappingECU2.ExternalId' Reason: 'No Mode Request for BswMWdgMRequestPartitionReset configured.' */
#define BSWM_IMMEDIATEUSERENDIDXOFWDGMMAPPING                         STD_OFF  /**< Deactivateable: 'BswM_WdgMMappingECU1.ImmediateUserEndIdx' Reason: 'No Mode Request for BswMWdgMRequestPartitionReset configured.' and Deactivateable: 'BswM_WdgMMappingECU2.ImmediateUserEndIdx' Reason: 'No Mode Request for BswMWdgMRequestPartitionReset configured.' */
#define BSWM_IMMEDIATEUSERSTARTIDXOFWDGMMAPPING                       STD_OFF  /**< Deactivateable: 'BswM_WdgMMappingECU1.ImmediateUserStartIdx' Reason: 'No Mode Request for BswMWdgMRequestPartitionReset configured.' and Deactivateable: 'BswM_WdgMMappingECU2.ImmediateUserStartIdx' Reason: 'No Mode Request for BswMWdgMRequestPartitionReset configured.' */
#define BSWM_IMMEDIATEUSERUSEDOFWDGMMAPPING                           STD_OFF  /**< Deactivateable: 'BswM_WdgMMappingECU1.ImmediateUserUsed' Reason: 'No Mode Request for BswMWdgMRequestPartitionReset configured.' and Deactivateable: 'BswM_WdgMMappingECU2.ImmediateUserUsed' Reason: 'No Mode Request for BswMWdgMRequestPartitionReset configured.' */
#define BSWM_INITVALUEOFWDGMMAPPING                                   STD_OFF  /**< Deactivateable: 'BswM_WdgMMappingECU1.InitValue' Reason: 'No Mode Request for BswMWdgMRequestPartitionReset configured.' and Deactivateable: 'BswM_WdgMMappingECU2.InitValue' Reason: 'No Mode Request for BswMWdgMRequestPartitionReset configured.' */
#define BSWM_WDGMSTATE                                                STD_OFF  /**< Deactivateable: 'BswM_WdgMStateECU1' Reason: 'No Mode Request for BswMWdgMRequestPartitionReset configured.' and Deactivateable: 'BswM_WdgMStateECU2' Reason: 'No Mode Request for BswMWdgMRequestPartitionReset configured.' */
#define BSWM_PCCONFIG                                                 STD_ON
#define BSWM_ACTIONITEMSOFPCCONFIG                                    STD_ON
#define BSWM_ACTIONLISTQUEUEOFPCCONFIG                                STD_ON
#define BSWM_ACTIONLISTSOFPCCONFIG                                    STD_ON
#define BSWM_ACTIONSOFPCCONFIG                                        STD_ON
#define BSWM_CANSMCHANNELMAPPINGOFPCCONFIG                            STD_ON
#define BSWM_CANSMCHANNELSTATEOFPCCONFIG                              STD_ON
#define BSWM_COMDMCONTROLPARAMETERSOFPCCONFIG                         STD_ON
#define BSWM_COMDMCONTROLSUBPARAMETERSOFPCCONFIG                      STD_ON
#define BSWM_COMMALLOWCOMPARAMETERSOFPCCONFIG                         STD_ON
#define BSWM_COMMCHANNELMAPPINGOFPCCONFIG                             STD_ON
#define BSWM_COMMCHANNELSTATEOFPCCONFIG                               STD_ON
#define BSWM_COMPDUGROUPSWITCHPARAMETERSOFPCCONFIG                    STD_ON
#define BSWM_COMPDUGROUPSWITCHSUBPARAMETERSOFPCCONFIG                 STD_ON
#define BSWM_DEFERREDRULESOFPCCONFIG                                  STD_ON
#define BSWM_EXPRESSIONSOFPCCONFIG                                    STD_ON
#define BSWM_FINALMAGICNUMBEROFPCCONFIG                               STD_OFF  /**< Deactivateable: 'BswM_PCConfig.FinalMagicNumber' Reason: 'the module configuration does not support flashing of data.' */
#define BSWM_GENERICMAPPINGOFPCCONFIG                                 STD_ON
#define BSWM_GENERICMODEPARAMETERSOFPCCONFIG                          STD_ON
#define BSWM_GENERICSTATEOFPCCONFIG                                   STD_ON
#define BSWM_IMMEDIATEUSEROFPCCONFIG                                  STD_ON
#define BSWM_INITACTIONLISTSOFPCCONFIG                                STD_ON
#define BSWM_INITDATAHASHCODEOFPCCONFIG                               STD_OFF  /**< Deactivateable: 'BswM_PCConfig.InitDataHashCode' Reason: 'the module configuration does not support flashing of data.' */
#define BSWM_INITVALUESOFPCCONFIG                                     STD_ON
#define BSWM_INITIALIZEDOFPCCONFIG                                    STD_ON
#define BSWM_MODEREQUESTQUEUEOFPCCONFIG                               STD_ON
#define BSWM_NMCONTROLPARAMETERSOFPCCONFIG                            STD_ON
#define BSWM_RULESTATESOFPCCONFIG                                     STD_ON
#define BSWM_RULESINDOFPCCONFIG                                       STD_ON
#define BSWM_RULESOFPCCONFIG                                          STD_ON
#define BSWM_SIZEOFACTIONITEMSOFPCCONFIG                              STD_ON
#define BSWM_SIZEOFACTIONLISTQUEUEOFPCCONFIG                          STD_ON
#define BSWM_SIZEOFACTIONLISTSOFPCCONFIG                              STD_ON
#define BSWM_SIZEOFACTIONSOFPCCONFIG                                  STD_ON
#define BSWM_SIZEOFCANSMCHANNELMAPPINGOFPCCONFIG                      STD_ON
#define BSWM_SIZEOFCANSMCHANNELSTATEOFPCCONFIG                        STD_ON
#define BSWM_SIZEOFCOMDMCONTROLPARAMETERSOFPCCONFIG                   STD_ON
#define BSWM_SIZEOFCOMDMCONTROLSUBPARAMETERSOFPCCONFIG                STD_ON
#define BSWM_SIZEOFCOMMALLOWCOMPARAMETERSOFPCCONFIG                   STD_ON
#define BSWM_SIZEOFCOMMCHANNELMAPPINGOFPCCONFIG                       STD_ON
#define BSWM_SIZEOFCOMMCHANNELSTATEOFPCCONFIG                         STD_ON
#define BSWM_SIZEOFCOMPDUGROUPSWITCHPARAMETERSOFPCCONFIG              STD_ON
#define BSWM_SIZEOFCOMPDUGROUPSWITCHSUBPARAMETERSOFPCCONFIG           STD_ON
#define BSWM_SIZEOFDEFERREDRULESOFPCCONFIG                            STD_ON
#define BSWM_SIZEOFEXPRESSIONSOFPCCONFIG                              STD_ON
#define BSWM_SIZEOFGENERICMAPPINGOFPCCONFIG                           STD_ON
#define BSWM_SIZEOFGENERICMODEPARAMETERSOFPCCONFIG                    STD_ON
#define BSWM_SIZEOFGENERICSTATEOFPCCONFIG                             STD_ON
#define BSWM_SIZEOFIMMEDIATEUSEROFPCCONFIG                            STD_ON
#define BSWM_SIZEOFINITACTIONLISTSOFPCCONFIG                          STD_ON
#define BSWM_SIZEOFINITVALUESOFPCCONFIG                               STD_ON
#define BSWM_SIZEOFMODEREQUESTQUEUEOFPCCONFIG                         STD_ON
#define BSWM_SIZEOFNMCONTROLPARAMETERSOFPCCONFIG                      STD_ON
#define BSWM_SIZEOFRULESTATESOFPCCONFIG                               STD_ON
#define BSWM_SIZEOFRULESINDOFPCCONFIG                                 STD_ON
#define BSWM_SIZEOFRULESOFPCCONFIG                                    STD_ON
#define BSWM_SIZEOFTIMERCONTROLPARAMETERSOFPCCONFIG                   STD_ON
#define BSWM_SIZEOFTIMERSTATEOFPCCONFIG                               STD_ON
#define BSWM_SIZEOFTIMERVALUEOFPCCONFIG                               STD_ON
#define BSWM_TIMERCONTROLPARAMETERSOFPCCONFIG                         STD_ON
#define BSWM_TIMERSTATEOFPCCONFIG                                     STD_ON
#define BSWM_TIMERVALUEOFPCCONFIG                                     STD_ON
/** 
  \}
*/ 

/** 
  \defgroup  BswMPCMinNumericValueDefines  BswM Min Numeric Value Defines (PRE_COMPILE)
  \brief  These defines are used to implement against the minimum value in numerical based data.
  \{
*/ 
#define BSWM_MIN_ACTIONLISTQUEUE                                      0U
#define BSWM_MIN_MODEREQUESTQUEUE                                     0U
#define BSWM_MIN_RULESTATES                                           0U
#define BSWM_MIN_TIMERSTATE                                           0U
#define BSWM_MIN_TIMERVALUE                                           0UL
/** 
  \}
*/ 

/** 
  \defgroup  BswMPCMaxNumericValueDefines  BswM Max Numeric Value Defines (PRE_COMPILE)
  \brief  These defines are used to implement against the maximum value in numerical based data.
  \{
*/ 
#define BSWM_MAX_ACTIONLISTQUEUE                                      255U
#define BSWM_MAX_MODEREQUESTQUEUE                                     255U
#define BSWM_MAX_RULESTATES                                           255U
#define BSWM_MAX_TIMERSTATE                                           255U
#define BSWM_MAX_TIMERVALUE                                           4294967295UL
/** 
  \}
*/ 

/** 
  \defgroup  BswMPCNoReferenceDefines  BswM No Reference Defines (PRE_COMPILE)
  \brief  These defines are used to indicate unused indexes in data relations.
  \{
*/ 
#define BSWM_NO_PARAMETERIDXOFACTIONITEMS                             255U
#define BSWM_NO_ACTIONITEMSENDIDXOFACTIONLISTS                        255U
#define BSWM_NO_ACTIONITEMSSTARTIDXOFACTIONLISTS                      255U
#define BSWM_NO_IMMEDIATEUSERENDIDXOFCANSMCHANNELMAPPING              255U
#define BSWM_NO_IMMEDIATEUSERSTARTIDXOFCANSMCHANNELMAPPING            255U
#define BSWM_NO_COMDMCONTROLSUBPARAMETERSENDIDXOFCOMDMCONTROLPARAMETERS 255U
#define BSWM_NO_COMDMCONTROLSUBPARAMETERSSTARTIDXOFCOMDMCONTROLPARAMETERS 255U
#define BSWM_NO_COMPDUGROUPSWITCHSUBPARAMETERSENDIDXOFCOMPDUGROUPSWITCHPARAMETERS 255U
#define BSWM_NO_COMPDUGROUPSWITCHSUBPARAMETERSSTARTIDXOFCOMPDUGROUPSWITCHPARAMETERS 255U
#define BSWM_NO_IMMEDIATEUSERENDIDXOFGENERICMAPPING                   255U
#define BSWM_NO_IMMEDIATEUSERSTARTIDXOFGENERICMAPPING                 255U
#define BSWM_NO_RULESINDENDIDXOFIMMEDIATEUSER                         255U
#define BSWM_NO_RULESINDSTARTIDXOFIMMEDIATEUSER                       255U
#define BSWM_NO_ACTIONLISTSFALSEIDXOFRULES                            255U
#define BSWM_NO_ACTIONLISTSTRUEIDXOFRULES                             255U
#define BSWM_NO_IDOFRULES                                             255U
#define BSWM_NO_RULESIND                                              255U
/** 
  \}
*/ 

/** 
  \defgroup  BswMPCMaskedBitDefines  BswM Masked Bit Defines (PRE_COMPILE)
  \brief  These defines are masks to extract packed boolean data.
  \{
*/ 
#define BSWM_ACTIONITEMSUSEDOFACTIONLISTS_MASK                        0x02U
#define BSWM_CONDITIONALOFACTIONLISTS_MASK                            0x01U
#define BSWM_FORCEDOFIMMEDIATEUSER_MASK                               0x04U
#define BSWM_ONINITOFIMMEDIATEUSER_MASK                               0x02U
#define BSWM_RULESINDUSEDOFIMMEDIATEUSER_MASK                         0x01U
#define BSWM_ACTIONLISTSFALSEUSEDOFRULES_MASK                         0x02U
#define BSWM_ACTIONLISTSTRUEUSEDOFRULES_MASK                          0x01U
/** 
  \}
*/ 

/** 
  \defgroup  BswMPCIsReducedToDefineDefines  BswM Is Reduced To Define Defines (PRE_COMPILE)
  \brief  If all values in a CONST array or an element in a CONST array of structs are equal, the define is STD_ON else STD_OFF.
  \{
*/ 
#define BSWM_ISDEF_ACTIONSIDXOFACTIONITEMS                            STD_OFF
#define BSWM_ISDEF_PARAMETERIDXOFACTIONITEMS                          STD_OFF
#define BSWM_ISDEF_PARAMETERUSEDOFACTIONITEMS                         STD_OFF
#define BSWM_ISDEF_ACTIONITEMSENDIDXOFACTIONLISTS                     STD_OFF
#define BSWM_ISDEF_ACTIONITEMSSTARTIDXOFACTIONLISTS                   STD_OFF
#define BSWM_ISDEF_ACTIONITEMSUSEDOFACTIONLISTS                       STD_ON
#define BSWM_ISDEF_CONDITIONALOFACTIONLISTS                           STD_OFF
#define BSWM_ISDEF_MASKEDBITSOFACTIONLISTS                            STD_OFF
#define BSWM_ISDEF_ACTIONS                                            STD_OFF
#define BSWM_ISDEF_EXTERNALIDOFCANSMCHANNELMAPPING                    STD_ON
#define BSWM_ISDEF_IMMEDIATEUSERENDIDXOFCANSMCHANNELMAPPING           STD_ON
#define BSWM_ISDEF_IMMEDIATEUSERSTARTIDXOFCANSMCHANNELMAPPING         STD_ON
#define BSWM_ISDEF_IMMEDIATEUSERUSEDOFCANSMCHANNELMAPPING             STD_ON
#define BSWM_ISDEF_INITVALUEOFCANSMCHANNELMAPPING                     STD_ON
#define BSWM_ISDEF_COMDMCONTROLSUBPARAMETERSENDIDXOFCOMDMCONTROLPARAMETERS STD_OFF
#define BSWM_ISDEF_COMDMCONTROLSUBPARAMETERSSTARTIDXOFCOMDMCONTROLPARAMETERS STD_OFF
#define BSWM_ISDEF_COMDMCONTROLSUBPARAMETERSUSEDOFCOMDMCONTROLPARAMETERS STD_ON
#define BSWM_ISDEF_BITVALOFCOMDMCONTROLSUBPARAMETERS                  STD_OFF
#define BSWM_ISDEF_IPDUGROUPIDOFCOMDMCONTROLSUBPARAMETERS             STD_ON
#define BSWM_ISDEF_ALLOWEDOFCOMMALLOWCOMPARAMETERS                    STD_OFF
#define BSWM_ISDEF_CHANNELOFCOMMALLOWCOMPARAMETERS                    STD_ON
#define BSWM_ISDEF_EXTERNALIDOFCOMMCHANNELMAPPING                     STD_ON
#define BSWM_ISDEF_INITVALUEOFCOMMCHANNELMAPPING                      STD_ON
#define BSWM_ISDEF_COMPDUGROUPSWITCHSUBPARAMETERSENDIDXOFCOMPDUGROUPSWITCHPARAMETERS STD_OFF
#define BSWM_ISDEF_COMPDUGROUPSWITCHSUBPARAMETERSSTARTIDXOFCOMPDUGROUPSWITCHPARAMETERS STD_OFF
#define BSWM_ISDEF_COMPDUGROUPSWITCHSUBPARAMETERSUSEDOFCOMPDUGROUPSWITCHPARAMETERS STD_ON
#define BSWM_ISDEF_CONTROLOFCOMPDUGROUPSWITCHPARAMETERS               STD_ON
#define BSWM_ISDEF_BITVALOFCOMPDUGROUPSWITCHSUBPARAMETERS             STD_OFF
#define BSWM_ISDEF_IPDUGROUPIDOFCOMPDUGROUPSWITCHSUBPARAMETERS        STD_OFF
#define BSWM_ISDEF_RULESIDXOFDEFERREDRULES                            STD_OFF
#define BSWM_ISDEF_EXPRESSIONS                                        STD_OFF
#define BSWM_ISDEF_EXTERNALIDOFGENERICMAPPING                         STD_OFF
#define BSWM_ISDEF_IMMEDIATEUSERENDIDXOFGENERICMAPPING                STD_OFF
#define BSWM_ISDEF_IMMEDIATEUSERSTARTIDXOFGENERICMAPPING              STD_OFF
#define BSWM_ISDEF_IMMEDIATEUSERUSEDOFGENERICMAPPING                  STD_OFF
#define BSWM_ISDEF_INITVALUEOFGENERICMAPPING                          STD_OFF
#define BSWM_ISDEF_MODEOFGENERICMODEPARAMETERS                        STD_OFF
#define BSWM_ISDEF_USEROFGENERICMODEPARAMETERS                        STD_OFF
#define BSWM_ISDEF_FORCEDOFIMMEDIATEUSER                              STD_OFF
#define BSWM_ISDEF_MASKEDBITSOFIMMEDIATEUSER                          STD_OFF
#define BSWM_ISDEF_ONINITOFIMMEDIATEUSER                              STD_OFF
#define BSWM_ISDEF_RULESINDENDIDXOFIMMEDIATEUSER                      STD_OFF
#define BSWM_ISDEF_RULESINDSTARTIDXOFIMMEDIATEUSER                    STD_OFF
#define BSWM_ISDEF_RULESINDUSEDOFIMMEDIATEUSER                        STD_OFF
#define BSWM_ISDEF_INITACTIONLISTS                                    STD_ON
#define BSWM_ISDEF_INITVALUES                                         STD_OFF
#define BSWM_ISDEF_CHANNELOFNMCONTROLPARAMETERS                       STD_ON
#define BSWM_ISDEF_CONTROLOFNMCONTROLPARAMETERS                       STD_ON
#define BSWM_ISDEF_ACTIONLISTSFALSEIDXOFRULES                         STD_OFF
#define BSWM_ISDEF_ACTIONLISTSFALSEUSEDOFRULES                        STD_OFF
#define BSWM_ISDEF_ACTIONLISTSTRUEIDXOFRULES                          STD_OFF
#define BSWM_ISDEF_ACTIONLISTSTRUEUSEDOFRULES                         STD_ON
#define BSWM_ISDEF_EXPRESSIONSIDXOFRULES                              STD_OFF
#define BSWM_ISDEF_IDOFRULES                                          STD_OFF
#define BSWM_ISDEF_INITOFRULES                                        STD_OFF
#define BSWM_ISDEF_MASKEDBITSOFRULES                                  STD_OFF
#define BSWM_ISDEF_RULESIND                                           STD_OFF
#define BSWM_ISDEF_TIMEROFTIMERCONTROLPARAMETERS                      STD_ON
#define BSWM_ISDEF_VALUEOFTIMERCONTROLPARAMETERS                      STD_ON
#define BSWM_ISDEF_ACTIONITEMSOFPCCONFIG                              STD_OFF
#define BSWM_ISDEF_ACTIONLISTQUEUEOFPCCONFIG                          STD_ON
#define BSWM_ISDEF_ACTIONLISTSOFPCCONFIG                              STD_ON
#define BSWM_ISDEF_ACTIONSOFPCCONFIG                                  STD_OFF
#define BSWM_ISDEF_CANSMCHANNELMAPPINGOFPCCONFIG                      STD_ON
#define BSWM_ISDEF_CANSMCHANNELSTATEOFPCCONFIG                        STD_ON
#define BSWM_ISDEF_COMDMCONTROLPARAMETERSOFPCCONFIG                   STD_ON
#define BSWM_ISDEF_COMDMCONTROLSUBPARAMETERSOFPCCONFIG                STD_ON
#define BSWM_ISDEF_COMMALLOWCOMPARAMETERSOFPCCONFIG                   STD_ON
#define BSWM_ISDEF_COMMCHANNELMAPPINGOFPCCONFIG                       STD_ON
#define BSWM_ISDEF_COMMCHANNELSTATEOFPCCONFIG                         STD_ON
#define BSWM_ISDEF_COMPDUGROUPSWITCHPARAMETERSOFPCCONFIG              STD_ON
#define BSWM_ISDEF_COMPDUGROUPSWITCHSUBPARAMETERSOFPCCONFIG           STD_ON
#define BSWM_ISDEF_DEFERREDRULESOFPCCONFIG                            STD_ON
#define BSWM_ISDEF_EXPRESSIONSOFPCCONFIG                              STD_OFF
#define BSWM_ISDEF_GENERICMAPPINGOFPCCONFIG                           STD_ON
#define BSWM_ISDEF_GENERICMODEPARAMETERSOFPCCONFIG                    STD_ON
#define BSWM_ISDEF_GENERICSTATEOFPCCONFIG                             STD_ON
#define BSWM_ISDEF_IMMEDIATEUSEROFPCCONFIG                            STD_ON
#define BSWM_ISDEF_INITACTIONLISTSOFPCCONFIG                          STD_ON
#define BSWM_ISDEF_INITVALUESOFPCCONFIG                               STD_ON
#define BSWM_ISDEF_INITIALIZEDOFPCCONFIG                              STD_ON
#define BSWM_ISDEF_MODEREQUESTQUEUEOFPCCONFIG                         STD_ON
#define BSWM_ISDEF_NMCONTROLPARAMETERSOFPCCONFIG                      STD_ON
#define BSWM_ISDEF_RULESTATESOFPCCONFIG                               STD_ON
#define BSWM_ISDEF_RULESINDOFPCCONFIG                                 STD_ON
#define BSWM_ISDEF_RULESOFPCCONFIG                                    STD_ON
#define BSWM_ISDEF_SIZEOFCOMPDUGROUPSWITCHPARAMETERSOFPCCONFIG        STD_OFF
#define BSWM_ISDEF_SIZEOFCOMPDUGROUPSWITCHSUBPARAMETERSOFPCCONFIG     STD_OFF
#define BSWM_ISDEF_TIMERCONTROLPARAMETERSOFPCCONFIG                   STD_ON
#define BSWM_ISDEF_TIMERSTATEOFPCCONFIG                               STD_ON
#define BSWM_ISDEF_TIMERVALUEOFPCCONFIG                               STD_ON
/** 
  \}
*/ 

/** 
  \defgroup  BswMPCEqualsAlwaysToDefines  BswM Equals Always To Defines (PRE_COMPILE)
  \brief  If all values in a CONST array or an element in a CONST array of structs are equal, the define contains the always equals value.
  \{
*/ 
#define BSWM_EQ2_ACTIONSIDXOFACTIONITEMS                              
#define BSWM_EQ2_PARAMETERIDXOFACTIONITEMS                            
#define BSWM_EQ2_PARAMETERUSEDOFACTIONITEMS                           
#define BSWM_EQ2_ACTIONITEMSENDIDXOFACTIONLISTS                       
#define BSWM_EQ2_ACTIONITEMSSTARTIDXOFACTIONLISTS                     
#define BSWM_EQ2_ACTIONITEMSUSEDOFACTIONLISTS                         TRUE
#define BSWM_EQ2_CONDITIONALOFACTIONLISTS                             
#define BSWM_EQ2_MASKEDBITSOFACTIONLISTS                              
#define BSWM_EQ2_ACTIONS                                              
#define BSWM_EQ2_EXTERNALIDOFCANSMCHANNELMAPPING                      ComMConf_ComMChannel_FD1_CAN_f26020e5
#define BSWM_EQ2_IMMEDIATEUSERENDIDXOFCANSMCHANNELMAPPING             1U
#define BSWM_EQ2_IMMEDIATEUSERSTARTIDXOFCANSMCHANNELMAPPING           0U
#define BSWM_EQ2_IMMEDIATEUSERUSEDOFCANSMCHANNELMAPPING               TRUE
#define BSWM_EQ2_INITVALUEOFCANSMCHANNELMAPPING                       CANSM_BSWM_NO_COMMUNICATION
#define BSWM_EQ2_COMDMCONTROLSUBPARAMETERSENDIDXOFCOMDMCONTROLPARAMETERS 
#define BSWM_EQ2_COMDMCONTROLSUBPARAMETERSSTARTIDXOFCOMDMCONTROLPARAMETERS 
#define BSWM_EQ2_COMDMCONTROLSUBPARAMETERSUSEDOFCOMDMCONTROLPARAMETERS TRUE
#define BSWM_EQ2_BITVALOFCOMDMCONTROLSUBPARAMETERS                    
#define BSWM_EQ2_IPDUGROUPIDOFCOMDMCONTROLSUBPARAMETERS               ComConf_ComIPduGroup_PSCM_FD_oFD1_CAN_Rx_fcef2243
#define BSWM_EQ2_ALLOWEDOFCOMMALLOWCOMPARAMETERS                      
#define BSWM_EQ2_CHANNELOFCOMMALLOWCOMPARAMETERS                      ComMConf_ComMChannel_FD1_CAN_f26020e5
#define BSWM_EQ2_EXTERNALIDOFCOMMCHANNELMAPPING                       ComMConf_ComMChannel_FD1_CAN_f26020e5
#define BSWM_EQ2_INITVALUEOFCOMMCHANNELMAPPING                        COMM_NO_COMMUNICATION
#define BSWM_EQ2_COMPDUGROUPSWITCHSUBPARAMETERSENDIDXOFCOMPDUGROUPSWITCHPARAMETERS 
#define BSWM_EQ2_COMPDUGROUPSWITCHSUBPARAMETERSSTARTIDXOFCOMPDUGROUPSWITCHPARAMETERS 
#define BSWM_EQ2_COMPDUGROUPSWITCHSUBPARAMETERSUSEDOFCOMPDUGROUPSWITCHPARAMETERS TRUE
#define BSWM_EQ2_CONTROLOFCOMPDUGROUPSWITCHPARAMETERS                 BSWM_GROUPCONTROL_NORMAL
#define BSWM_EQ2_BITVALOFCOMPDUGROUPSWITCHSUBPARAMETERS               
#define BSWM_EQ2_IPDUGROUPIDOFCOMPDUGROUPSWITCHSUBPARAMETERS          
#define BSWM_EQ2_RULESIDXOFDEFERREDRULES                              
#define BSWM_EQ2_EXPRESSIONS                                          
#define BSWM_EQ2_EXTERNALIDOFGENERICMAPPING                           
#define BSWM_EQ2_IMMEDIATEUSERENDIDXOFGENERICMAPPING                  
#define BSWM_EQ2_IMMEDIATEUSERSTARTIDXOFGENERICMAPPING                
#define BSWM_EQ2_IMMEDIATEUSERUSEDOFGENERICMAPPING                    
#define BSWM_EQ2_INITVALUEOFGENERICMAPPING                            
#define BSWM_EQ2_MODEOFGENERICMODEPARAMETERS                          
#define BSWM_EQ2_USEROFGENERICMODEPARAMETERS                          
#define BSWM_EQ2_FORCEDOFIMMEDIATEUSER                                
#define BSWM_EQ2_MASKEDBITSOFIMMEDIATEUSER                            
#define BSWM_EQ2_ONINITOFIMMEDIATEUSER                                
#define BSWM_EQ2_RULESINDENDIDXOFIMMEDIATEUSER                        
#define BSWM_EQ2_RULESINDSTARTIDXOFIMMEDIATEUSER                      
#define BSWM_EQ2_RULESINDUSEDOFIMMEDIATEUSER                          
#define BSWM_EQ2_INITACTIONLISTS                                      0UL
#define BSWM_EQ2_INITVALUES                                           
#define BSWM_EQ2_CHANNELOFNMCONTROLPARAMETERS                         ComMConf_ComMChannel_FD1_CAN_f26020e5
#define BSWM_EQ2_CONTROLOFNMCONTROLPARAMETERS                         0U
#define BSWM_EQ2_ACTIONLISTSFALSEIDXOFRULES                           
#define BSWM_EQ2_ACTIONLISTSFALSEUSEDOFRULES                          
#define BSWM_EQ2_ACTIONLISTSTRUEIDXOFRULES                            
#define BSWM_EQ2_ACTIONLISTSTRUEUSEDOFRULES                           TRUE
#define BSWM_EQ2_EXPRESSIONSIDXOFRULES                                
#define BSWM_EQ2_IDOFRULES                                            
#define BSWM_EQ2_INITOFRULES                                          
#define BSWM_EQ2_MASKEDBITSOFRULES                                    
#define BSWM_EQ2_RULESIND                                             
#define BSWM_EQ2_TIMEROFTIMERCONTROLPARAMETERS                        BSWM_TMR_ESH_SelfRunRequestTimer
#define BSWM_EQ2_VALUEOFTIMERCONTROLPARAMETERS                        10UL
#define BSWM_EQ2_ACTIONITEMSOFPCCONFIG                                
#define BSWM_EQ2_ACTIONLISTQUEUEOFPCCONFIG                            BswM_ActionListQueue.raw
#define BSWM_EQ2_ACTIONLISTSOFPCCONFIG                                BswM_ActionLists
#define BSWM_EQ2_ACTIONSOFPCCONFIG                                    
#define BSWM_EQ2_CANSMCHANNELMAPPINGOFPCCONFIG                        BswM_CanSMChannelMapping
#define BSWM_EQ2_CANSMCHANNELSTATEOFPCCONFIG                          BswM_CanSMChannelState
#define BSWM_EQ2_COMDMCONTROLPARAMETERSOFPCCONFIG                     BswM_ComDMControlParameters
#define BSWM_EQ2_COMDMCONTROLSUBPARAMETERSOFPCCONFIG                  BswM_ComDMControlSubParameters
#define BSWM_EQ2_COMMALLOWCOMPARAMETERSOFPCCONFIG                     BswM_ComMAllowComParameters
#define BSWM_EQ2_COMMCHANNELMAPPINGOFPCCONFIG                         BswM_ComMChannelMapping
#define BSWM_EQ2_COMMCHANNELSTATEOFPCCONFIG                           BswM_ComMChannelState
#define BSWM_EQ2_COMPDUGROUPSWITCHPARAMETERSOFPCCONFIG                BswM_ComPduGroupSwitchParameters
#define BSWM_EQ2_COMPDUGROUPSWITCHSUBPARAMETERSOFPCCONFIG             BswM_ComPduGroupSwitchSubParameters
#define BSWM_EQ2_DEFERREDRULESOFPCCONFIG                              BswM_DeferredRules
#define BSWM_EQ2_EXPRESSIONSOFPCCONFIG                                
#define BSWM_EQ2_GENERICMAPPINGOFPCCONFIG                             BswM_GenericMapping
#define BSWM_EQ2_GENERICMODEPARAMETERSOFPCCONFIG                      BswM_GenericModeParameters
#define BSWM_EQ2_GENERICSTATEOFPCCONFIG                               BswM_GenericState
#define BSWM_EQ2_IMMEDIATEUSEROFPCCONFIG                              BswM_ImmediateUser
#define BSWM_EQ2_INITACTIONLISTSOFPCCONFIG                            BswM_InitActionLists
#define BSWM_EQ2_INITVALUESOFPCCONFIG                                 BswM_InitValues
#define BSWM_EQ2_INITIALIZEDOFPCCONFIG                                BswM_Initialized
#define BSWM_EQ2_MODEREQUESTQUEUEOFPCCONFIG                           BswM_ModeRequestQueue
#define BSWM_EQ2_NMCONTROLPARAMETERSOFPCCONFIG                        BswM_NmControlParameters
#define BSWM_EQ2_RULESTATESOFPCCONFIG                                 BswM_RuleStates
#define BSWM_EQ2_RULESINDOFPCCONFIG                                   BswM_RulesInd
#define BSWM_EQ2_RULESOFPCCONFIG                                      BswM_Rules
#define BSWM_EQ2_SIZEOFCOMPDUGROUPSWITCHPARAMETERSOFPCCONFIG          
#define BSWM_EQ2_SIZEOFCOMPDUGROUPSWITCHSUBPARAMETERSOFPCCONFIG       
#define BSWM_EQ2_TIMERCONTROLPARAMETERSOFPCCONFIG                     BswM_TimerControlParameters
#define BSWM_EQ2_TIMERSTATEOFPCCONFIG                                 BswM_TimerState.raw
#define BSWM_EQ2_TIMERVALUEOFPCCONFIG                                 BswM_TimerValue.raw
/** 
  \}
*/ 

/** 
  \defgroup  BswMPCSymbolicNonDereferenciateablePointers  BswM Symbolic Non Dereferenciateable Pointers (PRE_COMPILE)
  \brief  Symbolic non dereferenciateable pointers to be used if all values are optimized to a defined and to return a correct value for has macros in variants.
  \{
*/ 
#define BswM_CanSMChannelMapping                                      ((BswM_CanSMChannelMappingPtrType)(&(BswM_PCConfig)))  /**< Non derefenciateable valid pointer */
#define BswM_ComMChannelMapping                                       ((BswM_ComMChannelMappingPtrType)(&(BswM_PCConfig)))  /**< Non derefenciateable valid pointer */
#define BswM_InitActionLists                                          ((BswM_InitActionListsPtrType)(&(BswM_PCConfig)))  /**< Non derefenciateable valid pointer */
#define BswM_NmControlParameters                                      ((BswM_NmControlParametersPtrType)(&(BswM_PCConfig)))  /**< Non derefenciateable valid pointer */
#define BswM_TimerControlParameters                                   ((BswM_TimerControlParametersPtrType)(&(BswM_PCConfig)))  /**< Non derefenciateable valid pointer */
/** 
  \}
*/ 

/** 
  \defgroup  BswMPCSymbolicInitializationPointers  BswM Symbolic Initialization Pointers (PRE_COMPILE)
  \brief  Symbolic initialization pointers to be used in the call of a preinit or init function.
  \{
*/ 
#define BswM_Config_ECU1_Ptr                                          &(BswM_PCConfig.Config_ECU1)  /**< symbolic identifier which shall be used to initialize 'BswM' */
#define BswM_Config_ECU2_Ptr                                          &(BswM_PCConfig.Config_ECU2)  /**< symbolic identifier which shall be used to initialize 'BswM' */
/** 
  \}
*/ 

/** 
  \defgroup  BswMPCInitializationSymbols  BswM Initialization Symbols (PRE_COMPILE)
  \brief  Symbolic initialization pointers which may be used in the call of a preinit or init function. Please note, that the defined value can be a 'NULL_PTR' and the address operator is not usable.
  \{
*/ 
#define BswM_Config_ECU1                                              BswM_PCConfig.Config_ECU1  /**< symbolic identifier which could be used to initialize 'BswM */
#define BswM_Config_ECU2                                              BswM_PCConfig.Config_ECU2  /**< symbolic identifier which could be used to initialize 'BswM */
/** 
  \}
*/ 

/** 
  \defgroup  BswMPCGeneral  BswM General (PRE_COMPILE)
  \brief  General constant defines not associated with a group of defines.
  \{
*/ 
#define BSWM_CHECK_INIT_POINTER                                       STD_ON  /**< STD_ON if the init pointer shall not be used as NULL_PTR and a check shall validate this. */
#define BSWM_FINAL_MAGIC_NUMBER                                       0x2A1EU  /**< the precompile constant to validate the size of the initialization structure at initialization time of BswM */
#define BSWM_INDIVIDUAL_POSTBUILD                                     STD_OFF  /**< the precompile constant to check, that the module is individual postbuildable. The module 'BswM' is not configured to be postbuild capable. */
#define BSWM_INIT_DATA                                                BSWM_CONST  /**< CompilerMemClassDefine for the initialization data. */
#define BSWM_INIT_DATA_HASH_CODE                                      -1958609700L  /**< the precompile constant to validate the initialization structure at initialization time of BswM with a hashcode. The seed value is '0x2A1EU' */
#define BSWM_USE_ECUM_BSW_ERROR_HOOK                                  STD_OFF  /**< STD_ON if the EcuM_BswErrorHook shall be called in the ConfigPtr check. */
#define BSWM_USE_INIT_POINTER                                         STD_ON  /**< STD_ON if the init pointer BswM shall be used. */
/** 
  \}
*/ 



/**********************************************************************************************************************
  CONFIGURATION CLASS: POST_BUILD
  SECTION: GLOBAL CONSTANT MACROS
**********************************************************************************************************************/
/** 
  \defgroup  BswMPBDataSwitches  BswM Data Switches  (POST_BUILD)
  \brief  These defines are used to deactivate data and their processing.
  \{
*/ 
#define BSWM_PBCONFIG                                                 STD_OFF  /**< Deactivateable: 'BswM_PBConfig' Reason: 'the module configuration is VARIANT_PRE_COMPILE.' */
#define BSWM_LTCONFIGIDXOFPBCONFIG                                    STD_OFF  /**< Deactivateable: 'BswM_PBConfig.LTConfigIdx' Reason: 'the module configuration is VARIANT_PRE_COMPILE.' */
#define BSWM_PCCONFIGIDXOFPBCONFIG                                    STD_OFF  /**< Deactivateable: 'BswM_PBConfig.PCConfigIdx' Reason: 'the module configuration is VARIANT_PRE_COMPILE.' */
/** 
  \}
*/ 



/**********************************************************************************************************************
 *  GLOBAL DATA TYPES AND STRUCTURES
**********************************************************************************************************************/
/* PRQA S 0639, 0779 PRECOMPILEGLOBALDATATYPES */ /* MD_MSR_1.1_639, MD_BswM_0779 */
/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: GLOBAL DATA TYPES AND STRUCTURES
**********************************************************************************************************************/
/** 
  \defgroup  BswMPCIterableTypes  BswM Iterable Types (PRE_COMPILE)
  \brief  These type definitions are used to iterate over an array with least processor cycles for variable access as possible.
  \{
*/ 
/**   \brief  type used to iterate BswM_ActionItems */
typedef uint8_least BswM_ActionItemsIterType;

/**   \brief  type used to iterate BswM_ActionLists */
typedef uint8_least BswM_ActionListsIterType;

/**   \brief  type used to iterate BswM_Actions */
typedef uint8_least BswM_ActionsIterType;

/**   \brief  type used to iterate BswM_CanSMChannelMapping */
typedef uint8_least BswM_CanSMChannelMappingIterType;

/**   \brief  type used to iterate BswM_ComDMControlParameters */
typedef uint8_least BswM_ComDMControlParametersIterType;

/**   \brief  type used to iterate BswM_ComDMControlSubParameters */
typedef uint8_least BswM_ComDMControlSubParametersIterType;

/**   \brief  type used to iterate BswM_ComMAllowComParameters */
typedef uint8_least BswM_ComMAllowComParametersIterType;

/**   \brief  type used to iterate BswM_ComMChannelMapping */
typedef uint8_least BswM_ComMChannelMappingIterType;

/**   \brief  type used to iterate BswM_ComPduGroupSwitchParameters */
typedef uint8_least BswM_ComPduGroupSwitchParametersIterType;

/**   \brief  type used to iterate BswM_ComPduGroupSwitchSubParameters */
typedef uint8_least BswM_ComPduGroupSwitchSubParametersIterType;

/**   \brief  type used to iterate BswM_DeferredRules */
typedef uint8_least BswM_DeferredRulesIterType;

/**   \brief  type used to iterate BswM_Expressions */
typedef uint8_least BswM_ExpressionsIterType;

/**   \brief  type used to iterate BswM_GenericMapping */
typedef uint8_least BswM_GenericMappingIterType;

/**   \brief  type used to iterate BswM_GenericModeParameters */
typedef uint8_least BswM_GenericModeParametersIterType;

/**   \brief  type used to iterate BswM_ImmediateUser */
typedef uint8_least BswM_ImmediateUserIterType;

/**   \brief  type used to iterate BswM_InitActionLists */
typedef uint8_least BswM_InitActionListsIterType;

/**   \brief  type used to iterate BswM_InitValues */
typedef uint8_least BswM_InitValuesIterType;

/**   \brief  type used to iterate BswM_NmControlParameters */
typedef uint8_least BswM_NmControlParametersIterType;

/**   \brief  type used to iterate BswM_Rules */
typedef uint8_least BswM_RulesIterType;

/**   \brief  type used to iterate BswM_RulesInd */
typedef uint8_least BswM_RulesIndIterType;

/**   \brief  type used to iterate BswM_TimerControlParameters */
typedef uint8_least BswM_TimerControlParametersIterType;

/**   \brief  type used to iterate BswM_TimerState */
typedef uint8_least BswM_TimerStateIterType;

/**   \brief  type used to iterate BswM_TimerValue */
typedef uint8_least BswM_TimerValueIterType;

/** 
  \}
*/ 

/** 
  \defgroup  BswMPCIterableTypesWithSizeRelations  BswM Iterable Types With Size Relations (PRE_COMPILE)
  \brief  These type definitions are used to iterate over a VAR based array with the same iterator as the related CONST array.
  \{
*/ 
/**   \brief  type used to iterate BswM_ActionListQueue */
typedef BswM_ActionListsIterType BswM_ActionListQueueIterType;

/**   \brief  type used to iterate BswM_CanSMChannelState */
typedef BswM_CanSMChannelMappingIterType BswM_CanSMChannelStateIterType;

/**   \brief  type used to iterate BswM_ComMChannelState */
typedef BswM_ComMChannelMappingIterType BswM_ComMChannelStateIterType;

/**   \brief  type used to iterate BswM_GenericState */
typedef BswM_GenericMappingIterType BswM_GenericStateIterType;

/**   \brief  type used to iterate BswM_ModeRequestQueue */
typedef BswM_ImmediateUserIterType BswM_ModeRequestQueueIterType;

/**   \brief  type used to iterate BswM_RuleStates */
typedef BswM_RulesIterType BswM_RuleStatesIterType;

/** 
  \}
*/ 

/** 
  \defgroup  BswMPCValueTypes  BswM Value Types (PRE_COMPILE)
  \brief  These type definitions are used for value based data representations.
  \{
*/ 
/**   \brief  value based type definition for BswM_ActionsIdxOfActionItems */
typedef uint8 BswM_ActionsIdxOfActionItemsType;

/**   \brief  value based type definition for BswM_ParameterIdxOfActionItems */
typedef uint8 BswM_ParameterIdxOfActionItemsType;

/**   \brief  value based type definition for BswM_ParameterUsedOfActionItems */
typedef boolean BswM_ParameterUsedOfActionItemsType;

/**   \brief  value based type definition for BswM_ActionListQueue */
typedef uint8 BswM_ActionListQueueType;

/**   \brief  value based type definition for BswM_ActionItemsEndIdxOfActionLists */
typedef uint8 BswM_ActionItemsEndIdxOfActionListsType;

/**   \brief  value based type definition for BswM_ActionItemsStartIdxOfActionLists */
typedef uint8 BswM_ActionItemsStartIdxOfActionListsType;

/**   \brief  value based type definition for BswM_ActionItemsUsedOfActionLists */
typedef boolean BswM_ActionItemsUsedOfActionListsType;

/**   \brief  value based type definition for BswM_ConditionalOfActionLists */
typedef boolean BswM_ConditionalOfActionListsType;

/**   \brief  value based type definition for BswM_MaskedBitsOfActionLists */
typedef uint8 BswM_MaskedBitsOfActionListsType;

/**   \brief  value based type definition for BswM_ExternalIdOfCanSMChannelMapping */
typedef uint32 BswM_ExternalIdOfCanSMChannelMappingType;

/**   \brief  value based type definition for BswM_ImmediateUserEndIdxOfCanSMChannelMapping */
typedef uint8 BswM_ImmediateUserEndIdxOfCanSMChannelMappingType;

/**   \brief  value based type definition for BswM_ImmediateUserStartIdxOfCanSMChannelMapping */
typedef uint8 BswM_ImmediateUserStartIdxOfCanSMChannelMappingType;

/**   \brief  value based type definition for BswM_ImmediateUserUsedOfCanSMChannelMapping */
typedef boolean BswM_ImmediateUserUsedOfCanSMChannelMappingType;

/**   \brief  value based type definition for BswM_ComDMControlSubParametersEndIdxOfComDMControlParameters */
typedef uint8 BswM_ComDMControlSubParametersEndIdxOfComDMControlParametersType;

/**   \brief  value based type definition for BswM_ComDMControlSubParametersStartIdxOfComDMControlParameters */
typedef uint8 BswM_ComDMControlSubParametersStartIdxOfComDMControlParametersType;

/**   \brief  value based type definition for BswM_ComDMControlSubParametersUsedOfComDMControlParameters */
typedef boolean BswM_ComDMControlSubParametersUsedOfComDMControlParametersType;

/**   \brief  value based type definition for BswM_ExternalIdOfComMChannelMapping */
typedef uint32 BswM_ExternalIdOfComMChannelMappingType;

/**   \brief  value based type definition for BswM_ComPduGroupSwitchSubParametersEndIdxOfComPduGroupSwitchParameters */
typedef uint8 BswM_ComPduGroupSwitchSubParametersEndIdxOfComPduGroupSwitchParametersType;

/**   \brief  value based type definition for BswM_ComPduGroupSwitchSubParametersStartIdxOfComPduGroupSwitchParameters */
typedef uint8 BswM_ComPduGroupSwitchSubParametersStartIdxOfComPduGroupSwitchParametersType;

/**   \brief  value based type definition for BswM_ComPduGroupSwitchSubParametersUsedOfComPduGroupSwitchParameters */
typedef boolean BswM_ComPduGroupSwitchSubParametersUsedOfComPduGroupSwitchParametersType;

/**   \brief  value based type definition for BswM_ControlOfComPduGroupSwitchParameters */
typedef uint8 BswM_ControlOfComPduGroupSwitchParametersType;

/**   \brief  value based type definition for BswM_RulesIdxOfDeferredRules */
typedef uint8 BswM_RulesIdxOfDeferredRulesType;

/**   \brief  value based type definition for BswM_ExternalIdOfGenericMapping */
typedef uint32 BswM_ExternalIdOfGenericMappingType;

/**   \brief  value based type definition for BswM_ImmediateUserEndIdxOfGenericMapping */
typedef uint8 BswM_ImmediateUserEndIdxOfGenericMappingType;

/**   \brief  value based type definition for BswM_ImmediateUserStartIdxOfGenericMapping */
typedef uint8 BswM_ImmediateUserStartIdxOfGenericMappingType;

/**   \brief  value based type definition for BswM_ImmediateUserUsedOfGenericMapping */
typedef boolean BswM_ImmediateUserUsedOfGenericMappingType;

/**   \brief  value based type definition for BswM_ForcedOfImmediateUser */
typedef boolean BswM_ForcedOfImmediateUserType;

/**   \brief  value based type definition for BswM_MaskedBitsOfImmediateUser */
typedef uint8 BswM_MaskedBitsOfImmediateUserType;

/**   \brief  value based type definition for BswM_OnInitOfImmediateUser */
typedef boolean BswM_OnInitOfImmediateUserType;

/**   \brief  value based type definition for BswM_RulesIndEndIdxOfImmediateUser */
typedef uint8 BswM_RulesIndEndIdxOfImmediateUserType;

/**   \brief  value based type definition for BswM_RulesIndStartIdxOfImmediateUser */
typedef uint8 BswM_RulesIndStartIdxOfImmediateUserType;

/**   \brief  value based type definition for BswM_RulesIndUsedOfImmediateUser */
typedef boolean BswM_RulesIndUsedOfImmediateUserType;

/**   \brief  value based type definition for BswM_InitActionLists */
typedef uint8 BswM_InitActionListsType;

/**   \brief  value based type definition for BswM_InitValues */
typedef uint16 BswM_InitValuesType;

/**   \brief  value based type definition for BswM_Initialized */
typedef boolean BswM_InitializedType;

/**   \brief  value based type definition for BswM_ModeRequestQueue */
typedef uint8 BswM_ModeRequestQueueType;

/**   \brief  value based type definition for BswM_ControlOfNmControlParameters */
typedef uint8 BswM_ControlOfNmControlParametersType;

/**   \brief  value based type definition for BswM_RuleStates */
typedef uint8 BswM_RuleStatesType;

/**   \brief  value based type definition for BswM_ActionListsFalseIdxOfRules */
typedef uint8 BswM_ActionListsFalseIdxOfRulesType;

/**   \brief  value based type definition for BswM_ActionListsFalseUsedOfRules */
typedef boolean BswM_ActionListsFalseUsedOfRulesType;

/**   \brief  value based type definition for BswM_ActionListsTrueIdxOfRules */
typedef uint8 BswM_ActionListsTrueIdxOfRulesType;

/**   \brief  value based type definition for BswM_ActionListsTrueUsedOfRules */
typedef boolean BswM_ActionListsTrueUsedOfRulesType;

/**   \brief  value based type definition for BswM_ExpressionsIdxOfRules */
typedef uint8 BswM_ExpressionsIdxOfRulesType;

/**   \brief  value based type definition for BswM_IdOfRules */
typedef uint8 BswM_IdOfRulesType;

/**   \brief  value based type definition for BswM_InitOfRules */
typedef uint8 BswM_InitOfRulesType;

/**   \brief  value based type definition for BswM_MaskedBitsOfRules */
typedef uint8 BswM_MaskedBitsOfRulesType;

/**   \brief  value based type definition for BswM_RulesInd */
typedef uint8 BswM_RulesIndType;

/**   \brief  value based type definition for BswM_SizeOfActionItems */
typedef uint8 BswM_SizeOfActionItemsType;

/**   \brief  value based type definition for BswM_SizeOfActionListQueue */
typedef uint8 BswM_SizeOfActionListQueueType;

/**   \brief  value based type definition for BswM_SizeOfActionLists */
typedef uint8 BswM_SizeOfActionListsType;

/**   \brief  value based type definition for BswM_SizeOfActions */
typedef uint8 BswM_SizeOfActionsType;

/**   \brief  value based type definition for BswM_SizeOfCanSMChannelMapping */
typedef uint8 BswM_SizeOfCanSMChannelMappingType;

/**   \brief  value based type definition for BswM_SizeOfCanSMChannelState */
typedef uint8 BswM_SizeOfCanSMChannelStateType;

/**   \brief  value based type definition for BswM_SizeOfComDMControlParameters */
typedef uint8 BswM_SizeOfComDMControlParametersType;

/**   \brief  value based type definition for BswM_SizeOfComDMControlSubParameters */
typedef uint8 BswM_SizeOfComDMControlSubParametersType;

/**   \brief  value based type definition for BswM_SizeOfComMAllowComParameters */
typedef uint8 BswM_SizeOfComMAllowComParametersType;

/**   \brief  value based type definition for BswM_SizeOfComMChannelMapping */
typedef uint8 BswM_SizeOfComMChannelMappingType;

/**   \brief  value based type definition for BswM_SizeOfComMChannelState */
typedef uint8 BswM_SizeOfComMChannelStateType;

/**   \brief  value based type definition for BswM_SizeOfComPduGroupSwitchParameters */
typedef uint8 BswM_SizeOfComPduGroupSwitchParametersType;

/**   \brief  value based type definition for BswM_SizeOfComPduGroupSwitchSubParameters */
typedef uint8 BswM_SizeOfComPduGroupSwitchSubParametersType;

/**   \brief  value based type definition for BswM_SizeOfDeferredRules */
typedef uint8 BswM_SizeOfDeferredRulesType;

/**   \brief  value based type definition for BswM_SizeOfExpressions */
typedef uint8 BswM_SizeOfExpressionsType;

/**   \brief  value based type definition for BswM_SizeOfGenericMapping */
typedef uint8 BswM_SizeOfGenericMappingType;

/**   \brief  value based type definition for BswM_SizeOfGenericModeParameters */
typedef uint8 BswM_SizeOfGenericModeParametersType;

/**   \brief  value based type definition for BswM_SizeOfGenericState */
typedef uint8 BswM_SizeOfGenericStateType;

/**   \brief  value based type definition for BswM_SizeOfImmediateUser */
typedef uint8 BswM_SizeOfImmediateUserType;

/**   \brief  value based type definition for BswM_SizeOfInitActionLists */
typedef uint8 BswM_SizeOfInitActionListsType;

/**   \brief  value based type definition for BswM_SizeOfInitValues */
typedef uint8 BswM_SizeOfInitValuesType;

/**   \brief  value based type definition for BswM_SizeOfModeRequestQueue */
typedef uint8 BswM_SizeOfModeRequestQueueType;

/**   \brief  value based type definition for BswM_SizeOfNmControlParameters */
typedef uint8 BswM_SizeOfNmControlParametersType;

/**   \brief  value based type definition for BswM_SizeOfRuleStates */
typedef uint8 BswM_SizeOfRuleStatesType;

/**   \brief  value based type definition for BswM_SizeOfRules */
typedef uint8 BswM_SizeOfRulesType;

/**   \brief  value based type definition for BswM_SizeOfRulesInd */
typedef uint8 BswM_SizeOfRulesIndType;

/**   \brief  value based type definition for BswM_SizeOfTimerControlParameters */
typedef uint8 BswM_SizeOfTimerControlParametersType;

/**   \brief  value based type definition for BswM_SizeOfTimerState */
typedef uint8 BswM_SizeOfTimerStateType;

/**   \brief  value based type definition for BswM_SizeOfTimerValue */
typedef uint8 BswM_SizeOfTimerValueType;

/**   \brief  value based type definition for BswM_TimerState */
typedef uint8 BswM_TimerStateType;

/**   \brief  value based type definition for BswM_TimerValue */
typedef uint32 BswM_TimerValueType;

/** 
  \}
*/ 

/** 
  \defgroup  BswMPCStructTypes  BswM Struct Types (PRE_COMPILE)
  \brief  These type definitions are used for structured data representations.
  \{
*/ 
/**   \brief  type used in BswM_ActionItems */
typedef struct sBswM_ActionItemsType
{
  BswM_ActionsIdxOfActionItemsType ActionsIdxOfActionItems;  /**< the index of the 1:1 relation pointing to BswM_Actions */
  BswM_ParameterIdxOfActionItemsType ParameterIdxOfActionItems;  /**< the index of the 0:1 relation pointing to BswM_ComMAllowComParameters,BswM_ComMModeLimitationParameters,BswM_ComMModeSwitchParameters,BswM_ComDMControlParameters,BswM_EcuMSelectShutdownTargetParameters,BswM_EcuMStateSwitchParameters,BswM_LinScheduleRequestParameters,BswM_NmControlParameters,BswM_ComSwitchIPduModeParameters,BswM_ComPduGroupSwitchParameters,BswM_ComPduGroupHandlingParameters,BswM_ComDMHandlingParameters,BswM_ComTriggerIPduSendParameters,BswM_PduRouterControlParameters,BswM_TimerControlParameters,BswM_GenericModeParameters,BswM_J1939DcmStateParameters,BswM_J1939RmStateParameters,BswM_SdClientParameters,BswM_SdConsumedParameters,BswM_SdServerParameters,BswM_RuleControlParameters,BswM_ActionLists,BswM_Rules */
} BswM_ActionItemsType;

/**   \brief  type used in BswM_ActionLists */
typedef struct sBswM_ActionListsType
{
  BswM_ActionItemsEndIdxOfActionListsType ActionItemsEndIdxOfActionLists;  /**< the end index of the 0:n relation pointing to BswM_ActionItems */
  BswM_ActionItemsStartIdxOfActionListsType ActionItemsStartIdxOfActionLists;  /**< the start index of the 0:n relation pointing to BswM_ActionItems */
  BswM_MaskedBitsOfActionListsType MaskedBitsOfActionLists;  /**< contains bitcoded the boolean data of BswM_ActionItemsUsedOfActionLists, BswM_ConditionalOfActionLists */
} BswM_ActionListsType;

/**   \brief  type used in BswM_CanSMChannelMapping */
typedef struct sBswM_CanSMChannelMappingType
{
  uint8 BswM_CanSMChannelMappingNeverUsed;  /**< dummy entry for the structure in the configuration variant precompile which is not used by the code. */
} BswM_CanSMChannelMappingType;

/**   \brief  type used in BswM_ComDMControlParameters */
typedef struct sBswM_ComDMControlParametersType
{
  BswM_ComDMControlSubParametersEndIdxOfComDMControlParametersType ComDMControlSubParametersEndIdxOfComDMControlParameters;  /**< the end index of the 0:n relation pointing to BswM_ComDMControlSubParameters */
  BswM_ComDMControlSubParametersStartIdxOfComDMControlParametersType ComDMControlSubParametersStartIdxOfComDMControlParameters;  /**< the start index of the 0:n relation pointing to BswM_ComDMControlSubParameters */
} BswM_ComDMControlParametersType;

/**   \brief  type used in BswM_ComDMControlSubParameters */
typedef struct sBswM_ComDMControlSubParametersType
{
  boolean BitValOfComDMControlSubParameters;
} BswM_ComDMControlSubParametersType;

/**   \brief  type used in BswM_ComMAllowComParameters */
typedef struct sBswM_ComMAllowComParametersType
{
  boolean AllowedOfComMAllowComParameters;
} BswM_ComMAllowComParametersType;

/**   \brief  type used in BswM_ComMChannelMapping */
typedef struct sBswM_ComMChannelMappingType
{
  uint8 BswM_ComMChannelMappingNeverUsed;  /**< dummy entry for the structure in the configuration variant precompile which is not used by the code. */
} BswM_ComMChannelMappingType;

/**   \brief  type used in BswM_ComPduGroupSwitchParameters */
typedef struct sBswM_ComPduGroupSwitchParametersType
{
  BswM_ComPduGroupSwitchSubParametersEndIdxOfComPduGroupSwitchParametersType ComPduGroupSwitchSubParametersEndIdxOfComPduGroupSwitchParameters;  /**< the end index of the 0:n relation pointing to BswM_ComPduGroupSwitchSubParameters */
  BswM_ComPduGroupSwitchSubParametersStartIdxOfComPduGroupSwitchParametersType ComPduGroupSwitchSubParametersStartIdxOfComPduGroupSwitchParameters;  /**< the start index of the 0:n relation pointing to BswM_ComPduGroupSwitchSubParameters */
} BswM_ComPduGroupSwitchParametersType;

/**   \brief  type used in BswM_ComPduGroupSwitchSubParameters */
typedef struct sBswM_ComPduGroupSwitchSubParametersType
{
  Com_IpduGroupIdType IpduGroupIdOfComPduGroupSwitchSubParameters;
  boolean BitValOfComPduGroupSwitchSubParameters;
} BswM_ComPduGroupSwitchSubParametersType;

/**   \brief  type used in BswM_DeferredRules */
typedef struct sBswM_DeferredRulesType
{
  BswM_RulesIdxOfDeferredRulesType RulesIdxOfDeferredRules;  /**< the index of the 1:1 relation pointing to BswM_Rules */
} BswM_DeferredRulesType;

/**   \brief  type used in BswM_GenericMapping */
typedef struct sBswM_GenericMappingType
{
  BswM_ExternalIdOfGenericMappingType ExternalIdOfGenericMapping;  /**< External id of BswMGenericRequest. */
  BswM_ImmediateUserEndIdxOfGenericMappingType ImmediateUserEndIdxOfGenericMapping;  /**< the end index of the 0:n relation pointing to BswM_ImmediateUser */
  BswM_ImmediateUserStartIdxOfGenericMappingType ImmediateUserStartIdxOfGenericMapping;  /**< the start index of the 0:n relation pointing to BswM_ImmediateUser */
  BswM_ModeType InitValueOfGenericMapping;  /**< Initialization value of port. */
} BswM_GenericMappingType;

/**   \brief  type used in BswM_GenericModeParameters */
typedef struct sBswM_GenericModeParametersType
{
  BswM_ModeType ModeOfGenericModeParameters;
  BswM_UserType UserOfGenericModeParameters;
} BswM_GenericModeParametersType;

/**   \brief  type used in BswM_ImmediateUser */
typedef struct sBswM_ImmediateUserType
{
  BswM_MaskedBitsOfImmediateUserType MaskedBitsOfImmediateUser;  /**< contains bitcoded the boolean data of BswM_ForcedOfImmediateUser, BswM_OnInitOfImmediateUser, BswM_RulesIndUsedOfImmediateUser */
  BswM_RulesIndEndIdxOfImmediateUserType RulesIndEndIdxOfImmediateUser;  /**< the end index of the 0:n relation pointing to BswM_RulesInd */
  BswM_RulesIndStartIdxOfImmediateUserType RulesIndStartIdxOfImmediateUser;  /**< the start index of the 0:n relation pointing to BswM_RulesInd */
} BswM_ImmediateUserType;

/**   \brief  type used in BswM_NmControlParameters */
typedef struct sBswM_NmControlParametersType
{
  uint8 BswM_NmControlParametersNeverUsed;  /**< dummy entry for the structure in the configuration variant precompile which is not used by the code. */
} BswM_NmControlParametersType;

/**   \brief  type used in BswM_Rules */
typedef struct sBswM_RulesType
{
  BswM_ActionListsFalseIdxOfRulesType ActionListsFalseIdxOfRules;  /**< the index of the 0:1 relation pointing to BswM_ActionLists */
  BswM_ActionListsTrueIdxOfRulesType ActionListsTrueIdxOfRules;  /**< the index of the 0:1 relation pointing to BswM_ActionLists */
  BswM_ExpressionsIdxOfRulesType ExpressionsIdxOfRules;  /**< the index of the 1:1 relation pointing to BswM_Expressions */
  BswM_IdOfRulesType IdOfRules;  /**< External id of rule. */
  BswM_InitOfRulesType InitOfRules;  /**< Initialization value of rule state (TRUE, FALSE, UNDEFINED or DEACTIVATED). */
  BswM_MaskedBitsOfRulesType MaskedBitsOfRules;  /**< contains bitcoded the boolean data of BswM_ActionListsFalseUsedOfRules, BswM_ActionListsTrueUsedOfRules */
} BswM_RulesType;

/**   \brief  type used in BswM_TimerControlParameters */
typedef struct sBswM_TimerControlParametersType
{
  uint8 BswM_TimerControlParametersNeverUsed;  /**< dummy entry for the structure in the configuration variant precompile which is not used by the code. */
} BswM_TimerControlParametersType;

/** 
  \}
*/ 

/** 
  \defgroup  BswMPCSymbolicStructTypes  BswM Symbolic Struct Types (PRE_COMPILE)
  \brief  These structs are used in unions to have a symbol based data representation style.
  \{
*/ 
/**   \brief  type to be used as symbolic data element access to BswM_ActionListQueue in the predefined variant ECU1 */
typedef struct sBswM_ActionListQueueECU1StructTag
{
  BswM_ActionListQueueType AL_INIT_AL_Initialize[1];
  BswM_ActionListQueueType AL_ESH_AL_RunToPostRun[1];
  BswM_ActionListQueueType AL_ESH_AL_WaitForNvMToShutdown[1];
  BswM_ActionListQueueType AL_ESH_AL_WakeupToPrep[1];
  BswM_ActionListQueueType AL_ESH_AL_WaitForNvMWakeup[1];
  BswM_ActionListQueueType AL_ESH_AL_WakeupToRun[1];
  BswM_ActionListQueueType AL_ESH_AL_InitToWakeup[1];
  BswM_ActionListQueueType AL_ESH_AL_PostRunToPrepShutdown[1];
  BswM_ActionListQueueType AL_ESH_AL_ESH_PostRunToPrepCheck[1];
  BswM_ActionListQueueType AL_ESH_AL_PostRunToRun[1];
  BswM_ActionListQueueType AL_ESH_AL_ExitPostRun[1];
  BswM_ActionListQueueType AL_ESH_AL_PrepShutdownToWaitForNvM[1];
  BswM_ActionListQueueType AL_ESH_AL_ExitRun[1];
  BswM_ActionListQueueType AL_SHUTDOWN[1];
  BswM_ActionListQueueType AL_CC_AL_FD1_CAN_f26020e5_Disable_DM[1];
  BswM_ActionListQueueType AL_CC_AL_FD1_CAN_f26020e5_Enable_DM[1];
  BswM_ActionListQueueType AL_CC_AL_FD1_CAN_f26020e5_RX_Disable[1];
  BswM_ActionListQueueType AL_CC_AL_FD1_CAN_f26020e5_RX_EnableNoinit[1];
  BswM_ActionListQueueType AL_CC_AL_FD1_CAN_f26020e5_TX_Disable[1];
  BswM_ActionListQueueType AL_CC_AL_FD1_CAN_f26020e5_TX_EnableNoinit[1];
  BswM_ActionListQueueType AL_NmDisable[1];
  BswM_ActionListQueueType AL_DisableAllCom[1];
} sBswM_ActionListQueueECU1StructType;

/**   \brief  type to be used as symbolic data element access to BswM_ActionListQueue in the predefined variant ECU2 */
typedef struct sBswM_ActionListQueueECU2StructTag
{
  BswM_ActionListQueueType AL_INIT_AL_Initialize[1];
  BswM_ActionListQueueType AL_ESH_AL_RunToPostRun[1];
  BswM_ActionListQueueType AL_ESH_AL_WaitForNvMToShutdown[1];
  BswM_ActionListQueueType AL_ESH_AL_WakeupToPrep[1];
  BswM_ActionListQueueType AL_ESH_AL_WaitForNvMWakeup[1];
  BswM_ActionListQueueType AL_ESH_AL_WakeupToRun[1];
  BswM_ActionListQueueType AL_ESH_AL_InitToWakeup[1];
  BswM_ActionListQueueType AL_ESH_AL_PostRunToPrepShutdown[1];
  BswM_ActionListQueueType AL_ESH_AL_ESH_PostRunToPrepCheck[1];
  BswM_ActionListQueueType AL_ESH_AL_PostRunToRun[1];
  BswM_ActionListQueueType AL_ESH_AL_ExitPostRun[1];
  BswM_ActionListQueueType AL_ESH_AL_PrepShutdownToWaitForNvM[1];
  BswM_ActionListQueueType AL_ESH_AL_ExitRun[1];
  BswM_ActionListQueueType AL_SHUTDOWN[1];
  BswM_ActionListQueueType AL_CC_AL_FD1_CAN_f26020e5_Disable_DM[1];
  BswM_ActionListQueueType AL_CC_AL_FD1_CAN_f26020e5_Enable_DM[1];
  BswM_ActionListQueueType AL_CC_AL_FD1_CAN_f26020e5_RX_Disable[1];
  BswM_ActionListQueueType AL_CC_AL_FD1_CAN_f26020e5_RX_EnableNoinit[1];
  BswM_ActionListQueueType AL_CC_AL_FD1_CAN_f26020e5_TX_Disable[1];
  BswM_ActionListQueueType AL_CC_AL_FD1_CAN_f26020e5_TX_EnableNoinit[1];
  BswM_ActionListQueueType AL_NmDisable[1];
  BswM_ActionListQueueType AL_DisableAllCom[1];
} sBswM_ActionListQueueECU2StructType;

/**   \brief  type to be used as symbolic data element access to BswM_TimerState in the predefined variant ECU1 */
typedef struct sBswM_TimerStateECU1StructTag
{
  BswM_TimerStateType MRP_ESH_SelfRunRequestTimer[1];
} sBswM_TimerStateECU1StructType;

/**   \brief  type to be used as symbolic data element access to BswM_TimerState in the predefined variant ECU2 */
typedef struct sBswM_TimerStateECU2StructTag
{
  BswM_TimerStateType MRP_ESH_SelfRunRequestTimer[1];
} sBswM_TimerStateECU2StructType;

/**   \brief  type to be used as symbolic data element access to BswM_TimerValue in the predefined variant ECU1 */
typedef struct sBswM_TimerValueECU1StructTag
{
  BswM_TimerValueType MRP_ESH_SelfRunRequestTimer[1];
} sBswM_TimerValueECU1StructType;

/**   \brief  type to be used as symbolic data element access to BswM_TimerValue in the predefined variant ECU2 */
typedef struct sBswM_TimerValueECU2StructTag
{
  BswM_TimerValueType MRP_ESH_SelfRunRequestTimer[1];
} sBswM_TimerValueECU2StructType;

/** 
  \}
*/ 

/** 
  \defgroup  BswMPCUnionIndexAndSymbolTypes  BswM Union Index And Symbol Types (PRE_COMPILE)
  \brief  These unions are used to access arrays in an index and symbol based style.
  \{
*/ 
/**   \brief  type to access BswM_ActionListQueue in an index and symbol based style. */
typedef union uBswM_ActionListQueueTag
{  /* PRQA S 0750 */  /* MD_CSL_18.4 */
  BswM_ActionListQueueType raw[22];
  sBswM_ActionListQueueECU1StructType strECU1;
  sBswM_ActionListQueueECU2StructType strECU2;
} uBswM_ActionListQueueType;

/**   \brief  type to access BswM_TimerState in an index and symbol based style. */
typedef union uBswM_TimerStateTag
{  /* PRQA S 0750 */  /* MD_CSL_18.4 */
  BswM_TimerStateType raw[1];
  sBswM_TimerStateECU1StructType strECU1;
  sBswM_TimerStateECU2StructType strECU2;
} uBswM_TimerStateType;

/**   \brief  type to access BswM_TimerValue in an index and symbol based style. */
typedef union uBswM_TimerValueTag
{  /* PRQA S 0750 */  /* MD_CSL_18.4 */
  BswM_TimerValueType raw[1];
  sBswM_TimerValueECU1StructType strECU1;
  sBswM_TimerValueECU2StructType strECU2;
} uBswM_TimerValueType;

/** 
  \}
*/ 

/** 
  \defgroup  BswMPCRootPointerTypes  BswM Root Pointer Types (PRE_COMPILE)
  \brief  These type definitions are used to point to arrays.
  \{
*/ 
/**   \brief  type used to point to BswM_ActionItems */
typedef P2CONST(BswM_ActionItemsType, TYPEDEF, BSWM_CONST) BswM_ActionItemsPtrType;

/**   \brief  type used to point to BswM_ActionListQueue */
typedef P2VAR(BswM_ActionListQueueType, TYPEDEF, BSWM_VAR_NOINIT) BswM_ActionListQueuePtrType;

/**   \brief  type used to point to BswM_ActionLists */
typedef P2CONST(BswM_ActionListsType, TYPEDEF, BSWM_CONST) BswM_ActionListsPtrType;

/**   \brief  type used to point to BswM_Actions */
typedef P2CONST(BswM_ActionFuncType, TYPEDEF, BSWM_CONST) BswM_ActionsPtrType;

/**   \brief  type used to point to BswM_CanSMChannelMapping */
typedef P2CONST(BswM_CanSMChannelMappingType, TYPEDEF, BSWM_CONST) BswM_CanSMChannelMappingPtrType;

/**   \brief  type used to point to BswM_CanSMChannelState */
typedef P2VAR(CanSM_BswMCurrentStateType, TYPEDEF, BSWM_VAR_NOINIT) BswM_CanSMChannelStatePtrType;

/**   \brief  type used to point to BswM_ComDMControlParameters */
typedef P2CONST(BswM_ComDMControlParametersType, TYPEDEF, BSWM_CONST) BswM_ComDMControlParametersPtrType;

/**   \brief  type used to point to BswM_ComDMControlSubParameters */
typedef P2CONST(BswM_ComDMControlSubParametersType, TYPEDEF, BSWM_CONST) BswM_ComDMControlSubParametersPtrType;

/**   \brief  type used to point to BswM_ComMAllowComParameters */
typedef P2CONST(BswM_ComMAllowComParametersType, TYPEDEF, BSWM_CONST) BswM_ComMAllowComParametersPtrType;

/**   \brief  type used to point to BswM_ComMChannelMapping */
typedef P2CONST(BswM_ComMChannelMappingType, TYPEDEF, BSWM_CONST) BswM_ComMChannelMappingPtrType;

/**   \brief  type used to point to BswM_ComMChannelState */
typedef P2VAR(ComM_ModeType, TYPEDEF, BSWM_VAR_NOINIT) BswM_ComMChannelStatePtrType;

/**   \brief  type used to point to BswM_ComPduGroupSwitchParameters */
typedef P2CONST(BswM_ComPduGroupSwitchParametersType, TYPEDEF, BSWM_CONST) BswM_ComPduGroupSwitchParametersPtrType;

/**   \brief  type used to point to BswM_ComPduGroupSwitchSubParameters */
typedef P2CONST(BswM_ComPduGroupSwitchSubParametersType, TYPEDEF, BSWM_CONST) BswM_ComPduGroupSwitchSubParametersPtrType;

/**   \brief  type used to point to BswM_DeferredRules */
typedef P2CONST(BswM_DeferredRulesType, TYPEDEF, BSWM_CONST) BswM_DeferredRulesPtrType;

/**   \brief  type used to point to BswM_Expressions */
typedef P2CONST(BswM_ExpressionFuncType, TYPEDEF, BSWM_CONST) BswM_ExpressionsPtrType;

/**   \brief  type used to point to BswM_GenericMapping */
typedef P2CONST(BswM_GenericMappingType, TYPEDEF, BSWM_CONST) BswM_GenericMappingPtrType;

/**   \brief  type used to point to BswM_GenericModeParameters */
typedef P2CONST(BswM_GenericModeParametersType, TYPEDEF, BSWM_CONST) BswM_GenericModeParametersPtrType;

/**   \brief  type used to point to BswM_GenericState */
typedef P2VAR(BswM_ModeType, TYPEDEF, BSWM_VAR_NOINIT) BswM_GenericStatePtrType;

/**   \brief  type used to point to BswM_ImmediateUser */
typedef P2CONST(BswM_ImmediateUserType, TYPEDEF, BSWM_CONST) BswM_ImmediateUserPtrType;

/**   \brief  type used to point to BswM_InitActionLists */
typedef P2CONST(BswM_InitActionListsType, TYPEDEF, BSWM_CONST) BswM_InitActionListsPtrType;

/**   \brief  type used to point to BswM_InitValues */
typedef P2CONST(BswM_InitValuesType, TYPEDEF, BSWM_CONST) BswM_InitValuesPtrType;

/**   \brief  type used to point to BswM_ModeRequestQueue */
typedef P2VAR(BswM_ModeRequestQueueType, TYPEDEF, BSWM_VAR_NOINIT) BswM_ModeRequestQueuePtrType;

/**   \brief  type used to point to BswM_NmControlParameters */
typedef P2CONST(BswM_NmControlParametersType, TYPEDEF, BSWM_CONST) BswM_NmControlParametersPtrType;

/**   \brief  type used to point to BswM_RuleStates */
typedef P2VAR(BswM_RuleStatesType, TYPEDEF, BSWM_VAR_NOINIT) BswM_RuleStatesPtrType;

/**   \brief  type used to point to BswM_Rules */
typedef P2CONST(BswM_RulesType, TYPEDEF, BSWM_CONST) BswM_RulesPtrType;

/**   \brief  type used to point to BswM_RulesInd */
typedef P2CONST(BswM_RulesIndType, TYPEDEF, BSWM_CONST) BswM_RulesIndPtrType;

/**   \brief  type used to point to BswM_TimerControlParameters */
typedef P2CONST(BswM_TimerControlParametersType, TYPEDEF, BSWM_CONST) BswM_TimerControlParametersPtrType;

/**   \brief  type used to point to BswM_TimerState */
typedef P2VAR(BswM_TimerStateType, TYPEDEF, BSWM_VAR_NOINIT) BswM_TimerStatePtrType;

/**   \brief  type used to point to BswM_TimerValue */
typedef P2VAR(BswM_TimerValueType, TYPEDEF, BSWM_VAR_NOINIT) BswM_TimerValuePtrType;

/** 
  \}
*/ 

/** 
  \defgroup  BswMPCRootValueTypes  BswM Root Value Types (PRE_COMPILE)
  \brief  These type definitions are used for value representations in root arrays.
  \{
*/ 
/**   \brief  type used in BswM_PCConfig */
typedef struct sBswM_PCConfigType
{
  BswM_ActionItemsPtrType ActionItemsOfPCConfig;  /**< the pointer to BswM_ActionItems */
  BswM_ActionsPtrType ActionsOfPCConfig;  /**< the pointer to BswM_Actions */
  BswM_ExpressionsPtrType ExpressionsOfPCConfig;  /**< the pointer to BswM_Expressions */
  BswM_SizeOfComPduGroupSwitchParametersType SizeOfComPduGroupSwitchParametersOfPCConfig;  /**< the number of accomplishable value elements in BswM_ComPduGroupSwitchParameters */
  BswM_SizeOfComPduGroupSwitchSubParametersType SizeOfComPduGroupSwitchSubParametersOfPCConfig;  /**< the number of accomplishable value elements in BswM_ComPduGroupSwitchSubParameters */
} BswM_PCConfigType;

typedef BswM_PCConfigType BswM_ConfigType;  /**< A structure type is present for data in each configuration class. This typedef redefines the probably different name to the specified one. */

/**   \brief  type to access BswM_PCConfig in a symbol based style. */
typedef struct sBswM_PCConfigsType
{
  BswM_PCConfigType Config_ECU1;  /**< [Config_ECU1] */
  BswM_PCConfigType Config_ECU2;  /**< [Config_ECU2] */
} BswM_PCConfigsType;

/** 
  \}
*/ 


/* PRQA L:PRECOMPILEGLOBALDATATYPES */

/* PRQA S 0639, 0779 POSTBUILDGLOBALDATATYPES */ /* MD_MSR_1.1_639, MD_BswM_0779 */ 
/**********************************************************************************************************************
  CONFIGURATION CLASS: POST_BUILD
  SECTION: GLOBAL DATA TYPES AND STRUCTURES
**********************************************************************************************************************/

/* PRQA L:POSTBUILDGLOBALDATATYPES */

/**********************************************************************************************************************
  GLOBAL DATA PROTOTYPES
**********************************************************************************************************************/
/* PRQA S 3451 EXTERNDECLARATIONS */ /* MD_BswM_3451 */ 
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


/* PRQA L:EXTERNDECLARATIONS */




/**********************************************************************************************************************
 *  GLOBAL FUNCTION PROTOTYPES
**********************************************************************************************************************/
#define BSWM_START_SEC_CODE
/* PRQA S 5087 1 */ /* MD_MSR_19.1 */
#include "MemMap.h"

/* -----------------------------------------------------------------------------
&&&~ USER CALLOUT DECLARATIONS
----------------------------------------------------------------------------- */
/* PRQA S 0777 CALLOUTDECLARATIONS */ /* MD_BswM_0779 */ 
extern FUNC(void, BSWM_CODE) BswM_INIT_NvMReadAll(void);
extern FUNC(void, BSWM_CODE) BswM_ESH_OnEnterPostRun(void);
extern FUNC(void, BSWM_CODE) BswM_ESH_OnEnterShutdown(void);
extern FUNC(void, BSWM_CODE) BswM_ESH_OnEnterPrepShutdown(void);
extern FUNC(void, BSWM_CODE) BswM_ESH_OnEnterWakeup(void);
extern FUNC(void, BSWM_CODE) BswM_ESH_OnEnterRun(void);
extern FUNC(void, BSWM_CODE) BswM_ESH_OnEnterWaitForNvm(void);
extern FUNC(void, BSWM_CODE) BswM_AL_SetProgrammableInterrupts(void);
extern FUNC(void, BSWM_CODE) BswM_DiagcMgrPwrDwn(void);
extern FUNC(void, BSWM_CODE) BswM_FinalizeShtdwn(void);
extern FUNC(void, BSWM_CODE) BswM_SHUTDOWN_NvMWriteAll(void);
extern FUNC(void, BSWM_CODE) BswM_PrepShtdwn(void);
extern FUNC(void, BSWM_CODE) ESH_ComM_CheckPendingRequests_ECU1(void);
extern FUNC(void, BSWM_CODE) ESH_ComM_CheckPendingRequests_ECU2(void);
/* PRQA L:CALLOUTDECLARATIONS */

#define BSWM_STOP_SEC_CODE
/* PRQA S 5087 1 */ /* MD_MSR_19.1 */
#include "MemMap.h"

#endif /* BSWM_CFG_H */

