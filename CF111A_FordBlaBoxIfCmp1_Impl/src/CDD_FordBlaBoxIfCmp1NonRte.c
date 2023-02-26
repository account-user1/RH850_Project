/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of version logging area >>                DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/***********************************************************************************************************************
* Copyright 2018 Nexteer
* Nexteer Confidential
*
* Module File Name: CDD_FordBlaBoxIfCmp1NonRte.c
* Module Description: This file contains the non-RTE server runnables for the CDD_FordBlaBoxIfCmp1 component
* Project           : CBD
* Author            : Anu Keechery
************************************************************************************************************************
* Version Control:
* %version:         1 %
* %derived_by:      nz2728 %
* ---------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author    Change Description                                                           SCR #
* --------  -------  --------  ---------------------------------------------------------------------------  ----------
* 04/25/18  1        AK       	Initial version  							   								 EA4#22951
*
***********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of version logging area >>                  DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

#include "Rte_CDD_FordBlaBoxIfCmp1.h"
#include "NxtrFixdPt.h"
#include "NxtrMath.h"
#include "fih_interfaces.h"
#include "NxtrIntrpn.h"

#define S5P10LOLIM_ULS_F32 ((float32)-32.0F)
#define S5P10HILIM_ULS_F32 ((float32)31.99F)
#define S6P9LOLIM_ULS_F32  ((float32)-64.0F)
#define S6P9HILIM_ULS_F32  ((float32)63.99F)
#define S7P8LOLIM_ULS_F32  ((float32)-128.0F)
#define S7P8HILIM_ULS_F32  ((float32)127.99F)

#define IVSBOOSTCRVMINLIM_HWNM_F32 (0.0F)
#define IVSBOOSTCRVMAXLIM_HWNM_F32 (63.0F)

#define PimActvNiblCtrl_u08     (*(Ary1D_u08_128 *)(Rte_Pim_ActvNiblCtrl()))
#define PimPullDriftCmp_u08     (*(Ary1D_u08_128 *)(Rte_Pim_PullDriftCmp()))
#define PimLaneAssi_u08      	(*(Ary1D_u08_256 *)(Rte_Pim_LaneAssi()))

#define   AssiMotTqWhlImbRejctnMinX_u8p8	(*(const Ary2D_u8p8_12_20 *)(Rte_Prm_AssiMotTqWhlImbRejctnMinX_Ary2D()))
#define   AssiMotTqWhlImbRejctnMinY_s4p11	(*(const Ary2D_s4p11_12_20 *)(Rte_Prm_AssiMotTqWhlImbRejctnMinY_Ary2D()))
#define   SysGlbPrmVehSpdBilnrSeln_u9p7		(*(const Ary1D_u9p7_12 *)(Rte_Prm_SysGlbPrmVehSpdBilnrSeln_Ary1D()))
#define   PimTqOffsTbl_u8p8					(*(Ary2D_u8p8_12_20*)(Rte_Pim_TqOffsTbl()))	
	
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of include and declaration area >>          DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
 
#define CDD_FordBlaBoxIfCmp1_START_SEC_CODE
#include "CDD_FordBlaBoxIfCmp1_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of function definition area >>            DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

 /**Write to HS-CAN**/
void FIH_Write_LA_HS_CAN(unsigned char LaHandsOff_B_Actl, unsigned char LaActDeny_B_Actl, unsigned char LaActAvail_D_Actl)
{
	Rte_Write_FordVehLaneAssiHandsOff_Val(LaHandsOff_B_Actl);
	Rte_Write_FordVehLaneAssiRejctn_Val(LaActDeny_B_Actl);
	Rte_Write_FordVehLaneAssiAvl_Val(LaActAvail_D_Actl);
}

void FIH_Write_LATCTL_HS_CAN(unsigned char LatCtlLim_D_Stat, unsigned char LatCtlSte_D_Stat, unsigned char TjaHandsOnCnfdnc_B_Est)
{
	Rte_Write_FordVehLatCtrlLimSts_Val((Ford_LatCtlLim_D_Stat)LatCtlLim_D_Stat);
	Rte_Write_FordVehLatCtrlSteerSts_Val((Ford_LatCtlSte_D_Stat)LatCtlSte_D_Stat);
	Rte_Write_FordVehTrfcJamAvdHandsOnConf_Val(TjaHandsOnCnfdnc_B_Est);
}

