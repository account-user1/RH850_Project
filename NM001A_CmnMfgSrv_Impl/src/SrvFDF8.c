/***********************************************************************************************************************
* Copyright 2015 Nexteer
* Nexteer Confidential
*
* Module File Name: SrvFDF8.c
* Module Description: 0xFDF8 - Motor Parameter (Ke / R) Read/Write
* Project           : Common Manufacturing Services
* Author            : Jared Julien
************************************************************************************************************************
* Version Control:
* %version:         1 %
* %derived_by:      kzdyfh %
* ---------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author    Change Description                                                           SCR #
* --------  -------  --------  ---------------------------------------------------------------------------  ----------
* 07/02/15  1        JWJ       Initial file creation                                                        EA4#881
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
 *        Name:  CmnMfgSrv_SrvFDF8Rd
 * Description:  0xFDF8: Ke & R Read
 *          ID:  0xFDF8
 *        Type:  0x22 (Read)
 *    Sub-Func:  N/A
 *    Req. Len:  0 bytes
 *   Resp. Len:  8 bytes
 * ------------------------------------------------------------------------------------------------------------------ */
#if (CMNMFGSRV_FDF8ENA_CNT_LGC == CMNMFGSRV_ENAD_CNT_LGC)
FUNC(NegRespCodEnum, CmnMfgSrv_CODE) CmnMfgSrv_SrvFDF8Rd(VAR(uint8, CmnMfgSrv_VAR) DataBuf_Uls_T_u08[])
{
	VAR(NegRespCodEnum, AUTOMATIC) RspCod_Cnt_T_enum = MFGSRVNRCPOSRSP;
	VAR(float32, AUTOMATIC) MotKeNom_Cnt_T_f32;
	VAR(float32, AUTOMATIC) MotRNom_Cnt_T_f32;

	(void)Rte_Call_GetMotPrmNomEol_Oper(&MotKeNom_Cnt_T_f32, &MotRNom_Cnt_T_f32);

	CmnMfgSrvFct_DecomposeFloat(MotKeNom_Cnt_T_f32, &DataBuf_Uls_T_u08[0U]);
	CmnMfgSrvFct_DecomposeFloat(MotRNom_Cnt_T_f32, &DataBuf_Uls_T_u08[4U]);

	return RspCod_Cnt_T_enum;
}
#endif

/* ---------------------------------------------------------------------------------------------------------------------
 *        Name:  CmnMfgSrv_SrvFDF8Wr
 * Description:  0xFDF8: Ke & R Write
 *          ID:  0xFDF8
 *        Type:  0x2E (Write)
 *    Sub-Func:  N/A
 *    Req. Len:  8 bytes
 *   Resp. Len:  0 bytes
 * ------------------------------------------------------------------------------------------------------------------ */
#if (CMNMFGSRV_FDF8ENA_CNT_LGC == CMNMFGSRV_ENAD_CNT_LGC)
FUNC(NegRespCodEnum, CmnMfgSrv_CODE) CmnMfgSrv_SrvFDF8Wr(VAR(uint8, CmnMfgSrv_VAR) DataBuf_Uls_T_u08[])
{
	VAR(NegRespCodEnum, AUTOMATIC) RspCod_Cnt_T_enum = MFGSRVNRCPOSRSP;
	VAR(float32, AUTOMATIC) MotKeNom_Cnt_T_f32;
	VAR(float32, AUTOMATIC) MotRNom_Cnt_T_f32;

	MotKeNom_Cnt_T_f32 = CmnMfgSrvFct_SynthesizeFloat(&DataBuf_Uls_T_u08[0U]);
	MotRNom_Cnt_T_f32 = CmnMfgSrvFct_SynthesizeFloat(&DataBuf_Uls_T_u08[4U]);

	(void)Rte_Call_SetMotPrmNomEol_Oper(MotKeNom_Cnt_T_f32, MotRNom_Cnt_T_f32);

	return RspCod_Cnt_T_enum;
}
#endif


/* End of File: SrvFDF8.c */
