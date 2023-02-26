/***********************************************************************************************************************
* Copyright 2018 Nexteer
* Nexteer Confidential
*
* Module File Name: CDD_FordBlaBoxIfCmnNonRte.c
* Module Description: This file contains the non-RTE server runnables for the CDD_FordBlaBoxIfCmn component
* Project           : CBD
* Author            : Disha Srivastava
************************************************************************************************************************
* Version Control:
* %version:         1 %
* %derived_by:      nz2610 %
* ---------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author    Change Description                                                           SCR #
* --------  -------  --------  ---------------------------------------------------------------------------  ----------
* 04/24/18  1        DS       Initial version  							   								    EA4#22950
*
***********************************************************************************************************************/

#include "Rte_CDD_FordBlaBoxIfCmn.h"



#include "ArchGlbPrm.h"
#include "NxtrFixdPt.h"  /* this needs to be a subproject for components that use it */
#include "CDD_NxtrTi.h"  /* this needs to be a subproject for components that use it */

#include "NxtrMath.h"

#define S11P4LOLIM_ULS_F32 ((float32)-2048.0F)
#define S11P4HILIM_ULS_F32 ((float32)2047.9375F)
#define S10P5LOLIM_ULS_F32 ((float32)-1024.0F)
#define S10P5HILIM_ULS_F32 ((float32)1023.96875F)
#define FIXDPTLOLIM_ULS_S16 ((sint16)0x8001)
#define FIXDPTHILIM_ULS_S16 ((sint16)0x7FFF)
#define S23P8LOLIM_ULS_F32  ((float32)-8388608.0F)
#define S23P8HILIM_ULS_F32  ((float32)8388607.996F)
/* need #define mem map section and #include corresponding MemMap.h file, copied from the component's RTE .c file */

void BitSet_u32 (boolean Vld_Cnt_T_logl, uint32 Mask_Cnt_T_u32, uint32* RtnVal_Cnt_T_u32);
void BitSet_u16 (boolean Flg_Cnt_T_logl, uint16 Mask_Cnt_T_u16, uint16* RtnVal_Cnt_T_u16);
void BitSet_u08 (boolean Vld_Cnt_T_logl, uint8 Mask_Cnt_T_u08, uint8* RtnVal_Cnt_T_u08);

/*********************************************************************************
* FIH_IFR_2_1: Read from BASE EPS
**********************************************************************************/
unsigned long FIH_Read_EPS_System_Time(void)
{
	uint32 RtnVal_Cnt_T_u32;
	
	GetRefTmr1MicroSec32bit_Oper (&RtnVal_Cnt_T_u32);
	return RtnVal_Cnt_T_u32;
}

signed short FIH_Read_EPS_InputTorqueRaw(void)
{
	sint16 RtnVal_Cnt_T_s5p10; /* InputTorqueRaw in Ford DD */
	
	(void) Rte_Read_FordInpTqRaw_Val (&RtnVal_Cnt_T_s5p10);
	return (0- RtnVal_Cnt_T_s5p10);
}

unsigned char FIH_Read_EPS_Personalization(void)
{
	uint8 RtnVal_Cnt_T_u08; /* SDM_SteeringMode in Ford DD */
	
	(void) Rte_Read_SelnDrvgModSteerModReq_Val (&RtnVal_Cnt_T_u08);
	return RtnVal_Cnt_T_u08;
}

unsigned char FIH_Read_MaxAssistanceTorque(void)
{
	uint8 RtnVal_Cnt_T_u08; /* MaxAssistanceTorque in Ford DD */
	float32 RtnVal_Cnt_T_f32;
	
	(void) Rte_Read_FordMaxAsscTq_Val (&RtnVal_Cnt_T_f32);
	RtnVal_Cnt_T_u08 = (uint8)RtnVal_Cnt_T_f32;  //TODO: determine range of FordMaxAsscTq_Val
	return RtnVal_Cnt_T_u08;
}

signed short FIH_Read_EPS_ColumnVelocity(void)
{
	float32 RtnVal_HwRadPerSec_T_f32;
	float32 RtnVal_HwDegPerSec_T_f32;
	sint16 RtnVal_HwDegPerSec_T_s13p2; /* SPAVelocity in Ford DD */
	
	(void) Rte_Read_HwVel_Val (&RtnVal_HwRadPerSec_T_f32);
	/* need to reverse the sign for Ford convention */
	RtnVal_HwDegPerSec_T_f32 = -RtnVal_HwRadPerSec_T_f32 * ARCHGLBPRM_180OVERPI_ULS_F32;
	RtnVal_HwDegPerSec_T_s13p2 = FloatToFixd_s16_f32(RtnVal_HwDegPerSec_T_f32, NXTRFIXDPT_FLOATTOP2_ULS_F32); 
	return RtnVal_HwDegPerSec_T_s13p2;
}

signed short FIH_Read_EPS_Rel_SteeringAngle(void)
{
	float32 RtnVal_HwDeg_T_f32;
	sint16 RtnVal_Cnt_T_s11p4; /* RelativeSPA in Ford DD */
	
	(void) Rte_Read_FordRelHwPosn_Val (&RtnVal_HwDeg_T_f32);
	/* need to reverse the sign for Ford convention */
	RtnVal_HwDeg_T_f32 = Lim_f32 (-RtnVal_HwDeg_T_f32, S11P4LOLIM_ULS_F32, S11P4HILIM_ULS_F32);
	RtnVal_Cnt_T_s11p4 = FloatToFixd_s16_f32(RtnVal_HwDeg_T_f32, NXTRFIXDPT_FLOATTOP4_ULS_F32); 
	
	return RtnVal_Cnt_T_s11p4;
}

signed short FIH_Read_EPS_SteeringAngle(void)
{
	float32 RtnVal_HwNwtMtr_T_f32;
	sint16 RtnVal_Cnt_T_s10p5; /* CompensatedSPA in Ford DD */
	
	(void) Rte_Read_FordCmpdHwPosn_Val (&RtnVal_HwNwtMtr_T_f32);
	/* need to reverse the sign for Ford convention */
	RtnVal_HwNwtMtr_T_f32 = Lim_f32 (-RtnVal_HwNwtMtr_T_f32, S10P5LOLIM_ULS_F32, S10P5HILIM_ULS_F32);
	RtnVal_Cnt_T_s10p5 = FloatToFixd_s16_f32(RtnVal_HwNwtMtr_T_f32, NXTRFIXDPT_FLOATTOP5_ULS_F32); 
	return RtnVal_Cnt_T_s10p5;
}

unsigned short FIH_Read_EPS_VehicleSpeed(void)
{
	float32 RtnVal_Kph_T_f32;
	uint16 RtnVal_Kph_T_u10p6; /* FilteredVehicleSpeed in Ford DD */
	
	(void) Rte_Read_VehSpd_Val (&RtnVal_Kph_T_f32);
	RtnVal_Kph_T_u10p6 = FloatToFixd_u16_f32(RtnVal_Kph_T_f32, NXTRFIXDPT_FLOATTOP6_ULS_F32); 
	return RtnVal_Kph_T_u10p6;
}

unsigned short FIH_Read_VehicleSteeringRatio(void)
{
	uint16 RtnVal_Cnt_T_u8p8; /* VehicleSteeringRatio in Ford DD calibration? */
	
	RtnVal_Cnt_T_u8p8 = Rte_Prm_FordBlaBoxIfCmnVehSteerRat_Val();
	return RtnVal_Cnt_T_u8p8;
}

unsigned short FIH_Read_WheelBase(void)
{
	uint16 RtnVal_MilliMtr_T_u16; /* VehicleWheelBase in Ford DD calibration? */
	
	 RtnVal_MilliMtr_T_u16 = Rte_Prm_FordBlaBoxIfCmnVehWhlBas_Val();
	return RtnVal_MilliMtr_T_u16;
}

unsigned char FIH_Read_EPS_CompSPA_QF(void)
{
	/* CompensatedSPAQualityFactor in Ford DD */
	Ford_StePinCompAnEst_D_Qf RtnVal_Cnt_T_enum;
	
	// TODO: Ford enum type in data dict
	(void) Rte_Read_FordCmpdHwPosnQlyFac_Val (&RtnVal_Cnt_T_enum);
	return (uint8)RtnVal_Cnt_T_enum;
}

signed short FIH_Read_EPS_Assist_Torque(void)
{
	sint16 RtnVal_Cnt_T_s8p7; /* BCAssistTorque in Ford DD */
	
	(void) Rte_Read_FordBoostCrvAssiTq_Val (&RtnVal_Cnt_T_s8p7);
	RtnVal_Cnt_T_s8p7 = Lim_s16(RtnVal_Cnt_T_s8p7, FIXDPTLOLIM_ULS_S16, FIXDPTHILIM_ULS_S16);
	return (0 - RtnVal_Cnt_T_s8p7);
}