/**Read/Write for Diagnostics**/
signed short FIH_Read_PDC_Service_DID(void)
{
	sint16 RtnVal_Cnt_T_s8p7;
	
	(void) Rte_Read_FordSrvPullDriftCmpRstVal_Val (&RtnVal_Cnt_T_s8p7);
	return RtnVal_Cnt_T_s8p7;
}

unsigned long FIH_Read_PDC_Int_Status_DID(void)
{
	uint32 RtnVal_Cnt_T_u32;
	
	(void) Rte_Read_FordWrSrvPullDriftCmpIntSts_Val (&RtnVal_Cnt_T_u32);
	return RtnVal_Cnt_T_u32;
}

unsigned long FIH_Read_LDW_Int_Status_DID(void)
{
	uint32 RtnVal_Cnt_T_u32;
	
	(void) Rte_Read_FordWrSrvLaneDprtrWarnIntSts_Val (&RtnVal_Cnt_T_u32);
	return RtnVal_Cnt_T_u32;
}

unsigned long FIH_Read_LKA_Int_Status_DID(void)
{
	uint32 RtnVal_Cnt_T_u32;
	
	(void) Rte_Read_FordWrSrvLaneKeepAssiIntSts_Val (&RtnVal_Cnt_T_u32);
	return RtnVal_Cnt_T_u32;
}

unsigned long FIH_Read_ANC_Int_Status_DID(void)
{
	uint32 RtnVal_Cnt_T_u32;
	
	(void) Rte_Read_FordWrSrvActvNiblCmpIntSts_Val (&RtnVal_Cnt_T_u32);
	return RtnVal_Cnt_T_u32;
}

unsigned long FIH_Read_LATCTL_Int_Status_DID(void)
{
	uint32 RtnVal_Cnt_T_u32;
	
	(void) Rte_Read_FordWrSrvLatCtrlIntSts_Val (&RtnVal_Cnt_T_u32);
	return RtnVal_Cnt_T_u32;
}

unsigned char FIH_Read_ANC_Ext_Diag_Status(void)
{
	uint8 RtnVal_Cnt_T_u08;
	
	(void) Rte_Read_FordActvNiblCtrlDiagcSts_Val (&RtnVal_Cnt_T_u08);
	return RtnVal_Cnt_T_u08;
}

unsigned char FIH_Read_LDW_Ext_Diag_Status(void)
{
	uint8 RtnVal_Cnt_T_u08;
	
	(void) Rte_Read_FordSrvLaneDprtrWarnDiagcSts_Val (&RtnVal_Cnt_T_u08);
	return RtnVal_Cnt_T_u08;
}

void FIH_Write_PDC_Service_DID(signed short ServicePDCResetValue)
{
	(void) Rte_Write_SrvPullDriftCmpRstVal_Val(ServicePDCResetValue);
}
void FIH_Write_PDC_Actual_DID(signed short ServicePDCActual)
{
	(void) Rte_Write_SrvPullDriftCmpAct_Val(ServicePDCActual);
}
void FIH_Write_PDC_Int_Status_DID(unsigned long PDC_InternalStatus)
{
	(void) Rte_Write_PullDriftCmpIntSts_Val(PDC_InternalStatus);
}
void FIH_Write_LDW_Int_Status_DID(unsigned long LDW_InternalStatus)
{
	(void) Rte_Write_LaneDprtrWarnIntSts_Val(LDW_InternalStatus);
}
void FIH_Write_LKA_Int_Status_DID(unsigned long LKA_InternalStatus)
{
	(void) Rte_Write_LaneKeepAssiIntSts_Val(LKA_InternalStatus);
}
void FIH_Write_ANC_Int_Status_DID(unsigned long ANC_InternalStatus)
{
	(void) Rte_Write_ActvNiblCmpIntSts_Val(ANC_InternalStatus);
}
void FIH_Write_LATCTL_Int_Status_DID(unsigned long LATCTL_InternalStatus)
{
	(void) Rte_Write_LatCtrlIntSts_Val(LATCTL_InternalStatus);
}

/** Write for Pass Thru Signals **/
void FIH_Write_FIH_Msg_1_High(unsigned long HSCAN_Out1_High)
{
	(void) Rte_Write_FordVehBBMsgOutp1HiPart_Val(HSCAN_Out1_High);
}

void FIH_Write_FIH_Msg_1_Low(unsigned long HSCAN_Out1_Low)
{
	(void) Rte_Write_FordVehBBMsgOutp1LoPart_Val(HSCAN_Out1_Low);
}

