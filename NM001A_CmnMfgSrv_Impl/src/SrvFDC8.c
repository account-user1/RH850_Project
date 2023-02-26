/***********************************************************************************************************************
* Copyright 2015 Nexteer
* Nexteer Confidential
*
* Module File Name: SrvFDC8.c
* Module Description: 0xFDC8 - Analog Motor Position EOL Parameters
* Project           : Common Manufacturing Services
* Author            : Jared Julien
************************************************************************************************************************
* Version Control:
* %version:         3 %
* %derived_by:      kzdyfh %
* ---------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author    Change Description                                                           SCR #
* --------  -------  --------  ---------------------------------------------------------------------------  ----------
* 08/31/15  1        JWJ       Initial file creation                                                        EA4#1441
* 01/26/16  2        JWJ       Updates for newly generated function names                                   EA4#2518
* 03/23/16  3        JWJ       Changed support for CRC to process in service rather than in component       EA4#4909
***********************************************************************************************************************/

/* ================================================================================================================== */
/* Includes */
/* ------------------------------------------------------------------------------------------------------------------ */
#include "Rte_CmnMfgSrv.h"
#include "CmnMfgSrv.h"
#include "CmnMfgSrvTyp.h"
#include "MfgSrvCfg.h"
#include "CmnMfgSrvFct.h"
#include "Crc.h"


/* ================================================================================================================== */
/* Service Function Definitions */
/* ------------------------------------------------------------------------------------------------------------------ */

/* ---------------------------------------------------------------------------------------------------------------------
 *        Name:  CmnMfgSrv_SrvFDC8Rd
 * Description:  0xFDC8: Motor Angle 2 Trim Read
 *          ID:  0xFDC8
 *        Type:  0x22 (Read)
 *    Sub-Func:  N/A
 *    Req. Len:  0 bytes
 *   Resp. Len:  22 bytes
 * ------------------------------------------------------------------------------------------------------------------ */
#if (CMNMFGSRV_FDC8ENA_CNT_LGC == CMNMFGSRV_ENAD_CNT_LGC)
FUNC(NegRespCodEnum, CmnMfgSrv_CODE) CmnMfgSrv_SrvFDC8Rd(VAR(uint8, CmnMfgSrv_VAR) DataBuf_Uls_T_u08[])
{
	VAR(NegRespCodEnum, AUTOMATIC) RespCod_Cnt_T_enum = MFGSRVNRCPOSRSP;
	VAR(MotAgMeasEolPrmRec1, AUTOMATIC) EolPrm_Cnt_T_str;
	VAR(uint16, AUTOMATIC) CrcCalcd_Cnt_T_u16;

	(void)Rte_Call_MotAgMeasEolPrmRead_Oper(&EolPrm_Cnt_T_str);

	CmnMfgSrvFct_DecomposeFloat(EolPrm_Cnt_T_str.SinOffs, &DataBuf_Uls_T_u08[0U]);
	CmnMfgSrvFct_DecomposeFloat(EolPrm_Cnt_T_str.CosOffs, &DataBuf_Uls_T_u08[4U]);
	CmnMfgSrvFct_DecomposeFloat(EolPrm_Cnt_T_str.SinAmpRecpr, &DataBuf_Uls_T_u08[8U]);
	CmnMfgSrvFct_DecomposeFloat(EolPrm_Cnt_T_str.CosAmpRecpr, &DataBuf_Uls_T_u08[12U]);
	CmnMfgSrvFct_DecomposeFloat(EolPrm_Cnt_T_str.SinDelta, &DataBuf_Uls_T_u08[16U]);

	CrcCalcd_Cnt_T_u16 = Crc_CalculateCRC16(DataBuf_Uls_T_u08, 20U, 0xFDC8U, FALSE);

	CmnMfgSrvFct_Decompose16(CrcCalcd_Cnt_T_u16, &DataBuf_Uls_T_u08[20U]);

	return RespCod_Cnt_T_enum;
}
#endif


/* ================================================================================================================== */
/* Service Function Definitions */
/* ------------------------------------------------------------------------------------------------------------------ */

/* ---------------------------------------------------------------------------------------------------------------------
 *        Name:  CmnMfgSrv_SrvFDC8Wr
 * Description:  0xFDC8: Motor Angle 2 Trim Write
 *          ID:  0xFDC8
 *        Type:  0x2E (Write)
 *    Sub-Func:  N/A
 *    Req. Len:  22 bytes
 *   Resp. Len:  0 bytes
 * ------------------------------------------------------------------------------------------------------------------ */
#if (CMNMFGSRV_FDC8ENA_CNT_LGC == CMNMFGSRV_ENAD_CNT_LGC)
FUNC(NegRespCodEnum, CmnMfgSrv_CODE) CmnMfgSrv_SrvFDC8Wr(VAR(uint8, CmnMfgSrv_VAR) DataBuf_Uls_T_u08[])
{
	VAR(NegRespCodEnum, AUTOMATIC) RespCod_Cnt_T_enum = MFGSRVNRCPOSRSP;
	VAR(MotAgMeasEolPrmRec1, AUTOMATIC) EolPrm_Cnt_T_str;
	VAR(uint16, AUTOMATIC) Crc_Cnt_T_u16;
	VAR(uint16, AUTOMATIC) CrcCalcd_Cnt_T_u16;

	EolPrm_Cnt_T_str.SinOffs = CmnMfgSrvFct_SynthesizeFloat(&DataBuf_Uls_T_u08[0U]);
	EolPrm_Cnt_T_str.CosOffs = CmnMfgSrvFct_SynthesizeFloat(&DataBuf_Uls_T_u08[4U]);
	EolPrm_Cnt_T_str.SinAmpRecpr = CmnMfgSrvFct_SynthesizeFloat(&DataBuf_Uls_T_u08[8U]);
	EolPrm_Cnt_T_str.CosAmpRecpr = CmnMfgSrvFct_SynthesizeFloat(&DataBuf_Uls_T_u08[12U]);
	EolPrm_Cnt_T_str.SinDelta = CmnMfgSrvFct_SynthesizeFloat(&DataBuf_Uls_T_u08[16U]);
	Crc_Cnt_T_u16 = CmnMfgSrvFct_Synthesize16(&DataBuf_Uls_T_u08[20U]);

	CrcCalcd_Cnt_T_u16 = Crc_CalculateCRC16(DataBuf_Uls_T_u08, 20U, 0xFDC8U, FALSE);

	if (Crc_Cnt_T_u16 == CrcCalcd_Cnt_T_u16)
	{
		/* CRC Check passed */
		(void)Rte_Call_MotAgMeasEolPrmWr_Oper(&EolPrm_Cnt_T_str);
	}
	else
	{
		RespCod_Cnt_T_enum = MFGSRVNRCREQUESTOUTOFRANGE;
	}

	return RespCod_Cnt_T_enum;
}
#endif


/* End of File: SrvFDC8.c */
