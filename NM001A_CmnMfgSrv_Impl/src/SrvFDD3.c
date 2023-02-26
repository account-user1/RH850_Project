/***********************************************************************************************************************
* Copyright 2015 Nexteer
* Nexteer Confidential
*
* Module File Name: SrvFDD3.c
* Module Description: 0xFDD3 - Correlation Table 0 Segment 2 Read/Write
* Project           : Common Manufacturing Services
* Author            : Jared Julien
************************************************************************************************************************
* Version Control:
* %version:         1 %
* %derived_by:      kzdyfh %
* ---------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author    Change Description                                                           SCR #
* --------  -------  --------  ---------------------------------------------------------------------------  ----------
* 06/09/15  1        JWJ       Initial file creation                                                        EA4#881
* 07/02/15  2        JWJ       Updated client function name to match conventions                            EA4#881
*                              Copy data from 8-bit buffer to 16-bit buffer for alignment issue             EA4#881
* 01/26/16  3        JWJ       Updates for newly generated function names                                   EA4#2518
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
 *        Name:  CmnMfgSrv_SrvFDD3Rd
 * Description:  0xFDD3: Correction Table 0 Part 2 Read
 *          ID:  0xFDD3
 *        Type:  0x22 (Read)
 *    Sub-Func:  N/A
 *    Req. Len:  0 bytes
 *   Resp. Len:  258 bytes
 * ------------------------------------------------------------------------------------------------------------------ */
#if (CMNMFGSRV_FDD3ENA_CNT_LGC == CMNMFGSRV_ENAD_CNT_LGC)
FUNC(NegRespCodEnum, CmnMfgSrv_CODE) CmnMfgSrv_SrvFDD3Rd(VAR(uint8, CmnMfgSrv_VAR) DataBuf_Uls_T_u08[])
{
	VAR(NegRespCodEnum, AUTOMATIC) RspCod_Cnt_T_enum = MFGSRVNRCPOSRSP;
	VAR(uint16, AUTOMATIC) Index_Cnt_T_u16;
	VAR(uint16, AUTOMATIC) DataBuf_Uls_T_u16[257U];

	(void)Rte_Call_MotAg0MeasMotAg0CorrnTblSegRead_Oper((uint16*)DataBuf_Uls_T_u16, 2U);

	for (Index_Cnt_T_u16 = 0U; Index_Cnt_T_u16 < 257U; Index_Cnt_T_u16 += 1U)
	{
		CmnMfgSrvFct_Decompose16(DataBuf_Uls_T_u16[Index_Cnt_T_u16], &DataBuf_Uls_T_u08[2U * Index_Cnt_T_u16]);
	}

	return RspCod_Cnt_T_enum;
}
#endif

/* ---------------------------------------------------------------------------------------------------------------------
 *        Name:  CmnMfgSrv_SrvFDD3Wr
 * Description:  0xFDD3: Correction Table 0 Part 2 Write
 *          ID:  0xFDD3
 *        Type:  0x2E (Write)
 *    Sub-Func:  N/A
 *    Req. Len:  258 bytes
 *   Resp. Len:  0 bytes
 * ------------------------------------------------------------------------------------------------------------------ */
#if (CMNMFGSRV_FDD3ENA_CNT_LGC == CMNMFGSRV_ENAD_CNT_LGC)
FUNC(NegRespCodEnum, CmnMfgSrv_CODE) CmnMfgSrv_SrvFDD3Wr(VAR(uint8, CmnMfgSrv_VAR) DataBuf_Uls_T_u08[])
{
	VAR(NegRespCodEnum, AUTOMATIC) RspCod_Cnt_T_enum;
	VAR(uint8, AUTOMATIC) Rsp_Cnt_T_u08;
	VAR(uint16, AUTOMATIC) Index_Cnt_T_u16;
	VAR(uint16, AUTOMATIC) DataBuf_Uls_T_u16[257U];

	for (Index_Cnt_T_u16 = 0U; Index_Cnt_T_u16 < 257U; Index_Cnt_T_u16 += 1U)
	{
		DataBuf_Uls_T_u16[Index_Cnt_T_u16] = CmnMfgSrvFct_Synthesize16(&DataBuf_Uls_T_u08[2U * Index_Cnt_T_u16]);
	}

	(void)Rte_Call_MotAg0MeasMotAg0CorrnTblSegUpd_Oper((uint16*)DataBuf_Uls_T_u16, 2U, &Rsp_Cnt_T_u08);

	if (Rsp_Cnt_T_u08 == 1U)
	{
		/* CRC Failure */
		RspCod_Cnt_T_enum = MFGSRVNRCREQUESTOUTOFRANGE;
	}
	else if (Rsp_Cnt_T_u08 == 2U)
	{
		/* Segment Failure */
		RspCod_Cnt_T_enum = MFGSRVNRCCONDITIONSNOTCORRECT;
	}
	else
	{
		/* Positive Response */
		RspCod_Cnt_T_enum = MFGSRVNRCPOSRSP;
	}

	return RspCod_Cnt_T_enum;
}
#endif


/* End of File: SrvFDD3.c */