void FIH_Write_FIH_Msg_2_High(unsigned long HSCAN_Out2_High)
{
	(void) Rte_Write_FordVehBBMsgOutp2HiPart_Val(HSCAN_Out2_High);
}

void FIH_Write_FIH_Msg_2_Low(unsigned long HSCAN_Out2_Low)
{
	(void) Rte_Write_FordVehBBMsgOutp2LoPart_Val(HSCAN_Out2_Low);
}

void FIH_Write_FIH_Msg_3_High(unsigned long HSCAN_Out3_High)
{
	(void) Rte_Write_FordVehBBMsgOutp3HiPart_Val(HSCAN_Out3_High);
}

void FIH_Write_FIH_Msg_3_Low(unsigned long HSCAN_Out3_Low)
{
	(void) Rte_Write_FordVehBBMsgOutp3LoPart_Val(HSCAN_Out3_Low);
}

void FIH_Write_FIH_Msg_4_High(unsigned long HSCAN_Out4_High)
{
	(void) Rte_Write_FordVehBBMsgOutp4HiPart_Val(HSCAN_Out4_High);
}

void FIH_Write_FIH_Msg_4_Low(unsigned long HSCAN_Out4_Low)
{
	(void) Rte_Write_FordVehBBMsgOutp4LoPart_Val(HSCAN_Out4_Low);
}

/**Base EPS Direct Boost Curve**/
unsigned short FIH_Read_EPS_Direct_BC_Torque(unsigned short Feature_Torque_Parameter)
{
	VAR(float32,  	AUTOMATIC) VehSpd_Kph_T_f32;
	VAR(uint16,  	AUTOMATIC) VehSpd_Kph_T_u9p7;
	VAR(sint16, 	AUTOMATIC) BoostCrvTq_MtrNm_T_s4p11;
	VAR(float32, 	AUTOMATIC) BoostCrvTq_MtrNm_T_f32;
	VAR(float32, 	AUTOMATIC) DircBoostCrvTq_HwNm_T_f32;
	VAR(uint16, 	AUTOMATIC) DircBoostCrvTq_HwNm_T_u8p8;
	
	(void) Rte_Read_VehSpd_Val(&VehSpd_Kph_T_f32); 
	
	VehSpd_Kph_T_u9p7 =	FloatToFixd_u16_f32(VehSpd_Kph_T_f32, NXTRFIXDPT_FLOATTOP7_ULS_F32);
	
	BoostCrvTq_MtrNm_T_s4p11 = BilnrIntrpnWithRound_s16_u16MplXs16MplY( VehSpd_Kph_T_u9p7,
																		Feature_Torque_Parameter,
																		SysGlbPrmVehSpdBilnrSeln_u9p7,
																		(uint16)TblSize_m(SysGlbPrmVehSpdBilnrSeln_u9p7),
																		(P2CONST(uint16, AUTOMATIC, Assi_CONST))AssiMotTqWhlImbRejctnMinX_u8p8,
																		(P2CONST(sint16, AUTOMATIC, Assi_CONST))AssiMotTqWhlImbRejctnMinY_s4p11,
																		(uint16)TblSize_m(AssiMotTqWhlImbRejctnMinX_u8p8[0]) );
																		
	BoostCrvTq_MtrNm_T_f32 = FixdToFloat_f32_s16(BoostCrvTq_MtrNm_T_s4p11, NXTRFIXDPT_P11TOFLOAT_ULS_F32);                 
	DircBoostCrvTq_HwNm_T_f32 = BoostCrvTq_MtrNm_T_f32 * Rte_Prm_SysGlbPrmSysKineRat_Val();
	DircBoostCrvTq_HwNm_T_f32 = Lim_f32(DircBoostCrvTq_HwNm_T_f32, IVSBOOSTCRVMINLIM_HWNM_F32, IVSBOOSTCRVMAXLIM_HWNM_F32);\
	
	DircBoostCrvTq_HwNm_T_u8p8 = FloatToFixd_u16_f32(DircBoostCrvTq_HwNm_T_f32, NXTRFIXDPT_FLOATTOP8_ULS_F32);
	
	return DircBoostCrvTq_HwNm_T_u8p8;
}

