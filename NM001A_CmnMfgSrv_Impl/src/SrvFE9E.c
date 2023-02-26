/***********************************************************************************************************************
* Copyright 2015 Nexteer
* Nexteer Confidential
*
* Module File Name: SrvFE9E.c
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
* 03/23/16  1        JWJ       Initial file creation                                                        EA4#4909
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
 *        Name:  CmnMfgSrv_SrvFE9ERd
 * Description:  0xFE9E: Yaw Rate Learned Offset Read
 *          ID:  0xFE9E
 *        Type:  0x22 (Read)
 *    Sub-Func:  N/A
 *    Req. Len:  0 bytes
 *   Resp. Len:  5 bytes
 * ------------------------------------------------------------------------------------------------------------------ */
#if (CMNMFGSRV_FE9EENA_CNT_LGC == CMNMFGSRV_ENAD_CNT_LGC)
FUNC(NegRespCodEnum, CmnMfgSrv_CODE) CmnMfgSrv_SrvFE9ERd(VAR(uint8, CmnMfgSrv_VAR) DataBuf_Uls_T_u08[])
{
	VAR(NegRespCodEnum, AUTOMATIC) RespCod_Cnt_T_enum = MFGSRVNRCPOSRSP;
	VAR(float32, AUTOMATIC) YawRateOffs_HwDeg_T_f32;
	VAR(boolean, AUTOMATIC) LrngStRst_Cnt_T_logl;

	(void)Rte_Call_GetYawRateOffs_Oper(&YawRateOffs_HwDeg_T_f32, &LrngStRst_Cnt_T_logl);

	CmnMfgSrvFct_DecomposeFloat(YawRateOffs_HwDeg_T_f32, &DataBuf_Uls_T_u08[0U]);
	DataBuf_Uls_T_u08[4U] = (uint8)LrngStRst_Cnt_T_logl;

	return RespCod_Cnt_T_enum;
}
#endif

/* ---------------------------------------------------------------------------------------------------------------------
 *        Name:  CmnMfgSrv_SrvFE9EWr
 * Description:  0xFE9E: Yaw Rate Learned Offset Write
 *          ID:  0xFE9E
 *        Type:  0x2E (Write)
 *    Sub-Func:  N/A
 *    Req. Len:  5 bytes
 *   Resp. Len:  0 bytes
 * ------------------------------------------------------------------------------------------------------------------ */
#if (CMNMFGSRV_FE9EENA_CNT_LGC == CMNMFGSRV_ENAD_CNT_LGC)
FUNC(NegRespCodEnum, CmnMfgSrv_CODE) CmnMfgSrv_SrvFE9EWr(VAR(uint8, CmnMfgSrv_VAR) DataBuf_Uls_T_u08[])
{
	VAR(NegRespCodEnum, AUTOMATIC) RespCod_Cnt_T_enum = MFGSRVNRCPOSRSP;
	VAR(float32, AUTOMATIC) YawRateOffs_HwDeg_T_f32;
	VAR(boolean, AUTOMATIC) LrngStRst_Cnt_T_logl;

	YawRateOffs_HwDeg_T_f32 = CmnMfgSrvFct_SynthesizeFloat(&DataBuf_Uls_T_u08[0U]);
	LrngStRst_Cnt_T_logl = (boolean)DataBuf_Uls_T_u08[4U];

	(void)Rte_Call_SetYawRateOffs_Oper(YawRateOffs_HwDeg_T_f32, LrngStRst_Cnt_T_logl);

	return RespCod_Cnt_T_enum;
}
#endif



/* End of File: SrvFE9E.c */
