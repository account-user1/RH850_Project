/***********************************************************************************************************************
* Copyright 2018 Nexteer
* Nexteer Confidential
*
* Module File Name: fih_interfaces.h
* Module Description: This file is intended for use by Ford In House Software (FIH)	
*                     It contains all of function declarations of the FIH interfaces as defined   
*                     in the PSCM_FIH_SW_Interface_Spec.
* Project           : Ford T3T6
* Author            : Bobby O'Steen
************************************************************************************************************************
* Version Control:
* %version:         1 %
* %derived_by:      nz2610 %
* ---------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author    Change Description                                                           SCR #
* --------  -------  --------  ---------------------------------------------------------------------------  ----------
* 02/22/18  1        BDO       Initial version  							    EA4#20166
*
***********************************************************************************************************************/
#ifndef FIH_INTERFACES_H
#define FIH_INTERFACES_H

/*---------------------------------------------------------------------------------
* CDD_CF110A_FordBlaBoxIfCmn
-----------------------------------------------------------------------------------*/

/*********************************************************************************
* FIH_IFR_2_1: Read from BASE EPS
**********************************************************************************/
extern unsigned long FIH_Read_EPS_System_Time(void);
extern signed short FIH_Read_EPS_InputTorqueRaw(void);
extern unsigned char FIH_Read_EPS_Personalization(void);
extern unsigned char FIH_Read_MaxAssistanceTorque(void);
extern signed short FIH_Read_EPS_ColumnVelocity(void);
extern signed short FIH_Read_EPS_Rel_SteeringAngle(void);
extern signed short FIH_Read_EPS_SteeringAngle(void);
extern unsigned short FIH_Read_EPS_VehicleSpeed(void);
extern unsigned short FIH_Read_VehicleSteeringRatio(void);
extern unsigned short FIH_Read_WheelBase(void);
extern unsigned char FIH_Read_EPS_CompSPA_QF(void);
extern signed short FIH_Read_EPS_Assist_Torque(void);
extern unsigned short FIH_Read_RackPinionRatio(void);
extern signed long FIH_Read_EPS_Final_Motor_Tq_App(void);
extern signed long FIH_Read_EPS_Final_Motor_Tq_Rq(void);
extern unsigned short FIH_Read_TireCircumference(void);
extern unsigned char FIH_Read_EngineSize(void);
extern signed short FIH_Read_APA_Torque_Filtered(void);
extern signed short FIH_Read_EPS_InputTorqueFilt(void);
extern unsigned short FIH_Read_EPS_VehicleSpeed_Raw(void);
extern unsigned short FIH_Read_TBA_EAC_Status(void);

/******************************************************************************** 
* FIH_IFR_2_6: Read/Write for Pass Thru Signals
*********************************************************************************/
extern unsigned long FIH_Read_FIH_Msg_In_1_High(void);
extern unsigned long FIH_Read_FIH_Msg_In_1_Low(void);
extern unsigned long FIH_Read_FIH_Msg_In_2_High(void);
extern unsigned long FIH_Read_FIH_Msg_In_2_Low(void);
extern unsigned long FIH_Read_FIH_Msg_In_3_High(void);
extern unsigned long FIH_Read_FIH_Msg_In_3_Low(void);
extern unsigned long FIH_Read_FIH_Msg_In_4_High(void);
extern unsigned long FIH_Read_FIH_Msg_In_4_Low(void);

/*********************************************************************************
* FIH_IFR_2_3: Input Signal Diagnostics
**********************************************************************************/
extern unsigned long FIH_Read_Signal_Status(void);
extern unsigned long FIH_Read_Signal_Status2(void);

/*********************************************************************************
* FIH_IFR_1_2: FORD In-House Features Enable/Disable via DID
**********************************************************************************/
extern unsigned short FIH_Read_FIH_EoL_Config(void);

