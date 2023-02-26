/***********************************************************************************************************************
* Copyright 2015 Nexteer
* Nexteer Confidential
*
* Module File Name: SrvFD42.c
* Module Description: 0xFD42 - Vehicle Speed Override
* Project           : Common Manufacturing Services
* Author            : Jared Julien
************************************************************************************************************************
* Version Control:
* %version:         3 %
* %derived_by:      kzdyfh %
* ---------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author    Change Description                                                           SCR #
* --------  -------  --------  ---------------------------------------------------------------------------  ----------
* 09/10/15  1        JWJ       Initial file creation                                                        EA4#2034
* 01/26/16  2        JWJ       Updates for newly generated function names                                   EA4#2518
* 07/24/17  3        JWJ       Added a read service after updating to new UDS template in CANdela           EA4#14061
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
 *        Name:  CmnMfgSrv_SrvFD42CtrlRtn
 * Description:  0xFD42: Vehicle Speed Override Return Control
 *          ID:  0xFD42
 *        Type:  0x2F (Control)
 *    Sub-Func:  0x00 (Return)
 *    Req. Len:  0 bytes
 *   Resp. Len:  4 bytes
 * ------------------------------------------------------------------------------------------------------------------ */
#if (CMNMFGSRV_FD42ENA_CNT_LGC == CMNMFGSRV_ENAD_CNT_LGC)
FUNC(NegRespCodEnum, CmnMfgSrv_CODE) CmnMfgSrv_SrvFD42CtrlRtn(VAR(uint8, CmnMfgSrv_VAR) DataBuf_Uls_T_u08[])
{
	VAR(NegRespCodEnum, AUTOMATIC) RespCod_Cnt_T_enum = MFGSRVNRCPOSRSP;

	*Rte_Pim_InpOutpCtrlVehSpdOvrd() = 0.0f;
	(void)Rte_Write_VehSpdOvrd_Val(*Rte_Pim_InpOutpCtrlVehSpdOvrd());
	(void)Rte_Write_VehSpdOvrdEna_Logl(FALSE);

	return RespCod_Cnt_T_enum;
}
#endif

/* ---------------------------------------------------------------------------------------------------------------------
 *        Name:  CmnMfgSrv_SrvFD42CtrlAdj
 * Description:  0xFD42: Vehicle Speed Override Set
 *          ID:  0xFD42
 *        Type:  0x2F (Control)
 *    Sub-Func:  0x03 (Adjust)
 *    Req. Len:  4 bytes
 *   Resp. Len:  4 bytes
 * ------------------------------------------------------------------------------------------------------------------ */
#if (CMNMFGSRV_FD42ENA_CNT_LGC == CMNMFGSRV_ENAD_CNT_LGC)
FUNC(NegRespCodEnum, CmnMfgSrv_CODE) CmnMfgSrv_SrvFD42CtrlAdj(VAR(uint8, CmnMfgSrv_VAR) DataBuf_Uls_T_u08[])
{
	VAR(NegRespCodEnum, AUTOMATIC) RespCod_Cnt_T_enum = MFGSRVNRCPOSRSP;

	*Rte_Pim_InpOutpCtrlVehSpdOvrd() = CmnMfgSrvFct_SynthesizeFloat(&DataBuf_Uls_T_u08[0U]);

	(void)Rte_Write_VehSpdOvrd_Val(*Rte_Pim_InpOutpCtrlVehSpdOvrd());
	(void)Rte_Write_VehSpdOvrdEna_Logl(TRUE);

	return RespCod_Cnt_T_enum;
}
#endif
/* ---------------------------------------------------------------------------------------------------------------------
 *        Name:  CmnMfgSrv_SrvFD42Rd
 * Description:  IO Control Read
 *          ID:  0xFD42
 *        Type:  0x22 (Read)
 *    Sub-Func:  N/A
 *    Req. Len:  0 bytes
 *   Resp. Len:  4 bytes
 * ------------------------------------------------------------------------------------------------------------------ */
#if (CMNMFGSRV_FD42ENA_CNT_LGC == CMNMFGSRV_ENAD_CNT_LGC)
FUNC(NegRespCodEnum, CmnMfgSrv_CODE) CmnMfgSrv_SrvFD42Rd(VAR(uint8, CmnMfgSrv_VAR) DataBuf_Uls_T_u08[])
{
	VAR(NegRespCodEnum, AUTOMATIC) RespCod_Cnt_T_enum = MFGSRVNRCPOSRSP;

	CmnMfgSrvFct_DecomposeFloat(*Rte_Pim_InpOutpCtrlVehSpdOvrd(), &DataBuf_Uls_T_u08[0U]);

	return RespCod_Cnt_T_enum;
}
#endif



/* End of File: SrvFD42.c */