unsigned short FIH_Read_RackPinionRatio(void)
{
	uint16 RtnVal_Cnt_T_u8p8; /* RacktoPinionRatio in Ford DD - calibration? */
	
	(void) Rte_Read_RackToPinionRat_Val (&RtnVal_Cnt_T_u8p8);
	return RtnVal_Cnt_T_u8p8;
}

signed long FIH_Read_EPS_Final_Motor_Tq_App(void)
{
	float32 RtnVal_HwNwtMtr_T_f32;
	sint32 RtnVal_Cnt_T_s23p8; /* AppliedFinalMotorTorque in Ford DD */
	
	(void) Rte_Read_FordAppldFinalMotTq_Val (&RtnVal_HwNwtMtr_T_f32);
	RtnVal_Cnt_T_s23p8 = FloatToFixd_s32_f32(RtnVal_HwNwtMtr_T_f32, NXTRFIXDPT_FLOATTOP8_ULS_F32); 
	RtnVal_Cnt_T_s23p8 = Lim_s32(RtnVal_Cnt_T_s23p8, S23P8LOLIM_ULS_F32, S23P8HILIM_ULS_F32);
	return (0 - RtnVal_Cnt_T_s23p8);
}

signed long FIH_Read_EPS_Final_Motor_Tq_Rq(void)
{
	float32 RtnVal_HwNwtMtr_T_f32;
	sint32 RtnVal_Cnt_T_s23p8; /* RequestedFinalMotorTorque in Ford DD */
	
	(void) Rte_Read_FordReqdFinalMotTq_Val (&RtnVal_HwNwtMtr_T_f32);
	RtnVal_Cnt_T_s23p8 = FloatToFixd_s32_f32(RtnVal_HwNwtMtr_T_f32, NXTRFIXDPT_FLOATTOP8_ULS_F32); 
	return RtnVal_Cnt_T_s23p8;
}

unsigned short FIH_Read_TireCircumference(void)
{
	uint16 RtnVal_MilliMtr_T_u16; /* TireCircumference in FOrd DD */
	float32 RtnVal_MilliMtr_T_f32;
	
	(void) Rte_Read_FordVehTireCircum_Val (&RtnVal_MilliMtr_T_f32);
	RtnVal_MilliMtr_T_u16  = FloatToFixd_u16_f32(RtnVal_MilliMtr_T_f32, NXTRFIXDPT_FLOATTOP0_ULS_F32 );
	return RtnVal_MilliMtr_T_u16;
}

unsigned char FIH_Read_EngineSize(void)
{
	uint8 RtnVal_Cnt_T_u08;
	
	(void) Rte_Read_EngTqClass_Val (&RtnVal_Cnt_T_u08);
	return RtnVal_Cnt_T_u08;
}

signed short FIH_Read_APA_Torque_Filtered(void)
{
	float32 RtnVal_HwNwtMtr_T_f32;
	sint16 RtnVal_Cnt_T_s5p10; /* APA_Torque_Filtered in Ford DD */
	
	(void) Rte_Read_ActvParkAssiTqFild_Val (&RtnVal_HwNwtMtr_T_f32);
	// TODO: may need to limit values -- checking on range of input
	RtnVal_Cnt_T_s5p10 = FloatToFixd_s16_f32(RtnVal_HwNwtMtr_T_f32, NXTRFIXDPT_FLOATTOP10_ULS_F32);
	return RtnVal_Cnt_T_s5p10;
}

signed short FIH_Read_EPS_InputTorqueFilt(void)
{
	sint16 RtnVal_Cnt_T_s5p10; /* BCInputTorque in Ford DD */
	
	(void) Rte_Read_FordBoostCrvInpTq_Val (&RtnVal_Cnt_T_s5p10);
	return RtnVal_Cnt_T_s5p10;
}

unsigned short FIH_Read_EPS_VehicleSpeed_Raw(void)
{
	float32 RtnVal_Kph_T_f32;
	uint16 RtnVal_Kph_T_u10p6; /* VehicleSpeed in Ford DD */
	
	(void) Rte_Read_FordVehSpd_Val (&RtnVal_Kph_T_f32);
	RtnVal_Kph_T_u10p6 = FloatToFixd_u16_f32(RtnVal_Kph_T_f32, NXTRFIXDPT_FLOATTOP6_ULS_F32); 
	return RtnVal_Kph_T_u10p6;
}

/* unsigned short FIH_Read_TBA_EAC_Status(void)
{
	uint16 RtnVal_Cnt_T_u16;
	// TODO: data type of input signal is partially boolean, partially enum in data dict; question to Piyush
	(void) Rte_Read_ExtAgCtrlStsInt_Val (&RtnVal_Cnt_T_u16);
	return RtnVal_Cnt_T_u16;
} */

/******************************************************************************** 
* FIH_IFR_2_6: Read/Write for Pass Thru Signals
*********************************************************************************/
unsigned long FIH_Read_FIH_Msg_In_1_High(void)
{
	uint32 RtnVal_Cnt_T_u32;
	
	(void) Rte_Read_FordVehBlaBoxInp1HiPart_Val (&RtnVal_Cnt_T_u32);
	return RtnVal_Cnt_T_u32;
}

unsigned long FIH_Read_FIH_Msg_In_1_Low(void)
{
	uint32 RtnVal_Cnt_T_u32;
	
	(void) Rte_Read_FordVehBlaBoxInp1LoPart_Val (&RtnVal_Cnt_T_u32);
	return RtnVal_Cnt_T_u32;
}

unsigned long FIH_Read_FIH_Msg_In_2_High(void)
{
	uint32 RtnVal_Cnt_T_u32;
	
	(void) Rte_Read_FordVehBlaBoxInp2HiPart_Val (&RtnVal_Cnt_T_u32);
	return RtnVal_Cnt_T_u32;
}

unsigned long FIH_Read_FIH_Msg_In_2_Low(void)
{
	uint32 RtnVal_Cnt_T_u32;
	
	(void) Rte_Read_FordVehBlaBoxInp2LoPart_Val (&RtnVal_Cnt_T_u32);
	return RtnVal_Cnt_T_u32;
}

unsigned long FIH_Read_FIH_Msg_In_3_High(void)
{
	uint32 RtnVal_Cnt_T_u32;
	
	(void) Rte_Read_FordVehBlaBoxInp3HiPart_Val (&RtnVal_Cnt_T_u32);
	return RtnVal_Cnt_T_u32;
}

unsigned long FIH_Read_FIH_Msg_In_3_Low(void)
{
	uint32 RtnVal_Cnt_T_u32;
	
	(void) Rte_Read_FordVehBlaBoxInp3LoPart_Val (&RtnVal_Cnt_T_u32);
	return RtnVal_Cnt_T_u32;
}

unsigned long FIH_Read_FIH_Msg_In_4_High(void)
{
	uint32 RtnVal_Cnt_T_u32;
	
	(void) Rte_Read_FordVehBlaBoxInp4HiPart_Val (&RtnVal_Cnt_T_u32);
	return RtnVal_Cnt_T_u32;
}

unsigned long FIH_Read_FIH_Msg_In_4_Low(void)
{
	uint32 RtnVal_Cnt_T_u32;
	
	(void) Rte_Read_FordVehBlaBoxInp4LoPart_Val (&RtnVal_Cnt_T_u32);
	return RtnVal_Cnt_T_u32;
}
/*********************************************************************************/

/*********************************************************************************
* FIH_IFR_2_3: Input Signal Diagnostics
**********************************************************************************/

LOCAL_INLINE void BitSet_u32 (boolean Vld_Cnt_T_logl, uint32 Mask_Cnt_T_u32, uint32* RtnVal_Cnt_T_u32)
{
               if (Vld_Cnt_T_logl != FALSE)
               {
                              *RtnVal_Cnt_T_u32 = *RtnVal_Cnt_T_u32 | Mask_Cnt_T_u32;
               }
}             
 