/*********************************************************************************
* FIH_IFR_2_2: Read from HS-CAN
**********************************************************************************/
extern unsigned short FIH_Read_WhlFl_W_Meas(void);
extern unsigned short FIH_Read_WhlFr_W_Meas(void);
extern unsigned short FIH_Read_CmbbObjDistLat_L_Actl(void);
extern unsigned short FIH_Read_CmbbObjDistLong_L_Actl(void);
extern unsigned short FIH_Read_CmbbObjRelLat_V_Actl(void);
extern unsigned short FIH_Read_CmbbObjRelLong_V_Actl(void);
extern unsigned short FIH_Read_VehLatComp_A_Actl(void);
extern unsigned short FIH_Read_VehOverGnd_V_Est(void);
extern unsigned short FIH_Read_VehYawComp_W_Actl(void);
extern unsigned short FIH_Read_YawStabilityIndex(void);
extern unsigned char FIH_Read_CmbbBrkDis_B_Actl(void);
extern unsigned char FIH_Read_CmbbDeny_B_ActlBrk(void);
extern unsigned char FIH_Read_CmbbObjClass_D_Stat(void);
extern unsigned char FIH_Read_CmbbObjColl_T_Actl(void);
extern unsigned char FIH_Read_CmbbObjConfdnc_D_Stat(void);
extern unsigned char FIH_Read_EsaEnbl_D_Rq(void);
extern unsigned char FIH_Read_EsaOn_B_Rq(void);
extern unsigned short FIH_Read_LaCurvature_No_Calc(void);
extern unsigned short FIH_Read_LaRefAng_No_Req(void);
extern unsigned short FIH_Read_LatCtlCurv_NoRate_Actl(void);
extern unsigned short FIH_Read_LatCtlCurv_No_Actl(void);
extern unsigned short FIH_Read_LatCtlPathOffst_L_Actl(void);
extern unsigned short FIH_Read_LatCtlPath_An_Actl(void);
extern unsigned short FIH_Read_VehYaw_W_Actl(void);
extern unsigned char FIH_Read_AbsActv_B_Actl(void);
extern unsigned char FIH_Read_HandsOffCnfm_B_Rq(void);
extern unsigned char FIH_Read_LaRampType_B_Req(void);
extern unsigned char FIH_Read_LatCtlPrecision_D_Rq(void);
extern unsigned char FIH_Read_LatCtlRampType_D_Rq(void);
extern unsigned char FIH_Read_LatCtlRangeMax(void);
extern unsigned char FIH_Read_LatCtl_D_Rq(void);
extern unsigned char FIH_Read_LdwActvIntns_D_Req(void);
extern unsigned char FIH_Read_LdwActvStats_D_Req(void);
extern unsigned char FIH_Read_LkaActvStats_D_Req(void);
extern unsigned char FIH_Read_StabCtlBrkActv_B_Actl(void);
extern unsigned char FIH_Read_TurnLghtSwtch_D_Stat(void);
extern unsigned short FIH_Read_BrkTot_Tq_Actl(void);
extern unsigned short FIH_Read_PrplWhlTot2_Tq_Actl(void);
extern unsigned short FIH_Read_StePinOffst_An_Est(void);
extern unsigned short FIH_Read_WhlRl_W_Meas(void);
extern unsigned short FIH_Read_WhlRr_W_Meas(void);
extern unsigned char FIH_Read_GearRvrse_D_Actl(void);
extern unsigned char FIH_Read_StePinOffst_D_Stat(void);
extern unsigned char FIH_Read_WhlDirFl_D_Actl(void);
extern unsigned char FIH_Read_WhlDirFr_D_Actl(void);
extern unsigned char FIH_Read_WhlDirRl_D_Actl(void);
extern unsigned char FIH_Read_WhlDirRr_D_Actl(void);
extern unsigned long FIH_Read_TrlrSnsId_High(void);
extern unsigned long FIH_Read_TrlrSnsId_Low(void);
extern unsigned short FIH_Read_ApedPos_Pc_ActlArb(void);
extern unsigned short FIH_Read_EngAout_N_Actl(void);
extern unsigned short FIH_Read_TrlrAidCtl_U_RqDrv(void);
extern unsigned short FIH_Read_TrlrAid_Angle(void);
extern unsigned short FIH_Read_TrlrAid_AngleRate (void);
extern unsigned short FIH_Read_TrlrAxleToBmpr_L_Actl(void);
extern unsigned short FIH_Read_TrlrHitYaw_AnRate(void);
extern unsigned short FIH_Read_TrlrHitchYaw_An(void);
extern unsigned short FIH_Read_TrlrIdType_Stat(void);
extern unsigned short FIH_Read_TrlrYaw_W(void);
extern unsigned short FIH_Read_VehLongComp_A_Actl(void);
extern unsigned short FIH_Read_Veh_V_ActlBrk(void);
extern unsigned char FIH_Read_Signal_Status_PassThru(void);
extern unsigned char FIH_Read_TrlrAid_D2_Stat (void);
extern unsigned char FIH_Read_TrlrAnOffstDir_Mem (void);

