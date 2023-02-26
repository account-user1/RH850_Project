/***********************************************************************************************************************
* Copyright 2015 Nexteer
* Nexteer Confidential
*
* Module File Name: SrvFDF5.c
* Module Description: 0xFDF5 - Current Offset Read/Write Trim
* Project           : Common Manufacturing Services
* Author            : Jared Julien
************************************************************************************************************************
* Version Control:
* %version:         4 %
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
 *        Name:  CmnMfgSrv_SrvFDF5Rd
 * Description:  0xFDF5: Dual Inverter Current Offset Trim Read
 *          ID:  0xFDF5
 *        Type:  0x22 (Read)
 *    Sub-Func:  N/A
 *    Req. Len:  0 bytes
 *   Resp. Len:  52 bytes
 * ------------------------------------------------------------------------------------------------------------------ */
#if (CMNMFGSRV_FDF5ENA_CNT_LGC == CMNMFGSRV_ENAD_CNT_LGC)
FUNC(NegRespCodEnum, CmnMfgSrv_CODE) CmnMfgSrv_SrvFDF5Rd(VAR(uint8, CmnMfgSrv_VAR) DataBuf_Uls_T_u08[])
{
	VAR(NegRespCodEnum, AUTOMATIC) RespCod_Cnt_T_enum = MFGSRVNRCPOSRSP;
	VAR(float32, AUTOMATIC) CurrMeasEolOffsHiBrdgVltg_Uls_T_f32;
	VAR(float32, AUTOMATIC) CurrMeasMotCurrOffsDifA_Uls_T_f32;
	VAR(float32, AUTOMATIC) CurrMeasMotCurrOffsDifB_Uls_T_f32;
	VAR(float32, AUTOMATIC) CurrMeasMotCurrOffsDifC_Uls_T_f32;
	VAR(float32, AUTOMATIC) CurrMeasMotCurrOffsDifD_Uls_T_f32;
	VAR(float32, AUTOMATIC) CurrMeasMotCurrOffsDifE_Uls_T_f32;
	VAR(float32, AUTOMATIC) CurrMeasMotCurrOffsDifF_Uls_T_f32;
	VAR(float32, AUTOMATIC) CurrMeasMotCurrOffsLoAvrgA_Uls_T_f32;
	VAR(float32, AUTOMATIC) CurrMeasMotCurrOffsLoAvrgB_Uls_T_f32;
	VAR(float32, AUTOMATIC) CurrMeasMotCurrOffsLoAvrgC_Uls_T_f32;
	VAR(float32, AUTOMATIC) CurrMeasMotCurrOffsLoAvrgD_Uls_T_f32;
	VAR(float32, AUTOMATIC) CurrMeasMotCurrOffsLoAvrgE_Uls_T_f32;
	VAR(float32, AUTOMATIC) CurrMeasMotCurrOffsLoAvrgF_Uls_T_f32;

	(void)Rte_Call_CurrMeasOffsReadReq_Oper(
			&CurrMeasEolOffsHiBrdgVltg_Uls_T_f32,
			&CurrMeasMotCurrOffsDifA_Uls_T_f32,
			&CurrMeasMotCurrOffsDifB_Uls_T_f32,
			&CurrMeasMotCurrOffsDifC_Uls_T_f32,
			&CurrMeasMotCurrOffsDifD_Uls_T_f32,
			&CurrMeasMotCurrOffsDifE_Uls_T_f32,
			&CurrMeasMotCurrOffsDifF_Uls_T_f32,
			&CurrMeasMotCurrOffsLoAvrgA_Uls_T_f32,
			&CurrMeasMotCurrOffsLoAvrgB_Uls_T_f32,
			&CurrMeasMotCurrOffsLoAvrgC_Uls_T_f32,
			&CurrMeasMotCurrOffsLoAvrgD_Uls_T_f32,
			&CurrMeasMotCurrOffsLoAvrgE_Uls_T_f32,
			&CurrMeasMotCurrOffsLoAvrgF_Uls_T_f32
	);

	CmnMfgSrvFct_DecomposeFloat(CurrMeasEolOffsHiBrdgVltg_Uls_T_f32, &DataBuf_Uls_T_u08[0U]);
	CmnMfgSrvFct_DecomposeFloat(CurrMeasMotCurrOffsDifA_Uls_T_f32, &DataBuf_Uls_T_u08[4U]);
	CmnMfgSrvFct_DecomposeFloat(CurrMeasMotCurrOffsDifB_Uls_T_f32, &DataBuf_Uls_T_u08[8U]);
	CmnMfgSrvFct_DecomposeFloat(CurrMeasMotCurrOffsDifC_Uls_T_f32, &DataBuf_Uls_T_u08[12U]);
	CmnMfgSrvFct_DecomposeFloat(CurrMeasMotCurrOffsDifD_Uls_T_f32, &DataBuf_Uls_T_u08[16U]);
	CmnMfgSrvFct_DecomposeFloat(CurrMeasMotCurrOffsDifE_Uls_T_f32, &DataBuf_Uls_T_u08[20U]);
	CmnMfgSrvFct_DecomposeFloat(CurrMeasMotCurrOffsDifF_Uls_T_f32, &DataBuf_Uls_T_u08[24U]);
	CmnMfgSrvFct_DecomposeFloat(CurrMeasMotCurrOffsLoAvrgA_Uls_T_f32, &DataBuf_Uls_T_u08[28U]);
	CmnMfgSrvFct_DecomposeFloat(CurrMeasMotCurrOffsLoAvrgB_Uls_T_f32, &DataBuf_Uls_T_u08[32U]);
	CmnMfgSrvFct_DecomposeFloat(CurrMeasMotCurrOffsLoAvrgC_Uls_T_f32, &DataBuf_Uls_T_u08[36U]);
	CmnMfgSrvFct_DecomposeFloat(CurrMeasMotCurrOffsLoAvrgD_Uls_T_f32, &DataBuf_Uls_T_u08[40U]);
	CmnMfgSrvFct_DecomposeFloat(CurrMeasMotCurrOffsLoAvrgE_Uls_T_f32, &DataBuf_Uls_T_u08[44U]);
	CmnMfgSrvFct_DecomposeFloat(CurrMeasMotCurrOffsLoAvrgF_Uls_T_f32, &DataBuf_Uls_T_u08[48U]);

	return RespCod_Cnt_T_enum;
}
#endif


