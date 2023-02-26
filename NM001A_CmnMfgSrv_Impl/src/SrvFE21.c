/***********************************************************************************************************************
* Copyright 2015 Nexteer
* Nexteer Confidential
*
* Module File Name: SrvFE21.c
* Module Description: Service processing
* Project           : Common Manufacturing Services
* Author            : KZDYFH
************************************************************************************************************************
* Version Control:
* %version:         1 %
* %derived_by:      kzdyfh KZDYFH %
* ---------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author    Change Description                                                           SCR #
* --------  -------  --------  ---------------------------------------------------------------------------  ----------
* 02/24/16  1        KZDYFH    Initial file creation                                                        EA4#2585
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
 *        Name:  CmnMfgSrv_SrvFE21Rd
 * Description:  0xFE21: Motor Velocity Control Parameters Read
 *          ID:  0xFE21
 *        Type:  0x22 (Read)
 *    Sub-Func:  N/A
 *    Req. Len:  0 bytes
 *   Resp. Len:  28 bytes
 * ------------------------------------------------------------------------------------------------------------------ */
#if (CMNMFGSRV_FE21ENA_CNT_LGC == CMNMFGSRV_ENAD_CNT_LGC)
FUNC(NegRespCodEnum, CmnMfgSrv_CODE) CmnMfgSrv_SrvFE21Rd(VAR(uint8, CmnMfgSrv_VAR) DataBuf_Uls_T_u08[])
{
	VAR(NegRespCodEnum, AUTOMATIC) RespCod_Cnt_T_enum = MFGSRVNRCPOSRSP;
	VAR(float32, AUTOMATIC) PropGain_MotNwtMtrPerMotRadPerSec_T_f32;
	VAR(float32, AUTOMATIC) IntgtrGain_MotNwtMtrPerMotRad_T_f32;
	VAR(float32, AUTOMATIC) DerivtvGain_MotNwtMtrPerMotRadPerSecPerSec_T_f32;
	VAR(float32, AUTOMATIC) AntiWdupLim_MotNwtMtr_T_f32;
	VAR(float32, AUTOMATIC) AntiWdupGain_Uls_T_f32;
	VAR(float32, AUTOMATIC) DerivtvLpFilTiCon_Sec_T_f32;
	VAR(float32, AUTOMATIC) TqCmdLim_MotNwtMtr_T_f32;

	(void)Rte_Call_GetCtrlPrm_Oper(
			&PropGain_MotNwtMtrPerMotRadPerSec_T_f32,
			&IntgtrGain_MotNwtMtrPerMotRad_T_f32,
			&DerivtvGain_MotNwtMtrPerMotRadPerSecPerSec_T_f32,
			&AntiWdupLim_MotNwtMtr_T_f32,
			&AntiWdupGain_Uls_T_f32,
			&DerivtvLpFilTiCon_Sec_T_f32,
			&TqCmdLim_MotNwtMtr_T_f32
	);

	CmnMfgSrvFct_DecomposeFloat(PropGain_MotNwtMtrPerMotRadPerSec_T_f32, &DataBuf_Uls_T_u08[0U]);
	CmnMfgSrvFct_DecomposeFloat(IntgtrGain_MotNwtMtrPerMotRad_T_f32, &DataBuf_Uls_T_u08[4U]);
	CmnMfgSrvFct_DecomposeFloat(DerivtvGain_MotNwtMtrPerMotRadPerSecPerSec_T_f32, &DataBuf_Uls_T_u08[8U]);
	CmnMfgSrvFct_DecomposeFloat(AntiWdupLim_MotNwtMtr_T_f32, &DataBuf_Uls_T_u08[12U]);
	CmnMfgSrvFct_DecomposeFloat(AntiWdupGain_Uls_T_f32, &DataBuf_Uls_T_u08[16U]);
	CmnMfgSrvFct_DecomposeFloat(DerivtvLpFilTiCon_Sec_T_f32, &DataBuf_Uls_T_u08[20U]);
	CmnMfgSrvFct_DecomposeFloat(TqCmdLim_MotNwtMtr_T_f32, &DataBuf_Uls_T_u08[24U]);

	return RespCod_Cnt_T_enum;
}
#endif

