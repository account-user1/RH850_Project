/***********************************************************************************************************************
* Copyright 2015 Nexteer
* Nexteer Confidential
*
* Module File Name: SrvFD3B.c
* Module Description: 0xFD3B - Nexteer Manufacturing Scratch Pad 3
* Project           : Common Manufacturing Services
* Author            : Jared Julien
************************************************************************************************************************
* Version Control:
* %version:         1 %
* %derived_by:      kzdyfh %
* ---------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author    Change Description                                                           SCR #
* --------  -------  --------  ---------------------------------------------------------------------------  ----------
* 09/09/15  1        JWJ       Initial file creation                                                        EA4#2034
* 01/26/16  2        JWJ       Updates for newly generated function names                                   EA4#2518
***********************************************************************************************************************/

/* ================================================================================================================== */
/* Includes */
/* ------------------------------------------------------------------------------------------------------------------ */
#include "Rte_CmnMfgSrv.h"
#include "CmnMfgSrv.h"
#include "CmnMfgSrvTyp.h"
#include "MfgSrvCfg.h"


/* ================================================================================================================== */
/* Service Function Definitions */
/* ------------------------------------------------------------------------------------------------------------------ */

/* ---------------------------------------------------------------------------------------------------------------------
 *        Name:  CmnMfgSrv_SrvFD3BRd
 * Description:  0xFD3B: Manufacturing Scratch-Pad 3 Read
 *          ID:  0xFD3B
 *        Type:  0x22 (Read)
 *    Sub-Func:  N/A
 *    Req. Len:  0 bytes
 *   Resp. Len:  16 bytes
 * ------------------------------------------------------------------------------------------------------------------ */
#if (CMNMFGSRV_FD3BENA_CNT_LGC == CMNMFGSRV_ENAD_CNT_LGC)
FUNC(NegRespCodEnum, CmnMfgSrv_CODE) CmnMfgSrv_SrvFD3BRd(VAR(uint8, CmnMfgSrv_VAR) DataBuf_Uls_T_u08[])
{
	VAR(NegRespCodEnum, AUTOMATIC) RespCod_Cnt_T_enum = MFGSRVNRCPOSRSP;
	VAR(uint8, AUTOMATIC) Index_Cnt_T_u08;

	for (Index_Cnt_T_u08 = 0U; Index_Cnt_T_u08 < 16U; Index_Cnt_T_u08 += 1U)
	{
		DataBuf_Uls_T_u08[Index_Cnt_T_u08] = Rte_Pim_MfgTmpBuf3()[Index_Cnt_T_u08];
	}

	return RespCod_Cnt_T_enum;
}
#endif

/* ---------------------------------------------------------------------------------------------------------------------
 *        Name:  CmnMfgSrv_SrvFD3BWr
 * Description:  0xFD3B: Manufacturing Scratch-Pad 3 Write
 *          ID:  0xFD3B
 *        Type:  0x2E (Write)
 *    Sub-Func:  N/A
 *    Req. Len:  16 bytes
 *   Resp. Len:  0 bytes
 * ------------------------------------------------------------------------------------------------------------------ */
#if (CMNMFGSRV_FD3BENA_CNT_LGC == CMNMFGSRV_ENAD_CNT_LGC)
FUNC(NegRespCodEnum, CmnMfgSrv_CODE) CmnMfgSrv_SrvFD3BWr(VAR(uint8, CmnMfgSrv_VAR) DataBuf_Uls_T_u08[])
{
	VAR(NegRespCodEnum, AUTOMATIC) RespCod_Cnt_T_enum = MFGSRVNRCPOSRSP;
	VAR(uint8, AUTOMATIC) Index_Cnt_T_u08;

	for (Index_Cnt_T_u08 = 0U; Index_Cnt_T_u08 < 16U; Index_Cnt_T_u08 += 1U)
	{
		Rte_Pim_MfgTmpBuf3()[Index_Cnt_T_u08] = DataBuf_Uls_T_u08[Index_Cnt_T_u08];
	}
	(void)Rte_Call_NvmMfgTmpBuf3_SetRamBlockStatus(TRUE);

	return RespCod_Cnt_T_enum;
}
#endif


/* End of File: SrvFD3B.c */
