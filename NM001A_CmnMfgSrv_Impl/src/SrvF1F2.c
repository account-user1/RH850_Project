/***********************************************************************************************************************
* Copyright 2015 Nexteer
* Nexteer Confidential
*
* Module File Name: SrvF1F2.c
* Module Description: 0xF1F2 - Calibration 0 Release Number
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
* 09/10/15  2        JWJ       Cleaned up naming to match standards                                         EA4#2034
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
 *        Name:  CmnMfgSrv_SrvF1F2Rd
 * Description:  0xF1F2: Calibration 0 Release Information Read
 *          ID:  0xF1F2
 *        Type:  0x22 (Read)
 *    Sub-Func:  N/A
 *    Req. Len:  0 bytes
 *   Resp. Len:  5 bytes
 * ------------------------------------------------------------------------------------------------------------------ */
#if (CMNMFGSRV_F1F2ENA_CNT_LGC == CMNMFGSRV_ENAD_CNT_LGC)
FUNC(NegRespCodEnum, CmnMfgSrv_CODE) CmnMfgSrv_SrvF1F2Rd(VAR(uint8, CmnMfgSrv_VAR) DataBuf_Uls_T_u08[])
{
	VAR(NegRespCodEnum, AUTOMATIC) RespCod_Cnt_T_enum = MFGSRVNRCPOSRSP;
	VAR(uint32, AUTOMATIC) CalRelNr_Cnt_T_u32;
	VAR(uint8, AUTOMATIC) CalRelSt_Cnt_T_u08;

	(void)Rte_Call_NxtrCalIdsCalRelRd_Oper(0U, &CalRelNr_Cnt_T_u32, &CalRelSt_Cnt_T_u08);

	CmnMfgSrvFct_Decompose32(CalRelNr_Cnt_T_u32, DataBuf_Uls_T_u08);
	DataBuf_Uls_T_u08[4U] = CalRelSt_Cnt_T_u08;

	return RespCod_Cnt_T_enum;
}
#endif


/* End of File: SrvF1F2.c */