/**Base EPS Inverse Boost Curve**/
unsigned short FIH_Read_EPS_Inverse_BC_Torque(unsigned short Feature_Torque_Offset)
{
	VAR(float32, AUTOMATIC)	VehSpd_Kph_T_f32;
	VAR(uint16,  AUTOMATIC) VehSpd_Kph_T_u9p7;
	VAR(uint16, AUTOMATIC) 	IvsBoostCrvTq_HwNm_T_u8p8;
	VAR(float32, AUTOMATIC) IvsBoostCrvTq_HwNm_T_f32;
	VAR(uint16, AUTOMATIC) 	IvsBoostCrvTq_HwNm_T_u6p10;
	
	(void) Rte_Read_VehSpd_Val(&VehSpd_Kph_T_f32); 
	
	VehSpd_Kph_T_u9p7 =	FloatToFixd_u16_f32(VehSpd_Kph_T_f32, NXTRFIXDPT_FLOATTOP7_ULS_F32);
	                     
	IvsBoostCrvTq_HwNm_T_u8p8 = BilnrIntrpnWithRound_u16_u16MplXu16MplY( 	VehSpd_Kph_T_u9p7,
																			Feature_Torque_Offset,
																			SysGlbPrmVehSpdBilnrSeln_u9p7,
																			(uint16)TblSize_m(SysGlbPrmVehSpdBilnrSeln_u9p7),
																			(P2CONST(uint16, AUTOMATIC, Assi_CONST))PimTqOffsTbl_u8p8,
																			(P2CONST(uint16, AUTOMATIC, Assi_CONST))AssiMotTqWhlImbRejctnMinX_u8p8,
																			(uint16)TblSize_m(PimTqOffsTbl_u8p8[0]) );
																	
	IvsBoostCrvTq_HwNm_T_f32 = FixdToFloat_f32_u16(IvsBoostCrvTq_HwNm_T_u8p8, NXTRFIXDPT_P8TOFLOAT_ULS_F32);
	IvsBoostCrvTq_HwNm_T_f32 = Lim_f32(IvsBoostCrvTq_HwNm_T_f32, IVSBOOSTCRVMINLIM_HWNM_F32, IVSBOOSTCRVMAXLIM_HWNM_F32);
	
	IvsBoostCrvTq_HwNm_T_u6p10 = FloatToFixd_u16_f32(IvsBoostCrvTq_HwNm_T_f32, NXTRFIXDPT_FLOATTOP10_ULS_F32);
	
	return IvsBoostCrvTq_HwNm_T_u6p10;
}

/**Ford In House Feature Software Version Numbers **/
void FIH_Write_ANC_SW_Version(unsigned long ANC_SW_Version)
{
	(void) Rte_Write_FordActvNiblCtrlSwVers_Val(ANC_SW_Version);
}
void FIH_Write_LA_SW_Version(unsigned long LA_SW_Version)
{
	(void) Rte_Write_FordLaneAssiSwVers_Val(LA_SW_Version);
}
void FIH_Write_PDC_SW_Version(unsigned long PDC_SW_Version)
{
	(void) Rte_Write_FordPullDriftCmpSwVers_Val(PDC_SW_Version);
}
void FIH_Write_RF_SW_Version(unsigned long RF_SW_Version)
{
	(void) Rte_Write_FordResrchFctSwVers_Val(RF_SW_Version);
}
void FIH_Write_FIH_SW_Version(unsigned long FIH_SW_Version)
{
	(void) Rte_Write_FordBlaBoxSwVers_Val(FIH_SW_Version);
}

/** Read Arbiter Command**/
unsigned char FIH_Read_ANC_Arbiter(void)
{
	FordArbnCmd1 RtnVal_Cnt_T_enum;
	
	(void) Rte_Read_FordActvNiblCtrlArbnCmd_Val (&RtnVal_Cnt_T_enum);
	return ((uint8)RtnVal_Cnt_T_enum);
}

unsigned char FIH_Read_LKA_Arbiter(void)
{
	FordArbnCmd1 RtnVal_Cnt_T_enum;
	
	(void) Rte_Read_FordLaneKeepAssiArbnCmd_Val (&RtnVal_Cnt_T_enum);
	return ((uint8)RtnVal_Cnt_T_enum);
}

unsigned char FIH_Read_LDW_Arbiter(void)
{
	FordArbnCmd1 RtnVal_Cnt_T_enum;
	
	(void) Rte_Read_FordLaneDprtrWarnArbnCmd_Val (&RtnVal_Cnt_T_enum);
	return ((uint8)RtnVal_Cnt_T_enum);
}

