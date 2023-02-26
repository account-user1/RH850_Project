/***********************************************************************************************************************
* Copyright 2015 Nexteer
* Nexteer Confidential
*
* Module File Name: SrvFD06.c
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
* 07/13/16  1        JWJ       Initial file creation                                                        EA4#6219
***********************************************************************************************************************/

/* ================================================================================================================== */
/* Includes */
/* ------------------------------------------------------------------------------------------------------------------ */
#include "Rte_CmnMfgSrv.h"
#include "CmnMfgSrv.h"
#include "CmnMfgSrvTyp.h"
#include "MfgSrvCfg.h"


/* ================================================================================================================== */
/* Service Function Definitions */
/* ------------------------------------------------------------------------------------------------------------------ */

/* ---------------------------------------------------------------------------------------------------------------------
 *        Name:  CmnMfgSrv_SrvFD06Rd
 * Description:  0xFD06: Nexteer Seed/Key Write Performed Read
 *          ID:  0xFD06
 *        Type:  0x22 (Read)
 *    Sub-Func:  N/A
 *    Req. Len:  0 bytes
 *   Resp. Len:  1 byte
 * ------------------------------------------------------------------------------------------------------------------ */
#if (CMNMFGSRV_FD06ENA_CNT_LGC == CMNMFGSRV_ENAD_CNT_LGC)
FUNC(NegRespCodEnum, CmnMfgSrv_CODE) CmnMfgSrv_SrvFD06Rd(VAR(uint8, CmnMfgSrv_VAR) DataBuf_Uls_T_u08[])
{
	VAR(NegRespCodEnum, AUTOMATIC) RespCod_Cnt_T_enum = MFGSRVNRCPOSRSP;
	VAR(NvM_RequestResultType, AUTOMATIC) Sts_Cnt_T_enum;
	VAR(boolean, AUTOMATIC) WrPrfmd_Cnt_T_logl;

	(void)Rte_Call_NvmSeedKey_GetErrorStatus(&Sts_Cnt_T_enum);

	WrPrfmd_Cnt_T_logl = (Sts_Cnt_T_enum == NVM_REQ_OK) ? TRUE : FALSE;

	DataBuf_Uls_T_u08[0U] = (uint8)WrPrfmd_Cnt_T_logl;

	return RespCod_Cnt_T_enum;
}
#endif



/* End of File: SrvFD06.c */
