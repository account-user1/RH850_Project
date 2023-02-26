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
 *            Module: CanIf
 *           Program: MSR_Ford_SLP1 (MSR_Ford_SLP1)
 *          Customer: Nexteer Automotive Corporation
 *       Expiry Date: Not restricted
 *  Ordered Derivat.: R7F701373EABG
 *    License Scope : The usage is restricted to CBD1601056_D00
 *
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *              File: CanIf_Lcfg.c
 *   Generation Time: 2018-01-24 11:34:49
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

#define CANIF_LCFG_SOURCE

/* PRQA S 0850 EOF */ /* MD_MSR_19.8 */
/* PRQA S 0857 EOF */ /* MD_CanIf_1.1_NumberOfMacroDefinitions */
/* PRQA S 0779 EOF */ /* MD_CanIf_5.1 */
/* PRQA S 0777 EOF */ /* MD_CanIf_5.1 */
/* PRQA S 1330, 1334 EOF */ /* MD_CanIf_16.4, MD_CanIf_16.4 */

/**********************************************************************************************************************
  \file  Includes
**********************************************************************************************************************/
/** 
  \brief  Required external files.
*/ 

#include "CanIf_Cfg.h"

 /*  CanNm Header Files  */ 
#include "CanNm_Cfg.h"
#include "CanNm_Cbk.h"
 /*  CanTp Header Files  */ 
#include "CanTp_Cfg.h"
#include "CanTp_Cbk.h"
 /*  PduR Header Files  */ 
#include "PduR_Cfg.h"
#include "PduR_CanIf.h"
 /*  Xcp Header Files  */ 
#include "CanXcp.h"
 /*  CanSM Header Files  */ 
#include "CanSM_Cbk.h"

#define CANIF_START_SEC_APPL_CODE
/* PRQA S 5087 1 */ /* MD_MSR_19.1 */
#include "MemMap.h"

/**********************************************************************************************************************
  \var  Prototypes of callback functions
**********************************************************************************************************************/

/** 
  \brief  Tx confirmation functions.
*/



/** 
  \brief  Rx indication functions.
*/





#define CANIF_STOP_SEC_APPL_CODE
/* PRQA S 5087 1 */ /* MD_MSR_19.1 */
#include "MemMap.h"

/**********************************************************************************************************************
  ComStackLib
**********************************************************************************************************************/
/**********************************************************************************************************************
  LOCAL DATA PROTOTYPES
**********************************************************************************************************************/
/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: LOCAL DATA TYPES AND STRUCTURES
**********************************************************************************************************************/

/**********************************************************************************************************************
  CONFIGURATION CLASS: LINK
  SECTION: LOCAL DATA TYPES AND STRUCTURES
**********************************************************************************************************************/


/**********************************************************************************************************************
  LOCAL DATA
**********************************************************************************************************************/
/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: LOCAL DATA
**********************************************************************************************************************/

/**********************************************************************************************************************
  CONFIGURATION CLASS: LINK
  SECTION: LOCAL DATA
**********************************************************************************************************************/


