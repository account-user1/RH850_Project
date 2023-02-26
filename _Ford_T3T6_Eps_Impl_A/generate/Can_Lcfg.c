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
 *            Module: Can
 *           Program: MSR_Ford_SLP1 (MSR_Ford_SLP1)
 *          Customer: Nexteer Automotive Corporation
 *       Expiry Date: Not restricted
 *  Ordered Derivat.: R7F701373EABG
 *    License Scope : The usage is restricted to CBD1601056_D00
 *
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *              File: Can_Lcfg.c
 *   Generation Time: 2018-04-17 10:35:07
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


#define CAN_LCFG_SOURCE

/* PRQA S 0857 EOF */ /* MD_Can_0857 */
/* PRQA S 0779 EOF */ /* MD_MSR_5.1_779 */

/* -----------------------------------------------------------------------------
    Includes
 ----------------------------------------------------------------------------- */

#include "Can_Cfg.h"

/* -----------------------------------------------------------------------------
    Hw specific
 ----------------------------------------------------------------------------- */

/* HW specific CT global C file */

/* !HW specific CT global C file */


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
  Can_BTP
**********************************************************************************************************************/
/** 
  \var    Can_BTP
  \brief  Bit Timing and Prescaler
*/ 
#define CAN_START_SEC_CONST_32BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(Can_BTPType, CAN_CONST) Can_BTP[1] = {
  /* Index    BTP               Comment */
  /*     0 */ 0x0E031E07UL   /* [CT_FD1_CAN_b4e1ca3b - CanControllerBaudrateConfig] */
};
#define CAN_STOP_SEC_CONST_32BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Can_BasisAdr
**********************************************************************************************************************/
/** 
  \var    Can_BasisAdr
  \brief  CAN channel base address
*/ 
#define CAN_START_SEC_CONST_32BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(Can_BasisAdrType, CAN_CONST) Can_BasisAdr[1] = {
  /* Index    BasisAdr          Comment */
  /*     0 */ 0xFFEF0000UL   /* [CT_FD1_CAN_b4e1ca3b] */
};
#define CAN_STOP_SEC_CONST_32BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Can_BufferConfig
**********************************************************************************************************************/
/** 
  \var    Can_BufferConfig
  \brief  CAN Buffer Configuration
  \details
  Element    Description
  RXBC   
  RXF0C  
  RXF1C  
  TXBC   
  TXEFC  
*/ 
#define CAN_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(Can_BufferConfigType, CAN_CONST) Can_BufferConfig[1] = {
    /* Index    RXBC          RXF0C         RXF1C         TXBC          TXEFC               Comment */
  { /*     0 */ 0x00000258UL, 0x000600A8UL, 0x00000000UL, 0x00010DE0UL, 0x00000000UL }   /* [CT_FD1_CAN_b4e1ca3b] */
};
#define CAN_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Can_CanIfChannelId
**********************************************************************************************************************/
/** 
  \var    Can_CanIfChannelId
  \brief  indirection table Can to CanIf controller ID
*/ 
#define CAN_START_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(Can_CanIfChannelIdType, CAN_CONST) Can_CanIfChannelId[1] = {
  /* Index    CanIfChannelId      Comment */
  /*     0 */             0U   /* [CT_FD1_CAN_b4e1ca3b] */
};
#define CAN_STOP_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Can_ControllerConfig
**********************************************************************************************************************/
/** 
  \var    Can_ControllerConfig
  \brief  Global configuration for all controllers
  \details
  Element                         Description
  CanControllerDefaultBaudrate
  RxBasicHandleMax            
  RxBasicHandleStart          
  RxBasicHandleStop           
  RxBasicHwStart              
  RxBasicHwStop               
  RxFullHandleMax             
  RxFullHandleStart           
  RxFullHandleStop            
  RxFullHwStart               
  RxFullHwStop                
  TxBasicHandleMax            
  TxBasicHandleStart          
  TxBasicHandleStop           
  TxBasicHwStart              
  TxBasicHwStop               
  TxFullHandleMax             
  TxFullHandleStart           
  TxFullHandleStop            
  TxFullHwStart               
  TxFullHwStop                
  UnusedHandleMax             
  UnusedHandleStart           
  UnusedHandleStop            
  UnusedHwStart               
  UnusedHwStop                
*/ 
#define CAN_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(Can_ControllerConfigType, CAN_CONST) Can_ControllerConfig[1] = {
    /* Index    CanControllerDefaultBaudrate  RxBasicHandleMax  RxBasicHandleStart  RxBasicHandleStop  RxBasicHwStart  RxBasicHwStop  RxFullHandleMax  RxFullHandleStart  RxFullHandleStop  RxFullHwStart  RxFullHwStop  TxBasicHandleMax  TxBasicHandleStart  TxBasicHandleStop  TxBasicHwStart  TxBasicHwStop  TxFullHandleMax  TxFullHandleStart  TxFullHandleStop  TxFullHwStart  TxFullHwStop  UnusedHandleMax  UnusedHandleStart  UnusedHandleStop  UnusedHwStart  UnusedHwStop        Comment */
  { /*     0 */                         500U,               1U,                42U,               43U,            96U,           97U,             41U,                1U,              42U,           32U,          73U,               1U,                 0U,                1U,             0U,            1U,              0U,                0U,               0U,            0U,           0U,              3U,               43U,              46U,            0U,           0U }   /* [CT_FD1_CAN_b4e1ca3b] */
};
#define CAN_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Can_FBTP
**********************************************************************************************************************/
/** 
  \var    Can_FBTP
  \brief  Fast Bit Timing and Prescaler
*/ 
#define CAN_START_SEC_CONST_32BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(Can_FBTPType, CAN_CONST) Can_FBTP[1] = {
  /* Index    FBTP              Comment */
  /*     0 */ 0x00030611UL   /* [CT_FD1_CAN_b4e1ca3b - CanControllerBaudrateConfig] */
};
#define CAN_STOP_SEC_CONST_32BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Can_GFC
**********************************************************************************************************************/
#define CAN_START_SEC_CONST_32BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(Can_GFCType, CAN_CONST) Can_GFC[1] = {
  /* Index    GFC               Comment */
  /*     0 */ 0x0000003FUL   /* [CT_FD1_CAN_b4e1ca3b] */
};
#define CAN_STOP_SEC_CONST_32BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Can_InitObjectBaudrate
**********************************************************************************************************************/
/** 
  \var    Can_InitObjectBaudrate
  \brief  baudrates ('InitStruct' as index)
*/ 
#define CAN_START_SEC_CONST_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(Can_InitObjectBaudrateType, CAN_CONST) Can_InitObjectBaudrate[1] = {
  /* Index    InitObjectBaudrate      Comment */
  /*     0 */               500U   /* [CT_FD1_CAN_b4e1ca3b - CanControllerBaudrateConfig] */
};
#define CAN_STOP_SEC_CONST_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Can_InitObjectFdBrsConfig
**********************************************************************************************************************/
/** 
  \var    Can_InitObjectFdBrsConfig
  \brief  FD config ('BaudrateObject' as index)
*/ 
#define CAN_START_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(Can_InitObjectFdBrsConfigType, CAN_CONST) Can_InitObjectFdBrsConfig[1] = {
  /* Index    InitObjectFdBrsConfig              */
  /*     0 */ CAN_FD_RXTX_INITOBJECTFDBRSCONFIG
};
#define CAN_STOP_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Can_InitObjectStartIndex
**********************************************************************************************************************/
/** 
  \var    Can_InitObjectStartIndex
  \brief  Start index of 'InitStruct'  / baudratesets (controllers as index)
*/ 
#define CAN_START_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(Can_InitObjectStartIndexType, CAN_CONST) Can_InitObjectStartIndex[2] = {
  /* Index    InitObjectStartIndex      Comment */
  /*     0 */                   0U,  /* [CT_FD1_CAN_b4e1ca3b] */
  /*     1 */                   1U   /* [stop index] */
};
#define CAN_STOP_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Can_IsTTCan
**********************************************************************************************************************/
/** 
  \var    Can_IsTTCan
  \brief  TTCAN channel support
*/ 
#define CAN_START_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(Can_IsTTCanType, CAN_CONST) Can_IsTTCan[1] = {
  /* Index    IsTTCan      Comment */
  /*     0 */   FALSE   /* [CT_FD1_CAN_b4e1ca3b] */
};
#define CAN_STOP_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Can_Mailbox
**********************************************************************************************************************/
/** 
  \var    Can_Mailbox
  \brief  mailbox configuration (over all controllers)
  \details
  Element          Description
  IDValue      
  DLC_FIFO     
  FdPadding    
  HwHandle     
  MailboxType  
  MaxDataLen   
  MsgController
*/ 
#define CAN_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(Can_MailboxType, CAN_CONST) Can_Mailbox[46] = {
    /* Index    IDValue  DLC_FIFO  FdPadding  HwHandle  MailboxType                                MaxDataLen  MsgController        Comment */
  { /*     0 */ 0x0000U,       1U,        0U,       0U, CAN_TX_BASICCAN_TYPE_MAILBOXTYPEOFMAILBOX,        64U,            0U },  /* [CN_FD1_CAN_b4e1ca3b_Tx_Std] */
  { /*     1 */ 0x1234U,       1U,        0U,      32U,  CAN_RX_FULLCAN_TYPE_MAILBOXTYPEOFMAILBOX,         8U,            0U },  /* [CanHardwareObject_CanIfRxPduCfg_Nm_Dummy] */
  { /*     2 */ 0x04B0U,       1U,        0U,      33U,  CAN_RX_FULLCAN_TYPE_MAILBOXTYPEOFMAILBOX,         8U,            0U },  /* [CanHardwareObject_ABS_BrkBst_Data_FD1_oFD1_CAN_Rx_3abd61be] */
  { /*     3 */ 0x047AU,       1U,        0U,      34U,  CAN_RX_FULLCAN_TYPE_MAILBOXTYPEOFMAILBOX,         8U,            0U },  /* [CanHardwareObject_TrailerInfo_2_FD1_oFD1_CAN_Rx_3abd61be] */
  { /*     4 */ 0x045CU,       1U,        0U,      35U,  CAN_RX_FULLCAN_TYPE_MAILBOXTYPEOFMAILBOX,         8U,            0U },  /* [CanHardwareObject_TrailerAid_Data3_FD1_oFD1_CAN_Rx_3abd61be] */
  { /*     5 */ 0x045AU,       1U,        0U,      36U,  CAN_RX_FULLCAN_TYPE_MAILBOXTYPEOFMAILBOX,         8U,            0U },  /* [CanHardwareObject_TrailerAid_Data_FD1_oFD1_CAN_Rx_3abd61be] */
  { /*     6 */ 0x0459U,       1U,        0U,      37U,  CAN_RX_FULLCAN_TYPE_MAILBOXTYPEOFMAILBOX,         8U,            0U },  /* [CanHardwareObject_TrailerAid_Stat3_FD1_oFD1_CAN_Rx_3abd61be] */
  { /*     7 */ 0x0457U,       1U,        0U,      38U,  CAN_RX_FULLCAN_TYPE_MAILBOXTYPEOFMAILBOX,         8U,            0U },  /* [CanHardwareObject_TrailerAid_Stat2_FD1_oFD1_CAN_Rx_3abd61be] */
  { /*     8 */ 0x0452U,       1U,        0U,      39U,  CAN_RX_FULLCAN_TYPE_MAILBOXTYPEOFMAILBOX,         8U,            0U },  /* [CanHardwareObject_TrailerAid_Stat1_FD1_oFD1_CAN_Rx_3abd61be] */
  { /*     9 */ 0x0451U,       1U,        0U,      40U,  CAN_RX_FULLCAN_TYPE_MAILBOXTYPEOFMAILBOX,         8U,            0U },  /* [CanHardwareObject_Image_Processing_Data_FD1_oFD1_CAN_Rx_3abd61be] */
  { /*    10 */ 0x0445U,       1U,        0U,      41U,  CAN_RX_FULLCAN_TYPE_MAILBOXTYPEOFMAILBOX,         8U,            0U },  /* [CanHardwareObject_TrailerBrakeInfo_FD1_oFD1_CAN_Rx_3abd61be] */
  { /*    11 */ 0x0443U,       1U,        0U,      42U,  CAN_RX_FULLCAN_TYPE_MAILBOXTYPEOFMAILBOX,         8U,            0U },  /* [CanHardwareObject_TrailerInfo_FD1_oFD1_CAN_Rx_3abd61be] */
  { /*    12 */ 0x0430U,       1U,        0U,      43U,  CAN_RX_FULLCAN_TYPE_MAILBOXTYPEOFMAILBOX,         8U,            0U },  /* [CanHardwareObject_Cluster_Info1_FD1_oFD1_CAN_Rx_3abd61be] */
  { /*    13 */ 0x041EU,       1U,        0U,      44U,  CAN_RX_FULLCAN_TYPE_MAILBOXTYPEOFMAILBOX,         8U,            0U },  /* [CanHardwareObject_BrakeSysFeatures_3_oFD1_CAN_Rx_3abd61be] */
  { /*    14 */ 0x041AU,       1U,        0U,      45U,  CAN_RX_FULLCAN_TYPE_MAILBOXTYPEOFMAILBOX,         8U,            0U },  /* [CanHardwareObject_Climate_Control_Data_FD1_oFD1_CAN_Rx_3abd61be] */
  { /*    15 */ 0x0415U,       1U,        0U,      46U,  CAN_RX_FULLCAN_TYPE_MAILBOXTYPEOFMAILBOX,         8U,            0U },  /* [CanHardwareObject_BrakeSysFeatures_FD1_oFD1_CAN_Rx_3abd61be] */
  { /*    16 */ 0x0414U,       1U,        0U,      47U,  CAN_RX_FULLCAN_TYPE_MAILBOXTYPEOFMAILBOX,         8U,            0U },  /* [CanHardwareObject_BrakeSnData_6_FD1_oFD1_CAN_Rx_3abd61be] */
  { /*    17 */ 0x040AU,       1U,        0U,      48U,  CAN_RX_FULLCAN_TYPE_MAILBOXTYPEOFMAILBOX,         8U,            0U },  /* [CanHardwareObject_GGCC_Config_Mgmt_ID_1_FD1_oFD1_CAN_Rx_3abd61be] */
  { /*    18 */ 0x03F1U,       1U,        0U,      49U,  CAN_RX_FULLCAN_TYPE_MAILBOXTYPEOFMAILBOX,         8U,            0U },  /* [CanHardwareObject_APIM_Send_Signals1_FD1_oFD1_CAN_Rx_3abd61be] */
  { /*    19 */ 0x03D7U,       1U,        0U,      50U,  CAN_RX_FULLCAN_TYPE_MAILBOXTYPEOFMAILBOX,         8U,            0U },  /* [CanHardwareObject_Steer_Assist_Data_FD1_oFD1_CAN_Rx_3abd61be] */
  { /*    20 */ 0x03D3U,       1U,        0U,      51U,  CAN_RX_FULLCAN_TYPE_MAILBOXTYPEOFMAILBOX,         8U,            0U },  /* [CanHardwareObject_LateralMotionControl_FD1_oFD1_CAN_Rx_3abd61be] */
  { /*    21 */ 0x03CAU,       1U,        0U,      52U,  CAN_RX_FULLCAN_TYPE_MAILBOXTYPEOFMAILBOX,         8U,            0U },  /* [CanHardwareObject_Lane_Assist_Data1_FD1_oFD1_CAN_Rx_3abd61be] */
  { /*    22 */ 0x03B3U,       1U,        0U,      53U,  CAN_RX_FULLCAN_TYPE_MAILBOXTYPEOFMAILBOX,         8U,            0U },  /* [CanHardwareObject_BodyInfo_3_FD1_oFD1_CAN_Rx_3abd61be] */
  { /*    23 */ 0x03A8U,       1U,        0U,      54U,  CAN_RX_FULLCAN_TYPE_MAILBOXTYPEOFMAILBOX,         8U,            0U },  /* [CanHardwareObject_ParkAid_Data_FD1_oFD1_CAN_Rx_3abd61be] */
  { /*    24 */ 0x02FDU,       1U,        0U,      55U,  CAN_RX_FULLCAN_TYPE_MAILBOXTYPEOFMAILBOX,         8U,            0U },  /* [CanHardwareObject_Mc_Send_Signals_2_FD1_oFD1_CAN_Rx_3abd61be] */
  { /*    25 */ 0x0242U,       1U,        0U,      56U,  CAN_RX_FULLCAN_TYPE_MAILBOXTYPEOFMAILBOX,         8U,            0U },  /* [CanHardwareObject_Body_Info_4_FD1_oFD1_CAN_Rx_3abd61be] */
  { /*    26 */ 0x0230U,       1U,        0U,      57U,  CAN_RX_FULLCAN_TYPE_MAILBOXTYPEOFMAILBOX,         8U,            0U },  /* [CanHardwareObject_TransGearData_FD1_oFD1_CAN_Rx_3abd61be] */
  { /*    27 */ 0x0217U,       1U,        0U,      58U,  CAN_RX_FULLCAN_TYPE_MAILBOXTYPEOFMAILBOX,         8U,            0U },  /* [CanHardwareObject_WheelSpeed_FD1_oFD1_CAN_Rx_3abd61be] */
  { /*    28 */ 0x0216U,       1U,        0U,      59U,  CAN_RX_FULLCAN_TYPE_MAILBOXTYPEOFMAILBOX,         8U,            0U },  /* [CanHardwareObject_WheelData_FD1_oFD1_CAN_Rx_3abd61be] */
  { /*    29 */ 0x0215U,       1U,        0U,      60U,  CAN_RX_FULLCAN_TYPE_MAILBOXTYPEOFMAILBOX,         8U,            0U },  /* [CanHardwareObject_APIM_Send_Signals_2_FD1_oFD1_CAN_Rx_3abd61be] */
  { /*    30 */ 0x0213U,       1U,        0U,      61U,  CAN_RX_FULLCAN_TYPE_MAILBOXTYPEOFMAILBOX,         8U,            0U },  /* [CanHardwareObject_DesiredTorqBrk_FD1_oFD1_CAN_Rx_3abd61be] */
  { /*    31 */ 0x0204U,       1U,        0U,      62U,  CAN_RX_FULLCAN_TYPE_MAILBOXTYPEOFMAILBOX,         8U,            0U },  /* [CanHardwareObject_EngVehicleSpThrottle_FD1_oFD1_CAN_Rx_3abd61be] */
  { /*    32 */ 0x0202U,       1U,        0U,      63U,  CAN_RX_FULLCAN_TYPE_MAILBOXTYPEOFMAILBOX,         8U,            0U },  /* [CanHardwareObject_EngVehicleSpThrottle2_FD1_oFD1_CAN_Rx_3abd61be] */
  { /*    33 */ 0x0176U,       1U,        0U,      64U,  CAN_RX_FULLCAN_TYPE_MAILBOXTYPEOFMAILBOX,         8U,            0U },  /* [CanHardwareObject_PowertrainData_10_FD1_oFD1_CAN_Rx_3abd61be] */
  { /*    34 */ 0x0167U,       1U,        0U,      65U,  CAN_RX_FULLCAN_TYPE_MAILBOXTYPEOFMAILBOX,         8U,            0U },  /* [CanHardwareObject_VehicleOperatingModes_FD1_oFD1_CAN_Rx_3abd61be] */
  { /*    35 */ 0x0165U,       1U,        0U,      66U,  CAN_RX_FULLCAN_TYPE_MAILBOXTYPEOFMAILBOX,         8U,            0U },  /* [CanHardwareObject_EngBrakeData_FD1_oFD1_CAN_Rx_3abd61be] */
  { /*    36 */ 0x0091U,       1U,        0U,      67U,  CAN_RX_FULLCAN_TYPE_MAILBOXTYPEOFMAILBOX,         8U,            0U },  /* [CanHardwareObject_Yaw_Data_FD1_oFD1_CAN_Rx_3abd61be] */
  { /*    37 */ 0x008AU,       1U,        0U,      68U,  CAN_RX_FULLCAN_TYPE_MAILBOXTYPEOFMAILBOX,         8U,            0U },  /* [CanHardwareObject_ActiveFrontStrg_Stat2_FD1_oFD1_CAN_Rx_3abd61be] */
  { /*    38 */ 0x0083U,       1U,        0U,      69U,  CAN_RX_FULLCAN_TYPE_MAILBOXTYPEOFMAILBOX,         8U,            0U },  /* [CanHardwareObject_Steering_Data_FD1_oFD1_CAN_Rx_3abd61be] */
  { /*    39 */ 0x007DU,       1U,        0U,      70U,  CAN_RX_FULLCAN_TYPE_MAILBOXTYPEOFMAILBOX,         8U,            0U },  /* [CanHardwareObject_BrakeSnData_4_FD1_oFD1_CAN_Rx_3abd61be] */
  { /*    40 */ 0x0077U,       1U,        0U,      71U,  CAN_RX_FULLCAN_TYPE_MAILBOXTYPEOFMAILBOX,         8U,            0U },  /* [CanHardwareObject_BrakeSnData_3_FD1_oFD1_CAN_Rx_3abd61be] */
  { /*    41 */ 0x0076U,       1U,        0U,      72U,  CAN_RX_FULLCAN_TYPE_MAILBOXTYPEOFMAILBOX,         8U,            0U },  /* [CanHardwareObject_BrakeSnData_5_FD1_oFD1_CAN_Rx_3abd61be] */
  { /*    42 */ 0x0000U,       1U,        0U,      96U, CAN_RX_BASICCAN_TYPE_MAILBOXTYPEOFMAILBOX,        64U,            0U },  /* [CN_FD1_CAN_b4e1ca3b_Rx_Std] */
  { /*    43 */ 0x0000U,      31U,        0U,       1U,  CAN_UNUSED_CAN_TYPE_MAILBOXTYPEOFMAILBOX,         0U,            0U },  /* [] */
  { /*    44 */ 0x0000U,      23U,        0U,      73U,  CAN_UNUSED_CAN_TYPE_MAILBOXTYPEOFMAILBOX,         0U,            0U },  /* [] */
  { /*    45 */ 0x0000U,       1U,        0U,      97U,  CAN_UNUSED_CAN_TYPE_MAILBOXTYPEOFMAILBOX,         0U,            0U }   /* [] */
};
#define CAN_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Can_PhysToLogChannel
**********************************************************************************************************************/
/** 
  \var    Can_PhysToLogChannel
  \brief  indirection table physical to logical controller
*/ 
#define CAN_START_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(Can_PhysToLogChannelType, CAN_CONST) Can_PhysToLogChannel[2] = {
  /* Index    PhysToLogChannel             Comment */
  /*     0 */ CAN_NO_PHYSTOLOGCHANNEL,  /* [dummy element] */
  /*     1 */                      0U   /* [CT_FD1_CAN_b4e1ca3b] */
};
#define CAN_STOP_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Can_SIDFC
**********************************************************************************************************************/
/** 
  \var    Can_SIDFC
  \brief  Standard ID filter configuration
  \details
  Element          Description
  FLSSA            Filter List Standard Start Address
  SIDFEEndIdx      the end index of the 0:n relation pointing to Can_SIDFE
  SIDFEStartIdx    the start index of the 0:n relation pointing to Can_SIDFE
  LSS              List size standard
*/ 
#define CAN_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(Can_SIDFCType, CAN_CONST) Can_SIDFC[1] = {
    /* Index    FLSSA    SIDFEEndIdx                                                          SIDFEStartIdx                                                          LSS          Comment */
  { /*     0 */ 0x0000U,         42U  /* /ActiveEcuC/Can/CanConfigSet/CT_FD1_CAN_b4e1ca3b */,            0U  /* /ActiveEcuC/Can/CanConfigSet/CT_FD1_CAN_b4e1ca3b */, 0x2AU }   /* [CT_FD1_CAN_b4e1ca3b] */
};
#define CAN_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Can_SIDFE
**********************************************************************************************************************/
/** 
  \var    Can_SIDFE
  \brief  Standard ID filters
*/ 
#define CAN_START_SEC_CONST_32BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(Can_SIDFEType, CAN_CONST) Can_SIDFE[42] = {
  /* Index    SIDFE                                    Comment                      Referable Keys */
  /*     0 */ 0xBA340000UL  /* FULLCAN_0 */      ,  /* [CT_FD1_CAN_b4e1ca3b] */  /* [/ActiveEcuC/Can/CanConfigSet/CT_FD1_CAN_b4e1ca3b] */
  /*     1 */ 0xBCB00001UL  /* FULLCAN_1 */      ,  /* [CT_FD1_CAN_b4e1ca3b] */  /* [/ActiveEcuC/Can/CanConfigSet/CT_FD1_CAN_b4e1ca3b] */
  /*     2 */ 0xBC7A0002UL  /* FULLCAN_2 */      ,  /* [CT_FD1_CAN_b4e1ca3b] */  /* [/ActiveEcuC/Can/CanConfigSet/CT_FD1_CAN_b4e1ca3b] */
  /*     3 */ 0xBC5C0003UL  /* FULLCAN_3 */      ,  /* [CT_FD1_CAN_b4e1ca3b] */  /* [/ActiveEcuC/Can/CanConfigSet/CT_FD1_CAN_b4e1ca3b] */
  /*     4 */ 0xBC5A0004UL  /* FULLCAN_4 */      ,  /* [CT_FD1_CAN_b4e1ca3b] */  /* [/ActiveEcuC/Can/CanConfigSet/CT_FD1_CAN_b4e1ca3b] */
  /*     5 */ 0xBC590005UL  /* FULLCAN_5 */      ,  /* [CT_FD1_CAN_b4e1ca3b] */  /* [/ActiveEcuC/Can/CanConfigSet/CT_FD1_CAN_b4e1ca3b] */
  /*     6 */ 0xBC570006UL  /* FULLCAN_6 */      ,  /* [CT_FD1_CAN_b4e1ca3b] */  /* [/ActiveEcuC/Can/CanConfigSet/CT_FD1_CAN_b4e1ca3b] */
  /*     7 */ 0xBC520007UL  /* FULLCAN_7 */      ,  /* [CT_FD1_CAN_b4e1ca3b] */  /* [/ActiveEcuC/Can/CanConfigSet/CT_FD1_CAN_b4e1ca3b] */
  /*     8 */ 0xBC510008UL  /* FULLCAN_8 */      ,  /* [CT_FD1_CAN_b4e1ca3b] */  /* [/ActiveEcuC/Can/CanConfigSet/CT_FD1_CAN_b4e1ca3b] */
  /*     9 */ 0xBC450009UL  /* FULLCAN_9 */      ,  /* [CT_FD1_CAN_b4e1ca3b] */  /* [/ActiveEcuC/Can/CanConfigSet/CT_FD1_CAN_b4e1ca3b] */
  /*    10 */ 0xBC43000AUL  /* FULLCAN_10 */     ,  /* [CT_FD1_CAN_b4e1ca3b] */  /* [/ActiveEcuC/Can/CanConfigSet/CT_FD1_CAN_b4e1ca3b] */
  /*    11 */ 0xBC30000BUL  /* FULLCAN_11 */     ,  /* [CT_FD1_CAN_b4e1ca3b] */  /* [/ActiveEcuC/Can/CanConfigSet/CT_FD1_CAN_b4e1ca3b] */
  /*    12 */ 0xBC1E000CUL  /* FULLCAN_12 */     ,  /* [CT_FD1_CAN_b4e1ca3b] */  /* [/ActiveEcuC/Can/CanConfigSet/CT_FD1_CAN_b4e1ca3b] */
  /*    13 */ 0xBC1A000DUL  /* FULLCAN_13 */     ,  /* [CT_FD1_CAN_b4e1ca3b] */  /* [/ActiveEcuC/Can/CanConfigSet/CT_FD1_CAN_b4e1ca3b] */
  /*    14 */ 0xBC15000EUL  /* FULLCAN_14 */     ,  /* [CT_FD1_CAN_b4e1ca3b] */  /* [/ActiveEcuC/Can/CanConfigSet/CT_FD1_CAN_b4e1ca3b] */
  /*    15 */ 0xBC14000FUL  /* FULLCAN_15 */     ,  /* [CT_FD1_CAN_b4e1ca3b] */  /* [/ActiveEcuC/Can/CanConfigSet/CT_FD1_CAN_b4e1ca3b] */
  /*    16 */ 0xBC0A0010UL  /* FULLCAN_16 */     ,  /* [CT_FD1_CAN_b4e1ca3b] */  /* [/ActiveEcuC/Can/CanConfigSet/CT_FD1_CAN_b4e1ca3b] */
  /*    17 */ 0xBBF10011UL  /* FULLCAN_17 */     ,  /* [CT_FD1_CAN_b4e1ca3b] */  /* [/ActiveEcuC/Can/CanConfigSet/CT_FD1_CAN_b4e1ca3b] */
  /*    18 */ 0xBBD70012UL  /* FULLCAN_18 */     ,  /* [CT_FD1_CAN_b4e1ca3b] */  /* [/ActiveEcuC/Can/CanConfigSet/CT_FD1_CAN_b4e1ca3b] */
  /*    19 */ 0xBBD30013UL  /* FULLCAN_19 */     ,  /* [CT_FD1_CAN_b4e1ca3b] */  /* [/ActiveEcuC/Can/CanConfigSet/CT_FD1_CAN_b4e1ca3b] */
  /*    20 */ 0xBBCA0014UL  /* FULLCAN_20 */     ,  /* [CT_FD1_CAN_b4e1ca3b] */  /* [/ActiveEcuC/Can/CanConfigSet/CT_FD1_CAN_b4e1ca3b] */
  /*    21 */ 0xBBB30015UL  /* FULLCAN_21 */     ,  /* [CT_FD1_CAN_b4e1ca3b] */  /* [/ActiveEcuC/Can/CanConfigSet/CT_FD1_CAN_b4e1ca3b] */
  /*    22 */ 0xBBA80016UL  /* FULLCAN_22 */     ,  /* [CT_FD1_CAN_b4e1ca3b] */  /* [/ActiveEcuC/Can/CanConfigSet/CT_FD1_CAN_b4e1ca3b] */
  /*    23 */ 0xBAFD0017UL  /* FULLCAN_23 */     ,  /* [CT_FD1_CAN_b4e1ca3b] */  /* [/ActiveEcuC/Can/CanConfigSet/CT_FD1_CAN_b4e1ca3b] */
  /*    24 */ 0xBA420018UL  /* FULLCAN_24 */     ,  /* [CT_FD1_CAN_b4e1ca3b] */  /* [/ActiveEcuC/Can/CanConfigSet/CT_FD1_CAN_b4e1ca3b] */
  /*    25 */ 0xBA300019UL  /* FULLCAN_25 */     ,  /* [CT_FD1_CAN_b4e1ca3b] */  /* [/ActiveEcuC/Can/CanConfigSet/CT_FD1_CAN_b4e1ca3b] */
  /*    26 */ 0xBA17001AUL  /* FULLCAN_26 */     ,  /* [CT_FD1_CAN_b4e1ca3b] */  /* [/ActiveEcuC/Can/CanConfigSet/CT_FD1_CAN_b4e1ca3b] */
  /*    27 */ 0xBA16001BUL  /* FULLCAN_27 */     ,  /* [CT_FD1_CAN_b4e1ca3b] */  /* [/ActiveEcuC/Can/CanConfigSet/CT_FD1_CAN_b4e1ca3b] */
  /*    28 */ 0xBA15001CUL  /* FULLCAN_28 */     ,  /* [CT_FD1_CAN_b4e1ca3b] */  /* [/ActiveEcuC/Can/CanConfigSet/CT_FD1_CAN_b4e1ca3b] */
  /*    29 */ 0xBA13001DUL  /* FULLCAN_29 */     ,  /* [CT_FD1_CAN_b4e1ca3b] */  /* [/ActiveEcuC/Can/CanConfigSet/CT_FD1_CAN_b4e1ca3b] */
  /*    30 */ 0xBA04001EUL  /* FULLCAN_30 */     ,  /* [CT_FD1_CAN_b4e1ca3b] */  /* [/ActiveEcuC/Can/CanConfigSet/CT_FD1_CAN_b4e1ca3b] */
  /*    31 */ 0xBA02001FUL  /* FULLCAN_31 */     ,  /* [CT_FD1_CAN_b4e1ca3b] */  /* [/ActiveEcuC/Can/CanConfigSet/CT_FD1_CAN_b4e1ca3b] */
  /*    32 */ 0xB9760020UL  /* FULLCAN_32 */     ,  /* [CT_FD1_CAN_b4e1ca3b] */  /* [/ActiveEcuC/Can/CanConfigSet/CT_FD1_CAN_b4e1ca3b] */
  /*    33 */ 0xB9670021UL  /* FULLCAN_33 */     ,  /* [CT_FD1_CAN_b4e1ca3b] */  /* [/ActiveEcuC/Can/CanConfigSet/CT_FD1_CAN_b4e1ca3b] */
  /*    34 */ 0xB9650022UL  /* FULLCAN_34 */     ,  /* [CT_FD1_CAN_b4e1ca3b] */  /* [/ActiveEcuC/Can/CanConfigSet/CT_FD1_CAN_b4e1ca3b] */
  /*    35 */ 0xB8910023UL  /* FULLCAN_35 */     ,  /* [CT_FD1_CAN_b4e1ca3b] */  /* [/ActiveEcuC/Can/CanConfigSet/CT_FD1_CAN_b4e1ca3b] */
  /*    36 */ 0xB88A0024UL  /* FULLCAN_36 */     ,  /* [CT_FD1_CAN_b4e1ca3b] */  /* [/ActiveEcuC/Can/CanConfigSet/CT_FD1_CAN_b4e1ca3b] */
  /*    37 */ 0xB8830025UL  /* FULLCAN_37 */     ,  /* [CT_FD1_CAN_b4e1ca3b] */  /* [/ActiveEcuC/Can/CanConfigSet/CT_FD1_CAN_b4e1ca3b] */
  /*    38 */ 0xB87D0026UL  /* FULLCAN_38 */     ,  /* [CT_FD1_CAN_b4e1ca3b] */  /* [/ActiveEcuC/Can/CanConfigSet/CT_FD1_CAN_b4e1ca3b] */
  /*    39 */ 0xB8770027UL  /* FULLCAN_39 */     ,  /* [CT_FD1_CAN_b4e1ca3b] */  /* [/ActiveEcuC/Can/CanConfigSet/CT_FD1_CAN_b4e1ca3b] */
  /*    40 */ 0xB8760028UL  /* FULLCAN_40 */     ,  /* [CT_FD1_CAN_b4e1ca3b] */  /* [/ActiveEcuC/Can/CanConfigSet/CT_FD1_CAN_b4e1ca3b] */
  /*    41 */ 0x8E000600UL  /*  I: 0 S0 FIFO_0 */   /* [CT_FD1_CAN_b4e1ca3b] */  /* [/ActiveEcuC/Can/CanConfigSet/CT_FD1_CAN_b4e1ca3b] */
};
#define CAN_STOP_SEC_CONST_32BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Can_ShmAdr
**********************************************************************************************************************/
/** 
  \var    Can_ShmAdr
  \brief  CAN Shared Message RAM configuration
  \details
  Element     Description
  RXBA        RX Buffer Address
  RXF0A       RX FIFO0 Address
  RXF1A       RX FIFO1 Address
  SIDFA       Standard Filters Address
  StartAdr    Start address of the shared memory area
  StopAdr     Stop address of the shared memory area
  TXBA        TX Buffer address
  TXEFA       TX Event FIFO address
  XIDFA       Extended Filters Address
*/ 
#define CAN_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(Can_ShmAdrType, CAN_CONST) Can_ShmAdr[1] = {
    /* Index    RXBA                               RXF0A                             RXF1A                           SIDFA                             StartAdr      StopAdr       TXBA                             TXEFA                           XIDFA                                 Comment */
  { /*     0 */ 0xFFEF8258UL  /* Size[B]: 2952 */, 0xFFEF80A8UL  /* Size[B]: 432 */, 0xFFEF8000UL  /* Size[B]: 0 */, 0xFFEF8000UL  /* Size[B]: 168 */, 0xFFEF8000UL, 0xFFEF8E29UL, 0xFFEF8DE0UL  /* Size[B]: 72 */, 0xFFEF8000UL  /* Size[B]: 0 */, 0xFFEF8000UL  /* Size[B]: 0 */ }   /* [CT_FD1_CAN_b4e1ca3b] */
};
#define CAN_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Can_ShmElementSize
**********************************************************************************************************************/
/** 
  \var    Can_ShmElementSize
  \brief  data buffer size in case of CAN_FD Full
  \details
  Element    Description
  F0DS   
  F1DS   
  RBDS   
  TBDS   
  TEFBDS 
*/ 
#define CAN_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(Can_ShmElementSizeType, CAN_CONST) Can_ShmElementSize[1] = {
    /* Index    F0DS                  F1DS                 RBDS                  TBDS                  TEFBDS                        Comment */
  { /*     0 */ 0x07U  /* F0DS 64 */, 0x00U  /* F1DS 8 */, 0x07U  /* RBDS 64 */, 0x07U  /* TBDS 64 */,  0x00U  /* EFTBDS 8 */ }   /* [CT_FD1_CAN_b4e1ca3b] */
};
#define CAN_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Can_TDCR
**********************************************************************************************************************/
/** 
  \var    Can_TDCR
  \brief  Transmitter Delay Compensation
*/ 
#define CAN_START_SEC_CONST_32BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(Can_TDCRType, CAN_CONST) Can_TDCR[1] = {
  /* Index    TDCR              Comment */
  /*     0 */ 0x00000000UL   /* [CT_FD1_CAN_b4e1ca3b - CanControllerBaudrateConfig] */
};
#define CAN_STOP_SEC_CONST_32BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Can_TxOffsetHwToLog
**********************************************************************************************************************/
/** 
  \var    Can_TxOffsetHwToLog
  \brief  tx hardware to logical handle indirection table
*/ 
#define CAN_START_SEC_CONST_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(Can_TxOffsetHwToLogType, CAN_CONST) Can_TxOffsetHwToLog[1] = {
  /* Index    TxOffsetHwToLog      Comment */
  /*     0 */               0   /* [CT_FD1_CAN_b4e1ca3b] */
};
#define CAN_STOP_SEC_CONST_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Can_XIDAM
**********************************************************************************************************************/
#define CAN_START_SEC_CONST_32BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(Can_XIDAMType, CAN_CONST) Can_XIDAM[1] = {
  /* Index    XIDAM             Comment */
  /*     0 */ 0x1FFFFFFFUL   /* [CT_FD1_CAN_b4e1ca3b] */
};
#define CAN_STOP_SEC_CONST_32BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Can_XIDFC
**********************************************************************************************************************/
/** 
  \var    Can_XIDFC
  \brief  Extended ID filter configuration
  \details
  Element    Description
  FLESA      Filter List Extended Start Address
  LSE        List size extended
*/ 
#define CAN_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(Can_XIDFCType, CAN_CONST) Can_XIDFC[1] = {
    /* Index    FLESA    LSE          Comment */
  { /*     0 */ 0x0000U, 0x00U }   /* [CT_FD1_CAN_b4e1ca3b] */
};
#define CAN_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Can_XIDFE
**********************************************************************************************************************/
/** 
  \var    Can_XIDFE
  \brief  Extended ID filters
  \details
  Element    Description
  EIDFE_0
  EIDFE_1
*/ 
#define CAN_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(Can_XIDFEType, CAN_CONST) Can_XIDFE[1] = {
    /* Index    EIDFE_0       EIDFE_1      */
  { /*     0 */ 0x00000000UL, 0x00000000UL }
};
#define CAN_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Can_ActiveSendPdu
**********************************************************************************************************************/
/** 
  \var    Can_ActiveSendPdu
  \brief  temporary pduId buffer for send mailbox
*/ 
#define CAN_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Can_ActiveSendPduType, CAN_VAR_NOINIT) Can_ActiveSendPdu[1];
#define CAN_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Can_ActiveSendState
**********************************************************************************************************************/
/** 
  \var    Can_ActiveSendState
  \brief  temporary send state buffer for send mailbox
*/ 
#define CAN_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Can_ActiveSendStateType, CAN_VAR_NOINIT) Can_ActiveSendState[1];
#define CAN_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Can_BusOffNotification
**********************************************************************************************************************/
/** 
  \var    Can_BusOffNotification
  \brief  CAN state for each controller: busoff occur
*/ 
#define CAN_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
volatile VAR(Can_BusOffNotificationType, CAN_VAR_NOINIT) Can_BusOffNotification[1];
#define CAN_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Can_CanInterruptCounter
**********************************************************************************************************************/
/** 
  \var    Can_CanInterruptCounter
  \brief  CAN interrupt disable counter for each controller
*/ 
#define CAN_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
volatile VAR(Can_CanInterruptCounterType, CAN_VAR_NOINIT) Can_CanInterruptCounter[1];
#define CAN_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Can_CanInterruptOldStatus
**********************************************************************************************************************/
/** 
  \var    Can_CanInterruptOldStatus
  \brief  last CAN interrupt status for restore interrupt for each controller
*/ 
#define CAN_START_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(tCanLLCanIntOld, CAN_VAR_NOINIT) Can_CanInterruptOldStatus[1];
#define CAN_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Can_IntEnable
**********************************************************************************************************************/
/** 
  \var    Can_IntEnable
  \brief  CAN Interrupt Enable state for each controller
*/ 
#define CAN_START_SEC_VAR_NOINIT_32BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
volatile VAR(Can_IntEnableType, CAN_VAR_NOINIT) Can_IntEnable[1];
#define CAN_STOP_SEC_VAR_NOINIT_32BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Can_IsBusOff
**********************************************************************************************************************/
/** 
  \var    Can_IsBusOff
  \brief  CAN state for each controller: busoff occur
*/ 
#define CAN_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
volatile VAR(Can_IsBusOffType, CAN_VAR_NOINIT) Can_IsBusOff[1];
#define CAN_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Can_IsHardwareCanceled
**********************************************************************************************************************/
/** 
  \var    Can_IsHardwareCanceled
  \brief  hw loop timeout occur for controller
*/ 
#define CAN_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Can_IsHardwareCanceledType, CAN_VAR_NOINIT) Can_IsHardwareCanceled[1];
#define CAN_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Can_LastInitObject
**********************************************************************************************************************/
/** 
  \var    Can_LastInitObject
  \brief  last set baudrate for reinit
*/ 
#define CAN_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Can_LastInitObjectType, CAN_VAR_NOINIT) Can_LastInitObject[1];
#define CAN_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Can_LogStatus
**********************************************************************************************************************/
/** 
  \var    Can_LogStatus
  \brief  CAN state for each controller: UNINIT=0x00, START=0x01, STOP=0x02, INIT=0x04, INCONSISTENT=0x08, WARNING =0x10, PASSIVE=0x20, BUSOFF=0x40, SLEEP=0x80
*/ 
#define CAN_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
volatile VAR(Can_LogStatusType, CAN_VAR_NOINIT) Can_LogStatus[1];
#define CAN_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Can_LoopTimeout
**********************************************************************************************************************/
/** 
  \var    Can_LoopTimeout
  \brief  hw loop timeout for each controller
*/ 
#define CAN_START_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Can_LoopTimeout_dim_type, CAN_VAR_NOINIT) Can_LoopTimeout[1];
#define CAN_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Can_NonFdObjectsPendingFlag
**********************************************************************************************************************/
/** 
  \var    Can_NonFdObjectsPendingFlag
  \brief  CAN Tx Objects pending with CAN-FD format
*/ 
#define CAN_START_SEC_VAR_NOINIT_32BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
volatile VAR(Can_NonFdObjectsPendingFlagType, CAN_VAR_NOINIT) Can_NonFdObjectsPendingFlag[1];
#define CAN_STOP_SEC_VAR_NOINIT_32BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Can_StatusReq
**********************************************************************************************************************/
/** 
  \var    Can_StatusReq
  \brief  CAN state request for each controller: START=0x01, STOP=0x02, WAKEUP=0x08, SLEEP=0x80
*/ 
#define CAN_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
volatile VAR(Can_StatusReqType, CAN_VAR_NOINIT) Can_StatusReq[1];
#define CAN_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Can_TXBCR
**********************************************************************************************************************/
/** 
  \var    Can_TXBCR
  \brief  CAN Tx Buffer Cancellation Request for each controller
*/ 
#define CAN_START_SEC_VAR_NOINIT_32BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
volatile VAR(Can_TXBCRType, CAN_VAR_NOINIT) Can_TXBCR[1];
#define CAN_STOP_SEC_VAR_NOINIT_32BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Can_TXBE
**********************************************************************************************************************/
/** 
  \var    Can_TXBE
  \brief  Tx Buffer Element
  \details
  Element    Description
  T0         Tx T0 Buffer Element
  T1         Tx T1 Buffer Element
*/ 
#define CAN_START_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Can_TXBEType, CAN_VAR_NOINIT) Can_TXBE[1];
#define CAN_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Can_TXBRP
**********************************************************************************************************************/
/** 
  \var    Can_TXBRP
  \brief  CAN Tx Buffer request Pending for each controller
*/ 
#define CAN_START_SEC_VAR_NOINIT_32BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
volatile VAR(Can_TXBRPType, CAN_VAR_NOINIT) Can_TXBRP[1];
#define CAN_STOP_SEC_VAR_NOINIT_32BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Can_PCConfig
**********************************************************************************************************************/
/** 
  \var    Can_PCConfig
  \details
  Element             Description
  IdentitySelected
*/ 
#define CAN_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(Can_PCConfigsType, CAN_CONST) Can_PCConfig = {
  { /* Index: 0 Keys: [Config_ECU1] */
      0U
  },
  { /* Index: 1 Keys: [Config_ECU2] */
      1U
  }
};
#define CAN_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */


/**********************************************************************************************************************
  CONFIGURATION CLASS: LINK
  SECTION: GLOBAL DATA
**********************************************************************************************************************/




