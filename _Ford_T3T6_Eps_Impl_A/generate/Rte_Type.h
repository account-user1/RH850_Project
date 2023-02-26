/**********************************************************************************************************************
 *  COPYRIGHT
 *  -------------------------------------------------------------------------------------------------------------------
 *
 *                This software is copyright protected and proprietary to Vector Informatik GmbH.
 *                Vector Informatik GmbH grants to you only those rights as set out in the license conditions.
 *                All other rights remain with Vector Informatik GmbH.
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  Rte_Type.h
 *        Config:  EPS.dpa
 *   ECU-Project:  PSCM_FD
 *
 *     Generator:  MICROSAR RTE Generator Version 4.13.0
 *                 RTE Core Version 1.13.0
 *       License:  Unlimited license CBD1601056 for Nexteer Automotive Corporation
 *
 *   Description:  Header file containing user defined AUTOSAR types and RTE structures
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_TYPE_H
# define _RTE_TYPE_H

# include "Rte.h"


/**********************************************************************************************************************
 * Data type definitions
 *********************************************************************************************************************/

# define Rte_TypeDef_Boolean
typedef boolean Boolean;

# define Rte_TypeDef_Ford_AbsActv_B_Actl
typedef boolean Ford_AbsActv_B_Actl;

# define Rte_TypeDef_Ford_CmbbBrkDis_B_Actl
typedef boolean Ford_CmbbBrkDis_B_Actl;

# define Rte_TypeDef_Ford_CmbbDeny_B_ActlBrk
typedef boolean Ford_CmbbDeny_B_ActlBrk;

# define Rte_TypeDef_Ford_DrvSteActv_B_Stat
typedef boolean Ford_DrvSteActv_B_Stat;

# define Rte_TypeDef_Ford_EsaOn_B_Rq
typedef boolean Ford_EsaOn_B_Rq;

# define Rte_TypeDef_Ford_EsaOn_B_Stat
typedef boolean Ford_EsaOn_B_Stat;

# define Rte_TypeDef_Ford_HandsOffCnfm_B_Rq
typedef boolean Ford_HandsOffCnfm_B_Rq;

# define Rte_TypeDef_Ford_LaActDeny_B_Actl
typedef boolean Ford_LaActDeny_B_Actl;

# define Rte_TypeDef_Ford_LaHandsOff_B_Actl
typedef boolean Ford_LaHandsOff_B_Actl;

# define Rte_TypeDef_Ford_LaRampType_B_Req
typedef boolean Ford_LaRampType_B_Req;

# define Rte_TypeDef_Ford_LatCtlCurv_NoRate_Actl
typedef uint16 Ford_LatCtlCurv_NoRate_Actl;

# define Rte_TypeDef_Ford_LatCtlCurv_No_Actl
typedef uint16 Ford_LatCtlCurv_No_Actl;

# define Rte_TypeDef_Ford_LatCtlPathOffst_L_Actl
typedef uint16 Ford_LatCtlPathOffst_L_Actl;

# define Rte_TypeDef_Ford_LatCtlPath_An_Actl
typedef uint16 Ford_LatCtlPath_An_Actl;

# define Rte_TypeDef_Ford_LatCtlRng_L_Max
typedef uint8 Ford_LatCtlRng_L_Max;

# define Rte_TypeDef_Ford_LsmcBrk_Tq_Rq
typedef uint16 Ford_LsmcBrk_Tq_Rq;

# define Rte_TypeDef_Ford_SAPPAngleControlStat2
typedef boolean Ford_SAPPAngleControlStat2;

# define Rte_TypeDef_Ford_SAPPAngleControlStat3
typedef boolean Ford_SAPPAngleControlStat3;

# define Rte_TypeDef_Ford_SAPPAngleControlStat4
typedef boolean Ford_SAPPAngleControlStat4;

# define Rte_TypeDef_Ford_SAPPAngleControlStat5
typedef boolean Ford_SAPPAngleControlStat5;

# define Rte_TypeDef_Ford_SAPPAngleControlStat6
typedef boolean Ford_SAPPAngleControlStat6;

# define Rte_TypeDef_Ford_StabCtlBrkActv_B_Actl
typedef boolean Ford_StabCtlBrkActv_B_Actl;

# define Rte_TypeDef_Ford_StePinAn_No_Cnt
typedef uint8 Ford_StePinAn_No_Cnt;

# define Rte_TypeDef_Ford_StePinAn_No_Cs
typedef uint8 Ford_StePinAn_No_Cs;

# define Rte_TypeDef_Ford_StePinComp_An_Est
typedef uint16 Ford_StePinComp_An_Est;

# define Rte_TypeDef_Ford_StePinOffst_No_Cnt
typedef uint8 Ford_StePinOffst_No_Cnt;

# define Rte_TypeDef_Ford_StePinOffst_No_Cs
typedef uint8 Ford_StePinOffst_No_Cs;

# define Rte_TypeDef_Ford_StePw_B_Rq
typedef boolean Ford_StePw_B_Rq;

# define Rte_TypeDef_Ford_TjaHandsOnCnfdnc_B_Est
typedef boolean Ford_TjaHandsOnCnfdnc_B_Est;

# define Rte_TypeDef_Ford_TrlrAidTrgtId_No_Actl
typedef uint8 Ford_TrlrAidTrgtId_No_Actl;

# define Rte_TypeDef_Ford_TrlrAn_An_TrgtCalc
typedef uint8 Ford_TrlrAn_An_TrgtCalc;

# define Rte_TypeDef_Ford_TrlrHitchLamp_D_Rqst
typedef boolean Ford_TrlrHitchLamp_D_Rqst;

# define Rte_TypeDef_Ford_TrlrLampCnnct_B_Actl
typedef boolean Ford_TrlrLampCnnct_B_Actl;

# define Rte_TypeDef_Ford_VehVActlBrk_No_Cnt
typedef uint8 Ford_VehVActlBrk_No_Cnt;

# define Rte_TypeDef_Ford_VehVActlBrk_No_Cs
typedef uint8 Ford_VehVActlBrk_No_Cs;

# define Rte_TypeDef_Ford_VehVActlEng_No_Cnt
typedef uint8 Ford_VehVActlEng_No_Cnt;

# define Rte_TypeDef_Ford_VehVActlEng_No_Cs
typedef uint8 Ford_VehVActlEng_No_Cs;

# define Rte_TypeDef_Ford_VehVTrlrAid_B_Avail
typedef boolean Ford_VehVTrlrAid_B_Avail;

# define Rte_TypeDef_Ford_VehVTrlrAid_B_Rq
typedef boolean Ford_VehVTrlrAid_B_Rq;

# define Rte_TypeDef_Ford_Veh_V_ActlBrk
typedef uint16 Ford_Veh_V_ActlBrk;

# define Rte_TypeDef_Ford_Veh_V_ActlEng
typedef uint16 Ford_Veh_V_ActlEng;

# define Rte_TypeDef_Ford_Veh_V_RqMxTrlrAid
typedef uint8 Ford_Veh_V_RqMxTrlrAid;

# define Rte_TypeDef_Ford_WhlRotatFl_No_Cnt
typedef uint8 Ford_WhlRotatFl_No_Cnt;

# define Rte_TypeDef_Ford_WhlRotatFr_No_Cnt
typedef uint8 Ford_WhlRotatFr_No_Cnt;

# define Rte_TypeDef_Ford_WhlRotatRl_No_Cnt
typedef uint8 Ford_WhlRotatRl_No_Cnt;

# define Rte_TypeDef_Ford_WhlRotatRr_No_Cnt
typedef uint8 Ford_WhlRotatRr_No_Cnt;

# define Rte_TypeDef_NvM_BlockIdType
typedef uint16 NvM_BlockIdType;

# define Rte_TypeDef_dtRef_VOID
typedef void * dtRef_VOID;

# define Rte_TypeDef_dtRef_const_VOID
typedef const void * dtRef_const_VOID;

# define Rte_TypeDef_Ford_BrkTot_Tq_Actl
typedef uint16 Ford_BrkTot_Tq_Actl;

# define Rte_TypeDef_Ford_CmbbObjClass_D_Stat
typedef uint8 Ford_CmbbObjClass_D_Stat;

# define Rte_TypeDef_Ford_CmbbObjColl_T_Actl
typedef uint8 Ford_CmbbObjColl_T_Actl;

# define Rte_TypeDef_Ford_CmbbObjConfdnc_D_Stat
typedef uint8 Ford_CmbbObjConfdnc_D_Stat;

# define Rte_TypeDef_Ford_CmbbObjDistLat_L_Actl
typedef uint16 Ford_CmbbObjDistLat_L_Actl;

# define Rte_TypeDef_Ford_CmbbObjDistLong_L_Actl
typedef uint16 Ford_CmbbObjDistLong_L_Actl;

# define Rte_TypeDef_Ford_CmbbObjRelLat_V_Actl
typedef uint16 Ford_CmbbObjRelLat_V_Actl;

# define Rte_TypeDef_Ford_CmbbObjRelLong_V_Actl
typedef uint16 Ford_CmbbObjRelLong_V_Actl;

# define Rte_TypeDef_Ford_DrvSte_Tq_Actl
typedef uint8 Ford_DrvSte_Tq_Actl;

# define Rte_TypeDef_Ford_EPAS_Failure
typedef uint8 Ford_EPAS_Failure;

# define Rte_TypeDef_Ford_ElPw_D_Stat
typedef uint8 Ford_ElPw_D_Stat;

# define Rte_TypeDef_Ford_ElPw_D_StatStrtStop
typedef uint8 Ford_ElPw_D_StatStrtStop;

# define Rte_TypeDef_Ford_EsaEnbl_D2_Rq
typedef uint8 Ford_EsaEnbl_D2_Rq;

# define Rte_TypeDef_Ford_GearLvrPos_D_Actl
typedef uint8 Ford_GearLvrPos_D_Actl;

# define Rte_TypeDef_Ford_GearRvrse_D_Actl
typedef uint8 Ford_GearRvrse_D_Actl;

# define Rte_TypeDef_Ford_HitchToVehAxle_L_Calc
typedef uint8 Ford_HitchToVehAxle_L_Calc;

# define Rte_TypeDef_Ford_Ignition_Status
typedef uint8 Ford_Ignition_Status;

# define Rte_TypeDef_Ford_LaActAvail_D_Actl
typedef uint8 Ford_LaActAvail_D_Actl;

# define Rte_TypeDef_Ford_LaCurvature_No_Calc
typedef uint16 Ford_LaCurvature_No_Calc;

# define Rte_TypeDef_Ford_LaRefAng_No_Req
typedef uint16 Ford_LaRefAng_No_Req;

# define Rte_TypeDef_Ford_LatCtlLim_D_Stat
typedef uint8 Ford_LatCtlLim_D_Stat;

# define Rte_TypeDef_Ford_LatCtlPrecision_D_Rq
typedef uint8 Ford_LatCtlPrecision_D_Rq;

# define Rte_TypeDef_Ford_LatCtlRampType_D_Rq
typedef uint8 Ford_LatCtlRampType_D_Rq;

# define Rte_TypeDef_Ford_LatCtlSte_D_Stat
typedef uint8 Ford_LatCtlSte_D_Stat;

# define Rte_TypeDef_Ford_LatCtl_D_Rq
typedef uint8 Ford_LatCtl_D_Rq;

# define Rte_TypeDef_Ford_LdwActvIntns_D_Req
typedef uint8 Ford_LdwActvIntns_D_Req;

# define Rte_TypeDef_Ford_LdwActvStats_D_Req
typedef uint8 Ford_LdwActvStats_D_Req;

# define Rte_TypeDef_Ford_LifeCycMde_D_Actl
typedef uint8 Ford_LifeCycMde_D_Actl;

# define Rte_TypeDef_Ford_LkaActvStats_D2_Req
typedef uint8 Ford_LkaActvStats_D2_Req;

# define Rte_TypeDef_Ford_LsmcBrkDecelEnbl_D_Rq
typedef uint8 Ford_LsmcBrkDecelEnbl_D_Rq;

# define Rte_TypeDef_Ford_LsmcBrkDecel_D_Stat
typedef uint8 Ford_LsmcBrkDecel_D_Stat;

# define Rte_TypeDef_Ford_OdometerMasterValue
typedef uint32 Ford_OdometerMasterValue;

# define Rte_TypeDef_Ford_Outside_Air_Temp_Stat
typedef uint8 Ford_Outside_Air_Temp_Stat;

# define Rte_TypeDef_Ford_PrplWhlTot2_Tq_Actl
typedef uint16 Ford_PrplWhlTot2_Tq_Actl;

# define Rte_TypeDef_Ford_PwPckTq_D_Stat
typedef uint8 Ford_PwPckTq_D_Stat;

# define Rte_TypeDef_Ford_SAPPAngleControlStat1
typedef uint8 Ford_SAPPAngleControlStat1;

# define Rte_TypeDef_Ford_SelDrvMdeChassis2_D_Rq
typedef uint8 Ford_SelDrvMdeChassis2_D_Rq;

# define Rte_TypeDef_Ford_SelDrvMdeSte_D_Stat
typedef uint8 Ford_SelDrvMdeSte_D_Stat;

# define Rte_TypeDef_Ford_SteMdule_D_Stat
typedef uint8 Ford_SteMdule_D_Stat;

# define Rte_TypeDef_Ford_SteMdule_I_Est
typedef uint16 Ford_SteMdule_I_Est;

# define Rte_TypeDef_Ford_SteMdule_U_Meas
typedef uint8 Ford_SteMdule_U_Meas;

# define Rte_TypeDef_Ford_StePinCompAnEst_D_Qf
typedef uint8 Ford_StePinCompAnEst_D_Qf;

# define Rte_TypeDef_Ford_StePinOffst_An_Est
typedef uint16 Ford_StePinOffst_An_Est;

# define Rte_TypeDef_Ford_StePinOffst_D_Stat
typedef uint8 Ford_StePinOffst_D_Stat;

# define Rte_TypeDef_Ford_StePinRelInit_An_Sns
typedef uint16 Ford_StePinRelInit_An_Sns;

# define Rte_TypeDef_Ford_SteeringColumnTorque
typedef uint8 Ford_SteeringColumnTorque;

# define Rte_TypeDef_Ford_TrlrAidCtl_U_RqDrv
typedef uint16 Ford_TrlrAidCtl_U_RqDrv;

# define Rte_TypeDef_Ford_TrlrAidEnbl_D2_Stat
typedef uint8 Ford_TrlrAidEnbl_D2_Stat;

# define Rte_TypeDef_Ford_TrlrAidMde_D_Rq
typedef uint8 Ford_TrlrAidMde_D_Rq;

# define Rte_TypeDef_Ford_TrlrAidMsgTxt_D2_Rq
typedef uint8 Ford_TrlrAidMsgTxt_D2_Rq;

# define Rte_TypeDef_Ford_TrlrAidSwtch_D_RqDrv
typedef uint8 Ford_TrlrAidSwtch_D_RqDrv;

# define Rte_TypeDef_Ford_TrlrAid_An3_Actl
typedef uint16 Ford_TrlrAid_An3_Actl;

# define Rte_TypeDef_Ford_TrlrAid_AnRate2_Actl
typedef uint16 Ford_TrlrAid_AnRate2_Actl;

# define Rte_TypeDef_Ford_TrlrAid_D2_Stat
typedef uint8 Ford_TrlrAid_D2_Stat;

# define Rte_TypeDef_Ford_TrlrRvrse_D_Stat
typedef uint8 Ford_TrlrRvrse_D_Stat;

# define Rte_TypeDef_Ford_TrlrTrgtAcquire_D_Stat
typedef uint8 Ford_TrlrTrgtAcquire_D_Stat;

# define Rte_TypeDef_Ford_TurnLghtSwtch_D_Stat
typedef uint8 Ford_TurnLghtSwtch_D_Stat;

# define Rte_TypeDef_Ford_VehLatComp_A_Actl
typedef uint16 Ford_VehLatComp_A_Actl;

# define Rte_TypeDef_Ford_VehLongComp_A_Actl
typedef uint16 Ford_VehLongComp_A_Actl;

# define Rte_TypeDef_Ford_VehOverGnd_V_Est
typedef uint16 Ford_VehOverGnd_V_Est;

# define Rte_TypeDef_Ford_VehVActlBrk_D_Qf
typedef uint8 Ford_VehVActlBrk_D_Qf;

# define Rte_TypeDef_Ford_VehVActlEng_D_Qf
typedef uint8 Ford_VehVActlEng_D_Qf;

# define Rte_TypeDef_Ford_VehVertComp_A_Actl
typedef uint16 Ford_VehVertComp_A_Actl;

# define Rte_TypeDef_Ford_VehYawComp_W_Actl
typedef uint16 Ford_VehYawComp_W_Actl;

# define Rte_TypeDef_Ford_VehYaw_W_Actl
typedef uint16 Ford_VehYaw_W_Actl;

# define Rte_TypeDef_Ford_WhlDirFl_D_Actl
typedef uint8 Ford_WhlDirFl_D_Actl;

# define Rte_TypeDef_Ford_WhlDirFr_D_Actl
typedef uint8 Ford_WhlDirFr_D_Actl;

# define Rte_TypeDef_Ford_WhlDirRl_D_Actl
typedef uint8 Ford_WhlDirRl_D_Actl;

# define Rte_TypeDef_Ford_WhlDirRr_D_Actl
typedef uint8 Ford_WhlDirRr_D_Actl;

# define Rte_TypeDef_Ford_WhlFl_W_Meas
typedef uint16 Ford_WhlFl_W_Meas;

# define Rte_TypeDef_Ford_WhlFr_W_Meas
typedef uint16 Ford_WhlFr_W_Meas;

# define Rte_TypeDef_Ford_WhlRl_W_Meas
typedef uint16 Ford_WhlRl_W_Meas;

# define Rte_TypeDef_Ford_WhlRr_W_Meas
typedef uint16 Ford_WhlRr_W_Meas;

# define Rte_TypeDef_Ford_YawStabilityIndex
typedef uint16 Ford_YawStabilityIndex;

# define Rte_TypeDef_NvM_RequestResultType
typedef uint8 NvM_RequestResultType;

# define Rte_TypeDef_Ary1D_boolean_4
typedef boolean Ary1D_boolean_4[4];

# define Rte_TypeDef_Ary1D_f32_12
typedef float32 Ary1D_f32_12[12];

# define Rte_TypeDef_Ary1D_f32_2
typedef float32 Ary1D_f32_2[2];

# define Rte_TypeDef_Ary1D_f32_26
typedef float32 Ary1D_f32_26[26];

# define Rte_TypeDef_Ary1D_f32_3
typedef float32 Ary1D_f32_3[3];

# define Rte_TypeDef_Ary1D_f32_4
typedef float32 Ary1D_f32_4[4];

# define Rte_TypeDef_Ary1D_f32_5
typedef float32 Ary1D_f32_5[5];

# define Rte_TypeDef_Ary1D_f32_8
typedef float32 Ary1D_f32_8[8];

# define Rte_TypeDef_Ary1D_logl_13
typedef boolean Ary1D_logl_13[13];

# define Rte_TypeDef_Ary1D_logl_3
typedef boolean Ary1D_logl_3[3];

# define Rte_TypeDef_Ary1D_logl_4
typedef boolean Ary1D_logl_4[4];

# define Rte_TypeDef_Ary1D_s16_22
typedef sint16 Ary1D_s16_22[22];

# define Rte_TypeDef_Ary1D_s16_8
typedef sint16 Ary1D_s16_8[8];

# define Rte_TypeDef_Ary1D_s16_9
typedef sint16 Ary1D_s16_9[9];

# define Rte_TypeDef_Ary1D_u08_128
typedef uint8 Ary1D_u08_128[128];

# define Rte_TypeDef_Ary1D_u08_17
typedef uint8 Ary1D_u08_17[17];

# define Rte_TypeDef_Ary1D_u08_20
typedef uint8 Ary1D_u08_20[20];

# define Rte_TypeDef_Ary1D_u08_22
typedef uint8 Ary1D_u08_22[22];

# define Rte_TypeDef_Ary1D_u08_256
typedef uint8 Ary1D_u08_256[256];

# define Rte_TypeDef_Ary1D_u08_48
typedef uint8 Ary1D_u08_48[48];

# define Rte_TypeDef_Ary1D_u08_5
typedef uint8 Ary1D_u08_5[5];

# define Rte_TypeDef_Ary1D_u08_512
typedef uint8 Ary1D_u08_512[512];

# define Rte_TypeDef_Ary1D_u08_6
typedef uint8 Ary1D_u08_6[6];

# define Rte_TypeDef_Ary1D_u08_8
typedef uint8 Ary1D_u08_8[8];

# define Rte_TypeDef_Ary1D_u16_12
typedef uint16 Ary1D_u16_12[12];

# define Rte_TypeDef_Ary1D_u16_16
typedef uint16 Ary1D_u16_16[16];

# define Rte_TypeDef_Ary1D_u16_3
typedef uint16 Ary1D_u16_3[3];

# define Rte_TypeDef_Ary1D_u16_32
typedef uint16 Ary1D_u16_32[32];

# define Rte_TypeDef_Ary1D_u16_5
typedef uint16 Ary1D_u16_5[5];

# define Rte_TypeDef_Ary1D_u16_512
typedef uint16 Ary1D_u16_512[512];

# define Rte_TypeDef_Ary1D_u16_6
typedef uint16 Ary1D_u16_6[6];

# define Rte_TypeDef_Ary1D_u16_8
typedef uint16 Ary1D_u16_8[8];

# define Rte_TypeDef_Ary1D_u16p0_6
typedef uint16 Ary1D_u16p0_6[6];

# define Rte_TypeDef_Ary1D_u32_2
typedef uint32 Ary1D_u32_2[2];

# define Rte_TypeDef_Ary1D_u32_4
typedef uint32 Ary1D_u32_4[4];

# define Rte_TypeDef_Ary1D_u32_8
typedef uint32 Ary1D_u32_8[8];

# define Rte_TypeDef_Ary1D_u8_10
typedef uint8 Ary1D_u8_10[10];

# define Rte_TypeDef_Ary1D_u8_16
typedef uint8 Ary1D_u8_16[16];

# define Rte_TypeDef_Ary1D_u8_2
typedef uint8 Ary1D_u8_2[2];

# define Rte_TypeDef_Ary1D_u8_20
typedef uint8 Ary1D_u8_20[20];

# define Rte_TypeDef_Ary1D_u8_24
typedef uint8 Ary1D_u8_24[24];

# define Rte_TypeDef_Ary1D_u8_3
typedef uint8 Ary1D_u8_3[3];

# define Rte_TypeDef_Ary1D_u8_4
typedef uint8 Ary1D_u8_4[4];

# define Rte_TypeDef_Ary1D_u8_40
typedef uint8 Ary1D_u8_40[40];

# define Rte_TypeDef_Ary1D_u8_48
typedef uint8 Ary1D_u8_48[48];

# define Rte_TypeDef_Ary1D_u8_6
typedef uint8 Ary1D_u8_6[6];

# define Rte_TypeDef_Ary1D_u8_64
typedef uint8 Ary1D_u8_64[64];

# define Rte_TypeDef_Ary1D_u8_8
typedef uint8 Ary1D_u8_8[8];

# define Rte_TypeDef_DataArray_Type_1
typedef uint8 DataArray_Type_1[1];

# define Rte_TypeDef_DataArray_Type_2
typedef uint8 DataArray_Type_2[2];

# define Rte_TypeDef_Dcm_Data1024ByteType
typedef uint8 Dcm_Data1024ByteType[1024];

# define Rte_TypeDef_Dcm_Data1028ByteType
typedef uint8 Dcm_Data1028ByteType[1028];

# define Rte_TypeDef_Dcm_Data10ByteType
typedef uint8 Dcm_Data10ByteType[10];

# define Rte_TypeDef_Dcm_Data11ByteType
typedef uint8 Dcm_Data11ByteType[11];

# define Rte_TypeDef_Dcm_Data12ByteType
typedef uint8 Dcm_Data12ByteType[12];

# define Rte_TypeDef_Dcm_Data159ByteType
typedef uint8 Dcm_Data159ByteType[159];

# define Rte_TypeDef_Dcm_Data16ByteType
typedef uint8 Dcm_Data16ByteType[16];

# define Rte_TypeDef_Dcm_Data18ByteType
typedef uint8 Dcm_Data18ByteType[18];

# define Rte_TypeDef_Dcm_Data1ByteType
typedef uint8 Dcm_Data1ByteType[1];

# define Rte_TypeDef_Dcm_Data20ByteType
typedef uint8 Dcm_Data20ByteType[20];

# define Rte_TypeDef_Dcm_Data24ByteType
typedef uint8 Dcm_Data24ByteType[24];

# define Rte_TypeDef_Dcm_Data25ByteType
typedef uint8 Dcm_Data25ByteType[25];

# define Rte_TypeDef_Dcm_Data2ByteType
typedef uint8 Dcm_Data2ByteType[2];

# define Rte_TypeDef_Dcm_Data3ByteType
typedef uint8 Dcm_Data3ByteType[3];

# define Rte_TypeDef_Dcm_Data40ByteType
typedef uint8 Dcm_Data40ByteType[40];

# define Rte_TypeDef_Dcm_Data4ByteType
typedef uint8 Dcm_Data4ByteType[4];

# define Rte_TypeDef_Dcm_Data64ByteType
typedef uint8 Dcm_Data64ByteType[64];

# define Rte_TypeDef_Dcm_Data7ByteType
typedef uint8 Dcm_Data7ByteType[7];

# define Rte_TypeDef_Dcm_Data8ByteType
typedef uint8 Dcm_Data8ByteType[8];

# define Rte_TypeDef_Dem_MaxDataValueType
typedef uint8 Dem_MaxDataValueType[2];

# define Rte_TypeDef_Ford_VehicleGGCCData
typedef uint8 Ford_VehicleGGCCData[8];

# define Rte_TypeDef_CurrMeasEolGainCal3PhaRec1
typedef struct
{
  float32 CurrMeasMotCurrEolGainA;
  float32 CurrMeasMotCurrEolGainB;
  float32 CurrMeasMotCurrEolGainC;
} CurrMeasEolGainCal3PhaRec1;

# define Rte_TypeDef_CurrMeasEolOffsCal3PhaRec1
typedef struct
{
  float32 CurrMeasEolOffsHiBrdgVltg;
  float32 CurrMeasMotCurrEolOffsDifA;
  float32 CurrMeasMotCurrEolOffsDifB;
  float32 CurrMeasMotCurrEolOffsDifC;
  float32 CurrMeasMotCurrOffsLoAvrgA;
  float32 CurrMeasMotCurrOffsLoAvrgB;
  float32 CurrMeasMotCurrOffsLoAvrgC;
} CurrMeasEolOffsCal3PhaRec1;

# define Rte_TypeDef_DiagcDataRec2
typedef struct
{
  uint8 DiagcSts;
  float32 ActvRampRate;
  float32 ActvMotTqCmdSca;
} DiagcDataRec2;

# define Rte_TypeDef_DutyCycThermProtnFilStValRec1
typedef struct
{
  uint8 Fil3StVal;
  uint8 Fil4StVal;
  uint8 Fil5StVal;
  uint8 Fil6StVal;
} DutyCycThermProtnFilStValRec1;

# define Rte_TypeDef_EotNvmDataRec1
typedef struct
{
  float32 CwEot;
  float32 CcwEot;
  boolean CwEotDetd;
  boolean CcwEotDetd;
} EotNvmDataRec1;

# define Rte_TypeDef_FilNotchGainRec1
typedef struct
{
  float32 FilGainB0;
  float32 FilGainB1;
  float32 FilGainB2;
  float32 FilGainA1;
  float32 FilGainA2;
} FilNotchGainRec1;

# define Rte_TypeDef_FilNotchStRec1
typedef struct
{
  float32 FilSt1;
  float32 FilSt2;
} FilNotchStRec1;

# define Rte_TypeDef_HwAgOffsRec1
typedef struct
{
  float32 OffsTrim;
  boolean OffsTrimPrfmdSts;
} HwAgOffsRec1;

# define Rte_TypeDef_HwTqOffsRec1
typedef struct
{
  float32 OffsTrim;
  boolean OffsTrimPrfmdSts;
} HwTqOffsRec1;

# define Rte_TypeDef_MaxHwAgCwAndCcwRec2
typedef struct
{
  float32 HwAgCcwMax;
  float32 HwAgCwMax;
  uint8 HwAgOverTrvlCnt;
} MaxHwAgCwAndCcwRec2;

# define Rte_TypeDef_MotAgMeasEolPrmRec1
typedef struct
{
  float32 SinOffs;
  float32 CosOffs;
  float32 SinAmpRecpr;
  float32 CosAmpRecpr;
  float32 SinDelta;
} MotAgMeasEolPrmRec1;

# define Rte_TypeDef_MotAgRtPrmRec1
typedef struct
{
  float32 SinRtOffs;
  float32 SinRtAmpRecpr;
  float32 CosRtOffs;
  float32 CosRtAmpRecpr;
  float32 SinGainCorrd;
  float32 CosGainCorrd;
  float32 SinOffsCorrd;
  float32 CosOffsCorrd;
  float32 CosSinNomRatio;
  float32 SinCosNomRatio;
  float32 RtToNomRatioLoLim;
  float32 RtToNomRatioHiLim;
  float32 PrevSinRtOffs;
  float32 PrevCosRtOffs;
} MotAgRtPrmRec1;

# define Rte_TypeDef_MotAgStVariRec1
typedef struct
{
  float32 MotAgSinMax;
  float32 MotAgSinMin;
  float32 MotAgCosMax;
  float32 MotAgCosMin;
} MotAgStVariRec1;

# define Rte_TypeDef_MotPrmNomEolRec3
typedef struct
{
  float32 MotBackEmfConNom;
  float32 MotRNom;
} MotPrmNomEolRec3;

# define Rte_TypeDef_StordLstPrmRec1
typedef struct
{
  float32 PinionAg;
  boolean PinionAgVld;
} StordLstPrmRec1;

# define Rte_TypeDef_SysFricNonLrngDataRec1
typedef struct
{
  float32 EolFric;
  boolean EnaFricLrng;
  boolean EnaFricOffsOutp;
} SysFricNonLrngDataRec1;

# define Rte_TypeDef_TFilStValRec1
typedef struct
{
  float32 FilSiLpStVal;
  float32 FilMagLpStVal;
  float32 FilCuLpStVal;
  float32 FilAssisMechLpStVal;
  float32 FilSiLLStVal;
  float32 FilMagLLStVal;
  float32 FilCuLLStVal;
  float32 FilAssisMechLLStVal;
} TFilStValRec1;

# define Rte_TypeDef_AdrMpgReqTyp1
typedef uint8 AdrMpgReqTyp1;

# define Rte_TypeDef_Ary2D_f32_4_2
typedef Ary1D_f32_2 Ary2D_f32_4_2[4];

# define Rte_TypeDef_Ary2D_f32_5_4
typedef Ary1D_f32_4 Ary2D_f32_5_4[5];

# define Rte_TypeDef_Ary2D_f32_5_5
typedef Ary1D_f32_5 Ary2D_f32_5_5[5];

# define Rte_TypeDef_Ary2D_f32_8_4
typedef Ary1D_f32_4 Ary2D_f32_8_4[8];

# define Rte_TypeDef_Ary2D_s16_8_9
typedef Ary1D_s16_9 Ary2D_s16_8_9[8];

# define Rte_TypeDef_Ary2D_s16p0_8_9
typedef Ary1D_s16_9 Ary2D_s16p0_8_9[8];

# define Rte_TypeDef_Ary2D_u16_8_3
typedef Ary1D_u16_3 Ary2D_u16_8_3[8];

# define Rte_TypeDef_Ary2D_u8_2_2
typedef Ary1D_u8_2 Ary2D_u8_2_2[2];

# define Rte_TypeDef_BattVltgSt1
typedef uint8 BattVltgSt1;

# define Rte_TypeDef_BswM_BswMEcuResetMod
typedef uint8 BswM_BswMEcuResetMod;

# define Rte_TypeDef_BswM_ESH_RunRequest
typedef uint8 BswM_ESH_RunRequest;

# define Rte_TypeDef_CalCopySts1
typedef uint8 CalCopySts1;

# define Rte_TypeDef_ComM_InhibitionStatusType
typedef uint8 ComM_InhibitionStatusType;

# define Rte_TypeDef_ComM_ModeType
typedef uint8 ComM_ModeType;

# define Rte_TypeDef_ComM_UserHandleType
typedef uint8 ComM_UserHandleType;

# define Rte_TypeDef_CrcHwResvCfg1
typedef uint8 CrcHwResvCfg1;

# define Rte_TypeDef_CrcHwResvMod1
typedef uint8 CrcHwResvMod1;

# define Rte_TypeDef_CrcHwSts1
typedef uint8 CrcHwSts1;

# define Rte_TypeDef_CrcHwStsRec2
typedef struct
{
  uint32 TaskId;
  CrcHwSts1 CrcHwSts;
} CrcHwStsRec2;

# define Rte_TypeDef_Dcm_CommunicationModeType
typedef uint8 Dcm_CommunicationModeType;

# define Rte_TypeDef_Dcm_ConfirmationStatusType
typedef uint8 Dcm_ConfirmationStatusType;

# define Rte_TypeDef_Dcm_ControlDtcSettingType
typedef uint8 Dcm_ControlDtcSettingType;

# define Rte_TypeDef_Dcm_DiagnosticSessionControlType
typedef uint8 Dcm_DiagnosticSessionControlType;

# define Rte_TypeDef_Dcm_NegativeResponseCodeType
typedef uint8 Dcm_NegativeResponseCodeType;

# define Rte_TypeDef_Dcm_OpStatusType
typedef uint8 Dcm_OpStatusType;

# define Rte_TypeDef_Dcm_ProtocolType
typedef uint8 Dcm_ProtocolType;

# define Rte_TypeDef_Dcm_RequestKindType
typedef uint8 Dcm_RequestKindType;

# define Rte_TypeDef_Dcm_SecLevelType
typedef uint8 Dcm_SecLevelType;

# define Rte_TypeDef_Dcm_SesCtrlType
typedef uint8 Dcm_SesCtrlType;

# define Rte_TypeDef_Dem_DTCFormatType
typedef uint8 Dem_DTCFormatType;

# define Rte_TypeDef_Dem_DTCGroupType
typedef uint32 Dem_DTCGroupType;

# define Rte_TypeDef_Dem_DTCKindType
typedef uint8 Dem_DTCKindType;

# define Rte_TypeDef_Dem_DTCOriginType
typedef uint8 Dem_DTCOriginType;

# define Rte_TypeDef_Dem_DTCStatusMaskType
typedef uint8 Dem_DTCStatusMaskType;

# define Rte_TypeDef_Dem_DebounceResetStatusType
typedef uint8 Dem_DebounceResetStatusType;

# define Rte_TypeDef_Dem_DebouncingStateType
typedef uint8 Dem_DebouncingStateType;

# define Rte_TypeDef_Dem_EventIdType
typedef uint16 Dem_EventIdType;

# define Rte_TypeDef_Dem_EventStatusExtendedType
typedef uint8 Dem_EventStatusExtendedType;

# define Rte_TypeDef_Dem_EventStatusType
typedef uint8 Dem_EventStatusType;

# define Rte_TypeDef_Dem_IndicatorStatusType
typedef uint8 Dem_IndicatorStatusType;

# define Rte_TypeDef_Dem_InitMonitorReasonType
typedef uint8 Dem_InitMonitorReasonType;

# define Rte_TypeDef_Dem_IumprDenomCondIdType
typedef uint8 Dem_IumprDenomCondIdType;

# define Rte_TypeDef_Dem_IumprDenomCondStatusType
typedef uint8 Dem_IumprDenomCondStatusType;

# define Rte_TypeDef_Dem_OperationCycleIdType
typedef uint8 Dem_OperationCycleIdType;

# define Rte_TypeDef_Dem_OperationCycleStateType
typedef uint8 Dem_OperationCycleStateType;

# define Rte_TypeDef_Dem_RatioIdType
typedef uint16 Dem_RatioIdType;

# define Rte_TypeDef_Dem_UdsStatusByteType
typedef uint8 Dem_UdsStatusByteType;

# define Rte_TypeDef_EcuM_BootTargetType
typedef uint8 EcuM_BootTargetType;

# define Rte_TypeDef_EcuM_ModeType
typedef uint8 EcuM_ModeType;

# define Rte_TypeDef_EcuM_ShutdownCauseType
typedef uint8 EcuM_ShutdownCauseType;

# define Rte_TypeDef_EcuM_StateType
typedef uint8 EcuM_StateType;

# define Rte_TypeDef_EcuM_TimeType
typedef uint32 EcuM_TimeType;

# define Rte_TypeDef_EcuM_UserType
typedef uint8 EcuM_UserType;

# define Rte_TypeDef_FordArbnCmd1
typedef uint8 FordArbnCmd1;

# define Rte_TypeDef_FordEpsLifeCycMod1
typedef uint8 FordEpsLifeCycMod1;

# define Rte_TypeDef_FordEpsSysSt1
typedef uint8 FordEpsSysSt1;

# define Rte_TypeDef_FordFeatSt1
typedef uint8 FordFeatSt1;

# define Rte_TypeDef_FordVehWhlDirRaw1
typedef uint8 FordVehWhlDirRaw1;

# define Rte_TypeDef_FordVltgOperSt1
typedef uint8 FordVltgOperSt1;

# define Rte_TypeDef_GetSegMod1
typedef uint8 GetSegMod1;

# define Rte_TypeDef_HwAgSnsrTyp1
typedef uint8 HwAgSnsrTyp1;

# define Rte_TypeDef_IOHWAB_BOOL
typedef boolean IOHWAB_BOOL;

# define Rte_TypeDef_ImcArbnRxDataSrc1
typedef ImcArbnRxDataSrc2 ImcArbnRxDataSrc1;

# define Rte_TypeDef_ImcArbnRxExtdSts1
typedef ImcArbnRxExtdSts2 ImcArbnRxExtdSts1;

# define Rte_TypeDef_ImcArbnRxSts1
typedef uint8 ImcArbnRxSts1;

# define Rte_TypeDef_IvtrFetFltPha1
typedef uint8 IvtrFetFltPha1;

# define Rte_TypeDef_IvtrFetFltTyp1
typedef uint8 IvtrFetFltTyp1;

# define Rte_TypeDef_LoaSt1
typedef uint8 LoaSt1;

# define Rte_TypeDef_MfgEnaSt1
typedef uint8 MfgEnaSt1;

# define Rte_TypeDef_MotCurrEolCalSt2
typedef uint8 MotCurrEolCalSt2;

# define Rte_TypeDef_MotQuad1
typedef uint8 MotQuad1;

# define Rte_TypeDef_NtcNr1
typedef uint16 NtcNr1;

# define Rte_TypeDef_NtcNrWithResd1
typedef uint16 NtcNrWithResd1;

# define Rte_TypeDef_NtcSts1
typedef uint8 NtcSts1;

# define Rte_TypeDef_OnlineCalStsRec1
typedef struct
{
  Ary1D_OnlineCalSegInfoRec1_TunSelnMngt1 Seg;
  CalCopySts1 CopySts;
  uint8 ActvGroup;
  uint8 ActvInin;
  uint8 ActvRt;
} OnlineCalStsRec1;

# define Rte_TypeDef_PwrDiscnctSts1
typedef uint8 PwrDiscnctSts1;

# define Rte_TypeDef_ReadFltInfoRec1
typedef struct
{
  NtcNrWithResd1 NtcNr;
  uint8 AgiCntr;
  uint8 Sts;
  uint8 NtcStInfo;
} ReadFltInfoRec1;

# define Rte_TypeDef_SelnCaseSt1
typedef uint8 SelnCaseSt1;

# define Rte_TypeDef_SigQlfr1
typedef uint8 SigQlfr1;

# define Rte_TypeDef_SteerMod1
typedef uint8 SteerMod1;

# define Rte_TypeDef_SysFricLrngOperMod1
typedef uint8 SysFricLrngOperMod1;

# define Rte_TypeDef_SysSt1
typedef uint8 SysSt1;

# define Rte_TypeDef_TimeInMicrosecondsType
typedef uint32 TimeInMicrosecondsType;

# define Rte_TypeDef_WdgM_CheckpointIdType
typedef uint16 WdgM_CheckpointIdType;

# define Rte_TypeDef_WdgM_GlobalStatusType
typedef uint8 WdgM_GlobalStatusType;

# define Rte_TypeDef_WdgM_LocalStatusType
typedef uint8 WdgM_LocalStatusType;

# define Rte_TypeDef_WdgM_ModeType
typedef uint8 WdgM_ModeType;

# define Rte_TypeDef_WdgM_SupervisedEntityIdType
typedef uint16 WdgM_SupervisedEntityIdType;

# define Rte_TypeDef_s11p4
typedef sint16 s11p4;

# define Rte_TypeDef_s14p1
typedef sint16 s14p1;

# define Rte_TypeDef_s15p0
typedef sint16 s15p0;

# define Rte_TypeDef_s15p16
typedef sint32 s15p16;

# define Rte_TypeDef_s18p13
typedef sint32 s18p13;

# define Rte_TypeDef_s1p14
typedef sint16 s1p14;

# define Rte_TypeDef_s23pm8
typedef sint32 s23pm8;

# define Rte_TypeDef_s2p13
typedef sint16 s2p13;

# define Rte_TypeDef_s4p11
typedef sint16 s4p11;

# define Rte_TypeDef_s5p10
typedef sint16 s5p10;

# define Rte_TypeDef_s7p8
typedef sint16 s7p8;

# define Rte_TypeDef_s8p7
typedef sint16 s8p7;

# define Rte_TypeDef_sm6p13
typedef sint8 sm6p13;

# define Rte_TypeDef_u0p16
typedef uint16 u0p16;

# define Rte_TypeDef_u10p6
typedef uint16 u10p6;

# define Rte_TypeDef_u11p5
typedef uint16 u11p5;

# define Rte_TypeDef_u12p4
typedef uint16 u12p4;

# define Rte_TypeDef_u13p3
typedef uint16 u13p3;

# define Rte_TypeDef_u15p1
typedef uint16 u15p1;

# define Rte_TypeDef_u16p0
typedef uint16 u16p0;

# define Rte_TypeDef_u16p16
typedef uint32 u16p16;

# define Rte_TypeDef_u1p15
typedef uint16 u1p15;

# define Rte_TypeDef_u2p14
typedef uint16 u2p14;

# define Rte_TypeDef_u3p13
typedef uint16 u3p13;

# define Rte_TypeDef_u4p12
typedef uint16 u4p12;

# define Rte_TypeDef_u5p11
typedef uint16 u5p11;

# define Rte_TypeDef_u6p10
typedef uint16 u6p10;

# define Rte_TypeDef_u7p9
typedef uint16 u7p9;

# define Rte_TypeDef_u8p8
typedef uint16 u8p8;

# define Rte_TypeDef_u9p7
typedef uint16 u9p7;

# define Rte_TypeDef_Ary1D_CrcHwStsRec2_8
typedef CrcHwStsRec2 Ary1D_CrcHwStsRec2_8[8];

# define Rte_TypeDef_Ary1D_ReadFltInfoRec1_20
typedef ReadFltInfoRec1 Ary1D_ReadFltInfoRec1_20[20];

# define Rte_TypeDef_Ary1D_s11p4_11
typedef s11p4 Ary1D_s11p4_11[11];

# define Rte_TypeDef_Ary1D_s11p4_14
typedef s11p4 Ary1D_s11p4_14[14];

# define Rte_TypeDef_Ary1D_s11p4_5
typedef s11p4 Ary1D_s11p4_5[5];

# define Rte_TypeDef_Ary1D_s14p1_8
typedef s14p1 Ary1D_s14p1_8[8];

# define Rte_TypeDef_Ary1D_s15p0_4
typedef s15p0 Ary1D_s15p0_4[4];

# define Rte_TypeDef_Ary1D_s15p0_5
typedef s15p0 Ary1D_s15p0_5[5];

# define Rte_TypeDef_Ary1D_s1p14_12
typedef s1p14 Ary1D_s1p14_12[12];

# define Rte_TypeDef_Ary1D_s1p14_128
typedef s1p14 Ary1D_s1p14_128[128];

# define Rte_TypeDef_Ary1D_s1p14_512
typedef s1p14 Ary1D_s1p14_512[512];

# define Rte_TypeDef_Ary1D_s4p11_11
typedef s4p11 Ary1D_s4p11_11[11];

# define Rte_TypeDef_Ary1D_s4p11_12
typedef s4p11 Ary1D_s4p11_12[12];

# define Rte_TypeDef_Ary1D_s4p11_20
typedef s4p11 Ary1D_s4p11_20[20];

# define Rte_TypeDef_Ary1D_s4p11_4
typedef s4p11 Ary1D_s4p11_4[4];

# define Rte_TypeDef_Ary1D_s5p10_8
typedef s5p10 Ary1D_s5p10_8[8];

# define Rte_TypeDef_Ary1D_s7p8_5
typedef s7p8 Ary1D_s7p8_5[5];

# define Rte_TypeDef_Ary1D_s8p7_12
typedef s8p7 Ary1D_s8p7_12[12];

# define Rte_TypeDef_Ary1D_s8p7_14
typedef s8p7 Ary1D_s8p7_14[14];

# define Rte_TypeDef_Ary1D_sm6p13_144
typedef sm6p13 Ary1D_sm6p13_144[144];

# define Rte_TypeDef_Ary1D_u0p16_10
typedef u0p16 Ary1D_u0p16_10[10];

# define Rte_TypeDef_Ary1D_u0p16_2
typedef u0p16 Ary1D_u0p16_2[2];

# define Rte_TypeDef_Ary1D_u0p16_8
typedef u0p16 Ary1D_u0p16_8[8];

# define Rte_TypeDef_Ary1D_u10p6_10
typedef u10p6 Ary1D_u10p6_10[10];

# define Rte_TypeDef_Ary1D_u10p6_2
typedef u10p6 Ary1D_u10p6_2[2];

# define Rte_TypeDef_Ary1D_u10p6_4
typedef u10p6 Ary1D_u10p6_4[4];

# define Rte_TypeDef_Ary1D_u10p6_5
typedef u10p6 Ary1D_u10p6_5[5];

# define Rte_TypeDef_Ary1D_u10p6_8
typedef u10p6 Ary1D_u10p6_8[8];

# define Rte_TypeDef_Ary1D_u11p5_10
typedef u11p5 Ary1D_u11p5_10[10];

# define Rte_TypeDef_Ary1D_u11p5_12
typedef u11p5 Ary1D_u11p5_12[12];

# define Rte_TypeDef_Ary1D_u11p5_4
typedef u11p5 Ary1D_u11p5_4[4];

# define Rte_TypeDef_Ary1D_u11p5_6
typedef u11p5 Ary1D_u11p5_6[6];

# define Rte_TypeDef_Ary1D_u11p5_8
typedef u11p5 Ary1D_u11p5_8[8];

# define Rte_TypeDef_Ary1D_u12p4_12
typedef u12p4 Ary1D_u12p4_12[12];

# define Rte_TypeDef_Ary1D_u12p4_13
typedef u12p4 Ary1D_u12p4_13[13];

# define Rte_TypeDef_Ary1D_u12p4_16
typedef u12p4 Ary1D_u12p4_16[16];

# define Rte_TypeDef_Ary1D_u12p4_2
typedef u12p4 Ary1D_u12p4_2[2];

# define Rte_TypeDef_Ary1D_u12p4_4
typedef u12p4 Ary1D_u12p4_4[4];

# define Rte_TypeDef_Ary1D_u13p3_2
typedef u13p3 Ary1D_u13p3_2[2];

# define Rte_TypeDef_Ary1D_u13p3_6
typedef u13p3 Ary1D_u13p3_6[6];

# define Rte_TypeDef_Ary1D_u13p3_8
typedef u13p3 Ary1D_u13p3_8[8];

# define Rte_TypeDef_Ary1D_u15p1_12
typedef u15p1 Ary1D_u15p1_12[12];

# define Rte_TypeDef_Ary1D_u16p0_2
typedef u16p0 Ary1D_u16p0_2[2];

# define Rte_TypeDef_Ary1D_u16p0_20
typedef u16p0 Ary1D_u16p0_20[20];

# define Rte_TypeDef_Ary1D_u16p0_8
typedef u16p0 Ary1D_u16p0_8[8];

# define Rte_TypeDef_Ary1D_u1p15_11
typedef u1p15 Ary1D_u1p15_11[11];

# define Rte_TypeDef_Ary1D_u1p15_12
typedef u1p15 Ary1D_u1p15_12[12];

# define Rte_TypeDef_Ary1D_u1p15_2
typedef u1p15 Ary1D_u1p15_2[2];

# define Rte_TypeDef_Ary1D_u1p15_4
typedef u1p15 Ary1D_u1p15_4[4];

# define Rte_TypeDef_Ary1D_u1p15_5
typedef u1p15 Ary1D_u1p15_5[5];

# define Rte_TypeDef_Ary1D_u1p15_6
typedef u1p15 Ary1D_u1p15_6[6];

# define Rte_TypeDef_Ary1D_u2p14_10
typedef u2p14 Ary1D_u2p14_10[10];

# define Rte_TypeDef_Ary1D_u2p14_12
typedef u2p14 Ary1D_u2p14_12[12];

# define Rte_TypeDef_Ary1D_u2p14_16
typedef u2p14 Ary1D_u2p14_16[16];

# define Rte_TypeDef_Ary1D_u2p14_2
typedef u2p14 Ary1D_u2p14_2[2];

# define Rte_TypeDef_Ary1D_u2p14_4
typedef u2p14 Ary1D_u2p14_4[4];

# define Rte_TypeDef_Ary1D_u2p14_5
typedef u2p14 Ary1D_u2p14_5[5];

# define Rte_TypeDef_Ary1D_u2p14_6
typedef u2p14 Ary1D_u2p14_6[6];

# define Rte_TypeDef_Ary1D_u2p14_7
typedef u2p14 Ary1D_u2p14_7[7];

# define Rte_TypeDef_Ary1D_u3p13_10
typedef u3p13 Ary1D_u3p13_10[10];

# define Rte_TypeDef_Ary1D_u3p13_13
typedef u3p13 Ary1D_u3p13_13[13];

# define Rte_TypeDef_Ary1D_u3p13_5
typedef u3p13 Ary1D_u3p13_5[5];

# define Rte_TypeDef_Ary1D_u3p13_50
typedef u3p13 Ary1D_u3p13_50[50];

# define Rte_TypeDef_Ary1D_u3p13_8
typedef u3p13 Ary1D_u3p13_8[8];

# define Rte_TypeDef_Ary1D_u4p12_10
typedef u4p12 Ary1D_u4p12_10[10];

# define Rte_TypeDef_Ary1D_u4p12_11
typedef u4p12 Ary1D_u4p12_11[11];

# define Rte_TypeDef_Ary1D_u4p12_12
typedef u4p12 Ary1D_u4p12_12[12];

# define Rte_TypeDef_Ary1D_u4p12_14
typedef u4p12 Ary1D_u4p12_14[14];

# define Rte_TypeDef_Ary1D_u4p12_2
typedef u4p12 Ary1D_u4p12_2[2];

# define Rte_TypeDef_Ary1D_u4p12_5
typedef u4p12 Ary1D_u4p12_5[5];

# define Rte_TypeDef_Ary1D_u4p12_6
typedef u4p12 Ary1D_u4p12_6[6];

# define Rte_TypeDef_Ary1D_u4p12_8
typedef u4p12 Ary1D_u4p12_8[8];

# define Rte_TypeDef_Ary1D_u5p11_10
typedef u5p11 Ary1D_u5p11_10[10];

# define Rte_TypeDef_Ary1D_u5p11_13
typedef u5p11 Ary1D_u5p11_13[13];

# define Rte_TypeDef_Ary1D_u5p11_14
typedef u5p11 Ary1D_u5p11_14[14];

# define Rte_TypeDef_Ary1D_u5p11_16
typedef u5p11 Ary1D_u5p11_16[16];

# define Rte_TypeDef_Ary1D_u5p11_5
typedef u5p11 Ary1D_u5p11_5[5];

# define Rte_TypeDef_Ary1D_u5p11_6
typedef u5p11 Ary1D_u5p11_6[6];

# define Rte_TypeDef_Ary1D_u5p11_8
typedef u5p11 Ary1D_u5p11_8[8];

# define Rte_TypeDef_Ary1D_u6p10_10
typedef u6p10 Ary1D_u6p10_10[10];

# define Rte_TypeDef_Ary1D_u6p10_6
typedef u6p10 Ary1D_u6p10_6[6];

# define Rte_TypeDef_Ary1D_u7p9_12
typedef u7p9 Ary1D_u7p9_12[12];

# define Rte_TypeDef_Ary1D_u7p9_4
typedef u7p9 Ary1D_u7p9_4[4];

# define Rte_TypeDef_Ary1D_u8p8_10
typedef u8p8 Ary1D_u8p8_10[10];

# define Rte_TypeDef_Ary1D_u8p8_12
typedef u8p8 Ary1D_u8p8_12[12];

# define Rte_TypeDef_Ary1D_u8p8_14
typedef u8p8 Ary1D_u8p8_14[14];

# define Rte_TypeDef_Ary1D_u8p8_2
typedef u8p8 Ary1D_u8p8_2[2];

# define Rte_TypeDef_Ary1D_u8p8_20
typedef u8p8 Ary1D_u8p8_20[20];

# define Rte_TypeDef_Ary1D_u8p8_4
typedef u8p8 Ary1D_u8p8_4[4];

# define Rte_TypeDef_Ary1D_u8p8_5
typedef u8p8 Ary1D_u8p8_5[5];

# define Rte_TypeDef_Ary1D_u8p8_6
typedef u8p8 Ary1D_u8p8_6[6];

# define Rte_TypeDef_Ary1D_u8p8_8
typedef u8p8 Ary1D_u8p8_8[8];

# define Rte_TypeDef_Ary1D_u9p7_10
typedef u9p7 Ary1D_u9p7_10[10];

# define Rte_TypeDef_Ary1D_u9p7_12
typedef u9p7 Ary1D_u9p7_12[12];

# define Rte_TypeDef_Ary1D_u9p7_16
typedef u9p7 Ary1D_u9p7_16[16];

# define Rte_TypeDef_Ary1D_u9p7_2
typedef u9p7 Ary1D_u9p7_2[2];

# define Rte_TypeDef_Ary1D_u9p7_4
typedef u9p7 Ary1D_u9p7_4[4];

# define Rte_TypeDef_Ary1D_u9p7_5
typedef u9p7 Ary1D_u9p7_5[5];

# define Rte_TypeDef_Ary1D_u9p7_6
typedef u9p7 Ary1D_u9p7_6[6];

# define Rte_TypeDef_Ary1D_u9p7_7
typedef u9p7 Ary1D_u9p7_7[7];

# define Rte_TypeDef_Ary1D_u9p7_8
typedef u9p7 Ary1D_u9p7_8[8];

# define Rte_TypeDef_Ary1D_u9p7_9
typedef u9p7 Ary1D_u9p7_9[9];

# define Rte_TypeDef_Ary2D_s1p14_10_12
typedef Ary1D_s1p14_12 Ary2D_s1p14_10_12[10];

# define Rte_TypeDef_Ary2D_s4p11_12_20
typedef Ary1D_s4p11_20 Ary2D_s4p11_12_20[12];

# define Rte_TypeDef_Ary2D_s4p11_8_11
typedef Ary1D_s4p11_11 Ary2D_s4p11_8_11[8];

# define Rte_TypeDef_Ary2D_s7p8_4_5
typedef Ary1D_s7p8_5 Ary2D_s7p8_4_5[4];

# define Rte_TypeDef_Ary2D_u0p16_20_8
typedef Ary1D_u0p16_8 Ary2D_u0p16_20_8[20];

# define Rte_TypeDef_Ary2D_u0p16_4_2
typedef Ary1D_u0p16_2 Ary2D_u0p16_4_2[4];

# define Rte_TypeDef_Ary2D_u12p4_12_13
typedef Ary1D_u12p4_13 Ary2D_u12p4_12_13[12];

# define Rte_TypeDef_Ary2D_u12p4_4_2
typedef Ary1D_u12p4_2 Ary2D_u12p4_4_2[4];

# define Rte_TypeDef_Ary2D_u12p4_5_4
typedef Ary1D_u12p4_4 Ary2D_u12p4_5_4[5];

# define Rte_TypeDef_Ary2D_u12p4_9_16
typedef Ary1D_u12p4_16 Ary2D_u12p4_9_16[9];

# define Rte_TypeDef_Ary2D_u16p0_2_8
typedef Ary1D_u16p0_8 Ary2D_u16p0_2_8[2];

# define Rte_TypeDef_Ary2D_u1p15_12_5
typedef Ary1D_u1p15_5 Ary2D_u1p15_12_5[12];

# define Rte_TypeDef_Ary2D_u1p15_5_4
typedef Ary1D_u1p15_4 Ary2D_u1p15_5_4[5];

# define Rte_TypeDef_Ary2D_u1p15_8_4
typedef Ary1D_u1p15_4 Ary2D_u1p15_8_4[8];

# define Rte_TypeDef_Ary2D_u2p14_12_5
typedef Ary1D_u2p14_5 Ary2D_u2p14_12_5[12];

# define Rte_TypeDef_Ary2D_u2p14_6_5
typedef Ary1D_u2p14_5 Ary2D_u2p14_6_5[6];

# define Rte_TypeDef_Ary2D_u2p14_6_7
typedef Ary1D_u2p14_7 Ary2D_u2p14_6_7[6];

# define Rte_TypeDef_Ary2D_u3p13_12_13
typedef Ary1D_u3p13_13 Ary2D_u3p13_12_13[12];

# define Rte_TypeDef_Ary2D_u3p13_20_8
typedef Ary1D_u3p13_8 Ary2D_u3p13_20_8[20];

# define Rte_TypeDef_Ary2D_u4p12_12_5
typedef Ary1D_u4p12_5 Ary2D_u4p12_12_5[12];

# define Rte_TypeDef_Ary2D_u4p12_12_8
typedef Ary1D_u4p12_8 Ary2D_u4p12_12_8[12];

# define Rte_TypeDef_Ary2D_u5p11_12_13
typedef Ary1D_u5p11_13 Ary2D_u5p11_12_13[12];

# define Rte_TypeDef_Ary2D_u5p11_12_5
typedef Ary1D_u5p11_5 Ary2D_u5p11_12_5[12];

# define Rte_TypeDef_Ary2D_u5p11_9_16
typedef Ary1D_u5p11_16 Ary2D_u5p11_9_16[9];

# define Rte_TypeDef_Ary2D_u7p9_9_4
typedef Ary1D_u7p9_4 Ary2D_u7p9_9_4[9];

# define Rte_TypeDef_Ary2D_u8p8_12_20
typedef Ary1D_u8p8_20 Ary2D_u8p8_12_20[12];

# define Rte_TypeDef_Ary2D_u8p8_6_5
typedef Ary1D_u8p8_5 Ary2D_u8p8_6_5[6];

# define Rte_TypeDef_Ary2D_u8p8_9_4
typedef Ary1D_u8p8_4 Ary2D_u8p8_9_4[9];

# define Rte_TypeDef_Ary2D_u8p8_9_8
typedef Ary1D_u8p8_8 Ary2D_u8p8_9_8[9];

# define Rte_TypeDef_Ary2D_u9p7_2_5
typedef Ary1D_u9p7_5 Ary2D_u9p7_2_5[2];

# define Rte_TypeDef_Ary2D_u9p7_2_8
typedef Ary1D_u9p7_8 Ary2D_u9p7_2_8[2];

# define Rte_TypeDef_BlkFltTblRec1
typedef struct
{
  NtcSts1 Sts;
  uint8 Prm;
} BlkFltTblRec1;

# define Rte_TypeDef_MotAgEolPrmRec1
typedef struct
{
  u3p13 SinOffs;
  u3p13 CosOffs;
  u3p13 SinAmpRecpr;
  u3p13 CosAmpRecpr;
  s2p13 SinDelta;
  Ary1D_sm6p13_144 SinHrmncTbl;
  Ary1D_sm6p13_144 CosHrmncTbl;
  u1p15 SinGainCorrd;
  u1p15 CosGainCorrd;
  s2p13 SinOffsCorrd;
  s2p13 CosOffsCorrd;
  u3p13 CosDeltaRecpr;
} MotAgEolPrmRec1;

# define Rte_TypeDef_MotRplCoggPrmRec2
typedef struct
{
  uint16 CoggOrder1;
  s1p14 CoggOrder1X;
  s1p14 CoggOrder1Y;
  uint16 CoggOrder2;
  s1p14 CoggOrder2X;
  s1p14 CoggOrder2Y;
  uint16 CoggOrder3;
  s1p14 CoggOrder3X;
  s1p14 CoggOrder3Y;
} MotRplCoggPrmRec2;

# define Rte_TypeDef_NtcFltInfoRec2
typedef struct
{
  NtcNrWithResd1 NtcNr;
  uint8 AgiCntr;
  uint8 Sts;
} NtcFltInfoRec2;

# define Rte_TypeDef_SnpshtDataRec1
typedef struct
{
  uint32 MicroDiagcData;
  s5p10 HwTq;
  s5p10 MotTq;
  uint32 IgnCntr;
  u6p10 BrdgVltg;
  s8p7 EcuT;
  uint16 NtcNr;
  uint8 NtcStInfo;
  SysSt1 SysSt;
  u9p7 VehSpd;
} SnpshtDataRec1;

# define Rte_TypeDef_SnpshtDataRec2
typedef struct
{
  uint32 SpclSnpshtData0;
  uint32 SpclSnpshtData1;
  uint32 SpclSnpshtData2;
  uint32 MicroDiagcData;
  uint32 IgnCntr;
  s5p10 HwTq;
  s5p10 MotTq;
  u6p10 BrdgVltg;
  s8p7 EcuT;
  NtcNrWithResd1 NtcNr;
  uint8 NtcStInfo;
  SysSt1 SysSt;
} SnpshtDataRec2;

# define Rte_TypeDef_SysFricDataRec1
typedef struct
{
  float32 FricOffs;
  Ary1D_f32_4 BasLineFric;
  Ary1D_f32_4 VehLrndFric;
  Ary2D_f32_8_4 Hys;
  Ary2D_u16_8_3 RngCntr;
  SysFricLrngOperMod1 SysFricLrngOperMod;
} SysFricDataRec1;

# define Rte_TypeDef_Ary1D_BlkFltTblRec1_5
typedef BlkFltTblRec1 Ary1D_BlkFltTblRec1_5[5];

# define Rte_TypeDef_Ary1D_NtcFltInfoRec2_20
typedef NtcFltInfoRec2 Ary1D_NtcFltInfoRec2_20[20];

# define Rte_TypeDef_Ary1D_SnpshtDataRec1_8
typedef SnpshtDataRec1 Ary1D_SnpshtDataRec1_8[8];

# define Rte_TypeDef_Ary1D_SnpshtDataRec2_8
typedef SnpshtDataRec2 Ary1D_SnpshtDataRec2_8[8];


# ifndef RTE_SUPPRESS_UNUSED_DATATYPES
/**********************************************************************************************************************
 * Unused Data type definitions
 *********************************************************************************************************************/

#  define Rte_TypeDef_Ford_ApedPos_Pc_ActlArb
typedef uint16 Ford_ApedPos_Pc_ActlArb;

#  define Rte_TypeDef_Ford_DeliveryIdle
typedef uint16 Ford_DeliveryIdle;

#  define Rte_TypeDef_Ford_DeliveryNumber
typedef uint8 Ford_DeliveryNumber;

#  define Rte_TypeDef_Ford_DeliverySipNumber
typedef uint32 Ford_DeliverySipNumber;

#  define Rte_TypeDef_Ford_DeliverySubProjectNumber
typedef uint32 Ford_DeliverySubProjectNumber;

#  define Rte_TypeDef_Ford_EPASExtAngleStatReq
typedef boolean Ford_EPASExtAngleStatReq;

#  define Rte_TypeDef_Ford_EngAout_N_Actl
typedef uint16 Ford_EngAout_N_Actl;

#  define Rte_TypeDef_Ford_FileVersionDay
typedef uint8 Ford_FileVersionDay;

#  define Rte_TypeDef_Ford_FileVersionMonth
typedef uint8 Ford_FileVersionMonth;

#  define Rte_TypeDef_Ford_FileVersionNumber
typedef uint8 Ford_FileVersionNumber;

#  define Rte_TypeDef_Ford_FileVersionYear
typedef uint8 Ford_FileVersionYear;

#  define Rte_TypeDef_Ford_HitchToTrlrAxle_L_Calc
typedef uint16 Ford_HitchToTrlrAxle_L_Calc;

#  define Rte_TypeDef_Ford_TrlrAidCancl_B_Rq
typedef boolean Ford_TrlrAidCancl_B_Rq;

#  define Rte_TypeDef_Ford_TrlrAidTrgtId_No_Rq
typedef uint8 Ford_TrlrAidTrgtId_No_Rq;

#  define Rte_TypeDef_Ford_TrlrAidTrlrId_No_Rq
typedef uint8 Ford_TrlrAidTrlrId_No_Rq;

#  define Rte_TypeDef_Ford_TrlrAnOffst_An2_Calc
typedef uint8 Ford_TrlrAnOffst_An2_Calc;

#  define Rte_TypeDef_Ford_TrlrAn_An_MxCalc
typedef uint8 Ford_TrlrAn_An_MxCalc;

#  define Rte_TypeDef_Ford_TrlrAn_An_WarnCalc
typedef uint8 Ford_TrlrAn_An_WarnCalc;

#  define Rte_TypeDef_Ford_TrlrAxleToBmpr_L_Actl
typedef uint16 Ford_TrlrAxleToBmpr_L_Actl;

#  define Rte_TypeDef_Ford_TrlrBrkActCnnct_B_Actl
typedef boolean Ford_TrlrBrkActCnnct_B_Actl;

#  define Rte_TypeDef_Ford_TrlrId_No_Actl
typedef uint8 Ford_TrlrId_No_Actl;

#  define Rte_TypeDef_Ford_TrlrRvrseCancl_B_Rq
typedef boolean Ford_TrlrRvrseCancl_B_Rq;

#  define Rte_TypeDef_Ford_ApaSys_D_Stat
typedef uint8 Ford_ApaSys_D_Stat;

#  define Rte_TypeDef_Ford_ApedPosPcActl_D_Qf
typedef uint8 Ford_ApedPosPcActl_D_Qf;

#  define Rte_TypeDef_Ford_BPedDrvAppl_D_QF
typedef uint8 Ford_BPedDrvAppl_D_QF;

#  define Rte_TypeDef_Ford_BattULo_U_Actl
typedef uint8 Ford_BattULo_U_Actl;

#  define Rte_TypeDef_Ford_BpedDrvAppl_D_Actl
typedef uint8 Ford_BpedDrvAppl_D_Actl;

#  define Rte_TypeDef_Ford_DrvSte_D_Stat
typedef uint8 Ford_DrvSte_D_Stat;

#  define Rte_TypeDef_Ford_DrvSte_Tq_Rq
typedef uint8 Ford_DrvSte_Tq_Rq;

#  define Rte_TypeDef_Ford_ExtSteeringAngleReq2
typedef uint16 Ford_ExtSteeringAngleReq2;

#  define Rte_TypeDef_Ford_GearPos_D_Actl
typedef uint8 Ford_GearPos_D_Actl;

#  define Rte_TypeDef_Ford_LkaDrvOvrrd_D_Rq
typedef uint8 Ford_LkaDrvOvrrd_D_Rq;

#  define Rte_TypeDef_Ford_SteWhlRelCalib_An_Sns
typedef uint16 Ford_SteWhlRelCalib_An_Sns;

#  define Rte_TypeDef_Ford_TrlrAidEnbl_D2_Rq
typedef uint8 Ford_TrlrAidEnbl_D2_Rq;

#  define Rte_TypeDef_Ford_TrlrAidSetup_D2_Rq
typedef uint8 Ford_TrlrAidSetup_D2_Rq;

#  define Rte_TypeDef_Ford_TrlrAidSetup_D2_Stat
typedef uint8 Ford_TrlrAidSetup_D2_Stat;

#  define Rte_TypeDef_Ford_TrlrAnOffstDir_D_Mem
typedef uint8 Ford_TrlrAnOffstDir_D_Mem;

#  define Rte_TypeDef_Ford_TrlrHitYaw_AnRate_Actl
typedef uint16 Ford_TrlrHitYaw_AnRate_Actl;

#  define Rte_TypeDef_Ford_TrlrHitchYaw_An_Actl
typedef uint16 Ford_TrlrHitchYaw_An_Actl;

#  define Rte_TypeDef_Ford_TrlrHitchYaw_D_Stat
typedef uint8 Ford_TrlrHitchYaw_D_Stat;

#  define Rte_TypeDef_Ford_TrlrIdType_D_Stat
typedef uint8 Ford_TrlrIdType_D_Stat;

#  define Rte_TypeDef_Ford_TrlrRvrseEnbl_D2_Stat
typedef uint8 Ford_TrlrRvrseEnbl_D2_Stat;

#  define Rte_TypeDef_Ford_TrlrRvrseMsgTxt_D2_Rq
typedef uint8 Ford_TrlrRvrseMsgTxt_D2_Rq;

#  define Rte_TypeDef_Ford_TrlrYawWActl_D_Qf
typedef uint8 Ford_TrlrYawWActl_D_Qf;

#  define Rte_TypeDef_Ford_TrlrYaw_W_Actl
typedef uint16 Ford_TrlrYaw_W_Actl;

#  define Rte_TypeDef_Ford_TrnRng_D_Rq
typedef uint8 Ford_TrnRng_D_Rq;

#  define Rte_TypeDef_Ary1D_f32_30
typedef float32 Ary1D_f32_30[30];

#  define Rte_TypeDef_Ary1D_f32_72
typedef float32 Ary1D_f32_72[72];

#  define Rte_TypeDef_Ary1D_logl_2
typedef boolean Ary1D_logl_2[2];

#  define Rte_TypeDef_Ary1D_logl_4_01
typedef boolean Ary1D_logl_4_01[4];

#  define Rte_TypeDef_Ary1D_u08_12
typedef uint8 Ary1D_u08_12[12];

#  define Rte_TypeDef_Ary1D_u08_2
typedef uint8 Ary1D_u08_2[2];

#  define Rte_TypeDef_Ary1D_u08_225
typedef uint8 Ary1D_u08_225[225];

#  define Rte_TypeDef_Ary1D_u08_3
typedef uint8 Ary1D_u08_3[3];

#  define Rte_TypeDef_Ary1D_u16_257
typedef uint16 Ary1D_u16_257[257];

#  define Rte_TypeDef_Ary1D_u32_5
typedef uint32 Ary1D_u32_5[5];

#  define Rte_TypeDef_Ary1D_u32_512
typedef uint32 Ary1D_u32_512[512];

#  define Rte_TypeDef_Ary1D_u8_22
typedef uint8 Ary1D_u8_22[22];

#  define Rte_TypeDef_Ford_TrlrSnsId_No_Actl
typedef uint8 Ford_TrlrSnsId_No_Actl[6];

#  define Rte_TypeDef_AnHwTqScaFacRec1
typedef struct
{
  float32 SnsrSca;
  boolean SnsrScaPrfmdSts;
} AnHwTqScaFacRec1;

#  define Rte_TypeDef_BmwDesIninIdxRec1
typedef struct
{
  uint8 BmwDesIninIdx;
  boolean BmwDesIninIdxWrSts;
} BmwDesIninIdxRec1;

#  define Rte_TypeDef_BmwVehCentrOffs1
typedef struct
{
  float32 BmwRackCentrToVehCentrOffs;
  float32 VehCentrOffs;
  boolean LongTermVehCentrCmpl;
  sint8 BmwQuadRotorOffs;
} BmwVehCentrOffs1;

#  define Rte_TypeDef_BmwVehCentrOffsRec1
typedef struct
{
  float32 BmwRackCentrToVehCentrOffs;
  float32 VehCentrOffs;
  boolean LongTermVehCentrCmpl;
  sint8 BmwQuadRotorOffs;
  boolean RackCentrToVehCentrOffsVld;
} BmwVehCentrOffsRec1;

#  define Rte_TypeDef_CurrMeasEolGainCalBrdgRec1
typedef struct
{
  float32 CurrMeasMotCurrEolGainA;
  float32 CurrMeasMotCurrEolGainB;
} CurrMeasEolGainCalBrdgRec1;

#  define Rte_TypeDef_CurrMeasEolGainCalRec1
typedef struct
{
  float32 CurrMeasMotCurrEolGainA;
  float32 CurrMeasMotCurrEolGainB;
  float32 CurrMeasMotCurrEolGainC;
  float32 CurrMeasMotCurrEolGainD;
  float32 CurrMeasMotCurrEolGainE;
  float32 CurrMeasMotCurrEolGainF;
} CurrMeasEolGainCalRec1;

#  define Rte_TypeDef_CurrMeasEolOffsCalBrdgRec1
typedef struct
{
  float32 CurrMeasEolOffsHiBrdgVltg;
  float32 CurrMeasMotCurrEolOffsDifA;
  float32 CurrMeasMotCurrEolOffsDifB;
  float32 CurrMeasMotCurrOffsLoAvrgA;
  float32 CurrMeasMotCurrOffsLoAvrgB;
} CurrMeasEolOffsCalBrdgRec1;

#  define Rte_TypeDef_CurrMeasEolOffsCalRec1
typedef struct
{
  float32 CurrMeasEolOffsHiBrdgVltg;
  float32 CurrMeasMotCurrEolOffsDifA;
  float32 CurrMeasMotCurrEolOffsDifB;
  float32 CurrMeasMotCurrEolOffsDifC;
  float32 CurrMeasMotCurrEolOffsDifD;
  float32 CurrMeasMotCurrEolOffsDifE;
  float32 CurrMeasMotCurrEolOffsDifF;
  float32 CurrMeasMotCurrOffsLoAvrgA;
  float32 CurrMeasMotCurrOffsLoAvrgB;
  float32 CurrMeasMotCurrOffsLoAvrgC;
  float32 CurrMeasMotCurrOffsLoAvrgD;
  float32 CurrMeasMotCurrOffsLoAvrgE;
  float32 CurrMeasMotCurrOffsLoAvrgF;
} CurrMeasEolOffsCalRec1;

#  define Rte_TypeDef_CurrMeasEolOffsGainCalRec1
typedef struct
{
  float32 CurrMeasMotCurrOffsZeroAvrgA;
  float32 CurrMeasMotCurrOffsZeroAvrgB;
  float32 CurrMeasMotCurrOffsZeroAvrgC;
  float32 CurrMeasMotCurrEolGainA;
  float32 CurrMeasMotCurrEolGainB;
  float32 CurrMeasMotCurrEolGainC;
} CurrMeasEolOffsGainCalRec1;

#  define Rte_TypeDef_DutyCycExcddDataRec1
typedef struct
{
  uint8 ExcddCnt;
  uint8 IgnCnt;
} DutyCycExcddDataRec1;

#  define Rte_TypeDef_EOLGainOffs1
typedef struct
{
  float32 CurrMeasEolOffsHiBrdgVltg;
  float32 CurrMeasMotCurrEolGainA;
  float32 CurrMeasMotCurrEolGainB;
  float32 CurrMeasMotCurrEolGainC;
  float32 CurrMeasMotCurrEolGainD;
  float32 CurrMeasMotCurrEolGainE;
  float32 CurrMeasMotCurrEolGainF;
  float32 CurrMeasMotCurrEolOffsDifA;
  float32 CurrMeasMotCurrEolOffsDifB;
  float32 CurrMeasMotCurrEolOffsDifC;
  float32 CurrMeasMotCurrEolOffsDifD;
  float32 CurrMeasMotCurrEolOffsDifE;
  float32 CurrMeasMotCurrEolOffsDifF;
  float32 CurrMeasMotCurrOffsLoAvrgA;
  float32 CurrMeasMotCurrOffsLoAvrgB;
  float32 CurrMeasMotCurrOffsLoAvrgC;
  float32 CurrMeasMotCurrOffsLoAvrgD;
  float32 CurrMeasMotCurrOffsLoAvrgE;
  float32 CurrMeasMotCurrOffsLoAvrgF;
} EOLGainOffs1;

#  define Rte_TypeDef_HwAgSnsrTrimRec1
typedef struct
{
  float32 TrimVal;
  boolean TrimPrfmd;
} HwAgSnsrTrimRec1;

#  define Rte_TypeDef_LrndRackCentrNvmRec1
typedef struct
{
  float32 TotRackTrvl;
  float32 RackCentrMotDeg;
  sint16 RackCentrMotRev;
  boolean LongTermRackCentrCmpl;
  boolean MotAgVld;
} LrndRackCentrNvmRec1;

#  define Rte_TypeDef_MotPrmNomEolRec2
typedef struct
{
  float32 MotKeNom;
  float32 MotRNom;
} MotPrmNomEolRec2;

#  define Rte_TypeDef_StordLstPrmRec2
typedef struct
{
  float32 HwAgRel;
  sint16 Rev;
} StordLstPrmRec2;

#  define Rte_TypeDef_TorsBarStEstimdRec1
typedef struct
{
  float32 MotVelEstimd;
  float32 TorsBarTqEstimd;
  float32 TorsBarRotatmEstimd;
  float32 DrvrTqEstimd;
  float32 RackTqEstimd;
} TorsBarStEstimdRec1;

#  define Rte_TypeDef_WhlImbRejctnCmpPeakRec1
typedef struct
{
  float32 LePeakPrev;
  float32 RiPeakPrev;
  float32 MaxCompPerc;
  uint32 ActvCmpBand1;
  uint32 ActvCmpBand2;
  uint32 ActvCmpBand3;
} WhlImbRejctnCmpPeakRec1;

#  define Rte_TypeDef_Ary1D_s15p0_21
typedef s15p0 Ary1D_s15p0_21[21];

#  define Rte_TypeDef_Ary1D_s2p13_1024
typedef s2p13 Ary1D_s2p13_1024[1024];

#  define Rte_TypeDef_Ary1D_s2p13_1025
typedef s2p13 Ary1D_s2p13_1025[1025];

#  define Rte_TypeDef_Ary1D_s2p13_21
typedef s2p13 Ary1D_s2p13_21[21];

#  define Rte_TypeDef_Ary1D_s4p11_13
typedef s4p11 Ary1D_s4p11_13[13];

#  define Rte_TypeDef_Ary1D_s4p11_5
typedef s4p11 Ary1D_s4p11_5[5];

#  define Rte_TypeDef_Ary1D_s4p11_8
typedef s4p11 Ary1D_s4p11_8[8];

#  define Rte_TypeDef_Ary1D_s7p8_11
typedef s7p8 Ary1D_s7p8_11[11];

#  define Rte_TypeDef_Ary1D_s7p8_12
typedef s7p8 Ary1D_s7p8_12[12];

#  define Rte_TypeDef_Ary1D_s7p8_20
typedef s7p8 Ary1D_s7p8_20[20];

#  define Rte_TypeDef_Ary1D_s7p8_6
typedef s7p8 Ary1D_s7p8_6[6];

#  define Rte_TypeDef_Ary1D_s8p7_21
typedef s8p7 Ary1D_s8p7_21[21];

#  define Rte_TypeDef_Ary1D_s8p7_3
typedef s8p7 Ary1D_s8p7_3[3];

#  define Rte_TypeDef_Ary1D_u0p16_3
typedef u0p16 Ary1D_u0p16_3[3];

#  define Rte_TypeDef_Ary1D_u10p6_12
typedef u10p6 Ary1D_u10p6_12[12];

#  define Rte_TypeDef_Ary1D_u10p6_13
typedef u10p6 Ary1D_u10p6_13[13];

#  define Rte_TypeDef_Ary1D_u10p6_3
typedef u10p6 Ary1D_u10p6_3[3];

#  define Rte_TypeDef_Ary1D_u10p6_7
typedef u10p6 Ary1D_u10p6_7[7];

#  define Rte_TypeDef_Ary1D_u10p6_9
typedef u10p6 Ary1D_u10p6_9[9];

#  define Rte_TypeDef_Ary1D_u11p5_11
typedef u11p5 Ary1D_u11p5_11[11];

#  define Rte_TypeDef_Ary1D_u11p5_13
typedef u11p5 Ary1D_u11p5_13[13];

#  define Rte_TypeDef_Ary1D_u11p5_5
typedef u11p5 Ary1D_u11p5_5[5];

#  define Rte_TypeDef_Ary1D_u11p5_7
typedef u11p5 Ary1D_u11p5_7[7];

#  define Rte_TypeDef_Ary1D_u11p5_9
typedef u11p5 Ary1D_u11p5_9[9];

#  define Rte_TypeDef_Ary1D_u12p4_7
typedef u12p4 Ary1D_u12p4_7[7];

#  define Rte_TypeDef_Ary1D_u12p4_9
typedef u12p4 Ary1D_u12p4_9[9];

#  define Rte_TypeDef_Ary1D_u13p3_4
typedef u13p3 Ary1D_u13p3_4[4];

#  define Rte_TypeDef_Ary1D_u15p1_10
typedef u15p1 Ary1D_u15p1_10[10];

#  define Rte_TypeDef_Ary1D_u15p1_24
typedef u15p1 Ary1D_u15p1_24[24];

#  define Rte_TypeDef_Ary1D_u15p1_4
typedef u15p1 Ary1D_u15p1_4[4];

#  define Rte_TypeDef_Ary1D_u15p1_9
typedef u15p1 Ary1D_u15p1_9[9];

#  define Rte_TypeDef_Ary1D_u16p0_22
typedef u16p0 Ary1D_u16p0_22[22];

#  define Rte_TypeDef_Ary1D_u1p15_10
typedef u1p15 Ary1D_u1p15_10[10];

#  define Rte_TypeDef_Ary1D_u1p15_21
typedef u1p15 Ary1D_u1p15_21[21];

#  define Rte_TypeDef_Ary1D_u1p15_9
typedef u1p15 Ary1D_u1p15_9[9];

#  define Rte_TypeDef_Ary1D_u2p14_11
typedef u2p14 Ary1D_u2p14_11[11];

#  define Rte_TypeDef_Ary1D_u2p14_3
typedef u2p14 Ary1D_u2p14_3[3];

#  define Rte_TypeDef_Ary1D_u2p14_8
typedef u2p14 Ary1D_u2p14_8[8];

#  define Rte_TypeDef_Ary1D_u2p14_9
typedef u2p14 Ary1D_u2p14_9[9];

#  define Rte_TypeDef_Ary1D_u4p12_13
typedef u4p12 Ary1D_u4p12_13[13];

#  define Rte_TypeDef_Ary1D_u4p12_20
typedef u4p12 Ary1D_u4p12_20[20];

#  define Rte_TypeDef_Ary1D_u4p12_21
typedef u4p12 Ary1D_u4p12_21[21];

#  define Rte_TypeDef_Ary1D_u4p12_24
typedef u4p12 Ary1D_u4p12_24[24];

#  define Rte_TypeDef_Ary1D_u4p12_3
typedef u4p12 Ary1D_u4p12_3[3];

#  define Rte_TypeDef_Ary1D_u4p12_4
typedef u4p12 Ary1D_u4p12_4[4];

#  define Rte_TypeDef_Ary1D_u4p12_7
typedef u4p12 Ary1D_u4p12_7[7];

#  define Rte_TypeDef_Ary1D_u4p12_9
typedef u4p12 Ary1D_u4p12_9[9];

#  define Rte_TypeDef_Ary1D_u5p11_11
typedef u5p11 Ary1D_u5p11_11[11];

#  define Rte_TypeDef_Ary1D_u5p11_12
typedef u5p11 Ary1D_u5p11_12[12];

#  define Rte_TypeDef_Ary1D_u5p11_17
typedef u5p11 Ary1D_u5p11_17[17];

#  define Rte_TypeDef_Ary1D_u5p11_21
typedef u5p11 Ary1D_u5p11_21[21];

#  define Rte_TypeDef_Ary1D_u5p11_9
typedef u5p11 Ary1D_u5p11_9[9];

#  define Rte_TypeDef_Ary1D_u6p10_17
typedef u6p10 Ary1D_u6p10_17[17];

#  define Rte_TypeDef_Ary1D_u6p10_20
typedef u6p10 Ary1D_u6p10_20[20];

#  define Rte_TypeDef_Ary1D_u6p10_5
typedef u6p10 Ary1D_u6p10_5[5];

#  define Rte_TypeDef_Ary1D_u6p10_9
typedef u6p10 Ary1D_u6p10_9[9];

#  define Rte_TypeDef_Ary1D_u7p9_3
typedef u7p9 Ary1D_u7p9_3[3];

#  define Rte_TypeDef_Ary1D_u7p9_6
typedef u7p9 Ary1D_u7p9_6[6];

#  define Rte_TypeDef_Ary1D_u8p8_11
typedef u8p8 Ary1D_u8p8_11[11];

#  define Rte_TypeDef_Ary1D_u8p8_13
typedef u8p8 Ary1D_u8p8_13[13];

#  define Rte_TypeDef_Ary1D_u8p8_3
typedef u8p8 Ary1D_u8p8_3[3];

#  define Rte_TypeDef_Ary1D_u8p8_7
typedef u8p8 Ary1D_u8p8_7[7];

#  define Rte_TypeDef_Ary1D_u8p8_9
typedef u8p8 Ary1D_u8p8_9[9];

#  define Rte_TypeDef_Ary1D_u9p7_11
typedef u9p7 Ary1D_u9p7_11[11];

#  define Rte_TypeDef_Ary1D_u9p7_3
typedef u9p7 Ary1D_u9p7_3[3];

#  define Rte_TypeDef_Ary2D_f32_3_3
typedef Ary1D_f32_3 Ary2D_f32_3_3[3];

#  define Rte_TypeDef_Ary2D_f32_4_5
typedef Ary1D_f32_5 Ary2D_f32_4_5[4];

#  define Rte_TypeDef_Ary2D_f32_4_8
typedef Ary1D_f32_8 Ary2D_f32_4_8[4];

#  define Rte_TypeDef_Ary2D_f32_5_3
typedef Ary1D_f32_3 Ary2D_f32_5_3[5];

#  define Rte_TypeDef_Ary2D_s4p11_10_13
typedef Ary1D_s4p11_13 Ary2D_s4p11_10_13[10];

#  define Rte_TypeDef_Ary2D_s4p11_11_8
typedef Ary1D_s4p11_8 Ary2D_s4p11_11_8[11];

#  define Rte_TypeDef_Ary2D_s4p11_12_11
typedef Ary1D_s4p11_11 Ary2D_s4p11_12_11[12];

#  define Rte_TypeDef_Ary2D_s7p8_11_12
typedef Ary1D_s7p8_12 Ary2D_s7p8_11_12[11];

#  define Rte_TypeDef_Ary2D_s7p8_12_11
typedef Ary1D_s7p8_11 Ary2D_s7p8_12_11[12];

#  define Rte_TypeDef_Ary2D_s7p8_3_5
typedef Ary1D_s7p8_5 Ary2D_s7p8_3_5[3];

#  define Rte_TypeDef_Ary2D_s7p8_3_6
typedef Ary1D_s7p8_6 Ary2D_s7p8_3_6[3];

#  define Rte_TypeDef_Ary2D_s7p8_9_5
typedef Ary1D_s7p8_5 Ary2D_s7p8_9_5[9];

#  define Rte_TypeDef_Ary2D_s7p8_9_6
typedef Ary1D_s7p8_6 Ary2D_s7p8_9_6[9];

#  define Rte_TypeDef_Ary2D_u08_2_2
typedef Ary1D_u08_2 Ary2D_u08_2_2[2];

#  define Rte_TypeDef_Ary2D_u10p6_3_7
typedef Ary1D_u10p6_7 Ary2D_u10p6_3_7[3];

#  define Rte_TypeDef_Ary2D_u10p6_8_12
typedef Ary1D_u10p6_12 Ary2D_u10p6_8_12[8];

#  define Rte_TypeDef_Ary2D_u10p6_8_9
typedef Ary1D_u10p6_9 Ary2D_u10p6_8_9[8];

#  define Rte_TypeDef_Ary2D_u11p5_6_5
typedef Ary1D_u11p5_5 Ary2D_u11p5_6_5[6];

#  define Rte_TypeDef_Ary2D_u12p4_8_12
typedef Ary1D_u12p4_12 Ary2D_u12p4_8_12[8];

#  define Rte_TypeDef_Ary2D_u15p1_10_24
typedef Ary1D_u15p1_24 Ary2D_u15p1_10_24[10];

#  define Rte_TypeDef_Ary2D_u15p1_12_9
typedef Ary1D_u15p1_9 Ary2D_u15p1_12_9[12];

#  define Rte_TypeDef_Ary2D_u16_3_8
typedef Ary1D_u16p0_8 Ary2D_u16_3_8[3];

#  define Rte_TypeDef_Ary2D_u1p15_12_9
typedef Ary1D_u1p15_9 Ary2D_u1p15_12_9[12];

#  define Rte_TypeDef_Ary2D_u2p14_5_10
typedef Ary1D_u2p14_10 Ary2D_u2p14_5_10[5];

#  define Rte_TypeDef_Ary2D_u2p14_5_8
typedef Ary1D_u2p14_8 Ary2D_u2p14_5_8[5];

#  define Rte_TypeDef_Ary2D_u2p14_7_6
typedef Ary1D_u2p14_6 Ary2D_u2p14_7_6[7];

#  define Rte_TypeDef_Ary2D_u2p14_7_8
typedef Ary1D_u2p14_8 Ary2D_u2p14_7_8[7];

#  define Rte_TypeDef_Ary2D_u4p12_10_24
typedef Ary1D_u4p12_24 Ary2D_u4p12_10_24[10];

#  define Rte_TypeDef_Ary2D_u4p12_12_12
typedef Ary1D_u4p12_12 Ary2D_u4p12_12_12[12];

#  define Rte_TypeDef_Ary2D_u4p12_12_20
typedef Ary1D_u4p12_20 Ary2D_u4p12_12_20[12];

#  define Rte_TypeDef_Ary2D_u4p12_12_9
typedef Ary1D_u4p12_9 Ary2D_u4p12_12_9[12];

#  define Rte_TypeDef_Ary2D_u4p12_13_3
typedef Ary1D_u4p12_3 Ary2D_u4p12_13_3[13];

#  define Rte_TypeDef_Ary2D_u4p12_3_13
typedef Ary1D_u4p12_13 Ary2D_u4p12_3_13[3];

#  define Rte_TypeDef_Ary2D_u4p12_6_7
typedef Ary1D_u4p12_7 Ary2D_u4p12_6_7[6];

#  define Rte_TypeDef_Ary2D_u5p11_9_9
typedef Ary1D_u5p11_9 Ary2D_u5p11_9_9[9];

#  define Rte_TypeDef_Ary2D_u6p10_12_20
typedef Ary1D_u6p10_20 Ary2D_u6p10_12_20[12];

#  define Rte_TypeDef_Ary2D_u6p10_12_9
typedef Ary1D_u6p10_9 Ary2D_u6p10_12_9[12];

#  define Rte_TypeDef_Ary2D_u6p10_5_9
typedef Ary1D_u6p10_9 Ary2D_u6p10_5_9[5];

#  define Rte_TypeDef_Ary2D_u6p10_8_9
typedef Ary1D_u6p10_9 Ary2D_u6p10_8_9[8];

#  define Rte_TypeDef_Ary2D_u7p9_8_4
typedef Ary1D_u7p9_4 Ary2D_u7p9_8_4[8];

#  define Rte_TypeDef_Ary2D_u8p8_3_5
typedef Ary1D_u8p8_5 Ary2D_u8p8_3_5[3];

#  define Rte_TypeDef_Ary2D_u8p8_3_6
typedef Ary1D_u8p8_6 Ary2D_u8p8_3_6[3];

#  define Rte_TypeDef_Ary2D_u8p8_5_10
typedef Ary1D_u8p8_10 Ary2D_u8p8_5_10[5];

#  define Rte_TypeDef_Ary2D_u8p8_5_8
typedef Ary1D_u8p8_8 Ary2D_u8p8_5_8[5];

#  define Rte_TypeDef_Ary2D_u8p8_9_5
typedef Ary1D_u8p8_5 Ary2D_u8p8_9_5[9];

#  define Rte_TypeDef_Ary2D_u8p8_9_6
typedef Ary1D_u8p8_6 Ary2D_u8p8_9_6[9];

#  define Rte_TypeDef_BattSwdVltgCorrlnSts1
typedef uint8 BattSwdVltgCorrlnSts1;

#  define Rte_TypeDef_BmwDiagcSessionId1
typedef uint8 BmwDiagcSessionId1;

#  define Rte_TypeDef_BmwElecEngDrvSts1
typedef uint8 BmwElecEngDrvSts1;

#  define Rte_TypeDef_BmwEngDrvSts1
typedef uint8 BmwEngDrvSts1;

#  define Rte_TypeDef_BmwEngStopCallSts1
typedef uint8 BmwEngStopCallSts1;

#  define Rte_TypeDef_BmwEpsFctSts1
typedef uint8 BmwEpsFctSts1;

#  define Rte_TypeDef_BmwFltLampReqSts1
typedef uint8 BmwFltLampReqSts1;

#  define Rte_TypeDef_BmwFltLampReqTyp1
typedef uint16 BmwFltLampReqTyp1;

#  define Rte_TypeDef_BmwFltLampReqTyp2
typedef uint16 BmwFltLampReqTyp2;

#  define Rte_TypeDef_BmwMotAgSelnSt1
typedef uint8 BmwMotAgSelnSt1;

#  define Rte_TypeDef_BmwNearStillVehSpdSts1
typedef uint8 BmwNearStillVehSpdSts1;

#  define Rte_TypeDef_BmwOvrlCmdQlfr1
typedef uint8 BmwOvrlCmdQlfr1;

#  define Rte_TypeDef_BmwPwrSplySts1
typedef uint8 BmwPwrSplySts1;

#  define Rte_TypeDef_BmwQuadOffsSts1
typedef uint8 BmwQuadOffsSts1;

#  define Rte_TypeDef_BmwRackToVehCentrOffsSts1
typedef uint8 BmwRackToVehCentrOffsSts1;

#  define Rte_TypeDef_BmwRtIdx1
typedef uint8 BmwRtIdx1;

#  define Rte_TypeDef_BmwSetVehCentrOffsSts1
typedef uint8 BmwSetVehCentrOffsSts1;

#  define Rte_TypeDef_BmwStrtStopMsgCmd1
typedef uint8 BmwStrtStopMsgCmd1;

#  define Rte_TypeDef_BmwTrfcJamAssiDampgStReq1
typedef uint8 BmwTrfcJamAssiDampgStReq1;

#  define Rte_TypeDef_BmwTrfcJamAssiSt1
typedef uint8 BmwTrfcJamAssiSt1;

#  define Rte_TypeDef_BmwVehCdn1
typedef uint8 BmwVehCdn1;

#  define Rte_TypeDef_BmwVehSpdSts1
typedef uint8 BmwVehSpdSts1;

#  define Rte_TypeDef_BmwVltgDrpSts1
typedef uint8 BmwVltgDrpSts1;

#  define Rte_TypeDef_CrcHwStsRec1
typedef struct
{
  uint16 TaskId;
  CrcHwSts1 CrcHwSts;
} CrcHwStsRec1;

#  define Rte_TypeDef_DrvgDynIfSt1
typedef uint8 DrvgDynIfSt1;

#  define Rte_TypeDef_EgyModSt1
typedef uint8 EgyModSt1;

#  define Rte_TypeDef_EotSt1
typedef uint8 EotSt1;

#  define Rte_TypeDef_GmAutnmsDrvgIfFltRespDi1
typedef uint8 GmAutnmsDrvgIfFltRespDi1;

#  define Rte_TypeDef_GmAutnmsSteerCmdSts1
typedef uint8 GmAutnmsSteerCmdSts1;

#  define Rte_TypeDef_GmBackUpSysPwrModAuthentd1
typedef uint8 GmBackUpSysPwrModAuthentd1;

#  define Rte_TypeDef_GmDrvrIntvDetnSt1
typedef uint8 GmDrvrIntvDetnSt1;

#  define Rte_TypeDef_GmDualEcuOperSts1
typedef uint8 GmDualEcuOperSts1;

#  define Rte_TypeDef_GmEscSysStsAuthentdSt1
typedef uint8 GmEscSysStsAuthentdSt1;

#  define Rte_TypeDef_GmFctDiArbnSts1
typedef uint8 GmFctDiArbnSts1;

#  define Rte_TypeDef_GmOvrlFeatActvSt1
typedef uint8 GmOvrlFeatActvSt1;

#  define Rte_TypeDef_GmOvrlStMgrApaSt1
typedef uint8 GmOvrlStMgrApaSt1;

#  define Rte_TypeDef_GmOvrlStMgrHandsOnLaneFolwgSt1
typedef uint8 GmOvrlStMgrHandsOnLaneFolwgSt1;

#  define Rte_TypeDef_GmOvrlStMgrHaptcSt1
typedef uint8 GmOvrlStMgrHaptcSt1;

#  define Rte_TypeDef_GmOvrlStMgrTrfcJamAssiSt1
typedef uint8 GmOvrlStMgrTrfcJamAssiSt1;

#  define Rte_TypeDef_GmRxMonrdSig1
typedef uint8 GmRxMonrdSig1;

#  define Rte_TypeDef_GmSecuAcsFlg1
typedef uint8 GmSecuAcsFlg1;

#  define Rte_TypeDef_GmSteerAgCtrlDiSt1
typedef uint8 GmSteerAgCtrlDiSt1;

#  define Rte_TypeDef_GmSteerCmdLimrSt1
typedef uint8 GmSteerCmdLimrSt1;

#  define Rte_TypeDef_GmSteerCmdMsgSrc1
typedef uint8 GmSteerCmdMsgSrc1;

#  define Rte_TypeDef_GmSteerCmdMsgSts1
typedef uint8 GmSteerCmdMsgSts1;

#  define Rte_TypeDef_GmSteerMod1
typedef uint8 GmSteerMod1;

#  define Rte_TypeDef_GmSteerPrfmncModReq1
typedef uint8 GmSteerPrfmncModReq1;

#  define Rte_TypeDef_GmSteerReqArbdFeatAuthentdSt1
typedef uint8 GmSteerReqArbdFeatAuthentdSt1;

#  define Rte_TypeDef_GmSteerReqStsAuthentdSt1
typedef uint8 GmSteerReqStsAuthentdSt1;

#  define Rte_TypeDef_GmSysDataCollctnEnaSt1
typedef uint8 GmSysDataCollctnEnaSt1;

#  define Rte_TypeDef_GmSysPwrMod1
typedef uint8 GmSysPwrMod1;

#  define Rte_TypeDef_GmSysPwrModAuthentd1
typedef uint8 GmSysPwrModAuthentd1;

#  define Rte_TypeDef_GmTqArbnEscSt1
typedef uint8 GmTqArbnEscSt1;

#  define Rte_TypeDef_GmTqArbnLkaSt1
typedef uint8 GmTqArbnLkaSt1;

#  define Rte_TypeDef_GmTqArbnTrfcJamAssiSt1
typedef uint8 GmTqArbnTrfcJamAssiSt1;

#  define Rte_TypeDef_GmTrsmShiftLvrPosnAuthentd1
typedef uint8 GmTrsmShiftLvrPosnAuthentd1;

#  define Rte_TypeDef_GmVehHlthMgrSt1
typedef uint8 GmVehHlthMgrSt1;

#  define Rte_TypeDef_GmVehModMgrSt1
typedef uint8 GmVehModMgrSt1;

#  define Rte_TypeDef_HwAgTrajCmdSt1
typedef uint16 HwAgTrajCmdSt1;

#  define Rte_TypeDef_MotAgSnsrCfgSt1
typedef uint8 MotAgSnsrCfgSt1;

#  define Rte_TypeDef_MotAgSnsrIninSt1
typedef uint8 MotAgSnsrIninSt1;

#  define Rte_TypeDef_NvM_ServiceIdType
typedef uint8 NvM_ServiceIdType;

#  define Rte_TypeDef_PassFailCntrDiagcRec1
typedef struct
{
  float32 Cntr;
  float32 Thd;
  float32 NegStep;
  float32 PosStep;
  SigQlfr1 Sts;
} PassFailCntrDiagcRec1;

#  define Rte_TypeDef_PhaDiscnctPwmVect1
typedef uint8 PhaDiscnctPwmVect1;

#  define Rte_TypeDef_Rte_DT_Ary1D_GmSteerAgCtrlDiSt1_7_0
typedef GmSteerAgCtrlDiSt1 Rte_DT_Ary1D_GmSteerAgCtrlDiSt1_7_0;

#  define Rte_TypeDef_StHlthMonSig3
typedef uint8 StHlthMonSig3;

#  define Rte_TypeDef_StHlthMonSig4
typedef uint8 StHlthMonSig4;

#  define Rte_TypeDef_StrtUpSt1
typedef uint8 StrtUpSt1;

#  define Rte_TypeDef_StsDrvrActvy1
typedef uint8 StsDrvrActvy1;

#  define Rte_TypeDef_StsSteerAssi1
typedef uint8 StsSteerAssi1;

#  define Rte_TypeDef_s10p5
typedef sint16 s10p5;

#  define Rte_TypeDef_s3p12
typedef sint16 s3p12;

#  define Rte_TypeDef_s6p9
typedef sint16 s6p9;

#  define Rte_TypeDef_sm5p12
typedef sint8 sm5p12;

#  define Rte_TypeDef_Ary1D_CrcHwStsRec1_4
typedef CrcHwStsRec1 Ary1D_CrcHwStsRec1_4[4];

#  define Rte_TypeDef_Ary1D_CrcHwStsRec1_8
typedef CrcHwStsRec1 Ary1D_CrcHwStsRec1_8[8];

#  define Rte_TypeDef_Ary1D_GmSteerAgCtrlDiSt1_7
typedef Rte_DT_Ary1D_GmSteerAgCtrlDiSt1_7_0 Ary1D_GmSteerAgCtrlDiSt1_7[7];

#  define Rte_TypeDef_Ary1D_s10p5_8
typedef s10p5 Ary1D_s10p5_8[8];

#  define Rte_TypeDef_Ary1D_sm5p12_128
typedef sm5p12 Ary1D_sm5p12_128[128];

#  define Rte_TypeDef_SnsrLrndOffsRec1
typedef struct
{
  float32 HwAgLrndTi;
  float32 YawRateElpdTi;
  Ary2D_f32_3_3 HwTqLrngCovariMtrx;
  Ary1D_f32_3 HwTqLrngEstimnVect;
  s6p9 YawRateOffs;
  s5p10 HwAgOffs;
  s3p12 HwTqOffs;
  s6p9 HwAgLrngYawOffsRef;
  s11p4 HwAgLrngHwAgFilSt;
  s10p5 HwAgLrngSysTqFilSt;
  s11p4 HwTqLrngHwAgRef;
  uint16 HwTqLrngSampleCntNeg;
  uint16 HwTqLrngSampleCntPos;
  uint8 HwTqLrngSts;
  boolean YawRateOffsVld;
} SnsrLrndOffsRec1;

# endif


/**********************************************************************************************************************
 * Calibration Parameter Types
 *********************************************************************************************************************/
typedef P2CONST(void, TYPEDEF, RTE_CONST) Rte_ParameterRefType;
typedef Rte_ParameterRefType Rte_ParameterRefTabType[45];
typedef P2CONST(Rte_ParameterRefType, TYPEDEF, RTE_CONST) Rte_ParameterBaseType;

# define RTE_START_SEC_VAR_NOINIT_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(Rte_ParameterBaseType, RTE_VAR_NOINIT) RteParameterBase;

# define RTE_STOP_SEC_VAR_NOINIT_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# define RTE_START_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
extern CONST(Rte_ParameterRefTabType, RTE_CONST) RteParameterRefTab;
# define RTE_STOP_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# define Rte_CalprmElementGroup_CDD_FordBlaBoxIfCmp1_DEFAULT_RTE_CDATA_GROUP (0)
typedef struct
{
  Ary1D_u08_128 ActvNiblCtrlDft;
  Ary1D_u08_256 LaneAssiDft;
  Ary1D_u08_128 PullDriftCmpDft;
  Ary1D_u08_512 TrlrBackupAssiDft;
} Rte_Calprm_CDD_FordBlaBoxIfCmp1_DEFAULT_RTE_CDATA_GROUP_Type;

# define Rte_CalprmElementGroup_CalRegn01Rt00_DEFAULT_RTE_CALPRM_GROUP (1)
typedef struct
{
  Ary1D_f32_3 TEstimnMagAmbMplr_Ary1D;
} Rte_Calprm_CalRegn01Rt00_DEFAULT_RTE_CALPRM_GROUP_Type;

# define Rte_CalprmElementGroup_CalRegn01Rt01_DEFAULT_RTE_CALPRM_GROUP (2)
typedef struct
{
  Ary1D_f32_3 TEstimnMagAmbMplr_Ary1D;
} Rte_Calprm_CalRegn01Rt01_DEFAULT_RTE_CALPRM_GROUP_Type;

# define Rte_CalprmElementGroup_CalRegn01Rt02_DEFAULT_RTE_CALPRM_GROUP (3)
typedef struct
{
  Ary1D_f32_3 TEstimnMagAmbMplr_Ary1D;
} Rte_Calprm_CalRegn01Rt02_DEFAULT_RTE_CALPRM_GROUP_Type;

# define Rte_CalprmElementGroup_CalRegn01Rt03_DEFAULT_RTE_CALPRM_GROUP (4)
typedef struct
{
  Ary1D_f32_3 TEstimnMagAmbMplr_Ary1D;
} Rte_Calprm_CalRegn01Rt03_DEFAULT_RTE_CALPRM_GROUP_Type;

# define Rte_CalprmElementGroup_CalRegn01Rt04_DEFAULT_RTE_CALPRM_GROUP (5)
typedef struct
{
  Ary1D_f32_3 TEstimnMagAmbMplr_Ary1D;
} Rte_Calprm_CalRegn01Rt04_DEFAULT_RTE_CALPRM_GROUP_Type;

# define Rte_CalprmElementGroup_CalRegn01Rt05_DEFAULT_RTE_CALPRM_GROUP (6)
typedef struct
{
  Ary1D_f32_3 TEstimnMagAmbMplr_Ary1D;
} Rte_Calprm_CalRegn01Rt05_DEFAULT_RTE_CALPRM_GROUP_Type;

# define Rte_CalprmElementGroup_CalRegn02CmnGroupA_DEFAULT_RTE_CALPRM_GROUP (7)
typedef struct
{
  Ary1D_u16p0_2 AssiThermScaX_Ary1D;
  Ary1D_u2p14_2 AssiThermScaY_Ary1D;
} Rte_Calprm_CalRegn02CmnGroupA_DEFAULT_RTE_CALPRM_GROUP_Type;

# define Rte_CalprmElementGroup_CDD_CurrMeas_DEFAULT_RTE_CDATA_GROUP (8)
typedef struct
{
  CurrMeasEolGainCal3PhaRec1 CurrMeasEolGainCalSetABCDft;
  CurrMeasEolOffsCal3PhaRec1 CurrMeasEolOffsCalSetABCDft;
} Rte_Calprm_CDD_CurrMeas_DEFAULT_RTE_CDATA_GROUP_Type;

# define Rte_CalprmElementGroup_DiagcMgr_DEFAULT_RTE_CDATA_GROUP (9)
typedef struct
{
  uint32 DiagcMgrApplCrcDft;
} Rte_Calprm_DiagcMgr_DEFAULT_RTE_CDATA_GROUP_Type;

# define Rte_CalprmElementGroup_CustDiag_DEFAULT_RTE_CDATA_GROUP (10)
typedef struct
{
  uint8 DidEE01Dft;
  uint8 DidEE02Dft;
  uint8 DidEE41Dft;
  uint8 DidEED0Dft;
  uint8 DidF162Dft;
  uint8 DidF163Dft;
  boolean Did630FChkDft;
  Ary1D_u8_2 Did205ADft;
  Ary1D_u8_2 Did205BDft;
  Ary1D_u8_24 Did3003Dft;
  Ary1D_u8_2 Did301ADft;
  Ary1D_u8_24 Did630FDft;
  Ary1D_u8_24 DidDE00Dft;
  Ary1D_u8_24 DidDE01Dft;
  Ary1D_u8_24 DidDE02Dft;
  Ary1D_u8_64 DidDE03Dft;
  Ary1D_u8_2 DidDE04Dft;
  Ary1D_u8_24 DidDE05Dft;
  Ary1D_u8_3 DidEE00Dft;
  Ary1D_u8_20 DidEE21Dft;
  Ary1D_u8_40 DidEE22Dft;
  Ary1D_u8_40 DidEE23Dft;
  Ary1D_u8_3 DidEE40Dft;
  Ary1D_u8_4 DidEE81Dft;
  Ary1D_u8_4 DidEE82Dft;
  Ary1D_u8_4 DidEE83Dft;
  Ary1D_u8_4 DidEE84Dft;
  Ary1D_u8_4 DidEE85Dft;
  Ary1D_u8_4 DidEE86Dft;
  Ary1D_u8_4 DidEE87Dft;
  Ary1D_u8_4 DidEE88Dft;
  Ary1D_u8_24 DidF110Dft;
  Ary1D_u8_24 DidF111Dft;
  Ary1D_u8_24 DidF113Dft;
  Ary1D_u8_10 DidF15FDft;
  Ary1D_u8_4 DidF166Dft;
  Ary1D_u8_24 DidF18ADft;
  Ary1D_u8_16 DidF18CDft;
  Ary1D_u8_24 DidF190Dft;
} Rte_Calprm_CustDiag_DEFAULT_RTE_CDATA_GROUP_Type;

# define Rte_CalprmElementGroup_EotLrng_DEFAULT_RTE_CDATA_GROUP (11)
typedef struct
{
  EotNvmDataRec1 EotNvmDataDft;
} Rte_Calprm_EotLrng_DEFAULT_RTE_CDATA_GROUP_Type;

# define Rte_CalprmElementGroup_SysFricLrng_DEFAULT_RTE_CDATA_GROUP (12)
typedef struct
{
  SysFricDataRec1 FricLrngDataDft;
  SysFricNonLrngDataRec1 FricNonLrngDataDft;
} Rte_Calprm_SysFricLrng_DEFAULT_RTE_CDATA_GROUP_Type;

# define Rte_CalprmElementGroup_CDD_HwTq1Meas_DEFAULT_RTE_CDATA_GROUP (13)
typedef struct
{
  HwTqOffsRec1 HwTq1OffsDft;
} Rte_Calprm_CDD_HwTq1Meas_DEFAULT_RTE_CDATA_GROUP_Type;

# define Rte_CalprmElementGroup_CDD_HwTq8Meas_DEFAULT_RTE_CDATA_GROUP (14)
typedef struct
{
  HwTqOffsRec1 HwTq8OffsDft;
} Rte_Calprm_CDD_HwTq8Meas_DEFAULT_RTE_CDATA_GROUP_Type;

# define Rte_CalprmElementGroup_MotAg2Meas_DEFAULT_RTE_CDATA_GROUP (15)
typedef struct
{
  MotAgMeasEolPrmRec1 MotAg2EolPrmDft;
} Rte_Calprm_MotAg2Meas_DEFAULT_RTE_CDATA_GROUP_Type;

# define Rte_CalprmElementGroup_CDD_MotAgCmp_DEFAULT_RTE_CDATA_GROUP (16)
typedef struct
{
  u0p16 MotAgCmpMotAgBackEmfDft;
} Rte_Calprm_CDD_MotAgCmp_DEFAULT_RTE_CDATA_GROUP_Type;

# define Rte_CalprmElementGroup_CmnMfgSrv_DEFAULT_RTE_CDATA_GROUP (17)
typedef struct
{
  uint32 NvmIgnCntr_DefaultValue;
  uint8 NvmMfgEnaCntr_DefaultValue;
  Ary1D_u8_10 NvmNxtrSeedKey_DefaultValue;
  Ary1D_u32_2 SeedKeyDft;
} Rte_Calprm_CmnMfgSrv_DEFAULT_RTE_CDATA_GROUP_Type;

# define Rte_CalprmElementGroup_PolarityCfg_DEFAULT_RTE_CDATA_GROUP (18)
typedef struct
{
  uint32 PolarityCfgSavedDft;
} Rte_Calprm_PolarityCfg_DEFAULT_RTE_CDATA_GROUP_Type;

# define Rte_CalprmElementGroup_FordHwAgArbn_DEFAULT_RTE_CDATA_GROUP (19)
typedef struct
{
  float32 PrevIgnCycValDft;
} Rte_Calprm_FordHwAgArbn_DEFAULT_RTE_CDATA_GROUP_Type;

# define Rte_CalprmElementGroup_StackMeas_DEFAULT_RTE_CDATA_GROUP (20)
typedef struct
{
  Ary1D_u8_48 StackMeasResDft;
} Rte_Calprm_StackMeas_DEFAULT_RTE_CDATA_GROUP_Type;

# define Rte_CalprmElementGroup_HwAgSnsrls_DEFAULT_RTE_CDATA_GROUP (21)
typedef struct
{
  StordLstPrmRec1 StordLstPrmDft;
} Rte_Calprm_HwAgSnsrls_DEFAULT_RTE_CDATA_GROUP_Type;

# define Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP (22)
typedef struct
{
  float32 AssiSumLimPullCmpLim_Val;
  float32 BattVltgSwdMax_Val;
  float32 BattVltgCorrlnAllwdVltgDif_Val;
  float32 BattVltgCorrlnBattLoVltg_Val;
  float32 BattVltgCorrlnBattOverVltg_Val;
  float32 BattVltgCorrlnBattUnderVltg_Val;
  float32 BattVltgCorrlnRcvrlBattLoVltg_Val;
  float32 BattVltgCorrlnRcvrlBattOverVltg_Val;
  float32 BattVltgCorrlnRcvrlBattUnderVltg_Val;
  float32 BattVltgCorrlnSwdMax_Val;
  float32 BattVltgCorrlnSysMinVltg_Val;
  float32 CurrMeasEolGainMax_Val;
  float32 CurrMeasEolGainMin_Val;
  float32 CurrMeasEolGainNom_Val;
  float32 CurrMeasEolGainNumer_Val;
  float32 CurrMeasEolMaxMotVel_Val;
  float32 CurrMeasEolOffsHiBrdgVltgMin_Val;
  float32 CurrMeasEolOffsMax_Val;
  float32 CurrMeasEolOffsMin_Val;
  float32 CurrMeasEolOffsNom_Val;
  float32 CurrMeasMotCurrAdcVlyWrmIninMax_Val;
  float32 CurrMeasMotCurrAdcVlyWrmIninMin_Val;
  float32 MotAg5MeasAmpSqdMaxThd_Val;
  float32 MotAg5MeasAmpSqdMinThd_Val;
  float32 MotAg5MeasLpFilFrq_Val;
  float32 MotAg5MeasRtAmpRecprLim_Val;
  float32 MotAg5MeasRtFilEnaThd_Val;
  float32 MotAg5MeasRtMotVelFilEnaThd_Val;
  float32 MotAg5MeasRtOffsLim_Val;
  float32 MotAg5MeasRtToNomRatLim_Val;
  float32 MotAg6MeasAmpSqdMaxThd_Val;
  float32 MotAg6MeasAmpSqdMinThd_Val;
  float32 MotAg6MeasLpFilFrq_Val;
  float32 MotAg6MeasRtAmpRecprLim_Val;
  float32 MotAg6MeasRtFilEnaThd_Val;
  float32 MotAg6MeasRtMotVelFilEnaThd_Val;
  float32 MotAg6MeasRtOffsLim_Val;
  float32 MotAg6MeasRtToNomRatLim_Val;
  float32 MotAgSwCalVehSpdThd_Val;
  float32 MotCurrRegCfgMotRVirtDax_Val;
  float32 MotCurrRegCfgMotRVirtQax_Val;
  float32 MotCurrRegVltgLimrCurrLoaScarSlewRate_Val;
  float32 MotCurrRegVltgLimrDaxAntiWdupCoeff_Val;
  float32 MotCurrRegVltgLimrDualEcuLoaScarSlewRate_Val;
  float32 MotCurrRegVltgLimrFETLoaScarSlewRate_Val;
  float32 MotCurrRegVltgLimrIvtrLoaScarSlewRate_Val;
  float32 MotCurrRegVltgLimrMotCurrPredTi_Val;
  float32 MotCurrRegVltgLimrMotVltgBrdgLpFilFrq_Val;
  float32 MotCurrRegVltgLimrMotVltgDaxIntglHiLim_Val;
  float32 MotCurrRegVltgLimrMotVltgDaxIntglLoLim_Val;
  float32 MotCurrRegVltgLimrMotVltgQaxFfLpFilFrq_Val;
  float32 MotCurrRegVltgLimrMotVltgQaxIntglHiLim_Val;
  float32 MotCurrRegVltgLimrMotVltgQaxIntglLoLim_Val;
  float32 MotCurrRegVltgLimrQaxAntiWdupCoeff_Val;
  float32 MotRefMdlIvtrDeadTiBrdgVltgSca_Val;
  float32 SinVltgGennDthrLpFilCoeff_Val;
  float32 CurrMeasCorrlnMaxErrCurr_Val;
  float32 DutyCycThermProtnAbsltMotVelBreakPt_Val;
  float32 DutyCycThermProtnAbsltTTqSlewHiLim_Val;
  float32 DutyCycThermProtnAbsltTTqSlewLoLim_Val;
  float32 DutyCycThermProtnCtrlT_Val;
  float32 DutyCycThermProtnIgnOffMsgWaitTi_Val;
  float32 DutyCycThermProtnThermLimScaFac_Val;
  float32 DutyCycThermProtnTqCmdSlewDwn_Val;
  float32 DutyCycThermProtnTqCmdSlewUp_Val;
  float32 ElecPwrCnsCtrlrInpR_Val;
  float32 GateDrv0CtrlErrFilFrq_Val;
  float32 HwAgSnsrlsCorrdPinionAgConfThd_Val;
  float32 HwAgSnsrlsCorrdPinionAgHwConf_Val;
  float32 HwAgSnsrlsFCentrHwConf_Val;
  float32 HwAgSnsrlsPinionTqFilFrq_Val;
  float32 HwAgSnsrlsRelHwAgFil1Frq_Val;
  float32 HwAgSnsrlsRelHwAgFil2Frq_Val;
  float32 HwAgSnsrlsSmotngCoeff_Val;
  float32 HwAgSnsrlsSmotngStepThd_Val;
  float32 HwAgSnsrlsStordPinionConf_Val;
  float32 HwAgSnsrlsStordPinionConfThd_Val;
  float32 HwAgSnsrlsVehDynDifThd_Val;
  float32 HwAgSnsrlsVehDynHwConf_Val;
  float32 HwAgSnsrlsVehDynMotVelThd_Val;
  float32 HwAgSnsrlsVehDynPinionTqThd_Val;
  float32 HwAgSnsrlsWhlFrqThd_Val;
  float32 HwAgSnsrlsWhlSpdHwAgCoeff1_Val;
  float32 HwAgSnsrlsWhlSpdHwAgCoeff2_Val;
  float32 HwAgSnsrlsWhlSpdHwAgThd_Val;
  float32 HwAgSnsrlsWhlSpdHwConf_Val;
  float32 HwAgSnsrlsWhlSpdRatThd_Val;
  float32 HwAgSnsrlsWhlSpdVehSpdThd_Val;
  float32 HwAgSysArbnHwAgConf1Snsr_Val;
  float32 HwAgSysArbnHwAgConf1SnsrHwAgTrimNotPrfmd_Val;
  float32 HwAgSysArbnHwAgConf2Snsr_Val;
  float32 HwAgSysArbnHwAgConf2SnsrHwAgTrimNotPrfmd_Val;
  float32 HwAgSysArbnHwAgConfNoSnsr_Val;
  float32 HwAgSysArbnHwAgCorrdCorrlnThd_Val;
  float32 HwAgSysArbnHwAgCorrlnRng_Val;
  float32 HwAgSysArbnHwAgSlewRate_Val;
  float32 HwAgSysArbnHwAgSnsrlsCorrlnThd_Val;
  float32 HwAgSysArbnHwAgSnsrlsKineThd_Val;
  float32 HwAgSysArbnImcHwAgCorrlnRng_Val;
  float32 HwAgSysArbnPinionAgConfThd_Val;
  float32 HwAgSysArbnSerlComHwAgCorrdConf_Val;
  float32 HwAgSysArbnSerlComHwAgSnsrlsConf_Val;
  float32 HwAgSysArbnSlewRateTmr_Val;
  float32 HwTqCorrlnImdtCorrlnChkFailThd_Val;
  float32 LoaMgrFadeOutStRate_Val;
  float32 MotAg2MeasOffs_Val;
  float32 MotCtrlPrmEstimnFetRNom_Val;
  float32 MotCtrlPrmEstimnFetThermCoeff_Val;
  float32 MotCtrlPrmEstimnMagThermCoeff_Val;
  float32 MotCtrlPrmEstimnMotBackEmfConHiLim_Val;
  float32 MotCtrlPrmEstimnMotBackEmfConLoLim_Val;
  float32 MotCtrlPrmEstimnMotBackEmfConNom_Val;
  float32 MotCtrlPrmEstimnMotBackEmfConSatnScaIvtrLoaMtgtn_Val;
  float32 MotCtrlPrmEstimnMotInduDaxHiLim_Val;
  float32 MotCtrlPrmEstimnMotInduDaxIvtrLoaMtgtn_Val;
  float32 MotCtrlPrmEstimnMotInduDaxLoLim_Val;
  float32 MotCtrlPrmEstimnMotInduDaxNom_Val;
  float32 MotCtrlPrmEstimnMotInduQaxHiLim_Val;
  float32 MotCtrlPrmEstimnMotInduQaxIvtrLoaMtgtn_Val;
  float32 MotCtrlPrmEstimnMotInduQaxLoLim_Val;
  float32 MotCtrlPrmEstimnMotInduQaxNom_Val;
  float32 MotCtrlPrmEstimnMotRHiLim_Val;
  float32 MotCtrlPrmEstimnMotRLoLim_Val;
  float32 MotCtrlPrmEstimnMotRNom_Val;
  float32 MotCtrlPrmEstimnMotWidgThermCoeff_Val;
  float32 MotCtrlPrmEstimnTNom_Val;
  float32 MotCurrPeakEstimnCurrFilFrq_Val;
  float32 MotCurrPeakEstimnCurrPeakEstimdFilFrq_Val;
  float32 MotCurrRegCfgCtrlrDynGainVehSpdCutOff_Val;
  float32 MotCurrRegCfgIntglGainSampleTi_Val;
  float32 MotCurrRegCfgMotAgCompuDly_Val;
  float32 MotCurrRegCfgMotDampgRatDax_Val;
  float32 MotCurrRegCfgMotDampgRatQax_Val;
  float32 MotCurrRegCfgMotVelFilFrq_Val;
  float32 MotRefMdlCurrDaxBoostGain_Val;
  float32 MotRefMdlCurrItrnTolr_Val;
  float32 MotRefMdlMotCurrDaxMaxSca_Val;
  float32 MotRefMdlMotVelLpFilFrq_Val;
  float32 MotRefMdlMotVltgDerivtvTiCon_Val;
  float32 MotRefMdlTqItrnTolr_Val;
  float32 MotRefMdlVltgOverRThdSca_Val;
  float32 PwrLimrAssiRednLpFilFrq_Val;
  float32 PwrLimrBackEmfConStdT_Val;
  float32 PwrLimrBrdgVltgAdjSlew_Val;
  float32 PwrLimrBrdgVltgAltFltAdj_Val;
  float32 PwrLimrFilAssiRednThd_Val;
  float32 PwrLimrLoVoltAssiRcvrThd_Val;
  float32 PwrLimrMotVelLpFilFrq_Val;
  float32 PwrLimrSpdAdjSlewDec_Val;
  float32 PwrLimrSpdAdjSlewInc_Val;
  float32 SysPrfmncStsAbsltCtrlTFltThd_Val;
  float32 SysPrfmncStsAssiStallLimDecThd_Val;
  float32 SysPrfmncStsBattDiagcHiCrit_Val;
  float32 SysPrfmncStsBattDiagcHiWarn_Val;
  float32 SysPrfmncStsBattDiagcLoCrit_Val;
  float32 SysPrfmncStsBattDiagcLoWarn_Val;
  float32 SysPrfmncStsBattVltgFilFrq_Val;
  float32 SysPrfmncStsLoadDptLimDecThd_Val;
  float32 SysPrfmncStsTDptLimThd_Val;
  float32 TEstimnIgnOffMsgWaitTi_Val;
  float32 TqLoaDrvrTqNom_Val;
  float32 TqLoaMotTqCmdLim_Val;
  float32 TqLoaMotVelAndTqBasdScaFacFallRate_Val;
  float32 TqLoaMotVelAndTqBasdScaFacMax_Val;
  float32 TqLoaMotVelAndTqBasdScaFacMin_Val;
  float32 TqLoaMotVelAndTqBasdScaFacRiseRate_Val;
  float32 TqLoaMotVelMgnThd_Val;
  float32 TqLoaTqCmdMgnThd_Val;
  float32 TqLoaVehLatADifScaFacFallRate_Val;
  float32 TqLoaVehLatADifScaFacRiseRate_Val;
  float32 TqLoaVehLatAEstimnFilFrq_Val;
  float32 TqLoaVehSteerRat_Val;
  float32 TqLoaVehUnderSteerGrdt_Val;
  float32 TqLoaVehWhlBas_Val;
  float32 VehSigCdngDftLatA_Val;
  float32 VehSigCdngDftLgtA_Val;
  float32 VehSigCdngDftVehSpd_Val;
  float32 VehSigCdngDftYawRate_Val;
  float32 VehSigCdngLatADifThd_Val;
  float32 VehSigCdngLatAFilFrq_Val;
  float32 VehSigCdngLtgADifThd_Val;
  float32 VehSigCdngVehSpdDifThd_Val;
  float32 VehSigCdngVehYawSlewRate_Val;
  float32 VehSigCdngYawRateDifThd_Val;
  float32 VehSpdLimrPosMaxOffs1_Val;
  float32 VehSpdLimrPosMaxOffs2_Val;
  uint32 CurrMeasEolFixdPwmPerd_Val;
  uint32 CurrMeasEolOffsHiCmuOffs_Val;
  uint32 CurrMeasEolOffsLoCmuOffs_Val;
  uint32 CurrMeasMinRqrdPhaOnTi_Val;
  uint32 CurrMeasMotAgCompuDly_Val;
  uint32 GtmCfgAndUseAdcStrtOfCnvn2Offs_Val;
  uint32 GtmCfgAndUseAdcStrtOfCnvnPeakOffs_Val;
  uint32 GtmCfgAndUseDma2MilliSecToMotCtrlTrig_Val;
  uint32 GtmCfgAndUseDmaMotAgATrig_Val;
  uint32 GtmCfgAndUseDmaMotCtrlTo2MilliSecTrig_Val;
  uint32 GtmCfgAndUsePwmDbnd_Val;
  uint32 GateDrv0CtrlErrOffs_Val;
  uint32 GateDrv0CtrlErrThd_Val;
  uint32 HwAgSnsrlsVehDynTmr1Thd_Val;
  uint32 HwAgSnsrlsVehDynTmr2Thd_Val;
  uint32 HwAgSnsrlsWhlSpdTmrThd_Val;
  uint32 ImcArbnEcuIninTiOutThd_Val;
  uint32 NxtrCalIdsCal0DevlpRelNr_Val;
  uint32 NxtrCalIdsCal0DevlpTiStamp_Val;
  uint32 NxtrCalIdsCal2DevlpRelNr_Val;
  uint32 NxtrCalIdsCal2DevlpTiStamp_Val;
  s18p13 MotQuadDetnMotDirHysInsts_Val;
  uint16 AssiSumLimNtc0x0C4FailStep_Val;
  uint16 AssiSumLimNtc0x0C4PassStep_Val;
  uint16 BattVltgCorrlnNtc0x03C0x044FailStep_Val;
  uint16 BattVltgCorrlnNtc0x03C0x044PassStep_Val;
  uint16 BattVltgCorrlnNtc0x0B0FailStep_Val;
  uint16 BattVltgCorrlnNtc0x0B0PassStep_Val;
  uint16 BattVltgCorrlnNtc0x0B1FailStep_Val;
  uint16 BattVltgCorrlnNtc0x0B1PassStep_Val;
  uint16 BattVltgCorrlnNtc0x0B5FailStep_Val;
  uint16 BattVltgCorrlnNtc0x0B5PassStep_Val;
  uint16 CurrMeasEolGainNrOfSample_Val;
  uint16 CurrMeasEolOffsNrOfSample_Val;
  uint16 CurrMeasNtc0x05DFailStep_Val;
  uint16 CurrMeasNtc0x05DPassStep_Val;
  u0p16 MotAg5MeasOffs_Val;
  u0p16 MotAg6MeasOffs_Val;
  uint16 CmnMfgSrvSecuAcsAtmptTiOut_Val;
  uint16 CurrMeasCorrlnNtc0x04DFailStep_Val;
  uint16 CurrMeasCorrlnNtc0x04DPassStep_Val;
  u16p0 DutyCycThermProtnDutyCycFildThd_Val;
  u16p0 FordMsg077BusHiSpdCanDtcInhbThd_Val;
  u16p0 FordMsg077BusHiSpdLatACmpdInvldSigFaildThd_Val;
  u16p0 FordMsg077BusHiSpdLatACmpdInvldSigPassdThd_Val;
  u16p0 FordMsg077BusHiSpdLatACmpdVldMissThd_Val;
  u16p0 FordMsg077BusHiSpdLgtACmpdInvldSigFaildThd_Val;
  u16p0 FordMsg077BusHiSpdLgtACmpdInvldSigPassdThd_Val;
  u16p0 FordMsg077BusHiSpdLgtACmpdVldMissThd_Val;
  u16p0 FordMsg077BusHiSpdMissMsgFaildThd_Val;
  u16p0 FordMsg077BusHiSpdMissMsgPassdThd_Val;
  u16p0 FordMsg077BusHiSpdOverGndInvldSigFaildThd_Val;
  u16p0 FordMsg077BusHiSpdOverGndInvldSigPassdThd_Val;
  u16p0 FordMsg077BusHiSpdVehLatACmpdVldFaildThd_Val;
  u16p0 FordMsg077BusHiSpdVehLatACmpdVldPassdThd_Val;
  u16p0 FordMsg077BusHiSpdVehLgtACmpdVldFaildThd_Val;
  u16p0 FordMsg077BusHiSpdVehLgtACmpdVldPassdThd_Val;
  u16p0 FordMsg077BusHiSpdVehSpdOverGndVldFaildThd_Val;
  u16p0 FordMsg077BusHiSpdVehSpdOverGndVldMissThd_Val;
  u16p0 FordMsg077BusHiSpdVehSpdOverGndVldPassdThd_Val;
  u16p0 FordMsg077BusHiSpdVehYawRateCmpdVldFaildThd_Val;
  u16p0 FordMsg077BusHiSpdVehYawRateCmpdVldPassdThd_Val;
  u16p0 FordMsg077BusHiSpdYawRateCmpdInvldSigFaildThd_Val;
  u16p0 FordMsg077BusHiSpdYawRateCmpdInvldSigPassdThd_Val;
  u16p0 FordMsg077BusHiSpdYawRateCmpdVldMissThd_Val;
  uint16 FordMsg07DBusHiSpdActBrkTqSigInvldPassdThd_Val;
  uint16 FordMsg07DBusHiSpdFordVehActBrkTqInvldThd_Val;
  uint16 FordMsg07DBusHiSpdFordVehActBrkTqVldThd_Val;
  uint16 FordMsg07DBusHiSpdFordVehBrkTqVldMissMsgThd_Val;
  uint16 FordMsg07DBusHiSpdFordVehVertACmpdSigInvldThd_Val;
  uint16 FordMsg07DBusHiSpdFordVehVertACmpdSigVldThd_Val;
  uint16 FordMsg07DBusHiSpdFordVehVertAVldMissMsgThd_Val;
  uint16 FordMsg07DBusHiSpdMissMsgFaildThd_Val;
  uint16 FordMsg07DBusHiSpdMissMsgPassdThd_Val;
  uint16 FordMsg07DBusHiSpdVehActTqBrkInvldFaildThd_Val;
  uint16 FordMsg07DBusHiSpdVertACmpdSigInvldFaildThd_Val;
  uint16 FordMsg07DBusHiSpdVertACmpdSigInvldPassdThd_Val;
  uint16 FordMsg083BusHiSpdFordVehTurnSigVldThd_Val;
  uint16 FordMsg083BusHiSpdMissMsgFaildThd_Val;
  uint16 FordMsg083BusHiSpdMissMsgPassdThd_Val;
  uint16 FordMsg083BusHiSpdVehTurnSigVldMissMsgThd_Val;
  uint16 FordMsg091BusHiSpdInvldMsgFaildThd_Val;
  uint16 FordMsg091BusHiSpdInvldMsgPassdThd_Val;
  uint16 FordMsg091BusHiSpdMissMsgFaildThd_Val;
  uint16 FordMsg091BusHiSpdMissMsgPassdThd_Val;
  uint16 FordMsg091BusHiSpdYawRateRawVldMissFaildThd_Val;
  uint16 FordMsg091BusHiSpdYawRateRawVldSigFaildThd_Val;
  uint16 FordMsg091BusHiSpdYawRateRawVldSigPassdThd_Val;
  uint16 FordMsg167BusHiSpdMissMsgFaildTiThd_Val;
  uint16 FordMsg167BusHiSpdMissMsgPassdTiThd_Val;
  uint16 FordMsg167BusHiSpdPrpnWhlTqFaildTiThd_Val;
  uint16 FordMsg167BusHiSpdPrpnWhlTqMissTiThd_Val;
  uint16 FordMsg167BusHiSpdPrpnWhlTqPassdTiThd_Val;
  uint16 FordMsg167BusHiSpdPrpnWhlTqSigInvldFaildTiThd_Val;
  uint16 FordMsg167BusHiSpdPrpnWhlTqSigInvldPassdTiThd_Val;
  uint16 FordMsg202BusHiSpdEngModLoQlyVldFaildThd_Val;
  uint16 FordMsg202BusHiSpdEngModLoQlyVldMissThd_Val;
  uint16 FordMsg202BusHiSpdEngModLoQlyVldPassdThd_Val;
  uint16 FordMsg202BusHiSpdEngModlVldFaildThd_Val;
  uint16 FordMsg202BusHiSpdEngModlVldMissThd_Val;
  uint16 FordMsg202BusHiSpdGearRvsStsInvldFaildThd_Val;
  uint16 FordMsg202BusHiSpdGearRvsStsInvldPassdThd_Val;
  uint16 FordMsg202BusHiSpdGearRvsStsVldFaildThd_Val;
  uint16 FordMsg202BusHiSpdGearRvsStsVldMissThd_Val;
  uint16 FordMsg202BusHiSpdGearRvsStsVldPassdThd_Val;
  uint16 FordMsg202BusHiSpdMissMsgFaildAbsPrsntDisadThd_Val;
  uint16 FordMsg202BusHiSpdMissMsgFaildAbsPrsntEnadThd_Val;
  uint16 FordMsg202BusHiSpdMissMsgPassdThd_Val;
  uint16 FordMsg202BusHiSpdQlyFacEngModInvldFaildThd_Val;
  uint16 FordMsg202BusHiSpdQlyFacEngModInvldPassdThd_Val;
  uint16 FordMsg202BusHiSpdTrlrBackupAssiAvlVldMissThd_Val;
  uint16 FordMsg202BusHiSpdTrlrBackupAssiAvlVldPassdThd_Val;
  uint16 FordMsg213BusHiSpdAbsActvVldFaildThd_Val;
  uint16 FordMsg213BusHiSpdAbsActvVldPassdThd_Val;
  uint16 FordMsg213BusHiSpdEvasSteerAssiEnadThd_Val;
  uint16 FordMsg213BusHiSpdMissMsgFaildThd_Val;
  uint16 FordMsg213BusHiSpdMissMsgPassdThd_Val;
  uint16 FordMsg215BusHiSpdFordVehTrlrAidModReqVldNotRxdTiThd_Val;
  uint16 FordMsg215BusHiSpdFordVehTrlrAidModReqVldRxdTiThd_Val;
  uint16 FordMsg215BusHiSpdMissMsgFaildTiThd_Val;
  uint16 FordMsg215BusHiSpdMissMsgPassdTiThd_Val;
  uint16 FordMsg216BusHiSpdFrntLeWhlCntrDirFaildTiThd_Val;
  uint16 FordMsg216BusHiSpdFrntLeWhlCntrDirPassdTiThd_Val;
  uint16 FordMsg216BusHiSpdFrntLeWhlVldMissMsgThd_Val;
  uint16 FordMsg216BusHiSpdFrntRiWhlCntrDirFaildTiThd_Val;
  uint16 FordMsg216BusHiSpdFrntRiWhlCntrDirPassdTiThd_Val;
  uint16 FordMsg216BusHiSpdFrntRiWhlVldMissMsgThd_Val;
  uint16 FordMsg216BusHiSpdMissMsgFaildTiThd_Val;
  uint16 FordMsg216BusHiSpdMissMsgPassdTiThd_Val;
  uint16 FordMsg216BusHiSpdReLeWhlCntrDirFaildTiThd_Val;
  uint16 FordMsg216BusHiSpdReLeWhlCntrDirPassdTiThd_Val;
  uint16 FordMsg216BusHiSpdReLeWhlVldMissMsgThd_Val;
  uint16 FordMsg216BusHiSpdReRiWhlCntrDirFaildTiThd_Val;
  uint16 FordMsg216BusHiSpdReRiWhlCntrDirPassdTiThd_Val;
  uint16 FordMsg216BusHiSpdReRiWhlVldMissMsgThd_Val;
  u16p0 FordMsg217BusHiSpdFrntLeWhlSpdInvldFaildThd_Val;
  u16p0 FordMsg217BusHiSpdFrntLeWhlSpdInvldPassdThd_Val;
  u16p0 FordMsg217BusHiSpdFrntLeWhlVldFaildThd_Val;
  u16p0 FordMsg217BusHiSpdFrntLeWhlVldMissThd_Val;
  u16p0 FordMsg217BusHiSpdFrntLeWhlVldPassdThd_Val;
  u16p0 FordMsg217BusHiSpdFrntRiWhlSpdInvldFaildThd_Val;
  u16p0 FordMsg217BusHiSpdFrntRiWhlSpdInvldPassdThd_Val;
  u16p0 FordMsg217BusHiSpdFrntRiWhlVldFaildThd_Val;
  u16p0 FordMsg217BusHiSpdFrntRiWhlVldMissThd_Val;
  u16p0 FordMsg217BusHiSpdFrntRiWhlVldPassdThd_Val;
  u16p0 FordMsg217BusHiSpdMissMsgFaildThd_Val;
  u16p0 FordMsg217BusHiSpdMissMsgPassdThd_Val;
  u16p0 FordMsg217BusHiSpdReLeWhlSpdInvldFaildThd_Val;
  u16p0 FordMsg217BusHiSpdReLeWhlSpdInvldPassdThd_Val;
  u16p0 FordMsg217BusHiSpdReLeWhlVldFaildThd_Val;
  u16p0 FordMsg217BusHiSpdReLeWhlVldMissThd_Val;
  u16p0 FordMsg217BusHiSpdReLeWhlVldPassdThd_Val;
  u16p0 FordMsg217BusHiSpdReRiWhlSpdInvldFaildThd_Val;
  u16p0 FordMsg217BusHiSpdReRiWhlSpdInvldPassdThd_Val;
  u16p0 FordMsg217BusHiSpdReRiWhlVldFaildThd_Val;
  u16p0 FordMsg217BusHiSpdReRiWhlVldMissThd_Val;
  u16p0 FordMsg217BusHiSpdReRiWhlVldPassdThd_Val;
  uint16 FordMsg230BusHiSpdFordVehGearLvrPosnFaildTiThd_Val;
  uint16 FordMsg230BusHiSpdFordVehGearLvrPosnPassdTiThd_Val;
  uint16 FordMsg230BusHiSpdGearLvrPosnMissTiThd_Val;
  uint16 FordMsg230BusHiSpdInvldSigFaildThd_Val;
  uint16 FordMsg230BusHiSpdInvldSigPassdThd_Val;
  uint16 FordMsg230BusHiSpdMissMsgFaildThd_Val;
  uint16 FordMsg230BusHiSpdMissMsgPassdThd_Val;
  uint16 FordMsg2FDBusHiSpdFordVehEvasSteerAssiReqVldNotRxdTiThd_Val;
  uint16 FordMsg2FDBusHiSpdFordVehEvasSteerAssiReqVldRxdTiThd_Val;
  uint16 FordMsg2FDBusHiSpdMissMsgFaildTiThd_Val;
  uint16 FordMsg2FDBusHiSpdMissMsgPassdTiThd_Val;
  u16p0 FordMsg3B3BusHiSpdIgnStsVldFaildThd_Val;
  u16p0 FordMsg3B3BusHiSpdIgnStsVldMissThd_Val;
  u16p0 FordMsg3B3BusHiSpdIgnStsVldPassdThd_Val;
  u16p0 FordMsg3B3BusHiSpdInvldSigFaildThd_Val;
  u16p0 FordMsg3B3BusHiSpdInvldSigPassdThd_Val;
  u16p0 FordMsg3B3BusHiSpdMissMsgFaildThd_Val;
  u16p0 FordMsg3B3BusHiSpdMissMsgPassdThd_Val;
  uint16 FordMsg3CABusHiSpdLaneAssiImgProcgModlAFaildCrvtTiThd_Val;
  uint16 FordMsg3CABusHiSpdLaneAssiImgProcgModlAFaildReqdAgTiThd_Val;
  uint16 FordMsg3CABusHiSpdLaneAssiImgProcgModlAPassdTiThd_Val;
  uint16 FordMsg3CABusHiSpdLaneAssiImgProcgModlAVldMissTiThd_Val;
  uint16 FordMsg3CABusHiSpdLaneKeepSysCrvtInvldFaildTiThd_Val;
  uint16 FordMsg3CABusHiSpdLaneKeepSysCrvtInvldPassdTiThd_Val;
  uint16 FordMsg3CABusHiSpdLaneKeepSysReqdAgInvldFaildTiThd_Val;
  uint16 FordMsg3CABusHiSpdLaneKeepSysReqdAgInvldPassdTiThd_Val;
  uint16 FordMsg3CABusHiSpdMissMsgFaildTiThd_Val;
  uint16 FordMsg3CABusHiSpdMissMsgPassdTiThd_Val;
  uint16 FordMsg3D3BusHiSpdImgProcrModlAVldFaildThd_Val;
  uint16 FordMsg3D3BusHiSpdImgProcrModlAVldPassdThd_Val;
  uint16 FordMsg3D3BusHiSpdMissMsgFaildThd_Val;
  uint16 FordMsg3D3BusHiSpdMissMsgPassdThd_Val;
  uint16 FordMsg3D7BusHiSpdImgProcrModlAVldMissThd_Val;
  uint16 FordMsg3D7BusHiSpdImgProcrModlAVldPassdThd_Val;
  uint16 FordMsg3D7BusHiSpdLatDstInvldFaildThd_Val;
  uint16 FordMsg3D7BusHiSpdLatDstInvldPassdThd_Val;
  uint16 FordMsg3D7BusHiSpdLatDstRawVldFaildThd_Val;
  uint16 FordMsg3D7BusHiSpdLgtDstInvldFaildThd_Val;
  uint16 FordMsg3D7BusHiSpdLgtDstInvldPassdThd_Val;
  uint16 FordMsg3D7BusHiSpdLgtDstRawVldFaildThd_Val;
  uint16 FordMsg3D7BusHiSpdMissMsgFaildThd_Val;
  uint16 FordMsg3D7BusHiSpdMissMsgPassdThd_Val;
  uint16 FordMsg3D7BusHiSpdRelLatVelInvldFaildThd_Val;
  uint16 FordMsg3D7BusHiSpdRelLatVelInvldPassdThd_Val;
  uint16 FordMsg3D7BusHiSpdRelLatVelRawVldFaildThd_Val;
  uint16 FordMsg3D7BusHiSpdRelLgtVelInvldFaildThd_Val;
  uint16 FordMsg3D7BusHiSpdRelLgtVelInvldPassdThd_Val;
  uint16 FordMsg3D7BusHiSpdRelLgtVelRawVldFaildThd_Val;
  uint16 FordMsg3D7BusHiSpdTiToCllsnInvldFaildThd_Val;
  uint16 FordMsg3D7BusHiSpdTiToCllsnInvldPassdThd_Val;
  uint16 FordMsg3D7BusHiSpdTiToCllsnRawVldFaildThd_Val;
  u16p0 FordMsg40ABusHiSpdMissMsgFaildThd_Val;
  u16p0 FordMsg40ABusHiSpdMissMsgPassdThd_Val;
  uint16 FordMsg414BusHiSpdAgOffsVldFaildThd_Val;
  uint16 FordMsg414BusHiSpdAgOffsVldMissThd_Val;
  uint16 FordMsg414BusHiSpdAgOffsVldPassdThd_Val;
  uint16 FordMsg414BusHiSpdChksVldFaildThd_Val;
  uint16 FordMsg414BusHiSpdChksVldMissThd_Val;
  uint16 FordMsg414BusHiSpdCntrVldMissThd_Val;
  uint16 FordMsg415BusHiSpdBrkModlLoQlyVldFaildThd_Val;
  uint16 FordMsg415BusHiSpdBrkModlLoQlyVldMissThd_Val;
  uint16 FordMsg415BusHiSpdBrkModlLoQlyVldPassdThd_Val;
  uint16 FordMsg415BusHiSpdBrkModlVldFaildThd_Val;
  uint16 FordMsg415BusHiSpdBrkModlVldMissThd_Val;
  uint16 FordMsg415BusHiSpdBrkModlVldPassdThd_Val;
  uint16 FordMsg415BusHiSpdBrkSprtVldMissThd_Val;
  uint16 FordMsg415BusHiSpdBrkSprtVldPassdThd_Val;
  uint16 FordMsg415BusHiSpdChksBrkModlInvldFaildThd_Val;
  uint16 FordMsg415BusHiSpdChksBrkModlInvldPassdThd_Val;
  uint16 FordMsg415BusHiSpdCntrBrkModlInvldFaildThd_Val;
  uint16 FordMsg415BusHiSpdCntrBrkModlInvldPassdThd_Val;
  uint16 FordMsg415BusHiSpdMissMsgFaildThd_Val;
  uint16 FordMsg415BusHiSpdMissMsgPassdThd_Val;
  uint16 FordMsg415BusHiSpdQlyFacBrkModlInvldFaildThd_Val;
  uint16 FordMsg415BusHiSpdQlyFacBrkModlInvldSigPassdThd_Val;
  uint16 FordMsg41ABusHiSpdMissMsgFaildThd_Val;
  uint16 FordMsg41ABusHiSpdMissMsgPassdThd_Val;
  uint16 FordMsg41EBusHiSpdChassisVldMissFaildThd_Val;
  uint16 FordMsg41EBusHiSpdChassisVldSigFaildThd_Val;
  uint16 FordMsg41EBusHiSpdChassisVldSigPassdThd_Val;
  uint16 FordMsg41EBusHiSpdInvldMsgFaildThd_Val;
  uint16 FordMsg41EBusHiSpdInvldMsgPassdThd_Val;
  uint16 FordMsg41EBusHiSpdMissMsgFaildThd_Val;
  uint16 FordMsg41EBusHiSpdMissMsgPassdThd_Val;
  u16p0 FordMsg430BusHiSpdMissMsgFaildThd_Val;
  u16p0 FordMsg430BusHiSpdMissMsgPassdThd_Val;
  uint16 FordMsg443BusHiSpdMissMsgFaildThd_Val;
  uint16 FordMsg443BusHiSpdMissMsgPassdThd_Val;
  uint16 FordMsg459BusHiSpdDiagMsgMissTmrThd_Val;
  uint16 FordMsg459BusHiSpdHitchAgInvldFaildThd_Val;
  uint16 FordMsg459BusHiSpdHitchAgInvldPassdThd_Val;
  uint16 FordMsg459BusHiSpdHitchAgRateInvldFaildThd_Val;
  uint16 FordMsg459BusHiSpdHitchAgRateInvldPassdThd_Val;
  uint16 FordMsg459BusHiSpdPrsntFlgMsgMissTmrThd_Val;
  uint16 FordMsg459BusHiSpdRcvrDiagMsgMissTmrThd_Val;
  uint16 FordMsg459BusHiSpdRcvrPrsntFlgTmrThd_Val;
  uint16 FordMsg459BusHiSpdTrackStInvldFaildThd_Val;
  uint16 FordMsg459BusHiSpdTrackStInvldPassdThd_Val;
  uint16 FordMsg459BusHiSpdTrlrHitchAgVldInvldMsgThd_Val;
  uint16 FordMsg459BusHiSpdTrlrHitchAgVldMissMsgThd_Val;
  uint16 FordMsg459BusHiSpdTrlrHitchRateVldInvldMsgThd_Val;
  uint16 FordMsg459BusHiSpdTrlrHitchRateVldMissMsgThd_Val;
  uint16 FordMsg459BusHiSpdTrlrRcvrHitchAgVldThd_Val;
  uint16 FordMsg459BusHiSpdTrlrRcvrHitchRateVldThd_Val;
  uint16 FordMsg459BusHiSpdTrlrRcvrTarVldThd_Val;
  uint16 FordMsg459BusHiSpdTrlrRcvrTrackStVldThd_Val;
  uint16 FordMsg459BusHiSpdTrlrTarVldMissMsgThd_Val;
  uint16 FordMsg459BusHiSpdTrlrTrackStVldInvldMsgThd_Val;
  uint16 FordMsg459BusHiSpdTrlrTrackStVldMissMsgThd_Val;
  uint16 FordMsg47ABusHiSpdMissMsgFaildTiThd_Val;
  uint16 FordMsg47ABusHiSpdMissMsgPassdTiThd_Val;
  uint16 FordMsg47ABusHiSpdTrlrAidKnobBtnFaildTiThd_Val;
  uint16 FordMsg47ABusHiSpdTrlrAidKnobBtnInvldPassdTiThd_Val;
  uint16 FordMsg47ABusHiSpdTrlrAidKnobBtnMissTiThd_Val;
  uint16 FordMsg47ABusHiSpdTrlrAidKnobBtnPassdTiThd_Val;
  uint16 FordMsg47ABusHiSpdTrlrAidKnobPosFaildTiThd_Val;
  uint16 FordMsg47ABusHiSpdTrlrAidKnobPosInvldPassdTiThd_Val;
  uint16 FordMsg47ABusHiSpdTrlrAidKnobPosMissTiThd_Val;
  uint16 FordMsg47ABusHiSpdTrlrAidKnobPosPassdTiThd_Val;
  uint16 GateDrv0CtrlNtcNr0x050FailStep_Val;
  uint16 GateDrv0CtrlNtcNr0x050PassStep_Val;
  uint16 GateDrv0CtrlNtcNr0x051FailStep_Val;
  uint16 GateDrv0CtrlNtcNr0x051PassStep_Val;
  uint16 GateDrv0CtrlNtcNr0x055FailStep_Val;
  uint16 GateDrv0CtrlNtcNr0x055PassStep_Val;
  uint16 GateDrv0CtrlUnit0Cfg2WrVal_Val;
  uint16 GateDrv0CtrlUnit0Cfg3WrVal_Val;
  uint16 GateDrv0CtrlUnit0Cfg4WrVal_Val;
  uint16 GateDrv0CtrlUnit0Cfg7WrVal_Val;
  uint16 HwAgSysArbnHwAgConfTiThd_Val;
  uint16 HwAgSysArbnHwAgCorrlnFailDebStep_Val;
  uint16 HwAgSysArbnHwAgCorrlnPassDebStep_Val;
  uint16 HwTqCorrlnNtcFailStep_Val;
  uint16 HwTqCorrlnNtcPassStep_Val;
  uint16 PwrLimrLoVoltAssiRcvrTi_Val;
  uint16 PwrSplyNtc0x07BFailStep_Val;
  uint16 PwrSplyNtc0x07BPassStep_Val;
  uint16 PwrSplyNtc0x07CFailStep_Val;
  uint16 PwrSplyNtc0x07CPassStep_Val;
  uint16 PwrSplyNtc0x07DFailStep_Val;
  uint16 PwrSplyNtc0x07DPassStep_Val;
  u16p0 SysPrfmncStsDutyCycLvlFltThd_Val;
  uint8 CurrMeasEolTranCntrThd_Val;
  uint8 CurrMeasArbnMaxStallCntr_Val;
  uint8 CmnMfgSrvSecuAcsMaxNrAtmpt_Val;
  uint8 CurrMeasCorrlnMaxStallCntr_Val;
  uint8 HwAgSnsrlsMotAgIdptSigThd_Val;
  uint8 HwAgSysArbnHwAgIdptSigLim_Val;
  uint8 HwTqArbnHwTqMaxStallCnt_Val;
  uint8 ImcArbnFrmFltThd_Val;
  uint8 LoaMgrCurrMeasIdptSig0Resp_Val;
  uint8 LoaMgrCurrMeasIdptSig1Resp_Val;
  uint8 LoaMgrCurrMeasIdptSig2Resp_Val;
  uint8 LoaMgrCurrMeasIdptSigFltThd_Val;
  uint8 LoaMgrHwTqIdptSig0NoTqLoaResp_Val;
  uint8 LoaMgrHwTqIdptSig1NoTqLoaResp_Val;
  uint8 LoaMgrHwTqIdptSig2Resp_Val;
  uint8 LoaMgrHwTqIdptSig3Resp_Val;
  uint8 LoaMgrHwTqIdptSig4Resp_Val;
  uint8 LoaMgrHwTqIdptSigFltThd_Val;
  uint8 LoaMgrHwTqLoaAvlResp_Val;
  uint8 LoaMgrIvtrIdptSig0Resp_Val;
  uint8 LoaMgrIvtrIdptSig1Resp_Val;
  uint8 LoaMgrIvtrIdptSig2Resp_Val;
  uint8 LoaMgrIvtrIdptSigFltThd_Val;
  uint8 LoaMgrMotAgAvlSnsrlsResp_Val;
  uint8 LoaMgrMotAgIdptSig0NoSnsrlsResp_Val;
  uint8 LoaMgrMotAgIdptSig1NoSnsrlsResp_Val;
  uint8 LoaMgrMotAgIdptSig2Resp_Val;
  uint8 LoaMgrMotAgIdptSig3Resp_Val;
  uint8 LoaMgrMotAgIdptSigFltThd_Val;
  uint8 MotRefMdlMinCurrItrnLim_Val;
  uint8 MotRefMdlRefLocnItrnLim_Val;
  uint8 MotRefMdlTqItrnLim_Val;
  uint8 NxtrCalIdsCal0DevlpRelSt_Val;
  uint8 NxtrCalIdsCal0DevlpVers_Val;
  uint8 NxtrCalIdsCal2DevlpRelSt_Val;
  uint8 NxtrCalIdsCal2DevlpVers_Val;
  boolean AssiSumLimCmdSumFilActv_Logl;
  boolean MotCurrRegCfgCurrLoopSecOrderTrfFctEna_Logl;
  boolean MotCurrRegVltgLimrMotCurrPredEna_Logl;
  boolean MotCurrRegVltgLimrMotCurrQaxRefMdfnRplEna_Logl;
  boolean MotCurrRegVltgLimrMotVltgBrdgFilEna_Logl;
  boolean MotCurrRegVltgLimrMotVltgQaxFfFilEna_Logl;
  boolean MotCurrRegVltgLimrQaxAntiWdupScagDi_Logl;
  boolean MotRefMdlFbCtrlDi_Logl;
  boolean SinVltgGennDthrEna_Logl;
  boolean DutyCycThermProtnCtrlTSeln_Logl;
  boolean DutyCycThermProtnIgnOffCtrlEna_Logl;
  boolean DutyCycThermProtnMotPrTSeln_Logl;
  boolean DutyCycThermProtnMplrTSeln_Logl;
  boolean DutyCycThermProtnSlowFilTSeln_Logl;
  boolean LoaMgrCurrIvtrMtgtnScaZeroEna_Logl;
  boolean LoaMgrCurrMeasMtgtnScaZeroEna_Logl;
  boolean LoaMgrIvtrMtgtnScaZeroEna_Logl;
  boolean LoaMgrMotAgMtgtnScaZeroEna_Logl;
  boolean MotRefMdlVltgModDynCmpEna_Logl;
  boolean PwrLimrSpdAdjSlewEna_Logl;
  boolean TEstimnIgnOffCtrlEna_Logl;
  Ary1D_u08_48 NxtrCalIdsCal0DevlpDesc_Ary1D;
  Ary1D_u16_512 DiagcMgrFltResp_Ary1D;
  Ary2D_f32_5_5 DrvrTqEstimnMtrxA_Ary2D;
  Ary2D_f32_5_4 DrvrTqEstimnMtrxB_Ary2D;
  Ary1D_f32_5 DrvrTqEstimnMtrxC_Ary1D;
  Ary1D_f32_4 DrvrTqEstimnMtrxD_Ary1D;
  Ary1D_s15p0_4 DutyCycThermProtnAbsltCtrlTFetMtgtnTblX_Ary1D;
  Ary1D_s15p0_4 DutyCycThermProtnAbsltCtrlTTblX_Ary1D;
  Ary1D_u9p7_4 DutyCycThermProtnAbsltCtrlTTqFetMtgtnTblY_Ary1D;
  Ary1D_u9p7_4 DutyCycThermProtnAbsltCtrlTTqTblY_Ary1D;
  Ary1D_s15p0_4 DutyCycThermProtnAbsltCuTFetMtgtnTblX_Ary1D;
  Ary1D_s15p0_4 DutyCycThermProtnAbsltCuTTblX_Ary1D;
  Ary1D_u9p7_4 DutyCycThermProtnAbsltCuTTqFetMtgtnTblY_Ary1D;
  Ary1D_u9p7_4 DutyCycThermProtnAbsltCuTTqTblY_Ary1D;
  Ary2D_u9p7_2_5 DutyCycThermProtnLstTblValNonStall_Ary2D;
  Ary2D_u9p7_2_5 DutyCycThermProtnLstTblValStall_Ary2D;
  Ary1D_u3p13_5 DutyCycThermProtnMplr1FetMtgtnNonStallTblY_Ary1D;
  Ary1D_u3p13_5 DutyCycThermProtnMplr1FetMtgtnStallTblY_Ary1D;
  Ary1D_u3p13_5 DutyCycThermProtnMplr1NonStallTblY_Ary1D;
  Ary1D_u3p13_5 DutyCycThermProtnMplr1StallTblY_Ary1D;
  Ary1D_u3p13_5 DutyCycThermProtnMplr2FetMtgtnNonStallTblY_Ary1D;
  Ary1D_u3p13_5 DutyCycThermProtnMplr2FetMtgtnStallTblY_Ary1D;
  Ary1D_u3p13_5 DutyCycThermProtnMplr2NonStallTblY_Ary1D;
  Ary1D_u3p13_5 DutyCycThermProtnMplr2StallTblY_Ary1D;
  Ary1D_u3p13_5 DutyCycThermProtnMplr3FetMtgtnNonStallTblY_Ary1D;
  Ary1D_u3p13_5 DutyCycThermProtnMplr3FetMtgtnStallTblY_Ary1D;
  Ary1D_u3p13_5 DutyCycThermProtnMplr3NonStallTblY_Ary1D;
  Ary1D_u3p13_5 DutyCycThermProtnMplr3StallTblY_Ary1D;
  Ary1D_u3p13_5 DutyCycThermProtnMplr4FetMtgtnNonStallTblY_Ary1D;
  Ary1D_u3p13_5 DutyCycThermProtnMplr4FetMtgtnStallTblY_Ary1D;
  Ary1D_u3p13_5 DutyCycThermProtnMplr4NonStallTblY_Ary1D;
  Ary1D_u3p13_5 DutyCycThermProtnMplr4StallTblY_Ary1D;
  Ary1D_u3p13_5 DutyCycThermProtnMplr5FetMtgtnNonStallTblY_Ary1D;
  Ary1D_u3p13_5 DutyCycThermProtnMplr5FetMtgtnStallTblY_Ary1D;
  Ary1D_u3p13_5 DutyCycThermProtnMplr5NonStallTblY_Ary1D;
  Ary1D_u3p13_5 DutyCycThermProtnMplr5StallTblY_Ary1D;
  Ary1D_u3p13_5 DutyCycThermProtnMplr6FetMtgtnNonStallTblY_Ary1D;
  Ary1D_u3p13_5 DutyCycThermProtnMplr6FetMtgtnStallTblY_Ary1D;
  Ary1D_u3p13_5 DutyCycThermProtnMplr6NonStallTblY_Ary1D;
  Ary1D_u3p13_5 DutyCycThermProtnMplr6StallTblY_Ary1D;
  Ary1D_s15p0_5 DutyCycThermProtnMplrFetMtgtnTblX_Ary1D;
  Ary1D_s15p0_5 DutyCycThermProtnMplrTblX_Ary1D;
  Ary2D_u16p0_2_8 DutyCycThermProtnThermLoadLimTblX_Ary2D;
  Ary2D_u9p7_2_8 DutyCycThermProtnThermLoadLimTblY_Ary2D;
  Ary1D_u4p12_6 PwrLimrStdOperMotEnvlpY_Ary1D;
  Ary1D_u9p7_16 MotCtrlPrmEstimnMotBackEmfConSatnX_Ary1D;
  Ary1D_u2p14_16 MotCtrlPrmEstimnMotBackEmfConSatnY_Ary1D;
  Ary1D_u9p7_6 MotCtrlPrmEstimnMotCurrDaxInduSatnBilnrSeln_Ary1D;
  Ary1D_u9p7_7 MotCtrlPrmEstimnMotCurrQaxInduSatnX_Ary1D;
  Ary2D_u2p14_6_7 MotCtrlPrmEstimnMotInduDaxSatnScaY_Ary2D;
  Ary2D_u2p14_6_7 MotCtrlPrmEstimnMotInduQaxSatnScaY_Ary2D;
  Ary1D_u10p6_4 MotCurrRegCfgMotClsdLoopBwDaxY_Ary1D;
  Ary1D_u10p6_4 MotCurrRegCfgMotClsdLoopBwQaxY_Ary1D;
  Ary1D_u11p5_4 MotCurrRegCfgMotCtrlPrmSelnX_Ary1D;
  Ary1D_u9p7_4 MotCurrRegCfgMotNatFrqDaxY_Ary1D;
  Ary1D_u9p7_4 MotCurrRegCfgMotNatFrqQaxY_Ary1D;
  Ary1D_u4p12_11 MotRefMdlCurrDaxBoostTqScaX_Ary1D;
  Ary1D_u1p15_11 MotRefMdlCurrDaxBoostTqScaY_Ary1D;
  Ary1D_f32_8 MotRefMdlCurrDaxQaxRefDelta_Ary1D;
  Ary1D_u11p5_10 MotRefMdlQuad13VltgSdlX_Ary1D;
  Ary1D_u3p13_10 MotRefMdlQuad13VltgSdlY_Ary1D;
  Ary1D_u11p5_10 MotRefMdlQuad24VltgSdlX_Ary1D;
  Ary1D_u3p13_10 MotRefMdlQuad24VltgSdlY_Ary1D;
  Ary1D_u2p14_4 MotTqTranlDampgVehSpdBlndY_Ary1D;
  Ary1D_u08_6 NxtrCalIdsCal0DevlpAuthor_Ary1D;
  Ary1D_u08_6 NxtrCalIdsCal2DevlpAuthor_Ary1D;
  Ary1D_u08_48 NxtrCalIdsCal2DevlpDesc_Ary1D;
  Ary1D_s11p4_14 PwrLimrMotEnvlpX_Ary1D;
  Ary1D_u5p11_14 PwrLimrMotEnvlpY_Ary1D;
  Ary1D_u11p5_6 PwrLimrStdOperMotEnvlpX_Ary1D;
  Ary1D_u5p11_10 PwrLimrVltgDptMotVelOffsX_Ary1D;
  Ary1D_u11p5_10 PwrLimrVltgDptMotVelOffsY_Ary1D;
  Ary1D_u4p12_8 TqLoaTqCmdLimY_Ary1D;
  Ary1D_u2p14_4 TqLoaVehLatADifScaFacX_Ary1D;
  Ary2D_u1p15_8_4 TqLoaVehLatADifScaFacY_Ary2D;
  Ary1D_u4p12_8 TqLoaVehLatAGainY_Ary1D;
  Ary1D_u10p6_5 TqLoaVehSpdScaFacX_Ary1D;
  Ary1D_u1p15_5 TqLoaVehSpdScaFacY_Ary1D;
  Ary1D_u10p6_8 TqLoaVehSpdX_Ary1D;
  Ary1D_u9p7_5 VehSpdLimrMaxAssiX_Ary1D;
  Ary1D_u5p11_5 VehSpdLimrMaxAssiY_Ary1D;
} Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type;

# define Rte_CalprmElementGroup_CalRegn01CmnGroupA_DEFAULT_RTE_CALPRM_GROUP (23)
typedef struct
{
  float32 DampgQuadHwTqBacklsh_Val;
  float32 DampgQuadMotVelBacklsh_Val;
  float32 ElecPwrCnsPrstcPwrLoss_Val;
  boolean TunSelnAuthyTunSelnRtDiCmd_Logl;
  Ary1D_u4p12_6 TunSelnAuthyHwTqY_Ary1D;
  Ary1D_u6p10_6 TunSelnAuthyHwVelY_Ary1D;
} Rte_Calprm_CalRegn01CmnGroupA_DEFAULT_RTE_CALPRM_GROUP_Type;

# define Rte_CalprmElementGroup_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP (24)
typedef struct
{
  float32 AssiSumLimMotVelLpFilFrq_Val;
  float32 SysGlbPrmSysTqRat_Val;
  float32 DualCtrlrOutpMgrConOutpSca_Val;
  float32 DualCtrlrOutpMgrEnaRate_Val;
  float32 DualCtrlrOutpMgrLimdOutpSca_Val;
  float32 DualCtrlrOutpMgrMaxOutpSca_Val;
  float32 HwAgSnsrlsVehDynVehSpdThd_Val;
  float32 HwAgSnsrlsVehDynYawRateThd_Val;
  float32 HwAgSnsrlsYawRateFilFrq_Val;
  float32 HwAgSysArbnTqSnsrVelFilFrq_Val;
  float32 SysGlbPrmTorsBarStfn_Val;
  float32 ImcSigArbnArbnFltTmr_Val;
  float32 ImcSigArbnHwAgArbnLpFil_Val;
  float32 ImcSigArbnHwAgArbnOffsLim_Val;
  float32 ImcSigArbnHwAgTarArbnLpFil_Val;
  float32 ImcSigArbnHwAgTarArbnOffsLim_Val;
  float32 ImcSigArbnHwTqArbnLpFil_Val;
  float32 ImcSigArbnHwTqArbnOffsLim_Val;
  float32 ImcSigArbnMotVelArbnLpFil_Val;
  float32 ImcSigArbnMotVelArbnOffsLim_Val;
  float32 ImcSigArbnPosnServoArbnOffsLim_Val;
  float32 ImcSigArbnPosnServoIntgtrStArbnLpFil_Val;
  float32 ImcSigArbnPosnTrakg1ArbnOffsLim_Val;
  float32 ImcSigArbnPosnTrakg2ArbnOffsLim_Val;
  float32 ImcSigArbnPullCmpLongTermIntgtrStArbnLpFil_Val;
  float32 ImcSigArbnPullCmpShoTermIntgtrStArbnLpFil_Val;
  float32 ImcSigArbnSysStTmr_Val;
  float32 ImcSigArbnTrakgIntgtrSt1ArbnLpFil_Val;
  float32 ImcSigArbnTrakgIntgtrSt2ArbnLpFil_Val;
  float32 ImcSigArbnVehSpdArbnLpFil_Val;
  float32 ImcSigArbnVehSpdArbnOffsLim_Val;
  float32 LimrCdngGainDecSlew_Val;
  float32 LimrCdngTqDecSlew_Val;
  float32 MotTqCmdScaMax_Val;
  float32 MotTqCmdScaMin_Val;
  float32 MotTqTranlDampgCmdLim_Val;
  float32 MotTqTranlDampgDampgCoeff_Val;
  float32 MotTqTranlDampgTmrPt1_Val;
  float32 MotTqTranlDampgTmrPt2_Val;
  float32 MotTqTranlDampgVelThd_Val;
  float32 PwrDiscnctBattVltgExtdNormThd_Val;
  float32 PwrDiscnctBattVltgNonExtdThd_Val;
  float32 PwrDiscnctChrgMinDeltaExtOper_Val;
  float32 PwrDiscnctChrgMinDeltaNonOper_Val;
  float32 PwrDiscnctChrgMinDeltaNormOper_Val;
  float32 PwrDiscnctChrgPmpDiagOpenThd_Val;
  float32 PwrDiscnctDeltaSwtClsThd_Val;
  float32 PwrDiscnctDeltaVltgClsThd_Val;
  float32 PwrDiscnctDeltaVltgOpenThd_Val;
  float32 PwrDiscnctMtrMtnThd_Val;
  float32 PwrDiscnctSwtDiagOpenThd_Val;
  float32 SysFricLrngAvrgFricFrq_Val;
  float32 SysFricLrngBasLineEolFric_Val;
  float32 SysFricLrngDataPrepLpFilFrq_Val;
  float32 SysFricLrngEolFricDifHiLim_Val;
  float32 SysFricLrngEolFricDifLoLim_Val;
  float32 SysFricLrngEolFricDifScagFac_Val;
  float32 SysFricLrngFricDiagcThd_Val;
  float32 SysFricLrngFricOffs_Val;
  float32 SysFricLrngFricOffsHiLim_Val;
  float32 SysFricLrngFricOffsLoLim_Val;
  float32 SysFricLrngFricOffsLpFilFrq_Val;
  float32 SysFricLrngGain_Val;
  float32 SysFricLrngHiFricDiagcThd_Val;
  float32 SysFricLrngHwPosnAuthyThd_Val;
  float32 SysFricLrngHwVelConstrLim_Val;
  float32 SysFricLrngHwVelHiLim_Val;
  float32 SysFricLrngHwVelLoLim_Val;
  float32 SysFricLrngIgnCycFricChgLim_Val;
  float32 SysFricLrngIgnCycFricOffs_Val;
  float32 SysFricLrngLatAHiLim_Val;
  float32 SysFricLrngLatALoLim_Val;
  float32 SysFricLrngTHiLim_Val;
  float32 SysFricLrngTLoLim_Val;
  float32 TEstimnAssiMechAmbLpFilFrq_Val;
  float32 TEstimnAssiMechAmbLpFilFrqDualEcuFltMtgtn_Val;
  float32 TEstimnAssiMechAmbLpFilFrqFetMtgtnEna_Val;
  float32 TEstimnCuAmbLpFilFrq_Val;
  float32 TEstimnCuAmbLpFilFrqDualEcuFltMtgtn_Val;
  float32 TEstimnCuAmbLpFilFrqFetMtgtnEna_Val;
  float32 TEstimnMagAmbLpFilFrq_Val;
  float32 TEstimnMagAmbLpFilFrqDualEcuFltMtgtn_Val;
  float32 TEstimnMagAmbLpFilFrqFetMtgtnEna_Val;
  float32 TEstimnSiAmbLpFilFrq_Val;
  float32 TEstimnSiAmbLpFilFrqDualEcuFltMtgtn_Val;
  float32 TEstimnSiAmbLpFilFrqFetMtgtnEna_Val;
  float32 VehSigCdngLatASlewRate_Val;
  float32 VehSigCdngLtgASlewRate_Val;
  uint32 SysFricLrngThd_Val;
  uint16 HwTq1MeasHwTq1PrtclFltFailStep_Val;
  uint16 HwTq1MeasHwTq1PrtclFltPassStep_Val;
  uint16 HwTq8MeasHwTq8PrtclFltFailStep_Val;
  uint16 HwTq8MeasHwTq8PrtclFltPassStep_Val;
  uint16 McuDiagc2MilliSecCntrCompThd_Val;
  uint16 McuDiagcFltFailStep_Val;
  uint16 McuDiagcFltPassStep_Val;
  uint16 DualCtrlrOutpMgrFltThdTmr_Val;
  uint16 DualCtrlrOutpMgrMaxOutpTmr_Val;
  uint16 DualCtrlrOutpMgrMinOutpTmr_Val;
  uint16 DualCtrlrOutpMgrNonRecFltThdTmr_Val;
  uint16 DualCtrlrOutpMgrThdTmr_Val;
  uint16 DualCtrlrOutpMgrVltgModFltThdTmr_Val;
  uint16 HwAg1MeasHwAg1IfFltFailStep_Val;
  uint16 HwAg1MeasHwAg1IfFltPassStep_Val;
  uint16 HwAg1MeasHwAg1Snsr0PrtclFltFailStep_Val;
  uint16 HwAg1MeasHwAg1Snsr0PrtclFltPassStep_Val;
  uint16 HwAg1MeasHwAg1Snsr1PrtclFltFailStep_Val;
  uint16 HwAg1MeasHwAg1Snsr1PrtclFltPassStep_Val;
  u2p14 MotTqTranlDampgRampEnd_Val;
  uint16 PwrDiscnctFltFailStep_Val;
  uint16 PwrDiscnctFltPassStep_Val;
  uint16 PwrDiscnctFltThd_Val;
  uint16 PwrDiscnctPwrDiscnctRtFltFailStep_Val;
  uint16 PwrDiscnctPwrDiscnctRtFltPassStep_Val;
  uint16 SysFricLrngDebStep_Val;
  uint16 SysFricLrngHiFricDebStep_Val;
  uint16 SysFricLrngRngCntrThd_Val;
  uint8 SysGlbPrmMotPoleCnt_Val;
  uint8 HwAg1MeasVrnrErrThd_Val;
  boolean HwAgSnsrlsFeatEna_Logl;
  boolean HwAgSysArbn2PinionPosSnsrAvl_Logl;
  boolean ImcSigArbnHwAgArbnEna_Logl;
  boolean ImcSigArbnHwAgTarArbnEna_Logl;
  boolean ImcSigArbnHwTqArbnEna_Logl;
  boolean ImcSigArbnMotVelArbnEna_Logl;
  boolean ImcSigArbnPosnServoIntgtrStArbnEna_Logl;
  boolean ImcSigArbnPullCmpLongTermIntgtrStArbnEna_Logl;
  boolean ImcSigArbnPullCmpShoTermIntgtrStArbnEna_Logl;
  boolean ImcSigArbnTrakgIntgtrSt1ArbnEna_Logl;
  boolean ImcSigArbnTrakgIntgtrSt2ArbnEna_Logl;
  boolean ImcSigArbnVehSpdArbnEna_Logl;
  Ary1D_u9p7_12 SysGlbPrmVehSpdBilnrSeln_Ary1D;
  Ary1D_u10p6_2 AssiSumLimBlndCmdSumFrqLimX_Ary1D;
  Ary1D_u10p6_2 AssiSumLimBlndCmdSumFrqLimY_Ary1D;
  Ary1D_u11p5_8 AssiSumLimHiSpdCmdSumFrqLimX_Ary1D;
  Ary1D_u10p6_8 AssiSumLimHiSpdCmdSumFrqLimY_Ary1D;
  Ary1D_u11p5_8 AssiSumLimLoSpdCmdSumFrqLimX_Ary1D;
  Ary1D_u10p6_8 AssiSumLimLoSpdCmdSumFrqLimY_Ary1D;
  Ary1D_u1p15_6 CmplncErrHwAgNonLinCmplncDepTblY_Ary1D;
  Ary1D_u5p11_6 CmplncErrHwAgNonLinCmplncIndTblX_Ary1D;
  Ary1D_u8p8_6 CmplncErrMotAgNonLinCmplncDepTblY_Ary1D;
  Ary1D_u5p11_6 CmplncErrMotAgNonLinCmplncIndTblX_Ary1D;
  Ary1D_u10p6_10 DualCtrlrOutpMgrDiRateTblY_Ary1D;
  Ary1D_u9p7_10 DualCtrlrOutpMgrVehSpdRefTblX_Ary1D;
  Ary1D_u08_22 HwAg1MeasSnsr0Rev_Ary1D;
  Ary1D_u08_22 HwAg1MeasSnsr1Rev_Ary1D;
  Ary1D_s16_22 HwAg1MeasStep_Ary1D;
  Ary1D_u9p7_2 LimrCdngGainIncSlewX_Ary1D;
  Ary1D_u9p7_2 LimrCdngGainIncSlewY_Ary1D;
  Ary1D_u9p7_2 LimrCdngTqIncSlewX_Ary1D;
  Ary1D_u13p3_2 LimrCdngTqIncSlewY_Ary1D;
  Ary1D_u9p7_4 MotTqTranlDampgVehSpdBlndX_Ary1D;
  Ary1D_f32_4 SysFricLrngBasLineFric_Ary1D;
  Ary2D_f32_8_4 SysFricLrngBasLineHys_Ary2D;
  Ary2D_u16_8_3 SysFricLrngBasLineRngCntr_Ary2D;
  Ary1D_f32_4 SysFricLrngFricChgWght_Ary1D;
  Ary1D_f32_4 SysFricLrngFricHysHwAgPt_Ary1D;
  Ary1D_u11p5_10 SysFricLrngIvsTrsmRatX_Ary1D;
  Ary1D_u6p10_10 SysFricLrngIvsTrsmRatY_Ary1D;
  Ary1D_logl_4 SysFricLrngMaskVehSpd_Ary1D;
  Ary2D_f32_4_2 SysFricLrngVehSpd_Ary2D;
  Ary1D_f32_3 TEstimnAmbPwrMplr_Ary1D;
  Ary1D_f32_3 TEstimnAmbTSca_Ary1D;
  Ary1D_f32_3 TEstimnAssiMechAmbMplr_Ary1D;
  Ary1D_f32_3 TEstimnAssiMechCorrLim_Ary1D;
  Ary1D_f32_3 TEstimnAssiMechDampgSca_Ary1D;
  Ary1D_f32_3 TEstimnAssiMechDftT_Ary1D;
  Ary1D_f32_3 TEstimnAssiMechLLFilCoeffA1_Ary1D;
  Ary1D_f32_3 TEstimnAssiMechLLFilCoeffB0_Ary1D;
  Ary1D_f32_3 TEstimnAssiMechLLFilCoeffB1_Ary1D;
  Ary1D_f32_3 TEstimnAssiMechSlew_Ary1D;
  Ary1D_f32_3 TEstimnCorrnTAssiMech_Ary1D;
  Ary1D_f32_3 TEstimnCorrnTCu_Ary1D;
  Ary1D_f32_3 TEstimnCorrnTMag_Ary1D;
  Ary1D_f32_3 TEstimnCorrnTSi_Ary1D;
  Ary1D_f32_3 TEstimnCuAmbMplr_Ary1D;
  Ary1D_f32_3 TEstimnCuCorrnLim_Ary1D;
  Ary1D_f32_3 TEstimnCuLLFilCoeffA1_Ary1D;
  Ary1D_f32_3 TEstimnCuLLFilCoeffB0_Ary1D;
  Ary1D_f32_3 TEstimnCuLLFilCoeffB1_Ary1D;
  Ary1D_f32_3 TEstimnEngTSca_Ary1D;
  Ary1D_f32_3 TEstimnMagCorrnLim_Ary1D;
  Ary1D_f32_3 TEstimnMagLLFilCoeffA1_Ary1D;
  Ary1D_f32_3 TEstimnMagLLFilCoeffB0_Ary1D;
  Ary1D_f32_3 TEstimnMagLLFilCoeffB1_Ary1D;
  Ary1D_f32_3 TEstimnSiAmbMplr_Ary1D;
  Ary1D_f32_3 TEstimnSiCorrnLim_Ary1D;
  Ary1D_f32_3 TEstimnSiLLFilCoeffA1_Ary1D;
  Ary1D_f32_3 TEstimnSiLLFilCoeffB0_Ary1D;
  Ary1D_f32_3 TEstimnSiLLFilCoeffB1_Ary1D;
  Ary1D_f32_3 TEstimnTauAssiMech_Ary1D;
  Ary1D_f32_3 TEstimnTauCu_Ary1D;
  Ary1D_f32_3 TEstimnTauMag_Ary1D;
  Ary1D_f32_3 TEstimnTauSi_Ary1D;
  Ary1D_logl_3 TEstimnWghtAvrgTDi_Ary1D;
} Rte_Calprm_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP_Type;

# define Rte_CalprmElementGroup_CalRegn01Inin00GroupA_DEFAULT_RTE_CALPRM_GROUP (25)
typedef struct
{
  float32 AssiPahSumHysCmpLim_Val;
  float32 DampgHydBasCoeff1_Val;
  float32 DampgHydBasCoeff2_Val;
  float32 DampgHydBasCoeff3_Val;
  float32 DampgHydBasCoeff4_Val;
  float32 DampgHydOutpLim_Val;
  float32 DampgMotVelLpFilFrq_Val;
  float32 DampgQuad13Mplr_Val;
  float32 DampgQuad24Mplr_Val;
  float32 DampgQuadHwTqLpFilFrq_Val;
  float32 DampgQuadMotVelLpFilFrq_Val;
  float32 DampgQuadScaLpFilFrq_Val;
  float32 ImcSigArbnPullCmpLongTermArbnOffsLim_Val;
  float32 ImcSigArbnPullCmpShoTermArbnOffsLim_Val;
  Ary1D_s8p7_14 DampgTScaX_Ary1D;
  Ary1D_u4p12_14 DampgTScaY_Ary1D;
  Ary1D_u9p7_6 TunSelnAuthyVehSpdX_Ary1D;
} Rte_Calprm_CalRegn01Inin00GroupA_DEFAULT_RTE_CALPRM_GROUP_Type;

# define Rte_CalprmElementGroup_CalRegn01Inin00GroupB_DEFAULT_RTE_CALPRM_GROUP (26)
typedef struct
{
  float32 PosnTrakgServoArbnFltMtgtnLpFilCutOffFrq_Val;
  float32 PosnTrakgServoIntgtrAntiWdupGain_Val;
  float32 PosnTrakgServoIntgtrStCorrnGain_Val;
  float32 PosnTrakgServoLpFilCutOffFrq_Val;
  float32 PosnTrakgServoOutpAntiWdupGain_Val;
  Ary1D_u8p8_10 PosnTrakgServoEnaBlndFacTblX_Ary1D;
  Ary1D_u2p14_10 PosnTrakgServoEnaBlndFacTblY_Ary1D;
  Ary1D_u12p4_12 PosnTrakgServoFfGain_Ary1D;
  Ary1D_u8p8_12 PosnTrakgServoFfVelGain_Ary1D;
  Ary1D_u12p4_12 PosnTrakgServoGain1_Ary1D;
  Ary1D_u8p8_12 PosnTrakgServoGain2_Ary1D;
  Ary1D_s8p7_12 PosnTrakgServoGain3_Ary1D;
  Ary1D_s4p11_12 PosnTrakgServoGain4_Ary1D;
  Ary1D_u12p4_12 PosnTrakgServoGainArbnFltMtgtn_Ary1D;
  Ary1D_u11p5_12 PosnTrakgServoHwAgTarMgnLimTblY_Ary1D;
  Ary1D_u15p1_12 PosnTrakgServoHwAgTarRateLimTblY_Ary1D;
  Ary1D_u15p1_12 PosnTrakgServoHwVelTarRateLimTblY_Ary1D;
  Ary1D_u15p1_12 PosnTrakgServoIntglGain_Ary1D;
  Ary1D_u15p1_12 PosnTrakgServoIntglLim_Ary1D;
  Ary1D_u8p8_12 PosnTrakgServoOutpLim_Ary1D;
  Ary1D_u9p7_12 PosnTrakgServoVehSpdTbl_Ary1D;
} Rte_Calprm_CalRegn01Inin00GroupB_DEFAULT_RTE_CALPRM_GROUP_Type;

# define Rte_CalprmElementGroup_CalRegn01Inin00GroupD_DEFAULT_RTE_CALPRM_GROUP (27)
typedef struct
{
  float32 StabyCmpHwTqLpFilFrq_Val;
  Ary1D_u2p14_2 StabyCmpAssiScaBlndX_Ary1D;
  Ary1D_u2p14_2 StabyCmpAssiScaBlndY_Ary1D;
  Ary1D_u9p7_6 StabyCmpNotchFilBilnrBlndVehSpd_Ary1D;
  Ary2D_u2p14_6_5 StabyCmpNotchFilBlnd02Y_Ary2D;
  Ary2D_u2p14_6_5 StabyCmpNotchFilBlnd04Y_Ary2D;
  Ary2D_u8p8_6_5 StabyCmpNotchFilBlnd12TqX_Ary2D;
  Ary2D_u2p14_6_5 StabyCmpNotchFilBlnd12Y_Ary2D;
  Ary2D_u8p8_6_5 StabyCmpNotchFilBlnd34TqX_Ary2D;
  Ary2D_u2p14_6_5 StabyCmpNotchFilBlnd34Y_Ary2D;
  FilNotchGainRec1 StabyCmpNotchFil1Struct_Rec;
  FilNotchGainRec1 StabyCmpNotchFil2Struct_Rec;
  FilNotchGainRec1 StabyCmpNotchFil3Struct_Rec;
  FilNotchGainRec1 StabyCmpNotchFil4Struct_Rec;
} Rte_Calprm_CalRegn01Inin00GroupD_DEFAULT_RTE_CALPRM_GROUP_Type;

# define Rte_CalprmElementGroup_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP (28)
typedef struct
{
  float32 FordCmdArbnNormAssiTqThd_Val;
  float32 FordHwAgArbnPhyRackTrvlThd_Val;
  float32 FordHwTqCmdOvrlLimrDftSpdRate_Val;
  float32 FordHwTqCmdOvrlLimrDftSpdRcvrRate_Val;
  float32 FordMotTqCmdOvrlLimrDftSpdRate_Val;
  float32 FordMotTqCmdOvrlLimrDftSpdRcvrRate_Val;
  float32 FordMotTqCmdOvrlLimrHiFrqMonrActvNiblCtrlDcTqTrendThd_Val;
  float32 FordMotTqCmdOvrlLimrHiFrqMonrActvNiblCtrlLoFrqTiThd_Val;
  float32 FordMotTqCmdOvrlLimrHiFrqMonrActvNiblCtrlMaxMotTq_Val;
  float32 FordMotTqCmdOvrlLimrHiFrqMonrLaneDprtrWarnDcTqTrendThd_Val;
  float32 FordMotTqCmdOvrlLimrHiFrqMonrLaneDprtrWarnLoFrqTiThd_Val;
  float32 FordMotTqCmdOvrlLimrHiFrqMonrLaneDprtrWarnMaxMotTq_Val;
  float32 FordMotTqCmdOvrlLimrHiFrqMonrTqTrendAlpha_Val;
  float32 FordMotTqCmdOvrlLimrHiFrqMonrZeroBandTq_Val;
  float32 FordMotTqCmdOvrlLimrHwVelLoPassFrq_Val;
  float32 FordMotTqCmdOvrlLimrSteerReactnLimrCombdAmpOvrrun_Val;
  float32 FordMotTqCmdOvrlLimrSteerReactnLimrCombdAmpRcvry_Val;
  float32 FordMotTqCmdOvrlLimrSteerReactnLimrCombdFixdOvrrunRampRate_Val;
  float32 FordMotTqCmdOvrlLimrSteerReactnLimrCombdLimHys_Val;
  float32 FordMotTqCmdOvrlLimrSteerReactnLimrCombdRcvryIdealRampRate_Val;
  float32 FordMotTqCmdOvrlLimrSteerReactnLimrCombdRcvryRampRateStg1_Val;
  float32 FordMotTqCmdOvrlLimrSteerReactnLimrCombdRcvryRampRateStg2_Val;
  float32 FullAssiRampUpRate_Val;
  float32 InitLimpHomeRamp_Val;
  float32 InitLimpHomeScar_Val;
  float32 LimdAssiRamp_Val;
  float32 LimdAssiRampUpRate_Val;
  float32 LimdAssiRampUpRateFaild_Val;
  float32 LimdAssiScar_Val;
  float32 NormLimpHomeRamp_Val;
  float32 NormLimpHomeScar_Val;
  float32 ShtdwnRamp_Val;
  float32 FordVltgIfActvParkAssiAsscTqMin_Val;
  float32 FordVltgIfEPSBattVltgDifThd_Val;
  float32 FordVltgIfEpsBattCurrLim_Val;
  float32 FordVltgIfEpsCurrLim_Val;
  float32 FordVltgIfEvasSteerAssiTqMin_Val;
  float32 FordVltgIfHiVltgAssiRampDwnRate_Val;
  float32 FordVltgIfHiVltgAssiRampUpRate_Val;
  float32 FordVltgIfHiVltgNoAssiRampDwnRate_Val;
  float32 FordVltgIfHiVltgThdHi_Val;
  float32 FordVltgIfHiVltgThdLo_Val;
  float32 FordVltgIfLaneCentrAssiTqMin_Val;
  float32 FordVltgIfLaneDprtrWarnAsscTqMin_Val;
  float32 FordVltgIfLkaAsscTqMin_Val;
  float32 FordVltgIfLoVltgAssiRampDwnRate_Val;
  float32 FordVltgIfLoVltgAssiRampUpRate_Val;
  float32 FordVltgIfLoVltgAssiScar_Val;
  float32 FordVltgIfLoVltgNoAssiRampDwnRate_Val;
  float32 FordVltgIfLoVltgThdHi_Val;
  float32 FordVltgIfLoVltgThdLo_Val;
  float32 FordVltgIfLoVltgThdMid_Val;
  float32 FordVltgIfLoVltgTqScaDwnRate_Val;
  float32 FordVltgIfLoVltgTqScaUpRate_Val;
  float32 FordVltgIfLoVltgTqScagFac_Val;
  float32 FordVltgIfTrfcJamAsscTqMin_Val;
  float32 FordVltgIfTrlrBackupAssiTqMin_Val;
  float32 FordVltgIfVehBattCircR_Val;
  float32 LoaMgrCurrIvtrMtgtnRate_Val;
  float32 LoaMgrCurrIvtrMtgtnSca_Val;
  float32 LoaMgrCurrMeasMtgtnRate_Val;
  float32 LoaMgrCurrMeasMtgtnSca_Val;
  float32 LoaMgrIvtrMtgtnRate_Val;
  float32 LoaMgrIvtrMtgtnSca_Val;
  float32 LoaMgrLimdStRate_Val;
  float32 LoaMgrLimdStSca_Val;
  float32 LoaMgrMotAgMtgtnRate_Val;
  float32 LoaMgrMotAgMtgtnSca_Val;
  float32 MotRplCoggCfgMotAgTiDly_Val;
  uint32 FordVltgIfHiVltgNoAssiRcvrTiMax_Val;
  uint32 FordVltgIfHiVltgRcvrTiMax_Val;
  uint32 FordVltgIfLoVltgInhbTiMax_Val;
  uint32 FordVltgIfLoVltgRcvrTiMax_Val;
  uint32 FordVltgIfLoVltgThdMidToLoTiMax_Val;
  uint32 NxtrCalIdsCal1DevlpRelNr_Val;
  uint32 NxtrCalIdsCal1DevlpTiStamp_Val;
  u8p8 FordBlaBoxIfCmnVehSteerRat_Val;
  uint16 FordBlaBoxIfCmnVehWhlBas_Val;
  u16p0 FordCanDtcInhbFactryModThd_Val;
  u16p0 FordCanDtcInhbTransptModThd_Val;
  uint16 FordHwAgArbnMotVelVldFlgRcvrTiThd_Val;
  uint16 FordHwAgArbnNonAbsCentrNotDetdTiThd_Val;
  uint16 FordHwAgArbnRelPosnVldFlgRcvryTiThd_Val;
  u16p0 FordHwTqCdngAppldFinalMotTqVldTiThd_Val;
  u16p0 FordHwTqCdngInpTqRawVldTiThd_Val;
  uint16 FordVehSpdArbnTireCircumMax_Val;
  uint16 FordVehSpdArbnTireCircumMin_Val;
  uint16 FordVltgIfFeatThdStsTiThd_Val;
  uint16 FordVltgIfHiVltgInhbTiMax_Val;
  uint16 FordVltgIfInhbBattVltgDiagcTiThd_Val;
  uint16 FordVltgIfLoVltgNoAssiRcvrTiMax_Val;
  uint8 MotRplCoggCmdHrmncOrder1Elec_Val;
  uint8 MotRplCoggCmdHrmncOrder2Elec_Val;
  uint8 MotRplCoggCmdHrmncOrder3Elec_Val;
  uint8 NxtrCalIdsCal1DevlpRelSt_Val;
  uint8 NxtrCalIdsCal1DevlpVers_Val;
  boolean FordVehSpdArbnDrvnWhl_Logl;
  Ary1D_u08_48 NxtrCalIdsCal1DevlpDesc_Ary1D;
  Ary1D_logl_13 FordCmdArbnActvNiblCtrlDeactvn_Ary1D;
  Ary1D_logl_13 FordCmdArbnActvNiblCtrlDeniedActvnReq_Ary1D;
  Ary1D_logl_13 FordCmdArbnDrvrSteerDeniedActvnReq_Ary1D;
  Ary1D_logl_13 FordCmdArbnDrvrSteerRcmdnDeactvn_Ary1D;
  Ary1D_logl_13 FordCmdArbnEvasSteerAssiDeactvn_Ary1D;
  Ary1D_logl_13 FordCmdArbnEvasSteerDeniedActvnReq_Ary1D;
  Ary1D_logl_13 FordCmdArbnExtAgCtrlDeactvn_Ary1D;
  Ary1D_logl_13 FordCmdArbnExtAgDeniedActvnReq_Ary1D;
  Ary1D_logl_13 FordCmdArbnLaneDprtrWarnDeactvn_Ary1D;
  Ary1D_logl_13 FordCmdArbnLaneDprtrWarnDeniedActvnReq_Ary1D;
  Ary1D_logl_13 FordCmdArbnLaneKeepAssiDeactvn_Ary1D;
  Ary1D_logl_13 FordCmdArbnLaneKeepAssiDeniedActvnReq_Ary1D;
  Ary1D_logl_13 FordCmdArbnLatCtrlDeactvn_Ary1D;
  Ary1D_logl_13 FordCmdArbnLatCtrlDeniedActvnReq_Ary1D;
  Ary1D_logl_13 FordCmdArbnNonStMask_Ary1D;
  Ary1D_logl_13 FordCmdArbnPullDriftCmpDeactvn_Ary1D;
  Ary1D_logl_13 FordCmdArbnPullDriftCmpDeniedActvnReq_Ary1D;
  Ary1D_logl_13 FordCmdArbnPullDriftCmpLrngDeactvn_Ary1D;
  Ary1D_logl_13 FordCmdArbnPullDriftCmpLrngDeniedActvnReq_Ary1D;
  Ary1D_logl_13 FordCmdArbnSpare1Deactvn_Ary1D;
  Ary1D_logl_13 FordCmdArbnSpare1DeniedActvnReq_Ary1D;
  Ary1D_logl_13 FordCmdArbnSpare2Deactvn_Ary1D;
  Ary1D_logl_13 FordCmdArbnSpare2DeniedActvnReq_Ary1D;
  Ary1D_logl_13 FordCmdArbnSpare3Deactvn_Ary1D;
  Ary1D_logl_13 FordCmdArbnSpare3DeniedActvnReq_Ary1D;
  Ary1D_logl_13 FordCmdArbnSteerDstbcDeactvn_Ary1D;
  Ary1D_logl_13 FordCmdArbnSteerDstbcDeniedActvnReq_Ary1D;
  Ary1D_u13p3_8 FordHwTqCmdOvrlLimrCombdBwY_Ary1D;
  Ary1D_u13p3_8 FordHwTqCmdOvrlLimrCombdTqRateY_Ary1D;
  Ary1D_u13p3_8 FordHwTqCmdOvrlLimrCombdTqSatnY_Ary1D;
  Ary1D_u16_8 FordHwTqCmdOvrlLimrCombdVehSpdBreakPtX_Ary1D;
  Ary1D_u13p3_8 FordHwTqCmdOvrlLimrLkaBwY_Ary1D;
  Ary1D_u13p3_8 FordHwTqCmdOvrlLimrLkaTqRateY_Ary1D;
  Ary1D_u13p3_8 FordHwTqCmdOvrlLimrLkaTqSatnY_Ary1D;
  Ary1D_u16_8 FordHwTqCmdOvrlLimrVehSpdBreakPtX_Ary1D;
  Ary1D_s5p10_8 FordMotTqCmdOvrlLimrLatCtrlBwY_Val;
  Ary1D_s16_8 FordMotTqCmdOvrlLimrLatCtrlTqRateY_Ary1D;
  Ary1D_s16_8 FordMotTqCmdOvrlLimrLatCtrlTqSatnY_Ary1D;
  Ary1D_u9p7_8 FordMotTqCmdOvrlLimrLatCtrlVehSpdBreakPtX_Ary1D;
  Ary1D_s16_8 FordMotTqCmdOvrlLimrPullDriftCmpTqRateY_Ary1D;
  Ary1D_s16_8 FordMotTqCmdOvrlLimrPullDriftCmpTqSatnY_Ary1D;
  Ary1D_u16_8 FordMotTqCmdOvrlLimrPullDriftCmpVehSpdBreakPtX_Ary1D;
  Ary1D_u16_8 FordMotTqCmdOvrlLimrSteerReactnLimrCombAmpVehSpdLimX_Ary1D;
  Ary1D_u16_8 FordMotTqCmdOvrlLimrSteerReactnLimrCombAmpVehSpdLimY_Ary1D;
  Ary1D_u16_6 FordMotTqCmdOvrlLimrSteerReactnLimrCombOvrrunRampRateHwVelErrX_Ary1D;
  Ary1D_u16_6 FordMotTqCmdOvrlLimrSteerReactnLimrCombOvrrunRampRateOutY_Ary1D;
  Ary2D_s16_8_9 FordMotTqCmdOvrlLimrSteerReactnLimrCombdLimTqX_Ary2D;
  Ary2D_s16_8_9 FordMotTqCmdOvrlLimrSteerReactnLimrCombdLimrHwVelY_Ary2D;
  Ary1D_u16_8 FordMotTqCmdOvrlLimrSteerReactnLimrCombdLimrVehSpd_Ary1D;
  Ary1D_u9p7_10 MotRplCoggCfgMotCurrDaxRplBilnrSeln_Ary1D;
  Ary1D_u9p7_12 MotRplCoggCfgMotCurrQaxRpl_Ary1D;
  Ary2D_u3p13_20_8 MotRplCoggCfgMotTqCmdCurrRgltrBwCmpMgnY_Ary2D;
  Ary2D_u0p16_20_8 MotRplCoggCfgMotTqCmdCurrRgltrBwCmpPhaY_Ary2D;
  Ary1D_u5p11_8 MotRplCoggCfgMotTqCmdCurrRgltrBwCmpX_Ary1D;
  Ary2D_s1p14_10_12 MotRplCoggCfgMotTqRplOrder1X_Ary2D;
  Ary2D_s1p14_10_12 MotRplCoggCfgMotTqRplOrder1Y_Ary2D;
  Ary2D_s1p14_10_12 MotRplCoggCfgMotTqRplOrder2X_Ary2D;
  Ary2D_s1p14_10_12 MotRplCoggCfgMotTqRplOrder2Y_Ary2D;
  Ary2D_s1p14_10_12 MotRplCoggCfgMotTqRplOrder3X_Ary2D;
  Ary2D_s1p14_10_12 MotRplCoggCfgMotTqRplOrder3Y_Ary2D;
  Ary1D_u16p0_20 MotRplCoggCfgMotVelBilnrSeln_Ary1D;
  Ary1D_u08_6 NxtrCalIdsCal1DevlpAuthor_Ary1D;
} Rte_Calprm_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP_Type;

# define Rte_CalprmElementGroup_CalRegn02CmnGroupB_DEFAULT_RTE_CALPRM_GROUP (29)
typedef struct
{
  float32 EotProtnActvRegnBypMaxThd_Val;
  float32 EotProtnFwlInactvLim_Val;
  uint8 EotLrngHwAgOverTrvlCntThd_Val;
  Ary1D_s11p4_5 EotProtnFwlEotDampgActvBndX_Ary1D;
  Ary1D_u9p7_4 EotProtnFwlVehSpd_Ary1D;
} Rte_Calprm_CalRegn02CmnGroupB_DEFAULT_RTE_CALPRM_GROUP_Type;

# define Rte_CalprmElementGroup_CalRegn02Inin00_DEFAULT_RTE_CALPRM_GROUP (30)
typedef struct
{
  float32 SysGlbPrmSysKineRat_Val;
  float32 HiLoadStallLimrMotTqCmdFetMtgtnEnaFilFrq_Val;
  float32 HiLoadStallLimrMotTqCmdFilFrq_Val;
  float32 HiLoadStallLimrStallThermLimSca_Val;
  float32 VehSigCdngVehSpdSlewRate_Val;
  Ary1D_f32_2 HiLoadStallLimrMotVelMgnThd_Ary1D;
  Ary1D_u8p8_6 HiLoadStallLimrStallMotTqCmdFetMtgtnLimX_Ary1D;
  Ary1D_u8p8_6 HiLoadStallLimrStallMotTqCmdFetMtgtnLimY_Ary1D;
  Ary1D_u8p8_6 HiLoadStallLimrStallMotTqCmdLimX_Ary1D;
  Ary1D_u8p8_6 HiLoadStallLimrStallMotTqCmdLimY_Ary1D;
  Ary1D_f32_2 HiLoadStallLimrStallMotTqLimSlewRate_Ary1D;
} Rte_Calprm_CalRegn02Inin00_DEFAULT_RTE_CALPRM_GROUP_Type;

# define Rte_CalprmElementGroup_CalRegn02Inin00GroupA_DEFAULT_RTE_CALPRM_GROUP (31)
typedef struct
{
  float32 AssiHiFrqHpFilFrq_Val;
  float32 HysCmpAssiCmdLpFilFrq_Val;
  float32 HysCmpFinalOutpLpFilFrq_Val;
  float32 HysCmpHwTqLpFilFrq_Val;
  float32 InertiaCmpVelDampgDecelGain_Val;
  float32 InertiaCmpVelDampgDecelGainFallSlew_Val;
  float32 InertiaCmpVelDampgGainOffThd_Val;
  float32 InertiaCmpVelDampgGainOnThd_Val;
  float32 InertiaCmpVelMotInertia_Val;
  float32 InertiaCmpVelTqSnsrVelFilFrq_Val;
  u9p7 HysCmpAssiInpLim_Val;
  boolean InertiaCmpVelDecelGainEnaCal_Logl;
  Ary1D_u4p12_12 DampgHydAssiLim_Ary1D;
  Ary1D_s14p1_8 HysCmpFricTScaX_Ary1D;
  Ary1D_u9p7_8 HysCmpFricTScaY_Ary1D;
  Ary1D_u4p12_10 InertiaCmpVelAssiBasdDampgCoeffX_Ary1D;
  Ary1D_u0p16_10 InertiaCmpVelAssiBasdDampgRollgWhlImbRejctnOnY_Ary1D;
  Ary1D_u0p16_10 InertiaCmpVelAssiBasdDampgRollgY_Ary1D;
  Ary1D_u0p16_10 InertiaCmpVelAssiBasdDampgStatWhlImbRejctnOnY_Ary1D;
  Ary1D_u2p14_12 InertiaCmpVelCmdScaY_Ary1D;
  Ary1D_u11p5_6 InertiaCmpVelDampgDecelGainRisngSlewX_Ary1D;
  Ary1D_u13p3_6 InertiaCmpVelDampgDecelGainRisngSlewY_Ary1D;
  Ary1D_u4p12_2 InertiaCmpVelModWhlImbRejctnBlndX_Ary1D;
  Ary1D_u1p15_2 InertiaCmpVelModWhlImbRejctnBlndY_Ary1D;
  Ary1D_u12p4_2 InertiaCmpVelMotVelBasdOutpScagX_Ary1D;
  Ary1D_u1p15_2 InertiaCmpVelMotVelBasdOutpScagY_Ary1D;
  Ary1D_u1p15_12 InertiaCmpVelNotchBlndY_Ary1D;
  Ary1D_u2p14_12 InertiaCmpVelTqSnsrVelSca_Ary1D;
  FilNotchGainRec1 InertiaCmpVelNotchFilStruct_Rec;
} Rte_Calprm_CalRegn02Inin00GroupA_DEFAULT_RTE_CALPRM_GROUP_Type;

# define Rte_CalprmElementGroup_CalRegn02Inin00GroupB_DEFAULT_RTE_CALPRM_GROUP (32)
typedef struct
{
  float32 EotLrngAuthyStrtLrn_Val;
  float32 EotLrngEntrAndExitHysRngLimr_Val;
  float32 EotLrngHwTqEotLrn_Val;
  float32 EotLrngMotVelEotLrn_Val;
  float32 EotLrngRackTrvlMax_Val;
  float32 EotLrngRackTrvlMin_Val;
  float32 EotLrngRstAuthyMin_Val;
  float32 EotProtnRackTrvlLimrRngLimd_Val;
  float32 EotProtnDampgSlew_Val;
  float32 EotProtnDftPosn_Val;
  float32 EotProtnEntrGainAuthyThd_Val;
  float32 EotProtnEntrStLpFilFrq_Val;
  float32 EotProtnExitStLpFilFrq_Val;
  float32 EotProtnHwAgGain_Val;
  float32 EotProtnHwAgMax_Val;
  float32 EotProtnHwAgMin_Val;
  float32 EotProtnHwTqLpFilFrq_Val;
  float32 EotProtnMotSpdIncptSca_Val;
  float32 EotProtnMotVelGain_Val;
  float32 EotProtnPosnRampStep_Val;
  float32 EotProtnRackTrvlLimrAuthyThd_Val;
  float32 EotProtnRackTrvlLimrAuthyThdLimd_Val;
  float32 EotProtnRackTrvlLimrRng_Val;
  float32 EotProtnRackTrvlLimrVehSpdThd_Val;
  float32 EotProtnSoftEndStopVehSpdThd_Val;
  float32 RtnHwAuthySlew_Val;
  float32 RtnOffsRng_Val;
  float32 RtnOffsSlew_Val;
  uint16 EotLrngEotLrnTmr_Val;
  boolean EotProtnRackTrvlLimrEna_Logl;
  boolean EotProtnRunEotVelImpctAndSoftEndStop_Logl;
  boolean EotProtnSoftEndStopEna_Logl;
  Ary2D_u12p4_5_4 EotProtnEntrGainX_Ary2D;
  Ary2D_u0p16_4_2 EotProtnExitDampgY_Ary2D;
  Ary2D_u12p4_4_2 EotProtnHwDegDampgX_Ary2D;
  Ary1D_u4p12_2 EotProtnHwTqScaX_Ary1D;
  Ary1D_u12p4_2 EotProtnMotSpdIncptX_Ary1D;
  Ary1D_s4p11_4 EotProtnFwlActvCmdLowrBnd_Ary1D;
  Ary1D_s4p11_4 EotProtnFwlActvCmdUpprBnd_Ary1D;
  Ary2D_s7p8_4_5 EotProtnFwlEotDampgActvBndY_Ary2D;
  Ary1D_u8p8_4 RtnHwAuthyScaX_Ary1D;
  Ary1D_u9p7_4 RtnHwAuthyScaY_Ary1D;
  Ary1D_s11p4_14 RtnTScaX_Ary1D;
  Ary1D_u8p8_14 RtnTScaY_Ary1D;
  Ary1D_s11p4_11 RtnPahFwlUpprBndTblX_Ary1D;
  Ary2D_s4p11_8_11 RtnPahFwlUpprBndTblY_Ary2D;
  Ary1D_u9p7_8 RtnPahFwlVehSpd_Ary1D;
} Rte_Calprm_CalRegn02Inin00GroupB_DEFAULT_RTE_CALPRM_GROUP_Type;

# define Rte_CalprmElementGroup_CalRegn02Rt00GroupA_DEFAULT_RTE_CALPRM_GROUP (33)
typedef struct
{
  float32 HysCmpOutpLim_Val;
  float32 HysCmpRevGain_Val;
  Ary2D_u3p13_12_13 AssiHiFrqGainY_Ary2D;
  Ary1D_u7p9_12 AssiHiFrqHpFilFrqY_Ary1D;
  Ary2D_u5p11_12_13 AssiHiFrqTqWhlImbRejctnTqX_Ary2D;
  Ary2D_u5p11_12_13 AssiHiFrqTqX_Ary2D;
  Ary2D_u4p12_12_5 AssiHiFrqWhlImbRejctnBlndX_Ary2D;
  Ary2D_u1p15_12_5 AssiHiFrqWhlImbRejctnBlndY_Ary2D;
  Ary2D_u3p13_12_13 AssiHiFrqWhlImbRejctnGainY_Ary2D;
  Ary2D_u8p8_12_20 AssiMotTqWhlImbRejctnMaxX_Ary2D;
  Ary2D_s4p11_12_20 AssiMotTqWhlImbRejctnMaxY_Ary2D;
  Ary2D_u8p8_12_20 AssiMotTqWhlImbRejctnMinX_Ary2D;
  Ary2D_s4p11_12_20 AssiMotTqWhlImbRejctnMinY_Ary2D;
  Ary2D_u5p11_12_5 AssiWhlImbRejctnBlndScaX_Ary2D;
  Ary2D_u2p14_12_5 AssiWhlImbRejctnBlndScaY_Ary2D;
  Ary1D_u8p8_2 DampgHwTqX_Ary1D;
  Ary1D_u1p15_2 DampgHwTqY_Ary1D;
  Ary1D_u4p12_12 DampgHydCoeff1ScaY_Ary1D;
  Ary1D_u4p12_12 DampgHydCoeff2ScaY_Ary1D;
  Ary1D_u4p12_12 DampgHydCoeff3ScaY_Ary1D;
  Ary1D_u4p12_12 DampgHydCoeff4ScaY_Ary1D;
  Ary2D_u12p4_12_13 DampgMotVelX_Ary2D;
  Ary2D_u5p11_12_13 DampgMotVelY_Ary2D;
  Ary1D_u4p12_12 HysCmpEffLossY_Ary1D;
  Ary1D_u9p7_12 HysCmpEffOffsY_Ary1D;
  Ary1D_u8p8_6 HysCmpFricWhlImbRejctnBlndX_Ary1D;
  Ary1D_u2p14_6 HysCmpFricWhlImbRejctnBlndY_Ary1D;
  Ary1D_u9p7_12 HysCmpFricWhlImbRejctnOffY_Ary1D;
  Ary1D_u9p7_12 HysCmpFricWhlImbRejctnOnY_Ary1D;
  Ary2D_u4p12_12_8 HysCmpHwTqScaX_Ary2D;
  Ary2D_u4p12_12_8 HysCmpHwTqScaY_Ary2D;
  Ary1D_u9p7_12 HysCmpHysSatnY_Ary1D;
  Ary1D_u9p7_5 HysCmpNegHysCmpScaX_Ary1D;
  Ary1D_u2p14_5 HysCmpNegHysCmpScaY_Ary1D;
  Ary1D_u8p8_8 HysCmpNegHysCmpX_Ary1D;
  Ary1D_u9p7_8 HysCmpNegHysCmpY_Ary1D;
  Ary1D_u2p14_6 HysCmpRiseX_Ary1D;
  Ary1D_u2p14_6 HysCmpRiseY_Ary1D;
  Ary1D_u0p16_10 InertiaCmpVelAssiBasdDampgStatY_Ary1D;
  Ary1D_u7p9_12 InertiaCmpVelDampgFilFrq_Ary1D;
  Ary1D_u7p9_12 InertiaCmpVelDampgFilFrqWhlImbRejctnOn_Ary1D;
  Ary1D_u1p15_12 InertiaCmpVelDampgSpdBlndY_Ary1D;
  Ary1D_u4p12_5 InertiaCmpVelDampgWhlImbRejctnBlndX_Ary1D;
  Ary1D_u1p15_5 InertiaCmpVelDampgWhlImbRejctnBlndY_Ary1D;
} Rte_Calprm_CalRegn02Rt00GroupA_DEFAULT_RTE_CALPRM_GROUP_Type;

# define Rte_CalprmElementGroup_CalRegn02Rt00GroupB_DEFAULT_RTE_CALPRM_GROUP (34)
typedef struct
{
  float32 EotProtnDeltaTqThd_Val;
  float32 EotProtnSoftEndStopAuthyThd_Val;
  Ary1D_u9p7_4 EotProtnDampgVehSpdTbl_Ary1D;
  Ary1D_u9p7_5 EotProtnEntrGainVehSpdTbl_Ary1D;
  Ary2D_u1p15_5_4 EotProtnEntrGainY_Ary2D;
  Ary2D_u1p15_5_4 EotProtnLoAuthyEntrGainY_Ary2D;
  Ary1D_u12p4_2 EotProtnMotSpdIncptY_Ary1D;
  Ary2D_u0p16_4_2 EotProtnNormDampgY_Ary2D;
  Ary2D_u12p4_9_16 RtnHwAgOffsCalcdX_Ary2D;
  Ary2D_u5p11_9_16 RtnHwAgOffsCalcdY_Ary2D;
  Ary2D_u8p8_9_8 RtnScaTqX_Ary2D;
  Ary2D_u8p8_9_8 RtnScaTqY_Ary2D;
  Ary2D_u7p9_9_4 RtnScaVelX_Ary2D;
  Ary2D_u8p8_9_4 RtnScaVelY_Ary2D;
  Ary1D_u9p7_9 RtnVehSpdSeln_Ary1D;
} Rte_Calprm_CalRegn02Rt00GroupB_DEFAULT_RTE_CALPRM_GROUP_Type;

# define Rte_CalprmElementGroup_CalRegn02Rt01GroupA_DEFAULT_RTE_CALPRM_GROUP (35)
typedef struct
{
  float32 HysCmpOutpLim_Val;
  float32 HysCmpRevGain_Val;
  Ary2D_u3p13_12_13 AssiHiFrqGainY_Ary2D;
  Ary1D_u7p9_12 AssiHiFrqHpFilFrqY_Ary1D;
  Ary2D_u5p11_12_13 AssiHiFrqTqWhlImbRejctnTqX_Ary2D;
  Ary2D_u5p11_12_13 AssiHiFrqTqX_Ary2D;
  Ary2D_u4p12_12_5 AssiHiFrqWhlImbRejctnBlndX_Ary2D;
  Ary2D_u1p15_12_5 AssiHiFrqWhlImbRejctnBlndY_Ary2D;
  Ary2D_u3p13_12_13 AssiHiFrqWhlImbRejctnGainY_Ary2D;
  Ary2D_u8p8_12_20 AssiMotTqWhlImbRejctnMaxX_Ary2D;
  Ary2D_s4p11_12_20 AssiMotTqWhlImbRejctnMaxY_Ary2D;
  Ary2D_u8p8_12_20 AssiMotTqWhlImbRejctnMinX_Ary2D;
  Ary2D_s4p11_12_20 AssiMotTqWhlImbRejctnMinY_Ary2D;
  Ary2D_u5p11_12_5 AssiWhlImbRejctnBlndScaX_Ary2D;
  Ary2D_u2p14_12_5 AssiWhlImbRejctnBlndScaY_Ary2D;
  Ary1D_u8p8_2 DampgHwTqX_Ary1D;
  Ary1D_u1p15_2 DampgHwTqY_Ary1D;
  Ary1D_u4p12_12 DampgHydCoeff1ScaY_Ary1D;
  Ary1D_u4p12_12 DampgHydCoeff2ScaY_Ary1D;
  Ary1D_u4p12_12 DampgHydCoeff3ScaY_Ary1D;
  Ary1D_u4p12_12 DampgHydCoeff4ScaY_Ary1D;
  Ary2D_u12p4_12_13 DampgMotVelX_Ary2D;
  Ary2D_u5p11_12_13 DampgMotVelY_Ary2D;
  Ary1D_u4p12_12 HysCmpEffLossY_Ary1D;
  Ary1D_u9p7_12 HysCmpEffOffsY_Ary1D;
  Ary1D_u8p8_6 HysCmpFricWhlImbRejctnBlndX_Ary1D;
  Ary1D_u2p14_6 HysCmpFricWhlImbRejctnBlndY_Ary1D;
  Ary1D_u9p7_12 HysCmpFricWhlImbRejctnOffY_Ary1D;
  Ary1D_u9p7_12 HysCmpFricWhlImbRejctnOnY_Ary1D;
  Ary2D_u4p12_12_8 HysCmpHwTqScaX_Ary2D;
  Ary2D_u4p12_12_8 HysCmpHwTqScaY_Ary2D;
  Ary1D_u9p7_12 HysCmpHysSatnY_Ary1D;
  Ary1D_u9p7_5 HysCmpNegHysCmpScaX_Ary1D;
  Ary1D_u2p14_5 HysCmpNegHysCmpScaY_Ary1D;
  Ary1D_u8p8_8 HysCmpNegHysCmpX_Ary1D;
  Ary1D_u9p7_8 HysCmpNegHysCmpY_Ary1D;
  Ary1D_u2p14_6 HysCmpRiseX_Ary1D;
  Ary1D_u2p14_6 HysCmpRiseY_Ary1D;
  Ary1D_u0p16_10 InertiaCmpVelAssiBasdDampgStatY_Ary1D;
  Ary1D_u7p9_12 InertiaCmpVelDampgFilFrq_Ary1D;
  Ary1D_u7p9_12 InertiaCmpVelDampgFilFrqWhlImbRejctnOn_Ary1D;
  Ary1D_u1p15_12 InertiaCmpVelDampgSpdBlndY_Ary1D;
  Ary1D_u4p12_5 InertiaCmpVelDampgWhlImbRejctnBlndX_Ary1D;
  Ary1D_u1p15_5 InertiaCmpVelDampgWhlImbRejctnBlndY_Ary1D;
} Rte_Calprm_CalRegn02Rt01GroupA_DEFAULT_RTE_CALPRM_GROUP_Type;

# define Rte_CalprmElementGroup_CalRegn02Rt01GroupB_DEFAULT_RTE_CALPRM_GROUP (36)
typedef struct
{
  float32 EotProtnDeltaTqThd_Val;
  float32 EotProtnSoftEndStopAuthyThd_Val;
  Ary1D_u9p7_4 EotProtnDampgVehSpdTbl_Ary1D;
  Ary1D_u9p7_5 EotProtnEntrGainVehSpdTbl_Ary1D;
  Ary2D_u1p15_5_4 EotProtnEntrGainY_Ary2D;
  Ary2D_u1p15_5_4 EotProtnLoAuthyEntrGainY_Ary2D;
  Ary1D_u12p4_2 EotProtnMotSpdIncptY_Ary1D;
  Ary2D_u0p16_4_2 EotProtnNormDampgY_Ary2D;
  Ary2D_u12p4_9_16 RtnHwAgOffsCalcdX_Ary2D;
  Ary2D_u5p11_9_16 RtnHwAgOffsCalcdY_Ary2D;
  Ary2D_u8p8_9_8 RtnScaTqX_Ary2D;
  Ary2D_u8p8_9_8 RtnScaTqY_Ary2D;
  Ary2D_u7p9_9_4 RtnScaVelX_Ary2D;
  Ary2D_u8p8_9_4 RtnScaVelY_Ary2D;
  Ary1D_u9p7_9 RtnVehSpdSeln_Ary1D;
} Rte_Calprm_CalRegn02Rt01GroupB_DEFAULT_RTE_CALPRM_GROUP_Type;

# define Rte_CalprmElementGroup_CalRegn02Rt02GroupA_DEFAULT_RTE_CALPRM_GROUP (37)
typedef struct
{
  float32 HysCmpOutpLim_Val;
  float32 HysCmpRevGain_Val;
  Ary2D_u3p13_12_13 AssiHiFrqGainY_Ary2D;
  Ary1D_u7p9_12 AssiHiFrqHpFilFrqY_Ary1D;
  Ary2D_u5p11_12_13 AssiHiFrqTqWhlImbRejctnTqX_Ary2D;
  Ary2D_u5p11_12_13 AssiHiFrqTqX_Ary2D;
  Ary2D_u4p12_12_5 AssiHiFrqWhlImbRejctnBlndX_Ary2D;
  Ary2D_u1p15_12_5 AssiHiFrqWhlImbRejctnBlndY_Ary2D;
  Ary2D_u3p13_12_13 AssiHiFrqWhlImbRejctnGainY_Ary2D;
  Ary2D_u8p8_12_20 AssiMotTqWhlImbRejctnMaxX_Ary2D;
  Ary2D_s4p11_12_20 AssiMotTqWhlImbRejctnMaxY_Ary2D;
  Ary2D_u8p8_12_20 AssiMotTqWhlImbRejctnMinX_Ary2D;
  Ary2D_s4p11_12_20 AssiMotTqWhlImbRejctnMinY_Ary2D;
  Ary2D_u5p11_12_5 AssiWhlImbRejctnBlndScaX_Ary2D;
  Ary2D_u2p14_12_5 AssiWhlImbRejctnBlndScaY_Ary2D;
  Ary1D_u8p8_2 DampgHwTqX_Ary1D;
  Ary1D_u1p15_2 DampgHwTqY_Ary1D;
  Ary1D_u4p12_12 DampgHydCoeff1ScaY_Ary1D;
  Ary1D_u4p12_12 DampgHydCoeff2ScaY_Ary1D;
  Ary1D_u4p12_12 DampgHydCoeff3ScaY_Ary1D;
  Ary1D_u4p12_12 DampgHydCoeff4ScaY_Ary1D;
  Ary2D_u12p4_12_13 DampgMotVelX_Ary2D;
  Ary2D_u5p11_12_13 DampgMotVelY_Ary2D;
  Ary1D_u4p12_12 HysCmpEffLossY_Ary1D;
  Ary1D_u9p7_12 HysCmpEffOffsY_Ary1D;
  Ary1D_u8p8_6 HysCmpFricWhlImbRejctnBlndX_Ary1D;
  Ary1D_u2p14_6 HysCmpFricWhlImbRejctnBlndY_Ary1D;
  Ary1D_u9p7_12 HysCmpFricWhlImbRejctnOffY_Ary1D;
  Ary1D_u9p7_12 HysCmpFricWhlImbRejctnOnY_Ary1D;
  Ary2D_u4p12_12_8 HysCmpHwTqScaX_Ary2D;
  Ary2D_u4p12_12_8 HysCmpHwTqScaY_Ary2D;
  Ary1D_u9p7_12 HysCmpHysSatnY_Ary1D;
  Ary1D_u9p7_5 HysCmpNegHysCmpScaX_Ary1D;
  Ary1D_u2p14_5 HysCmpNegHysCmpScaY_Ary1D;
  Ary1D_u8p8_8 HysCmpNegHysCmpX_Ary1D;
  Ary1D_u9p7_8 HysCmpNegHysCmpY_Ary1D;
  Ary1D_u2p14_6 HysCmpRiseX_Ary1D;
  Ary1D_u2p14_6 HysCmpRiseY_Ary1D;
  Ary1D_u0p16_10 InertiaCmpVelAssiBasdDampgStatY_Ary1D;
  Ary1D_u7p9_12 InertiaCmpVelDampgFilFrq_Ary1D;
  Ary1D_u7p9_12 InertiaCmpVelDampgFilFrqWhlImbRejctnOn_Ary1D;
  Ary1D_u1p15_12 InertiaCmpVelDampgSpdBlndY_Ary1D;
  Ary1D_u4p12_5 InertiaCmpVelDampgWhlImbRejctnBlndX_Ary1D;
  Ary1D_u1p15_5 InertiaCmpVelDampgWhlImbRejctnBlndY_Ary1D;
} Rte_Calprm_CalRegn02Rt02GroupA_DEFAULT_RTE_CALPRM_GROUP_Type;

# define Rte_CalprmElementGroup_CalRegn02Rt02GroupB_DEFAULT_RTE_CALPRM_GROUP (38)
typedef struct
{
  float32 EotProtnDeltaTqThd_Val;
  float32 EotProtnSoftEndStopAuthyThd_Val;
  Ary1D_u9p7_4 EotProtnDampgVehSpdTbl_Ary1D;
  Ary1D_u9p7_5 EotProtnEntrGainVehSpdTbl_Ary1D;
  Ary2D_u1p15_5_4 EotProtnEntrGainY_Ary2D;
  Ary2D_u1p15_5_4 EotProtnLoAuthyEntrGainY_Ary2D;
  Ary1D_u12p4_2 EotProtnMotSpdIncptY_Ary1D;
  Ary2D_u0p16_4_2 EotProtnNormDampgY_Ary2D;
  Ary2D_u12p4_9_16 RtnHwAgOffsCalcdX_Ary2D;
  Ary2D_u5p11_9_16 RtnHwAgOffsCalcdY_Ary2D;
  Ary2D_u8p8_9_8 RtnScaTqX_Ary2D;
  Ary2D_u8p8_9_8 RtnScaTqY_Ary2D;
  Ary2D_u7p9_9_4 RtnScaVelX_Ary2D;
  Ary2D_u8p8_9_4 RtnScaVelY_Ary2D;
  Ary1D_u9p7_9 RtnVehSpdSeln_Ary1D;
} Rte_Calprm_CalRegn02Rt02GroupB_DEFAULT_RTE_CALPRM_GROUP_Type;

# define Rte_CalprmElementGroup_CalRegn02Rt03GroupA_DEFAULT_RTE_CALPRM_GROUP (39)
typedef struct
{
  float32 HysCmpOutpLim_Val;
  float32 HysCmpRevGain_Val;
  Ary2D_u3p13_12_13 AssiHiFrqGainY_Ary2D;
  Ary1D_u7p9_12 AssiHiFrqHpFilFrqY_Ary1D;
  Ary2D_u5p11_12_13 AssiHiFrqTqWhlImbRejctnTqX_Ary2D;
  Ary2D_u5p11_12_13 AssiHiFrqTqX_Ary2D;
  Ary2D_u4p12_12_5 AssiHiFrqWhlImbRejctnBlndX_Ary2D;
  Ary2D_u1p15_12_5 AssiHiFrqWhlImbRejctnBlndY_Ary2D;
  Ary2D_u3p13_12_13 AssiHiFrqWhlImbRejctnGainY_Ary2D;
  Ary2D_u8p8_12_20 AssiMotTqWhlImbRejctnMaxX_Ary2D;
  Ary2D_s4p11_12_20 AssiMotTqWhlImbRejctnMaxY_Ary2D;
  Ary2D_u8p8_12_20 AssiMotTqWhlImbRejctnMinX_Ary2D;
  Ary2D_s4p11_12_20 AssiMotTqWhlImbRejctnMinY_Ary2D;
  Ary2D_u5p11_12_5 AssiWhlImbRejctnBlndScaX_Ary2D;
  Ary2D_u2p14_12_5 AssiWhlImbRejctnBlndScaY_Ary2D;
  Ary1D_u8p8_2 DampgHwTqX_Ary1D;
  Ary1D_u1p15_2 DampgHwTqY_Ary1D;
  Ary1D_u4p12_12 DampgHydCoeff1ScaY_Ary1D;
  Ary1D_u4p12_12 DampgHydCoeff2ScaY_Ary1D;
  Ary1D_u4p12_12 DampgHydCoeff3ScaY_Ary1D;
  Ary1D_u4p12_12 DampgHydCoeff4ScaY_Ary1D;
  Ary2D_u12p4_12_13 DampgMotVelX_Ary2D;
  Ary2D_u5p11_12_13 DampgMotVelY_Ary2D;
  Ary1D_u4p12_12 HysCmpEffLossY_Ary1D;
  Ary1D_u9p7_12 HysCmpEffOffsY_Ary1D;
  Ary1D_u8p8_6 HysCmpFricWhlImbRejctnBlndX_Ary1D;
  Ary1D_u2p14_6 HysCmpFricWhlImbRejctnBlndY_Ary1D;
  Ary1D_u9p7_12 HysCmpFricWhlImbRejctnOffY_Ary1D;
  Ary1D_u9p7_12 HysCmpFricWhlImbRejctnOnY_Ary1D;
  Ary2D_u4p12_12_8 HysCmpHwTqScaX_Ary2D;
  Ary2D_u4p12_12_8 HysCmpHwTqScaY_Ary2D;
  Ary1D_u9p7_12 HysCmpHysSatnY_Ary1D;
  Ary1D_u9p7_5 HysCmpNegHysCmpScaX_Ary1D;
  Ary1D_u2p14_5 HysCmpNegHysCmpScaY_Ary1D;
  Ary1D_u8p8_8 HysCmpNegHysCmpX_Ary1D;
  Ary1D_u9p7_8 HysCmpNegHysCmpY_Ary1D;
  Ary1D_u2p14_6 HysCmpRiseX_Ary1D;
  Ary1D_u2p14_6 HysCmpRiseY_Ary1D;
  Ary1D_u0p16_10 InertiaCmpVelAssiBasdDampgStatY_Ary1D;
  Ary1D_u7p9_12 InertiaCmpVelDampgFilFrq_Ary1D;
  Ary1D_u7p9_12 InertiaCmpVelDampgFilFrqWhlImbRejctnOn_Ary1D;
  Ary1D_u1p15_12 InertiaCmpVelDampgSpdBlndY_Ary1D;
  Ary1D_u4p12_5 InertiaCmpVelDampgWhlImbRejctnBlndX_Ary1D;
  Ary1D_u1p15_5 InertiaCmpVelDampgWhlImbRejctnBlndY_Ary1D;
} Rte_Calprm_CalRegn02Rt03GroupA_DEFAULT_RTE_CALPRM_GROUP_Type;

# define Rte_CalprmElementGroup_CalRegn02Rt03GroupB_DEFAULT_RTE_CALPRM_GROUP (40)
typedef struct
{
  float32 EotProtnDeltaTqThd_Val;
  float32 EotProtnSoftEndStopAuthyThd_Val;
  Ary1D_u9p7_4 EotProtnDampgVehSpdTbl_Ary1D;
  Ary1D_u9p7_5 EotProtnEntrGainVehSpdTbl_Ary1D;
  Ary2D_u1p15_5_4 EotProtnEntrGainY_Ary2D;
  Ary2D_u1p15_5_4 EotProtnLoAuthyEntrGainY_Ary2D;
  Ary1D_u12p4_2 EotProtnMotSpdIncptY_Ary1D;
  Ary2D_u0p16_4_2 EotProtnNormDampgY_Ary2D;
  Ary2D_u12p4_9_16 RtnHwAgOffsCalcdX_Ary2D;
  Ary2D_u5p11_9_16 RtnHwAgOffsCalcdY_Ary2D;
  Ary2D_u8p8_9_8 RtnScaTqX_Ary2D;
  Ary2D_u8p8_9_8 RtnScaTqY_Ary2D;
  Ary2D_u7p9_9_4 RtnScaVelX_Ary2D;
  Ary2D_u8p8_9_4 RtnScaVelY_Ary2D;
  Ary1D_u9p7_9 RtnVehSpdSeln_Ary1D;
} Rte_Calprm_CalRegn02Rt03GroupB_DEFAULT_RTE_CALPRM_GROUP_Type;

# define Rte_CalprmElementGroup_CalRegn02Rt04GroupA_DEFAULT_RTE_CALPRM_GROUP (41)
typedef struct
{
  float32 HysCmpOutpLim_Val;
  float32 HysCmpRevGain_Val;
  Ary2D_u3p13_12_13 AssiHiFrqGainY_Ary2D;
  Ary1D_u7p9_12 AssiHiFrqHpFilFrqY_Ary1D;
  Ary2D_u5p11_12_13 AssiHiFrqTqWhlImbRejctnTqX_Ary2D;
  Ary2D_u5p11_12_13 AssiHiFrqTqX_Ary2D;
  Ary2D_u4p12_12_5 AssiHiFrqWhlImbRejctnBlndX_Ary2D;
  Ary2D_u1p15_12_5 AssiHiFrqWhlImbRejctnBlndY_Ary2D;
  Ary2D_u3p13_12_13 AssiHiFrqWhlImbRejctnGainY_Ary2D;
  Ary2D_u8p8_12_20 AssiMotTqWhlImbRejctnMaxX_Ary2D;
  Ary2D_s4p11_12_20 AssiMotTqWhlImbRejctnMaxY_Ary2D;
  Ary2D_u8p8_12_20 AssiMotTqWhlImbRejctnMinX_Ary2D;
  Ary2D_s4p11_12_20 AssiMotTqWhlImbRejctnMinY_Ary2D;
  Ary2D_u5p11_12_5 AssiWhlImbRejctnBlndScaX_Ary2D;
  Ary2D_u2p14_12_5 AssiWhlImbRejctnBlndScaY_Ary2D;
  Ary1D_u8p8_2 DampgHwTqX_Ary1D;
  Ary1D_u1p15_2 DampgHwTqY_Ary1D;
  Ary1D_u4p12_12 DampgHydCoeff1ScaY_Ary1D;
  Ary1D_u4p12_12 DampgHydCoeff2ScaY_Ary1D;
  Ary1D_u4p12_12 DampgHydCoeff3ScaY_Ary1D;
  Ary1D_u4p12_12 DampgHydCoeff4ScaY_Ary1D;
  Ary2D_u12p4_12_13 DampgMotVelX_Ary2D;
  Ary2D_u5p11_12_13 DampgMotVelY_Ary2D;
  Ary1D_u4p12_12 HysCmpEffLossY_Ary1D;
  Ary1D_u9p7_12 HysCmpEffOffsY_Ary1D;
  Ary1D_u8p8_6 HysCmpFricWhlImbRejctnBlndX_Ary1D;
  Ary1D_u2p14_6 HysCmpFricWhlImbRejctnBlndY_Ary1D;
  Ary1D_u9p7_12 HysCmpFricWhlImbRejctnOffY_Ary1D;
  Ary1D_u9p7_12 HysCmpFricWhlImbRejctnOnY_Ary1D;
  Ary2D_u4p12_12_8 HysCmpHwTqScaX_Ary2D;
  Ary2D_u4p12_12_8 HysCmpHwTqScaY_Ary2D;
  Ary1D_u9p7_12 HysCmpHysSatnY_Ary1D;
  Ary1D_u9p7_5 HysCmpNegHysCmpScaX_Ary1D;
  Ary1D_u2p14_5 HysCmpNegHysCmpScaY_Ary1D;
  Ary1D_u8p8_8 HysCmpNegHysCmpX_Ary1D;
  Ary1D_u9p7_8 HysCmpNegHysCmpY_Ary1D;
  Ary1D_u2p14_6 HysCmpRiseX_Ary1D;
  Ary1D_u2p14_6 HysCmpRiseY_Ary1D;
  Ary1D_u0p16_10 InertiaCmpVelAssiBasdDampgStatY_Ary1D;
  Ary1D_u7p9_12 InertiaCmpVelDampgFilFrq_Ary1D;
  Ary1D_u7p9_12 InertiaCmpVelDampgFilFrqWhlImbRejctnOn_Ary1D;
  Ary1D_u1p15_12 InertiaCmpVelDampgSpdBlndY_Ary1D;
  Ary1D_u4p12_5 InertiaCmpVelDampgWhlImbRejctnBlndX_Ary1D;
  Ary1D_u1p15_5 InertiaCmpVelDampgWhlImbRejctnBlndY_Ary1D;
} Rte_Calprm_CalRegn02Rt04GroupA_DEFAULT_RTE_CALPRM_GROUP_Type;

# define Rte_CalprmElementGroup_CalRegn02Rt04GroupB_DEFAULT_RTE_CALPRM_GROUP (42)
typedef struct
{
  float32 EotProtnDeltaTqThd_Val;
  float32 EotProtnSoftEndStopAuthyThd_Val;
  Ary1D_u9p7_4 EotProtnDampgVehSpdTbl_Ary1D;
  Ary1D_u9p7_5 EotProtnEntrGainVehSpdTbl_Ary1D;
  Ary2D_u1p15_5_4 EotProtnEntrGainY_Ary2D;
  Ary2D_u1p15_5_4 EotProtnLoAuthyEntrGainY_Ary2D;
  Ary1D_u12p4_2 EotProtnMotSpdIncptY_Ary1D;
  Ary2D_u0p16_4_2 EotProtnNormDampgY_Ary2D;
  Ary2D_u12p4_9_16 RtnHwAgOffsCalcdX_Ary2D;
  Ary2D_u5p11_9_16 RtnHwAgOffsCalcdY_Ary2D;
  Ary2D_u8p8_9_8 RtnScaTqX_Ary2D;
  Ary2D_u8p8_9_8 RtnScaTqY_Ary2D;
  Ary2D_u7p9_9_4 RtnScaVelX_Ary2D;
  Ary2D_u8p8_9_4 RtnScaVelY_Ary2D;
  Ary1D_u9p7_9 RtnVehSpdSeln_Ary1D;
} Rte_Calprm_CalRegn02Rt04GroupB_DEFAULT_RTE_CALPRM_GROUP_Type;

# define Rte_CalprmElementGroup_CalRegn02Rt05GroupA_DEFAULT_RTE_CALPRM_GROUP (43)
typedef struct
{
  float32 HysCmpOutpLim_Val;
  float32 HysCmpRevGain_Val;
  Ary2D_u3p13_12_13 AssiHiFrqGainY_Ary2D;
  Ary1D_u7p9_12 AssiHiFrqHpFilFrqY_Ary1D;
  Ary2D_u5p11_12_13 AssiHiFrqTqWhlImbRejctnTqX_Ary2D;
  Ary2D_u5p11_12_13 AssiHiFrqTqX_Ary2D;
  Ary2D_u4p12_12_5 AssiHiFrqWhlImbRejctnBlndX_Ary2D;
  Ary2D_u1p15_12_5 AssiHiFrqWhlImbRejctnBlndY_Ary2D;
  Ary2D_u3p13_12_13 AssiHiFrqWhlImbRejctnGainY_Ary2D;
  Ary2D_u8p8_12_20 AssiMotTqWhlImbRejctnMaxX_Ary2D;
  Ary2D_s4p11_12_20 AssiMotTqWhlImbRejctnMaxY_Ary2D;
  Ary2D_u8p8_12_20 AssiMotTqWhlImbRejctnMinX_Ary2D;
  Ary2D_s4p11_12_20 AssiMotTqWhlImbRejctnMinY_Ary2D;
  Ary2D_u5p11_12_5 AssiWhlImbRejctnBlndScaX_Ary2D;
  Ary2D_u2p14_12_5 AssiWhlImbRejctnBlndScaY_Ary2D;
  Ary1D_u8p8_2 DampgHwTqX_Ary1D;
  Ary1D_u1p15_2 DampgHwTqY_Ary1D;
  Ary1D_u4p12_12 DampgHydCoeff1ScaY_Ary1D;
  Ary1D_u4p12_12 DampgHydCoeff2ScaY_Ary1D;
  Ary1D_u4p12_12 DampgHydCoeff3ScaY_Ary1D;
  Ary1D_u4p12_12 DampgHydCoeff4ScaY_Ary1D;
  Ary2D_u12p4_12_13 DampgMotVelX_Ary2D;
  Ary2D_u5p11_12_13 DampgMotVelY_Ary2D;
  Ary1D_u4p12_12 HysCmpEffLossY_Ary1D;
  Ary1D_u9p7_12 HysCmpEffOffsY_Ary1D;
  Ary1D_u8p8_6 HysCmpFricWhlImbRejctnBlndX_Ary1D;
  Ary1D_u2p14_6 HysCmpFricWhlImbRejctnBlndY_Ary1D;
  Ary1D_u9p7_12 HysCmpFricWhlImbRejctnOffY_Ary1D;
  Ary1D_u9p7_12 HysCmpFricWhlImbRejctnOnY_Ary1D;
  Ary2D_u4p12_12_8 HysCmpHwTqScaX_Ary2D;
  Ary2D_u4p12_12_8 HysCmpHwTqScaY_Ary2D;
  Ary1D_u9p7_12 HysCmpHysSatnY_Ary1D;
  Ary1D_u9p7_5 HysCmpNegHysCmpScaX_Ary1D;
  Ary1D_u2p14_5 HysCmpNegHysCmpScaY_Ary1D;
  Ary1D_u8p8_8 HysCmpNegHysCmpX_Ary1D;
  Ary1D_u9p7_8 HysCmpNegHysCmpY_Ary1D;
  Ary1D_u2p14_6 HysCmpRiseX_Ary1D;
  Ary1D_u2p14_6 HysCmpRiseY_Ary1D;
  Ary1D_u0p16_10 InertiaCmpVelAssiBasdDampgStatY_Ary1D;
  Ary1D_u7p9_12 InertiaCmpVelDampgFilFrq_Ary1D;
  Ary1D_u7p9_12 InertiaCmpVelDampgFilFrqWhlImbRejctnOn_Ary1D;
  Ary1D_u1p15_12 InertiaCmpVelDampgSpdBlndY_Ary1D;
  Ary1D_u4p12_5 InertiaCmpVelDampgWhlImbRejctnBlndX_Ary1D;
  Ary1D_u1p15_5 InertiaCmpVelDampgWhlImbRejctnBlndY_Ary1D;
} Rte_Calprm_CalRegn02Rt05GroupA_DEFAULT_RTE_CALPRM_GROUP_Type;

# define Rte_CalprmElementGroup_CalRegn02Rt05GroupB_DEFAULT_RTE_CALPRM_GROUP (44)
typedef struct
{
  float32 EotProtnDeltaTqThd_Val;
  float32 EotProtnSoftEndStopAuthyThd_Val;
  Ary1D_u9p7_4 EotProtnDampgVehSpdTbl_Ary1D;
  Ary1D_u9p7_5 EotProtnEntrGainVehSpdTbl_Ary1D;
  Ary2D_u1p15_5_4 EotProtnEntrGainY_Ary2D;
  Ary2D_u1p15_5_4 EotProtnLoAuthyEntrGainY_Ary2D;
  Ary1D_u12p4_2 EotProtnMotSpdIncptY_Ary1D;
  Ary2D_u0p16_4_2 EotProtnNormDampgY_Ary2D;
  Ary2D_u12p4_9_16 RtnHwAgOffsCalcdX_Ary2D;
  Ary2D_u5p11_9_16 RtnHwAgOffsCalcdY_Ary2D;
  Ary2D_u8p8_9_8 RtnScaTqX_Ary2D;
  Ary2D_u8p8_9_8 RtnScaTqY_Ary2D;
  Ary2D_u7p9_9_4 RtnScaVelX_Ary2D;
  Ary2D_u8p8_9_4 RtnScaVelY_Ary2D;
  Ary1D_u9p7_9 RtnVehSpdSeln_Ary1D;
} Rte_Calprm_CalRegn02Rt05GroupB_DEFAULT_RTE_CALPRM_GROUP_Type;


/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * Constant value definitions
 *********************************************************************************************************************/

# define RTE_START_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern CONST(Ary1D_u08_17, RTE_CONST) Rte_C_Ary1D_u08_17_0; /* PRQA S 0850 */ /* MD_MSR_19.8 */

extern CONST(Ary1D_u0p16_8, RTE_CONST) Rte_C_Ary1D_u0p16_8_0; /* PRQA S 0850 */ /* MD_MSR_19.8 */

extern CONST(Ary1D_u16_32, RTE_CONST) Rte_C_Ary1D_u16_32_0; /* PRQA S 0850 */ /* MD_MSR_19.8 */

extern CONST(Ary1D_u16p0_2, RTE_CONST) Rte_C_Ary1D_u16p0_2_1; /* PRQA S 0850 */ /* MD_MSR_19.8 */

extern CONST(Ary1D_u2p14_2, RTE_CONST) Rte_C_Ary1D_u2p14_2_1; /* PRQA S 0850 */ /* MD_MSR_19.8 */

extern CONST(Ary1D_u32_8, RTE_CONST) Rte_C_Ary1D_u32_8_0; /* PRQA S 0850 */ /* MD_MSR_19.8 */

extern CONST(Ary1D_u8_48, RTE_CONST) Rte_C_Ary1D_u8_48_0; /* PRQA S 0850 */ /* MD_MSR_19.8 */

extern CONST(Ford_VehicleGGCCData, RTE_CONST) Rte_C_Ford_VehicleGGCCData_0; /* PRQA S 0850 */ /* MD_MSR_19.8 */

extern CONST(MotAgRtPrmRec1, RTE_CONST) Rte_C_MotAgRtPrmRec1_0; /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
# include "Rte_DataHandleType.h"

# ifdef RTE_MICROSAR_PIM_EXPORT


/**********************************************************************************************************************
 * Calibration component and SW-C local calibration parameters
 *********************************************************************************************************************/

#  define RTE_START_SEC_CONST_DEFAULT_RTE_CALPRM_GROUP_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern CONST(u16p0, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP) Rte_CalRegn01Cmn_FordMsg4B0BusHiSpdCanDtcInhbTiThd_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern CONST(u16p0, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP) Rte_CalRegn01Cmn_FordMsg4B0BusHiSpdMsgFltNtcDiagcTiThd_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern CONST(u16p0, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP) Rte_CalRegn01Cmn_FordMsg4B0BusHiSpdMsgFltTiThd_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern CONST(u16p0, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP) Rte_CalRegn01Cmn_FordMsg4B0BusHiSpdMsgMissNtcDiagcTiThd_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern CONST(u16p0, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP) Rte_CalRegn01Cmn_FordMsg4B0BusHiSpdMsgMissTiThd_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern CONST(u16p0, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP) Rte_CalRegn01Cmn_FordMsg4B0BusHiSpdMsgRxdNtcDiagcTiThd_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern CONST(u16p0, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP) Rte_CalRegn01Cmn_FordMsg4B0BusHiSpdMsgVldNtcDiagcTiThd_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern CONST(u16p0, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP) Rte_CalRegn01Cmn_FordMsg4B0BusHiSpdMsgVldTiThd_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#  define RTE_STOP_SEC_CONST_DEFAULT_RTE_CALPRM_GROUP_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * Rte_Pim (Per-Instance Memory)
 *********************************************************************************************************************/

#  define RTE_START_SEC_VAR_DEFAULT_RTE_Appl10_PIM_GROUP_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_Assi_dAssiThermAssiSca; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_Assi_dAssiWhlImbRejctnBlnd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_AssiHiFrq_dAssiHiFrqGain; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_AssiHiFrq_dAssiHiFrqGainBlnd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_AssiHiFrq_dAssiHiFrqGainWhlImbRejtcnZero; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_AssiSumLim_CmdSumInpPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_AssiSumLim_CmdSumOutpPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_BattVltg_BattVltgPrevBattVltg; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_CurrMeas_BrdgVltgSumPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_CurrMeas_EolOffsHiBrdgVltg; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_CurrMeas_MotCurrEolGainA; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_CurrMeas_MotCurrEolGainB; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_CurrMeas_MotCurrEolGainC; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_CurrMeas_MotCurrOffsDeltaA; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_CurrMeas_MotCurrOffsDeltaB; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_CurrMeas_MotCurrOffsDeltaC; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_CurrMeas_MotCurrOffsHiAvrgA; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_CurrMeas_MotCurrOffsHiAvrgB; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_CurrMeas_MotCurrOffsHiAvrgC; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_CurrMeas_MotCurrOffsLoAvrgA; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_CurrMeas_MotCurrOffsLoAvrgB; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_CurrMeas_MotCurrOffsLoAvrgC; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_CurrMeas_MotCurrOffsZeroAvrgA; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_CurrMeas_MotCurrOffsZeroAvrgB; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_CurrMeas_MotCurrOffsZeroAvrgC; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_CurrMeas_MotCurrSumAPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_CurrMeas_MotCurrSumBPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_CurrMeas_MotCurrSumCPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_CurrMeas_TmpMotCurrAdcVlySum1Prev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_HwTq1Meas_HwTq1MeasPrevHwTq1; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_HwTq1Meas_RackLimrCcwEot1; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_HwTq1Meas_RackLimrCwEot1; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_HwTq8Meas_HwTq8PrevHwTq8; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_HwTq8Meas_RackLimrCcwEot8; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_HwTq8Meas_RackLimrCwEot8; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAg5Meas_dMotAg5MeasAmpVal; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAg6Meas_dMotAg6MeasAmpVal; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAgCmp_DigMotHwPosn; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAgSwCal_BoostModlnIdx; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAgSwCal_BoostSlew; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAgSwCal_CoolDwnModlnIdx; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAgSwCal_CoolDwnSlew; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAgSwCal_HldModlnIdx; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAgSwCal_HldSlew; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAgSwCal_SwCalMotModlnIdx; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotCurrRegVltgLimr_AntiWdupCmdScaDax; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotCurrRegVltgLimr_AntiWdupCmdScaQax; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotCurrRegVltgLimr_CurrLoaScarPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotCurrRegVltgLimr_DualEcuLoaScarPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotCurrRegVltgLimr_FETLoaScarPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotCurrRegVltgLimr_IvtrLoaScarPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotCurrRegVltgLimr_MotCtrlMotVltgDaxPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotCurrRegVltgLimr_MotCtrlMotVltgQaxPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotCurrRegVltgLimr_MotVltgIntglCmdDaxPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotCurrRegVltgLimr_MotVltgIntglCmdQaxPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotCurrRegVltgLimr_dMotCurrRegVltgLimrAntiWdupCmdScaDax; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotCurrRegVltgLimr_dMotCurrRegVltgLimrAntiWdupCmdScaQax; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotCurrRegVltgLimr_dMotCurrRegVltgLimrMotCurrCmdErrDax; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotCurrRegVltgLimr_dMotCurrRegVltgLimrMotCurrCmdErrQax; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotCurrRegVltgLimr_dMotCurrRegVltgLimrMotCurrCmdScaDax; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotCurrRegVltgLimr_dMotCurrRegVltgLimrMotCurrCmdScaQax; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotCurrRegVltgLimr_dMotCurrRegVltgLimrMotVltgBrdgFild; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotCurrRegVltgLimr_dMotCurrRegVltgLimrMotVltgCmdFinal; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotCurrRegVltgLimr_dMotCurrRegVltgLimrMotVltgCmdPreLim; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotCurrRegVltgLimr_dMotCurrRegVltgLimrMotVltgDampgDax; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotCurrRegVltgLimr_dMotCurrRegVltgLimrMotVltgDampgQax; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotCurrRegVltgLimr_dMotCurrRegVltgLimrMotVltgDaxFb; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotCurrRegVltgLimr_dMotCurrRegVltgLimrMotVltgDaxIntglPreLim; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotCurrRegVltgLimr_dMotCurrRegVltgLimrMotVltgDecoupldFbDax; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotCurrRegVltgLimr_dMotCurrRegVltgLimrMotVltgDecoupldFbQax; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotCurrRegVltgLimr_dMotCurrRegVltgLimrMotVltgDircFbDax; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotCurrRegVltgLimr_dMotCurrRegVltgLimrMotVltgDircFbQax; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotCurrRegVltgLimr_dMotCurrRegVltgLimrMotVltgPreLimDax; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotCurrRegVltgLimr_dMotCurrRegVltgLimrMotVltgPreLimQax; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotCurrRegVltgLimr_dMotCurrRegVltgLimrMotVltgPropCmdDax; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotCurrRegVltgLimr_dMotCurrRegVltgLimrMotVltgPropCmdQax; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotCurrRegVltgLimr_dMotCurrRegVltgLimrMotVltgQaxFb; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotCurrRegVltgLimr_dMotCurrRegVltgLimrMotVltgQaxFfFild; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotCurrRegVltgLimr_dMotCurrRegVltgLimrMotVltgQaxIntglPreLim; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotCurrRegVltgLimr_dMotCurrRegVltgLimrMotVltgSatnIvsRat; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotCurrRegVltgLimr_dMotCurrRegVltgLimrMotVltgSatnRat; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotCurrRegVltgLimr_dMotCurrRegVltgLimrPhaAdvPreDly; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotRplCoggCmd_dMotRplCoggCmdMotCoggCmd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotRplCoggCmd_dMotRplCoggCmdMotCurrQaxCoggCmdPreLim; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotRplCoggCmd_dMotRplCoggCmdMotRplCmdPreLim; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotVel_dMotVelAvrgTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotVel_dMotVelTiStampRef; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_SinVltgGenn_Fil1OutpPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_SinVltgGenn_Fil2OutpPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_SinVltgGenn_PhaDptOffsA; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_SinVltgGenn_PhaDptOffsB; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_SinVltgGenn_PhaDptOffsC; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_SinVltgGenn_RndNrPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CmnMfgSrv_InpOutpCtrlAssiGain; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CmnMfgSrv_InpOutpCtrlVehSpdOvrd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CustDiag_MaxCurr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CustDiag_MaxTemp; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CustDiag_MinVltg; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_Dampg_PrevHwTqBacklshOutp; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_Dampg_PrevMotVelBacklshOutp; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_Dampg_dDampgAssiMechTSca; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_Dampg_dDampgCoeff1Term; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_Dampg_dDampgCoeff2Term; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_Dampg_dDampgCoeff3Term; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_Dampg_dDampgCoeff4Term; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_Dampg_dDampgHwTqSca; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_Dampg_dDampgMotVelDampgCmd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_Dampg_dDampgQuadHwTqBacklsh; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_Dampg_dDampgQuadMotVelBacklsh; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_DualCtrlrOutpMgr_OutpSca; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_DutyCycThermProtn_AbsltTLimSlewStVari; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_DutyCycThermProtn_LstTblValRateLimrStVari; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_DutyCycThermProtn_ReInitCntrVal; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_DutyCycThermProtn_dDutyCycThermProtnAbsltCtrlrTTqLim; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_DutyCycThermProtn_dDutyCycThermProtnAbsltCuTTqLim; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_DutyCycThermProtn_dDutyCycThermProtnAbsltTTqLim; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_DutyCycThermProtn_dDutyCycThermProtnMplr12T; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_DutyCycThermProtn_dDutyCycThermProtnMplr36T; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_DutyCycThermProtn_dDutyCycThermProtnThermLoadLim; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_DutyCycThermProtn_dDutyCycThermProtnThermLoadLimTblYVal; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_EcuTMeas_dEcuTMeasEcuTCalcd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_ElecPwrCns_dElecPwrCnsDrpInpPwr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_ElecPwrCns_dElecPwrCnsModInpPwr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_ElecPwrCns_dElecPwrCnsMotCurrDaxEstim; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_ElecPwrCns_dElecPwrCnsMotCurrQaxEstim; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_EotLrng_PrevCcwEot; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_EotLrng_PrevCwEot; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_EotProtn_PrevEotAssiSca; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_EotProtn_PrevEotDampg; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_EotProtn_PrevImpctPosn; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_EotProtn_dEotProtnDampg; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_EotProtn_dEotProtnEntrGain; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_EotProtn_dEotProtnEotAssiSca; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_EotProtn_dEotProtnEotGain; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_EotProtn_dEotProtnExitGain; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_EotProtn_dEotProtnLimPosn; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_EotProtnFwl_dEotProtnFwlEotActvCmdActvLowrBnd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_EotProtnFwl_dEotProtnFwlEotActvCmdActvUpprBnd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_EotProtnFwl_dEotProtnFwlEotDampgActvLowrBnd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_EotProtnFwl_dEotProtnFwlEotDampgActvUpprBnd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_EotProtnFwl_dEotProtnFwlEotDampgFwX0; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordHwAgArbn_FordCmpdHwPosnPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordHwAgArbn_NonAbsOffs; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordHwAgArbn_PrevIgnCycVal; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordHwAgArbn_RelHwPosnPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordHwTqCdng_dFordHwTqCdngFildBoostCrvAssiTq; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordHwTqCmdOvrlLimr_LimrVehSpdPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordHwTqCmdOvrlLimr_LkaTqReqPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordHwTqCmdOvrlLimr_PrevDftVehSpd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordHwTqCmdOvrlLimr_PrevVehSpd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordHwTqCmdOvrlLimr_TqReqPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMotTqCmdOvrlLimr_DftVehSpd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMotTqCmdOvrlLimr_PrevAmpLim; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMotTqCmdOvrlLimr_PrevDftVehSpd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMotTqCmdOvrlLimr_PrevLimdTqReq; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMotTqCmdOvrlLimr_PrevLimrVehSpd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMotTqCmdOvrlLimr_PrevTqTrend; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg077BusHiSpd_FordVehLatACmpdPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg077BusHiSpd_FordVehLgtACmpdPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg077BusHiSpd_FordVehSpdOverGndPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg077BusHiSpd_FordVehYawRateCmpdPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg091BusHiSpd_FordVehYawRatePrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg167BusHiSpd_FordVehPrpnWhlTqPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg202BusHiSpd_FordVehSpdEngModlPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg217BusHiSpd_FordVehFrntLeWhlSpdPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg217BusHiSpd_FordVehFrntRiWhlSpdPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg217BusHiSpd_FordVehReLeWhlSpdPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg217BusHiSpd_FordVehReRiWhlSpdPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg3CABusHiSpd_FordVehLaneKeepSysCrvtPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg3CABusHiSpd_FordVehLaneKeepSysReqdAgPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg3D3BusHiSpd_FordVehLatCtrlCrvtPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg3D3BusHiSpd_FordVehLatCtrlCrvtRatePrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg3D3BusHiSpd_FordVehLatCtrlPahOffsPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg3D3BusHiSpd_FordVehLatCtrlPahPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg40ABusHiSpd_FordVehGlbRealTiPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg40ABusHiSpd_FordVehTireCircumPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg414BusHiSpd_FordVehSteerPinionAgOffsPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg415BusHiSpd_FordVehSpdBrkModlPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg41ABusHiSpd_FordVehOutdAirTPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg430BusHiSpd_FordVehOdomPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordSysSt_FordVltgOperRamp; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordSysSt_FordVltgOperScar; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordSysSt_OperRampRatePrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordSysSt_OperScaFctrPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordVltgIf_MaxEpsBattCurrPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordVltgIf_MinBattVltgPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordVltgIf_PrevVltgOperRamp; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordVltgIf_PrevVltgOperScar; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HiLoadStallLimr_StallMotTqLimFetMtgtnPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HiLoadStallLimr_StallMotTqLimPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HiLoadStallLimr_dHiLoadStallLimrStallMotTqCmd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HiLoadStallLimr_dHiLoadStallLimrStallMotTqCmdFild; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HiLoadStallLimr_dHiLoadStallLimrStallMotTqLim; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAg1Meas_HwAg1PrevHwAg1; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAg1Meas_PrevHwAg1; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAg1Meas_dHwAg1MeasSnsr0Abs; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAg1Meas_dHwAg1MeasSnsr0Rel; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAg1Meas_dHwAg1MeasSnsr1Abs; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAg1Meas_dHwAg1MeasSnsr1Rel; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAgArbn_HwAgPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAgSnsrls_CorrdPinionAgHwAgOffs; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAgSnsrls_CorrdPinionAgHwConf; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAgSnsrls_FCentrHwAgOffs; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAgSnsrls_FCentrHwConf; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAgSnsrls_MotAgOffs; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAgSnsrls_PrevFildRelHwAg1; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAgSnsrls_PrevHwAgOffs; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAgSnsrls_PrevMaxHwConf; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAgSnsrls_PrevSmotngHwAg; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAgSnsrls_VehDynHwAgOffs; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAgSnsrls_WhlSpdHwAgOffs; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAgSnsrls_WhlSpdHwConf; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAgSnsrls_dHwAgSnsrlsStordHwAg; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAgSnsrls_dHwAgSnsrlsStordHwConf; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAgSnsrls_dHwAgSnsrlsVehDynHwConf; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAgSnsrls_dHwAgSnsrlsWhlSpdHwConf; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAgSysArbn_PinionAgPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAgSysArbn_PrevHwAgNotCorrd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAgSysArbn_PrevPinionAgConf; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAgSysArbn_PrevSeldHwAg; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAgSysArbn_SeldHwAgConf; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAgSysArbn_TqSnsrAgPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwTq10Meas_HwTq10PrevHwTq; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwTq9Meas_HwTq9PrevHwTq; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwTqArbn_HwTqPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwTqArbn_dHwTqArbnHwTqDenom; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwTqArbn_dHwTqArbnHwTqNumer; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HysCmp_PrevAssiCmdFildVal; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HysCmp_PrevHwTqFildVal; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HysCmp_PrevRiseX; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HysCmp_PrevRiseY; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HysCmp_dHysCmpAssiCmdFild; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HysCmp_dHysCmpAvl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HysCmp_dHysCmpEffCmpTq; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HysCmp_dHysCmpFric; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HysCmp_dHysCmpHwTqFild; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HysCmp_dHysCmpNegAvl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HysCmp_dHysCmpPosAvl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HysCmp_dHysCmpRawVal; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HysCmp_dHysCmpRiseYFac; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_ImcSigArbn_HwAgOffsPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_ImcSigArbn_HwAgTarOffsPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_ImcSigArbn_HwTqOffsPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_ImcSigArbn_MotVelCrfOffsPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_ImcSigArbn_PosnServoIntgtrOffsPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_ImcSigArbn_PullCmpLongTermIntgtrStOffsPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_ImcSigArbn_PullCmpShoTermIntgtrStOffsPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_ImcSigArbn_TrakgIntgtrSt1Offs; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_ImcSigArbn_TrakgIntgtrSt2Offs; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_ImcSigArbn_VehSpdOffsPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_InertiaCmpVel_DecelGain; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_InertiaCmpVel_PreScagCmpCmdPrev1; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_InertiaCmpVel_PreScagCmpCmdPrev2; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_InertiaCmpVel_ScaDrvrVelPrev1; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_InertiaCmpVel_ScaDrvrVelPrev2; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_InertiaCmpVel_TqSnsrAgPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_InertiaCmpVel_dInertiaCmpVelAssiBasdDampgCoeff; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_InertiaCmpVel_dInertiaCmpVelCalcdInertiaCmp; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_InertiaCmpVel_dInertiaCmpVelFilFrq; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_InertiaCmpVel_dInertiaCmpVelMotVelBasdOutpScag; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_InertiaCmpVel_dInertiaCmpVelNotScadDrvrVel; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_InertiaCmpVel_dInertiaCmpVelNotchBlndVal; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_InertiaCmpVel_dInertiaCmpVelNotchInpVal; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_InertiaCmpVel_dInertiaCmpVelNotchOutpVal; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_InertiaCmpVel_dInertiaCmpVelRawDecelGain; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_InertiaCmpVel_dInertiaCmpVelScadDrvrVel; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_InertiaCmpVel_dInertiaCmpVelTqSnsrVelFildVal; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_LimrCdng_PrevEotAssiScaCdnd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_LimrCdng_PrevEotMotTqLimCdnd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_LimrCdng_PrevStallMotTqLimCdnd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_LimrCdng_PrevSysMotTqCmdScaCdnd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_LimrCdng_PrevThermMotTqLimCdnd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_LimrCdng_PrevVehSpdMotTqLimCdnd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotAg2Meas_MotAg2MeclPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotCtrlPrmEstimn_dMotCtrlPrmEstimnCtrlrREstimdPreLim; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotCtrlPrmEstimn_dMotCtrlPrmEstimnFetRFfEstimd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotCtrlPrmEstimn_dMotCtrlPrmEstimnMotBackEmfConEstimdPreLim; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotCtrlPrmEstimn_dMotCtrlPrmEstimnMotBackEmfConEstimdSatnSca; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotCtrlPrmEstimn_dMotCtrlPrmEstimnMotInduEstimdPreLimDax; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotCtrlPrmEstimn_dMotCtrlPrmEstimnMotInduEstimdPreLimQax; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotCtrlPrmEstimn_dMotCtrlPrmEstimnMotInduEstimdSatnScaDax; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotCtrlPrmEstimn_dMotCtrlPrmEstimnMotInduEstimdSatnScaQax; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotCtrlPrmEstimn_dMotCtrlPrmEstimnMotRFfEstimd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotCurrPeakEstimn_dMotCurrPeakEstimnMotCurrDaxFil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotCurrPeakEstimn_dMotCurrPeakEstimnMotCurrQaxFil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotCurrRegCfg_dMotCurrRegCfgMotVelMrfFild; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotRefMdl_MotCurrDaxCmdPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotRefMdl_MotCurrQaxCmdPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotRefMdl_VltgDaxFfTermPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotRefMdl_VltgQaxFfTermPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotRefMdl_dMotRefMdlCurrDaxAtPeakTq; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotRefMdl_dMotRefMdlCurrDaxMin; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotRefMdl_dMotRefMdlCurrQaxMin; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotRefMdl_dMotRefMdlCurrSqdMin; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotRefMdl_dMotRefMdlInterCalcnCurrDaxMax; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotRefMdl_dMotRefMdlMotCurrDaxBoost; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotRefMdl_dMotRefMdlMotTqCmdLimd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotRefMdl_dMotRefMdlMotVelFildFf; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotRefMdl_dMotRefMdlMotVltgDaxFfDyn; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotRefMdl_dMotRefMdlMotVltgDaxFfDynTerm; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotRefMdl_dMotRefMdlMotVltgDaxFfStat; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotRefMdl_dMotRefMdlMotVltgQaxFfDyn; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotRefMdl_dMotRefMdlMotVltgQaxFfDynTerm; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotRefMdl_dMotRefMdlMotVltgQaxFfStat; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotRefMdl_dMotRefMdlPeakTq; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotRefMdl_dMotRefMdlPhaAdvAtPeakTq; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotRefMdl_dMotRefMdlReacncDaxOverR; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotRefMdl_dMotRefMdlReacncQaxOverR; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotRefMdl_dMotRefMdlRelncTqCoeff; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotRplCoggCfg_dMotRplCoggCfgMotAgElecDlyRpl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotRplCoggCfg_dMotRplCoggCfgMotCurrQaxToMotTqGain; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotRplCoggCfg_dMotRplCoggCfgMotTqRplOrder1Mgn; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotRplCoggCfg_dMotRplCoggCfgMotTqRplOrder1Pha; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotRplCoggCfg_dMotRplCoggCfgMotTqRplOrder2Mgn; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotRplCoggCfg_dMotRplCoggCfgMotTqRplOrder2Pha; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotRplCoggCfg_dMotRplCoggCfgMotTqRplOrder3Mgn; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotRplCoggCfg_dMotRplCoggCfgMotTqRplOrder3Pha; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotTqCmdSca_MotTqScaFac; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotTqTranlDampg_dMotTqTranlDampgCmdCtrld; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotTqTranlDampg_dMotTqTranlDampgSignPhaSca; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotTqTranlDampg_dMotTqTranlDampgTiElpd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotTqTranlDampg_dMotTqTranlDampgVelDampgCmd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotVelCtrl_MotVelTar; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotVelCtrl_PrevAntiWdupCmd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotVelCtrl_PrevDerivtvOutp; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotVelCtrl_PrevIntgtrInp; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotVelCtrl_PrevIntgtrOutp; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotVelCtrl_PrevMotVelErr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotVelCtrl_PrevMotVelTar; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotVelCtrl_VelSlewRate; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_PosnTrakgServo_AntiWdupCmdPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_PosnTrakgServo_HwTqDerivtvPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_PosnTrakgServo_HwTqPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_PosnTrakgServo_IntgtrInpPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_PosnTrakgServo_IntgtrOutpPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_PosnTrakgServo_OutpAntiWdupCmdPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_PosnTrakgServo_PosnServoCmdInpArbnFltMtgtnPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_PosnTrakgServo_PosnServoCmdOutpArbnFltMtgtnPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_PosnTrakgServo_PosnServoEnaTiPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_PosnTrakgServo_PosnServoHwAgValRateLim; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_PosnTrakgServo_PosnServoHwVelValRateLim; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_PosnTrakgServo_dPosnTrakgServoCmdPreLimd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_PosnTrakgServo_dPosnTrakgServoEnaBlndFac; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_PosnTrakgServo_dPosnTrakgServoFfCmd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_PosnTrakgServo_dPosnTrakgServoHwAg; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_PosnTrakgServo_dPosnTrakgServoHwAgErr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_PosnTrakgServo_dPosnTrakgServoHwAgTarLimd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_PosnTrakgServo_dPosnTrakgServoHwVelTarLimd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_PosnTrakgServo_dPosnTrakgServoIntgtrCmdLimd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_PosnTrakgServo_dPosnTrakgServoPtlStFbCmd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_PwrLimr_BrdgVltgRateLim; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_PwrLimr_OutpVelOffsRateLimd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_PwrLimr_dPwrLimrFildMotVel; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_PwrLimr_dPwrLimrLimDif; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_PwrLimr_dPwrLimrMinStdOperLim; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_PwrLimr_dPwrLimrMotEnvlpSpd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_PwrLimr_dPwrLimrMotTqCmdIvtrLoaSca; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_PwrLimr_dPwrLimrOutpVelOffs; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_PwrLimr_dPwrLimrSpdAdj; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_PwrLimr_dPwrLimrTLimMaxCurr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_PwrLimr_dPwrLimrTqEnvlpLim1; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_PwrLimr_dPwrLimrTqEnvlpLim4; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_PwrLimr_dPwrLimrTqLim; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_PwrLimr_dPwrLimrTqLim1; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_PwrLimr_dPwrLimrTqLim4; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_Rtn_PrevHwAgAuthy; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_Rtn_PrevHwAgOffsLimd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_Rtn_dRtnAbsltHwAg; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_Rtn_dRtnAssiMechTRtnSca; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_Rtn_dRtnBascRtn; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_Rtn_dRtnHwAgAuthySca; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_Rtn_dRtnHwAgRtnCmd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_Rtn_dRtnHwTqRtnSca; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_Rtn_dRtnHwVelRtnSca; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_RtnPahFwl_dRtnPahFwlLowrBnd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_RtnPahFwl_dRtnPahFwlUpprBnd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_StOutpCtrl_StOutpCtrlPrevCmdSca; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_StOutpCtrl_dStOutpCtrlRateLim; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_StOutpCtrl_dStOutpCtrlTarSca; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_StabyCmp_dStabyCmpAssiScaCmpBlnd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_StabyCmp_dStabyCmpNotchFil02Blnd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_StabyCmp_dStabyCmpNotchFil04Blnd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_StabyCmp_dStabyCmpNotchFil12Blnd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_StabyCmp_dStabyCmpNotchFil12Outp; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_StabyCmp_dStabyCmpNotchFil1Outp; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_StabyCmp_dStabyCmpNotchFil2Outp; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_StabyCmp_dStabyCmpNotchFil34Blnd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_StabyCmp_dStabyCmpNotchFil34Outp; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_StabyCmp_dStabyCmpNotchFil3Outp; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_StabyCmp_dStabyCmpNotchFil4Outp; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_SysFricLrng_EstimdFric; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_SysFricLrng_FricOffs; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_SysFricLrng_PrevMaxRawAvrgFric; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_SysFricLrng_SatnEstimdFric; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_TEstimn_AssiMechTEstimnPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_TEstimn_AssiMechTSlewLimPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_TEstimn_CuTEstimnPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_TEstimn_FilAssiMechLLValPwrUp; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_TEstimn_FilAssiMechLpValPwrUp; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_TEstimn_FilCuLLValPwrUp; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_TEstimn_FilCuLpValPwrUp; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_TEstimn_FilMagLLValPwrUp; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_TEstimn_FilMagLpValPwrUp; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_TEstimn_FilSiLLValPwrUp; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_TEstimn_FilSiLpValPwrUp; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_TEstimn_MagTEstimnPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_TEstimn_RepInitCntrVal; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_TEstimn_SiTEstimnPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_TEstimn_dTEstimnAmbPwr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_TEstimn_dTEstimnAssiMechCorrn; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_TEstimn_dTEstimnAssiMechDampgSca; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_TEstimn_dTEstimnAssiMechFil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_TEstimn_dTEstimnCuCorrn; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_TEstimn_dTEstimnMagCorrn; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_TEstimn_dTEstimnScadAmbT; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_TEstimn_dTEstimnScadEngT; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_TEstimn_dTEstimnSiCorrn; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_TEstimn_dTEstimnWghtAvrgT; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_TqLoa_MotTqCmdPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_TqLoa_MotVelAndTqBasdScaFacPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_TqLoa_VehLatADifScaFacPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_TqLoa_dTqLoaMotTqCmdPreScag; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_TqLoa_dTqLoaMotVelAndTqBasdScaFac; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_TqLoa_dTqLoaScaFacFinal; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_TqLoa_dTqLoaVehLatADifScaFac; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_TqLoa_dTqLoaVehLatAEstimn; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_TqLoa_dTqLoaVehSpdBasdScaFac; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_VehSigCdng_PrevLatA; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_VehSigCdng_PrevLtgA; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_VehSigCdng_PrevVehSpd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_VehSigCdng_PrevYawRate; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_VehSpdLimr_dVehSpdLimrBreakPt1; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_VehSpdLimr_dVehSpdLimrBreakPt2; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_DmaCfgAndUse_DmaCfgAndUse2MilliSecAdcMaxDmaTrfTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_DmaCfgAndUse_DmaCfgAndUse2MilliSecAdcStrtTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_DmaCfgAndUse_d2MilliSecAdcActDmaTrfTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_FlsMem_CodFlsCrcChkStrtTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_FlsMem_CodFlsDummyRead1; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_FlsMem_CodFlsDummyRead2; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_FlsMem_CodFlsDummyRead3; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_FlsMem_CodFlsDummyRead4; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_FlsMem_CrcHwIdxKey; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_GtmCfgAndUse_AdcStrtOfCnvn2; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_GtmCfgAndUse_AdcStrtOfCnvnPeak; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_GtmCfgAndUse_Dma2MilliSecToMotCtrlTrig; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_GtmCfgAndUse_DmaMotAgATrig; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_GtmCfgAndUse_DmaMotCtrlTo2MilliSecTrig; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_GtmCfgAndUse_PhaOnTiCntrAPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_GtmCfgAndUse_PhaOnTiCntrBPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_GtmCfgAndUse_PhaOnTiCntrCPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_HwTq1Meas_HwTq1MsgMissRxCnt; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_HwTq8Meas_HwTq8MsgMissRxCnt; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAgSwCal_BoostTiOut; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAgSwCal_CoolDwnTiOut; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAgSwCal_HldTiOut; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(u16p16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAgSwCal_PosnIdx; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(u16p16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAgSwCal_SamplePosnIdx; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAgSwCal_SampleStopTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAgSwCal_SampleStrtTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAgSwCal_SwCalCycTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_NvMProxy_ShtdwnClsChk; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_NxtrTi_PrevTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_RamMem_GlbRamFailrAdr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_RamMem_GlbRamWordLineRead; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_RamMem_LclRamFailrAdr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_RamMem_LclRamWordLineRead; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_RamMem_dRamMemCanRamDblBitEccErrAdr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_RamMem_dRamMemCanRamSngBitEccErrAdr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_RamMem_dRamMemDtsRamEccErrAdr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_RamMem_dRamMemFrRamDblBitEccErrAdr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_RamMem_dRamMemFrRamSngBitEccErrAdr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_RamMem_dRamMemFrRamTmpBufADblBitEccErrAdr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_RamMem_dRamMemFrRamTmpBufBDblBitEccErrAdr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_RamMem_dRamMemGtmRamSngBitEccErrAdr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_RamMem_dRamMemMCan0RamDblBitEccErrAdr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_RamMem_dRamMemMCan1RamDblBitEccErrAdr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_RamMem_dRamMemSpi0RamEccErrAdr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_RamMem_dRamMemSpi1RamEccErrAdr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_RamMem_dRamMemSpi2RamEccErrAdr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_RamMem_dRamMemSpi3RamEccErrAdr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_RamMem_dRamMemSpiRamEccErrAdr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_SinVltgGenn_PhaOnTiSumAPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_SinVltgGenn_PhaOnTiSumBPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_SinVltgGenn_PhaOnTiSumCPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_SinVltgGenn_PwmPerdRng; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_Uart0CfgAndUse_Uart0DiagcFrmErrCntr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_Uart0CfgAndUse_Uart0DiagcOvrrunErrCntr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_Uart0CfgAndUse_Uart0DiagcParErrCntr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_Uart0CfgAndUse_Uart0DiagcRxMaxDataErrCntr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_Uart1CfgAndUse_Uart1DiagcFrmErrCntr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_Uart1CfgAndUse_Uart1DiagcOvrrunErrCntr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_Uart1CfgAndUse_Uart1DiagcParErrCntr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_Uart1CfgAndUse_Uart1DiagcRxMaxDataErrCntr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_VrfyCritReg_MCalReadVrfyCritRegFltInfo; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_VrfyCritReg_MCalReadVrfyCritRegFltNvmInfo; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_VrfyCritReg_dVrfyCritRegCritRegActVal; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_VrfyCritReg_dVrfyCritRegCritRegAdr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_VrfyCritReg_dVrfyCritRegCritRegDesVal; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_VrfyCritReg_dVrfyCritRegSysCritRegActVal; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_VrfyCritReg_dVrfyCritRegSysCritRegAdr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_VrfyCritReg_dVrfyCritRegSysCritRegDesVal; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CmnMfgSrv_IgnCntr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CmnMfgSrv_SecuAcsAtmptTmr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CmnMfgSrv_SessionTiOut; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_DiagcMgr_DiagcMgrApplCrc; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_DualCtrlrOutpMgr_FltRefTiEnaLrng; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_DualCtrlrOutpMgr_LtchRefTiEnaLrng; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_DualCtrlrOutpMgr_MaxOutpRefTiEna; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_DualCtrlrOutpMgr_NonRecFltRefTiEnaLrng; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_DualCtrlrOutpMgr_RefTiEnaLrng; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_DualCtrlrOutpMgr_SysStRefTiEnaLrng; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_EotLrng_CcwEotRefTmr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_EotLrng_CwEotRefTmr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordCanDtcInhb_CanDtcInhbRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordCanDtcInhb_EpsFactryModRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordCanDtcInhb_EpsLifeCycModRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordCanDtcInhb_EpsTransptModRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordHwAgArbn_MotVelVldTrueTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordHwAgArbn_NonAbsCentrNotDetdTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordHwAgArbn_RelPosnVldFlgRcvryTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordHwTqCdng_AppldFinalMotTqVldRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordHwTqCdng_InpTqRawVldRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMotTqCmdOvrlLimr_ActvNiblCtrlLoFrqElpdTiVari; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMotTqCmdOvrlLimr_ActvNiblCtrlLoFrqTmrVari; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMotTqCmdOvrlLimr_LaneDprtrWarnLoFrqElpdTiVari; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMotTqCmdOvrlLimr_LaneDprtrWarnLoFrqTmrVari; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg077BusHiSpd_CanDtcInhbRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg077BusHiSpd_FordVehLatACmpdInvldFaildRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg077BusHiSpd_FordVehLatACmpdInvldPassdRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg077BusHiSpd_FordVehLatACmpdVldFaildRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg077BusHiSpd_FordVehLatACmpdVldMissRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg077BusHiSpd_FordVehLatACmpdVldPassdRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg077BusHiSpd_FordVehLgtACmpdInvldFaildRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg077BusHiSpd_FordVehLgtACmpdInvldPassdRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg077BusHiSpd_FordVehLgtACmpdVldFaildRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg077BusHiSpd_FordVehLgtACmpdVldMissRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg077BusHiSpd_FordVehLgtACmpdVldPassdRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg077BusHiSpd_FordVehSpdOverGndInvldFaildRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg077BusHiSpd_FordVehSpdOverGndInvldPassdRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg077BusHiSpd_FordVehSpdOverGndVldFaildRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg077BusHiSpd_FordVehSpdOverGndVldMissRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg077BusHiSpd_FordVehSpdOverGndVldPassdRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg077BusHiSpd_FordVehYawRateCmpdInvldFaildRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg077BusHiSpd_FordVehYawRateCmpdInvldPassdRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg077BusHiSpd_FordVehYawRateCmpdVldFaildRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg077BusHiSpd_FordVehYawRateCmpdVldMissRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg077BusHiSpd_FordVehYawRateCmpdVldPassdRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg077BusHiSpd_MissMsgFaildRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg077BusHiSpd_MissMsgPassdRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg07DBusHiSpd_FordVehActBrkTqSigInvldFaildRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg07DBusHiSpd_FordVehActBrkTqSigInvldPassdRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg07DBusHiSpd_FordVehActBrkTqVldFaildRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg07DBusHiSpd_FordVehActBrkTqVldPassdRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg07DBusHiSpd_FordVehBrkTqVldMissMsgRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg07DBusHiSpd_FordVehVertACmpdSigInvldFaildRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg07DBusHiSpd_FordVehVertACmpdSigInvldPassdRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg07DBusHiSpd_FordVehVertACmpdSigVldFaildRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg07DBusHiSpd_FordVehVertACmpdSigVldPassdRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg07DBusHiSpd_FordVehVertAVldMissMsgRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg07DBusHiSpd_MissMsgFaildRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg07DBusHiSpd_MissMsgPassdRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg083BusHiSpd_FordVehTurnSigVldMissMsgRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg083BusHiSpd_FordVehTurnSigVldRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg083BusHiSpd_MissMsgFaildRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg083BusHiSpd_MissMsgPassdRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg091BusHiSpd_FordVehYawRateRawVldFaildRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg091BusHiSpd_FordVehYawRateRawVldMissRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg091BusHiSpd_FordVehYawRateRawVldPassdRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg091BusHiSpd_InvldMsgFaildRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg091BusHiSpd_InvldMsgPassdRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg091BusHiSpd_MissMsgFaildRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg091BusHiSpd_MissMsgPassdRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg167BusHiSpd_FordVehPrpnWhlTqSigInvldFaildRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg167BusHiSpd_FordVehPrpnWhlTqSigInvldPassdRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg167BusHiSpd_MissMsgFaildRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg167BusHiSpd_MissMsgPassdRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg167BusHiSpd_PrpnWhlTqVldFaildRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg167BusHiSpd_PrpnWhlTqVldMissRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg167BusHiSpd_PrpnWhlTqVldPassdRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg202BusHiSpd_FordVehGearRvsStsInvldFaildRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg202BusHiSpd_FordVehGearRvsStsInvldPassdRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg202BusHiSpd_FordVehGearRvsStsVldFaildRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg202BusHiSpd_FordVehGearRvsStsVldMissRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg202BusHiSpd_FordVehGearRvsStsVldPassdRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg202BusHiSpd_FordVehSpdEngModLoQlyVldFaildRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg202BusHiSpd_FordVehSpdEngModLoQlyVldMissRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg202BusHiSpd_FordVehSpdEngModLoQlyVldPassdRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg202BusHiSpd_FordVehSpdEngModlVldFaildRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg202BusHiSpd_FordVehSpdEngModlVldMissRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg202BusHiSpd_FordVehSpdQlyFacEngModlInvldFaildRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg202BusHiSpd_FordVehSpdQlyFacEngModlInvldPassdRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg202BusHiSpd_FordVehTrlrBackupAssiAvlVldMissRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg202BusHiSpd_FordVehTrlrBackupAssiAvlVldPassdRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg202BusHiSpd_MissMsgFaildRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg202BusHiSpd_MissMsgPassdRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg213BusHiSpd_AbsActvVldFaildRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg213BusHiSpd_AbsActvVldPassdRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg213BusHiSpd_MissMsgFaildRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg213BusHiSpd_MissMsgPassdRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg215BusHiSpd_FordVehMsg215MissTmr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg215BusHiSpd_FordVehMsg215NotRxdRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg215BusHiSpd_FordVehMsg215RxdRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg215BusHiSpd_FordVehMsg215RxdTmr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg216BusHiSpd_FrntLeWhlCntrDirVldFaildRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg216BusHiSpd_FrntLeWhlCntrDirVldPassdRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg216BusHiSpd_FrntLeWhlVldMissMsgRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg216BusHiSpd_FrntRiWhlCntrDirVldFaildRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg216BusHiSpd_FrntRiWhlCntrDirVldPassdRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg216BusHiSpd_FrntRiWhlVldMissMsgRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg216BusHiSpd_MissMsgFaildRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg216BusHiSpd_MissMsgPassdRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg216BusHiSpd_ReLeWhlCntrDirVldFaildRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg216BusHiSpd_ReLeWhlCntrDirVldPassdRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg216BusHiSpd_ReLeWhlVldMissMsgRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg216BusHiSpd_ReRiWhlCntrDirVldFaildRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg216BusHiSpd_ReRiWhlCntrDirVldPassdRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg216BusHiSpd_ReRiWhlVldMissMsgRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg217BusHiSpd_FordVehFrntLeWhlSpdInvldFaildRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg217BusHiSpd_FordVehFrntLeWhlSpdInvldPassdRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg217BusHiSpd_FordVehFrntLeWhlSpdVldFaildRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg217BusHiSpd_FordVehFrntLeWhlSpdVldMissRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg217BusHiSpd_FordVehFrntLeWhlSpdVldPassdRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg217BusHiSpd_FordVehFrntRiWhlSpdInvldFaildRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg217BusHiSpd_FordVehFrntRiWhlSpdInvldPassdRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg217BusHiSpd_FordVehFrntRiWhlSpdVldFaildRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg217BusHiSpd_FordVehFrntRiWhlSpdVldMissRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg217BusHiSpd_FordVehFrntRiWhlSpdVldPassdRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg217BusHiSpd_FordVehReLeWhlSpdInvldFaildRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg217BusHiSpd_FordVehReLeWhlSpdInvldPassdRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg217BusHiSpd_FordVehReLeWhlSpdVldFaildRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg217BusHiSpd_FordVehReLeWhlSpdVldMissRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg217BusHiSpd_FordVehReLeWhlSpdVldPassdRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg217BusHiSpd_FordVehReRiWhlSpdInvldFaildRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg217BusHiSpd_FordVehReRiWhlSpdInvldPassdRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg217BusHiSpd_FordVehReRiWhlSpdVldFaildRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg217BusHiSpd_FordVehReRiWhlSpdVldMissRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg217BusHiSpd_FordVehReRiWhlSpdVldPassdRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg217BusHiSpd_MissMsgFaildRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg217BusHiSpd_MissMsgPassdRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg230BusHiSpd_FordVehGearLvrPosnInvldFaildRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg230BusHiSpd_FordVehGearLvrPosnInvldPassdRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg230BusHiSpd_FordVehGearLvrPosnVldFaildRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg230BusHiSpd_FordVehGearLvrPosnVldPassdRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg230BusHiSpd_GearLvrPosnVldMissRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg230BusHiSpd_MissMsgFaildRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg230BusHiSpd_MissMsgPassdRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg2FDBusHiSpd_FordVehMsg2FDMissTmr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg2FDBusHiSpd_FordVehMsg2FDNotRxdRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg2FDBusHiSpd_FordVehMsg2FDRxdRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg2FDBusHiSpd_FordVehMsg2FDRxdTmr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg3B3BusHiSpd_FordVehIgnStsInvldSigFaildRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg3B3BusHiSpd_FordVehIgnStsInvldSigPassdRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg3B3BusHiSpd_IgnStsVldFaildRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg3B3BusHiSpd_IgnStsVldMissRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg3B3BusHiSpd_IgnStsVldPassdRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg3B3BusHiSpd_MissMsgFaildRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg3B3BusHiSpd_MissMsgPassdRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg3CABusHiSpd_FordVehLaneKeepSysCrvtInvldFaildRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg3CABusHiSpd_FordVehLaneKeepSysCrvtInvldPassdRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg3CABusHiSpd_FordVehLaneKeepSysReqdAgInvldPassdRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg3CABusHiSpd_LaneAssiImgProcgModlAFaildCrvtTiThd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg3CABusHiSpd_LaneAssiImgProcgModlAFaildReqdAgTiThd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg3CABusHiSpd_LaneAssiImgProcgModlAVldMissRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg3CABusHiSpd_LaneAssiImgProcgModlAVldPassdRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg3CABusHiSpd_LaneKeepSysReqdAgInvldFaildRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg3CABusHiSpd_MissMsgFaildRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg3CABusHiSpd_MissMsgPassdRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg3D3BusHiSpd_ImgProcrModlAVldFaildRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg3D3BusHiSpd_ImgProcrModlAVldPassdRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg3D3BusHiSpd_MissMsgFaildRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg3D3BusHiSpd_MissMsgPassdRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg3D7BusHiSpd_EvasSteerAssiImgProcrModlAVldPassdRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg3D7BusHiSpd_FordVehCllsnMtgtnByBrkgLatDstInvldFaildRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg3D7BusHiSpd_FordVehCllsnMtgtnByBrkgLatDstInvldPassdRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg3D7BusHiSpd_FordVehCllsnMtgtnByBrkgLgtDstInvldFaildRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg3D7BusHiSpd_FordVehCllsnMtgtnByBrkgLgtDstInvldPassdRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg3D7BusHiSpd_FordVehCllsnMtgtnByBrkgRelLatVelInvldFaildRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg3D7BusHiSpd_FordVehCllsnMtgtnByBrkgRelLatVelInvldPassdRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg3D7BusHiSpd_FordVehCllsnMtgtnByBrkgRelLgtVelInvldFaildRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg3D7BusHiSpd_FordVehCllsnMtgtnByBrkgRelLgtVelInvldPassdRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg3D7BusHiSpd_FordVehCllsnMtgtnByBrkgTiToCllsnInvldFaildRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg3D7BusHiSpd_FordVehCllsnMtgtnByBrkgTiToCllsnInvldPassdRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg3D7BusHiSpd_ImgProcrModlAVldMissRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg3D7BusHiSpd_LatDstRawVldFaildRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg3D7BusHiSpd_LgtDstRawVldFaildRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg3D7BusHiSpd_MissMsgFaildRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg3D7BusHiSpd_MissMsgPassdRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg3D7BusHiSpd_RelLatVelRawVldFaildRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg3D7BusHiSpd_RelLgtVelRawVldFaildRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg3D7BusHiSpd_TiToCllsnRawVldFaildRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg40ABusHiSpd_MissMsgFaildRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg40ABusHiSpd_MissMsgPassdRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg414BusHiSpd_AgOffsVldFaildRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg414BusHiSpd_AgOffsVldMissRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg414BusHiSpd_AgOffsVldPassdRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg414BusHiSpd_ChksVldFaildRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg414BusHiSpd_ChksVldMissRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg414BusHiSpd_CntrVldMissRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg415BusHiSpd_BrkModlLoQlyVldFaildRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg415BusHiSpd_BrkModlLoQlyVldMissRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg415BusHiSpd_BrkModlLoQlyVldPassdRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg415BusHiSpd_BrkModlVldFaildRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg415BusHiSpd_BrkModlVldMissRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg415BusHiSpd_BrkModlVldPassdRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg415BusHiSpd_BrkSprtVldMissRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg415BusHiSpd_BrkSprtVldPassdRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg415BusHiSpd_ChksBrkModlInvldFaildRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg415BusHiSpd_ChksBrkModlInvldPassdRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg415BusHiSpd_CntrBrkModlInvldFaildRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg415BusHiSpd_CntrBrkModlInvldPassdRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg415BusHiSpd_MissMsgFaildRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg415BusHiSpd_MissMsgPassdRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg415BusHiSpd_QlyFacBrkModlInvldFaildRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg415BusHiSpd_QlyFacBrkModlInvldPassdRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg41ABusHiSpd_MissMsgFaildRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg41ABusHiSpd_MissMsgPassdRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg41EBusHiSpd_FordVehSelDrvModChassisVldFaildRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg41EBusHiSpd_FordVehSelDrvModChassisVldMissRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg41EBusHiSpd_FordVehSelDrvModChassisVldPassdRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg41EBusHiSpd_InvldMsgFaildRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg41EBusHiSpd_InvldMsgPassdRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg41EBusHiSpd_MissMsgFaildRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg41EBusHiSpd_MissMsgPassdRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg430BusHiSpd_MissMsgFaildRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg430BusHiSpd_MissMsgPassdRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg443BusHiSpd_MissMsgFaildRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg443BusHiSpd_MissMsgPassdRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg459BusHiSpd_FordVehMsg459MissTmr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg459BusHiSpd_FordVehMsg459RxdTmr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg459BusHiSpd_FordVehTrlrAidTrackStFaildTmr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg459BusHiSpd_FordVehTrlrAidTrackStPassdTmr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg459BusHiSpd_FordVehTrlrHitchAgFaildTmr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg459BusHiSpd_FordVehTrlrHitchAgPassdTmr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg459BusHiSpd_FordVehTrlrHitchAgRateFaildTmr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg459BusHiSpd_FordVehTrlrHitchAgRatePassdTmr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg47ABusHiSpd_FordVehTrlrAidKnobBtnInvldFaildRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg47ABusHiSpd_FordVehTrlrAidKnobBtnInvldPassdRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg47ABusHiSpd_FordVehTrlrAidKnobPosnInvldFaildRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg47ABusHiSpd_FordVehTrlrAidKnobPosnInvldPassdRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg47ABusHiSpd_MissMsgFaildRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg47ABusHiSpd_MissMsgPassdRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg47ABusHiSpd_TrlrAidKnobBtnVldFaildRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg47ABusHiSpd_TrlrAidKnobBtnVldMissRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg47ABusHiSpd_TrlrAidKnobBtnVldPassdRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg47ABusHiSpd_TrlrAidKnobPosVldFaildRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg47ABusHiSpd_TrlrAidKnobPosVldMissRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg47ABusHiSpd_TrlrAidKnobPosVldPassdRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg4B0BusHiSpd_CanDtcInhbRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg4B0BusHiSpd_MsgFltNtcDiagcRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg4B0BusHiSpd_MsgFltRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg4B0BusHiSpd_MsgMissNtcDiagcRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg4B0BusHiSpd_MsgNoDataExistNtcDiagcRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg4B0BusHiSpd_MsgNoDataExistRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg4B0BusHiSpd_MsgNotRxdRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg4B0BusHiSpd_MsgRxdNtcDiagcRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg4B0BusHiSpd_MsgVldNtcDiagcRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg4B0BusHiSpd_MsgVldRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordVltgIf_FeatThdStsRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordVltgIf_HiVltgInhbRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordVltgIf_HiVltgNoAssiRcvrRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordVltgIf_HiVltgRcvrRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordVltgIf_HiVltgRcvrTiMaxRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordVltgIf_InhbBattVltgDiagcRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordVltgIf_LoVltgInhbRefTi1; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordVltgIf_LoVltgInhbRefTi2; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordVltgIf_LoVltgInhbRefTi3; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordVltgIf_LoVltgNoAssiRcvrRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordVltgIf_LoVltgRcvrRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordVltgIf_LoVltgRcvrTiMaxRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordVltgIf_LoVltgThdMidToLoRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordVltgIf_LoVltgThdMidToLoRefTmr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GateDrv0Ctrl_GateDrv0PhaOnTiSumAPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GateDrv0Ctrl_GateDrv0PhaOnTiSumBPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GateDrv0Ctrl_GateDrv0PhaOnTiSumCPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GateDrv0Ctrl_GateDrv0SpiTrsmErrCntr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GateDrv0Ctrl_dGateDrv0CtrlGateDrv0PhaOnTiSumAExp; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GateDrv0Ctrl_dGateDrv0CtrlGateDrv0PhaOnTiSumBExp; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GateDrv0Ctrl_dGateDrv0CtrlGateDrv0PhaOnTiSumCExp; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAg1Meas_HwAg1RawDataAvlStrtTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAg1Meas_dHwAg1MeasSnsr0CS; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAg1Meas_dHwAg1MeasSnsr0FRXD; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAg1Meas_dHwAg1MeasSnsr1CS; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAg1Meas_dHwAg1MeasSnsr1FRXD; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAgSnsrls_VehDynRefTmr1; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAgSnsrls_VehDynRefTmr2; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAgSnsrls_WhlSpdRefTmr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAgSysArbn_HwAgConfRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAgSysArbn_SlewElpdRefTmr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwTq10Meas_HwTq10DataPlsHiLim; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwTq10Meas_HwTq10DataPlsLoLim; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwTq10Meas_HwTq10SyncPlsHiLim; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwTq10Meas_HwTq10SyncPlsLoLim; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwTq10Meas_HwTq10TiStamp; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwTq10Meas_HwTq10TiStampPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwTq9Meas_HwTq9TiStamp; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwTq9Meas_HwTq9TiStampPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_ImcArbn_ImcEcuComStrtTiRef; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_ImcSigArbn_ArbnFltRefTiEnaLrng; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_ImcSigArbn_SysStRefTiEnaLrng; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotTqTranlDampg_TmrRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotVelCtrl_RefTiRampDwn; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_PolarityCfg_PolarityCfgSaved; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_PwrLimr_RefTmr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_PwrLimr_RefTmrPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_StackMeas_StackMeasApplCrc; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_SysFricLrng_RefTmrLrngConstr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_TmplMonr_AvrgElpdTiMicroSec; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(s15p16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAgCmp_MotAgCmpMotCtrlMotAgCumvAlgndMrfRevSVPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(s15p16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAgCmp_MotAgCmpMotCtrlMotAgMeclPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(s18p13, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotQuadDetn_MotAgCumvPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(s18p13, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotQuadDetn_dMotQuadDetnMotAgCumvDelta; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_CurrMeas_GainEolAvrgCntrPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_CurrMeas_MotCtrlNtc5DErrCntPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_CurrMeas_Ntc5DErrCnt2MilliSecPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_CurrMeas_OffsEolAvrgCntrPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_CurrMeas_PhaOnTiErrCntPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_GtmCfgAndUse_MissUpdCntr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_McuDiagc_FastLoopCntrPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_McuDiagc_LoopCntr2MilliSecStore; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_McuDiagc_LoopCntrPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_McuDiagc_dMcuDiagcFastLoopCntrMax; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_McuDiagc_dMcuDiagcFastLoopCntrMin; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_McuDiagc_dMcuDiagcLoopCntr2MilliSecMotCtrlDif; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(u0p16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAg5Meas_PrevMotAg5Mecl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(u0p16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAg6Meas_PrevMotAg6Mecl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(u0p16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAgCmp_MotAgCmpMotAgBackEmf; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAgSwCal_CoolDwnTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAgSwCal_HldTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(u3p13, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAgSwCal_MotAg2CosMeasAvrg; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(u3p13, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAgSwCal_MotAg2CosMeasRawCumv; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(u3p13, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAgSwCal_MotAg2CosMeasRawPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(u3p13, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAgSwCal_MotAg2SinMeasAvrg; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(u3p13, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAgSwCal_MotAg2SinMeasRawCumv; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(u3p13, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAgSwCal_MotAg2SinMeasRawPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(u3p13, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAgSwCal_MotAg5CosMeasAvrg; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(u3p13, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAgSwCal_MotAg5CosMeasRawCumv; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(u3p13, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAgSwCal_MotAg5CosMeasRawPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(u3p13, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAgSwCal_MotAg5SinMeasAvrg; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(u3p13, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAgSwCal_MotAg5SinMeasRawCumv; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(u3p13, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAgSwCal_MotAg5SinMeasRawPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(u3p13, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAgSwCal_MotAg6CosMeasAvrg; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(u3p13, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAgSwCal_MotAg6CosMeasRawCumv; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(u3p13, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAgSwCal_MotAg6CosMeasRawPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(u3p13, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAgSwCal_MotAg6SinMeasAvrg; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(u3p13, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAgSwCal_MotAg6SinMeasRawCumv; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(u3p13, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAgSwCal_MotAg6SinMeasRawPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(u0p16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAgSwCal_PosnStepSize; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotRplCoggCmd_dMotRplCoggCmdCoggIdx; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(u0p16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotVel_dMotVelMotAgRef; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_Uart0CfgAndUse_PrevDmaTrfCnt; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_Uart1CfgAndUse_PrevDmaTrfCnt; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CmnMfgSrv_PerCyc; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CmnMfgSrv_PerDivdr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CmnMfgSrv_ReqLen; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_DiagcMgr_DtcEnaSts; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(u9p7, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_DutyCycThermProtn_dDutyCycThermProtnLstTblVal; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(u9p7, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_DutyCycThermProtn_dDutyCycThermProtnLstTblValSlew; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(u3p13, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_DutyCycThermProtn_dDutyCycThermProtnMplr1; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(u3p13, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_DutyCycThermProtn_dDutyCycThermProtnMplr2; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(u3p13, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_DutyCycThermProtn_dDutyCycThermProtnMplr3; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(u3p13, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_DutyCycThermProtn_dDutyCycThermProtnMplr4; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(u3p13, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_DutyCycThermProtn_dDutyCycThermProtnMplr5; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(u3p13, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_DutyCycThermProtn_dDutyCycThermProtnMplr6; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg077BusHiSpd_FordVehLatACmpdRawPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg077BusHiSpd_FordVehLgtACmpdRawPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg077BusHiSpd_FordVehSpdOverGndRawPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg077BusHiSpd_FordVehYawRateCmpdRawPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg07DBusHiSpd_FordVehActBrkTqRawPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg07DBusHiSpd_FordVehVertACmpdRawPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg091BusHiSpd_FordVehYawRateRawPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg167BusHiSpd_FordVehPrpnWhlTqRawPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg202BusHiSpd_FordVehSpdEngModlRawPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg217BusHiSpd_FordVehFrntLeWhlSpdRawPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg217BusHiSpd_FordVehFrntRiWhlSpdRawPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg217BusHiSpd_FordVehReLeWhlSpdRawPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg217BusHiSpd_FordVehReRiWhlSpdRawPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg3CABusHiSpd_FordVehLaneKeepSysCrvtRawPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg3CABusHiSpd_FordVehLaneKeepSysReqdAgRawPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg3D3BusHiSpd_FordVehLatCtrlCrvtRateRawPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg3D3BusHiSpd_FordVehLatCtrlCrvtRawPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg3D3BusHiSpd_FordVehLatCtrlPahOffsRawPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg3D3BusHiSpd_FordVehLatCtrlPahRawPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg3D7BusHiSpd_FordVehCllsnMtgtnByBrkgLatDstRawPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg3D7BusHiSpd_FordVehCllsnMtgtnByBrkgLgtDstRawPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg3D7BusHiSpd_FordVehCllsnMtgtnByBrkgRelLatVelRawPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg3D7BusHiSpd_FordVehCllsnMtgtnByBrkgRelLgtVelRawPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg414BusHiSpd_FordVehSteerPinionAgOffsRawPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg415BusHiSpd_FordVehSpdBrkModlRawPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg41ABusHiSpd_FordVehOutdAirTRawPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg459BusHiSpd_FordVehTrlrAidHitchAgPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg459BusHiSpd_FordVehTrlrAidHitchAgRatePrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg47ABusHiSpd_FordVehTrlrAidKnobPosnPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg4B0BusHiSpd_FordVehYawStabyRawPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordVehSpdArbn_FordVehTireCircum; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GateDrv0Ctrl_GateDrv0Diag0Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GateDrv0Ctrl_GateDrv0Diag1Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GateDrv0Ctrl_GateDrv0Diag2Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GateDrv0Ctrl_GateDrv0StsVal; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GateDrv0Ctrl_GateDrv0VrfyRes0Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GateDrv0Ctrl_GateDrv0VrfyRes1Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GateDrv0Ctrl_dGateDrv0CtrlGateDrv0Diag0Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GateDrv0Ctrl_dGateDrv0CtrlGateDrv0Diag1Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GateDrv0Ctrl_dGateDrv0CtrlGateDrv0Diag2Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GateDrv0Ctrl_dGateDrv0CtrlGateDrv0StsVal; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GateDrv0Ctrl_dGateDrv0CtrlGateDrv0VrfyRes0Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GateDrv0Ctrl_dGateDrv0CtrlGateDrv0VrfyRes1Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAg1Meas_PrevHwAg1Snsr0Raw; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAg1Meas_PrevHwAg1Snsr1Raw; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(u0p16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotAgCorrln_MotAgCorrlnErrThd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_PwrDiscnct_PwrDiscnctFltAtInitErrAcc; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_PwrSply_SpiTrsmErrCntr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_SysStMod_dSysStModTranVect; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_TmplMonr_TrsmErrCntr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(u5p11, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_VehSpdLimr_dVehSpdLimrLimTerm; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(u5p11, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_VehSpdLimr_dVehSpdLimrZeroVehSpd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_Adcf1CfgAndUse_Adcf1DiagcEndPtr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_Adcf1CfgAndUse_Adcf1DiagcStrtPtr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_BattVltgCorrln_dBattVltgCorrlnBattVltgRngOk; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_BattVltgCorrln_dBattVltgCorrlnBattVltgSwd1RngOk; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(SigQlfr1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_BattVltgCorrln_dBattVltgCorrlnNtc0x03CQlfrSts; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(SigQlfr1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_BattVltgCorrln_dBattVltgCorrlnNtc0x044QlfrSts; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_Adcf0CfgAndUse_Adcf0DiagcEndPtr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_Adcf0CfgAndUse_Adcf0DiagcStrtPtr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_CoreVltgMonr_CoreVltgMonrStrtUpFltPrmByte; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_CurrMeas_EolGainSts; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_CurrMeas_EolGainTranCntrPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_CurrMeas_EolOffsSts; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_CurrMeas_EolOffsTranCntrPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(MotCurrEolCalSt2, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_CurrMeas_MotCurrEolCalStPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_CurrMeas_MotCurrRollgCnt1Prev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_CurrMeasArbn_CurrMeasArbnSens0RollgCntPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_CurrMeasArbn_CurrMeasArbnSens0StallCntPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_CurrMeasArbn_CurrMeasArbnSens1RollgCntPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_CurrMeasArbn_CurrMeasArbnSens1StallCntPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_GtmCfgAndUse_MissUpdIninCntr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_HwTq1Meas_HwTq1ComStsErrCntr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_HwTq1Meas_HwTq1IntSnsrErrCntr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_HwTq1Meas_HwTq1MeasPrevRollgCntr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_HwTq1Meas_RackLimrEot1Data0; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_HwTq1Meas_RackLimrEot1Data1; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_HwTq1Meas_RackLimrEot1Data2; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_HwTq8Meas_HwTq8ComStsErrCntr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_HwTq8Meas_HwTq8IntSnsrErrCntr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_HwTq8Meas_HwTq8PrevRollgCntr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_HwTq8Meas_RackLimrEot8Data0; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_HwTq8Meas_RackLimrEot8Data1; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_HwTq8Meas_RackLimrEot8Data2; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_McuDiagc_FastLoopCntrDiagcCfgd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAg5Meas_MotAg5PrevRollgCntr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAg6Meas_MotAg6PrevRollgCntr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAgArbn_MotAgARollgCntPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAgArbn_MotAgAStallCntPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAgArbn_MotAgBRollgCntPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAgArbn_MotAgBStallCntPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAgCmp_CmpEnaCntr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAgSwCal_BoostTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAgSwCal_ElecRevCnt; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAgSwCal_MotAg2CosAdcFaildCntr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAgSwCal_MotAg2SinAdcFaildCntr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAgSwCal_MotAg5CosAdcFaildCntr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAgSwCal_MotAg5SinAdcFaildCntr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAgSwCal_MotAg6CosAdcFaildCntr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAgSwCal_MotAg6SinAdcFaildCntr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAgSwCal_Ramp1Ti; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAgSwCal_Ramp2Ti; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAgSwCal_Ramp3Ti; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAgSwCal_SampleIdx; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAgSwCal_SwCalStepDir; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotVel_MotAgBufIdxPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotVel_MotAgBufIdxPrim; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotVel_MotVelIninCntr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_RamMem_GlbRamEccSngBitCntr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_RamMem_LclRamEccSngBitCntr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_Uart0CfgAndUse_Uart0100MilliSecReadCmpl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_Uart0CfgAndUse_Uart010MilliSecReadCmpl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_Uart0CfgAndUse_Uart0NrOfPnd100MilliSecFrmCnt; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_Uart0CfgAndUse_Uart0NrOfPnd10MilliSecFrmCnt; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_Uart0CfgAndUse_Uart0RxPrevLoopDataUnread; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_Uart1CfgAndUse_Uart1100MilliSecReadCmpl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_Uart1CfgAndUse_Uart110MilliSecReadCmpl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_Uart1CfgAndUse_Uart1NrOfPnd100MilliSecFrmCnt; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_Uart1CfgAndUse_Uart1NrOfPnd10MilliSecFrmCnt; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_Uart1CfgAndUse_Uart1RxPrevLoopDataUnread; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CmnMfgSrv_NxtrMfgEnaCntr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CmnMfgSrv_PerPidTblLen; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CmnMfgSrv_SecuAcsAtmptCntr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CmnMfgSrv_SessionCurr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CurrMeasCorrln_Snsr0RollgCntPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CurrMeasCorrln_Snsr0StallCntPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CustDiag_ClrDiagcReq; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CustDiag_DidEE01; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CustDiag_DidEE02; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CustDiag_DidEE41; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CustDiag_DidEED0; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CustDiag_DidF162; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CustDiag_DidF163; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CustDiag_EcuId; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(BswM_BswMEcuResetMod, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CustDiag_EcuResetMode; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CustDiag_EolByteNTCPara; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CustDiag_ReqDelayCnt; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CustDiag_RstReq; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CustDiag_RstStrt; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CustDiag_RtnDC00Req; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_DiagcMgr_ClrDiagcFlg; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_DiagcMgr_PrevClrDtcFlg; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_DiagcMgrProxyAppl10_PrevClrNtcFlg10; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_DualEcuIdn_EcuIdInt; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_DualEcuIdn_SecdryEcuIdnReqTiOutCntr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_DutyCycThermProtn_FetMtgtnEnaCalIdx; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_DutyCycThermProtn_Fil3ValPwrUp; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_DutyCycThermProtn_Fil4ValPwrUp; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_DutyCycThermProtn_Fil5ValPwrUp; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_DutyCycThermProtn_Fil6ValPwrUp; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_EotProtn_NewSoftEndStopSt; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_EotProtn_PrevSoftEndStopSt; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_EotProtnFwl_dEotProtnFwlEotActvCmdMod; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_EotProtnFwl_dEotProtnFwlEotDampgMod; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FordEpsLifeCycMod1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordCanDtcInhb_FordReqdEpsLifeCycModPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordDualEcuFltDiagcCom_FordCTCLoopIdx; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ford_StePinCompAnEst_D_Qf, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordHwAgArbn_FordCmpdHwPosnQlyFacPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ford_StePinOffst_D_Stat, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordHwAgArbn_FordSteerPinionOffsStsPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMotTqCmdOvrlLimr_ActvNiblCtrlLoFrqFlt; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMotTqCmdOvrlLimr_ActvNiblCtrlLoFrqSt; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMotTqCmdOvrlLimr_LaneDprtrWarnLoFrqFlt; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMotTqCmdOvrlLimr_LaneDprtrWarnLoFrqSt; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg07DBusHiSpd_ClrDiagcFlgProxyPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg07EBusHiSpd_SteerPinionAgCntrPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg083BusHiSpd_ClrDiagcFlgProxyPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ford_TurnLghtSwtch_D_Stat, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg083BusHiSpd_FordVehTurnSigSwtStsRawPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg091BusHiSpd_ClrDiagcFlgProxyPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg167BusHiSpd_ClrDiagcFlgProxyPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ford_ElPw_D_StatStrtStop, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg167BusHiSpd_FordVehElecPwrStrtStopStsPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ford_ElPw_D_Stat, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg167BusHiSpd_FordVehElecPwrStsPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ford_PwPckTq_D_Stat, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg167BusHiSpd_FordVehPwrpkTqStsPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg202BusHiSpd_ClrDiagcFlgProxyPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ford_GearRvrse_D_Actl, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg202BusHiSpd_FordVehGearRvsStsPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg202BusHiSpd_FordVehGearRvsStsRawPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg202BusHiSpd_FordVehSpdChksEngModlPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg202BusHiSpd_FordVehSpdCntrEngModlPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ford_VehVActlEng_D_Qf, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg202BusHiSpd_FordVehSpdQlyFacEngModlPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg202BusHiSpd_FordVehTrlrAidAvlRawPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg213BusHiSpd_ClrDiagcFlgProxyPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg213BusHiSpd_FordVehAbsActvPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg213BusHiSpd_FordVehCllsnMtgtnByBrkgDeniedPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg213BusHiSpd_FordVehCllsnMtgtnByBrkgDisadPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg213BusHiSpd_FordVehEscActvPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg215BusHiSpd_ClrDiagcFlgProxyPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ford_TrlrAidMde_D_Rq, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg215BusHiSpd_FordVehTrlrAidModReqPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg216BusHiSpd_ClrDiagcFlgProxyPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FordVehWhlDirRaw1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg216BusHiSpd_FordVehFrntLeWhlDirRawPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg216BusHiSpd_FordVehFrntLeWhlRollgCntrPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FordVehWhlDirRaw1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg216BusHiSpd_FordVehFrntRiWhlDirRawPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg216BusHiSpd_FordVehFrntRiWhlRollgCntrPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FordVehWhlDirRaw1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg216BusHiSpd_FordVehReLeWhlDirRawPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg216BusHiSpd_FordVehReLeWhlRollgCntrPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FordVehWhlDirRaw1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg216BusHiSpd_FordVehReRiWhlDirRawPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg216BusHiSpd_FordVehReRiWhlRollgCntrPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg217BusHiSpd_ClrDiagcFlgProxyPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg230BusHiSpd_ClrDiagcFlgProxyPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ford_GearLvrPos_D_Actl, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg230BusHiSpd_FordVehGearLvrPosnPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg2FDBusHiSpd_ClrDiagcFlgProxyPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg2FDBusHiSpd_FordVehEvasSteerAssiReqPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg3B3BusHiSpd_ClrDiagcFlgProxyPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ford_Ignition_Status, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg3B3BusHiSpd_FordVehIgnStsPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ford_LifeCycMde_D_Actl, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg3B3BusHiSpd_FordVehLifeCycModPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg3CABusHiSpd_ClrDiagcFlgProxyPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg3CABusHiSpd_FordVehLaneDetnWarnIntenPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg3CABusHiSpd_FordVehLaneDetnWarnStsPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg3CABusHiSpd_FordVehLaneKeepSysRampTypPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg3CABusHiSpd_FordVehLaneKeepSysStsPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg3D3BusHiSpd_ClrDiagcFlgProxyPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ford_LatCtlPrecision_D_Rq, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg3D3BusHiSpd_FordVehLatCtrlPrcsnPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ford_LatCtlRampType_D_Rq, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg3D3BusHiSpd_FordVehLatCtrlRampTypPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ford_LatCtl_D_Rq, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg3D3BusHiSpd_FordVehLatCtrlReqPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg3D3BusHiSpd_FordVehLatCtrlRingMaxPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg3D7BusHiSpd_ClrDiagcFlgProxyPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg3D7BusHiSpd_FordVehCllsnMtgtnByBrkgObjDataConfLvlRawPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg3D7BusHiSpd_FordVehCllsnMtgtnByBrkgObjTypClassnRawPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg3D7BusHiSpd_FordVehCllsnMtgtnByBrkgTiToCllsnRawPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg3D7BusHiSpd_FordVehEvasSteerAssiEnadReqRawPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg40ABusHiSpd_FordClrDiagcFlgProxyPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg414BusHiSpd_FordVehSteerPinionOffsChksPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg414BusHiSpd_FordVehSteerPinionOffsCntPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ford_StePinOffst_D_Stat, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg414BusHiSpd_FordVehSteerPinionOffsStsPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg414BusHiSpd_FordVehSteerPinionOffsStsRawPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg415BusHiSpd_ClrDiagcFlgProxyPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ford_LsmcBrkDecel_D_Stat, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg415BusHiSpd_FordVehLoSpdMtnCtrlBrkSprtStsPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg415BusHiSpd_FordVehLoSpdMtnCtrlBrkSprtStsRawPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg415BusHiSpd_FordVehSpdChksBrkModlPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg415BusHiSpd_FordVehSpdCntrBrkModlPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ford_VehVActlBrk_D_Qf, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg415BusHiSpd_FordVehSpdQlyFacBrkModlPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg41ABusHiSpd_ClrDiagcFlgProxyPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg41EBusHiSpd_ClrDiagcFlgProxyPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ford_SelDrvMdeChassis2_D_Rq, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg41EBusHiSpd_FordVehPenSelDrvModPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg430BusHiSpd_ClrDiagcFlgProxyPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg443BusHiSpd_ClrDiagcFlgProxyPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg459BusHiSpd_ClrDiagcFlgProxyPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg459BusHiSpd_FordVehTrlrAidAcqStsPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg459BusHiSpd_FordVehTrlrAidGuidcRevsStsPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg459BusHiSpd_FordVehTrlrAidIdnValPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg459BusHiSpd_FordVehTrlrAidTrackStPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg459BusHiSpd_FordVehTrlrBallToAxlePrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg47ABusHiSpd_ClrDiagcFlgProxyPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ford_TrlrAidSwtch_D_RqDrv, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg47ABusHiSpd_FordVehTrlrAidKnobBtnPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg4B0BusHiSpd_ClrDiagcFlgProxyPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg5B5BusHiSpd_PwrSteerCtrlModlArNmCtrlPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg5B5BusHiSpd_PwrSteerCtrlModlArNmNodIdnPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg5B5BusHiSpd_PwrSteerCtrlModlArNmResd1Prev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg5B5BusHiSpd_PwrSteerCtrlModlArNmResd2Prev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg5B5BusHiSpd_PwrSteerCtrlModlArNmResd3Prev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg5B5BusHiSpd_PwrSteerCtrlModlArNmResd4Prev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg5B5BusHiSpd_PwrSteerCtrlModlGatewyNmOnBdTestPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg5B5BusHiSpd_PwrSteerCtrlModlGatewyNmProxyPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ford_EPAS_Failure, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordSysSt_FordEpsFailrPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FordEpsSysSt1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordSysSt_FordEpsSysStPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ford_SteMdule_D_Stat, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordSysSt_FordSteerModlStsPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordVltgIf_HiToLoChk; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordVltgIf_HiToMidChk; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordVltgIf_LoToHiChk; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordVltgIf_LoToMidChk; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordVltgIf_MidToHiChk; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordVltgIf_MidToLoChk; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GateDrv0Ctrl_GateDrv0CfgCnt; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GateDrv0Ctrl_GateDrv0OffStChkIdx; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GateDrv0Ctrl_GateDrv0OffStCnt; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GateDrv0Ctrl_GateDrv0St; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GateDrv0Ctrl_Ivtr0BootstrpSplyFltPrmVal; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GateDrv0Ctrl_Ivtr0GenericFltPrmVal; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(IvtrFetFltPha1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GateDrv0Ctrl_IvtrFetFltPhaDataStore; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(IvtrFetFltTyp1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GateDrv0Ctrl_IvtrFetFltTypDataStore; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GateDrv0Ctrl_dGateDrv0CtrlGateDrv0OffsStVrfyPrmBitIdx; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HiLoadStallLimr_FetLoaMtgtnCalIdx; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAg1Meas_HwAg1PrevRollCnt; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAg1Meas_HwAg1PrevStepSeqNr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAg1Meas_HwAg1Snsr0ComStsErrCntr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAg1Meas_HwAg1Snsr0IdErrCntr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAg1Meas_HwAg1Snsr0IntSnsrErrCntr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAg1Meas_HwAg1Snsr0NoMsgErrCntr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAg1Meas_HwAg1Snsr1ComStsErrCntr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAg1Meas_HwAg1Snsr1IdErrCntr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAg1Meas_HwAg1Snsr1IntSnsrErrCntr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAg1Meas_HwAg1Snsr1NoMsgErrCntr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAg1Meas_HwAg1SnsrTrigNr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(SigQlfr1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAg1Meas_PrevHwAg1Qlfr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAg1Meas_PrevHwAg1Snsr0TestOk; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAg1Meas_PrevHwAg1Snsr1TestOk; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAgArbn_HwAgARollgCntrPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAgArbn_HwAgAStallCntrPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAgCorrln_HwAgARollgCntPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAgCorrln_HwAgAStallCntPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(SelnCaseSt1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAgSnsrls_SelnCaseSt; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwTq10Meas_HwTq10RollgCntrPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwTq9Meas_HwTq9RollgCntrPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwTqArbn_HwTqARollgCntrPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwTqArbn_HwTqAStallCntrPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwTqArbn_HwTqBRollgCntrPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwTqArbn_HwTqBStallCntrPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwTqArbn_HwTqCRollgCntrPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwTqArbn_HwTqCStallCntrPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwTqArbn_HwTqDRollgCntrPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwTqArbn_HwTqDStallCntrPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwTqCorrln_HwTqARollgCntrPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwTqCorrln_HwTqAStallCntrPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwTqCorrln_HwTqBRollgCntrPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwTqCorrln_HwTqBStallCntrPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwTqCorrln_HwTqCRollgCntrPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwTqCorrln_HwTqCStallCntrPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwTqCorrln_HwTqDRollgCntrPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwTqCorrln_HwTqDStallCntrPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwTqCorrln_dHwTqCorrlnAvl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwTqCorrln_dHwTqCorrlnImdtCorrlnSts; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_LoaMgr_PrevCurrMeasIdptSigResp; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_LoaMgr_PrevCurrMeasIdptSigVal; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_LoaMgr_PrevHwTqIdptSigResp; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_LoaMgr_PrevHwTqIdptSigVal; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_LoaMgr_PrevIvtrIdptSigResp; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_LoaMgr_PrevIvtrIdptSigVal; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_LoaMgr_PrevMotAgMeclIdptSigResp; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_LoaMgr_PrevMotAgMeclIdptSigVal; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_LoaMgr_PrevVltgModSrc; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotAg2Meas_MotAg2MeclRollgCntrPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotAgCorrln_MotAgCorrlnMotAgARollgCntPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotAgCorrln_MotAgCorrlnMotAgAStallCntPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotAgCorrln_MotAgCorrlnMotAgBRollgCntPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotAgCorrln_MotAgCorrlnMotAgBStallCntPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotAgCorrln_MotAgCorrlnMotAgCRollgCntPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotAgCorrln_MotAgCorrlnMotAgCStallCntPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotRefMdl_dMotRefMdlMinCurrNrItrn; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotRefMdl_dMotRefMdlPeakTqNrItrn; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(LoaSt1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotTqTranlDampg_LoaStPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_PwrDiscnct_Ntc042PrmByte; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(PwrDiscnctSts1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_PwrDiscnct_PwrDiscnctSt; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_PwrUpSeq_PwrTurnOffCtrlPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_StOutpCtrl_StOutpCtrlPrevSrc; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(SysFricLrngOperMod1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_SysFricLrng_FricLrngOperModPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(SysSt1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_SysStMod_SysStModPrevSysSt; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_TEstimn_TEstimnFltMtgtnCalIdx; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_TmplMonr_TmplMonrIninCntr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_TmplMonr_TmplMonrNtc40PrmByte; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_TmplMonr_TmplMonrWdgRstrtCnt; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_TmplMonr_TrsmErrNtcThd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_TunSelnMngt_PrevActvIninIdx; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_TunSelnMngt_PrevActvRtIdx; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_TunSelnMngt_PrevRamPageAcs; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_TunSelnMngt_RamTblSwt; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(sint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAgSysArbn_PrevSrcSeln; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(sint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotQuadDetn_MotDirInstsPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(sint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotQuadDetn_MotTqCmdSignPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(sint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotQuadDetn_dMotQuadDetnTqCmdSign; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_BattVltgCorrln_dBattVltgCorrlnBattVltgAndSwd1Ok; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_CoreVltgMonr_dCoreVltgMonrStrtUpTestCmpl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_CurrMeas_MotCurrEolOffsProcFlg; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_CurrMeas_WrmIninTestCmplPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_EcmOutpAndDiagc_dEcmVrfyErrOutpCtrlCmpl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_EcmOutpAndDiagc_dEcmVrfyIntrptGennCmpl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_FlsMem_CodFlsSngBitErr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_FlsMem_CrcChkCmpl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_FlsMem_PwrOnRstCrcChkCmpl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_FlsMem_dFlsMemVrfyCrcInitCmpl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_FordBlaBoxIfCmp1_PullDriftCmpFctCallSel; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_FordBlaBoxIfCmp1_TrlrBackAssiFctCallSel; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_FordBlaBoxIfCmp2_EvasSteerAssiFctCallTog; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_GtmCfgAndUse_PhaAFetFldSts; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_GtmCfgAndUse_PhaBFetFldSts; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_GtmCfgAndUse_PhaCFetFldSts; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_GtmCfgAndUse_SysStEnaPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_HwTq1Meas_RackLimrEot1Avl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_HwTq1Meas_RackLimrEot1Id2DataReadCmpl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_HwTq1Meas_RackLimrEot1Id3DataReadCmpl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_HwTq1Meas_RackLimrEot1Id4DataReadCmpl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_HwTq8Meas_RackLimrEot8Avl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_HwTq8Meas_RackLimrEot8Id2DataReadCmpl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_HwTq8Meas_RackLimrEot8Id3DataReadCmpl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_HwTq8Meas_RackLimrEot8Id4DataReadCmpl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_McuCoreCfgAndDiagc_dMcuCoreCfgAndDiagcBistRunCmpl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAg5Meas_MotAg5NvmFltEna; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAg6Meas_MotAg6NvmFltEna; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAgArbn_dMotAgArbnAAvl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAgArbn_dMotAgArbnBAvl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAgSwCal_SampleRdyFlg; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAgSwCal_SwCalEna; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_NvMProxy_NvmStsCollctd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_RamMem_GlbRamEccSngBitSoftFailr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_RamMem_LclRamEccSngBitSoftFailr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CmnMfgSrv_DiAssiMechTEstimn; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CmnMfgSrv_DiDampg; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CmnMfgSrv_DiDutyCycThermProtn; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CmnMfgSrv_DiEotProtn; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CmnMfgSrv_DiHysCmp; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CmnMfgSrv_DiInertiaCmp; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CmnMfgSrv_DiLoaSca; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CmnMfgSrv_DiPullCmpActvCmd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CmnMfgSrv_DiPullCmpActvLrng; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CmnMfgSrv_DiRtn; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CmnMfgSrv_DiStallMotTqLim; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CmnMfgSrv_DiSysFricLrng; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CmnMfgSrv_DiSysMotTqCmdRampRate; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CmnMfgSrv_MfgDiagcInhb; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CmnMfgSrv_PerRunng; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CmnMfgSrv_SecuAcsSeedReqCmpl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CmnMfgSrv_SecuAcsUnlckd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CmnMfgSrv_SysStReqEnaOvrd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CurrMeasCorrln_LongTermCorrlnStsABC; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CustDiag_Did630FChk; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CustDiag_Rtn0202Strt; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_DualCtrlrOutpMgr_FltLrngEnaPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_DualCtrlrOutpMgr_FltStsPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_DualCtrlrOutpMgr_LtchImcDualEcuMotCtrlMtgtnEnaPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_DualCtrlrOutpMgr_LtchSysStPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_DualCtrlrOutpMgr_MaxOutpTmrCmpl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_DualCtrlrOutpMgr_NonRecFltEnaPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_DualCtrlrOutpMgr_PrevLtch; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_DualCtrlrOutpMgr_PrevLtchNonRecFlt; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_DualCtrlrOutpMgr_SysStLrngEnaPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_DualEcuIdn_EcuIdnEvlnCmpl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_DutyCycThermProtn_FetLoaMtgtnEnaPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_DutyCycThermProtn_ReInitCntrFlg; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_EotLrng_HwAgOverTrvlCntrNegDi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_EotLrng_HwAgOverTrvlCntrPosDi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_EotLrng_RstLimReq; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_EotProtn_PrevRackTrvlLimrEna; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_EotProtn_PrevRackTrvlLimrInin; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_EotProtn_dEotProtnDetd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_EotProtn_dEotProtnRackTrvlLimrDi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_EotProtnFwl_dEotProtnFwlEotActvCmdOverActvLim; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_EotProtnFwl_dEotProtnFwlEotActvCmdOverInactvLim; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_EotProtnFwl_dEotProtnFwlEotDampgOverActvLim; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_EotProtnFwl_dEotProtnFwlEotDampgOverInactvLim; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_EotProtnFwl_dEotProtnFwlPinionAgConfSts; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordCanDtcInhb_EpsLifeCycModPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordHwAgArbn_FirstTranVldFlg; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordHwAgArbn_NoDataExistFlg; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordHwAgArbn_NonAbsOffsVldFlg; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordHwAgArbn_RelHwPosnVld; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordHwAgArbn_RelPosnLossFlg; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordHwTqCmdOvrlLimr_LimrDftVehSpd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMotTqCmdOvrlLimr_ActvNiblCtrlLoFrqTmrFlgVari; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMotTqCmdOvrlLimr_LaneDprtrWarnLoFrqTmrFlgVari; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMotTqCmdOvrlLimr_LimrDftVehSpd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg077BusHiSpd_DiagcClrProxyFlgPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg077BusHiSpd_FirstTranVldFlg; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg077BusHiSpd_FordVehLatACmpdVldPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg077BusHiSpd_FordVehLgtACmpdVldPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg077BusHiSpd_FordVehMsg77Miss; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg077BusHiSpd_FordVehSpdOverGndVldPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg077BusHiSpd_FordVehYawRateCmpdVldPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg07DBusHiSpd_FirstTranVldFlg; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg07DBusHiSpd_FordVehBrkTqVldPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg07DBusHiSpd_FordVehMsg07DMiss; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg07DBusHiSpd_FordVehVertAVldPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg083BusHiSpd_FirstTranVldFlg; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg083BusHiSpd_FordVehMsg083Miss; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg083BusHiSpd_FordVehTurnSigVldPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg091BusHiSpd_FirstTranVldFlg; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg091BusHiSpd_FordVehMsg091Miss; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg091BusHiSpd_FordVehYawRateRawVldPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg167BusHiSpd_FirstTranVldFlg; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg167BusHiSpd_FordVehMsg167Miss; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg167BusHiSpd_FordVehMsg167Rxd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg167BusHiSpd_FordVehPrpnWhlTqVldPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg202BusHiSpd_FirstTranVldFlg; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg202BusHiSpd_FordVehGearRvsStsVldPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg202BusHiSpd_FordVehMsg202Miss; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg202BusHiSpd_FordVehMsg202Rxd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg202BusHiSpd_FordVehSpdEngModLoQlyVldPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg202BusHiSpd_FordVehSpdEngModlVldPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ford_VehVTrlrAid_B_Avail, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg202BusHiSpd_FordVehTrlrAidAvlPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg202BusHiSpd_FordVehTrlrBackupAssiAvlVldPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg213BusHiSpd_FirstTranVldFlg; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg213BusHiSpd_FordVehAbsEscStsVldPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg213BusHiSpd_FordVehMsg213Miss; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg215BusHiSpd_FirstTranVldFlg; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg215BusHiSpd_FordVehMsg215Miss; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg215BusHiSpd_FordVehTrlrAidModReqVldPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg216BusHiSpd_FirstTranVldFlg; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg216BusHiSpd_FordVehFrntLeWhlCntrDirVldPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg216BusHiSpd_FordVehFrntRiWhlCntrDirVldPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg216BusHiSpd_FordVehMsg064Miss; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg216BusHiSpd_FordVehReLeWhlCntrDirVldPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg216BusHiSpd_FordVehReRiWhlCntrDirVldPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg217BusHiSpd_FordVehFrntLeWhlSpdVldPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg217BusHiSpd_FordVehFrntRiWhlSpdVldPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg217BusHiSpd_FordVehMsg217Miss; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg217BusHiSpd_FordVehMsg217Rxd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg217BusHiSpd_FordVehReLeWhlSpdVldPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg217BusHiSpd_FordVehReRiWhlSpdVldPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg230BusHiSpd_FirstTranVldFlg; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg230BusHiSpd_FordVehGearLvrPosnVldIntPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg230BusHiSpd_FordVehMsg230Miss; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg2FDBusHiSpd_FirstTranVldFlg; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg2FDBusHiSpd_FordVehEvasSteerAssiReqVldPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg2FDBusHiSpd_FordVehMsg2FDMiss; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg3B3BusHiSpd_FirstTranVldFlg; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg3B3BusHiSpd_FordVehIgnStsVldPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg3B3BusHiSpd_FordVehMsg3B3Miss; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg3B3BusHiSpd_FordVehMsg3B3Rxd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg3CABusHiSpd_FirstTranVldFlg; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg3CABusHiSpd_FordVehLaneAssiImgProcgModlAVldPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg3CABusHiSpd_FordVehMsg3CAMiss; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg3D3BusHiSpd_FirstTranVldFlg; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ford_HandsOffCnfm_B_Rq, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg3D3BusHiSpd_FordVehLatCtrlHandsOffDetnTqStimlsReqPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg3D3BusHiSpd_FordVehLatCtrlImgProcrModlAVldPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg3D3BusHiSpd_FordVehMsg3D3Miss; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg3D7BusHiSpd_FirstTranVldFlg; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg3D7BusHiSpd_FordVehEvasSteerAssiImgProcrModlAVldPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg3D7BusHiSpd_FordVehMsg3D7Miss; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg40ABusHiSpd_FordVehMsg40AMiss; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg40ABusHiSpd_FordVehMsg40ARxd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg414BusHiSpd_FirstTranVldFlg; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg414BusHiSpd_FordVehMsg414Miss; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg414BusHiSpd_FordVehSteerPinionAgOffsVldPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg414BusHiSpd_FordVehSteerPinionChksVldPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg414BusHiSpd_FordVehSteerPinionCntrVldPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg415BusHiSpd_FirstTranVldFlg; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg415BusHiSpd_FordVehLoSpdMtnCtrlBrkSprtVldFlg; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg415BusHiSpd_FordVehLoSpdMtnCtrlBrkSprtVldPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg415BusHiSpd_FordVehMsg415Miss; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg415BusHiSpd_FordVehMsg415Rxd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg415BusHiSpd_FordVehSpdBrkModlLoQlyVldPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg415BusHiSpd_FordVehSpdBrkModlVldPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg41ABusHiSpd_FordVehMsg41AMiss; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg41EBusHiSpd_FirstTranVldFlg; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg41EBusHiSpd_FordVehMsg41EMiss; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg41EBusHiSpd_FordVehSelDrvModChassisVldPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg430BusHiSpd_FordVehMsg430Miss; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg430BusHiSpd_FordVehMsg430Rxd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg443BusHiSpd_FordVehMsg443Miss; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ford_TrlrLampCnnct_B_Actl, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg443BusHiSpd_FordVehTrlrLampCnctnStsRawPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg459BusHiSpd_FirstTranVldFlg; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg459BusHiSpd_FordVehMsg459Miss; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg459BusHiSpd_FordVehTrlrHitchAgVldPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg459BusHiSpd_FordVehTrlrHitchRateVldPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg459BusHiSpd_FordVehTrlrTarVldPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg459BusHiSpd_FordVehTrlrTrackStVldPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg459BusHiSpd_TrlrAidStsThreePrsntIntPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg47ABusHiSpd_FirstTranTrlrAidKnobBtnVldFlg; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg47ABusHiSpd_FirstTranTrlrAidKnobPosVldFlg; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg47ABusHiSpd_FordVehMsg47Miss; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg47ABusHiSpd_FordVehMsg47Rxd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg47ABusHiSpd_TrlrAidKnobBtnVldPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg47ABusHiSpd_TrlrAidKnobPosVldPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg4B0BusHiSpd_FordMsg4B0Miss; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg4B0BusHiSpd_FordVehYawStabyVldPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg4B0BusHiSpd_IniVehYawStabyInvld; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordSysSt_SysStReqEnaPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GateDrv0Ctrl_GateDrv0CfgSecAtmpt; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GateDrv0Ctrl_GateDrv0OffStChkSecAtmpt; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GateDrv0Ctrl_GateDrv0SpiErrSecAtmpt; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GateDrv0Ctrl_Ivtr0InactvSts; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GateDrv0Ctrl_Ivtr0OffStChkCmpl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAg1Meas_HwAg1IfFltLtch; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAg1Meas_HwAg1InitStepSeqNrCmpl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAg1Meas_HwAg1LtchClr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAgArbn_dHwAgArbnAgAAvl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAgCorrln_dHwAgCorrlnAgAAvl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAgSnsrls_FCentrHwAgEna; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAgSnsrls_MotAgOffsEna; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAgSnsrls_PrevSmotngSt; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAgSnsrls_PrevVehDynFil1Ena; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAgSnsrls_PrevVehDynFil2Ena; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAgSnsrls_WhlSpdHwAgLrndEna; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAgSysArbn_HwAgKineFlt; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAgSysArbn_HwAgLtch; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAgSysArbn_HwAgToMotAgCorrln; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAgSysArbn_SlewSts; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwTqArbn_dHwTqArbnAAvl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwTqArbn_dHwTqArbnBAvl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwTqArbn_dHwTqArbnCAvl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwTqArbn_dHwTqArbnDAvl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_ImcSigArbn_ArbnErrPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_ImcSigArbn_ArbnFltPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_ImcSigArbn_SysStLrngEnaPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_InertiaCmpVel_NotchFilChk; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_LoaMgr_PrevCurrMeasLoaStSwMtgtnEna; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_LoaMgr_PrevHwTqLoaStSwMtgtnEna; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_LoaMgr_PrevIvtrLoaStSwMtgtnEna; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_LoaMgr_PrevMotAgLoaMtgtnEna; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_LoaMgr_PrevMotAgLoaStSwMtgtnEna; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotAgCorrln_dMotAgCorrlnMotAgAOk; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotAgCorrln_dMotAgCorrlnMotAgBOk; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotAgCorrln_dMotAgCorrlnMotAgCOk; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotTqTranlDampg_DiagStsPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotTqTranlDampg_StLtchPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotTqTranlDampg_dMotTqTranlDampgTmrEna; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotVelCtrl_EnaCtrl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotVelCtrl_EnaCtrlStVari; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotVelCtrl_FctActvSts; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotVelCtrl_RampDwnCmpl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_PwrDiscnct_FirstRunCmpl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_PwrDiscnct_PwrDiscnctClsdSts; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_PwrDiscnct_PwrDiscnctTestACmpl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_PwrDiscnct_PwrDiscnctTestBCmpl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_PwrLimr_LimdAssiLoVltgPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_PwrSply_ReadWrOrderFlg1; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_PwrSply_ReadWrOrderFlg2; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_PwrSply_StrtUpSelfTestCmpl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_RtnPahFwl_dRtnPahFwlOverBnd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_SysFricLrng_FricLrngRunOneTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_SysFricLrng_FricOffsOutpDi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_TEstimn_AmbTVldPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_TEstimn_AssiMechTInitEna; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_TEstimn_DualEcuFltMtgtnPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_TEstimn_EngOilTVldPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_TEstimn_FetMtgtnEnaPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_TEstimn_RepInitCntrFlg; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_TmplMonr_TmplMonrIninTestCmplFlg; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_TmplMonr_TmplMonrSpiReadWrOrderFlg1; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_TmplMonr_TmplMonrSpiReadWrOrderFlg2; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_VehSigCdng_PrevLatAVld; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_VehSigCdng_PrevLtgAVld; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_VehSigCdng_PrevVehSpdVld; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_VehSigCdng_PrevYawRateVld; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary1D_u32_4, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_ExcpnHndlg_McuDiagcData; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary1D_u08_128, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_FordBlaBoxIfCmp1_ActvNiblCtrl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary1D_u08_256, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_FordBlaBoxIfCmp1_LaneAssi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary1D_u08_128, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_FordBlaBoxIfCmp1_PullDriftCmp; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary2D_u8p8_12_20, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_FordBlaBoxIfCmp1_TqOffsTbl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary1D_u08_512, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_FordBlaBoxIfCmp1_TrlrBackupAssi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary1D_u3p13_50, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAgSwCal_MotAg2CosMeasRaw; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary1D_u3p13_50, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAgSwCal_MotAg2SinMeasRaw; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary1D_u3p13_50, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAgSwCal_MotAg5CosMeasRaw; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary1D_u3p13_50, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAgSwCal_MotAg5SinMeasRaw; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary1D_u3p13_50, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAgSwCal_MotAg6CosMeasRaw; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary1D_u3p13_50, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAgSwCal_MotAg6SinMeasRaw; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary1D_s1p14_512, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotRplCoggCmd_MotCoggCmdY; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary1D_u0p16_8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotVel_MotAgBufPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary1D_u32_8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotVel_MotAgTiBufPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary1D_BlkFltTblRec1_5, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_NvMProxy_BlkFltTbl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary1D_CmdRtnBufRec1_NvMProxy1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_NvMProxy_CmdRtnBuf; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary1D_boolean_NvMProxy1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_NvMProxy_NvmBlkActv; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary1D_CrcHwStsRec2_8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_SyncCrc_CrcHwSts; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary1D_u8_2048_Uart0CfgAndUse, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_Uart0CfgAndUse_Uart0100MilliSecBufCnt; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary1D_u8_2048_Uart0CfgAndUse, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_Uart0CfgAndUse_Uart010MilliSecBufCnt; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary1D_u8_2048_Uart0CfgAndUse, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_Uart0CfgAndUse_Uart02MilliSecBufCnt; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary1D_u8_2048_Uart1CfgAndUse, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_Uart1CfgAndUse_Uart1100MilliSecBufCnt; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary1D_u8_2048_Uart1CfgAndUse, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_Uart1CfgAndUse_Uart110MilliSecBufCnt; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary1D_u8_2048_Uart1CfgAndUse, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_Uart1CfgAndUse_Uart12MilliSecBufCnt; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary1D_u8_20, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CmnMfgSrv_CcaHwPartNr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary1D_u8_20, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CmnMfgSrv_CcaSerlNr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary1D_u8_8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CmnMfgSrv_DiRestore; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary1D_u8_20, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CmnMfgSrv_EpsSysSerlNr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary1D_u8_16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CmnMfgSrv_MfgTmpBuf0; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary1D_u8_16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CmnMfgSrv_MfgTmpBuf1; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary1D_u8_16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CmnMfgSrv_MfgTmpBuf2; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary1D_u8_16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CmnMfgSrv_MfgTmpBuf3; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary1D_u8_16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CmnMfgSrv_MfgTmpBuf4; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary1D_u16_16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CmnMfgSrv_PerPidTbl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary1D_u32_2, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CmnMfgSrv_SeedKey; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary1D_u8_2, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CustDiag_Did205A; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary1D_u8_2, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CustDiag_Did205B; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary1D_u8_24, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CustDiag_Did3003; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary1D_u8_2, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CustDiag_Did301A; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary1D_u8_24, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CustDiag_Did630F; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary1D_u8_24, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CustDiag_DidDE00; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary1D_u8_24, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CustDiag_DidDE01; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary1D_u8_24, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CustDiag_DidDE02; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary1D_u8_64, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CustDiag_DidDE03; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary1D_u8_2, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CustDiag_DidDE04; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary1D_u8_24, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CustDiag_DidDE05; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary1D_u8_3, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CustDiag_DidEE00; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary1D_u8_20, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CustDiag_DidEE21; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary1D_u8_40, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CustDiag_DidEE22; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary1D_u8_40, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CustDiag_DidEE23; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary1D_u8_3, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CustDiag_DidEE40; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary1D_u8_4, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CustDiag_DidEE81; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary1D_u8_4, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CustDiag_DidEE82; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary1D_u8_4, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CustDiag_DidEE83; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary1D_u8_4, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CustDiag_DidEE84; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary1D_u8_4, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CustDiag_DidEE85; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary1D_u8_4, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CustDiag_DidEE86; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary1D_u8_4, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CustDiag_DidEE87; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary1D_u8_4, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CustDiag_DidEE88; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary1D_u8_24, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CustDiag_DidF110; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary1D_u8_24, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CustDiag_DidF111; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary1D_u8_24, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CustDiag_DidF113; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary1D_u8_10, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CustDiag_DidF15F; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary1D_u8_4, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CustDiag_DidF166; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary1D_u8_24, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CustDiag_DidF18A; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary1D_u8_16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CustDiag_DidF18C; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary1D_u8_24, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CustDiag_DidF190; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary1D_u08_20, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_DiagcMgr_DiagcMgrLtchCntrAry; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary1D_NtcFltInfoRec2_20, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_DiagcMgr_DiagcMgrNtcFltAry; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary1D_u08_DiagcMgr1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_DiagcMgr_DtcIdxPrevSts; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary1D_NtcInfoRec4_DiagcMgrProxyAppl10, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_DiagcMgrProxyAppl10_DiagcMgrNtcInfo10Ary; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary1D_s16_DiagcMgrProxyAppl10, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_DiagcMgrProxyAppl10_DiagcMgrNtcInfo10DebCntrAry; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary1D_f32_5, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_DrvrTqEstimn_DrvrTqStPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary1D_u08_6, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg40ABusHiSpd_FordVehIdnNrC100Prev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary1D_u08_6, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg40ABusHiSpd_FordVehIdnNrC101Prev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary1D_u08_5, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg40ABusHiSpd_FordVehIdnNrC102Prev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary1D_u08_17, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg40ABusHiSpd_FordVehIdnNrPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary1D_u16_5, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwTq10Meas_HwTq10RawDataBuf; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary1D_u16_5, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwTq9Meas_HwTq9RawDataBuf; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary2D_u8_2_2, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_ImcArbn_FrmFltCntr100MilliSec; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary2D_u8_2_2, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_ImcArbn_FrmFltCntr10MilliSec; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary2D_u8_2_2, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_ImcArbn_FrmFltCntr2MilliSec; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary1D_u8_ImcArbnB, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_ImcArbn_PrevRollgCntrRxd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary1D_u8_ImcArbnB, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_ImcArbn_PrimSrcResyncCntr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary1D_u8_ImcArbnB, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_ImcArbn_PrimSrcRollgCntrResync; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary2D_u8_ImcArbnA, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_ImcArbn_PrimSrcRxBuf; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary1D_logl_ImcArbnA, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_ImcArbn_ResyncOnPrimActv; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary1D_logl_ImcArbnA, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_ImcArbn_ResyncOnSecdryActv; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary1D_u8_3, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_ImcArbn_RollgCntr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary1D_u32_ImcArbnA, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_ImcArbn_RxdSigData; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary1D_ImrArbnRxExtdSts2_ImcArbnA, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_ImcArbn_RxdSigDataExtdSts; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary1D_ImcArbnRxDataSrc2_ImcArbnB, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_ImcArbn_RxdSigDataSrc; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary1D_u8_ImcArbnB, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_ImcArbn_SecdrySrcResyncCntr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary1D_u8_ImcArbnB, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_ImcArbn_SecdrySrcRollgCntrResync; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary2D_u8_ImcArbnA, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_ImcArbn_SecdrySrcRxBuf; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary1D_ImcArbnRxDataSrc2_ImcArbnA, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_ImcArbn_SigGroupDataSrc; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary1D_u8_ImcArbnB, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_ImcArbn_SigGroupMissCntr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary1D_logl_ImcArbnA, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_ImcArbn_SigGroupNeverRxd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary1D_u8_ImcArbnB, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_ImcArbn_SigGroupSkipCntr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary2D_u8_ImcArbnA, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_ImcArbn_TxBuf; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary1D_f32_8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotRefMdl_CosDelta; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary1D_f32_8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotRefMdl_SinDelta; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary2D_s1p14_10_12, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotRplCoggCfg_MotTqRplOrder1X; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary2D_s1p14_10_12, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotRplCoggCfg_MotTqRplOrder1Y; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary2D_s1p14_10_12, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotRplCoggCfg_MotTqRplOrder2X; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary2D_s1p14_10_12, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotRplCoggCfg_MotTqRplOrder2Y; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary2D_s1p14_10_12, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotRplCoggCfg_MotTqRplOrder3X; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary2D_s1p14_10_12, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotRplCoggCfg_MotTqRplOrder3Y; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary1D_u8_48, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_StackMeas_StackMeasRes; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary1D_f32_12, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_SysFricLrng_ColTqAry; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary1D_f32_4, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_SysFricLrng_FilAvrgFric; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary1D_f32_12, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_SysFricLrng_HwAgBuf; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary1D_f32_12, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_SysFricLrng_HwVelBuf; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary1D_f32_4, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_SysFricLrng_RawAvrgFric; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary1D_f32_4, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_SysFricLrng_SatnAvrgFric; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary1D_f32_4, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_SysFricLrng_VehBasLineFric; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilHpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_AssiHiFrq_HwTqHpFil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_AssiSumLim_MotVelFilLp; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(CurrMeasEolGainCal3PhaRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_CurrMeas_CurrMeasEolGainCalSetABC; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(CurrMeasEolOffsCal3PhaRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_CurrMeas_CurrMeasEolOffsCalSetABC; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(HwTqOffsRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_HwTq1Meas_HwTq1Offs; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(HwTqOffsRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_HwTq8Meas_HwTq8Offs; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAg5Meas_MotAg5CosMaxLpFil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAg5Meas_MotAg5CosMinLpFil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(MotAgEolPrmRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAg5Meas_MotAg5EolPrm; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(MotAgRtPrmRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAg5Meas_MotAg5RtPrm; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAg5Meas_MotAg5SinMaxLpFil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAg5Meas_MotAg5SinMinLpFil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(MotAgStVariRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAg5Meas_MotAg5StVari; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAg6Meas_MotAg6CosMaxLpFil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAg6Meas_MotAg6CosMinLpFil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(MotAgEolPrmRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAg6Meas_MotAg6EolPrm; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(MotAgRtPrmRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAg6Meas_MotAg6RtPrm; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAg6Meas_MotAg6SinMaxLpFil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAg6Meas_MotAg6SinMinLpFil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(MotAgStVariRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAg6Meas_MotAg6StVari; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotCurrRegVltgLimr_MotVltgBrdgLpFil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotCurrRegVltgLimr_MotVltgQaxFfLpFil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_Dampg_MotVelDampgLpFil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_Dampg_QuadDampgHwTqLpFil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_Dampg_QuadDampgMotVelLpFil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_Dampg_QuadDampgScaLpFil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(DiagcDataRec2, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_DiagcMgrProxyAppl10_DiagcData10; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(DiagcDataRec2, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_DiagcMgrProxyAppl10_ProxySetNtcData10; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_DutyCycThermProtn_Fil1ValStVari; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_DutyCycThermProtn_Fil2ValStVari; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(DutyCycThermProtnFilStValRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_DutyCycThermProtn_FilStVal; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_DutyCycThermProtn_Fild3Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_DutyCycThermProtn_Fild4Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_DutyCycThermProtn_Fild5Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_DutyCycThermProtn_Fild6Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_EcuTMeas_EcuTFilStVari; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(EotNvmDataRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_EotLrng_EotNvmData; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(MaxHwAgCwAndCcwRec2, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_EotLrng_MaxHwAgCwAndCcw; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_EotProtn_EotAssiScaLpFil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_EotProtn_HwTqLpFil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMotTqCmdOvrlLimr_HwVelFil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GateDrv0Ctrl_GateDrv0PhaAFilLp; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GateDrv0Ctrl_GateDrv0PhaBFilLp; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GateDrv0Ctrl_GateDrv0PhaCFilLp; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HiLoadStallLimr_StallMotTqCmdFetMtgtnFil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HiLoadStallLimr_StallMotTqCmdFil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(HwAgOffsRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAg1Meas_HwAg1Offs; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAgSnsrls_PinionTqFil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAgSnsrls_RelHwAgFil1; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAgSnsrls_RelHwAgFil2; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(StordLstPrmRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAgSnsrls_StordLstPrm; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAgSnsrls_YawRateFil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAgSysArbn_TqSnsrVelFil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(HwTqOffsRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwTq10Meas_HwTq10Offs; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(HwTqOffsRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwTq9Meas_HwTq9Offs; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HysCmp_AssiCmdLpFil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HysCmp_FinalOutpLpFil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HysCmp_HwTqLpFil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_ImcSigArbn_HwAgLpFil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_ImcSigArbn_HwAgTarLpFil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_ImcSigArbn_HwTqLpFil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_ImcSigArbn_MotVelLpFil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_ImcSigArbn_PosnServoIntgtrLpFil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_ImcSigArbn_PullCmpLongTermCmpLpFil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_ImcSigArbn_PullCmpShoTermCmpLpFil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_ImcSigArbn_TrakgIntgtrSt1LpFil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_ImcSigArbn_TrakgIntgtrSt2LpFil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_ImcSigArbn_VehSpdLpFil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_InertiaCmpVel_TqSnsrVelFil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilNotchStRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_InertiaCmpVel_TqSnsrVelFilNotchSt; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(MotAgMeasEolPrmRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotAg2Meas_MotAg2EolPrm; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(MotPrmNomEolRec3, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotCtrlPrmEstimn_MotPrmNom; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotCurrPeakEstimn_MotCurrDaxFil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotCurrPeakEstimn_MotCurrPeakEstimdFil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotCurrPeakEstimn_MotCurrQaxFil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotCurrRegCfg_MotVelMrfFild; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotRefMdl_MotVelLpFil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(MotRplCoggPrmRec2, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotRplCoggCfg_MotRplCoggPrm; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_PwrLimr_MotVelLpFil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_PwrLimr_TqLimLpFil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilNotchStRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_StabyCmp_AssiNotch1Fil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilNotchStRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_StabyCmp_AssiNotch2Fil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilNotchStRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_StabyCmp_AssiNotch3Fil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilNotchStRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_StabyCmp_AssiNotch4Fil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_StabyCmp_HwTqLpFil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_SysFricLrng_AssiMechTLpFil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_SysFricLrng_AvrgFricLpFil1; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_SysFricLrng_AvrgFricLpFil2; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_SysFricLrng_AvrgFricLpFil3; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_SysFricLrng_AvrgFricLpFil4; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_SysFricLrng_ColTqLpFil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_SysFricLrng_FricChgLpFil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(SysFricDataRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_SysFricLrng_FricLrngData; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(SysFricNonLrngDataRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_SysFricLrng_FricNonLrngData; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_SysFricLrng_HwAgAuthyLpFil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_SysFricLrng_HwAgLpFil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_SysFricLrng_HwVelLpFil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_SysFricLrng_LatALpFil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_SysFricLrng_VehSpdLpFil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_SysPrfmncSts_BattVltgLpFil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_TEstimn_AssiMechFilLp; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_TEstimn_CuFilLp; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_TEstimn_MagFilLp; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_TEstimn_SiFilLp; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(TFilStValRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_TEstimn_TFilStVal; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_TqLoa_VehLatAEstimnFil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(OnlineCalStsRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_TunSelnMngt_OnlineCalSts; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_VehSigCdng_HwTqFilRec; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_VehSigCdng_LatAFilRec; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#  define RTE_STOP_SEC_VAR_DEFAULT_RTE_Appl10_PIM_GROUP_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# endif


/**********************************************************************************************************************
 * Component Data Structures and Port Data Structures
 *********************************************************************************************************************/

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
typedef P2CONST(float32, AUTOMATIC, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP) Rte_AAACalRegn01Rt01_Dummy_Ary1D_f32_3_CalPortIf1_R_Calprm_Ary1D_FncRetPtrType;
# else
typedef P2CONST(Ary1D_f32_3, AUTOMATIC, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP) Rte_AAACalRegn01Rt01_Dummy_Ary1D_f32_3_CalPortIf1_R_Calprm_Ary1D_FncRetPtrType;
# endif

struct Rte_PDS_AAACalRegn01Rt01_Dummy_Ary1D_f32_3_CalPortIf1_R
{
  P2FUNC(Rte_AAACalRegn01Rt01_Dummy_Ary1D_f32_3_CalPortIf1_R_Calprm_Ary1D_FncRetPtrType, RTE_CODE, Prm_Ary1D) (void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
};

struct Rte_CDS_AAACalRegn01Rt01_Dummy
{
  /* Port API section */
  struct Rte_PDS_AAACalRegn01Rt01_Dummy_Ary1D_f32_3_CalPortIf1_R TEstimnMagAmbMplr;
  /* Instance Id section */
  uint8 Instance_Id;
  /* Vendor specific section */
};

# define RTE_START_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern CONST(struct Rte_CDS_AAACalRegn01Rt01_Dummy, RTE_CONST) Rte_Instance_AAACalRegn01Rt00_Dummy; /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# define RTE_START_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern CONST(struct Rte_CDS_AAACalRegn01Rt01_Dummy, RTE_CONST) Rte_Instance_AAACalRegn01Rt01_Dummy; /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# define RTE_START_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern CONST(struct Rte_CDS_AAACalRegn01Rt01_Dummy, RTE_CONST) Rte_Instance_AAACalRegn01Rt02_Dummy; /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# define RTE_START_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern CONST(struct Rte_CDS_AAACalRegn01Rt01_Dummy, RTE_CONST) Rte_Instance_AAACalRegn01Rt03_Dummy; /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# define RTE_START_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern CONST(struct Rte_CDS_AAACalRegn01Rt01_Dummy, RTE_CONST) Rte_Instance_AAACalRegn01Rt04_Dummy; /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# define RTE_START_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern CONST(struct Rte_CDS_AAACalRegn01Rt01_Dummy, RTE_CONST) Rte_Instance_AAACalRegn01Rt05_Dummy; /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
typedef P2CONST(u0p16, AUTOMATIC, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP) Rte_AAACalRegn02Rt01GroupA_Dummy_Ary1D_u0p16_10_CalPortIf1_R_Calprm_Ary1D_FncRetPtrType;
# else
typedef P2CONST(Ary1D_u0p16_10, AUTOMATIC, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP) Rte_AAACalRegn02Rt01GroupA_Dummy_Ary1D_u0p16_10_CalPortIf1_R_Calprm_Ary1D_FncRetPtrType;
# endif

struct Rte_PDS_AAACalRegn02Rt01GroupA_Dummy_Ary1D_u0p16_10_CalPortIf1_R
{
  P2FUNC(Rte_AAACalRegn02Rt01GroupA_Dummy_Ary1D_u0p16_10_CalPortIf1_R_Calprm_Ary1D_FncRetPtrType, RTE_CODE, Prm_Ary1D) (void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
};

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
typedef P2CONST(u1p15, AUTOMATIC, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP) Rte_AAACalRegn02Rt01GroupA_Dummy_Ary1D_u1p15_12_CalPortIf1_R_Calprm_Ary1D_FncRetPtrType;
# else
typedef P2CONST(Ary1D_u1p15_12, AUTOMATIC, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP) Rte_AAACalRegn02Rt01GroupA_Dummy_Ary1D_u1p15_12_CalPortIf1_R_Calprm_Ary1D_FncRetPtrType;
# endif

struct Rte_PDS_AAACalRegn02Rt01GroupA_Dummy_Ary1D_u1p15_12_CalPortIf1_R
{
  P2FUNC(Rte_AAACalRegn02Rt01GroupA_Dummy_Ary1D_u1p15_12_CalPortIf1_R_Calprm_Ary1D_FncRetPtrType, RTE_CODE, Prm_Ary1D) (void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
};

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
typedef P2CONST(u1p15, AUTOMATIC, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP) Rte_AAACalRegn02Rt01GroupA_Dummy_Ary1D_u1p15_2_CalPortIf1_R_Calprm_Ary1D_FncRetPtrType;
# else
typedef P2CONST(Ary1D_u1p15_2, AUTOMATIC, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP) Rte_AAACalRegn02Rt01GroupA_Dummy_Ary1D_u1p15_2_CalPortIf1_R_Calprm_Ary1D_FncRetPtrType;
# endif

struct Rte_PDS_AAACalRegn02Rt01GroupA_Dummy_Ary1D_u1p15_2_CalPortIf1_R
{
  P2FUNC(Rte_AAACalRegn02Rt01GroupA_Dummy_Ary1D_u1p15_2_CalPortIf1_R_Calprm_Ary1D_FncRetPtrType, RTE_CODE, Prm_Ary1D) (void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
};

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
typedef P2CONST(u1p15, AUTOMATIC, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP) Rte_AAACalRegn02Rt01GroupA_Dummy_Ary1D_u1p15_5_CalPortIf1_R_Calprm_Ary1D_FncRetPtrType;
# else
typedef P2CONST(Ary1D_u1p15_5, AUTOMATIC, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP) Rte_AAACalRegn02Rt01GroupA_Dummy_Ary1D_u1p15_5_CalPortIf1_R_Calprm_Ary1D_FncRetPtrType;
# endif

struct Rte_PDS_AAACalRegn02Rt01GroupA_Dummy_Ary1D_u1p15_5_CalPortIf1_R
{
  P2FUNC(Rte_AAACalRegn02Rt01GroupA_Dummy_Ary1D_u1p15_5_CalPortIf1_R_Calprm_Ary1D_FncRetPtrType, RTE_CODE, Prm_Ary1D) (void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
};

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
typedef P2CONST(u2p14, AUTOMATIC, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP) Rte_AAACalRegn02Rt01GroupA_Dummy_Ary1D_u2p14_5_CalPortIf1_R_Calprm_Ary1D_FncRetPtrType;
# else
typedef P2CONST(Ary1D_u2p14_5, AUTOMATIC, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP) Rte_AAACalRegn02Rt01GroupA_Dummy_Ary1D_u2p14_5_CalPortIf1_R_Calprm_Ary1D_FncRetPtrType;
# endif

struct Rte_PDS_AAACalRegn02Rt01GroupA_Dummy_Ary1D_u2p14_5_CalPortIf1_R
{
  P2FUNC(Rte_AAACalRegn02Rt01GroupA_Dummy_Ary1D_u2p14_5_CalPortIf1_R_Calprm_Ary1D_FncRetPtrType, RTE_CODE, Prm_Ary1D) (void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
};

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
typedef P2CONST(u2p14, AUTOMATIC, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP) Rte_AAACalRegn02Rt01GroupA_Dummy_Ary1D_u2p14_6_CalPortIf1_R_Calprm_Ary1D_FncRetPtrType;
# else
typedef P2CONST(Ary1D_u2p14_6, AUTOMATIC, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP) Rte_AAACalRegn02Rt01GroupA_Dummy_Ary1D_u2p14_6_CalPortIf1_R_Calprm_Ary1D_FncRetPtrType;
# endif

struct Rte_PDS_AAACalRegn02Rt01GroupA_Dummy_Ary1D_u2p14_6_CalPortIf1_R
{
  P2FUNC(Rte_AAACalRegn02Rt01GroupA_Dummy_Ary1D_u2p14_6_CalPortIf1_R_Calprm_Ary1D_FncRetPtrType, RTE_CODE, Prm_Ary1D) (void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
};

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
typedef P2CONST(u4p12, AUTOMATIC, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP) Rte_AAACalRegn02Rt01GroupA_Dummy_Ary1D_u4p12_12_CalPortIf1_R_Calprm_Ary1D_FncRetPtrType;
# else
typedef P2CONST(Ary1D_u4p12_12, AUTOMATIC, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP) Rte_AAACalRegn02Rt01GroupA_Dummy_Ary1D_u4p12_12_CalPortIf1_R_Calprm_Ary1D_FncRetPtrType;
# endif

struct Rte_PDS_AAACalRegn02Rt01GroupA_Dummy_Ary1D_u4p12_12_CalPortIf1_R
{
  P2FUNC(Rte_AAACalRegn02Rt01GroupA_Dummy_Ary1D_u4p12_12_CalPortIf1_R_Calprm_Ary1D_FncRetPtrType, RTE_CODE, Prm_Ary1D) (void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
};

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
typedef P2CONST(u4p12, AUTOMATIC, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP) Rte_AAACalRegn02Rt01GroupA_Dummy_Ary1D_u4p12_5_CalPortIf1_R_Calprm_Ary1D_FncRetPtrType;
# else
typedef P2CONST(Ary1D_u4p12_5, AUTOMATIC, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP) Rte_AAACalRegn02Rt01GroupA_Dummy_Ary1D_u4p12_5_CalPortIf1_R_Calprm_Ary1D_FncRetPtrType;
# endif

struct Rte_PDS_AAACalRegn02Rt01GroupA_Dummy_Ary1D_u4p12_5_CalPortIf1_R
{
  P2FUNC(Rte_AAACalRegn02Rt01GroupA_Dummy_Ary1D_u4p12_5_CalPortIf1_R_Calprm_Ary1D_FncRetPtrType, RTE_CODE, Prm_Ary1D) (void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
};

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
typedef P2CONST(u7p9, AUTOMATIC, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP) Rte_AAACalRegn02Rt01GroupA_Dummy_Ary1D_u7p9_12_CalPortIf1_R_Calprm_Ary1D_FncRetPtrType;
# else
typedef P2CONST(Ary1D_u7p9_12, AUTOMATIC, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP) Rte_AAACalRegn02Rt01GroupA_Dummy_Ary1D_u7p9_12_CalPortIf1_R_Calprm_Ary1D_FncRetPtrType;
# endif

struct Rte_PDS_AAACalRegn02Rt01GroupA_Dummy_Ary1D_u7p9_12_CalPortIf1_R
{
  P2FUNC(Rte_AAACalRegn02Rt01GroupA_Dummy_Ary1D_u7p9_12_CalPortIf1_R_Calprm_Ary1D_FncRetPtrType, RTE_CODE, Prm_Ary1D) (void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
};

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
typedef P2CONST(u8p8, AUTOMATIC, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP) Rte_AAACalRegn02Rt01GroupA_Dummy_Ary1D_u8p8_2_CalPortIf1_R_Calprm_Ary1D_FncRetPtrType;
# else
typedef P2CONST(Ary1D_u8p8_2, AUTOMATIC, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP) Rte_AAACalRegn02Rt01GroupA_Dummy_Ary1D_u8p8_2_CalPortIf1_R_Calprm_Ary1D_FncRetPtrType;
# endif

struct Rte_PDS_AAACalRegn02Rt01GroupA_Dummy_Ary1D_u8p8_2_CalPortIf1_R
{
  P2FUNC(Rte_AAACalRegn02Rt01GroupA_Dummy_Ary1D_u8p8_2_CalPortIf1_R_Calprm_Ary1D_FncRetPtrType, RTE_CODE, Prm_Ary1D) (void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
};

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
typedef P2CONST(u8p8, AUTOMATIC, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP) Rte_AAACalRegn02Rt01GroupA_Dummy_Ary1D_u8p8_6_CalPortIf1_R_Calprm_Ary1D_FncRetPtrType;
# else
typedef P2CONST(Ary1D_u8p8_6, AUTOMATIC, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP) Rte_AAACalRegn02Rt01GroupA_Dummy_Ary1D_u8p8_6_CalPortIf1_R_Calprm_Ary1D_FncRetPtrType;
# endif

struct Rte_PDS_AAACalRegn02Rt01GroupA_Dummy_Ary1D_u8p8_6_CalPortIf1_R
{
  P2FUNC(Rte_AAACalRegn02Rt01GroupA_Dummy_Ary1D_u8p8_6_CalPortIf1_R_Calprm_Ary1D_FncRetPtrType, RTE_CODE, Prm_Ary1D) (void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
};

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
typedef P2CONST(u8p8, AUTOMATIC, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP) Rte_AAACalRegn02Rt01GroupA_Dummy_Ary1D_u8p8_8_CalPortIf1_R_Calprm_Ary1D_FncRetPtrType;
# else
typedef P2CONST(Ary1D_u8p8_8, AUTOMATIC, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP) Rte_AAACalRegn02Rt01GroupA_Dummy_Ary1D_u8p8_8_CalPortIf1_R_Calprm_Ary1D_FncRetPtrType;
# endif

struct Rte_PDS_AAACalRegn02Rt01GroupA_Dummy_Ary1D_u8p8_8_CalPortIf1_R
{
  P2FUNC(Rte_AAACalRegn02Rt01GroupA_Dummy_Ary1D_u8p8_8_CalPortIf1_R_Calprm_Ary1D_FncRetPtrType, RTE_CODE, Prm_Ary1D) (void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
};

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
typedef P2CONST(u9p7, AUTOMATIC, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP) Rte_AAACalRegn02Rt01GroupA_Dummy_Ary1D_u9p7_12_CalPortIf1_R_Calprm_Ary1D_FncRetPtrType;
# else
typedef P2CONST(Ary1D_u9p7_12, AUTOMATIC, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP) Rte_AAACalRegn02Rt01GroupA_Dummy_Ary1D_u9p7_12_CalPortIf1_R_Calprm_Ary1D_FncRetPtrType;
# endif

struct Rte_PDS_AAACalRegn02Rt01GroupA_Dummy_Ary1D_u9p7_12_CalPortIf1_R
{
  P2FUNC(Rte_AAACalRegn02Rt01GroupA_Dummy_Ary1D_u9p7_12_CalPortIf1_R_Calprm_Ary1D_FncRetPtrType, RTE_CODE, Prm_Ary1D) (void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
};

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
typedef P2CONST(u9p7, AUTOMATIC, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP) Rte_AAACalRegn02Rt01GroupA_Dummy_Ary1D_u9p7_5_CalPortIf1_R_Calprm_Ary1D_FncRetPtrType;
# else
typedef P2CONST(Ary1D_u9p7_5, AUTOMATIC, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP) Rte_AAACalRegn02Rt01GroupA_Dummy_Ary1D_u9p7_5_CalPortIf1_R_Calprm_Ary1D_FncRetPtrType;
# endif

struct Rte_PDS_AAACalRegn02Rt01GroupA_Dummy_Ary1D_u9p7_5_CalPortIf1_R
{
  P2FUNC(Rte_AAACalRegn02Rt01GroupA_Dummy_Ary1D_u9p7_5_CalPortIf1_R_Calprm_Ary1D_FncRetPtrType, RTE_CODE, Prm_Ary1D) (void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
};

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
typedef P2CONST(u9p7, AUTOMATIC, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP) Rte_AAACalRegn02Rt01GroupA_Dummy_Ary1D_u9p7_8_CalPortIf1_R_Calprm_Ary1D_FncRetPtrType;
# else
typedef P2CONST(Ary1D_u9p7_8, AUTOMATIC, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP) Rte_AAACalRegn02Rt01GroupA_Dummy_Ary1D_u9p7_8_CalPortIf1_R_Calprm_Ary1D_FncRetPtrType;
# endif

struct Rte_PDS_AAACalRegn02Rt01GroupA_Dummy_Ary1D_u9p7_8_CalPortIf1_R
{
  P2FUNC(Rte_AAACalRegn02Rt01GroupA_Dummy_Ary1D_u9p7_8_CalPortIf1_R_Calprm_Ary1D_FncRetPtrType, RTE_CODE, Prm_Ary1D) (void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
};

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
typedef P2CONST(s4p11, AUTOMATIC, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP) Rte_AAACalRegn02Rt01GroupA_Dummy_Ary2D_s4p11_12_20_CalPortIf1_R_Calprm_Ary2D_FncRetPtrType;
# else
typedef P2CONST(Ary2D_s4p11_12_20, AUTOMATIC, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP) Rte_AAACalRegn02Rt01GroupA_Dummy_Ary2D_s4p11_12_20_CalPortIf1_R_Calprm_Ary2D_FncRetPtrType;
# endif

struct Rte_PDS_AAACalRegn02Rt01GroupA_Dummy_Ary2D_s4p11_12_20_CalPortIf1_R
{
  P2FUNC(Rte_AAACalRegn02Rt01GroupA_Dummy_Ary2D_s4p11_12_20_CalPortIf1_R_Calprm_Ary2D_FncRetPtrType, RTE_CODE, Prm_Ary2D) (void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
};

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
typedef P2CONST(u12p4, AUTOMATIC, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP) Rte_AAACalRegn02Rt01GroupA_Dummy_Ary2D_u12p4_12_13_CalPortIf1_R_Calprm_Ary2D_FncRetPtrType;
# else
typedef P2CONST(Ary2D_u12p4_12_13, AUTOMATIC, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP) Rte_AAACalRegn02Rt01GroupA_Dummy_Ary2D_u12p4_12_13_CalPortIf1_R_Calprm_Ary2D_FncRetPtrType;
# endif

struct Rte_PDS_AAACalRegn02Rt01GroupA_Dummy_Ary2D_u12p4_12_13_CalPortIf1_R
{
  P2FUNC(Rte_AAACalRegn02Rt01GroupA_Dummy_Ary2D_u12p4_12_13_CalPortIf1_R_Calprm_Ary2D_FncRetPtrType, RTE_CODE, Prm_Ary2D) (void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
};

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
typedef P2CONST(u1p15, AUTOMATIC, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP) Rte_AAACalRegn02Rt01GroupA_Dummy_Ary2D_u1p15_12_5_CalPortIf1_R_Calprm_Ary2D_FncRetPtrType;
# else
typedef P2CONST(Ary2D_u1p15_12_5, AUTOMATIC, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP) Rte_AAACalRegn02Rt01GroupA_Dummy_Ary2D_u1p15_12_5_CalPortIf1_R_Calprm_Ary2D_FncRetPtrType;
# endif

struct Rte_PDS_AAACalRegn02Rt01GroupA_Dummy_Ary2D_u1p15_12_5_CalPortIf1_R
{
  P2FUNC(Rte_AAACalRegn02Rt01GroupA_Dummy_Ary2D_u1p15_12_5_CalPortIf1_R_Calprm_Ary2D_FncRetPtrType, RTE_CODE, Prm_Ary2D) (void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
};

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
typedef P2CONST(u2p14, AUTOMATIC, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP) Rte_AAACalRegn02Rt01GroupA_Dummy_Ary2D_u2p14_12_5_CalPortIf1_R_Calprm_Ary2D_FncRetPtrType;
# else
typedef P2CONST(Ary2D_u2p14_12_5, AUTOMATIC, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP) Rte_AAACalRegn02Rt01GroupA_Dummy_Ary2D_u2p14_12_5_CalPortIf1_R_Calprm_Ary2D_FncRetPtrType;
# endif

struct Rte_PDS_AAACalRegn02Rt01GroupA_Dummy_Ary2D_u2p14_12_5_CalPortIf1_R
{
  P2FUNC(Rte_AAACalRegn02Rt01GroupA_Dummy_Ary2D_u2p14_12_5_CalPortIf1_R_Calprm_Ary2D_FncRetPtrType, RTE_CODE, Prm_Ary2D) (void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
};

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
typedef P2CONST(u3p13, AUTOMATIC, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP) Rte_AAACalRegn02Rt01GroupA_Dummy_Ary2D_u3p13_12_13_CalPortIf1_R_Calprm_Ary2D_FncRetPtrType;
# else
typedef P2CONST(Ary2D_u3p13_12_13, AUTOMATIC, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP) Rte_AAACalRegn02Rt01GroupA_Dummy_Ary2D_u3p13_12_13_CalPortIf1_R_Calprm_Ary2D_FncRetPtrType;
# endif

struct Rte_PDS_AAACalRegn02Rt01GroupA_Dummy_Ary2D_u3p13_12_13_CalPortIf1_R
{
  P2FUNC(Rte_AAACalRegn02Rt01GroupA_Dummy_Ary2D_u3p13_12_13_CalPortIf1_R_Calprm_Ary2D_FncRetPtrType, RTE_CODE, Prm_Ary2D) (void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
};

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
typedef P2CONST(u4p12, AUTOMATIC, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP) Rte_AAACalRegn02Rt01GroupA_Dummy_Ary2D_u4p12_12_5_CalPortIf1_R_Calprm_Ary2D_FncRetPtrType;
# else
typedef P2CONST(Ary2D_u4p12_12_5, AUTOMATIC, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP) Rte_AAACalRegn02Rt01GroupA_Dummy_Ary2D_u4p12_12_5_CalPortIf1_R_Calprm_Ary2D_FncRetPtrType;
# endif

struct Rte_PDS_AAACalRegn02Rt01GroupA_Dummy_Ary2D_u4p12_12_5_CalPortIf1_R
{
  P2FUNC(Rte_AAACalRegn02Rt01GroupA_Dummy_Ary2D_u4p12_12_5_CalPortIf1_R_Calprm_Ary2D_FncRetPtrType, RTE_CODE, Prm_Ary2D) (void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
};

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
typedef P2CONST(u4p12, AUTOMATIC, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP) Rte_AAACalRegn02Rt01GroupA_Dummy_Ary2D_u4p12_12_8_CalPortIf1_R_Calprm_Ary2D_FncRetPtrType;
# else
typedef P2CONST(Ary2D_u4p12_12_8, AUTOMATIC, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP) Rte_AAACalRegn02Rt01GroupA_Dummy_Ary2D_u4p12_12_8_CalPortIf1_R_Calprm_Ary2D_FncRetPtrType;
# endif

struct Rte_PDS_AAACalRegn02Rt01GroupA_Dummy_Ary2D_u4p12_12_8_CalPortIf1_R
{
  P2FUNC(Rte_AAACalRegn02Rt01GroupA_Dummy_Ary2D_u4p12_12_8_CalPortIf1_R_Calprm_Ary2D_FncRetPtrType, RTE_CODE, Prm_Ary2D) (void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
};

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
typedef P2CONST(u5p11, AUTOMATIC, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP) Rte_AAACalRegn02Rt01GroupA_Dummy_Ary2D_u5p11_12_13_CalPortIf1_R_Calprm_Ary2D_FncRetPtrType;
# else
typedef P2CONST(Ary2D_u5p11_12_13, AUTOMATIC, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP) Rte_AAACalRegn02Rt01GroupA_Dummy_Ary2D_u5p11_12_13_CalPortIf1_R_Calprm_Ary2D_FncRetPtrType;
# endif

struct Rte_PDS_AAACalRegn02Rt01GroupA_Dummy_Ary2D_u5p11_12_13_CalPortIf1_R
{
  P2FUNC(Rte_AAACalRegn02Rt01GroupA_Dummy_Ary2D_u5p11_12_13_CalPortIf1_R_Calprm_Ary2D_FncRetPtrType, RTE_CODE, Prm_Ary2D) (void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
};

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
typedef P2CONST(u5p11, AUTOMATIC, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP) Rte_AAACalRegn02Rt01GroupA_Dummy_Ary2D_u5p11_12_5_CalPortIf1_R_Calprm_Ary2D_FncRetPtrType;
# else
typedef P2CONST(Ary2D_u5p11_12_5, AUTOMATIC, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP) Rte_AAACalRegn02Rt01GroupA_Dummy_Ary2D_u5p11_12_5_CalPortIf1_R_Calprm_Ary2D_FncRetPtrType;
# endif

struct Rte_PDS_AAACalRegn02Rt01GroupA_Dummy_Ary2D_u5p11_12_5_CalPortIf1_R
{
  P2FUNC(Rte_AAACalRegn02Rt01GroupA_Dummy_Ary2D_u5p11_12_5_CalPortIf1_R_Calprm_Ary2D_FncRetPtrType, RTE_CODE, Prm_Ary2D) (void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
};

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
typedef P2CONST(u8p8, AUTOMATIC, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP) Rte_AAACalRegn02Rt01GroupA_Dummy_Ary2D_u8p8_12_20_CalPortIf1_R_Calprm_Ary2D_FncRetPtrType;
# else
typedef P2CONST(Ary2D_u8p8_12_20, AUTOMATIC, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP) Rte_AAACalRegn02Rt01GroupA_Dummy_Ary2D_u8p8_12_20_CalPortIf1_R_Calprm_Ary2D_FncRetPtrType;
# endif

struct Rte_PDS_AAACalRegn02Rt01GroupA_Dummy_Ary2D_u8p8_12_20_CalPortIf1_R
{
  P2FUNC(Rte_AAACalRegn02Rt01GroupA_Dummy_Ary2D_u8p8_12_20_CalPortIf1_R_Calprm_Ary2D_FncRetPtrType, RTE_CODE, Prm_Ary2D) (void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
};

struct Rte_PDS_AAACalRegn02Rt01GroupA_Dummy_float32_CalPortIf1_R
{
  P2FUNC(float32, RTE_CODE, Prm_Val) (void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
};

struct Rte_CDS_AAACalRegn02Rt01GroupA_Dummy
{
  /* Port API section */
  struct Rte_PDS_AAACalRegn02Rt01GroupA_Dummy_Ary1D_u0p16_10_CalPortIf1_R InertiaCmpVelAssiBasdDampgStatY;
  struct Rte_PDS_AAACalRegn02Rt01GroupA_Dummy_Ary1D_u1p15_12_CalPortIf1_R InertiaCmpVelDampgSpdBlndY;
  struct Rte_PDS_AAACalRegn02Rt01GroupA_Dummy_Ary1D_u1p15_2_CalPortIf1_R DampgHwTqY;
  struct Rte_PDS_AAACalRegn02Rt01GroupA_Dummy_Ary1D_u1p15_5_CalPortIf1_R InertiaCmpVelDampgWhlImbRejctnBlndY;
  struct Rte_PDS_AAACalRegn02Rt01GroupA_Dummy_Ary1D_u2p14_5_CalPortIf1_R HysCmpNegHysCmpScaY;
  struct Rte_PDS_AAACalRegn02Rt01GroupA_Dummy_Ary1D_u2p14_6_CalPortIf1_R HysCmpFricWhlImbRejctnBlndY;
  struct Rte_PDS_AAACalRegn02Rt01GroupA_Dummy_Ary1D_u2p14_6_CalPortIf1_R HysCmpRiseX;
  struct Rte_PDS_AAACalRegn02Rt01GroupA_Dummy_Ary1D_u2p14_6_CalPortIf1_R HysCmpRiseY;
  struct Rte_PDS_AAACalRegn02Rt01GroupA_Dummy_Ary1D_u4p12_12_CalPortIf1_R DampgHydCoeff1ScaY;
  struct Rte_PDS_AAACalRegn02Rt01GroupA_Dummy_Ary1D_u4p12_12_CalPortIf1_R DampgHydCoeff2ScaY;
  struct Rte_PDS_AAACalRegn02Rt01GroupA_Dummy_Ary1D_u4p12_12_CalPortIf1_R DampgHydCoeff3ScaY;
  struct Rte_PDS_AAACalRegn02Rt01GroupA_Dummy_Ary1D_u4p12_12_CalPortIf1_R DampgHydCoeff4ScaY;
  struct Rte_PDS_AAACalRegn02Rt01GroupA_Dummy_Ary1D_u4p12_12_CalPortIf1_R HysCmpEffLossY;
  struct Rte_PDS_AAACalRegn02Rt01GroupA_Dummy_Ary1D_u4p12_5_CalPortIf1_R InertiaCmpVelDampgWhlImbRejctnBlndX;
  struct Rte_PDS_AAACalRegn02Rt01GroupA_Dummy_Ary1D_u7p9_12_CalPortIf1_R AssiHiFrqHpFilFrqY;
  struct Rte_PDS_AAACalRegn02Rt01GroupA_Dummy_Ary1D_u7p9_12_CalPortIf1_R InertiaCmpVelDampgFilFrq;
  struct Rte_PDS_AAACalRegn02Rt01GroupA_Dummy_Ary1D_u7p9_12_CalPortIf1_R InertiaCmpVelDampgFilFrqWhlImbRejctnOn;
  struct Rte_PDS_AAACalRegn02Rt01GroupA_Dummy_Ary1D_u8p8_2_CalPortIf1_R DampgHwTqX;
  struct Rte_PDS_AAACalRegn02Rt01GroupA_Dummy_Ary1D_u8p8_6_CalPortIf1_R HysCmpFricWhlImbRejctnBlndX;
  struct Rte_PDS_AAACalRegn02Rt01GroupA_Dummy_Ary1D_u8p8_8_CalPortIf1_R HysCmpNegHysCmpX;
  struct Rte_PDS_AAACalRegn02Rt01GroupA_Dummy_Ary1D_u9p7_12_CalPortIf1_R HysCmpEffOffsY;
  struct Rte_PDS_AAACalRegn02Rt01GroupA_Dummy_Ary1D_u9p7_12_CalPortIf1_R HysCmpFricWhlImbRejctnOffY;
  struct Rte_PDS_AAACalRegn02Rt01GroupA_Dummy_Ary1D_u9p7_12_CalPortIf1_R HysCmpFricWhlImbRejctnOnY;
  struct Rte_PDS_AAACalRegn02Rt01GroupA_Dummy_Ary1D_u9p7_12_CalPortIf1_R HysCmpHysSatnY;
  struct Rte_PDS_AAACalRegn02Rt01GroupA_Dummy_Ary1D_u9p7_5_CalPortIf1_R HysCmpNegHysCmpScaX;
  struct Rte_PDS_AAACalRegn02Rt01GroupA_Dummy_Ary1D_u9p7_8_CalPortIf1_R HysCmpNegHysCmpY;
  struct Rte_PDS_AAACalRegn02Rt01GroupA_Dummy_Ary2D_s4p11_12_20_CalPortIf1_R AssiMotTqWhlImbRejctnMaxY;
  struct Rte_PDS_AAACalRegn02Rt01GroupA_Dummy_Ary2D_s4p11_12_20_CalPortIf1_R AssiMotTqWhlImbRejctnMinY;
  struct Rte_PDS_AAACalRegn02Rt01GroupA_Dummy_Ary2D_u12p4_12_13_CalPortIf1_R DampgMotVelX;
  struct Rte_PDS_AAACalRegn02Rt01GroupA_Dummy_Ary2D_u1p15_12_5_CalPortIf1_R AssiHiFrqWhlImbRejctnBlndY;
  struct Rte_PDS_AAACalRegn02Rt01GroupA_Dummy_Ary2D_u2p14_12_5_CalPortIf1_R AssiWhlImbRejctnBlndScaY;
  struct Rte_PDS_AAACalRegn02Rt01GroupA_Dummy_Ary2D_u3p13_12_13_CalPortIf1_R AssiHiFrqGainY;
  struct Rte_PDS_AAACalRegn02Rt01GroupA_Dummy_Ary2D_u3p13_12_13_CalPortIf1_R AssiHiFrqWhlImbRejctnGainY;
  struct Rte_PDS_AAACalRegn02Rt01GroupA_Dummy_Ary2D_u4p12_12_5_CalPortIf1_R AssiHiFrqWhlImbRejctnBlndX;
  struct Rte_PDS_AAACalRegn02Rt01GroupA_Dummy_Ary2D_u4p12_12_8_CalPortIf1_R HysCmpHwTqScaX;
  struct Rte_PDS_AAACalRegn02Rt01GroupA_Dummy_Ary2D_u4p12_12_8_CalPortIf1_R HysCmpHwTqScaY;
  struct Rte_PDS_AAACalRegn02Rt01GroupA_Dummy_Ary2D_u5p11_12_13_CalPortIf1_R AssiHiFrqTqWhlImbRejctnTqX;
  struct Rte_PDS_AAACalRegn02Rt01GroupA_Dummy_Ary2D_u5p11_12_13_CalPortIf1_R AssiHiFrqTqX;
  struct Rte_PDS_AAACalRegn02Rt01GroupA_Dummy_Ary2D_u5p11_12_13_CalPortIf1_R DampgMotVelY;
  struct Rte_PDS_AAACalRegn02Rt01GroupA_Dummy_Ary2D_u5p11_12_5_CalPortIf1_R AssiWhlImbRejctnBlndScaX;
  struct Rte_PDS_AAACalRegn02Rt01GroupA_Dummy_Ary2D_u8p8_12_20_CalPortIf1_R AssiMotTqWhlImbRejctnMaxX;
  struct Rte_PDS_AAACalRegn02Rt01GroupA_Dummy_Ary2D_u8p8_12_20_CalPortIf1_R AssiMotTqWhlImbRejctnMinX;
  struct Rte_PDS_AAACalRegn02Rt01GroupA_Dummy_float32_CalPortIf1_R HysCmpOutpLim;
  struct Rte_PDS_AAACalRegn02Rt01GroupA_Dummy_float32_CalPortIf1_R HysCmpRevGain;
  /* Instance Id section */
  uint8 Instance_Id;
  /* Vendor specific section */
};

# define RTE_START_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern CONST(struct Rte_CDS_AAACalRegn02Rt01GroupA_Dummy, RTE_CONST) Rte_Instance_AAACalRegn02Rt00GroupA_Dummy; /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
typedef P2CONST(u12p4, AUTOMATIC, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP) Rte_AAACalRegn02Rt01GroupB_Dummy_Ary1D_u12p4_2_CalPortIf1_R_Calprm_Ary1D_FncRetPtrType;
# else
typedef P2CONST(Ary1D_u12p4_2, AUTOMATIC, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP) Rte_AAACalRegn02Rt01GroupB_Dummy_Ary1D_u12p4_2_CalPortIf1_R_Calprm_Ary1D_FncRetPtrType;
# endif

struct Rte_PDS_AAACalRegn02Rt01GroupB_Dummy_Ary1D_u12p4_2_CalPortIf1_R
{
  P2FUNC(Rte_AAACalRegn02Rt01GroupB_Dummy_Ary1D_u12p4_2_CalPortIf1_R_Calprm_Ary1D_FncRetPtrType, RTE_CODE, Prm_Ary1D) (void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
};

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
typedef P2CONST(u9p7, AUTOMATIC, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP) Rte_AAACalRegn02Rt01GroupB_Dummy_Ary1D_u9p7_4_CalPortIf1_R_Calprm_Ary1D_FncRetPtrType;
# else
typedef P2CONST(Ary1D_u9p7_4, AUTOMATIC, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP) Rte_AAACalRegn02Rt01GroupB_Dummy_Ary1D_u9p7_4_CalPortIf1_R_Calprm_Ary1D_FncRetPtrType;
# endif

struct Rte_PDS_AAACalRegn02Rt01GroupB_Dummy_Ary1D_u9p7_4_CalPortIf1_R
{
  P2FUNC(Rte_AAACalRegn02Rt01GroupB_Dummy_Ary1D_u9p7_4_CalPortIf1_R_Calprm_Ary1D_FncRetPtrType, RTE_CODE, Prm_Ary1D) (void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
};

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
typedef P2CONST(u9p7, AUTOMATIC, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP) Rte_AAACalRegn02Rt01GroupB_Dummy_Ary1D_u9p7_5_CalPortIf1_R_Calprm_Ary1D_FncRetPtrType;
# else
typedef P2CONST(Ary1D_u9p7_5, AUTOMATIC, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP) Rte_AAACalRegn02Rt01GroupB_Dummy_Ary1D_u9p7_5_CalPortIf1_R_Calprm_Ary1D_FncRetPtrType;
# endif

struct Rte_PDS_AAACalRegn02Rt01GroupB_Dummy_Ary1D_u9p7_5_CalPortIf1_R
{
  P2FUNC(Rte_AAACalRegn02Rt01GroupB_Dummy_Ary1D_u9p7_5_CalPortIf1_R_Calprm_Ary1D_FncRetPtrType, RTE_CODE, Prm_Ary1D) (void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
};

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
typedef P2CONST(u9p7, AUTOMATIC, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP) Rte_AAACalRegn02Rt01GroupB_Dummy_Ary1D_u9p7_9_CalPortIf1_R_Calprm_Ary1D_FncRetPtrType;
# else
typedef P2CONST(Ary1D_u9p7_9, AUTOMATIC, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP) Rte_AAACalRegn02Rt01GroupB_Dummy_Ary1D_u9p7_9_CalPortIf1_R_Calprm_Ary1D_FncRetPtrType;
# endif

struct Rte_PDS_AAACalRegn02Rt01GroupB_Dummy_Ary1D_u9p7_9_CalPortIf1_R
{
  P2FUNC(Rte_AAACalRegn02Rt01GroupB_Dummy_Ary1D_u9p7_9_CalPortIf1_R_Calprm_Ary1D_FncRetPtrType, RTE_CODE, Prm_Ary1D) (void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
};

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
typedef P2CONST(u0p16, AUTOMATIC, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP) Rte_AAACalRegn02Rt01GroupB_Dummy_Ary2D_u0p16_4_2_CalPortIf1_R_Calprm_Ary2D_FncRetPtrType;
# else
typedef P2CONST(Ary2D_u0p16_4_2, AUTOMATIC, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP) Rte_AAACalRegn02Rt01GroupB_Dummy_Ary2D_u0p16_4_2_CalPortIf1_R_Calprm_Ary2D_FncRetPtrType;
# endif

struct Rte_PDS_AAACalRegn02Rt01GroupB_Dummy_Ary2D_u0p16_4_2_CalPortIf1_R
{
  P2FUNC(Rte_AAACalRegn02Rt01GroupB_Dummy_Ary2D_u0p16_4_2_CalPortIf1_R_Calprm_Ary2D_FncRetPtrType, RTE_CODE, Prm_Ary2D) (void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
};

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
typedef P2CONST(u12p4, AUTOMATIC, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP) Rte_AAACalRegn02Rt01GroupB_Dummy_Ary2D_u12p4_9_16_CalPortIf1_R_Calprm_Ary2D_FncRetPtrType;
# else
typedef P2CONST(Ary2D_u12p4_9_16, AUTOMATIC, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP) Rte_AAACalRegn02Rt01GroupB_Dummy_Ary2D_u12p4_9_16_CalPortIf1_R_Calprm_Ary2D_FncRetPtrType;
# endif

struct Rte_PDS_AAACalRegn02Rt01GroupB_Dummy_Ary2D_u12p4_9_16_CalPortIf1_R
{
  P2FUNC(Rte_AAACalRegn02Rt01GroupB_Dummy_Ary2D_u12p4_9_16_CalPortIf1_R_Calprm_Ary2D_FncRetPtrType, RTE_CODE, Prm_Ary2D) (void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
};

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
typedef P2CONST(u1p15, AUTOMATIC, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP) Rte_AAACalRegn02Rt01GroupB_Dummy_Ary2D_u1p15_5_4_CalPortIf1_R_Calprm_Ary2D_FncRetPtrType;
# else
typedef P2CONST(Ary2D_u1p15_5_4, AUTOMATIC, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP) Rte_AAACalRegn02Rt01GroupB_Dummy_Ary2D_u1p15_5_4_CalPortIf1_R_Calprm_Ary2D_FncRetPtrType;
# endif

struct Rte_PDS_AAACalRegn02Rt01GroupB_Dummy_Ary2D_u1p15_5_4_CalPortIf1_R
{
  P2FUNC(Rte_AAACalRegn02Rt01GroupB_Dummy_Ary2D_u1p15_5_4_CalPortIf1_R_Calprm_Ary2D_FncRetPtrType, RTE_CODE, Prm_Ary2D) (void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
};

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
typedef P2CONST(u5p11, AUTOMATIC, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP) Rte_AAACalRegn02Rt01GroupB_Dummy_Ary2D_u5p11_9_16_CalPortIf1_R_Calprm_Ary2D_FncRetPtrType;
# else
typedef P2CONST(Ary2D_u5p11_9_16, AUTOMATIC, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP) Rte_AAACalRegn02Rt01GroupB_Dummy_Ary2D_u5p11_9_16_CalPortIf1_R_Calprm_Ary2D_FncRetPtrType;
# endif

struct Rte_PDS_AAACalRegn02Rt01GroupB_Dummy_Ary2D_u5p11_9_16_CalPortIf1_R
{
  P2FUNC(Rte_AAACalRegn02Rt01GroupB_Dummy_Ary2D_u5p11_9_16_CalPortIf1_R_Calprm_Ary2D_FncRetPtrType, RTE_CODE, Prm_Ary2D) (void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
};

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
typedef P2CONST(u7p9, AUTOMATIC, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP) Rte_AAACalRegn02Rt01GroupB_Dummy_Ary2D_u7p9_9_4_CalPortIf1_R_Calprm_Ary2D_FncRetPtrType;
# else
typedef P2CONST(Ary2D_u7p9_9_4, AUTOMATIC, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP) Rte_AAACalRegn02Rt01GroupB_Dummy_Ary2D_u7p9_9_4_CalPortIf1_R_Calprm_Ary2D_FncRetPtrType;
# endif

struct Rte_PDS_AAACalRegn02Rt01GroupB_Dummy_Ary2D_u7p9_9_4_CalPortIf1_R
{
  P2FUNC(Rte_AAACalRegn02Rt01GroupB_Dummy_Ary2D_u7p9_9_4_CalPortIf1_R_Calprm_Ary2D_FncRetPtrType, RTE_CODE, Prm_Ary2D) (void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
};

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
typedef P2CONST(u8p8, AUTOMATIC, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP) Rte_AAACalRegn02Rt01GroupB_Dummy_Ary2D_u8p8_9_4_CalPortIf1_R_Calprm_Ary2D_FncRetPtrType;
# else
typedef P2CONST(Ary2D_u8p8_9_4, AUTOMATIC, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP) Rte_AAACalRegn02Rt01GroupB_Dummy_Ary2D_u8p8_9_4_CalPortIf1_R_Calprm_Ary2D_FncRetPtrType;
# endif

struct Rte_PDS_AAACalRegn02Rt01GroupB_Dummy_Ary2D_u8p8_9_4_CalPortIf1_R
{
  P2FUNC(Rte_AAACalRegn02Rt01GroupB_Dummy_Ary2D_u8p8_9_4_CalPortIf1_R_Calprm_Ary2D_FncRetPtrType, RTE_CODE, Prm_Ary2D) (void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
};

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
typedef P2CONST(u8p8, AUTOMATIC, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP) Rte_AAACalRegn02Rt01GroupB_Dummy_Ary2D_u8p8_9_8_CalPortIf1_R_Calprm_Ary2D_FncRetPtrType;
# else
typedef P2CONST(Ary2D_u8p8_9_8, AUTOMATIC, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP) Rte_AAACalRegn02Rt01GroupB_Dummy_Ary2D_u8p8_9_8_CalPortIf1_R_Calprm_Ary2D_FncRetPtrType;
# endif

struct Rte_PDS_AAACalRegn02Rt01GroupB_Dummy_Ary2D_u8p8_9_8_CalPortIf1_R
{
  P2FUNC(Rte_AAACalRegn02Rt01GroupB_Dummy_Ary2D_u8p8_9_8_CalPortIf1_R_Calprm_Ary2D_FncRetPtrType, RTE_CODE, Prm_Ary2D) (void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
};

struct Rte_PDS_AAACalRegn02Rt01GroupB_Dummy_float32_CalPortIf1_R
{
  P2FUNC(float32, RTE_CODE, Prm_Val) (void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
};

struct Rte_CDS_AAACalRegn02Rt01GroupB_Dummy
{
  /* Port API section */
  struct Rte_PDS_AAACalRegn02Rt01GroupB_Dummy_Ary1D_u12p4_2_CalPortIf1_R EotProtnMotSpdIncptY;
  struct Rte_PDS_AAACalRegn02Rt01GroupB_Dummy_Ary1D_u9p7_4_CalPortIf1_R EotProtnDampgVehSpdTbl;
  struct Rte_PDS_AAACalRegn02Rt01GroupB_Dummy_Ary1D_u9p7_5_CalPortIf1_R EotProtnEntrGainVehSpdTbl;
  struct Rte_PDS_AAACalRegn02Rt01GroupB_Dummy_Ary1D_u9p7_9_CalPortIf1_R RtnVehSpdSeln;
  struct Rte_PDS_AAACalRegn02Rt01GroupB_Dummy_Ary2D_u0p16_4_2_CalPortIf1_R EotProtnNormDampgY;
  struct Rte_PDS_AAACalRegn02Rt01GroupB_Dummy_Ary2D_u12p4_9_16_CalPortIf1_R RtnHwAgOffsCalcdX;
  struct Rte_PDS_AAACalRegn02Rt01GroupB_Dummy_Ary2D_u1p15_5_4_CalPortIf1_R EotProtnEntrGainY;
  struct Rte_PDS_AAACalRegn02Rt01GroupB_Dummy_Ary2D_u1p15_5_4_CalPortIf1_R EotProtnLoAuthyEntrGainY;
  struct Rte_PDS_AAACalRegn02Rt01GroupB_Dummy_Ary2D_u5p11_9_16_CalPortIf1_R RtnHwAgOffsCalcdY;
  struct Rte_PDS_AAACalRegn02Rt01GroupB_Dummy_Ary2D_u7p9_9_4_CalPortIf1_R RtnScaVelX;
  struct Rte_PDS_AAACalRegn02Rt01GroupB_Dummy_Ary2D_u8p8_9_4_CalPortIf1_R RtnScaVelY;
  struct Rte_PDS_AAACalRegn02Rt01GroupB_Dummy_Ary2D_u8p8_9_8_CalPortIf1_R RtnScaTqX;
  struct Rte_PDS_AAACalRegn02Rt01GroupB_Dummy_Ary2D_u8p8_9_8_CalPortIf1_R RtnScaTqY;
  struct Rte_PDS_AAACalRegn02Rt01GroupB_Dummy_float32_CalPortIf1_R EotProtnDeltaTqThd;
  struct Rte_PDS_AAACalRegn02Rt01GroupB_Dummy_float32_CalPortIf1_R EotProtnSoftEndStopAuthyThd;
  /* Instance Id section */
  uint8 Instance_Id;
  /* Vendor specific section */
};

# define RTE_START_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern CONST(struct Rte_CDS_AAACalRegn02Rt01GroupB_Dummy, RTE_CONST) Rte_Instance_AAACalRegn02Rt00GroupB_Dummy; /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# define RTE_START_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern CONST(struct Rte_CDS_AAACalRegn02Rt01GroupA_Dummy, RTE_CONST) Rte_Instance_AAACalRegn02Rt01GroupA_Dummy; /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# define RTE_START_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern CONST(struct Rte_CDS_AAACalRegn02Rt01GroupB_Dummy, RTE_CONST) Rte_Instance_AAACalRegn02Rt01GroupB_Dummy; /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# define RTE_START_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern CONST(struct Rte_CDS_AAACalRegn02Rt01GroupA_Dummy, RTE_CONST) Rte_Instance_AAACalRegn02Rt02GroupA_Dummy; /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# define RTE_START_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern CONST(struct Rte_CDS_AAACalRegn02Rt01GroupB_Dummy, RTE_CONST) Rte_Instance_AAACalRegn02Rt02GroupB_Dummy; /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# define RTE_START_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern CONST(struct Rte_CDS_AAACalRegn02Rt01GroupA_Dummy, RTE_CONST) Rte_Instance_AAACalRegn02Rt03GroupA_Dummy; /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# define RTE_START_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern CONST(struct Rte_CDS_AAACalRegn02Rt01GroupB_Dummy, RTE_CONST) Rte_Instance_AAACalRegn02Rt03GroupB_Dummy; /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# define RTE_START_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern CONST(struct Rte_CDS_AAACalRegn02Rt01GroupA_Dummy, RTE_CONST) Rte_Instance_AAACalRegn02Rt04GroupA_Dummy; /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# define RTE_START_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern CONST(struct Rte_CDS_AAACalRegn02Rt01GroupB_Dummy, RTE_CONST) Rte_Instance_AAACalRegn02Rt04GroupB_Dummy; /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# define RTE_START_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern CONST(struct Rte_CDS_AAACalRegn02Rt01GroupA_Dummy, RTE_CONST) Rte_Instance_AAACalRegn02Rt05GroupA_Dummy; /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# define RTE_START_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern CONST(struct Rte_CDS_AAACalRegn02Rt01GroupB_Dummy, RTE_CONST) Rte_Instance_AAACalRegn02Rt05GroupB_Dummy; /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *  LOCAL DATA TYPES AND STRUCTURES
 *********************************************************************************************************************/

typedef unsigned int Rte_BitType;
/**********************************************************************************************************************
 * type and extern declarations of RTE internal variables
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Rte Init State Variable
 *********************************************************************************************************************/

# define RTE_STATE_UNINIT    (0U)
# define RTE_STATE_SCHM_INIT (1U)
# define RTE_STATE_INIT      (2U)

# ifdef RTE_CORE

#  define RTE_START_SEC_VAR_NOINIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern P2CONST(SchM_ConfigType, AUTOMATIC, RTE_CONST) Rte_VarCfgPtr;

#  define RTE_STOP_SEC_VAR_NOINIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * Calibration Parameters (SW-C local and calibration component calibration parameters)
 *********************************************************************************************************************/

#  define RTE_START_SEC_CONST_DEFAULT_RTE_CALPRM_GROUP_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern CONST(u16p0, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP) Rte_CalRegn01Cmn_FordMsg4B0BusHiSpdCanDtcInhbTiThd_Val; /* PRQA S 0850, 3408 */ /* MD_MSR_19.8, MD_Rte_3408 */
extern CONST(u16p0, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP) Rte_CalRegn01Cmn_FordMsg4B0BusHiSpdMsgFltNtcDiagcTiThd_Val; /* PRQA S 0850, 3408 */ /* MD_MSR_19.8, MD_Rte_3408 */
extern CONST(u16p0, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP) Rte_CalRegn01Cmn_FordMsg4B0BusHiSpdMsgFltTiThd_Val; /* PRQA S 0850, 3408 */ /* MD_MSR_19.8, MD_Rte_3408 */
extern CONST(u16p0, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP) Rte_CalRegn01Cmn_FordMsg4B0BusHiSpdMsgMissNtcDiagcTiThd_Val; /* PRQA S 0850, 3408 */ /* MD_MSR_19.8, MD_Rte_3408 */
extern CONST(u16p0, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP) Rte_CalRegn01Cmn_FordMsg4B0BusHiSpdMsgMissTiThd_Val; /* PRQA S 0850, 3408 */ /* MD_MSR_19.8, MD_Rte_3408 */
extern CONST(u16p0, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP) Rte_CalRegn01Cmn_FordMsg4B0BusHiSpdMsgRxdNtcDiagcTiThd_Val; /* PRQA S 0850, 3408 */ /* MD_MSR_19.8, MD_Rte_3408 */
extern CONST(u16p0, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP) Rte_CalRegn01Cmn_FordMsg4B0BusHiSpdMsgVldNtcDiagcTiThd_Val; /* PRQA S 0850, 3408 */ /* MD_MSR_19.8, MD_Rte_3408 */
extern CONST(u16p0, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP) Rte_CalRegn01Cmn_FordMsg4B0BusHiSpdMsgVldTiThd_Val; /* PRQA S 0850, 3408 */ /* MD_MSR_19.8, MD_Rte_3408 */

#  define RTE_STOP_SEC_CONST_DEFAULT_RTE_CALPRM_GROUP_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * Buffers for unqueued S/R
 *********************************************************************************************************************/

#  define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(uint8, RTE_VAR_INIT) Rte_Adcf1CfgAndUse_AdcDiagcEndPtrOutp_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_Adcf1CfgAndUse_AdcDiagcStrtPtrOutp_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_Assi_AssiCmdBas_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_Assi_AssiCmdBasSca_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_Assi_HwTqHysOvrl_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_Assi_WhlImbRejctnAmp_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_AssiHiFrq_AssiHiFrqCmd_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_AssiHiFrq_WhlImbRejctnAmp_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_AssiPahSum_AssiCmdSum_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_AssiSumLim_MotTqCmd_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_AssiSumLim_MotTqCmdLimDi_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_AssiSumLim_MotTqCmdLimdPreStall_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_AssiSumLim_MotTqCmdLimrMin_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_AssiSumLim_MotTqCmdPreLim_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_AssiSumLim_PinionCentrLrnCmd_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_AssiSumLim_PinionCentrLrnEna_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_AssiSumLim_PullCmpCmd_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_AssiSumLim_SysProtnRednFac_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_AssiSumLim_TqSteerMtgtnCmd_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_AssiSumLim_WhlImbRejctnCmd_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_BattVltg_BrdgVltg_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_BattVltgCorrln_BattSwdVltgCorrlnSts_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_BattVltgCorrln_BattVltgCorrlnIdptSig_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_BattVltgCorrln_DftBrdgVltgActv_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_BattVltgCorrln_SwdVltgLimd_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CDD_CurrMeas_CurrMeasWrmIninTestCmpl_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(MotCurrEolCalSt2, RTE_VAR_INIT) Rte_CDD_CurrMeas_MotCurrEolCalSt_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(SigQlfr1, RTE_VAR_INIT) Rte_CDD_CurrMeas_MotCurrQlfr1_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CDD_FlsMem_CodFlsCrcChkCmpl_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint32, RTE_VAR_INIT) Rte_CDD_FlsMem_SwApplCrc_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmn_ActvParkAssiTqFild_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmn_FildVehSpdVld_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmn_FordEvasSteerAssiEnaReq_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmn_FordMsgInp1Vld_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmn_FordMsgInp2Vld_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmn_FordMsgInp3Vld_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmn_FordMsgInp4Vld_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint16, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmn_FordTrlrAidHitchAgRate_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmn_FordTrlrBackupAssi5WhlEnad_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmn_FordTrlrBackupAssiEnad_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmn_FordTrlrBackupAssiTrigEnad_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint16, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmn_FordVehAccrPedlPosnStsQlyFacRaw_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint16, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmn_FordVehAccrPedlPosnStsRaw_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmn_FordVehAccrPedlPosnStsVld_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint32, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmn_FordVehBlaBoxInp1HiPart_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint32, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmn_FordVehBlaBoxInp1LoPart_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint32, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmn_FordVehBlaBoxInp2HiPart_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint32, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmn_FordVehBlaBoxInp2LoPart_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint32, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmn_FordVehBlaBoxInp3HiPart_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint32, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmn_FordVehBlaBoxInp3LoPart_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint32, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmn_FordVehBlaBoxInp4HiPart_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint32, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmn_FordVehBlaBoxInp4LoPart_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmn_FordVehBrkPedlAppld_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmn_FordVehBrkPedlAppldQlyFac_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmn_FordVehBrkPedlVld_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint16, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmn_FordVehEngSpdRaw_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmn_FordVehEngSpdVld_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmn_FordVehFrntLeWhlRollgCntr_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmn_FordVehFrntRiWhlRollgCntr_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmn_FordVehGearLvrPosn_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmn_FordVehGearPosnRaw_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmn_FordVehIgnSts_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmn_FordVehParkAidModlStsVld_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmn_FordVehParkAidModlSysSt_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmn_FordVehReLeWhlRollgCntr_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmn_FordVehReRiWhlRollgCntr_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmn_FordVehTrlrAgOffsDirRaw_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmn_FordVehTrlrAidCnclReq_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmn_FordVehTrlrAidCnclReqVld_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmn_FordVehTrlrAidIdnNrRaw_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmn_FordVehTrlrAidKnobPosnVld_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmn_FordVehTrlrAidKnobStsVld_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmn_FordVehTrlrAidModReq_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmn_FordVehTrlrAidSetUpRaw_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint16, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmn_FordVehTrlrAxleToBmpRaw_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmn_FordVehTrlrBackupAssiMeasVld_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmn_FordVehTrlrBrkCnctnStsRaw_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmn_FordVehTrlrEnaReqRaw_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint16, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmn_FordVehTrlrHitchAgRateRaw_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint16, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmn_FordVehTrlrHitchYawAgRaw_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmn_FordVehTrlrHitchYawSts_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint16, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmn_FordVehTrlrIdnTypRaw_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmn_FordVehTrlrLampCnctnStsRaw_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmn_FordVehTrlrRvsCnclReqRaw_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmn_FordVehTrlrRvsEnaRaw_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmn_FordVehTrlrRvsMsgTxtReqRaw_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmn_FordVehTrlrYawRateQlyFac_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint16, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmn_FordVehTrlrYawRateRaw_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmn_FordVehTrsmDesGearRaw_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmn_FordVehYawRateVld_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint32, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmn_FordYawRateSnsrIdHi_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint32, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmn_FordYawRateSnsrIdLo_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmn_IntAgCtrlSt_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(u8p8, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmn_RackToPinionRat_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmn_SelnDrvgModSteerModReq_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmn_SemiAutParlParkAgCtrlSts1_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmn_SemiAutParlParkAgCtrlSts2_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmn_SemiAutParlParkAgCtrlSts3_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmn_SemiAutParlParkAgCtrlSts4_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmn_SemiAutParlParkAgCtrlSts5_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmn_TrlrBackupAssiEnaVld_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmn_TrlrBackupAssiRvsVld_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmn_TrlrBackupAssiYawRateVld_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(u8p8, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmn_VehSteerRat_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint16, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmn_VehWhlBas_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmn_VertAVld_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint32, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmp1_ActvNiblCmpIntSts_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmp1_FordActvNiblCtrlDiagcSts_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(FordFeatSt1, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmp1_FordActvNiblCtrlFeatSt_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint32, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmp1_FordActvNiblCtrlSwVers_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmp1_FordActvNiblCtrlTqReq_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint32, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmp1_FordBlaBoxSwVers_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint32, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmp1_FordLaneAssiSwVers_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(FordFeatSt1, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmp1_FordLaneDprtrWarnFeatSt_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmp1_FordLaneDprtrWarnTqReq_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(FordFeatSt1, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmp1_FordLaneKeepAssiFeatSt_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmp1_FordLaneKeepAssiTqReq_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(FordFeatSt1, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmp1_FordLatCtrlFeatSt_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmp1_FordLatCtrlTqReq_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(FordFeatSt1, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmp1_FordPullDriftCmpFeatSt_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(FordFeatSt1, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmp1_FordPullDriftCmpLrngFeatSt_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint32, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmp1_FordPullDriftCmpSwVers_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmp1_FordPullDriftCmpTqReq_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint32, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmp1_FordResrchFctSwVers_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmp1_FordSrvLaneDprtrWarnDiagcSts_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint32, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmp1_FordTrlrBackupAssiSwVers_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint32, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmp1_FordVehBBMsgOutp1HiPart_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint32, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmp1_FordVehBBMsgOutp1LoPart_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint32, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmp1_FordVehBBMsgOutp2HiPart_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint32, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmp1_FordVehBBMsgOutp2LoPart_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint32, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmp1_FordVehBBMsgOutp3HiPart_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint32, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmp1_FordVehBBMsgOutp3LoPart_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint32, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmp1_FordVehBBMsgOutp4HiPart_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint32, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmp1_FordVehBBMsgOutp4LoPart_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmp1_FordVehLaneAssiAvl_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmp1_FordVehLaneAssiHandsOff_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmp1_FordVehLaneAssiRejctn_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(Ford_LatCtlLim_D_Stat, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmp1_FordVehLatCtrlLimSts_Ford_LatCtlLim_D_Stat; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(Ford_LatCtlSte_D_Stat, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmp1_FordVehLatCtrlSteerSts_Ford_LatCtlSte_D_Stat; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmp1_FordVehLoSpdMtnCtrlBrkDecelEnaReq_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint16, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmp1_FordVehLoSpdMtnCtrlBrkTqReq_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmp1_FordVehTrfcJamAvdHandsOnConf_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmp1_FordVehTrlrAgTarCalcn_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmp1_FordVehTrlrAidAgMax_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmp1_FordVehTrlrAidAgOffs_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmp1_FordVehTrlrAidAgWarn_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmp1_FordVehTrlrAidEnaSts_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint16, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmp1_FordVehTrlrAidHitchToAxle_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmp1_FordVehTrlrAidMsgTxtReq_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmp1_FordVehTrlrAidSetUp_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmp1_FordVehTrlrAidTarIdn_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmp1_FordVehTrlrAidTrlrIdn_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmp1_FordVehTrlrHitchLampReq_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmp1_FordVehVelMaxReqTrlrAid_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmp1_FordVehVelTrlrAidReq_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint32, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmp1_FordWrSrvActvNiblCmpIntSts_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint32, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmp1_FordWrSrvLaneDprtrWarnIntSts_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint32, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmp1_FordWrSrvLaneKeepAssiIntSts_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint32, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmp1_FordWrSrvLatCtrlIntSts_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint32, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmp1_FordWrSrvPullDriftCmpIntSts_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint32, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmp1_FordWrSrvTrlrBackupAssiIntSts_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint32, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmp1_LaneDprtrWarnIntSts_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint32, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmp1_LaneKeepAssiIntSts_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint32, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmp1_LatCtrlIntSts_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint32, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmp1_PullDriftCmpIntSts_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(s8p7, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmp1_SrvPullDriftCmpAct_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(s8p7, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmp1_SrvPullDriftCmpRstVal_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint32, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmp1_TrlrBackupAssiIntSts_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint16, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmp2_FordBrkPlsRednActvnCntr_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(FordFeatSt1, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmp2_FordEvasSteerAssiFeatSt_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint32, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmp2_FordEvasSteerAssiIntSts_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint32, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmp2_FordEvasSteerAssiSwVers_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmp2_FordEvasSteerAssiTqReq_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(FordFeatSt1, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmp2_FordSteerTqDstbcRejctnFeatSt_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint32, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmp2_FordSteerTqDstbcRejctnIntSts_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint32, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmp2_FordSteerTqDstbcRejctnSwVers_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmp2_FordSteerTqDstbcRejctnTqReq_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint16, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmp2_FordTqSteerCmpActvnCntr_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(Ford_EsaOn_B_Stat, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmp2_FordVehEvasSteerAssiSts_Ford_EsaOn_B_Stat; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint16, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmp2_FordWrSrvBrkPlsRednActvnCntr_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint32, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmp2_FordWrSrvEvasSteerAssiIntSts_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint32, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmp2_FordWrSrvSteerTqDstbcRejctnIntSts_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint16, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmp2_FordWrSrvTqSteerCmpActvnCntr_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CDD_FordT3T6McuCfg_Adc0Faild_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CDD_FordT3T6McuCfg_Adc1Faild_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_CDD_FordT3T6McuCfg_Adc1ScanGroup2Ref0_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_CDD_FordT3T6McuCfg_Adc1ScanGroup2Ref1_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_CDD_FordT3T6McuCfg_Adc1ScanGroup3Ref0_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_CDD_FordT3T6McuCfg_Adc1ScanGroup3Ref1_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_CDD_FordT3T6McuCfg_Adc1SelfDiag0_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_CDD_FordT3T6McuCfg_Adc1SelfDiag2_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_CDD_FordT3T6McuCfg_Adc1SelfDiag4_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_CDD_FordT3T6McuCfg_BattRtnCurrAdc_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CDD_FordT3T6McuCfg_BattRtnCurrAdcFaild_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_CDD_FordT3T6McuCfg_BattVltg_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CDD_FordT3T6McuCfg_BattVltgAdcFaild_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_CDD_FordT3T6McuCfg_BattVltgSwd1_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CDD_FordT3T6McuCfg_BattVltgSwd1AdcFaild_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_CDD_FordT3T6McuCfg_ChrgPmpDiag_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CDD_FordT3T6McuCfg_ChrgPmpDiagAdcFaild_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_CDD_FordT3T6McuCfg_EcuT_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CDD_FordT3T6McuCfg_EcuTAdcFaild_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CDD_FordT3T6McuCfg_HwAg1SnsrNr_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(HwAgSnsrTyp1, RTE_VAR_INIT) Rte_CDD_FordT3T6McuCfg_HwAg1SnsrTyp_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_CDD_FordT3T6McuCfg_MotAg2Cos_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CDD_FordT3T6McuCfg_MotAg2CosAdcFaild_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_CDD_FordT3T6McuCfg_MotAg2Sin_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CDD_FordT3T6McuCfg_MotAg2SinAdcFaild_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CDD_FordT3T6McuCfg_MotAg5CosAdcFaild_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CDD_FordT3T6McuCfg_MotAg5SinAdcFaild_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CDD_FordT3T6McuCfg_MotAg6CosAdcFaild_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CDD_FordT3T6McuCfg_MotAg6SinAdcFaild_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CDD_FordT3T6McuCfg_MotCurrAdcPeakAAdcFaild_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CDD_FordT3T6McuCfg_MotCurrAdcPeakBAdcFaild_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CDD_FordT3T6McuCfg_MotCurrAdcPeakCAdcFaild_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CDD_FordT3T6McuCfg_MotCurrAdcVlyAAdcFaild_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CDD_FordT3T6McuCfg_MotCurrAdcVlyBAdcFaild_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CDD_FordT3T6McuCfg_MotCurrAdcVlyCAdcFaild_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CDD_FordT3T6McuCfg_MotCurrSnsrOffs1AdcFaild_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CDD_FordT3T6McuCfg_MotDrvr1IninTestCmpl_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_CDD_FordT3T6McuCfg_PwrDiscnctSwtDiag_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CDD_FordT3T6McuCfg_PwrDiscnctSwtDiagAdcFaild_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint32, RTE_VAR_INIT) Rte_CDD_GtmCfgAndUse_PhaOnTiMeasdA_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint32, RTE_VAR_INIT) Rte_CDD_GtmCfgAndUse_PhaOnTiMeasdB_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint32, RTE_VAR_INIT) Rte_CDD_GtmCfgAndUse_PhaOnTiMeasdC_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_CDD_HwTq1Meas_HwTq1_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(SigQlfr1, RTE_VAR_INIT) Rte_CDD_HwTq1Meas_HwTq1Qlfr_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CDD_HwTq1Meas_HwTq1RollgCntr_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_CDD_HwTq1Meas_RackLimrCcwEotSig1_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_CDD_HwTq1Meas_RackLimrCwEotSig1_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CDD_HwTq1Meas_RackLimrEotSig1Avl_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_CDD_HwTq8Meas_HwTq8_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(SigQlfr1, RTE_VAR_INIT) Rte_CDD_HwTq8Meas_HwTq8Qlfr_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CDD_HwTq8Meas_HwTq8RollgCntr_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_CDD_HwTq8Meas_RackLimrCcwEotSig8_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_CDD_HwTq8Meas_RackLimrCwEotSig8_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CDD_HwTq8Meas_RackLimrEotSig8Avl_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint16, RTE_VAR_INIT) Rte_CDD_McuDiagc_LoopCntr2MilliSec_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_CDD_MotAg5Meas_MotAg5CosRtAmpRecpr_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_CDD_MotAg5Meas_MotAg5CosRtOffs_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(SigQlfr1, RTE_VAR_INIT) Rte_CDD_MotAg5Meas_MotAg5MeclQlfr_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CDD_MotAg5Meas_MotAg5MeclRollgCntr_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_CDD_MotAg5Meas_MotAg5SinRtAmpRecpr_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_CDD_MotAg5Meas_MotAg5SinRtOffs_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_CDD_MotAg6Meas_MotAg6CosRtAmpRecpr_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_CDD_MotAg6Meas_MotAg6CosRtOffs_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(SigQlfr1, RTE_VAR_INIT) Rte_CDD_MotAg6Meas_MotAg6MeclQlfr_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CDD_MotAg6Meas_MotAg6MeclRollgCntr_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_CDD_MotAg6Meas_MotAg6SinRtAmpRecpr_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_CDD_MotAg6Meas_MotAg6SinRtOffs_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(s18p13, RTE_VAR_INIT) Rte_CDD_MotAgCmp_MotAgCumvAlgndCrf_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(s18p13, RTE_VAR_INIT) Rte_CDD_MotAgCmp_MotAgCumvAlgndMrf_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CDD_MotAgCmp_MotAgCumvAlgndVld_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint16, RTE_VAR_INIT) Rte_CDD_MotCtrlMgr_FastLoopCntr_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_CDD_MotCtrlMgr_MotAg5Cos_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint16, RTE_VAR_INIT) Rte_CDD_MotCtrlMgr_MotAg5Mecl_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint16, RTE_VAR_INIT) Rte_CDD_MotCtrlMgr_MotAg5RawMecl_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_CDD_MotCtrlMgr_MotAg5Sin_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_CDD_MotCtrlMgr_MotAg6Cos_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint16, RTE_VAR_INIT) Rte_CDD_MotCtrlMgr_MotAg6Mecl_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint16, RTE_VAR_INIT) Rte_CDD_MotCtrlMgr_MotAg6RawMecl_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_CDD_MotCtrlMgr_MotAg6Sin_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(Ary1D_u0p16_8, RTE_VAR_INIT) Rte_CDD_MotCtrlMgr_MotAgBuf_Ary1D; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CDD_MotCtrlMgr_MotAgBufIdx_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(s15p16, RTE_VAR_INIT) Rte_CDD_MotCtrlMgr_MotAgCumvAlgndMrfRev_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CDD_MotCtrlMgr_MotAgCumvInid_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(Ary1D_u32_8, RTE_VAR_INIT) Rte_CDD_MotCtrlMgr_MotAgTiBuf_Ary1D; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_CDD_MotCtrlMgr_MotCurrAdcVlyA_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_CDD_MotCtrlMgr_MotCurrAdcVlyB_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_CDD_MotCtrlMgr_MotCurrAdcVlyC_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_CDD_MotCtrlMgr_MotCurrCorrdA_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_CDD_MotCtrlMgr_MotCurrCorrdB_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_CDD_MotCtrlMgr_MotCurrCorrdC_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_CDD_MotCtrlMgr_MotCurrDax_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_CDD_MotCtrlMgr_MotCurrQax_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CDD_MotCtrlMgr_MotCurrRollgCntr1_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_CDD_MotCtrlMgr_MotVltgDax_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_CDD_MotCtrlMgr_MotVltgDaxFild_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_CDD_MotCtrlMgr_MotVltgQax_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_CDD_MotCtrlMgr_MotVltgQaxFild_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint16, RTE_VAR_INIT) Rte_CDD_MotCtrlMgr_Ntc5DErrCnt_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint32, RTE_VAR_INIT) Rte_CDD_MotCtrlMgr_PhaOnTiSumA_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint32, RTE_VAR_INIT) Rte_CDD_MotCtrlMgr_PhaOnTiSumB_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint32, RTE_VAR_INIT) Rte_CDD_MotCtrlMgr_PhaOnTiSumC_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint16, RTE_VAR_INIT) Rte_CDD_MotCtrlMgr_SlowLoopCntr_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_CDD_MotVel_MotVelCrf_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_CDD_MotVel_MotVelMrf_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CDD_MotVel_MotVelVld_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CDD_RamMem_GlbRamEccSngBitCntrOutp_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CDD_RamMem_LclRamEccSngBitCntrOutp_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_CmnMfgSrv_AssiLnrGain_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CmnMfgSrv_AssiLnrGainEna_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CmnMfgSrv_AssiMechTEstimnDi_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CmnMfgSrv_DampgCmdBasDi_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CmnMfgSrv_DutyCycThermProtnDi_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CmnMfgSrv_EotProtnDi_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CmnMfgSrv_FricLrngDi_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_CmnMfgSrv_HwAg0_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CmnMfgSrv_HysCmpCmdDi_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint32, RTE_VAR_INIT) Rte_CmnMfgSrv_IgnCntr_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CmnMfgSrv_InertiaCmpVelCmdDi_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CmnMfgSrv_LoaScaDi_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CmnMfgSrv_MfgDiagcInhb_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(MfgEnaSt1, RTE_VAR_INIT) Rte_CmnMfgSrv_MfgEnaSt_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint16, RTE_VAR_INIT) Rte_CmnMfgSrv_MotAg0Mecl_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint16, RTE_VAR_INIT) Rte_CmnMfgSrv_MotAg1Mecl_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint16, RTE_VAR_INIT) Rte_CmnMfgSrv_MotAgMecl_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CmnMfgSrv_PullCmpCmdDi_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CmnMfgSrv_PullCmpLrngDi_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CmnMfgSrv_RtnCmdDi_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CmnMfgSrv_StallMotTqLimDi_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CmnMfgSrv_SysMotTqCmdRampRateDi_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CmnMfgSrv_SysStImdtTranReqOff_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CmnMfgSrv_SysStReqEnaOvrd_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_CmnMfgSrv_VehSpdOvrd_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CmnMfgSrv_VehSpdOvrdEna_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_CmplncErr_CmplncErrMotToPinion_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_CmplncErr_CmplncErrPinionToHw_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CurrMeasCorrln_CurrMeasCorrlnSts_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CurrMeasCorrln_CurrMeasIdptSig_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_CurrMeasCorrln_CurrMotSumABC_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CustDiag_ClrDiagcReq_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CustDiag_CustXcpEna_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CustDiag_FordAbsPrsnt_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CustDiag_FordActvNiblCtrlEnad_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CustDiag_FordActvParkAssiEnad_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CustDiag_FordActvRtnEnad_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CustDiag_FordAfsEquid_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CustDiag_FordBrkPlsRejctnEnad_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CustDiag_FordDrvrSteerRcmdnEnad_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CustDiag_FordEngTqClass_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CustDiag_FordEscPrsnt_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CustDiag_FordEvasSteerAssiEnad_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CustDiag_FordLaneCentrAssiEnad_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CustDiag_FordLaneDprtrWarnEnad_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CustDiag_FordLaneKeepAssiEnad_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CustDiag_FordPullDriftCmpEnad_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CustDiag_FordResrchFctEnad_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CustDiag_FordSelDrvModEnad_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CustDiag_FordSoftEndStopEnad_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(sint16, RTE_VAR_INIT) Rte_CustDiag_FordSrvPullDriftCmpRstVal_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CustDiag_FordStrtStopSt_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CustDiag_FordTqSteerCmpEnad_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CustDiag_FordTrfcJamAssiEnad_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CustDiag_FordTrlrBackupAssi5WhlEnad_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CustDiag_FordTrlrBackupAssiEnad_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CustDiag_FordTrlrBackupAssiTrigEnad_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CustDiag_RstReq_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CustDiag_RtnDC00Req_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_Dampg_DampgCmdBas_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_Dampg_DampgCmdOvrl_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_Dampg_DampgCmdSca_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_DampgPahSum_DampgCmd_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_DiagcMgr_ClrDiagcFlgProxy_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_DiagcMgr_DiagcStsCtrldShtDwnFltPrsnt_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_DiagcMgr_DiagcStsNonRcvrlReqDiFltPrsnt_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_DiagcMgr_SysDiMotTqCmdSca_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_DiagcMgr_SysDiRampRate_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_DiagcMgr_SysStFltOutpReqDi_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_DrvrTqEstimn_DrvrTqEstimd_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_DualCtrlrOutpMgr_DualEcuFltMtgtnEna_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_DualCtrlrOutpMgr_DualEcuFltMtgtnSca_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_DualCtrlrOutpMgr_DualEcuMotCtrlMtgtnEna_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(ImcArbnRxSts1, RTE_VAR_INIT) Rte_DualCtrlrOutpMgr_ImcSysStVld_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_DualEcuIdn_EcuComTiOut_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_DualEcuIdn_EcuId_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint16, RTE_VAR_INIT) Rte_DutyCycThermProtn_DutyCycThermProtnMaxOutp_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint32, RTE_VAR_INIT) Rte_DutyCycThermProtn_IgnTiOff_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_DutyCycThermProtn_ThermDutyCycProtnLoadDptLim_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_DutyCycThermProtn_ThermDutyCycProtnTDptLim_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_DutyCycThermProtn_ThermLimSlowFilMax_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_DutyCycThermProtn_ThermMotTqLim_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_DutyCycThermProtn_ThermRednFac_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_DutyCycThermProtn_VehTiVld_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_EcuTMeas_DiagcStsLimdTPrfmnc_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_EcuTMeas_EcuTFild_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_ElecPwrCns_ElecInpPwrEstim_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_ElecPwrCns_SplyCurrEstim_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_EotLrng_HwAgCcwDetd_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_EotLrng_HwAgCwDetd_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_EotLrng_HwAgDiDiagSts_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_EotLrng_HwAgEotCcw_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_EotLrng_HwAgEotCw_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_EotProtn_EotActvCmd_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_EotProtn_EotAssiSca_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_EotProtn_EotDampgCmd_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_EotProtn_EotMotTqLim_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_EotProtnFwl_EotActvCmdLimd_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_EotProtnFwl_EotDampgCmdLimd_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_FordCanDtcInhb_FordCanDtcInhb_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_FordCanDtcInhb_FordCanDtcInhb8_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_FordCanDtcInhb_FordEpsLifeCycMod_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_FordCmdArbn_FordActvNiblCtrlArbnCmd_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_FordCmdArbn_FordDrvrSteerRcmdnArbnCmd_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_FordCmdArbn_FordDrvrSteerRcmdnFeatSt_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_FordCmdArbn_FordEvasSteerAssiArbnCmd_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_FordCmdArbn_FordExtAgCtrlArbnCmd_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_FordCmdArbn_FordExtAgCtrlFeatSt_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_FordCmdArbn_FordLaneDprtrWarnArbnCmd_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_FordCmdArbn_FordLaneKeepAssiArbnCmd_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_FordCmdArbn_FordLatCtrlArbnCmd_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_FordCmdArbn_FordPullDriftCmpArbnCmd_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_FordCmdArbn_FordPullDriftCmpLrngArbnCmd_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_FordCmdArbn_FordSpare1ArbnCmd_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_FordCmdArbn_FordSpare1FeatSt_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_FordCmdArbn_FordSpare2ArbnCmd_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_FordCmdArbn_FordSpare2FeatSt_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_FordCmdArbn_FordSpare3ArbnCmd_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_FordCmdArbn_FordSpare3FeatSt_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_FordCmdArbn_FordSteerModlSts_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_FordCmdArbn_FordSteerTqDstbcRejctnArbnCmd_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_FordCmdArbn_FordSysOperMotTqCmdSca_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_FordDualEcuFltDiagcCom_FordCtcIdx_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_FordDualEcuFltDiagcCom_FordCtcSts_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_FordHwAgArbn_FordCmpdHwPosn_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(Ford_StePinCompAnEst_D_Qf, RTE_VAR_INIT) Rte_FordHwAgArbn_FordCmpdHwPosnQlyFac_Ford_StePinCompAnEst_D_Qf; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_FordHwAgArbn_FordCmpdHwPosnQlyFac8_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_FordHwAgArbn_FordCmpdHwPosntoSerlCom_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_FordHwAgArbn_FordHwVelVld_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_FordHwAgArbn_FordPosnOffsVld_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_FordHwAgArbn_FordRelHwPosn_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_FordHwAgArbn_FordRelHwPosnVld_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_FordHwAgArbn_FordRelHwPosntoSerlCom_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_FordHwAgArbn_FordSteerAgClrFlg_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_FordHwTqCdng_AvlMotTq_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(s23pm8, RTE_VAR_INIT) Rte_FordHwTqCdng_FordAppldFinalMotTq_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_FordHwTqCdng_FordAppldFinalMotTqVld_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(s8p7, RTE_VAR_INIT) Rte_FordHwTqCdng_FordBoostCrvAssiTq_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(s5p10, RTE_VAR_INIT) Rte_FordHwTqCdng_FordBoostCrvInpTq_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(s5p10, RTE_VAR_INIT) Rte_FordHwTqCdng_FordInpTqRaw_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_FordHwTqCdng_FordInpTqRawVld_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_FordHwTqCdng_FordMaxAsscTq_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(s23pm8, RTE_VAR_INIT) Rte_FordHwTqCdng_FordReqdFinalMotTq_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(s5p10, RTE_VAR_INIT) Rte_FordHwTqCdng_FordSumBoostCrvInpTq_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_FordHwTqCdng_HwTqHysOvrl_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_FordHwTqCmdOvrlLimr_FordColTqOvrl_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_FordHwTqCmdOvrlLimr_FordDrvrSteerRcmdnFctCallSts_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_FordHwTqCmdOvrlLimr_FordDrvrSteerRcmdnTqReq_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_FordHwTqCmdOvrlLimr_FordEvasSteerAssiFctCallSts_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_FordHwTqCmdOvrlLimr_FordLaneKeepAssiFctCallSts_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_FordMotTqCmdOvrlLimr_FordActvNiblCtrlFctCallSts_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_FordMotTqCmdOvrlLimr_FordLaneDprtrWarnFctCallSts_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_FordMotTqCmdOvrlLimr_FordLatCtrlFctCallSts_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_FordMotTqCmdOvrlLimr_FordMotTqCmdOvrl_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_FordMotTqCmdOvrlLimr_FordPullDriftCmpFctCallSts_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_FordMotTqCmdOvrlLimr_FordSteerTqDstbcRejctnFctCallSts_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_FordMsg077BusHiSpd_FordClrDiagcFlgProxy_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_FordMsg077BusHiSpd_FordVehLatACmpd_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint16, RTE_VAR_INIT) Rte_FordMsg077BusHiSpd_FordVehLatACmpdRaw_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_FordMsg077BusHiSpd_FordVehLatACmpdVld_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_FordMsg077BusHiSpd_FordVehLgtACmpd_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint16, RTE_VAR_INIT) Rte_FordMsg077BusHiSpd_FordVehLgtACmpdRaw_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_FordMsg077BusHiSpd_FordVehLgtACmpdVld_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_FordMsg077BusHiSpd_FordVehSpdOverGnd_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint16, RTE_VAR_INIT) Rte_FordMsg077BusHiSpd_FordVehSpdOverGndRaw_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_FordMsg077BusHiSpd_FordVehSpdOverGndVld_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_FordMsg077BusHiSpd_FordVehYawRateCmpd_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint16, RTE_VAR_INIT) Rte_FordMsg077BusHiSpd_FordVehYawRateCmpdRaw_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_FordMsg077BusHiSpd_FordVehYawRateCmpdVld_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_FordMsg07DBusHiSpd_FordTrlrBackUpAssiEnad_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint16, RTE_VAR_INIT) Rte_FordMsg07DBusHiSpd_FordVehActBrkTqRaw_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_FordMsg07DBusHiSpd_FordVehBrkTqVld_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint16, RTE_VAR_INIT) Rte_FordMsg07DBusHiSpd_FordVehVertACmpdRaw_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_FordMsg07DBusHiSpd_FordVehVertAVld_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(Ford_StePw_B_Rq, RTE_VAR_INIT) Rte_FordMsg07EBusHiSpd_FordVehSteerPwrReq_Ford_StePw_B_Rq; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(Ford_DrvSteActv_B_Stat, RTE_VAR_INIT) Rte_FordMsg082BusHiSpd_FordVehDrvrSteerActvnSts_Ford_DrvSteActv_B_Stat; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_FordMsg082BusHiSpd_FordVehDrvrSteerTqReq_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(Ford_TrlrHitchLamp_D_Rqst, RTE_VAR_INIT) Rte_FordMsg082BusHiSpd_FordVehReCamrLiSts_Ford_TrlrHitchLamp_D_Rqst; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(Ford_SAPPAngleControlStat1, RTE_VAR_INIT) Rte_FordMsg082BusHiSpd_FordVehSAPPAgCtrlSts1_Ford_SAPPAngleControlStat1; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(Ford_SAPPAngleControlStat2, RTE_VAR_INIT) Rte_FordMsg082BusHiSpd_FordVehSAPPAgCtrlSts2_Ford_SAPPAngleControlStat2; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(Ford_SAPPAngleControlStat3, RTE_VAR_INIT) Rte_FordMsg082BusHiSpd_FordVehSAPPAgCtrlSts3_Ford_SAPPAngleControlStat3; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(Ford_SAPPAngleControlStat4, RTE_VAR_INIT) Rte_FordMsg082BusHiSpd_FordVehSAPPAgCtrlSts4_Ford_SAPPAngleControlStat4; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(Ford_SAPPAngleControlStat5, RTE_VAR_INIT) Rte_FordMsg082BusHiSpd_FordVehSAPPAgCtrlSts5_Ford_SAPPAngleControlStat5; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(Ford_SAPPAngleControlStat6, RTE_VAR_INIT) Rte_FordMsg082BusHiSpd_FordVehSAPPAgCtrlSts6_Ford_SAPPAngleControlStat6; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(Ford_VehVTrlrAid_B_Rq, RTE_VAR_INIT) Rte_FordMsg082BusHiSpd_FordVehVelTrlrAidReq_Ford_VehVTrlrAid_B_Rq; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_FordMsg082BusHiSpd_InpTqRaw_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_FordMsg083BusHiSpd_FordVehTurnSigSwtStsRaw_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_FordMsg083BusHiSpd_FordVehTurnSigVld_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_FordMsg091BusHiSpd_FordTrlrBackUpAssiEnad_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_FordMsg091BusHiSpd_FordVehYawRate_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(Ford_VehYaw_W_Actl, RTE_VAR_INIT) Rte_FordMsg091BusHiSpd_FordVehYawRateRaw_Ford_VehYaw_W_Actl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_FordMsg091BusHiSpd_FordVehYawRateRawVld_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_FordMsg167BusHiSpd_FordInvldMsgDiagcInhb_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_FordMsg167BusHiSpd_FordMfgDiagcInhb_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_FordMsg167BusHiSpd_FordMissMsgDiagcInhb_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_FordMsg167BusHiSpd_FordTrlrBackUpAssiEnad_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(Ford_ElPw_D_StatStrtStop, RTE_VAR_INIT) Rte_FordMsg167BusHiSpd_FordVehElecPwrStrtStopSts_Ford_ElPw_D_StatStrtStop; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(Ford_ElPw_D_Stat, RTE_VAR_INIT) Rte_FordMsg167BusHiSpd_FordVehElecPwrSts_Ford_ElPw_D_Stat; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_FordMsg167BusHiSpd_FordVehPrpnWhlTq_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint16, RTE_VAR_INIT) Rte_FordMsg167BusHiSpd_FordVehPrpnWhlTqRaw_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_FordMsg167BusHiSpd_FordVehPrpnWhlTqVld_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(Ford_PwPckTq_D_Stat, RTE_VAR_INIT) Rte_FordMsg167BusHiSpd_FordVehPwrpkTqSts_Ford_PwPckTq_D_Stat; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_FordMsg202BusHiSpd_FordInvldMsgDiagcInhb_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_FordMsg202BusHiSpd_FordMfgDiagcInhb_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_FordMsg202BusHiSpd_FordMissMsgDiagcInhb_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_FordMsg202BusHiSpd_FordTrlrBackupAssiEnad_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(Ford_GearRvrse_D_Actl, RTE_VAR_INIT) Rte_FordMsg202BusHiSpd_FordVehGearRvsSts_Ford_GearRvrse_D_Actl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_FordMsg202BusHiSpd_FordVehGearRvsStsRaw_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_FordMsg202BusHiSpd_FordVehGearRvsStsVld_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_FordMsg202BusHiSpd_FordVehSpdChksEngModl_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_FordMsg202BusHiSpd_FordVehSpdCntrEngModl_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_FordMsg202BusHiSpd_FordVehSpdEngModLoQlyVld_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_FordMsg202BusHiSpd_FordVehSpdEngModl_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint16, RTE_VAR_INIT) Rte_FordMsg202BusHiSpd_FordVehSpdEngModlRaw_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_FordMsg202BusHiSpd_FordVehSpdEngModlVld_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(Ford_VehVActlEng_D_Qf, RTE_VAR_INIT) Rte_FordMsg202BusHiSpd_FordVehSpdQlyFacEngModl_Ford_VehVActlEng_D_Qf; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(Ford_VehVTrlrAid_B_Avail, RTE_VAR_INIT) Rte_FordMsg202BusHiSpd_FordVehTrlrAidAvl_Ford_VehVTrlrAid_B_Avail; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_FordMsg202BusHiSpd_FordVehTrlrAidAvlRaw_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_FordMsg202BusHiSpd_FordVehTrlrBackupAssiAvlVld_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_FordMsg213BusHiSpd_FordVehAbsActv_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_FordMsg213BusHiSpd_FordVehAbsEscStsVld_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_FordMsg213BusHiSpd_FordVehCllsnMtgtnByBrkgDenied_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_FordMsg213BusHiSpd_FordVehCllsnMtgtnByBrkgDisad_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_FordMsg213BusHiSpd_FordVehEscActv_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_FordMsg215BusHiSpd_FordTrlrBackupAssiEnad_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(Ford_TrlrAidMde_D_Rq, RTE_VAR_INIT) Rte_FordMsg215BusHiSpd_FordVehTrlrAidModReq_Ford_TrlrAidMde_D_Rq; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_FordMsg215BusHiSpd_FordVehTrlrAidModReqVld_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_FordMsg216BusHiSpd_FordTrlrBackUpAssiEnad_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_FordMsg216BusHiSpd_FordVehFrntLeWhlCntrDirVld_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(FordVehWhlDirRaw1, RTE_VAR_INIT) Rte_FordMsg216BusHiSpd_FordVehFrntLeWhlDirRaw_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(Ford_WhlRotatFl_No_Cnt, RTE_VAR_INIT) Rte_FordMsg216BusHiSpd_FordVehFrntLeWhlRollgCntr_Ford_WhlRotatFl_No_Cnt; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_FordMsg216BusHiSpd_FordVehFrntRiWhlCntrDirVld_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(FordVehWhlDirRaw1, RTE_VAR_INIT) Rte_FordMsg216BusHiSpd_FordVehFrntRiWhlDirRaw_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(Ford_WhlRotatFr_No_Cnt, RTE_VAR_INIT) Rte_FordMsg216BusHiSpd_FordVehFrntRiWhlRollgCntr_Ford_WhlRotatFr_No_Cnt; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_FordMsg216BusHiSpd_FordVehReLeWhlCntrDirVld_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(FordVehWhlDirRaw1, RTE_VAR_INIT) Rte_FordMsg216BusHiSpd_FordVehReLeWhlDirRaw_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(Ford_WhlRotatRl_No_Cnt, RTE_VAR_INIT) Rte_FordMsg216BusHiSpd_FordVehReLeWhlRollgCntr_Ford_WhlRotatRl_No_Cnt; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_FordMsg216BusHiSpd_FordVehReRiWhlCntrDirVld_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(FordVehWhlDirRaw1, RTE_VAR_INIT) Rte_FordMsg216BusHiSpd_FordVehReRiWhlDirRaw_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(Ford_WhlRotatRr_No_Cnt, RTE_VAR_INIT) Rte_FordMsg216BusHiSpd_FordVehReRiWhlRollgCntr_Ford_WhlRotatRr_No_Cnt; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_FordMsg217BusHiSpd_FordInvldMsgDiagcInhb_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_FordMsg217BusHiSpd_FordMfgDiagcInhb_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_FordMsg217BusHiSpd_FordMissMsgDiagcInhb_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_FordMsg217BusHiSpd_FordTrlrBackupAssiEnad_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_FordMsg217BusHiSpd_FordVehFrntLeWhlSpd_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint16, RTE_VAR_INIT) Rte_FordMsg217BusHiSpd_FordVehFrntLeWhlSpdRaw_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_FordMsg217BusHiSpd_FordVehFrntLeWhlSpdVld_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_FordMsg217BusHiSpd_FordVehFrntRiWhlSpd_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint16, RTE_VAR_INIT) Rte_FordMsg217BusHiSpd_FordVehFrntRiWhlSpdRaw_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_FordMsg217BusHiSpd_FordVehFrntRiWhlSpdVld_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_FordMsg217BusHiSpd_FordVehReLeWhlSpd_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint16, RTE_VAR_INIT) Rte_FordMsg217BusHiSpd_FordVehReLeWhlSpdRaw_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_FordMsg217BusHiSpd_FordVehReLeWhlSpdVld_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_FordMsg217BusHiSpd_FordVehReRiWhlSpd_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint16, RTE_VAR_INIT) Rte_FordMsg217BusHiSpd_FordVehReRiWhlSpdRaw_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_FordMsg217BusHiSpd_FordVehReRiWhlSpdVld_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_FordMsg230BusHiSpd_FordTrlrBackupAssiEnad_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(Ford_GearLvrPos_D_Actl, RTE_VAR_INIT) Rte_FordMsg230BusHiSpd_FordVehGearLvrPosn_Ford_GearLvrPos_D_Actl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_FordMsg230BusHiSpd_FordVehGearLvrPosnVldInt_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_FordMsg2FDBusHiSpd_FordVehEvasSteerAssiReq_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_FordMsg2FDBusHiSpd_FordVehEvasSteerAssiReqVld_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_FordMsg3B3BusHiSpd_FordInvldMsgDiagcInhb_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_FordMsg3B3BusHiSpd_FordMfgDiagcInhb_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_FordMsg3B3BusHiSpd_FordMissMsgDiagcInhb_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_FordMsg3B3BusHiSpd_FordTrlrBackUpAssiEnad_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(Ford_Ignition_Status, RTE_VAR_INIT) Rte_FordMsg3B3BusHiSpd_FordVehIgnSts_Ford_Ignition_Status; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_FordMsg3B3BusHiSpd_FordVehIgnStsVld_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(Ford_LifeCycMde_D_Actl, RTE_VAR_INIT) Rte_FordMsg3B3BusHiSpd_FordVehLifeCycMod_Ford_LifeCycMde_D_Actl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_FordMsg3CABusHiSpd_FordVehLaneAssiImgProcgModlAVld_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_FordMsg3CABusHiSpd_FordVehLaneDetnWarnInten_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_FordMsg3CABusHiSpd_FordVehLaneDetnWarnSts_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_FordMsg3CABusHiSpd_FordVehLaneKeepSysCrvt_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint16, RTE_VAR_INIT) Rte_FordMsg3CABusHiSpd_FordVehLaneKeepSysCrvtRaw_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_FordMsg3CABusHiSpd_FordVehLaneKeepSysRampTyp_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_FordMsg3CABusHiSpd_FordVehLaneKeepSysReqdAg_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint16, RTE_VAR_INIT) Rte_FordMsg3CABusHiSpd_FordVehLaneKeepSysReqdAgRaw_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_FordMsg3CABusHiSpd_FordVehLaneKeepSysSts_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_FordMsg3CCBusHiSpd_FordVehLoSpdMtnCtrlBrkTqReq_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_FordMsg3D3BusHiSpd_FordVehLatCtrlCrvt_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_FordMsg3D3BusHiSpd_FordVehLatCtrlCrvtRate_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint16, RTE_VAR_INIT) Rte_FordMsg3D3BusHiSpd_FordVehLatCtrlCrvtRateRaw_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint16, RTE_VAR_INIT) Rte_FordMsg3D3BusHiSpd_FordVehLatCtrlCrvtRaw_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_FordMsg3D3BusHiSpd_FordVehLatCtrlHandsOffDetnTqStimlsReq_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_FordMsg3D3BusHiSpd_FordVehLatCtrlImgProcrModlAVld_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_FordMsg3D3BusHiSpd_FordVehLatCtrlPah_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_FordMsg3D3BusHiSpd_FordVehLatCtrlPahOffs_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint16, RTE_VAR_INIT) Rte_FordMsg3D3BusHiSpd_FordVehLatCtrlPahOffsRaw_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint16, RTE_VAR_INIT) Rte_FordMsg3D3BusHiSpd_FordVehLatCtrlPahRaw_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_FordMsg3D3BusHiSpd_FordVehLatCtrlPrcsn_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_FordMsg3D3BusHiSpd_FordVehLatCtrlRampTyp_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_FordMsg3D3BusHiSpd_FordVehLatCtrlReq_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_FordMsg3D3BusHiSpd_FordVehLatCtrlRingMax_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint16, RTE_VAR_INIT) Rte_FordMsg3D7BusHiSpd_FordVehCllsnMtgtnByBrkgLatDstRaw_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint16, RTE_VAR_INIT) Rte_FordMsg3D7BusHiSpd_FordVehCllsnMtgtnByBrkgLgtDstRaw_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_FordMsg3D7BusHiSpd_FordVehCllsnMtgtnByBrkgObjDataConfLvlRaw_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_FordMsg3D7BusHiSpd_FordVehCllsnMtgtnByBrkgObjTypClassnRaw_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint16, RTE_VAR_INIT) Rte_FordMsg3D7BusHiSpd_FordVehCllsnMtgtnByBrkgRelLatVelRaw_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint16, RTE_VAR_INIT) Rte_FordMsg3D7BusHiSpd_FordVehCllsnMtgtnByBrkgRelLgtVelRaw_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_FordMsg3D7BusHiSpd_FordVehCllsnMtgtnByBrkgTiToCllsnRaw_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_FordMsg3D7BusHiSpd_FordVehEvasSteerAssiEnadReqRaw_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_FordMsg3D7BusHiSpd_FordVehEvasSteerAssiImgProcrModlAVld_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_FordMsg40ABusHiSpd_FordMfgDiagcInhb_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_FordMsg40ABusHiSpd_FordMissMsgDiagcInhb_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_FordMsg40ABusHiSpd_FordVehGlbRealTi_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(Ary1D_u08_17, RTE_VAR_INIT) Rte_FordMsg40ABusHiSpd_FordVehIdnNr_Ary1D; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_FordMsg40ABusHiSpd_FordVehTireCircum_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_FordMsg414BusHiSpd_FordVehSteerPinionAgOffs_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint16, RTE_VAR_INIT) Rte_FordMsg414BusHiSpd_FordVehSteerPinionAgOffsRaw_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_FordMsg414BusHiSpd_FordVehSteerPinionAgOffsVld_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_FordMsg414BusHiSpd_FordVehSteerPinionChksVld_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_FordMsg414BusHiSpd_FordVehSteerPinionCntrVld_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_FordMsg414BusHiSpd_FordVehSteerPinionOffsChks_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_FordMsg414BusHiSpd_FordVehSteerPinionOffsCnt_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(Ford_StePinOffst_D_Stat, RTE_VAR_INIT) Rte_FordMsg414BusHiSpd_FordVehSteerPinionOffsSts_Ford_StePinOffst_D_Stat; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_FordMsg414BusHiSpd_FordVehSteerPinionOffsStsRaw_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_FordMsg415BusHiSpd_FordInvldMsgDiagcInhb_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_FordMsg415BusHiSpd_FordMfgDiagcInhb_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_FordMsg415BusHiSpd_FordMissMsgDiagcInhb_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_FordMsg415BusHiSpd_FordTrlrBackupAssiEnad_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(Ford_LsmcBrkDecel_D_Stat, RTE_VAR_INIT) Rte_FordMsg415BusHiSpd_FordVehLoSpdMtnCtrlBrkSprtSts_Ford_LsmcBrkDecel_D_Stat; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_FordMsg415BusHiSpd_FordVehLoSpdMtnCtrlBrkSprtStsRaw_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_FordMsg415BusHiSpd_FordVehLoSpdMtnCtrlBrkSprtVld_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_FordMsg415BusHiSpd_FordVehSpdBrkModl_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_FordMsg415BusHiSpd_FordVehSpdBrkModlLoQlyVld_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint16, RTE_VAR_INIT) Rte_FordMsg415BusHiSpd_FordVehSpdBrkModlRaw_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_FordMsg415BusHiSpd_FordVehSpdBrkModlVld_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_FordMsg415BusHiSpd_FordVehSpdChksBrkModl_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_FordMsg415BusHiSpd_FordVehSpdCntrBrkModl_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(Ford_VehVActlBrk_D_Qf, RTE_VAR_INIT) Rte_FordMsg415BusHiSpd_FordVehSpdQlyFacBrkModl_Ford_VehVActlBrk_D_Qf; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(Ford_SelDrvMdeSte_D_Stat, RTE_VAR_INIT) Rte_FordMsg417BusHiSpd_FordVehSelDrvModSteerSts_Ford_SelDrvMdeSte_D_Stat; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(Ford_TrlrAidEnbl_D2_Stat, RTE_VAR_INIT) Rte_FordMsg417BusHiSpd_FordVehTrlrAidEnaSts_Ford_TrlrAidEnbl_D2_Stat; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(Ford_TrlrAidMsgTxt_D2_Rq, RTE_VAR_INIT) Rte_FordMsg417BusHiSpd_FordVehTrlrAidMsgTxtReq_Ford_TrlrAidMsgTxt_D2_Rq; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_FordMsg41ABusHiSpd_FordVehOutdAirT_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint16, RTE_VAR_INIT) Rte_FordMsg41ABusHiSpd_FordVehOutdAirTRaw_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(Ford_SelDrvMdeChassis2_D_Rq, RTE_VAR_INIT) Rte_FordMsg41EBusHiSpd_FordVehPenSelDrvMod_Ford_SelDrvMdeChassis2_D_Rq; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_FordMsg41EBusHiSpd_FordVehSelDrvModChassisVld_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_FordMsg430BusHiSpd_FordMfgDiagcInhb_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_FordMsg430BusHiSpd_FordMissMsgDiagcInhb_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_FordMsg430BusHiSpd_FordVehOdom_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_FordMsg443BusHiSpd_FordTrlrBackUpAssiEnad_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(Ford_TrlrLampCnnct_B_Actl, RTE_VAR_INIT) Rte_FordMsg443BusHiSpd_FordVehTrlrLampCnctnStsRaw_Ford_TrlrLampCnnct_B_Actl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_FordMsg459BusHiSpd_FordTrlrBackupAssiEnad_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_FordMsg459BusHiSpd_FordVehTrlrAidAcqSts_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint16, RTE_VAR_INIT) Rte_FordMsg459BusHiSpd_FordVehTrlrAidHitchAg_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint16, RTE_VAR_INIT) Rte_FordMsg459BusHiSpd_FordVehTrlrAidHitchAgRate_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_FordMsg459BusHiSpd_FordVehTrlrAidIdnVal_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_FordMsg459BusHiSpd_FordVehTrlrAidTrakgSt_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_FordMsg459BusHiSpd_FordVehTrlrAidTrakgStVld_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_FordMsg459BusHiSpd_FordVehTrlrAidTrlrRvsGuidcSts_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_FordMsg459BusHiSpd_FordVehTrlrBallToAxle_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_FordMsg459BusHiSpd_FordVehTrlrHitchAgVld_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_FordMsg459BusHiSpd_FordVehTrlrHitchRateVld_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_FordMsg459BusHiSpd_FordVehTrlrTarVld_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_FordMsg459BusHiSpd_TrlrAidStsThreePrsntInt_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_FordMsg47ABusHiSpd_FordVehTrlrAidKnobBtn_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint16, RTE_VAR_INIT) Rte_FordMsg47ABusHiSpd_FordVehTrlrAidKnobPosn_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_FordMsg47ABusHiSpd_FordVehTrlrBackupAssiKnobPosVld_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_FordMsg47ABusHiSpd_FordVehTrlrBackupAssiKnobVld_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint16, RTE_VAR_INIT) Rte_FordMsg4B0BusHiSpd_FordVehYawStabyRaw_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_FordMsg4B0BusHiSpd_FordVehYawStabyVld_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_FordMsg5B5BusHiSpd_Ford_PSCM_AutoSarNMControl_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_FordMsg5B5BusHiSpd_Ford_PSCM_AutoSarNMNodeId_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_FordMsg5B5BusHiSpd_Ford_PSCM_AutoSarNMReserved1_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_FordMsg5B5BusHiSpd_Ford_PSCM_AutoSarNMReserved2_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_FordMsg5B5BusHiSpd_Ford_PSCM_AutoSarNMReserved3_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_FordMsg5B5BusHiSpd_Ford_PSCM_AutoSarNMReserved4_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_FordMsg5B5BusHiSpd_Ford_PSCM_GWNMProxy_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_FordMsg5B5BusHiSpd_Ford_PSCM_GWOnBoardTester_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(Ford_EPAS_Failure, RTE_VAR_INIT) Rte_FordSysSt_FordEpsFailr_Ford_EPAS_Failure; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(FordEpsSysSt1, RTE_VAR_INIT) Rte_FordSysSt_FordEpsSysSt_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_FordSysSt_FordPwrSplyEnaReq_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(Ford_SteMdule_D_Stat, RTE_VAR_INIT) Rte_FordSysSt_FordSteerModlSts_Ford_SteMdule_D_Stat; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_FordSysSt_OperRampRate_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_FordSysSt_OperScaFctr_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_FordSysSt_SysStReqEna_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_FordVehSpdArbn_FordVehSpd_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_FordVehSpdArbn_FordVehSpdLoQly_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_FordVehSpdArbn_FordVehSpdLoQlyVld_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_FordVehSpdArbn_FordVehSpdVld_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_FordVltgIf_FordEpsCurr_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_FordVltgIf_FordEpsCurrVal_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_FordVltgIf_FordEpsVltg_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_FordVltgIf_FordEpsVltgVal_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_FordVltgIf_FordFeatThdSts_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_FordVltgIf_FordInhbBattVltgDiagc_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_FordVltgIf_FordMaxBattCurr_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_FordVltgIf_FordMinBattVltg_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_FordVltgIf_FordStrtStopSt_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_FordVltgIf_FordTrlrBackupAssiEnad_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_FordVltgIf_FordVltgOperRamp_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_FordVltgIf_FordVltgOperScar_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(FordVltgOperSt1, RTE_VAR_INIT) Rte_FordVltgIf_FordVltgOperSt_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_GateDrv0Ctrl_DiagcStsIvtr1Inactv_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_GateDrv0Ctrl_Ivtr1PwrDiscnctFltSts_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(IvtrFetFltPha1, RTE_VAR_INIT) Rte_GateDrv0Ctrl_IvtrFetFltPha_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(IvtrFetFltTyp1, RTE_VAR_INIT) Rte_GateDrv0Ctrl_IvtrFetFltTyp_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_GateDrv0Ctrl_MotDrvErrA_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_GateDrv0Ctrl_MotDrvErrB_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_GateDrv0Ctrl_MotDrvErrC_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_GateDrv0Ctrl_MotDrvr0IninTestCmpl_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_HiLoadStallLimr_StallMotTqLim_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_HwAg1Meas_HwAg1_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(SigQlfr1, RTE_VAR_INIT) Rte_HwAg1Meas_HwAg1Qlfr_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_HwAg1Meas_HwAg1RollgCntr_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_HwAgArbn_HwAg_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_HwAgCorrln_HwAgCorrlnSt_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_HwAgCorrln_HwAgIdptSig_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_HwAgSnsrls_HwAgSnsrls_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_HwAgSnsrls_HwAgSnsrlsConf_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_HwAgSnsrls_WhlFrqVld_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_HwAgSnsrls_WhlLeFrq_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_HwAgSnsrls_WhlRiFrq_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_HwAgSysArbn_HwAgFinal_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_HwAgSysArbn_HwAgNotCorrd_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_HwAgSysArbn_HwAgToMotAgCorrlnFltFld_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_HwAgSysArbn_HwAgToSerlCom_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_HwAgSysArbn_HwAgTrimPrfmd_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_HwAgSysArbn_HwAgVldToSerlCom_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_HwAgSysArbn_HwVel_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_HwAgSysArbn_HwVelToSerlCom_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_HwAgSysArbn_PinionAg_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_HwAgSysArbn_PinionAgConf_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_HwAgSysArbn_PinionVel_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_HwAgSysArbn_PinionVelConf_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_HwTq10Meas_HwTq10_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(SigQlfr1, RTE_VAR_INIT) Rte_HwTq10Meas_HwTq10Qlfr_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_HwTq10Meas_HwTq10RollgCntr_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_HwTq9Meas_HwTq9_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(SigQlfr1, RTE_VAR_INIT) Rte_HwTq9Meas_HwTq9Qlfr_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_HwTq9Meas_HwTq9RollgCntr_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_HwTqArbn_HwTq_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_HwTqCorrln_HwTqCorrlnSts_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_HwTqCorrln_HwTqIdptSig_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_HysCmp_HysCmpCmd_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_HysCmp_WhlImbRejctnAmp_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_ImcSigArbn_HwAgImcCorrd_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_ImcSigArbn_HwTqImcCorrd_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(SysSt1, RTE_VAR_INIT) Rte_ImcSigArbn_ImcSysSt_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_ImcSigArbn_ImcSysStVld_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_ImcSigArbn_MotVelCrfImcCorrd_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_ImcSigArbn_PosnServoHwAg_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_ImcSigArbn_PosnServoHwAgImcCorrd_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_ImcSigArbn_PosnServoIntgtrOffs_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_ImcSigArbn_PosnTrakgArbnFltMtgtnEna_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_ImcSigArbn_PosnTrakgIntgtrSt1_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_ImcSigArbn_PosnTrakgIntgtrSt1Offs_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_ImcSigArbn_PosnTrakgIntgtrSt2_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_ImcSigArbn_PosnTrakgIntgtrSt2Offs_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_ImcSigArbn_PullCmpLongTermIntgtrSt_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_ImcSigArbn_PullCmpLongTermIntgtrStOffs_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_ImcSigArbn_PullCmpShoTermIntgtrSt_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_ImcSigArbn_PullCmpShoTermIntgtrStOffs_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_ImcSigArbn_VehSpdImcCorrd_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_InertiaCmpVel_InertiaCmpDecelGainDi_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_InertiaCmpVel_InertiaCmpVelCmd_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_InertiaCmpVel_WhlImbRejctnAmp_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_LimrCdng_EotAssiScaCdnd_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_LimrCdng_EotMotTqLimCdnd_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_LimrCdng_StallMotTqLimCdnd_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_LimrCdng_SysMotTqCmdScaCdnd_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_LimrCdng_ThermMotTqLimCdnd_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_LimrCdng_VehSpdMotTqLimCdnd_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_LoaMgr_DiagcStsIvtr2Inactv_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_LoaMgr_HwTqLoaMtgtnEna_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_LoaMgr_LoaRateLim_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_LoaMgr_LoaSca_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(LoaSt1, RTE_VAR_INIT) Rte_LoaMgr_LoaSt_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_LoaMgr_MotAgLoaMtgtnEna_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_LoaMgr_MotAgSnsrlsAvl_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_LoaMgr_MotAndThermProtnLoaMod_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(SteerMod1, RTE_VAR_INIT) Rte_LoaMgr_VehSteerMod_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(u0p16, RTE_VAR_INIT) Rte_MotAg2Meas_MotAg2Mecl_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(SigQlfr1, RTE_VAR_INIT) Rte_MotAg2Meas_MotAg2MeclQlfr_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_MotAg2Meas_MotAg2MeclRollgCntr_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_MotAg2Meas_MotAg2VltgSqd_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(u0p16, RTE_VAR_INIT) Rte_MotAgCorrln_MotAgABErrTerm_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(u0p16, RTE_VAR_INIT) Rte_MotAgCorrln_MotAgACErrTerm_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(u0p16, RTE_VAR_INIT) Rte_MotAgCorrln_MotAgBCErrTerm_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_MotAgCorrln_MotAgMeclCorrlnSt_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_MotAgCorrln_MotAgMeclIdptSig_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_MotCtrlPrmEstimn_MotBackEmfConEstimd_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_MotCtrlPrmEstimn_MotInduDaxEstimd_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_MotCtrlPrmEstimn_MotInduDaxEstimdIvs_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_MotCtrlPrmEstimn_MotInduQaxEstimd_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_MotCtrlPrmEstimn_MotInduQaxEstimdIvs_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_MotCtrlPrmEstimn_MotREstimd_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_MotCurrPeakEstimn_MotCurrPeakEstimd_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_MotCurrPeakEstimn_MotCurrPeakEstimdFild_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_MotCurrRegCfg_MotAgElecDly_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_MotCurrRegCfg_MotDampgDax_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_MotCurrRegCfg_MotDampgQax_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_MotCurrRegCfg_MotIntglGainDax_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_MotCurrRegCfg_MotIntglGainQax_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_MotCurrRegCfg_MotPropGainDax_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_MotCurrRegCfg_MotPropGainQax_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(sint8, RTE_VAR_INIT) Rte_MotQuadDetn_MotDirInsts_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(MotQuad1, RTE_VAR_INIT) Rte_MotQuadDetn_MotQuad_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_MotRefMdl_MotBackEmfVltg_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_MotRefMdl_MotCurrAg_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_MotRefMdl_MotCurrDaxCmd_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_MotRefMdl_MotCurrDaxMax_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_MotRefMdl_MotCurrQaxCmd_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_MotRefMdl_MotReacncDax_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_MotRefMdl_MotReacncQax_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_MotRefMdl_MotVltgDaxFf_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_MotRefMdl_MotVltgDaxFfStat_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_MotRefMdl_MotVltgQaxFf_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_MotRefMdl_MotVltgQaxFfStat_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_MotRefMdl_MotVltgSatnIndFf_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_MotRplCoggCfg_MotAgElecDlyRpl_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_MotRplCoggCfg_MotCurrQaxToMotTqGain_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_MotRplCoggCfg_MotTqRplCoggOrder1Mgn_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_MotRplCoggCfg_MotTqRplCoggOrder1Pha_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_MotRplCoggCfg_MotTqRplCoggOrder2Mgn_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_MotRplCoggCfg_MotTqRplCoggOrder2Pha_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_MotRplCoggCfg_MotTqRplCoggOrder3Mgn_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_MotRplCoggCfg_MotTqRplCoggOrder3Pha_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_MotTqCmdSca_MotTqCmdMrfScad_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_MotTqTranlDampg_MotTqCmdCrfDampd_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_MotTqTranlDampg_MotTqCmdMrfDampd_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_MotTqTranlDampg_MotTqTranlDampgCmpl_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(sint8, RTE_VAR_INIT) Rte_PolarityCfg_AssiMechPolarity_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(sint8, RTE_VAR_INIT) Rte_PolarityCfg_HwAg0Polarity_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(sint8, RTE_VAR_INIT) Rte_PolarityCfg_HwAg1Polarity_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(sint8, RTE_VAR_INIT) Rte_PolarityCfg_HwAg2Polarity_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(sint8, RTE_VAR_INIT) Rte_PolarityCfg_HwAg3Polarity_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(sint8, RTE_VAR_INIT) Rte_PolarityCfg_HwAg4Polarity_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(sint8, RTE_VAR_INIT) Rte_PolarityCfg_HwAg5Polarity_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(sint8, RTE_VAR_INIT) Rte_PolarityCfg_HwAg6Polarity_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(sint8, RTE_VAR_INIT) Rte_PolarityCfg_HwAg7Polarity_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(sint8, RTE_VAR_INIT) Rte_PolarityCfg_HwTq0Polarity_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(sint8, RTE_VAR_INIT) Rte_PolarityCfg_HwTq1Polarity_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(sint8, RTE_VAR_INIT) Rte_PolarityCfg_HwTq2Polarity_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(sint8, RTE_VAR_INIT) Rte_PolarityCfg_HwTq3Polarity_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(sint8, RTE_VAR_INIT) Rte_PolarityCfg_HwTq4Polarity_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(sint8, RTE_VAR_INIT) Rte_PolarityCfg_HwTq5Polarity_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(sint8, RTE_VAR_INIT) Rte_PolarityCfg_HwTq6Polarity_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(sint8, RTE_VAR_INIT) Rte_PolarityCfg_HwTq7Polarity_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(sint8, RTE_VAR_INIT) Rte_PolarityCfg_MotAgMecl0Polarity_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(sint8, RTE_VAR_INIT) Rte_PolarityCfg_MotAgMecl1Polarity_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(sint8, RTE_VAR_INIT) Rte_PolarityCfg_MotAgMecl2Polarity_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(sint8, RTE_VAR_INIT) Rte_PolarityCfg_MotAgMecl3Polarity_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(sint8, RTE_VAR_INIT) Rte_PolarityCfg_MotAgMecl4Polarity_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(sint8, RTE_VAR_INIT) Rte_PolarityCfg_MotAgMecl5Polarity_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(sint8, RTE_VAR_INIT) Rte_PolarityCfg_MotAgMecl6Polarity_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(sint8, RTE_VAR_INIT) Rte_PolarityCfg_MotAgMecl7Polarity_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(sint8, RTE_VAR_INIT) Rte_PolarityCfg_MotElecMeclPolarity_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_PosnTrakgServo_PosnServoCmd_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_PosnTrakgServo_PosnServoEna_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_PosnTrakgServo_PosnServoHwAg_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_PosnTrakgServo_PosnServoHwVel_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_PosnTrakgServo_PosnServoIntgtrSt_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_PwrDiscnct_PwrDiscnctATestCmpl_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_PwrDiscnct_PwrDiscnctBTestCmpl_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_PwrDiscnct_PwrDiscnctClsd_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_PwrLimr_AltFltActv_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_PwrLimr_MotTqCmdPwrLimd_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_PwrLimr_PwrLimrRednFac_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_PwrUpSeq_StrtUpSt_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_PwrUpSeq_SysStWrmIninCmpl_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_Rtn_HwAgRtnOffs_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_Rtn_RtnCmd_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_Rtn_RtnCmdSca_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_Rtn_RtnCmdScaServo_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_RtnPahFwl_RtnCmdLimd_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_StOutpCtrl_SysMotTqCmdSca_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_StOutpCtrl_SysStReqDi_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_StOutpCtrl_VehStrtStopMotTqCmdSca_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_StOutpCtrl_VehStrtStopRampRate_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_StabyCmp_AssiCmd_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_StabyCmp_AssiCmdBasSca_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_StabyCmp_AssiPahLimrActv_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_Swp_HwTqSwp_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_Swp_MotTqCmdSwp_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_SysFricLrng_FricLrngCustEna_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_SysFricLrng_MaxLrndFric_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_SysFricLrng_SysFricEstimd_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_SysFricLrng_SysFricOffs_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_SysFricLrng_SysSatnFricEstimd_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(BattVltgSt1, RTE_VAR_INIT) Rte_SysPrfmncSts_BattVltgSt_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint16, RTE_VAR_INIT) Rte_SysPrfmncSts_SysPrfmncSt_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(SysSt1, RTE_VAR_INIT) Rte_SysStMod_SysSt_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_TEstimn_AmbT_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_TEstimn_AmbTVld_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_TEstimn_AssiMechT_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_TEstimn_EngOilT_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_TEstimn_EngOilTVld_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint32, RTE_VAR_INIT) Rte_TEstimn_IgnTiOff_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_TEstimn_MotFetT_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_TEstimn_MotMagT_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_TEstimn_MotWidgT_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_TEstimn_VehTiVld_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_TmplMonr_TmplMonrIninTestCmpl_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_TqLoa_TqLoaAvl_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_TqLoa_TqLoaCmd_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_TunSelnAuthy_TunSelnRtDi_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_TunSelnMngt_ActvGroup_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_TunSelnMngt_ActvIninIdx_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_TunSelnMngt_ActvRtIdx_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(CalCopySts1, RTE_VAR_INIT) Rte_TunSelnMngt_CalCopySts_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_TunSelnMngt_DesIninIdx_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_TunSelnMngt_DesRtIdx_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_VehSigCdng_VehLatA_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_VehSigCdng_VehLatAEstimd_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_VehSigCdng_VehLatAEstimdVld_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_VehSigCdng_VehLatASerlCom_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_VehSigCdng_VehLatAVld_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_VehSigCdng_VehLatAVldSerlCom_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_VehSigCdng_VehLgtA_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_VehSigCdng_VehLgtASerlCom_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_VehSigCdng_VehLgtAVld_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_VehSigCdng_VehLgtAVldSerlCom_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_VehSigCdng_VehSpd_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_VehSigCdng_VehSpdVld_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_VehSigCdng_VehYawRate_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_VehSigCdng_VehYawRateVld_Logl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_VehSpdLimr_VehSpdMotTqLim_Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */

#  define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * Buffer for inter-runnable variables
 *********************************************************************************************************************/
#  define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(float32, RTE_VAR_INIT) Rte_Irv_AssiSumLim_ProcdManTqCmd; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_Irv_AssiSumLim_ProcdManTqCmdEna; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */

#  define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(boolean, RTE_VAR_INIT) Rte_Irv_CDD_MotAg5Meas_MotAg5PrtclOk; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(MotAgRtPrmRec1, RTE_VAR_INIT) Rte_Irv_CDD_MotAg5Meas_MotAg5RtVari; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */

#  define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(boolean, RTE_VAR_INIT) Rte_Irv_CDD_MotAg6Meas_MotAg6PrtclOk; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(MotAgRtPrmRec1, RTE_VAR_INIT) Rte_Irv_CDD_MotAg6Meas_MotAg6RtVari; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */

#  define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(boolean, RTE_VAR_INIT) Rte_Irv_DualCtrlrOutpMgr_ImcDiagcStsNonRcvrlReqDiFltPrsnt; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_Irv_DualCtrlrOutpMgr_ImcDiagcStsNonRcvrlReqDiFltPrsntVld; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_Irv_DualCtrlrOutpMgr_ImcDualEcuMotCtrlMtgtnEna; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_Irv_DualCtrlrOutpMgr_ImcDualEcuMotCtrlMtgtnEnaVld; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */

#  define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(boolean, RTE_VAR_INIT) Rte_Irv_DutyCycThermProtn_FilStVariReInitFlg; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */

#  define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(float32, RTE_VAR_INIT) Rte_Irv_FordHwAgArbn_FordSnsrOutp; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */

#  define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(uint16, RTE_VAR_INIT) Rte_Irv_FordVehSpdArbn_FordVehArbnTireCircum; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */

#  define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(boolean, RTE_VAR_INIT) Rte_Irv_GateDrv0Ctrl_GateDrv0Ena; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_Irv_GateDrv0Ctrl_GateDrv0PhaReasbnDiagcEna; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_Irv_GateDrv0Ctrl_Ivtr0PhyFltInpActv; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */

#  define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(uint16, RTE_VAR_INIT) Rte_Irv_HwAg1Meas_HwAg1Snsr0Raw; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_Irv_HwAg1Meas_HwAg1Snsr0TestOk; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint16, RTE_VAR_INIT) Rte_Irv_HwAg1Meas_HwAg1Snsr1Raw; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_Irv_HwAg1Meas_HwAg1Snsr1TestOk; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */

#  define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(float32, RTE_VAR_INIT) Rte_Irv_HwAgSnsrls_StordHwAg; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_Irv_HwAgSnsrls_StordHwConf; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */

#  define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(boolean, RTE_VAR_INIT) Rte_Irv_ImcArbn_IniTiOutChkCmpl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */

#  define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(float32, RTE_VAR_INIT) Rte_Irv_ImcSigArbn_HwAgOffs; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_Irv_ImcSigArbn_HwAgTarOffs; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_Irv_ImcSigArbn_HwTqOffs; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(SysSt1, RTE_VAR_INIT) Rte_Irv_ImcSigArbn_ImcSysSt10MilliSec; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(boolean, RTE_VAR_INIT) Rte_Irv_ImcSigArbn_ImcSysStVld10MilliSec; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_Irv_ImcSigArbn_MotVelCrfOffs; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_Irv_ImcSigArbn_VehSpdOffs; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */

#  define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(float32, RTE_VAR_INIT) Rte_Irv_MotCtrlPrmEstimn_MotBackEmfConFf; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */

#  define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(float32, RTE_VAR_INIT) Rte_Irv_MotCurrPeakEstimn_MotCurrEstimd; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */

#  define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(Ary1D_u16p0_2, RTE_VAR_INIT) Rte_Irv_MotTqTranlDampg_CtrldDampgScaX; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(Ary1D_u2p14_2, RTE_VAR_INIT) Rte_Irv_MotTqTranlDampg_CtrldDampgScaY; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */

#  define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(float32, RTE_VAR_INIT) Rte_Irv_MotVelCtrl_AntiWdupGain; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_Irv_MotVelCtrl_AntiWdupLim; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_Irv_MotVelCtrl_DerivtvGain; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_Irv_MotVelCtrl_DerivtvLpFilTiCon; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_Irv_MotVelCtrl_IntgtrGain; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_Irv_MotVelCtrl_PropGain; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_Irv_MotVelCtrl_TqCmdLim; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */

#  define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(float32, RTE_VAR_INIT) Rte_Irv_PwrLimr_MinStdOperLim; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_Irv_PwrLimr_MotEnvlpSpd; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(float32, RTE_VAR_INIT) Rte_Irv_PwrLimr_TqEnvlpLim1; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */

#  define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(boolean, RTE_VAR_INIT) Rte_Irv_TEstimn_FilStVariRepInitFlg; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */

#  define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(uint32, RTE_VAR_INIT) Rte_Irv_TmplMonr_ElpdTiMicroSec; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */

#  define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */



/**********************************************************************************************************************
 * Data structures for mode management
 *********************************************************************************************************************/


#  define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(uint8, RTE_VAR_INIT) Rte_ModeMachine_CustDiag_BswM_MSI_BswMEcuResetMod_BswM_MDGP_BswMEcuResetMod; /* PRQA S 3408 */ /* MD_Rte_3408 */

#  define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# endif /* defined(RTE_CORE) */

#endif /* _RTE_TYPE_H */

/**********************************************************************************************************************
 MISRA 2004 violations and justifications
 *********************************************************************************************************************/

/* module specific MISRA deviations:
   MD_Rte_3408:  MISRA rule: 8.8
     Reason:     For the purpose of monitoring during calibration or debugging it is necessary to use non-static declarations.
                 This is covered in the MISRA C compliance section of the Rte specification.
     Risk:       No functional risk.
     Prevention: Not required.

*/
