/***********************************************************************************************************************
* Copyright 2015 Nexteer
* Nexteer Confidential
*
* Module File Name: SrvF1F9.c
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
* 12/04/15  1        JWJ       Initial file creation                                                        EA4#2518
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
 *        Name:  CmnMfgSrv_SrvF1F9Rd
 * Description:  0xF1F9: Calibration 2 Development Information Read
 *          ID:  0xF1F9
 *        Type:  0x22 (Read)
 *    Sub-Func:  N/A
 *    Req. Len:  0 bytes
 *   Resp. Len:  59 bytes
 * ------------------------------------------------------------------------------------------------------------------ */
#if (CMNMFGSRV_F1F9ENA_CNT_LGC == CMNMFGSRV_ENAD_CNT_LGC)
FUNC(NegRespCodEnum, CmnMfgSrv_CODE) CmnMfgSrv_SrvF1F9Rd(VAR(uint8, CmnMfgSrv_VAR) DataBuf_Uls_T_u08[])
{
	VAR(NegRespCodEnum, AUTOMATIC) RspCod_Cnt_T_enum = MFGSRVNRCPOSRSP;
	VAR(Std_ReturnType, AUTOMATIC) RetCod_Cnt_T_u08;
	VAR(uint32, AUTOMATIC) CalDevlpTiStamp_Cnt_T_u32 = 0U;

	RetCod_Cnt_T_u08 = Rte_Call_NxtrCalIdsCalDevlpRd_Oper(
			2U,
			&DataBuf_Uls_T_u08[0U],
			&DataBuf_Uls_T_u08[6U],
			&CalDevlpTiStamp_Cnt_T_u32,
			&DataBuf_Uls_T_u08[11U]
	);

	if (RetCod_Cnt_T_u08 == RTE_E_OK)
	{
		CmnMfgSrvFct_Decompose32(CalDevlpTiStamp_Cnt_T_u32, &DataBuf_Uls_T_u08[7U]);
	}
	else
	{
		RspCod_Cnt_T_enum = MFGSRVNRCCONDITIONSNOTCORRECT;
	}

	return RspCod_Cnt_T_enum;
}
#endif



/* End of File: SrvF1F9.c */
