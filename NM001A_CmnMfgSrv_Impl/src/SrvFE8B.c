/***********************************************************************************************************************
* Copyright 2015 Nexteer
* Nexteer Confidential
*
* Module File Name: SrvFE8B.c
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
* 05/02/16  1        JWJ       Initial file creation                                                        EA4#5582
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
 *        Name:  CmnMfgSrv_SrvFE8BRd
 * Description:  0xFE8B: System Friction Learning Output Disable Read
 *          ID:  0xFE8B
 *        Type:  0x22 (Read)
 *    Sub-Func:  N/A
 *    Req. Len:  0 bytes
 *   Resp. Len:  1 byte
 * ------------------------------------------------------------------------------------------------------------------ */
#if (CMNMFGSRV_FE8BENA_CNT_LGC == CMNMFGSRV_ENAD_CNT_LGC)
FUNC(NegRespCodEnum, CmnMfgSrv_CODE) CmnMfgSrv_SrvFE8BRd(VAR(uint8, CmnMfgSrv_VAR) DataBuf_Uls_T_u08[])
{
	VAR(NegRespCodEnum, AUTOMATIC) RespCod_Cnt_T_enum = MFGSRVNRCPOSRSP;
	VAR(boolean, AUTOMATIC) FricOffsOutpDi_Cnt_T_logl;

	(void)Rte_Call_GetFricOffsOutpDi_Oper(&FricOffsOutpDi_Cnt_T_logl);

	DataBuf_Uls_T_u08[0U] = (uint8)FricOffsOutpDi_Cnt_T_logl;

	return RespCod_Cnt_T_enum;
}
#endif

/* ---------------------------------------------------------------------------------------------------------------------
 *        Name:  CmnMfgSrv_SrvFE8BWr
 * Description:  0xFE8B: System Friction Learning Output Disable Write
 *          ID:  0xFE8B
 *        Type:  0x2E (Write)
 *    Sub-Func:  N/A
 *    Req. Len:  1 byte
 *   Resp. Len:  0 bytes
 * ------------------------------------------------------------------------------------------------------------------ */
#if (CMNMFGSRV_FE8BENA_CNT_LGC == CMNMFGSRV_ENAD_CNT_LGC)
FUNC(NegRespCodEnum, CmnMfgSrv_CODE) CmnMfgSrv_SrvFE8BWr(VAR(uint8, CmnMfgSrv_VAR) DataBuf_Uls_T_u08[])
{
	VAR(NegRespCodEnum, AUTOMATIC) RespCod_Cnt_T_enum = MFGSRVNRCPOSRSP;
	VAR(uint8, AUTOMATIC) FricOffsOutpDi_Cnt_T_u08;
	VAR(boolean, AUTOMATIC) FricOffsOutpDi_Cnt_T_logl;

	FricOffsOutpDi_Cnt_T_u08 = DataBuf_Uls_T_u08[0U];

	if (FricOffsOutpDi_Cnt_T_u08 > 1U)
	{
		RespCod_Cnt_T_enum = MFGSRVNRCREQUESTOUTOFRANGE;
	}
	else
	{
		FricOffsOutpDi_Cnt_T_logl = (boolean)FricOffsOutpDi_Cnt_T_u08;

		(void)Rte_Call_SetFricOffsOutpDi_Oper(FricOffsOutpDi_Cnt_T_logl);
	}

	return RespCod_Cnt_T_enum;
}
#endif



/* End of File: SrvFE8B.c */
