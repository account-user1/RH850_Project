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
 *            Module: PduR
 *           Program: MSR_Ford_SLP1 (MSR_Ford_SLP1)
 *          Customer: Nexteer Automotive Corporation
 *       Expiry Date: Not restricted
 *  Ordered Derivat.: R7F701373EABG
 *    License Scope : The usage is restricted to CBD1601056_D00
 *
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *              File: PduR_Lcfg.c
 *   Generation Time: 2018-01-10 16:15:23
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

#define PDUR_LCFG_SOURCE

/**********************************************************************************************************************
 * MISRA / PCLINT JUSTIFICATION
 *********************************************************************************************************************/
/* PRQA S 0779 EOF */ /* MD_MSR_5.1_779 */
/* PRQA S 0777 EOF */ /* MD_MSR_5.1_777 */
/* PRQA S 0612 EOF */ /* MD_MSR_1.1 */


/**********************************************************************************************************************
 * INCLUDES
 *********************************************************************************************************************/
#include "PduR.h"

#if(PDUR_DEV_ERROR_REPORT == STD_ON)
# include "Det.h"
#endif

/* Include headers with callbacks */
#include "PduR_CanIf.h"
#include "PduR_Com.h"
#include "PduR_CanTp.h"
#include "PduR_Dcm.h"


/**********************************************************************************************************************
 * LOCAL CONSTANT MACROS
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * LOCAL FUNCTION MACROS
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * LOCAL DATA TYPES AND STRUCTURES
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * LOCAL DATA PROTOTYPES
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * LOCAL DATA
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * GLOBAL DATA
 *********************************************************************************************************************/
/* \trace SPEC-663, SPEC-661 */