/*------------------------------------------------------------------------------
* CDD_CF112A_FordBlaBoxIfCmp2
-------------------------------------------------------------------------------*/
/*---------------------------------------------------------------
 Write to HS-CAN
---------------------------------------------------------------*/
extern void FIH_Write_ESA_HS_CAN(unsigned char EsaOn_B_Stat);

/*------------------------------------------------------------
 Read/Write for Diagnostics
------------------------------------------------------------*/
extern unsigned short FIH_Read_BPR_Activation_Cnt(void);
extern unsigned long FIH_Read_ESA_Int_Status_DID(void);
extern unsigned long FIH_Read_STDR_Int_Status_DID(void);
extern unsigned short FIH_Read_TSC_Activation_Cnt(void);
extern void FIH_Write_BPR_Activation_Cnt(unsigned short BPR_ActivationCounter);
extern void FIH_Write_ESA_Int_Status_DID(unsigned long ESA_InternalStatus);
extern void FIH_Write_STDR_Int_Status_DID(unsigned long STDR_InternalStatus);
extern void FIH_Write_TSC_Activation_Cnt(unsigned short TSC_ActivationCounter);

/*---------------------------------------------------------------------
 Ford In-House feature Software version numbers
---------------------------------------------------------------------*/
extern void FIH_Write_ESA_SW_Version(unsigned long ESA_SW_Version);
extern void FIH_Write_STDR_SW_Version(unsigned long STDR_SW_Version);

/*---------------------------------------------------------------------
* Read to Arbiter Command
---------------------------------------------------------------------*/
extern unsigned char FIH_Read_ESA_Arbiter(void);
extern unsigned char FIH_Read_STDR_Arbiter(void);

/*---------------------------------------------------------------------
* Write to Arbiter/Limiter
---------------------------------------------------------------------*/
extern void FIH_Write_ESA_Arbiter(unsigned char ESA_FeatureState, signed short ESA_TorqueRequest);
extern void FIH_Write_STDR_Arbiter(unsigned char STDR_FeatureState, signed short STDR_TorqueRequest);


/*------------------------------------------------------------------------------
* CDD_CF111A_FordBlaBoxIfCmp1
-------------------------------------------------------------------------------*/
/*---------------------------------------------------------------
 FIH_IFR_2_4: Write to HS-CAN
---------------------------------------------------------------*/
extern void FIH_Write_LA_HS_CAN(unsigned char LaHandsOff_B_Actl, unsigned char LaActDeny_B_Actl, unsigned char LaActAvail_D_Actl);
extern void FIH_Write_LATCTL_HS_CAN(unsigned char LatCtlLim_D_Stat, unsigned char LatCtlSte_D_Stat, unsigned char TjaHandsOnCnfdnc_B_Est);

