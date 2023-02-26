/***********************************************************************************************************************
* Copyright 2015 Nexteer
* Nexteer Confidential
*
* Module File Name: SrvFEA9.c
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
* 07/13/16  1        JWJ       Initial file creation                                                        EA4#6219
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
 *        Name:  CmnMfgSrv_SrvFEA9Rd
 * Description:  0xFEA9: Learned Max Handwheel Angle CW and CCW Read
 *          ID:  0xFEA9
 *        Type:  0x22 (Read)
 *    Sub-Func:  N/A
 *    Req. Len:  0 bytes
 *   Resp. Len:  8 bytes
 * ------------------------------------------------------------------------------------------------------------------ */
#if (CMNMFGSRV_FEA9ENA_CNT_LGC == CMNMFGSRV_ENAD_CNT_LGC)
FUNC(NegRespCodEnum, CmnMfgSrv_CODE) CmnMfgSrv_SrvFEA9Rd(VAR(uint8, CmnMfgSrv_VAR) DataBuf_Uls_T_u08[])
{
	VAR(NegRespCodEnum, AUTOMATIC) RespCod_Cnt_T_enum = MFGSRVNRCPOSRSP;
	VAR(float32, AUTOMATIC) HwAgCcwMax_HwDeg_T_f32;
	VAR(float32, AUTOMATIC) HwAgCwMax_HwDeg_T_f32;

	if (E_OK == Rte_Call_RtnMaxHwAgCwAndCcw_Oper(&HwAgCcwMax_HwDeg_T_f32, &HwAgCwMax_HwDeg_T_f32))
	{
		CmnMfgSrvFct_DecomposeFloat(HwAgCcwMax_HwDeg_T_f32, &DataBuf_Uls_T_u08[0U]);
		CmnMfgSrvFct_DecomposeFloat(HwAgCwMax_HwDeg_T_f32, &DataBuf_Uls_T_u08[4U]);
	}
	else
	{
		RespCod_Cnt_T_enum = MFGSRVNRCCONDITIONSNOTCORRECT;
	}

	return RespCod_Cnt_T_enum;
}
#endif



/* End of File: SrvFEA9.c */