/* ---------------------------------------------------------------------------------------------------------------------
 *        Name:  CmnMfgSrv_SrvFE21Wr
 * Description:  0xFE21: Motor Velocity Control Parameters Write
 *          ID:  0xFE21
 *        Type:  0x2E (Write)
 *    Sub-Func:  N/A
 *    Req. Len:  28 bytes
 *   Resp. Len:  0 bytes
 * ------------------------------------------------------------------------------------------------------------------ */
#if (CMNMFGSRV_FE21ENA_CNT_LGC == CMNMFGSRV_ENAD_CNT_LGC)
FUNC(NegRespCodEnum, CmnMfgSrv_CODE) CmnMfgSrv_SrvFE21Wr(VAR(uint8, CmnMfgSrv_VAR) DataBuf_Uls_T_u08[])
{
	VAR(NegRespCodEnum, AUTOMATIC) RespCod_Cnt_T_enum = MFGSRVNRCPOSRSP;
	VAR(float32, AUTOMATIC) PropGain_MotNwtMtrPerMotRadPerSec_T_f32;
	VAR(float32, AUTOMATIC) IntgtrGain_MotNwtMtrPerMotRad_T_f32;
	VAR(float32, AUTOMATIC) DerivtvGain_MotNwtMtrPerMotRadPerSecPerSec_T_f32;
	VAR(float32, AUTOMATIC) AntiWdupLim_MotNwtMtr_T_f32;
	VAR(float32, AUTOMATIC) AntiWdupGain_Uls_T_f32;
	VAR(float32, AUTOMATIC) DerivtvLpFilTiCon_Sec_T_f32;
	VAR(float32, AUTOMATIC) TqCmdLim_MotNwtMtr_T_f32;

	PropGain_MotNwtMtrPerMotRadPerSec_T_f32 = CmnMfgSrvFct_SynthesizeFloat(&DataBuf_Uls_T_u08[0U]);
	IntgtrGain_MotNwtMtrPerMotRad_T_f32 = CmnMfgSrvFct_SynthesizeFloat(&DataBuf_Uls_T_u08[4U]);
	DerivtvGain_MotNwtMtrPerMotRadPerSecPerSec_T_f32 = CmnMfgSrvFct_SynthesizeFloat(&DataBuf_Uls_T_u08[8U]);
	AntiWdupLim_MotNwtMtr_T_f32 = CmnMfgSrvFct_SynthesizeFloat(&DataBuf_Uls_T_u08[12U]);
	AntiWdupGain_Uls_T_f32 = CmnMfgSrvFct_SynthesizeFloat(&DataBuf_Uls_T_u08[16U]);
	DerivtvLpFilTiCon_Sec_T_f32 = CmnMfgSrvFct_SynthesizeFloat(&DataBuf_Uls_T_u08[20U]);
	TqCmdLim_MotNwtMtr_T_f32 = CmnMfgSrvFct_SynthesizeFloat(&DataBuf_Uls_T_u08[24U]);

	(void)Rte_Call_SetCtrlPrm_Oper(
			PropGain_MotNwtMtrPerMotRadPerSec_T_f32,
			IntgtrGain_MotNwtMtrPerMotRad_T_f32,
			DerivtvGain_MotNwtMtrPerMotRadPerSecPerSec_T_f32,
			AntiWdupLim_MotNwtMtr_T_f32,
			AntiWdupGain_Uls_T_f32,
			DerivtvLpFilTiCon_Sec_T_f32,
			TqCmdLim_MotNwtMtr_T_f32
	);

	return RespCod_Cnt_T_enum;
}
#endif



/* End of File: SrvFE21.c */