/*------------------------------------------------------------
 FIH_IFR_2_5: Read/Write for Diagnostics
------------------------------------------------------------*/
extern signed short FIH_Read_PDC_Service_DID(void);
extern unsigned long FIH_Read_PDC_Int_Status_DID(void);
extern unsigned long FIH_Read_LDW_Int_Status_DID(void);
extern unsigned long FIH_Read_LKA_Int_Status_DID(void);
extern unsigned long FIH_Read_ANC_Int_Status_DID(void);
extern unsigned long FIH_Read_LATCTL_Int_Status_DID(void);
extern unsigned char FIH_Read_ANC_Ext_Diag_Status(void);
extern unsigned char FIH_Read_LDW_Ext_Diag_Status(void);
extern void FIH_Write_PDC_Service_DID(signed short ServicePDCResetValue);
extern void FIH_Write_PDC_Actual_DID(signed short ServicePDCActual);
extern void FIH_Write_PDC_Int_Status_DID(unsigned long PDC_InternalStatus);
extern void FIH_Write_LDW_Int_Status_DID(unsigned long LDW_InternalStatus);
extern void FIH_Write_LKA_Int_Status_DID(unsigned long LKA_InternalStatus);
extern void FIH_Write_ANC_Int_Status_DID(unsigned long ANC_InternalStatus);
extern void FIH_Write_LATCTL_Int_Status_DID(unsigned long LATCTL_InternalStatus);

/*------------------------------------------------------------ 
* FIH_IFR_2_6: Read/Write for Pass Thru Signals
------------------------------------------------------------*/
extern void FIH_Write_FIH_Msg_1_High(unsigned long HSCAN_Out1_High);
extern void FIH_Write_FIH_Msg_1_Low(unsigned long HSCAN_Out1_Low);
extern void FIH_Write_FIH_Msg_2_High(unsigned long HSCAN_Out2_High);
extern void FIH_Write_FIH_Msg_2_Low(unsigned long HSCAN_Out2_Low);
extern void FIH_Write_FIH_Msg_3_High(unsigned long HSCAN_Out3_High);
extern void FIH_Write_FIH_Msg_3_Low(unsigned long HSCAN_Out3_Low);
extern void FIH_Write_FIH_Msg_4_High(unsigned long HSCAN_Out4_High);
extern void FIH_Write_FIH_Msg_4_Low(unsigned long HSCAN_Out4_Low);

/*------------------------------------------------------------ 
* FIH_IFR_3_1: Base EPS Direct Boost Curve
------------------------------------------------------------*/
extern unsigned short FIH_Read_EPS_Direct_BC_Torque(unsigned short Feature_Torque_Parameter);

/*------------------------------------------------------------ 
* FIH_IFR_3_2: Base EPS Inverse Boost Curve
------------------------------------------------------------*/

extern unsigned short FIH_Read_EPS_Inverse_BC_Torque(unsigned short Feature_Torque_Offset);

/*------------------------------------------------------------ 
* FIH_IFR_4_1:Ford In-House Feature Software Version Numbers
------------------------------------------------------------*/
extern void FIH_Write_ANC_SW_Version(unsigned long ANC_SW_Version);
extern void FIH_Write_RF_SW_Version(unsigned long RF_SW_Version);
extern void FIH_Write_FIH_SW_Version(unsigned long FIH_SW_Version);
extern void FIH_Write_LA_SW_Version(unsigned long LA_SW_Version);
extern void FIH_Write_PDC_SW_Version(unsigned long PDC_SW_Version);

/*------------------------------------------------------------ 
* FIH_IFR_4_2:Initialization
------------------------------------------------------------*/
extern void FIH_ANC_init(void);
extern void FIH_SW_init(void);
extern void FIH_LA_init(void);
extern void FIH_PDC_init(void);

/*------------------------------------------------------------ 
* FIH_IFR_4_3:Main Algorithm
------------------------------------------------------------*/
extern void FIH_ANC_function(void);
extern void FIH_LA_function(void);
extern void FIH_PDC_function(void);

/*------------------------------------------------------------ 
* FIH_IFR_4_4:Read Arbiter Command
------------------------------------------------------------*/
extern unsigned char FIH_Read_ANC_Arbiter(void);
extern unsigned char FIH_Read_LATCTL_Arbiter(void);
extern unsigned char FIH_Read_LDW_Arbiter(void);
extern unsigned char FIH_Read_LKA_Arbiter(void);
extern unsigned char FIH_Read_PDCLearning_Arbiter(void);
extern unsigned char FIH_Read_PDC_Arbiter(void);

