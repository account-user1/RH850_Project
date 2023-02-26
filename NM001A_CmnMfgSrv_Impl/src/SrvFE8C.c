/***********************************************************************************************************************
* Copyright 2015 Nexteer
* Nexteer Confidential
*
* Module File Name: SrvFE8C.c
* Module Description: System Friction Learning Data Read/Write Service processing
* Project           : Common Manufacturing Services
* Author            : Jared Julien
************************************************************************************************************************
* Version Control:
* %version:         1 %
* %derived_by:      kzdyfh %
* ---------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author    Change Description                                                           SCR #
* --------  -------  --------  ---------------------------------------------------------------------------  ----------
* 12/17/16  1        JWJ       Initial file creation                                                        EA4#8626
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
 *        Name:  CmnMfgSrv_SrvFE8CRd
 * Description:  0xFE8C: System Friction Data Read
 *          ID:  0xFE8C
 *        Type:  0x22 (Read)
 *    Sub-Func:  N/A
 *    Req. Len:  0 bytes
 *   Resp. Len:  212 bytes
 * ------------------------------------------------------------------------------------------------------------------ */
#if (CMNMFGSRV_FE8CENA_CNT_LGC == CMNMFGSRV_ENAD_CNT_LGC)
FUNC(NegRespCodEnum, CmnMfgSrv_CODE) CmnMfgSrv_SrvFE8CRd(VAR(uint8, CmnMfgSrv_VAR) DataBuf_Uls_T_u08[])
{
	VAR(NegRespCodEnum, AUTOMATIC) RespCod_Cnt_T_enum = MFGSRVNRCPOSRSP;
	VAR(float32, AUTOMATIC) FricOffs_HwNwtMtr_T_f32;
	VAR(float32, AUTOMATIC) BasLineFric_HwNwtMtr_T_f32[4];
	VAR(float32, AUTOMATIC) VehLrndFric_HwNwtMtr_T_f32[4];
	VAR(float32, AUTOMATIC) Hys_HwNwtMtr_T_f32[32];
	VAR(uint16, AUTOMATIC) RngCntr_Cnt_T_f32[24];
	VAR(uint8, AUTOMATIC) Idx_Cnt_T_u08;

	if (Rte_Call_GetFricData_Oper(
			&FricOffs_HwNwtMtr_T_f32,
			(float32 *)BasLineFric_HwNwtMtr_T_f32,
			(float32 *)VehLrndFric_HwNwtMtr_T_f32,
			(float32 *)Hys_HwNwtMtr_T_f32,
			(uint16 *)RngCntr_Cnt_T_f32) == E_OK)
	{
		CmnMfgSrvFct_DecomposeFloat(FricOffs_HwNwtMtr_T_f32, &DataBuf_Uls_T_u08[0]);
		for (Idx_Cnt_T_u08 = 0U; Idx_Cnt_T_u08 < 4U; Idx_Cnt_T_u08 += 1U)
		{
			CmnMfgSrvFct_DecomposeFloat(BasLineFric_HwNwtMtr_T_f32[Idx_Cnt_T_u08], &DataBuf_Uls_T_u08[(Idx_Cnt_T_u08 * 4U) + 4U]);
			CmnMfgSrvFct_DecomposeFloat(VehLrndFric_HwNwtMtr_T_f32[Idx_Cnt_T_u08], &DataBuf_Uls_T_u08[(Idx_Cnt_T_u08 * 4U) + 20U]);
		}
		for (Idx_Cnt_T_u08 = 0U; Idx_Cnt_T_u08 < 32U; Idx_Cnt_T_u08 += 1U)
		{
			CmnMfgSrvFct_DecomposeFloat(Hys_HwNwtMtr_T_f32[Idx_Cnt_T_u08], &DataBuf_Uls_T_u08[(Idx_Cnt_T_u08 * 4U) + 36U]);
		}
		for (Idx_Cnt_T_u08 = 0U; Idx_Cnt_T_u08 < 24U; Idx_Cnt_T_u08 += 1U)
		{
			CmnMfgSrvFct_Decompose16(RngCntr_Cnt_T_f32[Idx_Cnt_T_u08], &DataBuf_Uls_T_u08[(Idx_Cnt_T_u08 * 2U) + 164U]);
		}
	}
	else
	{
		RespCod_Cnt_T_enum = MFGSRVNRCCONDITIONSNOTCORRECT;
	}

	return RespCod_Cnt_T_enum;
}
#endif

