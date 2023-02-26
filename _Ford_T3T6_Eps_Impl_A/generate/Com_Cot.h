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
 *            Module: Com
 *           Program: MSR_Ford_SLP1 (MSR_Ford_SLP1)
 *          Customer: Nexteer Automotive Corporation
 *       Expiry Date: Not restricted
 *  Ordered Derivat.: R7F701373EABG
 *    License Scope : The usage is restricted to CBD1601056_D00
 *
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *              File: Com_Cot.h
 *   Generation Time: 2018-05-07 16:44:10
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


#if !defined (COM_COT_H)
# define COM_COT_H

/**********************************************************************************************************************
  MISRA / PClint JUSTIFICATIONS
**********************************************************************************************************************/
/* PRQA S 0777 EOF */ /* MD_Com_0777_IPduCallouts */

/**********************************************************************************************************************
  INCLUDES
**********************************************************************************************************************/
#include "Com_Types.h"
/**********************************************************************************************************************
  GLOBAL CONSTANT MACROS
**********************************************************************************************************************/

/**********************************************************************************************************************
  GLOBAL FUNCTION MACROS
**********************************************************************************************************************/

/**********************************************************************************************************************
  GLOBAL DATA TYPES AND STRUCTURES
**********************************************************************************************************************/

/**********************************************************************************************************************
  GLOBAL DATA PROTOTYPES
**********************************************************************************************************************/

/**********************************************************************************************************************
  GLOBAL FUNCTION PROTOTYPES
**********************************************************************************************************************/
#define COM_START_SEC_APPL_CODE
#include "MemMap.h"    /* PRQA S 5087 1 */ /* MD_MSR_19.1 */

/* Configurable interface TxPduCallout */