/*------------------------------------------------------------ 
* FIH_IFR_4_5:Write to Arbiter/Limiter
------------------------------------------------------------*/
extern void FIH_Write_ANC_Arbiter(unsigned char ANC_FeatureState, signed short ANC_TorqueRequest);
extern void FIH_Write_LATCTL_Arbiter(unsigned char LATCTL_FeatureState, signed short LATCTL_TorqueRequest);
extern void FIH_Write_LDW_Arbiter(unsigned char LDW_FeatureState, signed short LDW_TorqueRequest);
extern void FIH_Write_LKA_Arbiter(unsigned char LKA_FeatureState, signed short LKA_TorqueRequest);
extern void FIH_Write_PDCLearning_Arbiter(unsigned char PDCLearning_FeatureState);
extern void FIH_Write_PDC_Arbiter(unsigned char PDC_FeatureState, signed short PDC_TorqueRequest);

/*------------------------------------------------------------ 
* FIH_IFR_5_12:Read/Write for NVM
------------------------------------------------------------*/
extern unsigned char FIH_ANC_Read_NV_Byte(unsigned char FIH_NV_Byte_Index);
extern unsigned char FIH_PDC_Read_NV_Byte(unsigned char FIH_NV_Byte_Index);
extern unsigned char FIH_LA_Read_NV_Byte(unsigned char FIH_NV_Byte_Index);
extern void FIH_PDC_Write_NV_Byte(unsigned char FIH_NV_Byte_Index, unsigned char FIH_NV_Byte);
extern void FIH_ANC_Write_NV_Byte(unsigned char FIH_NV_Byte_Index, unsigned char FIH_NV_Byte);
extern void FIH_LA_Write_NV_Byte(unsigned char FIH_NV_Byte_Index, unsigned char FIH_NV_Byte);


/*****Functions that are not implemented for May 7th Delivery****/
/* ANC */
extern unsigned long FIH_Read_EPS_System_Time(void);
extern signed short FIH_Read_EPS_InputTorqueRaw(void);

//Bobby error in shell code   extern void WriteInvalidMem(unsigned short val, unsigned long address);

/* ESA */
extern void FIH_ESA_function(void);
extern void FIH_ESA_init(void);
extern signed short FIH_Read_EPS_InputTorqueRaw(void);
/* FIH Version */

/* LKS */
extern unsigned char FIH_Read_LkaDrvOverride(void);

/* PDC */
extern unsigned long FIH_Read_EPS_System_Time(void);

/* STDR */
extern void FIH_STDR_function(void);
extern void FIH_STDR_init(void);
extern unsigned short FIH_Read_AwdLck_Torque(void);
extern signed short FIH_Read_EPS_InputTorqueRaw(void);
extern unsigned char FIH_Read_AwdLck_Stat(void);
extern unsigned char FIH_Read_AwdLck_TorqueSign(void);
extern unsigned char FIH_Read_AwdType(void);

