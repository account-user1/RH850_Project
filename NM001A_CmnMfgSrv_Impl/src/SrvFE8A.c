/***********************************************************************************************************************
* Copyright 2015 Nexteer
* Nexteer Confidential
*
* Module File Name: SrvFE8A.c
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
* 05/02/16  1        JWJ       Initial file creation                                                        EA4#5582
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
 *        Name:  CmnMfgSrv_SrvFE8ARd
 * Description:  0xFE8A: System Friction Learning Data Read
 *          ID:  0xFE8A
 *        Type:  0x22 (Read)
 *    Sub-Func:  N/A
 *    Req. Len:  0 bytes
 *   Resp. Len:  7 bytes
 * ------------------------------------------------------------------------------------------------------------------ */
#if (CMNMFGSRV_FE8AENA_CNT_LGC == CMNMFGSRV_ENAD_CNT_LGC)
FUNC(NegRespCodEnum, CmnMfgSrv_CODE) CmnMfgSrv_SrvFE8ARd(VAR(uint8, CmnMfgSrv_VAR) DataBuf_Uls_T_u08[])
{
	VAR(NegRespCodEnum, AUTOMATIC) RespCod_Cnt_T_enum = MFGSRVNRCPOSRSP;
	VAR(boolean, AUTOMATIC) LrngEna_Cnt_T_logl;
	VAR(boolean, AUTOMATIC) OffsOutpEna_Cnt_T_logl;
	VAR(SysFricLrngOperMod1, AUTOMATIC) OperMod_Cnt_T_enum;
	VAR(float32, AUTOMATIC) EolFric_HwNwtMtr_T_f32;

	(void)Rte_Call_GetFricLrngData_Oper(
			&LrngEna_Cnt_T_logl,
			&OffsOutpEna_Cnt_T_logl,
			&OperMod_Cnt_T_enum,
			&EolFric_HwNwtMtr_T_f32
	);

	DataBuf_Uls_T_u08[0U] = (uint8)LrngEna_Cnt_T_logl;
	DataBuf_Uls_T_u08[1U] = (uint8)OffsOutpEna_Cnt_T_logl;
	DataBuf_Uls_T_u08[2U] = (uint8)OperMod_Cnt_T_enum;
	CmnMfgSrvFct_DecomposeFloat(EolFric_HwNwtMtr_T_f32, &DataBuf_Uls_T_u08[3U]);

	return RespCod_Cnt_T_enum;
}
#endif

/* ---------------------------------------------------------------------------------------------------------------------
 *        Name:  CmnMfgSrv_SrvFE8AWr
 * Description:  0xFE8A: System Friction Learning Data Write
 *          ID:  0xFE8A
 *        Type:  0x2E (Write)
 *    Sub-Func:  N/A
 *    Req. Len:  7 bytes
 *   Resp. Len:  0 bytes
 * ------------------------------------------------------------------------------------------------------------------ */
#if (CMNMFGSRV_FE8AENA_CNT_LGC == CMNMFGSRV_ENAD_CNT_LGC)
FUNC(NegRespCodEnum, CmnMfgSrv_CODE) CmnMfgSrv_SrvFE8AWr(VAR(uint8, CmnMfgSrv_VAR) DataBuf_Uls_T_u08[])
{
	VAR(NegRespCodEnum, AUTOMATIC) RespCod_Cnt_T_enum = MFGSRVNRCPOSRSP;
	VAR(uint8, AUTOMATIC) LrngEna_Cnt_T_u08;
	VAR(uint8, AUTOMATIC) OffsOutpEna_Cnt_T_u08;
	VAR(uint8, AUTOMATIC) OperMod_Cnt_T_u08;
	VAR(boolean, AUTOMATIC) LrngEna_Cnt_T_logl;
	VAR(boolean, AUTOMATIC) OffsOutpEna_Cnt_T_logl;
	VAR(SysFricLrngOperMod1, AUTOMATIC) OperMod_Cnt_T_enum;
	VAR(float32, AUTOMATIC) EolFric_HwNwtMtr_T_f32;

	LrngEna_Cnt_T_u08 = DataBuf_Uls_T_u08[0U];
	OffsOutpEna_Cnt_T_u08 = DataBuf_Uls_T_u08[1U];
	OperMod_Cnt_T_u08 = DataBuf_Uls_T_u08[2U];

	if ((LrngEna_Cnt_T_u08 > 1U) || (OffsOutpEna_Cnt_T_u08 > 1U) || (OperMod_Cnt_T_u08 > 4U))
	{
		RespCod_Cnt_T_enum = MFGSRVNRCREQUESTOUTOFRANGE;
	}
	else
	{
		LrngEna_Cnt_T_logl = (boolean)LrngEna_Cnt_T_u08;
		OffsOutpEna_Cnt_T_logl = (boolean)OffsOutpEna_Cnt_T_u08;
		OperMod_Cnt_T_enum = (SysFricLrngOperMod1)OperMod_Cnt_T_u08;
		EolFric_HwNwtMtr_T_f32 = CmnMfgSrvFct_SynthesizeFloat(&DataBuf_Uls_T_u08[3U]);

		(void)Rte_Call_SetFricLrngData_Oper(
				LrngEna_Cnt_T_logl,
				OffsOutpEna_Cnt_T_logl,
				OperMod_Cnt_T_enum,
				EolFric_HwNwtMtr_T_f32
		);
	}

	return RespCod_Cnt_T_enum;
}
#endif



/* End of File: SrvFE8A.c */