unsigned long FIH_Read_Signal_Status(void)
{
               uint32 RtnVal_Cnt_T_u32 = 0U;
               boolean Vld_Cnt_T_logl;
               uint32 Mask_Cnt_T_u32 = 1U;
              
               /* Bit 0 */
               (void) Rte_Read_VehSpdVld_Logl (&Vld_Cnt_T_logl);
               BitSet_u32 (Vld_Cnt_T_logl, Mask_Cnt_T_u32, &RtnVal_Cnt_T_u32);
              
               /* Bit 1 */
               Mask_Cnt_T_u32 = Mask_Cnt_T_u32 << 1U;
               (void) Rte_Read_FordVehBrkTqVld_Logl (&Vld_Cnt_T_logl);
               BitSet_u32 (Vld_Cnt_T_logl, Mask_Cnt_T_u32, &RtnVal_Cnt_T_u32);
              
               /* Bit 2 */
               Mask_Cnt_T_u32 = Mask_Cnt_T_u32 << 1U;
               (void) Rte_Read_VertAVld_Logl (&Vld_Cnt_T_logl);
               BitSet_u32 (Vld_Cnt_T_logl, Mask_Cnt_T_u32, &RtnVal_Cnt_T_u32);
 
               /* Bit 3 */
               Mask_Cnt_T_u32 = Mask_Cnt_T_u32 << 1U;
               (void) Rte_Read_FordVehFrntLeWhlCntrDirVld_Logl (&Vld_Cnt_T_logl);
               BitSet_u32 (Vld_Cnt_T_logl, Mask_Cnt_T_u32, &RtnVal_Cnt_T_u32);
              
               /* Bit 4 */
               Mask_Cnt_T_u32 = Mask_Cnt_T_u32 << 1U;
               (void) Rte_Read_FordVehFrntLeWhlSpdVld_Logl (&Vld_Cnt_T_logl);
               BitSet_u32 (Vld_Cnt_T_logl, Mask_Cnt_T_u32, &RtnVal_Cnt_T_u32);
 
               /* Bit 5 */
               Mask_Cnt_T_u32 = Mask_Cnt_T_u32 << 1U;
               (void) Rte_Read_FordVehFrntRiWhlCntrDirVld_Logl (&Vld_Cnt_T_logl);
               BitSet_u32 (Vld_Cnt_T_logl, Mask_Cnt_T_u32, &RtnVal_Cnt_T_u32);
              
               /* Bit 6 */
               Mask_Cnt_T_u32 = Mask_Cnt_T_u32 << 1U;
               (void) Rte_Read_FordVehFrntRiWhlSpdVld_Logl (&Vld_Cnt_T_logl);
               BitSet_u32 (Vld_Cnt_T_logl, Mask_Cnt_T_u32, &RtnVal_Cnt_T_u32);
              
               /* Bit 7 */
               Mask_Cnt_T_u32 = Mask_Cnt_T_u32 << 1U;
               (void) Rte_Read_FordVehLaneAssiImgProcgModlAVld_Logl (&Vld_Cnt_T_logl);
               BitSet_u32 (Vld_Cnt_T_logl, Mask_Cnt_T_u32, &RtnVal_Cnt_T_u32);
              
               /* Bit 8 */
               Mask_Cnt_T_u32 = Mask_Cnt_T_u32 << 1U;
               (void) Rte_Read_FordVehLatACmpdVld_Logl (&Vld_Cnt_T_logl);
               BitSet_u32 (Vld_Cnt_T_logl, Mask_Cnt_T_u32, &RtnVal_Cnt_T_u32);
              
               /* Bit 9 */
               Mask_Cnt_T_u32 = Mask_Cnt_T_u32 << 1U;
               (void) Rte_Read_FordVehLatCtrlImgProcrModlAVld_Logl (&Vld_Cnt_T_logl);
               BitSet_u32 (Vld_Cnt_T_logl, Mask_Cnt_T_u32, &RtnVal_Cnt_T_u32);
              
               /* Bit 10 */
               Mask_Cnt_T_u32 = Mask_Cnt_T_u32 << 1U;
               (void) Rte_Read_FordVehSelDrvModChassisVld_Logl (&Vld_Cnt_T_logl);
               BitSet_u32 (Vld_Cnt_T_logl, Mask_Cnt_T_u32, &RtnVal_Cnt_T_u32);
              
               /* Bit 11 */
               Mask_Cnt_T_u32 = Mask_Cnt_T_u32 << 1U;
               (void) Rte_Read_FordVehPrpnWhlTqVld_Logl (&Vld_Cnt_T_logl);
               BitSet_u32 (Vld_Cnt_T_logl, Mask_Cnt_T_u32, &RtnVal_Cnt_T_u32);
              
               /* Bit 12 */
               Mask_Cnt_T_u32 = Mask_Cnt_T_u32 << 1U;
               (void) Rte_Read_FordVehGearRvsStsVld_Logl (&Vld_Cnt_T_logl);
               BitSet_u32 (Vld_Cnt_T_logl, Mask_Cnt_T_u32, &RtnVal_Cnt_T_u32);
              
               /* Bit 13 */
               Mask_Cnt_T_u32 = Mask_Cnt_T_u32 << 1U;
               (void) Rte_Read_FordVehReLeWhlCntrDirVld_Logl (&Vld_Cnt_T_logl);
               BitSet_u32 (Vld_Cnt_T_logl, Mask_Cnt_T_u32, &RtnVal_Cnt_T_u32);
              
               /* Bit 14 */
               Mask_Cnt_T_u32 = Mask_Cnt_T_u32 << 1U;
               (void) Rte_Read_FordVehReLeWhlSpdVld_Logl (&Vld_Cnt_T_logl);
               BitSet_u32 (Vld_Cnt_T_logl, Mask_Cnt_T_u32, &RtnVal_Cnt_T_u32);
              
               /* Bit 15 */
               Mask_Cnt_T_u32 = Mask_Cnt_T_u32 << 1U;
               (void) Rte_Read_FordVehReRiWhlCntrDirVld_Logl (&Vld_Cnt_T_logl);
               BitSet_u32 (Vld_Cnt_T_logl, Mask_Cnt_T_u32, &RtnVal_Cnt_T_u32);
              
               /* Bit 16 */
               Mask_Cnt_T_u32 = Mask_Cnt_T_u32 << 1U;
               (void) Rte_Read_FordVehReRiWhlSpdVld_Logl (&Vld_Cnt_T_logl);
               BitSet_u32 (Vld_Cnt_T_logl, Mask_Cnt_T_u32, &RtnVal_Cnt_T_u32);
              
               /* Bit 17 */
               Mask_Cnt_T_u32 = Mask_Cnt_T_u32 << 1U;
               (void) Rte_Read_FordVehSteerPinionAgOffsVld_Logl (&Vld_Cnt_T_logl);
               BitSet_u32 (Vld_Cnt_T_logl, Mask_Cnt_T_u32, &RtnVal_Cnt_T_u32);
              
               /* Bit 18 */
               Mask_Cnt_T_u32 = Mask_Cnt_T_u32 << 1U;
               (void) Rte_Read_FordVehTurnSigVld_Logl (&Vld_Cnt_T_logl);
               BitSet_u32 (Vld_Cnt_T_logl, Mask_Cnt_T_u32, &RtnVal_Cnt_T_u32);
              
               /* Bit 19 */
               Mask_Cnt_T_u32 = Mask_Cnt_T_u32 << 1U;
               (void) Rte_Read_FildVehSpdVld_Logl (&Vld_Cnt_T_logl);
               BitSet_u32 (Vld_Cnt_T_logl, Mask_Cnt_T_u32, &RtnVal_Cnt_T_u32);
              
               /* Bit 20 */
               Mask_Cnt_T_u32 = Mask_Cnt_T_u32 << 1U;
               (void) Rte_Read_FordVehYawRateVld_Logl (&Vld_Cnt_T_logl);
               BitSet_u32 (Vld_Cnt_T_logl, Mask_Cnt_T_u32, &RtnVal_Cnt_T_u32);
              
               /* Bit 21 */
               Mask_Cnt_T_u32 = Mask_Cnt_T_u32 << 1U;
               (void) Rte_Read_FordVehYawRateRawVld_Logl (&Vld_Cnt_T_logl);
               BitSet_u32 (Vld_Cnt_T_logl, Mask_Cnt_T_u32, &RtnVal_Cnt_T_u32);
              
               /* Bit 22 */
               Mask_Cnt_T_u32 = Mask_Cnt_T_u32 << 1U;
               (void) Rte_Read_FordVehYawStabyVld_Logl (&Vld_Cnt_T_logl);
               BitSet_u32 (Vld_Cnt_T_logl, Mask_Cnt_T_u32, &RtnVal_Cnt_T_u32);
              
               /* Bit 23 */
               Mask_Cnt_T_u32 = Mask_Cnt_T_u32 << 1U;
               (void) Rte_Read_FordVehLgtACmpdVld_Logl (&Vld_Cnt_T_logl);
               BitSet_u32 (Vld_Cnt_T_logl, Mask_Cnt_T_u32, &RtnVal_Cnt_T_u32);
              
               /* Bit 24 */
               Mask_Cnt_T_u32 = Mask_Cnt_T_u32 << 1U;
               (void) Rte_Read_FordVehAbsEscStsVld_Logl (&Vld_Cnt_T_logl);
               BitSet_u32 (Vld_Cnt_T_logl, Mask_Cnt_T_u32, &RtnVal_Cnt_T_u32);
              
               /* Bit 25 */
               Mask_Cnt_T_u32 = Mask_Cnt_T_u32 << 1U;
               (void) Rte_Read_FordVehEvasSteerAssiReqVld_Logl (&Vld_Cnt_T_logl);
               BitSet_u32 (Vld_Cnt_T_logl, Mask_Cnt_T_u32, &RtnVal_Cnt_T_u32);
              
               /* Bit 26 */
               Mask_Cnt_T_u32 = Mask_Cnt_T_u32 << 1U;
               (void) Rte_Read_FordVehEvasSteerAssiImgProcrModlAVld_Logl (&Vld_Cnt_T_logl);
               BitSet_u32 (Vld_Cnt_T_logl, Mask_Cnt_T_u32, &RtnVal_Cnt_T_u32);
              
               /* Bit 27 */
               Mask_Cnt_T_u32 = Mask_Cnt_T_u32 << 1U;
               (void) Rte_Read_FordVehSpdOverGndVld_Logl (&Vld_Cnt_T_logl);
               BitSet_u32 (Vld_Cnt_T_logl, Mask_Cnt_T_u32, &RtnVal_Cnt_T_u32);
 
               /* Bit 28 */
               Mask_Cnt_T_u32 = Mask_Cnt_T_u32 << 1U;
               (void) Rte_Read_FordHwVelVld_Logl (&Vld_Cnt_T_logl);
               BitSet_u32 (Vld_Cnt_T_logl, Mask_Cnt_T_u32, &RtnVal_Cnt_T_u32);
              
               /* Bit 29 */
               Mask_Cnt_T_u32 = Mask_Cnt_T_u32 << 1U;
               (void) Rte_Read_FordRelHwPosnVld_Logl (&Vld_Cnt_T_logl);
               BitSet_u32 (Vld_Cnt_T_logl, Mask_Cnt_T_u32, &RtnVal_Cnt_T_u32);
              
               /* Bit 30 */
               Mask_Cnt_T_u32 = Mask_Cnt_T_u32 << 1U;
               (void) Rte_Read_FordInpTqRawVld_Logl (&Vld_Cnt_T_logl);
               BitSet_u32 (Vld_Cnt_T_logl, Mask_Cnt_T_u32, &RtnVal_Cnt_T_u32);
              
               /* Bit 31 */
               Mask_Cnt_T_u32 = Mask_Cnt_T_u32 << 1U;
               (void) Rte_Read_FordAppldFinalMotTqVld_Logl (&Vld_Cnt_T_logl);
               BitSet_u32 (Vld_Cnt_T_logl, Mask_Cnt_T_u32, &RtnVal_Cnt_T_u32);
              
               return RtnVal_Cnt_T_u32;
}