/**********************************************************************************************************************
  GLOBAL DATA
**********************************************************************************************************************/
/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: GLOBAL DATA
**********************************************************************************************************************/
/**********************************************************************************************************************
  CanIf_BusOffNotificationFctPtr
**********************************************************************************************************************/
#define CANIF_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(CanIf_BusOffNotificationFctType, CANIF_CONST) CanIf_BusOffNotificationFctPtr = CanSM_ControllerBusOff;
#define CANIF_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  CanIf_CanIfCtrlId2MappedTxBuffersConfig
**********************************************************************************************************************/
/** 
  \var    CanIf_CanIfCtrlId2MappedTxBuffersConfig
  \brief  CAN controller configuration - mapped Tx-buffer(s).
  \details
  Element                          Description
  MappedTxBuffersConfigEndIdx      the end index of the 1:n relation pointing to CanIf_MappedTxBuffersConfig
  MappedTxBuffersConfigStartIdx    the start index of the 1:n relation pointing to CanIf_MappedTxBuffersConfig
*/ 
#define CANIF_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(CanIf_CanIfCtrlId2MappedTxBuffersConfigType, CANIF_CONST) CanIf_CanIfCtrlId2MappedTxBuffersConfig[1] = {
    /* Index    MappedTxBuffersConfigEndIdx                                                   MappedTxBuffersConfigStartIdx                                                         Referable Keys */
  { /*     0 */                         1UL  /* /ActiveEcuC/CanIf/Can/CT_FD1_CAN_b4e1ca3b */,                           0UL  /* /ActiveEcuC/CanIf/Can/CT_FD1_CAN_b4e1ca3b */ }   /* [/ActiveEcuC/CanIf/Can/CT_FD1_CAN_b4e1ca3b] */
};
#define CANIF_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  CanIf_CtrlModeIndicationFctPtr
**********************************************************************************************************************/
#define CANIF_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(CanIf_CtrlModeIndicationFctType, CANIF_CONST) CanIf_CtrlModeIndicationFctPtr = CanSM_ControllerModeIndication;
#define CANIF_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  CanIf_MailBoxConfig
**********************************************************************************************************************/
/** 
  \var    CanIf_MailBoxConfig
  \brief  Mailbox table.
  \details
  Element                 Description
  CtrlStatesIdx           the index of the 1:1 relation pointing to CanIf_CtrlStates
  PduIdFirst              "First" PDU mapped to mailbox.
  PduIdLast               "Last" PDU mapped to mailbox.
  TxBufferCfgIdx          the index of the 0:1 relation pointing to CanIf_TxBufferPrioByCanIdByteQueueConfig
  TxBufferHandlingType
  MailBoxType             Type of mailbox: Rx-/Tx- BasicCAN/FullCAN/unused.
*/ 
#define CANIF_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(CanIf_MailBoxConfigType, CANIF_CONST) CanIf_MailBoxConfig[43] = {
    /* Index    CtrlStatesIdx                                                   PduIdFirst                           PduIdLast                           TxBufferCfgIdx                                                                                               TxBufferHandlingType                     MailBoxType                    Referable Keys */
  { /*     0 */           0UL  /* /ActiveEcuC/CanIf/Can/CT_FD1_CAN_b4e1ca3b */,         0U  /* Unused, TxPduId 0 */,        0U  /* Unused, TxPduId 7 */,                                    0UL  /* /ActiveEcuC/CanIf/CanIfInitCfg/CanIfBufferCfg_Tx_Std_3290b631 */, CANIF_TXBUFFER_HANDLINGTYPE_PRIOBYCANID, CANIF_TxBasicCANMailbox },  /* [/ActiveEcuC/Can/CanConfigSet/CN_FD1_CAN_b4e1ca3b_Tx_Std] */
  { /*     1 */           0UL  /* /ActiveEcuC/CanIf/Can/CT_FD1_CAN_b4e1ca3b */,         5U  /* RxPduId */          ,        5U  /* RxPduId  */         , CANIF_NO_TXBUFFERCFGIDXOFMAILBOXCONFIG  /* unusedIndex1 */                                                 , CANIF_TXBUFFER_HANDLINGTYPE_NONE       , CANIF_RxFullCANMailbox  },  /* [/ActiveEcuC/Can/CanConfigSet/CanHardwareObject_CanIfRxPduCfg_Nm_Dummy] */
  { /*     2 */           0UL  /* /ActiveEcuC/CanIf/Can/CT_FD1_CAN_b4e1ca3b */,         6U  /* RxPduId */          ,        6U  /* RxPduId  */         , CANIF_NO_TXBUFFERCFGIDXOFMAILBOXCONFIG  /* unusedIndex2 */                                                 , CANIF_TXBUFFER_HANDLINGTYPE_NONE       , CANIF_RxFullCANMailbox  },  /* [/ActiveEcuC/Can/CanConfigSet/CanHardwareObject_ABS_BrkBst_Data_FD1_oFD1_CAN_Rx_3abd61be] */
  { /*     3 */           0UL  /* /ActiveEcuC/CanIf/Can/CT_FD1_CAN_b4e1ca3b */,         7U  /* RxPduId */          ,        7U  /* RxPduId  */         , CANIF_NO_TXBUFFERCFGIDXOFMAILBOXCONFIG  /* unusedIndex3 */                                                 , CANIF_TXBUFFER_HANDLINGTYPE_NONE       , CANIF_RxFullCANMailbox  },  /* [/ActiveEcuC/Can/CanConfigSet/CanHardwareObject_TrailerInfo_2_FD1_oFD1_CAN_Rx_3abd61be] */
  { /*     4 */           0UL  /* /ActiveEcuC/CanIf/Can/CT_FD1_CAN_b4e1ca3b */,         8U  /* RxPduId */          ,        8U  /* RxPduId  */         , CANIF_NO_TXBUFFERCFGIDXOFMAILBOXCONFIG  /* unusedIndex4 */                                                 , CANIF_TXBUFFER_HANDLINGTYPE_NONE       , CANIF_RxFullCANMailbox  },  /* [/ActiveEcuC/Can/CanConfigSet/CanHardwareObject_TrailerAid_Data3_FD1_oFD1_CAN_Rx_3abd61be] */
  { /*     5 */           0UL  /* /ActiveEcuC/CanIf/Can/CT_FD1_CAN_b4e1ca3b */,         9U  /* RxPduId */          ,        9U  /* RxPduId  */         , CANIF_NO_TXBUFFERCFGIDXOFMAILBOXCONFIG  /* unusedIndex5 */                                                 , CANIF_TXBUFFER_HANDLINGTYPE_NONE       , CANIF_RxFullCANMailbox  },  /* [/ActiveEcuC/Can/CanConfigSet/CanHardwareObject_TrailerAid_Data_FD1_oFD1_CAN_Rx_3abd61be] */
  { /*     6 */           0UL  /* /ActiveEcuC/CanIf/Can/CT_FD1_CAN_b4e1ca3b */,        10U  /* RxPduId */          ,       10U  /* RxPduId  */         , CANIF_NO_TXBUFFERCFGIDXOFMAILBOXCONFIG  /* unusedIndex6 */                                                 , CANIF_TXBUFFER_HANDLINGTYPE_NONE       , CANIF_RxFullCANMailbox  },  /* [/ActiveEcuC/Can/CanConfigSet/CanHardwareObject_TrailerAid_Stat3_FD1_oFD1_CAN_Rx_3abd61be] */
  { /*     7 */           0UL  /* /ActiveEcuC/CanIf/Can/CT_FD1_CAN_b4e1ca3b */,        11U  /* RxPduId */          ,       11U  /* RxPduId  */         , CANIF_NO_TXBUFFERCFGIDXOFMAILBOXCONFIG  /* unusedIndex7 */                                                 , CANIF_TXBUFFER_HANDLINGTYPE_NONE       , CANIF_RxFullCANMailbox  },  /* [/ActiveEcuC/Can/CanConfigSet/CanHardwareObject_TrailerAid_Stat2_FD1_oFD1_CAN_Rx_3abd61be] */
  { /*     8 */           0UL  /* /ActiveEcuC/CanIf/Can/CT_FD1_CAN_b4e1ca3b */,        12U  /* RxPduId */          ,       12U  /* RxPduId  */         , CANIF_NO_TXBUFFERCFGIDXOFMAILBOXCONFIG  /* unusedIndex8 */                                                 , CANIF_TXBUFFER_HANDLINGTYPE_NONE       , CANIF_RxFullCANMailbox  },  /* [/ActiveEcuC/Can/CanConfigSet/CanHardwareObject_TrailerAid_Stat1_FD1_oFD1_CAN_Rx_3abd61be] */
  { /*     9 */           0UL  /* /ActiveEcuC/CanIf/Can/CT_FD1_CAN_b4e1ca3b */,        13U  /* RxPduId */          ,       13U  /* RxPduId  */         , CANIF_NO_TXBUFFERCFGIDXOFMAILBOXCONFIG  /* unusedIndex9 */                                                 , CANIF_TXBUFFER_HANDLINGTYPE_NONE       , CANIF_RxFullCANMailbox  },  /* [/ActiveEcuC/Can/CanConfigSet/CanHardwareObject_Image_Processing_Data_FD1_oFD1_CAN_Rx_3abd61be] */
  { /*    10 */           0UL  /* /ActiveEcuC/CanIf/Can/CT_FD1_CAN_b4e1ca3b */,        14U  /* RxPduId */          ,       14U  /* RxPduId  */         , CANIF_NO_TXBUFFERCFGIDXOFMAILBOXCONFIG  /* unusedIndex10 */                                                , CANIF_TXBUFFER_HANDLINGTYPE_NONE       , CANIF_RxFullCANMailbox  },  /* [/ActiveEcuC/Can/CanConfigSet/CanHardwareObject_TrailerBrakeInfo_FD1_oFD1_CAN_Rx_3abd61be] */
  { /*    11 */           0UL  /* /ActiveEcuC/CanIf/Can/CT_FD1_CAN_b4e1ca3b */,        15U  /* RxPduId */          ,       15U  /* RxPduId  */         , CANIF_NO_TXBUFFERCFGIDXOFMAILBOXCONFIG  /* unusedIndex11 */                                                , CANIF_TXBUFFER_HANDLINGTYPE_NONE       , CANIF_RxFullCANMailbox  },  /* [/ActiveEcuC/Can/CanConfigSet/CanHardwareObject_TrailerInfo_FD1_oFD1_CAN_Rx_3abd61be] */
  { /*    12 */           0UL  /* /ActiveEcuC/CanIf/Can/CT_FD1_CAN_b4e1ca3b */,        16U  /* RxPduId */          ,       16U  /* RxPduId  */         , CANIF_NO_TXBUFFERCFGIDXOFMAILBOXCONFIG  /* unusedIndex12 */                                                , CANIF_TXBUFFER_HANDLINGTYPE_NONE       , CANIF_RxFullCANMailbox  },  /* [/ActiveEcuC/Can/CanConfigSet/CanHardwareObject_Cluster_Info1_FD1_oFD1_CAN_Rx_3abd61be] */
  { /*    13 */           0UL  /* /ActiveEcuC/CanIf/Can/CT_FD1_CAN_b4e1ca3b */,        17U  /* RxPduId */          ,       17U  /* RxPduId  */         , CANIF_NO_TXBUFFERCFGIDXOFMAILBOXCONFIG  /* unusedIndex13 */                                                , CANIF_TXBUFFER_HANDLINGTYPE_NONE       , CANIF_RxFullCANMailbox  },  /* [/ActiveEcuC/Can/CanConfigSet/CanHardwareObject_BrakeSysFeatures_3_oFD1_CAN_Rx_3abd61be] */
  { /*    14 */           0UL  /* /ActiveEcuC/CanIf/Can/CT_FD1_CAN_b4e1ca3b */,        18U  /* RxPduId */          ,       18U  /* RxPduId  */         , CANIF_NO_TXBUFFERCFGIDXOFMAILBOXCONFIG  /* unusedIndex14 */                                                , CANIF_TXBUFFER_HANDLINGTYPE_NONE       , CANIF_RxFullCANMailbox  },  /* [/ActiveEcuC/Can/CanConfigSet/CanHardwareObject_Climate_Control_Data_FD1_oFD1_CAN_Rx_3abd61be] */
  { /*    15 */           0UL  /* /ActiveEcuC/CanIf/Can/CT_FD1_CAN_b4e1ca3b */,        19U  /* RxPduId */          ,       19U  /* RxPduId  */         , CANIF_NO_TXBUFFERCFGIDXOFMAILBOXCONFIG  /* unusedIndex15 */                                                , CANIF_TXBUFFER_HANDLINGTYPE_NONE       , CANIF_RxFullCANMailbox  },  /* [/ActiveEcuC/Can/CanConfigSet/CanHardwareObject_BrakeSysFeatures_FD1_oFD1_CAN_Rx_3abd61be] */
  { /*    16 */           0UL  /* /ActiveEcuC/CanIf/Can/CT_FD1_CAN_b4e1ca3b */,        20U  /* RxPduId */          ,       20U  /* RxPduId  */         , CANIF_NO_TXBUFFERCFGIDXOFMAILBOXCONFIG  /* unusedIndex16 */                                                , CANIF_TXBUFFER_HANDLINGTYPE_NONE       , CANIF_RxFullCANMailbox  },  /* [/ActiveEcuC/Can/CanConfigSet/CanHardwareObject_BrakeSnData_6_FD1_oFD1_CAN_Rx_3abd61be] */
  { /*    17 */           0UL  /* /ActiveEcuC/CanIf/Can/CT_FD1_CAN_b4e1ca3b */,        21U  /* RxPduId */          ,       21U  /* RxPduId  */         , CANIF_NO_TXBUFFERCFGIDXOFMAILBOXCONFIG  /* unusedIndex17 */                                                , CANIF_TXBUFFER_HANDLINGTYPE_NONE       , CANIF_RxFullCANMailbox  },  /* [/ActiveEcuC/Can/CanConfigSet/CanHardwareObject_GGCC_Config_Mgmt_ID_1_FD1_oFD1_CAN_Rx_3abd61be] */
  { /*    18 */           0UL  /* /ActiveEcuC/CanIf/Can/CT_FD1_CAN_b4e1ca3b */,        22U  /* RxPduId */          ,       22U  /* RxPduId  */         , CANIF_NO_TXBUFFERCFGIDXOFMAILBOXCONFIG  /* unusedIndex18 */                                                , CANIF_TXBUFFER_HANDLINGTYPE_NONE       , CANIF_RxFullCANMailbox  },  /* [/ActiveEcuC/Can/CanConfigSet/CanHardwareObject_APIM_Send_Signals1_FD1_oFD1_CAN_Rx_3abd61be] */
  { /*    19 */           0UL  /* /ActiveEcuC/CanIf/Can/CT_FD1_CAN_b4e1ca3b */,        23U  /* RxPduId */          ,       23U  /* RxPduId  */         , CANIF_NO_TXBUFFERCFGIDXOFMAILBOXCONFIG  /* unusedIndex19 */                                                , CANIF_TXBUFFER_HANDLINGTYPE_NONE       , CANIF_RxFullCANMailbox  },  /* [/ActiveEcuC/Can/CanConfigSet/CanHardwareObject_Steer_Assist_Data_FD1_oFD1_CAN_Rx_3abd61be] */
  { /*    20 */           0UL  /* /ActiveEcuC/CanIf/Can/CT_FD1_CAN_b4e1ca3b */,        24U  /* RxPduId */          ,       24U  /* RxPduId  */         , CANIF_NO_TXBUFFERCFGIDXOFMAILBOXCONFIG  /* unusedIndex20 */                                                , CANIF_TXBUFFER_HANDLINGTYPE_NONE       , CANIF_RxFullCANMailbox  },  /* [/ActiveEcuC/Can/CanConfigSet/CanHardwareObject_LateralMotionControl_FD1_oFD1_CAN_Rx_3abd61be] */
  { /*    21 */           0UL  /* /ActiveEcuC/CanIf/Can/CT_FD1_CAN_b4e1ca3b */,        25U  /* RxPduId */          ,       25U  /* RxPduId  */         , CANIF_NO_TXBUFFERCFGIDXOFMAILBOXCONFIG  /* unusedIndex21 */                                                , CANIF_TXBUFFER_HANDLINGTYPE_NONE       , CANIF_RxFullCANMailbox  },  /* [/ActiveEcuC/Can/CanConfigSet/CanHardwareObject_Lane_Assist_Data1_FD1_oFD1_CAN_Rx_3abd61be] */
  { /*    22 */           0UL  /* /ActiveEcuC/CanIf/Can/CT_FD1_CAN_b4e1ca3b */,        26U  /* RxPduId */          ,       26U  /* RxPduId  */         , CANIF_NO_TXBUFFERCFGIDXOFMAILBOXCONFIG  /* unusedIndex22 */                                                , CANIF_TXBUFFER_HANDLINGTYPE_NONE       , CANIF_RxFullCANMailbox  },  /* [/ActiveEcuC/Can/CanConfigSet/CanHardwareObject_BodyInfo_3_FD1_oFD1_CAN_Rx_3abd61be] */
  { /*    23 */           0UL  /* /ActiveEcuC/CanIf/Can/CT_FD1_CAN_b4e1ca3b */,        27U  /* RxPduId */          ,       27U  /* RxPduId  */         , CANIF_NO_TXBUFFERCFGIDXOFMAILBOXCONFIG  /* unusedIndex23 */                                                , CANIF_TXBUFFER_HANDLINGTYPE_NONE       , CANIF_RxFullCANMailbox  },  /* [/ActiveEcuC/Can/CanConfigSet/CanHardwareObject_ParkAid_Data_FD1_oFD1_CAN_Rx_3abd61be] */
  { /*    24 */           0UL  /* /ActiveEcuC/CanIf/Can/CT_FD1_CAN_b4e1ca3b */,        28U  /* RxPduId */          ,       28U  /* RxPduId  */         , CANIF_NO_TXBUFFERCFGIDXOFMAILBOXCONFIG  /* unusedIndex24 */                                                , CANIF_TXBUFFER_HANDLINGTYPE_NONE       , CANIF_RxFullCANMailbox  },  /* [/ActiveEcuC/Can/CanConfigSet/CanHardwareObject_Mc_Send_Signals_2_FD1_oFD1_CAN_Rx_3abd61be] */
  { /*    25 */           0UL  /* /ActiveEcuC/CanIf/Can/CT_FD1_CAN_b4e1ca3b */,        29U  /* RxPduId */          ,       29U  /* RxPduId  */         , CANIF_NO_TXBUFFERCFGIDXOFMAILBOXCONFIG  /* unusedIndex25 */                                                , CANIF_TXBUFFER_HANDLINGTYPE_NONE       , CANIF_RxFullCANMailbox  },  /* [/ActiveEcuC/Can/CanConfigSet/CanHardwareObject_Body_Info_4_FD1_oFD1_CAN_Rx_3abd61be] */
  { /*    26 */           0UL  /* /ActiveEcuC/CanIf/Can/CT_FD1_CAN_b4e1ca3b */,        30U  /* RxPduId */          ,       30U  /* RxPduId  */         , CANIF_NO_TXBUFFERCFGIDXOFMAILBOXCONFIG  /* unusedIndex26 */                                                , CANIF_TXBUFFER_HANDLINGTYPE_NONE       , CANIF_RxFullCANMailbox  },  /* [/ActiveEcuC/Can/CanConfigSet/CanHardwareObject_TransGearData_FD1_oFD1_CAN_Rx_3abd61be] */
  { /*    27 */           0UL  /* /ActiveEcuC/CanIf/Can/CT_FD1_CAN_b4e1ca3b */,        31U  /* RxPduId */          ,       31U  /* RxPduId  */         , CANIF_NO_TXBUFFERCFGIDXOFMAILBOXCONFIG  /* unusedIndex27 */                                                , CANIF_TXBUFFER_HANDLINGTYPE_NONE       , CANIF_RxFullCANMailbox  },  /* [/ActiveEcuC/Can/CanConfigSet/CanHardwareObject_WheelSpeed_FD1_oFD1_CAN_Rx_3abd61be] */
  { /*    28 */           0UL  /* /ActiveEcuC/CanIf/Can/CT_FD1_CAN_b4e1ca3b */,        32U  /* RxPduId */          ,       32U  /* RxPduId  */         , CANIF_NO_TXBUFFERCFGIDXOFMAILBOXCONFIG  /* unusedIndex28 */                                                , CANIF_TXBUFFER_HANDLINGTYPE_NONE       , CANIF_RxFullCANMailbox  },  /* [/ActiveEcuC/Can/CanConfigSet/CanHardwareObject_WheelData_FD1_oFD1_CAN_Rx_3abd61be] */
  { /*    29 */           0UL  /* /ActiveEcuC/CanIf/Can/CT_FD1_CAN_b4e1ca3b */,        33U  /* RxPduId */          ,       33U  /* RxPduId  */         , CANIF_NO_TXBUFFERCFGIDXOFMAILBOXCONFIG  /* unusedIndex29 */                                                , CANIF_TXBUFFER_HANDLINGTYPE_NONE       , CANIF_RxFullCANMailbox  },  /* [/ActiveEcuC/Can/CanConfigSet/CanHardwareObject_APIM_Send_Signals_2_FD1_oFD1_CAN_Rx_3abd61be] */
  { /*    30 */           0UL  /* /ActiveEcuC/CanIf/Can/CT_FD1_CAN_b4e1ca3b */,        34U  /* RxPduId */          ,       34U  /* RxPduId  */         , CANIF_NO_TXBUFFERCFGIDXOFMAILBOXCONFIG  /* unusedIndex30 */                                                , CANIF_TXBUFFER_HANDLINGTYPE_NONE       , CANIF_RxFullCANMailbox  },  /* [/ActiveEcuC/Can/CanConfigSet/CanHardwareObject_DesiredTorqBrk_FD1_oFD1_CAN_Rx_3abd61be] */
  { /*    31 */           0UL  /* /ActiveEcuC/CanIf/Can/CT_FD1_CAN_b4e1ca3b */,        35U  /* RxPduId */          ,       35U  /* RxPduId  */         , CANIF_NO_TXBUFFERCFGIDXOFMAILBOXCONFIG  /* unusedIndex31 */                                                , CANIF_TXBUFFER_HANDLINGTYPE_NONE       , CANIF_RxFullCANMailbox  },  /* [/ActiveEcuC/Can/CanConfigSet/CanHardwareObject_EngVehicleSpThrottle_FD1_oFD1_CAN_Rx_3abd61be] */
  { /*    32 */           0UL  /* /ActiveEcuC/CanIf/Can/CT_FD1_CAN_b4e1ca3b */,        36U  /* RxPduId */          ,       36U  /* RxPduId  */         , CANIF_NO_TXBUFFERCFGIDXOFMAILBOXCONFIG  /* unusedIndex32 */                                                , CANIF_TXBUFFER_HANDLINGTYPE_NONE       , CANIF_RxFullCANMailbox  },  /* [/ActiveEcuC/Can/CanConfigSet/CanHardwareObject_EngVehicleSpThrottle2_FD1_oFD1_CAN_Rx_3abd61be] */
  { /*    33 */           0UL  /* /ActiveEcuC/CanIf/Can/CT_FD1_CAN_b4e1ca3b */,        37U  /* RxPduId */          ,       37U  /* RxPduId  */         , CANIF_NO_TXBUFFERCFGIDXOFMAILBOXCONFIG  /* unusedIndex33 */                                                , CANIF_TXBUFFER_HANDLINGTYPE_NONE       , CANIF_RxFullCANMailbox  },  /* [/ActiveEcuC/Can/CanConfigSet/CanHardwareObject_PowertrainData_10_FD1_oFD1_CAN_Rx_3abd61be] */
  { /*    34 */           0UL  /* /ActiveEcuC/CanIf/Can/CT_FD1_CAN_b4e1ca3b */,        38U  /* RxPduId */          ,       38U  /* RxPduId  */         , CANIF_NO_TXBUFFERCFGIDXOFMAILBOXCONFIG  /* unusedIndex34 */                                                , CANIF_TXBUFFER_HANDLINGTYPE_NONE       , CANIF_RxFullCANMailbox  },  /* [/ActiveEcuC/Can/CanConfigSet/CanHardwareObject_VehicleOperatingModes_FD1_oFD1_CAN_Rx_3abd61be] */
  { /*    35 */           0UL  /* /ActiveEcuC/CanIf/Can/CT_FD1_CAN_b4e1ca3b */,        39U  /* RxPduId */          ,       39U  /* RxPduId  */         , CANIF_NO_TXBUFFERCFGIDXOFMAILBOXCONFIG  /* unusedIndex35 */                                                , CANIF_TXBUFFER_HANDLINGTYPE_NONE       , CANIF_RxFullCANMailbox  },  /* [/ActiveEcuC/Can/CanConfigSet/CanHardwareObject_EngBrakeData_FD1_oFD1_CAN_Rx_3abd61be] */
  { /*    36 */           0UL  /* /ActiveEcuC/CanIf/Can/CT_FD1_CAN_b4e1ca3b */,        40U  /* RxPduId */          ,       40U  /* RxPduId  */         , CANIF_NO_TXBUFFERCFGIDXOFMAILBOXCONFIG  /* unusedIndex36 */                                                , CANIF_TXBUFFER_HANDLINGTYPE_NONE       , CANIF_RxFullCANMailbox  },  /* [/ActiveEcuC/Can/CanConfigSet/CanHardwareObject_Yaw_Data_FD1_oFD1_CAN_Rx_3abd61be] */
  { /*    37 */           0UL  /* /ActiveEcuC/CanIf/Can/CT_FD1_CAN_b4e1ca3b */,        41U  /* RxPduId */          ,       41U  /* RxPduId  */         , CANIF_NO_TXBUFFERCFGIDXOFMAILBOXCONFIG  /* unusedIndex37 */                                                , CANIF_TXBUFFER_HANDLINGTYPE_NONE       , CANIF_RxFullCANMailbox  },  /* [/ActiveEcuC/Can/CanConfigSet/CanHardwareObject_ActiveFrontStrg_Stat2_FD1_oFD1_CAN_Rx_3abd61be] */
  { /*    38 */           0UL  /* /ActiveEcuC/CanIf/Can/CT_FD1_CAN_b4e1ca3b */,        42U  /* RxPduId */          ,       42U  /* RxPduId  */         , CANIF_NO_TXBUFFERCFGIDXOFMAILBOXCONFIG  /* unusedIndex38 */                                                , CANIF_TXBUFFER_HANDLINGTYPE_NONE       , CANIF_RxFullCANMailbox  },  /* [/ActiveEcuC/Can/CanConfigSet/CanHardwareObject_Steering_Data_FD1_oFD1_CAN_Rx_3abd61be] */
  { /*    39 */           0UL  /* /ActiveEcuC/CanIf/Can/CT_FD1_CAN_b4e1ca3b */,        43U  /* RxPduId */          ,       43U  /* RxPduId  */         , CANIF_NO_TXBUFFERCFGIDXOFMAILBOXCONFIG  /* unusedIndex39 */                                                , CANIF_TXBUFFER_HANDLINGTYPE_NONE       , CANIF_RxFullCANMailbox  },  /* [/ActiveEcuC/Can/CanConfigSet/CanHardwareObject_BrakeSnData_4_FD1_oFD1_CAN_Rx_3abd61be] */
  { /*    40 */           0UL  /* /ActiveEcuC/CanIf/Can/CT_FD1_CAN_b4e1ca3b */,        44U  /* RxPduId */          ,       44U  /* RxPduId  */         , CANIF_NO_TXBUFFERCFGIDXOFMAILBOXCONFIG  /* unusedIndex40 */                                                , CANIF_TXBUFFER_HANDLINGTYPE_NONE       , CANIF_RxFullCANMailbox  },  /* [/ActiveEcuC/Can/CanConfigSet/CanHardwareObject_BrakeSnData_3_FD1_oFD1_CAN_Rx_3abd61be] */
  { /*    41 */           0UL  /* /ActiveEcuC/CanIf/Can/CT_FD1_CAN_b4e1ca3b */,        45U  /* RxPduId */          ,       45U  /* RxPduId  */         , CANIF_NO_TXBUFFERCFGIDXOFMAILBOXCONFIG  /* unusedIndex41 */                                                , CANIF_TXBUFFER_HANDLINGTYPE_NONE       , CANIF_RxFullCANMailbox  },  /* [/ActiveEcuC/Can/CanConfigSet/CanHardwareObject_BrakeSnData_5_FD1_oFD1_CAN_Rx_3abd61be] */
  { /*    42 */           0UL  /* /ActiveEcuC/CanIf/Can/CT_FD1_CAN_b4e1ca3b */,         0U  /* RxPduId */          ,        4U  /* RxPduId  */         , CANIF_NO_TXBUFFERCFGIDXOFMAILBOXCONFIG  /* unusedIndex42 */                                                , CANIF_TXBUFFER_HANDLINGTYPE_NONE       , CANIF_RxBasicCANMailbox }   /* [/ActiveEcuC/Can/CanConfigSet/CN_FD1_CAN_b4e1ca3b_Rx_Std] */
};
#define CANIF_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  CanIf_MappedTxBuffersConfig
**********************************************************************************************************************/
/** 
  \var    CanIf_MappedTxBuffersConfig
  \brief  Mapped Tx-buffer(s)
  \details
  Element             Description
  MailBoxConfigIdx    the index of the 1:1 relation pointing to CanIf_MailBoxConfig
*/ 
#define CANIF_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(CanIf_MappedTxBuffersConfigType, CANIF_CONST) CanIf_MappedTxBuffersConfig[1] = {
    /* Index    MailBoxConfigIdx                                                                       Referable Keys */
  { /*     0 */              0UL  /* /ActiveEcuC/Can/CanConfigSet/CN_FD1_CAN_b4e1ca3b_Tx_Std */ }   /* [/ActiveEcuC/CanIf/Can/CT_FD1_CAN_b4e1ca3b] */
};
#define CANIF_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  CanIf_RxIndicationFctList
**********************************************************************************************************************/
/** 
  \var    CanIf_RxIndicationFctList
  \brief  Rx indication functions table.
  \details
  Element               Description
  RxIndicationFct       Rx indication function.
  RxIndicationLayout    Layout of Rx indication function.
*/ 
#define CANIF_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(CanIf_RxIndicationFctListType, CANIF_CONST) CanIf_RxIndicationFctList[5] = {
    /* Index    RxIndicationFct                                               RxIndicationLayout                                                            Referable Keys */
  { /*     0 */  { (CanIf_SimpleRxIndicationFctType)NULL_PTR }              , CanIf_SimpleRxIndicationLayout    /* PRQA S 313 */ /* MD_CanIf_11.1 */ },  /* [NULL_PTR] */
  { /*     1 */  { (CanIf_SimpleRxIndicationFctType)CanNm_RxIndication }    , CanIf_AdvancedRxIndicationLayout  /* PRQA S 313 */ /* MD_CanIf_11.1 */ },  /* [CanNm_RxIndication] */
  { /*     2 */  { (CanIf_SimpleRxIndicationFctType)CanTp_RxIndication }    , CanIf_AdvancedRxIndicationLayout  /* PRQA S 313 */ /* MD_CanIf_11.1 */ },  /* [CanTp_RxIndication] */
  { /*     3 */  { (CanIf_SimpleRxIndicationFctType)PduR_CanIfRxIndication }, CanIf_AdvancedRxIndicationLayout  /* PRQA S 313 */ /* MD_CanIf_11.1 */ },  /* [PduR_CanIfRxIndication] */
  { /*     4 */  { (CanIf_SimpleRxIndicationFctType)Xcp_CanIfRxIndication } , CanIf_AdvancedRxIndicationLayout  /* PRQA S 313 */ /* MD_CanIf_11.1 */ }   /* [Xcp_CanIfRxIndication] */
};
#define CANIF_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  CanIf_RxPduCanIdECU1
**********************************************************************************************************************/
/** 
  \var    CanIf_RxPduCanIdECU1
  \brief  Rx-PDU: CAN identifier.
*/ 
#define CANIF_START_SEC_CONST_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(CanIf_RxPduCanIdType, CANIF_CONST) CanIf_RxPduCanIdECU1[46] = {
  /* Index    RxPduCanId                                                                            */
  /*     0 */    0x07DFU  /* TesterFunctionalReq_FD1_Tp_oFD1_CAN_Rx_3abd61be, only FD-PDU */      ,
  /*     1 */    0x07DFU  /* TesterFunctionalReq_FD1_Tp_oFD1_CAN_20_Rx_3abd61be, only 2.0-PDU */  ,
  /*     2 */    0x0730U  /* TesterPhysicalReqPSCM_FD1_Tp_oFD1_CAN_Rx_3abd61be, only FD-PDU */    ,
  /*     3 */    0x0730U  /* TesterPhysicalReqPSCM_FD1_Tp_oFD1_CAN_20_Rx_3abd61be, only 2.0-PDU */,
  /*     4 */    0x060AU  /* Xcp_CRO_Msg_oFD1_CAN_Rx_3abd61be, 2.0- or FD-PDU */                  ,
  /*     5 */    0x1234U  /* CanIfRxPduCfg_Nm_Dummy, 2.0- or FD-PDU */                            ,
  /*     6 */    0x04B0U  /* ABS_BrkBst_Data_FD1_oFD1_CAN_Rx_3abd61be, 2.0- or FD-PDU */          ,
  /*     7 */    0x047AU  /* TrailerInfo_2_FD1_oFD1_CAN_Rx_3abd61be, 2.0- or FD-PDU */            ,
  /*     8 */    0x045CU  /* TrailerAid_Data3_FD1_oFD1_CAN_Rx_3abd61be, 2.0- or FD-PDU */         ,
  /*     9 */    0x045AU  /* TrailerAid_Data_FD1_oFD1_CAN_Rx_3abd61be, 2.0- or FD-PDU */          ,
  /*    10 */    0x0459U  /* TrailerAid_Stat3_FD1_oFD1_CAN_Rx_3abd61be, 2.0- or FD-PDU */         ,
  /*    11 */    0x0457U  /* TrailerAid_Stat2_FD1_oFD1_CAN_Rx_3abd61be, 2.0- or FD-PDU */         ,
  /*    12 */    0x0452U  /* TrailerAid_Stat1_FD1_oFD1_CAN_Rx_3abd61be, 2.0- or FD-PDU */         ,
  /*    13 */    0x0451U  /* Image_Processing_Data_FD1_oFD1_CAN_Rx_3abd61be, 2.0- or FD-PDU */    ,
  /*    14 */    0x0445U  /* TrailerBrakeInfo_FD1_oFD1_CAN_Rx_3abd61be, 2.0- or FD-PDU */         ,
  /*    15 */    0x0443U  /* TrailerInfo_FD1_oFD1_CAN_Rx_3abd61be, 2.0- or FD-PDU */              ,
  /*    16 */    0x0430U  /* Cluster_Info1_FD1_oFD1_CAN_Rx_3abd61be, 2.0- or FD-PDU */            ,
  /*    17 */    0x041EU  /* BrakeSysFeatures_3_oFD1_CAN_Rx_3abd61be, 2.0- or FD-PDU */           ,
  /*    18 */    0x041AU  /* Climate_Control_Data_FD1_oFD1_CAN_Rx_3abd61be, 2.0- or FD-PDU */     ,
  /*    19 */    0x0415U  /* BrakeSysFeatures_FD1_oFD1_CAN_Rx_3abd61be, 2.0- or FD-PDU */         ,
  /*    20 */    0x0414U  /* BrakeSnData_6_FD1_oFD1_CAN_Rx_3abd61be, 2.0- or FD-PDU */            ,
  /*    21 */    0x040AU  /* GGCC_Config_Mgmt_ID_1_FD1_oFD1_CAN_Rx_3abd61be, 2.0- or FD-PDU */    ,
  /*    22 */    0x03F1U  /* APIM_Send_Signals1_FD1_oFD1_CAN_Rx_3abd61be, 2.0- or FD-PDU */       ,
  /*    23 */    0x03D7U  /* Steer_Assist_Data_FD1_oFD1_CAN_Rx_3abd61be, 2.0- or FD-PDU */        ,
  /*    24 */    0x03D3U  /* LateralMotionControl_FD1_oFD1_CAN_Rx_3abd61be, 2.0- or FD-PDU */     ,
  /*    25 */    0x03CAU  /* Lane_Assist_Data1_FD1_oFD1_CAN_Rx_3abd61be, 2.0- or FD-PDU */        ,
  /*    26 */    0x03B3U  /* BodyInfo_3_FD1_oFD1_CAN_Rx_3abd61be, 2.0- or FD-PDU */               ,
  /*    27 */    0x03A8U  /* ParkAid_Data_FD1_oFD1_CAN_Rx_3abd61be, 2.0- or FD-PDU */             ,
  /*    28 */    0x02FDU  /* Mc_Send_Signals_2_FD1_oFD1_CAN_Rx_3abd61be, 2.0- or FD-PDU */        ,
  /*    29 */    0x0242U  /* Body_Info_4_FD1_oFD1_CAN_Rx_3abd61be, 2.0- or FD-PDU */              ,
  /*    30 */    0x0230U  /* TransGearData_FD1_oFD1_CAN_Rx_3abd61be, 2.0- or FD-PDU */            ,
  /*    31 */    0x0217U  /* WheelSpeed_FD1_oFD1_CAN_Rx_3abd61be, 2.0- or FD-PDU */               ,
  /*    32 */    0x0216U  /* WheelData_FD1_oFD1_CAN_Rx_3abd61be, 2.0- or FD-PDU */                ,
  /*    33 */    0x0215U  /* APIM_Send_Signals_2_FD1_oFD1_CAN_Rx_3abd61be, 2.0- or FD-PDU */      ,
  /*    34 */    0x0213U  /* DesiredTorqBrk_FD1_oFD1_CAN_Rx_3abd61be, 2.0- or FD-PDU */           ,
  /*    35 */    0x0204U  /* EngVehicleSpThrottle_FD1_oFD1_CAN_Rx_3abd61be, 2.0- or FD-PDU */     ,
  /*    36 */    0x0202U  /* EngVehicleSpThrottle2_FD1_oFD1_CAN_Rx_3abd61be, 2.0- or FD-PDU */    ,
  /*    37 */    0x0176U  /* PowertrainData_10_FD1_oFD1_CAN_Rx_3abd61be, 2.0- or FD-PDU */        ,
  /*    38 */    0x0167U  /* VehicleOperatingModes_FD1_oFD1_CAN_Rx_3abd61be, 2.0- or FD-PDU */    ,
  /*    39 */    0x0165U  /* EngBrakeData_FD1_oFD1_CAN_Rx_3abd61be, 2.0- or FD-PDU */             ,
  /*    40 */    0x0091U  /* Yaw_Data_FD1_oFD1_CAN_Rx_3abd61be, 2.0- or FD-PDU */                 ,
  /*    41 */    0x008AU  /* ActiveFrontStrg_Stat2_FD1_oFD1_CAN_Rx_3abd61be, 2.0- or FD-PDU */    ,
  /*    42 */    0x0083U  /* Steering_Data_FD1_oFD1_CAN_Rx_3abd61be, 2.0- or FD-PDU */            ,
  /*    43 */    0x007DU  /* BrakeSnData_4_FD1_oFD1_CAN_Rx_3abd61be, 2.0- or FD-PDU */            ,
  /*    44 */    0x0077U  /* BrakeSnData_3_FD1_oFD1_CAN_Rx_3abd61be, 2.0- or FD-PDU */            ,
  /*    45 */    0x0076U  /* BrakeSnData_5_FD1_oFD1_CAN_Rx_3abd61be, 2.0- or FD-PDU */            
};
#define CANIF_STOP_SEC_CONST_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  CanIf_RxPduCanIdECU2
**********************************************************************************************************************/
/** 
  \var    CanIf_RxPduCanIdECU2
  \brief  Rx-PDU: CAN identifier.
*/ 
#define CANIF_START_SEC_CONST_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(CanIf_RxPduCanIdType, CANIF_CONST) CanIf_RxPduCanIdECU2[46] = {
  /* Index    RxPduCanId                                                                            */
  /*     0 */    0x06DFU  /* TesterFunctionalReq_FD1_Tp_oFD1_CAN_Rx_3abd61be, only FD-PDU */      ,
  /*     1 */    0x06DFU  /* TesterFunctionalReq_FD1_Tp_oFD1_CAN_20_Rx_3abd61be, only 2.0-PDU */  ,
  /*     2 */    0x0660U  /* Xcp_CRO_Msg_oFD1_CAN_Rx_3abd61be, 2.0- or FD-PDU */                  ,
  /*     3 */    0x065EU  /* TesterPhysicalReqPSCM_FD1_Tp_oFD1_CAN_Rx_3abd61be, only FD-PDU */    ,
  /*     4 */    0x065EU  /* TesterPhysicalReqPSCM_FD1_Tp_oFD1_CAN_20_Rx_3abd61be, only 2.0-PDU */,
  /*     5 */    0x1234U  /* CanIfRxPduCfg_Nm_Dummy, 2.0- or FD-PDU */                            ,
  /*     6 */    0x04B0U  /* ABS_BrkBst_Data_FD1_oFD1_CAN_Rx_3abd61be, 2.0- or FD-PDU */          ,
  /*     7 */    0x047AU  /* TrailerInfo_2_FD1_oFD1_CAN_Rx_3abd61be, 2.0- or FD-PDU */            ,
  /*     8 */    0x045CU  /* TrailerAid_Data3_FD1_oFD1_CAN_Rx_3abd61be, 2.0- or FD-PDU */         ,
  /*     9 */    0x045AU  /* TrailerAid_Data_FD1_oFD1_CAN_Rx_3abd61be, 2.0- or FD-PDU */          ,
  /*    10 */    0x0459U  /* TrailerAid_Stat3_FD1_oFD1_CAN_Rx_3abd61be, 2.0- or FD-PDU */         ,
  /*    11 */    0x0457U  /* TrailerAid_Stat2_FD1_oFD1_CAN_Rx_3abd61be, 2.0- or FD-PDU */         ,
  /*    12 */    0x0452U  /* TrailerAid_Stat1_FD1_oFD1_CAN_Rx_3abd61be, 2.0- or FD-PDU */         ,
  /*    13 */    0x0451U  /* Image_Processing_Data_FD1_oFD1_CAN_Rx_3abd61be, 2.0- or FD-PDU */    ,
  /*    14 */    0x0445U  /* TrailerBrakeInfo_FD1_oFD1_CAN_Rx_3abd61be, 2.0- or FD-PDU */         ,
  /*    15 */    0x0443U  /* TrailerInfo_FD1_oFD1_CAN_Rx_3abd61be, 2.0- or FD-PDU */              ,
  /*    16 */    0x0430U  /* Cluster_Info1_FD1_oFD1_CAN_Rx_3abd61be, 2.0- or FD-PDU */            ,
  /*    17 */    0x041EU  /* BrakeSysFeatures_3_oFD1_CAN_Rx_3abd61be, 2.0- or FD-PDU */           ,
  /*    18 */    0x041AU  /* Climate_Control_Data_FD1_oFD1_CAN_Rx_3abd61be, 2.0- or FD-PDU */     ,
  /*    19 */    0x0415U  /* BrakeSysFeatures_FD1_oFD1_CAN_Rx_3abd61be, 2.0- or FD-PDU */         ,
  /*    20 */    0x0414U  /* BrakeSnData_6_FD1_oFD1_CAN_Rx_3abd61be, 2.0- or FD-PDU */            ,
  /*    21 */    0x040AU  /* GGCC_Config_Mgmt_ID_1_FD1_oFD1_CAN_Rx_3abd61be, 2.0- or FD-PDU */    ,
  /*    22 */    0x03F1U  /* APIM_Send_Signals1_FD1_oFD1_CAN_Rx_3abd61be, 2.0- or FD-PDU */       ,
  /*    23 */    0x03D7U  /* Steer_Assist_Data_FD1_oFD1_CAN_Rx_3abd61be, 2.0- or FD-PDU */        ,
  /*    24 */    0x03D3U  /* LateralMotionControl_FD1_oFD1_CAN_Rx_3abd61be, 2.0- or FD-PDU */     ,
  /*    25 */    0x03CAU  /* Lane_Assist_Data1_FD1_oFD1_CAN_Rx_3abd61be, 2.0- or FD-PDU */        ,
  /*    26 */    0x03B3U  /* BodyInfo_3_FD1_oFD1_CAN_Rx_3abd61be, 2.0- or FD-PDU */               ,
  /*    27 */    0x03A8U  /* ParkAid_Data_FD1_oFD1_CAN_Rx_3abd61be, 2.0- or FD-PDU */             ,
  /*    28 */    0x02FDU  /* Mc_Send_Signals_2_FD1_oFD1_CAN_Rx_3abd61be, 2.0- or FD-PDU */        ,
  /*    29 */    0x0242U  /* Body_Info_4_FD1_oFD1_CAN_Rx_3abd61be, 2.0- or FD-PDU */              ,
  /*    30 */    0x0230U  /* TransGearData_FD1_oFD1_CAN_Rx_3abd61be, 2.0- or FD-PDU */            ,
  /*    31 */    0x0217U  /* WheelSpeed_FD1_oFD1_CAN_Rx_3abd61be, 2.0- or FD-PDU */               ,
  /*    32 */    0x0216U  /* WheelData_FD1_oFD1_CAN_Rx_3abd61be, 2.0- or FD-PDU */                ,
  /*    33 */    0x0215U  /* APIM_Send_Signals_2_FD1_oFD1_CAN_Rx_3abd61be, 2.0- or FD-PDU */      ,
  /*    34 */    0x0213U  /* DesiredTorqBrk_FD1_oFD1_CAN_Rx_3abd61be, 2.0- or FD-PDU */           ,
  /*    35 */    0x0204U  /* EngVehicleSpThrottle_FD1_oFD1_CAN_Rx_3abd61be, 2.0- or FD-PDU */     ,
  /*    36 */    0x0202U  /* EngVehicleSpThrottle2_FD1_oFD1_CAN_Rx_3abd61be, 2.0- or FD-PDU */    ,
  /*    37 */    0x0176U  /* PowertrainData_10_FD1_oFD1_CAN_Rx_3abd61be, 2.0- or FD-PDU */        ,
  /*    38 */    0x0167U  /* VehicleOperatingModes_FD1_oFD1_CAN_Rx_3abd61be, 2.0- or FD-PDU */    ,
  /*    39 */    0x0165U  /* EngBrakeData_FD1_oFD1_CAN_Rx_3abd61be, 2.0- or FD-PDU */             ,
  /*    40 */    0x0091U  /* Yaw_Data_FD1_oFD1_CAN_Rx_3abd61be, 2.0- or FD-PDU */                 ,
  /*    41 */    0x008AU  /* ActiveFrontStrg_Stat2_FD1_oFD1_CAN_Rx_3abd61be, 2.0- or FD-PDU */    ,
  /*    42 */    0x0083U  /* Steering_Data_FD1_oFD1_CAN_Rx_3abd61be, 2.0- or FD-PDU */            ,
  /*    43 */    0x007DU  /* BrakeSnData_4_FD1_oFD1_CAN_Rx_3abd61be, 2.0- or FD-PDU */            ,
  /*    44 */    0x0077U  /* BrakeSnData_3_FD1_oFD1_CAN_Rx_3abd61be, 2.0- or FD-PDU */            ,
  /*    45 */    0x0076U  /* BrakeSnData_5_FD1_oFD1_CAN_Rx_3abd61be, 2.0- or FD-PDU */            
};
#define CANIF_STOP_SEC_CONST_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  CanIf_RxPduConfigECU1
**********************************************************************************************************************/
/** 
  \var    CanIf_RxPduConfigECU1
  \brief  Rx-PDU configuration table.
  \details
  Element                   Description
  UpperPduId                PDU ID defined by upper layer.
  Dlc                       Data length code.
  RxIndicationFctListIdx    the index of the 1:1 relation pointing to CanIf_RxIndicationFctList
  MsgType                   Type of CAN message: *CAN (both 2.0 or FD), *FD_CAN (only FD), *NO_FD_CAN (only 2.0).
*/ 
#define CANIF_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(CanIf_RxPduConfigType, CANIF_CONST) CanIf_RxPduConfigECU1[46] = {
    /* Index    UpperPduId                                                         Dlc  RxIndicationFctListIdx                                MsgType                         Comment                                                                               Referable Keys */
  { /*     0 */ CanTpConf_CanTpRxNPdu_CanTpRxNPdu_c40f6080                       ,  0U,                    2UL  /* CanTp_RxIndication */    , CANIF_MSG_TYPE_FD_CAN    },  /* [PDU: TesterFunctionalReq_FD1_Tp_oFD1_CAN_Rx_3abd61be, CanId: 0x7df]      */  /* [CanIfConf_CanIfRxPduCfg_TesterFunctionalReq_FD1_Tp_oFD1_CAN_Rx_3abd61be] */
  { /*     1 */ CanTpConf_CanTpRxNPdu_CanTpRxNPdu_b5f48067                       ,  8U,                    2UL  /* CanTp_RxIndication */    , CANIF_MSG_TYPE_NO_FD_CAN },  /* [PDU: TesterFunctionalReq_FD1_Tp_oFD1_CAN_20_Rx_3abd61be, CanId: 0x7df]   */  /* [CanIfConf_CanIfRxPduCfg_TesterFunctionalReq_FD1_Tp_oFD1_CAN_20_Rx_3abd61be] */
  { /*     2 */ CanTpConf_CanTpRxFcNPdu_CanTpRxFcNPdu_a3000bfc                   ,  0U,                    2UL  /* CanTp_RxIndication */    , CANIF_MSG_TYPE_FD_CAN    },  /* [PDU: TesterPhysicalReqPSCM_FD1_Tp_oFD1_CAN_Rx_3abd61be, CanId: 0x730]    */  /* [CanIfConf_CanIfRxPduCfg_TesterPhysicalReqPSCM_FD1_Tp_oFD1_CAN_Rx_3abd61be] */
  { /*     3 */ CanTpConf_CanTpRxFcNPdu_CanTpRxFcNPdu_d4315ea8                   ,  8U,                    2UL  /* CanTp_RxIndication */    , CANIF_MSG_TYPE_NO_FD_CAN },  /* [PDU: TesterPhysicalReqPSCM_FD1_Tp_oFD1_CAN_20_Rx_3abd61be, CanId: 0x730] */  /* [CanIfConf_CanIfRxPduCfg_TesterPhysicalReqPSCM_FD1_Tp_oFD1_CAN_20_Rx_3abd61be] */
  { /*     4 */ XcpConf_XcpRxPdu_Xcp_CRO_Msg_oFD1_CAN_3abd61be                   ,  8U,                    4UL  /* Xcp_CanIfRxIndication */ , CANIF_MSG_TYPE_CAN       },  /* [PDU: Xcp_CRO_Msg_oFD1_CAN_Rx_3abd61be, CanId: 0x60a]                     */  /* [CanIfConf_CanIfRxPduCfg_Xcp_CRO_Msg_oFD1_CAN_Rx_3abd61be] */
  { /*     5 */ CanNmConf_CanNmRxPdu_CanNmRxPdu                                  ,  8U,                    1UL  /* CanNm_RxIndication */    , CANIF_MSG_TYPE_CAN       },  /* [PDU: CanIfRxPduCfg_Nm_Dummy, CanId: 0x1234]                              */  /* [CanIfConf_CanIfRxPduCfg_CanIfRxPduCfg_Nm_Dummy] */
  { /*     6 */ PduRConf_PduRSrcPdu_SRC_Can_PT_ABS_BrkBst_Data_FD1_3290b631      ,  8U,                    3UL  /* PduR_CanIfRxIndication */, CANIF_MSG_TYPE_CAN       },  /* [PDU: ABS_BrkBst_Data_FD1_oFD1_CAN_Rx_3abd61be, CanId: 0x4b0]             */  /* [CanIfConf_CanIfRxPduCfg_ABS_BrkBst_Data_FD1_oFD1_CAN_Rx_3abd61be] */
  { /*     7 */ PduRConf_PduRSrcPdu_SRC_Can_PT_TrailerInfo_2_FD1_3290b631        ,  8U,                    3UL  /* PduR_CanIfRxIndication */, CANIF_MSG_TYPE_CAN       },  /* [PDU: TrailerInfo_2_FD1_oFD1_CAN_Rx_3abd61be, CanId: 0x47a]               */  /* [CanIfConf_CanIfRxPduCfg_TrailerInfo_2_FD1_oFD1_CAN_Rx_3abd61be] */
  { /*     8 */ PduRConf_PduRSrcPdu_SRC_Can_PT_TrailerAid_Data3_FD1_3290b631     ,  8U,                    3UL  /* PduR_CanIfRxIndication */, CANIF_MSG_TYPE_CAN       },  /* [PDU: TrailerAid_Data3_FD1_oFD1_CAN_Rx_3abd61be, CanId: 0x45c]            */  /* [CanIfConf_CanIfRxPduCfg_TrailerAid_Data3_FD1_oFD1_CAN_Rx_3abd61be] */
  { /*     9 */ PduRConf_PduRSrcPdu_SRC_Can_PT_TrailerAid_Data_FD1_3290b631      ,  8U,                    3UL  /* PduR_CanIfRxIndication */, CANIF_MSG_TYPE_CAN       },  /* [PDU: TrailerAid_Data_FD1_oFD1_CAN_Rx_3abd61be, CanId: 0x45a]             */  /* [CanIfConf_CanIfRxPduCfg_TrailerAid_Data_FD1_oFD1_CAN_Rx_3abd61be] */
  { /*    10 */ PduRConf_PduRSrcPdu_SRC_Can_PT_TrailerAid_Stat3_FD1_3290b631     ,  8U,                    3UL  /* PduR_CanIfRxIndication */, CANIF_MSG_TYPE_CAN       },  /* [PDU: TrailerAid_Stat3_FD1_oFD1_CAN_Rx_3abd61be, CanId: 0x459]            */  /* [CanIfConf_CanIfRxPduCfg_TrailerAid_Stat3_FD1_oFD1_CAN_Rx_3abd61be] */
  { /*    11 */ PduRConf_PduRSrcPdu_SRC_Can_PT_TrailerAid_Stat2_FD1_3290b631     ,  8U,                    3UL  /* PduR_CanIfRxIndication */, CANIF_MSG_TYPE_CAN       },  /* [PDU: TrailerAid_Stat2_FD1_oFD1_CAN_Rx_3abd61be, CanId: 0x457]            */  /* [CanIfConf_CanIfRxPduCfg_TrailerAid_Stat2_FD1_oFD1_CAN_Rx_3abd61be] */
  { /*    12 */ PduRConf_PduRSrcPdu_SRC_Can_PT_TrailerAid_Stat1_FD1_3290b631     ,  8U,                    3UL  /* PduR_CanIfRxIndication */, CANIF_MSG_TYPE_CAN       },  /* [PDU: TrailerAid_Stat1_FD1_oFD1_CAN_Rx_3abd61be, CanId: 0x452]            */  /* [CanIfConf_CanIfRxPduCfg_TrailerAid_Stat1_FD1_oFD1_CAN_Rx_3abd61be] */
  { /*    13 */ PduRConf_PduRSrcPdu_SRC_Can_PT_Image_Processing_Data_FD1_3290b631,  8U,                    3UL  /* PduR_CanIfRxIndication */, CANIF_MSG_TYPE_CAN       },  /* [PDU: Image_Processing_Data_FD1_oFD1_CAN_Rx_3abd61be, CanId: 0x451]       */  /* [CanIfConf_CanIfRxPduCfg_Image_Processing_Data_FD1_oFD1_CAN_Rx_3abd61be] */
  { /*    14 */ PduRConf_PduRSrcPdu_SRC_Can_PT_TrailerBrakeInfo_FD1_3290b631     ,  8U,                    3UL  /* PduR_CanIfRxIndication */, CANIF_MSG_TYPE_CAN       },  /* [PDU: TrailerBrakeInfo_FD1_oFD1_CAN_Rx_3abd61be, CanId: 0x445]            */  /* [CanIfConf_CanIfRxPduCfg_TrailerBrakeInfo_FD1_oFD1_CAN_Rx_3abd61be] */
  { /*    15 */ PduRConf_PduRSrcPdu_SRC_Can_PT_TrailerInfo_FD1_3290b631          ,  8U,                    3UL  /* PduR_CanIfRxIndication */, CANIF_MSG_TYPE_CAN       },  /* [PDU: TrailerInfo_FD1_oFD1_CAN_Rx_3abd61be, CanId: 0x443]                 */  /* [CanIfConf_CanIfRxPduCfg_TrailerInfo_FD1_oFD1_CAN_Rx_3abd61be] */
  { /*    16 */ PduRConf_PduRSrcPdu_SRC_Can_PT_Cluster_Info1_FD1_3290b631        ,  8U,                    3UL  /* PduR_CanIfRxIndication */, CANIF_MSG_TYPE_CAN       },  /* [PDU: Cluster_Info1_FD1_oFD1_CAN_Rx_3abd61be, CanId: 0x430]               */  /* [CanIfConf_CanIfRxPduCfg_Cluster_Info1_FD1_oFD1_CAN_Rx_3abd61be] */
  { /*    17 */ PduRConf_PduRSrcPdu_SRC_Can_PT_BrakeSysFeatures_3_3290b631       ,  8U,                    3UL  /* PduR_CanIfRxIndication */, CANIF_MSG_TYPE_CAN       },  /* [PDU: BrakeSysFeatures_3_oFD1_CAN_Rx_3abd61be, CanId: 0x41e]              */  /* [CanIfConf_CanIfRxPduCfg_BrakeSysFeatures_3_oFD1_CAN_Rx_3abd61be] */
  { /*    18 */ PduRConf_PduRSrcPdu_SRC_Can_PT_Climate_Control_Data_FD1_3290b631 ,  8U,                    3UL  /* PduR_CanIfRxIndication */, CANIF_MSG_TYPE_CAN       },  /* [PDU: Climate_Control_Data_FD1_oFD1_CAN_Rx_3abd61be, CanId: 0x41a]        */  /* [CanIfConf_CanIfRxPduCfg_Climate_Control_Data_FD1_oFD1_CAN_Rx_3abd61be] */
  { /*    19 */ PduRConf_PduRSrcPdu_SRC_Can_PT_BrakeSysFeatures_FD1_3290b631     ,  8U,                    3UL  /* PduR_CanIfRxIndication */, CANIF_MSG_TYPE_CAN       },  /* [PDU: BrakeSysFeatures_FD1_oFD1_CAN_Rx_3abd61be, CanId: 0x415]            */  /* [CanIfConf_CanIfRxPduCfg_BrakeSysFeatures_FD1_oFD1_CAN_Rx_3abd61be] */
  { /*    20 */ PduRConf_PduRSrcPdu_SRC_Can_PT_BrakeSnData_6_FD1_3290b631        ,  8U,                    3UL  /* PduR_CanIfRxIndication */, CANIF_MSG_TYPE_CAN       },  /* [PDU: BrakeSnData_6_FD1_oFD1_CAN_Rx_3abd61be, CanId: 0x414]               */  /* [CanIfConf_CanIfRxPduCfg_BrakeSnData_6_FD1_oFD1_CAN_Rx_3abd61be] */
  { /*    21 */ PduRConf_PduRSrcPdu_SRC_Can_PT_GGCC_Config_Mgmt_ID_1_FD1_3290b631,  8U,                    3UL  /* PduR_CanIfRxIndication */, CANIF_MSG_TYPE_CAN       },  /* [PDU: GGCC_Config_Mgmt_ID_1_FD1_oFD1_CAN_Rx_3abd61be, CanId: 0x40a]       */  /* [CanIfConf_CanIfRxPduCfg_GGCC_Config_Mgmt_ID_1_FD1_oFD1_CAN_Rx_3abd61be] */
  { /*    22 */ PduRConf_PduRSrcPdu_SRC_Can_PT_APIM_Send_Signals1_FD1_3290b631   ,  8U,                    3UL  /* PduR_CanIfRxIndication */, CANIF_MSG_TYPE_CAN       },  /* [PDU: APIM_Send_Signals1_FD1_oFD1_CAN_Rx_3abd61be, CanId: 0x3f1]          */  /* [CanIfConf_CanIfRxPduCfg_APIM_Send_Signals1_FD1_oFD1_CAN_Rx_3abd61be] */
  { /*    23 */ PduRConf_PduRSrcPdu_SRC_Can_PT_Steer_Assist_Data_FD1_3290b631    ,  8U,                    3UL  /* PduR_CanIfRxIndication */, CANIF_MSG_TYPE_CAN       },  /* [PDU: Steer_Assist_Data_FD1_oFD1_CAN_Rx_3abd61be, CanId: 0x3d7]           */  /* [CanIfConf_CanIfRxPduCfg_Steer_Assist_Data_FD1_oFD1_CAN_Rx_3abd61be] */
  { /*    24 */ PduRConf_PduRSrcPdu_SRC_Can_PT_LateralMotionControl_FD1_3290b631 ,  8U,                    3UL  /* PduR_CanIfRxIndication */, CANIF_MSG_TYPE_CAN       },  /* [PDU: LateralMotionControl_FD1_oFD1_CAN_Rx_3abd61be, CanId: 0x3d3]        */  /* [CanIfConf_CanIfRxPduCfg_LateralMotionControl_FD1_oFD1_CAN_Rx_3abd61be] */
  { /*    25 */ PduRConf_PduRSrcPdu_SRC_Can_PT_Lane_Assist_Data1_FD1_3290b631    ,  8U,                    3UL  /* PduR_CanIfRxIndication */, CANIF_MSG_TYPE_CAN       },  /* [PDU: Lane_Assist_Data1_FD1_oFD1_CAN_Rx_3abd61be, CanId: 0x3ca]           */  /* [CanIfConf_CanIfRxPduCfg_Lane_Assist_Data1_FD1_oFD1_CAN_Rx_3abd61be] */
  { /*    26 */ PduRConf_PduRSrcPdu_SRC_Can_PT_BodyInfo_3_FD1_3290b631           ,  8U,                    3UL  /* PduR_CanIfRxIndication */, CANIF_MSG_TYPE_CAN       },  /* [PDU: BodyInfo_3_FD1_oFD1_CAN_Rx_3abd61be, CanId: 0x3b3]                  */  /* [CanIfConf_CanIfRxPduCfg_BodyInfo_3_FD1_oFD1_CAN_Rx_3abd61be] */
  { /*    27 */ PduRConf_PduRSrcPdu_SRC_Can_PT_ParkAid_Data_FD1_3290b631         ,  8U,                    3UL  /* PduR_CanIfRxIndication */, CANIF_MSG_TYPE_CAN       },  /* [PDU: ParkAid_Data_FD1_oFD1_CAN_Rx_3abd61be, CanId: 0x3a8]                */  /* [CanIfConf_CanIfRxPduCfg_ParkAid_Data_FD1_oFD1_CAN_Rx_3abd61be] */
  { /*    28 */ PduRConf_PduRSrcPdu_SRC_Can_PT_Mc_Send_Signals_2_FD1_3290b631    ,  8U,                    3UL  /* PduR_CanIfRxIndication */, CANIF_MSG_TYPE_CAN       },  /* [PDU: Mc_Send_Signals_2_FD1_oFD1_CAN_Rx_3abd61be, CanId: 0x2fd]           */  /* [CanIfConf_CanIfRxPduCfg_Mc_Send_Signals_2_FD1_oFD1_CAN_Rx_3abd61be] */
  { /*    29 */ PduRConf_PduRSrcPdu_SRC_Can_PT_Body_Info_4_FD1_3290b631          ,  8U,                    3UL  /* PduR_CanIfRxIndication */, CANIF_MSG_TYPE_CAN       },  /* [PDU: Body_Info_4_FD1_oFD1_CAN_Rx_3abd61be, CanId: 0x242]                 */  /* [CanIfConf_CanIfRxPduCfg_Body_Info_4_FD1_oFD1_CAN_Rx_3abd61be] */
  { /*    30 */ PduRConf_PduRSrcPdu_SRC_Can_PT_TransGearData_FD1_3290b631        ,  8U,                    3UL  /* PduR_CanIfRxIndication */, CANIF_MSG_TYPE_CAN       },  /* [PDU: TransGearData_FD1_oFD1_CAN_Rx_3abd61be, CanId: 0x230]               */  /* [CanIfConf_CanIfRxPduCfg_TransGearData_FD1_oFD1_CAN_Rx_3abd61be] */
  { /*    31 */ PduRConf_PduRSrcPdu_SRC_Can_PT_WheelSpeed_FD1_3290b631           ,  8U,                    3UL  /* PduR_CanIfRxIndication */, CANIF_MSG_TYPE_CAN       },  /* [PDU: WheelSpeed_FD1_oFD1_CAN_Rx_3abd61be, CanId: 0x217]                  */  /* [CanIfConf_CanIfRxPduCfg_WheelSpeed_FD1_oFD1_CAN_Rx_3abd61be] */
  { /*    32 */ PduRConf_PduRSrcPdu_SRC_Can_PT_WheelData_FD1_3290b631            ,  8U,                    3UL  /* PduR_CanIfRxIndication */, CANIF_MSG_TYPE_CAN       },  /* [PDU: WheelData_FD1_oFD1_CAN_Rx_3abd61be, CanId: 0x216]                   */  /* [CanIfConf_CanIfRxPduCfg_WheelData_FD1_oFD1_CAN_Rx_3abd61be] */
  { /*    33 */ PduRConf_PduRSrcPdu_SRC_Can_PT_APIM_Send_Signals_2_FD1_3290b631  ,  8U,                    3UL  /* PduR_CanIfRxIndication */, CANIF_MSG_TYPE_CAN       },  /* [PDU: APIM_Send_Signals_2_FD1_oFD1_CAN_Rx_3abd61be, CanId: 0x215]         */  /* [CanIfConf_CanIfRxPduCfg_APIM_Send_Signals_2_FD1_oFD1_CAN_Rx_3abd61be] */
  { /*    34 */ PduRConf_PduRSrcPdu_SRC_Can_PT_DesiredTorqBrk_FD1_3290b631       ,  8U,                    3UL  /* PduR_CanIfRxIndication */, CANIF_MSG_TYPE_CAN       },  /* [PDU: DesiredTorqBrk_FD1_oFD1_CAN_Rx_3abd61be, CanId: 0x213]              */  /* [CanIfConf_CanIfRxPduCfg_DesiredTorqBrk_FD1_oFD1_CAN_Rx_3abd61be] */
  { /*    35 */ PduRConf_PduRSrcPdu_SRC_Can_PT_EngVehicleSpThrottle_FD1_3290b631 ,  8U,                    3UL  /* PduR_CanIfRxIndication */, CANIF_MSG_TYPE_CAN       },  /* [PDU: EngVehicleSpThrottle_FD1_oFD1_CAN_Rx_3abd61be, CanId: 0x204]        */  /* [CanIfConf_CanIfRxPduCfg_EngVehicleSpThrottle_FD1_oFD1_CAN_Rx_3abd61be] */
  { /*    36 */ PduRConf_PduRSrcPdu_SRC_Can_PT_EngVehicleSpThrottle2_FD1_3290b631,  8U,                    3UL  /* PduR_CanIfRxIndication */, CANIF_MSG_TYPE_CAN       },  /* [PDU: EngVehicleSpThrottle2_FD1_oFD1_CAN_Rx_3abd61be, CanId: 0x202]       */  /* [CanIfConf_CanIfRxPduCfg_EngVehicleSpThrottle2_FD1_oFD1_CAN_Rx_3abd61be] */
  { /*    37 */ PduRConf_PduRSrcPdu_SRC_Can_PT_PowertrainData_10_FD1_3290b631    ,  8U,                    3UL  /* PduR_CanIfRxIndication */, CANIF_MSG_TYPE_CAN       },  /* [PDU: PowertrainData_10_FD1_oFD1_CAN_Rx_3abd61be, CanId: 0x176]           */  /* [CanIfConf_CanIfRxPduCfg_PowertrainData_10_FD1_oFD1_CAN_Rx_3abd61be] */
  { /*    38 */ PduRConf_PduRSrcPdu_SRC_Can_PT_VehicleOperatingModes_FD1_3290b631,  8U,                    3UL  /* PduR_CanIfRxIndication */, CANIF_MSG_TYPE_CAN       },  /* [PDU: VehicleOperatingModes_FD1_oFD1_CAN_Rx_3abd61be, CanId: 0x167]       */  /* [CanIfConf_CanIfRxPduCfg_VehicleOperatingModes_FD1_oFD1_CAN_Rx_3abd61be] */
  { /*    39 */ PduRConf_PduRSrcPdu_SRC_Can_PT_EngBrakeData_FD1_3290b631         ,  8U,                    3UL  /* PduR_CanIfRxIndication */, CANIF_MSG_TYPE_CAN       },  /* [PDU: EngBrakeData_FD1_oFD1_CAN_Rx_3abd61be, CanId: 0x165]                */  /* [CanIfConf_CanIfRxPduCfg_EngBrakeData_FD1_oFD1_CAN_Rx_3abd61be] */
  { /*    40 */ PduRConf_PduRSrcPdu_SRC_Can_PT_Yaw_Data_FD1_3290b631             ,  8U,                    3UL  /* PduR_CanIfRxIndication */, CANIF_MSG_TYPE_CAN       },  /* [PDU: Yaw_Data_FD1_oFD1_CAN_Rx_3abd61be, CanId: 0x91]                     */  /* [CanIfConf_CanIfRxPduCfg_Yaw_Data_FD1_oFD1_CAN_Rx_3abd61be] */
  { /*    41 */ PduRConf_PduRSrcPdu_SRC_Can_PT_ActiveFrontStrg_Stat2_FD1_3290b631,  8U,                    3UL  /* PduR_CanIfRxIndication */, CANIF_MSG_TYPE_CAN       },  /* [PDU: ActiveFrontStrg_Stat2_FD1_oFD1_CAN_Rx_3abd61be, CanId: 0x8a]        */  /* [CanIfConf_CanIfRxPduCfg_ActiveFrontStrg_Stat2_FD1_oFD1_CAN_Rx_3abd61be] */
  { /*    42 */ PduRConf_PduRSrcPdu_SRC_Can_PT_Steering_Data_FD1_3290b631        ,  8U,                    3UL  /* PduR_CanIfRxIndication */, CANIF_MSG_TYPE_CAN       },  /* [PDU: Steering_Data_FD1_oFD1_CAN_Rx_3abd61be, CanId: 0x83]                */  /* [CanIfConf_CanIfRxPduCfg_Steering_Data_FD1_oFD1_CAN_Rx_3abd61be] */
  { /*    43 */ PduRConf_PduRSrcPdu_SRC_Can_PT_BrakeSnData_4_FD1_3290b631        ,  8U,                    3UL  /* PduR_CanIfRxIndication */, CANIF_MSG_TYPE_CAN       },  /* [PDU: BrakeSnData_4_FD1_oFD1_CAN_Rx_3abd61be, CanId: 0x7d]                */  /* [CanIfConf_CanIfRxPduCfg_BrakeSnData_4_FD1_oFD1_CAN_Rx_3abd61be] */
  { /*    44 */ PduRConf_PduRSrcPdu_SRC_Can_PT_BrakeSnData_3_FD1_3290b631        ,  8U,                    3UL  /* PduR_CanIfRxIndication */, CANIF_MSG_TYPE_CAN       },  /* [PDU: BrakeSnData_3_FD1_oFD1_CAN_Rx_3abd61be, CanId: 0x77]                */  /* [CanIfConf_CanIfRxPduCfg_BrakeSnData_3_FD1_oFD1_CAN_Rx_3abd61be] */
  { /*    45 */ PduRConf_PduRSrcPdu_SRC_Can_PT_BrakeSnData_5_FD1_3290b631        ,  8U,                    3UL  /* PduR_CanIfRxIndication */, CANIF_MSG_TYPE_CAN       }   /* [PDU: BrakeSnData_5_FD1_oFD1_CAN_Rx_3abd61be, CanId: 0x76]                */  /* [CanIfConf_CanIfRxPduCfg_BrakeSnData_5_FD1_oFD1_CAN_Rx_3abd61be] */
};
#define CANIF_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  CanIf_RxPduConfigECU2
**********************************************************************************************************************/
/** 
  \var    CanIf_RxPduConfigECU2
  \brief  Rx-PDU configuration table.
  \details
  Element                   Description
  UpperPduId                PDU ID defined by upper layer.
  Dlc                       Data length code.
  RxIndicationFctListIdx    the index of the 1:1 relation pointing to CanIf_RxIndicationFctList
  MsgType                   Type of CAN message: *CAN (both 2.0 or FD), *FD_CAN (only FD), *NO_FD_CAN (only 2.0).
*/ 
#define CANIF_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(CanIf_RxPduConfigType, CANIF_CONST) CanIf_RxPduConfigECU2[46] = {
    /* Index    UpperPduId                                                         Dlc  RxIndicationFctListIdx                                MsgType                         Comment                                                                               Referable Keys */
  { /*     0 */ CanTpConf_CanTpRxNPdu_CanTpRxNPdu_c40f6080                       ,  0U,                    2UL  /* CanTp_RxIndication */    , CANIF_MSG_TYPE_FD_CAN    },  /* [PDU: TesterFunctionalReq_FD1_Tp_oFD1_CAN_Rx_3abd61be, CanId: 0x6df]      */  /* [CanIfConf_CanIfRxPduCfg_TesterFunctionalReq_FD1_Tp_oFD1_CAN_Rx_3abd61be] */
  { /*     1 */ CanTpConf_CanTpRxNPdu_CanTpRxNPdu_b5f48067                       ,  8U,                    2UL  /* CanTp_RxIndication */    , CANIF_MSG_TYPE_NO_FD_CAN },  /* [PDU: TesterFunctionalReq_FD1_Tp_oFD1_CAN_20_Rx_3abd61be, CanId: 0x6df]   */  /* [CanIfConf_CanIfRxPduCfg_TesterFunctionalReq_FD1_Tp_oFD1_CAN_20_Rx_3abd61be] */
  { /*     2 */ XcpConf_XcpRxPdu_Xcp_CRO_Msg_oFD1_CAN_3abd61be                   ,  8U,                    4UL  /* Xcp_CanIfRxIndication */ , CANIF_MSG_TYPE_CAN       },  /* [PDU: Xcp_CRO_Msg_oFD1_CAN_Rx_3abd61be, CanId: 0x660]                     */  /* [CanIfConf_CanIfRxPduCfg_Xcp_CRO_Msg_oFD1_CAN_Rx_3abd61be] */
  { /*     3 */ CanTpConf_CanTpRxFcNPdu_CanTpRxFcNPdu_a3000bfc                   ,  0U,                    2UL  /* CanTp_RxIndication */    , CANIF_MSG_TYPE_FD_CAN    },  /* [PDU: TesterPhysicalReqPSCM_FD1_Tp_oFD1_CAN_Rx_3abd61be, CanId: 0x65e]    */  /* [CanIfConf_CanIfRxPduCfg_TesterPhysicalReqPSCM_FD1_Tp_oFD1_CAN_Rx_3abd61be] */
  { /*     4 */ CanTpConf_CanTpRxFcNPdu_CanTpRxFcNPdu_d4315ea8                   ,  8U,                    2UL  /* CanTp_RxIndication */    , CANIF_MSG_TYPE_NO_FD_CAN },  /* [PDU: TesterPhysicalReqPSCM_FD1_Tp_oFD1_CAN_20_Rx_3abd61be, CanId: 0x65e] */  /* [CanIfConf_CanIfRxPduCfg_TesterPhysicalReqPSCM_FD1_Tp_oFD1_CAN_20_Rx_3abd61be] */
  { /*     5 */ CanNmConf_CanNmRxPdu_CanNmRxPdu                                  ,  8U,                    1UL  /* CanNm_RxIndication */    , CANIF_MSG_TYPE_CAN       },  /* [PDU: CanIfRxPduCfg_Nm_Dummy, CanId: 0x1234]                              */  /* [CanIfConf_CanIfRxPduCfg_CanIfRxPduCfg_Nm_Dummy] */
  { /*     6 */ PduRConf_PduRSrcPdu_SRC_Can_PT_ABS_BrkBst_Data_FD1_3290b631      ,  8U,                    3UL  /* PduR_CanIfRxIndication */, CANIF_MSG_TYPE_CAN       },  /* [PDU: ABS_BrkBst_Data_FD1_oFD1_CAN_Rx_3abd61be, CanId: 0x4b0]             */  /* [CanIfConf_CanIfRxPduCfg_ABS_BrkBst_Data_FD1_oFD1_CAN_Rx_3abd61be] */
  { /*     7 */ PduRConf_PduRSrcPdu_SRC_Can_PT_TrailerInfo_2_FD1_3290b631        ,  8U,                    3UL  /* PduR_CanIfRxIndication */, CANIF_MSG_TYPE_CAN       },  /* [PDU: TrailerInfo_2_FD1_oFD1_CAN_Rx_3abd61be, CanId: 0x47a]               */  /* [CanIfConf_CanIfRxPduCfg_TrailerInfo_2_FD1_oFD1_CAN_Rx_3abd61be] */
  { /*     8 */ PduRConf_PduRSrcPdu_SRC_Can_PT_TrailerAid_Data3_FD1_3290b631     ,  8U,                    3UL  /* PduR_CanIfRxIndication */, CANIF_MSG_TYPE_CAN       },  /* [PDU: TrailerAid_Data3_FD1_oFD1_CAN_Rx_3abd61be, CanId: 0x45c]            */  /* [CanIfConf_CanIfRxPduCfg_TrailerAid_Data3_FD1_oFD1_CAN_Rx_3abd61be] */
  { /*     9 */ PduRConf_PduRSrcPdu_SRC_Can_PT_TrailerAid_Data_FD1_3290b631      ,  8U,                    3UL  /* PduR_CanIfRxIndication */, CANIF_MSG_TYPE_CAN       },  /* [PDU: TrailerAid_Data_FD1_oFD1_CAN_Rx_3abd61be, CanId: 0x45a]             */  /* [CanIfConf_CanIfRxPduCfg_TrailerAid_Data_FD1_oFD1_CAN_Rx_3abd61be] */
  { /*    10 */ PduRConf_PduRSrcPdu_SRC_Can_PT_TrailerAid_Stat3_FD1_3290b631     ,  8U,                    3UL  /* PduR_CanIfRxIndication */, CANIF_MSG_TYPE_CAN       },  /* [PDU: TrailerAid_Stat3_FD1_oFD1_CAN_Rx_3abd61be, CanId: 0x459]            */  /* [CanIfConf_CanIfRxPduCfg_TrailerAid_Stat3_FD1_oFD1_CAN_Rx_3abd61be] */
  { /*    11 */ PduRConf_PduRSrcPdu_SRC_Can_PT_TrailerAid_Stat2_FD1_3290b631     ,  8U,                    3UL  /* PduR_CanIfRxIndication */, CANIF_MSG_TYPE_CAN       },  /* [PDU: TrailerAid_Stat2_FD1_oFD1_CAN_Rx_3abd61be, CanId: 0x457]            */  /* [CanIfConf_CanIfRxPduCfg_TrailerAid_Stat2_FD1_oFD1_CAN_Rx_3abd61be] */
  { /*    12 */ PduRConf_PduRSrcPdu_SRC_Can_PT_TrailerAid_Stat1_FD1_3290b631     ,  8U,                    3UL  /* PduR_CanIfRxIndication */, CANIF_MSG_TYPE_CAN       },  /* [PDU: TrailerAid_Stat1_FD1_oFD1_CAN_Rx_3abd61be, CanId: 0x452]            */  /* [CanIfConf_CanIfRxPduCfg_TrailerAid_Stat1_FD1_oFD1_CAN_Rx_3abd61be] */
  { /*    13 */ PduRConf_PduRSrcPdu_SRC_Can_PT_Image_Processing_Data_FD1_3290b631,  8U,                    3UL  /* PduR_CanIfRxIndication */, CANIF_MSG_TYPE_CAN       },  /* [PDU: Image_Processing_Data_FD1_oFD1_CAN_Rx_3abd61be, CanId: 0x451]       */  /* [CanIfConf_CanIfRxPduCfg_Image_Processing_Data_FD1_oFD1_CAN_Rx_3abd61be] */
  { /*    14 */ PduRConf_PduRSrcPdu_SRC_Can_PT_TrailerBrakeInfo_FD1_3290b631     ,  8U,                    3UL  /* PduR_CanIfRxIndication */, CANIF_MSG_TYPE_CAN       },  /* [PDU: TrailerBrakeInfo_FD1_oFD1_CAN_Rx_3abd61be, CanId: 0x445]            */  /* [CanIfConf_CanIfRxPduCfg_TrailerBrakeInfo_FD1_oFD1_CAN_Rx_3abd61be] */
  { /*    15 */ PduRConf_PduRSrcPdu_SRC_Can_PT_TrailerInfo_FD1_3290b631          ,  8U,                    3UL  /* PduR_CanIfRxIndication */, CANIF_MSG_TYPE_CAN       },  /* [PDU: TrailerInfo_FD1_oFD1_CAN_Rx_3abd61be, CanId: 0x443]                 */  /* [CanIfConf_CanIfRxPduCfg_TrailerInfo_FD1_oFD1_CAN_Rx_3abd61be] */
  { /*    16 */ PduRConf_PduRSrcPdu_SRC_Can_PT_Cluster_Info1_FD1_3290b631        ,  8U,                    3UL  /* PduR_CanIfRxIndication */, CANIF_MSG_TYPE_CAN       },  /* [PDU: Cluster_Info1_FD1_oFD1_CAN_Rx_3abd61be, CanId: 0x430]               */  /* [CanIfConf_CanIfRxPduCfg_Cluster_Info1_FD1_oFD1_CAN_Rx_3abd61be] */
  { /*    17 */ PduRConf_PduRSrcPdu_SRC_Can_PT_BrakeSysFeatures_3_3290b631       ,  8U,                    3UL  /* PduR_CanIfRxIndication */, CANIF_MSG_TYPE_CAN       },  /* [PDU: BrakeSysFeatures_3_oFD1_CAN_Rx_3abd61be, CanId: 0x41e]              */  /* [CanIfConf_CanIfRxPduCfg_BrakeSysFeatures_3_oFD1_CAN_Rx_3abd61be] */
  { /*    18 */ PduRConf_PduRSrcPdu_SRC_Can_PT_Climate_Control_Data_FD1_3290b631 ,  8U,                    3UL  /* PduR_CanIfRxIndication */, CANIF_MSG_TYPE_CAN       },  /* [PDU: Climate_Control_Data_FD1_oFD1_CAN_Rx_3abd61be, CanId: 0x41a]        */  /* [CanIfConf_CanIfRxPduCfg_Climate_Control_Data_FD1_oFD1_CAN_Rx_3abd61be] */
  { /*    19 */ PduRConf_PduRSrcPdu_SRC_Can_PT_BrakeSysFeatures_FD1_3290b631     ,  8U,                    3UL  /* PduR_CanIfRxIndication */, CANIF_MSG_TYPE_CAN       },  /* [PDU: BrakeSysFeatures_FD1_oFD1_CAN_Rx_3abd61be, CanId: 0x415]            */  /* [CanIfConf_CanIfRxPduCfg_BrakeSysFeatures_FD1_oFD1_CAN_Rx_3abd61be] */
  { /*    20 */ PduRConf_PduRSrcPdu_SRC_Can_PT_BrakeSnData_6_FD1_3290b631        ,  8U,                    3UL  /* PduR_CanIfRxIndication */, CANIF_MSG_TYPE_CAN       },  /* [PDU: BrakeSnData_6_FD1_oFD1_CAN_Rx_3abd61be, CanId: 0x414]               */  /* [CanIfConf_CanIfRxPduCfg_BrakeSnData_6_FD1_oFD1_CAN_Rx_3abd61be] */
  { /*    21 */ PduRConf_PduRSrcPdu_SRC_Can_PT_GGCC_Config_Mgmt_ID_1_FD1_3290b631,  8U,                    3UL  /* PduR_CanIfRxIndication */, CANIF_MSG_TYPE_CAN       },  /* [PDU: GGCC_Config_Mgmt_ID_1_FD1_oFD1_CAN_Rx_3abd61be, CanId: 0x40a]       */  /* [CanIfConf_CanIfRxPduCfg_GGCC_Config_Mgmt_ID_1_FD1_oFD1_CAN_Rx_3abd61be] */
  { /*    22 */ PduRConf_PduRSrcPdu_SRC_Can_PT_APIM_Send_Signals1_FD1_3290b631   ,  8U,                    3UL  /* PduR_CanIfRxIndication */, CANIF_MSG_TYPE_CAN       },  /* [PDU: APIM_Send_Signals1_FD1_oFD1_CAN_Rx_3abd61be, CanId: 0x3f1]          */  /* [CanIfConf_CanIfRxPduCfg_APIM_Send_Signals1_FD1_oFD1_CAN_Rx_3abd61be] */
  { /*    23 */ PduRConf_PduRSrcPdu_SRC_Can_PT_Steer_Assist_Data_FD1_3290b631    ,  8U,                    3UL  /* PduR_CanIfRxIndication */, CANIF_MSG_TYPE_CAN       },  /* [PDU: Steer_Assist_Data_FD1_oFD1_CAN_Rx_3abd61be, CanId: 0x3d7]           */  /* [CanIfConf_CanIfRxPduCfg_Steer_Assist_Data_FD1_oFD1_CAN_Rx_3abd61be] */
  { /*    24 */ PduRConf_PduRSrcPdu_SRC_Can_PT_LateralMotionControl_FD1_3290b631 ,  8U,                    3UL  /* PduR_CanIfRxIndication */, CANIF_MSG_TYPE_CAN       },  /* [PDU: LateralMotionControl_FD1_oFD1_CAN_Rx_3abd61be, CanId: 0x3d3]        */  /* [CanIfConf_CanIfRxPduCfg_LateralMotionControl_FD1_oFD1_CAN_Rx_3abd61be] */
  { /*    25 */ PduRConf_PduRSrcPdu_SRC_Can_PT_Lane_Assist_Data1_FD1_3290b631    ,  8U,                    3UL  /* PduR_CanIfRxIndication */, CANIF_MSG_TYPE_CAN       },  /* [PDU: Lane_Assist_Data1_FD1_oFD1_CAN_Rx_3abd61be, CanId: 0x3ca]           */  /* [CanIfConf_CanIfRxPduCfg_Lane_Assist_Data1_FD1_oFD1_CAN_Rx_3abd61be] */
  { /*    26 */ PduRConf_PduRSrcPdu_SRC_Can_PT_BodyInfo_3_FD1_3290b631           ,  8U,                    3UL  /* PduR_CanIfRxIndication */, CANIF_MSG_TYPE_CAN       },  /* [PDU: BodyInfo_3_FD1_oFD1_CAN_Rx_3abd61be, CanId: 0x3b3]                  */  /* [CanIfConf_CanIfRxPduCfg_BodyInfo_3_FD1_oFD1_CAN_Rx_3abd61be] */
  { /*    27 */ PduRConf_PduRSrcPdu_SRC_Can_PT_ParkAid_Data_FD1_3290b631         ,  8U,                    3UL  /* PduR_CanIfRxIndication */, CANIF_MSG_TYPE_CAN       },  /* [PDU: ParkAid_Data_FD1_oFD1_CAN_Rx_3abd61be, CanId: 0x3a8]                */  /* [CanIfConf_CanIfRxPduCfg_ParkAid_Data_FD1_oFD1_CAN_Rx_3abd61be] */
  { /*    28 */ PduRConf_PduRSrcPdu_SRC_Can_PT_Mc_Send_Signals_2_FD1_3290b631    ,  8U,                    3UL  /* PduR_CanIfRxIndication */, CANIF_MSG_TYPE_CAN       },  /* [PDU: Mc_Send_Signals_2_FD1_oFD1_CAN_Rx_3abd61be, CanId: 0x2fd]           */  /* [CanIfConf_CanIfRxPduCfg_Mc_Send_Signals_2_FD1_oFD1_CAN_Rx_3abd61be] */
  { /*    29 */ PduRConf_PduRSrcPdu_SRC_Can_PT_Body_Info_4_FD1_3290b631          ,  8U,                    3UL  /* PduR_CanIfRxIndication */, CANIF_MSG_TYPE_CAN       },  /* [PDU: Body_Info_4_FD1_oFD1_CAN_Rx_3abd61be, CanId: 0x242]                 */  /* [CanIfConf_CanIfRxPduCfg_Body_Info_4_FD1_oFD1_CAN_Rx_3abd61be] */
  { /*    30 */ PduRConf_PduRSrcPdu_SRC_Can_PT_TransGearData_FD1_3290b631        ,  8U,                    3UL  /* PduR_CanIfRxIndication */, CANIF_MSG_TYPE_CAN       },  /* [PDU: TransGearData_FD1_oFD1_CAN_Rx_3abd61be, CanId: 0x230]               */  /* [CanIfConf_CanIfRxPduCfg_TransGearData_FD1_oFD1_CAN_Rx_3abd61be] */
  { /*    31 */ PduRConf_PduRSrcPdu_SRC_Can_PT_WheelSpeed_FD1_3290b631           ,  8U,                    3UL  /* PduR_CanIfRxIndication */, CANIF_MSG_TYPE_CAN       },  /* [PDU: WheelSpeed_FD1_oFD1_CAN_Rx_3abd61be, CanId: 0x217]                  */  /* [CanIfConf_CanIfRxPduCfg_WheelSpeed_FD1_oFD1_CAN_Rx_3abd61be] */
  { /*    32 */ PduRConf_PduRSrcPdu_SRC_Can_PT_WheelData_FD1_3290b631            ,  8U,                    3UL  /* PduR_CanIfRxIndication */, CANIF_MSG_TYPE_CAN       },  /* [PDU: WheelData_FD1_oFD1_CAN_Rx_3abd61be, CanId: 0x216]                   */  /* [CanIfConf_CanIfRxPduCfg_WheelData_FD1_oFD1_CAN_Rx_3abd61be] */
  { /*    33 */ PduRConf_PduRSrcPdu_SRC_Can_PT_APIM_Send_Signals_2_FD1_3290b631  ,  8U,                    3UL  /* PduR_CanIfRxIndication */, CANIF_MSG_TYPE_CAN       },  /* [PDU: APIM_Send_Signals_2_FD1_oFD1_CAN_Rx_3abd61be, CanId: 0x215]         */  /* [CanIfConf_CanIfRxPduCfg_APIM_Send_Signals_2_FD1_oFD1_CAN_Rx_3abd61be] */
  { /*    34 */ PduRConf_PduRSrcPdu_SRC_Can_PT_DesiredTorqBrk_FD1_3290b631       ,  8U,                    3UL  /* PduR_CanIfRxIndication */, CANIF_MSG_TYPE_CAN       },  /* [PDU: DesiredTorqBrk_FD1_oFD1_CAN_Rx_3abd61be, CanId: 0x213]              */  /* [CanIfConf_CanIfRxPduCfg_DesiredTorqBrk_FD1_oFD1_CAN_Rx_3abd61be] */
  { /*    35 */ PduRConf_PduRSrcPdu_SRC_Can_PT_EngVehicleSpThrottle_FD1_3290b631 ,  8U,                    3UL  /* PduR_CanIfRxIndication */, CANIF_MSG_TYPE_CAN       },  /* [PDU: EngVehicleSpThrottle_FD1_oFD1_CAN_Rx_3abd61be, CanId: 0x204]        */  /* [CanIfConf_CanIfRxPduCfg_EngVehicleSpThrottle_FD1_oFD1_CAN_Rx_3abd61be] */
  { /*    36 */ PduRConf_PduRSrcPdu_SRC_Can_PT_EngVehicleSpThrottle2_FD1_3290b631,  8U,                    3UL  /* PduR_CanIfRxIndication */, CANIF_MSG_TYPE_CAN       },  /* [PDU: EngVehicleSpThrottle2_FD1_oFD1_CAN_Rx_3abd61be, CanId: 0x202]       */  /* [CanIfConf_CanIfRxPduCfg_EngVehicleSpThrottle2_FD1_oFD1_CAN_Rx_3abd61be] */
  { /*    37 */ PduRConf_PduRSrcPdu_SRC_Can_PT_PowertrainData_10_FD1_3290b631    ,  8U,                    3UL  /* PduR_CanIfRxIndication */, CANIF_MSG_TYPE_CAN       },  /* [PDU: PowertrainData_10_FD1_oFD1_CAN_Rx_3abd61be, CanId: 0x176]           */  /* [CanIfConf_CanIfRxPduCfg_PowertrainData_10_FD1_oFD1_CAN_Rx_3abd61be] */
  { /*    38 */ PduRConf_PduRSrcPdu_SRC_Can_PT_VehicleOperatingModes_FD1_3290b631,  8U,                    3UL  /* PduR_CanIfRxIndication */, CANIF_MSG_TYPE_CAN       },  /* [PDU: VehicleOperatingModes_FD1_oFD1_CAN_Rx_3abd61be, CanId: 0x167]       */  /* [CanIfConf_CanIfRxPduCfg_VehicleOperatingModes_FD1_oFD1_CAN_Rx_3abd61be] */
  { /*    39 */ PduRConf_PduRSrcPdu_SRC_Can_PT_EngBrakeData_FD1_3290b631         ,  8U,                    3UL  /* PduR_CanIfRxIndication */, CANIF_MSG_TYPE_CAN       },  /* [PDU: EngBrakeData_FD1_oFD1_CAN_Rx_3abd61be, CanId: 0x165]                */  /* [CanIfConf_CanIfRxPduCfg_EngBrakeData_FD1_oFD1_CAN_Rx_3abd61be] */
  { /*    40 */ PduRConf_PduRSrcPdu_SRC_Can_PT_Yaw_Data_FD1_3290b631             ,  8U,                    3UL  /* PduR_CanIfRxIndication */, CANIF_MSG_TYPE_CAN       },  /* [PDU: Yaw_Data_FD1_oFD1_CAN_Rx_3abd61be, CanId: 0x91]                     */  /* [CanIfConf_CanIfRxPduCfg_Yaw_Data_FD1_oFD1_CAN_Rx_3abd61be] */
  { /*    41 */ PduRConf_PduRSrcPdu_SRC_Can_PT_ActiveFrontStrg_Stat2_FD1_3290b631,  8U,                    3UL  /* PduR_CanIfRxIndication */, CANIF_MSG_TYPE_CAN       },  /* [PDU: ActiveFrontStrg_Stat2_FD1_oFD1_CAN_Rx_3abd61be, CanId: 0x8a]        */  /* [CanIfConf_CanIfRxPduCfg_ActiveFrontStrg_Stat2_FD1_oFD1_CAN_Rx_3abd61be] */
  { /*    42 */ PduRConf_PduRSrcPdu_SRC_Can_PT_Steering_Data_FD1_3290b631        ,  8U,                    3UL  /* PduR_CanIfRxIndication */, CANIF_MSG_TYPE_CAN       },  /* [PDU: Steering_Data_FD1_oFD1_CAN_Rx_3abd61be, CanId: 0x83]                */  /* [CanIfConf_CanIfRxPduCfg_Steering_Data_FD1_oFD1_CAN_Rx_3abd61be] */
  { /*    43 */ PduRConf_PduRSrcPdu_SRC_Can_PT_BrakeSnData_4_FD1_3290b631        ,  8U,                    3UL  /* PduR_CanIfRxIndication */, CANIF_MSG_TYPE_CAN       },  /* [PDU: BrakeSnData_4_FD1_oFD1_CAN_Rx_3abd61be, CanId: 0x7d]                */  /* [CanIfConf_CanIfRxPduCfg_BrakeSnData_4_FD1_oFD1_CAN_Rx_3abd61be] */
  { /*    44 */ PduRConf_PduRSrcPdu_SRC_Can_PT_BrakeSnData_3_FD1_3290b631        ,  8U,                    3UL  /* PduR_CanIfRxIndication */, CANIF_MSG_TYPE_CAN       },  /* [PDU: BrakeSnData_3_FD1_oFD1_CAN_Rx_3abd61be, CanId: 0x77]                */  /* [CanIfConf_CanIfRxPduCfg_BrakeSnData_3_FD1_oFD1_CAN_Rx_3abd61be] */
  { /*    45 */ PduRConf_PduRSrcPdu_SRC_Can_PT_BrakeSnData_5_FD1_3290b631        ,  8U,                    3UL  /* PduR_CanIfRxIndication */, CANIF_MSG_TYPE_CAN       }   /* [PDU: BrakeSnData_5_FD1_oFD1_CAN_Rx_3abd61be, CanId: 0x76]                */  /* [CanIfConf_CanIfRxPduCfg_BrakeSnData_5_FD1_oFD1_CAN_Rx_3abd61be] */
};
#define CANIF_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  CanIf_RxPduMask
**********************************************************************************************************************/
/** 
  \var    CanIf_RxPduMask
  \brief  Rx-PDU: CAN identifier mask.
*/ 
#define CANIF_START_SEC_CONST_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(CanIf_RxPduMaskType, CANIF_CONST) CanIf_RxPduMask[46] = {
  /* Index    RxPduMask                                                              */
  /*     0 */   0x47FFU  /* TesterFunctionalReq_FD1_Tp_oFD1_CAN_Rx_3abd61be */     ,
  /*     1 */   0x07FFU  /* TesterFunctionalReq_FD1_Tp_oFD1_CAN_20_Rx_3abd61be */  ,
  /*     2 */   0x07FFU  /* TesterPhysicalReqPSCM_FD1_Tp_oFD1_CAN_Rx_3abd61be */   ,
  /*     3 */   0x07FFU  /* TesterPhysicalReqPSCM_FD1_Tp_oFD1_CAN_20_Rx_3abd61be */,
  /*     4 */   0x07FFU  /* Xcp_CRO_Msg_oFD1_CAN_Rx_3abd61be */                    ,
  /*     5 */   0x47FFU  /* CanIfRxPduCfg_Nm_Dummy */                              ,
  /*     6 */   0x47FFU  /* ABS_BrkBst_Data_FD1_oFD1_CAN_Rx_3abd61be */            ,
  /*     7 */   0x47FFU  /* TrailerInfo_2_FD1_oFD1_CAN_Rx_3abd61be */              ,
  /*     8 */   0x47FFU  /* TrailerAid_Data3_FD1_oFD1_CAN_Rx_3abd61be */           ,
  /*     9 */   0x47FFU  /* TrailerAid_Data_FD1_oFD1_CAN_Rx_3abd61be */            ,
  /*    10 */   0x47FFU  /* TrailerAid_Stat3_FD1_oFD1_CAN_Rx_3abd61be */           ,
  /*    11 */   0x47FFU  /* TrailerAid_Stat2_FD1_oFD1_CAN_Rx_3abd61be */           ,
  /*    12 */   0x47FFU  /* TrailerAid_Stat1_FD1_oFD1_CAN_Rx_3abd61be */           ,
  /*    13 */   0x47FFU  /* Image_Processing_Data_FD1_oFD1_CAN_Rx_3abd61be */      ,
  /*    14 */   0x47FFU  /* TrailerBrakeInfo_FD1_oFD1_CAN_Rx_3abd61be */           ,
  /*    15 */   0x47FFU  /* TrailerInfo_FD1_oFD1_CAN_Rx_3abd61be */                ,
  /*    16 */   0x47FFU  /* Cluster_Info1_FD1_oFD1_CAN_Rx_3abd61be */              ,
  /*    17 */   0x47FFU  /* BrakeSysFeatures_3_oFD1_CAN_Rx_3abd61be */             ,
  /*    18 */   0x47FFU  /* Climate_Control_Data_FD1_oFD1_CAN_Rx_3abd61be */       ,
  /*    19 */   0x47FFU  /* BrakeSysFeatures_FD1_oFD1_CAN_Rx_3abd61be */           ,
  /*    20 */   0x47FFU  /* BrakeSnData_6_FD1_oFD1_CAN_Rx_3abd61be */              ,
  /*    21 */   0x47FFU  /* GGCC_Config_Mgmt_ID_1_FD1_oFD1_CAN_Rx_3abd61be */      ,
  /*    22 */   0x47FFU  /* APIM_Send_Signals1_FD1_oFD1_CAN_Rx_3abd61be */         ,
  /*    23 */   0x47FFU  /* Steer_Assist_Data_FD1_oFD1_CAN_Rx_3abd61be */          ,
  /*    24 */   0x47FFU  /* LateralMotionControl_FD1_oFD1_CAN_Rx_3abd61be */       ,
  /*    25 */   0x47FFU  /* Lane_Assist_Data1_FD1_oFD1_CAN_Rx_3abd61be */          ,
  /*    26 */   0x47FFU  /* BodyInfo_3_FD1_oFD1_CAN_Rx_3abd61be */                 ,
  /*    27 */   0x47FFU  /* ParkAid_Data_FD1_oFD1_CAN_Rx_3abd61be */               ,
  /*    28 */   0x47FFU  /* Mc_Send_Signals_2_FD1_oFD1_CAN_Rx_3abd61be */          ,
  /*    29 */   0x47FFU  /* Body_Info_4_FD1_oFD1_CAN_Rx_3abd61be */                ,
  /*    30 */   0x47FFU  /* TransGearData_FD1_oFD1_CAN_Rx_3abd61be */              ,
  /*    31 */   0x47FFU  /* WheelSpeed_FD1_oFD1_CAN_Rx_3abd61be */                 ,
  /*    32 */   0x47FFU  /* WheelData_FD1_oFD1_CAN_Rx_3abd61be */                  ,
  /*    33 */   0x47FFU  /* APIM_Send_Signals_2_FD1_oFD1_CAN_Rx_3abd61be */        ,
  /*    34 */   0x47FFU  /* DesiredTorqBrk_FD1_oFD1_CAN_Rx_3abd61be */             ,
  /*    35 */   0x47FFU  /* EngVehicleSpThrottle_FD1_oFD1_CAN_Rx_3abd61be */       ,
  /*    36 */   0x47FFU  /* EngVehicleSpThrottle2_FD1_oFD1_CAN_Rx_3abd61be */      ,
  /*    37 */   0x47FFU  /* PowertrainData_10_FD1_oFD1_CAN_Rx_3abd61be */          ,
  /*    38 */   0x47FFU  /* VehicleOperatingModes_FD1_oFD1_CAN_Rx_3abd61be */      ,
  /*    39 */   0x47FFU  /* EngBrakeData_FD1_oFD1_CAN_Rx_3abd61be */               ,
  /*    40 */   0x47FFU  /* Yaw_Data_FD1_oFD1_CAN_Rx_3abd61be */                   ,
  /*    41 */   0x47FFU  /* ActiveFrontStrg_Stat2_FD1_oFD1_CAN_Rx_3abd61be */      ,
  /*    42 */   0x47FFU  /* Steering_Data_FD1_oFD1_CAN_Rx_3abd61be */              ,
  /*    43 */   0x47FFU  /* BrakeSnData_4_FD1_oFD1_CAN_Rx_3abd61be */              ,
  /*    44 */   0x47FFU  /* BrakeSnData_3_FD1_oFD1_CAN_Rx_3abd61be */              ,
  /*    45 */   0x47FFU  /* BrakeSnData_5_FD1_oFD1_CAN_Rx_3abd61be */              
};
#define CANIF_STOP_SEC_CONST_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  CanIf_TxBufferPrioByCanIdByteQueueConfig
**********************************************************************************************************************/
/** 
  \var    CanIf_TxBufferPrioByCanIdByteQueueConfig
  \brief  Tx-buffer: PRIO_BY_CANID as BYTE_QUEUE
  \details
  Element                                             Description
  TxBufferPrioByCanIdBaseIdx                          the index of the 1:1 relation pointing to CanIf_TxBufferPrioByCanIdBase
  TxBufferPrioByCanIdByteQueueMappedTxPdusEndIdx      the end index of the 1:n relation pointing to CanIf_TxBufferPrioByCanIdByteQueueMappedTxPdus
  TxBufferPrioByCanIdByteQueueMappedTxPdusLength      the number of relations pointing to CanIf_TxBufferPrioByCanIdByteQueueMappedTxPdus
  TxBufferPrioByCanIdByteQueueMappedTxPdusStartIdx    the start index of the 1:n relation pointing to CanIf_TxBufferPrioByCanIdByteQueueMappedTxPdus
*/ 
#define CANIF_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(CanIf_TxBufferPrioByCanIdByteQueueConfigType, CANIF_CONST) CanIf_TxBufferPrioByCanIdByteQueueConfig[1] = {
    /* Index    TxBufferPrioByCanIdBaseIdx                                                                       TxBufferPrioByCanIdByteQueueMappedTxPdusEndIdx                                                                       TxBufferPrioByCanIdByteQueueMappedTxPdusLength                                                                       TxBufferPrioByCanIdByteQueueMappedTxPdusStartIdx                                                                             Referable Keys */
  { /*     0 */                        0UL  /* /ActiveEcuC/CanIf/CanIfInitCfg/CanIfBufferCfg_Tx_Std_3290b631 */,                                            8UL  /* /ActiveEcuC/CanIf/CanIfInitCfg/CanIfBufferCfg_Tx_Std_3290b631 */,                                            8UL  /* /ActiveEcuC/CanIf/CanIfInitCfg/CanIfBufferCfg_Tx_Std_3290b631 */,                                              0UL  /* /ActiveEcuC/CanIf/CanIfInitCfg/CanIfBufferCfg_Tx_Std_3290b631 */ }   /* [/ActiveEcuC/CanIf/CanIfInitCfg/CanIfBufferCfg_Tx_Std_3290b631] */
};
#define CANIF_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  CanIf_TxBufferPrioByCanIdByteQueueMappedTxPdus
**********************************************************************************************************************/
/** 
  \var    CanIf_TxBufferPrioByCanIdByteQueueMappedTxPdus
  \brief  Tx-buffer: PRIO_BY_CANID as BYTE_QUEUE: Mapped Tx-PDUs
  \details
  Element           Description
  TxPduConfigIdx    the index of the 1:1 relation pointing to CanIf_TxPduConfig
*/ 
#define CANIF_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(CanIf_TxBufferPrioByCanIdByteQueueMappedTxPdusType, CANIF_CONST) CanIf_TxBufferPrioByCanIdByteQueueMappedTxPdus[8] = {
    /* Index    TxPduConfigIdx                                                                                                   Referable Keys */
  { /*     0 */            0UL  /* /ActiveEcuC/CanIf/CanIfInitCfg/TesterPhysicalResPSCM_FD1_Tp_oFD1_CAN_Tx_3abd61be */    },  /* [/ActiveEcuC/CanIf/CanIfInitCfg/CanIfBufferCfg_Tx_Std_3290b631] */
  { /*     1 */            1UL  /* /ActiveEcuC/CanIf/CanIfInitCfg/TesterPhysicalResPSCM_FD1_Tp_oFD1_CAN_20_Tx_3abd61be */ },  /* [/ActiveEcuC/CanIf/CanIfInitCfg/CanIfBufferCfg_Tx_Std_3290b631] */
  { /*     2 */            2UL  /* /ActiveEcuC/CanIf/CanIfInitCfg/Xcp_DTO_Msg_oFD1_CAN_Tx_3abd61be */                     },  /* [/ActiveEcuC/CanIf/CanIfInitCfg/CanIfBufferCfg_Tx_Std_3290b631] */
  { /*     3 */            3UL  /* /ActiveEcuC/CanIf/CanIfInitCfg/PSCM_AutoSar_NetwrkMgt_FD1_oFD1_CAN_Tx_3abd61be */      },  /* [/ActiveEcuC/CanIf/CanIfInitCfg/CanIfBufferCfg_Tx_Std_3290b631] */
  { /*     4 */            4UL  /* /ActiveEcuC/CanIf/CanIfInitCfg/TrailerAid_Data2_FD1_oFD1_CAN_Tx_3abd61be */            },  /* [/ActiveEcuC/CanIf/CanIfInitCfg/CanIfBufferCfg_Tx_Std_3290b631] */
  { /*     5 */            5UL  /* /ActiveEcuC/CanIf/CanIfInitCfg/Lane_Assist_Data3_FD1_oFD1_CAN_Tx_3abd61be */           },  /* [/ActiveEcuC/CanIf/CanIfInitCfg/CanIfBufferCfg_Tx_Std_3290b631] */
  { /*     6 */            6UL  /* /ActiveEcuC/CanIf/CanIfInitCfg/EPAS_INFO_FD1_oFD1_CAN_Tx_3abd61be */                   },  /* [/ActiveEcuC/CanIf/CanIfInitCfg/CanIfBufferCfg_Tx_Std_3290b631] */
  { /*     7 */            7UL  /* /ActiveEcuC/CanIf/CanIfInitCfg/SteeringPinion_Data_FD1_oFD1_CAN_Tx_3abd61be */         }   /* [/ActiveEcuC/CanIf/CanIfInitCfg/CanIfBufferCfg_Tx_Std_3290b631] */
};
#define CANIF_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  CanIf_TxConfirmationFctList
**********************************************************************************************************************/
/** 
  \var    CanIf_TxConfirmationFctList
  \brief  Tx confirmation functions table.
*/ 
#define CANIF_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(CanIf_TxConfirmationFctType, CANIF_CONST) CanIf_TxConfirmationFctList[5] = {
  /* Index    TxConfirmationFctList                      Referable Keys */
  /*     0 */(CanIf_TxConfirmationFctType)NULL_PTR ,  /* [NULL_PTR] */
  /*     1 */CanNm_TxConfirmation                  ,  /* [CanNm_TxConfirmation] */
  /*     2 */CanTp_TxConfirmation                  ,  /* [CanTp_TxConfirmation] */
  /*     3 */PduR_CanIfTxConfirmation              ,  /* [PduR_CanIfTxConfirmation] */
  /*     4 */Xcp_CanIfTxConfirmation                  /* [Xcp_CanIfTxConfirmation] */
};
#define CANIF_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  CanIf_TxPduConfigECU1
**********************************************************************************************************************/
/** 
  \var    CanIf_TxPduConfigECU1
  \brief  Tx-PDUs - configuration.
  \details
  Element                     Description
  CanId                       CAN identifier (16bit / 32bit).
  UpperLayerTxPduId           Upper layer handle ID (8bit / 16bit).
  CtrlStatesIdx               the index of the 1:1 relation pointing to CanIf_CtrlStates
  Dlc                         Data length code.
  MailBoxConfigIdx            the index of the 1:1 relation pointing to CanIf_MailBoxConfig
  TxConfirmationFctListIdx    the index of the 1:1 relation pointing to CanIf_TxConfirmationFctList
*/ 
#define CANIF_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(CanIf_TxPduConfigType, CANIF_CONST) CanIf_TxPduConfigECU1[8] = {
    /* Index    CanId    UpperLayerTxPduId                                                 CtrlStatesIdx                                                   Dlc                                MailBoxConfigIdx                                                                 TxConfirmationFctListIdx                                        Comment                                                                 Referable Keys */
  { /*     0 */ 0x4738U, CanTpConf_CanTpTxNPdu_CanTpTxNPdu_a3000bfc                      ,           0UL  /* /ActiveEcuC/CanIf/Can/CT_FD1_CAN_b4e1ca3b */, 64U  /* PduLength + Paddings,  */,              0UL  /* /ActiveEcuC/Can/CanConfigSet/CN_FD1_CAN_b4e1ca3b_Tx_Std */,                      2UL  /* CanTp_TxConfirmation */     },  /* [PDU: TesterPhysicalResPSCM_FD1_Tp_oFD1_CAN_Tx_3abd61be]    */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/TesterPhysicalResPSCM_FD1_Tp_oFD1_CAN_Tx_3abd61be] */
  { /*     1 */ 0x0738U, CanTpConf_CanTpTxNPdu_CanTpTxNPdu_d4315ea8                      ,           0UL  /* /ActiveEcuC/CanIf/Can/CT_FD1_CAN_b4e1ca3b */,  8U  /* PduLength + Paddings,  */,              0UL  /* /ActiveEcuC/Can/CanConfigSet/CN_FD1_CAN_b4e1ca3b_Tx_Std */,                      2UL  /* CanTp_TxConfirmation */     },  /* [PDU: TesterPhysicalResPSCM_FD1_Tp_oFD1_CAN_20_Tx_3abd61be] */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/TesterPhysicalResPSCM_FD1_Tp_oFD1_CAN_20_Tx_3abd61be] */
  { /*     2 */ 0x060BU, XcpConf_XcpTxPdu_Xcp_DTO_Msg_oFD1_CAN_3abd61be                  ,           0UL  /* /ActiveEcuC/CanIf/Can/CT_FD1_CAN_b4e1ca3b */,  8U  /* PduLength + Paddings,  */,              0UL  /* /ActiveEcuC/Can/CanConfigSet/CN_FD1_CAN_b4e1ca3b_Tx_Std */,                      4UL  /* Xcp_CanIfTxConfirmation */  },  /* [PDU: Xcp_DTO_Msg_oFD1_CAN_Tx_3abd61be]                     */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/Xcp_DTO_Msg_oFD1_CAN_Tx_3abd61be] */
  { /*     3 */ 0x45B5U, CanNmConf_CanNmTxPdu_CanNmTxPdu                                 ,           0UL  /* /ActiveEcuC/CanIf/Can/CT_FD1_CAN_b4e1ca3b */,  8U  /* PduLength + Paddings,  */,              0UL  /* /ActiveEcuC/Can/CanConfigSet/CN_FD1_CAN_b4e1ca3b_Tx_Std */,                      1UL  /* CanNm_TxConfirmation */     },  /* [PDU: PSCM_AutoSar_NetwrkMgt_FD1_oFD1_CAN_Tx_3abd61be]      */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/PSCM_AutoSar_NetwrkMgt_FD1_oFD1_CAN_Tx_3abd61be] */
  { /*     4 */ 0x4417U, PduRConf_PduRDestPdu_DST_Can_PT_TrailerAid_Data2_FD1_3290b631   ,           0UL  /* /ActiveEcuC/CanIf/Can/CT_FD1_CAN_b4e1ca3b */,  8U  /* PduLength + Paddings,  */,              0UL  /* /ActiveEcuC/Can/CanConfigSet/CN_FD1_CAN_b4e1ca3b_Tx_Std */,                      3UL  /* PduR_CanIfTxConfirmation */ },  /* [PDU: TrailerAid_Data2_FD1_oFD1_CAN_Tx_3abd61be]            */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/TrailerAid_Data2_FD1_oFD1_CAN_Tx_3abd61be] */
  { /*     5 */ 0x43CCU, PduRConf_PduRDestPdu_DST_Can_PT_Lane_Assist_Data3_FD1_3290b631  ,           0UL  /* /ActiveEcuC/CanIf/Can/CT_FD1_CAN_b4e1ca3b */,  8U  /* PduLength + Paddings,  */,              0UL  /* /ActiveEcuC/Can/CanConfigSet/CN_FD1_CAN_b4e1ca3b_Tx_Std */,                      3UL  /* PduR_CanIfTxConfirmation */ },  /* [PDU: Lane_Assist_Data3_FD1_oFD1_CAN_Tx_3abd61be]           */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/Lane_Assist_Data3_FD1_oFD1_CAN_Tx_3abd61be] */
  { /*     6 */ 0x4082U, PduRConf_PduRDestPdu_DST_Can_PT_EPAS_INFO_FD1_3290b631          ,           0UL  /* /ActiveEcuC/CanIf/Can/CT_FD1_CAN_b4e1ca3b */,  8U  /* PduLength + Paddings,  */,              0UL  /* /ActiveEcuC/Can/CanConfigSet/CN_FD1_CAN_b4e1ca3b_Tx_Std */,                      3UL  /* PduR_CanIfTxConfirmation */ },  /* [PDU: EPAS_INFO_FD1_oFD1_CAN_Tx_3abd61be]                   */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/EPAS_INFO_FD1_oFD1_CAN_Tx_3abd61be] */
  { /*     7 */ 0x407EU, PduRConf_PduRDestPdu_DST_Can_PT_SteeringPinion_Data_FD1_3290b631,           0UL  /* /ActiveEcuC/CanIf/Can/CT_FD1_CAN_b4e1ca3b */,  8U  /* PduLength + Paddings,  */,              0UL  /* /ActiveEcuC/Can/CanConfigSet/CN_FD1_CAN_b4e1ca3b_Tx_Std */,                      0UL  /* NULL_PTR */                 }   /* [PDU: SteeringPinion_Data_FD1_oFD1_CAN_Tx_3abd61be]         */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/SteeringPinion_Data_FD1_oFD1_CAN_Tx_3abd61be] */
};
#define CANIF_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  CanIf_TxPduConfigECU2
**********************************************************************************************************************/
/** 
  \var    CanIf_TxPduConfigECU2
  \brief  Tx-PDUs - configuration.
  \details
  Element                     Description
  CanId                       CAN identifier (16bit / 32bit).
  UpperLayerTxPduId           Upper layer handle ID (8bit / 16bit).
  CtrlStatesIdx               the index of the 1:1 relation pointing to CanIf_CtrlStates
  Dlc                         Data length code.
  MailBoxConfigIdx            the index of the 1:1 relation pointing to CanIf_MailBoxConfig
  TxConfirmationFctListIdx    the index of the 1:1 relation pointing to CanIf_TxConfirmationFctList
*/ 
#define CANIF_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(CanIf_TxPduConfigType, CANIF_CONST) CanIf_TxPduConfigECU2[8] = {
    /* Index    CanId    UpperLayerTxPduId                                                 CtrlStatesIdx                                                   Dlc                                MailBoxConfigIdx                                                                 TxConfirmationFctListIdx                                        Comment                                                                 Referable Keys */
  { /*     0 */ 0x46B5U, CanNmConf_CanNmTxPdu_CanNmTxPdu                                 ,           0UL  /* /ActiveEcuC/CanIf/Can/CT_FD1_CAN_b4e1ca3b */,  8U  /* PduLength + Paddings,  */,              0UL  /* /ActiveEcuC/Can/CanConfigSet/CN_FD1_CAN_b4e1ca3b_Tx_Std */,                      1UL  /* CanNm_TxConfirmation */     },  /* [PDU: PSCM_AutoSar_NetwrkMgt_FD1_oFD1_CAN_Tx_3abd61be]      */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/PSCM_AutoSar_NetwrkMgt_FD1_oFD1_CAN_Tx_3abd61be] */
  { /*     1 */ 0x0661U, XcpConf_XcpTxPdu_Xcp_DTO_Msg_oFD1_CAN_3abd61be                  ,           0UL  /* /ActiveEcuC/CanIf/Can/CT_FD1_CAN_b4e1ca3b */,  8U  /* PduLength + Paddings,  */,              0UL  /* /ActiveEcuC/Can/CanConfigSet/CN_FD1_CAN_b4e1ca3b_Tx_Std */,                      4UL  /* Xcp_CanIfTxConfirmation */  },  /* [PDU: Xcp_DTO_Msg_oFD1_CAN_Tx_3abd61be]                     */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/Xcp_DTO_Msg_oFD1_CAN_Tx_3abd61be] */
  { /*     2 */ 0x465FU, CanTpConf_CanTpTxNPdu_CanTpTxNPdu_a3000bfc                      ,           0UL  /* /ActiveEcuC/CanIf/Can/CT_FD1_CAN_b4e1ca3b */, 64U  /* PduLength + Paddings,  */,              0UL  /* /ActiveEcuC/Can/CanConfigSet/CN_FD1_CAN_b4e1ca3b_Tx_Std */,                      2UL  /* CanTp_TxConfirmation */     },  /* [PDU: TesterPhysicalResPSCM_FD1_Tp_oFD1_CAN_Tx_3abd61be]    */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/TesterPhysicalResPSCM_FD1_Tp_oFD1_CAN_Tx_3abd61be] */
  { /*     3 */ 0x065FU, CanTpConf_CanTpTxNPdu_CanTpTxNPdu_d4315ea8                      ,           0UL  /* /ActiveEcuC/CanIf/Can/CT_FD1_CAN_b4e1ca3b */,  8U  /* PduLength + Paddings,  */,              0UL  /* /ActiveEcuC/Can/CanConfigSet/CN_FD1_CAN_b4e1ca3b_Tx_Std */,                      2UL  /* CanTp_TxConfirmation */     },  /* [PDU: TesterPhysicalResPSCM_FD1_Tp_oFD1_CAN_20_Tx_3abd61be] */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/TesterPhysicalResPSCM_FD1_Tp_oFD1_CAN_20_Tx_3abd61be] */
  { /*     4 */ 0x4517U, PduRConf_PduRDestPdu_DST_Can_PT_TrailerAid_Data2_FD1_3290b631   ,           0UL  /* /ActiveEcuC/CanIf/Can/CT_FD1_CAN_b4e1ca3b */,  8U  /* PduLength + Paddings,  */,              0UL  /* /ActiveEcuC/Can/CanConfigSet/CN_FD1_CAN_b4e1ca3b_Tx_Std */,                      3UL  /* PduR_CanIfTxConfirmation */ },  /* [PDU: TrailerAid_Data2_FD1_oFD1_CAN_Tx_3abd61be]            */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/TrailerAid_Data2_FD1_oFD1_CAN_Tx_3abd61be] */
  { /*     5 */ 0x44CCU, PduRConf_PduRDestPdu_DST_Can_PT_Lane_Assist_Data3_FD1_3290b631  ,           0UL  /* /ActiveEcuC/CanIf/Can/CT_FD1_CAN_b4e1ca3b */,  8U  /* PduLength + Paddings,  */,              0UL  /* /ActiveEcuC/Can/CanConfigSet/CN_FD1_CAN_b4e1ca3b_Tx_Std */,                      3UL  /* PduR_CanIfTxConfirmation */ },  /* [PDU: Lane_Assist_Data3_FD1_oFD1_CAN_Tx_3abd61be]           */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/Lane_Assist_Data3_FD1_oFD1_CAN_Tx_3abd61be] */
  { /*     6 */ 0x4182U, PduRConf_PduRDestPdu_DST_Can_PT_EPAS_INFO_FD1_3290b631          ,           0UL  /* /ActiveEcuC/CanIf/Can/CT_FD1_CAN_b4e1ca3b */,  8U  /* PduLength + Paddings,  */,              0UL  /* /ActiveEcuC/Can/CanConfigSet/CN_FD1_CAN_b4e1ca3b_Tx_Std */,                      3UL  /* PduR_CanIfTxConfirmation */ },  /* [PDU: EPAS_INFO_FD1_oFD1_CAN_Tx_3abd61be]                   */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/EPAS_INFO_FD1_oFD1_CAN_Tx_3abd61be] */
  { /*     7 */ 0x417EU, PduRConf_PduRDestPdu_DST_Can_PT_SteeringPinion_Data_FD1_3290b631,           0UL  /* /ActiveEcuC/CanIf/Can/CT_FD1_CAN_b4e1ca3b */,  8U  /* PduLength + Paddings,  */,              0UL  /* /ActiveEcuC/Can/CanConfigSet/CN_FD1_CAN_b4e1ca3b_Tx_Std */,                      0UL  /* NULL_PTR */                 }   /* [PDU: SteeringPinion_Data_FD1_oFD1_CAN_Tx_3abd61be]         */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/SteeringPinion_Data_FD1_oFD1_CAN_Tx_3abd61be] */
};
#define CANIF_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  CanIf_TxPduQueueIndex
**********************************************************************************************************************/
/** 
  \var    CanIf_TxPduQueueIndex
  \brief  Indirection table: Tx-PDU handle ID to corresponding Tx buffer handle ID. NOTE: Only BasicCAN Tx-PDUs have a valid indirection into the Tx buffer.
  \details
  Element                          Description
  TxQueueIdx                       the index of the 0:1 relation pointing to CanIf_TxQueue
  TxQueueIndex2DataStartStopIdx    the index of the 0:1 relation pointing to CanIf_TxQueueIndex2DataStartStop
*/ 
#define CANIF_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(CanIf_TxPduQueueIndexType, CANIF_CONST) CanIf_TxPduQueueIndex[8] = {
    /* Index    TxQueueIdx                                                                                             TxQueueIndex2DataStartStopIdx                                                                                                   Comment                                                                                           Referable Keys */
  { /*     0 */        0UL  /* /ActiveEcuC/CanIf/CanIfInitCfg/TesterPhysicalResPSCM_FD1_Tp_oFD1_CAN_Tx_3abd61be */   ,                           0UL  /* /ActiveEcuC/CanIf/CanIfInitCfg/TesterPhysicalResPSCM_FD1_Tp_oFD1_CAN_Tx_3abd61be */    },  /* [TesterPhysicalResPSCM_FD1_Tp_oFD1_CAN_Tx_3abd61be, BasicCAN TxPdu with Tx-buffer]    */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/TesterPhysicalResPSCM_FD1_Tp_oFD1_CAN_Tx_3abd61be, /ActiveEcuC/CanIf/Can/CT_FD1_CAN_b4e1ca3b] */
  { /*     1 */        1UL  /* /ActiveEcuC/CanIf/CanIfInitCfg/TesterPhysicalResPSCM_FD1_Tp_oFD1_CAN_20_Tx_3abd61be */,                           1UL  /* /ActiveEcuC/CanIf/CanIfInitCfg/TesterPhysicalResPSCM_FD1_Tp_oFD1_CAN_20_Tx_3abd61be */ },  /* [TesterPhysicalResPSCM_FD1_Tp_oFD1_CAN_20_Tx_3abd61be, BasicCAN TxPdu with Tx-buffer] */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/TesterPhysicalResPSCM_FD1_Tp_oFD1_CAN_20_Tx_3abd61be, /ActiveEcuC/CanIf/Can/CT_FD1_CAN_b4e1ca3b] */
  { /*     2 */        2UL  /* /ActiveEcuC/CanIf/CanIfInitCfg/Xcp_DTO_Msg_oFD1_CAN_Tx_3abd61be */                    ,                           2UL  /* /ActiveEcuC/CanIf/CanIfInitCfg/Xcp_DTO_Msg_oFD1_CAN_Tx_3abd61be */                     },  /* [Xcp_DTO_Msg_oFD1_CAN_Tx_3abd61be, BasicCAN TxPdu with Tx-buffer]                     */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/Xcp_DTO_Msg_oFD1_CAN_Tx_3abd61be, /ActiveEcuC/CanIf/Can/CT_FD1_CAN_b4e1ca3b] */
  { /*     3 */        3UL  /* /ActiveEcuC/CanIf/CanIfInitCfg/PSCM_AutoSar_NetwrkMgt_FD1_oFD1_CAN_Tx_3abd61be */     ,                           3UL  /* /ActiveEcuC/CanIf/CanIfInitCfg/PSCM_AutoSar_NetwrkMgt_FD1_oFD1_CAN_Tx_3abd61be */      },  /* [PSCM_AutoSar_NetwrkMgt_FD1_oFD1_CAN_Tx_3abd61be, BasicCAN TxPdu with Tx-buffer]      */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/PSCM_AutoSar_NetwrkMgt_FD1_oFD1_CAN_Tx_3abd61be, /ActiveEcuC/CanIf/Can/CT_FD1_CAN_b4e1ca3b] */
  { /*     4 */        4UL  /* /ActiveEcuC/CanIf/CanIfInitCfg/TrailerAid_Data2_FD1_oFD1_CAN_Tx_3abd61be */           ,                           4UL  /* /ActiveEcuC/CanIf/CanIfInitCfg/TrailerAid_Data2_FD1_oFD1_CAN_Tx_3abd61be */            },  /* [TrailerAid_Data2_FD1_oFD1_CAN_Tx_3abd61be, BasicCAN TxPdu with Tx-buffer]            */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/TrailerAid_Data2_FD1_oFD1_CAN_Tx_3abd61be, /ActiveEcuC/CanIf/Can/CT_FD1_CAN_b4e1ca3b] */
  { /*     5 */        5UL  /* /ActiveEcuC/CanIf/CanIfInitCfg/Lane_Assist_Data3_FD1_oFD1_CAN_Tx_3abd61be */          ,                           5UL  /* /ActiveEcuC/CanIf/CanIfInitCfg/Lane_Assist_Data3_FD1_oFD1_CAN_Tx_3abd61be */           },  /* [Lane_Assist_Data3_FD1_oFD1_CAN_Tx_3abd61be, BasicCAN TxPdu with Tx-buffer]           */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/Lane_Assist_Data3_FD1_oFD1_CAN_Tx_3abd61be, /ActiveEcuC/CanIf/Can/CT_FD1_CAN_b4e1ca3b] */
  { /*     6 */        6UL  /* /ActiveEcuC/CanIf/CanIfInitCfg/EPAS_INFO_FD1_oFD1_CAN_Tx_3abd61be */                  ,                           6UL  /* /ActiveEcuC/CanIf/CanIfInitCfg/EPAS_INFO_FD1_oFD1_CAN_Tx_3abd61be */                   },  /* [EPAS_INFO_FD1_oFD1_CAN_Tx_3abd61be, BasicCAN TxPdu with Tx-buffer]                   */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/EPAS_INFO_FD1_oFD1_CAN_Tx_3abd61be, /ActiveEcuC/CanIf/Can/CT_FD1_CAN_b4e1ca3b] */
  { /*     7 */        7UL  /* /ActiveEcuC/CanIf/CanIfInitCfg/SteeringPinion_Data_FD1_oFD1_CAN_Tx_3abd61be */        ,                           7UL  /* /ActiveEcuC/CanIf/CanIfInitCfg/SteeringPinion_Data_FD1_oFD1_CAN_Tx_3abd61be */         }   /* [SteeringPinion_Data_FD1_oFD1_CAN_Tx_3abd61be, BasicCAN TxPdu with Tx-buffer]         */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/SteeringPinion_Data_FD1_oFD1_CAN_Tx_3abd61be, /ActiveEcuC/CanIf/Can/CT_FD1_CAN_b4e1ca3b] */
};
#define CANIF_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  CanIf_TxQueueIndex2DataStartStopECU1
**********************************************************************************************************************/
/** 
  \var    CanIf_TxQueueIndex2DataStartStopECU1
  \details
  Element                Description
  TxQueueDataEndIdx      the end index of the 0:n relation pointing to CanIf_TxQueueData
  TxQueueDataLength      the number of relations pointing to CanIf_TxQueueData
  TxQueueDataStartIdx    the start index of the 0:n relation pointing to CanIf_TxQueueData
*/ 
#define CANIF_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(CanIf_TxQueueIndex2DataStartStopType, CANIF_CONST) CanIf_TxQueueIndex2DataStartStopECU1[8] = {
    /* Index    TxQueueDataEndIdx                                                                                             TxQueueDataLength                                                                                             TxQueueDataStartIdx                                                                                                   Comment                                                                    Referable Keys */
  { /*     0 */              64UL  /* /ActiveEcuC/CanIf/CanIfInitCfg/TesterPhysicalResPSCM_FD1_Tp_oFD1_CAN_Tx_3abd61be */   ,              64UL  /* /ActiveEcuC/CanIf/CanIfInitCfg/TesterPhysicalResPSCM_FD1_Tp_oFD1_CAN_Tx_3abd61be */   ,                 0UL  /* /ActiveEcuC/CanIf/CanIfInitCfg/TesterPhysicalResPSCM_FD1_Tp_oFD1_CAN_Tx_3abd61be */    },  /* [Tx-PDU: TesterPhysicalResPSCM_FD1_Tp_oFD1_CAN_Tx_3abd61be]    */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/TesterPhysicalResPSCM_FD1_Tp_oFD1_CAN_Tx_3abd61be] */
  { /*     1 */              72UL  /* /ActiveEcuC/CanIf/CanIfInitCfg/TesterPhysicalResPSCM_FD1_Tp_oFD1_CAN_20_Tx_3abd61be */,               8UL  /* /ActiveEcuC/CanIf/CanIfInitCfg/TesterPhysicalResPSCM_FD1_Tp_oFD1_CAN_20_Tx_3abd61be */,                64UL  /* /ActiveEcuC/CanIf/CanIfInitCfg/TesterPhysicalResPSCM_FD1_Tp_oFD1_CAN_20_Tx_3abd61be */ },  /* [Tx-PDU: TesterPhysicalResPSCM_FD1_Tp_oFD1_CAN_20_Tx_3abd61be] */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/TesterPhysicalResPSCM_FD1_Tp_oFD1_CAN_20_Tx_3abd61be] */
  { /*     2 */              80UL  /* /ActiveEcuC/CanIf/CanIfInitCfg/Xcp_DTO_Msg_oFD1_CAN_Tx_3abd61be */                    ,               8UL  /* /ActiveEcuC/CanIf/CanIfInitCfg/Xcp_DTO_Msg_oFD1_CAN_Tx_3abd61be */                    ,                72UL  /* /ActiveEcuC/CanIf/CanIfInitCfg/Xcp_DTO_Msg_oFD1_CAN_Tx_3abd61be */                     },  /* [Tx-PDU: Xcp_DTO_Msg_oFD1_CAN_Tx_3abd61be]                     */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/Xcp_DTO_Msg_oFD1_CAN_Tx_3abd61be] */
  { /*     3 */              88UL  /* /ActiveEcuC/CanIf/CanIfInitCfg/PSCM_AutoSar_NetwrkMgt_FD1_oFD1_CAN_Tx_3abd61be */     ,               8UL  /* /ActiveEcuC/CanIf/CanIfInitCfg/PSCM_AutoSar_NetwrkMgt_FD1_oFD1_CAN_Tx_3abd61be */     ,                80UL  /* /ActiveEcuC/CanIf/CanIfInitCfg/PSCM_AutoSar_NetwrkMgt_FD1_oFD1_CAN_Tx_3abd61be */      },  /* [Tx-PDU: PSCM_AutoSar_NetwrkMgt_FD1_oFD1_CAN_Tx_3abd61be]      */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/PSCM_AutoSar_NetwrkMgt_FD1_oFD1_CAN_Tx_3abd61be] */
  { /*     4 */              96UL  /* /ActiveEcuC/CanIf/CanIfInitCfg/TrailerAid_Data2_FD1_oFD1_CAN_Tx_3abd61be */           ,               8UL  /* /ActiveEcuC/CanIf/CanIfInitCfg/TrailerAid_Data2_FD1_oFD1_CAN_Tx_3abd61be */           ,                88UL  /* /ActiveEcuC/CanIf/CanIfInitCfg/TrailerAid_Data2_FD1_oFD1_CAN_Tx_3abd61be */            },  /* [Tx-PDU: TrailerAid_Data2_FD1_oFD1_CAN_Tx_3abd61be]            */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/TrailerAid_Data2_FD1_oFD1_CAN_Tx_3abd61be] */
  { /*     5 */             104UL  /* /ActiveEcuC/CanIf/CanIfInitCfg/Lane_Assist_Data3_FD1_oFD1_CAN_Tx_3abd61be */          ,               8UL  /* /ActiveEcuC/CanIf/CanIfInitCfg/Lane_Assist_Data3_FD1_oFD1_CAN_Tx_3abd61be */          ,                96UL  /* /ActiveEcuC/CanIf/CanIfInitCfg/Lane_Assist_Data3_FD1_oFD1_CAN_Tx_3abd61be */           },  /* [Tx-PDU: Lane_Assist_Data3_FD1_oFD1_CAN_Tx_3abd61be]           */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/Lane_Assist_Data3_FD1_oFD1_CAN_Tx_3abd61be] */
  { /*     6 */             112UL  /* /ActiveEcuC/CanIf/CanIfInitCfg/EPAS_INFO_FD1_oFD1_CAN_Tx_3abd61be */                  ,               8UL  /* /ActiveEcuC/CanIf/CanIfInitCfg/EPAS_INFO_FD1_oFD1_CAN_Tx_3abd61be */                  ,               104UL  /* /ActiveEcuC/CanIf/CanIfInitCfg/EPAS_INFO_FD1_oFD1_CAN_Tx_3abd61be */                   },  /* [Tx-PDU: EPAS_INFO_FD1_oFD1_CAN_Tx_3abd61be]                   */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/EPAS_INFO_FD1_oFD1_CAN_Tx_3abd61be] */
  { /*     7 */             120UL  /* /ActiveEcuC/CanIf/CanIfInitCfg/SteeringPinion_Data_FD1_oFD1_CAN_Tx_3abd61be */        ,               8UL  /* /ActiveEcuC/CanIf/CanIfInitCfg/SteeringPinion_Data_FD1_oFD1_CAN_Tx_3abd61be */        ,               112UL  /* /ActiveEcuC/CanIf/CanIfInitCfg/SteeringPinion_Data_FD1_oFD1_CAN_Tx_3abd61be */         }   /* [Tx-PDU: SteeringPinion_Data_FD1_oFD1_CAN_Tx_3abd61be]         */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/SteeringPinion_Data_FD1_oFD1_CAN_Tx_3abd61be] */
};
#define CANIF_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  CanIf_TxQueueIndex2DataStartStopECU2
**********************************************************************************************************************/
/** 
  \var    CanIf_TxQueueIndex2DataStartStopECU2
  \details
  Element                Description
  TxQueueDataEndIdx      the end index of the 0:n relation pointing to CanIf_TxQueueData
  TxQueueDataLength      the number of relations pointing to CanIf_TxQueueData
  TxQueueDataStartIdx    the start index of the 0:n relation pointing to CanIf_TxQueueData
*/ 
#define CANIF_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(CanIf_TxQueueIndex2DataStartStopType, CANIF_CONST) CanIf_TxQueueIndex2DataStartStopECU2[8] = {
    /* Index    TxQueueDataEndIdx                                                                                             TxQueueDataLength                                                                                             TxQueueDataStartIdx                                                                                                   Comment                                                                    Referable Keys */
  { /*     0 */               8UL  /* /ActiveEcuC/CanIf/CanIfInitCfg/PSCM_AutoSar_NetwrkMgt_FD1_oFD1_CAN_Tx_3abd61be */     ,               8UL  /* /ActiveEcuC/CanIf/CanIfInitCfg/PSCM_AutoSar_NetwrkMgt_FD1_oFD1_CAN_Tx_3abd61be */     ,                 0UL  /* /ActiveEcuC/CanIf/CanIfInitCfg/PSCM_AutoSar_NetwrkMgt_FD1_oFD1_CAN_Tx_3abd61be */      },  /* [Tx-PDU: PSCM_AutoSar_NetwrkMgt_FD1_oFD1_CAN_Tx_3abd61be]      */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/PSCM_AutoSar_NetwrkMgt_FD1_oFD1_CAN_Tx_3abd61be] */
  { /*     1 */              16UL  /* /ActiveEcuC/CanIf/CanIfInitCfg/Xcp_DTO_Msg_oFD1_CAN_Tx_3abd61be */                    ,               8UL  /* /ActiveEcuC/CanIf/CanIfInitCfg/Xcp_DTO_Msg_oFD1_CAN_Tx_3abd61be */                    ,                 8UL  /* /ActiveEcuC/CanIf/CanIfInitCfg/Xcp_DTO_Msg_oFD1_CAN_Tx_3abd61be */                     },  /* [Tx-PDU: Xcp_DTO_Msg_oFD1_CAN_Tx_3abd61be]                     */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/Xcp_DTO_Msg_oFD1_CAN_Tx_3abd61be] */
  { /*     2 */              80UL  /* /ActiveEcuC/CanIf/CanIfInitCfg/TesterPhysicalResPSCM_FD1_Tp_oFD1_CAN_Tx_3abd61be */   ,              64UL  /* /ActiveEcuC/CanIf/CanIfInitCfg/TesterPhysicalResPSCM_FD1_Tp_oFD1_CAN_Tx_3abd61be */   ,                16UL  /* /ActiveEcuC/CanIf/CanIfInitCfg/TesterPhysicalResPSCM_FD1_Tp_oFD1_CAN_Tx_3abd61be */    },  /* [Tx-PDU: TesterPhysicalResPSCM_FD1_Tp_oFD1_CAN_Tx_3abd61be]    */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/TesterPhysicalResPSCM_FD1_Tp_oFD1_CAN_Tx_3abd61be] */
  { /*     3 */              88UL  /* /ActiveEcuC/CanIf/CanIfInitCfg/TesterPhysicalResPSCM_FD1_Tp_oFD1_CAN_20_Tx_3abd61be */,               8UL  /* /ActiveEcuC/CanIf/CanIfInitCfg/TesterPhysicalResPSCM_FD1_Tp_oFD1_CAN_20_Tx_3abd61be */,                80UL  /* /ActiveEcuC/CanIf/CanIfInitCfg/TesterPhysicalResPSCM_FD1_Tp_oFD1_CAN_20_Tx_3abd61be */ },  /* [Tx-PDU: TesterPhysicalResPSCM_FD1_Tp_oFD1_CAN_20_Tx_3abd61be] */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/TesterPhysicalResPSCM_FD1_Tp_oFD1_CAN_20_Tx_3abd61be] */
  { /*     4 */              96UL  /* /ActiveEcuC/CanIf/CanIfInitCfg/TrailerAid_Data2_FD1_oFD1_CAN_Tx_3abd61be */           ,               8UL  /* /ActiveEcuC/CanIf/CanIfInitCfg/TrailerAid_Data2_FD1_oFD1_CAN_Tx_3abd61be */           ,                88UL  /* /ActiveEcuC/CanIf/CanIfInitCfg/TrailerAid_Data2_FD1_oFD1_CAN_Tx_3abd61be */            },  /* [Tx-PDU: TrailerAid_Data2_FD1_oFD1_CAN_Tx_3abd61be]            */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/TrailerAid_Data2_FD1_oFD1_CAN_Tx_3abd61be] */
  { /*     5 */             104UL  /* /ActiveEcuC/CanIf/CanIfInitCfg/Lane_Assist_Data3_FD1_oFD1_CAN_Tx_3abd61be */          ,               8UL  /* /ActiveEcuC/CanIf/CanIfInitCfg/Lane_Assist_Data3_FD1_oFD1_CAN_Tx_3abd61be */          ,                96UL  /* /ActiveEcuC/CanIf/CanIfInitCfg/Lane_Assist_Data3_FD1_oFD1_CAN_Tx_3abd61be */           },  /* [Tx-PDU: Lane_Assist_Data3_FD1_oFD1_CAN_Tx_3abd61be]           */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/Lane_Assist_Data3_FD1_oFD1_CAN_Tx_3abd61be] */
  { /*     6 */             112UL  /* /ActiveEcuC/CanIf/CanIfInitCfg/EPAS_INFO_FD1_oFD1_CAN_Tx_3abd61be */                  ,               8UL  /* /ActiveEcuC/CanIf/CanIfInitCfg/EPAS_INFO_FD1_oFD1_CAN_Tx_3abd61be */                  ,               104UL  /* /ActiveEcuC/CanIf/CanIfInitCfg/EPAS_INFO_FD1_oFD1_CAN_Tx_3abd61be */                   },  /* [Tx-PDU: EPAS_INFO_FD1_oFD1_CAN_Tx_3abd61be]                   */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/EPAS_INFO_FD1_oFD1_CAN_Tx_3abd61be] */
  { /*     7 */             120UL  /* /ActiveEcuC/CanIf/CanIfInitCfg/SteeringPinion_Data_FD1_oFD1_CAN_Tx_3abd61be */        ,               8UL  /* /ActiveEcuC/CanIf/CanIfInitCfg/SteeringPinion_Data_FD1_oFD1_CAN_Tx_3abd61be */        ,               112UL  /* /ActiveEcuC/CanIf/CanIfInitCfg/SteeringPinion_Data_FD1_oFD1_CAN_Tx_3abd61be */         }   /* [Tx-PDU: SteeringPinion_Data_FD1_oFD1_CAN_Tx_3abd61be]         */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/SteeringPinion_Data_FD1_oFD1_CAN_Tx_3abd61be] */
};
#define CANIF_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  CanIf_UlTxPduId2InternalTxPduIdECU1
**********************************************************************************************************************/
/** 
  \var    CanIf_UlTxPduId2InternalTxPduIdECU1
  \brief  Indirection table - Upper layer Tx-PduId to internal one.
*/ 
#define CANIF_START_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(CanIf_UlTxPduId2InternalTxPduIdType, CANIF_CONST) CanIf_UlTxPduId2InternalTxPduIdECU1[8] = {
  /* Index    UlTxPduId2InternalTxPduId                                                                                                          */
  /*     0 */                        6U  /* CanIfConf_CanIfTxPduCfg_EPAS_INFO_FD1_oFD1_CAN_Tx_3abd61be, CanId:0x00000082UL */                  ,
  /*     1 */                        5U  /* CanIfConf_CanIfTxPduCfg_Lane_Assist_Data3_FD1_oFD1_CAN_Tx_3abd61be, CanId:0x000003CCUL */          ,
  /*     2 */                        3U  /* CanIfConf_CanIfTxPduCfg_PSCM_AutoSar_NetwrkMgt_FD1_oFD1_CAN_Tx_3abd61be, CanId:0x000005B5UL */     ,
  /*     3 */                        7U  /* CanIfConf_CanIfTxPduCfg_SteeringPinion_Data_FD1_oFD1_CAN_Tx_3abd61be, CanId:0x0000007EUL */        ,
  /*     4 */                        1U  /* CanIfConf_CanIfTxPduCfg_TesterPhysicalResPSCM_FD1_Tp_oFD1_CAN_20_Tx_3abd61be, CanId:0x00000738UL */,
  /*     5 */                        0U  /* CanIfConf_CanIfTxPduCfg_TesterPhysicalResPSCM_FD1_Tp_oFD1_CAN_Tx_3abd61be, CanId:0x00000738UL */   ,
  /*     6 */                        4U  /* CanIfConf_CanIfTxPduCfg_TrailerAid_Data2_FD1_oFD1_CAN_Tx_3abd61be, CanId:0x00000417UL */           ,
  /*     7 */                        2U  /* CanIfConf_CanIfTxPduCfg_Xcp_DTO_Msg_oFD1_CAN_Tx_3abd61be, CanId:0x0000060BUL */                    
};
#define CANIF_STOP_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  CanIf_UlTxPduId2InternalTxPduIdECU2
**********************************************************************************************************************/
/** 
  \var    CanIf_UlTxPduId2InternalTxPduIdECU2
  \brief  Indirection table - Upper layer Tx-PduId to internal one.
*/ 
#define CANIF_START_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(CanIf_UlTxPduId2InternalTxPduIdType, CANIF_CONST) CanIf_UlTxPduId2InternalTxPduIdECU2[8] = {
  /* Index    UlTxPduId2InternalTxPduId                                                                                                          */
  /*     0 */                        6U  /* CanIfConf_CanIfTxPduCfg_EPAS_INFO_FD1_oFD1_CAN_Tx_3abd61be, CanId:0x00000182UL */                  ,
  /*     1 */                        5U  /* CanIfConf_CanIfTxPduCfg_Lane_Assist_Data3_FD1_oFD1_CAN_Tx_3abd61be, CanId:0x000004CCUL */          ,
  /*     2 */                        0U  /* CanIfConf_CanIfTxPduCfg_PSCM_AutoSar_NetwrkMgt_FD1_oFD1_CAN_Tx_3abd61be, CanId:0x000006B5UL */     ,
  /*     3 */                        7U  /* CanIfConf_CanIfTxPduCfg_SteeringPinion_Data_FD1_oFD1_CAN_Tx_3abd61be, CanId:0x0000017EUL */        ,
  /*     4 */                        3U  /* CanIfConf_CanIfTxPduCfg_TesterPhysicalResPSCM_FD1_Tp_oFD1_CAN_20_Tx_3abd61be, CanId:0x0000065FUL */,
  /*     5 */                        2U  /* CanIfConf_CanIfTxPduCfg_TesterPhysicalResPSCM_FD1_Tp_oFD1_CAN_Tx_3abd61be, CanId:0x0000065FUL */   ,
  /*     6 */                        4U  /* CanIfConf_CanIfTxPduCfg_TrailerAid_Data2_FD1_oFD1_CAN_Tx_3abd61be, CanId:0x00000517UL */           ,
  /*     7 */                        1U  /* CanIfConf_CanIfTxPduCfg_Xcp_DTO_Msg_oFD1_CAN_Tx_3abd61be, CanId:0x00000661UL */                    
};
#define CANIF_STOP_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  CanIf_CtrlStates
**********************************************************************************************************************/
/** 
  \var    CanIf_CtrlStates
  \details
  Element     Description
  CtrlMode    Controller mode.
  PduMode     PDU mode state.
*/ 
#define CANIF_START_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(CanIf_CtrlStatesUType, CANIF_VAR_NOINIT) CanIf_CtrlStates;  /* PRQA S 0759 */  /* MD_CSL_18.4 */
  /* Index        Referable Keys  */
  /*     0 */  /* [/ActiveEcuC/CanIf/Can/CT_FD1_CAN_b4e1ca3b] */

