/***********************************************************************************************************************
* Copyright 2015 Nexteer
* Nexteer Confidential
*
* Module File Name: SrvF23E.c
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
* 07/22/17  1        JWJ       Initial file creation                                                        EA4#14061
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
 *        Name:  CmnMfgSrv_SrvF23ERd
 * Description:  0x3E: Motor Angle Send once
 *          ID:  0xF23E
 *        Type:  0x22 (Read)
 *    Sub-Func:  N/A
 *    Req. Len:  0 bytes
 *   Resp. Len:  2 bytes
 * ------------------------------------------------------------------------------------------------------------------ */
#if (CMNMFGSRV_F23EENA_CNT_LGC == CMNMFGSRV_ENAD_CNT_LGC)
FUNC(NegRespCodEnum, CmnMfgSrv_CODE) CmnMfgSrv_SrvF23ERd(VAR(uint8, CmnMfgSrv_VAR) DataBuf_Uls_T_u08[])
{
	VAR(NegRespCodEnum, AUTOMATIC) RspCod_Cnt_T_enum = MFGSRVNRCPOSRSP;
	VAR(uint16, AUTOMATIC) MotAg_MotRev_T_u0p16 = 0U;

	(void)Rte_Read_MotAgMecl_Val(&MotAg_MotRev_T_u0p16);

	CmnMfgSrvFct_Decompose16(MotAg_MotRev_T_u0p16, DataBuf_Uls_T_u08);

	return RspCod_Cnt_T_enum;
}
#endif



/* End of File: SrvF23E.c */
