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
 *            Module: CanNm
 *           Program: MSR_Ford_SLP1 (MSR_Ford_SLP1)
 *          Customer: Nexteer Automotive Corporation
 *       Expiry Date: Not restricted
 *  Ordered Derivat.: R7F701373EABG
 *    License Scope : The usage is restricted to CBD1601056_D00
 *
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *              File: CanNm_Cfg.c
 *   Generation Time: 2018-01-10 16:15:22
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


#define CANNM_CFG_SOURCE

/**********************************************************************************************************************
 * MISRA JUSTIFICATION
 *********************************************************************************************************************/
/* PRQA S 0857 EOF */ /* MD_MSR_1.1_857 */
/* PRQA S 0779 EOF */ /* MD_CSL_0779 */

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "CanNm_Cfg.h"

#include "PduR_Cfg.h"

#include "CanIf_Cfg.h"

#include "Nm.h"

/**********************************************************************************************************************
 *  LOCAL CONSTANT MACROS
 *********************************************************************************************************************/

/**********************************************************************************************************************
  LOCAL DATA PROTOTYPES
**********************************************************************************************************************/
/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: LOCAL DATA TYPES AND STRUCTURES
**********************************************************************************************************************/


/**********************************************************************************************************************
  LOCAL DATA
**********************************************************************************************************************/
/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: LOCAL DATA
**********************************************************************************************************************/



#define CANNM_START_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"  /* PRQA S 5087 */ /* MD_MSR_19.1 */

/* NM State */
VAR( Nm_StateType, CANNM_VAR_INIT ) CanNm_NmState[CANNM_NUMBER_OF_CANNM_CHANNELS] =
{
  NM_STATE_UNINIT
};

#define CANNM_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"  /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
  GLOBAL DATA
