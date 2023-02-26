/***********************************************************************************************************************
* Copyright 2015 Nexteer
* Nexteer Confidential
*
* Module File Name: SrvFDC1.c
* Module Description: Service processing
* Project           : Common Manufacturing Services
* Author            : Jared Julien
************************************************************************************************************************
* Version Control:
* %version:         1 %
* %derived_by:      kzdyfh %
* ---------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author    Change Description                                                           SCR #
* --------  -------  --------  ---------------------------------------------------------------------------  ----------
* 11/17/17  1        JWJ       Initial file creation                                                        EA4#17640
***********************************************************************************************************************/

/* ================================================================================================================== */
/* Includes */
/* ------------------------------------------------------------------------------------------------------------------ */
#include "Rte_CmnMfgSrv.h"
#include "CmnMfgSrv.h"
#include "CmnMfgSrvTyp.h"
#include "MfgSrvCfg.h"
#include "CmnMfgSrvFct.h"


/* ================================================================================================================== */
/* Service Function Definitions */
/* ------------------------------------------------------------------------------------------------------------------ */

/* ---------------------------------------------------------------------------------------------------------------------
 *        Name:  CmnMfgSrv_SrvFDC1Rd
 * Description:  0xFDC1: Software Based Motor Calibration Parameters Read
 *          ID:  0xFDC1
 *        Type:  0x22 (Read)
 *    Sub-Func:  N/A
 *    Req. Len:  0 bytes
 *   Resp. Len:  23 bytes
 * ------------------------------------------------------------------------------------------------------------------ */
#if (CMNMFGSRV_FDC1ENA_CNT_LGC == CMNMFGSRV_ENAD_CNT_LGC)
FUNC(NegRespCodEnum, CmnMfgSrv_CODE) CmnMfgSrv_SrvFDC1Rd(VAR(uint8, CmnMfgSrv_VAR) DataBuf_Uls_T_u08[])
{
	VAR(NegRespCodEnum, AUTOMATIC) RespCod_Cnt_T_enum = MFGSRVNRCPOSRSP;
	VAR(float32, AUTOMATIC) BoostModlnIdx_Uls_T_f32;
	VAR(float32, AUTOMATIC) HldModlnIdx_Uls_T_f32;
	VAR(float32, AUTOMATIC) CoolDwnModlnIdx_Uls_T_f32;
	VAR(uint8, AUTOMATIC) Ramp1Ti_MilliSec_T_u08;
	VAR(uint8, AUTOMATIC) Ramp2Ti_MilliSec_T_u08;
	VAR(uint8, AUTOMATIC) Ramp3Ti_MilliSec_T_u08;
	VAR(uint8, AUTOMATIC) BoostTi_MilliSec_T_u08;
	VAR(uint16, AUTOMATIC) HldTi_MilliSec_T_u16;
	VAR(uint16, AUTOMATIC) CoolDwnTi_MilliSec_T_u16;
	VAR(uint16, AUTOMATIC) PosnStepSize_MotRevElec_T_u0p16;
	VAR(uint8, AUTOMATIC) ElecRevCnt_Cnt_T_u08;
	VAR(Std_ReturnType, AUTOMATIC) RtnCod_Cnt_T_u08;

	RtnCod_Cnt_T_u08 = Rte_Call_SwCalGetPrm_Oper(
			&BoostModlnIdx_Uls_T_f32,
			&HldModlnIdx_Uls_T_f32,
			&CoolDwnModlnIdx_Uls_T_f32,
			&Ramp1Ti_MilliSec_T_u08,
			&Ramp2Ti_MilliSec_T_u08,
			&Ramp3Ti_MilliSec_T_u08,
			&BoostTi_MilliSec_T_u08,
			&HldTi_MilliSec_T_u16,
			&CoolDwnTi_MilliSec_T_u16,
			&PosnStepSize_MotRevElec_T_u0p16,
			&ElecRevCnt_Cnt_T_u08
	);

	if (RtnCod_Cnt_T_u08 == E_OK)
	{
		CmnMfgSrvFct_DecomposeFloat(BoostModlnIdx_Uls_T_f32, &DataBuf_Uls_T_u08[0]);
		CmnMfgSrvFct_DecomposeFloat(HldModlnIdx_Uls_T_f32, &DataBuf_Uls_T_u08[4]);
		CmnMfgSrvFct_DecomposeFloat(CoolDwnModlnIdx_Uls_T_f32, &DataBuf_Uls_T_u08[8]);
		DataBuf_Uls_T_u08[12] = Ramp1Ti_MilliSec_T_u08;
		DataBuf_Uls_T_u08[13] = Ramp2Ti_MilliSec_T_u08;
		DataBuf_Uls_T_u08[14] = Ramp3Ti_MilliSec_T_u08;
		DataBuf_Uls_T_u08[15] = BoostTi_MilliSec_T_u08;
		CmnMfgSrvFct_Decompose16(HldTi_MilliSec_T_u16, &DataBuf_Uls_T_u08[16]);
		CmnMfgSrvFct_Decompose16(CoolDwnTi_MilliSec_T_u16, &DataBuf_Uls_T_u08[18]);
		CmnMfgSrvFct_Decompose16(PosnStepSize_MotRevElec_T_u0p16, &DataBuf_Uls_T_u08[20]);
		DataBuf_Uls_T_u08[22] = ElecRevCnt_Cnt_T_u08;
	}
	else
	{
		RespCod_Cnt_T_enum = MFGSRVNRCCONDITIONSNOTCORRECT;
	}

	return RespCod_Cnt_T_enum;
}
#endif

