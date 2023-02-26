/***********************************************************************************************************************
* Copyright 2015 Nexteer
* Nexteer Confidential
*
* Module File Name: SrvF200.c
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
* 02/28/17  1        Jared     Initial file creation                                                        EA4#10156
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
 *        Name:  CmnMfgSrv_SrvF200RoutineStrt
 * Description:  0xF200: Micro Diagnostic Fault Injection Start
 *          ID:  0xF200
 *        Type:  0x31 (Routine)
 *    Sub-Func:  0x01 (Start)
 *    Req. Len:  4 bytes
 *   Resp. Len:  0 bytes
 * ------------------------------------------------------------------------------------------------------------------ */
#if (CMNMFGSRV_F200ENA_CNT_LGC == CMNMFGSRV_ENAD_CNT_LGC)
FUNC(NegRespCodEnum, CmnMfgSrv_CODE) CmnMfgSrv_SrvF200RoutineStrt(VAR(uint8, CmnMfgSrv_VAR) DataBuf_Uls_T_u08[])
{
	VAR(NegRespCodEnum, AUTOMATIC) RespCod_Cnt_T_enum = MFGSRVNRCPOSRSP;
	VAR(uint16, AUTOMATIC) NtcNr_Cnt_T_u16;
	VAR(uint8, AUTOMATIC) NtcStInfo_Cnt_T_u08;
	VAR(uint8, AUTOMATIC) ErrInjNr_Cnt_T_u08;

	NtcNr_Cnt_T_u16 = CmnMfgSrvFct_Synthesize16(&DataBuf_Uls_T_u08[0]);
	NtcStInfo_Cnt_T_u08 = DataBuf_Uls_T_u08[2];
	ErrInjNr_Cnt_T_u08 = DataBuf_Uls_T_u08[3];

	if (Rte_Call_UpdErrInjReg_Oper(NtcNr_Cnt_T_u16, NtcStInfo_Cnt_T_u08, ErrInjNr_Cnt_T_u08) != E_OK)
	{
		RespCod_Cnt_T_enum = MFGSRVNRCCONDITIONSNOTCORRECT;
	}

	return RespCod_Cnt_T_enum;
}
#endif



/* End of File: SrvF200.c */