**********************************************************************************************************************/
/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: GLOBAL DATA
**********************************************************************************************************************/
/**********************************************************************************************************************
  CanNm_ChannelConfig
**********************************************************************************************************************/
/** 
  \var    CanNm_ChannelConfig
  \details
  Element                   Description
  TimeoutTime               Timeout for the NM messages [ms].
  ActiveWakeUpBitEnabled    Determines if Active WUP Bit Handling is active or not
  ChannelId                 Channel ID configured for the respective instance of the NM.
  MsgCycleTime              Period of a NM message [ms]. It determines the periodic rate in the periodic transmission mode.
  MsgTimeoutTime            Transmission Timeout [ms] of NM message. If there is no transmission confirmation by the CAN Interface within this timeout, the CAN NM module shall give an error notification.
  PduCbvPosition            Control Bit Vector Position in the PDU
  PduNidPosition            Node ID Position in the PDU
  RemoteSleepIndTime        Timeout for Remote Sleep Indication [ms].
  RepeatMessageTime         Timeout for Repeat Message State [ms].
  WaitBusSleepTime          Timeout for bus calm down phase [ms].
*/ 
#define CANNM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(CanNm_ChannelConfigType, CANNM_CONST) CanNm_ChannelConfig[1] = {
    /* Index    TimeoutTime  ActiveWakeUpBitEnabled  ChannelId                               MsgCycleTime  MsgTimeoutTime  PduCbvPosition    PduNidPosition    RemoteSleepIndTime  RepeatMessageTime  WaitBusSleepTime        Referable Keys */
  { /*     0 */        300U,                   TRUE, NmConf_NmChannelConfig_NmChannelConfig,         100U,            90U, CANNM_PDU_BYTE_1, CANNM_PDU_BYTE_0,               150U,                0U,             151U }   /* [/ActiveEcuC/ComM/ComMConfigSet/FD1_CAN_f26020e5] */
};
#define CANNM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  CanNm_PbChannelConfig
**********************************************************************************************************************/
/** 
  \var    CanNm_PbChannelConfig
  \details
  Element                           Description
  MsgCycleOffset                
  RxMessageDataEndIdx               the end index of the 0:n relation pointing to CanNm_RxMessageData
  RxMessageDataLength               the number of relations pointing to CanNm_RxMessageData
  RxMessageDataStartIdx             the start index of the 0:n relation pointing to CanNm_RxMessageData
  RxMessageData_CBVIdx              the index of the 0:1 relation pointing to CanNm_RxMessageData
  RxMessageData_NIDIdx              the index of the 0:1 relation pointing to CanNm_RxMessageData
  RxMessageData_UserDataEndIdx      the end index of the 0:n relation pointing to CanNm_RxMessageData
  RxMessageData_UserDataLength      the number of relations pointing to CanNm_RxMessageData
  RxMessageData_UserDataStartIdx    the start index of the 0:n relation pointing to CanNm_RxMessageData
  TxMessageDataEndIdx               the end index of the 0:n relation pointing to CanNm_TxMessageData
  TxMessageDataLength               the number of relations pointing to CanNm_TxMessageData
  TxMessageDataStartIdx             the start index of the 0:n relation pointing to CanNm_TxMessageData
  TxMessageData_CBVIdx              the index of the 0:1 relation pointing to CanNm_TxMessageData
  TxMessageData_NIDIdx              the index of the 0:1 relation pointing to CanNm_TxMessageData
  TxMessageData_UserDataEndIdx      the end index of the 0:n relation pointing to CanNm_TxMessageData
  TxMessageData_UserDataLength      the number of relations pointing to CanNm_TxMessageData
  TxMessageData_UserDataStartIdx    the start index of the 0:n relation pointing to CanNm_TxMessageData
  TxPduId                       
*/ 
#define CANNM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(CanNm_PbChannelConfigType, CANNM_CONST) CanNm_PbChannelConfig[1] = {
    /* Index    MsgCycleOffset  RxMessageDataEndIdx  RxMessageDataLength  RxMessageDataStartIdx  RxMessageData_CBVIdx  RxMessageData_NIDIdx  RxMessageData_UserDataEndIdx  RxMessageData_UserDataLength  RxMessageData_UserDataStartIdx  TxMessageDataEndIdx  TxMessageDataLength  TxMessageDataStartIdx  TxMessageData_CBVIdx  TxMessageData_NIDIdx  TxMessageData_UserDataEndIdx  TxMessageData_UserDataLength  TxMessageData_UserDataStartIdx  TxPduId                                                                        Referable Keys */
  { /*     0 */             0U,                  8U,                  8U,                    0U,                   1U,                   0U,                           8U,                           6U,                             2U,                  8U,                  8U,                    0U,                   1U,                   0U,                           8U,                           6U,                             2U, CanIfConf_CanIfTxPduCfg_PSCM_AutoSar_NetwrkMgt_FD1_oFD1_CAN_Tx_3abd61be }   /* [/ActiveEcuC/CanNm/CanNmGlobalConfig/CanNmChannelConfig] */
};
#define CANNM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  CanNm_SysToNmChInd
**********************************************************************************************************************/
/** 
  \var    CanNm_SysToNmChInd
  \brief  Channel indirection: System Channel handle to NM channel handle
*/ 
#define CANNM_START_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(CanNm_SysToNmChIndType, CANNM_CONST) CanNm_SysToNmChInd[1] = {
  /* Index    SysToNmChInd  */
  /*     0 */           0U
};
#define CANNM_STOP_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  CanNm_CommState
**********************************************************************************************************************/
/** 
  \var    CanNm_CommState
  \brief  Internal state for the application's need for communication.
*/ 
#define CANNM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(CanNm_CommStateUType, CANNM_VAR_NOINIT) CanNm_CommState;  /* PRQA S 0759 */  /* MD_CSL_18.4 */
  /* Index        Referable Keys  */
  /*     0 */  /* [/ActiveEcuC/ComM/ComMConfigSet/FD1_CAN_f26020e5] */

