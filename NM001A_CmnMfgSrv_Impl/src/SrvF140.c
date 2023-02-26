/***********************************************************************************************************************
* Copyright 2015 Nexteer
* Nexteer Confidential
*
* Module File Name: SrvF140.c
* Module Description: 0xF140 - Master Defeat
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
#include "CmnMfgSrvFct.h"


/* ================================================================================================================== */
/* Service Function Definitions */
/* ------------------------------------------------------------------------------------------------------------------ */

/* ---------------------------------------------------------------------------------------------------------------------
 *        Name:  CmnMfgSrv_SrvF140RoutineStrt
 * Description:  0xF140: Master Defeat Control Start
 *          ID:  0xF140
 *        Type:  0x31 (Routine)
 *    Sub-Func:  0x01 (Start)
 *    Req. Len:  0 bytes
 *   Resp. Len:  0 bytes
 * ------------------------------------------------------------------------------------------------------------------ */
#if (CMNMFGSRV_F140ENA_CNT_LGC == CMNMFGSRV_ENAD_CNT_LGC)
FUNC(NegRespCodEnum, CmnMfgSrv_CODE) CmnMfgSrv_SrvF140RoutineStrt(VAR(uint8, CmnMfgSrv_VAR) DataBuf_Uls_T_u08[])
{
	VAR(NegRespCodEnum, AUTOMATIC) RespCod_Cnt_T_enum = MFGSRVNRCPOSRSP;
	VAR(uint8, AUTOMATIC) Index_Cnt_T_u08;
	VAR(uint8, AUTOMATIC) TmpBuf_Cnt_T_u08[8U];

	for (Index_Cnt_T_u08 = 0U; Index_Cnt_T_u08 < 8U; Index_Cnt_T_u08 += 1U)
	{
		TmpBuf_Cnt_T_u08[Index_Cnt_T_u08] = 0xFFU;
	}

	CmnMfgSrv_SynthesizeDiBits(TmpBuf_Cnt_T_u08);

	return RespCod_Cnt_T_enum;
}
#endif

/* ---------------------------------------------------------------------------------------------------------------------
 *        Name:  CmnMfgSrv_SrvF140RoutineStop
 * Description:  0xF140: Master Defeat Control Stop
 *          ID:  0xF140
 *        Type:  0x31 (Routine)
 *    Sub-Func:  0x02 (Stop)
 *    Req. Len:  0 bytes
 *   Resp. Len:  0 bytes
 * ------------------------------------------------------------------------------------------------------------------ */
#if (CMNMFGSRV_F140ENA_CNT_LGC == CMNMFGSRV_ENAD_CNT_LGC)
FUNC(NegRespCodEnum, CmnMfgSrv_CODE) CmnMfgSrv_SrvF140RoutineStop(VAR(uint8, CmnMfgSrv_VAR) DataBuf_Uls_T_u08[])
{
	VAR(NegRespCodEnum, AUTOMATIC) RespCod_Cnt_T_enum = MFGSRVNRCPOSRSP;
	VAR(uint8, AUTOMATIC) Index_Cnt_T_u08;
	VAR(uint8, AUTOMATIC) TmpBuf_Cnt_T_u08[8U];

	for (Index_Cnt_T_u08 = 0U; Index_Cnt_T_u08 < 8U; Index_Cnt_T_u08 += 1U)
	{
		TmpBuf_Cnt_T_u08[Index_Cnt_T_u08] = 0x00U;
	}

	CmnMfgSrv_SynthesizeDiBits(TmpBuf_Cnt_T_u08);

	return RespCod_Cnt_T_enum;
}
#endif


/* ---------------------------------------------------------------------------------------------------------------------
 *        Name:  CmnMfgSrv_SrvF140RoutineSts
 * Description:  0xF140: Master Defeat Control Results
 *          ID:  0xF140
 *        Type:  0x31 (Routine)
 *    Sub-Func:  0x03 (Status)
 *    Req. Len:  0 bytes
 *   Resp. Len:  8 bytes
 * ------------------------------------------------------------------------------------------------------------------ */
#if (CMNMFGSRV_F140ENA_CNT_LGC == CMNMFGSRV_ENAD_CNT_LGC)
FUNC(NegRespCodEnum, CmnMfgSrv_CODE) CmnMfgSrv_SrvF140RoutineSts(VAR(uint8, CmnMfgSrv_VAR) DataBuf_Uls_T_u08[])
{
	VAR(NegRespCodEnum, AUTOMATIC) RespCod_Cnt_T_enum = MFGSRVNRCPOSRSP;

	CmnMfgSrv_SynthesizeDiBits(DataBuf_Uls_T_u08);

	return RespCod_Cnt_T_enum;
}
#endif


/* End of File: SrvF140.c */
