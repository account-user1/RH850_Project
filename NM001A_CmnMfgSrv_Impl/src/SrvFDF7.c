/***********************************************************************************************************************
* Copyright 2015 Nexteer
* Nexteer Confidential
*
* Module File Name: SrvFDF7.c
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
 *        Name:  CmnMfgSrv_SrvFDF7Rd
 * Description:  0xFDF7: Single Inverter Current Offset Trim Read
 *          ID:  0xFDF7
 *        Type:  0x22 (Read)
 *    Sub-Func:  N/A
 *    Req. Len:  0 bytes
 *   Resp. Len:  28 bytes
 * ------------------------------------------------------------------------------------------------------------------ */
#if (CMNMFGSRV_FDF7ENA_CNT_LGC == CMNMFGSRV_ENAD_CNT_LGC)
FUNC(NegRespCodEnum, CmnMfgSrv_CODE) CmnMfgSrv_SrvFDF7Rd(VAR(uint8, CmnMfgSrv_VAR) DataBuf_Uls_T_u08[])
{
	VAR(NegRespCodEnum, AUTOMATIC) RespCod_Cnt_T_enum = MFGSRVNRCPOSRSP;
	VAR(Std_ReturnType, AUTOMATIC) RtnCod_Cnt_T_u08;
	VAR(float32, AUTOMATIC) CurrMeasEolOffsHiBrdgVltg_Uls_T_f32;
	VAR(float32, AUTOMATIC) CurrMeasMotCurrOffsDifA_Uls_T_f32;
	VAR(float32, AUTOMATIC) CurrMeasMotCurrOffsDifB_Uls_T_f32;
	VAR(float32, AUTOMATIC) CurrMeasMotCurrOffsDifC_Uls_T_f32;
	VAR(float32, AUTOMATIC) CurrMeasMotCurrOffsLoAvrgA_Uls_T_f32;
	VAR(float32, AUTOMATIC) CurrMeasMotCurrOffsLoAvrgB_Uls_T_f32;
	VAR(float32, AUTOMATIC) CurrMeasMotCurrOffsLoAvrgC_Uls_T_f32;

	RtnCod_Cnt_T_u08 = Rte_Call_CurrMeasOffsReadReqSngIvtr_Oper(
			&CurrMeasEolOffsHiBrdgVltg_Uls_T_f32,
			&CurrMeasMotCurrOffsDifA_Uls_T_f32,
			&CurrMeasMotCurrOffsDifB_Uls_T_f32,
			&CurrMeasMotCurrOffsDifC_Uls_T_f32,
			&CurrMeasMotCurrOffsLoAvrgA_Uls_T_f32,
			&CurrMeasMotCurrOffsLoAvrgB_Uls_T_f32,
			&CurrMeasMotCurrOffsLoAvrgC_Uls_T_f32
	);

	if (RtnCod_Cnt_T_u08 == E_OK)
	{
		CmnMfgSrvFct_DecomposeFloat(CurrMeasEolOffsHiBrdgVltg_Uls_T_f32, &DataBuf_Uls_T_u08[0U]);
		CmnMfgSrvFct_DecomposeFloat(CurrMeasMotCurrOffsDifA_Uls_T_f32, &DataBuf_Uls_T_u08[4U]);
		CmnMfgSrvFct_DecomposeFloat(CurrMeasMotCurrOffsDifB_Uls_T_f32, &DataBuf_Uls_T_u08[8U]);
		CmnMfgSrvFct_DecomposeFloat(CurrMeasMotCurrOffsDifC_Uls_T_f32, &DataBuf_Uls_T_u08[12U]);
		CmnMfgSrvFct_DecomposeFloat(CurrMeasMotCurrOffsLoAvrgA_Uls_T_f32, &DataBuf_Uls_T_u08[16U]);
		CmnMfgSrvFct_DecomposeFloat(CurrMeasMotCurrOffsLoAvrgB_Uls_T_f32, &DataBuf_Uls_T_u08[20U]);
		CmnMfgSrvFct_DecomposeFloat(CurrMeasMotCurrOffsLoAvrgC_Uls_T_f32, &DataBuf_Uls_T_u08[24U]);
	}
	else
	{
		RespCod_Cnt_T_enum = MFGSRVNRCCONDITIONSNOTCORRECT;
	}

	return RespCod_Cnt_T_enum;
}
#endif