unsigned long FIH_Read_Signal_Status2(void)
{
               uint32 RtnVal_Cnt_T_u32 = 0U;
               boolean Vld_Cnt_T_logl;
               uint32 Mask_Cnt_T_u32 = 1U;
              
               /* Bit 0 */
               (void) Rte_Read_FordVehAccrPedlPosnStsVld_Logl (&Vld_Cnt_T_logl);
               BitSet_u32 (Vld_Cnt_T_logl, Mask_Cnt_T_u32, &RtnVal_Cnt_T_u32);
              
               /* Bit 1 */
               Mask_Cnt_T_u32 = Mask_Cnt_T_u32 << 1U;
               (void) Rte_Read_FordVehEngSpdVld_Logl (&Vld_Cnt_T_logl);
               BitSet_u32 (Vld_Cnt_T_logl, Mask_Cnt_T_u32, &RtnVal_Cnt_T_u32);
              
               /* Bit 2 */
               Mask_Cnt_T_u32 = Mask_Cnt_T_u32 << 1U;
               (void) Rte_Read_FordVehGearLvrPosnVldInt_Logl (&Vld_Cnt_T_logl);
               BitSet_u32 (Vld_Cnt_T_logl, Mask_Cnt_T_u32, &RtnVal_Cnt_T_u32);
 
               /* Bit 3 */
               Mask_Cnt_T_u32 = Mask_Cnt_T_u32 << 1U;
               (void) Rte_Read_FordVehIgnStsVld_Logl (&Vld_Cnt_T_logl);
               BitSet_u32 (Vld_Cnt_T_logl, Mask_Cnt_T_u32, &RtnVal_Cnt_T_u32);
              
               /* Bit 4 */
               Mask_Cnt_T_u32 = Mask_Cnt_T_u32 << 1U;
               (void) Rte_Read_FordVehLoSpdMtnCtrlBrkSprtVld_Logl (&Vld_Cnt_T_logl);
               BitSet_u32 (Vld_Cnt_T_logl, Mask_Cnt_T_u32, &RtnVal_Cnt_T_u32);
 
               /* Bit 5 */
               Mask_Cnt_T_u32 = Mask_Cnt_T_u32 << 1U;
               (void) Rte_Read_FordVehParkAidModlStsVld_Logl (&Vld_Cnt_T_logl);
               BitSet_u32 (Vld_Cnt_T_logl, Mask_Cnt_T_u32, &RtnVal_Cnt_T_u32);
              
               /* Bit 6 */
               Mask_Cnt_T_u32 = Mask_Cnt_T_u32 << 1U;
               (void) Rte_Read_FordVehTrlrBackupAssiAvlVld_Logl (&Vld_Cnt_T_logl);
               BitSet_u32 (Vld_Cnt_T_logl, Mask_Cnt_T_u32, &RtnVal_Cnt_T_u32);
              
               /* Bit 7 */
               Mask_Cnt_T_u32 = Mask_Cnt_T_u32 << 1U;
               (void) Rte_Read_FordVehTrlrAidCnclReqVld_Logl (&Vld_Cnt_T_logl);
               BitSet_u32 (Vld_Cnt_T_logl, Mask_Cnt_T_u32, &RtnVal_Cnt_T_u32);
              
               /* Bit 8 */
               Mask_Cnt_T_u32 = Mask_Cnt_T_u32 << 1U;
               (void) Rte_Read_TrlrBackupAssiEnaVld_Logl (&Vld_Cnt_T_logl);
               BitSet_u32 (Vld_Cnt_T_logl, Mask_Cnt_T_u32, &RtnVal_Cnt_T_u32);
              
               /* Bit 9 */
               Mask_Cnt_T_u32 = Mask_Cnt_T_u32 << 1U;
               (void) Rte_Read_FordVehTrlrHitchAgVld_Logl (&Vld_Cnt_T_logl);
               BitSet_u32 (Vld_Cnt_T_logl, Mask_Cnt_T_u32, &RtnVal_Cnt_T_u32);
              
               /* Bit 10 */
               Mask_Cnt_T_u32 = Mask_Cnt_T_u32 << 1U;
               (void) Rte_Read_FordVehTrlrHitchRateVld_Logl (&Vld_Cnt_T_logl);
               BitSet_u32 (Vld_Cnt_T_logl, Mask_Cnt_T_u32, &RtnVal_Cnt_T_u32);
              
               /* Bit 11 */
               Mask_Cnt_T_u32 = Mask_Cnt_T_u32 << 1U;
               (void) Rte_Read_FordVehTrlrAidKnobPosnVld_Logl (&Vld_Cnt_T_logl);
               BitSet_u32 (Vld_Cnt_T_logl, Mask_Cnt_T_u32, &RtnVal_Cnt_T_u32);
              
               /* Bit 12 */
               Mask_Cnt_T_u32 = Mask_Cnt_T_u32 << 1U;
               (void) Rte_Read_FordVehTrlrAidKnobStsVld_Logl (&Vld_Cnt_T_logl);
               BitSet_u32 (Vld_Cnt_T_logl, Mask_Cnt_T_u32, &RtnVal_Cnt_T_u32);
              
               /* Bit 13 */
               Mask_Cnt_T_u32 = Mask_Cnt_T_u32 << 1U;
               (void) Rte_Read_FordVehTrlrBackupAssiMeasVld_Logl (&Vld_Cnt_T_logl);
               BitSet_u32 (Vld_Cnt_T_logl, Mask_Cnt_T_u32, &RtnVal_Cnt_T_u32);
              
               /* Bit 14 */
               Mask_Cnt_T_u32 = Mask_Cnt_T_u32 << 1U;
               (void) Rte_Read_FordVehTrlrTarVld_Logl (&Vld_Cnt_T_logl);
               BitSet_u32 (Vld_Cnt_T_logl, Mask_Cnt_T_u32, &RtnVal_Cnt_T_u32);
              
               /* Bit 15 */
               Mask_Cnt_T_u32 = Mask_Cnt_T_u32 << 1U;
               (void) Rte_Read_FordVehTrlrAidTrakgStVld_Logl (&Vld_Cnt_T_logl);
               BitSet_u32 (Vld_Cnt_T_logl, Mask_Cnt_T_u32, &RtnVal_Cnt_T_u32);
              
               /* Bit 16 */
               Mask_Cnt_T_u32 = Mask_Cnt_T_u32 << 1U;
               (void) Rte_Read_TrlrBackupAssiYawRateVld_Logl (&Vld_Cnt_T_logl);
               BitSet_u32 (Vld_Cnt_T_logl, Mask_Cnt_T_u32, &RtnVal_Cnt_T_u32);
              
               /* Bit 17 */
               Mask_Cnt_T_u32 = Mask_Cnt_T_u32 << 1U;
               (void) Rte_Read_TrlrBackupAssiRvsVld_Logl (&Vld_Cnt_T_logl);
               BitSet_u32 (Vld_Cnt_T_logl, Mask_Cnt_T_u32, &RtnVal_Cnt_T_u32);
              
               /* Bit 18 */
               Mask_Cnt_T_u32 = Mask_Cnt_T_u32 << 1U;
               (void) Rte_Read_FordVehTrlrAidModReqVld_Logl (&Vld_Cnt_T_logl);
               BitSet_u32 (Vld_Cnt_T_logl, Mask_Cnt_T_u32, &RtnVal_Cnt_T_u32);
              
               /* Bit 19 */
               Mask_Cnt_T_u32 = Mask_Cnt_T_u32 << 1U;
               (void) Rte_Read_FordVehBrkPedlVld_Logl (&Vld_Cnt_T_logl);
               BitSet_u32 (Vld_Cnt_T_logl, Mask_Cnt_T_u32, &RtnVal_Cnt_T_u32);
              
               /* Bit 20 thru 31 unused */
 
              
               return RtnVal_Cnt_T_u32;
}
/*********************************************************************************/

