/***********************************************************************************************************************
* Copyright 2015 Nexteer
* Nexteer Confidential
*
* Module File Name: SrvF1F3.c
* Module Description: 0xF1F3 - Calibration 1 Release Number
* Project           : Common Manufacturing Services
* Author            : Jared Julien
************************************************************************************************************************
* Version Control:
* %version:         1 %
* %derived_by:      kzdyfh %
* ---------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author    Change Description                                                           SCR #
* --------  -------  --------  ---------------------------------------------------------------------------  ----------
* 09/10/15  1        JWJ       Initial file creation                                                        EA4#2034
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
 *        Name:  CmnMfgSrv_SrvF1F3Rd
 * Description:  0xF1F3: Calibration 1 Release Information Read
 *          ID:  0xF1F3
 *        Type:  0x22 (Read)
 *    Sub-Func:  N/A
 *    Req. Len:  0 bytes
 *   Resp. Len:  5 bytes
 * ------------------------------------------------------------------------------------------------------------------ */
#if (CMNMFGSRV_F1F3ENA_CNT_LGC == CMNMFGSRV_ENAD_CNT_LGC)
FUNC(NegRespCodEnum, CmnMfgSrv_CODE) CmnMfgSrv_SrvF1F3Rd(VAR(uint8, CmnMfgSrv_VAR) DataBuf_Uls_T_u08[])
{
	VAR(NegRespCodEnum, AUTOMATIC) RespCod_Cnt_T_enum = MFGSRVNRCPOSRSP;
	VAR(uint32, AUTOMATIC) CalRelNr_Cnt_T_u32;
	VAR(uint8, AUTOMATIC) CalRelSt_Cnt_T_u08;

	(void)Rte_Call_NxtrCalIdsCalRelRd_Oper(1U, &CalRelNr_Cnt_T_u32, &CalRelSt_Cnt_T_u08);

	CmnMfgSrvFct_Decompose32(CalRelNr_Cnt_T_u32, DataBuf_Uls_T_u08);
	DataBuf_Uls_T_u08[4U] = CalRelSt_Cnt_T_u08;

	return RespCod_Cnt_T_enum;
}
#endif


/* End of File: SrvF1F3.c */
