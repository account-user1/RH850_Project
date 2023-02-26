/***********************************************************************************************************************
* Copyright 2015 Nexteer
* Nexteer Confidential
*
* Module File Name: SrvFE81.c
* Module Description: 0xFE81 - Pull Compensation Parameters Read
* Project           : Common Manufacturing Services
* Author            : Jared Julien
************************************************************************************************************************
* Version Control:
* %version:         2 %
* %derived_by:      kzdyfh %
* ---------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author    Change Description                                                           SCR #
* --------  -------  --------  ---------------------------------------------------------------------------  ----------
* 10/21/15  1        JWJ       Initial file creation                                                        EA4#2174
* 01/26/16  2        JWJ       Updates for newly generated function names                                   EA4#2518
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
 *        Name:  CmnMfgSrv_SrvFE81Rd
 * Description:  0xFE81: Pull Compensation Parameters Read Read
 *          ID:  0xFE81
 *        Type:  0x22 (Read)
 *    Sub-Func:  N/A
 *    Req. Len:  0 bytes
 *   Resp. Len:  13 bytes
 * ------------------------------------------------------------------------------------------------------------------ */
#if (CMNMFGSRV_FE81ENA_CNT_LGC == CMNMFGSRV_ENAD_CNT_LGC)
FUNC(NegRespCodEnum, CmnMfgSrv_CODE) CmnMfgSrv_SrvFE81Rd(VAR(uint8, CmnMfgSrv_VAR) DataBuf_Uls_T_u08[])
{
	VAR(NegRespCodEnum, AUTOMATIC) RespCod_Cnt_T_enum = MFGSRVNRCPOSRSP;
	VAR(float32, AUTOMATIC) CmdTot_HwNwtMtr_T_f32;
	VAR(float32, AUTOMATIC) ShoTerm_HwNwtMtr_T_f32;
	VAR(float32, AUTOMATIC) LongTerm_HwNwtMtr_T_f32;
	VAR(boolean, AUTOMATIC) LrngEnad_Cnt_T_logl;

	(void)Rte_Call_GetPullCmpPrm_Oper(&CmdTot_HwNwtMtr_T_f32, &ShoTerm_HwNwtMtr_T_f32, &LongTerm_HwNwtMtr_T_f32, &LrngEnad_Cnt_T_logl);

	CmnMfgSrvFct_DecomposeFloat(CmdTot_HwNwtMtr_T_f32, &DataBuf_Uls_T_u08[0U]);
	CmnMfgSrvFct_DecomposeFloat(ShoTerm_HwNwtMtr_T_f32, &DataBuf_Uls_T_u08[4U]);
	CmnMfgSrvFct_DecomposeFloat(LongTerm_HwNwtMtr_T_f32, &DataBuf_Uls_T_u08[8U]);
	DataBuf_Uls_T_u08[12U] = LrngEnad_Cnt_T_logl;

	return RespCod_Cnt_T_enum;
}
#endif


/* End of File: SrvFE81.c */