/* ---------------------------------------------------------------------------------------------------------------------
 *        Name:  CmnMfgSrv_SrvFDF7Wr
 * Description:  0xFDF7: Single Inverter Current Offset Trim Write
 *          ID:  0xFDF7
 *        Type:  0x2E (Write)
 *    Sub-Func:  N/A
 *    Req. Len:  28 bytes
 *   Resp. Len:  0 bytes
 * ------------------------------------------------------------------------------------------------------------------ */
#if (CMNMFGSRV_FDF7ENA_CNT_LGC == CMNMFGSRV_ENAD_CNT_LGC)
FUNC(NegRespCodEnum, CmnMfgSrv_CODE) CmnMfgSrv_SrvFDF7Wr(VAR(uint8, CmnMfgSrv_VAR) DataBuf_Uls_T_u08[])
{
	VAR(NegRespCodEnum, AUTOMATIC) RespCod_Cnt_T_enum;
	VAR(Std_ReturnType, AUTOMATIC) RtnCod_Cnt_T_u08;
	VAR(float32, AUTOMATIC) CurrMeasEolOffsHiBrdgVltg_Uls_T_f32;
	VAR(float32, AUTOMATIC) CurrMeasMotCurrOffsDifA_Uls_T_f32;
	VAR(float32, AUTOMATIC) CurrMeasMotCurrOffsDifB_Uls_T_f32;
	VAR(float32, AUTOMATIC) CurrMeasMotCurrOffsDifC_Uls_T_f32;
	VAR(float32, AUTOMATIC) CurrMeasMotCurrOffsLoAvrgA_Uls_T_f32;
	VAR(float32, AUTOMATIC) CurrMeasMotCurrOffsLoAvrgB_Uls_T_f32;
	VAR(float32, AUTOMATIC) CurrMeasMotCurrOffsLoAvrgC_Uls_T_f32;
	VAR(uint8, AUTOMATIC) CurrMeasOffsWrReqSts_Cnt_T_u08 = 0U;

	CurrMeasEolOffsHiBrdgVltg_Uls_T_f32 = CmnMfgSrvFct_SynthesizeFloat(&DataBuf_Uls_T_u08[0U]);
	CurrMeasMotCurrOffsDifA_Uls_T_f32 = CmnMfgSrvFct_SynthesizeFloat(&DataBuf_Uls_T_u08[4U]);
	CurrMeasMotCurrOffsDifB_Uls_T_f32 = CmnMfgSrvFct_SynthesizeFloat(&DataBuf_Uls_T_u08[8U]);
	CurrMeasMotCurrOffsDifC_Uls_T_f32 = CmnMfgSrvFct_SynthesizeFloat(&DataBuf_Uls_T_u08[12U]);
	CurrMeasMotCurrOffsLoAvrgA_Uls_T_f32 = CmnMfgSrvFct_SynthesizeFloat(&DataBuf_Uls_T_u08[16U]);
	CurrMeasMotCurrOffsLoAvrgB_Uls_T_f32 = CmnMfgSrvFct_SynthesizeFloat(&DataBuf_Uls_T_u08[20U]);
	CurrMeasMotCurrOffsLoAvrgC_Uls_T_f32 = CmnMfgSrvFct_SynthesizeFloat(&DataBuf_Uls_T_u08[24U]);

	RtnCod_Cnt_T_u08 = Rte_Call_CurrMeasOffsWrReqSngIvtr_Oper(
			CurrMeasEolOffsHiBrdgVltg_Uls_T_f32,
			CurrMeasMotCurrOffsDifA_Uls_T_f32,
			CurrMeasMotCurrOffsDifB_Uls_T_f32,
			CurrMeasMotCurrOffsDifC_Uls_T_f32,
			CurrMeasMotCurrOffsLoAvrgA_Uls_T_f32,
			CurrMeasMotCurrOffsLoAvrgB_Uls_T_f32,
			CurrMeasMotCurrOffsLoAvrgC_Uls_T_f32,
			&CurrMeasOffsWrReqSts_Cnt_T_u08
	);

	if (RtnCod_Cnt_T_u08 != E_OK)
	{
		RespCod_Cnt_T_enum = MFGSRVNRCCONDITIONSNOTCORRECT;
	}
	else if (CurrMeasOffsWrReqSts_Cnt_T_u08 != 0U)
	{
		RespCod_Cnt_T_enum = MFGSRVNRCREQUESTOUTOFRANGE;
	}
	else
	{
		RespCod_Cnt_T_enum = MFGSRVNRCPOSRSP;
	}

	return RespCod_Cnt_T_enum;
}
#endif



/* End of File: SrvFDF7.c */