#define CANIF_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  CanIf_TxBufferPrioByCanIdBase
**********************************************************************************************************************/
/** 
  \var    CanIf_TxBufferPrioByCanIdBase
  \brief  Variable declaration - Tx-buffer: PRIO_BY_CANID as byte/bit-queue. Stores at least the QueueCounter.
*/ 
#define CANIF_START_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(CanIf_TxBufferPrioByCanIdBaseUType, CANIF_VAR_NOINIT) CanIf_TxBufferPrioByCanIdBase;  /* PRQA S 0759 */  /* MD_CSL_18.4 */
  /* Index        Referable Keys  */
  /*     0 */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/CanIfBufferCfg_Tx_Std_3290b631] */

#define CANIF_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  CanIf_TxQueue
**********************************************************************************************************************/
/** 
  \var    CanIf_TxQueue
  \brief  Variable declaration - Tx byte queue.
*/ 
#define CANIF_START_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(CanIf_TxQueueUType, CANIF_VAR_NOINIT) CanIf_TxQueue;  /* PRQA S 0759 */  /* MD_CSL_18.4 */
  /* Index        Referable Keys  */
  /*     0 */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/TesterPhysicalResPSCM_FD1_Tp_oFD1_CAN_Tx_3abd61be] */
  /*     1 */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/TesterPhysicalResPSCM_FD1_Tp_oFD1_CAN_20_Tx_3abd61be] */
  /*     2 */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/Xcp_DTO_Msg_oFD1_CAN_Tx_3abd61be] */
  /*     3 */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/PSCM_AutoSar_NetwrkMgt_FD1_oFD1_CAN_Tx_3abd61be] */
  /*     4 */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/TrailerAid_Data2_FD1_oFD1_CAN_Tx_3abd61be] */
  /*     5 */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/Lane_Assist_Data3_FD1_oFD1_CAN_Tx_3abd61be] */
  /*     6 */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/EPAS_INFO_FD1_oFD1_CAN_Tx_3abd61be] */
  /*     7 */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/SteeringPinion_Data_FD1_oFD1_CAN_Tx_3abd61be] */

