/***********************************************************************************************************************
* Copyright 2015 Nexteer
* Nexteer Confidential
*
* Module File Name: SrvSession.c
* Module Description: Session Request Services
* Project           : Common Manufacturing Services
* Author            : Jared Julien
************************************************************************************************************************
* Version Control:
* %version:         3 %
* %derived_by:      kzdyfh %
* ---------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author    Change Description                                                           SCR #
* --------  -------  --------  ---------------------------------------------------------------------------  ----------
* 08/28/15  1        JWJ       Initial file creation                                                        EA4#2034
* 01/26/16  2        JWJ       Updates for newly generated function names                                   EA4#2518
* 07/24/17  3        JWJ       Added timeout values in responses in support of CANdela UDS template update  EA4#14061
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
 *        Name:  CmnMfgSrv_SrvSessionDflt
 * Description:  Default Session Start
 *          ID:  N/A
 *        Type:  0x10 (Session)
 *    Sub-Func:  0x01 (Default)
 *    Req. Len:  0 bytes
 *   Resp. Len:  4 bytes
 * ------------------------------------------------------------------------------------------------------------------ */
#if (CMNMFGSRV_1001ENA_CNT_LGC == CMNMFGSRV_ENAD_CNT_LGC)
FUNC(NegRespCodEnum, CmnMfgSrv_CODE) CmnMfgSrv_SrvSessionDflt(VAR(uint8, CmnMfgSrv_VAR) DataBuf_Uls_T_u08[])
{
	VAR(NegRespCodEnum, AUTOMATIC) RspCod_Cnt_T_enum = MFGSRVNRCPOSRSP;

	*Rte_Pim_SessionCurr() = 0x00U;

	CmnMfgSrvFct_Decompose16(50U, &DataBuf_Uls_T_u08[0U]);  /* 50ms P2 timeout */
	CmnMfgSrvFct_Decompose16(500U, &DataBuf_Uls_T_u08[2U]); /* 5000ms (5s) P2* timeout */

	return RspCod_Cnt_T_enum;
}
#endif

/* ---------------------------------------------------------------------------------------------------------------------
 *        Name:  CmnMfgSrv_SrvSessionNxtr
 * Description:  0x7E: Nexteer Session Start
 *          ID:  N/A
 *        Type:  0x10 (Session)
 *    Sub-Func:  0x7E (Nexteer)
 *    Req. Len:  0 bytes
 *   Resp. Len:  4 bytes
 * ------------------------------------------------------------------------------------------------------------------ */
#if (CMNMFGSRV_107EENA_CNT_LGC == CMNMFGSRV_ENAD_CNT_LGC)
FUNC(NegRespCodEnum, CmnMfgSrv_CODE) CmnMfgSrv_SrvSessionNxtr(VAR(uint8, CmnMfgSrv_VAR) DataBuf_Uls_T_u08[])
{
	VAR(NegRespCodEnum, AUTOMATIC) RspCod_Cnt_T_enum = MFGSRVNRCPOSRSP;

	*Rte_Pim_SessionCurr() = 0x7EU;

	CmnMfgSrvFct_Decompose16(50U, &DataBuf_Uls_T_u08[0U]);  /* 50ms P2 timeout */
	CmnMfgSrvFct_Decompose16(500U, &DataBuf_Uls_T_u08[2U]); /* 5000ms (5s) P2* timeout */

	return RspCod_Cnt_T_enum;
}
#endif


/* End of File: SrvSession.c */
