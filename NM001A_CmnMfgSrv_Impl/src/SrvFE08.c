/***********************************************************************************************************************
* Copyright 2015 Nexteer
* Nexteer Confidential
*
* Module File Name: SrvFE08.c
* Module Description: Service processing
* Project           : Common Manufacturing Services
* Author            : KZDYFH
************************************************************************************************************************
* Version Control:
* %version:         1 %
* %derived_by:      kzdyfh KZDYFH %
* ---------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author    Change Description                                                           SCR #
* --------  -------  --------  ---------------------------------------------------------------------------  ----------
* 02/24/16  1        KZDYFH    Initial file creation                                                        EA4#2585
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
 *        Name:  CmnMfgSrv_SrvFE08Rd
 * Description:  0xFE08: Motor Ripple Cogging Parameters Read
 *          ID:  0xFE08
 *        Type:  0x22 (Read)
 *    Sub-Func:  N/A
 *    Req. Len:  0 bytes
 *   Resp. Len:  18 bytes
 * ------------------------------------------------------------------------------------------------------------------ */
#if (CMNMFGSRV_FE08ENA_CNT_LGC == CMNMFGSRV_ENAD_CNT_LGC)
FUNC(NegRespCodEnum, CmnMfgSrv_CODE) CmnMfgSrv_SrvFE08Rd(VAR(uint8, CmnMfgSrv_VAR) DataBuf_Uls_T_u08[])
{
	VAR(NegRespCodEnum, AUTOMATIC) RespCod_Cnt_T_enum = MFGSRVNRCPOSRSP;
	VAR(uint16, AUTOMATIC) CoggOrder1_Cnt_T_u16;
	VAR(s1p14, AUTOMATIC) CoggOrder1X_Cnt_T_s1p14;
	VAR(s1p14, AUTOMATIC) CoggOrder1Y_Cnt_T_s1p14;
	VAR(uint16, AUTOMATIC) CoggOrder2_Cnt_T_u16;
	VAR(s1p14, AUTOMATIC) CoggOrder2X_Cnt_T_s1p14;
	VAR(s1p14, AUTOMATIC) CoggOrder2Y_Cnt_T_s1p14;
	VAR(uint16, AUTOMATIC) CoggOrder3_Cnt_T_u16;
	VAR(s1p14, AUTOMATIC) CoggOrder3X_Cnt_T_s1p14;
	VAR(s1p14, AUTOMATIC) CoggOrder3Y_Cnt_T_s1p14;

	(void)Rte_Call_GetMotRplCoggPrm_Oper(
			&CoggOrder1_Cnt_T_u16,
			&CoggOrder1X_Cnt_T_s1p14,
			&CoggOrder1Y_Cnt_T_s1p14,
			&CoggOrder2_Cnt_T_u16,
			&CoggOrder2X_Cnt_T_s1p14,
			&CoggOrder2Y_Cnt_T_s1p14,
			&CoggOrder3_Cnt_T_u16,
			&CoggOrder3X_Cnt_T_s1p14,
			&CoggOrder3Y_Cnt_T_s1p14
	);

	CmnMfgSrvFct_Decompose16(CoggOrder1_Cnt_T_u16, &DataBuf_Uls_T_u08[0U]);
	CmnMfgSrvFct_Decompose16((uint16)CoggOrder1X_Cnt_T_s1p14, &DataBuf_Uls_T_u08[2U]);
	CmnMfgSrvFct_Decompose16((uint16)CoggOrder1Y_Cnt_T_s1p14, &DataBuf_Uls_T_u08[4U]);
	CmnMfgSrvFct_Decompose16(CoggOrder2_Cnt_T_u16, &DataBuf_Uls_T_u08[6U]);
	CmnMfgSrvFct_Decompose16((uint16)CoggOrder2X_Cnt_T_s1p14, &DataBuf_Uls_T_u08[8U]);
	CmnMfgSrvFct_Decompose16((uint16)CoggOrder2Y_Cnt_T_s1p14, &DataBuf_Uls_T_u08[10U]);
	CmnMfgSrvFct_Decompose16(CoggOrder3_Cnt_T_u16, &DataBuf_Uls_T_u08[12U]);
	CmnMfgSrvFct_Decompose16((uint16)CoggOrder3X_Cnt_T_s1p14, &DataBuf_Uls_T_u08[14U]);
	CmnMfgSrvFct_Decompose16((uint16)CoggOrder3Y_Cnt_T_s1p14, &DataBuf_Uls_T_u08[16U]);

	return RespCod_Cnt_T_enum;
}
#endif