/* Configurable interface RxPduCallout */
FUNC(boolean, COM_APPL_CODE) ComIPduCallout_ABS_BrkBst_Data_FD1_Oper(PduIdType PduId, P2CONST(PduInfoType, AUTOMATIC, COM_APPL_DATA) PduInfoPtr);
FUNC(boolean, COM_APPL_CODE) ComIPduCallout_APIM_Send_Signals_2_FD1_Oper(PduIdType PduId, P2CONST(PduInfoType, AUTOMATIC, COM_APPL_DATA) PduInfoPtr);
FUNC(boolean, COM_APPL_CODE) ComIPduCallout_BodyInfo_3_HS2_Oper(PduIdType PduId, P2CONST(PduInfoType, AUTOMATIC, COM_APPL_DATA) PduInfoPtr);
FUNC(boolean, COM_APPL_CODE) ComIPduCallout_BrakeSnData_3_FD1_Oper(PduIdType PduId, P2CONST(PduInfoType, AUTOMATIC, COM_APPL_DATA) PduInfoPtr);
FUNC(boolean, COM_APPL_CODE) ComIPduCallout_BrakeSnData_4_FD1_Oper(PduIdType PduId, P2CONST(PduInfoType, AUTOMATIC, COM_APPL_DATA) PduInfoPtr);
FUNC(boolean, COM_APPL_CODE) ComIPduCallout_BrakeSnData_6_FD1_Oper(PduIdType PduId, P2CONST(PduInfoType, AUTOMATIC, COM_APPL_DATA) PduInfoPtr);
FUNC(boolean, COM_APPL_CODE) ComIPduCallout_BrakeSysFeatures_3_FD1(PduIdType PduId, P2CONST(PduInfoType, AUTOMATIC, COM_APPL_DATA) PduInfoPtr);
FUNC(boolean, COM_APPL_CODE) ComIPduCallout_BrakeSysFeatures_HS2_Oper(PduIdType PduId, P2CONST(PduInfoType, AUTOMATIC, COM_APPL_DATA) PduInfoPtr);
FUNC(boolean, COM_APPL_CODE) ComIPduCallout_Climate_Control_Data_FD1(PduIdType PduId, P2CONST(PduInfoType, AUTOMATIC, COM_APPL_DATA) PduInfoPtr);
FUNC(boolean, COM_APPL_CODE) ComIPduCallout_Cluster_Info1_HS2(PduIdType PduId, P2CONST(PduInfoType, AUTOMATIC, COM_APPL_DATA) PduInfoPtr);
FUNC(boolean, COM_APPL_CODE) ComIPduCallout_DesiredTorqBrk_FD1_Oper(PduIdType PduId, P2CONST(PduInfoType, AUTOMATIC, COM_APPL_DATA) PduInfoPtr);
FUNC(boolean, COM_APPL_CODE) ComIPduCallout_EngVehicleSpThrottle2_HS2_Oper(PduIdType PduId, P2CONST(PduInfoType, AUTOMATIC, COM_APPL_DATA) PduInfoPtr);
FUNC(boolean, COM_APPL_CODE) ComIPduCallout_GGCC_Config_Mgmt_ID_1_HS2_Oper(PduIdType PduId, P2CONST(PduInfoType, AUTOMATIC, COM_APPL_DATA) PduInfoPtr);
FUNC(boolean, COM_APPL_CODE) ComIPduCallout_Lane_Assist_Data1_FD1_Oper(PduIdType PduId, P2CONST(PduInfoType, AUTOMATIC, COM_APPL_DATA) PduInfoPtr);
FUNC(boolean, COM_APPL_CODE) ComIPduCallout_LateralMotionControl_FD1_Oper(PduIdType PduId, P2CONST(PduInfoType, AUTOMATIC, COM_APPL_DATA) PduInfoPtr);
FUNC(boolean, COM_APPL_CODE) ComIPduCallout_Mc_Send_Signlas_2_FD1(PduIdType PduId, P2CONST(PduInfoType, AUTOMATIC, COM_APPL_DATA) PduInfoPtr);
FUNC(boolean, COM_APPL_CODE) ComIPduCallout_Steer_Assist_Data_FD1(PduIdType PduId, P2CONST(PduInfoType, AUTOMATIC, COM_APPL_DATA) PduInfoPtr);
FUNC(boolean, COM_APPL_CODE) ComIPduCallout_Steering_Data_FD1_Oper(PduIdType PduId, P2CONST(PduInfoType, AUTOMATIC, COM_APPL_DATA) PduInfoPtr);
FUNC(boolean, COM_APPL_CODE) ComIPduCallout_TrailerAidStat3_FD1(PduIdType PduId, P2CONST(PduInfoType, AUTOMATIC, COM_APPL_DATA) PduInfoPtr);
FUNC(boolean, COM_APPL_CODE) ComIPduCallout_TrailerInfo_2_FD1(PduIdType PduId, P2CONST(PduInfoType, AUTOMATIC, COM_APPL_DATA) PduInfoPtr);
FUNC(boolean, COM_APPL_CODE) ComIPduCallout_TrailerInfo_FD1(PduIdType PduId, P2CONST(PduInfoType, AUTOMATIC, COM_APPL_DATA) PduInfoPtr);
FUNC(boolean, COM_APPL_CODE) ComIPduCallout_TransGearData_FD1_Oper(PduIdType PduId, P2CONST(PduInfoType, AUTOMATIC, COM_APPL_DATA) PduInfoPtr);
FUNC(boolean, COM_APPL_CODE) ComIPduCallout_VehicleOperatingModes_HS2_Oper(PduIdType PduId, P2CONST(PduInfoType, AUTOMATIC, COM_APPL_DATA) PduInfoPtr);
FUNC(boolean, COM_APPL_CODE) ComIPduCallout_WheelData_FD1_Oper(PduIdType PduId, P2CONST(PduInfoType, AUTOMATIC, COM_APPL_DATA) PduInfoPtr);
FUNC(boolean, COM_APPL_CODE) ComIPduCallout_WheelSpeed_HS2_Oper(PduIdType PduId, P2CONST(PduInfoType, AUTOMATIC, COM_APPL_DATA) PduInfoPtr);
FUNC(boolean, COM_APPL_CODE) ComIPduCallout_Yaw_Data_FD1_Oper(PduIdType PduId, P2CONST(PduInfoType, AUTOMATIC, COM_APPL_DATA) PduInfoPtr);



#define COM_STOP_SEC_APPL_CODE
#include "MemMap.h"    /* PRQA S 5087 1 */ /* MD_MSR_19.1 */

#endif  /* COM_COT_H */
/**********************************************************************************************************************
  END OF FILE: Com_Cot.h
**********************************************************************************************************************/

