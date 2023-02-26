/***********************************************************************************************************************
* Copyright 2015 Nexteer
* Nexteer Confidential
*
* Module File Name: SrvFD60.c
* Module Description: 0xFD60 - Nexteer Trouble Codes
* Project           : Common Manufacturing Services
* Author            : Jared Julien
************************************************************************************************************************
* Version Control:
* %version:         4 %
* %derived_by:      kzdyfh %
* ---------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author    Change Description                                                           SCR #
* --------  -------  --------  ---------------------------------------------------------------------------  ----------
* 04/20/15  1        JWJ       Initial file creation                                                        EA4#550
* 06/11/15  2        JWJ       Swapped CMS macro calls for actual parsing functions                         EA4#881
* 09/08/15  3        JWJ       Updated to support record data type in support of DiagcMgr updates           EA4#1533
* 01/26/16  4        JWJ       Updates for newly generated function names                                   EA4#2518
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
 *        Name:  CmnMfgSrv_SrvFD60Rd
 * Description:  0xFD60: Nexteer Trouble Codes Read
 *          ID:  0xFD60
 *        Type:  0x22 (Read)
 *    Sub-Func:  N/A
 *    Req. Len:  0 bytes
 *   Resp. Len:  100 bytes
 * ------------------------------------------------------------------------------------------------------------------ */
#if (CMNMFGSRV_FD60ENA_CNT_LGC == CMNMFGSRV_ENAD_CNT_LGC)
FUNC(NegRespCodEnum, CmnMfgSrv_CODE) CmnMfgSrv_SrvFD60Rd(VAR(uint8, CmnMfgSrv_VAR) DataBuf_Uls_T_u08[])
{
	VAR(NegRespCodEnum, AUTOMATIC) RspCod_Cnt_T_enum = MFGSRVNRCPOSRSP;
	VAR(ReadFltInfoRec1, AUTOMATIC) DiagcMgrNtcFltAry_Cnt_T_str[20U];
	VAR(uint8, AUTOMATIC) Idx_Cnt_T_u08;
	VAR(uint8, AUTOMATIC) Offset_Cnt_T_u08;

	if (E_OK == Rte_Call_ReadNtcFltAry_Oper(DiagcMgrNtcFltAry_Cnt_T_str))
	{
		for (Idx_Cnt_T_u08 = 0U; Idx_Cnt_T_u08 < 20U; Idx_Cnt_T_u08 += 1U)
		{
			Offset_Cnt_T_u08 = Idx_Cnt_T_u08 * 5U;
			CmnMfgSrvFct_Decompose16(
					(uint16)DiagcMgrNtcFltAry_Cnt_T_str[Idx_Cnt_T_u08].NtcNr,
					&DataBuf_Uls_T_u08[Offset_Cnt_T_u08]
			);
			DataBuf_Uls_T_u08[Offset_Cnt_T_u08 + 2U] = DiagcMgrNtcFltAry_Cnt_T_str[Idx_Cnt_T_u08].AgiCntr;
			DataBuf_Uls_T_u08[Offset_Cnt_T_u08 + 3U] = DiagcMgrNtcFltAry_Cnt_T_str[Idx_Cnt_T_u08].Sts;
			DataBuf_Uls_T_u08[Offset_Cnt_T_u08 + 4U] = DiagcMgrNtcFltAry_Cnt_T_str[Idx_Cnt_T_u08].NtcStInfo;
		}
	}
	else
	{
		RspCod_Cnt_T_enum = MFGSRVNRCCONDITIONSNOTCORRECT;
	}

	return RspCod_Cnt_T_enum;
}
#endif


/* ================================================================================================================== */
/* Non-Trusted Function Calls */
/* ------------------------------------------------------------------------------------------------------------------ */
/* None */


/* End of File: SrvFD60.c */