unsigned char FIH_Read_PDC_Arbiter(void)
{
	FordArbnCmd1 RtnVal_Cnt_T_enum;
	
	(void) Rte_Read_FordPullDriftCmpArbnCmd_Val (&RtnVal_Cnt_T_enum);
	return ((uint8)RtnVal_Cnt_T_enum);
}

unsigned char FIH_Read_PDCLearning_Arbiter(void)
{
	FordArbnCmd1 RtnVal_Cnt_T_enum;
	
	(void) Rte_Read_FordPullDriftCmpLrngArbnCmd_Val (&RtnVal_Cnt_T_enum);
	return ((uint8)RtnVal_Cnt_T_enum);
}

unsigned char FIH_Read_LATCTL_Arbiter(void)
{
	FordArbnCmd1 RtnVal_Cnt_T_enum;
	
	(void) Rte_Read_FordLatCtrlArbnCmd_Val (&RtnVal_Cnt_T_enum);
	return ((uint8)RtnVal_Cnt_T_enum);
}

/** Write to Arbiter/Limiter **/
void FIH_Write_PDCLearning_Arbiter(unsigned char PDCLearning_FeatureState)
{
	(void) Rte_Write_FordPullDriftCmpLrngFeatSt_Val((FordFeatSt1)PDCLearning_FeatureState);
}

void FIH_Write_ANC_Arbiter(unsigned char ANC_FeatureState, signed short ANC_TorqueRequest)
{	
	VAR(float32, AUTOMATIC) RtnVal_HwNwtMtr_T_f32;
	
	RtnVal_HwNwtMtr_T_f32	=	FixdToFloat_f32_s16(ANC_TorqueRequest, NXTRFIXDPT_P10TOFLOAT_ULS_F32);
	RtnVal_HwNwtMtr_T_f32 	= 	Lim_f32(RtnVal_HwNwtMtr_T_f32, S5P10LOLIM_ULS_F32, S5P10HILIM_ULS_F32);
	
	(void) Rte_Write_FordActvNiblCtrlFeatSt_Val((FordFeatSt1)ANC_FeatureState);
	(void) Rte_Write_FordActvNiblCtrlTqReq_Val(RtnVal_HwNwtMtr_T_f32);
}

void FIH_Write_LKA_Arbiter(unsigned char LKA_FeatureState, signed short LKA_TorqueRequest)
{
	VAR(float32, AUTOMATIC) RtnVal_HwNwtMtr_T_f32;
	
	RtnVal_HwNwtMtr_T_f32	=	FixdToFloat_f32_s16(LKA_TorqueRequest, NXTRFIXDPT_P10TOFLOAT_ULS_F32);
	RtnVal_HwNwtMtr_T_f32 	= 	Lim_f32(RtnVal_HwNwtMtr_T_f32, S5P10LOLIM_ULS_F32, S5P10HILIM_ULS_F32);
	
	(void) Rte_Write_FordLaneKeepAssiFeatSt_Val((FordFeatSt1)LKA_FeatureState);
	(void) Rte_Write_FordLaneKeepAssiTqReq_Val(RtnVal_HwNwtMtr_T_f32);
}

void FIH_Write_LDW_Arbiter(unsigned char LDW_FeatureState, signed short LDW_TorqueRequest)
{
	VAR(float32, AUTOMATIC) RtnVal_HwNwtMtr_T_f32;
	
	RtnVal_HwNwtMtr_T_f32	=	FixdToFloat_f32_s16(LDW_TorqueRequest, NXTRFIXDPT_P9TOFLOAT_ULS_F32);
	RtnVal_HwNwtMtr_T_f32 	= 	Lim_f32(RtnVal_HwNwtMtr_T_f32, S6P9LOLIM_ULS_F32, S6P9HILIM_ULS_F32);
	
	(void) Rte_Write_FordLaneDprtrWarnFeatSt_Val((FordFeatSt1)LDW_FeatureState);
	(void) Rte_Write_FordLaneDprtrWarnTqReq_Val(RtnVal_HwNwtMtr_T_f32);
}

void FIH_Write_PDC_Arbiter(unsigned char PDC_FeatureState, signed short PDC_TorqueRequest)
{
	VAR(float32, AUTOMATIC) RtnVal_HwNwtMtr_T_f32;
	
	RtnVal_HwNwtMtr_T_f32	=	FixdToFloat_f32_s16(PDC_TorqueRequest, NXTRFIXDPT_P8TOFLOAT_ULS_F32);
	RtnVal_HwNwtMtr_T_f32 	= 	Lim_f32(RtnVal_HwNwtMtr_T_f32, S7P8LOLIM_ULS_F32, S7P8HILIM_ULS_F32);
	
	(void) Rte_Write_FordPullDriftCmpFeatSt_Val((FordFeatSt1)PDC_FeatureState);
	(void) Rte_Write_FordPullDriftCmpTqReq_Val(RtnVal_HwNwtMtr_T_f32);
}

