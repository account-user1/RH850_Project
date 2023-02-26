/***********************************************************************************************************************
* Copyright 2015 Nexteer
* Nexteer Confidential
*
* Module File Name: SrvF1F1.c
* Module Description: 0xF1F1 - Bootloader Software Version
* Project           : Common Manufacturing Services
* Author            : Jared Julien
************************************************************************************************************************
* Version Control:
* %version:         2 %
* %derived_by:      kzdyfh %
* ---------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author    Change Description                                                           SCR #
* --------  -------  --------  ---------------------------------------------------------------------------  ----------
* 04/20/15  1        JWJ       Initial file creation                                                        EA4#550
* 01/26/16  2        JWJ       Updates for newly generated function names                                   EA4#2518
***********************************************************************************************************************/

/* ================================================================================================================== */
/* Includes */
/* ------------------------------------------------------------------------------------------------------------------ */
#include "Rte_CmnMfgSrv.h"
#include "CmnMfgSrv.h"
#include "CmnMfgSrvTyp.h"
#include "MfgSrvCfg.h"
#include "NxtrSwIds.h"
#include "NxtrMath.h"


/* ================================================================================================================== */
/* Service Function Definitions */
/* ------------------------------------------------------------------------------------------------------------------ */

/* ---------------------------------------------------------------------------------------------------------------------
 *        Name:  CmnMfgSrv_SrvF1F1Rd
 * Description:  0xF1F1: Bootloader Software Version Read
 *          ID:  0xF1F1
 *        Type:  0x22 (Read)
 *    Sub-Func:  N/A
 *    Req. Len:  0 bytes
 *   Resp. Len:  16 bytes
 * ------------------------------------------------------------------------------------------------------------------ */
#if (CMNMFGSRV_F1F1ENA_CNT_LGC == CMNMFGSRV_ENAD_CNT_LGC)
FUNC(NegRespCodEnum, CmnMfgSrv_CODE) CmnMfgSrv_SrvF1F1Rd(VAR(uint8, CmnMfgSrv_VAR) DataBuf_Uls_T_u08[])
{
	VAR(NegRespCodEnum, AUTOMATIC) RspCod_Cnt_T_enum = MFGSRVNRCPOSRSP;
	VAR(uint8, AUTOMATIC) Idx_Cnt_T_u08;

	for (Idx_Cnt_T_u08 = 0U; Idx_Cnt_T_u08 < 16U; Idx_Cnt_T_u08 += 1U)
	{
		DataBuf_Uls_T_u08[Idx_Cnt_T_u08] = NxtrSwIds_BootSwRelNrPtr_Cnt_str->Ver[Idx_Cnt_T_u08];
	}

	return RspCod_Cnt_T_enum;
}
#endif


/* ================================================================================================================== */
/* Non-Trusted Function Calls */
/* ------------------------------------------------------------------------------------------------------------------ */
/* None */


/* End of File: SrvF1F1.c */