/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: GLOBAL DATA
**********************************************************************************************************************/
/**********************************************************************************************************************
  PduR_CopyRxDataFctPtr
**********************************************************************************************************************/
/** 
  \var    PduR_CopyRxDataFctPtr
  \brief  Transport protocol CopyRxData function pointers
*/ 
#define PDUR_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(PduR_CopyRxDataFctPtrType, PDUR_CONST) PduR_CopyRxDataFctPtr[1] = {
  /* Index     CopyRxDataFctPtr      Referable Keys */
  /*     0 */ Dcm_CopyRxData      /* [/ActiveEcuC/PduR/Dcm] */
};
#define PDUR_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  PduR_CopyTxDataFctPtr
**********************************************************************************************************************/
/** 
  \var    PduR_CopyTxDataFctPtr
  \brief  Transport protocol CopyTxData function pointers
*/ 
#define PDUR_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(PduR_CopyTxDataFctPtrType, PDUR_CONST) PduR_CopyTxDataFctPtr[1] = {
  /* Index     CopyTxDataFctPtr      Referable Keys */
  /*     0 */ Dcm_CopyTxData      /* [/ActiveEcuC/PduR/Dcm] */
};
#define PDUR_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  PduR_IfRoutingStateTable
**********************************************************************************************************************/
/** 
  \var    PduR_IfRoutingStateTable
  \brief  Contains state transition for Communication Interface routings
  \details
  Element                                   Description
  NextState_For_Init_If_Routing_State   
  NextState_For_Wait_For_RxIndication   
  NextState_For_Wait_For_TriggerTransmit
  NextState_For_Wait_For_TxConfirmation 
*/ 
#define PDUR_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(PduR_IfRoutingStateTableType, PDUR_CONST) PduR_IfRoutingStateTable[4] = {
    /* Index    NextState_For_Init_If_Routing_State                                                     NextState_For_Wait_For_RxIndication                                                     NextState_For_Wait_For_TriggerTransmit                                                     NextState_For_Wait_For_TxConfirmation                                                    */
  { /*     0 */    PDUR_WAIT_FOR_RXINDICATION_NEXTSTATE_FOR_INIT_IF_ROUTING_STATEOFIFROUTINGSTATETABLE,    PDUR_WAIT_FOR_RXINDICATION_NEXTSTATE_FOR_WAIT_FOR_RXINDICATIONOFIFROUTINGSTATETABLE,                                                                                       0UL,                                                                                      0UL },
  { /*     1 */ PDUR_WAIT_FOR_TRIGGERTRANSMIT_NEXTSTATE_FOR_INIT_IF_ROUTING_STATEOFIFROUTINGSTATETABLE, PDUR_WAIT_FOR_TRIGGERTRANSMIT_NEXTSTATE_FOR_WAIT_FOR_RXINDICATIONOFIFROUTINGSTATETABLE, PDUR_WAIT_FOR_TRIGGERTRANSMIT_NEXTSTATE_FOR_WAIT_FOR_TRIGGERTRANSMITOFIFROUTINGSTATETABLE,                                                                                      0UL },
  { /*     2 */    PDUR_WAIT_FOR_RXINDICATION_NEXTSTATE_FOR_INIT_IF_ROUTING_STATEOFIFROUTINGSTATETABLE, PDUR_WAIT_FOR_TRIGGERTRANSMIT_NEXTSTATE_FOR_WAIT_FOR_RXINDICATIONOFIFROUTINGSTATETABLE,  PDUR_WAIT_FOR_TXCONFIRMATION_NEXTSTATE_FOR_WAIT_FOR_TRIGGERTRANSMITOFIFROUTINGSTATETABLE, PDUR_WAIT_FOR_TRIGGERTRANSMIT_NEXTSTATE_FOR_WAIT_FOR_TXCONFIRMATIONOFIFROUTINGSTATETABLE },
  { /*     3 */    PDUR_WAIT_FOR_RXINDICATION_NEXTSTATE_FOR_INIT_IF_ROUTING_STATEOFIFROUTINGSTATETABLE,  PDUR_WAIT_FOR_TXCONFIRMATION_NEXTSTATE_FOR_WAIT_FOR_RXINDICATIONOFIFROUTINGSTATETABLE,                                                                                       0UL,  PDUR_WAIT_FOR_TXCONFIRMATION_NEXTSTATE_FOR_WAIT_FOR_TXCONFIRMATIONOFIFROUTINGSTATETABLE }
};
#define PDUR_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  PduR_IfRxIndicationFctPtr
**********************************************************************************************************************/
/** 
  \var    PduR_IfRxIndicationFctPtr
  \brief  Upper layer communication interface Rx indication function pointers.
*/ 
#define PDUR_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(PduR_IfRxIndicationType, PDUR_CONST) PduR_IfRxIndicationFctPtr[1] = {
  /* Index     IfRxIndicationFctPtr      Referable Keys */
  /*     0 */ Com_RxIndication        /* [/ActiveEcuC/PduR/Com] */
};
#define PDUR_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  PduR_IfTxConfirmationFctPtr
**********************************************************************************************************************/
/** 
  \var    PduR_IfTxConfirmationFctPtr
  \brief  Upper layer communication interface Tx confimation function pointers
*/ 
#define PDUR_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(PduR_IfTxConfirmationFctPtrType, PDUR_CONST) PduR_IfTxConfirmationFctPtr[1] = {
  /* Index     IfTxConfirmationFctPtr      Referable Keys */
  /*     0 */ Com_TxConfirmation        /* [/ActiveEcuC/PduR/Com] */
};
#define PDUR_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  PduR_RxIf2Dest
**********************************************************************************************************************/
/** 
  \var    PduR_RxIf2Dest
  \brief  This table contains all routing information to perform the Rx handling of an interface routing. Used in the &lt;LLIf&gt;_RxIndication
  \details
  Element                    Description
  DestHnd                    Handle to be used as parameter for the RxIndication function call.
  IfRxIndicationFctPtrIdx    the index of the 1:1 relation pointing to PduR_IfRxIndicationFctPtr
*/ 
#define PDUR_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(PduR_RxIf2DestType, PDUR_CONST) PduR_RxIf2Dest[40] = {
    /* Index    DestHnd                                                      IfRxIndicationFctPtrIdx        Referable Keys */
  { /*     0 */       ComConf_ComIPdu_ABS_BrkBst_Data_FD1_oFD1_CAN_3abd61be,                     0UL },  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/Can_PT_ABS_BrkBst_Data_FD1_3290b631/SRC_Can_PT_ABS_BrkBst_Data_FD1_3290b631] */
  { /*     1 */    ComConf_ComIPdu_APIM_Send_Signals1_FD1_oFD1_CAN_3abd61be,                     0UL },  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/Can_PT_APIM_Send_Signals1_FD1_3290b631/SRC_Can_PT_APIM_Send_Signals1_FD1_3290b631] */
  { /*     2 */   ComConf_ComIPdu_APIM_Send_Signals_2_FD1_oFD1_CAN_3abd61be,                     0UL },  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/Can_PT_APIM_Send_Signals_2_FD1_3290b631/SRC_Can_PT_APIM_Send_Signals_2_FD1_3290b631] */
  { /*     3 */ ComConf_ComIPdu_ActiveFrontStrg_Stat2_FD1_oFD1_CAN_3abd61be,                     0UL },  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/Can_PT_ActiveFrontStrg_Stat2_FD1_3290b631/SRC_Can_PT_ActiveFrontStrg_Stat2_FD1_3290b631] */
  { /*     4 */            ComConf_ComIPdu_BodyInfo_3_FD1_oFD1_CAN_3abd61be,                     0UL },  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/Can_PT_BodyInfo_3_FD1_3290b631/SRC_Can_PT_BodyInfo_3_FD1_3290b631] */
  { /*     5 */           ComConf_ComIPdu_Body_Info_4_FD1_oFD1_CAN_3abd61be,                     0UL },  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/Can_PT_Body_Info_4_FD1_3290b631/SRC_Can_PT_Body_Info_4_FD1_3290b631] */
  { /*     6 */         ComConf_ComIPdu_BrakeSnData_3_FD1_oFD1_CAN_3abd61be,                     0UL },  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/Can_PT_BrakeSnData_3_FD1_3290b631/SRC_Can_PT_BrakeSnData_3_FD1_3290b631] */
  { /*     7 */         ComConf_ComIPdu_BrakeSnData_4_FD1_oFD1_CAN_3abd61be,                     0UL },  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/Can_PT_BrakeSnData_4_FD1_3290b631/SRC_Can_PT_BrakeSnData_4_FD1_3290b631] */
  { /*     8 */         ComConf_ComIPdu_BrakeSnData_5_FD1_oFD1_CAN_3abd61be,                     0UL },  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/Can_PT_BrakeSnData_5_FD1_3290b631/SRC_Can_PT_BrakeSnData_5_FD1_3290b631] */
  { /*     9 */         ComConf_ComIPdu_BrakeSnData_6_FD1_oFD1_CAN_3abd61be,                     0UL },  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/Can_PT_BrakeSnData_6_FD1_3290b631/SRC_Can_PT_BrakeSnData_6_FD1_3290b631] */
  { /*    10 */        ComConf_ComIPdu_BrakeSysFeatures_3_oFD1_CAN_3abd61be,                     0UL },  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/Can_PT_BrakeSysFeatures_3_3290b631/SRC_Can_PT_BrakeSysFeatures_3_3290b631] */
  { /*    11 */      ComConf_ComIPdu_BrakeSysFeatures_FD1_oFD1_CAN_3abd61be,                     0UL },  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/Can_PT_BrakeSysFeatures_FD1_3290b631/SRC_Can_PT_BrakeSysFeatures_FD1_3290b631] */
  { /*    12 */  ComConf_ComIPdu_Climate_Control_Data_FD1_oFD1_CAN_3abd61be,                     0UL },  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/Can_PT_Climate_Control_Data_FD1_3290b631/SRC_Can_PT_Climate_Control_Data_FD1_3290b631] */
  { /*    13 */         ComConf_ComIPdu_Cluster_Info1_FD1_oFD1_CAN_3abd61be,                     0UL },  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/Can_PT_Cluster_Info1_FD1_3290b631/SRC_Can_PT_Cluster_Info1_FD1_3290b631] */
  { /*    14 */        ComConf_ComIPdu_DesiredTorqBrk_FD1_oFD1_CAN_3abd61be,                     0UL },  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/Can_PT_DesiredTorqBrk_FD1_3290b631/SRC_Can_PT_DesiredTorqBrk_FD1_3290b631] */
  { /*    15 */          ComConf_ComIPdu_EngBrakeData_FD1_oFD1_CAN_3abd61be,                     0UL },  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/Can_PT_EngBrakeData_FD1_3290b631/SRC_Can_PT_EngBrakeData_FD1_3290b631] */
  { /*    16 */ ComConf_ComIPdu_EngVehicleSpThrottle2_FD1_oFD1_CAN_3abd61be,                     0UL },  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/Can_PT_EngVehicleSpThrottle2_FD1_3290b631/SRC_Can_PT_EngVehicleSpThrottle2_FD1_3290b631] */
  { /*    17 */  ComConf_ComIPdu_EngVehicleSpThrottle_FD1_oFD1_CAN_3abd61be,                     0UL },  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/Can_PT_EngVehicleSpThrottle_FD1_3290b631/SRC_Can_PT_EngVehicleSpThrottle_FD1_3290b631] */
  { /*    18 */ ComConf_ComIPdu_GGCC_Config_Mgmt_ID_1_FD1_oFD1_CAN_3abd61be,                     0UL },  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/Can_PT_GGCC_Config_Mgmt_ID_1_FD1_3290b631/SRC_Can_PT_GGCC_Config_Mgmt_ID_1_FD1_3290b631] */
  { /*    19 */ ComConf_ComIPdu_Image_Processing_Data_FD1_oFD1_CAN_3abd61be,                     0UL },  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/Can_PT_Image_Processing_Data_FD1_3290b631/SRC_Can_PT_Image_Processing_Data_FD1_3290b631] */
  { /*    20 */     ComConf_ComIPdu_Lane_Assist_Data1_FD1_oFD1_CAN_3abd61be,                     0UL },  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/Can_PT_Lane_Assist_Data1_FD1_3290b631/SRC_Can_PT_Lane_Assist_Data1_FD1_3290b631] */
  { /*    21 */  ComConf_ComIPdu_LateralMotionControl_FD1_oFD1_CAN_3abd61be,                     0UL },  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/Can_PT_LateralMotionControl_FD1_3290b631/SRC_Can_PT_LateralMotionControl_FD1_3290b631] */
  { /*    22 */     ComConf_ComIPdu_Mc_Send_Signals_2_FD1_oFD1_CAN_3abd61be,                     0UL },  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/Can_PT_Mc_Send_Signals_2_FD1_3290b631/SRC_Can_PT_Mc_Send_Signals_2_FD1_3290b631] */
  { /*    23 */          ComConf_ComIPdu_ParkAid_Data_FD1_oFD1_CAN_3abd61be,                     0UL },  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/Can_PT_ParkAid_Data_FD1_3290b631/SRC_Can_PT_ParkAid_Data_FD1_3290b631] */
  { /*    24 */     ComConf_ComIPdu_PowertrainData_10_FD1_oFD1_CAN_3abd61be,                     0UL },  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/Can_PT_PowertrainData_10_FD1_3290b631/SRC_Can_PT_PowertrainData_10_FD1_3290b631] */
  { /*    25 */     ComConf_ComIPdu_Steer_Assist_Data_FD1_oFD1_CAN_3abd61be,                     0UL },  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/Can_PT_Steer_Assist_Data_FD1_3290b631/SRC_Can_PT_Steer_Assist_Data_FD1_3290b631] */
  { /*    26 */         ComConf_ComIPdu_Steering_Data_FD1_oFD1_CAN_3abd61be,                     0UL },  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/Can_PT_Steering_Data_FD1_3290b631/SRC_Can_PT_Steering_Data_FD1_3290b631] */
  { /*    27 */      ComConf_ComIPdu_TrailerAid_Data3_FD1_oFD1_CAN_3abd61be,                     0UL },  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/Can_PT_TrailerAid_Data3_FD1_3290b631/SRC_Can_PT_TrailerAid_Data3_FD1_3290b631] */
  { /*    28 */       ComConf_ComIPdu_TrailerAid_Data_FD1_oFD1_CAN_3abd61be,                     0UL },  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/Can_PT_TrailerAid_Data_FD1_3290b631/SRC_Can_PT_TrailerAid_Data_FD1_3290b631] */
  { /*    29 */      ComConf_ComIPdu_TrailerAid_Stat1_FD1_oFD1_CAN_3abd61be,                     0UL },  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/Can_PT_TrailerAid_Stat1_FD1_3290b631/SRC_Can_PT_TrailerAid_Stat1_FD1_3290b631] */
  { /*    30 */      ComConf_ComIPdu_TrailerAid_Stat2_FD1_oFD1_CAN_3abd61be,                     0UL },  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/Can_PT_TrailerAid_Stat2_FD1_3290b631/SRC_Can_PT_TrailerAid_Stat2_FD1_3290b631] */
  { /*    31 */      ComConf_ComIPdu_TrailerAid_Stat3_FD1_oFD1_CAN_3abd61be,                     0UL },  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/Can_PT_TrailerAid_Stat3_FD1_3290b631/SRC_Can_PT_TrailerAid_Stat3_FD1_3290b631] */
  { /*    32 */      ComConf_ComIPdu_TrailerBrakeInfo_FD1_oFD1_CAN_3abd61be,                     0UL },  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/Can_PT_TrailerBrakeInfo_FD1_3290b631/SRC_Can_PT_TrailerBrakeInfo_FD1_3290b631] */
  { /*    33 */         ComConf_ComIPdu_TrailerInfo_2_FD1_oFD1_CAN_3abd61be,                     0UL },  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/Can_PT_TrailerInfo_2_FD1_3290b631/SRC_Can_PT_TrailerInfo_2_FD1_3290b631] */
  { /*    34 */           ComConf_ComIPdu_TrailerInfo_FD1_oFD1_CAN_3abd61be,                     0UL },  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/Can_PT_TrailerInfo_FD1_3290b631/SRC_Can_PT_TrailerInfo_FD1_3290b631] */
  { /*    35 */         ComConf_ComIPdu_TransGearData_FD1_oFD1_CAN_3abd61be,                     0UL },  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/Can_PT_TransGearData_FD1_3290b631/SRC_Can_PT_TransGearData_FD1_3290b631] */
  { /*    36 */ ComConf_ComIPdu_VehicleOperatingModes_FD1_oFD1_CAN_3abd61be,                     0UL },  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/Can_PT_VehicleOperatingModes_FD1_3290b631/SRC_Can_PT_VehicleOperatingModes_FD1_3290b631] */
  { /*    37 */             ComConf_ComIPdu_WheelData_FD1_oFD1_CAN_3abd61be,                     0UL },  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/Can_PT_WheelData_FD1_3290b631/SRC_Can_PT_WheelData_FD1_3290b631] */
  { /*    38 */            ComConf_ComIPdu_WheelSpeed_FD1_oFD1_CAN_3abd61be,                     0UL },  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/Can_PT_WheelSpeed_FD1_3290b631/SRC_Can_PT_WheelSpeed_FD1_3290b631] */
  { /*    39 */              ComConf_ComIPdu_Yaw_Data_FD1_oFD1_CAN_3abd61be,                     0UL }   /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/Can_PT_Yaw_Data_FD1_3290b631/SRC_Can_PT_Yaw_Data_FD1_3290b631] */
};
#define PDUR_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  PduR_RxTp2Dest
**********************************************************************************************************************/
/** 
  \var    PduR_RxTp2Dest
  \brief  This table contains all routing information to perform the Rx handling of a Tp Routing. Used in the PduR_&lt;LLTp&gt;_StartOfReception, PduR_&lt;LLTp&gt;_CopyRxData and PduR_&lt;LLTp&gt;_RxIndication.
  \details
  Element                      Description
  StartOfReceptionFctPtrIdx    the index of the 1:1 relation pointing to PduR_StartOfReceptionFctPtr
*/ 
#define PDUR_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(PduR_RxTp2DestType, PDUR_CONST) PduR_RxTp2Dest[4] = {
    /* Index    StartOfReceptionFctPtrIdx        Referable Keys */
  { /*     0 */                       0UL },  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/Can_PT_TesterFunctionalReq_FD1_20_3290b631/SRC_Can_PT_TesterFunctionalReq_FD1_20_3290b631] */
  { /*     1 */                       0UL },  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/Can_PT_TesterFunctionalReq_FD1_3290b631/SRC_Can_PT_TesterFunctionalReq_FD1_3290b631] */
  { /*     2 */                       0UL },  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/Can_PT_TesterPhysicalReqPSCM_FD1_20_3290b631/SRC_Can_PT_TesterPhysicalReqPSCM_FD1_20_3290b631] */
  { /*     3 */                       0UL }   /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/Can_PT_TesterPhysicalReqPSCM_FD1_3290b631/SRC_Can_PT_TesterPhysicalReqPSCM_FD1_3290b631] */
};
#define PDUR_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  PduR_RxTp2Src
**********************************************************************************************************************/
/** 
  \var    PduR_RxTp2Src
  \brief  This table contains all routing information to perform the ChangeParameter or CancelReceive handling. Used in ChangeParameter and CancelReceive APIs 	race SPEC-1024
  \details
  Element    Description
  SrcHnd     handle to be used as parameter for the CancelReceive or ChangeParameter function call.
*/ 
#define PDUR_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(PduR_RxTp2SrcType, PDUR_CONST) PduR_RxTp2Src[4] = {
    /* Index    SrcHnd                                       Referable Keys */
  { /*     0 */ CanTpConf_CanTpRxNSdu_RxNSdu_0b63929d },  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/Can_PT_TesterFunctionalReq_FD1_20_3290b631/DST_Can_PT_TesterFunctionalReq_FD1_20_3290b631] */
  { /*     1 */ CanTpConf_CanTpRxNSdu_RxNSdu_f2921bcf },  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/Can_PT_TesterFunctionalReq_FD1_3290b631/DST_Can_PT_TesterFunctionalReq_FD1_3290b631] */
  { /*     2 */ CanTpConf_CanTpRxNSdu_RxNSdu_62a8e518 },  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/Can_PT_TesterPhysicalReqPSCM_FD1_20_3290b631/DST_Can_PT_TesterPhysicalReqPSCM_FD1_20_3290b631] */
  { /*     3 */ CanTpConf_CanTpRxNSdu_RxNSdu_4962324c }   /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/Can_PT_TesterPhysicalReqPSCM_FD1_3290b631/DST_Can_PT_TesterPhysicalReqPSCM_FD1_3290b631] */
};
#define PDUR_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  PduR_StartOfReceptionFctPtr
**********************************************************************************************************************/
/** 
  \var    PduR_StartOfReceptionFctPtr
  \brief  Transport protocol StartOfReception function pointers
*/ 
#define PDUR_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(PduR_StartOfReceptionFctPtrType, PDUR_CONST) PduR_StartOfReceptionFctPtr[1] = {
  /* Index     StartOfReceptionFctPtr      Referable Keys */
  /*     0 */ Dcm_StartOfReception      /* [/ActiveEcuC/PduR/Dcm] */
};
#define PDUR_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  PduR_TpRxIndicationFctPtr
**********************************************************************************************************************/
/** 
  \var    PduR_TpRxIndicationFctPtr
  \brief  Transport protocol TpRxIndication function pointers
*/ 
#define PDUR_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(PduR_TpRxIndicationFctPtrType, PDUR_CONST) PduR_TpRxIndicationFctPtr[1] = {
  /* Index     TpRxIndicationFctPtr      Referable Keys */
  /*     0 */ Dcm_TpRxIndication      /* [/ActiveEcuC/PduR/Dcm] */
};
#define PDUR_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  PduR_TpTxConfirmationFctPtr
**********************************************************************************************************************/
/** 
  \var    PduR_TpTxConfirmationFctPtr
  \brief  Transport protocol TpTxConfimation function pointers
*/ 
#define PDUR_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(PduR_TpTxConfirmationFctPtrType, PDUR_CONST) PduR_TpTxConfirmationFctPtr[1] = {
  /* Index     TpTxConfirmationFctPtr      Referable Keys */
  /*     0 */ Dcm_TpTxConfirmation      /* [/ActiveEcuC/PduR/Dcm] */
};
#define PDUR_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  PduR_TransmitFctPtr
**********************************************************************************************************************/
/** 
  \var    PduR_TransmitFctPtr
  \brief  Lower layer transmit function pointers
*/ 
#define PDUR_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(PduR_TransmitFctPtrType, PDUR_CONST) PduR_TransmitFctPtr[2] = {
  /* Index     TransmitFctPtr      Referable Keys */
  /*     0 */ CanIf_Transmit ,  /* [/ActiveEcuC/PduR/CanIf] */
  /*     1 */ CanTp_Transmit    /* [/ActiveEcuC/PduR/CanTp] */
};
#define PDUR_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  PduR_Tx2Lo
**********************************************************************************************************************/
/** 
  \var    PduR_Tx2Lo
  \brief  Contains all informations to route a Pdu from a upper layer to a lower layer module, or to cancel a transmission
  \details
  Element              Description
  DestHnd              Handle to be used as parameter for the Transmit function call.
  TransmitFctPtrIdx    the index of the 1:1 relation pointing to PduR_TransmitFctPtr
*/ 
#define PDUR_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(PduR_Tx2LoType, PDUR_CONST) PduR_Tx2Lo[6] = {
    /* Index    DestHnd                                                               TransmitFctPtrIdx        Referable Keys */
  { /*     0 */           CanIfConf_CanIfTxPduCfg_EPAS_INFO_FD1_oFD1_CAN_Tx_3abd61be,               0UL },  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/Can_PT_EPAS_INFO_FD1_3290b631/SRC_Can_PT_EPAS_INFO_FD1_3290b631] */
  { /*     1 */   CanIfConf_CanIfTxPduCfg_Lane_Assist_Data3_FD1_oFD1_CAN_Tx_3abd61be,               0UL },  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/Can_PT_Lane_Assist_Data3_FD1_3290b631/SRC_Can_PT_Lane_Assist_Data3_FD1_3290b631] */
  { /*     2 */ CanIfConf_CanIfTxPduCfg_SteeringPinion_Data_FD1_oFD1_CAN_Tx_3abd61be,               0UL },  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/Can_PT_SteeringPinion_Data_FD1_3290b631/SRC_Can_PT_SteeringPinion_Data_FD1_3290b631] */
  { /*     3 */                                CanTpConf_CanTpTxNSdu_TxNSdu_b29a3917,               1UL },  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/Can_PT_TesterPhysicalResPSCM_FD1_20_3290b631/SRC_Can_PT_TesterPhysicalResPSCM_FD1_20_3290b631] */
  { /*     4 */                                CanTpConf_CanTpTxNSdu_TxNSdu_769ddb63,               1UL },  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/Can_PT_TesterPhysicalResPSCM_FD1_3290b631/SRC_Can_PT_TesterPhysicalResPSCM_FD1_3290b631] */
  { /*     5 */    CanIfConf_CanIfTxPduCfg_TrailerAid_Data2_FD1_oFD1_CAN_Tx_3abd61be,               0UL }   /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/Can_PT_TrailerAid_Data2_FD1_3290b631/SRC_Can_PT_TrailerAid_Data2_FD1_3290b631] */
};
#define PDUR_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  PduR_TxIf2Up
**********************************************************************************************************************/
/** 
  \var    PduR_TxIf2Up
  \brief  This table contains all routing information to perform the Tx handling of an interface routing. Used in the &lt;LLIf&gt;_TriggerTransmit and &lt;LLIf&gt;_TxConfirmation
  \details
  Element                      Description
  DestHnd                      handle to be used as parameter for the TxConfirmation or TriggerTransmit function call.
  IfTxConfirmationFctPtrIdx    the index of the 0:1 relation pointing to PduR_IfTxConfirmationFctPtr
*/ 
#define PDUR_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(PduR_TxIf2UpType, PDUR_CONST) PduR_TxIf2Up[4] = {
    /* Index    DestHnd                                                  IfTxConfirmationFctPtrIdx                         Referable Keys */
  { /*     0 */         ComConf_ComIPdu_EPAS_INFO_FD1_oFD1_CAN_3abd61be,                                        0UL },  /* [/ActiveEcuC/EcuC/EcucPduCollection/PT_EPAS_INFO_FD1_PP_EPAS_INFO_FD1_Tx_3290b631_3cf8f7d5] */
  { /*     1 */ ComConf_ComIPdu_Lane_Assist_Data3_FD1_oFD1_CAN_3abd61be,                                        0UL },  /* [/ActiveEcuC/EcuC/EcucPduCollection/PT_Lane_Assist_Data3_FD1_PP_Lane_Assist_Data3_FD1_Tx_3290b631_3cf8f7d5] */
  { /*     2 */                                PDUR_NO_DESTHNDOFTXIF2UP, PDUR_NO_IFTXCONFIRMATIONFCTPTRIDXOFTXIF2UP },  /* [/ActiveEcuC/EcuC/EcucPduCollection/PT_SteeringPinion_Data_FD1_PP_SteeringPinion_Data_FD1_Tx_3290b631_3cf8f7d5] */
  { /*     3 */  ComConf_ComIPdu_TrailerAid_Data2_FD1_oFD1_CAN_3abd61be,                                        0UL }   /* [/ActiveEcuC/EcuC/EcucPduCollection/PT_TrailerAid_Data2_FD1_PP_TrailerAid_Data2_FD1_Tx_3290b631_3cf8f7d5] */
};
#define PDUR_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  PduR_TxTp2Src
**********************************************************************************************************************/
/** 
  \var    PduR_TxTp2Src
  \brief  This table contains all routing information to perform the Tx handling of a transport protocol routing, Used in the &lt;LoTp&gt;_CopyTxData and &lt;LoTp&gt;_TxConfirmation
  \details
  Element                      Description
  TpTxConfirmationFctPtrIdx    the index of the 1:1 relation pointing to PduR_TpTxConfirmationFctPtr
*/ 
#define PDUR_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(PduR_TxTp2SrcType, PDUR_CONST) PduR_TxTp2Src[2] = {
    /* Index    TpTxConfirmationFctPtrIdx        Referable Keys */
  { /*     0 */                       0UL },  /* [/ActiveEcuC/EcuC/EcucPduCollection/PT_TesterPhysicalResPSCM_FD1_20_PP_TesterPhysicalResPSCM_FD1_Tx_20_3290b631_3cf8f7d5] */
  { /*     1 */                       0UL }   /* [/ActiveEcuC/EcuC/EcucPduCollection/PT_TesterPhysicalResPSCM_FD1_PP_TesterPhysicalResPSCM_FD1_Tx_3290b631_3cf8f7d5] */
};
#define PDUR_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  PduR_Initialized
**********************************************************************************************************************/
/** 
  \var    PduR_Initialized
  \brief  Initialization state of PduR. TRUE, if PduR_Init() has been called, else FALSE
*/ 
#define PDUR_START_SEC_VAR_ZERO_INIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(PduR_InitializedType, PDUR_VAR_ZERO_INIT) PduR_Initialized = FALSE;
#define PDUR_STOP_SEC_VAR_ZERO_INIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */


