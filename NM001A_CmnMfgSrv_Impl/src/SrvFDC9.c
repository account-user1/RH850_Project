/***********************************************************************************************************************
* Copyright 2015 Nexteer
* Nexteer Confidential
*
* Module File Name: SrvFDC9.c
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
* 11/17/17  1        JWJ       Initial file creation                                                        EA4#17640
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
 *        Name:  CmnMfgSrv_SrvFDC9Rd
 * Description:  0xFDC9: Motor Angle 5 Trim Read
 *          ID:  0xFDC9
 *        Type:  0x22 (Read)
 *    Sub-Func:  N/A
 *    Req. Len:  0 bytes
 *   Resp. Len:  308 bytes
 * ------------------------------------------------------------------------------------------------------------------ */
#if (CMNMFGSRV_FDC9ENA_CNT_LGC == CMNMFGSRV_ENAD_CNT_LGC)
FUNC(NegRespCodEnum, CmnMfgSrv_CODE) CmnMfgSrv_SrvFDC9Rd(VAR(uint8, CmnMfgSrv_VAR) DataBuf_Uls_T_u08[])
{
	VAR(NegRespCodEnum, AUTOMATIC) RespCod_Cnt_T_enum = MFGSRVNRCPOSRSP;
	VAR(uint8, AUTOMATIC) Idx_Cnt_T_u08;
	VAR(MotAgEolPrmRec1, AUTOMATIC) MtrPosEolCals_T_str;

	if (Rte_Call_MotAg5EolPrmRead_Oper(&MtrPosEolCals_T_str) == E_OK)
	{
		CmnMfgSrvFct_Decompose16(MtrPosEolCals_T_str.SinOffs, &DataBuf_Uls_T_u08[0]);
		CmnMfgSrvFct_Decompose16(MtrPosEolCals_T_str.CosOffs, &DataBuf_Uls_T_u08[2]);
		CmnMfgSrvFct_Decompose16(MtrPosEolCals_T_str.SinAmpRecpr, &DataBuf_Uls_T_u08[4]);
		CmnMfgSrvFct_Decompose16(MtrPosEolCals_T_str.CosAmpRecpr, &DataBuf_Uls_T_u08[6]);
		CmnMfgSrvFct_Decompose16((uint16)MtrPosEolCals_T_str.SinDelta, &DataBuf_Uls_T_u08[8]);
		for (Idx_Cnt_T_u08 = 0U; Idx_Cnt_T_u08 < 144U; Idx_Cnt_T_u08 += 1U)
		{
			DataBuf_Uls_T_u08[Idx_Cnt_T_u08 + 10U] = (uint8)MtrPosEolCals_T_str.SinHrmncTbl[Idx_Cnt_T_u08];
			DataBuf_Uls_T_u08[Idx_Cnt_T_u08 + 154U] = (uint8)MtrPosEolCals_T_str.CosHrmncTbl[Idx_Cnt_T_u08];
		}
		CmnMfgSrvFct_Decompose16(MtrPosEolCals_T_str.SinGainCorrd, &DataBuf_Uls_T_u08[298]);
		CmnMfgSrvFct_Decompose16(MtrPosEolCals_T_str.CosGainCorrd, &DataBuf_Uls_T_u08[300]);
		CmnMfgSrvFct_Decompose16((uint16)MtrPosEolCals_T_str.SinOffsCorrd, &DataBuf_Uls_T_u08[302]);
		CmnMfgSrvFct_Decompose16((uint16)MtrPosEolCals_T_str.CosOffsCorrd, &DataBuf_Uls_T_u08[304]);
		CmnMfgSrvFct_Decompose16(MtrPosEolCals_T_str.CosDeltaRecpr, &DataBuf_Uls_T_u08[306]);
	}
	else
	{
		RespCod_Cnt_T_enum = MFGSRVNRCCONDITIONSNOTCORRECT;
	}

	return RespCod_Cnt_T_enum;
}
#endif

/* ---------------------------------------------------------------------------------------------------------------------
 *        Name:  CmnMfgSrv_SrvFDC9Wr
 * Description:  0xFDC9: Motor Angle 5 Trim Write
 *          ID:  0xFDC9
 *        Type:  0x2E (Write)
 *    Sub-Func:  N/A
 *    Req. Len:  308 bytes
 *   Resp. Len:  0 bytes
 * ------------------------------------------------------------------------------------------------------------------ */
#if (CMNMFGSRV_FDC9ENA_CNT_LGC == CMNMFGSRV_ENAD_CNT_LGC)
FUNC(NegRespCodEnum, CmnMfgSrv_CODE) CmnMfgSrv_SrvFDC9Wr(VAR(uint8, CmnMfgSrv_VAR) DataBuf_Uls_T_u08[])
{
	VAR(NegRespCodEnum, AUTOMATIC) RespCod_Cnt_T_enum = MFGSRVNRCPOSRSP;
	VAR(uint8, AUTOMATIC) Idx_Cnt_T_u08;
	VAR(MotAgEolPrmRec1, AUTOMATIC) MtrPosEolCals_T_str;

	MtrPosEolCals_T_str.SinOffs = CmnMfgSrvFct_Synthesize16(&DataBuf_Uls_T_u08[0]);
	MtrPosEolCals_T_str.CosOffs = CmnMfgSrvFct_Synthesize16(&DataBuf_Uls_T_u08[2]);
	MtrPosEolCals_T_str.SinAmpRecpr = CmnMfgSrvFct_Synthesize16(&DataBuf_Uls_T_u08[4]);
	MtrPosEolCals_T_str.CosAmpRecpr = CmnMfgSrvFct_Synthesize16(&DataBuf_Uls_T_u08[6]);
	MtrPosEolCals_T_str.SinDelta = (sint16)CmnMfgSrvFct_Synthesize16(&DataBuf_Uls_T_u08[8]);
	for (Idx_Cnt_T_u08 = 0U; Idx_Cnt_T_u08 < 144U; Idx_Cnt_T_u08 += 1U)
	{
		MtrPosEolCals_T_str.SinHrmncTbl[Idx_Cnt_T_u08] = (sint8)DataBuf_Uls_T_u08[Idx_Cnt_T_u08 + 10U];
		MtrPosEolCals_T_str.CosHrmncTbl[Idx_Cnt_T_u08] = (sint8)DataBuf_Uls_T_u08[Idx_Cnt_T_u08 + 154U];
	}
	MtrPosEolCals_T_str.SinGainCorrd = CmnMfgSrvFct_Synthesize16(&DataBuf_Uls_T_u08[298]);
	MtrPosEolCals_T_str.CosGainCorrd = CmnMfgSrvFct_Synthesize16(&DataBuf_Uls_T_u08[300]);
	MtrPosEolCals_T_str.SinOffsCorrd = (sint16)CmnMfgSrvFct_Synthesize16(&DataBuf_Uls_T_u08[302]);
	MtrPosEolCals_T_str.CosOffsCorrd = (sint16)CmnMfgSrvFct_Synthesize16(&DataBuf_Uls_T_u08[304]);
	MtrPosEolCals_T_str.CosDeltaRecpr = CmnMfgSrvFct_Synthesize16(&DataBuf_Uls_T_u08[306]);

	if (Rte_Call_MotAg5EolPrmWr_Oper(&MtrPosEolCals_T_str) != E_OK)
	{
		RespCod_Cnt_T_enum = MFGSRVNRCCONDITIONSNOTCORRECT;
	}

	return RespCod_Cnt_T_enum;
}
#endif



/* End of File: SrvFDC9.c */
