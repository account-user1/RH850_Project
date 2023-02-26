/***********************************************************************************************************************
* Copyright 2015 Nexteer
* Nexteer Confidential
*
* Module File Name: SrvFD68.c
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
* 07/13/16  1        KJWJ       Initial file creation                                                        EA4#6219
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
 *        Name:  CmnMfgSrv_SrvFD68RoutineStrt
 * Description:  0xFD68: Get NTC Status Start
 *          ID:  0xFD68
 *        Type:  0x31 (Routine)
 *    Sub-Func:  0x01 (Start)
 *    Req. Len:  2 bytes
 *   Resp. Len:  5 bytes
 * ------------------------------------------------------------------------------------------------------------------ */
#if (CMNMFGSRV_FD68ENA_CNT_LGC == CMNMFGSRV_ENAD_CNT_LGC)
FUNC(NegRespCodEnum, CmnMfgSrv_CODE) CmnMfgSrv_SrvFD68RoutineStrt(VAR(uint8, CmnMfgSrv_VAR) DataBuf_Uls_T_u08[])
{
	VAR(NegRespCodEnum, AUTOMATIC) RespCod_Cnt_T_enum = MFGSRVNRCPOSRSP;
	VAR(NtcNr1, AUTOMATIC) NtcNr_Cnt_T_u16;
	VAR(NtcInfoRec4, AUTOMATIC) NtcInfo_Cnt_T_str;
	VAR(sint16, AUTOMATIC) DebCntr_Cnt_T_s16;

	NtcNr_Cnt_T_u16 = CmnMfgSrvFct_Synthesize16(&DataBuf_Uls_T_u08[0U]);

	if (E_OK == Rte_Call_ReadNtcInfoAndDebCntr_Oper(NtcNr_Cnt_T_u16, &NtcInfo_Cnt_T_str, &DebCntr_Cnt_T_s16))
	{
		DataBuf_Uls_T_u08[0U] = (uint8)NtcInfo_Cnt_T_str.Sts;
		DataBuf_Uls_T_u08[1U] = (uint8)NtcInfo_Cnt_T_str.NtcStInfo;
		DataBuf_Uls_T_u08[2U] = (uint8)NtcInfo_Cnt_T_str.AgiCntr;
		CmnMfgSrvFct_Decompose16((uint16)DebCntr_Cnt_T_s16, &DataBuf_Uls_T_u08[3U]);
	}
	else
	{
		RespCod_Cnt_T_enum = MFGSRVNRCCONDITIONSNOTCORRECT;
	}

	return RespCod_Cnt_T_enum;
}
#endif



/* End of File: SrvFD68.c */
