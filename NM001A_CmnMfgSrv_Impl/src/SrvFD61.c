/***********************************************************************************************************************
* Copyright 2015 Nexteer
* Nexteer Confidential
*
* Module File Name: SrvFD61.c
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
#include "CmnMfgSrvFct.h"


/* ================================================================================================================== */
/* Service Function Definitions */
/* ------------------------------------------------------------------------------------------------------------------ */

/* ---------------------------------------------------------------------------------------------------------------------
 *        Name:  CmnMfgSrv_SrvFD61Rd
 * Description:  0xFD61: Nexteer Snapshot Data Read
 *          ID:  0xFD61
 *        Type:  0x22 (Read)
 *    Sub-Func:  N/A
 *    Req. Len:  0 bytes
 *   Resp. Len:  176 bytes
 * ------------------------------------------------------------------------------------------------------------------ */
#if (CMNMFGSRV_FD61ENA_CNT_LGC == CMNMFGSRV_ENAD_CNT_LGC)
FUNC(NegRespCodEnum, CmnMfgSrv_CODE) CmnMfgSrv_SrvFD61Rd(VAR(uint8, CmnMfgSrv_VAR) DataBuf_Uls_T_u08[])
{
	VAR(NegRespCodEnum, AUTOMATIC) RespCod_Cnt_T_enum = MFGSRVNRCPOSRSP;
	VAR(Ary1D_SnpshtDataRec1_8, AUTOMATIC) SnshtData_Cnt_T_str;
	VAR(uint8, AUTOMATIC) Idx_Cnt_T_u08;
	VAR(uint8, AUTOMATIC) Offs_Cnt_T_u08;

	if (E_OK == Rte_Call_ReadSnpshtData_Oper(SnshtData_Cnt_T_str))
	{
		for (Idx_Cnt_T_u08 = 0U; Idx_Cnt_T_u08 < 8U; Idx_Cnt_T_u08 += 1U)
		{
			Offs_Cnt_T_u08 = 22U * Idx_Cnt_T_u08;

			CmnMfgSrvFct_Decompose32(SnshtData_Cnt_T_str[Idx_Cnt_T_u08].MicroDiagcData, &DataBuf_Uls_T_u08[Offs_Cnt_T_u08]);
			CmnMfgSrvFct_Decompose16((uint16)SnshtData_Cnt_T_str[Idx_Cnt_T_u08].HwTq, &DataBuf_Uls_T_u08[Offs_Cnt_T_u08 + 4U]);
			CmnMfgSrvFct_Decompose16((uint16)SnshtData_Cnt_T_str[Idx_Cnt_T_u08].MotTq, &DataBuf_Uls_T_u08[Offs_Cnt_T_u08 + 6U]);
			CmnMfgSrvFct_Decompose32(SnshtData_Cnt_T_str[Idx_Cnt_T_u08].IgnCntr, &DataBuf_Uls_T_u08[Offs_Cnt_T_u08 + 8U]);
			CmnMfgSrvFct_Decompose16(SnshtData_Cnt_T_str[Idx_Cnt_T_u08].BrdgVltg, &DataBuf_Uls_T_u08[Offs_Cnt_T_u08 + 12U]);
			CmnMfgSrvFct_Decompose16((uint16)SnshtData_Cnt_T_str[Idx_Cnt_T_u08].EcuT, &DataBuf_Uls_T_u08[Offs_Cnt_T_u08 + 14U]);
			CmnMfgSrvFct_Decompose16(SnshtData_Cnt_T_str[Idx_Cnt_T_u08].NtcNr, &DataBuf_Uls_T_u08[Offs_Cnt_T_u08 + 16U]);
			DataBuf_Uls_T_u08[Offs_Cnt_T_u08 + 18U] = SnshtData_Cnt_T_str[Idx_Cnt_T_u08].NtcStInfo;
			DataBuf_Uls_T_u08[Offs_Cnt_T_u08 + 19U] = (uint8)SnshtData_Cnt_T_str[Idx_Cnt_T_u08].SysSt;
			CmnMfgSrvFct_Decompose16(SnshtData_Cnt_T_str[Idx_Cnt_T_u08].VehSpd, &DataBuf_Uls_T_u08[Offs_Cnt_T_u08 + 20U]);
		}
	}
	else
	{
		RespCod_Cnt_T_enum = MFGSRVNRCCONDITIONSNOTCORRECT;
	}

	return RespCod_Cnt_T_enum;
}
#endif



/* End of File: SrvFD61.c */