/*********************************************************************************
* FIH_IFR_1_2: FORD In-House Features Enable/Disable via DID
**********************************************************************************/

LOCAL_INLINE void BitSet_u16 (boolean Flg_Cnt_T_logl, uint16 Mask_Cnt_T_u16, uint16* RtnVal_Cnt_T_u16)
{
	if (Flg_Cnt_T_logl != FALSE)
	{
		*RtnVal_Cnt_T_u16 = *RtnVal_Cnt_T_u16 | Mask_Cnt_T_u16;
	}
}             

unsigned short FIH_Read_FIH_EoL_Config(void)
{
	uint16 RtnVal_Cnt_T_u16 = 0U;
	boolean Enad_Cnt_T_logl;
	uint16 Mask_Cnt_T_u16 = 1U;

    /* Bit 0 */
	(void) Rte_Read_FordActvNiblCtrlEnad_Logl (&Enad_Cnt_T_logl);
	BitSet_u16 (Enad_Cnt_T_logl, Mask_Cnt_T_u16, &RtnVal_Cnt_T_u16);

    /* Bit 1 */
	Mask_Cnt_T_u16 = Mask_Cnt_T_u16 << 1U;
	(void) Rte_Read_FordPullDriftCmpEnad_Logl (&Enad_Cnt_T_logl);
	BitSet_u16 (Enad_Cnt_T_logl, Mask_Cnt_T_u16, &RtnVal_Cnt_T_u16);

    /* Bit 2 */
	Mask_Cnt_T_u16 = Mask_Cnt_T_u16 << 1U;
	(void) Rte_Read_FordTqSteerCmpEnad_Logl (&Enad_Cnt_T_logl);
	BitSet_u16 (Enad_Cnt_T_logl, Mask_Cnt_T_u16, &RtnVal_Cnt_T_u16);

	/* Bit 3 */
	Mask_Cnt_T_u16 = Mask_Cnt_T_u16 << 1U;
	(void) Rte_Read_FordBrkPlsRejctnEnad_Logl (&Enad_Cnt_T_logl);
	BitSet_u16 (Enad_Cnt_T_logl, Mask_Cnt_T_u16, &RtnVal_Cnt_T_u16);

    /* Bit 4 */
	Mask_Cnt_T_u16 = Mask_Cnt_T_u16 << 1U;
	(void) Rte_Read_FordLaneKeepAssiEnad_Logl (&Enad_Cnt_T_logl);
	BitSet_u16 (Enad_Cnt_T_logl, Mask_Cnt_T_u16, &RtnVal_Cnt_T_u16);

	/* Bit 5 */
	Mask_Cnt_T_u16 = Mask_Cnt_T_u16 << 1U;
	(void) Rte_Read_FordLaneDprtrWarnEnad_Logl (&Enad_Cnt_T_logl);
	BitSet_u16 (Enad_Cnt_T_logl, Mask_Cnt_T_u16, &RtnVal_Cnt_T_u16);

    /* Bit 6 */
	Mask_Cnt_T_u16 = Mask_Cnt_T_u16 << 1U;
	(void) Rte_Read_FordTrfcJamAssiEnad_Logl (&Enad_Cnt_T_logl);
	BitSet_u16 (Enad_Cnt_T_logl, Mask_Cnt_T_u16, &RtnVal_Cnt_T_u16);

    /* Bit 7 */
	Mask_Cnt_T_u16 = Mask_Cnt_T_u16 << 1U;
	(void) Rte_Read_FordLaneCentrAssiEnad_Logl (&Enad_Cnt_T_logl);
	BitSet_u16 (Enad_Cnt_T_logl, Mask_Cnt_T_u16, &RtnVal_Cnt_T_u16);

    /* Bit 8 */
	Mask_Cnt_T_u16 = Mask_Cnt_T_u16 << 1U;
	(void) Rte_Read_FordTrlrBackupAssiEnad_Logl (&Enad_Cnt_T_logl);
	BitSet_u16 (Enad_Cnt_T_logl, Mask_Cnt_T_u16, &RtnVal_Cnt_T_u16);

    /* Bit 9 */
	Mask_Cnt_T_u16 = Mask_Cnt_T_u16 << 1U;
	(void) Rte_Read_FordEvasSteerAssiEnad_Logl (&Enad_Cnt_T_logl);
	BitSet_u16 (Enad_Cnt_T_logl, Mask_Cnt_T_u16, &RtnVal_Cnt_T_u16);

	/* Bit 10 */
	Mask_Cnt_T_u16 = Mask_Cnt_T_u16 << 1U;
	(void) Rte_Read_FordTrlrBackupAssi5WhlEnad_Logl (&Enad_Cnt_T_logl);
	BitSet_u16 (Enad_Cnt_T_logl, Mask_Cnt_T_u16, &RtnVal_Cnt_T_u16);

     /* Bit 11 */
	 Mask_Cnt_T_u16 = Mask_Cnt_T_u16 << 1U;
	(void) Rte_Read_FordTrlrBackupAssiTrigEnad_Logl (&Enad_Cnt_T_logl);
	BitSet_u16 (Enad_Cnt_T_logl, Mask_Cnt_T_u16, &RtnVal_Cnt_T_u16);

	/* Bit 12 not used */
	Mask_Cnt_T_u16 = Mask_Cnt_T_u16 << 1U;

    /* Bit 13 not used */
	Mask_Cnt_T_u16 = Mask_Cnt_T_u16 << 1U;

    /* Bit 14 not used */
	Mask_Cnt_T_u16 = Mask_Cnt_T_u16 << 1U;

    /* Bit 15 */
	Mask_Cnt_T_u16 = Mask_Cnt_T_u16 << 1U;
	(void) Rte_Read_FordResrchFctEnad_Logl (&Enad_Cnt_T_logl);
	BitSet_u16 (Enad_Cnt_T_logl, Mask_Cnt_T_u16, &RtnVal_Cnt_T_u16);

    return RtnVal_Cnt_T_u16;

}
/*********************************************************************************/
/*********************************************************************************
* FIH_IFR_2_2: Read from HS-CAN
**********************************************************************************/

unsigned short FIH_Read_WhlFl_W_Meas(void)
{
	uint16 RtnVal_Cnt_T_u16;
	
	(void) Rte_Read_FordVehFrntLeWhlSpdRaw_Val (&RtnVal_Cnt_T_u16);
	return RtnVal_Cnt_T_u16;
}

unsigned short FIH_Read_WhlFr_W_Meas(void)
{
	uint16 RtnVal_Cnt_T_u16;
	
	(void) Rte_Read_FordVehFrntRiWhlSpdRaw_Val (&RtnVal_Cnt_T_u16);
	return RtnVal_Cnt_T_u16;
}

unsigned short FIH_Read_CmbbObjDistLat_L_Actl(void)
{
	uint16 RtnVal_Cnt_T_u16;
	
	(void) Rte_Read_FordVehCllsnMtgtnByBrkgLatDstRaw_Val (&RtnVal_Cnt_T_u16);
	return RtnVal_Cnt_T_u16;
}

unsigned short FIH_Read_CmbbObjDistLong_L_Actl(void)
{
	uint16 RtnVal_Cnt_T_u16;
	
	(void) Rte_Read_FordVehCllsnMtgtnByBrkgLgtDstRaw_Val (&RtnVal_Cnt_T_u16);
	return RtnVal_Cnt_T_u16;
}

unsigned short FIH_Read_CmbbObjRelLat_V_Actl(void)
{
	uint16 RtnVal_Cnt_T_u16;
	
	(void) Rte_Read_FordVehCllsnMtgtnByBrkgRelLatVelRaw_Val (&RtnVal_Cnt_T_u16);
	return RtnVal_Cnt_T_u16;
}

unsigned short FIH_Read_CmbbObjRelLong_V_Actl(void)
{
	uint16 RtnVal_Cnt_T_u16;
	
	(void) Rte_Read_FordVehCllsnMtgtnByBrkgRelLgtVelRaw_Val (&RtnVal_Cnt_T_u16);
	return RtnVal_Cnt_T_u16;
}

