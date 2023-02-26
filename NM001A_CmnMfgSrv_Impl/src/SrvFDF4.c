/***********************************************************************************************************************
* Copyright 2015 Nexteer
* Nexteer Confidential
*
* Module File Name: SrvFDF4.c
* Module Description: 0xFDF4 - Current Gain Read/Write Trim
* Project           : Common Manufacturing Services
* Author            : Jared Julien
************************************************************************************************************************
* Version Control:
* %version:         3 %
* %derived_by:      kzdyfh %
* ---------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author    Change Description                                                           SCR #
* --------  -------  --------  ---------------------------------------------------------------------------  ----------
* 10/01/15  1        JWJ       Initial file creation                                                        EA4#1797
* 01/26/16  2        JWJ       Updates for newly generated function names                                   EA4#2518
* 05/03/16  3        JWJ       Added additional output parameter for write function for status              EA4#5582
* 11/17/17  4        JWJ       Updated description to reflect that these services are for dual inverter     EA4#17640
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
 *        Name:  CmnMfgSrv_SrvFDF4Rd
 * Description:  0xFDF4: Dual Inverter Current Gain Trim Read
 *          ID:  0xFDF4
 *        Type:  0x22 (Read)
 *    Sub-Func:  N/A
 *    Req. Len:  0 bytes
 *   Resp. Len:  24 bytes
 * ------------------------------------------------------------------------------------------------------------------ */
#if (CMNMFGSRV_FDF4ENA_CNT_LGC == CMNMFGSRV_ENAD_CNT_LGC)
FUNC(NegRespCodEnum, CmnMfgSrv_CODE) CmnMfgSrv_SrvFDF4Rd(VAR(uint8, CmnMfgSrv_VAR) DataBuf_Uls_T_u08[])
{
	VAR(NegRespCodEnum, AUTOMATIC) RespCod_Cnt_T_enum = MFGSRVNRCPOSRSP;
	VAR(float32, AUTOMATIC) CurrMeasMotCurrGainA_Uls_T_f32;
	VAR(float32, AUTOMATIC) CurrMeasMotCurrGainB_Uls_T_f32;
	VAR(float32, AUTOMATIC) CurrMeasMotCurrGainC_Uls_T_f32;
	VAR(float32, AUTOMATIC) CurrMeasMotCurrGainD_Uls_T_f32;
	VAR(float32, AUTOMATIC) CurrMeasMotCurrGainE_Uls_T_f32;
	VAR(float32, AUTOMATIC) CurrMeasMotCurrGainF_Uls_T_f32;

	(void)Rte_Call_CurrMeasGainReadReq_Oper(
			&CurrMeasMotCurrGainA_Uls_T_f32,
			&CurrMeasMotCurrGainB_Uls_T_f32,
			&CurrMeasMotCurrGainC_Uls_T_f32,
			&CurrMeasMotCurrGainD_Uls_T_f32,
			&CurrMeasMotCurrGainE_Uls_T_f32,
			&CurrMeasMotCurrGainF_Uls_T_f32
	);

	CmnMfgSrvFct_DecomposeFloat(CurrMeasMotCurrGainA_Uls_T_f32, &DataBuf_Uls_T_u08[0U]);
	CmnMfgSrvFct_DecomposeFloat(CurrMeasMotCurrGainB_Uls_T_f32, &DataBuf_Uls_T_u08[4U]);
	CmnMfgSrvFct_DecomposeFloat(CurrMeasMotCurrGainC_Uls_T_f32, &DataBuf_Uls_T_u08[8U]);
	CmnMfgSrvFct_DecomposeFloat(CurrMeasMotCurrGainD_Uls_T_f32, &DataBuf_Uls_T_u08[12U]);
	CmnMfgSrvFct_DecomposeFloat(CurrMeasMotCurrGainE_Uls_T_f32, &DataBuf_Uls_T_u08[16U]);
	CmnMfgSrvFct_DecomposeFloat(CurrMeasMotCurrGainF_Uls_T_f32, &DataBuf_Uls_T_u08[20U]);

	return RespCod_Cnt_T_enum;
}
#endif


/* ---------------------------------------------------------------------------------------------------------------------
 *        Name:  CmnMfgSrv_SrvFDF4Wr
 * Description:  0xFDF4: Dual Inverter Current Gain Trim Write
 *          ID:  0xFDF4
 *        Type:  0x2E (Write)
 *    Sub-Func:  N/A
 *    Req. Len:  24 bytes
 *   Resp. Len:  0 bytes
 * ------------------------------------------------------------------------------------------------------------------ */
#if (CMNMFGSRV_FDF4ENA_CNT_LGC == CMNMFGSRV_ENAD_CNT_LGC)
FUNC(NegRespCodEnum, CmnMfgSrv_CODE) CmnMfgSrv_SrvFDF4Wr(VAR(uint8, CmnMfgSrv_VAR) DataBuf_Uls_T_u08[])
{
	VAR(NegRespCodEnum, AUTOMATIC) RespCod_Cnt_T_enum = MFGSRVNRCPOSRSP;

	VAR(float32, AUTOMATIC) CurrMeasMotCurrGainA_Uls_T_f32;
	VAR(float32, AUTOMATIC) CurrMeasMotCurrGainB_Uls_T_f32;
	VAR(float32, AUTOMATIC) CurrMeasMotCurrGainC_Uls_T_f32;
	VAR(float32, AUTOMATIC) CurrMeasMotCurrGainD_Uls_T_f32;
	VAR(float32, AUTOMATIC) CurrMeasMotCurrGainE_Uls_T_f32;
	VAR(float32, AUTOMATIC) CurrMeasMotCurrGainF_Uls_T_f32;
	VAR(uint8, AUTOMATIC) CurrMeasGainWrReqSts_Cnt_T_u08 = 0U;

	CurrMeasMotCurrGainA_Uls_T_f32 = CmnMfgSrvFct_SynthesizeFloat(&DataBuf_Uls_T_u08[0U]);
	CurrMeasMotCurrGainB_Uls_T_f32 = CmnMfgSrvFct_SynthesizeFloat(&DataBuf_Uls_T_u08[4U]);
	CurrMeasMotCurrGainC_Uls_T_f32 = CmnMfgSrvFct_SynthesizeFloat(&DataBuf_Uls_T_u08[8U]);
	CurrMeasMotCurrGainD_Uls_T_f32 = CmnMfgSrvFct_SynthesizeFloat(&DataBuf_Uls_T_u08[12U]);
	CurrMeasMotCurrGainE_Uls_T_f32 = CmnMfgSrvFct_SynthesizeFloat(&DataBuf_Uls_T_u08[16U]);
	CurrMeasMotCurrGainF_Uls_T_f32 = CmnMfgSrvFct_SynthesizeFloat(&DataBuf_Uls_T_u08[20U]);

	(void)Rte_Call_CurrMeasGainWrReq_Oper(
			CurrMeasMotCurrGainA_Uls_T_f32,
			CurrMeasMotCurrGainB_Uls_T_f32,
			CurrMeasMotCurrGainC_Uls_T_f32,
			CurrMeasMotCurrGainD_Uls_T_f32,
			CurrMeasMotCurrGainE_Uls_T_f32,
			CurrMeasMotCurrGainF_Uls_T_f32,
			&CurrMeasGainWrReqSts_Cnt_T_u08
	);

	if (CurrMeasGainWrReqSts_Cnt_T_u08 != 0U)
	{
		RespCod_Cnt_T_enum = MFGSRVNRCREQUESTOUTOFRANGE;
	}

	return RespCod_Cnt_T_enum;
}
#endif


/* End of File: SrvFDF4.c */