/**********************************************************************************************************************
  CONFIGURATION CLASS: LINK
  SECTION: GLOBAL DATA
**********************************************************************************************************************/


/**********************************************************************************************************************
 * LOCAL FUNCTION PROTOTYPES
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * LOCAL FUNCTIONS
 *********************************************************************************************************************/

/**********************************************************************************************************************
  GLOBAL FUNCTIONS
**********************************************************************************************************************/
#define PDUR_START_SEC_CODE
/* PRQA S 5087 1 */ /* MD_MSR_19.1 */
#include "MemMap.h"

/* Upper Layer Interface APIs */

/**********************************************************************************************************************
 * PduR_ComTransmit
 *********************************************************************************************************************/
/*!
 * \internal
 * - #10 Check arguments
 *   - #20 if arguments check was successfully
 *     - #30 if  transmit function used for this routing
 *       - #40 if routing path group is enabled
 *         - #41 get destination handle
 *         - #42 call gateway or lower layer tranmsit function
 *   - #40 else arguments check fails
 *     - #41 call DET
 * \endinternal
 *********************************************************************************************************************/
FUNC(Std_ReturnType, PDUR_CODE) PduR_ComTransmit(PduIdType id, P2CONST(PduInfoType, AUTOMATIC, PDUR_APPL_DATA) info)
{
  /* ----- Local Variables ---------------------------------------------- */
  uint8 errorId = PDUR_E_NO_ERROR;
  Std_ReturnType retVal = E_NOT_OK;

  /* ----- Development Error Checks ------------------------------------- */
  /* Check initialization state of the component */
  if(PduR_IsInitialized() == FALSE)
  {
    errorId = PDUR_E_INVALID_REQUEST;
  }
#if (PDUR_DEV_ERROR_DETECT == STD_ON) /* COV_PDUR_VAR_DEV_ERROR_DETECT */
# if (PDUR_TX2LO == STD_ON)
  else if((id >= PduR_GetSizeOfTx2Lo())
#  if (PDUR_INVALIDHNDOFTX2LO == STD_ON)
          || (PduR_IsInvalidHndOfTx2Lo(id))
#  endif
  )
  {
    errorId = PDUR_E_PDU_ID_INVALID;
  }
# endif /* (PDUR_TX2LO == STD_ON) */
#endif
  else
  {
    /* ----- Implementation ----------------------------------------------- */
#if (PDUR_TX2LO == STD_ON)
# if (PDUR_BSWMPDURTRANSMITCALLBACKOFTX2LO == STD_ON)
    if(PduR_IsBswMPduRTransmitCallbackOfTx2Lo(id))
    {
      BswM_PduR_Transmit(id, info); /* SBSW_PDUR_EXTERNAL_API_CALL_FORWARDING_ID_AND_PTR */
    }
# endif /* (PDUR_BSWMPDURTRANSMITCALLBACKOFTX2LO == STD_ON) */
# if (PDUR_RMDESTRPGROMIDXOFTX2LO == STD_ON)
    if((!PduR_IsRmDestRpgRomUsedOfTx2Lo(id)) || (0 != PduR_GetEnabledCntOfRpgDestState(PduR_GetRmDestRpgRomIdxOfTx2Lo(id)))) /* PRQA S 3355, 3356 */ /* MD_CSL_3355_3356 */ /* COV_PDUR_RPG_FEATURE_CHECK */
# endif
    {
      PduR_DestHndOfTx2LoType destHnd = PduR_GetDestHndOfTx2Lo(id);
      retVal = PduR_GetTransmitFctPtr(PduR_GetTransmitFctPtrIdxOfTx2Lo(id))(destHnd, info); /* SBSW_PDUR_EXTERNAL_API_CALL_FORWARDING_ID_AND_PTR */
    }
#else
# if (PDUR_USE_DUMMY_STATEMENT == STD_ON)
    id = id;
    info = info;
# endif
#endif /* (PDUR_TX2LO == STD_ON) */
  }

  /* ----- Development Error Report --------------------------------------- */
#if (PDUR_DEV_ERROR_REPORT == STD_ON)
  if(errorId != PDUR_E_NO_ERROR)
  {
    PduR_Det_ReportError(PDUR_FCT_COMTX, errorId);
  }
#else
  PDUR_DUMMY_STATEMENT(errorId); /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */
#endif

  PDUR_DUMMY_STATEMENT(id);   /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */
  PDUR_DUMMY_STATEMENT(info); /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */

  return retVal;
}


