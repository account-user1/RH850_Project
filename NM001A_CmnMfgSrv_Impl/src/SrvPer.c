/***********************************************************************************************************************
* Copyright 2015 Nexteer
* Nexteer Confidential
*
* Module File Name: SrvPer.c
* Module Description: Periodic identifier read service support
* Project           : Common Manufacturing Services
* Author            : Jared Julien
************************************************************************************************************************
* Version Control:
* %version:         1 %
* %derived_by:      kzdyfh %
* ---------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author    Change Description                                                           SCR #
* --------  -------  --------  ---------------------------------------------------------------------------  ----------
* 06/09/15  1        JWJ       Initial file creation                                                        EA4#14061
***********************************************************************************************************************/

/* ================================================================================================================== */
/* Includes */
/* ------------------------------------------------------------------------------------------------------------------ */
#include "Rte_CmnMfgSrv.h"
#include "CmnMfgSrv.h"
#include "CmnMfgSrvTyp.h"
#include "CmnMfgSrvFct.h"
#include "MfgSrvCfg.h"


/* ================================================================================================================== */
/* Local Function Prototypes */
/* ------------------------------------------------------------------------------------------------------------------ */
static FUNC(void, CmnMfgSrv_CODE) LoadPidTbl(VAR(uint8, AUTOMATIC) DataBuf_Uls_T_u08[], VAR(uint8, AUTOMATIC) Divider_Cnt_T_u08);



/* ================================================================================================================== */
/* Service Function Definitions */
/* ------------------------------------------------------------------------------------------------------------------ */

/* ---------------------------------------------------------------------------------------------------------------------
 *        Name:  CmnMfgSrv_SrvPerRdFast
 * Description:  0xA201: Start periodic reporting - fast rate
 *          ID:  N/A
 *        Type:  0x2A (Periodic)
 *    Sub-Func:  0x01 (Fast)
 *    Req. Len:  1-16 bytes
 *   Resp. Len:  0 bytes
 * ------------------------------------------------------------------------------------------------------------------ */
FUNC(NegRespCodEnum, CmnMfgSrv_CODE) CmnMfgSrv_SrvPerRdFast(VAR(uint8, CmnMfgSrv_VAR) DataBuf_Uls_T_u08[])
{
	VAR(NegRespCodEnum, AUTOMATIC) RspCod_Cnt_T_enum = MFGSRVNRCPOSRSP;

	if (*Rte_Pim_PerRunng() == FALSE)
	{
		LoadPidTbl(DataBuf_Uls_T_u08, CMNMFGSRVPERDIVDRFAST_CNT_U08);
	}
	else
	{
		RspCod_Cnt_T_enum = MFGSRVNRCCONDITIONSNOTCORRECT;
	}

	return RspCod_Cnt_T_enum;
}

/* ---------------------------------------------------------------------------------------------------------------------
 *        Name:  CmnMfgSrv_SrvPerRdMed
 * Description:  0xA202: Start periodic reporting - medium rate
 *          ID:  N/A
 *        Type:  0x2A (Periodic)
 *    Sub-Func:  0x02 (Medium)
 *    Req. Len:  1-16 bytes
 *   Resp. Len:  0 bytes
 * ------------------------------------------------------------------------------------------------------------------ */
FUNC(NegRespCodEnum, CmnMfgSrv_CODE) CmnMfgSrv_SrvPerRdMed(VAR(uint8, CmnMfgSrv_VAR) DataBuf_Uls_T_u08[])
{
	VAR(NegRespCodEnum, AUTOMATIC) RspCod_Cnt_T_enum = MFGSRVNRCPOSRSP;

	if (*Rte_Pim_PerRunng() == FALSE)
	{
		LoadPidTbl(DataBuf_Uls_T_u08, CMNMFGSRVPERDIVDRMED_CNT_U08);
	}
	else
	{
		RspCod_Cnt_T_enum = MFGSRVNRCCONDITIONSNOTCORRECT;
	}

	return RspCod_Cnt_T_enum;
}