void FIH_Write_LATCTL_Arbiter(unsigned char LATCTL_FeatureState, signed short LATCTL_TorqueRequest)
{
	VAR(float32, AUTOMATIC) RtnVal_HwNwtMtr_T_f32;
	
	RtnVal_HwNwtMtr_T_f32	=	FixdToFloat_f32_s16(LATCTL_TorqueRequest, NXTRFIXDPT_P9TOFLOAT_ULS_F32);
	RtnVal_HwNwtMtr_T_f32 	= 	Lim_f32(RtnVal_HwNwtMtr_T_f32, S6P9LOLIM_ULS_F32, S6P9HILIM_ULS_F32);
	
	(void) Rte_Write_FordLatCtrlFeatSt_Val((FordFeatSt1)LATCTL_FeatureState);
	(void) Rte_Write_FordLatCtrlTqReq_Val(RtnVal_HwNwtMtr_T_f32);
}

/** Read/Write for NVM **/
unsigned char FIH_ANC_Read_NV_Byte(unsigned char FIH_NV_Byte_Index)
{
	uint8 FIHNVData_Cnt_T_u08; 
	
	if( FIH_NV_Byte_Index < TblSize_m(PimActvNiblCtrl_u08))	/*In bound index check*/
	{
		FIHNVData_Cnt_T_u08	= 	PimActvNiblCtrl_u08[FIH_NV_Byte_Index];
	}
	
	else
	{
		FIHNVData_Cnt_T_u08	=  	0U;	/*TODO: Out of bound index is considered a Runtime exception which should be implemented in the future as per Ford Spec*/
	}
		
	return (FIHNVData_Cnt_T_u08);
	
}

unsigned char FIH_PDC_Read_NV_Byte(unsigned char FIH_NV_Byte_Index)
{
	uint8 FIHNVData_Cnt_T_u08; 
	
	if(FIH_NV_Byte_Index < TblSize_m(PimPullDriftCmp_u08))	/*In bound index check*/
	
	{
		FIHNVData_Cnt_T_u08	=	PimPullDriftCmp_u08[FIH_NV_Byte_Index];	
	}
		
	else
	{
		FIHNVData_Cnt_T_u08	=	0U; /*TODO: Out of bound index is considered a Runtime exception which should be implemented in the future as per Ford Spec*/
	}
		
		return FIHNVData_Cnt_T_u08;
}

unsigned char FIH_LA_Read_NV_Byte(unsigned char FIH_NV_Byte_Index)
{
	uint8 FIHNVData_Cnt_T_u08; 
	
	if(FIH_NV_Byte_Index < TblSize_m(PimLaneAssi_u08))	/*In bound index check*/
	{
		FIHNVData_Cnt_T_u08	=	 PimLaneAssi_u08[FIH_NV_Byte_Index];
	}
	
	else
	{
		FIHNVData_Cnt_T_u08	=	0U; /*TODO: Out of bound index is considered a Runtime exception which should be implemented in the future as per Ford Spec*/
	}
		
	return FIHNVData_Cnt_T_u08;	
}

void FIH_ANC_Write_NV_Byte(unsigned char FIH_NV_Byte_Index, unsigned char FIH_NV_Byte)
{
	PimActvNiblCtrl_u08[FIH_NV_Byte_Index] = FIH_NV_Byte;
}
void FIH_PDC_Write_NV_Byte(unsigned char FIH_NV_Byte_Index, unsigned char FIH_NV_Byte)
{
	PimPullDriftCmp_u08[FIH_NV_Byte_Index] = FIH_NV_Byte;
}
void FIH_LA_Write_NV_Byte(unsigned char FIH_NV_Byte_Index, unsigned char FIH_NV_Byte)
{
	PimLaneAssi_u08[FIH_NV_Byte_Index] = FIH_NV_Byte;
}

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of function definition area >>              DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
#define CDD_FordBlaBoxIfCmp1_STOP_SEC_CODE
#include "CDD_FordBlaBoxIfCmp1_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


