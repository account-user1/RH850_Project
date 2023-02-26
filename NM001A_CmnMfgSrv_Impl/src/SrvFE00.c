/***********************************************************************************************************************
* Copyright 2015 Nexteer
* Nexteer Confidential
*
* Module File Name: SrvFE00.c
* Module Description: Service processing
* Project           : Common Manufacturing Services
* Author            : KZDYFH
************************************************************************************************************************
* Version Control:
* %version:         1 %
* %derived_by:      kzdyfh %
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
 *        Name:  CmnMfgSrv_SrvFE00Rd
 * Description:  0xFE00: Motor Ripple Cogging Command Table Part 0 Read
 *          ID:  0xFE00
 *        Type:  0x22 (Read)
 *    Sub-Func:  N/A
 *    Req. Len:  0 bytes
 *   Resp. Len:  256 bytes
 * ------------------------------------------------------------------------------------------------------------------ */
#if (CMNMFGSRV_FE00ENA_CNT_LGC == CMNMFGSRV_ENAD_CNT_LGC)
FUNC(NegRespCodEnum, CmnMfgSrv_CODE) CmnMfgSrv_SrvFE00Rd(VAR(uint8, CmnMfgSrv_VAR) DataBuf_Uls_T_u08[])
{
	VAR(NegRespCodEnum, AUTOMATIC) RespCod_Cnt_T_enum = MFGSRVNRCPOSRSP;
	VAR(s1p14, AUTOMATIC) TmpBuf_Cnt_T_s1p14[128U];
	VAR(uint8, AUTOMATIC) Idx_Cnt_T_u08;

	(void)Rte_Call_GetMotCoggCmdPrm_Oper(TmpBuf_Cnt_T_s1p14, 0U);

	for (Idx_Cnt_T_u08 = 0U; Idx_Cnt_T_u08 < 128U; Idx_Cnt_T_u08 += 1U)
	{
		CmnMfgSrvFct_Decompose16((uint16)TmpBuf_Cnt_T_s1p14[Idx_Cnt_T_u08], &DataBuf_Uls_T_u08[Idx_Cnt_T_u08 * 2U]);
	}

	return RespCod_Cnt_T_enum;
}
#endif

/* ---------------------------------------------------------------------------------------------------------------------
 *        Name:  CmnMfgSrv_SrvFE00Wr
 * Description:  0xFE00: Motor Ripple Cogging Command Table Part 0 Write
 *          ID:  0xFE00
 *        Type:  0x2E (Write)
 *    Sub-Func:  N/A
 *    Req. Len:  256 bytes
 *   Resp. Len:  0 bytes
 * ------------------------------------------------------------------------------------------------------------------ */
#if (CMNMFGSRV_FE00ENA_CNT_LGC == CMNMFGSRV_ENAD_CNT_LGC)
FUNC(NegRespCodEnum, CmnMfgSrv_CODE) CmnMfgSrv_SrvFE00Wr(VAR(uint8, CmnMfgSrv_VAR) DataBuf_Uls_T_u08[])
{
	VAR(NegRespCodEnum, AUTOMATIC) RespCod_Cnt_T_enum = MFGSRVNRCPOSRSP;
	VAR(s1p14, AUTOMATIC) TmpBuf_Cnt_T_s1p14[128U];
	VAR(uint8, AUTOMATIC) Idx_Cnt_T_u08;

	for (Idx_Cnt_T_u08 = 0U; Idx_Cnt_T_u08 < 128U; Idx_Cnt_T_u08 += 1U)
	{
		TmpBuf_Cnt_T_s1p14[Idx_Cnt_T_u08] = (s1p14)CmnMfgSrvFct_Synthesize16(&DataBuf_Uls_T_u08[Idx_Cnt_T_u08 * 2U]);
	}

	(void)Rte_Call_SetMotCoggCmdPrm_Oper(TmpBuf_Cnt_T_s1p14, 0U);

	return RespCod_Cnt_T_enum;
}
#endif



/* End of File: SrvFE00.c */