unsigned short FIH_Read_VehLatComp_A_Actl(void)
{
	uint16 RtnVal_Cnt_T_u16;
	
	(void) Rte_Read_FordVehLatACmpdRaw_Val (&RtnVal_Cnt_T_u16);
	return RtnVal_Cnt_T_u16;
}

unsigned short FIH_Read_VehOverGnd_V_Est(void)
{
	uint16 RtnVal_Cnt_T_u16;
	
	(void) Rte_Read_FordVehSpdOverGndRaw_Val (&RtnVal_Cnt_T_u16);
	return RtnVal_Cnt_T_u16;
}

unsigned short FIH_Read_VehYawComp_W_Actl(void)
{
	uint16 RtnVal_Cnt_T_u16;
	
	(void) Rte_Read_FordVehYawRateCmpdRaw_Val (&RtnVal_Cnt_T_u16);
	return RtnVal_Cnt_T_u16;
}

unsigned short FIH_Read_YawStabilityIndex(void)
{
	uint16 RtnVal_Cnt_T_u16;
	
	(void) Rte_Read_FordVehYawStabyRaw_Val (&RtnVal_Cnt_T_u16);
	return RtnVal_Cnt_T_u16;
}

unsigned char FIH_Read_CmbbBrkDis_B_Actl(void)
{
	uint8 RtnVal_Cnt_T_u08;
	
	(void) Rte_Read_FordVehCllsnMtgtnByBrkgDisad_Val (&RtnVal_Cnt_T_u08);
	return RtnVal_Cnt_T_u08;
}

unsigned char FIH_Read_CmbbDeny_B_ActlBrk(void)
{
	uint8 RtnVal_Cnt_T_u08;
	
	(void) Rte_Read_FordVehCllsnMtgtnByBrkgDenied_Val (&RtnVal_Cnt_T_u08);
	return RtnVal_Cnt_T_u08;
}

unsigned char FIH_Read_CmbbObjClass_D_Stat(void)
{
	uint8 RtnVal_Cnt_T_u08;
	
	(void) Rte_Read_FordVehCllsnMtgtnByBrkgObjTypClassnRaw_Val (&RtnVal_Cnt_T_u08);
	return RtnVal_Cnt_T_u08;
}

unsigned char FIH_Read_CmbbObjColl_T_Actl(void)
{
	uint8 RtnVal_Cnt_T_u08;
	
	(void) Rte_Read_FordVehCllsnMtgtnByBrkgTiToCllsnRaw_Val (&RtnVal_Cnt_T_u08);
	return RtnVal_Cnt_T_u08;
}

unsigned char FIH_Read_CmbbObjConfdnc_D_Stat(void)
{
	uint8 RtnVal_Cnt_T_u08;
	
	(void) Rte_Read_FordVehCllsnMtgtnByBrkgObjDataConfLvlRaw_Val (&RtnVal_Cnt_T_u08);
	return RtnVal_Cnt_T_u08;
}

unsigned char FIH_Read_EsaEnbl_D_Rq(void)
{
	uint8 RtnVal_Cnt_T_u08;
	
	(void) Rte_Read_FordEvasSteerAssiEnaReq_Val (&RtnVal_Cnt_T_u08);
	return RtnVal_Cnt_T_u08;
}

unsigned char FIH_Read_EsaOn_B_Rq(void)
{
	uint8 RtnVal_Cnt_T_u08;
	
	(void) Rte_Read_FordVehEvasSteerAssiReq_Val (&RtnVal_Cnt_T_u08);
	return RtnVal_Cnt_T_u08;
}

unsigned short FIH_Read_LaCurvature_No_Calc(void)
{
	uint16 RtnVal_Cnt_T_u16;
	
	(void) Rte_Read_FordVehLaneKeepSysCrvtRaw_Val (&RtnVal_Cnt_T_u16);
	return RtnVal_Cnt_T_u16;
}

unsigned short FIH_Read_LaRefAng_No_Req(void)
{
	uint16 RtnVal_Cnt_T_u16;
	
	(void) Rte_Read_FordVehLaneKeepSysReqdAg_Val (&RtnVal_Cnt_T_u16);
	return RtnVal_Cnt_T_u16;
}

unsigned short FIH_Read_LatCtlCurv_NoRate_Actl(void)
{
	uint16 RtnVal_Cnt_T_u16;
	
	(void) Rte_Read_FordVehLatCtrlCrvtRateRaw_Val (&RtnVal_Cnt_T_u16);
	return RtnVal_Cnt_T_u16;
}

unsigned short FIH_Read_LatCtlCurv_No_Actl(void)
{
	uint16 RtnVal_Cnt_T_u16;
	
	(void) Rte_Read_FordVehLatCtrlCrvtRaw_Val (&RtnVal_Cnt_T_u16);
	return RtnVal_Cnt_T_u16;
}

unsigned short FIH_Read_LatCtlPathOffst_L_Actl(void)
{
	uint16 RtnVal_Cnt_T_u16;
	
	(void) Rte_Read_FordVehLatCtrlPahOffsRaw_Val (&RtnVal_Cnt_T_u16);
	return RtnVal_Cnt_T_u16;
}

unsigned short FIH_Read_LatCtlPath_An_Actl(void)
{
	uint16 RtnVal_Cnt_T_u16;
	
	(void) Rte_Read_FordVehLatCtrlPahRaw_Val (&RtnVal_Cnt_T_u16);
	return RtnVal_Cnt_T_u16;
}

unsigned short FIH_Read_VehYaw_W_Actl(void)
{
	Ford_VehYaw_W_Actl RtnVal_Cnt_T_enum;
	
	(void) Rte_Read_FordVehYawRateRaw_Val (&RtnVal_Cnt_T_enum);
	return (uint16)RtnVal_Cnt_T_enum;
}

unsigned char FIH_Read_AbsActv_B_Actl(void)
{
	uint8 RtnVal_Cnt_T_u08;
	
	(void) Rte_Read_FordVehAbsActv_Val (&RtnVal_Cnt_T_u08);
	return RtnVal_Cnt_T_u08;
}

unsigned char FIH_Read_HandsOffCnfm_B_Rq(void)
{
	uint8 RtnVal_Cnt_T_u08;
	
	(void) Rte_Read_FordVehLatCtrlHandsOffDetnTqStimlsReq_Val (&RtnVal_Cnt_T_u08);
	return RtnVal_Cnt_T_u08;
}

unsigned char FIH_Read_LaRampType_B_Req(void)
{
	uint8 RtnVal_Cnt_T_u08;
	
	(void) Rte_Read_FordVehLaneKeepSysRampTyp_Val (&RtnVal_Cnt_T_u08);
	return RtnVal_Cnt_T_u08;
}

unsigned char FIH_Read_LatCtlPrecision_D_Rq(void)
{
	uint8 RtnVal_Cnt_T_u08;
	
	(void) Rte_Read_FordVehLatCtrlPrcsn_Val (&RtnVal_Cnt_T_u08);
	return RtnVal_Cnt_T_u08;
}

unsigned char FIH_Read_LatCtlRampType_D_Rq(void)
{
	uint8 RtnVal_Cnt_T_u08;
	
	(void) Rte_Read_FordVehLatCtrlRampTyp_Val (&RtnVal_Cnt_T_u08);
	return RtnVal_Cnt_T_u08;
}

unsigned char FIH_Read_LatCtlRangeMax(void)
{
	uint8 RtnVal_Cnt_T_u08;
	
	(void) Rte_Read_FordVehLatCtrlRingMax_Val (&RtnVal_Cnt_T_u08);
	return RtnVal_Cnt_T_u08;
}

unsigned char FIH_Read_LatCtl_D_Rq(void)
{
	uint8 RtnVal_Cnt_T_u08;
	
	(void) Rte_Read_FordVehLatCtrlReq_Val (&RtnVal_Cnt_T_u08);
	return RtnVal_Cnt_T_u08;
}

unsigned char FIH_Read_LdwActvIntns_D_Req(void)
{
	uint8 RtnVal_Cnt_T_u08;
	
	(void) Rte_Read_FordVehLaneDetnWarnInten_Val (&RtnVal_Cnt_T_u08);
	return RtnVal_Cnt_T_u08;
}

unsigned char FIH_Read_LdwActvStats_D_Req(void)
{
	uint8 RtnVal_Cnt_T_u08;
	
	(void) Rte_Read_FordVehLaneDetnWarnSts_Val (&RtnVal_Cnt_T_u08);
	return RtnVal_Cnt_T_u08;
}

unsigned char FIH_Read_LkaActvStats_D_Req(void)
{
	uint8 RtnVal_Cnt_T_u08;
	
	(void) Rte_Read_FordVehLaneKeepSysSts_Val (&RtnVal_Cnt_T_u08);
	return RtnVal_Cnt_T_u08;
}

unsigned char FIH_Read_StabCtlBrkActv_B_Actl(void)
{
	uint8 RtnVal_Cnt_T_u08;
	
	(void) Rte_Read_FordVehEscActv_Val (&RtnVal_Cnt_T_u08);
	return RtnVal_Cnt_T_u08;
}

