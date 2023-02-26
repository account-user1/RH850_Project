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
 *              File: Com_Lcfg.c
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


/**********************************************************************************************************************
  MISRA / PClint JUSTIFICATIONS
**********************************************************************************************************************/
/* PRQA S 0342 EOF */ /* MD_Com_0342 */
/* PRQA S 0612 EOF */ /* MD_Com_0612 */
/* PRQA S 0639 EOF */ /* MD_MSR_1.1_639 */
/* PRQA S 0850 EOF */ /* MD_MSR_19.8 */
/* PRQA S 0857 EOF */ /* MD_MSR_1.1_857 */
/* PRQA S 2006 EOF */ /* MD_MSR_14.7 */
/* PRQA S 3109 EOF */ /* MD_MSR_14.3 */
/* PRQA S 3453 EOF */ /* MD_CSL_3453 */
/* PRQA S 3458 EOF */ /* MD_MSR_19.4 */

/**********************************************************************************************************************
  INCLUDES
**********************************************************************************************************************/
#define V_IL_ASRCOMCFG5_LCFG_SOURCE

#include "Com.h"

#include "Com_Lcfg.h"

#include "Appl_Cbk.h"

#include "SchM_Com.h"

/**********************************************************************************************************************
  LOCAL CONSTANT MACROS
**********************************************************************************************************************/

/**********************************************************************************************************************
  LOCAL FUNCTION MACROS
**********************************************************************************************************************/

/**********************************************************************************************************************
  LOCAL DATA TYPES AND STRUCTURES
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
  Com_CbkRxTOutFuncPtr
**********************************************************************************************************************/
/** 
  \var    Com_CbkRxTOutFuncPtr
  \brief  Function pointer table containing configured Rx timeout notifications for signals and signal groups.
*/ 
#define COM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(ComCbkRxTOutType, COM_CONST) Com_CbkRxTOutFuncPtr[26] = {
  /* Index    CbkRxTOutFuncPtr                                         Referable Keys */
  /*     0 */ComTimeoutNotification_YawStabilityIndex_Oper       ,  /* [/ActiveEcuC/Com/ComConfig/ABS_BrkBst_Data_FD1_oFD1_CAN_3abd61be] */
  /*     1 */ComTimeoutNotification_TrlrAidMde_D_Rq_Oper         ,  /* [/ActiveEcuC/Com/ComConfig/APIM_Send_Signals_2_FD1_oFD1_CAN_3abd61be] */
  /*     2 */ComTimeoutNotification_Ignition_Status_Oper         ,  /* [/ActiveEcuC/Com/ComConfig/BodyInfo_3_FD1_oFD1_CAN_3abd61be] */
  /*     3 */ComTimeoutNotification_VehLatComp_A_Actl_Oper       ,  /* [/ActiveEcuC/Com/ComConfig/BrakeSnData_3_FD1_oFD1_CAN_3abd61be] */
  /*     4 */ComTimeoutNotification_BrkTot_Tq_Actl_Oper          ,  /* [/ActiveEcuC/Com/ComConfig/BrakeSnData_4_FD1_oFD1_CAN_3abd61be] */
  /*     5 */ComTimeoutNotification_Ford_StePinOffst_D_Stat_Oper ,  /* [/ActiveEcuC/Com/ComConfig/BrakeSnData_6_FD1_oFD1_CAN_3abd61be] */
  /*     6 */ComTimeoutNotification_SelDrvMdeChassis2_D_Rq       ,  /* [/ActiveEcuC/Com/ComConfig/BrakeSysFeatures_3_oFD1_CAN_3abd61be] */
  /*     7 */ComTimeoutNotification_Veh_V_ActlBrk_Oper           ,  /* [/ActiveEcuC/Com/ComConfig/BrakeSysFeatures_FD1_oFD1_CAN_3abd61be] */
  /*     8 */ComTimeoutNotification_Outside_Air_Temp_Stat        ,  /* [/ActiveEcuC/Com/ComConfig/Climate_Control_Data_FD1_oFD1_CAN_3abd61be] */
  /*     9 */ComTimeoutNotification_OdometerMasterValue          ,  /* [/ActiveEcuC/Com/ComConfig/Cluster_Info1_FD1_oFD1_CAN_3abd61be] */
  /*    10 */ComTimeoutNotification_CmbbDeny_B_ActlBrk_Oper      ,  /* [/ActiveEcuC/Com/ComConfig/DesiredTorqBrk_FD1_oFD1_CAN_3abd61be] */
  /*    11 */ComTimeoutNotification_Ford_VehVActlEng_D_Qf_Oper   ,  /* [/ActiveEcuC/Com/ComConfig/EngVehicleSpThrottle2_FD1_oFD1_CAN_3abd61be] */
  /*    12 */ComTimeoutNotification_VehicleGGCCData_Oper         ,  /* [/ActiveEcuC/Com/ComConfig/GGCC_Config_Mgmt_ID_1_FD1_oFD1_CAN_3abd61be] */
  /*    13 */ComTimeoutNotification_LaCurvature_No_Calc_Oper     ,  /* [/ActiveEcuC/Com/ComConfig/Lane_Assist_Data1_FD1_oFD1_CAN_3abd61be] */
  /*    14 */ComTimeoutNotification_LatCtlRampType_D_Rq_Oper     ,  /* [/ActiveEcuC/Com/ComConfig/LateralMotionControl_FD1_oFD1_CAN_3abd61be] */
  /*    15 */ComTimeoutNotification_EsaOn_B_Rq                   ,  /* [/ActiveEcuC/Com/ComConfig/Mc_Send_Signals_2_FD1_oFD1_CAN_3abd61be] */
  /*    16 */ComTimeoutNotification_EsaEnbl_D2_Rq                ,  /* [/ActiveEcuC/Com/ComConfig/Steer_Assist_Data_FD1_oFD1_CAN_3abd61be] */
  /*    17 */ComTimeoutNotification_TurnLghtSwtch_D_Stat_Oper    ,  /* [/ActiveEcuC/Com/ComConfig/Steering_Data_FD1_oFD1_CAN_3abd61be] */
  /*    18 */ComTimeoutNotification_HitchToVehAxle_L_Calc        ,  /* [/ActiveEcuC/Com/ComConfig/TrailerAid_Stat3_FD1_oFD1_CAN_3abd61be] */
  /*    19 */ComTimeoutNotification_TrlrAidSwtch_D_RqDrv         ,  /* [/ActiveEcuC/Com/ComConfig/TrailerInfo_2_FD1_oFD1_CAN_3abd61be] */
  /*    20 */ComTimeoutNotification_TrlrLampCnnct_B_Actl         ,  /* [/ActiveEcuC/Com/ComConfig/TrailerInfo_FD1_oFD1_CAN_3abd61be] */
  /*    21 */ComTimeoutNotification_GearLvrPos_D_Actl_Oper       ,  /* [/ActiveEcuC/Com/ComConfig/TransGearData_FD1_oFD1_CAN_3abd61be] */
  /*    22 */ComTimeoutNotification_PwPckTq_D_Stat_Oper          ,  /* [/ActiveEcuC/Com/ComConfig/VehicleOperatingModes_FD1_oFD1_CAN_3abd61be] */
  /*    23 */ComTimeoutNotification_WhlDirFl_D_Actl_Oper         ,  /* [/ActiveEcuC/Com/ComConfig/WheelData_FD1_oFD1_CAN_3abd61be] */
  /*    24 */ComTimeoutNotification_WhlFl_W_Meas_Oper            ,  /* [/ActiveEcuC/Com/ComConfig/WheelSpeed_FD1_oFD1_CAN_3abd61be] */
  /*    25 */ComTimeoutNotification_VehYaw_W_Actl_Oper              /* [/ActiveEcuC/Com/ComConfig/Yaw_Data_FD1_oFD1_CAN_3abd61be] */
};
#define COM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Com_ConstValueArrayBased
**********************************************************************************************************************/
/** 
  \var    Com_ConstValueArrayBased
  \brief  Optimized array of commonly used values like initial or invalid values. (UINT8_N, UINT8_DYN)
*/ 
#define COM_START_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(Com_ConstValueArrayBasedType, COM_CONST) Com_ConstValueArrayBased[8] = {
  /* Index    ConstValueArrayBased      Referable Keys */
  /*     0 */                0x00U,  /* [/ActiveEcuC/Com/ComConfig/VehicleGGCCData_575096acInitValue, /ActiveEcuC/Com/ComConfig/TrlrSnsId_No_Actl_ea9ce863InitValue] */
  /*     1 */                0x00U,  /* [/ActiveEcuC/Com/ComConfig/VehicleGGCCData_575096acInitValue, /ActiveEcuC/Com/ComConfig/TrlrSnsId_No_Actl_ea9ce863InitValue] */
  /*     2 */                0x00U,  /* [/ActiveEcuC/Com/ComConfig/VehicleGGCCData_575096acInitValue, /ActiveEcuC/Com/ComConfig/TrlrSnsId_No_Actl_ea9ce863InitValue] */
  /*     3 */                0x00U,  /* [/ActiveEcuC/Com/ComConfig/VehicleGGCCData_575096acInitValue, /ActiveEcuC/Com/ComConfig/TrlrSnsId_No_Actl_ea9ce863InitValue] */
  /*     4 */                0x00U,  /* [/ActiveEcuC/Com/ComConfig/VehicleGGCCData_575096acInitValue, /ActiveEcuC/Com/ComConfig/TrlrSnsId_No_Actl_ea9ce863InitValue] */
  /*     5 */                0x00U,  /* [/ActiveEcuC/Com/ComConfig/VehicleGGCCData_575096acInitValue, /ActiveEcuC/Com/ComConfig/TrlrSnsId_No_Actl_ea9ce863InitValue] */
  /*     6 */                0x00U,  /* [/ActiveEcuC/Com/ComConfig/VehicleGGCCData_575096acInitValue] */
  /*     7 */                0x00U   /* [/ActiveEcuC/Com/ComConfig/VehicleGGCCData_575096acInitValue] */
};
#define COM_STOP_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Com_ConstValueUInt16
**********************************************************************************************************************/
/** 
  \var    Com_ConstValueUInt16
  \brief  Optimized array of commonly used values like initial or invalid values. (UINT16)
*/ 
#define COM_START_SEC_CONST_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(Com_ConstValueUInt16Type, COM_CONST) Com_ConstValueUInt16[12] = {
  /* Index    ConstValueUInt16      Referable Keys */
  /*     0 */          0x0100U,  /* [/ActiveEcuC/Com/ComConfig/YawStabilityIndex_706a037fInitValue, /ActiveEcuC/Com/ComConfig/YawStabilityIndex_706a037fRxDataTimeoutSubstitutionValue] */
  /*     1 */          0x0190U,  /* [/ActiveEcuC/Com/ComConfig/TrlrAid_AnRate2_Actl_0bf22cceInitValue, /ActiveEcuC/Com/ComConfig/TrlrAid_AnRate2_Actl_0bf22cceRxDataTimeoutSubstitutionValue] */
  /*     2 */          0x02D0U,  /* [/ActiveEcuC/Com/ComConfig/TrlrAid_An3_Actl_0bf22cceInitValue, /ActiveEcuC/Com/ComConfig/TrlrAid_An3_Actl_0bf22cceRxDataTimeoutSubstitutionValue] */
  /*     3 */          0x0FFEU,  /* [/ActiveEcuC/Com/ComConfig/TrlrAidCtl_U_RqDrv_372f28feInitValue, /ActiveEcuC/Com/ComConfig/TrlrAidCtl_U_RqDrv_372f28feRxDataTimeoutSubstitutionValue, /ActiveEcuC/Com/ComConfig/TrlrHitYaw_AnRate_Actl_96fdcdb8InitValue, /ActiveEcuC/Com/ComConfig/TrlrHitYaw_AnRate_Actl_96fdcdb8RxDataTimeoutSubstitutionValue, /ActiveEcuC/Com/ComConfig/TrlrHitchYaw_An_Actl_96fdcdb8InitValue, /ActiveEcuC/Com/ComConfig/TrlrHitchYaw_An_Actl_96fdcdb8RxDataTimeoutSubstitutionValue, /ActiveEcuC/Com/ComConfig/VehYawComp_W_Actl_470bb112InitValue, /ActiveEcuC/Com/ComConfig/VehYawComp_W_Actl_470bb112RxDataTimeoutSubstitutionValue] */
  /*     4 */          0xFFFEU,  /* [/ActiveEcuC/Com/ComConfig/StePinOffst_An_Est_c3a8df7fInitValue, /ActiveEcuC/Com/ComConfig/StePinOffst_An_Est_c3a8df7fRxDataTimeoutSubstitutionValue, /ActiveEcuC/Com/ComConfig/TrlrYaw_W_Actl_96fdcdb8InitValue, /ActiveEcuC/Com/ComConfig/TrlrYaw_W_Actl_96fdcdb8RxDataTimeoutSubstitutionValue, /ActiveEcuC/Com/ComConfig/VehYaw_W_Actl_f318059cInitValue, /ActiveEcuC/Com/ComConfig/VehYaw_W_Actl_f318059cRxDataTimeoutSubstitutionValue] */
  /*     5 */          0x0200U,  /* [/ActiveEcuC/Com/ComConfig/LatCtlPathOffst_L_Actl_5abef978InitValue, /ActiveEcuC/Com/ComConfig/LatCtlPathOffst_L_Actl_5abef978RxDataTimeoutSubstitutionValue] */
  /*     6 */          0x03E8U,  /* [/ActiveEcuC/Com/ComConfig/LatCtlCurv_No_Actl_5abef978InitValue, /ActiveEcuC/Com/ComConfig/LatCtlCurv_No_Actl_5abef978RxDataTimeoutSubstitutionValue, /ActiveEcuC/Com/ComConfig/LatCtlPath_An_Actl_5abef978InitValue, /ActiveEcuC/Com/ComConfig/LatCtlPath_An_Actl_5abef978RxDataTimeoutSubstitutionValue] */
  /*     7 */          0x1000U,  /* [/ActiveEcuC/Com/ComConfig/LatCtlCurv_NoRate_Actl_5abef978InitValue, /ActiveEcuC/Com/ComConfig/LatCtlCurv_NoRate_Actl_5abef978RxDataTimeoutSubstitutionValue] */
  /*     8 */          0x0800U,  /* [/ActiveEcuC/Com/ComConfig/LaCurvature_No_Calc_d64ac390InitValue, /ActiveEcuC/Com/ComConfig/LaCurvature_No_Calc_d64ac390RxDataTimeoutSubstitutionValue, /ActiveEcuC/Com/ComConfig/LaRefAng_No_Req_d64ac390InitValue, /ActiveEcuC/Com/ComConfig/LaRefAng_No_Req_d64ac390RxDataTimeoutSubstitutionValue] */
  /*     9 */          0x03FEU,  /* [/ActiveEcuC/Com/ComConfig/CmbbObjDistLong_L_Actl_dafea5bbInitValue, /ActiveEcuC/Com/ComConfig/CmbbObjDistLong_L_Actl_dafea5bbRxDataTimeoutSubstitutionValue, /ActiveEcuC/Com/ComConfig/CmbbObjRelLong_V_Actl_dafea5bbInitValue, /ActiveEcuC/Com/ComConfig/CmbbObjRelLong_V_Actl_dafea5bbRxDataTimeoutSubstitutionValue, /ActiveEcuC/Com/ComConfig/VehLatComp_A_Actl_470bb112InitValue, /ActiveEcuC/Com/ComConfig/VehLatComp_A_Actl_470bb112RxDataTimeoutSubstitutionValue, /ActiveEcuC/Com/ComConfig/VehLongComp_A_Actl_470bb112InitValue, /ActiveEcuC/Com/ComConfig/VehLongComp_A_Actl_470bb112RxDataTimeoutSubstitutionValue, /ActiveEcuC/Com/ComConfig/VehVertComp_A_Actl_22c61bd2InitValue, /ActiveEcuC/Com/ComConfig/VehVertComp_A_Actl_22c61bd2RxDataTimeoutSubstitutionValue] */
  /*    10 */          0x01FEU,  /* [/ActiveEcuC/Com/ComConfig/CmbbObjDistLat_L_Actl_dafea5bbInitValue, /ActiveEcuC/Com/ComConfig/CmbbObjDistLat_L_Actl_dafea5bbRxDataTimeoutSubstitutionValue, /ActiveEcuC/Com/ComConfig/CmbbObjRelLat_V_Actl_dafea5bbInitValue, /ActiveEcuC/Com/ComConfig/CmbbObjRelLat_V_Actl_dafea5bbRxDataTimeoutSubstitutionValue] */
  /*    11 */          0x0000U   /* [/ActiveEcuC/Com/ComConfig/ApedPos_Pc_ActlArb_a3d34b0dInitValue, /ActiveEcuC/Com/ComConfig/ApedPos_Pc_ActlArb_a3d34b0dRxDataTimeoutSubstitutionValue, /ActiveEcuC/Com/ComConfig/BrkTot_Tq_Actl_22c61bd2InitValue, /ActiveEcuC/Com/ComConfig/BrkTot_Tq_Actl_22c61bd2RxDataTimeoutSubstitutionValue, /ActiveEcuC/Com/ComConfig/DeliveryIdle_f2797042InitValue, /ActiveEcuC/Com/ComConfig/DeliveryIdle_f2797042RxDataTimeoutSubstitutionValue, /ActiveEcuC/Com/ComConfig/EngAout_N_Actl_a3d34b0dInitValue, /ActiveEcuC/Com/ComConfig/EngAout_N_Actl_a3d34b0dRxDataTimeoutSubstitutionValue, /ActiveEcuC/Com/ComConfig/ExtSteeringAngleReq2_ef286bfcInitValue, /ActiveEcuC/Com/ComConfig/ExtSteeringAngleReq2_ef286bfcRxDataTimeoutSubstitutionValue, /ActiveEcuC/Com/ComConfig/PrplWhlTot2_Tq_Actl_e6deed9eInitValue, /ActiveEcuC/Com/ComConfig/PrplWhlTot2_Tq_Actl_e6deed9eRxDataTimeoutSubstitutionValue, /ActiveEcuC/Com/ComConfig/SteWhlRelCalib_An_Sns_11fa9ae5InitValue, /ActiveEcuC/Com/ComConfig/SteWhlRelCalib_An_Sns_11fa9ae5RxDataTimeoutSubstitutionValue, /ActiveEcuC/Com/ComConfig/TrlrAxleToBmpr_L_Actl_0edbb78eInitValue, /ActiveEcuC/Com/ComConfig/TrlrAxleToBmpr_L_Actl_0edbb78eRxDataTimeoutSubstitutionValue, /ActiveEcuC/Com/ComConfig/VehOverGnd_V_Est_470bb112InitValue, /ActiveEcuC/Com/ComConfig/VehOverGnd_V_Est_470bb112RxDataTimeoutSubstitutionValue, /ActiveEcuC/Com/ComConfig/Veh_V_ActlBrk_9f750b9fInitValue, /ActiveEcuC/Com/ComConfig/Veh_V_ActlBrk_9f750b9fRxDataTimeoutSubstitutionValue, /ActiveEcuC/Com/ComConfig/Veh_V_ActlEng_2508f61fInitValue, /ActiveEcuC/Com/ComConfig/Veh_V_ActlEng_2508f61fRxDataTimeoutSubstitutionValue, /ActiveEcuC/Com/ComConfig/WhlFl_W_Meas_5a620481InitValue, /ActiveEcuC/Com/ComConfig/WhlFl_W_Meas_5a620481RxDataTimeoutSubstitutionValue, /ActiveEcuC/Com/ComConfig/WhlFr_W_Meas_5a620481InitValue, /ActiveEcuC/Com/ComConfig/WhlFr_W_Meas_5a620481RxDataTimeoutSubstitutionValue, /ActiveEcuC/Com/ComConfig/WhlRl_W_Meas_5a620481InitValue, /ActiveEcuC/Com/ComConfig/WhlRl_W_Meas_5a620481RxDataTimeoutSubstitutionValue, /ActiveEcuC/Com/ComConfig/WhlRr_W_Meas_5a620481InitValue, /ActiveEcuC/Com/ComConfig/WhlRr_W_Meas_5a620481RxDataTimeoutSubstitutionValue] */
};
#define COM_STOP_SEC_CONST_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Com_ConstValueUInt32
**********************************************************************************************************************/
/** 
  \var    Com_ConstValueUInt32
  \brief  Optimized array of commonly used values like initial or invalid values. (UINT32)
*/ 
#define COM_START_SEC_CONST_32BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(Com_ConstValueUInt32Type, COM_CONST) Com_ConstValueUInt32[3] = {
  /* Index    ConstValueUInt32      Referable Keys */
  /*     0 */     0x00000000UL,  /* [/ActiveEcuC/Com/ComConfig/OdometerMasterValue_09a60c78InitValue, /ActiveEcuC/Com/ComConfig/OdometerMasterValue_09a60c78RxDataTimeoutSubstitutionValue] */
  /*     1 */     0x01601056UL,  /* [/ActiveEcuC/Com/ComConfig/DeliverySubProjectNumber_f2797042InitValue, /ActiveEcuC/Com/ComConfig/DeliverySubProjectNumber_f2797042RxDataTimeoutSubstitutionValue] */
  /*     2 */     0x00170004UL   /* [/ActiveEcuC/Com/ComConfig/DeliverySipNumber_f2797042InitValue, /ActiveEcuC/Com/ComConfig/DeliverySipNumber_f2797042RxDataTimeoutSubstitutionValue] */
};
#define COM_STOP_SEC_CONST_32BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Com_ConstValueUInt8
**********************************************************************************************************************/
/** 
  \var    Com_ConstValueUInt8
  \brief  Optimized array of commonly used values like initial or invalid values. (BOOLEAN, UINT8)
*/ 
#define COM_START_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(Com_ConstValueUInt8Type, COM_CONST) Com_ConstValueUInt8[13] = {
  /* Index    ConstValueUInt8      Referable Keys */
  /*     0 */           0xFEU,  /* [/ActiveEcuC/Com/ComConfig/Outside_Air_Temp_Stat_f1463698InitValue, /ActiveEcuC/Com/ComConfig/Outside_Air_Temp_Stat_f1463698RxDataTimeoutSubstitutionValue] */
  /*     1 */           0x07U,  /* [/ActiveEcuC/Com/ComConfig/GearRvrse_D_Actl_2508f61fInitValue, /ActiveEcuC/Com/ComConfig/GearRvrse_D_Actl_2508f61fRxDataTimeoutSubstitutionValue] */
  /*     2 */           0x0FU,  /* [/ActiveEcuC/Com/ComConfig/GearPos_D_Actl_1e331f99InitValue, /ActiveEcuC/Com/ComConfig/GearPos_D_Actl_1e331f99RxDataTimeoutSubstitutionValue] */
  /*     3 */           0x0EU,  /* [/ActiveEcuC/Com/ComConfig/GearLvrPos_D_Actl_8c4ca771InitValue, /ActiveEcuC/Com/ComConfig/GearLvrPos_D_Actl_8c4ca771RxDataTimeoutSubstitutionValue, /ActiveEcuC/Com/ComConfig/TrnRng_D_Rq_1e331f99InitValue, /ActiveEcuC/Com/ComConfig/TrnRng_D_Rq_1e331f99RxDataTimeoutSubstitutionValue] */
  /*     4 */           0x17U,  /* [/ActiveEcuC/Com/ComConfig/FileVersionYear_216bb0c2InitValue, /ActiveEcuC/Com/ComConfig/FileVersionYear_216bb0c2RxDataTimeoutSubstitutionValue] */
  /*     5 */           0x05U,  /* [/ActiveEcuC/Com/ComConfig/FileVersionNumber_216bb0c2InitValue, /ActiveEcuC/Com/ComConfig/FileVersionNumber_216bb0c2RxDataTimeoutSubstitutionValue] */
  /*     6 */           0x11U,  /* [/ActiveEcuC/Com/ComConfig/FileVersionMonth_216bb0c2InitValue, /ActiveEcuC/Com/ComConfig/FileVersionMonth_216bb0c2RxDataTimeoutSubstitutionValue] */
  /*     7 */           0x30U,  /* [/ActiveEcuC/Com/ComConfig/FileVersionDay_216bb0c2InitValue, /ActiveEcuC/Com/ComConfig/FileVersionDay_216bb0c2RxDataTimeoutSubstitutionValue] */
  /*     8 */           0x80U,  /* [/ActiveEcuC/Com/ComConfig/DrvSte_Tq_Rq_bfc9faa4InitValue, /ActiveEcuC/Com/ComConfig/DrvSte_Tq_Rq_bfc9faa4RxDataTimeoutSubstitutionValue] */
  /*     9 */           0x7EU,  /* [/ActiveEcuC/Com/ComConfig/CmbbObjColl_T_Actl_dafea5bbInitValue, /ActiveEcuC/Com/ComConfig/CmbbObjColl_T_Actl_dafea5bbRxDataTimeoutSubstitutionValue] */
  /*    10 */           0xFFU,  /* [/ActiveEcuC/Com/ComConfig/BattULo_U_Actl_0a3b9a6bInitValue, /ActiveEcuC/Com/ComConfig/BattULo_U_Actl_0a3b9a6bRxDataTimeoutSubstitutionValue, /ActiveEcuC/Com/ComConfig/HitchToVehAxle_L_Calc_0bf22cceInitValue, /ActiveEcuC/Com/ComConfig/HitchToVehAxle_L_Calc_0bf22cceRxDataTimeoutSubstitutionValue] */
  /*    11 */           0x01U,  /* [/ActiveEcuC/Com/ComConfig/ApedPosPcActl_D_Qf_a3d34b0dInitValue, /ActiveEcuC/Com/ComConfig/ApedPosPcActl_D_Qf_a3d34b0dRxDataTimeoutSubstitutionValue, /ActiveEcuC/Com/ComConfig/BPedDrvAppl_D_QF_aea354aaInitValue, /ActiveEcuC/Com/ComConfig/BPedDrvAppl_D_QF_aea354aaRxDataTimeoutSubstitutionValue, /ActiveEcuC/Com/ComConfig/BpedDrvAppl_D_Actl_aea354aaInitValue, /ActiveEcuC/Com/ComConfig/BpedDrvAppl_D_Actl_aea354aaRxDataTimeoutSubstitutionValue, /ActiveEcuC/Com/ComConfig/EsaOn_B_Rq_bffaafb8InitValue, /ActiveEcuC/Com/ComConfig/EsaOn_B_Rq_bffaafb8RxDataTimeoutSubstitutionValue, /ActiveEcuC/Com/ComConfig/TrlrYawWActl_D_Qf_96fdcdb8InitValue, /ActiveEcuC/Com/ComConfig/TrlrYawWActl_D_Qf_96fdcdb8RxDataTimeoutSubstitutionValue] */
  /*    12 */           0x00U   /* [/ActiveEcuC/Com/ComConfig/AbsActv_B_Actl_eaa4779aInitValue, /ActiveEcuC/Com/ComConfig/AbsActv_B_Actl_eaa4779aRxDataTimeoutSubstitutionValue, /ActiveEcuC/Com/ComConfig/ApaSys_D_Stat_ef286bfcInitValue, /ActiveEcuC/Com/ComConfig/ApaSys_D_Stat_ef286bfcRxDataTimeoutSubstitutionValue, /ActiveEcuC/Com/ComConfig/CmbbBrkDis_B_Actl_eaa4779aInitValue, /ActiveEcuC/Com/ComConfig/CmbbBrkDis_B_Actl_eaa4779aRxDataTimeoutSubstitutionValue, /ActiveEcuC/Com/ComConfig/CmbbDeny_B_ActlBrk_eaa4779aInitValue, /ActiveEcuC/Com/ComConfig/CmbbDeny_B_ActlBrk_eaa4779aRxDataTimeoutSubstitutionValue, /ActiveEcuC/Com/ComConfig/CmbbObjClass_D_Stat_dafea5bbInitValue, /ActiveEcuC/Com/ComConfig/CmbbObjClass_D_Stat_dafea5bbRxDataTimeoutSubstitutionValue, /ActiveEcuC/Com/ComConfig/CmbbObjConfdnc_D_Stat_dafea5bbInitValue, /ActiveEcuC/Com/ComConfig/CmbbObjConfdnc_D_Stat_dafea5bbRxDataTimeoutSubstitutionValue, /ActiveEcuC/Com/ComConfig/DeliveryNumber_f2797042InitValue, /ActiveEcuC/Com/ComConfig/DeliveryNumber_f2797042RxDataTimeoutSubstitutionValue, /ActiveEcuC/Com/ComConfig/DrvSte_D_Stat_bfc9faa4InitValue, /ActiveEcuC/Com/ComConfig/DrvSte_D_Stat_bfc9faa4RxDataTimeoutSubstitutionValue, /ActiveEcuC/Com/ComConfig/EPASExtAngleStatReq_ef286bfcInitValue, /ActiveEcuC/Com/ComConfig/EPASExtAngleStatReq_ef286bfcRxDataTimeoutSubstitutionValue, /ActiveEcuC/Com/ComConfig/ElPw_D_StatStrtStop_e6deed9eInitValue, /ActiveEcuC/Com/ComConfig/ElPw_D_StatStrtStop_e6deed9eRxDataTimeoutSubstitutionValue, /ActiveEcuC/Com/ComConfig/ElPw_D_Stat_e6deed9eInitValue, /ActiveEcuC/Com/ComConfig/ElPw_D_Stat_e6deed9eRxDataTimeoutSubstitutionValue, /ActiveEcuC/Com/ComConfig/EsaEnbl_D2_Rq_dafea5bbInitValue, /ActiveEcuC/Com/ComConfig/EsaEnbl_D2_Rq_dafea5bbRxDataTimeoutSubstitutionValue, /ActiveEcuC/Com/ComConfig/HandsOffCnfm_B_Rq_5abef978InitValue, /ActiveEcuC/Com/ComConfig/HandsOffCnfm_B_Rq_5abef978RxDataTimeoutSubstitutionValue, /ActiveEcuC/Com/ComConfig/Ignition_Status_3c341b34InitValue, /ActiveEcuC/Com/ComConfig/Ignition_Status_3c341b34RxDataTimeoutSubstitutionValue, /ActiveEcuC/Com/ComConfig/LaRampType_B_Req_d64ac390InitValue, /ActiveEcuC/Com/ComConfig/LaRampType_B_Req_d64ac390RxDataTimeoutSubstitutionValue, /ActiveEcuC/Com/ComConfig/LatCtlPrecision_D_Rq_5abef978InitValue, /ActiveEcuC/Com/ComConfig/LatCtlPrecision_D_Rq_5abef978RxDataTimeoutSubstitutionValue, /ActiveEcuC/Com/ComConfig/LatCtlRampType_D_Rq_5abef978InitValue, /ActiveEcuC/Com/ComConfig/LatCtlRampType_D_Rq_5abef978RxDataTimeoutSubstitutionValue, /ActiveEcuC/Com/ComConfig/LatCtlRng_L_Max_5abef978InitValue, /ActiveEcuC/Com/ComConfig/LatCtlRng_L_Max_5abef978RxDataTimeoutSubstitutionValue, /ActiveEcuC/Com/ComConfig/LatCtl_D_Rq_5abef978InitValue, /ActiveEcuC/Com/ComConfig/LatCtl_D_Rq_5abef978RxDataTimeoutSubstitutionValue, /ActiveEcuC/Com/ComConfig/LdwActvIntns_D_Req_d64ac390InitValue, /ActiveEcuC/Com/ComConfig/LdwActvIntns_D_Req_d64ac390RxDataTimeoutSubstitutionValue, /ActiveEcuC/Com/ComConfig/LdwActvStats_D_Req_d64ac390InitValue, /ActiveEcuC/Com/ComConfig/LdwActvStats_D_Req_d64ac390RxDataTimeoutSubstitutionValue, /ActiveEcuC/Com/ComConfig/LifeCycMde_D_Actl_3c341b34InitValue, /ActiveEcuC/Com/ComConfig/LifeCycMde_D_Actl_3c341b34RxDataTimeoutSubstitutionValue, /ActiveEcuC/Com/ComConfig/LkaActvStats_D2_Req_d64ac390InitValue, /ActiveEcuC/Com/ComConfig/LkaActvStats_D2_Req_d64ac390RxDataTimeoutSubstitutionValue, /ActiveEcuC/Com/ComConfig/LkaDrvOvrrd_D_Rq_d64ac390InitValue, /ActiveEcuC/Com/ComConfig/LkaDrvOvrrd_D_Rq_d64ac390RxDataTimeoutSubstitutionValue, /ActiveEcuC/Com/ComConfig/LsmcBrkDecel_D_Stat_9f750b9fInitValue, /ActiveEcuC/Com/ComConfig/LsmcBrkDecel_D_Stat_9f750b9fRxDataTimeoutSubstitutionValue, /ActiveEcuC/Com/ComConfig/PwPckTq_D_Stat_e6deed9eInitValue, /ActiveEcuC/Com/ComConfig/PwPckTq_D_Stat_e6deed9eRxDataTimeoutSubstitutionValue, /ActiveEcuC/Com/ComConfig/SelDrvMdeChassis2_D_Rq_e000acaeInitValue, /ActiveEcuC/Com/ComConfig/SelDrvMdeChassis2_D_Rq_e000acaeRxDataTimeoutSubstitutionValue, /ActiveEcuC/Com/ComConfig/StabCtlBrkActv_B_Actl_eaa4779aInitValue, /ActiveEcuC/Com/ComConfig/StabCtlBrkActv_B_Actl_eaa4779aRxDataTimeoutSubstitutionValue, /ActiveEcuC/Com/ComConfig/StePinOffst_D_Stat_c3a8df7fInitValue, /ActiveEcuC/Com/ComConfig/StePinOffst_D_Stat_c3a8df7fRxDataTimeoutSubstitutionValue, /ActiveEcuC/Com/ComConfig/StePinOffst_No_Cnt_c3a8df7fInitValue, /ActiveEcuC/Com/ComConfig/StePinOffst_No_Cnt_c3a8df7fRxDataTimeoutSubstitutionValue, /ActiveEcuC/Com/ComConfig/StePinOffst_No_Cs_c3a8df7fInitValue, /ActiveEcuC/Com/ComConfig/StePinOffst_No_Cs_c3a8df7fRxDataTimeoutSubstitutionValue, /ActiveEcuC/Com/ComConfig/TrlrAidCancl_B_Rq_630ef174InitValue, /ActiveEcuC/Com/ComConfig/TrlrAidCancl_B_Rq_630ef174RxDataTimeoutSubstitutionValue, /ActiveEcuC/Com/ComConfig/TrlrAidEnbl_D2_Rq_cc1bcd0fInitValue, /ActiveEcuC/Com/ComConfig/TrlrAidEnbl_D2_Rq_cc1bcd0fRxDataTimeoutSubstitutionValue, /ActiveEcuC/Com/ComConfig/TrlrAidMde_D_Rq_a35cbfabInitValue, /ActiveEcuC/Com/ComConfig/TrlrAidMde_D_Rq_a35cbfabRxDataTimeoutSubstitutionValue, /ActiveEcuC/Com/ComConfig/TrlrAidSetup_D2_Rq_cc1bcd0fInitValue, /ActiveEcuC/Com/ComConfig/TrlrAidSetup_D2_Rq_cc1bcd0fRxDataTimeoutSubstitutionValue, /ActiveEcuC/Com/ComConfig/TrlrAidSwtch_D_RqDrv_372f28feInitValue, /ActiveEcuC/Com/ComConfig/TrlrAidSwtch_D_RqDrv_372f28feRxDataTimeoutSubstitutionValue, /ActiveEcuC/Com/ComConfig/TrlrAidTrgtId_No_Actl_0bf22cceInitValue, /ActiveEcuC/Com/ComConfig/TrlrAidTrgtId_No_Actl_0bf22cceRxDataTimeoutSubstitutionValue, /ActiveEcuC/Com/ComConfig/TrlrAid_D2_Stat_0bf22cceInitValue, /ActiveEcuC/Com/ComConfig/TrlrAid_D2_Stat_0bf22cceRxDataTimeoutSubstitutionValue, /ActiveEcuC/Com/ComConfig/TrlrAnOffstDir_D_Mem_0edbb78eInitValue, /ActiveEcuC/Com/ComConfig/TrlrAnOffstDir_D_Mem_0edbb78eRxDataTimeoutSubstitutionValue, /ActiveEcuC/Com/ComConfig/TrlrBrkActCnnct_B_Actl_e983cb78InitValue, /ActiveEcuC/Com/ComConfig/TrlrBrkActCnnct_B_Actl_e983cb78RxDataTimeoutSubstitutionValue, /ActiveEcuC/Com/ComConfig/TrlrHitchYaw_D_Stat_96fdcdb8InitValue, /ActiveEcuC/Com/ComConfig/TrlrHitchYaw_D_Stat_96fdcdb8RxDataTimeoutSubstitutionValue, /ActiveEcuC/Com/ComConfig/TrlrIdType_D_Stat_0edbb78eInitValue, /ActiveEcuC/Com/ComConfig/TrlrIdType_D_Stat_0edbb78eRxDataTimeoutSubstitutionValue, /ActiveEcuC/Com/ComConfig/TrlrId_No_Actl_0edbb78eInitValue, /ActiveEcuC/Com/ComConfig/TrlrId_No_Actl_0edbb78eRxDataTimeoutSubstitutionValue, /ActiveEcuC/Com/ComConfig/TrlrLampCnnct_B_Actl_6acffff2InitValue, /ActiveEcuC/Com/ComConfig/TrlrLampCnnct_B_Actl_6acffff2RxDataTimeoutSubstitutionValue, /ActiveEcuC/Com/ComConfig/TrlrRvrseCancl_B_Rq_0edbb78eInitValue, /ActiveEcuC/Com/ComConfig/TrlrRvrseCancl_B_Rq_0edbb78eRxDataTimeoutSubstitutionValue, /ActiveEcuC/Com/ComConfig/TrlrRvrseEnbl_D2_Stat_ae9dea9dInitValue, /ActiveEcuC/Com/ComConfig/TrlrRvrseEnbl_D2_Stat_ae9dea9dRxDataTimeoutSubstitutionValue, /ActiveEcuC/Com/ComConfig/TrlrRvrseMsgTxt_D2_Rq_ae9dea9dInitValue, /ActiveEcuC/Com/ComConfig/TrlrRvrseMsgTxt_D2_Rq_ae9dea9dRxDataTimeoutSubstitutionValue, /ActiveEcuC/Com/ComConfig/TrlrRvrse_D_Stat_0bf22cceInitValue, 
             /ActiveEcuC/Com/ComConfig/TrlrRvrse_D_Stat_0bf22cceRxDataTimeoutSubstitutionValue, /ActiveEcuC/Com/ComConfig/TrlrTrgtAcquire_D_Stat_0bf22cceInitValue, /ActiveEcuC/Com/ComConfig/TrlrTrgtAcquire_D_Stat_0bf22cceRxDataTimeoutSubstitutionValue, /ActiveEcuC/Com/ComConfig/TurnLghtSwtch_D_Stat_7262feadInitValue, /ActiveEcuC/Com/ComConfig/TurnLghtSwtch_D_Stat_7262feadRxDataTimeoutSubstitutionValue, /ActiveEcuC/Com/ComConfig/VehVActlBrk_D_Qf_9f750b9fInitValue, /ActiveEcuC/Com/ComConfig/VehVActlBrk_D_Qf_9f750b9fRxDataTimeoutSubstitutionValue, /ActiveEcuC/Com/ComConfig/VehVActlBrk_No_Cnt_9f750b9fInitValue, /ActiveEcuC/Com/ComConfig/VehVActlBrk_No_Cnt_9f750b9fRxDataTimeoutSubstitutionValue, /ActiveEcuC/Com/ComConfig/VehVActlBrk_No_Cs_9f750b9fInitValue, /ActiveEcuC/Com/ComConfig/VehVActlBrk_No_Cs_9f750b9fRxDataTimeoutSubstitutionValue, /ActiveEcuC/Com/ComConfig/VehVActlEng_D_Qf_2508f61fInitValue, /ActiveEcuC/Com/ComConfig/VehVActlEng_D_Qf_2508f61fRxDataTimeoutSubstitutionValue, /ActiveEcuC/Com/ComConfig/VehVActlEng_No_Cnt_2508f61fInitValue, /ActiveEcuC/Com/ComConfig/VehVActlEng_No_Cnt_2508f61fRxDataTimeoutSubstitutionValue, /ActiveEcuC/Com/ComConfig/VehVActlEng_No_Cs_2508f61fInitValue, /ActiveEcuC/Com/ComConfig/VehVActlEng_No_Cs_2508f61fRxDataTimeoutSubstitutionValue, /ActiveEcuC/Com/ComConfig/VehVTrlrAid_B_Avail_2508f61fInitValue, /ActiveEcuC/Com/ComConfig/VehVTrlrAid_B_Avail_2508f61fRxDataTimeoutSubstitutionValue, /ActiveEcuC/Com/ComConfig/WhlDirFl_D_Actl_91fa0768InitValue, /ActiveEcuC/Com/ComConfig/WhlDirFl_D_Actl_91fa0768RxDataTimeoutSubstitutionValue, /ActiveEcuC/Com/ComConfig/WhlDirFr_D_Actl_91fa0768InitValue, /ActiveEcuC/Com/ComConfig/WhlDirFr_D_Actl_91fa0768RxDataTimeoutSubstitutionValue, /ActiveEcuC/Com/ComConfig/WhlDirRl_D_Actl_91fa0768InitValue, /ActiveEcuC/Com/ComConfig/WhlDirRl_D_Actl_91fa0768RxDataTimeoutSubstitutionValue, /ActiveEcuC/Com/ComConfig/WhlDirRr_D_Actl_91fa0768InitValue, /ActiveEcuC/Com/ComConfig/WhlDirRr_D_Actl_91fa0768RxDataTimeoutSubstitutionValue, /ActiveEcuC/Com/ComConfig/WhlRotatFl_No_Cnt_91fa0768InitValue, /ActiveEcuC/Com/ComConfig/WhlRotatFl_No_Cnt_91fa0768RxDataTimeoutSubstitutionValue, /ActiveEcuC/Com/ComConfig/WhlRotatFr_No_Cnt_91fa0768InitValue, /ActiveEcuC/Com/ComConfig/WhlRotatFr_No_Cnt_91fa0768RxDataTimeoutSubstitutionValue, /ActiveEcuC/Com/ComConfig/WhlRotatRl_No_Cnt_91fa0768InitValue, /ActiveEcuC/Com/ComConfig/WhlRotatRl_No_Cnt_91fa0768RxDataTimeoutSubstitutionValue, /ActiveEcuC/Com/ComConfig/WhlRotatRr_No_Cnt_91fa0768InitValue, /ActiveEcuC/Com/ComConfig/WhlRotatRr_No_Cnt_91fa0768RxDataTimeoutSubstitutionValue] */
};
#define COM_STOP_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Com_PduGrpVector
**********************************************************************************************************************/
/** 
  \var    Com_PduGrpVector
  \brief  Contains an I-PDU-Group vector for each I-PDU, mapping the I-PDU to the corresponding I-PDU-Groups.
*/ 
#define COM_START_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(Com_PduGrpVectorType, COM_CONST) Com_PduGrpVector[2] = {
  /* Index    PduGrpVector      Referable Keys */
  /*     0 */        0x02U,  /* [/ActiveEcuC/Com/ComConfig/EPAS_INFO_FD1_oFD1_CAN_3abd61be, /ActiveEcuC/Com/ComConfig/Lane_Assist_Data3_FD1_oFD1_CAN_3abd61be, /ActiveEcuC/Com/ComConfig/SteeringPinion_Data_FD1_oFD1_CAN_3abd61be, /ActiveEcuC/Com/ComConfig/TrailerAid_Data2_FD1_oFD1_CAN_3abd61be] */
  /*     1 */        0x01U   /* [/ActiveEcuC/Com/ComConfig/ABS_BrkBst_Data_FD1_oFD1_CAN_3abd61be, /ActiveEcuC/Com/ComConfig/APIM_Send_Signals1_FD1_oFD1_CAN_3abd61be, /ActiveEcuC/Com/ComConfig/APIM_Send_Signals_2_FD1_oFD1_CAN_3abd61be, /ActiveEcuC/Com/ComConfig/ActiveFrontStrg_Stat2_FD1_oFD1_CAN_3abd61be, /ActiveEcuC/Com/ComConfig/BodyInfo_3_FD1_oFD1_CAN_3abd61be, /ActiveEcuC/Com/ComConfig/Body_Info_4_FD1_oFD1_CAN_3abd61be, /ActiveEcuC/Com/ComConfig/BrakeSnData_3_FD1_oFD1_CAN_3abd61be, /ActiveEcuC/Com/ComConfig/BrakeSnData_4_FD1_oFD1_CAN_3abd61be, /ActiveEcuC/Com/ComConfig/BrakeSnData_5_FD1_oFD1_CAN_3abd61be, /ActiveEcuC/Com/ComConfig/BrakeSnData_6_FD1_oFD1_CAN_3abd61be, /ActiveEcuC/Com/ComConfig/BrakeSysFeatures_3_oFD1_CAN_3abd61be, /ActiveEcuC/Com/ComConfig/BrakeSysFeatures_FD1_oFD1_CAN_3abd61be, /ActiveEcuC/Com/ComConfig/Climate_Control_Data_FD1_oFD1_CAN_3abd61be, /ActiveEcuC/Com/ComConfig/Cluster_Info1_FD1_oFD1_CAN_3abd61be, /ActiveEcuC/Com/ComConfig/DeliveryVersion_oFD1_CAN_3abd61be, /ActiveEcuC/Com/ComConfig/DesiredTorqBrk_FD1_oFD1_CAN_3abd61be, /ActiveEcuC/Com/ComConfig/EngBrakeData_FD1_oFD1_CAN_3abd61be, /ActiveEcuC/Com/ComConfig/EngVehicleSpThrottle2_FD1_oFD1_CAN_3abd61be, /ActiveEcuC/Com/ComConfig/EngVehicleSpThrottle_FD1_oFD1_CAN_3abd61be, /ActiveEcuC/Com/ComConfig/FileVersion_oFD1_CAN_3abd61be, /ActiveEcuC/Com/ComConfig/GGCC_Config_Mgmt_ID_1_FD1_oFD1_CAN_3abd61be, /ActiveEcuC/Com/ComConfig/Image_Processing_Data_FD1_oFD1_CAN_3abd61be, /ActiveEcuC/Com/ComConfig/Lane_Assist_Data1_FD1_oFD1_CAN_3abd61be, /ActiveEcuC/Com/ComConfig/LateralMotionControl_FD1_oFD1_CAN_3abd61be, /ActiveEcuC/Com/ComConfig/Mc_Send_Signals_2_FD1_oFD1_CAN_3abd61be, /ActiveEcuC/Com/ComConfig/ParkAid_Data_FD1_oFD1_CAN_3abd61be, /ActiveEcuC/Com/ComConfig/PowertrainData_10_FD1_oFD1_CAN_3abd61be, /ActiveEcuC/Com/ComConfig/Steer_Assist_Data_FD1_oFD1_CAN_3abd61be, /ActiveEcuC/Com/ComConfig/Steering_Data_FD1_oFD1_CAN_3abd61be, /ActiveEcuC/Com/ComConfig/TrailerAid_Data3_FD1_oFD1_CAN_3abd61be, /ActiveEcuC/Com/ComConfig/TrailerAid_Data_FD1_oFD1_CAN_3abd61be, /ActiveEcuC/Com/ComConfig/TrailerAid_Stat1_FD1_oFD1_CAN_3abd61be, /ActiveEcuC/Com/ComConfig/TrailerAid_Stat2_FD1_oFD1_CAN_3abd61be, /ActiveEcuC/Com/ComConfig/TrailerAid_Stat3_FD1_oFD1_CAN_3abd61be, /ActiveEcuC/Com/ComConfig/TrailerBrakeInfo_FD1_oFD1_CAN_3abd61be, /ActiveEcuC/Com/ComConfig/TrailerInfo_2_FD1_oFD1_CAN_3abd61be, /ActiveEcuC/Com/ComConfig/TrailerInfo_FD1_oFD1_CAN_3abd61be, /ActiveEcuC/Com/ComConfig/TransGearData_FD1_oFD1_CAN_3abd61be, /ActiveEcuC/Com/ComConfig/VehicleOperatingModes_FD1_oFD1_CAN_3abd61be, /ActiveEcuC/Com/ComConfig/WheelData_FD1_oFD1_CAN_3abd61be, /ActiveEcuC/Com/ComConfig/WheelSpeed_FD1_oFD1_CAN_3abd61be, /ActiveEcuC/Com/ComConfig/Yaw_Data_FD1_oFD1_CAN_3abd61be] */
};
#define COM_STOP_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Com_RxAccessInfo
**********************************************************************************************************************/
/** 
  \var    Com_RxAccessInfo
  \brief  Contains all signal layout information necessary for signal access within an I-PDU.
  \details
  Element                                  Description
  InitValueUsed                            TRUE, if the 0:1 relation has minimum 1 relation pointing to Com_ConstValueUInt8,Com_ConstValueUInt16,Com_ConstValueUInt32,Com_ConstValueUInt64,Com_ConstValueSInt8,Com_ConstValueSInt16,Com_ConstValueSInt32,Com_ConstValueSInt64
  RxSigBufferArrayBasedBufferUsed          TRUE, if the 0:n relation has 1 relation pointing to Com_RxSigBufferArrayBased
  ApplType                                 Application data type.
  BitLength                                Bit length of the signal or group signal.
  BitPosition                              Little endian bit position of the signal or group signal within the I-PDU.
  BufferIdx                                the index of the 0:1 relation pointing to Com_RxSigBufferUInt8,Com_RxSigBufferUInt16,Com_RxSigBufferUInt32,Com_RxSigBufferUInt64,Com_RxSigBufferSInt8,Com_RxSigBufferSInt16,Com_RxSigBufferSInt32,Com_RxSigBufferSInt64
  BusAcc                                   BUS access algorithm for signal or group signal packing / un-packing.
  ByteLength                               Byte length of the signal or group signal.
  BytePosition                             Little endian byte position of the signal or group signal within the I-PDU.
  ConstValueArrayBasedInitValueEndIdx      the end index of the 0:n relation pointing to Com_ConstValueArrayBased
  ConstValueArrayBasedInitValueStartIdx    the start index of the 0:n relation pointing to Com_ConstValueArrayBased
  RxDataTimeoutSubstitutionValueIdx        the index of the 0:1 relation pointing to Com_ConstValueUInt8,Com_ConstValueUInt16,Com_ConstValueUInt32,Com_ConstValueUInt64,Com_ConstValueSInt8,Com_ConstValueSInt16,Com_ConstValueSInt32,Com_ConstValueSInt64
  RxPduInfoIdx                             the index of the 1:1 relation pointing to Com_RxPduInfo
  RxSigBufferArrayBasedBufferEndIdx        the end index of the 0:n relation pointing to Com_RxSigBufferArrayBased
  RxSigBufferArrayBasedBufferStartIdx      the start index of the 0:n relation pointing to Com_RxSigBufferArrayBased
  RxTOutInfoIdx                            the index of the 0:1 relation pointing to Com_RxTOutInfo
  StartByteInPduPosition                   Start Byte position of the signal or group signal within the I-PDU.
*/ 
#define COM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(Com_RxAccessInfoType, COM_CONST) Com_RxAccessInfo[126] = {
    /* Index    InitValueUsed  RxSigBufferArrayBasedBufferUsed  ApplType                            BitLength  BitPosition  BufferIdx                       BusAcc                                 ByteLength  BytePosition  ConstValueArrayBasedInitValueEndIdx                       ConstValueArrayBasedInitValueStartIdx                       RxDataTimeoutSubstitutionValueIdx                       RxPduInfoIdx  RxSigBufferArrayBasedBufferEndIdx                       RxSigBufferArrayBasedBufferStartIdx                       RxTOutInfoIdx                       StartByteInPduPosition        Referable Keys */
  { /*     0 */          TRUE,                           FALSE,   COM_UINT8_APPLTYPEOFRXACCESSINFO,        1U,         45U,                             0U,         COM_NBIT_BUSACCOFRXACCESSINFO,         0U,           5U, COM_NO_CONSTVALUEARRAYBASEDINITVALUEENDIDXOFRXACCESSINFO, COM_NO_CONSTVALUEARRAYBASEDINITVALUESTARTIDXOFRXACCESSINFO,                                                    12U,          15U, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO, COM_NO_RXTOUTINFOIDXOFRXACCESSINFO,                     5U },  /* [/ActiveEcuC/Com/ComConfig/AbsActv_B_Actl_eaa4779a, /ActiveEcuC/Com/ComConfig/DesiredTorqBrk_FD1_oFD1_CAN_3abd61be] */
  { /*     1 */          TRUE,                           FALSE,   COM_UINT8_APPLTYPEOFRXACCESSINFO,        3U,         59U,                             1U,         COM_NBIT_BUSACCOFRXACCESSINFO,         0U,           7U, COM_NO_CONSTVALUEARRAYBASEDINITVALUEENDIDXOFRXACCESSINFO, COM_NO_CONSTVALUEARRAYBASEDINITVALUESTARTIDXOFRXACCESSINFO,                                                    12U,          25U, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO, COM_NO_RXTOUTINFOIDXOFRXACCESSINFO,                     7U },  /* [/ActiveEcuC/Com/ComConfig/ApaSys_D_Stat_ef286bfc, /ActiveEcuC/Com/ComConfig/ParkAid_Data_FD1_oFD1_CAN_3abd61be] */
  { /*     2 */          TRUE,                           FALSE,   COM_UINT8_APPLTYPEOFRXACCESSINFO,        2U,          6U,                             2U,         COM_NBIT_BUSACCOFRXACCESSINFO,         0U,           0U, COM_NO_CONSTVALUEARRAYBASEDINITVALUEENDIDXOFRXACCESSINFO, COM_NO_CONSTVALUEARRAYBASEDINITVALUESTARTIDXOFRXACCESSINFO,                                                    11U,          18U, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO, COM_NO_RXTOUTINFOIDXOFRXACCESSINFO,                     0U },  /* [/ActiveEcuC/Com/ComConfig/ApedPosPcActl_D_Qf_a3d34b0d, /ActiveEcuC/Com/ComConfig/EngVehicleSpThrottle_FD1_oFD1_CAN_3abd61be] */
  { /*     3 */          TRUE,                           FALSE,  COM_UINT16_APPLTYPEOFRXACCESSINFO,       10U,          8U,                             0U, COM_NBITNBYTE_SW_BUSACCOFRXACCESSINFO,         1U,           1U, COM_NO_CONSTVALUEARRAYBASEDINITVALUEENDIDXOFRXACCESSINFO, COM_NO_CONSTVALUEARRAYBASEDINITVALUESTARTIDXOFRXACCESSINFO,                                                    11U,          18U, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO, COM_NO_RXTOUTINFOIDXOFRXACCESSINFO,                     0U },  /* [/ActiveEcuC/Com/ComConfig/ApedPos_Pc_ActlArb_a3d34b0d, /ActiveEcuC/Com/ComConfig/EngVehicleSpThrottle_FD1_oFD1_CAN_3abd61be] */
  { /*     4 */          TRUE,                           FALSE,   COM_UINT8_APPLTYPEOFRXACCESSINFO,        2U,         14U,                             3U,         COM_NBIT_BUSACCOFRXACCESSINFO,         0U,           1U, COM_NO_CONSTVALUEARRAYBASEDINITVALUEENDIDXOFRXACCESSINFO, COM_NO_CONSTVALUEARRAYBASEDINITVALUESTARTIDXOFRXACCESSINFO,                                                    11U,          16U, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO, COM_NO_RXTOUTINFOIDXOFRXACCESSINFO,                     1U },  /* [/ActiveEcuC/Com/ComConfig/BPedDrvAppl_D_QF_aea354aa, /ActiveEcuC/Com/ComConfig/EngBrakeData_FD1_oFD1_CAN_3abd61be] */
  { /*     5 */          TRUE,                           FALSE,   COM_UINT8_APPLTYPEOFRXACCESSINFO,        8U,         32U,                             4U,         COM_BYTE_BUSACCOFRXACCESSINFO,         1U,           4U, COM_NO_CONSTVALUEARRAYBASEDINITVALUEENDIDXOFRXACCESSINFO, COM_NO_CONSTVALUEARRAYBASEDINITVALUESTARTIDXOFRXACCESSINFO,                                                    10U,           5U, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO, COM_NO_RXTOUTINFOIDXOFRXACCESSINFO,                     4U },  /* [/ActiveEcuC/Com/ComConfig/BattULo_U_Actl_0a3b9a6b, /ActiveEcuC/Com/ComConfig/Body_Info_4_FD1_oFD1_CAN_3abd61be] */
  { /*     6 */          TRUE,                           FALSE,   COM_UINT8_APPLTYPEOFRXACCESSINFO,        2U,          4U,                             5U,         COM_NBIT_BUSACCOFRXACCESSINFO,         0U,           0U, COM_NO_CONSTVALUEARRAYBASEDINITVALUEENDIDXOFRXACCESSINFO, COM_NO_CONSTVALUEARRAYBASEDINITVALUESTARTIDXOFRXACCESSINFO,                                                    11U,          16U, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO, COM_NO_RXTOUTINFOIDXOFRXACCESSINFO,                     0U },  /* [/ActiveEcuC/Com/ComConfig/BpedDrvAppl_D_Actl_aea354aa, /ActiveEcuC/Com/ComConfig/EngBrakeData_FD1_oFD1_CAN_3abd61be] */
  { /*     7 */          TRUE,                           FALSE,  COM_UINT16_APPLTYPEOFRXACCESSINFO,       13U,         47U,                             1U, COM_NBITNBYTE_SW_BUSACCOFRXACCESSINFO,         1U,           5U, COM_NO_CONSTVALUEARRAYBASEDINITVALUEENDIDXOFRXACCESSINFO, COM_NO_CONSTVALUEARRAYBASEDINITVALUESTARTIDXOFRXACCESSINFO,                                                    11U,           7U, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO,                                 4U,                     3U },  /* [/ActiveEcuC/Com/ComConfig/BrkTot_Tq_Actl_22c61bd2, /ActiveEcuC/Com/ComConfig/BrakeSnData_4_FD1_oFD1_CAN_3abd61be] */
  { /*     8 */          TRUE,                           FALSE,   COM_UINT8_APPLTYPEOFRXACCESSINFO,        1U,         56U,                             6U,         COM_NBIT_BUSACCOFRXACCESSINFO,         0U,           7U, COM_NO_CONSTVALUEARRAYBASEDINITVALUEENDIDXOFRXACCESSINFO, COM_NO_CONSTVALUEARRAYBASEDINITVALUESTARTIDXOFRXACCESSINFO,                                                    12U,          15U, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO, COM_NO_RXTOUTINFOIDXOFRXACCESSINFO,                     7U },  /* [/ActiveEcuC/Com/ComConfig/CmbbBrkDis_B_Actl_eaa4779a, /ActiveEcuC/Com/ComConfig/DesiredTorqBrk_FD1_oFD1_CAN_3abd61be] */
  { /*     9 */          TRUE,                           FALSE,   COM_UINT8_APPLTYPEOFRXACCESSINFO,        1U,         60U,                             7U,         COM_NBIT_BUSACCOFRXACCESSINFO,         0U,           7U, COM_NO_CONSTVALUEARRAYBASEDINITVALUEENDIDXOFRXACCESSINFO, COM_NO_CONSTVALUEARRAYBASEDINITVALUESTARTIDXOFRXACCESSINFO,                                                    12U,          15U, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO,                                10U,                     7U },  /* [/ActiveEcuC/Com/ComConfig/CmbbDeny_B_ActlBrk_eaa4779a, /ActiveEcuC/Com/ComConfig/DesiredTorqBrk_FD1_oFD1_CAN_3abd61be] */
  { /*    10 */          TRUE,                           FALSE,   COM_UINT8_APPLTYPEOFRXACCESSINFO,        4U,         10U,                             8U,         COM_NBIT_BUSACCOFRXACCESSINFO,         0U,           1U, COM_NO_CONSTVALUEARRAYBASEDINITVALUEENDIDXOFRXACCESSINFO, COM_NO_CONSTVALUEARRAYBASEDINITVALUESTARTIDXOFRXACCESSINFO,                                                    12U,          27U, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO, COM_NO_RXTOUTINFOIDXOFRXACCESSINFO,                     1U },  /* [/ActiveEcuC/Com/ComConfig/CmbbObjClass_D_Stat_dafea5bb, /ActiveEcuC/Com/ComConfig/Steer_Assist_Data_FD1_oFD1_CAN_3abd61be] */
  { /*    11 */          TRUE,                           FALSE,   COM_UINT8_APPLTYPEOFRXACCESSINFO,        7U,         24U,                             9U,         COM_NBIT_BUSACCOFRXACCESSINFO,         0U,           3U, COM_NO_CONSTVALUEARRAYBASEDINITVALUEENDIDXOFRXACCESSINFO, COM_NO_CONSTVALUEARRAYBASEDINITVALUESTARTIDXOFRXACCESSINFO,                                                     9U,          27U, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO, COM_NO_RXTOUTINFOIDXOFRXACCESSINFO,                     3U },  /* [/ActiveEcuC/Com/ComConfig/CmbbObjColl_T_Actl_dafea5bb, /ActiveEcuC/Com/ComConfig/Steer_Assist_Data_FD1_oFD1_CAN_3abd61be] */
  { /*    12 */          TRUE,                           FALSE,   COM_UINT8_APPLTYPEOFRXACCESSINFO,        2U,          8U,                            10U,         COM_NBIT_BUSACCOFRXACCESSINFO,         0U,           1U, COM_NO_CONSTVALUEARRAYBASEDINITVALUEENDIDXOFRXACCESSINFO, COM_NO_CONSTVALUEARRAYBASEDINITVALUESTARTIDXOFRXACCESSINFO,                                                    12U,          27U, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO, COM_NO_RXTOUTINFOIDXOFRXACCESSINFO,                     1U },  /* [/ActiveEcuC/Com/ComConfig/CmbbObjConfdnc_D_Stat_dafea5bb, /ActiveEcuC/Com/ComConfig/Steer_Assist_Data_FD1_oFD1_CAN_3abd61be] */
  { /*    13 */          TRUE,                           FALSE,  COM_UINT16_APPLTYPEOFRXACCESSINFO,        9U,         53U,                             2U, COM_NBITNBYTE_SW_BUSACCOFRXACCESSINFO,         1U,           6U, COM_NO_CONSTVALUEARRAYBASEDINITVALUEENDIDXOFRXACCESSINFO, COM_NO_CONSTVALUEARRAYBASEDINITVALUESTARTIDXOFRXACCESSINFO,                                                    10U,          27U, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO, COM_NO_RXTOUTINFOIDXOFRXACCESSINFO,                     5U },  /* [/ActiveEcuC/Com/ComConfig/CmbbObjDistLat_L_Actl_dafea5bb, /ActiveEcuC/Com/ComConfig/Steer_Assist_Data_FD1_oFD1_CAN_3abd61be] */
  { /*    14 */          TRUE,                           FALSE,  COM_UINT16_APPLTYPEOFRXACCESSINFO,       10U,         14U,                             3U, COM_NBITNBYTE_SW_BUSACCOFRXACCESSINFO,         1U,           1U, COM_NO_CONSTVALUEARRAYBASEDINITVALUEENDIDXOFRXACCESSINFO, COM_NO_CONSTVALUEARRAYBASEDINITVALUESTARTIDXOFRXACCESSINFO,                                                     9U,          27U, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO, COM_NO_RXTOUTINFOIDXOFRXACCESSINFO,                     0U },  /* [/ActiveEcuC/Com/ComConfig/CmbbObjDistLong_L_Actl_dafea5bb, /ActiveEcuC/Com/ComConfig/Steer_Assist_Data_FD1_oFD1_CAN_3abd61be] */
  { /*    15 */          TRUE,                           FALSE,  COM_UINT16_APPLTYPEOFRXACCESSINFO,        9U,         31U,                             4U, COM_NBITNBYTE_SW_BUSACCOFRXACCESSINFO,         1U,           3U, COM_NO_CONSTVALUEARRAYBASEDINITVALUEENDIDXOFRXACCESSINFO, COM_NO_CONSTVALUEARRAYBASEDINITVALUESTARTIDXOFRXACCESSINFO,                                                    10U,          27U, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO, COM_NO_RXTOUTINFOIDXOFRXACCESSINFO,                     2U },  /* [/ActiveEcuC/Com/ComConfig/CmbbObjRelLat_V_Actl_dafea5bb, /ActiveEcuC/Com/ComConfig/Steer_Assist_Data_FD1_oFD1_CAN_3abd61be] */
  { /*    16 */          TRUE,                           FALSE,  COM_UINT16_APPLTYPEOFRXACCESSINFO,       10U,         46U,                             5U, COM_NBITNBYTE_SW_BUSACCOFRXACCESSINFO,         1U,           5U, COM_NO_CONSTVALUEARRAYBASEDINITVALUEENDIDXOFRXACCESSINFO, COM_NO_CONSTVALUEARRAYBASEDINITVALUESTARTIDXOFRXACCESSINFO,                                                     9U,          27U, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO, COM_NO_RXTOUTINFOIDXOFRXACCESSINFO,                     4U },  /* [/ActiveEcuC/Com/ComConfig/CmbbObjRelLong_V_Actl_dafea5bb, /ActiveEcuC/Com/ComConfig/Steer_Assist_Data_FD1_oFD1_CAN_3abd61be] */
  { /*    17 */          TRUE,                           FALSE,  COM_UINT16_APPLTYPEOFRXACCESSINFO,       16U,         64U,                             6U,        COM_NBYTE_BUSACCOFRXACCESSINFO,         2U,           8U, COM_NO_CONSTVALUEARRAYBASEDINITVALUEENDIDXOFRXACCESSINFO, COM_NO_CONSTVALUEARRAYBASEDINITVALUESTARTIDXOFRXACCESSINFO,                                                    11U,          14U, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO, COM_NO_RXTOUTINFOIDXOFRXACCESSINFO,                     8U },  /* [/ActiveEcuC/Com/ComConfig/DeliveryIdle_f2797042, /ActiveEcuC/Com/ComConfig/DeliveryVersion_oFD1_CAN_3abd61be] */
  { /*    18 */          TRUE,                           FALSE,   COM_UINT8_APPLTYPEOFRXACCESSINFO,        8U,         56U,                            11U,         COM_BYTE_BUSACCOFRXACCESSINFO,         1U,           7U, COM_NO_CONSTVALUEARRAYBASEDINITVALUEENDIDXOFRXACCESSINFO, COM_NO_CONSTVALUEARRAYBASEDINITVALUESTARTIDXOFRXACCESSINFO,                                                    12U,          14U, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO, COM_NO_RXTOUTINFOIDXOFRXACCESSINFO,                     7U },  /* [/ActiveEcuC/Com/ComConfig/DeliveryNumber_f2797042, /ActiveEcuC/Com/ComConfig/DeliveryVersion_oFD1_CAN_3abd61be] */
  { /*    19 */          TRUE,                           FALSE,  COM_UINT32_APPLTYPEOFRXACCESSINFO,       24U,          0U,                             0U,        COM_NBYTE_BUSACCOFRXACCESSINFO,         3U,           0U, COM_NO_CONSTVALUEARRAYBASEDINITVALUEENDIDXOFRXACCESSINFO, COM_NO_CONSTVALUEARRAYBASEDINITVALUESTARTIDXOFRXACCESSINFO,                                                     2U,          14U, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO, COM_NO_RXTOUTINFOIDXOFRXACCESSINFO,                     0U },  /* [/ActiveEcuC/Com/ComConfig/DeliverySipNumber_f2797042, /ActiveEcuC/Com/ComConfig/DeliveryVersion_oFD1_CAN_3abd61be] */
  { /*    20 */          TRUE,                           FALSE,  COM_UINT32_APPLTYPEOFRXACCESSINFO,       32U,         24U,                             1U,        COM_NBYTE_BUSACCOFRXACCESSINFO,         4U,           3U, COM_NO_CONSTVALUEARRAYBASEDINITVALUEENDIDXOFRXACCESSINFO, COM_NO_CONSTVALUEARRAYBASEDINITVALUESTARTIDXOFRXACCESSINFO,                                                     1U,          14U, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO, COM_NO_RXTOUTINFOIDXOFRXACCESSINFO,                     3U },  /* [/ActiveEcuC/Com/ComConfig/DeliverySubProjectNumber_f2797042, /ActiveEcuC/Com/ComConfig/DeliveryVersion_oFD1_CAN_3abd61be] */
  { /*    21 */          TRUE,                           FALSE,   COM_UINT8_APPLTYPEOFRXACCESSINFO,        4U,         16U,                            12U,         COM_NBIT_BUSACCOFRXACCESSINFO,         0U,           2U, COM_NO_CONSTVALUEARRAYBASEDINITVALUEENDIDXOFRXACCESSINFO, COM_NO_CONSTVALUEARRAYBASEDINITVALUESTARTIDXOFRXACCESSINFO,                                                    12U,           8U, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO, COM_NO_RXTOUTINFOIDXOFRXACCESSINFO,                     2U },  /* [/ActiveEcuC/Com/ComConfig/DrvSte_D_Stat_bfc9faa4, /ActiveEcuC/Com/ComConfig/BrakeSnData_5_FD1_oFD1_CAN_3abd61be] */
  { /*    22 */          TRUE,                           FALSE,   COM_UINT8_APPLTYPEOFRXACCESSINFO,        8U,         24U,                            13U,         COM_BYTE_BUSACCOFRXACCESSINFO,         1U,           3U, COM_NO_CONSTVALUEARRAYBASEDINITVALUEENDIDXOFRXACCESSINFO, COM_NO_CONSTVALUEARRAYBASEDINITVALUESTARTIDXOFRXACCESSINFO,                                                     8U,           8U, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO, COM_NO_RXTOUTINFOIDXOFRXACCESSINFO,                     3U },  /* [/ActiveEcuC/Com/ComConfig/DrvSte_Tq_Rq_bfc9faa4, /ActiveEcuC/Com/ComConfig/BrakeSnData_5_FD1_oFD1_CAN_3abd61be] */
  { /*    23 */          TRUE,                           FALSE,   COM_UINT8_APPLTYPEOFRXACCESSINFO,        1U,         23U,                            14U,         COM_NBIT_BUSACCOFRXACCESSINFO,         0U,           2U, COM_NO_CONSTVALUEARRAYBASEDINITVALUEENDIDXOFRXACCESSINFO, COM_NO_CONSTVALUEARRAYBASEDINITVALUESTARTIDXOFRXACCESSINFO,                                                    12U,          25U, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO, COM_NO_RXTOUTINFOIDXOFRXACCESSINFO,                     2U },  /* [/ActiveEcuC/Com/ComConfig/EPASExtAngleStatReq_ef286bfc, /ActiveEcuC/Com/ComConfig/ParkAid_Data_FD1_oFD1_CAN_3abd61be] */
  { /*    24 */          TRUE,                           FALSE,   COM_UINT8_APPLTYPEOFRXACCESSINFO,        4U,         28U,                            15U,         COM_NBIT_BUSACCOFRXACCESSINFO,         0U,           3U, COM_NO_CONSTVALUEARRAYBASEDINITVALUEENDIDXOFRXACCESSINFO, COM_NO_CONSTVALUEARRAYBASEDINITVALUESTARTIDXOFRXACCESSINFO,                                                    12U,          38U, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO, COM_NO_RXTOUTINFOIDXOFRXACCESSINFO,                     3U },  /* [/ActiveEcuC/Com/ComConfig/ElPw_D_StatStrtStop_e6deed9e, /ActiveEcuC/Com/ComConfig/VehicleOperatingModes_FD1_oFD1_CAN_3abd61be] */
  { /*    25 */          TRUE,                           FALSE,   COM_UINT8_APPLTYPEOFRXACCESSINFO,        3U,          1U,                            16U,         COM_NBIT_BUSACCOFRXACCESSINFO,         0U,           0U, COM_NO_CONSTVALUEARRAYBASEDINITVALUEENDIDXOFRXACCESSINFO, COM_NO_CONSTVALUEARRAYBASEDINITVALUESTARTIDXOFRXACCESSINFO,                                                    12U,          38U, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO, COM_NO_RXTOUTINFOIDXOFRXACCESSINFO,                     0U },  /* [/ActiveEcuC/Com/ComConfig/ElPw_D_Stat_e6deed9e, /ActiveEcuC/Com/ComConfig/VehicleOperatingModes_FD1_oFD1_CAN_3abd61be] */
  { /*    26 */          TRUE,                           FALSE,  COM_UINT16_APPLTYPEOFRXACCESSINFO,       13U,         32U,                             7U, COM_NBITNBYTE_SW_BUSACCOFRXACCESSINFO,         1U,           4U, COM_NO_CONSTVALUEARRAYBASEDINITVALUEENDIDXOFRXACCESSINFO, COM_NO_CONSTVALUEARRAYBASEDINITVALUESTARTIDXOFRXACCESSINFO,                                                    11U,          18U, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO, COM_NO_RXTOUTINFOIDXOFRXACCESSINFO,                     3U },  /* [/ActiveEcuC/Com/ComConfig/EngAout_N_Actl_a3d34b0d, /ActiveEcuC/Com/ComConfig/EngVehicleSpThrottle_FD1_oFD1_CAN_3abd61be] */
  { /*    27 */          TRUE,                           FALSE,   COM_UINT8_APPLTYPEOFRXACCESSINFO,        2U,         51U,                            17U,         COM_NBIT_BUSACCOFRXACCESSINFO,         0U,           6U, COM_NO_CONSTVALUEARRAYBASEDINITVALUEENDIDXOFRXACCESSINFO, COM_NO_CONSTVALUEARRAYBASEDINITVALUESTARTIDXOFRXACCESSINFO,                                                    12U,          27U, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO,                                16U,                     6U },  /* [/ActiveEcuC/Com/ComConfig/EsaEnbl_D2_Rq_dafea5bb, /ActiveEcuC/Com/ComConfig/Steer_Assist_Data_FD1_oFD1_CAN_3abd61be] */
  { /*    28 */          TRUE,                           FALSE,   COM_UINT8_APPLTYPEOFRXACCESSINFO,        1U,         15U,                            18U,         COM_NBIT_BUSACCOFRXACCESSINFO,         0U,           1U, COM_NO_CONSTVALUEARRAYBASEDINITVALUEENDIDXOFRXACCESSINFO, COM_NO_CONSTVALUEARRAYBASEDINITVALUESTARTIDXOFRXACCESSINFO,                                                    11U,          24U, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO,                                15U,                     1U },  /* [/ActiveEcuC/Com/ComConfig/EsaOn_B_Rq_bffaafb8, /ActiveEcuC/Com/ComConfig/Mc_Send_Signals_2_FD1_oFD1_CAN_3abd61be] */
  { /*    29 */          TRUE,                           FALSE,  COM_UINT16_APPLTYPEOFRXACCESSINFO,       15U,         24U,                             8U, COM_NBITNBYTE_SW_BUSACCOFRXACCESSINFO,         1U,           3U, COM_NO_CONSTVALUEARRAYBASEDINITVALUEENDIDXOFRXACCESSINFO, COM_NO_CONSTVALUEARRAYBASEDINITVALUESTARTIDXOFRXACCESSINFO,                                                    11U,          25U, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO, COM_NO_RXTOUTINFOIDXOFRXACCESSINFO,                     2U },  /* [/ActiveEcuC/Com/ComConfig/ExtSteeringAngleReq2_ef286bfc, /ActiveEcuC/Com/ComConfig/ParkAid_Data_FD1_oFD1_CAN_3abd61be] */
  { /*    30 */          TRUE,                           FALSE,   COM_UINT8_APPLTYPEOFRXACCESSINFO,        8U,         16U,                            19U,         COM_BYTE_BUSACCOFRXACCESSINFO,         1U,           2U, COM_NO_CONSTVALUEARRAYBASEDINITVALUEENDIDXOFRXACCESSINFO, COM_NO_CONSTVALUEARRAYBASEDINITVALUESTARTIDXOFRXACCESSINFO,                                                     7U,          19U, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO, COM_NO_RXTOUTINFOIDXOFRXACCESSINFO,                     2U },  /* [/ActiveEcuC/Com/ComConfig/FileVersionDay_216bb0c2, /ActiveEcuC/Com/ComConfig/FileVersion_oFD1_CAN_3abd61be] */
  { /*    31 */          TRUE,                           FALSE,   COM_UINT8_APPLTYPEOFRXACCESSINFO,        8U,          8U,                            20U,         COM_BYTE_BUSACCOFRXACCESSINFO,         1U,           1U, COM_NO_CONSTVALUEARRAYBASEDINITVALUEENDIDXOFRXACCESSINFO, COM_NO_CONSTVALUEARRAYBASEDINITVALUESTARTIDXOFRXACCESSINFO,                                                     6U,          19U, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO, COM_NO_RXTOUTINFOIDXOFRXACCESSINFO,                     1U },  /* [/ActiveEcuC/Com/ComConfig/FileVersionMonth_216bb0c2, /ActiveEcuC/Com/ComConfig/FileVersion_oFD1_CAN_3abd61be] */
  { /*    32 */          TRUE,                           FALSE,   COM_UINT8_APPLTYPEOFRXACCESSINFO,        8U,         24U,                            21U,         COM_BYTE_BUSACCOFRXACCESSINFO,         1U,           3U, COM_NO_CONSTVALUEARRAYBASEDINITVALUEENDIDXOFRXACCESSINFO, COM_NO_CONSTVALUEARRAYBASEDINITVALUESTARTIDXOFRXACCESSINFO,                                                     5U,          19U, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO, COM_NO_RXTOUTINFOIDXOFRXACCESSINFO,                     3U },  /* [/ActiveEcuC/Com/ComConfig/FileVersionNumber_216bb0c2, /ActiveEcuC/Com/ComConfig/FileVersion_oFD1_CAN_3abd61be] */
  { /*    33 */          TRUE,                           FALSE,   COM_UINT8_APPLTYPEOFRXACCESSINFO,        8U,          0U,                            22U,         COM_BYTE_BUSACCOFRXACCESSINFO,         1U,           0U, COM_NO_CONSTVALUEARRAYBASEDINITVALUEENDIDXOFRXACCESSINFO, COM_NO_CONSTVALUEARRAYBASEDINITVALUESTARTIDXOFRXACCESSINFO,                                                     4U,          19U, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO, COM_NO_RXTOUTINFOIDXOFRXACCESSINFO,                     0U },  /* [/ActiveEcuC/Com/ComConfig/FileVersionYear_216bb0c2, /ActiveEcuC/Com/ComConfig/FileVersion_oFD1_CAN_3abd61be] */
  { /*    34 */          TRUE,                           FALSE,   COM_UINT8_APPLTYPEOFRXACCESSINFO,        4U,          9U,                            23U,         COM_NBIT_BUSACCOFRXACCESSINFO,         0U,           1U, COM_NO_CONSTVALUEARRAYBASEDINITVALUEENDIDXOFRXACCESSINFO, COM_NO_CONSTVALUEARRAYBASEDINITVALUESTARTIDXOFRXACCESSINFO,                                                     3U,          37U, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO,                                21U,                     1U },  /* [/ActiveEcuC/Com/ComConfig/GearLvrPos_D_Actl_8c4ca771, /ActiveEcuC/Com/ComConfig/TransGearData_FD1_oFD1_CAN_3abd61be] */
  { /*    35 */          TRUE,                           FALSE,   COM_UINT8_APPLTYPEOFRXACCESSINFO,        4U,          0U,                            24U,         COM_NBIT_BUSACCOFRXACCESSINFO,         0U,           0U, COM_NO_CONSTVALUEARRAYBASEDINITVALUEENDIDXOFRXACCESSINFO, COM_NO_CONSTVALUEARRAYBASEDINITVALUESTARTIDXOFRXACCESSINFO,                                                     2U,          26U, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO, COM_NO_RXTOUTINFOIDXOFRXACCESSINFO,                     0U },  /* [/ActiveEcuC/Com/ComConfig/GearPos_D_Actl_1e331f99, /ActiveEcuC/Com/ComConfig/PowertrainData_10_FD1_oFD1_CAN_3abd61be] */
  { /*    36 */          TRUE,                           FALSE,   COM_UINT8_APPLTYPEOFRXACCESSINFO,        3U,          2U,                            25U,         COM_NBIT_BUSACCOFRXACCESSINFO,         0U,           0U, COM_NO_CONSTVALUEARRAYBASEDINITVALUEENDIDXOFRXACCESSINFO, COM_NO_CONSTVALUEARRAYBASEDINITVALUESTARTIDXOFRXACCESSINFO,                                                     1U,          17U, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO, COM_NO_RXTOUTINFOIDXOFRXACCESSINFO,                     0U },  /* [/ActiveEcuC/Com/ComConfig/GearRvrse_D_Actl_2508f61f, /ActiveEcuC/Com/ComConfig/EngVehicleSpThrottle2_FD1_oFD1_CAN_3abd61be] */
  { /*    37 */          TRUE,                           FALSE,   COM_UINT8_APPLTYPEOFRXACCESSINFO,        1U,         51U,                            26U,         COM_NBIT_BUSACCOFRXACCESSINFO,         0U,           6U, COM_NO_CONSTVALUEARRAYBASEDINITVALUEENDIDXOFRXACCESSINFO, COM_NO_CONSTVALUEARRAYBASEDINITVALUESTARTIDXOFRXACCESSINFO,                                                    12U,          23U, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO, COM_NO_RXTOUTINFOIDXOFRXACCESSINFO,                     6U },  /* [/ActiveEcuC/Com/ComConfig/HandsOffCnfm_B_Rq_5abef978, /ActiveEcuC/Com/ComConfig/LateralMotionControl_FD1_oFD1_CAN_3abd61be] */
  { /*    38 */          TRUE,                           FALSE,   COM_UINT8_APPLTYPEOFRXACCESSINFO,        8U,          0U,                            27U,         COM_BYTE_BUSACCOFRXACCESSINFO,         1U,           0U, COM_NO_CONSTVALUEARRAYBASEDINITVALUEENDIDXOFRXACCESSINFO, COM_NO_CONSTVALUEARRAYBASEDINITVALUESTARTIDXOFRXACCESSINFO,                                                    10U,          33U, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO,                                18U,                     0U },  /* [/ActiveEcuC/Com/ComConfig/HitchToVehAxle_L_Calc_0bf22cce, /ActiveEcuC/Com/ComConfig/TrailerAid_Stat3_FD1_oFD1_CAN_3abd61be] */
  { /*    39 */          TRUE,                           FALSE,   COM_UINT8_APPLTYPEOFRXACCESSINFO,        4U,          4U,                            28U,         COM_NBIT_BUSACCOFRXACCESSINFO,         0U,           0U, COM_NO_CONSTVALUEARRAYBASEDINITVALUEENDIDXOFRXACCESSINFO, COM_NO_CONSTVALUEARRAYBASEDINITVALUESTARTIDXOFRXACCESSINFO,                                                    12U,           4U, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO,                                 2U,                     0U },  /* [/ActiveEcuC/Com/ComConfig/Ignition_Status_3c341b34, /ActiveEcuC/Com/ComConfig/BodyInfo_3_FD1_oFD1_CAN_3abd61be] */
  { /*    40 */          TRUE,                           FALSE,  COM_UINT16_APPLTYPEOFRXACCESSINFO,       12U,         20U,                             9U, COM_NBITNBYTE_SW_BUSACCOFRXACCESSINFO,         1U,           2U, COM_NO_CONSTVALUEARRAYBASEDINITVALUEENDIDXOFRXACCESSINFO, COM_NO_CONSTVALUEARRAYBASEDINITVALUESTARTIDXOFRXACCESSINFO,                                                     8U,          22U, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO,                                13U,                     1U },  /* [/ActiveEcuC/Com/ComConfig/LaCurvature_No_Calc_d64ac390, /ActiveEcuC/Com/ComConfig/Lane_Assist_Data1_FD1_oFD1_CAN_3abd61be] */
  { /*    41 */          TRUE,                           FALSE,   COM_UINT8_APPLTYPEOFRXACCESSINFO,        1U,         39U,                            29U,         COM_NBIT_BUSACCOFRXACCESSINFO,         0U,           4U, COM_NO_CONSTVALUEARRAYBASEDINITVALUEENDIDXOFRXACCESSINFO, COM_NO_CONSTVALUEARRAYBASEDINITVALUESTARTIDXOFRXACCESSINFO,                                                    12U,          22U, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO, COM_NO_RXTOUTINFOIDXOFRXACCESSINFO,                     4U },  /* [/ActiveEcuC/Com/ComConfig/LaRampType_B_Req_d64ac390, /ActiveEcuC/Com/ComConfig/Lane_Assist_Data1_FD1_oFD1_CAN_3abd61be] */
  { /*    42 */          TRUE,                           FALSE,  COM_UINT16_APPLTYPEOFRXACCESSINFO,       12U,         24U,                            10U, COM_NBITNBYTE_SW_BUSACCOFRXACCESSINFO,         1U,           3U, COM_NO_CONSTVALUEARRAYBASEDINITVALUEENDIDXOFRXACCESSINFO, COM_NO_CONSTVALUEARRAYBASEDINITVALUESTARTIDXOFRXACCESSINFO,                                                     8U,          22U, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO, COM_NO_RXTOUTINFOIDXOFRXACCESSINFO,                     2U },  /* [/ActiveEcuC/Com/ComConfig/LaRefAng_No_Req_d64ac390, /ActiveEcuC/Com/ComConfig/Lane_Assist_Data1_FD1_oFD1_CAN_3abd61be] */
  { /*    43 */          TRUE,                           FALSE,  COM_UINT16_APPLTYPEOFRXACCESSINFO,       13U,         16U,                            11U, COM_NBITNBYTE_SW_BUSACCOFRXACCESSINFO,         1U,           2U, COM_NO_CONSTVALUEARRAYBASEDINITVALUEENDIDXOFRXACCESSINFO, COM_NO_CONSTVALUEARRAYBASEDINITVALUESTARTIDXOFRXACCESSINFO,                                                     7U,          23U, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO, COM_NO_RXTOUTINFOIDXOFRXACCESSINFO,                     1U },  /* [/ActiveEcuC/Com/ComConfig/LatCtlCurv_NoRate_Actl_5abef978, /ActiveEcuC/Com/ComConfig/LateralMotionControl_FD1_oFD1_CAN_3abd61be] */
  { /*    44 */          TRUE,                           FALSE,  COM_UINT16_APPLTYPEOFRXACCESSINFO,       11U,         13U,                            12U, COM_NBITNBYTE_SW_BUSACCOFRXACCESSINFO,         1U,           1U, COM_NO_CONSTVALUEARRAYBASEDINITVALUEENDIDXOFRXACCESSINFO, COM_NO_CONSTVALUEARRAYBASEDINITVALUESTARTIDXOFRXACCESSINFO,                                                     6U,          23U, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO, COM_NO_RXTOUTINFOIDXOFRXACCESSINFO,                     0U },  /* [/ActiveEcuC/Com/ComConfig/LatCtlCurv_No_Actl_5abef978, /ActiveEcuC/Com/ComConfig/LateralMotionControl_FD1_oFD1_CAN_3abd61be] */
  { /*    45 */          TRUE,                           FALSE,  COM_UINT16_APPLTYPEOFRXACCESSINFO,       10U,         54U,                            13U, COM_NBITNBYTE_SW_BUSACCOFRXACCESSINFO,         1U,           6U, COM_NO_CONSTVALUEARRAYBASEDINITVALUEENDIDXOFRXACCESSINFO, COM_NO_CONSTVALUEARRAYBASEDINITVALUESTARTIDXOFRXACCESSINFO,                                                     5U,          23U, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO, COM_NO_RXTOUTINFOIDXOFRXACCESSINFO,                     5U },  /* [/ActiveEcuC/Com/ComConfig/LatCtlPathOffst_L_Actl_5abef978, /ActiveEcuC/Com/ComConfig/LateralMotionControl_FD1_oFD1_CAN_3abd61be] */
  { /*    46 */          TRUE,                           FALSE,  COM_UINT16_APPLTYPEOFRXACCESSINFO,       11U,         37U,                            14U, COM_NBITNBYTE_SW_BUSACCOFRXACCESSINFO,         1U,           4U, COM_NO_CONSTVALUEARRAYBASEDINITVALUEENDIDXOFRXACCESSINFO, COM_NO_CONSTVALUEARRAYBASEDINITVALUESTARTIDXOFRXACCESSINFO,                                                     6U,          23U, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO, COM_NO_RXTOUTINFOIDXOFRXACCESSINFO,                     3U },  /* [/ActiveEcuC/Com/ComConfig/LatCtlPath_An_Actl_5abef978, /ActiveEcuC/Com/ComConfig/LateralMotionControl_FD1_oFD1_CAN_3abd61be] */
  { /*    47 */          TRUE,                           FALSE,   COM_UINT8_APPLTYPEOFRXACCESSINFO,        2U,         32U,                            30U,         COM_NBIT_BUSACCOFRXACCESSINFO,         0U,           4U, COM_NO_CONSTVALUEARRAYBASEDINITVALUEENDIDXOFRXACCESSINFO, COM_NO_CONSTVALUEARRAYBASEDINITVALUESTARTIDXOFRXACCESSINFO,                                                    12U,          23U, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO, COM_NO_RXTOUTINFOIDXOFRXACCESSINFO,                     4U },  /* [/ActiveEcuC/Com/ComConfig/LatCtlPrecision_D_Rq_5abef978, /ActiveEcuC/Com/ComConfig/LateralMotionControl_FD1_oFD1_CAN_3abd61be] */
  { /*    48 */          TRUE,                           FALSE,   COM_UINT8_APPLTYPEOFRXACCESSINFO,        2U,         52U,                            31U,         COM_NBIT_BUSACCOFRXACCESSINFO,         0U,           6U, COM_NO_CONSTVALUEARRAYBASEDINITVALUEENDIDXOFRXACCESSINFO, COM_NO_CONSTVALUEARRAYBASEDINITVALUESTARTIDXOFRXACCESSINFO,                                                    12U,          23U, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO,                                14U,                     6U },  /* [/ActiveEcuC/Com/ComConfig/LatCtlRampType_D_Rq_5abef978, /ActiveEcuC/Com/ComConfig/LateralMotionControl_FD1_oFD1_CAN_3abd61be] */
  { /*    49 */          TRUE,                           FALSE,   COM_UINT8_APPLTYPEOFRXACCESSINFO,        6U,         58U,                            32U,         COM_NBIT_BUSACCOFRXACCESSINFO,         0U,           7U, COM_NO_CONSTVALUEARRAYBASEDINITVALUEENDIDXOFRXACCESSINFO, COM_NO_CONSTVALUEARRAYBASEDINITVALUESTARTIDXOFRXACCESSINFO,                                                    12U,          23U, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO, COM_NO_RXTOUTINFOIDXOFRXACCESSINFO,                     7U },  /* [/ActiveEcuC/Com/ComConfig/LatCtlRng_L_Max_5abef978, /ActiveEcuC/Com/ComConfig/LateralMotionControl_FD1_oFD1_CAN_3abd61be] */
    /* Index    InitValueUsed  RxSigBufferArrayBasedBufferUsed  ApplType                            BitLength  BitPosition  BufferIdx                       BusAcc                                 ByteLength  BytePosition  ConstValueArrayBasedInitValueEndIdx                       ConstValueArrayBasedInitValueStartIdx                       RxDataTimeoutSubstitutionValueIdx                       RxPduInfoIdx  RxSigBufferArrayBasedBufferEndIdx                       RxSigBufferArrayBasedBufferStartIdx                       RxTOutInfoIdx                       StartByteInPduPosition        Referable Keys */
  { /*    50 */          TRUE,                           FALSE,   COM_UINT8_APPLTYPEOFRXACCESSINFO,        3U,         34U,                            33U,         COM_NBIT_BUSACCOFRXACCESSINFO,         0U,           4U, COM_NO_CONSTVALUEARRAYBASEDINITVALUEENDIDXOFRXACCESSINFO, COM_NO_CONSTVALUEARRAYBASEDINITVALUESTARTIDXOFRXACCESSINFO,                                                    12U,          23U, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO, COM_NO_RXTOUTINFOIDXOFRXACCESSINFO,                     4U },  /* [/ActiveEcuC/Com/ComConfig/LatCtl_D_Rq_5abef978, /ActiveEcuC/Com/ComConfig/LateralMotionControl_FD1_oFD1_CAN_3abd61be] */
  { /*    51 */          TRUE,                           FALSE,   COM_UINT8_APPLTYPEOFRXACCESSINFO,        2U,          0U,                            34U,         COM_NBIT_BUSACCOFRXACCESSINFO,         0U,           0U, COM_NO_CONSTVALUEARRAYBASEDINITVALUEENDIDXOFRXACCESSINFO, COM_NO_CONSTVALUEARRAYBASEDINITVALUESTARTIDXOFRXACCESSINFO,                                                    12U,          22U, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO, COM_NO_RXTOUTINFOIDXOFRXACCESSINFO,                     0U },  /* [/ActiveEcuC/Com/ComConfig/LdwActvIntns_D_Req_d64ac390, /ActiveEcuC/Com/ComConfig/Lane_Assist_Data1_FD1_oFD1_CAN_3abd61be] */
  { /*    52 */          TRUE,                           FALSE,   COM_UINT8_APPLTYPEOFRXACCESSINFO,        3U,          2U,                            35U,         COM_NBIT_BUSACCOFRXACCESSINFO,         0U,           0U, COM_NO_CONSTVALUEARRAYBASEDINITVALUEENDIDXOFRXACCESSINFO, COM_NO_CONSTVALUEARRAYBASEDINITVALUESTARTIDXOFRXACCESSINFO,                                                    12U,          22U, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO, COM_NO_RXTOUTINFOIDXOFRXACCESSINFO,                     0U },  /* [/ActiveEcuC/Com/ComConfig/LdwActvStats_D_Req_d64ac390, /ActiveEcuC/Com/ComConfig/Lane_Assist_Data1_FD1_oFD1_CAN_3abd61be] */
  { /*    53 */          TRUE,                           FALSE,   COM_UINT8_APPLTYPEOFRXACCESSINFO,        4U,         50U,                            36U,         COM_NBIT_BUSACCOFRXACCESSINFO,         0U,           6U, COM_NO_CONSTVALUEARRAYBASEDINITVALUEENDIDXOFRXACCESSINFO, COM_NO_CONSTVALUEARRAYBASEDINITVALUESTARTIDXOFRXACCESSINFO,                                                    12U,           4U, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO, COM_NO_RXTOUTINFOIDXOFRXACCESSINFO,                     6U },  /* [/ActiveEcuC/Com/ComConfig/LifeCycMde_D_Actl_3c341b34, /ActiveEcuC/Com/ComConfig/BodyInfo_3_FD1_oFD1_CAN_3abd61be] */
  { /*    54 */          TRUE,                           FALSE,   COM_UINT8_APPLTYPEOFRXACCESSINFO,        3U,          5U,                            37U,         COM_NBIT_BUSACCOFRXACCESSINFO,         0U,           0U, COM_NO_CONSTVALUEARRAYBASEDINITVALUEENDIDXOFRXACCESSINFO, COM_NO_CONSTVALUEARRAYBASEDINITVALUESTARTIDXOFRXACCESSINFO,                                                    12U,          22U, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO, COM_NO_RXTOUTINFOIDXOFRXACCESSINFO,                     0U },  /* [/ActiveEcuC/Com/ComConfig/LkaActvStats_D2_Req_d64ac390, /ActiveEcuC/Com/ComConfig/Lane_Assist_Data1_FD1_oFD1_CAN_3abd61be] */
  { /*    55 */          TRUE,                           FALSE,   COM_UINT8_APPLTYPEOFRXACCESSINFO,        2U,         37U,                            38U,         COM_NBIT_BUSACCOFRXACCESSINFO,         0U,           4U, COM_NO_CONSTVALUEARRAYBASEDINITVALUEENDIDXOFRXACCESSINFO, COM_NO_CONSTVALUEARRAYBASEDINITVALUESTARTIDXOFRXACCESSINFO,                                                    12U,          22U, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO, COM_NO_RXTOUTINFOIDXOFRXACCESSINFO,                     4U },  /* [/ActiveEcuC/Com/ComConfig/LkaDrvOvrrd_D_Rq_d64ac390, /ActiveEcuC/Com/ComConfig/Lane_Assist_Data1_FD1_oFD1_CAN_3abd61be] */
  { /*    56 */          TRUE,                           FALSE,   COM_UINT8_APPLTYPEOFRXACCESSINFO,        3U,         37U,                            39U,         COM_NBIT_BUSACCOFRXACCESSINFO,         0U,           4U, COM_NO_CONSTVALUEARRAYBASEDINITVALUEENDIDXOFRXACCESSINFO, COM_NO_CONSTVALUEARRAYBASEDINITVALUESTARTIDXOFRXACCESSINFO,                                                    12U,          11U, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO, COM_NO_RXTOUTINFOIDXOFRXACCESSINFO,                     4U },  /* [/ActiveEcuC/Com/ComConfig/LsmcBrkDecel_D_Stat_9f750b9f, /ActiveEcuC/Com/ComConfig/BrakeSysFeatures_FD1_oFD1_CAN_3abd61be] */
  { /*    57 */          TRUE,                           FALSE,  COM_UINT32_APPLTYPEOFRXACCESSINFO,       24U,         24U,                             2U,     COM_NBYTE_SW_BUSACCOFRXACCESSINFO,         3U,           3U, COM_NO_CONSTVALUEARRAYBASEDINITVALUEENDIDXOFRXACCESSINFO, COM_NO_CONSTVALUEARRAYBASEDINITVALUESTARTIDXOFRXACCESSINFO,                                                     0U,          13U, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO,                                 9U,                     1U },  /* [/ActiveEcuC/Com/ComConfig/OdometerMasterValue_09a60c78, /ActiveEcuC/Com/ComConfig/Cluster_Info1_FD1_oFD1_CAN_3abd61be] */
  { /*    58 */          TRUE,                           FALSE,   COM_UINT8_APPLTYPEOFRXACCESSINFO,        8U,          0U,                            40U,         COM_BYTE_BUSACCOFRXACCESSINFO,         1U,           0U, COM_NO_CONSTVALUEARRAYBASEDINITVALUEENDIDXOFRXACCESSINFO, COM_NO_CONSTVALUEARRAYBASEDINITVALUESTARTIDXOFRXACCESSINFO,                                                     0U,          12U, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO,                                 8U,                     0U },  /* [/ActiveEcuC/Com/ComConfig/Outside_Air_Temp_Stat_f1463698, /ActiveEcuC/Com/ComConfig/Climate_Control_Data_FD1_oFD1_CAN_3abd61be] */
  { /*    59 */          TRUE,                           FALSE,  COM_UINT16_APPLTYPEOFRXACCESSINFO,       16U,         16U,                            15U,     COM_NBYTE_SW_BUSACCOFRXACCESSINFO,         2U,           2U, COM_NO_CONSTVALUEARRAYBASEDINITVALUEENDIDXOFRXACCESSINFO, COM_NO_CONSTVALUEARRAYBASEDINITVALUESTARTIDXOFRXACCESSINFO,                                                    11U,          38U, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO, COM_NO_RXTOUTINFOIDXOFRXACCESSINFO,                     1U },  /* [/ActiveEcuC/Com/ComConfig/PrplWhlTot2_Tq_Actl_e6deed9e, /ActiveEcuC/Com/ComConfig/VehicleOperatingModes_FD1_oFD1_CAN_3abd61be] */
  { /*    60 */          TRUE,                           FALSE,   COM_UINT8_APPLTYPEOFRXACCESSINFO,        2U,          4U,                            41U,         COM_NBIT_BUSACCOFRXACCESSINFO,         0U,           0U, COM_NO_CONSTVALUEARRAYBASEDINITVALUEENDIDXOFRXACCESSINFO, COM_NO_CONSTVALUEARRAYBASEDINITVALUESTARTIDXOFRXACCESSINFO,                                                    12U,          38U, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO,                                22U,                     0U },  /* [/ActiveEcuC/Com/ComConfig/PwPckTq_D_Stat_e6deed9e, /ActiveEcuC/Com/ComConfig/VehicleOperatingModes_FD1_oFD1_CAN_3abd61be] */
  { /*    61 */          TRUE,                           FALSE,   COM_UINT8_APPLTYPEOFRXACCESSINFO,        5U,         41U,                            42U,         COM_NBIT_BUSACCOFRXACCESSINFO,         0U,           5U, COM_NO_CONSTVALUEARRAYBASEDINITVALUEENDIDXOFRXACCESSINFO, COM_NO_CONSTVALUEARRAYBASEDINITVALUESTARTIDXOFRXACCESSINFO,                                                    12U,          10U, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO,                                 6U,                     5U },  /* [/ActiveEcuC/Com/ComConfig/SelDrvMdeChassis2_D_Rq_e000acae, /ActiveEcuC/Com/ComConfig/BrakeSysFeatures_3_oFD1_CAN_3abd61be] */
  { /*    62 */          TRUE,                           FALSE,   COM_UINT8_APPLTYPEOFRXACCESSINFO,        1U,         23U,                            43U,         COM_NBIT_BUSACCOFRXACCESSINFO,         0U,           2U, COM_NO_CONSTVALUEARRAYBASEDINITVALUEENDIDXOFRXACCESSINFO, COM_NO_CONSTVALUEARRAYBASEDINITVALUESTARTIDXOFRXACCESSINFO,                                                    12U,          15U, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO, COM_NO_RXTOUTINFOIDXOFRXACCESSINFO,                     2U },  /* [/ActiveEcuC/Com/ComConfig/StabCtlBrkActv_B_Actl_eaa4779a, /ActiveEcuC/Com/ComConfig/DesiredTorqBrk_FD1_oFD1_CAN_3abd61be] */
  { /*    63 */          TRUE,                           FALSE,  COM_UINT16_APPLTYPEOFRXACCESSINFO,       16U,          8U,                            16U,     COM_NBYTE_SW_BUSACCOFRXACCESSINFO,         2U,           1U, COM_NO_CONSTVALUEARRAYBASEDINITVALUEENDIDXOFRXACCESSINFO, COM_NO_CONSTVALUEARRAYBASEDINITVALUESTARTIDXOFRXACCESSINFO,                                                     4U,           9U, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO, COM_NO_RXTOUTINFOIDXOFRXACCESSINFO,                     0U },  /* [/ActiveEcuC/Com/ComConfig/StePinOffst_An_Est_c3a8df7f, /ActiveEcuC/Com/ComConfig/BrakeSnData_6_FD1_oFD1_CAN_3abd61be] */
  { /*    64 */          TRUE,                           FALSE,   COM_UINT8_APPLTYPEOFRXACCESSINFO,        2U,         22U,                            44U,         COM_NBIT_BUSACCOFRXACCESSINFO,         0U,           2U, COM_NO_CONSTVALUEARRAYBASEDINITVALUEENDIDXOFRXACCESSINFO, COM_NO_CONSTVALUEARRAYBASEDINITVALUESTARTIDXOFRXACCESSINFO,                                                    12U,           9U, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO,                                 5U,                     2U },  /* [/ActiveEcuC/Com/ComConfig/StePinOffst_D_Stat_c3a8df7f, /ActiveEcuC/Com/ComConfig/BrakeSnData_6_FD1_oFD1_CAN_3abd61be] */
  { /*    65 */          TRUE,                           FALSE,   COM_UINT8_APPLTYPEOFRXACCESSINFO,        4U,         18U,                            45U,         COM_NBIT_BUSACCOFRXACCESSINFO,         0U,           2U, COM_NO_CONSTVALUEARRAYBASEDINITVALUEENDIDXOFRXACCESSINFO, COM_NO_CONSTVALUEARRAYBASEDINITVALUESTARTIDXOFRXACCESSINFO,                                                    12U,           9U, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO, COM_NO_RXTOUTINFOIDXOFRXACCESSINFO,                     2U },  /* [/ActiveEcuC/Com/ComConfig/StePinOffst_No_Cnt_c3a8df7f, /ActiveEcuC/Com/ComConfig/BrakeSnData_6_FD1_oFD1_CAN_3abd61be] */
  { /*    66 */          TRUE,                           FALSE,   COM_UINT8_APPLTYPEOFRXACCESSINFO,        8U,         24U,                            46U,         COM_BYTE_BUSACCOFRXACCESSINFO,         1U,           3U, COM_NO_CONSTVALUEARRAYBASEDINITVALUEENDIDXOFRXACCESSINFO, COM_NO_CONSTVALUEARRAYBASEDINITVALUESTARTIDXOFRXACCESSINFO,                                                    12U,           9U, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO, COM_NO_RXTOUTINFOIDXOFRXACCESSINFO,                     3U },  /* [/ActiveEcuC/Com/ComConfig/StePinOffst_No_Cs_c3a8df7f, /ActiveEcuC/Com/ComConfig/BrakeSnData_6_FD1_oFD1_CAN_3abd61be] */
  { /*    67 */          TRUE,                           FALSE,  COM_UINT16_APPLTYPEOFRXACCESSINFO,       15U,         17U,                            17U, COM_NBITNBYTE_SW_BUSACCOFRXACCESSINFO,         1U,           2U, COM_NO_CONSTVALUEARRAYBASEDINITVALUEENDIDXOFRXACCESSINFO, COM_NO_CONSTVALUEARRAYBASEDINITVALUESTARTIDXOFRXACCESSINFO,                                                    11U,           3U, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO, COM_NO_RXTOUTINFOIDXOFRXACCESSINFO,                     1U },  /* [/ActiveEcuC/Com/ComConfig/SteWhlRelCalib_An_Sns_11fa9ae5, /ActiveEcuC/Com/ComConfig/ActiveFrontStrg_Stat2_FD1_oFD1_CAN_3abd61be] */
  { /*    68 */          TRUE,                           FALSE,   COM_UINT8_APPLTYPEOFRXACCESSINFO,        1U,         48U,                            47U,         COM_NBIT_BUSACCOFRXACCESSINFO,         0U,           6U, COM_NO_CONSTVALUEARRAYBASEDINITVALUEENDIDXOFRXACCESSINFO, COM_NO_CONSTVALUEARRAYBASEDINITVALUESTARTIDXOFRXACCESSINFO,                                                    12U,           1U, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO, COM_NO_RXTOUTINFOIDXOFRXACCESSINFO,                     6U },  /* [/ActiveEcuC/Com/ComConfig/TrlrAidCancl_B_Rq_630ef174, /ActiveEcuC/Com/ComConfig/APIM_Send_Signals1_FD1_oFD1_CAN_3abd61be] */
  { /*    69 */          TRUE,                           FALSE,  COM_UINT16_APPLTYPEOFRXACCESSINFO,       12U,         36U,                            18U, COM_NBITNBYTE_SW_BUSACCOFRXACCESSINFO,         1U,           4U, COM_NO_CONSTVALUEARRAYBASEDINITVALUEENDIDXOFRXACCESSINFO, COM_NO_CONSTVALUEARRAYBASEDINITVALUESTARTIDXOFRXACCESSINFO,                                                     3U,          35U, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO, COM_NO_RXTOUTINFOIDXOFRXACCESSINFO,                     3U },  /* [/ActiveEcuC/Com/ComConfig/TrlrAidCtl_U_RqDrv_372f28fe, /ActiveEcuC/Com/ComConfig/TrailerInfo_2_FD1_oFD1_CAN_3abd61be] */
  { /*    70 */          TRUE,                           FALSE,   COM_UINT8_APPLTYPEOFRXACCESSINFO,        3U,          5U,                            48U,         COM_NBIT_BUSACCOFRXACCESSINFO,         0U,           0U, COM_NO_CONSTVALUEARRAYBASEDINITVALUEENDIDXOFRXACCESSINFO, COM_NO_CONSTVALUEARRAYBASEDINITVALUESTARTIDXOFRXACCESSINFO,                                                    12U,          29U, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO, COM_NO_RXTOUTINFOIDXOFRXACCESSINFO,                     0U },  /* [/ActiveEcuC/Com/ComConfig/TrlrAidEnbl_D2_Rq_cc1bcd0f, /ActiveEcuC/Com/ComConfig/TrailerAid_Data3_FD1_oFD1_CAN_3abd61be] */
  { /*    71 */          TRUE,                           FALSE,   COM_UINT8_APPLTYPEOFRXACCESSINFO,        2U,          4U,                            49U,         COM_NBIT_BUSACCOFRXACCESSINFO,         0U,           0U, COM_NO_CONSTVALUEARRAYBASEDINITVALUEENDIDXOFRXACCESSINFO, COM_NO_CONSTVALUEARRAYBASEDINITVALUESTARTIDXOFRXACCESSINFO,                                                    12U,           2U, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO,                                 1U,                     0U },  /* [/ActiveEcuC/Com/ComConfig/TrlrAidMde_D_Rq_a35cbfab, /ActiveEcuC/Com/ComConfig/APIM_Send_Signals_2_FD1_oFD1_CAN_3abd61be] */
  { /*    72 */          TRUE,                           FALSE,   COM_UINT8_APPLTYPEOFRXACCESSINFO,        4U,          1U,                            50U,         COM_NBIT_BUSACCOFRXACCESSINFO,         0U,           0U, COM_NO_CONSTVALUEARRAYBASEDINITVALUEENDIDXOFRXACCESSINFO, COM_NO_CONSTVALUEARRAYBASEDINITVALUESTARTIDXOFRXACCESSINFO,                                                    12U,          29U, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO, COM_NO_RXTOUTINFOIDXOFRXACCESSINFO,                     0U },  /* [/ActiveEcuC/Com/ComConfig/TrlrAidSetup_D2_Rq_cc1bcd0f, /ActiveEcuC/Com/ComConfig/TrailerAid_Data3_FD1_oFD1_CAN_3abd61be] */
  { /*    73 */          TRUE,                           FALSE,   COM_UINT8_APPLTYPEOFRXACCESSINFO,        2U,         34U,                            51U,         COM_NBIT_BUSACCOFRXACCESSINFO,         0U,           4U, COM_NO_CONSTVALUEARRAYBASEDINITVALUEENDIDXOFRXACCESSINFO, COM_NO_CONSTVALUEARRAYBASEDINITVALUESTARTIDXOFRXACCESSINFO,                                                    12U,          35U, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO,                                19U,                     4U },  /* [/ActiveEcuC/Com/ComConfig/TrlrAidSwtch_D_RqDrv_372f28fe, /ActiveEcuC/Com/ComConfig/TrailerInfo_2_FD1_oFD1_CAN_3abd61be] */
  { /*    74 */          TRUE,                           FALSE,   COM_UINT8_APPLTYPEOFRXACCESSINFO,        5U,         43U,                            52U,         COM_NBIT_BUSACCOFRXACCESSINFO,         0U,           5U, COM_NO_CONSTVALUEARRAYBASEDINITVALUEENDIDXOFRXACCESSINFO, COM_NO_CONSTVALUEARRAYBASEDINITVALUESTARTIDXOFRXACCESSINFO,                                                    12U,          33U, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO, COM_NO_RXTOUTINFOIDXOFRXACCESSINFO,                     5U },  /* [/ActiveEcuC/Com/ComConfig/TrlrAidTrgtId_No_Actl_0bf22cce, /ActiveEcuC/Com/ComConfig/TrailerAid_Stat3_FD1_oFD1_CAN_3abd61be] */
  { /*    75 */          TRUE,                           FALSE,  COM_UINT16_APPLTYPEOFRXACCESSINFO,       11U,         34U,                            19U, COM_NBITNBYTE_SW_BUSACCOFRXACCESSINFO,         1U,           4U, COM_NO_CONSTVALUEARRAYBASEDINITVALUEENDIDXOFRXACCESSINFO, COM_NO_CONSTVALUEARRAYBASEDINITVALUESTARTIDXOFRXACCESSINFO,                                                     2U,          33U, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO, COM_NO_RXTOUTINFOIDXOFRXACCESSINFO,                     3U },  /* [/ActiveEcuC/Com/ComConfig/TrlrAid_An3_Actl_0bf22cce, /ActiveEcuC/Com/ComConfig/TrailerAid_Stat3_FD1_oFD1_CAN_3abd61be] */
  { /*    76 */          TRUE,                           FALSE,  COM_UINT16_APPLTYPEOFRXACCESSINFO,       10U,         29U,                            20U, COM_NBITNBYTE_SW_BUSACCOFRXACCESSINFO,         1U,           3U, COM_NO_CONSTVALUEARRAYBASEDINITVALUEENDIDXOFRXACCESSINFO, COM_NO_CONSTVALUEARRAYBASEDINITVALUESTARTIDXOFRXACCESSINFO,                                                     1U,          33U, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO, COM_NO_RXTOUTINFOIDXOFRXACCESSINFO,                     2U },  /* [/ActiveEcuC/Com/ComConfig/TrlrAid_AnRate2_Actl_0bf22cce, /ActiveEcuC/Com/ComConfig/TrailerAid_Stat3_FD1_oFD1_CAN_3abd61be] */
  { /*    77 */          TRUE,                           FALSE,   COM_UINT8_APPLTYPEOFRXACCESSINFO,        4U,         52U,                            53U,         COM_NBIT_BUSACCOFRXACCESSINFO,         0U,           6U, COM_NO_CONSTVALUEARRAYBASEDINITVALUEENDIDXOFRXACCESSINFO, COM_NO_CONSTVALUEARRAYBASEDINITVALUESTARTIDXOFRXACCESSINFO,                                                    12U,          33U, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO, COM_NO_RXTOUTINFOIDXOFRXACCESSINFO,                     6U },  /* [/ActiveEcuC/Com/ComConfig/TrlrAid_D2_Stat_0bf22cce, /ActiveEcuC/Com/ComConfig/TrailerAid_Stat3_FD1_oFD1_CAN_3abd61be] */
  { /*    78 */          TRUE,                           FALSE,   COM_UINT8_APPLTYPEOFRXACCESSINFO,        2U,         61U,                            54U,         COM_NBIT_BUSACCOFRXACCESSINFO,         0U,           7U, COM_NO_CONSTVALUEARRAYBASEDINITVALUEENDIDXOFRXACCESSINFO, COM_NO_CONSTVALUEARRAYBASEDINITVALUESTARTIDXOFRXACCESSINFO,                                                    12U,          30U, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO, COM_NO_RXTOUTINFOIDXOFRXACCESSINFO,                     7U },  /* [/ActiveEcuC/Com/ComConfig/TrlrAnOffstDir_D_Mem_0edbb78e, /ActiveEcuC/Com/ComConfig/TrailerAid_Data_FD1_oFD1_CAN_3abd61be] */
  { /*    79 */          TRUE,                           FALSE,  COM_UINT16_APPLTYPEOFRXACCESSINFO,        9U,         15U,                            21U, COM_NBITNBYTE_SW_BUSACCOFRXACCESSINFO,         1U,           1U, COM_NO_CONSTVALUEARRAYBASEDINITVALUEENDIDXOFRXACCESSINFO, COM_NO_CONSTVALUEARRAYBASEDINITVALUESTARTIDXOFRXACCESSINFO,                                                    11U,          30U, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO, COM_NO_RXTOUTINFOIDXOFRXACCESSINFO,                     0U },  /* [/ActiveEcuC/Com/ComConfig/TrlrAxleToBmpr_L_Actl_0edbb78e, /ActiveEcuC/Com/ComConfig/TrailerAid_Data_FD1_oFD1_CAN_3abd61be] */
  { /*    80 */          TRUE,                           FALSE,   COM_UINT8_APPLTYPEOFRXACCESSINFO,        1U,          6U,                            55U,         COM_NBIT_BUSACCOFRXACCESSINFO,         0U,           0U, COM_NO_CONSTVALUEARRAYBASEDINITVALUEENDIDXOFRXACCESSINFO, COM_NO_CONSTVALUEARRAYBASEDINITVALUESTARTIDXOFRXACCESSINFO,                                                    12U,          34U, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO, COM_NO_RXTOUTINFOIDXOFRXACCESSINFO,                     0U },  /* [/ActiveEcuC/Com/ComConfig/TrlrBrkActCnnct_B_Actl_e983cb78, /ActiveEcuC/Com/ComConfig/TrailerBrakeInfo_FD1_oFD1_CAN_3abd61be] */
  { /*    81 */          TRUE,                           FALSE,  COM_UINT16_APPLTYPEOFRXACCESSINFO,       12U,         32U,                            22U, COM_NBITNBYTE_SW_BUSACCOFRXACCESSINFO,         1U,           4U, COM_NO_CONSTVALUEARRAYBASEDINITVALUEENDIDXOFRXACCESSINFO, COM_NO_CONSTVALUEARRAYBASEDINITVALUESTARTIDXOFRXACCESSINFO,                                                     3U,          32U, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO, COM_NO_RXTOUTINFOIDXOFRXACCESSINFO,                     3U },  /* [/ActiveEcuC/Com/ComConfig/TrlrHitYaw_AnRate_Actl_96fdcdb8, /ActiveEcuC/Com/ComConfig/TrailerAid_Stat2_FD1_oFD1_CAN_3abd61be] */
  { /*    82 */          TRUE,                           FALSE,  COM_UINT16_APPLTYPEOFRXACCESSINFO,       12U,         28U,                            23U, COM_NBITNBYTE_SW_BUSACCOFRXACCESSINFO,         1U,           3U, COM_NO_CONSTVALUEARRAYBASEDINITVALUEENDIDXOFRXACCESSINFO, COM_NO_CONSTVALUEARRAYBASEDINITVALUESTARTIDXOFRXACCESSINFO,                                                     3U,          32U, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO, COM_NO_RXTOUTINFOIDXOFRXACCESSINFO,                     2U },  /* [/ActiveEcuC/Com/ComConfig/TrlrHitchYaw_An_Actl_96fdcdb8, /ActiveEcuC/Com/ComConfig/TrailerAid_Stat2_FD1_oFD1_CAN_3abd61be] */
  { /*    83 */          TRUE,                           FALSE,   COM_UINT8_APPLTYPEOFRXACCESSINFO,        4U,         44U,                            56U,         COM_NBIT_BUSACCOFRXACCESSINFO,         0U,           5U, COM_NO_CONSTVALUEARRAYBASEDINITVALUEENDIDXOFRXACCESSINFO, COM_NO_CONSTVALUEARRAYBASEDINITVALUESTARTIDXOFRXACCESSINFO,                                                    12U,          32U, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO, COM_NO_RXTOUTINFOIDXOFRXACCESSINFO,                     5U },  /* [/ActiveEcuC/Com/ComConfig/TrlrHitchYaw_D_Stat_96fdcdb8, /ActiveEcuC/Com/ComConfig/TrailerAid_Stat2_FD1_oFD1_CAN_3abd61be] */
  { /*    84 */          TRUE,                           FALSE,   COM_UINT8_APPLTYPEOFRXACCESSINFO,        2U,         32U,                            57U,         COM_NBIT_BUSACCOFRXACCESSINFO,         0U,           4U, COM_NO_CONSTVALUEARRAYBASEDINITVALUEENDIDXOFRXACCESSINFO, COM_NO_CONSTVALUEARRAYBASEDINITVALUESTARTIDXOFRXACCESSINFO,                                                    12U,          30U, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO, COM_NO_RXTOUTINFOIDXOFRXACCESSINFO,                     4U },  /* [/ActiveEcuC/Com/ComConfig/TrlrIdType_D_Stat_0edbb78e, /ActiveEcuC/Com/ComConfig/TrailerAid_Data_FD1_oFD1_CAN_3abd61be] */
  { /*    85 */          TRUE,                           FALSE,   COM_UINT8_APPLTYPEOFRXACCESSINFO,        4U,          9U,                            58U,         COM_NBIT_BUSACCOFRXACCESSINFO,         0U,           1U, COM_NO_CONSTVALUEARRAYBASEDINITVALUEENDIDXOFRXACCESSINFO, COM_NO_CONSTVALUEARRAYBASEDINITVALUESTARTIDXOFRXACCESSINFO,                                                    12U,          30U, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO, COM_NO_RXTOUTINFOIDXOFRXACCESSINFO,                     1U },  /* [/ActiveEcuC/Com/ComConfig/TrlrId_No_Actl_0edbb78e, /ActiveEcuC/Com/ComConfig/TrailerAid_Data_FD1_oFD1_CAN_3abd61be] */
  { /*    86 */          TRUE,                           FALSE,   COM_UINT8_APPLTYPEOFRXACCESSINFO,        1U,          7U,                            59U,         COM_NBIT_BUSACCOFRXACCESSINFO,         0U,           0U, COM_NO_CONSTVALUEARRAYBASEDINITVALUEENDIDXOFRXACCESSINFO, COM_NO_CONSTVALUEARRAYBASEDINITVALUESTARTIDXOFRXACCESSINFO,                                                    12U,          36U, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO,                                20U,                     0U },  /* [/ActiveEcuC/Com/ComConfig/TrlrLampCnnct_B_Actl_6acffff2, /ActiveEcuC/Com/ComConfig/TrailerInfo_FD1_oFD1_CAN_3abd61be] */
  { /*    87 */          TRUE,                           FALSE,   COM_UINT8_APPLTYPEOFRXACCESSINFO,        1U,          8U,                            60U,         COM_NBIT_BUSACCOFRXACCESSINFO,         0U,           1U, COM_NO_CONSTVALUEARRAYBASEDINITVALUEENDIDXOFRXACCESSINFO, COM_NO_CONSTVALUEARRAYBASEDINITVALUESTARTIDXOFRXACCESSINFO,                                                    12U,          30U, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO, COM_NO_RXTOUTINFOIDXOFRXACCESSINFO,                     1U },  /* [/ActiveEcuC/Com/ComConfig/TrlrRvrseCancl_B_Rq_0edbb78e, /ActiveEcuC/Com/ComConfig/TrailerAid_Data_FD1_oFD1_CAN_3abd61be] */
  { /*    88 */          TRUE,                           FALSE,   COM_UINT8_APPLTYPEOFRXACCESSINFO,        3U,         16U,                            61U,         COM_NBIT_BUSACCOFRXACCESSINFO,         0U,           2U, COM_NO_CONSTVALUEARRAYBASEDINITVALUEENDIDXOFRXACCESSINFO, COM_NO_CONSTVALUEARRAYBASEDINITVALUESTARTIDXOFRXACCESSINFO,                                                    12U,          21U, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO, COM_NO_RXTOUTINFOIDXOFRXACCESSINFO,                     2U },  /* [/ActiveEcuC/Com/ComConfig/TrlrRvrseEnbl_D2_Stat_ae9dea9d, /ActiveEcuC/Com/ComConfig/Image_Processing_Data_FD1_oFD1_CAN_3abd61be] */
  { /*    89 */          TRUE,                           FALSE,   COM_UINT8_APPLTYPEOFRXACCESSINFO,        6U,         26U,                            62U,         COM_NBIT_BUSACCOFRXACCESSINFO,         0U,           3U, COM_NO_CONSTVALUEARRAYBASEDINITVALUEENDIDXOFRXACCESSINFO, COM_NO_CONSTVALUEARRAYBASEDINITVALUESTARTIDXOFRXACCESSINFO,                                                    12U,          21U, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO, COM_NO_RXTOUTINFOIDXOFRXACCESSINFO,                     3U },  /* [/ActiveEcuC/Com/ComConfig/TrlrRvrseMsgTxt_D2_Rq_ae9dea9d, /ActiveEcuC/Com/ComConfig/Image_Processing_Data_FD1_oFD1_CAN_3abd61be] */
  { /*    90 */          TRUE,                           FALSE,   COM_UINT8_APPLTYPEOFRXACCESSINFO,        2U,         41U,                            63U,         COM_NBIT_BUSACCOFRXACCESSINFO,         0U,           5U, COM_NO_CONSTVALUEARRAYBASEDINITVALUEENDIDXOFRXACCESSINFO, COM_NO_CONSTVALUEARRAYBASEDINITVALUESTARTIDXOFRXACCESSINFO,                                                    12U,          33U, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO, COM_NO_RXTOUTINFOIDXOFRXACCESSINFO,                     5U },  /* [/ActiveEcuC/Com/ComConfig/TrlrRvrse_D_Stat_0bf22cce, /ActiveEcuC/Com/ComConfig/TrailerAid_Stat3_FD1_oFD1_CAN_3abd61be] */
  { /*    91 */         FALSE,                            TRUE, COM_UINT8_N_APPLTYPEOFRXACCESSINFO,       48U,          0U, COM_NO_BUFFERIDXOFRXACCESSINFO,  COM_ARRAY_BASED_BUSACCOFRXACCESSINFO,         6U,           0U,                                                       6U,                                                         0U, COM_NO_RXDATATIMEOUTSUBSTITUTIONVALUEIDXOFRXACCESSINFO,          31U,                                                     6U,                                                       0U, COM_NO_RXTOUTINFOIDXOFRXACCESSINFO,                     0U },  /* [/ActiveEcuC/Com/ComConfig/TrlrSnsId_No_Actl_ea9ce863, /ActiveEcuC/Com/ComConfig/TrailerAid_Stat1_FD1_oFD1_CAN_3abd61be] */
  { /*    92 */          TRUE,                           FALSE,   COM_UINT8_APPLTYPEOFRXACCESSINFO,        3U,         49U,                            64U,         COM_NBIT_BUSACCOFRXACCESSINFO,         0U,           6U, COM_NO_CONSTVALUEARRAYBASEDINITVALUEENDIDXOFRXACCESSINFO, COM_NO_CONSTVALUEARRAYBASEDINITVALUESTARTIDXOFRXACCESSINFO,                                                    12U,          33U, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO, COM_NO_RXTOUTINFOIDXOFRXACCESSINFO,                     6U },  /* [/ActiveEcuC/Com/ComConfig/TrlrTrgtAcquire_D_Stat_0bf22cce, /ActiveEcuC/Com/ComConfig/TrailerAid_Stat3_FD1_oFD1_CAN_3abd61be] */
  { /*    93 */          TRUE,                           FALSE,   COM_UINT8_APPLTYPEOFRXACCESSINFO,        2U,         42U,                            65U,         COM_NBIT_BUSACCOFRXACCESSINFO,         0U,           5U, COM_NO_CONSTVALUEARRAYBASEDINITVALUEENDIDXOFRXACCESSINFO, COM_NO_CONSTVALUEARRAYBASEDINITVALUESTARTIDXOFRXACCESSINFO,                                                    11U,          32U, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO, COM_NO_RXTOUTINFOIDXOFRXACCESSINFO,                     5U },  /* [/ActiveEcuC/Com/ComConfig/TrlrYawWActl_D_Qf_96fdcdb8, /ActiveEcuC/Com/ComConfig/TrailerAid_Stat2_FD1_oFD1_CAN_3abd61be] */
  { /*    94 */          TRUE,                           FALSE,  COM_UINT16_APPLTYPEOFRXACCESSINFO,       16U,          8U,                            24U,     COM_NBYTE_SW_BUSACCOFRXACCESSINFO,         2U,           1U, COM_NO_CONSTVALUEARRAYBASEDINITVALUEENDIDXOFRXACCESSINFO, COM_NO_CONSTVALUEARRAYBASEDINITVALUESTARTIDXOFRXACCESSINFO,                                                     4U,          32U, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO, COM_NO_RXTOUTINFOIDXOFRXACCESSINFO,                     0U },  /* [/ActiveEcuC/Com/ComConfig/TrlrYaw_W_Actl_96fdcdb8, /ActiveEcuC/Com/ComConfig/TrailerAid_Stat2_FD1_oFD1_CAN_3abd61be] */
  { /*    95 */          TRUE,                           FALSE,   COM_UINT8_APPLTYPEOFRXACCESSINFO,        4U,         24U,                            66U,         COM_NBIT_BUSACCOFRXACCESSINFO,         0U,           3U, COM_NO_CONSTVALUEARRAYBASEDINITVALUEENDIDXOFRXACCESSINFO, COM_NO_CONSTVALUEARRAYBASEDINITVALUESTARTIDXOFRXACCESSINFO,                                                     3U,          26U, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO, COM_NO_RXTOUTINFOIDXOFRXACCESSINFO,                     3U },  /* [/ActiveEcuC/Com/ComConfig/TrnRng_D_Rq_1e331f99, /ActiveEcuC/Com/ComConfig/PowertrainData_10_FD1_oFD1_CAN_3abd61be] */
  { /*    96 */          TRUE,                           FALSE,   COM_UINT8_APPLTYPEOFRXACCESSINFO,        2U,          4U,                            67U,         COM_NBIT_BUSACCOFRXACCESSINFO,         0U,           0U, COM_NO_CONSTVALUEARRAYBASEDINITVALUEENDIDXOFRXACCESSINFO, COM_NO_CONSTVALUEARRAYBASEDINITVALUESTARTIDXOFRXACCESSINFO,                                                    12U,          28U, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO,                                17U,                     0U },  /* [/ActiveEcuC/Com/ComConfig/TurnLghtSwtch_D_Stat_7262fead, /ActiveEcuC/Com/ComConfig/Steering_Data_FD1_oFD1_CAN_3abd61be] */
  { /*    97 */          TRUE,                           FALSE,  COM_UINT16_APPLTYPEOFRXACCESSINFO,       10U,         50U,                            25U, COM_NBITNBYTE_SW_BUSACCOFRXACCESSINFO,         1U,           6U, COM_NO_CONSTVALUEARRAYBASEDINITVALUEENDIDXOFRXACCESSINFO, COM_NO_CONSTVALUEARRAYBASEDINITVALUESTARTIDXOFRXACCESSINFO,                                                     9U,           6U, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO,                                 3U,                     5U },  /* [/ActiveEcuC/Com/ComConfig/VehLatComp_A_Actl_470bb112, /ActiveEcuC/Com/ComConfig/BrakeSnData_3_FD1_oFD1_CAN_3abd61be] */
  { /*    98 */          TRUE,                           FALSE,  COM_UINT16_APPLTYPEOFRXACCESSINFO,       10U,         56U,                            26U, COM_NBITNBYTE_SW_BUSACCOFRXACCESSINFO,         1U,           7U, COM_NO_CONSTVALUEARRAYBASEDINITVALUEENDIDXOFRXACCESSINFO, COM_NO_CONSTVALUEARRAYBASEDINITVALUESTARTIDXOFRXACCESSINFO,                                                     9U,           6U, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO, COM_NO_RXTOUTINFOIDXOFRXACCESSINFO,                     6U },  /* [/ActiveEcuC/Com/ComConfig/VehLongComp_A_Actl_470bb112, /ActiveEcuC/Com/ComConfig/BrakeSnData_3_FD1_oFD1_CAN_3abd61be] */
  { /*    99 */          TRUE,                           FALSE,  COM_UINT16_APPLTYPEOFRXACCESSINFO,       16U,          8U,                            27U,     COM_NBYTE_SW_BUSACCOFRXACCESSINFO,         2U,           1U, COM_NO_CONSTVALUEARRAYBASEDINITVALUEENDIDXOFRXACCESSINFO, COM_NO_CONSTVALUEARRAYBASEDINITVALUESTARTIDXOFRXACCESSINFO,                                                    11U,           6U, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO, COM_NO_RXTOUTINFOIDXOFRXACCESSINFO,                     0U },  /* [/ActiveEcuC/Com/ComConfig/VehOverGnd_V_Est_470bb112, /ActiveEcuC/Com/ComConfig/BrakeSnData_3_FD1_oFD1_CAN_3abd61be] */
    /* Index    InitValueUsed  RxSigBufferArrayBasedBufferUsed  ApplType                            BitLength  BitPosition  BufferIdx                       BusAcc                                 ByteLength  BytePosition  ConstValueArrayBasedInitValueEndIdx                       ConstValueArrayBasedInitValueStartIdx                       RxDataTimeoutSubstitutionValueIdx                       RxPduInfoIdx  RxSigBufferArrayBasedBufferEndIdx                       RxSigBufferArrayBasedBufferStartIdx                       RxTOutInfoIdx                       StartByteInPduPosition        Referable Keys */
  { /*   100 */          TRUE,                           FALSE,   COM_UINT8_APPLTYPEOFRXACCESSINFO,        2U,         22U,                            68U,         COM_NBIT_BUSACCOFRXACCESSINFO,         0U,           2U, COM_NO_CONSTVALUEARRAYBASEDINITVALUEENDIDXOFRXACCESSINFO, COM_NO_CONSTVALUEARRAYBASEDINITVALUESTARTIDXOFRXACCESSINFO,                                                    12U,          11U, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO, COM_NO_RXTOUTINFOIDXOFRXACCESSINFO,                     2U },  /* [/ActiveEcuC/Com/ComConfig/VehVActlBrk_D_Qf_9f750b9f, /ActiveEcuC/Com/ComConfig/BrakeSysFeatures_FD1_oFD1_CAN_3abd61be] */
  { /*   101 */          TRUE,                           FALSE,   COM_UINT8_APPLTYPEOFRXACCESSINFO,        4U,         18U,                            69U,         COM_NBIT_BUSACCOFRXACCESSINFO,         0U,           2U, COM_NO_CONSTVALUEARRAYBASEDINITVALUEENDIDXOFRXACCESSINFO, COM_NO_CONSTVALUEARRAYBASEDINITVALUESTARTIDXOFRXACCESSINFO,                                                    12U,          11U, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO, COM_NO_RXTOUTINFOIDXOFRXACCESSINFO,                     2U },  /* [/ActiveEcuC/Com/ComConfig/VehVActlBrk_No_Cnt_9f750b9f, /ActiveEcuC/Com/ComConfig/BrakeSysFeatures_FD1_oFD1_CAN_3abd61be] */
  { /*   102 */          TRUE,                           FALSE,   COM_UINT8_APPLTYPEOFRXACCESSINFO,        8U,         24U,                            70U,         COM_BYTE_BUSACCOFRXACCESSINFO,         1U,           3U, COM_NO_CONSTVALUEARRAYBASEDINITVALUEENDIDXOFRXACCESSINFO, COM_NO_CONSTVALUEARRAYBASEDINITVALUESTARTIDXOFRXACCESSINFO,                                                    12U,          11U, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO, COM_NO_RXTOUTINFOIDXOFRXACCESSINFO,                     3U },  /* [/ActiveEcuC/Com/ComConfig/VehVActlBrk_No_Cs_9f750b9f, /ActiveEcuC/Com/ComConfig/BrakeSysFeatures_FD1_oFD1_CAN_3abd61be] */
  { /*   103 */          TRUE,                           FALSE,   COM_UINT8_APPLTYPEOFRXACCESSINFO,        2U,         37U,                            71U,         COM_NBIT_BUSACCOFRXACCESSINFO,         0U,           4U, COM_NO_CONSTVALUEARRAYBASEDINITVALUEENDIDXOFRXACCESSINFO, COM_NO_CONSTVALUEARRAYBASEDINITVALUESTARTIDXOFRXACCESSINFO,                                                    12U,          17U, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO,                                11U,                     4U },  /* [/ActiveEcuC/Com/ComConfig/VehVActlEng_D_Qf_2508f61f, /ActiveEcuC/Com/ComConfig/EngVehicleSpThrottle2_FD1_oFD1_CAN_3abd61be] */
  { /*   104 */          TRUE,                           FALSE,   COM_UINT8_APPLTYPEOFRXACCESSINFO,        4U,         19U,                            72U,         COM_NBIT_BUSACCOFRXACCESSINFO,         0U,           2U, COM_NO_CONSTVALUEARRAYBASEDINITVALUEENDIDXOFRXACCESSINFO, COM_NO_CONSTVALUEARRAYBASEDINITVALUESTARTIDXOFRXACCESSINFO,                                                    12U,          17U, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO, COM_NO_RXTOUTINFOIDXOFRXACCESSINFO,                     2U },  /* [/ActiveEcuC/Com/ComConfig/VehVActlEng_No_Cnt_2508f61f, /ActiveEcuC/Com/ComConfig/EngVehicleSpThrottle2_FD1_oFD1_CAN_3abd61be] */
  { /*   105 */          TRUE,                           FALSE,   COM_UINT8_APPLTYPEOFRXACCESSINFO,        8U,          8U,                            73U,         COM_BYTE_BUSACCOFRXACCESSINFO,         1U,           1U, COM_NO_CONSTVALUEARRAYBASEDINITVALUEENDIDXOFRXACCESSINFO, COM_NO_CONSTVALUEARRAYBASEDINITVALUESTARTIDXOFRXACCESSINFO,                                                    12U,          17U, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO, COM_NO_RXTOUTINFOIDXOFRXACCESSINFO,                     1U },  /* [/ActiveEcuC/Com/ComConfig/VehVActlEng_No_Cs_2508f61f, /ActiveEcuC/Com/ComConfig/EngVehicleSpThrottle2_FD1_oFD1_CAN_3abd61be] */
  { /*   106 */          TRUE,                           FALSE,   COM_UINT8_APPLTYPEOFRXACCESSINFO,        1U,         23U,                            74U,         COM_NBIT_BUSACCOFRXACCESSINFO,         0U,           2U, COM_NO_CONSTVALUEARRAYBASEDINITVALUEENDIDXOFRXACCESSINFO, COM_NO_CONSTVALUEARRAYBASEDINITVALUESTARTIDXOFRXACCESSINFO,                                                    12U,          17U, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO, COM_NO_RXTOUTINFOIDXOFRXACCESSINFO,                     2U },  /* [/ActiveEcuC/Com/ComConfig/VehVTrlrAid_B_Avail_2508f61f, /ActiveEcuC/Com/ComConfig/EngVehicleSpThrottle2_FD1_oFD1_CAN_3abd61be] */
  { /*   107 */          TRUE,                           FALSE,  COM_UINT16_APPLTYPEOFRXACCESSINFO,       10U,         52U,                            28U, COM_NBITNBYTE_SW_BUSACCOFRXACCESSINFO,         1U,           6U, COM_NO_CONSTVALUEARRAYBASEDINITVALUEENDIDXOFRXACCESSINFO, COM_NO_CONSTVALUEARRAYBASEDINITVALUESTARTIDXOFRXACCESSINFO,                                                     9U,           7U, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO, COM_NO_RXTOUTINFOIDXOFRXACCESSINFO,                     5U },  /* [/ActiveEcuC/Com/ComConfig/VehVertComp_A_Actl_22c61bd2, /ActiveEcuC/Com/ComConfig/BrakeSnData_4_FD1_oFD1_CAN_3abd61be] */
  { /*   108 */          TRUE,                           FALSE,  COM_UINT16_APPLTYPEOFRXACCESSINFO,       12U,         24U,                            29U, COM_NBITNBYTE_SW_BUSACCOFRXACCESSINFO,         1U,           3U, COM_NO_CONSTVALUEARRAYBASEDINITVALUEENDIDXOFRXACCESSINFO, COM_NO_CONSTVALUEARRAYBASEDINITVALUESTARTIDXOFRXACCESSINFO,                                                     3U,           6U, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO, COM_NO_RXTOUTINFOIDXOFRXACCESSINFO,                     2U },  /* [/ActiveEcuC/Com/ComConfig/VehYawComp_W_Actl_470bb112, /ActiveEcuC/Com/ComConfig/BrakeSnData_3_FD1_oFD1_CAN_3abd61be] */
  { /*   109 */          TRUE,                           FALSE,  COM_UINT16_APPLTYPEOFRXACCESSINFO,       16U,         24U,                            30U,     COM_NBYTE_SW_BUSACCOFRXACCESSINFO,         2U,           3U, COM_NO_CONSTVALUEARRAYBASEDINITVALUEENDIDXOFRXACCESSINFO, COM_NO_CONSTVALUEARRAYBASEDINITVALUESTARTIDXOFRXACCESSINFO,                                                     4U,          41U, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO,                                25U,                     2U },  /* [/ActiveEcuC/Com/ComConfig/VehYaw_W_Actl_f318059c, /ActiveEcuC/Com/ComConfig/Yaw_Data_FD1_oFD1_CAN_3abd61be] */
  { /*   110 */          TRUE,                           FALSE,  COM_UINT16_APPLTYPEOFRXACCESSINFO,       16U,          8U,                            31U,     COM_NBYTE_SW_BUSACCOFRXACCESSINFO,         2U,           1U, COM_NO_CONSTVALUEARRAYBASEDINITVALUEENDIDXOFRXACCESSINFO, COM_NO_CONSTVALUEARRAYBASEDINITVALUESTARTIDXOFRXACCESSINFO,                                                    11U,          11U, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO,                                 7U,                     0U },  /* [/ActiveEcuC/Com/ComConfig/Veh_V_ActlBrk_9f750b9f, /ActiveEcuC/Com/ComConfig/BrakeSysFeatures_FD1_oFD1_CAN_3abd61be] */
  { /*   111 */          TRUE,                           FALSE,  COM_UINT16_APPLTYPEOFRXACCESSINFO,       16U,         56U,                            32U,     COM_NBYTE_SW_BUSACCOFRXACCESSINFO,         2U,           7U, COM_NO_CONSTVALUEARRAYBASEDINITVALUEENDIDXOFRXACCESSINFO, COM_NO_CONSTVALUEARRAYBASEDINITVALUESTARTIDXOFRXACCESSINFO,                                                    11U,          17U, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO, COM_NO_RXTOUTINFOIDXOFRXACCESSINFO,                     6U },  /* [/ActiveEcuC/Com/ComConfig/Veh_V_ActlEng_2508f61f, /ActiveEcuC/Com/ComConfig/EngVehicleSpThrottle2_FD1_oFD1_CAN_3abd61be] */
  { /*   112 */         FALSE,                            TRUE, COM_UINT8_N_APPLTYPEOFRXACCESSINFO,       64U,          0U, COM_NO_BUFFERIDXOFRXACCESSINFO,  COM_ARRAY_BASED_BUSACCOFRXACCESSINFO,         8U,           0U,                                                       8U,                                                         0U, COM_NO_RXDATATIMEOUTSUBSTITUTIONVALUEIDXOFRXACCESSINFO,          20U,                                                    14U,                                                       6U,                                12U,                     0U },  /* [/ActiveEcuC/Com/ComConfig/VehicleGGCCData_575096ac, /ActiveEcuC/Com/ComConfig/GGCC_Config_Mgmt_ID_1_FD1_oFD1_CAN_3abd61be] */
  { /*   113 */          TRUE,                           FALSE,   COM_UINT8_APPLTYPEOFRXACCESSINFO,        2U,         34U,                            75U,         COM_NBIT_BUSACCOFRXACCESSINFO,         0U,           4U, COM_NO_CONSTVALUEARRAYBASEDINITVALUEENDIDXOFRXACCESSINFO, COM_NO_CONSTVALUEARRAYBASEDINITVALUESTARTIDXOFRXACCESSINFO,                                                    12U,          39U, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO,                                23U,                     4U },  /* [/ActiveEcuC/Com/ComConfig/WhlDirFl_D_Actl_91fa0768, /ActiveEcuC/Com/ComConfig/WheelData_FD1_oFD1_CAN_3abd61be] */
  { /*   114 */          TRUE,                           FALSE,   COM_UINT8_APPLTYPEOFRXACCESSINFO,        2U,         36U,                            76U,         COM_NBIT_BUSACCOFRXACCESSINFO,         0U,           4U, COM_NO_CONSTVALUEARRAYBASEDINITVALUEENDIDXOFRXACCESSINFO, COM_NO_CONSTVALUEARRAYBASEDINITVALUESTARTIDXOFRXACCESSINFO,                                                    12U,          39U, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO, COM_NO_RXTOUTINFOIDXOFRXACCESSINFO,                     4U },  /* [/ActiveEcuC/Com/ComConfig/WhlDirFr_D_Actl_91fa0768, /ActiveEcuC/Com/ComConfig/WheelData_FD1_oFD1_CAN_3abd61be] */
  { /*   115 */          TRUE,                           FALSE,   COM_UINT8_APPLTYPEOFRXACCESSINFO,        2U,         38U,                            77U,         COM_NBIT_BUSACCOFRXACCESSINFO,         0U,           4U, COM_NO_CONSTVALUEARRAYBASEDINITVALUEENDIDXOFRXACCESSINFO, COM_NO_CONSTVALUEARRAYBASEDINITVALUESTARTIDXOFRXACCESSINFO,                                                    12U,          39U, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO, COM_NO_RXTOUTINFOIDXOFRXACCESSINFO,                     4U },  /* [/ActiveEcuC/Com/ComConfig/WhlDirRl_D_Actl_91fa0768, /ActiveEcuC/Com/ComConfig/WheelData_FD1_oFD1_CAN_3abd61be] */
  { /*   116 */          TRUE,                           FALSE,   COM_UINT8_APPLTYPEOFRXACCESSINFO,        2U,         32U,                            78U,         COM_NBIT_BUSACCOFRXACCESSINFO,         0U,           4U, COM_NO_CONSTVALUEARRAYBASEDINITVALUEENDIDXOFRXACCESSINFO, COM_NO_CONSTVALUEARRAYBASEDINITVALUESTARTIDXOFRXACCESSINFO,                                                    12U,          39U, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO, COM_NO_RXTOUTINFOIDXOFRXACCESSINFO,                     4U },  /* [/ActiveEcuC/Com/ComConfig/WhlDirRr_D_Actl_91fa0768, /ActiveEcuC/Com/ComConfig/WheelData_FD1_oFD1_CAN_3abd61be] */
  { /*   117 */          TRUE,                           FALSE,  COM_UINT16_APPLTYPEOFRXACCESSINFO,       15U,          8U,                            33U, COM_NBITNBYTE_SW_BUSACCOFRXACCESSINFO,         1U,           1U, COM_NO_CONSTVALUEARRAYBASEDINITVALUEENDIDXOFRXACCESSINFO, COM_NO_CONSTVALUEARRAYBASEDINITVALUESTARTIDXOFRXACCESSINFO,                                                    11U,          40U, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO,                                24U,                     0U },  /* [/ActiveEcuC/Com/ComConfig/WhlFl_W_Meas_5a620481, /ActiveEcuC/Com/ComConfig/WheelSpeed_FD1_oFD1_CAN_3abd61be] */
  { /*   118 */          TRUE,                           FALSE,  COM_UINT16_APPLTYPEOFRXACCESSINFO,       15U,         24U,                            34U, COM_NBITNBYTE_SW_BUSACCOFRXACCESSINFO,         1U,           3U, COM_NO_CONSTVALUEARRAYBASEDINITVALUEENDIDXOFRXACCESSINFO, COM_NO_CONSTVALUEARRAYBASEDINITVALUESTARTIDXOFRXACCESSINFO,                                                    11U,          40U, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO, COM_NO_RXTOUTINFOIDXOFRXACCESSINFO,                     2U },  /* [/ActiveEcuC/Com/ComConfig/WhlFr_W_Meas_5a620481, /ActiveEcuC/Com/ComConfig/WheelSpeed_FD1_oFD1_CAN_3abd61be] */
  { /*   119 */          TRUE,                           FALSE,  COM_UINT16_APPLTYPEOFRXACCESSINFO,       15U,         40U,                            35U, COM_NBITNBYTE_SW_BUSACCOFRXACCESSINFO,         1U,           5U, COM_NO_CONSTVALUEARRAYBASEDINITVALUEENDIDXOFRXACCESSINFO, COM_NO_CONSTVALUEARRAYBASEDINITVALUESTARTIDXOFRXACCESSINFO,                                                    11U,          40U, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO, COM_NO_RXTOUTINFOIDXOFRXACCESSINFO,                     4U },  /* [/ActiveEcuC/Com/ComConfig/WhlRl_W_Meas_5a620481, /ActiveEcuC/Com/ComConfig/WheelSpeed_FD1_oFD1_CAN_3abd61be] */
  { /*   120 */          TRUE,                           FALSE,   COM_UINT8_APPLTYPEOFRXACCESSINFO,        8U,          8U,                            79U,         COM_BYTE_BUSACCOFRXACCESSINFO,         1U,           1U, COM_NO_CONSTVALUEARRAYBASEDINITVALUEENDIDXOFRXACCESSINFO, COM_NO_CONSTVALUEARRAYBASEDINITVALUESTARTIDXOFRXACCESSINFO,                                                    12U,          39U, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO, COM_NO_RXTOUTINFOIDXOFRXACCESSINFO,                     1U },  /* [/ActiveEcuC/Com/ComConfig/WhlRotatFl_No_Cnt_91fa0768, /ActiveEcuC/Com/ComConfig/WheelData_FD1_oFD1_CAN_3abd61be] */
  { /*   121 */          TRUE,                           FALSE,   COM_UINT8_APPLTYPEOFRXACCESSINFO,        8U,          0U,                            80U,         COM_BYTE_BUSACCOFRXACCESSINFO,         1U,           0U, COM_NO_CONSTVALUEARRAYBASEDINITVALUEENDIDXOFRXACCESSINFO, COM_NO_CONSTVALUEARRAYBASEDINITVALUESTARTIDXOFRXACCESSINFO,                                                    12U,          39U, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO, COM_NO_RXTOUTINFOIDXOFRXACCESSINFO,                     0U },  /* [/ActiveEcuC/Com/ComConfig/WhlRotatFr_No_Cnt_91fa0768, /ActiveEcuC/Com/ComConfig/WheelData_FD1_oFD1_CAN_3abd61be] */
  { /*   122 */          TRUE,                           FALSE,   COM_UINT8_APPLTYPEOFRXACCESSINFO,        8U,         24U,                            81U,         COM_BYTE_BUSACCOFRXACCESSINFO,         1U,           3U, COM_NO_CONSTVALUEARRAYBASEDINITVALUEENDIDXOFRXACCESSINFO, COM_NO_CONSTVALUEARRAYBASEDINITVALUESTARTIDXOFRXACCESSINFO,                                                    12U,          39U, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO, COM_NO_RXTOUTINFOIDXOFRXACCESSINFO,                     3U },  /* [/ActiveEcuC/Com/ComConfig/WhlRotatRl_No_Cnt_91fa0768, /ActiveEcuC/Com/ComConfig/WheelData_FD1_oFD1_CAN_3abd61be] */
  { /*   123 */          TRUE,                           FALSE,   COM_UINT8_APPLTYPEOFRXACCESSINFO,        8U,         16U,                            82U,         COM_BYTE_BUSACCOFRXACCESSINFO,         1U,           2U, COM_NO_CONSTVALUEARRAYBASEDINITVALUEENDIDXOFRXACCESSINFO, COM_NO_CONSTVALUEARRAYBASEDINITVALUESTARTIDXOFRXACCESSINFO,                                                    12U,          39U, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO, COM_NO_RXTOUTINFOIDXOFRXACCESSINFO,                     2U },  /* [/ActiveEcuC/Com/ComConfig/WhlRotatRr_No_Cnt_91fa0768, /ActiveEcuC/Com/ComConfig/WheelData_FD1_oFD1_CAN_3abd61be] */
  { /*   124 */          TRUE,                           FALSE,  COM_UINT16_APPLTYPEOFRXACCESSINFO,       15U,         56U,                            36U, COM_NBITNBYTE_SW_BUSACCOFRXACCESSINFO,         1U,           7U, COM_NO_CONSTVALUEARRAYBASEDINITVALUEENDIDXOFRXACCESSINFO, COM_NO_CONSTVALUEARRAYBASEDINITVALUESTARTIDXOFRXACCESSINFO,                                                    11U,          40U, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO, COM_NO_RXTOUTINFOIDXOFRXACCESSINFO,                     6U },  /* [/ActiveEcuC/Com/ComConfig/WhlRr_W_Meas_5a620481, /ActiveEcuC/Com/ComConfig/WheelSpeed_FD1_oFD1_CAN_3abd61be] */
  { /*   125 */          TRUE,                           FALSE,  COM_UINT16_APPLTYPEOFRXACCESSINFO,        9U,          8U,                            37U, COM_NBITNBYTE_SW_BUSACCOFRXACCESSINFO,         1U,           1U, COM_NO_CONSTVALUEARRAYBASEDINITVALUEENDIDXOFRXACCESSINFO, COM_NO_CONSTVALUEARRAYBASEDINITVALUESTARTIDXOFRXACCESSINFO,                                                     0U,           0U, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO,                                 0U,                     0U }   /* [/ActiveEcuC/Com/ComConfig/YawStabilityIndex_706a037f, /ActiveEcuC/Com/ComConfig/ABS_BrkBst_Data_FD1_oFD1_CAN_3abd61be] */
};
#define COM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Com_RxAccessInfoInd
**********************************************************************************************************************/
/** 
  \var    Com_RxAccessInfoInd
  \brief  the indexes of the 1:1 sorted relation pointing to Com_RxAccessInfo
*/ 
#define COM_START_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(Com_RxAccessInfoIndType, COM_CONST) Com_RxAccessInfoInd[126] = {
  /* Index    RxAccessInfoInd      Referable Keys */
  /*     0 */            125U,  /* [/ActiveEcuC/Com/ComConfig/ABS_BrkBst_Data_FD1_oFD1_CAN_3abd61be] */
  /*     1 */             68U,  /* [/ActiveEcuC/Com/ComConfig/APIM_Send_Signals1_FD1_oFD1_CAN_3abd61be] */
  /*     2 */             71U,  /* [/ActiveEcuC/Com/ComConfig/APIM_Send_Signals_2_FD1_oFD1_CAN_3abd61be] */
  /*     3 */             67U,  /* [/ActiveEcuC/Com/ComConfig/ActiveFrontStrg_Stat2_FD1_oFD1_CAN_3abd61be] */
  /*     4 */             39U,  /* [/ActiveEcuC/Com/ComConfig/BodyInfo_3_FD1_oFD1_CAN_3abd61be] */
  /*     5 */             53U,  /* [/ActiveEcuC/Com/ComConfig/BodyInfo_3_FD1_oFD1_CAN_3abd61be] */
  /*     6 */              5U,  /* [/ActiveEcuC/Com/ComConfig/Body_Info_4_FD1_oFD1_CAN_3abd61be] */
  /*     7 */             97U,  /* [/ActiveEcuC/Com/ComConfig/BrakeSnData_3_FD1_oFD1_CAN_3abd61be] */
  /*     8 */             98U,  /* [/ActiveEcuC/Com/ComConfig/BrakeSnData_3_FD1_oFD1_CAN_3abd61be] */
  /*     9 */             99U,  /* [/ActiveEcuC/Com/ComConfig/BrakeSnData_3_FD1_oFD1_CAN_3abd61be] */
  /*    10 */            108U,  /* [/ActiveEcuC/Com/ComConfig/BrakeSnData_3_FD1_oFD1_CAN_3abd61be] */
  /*    11 */              7U,  /* [/ActiveEcuC/Com/ComConfig/BrakeSnData_4_FD1_oFD1_CAN_3abd61be] */
  /*    12 */            107U,  /* [/ActiveEcuC/Com/ComConfig/BrakeSnData_4_FD1_oFD1_CAN_3abd61be] */
  /*    13 */             21U,  /* [/ActiveEcuC/Com/ComConfig/BrakeSnData_5_FD1_oFD1_CAN_3abd61be] */
  /*    14 */             22U,  /* [/ActiveEcuC/Com/ComConfig/BrakeSnData_5_FD1_oFD1_CAN_3abd61be] */
  /*    15 */             63U,  /* [/ActiveEcuC/Com/ComConfig/BrakeSnData_6_FD1_oFD1_CAN_3abd61be] */
  /*    16 */             64U,  /* [/ActiveEcuC/Com/ComConfig/BrakeSnData_6_FD1_oFD1_CAN_3abd61be] */
  /*    17 */             65U,  /* [/ActiveEcuC/Com/ComConfig/BrakeSnData_6_FD1_oFD1_CAN_3abd61be] */
  /*    18 */             66U,  /* [/ActiveEcuC/Com/ComConfig/BrakeSnData_6_FD1_oFD1_CAN_3abd61be] */
  /*    19 */             61U,  /* [/ActiveEcuC/Com/ComConfig/BrakeSysFeatures_3_oFD1_CAN_3abd61be] */
  /*    20 */             56U,  /* [/ActiveEcuC/Com/ComConfig/BrakeSysFeatures_FD1_oFD1_CAN_3abd61be] */
  /*    21 */            100U,  /* [/ActiveEcuC/Com/ComConfig/BrakeSysFeatures_FD1_oFD1_CAN_3abd61be] */
  /*    22 */            101U,  /* [/ActiveEcuC/Com/ComConfig/BrakeSysFeatures_FD1_oFD1_CAN_3abd61be] */
  /*    23 */            102U,  /* [/ActiveEcuC/Com/ComConfig/BrakeSysFeatures_FD1_oFD1_CAN_3abd61be] */
  /*    24 */            110U,  /* [/ActiveEcuC/Com/ComConfig/BrakeSysFeatures_FD1_oFD1_CAN_3abd61be] */
  /*    25 */             58U,  /* [/ActiveEcuC/Com/ComConfig/Climate_Control_Data_FD1_oFD1_CAN_3abd61be] */
  /*    26 */             57U,  /* [/ActiveEcuC/Com/ComConfig/Cluster_Info1_FD1_oFD1_CAN_3abd61be] */
  /*    27 */             17U,  /* [/ActiveEcuC/Com/ComConfig/DeliveryVersion_oFD1_CAN_3abd61be] */
  /*    28 */             18U,  /* [/ActiveEcuC/Com/ComConfig/DeliveryVersion_oFD1_CAN_3abd61be] */
  /*    29 */             19U,  /* [/ActiveEcuC/Com/ComConfig/DeliveryVersion_oFD1_CAN_3abd61be] */
  /*    30 */             20U,  /* [/ActiveEcuC/Com/ComConfig/DeliveryVersion_oFD1_CAN_3abd61be] */
  /*    31 */              0U,  /* [/ActiveEcuC/Com/ComConfig/DesiredTorqBrk_FD1_oFD1_CAN_3abd61be] */
  /*    32 */              8U,  /* [/ActiveEcuC/Com/ComConfig/DesiredTorqBrk_FD1_oFD1_CAN_3abd61be] */
  /*    33 */              9U,  /* [/ActiveEcuC/Com/ComConfig/DesiredTorqBrk_FD1_oFD1_CAN_3abd61be] */
  /*    34 */             62U,  /* [/ActiveEcuC/Com/ComConfig/DesiredTorqBrk_FD1_oFD1_CAN_3abd61be] */
  /*    35 */              4U,  /* [/ActiveEcuC/Com/ComConfig/EngBrakeData_FD1_oFD1_CAN_3abd61be] */
  /*    36 */              6U,  /* [/ActiveEcuC/Com/ComConfig/EngBrakeData_FD1_oFD1_CAN_3abd61be] */
  /*    37 */             36U,  /* [/ActiveEcuC/Com/ComConfig/EngVehicleSpThrottle2_FD1_oFD1_CAN_3abd61be] */
  /*    38 */            103U,  /* [/ActiveEcuC/Com/ComConfig/EngVehicleSpThrottle2_FD1_oFD1_CAN_3abd61be] */
  /*    39 */            104U,  /* [/ActiveEcuC/Com/ComConfig/EngVehicleSpThrottle2_FD1_oFD1_CAN_3abd61be] */
  /*    40 */            105U,  /* [/ActiveEcuC/Com/ComConfig/EngVehicleSpThrottle2_FD1_oFD1_CAN_3abd61be] */
  /*    41 */            106U,  /* [/ActiveEcuC/Com/ComConfig/EngVehicleSpThrottle2_FD1_oFD1_CAN_3abd61be] */
  /*    42 */            111U,  /* [/ActiveEcuC/Com/ComConfig/EngVehicleSpThrottle2_FD1_oFD1_CAN_3abd61be] */
  /*    43 */              2U,  /* [/ActiveEcuC/Com/ComConfig/EngVehicleSpThrottle_FD1_oFD1_CAN_3abd61be] */
  /*    44 */              3U,  /* [/ActiveEcuC/Com/ComConfig/EngVehicleSpThrottle_FD1_oFD1_CAN_3abd61be] */
  /*    45 */             26U,  /* [/ActiveEcuC/Com/ComConfig/EngVehicleSpThrottle_FD1_oFD1_CAN_3abd61be] */
  /*    46 */             30U,  /* [/ActiveEcuC/Com/ComConfig/FileVersion_oFD1_CAN_3abd61be] */
  /*    47 */             31U,  /* [/ActiveEcuC/Com/ComConfig/FileVersion_oFD1_CAN_3abd61be] */
  /*    48 */             32U,  /* [/ActiveEcuC/Com/ComConfig/FileVersion_oFD1_CAN_3abd61be] */
  /*    49 */             33U,  /* [/ActiveEcuC/Com/ComConfig/FileVersion_oFD1_CAN_3abd61be] */
  /* Index    RxAccessInfoInd      Referable Keys */
  /*    50 */            112U,  /* [/ActiveEcuC/Com/ComConfig/GGCC_Config_Mgmt_ID_1_FD1_oFD1_CAN_3abd61be] */
  /*    51 */             88U,  /* [/ActiveEcuC/Com/ComConfig/Image_Processing_Data_FD1_oFD1_CAN_3abd61be] */
  /*    52 */             89U,  /* [/ActiveEcuC/Com/ComConfig/Image_Processing_Data_FD1_oFD1_CAN_3abd61be] */
  /*    53 */             40U,  /* [/ActiveEcuC/Com/ComConfig/Lane_Assist_Data1_FD1_oFD1_CAN_3abd61be] */
  /*    54 */             41U,  /* [/ActiveEcuC/Com/ComConfig/Lane_Assist_Data1_FD1_oFD1_CAN_3abd61be] */
  /*    55 */             42U,  /* [/ActiveEcuC/Com/ComConfig/Lane_Assist_Data1_FD1_oFD1_CAN_3abd61be] */
  /*    56 */             51U,  /* [/ActiveEcuC/Com/ComConfig/Lane_Assist_Data1_FD1_oFD1_CAN_3abd61be] */
  /*    57 */             52U,  /* [/ActiveEcuC/Com/ComConfig/Lane_Assist_Data1_FD1_oFD1_CAN_3abd61be] */
  /*    58 */             54U,  /* [/ActiveEcuC/Com/ComConfig/Lane_Assist_Data1_FD1_oFD1_CAN_3abd61be] */
  /*    59 */             55U,  /* [/ActiveEcuC/Com/ComConfig/Lane_Assist_Data1_FD1_oFD1_CAN_3abd61be] */
  /*    60 */             37U,  /* [/ActiveEcuC/Com/ComConfig/LateralMotionControl_FD1_oFD1_CAN_3abd61be] */
  /*    61 */             43U,  /* [/ActiveEcuC/Com/ComConfig/LateralMotionControl_FD1_oFD1_CAN_3abd61be] */
  /*    62 */             44U,  /* [/ActiveEcuC/Com/ComConfig/LateralMotionControl_FD1_oFD1_CAN_3abd61be] */
  /*    63 */             45U,  /* [/ActiveEcuC/Com/ComConfig/LateralMotionControl_FD1_oFD1_CAN_3abd61be] */
  /*    64 */             46U,  /* [/ActiveEcuC/Com/ComConfig/LateralMotionControl_FD1_oFD1_CAN_3abd61be] */
  /*    65 */             47U,  /* [/ActiveEcuC/Com/ComConfig/LateralMotionControl_FD1_oFD1_CAN_3abd61be] */
  /*    66 */             48U,  /* [/ActiveEcuC/Com/ComConfig/LateralMotionControl_FD1_oFD1_CAN_3abd61be] */
  /*    67 */             49U,  /* [/ActiveEcuC/Com/ComConfig/LateralMotionControl_FD1_oFD1_CAN_3abd61be] */
  /*    68 */             50U,  /* [/ActiveEcuC/Com/ComConfig/LateralMotionControl_FD1_oFD1_CAN_3abd61be] */
  /*    69 */             28U,  /* [/ActiveEcuC/Com/ComConfig/Mc_Send_Signals_2_FD1_oFD1_CAN_3abd61be] */
  /*    70 */              1U,  /* [/ActiveEcuC/Com/ComConfig/ParkAid_Data_FD1_oFD1_CAN_3abd61be] */
  /*    71 */             23U,  /* [/ActiveEcuC/Com/ComConfig/ParkAid_Data_FD1_oFD1_CAN_3abd61be] */
  /*    72 */             29U,  /* [/ActiveEcuC/Com/ComConfig/ParkAid_Data_FD1_oFD1_CAN_3abd61be] */
  /*    73 */             35U,  /* [/ActiveEcuC/Com/ComConfig/PowertrainData_10_FD1_oFD1_CAN_3abd61be] */
  /*    74 */             95U,  /* [/ActiveEcuC/Com/ComConfig/PowertrainData_10_FD1_oFD1_CAN_3abd61be] */
  /*    75 */             10U,  /* [/ActiveEcuC/Com/ComConfig/Steer_Assist_Data_FD1_oFD1_CAN_3abd61be] */
  /*    76 */             11U,  /* [/ActiveEcuC/Com/ComConfig/Steer_Assist_Data_FD1_oFD1_CAN_3abd61be] */
  /*    77 */             12U,  /* [/ActiveEcuC/Com/ComConfig/Steer_Assist_Data_FD1_oFD1_CAN_3abd61be] */
  /*    78 */             13U,  /* [/ActiveEcuC/Com/ComConfig/Steer_Assist_Data_FD1_oFD1_CAN_3abd61be] */
  /*    79 */             14U,  /* [/ActiveEcuC/Com/ComConfig/Steer_Assist_Data_FD1_oFD1_CAN_3abd61be] */
  /*    80 */             15U,  /* [/ActiveEcuC/Com/ComConfig/Steer_Assist_Data_FD1_oFD1_CAN_3abd61be] */
  /*    81 */             16U,  /* [/ActiveEcuC/Com/ComConfig/Steer_Assist_Data_FD1_oFD1_CAN_3abd61be] */
  /*    82 */             27U,  /* [/ActiveEcuC/Com/ComConfig/Steer_Assist_Data_FD1_oFD1_CAN_3abd61be] */
  /*    83 */             96U,  /* [/ActiveEcuC/Com/ComConfig/Steering_Data_FD1_oFD1_CAN_3abd61be] */
  /*    84 */             70U,  /* [/ActiveEcuC/Com/ComConfig/TrailerAid_Data3_FD1_oFD1_CAN_3abd61be] */
  /*    85 */             72U,  /* [/ActiveEcuC/Com/ComConfig/TrailerAid_Data3_FD1_oFD1_CAN_3abd61be] */
  /*    86 */             78U,  /* [/ActiveEcuC/Com/ComConfig/TrailerAid_Data_FD1_oFD1_CAN_3abd61be] */
  /*    87 */             79U,  /* [/ActiveEcuC/Com/ComConfig/TrailerAid_Data_FD1_oFD1_CAN_3abd61be] */
  /*    88 */             84U,  /* [/ActiveEcuC/Com/ComConfig/TrailerAid_Data_FD1_oFD1_CAN_3abd61be] */
  /*    89 */             85U,  /* [/ActiveEcuC/Com/ComConfig/TrailerAid_Data_FD1_oFD1_CAN_3abd61be] */
  /*    90 */             87U,  /* [/ActiveEcuC/Com/ComConfig/TrailerAid_Data_FD1_oFD1_CAN_3abd61be] */
  /*    91 */             91U,  /* [/ActiveEcuC/Com/ComConfig/TrailerAid_Stat1_FD1_oFD1_CAN_3abd61be] */
  /*    92 */             81U,  /* [/ActiveEcuC/Com/ComConfig/TrailerAid_Stat2_FD1_oFD1_CAN_3abd61be] */
  /*    93 */             82U,  /* [/ActiveEcuC/Com/ComConfig/TrailerAid_Stat2_FD1_oFD1_CAN_3abd61be] */
  /*    94 */             83U,  /* [/ActiveEcuC/Com/ComConfig/TrailerAid_Stat2_FD1_oFD1_CAN_3abd61be] */
  /*    95 */             93U,  /* [/ActiveEcuC/Com/ComConfig/TrailerAid_Stat2_FD1_oFD1_CAN_3abd61be] */
  /*    96 */             94U,  /* [/ActiveEcuC/Com/ComConfig/TrailerAid_Stat2_FD1_oFD1_CAN_3abd61be] */
  /*    97 */             38U,  /* [/ActiveEcuC/Com/ComConfig/TrailerAid_Stat3_FD1_oFD1_CAN_3abd61be] */
  /*    98 */             74U,  /* [/ActiveEcuC/Com/ComConfig/TrailerAid_Stat3_FD1_oFD1_CAN_3abd61be] */
  /*    99 */             75U,  /* [/ActiveEcuC/Com/ComConfig/TrailerAid_Stat3_FD1_oFD1_CAN_3abd61be] */
  /* Index    RxAccessInfoInd      Referable Keys */
  /*   100 */             76U,  /* [/ActiveEcuC/Com/ComConfig/TrailerAid_Stat3_FD1_oFD1_CAN_3abd61be] */
  /*   101 */             77U,  /* [/ActiveEcuC/Com/ComConfig/TrailerAid_Stat3_FD1_oFD1_CAN_3abd61be] */
  /*   102 */             90U,  /* [/ActiveEcuC/Com/ComConfig/TrailerAid_Stat3_FD1_oFD1_CAN_3abd61be] */
  /*   103 */             92U,  /* [/ActiveEcuC/Com/ComConfig/TrailerAid_Stat3_FD1_oFD1_CAN_3abd61be] */
  /*   104 */             80U,  /* [/ActiveEcuC/Com/ComConfig/TrailerBrakeInfo_FD1_oFD1_CAN_3abd61be] */
  /*   105 */             69U,  /* [/ActiveEcuC/Com/ComConfig/TrailerInfo_2_FD1_oFD1_CAN_3abd61be] */
  /*   106 */             73U,  /* [/ActiveEcuC/Com/ComConfig/TrailerInfo_2_FD1_oFD1_CAN_3abd61be] */
  /*   107 */             86U,  /* [/ActiveEcuC/Com/ComConfig/TrailerInfo_FD1_oFD1_CAN_3abd61be] */
  /*   108 */             34U,  /* [/ActiveEcuC/Com/ComConfig/TransGearData_FD1_oFD1_CAN_3abd61be] */
  /*   109 */             24U,  /* [/ActiveEcuC/Com/ComConfig/VehicleOperatingModes_FD1_oFD1_CAN_3abd61be] */
  /*   110 */             25U,  /* [/ActiveEcuC/Com/ComConfig/VehicleOperatingModes_FD1_oFD1_CAN_3abd61be] */
  /*   111 */             59U,  /* [/ActiveEcuC/Com/ComConfig/VehicleOperatingModes_FD1_oFD1_CAN_3abd61be] */
  /*   112 */             60U,  /* [/ActiveEcuC/Com/ComConfig/VehicleOperatingModes_FD1_oFD1_CAN_3abd61be] */
  /*   113 */            113U,  /* [/ActiveEcuC/Com/ComConfig/WheelData_FD1_oFD1_CAN_3abd61be] */
  /*   114 */            114U,  /* [/ActiveEcuC/Com/ComConfig/WheelData_FD1_oFD1_CAN_3abd61be] */
  /*   115 */            115U,  /* [/ActiveEcuC/Com/ComConfig/WheelData_FD1_oFD1_CAN_3abd61be] */
  /*   116 */            116U,  /* [/ActiveEcuC/Com/ComConfig/WheelData_FD1_oFD1_CAN_3abd61be] */
  /*   117 */            120U,  /* [/ActiveEcuC/Com/ComConfig/WheelData_FD1_oFD1_CAN_3abd61be] */
  /*   118 */            121U,  /* [/ActiveEcuC/Com/ComConfig/WheelData_FD1_oFD1_CAN_3abd61be] */
  /*   119 */            122U,  /* [/ActiveEcuC/Com/ComConfig/WheelData_FD1_oFD1_CAN_3abd61be] */
  /*   120 */            123U,  /* [/ActiveEcuC/Com/ComConfig/WheelData_FD1_oFD1_CAN_3abd61be] */
  /*   121 */            117U,  /* [/ActiveEcuC/Com/ComConfig/WheelSpeed_FD1_oFD1_CAN_3abd61be] */
  /*   122 */            118U,  /* [/ActiveEcuC/Com/ComConfig/WheelSpeed_FD1_oFD1_CAN_3abd61be] */
  /*   123 */            119U,  /* [/ActiveEcuC/Com/ComConfig/WheelSpeed_FD1_oFD1_CAN_3abd61be] */
  /*   124 */            124U,  /* [/ActiveEcuC/Com/ComConfig/WheelSpeed_FD1_oFD1_CAN_3abd61be] */
  /*   125 */            109U   /* [/ActiveEcuC/Com/ComConfig/Yaw_Data_FD1_oFD1_CAN_3abd61be] */
};
#define COM_STOP_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Com_RxPduCalloutFuncPtr
**********************************************************************************************************************/
/** 
  \var    Com_RxPduCalloutFuncPtr
  \brief  Rx I-PDU callout function pointer table.
*/ 
#define COM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(ComRxPduCalloutType, COM_CONST) Com_RxPduCalloutFuncPtr[26] = {
  /* Index    RxPduCalloutFuncPtr                                Referable Keys */
  /*     0 */ComIPduCallout_ABS_BrkBst_Data_FD1_Oper       ,  /* [/ActiveEcuC/Com/ComConfig/ABS_BrkBst_Data_FD1_oFD1_CAN_3abd61be] */
  /*     1 */ComIPduCallout_APIM_Send_Signals_2_FD1_Oper   ,  /* [/ActiveEcuC/Com/ComConfig/APIM_Send_Signals_2_FD1_oFD1_CAN_3abd61be] */
  /*     2 */ComIPduCallout_BodyInfo_3_HS2_Oper            ,  /* [/ActiveEcuC/Com/ComConfig/BodyInfo_3_FD1_oFD1_CAN_3abd61be] */
  /*     3 */ComIPduCallout_BrakeSnData_3_FD1_Oper         ,  /* [/ActiveEcuC/Com/ComConfig/BrakeSnData_3_FD1_oFD1_CAN_3abd61be] */
  /*     4 */ComIPduCallout_BrakeSnData_4_FD1_Oper         ,  /* [/ActiveEcuC/Com/ComConfig/BrakeSnData_4_FD1_oFD1_CAN_3abd61be] */
  /*     5 */ComIPduCallout_BrakeSnData_6_FD1_Oper         ,  /* [/ActiveEcuC/Com/ComConfig/BrakeSnData_6_FD1_oFD1_CAN_3abd61be] */
  /*     6 */ComIPduCallout_BrakeSysFeatures_3_FD1         ,  /* [/ActiveEcuC/Com/ComConfig/BrakeSysFeatures_3_oFD1_CAN_3abd61be] */
  /*     7 */ComIPduCallout_BrakeSysFeatures_HS2_Oper      ,  /* [/ActiveEcuC/Com/ComConfig/BrakeSysFeatures_FD1_oFD1_CAN_3abd61be] */
  /*     8 */ComIPduCallout_Climate_Control_Data_FD1       ,  /* [/ActiveEcuC/Com/ComConfig/Climate_Control_Data_FD1_oFD1_CAN_3abd61be] */
  /*     9 */ComIPduCallout_Cluster_Info1_HS2              ,  /* [/ActiveEcuC/Com/ComConfig/Cluster_Info1_FD1_oFD1_CAN_3abd61be] */
  /*    10 */ComIPduCallout_DesiredTorqBrk_FD1_Oper        ,  /* [/ActiveEcuC/Com/ComConfig/DesiredTorqBrk_FD1_oFD1_CAN_3abd61be] */
  /*    11 */ComIPduCallout_EngVehicleSpThrottle2_HS2_Oper ,  /* [/ActiveEcuC/Com/ComConfig/EngVehicleSpThrottle2_FD1_oFD1_CAN_3abd61be] */
  /*    12 */ComIPduCallout_GGCC_Config_Mgmt_ID_1_HS2_Oper ,  /* [/ActiveEcuC/Com/ComConfig/GGCC_Config_Mgmt_ID_1_FD1_oFD1_CAN_3abd61be] */
  /*    13 */ComIPduCallout_Lane_Assist_Data1_FD1_Oper     ,  /* [/ActiveEcuC/Com/ComConfig/Lane_Assist_Data1_FD1_oFD1_CAN_3abd61be] */
  /*    14 */ComIPduCallout_LateralMotionControl_FD1_Oper  ,  /* [/ActiveEcuC/Com/ComConfig/LateralMotionControl_FD1_oFD1_CAN_3abd61be] */
  /*    15 */ComIPduCallout_Mc_Send_Signlas_2_FD1          ,  /* [/ActiveEcuC/Com/ComConfig/Mc_Send_Signals_2_FD1_oFD1_CAN_3abd61be] */
  /*    16 */ComIPduCallout_Steer_Assist_Data_FD1          ,  /* [/ActiveEcuC/Com/ComConfig/Steer_Assist_Data_FD1_oFD1_CAN_3abd61be] */
  /*    17 */ComIPduCallout_Steering_Data_FD1_Oper         ,  /* [/ActiveEcuC/Com/ComConfig/Steering_Data_FD1_oFD1_CAN_3abd61be] */
  /*    18 */ComIPduCallout_TrailerAidStat3_FD1            ,  /* [/ActiveEcuC/Com/ComConfig/TrailerAid_Stat3_FD1_oFD1_CAN_3abd61be] */
  /*    19 */ComIPduCallout_TrailerInfo_2_FD1              ,  /* [/ActiveEcuC/Com/ComConfig/TrailerInfo_2_FD1_oFD1_CAN_3abd61be] */
  /*    20 */ComIPduCallout_TrailerInfo_FD1                ,  /* [/ActiveEcuC/Com/ComConfig/TrailerInfo_FD1_oFD1_CAN_3abd61be] */
  /*    21 */ComIPduCallout_TransGearData_FD1_Oper         ,  /* [/ActiveEcuC/Com/ComConfig/TransGearData_FD1_oFD1_CAN_3abd61be] */
  /*    22 */ComIPduCallout_VehicleOperatingModes_HS2_Oper ,  /* [/ActiveEcuC/Com/ComConfig/VehicleOperatingModes_FD1_oFD1_CAN_3abd61be] */
  /*    23 */ComIPduCallout_WheelData_FD1_Oper             ,  /* [/ActiveEcuC/Com/ComConfig/WheelData_FD1_oFD1_CAN_3abd61be] */
  /*    24 */ComIPduCallout_WheelSpeed_HS2_Oper            ,  /* [/ActiveEcuC/Com/ComConfig/WheelSpeed_FD1_oFD1_CAN_3abd61be] */
  /*    25 */ComIPduCallout_Yaw_Data_FD1_Oper                 /* [/ActiveEcuC/Com/ComConfig/Yaw_Data_FD1_oFD1_CAN_3abd61be] */
};
#define COM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Com_RxPduGrpInfo
**********************************************************************************************************************/
/** 
  \var    Com_RxPduGrpInfo
  \brief  Contains all I-PDU-Group relevant information for Rx I-PDUs.
  \details
  Element                 Description
  PduGrpVectorStartIdx    the start index of the 0:n relation pointing to Com_PduGrpVector
*/ 
#define COM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(Com_RxPduGrpInfoType, COM_CONST) Com_RxPduGrpInfo[42] = {
    /* Index    PduGrpVectorStartIdx */
  { /*     0 */                   1U },
  { /*     1 */                   1U },
  { /*     2 */                   1U },
  { /*     3 */                   1U },
  { /*     4 */                   1U },
  { /*     5 */                   1U },
  { /*     6 */                   1U },
  { /*     7 */                   1U },
  { /*     8 */                   1U },
  { /*     9 */                   1U },
  { /*    10 */                   1U },
  { /*    11 */                   1U },
  { /*    12 */                   1U },
  { /*    13 */                   1U },
  { /*    14 */                   1U },
  { /*    15 */                   1U },
  { /*    16 */                   1U },
  { /*    17 */                   1U },
  { /*    18 */                   1U },
  { /*    19 */                   1U },
  { /*    20 */                   1U },
  { /*    21 */                   1U },
  { /*    22 */                   1U },
  { /*    23 */                   1U },
  { /*    24 */                   1U },
  { /*    25 */                   1U },
  { /*    26 */                   1U },
  { /*    27 */                   1U },
  { /*    28 */                   1U },
  { /*    29 */                   1U },
  { /*    30 */                   1U },
  { /*    31 */                   1U },
  { /*    32 */                   1U },
  { /*    33 */                   1U },
  { /*    34 */                   1U },
  { /*    35 */                   1U },
  { /*    36 */                   1U },
  { /*    37 */                   1U },
  { /*    38 */                   1U },
  { /*    39 */                   1U },
  { /*    40 */                   1U },
  { /*    41 */                   1U }
};
#define COM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Com_RxPduInfo
**********************************************************************************************************************/
/** 
  \var    Com_RxPduInfo
  \brief  Contains all relevant common information for Rx I-PDUs.
  \details
  Element                   Description
  RxDefPduBufferEndIdx      the end index of the 0:n relation pointing to Com_RxDefPduBuffer
  RxDefPduBufferStartIdx    the start index of the 0:n relation pointing to Com_RxDefPduBuffer
  RxAccessInfoIndUsed       TRUE, if the 0:n relation has 1 relation pointing to Com_RxAccessInfoInd
  RxTOutInfoIndUsed         TRUE, if the 0:n relation has 1 relation pointing to Com_RxTOutInfoInd
  RxSigInfoEndIdx           the end index of the 0:n relation pointing to Com_RxSigInfo
  RxSigInfoStartIdx         the start index of the 0:n relation pointing to Com_RxSigInfo
  RxTOutInfoIdx             the index of the 0:1 relation pointing to Com_RxTOutInfo
  RxTOutInfoIndEndIdx       the end index of the 0:n relation pointing to Com_RxTOutInfoInd
  Type                      Defines whether rx Pdu is a NORMAL or TP IPdu.
*/ 
#define COM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(Com_RxPduInfoType, COM_CONST) Com_RxPduInfo[42] = {
    /* Index    RxDefPduBufferEndIdx  RxDefPduBufferStartIdx  RxAccessInfoIndUsed  RxTOutInfoIndUsed  RxSigInfoEndIdx  RxSigInfoStartIdx  RxTOutInfoIdx                    RxTOutInfoIndEndIdx                    Type                              Referable Keys */
  { /*     0 */                   8U,                     0U,                TRUE,              TRUE,              1U,                0U,                              0U,                                    1U, COM_NORMAL_TYPEOFRXPDUINFO },  /* [/ActiveEcuC/Com/ComConfig/ABS_BrkBst_Data_FD1_oFD1_CAN_3abd61be, /ActiveEcuC/Com/ComConfig/PSCM_FD_oFD1_CAN_Rx_fcef2243] */
  { /*     1 */                  16U,                     8U,                TRUE,             FALSE,              2U,                1U, COM_NO_RXTOUTINFOIDXOFRXPDUINFO, COM_NO_RXTOUTINFOINDENDIDXOFRXPDUINFO, COM_NORMAL_TYPEOFRXPDUINFO },  /* [/ActiveEcuC/Com/ComConfig/APIM_Send_Signals1_FD1_oFD1_CAN_3abd61be, /ActiveEcuC/Com/ComConfig/PSCM_FD_oFD1_CAN_Rx_fcef2243] */
  { /*     2 */                  24U,                    16U,                TRUE,              TRUE,              3U,                2U,                              1U,                                    2U, COM_NORMAL_TYPEOFRXPDUINFO },  /* [/ActiveEcuC/Com/ComConfig/APIM_Send_Signals_2_FD1_oFD1_CAN_3abd61be, /ActiveEcuC/Com/ComConfig/PSCM_FD_oFD1_CAN_Rx_fcef2243] */
  { /*     3 */                  32U,                    24U,                TRUE,             FALSE,              4U,                3U, COM_NO_RXTOUTINFOIDXOFRXPDUINFO, COM_NO_RXTOUTINFOINDENDIDXOFRXPDUINFO, COM_NORMAL_TYPEOFRXPDUINFO },  /* [/ActiveEcuC/Com/ComConfig/ActiveFrontStrg_Stat2_FD1_oFD1_CAN_3abd61be, /ActiveEcuC/Com/ComConfig/PSCM_FD_oFD1_CAN_Rx_fcef2243] */
  { /*     4 */                  40U,                    32U,                TRUE,              TRUE,              6U,                4U,                              2U,                                    3U, COM_NORMAL_TYPEOFRXPDUINFO },  /* [/ActiveEcuC/Com/ComConfig/BodyInfo_3_FD1_oFD1_CAN_3abd61be, /ActiveEcuC/Com/ComConfig/PSCM_FD_oFD1_CAN_Rx_fcef2243] */
  { /*     5 */                  48U,                    40U,                TRUE,             FALSE,              7U,                6U, COM_NO_RXTOUTINFOIDXOFRXPDUINFO, COM_NO_RXTOUTINFOINDENDIDXOFRXPDUINFO, COM_NORMAL_TYPEOFRXPDUINFO },  /* [/ActiveEcuC/Com/ComConfig/Body_Info_4_FD1_oFD1_CAN_3abd61be, /ActiveEcuC/Com/ComConfig/PSCM_FD_oFD1_CAN_Rx_fcef2243] */
  { /*     6 */                  56U,                    48U,                TRUE,              TRUE,             11U,                7U,                              3U,                                    4U, COM_NORMAL_TYPEOFRXPDUINFO },  /* [/ActiveEcuC/Com/ComConfig/BrakeSnData_3_FD1_oFD1_CAN_3abd61be, /ActiveEcuC/Com/ComConfig/PSCM_FD_oFD1_CAN_Rx_fcef2243] */
  { /*     7 */                  64U,                    56U,                TRUE,              TRUE,             13U,               11U,                              4U,                                    5U, COM_NORMAL_TYPEOFRXPDUINFO },  /* [/ActiveEcuC/Com/ComConfig/BrakeSnData_4_FD1_oFD1_CAN_3abd61be, /ActiveEcuC/Com/ComConfig/PSCM_FD_oFD1_CAN_Rx_fcef2243] */
  { /*     8 */                  72U,                    64U,                TRUE,             FALSE,             15U,               13U, COM_NO_RXTOUTINFOIDXOFRXPDUINFO, COM_NO_RXTOUTINFOINDENDIDXOFRXPDUINFO, COM_NORMAL_TYPEOFRXPDUINFO },  /* [/ActiveEcuC/Com/ComConfig/BrakeSnData_5_FD1_oFD1_CAN_3abd61be, /ActiveEcuC/Com/ComConfig/PSCM_FD_oFD1_CAN_Rx_fcef2243] */
  { /*     9 */                  80U,                    72U,                TRUE,              TRUE,             19U,               15U,                              5U,                                    6U, COM_NORMAL_TYPEOFRXPDUINFO },  /* [/ActiveEcuC/Com/ComConfig/BrakeSnData_6_FD1_oFD1_CAN_3abd61be, /ActiveEcuC/Com/ComConfig/PSCM_FD_oFD1_CAN_Rx_fcef2243] */
  { /*    10 */                  88U,                    80U,                TRUE,              TRUE,             20U,               19U,                              6U,                                    7U, COM_NORMAL_TYPEOFRXPDUINFO },  /* [/ActiveEcuC/Com/ComConfig/BrakeSysFeatures_3_oFD1_CAN_3abd61be, /ActiveEcuC/Com/ComConfig/PSCM_FD_oFD1_CAN_Rx_fcef2243] */
  { /*    11 */                  96U,                    88U,                TRUE,              TRUE,             25U,               20U,                              7U,                                    8U, COM_NORMAL_TYPEOFRXPDUINFO },  /* [/ActiveEcuC/Com/ComConfig/BrakeSysFeatures_FD1_oFD1_CAN_3abd61be, /ActiveEcuC/Com/ComConfig/PSCM_FD_oFD1_CAN_Rx_fcef2243] */
  { /*    12 */                 104U,                    96U,                TRUE,              TRUE,             26U,               25U,                              8U,                                    9U, COM_NORMAL_TYPEOFRXPDUINFO },  /* [/ActiveEcuC/Com/ComConfig/Climate_Control_Data_FD1_oFD1_CAN_3abd61be, /ActiveEcuC/Com/ComConfig/PSCM_FD_oFD1_CAN_Rx_fcef2243] */
  { /*    13 */                 112U,                   104U,                TRUE,              TRUE,             27U,               26U,                              9U,                                   10U, COM_NORMAL_TYPEOFRXPDUINFO },  /* [/ActiveEcuC/Com/ComConfig/Cluster_Info1_FD1_oFD1_CAN_3abd61be, /ActiveEcuC/Com/ComConfig/PSCM_FD_oFD1_CAN_Rx_fcef2243] */
  { /*    14 */                 122U,                   112U,                TRUE,             FALSE,             31U,               27U, COM_NO_RXTOUTINFOIDXOFRXPDUINFO, COM_NO_RXTOUTINFOINDENDIDXOFRXPDUINFO, COM_NORMAL_TYPEOFRXPDUINFO },  /* [/ActiveEcuC/Com/ComConfig/DeliveryVersion_oFD1_CAN_3abd61be, /ActiveEcuC/Com/ComConfig/PSCM_FD_oFD1_CAN_Rx_fcef2243] */
  { /*    15 */                 130U,                   122U,                TRUE,              TRUE,             35U,               31U,                             10U,                                   11U, COM_NORMAL_TYPEOFRXPDUINFO },  /* [/ActiveEcuC/Com/ComConfig/DesiredTorqBrk_FD1_oFD1_CAN_3abd61be, /ActiveEcuC/Com/ComConfig/PSCM_FD_oFD1_CAN_Rx_fcef2243] */
  { /*    16 */                 138U,                   130U,                TRUE,             FALSE,             37U,               35U, COM_NO_RXTOUTINFOIDXOFRXPDUINFO, COM_NO_RXTOUTINFOINDENDIDXOFRXPDUINFO, COM_NORMAL_TYPEOFRXPDUINFO },  /* [/ActiveEcuC/Com/ComConfig/EngBrakeData_FD1_oFD1_CAN_3abd61be, /ActiveEcuC/Com/ComConfig/PSCM_FD_oFD1_CAN_Rx_fcef2243] */
  { /*    17 */                 146U,                   138U,                TRUE,              TRUE,             43U,               37U,                             11U,                                   12U, COM_NORMAL_TYPEOFRXPDUINFO },  /* [/ActiveEcuC/Com/ComConfig/EngVehicleSpThrottle2_FD1_oFD1_CAN_3abd61be, /ActiveEcuC/Com/ComConfig/PSCM_FD_oFD1_CAN_Rx_fcef2243] */
  { /*    18 */                 154U,                   146U,                TRUE,             FALSE,             46U,               43U, COM_NO_RXTOUTINFOIDXOFRXPDUINFO, COM_NO_RXTOUTINFOINDENDIDXOFRXPDUINFO, COM_NORMAL_TYPEOFRXPDUINFO },  /* [/ActiveEcuC/Com/ComConfig/EngVehicleSpThrottle_FD1_oFD1_CAN_3abd61be, /ActiveEcuC/Com/ComConfig/PSCM_FD_oFD1_CAN_Rx_fcef2243] */
  { /*    19 */                 158U,                   154U,                TRUE,             FALSE,             50U,               46U, COM_NO_RXTOUTINFOIDXOFRXPDUINFO, COM_NO_RXTOUTINFOINDENDIDXOFRXPDUINFO, COM_NORMAL_TYPEOFRXPDUINFO },  /* [/ActiveEcuC/Com/ComConfig/FileVersion_oFD1_CAN_3abd61be, /ActiveEcuC/Com/ComConfig/PSCM_FD_oFD1_CAN_Rx_fcef2243] */
  { /*    20 */                 166U,                   158U,                TRUE,              TRUE,             51U,               50U,                             12U,                                   13U, COM_NORMAL_TYPEOFRXPDUINFO },  /* [/ActiveEcuC/Com/ComConfig/GGCC_Config_Mgmt_ID_1_FD1_oFD1_CAN_3abd61be, /ActiveEcuC/Com/ComConfig/PSCM_FD_oFD1_CAN_Rx_fcef2243] */
  { /*    21 */                 174U,                   166U,                TRUE,             FALSE,             53U,               51U, COM_NO_RXTOUTINFOIDXOFRXPDUINFO, COM_NO_RXTOUTINFOINDENDIDXOFRXPDUINFO, COM_NORMAL_TYPEOFRXPDUINFO },  /* [/ActiveEcuC/Com/ComConfig/Image_Processing_Data_FD1_oFD1_CAN_3abd61be, /ActiveEcuC/Com/ComConfig/PSCM_FD_oFD1_CAN_Rx_fcef2243] */
  { /*    22 */                 182U,                   174U,                TRUE,              TRUE,             60U,               53U,                             13U,                                   14U, COM_NORMAL_TYPEOFRXPDUINFO },  /* [/ActiveEcuC/Com/ComConfig/Lane_Assist_Data1_FD1_oFD1_CAN_3abd61be, /ActiveEcuC/Com/ComConfig/PSCM_FD_oFD1_CAN_Rx_fcef2243] */
  { /*    23 */                 190U,                   182U,                TRUE,              TRUE,             69U,               60U,                             14U,                                   15U, COM_NORMAL_TYPEOFRXPDUINFO },  /* [/ActiveEcuC/Com/ComConfig/LateralMotionControl_FD1_oFD1_CAN_3abd61be, /ActiveEcuC/Com/ComConfig/PSCM_FD_oFD1_CAN_Rx_fcef2243] */
  { /*    24 */                 198U,                   190U,                TRUE,              TRUE,             70U,               69U,                             15U,                                   16U, COM_NORMAL_TYPEOFRXPDUINFO },  /* [/ActiveEcuC/Com/ComConfig/Mc_Send_Signals_2_FD1_oFD1_CAN_3abd61be, /ActiveEcuC/Com/ComConfig/PSCM_FD_oFD1_CAN_Rx_fcef2243] */
  { /*    25 */                 206U,                   198U,                TRUE,             FALSE,             73U,               70U, COM_NO_RXTOUTINFOIDXOFRXPDUINFO, COM_NO_RXTOUTINFOINDENDIDXOFRXPDUINFO, COM_NORMAL_TYPEOFRXPDUINFO },  /* [/ActiveEcuC/Com/ComConfig/ParkAid_Data_FD1_oFD1_CAN_3abd61be, /ActiveEcuC/Com/ComConfig/PSCM_FD_oFD1_CAN_Rx_fcef2243] */
  { /*    26 */                 214U,                   206U,                TRUE,             FALSE,             75U,               73U, COM_NO_RXTOUTINFOIDXOFRXPDUINFO, COM_NO_RXTOUTINFOINDENDIDXOFRXPDUINFO, COM_NORMAL_TYPEOFRXPDUINFO },  /* [/ActiveEcuC/Com/ComConfig/PowertrainData_10_FD1_oFD1_CAN_3abd61be, /ActiveEcuC/Com/ComConfig/PSCM_FD_oFD1_CAN_Rx_fcef2243] */
  { /*    27 */                 222U,                   214U,                TRUE,              TRUE,             83U,               75U,                             16U,                                   17U, COM_NORMAL_TYPEOFRXPDUINFO },  /* [/ActiveEcuC/Com/ComConfig/Steer_Assist_Data_FD1_oFD1_CAN_3abd61be, /ActiveEcuC/Com/ComConfig/PSCM_FD_oFD1_CAN_Rx_fcef2243] */
  { /*    28 */                 230U,                   222U,                TRUE,              TRUE,             84U,               83U,                             17U,                                   18U, COM_NORMAL_TYPEOFRXPDUINFO },  /* [/ActiveEcuC/Com/ComConfig/Steering_Data_FD1_oFD1_CAN_3abd61be, /ActiveEcuC/Com/ComConfig/PSCM_FD_oFD1_CAN_Rx_fcef2243] */
  { /*    29 */                 238U,                   230U,                TRUE,             FALSE,             86U,               84U, COM_NO_RXTOUTINFOIDXOFRXPDUINFO, COM_NO_RXTOUTINFOINDENDIDXOFRXPDUINFO, COM_NORMAL_TYPEOFRXPDUINFO },  /* [/ActiveEcuC/Com/ComConfig/TrailerAid_Data3_FD1_oFD1_CAN_3abd61be, /ActiveEcuC/Com/ComConfig/PSCM_FD_oFD1_CAN_Rx_fcef2243] */
  { /*    30 */                 246U,                   238U,                TRUE,             FALSE,             91U,               86U, COM_NO_RXTOUTINFOIDXOFRXPDUINFO, COM_NO_RXTOUTINFOINDENDIDXOFRXPDUINFO, COM_NORMAL_TYPEOFRXPDUINFO },  /* [/ActiveEcuC/Com/ComConfig/TrailerAid_Data_FD1_oFD1_CAN_3abd61be, /ActiveEcuC/Com/ComConfig/PSCM_FD_oFD1_CAN_Rx_fcef2243] */
  { /*    31 */                 254U,                   246U,                TRUE,             FALSE,             92U,               91U, COM_NO_RXTOUTINFOIDXOFRXPDUINFO, COM_NO_RXTOUTINFOINDENDIDXOFRXPDUINFO, COM_NORMAL_TYPEOFRXPDUINFO },  /* [/ActiveEcuC/Com/ComConfig/TrailerAid_Stat1_FD1_oFD1_CAN_3abd61be, /ActiveEcuC/Com/ComConfig/PSCM_FD_oFD1_CAN_Rx_fcef2243] */
  { /*    32 */                 262U,                   254U,                TRUE,             FALSE,             97U,               92U, COM_NO_RXTOUTINFOIDXOFRXPDUINFO, COM_NO_RXTOUTINFOINDENDIDXOFRXPDUINFO, COM_NORMAL_TYPEOFRXPDUINFO },  /* [/ActiveEcuC/Com/ComConfig/TrailerAid_Stat2_FD1_oFD1_CAN_3abd61be, /ActiveEcuC/Com/ComConfig/PSCM_FD_oFD1_CAN_Rx_fcef2243] */
  { /*    33 */                 270U,                   262U,                TRUE,              TRUE,            104U,               97U,                             18U,                                   19U, COM_NORMAL_TYPEOFRXPDUINFO },  /* [/ActiveEcuC/Com/ComConfig/TrailerAid_Stat3_FD1_oFD1_CAN_3abd61be, /ActiveEcuC/Com/ComConfig/PSCM_FD_oFD1_CAN_Rx_fcef2243] */
  { /*    34 */                 278U,                   270U,                TRUE,             FALSE,            105U,              104U, COM_NO_RXTOUTINFOIDXOFRXPDUINFO, COM_NO_RXTOUTINFOINDENDIDXOFRXPDUINFO, COM_NORMAL_TYPEOFRXPDUINFO },  /* [/ActiveEcuC/Com/ComConfig/TrailerBrakeInfo_FD1_oFD1_CAN_3abd61be, /ActiveEcuC/Com/ComConfig/PSCM_FD_oFD1_CAN_Rx_fcef2243] */
  { /*    35 */                 286U,                   278U,                TRUE,              TRUE,            107U,              105U,                             19U,                                   20U, COM_NORMAL_TYPEOFRXPDUINFO },  /* [/ActiveEcuC/Com/ComConfig/TrailerInfo_2_FD1_oFD1_CAN_3abd61be, /ActiveEcuC/Com/ComConfig/PSCM_FD_oFD1_CAN_Rx_fcef2243] */
  { /*    36 */                 294U,                   286U,                TRUE,              TRUE,            108U,              107U,                             20U,                                   21U, COM_NORMAL_TYPEOFRXPDUINFO },  /* [/ActiveEcuC/Com/ComConfig/TrailerInfo_FD1_oFD1_CAN_3abd61be, /ActiveEcuC/Com/ComConfig/PSCM_FD_oFD1_CAN_Rx_fcef2243] */
  { /*    37 */                 302U,                   294U,                TRUE,              TRUE,            109U,              108U,                             21U,                                   22U, COM_NORMAL_TYPEOFRXPDUINFO },  /* [/ActiveEcuC/Com/ComConfig/TransGearData_FD1_oFD1_CAN_3abd61be, /ActiveEcuC/Com/ComConfig/PSCM_FD_oFD1_CAN_Rx_fcef2243] */
  { /*    38 */                 310U,                   302U,                TRUE,              TRUE,            113U,              109U,                             22U,                                   23U, COM_NORMAL_TYPEOFRXPDUINFO },  /* [/ActiveEcuC/Com/ComConfig/VehicleOperatingModes_FD1_oFD1_CAN_3abd61be, /ActiveEcuC/Com/ComConfig/PSCM_FD_oFD1_CAN_Rx_fcef2243] */
  { /*    39 */                 318U,                   310U,                TRUE,              TRUE,            121U,              113U,                             23U,                                   24U, COM_NORMAL_TYPEOFRXPDUINFO },  /* [/ActiveEcuC/Com/ComConfig/WheelData_FD1_oFD1_CAN_3abd61be, /ActiveEcuC/Com/ComConfig/PSCM_FD_oFD1_CAN_Rx_fcef2243] */
  { /*    40 */                 326U,                   318U,                TRUE,              TRUE,            125U,              121U,                             24U,                                   25U, COM_NORMAL_TYPEOFRXPDUINFO },  /* [/ActiveEcuC/Com/ComConfig/WheelSpeed_FD1_oFD1_CAN_3abd61be, /ActiveEcuC/Com/ComConfig/PSCM_FD_oFD1_CAN_Rx_fcef2243] */
  { /*    41 */                 334U,                   326U,                TRUE,              TRUE,            126U,              125U,                             25U,                                   26U, COM_NORMAL_TYPEOFRXPDUINFO }   /* [/ActiveEcuC/Com/ComConfig/Yaw_Data_FD1_oFD1_CAN_3abd61be, /ActiveEcuC/Com/ComConfig/PSCM_FD_oFD1_CAN_Rx_fcef2243] */
};
#define COM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Com_RxSigInfo
**********************************************************************************************************************/
/** 
  \var    Com_RxSigInfo
  \brief  Contains all relevant information for Rx signals.
  \details
  Element             Description
  RxAccessInfoIdx     the index of the 1:1 relation pointing to Com_RxAccessInfo
  RxTOutInfoIdx       the index of the 0:1 relation pointing to Com_RxTOutInfo
  SignalProcessing
  ValidDlc            Minimum length of PDU required to completely receive the signal or signal group.
*/ 
#define COM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(Com_RxSigInfoType, COM_CONST) Com_RxSigInfo[126] = {
    /* Index    RxAccessInfoIdx  RxTOutInfoIdx                    SignalProcessing                          ValidDlc        Referable Keys */
  { /*     0 */            125U,                              0U, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,       2U },  /* [/ActiveEcuC/Com/ComConfig/ABS_BrkBst_Data_FD1_oFD1_CAN_3abd61be] */
  { /*     1 */             68U, COM_NO_RXTOUTINFOIDXOFRXSIGINFO, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,       7U },  /* [/ActiveEcuC/Com/ComConfig/APIM_Send_Signals1_FD1_oFD1_CAN_3abd61be] */
  { /*     2 */             71U,                              1U, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,       1U },  /* [/ActiveEcuC/Com/ComConfig/APIM_Send_Signals_2_FD1_oFD1_CAN_3abd61be] */
  { /*     3 */             67U, COM_NO_RXTOUTINFOIDXOFRXSIGINFO, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,       3U },  /* [/ActiveEcuC/Com/ComConfig/ActiveFrontStrg_Stat2_FD1_oFD1_CAN_3abd61be] */
  { /*     4 */             39U,                              2U, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,       1U },  /* [/ActiveEcuC/Com/ComConfig/BodyInfo_3_FD1_oFD1_CAN_3abd61be] */
  { /*     5 */             53U, COM_NO_RXTOUTINFOIDXOFRXSIGINFO, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,       7U },  /* [/ActiveEcuC/Com/ComConfig/BodyInfo_3_FD1_oFD1_CAN_3abd61be] */
  { /*     6 */              5U, COM_NO_RXTOUTINFOIDXOFRXSIGINFO, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,       5U },  /* [/ActiveEcuC/Com/ComConfig/Body_Info_4_FD1_oFD1_CAN_3abd61be] */
  { /*     7 */             97U,                              3U, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,       7U },  /* [/ActiveEcuC/Com/ComConfig/BrakeSnData_3_FD1_oFD1_CAN_3abd61be] */
  { /*     8 */             98U, COM_NO_RXTOUTINFOIDXOFRXSIGINFO, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,       8U },  /* [/ActiveEcuC/Com/ComConfig/BrakeSnData_3_FD1_oFD1_CAN_3abd61be] */
  { /*     9 */             99U, COM_NO_RXTOUTINFOIDXOFRXSIGINFO, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,       2U },  /* [/ActiveEcuC/Com/ComConfig/BrakeSnData_3_FD1_oFD1_CAN_3abd61be] */
  { /*    10 */            108U, COM_NO_RXTOUTINFOIDXOFRXSIGINFO, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,       4U },  /* [/ActiveEcuC/Com/ComConfig/BrakeSnData_3_FD1_oFD1_CAN_3abd61be] */
  { /*    11 */              7U,                              4U, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,       6U },  /* [/ActiveEcuC/Com/ComConfig/BrakeSnData_4_FD1_oFD1_CAN_3abd61be] */
  { /*    12 */            107U, COM_NO_RXTOUTINFOIDXOFRXSIGINFO, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,       7U },  /* [/ActiveEcuC/Com/ComConfig/BrakeSnData_4_FD1_oFD1_CAN_3abd61be] */
  { /*    13 */             21U, COM_NO_RXTOUTINFOIDXOFRXSIGINFO, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,       3U },  /* [/ActiveEcuC/Com/ComConfig/BrakeSnData_5_FD1_oFD1_CAN_3abd61be] */
  { /*    14 */             22U, COM_NO_RXTOUTINFOIDXOFRXSIGINFO, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,       4U },  /* [/ActiveEcuC/Com/ComConfig/BrakeSnData_5_FD1_oFD1_CAN_3abd61be] */
  { /*    15 */             63U, COM_NO_RXTOUTINFOIDXOFRXSIGINFO, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,       2U },  /* [/ActiveEcuC/Com/ComConfig/BrakeSnData_6_FD1_oFD1_CAN_3abd61be] */
  { /*    16 */             64U,                              5U, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,       3U },  /* [/ActiveEcuC/Com/ComConfig/BrakeSnData_6_FD1_oFD1_CAN_3abd61be] */
  { /*    17 */             65U, COM_NO_RXTOUTINFOIDXOFRXSIGINFO, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,       3U },  /* [/ActiveEcuC/Com/ComConfig/BrakeSnData_6_FD1_oFD1_CAN_3abd61be] */
  { /*    18 */             66U, COM_NO_RXTOUTINFOIDXOFRXSIGINFO, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,       4U },  /* [/ActiveEcuC/Com/ComConfig/BrakeSnData_6_FD1_oFD1_CAN_3abd61be] */
  { /*    19 */             61U,                              6U, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,       6U },  /* [/ActiveEcuC/Com/ComConfig/BrakeSysFeatures_3_oFD1_CAN_3abd61be] */
  { /*    20 */             56U, COM_NO_RXTOUTINFOIDXOFRXSIGINFO, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,       5U },  /* [/ActiveEcuC/Com/ComConfig/BrakeSysFeatures_FD1_oFD1_CAN_3abd61be] */
  { /*    21 */            100U, COM_NO_RXTOUTINFOIDXOFRXSIGINFO, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,       3U },  /* [/ActiveEcuC/Com/ComConfig/BrakeSysFeatures_FD1_oFD1_CAN_3abd61be] */
  { /*    22 */            101U, COM_NO_RXTOUTINFOIDXOFRXSIGINFO, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,       3U },  /* [/ActiveEcuC/Com/ComConfig/BrakeSysFeatures_FD1_oFD1_CAN_3abd61be] */
  { /*    23 */            102U, COM_NO_RXTOUTINFOIDXOFRXSIGINFO, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,       4U },  /* [/ActiveEcuC/Com/ComConfig/BrakeSysFeatures_FD1_oFD1_CAN_3abd61be] */
  { /*    24 */            110U,                              7U, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,       2U },  /* [/ActiveEcuC/Com/ComConfig/BrakeSysFeatures_FD1_oFD1_CAN_3abd61be] */
  { /*    25 */             58U,                              8U, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,       1U },  /* [/ActiveEcuC/Com/ComConfig/Climate_Control_Data_FD1_oFD1_CAN_3abd61be] */
  { /*    26 */             57U,                              9U, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,       4U },  /* [/ActiveEcuC/Com/ComConfig/Cluster_Info1_FD1_oFD1_CAN_3abd61be] */
  { /*    27 */             17U, COM_NO_RXTOUTINFOIDXOFRXSIGINFO, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,      10U },  /* [/ActiveEcuC/Com/ComConfig/DeliveryVersion_oFD1_CAN_3abd61be] */
  { /*    28 */             18U, COM_NO_RXTOUTINFOIDXOFRXSIGINFO, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,       8U },  /* [/ActiveEcuC/Com/ComConfig/DeliveryVersion_oFD1_CAN_3abd61be] */
  { /*    29 */             19U, COM_NO_RXTOUTINFOIDXOFRXSIGINFO, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,       3U },  /* [/ActiveEcuC/Com/ComConfig/DeliveryVersion_oFD1_CAN_3abd61be] */
  { /*    30 */             20U, COM_NO_RXTOUTINFOIDXOFRXSIGINFO, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,       7U },  /* [/ActiveEcuC/Com/ComConfig/DeliveryVersion_oFD1_CAN_3abd61be] */
  { /*    31 */              0U, COM_NO_RXTOUTINFOIDXOFRXSIGINFO, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,       6U },  /* [/ActiveEcuC/Com/ComConfig/DesiredTorqBrk_FD1_oFD1_CAN_3abd61be] */
  { /*    32 */              8U, COM_NO_RXTOUTINFOIDXOFRXSIGINFO, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,       8U },  /* [/ActiveEcuC/Com/ComConfig/DesiredTorqBrk_FD1_oFD1_CAN_3abd61be] */
  { /*    33 */              9U,                             10U, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,       8U },  /* [/ActiveEcuC/Com/ComConfig/DesiredTorqBrk_FD1_oFD1_CAN_3abd61be] */
  { /*    34 */             62U, COM_NO_RXTOUTINFOIDXOFRXSIGINFO, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,       3U },  /* [/ActiveEcuC/Com/ComConfig/DesiredTorqBrk_FD1_oFD1_CAN_3abd61be] */
  { /*    35 */              4U, COM_NO_RXTOUTINFOIDXOFRXSIGINFO, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,       2U },  /* [/ActiveEcuC/Com/ComConfig/EngBrakeData_FD1_oFD1_CAN_3abd61be] */
  { /*    36 */              6U, COM_NO_RXTOUTINFOIDXOFRXSIGINFO, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,       1U },  /* [/ActiveEcuC/Com/ComConfig/EngBrakeData_FD1_oFD1_CAN_3abd61be] */
  { /*    37 */             36U, COM_NO_RXTOUTINFOIDXOFRXSIGINFO, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,       1U },  /* [/ActiveEcuC/Com/ComConfig/EngVehicleSpThrottle2_FD1_oFD1_CAN_3abd61be] */
  { /*    38 */            103U,                             11U, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,       5U },  /* [/ActiveEcuC/Com/ComConfig/EngVehicleSpThrottle2_FD1_oFD1_CAN_3abd61be] */
  { /*    39 */            104U, COM_NO_RXTOUTINFOIDXOFRXSIGINFO, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,       3U },  /* [/ActiveEcuC/Com/ComConfig/EngVehicleSpThrottle2_FD1_oFD1_CAN_3abd61be] */
  { /*    40 */            105U, COM_NO_RXTOUTINFOIDXOFRXSIGINFO, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,       2U },  /* [/ActiveEcuC/Com/ComConfig/EngVehicleSpThrottle2_FD1_oFD1_CAN_3abd61be] */
  { /*    41 */            106U, COM_NO_RXTOUTINFOIDXOFRXSIGINFO, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,       3U },  /* [/ActiveEcuC/Com/ComConfig/EngVehicleSpThrottle2_FD1_oFD1_CAN_3abd61be] */
  { /*    42 */            111U, COM_NO_RXTOUTINFOIDXOFRXSIGINFO, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,       8U },  /* [/ActiveEcuC/Com/ComConfig/EngVehicleSpThrottle2_FD1_oFD1_CAN_3abd61be] */
  { /*    43 */              2U, COM_NO_RXTOUTINFOIDXOFRXSIGINFO, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,       1U },  /* [/ActiveEcuC/Com/ComConfig/EngVehicleSpThrottle_FD1_oFD1_CAN_3abd61be] */
  { /*    44 */              3U, COM_NO_RXTOUTINFOIDXOFRXSIGINFO, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,       2U },  /* [/ActiveEcuC/Com/ComConfig/EngVehicleSpThrottle_FD1_oFD1_CAN_3abd61be] */
  { /*    45 */             26U, COM_NO_RXTOUTINFOIDXOFRXSIGINFO, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,       5U },  /* [/ActiveEcuC/Com/ComConfig/EngVehicleSpThrottle_FD1_oFD1_CAN_3abd61be] */
  { /*    46 */             30U, COM_NO_RXTOUTINFOIDXOFRXSIGINFO, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,       3U },  /* [/ActiveEcuC/Com/ComConfig/FileVersion_oFD1_CAN_3abd61be] */
  { /*    47 */             31U, COM_NO_RXTOUTINFOIDXOFRXSIGINFO, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,       2U },  /* [/ActiveEcuC/Com/ComConfig/FileVersion_oFD1_CAN_3abd61be] */
  { /*    48 */             32U, COM_NO_RXTOUTINFOIDXOFRXSIGINFO, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,       4U },  /* [/ActiveEcuC/Com/ComConfig/FileVersion_oFD1_CAN_3abd61be] */
  { /*    49 */             33U, COM_NO_RXTOUTINFOIDXOFRXSIGINFO, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,       1U },  /* [/ActiveEcuC/Com/ComConfig/FileVersion_oFD1_CAN_3abd61be] */
    /* Index    RxAccessInfoIdx  RxTOutInfoIdx                    SignalProcessing                          ValidDlc        Referable Keys */
  { /*    50 */            112U,                             12U, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,       8U },  /* [/ActiveEcuC/Com/ComConfig/GGCC_Config_Mgmt_ID_1_FD1_oFD1_CAN_3abd61be] */
  { /*    51 */             88U, COM_NO_RXTOUTINFOIDXOFRXSIGINFO, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,       3U },  /* [/ActiveEcuC/Com/ComConfig/Image_Processing_Data_FD1_oFD1_CAN_3abd61be] */
  { /*    52 */             89U, COM_NO_RXTOUTINFOIDXOFRXSIGINFO, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,       4U },  /* [/ActiveEcuC/Com/ComConfig/Image_Processing_Data_FD1_oFD1_CAN_3abd61be] */
  { /*    53 */             40U,                             13U, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,       3U },  /* [/ActiveEcuC/Com/ComConfig/Lane_Assist_Data1_FD1_oFD1_CAN_3abd61be] */
  { /*    54 */             41U, COM_NO_RXTOUTINFOIDXOFRXSIGINFO, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,       5U },  /* [/ActiveEcuC/Com/ComConfig/Lane_Assist_Data1_FD1_oFD1_CAN_3abd61be] */
  { /*    55 */             42U, COM_NO_RXTOUTINFOIDXOFRXSIGINFO, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,       4U },  /* [/ActiveEcuC/Com/ComConfig/Lane_Assist_Data1_FD1_oFD1_CAN_3abd61be] */
  { /*    56 */             51U, COM_NO_RXTOUTINFOIDXOFRXSIGINFO, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,       1U },  /* [/ActiveEcuC/Com/ComConfig/Lane_Assist_Data1_FD1_oFD1_CAN_3abd61be] */
  { /*    57 */             52U, COM_NO_RXTOUTINFOIDXOFRXSIGINFO, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,       1U },  /* [/ActiveEcuC/Com/ComConfig/Lane_Assist_Data1_FD1_oFD1_CAN_3abd61be] */
  { /*    58 */             54U, COM_NO_RXTOUTINFOIDXOFRXSIGINFO, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,       1U },  /* [/ActiveEcuC/Com/ComConfig/Lane_Assist_Data1_FD1_oFD1_CAN_3abd61be] */
  { /*    59 */             55U, COM_NO_RXTOUTINFOIDXOFRXSIGINFO, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,       5U },  /* [/ActiveEcuC/Com/ComConfig/Lane_Assist_Data1_FD1_oFD1_CAN_3abd61be] */
  { /*    60 */             37U, COM_NO_RXTOUTINFOIDXOFRXSIGINFO, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,       7U },  /* [/ActiveEcuC/Com/ComConfig/LateralMotionControl_FD1_oFD1_CAN_3abd61be] */
  { /*    61 */             43U, COM_NO_RXTOUTINFOIDXOFRXSIGINFO, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,       3U },  /* [/ActiveEcuC/Com/ComConfig/LateralMotionControl_FD1_oFD1_CAN_3abd61be] */
  { /*    62 */             44U, COM_NO_RXTOUTINFOIDXOFRXSIGINFO, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,       2U },  /* [/ActiveEcuC/Com/ComConfig/LateralMotionControl_FD1_oFD1_CAN_3abd61be] */
  { /*    63 */             45U, COM_NO_RXTOUTINFOIDXOFRXSIGINFO, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,       7U },  /* [/ActiveEcuC/Com/ComConfig/LateralMotionControl_FD1_oFD1_CAN_3abd61be] */
  { /*    64 */             46U, COM_NO_RXTOUTINFOIDXOFRXSIGINFO, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,       5U },  /* [/ActiveEcuC/Com/ComConfig/LateralMotionControl_FD1_oFD1_CAN_3abd61be] */
  { /*    65 */             47U, COM_NO_RXTOUTINFOIDXOFRXSIGINFO, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,       5U },  /* [/ActiveEcuC/Com/ComConfig/LateralMotionControl_FD1_oFD1_CAN_3abd61be] */
  { /*    66 */             48U,                             14U, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,       7U },  /* [/ActiveEcuC/Com/ComConfig/LateralMotionControl_FD1_oFD1_CAN_3abd61be] */
  { /*    67 */             49U, COM_NO_RXTOUTINFOIDXOFRXSIGINFO, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,       8U },  /* [/ActiveEcuC/Com/ComConfig/LateralMotionControl_FD1_oFD1_CAN_3abd61be] */
  { /*    68 */             50U, COM_NO_RXTOUTINFOIDXOFRXSIGINFO, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,       5U },  /* [/ActiveEcuC/Com/ComConfig/LateralMotionControl_FD1_oFD1_CAN_3abd61be] */
  { /*    69 */             28U,                             15U, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,       2U },  /* [/ActiveEcuC/Com/ComConfig/Mc_Send_Signals_2_FD1_oFD1_CAN_3abd61be] */
  { /*    70 */              1U, COM_NO_RXTOUTINFOIDXOFRXSIGINFO, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,       8U },  /* [/ActiveEcuC/Com/ComConfig/ParkAid_Data_FD1_oFD1_CAN_3abd61be] */
  { /*    71 */             23U, COM_NO_RXTOUTINFOIDXOFRXSIGINFO, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,       3U },  /* [/ActiveEcuC/Com/ComConfig/ParkAid_Data_FD1_oFD1_CAN_3abd61be] */
  { /*    72 */             29U, COM_NO_RXTOUTINFOIDXOFRXSIGINFO, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,       4U },  /* [/ActiveEcuC/Com/ComConfig/ParkAid_Data_FD1_oFD1_CAN_3abd61be] */
  { /*    73 */             35U, COM_NO_RXTOUTINFOIDXOFRXSIGINFO, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,       1U },  /* [/ActiveEcuC/Com/ComConfig/PowertrainData_10_FD1_oFD1_CAN_3abd61be] */
  { /*    74 */             95U, COM_NO_RXTOUTINFOIDXOFRXSIGINFO, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,       4U },  /* [/ActiveEcuC/Com/ComConfig/PowertrainData_10_FD1_oFD1_CAN_3abd61be] */
  { /*    75 */             10U, COM_NO_RXTOUTINFOIDXOFRXSIGINFO, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,       2U },  /* [/ActiveEcuC/Com/ComConfig/Steer_Assist_Data_FD1_oFD1_CAN_3abd61be] */
  { /*    76 */             11U, COM_NO_RXTOUTINFOIDXOFRXSIGINFO, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,       4U },  /* [/ActiveEcuC/Com/ComConfig/Steer_Assist_Data_FD1_oFD1_CAN_3abd61be] */
  { /*    77 */             12U, COM_NO_RXTOUTINFOIDXOFRXSIGINFO, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,       2U },  /* [/ActiveEcuC/Com/ComConfig/Steer_Assist_Data_FD1_oFD1_CAN_3abd61be] */
  { /*    78 */             13U, COM_NO_RXTOUTINFOIDXOFRXSIGINFO, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,       7U },  /* [/ActiveEcuC/Com/ComConfig/Steer_Assist_Data_FD1_oFD1_CAN_3abd61be] */
  { /*    79 */             14U, COM_NO_RXTOUTINFOIDXOFRXSIGINFO, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,       2U },  /* [/ActiveEcuC/Com/ComConfig/Steer_Assist_Data_FD1_oFD1_CAN_3abd61be] */
  { /*    80 */             15U, COM_NO_RXTOUTINFOIDXOFRXSIGINFO, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,       4U },  /* [/ActiveEcuC/Com/ComConfig/Steer_Assist_Data_FD1_oFD1_CAN_3abd61be] */
  { /*    81 */             16U, COM_NO_RXTOUTINFOIDXOFRXSIGINFO, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,       6U },  /* [/ActiveEcuC/Com/ComConfig/Steer_Assist_Data_FD1_oFD1_CAN_3abd61be] */
  { /*    82 */             27U,                             16U, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,       7U },  /* [/ActiveEcuC/Com/ComConfig/Steer_Assist_Data_FD1_oFD1_CAN_3abd61be] */
  { /*    83 */             96U,                             17U, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,       1U },  /* [/ActiveEcuC/Com/ComConfig/Steering_Data_FD1_oFD1_CAN_3abd61be] */
  { /*    84 */             70U, COM_NO_RXTOUTINFOIDXOFRXSIGINFO, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,       1U },  /* [/ActiveEcuC/Com/ComConfig/TrailerAid_Data3_FD1_oFD1_CAN_3abd61be] */
  { /*    85 */             72U, COM_NO_RXTOUTINFOIDXOFRXSIGINFO, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,       1U },  /* [/ActiveEcuC/Com/ComConfig/TrailerAid_Data3_FD1_oFD1_CAN_3abd61be] */
  { /*    86 */             78U, COM_NO_RXTOUTINFOIDXOFRXSIGINFO, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,       8U },  /* [/ActiveEcuC/Com/ComConfig/TrailerAid_Data_FD1_oFD1_CAN_3abd61be] */
  { /*    87 */             79U, COM_NO_RXTOUTINFOIDXOFRXSIGINFO, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,       2U },  /* [/ActiveEcuC/Com/ComConfig/TrailerAid_Data_FD1_oFD1_CAN_3abd61be] */
  { /*    88 */             84U, COM_NO_RXTOUTINFOIDXOFRXSIGINFO, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,       5U },  /* [/ActiveEcuC/Com/ComConfig/TrailerAid_Data_FD1_oFD1_CAN_3abd61be] */
  { /*    89 */             85U, COM_NO_RXTOUTINFOIDXOFRXSIGINFO, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,       2U },  /* [/ActiveEcuC/Com/ComConfig/TrailerAid_Data_FD1_oFD1_CAN_3abd61be] */
  { /*    90 */             87U, COM_NO_RXTOUTINFOIDXOFRXSIGINFO, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,       2U },  /* [/ActiveEcuC/Com/ComConfig/TrailerAid_Data_FD1_oFD1_CAN_3abd61be] */
  { /*    91 */             91U, COM_NO_RXTOUTINFOIDXOFRXSIGINFO, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,       6U },  /* [/ActiveEcuC/Com/ComConfig/TrailerAid_Stat1_FD1_oFD1_CAN_3abd61be] */
  { /*    92 */             81U, COM_NO_RXTOUTINFOIDXOFRXSIGINFO, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,       5U },  /* [/ActiveEcuC/Com/ComConfig/TrailerAid_Stat2_FD1_oFD1_CAN_3abd61be] */
  { /*    93 */             82U, COM_NO_RXTOUTINFOIDXOFRXSIGINFO, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,       4U },  /* [/ActiveEcuC/Com/ComConfig/TrailerAid_Stat2_FD1_oFD1_CAN_3abd61be] */
  { /*    94 */             83U, COM_NO_RXTOUTINFOIDXOFRXSIGINFO, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,       6U },  /* [/ActiveEcuC/Com/ComConfig/TrailerAid_Stat2_FD1_oFD1_CAN_3abd61be] */
  { /*    95 */             93U, COM_NO_RXTOUTINFOIDXOFRXSIGINFO, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,       6U },  /* [/ActiveEcuC/Com/ComConfig/TrailerAid_Stat2_FD1_oFD1_CAN_3abd61be] */
  { /*    96 */             94U, COM_NO_RXTOUTINFOIDXOFRXSIGINFO, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,       2U },  /* [/ActiveEcuC/Com/ComConfig/TrailerAid_Stat2_FD1_oFD1_CAN_3abd61be] */
  { /*    97 */             38U,                             18U, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,       1U },  /* [/ActiveEcuC/Com/ComConfig/TrailerAid_Stat3_FD1_oFD1_CAN_3abd61be] */
  { /*    98 */             74U, COM_NO_RXTOUTINFOIDXOFRXSIGINFO, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,       6U },  /* [/ActiveEcuC/Com/ComConfig/TrailerAid_Stat3_FD1_oFD1_CAN_3abd61be] */
  { /*    99 */             75U, COM_NO_RXTOUTINFOIDXOFRXSIGINFO, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,       5U },  /* [/ActiveEcuC/Com/ComConfig/TrailerAid_Stat3_FD1_oFD1_CAN_3abd61be] */
    /* Index    RxAccessInfoIdx  RxTOutInfoIdx                    SignalProcessing                          ValidDlc        Referable Keys */
  { /*   100 */             76U, COM_NO_RXTOUTINFOIDXOFRXSIGINFO, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,       4U },  /* [/ActiveEcuC/Com/ComConfig/TrailerAid_Stat3_FD1_oFD1_CAN_3abd61be] */
  { /*   101 */             77U, COM_NO_RXTOUTINFOIDXOFRXSIGINFO, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,       7U },  /* [/ActiveEcuC/Com/ComConfig/TrailerAid_Stat3_FD1_oFD1_CAN_3abd61be] */
  { /*   102 */             90U, COM_NO_RXTOUTINFOIDXOFRXSIGINFO, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,       6U },  /* [/ActiveEcuC/Com/ComConfig/TrailerAid_Stat3_FD1_oFD1_CAN_3abd61be] */
  { /*   103 */             92U, COM_NO_RXTOUTINFOIDXOFRXSIGINFO, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,       7U },  /* [/ActiveEcuC/Com/ComConfig/TrailerAid_Stat3_FD1_oFD1_CAN_3abd61be] */
  { /*   104 */             80U, COM_NO_RXTOUTINFOIDXOFRXSIGINFO, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,       1U },  /* [/ActiveEcuC/Com/ComConfig/TrailerBrakeInfo_FD1_oFD1_CAN_3abd61be] */
  { /*   105 */             69U, COM_NO_RXTOUTINFOIDXOFRXSIGINFO, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,       5U },  /* [/ActiveEcuC/Com/ComConfig/TrailerInfo_2_FD1_oFD1_CAN_3abd61be] */
  { /*   106 */             73U,                             19U, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,       5U },  /* [/ActiveEcuC/Com/ComConfig/TrailerInfo_2_FD1_oFD1_CAN_3abd61be] */
  { /*   107 */             86U,                             20U, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,       1U },  /* [/ActiveEcuC/Com/ComConfig/TrailerInfo_FD1_oFD1_CAN_3abd61be] */
  { /*   108 */             34U,                             21U, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,       2U },  /* [/ActiveEcuC/Com/ComConfig/TransGearData_FD1_oFD1_CAN_3abd61be] */
  { /*   109 */             24U, COM_NO_RXTOUTINFOIDXOFRXSIGINFO, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,       4U },  /* [/ActiveEcuC/Com/ComConfig/VehicleOperatingModes_FD1_oFD1_CAN_3abd61be] */
  { /*   110 */             25U, COM_NO_RXTOUTINFOIDXOFRXSIGINFO, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,       1U },  /* [/ActiveEcuC/Com/ComConfig/VehicleOperatingModes_FD1_oFD1_CAN_3abd61be] */
  { /*   111 */             59U, COM_NO_RXTOUTINFOIDXOFRXSIGINFO, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,       3U },  /* [/ActiveEcuC/Com/ComConfig/VehicleOperatingModes_FD1_oFD1_CAN_3abd61be] */
  { /*   112 */             60U,                             22U, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,       1U },  /* [/ActiveEcuC/Com/ComConfig/VehicleOperatingModes_FD1_oFD1_CAN_3abd61be] */
  { /*   113 */            113U,                             23U, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,       5U },  /* [/ActiveEcuC/Com/ComConfig/WheelData_FD1_oFD1_CAN_3abd61be] */
  { /*   114 */            114U, COM_NO_RXTOUTINFOIDXOFRXSIGINFO, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,       5U },  /* [/ActiveEcuC/Com/ComConfig/WheelData_FD1_oFD1_CAN_3abd61be] */
  { /*   115 */            115U, COM_NO_RXTOUTINFOIDXOFRXSIGINFO, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,       5U },  /* [/ActiveEcuC/Com/ComConfig/WheelData_FD1_oFD1_CAN_3abd61be] */
  { /*   116 */            116U, COM_NO_RXTOUTINFOIDXOFRXSIGINFO, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,       5U },  /* [/ActiveEcuC/Com/ComConfig/WheelData_FD1_oFD1_CAN_3abd61be] */
  { /*   117 */            120U, COM_NO_RXTOUTINFOIDXOFRXSIGINFO, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,       2U },  /* [/ActiveEcuC/Com/ComConfig/WheelData_FD1_oFD1_CAN_3abd61be] */
  { /*   118 */            121U, COM_NO_RXTOUTINFOIDXOFRXSIGINFO, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,       1U },  /* [/ActiveEcuC/Com/ComConfig/WheelData_FD1_oFD1_CAN_3abd61be] */
  { /*   119 */            122U, COM_NO_RXTOUTINFOIDXOFRXSIGINFO, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,       4U },  /* [/ActiveEcuC/Com/ComConfig/WheelData_FD1_oFD1_CAN_3abd61be] */
  { /*   120 */            123U, COM_NO_RXTOUTINFOIDXOFRXSIGINFO, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,       3U },  /* [/ActiveEcuC/Com/ComConfig/WheelData_FD1_oFD1_CAN_3abd61be] */
  { /*   121 */            117U,                             24U, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,       2U },  /* [/ActiveEcuC/Com/ComConfig/WheelSpeed_FD1_oFD1_CAN_3abd61be] */
  { /*   122 */            118U, COM_NO_RXTOUTINFOIDXOFRXSIGINFO, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,       4U },  /* [/ActiveEcuC/Com/ComConfig/WheelSpeed_FD1_oFD1_CAN_3abd61be] */
  { /*   123 */            119U, COM_NO_RXTOUTINFOIDXOFRXSIGINFO, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,       6U },  /* [/ActiveEcuC/Com/ComConfig/WheelSpeed_FD1_oFD1_CAN_3abd61be] */
  { /*   124 */            124U, COM_NO_RXTOUTINFOIDXOFRXSIGINFO, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,       8U },  /* [/ActiveEcuC/Com/ComConfig/WheelSpeed_FD1_oFD1_CAN_3abd61be] */
  { /*   125 */            109U,                             25U, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,       4U }   /* [/ActiveEcuC/Com/ComConfig/Yaw_Data_FD1_oFD1_CAN_3abd61be] */
};
#define COM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Com_RxTOutInfo
**********************************************************************************************************************/
/** 
  \var    Com_RxTOutInfo
  \brief  Contains all relevant information for signal based and I-PDu based Rx deadline monitoring.
  \details
  Element         Description
  FirstFactor     Timeout factor for first deadline monitoring.
  RxPduInfoIdx    the index of the 1:1 relation pointing to Com_RxPduInfo
*/ 
#define COM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(Com_RxTOutInfoType, COM_CONST) Com_RxTOutInfo[26] = {
    /* Index    FirstFactor  RxPduInfoIdx        Referable Keys */
  { /*     0 */          4U,           0U },  /* [/ActiveEcuC/Com/ComConfig/YawStabilityIndex_706a037f, /ActiveEcuC/Com/ComConfig/ABS_BrkBst_Data_FD1_oFD1_CAN_3abd61be, /ActiveEcuC/Com/ComConfig/ABS_BrkBst_Data_FD1_oFD1_CAN_3abd61bePduBased] */
  { /*     1 */        102U,           2U },  /* [/ActiveEcuC/Com/ComConfig/TrlrAidMde_D_Rq_a35cbfab, /ActiveEcuC/Com/ComConfig/APIM_Send_Signals_2_FD1_oFD1_CAN_3abd61be, /ActiveEcuC/Com/ComConfig/APIM_Send_Signals_2_FD1_oFD1_CAN_3abd61bePduBased] */
  { /*     2 */         52U,           4U },  /* [/ActiveEcuC/Com/ComConfig/Ignition_Status_3c341b34, /ActiveEcuC/Com/ComConfig/BodyInfo_3_FD1_oFD1_CAN_3abd61be, /ActiveEcuC/Com/ComConfig/BodyInfo_3_FD1_oFD1_CAN_3abd61bePduBased] */
  { /*     3 */          4U,           6U },  /* [/ActiveEcuC/Com/ComConfig/VehLatComp_A_Actl_470bb112, /ActiveEcuC/Com/ComConfig/BrakeSnData_3_FD1_oFD1_CAN_3abd61be, /ActiveEcuC/Com/ComConfig/BrakeSnData_3_FD1_oFD1_CAN_3abd61bePduBased] */
  { /*     4 */          4U,           7U },  /* [/ActiveEcuC/Com/ComConfig/BrkTot_Tq_Actl_22c61bd2, /ActiveEcuC/Com/ComConfig/BrakeSnData_4_FD1_oFD1_CAN_3abd61be, /ActiveEcuC/Com/ComConfig/BrakeSnData_4_FD1_oFD1_CAN_3abd61bePduBased] */
  { /*     5 */         12U,           9U },  /* [/ActiveEcuC/Com/ComConfig/StePinOffst_D_Stat_c3a8df7f, /ActiveEcuC/Com/ComConfig/BrakeSnData_6_FD1_oFD1_CAN_3abd61be, /ActiveEcuC/Com/ComConfig/BrakeSnData_6_FD1_oFD1_CAN_3abd61bePduBased] */
  { /*     6 */        102U,          10U },  /* [/ActiveEcuC/Com/ComConfig/SelDrvMdeChassis2_D_Rq_e000acae, /ActiveEcuC/Com/ComConfig/BrakeSysFeatures_3_oFD1_CAN_3abd61be, /ActiveEcuC/Com/ComConfig/BrakeSysFeatures_3_oFD1_CAN_3abd61bePduBased] */
  { /*     7 */          4U,          11U },  /* [/ActiveEcuC/Com/ComConfig/Veh_V_ActlBrk_9f750b9f, /ActiveEcuC/Com/ComConfig/BrakeSysFeatures_FD1_oFD1_CAN_3abd61be, /ActiveEcuC/Com/ComConfig/BrakeSysFeatures_FD1_oFD1_CAN_3abd61bePduBased] */
  { /*     8 */        102U,          12U },  /* [/ActiveEcuC/Com/ComConfig/Outside_Air_Temp_Stat_f1463698, /ActiveEcuC/Com/ComConfig/Climate_Control_Data_FD1_oFD1_CAN_3abd61be, /ActiveEcuC/Com/ComConfig/Climate_Control_Data_FD1_oFD1_CAN_3abd61bePduBased] */
  { /*     9 */         12U,          13U },  /* [/ActiveEcuC/Com/ComConfig/OdometerMasterValue_09a60c78, /ActiveEcuC/Com/ComConfig/Cluster_Info1_FD1_oFD1_CAN_3abd61be, /ActiveEcuC/Com/ComConfig/Cluster_Info1_FD1_oFD1_CAN_3abd61bePduBased] */
  { /*    10 */          4U,          15U },  /* [/ActiveEcuC/Com/ComConfig/CmbbDeny_B_ActlBrk_eaa4779a, /ActiveEcuC/Com/ComConfig/DesiredTorqBrk_FD1_oFD1_CAN_3abd61be, /ActiveEcuC/Com/ComConfig/DesiredTorqBrk_FD1_oFD1_CAN_3abd61bePduBased] */
  { /*    11 */          4U,          17U },  /* [/ActiveEcuC/Com/ComConfig/VehVActlEng_D_Qf_2508f61f, /ActiveEcuC/Com/ComConfig/EngVehicleSpThrottle2_FD1_oFD1_CAN_3abd61be, /ActiveEcuC/Com/ComConfig/EngVehicleSpThrottle2_FD1_oFD1_CAN_3abd61bePduBased] */
  { /*    12 */         22U,          20U },  /* [/ActiveEcuC/Com/ComConfig/VehicleGGCCData_575096ac, /ActiveEcuC/Com/ComConfig/GGCC_Config_Mgmt_ID_1_FD1_oFD1_CAN_3abd61be, /ActiveEcuC/Com/ComConfig/GGCC_Config_Mgmt_ID_1_FD1_oFD1_CAN_3abd61bePduBased] */
  { /*    13 */          5U,          22U },  /* [/ActiveEcuC/Com/ComConfig/LaCurvature_No_Calc_d64ac390, /ActiveEcuC/Com/ComConfig/Lane_Assist_Data1_FD1_oFD1_CAN_3abd61be, /ActiveEcuC/Com/ComConfig/Lane_Assist_Data1_FD1_oFD1_CAN_3abd61bePduBased] */
  { /*    14 */          7U,          23U },  /* [/ActiveEcuC/Com/ComConfig/LatCtlRampType_D_Rq_5abef978, /ActiveEcuC/Com/ComConfig/LateralMotionControl_FD1_oFD1_CAN_3abd61be, /ActiveEcuC/Com/ComConfig/LateralMotionControl_FD1_oFD1_CAN_3abd61bePduBased] */
  { /*    15 */        102U,          24U },  /* [/ActiveEcuC/Com/ComConfig/EsaOn_B_Rq_bffaafb8, /ActiveEcuC/Com/ComConfig/Mc_Send_Signals_2_FD1_oFD1_CAN_3abd61be, /ActiveEcuC/Com/ComConfig/Mc_Send_Signals_2_FD1_oFD1_CAN_3abd61bePduBased] */
  { /*    16 */          7U,          27U },  /* [/ActiveEcuC/Com/ComConfig/EsaEnbl_D2_Rq_dafea5bb, /ActiveEcuC/Com/ComConfig/Steer_Assist_Data_FD1_oFD1_CAN_3abd61be, /ActiveEcuC/Com/ComConfig/Steer_Assist_Data_FD1_oFD1_CAN_3abd61bePduBased] */
  { /*    17 */         12U,          28U },  /* [/ActiveEcuC/Com/ComConfig/TurnLghtSwtch_D_Stat_7262fead, /ActiveEcuC/Com/ComConfig/Steering_Data_FD1_oFD1_CAN_3abd61be, /ActiveEcuC/Com/ComConfig/Steering_Data_FD1_oFD1_CAN_3abd61bePduBased] */
  { /*    18 */          7U,          33U },  /* [/ActiveEcuC/Com/ComConfig/HitchToVehAxle_L_Calc_0bf22cce, /ActiveEcuC/Com/ComConfig/TrailerAid_Stat3_FD1_oFD1_CAN_3abd61be, /ActiveEcuC/Com/ComConfig/TrailerAid_Stat3_FD1_oFD1_CAN_3abd61bePduBased] */
  { /*    19 */          7U,          35U },  /* [/ActiveEcuC/Com/ComConfig/TrlrAidSwtch_D_RqDrv_372f28fe, /ActiveEcuC/Com/ComConfig/TrailerInfo_2_FD1_oFD1_CAN_3abd61be, /ActiveEcuC/Com/ComConfig/TrailerInfo_2_FD1_oFD1_CAN_3abd61bePduBased] */
  { /*    20 */        102U,          36U },  /* [/ActiveEcuC/Com/ComConfig/TrlrLampCnnct_B_Actl_6acffff2, /ActiveEcuC/Com/ComConfig/TrailerInfo_FD1_oFD1_CAN_3abd61be, /ActiveEcuC/Com/ComConfig/TrailerInfo_FD1_oFD1_CAN_3abd61bePduBased] */
  { /*    21 */          4U,          37U },  /* [/ActiveEcuC/Com/ComConfig/GearLvrPos_D_Actl_8c4ca771, /ActiveEcuC/Com/ComConfig/TransGearData_FD1_oFD1_CAN_3abd61be, /ActiveEcuC/Com/ComConfig/TransGearData_FD1_oFD1_CAN_3abd61bePduBased] */
  { /*    22 */          3U,          38U },  /* [/ActiveEcuC/Com/ComConfig/PwPckTq_D_Stat_e6deed9e, /ActiveEcuC/Com/ComConfig/VehicleOperatingModes_FD1_oFD1_CAN_3abd61be, /ActiveEcuC/Com/ComConfig/VehicleOperatingModes_FD1_oFD1_CAN_3abd61bePduBased] */
  { /*    23 */          4U,          39U },  /* [/ActiveEcuC/Com/ComConfig/WhlDirFl_D_Actl_91fa0768, /ActiveEcuC/Com/ComConfig/WheelData_FD1_oFD1_CAN_3abd61be, /ActiveEcuC/Com/ComConfig/WheelData_FD1_oFD1_CAN_3abd61bePduBased] */
  { /*    24 */          3U,          40U },  /* [/ActiveEcuC/Com/ComConfig/WhlFl_W_Meas_5a620481, /ActiveEcuC/Com/ComConfig/WheelSpeed_FD1_oFD1_CAN_3abd61be, /ActiveEcuC/Com/ComConfig/WheelSpeed_FD1_oFD1_CAN_3abd61bePduBased] */
  { /*    25 */          3U,          41U }   /* [/ActiveEcuC/Com/ComConfig/VehYaw_W_Actl_f318059c, /ActiveEcuC/Com/ComConfig/Yaw_Data_FD1_oFD1_CAN_3abd61be, /ActiveEcuC/Com/ComConfig/Yaw_Data_FD1_oFD1_CAN_3abd61bePduBased] */
};
#define COM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Com_TxFilterInitValueUInt8
**********************************************************************************************************************/
/** 
  \var    Com_TxFilterInitValueUInt8
  \brief  Contains the initial values used for initialization of the old value to evaluate the filter algorithm. (BOOLEAN, UINT8)
*/ 
#define COM_START_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(Com_TxFilterInitValueUInt8Type, COM_CONST) Com_TxFilterInitValueUInt8[6] = {
  /* Index    TxFilterInitValueUInt8      Referable Keys */
  /*     0 */                  0x01U,  /* [/ActiveEcuC/Com/ComConfig/EsaOn_B_Stat_51142c79, /ActiveEcuC/Com/ComConfig/TrailerAid_Data2_FD1_oFD1_CAN_3abd61be] */
  /*     1 */                  0x00U,  /* [/ActiveEcuC/Com/ComConfig/LatCtlLim_D_Stat_51142c79, /ActiveEcuC/Com/ComConfig/TrailerAid_Data2_FD1_oFD1_CAN_3abd61be] */
  /*     2 */                  0x00U,  /* [/ActiveEcuC/Com/ComConfig/LatCtlSte_D_Stat_51142c79, /ActiveEcuC/Com/ComConfig/TrailerAid_Data2_FD1_oFD1_CAN_3abd61be] */
  /*     3 */                  0x00U,  /* [/ActiveEcuC/Com/ComConfig/SelDrvMdeSte_D_Stat_51142c79, /ActiveEcuC/Com/ComConfig/TrailerAid_Data2_FD1_oFD1_CAN_3abd61be] */
  /*     4 */                  0x00U,  /* [/ActiveEcuC/Com/ComConfig/TrlrAidEnbl_D2_Stat_51142c79, /ActiveEcuC/Com/ComConfig/TrailerAid_Data2_FD1_oFD1_CAN_3abd61be] */
  /*     5 */                  0x00U   /* [/ActiveEcuC/Com/ComConfig/TrlrAidMsgTxt_D2_Rq_51142c79, /ActiveEcuC/Com/ComConfig/TrailerAid_Data2_FD1_oFD1_CAN_3abd61be] */
};
#define COM_STOP_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Com_TxModeFalse
**********************************************************************************************************************/
/** 
  \var    Com_TxModeFalse
  \brief  Contains all relevant information for transmission mode false.
  \details
  Element       Description
  Periodic      TRUE if transmission mode contains a cyclic part.
  TimePeriod    Cycle time factor.
*/ 
#define COM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(Com_TxModeFalseType, COM_CONST) Com_TxModeFalse[4] = {
    /* Index    Periodic  TimePeriod        Referable Keys */
  { /*     0 */     TRUE,         2U },  /* [/ActiveEcuC/Com/ComConfig/EPAS_INFO_FD1_oFD1_CAN_3abd61be] */
  { /*     1 */     TRUE,         3U },  /* [/ActiveEcuC/Com/ComConfig/Lane_Assist_Data3_FD1_oFD1_CAN_3abd61be] */
  { /*     2 */     TRUE,         1U },  /* [/ActiveEcuC/Com/ComConfig/SteeringPinion_Data_FD1_oFD1_CAN_3abd61be] */
  { /*     3 */     TRUE,       100U }   /* [/ActiveEcuC/Com/ComConfig/TrailerAid_Data2_FD1_oFD1_CAN_3abd61be] */
};
#define COM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Com_TxModeInfo
**********************************************************************************************************************/
/** 
  \var    Com_TxModeInfo
  \brief  Contains all relevant information for transmission mode handling.
  \details
  Element                                Description
  TxModeFalseUsed                        TRUE, if the 0:1 relation has minimum 1 relation pointing to Com_TxModeFalse
  MinimumDelay                           Minimum delay factor of the Tx I-PDU.
  TxSigInfoFilterInitValueIndEndIdx      the end index of the 0:n relation pointing to Com_TxSigInfoFilterInitValueInd
  TxSigInfoFilterInitValueIndStartIdx    the start index of the 0:n relation pointing to Com_TxSigInfoFilterInitValueInd
*/ 
#define COM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(Com_TxModeInfoType, COM_CONST) Com_TxModeInfo[4] = {
    /* Index    TxModeFalseUsed  MinimumDelay  TxSigInfoFilterInitValueIndEndIdx                     TxSigInfoFilterInitValueIndStartIdx                           Referable Keys */
  { /*     0 */            TRUE,           2U, COM_NO_TXSIGINFOFILTERINITVALUEINDENDIDXOFTXMODEINFO, COM_NO_TXSIGINFOFILTERINITVALUEINDSTARTIDXOFTXMODEINFO },  /* [/ActiveEcuC/Com/ComConfig/EPAS_INFO_FD1_oFD1_CAN_3abd61be] */
  { /*     1 */            TRUE,           2U, COM_NO_TXSIGINFOFILTERINITVALUEINDENDIDXOFTXMODEINFO, COM_NO_TXSIGINFOFILTERINITVALUEINDSTARTIDXOFTXMODEINFO },  /* [/ActiveEcuC/Com/ComConfig/Lane_Assist_Data3_FD1_oFD1_CAN_3abd61be] */
  { /*     2 */            TRUE,           0U, COM_NO_TXSIGINFOFILTERINITVALUEINDENDIDXOFTXMODEINFO, COM_NO_TXSIGINFOFILTERINITVALUEINDSTARTIDXOFTXMODEINFO },  /* [/ActiveEcuC/Com/ComConfig/SteeringPinion_Data_FD1_oFD1_CAN_3abd61be] */
  { /*     3 */            TRUE,           3U,                                                   6U,                                                     0U }   /* [/ActiveEcuC/Com/ComConfig/TrailerAid_Data2_FD1_oFD1_CAN_3abd61be] */
};
#define COM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Com_TxModeTrue
**********************************************************************************************************************/
/** 
  \var    Com_TxModeTrue
  \brief  Contains all relevant information for transmission mode true.
  \details
  Element       Description
  Periodic      TRUE if transmission mode contains a cyclic part.
  TimePeriod    Cycle time factor.
*/ 
#define COM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(Com_TxModeTrueType, COM_CONST) Com_TxModeTrue[4] = {
    /* Index    Periodic  TimePeriod        Referable Keys */
  { /*     0 */     TRUE,         2U },  /* [/ActiveEcuC/Com/ComConfig/EPAS_INFO_FD1_oFD1_CAN_3abd61be] */
  { /*     1 */     TRUE,         3U },  /* [/ActiveEcuC/Com/ComConfig/Lane_Assist_Data3_FD1_oFD1_CAN_3abd61be] */
  { /*     2 */     TRUE,         1U },  /* [/ActiveEcuC/Com/ComConfig/SteeringPinion_Data_FD1_oFD1_CAN_3abd61be] */
  { /*     3 */     TRUE,       100U }   /* [/ActiveEcuC/Com/ComConfig/TrailerAid_Data2_FD1_oFD1_CAN_3abd61be] */
};
#define COM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Com_TxPduGrpInfo
**********************************************************************************************************************/
/** 
  \var    Com_TxPduGrpInfo
  \brief  Contains all I-PDU-Group relevant information for Tx I-PDUs.
  \details
  Element                 Description
  PduGrpVectorStartIdx    the start index of the 0:n relation pointing to Com_PduGrpVector
*/ 
#define COM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(Com_TxPduGrpInfoType, COM_CONST) Com_TxPduGrpInfo[4] = {
    /* Index    PduGrpVectorStartIdx */
  { /*     0 */                   0U },
  { /*     1 */                   0U },
  { /*     2 */                   0U },
  { /*     3 */                   0U }
};
#define COM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Com_TxPduInfo
**********************************************************************************************************************/
/** 
  \var    Com_TxPduInfo
  \brief  Contains all relevant information for Tx I-PDUs.
  \details
  Element                   Description
  TxPduInitValueUsed        TRUE, if the 0:n relation has 1 relation pointing to Com_TxPduInitValue
  ExternalId                External ID used to call PduR_ComTransmit().
  TxBufferLength            the number of relations pointing to Com_TxBuffer
  TxPduInitValueEndIdx      the end index of the 0:n relation pointing to Com_TxPduInitValue
  TxPduInitValueStartIdx    the start index of the 0:n relation pointing to Com_TxPduInitValue
*/ 
#define COM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(Com_TxPduInfoType, COM_CONST) Com_TxPduInfo[4] = {
    /* Index    TxPduInitValueUsed  ExternalId                                                       TxBufferLength  TxPduInitValueEndIdx  TxPduInitValueStartIdx        Referable Keys */
  { /*     0 */               TRUE,           PduRConf_PduRSrcPdu_SRC_Can_PT_EPAS_INFO_FD1_3290b631,             8U,                   8U,                     0U },  /* [/ActiveEcuC/Com/ComConfig/EPAS_INFO_FD1_oFD1_CAN_3abd61be, /ActiveEcuC/Com/ComConfig/PSCM_FD_oFD1_CAN_Tx_fcef2243] */
  { /*     1 */               TRUE,   PduRConf_PduRSrcPdu_SRC_Can_PT_Lane_Assist_Data3_FD1_3290b631,             8U,                  16U,                     8U },  /* [/ActiveEcuC/Com/ComConfig/Lane_Assist_Data3_FD1_oFD1_CAN_3abd61be, /ActiveEcuC/Com/ComConfig/PSCM_FD_oFD1_CAN_Tx_fcef2243] */
  { /*     2 */               TRUE, PduRConf_PduRSrcPdu_SRC_Can_PT_SteeringPinion_Data_FD1_3290b631,             8U,                  24U,                    16U },  /* [/ActiveEcuC/Com/ComConfig/SteeringPinion_Data_FD1_oFD1_CAN_3abd61be, /ActiveEcuC/Com/ComConfig/PSCM_FD_oFD1_CAN_Tx_fcef2243] */
  { /*     3 */               TRUE,    PduRConf_PduRSrcPdu_SRC_Can_PT_TrailerAid_Data2_FD1_3290b631,             8U,                  32U,                    24U }   /* [/ActiveEcuC/Com/ComConfig/TrailerAid_Data2_FD1_oFD1_CAN_3abd61be, /ActiveEcuC/Com/ComConfig/PSCM_FD_oFD1_CAN_Tx_fcef2243] */
};
#define COM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Com_TxPduInitValue
**********************************************************************************************************************/
/** 
  \var    Com_TxPduInitValue
  \brief  Initial values used for Tx I-PDU buffer initialization.
*/ 
#define COM_START_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(Com_TxPduInitValueType, COM_CONST) Com_TxPduInitValue[32] = {
  /* Index    TxPduInitValue      Referable Keys */
  /*     0 */          0xFEU,  /* [/ActiveEcuC/Com/ComConfig/EPAS_INFO_FD1_oFD1_CAN_3abd61be] */
  /*     1 */          0x00U,  /* [/ActiveEcuC/Com/ComConfig/EPAS_INFO_FD1_oFD1_CAN_3abd61be] */
  /*     2 */          0x3FU,  /* [/ActiveEcuC/Com/ComConfig/EPAS_INFO_FD1_oFD1_CAN_3abd61be] */
  /*     3 */          0xFCU,  /* [/ActiveEcuC/Com/ComConfig/EPAS_INFO_FD1_oFD1_CAN_3abd61be] */
  /*     4 */          0xFFU,  /* [/ActiveEcuC/Com/ComConfig/EPAS_INFO_FD1_oFD1_CAN_3abd61be] */
  /*     5 */          0x80U,  /* [/ActiveEcuC/Com/ComConfig/EPAS_INFO_FD1_oFD1_CAN_3abd61be] */
  /*     6 */          0x00U,  /* [/ActiveEcuC/Com/ComConfig/EPAS_INFO_FD1_oFD1_CAN_3abd61be] */
  /*     7 */          0xFFU,  /* [/ActiveEcuC/Com/ComConfig/EPAS_INFO_FD1_oFD1_CAN_3abd61be] */
  /*     8 */          0x88U,  /* [/ActiveEcuC/Com/ComConfig/Lane_Assist_Data3_FD1_oFD1_CAN_3abd61be] */
  /*     9 */          0x00U,  /* [/ActiveEcuC/Com/ComConfig/Lane_Assist_Data3_FD1_oFD1_CAN_3abd61be] */
  /*    10 */          0x00U,  /* [/ActiveEcuC/Com/ComConfig/Lane_Assist_Data3_FD1_oFD1_CAN_3abd61be] */
  /*    11 */          0x80U,  /* [/ActiveEcuC/Com/ComConfig/Lane_Assist_Data3_FD1_oFD1_CAN_3abd61be] */
  /*    12 */          0x00U,  /* [/ActiveEcuC/Com/ComConfig/Lane_Assist_Data3_FD1_oFD1_CAN_3abd61be] */
  /*    13 */          0x00U,  /* [/ActiveEcuC/Com/ComConfig/Lane_Assist_Data3_FD1_oFD1_CAN_3abd61be] */
  /*    14 */          0x00U,  /* [/ActiveEcuC/Com/ComConfig/Lane_Assist_Data3_FD1_oFD1_CAN_3abd61be] */
  /*    15 */          0x00U,  /* [/ActiveEcuC/Com/ComConfig/Lane_Assist_Data3_FD1_oFD1_CAN_3abd61be] */
  /*    16 */          0xFFU,  /* [/ActiveEcuC/Com/ComConfig/SteeringPinion_Data_FD1_oFD1_CAN_3abd61be] */
  /*    17 */          0xFFU,  /* [/ActiveEcuC/Com/ComConfig/SteeringPinion_Data_FD1_oFD1_CAN_3abd61be] */
  /*    18 */          0x3EU,  /* [/ActiveEcuC/Com/ComConfig/SteeringPinion_Data_FD1_oFD1_CAN_3abd61be] */
  /*    19 */          0x80U,  /* [/ActiveEcuC/Com/ComConfig/SteeringPinion_Data_FD1_oFD1_CAN_3abd61be] */
  /*    20 */          0x00U,  /* [/ActiveEcuC/Com/ComConfig/SteeringPinion_Data_FD1_oFD1_CAN_3abd61be] */
  /*    21 */          0x04U,  /* [/ActiveEcuC/Com/ComConfig/SteeringPinion_Data_FD1_oFD1_CAN_3abd61be] */
  /*    22 */          0x00U,  /* [/ActiveEcuC/Com/ComConfig/SteeringPinion_Data_FD1_oFD1_CAN_3abd61be] */
  /*    23 */          0x00U,  /* [/ActiveEcuC/Com/ComConfig/SteeringPinion_Data_FD1_oFD1_CAN_3abd61be] */
  /*    24 */          0x00U,  /* [/ActiveEcuC/Com/ComConfig/TrailerAid_Data2_FD1_oFD1_CAN_3abd61be] */
  /*    25 */          0x00U,  /* [/ActiveEcuC/Com/ComConfig/TrailerAid_Data2_FD1_oFD1_CAN_3abd61be] */
  /*    26 */          0x80U,  /* [/ActiveEcuC/Com/ComConfig/TrailerAid_Data2_FD1_oFD1_CAN_3abd61be] */
  /*    27 */          0x00U,  /* [/ActiveEcuC/Com/ComConfig/TrailerAid_Data2_FD1_oFD1_CAN_3abd61be] */
  /*    28 */          0x80U,  /* [/ActiveEcuC/Com/ComConfig/TrailerAid_Data2_FD1_oFD1_CAN_3abd61be] */
  /*    29 */          0x00U,  /* [/ActiveEcuC/Com/ComConfig/TrailerAid_Data2_FD1_oFD1_CAN_3abd61be] */
  /*    30 */          0x00U,  /* [/ActiveEcuC/Com/ComConfig/TrailerAid_Data2_FD1_oFD1_CAN_3abd61be] */
  /*    31 */          0x00U   /* [/ActiveEcuC/Com/ComConfig/TrailerAid_Data2_FD1_oFD1_CAN_3abd61be] */
};
#define COM_STOP_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Com_TxSigInfo
**********************************************************************************************************************/
/** 
  \var    Com_TxSigInfo
  \brief  Contains all relevant information for Tx signals and group signals.
  \details
  Element                   Description
  OnChangeUsed              TRUE, if the 0:1 relation has minimum 1 relation pointing to Com_FilterInfo_UInt8,Com_FilterInfo_UInt64,Com_FilterInfo_UInt16,Com_FilterInfo_UInt8_N,Com_FilterInfo_SInt64,Com_FilterInfo_SInt16,Com_FilterInfo_SInt8,Com_FilterInfo_UInt32,Com_FilterInfo_SInt32
  ApplType                  Application data type.
  BitLength                 Bit length of the signal or group signal.
  BitPosition               Little endian bit position of the signal or group signal within the I-PDU.
  BusAcc                    BUS access algorithm for signal or group signal packing / un-packing.
  ByteLength                Byte length of the signal or group signal.
  BytePosition              Little endian byte position of the signal or group signal within the I-PDU.
  FilterInitValueIdx        the index of the 0:1 relation pointing to Com_TxFilterInitValueUInt8,Com_TxFilterInitValueUInt16,Com_TxFilterInitValueUInt32,Com_TxFilterInitValueUInt64,Com_TxFilterInitValueSInt8,Com_TxFilterInitValueSInt16,Com_TxFilterInitValueSInt32,Com_TxFilterInitValueSInt64
  OnChangeIdx               the index of the 0:1 relation pointing to Com_FilterInfo_UInt8,Com_FilterInfo_UInt64,Com_FilterInfo_UInt16,Com_FilterInfo_UInt8_N,Com_FilterInfo_SInt64,Com_FilterInfo_SInt16,Com_FilterInfo_SInt8,Com_FilterInfo_UInt32,Com_FilterInfo_SInt32
  StartByteInPduPosition    Start Byte position of the signal or group signal within the I-PDU.
  TxBufferEndIdx            the end index of the 0:n relation pointing to Com_TxBuffer
  TxBufferStartIdx          the start index of the 0:n relation pointing to Com_TxBuffer
  TxPduInfoIdx              the index of the 1:1 relation pointing to Com_TxPduInfo
*/ 
#define COM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(Com_TxSigInfoType, COM_CONST) Com_TxSigInfo[42] = {
    /* Index    OnChangeUsed  ApplType                        BitLength  BitPosition  BusAcc                              ByteLength  BytePosition  FilterInitValueIdx                    OnChangeIdx                    StartByteInPduPosition  TxBufferEndIdx  TxBufferStartIdx  TxPduInfoIdx        Referable Keys */
  { /*     0 */        FALSE,  COM_UINT8_APPLTYPEOFTXSIGINFO,        1U,         10U,         COM_NBIT_BUSACCOFTXSIGINFO,         0U,           1U, COM_NO_FILTERINITVALUEIDXOFTXSIGINFO, COM_NO_ONCHANGEIDXOFTXSIGINFO,                     1U,             2U,               1U,           0U },  /* [/ActiveEcuC/Com/ComConfig/DrvSteActv_B_Stat_635efcb3, /ActiveEcuC/Com/ComConfig/EPAS_INFO_FD1_oFD1_CAN_3abd61be] */
  { /*     1 */        FALSE,  COM_UINT8_APPLTYPEOFTXSIGINFO,        8U,         40U,         COM_BYTE_BUSACCOFTXSIGINFO,         1U,           5U, COM_NO_FILTERINITVALUEIDXOFTXSIGINFO, COM_NO_ONCHANGEIDXOFTXSIGINFO,                     5U,             6U,               5U,           0U },  /* [/ActiveEcuC/Com/ComConfig/DrvSte_Tq_Actl_635efcb3, /ActiveEcuC/Com/ComConfig/EPAS_INFO_FD1_oFD1_CAN_3abd61be] */
  { /*     2 */        FALSE,  COM_UINT8_APPLTYPEOFTXSIGINFO,        2U,          8U,         COM_NBIT_BUSACCOFTXSIGINFO,         0U,           1U, COM_NO_FILTERINITVALUEIDXOFTXSIGINFO, COM_NO_ONCHANGEIDXOFTXSIGINFO,                     1U,             2U,               1U,           0U },  /* [/ActiveEcuC/Com/ComConfig/EPAS_Failure_635efcb3, /ActiveEcuC/Com/ComConfig/EPAS_INFO_FD1_oFD1_CAN_3abd61be] */
  { /*     3 */         TRUE,  COM_UINT8_APPLTYPEOFTXSIGINFO,        1U,         23U,         COM_NBIT_BUSACCOFTXSIGINFO,         0U,           2U,                                   0U,                            0U,                     2U,            27U,              26U,           3U },  /* [/ActiveEcuC/Com/ComConfig/EsaOn_B_Stat_51142c79, /ActiveEcuC/Com/ComConfig/TrailerAid_Data2_FD1_oFD1_CAN_3abd61be, /ActiveEcuC/Com/ComConfig/TrailerAid_Data2_FD1_oFD1_CAN_3abd61beTxFilterInitValue] */
  { /*     4 */        FALSE, COM_UINT16_APPLTYPEOFTXSIGINFO,        9U,         15U, COM_NBITNBYTE_SW_BUSACCOFTXSIGINFO,         1U,           1U, COM_NO_FILTERINITVALUEIDXOFTXSIGINFO, COM_NO_ONCHANGEIDXOFTXSIGINFO,                     0U,            26U,              24U,           3U },  /* [/ActiveEcuC/Com/ComConfig/HitchToTrlrAxle_L_Calc_51142c79, /ActiveEcuC/Com/ComConfig/TrailerAid_Data2_FD1_oFD1_CAN_3abd61be] */
  { /*     5 */        FALSE,  COM_UINT8_APPLTYPEOFTXSIGINFO,        2U,          4U,         COM_NBIT_BUSACCOFTXSIGINFO,         0U,           0U, COM_NO_FILTERINITVALUEIDXOFTXSIGINFO, COM_NO_ONCHANGEIDXOFTXSIGINFO,                     0U,             9U,               8U,           1U },  /* [/ActiveEcuC/Com/ComConfig/LaActAvail_D_Actl_3724073d, /ActiveEcuC/Com/ComConfig/Lane_Assist_Data3_FD1_oFD1_CAN_3abd61be] */
  { /*     6 */        FALSE,  COM_UINT8_APPLTYPEOFTXSIGINFO,        1U,          6U,         COM_NBIT_BUSACCOFTXSIGINFO,         0U,           0U, COM_NO_FILTERINITVALUEIDXOFTXSIGINFO, COM_NO_ONCHANGEIDXOFTXSIGINFO,                     0U,             9U,               8U,           1U },  /* [/ActiveEcuC/Com/ComConfig/LaActDeny_B_Actl_3724073d, /ActiveEcuC/Com/ComConfig/Lane_Assist_Data3_FD1_oFD1_CAN_3abd61be] */
  { /*     7 */        FALSE,  COM_UINT8_APPLTYPEOFTXSIGINFO,        1U,          7U,         COM_NBIT_BUSACCOFTXSIGINFO,         0U,           0U, COM_NO_FILTERINITVALUEIDXOFTXSIGINFO, COM_NO_ONCHANGEIDXOFTXSIGINFO,                     0U,             9U,               8U,           1U },  /* [/ActiveEcuC/Com/ComConfig/LaHandsOff_B_Actl_3724073d, /ActiveEcuC/Com/ComConfig/Lane_Assist_Data3_FD1_oFD1_CAN_3abd61be] */
  { /*     8 */         TRUE,  COM_UINT8_APPLTYPEOFTXSIGINFO,        2U,         21U,         COM_NBIT_BUSACCOFTXSIGINFO,         0U,           2U,                                   1U,                            0U,                     2U,            27U,              26U,           3U },  /* [/ActiveEcuC/Com/ComConfig/LatCtlLim_D_Stat_51142c79, /ActiveEcuC/Com/ComConfig/TrailerAid_Data2_FD1_oFD1_CAN_3abd61be, /ActiveEcuC/Com/ComConfig/TrailerAid_Data2_FD1_oFD1_CAN_3abd61beTxFilterInitValue] */
  { /*     9 */         TRUE,  COM_UINT8_APPLTYPEOFTXSIGINFO,        3U,         18U,         COM_NBIT_BUSACCOFTXSIGINFO,         0U,           2U,                                   2U,                            0U,                     2U,            27U,              26U,           3U },  /* [/ActiveEcuC/Com/ComConfig/LatCtlSte_D_Stat_51142c79, /ActiveEcuC/Com/ComConfig/TrailerAid_Data2_FD1_oFD1_CAN_3abd61be, /ActiveEcuC/Com/ComConfig/TrailerAid_Data2_FD1_oFD1_CAN_3abd61beTxFilterInitValue] */
  { /*    10 */        FALSE,  COM_UINT8_APPLTYPEOFTXSIGINFO,        2U,          0U,         COM_NBIT_BUSACCOFTXSIGINFO,         0U,           0U, COM_NO_FILTERINITVALUEIDXOFTXSIGINFO, COM_NO_ONCHANGEIDXOFTXSIGINFO,                     0U,             9U,               8U,           1U },  /* [/ActiveEcuC/Com/ComConfig/LsmcBrkDecelEnbl_D_Rq_3724073d, /ActiveEcuC/Com/ComConfig/Lane_Assist_Data3_FD1_oFD1_CAN_3abd61be] */
  { /*    11 */        FALSE, COM_UINT16_APPLTYPEOFTXSIGINFO,       13U,         19U, COM_NBITNBYTE_SW_BUSACCOFTXSIGINFO,         1U,           2U, COM_NO_FILTERINITVALUEIDXOFTXSIGINFO, COM_NO_ONCHANGEIDXOFTXSIGINFO,                     1U,            11U,               9U,           1U },  /* [/ActiveEcuC/Com/ComConfig/LsmcBrk_Tq_Rq_3724073d, /ActiveEcuC/Com/ComConfig/Lane_Assist_Data3_FD1_oFD1_CAN_3abd61be] */
  { /*    12 */        FALSE,  COM_UINT8_APPLTYPEOFTXSIGINFO,        2U,         22U,         COM_NBIT_BUSACCOFTXSIGINFO,         0U,           2U, COM_NO_FILTERINITVALUEIDXOFTXSIGINFO, COM_NO_ONCHANGEIDXOFTXSIGINFO,                     2U,             3U,               2U,           0U },  /* [/ActiveEcuC/Com/ComConfig/SAPPAngleControlStat1_635efcb3, /ActiveEcuC/Com/ComConfig/EPAS_INFO_FD1_oFD1_CAN_3abd61be] */
  { /*    13 */        FALSE,  COM_UINT8_APPLTYPEOFTXSIGINFO,        1U,         11U,         COM_NBIT_BUSACCOFTXSIGINFO,         0U,           1U, COM_NO_FILTERINITVALUEIDXOFTXSIGINFO, COM_NO_ONCHANGEIDXOFTXSIGINFO,                     1U,             2U,               1U,           0U },  /* [/ActiveEcuC/Com/ComConfig/SAPPAngleControlStat2_635efcb3, /ActiveEcuC/Com/ComConfig/EPAS_INFO_FD1_oFD1_CAN_3abd61be] */
  { /*    14 */        FALSE,  COM_UINT8_APPLTYPEOFTXSIGINFO,        1U,         12U,         COM_NBIT_BUSACCOFTXSIGINFO,         0U,           1U, COM_NO_FILTERINITVALUEIDXOFTXSIGINFO, COM_NO_ONCHANGEIDXOFTXSIGINFO,                     1U,             2U,               1U,           0U },  /* [/ActiveEcuC/Com/ComConfig/SAPPAngleControlStat3_635efcb3, /ActiveEcuC/Com/ComConfig/EPAS_INFO_FD1_oFD1_CAN_3abd61be] */
  { /*    15 */        FALSE,  COM_UINT8_APPLTYPEOFTXSIGINFO,        1U,         13U,         COM_NBIT_BUSACCOFTXSIGINFO,         0U,           1U, COM_NO_FILTERINITVALUEIDXOFTXSIGINFO, COM_NO_ONCHANGEIDXOFTXSIGINFO,                     1U,             2U,               1U,           0U },  /* [/ActiveEcuC/Com/ComConfig/SAPPAngleControlStat4_635efcb3, /ActiveEcuC/Com/ComConfig/EPAS_INFO_FD1_oFD1_CAN_3abd61be] */
  { /*    16 */        FALSE,  COM_UINT8_APPLTYPEOFTXSIGINFO,        1U,         14U,         COM_NBIT_BUSACCOFTXSIGINFO,         0U,           1U, COM_NO_FILTERINITVALUEIDXOFTXSIGINFO, COM_NO_ONCHANGEIDXOFTXSIGINFO,                     1U,             2U,               1U,           0U },  /* [/ActiveEcuC/Com/ComConfig/SAPPAngleControlStat5_635efcb3, /ActiveEcuC/Com/ComConfig/EPAS_INFO_FD1_oFD1_CAN_3abd61be] */
  { /*    17 */        FALSE,  COM_UINT8_APPLTYPEOFTXSIGINFO,        1U,         15U,         COM_NBIT_BUSACCOFTXSIGINFO,         0U,           1U, COM_NO_FILTERINITVALUEIDXOFTXSIGINFO, COM_NO_ONCHANGEIDXOFTXSIGINFO,                     1U,             2U,               1U,           0U },  /* [/ActiveEcuC/Com/ComConfig/SAPPAngleControlStat6_635efcb3, /ActiveEcuC/Com/ComConfig/EPAS_INFO_FD1_oFD1_CAN_3abd61be] */
  { /*    18 */         TRUE,  COM_UINT8_APPLTYPEOFTXSIGINFO,        2U,         16U,         COM_NBIT_BUSACCOFTXSIGINFO,         0U,           2U,                                   3U,                            0U,                     2U,            27U,              26U,           3U },  /* [/ActiveEcuC/Com/ComConfig/SelDrvMdeSte_D_Stat_51142c79, /ActiveEcuC/Com/ComConfig/TrailerAid_Data2_FD1_oFD1_CAN_3abd61be, /ActiveEcuC/Com/ComConfig/TrailerAid_Data2_FD1_oFD1_CAN_3abd61beTxFilterInitValue] */
  { /*    19 */        FALSE,  COM_UINT8_APPLTYPEOFTXSIGINFO,        3U,         53U,         COM_NBIT_BUSACCOFTXSIGINFO,         0U,           6U, COM_NO_FILTERINITVALUEIDXOFTXSIGINFO, COM_NO_ONCHANGEIDXOFTXSIGINFO,                     6U,             7U,               6U,           0U },  /* [/ActiveEcuC/Com/ComConfig/SteMdule_D_Stat_635efcb3, /ActiveEcuC/Com/ComConfig/EPAS_INFO_FD1_oFD1_CAN_3abd61be] */
  { /*    20 */        FALSE, COM_UINT16_APPLTYPEOFTXSIGINFO,       12U,         26U, COM_NBITNBYTE_SW_BUSACCOFTXSIGINFO,         1U,           3U, COM_NO_FILTERINITVALUEIDXOFTXSIGINFO, COM_NO_ONCHANGEIDXOFTXSIGINFO,                     2U,             4U,               2U,           0U },  /* [/ActiveEcuC/Com/ComConfig/SteMdule_I_Est_635efcb3, /ActiveEcuC/Com/ComConfig/EPAS_INFO_FD1_oFD1_CAN_3abd61be] */
  { /*    21 */        FALSE,  COM_UINT8_APPLTYPEOFTXSIGINFO,        8U,         32U,         COM_BYTE_BUSACCOFTXSIGINFO,         1U,           4U, COM_NO_FILTERINITVALUEIDXOFTXSIGINFO, COM_NO_ONCHANGEIDXOFTXSIGINFO,                     4U,             5U,               4U,           0U },  /* [/ActiveEcuC/Com/ComConfig/SteMdule_U_Meas_635efcb3, /ActiveEcuC/Com/ComConfig/EPAS_INFO_FD1_oFD1_CAN_3abd61be] */
  { /*    22 */        FALSE,  COM_UINT8_APPLTYPEOFTXSIGINFO,        4U,         44U,         COM_NBIT_BUSACCOFTXSIGINFO,         0U,           5U, COM_NO_FILTERINITVALUEIDXOFTXSIGINFO, COM_NO_ONCHANGEIDXOFTXSIGINFO,                     5U,            22U,              21U,           2U },  /* [/ActiveEcuC/Com/ComConfig/StePinAn_No_Cnt_837112cd, /ActiveEcuC/Com/ComConfig/SteeringPinion_Data_FD1_oFD1_CAN_3abd61be] */
  { /*    23 */        FALSE,  COM_UINT8_APPLTYPEOFTXSIGINFO,        8U,         32U,         COM_BYTE_BUSACCOFTXSIGINFO,         1U,           4U, COM_NO_FILTERINITVALUEIDXOFTXSIGINFO, COM_NO_ONCHANGEIDXOFTXSIGINFO,                     4U,            21U,              20U,           2U },  /* [/ActiveEcuC/Com/ComConfig/StePinAn_No_Cs_837112cd, /ActiveEcuC/Com/ComConfig/SteeringPinion_Data_FD1_oFD1_CAN_3abd61be] */
  { /*    24 */        FALSE,  COM_UINT8_APPLTYPEOFTXSIGINFO,        2U,         42U,         COM_NBIT_BUSACCOFTXSIGINFO,         0U,           5U, COM_NO_FILTERINITVALUEIDXOFTXSIGINFO, COM_NO_ONCHANGEIDXOFTXSIGINFO,                     5U,            22U,              21U,           2U },  /* [/ActiveEcuC/Com/ComConfig/StePinCompAnEst_D_Qf_837112cd, /ActiveEcuC/Com/ComConfig/SteeringPinion_Data_FD1_oFD1_CAN_3abd61be] */
  { /*    25 */        FALSE, COM_UINT16_APPLTYPEOFTXSIGINFO,       15U,         24U, COM_NBITNBYTE_SW_BUSACCOFTXSIGINFO,         1U,           3U, COM_NO_FILTERINITVALUEIDXOFTXSIGINFO, COM_NO_ONCHANGEIDXOFTXSIGINFO,                     2U,            20U,              18U,           2U },  /* [/ActiveEcuC/Com/ComConfig/StePinComp_An_Est_837112cd, /ActiveEcuC/Com/ComConfig/SteeringPinion_Data_FD1_oFD1_CAN_3abd61be] */
  { /*    26 */        FALSE, COM_UINT16_APPLTYPEOFTXSIGINFO,       16U,          8U,     COM_NBYTE_SW_BUSACCOFTXSIGINFO,         2U,           1U, COM_NO_FILTERINITVALUEIDXOFTXSIGINFO, COM_NO_ONCHANGEIDXOFTXSIGINFO,                     0U,            18U,              16U,           2U },  /* [/ActiveEcuC/Com/ComConfig/StePinRelInit_An_Sns_837112cd, /ActiveEcuC/Com/ComConfig/SteeringPinion_Data_FD1_oFD1_CAN_3abd61be] */
  { /*    27 */        FALSE,  COM_UINT8_APPLTYPEOFTXSIGINFO,        1U,         23U,         COM_NBIT_BUSACCOFTXSIGINFO,         0U,           2U, COM_NO_FILTERINITVALUEIDXOFTXSIGINFO, COM_NO_ONCHANGEIDXOFTXSIGINFO,                     2U,            19U,              18U,           2U },  /* [/ActiveEcuC/Com/ComConfig/StePw_B_Rq_837112cd, /ActiveEcuC/Com/ComConfig/SteeringPinion_Data_FD1_oFD1_CAN_3abd61be] */
  { /*    28 */        FALSE,  COM_UINT8_APPLTYPEOFTXSIGINFO,        8U,          0U,         COM_BYTE_BUSACCOFTXSIGINFO,         1U,           0U, COM_NO_FILTERINITVALUEIDXOFTXSIGINFO, COM_NO_ONCHANGEIDXOFTXSIGINFO,                     0U,             1U,               0U,           0U },  /* [/ActiveEcuC/Com/ComConfig/SteeringColumnTorque_635efcb3, /ActiveEcuC/Com/ComConfig/EPAS_INFO_FD1_oFD1_CAN_3abd61be] */
  { /*    29 */        FALSE,  COM_UINT8_APPLTYPEOFTXSIGINFO,        1U,          3U,         COM_NBIT_BUSACCOFTXSIGINFO,         0U,           0U, COM_NO_FILTERINITVALUEIDXOFTXSIGINFO, COM_NO_ONCHANGEIDXOFTXSIGINFO,                     0U,             9U,               8U,           1U },  /* [/ActiveEcuC/Com/ComConfig/TjaHandsOnCnfdnc_B_Est_3724073d, /ActiveEcuC/Com/ComConfig/Lane_Assist_Data3_FD1_oFD1_CAN_3abd61be] */
  { /*    30 */         TRUE,  COM_UINT8_APPLTYPEOFTXSIGINFO,        3U,         29U,         COM_NBIT_BUSACCOFTXSIGINFO,         0U,           3U,                                   4U,                            0U,                     3U,            28U,              27U,           3U },  /* [/ActiveEcuC/Com/ComConfig/TrlrAidEnbl_D2_Stat_51142c79, /ActiveEcuC/Com/ComConfig/TrailerAid_Data2_FD1_oFD1_CAN_3abd61be, /ActiveEcuC/Com/ComConfig/TrailerAid_Data2_FD1_oFD1_CAN_3abd61beTxFilterInitValue] */
  { /*    31 */         TRUE,  COM_UINT8_APPLTYPEOFTXSIGINFO,        6U,          9U,         COM_NBIT_BUSACCOFTXSIGINFO,         0U,           1U,                                   5U,                            0U,                     1U,            26U,              25U,           3U },  /* [/ActiveEcuC/Com/ComConfig/TrlrAidMsgTxt_D2_Rq_51142c79, /ActiveEcuC/Com/ComConfig/TrailerAid_Data2_FD1_oFD1_CAN_3abd61be, /ActiveEcuC/Com/ComConfig/TrailerAid_Data2_FD1_oFD1_CAN_3abd61beTxFilterInitValue] */
  { /*    32 */        FALSE,  COM_UINT8_APPLTYPEOFTXSIGINFO,        3U,         45U,         COM_NBIT_BUSACCOFTXSIGINFO,         0U,           5U, COM_NO_FILTERINITVALUEIDXOFTXSIGINFO, COM_NO_ONCHANGEIDXOFTXSIGINFO,                     5U,            30U,              29U,           3U },  /* [/ActiveEcuC/Com/ComConfig/TrlrAidSetup_D2_Stat_51142c79, /ActiveEcuC/Com/ComConfig/TrailerAid_Data2_FD1_oFD1_CAN_3abd61be] */
  { /*    33 */        FALSE,  COM_UINT8_APPLTYPEOFTXSIGINFO,        5U,         40U,         COM_NBIT_BUSACCOFTXSIGINFO,         0U,           5U, COM_NO_FILTERINITVALUEIDXOFTXSIGINFO, COM_NO_ONCHANGEIDXOFTXSIGINFO,                     5U,            30U,              29U,           3U },  /* [/ActiveEcuC/Com/ComConfig/TrlrAidTrgtId_No_Rq_51142c79, /ActiveEcuC/Com/ComConfig/TrailerAid_Data2_FD1_oFD1_CAN_3abd61be] */
  { /*    34 */        FALSE,  COM_UINT8_APPLTYPEOFTXSIGINFO,        4U,         60U,         COM_NBIT_BUSACCOFTXSIGINFO,         0U,           7U, COM_NO_FILTERINITVALUEIDXOFTXSIGINFO, COM_NO_ONCHANGEIDXOFTXSIGINFO,                     7U,            32U,              31U,           3U },  /* [/ActiveEcuC/Com/ComConfig/TrlrAidTrlrId_No_Rq_51142c79, /ActiveEcuC/Com/ComConfig/TrailerAid_Data2_FD1_oFD1_CAN_3abd61be] */
  { /*    35 */        FALSE,  COM_UINT8_APPLTYPEOFTXSIGINFO,        8U,         32U,         COM_BYTE_BUSACCOFTXSIGINFO,         1U,           4U, COM_NO_FILTERINITVALUEIDXOFTXSIGINFO, COM_NO_ONCHANGEIDXOFTXSIGINFO,                     4U,            29U,              28U,           3U },  /* [/ActiveEcuC/Com/ComConfig/TrlrAnOffst_An2_Calc_51142c79, /ActiveEcuC/Com/ComConfig/TrailerAid_Data2_FD1_oFD1_CAN_3abd61be] */
  { /*    36 */        FALSE,  COM_UINT8_APPLTYPEOFTXSIGINFO,        7U,         49U,         COM_NBIT_BUSACCOFTXSIGINFO,         0U,           6U, COM_NO_FILTERINITVALUEIDXOFTXSIGINFO, COM_NO_ONCHANGEIDXOFTXSIGINFO,                     6U,            31U,              30U,           3U },  /* [/ActiveEcuC/Com/ComConfig/TrlrAn_An_MxCalc_51142c79, /ActiveEcuC/Com/ComConfig/TrailerAid_Data2_FD1_oFD1_CAN_3abd61be] */
  { /*    37 */        FALSE,  COM_UINT8_APPLTYPEOFTXSIGINFO,        8U,         24U,         COM_BYTE_BUSACCOFTXSIGINFO,         1U,           3U, COM_NO_FILTERINITVALUEIDXOFTXSIGINFO, COM_NO_ONCHANGEIDXOFTXSIGINFO,                     3U,            12U,              11U,           1U },  /* [/ActiveEcuC/Com/ComConfig/TrlrAn_An_TrgtCalc_3724073d, /ActiveEcuC/Com/ComConfig/Lane_Assist_Data3_FD1_oFD1_CAN_3abd61be] */
  { /*    38 */        FALSE,  COM_UINT8_APPLTYPEOFTXSIGINFO,        5U,         24U,         COM_NBIT_BUSACCOFTXSIGINFO,         0U,           3U, COM_NO_FILTERINITVALUEIDXOFTXSIGINFO, COM_NO_ONCHANGEIDXOFTXSIGINFO,                     3U,            28U,              27U,           3U },  /* [/ActiveEcuC/Com/ComConfig/TrlrAn_An_WarnCalc_51142c79, /ActiveEcuC/Com/ComConfig/TrailerAid_Data2_FD1_oFD1_CAN_3abd61be] */
  { /*    39 */        FALSE,  COM_UINT8_APPLTYPEOFTXSIGINFO,        1U,         24U,         COM_NBIT_BUSACCOFTXSIGINFO,         0U,           3U, COM_NO_FILTERINITVALUEIDXOFTXSIGINFO, COM_NO_ONCHANGEIDXOFTXSIGINFO,                     3U,             4U,               3U,           0U },  /* [/ActiveEcuC/Com/ComConfig/TrlrHitchLamp_D_Rqst_635efcb3, /ActiveEcuC/Com/ComConfig/EPAS_INFO_FD1_oFD1_CAN_3abd61be] */
  { /*    40 */        FALSE,  COM_UINT8_APPLTYPEOFTXSIGINFO,        1U,         25U,         COM_NBIT_BUSACCOFTXSIGINFO,         0U,           3U, COM_NO_FILTERINITVALUEIDXOFTXSIGINFO, COM_NO_ONCHANGEIDXOFTXSIGINFO,                     3U,             4U,               3U,           0U },  /* [/ActiveEcuC/Com/ComConfig/VehVTrlrAid_B_Rq_635efcb3, /ActiveEcuC/Com/ComConfig/EPAS_INFO_FD1_oFD1_CAN_3abd61be] */
  { /*    41 */        FALSE,  COM_UINT8_APPLTYPEOFTXSIGINFO,        8U,         56U,         COM_BYTE_BUSACCOFTXSIGINFO,         1U,           7U, COM_NO_FILTERINITVALUEIDXOFTXSIGINFO, COM_NO_ONCHANGEIDXOFTXSIGINFO,                     7U,             8U,               7U,           0U }   /* [/ActiveEcuC/Com/ComConfig/Veh_V_RqMxTrlrAid_635efcb3, /ActiveEcuC/Com/ComConfig/EPAS_INFO_FD1_oFD1_CAN_3abd61be] */
};
#define COM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Com_TxSigInfoFilterInitValueInd
**********************************************************************************************************************/
/** 
  \var    Com_TxSigInfoFilterInitValueInd
  \brief  the indexes of the 1:1 sorted relation pointing to Com_TxSigInfo
*/ 
#define COM_START_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(Com_TxSigInfoFilterInitValueIndType, COM_CONST) Com_TxSigInfoFilterInitValueInd[6] = {
  /* Index    TxSigInfoFilterInitValueInd      Referable Keys */
  /*     0 */                          3U,  /* [/ActiveEcuC/Com/ComConfig/TrailerAid_Data2_FD1_oFD1_CAN_3abd61beTxFilterInitValue] */
  /*     1 */                          8U,  /* [/ActiveEcuC/Com/ComConfig/TrailerAid_Data2_FD1_oFD1_CAN_3abd61beTxFilterInitValue] */
  /*     2 */                          9U,  /* [/ActiveEcuC/Com/ComConfig/TrailerAid_Data2_FD1_oFD1_CAN_3abd61beTxFilterInitValue] */
  /*     3 */                         18U,  /* [/ActiveEcuC/Com/ComConfig/TrailerAid_Data2_FD1_oFD1_CAN_3abd61beTxFilterInitValue] */
  /*     4 */                         30U,  /* [/ActiveEcuC/Com/ComConfig/TrailerAid_Data2_FD1_oFD1_CAN_3abd61beTxFilterInitValue] */
  /*     5 */                         31U   /* [/ActiveEcuC/Com/ComConfig/TrailerAid_Data2_FD1_oFD1_CAN_3abd61beTxFilterInitValue] */
};
#define COM_STOP_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Com_CurrentTxMode
**********************************************************************************************************************/
/** 
  \var    Com_CurrentTxMode
  \brief  Current transmission mode state of all Tx I-PDUs.
*/ 
#define COM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Com_CurrentTxModeType, COM_VAR_NOINIT) Com_CurrentTxMode[4];
  /* Index        Referable Keys  */
  /*     0 */  /* [/ActiveEcuC/Com/ComConfig/EPAS_INFO_FD1_oFD1_CAN_3abd61be, /ActiveEcuC/Com/ComConfig/PSCM_FD_oFD1_CAN_Tx_fcef2243] */
  /*     1 */  /* [/ActiveEcuC/Com/ComConfig/Lane_Assist_Data3_FD1_oFD1_CAN_3abd61be, /ActiveEcuC/Com/ComConfig/PSCM_FD_oFD1_CAN_Tx_fcef2243] */
  /*     2 */  /* [/ActiveEcuC/Com/ComConfig/SteeringPinion_Data_FD1_oFD1_CAN_3abd61be, /ActiveEcuC/Com/ComConfig/PSCM_FD_oFD1_CAN_Tx_fcef2243] */
  /*     3 */  /* [/ActiveEcuC/Com/ComConfig/TrailerAid_Data2_FD1_oFD1_CAN_3abd61be, /ActiveEcuC/Com/ComConfig/PSCM_FD_oFD1_CAN_Tx_fcef2243] */

#define COM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Com_CycleTimeCnt
**********************************************************************************************************************/
/** 
  \var    Com_CycleTimeCnt
  \brief  Current counter value of cyclic transmission.
*/ 
#define COM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Com_CycleTimeCntType, COM_VAR_NOINIT) Com_CycleTimeCnt[4];
  /* Index        Referable Keys  */
  /*     0 */  /* [/ActiveEcuC/Com/ComConfig/EPAS_INFO_FD1_oFD1_CAN_3abd61be, /ActiveEcuC/Com/ComConfig/PSCM_FD_oFD1_CAN_Tx_fcef2243] */
  /*     1 */  /* [/ActiveEcuC/Com/ComConfig/Lane_Assist_Data3_FD1_oFD1_CAN_3abd61be, /ActiveEcuC/Com/ComConfig/PSCM_FD_oFD1_CAN_Tx_fcef2243] */
  /*     2 */  /* [/ActiveEcuC/Com/ComConfig/SteeringPinion_Data_FD1_oFD1_CAN_3abd61be, /ActiveEcuC/Com/ComConfig/PSCM_FD_oFD1_CAN_Tx_fcef2243] */
  /*     3 */  /* [/ActiveEcuC/Com/ComConfig/TrailerAid_Data2_FD1_oFD1_CAN_3abd61be, /ActiveEcuC/Com/ComConfig/PSCM_FD_oFD1_CAN_Tx_fcef2243] */

#define COM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Com_CyclicSendRequest
**********************************************************************************************************************/
/** 
  \var    Com_CyclicSendRequest
  \brief  Cyclic send request flag used to indicate cyclic transmission mode for all Tx I-PDU.
*/ 
#define COM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Com_CyclicSendRequestType, COM_VAR_NOINIT) Com_CyclicSendRequest[4];
  /* Index        Referable Keys  */
  /*     0 */  /* [/ActiveEcuC/Com/ComConfig/EPAS_INFO_FD1_oFD1_CAN_3abd61be, /ActiveEcuC/Com/ComConfig/PSCM_FD_oFD1_CAN_Tx_fcef2243] */
  /*     1 */  /* [/ActiveEcuC/Com/ComConfig/Lane_Assist_Data3_FD1_oFD1_CAN_3abd61be, /ActiveEcuC/Com/ComConfig/PSCM_FD_oFD1_CAN_Tx_fcef2243] */
  /*     2 */  /* [/ActiveEcuC/Com/ComConfig/SteeringPinion_Data_FD1_oFD1_CAN_3abd61be, /ActiveEcuC/Com/ComConfig/PSCM_FD_oFD1_CAN_Tx_fcef2243] */
  /*     3 */  /* [/ActiveEcuC/Com/ComConfig/TrailerAid_Data2_FD1_oFD1_CAN_3abd61be, /ActiveEcuC/Com/ComConfig/PSCM_FD_oFD1_CAN_Tx_fcef2243] */

#define COM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Com_DelayTimeCnt
**********************************************************************************************************************/
/** 
  \var    Com_DelayTimeCnt
  \brief  Current counter value of minimum delay counter.
*/ 
#define COM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Com_DelayTimeCntType, COM_VAR_NOINIT) Com_DelayTimeCnt[4];
  /* Index        Referable Keys  */
  /*     0 */  /* [/ActiveEcuC/Com/ComConfig/EPAS_INFO_FD1_oFD1_CAN_3abd61be, /ActiveEcuC/Com/ComConfig/PSCM_FD_oFD1_CAN_Tx_fcef2243] */
  /*     1 */  /* [/ActiveEcuC/Com/ComConfig/Lane_Assist_Data3_FD1_oFD1_CAN_3abd61be, /ActiveEcuC/Com/ComConfig/PSCM_FD_oFD1_CAN_Tx_fcef2243] */
  /*     2 */  /* [/ActiveEcuC/Com/ComConfig/SteeringPinion_Data_FD1_oFD1_CAN_3abd61be, /ActiveEcuC/Com/ComConfig/PSCM_FD_oFD1_CAN_Tx_fcef2243] */
  /*     3 */  /* [/ActiveEcuC/Com/ComConfig/TrailerAid_Data2_FD1_oFD1_CAN_3abd61be, /ActiveEcuC/Com/ComConfig/PSCM_FD_oFD1_CAN_Tx_fcef2243] */

#define COM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Com_GatewayProcessingISRLockCounter
**********************************************************************************************************************/
#define COM_START_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Com_GatewayProcessingISRLockCounterType, COM_VAR_NOINIT) Com_GatewayProcessingISRLockCounter;
#define COM_STOP_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Com_HandleRxPduDeferred
**********************************************************************************************************************/
/** 
  \var    Com_HandleRxPduDeferred
  \brief  Array indicating received Rx I-PDUs to be processed deferred within the next call of Com_MainfunctionRx().
*/ 
#define COM_START_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Com_HandleRxPduDeferredUType, COM_VAR_NOINIT) Com_HandleRxPduDeferred;  /* PRQA S 0759 */  /* MD_CSL_18.4 */
  /* Index        Referable Keys  */
  /*     0 */  /* [/ActiveEcuC/Com/ComConfig/ABS_BrkBst_Data_FD1_oFD1_CAN_3abd61be] */
  /*     1 */  /* [/ActiveEcuC/Com/ComConfig/APIM_Send_Signals1_FD1_oFD1_CAN_3abd61be] */
  /*     2 */  /* [/ActiveEcuC/Com/ComConfig/APIM_Send_Signals_2_FD1_oFD1_CAN_3abd61be] */
  /*     3 */  /* [/ActiveEcuC/Com/ComConfig/ActiveFrontStrg_Stat2_FD1_oFD1_CAN_3abd61be] */
  /*     4 */  /* [/ActiveEcuC/Com/ComConfig/BodyInfo_3_FD1_oFD1_CAN_3abd61be] */
  /*     5 */  /* [/ActiveEcuC/Com/ComConfig/Body_Info_4_FD1_oFD1_CAN_3abd61be] */
  /*     6 */  /* [/ActiveEcuC/Com/ComConfig/BrakeSnData_3_FD1_oFD1_CAN_3abd61be] */
  /*     7 */  /* [/ActiveEcuC/Com/ComConfig/BrakeSnData_4_FD1_oFD1_CAN_3abd61be] */
  /*     8 */  /* [/ActiveEcuC/Com/ComConfig/BrakeSnData_5_FD1_oFD1_CAN_3abd61be] */
  /*     9 */  /* [/ActiveEcuC/Com/ComConfig/BrakeSnData_6_FD1_oFD1_CAN_3abd61be] */
  /*    10 */  /* [/ActiveEcuC/Com/ComConfig/BrakeSysFeatures_3_oFD1_CAN_3abd61be] */
  /*    11 */  /* [/ActiveEcuC/Com/ComConfig/BrakeSysFeatures_FD1_oFD1_CAN_3abd61be] */
  /*    12 */  /* [/ActiveEcuC/Com/ComConfig/Climate_Control_Data_FD1_oFD1_CAN_3abd61be] */
  /*    13 */  /* [/ActiveEcuC/Com/ComConfig/Cluster_Info1_FD1_oFD1_CAN_3abd61be] */
  /*    14 */  /* [/ActiveEcuC/Com/ComConfig/DeliveryVersion_oFD1_CAN_3abd61be] */
  /*    15 */  /* [/ActiveEcuC/Com/ComConfig/DesiredTorqBrk_FD1_oFD1_CAN_3abd61be] */
  /*    16 */  /* [/ActiveEcuC/Com/ComConfig/EngBrakeData_FD1_oFD1_CAN_3abd61be] */
  /*    17 */  /* [/ActiveEcuC/Com/ComConfig/EngVehicleSpThrottle2_FD1_oFD1_CAN_3abd61be] */
  /*    18 */  /* [/ActiveEcuC/Com/ComConfig/EngVehicleSpThrottle_FD1_oFD1_CAN_3abd61be] */
  /*    19 */  /* [/ActiveEcuC/Com/ComConfig/FileVersion_oFD1_CAN_3abd61be] */
  /*    20 */  /* [/ActiveEcuC/Com/ComConfig/GGCC_Config_Mgmt_ID_1_FD1_oFD1_CAN_3abd61be] */
  /*    21 */  /* [/ActiveEcuC/Com/ComConfig/Image_Processing_Data_FD1_oFD1_CAN_3abd61be] */
  /*    22 */  /* [/ActiveEcuC/Com/ComConfig/Lane_Assist_Data1_FD1_oFD1_CAN_3abd61be] */
  /*    23 */  /* [/ActiveEcuC/Com/ComConfig/LateralMotionControl_FD1_oFD1_CAN_3abd61be] */
  /*    24 */  /* [/ActiveEcuC/Com/ComConfig/Mc_Send_Signals_2_FD1_oFD1_CAN_3abd61be] */
  /*    25 */  /* [/ActiveEcuC/Com/ComConfig/ParkAid_Data_FD1_oFD1_CAN_3abd61be] */
  /*    26 */  /* [/ActiveEcuC/Com/ComConfig/PowertrainData_10_FD1_oFD1_CAN_3abd61be] */
  /*    27 */  /* [/ActiveEcuC/Com/ComConfig/Steer_Assist_Data_FD1_oFD1_CAN_3abd61be] */
  /*    28 */  /* [/ActiveEcuC/Com/ComConfig/Steering_Data_FD1_oFD1_CAN_3abd61be] */
  /*    29 */  /* [/ActiveEcuC/Com/ComConfig/TrailerAid_Data3_FD1_oFD1_CAN_3abd61be] */
  /*    30 */  /* [/ActiveEcuC/Com/ComConfig/TrailerAid_Data_FD1_oFD1_CAN_3abd61be] */
  /*    31 */  /* [/ActiveEcuC/Com/ComConfig/TrailerAid_Stat1_FD1_oFD1_CAN_3abd61be] */
  /*    32 */  /* [/ActiveEcuC/Com/ComConfig/TrailerAid_Stat2_FD1_oFD1_CAN_3abd61be] */
  /*    33 */  /* [/ActiveEcuC/Com/ComConfig/TrailerAid_Stat3_FD1_oFD1_CAN_3abd61be] */
  /*    34 */  /* [/ActiveEcuC/Com/ComConfig/TrailerBrakeInfo_FD1_oFD1_CAN_3abd61be] */
  /*    35 */  /* [/ActiveEcuC/Com/ComConfig/TrailerInfo_2_FD1_oFD1_CAN_3abd61be] */
  /*    36 */  /* [/ActiveEcuC/Com/ComConfig/TrailerInfo_FD1_oFD1_CAN_3abd61be] */
  /*    37 */  /* [/ActiveEcuC/Com/ComConfig/TransGearData_FD1_oFD1_CAN_3abd61be] */
  /*    38 */  /* [/ActiveEcuC/Com/ComConfig/VehicleOperatingModes_FD1_oFD1_CAN_3abd61be] */
  /*    39 */  /* [/ActiveEcuC/Com/ComConfig/WheelData_FD1_oFD1_CAN_3abd61be] */
  /*    40 */  /* [/ActiveEcuC/Com/ComConfig/WheelSpeed_FD1_oFD1_CAN_3abd61be] */
  /*    41 */  /* [/ActiveEcuC/Com/ComConfig/Yaw_Data_FD1_oFD1_CAN_3abd61be] */

#define COM_STOP_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Com_HandleTxPduDeferred
**********************************************************************************************************************/
/** 
  \var    Com_HandleTxPduDeferred
  \brief  Flag array used for deferred Tx confirmation handling.
*/ 
#define COM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Com_HandleTxPduDeferredType, COM_VAR_NOINIT) Com_HandleTxPduDeferred[4];
  /* Index        Referable Keys  */
  /*     0 */  /* [/ActiveEcuC/Com/ComConfig/EPAS_INFO_FD1_oFD1_CAN_3abd61be, /ActiveEcuC/Com/ComConfig/PSCM_FD_oFD1_CAN_Tx_fcef2243] */
  /*     1 */  /* [/ActiveEcuC/Com/ComConfig/Lane_Assist_Data3_FD1_oFD1_CAN_3abd61be, /ActiveEcuC/Com/ComConfig/PSCM_FD_oFD1_CAN_Tx_fcef2243] */
  /*     2 */  /* [/ActiveEcuC/Com/ComConfig/SteeringPinion_Data_FD1_oFD1_CAN_3abd61be, /ActiveEcuC/Com/ComConfig/PSCM_FD_oFD1_CAN_Tx_fcef2243] */
  /*     3 */  /* [/ActiveEcuC/Com/ComConfig/TrailerAid_Data2_FD1_oFD1_CAN_3abd61be, /ActiveEcuC/Com/ComConfig/PSCM_FD_oFD1_CAN_Tx_fcef2243] */

#define COM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Com_Initialized
**********************************************************************************************************************/
/** 
  \var    Com_Initialized
  \brief  Initialization state of Com. TRUE, if Com_Init() has been called, else FALSE.
*/ 
#define COM_START_SEC_VAR_ZERO_INIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Com_InitializedType, COM_VAR_ZERO_INIT) Com_Initialized = FALSE;
#define COM_STOP_SEC_VAR_ZERO_INIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Com_RepCnt
**********************************************************************************************************************/
/** 
  \var    Com_RepCnt
  \brief  Current repetition counter value for replication of transmission requests.
*/ 
#define COM_START_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Com_RepCntType, COM_VAR_NOINIT) Com_RepCnt[4];
  /* Index        Referable Keys  */
  /*     0 */  /* [/ActiveEcuC/Com/ComConfig/EPAS_INFO_FD1_oFD1_CAN_3abd61be, /ActiveEcuC/Com/ComConfig/PSCM_FD_oFD1_CAN_Tx_fcef2243] */
  /*     1 */  /* [/ActiveEcuC/Com/ComConfig/Lane_Assist_Data3_FD1_oFD1_CAN_3abd61be, /ActiveEcuC/Com/ComConfig/PSCM_FD_oFD1_CAN_Tx_fcef2243] */
  /*     2 */  /* [/ActiveEcuC/Com/ComConfig/SteeringPinion_Data_FD1_oFD1_CAN_3abd61be, /ActiveEcuC/Com/ComConfig/PSCM_FD_oFD1_CAN_Tx_fcef2243] */
  /*     3 */  /* [/ActiveEcuC/Com/ComConfig/TrailerAid_Data2_FD1_oFD1_CAN_3abd61be, /ActiveEcuC/Com/ComConfig/PSCM_FD_oFD1_CAN_Tx_fcef2243] */

#define COM_STOP_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Com_RepCycleCnt
**********************************************************************************************************************/
/** 
  \var    Com_RepCycleCnt
  \brief  Current counter value of repetition period for replication of transmission requests.
*/ 
#define COM_START_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Com_RepCycleCntType, COM_VAR_NOINIT) Com_RepCycleCnt[4];
  /* Index        Referable Keys  */
  /*     0 */  /* [/ActiveEcuC/Com/ComConfig/EPAS_INFO_FD1_oFD1_CAN_3abd61be, /ActiveEcuC/Com/ComConfig/PSCM_FD_oFD1_CAN_Tx_fcef2243] */
  /*     1 */  /* [/ActiveEcuC/Com/ComConfig/Lane_Assist_Data3_FD1_oFD1_CAN_3abd61be, /ActiveEcuC/Com/ComConfig/PSCM_FD_oFD1_CAN_Tx_fcef2243] */
  /*     2 */  /* [/ActiveEcuC/Com/ComConfig/SteeringPinion_Data_FD1_oFD1_CAN_3abd61be, /ActiveEcuC/Com/ComConfig/PSCM_FD_oFD1_CAN_Tx_fcef2243] */
  /*     3 */  /* [/ActiveEcuC/Com/ComConfig/TrailerAid_Data2_FD1_oFD1_CAN_3abd61be, /ActiveEcuC/Com/ComConfig/PSCM_FD_oFD1_CAN_Tx_fcef2243] */

#define COM_STOP_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Com_RxDeadlineMonitoringISRLockCounter
**********************************************************************************************************************/
#define COM_START_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Com_RxDeadlineMonitoringISRLockCounterType, COM_VAR_NOINIT) Com_RxDeadlineMonitoringISRLockCounter;
#define COM_STOP_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Com_RxDefPduBuffer
**********************************************************************************************************************/
/** 
  \var    Com_RxDefPduBuffer
  \brief  Rx I-PDU buffer for deferred signal processing.
*/ 
#define COM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Com_RxDefPduBufferUType, COM_VAR_NOINIT) Com_RxDefPduBuffer;  /* PRQA S 0759 */  /* MD_CSL_18.4 */
  /* Index        Referable Keys  */
  /*     0 */  /* [/ActiveEcuC/Com/ComConfig/ABS_BrkBst_Data_FD1_oFD1_CAN_3abd61be] */
  /*     1 */  /* [/ActiveEcuC/Com/ComConfig/ABS_BrkBst_Data_FD1_oFD1_CAN_3abd61be] */
  /*     2 */  /* [/ActiveEcuC/Com/ComConfig/ABS_BrkBst_Data_FD1_oFD1_CAN_3abd61be] */
  /*     3 */  /* [/ActiveEcuC/Com/ComConfig/ABS_BrkBst_Data_FD1_oFD1_CAN_3abd61be] */
  /*     4 */  /* [/ActiveEcuC/Com/ComConfig/ABS_BrkBst_Data_FD1_oFD1_CAN_3abd61be] */
  /*     5 */  /* [/ActiveEcuC/Com/ComConfig/ABS_BrkBst_Data_FD1_oFD1_CAN_3abd61be] */
  /*     6 */  /* [/ActiveEcuC/Com/ComConfig/ABS_BrkBst_Data_FD1_oFD1_CAN_3abd61be] */
  /*     7 */  /* [/ActiveEcuC/Com/ComConfig/ABS_BrkBst_Data_FD1_oFD1_CAN_3abd61be] */
  /*     8 */  /* [/ActiveEcuC/Com/ComConfig/APIM_Send_Signals1_FD1_oFD1_CAN_3abd61be] */
  /*     9 */  /* [/ActiveEcuC/Com/ComConfig/APIM_Send_Signals1_FD1_oFD1_CAN_3abd61be] */
  /*    10 */  /* [/ActiveEcuC/Com/ComConfig/APIM_Send_Signals1_FD1_oFD1_CAN_3abd61be] */
  /*    11 */  /* [/ActiveEcuC/Com/ComConfig/APIM_Send_Signals1_FD1_oFD1_CAN_3abd61be] */
  /*    12 */  /* [/ActiveEcuC/Com/ComConfig/APIM_Send_Signals1_FD1_oFD1_CAN_3abd61be] */
  /*    13 */  /* [/ActiveEcuC/Com/ComConfig/APIM_Send_Signals1_FD1_oFD1_CAN_3abd61be] */
  /*    14 */  /* [/ActiveEcuC/Com/ComConfig/APIM_Send_Signals1_FD1_oFD1_CAN_3abd61be] */
  /*    15 */  /* [/ActiveEcuC/Com/ComConfig/APIM_Send_Signals1_FD1_oFD1_CAN_3abd61be] */
  /*    16 */  /* [/ActiveEcuC/Com/ComConfig/APIM_Send_Signals_2_FD1_oFD1_CAN_3abd61be] */
  /*    17 */  /* [/ActiveEcuC/Com/ComConfig/APIM_Send_Signals_2_FD1_oFD1_CAN_3abd61be] */
  /*    18 */  /* [/ActiveEcuC/Com/ComConfig/APIM_Send_Signals_2_FD1_oFD1_CAN_3abd61be] */
  /*    19 */  /* [/ActiveEcuC/Com/ComConfig/APIM_Send_Signals_2_FD1_oFD1_CAN_3abd61be] */
  /*    20 */  /* [/ActiveEcuC/Com/ComConfig/APIM_Send_Signals_2_FD1_oFD1_CAN_3abd61be] */
  /*    21 */  /* [/ActiveEcuC/Com/ComConfig/APIM_Send_Signals_2_FD1_oFD1_CAN_3abd61be] */
  /*    22 */  /* [/ActiveEcuC/Com/ComConfig/APIM_Send_Signals_2_FD1_oFD1_CAN_3abd61be] */
  /*    23 */  /* [/ActiveEcuC/Com/ComConfig/APIM_Send_Signals_2_FD1_oFD1_CAN_3abd61be] */
  /*    24 */  /* [/ActiveEcuC/Com/ComConfig/ActiveFrontStrg_Stat2_FD1_oFD1_CAN_3abd61be] */
  /*    25 */  /* [/ActiveEcuC/Com/ComConfig/ActiveFrontStrg_Stat2_FD1_oFD1_CAN_3abd61be] */
  /*    26 */  /* [/ActiveEcuC/Com/ComConfig/ActiveFrontStrg_Stat2_FD1_oFD1_CAN_3abd61be] */
  /*    27 */  /* [/ActiveEcuC/Com/ComConfig/ActiveFrontStrg_Stat2_FD1_oFD1_CAN_3abd61be] */
  /*    28 */  /* [/ActiveEcuC/Com/ComConfig/ActiveFrontStrg_Stat2_FD1_oFD1_CAN_3abd61be] */
  /*    29 */  /* [/ActiveEcuC/Com/ComConfig/ActiveFrontStrg_Stat2_FD1_oFD1_CAN_3abd61be] */
  /*    30 */  /* [/ActiveEcuC/Com/ComConfig/ActiveFrontStrg_Stat2_FD1_oFD1_CAN_3abd61be] */
  /*    31 */  /* [/ActiveEcuC/Com/ComConfig/ActiveFrontStrg_Stat2_FD1_oFD1_CAN_3abd61be] */
  /*    32 */  /* [/ActiveEcuC/Com/ComConfig/BodyInfo_3_FD1_oFD1_CAN_3abd61be] */
  /*    33 */  /* [/ActiveEcuC/Com/ComConfig/BodyInfo_3_FD1_oFD1_CAN_3abd61be] */
  /*    34 */  /* [/ActiveEcuC/Com/ComConfig/BodyInfo_3_FD1_oFD1_CAN_3abd61be] */
  /*    35 */  /* [/ActiveEcuC/Com/ComConfig/BodyInfo_3_FD1_oFD1_CAN_3abd61be] */
  /*    36 */  /* [/ActiveEcuC/Com/ComConfig/BodyInfo_3_FD1_oFD1_CAN_3abd61be] */
  /*    37 */  /* [/ActiveEcuC/Com/ComConfig/BodyInfo_3_FD1_oFD1_CAN_3abd61be] */
  /*    38 */  /* [/ActiveEcuC/Com/ComConfig/BodyInfo_3_FD1_oFD1_CAN_3abd61be] */
  /*    39 */  /* [/ActiveEcuC/Com/ComConfig/BodyInfo_3_FD1_oFD1_CAN_3abd61be] */
  /*    40 */  /* [/ActiveEcuC/Com/ComConfig/Body_Info_4_FD1_oFD1_CAN_3abd61be] */
  /*    41 */  /* [/ActiveEcuC/Com/ComConfig/Body_Info_4_FD1_oFD1_CAN_3abd61be] */
  /*    42 */  /* [/ActiveEcuC/Com/ComConfig/Body_Info_4_FD1_oFD1_CAN_3abd61be] */
  /*    43 */  /* [/ActiveEcuC/Com/ComConfig/Body_Info_4_FD1_oFD1_CAN_3abd61be] */
  /*    44 */  /* [/ActiveEcuC/Com/ComConfig/Body_Info_4_FD1_oFD1_CAN_3abd61be] */
  /*    45 */  /* [/ActiveEcuC/Com/ComConfig/Body_Info_4_FD1_oFD1_CAN_3abd61be] */
  /*    46 */  /* [/ActiveEcuC/Com/ComConfig/Body_Info_4_FD1_oFD1_CAN_3abd61be] */
  /*    47 */  /* [/ActiveEcuC/Com/ComConfig/Body_Info_4_FD1_oFD1_CAN_3abd61be] */
  /*    48 */  /* [/ActiveEcuC/Com/ComConfig/BrakeSnData_3_FD1_oFD1_CAN_3abd61be] */
  /*    49 */  /* [/ActiveEcuC/Com/ComConfig/BrakeSnData_3_FD1_oFD1_CAN_3abd61be] */
  /* Index        Referable Keys  */
  /*    50 */  /* [/ActiveEcuC/Com/ComConfig/BrakeSnData_3_FD1_oFD1_CAN_3abd61be] */
  /*    51 */  /* [/ActiveEcuC/Com/ComConfig/BrakeSnData_3_FD1_oFD1_CAN_3abd61be] */
  /*    52 */  /* [/ActiveEcuC/Com/ComConfig/BrakeSnData_3_FD1_oFD1_CAN_3abd61be] */
  /*    53 */  /* [/ActiveEcuC/Com/ComConfig/BrakeSnData_3_FD1_oFD1_CAN_3abd61be] */
  /*    54 */  /* [/ActiveEcuC/Com/ComConfig/BrakeSnData_3_FD1_oFD1_CAN_3abd61be] */
  /*    55 */  /* [/ActiveEcuC/Com/ComConfig/BrakeSnData_3_FD1_oFD1_CAN_3abd61be] */
  /*    56 */  /* [/ActiveEcuC/Com/ComConfig/BrakeSnData_4_FD1_oFD1_CAN_3abd61be] */
  /*    57 */  /* [/ActiveEcuC/Com/ComConfig/BrakeSnData_4_FD1_oFD1_CAN_3abd61be] */
  /*    58 */  /* [/ActiveEcuC/Com/ComConfig/BrakeSnData_4_FD1_oFD1_CAN_3abd61be] */
  /*    59 */  /* [/ActiveEcuC/Com/ComConfig/BrakeSnData_4_FD1_oFD1_CAN_3abd61be] */
  /*    60 */  /* [/ActiveEcuC/Com/ComConfig/BrakeSnData_4_FD1_oFD1_CAN_3abd61be] */
  /*    61 */  /* [/ActiveEcuC/Com/ComConfig/BrakeSnData_4_FD1_oFD1_CAN_3abd61be] */
  /*    62 */  /* [/ActiveEcuC/Com/ComConfig/BrakeSnData_4_FD1_oFD1_CAN_3abd61be] */
  /*    63 */  /* [/ActiveEcuC/Com/ComConfig/BrakeSnData_4_FD1_oFD1_CAN_3abd61be] */
  /*    64 */  /* [/ActiveEcuC/Com/ComConfig/BrakeSnData_5_FD1_oFD1_CAN_3abd61be] */
  /*    65 */  /* [/ActiveEcuC/Com/ComConfig/BrakeSnData_5_FD1_oFD1_CAN_3abd61be] */
  /*    66 */  /* [/ActiveEcuC/Com/ComConfig/BrakeSnData_5_FD1_oFD1_CAN_3abd61be] */
  /*    67 */  /* [/ActiveEcuC/Com/ComConfig/BrakeSnData_5_FD1_oFD1_CAN_3abd61be] */
  /*    68 */  /* [/ActiveEcuC/Com/ComConfig/BrakeSnData_5_FD1_oFD1_CAN_3abd61be] */
  /*    69 */  /* [/ActiveEcuC/Com/ComConfig/BrakeSnData_5_FD1_oFD1_CAN_3abd61be] */
  /*    70 */  /* [/ActiveEcuC/Com/ComConfig/BrakeSnData_5_FD1_oFD1_CAN_3abd61be] */
  /*    71 */  /* [/ActiveEcuC/Com/ComConfig/BrakeSnData_5_FD1_oFD1_CAN_3abd61be] */
  /*    72 */  /* [/ActiveEcuC/Com/ComConfig/BrakeSnData_6_FD1_oFD1_CAN_3abd61be] */
  /*    73 */  /* [/ActiveEcuC/Com/ComConfig/BrakeSnData_6_FD1_oFD1_CAN_3abd61be] */
  /*    74 */  /* [/ActiveEcuC/Com/ComConfig/BrakeSnData_6_FD1_oFD1_CAN_3abd61be] */
  /*    75 */  /* [/ActiveEcuC/Com/ComConfig/BrakeSnData_6_FD1_oFD1_CAN_3abd61be] */
  /*    76 */  /* [/ActiveEcuC/Com/ComConfig/BrakeSnData_6_FD1_oFD1_CAN_3abd61be] */
  /*    77 */  /* [/ActiveEcuC/Com/ComConfig/BrakeSnData_6_FD1_oFD1_CAN_3abd61be] */
  /*    78 */  /* [/ActiveEcuC/Com/ComConfig/BrakeSnData_6_FD1_oFD1_CAN_3abd61be] */
  /*    79 */  /* [/ActiveEcuC/Com/ComConfig/BrakeSnData_6_FD1_oFD1_CAN_3abd61be] */
  /*    80 */  /* [/ActiveEcuC/Com/ComConfig/BrakeSysFeatures_3_oFD1_CAN_3abd61be] */
  /*    81 */  /* [/ActiveEcuC/Com/ComConfig/BrakeSysFeatures_3_oFD1_CAN_3abd61be] */
  /*    82 */  /* [/ActiveEcuC/Com/ComConfig/BrakeSysFeatures_3_oFD1_CAN_3abd61be] */
  /*    83 */  /* [/ActiveEcuC/Com/ComConfig/BrakeSysFeatures_3_oFD1_CAN_3abd61be] */
  /*    84 */  /* [/ActiveEcuC/Com/ComConfig/BrakeSysFeatures_3_oFD1_CAN_3abd61be] */
  /*    85 */  /* [/ActiveEcuC/Com/ComConfig/BrakeSysFeatures_3_oFD1_CAN_3abd61be] */
  /*    86 */  /* [/ActiveEcuC/Com/ComConfig/BrakeSysFeatures_3_oFD1_CAN_3abd61be] */
  /*    87 */  /* [/ActiveEcuC/Com/ComConfig/BrakeSysFeatures_3_oFD1_CAN_3abd61be] */
  /*    88 */  /* [/ActiveEcuC/Com/ComConfig/BrakeSysFeatures_FD1_oFD1_CAN_3abd61be] */
  /*    89 */  /* [/ActiveEcuC/Com/ComConfig/BrakeSysFeatures_FD1_oFD1_CAN_3abd61be] */
  /*    90 */  /* [/ActiveEcuC/Com/ComConfig/BrakeSysFeatures_FD1_oFD1_CAN_3abd61be] */
  /*    91 */  /* [/ActiveEcuC/Com/ComConfig/BrakeSysFeatures_FD1_oFD1_CAN_3abd61be] */
  /*    92 */  /* [/ActiveEcuC/Com/ComConfig/BrakeSysFeatures_FD1_oFD1_CAN_3abd61be] */
  /*    93 */  /* [/ActiveEcuC/Com/ComConfig/BrakeSysFeatures_FD1_oFD1_CAN_3abd61be] */
  /*    94 */  /* [/ActiveEcuC/Com/ComConfig/BrakeSysFeatures_FD1_oFD1_CAN_3abd61be] */
  /*    95 */  /* [/ActiveEcuC/Com/ComConfig/BrakeSysFeatures_FD1_oFD1_CAN_3abd61be] */
  /*    96 */  /* [/ActiveEcuC/Com/ComConfig/Climate_Control_Data_FD1_oFD1_CAN_3abd61be] */
  /*    97 */  /* [/ActiveEcuC/Com/ComConfig/Climate_Control_Data_FD1_oFD1_CAN_3abd61be] */
  /*    98 */  /* [/ActiveEcuC/Com/ComConfig/Climate_Control_Data_FD1_oFD1_CAN_3abd61be] */
  /*    99 */  /* [/ActiveEcuC/Com/ComConfig/Climate_Control_Data_FD1_oFD1_CAN_3abd61be] */
  /* Index        Referable Keys  */
  /*   100 */  /* [/ActiveEcuC/Com/ComConfig/Climate_Control_Data_FD1_oFD1_CAN_3abd61be] */
  /*   101 */  /* [/ActiveEcuC/Com/ComConfig/Climate_Control_Data_FD1_oFD1_CAN_3abd61be] */
  /*   102 */  /* [/ActiveEcuC/Com/ComConfig/Climate_Control_Data_FD1_oFD1_CAN_3abd61be] */
  /*   103 */  /* [/ActiveEcuC/Com/ComConfig/Climate_Control_Data_FD1_oFD1_CAN_3abd61be] */
  /*   104 */  /* [/ActiveEcuC/Com/ComConfig/Cluster_Info1_FD1_oFD1_CAN_3abd61be] */
  /*   105 */  /* [/ActiveEcuC/Com/ComConfig/Cluster_Info1_FD1_oFD1_CAN_3abd61be] */
  /*   106 */  /* [/ActiveEcuC/Com/ComConfig/Cluster_Info1_FD1_oFD1_CAN_3abd61be] */
  /*   107 */  /* [/ActiveEcuC/Com/ComConfig/Cluster_Info1_FD1_oFD1_CAN_3abd61be] */
  /*   108 */  /* [/ActiveEcuC/Com/ComConfig/Cluster_Info1_FD1_oFD1_CAN_3abd61be] */
  /*   109 */  /* [/ActiveEcuC/Com/ComConfig/Cluster_Info1_FD1_oFD1_CAN_3abd61be] */
  /*   110 */  /* [/ActiveEcuC/Com/ComConfig/Cluster_Info1_FD1_oFD1_CAN_3abd61be] */
  /*   111 */  /* [/ActiveEcuC/Com/ComConfig/Cluster_Info1_FD1_oFD1_CAN_3abd61be] */
  /*   112 */  /* [/ActiveEcuC/Com/ComConfig/DeliveryVersion_oFD1_CAN_3abd61be] */
  /*   113 */  /* [/ActiveEcuC/Com/ComConfig/DeliveryVersion_oFD1_CAN_3abd61be] */
  /*   114 */  /* [/ActiveEcuC/Com/ComConfig/DeliveryVersion_oFD1_CAN_3abd61be] */
  /*   115 */  /* [/ActiveEcuC/Com/ComConfig/DeliveryVersion_oFD1_CAN_3abd61be] */
  /*   116 */  /* [/ActiveEcuC/Com/ComConfig/DeliveryVersion_oFD1_CAN_3abd61be] */
  /*   117 */  /* [/ActiveEcuC/Com/ComConfig/DeliveryVersion_oFD1_CAN_3abd61be] */
  /*   118 */  /* [/ActiveEcuC/Com/ComConfig/DeliveryVersion_oFD1_CAN_3abd61be] */
  /*   119 */  /* [/ActiveEcuC/Com/ComConfig/DeliveryVersion_oFD1_CAN_3abd61be] */
  /*   120 */  /* [/ActiveEcuC/Com/ComConfig/DeliveryVersion_oFD1_CAN_3abd61be] */
  /*   121 */  /* [/ActiveEcuC/Com/ComConfig/DeliveryVersion_oFD1_CAN_3abd61be] */
  /*   122 */  /* [/ActiveEcuC/Com/ComConfig/DesiredTorqBrk_FD1_oFD1_CAN_3abd61be] */
  /*   123 */  /* [/ActiveEcuC/Com/ComConfig/DesiredTorqBrk_FD1_oFD1_CAN_3abd61be] */
  /*   124 */  /* [/ActiveEcuC/Com/ComConfig/DesiredTorqBrk_FD1_oFD1_CAN_3abd61be] */
  /*   125 */  /* [/ActiveEcuC/Com/ComConfig/DesiredTorqBrk_FD1_oFD1_CAN_3abd61be] */
  /*   126 */  /* [/ActiveEcuC/Com/ComConfig/DesiredTorqBrk_FD1_oFD1_CAN_3abd61be] */
  /*   127 */  /* [/ActiveEcuC/Com/ComConfig/DesiredTorqBrk_FD1_oFD1_CAN_3abd61be] */
  /*   128 */  /* [/ActiveEcuC/Com/ComConfig/DesiredTorqBrk_FD1_oFD1_CAN_3abd61be] */
  /*   129 */  /* [/ActiveEcuC/Com/ComConfig/DesiredTorqBrk_FD1_oFD1_CAN_3abd61be] */
  /*   130 */  /* [/ActiveEcuC/Com/ComConfig/EngBrakeData_FD1_oFD1_CAN_3abd61be] */
  /*   131 */  /* [/ActiveEcuC/Com/ComConfig/EngBrakeData_FD1_oFD1_CAN_3abd61be] */
  /*   132 */  /* [/ActiveEcuC/Com/ComConfig/EngBrakeData_FD1_oFD1_CAN_3abd61be] */
  /*   133 */  /* [/ActiveEcuC/Com/ComConfig/EngBrakeData_FD1_oFD1_CAN_3abd61be] */
  /*   134 */  /* [/ActiveEcuC/Com/ComConfig/EngBrakeData_FD1_oFD1_CAN_3abd61be] */
  /*   135 */  /* [/ActiveEcuC/Com/ComConfig/EngBrakeData_FD1_oFD1_CAN_3abd61be] */
  /*   136 */  /* [/ActiveEcuC/Com/ComConfig/EngBrakeData_FD1_oFD1_CAN_3abd61be] */
  /*   137 */  /* [/ActiveEcuC/Com/ComConfig/EngBrakeData_FD1_oFD1_CAN_3abd61be] */
  /*   138 */  /* [/ActiveEcuC/Com/ComConfig/EngVehicleSpThrottle2_FD1_oFD1_CAN_3abd61be] */
  /*   139 */  /* [/ActiveEcuC/Com/ComConfig/EngVehicleSpThrottle2_FD1_oFD1_CAN_3abd61be] */
  /*   140 */  /* [/ActiveEcuC/Com/ComConfig/EngVehicleSpThrottle2_FD1_oFD1_CAN_3abd61be] */
  /*   141 */  /* [/ActiveEcuC/Com/ComConfig/EngVehicleSpThrottle2_FD1_oFD1_CAN_3abd61be] */
  /*   142 */  /* [/ActiveEcuC/Com/ComConfig/EngVehicleSpThrottle2_FD1_oFD1_CAN_3abd61be] */
  /*   143 */  /* [/ActiveEcuC/Com/ComConfig/EngVehicleSpThrottle2_FD1_oFD1_CAN_3abd61be] */
  /*   144 */  /* [/ActiveEcuC/Com/ComConfig/EngVehicleSpThrottle2_FD1_oFD1_CAN_3abd61be] */
  /*   145 */  /* [/ActiveEcuC/Com/ComConfig/EngVehicleSpThrottle2_FD1_oFD1_CAN_3abd61be] */
  /*   146 */  /* [/ActiveEcuC/Com/ComConfig/EngVehicleSpThrottle_FD1_oFD1_CAN_3abd61be] */
  /*   147 */  /* [/ActiveEcuC/Com/ComConfig/EngVehicleSpThrottle_FD1_oFD1_CAN_3abd61be] */
  /*   148 */  /* [/ActiveEcuC/Com/ComConfig/EngVehicleSpThrottle_FD1_oFD1_CAN_3abd61be] */
  /*   149 */  /* [/ActiveEcuC/Com/ComConfig/EngVehicleSpThrottle_FD1_oFD1_CAN_3abd61be] */
  /* Index        Referable Keys  */
  /*   150 */  /* [/ActiveEcuC/Com/ComConfig/EngVehicleSpThrottle_FD1_oFD1_CAN_3abd61be] */
  /*   151 */  /* [/ActiveEcuC/Com/ComConfig/EngVehicleSpThrottle_FD1_oFD1_CAN_3abd61be] */
  /*   152 */  /* [/ActiveEcuC/Com/ComConfig/EngVehicleSpThrottle_FD1_oFD1_CAN_3abd61be] */
  /*   153 */  /* [/ActiveEcuC/Com/ComConfig/EngVehicleSpThrottle_FD1_oFD1_CAN_3abd61be] */
  /*   154 */  /* [/ActiveEcuC/Com/ComConfig/FileVersion_oFD1_CAN_3abd61be] */
  /*   155 */  /* [/ActiveEcuC/Com/ComConfig/FileVersion_oFD1_CAN_3abd61be] */
  /*   156 */  /* [/ActiveEcuC/Com/ComConfig/FileVersion_oFD1_CAN_3abd61be] */
  /*   157 */  /* [/ActiveEcuC/Com/ComConfig/FileVersion_oFD1_CAN_3abd61be] */
  /*   158 */  /* [/ActiveEcuC/Com/ComConfig/GGCC_Config_Mgmt_ID_1_FD1_oFD1_CAN_3abd61be] */
  /*   159 */  /* [/ActiveEcuC/Com/ComConfig/GGCC_Config_Mgmt_ID_1_FD1_oFD1_CAN_3abd61be] */
  /*   160 */  /* [/ActiveEcuC/Com/ComConfig/GGCC_Config_Mgmt_ID_1_FD1_oFD1_CAN_3abd61be] */
  /*   161 */  /* [/ActiveEcuC/Com/ComConfig/GGCC_Config_Mgmt_ID_1_FD1_oFD1_CAN_3abd61be] */
  /*   162 */  /* [/ActiveEcuC/Com/ComConfig/GGCC_Config_Mgmt_ID_1_FD1_oFD1_CAN_3abd61be] */
  /*   163 */  /* [/ActiveEcuC/Com/ComConfig/GGCC_Config_Mgmt_ID_1_FD1_oFD1_CAN_3abd61be] */
  /*   164 */  /* [/ActiveEcuC/Com/ComConfig/GGCC_Config_Mgmt_ID_1_FD1_oFD1_CAN_3abd61be] */
  /*   165 */  /* [/ActiveEcuC/Com/ComConfig/GGCC_Config_Mgmt_ID_1_FD1_oFD1_CAN_3abd61be] */
  /*   166 */  /* [/ActiveEcuC/Com/ComConfig/Image_Processing_Data_FD1_oFD1_CAN_3abd61be] */
  /*   167 */  /* [/ActiveEcuC/Com/ComConfig/Image_Processing_Data_FD1_oFD1_CAN_3abd61be] */
  /*   168 */  /* [/ActiveEcuC/Com/ComConfig/Image_Processing_Data_FD1_oFD1_CAN_3abd61be] */
  /*   169 */  /* [/ActiveEcuC/Com/ComConfig/Image_Processing_Data_FD1_oFD1_CAN_3abd61be] */
  /*   170 */  /* [/ActiveEcuC/Com/ComConfig/Image_Processing_Data_FD1_oFD1_CAN_3abd61be] */
  /*   171 */  /* [/ActiveEcuC/Com/ComConfig/Image_Processing_Data_FD1_oFD1_CAN_3abd61be] */
  /*   172 */  /* [/ActiveEcuC/Com/ComConfig/Image_Processing_Data_FD1_oFD1_CAN_3abd61be] */
  /*   173 */  /* [/ActiveEcuC/Com/ComConfig/Image_Processing_Data_FD1_oFD1_CAN_3abd61be] */
  /*   174 */  /* [/ActiveEcuC/Com/ComConfig/Lane_Assist_Data1_FD1_oFD1_CAN_3abd61be] */
  /*   175 */  /* [/ActiveEcuC/Com/ComConfig/Lane_Assist_Data1_FD1_oFD1_CAN_3abd61be] */
  /*   176 */  /* [/ActiveEcuC/Com/ComConfig/Lane_Assist_Data1_FD1_oFD1_CAN_3abd61be] */
  /*   177 */  /* [/ActiveEcuC/Com/ComConfig/Lane_Assist_Data1_FD1_oFD1_CAN_3abd61be] */
  /*   178 */  /* [/ActiveEcuC/Com/ComConfig/Lane_Assist_Data1_FD1_oFD1_CAN_3abd61be] */
  /*   179 */  /* [/ActiveEcuC/Com/ComConfig/Lane_Assist_Data1_FD1_oFD1_CAN_3abd61be] */
  /*   180 */  /* [/ActiveEcuC/Com/ComConfig/Lane_Assist_Data1_FD1_oFD1_CAN_3abd61be] */
  /*   181 */  /* [/ActiveEcuC/Com/ComConfig/Lane_Assist_Data1_FD1_oFD1_CAN_3abd61be] */
  /*   182 */  /* [/ActiveEcuC/Com/ComConfig/LateralMotionControl_FD1_oFD1_CAN_3abd61be] */
  /*   183 */  /* [/ActiveEcuC/Com/ComConfig/LateralMotionControl_FD1_oFD1_CAN_3abd61be] */
  /*   184 */  /* [/ActiveEcuC/Com/ComConfig/LateralMotionControl_FD1_oFD1_CAN_3abd61be] */
  /*   185 */  /* [/ActiveEcuC/Com/ComConfig/LateralMotionControl_FD1_oFD1_CAN_3abd61be] */
  /*   186 */  /* [/ActiveEcuC/Com/ComConfig/LateralMotionControl_FD1_oFD1_CAN_3abd61be] */
  /*   187 */  /* [/ActiveEcuC/Com/ComConfig/LateralMotionControl_FD1_oFD1_CAN_3abd61be] */
  /*   188 */  /* [/ActiveEcuC/Com/ComConfig/LateralMotionControl_FD1_oFD1_CAN_3abd61be] */
  /*   189 */  /* [/ActiveEcuC/Com/ComConfig/LateralMotionControl_FD1_oFD1_CAN_3abd61be] */
  /*   190 */  /* [/ActiveEcuC/Com/ComConfig/Mc_Send_Signals_2_FD1_oFD1_CAN_3abd61be] */
  /*   191 */  /* [/ActiveEcuC/Com/ComConfig/Mc_Send_Signals_2_FD1_oFD1_CAN_3abd61be] */
  /*   192 */  /* [/ActiveEcuC/Com/ComConfig/Mc_Send_Signals_2_FD1_oFD1_CAN_3abd61be] */
  /*   193 */  /* [/ActiveEcuC/Com/ComConfig/Mc_Send_Signals_2_FD1_oFD1_CAN_3abd61be] */
  /*   194 */  /* [/ActiveEcuC/Com/ComConfig/Mc_Send_Signals_2_FD1_oFD1_CAN_3abd61be] */
  /*   195 */  /* [/ActiveEcuC/Com/ComConfig/Mc_Send_Signals_2_FD1_oFD1_CAN_3abd61be] */
  /*   196 */  /* [/ActiveEcuC/Com/ComConfig/Mc_Send_Signals_2_FD1_oFD1_CAN_3abd61be] */
  /*   197 */  /* [/ActiveEcuC/Com/ComConfig/Mc_Send_Signals_2_FD1_oFD1_CAN_3abd61be] */
  /*   198 */  /* [/ActiveEcuC/Com/ComConfig/ParkAid_Data_FD1_oFD1_CAN_3abd61be] */
  /*   199 */  /* [/ActiveEcuC/Com/ComConfig/ParkAid_Data_FD1_oFD1_CAN_3abd61be] */
  /* Index        Referable Keys  */
  /*   200 */  /* [/ActiveEcuC/Com/ComConfig/ParkAid_Data_FD1_oFD1_CAN_3abd61be] */
  /*   201 */  /* [/ActiveEcuC/Com/ComConfig/ParkAid_Data_FD1_oFD1_CAN_3abd61be] */
  /*   202 */  /* [/ActiveEcuC/Com/ComConfig/ParkAid_Data_FD1_oFD1_CAN_3abd61be] */
  /*   203 */  /* [/ActiveEcuC/Com/ComConfig/ParkAid_Data_FD1_oFD1_CAN_3abd61be] */
  /*   204 */  /* [/ActiveEcuC/Com/ComConfig/ParkAid_Data_FD1_oFD1_CAN_3abd61be] */
  /*   205 */  /* [/ActiveEcuC/Com/ComConfig/ParkAid_Data_FD1_oFD1_CAN_3abd61be] */
  /*   206 */  /* [/ActiveEcuC/Com/ComConfig/PowertrainData_10_FD1_oFD1_CAN_3abd61be] */
  /*   207 */  /* [/ActiveEcuC/Com/ComConfig/PowertrainData_10_FD1_oFD1_CAN_3abd61be] */
  /*   208 */  /* [/ActiveEcuC/Com/ComConfig/PowertrainData_10_FD1_oFD1_CAN_3abd61be] */
  /*   209 */  /* [/ActiveEcuC/Com/ComConfig/PowertrainData_10_FD1_oFD1_CAN_3abd61be] */
  /*   210 */  /* [/ActiveEcuC/Com/ComConfig/PowertrainData_10_FD1_oFD1_CAN_3abd61be] */
  /*   211 */  /* [/ActiveEcuC/Com/ComConfig/PowertrainData_10_FD1_oFD1_CAN_3abd61be] */
  /*   212 */  /* [/ActiveEcuC/Com/ComConfig/PowertrainData_10_FD1_oFD1_CAN_3abd61be] */
  /*   213 */  /* [/ActiveEcuC/Com/ComConfig/PowertrainData_10_FD1_oFD1_CAN_3abd61be] */
  /*   214 */  /* [/ActiveEcuC/Com/ComConfig/Steer_Assist_Data_FD1_oFD1_CAN_3abd61be] */
  /*   215 */  /* [/ActiveEcuC/Com/ComConfig/Steer_Assist_Data_FD1_oFD1_CAN_3abd61be] */
  /*   216 */  /* [/ActiveEcuC/Com/ComConfig/Steer_Assist_Data_FD1_oFD1_CAN_3abd61be] */
  /*   217 */  /* [/ActiveEcuC/Com/ComConfig/Steer_Assist_Data_FD1_oFD1_CAN_3abd61be] */
  /*   218 */  /* [/ActiveEcuC/Com/ComConfig/Steer_Assist_Data_FD1_oFD1_CAN_3abd61be] */
  /*   219 */  /* [/ActiveEcuC/Com/ComConfig/Steer_Assist_Data_FD1_oFD1_CAN_3abd61be] */
  /*   220 */  /* [/ActiveEcuC/Com/ComConfig/Steer_Assist_Data_FD1_oFD1_CAN_3abd61be] */
  /*   221 */  /* [/ActiveEcuC/Com/ComConfig/Steer_Assist_Data_FD1_oFD1_CAN_3abd61be] */
  /*   222 */  /* [/ActiveEcuC/Com/ComConfig/Steering_Data_FD1_oFD1_CAN_3abd61be] */
  /*   223 */  /* [/ActiveEcuC/Com/ComConfig/Steering_Data_FD1_oFD1_CAN_3abd61be] */
  /*   224 */  /* [/ActiveEcuC/Com/ComConfig/Steering_Data_FD1_oFD1_CAN_3abd61be] */
  /*   225 */  /* [/ActiveEcuC/Com/ComConfig/Steering_Data_FD1_oFD1_CAN_3abd61be] */
  /*   226 */  /* [/ActiveEcuC/Com/ComConfig/Steering_Data_FD1_oFD1_CAN_3abd61be] */
  /*   227 */  /* [/ActiveEcuC/Com/ComConfig/Steering_Data_FD1_oFD1_CAN_3abd61be] */
  /*   228 */  /* [/ActiveEcuC/Com/ComConfig/Steering_Data_FD1_oFD1_CAN_3abd61be] */
  /*   229 */  /* [/ActiveEcuC/Com/ComConfig/Steering_Data_FD1_oFD1_CAN_3abd61be] */
  /*   230 */  /* [/ActiveEcuC/Com/ComConfig/TrailerAid_Data3_FD1_oFD1_CAN_3abd61be] */
  /*   231 */  /* [/ActiveEcuC/Com/ComConfig/TrailerAid_Data3_FD1_oFD1_CAN_3abd61be] */
  /*   232 */  /* [/ActiveEcuC/Com/ComConfig/TrailerAid_Data3_FD1_oFD1_CAN_3abd61be] */
  /*   233 */  /* [/ActiveEcuC/Com/ComConfig/TrailerAid_Data3_FD1_oFD1_CAN_3abd61be] */
  /*   234 */  /* [/ActiveEcuC/Com/ComConfig/TrailerAid_Data3_FD1_oFD1_CAN_3abd61be] */
  /*   235 */  /* [/ActiveEcuC/Com/ComConfig/TrailerAid_Data3_FD1_oFD1_CAN_3abd61be] */
  /*   236 */  /* [/ActiveEcuC/Com/ComConfig/TrailerAid_Data3_FD1_oFD1_CAN_3abd61be] */
  /*   237 */  /* [/ActiveEcuC/Com/ComConfig/TrailerAid_Data3_FD1_oFD1_CAN_3abd61be] */
  /*   238 */  /* [/ActiveEcuC/Com/ComConfig/TrailerAid_Data_FD1_oFD1_CAN_3abd61be] */
  /*   239 */  /* [/ActiveEcuC/Com/ComConfig/TrailerAid_Data_FD1_oFD1_CAN_3abd61be] */
  /*   240 */  /* [/ActiveEcuC/Com/ComConfig/TrailerAid_Data_FD1_oFD1_CAN_3abd61be] */
  /*   241 */  /* [/ActiveEcuC/Com/ComConfig/TrailerAid_Data_FD1_oFD1_CAN_3abd61be] */
  /*   242 */  /* [/ActiveEcuC/Com/ComConfig/TrailerAid_Data_FD1_oFD1_CAN_3abd61be] */
  /*   243 */  /* [/ActiveEcuC/Com/ComConfig/TrailerAid_Data_FD1_oFD1_CAN_3abd61be] */
  /*   244 */  /* [/ActiveEcuC/Com/ComConfig/TrailerAid_Data_FD1_oFD1_CAN_3abd61be] */
  /*   245 */  /* [/ActiveEcuC/Com/ComConfig/TrailerAid_Data_FD1_oFD1_CAN_3abd61be] */
  /*   246 */  /* [/ActiveEcuC/Com/ComConfig/TrailerAid_Stat1_FD1_oFD1_CAN_3abd61be] */
  /*   247 */  /* [/ActiveEcuC/Com/ComConfig/TrailerAid_Stat1_FD1_oFD1_CAN_3abd61be] */
  /*   248 */  /* [/ActiveEcuC/Com/ComConfig/TrailerAid_Stat1_FD1_oFD1_CAN_3abd61be] */
  /*   249 */  /* [/ActiveEcuC/Com/ComConfig/TrailerAid_Stat1_FD1_oFD1_CAN_3abd61be] */
  /* Index        Referable Keys  */
  /*   250 */  /* [/ActiveEcuC/Com/ComConfig/TrailerAid_Stat1_FD1_oFD1_CAN_3abd61be] */
  /*   251 */  /* [/ActiveEcuC/Com/ComConfig/TrailerAid_Stat1_FD1_oFD1_CAN_3abd61be] */
  /*   252 */  /* [/ActiveEcuC/Com/ComConfig/TrailerAid_Stat1_FD1_oFD1_CAN_3abd61be] */
  /*   253 */  /* [/ActiveEcuC/Com/ComConfig/TrailerAid_Stat1_FD1_oFD1_CAN_3abd61be] */
  /*   254 */  /* [/ActiveEcuC/Com/ComConfig/TrailerAid_Stat2_FD1_oFD1_CAN_3abd61be] */
  /*   255 */  /* [/ActiveEcuC/Com/ComConfig/TrailerAid_Stat2_FD1_oFD1_CAN_3abd61be] */
  /*   256 */  /* [/ActiveEcuC/Com/ComConfig/TrailerAid_Stat2_FD1_oFD1_CAN_3abd61be] */
  /*   257 */  /* [/ActiveEcuC/Com/ComConfig/TrailerAid_Stat2_FD1_oFD1_CAN_3abd61be] */
  /*   258 */  /* [/ActiveEcuC/Com/ComConfig/TrailerAid_Stat2_FD1_oFD1_CAN_3abd61be] */
  /*   259 */  /* [/ActiveEcuC/Com/ComConfig/TrailerAid_Stat2_FD1_oFD1_CAN_3abd61be] */
  /*   260 */  /* [/ActiveEcuC/Com/ComConfig/TrailerAid_Stat2_FD1_oFD1_CAN_3abd61be] */
  /*   261 */  /* [/ActiveEcuC/Com/ComConfig/TrailerAid_Stat2_FD1_oFD1_CAN_3abd61be] */
  /*   262 */  /* [/ActiveEcuC/Com/ComConfig/TrailerAid_Stat3_FD1_oFD1_CAN_3abd61be] */
  /*   263 */  /* [/ActiveEcuC/Com/ComConfig/TrailerAid_Stat3_FD1_oFD1_CAN_3abd61be] */
  /*   264 */  /* [/ActiveEcuC/Com/ComConfig/TrailerAid_Stat3_FD1_oFD1_CAN_3abd61be] */
  /*   265 */  /* [/ActiveEcuC/Com/ComConfig/TrailerAid_Stat3_FD1_oFD1_CAN_3abd61be] */
  /*   266 */  /* [/ActiveEcuC/Com/ComConfig/TrailerAid_Stat3_FD1_oFD1_CAN_3abd61be] */
  /*   267 */  /* [/ActiveEcuC/Com/ComConfig/TrailerAid_Stat3_FD1_oFD1_CAN_3abd61be] */
  /*   268 */  /* [/ActiveEcuC/Com/ComConfig/TrailerAid_Stat3_FD1_oFD1_CAN_3abd61be] */
  /*   269 */  /* [/ActiveEcuC/Com/ComConfig/TrailerAid_Stat3_FD1_oFD1_CAN_3abd61be] */
  /*   270 */  /* [/ActiveEcuC/Com/ComConfig/TrailerBrakeInfo_FD1_oFD1_CAN_3abd61be] */
  /*   271 */  /* [/ActiveEcuC/Com/ComConfig/TrailerBrakeInfo_FD1_oFD1_CAN_3abd61be] */
  /*   272 */  /* [/ActiveEcuC/Com/ComConfig/TrailerBrakeInfo_FD1_oFD1_CAN_3abd61be] */
  /*   273 */  /* [/ActiveEcuC/Com/ComConfig/TrailerBrakeInfo_FD1_oFD1_CAN_3abd61be] */
  /*   274 */  /* [/ActiveEcuC/Com/ComConfig/TrailerBrakeInfo_FD1_oFD1_CAN_3abd61be] */
  /*   275 */  /* [/ActiveEcuC/Com/ComConfig/TrailerBrakeInfo_FD1_oFD1_CAN_3abd61be] */
  /*   276 */  /* [/ActiveEcuC/Com/ComConfig/TrailerBrakeInfo_FD1_oFD1_CAN_3abd61be] */
  /*   277 */  /* [/ActiveEcuC/Com/ComConfig/TrailerBrakeInfo_FD1_oFD1_CAN_3abd61be] */
  /*   278 */  /* [/ActiveEcuC/Com/ComConfig/TrailerInfo_2_FD1_oFD1_CAN_3abd61be] */
  /*   279 */  /* [/ActiveEcuC/Com/ComConfig/TrailerInfo_2_FD1_oFD1_CAN_3abd61be] */
  /*   280 */  /* [/ActiveEcuC/Com/ComConfig/TrailerInfo_2_FD1_oFD1_CAN_3abd61be] */
  /*   281 */  /* [/ActiveEcuC/Com/ComConfig/TrailerInfo_2_FD1_oFD1_CAN_3abd61be] */
  /*   282 */  /* [/ActiveEcuC/Com/ComConfig/TrailerInfo_2_FD1_oFD1_CAN_3abd61be] */
  /*   283 */  /* [/ActiveEcuC/Com/ComConfig/TrailerInfo_2_FD1_oFD1_CAN_3abd61be] */
  /*   284 */  /* [/ActiveEcuC/Com/ComConfig/TrailerInfo_2_FD1_oFD1_CAN_3abd61be] */
  /*   285 */  /* [/ActiveEcuC/Com/ComConfig/TrailerInfo_2_FD1_oFD1_CAN_3abd61be] */
  /*   286 */  /* [/ActiveEcuC/Com/ComConfig/TrailerInfo_FD1_oFD1_CAN_3abd61be] */
  /*   287 */  /* [/ActiveEcuC/Com/ComConfig/TrailerInfo_FD1_oFD1_CAN_3abd61be] */
  /*   288 */  /* [/ActiveEcuC/Com/ComConfig/TrailerInfo_FD1_oFD1_CAN_3abd61be] */
  /*   289 */  /* [/ActiveEcuC/Com/ComConfig/TrailerInfo_FD1_oFD1_CAN_3abd61be] */
  /*   290 */  /* [/ActiveEcuC/Com/ComConfig/TrailerInfo_FD1_oFD1_CAN_3abd61be] */
  /*   291 */  /* [/ActiveEcuC/Com/ComConfig/TrailerInfo_FD1_oFD1_CAN_3abd61be] */
  /*   292 */  /* [/ActiveEcuC/Com/ComConfig/TrailerInfo_FD1_oFD1_CAN_3abd61be] */
  /*   293 */  /* [/ActiveEcuC/Com/ComConfig/TrailerInfo_FD1_oFD1_CAN_3abd61be] */
  /*   294 */  /* [/ActiveEcuC/Com/ComConfig/TransGearData_FD1_oFD1_CAN_3abd61be] */
  /*   295 */  /* [/ActiveEcuC/Com/ComConfig/TransGearData_FD1_oFD1_CAN_3abd61be] */
  /*   296 */  /* [/ActiveEcuC/Com/ComConfig/TransGearData_FD1_oFD1_CAN_3abd61be] */
  /*   297 */  /* [/ActiveEcuC/Com/ComConfig/TransGearData_FD1_oFD1_CAN_3abd61be] */
  /*   298 */  /* [/ActiveEcuC/Com/ComConfig/TransGearData_FD1_oFD1_CAN_3abd61be] */
  /*   299 */  /* [/ActiveEcuC/Com/ComConfig/TransGearData_FD1_oFD1_CAN_3abd61be] */
  /* Index        Referable Keys  */
  /*   300 */  /* [/ActiveEcuC/Com/ComConfig/TransGearData_FD1_oFD1_CAN_3abd61be] */
  /*   301 */  /* [/ActiveEcuC/Com/ComConfig/TransGearData_FD1_oFD1_CAN_3abd61be] */
  /*   302 */  /* [/ActiveEcuC/Com/ComConfig/VehicleOperatingModes_FD1_oFD1_CAN_3abd61be] */
  /*   303 */  /* [/ActiveEcuC/Com/ComConfig/VehicleOperatingModes_FD1_oFD1_CAN_3abd61be] */
  /*   304 */  /* [/ActiveEcuC/Com/ComConfig/VehicleOperatingModes_FD1_oFD1_CAN_3abd61be] */
  /*   305 */  /* [/ActiveEcuC/Com/ComConfig/VehicleOperatingModes_FD1_oFD1_CAN_3abd61be] */
  /*   306 */  /* [/ActiveEcuC/Com/ComConfig/VehicleOperatingModes_FD1_oFD1_CAN_3abd61be] */
  /*   307 */  /* [/ActiveEcuC/Com/ComConfig/VehicleOperatingModes_FD1_oFD1_CAN_3abd61be] */
  /*   308 */  /* [/ActiveEcuC/Com/ComConfig/VehicleOperatingModes_FD1_oFD1_CAN_3abd61be] */
  /*   309 */  /* [/ActiveEcuC/Com/ComConfig/VehicleOperatingModes_FD1_oFD1_CAN_3abd61be] */
  /*   310 */  /* [/ActiveEcuC/Com/ComConfig/WheelData_FD1_oFD1_CAN_3abd61be] */
  /*   311 */  /* [/ActiveEcuC/Com/ComConfig/WheelData_FD1_oFD1_CAN_3abd61be] */
  /*   312 */  /* [/ActiveEcuC/Com/ComConfig/WheelData_FD1_oFD1_CAN_3abd61be] */
  /*   313 */  /* [/ActiveEcuC/Com/ComConfig/WheelData_FD1_oFD1_CAN_3abd61be] */
  /*   314 */  /* [/ActiveEcuC/Com/ComConfig/WheelData_FD1_oFD1_CAN_3abd61be] */
  /*   315 */  /* [/ActiveEcuC/Com/ComConfig/WheelData_FD1_oFD1_CAN_3abd61be] */
  /*   316 */  /* [/ActiveEcuC/Com/ComConfig/WheelData_FD1_oFD1_CAN_3abd61be] */
  /*   317 */  /* [/ActiveEcuC/Com/ComConfig/WheelData_FD1_oFD1_CAN_3abd61be] */
  /*   318 */  /* [/ActiveEcuC/Com/ComConfig/WheelSpeed_FD1_oFD1_CAN_3abd61be] */
  /*   319 */  /* [/ActiveEcuC/Com/ComConfig/WheelSpeed_FD1_oFD1_CAN_3abd61be] */
  /*   320 */  /* [/ActiveEcuC/Com/ComConfig/WheelSpeed_FD1_oFD1_CAN_3abd61be] */
  /*   321 */  /* [/ActiveEcuC/Com/ComConfig/WheelSpeed_FD1_oFD1_CAN_3abd61be] */
  /*   322 */  /* [/ActiveEcuC/Com/ComConfig/WheelSpeed_FD1_oFD1_CAN_3abd61be] */
  /*   323 */  /* [/ActiveEcuC/Com/ComConfig/WheelSpeed_FD1_oFD1_CAN_3abd61be] */
  /*   324 */  /* [/ActiveEcuC/Com/ComConfig/WheelSpeed_FD1_oFD1_CAN_3abd61be] */
  /*   325 */  /* [/ActiveEcuC/Com/ComConfig/WheelSpeed_FD1_oFD1_CAN_3abd61be] */
  /*   326 */  /* [/ActiveEcuC/Com/ComConfig/Yaw_Data_FD1_oFD1_CAN_3abd61be] */
  /*   327 */  /* [/ActiveEcuC/Com/ComConfig/Yaw_Data_FD1_oFD1_CAN_3abd61be] */
  /*   328 */  /* [/ActiveEcuC/Com/ComConfig/Yaw_Data_FD1_oFD1_CAN_3abd61be] */
  /*   329 */  /* [/ActiveEcuC/Com/ComConfig/Yaw_Data_FD1_oFD1_CAN_3abd61be] */
  /*   330 */  /* [/ActiveEcuC/Com/ComConfig/Yaw_Data_FD1_oFD1_CAN_3abd61be] */
  /*   331 */  /* [/ActiveEcuC/Com/ComConfig/Yaw_Data_FD1_oFD1_CAN_3abd61be] */
  /*   332 */  /* [/ActiveEcuC/Com/ComConfig/Yaw_Data_FD1_oFD1_CAN_3abd61be] */
  /*   333 */  /* [/ActiveEcuC/Com/ComConfig/Yaw_Data_FD1_oFD1_CAN_3abd61be] */

#define COM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Com_RxDeferredProcessingISRLockCounter
**********************************************************************************************************************/
#define COM_START_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Com_RxDeferredProcessingISRLockCounterType, COM_VAR_NOINIT) Com_RxDeferredProcessingISRLockCounter;
#define COM_STOP_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Com_RxIPduGroupISRLockCounter
**********************************************************************************************************************/
#define COM_START_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Com_RxIPduGroupISRLockCounterType, COM_VAR_NOINIT) Com_RxIPduGroupISRLockCounter;
#define COM_STOP_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Com_RxIPduGroupStopISRLockCounter
**********************************************************************************************************************/
#define COM_START_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Com_RxIPduGroupStopISRLockCounterType, COM_VAR_NOINIT) Com_RxIPduGroupStopISRLockCounter;
#define COM_STOP_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Com_RxPduDmState
**********************************************************************************************************************/
/** 
  \var    Com_RxPduDmState
  \brief  Rx I-PDU based deadline monitoring state (started/stopped) of the corresponding I-PDU-Group.
*/ 
#define COM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Com_RxPduDmStateType, COM_VAR_NOINIT) Com_RxPduDmState[26];
  /* Index        Referable Keys  */
  /*     0 */  /* [/ActiveEcuC/Com/ComConfig/YawStabilityIndex_706a037f, /ActiveEcuC/Com/ComConfig/ABS_BrkBst_Data_FD1_oFD1_CAN_3abd61be, /ActiveEcuC/Com/ComConfig/ABS_BrkBst_Data_FD1_oFD1_CAN_3abd61bePduBased] */
  /*     1 */  /* [/ActiveEcuC/Com/ComConfig/TrlrAidMde_D_Rq_a35cbfab, /ActiveEcuC/Com/ComConfig/APIM_Send_Signals_2_FD1_oFD1_CAN_3abd61be, /ActiveEcuC/Com/ComConfig/APIM_Send_Signals_2_FD1_oFD1_CAN_3abd61bePduBased] */
  /*     2 */  /* [/ActiveEcuC/Com/ComConfig/Ignition_Status_3c341b34, /ActiveEcuC/Com/ComConfig/BodyInfo_3_FD1_oFD1_CAN_3abd61be, /ActiveEcuC/Com/ComConfig/BodyInfo_3_FD1_oFD1_CAN_3abd61bePduBased] */
  /*     3 */  /* [/ActiveEcuC/Com/ComConfig/VehLatComp_A_Actl_470bb112, /ActiveEcuC/Com/ComConfig/BrakeSnData_3_FD1_oFD1_CAN_3abd61be, /ActiveEcuC/Com/ComConfig/BrakeSnData_3_FD1_oFD1_CAN_3abd61bePduBased] */
  /*     4 */  /* [/ActiveEcuC/Com/ComConfig/BrkTot_Tq_Actl_22c61bd2, /ActiveEcuC/Com/ComConfig/BrakeSnData_4_FD1_oFD1_CAN_3abd61be, /ActiveEcuC/Com/ComConfig/BrakeSnData_4_FD1_oFD1_CAN_3abd61bePduBased] */
  /*     5 */  /* [/ActiveEcuC/Com/ComConfig/StePinOffst_D_Stat_c3a8df7f, /ActiveEcuC/Com/ComConfig/BrakeSnData_6_FD1_oFD1_CAN_3abd61be, /ActiveEcuC/Com/ComConfig/BrakeSnData_6_FD1_oFD1_CAN_3abd61bePduBased] */
  /*     6 */  /* [/ActiveEcuC/Com/ComConfig/SelDrvMdeChassis2_D_Rq_e000acae, /ActiveEcuC/Com/ComConfig/BrakeSysFeatures_3_oFD1_CAN_3abd61be, /ActiveEcuC/Com/ComConfig/BrakeSysFeatures_3_oFD1_CAN_3abd61bePduBased] */
  /*     7 */  /* [/ActiveEcuC/Com/ComConfig/Veh_V_ActlBrk_9f750b9f, /ActiveEcuC/Com/ComConfig/BrakeSysFeatures_FD1_oFD1_CAN_3abd61be, /ActiveEcuC/Com/ComConfig/BrakeSysFeatures_FD1_oFD1_CAN_3abd61bePduBased] */
  /*     8 */  /* [/ActiveEcuC/Com/ComConfig/Outside_Air_Temp_Stat_f1463698, /ActiveEcuC/Com/ComConfig/Climate_Control_Data_FD1_oFD1_CAN_3abd61be, /ActiveEcuC/Com/ComConfig/Climate_Control_Data_FD1_oFD1_CAN_3abd61bePduBased] */
  /*     9 */  /* [/ActiveEcuC/Com/ComConfig/OdometerMasterValue_09a60c78, /ActiveEcuC/Com/ComConfig/Cluster_Info1_FD1_oFD1_CAN_3abd61be, /ActiveEcuC/Com/ComConfig/Cluster_Info1_FD1_oFD1_CAN_3abd61bePduBased] */
  /*    10 */  /* [/ActiveEcuC/Com/ComConfig/CmbbDeny_B_ActlBrk_eaa4779a, /ActiveEcuC/Com/ComConfig/DesiredTorqBrk_FD1_oFD1_CAN_3abd61be, /ActiveEcuC/Com/ComConfig/DesiredTorqBrk_FD1_oFD1_CAN_3abd61bePduBased] */
  /*    11 */  /* [/ActiveEcuC/Com/ComConfig/VehVActlEng_D_Qf_2508f61f, /ActiveEcuC/Com/ComConfig/EngVehicleSpThrottle2_FD1_oFD1_CAN_3abd61be, /ActiveEcuC/Com/ComConfig/EngVehicleSpThrottle2_FD1_oFD1_CAN_3abd61bePduBased] */
  /*    12 */  /* [/ActiveEcuC/Com/ComConfig/VehicleGGCCData_575096ac, /ActiveEcuC/Com/ComConfig/GGCC_Config_Mgmt_ID_1_FD1_oFD1_CAN_3abd61be, /ActiveEcuC/Com/ComConfig/GGCC_Config_Mgmt_ID_1_FD1_oFD1_CAN_3abd61bePduBased] */
  /*    13 */  /* [/ActiveEcuC/Com/ComConfig/LaCurvature_No_Calc_d64ac390, /ActiveEcuC/Com/ComConfig/Lane_Assist_Data1_FD1_oFD1_CAN_3abd61be, /ActiveEcuC/Com/ComConfig/Lane_Assist_Data1_FD1_oFD1_CAN_3abd61bePduBased] */
  /*    14 */  /* [/ActiveEcuC/Com/ComConfig/LatCtlRampType_D_Rq_5abef978, /ActiveEcuC/Com/ComConfig/LateralMotionControl_FD1_oFD1_CAN_3abd61be, /ActiveEcuC/Com/ComConfig/LateralMotionControl_FD1_oFD1_CAN_3abd61bePduBased] */
  /*    15 */  /* [/ActiveEcuC/Com/ComConfig/EsaOn_B_Rq_bffaafb8, /ActiveEcuC/Com/ComConfig/Mc_Send_Signals_2_FD1_oFD1_CAN_3abd61be, /ActiveEcuC/Com/ComConfig/Mc_Send_Signals_2_FD1_oFD1_CAN_3abd61bePduBased] */
  /*    16 */  /* [/ActiveEcuC/Com/ComConfig/EsaEnbl_D2_Rq_dafea5bb, /ActiveEcuC/Com/ComConfig/Steer_Assist_Data_FD1_oFD1_CAN_3abd61be, /ActiveEcuC/Com/ComConfig/Steer_Assist_Data_FD1_oFD1_CAN_3abd61bePduBased] */
  /*    17 */  /* [/ActiveEcuC/Com/ComConfig/TurnLghtSwtch_D_Stat_7262fead, /ActiveEcuC/Com/ComConfig/Steering_Data_FD1_oFD1_CAN_3abd61be, /ActiveEcuC/Com/ComConfig/Steering_Data_FD1_oFD1_CAN_3abd61bePduBased] */
  /*    18 */  /* [/ActiveEcuC/Com/ComConfig/HitchToVehAxle_L_Calc_0bf22cce, /ActiveEcuC/Com/ComConfig/TrailerAid_Stat3_FD1_oFD1_CAN_3abd61be, /ActiveEcuC/Com/ComConfig/TrailerAid_Stat3_FD1_oFD1_CAN_3abd61bePduBased] */
  /*    19 */  /* [/ActiveEcuC/Com/ComConfig/TrlrAidSwtch_D_RqDrv_372f28fe, /ActiveEcuC/Com/ComConfig/TrailerInfo_2_FD1_oFD1_CAN_3abd61be, /ActiveEcuC/Com/ComConfig/TrailerInfo_2_FD1_oFD1_CAN_3abd61bePduBased] */
  /*    20 */  /* [/ActiveEcuC/Com/ComConfig/TrlrLampCnnct_B_Actl_6acffff2, /ActiveEcuC/Com/ComConfig/TrailerInfo_FD1_oFD1_CAN_3abd61be, /ActiveEcuC/Com/ComConfig/TrailerInfo_FD1_oFD1_CAN_3abd61bePduBased] */
  /*    21 */  /* [/ActiveEcuC/Com/ComConfig/GearLvrPos_D_Actl_8c4ca771, /ActiveEcuC/Com/ComConfig/TransGearData_FD1_oFD1_CAN_3abd61be, /ActiveEcuC/Com/ComConfig/TransGearData_FD1_oFD1_CAN_3abd61bePduBased] */
  /*    22 */  /* [/ActiveEcuC/Com/ComConfig/PwPckTq_D_Stat_e6deed9e, /ActiveEcuC/Com/ComConfig/VehicleOperatingModes_FD1_oFD1_CAN_3abd61be, /ActiveEcuC/Com/ComConfig/VehicleOperatingModes_FD1_oFD1_CAN_3abd61bePduBased] */
  /*    23 */  /* [/ActiveEcuC/Com/ComConfig/WhlDirFl_D_Actl_91fa0768, /ActiveEcuC/Com/ComConfig/WheelData_FD1_oFD1_CAN_3abd61be, /ActiveEcuC/Com/ComConfig/WheelData_FD1_oFD1_CAN_3abd61bePduBased] */
  /*    24 */  /* [/ActiveEcuC/Com/ComConfig/WhlFl_W_Meas_5a620481, /ActiveEcuC/Com/ComConfig/WheelSpeed_FD1_oFD1_CAN_3abd61be, /ActiveEcuC/Com/ComConfig/WheelSpeed_FD1_oFD1_CAN_3abd61bePduBased] */
  /*    25 */  /* [/ActiveEcuC/Com/ComConfig/VehYaw_W_Actl_f318059c, /ActiveEcuC/Com/ComConfig/Yaw_Data_FD1_oFD1_CAN_3abd61be, /ActiveEcuC/Com/ComConfig/Yaw_Data_FD1_oFD1_CAN_3abd61bePduBased] */

#define COM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Com_RxPduGrpActive
**********************************************************************************************************************/
/** 
  \var    Com_RxPduGrpActive
  \brief  Rx I-PDU based state (started/stopped) of the corresponding I-PDU-Group.
*/ 
#define COM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Com_RxPduGrpActiveType, COM_VAR_NOINIT) Com_RxPduGrpActive[42];
#define COM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Com_RxSigBufferArrayBased
**********************************************************************************************************************/
/** 
  \var    Com_RxSigBufferArrayBased
  \brief  Rx Signal and Group Signal Buffer. (UINT8_N, UINT8_DYN)
*/ 
#define COM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Com_RxSigBufferArrayBasedUType, COM_VAR_NOINIT) Com_RxSigBufferArrayBased;  /* PRQA S 0759 */  /* MD_CSL_18.4 */
  /* Index        Referable Keys  */
  /*     0 */  /* [/ActiveEcuC/Com/ComConfig/TrlrSnsId_No_Actl_ea9ce863] */
  /*     1 */  /* [/ActiveEcuC/Com/ComConfig/TrlrSnsId_No_Actl_ea9ce863] */
  /*     2 */  /* [/ActiveEcuC/Com/ComConfig/TrlrSnsId_No_Actl_ea9ce863] */
  /*     3 */  /* [/ActiveEcuC/Com/ComConfig/TrlrSnsId_No_Actl_ea9ce863] */
  /*     4 */  /* [/ActiveEcuC/Com/ComConfig/TrlrSnsId_No_Actl_ea9ce863] */
  /*     5 */  /* [/ActiveEcuC/Com/ComConfig/TrlrSnsId_No_Actl_ea9ce863] */
  /*     6 */  /* [/ActiveEcuC/Com/ComConfig/VehicleGGCCData_575096ac] */
  /*     7 */  /* [/ActiveEcuC/Com/ComConfig/VehicleGGCCData_575096ac] */
  /*     8 */  /* [/ActiveEcuC/Com/ComConfig/VehicleGGCCData_575096ac] */
  /*     9 */  /* [/ActiveEcuC/Com/ComConfig/VehicleGGCCData_575096ac] */
  /*    10 */  /* [/ActiveEcuC/Com/ComConfig/VehicleGGCCData_575096ac] */
  /*    11 */  /* [/ActiveEcuC/Com/ComConfig/VehicleGGCCData_575096ac] */
  /*    12 */  /* [/ActiveEcuC/Com/ComConfig/VehicleGGCCData_575096ac] */
  /*    13 */  /* [/ActiveEcuC/Com/ComConfig/VehicleGGCCData_575096ac] */

#define COM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Com_RxSigBufferUInt16
**********************************************************************************************************************/
/** 
  \var    Com_RxSigBufferUInt16
  \brief  Rx Signal and Group Signal Buffer. (UINT16)
*/ 
#define COM_START_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Com_RxSigBufferUInt16UType, COM_VAR_NOINIT) Com_RxSigBufferUInt16;  /* PRQA S 0759 */  /* MD_CSL_18.4 */
  /* Index        Referable Keys  */
  /*     0 */  /* [/ActiveEcuC/Com/ComConfig/ApedPos_Pc_ActlArb_a3d34b0d] */
  /*     1 */  /* [/ActiveEcuC/Com/ComConfig/BrkTot_Tq_Actl_22c61bd2] */
  /*     2 */  /* [/ActiveEcuC/Com/ComConfig/CmbbObjDistLat_L_Actl_dafea5bb] */
  /*     3 */  /* [/ActiveEcuC/Com/ComConfig/CmbbObjDistLong_L_Actl_dafea5bb] */
  /*     4 */  /* [/ActiveEcuC/Com/ComConfig/CmbbObjRelLat_V_Actl_dafea5bb] */
  /*     5 */  /* [/ActiveEcuC/Com/ComConfig/CmbbObjRelLong_V_Actl_dafea5bb] */
  /*     6 */  /* [/ActiveEcuC/Com/ComConfig/DeliveryIdle_f2797042] */
  /*     7 */  /* [/ActiveEcuC/Com/ComConfig/EngAout_N_Actl_a3d34b0d] */
  /*     8 */  /* [/ActiveEcuC/Com/ComConfig/ExtSteeringAngleReq2_ef286bfc] */
  /*     9 */  /* [/ActiveEcuC/Com/ComConfig/LaCurvature_No_Calc_d64ac390] */
  /*    10 */  /* [/ActiveEcuC/Com/ComConfig/LaRefAng_No_Req_d64ac390] */
  /*    11 */  /* [/ActiveEcuC/Com/ComConfig/LatCtlCurv_NoRate_Actl_5abef978] */
  /*    12 */  /* [/ActiveEcuC/Com/ComConfig/LatCtlCurv_No_Actl_5abef978] */
  /*    13 */  /* [/ActiveEcuC/Com/ComConfig/LatCtlPathOffst_L_Actl_5abef978] */
  /*    14 */  /* [/ActiveEcuC/Com/ComConfig/LatCtlPath_An_Actl_5abef978] */
  /*    15 */  /* [/ActiveEcuC/Com/ComConfig/PrplWhlTot2_Tq_Actl_e6deed9e] */
  /*    16 */  /* [/ActiveEcuC/Com/ComConfig/StePinOffst_An_Est_c3a8df7f] */
  /*    17 */  /* [/ActiveEcuC/Com/ComConfig/SteWhlRelCalib_An_Sns_11fa9ae5] */
  /*    18 */  /* [/ActiveEcuC/Com/ComConfig/TrlrAidCtl_U_RqDrv_372f28fe] */
  /*    19 */  /* [/ActiveEcuC/Com/ComConfig/TrlrAid_An3_Actl_0bf22cce] */
  /*    20 */  /* [/ActiveEcuC/Com/ComConfig/TrlrAid_AnRate2_Actl_0bf22cce] */
  /*    21 */  /* [/ActiveEcuC/Com/ComConfig/TrlrAxleToBmpr_L_Actl_0edbb78e] */
  /*    22 */  /* [/ActiveEcuC/Com/ComConfig/TrlrHitYaw_AnRate_Actl_96fdcdb8] */
  /*    23 */  /* [/ActiveEcuC/Com/ComConfig/TrlrHitchYaw_An_Actl_96fdcdb8] */
  /*    24 */  /* [/ActiveEcuC/Com/ComConfig/TrlrYaw_W_Actl_96fdcdb8] */
  /*    25 */  /* [/ActiveEcuC/Com/ComConfig/VehLatComp_A_Actl_470bb112] */
  /*    26 */  /* [/ActiveEcuC/Com/ComConfig/VehLongComp_A_Actl_470bb112] */
  /*    27 */  /* [/ActiveEcuC/Com/ComConfig/VehOverGnd_V_Est_470bb112] */
  /*    28 */  /* [/ActiveEcuC/Com/ComConfig/VehVertComp_A_Actl_22c61bd2] */
  /*    29 */  /* [/ActiveEcuC/Com/ComConfig/VehYawComp_W_Actl_470bb112] */
  /*    30 */  /* [/ActiveEcuC/Com/ComConfig/VehYaw_W_Actl_f318059c] */
  /*    31 */  /* [/ActiveEcuC/Com/ComConfig/Veh_V_ActlBrk_9f750b9f] */
  /*    32 */  /* [/ActiveEcuC/Com/ComConfig/Veh_V_ActlEng_2508f61f] */
  /*    33 */  /* [/ActiveEcuC/Com/ComConfig/WhlFl_W_Meas_5a620481] */
  /*    34 */  /* [/ActiveEcuC/Com/ComConfig/WhlFr_W_Meas_5a620481] */
  /*    35 */  /* [/ActiveEcuC/Com/ComConfig/WhlRl_W_Meas_5a620481] */
  /*    36 */  /* [/ActiveEcuC/Com/ComConfig/WhlRr_W_Meas_5a620481] */
  /*    37 */  /* [/ActiveEcuC/Com/ComConfig/YawStabilityIndex_706a037f] */

#define COM_STOP_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Com_RxSigBufferUInt32
**********************************************************************************************************************/
/** 
  \var    Com_RxSigBufferUInt32
  \brief  Rx Signal and Group Signal Buffer. (UINT32)
*/ 
#define COM_START_SEC_VAR_NOINIT_32BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Com_RxSigBufferUInt32UType, COM_VAR_NOINIT) Com_RxSigBufferUInt32;  /* PRQA S 0759 */  /* MD_CSL_18.4 */
  /* Index        Referable Keys  */
  /*     0 */  /* [/ActiveEcuC/Com/ComConfig/DeliverySipNumber_f2797042] */
  /*     1 */  /* [/ActiveEcuC/Com/ComConfig/DeliverySubProjectNumber_f2797042] */
  /*     2 */  /* [/ActiveEcuC/Com/ComConfig/OdometerMasterValue_09a60c78] */

#define COM_STOP_SEC_VAR_NOINIT_32BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Com_RxSigBufferUInt8
**********************************************************************************************************************/
/** 
  \var    Com_RxSigBufferUInt8
  \brief  Rx Signal and Group Signal Buffer. (BOOLEAN, UINT8)
*/ 
#define COM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Com_RxSigBufferUInt8UType, COM_VAR_NOINIT) Com_RxSigBufferUInt8;  /* PRQA S 0759 */  /* MD_CSL_18.4 */
  /* Index        Referable Keys  */
  /*     0 */  /* [/ActiveEcuC/Com/ComConfig/AbsActv_B_Actl_eaa4779a] */
  /*     1 */  /* [/ActiveEcuC/Com/ComConfig/ApaSys_D_Stat_ef286bfc] */
  /*     2 */  /* [/ActiveEcuC/Com/ComConfig/ApedPosPcActl_D_Qf_a3d34b0d] */
  /*     3 */  /* [/ActiveEcuC/Com/ComConfig/BPedDrvAppl_D_QF_aea354aa] */
  /*     4 */  /* [/ActiveEcuC/Com/ComConfig/BattULo_U_Actl_0a3b9a6b] */
  /*     5 */  /* [/ActiveEcuC/Com/ComConfig/BpedDrvAppl_D_Actl_aea354aa] */
  /*     6 */  /* [/ActiveEcuC/Com/ComConfig/CmbbBrkDis_B_Actl_eaa4779a] */
  /*     7 */  /* [/ActiveEcuC/Com/ComConfig/CmbbDeny_B_ActlBrk_eaa4779a] */
  /*     8 */  /* [/ActiveEcuC/Com/ComConfig/CmbbObjClass_D_Stat_dafea5bb] */
  /*     9 */  /* [/ActiveEcuC/Com/ComConfig/CmbbObjColl_T_Actl_dafea5bb] */
  /*    10 */  /* [/ActiveEcuC/Com/ComConfig/CmbbObjConfdnc_D_Stat_dafea5bb] */
  /*    11 */  /* [/ActiveEcuC/Com/ComConfig/DeliveryNumber_f2797042] */
  /*    12 */  /* [/ActiveEcuC/Com/ComConfig/DrvSte_D_Stat_bfc9faa4] */
  /*    13 */  /* [/ActiveEcuC/Com/ComConfig/DrvSte_Tq_Rq_bfc9faa4] */
  /*    14 */  /* [/ActiveEcuC/Com/ComConfig/EPASExtAngleStatReq_ef286bfc] */
  /*    15 */  /* [/ActiveEcuC/Com/ComConfig/ElPw_D_StatStrtStop_e6deed9e] */
  /*    16 */  /* [/ActiveEcuC/Com/ComConfig/ElPw_D_Stat_e6deed9e] */
  /*    17 */  /* [/ActiveEcuC/Com/ComConfig/EsaEnbl_D2_Rq_dafea5bb] */
  /*    18 */  /* [/ActiveEcuC/Com/ComConfig/EsaOn_B_Rq_bffaafb8] */
  /*    19 */  /* [/ActiveEcuC/Com/ComConfig/FileVersionDay_216bb0c2] */
  /*    20 */  /* [/ActiveEcuC/Com/ComConfig/FileVersionMonth_216bb0c2] */
  /*    21 */  /* [/ActiveEcuC/Com/ComConfig/FileVersionNumber_216bb0c2] */
  /*    22 */  /* [/ActiveEcuC/Com/ComConfig/FileVersionYear_216bb0c2] */
  /*    23 */  /* [/ActiveEcuC/Com/ComConfig/GearLvrPos_D_Actl_8c4ca771] */
  /*    24 */  /* [/ActiveEcuC/Com/ComConfig/GearPos_D_Actl_1e331f99] */
  /*    25 */  /* [/ActiveEcuC/Com/ComConfig/GearRvrse_D_Actl_2508f61f] */
  /*    26 */  /* [/ActiveEcuC/Com/ComConfig/HandsOffCnfm_B_Rq_5abef978] */
  /*    27 */  /* [/ActiveEcuC/Com/ComConfig/HitchToVehAxle_L_Calc_0bf22cce] */
  /*    28 */  /* [/ActiveEcuC/Com/ComConfig/Ignition_Status_3c341b34] */
  /*    29 */  /* [/ActiveEcuC/Com/ComConfig/LaRampType_B_Req_d64ac390] */
  /*    30 */  /* [/ActiveEcuC/Com/ComConfig/LatCtlPrecision_D_Rq_5abef978] */
  /*    31 */  /* [/ActiveEcuC/Com/ComConfig/LatCtlRampType_D_Rq_5abef978] */
  /*    32 */  /* [/ActiveEcuC/Com/ComConfig/LatCtlRng_L_Max_5abef978] */
  /*    33 */  /* [/ActiveEcuC/Com/ComConfig/LatCtl_D_Rq_5abef978] */
  /*    34 */  /* [/ActiveEcuC/Com/ComConfig/LdwActvIntns_D_Req_d64ac390] */
  /*    35 */  /* [/ActiveEcuC/Com/ComConfig/LdwActvStats_D_Req_d64ac390] */
  /*    36 */  /* [/ActiveEcuC/Com/ComConfig/LifeCycMde_D_Actl_3c341b34] */
  /*    37 */  /* [/ActiveEcuC/Com/ComConfig/LkaActvStats_D2_Req_d64ac390] */
  /*    38 */  /* [/ActiveEcuC/Com/ComConfig/LkaDrvOvrrd_D_Rq_d64ac390] */
  /*    39 */  /* [/ActiveEcuC/Com/ComConfig/LsmcBrkDecel_D_Stat_9f750b9f] */
  /*    40 */  /* [/ActiveEcuC/Com/ComConfig/Outside_Air_Temp_Stat_f1463698] */
  /*    41 */  /* [/ActiveEcuC/Com/ComConfig/PwPckTq_D_Stat_e6deed9e] */
  /*    42 */  /* [/ActiveEcuC/Com/ComConfig/SelDrvMdeChassis2_D_Rq_e000acae] */
  /*    43 */  /* [/ActiveEcuC/Com/ComConfig/StabCtlBrkActv_B_Actl_eaa4779a] */
  /*    44 */  /* [/ActiveEcuC/Com/ComConfig/StePinOffst_D_Stat_c3a8df7f] */
  /*    45 */  /* [/ActiveEcuC/Com/ComConfig/StePinOffst_No_Cnt_c3a8df7f] */
  /*    46 */  /* [/ActiveEcuC/Com/ComConfig/StePinOffst_No_Cs_c3a8df7f] */
  /*    47 */  /* [/ActiveEcuC/Com/ComConfig/TrlrAidCancl_B_Rq_630ef174] */
  /*    48 */  /* [/ActiveEcuC/Com/ComConfig/TrlrAidEnbl_D2_Rq_cc1bcd0f] */
  /*    49 */  /* [/ActiveEcuC/Com/ComConfig/TrlrAidMde_D_Rq_a35cbfab] */
  /* Index        Referable Keys  */
  /*    50 */  /* [/ActiveEcuC/Com/ComConfig/TrlrAidSetup_D2_Rq_cc1bcd0f] */
  /*    51 */  /* [/ActiveEcuC/Com/ComConfig/TrlrAidSwtch_D_RqDrv_372f28fe] */
  /*    52 */  /* [/ActiveEcuC/Com/ComConfig/TrlrAidTrgtId_No_Actl_0bf22cce] */
  /*    53 */  /* [/ActiveEcuC/Com/ComConfig/TrlrAid_D2_Stat_0bf22cce] */
  /*    54 */  /* [/ActiveEcuC/Com/ComConfig/TrlrAnOffstDir_D_Mem_0edbb78e] */
  /*    55 */  /* [/ActiveEcuC/Com/ComConfig/TrlrBrkActCnnct_B_Actl_e983cb78] */
  /*    56 */  /* [/ActiveEcuC/Com/ComConfig/TrlrHitchYaw_D_Stat_96fdcdb8] */
  /*    57 */  /* [/ActiveEcuC/Com/ComConfig/TrlrIdType_D_Stat_0edbb78e] */
  /*    58 */  /* [/ActiveEcuC/Com/ComConfig/TrlrId_No_Actl_0edbb78e] */
  /*    59 */  /* [/ActiveEcuC/Com/ComConfig/TrlrLampCnnct_B_Actl_6acffff2] */
  /*    60 */  /* [/ActiveEcuC/Com/ComConfig/TrlrRvrseCancl_B_Rq_0edbb78e] */
  /*    61 */  /* [/ActiveEcuC/Com/ComConfig/TrlrRvrseEnbl_D2_Stat_ae9dea9d] */
  /*    62 */  /* [/ActiveEcuC/Com/ComConfig/TrlrRvrseMsgTxt_D2_Rq_ae9dea9d] */
  /*    63 */  /* [/ActiveEcuC/Com/ComConfig/TrlrRvrse_D_Stat_0bf22cce] */
  /*    64 */  /* [/ActiveEcuC/Com/ComConfig/TrlrTrgtAcquire_D_Stat_0bf22cce] */
  /*    65 */  /* [/ActiveEcuC/Com/ComConfig/TrlrYawWActl_D_Qf_96fdcdb8] */
  /*    66 */  /* [/ActiveEcuC/Com/ComConfig/TrnRng_D_Rq_1e331f99] */
  /*    67 */  /* [/ActiveEcuC/Com/ComConfig/TurnLghtSwtch_D_Stat_7262fead] */
  /*    68 */  /* [/ActiveEcuC/Com/ComConfig/VehVActlBrk_D_Qf_9f750b9f] */
  /*    69 */  /* [/ActiveEcuC/Com/ComConfig/VehVActlBrk_No_Cnt_9f750b9f] */
  /*    70 */  /* [/ActiveEcuC/Com/ComConfig/VehVActlBrk_No_Cs_9f750b9f] */
  /*    71 */  /* [/ActiveEcuC/Com/ComConfig/VehVActlEng_D_Qf_2508f61f] */
  /*    72 */  /* [/ActiveEcuC/Com/ComConfig/VehVActlEng_No_Cnt_2508f61f] */
  /*    73 */  /* [/ActiveEcuC/Com/ComConfig/VehVActlEng_No_Cs_2508f61f] */
  /*    74 */  /* [/ActiveEcuC/Com/ComConfig/VehVTrlrAid_B_Avail_2508f61f] */
  /*    75 */  /* [/ActiveEcuC/Com/ComConfig/WhlDirFl_D_Actl_91fa0768] */
  /*    76 */  /* [/ActiveEcuC/Com/ComConfig/WhlDirFr_D_Actl_91fa0768] */
  /*    77 */  /* [/ActiveEcuC/Com/ComConfig/WhlDirRl_D_Actl_91fa0768] */
  /*    78 */  /* [/ActiveEcuC/Com/ComConfig/WhlDirRr_D_Actl_91fa0768] */
  /*    79 */  /* [/ActiveEcuC/Com/ComConfig/WhlRotatFl_No_Cnt_91fa0768] */
  /*    80 */  /* [/ActiveEcuC/Com/ComConfig/WhlRotatFr_No_Cnt_91fa0768] */
  /*    81 */  /* [/ActiveEcuC/Com/ComConfig/WhlRotatRl_No_Cnt_91fa0768] */
  /*    82 */  /* [/ActiveEcuC/Com/ComConfig/WhlRotatRr_No_Cnt_91fa0768] */

#define COM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Com_RxTOutCnt
**********************************************************************************************************************/
/** 
  \var    Com_RxTOutCnt
  \brief  This array holds timeout counters for all Rx timeout objects.
*/ 
#define COM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Com_RxTOutCntType, COM_VAR_NOINIT) Com_RxTOutCnt[26];
  /* Index        Referable Keys  */
  /*     0 */  /* [/ActiveEcuC/Com/ComConfig/YawStabilityIndex_706a037f, /ActiveEcuC/Com/ComConfig/ABS_BrkBst_Data_FD1_oFD1_CAN_3abd61be, /ActiveEcuC/Com/ComConfig/ABS_BrkBst_Data_FD1_oFD1_CAN_3abd61bePduBased] */
  /*     1 */  /* [/ActiveEcuC/Com/ComConfig/TrlrAidMde_D_Rq_a35cbfab, /ActiveEcuC/Com/ComConfig/APIM_Send_Signals_2_FD1_oFD1_CAN_3abd61be, /ActiveEcuC/Com/ComConfig/APIM_Send_Signals_2_FD1_oFD1_CAN_3abd61bePduBased] */
  /*     2 */  /* [/ActiveEcuC/Com/ComConfig/Ignition_Status_3c341b34, /ActiveEcuC/Com/ComConfig/BodyInfo_3_FD1_oFD1_CAN_3abd61be, /ActiveEcuC/Com/ComConfig/BodyInfo_3_FD1_oFD1_CAN_3abd61bePduBased] */
  /*     3 */  /* [/ActiveEcuC/Com/ComConfig/VehLatComp_A_Actl_470bb112, /ActiveEcuC/Com/ComConfig/BrakeSnData_3_FD1_oFD1_CAN_3abd61be, /ActiveEcuC/Com/ComConfig/BrakeSnData_3_FD1_oFD1_CAN_3abd61bePduBased] */
  /*     4 */  /* [/ActiveEcuC/Com/ComConfig/BrkTot_Tq_Actl_22c61bd2, /ActiveEcuC/Com/ComConfig/BrakeSnData_4_FD1_oFD1_CAN_3abd61be, /ActiveEcuC/Com/ComConfig/BrakeSnData_4_FD1_oFD1_CAN_3abd61bePduBased] */
  /*     5 */  /* [/ActiveEcuC/Com/ComConfig/StePinOffst_D_Stat_c3a8df7f, /ActiveEcuC/Com/ComConfig/BrakeSnData_6_FD1_oFD1_CAN_3abd61be, /ActiveEcuC/Com/ComConfig/BrakeSnData_6_FD1_oFD1_CAN_3abd61bePduBased] */
  /*     6 */  /* [/ActiveEcuC/Com/ComConfig/SelDrvMdeChassis2_D_Rq_e000acae, /ActiveEcuC/Com/ComConfig/BrakeSysFeatures_3_oFD1_CAN_3abd61be, /ActiveEcuC/Com/ComConfig/BrakeSysFeatures_3_oFD1_CAN_3abd61bePduBased] */
  /*     7 */  /* [/ActiveEcuC/Com/ComConfig/Veh_V_ActlBrk_9f750b9f, /ActiveEcuC/Com/ComConfig/BrakeSysFeatures_FD1_oFD1_CAN_3abd61be, /ActiveEcuC/Com/ComConfig/BrakeSysFeatures_FD1_oFD1_CAN_3abd61bePduBased] */
  /*     8 */  /* [/ActiveEcuC/Com/ComConfig/Outside_Air_Temp_Stat_f1463698, /ActiveEcuC/Com/ComConfig/Climate_Control_Data_FD1_oFD1_CAN_3abd61be, /ActiveEcuC/Com/ComConfig/Climate_Control_Data_FD1_oFD1_CAN_3abd61bePduBased] */
  /*     9 */  /* [/ActiveEcuC/Com/ComConfig/OdometerMasterValue_09a60c78, /ActiveEcuC/Com/ComConfig/Cluster_Info1_FD1_oFD1_CAN_3abd61be, /ActiveEcuC/Com/ComConfig/Cluster_Info1_FD1_oFD1_CAN_3abd61bePduBased] */
  /*    10 */  /* [/ActiveEcuC/Com/ComConfig/CmbbDeny_B_ActlBrk_eaa4779a, /ActiveEcuC/Com/ComConfig/DesiredTorqBrk_FD1_oFD1_CAN_3abd61be, /ActiveEcuC/Com/ComConfig/DesiredTorqBrk_FD1_oFD1_CAN_3abd61bePduBased] */
  /*    11 */  /* [/ActiveEcuC/Com/ComConfig/VehVActlEng_D_Qf_2508f61f, /ActiveEcuC/Com/ComConfig/EngVehicleSpThrottle2_FD1_oFD1_CAN_3abd61be, /ActiveEcuC/Com/ComConfig/EngVehicleSpThrottle2_FD1_oFD1_CAN_3abd61bePduBased] */
  /*    12 */  /* [/ActiveEcuC/Com/ComConfig/VehicleGGCCData_575096ac, /ActiveEcuC/Com/ComConfig/GGCC_Config_Mgmt_ID_1_FD1_oFD1_CAN_3abd61be, /ActiveEcuC/Com/ComConfig/GGCC_Config_Mgmt_ID_1_FD1_oFD1_CAN_3abd61bePduBased] */
  /*    13 */  /* [/ActiveEcuC/Com/ComConfig/LaCurvature_No_Calc_d64ac390, /ActiveEcuC/Com/ComConfig/Lane_Assist_Data1_FD1_oFD1_CAN_3abd61be, /ActiveEcuC/Com/ComConfig/Lane_Assist_Data1_FD1_oFD1_CAN_3abd61bePduBased] */
  /*    14 */  /* [/ActiveEcuC/Com/ComConfig/LatCtlRampType_D_Rq_5abef978, /ActiveEcuC/Com/ComConfig/LateralMotionControl_FD1_oFD1_CAN_3abd61be, /ActiveEcuC/Com/ComConfig/LateralMotionControl_FD1_oFD1_CAN_3abd61bePduBased] */
  /*    15 */  /* [/ActiveEcuC/Com/ComConfig/EsaOn_B_Rq_bffaafb8, /ActiveEcuC/Com/ComConfig/Mc_Send_Signals_2_FD1_oFD1_CAN_3abd61be, /ActiveEcuC/Com/ComConfig/Mc_Send_Signals_2_FD1_oFD1_CAN_3abd61bePduBased] */
  /*    16 */  /* [/ActiveEcuC/Com/ComConfig/EsaEnbl_D2_Rq_dafea5bb, /ActiveEcuC/Com/ComConfig/Steer_Assist_Data_FD1_oFD1_CAN_3abd61be, /ActiveEcuC/Com/ComConfig/Steer_Assist_Data_FD1_oFD1_CAN_3abd61bePduBased] */
  /*    17 */  /* [/ActiveEcuC/Com/ComConfig/TurnLghtSwtch_D_Stat_7262fead, /ActiveEcuC/Com/ComConfig/Steering_Data_FD1_oFD1_CAN_3abd61be, /ActiveEcuC/Com/ComConfig/Steering_Data_FD1_oFD1_CAN_3abd61bePduBased] */
  /*    18 */  /* [/ActiveEcuC/Com/ComConfig/HitchToVehAxle_L_Calc_0bf22cce, /ActiveEcuC/Com/ComConfig/TrailerAid_Stat3_FD1_oFD1_CAN_3abd61be, /ActiveEcuC/Com/ComConfig/TrailerAid_Stat3_FD1_oFD1_CAN_3abd61bePduBased] */
  /*    19 */  /* [/ActiveEcuC/Com/ComConfig/TrlrAidSwtch_D_RqDrv_372f28fe, /ActiveEcuC/Com/ComConfig/TrailerInfo_2_FD1_oFD1_CAN_3abd61be, /ActiveEcuC/Com/ComConfig/TrailerInfo_2_FD1_oFD1_CAN_3abd61bePduBased] */
  /*    20 */  /* [/ActiveEcuC/Com/ComConfig/TrlrLampCnnct_B_Actl_6acffff2, /ActiveEcuC/Com/ComConfig/TrailerInfo_FD1_oFD1_CAN_3abd61be, /ActiveEcuC/Com/ComConfig/TrailerInfo_FD1_oFD1_CAN_3abd61bePduBased] */
  /*    21 */  /* [/ActiveEcuC/Com/ComConfig/GearLvrPos_D_Actl_8c4ca771, /ActiveEcuC/Com/ComConfig/TransGearData_FD1_oFD1_CAN_3abd61be, /ActiveEcuC/Com/ComConfig/TransGearData_FD1_oFD1_CAN_3abd61bePduBased] */
  /*    22 */  /* [/ActiveEcuC/Com/ComConfig/PwPckTq_D_Stat_e6deed9e, /ActiveEcuC/Com/ComConfig/VehicleOperatingModes_FD1_oFD1_CAN_3abd61be, /ActiveEcuC/Com/ComConfig/VehicleOperatingModes_FD1_oFD1_CAN_3abd61bePduBased] */
  /*    23 */  /* [/ActiveEcuC/Com/ComConfig/WhlDirFl_D_Actl_91fa0768, /ActiveEcuC/Com/ComConfig/WheelData_FD1_oFD1_CAN_3abd61be, /ActiveEcuC/Com/ComConfig/WheelData_FD1_oFD1_CAN_3abd61bePduBased] */
  /*    24 */  /* [/ActiveEcuC/Com/ComConfig/WhlFl_W_Meas_5a620481, /ActiveEcuC/Com/ComConfig/WheelSpeed_FD1_oFD1_CAN_3abd61be, /ActiveEcuC/Com/ComConfig/WheelSpeed_FD1_oFD1_CAN_3abd61bePduBased] */
  /*    25 */  /* [/ActiveEcuC/Com/ComConfig/VehYaw_W_Actl_f318059c, /ActiveEcuC/Com/ComConfig/Yaw_Data_FD1_oFD1_CAN_3abd61be, /ActiveEcuC/Com/ComConfig/Yaw_Data_FD1_oFD1_CAN_3abd61bePduBased] */

#define COM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Com_TmpRxBuffer
**********************************************************************************************************************/
/** 
  \var    Com_TmpRxBuffer
  \brief  Temporary buffer for Rx UINT8_N and UINT8_DYN signals.
*/ 
#define COM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Com_TmpRxBufferType, COM_VAR_NOINIT) Com_TmpRxBuffer[8];
#define COM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Com_TransmitRequest
**********************************************************************************************************************/
/** 
  \var    Com_TransmitRequest
  \brief  Transmit request flag used for decoupled Tx I-PDU tranmission.
*/ 
#define COM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Com_TransmitRequestType, COM_VAR_NOINIT) Com_TransmitRequest[4];
  /* Index        Referable Keys  */
  /*     0 */  /* [/ActiveEcuC/Com/ComConfig/EPAS_INFO_FD1_oFD1_CAN_3abd61be, /ActiveEcuC/Com/ComConfig/PSCM_FD_oFD1_CAN_Tx_fcef2243] */
  /*     1 */  /* [/ActiveEcuC/Com/ComConfig/Lane_Assist_Data3_FD1_oFD1_CAN_3abd61be, /ActiveEcuC/Com/ComConfig/PSCM_FD_oFD1_CAN_Tx_fcef2243] */
  /*     2 */  /* [/ActiveEcuC/Com/ComConfig/SteeringPinion_Data_FD1_oFD1_CAN_3abd61be, /ActiveEcuC/Com/ComConfig/PSCM_FD_oFD1_CAN_Tx_fcef2243] */
  /*     3 */  /* [/ActiveEcuC/Com/ComConfig/TrailerAid_Data2_FD1_oFD1_CAN_3abd61be, /ActiveEcuC/Com/ComConfig/PSCM_FD_oFD1_CAN_Tx_fcef2243] */

#define COM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Com_TxBuffer
**********************************************************************************************************************/
/** 
  \var    Com_TxBuffer
  \brief  Shared uint8 buffer for Tx I-PDUs and ComSignalGroup shadow buffer.
*/ 
#define COM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Com_TxBufferType, COM_VAR_NOINIT) Com_TxBuffer[32];
  /* Index        Referable Keys  */
  /*     0 */  /* [/ActiveEcuC/Com/ComConfig/EPAS_INFO_FD1_oFD1_CAN_3abd61be, /ActiveEcuC/Com/ComConfig/SteeringColumnTorque_635efcb3] */
  /*     1 */  /* [/ActiveEcuC/Com/ComConfig/EPAS_INFO_FD1_oFD1_CAN_3abd61be, /ActiveEcuC/Com/ComConfig/DrvSteActv_B_Stat_635efcb3, /ActiveEcuC/Com/ComConfig/EPAS_Failure_635efcb3, /ActiveEcuC/Com/ComConfig/SAPPAngleControlStat2_635efcb3, /ActiveEcuC/Com/ComConfig/SAPPAngleControlStat3_635efcb3, /ActiveEcuC/Com/ComConfig/SAPPAngleControlStat4_635efcb3, /ActiveEcuC/Com/ComConfig/SAPPAngleControlStat5_635efcb3, /ActiveEcuC/Com/ComConfig/SAPPAngleControlStat6_635efcb3] */
  /*     2 */  /* [/ActiveEcuC/Com/ComConfig/EPAS_INFO_FD1_oFD1_CAN_3abd61be, /ActiveEcuC/Com/ComConfig/SAPPAngleControlStat1_635efcb3, /ActiveEcuC/Com/ComConfig/SteMdule_I_Est_635efcb3] */
  /*     3 */  /* [/ActiveEcuC/Com/ComConfig/EPAS_INFO_FD1_oFD1_CAN_3abd61be, /ActiveEcuC/Com/ComConfig/SteMdule_I_Est_635efcb3, /ActiveEcuC/Com/ComConfig/TrlrHitchLamp_D_Rqst_635efcb3, /ActiveEcuC/Com/ComConfig/VehVTrlrAid_B_Rq_635efcb3] */
  /*     4 */  /* [/ActiveEcuC/Com/ComConfig/EPAS_INFO_FD1_oFD1_CAN_3abd61be, /ActiveEcuC/Com/ComConfig/SteMdule_U_Meas_635efcb3] */
  /*     5 */  /* [/ActiveEcuC/Com/ComConfig/EPAS_INFO_FD1_oFD1_CAN_3abd61be, /ActiveEcuC/Com/ComConfig/DrvSte_Tq_Actl_635efcb3] */
  /*     6 */  /* [/ActiveEcuC/Com/ComConfig/EPAS_INFO_FD1_oFD1_CAN_3abd61be, /ActiveEcuC/Com/ComConfig/SteMdule_D_Stat_635efcb3] */
  /*     7 */  /* [/ActiveEcuC/Com/ComConfig/EPAS_INFO_FD1_oFD1_CAN_3abd61be, /ActiveEcuC/Com/ComConfig/Veh_V_RqMxTrlrAid_635efcb3] */
  /*     8 */  /* [/ActiveEcuC/Com/ComConfig/Lane_Assist_Data3_FD1_oFD1_CAN_3abd61be, /ActiveEcuC/Com/ComConfig/LaActAvail_D_Actl_3724073d, /ActiveEcuC/Com/ComConfig/LaActDeny_B_Actl_3724073d, /ActiveEcuC/Com/ComConfig/LaHandsOff_B_Actl_3724073d, /ActiveEcuC/Com/ComConfig/LsmcBrkDecelEnbl_D_Rq_3724073d, /ActiveEcuC/Com/ComConfig/TjaHandsOnCnfdnc_B_Est_3724073d] */
  /*     9 */  /* [/ActiveEcuC/Com/ComConfig/Lane_Assist_Data3_FD1_oFD1_CAN_3abd61be, /ActiveEcuC/Com/ComConfig/LsmcBrk_Tq_Rq_3724073d] */
  /*    10 */  /* [/ActiveEcuC/Com/ComConfig/Lane_Assist_Data3_FD1_oFD1_CAN_3abd61be, /ActiveEcuC/Com/ComConfig/LsmcBrk_Tq_Rq_3724073d] */
  /*    11 */  /* [/ActiveEcuC/Com/ComConfig/Lane_Assist_Data3_FD1_oFD1_CAN_3abd61be, /ActiveEcuC/Com/ComConfig/TrlrAn_An_TrgtCalc_3724073d] */
  /*    12 */  /* [/ActiveEcuC/Com/ComConfig/Lane_Assist_Data3_FD1_oFD1_CAN_3abd61be] */
  /*    13 */  /* [/ActiveEcuC/Com/ComConfig/Lane_Assist_Data3_FD1_oFD1_CAN_3abd61be] */
  /*    14 */  /* [/ActiveEcuC/Com/ComConfig/Lane_Assist_Data3_FD1_oFD1_CAN_3abd61be] */
  /*    15 */  /* [/ActiveEcuC/Com/ComConfig/Lane_Assist_Data3_FD1_oFD1_CAN_3abd61be] */
  /*    16 */  /* [/ActiveEcuC/Com/ComConfig/SteeringPinion_Data_FD1_oFD1_CAN_3abd61be, /ActiveEcuC/Com/ComConfig/StePinRelInit_An_Sns_837112cd] */
  /*    17 */  /* [/ActiveEcuC/Com/ComConfig/SteeringPinion_Data_FD1_oFD1_CAN_3abd61be, /ActiveEcuC/Com/ComConfig/StePinRelInit_An_Sns_837112cd] */
  /*    18 */  /* [/ActiveEcuC/Com/ComConfig/SteeringPinion_Data_FD1_oFD1_CAN_3abd61be, /ActiveEcuC/Com/ComConfig/StePinComp_An_Est_837112cd, /ActiveEcuC/Com/ComConfig/StePw_B_Rq_837112cd] */
  /*    19 */  /* [/ActiveEcuC/Com/ComConfig/SteeringPinion_Data_FD1_oFD1_CAN_3abd61be, /ActiveEcuC/Com/ComConfig/StePinComp_An_Est_837112cd] */
  /*    20 */  /* [/ActiveEcuC/Com/ComConfig/SteeringPinion_Data_FD1_oFD1_CAN_3abd61be, /ActiveEcuC/Com/ComConfig/StePinAn_No_Cs_837112cd] */
  /*    21 */  /* [/ActiveEcuC/Com/ComConfig/SteeringPinion_Data_FD1_oFD1_CAN_3abd61be, /ActiveEcuC/Com/ComConfig/StePinAn_No_Cnt_837112cd, /ActiveEcuC/Com/ComConfig/StePinCompAnEst_D_Qf_837112cd] */
  /*    22 */  /* [/ActiveEcuC/Com/ComConfig/SteeringPinion_Data_FD1_oFD1_CAN_3abd61be] */
  /*    23 */  /* [/ActiveEcuC/Com/ComConfig/SteeringPinion_Data_FD1_oFD1_CAN_3abd61be] */
  /*    24 */  /* [/ActiveEcuC/Com/ComConfig/TrailerAid_Data2_FD1_oFD1_CAN_3abd61be, /ActiveEcuC/Com/ComConfig/HitchToTrlrAxle_L_Calc_51142c79] */
  /*    25 */  /* [/ActiveEcuC/Com/ComConfig/TrailerAid_Data2_FD1_oFD1_CAN_3abd61be, /ActiveEcuC/Com/ComConfig/HitchToTrlrAxle_L_Calc_51142c79, /ActiveEcuC/Com/ComConfig/TrlrAidMsgTxt_D2_Rq_51142c79] */
  /*    26 */  /* [/ActiveEcuC/Com/ComConfig/TrailerAid_Data2_FD1_oFD1_CAN_3abd61be, /ActiveEcuC/Com/ComConfig/EsaOn_B_Stat_51142c79, /ActiveEcuC/Com/ComConfig/LatCtlLim_D_Stat_51142c79, /ActiveEcuC/Com/ComConfig/LatCtlSte_D_Stat_51142c79, /ActiveEcuC/Com/ComConfig/SelDrvMdeSte_D_Stat_51142c79] */
  /*    27 */  /* [/ActiveEcuC/Com/ComConfig/TrailerAid_Data2_FD1_oFD1_CAN_3abd61be, /ActiveEcuC/Com/ComConfig/TrlrAidEnbl_D2_Stat_51142c79, /ActiveEcuC/Com/ComConfig/TrlrAn_An_WarnCalc_51142c79] */
  /*    28 */  /* [/ActiveEcuC/Com/ComConfig/TrailerAid_Data2_FD1_oFD1_CAN_3abd61be, /ActiveEcuC/Com/ComConfig/TrlrAnOffst_An2_Calc_51142c79] */
  /*    29 */  /* [/ActiveEcuC/Com/ComConfig/TrailerAid_Data2_FD1_oFD1_CAN_3abd61be, /ActiveEcuC/Com/ComConfig/TrlrAidSetup_D2_Stat_51142c79, /ActiveEcuC/Com/ComConfig/TrlrAidTrgtId_No_Rq_51142c79] */
  /*    30 */  /* [/ActiveEcuC/Com/ComConfig/TrailerAid_Data2_FD1_oFD1_CAN_3abd61be, /ActiveEcuC/Com/ComConfig/TrlrAn_An_MxCalc_51142c79] */
  /*    31 */  /* [/ActiveEcuC/Com/ComConfig/TrailerAid_Data2_FD1_oFD1_CAN_3abd61be, /ActiveEcuC/Com/ComConfig/TrlrAidTrlrId_No_Rq_51142c79] */

#define COM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Com_TxCyclicProcessingISRLockCounter
**********************************************************************************************************************/
#define COM_START_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Com_TxCyclicProcessingISRLockCounterType, COM_VAR_NOINIT) Com_TxCyclicProcessingISRLockCounter;
#define COM_STOP_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Com_TxDeadlineMonitoringISRLockCounter
**********************************************************************************************************************/
#define COM_START_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Com_TxDeadlineMonitoringISRLockCounterType, COM_VAR_NOINIT) Com_TxDeadlineMonitoringISRLockCounter;
#define COM_STOP_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Com_TxFilterOldValueUInt8
**********************************************************************************************************************/
/** 
  \var    Com_TxFilterOldValueUInt8
  \brief  This buffer holds the old signal values for filter MASKED_NEW_DIFFERS_MASKED_OLD and for transfer property TRIGGERED_ON_CHANGE_* evaluation. (BOOLEAN, UINT8)
*/ 
#define COM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Com_TxFilterOldValueUInt8Type, COM_VAR_NOINIT) Com_TxFilterOldValueUInt8[6];
  /* Index        Referable Keys  */
  /*     0 */  /* [/ActiveEcuC/Com/ComConfig/EsaOn_B_Stat_51142c79, /ActiveEcuC/Com/ComConfig/TrailerAid_Data2_FD1_oFD1_CAN_3abd61be] */
  /*     1 */  /* [/ActiveEcuC/Com/ComConfig/LatCtlLim_D_Stat_51142c79, /ActiveEcuC/Com/ComConfig/TrailerAid_Data2_FD1_oFD1_CAN_3abd61be] */
  /*     2 */  /* [/ActiveEcuC/Com/ComConfig/LatCtlSte_D_Stat_51142c79, /ActiveEcuC/Com/ComConfig/TrailerAid_Data2_FD1_oFD1_CAN_3abd61be] */
  /*     3 */  /* [/ActiveEcuC/Com/ComConfig/SelDrvMdeSte_D_Stat_51142c79, /ActiveEcuC/Com/ComConfig/TrailerAid_Data2_FD1_oFD1_CAN_3abd61be] */
  /*     4 */  /* [/ActiveEcuC/Com/ComConfig/TrlrAidEnbl_D2_Stat_51142c79, /ActiveEcuC/Com/ComConfig/TrailerAid_Data2_FD1_oFD1_CAN_3abd61be] */
  /*     5 */  /* [/ActiveEcuC/Com/ComConfig/TrlrAidMsgTxt_D2_Rq_51142c79, /ActiveEcuC/Com/ComConfig/TrailerAid_Data2_FD1_oFD1_CAN_3abd61be] */

#define COM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Com_TxIPduGroupISRLockCounter
**********************************************************************************************************************/
#define COM_START_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Com_TxIPduGroupISRLockCounterType, COM_VAR_NOINIT) Com_TxIPduGroupISRLockCounter;
#define COM_STOP_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Com_TxIPduGroupStopISRLockCounter
**********************************************************************************************************************/
#define COM_START_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Com_TxIPduGroupStopISRLockCounterType, COM_VAR_NOINIT) Com_TxIPduGroupStopISRLockCounter;
#define COM_STOP_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Com_TxPduGrpActive
**********************************************************************************************************************/
/** 
  \var    Com_TxPduGrpActive
  \brief  Tx I-PDU based state (started/stopped) of the corresponding I-PDU-Group.
*/ 
#define COM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Com_TxPduGrpActiveType, COM_VAR_NOINIT) Com_TxPduGrpActive[4];
#define COM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Com_TxProcessingISRLockCounter
**********************************************************************************************************************/
#define COM_START_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Com_TxProcessingISRLockCounterType, COM_VAR_NOINIT) Com_TxProcessingISRLockCounter;
#define COM_STOP_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Com_TxSduLength
**********************************************************************************************************************/
/** 
  \var    Com_TxSduLength
  \brief  This var Array contains the Com Ipdu Length.
*/ 
#define COM_START_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Com_TxSduLengthType, COM_VAR_NOINIT) Com_TxSduLength[4];
  /* Index        Referable Keys  */
  /*     0 */  /* [/ActiveEcuC/Com/ComConfig/EPAS_INFO_FD1_oFD1_CAN_3abd61be, /ActiveEcuC/Com/ComConfig/PSCM_FD_oFD1_CAN_Tx_fcef2243] */
  /*     1 */  /* [/ActiveEcuC/Com/ComConfig/Lane_Assist_Data3_FD1_oFD1_CAN_3abd61be, /ActiveEcuC/Com/ComConfig/PSCM_FD_oFD1_CAN_Tx_fcef2243] */
  /*     2 */  /* [/ActiveEcuC/Com/ComConfig/SteeringPinion_Data_FD1_oFD1_CAN_3abd61be, /ActiveEcuC/Com/ComConfig/PSCM_FD_oFD1_CAN_Tx_fcef2243] */
  /*     3 */  /* [/ActiveEcuC/Com/ComConfig/TrailerAid_Data2_FD1_oFD1_CAN_3abd61be, /ActiveEcuC/Com/ComConfig/PSCM_FD_oFD1_CAN_Tx_fcef2243] */

#define COM_STOP_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Com_WaitingForConfirmation
**********************************************************************************************************************/
/** 
  \var    Com_WaitingForConfirmation
  \brief  Flag array used for Tx error notification handling.
*/ 
#define COM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Com_WaitingForConfirmationType, COM_VAR_NOINIT) Com_WaitingForConfirmation[4];
  /* Index        Referable Keys  */
  /*     0 */  /* [/ActiveEcuC/Com/ComConfig/EPAS_INFO_FD1_oFD1_CAN_3abd61be, /ActiveEcuC/Com/ComConfig/PSCM_FD_oFD1_CAN_Tx_fcef2243] */
  /*     1 */  /* [/ActiveEcuC/Com/ComConfig/Lane_Assist_Data3_FD1_oFD1_CAN_3abd61be, /ActiveEcuC/Com/ComConfig/PSCM_FD_oFD1_CAN_Tx_fcef2243] */
  /*     2 */  /* [/ActiveEcuC/Com/ComConfig/SteeringPinion_Data_FD1_oFD1_CAN_3abd61be, /ActiveEcuC/Com/ComConfig/PSCM_FD_oFD1_CAN_Tx_fcef2243] */
  /*     3 */  /* [/ActiveEcuC/Com/ComConfig/TrailerAid_Data2_FD1_oFD1_CAN_3abd61be, /ActiveEcuC/Com/ComConfig/PSCM_FD_oFD1_CAN_Tx_fcef2243] */

#define COM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */


/**********************************************************************************************************************
  CONFIGURATION CLASS: LINK
  SECTION: GLOBAL DATA
**********************************************************************************************************************/


/**********************************************************************************************************************
  LOCAL FUNCTION PROTOTYPES
**********************************************************************************************************************/

/**********************************************************************************************************************
  LOCAL FUNCTIONS
**********************************************************************************************************************/

/**********************************************************************************************************************
  GLOBAL FUNCTIONS
**********************************************************************************************************************/
/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: GLOBAL FUNCTIONS
**********************************************************************************************************************/

/**********************************************************************************************************************
  CONFIGURATION CLASS: LINK
  SECTION: GLOBAL FUNCTIONS
**********************************************************************************************************************/






/**********************************************************************************************************************
  END OF FILE: Com_Lcfg.c
**********************************************************************************************************************/

