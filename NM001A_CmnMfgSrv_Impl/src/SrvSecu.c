/***********************************************************************************************************************
* Copyright 2015 Nexteer
* Nexteer Confidential
*
* Module File Name: SrvSecu.c
* Module Description: Service processing
* Project           : Common Manufacturing Services
* Author            : Jared Julien
************************************************************************************************************************
* Version Control:
* %version:         2 %
* %derived_by:      kzdyfh %
* ---------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author    Change Description                                                           SCR #
* --------  -------  --------  ---------------------------------------------------------------------------  ----------
* 07/13/16  1        JWJ       Initial file creation                                                        EA4#6219
* 07/18/16  2        JWJ       Corrected the NRC for invalid key                                            EA4#6651
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
 *        Name:  CmnMfgSrv_SrvSecuSeed
 * Description:  0x61: Nexteer Seed Request
 *          ID:  N/A
 *        Type:  0x27 (Security)
 *    Sub-Func:  0x61 (Seed)
 *    Req. Len:  0 bytes
 *   Resp. Len:  4 bytes
 * ------------------------------------------------------------------------------------------------------------------ */
#if (CMNMFGSRV_2761ENA_CNT_LGC == CMNMFGSRV_ENAD_CNT_LGC)
FUNC(NegRespCodEnum, CmnMfgSrv_CODE) CmnMfgSrv_SrvSecuSeed(VAR(uint8, CmnMfgSrv_VAR) DataBuf_Uls_T_u08[])
{
	VAR(NegRespCodEnum, AUTOMATIC) RespCod_Cnt_T_enum = MFGSRVNRCPOSRSP;
	VAR(uint32, AUTOMATIC) ElpdTi_100MicroSec_T_u32;
	VAR(uint32, AUTOMATIC) ElpdTi_MilliSec_T_u32;

	*Rte_Pim_SecuAcsSeedReqCmpl() = FALSE;

	if (*Rte_Pim_SecuAcsUnlckd() == TRUE)
	{
		/* Already unlocked, return zeros for the seed */
		CmnMfgSrvFct_Decompose32(0U, &DataBuf_Uls_T_u08[0U]);
	}
	else
	{
		(void)Rte_Call_GetTiSpan100MicroSec32bit1_Oper(*Rte_Pim_SecuAcsAtmptTmr(), &ElpdTi_100MicroSec_T_u32);
		ElpdTi_MilliSec_T_u32 = ElpdTi_100MicroSec_T_u32 / 10U;

		if (*Rte_Pim_SecuAcsAtmptCntr() >= Rte_Prm_CmnMfgSrvSecuAcsMaxNrAtmpt_Val())
		{
			/* Number of failed attempts are limited, after which the used is not allowed to access the system without
			 * cycling ignition and waiting for one timeout period */
			RespCod_Cnt_T_enum = MFGSRVNRCEXCEEDEDNUMOFATTEMPTS;
		}
		else if (ElpdTi_MilliSec_T_u32 < Rte_Prm_CmnMfgSrvSecuAcsAtmptTiOut_Val())
		{
			/* Security access is not allowed for some time after start up as well as after each failed key attempt */
			RespCod_Cnt_T_enum = MFGSRVNRCTIMEDELAYNOTEXPIRED;
		}
		else
		{
			/* Everything checks out, provide the seed */
			CmnMfgSrvFct_Decompose32(Rte_Pim_SeedKey()[0U], &DataBuf_Uls_T_u08[0U]);
			*Rte_Pim_SecuAcsSeedReqCmpl() = TRUE;
		}
	}

	return RespCod_Cnt_T_enum;
}
#endif

/* ---------------------------------------------------------------------------------------------------------------------
 *        Name:  CmnMfgSrv_SrvSecuKey
 * Description:  0x62: Nexteer Key Send
 *          ID:  N/A
 *        Type:  0x27 (Security)
 *    Sub-Func:  0x62 (Key)
 *    Req. Len:  4 bytes
 *   Resp. Len:  0 bytes
 * ------------------------------------------------------------------------------------------------------------------ */
#if (CMNMFGSRV_2762ENA_CNT_LGC == CMNMFGSRV_ENAD_CNT_LGC)
FUNC(NegRespCodEnum, CmnMfgSrv_CODE) CmnMfgSrv_SrvSecuKey(VAR(uint8, CmnMfgSrv_VAR) DataBuf_Uls_T_u08[])
{
	VAR(NegRespCodEnum, AUTOMATIC) RespCod_Cnt_T_enum = MFGSRVNRCPOSRSP;
	VAR(uint32, AUTOMATIC) Key_Cnt_T_u32;

	if (*Rte_Pim_SecuAcsSeedReqCmpl() == TRUE)
	{
		*Rte_Pim_SecuAcsSeedReqCmpl() = FALSE;

		Key_Cnt_T_u32 = CmnMfgSrvFct_Synthesize32(&DataBuf_Uls_T_u08[0U]);
		if (Key_Cnt_T_u32 == Rte_Pim_SeedKey()[1U])
		{
			/* Match, unlock the controller and give a positive response */
			*Rte_Pim_SecuAcsUnlckd() = TRUE;
		}
		else
		{
			/* No match, user must try again */
			RespCod_Cnt_T_enum = MFGSRVNRCINVALIDKEY;

			/* They are limited in their attempts (counter is only reset by an ignition cycle) */
			if (*Rte_Pim_SecuAcsAtmptCntr() < 255U)
			{
				*Rte_Pim_SecuAcsAtmptCntr() += 1U;
			}

			/* And they must wait a defined period of time before they may re-attempt */
			(void)Rte_Call_GetRefTmr100MicroSec32bit1_Oper(Rte_Pim_SecuAcsAtmptTmr());
		}
	}
	else
	{
		/* Must request the seed before attempting to use the key */
		RespCod_Cnt_T_enum = MFGSRVNRCREQSEQUENCERROR;
	}

	return RespCod_Cnt_T_enum;
}
#endif



/* End of File: SrvSecu.c */