/**********************************************************************************************************************
 * PduR_DcmTransmit
 *********************************************************************************************************************/
/*!
 * \internal
 * - #10 Check arguments
 *   - #20 if arguments check was successfully
 *     - #30 if  transmit function used for this routing
 *       - #40 if routing path group is enabled
 *         - #41 get destination handle
 *         - #42 call gateway or lower layer tranmsit function
 *   - #40 else arguments check fails
 *     - #41 call DET
 * \endinternal
 *********************************************************************************************************************/
FUNC(Std_ReturnType, PDUR_CODE) PduR_DcmTransmit(PduIdType id, P2CONST(PduInfoType, AUTOMATIC, PDUR_APPL_DATA) info)
{
  /* ----- Local Variables ---------------------------------------------- */
  uint8 errorId = PDUR_E_NO_ERROR;
  Std_ReturnType retVal = E_NOT_OK;

  /* ----- Development Error Checks ------------------------------------- */
  /* Check initialization state of the component */
  if(PduR_IsInitialized() == FALSE)
  {
    errorId = PDUR_E_INVALID_REQUEST;
  }
#if (PDUR_DEV_ERROR_DETECT == STD_ON) /* COV_PDUR_VAR_DEV_ERROR_DETECT */
# if (PDUR_TX2LO == STD_ON)
  else if((id >= PduR_GetSizeOfTx2Lo())
#  if (PDUR_INVALIDHNDOFTX2LO == STD_ON)
          || (PduR_IsInvalidHndOfTx2Lo(id))
#  endif
  )
  {
    errorId = PDUR_E_PDU_ID_INVALID;
  }
# endif /* (PDUR_TX2LO == STD_ON) */
#endif
  else
  {
    /* ----- Implementation ----------------------------------------------- */
#if (PDUR_TX2LO == STD_ON)
# if (PDUR_BSWMPDURTRANSMITCALLBACKOFTX2LO == STD_ON)
    if(PduR_IsBswMPduRTransmitCallbackOfTx2Lo(id))
    {
      BswM_PduR_Transmit(id, info); /* SBSW_PDUR_EXTERNAL_API_CALL_FORWARDING_ID_AND_PTR */
    }
# endif /* (PDUR_BSWMPDURTRANSMITCALLBACKOFTX2LO == STD_ON) */
# if (PDUR_RMDESTRPGROMIDXOFTX2LO == STD_ON)
    if((!PduR_IsRmDestRpgRomUsedOfTx2Lo(id)) || (0 != PduR_GetEnabledCntOfRpgDestState(PduR_GetRmDestRpgRomIdxOfTx2Lo(id)))) /* PRQA S 3355, 3356 */ /* MD_CSL_3355_3356 */ /* COV_PDUR_RPG_FEATURE_CHECK */
# endif
    {
      PduR_DestHndOfTx2LoType destHnd = PduR_GetDestHndOfTx2Lo(id);
      retVal = PduR_GetTransmitFctPtr(PduR_GetTransmitFctPtrIdxOfTx2Lo(id))(destHnd, info); /* SBSW_PDUR_EXTERNAL_API_CALL_FORWARDING_ID_AND_PTR */
    }
#else
# if (PDUR_USE_DUMMY_STATEMENT == STD_ON)
    id = id;
    info = info;
# endif
#endif /* (PDUR_TX2LO == STD_ON) */
  }

  /* ----- Development Error Report --------------------------------------- */
#if (PDUR_DEV_ERROR_REPORT == STD_ON)
  if(errorId != PDUR_E_NO_ERROR)
  {
    PduR_Det_ReportError(PDUR_FCT_DCMTX, errorId);
  }
#else
  PDUR_DUMMY_STATEMENT(errorId); /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */
#endif

  PDUR_DUMMY_STATEMENT(id);   /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */
  PDUR_DUMMY_STATEMENT(info); /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */

  return retVal;
}