/* ---------------------------------------------------------------------------------------------------------------------
 *        Name:  CmnMfgSrv_SrvFDC1Wr
 * Description:  0xFDC1: Software Based Motor Calibration Parameters Write
 *          ID:  0xFDC1
 *        Type:  0x2E (Write)
 *    Sub-Func:  N/A
 *    Req. Len:  23 bytes
 *   Resp. Len:  0 bytes
 * ------------------------------------------------------------------------------------------------------------------ */
#if (CMNMFGSRV_FDC1ENA_CNT_LGC == CMNMFGSRV_ENAD_CNT_LGC)
FUNC(NegRespCodEnum, CmnMfgSrv_CODE) CmnMfgSrv_SrvFDC1Wr(VAR(uint8, CmnMfgSrv_VAR) DataBuf_Uls_T_u08[])
{
	VAR(NegRespCodEnum, AUTOMATIC) RespCod_Cnt_T_enum = MFGSRVNRCPOSRSP;
	VAR(float32, AUTOMATIC) BoostModlnIdx_Uls_T_f32;
	VAR(float32, AUTOMATIC) HldModlnIdx_Uls_T_f32;
	VAR(float32, AUTOMATIC) CoolDwnModlnIdx_Uls_T_f32;
	VAR(uint8, AUTOMATIC) Ramp1Ti_MilliSec_T_u08;
	VAR(uint8, AUTOMATIC) Ramp2Ti_MilliSec_T_u08;
	VAR(uint8, AUTOMATIC) Ramp3Ti_MilliSec_T_u08;
	VAR(uint8, AUTOMATIC) BoostTi_MilliSec_T_u08;
	VAR(uint16, AUTOMATIC) HldTi_MilliSec_T_u16;
	VAR(uint16, AUTOMATIC) CoolDwnTi_MilliSec_T_u16;
	VAR(uint16, AUTOMATIC) PosnStepSize_MotRevElec_T_u0p16;
	VAR(uint8, AUTOMATIC) ElecRevCnt_Cnt_T_u08;
	VAR(Std_ReturnType, AUTOMATIC) RtnCod_Cnt_T_u08;

	BoostModlnIdx_Uls_T_f32         = CmnMfgSrvFct_SynthesizeFloat(&DataBuf_Uls_T_u08[0]);
	HldModlnIdx_Uls_T_f32           = CmnMfgSrvFct_SynthesizeFloat(&DataBuf_Uls_T_u08[4]);
	CoolDwnModlnIdx_Uls_T_f32       = CmnMfgSrvFct_SynthesizeFloat(&DataBuf_Uls_T_u08[8]);
	Ramp1Ti_MilliSec_T_u08          = DataBuf_Uls_T_u08[12];
	Ramp2Ti_MilliSec_T_u08          = DataBuf_Uls_T_u08[13];
	Ramp3Ti_MilliSec_T_u08          = DataBuf_Uls_T_u08[14];
	BoostTi_MilliSec_T_u08          = DataBuf_Uls_T_u08[15];
	HldTi_MilliSec_T_u16            = CmnMfgSrvFct_Synthesize16(&DataBuf_Uls_T_u08[16]);
	CoolDwnTi_MilliSec_T_u16        = CmnMfgSrvFct_Synthesize16(&DataBuf_Uls_T_u08[18]);
	PosnStepSize_MotRevElec_T_u0p16 = CmnMfgSrvFct_Synthesize16(&DataBuf_Uls_T_u08[20]);
	ElecRevCnt_Cnt_T_u08            = DataBuf_Uls_T_u08[22];

	RtnCod_Cnt_T_u08 = Rte_Call_SwCalSetPrm_Oper(
			BoostModlnIdx_Uls_T_f32,
			HldModlnIdx_Uls_T_f32,
			CoolDwnModlnIdx_Uls_T_f32,
			Ramp1Ti_MilliSec_T_u08,
			Ramp2Ti_MilliSec_T_u08,
			Ramp3Ti_MilliSec_T_u08,
			BoostTi_MilliSec_T_u08,
			HldTi_MilliSec_T_u16,
			CoolDwnTi_MilliSec_T_u16,
			PosnStepSize_MotRevElec_T_u0p16,
			ElecRevCnt_Cnt_T_u08
	);

	if (RtnCod_Cnt_T_u08 != E_OK)
	{
		RespCod_Cnt_T_enum = MFGSRVNRCCONDITIONSNOTCORRECT;
	}

	return RespCod_Cnt_T_enum;
}
#endif



/* End of File: SrvFDC1.c */