#define CANIF_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  CanIf_TxQueueData
**********************************************************************************************************************/
/** 
  \var    CanIf_TxQueueData
  \brief  Variable declaration - Tx queue data.
*/ 
#define CANIF_START_SEC_VAR_FAST_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(CanIf_TxQueueDataUType, CANIF_VAR_NOINIT_FAST) CanIf_TxQueueData;  /* PRQA S 0759 */  /* MD_CSL_18.4 */
  /* Index        Referable Keys  */
  /*     0 */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/TesterPhysicalResPSCM_FD1_Tp_oFD1_CAN_Tx_3abd61be] */
  /*     1 */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/TesterPhysicalResPSCM_FD1_Tp_oFD1_CAN_Tx_3abd61be] */
  /*     2 */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/TesterPhysicalResPSCM_FD1_Tp_oFD1_CAN_Tx_3abd61be] */
  /*     3 */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/TesterPhysicalResPSCM_FD1_Tp_oFD1_CAN_Tx_3abd61be] */
  /*     4 */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/TesterPhysicalResPSCM_FD1_Tp_oFD1_CAN_Tx_3abd61be] */
  /*     5 */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/TesterPhysicalResPSCM_FD1_Tp_oFD1_CAN_Tx_3abd61be] */
  /*     6 */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/TesterPhysicalResPSCM_FD1_Tp_oFD1_CAN_Tx_3abd61be] */
  /*     7 */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/TesterPhysicalResPSCM_FD1_Tp_oFD1_CAN_Tx_3abd61be] */
  /*     8 */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/TesterPhysicalResPSCM_FD1_Tp_oFD1_CAN_Tx_3abd61be] */
  /*     9 */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/TesterPhysicalResPSCM_FD1_Tp_oFD1_CAN_Tx_3abd61be] */
  /*    10 */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/TesterPhysicalResPSCM_FD1_Tp_oFD1_CAN_Tx_3abd61be] */
  /*    11 */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/TesterPhysicalResPSCM_FD1_Tp_oFD1_CAN_Tx_3abd61be] */
  /*    12 */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/TesterPhysicalResPSCM_FD1_Tp_oFD1_CAN_Tx_3abd61be] */
  /*    13 */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/TesterPhysicalResPSCM_FD1_Tp_oFD1_CAN_Tx_3abd61be] */
  /*    14 */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/TesterPhysicalResPSCM_FD1_Tp_oFD1_CAN_Tx_3abd61be] */
  /*    15 */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/TesterPhysicalResPSCM_FD1_Tp_oFD1_CAN_Tx_3abd61be] */
  /*    16 */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/TesterPhysicalResPSCM_FD1_Tp_oFD1_CAN_Tx_3abd61be] */
  /*    17 */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/TesterPhysicalResPSCM_FD1_Tp_oFD1_CAN_Tx_3abd61be] */
  /*    18 */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/TesterPhysicalResPSCM_FD1_Tp_oFD1_CAN_Tx_3abd61be] */
  /*    19 */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/TesterPhysicalResPSCM_FD1_Tp_oFD1_CAN_Tx_3abd61be] */
  /*    20 */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/TesterPhysicalResPSCM_FD1_Tp_oFD1_CAN_Tx_3abd61be] */
  /*    21 */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/TesterPhysicalResPSCM_FD1_Tp_oFD1_CAN_Tx_3abd61be] */
  /*    22 */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/TesterPhysicalResPSCM_FD1_Tp_oFD1_CAN_Tx_3abd61be] */
  /*    23 */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/TesterPhysicalResPSCM_FD1_Tp_oFD1_CAN_Tx_3abd61be] */
  /*    24 */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/TesterPhysicalResPSCM_FD1_Tp_oFD1_CAN_Tx_3abd61be] */
  /*    25 */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/TesterPhysicalResPSCM_FD1_Tp_oFD1_CAN_Tx_3abd61be] */
  /*    26 */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/TesterPhysicalResPSCM_FD1_Tp_oFD1_CAN_Tx_3abd61be] */
  /*    27 */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/TesterPhysicalResPSCM_FD1_Tp_oFD1_CAN_Tx_3abd61be] */
  /*    28 */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/TesterPhysicalResPSCM_FD1_Tp_oFD1_CAN_Tx_3abd61be] */
  /*    29 */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/TesterPhysicalResPSCM_FD1_Tp_oFD1_CAN_Tx_3abd61be] */
  /*    30 */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/TesterPhysicalResPSCM_FD1_Tp_oFD1_CAN_Tx_3abd61be] */
  /*    31 */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/TesterPhysicalResPSCM_FD1_Tp_oFD1_CAN_Tx_3abd61be] */
  /*    32 */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/TesterPhysicalResPSCM_FD1_Tp_oFD1_CAN_Tx_3abd61be] */
  /*    33 */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/TesterPhysicalResPSCM_FD1_Tp_oFD1_CAN_Tx_3abd61be] */
  /*    34 */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/TesterPhysicalResPSCM_FD1_Tp_oFD1_CAN_Tx_3abd61be] */
  /*    35 */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/TesterPhysicalResPSCM_FD1_Tp_oFD1_CAN_Tx_3abd61be] */
  /*    36 */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/TesterPhysicalResPSCM_FD1_Tp_oFD1_CAN_Tx_3abd61be] */
  /*    37 */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/TesterPhysicalResPSCM_FD1_Tp_oFD1_CAN_Tx_3abd61be] */
  /*    38 */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/TesterPhysicalResPSCM_FD1_Tp_oFD1_CAN_Tx_3abd61be] */
  /*    39 */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/TesterPhysicalResPSCM_FD1_Tp_oFD1_CAN_Tx_3abd61be] */
  /*    40 */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/TesterPhysicalResPSCM_FD1_Tp_oFD1_CAN_Tx_3abd61be] */
  /*    41 */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/TesterPhysicalResPSCM_FD1_Tp_oFD1_CAN_Tx_3abd61be] */
  /*    42 */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/TesterPhysicalResPSCM_FD1_Tp_oFD1_CAN_Tx_3abd61be] */
  /*    43 */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/TesterPhysicalResPSCM_FD1_Tp_oFD1_CAN_Tx_3abd61be] */
  /*    44 */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/TesterPhysicalResPSCM_FD1_Tp_oFD1_CAN_Tx_3abd61be] */
  /*    45 */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/TesterPhysicalResPSCM_FD1_Tp_oFD1_CAN_Tx_3abd61be] */
  /*    46 */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/TesterPhysicalResPSCM_FD1_Tp_oFD1_CAN_Tx_3abd61be] */
  /*    47 */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/TesterPhysicalResPSCM_FD1_Tp_oFD1_CAN_Tx_3abd61be] */
  /*    48 */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/TesterPhysicalResPSCM_FD1_Tp_oFD1_CAN_Tx_3abd61be] */
  /*    49 */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/TesterPhysicalResPSCM_FD1_Tp_oFD1_CAN_Tx_3abd61be] */
  /* Index        Referable Keys  */
  /*    50 */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/TesterPhysicalResPSCM_FD1_Tp_oFD1_CAN_Tx_3abd61be] */
  /*    51 */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/TesterPhysicalResPSCM_FD1_Tp_oFD1_CAN_Tx_3abd61be] */
  /*    52 */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/TesterPhysicalResPSCM_FD1_Tp_oFD1_CAN_Tx_3abd61be] */
  /*    53 */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/TesterPhysicalResPSCM_FD1_Tp_oFD1_CAN_Tx_3abd61be] */
  /*    54 */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/TesterPhysicalResPSCM_FD1_Tp_oFD1_CAN_Tx_3abd61be] */
  /*    55 */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/TesterPhysicalResPSCM_FD1_Tp_oFD1_CAN_Tx_3abd61be] */
  /*    56 */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/TesterPhysicalResPSCM_FD1_Tp_oFD1_CAN_Tx_3abd61be] */
  /*    57 */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/TesterPhysicalResPSCM_FD1_Tp_oFD1_CAN_Tx_3abd61be] */
  /*    58 */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/TesterPhysicalResPSCM_FD1_Tp_oFD1_CAN_Tx_3abd61be] */
  /*    59 */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/TesterPhysicalResPSCM_FD1_Tp_oFD1_CAN_Tx_3abd61be] */
  /*    60 */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/TesterPhysicalResPSCM_FD1_Tp_oFD1_CAN_Tx_3abd61be] */
  /*    61 */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/TesterPhysicalResPSCM_FD1_Tp_oFD1_CAN_Tx_3abd61be] */
  /*    62 */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/TesterPhysicalResPSCM_FD1_Tp_oFD1_CAN_Tx_3abd61be] */
  /*    63 */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/TesterPhysicalResPSCM_FD1_Tp_oFD1_CAN_Tx_3abd61be] */
  /*    64 */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/TesterPhysicalResPSCM_FD1_Tp_oFD1_CAN_20_Tx_3abd61be] */
  /*    65 */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/TesterPhysicalResPSCM_FD1_Tp_oFD1_CAN_20_Tx_3abd61be] */
  /*    66 */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/TesterPhysicalResPSCM_FD1_Tp_oFD1_CAN_20_Tx_3abd61be] */
  /*    67 */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/TesterPhysicalResPSCM_FD1_Tp_oFD1_CAN_20_Tx_3abd61be] */
  /*    68 */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/TesterPhysicalResPSCM_FD1_Tp_oFD1_CAN_20_Tx_3abd61be] */
  /*    69 */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/TesterPhysicalResPSCM_FD1_Tp_oFD1_CAN_20_Tx_3abd61be] */
  /*    70 */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/TesterPhysicalResPSCM_FD1_Tp_oFD1_CAN_20_Tx_3abd61be] */
  /*    71 */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/TesterPhysicalResPSCM_FD1_Tp_oFD1_CAN_20_Tx_3abd61be] */
  /*    72 */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/Xcp_DTO_Msg_oFD1_CAN_Tx_3abd61be] */
  /*    73 */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/Xcp_DTO_Msg_oFD1_CAN_Tx_3abd61be] */
  /*    74 */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/Xcp_DTO_Msg_oFD1_CAN_Tx_3abd61be] */
  /*    75 */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/Xcp_DTO_Msg_oFD1_CAN_Tx_3abd61be] */
  /*    76 */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/Xcp_DTO_Msg_oFD1_CAN_Tx_3abd61be] */
  /*    77 */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/Xcp_DTO_Msg_oFD1_CAN_Tx_3abd61be] */
  /*    78 */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/Xcp_DTO_Msg_oFD1_CAN_Tx_3abd61be] */
  /*    79 */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/Xcp_DTO_Msg_oFD1_CAN_Tx_3abd61be] */
  /*    80 */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/PSCM_AutoSar_NetwrkMgt_FD1_oFD1_CAN_Tx_3abd61be] */
  /*    81 */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/PSCM_AutoSar_NetwrkMgt_FD1_oFD1_CAN_Tx_3abd61be] */
  /*    82 */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/PSCM_AutoSar_NetwrkMgt_FD1_oFD1_CAN_Tx_3abd61be] */
  /*    83 */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/PSCM_AutoSar_NetwrkMgt_FD1_oFD1_CAN_Tx_3abd61be] */
  /*    84 */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/PSCM_AutoSar_NetwrkMgt_FD1_oFD1_CAN_Tx_3abd61be] */
  /*    85 */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/PSCM_AutoSar_NetwrkMgt_FD1_oFD1_CAN_Tx_3abd61be] */
  /*    86 */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/PSCM_AutoSar_NetwrkMgt_FD1_oFD1_CAN_Tx_3abd61be] */
  /*    87 */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/PSCM_AutoSar_NetwrkMgt_FD1_oFD1_CAN_Tx_3abd61be] */
  /*    88 */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/TrailerAid_Data2_FD1_oFD1_CAN_Tx_3abd61be] */
  /*    89 */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/TrailerAid_Data2_FD1_oFD1_CAN_Tx_3abd61be] */
  /*    90 */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/TrailerAid_Data2_FD1_oFD1_CAN_Tx_3abd61be] */
  /*    91 */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/TrailerAid_Data2_FD1_oFD1_CAN_Tx_3abd61be] */
  /*    92 */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/TrailerAid_Data2_FD1_oFD1_CAN_Tx_3abd61be] */
  /*    93 */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/TrailerAid_Data2_FD1_oFD1_CAN_Tx_3abd61be] */
  /*    94 */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/TrailerAid_Data2_FD1_oFD1_CAN_Tx_3abd61be] */
  /*    95 */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/TrailerAid_Data2_FD1_oFD1_CAN_Tx_3abd61be] */
  /*    96 */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/Lane_Assist_Data3_FD1_oFD1_CAN_Tx_3abd61be] */
  /*    97 */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/Lane_Assist_Data3_FD1_oFD1_CAN_Tx_3abd61be] */
  /*    98 */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/Lane_Assist_Data3_FD1_oFD1_CAN_Tx_3abd61be] */
  /*    99 */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/Lane_Assist_Data3_FD1_oFD1_CAN_Tx_3abd61be] */
  /* Index        Referable Keys  */
  /*   100 */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/Lane_Assist_Data3_FD1_oFD1_CAN_Tx_3abd61be] */
  /*   101 */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/Lane_Assist_Data3_FD1_oFD1_CAN_Tx_3abd61be] */
  /*   102 */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/Lane_Assist_Data3_FD1_oFD1_CAN_Tx_3abd61be] */
  /*   103 */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/Lane_Assist_Data3_FD1_oFD1_CAN_Tx_3abd61be] */
  /*   104 */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/EPAS_INFO_FD1_oFD1_CAN_Tx_3abd61be] */
  /*   105 */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/EPAS_INFO_FD1_oFD1_CAN_Tx_3abd61be] */
  /*   106 */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/EPAS_INFO_FD1_oFD1_CAN_Tx_3abd61be] */
  /*   107 */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/EPAS_INFO_FD1_oFD1_CAN_Tx_3abd61be] */
  /*   108 */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/EPAS_INFO_FD1_oFD1_CAN_Tx_3abd61be] */
  /*   109 */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/EPAS_INFO_FD1_oFD1_CAN_Tx_3abd61be] */
  /*   110 */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/EPAS_INFO_FD1_oFD1_CAN_Tx_3abd61be] */
  /*   111 */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/EPAS_INFO_FD1_oFD1_CAN_Tx_3abd61be] */
  /*   112 */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/SteeringPinion_Data_FD1_oFD1_CAN_Tx_3abd61be] */
  /*   113 */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/SteeringPinion_Data_FD1_oFD1_CAN_Tx_3abd61be] */
  /*   114 */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/SteeringPinion_Data_FD1_oFD1_CAN_Tx_3abd61be] */
  /*   115 */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/SteeringPinion_Data_FD1_oFD1_CAN_Tx_3abd61be] */
  /*   116 */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/SteeringPinion_Data_FD1_oFD1_CAN_Tx_3abd61be] */
  /*   117 */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/SteeringPinion_Data_FD1_oFD1_CAN_Tx_3abd61be] */
  /*   118 */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/SteeringPinion_Data_FD1_oFD1_CAN_Tx_3abd61be] */
  /*   119 */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/SteeringPinion_Data_FD1_oFD1_CAN_Tx_3abd61be] */