/* Communication Interface APIs */

/**********************************************************************************************************************
 * PduR_CanIfRxIndication
 *********************************************************************************************************************/
/*!
 * \internal
 * - #10 Check arguments
 *   - #20 if arguments check was successfully
 *     - #30 if BSWM callback is active
 *       - #31 call BSWM callback function
 *     - #40 if routing path group is enabled
 *       - #41 get destination handle
 *       - #42 call the gateway communication interface Rx Indication function
 *   - #50 else arguments check fails
 *     - #51 call DET
 * \endinternal
 *********************************************************************************************************************/
FUNC(void, PDUR_CODE) PduR_CanIfRxIndication(PduIdType RxPduId, P2CONST(PduInfoType, AUTOMATIC, PDUR_APPL_DATA) info)
{
  /* ----- Local Variables ---------------------------------------------- */
  uint8 errorId = PDUR_E_NO_ERROR;

  /* ----- Development Error Checks ------------------------------------- */
  /* #10 Check initialization state of the component */
  if(PduR_IsInitialized() == FALSE)
  {
    errorId = PDUR_E_INVALID_REQUEST;
  }
#if (PDUR_DEV_ERROR_DETECT == STD_ON) /* COV_PDUR_VAR_DEV_ERROR_DETECT */
# if (PDUR_RXIF2DEST == STD_ON)
  else if((RxPduId >= PduR_GetSizeOfRxIf2Dest())
#  if (PDUR_INVALIDHNDOFRXIF2DEST == STD_ON)
    || (PduR_IsInvalidHndOfRxIf2Dest(RxPduId))
#  endif
  )
  {
    errorId = PDUR_E_PDU_ID_INVALID;
  }
# endif /* (PDUR_RXIF2DEST == STD_ON) */
#endif
  else
  {
    /* #20 ----- Implementation ----------------------------------------------- */
#if (PDUR_RXIF2DEST == STD_ON)
    /* #30 BSWM callback */
# if (PDUR_BSWMPDURRXINDICATIONCALLBACKOFRXIF2DEST == STD_ON)
    if(PduR_IsBswMPduRRxIndicationCallbackOfRxIf2Dest(RxPduId))
    {
      /* #31 */
      BswM_PduR_RxIndication(RxPduId, info); /* SBSW_PDUR_EXTERNAL_API_CALL_FORWARDING_ID_AND_PTR */
    }
# endif /* (PDUR_BSWMPDURRXINDICATIONCALLBACKOFRXIF2DEST == STD_ON) */
# if (PDUR_RMDESTRPGROMIDXOFRXIF2DEST == STD_ON)
    /* #40 */
    if((!PduR_IsRmDestRpgRomUsedOfRxIf2Dest(RxPduId)) || (0 != PduR_GetEnabledCntOfRpgDestState(PduR_GetRmDestRpgRomIdxOfRxIf2Dest(RxPduId)))) /* PRQA S 3355, 3356 */ /* MD_CSL_3355_3356 */ /* COV_PDUR_RPG_FEATURE_CHECK */
# endif
    {
      PduR_DestHndOfRxIf2DestType destHnd = PduR_GetDestHndOfRxIf2Dest(RxPduId);
      PduR_GetIfRxIndicationFctPtr(PduR_GetIfRxIndicationFctPtrIdxOfRxIf2Dest(RxPduId))(destHnd, info); /* SBSW_PDUR_EXTERNAL_API_CALL_FORWARDING_ID_AND_PTR */
    }
#endif /* (PDUR_RXIF2DEST == STD_ON) */
  }

  /* #50 ----- Development Error Report --------------------------------------- */
#if (PDUR_DEV_ERROR_REPORT == STD_ON)
  if(errorId != PDUR_E_NO_ERROR)
  {
    /* #51 */
    PduR_Det_ReportError(PDUR_FCT_CANIFRXIND, errorId);
  }
#else
  PDUR_DUMMY_STATEMENT(errorId); /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */
#endif

  PDUR_DUMMY_STATEMENT(RxPduId);    /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */
  PDUR_DUMMY_STATEMENT(info); /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */
}