/* ---------------------------------------------------------------------------------------------------------------------
 *        Name:  CmnMfgSrv_SrvFE08Wr
 * Description:  0xFE08: Motor Ripple Cogging Parameters Write
 *          ID:  0xFE08
 *        Type:  0x2E (Write)
 *    Sub-Func:  N/A
 *    Req. Len:  18 bytes
 *   Resp. Len:  0 bytes
 * ------------------------------------------------------------------------------------------------------------------ */
#if (CMNMFGSRV_FE08ENA_CNT_LGC == CMNMFGSRV_ENAD_CNT_LGC)
FUNC(NegRespCodEnum, CmnMfgSrv_CODE) CmnMfgSrv_SrvFE08Wr(VAR(uint8, CmnMfgSrv_VAR) DataBuf_Uls_T_u08[])
{
	VAR(NegRespCodEnum, AUTOMATIC) RespCod_Cnt_T_enum = MFGSRVNRCPOSRSP;
	VAR(uint16, AUTOMATIC) CoggOrder1_Cnt_T_u16;
	VAR(s1p14, AUTOMATIC) CoggOrder1X_Cnt_T_s1p14;
	VAR(s1p14, AUTOMATIC) CoggOrder1Y_Cnt_T_s1p14;
	VAR(uint16, AUTOMATIC) CoggOrder2_Cnt_T_u16;
	VAR(s1p14, AUTOMATIC) CoggOrder2X_Cnt_T_s1p14;
	VAR(s1p14, AUTOMATIC) CoggOrder2Y_Cnt_T_s1p14;
	VAR(uint16, AUTOMATIC) CoggOrder3_Cnt_T_u16;
	VAR(s1p14, AUTOMATIC) CoggOrder3X_Cnt_T_s1p14;
	VAR(s1p14, AUTOMATIC) CoggOrder3Y_Cnt_T_s1p14;

	CoggOrder1_Cnt_T_u16 = CmnMfgSrvFct_Synthesize16(&DataBuf_Uls_T_u08[0U]);
	CoggOrder1X_Cnt_T_s1p14 = (s1p14)CmnMfgSrvFct_Synthesize16(&DataBuf_Uls_T_u08[2U]);
	CoggOrder1Y_Cnt_T_s1p14 = (s1p14)CmnMfgSrvFct_Synthesize16(&DataBuf_Uls_T_u08[4U]);
	CoggOrder2_Cnt_T_u16 = CmnMfgSrvFct_Synthesize16(&DataBuf_Uls_T_u08[6U]);
	CoggOrder2X_Cnt_T_s1p14 = (s1p14)CmnMfgSrvFct_Synthesize16(&DataBuf_Uls_T_u08[8U]);
	CoggOrder2Y_Cnt_T_s1p14 = (s1p14)CmnMfgSrvFct_Synthesize16(&DataBuf_Uls_T_u08[10U]);
	CoggOrder3_Cnt_T_u16 = CmnMfgSrvFct_Synthesize16(&DataBuf_Uls_T_u08[12U]);
	CoggOrder3X_Cnt_T_s1p14 = (s1p14)CmnMfgSrvFct_Synthesize16(&DataBuf_Uls_T_u08[14U]);
	CoggOrder3Y_Cnt_T_s1p14 = (s1p14)CmnMfgSrvFct_Synthesize16(&DataBuf_Uls_T_u08[16U]);

	(void)Rte_Call_SetMotRplCoggPrm_Oper(
			CoggOrder1_Cnt_T_u16,
			CoggOrder1X_Cnt_T_s1p14,
			CoggOrder1Y_Cnt_T_s1p14,
			CoggOrder2_Cnt_T_u16,
			CoggOrder2X_Cnt_T_s1p14,
			CoggOrder2Y_Cnt_T_s1p14,
			CoggOrder3_Cnt_T_u16,
			CoggOrder3X_Cnt_T_s1p14,
			CoggOrder3Y_Cnt_T_s1p14
	);

	return RespCod_Cnt_T_enum;
}
#endif



/* End of File: SrvFE08.c */
