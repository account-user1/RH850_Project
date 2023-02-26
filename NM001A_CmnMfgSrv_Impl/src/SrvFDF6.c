/***********************************************************************************************************************
* Copyright 2015 Nexteer
* Nexteer Confidential
*
* Module File Name: SrvFDF6.c
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
 *        Name:  CmnMfgSrv_SrvFDF6Rd
 * Description:  0xFDF6: Single Inverter Current Gain Trim Read
 *          ID:  0xFDF6
 *        Type:  0x22 (Read)
 *    Sub-Func:  N/A
 *    Req. Len:  0 bytes
 *   Resp. Len:  12 bytes
 * ------------------------------------------------------------------------------------------------------------------ */
#if (CMNMFGSRV_FDF6ENA_CNT_LGC == CMNMFGSRV_ENAD_CNT_LGC)
FUNC(NegRespCodEnum, CmnMfgSrv_CODE) CmnMfgSrv_SrvFDF6Rd(VAR(uint8, CmnMfgSrv_VAR) DataBuf_Uls_T_u08[])
{
	VAR(NegRespCodEnum, AUTOMATIC) RespCod_Cnt_T_enum = MFGSRVNRCPOSRSP;
	VAR(Std_ReturnType, AUTOMATIC) RtnCod_Cnt_T_u08;
	VAR(float32, AUTOMATIC) CurrMeasMotCurrGainA_Uls_T_f32;
	VAR(float32, AUTOMATIC) CurrMeasMotCurrGainB_Uls_T_f32;
	VAR(float32, AUTOMATIC) CurrMeasMotCurrGainC_Uls_T_f32;

	RtnCod_Cnt_T_u08 = Rte_Call_CurrMeasGainReadReqSngIvtr_Oper(
			&CurrMeasMotCurrGainA_Uls_T_f32,
			&CurrMeasMotCurrGainB_Uls_T_f32,
			&CurrMeasMotCurrGainC_Uls_T_f32
	);

	if (RtnCod_Cnt_T_u08 == E_OK)
	{
		CmnMfgSrvFct_DecomposeFloat(CurrMeasMotCurrGainA_Uls_T_f32, &DataBuf_Uls_T_u08[0U]);
		CmnMfgSrvFct_DecomposeFloat(CurrMeasMotCurrGainB_Uls_T_f32, &DataBuf_Uls_T_u08[4U]);
		CmnMfgSrvFct_DecomposeFloat(CurrMeasMotCurrGainC_Uls_T_f32, &DataBuf_Uls_T_u08[8U]);
	}
	else
	{
		RespCod_Cnt_T_enum = MFGSRVNRCCONDITIONSNOTCORRECT;
	}

	return RespCod_Cnt_T_enum;
}
#endif

/* ---------------------------------------------------------------------------------------------------------------------
 *        Name:  CmnMfgSrv_SrvFDF6Wr
 * Description:  0xFDF6: Single Inverter Current Gain Trim Write
 *          ID:  0xFDF6
 *        Type:  0x2E (Write)
 *    Sub-Func:  N/A
 *    Req. Len:  12 bytes
 *   Resp. Len:  0 bytes
 * ------------------------------------------------------------------------------------------------------------------ */
#if (CMNMFGSRV_FDF6ENA_CNT_LGC == CMNMFGSRV_ENAD_CNT_LGC)
FUNC(NegRespCodEnum, CmnMfgSrv_CODE) CmnMfgSrv_SrvFDF6Wr(VAR(uint8, CmnMfgSrv_VAR) DataBuf_Uls_T_u08[])
{
	VAR(NegRespCodEnum, AUTOMATIC) RespCod_Cnt_T_enum;
	VAR(Std_ReturnType, AUTOMATIC) RtnCod_Cnt_T_u08;
	VAR(float32, AUTOMATIC) CurrMeasMotCurrGainA_Uls_T_f32;
	VAR(float32, AUTOMATIC) CurrMeasMotCurrGainB_Uls_T_f32;
	VAR(float32, AUTOMATIC) CurrMeasMotCurrGainC_Uls_T_f32;
	VAR(uint8, AUTOMATIC) CurrMeasGainWrReqSts_Cnt_T_u08 = 0U;

	CurrMeasMotCurrGainA_Uls_T_f32 = CmnMfgSrvFct_SynthesizeFloat(&DataBuf_Uls_T_u08[0U]);
	CurrMeasMotCurrGainB_Uls_T_f32 = CmnMfgSrvFct_SynthesizeFloat(&DataBuf_Uls_T_u08[4U]);
	CurrMeasMotCurrGainC_Uls_T_f32 = CmnMfgSrvFct_SynthesizeFloat(&DataBuf_Uls_T_u08[8U]);

	RtnCod_Cnt_T_u08 = Rte_Call_CurrMeasGainWrReqSngIvtr_Oper(
			CurrMeasMotCurrGainA_Uls_T_f32,
			CurrMeasMotCurrGainB_Uls_T_f32,
			CurrMeasMotCurrGainC_Uls_T_f32,
			&CurrMeasGainWrReqSts_Cnt_T_u08
	);

	if (RtnCod_Cnt_T_u08 != E_OK)
	{
		RespCod_Cnt_T_enum = MFGSRVNRCCONDITIONSNOTCORRECT;
	}
	else if (CurrMeasGainWrReqSts_Cnt_T_u08 != 0U)
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



/* End of File: SrvFDF6.c */