/**********************************************************************************************************************
 * PduR_CanIfTxConfirmation
 *********************************************************************************************************************/
/*!
 * \internal
 * - #10 Check arguments
 *   - #20 if arguments check was successfully
 *     - #30 if BSWM callback is active
 *       - #31 call BSWM callback function
 *     - #40 if confirmation function used for this routing
 *       - #41 get destination handle
 *       - #42 call the gateway or communication interface confirmation function
 *   - #50 else arguments check fails
 *     - #51 call DET
 * \endinternal
 *********************************************************************************************************************/
/* PRQA S 6080 PDUR_LLIF_TXCONFIRMATION */ /* MD_MSR_STMIF */
FUNC(void, PDUR_CODE) PduR_CanIfTxConfirmation(PduIdType TxPduId)
{
  /* ----- Local Variables ---------------------------------------------- */
  uint8 errorId = PDUR_E_NO_ERROR;

  /*  #10 ----- Development Error Checks ------------------------------------- */
  /* Check initialization state of the component */
  if(PduR_IsInitialized() == FALSE)
  {
    errorId = PDUR_E_INVALID_REQUEST;
  }
#if (PDUR_DEV_ERROR_DETECT == STD_ON) /* COV_PDUR_VAR_DEV_ERROR_DETECT */
# if (PDUR_TXIF2UP == STD_ON)
  else if((TxPduId >= PduR_GetSizeOfTxIf2Up())
#  if (PDUR_INVALIDHNDOFTXIF2UP == STD_ON)
    || (PduR_IsInvalidHndOfTxIf2Up(TxPduId))
#  endif
  )
  {
    errorId = PDUR_E_PDU_ID_INVALID;
  }
# endif /* (PDUR_TXIF2UP == STD_ON) */
#endif
  else
  {
    /* #20 ----- Implementation ----------------------------------------------- */
#if (PDUR_TXIF2UP == STD_ON)
    /* #30 BSWM callback */
# if (PDUR_BSWMPDURTXCONFIRMATIONCALLBACKOFTXIF2UP == STD_ON)
    if(PduR_IsBswMPduRTxConfirmationCallbackOfTxIf2Up(TxPduId))
    {
      /* #31 */
      BswM_PduR_TxConfirmation(TxPduId);
    }
# endif /* (PDUR_BSWMPDURTXCONFIRMATIONCALLBACKOFTXIF2UP == STD_ON) */
# if ( PDUR_IFTXCONFIRMATIONFCTPTRUSEDOFTXIF2UP == STD_ON )
    /* #40 */
    if(PduR_IsIfTxConfirmationFctPtrUsedOfTxIf2Up(TxPduId)) /* PRQA S 3355 */ /* MD_CSL_3355_3356 */ /* COV_PDUR_FEATURE_ALWAYS_TRUE */
    {
      PduR_DestHndOfTxIf2UpType destHnd = PduR_GetDestHndOfTxIf2Up(TxPduId);
      PduR_GetIfTxConfirmationFctPtr(PduR_GetIfTxConfirmationFctPtrIdxOfTxIf2Up(TxPduId))(destHnd); /* SBSW_PDUR_EXTERNAL_API_CALL_FORWARDING_ID_ONLY */
    }
# endif
#endif /* (PDUR_TXIF2UP == STD_ON) */
  }

  /* #50 ----- Development Error Report --------------------------------------- */
#if (PDUR_DEV_ERROR_REPORT == STD_ON)
  if(errorId != PDUR_E_NO_ERROR)
  {
    PduR_Det_ReportError(PDUR_FCT_CANIFTXCFM, errorId);
  }
#else
  PDUR_DUMMY_STATEMENT(errorId); /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */
#endif

  PDUR_DUMMY_STATEMENT(TxPduId); /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */
}
/* PRQA L:PDUR_LLIF_TXCONFIRMATION */



/* Transport Protocol APIs */

/**********************************************************************************************************************
 * PduR_CanTpStartOfReception
 *********************************************************************************************************************/
 /*!
 * \internal
 * - #10 Check arguments
 *   - #20 if arguments check was successfully
 *     - #30 if routing path group is enabled
 *      - #31 get destination handle
 *      - #32 call the gateway or Tp module start of reception function
 *   - #40 else arguments check fails
 *     - #41 call DET
 * \endinternal
 *********************************************************************************************************************/
FUNC(BufReq_ReturnType, PDUR_CODE) PduR_CanTpStartOfReception(PduIdType id, P2VAR(PduInfoType, AUTOMATIC, PDUR_APPL_DATA) info, PduLengthType TpSduLength, P2VAR(PduLengthType, AUTOMATIC, PDUR_APPL_DATA) bufferSizePtr)
{
  /* ----- Local Variables ---------------------------------------------- */
  uint8 errorId = PDUR_E_NO_ERROR;
  BufReq_ReturnType retVal = BUFREQ_E_NOT_OK;

  /* ----- Development Error Checks ------------------------------------- */
  /* Check initialization state of the component */
  if(PduR_IsInitialized() == FALSE)
  {
    errorId = PDUR_E_INVALID_REQUEST;
  }
#if (PDUR_DEV_ERROR_DETECT == STD_ON) /* COV_PDUR_VAR_DEV_ERROR_DETECT */
# if (PDUR_RXTP2DEST == STD_ON)
  else if((id >= PduR_GetSizeOfRxTp2Dest())
#  if (PDUR_INVALIDHNDOFRXTP2DEST == STD_ON)
    || (PduR_IsInvalidHndOfRxTp2Dest(id))
#  endif
  )
  {
    errorId = PDUR_E_PDU_ID_INVALID;
  }
# endif /* (PDUR_RXTP2DEST == STD_ON) */
#endif
  else
  {
    /* ----- Implementation ----------------------------------------------- */
#if (PDUR_RXTP2DEST == STD_ON)
# if (PDUR_BSWMPDURTPSTARTOFRECEPTIONCALLBACKOFRXTP2DEST == STD_ON)
    if(PduR_IsBswMPduRTpStartOfReceptionCallbackOfRxTp2Dest(id))
    {
      BswM_PduR_TpStartOfReception(id, info, TpSduLength, bufferSizePtr); /* SBSW_PDUR_EXTERNAL_API_CALL_FORWARDING_ID_AND_PTR */
    }
# endif /* (PDUR_BSWMPDURTPSTARTOFRECEPTIONCALLBACKOFRXTP2DEST == STD_ON) */
# if (PDUR_RMDESTRPGROMIDXOFRXTP2DEST == STD_ON)
    if((!PduR_IsRmDestRpgRomUsedOfRxTp2Dest(id)) || (0 != PduR_GetEnabledCntOfRpgDestState(PduR_GetRmDestRpgRomIdxOfRxTp2Dest(id)))) /* PRQA S 3355, 3356 */ /* MD_CSL_3355_3356 */ /* COV_PDUR_RPG_FEATURE_CHECK */
# endif
    {
      PduR_DestHndOfRxTp2DestType destHnd = PduR_GetDestHndOfRxTp2Dest(id);
      retVal = PduR_GetStartOfReceptionFctPtr(PduR_GetStartOfReceptionFctPtrIdxOfRxTp2Dest(id))(destHnd, info, TpSduLength, bufferSizePtr); /* SBSW_PDUR_EXTERNAL_API_CALL_FORWARDING_ID_AND_PTR */
    }
#endif /* (PDUR_RXTP2DEST == STD_ON) */
  }

  /* ----- Development Error Report --------------------------------------- */
#if (PDUR_DEV_ERROR_REPORT == STD_ON)
  if(errorId != PDUR_E_NO_ERROR)
  {
    PduR_Det_ReportError(PDUR_FCT_CANTPSOR, errorId);
  }
#else
  PDUR_DUMMY_STATEMENT(errorId); /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */
#endif

  PDUR_DUMMY_STATEMENT(id);            /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */
  PDUR_DUMMY_STATEMENT(info);          /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */
  PDUR_DUMMY_STATEMENT(TpSduLength);   /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */
  PDUR_DUMMY_STATEMENT(bufferSizePtr); /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */

  return retVal;
}