unsigned char FIH_Read_TurnLghtSwtch_D_Stat(void)
{
	uint8 RtnVal_Cnt_T_u08;
	
	(void) Rte_Read_FordVehTurnSigSwtStsRaw_Val (&RtnVal_Cnt_T_u08);
	return RtnVal_Cnt_T_u08;
}

unsigned short FIH_Read_BrkTot_Tq_Actl(void)
{
	uint16 RtnVal_Cnt_T_u16;
	
	(void) Rte_Read_FordVehActBrkTqRaw_Val (&RtnVal_Cnt_T_u16);
	return RtnVal_Cnt_T_u16;
}

unsigned short FIH_Read_PrplWhlTot2_Tq_Actl(void)
{
	uint16 RtnVal_Cnt_T_u16;
	
	(void) Rte_Read_FordVehPrpnWhlTqRaw_Val (&RtnVal_Cnt_T_u16);
	return RtnVal_Cnt_T_u16;
}

unsigned short FIH_Read_StePinOffst_An_Est(void)
{
	uint16 RtnVal_Cnt_T_u16;
	
	(void) Rte_Read_FordVehSteerPinionAgOffsRaw_Val (&RtnVal_Cnt_T_u16);
	return RtnVal_Cnt_T_u16;
}

unsigned short FIH_Read_WhlRl_W_Meas(void)
{
	uint16 RtnVal_Cnt_T_u16;
	
	(void) Rte_Read_FordVehReLeWhlSpdRaw_Val (&RtnVal_Cnt_T_u16);
	return RtnVal_Cnt_T_u16;
}

unsigned short FIH_Read_WhlRr_W_Meas(void)
{
	uint16 RtnVal_Cnt_T_u16;
	
	(void) Rte_Read_FordVehReRiWhlSpdRaw_Val (&RtnVal_Cnt_T_u16);
	return RtnVal_Cnt_T_u16;
}

unsigned char FIH_Read_GearRvrse_D_Actl(void)
{
	uint8 RtnVal_Cnt_T_u08;
	
	(void) Rte_Read_FordVehGearRvsStsRaw_Val (&RtnVal_Cnt_T_u08);
	return RtnVal_Cnt_T_u08;
}

unsigned char FIH_Read_StePinOffst_D_Stat(void)
{
	uint8 RtnVal_Cnt_T_u08;
	
	(void) Rte_Read_FordVehSteerPinionOffsStsRaw_Val (&RtnVal_Cnt_T_u08);
	return RtnVal_Cnt_T_u08;
}

unsigned char FIH_Read_WhlDirFl_D_Actl(void)
{
	uint8 RtnVal_Cnt_T_u08;
	
	(void) Rte_Read_FordVehFrntLeWhlDirRaw_Val (&RtnVal_Cnt_T_u08);
	return RtnVal_Cnt_T_u08;
}

unsigned char FIH_Read_WhlDirFr_D_Actl(void)
{
	uint8 RtnVal_Cnt_T_u08;
	
	(void) Rte_Read_FordVehFrntRiWhlDirRaw_Val (&RtnVal_Cnt_T_u08);
	return RtnVal_Cnt_T_u08;
}

unsigned char FIH_Read_WhlDirRl_D_Actl(void)
{
	uint8 RtnVal_Cnt_T_u08;
	
	(void) Rte_Read_FordVehReLeWhlDirRaw_Val (&RtnVal_Cnt_T_u08);
	return RtnVal_Cnt_T_u08;
}

unsigned char FIH_Read_WhlDirRr_D_Actl(void)
{
	uint8 RtnVal_Cnt_T_u08;
	
	(void) Rte_Read_FordVehReRiWhlDirRaw_Val (&RtnVal_Cnt_T_u08);
	return RtnVal_Cnt_T_u08;
}

unsigned long FIH_Read_TrlrSnsId_High(void)
{
	uint32 RtnVal_Cnt_T_u32;
	
	(void) Rte_Read_FordYawRateSnsrIdHi_Val (&RtnVal_Cnt_T_u32);
	return RtnVal_Cnt_T_u32;
}

unsigned long FIH_Read_TrlrSnsId_Low(void)
{
	uint32 RtnVal_Cnt_T_u32;
	
	(void) Rte_Read_FordYawRateSnsrIdLo_Val (&RtnVal_Cnt_T_u32);
	return RtnVal_Cnt_T_u32;
}

unsigned short FIH_Read_ApedPos_Pc_ActlArb(void)
{
	uint16 RtnVal_Cnt_T_u16;
	
	(void) Rte_Read_FordVehAccrPedlPosnStsRaw_Val (&RtnVal_Cnt_T_u16);
	return RtnVal_Cnt_T_u16;
}

unsigned short FIH_Read_EngAout_N_Actl(void)
{
	uint16 RtnVal_Cnt_T_u16;
	
	(void) Rte_Read_FordVehEngSpdRaw_Val (&RtnVal_Cnt_T_u16);
	return RtnVal_Cnt_T_u16;
}

unsigned short FIH_Read_TrlrAidCtl_U_RqDrv(void)
{
	uint16 RtnVal_Cnt_T_u16;
	
	(void) Rte_Read_FordVehTrlrAidKnobPosn_Val (&RtnVal_Cnt_T_u16);
	return RtnVal_Cnt_T_u16;
}

unsigned short FIH_Read_TrlrAid_Angle(void)
{
	uint16 RtnVal_Cnt_T_u16;
	
	(void) Rte_Read_FordVehTrlrAidHitchAg_Val (&RtnVal_Cnt_T_u16);
	return RtnVal_Cnt_T_u16;
}

unsigned short FIH_Read_TrlrAxleToBmpr_L_Actl(void)
{
	uint16 RtnVal_Cnt_T_u16;
	
	(void) Rte_Read_FordVehTrlrAxleToBmpRaw_Val (&RtnVal_Cnt_T_u16);
	return RtnVal_Cnt_T_u16;
}

unsigned short FIH_Read_TrlrHitYaw_AnRate(void)
{
	uint16 RtnVal_Cnt_T_u16;
	
	(void) Rte_Read_FordVehTrlrHitchAgRateRaw_Val (&RtnVal_Cnt_T_u16);
	return RtnVal_Cnt_T_u16;
}

unsigned short FIH_Read_TrlrHitchYaw_An(void)
{
	uint16 RtnVal_Cnt_T_u16;
	
	(void) Rte_Read_FordVehTrlrHitchYawAgRaw_Val (&RtnVal_Cnt_T_u16);
	return RtnVal_Cnt_T_u16;
}

unsigned short FIH_Read_TrlrIdType_Stat(void)
{
	uint16 RtnVal_Cnt_T_u16;
	
	(void) Rte_Read_FordVehTrlrIdnTypRaw_Val (&RtnVal_Cnt_T_u16);
	return RtnVal_Cnt_T_u16;
}

unsigned short FIH_Read_TrlrYaw_W(void)
{
	uint16 RtnVal_Cnt_T_u16;
	
	(void) Rte_Read_FordVehTrlrYawRateRaw_Val (&RtnVal_Cnt_T_u16);
	return RtnVal_Cnt_T_u16;
}

unsigned short FIH_Read_VehLongComp_A_Actl(void)
{
	uint16 RtnVal_Cnt_T_u16;
	
	(void) Rte_Read_FordVehLgtACmpdRaw_Val (&RtnVal_Cnt_T_u16);
	return RtnVal_Cnt_T_u16;
}

unsigned short FIH_Read_Veh_V_ActlBrk(void)
{
	uint16 RtnVal_Cnt_T_u16;
	
	(void) Rte_Read_FordVehSpdBrkModlRaw_Val (&RtnVal_Cnt_T_u16);
	return RtnVal_Cnt_T_u16;
}

unsigned short FIH_Read_TrlrAid_AngleRate (void)
{
	uint16 RtnVal_Cnt_T_u16;
	
	(void) Rte_Read_FordTrlrAidHitchAgRate_Val (&RtnVal_Cnt_T_u16);
	return RtnVal_Cnt_T_u16;
}

unsigned char FIH_Read_TrlrAid_D2_Stat (void)
{
	uint8 RtnVal_Cnt_T_u08;
	
	(void) Rte_Read_FordVehTrlrAidTrakgSt_Val (&RtnVal_Cnt_T_u08);
	return RtnVal_Cnt_T_u08;
}