/* ---------------------------------------------------------------------------------------------------------------------
 *        Name:  CmnMfgSrv_SrvPerRdSlow
 * Description:  0xA203: Start periodic reporting - slow rate
 *          ID:  N/A
 *        Type:  0x2A (Periodic)
 *    Sub-Func:  0x03 (Slow)
 *    Req. Len:  1-16 bytes
 *   Resp. Len:  0 bytes
 * ------------------------------------------------------------------------------------------------------------------ */
FUNC(NegRespCodEnum, CmnMfgSrv_CODE) CmnMfgSrv_SrvPerRdSlow(VAR(uint8, CmnMfgSrv_VAR) DataBuf_Uls_T_u08[])
{
	VAR(NegRespCodEnum, AUTOMATIC) RspCod_Cnt_T_enum = MFGSRVNRCPOSRSP;

	if (*Rte_Pim_PerRunng() == FALSE)
	{
		LoadPidTbl(DataBuf_Uls_T_u08, CMNMFGSRVPERDIVDRSLOW_CNT_U08);
	}
	else
	{
		RspCod_Cnt_T_enum = MFGSRVNRCCONDITIONSNOTCORRECT;
	}

	return RspCod_Cnt_T_enum;
}

/* ---------------------------------------------------------------------------------------------------------------------
 *        Name:  CmnMfgSrv_SrvPerRdStop
 * Description:  0xA204: Stop periodic reporting
 *          ID:  N/A
 *        Type:  0x2A (Periodic)
 *    Sub-Func:  0x04 (Stop)
 *    Req. Len:  0 bytes
 *   Resp. Len:  0 bytes
 * ------------------------------------------------------------------------------------------------------------------ */
FUNC(NegRespCodEnum, CmnMfgSrv_CODE) CmnMfgSrv_SrvPerRdStop(VAR(uint8, CmnMfgSrv_VAR) DataBuf_Uls_T_u08[])
{
	VAR(NegRespCodEnum, AUTOMATIC) RspCod_Cnt_T_enum = MFGSRVNRCPOSRSP;

	if (*Rte_Pim_PerRunng() == TRUE)
	{
		*Rte_Pim_PerRunng() = FALSE;
	}
	else
	{
		RspCod_Cnt_T_enum = MFGSRVNRCCONDITIONSNOTCORRECT;
	}

	return RspCod_Cnt_T_enum;
}



/* ================================================================================================================== */
/* Local Function Definitions */
/* ------------------------------------------------------------------------------------------------------------------ */
static FUNC(void, CmnMfgSrv_CODE) LoadPidTbl(VAR(uint8, AUTOMATIC) DataBuf_Uls_T_u08[], VAR(uint8, AUTOMATIC) Divider_Cnt_T_u08)
{
	VAR(uint16, AUTOMATIC) Idx_Cnt_T_u08;

	*Rte_Pim_PerPidTblLen() = 0U;

	for (Idx_Cnt_T_u08 = 0U; ((Idx_Cnt_T_u08 < *Rte_Pim_ReqLen()) && (Idx_Cnt_T_u08 < 16U)); Idx_Cnt_T_u08 += 1U)
	{
		/* Load the table with the identifier for the 0x22 service that would be otherwise used for a one-shot read. */
		Rte_Pim_PerPidTbl()[Idx_Cnt_T_u08] = 0xF200u | (uint16)DataBuf_Uls_T_u08[Idx_Cnt_T_u08];
		*Rte_Pim_PerPidTblLen() += 1U;
	}

	*Rte_Pim_PerDivdr() = Divider_Cnt_T_u08;
	*Rte_Pim_PerCyc() = Divider_Cnt_T_u08;
	*Rte_Pim_PerRunng() = TRUE;
}


/* End of File: SrvPer.c */