/**********************************************************************************************************************
 * PduR_CanTpCopyRxData
 *********************************************************************************************************************/
/*!
 * \internal
 * - #10 Check arguments
 *   - #20 if arguments check was successfully
 *     - #30 if routing path group is enabled
 *      - #31 get destination handle
 *      - #32 call the gateway or Tp module CopyRxData function
 *   - #40 else arguments check fails
 *     - #41 call DET
 * \endinternal
 *********************************************************************************************************************/
/* PRQA S 3673 1 */ /* MD_PduR_3673_AsrProto */
FUNC(BufReq_ReturnType, PDUR_CODE) PduR_CanTpCopyRxData(PduIdType id, P2VAR(PduInfoType, AUTOMATIC, PDUR_APPL_DATA) info, P2VAR(PduLengthType, AUTOMATIC, PDUR_APPL_DATA) bufferSizePtr)
{
  /* ----- Local Variables ---------------------------------------------- */
  uint8 errorId = PDUR_E_NO_ERROR;
  BufReq_ReturnType retVal = BUFREQ_E_NOT_OK;

  /* #10 ----- Development Error Checks ------------------------------------- */
  /* Check initialization state of the component */
  if(PduR_IsInitialized() == FALSE)
  {
    errorId = PDUR_E_INVALID_REQUEST;
  }
#if (PDUR_DEV_ERROR_DETECT == STD_ON) /* COV_PDUR_VAR_DEV_ERROR_DETECT */
# if (PDUR_RXTP2DEST == STD_ON)
  else if((id >= PduR_GetSizeOfRxTp2Dest())
#  if (PDUR_INVALIDHNDOFRXTP2DEST == STD_ON)
    || (PduR_IsInvalidHndOfRxTp2Dest(id))
#  endif
  )
  {
    errorId = PDUR_E_PDU_ID_INVALID;
  }
# endif /* (PDUR_RXTP2DEST == STD_ON) */
#endif
  else
  {
    /* #20 ----- Implementation ----------------------------------------------- */
#if (PDUR_RXTP2DEST == STD_ON)
# if (PDUR_RMDESTRPGROMIDXOFRXTP2DEST == STD_ON)
    /* #30 */
    if((!PduR_IsRmDestRpgRomUsedOfRxTp2Dest(id)) || (0 != PduR_GetEnabledCntOfRpgDestState(PduR_GetRmDestRpgRomIdxOfRxTp2Dest(id)))) /* PRQA S 3355, 3356 */ /* MD_CSL_3355_3356 */ /* COV_PDUR_RPG_FEATURE_CHECK */
# endif
    {
      PduR_DestHndOfRxTp2DestType destHnd = PduR_GetDestHndOfRxTp2Dest(id);
      retVal = PduR_GetCopyRxDataFctPtr(PduR_GetCopyRxDataFctPtrIdxOfRxTp2Dest(id))(destHnd, info, bufferSizePtr); /* SBSW_PDUR_EXTERNAL_API_CALL_FORWARDING_ID_AND_PTR */
    }
#else
#  if (PDUR_USE_DUMMY_STATEMENT == STD_ON)
    id = id;
    info = info;
    bufferSizePtr = bufferSizePtr;
#  endif
#endif /* (PDUR_RXTP2DEST == STD_ON) */
  }

  /* #40 ----- Development Error Report --------------------------------------- */
#if (PDUR_DEV_ERROR_REPORT == STD_ON)
  if(errorId != PDUR_E_NO_ERROR)
  {
    PduR_Det_ReportError(PDUR_FCT_CANTPCPYRX, errorId);
  }
#else
  PDUR_DUMMY_STATEMENT(errorId); /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */
#endif

  PDUR_DUMMY_STATEMENT(id);            /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */
  PDUR_DUMMY_STATEMENT(info);          /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */
  PDUR_DUMMY_STATEMENT(bufferSizePtr); /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */

  return retVal;
}


/**********************************************************************************************************************
 * PduR_CanTpCopyTxData
 *********************************************************************************************************************/
/*!
 * \internal
 * - #10 Check arguments
 *   - #20 if arguments check was successfully
 *     - #30 if routing path group is enabled
 *      - #31 get destination handle
 *      - #32 call the gateway or Tp module copy tx data function 
 *   - #40 else arguments check fails
 *     - #41 call DET
 * \endinternal
 *********************************************************************************************************************/
FUNC(BufReq_ReturnType, PDUR_CODE) PduR_CanTpCopyTxData(PduIdType id, P2VAR(PduInfoType, AUTOMATIC, PDUR_APPL_DATA) info, P2VAR(RetryInfoType, AUTOMATIC, PDUR_APPL_DATA) retry, P2VAR(PduLengthType, AUTOMATIC, PDUR_APPL_DATA) availableDataPtr)
{
  /* ----- Local Variables ---------------------------------------------- */
  uint8 errorId = PDUR_E_NO_ERROR;
  BufReq_ReturnType retVal = BUFREQ_E_NOT_OK;

  /* ----- Development Error Checks ------------------------------------- */
  /* Check initialization state of the component */
  if(PduR_IsInitialized() == FALSE)
  {
    errorId = PDUR_E_INVALID_REQUEST;
  }
#if (PDUR_DEV_ERROR_DETECT == STD_ON) /* COV_PDUR_VAR_DEV_ERROR_DETECT */
# if (PDUR_TXTP2SRC == STD_ON)
  else if((id >= PduR_GetSizeOfTxTp2Src())
#  if (PDUR_INVALIDHNDOFTXTP2SRC == STD_ON)
    || (PduR_IsInvalidHndOfTxTp2Src(id))
#  endif
  )
  {
    errorId = PDUR_E_PDU_ID_INVALID;
  }
# endif /* (PDUR_RXTP2UP == STD_ON) */
#endif
  else
  {
    /* ----- Implementation ----------------------------------------------- */
#if (PDUR_TXTP2SRC == STD_ON)
# if (PDUR_RMDESTRPGROMIDXOFTXTP2SRC == STD_ON)
    if((!PduR_IsRmDestRpgRomUsedOfTxTp2Src(id)) || (0 != PduR_GetEnabledCntOfRpgDestState(PduR_GetRmDestRpgRomIdxOfTxTp2Src(id)))) /* PRQA S 3355, 3356 */ /* MD_CSL_3355_3356 */ /* COV_PDUR_RPG_FEATURE_CHECK */
# endif
    {
      PduR_SrcHndOfTxTp2SrcType srcHnd = PduR_GetSrcHndOfTxTp2Src(id);
      retVal = PduR_GetCopyTxDataFctPtr(PduR_GetCopyTxDataFctPtrIdxOfTxTp2Src(id))(srcHnd, info, retry, availableDataPtr); /* SBSW_PDUR_EXTERNAL_API_CALL_FORWARDING_ID_AND_PTR */
    }
#endif /* (PDUR_RXTP2UP == STD_ON) */
  }

  /* ----- Development Error Report --------------------------------------- */
#if (PDUR_DEV_ERROR_REPORT == STD_ON)
  if(errorId != PDUR_E_NO_ERROR)
  {
    PduR_Det_ReportError(PDUR_FCT_CANTPCPYTX, errorId);
  }
#else
  PDUR_DUMMY_STATEMENT(errorId); /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */
#endif

  PDUR_DUMMY_STATEMENT(id);               /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */
  PDUR_DUMMY_STATEMENT(info);             /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */
  PDUR_DUMMY_STATEMENT(retry);            /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */
  PDUR_DUMMY_STATEMENT(availableDataPtr); /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */

  return retVal;
}


