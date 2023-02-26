/***********************************************************************************************************************
* Copyright 2015 Nexteer
* Nexteer Confidential
*
* Module File Name: SrvFE20.c
* Module Description: Service processing
* Project           : Common Manufacturing Services
* Author            : KZDYFH
************************************************************************************************************************
* Version Control:
* %version:         1 %
* %derived_by:      kzdyfh %
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
 *        Name:  CmnMfgSrv_SrvFE20RoutineStrt
 * Description:  0xFE20: Motor Velocity Control Start
 *          ID:  0xFE20
 *        Type:  0x31 (Routine)
 *    Sub-Func:  0x01 (Start)
 *    Req. Len:  8 bytes
 *   Resp. Len:  0 bytes
 * ------------------------------------------------------------------------------------------------------------------ */
#if (CMNMFGSRV_FE20ENA_CNT_LGC == CMNMFGSRV_ENAD_CNT_LGC)
FUNC(NegRespCodEnum, CmnMfgSrv_CODE) CmnMfgSrv_SrvFE20RoutineStrt(VAR(uint8, CmnMfgSrv_VAR) DataBuf_Uls_T_u08[])
{
	VAR(NegRespCodEnum, AUTOMATIC) RespCod_Cnt_T_enum = MFGSRVNRCPOSRSP;
	VAR(float32, AUTOMATIC) MotVelTar_MotRadPerSec_T_f32;
	VAR(float32, AUTOMATIC) VelSlewRate_MotRadPerSecPerSec_T_f32;

	MotVelTar_MotRadPerSec_T_f32 = CmnMfgSrvFct_SynthesizeFloat(&DataBuf_Uls_T_u08[0U]);
	VelSlewRate_MotRadPerSecPerSec_T_f32 = CmnMfgSrvFct_SynthesizeFloat(&DataBuf_Uls_T_u08[4U]);

	(void)Rte_Call_StrtCtrl_Oper(MotVelTar_MotRadPerSec_T_f32, VelSlewRate_MotRadPerSecPerSec_T_f32);

	return RespCod_Cnt_T_enum;
}
#endif

/* ---------------------------------------------------------------------------------------------------------------------
 *        Name:  CmnMfgSrv_SrvFE20RoutineStop
 * Description:  0xFE20: Motor Velocity Control Stop
 *          ID:  0xFE20
 *        Type:  0x31 (Routine)
 *    Sub-Func:  0x02 (Stop)
 *    Req. Len:  4 bytes
 *   Resp. Len:  0 bytes
 * ------------------------------------------------------------------------------------------------------------------ */
#if (CMNMFGSRV_FE20ENA_CNT_LGC == CMNMFGSRV_ENAD_CNT_LGC)
FUNC(NegRespCodEnum, CmnMfgSrv_CODE) CmnMfgSrv_SrvFE20RoutineStop(VAR(uint8, CmnMfgSrv_VAR) DataBuf_Uls_T_u08[])
{
	VAR(NegRespCodEnum, AUTOMATIC) RespCod_Cnt_T_enum = MFGSRVNRCPOSRSP;
	VAR(float32, AUTOMATIC) VelSlewRate_MotRadPerSecPerSec_T_f32;

	VelSlewRate_MotRadPerSecPerSec_T_f32 = CmnMfgSrvFct_SynthesizeFloat(&DataBuf_Uls_T_u08[0U]);

	(void)Rte_Call_StopCtrl_Oper(VelSlewRate_MotRadPerSecPerSec_T_f32);

	return RespCod_Cnt_T_enum;
}
#endif



/* End of File: SrvFE20.c */