unsigned char FIH_Read_TrlrAnOffstDir_Mem (void)
{
	uint8 RtnVal_Cnt_T_u08;
	
	(void) Rte_Read_FordVehTrlrAgOffsDirRaw_Val (&RtnVal_Cnt_T_u08);
	return RtnVal_Cnt_T_u08;
}
/**********************************************************************************
* FIH_IFR_2_7: Read for Pass Thru Signals Diagnostics
***********************************************************************************/
LOCAL_INLINE void BitSet_u08 (boolean Vld_Cnt_T_logl, uint8 Mask_Cnt_T_u08, uint8* RtnVal_Cnt_T_u08)
{
               if (Vld_Cnt_T_logl != FALSE)
               {
                              *RtnVal_Cnt_T_u08 = *RtnVal_Cnt_T_u08 | Mask_Cnt_T_u08;
               }
}  
unsigned char FIH_Read_Signal_Status_PassThru(void)
{
    uint8 RtnVal_Cnt_T_u08 = 0U;
	boolean Enad_Cnt_T_logl;
	uint8 Mask_Cnt_T_u08 = 1U;

    /* Bit 0 */
	(void) Rte_Read_FordMsgInp1Vld_Logl (&Enad_Cnt_T_logl);
	BitSet_u08 (Enad_Cnt_T_logl, Mask_Cnt_T_u08, &RtnVal_Cnt_T_u08);

	/* Bit 0 */
	(void) Rte_Read_FordMsgInp2Vld_Logl (&Enad_Cnt_T_logl);
	BitSet_u08 (Enad_Cnt_T_logl, Mask_Cnt_T_u08, &RtnVal_Cnt_T_u08);
	
	/* Bit 0 */
	(void) Rte_Read_FordMsgInp3Vld_Logl (&Enad_Cnt_T_logl);
	BitSet_u08 (Enad_Cnt_T_logl, Mask_Cnt_T_u08, &RtnVal_Cnt_T_u08);
	
	/* Bit 0 */
	(void) Rte_Read_FordMsgInp4Vld_Logl (&Enad_Cnt_T_logl);
	BitSet_u08 (Enad_Cnt_T_logl, Mask_Cnt_T_u08, &RtnVal_Cnt_T_u08);
	
	/* Bit 4-7 Unused*/

	return RtnVal_Cnt_T_u08;
}




/****************************************************End**********************************************************************/



/* no TBA this build?
unsigned char FIH_Read_AngleControlState(void)
{
	uint8 RtnVal_Cnt_T_u08; INTAngleControlStat1 in Ford DD 
	
	(void) Rte_Read_IntAgCtrlSt_Val (&RtnVal_Cnt_T_u08);
	return RtnVal_Cnt_T_u08;
}

unsigned char FIH_Read_ApedPosPcActl_D_Qf(void);

unsigned char FIH_Read_BpedDrvAppl_Actl(void);

unsigned char FIH_Read_BpedDrvAppl_QF(void);

unsigned char FIH_Read_EPSSystemState(void)
{
	FordEpsSysSt1 RtnVal_Cnt_T_enum;  EPSSystemState in Ford DD 
	
	
	(void) Rte_Read_FordEpsSysSt_Val (&RtnVal_Cnt_T_enum);
	return (uint8)RtnVal_Cnt_T_enum;
}
 */


/* no TBA this build? 
unsigned char FIH_Read_GearLvrPos_D_Actl(void);

unsigned char FIH_Read_GearPosition(void);


 no TBA this build? 
unsigned char FIH_Read_HitchToVehAxle(void);

unsigned char FIH_Read_Ignition_Status(void);

unsigned char FIH_Read_LsmcBrkDecel_D_Stat(void);

unsigned char FIH_Read_SAPPAngleControlStat1(void)
{
	uint8 RtnVal_Cnt_T_u08;  SAPPAngleControlStat1 in Ford DD 
	
	(void) Rte_Read_SemiAutParlParkAgCtrlSts1_Val (&RtnVal_Cnt_T_u08);
	return RtnVal_Cnt_T_u08;
}

unsigned char FIH_Read_SAPPAngleControlStat2(void)
{
	boolean RtnVal_Cnt_T_lgc;
	
	(void) Rte_Read_SemiAutParlParkAgCtrlSts2_Val (&RtnVal_Cnt_T_lgc);
	return (uint8)RtnVal_Cnt_T_lgc;
}

unsigned char FIH_Read_SAPPAngleControlStat3(void)
{
	boolean RtnVal_Cnt_T_lgc;
	
	(void) Rte_Read_SemiAutParlParkAgCtrlSts3_Val (&RtnVal_Cnt_T_lgc);
	return (uint8)RtnVal_Cnt_T_lgc;
}

unsigned char FIH_Read_SAPPAngleControlStat4(void)
{
	boolean RtnVal_Cnt_T_lgc;
	
	(void) Rte_Read_SemiAutParlParkAgCtrlSts4_Val (&RtnVal_Cnt_T_lgc);
	return (uint8)RtnVal_Cnt_T_lgc;
}

unsigned char FIH_Read_SAPPAngleControlStat5(void)
{
	boolean RtnVal_Cnt_T_lgc;
	
	(void) Rte_Read_SemiAutParlParkAgCtrlSts5_Val (&RtnVal_Cnt_T_lgc);
	return (uint8)RtnVal_Cnt_T_lgc;
}

unsigned char FIH_Read_SAPPStatusCoding(void);

unsigned char FIH_Read_TrlrAidCancl_B_Rq(void);

unsigned char FIH_Read_TrlrAidCancl_B_Rq_UB(void);

unsigned char FIH_Read_TrlrAidCtl_U_RqDrv_UB(void);

unsigned char FIH_Read_TrlrAidEnbl_D2_Rq(void);

unsigned char FIH_Read_TrlrAidSetup_Rq(void);

unsigned char FIH_Read_TrlrAidSwtchD_RqDrv_UB(void);

unsigned char FIH_Read_TrlrAidSwtch_D_RqDrv(void);

unsigned char FIH_Read_TrlrAidTrgtId(void);

unsigned char FIH_Read_TrlrAid_D_Stat(void);

unsigned char FIH_Read_TrlrAid_Mode_Rq(void);

unsigned char FIH_Read_TrlrAid_Mode_UB(void);

unsigned char FIH_Read_TrlrAnOffstDir_D_Mem(void);

unsigned char FIH_Read_TrlrBallToBmpr_L_Actl(void);

unsigned char FIH_Read_TrlrBrkActCnnct_B_Actl(void);

unsigned char FIH_Read_TrlrHitchYaw_Stat(void);

unsigned char FIH_Read_TrlrId_No_Actl(void);

unsigned char FIH_Read_TrlrLampCnnct_B_Actl(void);

unsigned char FIH_Read_TrlrRvrseCancl_Rq(void);

unsigned char FIH_Read_TrlrRvrseEnbl(void);

unsigned char FIH_Read_TrlrRvrseMsgTxt(void);

unsigned char FIH_Read_TrlrRvrseOn_Stat(void);

unsigned char FIH_Read_TrlrTrgtAcquire(void);

unsigned char FIH_Read_TrlrYaw_W_Qf(void);

unsigned char FIH_Read_TrnRng(void);

unsigned char FIH_Read_VehVTrlrAid_B_Avail(void);

unsigned char FIH_Read_VehVertComp(void);
*/

/* no TBA this build? 
unsigned char FIH_Read_Whl_Fl_Roll_Cnt(void);

unsigned char FIH_Read_Whl_Fr_Roll_Cnt(void);

unsigned char FIH_Read_Whl_Rl_Roll_Cnt(void);

unsigned char FIH_Read_Whl_Rr_Roll_Cnt(void);
*/

/* no TBA this build?
unsigned char FIH_TBA_Read_NV_Byte(unsigned short FIH_NV_Byte_Index);
{
	return xxxPimTBA[FIH_NV_Byte_Index];
}
*/

/* no TBA this build?
void FIH_TBA_AngleRequest_Function(unsigned char EPASIntAngleStatReq, signed short IntSteeringAngleReq)
{
}
*/

/* no TBA this build?
void FIH_TBA_Write_NV_Byte(unsigned short FIH_NV_Byte_Index, unsigned char FIH_NV_Byte)
{
	xxxPimTBA[FIH_NV_Byte_Index] = FIH_NV_Byte;
}
 */
 
 /* no TBA this build? 
extern void FIH_Write_LsmcBrkDecel_Request(unsigned char LsmcBrkDecelEnbl_D_Rq, unsigned short LsmcBrk_Tq_Rq);

extern void FIH_Write_TBA_Int_Status_DID(unsigned long TBA_InternalStatus);

extern void FIH_Write_TBA_SW_Version(unsigned long TBA_SW_Version);

extern void FIH_Write_TBA_to_EPAS_INFO(unsigned char Veh_V_RqMxTrlrAid, unsigned char VehVTrlrAid_B_Rq, unsigned char TrlrHitchLamp_D_Rqst);

extern void FIH_Write_TBA_to_LA_Data3(unsigned char TrlrAn_An_TrgtCalc);

extern void FIH_Write_TBA_to_TrlrAid_Data2(unsigned char TrlrAidEnbl_D2_Stat, unsigned char TrlrAidMsgTxt_D2_Rq, unsigned char TrlrAnOffst_An2_Calc, unsigned char TrlrAn_An_WarnCalc, unsigned char TrlrAn_An_MxCalc, unsigned short
    HitchToTrlrAxle_L_Calc, unsigned char TrlrAidTrlrId_No_Rq, unsigned char TrlrAidTrgtId_No_Rq, unsigned char TrlrAidSetup_D2_Stat);
*/