/* TBA */
extern void FIH_TBA_function(void);
extern void FIH_TBA_init(void);
extern unsigned long FIH_Read_EPS_System_Time(void);
extern unsigned long FIH_Read_TBA_Int_Status_DID(void);
extern signed short FIH_Read_EPS_InputTorqueRaw(void);
extern unsigned short FIH_Read_TrlrAid_AnRate_Actl(void);
extern unsigned char FIH_Read_AngleControlState(void);
extern unsigned char FIH_Read_ApedPosPcActl_D_Qf(void);
extern unsigned char FIH_Read_BpedDrvAppl_Actl(void);
extern unsigned char FIH_Read_BpedDrvAppl_QF(void);
extern unsigned char FIH_Read_EPSSystemState(void);
extern unsigned char FIH_Read_GearLvrPos_D_Actl(void);
extern unsigned char FIH_Read_GearPosition(void);
extern unsigned char FIH_Read_HitchToVehAxle(void);
extern unsigned char FIH_Read_Ignition_Status(void);
extern unsigned char FIH_Read_LsmcBrkDecel_D_Stat(void);
extern unsigned char FIH_Read_SAPPAngleControlStat1(void);
extern unsigned char FIH_Read_SAPPAngleControlStat2(void);
extern unsigned char FIH_Read_SAPPAngleControlStat3(void);
extern unsigned char FIH_Read_SAPPAngleControlStat4(void);
extern unsigned char FIH_Read_SAPPAngleControlStat5(void);
extern unsigned char FIH_Read_SAPPStatusCoding(void);
extern unsigned char FIH_Read_TrlrAidCancl_B_Rq(void);
extern unsigned char FIH_Read_TrlrAidEnbl_D2_Rq(void);
extern unsigned char FIH_Read_TrlrAidSetup_Rq(void);
extern unsigned char FIH_Read_TrlrAidSwtch_D_RqDrv(void);
extern unsigned char FIH_Read_TrlrAidTrgtId(void);
extern unsigned char FIH_Read_TrlrAid_D_Stat(void);
extern unsigned char FIH_Read_TrlrAid_Mode_Rq(void);
extern unsigned char FIH_Read_TrlrAid_Mode_UB(void);
extern unsigned char FIH_Read_TrlrAnOffstDir_D_Mem(void);
extern unsigned char FIH_Read_TrlrBallToBmpr_L_Actl(void);
extern unsigned char FIH_Read_TrlrBrkActCnnct_B_Actl(void);
extern unsigned char FIH_Read_TrlrHitchYaw_Stat(void);
extern unsigned char FIH_Read_TrlrId_No_Actl(void);
extern unsigned char FIH_Read_TrlrLampCnnct_B_Actl(void);
extern unsigned char FIH_Read_TrlrRvrseCancl_Rq(void);
extern unsigned char FIH_Read_TrlrRvrseEnbl(void);
extern unsigned char FIH_Read_TrlrRvrseMsgTxt(void);
extern unsigned char FIH_Read_TrlrRvrseOn_Stat(void);
extern unsigned char FIH_Read_TrlrTrgtAcquire(void);
extern unsigned char FIH_Read_TrnRng(void);
extern unsigned char FIH_Read_VehVTrlrAid_B_Avail(void);
extern unsigned char FIH_Read_VehVertComp(void);
extern unsigned char FIH_Read_Whl_Fl_Roll_Cnt(void);
extern unsigned char FIH_Read_Whl_Fr_Roll_Cnt(void);
extern unsigned char FIH_Read_Whl_Rl_Roll_Cnt(void);
extern unsigned char FIH_Read_Whl_Rr_Roll_Cnt(void);
extern unsigned char FIH_TBA_Read_NV_Byte(unsigned short FIH_NV_Byte_Index);
extern void FIH_TBA_AngleRequest_Function(unsigned char EPASIntAngleStatReq, signed short IntSteeringAngleReq);
extern void FIH_TBA_Write_NV_Byte(unsigned short FIH_NV_Byte_Index, unsigned char FIH_NV_Byte);
extern void FIH_Write_LsmcBrkDecel_Request(unsigned char LsmcBrkDecelEnbl_D_Rq, unsigned short LsmcBrk_Tq_Rq);
extern void FIH_Write_TBA_Int_Status_DID(unsigned long TBA_InternalStatus);
extern void FIH_Write_TBA_SW_Version(unsigned long TBA_SW_Version);
extern void FIH_Write_TBA_to_EPAS_INFO(unsigned char Veh_V_RqMxTrlrAid, unsigned char VehVTrlrAid_B_Rq, unsigned char TrlrHitchLamp_D_Rqst);
extern void FIH_Write_TBA_to_LA_Data3(unsigned char TrlrAn_An_TrgtCalc);
extern void FIH_Write_TBA_to_TrlrAid_Data2(unsigned char TrlrAidEnbl_D2_Stat, unsigned char TrlrAidMsgTxt_D2_Rq, unsigned char TrlrAnOffst_An2_Calc, unsigned char TrlrAn_An_WarnCalc, unsigned char TrlrAn_An_MxCalc, unsigned short
    HitchToTrlrAxle_L_Calc, unsigned char TrlrAidTrlrId_No_Rq, unsigned char TrlrAidTrgtId_No_Rq, unsigned char TrlrAidSetup_D2_Stat);
#endif




