/***********************************************************************************************************************
* Copyright 2018 Nexteer
* Nexteer Confidential
*
* Module File Name: CDD_FordBlaBoxIfCmp2NonRte.c
* Module Description: This file contains the non-RTE server runnables for the CDD_FordBlaBoxIfCmp2 component
* Project           : CBD
* Author            : Disha Srivastava
************************************************************************************************************************
* Version Control:
* %version:         1 %
* %derived_by:      nz2610 %
* ---------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author    Change Description                                                           SCR #
* --------  -------  --------  ---------------------------------------------------------------------------  ----------
* 04/24/18  1        DS       Initial version  							   								 EA4#22952
*
***********************************************************************************************************************/

#include "Rte_CDD_FordBlaBoxIfCmp2.h"

#include "ArchGlbPrm.h"
#include "NxtrFixdPt.h"  /* this needs to be a subproject for components that use it */
#include "CDD_NxtrTi.h"  /* this needs to be a subproject for components that use it */
#include "NxtrMath.h"

#include "fih_interfaces.h"

#define S11P4LOLIM_ULS_F32 ((float32)-2048.0F)
#define S11P4HILIM_ULS_F32 ((float32)2047.9375F)
#define S10P5LOLIM_ULS_F32 ((float32)-1024.0F)
#define S10P5HILIM_ULS_F32 ((float32)1023.96875F)
#define S6P9LOLIM_ULS_F32  ((float32)-64.0F)
#define S6P9HILIM_ULS_F32  ((float32)63.99F)
#define S5P10LOLIM_ULS_F32 ((float32)-32.0F)
#define S5P10HILIM_ULS_F32 ((float32)31.99902344F)

/* need #define mem map section and #include corresponding MemMap.h file, copied from the component's RTE .c file */

/*---------------------------------------------------------------
 Write to HS-CAN
---------------------------------------------------------------*/
void FIH_Write_ESA_HS_CAN(unsigned char EsaOn_B_Stat)
{
	(void) Rte_Write_FordVehEvasSteerAssiSts_Val((Ford_EsaOn_B_Stat)EsaOn_B_Stat);
}  

/*------------------------------------------------------------
 Read/Write for Diagnostics
------------------------------------------------------------*/
unsigned short FIH_Read_BPR_Activation_Cnt(void)
{
	uint16 RtnVal_Cnt_T_u16;
	
	(void) Rte_Read_FordWrSrvBrkPlsRednActvnCntr_Val (&RtnVal_Cnt_T_u16);
	return RtnVal_Cnt_T_u16;
}

unsigned long FIH_Read_ESA_Int_Status_DID(void)
{
	uint32 RtnVal_Cnt_T_u32;
	
	(void) Rte_Read_FordWrSrvEvasSteerAssiIntSts_Val (&RtnVal_Cnt_T_u32);
	return RtnVal_Cnt_T_u32;
}

unsigned long FIH_Read_STDR_Int_Status_DID(void)
{
	uint32 RtnVal_Cnt_T_u32;
	
	(void) Rte_Read_FordWrSrvSteerTqDstbcRejctnIntSts_Val (&RtnVal_Cnt_T_u32);
	return RtnVal_Cnt_T_u32;
}

unsigned short FIH_Read_TSC_Activation_Cnt(void)
{
	uint16 RtnVal_Cnt_T_u16;
	
	(void) Rte_Read_FordWrSrvTqSteerCmpActvnCntr_Val (&RtnVal_Cnt_T_u16);
	return RtnVal_Cnt_T_u16;
}

void FIH_Write_BPR_Activation_Cnt(unsigned short BPR_ActivationCounter)
{
	(void) Rte_Write_FordBrkPlsRednActvnCntr_Val(BPR_ActivationCounter);
}

void FIH_Write_ESA_Int_Status_DID(unsigned long ESA_InternalStatus)
{
	(void) Rte_Write_FordEvasSteerAssiIntSts_Val(ESA_InternalStatus);
}

void FIH_Write_STDR_Int_Status_DID(unsigned long STDR_InternalStatus)
{
	(void) Rte_Write_FordSteerTqDstbcRejctnIntSts_Val(STDR_InternalStatus);
}

void FIH_Write_TSC_Activation_Cnt(unsigned short TSC_ActivationCounter)
{
	(void) Rte_Write_FordTqSteerCmpActvnCntr_Val(TSC_ActivationCounter);
}

/*---------------------------------------------------------------------
 Ford In-House feature Software version numbers
---------------------------------------------------------------------*/
void FIH_Write_ESA_SW_Version(unsigned long ESA_SW_Version)
{
	(void) Rte_Write_FordEvasSteerAssiSwVers_Val(ESA_SW_Version);
}

void FIH_Write_STDR_SW_Version(unsigned long STDR_SW_Version)
{
	(void) Rte_Write_FordSteerTqDstbcRejctnSwVers_Val(STDR_SW_Version);
}

/*---------------------------------------------------------------------
* Read to Arbiter Command
---------------------------------------------------------------------*/

unsigned char FIH_Read_ESA_Arbiter(void)
{
	FordArbnCmd1 RtnVal_Cnt_T_enum;
	
	(void) Rte_Read_FordEvasSteerAssiArbnCmd_Val (&RtnVal_Cnt_T_enum);
	return (uint8)RtnVal_Cnt_T_enum;
}

unsigned char FIH_Read_STDR_Arbiter(void)
{
	FordArbnCmd1 RtnVal_Cnt_T_enum;
	
	(void) Rte_Read_FordSteerTqDstbcRejctnArbnCmd_Val (&RtnVal_Cnt_T_enum);
	return (uint8)RtnVal_Cnt_T_enum;
}

/*---------------------------------------------------------------------
* Write to Arbiter/Limiter
---------------------------------------------------------------------*/

void FIH_Write_ESA_Arbiter(unsigned char ESA_FeatureState, signed short ESA_TorqueRequest)
{
	float32 RtnVal_Cnt_T_f32;
	 
	(void) Rte_Write_FordEvasSteerAssiFeatSt_Val((FordFeatSt1)ESA_FeatureState);
	
	RtnVal_Cnt_T_f32 = FixdToFloat_f32_s16(ESA_TorqueRequest, NXTRFIXDPT_P9TOFLOAT_ULS_F32);
	RtnVal_Cnt_T_f32 = Lim_f32(RtnVal_Cnt_T_f32, S6P9LOLIM_ULS_F32, S6P9HILIM_ULS_F32);
	(void) Rte_Write_FordEvasSteerAssiTqReq_Val(RtnVal_Cnt_T_f32);
}

void FIH_Write_STDR_Arbiter(unsigned char STDR_FeatureState, signed short STDR_TorqueRequest)
{
	float32 RtnVal_Cnt_T_f32;
	
	(void) Rte_Write_FordSteerTqDstbcRejctnFeatSt_Val((FordFeatSt1)STDR_FeatureState);
	
	RtnVal_Cnt_T_f32 = FixdToFloat_f32_s16(STDR_TorqueRequest, NXTRFIXDPT_P10TOFLOAT_ULS_F32);
	RtnVal_Cnt_T_f32 = Lim_f32(RtnVal_Cnt_T_f32, S5P10LOLIM_ULS_F32, S5P10HILIM_ULS_F32);
	(void) Rte_Write_FordSteerTqDstbcRejctnTqReq_Val(RtnVal_Cnt_T_f32);
}