/* ---------------------------------------------------------------------------------------------------------------------
 *        Name:  CmnMfgSrv_SrvFE8CWr
 * Description:  0xFE8C: System Friction Data Write
 *          ID:  0xFE8C
 *        Type:  0x2E (Write)
 *    Sub-Func:  N/A
 *    Req. Len:  212 bytes
 *   Resp. Len:  0 bytes
 * ------------------------------------------------------------------------------------------------------------------ */
#if (CMNMFGSRV_FE8CENA_CNT_LGC == CMNMFGSRV_ENAD_CNT_LGC)
FUNC(NegRespCodEnum, CmnMfgSrv_CODE) CmnMfgSrv_SrvFE8CWr(VAR(uint8, CmnMfgSrv_VAR) DataBuf_Uls_T_u08[])
{
	VAR(NegRespCodEnum, AUTOMATIC) RespCod_Cnt_T_enum = MFGSRVNRCPOSRSP;
	VAR(float32, AUTOMATIC) FricOffs_HwNwtMtr_T_f32;
	VAR(float32, AUTOMATIC) BasLineFric_HwNwtMtr_T_f32[4];
	VAR(float32, AUTOMATIC) VehLrndFric_HwNwtMtr_T_f32[4];
	VAR(float32, AUTOMATIC) Hys_HwNwtMtr_T_f32[32];
	VAR(uint16, AUTOMATIC) RngCntr_Cnt_T_f32[24];
	VAR(uint8, AUTOMATIC) Idx_Cnt_T_u08;

	FricOffs_HwNwtMtr_T_f32 = CmnMfgSrvFct_SynthesizeFloat(&DataBuf_Uls_T_u08[0]);
	for (Idx_Cnt_T_u08 = 0U; Idx_Cnt_T_u08 < 4U; Idx_Cnt_T_u08 += 1U)
	{
		BasLineFric_HwNwtMtr_T_f32[Idx_Cnt_T_u08] = CmnMfgSrvFct_SynthesizeFloat(&DataBuf_Uls_T_u08[(Idx_Cnt_T_u08 * 4U) + 4U]);
		VehLrndFric_HwNwtMtr_T_f32[Idx_Cnt_T_u08] = CmnMfgSrvFct_SynthesizeFloat(&DataBuf_Uls_T_u08[(Idx_Cnt_T_u08 * 4U) + 20U]);
	}
	for (Idx_Cnt_T_u08 = 0U; Idx_Cnt_T_u08 < 32U; Idx_Cnt_T_u08 += 1U)
	{
		Hys_HwNwtMtr_T_f32[Idx_Cnt_T_u08] = CmnMfgSrvFct_SynthesizeFloat(&DataBuf_Uls_T_u08[(Idx_Cnt_T_u08 * 4U) + 36U]);
	}
	for (Idx_Cnt_T_u08 = 0U; Idx_Cnt_T_u08 < 24U; Idx_Cnt_T_u08 += 1U)
	{
		RngCntr_Cnt_T_f32[Idx_Cnt_T_u08] = CmnMfgSrvFct_Synthesize16(&DataBuf_Uls_T_u08[(Idx_Cnt_T_u08 * 2U) + 164U]);
	}

	if (Rte_Call_SetFricData_Oper(
			FricOffs_HwNwtMtr_T_f32,
			(float32 *)BasLineFric_HwNwtMtr_T_f32,
			(float32 *)VehLrndFric_HwNwtMtr_T_f32,
			(float32 *)Hys_HwNwtMtr_T_f32,
			(uint16 *)RngCntr_Cnt_T_f32) != E_OK)
	{
		RespCod_Cnt_T_enum = MFGSRVNRCCONDITIONSNOTCORRECT;
	}

	return RespCod_Cnt_T_enum;
}
#endif



/* End of File: SrvFE8C.c */
