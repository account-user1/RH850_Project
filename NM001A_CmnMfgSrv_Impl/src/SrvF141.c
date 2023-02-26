/***********************************************************************************************************************
* Copyright 2015 Nexteer
* Nexteer Confidential
*
* Module File Name: SrvF141.c
* Module Description: 0xF141 - Store/Recalls Current Defeats
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
 *        Name:  CmnMfgSrv_SrvF141RoutineStrt
 * Description:  0xF141: Defeat Storage Start
 *          ID:  0xF141
 *        Type:  0x31 (Routine)
 *    Sub-Func:  0x01 (Start)
 *    Req. Len:  0 bytes
 *   Resp. Len:  0 bytes
 * ------------------------------------------------------------------------------------------------------------------ */
#if (CMNMFGSRV_F141ENA_CNT_LGC == CMNMFGSRV_ENAD_CNT_LGC)
FUNC(NegRespCodEnum, CmnMfgSrv_CODE) CmnMfgSrv_SrvF141RoutineStrt(VAR(uint8, CmnMfgSrv_VAR) DataBuf_Uls_T_u08[])
{
	VAR(NegRespCodEnum, AUTOMATIC) RespCod_Cnt_T_enum = MFGSRVNRCPOSRSP;

	/* Gather up defeats into bitfield and pack into PIM structure */
	CmnMfgSrv_DecomposeDiBits(Rte_Pim_DiRestore());
	(void)Rte_Call_NvmDiRestore_SetRamBlockStatus(TRUE);

	return RespCod_Cnt_T_enum;
}
#endif


/* ---------------------------------------------------------------------------------------------------------------------
 *        Name:  CmnMfgSrv_SrvF141RoutineStop
 * Description:  0xF141: Defeat Storage Stop
 *          ID:  0xF141
 *        Type:  0x31 (Routine)
 *    Sub-Func:  0x02 (Stop)
 *    Req. Len:  0 bytes
 *   Resp. Len:  0 bytes
 * ------------------------------------------------------------------------------------------------------------------ */
#if (CMNMFGSRV_F141ENA_CNT_LGC == CMNMFGSRV_ENAD_CNT_LGC)
FUNC(NegRespCodEnum, CmnMfgSrv_CODE) CmnMfgSrv_SrvF141RoutineStop(VAR(uint8, CmnMfgSrv_VAR) DataBuf_Uls_T_u08[])
{
	VAR(NegRespCodEnum, AUTOMATIC) RespCod_Cnt_T_enum = MFGSRVNRCPOSRSP;
	VAR(uint8, AUTOMATIC) Index_Cnt_T_u08;

	for (Index_Cnt_T_u08 = 0U; Index_Cnt_T_u08 < 8U; Index_Cnt_T_u08 += 1U)
	{
		*Rte_Pim_DiRestore() = 0x00U;
	}
	CmnMfgSrv_SynthesizeDiBits(Rte_Pim_DiRestore());
	(void)Rte_Call_NvmDiRestore_SetRamBlockStatus(TRUE);

	return RespCod_Cnt_T_enum;
}
#endif


/* ---------------------------------------------------------------------------------------------------------------------
 *        Name:  CmnMfgSrv_SrvF141RoutineSts
 * Description:  0xF141: Defeat Storage Results
 *          ID:  0xF141
 *        Type:  0x31 (Routine)
 *    Sub-Func:  0x03 (Status)
 *    Req. Len:  0 bytes
 *   Resp. Len:  8 bytes
 * ------------------------------------------------------------------------------------------------------------------ */
#if (CMNMFGSRV_F141ENA_CNT_LGC == CMNMFGSRV_ENAD_CNT_LGC)
FUNC(NegRespCodEnum, CmnMfgSrv_CODE) CmnMfgSrv_SrvF141RoutineSts(VAR(uint8, CmnMfgSrv_VAR) DataBuf_Uls_T_u08[])
{
	VAR(NegRespCodEnum, AUTOMATIC) RespCod_Cnt_T_enum = MFGSRVNRCPOSRSP;
	VAR(uint8, AUTOMATIC) Index_Cnt_T_u08;

	/* Return the currently stored defeat bits from NvM PIM structure */
	for (Index_Cnt_T_u08 = 0U; Index_Cnt_T_u08 < 8U; Index_Cnt_T_u08 += 1U)
	{
		DataBuf_Uls_T_u08[Index_Cnt_T_u08] = Rte_Pim_DiRestore()[Index_Cnt_T_u08];
	}

	return RespCod_Cnt_T_enum;
}
#endif


/* End of File: SrvF141.c */