#define CANNM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  CanNm_CoordReadyToSleepState
**********************************************************************************************************************/
/** 
  \var    CanNm_CoordReadyToSleepState
  \brief  State for Rx of Coordinator Sleep Ready Bit:
*/ 
#define CANNM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(CanNm_CoordReadyToSleepStateUType, CANNM_VAR_NOINIT) CanNm_CoordReadyToSleepState;  /* PRQA S 0759 */  /* MD_CSL_18.4 */
  /* Index        Referable Keys  */
  /*     0 */  /* [/ActiveEcuC/ComM/ComMConfigSet/FD1_CAN_f26020e5] */

#define CANNM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  CanNm_ModuleInitialized
**********************************************************************************************************************/
#define CANNM_START_SEC_VAR_ZERO_INIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(CanNm_ModuleInitializedType, CANNM_VAR_ZERO_INIT) CanNm_ModuleInitialized = FALSE;
#define CANNM_STOP_SEC_VAR_ZERO_INIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  CanNm_MsgConfirmationFlag
**********************************************************************************************************************/
/** 
  \var    CanNm_MsgConfirmationFlag
  \brief  Message Confirmation Flag
*/ 
#define CANNM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(CanNm_MsgConfirmationFlagUType, CANNM_VAR_NOINIT) CanNm_MsgConfirmationFlag;  /* PRQA S 0759 */  /* MD_CSL_18.4 */
  /* Index        Referable Keys  */
  /*     0 */  /* [/ActiveEcuC/ComM/ComMConfigSet/FD1_CAN_f26020e5] */

#define CANNM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  CanNm_MsgIndicationFlag
**********************************************************************************************************************/
/** 
  \var    CanNm_MsgIndicationFlag
  \brief  Message Indication Flag
*/ 
#define CANNM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(CanNm_MsgIndicationFlagUType, CANNM_VAR_NOINIT) CanNm_MsgIndicationFlag;  /* PRQA S 0759 */  /* MD_CSL_18.4 */
  /* Index        Referable Keys  */
  /*     0 */  /* [/ActiveEcuC/ComM/ComMConfigSet/FD1_CAN_f26020e5] */

#define CANNM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  CanNm_MsgTimeoutTimer
**********************************************************************************************************************/
#define CANNM_START_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(CanNm_MsgTimeoutTimerUType, CANNM_VAR_NOINIT) CanNm_MsgTimeoutTimer;  /* PRQA S 0759 */  /* MD_CSL_18.4 */
  /* Index        Referable Keys  */
  /*     0 */  /* [/ActiveEcuC/ComM/ComMConfigSet/FD1_CAN_f26020e5] */

#define CANNM_STOP_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  CanNm_MsgTimer
**********************************************************************************************************************/
/** 
  \var    CanNm_MsgTimer
  \brief  Timer for NM message transmission.
*/ 
#define CANNM_START_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(CanNm_MsgTimerUType, CANNM_VAR_NOINIT) CanNm_MsgTimer;  /* PRQA S 0759 */  /* MD_CSL_18.4 */
  /* Index        Referable Keys  */
  /*     0 */  /* [/ActiveEcuC/ComM/ComMConfigSet/FD1_CAN_f26020e5] */

#define CANNM_STOP_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  CanNm_NetworkRestartFlag
**********************************************************************************************************************/
#define CANNM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(CanNm_NetworkRestartFlagUType, CANNM_VAR_NOINIT) CanNm_NetworkRestartFlag;  /* PRQA S 0759 */  /* MD_CSL_18.4 */
  /* Index        Referable Keys  */
  /*     0 */  /* [/ActiveEcuC/ComM/ComMConfigSet/FD1_CAN_f26020e5] */

#define CANNM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  CanNm_RemoteSleepIndState
**********************************************************************************************************************/
/** 
  \var    CanNm_RemoteSleepIndState
  \brief  State of remote sleep indication.
*/ 
#define CANNM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(CanNm_RemoteSleepIndStateUType, CANNM_VAR_NOINIT) CanNm_RemoteSleepIndState;  /* PRQA S 0759 */  /* MD_CSL_18.4 */
  /* Index        Referable Keys  */
  /*     0 */  /* [/ActiveEcuC/ComM/ComMConfigSet/FD1_CAN_f26020e5] */