/**********************************************************************************************************************
 * PduR_CanTpRxIndication
 *********************************************************************************************************************/
/*!
 * \internal
 * - #10 Check arguments
 *   - #20 if arguments check was successfully
 *     - #21 get destination handle
 *     - #30 if BSWM callback is active
 *       - #31 call BSWM callback function
 *     - #22 call the gateway or tansport protocol indication function 
 *   - #50 else arguments check fails
 *     - #51 call DET
 * \endinternal
 *********************************************************************************************************************/
FUNC(void, PDUR_CODE) PduR_CanTpRxIndication(PduIdType id, Std_ReturnType result)
{
  /* ----- Local Variables ---------------------------------------------- */
  uint8 errorId = PDUR_E_NO_ERROR;

  /* #10 ----- Development Error Checks ------------------------------------- */
  if(PduR_IsInitialized() == FALSE)
  {
    errorId = PDUR_E_INVALID_REQUEST;
  }
#if (PDUR_DEV_ERROR_DETECT == STD_ON) /* COV_PDUR_VAR_DEV_ERROR_DETECT */
# if (PDUR_RXTP2DEST == STD_ON)
  else if((id >= PduR_GetSizeOfRxTp2Dest())
#  if (PDUR_INVALIDHNDOFRXTP2DEST == STD_ON)
    || (PduR_IsInvalidHndOfRxTp2Dest(id))
#  endif
  )
  {
    errorId = PDUR_E_PDU_ID_INVALID;
  }
# endif /* (PDUR_RXTP2DEST == STD_ON) */
#endif
  else
  {
    /*  #20 ----- Implementation ----------------------------------------------- */
#if (PDUR_RXTP2DEST == STD_ON)
# if (PDUR_BSWMPDURTPRXINDICATIONCALLBACKOFRXTP2DEST == STD_ON)
    /* #30 BSWM callback */
    if(PduR_IsBswMPduRTpRxIndicationCallbackOfRxTp2Dest(id))
    {
      /* #31 */
      BswM_PduR_TpRxIndication(id, result);
    }
# endif /* (PDUR_BSWMPDURTPRXINDICATIONCALLBACKOFRXTP2DEST == STD_ON) */
    PduR_GetTpRxIndicationFctPtr(PduR_GetTpRxIndicationFctPtrIdxOfRxTp2Dest(id))(PduR_GetDestHndOfRxTp2Dest(id), result); /* SBSW_PDUR_EXTERNAL_API_CALL_FORWARDING_ID_ONLY */
#endif
  }

  /* #50 ----- Development Error Report --------------------------------------- */
#if (PDUR_DEV_ERROR_REPORT == STD_ON)
  if(errorId != PDUR_E_NO_ERROR)
  {
    PduR_Det_ReportError(PDUR_FCT_CANTPRXIND, errorId);
  }
#else
  PDUR_DUMMY_STATEMENT(errorId); /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */
#endif

  PDUR_DUMMY_STATEMENT(id);     /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */
  PDUR_DUMMY_STATEMENT(result); /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */
}


/**********************************************************************************************************************
 * PduR_CanTpTxConfirmation
 *********************************************************************************************************************/
/*!
 * \internal
 * - #10 Check arguments
 *   - #20 if arguments check was successfully
 *     - #30 if BSWM callback is active
 *       - #31 call BSWM callback function
 *     - #22 call the gateway or the tp module tx confirmaation function
 *   - #50 else arguments check fails
 *     - #51 call DET
 * \endinternal
 *********************************************************************************************************************/
FUNC(void, PDUR_CODE) PduR_CanTpTxConfirmation(PduIdType id, Std_ReturnType result)
{
  /* ----- Local Variables ---------------------------------------------- */
  uint8 errorId = PDUR_E_NO_ERROR;

  /* #10 ----- Development Error Checks ------------------------------------- */
  /* Check initialization state of the component */
  if(PduR_IsInitialized() == FALSE)
  {
    errorId = PDUR_E_INVALID_REQUEST;
  }
#if (PDUR_DEV_ERROR_DETECT == STD_ON) /* COV_PDUR_VAR_DEV_ERROR_DETECT */
# if (PDUR_TXTP2SRC == STD_ON)
  else if((id >= PduR_GetSizeOfTxTp2Src())
#  if (PDUR_INVALIDHNDOFTXTP2SRC == STD_ON)
    || (PduR_IsInvalidHndOfTxTp2Src(id))
#  endif
  )
  {
    errorId = PDUR_E_PDU_ID_INVALID;
  }
# endif /* (PDUR_TXTP2SRC == STD_ON) */
#endif
  else
  {
    /* ----- Implementation ----------------------------------------------- */
#if (PDUR_TXTP2SRC == STD_ON)
# if (PDUR_BSWMPDURTPTXCONFIRMATIONCALLBACKOFTXTP2SRC == STD_ON)
    /* #30 BSWM callback */
    if(PduR_IsBswMPduRTpTxConfirmationCallbackOfTxTp2Src(id))
    {
      /* #31 */
      BswM_PduR_TpTxConfirmation(id, result);
    }
# endif /* (PDUR_BSWMPDURTPTXCONFIRMATIONCALLBACKOFTXTP2SRC == STD_ON) */
    PduR_GetTpTxConfirmationFctPtr(PduR_GetTpTxConfirmationFctPtrIdxOfTxTp2Src(id))(PduR_GetSrcHndOfTxTp2Src(id), result); /* SBSW_PDUR_EXTERNAL_API_CALL_FORWARDING_ID_ONLY */
#endif /* (PDUR_TXTP2SRC == STD_ON) */
  }

  /* ----- Development Error Report --------------------------------------- */
#if (PDUR_DEV_ERROR_REPORT == STD_ON)
  if(errorId != PDUR_E_NO_ERROR)
  {
    PduR_Det_ReportError(PDUR_FCT_CANTPTXCFM, errorId);
  }
#else
  PDUR_DUMMY_STATEMENT(errorId); /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */
#endif

  PDUR_DUMMY_STATEMENT(id);     /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */
  PDUR_DUMMY_STATEMENT(result); /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */
}


/* CancelReceive global without UseTag API */

/* ChangeParameter global without UseTag  API */

/* Communication Interface / Transport Protocol APIs */

/* Communication Interface / Transport Protocol APIs */

/**********************************************************************************************************************
  CONFIGURATION CLASS: LINK
  SECTION: GLOBAL FUNCTIONS
**********************************************************************************************************************/


#define PDUR_STOP_SEC_CODE
/* PRQA S 5087 1 */ /* MD_MSR_19.1 */
#include "MemMap.h"

/* SBSW_JUSTIFICATION_BEGIN

  \ID SBSW_PDUR_EXTERNAL_API_CALL_FORWARDING_ID_AND_PTR
    \DESCRIPTION    The API is called with an Id and a pointer.
                    The API call is forwarded using a function pointer which is read using ComStackLib macros.
                    
    \COUNTERMEASURE \N The function pointer is read using the passed Id (and ComStackLib macros). 
                       The Id is a SNV provided by the lower layer. 
                       It is checked at runtime if it is in the valid range.
                       The pointer is provided by the lower layer and is assumed to be valid. It is passed as is to the corresponding function. 

  \ID SBSW_PDUR_EXTERNAL_API_CALL_FORWARDING_ID_ONLY
    \DESCRIPTION    The API is called with an Id.
                    The API call is forwarded using a function pointer which is read using ComStackLib macros.
                    
    \COUNTERMEASURE \R The function pointer is read using the passed Id (and ComStackLib macros). 
                       The Id is a SNV provided by the lower layer. 
                       It is checked at runtime if it is in the valid range.

 SBSW_JUSTIFICATION_END */

/**********************************************************************************************************************
 * END OF FILE: PduR_Lcfg.c
 *********************************************************************************************************************/