/* ---------------------------------------------------------------------------------------------------------------------
 *        Name:  CmnMfgSrv_SrvFDF5Wr
 * Description:  0xFDF5: Dual Inverter Current Offset Trim Write
 *          ID:  0xFDF5
 *        Type:  0x2E (Write)
 *    Sub-Func:  N/A
 *    Req. Len:  52 bytes
 *   Resp. Len:  0 bytes
 * ------------------------------------------------------------------------------------------------------------------ */
#if (CMNMFGSRV_FDF5ENA_CNT_LGC == CMNMFGSRV_ENAD_CNT_LGC)
FUNC(NegRespCodEnum, CmnMfgSrv_CODE) CmnMfgSrv_SrvFDF5Wr(VAR(uint8, CmnMfgSrv_VAR) DataBuf_Uls_T_u08[])
{
	VAR(NegRespCodEnum, AUTOMATIC) RespCod_Cnt_T_enum = MFGSRVNRCPOSRSP;
	VAR(float32, AUTOMATIC) CurrMeasEolOffsHiBrdgVltg_Uls_T_f32;
	VAR(float32, AUTOMATIC) CurrMeasMotCurrOffsDifA_Uls_T_f32;
	VAR(float32, AUTOMATIC) CurrMeasMotCurrOffsDifB_Uls_T_f32;
	VAR(float32, AUTOMATIC) CurrMeasMotCurrOffsDifC_Uls_T_f32;
	VAR(float32, AUTOMATIC) CurrMeasMotCurrOffsDifD_Uls_T_f32;
	VAR(float32, AUTOMATIC) CurrMeasMotCurrOffsDifE_Uls_T_f32;
	VAR(float32, AUTOMATIC) CurrMeasMotCurrOffsDifF_Uls_T_f32;
	VAR(float32, AUTOMATIC) CurrMeasMotCurrOffsLoAvrgA_Uls_T_f32;
	VAR(float32, AUTOMATIC) CurrMeasMotCurrOffsLoAvrgB_Uls_T_f32;
	VAR(float32, AUTOMATIC) CurrMeasMotCurrOffsLoAvrgC_Uls_T_f32;
	VAR(float32, AUTOMATIC) CurrMeasMotCurrOffsLoAvrgD_Uls_T_f32;
	VAR(float32, AUTOMATIC) CurrMeasMotCurrOffsLoAvrgE_Uls_T_f32;
	VAR(float32, AUTOMATIC) CurrMeasMotCurrOffsLoAvrgF_Uls_T_f32;
	VAR(uint8, AUTOMATIC) CurrMeasOffsWrReqSts_Cnt_T_u08 = 0U;

	CurrMeasEolOffsHiBrdgVltg_Uls_T_f32 = CmnMfgSrvFct_SynthesizeFloat(&DataBuf_Uls_T_u08[0U]);
	CurrMeasMotCurrOffsDifA_Uls_T_f32 = CmnMfgSrvFct_SynthesizeFloat(&DataBuf_Uls_T_u08[4U]);
	CurrMeasMotCurrOffsDifB_Uls_T_f32 = CmnMfgSrvFct_SynthesizeFloat(&DataBuf_Uls_T_u08[8U]);
	CurrMeasMotCurrOffsDifC_Uls_T_f32 = CmnMfgSrvFct_SynthesizeFloat(&DataBuf_Uls_T_u08[12U]);
	CurrMeasMotCurrOffsDifD_Uls_T_f32 = CmnMfgSrvFct_SynthesizeFloat(&DataBuf_Uls_T_u08[16U]);
	CurrMeasMotCurrOffsDifE_Uls_T_f32 = CmnMfgSrvFct_SynthesizeFloat(&DataBuf_Uls_T_u08[20U]);
	CurrMeasMotCurrOffsDifF_Uls_T_f32 = CmnMfgSrvFct_SynthesizeFloat(&DataBuf_Uls_T_u08[24U]);
	CurrMeasMotCurrOffsLoAvrgA_Uls_T_f32 = CmnMfgSrvFct_SynthesizeFloat(&DataBuf_Uls_T_u08[28U]);
	CurrMeasMotCurrOffsLoAvrgB_Uls_T_f32 = CmnMfgSrvFct_SynthesizeFloat(&DataBuf_Uls_T_u08[32U]);
	CurrMeasMotCurrOffsLoAvrgC_Uls_T_f32 = CmnMfgSrvFct_SynthesizeFloat(&DataBuf_Uls_T_u08[36U]);
	CurrMeasMotCurrOffsLoAvrgD_Uls_T_f32 = CmnMfgSrvFct_SynthesizeFloat(&DataBuf_Uls_T_u08[40U]);
	CurrMeasMotCurrOffsLoAvrgE_Uls_T_f32 = CmnMfgSrvFct_SynthesizeFloat(&DataBuf_Uls_T_u08[44U]);
	CurrMeasMotCurrOffsLoAvrgF_Uls_T_f32 = CmnMfgSrvFct_SynthesizeFloat(&DataBuf_Uls_T_u08[48U]);

	(void)Rte_Call_CurrMeasOffsWrReq_Oper(
			CurrMeasEolOffsHiBrdgVltg_Uls_T_f32,
			CurrMeasMotCurrOffsDifA_Uls_T_f32,
			CurrMeasMotCurrOffsDifB_Uls_T_f32,
			CurrMeasMotCurrOffsDifC_Uls_T_f32,
			CurrMeasMotCurrOffsDifD_Uls_T_f32,
			CurrMeasMotCurrOffsDifE_Uls_T_f32,
			CurrMeasMotCurrOffsDifF_Uls_T_f32,
			CurrMeasMotCurrOffsLoAvrgA_Uls_T_f32,
			CurrMeasMotCurrOffsLoAvrgB_Uls_T_f32,
			CurrMeasMotCurrOffsLoAvrgC_Uls_T_f32,
			CurrMeasMotCurrOffsLoAvrgD_Uls_T_f32,
			CurrMeasMotCurrOffsLoAvrgE_Uls_T_f32,
			CurrMeasMotCurrOffsLoAvrgF_Uls_T_f32,
			&CurrMeasOffsWrReqSts_Cnt_T_u08
	);

	if (CurrMeasOffsWrReqSts_Cnt_T_u08 != 0U)
	{
		RespCod_Cnt_T_enum = MFGSRVNRCREQUESTOUTOFRANGE;
	}

	return RespCod_Cnt_T_enum;
}
#endif


/* End of File: SrvFDF5.c */