#define CANNM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  CanNm_RemoteSleepTimer
**********************************************************************************************************************/
#define CANNM_START_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(CanNm_RemoteSleepTimerUType, CANNM_VAR_NOINIT) CanNm_RemoteSleepTimer;  /* PRQA S 0759 */  /* MD_CSL_18.4 */
  /* Index        Referable Keys  */
  /*     0 */  /* [/ActiveEcuC/ComM/ComMConfigSet/FD1_CAN_f26020e5] */

#define CANNM_STOP_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  CanNm_RepeatMsgTimer
**********************************************************************************************************************/
#define CANNM_START_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(CanNm_RepeatMsgTimerUType, CANNM_VAR_NOINIT) CanNm_RepeatMsgTimer;  /* PRQA S 0759 */  /* MD_CSL_18.4 */
  /* Index        Referable Keys  */
  /*     0 */  /* [/ActiveEcuC/ComM/ComMConfigSet/FD1_CAN_f26020e5] */

#define CANNM_STOP_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  CanNm_RxMessageData
**********************************************************************************************************************/
#define CANNM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(CanNm_RxMessageDataType, CANNM_VAR_NOINIT) CanNm_RxMessageData[8];
  /* Index        Referable Keys  */
  /*     0 */  /* [/ActiveEcuC/CanNm/CanNmGlobalConfig/CanNmChannelConfig, /ActiveEcuC/CanNm/CanNmGlobalConfig/CanNmChannelConfig_NID] */
  /*     1 */  /* [/ActiveEcuC/CanNm/CanNmGlobalConfig/CanNmChannelConfig, /ActiveEcuC/CanNm/CanNmGlobalConfig/CanNmChannelConfig_CBV] */
  /*     2 */  /* [/ActiveEcuC/CanNm/CanNmGlobalConfig/CanNmChannelConfig, /ActiveEcuC/CanNm/CanNmGlobalConfig/CanNmChannelConfig_UserData] */
  /*     3 */  /* [/ActiveEcuC/CanNm/CanNmGlobalConfig/CanNmChannelConfig, /ActiveEcuC/CanNm/CanNmGlobalConfig/CanNmChannelConfig_UserData] */
  /*     4 */  /* [/ActiveEcuC/CanNm/CanNmGlobalConfig/CanNmChannelConfig, /ActiveEcuC/CanNm/CanNmGlobalConfig/CanNmChannelConfig_UserData] */
  /*     5 */  /* [/ActiveEcuC/CanNm/CanNmGlobalConfig/CanNmChannelConfig, /ActiveEcuC/CanNm/CanNmGlobalConfig/CanNmChannelConfig_UserData] */
  /*     6 */  /* [/ActiveEcuC/CanNm/CanNmGlobalConfig/CanNmChannelConfig, /ActiveEcuC/CanNm/CanNmGlobalConfig/CanNmChannelConfig_UserData] */
  /*     7 */  /* [/ActiveEcuC/CanNm/CanNmGlobalConfig/CanNmChannelConfig, /ActiveEcuC/CanNm/CanNmGlobalConfig/CanNmChannelConfig_UserData] */

#define CANNM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  CanNm_TimeoutTimer
**********************************************************************************************************************/
/** 
  \var    CanNm_TimeoutTimer
  \brief  Timer for NM Algorithm.
*/ 
#define CANNM_START_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(CanNm_TimeoutTimerUType, CANNM_VAR_NOINIT) CanNm_TimeoutTimer;  /* PRQA S 0759 */  /* MD_CSL_18.4 */
  /* Index        Referable Keys  */
  /*     0 */  /* [/ActiveEcuC/ComM/ComMConfigSet/FD1_CAN_f26020e5] */