#define CANIF_STOP_SEC_VAR_FAST_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  CanIf_PCConfig
**********************************************************************************************************************/
/** 
  \var    CanIf_PCConfig
  \details
  Element                       Description
  RxPduCanId                    the pointer to CanIf_RxPduCanId
  RxPduConfig                   the pointer to CanIf_RxPduConfig
  TxPduConfig                   the pointer to CanIf_TxPduConfig
  TxQueueIndex2DataStartStop    the pointer to CanIf_TxQueueIndex2DataStartStop
  UlTxPduId2InternalTxPduId     the pointer to CanIf_UlTxPduId2InternalTxPduId
*/ 
#define CANIF_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(CanIf_PCConfigsType, CANIF_CONST) CanIf_PCConfig = {
  { /* Index: 0 Keys: [Config_ECU1] */
      CanIf_RxPduCanIdECU1                  /**< the pointer to CanIf_RxPduCanIdECU1 */
    , CanIf_RxPduConfigECU1                 /**< the pointer to CanIf_RxPduConfigECU1 */
    , CanIf_TxPduConfigECU1                 /**< the pointer to CanIf_TxPduConfigECU1 */
    , CanIf_TxQueueIndex2DataStartStopECU1  /**< the pointer to CanIf_TxQueueIndex2DataStartStopECU1 */
    , CanIf_UlTxPduId2InternalTxPduIdECU1   /**< the pointer to CanIf_UlTxPduId2InternalTxPduIdECU1 */
  },
  { /* Index: 1 Keys: [Config_ECU2] */
      CanIf_RxPduCanIdECU2                  /**< the pointer to CanIf_RxPduCanIdECU2 */
    , CanIf_RxPduConfigECU2                 /**< the pointer to CanIf_RxPduConfigECU2 */
    , CanIf_TxPduConfigECU2                 /**< the pointer to CanIf_TxPduConfigECU2 */
    , CanIf_TxQueueIndex2DataStartStopECU2  /**< the pointer to CanIf_TxQueueIndex2DataStartStopECU2 */
    , CanIf_UlTxPduId2InternalTxPduIdECU2   /**< the pointer to CanIf_UlTxPduId2InternalTxPduIdECU2 */
  }
};
#define CANIF_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */


/**********************************************************************************************************************
  CONFIGURATION CLASS: LINK
  SECTION: GLOBAL DATA
**********************************************************************************************************************/



