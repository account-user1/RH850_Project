/***********************************************************************************************************************
* Copyright 2015 Nexteer
* Nexteer Confidential
*
* Module File Name: SrvFDDD.c
* Module Description: 0xFDDD - Correlation Table 1 CRC Read/Write
* Project           : Common Manufacturing Services
* Author            : Jared Julien
************************************************************************************************************************
* Version Control:
* %version:         1 %
* %derived_by:      kzdyfh %
* ---------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author    Change Description                                                           SCR #
* --------  -------  --------  ---------------------------------------------------------------------------  ----------
* 07/15/15  1        JWJ       Initial file creation                                                        EA4#881
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
 *        Name:  CmnMfgSrv_SrvFDDDRd
 * Description:  0xFDDD: Correction Table 1 CRC Read
 *          ID:  0xFDDD
 *        Type:  0x22 (Read)
 *    Sub-Func:  N/A
 *    Req. Len:  0 bytes
 *   Resp. Len:  2 bytes
 * ------------------------------------------------------------------------------------------------------------------ */
#if (CMNMFGSRV_FDDDENA_CNT_LGC == CMNMFGSRV_ENAD_CNT_LGC)
FUNC(NegRespCodEnum, CmnMfgSrv_CODE) CmnMfgSrv_SrvFDDDRd(VAR(uint8, CmnMfgSrv_VAR) DataBuf_Uls_T_u08[])
{
	VAR(NegRespCodEnum, AUTOMATIC) RspCod_Cnt_T_enum = MFGSRVNRCPOSRSP;
	VAR(uint16, AUTOMATIC) Crc_Cnt_T_u16;

	(void)Rte_Call_MotAg1MeasMotAg1CorrnTblRead_Oper(&Crc_Cnt_T_u16);

	CmnMfgSrvFct_Decompose16(Crc_Cnt_T_u16, DataBuf_Uls_T_u08);

	return RspCod_Cnt_T_enum;
}
#endif

/* ---------------------------------------------------------------------------------------------------------------------
 *        Name:  CmnMfgSrv_SrvFDDDWr
 * Description:  0xFDDD: Correction Table 1 CRC Write
 *          ID:  0xFDDD
 *        Type:  0x2E (Write)
 *    Sub-Func:  N/A
 *    Req. Len:  2 bytes
 *   Resp. Len:  0 bytes
 * ------------------------------------------------------------------------------------------------------------------ */
#if (CMNMFGSRV_FDDDENA_CNT_LGC == CMNMFGSRV_ENAD_CNT_LGC)
FUNC(NegRespCodEnum, CmnMfgSrv_CODE) CmnMfgSrv_SrvFDDDWr(VAR(uint8, CmnMfgSrv_VAR) DataBuf_Uls_T_u08[])
{
	VAR(NegRespCodEnum, AUTOMATIC) RspCod_Cnt_T_enum;
	VAR(uint16, AUTOMATIC) Crc_Cnt_T_u16;
	VAR(uint8, AUTOMATIC) Rsp_Cnt_T_u08;

	Crc_Cnt_T_u16 = CmnMfgSrvFct_Synthesize16(DataBuf_Uls_T_u08);

	(void)Rte_Call_MotAg1MeasMotAg1CorrnTblWr_Oper(Crc_Cnt_T_u16, &Rsp_Cnt_T_u08);

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


/* End of File: SrvFDDD.c */