#define CANNM_STOP_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  CanNm_TxControlState
**********************************************************************************************************************/
/** 
  \var    CanNm_TxControlState
  \brief  Message transmission control state.
*/ 
#define CANNM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(CanNm_TxControlStateUType, CANNM_VAR_NOINIT) CanNm_TxControlState;  /* PRQA S 0759 */  /* MD_CSL_18.4 */
  /* Index        Referable Keys  */
  /*     0 */  /* [/ActiveEcuC/ComM/ComMConfigSet/FD1_CAN_f26020e5] */

#define CANNM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  CanNm_TxControlStateRequest
**********************************************************************************************************************/
/** 
  \var    CanNm_TxControlStateRequest
  \brief  Message transmission control state request.
*/ 
#define CANNM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(CanNm_TxControlStateRequestUType, CANNM_VAR_NOINIT) CanNm_TxControlStateRequest;  /* PRQA S 0759 */  /* MD_CSL_18.4 */
  /* Index        Referable Keys  */
  /*     0 */  /* [/ActiveEcuC/ComM/ComMConfigSet/FD1_CAN_f26020e5] */

#define CANNM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  CanNm_TxMessageData
**********************************************************************************************************************/
#define CANNM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(CanNm_TxMessageDataType, CANNM_VAR_NOINIT) CanNm_TxMessageData[8];
  /* Index        Referable Keys  */
  /*     0 */  /* [/ActiveEcuC/CanNm/CanNmGlobalConfig/CanNmChannelConfig, /ActiveEcuC/CanNm/CanNmGlobalConfig/CanNmChannelConfig_NID] */
  /*     1 */  /* [/ActiveEcuC/CanNm/CanNmGlobalConfig/CanNmChannelConfig, /ActiveEcuC/CanNm/CanNmGlobalConfig/CanNmChannelConfig_CBV] */
  /*     2 */  /* [/ActiveEcuC/CanNm/CanNmGlobalConfig/CanNmChannelConfig, /ActiveEcuC/CanNm/CanNmGlobalConfig/CanNmChannelConfig_UserData] */
  /*     3 */  /* [/ActiveEcuC/CanNm/CanNmGlobalConfig/CanNmChannelConfig, /ActiveEcuC/CanNm/CanNmGlobalConfig/CanNmChannelConfig_UserData] */
  /*     4 */  /* [/ActiveEcuC/CanNm/CanNmGlobalConfig/CanNmChannelConfig, /ActiveEcuC/CanNm/CanNmGlobalConfig/CanNmChannelConfig_UserData] */
  /*     5 */  /* [/ActiveEcuC/CanNm/CanNmGlobalConfig/CanNmChannelConfig, /ActiveEcuC/CanNm/CanNmGlobalConfig/CanNmChannelConfig_UserData] */
  /*     6 */  /* [/ActiveEcuC/CanNm/CanNmGlobalConfig/CanNmChannelConfig, /ActiveEcuC/CanNm/CanNmGlobalConfig/CanNmChannelConfig_UserData] */
  /*     7 */  /* [/ActiveEcuC/CanNm/CanNmGlobalConfig/CanNmChannelConfig, /ActiveEcuC/CanNm/CanNmGlobalConfig/CanNmChannelConfig_UserData] */

#define CANNM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  CanNm_WaitBusSleepTimer
**********************************************************************************************************************/
#define CANNM_START_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(CanNm_WaitBusSleepTimerUType, CANNM_VAR_NOINIT) CanNm_WaitBusSleepTimer;  /* PRQA S 0759 */  /* MD_CSL_18.4 */
  /* Index        Referable Keys  */
  /*     0 */  /* [/ActiveEcuC/ComM/ComMConfigSet/FD1_CAN_f26020e5] */

#define CANNM_STOP_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */



/**********************************************************************************************************************
  END OF FILE: CanNm_Cfg.c
**********************************************************************************************************************/

