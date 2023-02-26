/***********************************************************************************************************************
* Copyright 2015 Nexteer
* Nexteer Confidential
*
* Module File Name: SrvFDB2.c
* Module Description: 0xFDB2 - Handwheel Torque Sensor 2 Offset Read/Write Trim
* Project           : Common Manufacturing Services
* Author            : Jared Julien
************************************************************************************************************************
* Version Control:
* %version:         1 %
* %derived_by:      kzdyfh %
* ---------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author    Change Description                                                           SCR #
* --------  -------  --------  ---------------------------------------------------------------------------  ----------
* 08/11/15  1        JWJ       Initial file creation                                                        EA4#1332
* 01/26/16  2        JWJ       Updates for newly generated function names                                   EA4#2518
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
 *        Name:  CmnMfgSrv_SrvFDB2Rd
 * Description:  0xFDB2: Handwheel Torque Sensor 2 Trim Read
 *          ID:  0xFDB2
 *        Type:  0x22 (Read)
 *    Sub-Func:  N/A
 *    Req. Len:  0 bytes
 *   Resp. Len:  4 bytes
 * ------------------------------------------------------------------------------------------------------------------ */
#if (CMNMFGSRV_FDB2ENA_CNT_LGC == CMNMFGSRV_ENAD_CNT_LGC)
FUNC(NegRespCodEnum, CmnMfgSrv_CODE) CmnMfgSrv_SrvFDB2Rd(VAR(uint8, CmnMfgSrv_VAR) DataBuf_Uls_T_u08[])
{
	VAR(NegRespCodEnum, AUTOMATIC) RspCod_Cnt_T_enum = MFGSRVNRCPOSRSP;
	VAR(float32, AUTOMATIC) TrimVal_Cnt_T_f32;

	(void)Rte_Call_HwTq2MeasHwTq2ReadTrim_Oper(&TrimVal_Cnt_T_f32);
	CmnMfgSrvFct_DecomposeFloat(TrimVal_Cnt_T_f32, DataBuf_Uls_T_u08);

	return RspCod_Cnt_T_enum;
}
#endif


/* ---------------------------------------------------------------------------------------------------------------------
 *        Name:  CmnMfgSrv_SrvFDB2Wr
 * Description:  0xFDB2: Handwheel Torque Sensor 2 Trim Write
 *          ID:  0xFDB2
 *        Type:  0x2E (Write)
 *    Sub-Func:  N/A
 *    Req. Len:  4 bytes
 *   Resp. Len:  0 bytes
 * ------------------------------------------------------------------------------------------------------------------ */
#if (CMNMFGSRV_FDB2ENA_CNT_LGC == CMNMFGSRV_ENAD_CNT_LGC)
FUNC(NegRespCodEnum, CmnMfgSrv_CODE) CmnMfgSrv_SrvFDB2Wr(VAR(uint8, CmnMfgSrv_VAR) DataBuf_Uls_T_u08[])
{
	VAR(NegRespCodEnum, AUTOMATIC) RspCod_Cnt_T_enum = MFGSRVNRCPOSRSP;
	VAR(float32, AUTOMATIC) TrimVal_Cnt_T_f32;

	TrimVal_Cnt_T_f32 = CmnMfgSrvFct_SynthesizeFloat(DataBuf_Uls_T_u08);
	(void)Rte_Call_HwTq2MeasHwTq2WrTrim_Oper(TrimVal_Cnt_T_f32);

	return RspCod_Cnt_T_enum;
}
#endif


/* End of File: SrvFDB2.c */
