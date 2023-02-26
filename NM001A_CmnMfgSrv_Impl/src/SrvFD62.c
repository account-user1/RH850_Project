/***********************************************************************************************************************
* Copyright 2015 Nexteer
* Nexteer Confidential
*
* Module File Name: SrvFD62.c
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
* 11/17/17  1        JWJ       Initial file creation                                                        EA4#17640
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
 *        Name:  CmnMfgSrv_SrvFD62Rd
 * Description:  0xFD62: Nexteer Extended Snapshot Data Read
 *          ID:  0xFD62
 *        Type:  0x22 (Read)
 *    Sub-Func:  N/A
 *    Req. Len:  0 bytes
 *   Resp. Len:  256 bytes
 * ------------------------------------------------------------------------------------------------------------------ */
#if (CMNMFGSRV_FD62ENA_CNT_LGC == CMNMFGSRV_ENAD_CNT_LGC)
FUNC(NegRespCodEnum, CmnMfgSrv_CODE) CmnMfgSrv_SrvFD62Rd(VAR(uint8, CmnMfgSrv_VAR) DataBuf_Uls_T_u08[])
{
	VAR(NegRespCodEnum, AUTOMATIC) RespCod_Cnt_T_enum = MFGSRVNRCPOSRSP;
	VAR(Ary1D_SnpshtDataRec2_8, AUTOMATIC) SnshtData_Cnt_T_str;
	VAR(uint8, AUTOMATIC) Idx_Cnt_T_u08;
	VAR(uint8, AUTOMATIC) Offs_Cnt_T_u08;

	if (E_OK == Rte_Call_ReadExtdSnpshtData_Oper(SnshtData_Cnt_T_str))
	{
		for (Idx_Cnt_T_u08 = 0U; Idx_Cnt_T_u08 < 8U; Idx_Cnt_T_u08 += 1U)
		{
			Offs_Cnt_T_u08 = 32U * Idx_Cnt_T_u08;

			CmnMfgSrvFct_Decompose32(SnshtData_Cnt_T_str[Idx_Cnt_T_u08].SpclSnpshtData0, &DataBuf_Uls_T_u08[Offs_Cnt_T_u08]);
			CmnMfgSrvFct_Decompose32(SnshtData_Cnt_T_str[Idx_Cnt_T_u08].SpclSnpshtData1, &DataBuf_Uls_T_u08[Offs_Cnt_T_u08 + 4U]);
			CmnMfgSrvFct_Decompose32(SnshtData_Cnt_T_str[Idx_Cnt_T_u08].SpclSnpshtData2, &DataBuf_Uls_T_u08[Offs_Cnt_T_u08 + 8U]);
			CmnMfgSrvFct_Decompose32(SnshtData_Cnt_T_str[Idx_Cnt_T_u08].MicroDiagcData, &DataBuf_Uls_T_u08[Offs_Cnt_T_u08 + 12U]);
			CmnMfgSrvFct_Decompose32(SnshtData_Cnt_T_str[Idx_Cnt_T_u08].IgnCntr, &DataBuf_Uls_T_u08[Offs_Cnt_T_u08 + 16U]);
			CmnMfgSrvFct_Decompose16((uint16)SnshtData_Cnt_T_str[Idx_Cnt_T_u08].HwTq, &DataBuf_Uls_T_u08[Offs_Cnt_T_u08 + 20U]);
			CmnMfgSrvFct_Decompose16((uint16)SnshtData_Cnt_T_str[Idx_Cnt_T_u08].MotTq, &DataBuf_Uls_T_u08[Offs_Cnt_T_u08 + 22U]);
			CmnMfgSrvFct_Decompose16(SnshtData_Cnt_T_str[Idx_Cnt_T_u08].BrdgVltg, &DataBuf_Uls_T_u08[Offs_Cnt_T_u08 + 24U]);
			CmnMfgSrvFct_Decompose16((uint16)SnshtData_Cnt_T_str[Idx_Cnt_T_u08].EcuT, &DataBuf_Uls_T_u08[Offs_Cnt_T_u08 + 26U]);
			CmnMfgSrvFct_Decompose16(SnshtData_Cnt_T_str[Idx_Cnt_T_u08].NtcNr, &DataBuf_Uls_T_u08[Offs_Cnt_T_u08 + 28U]);
			DataBuf_Uls_T_u08[Offs_Cnt_T_u08 + 30U] = SnshtData_Cnt_T_str[Idx_Cnt_T_u08].NtcStInfo;
			DataBuf_Uls_T_u08[Offs_Cnt_T_u08 + 31U] = (uint8)SnshtData_Cnt_T_str[Idx_Cnt_T_u08].SysSt;
		}
	}
	else
	{
		RespCod_Cnt_T_enum = MFGSRVNRCCONDITIONSNOTCORRECT;
	}

	return RespCod_Cnt_T_enum;
}
#endif



/* End of File: SrvFD62.c */
