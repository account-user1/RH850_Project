/***********************************************************************************************************************
* Copyright 2015 Nexteer
* Nexteer Confidential
*
* Module File Name: SrvF1FD.c
* Module Description: 0xF1FD - Software Release Type
* Project           : Common Manufacturing Services
* Author            : Jared Julien
************************************************************************************************************************
* Version Control:
* %version:         1 %
* %derived_by:      kzdyfh %
* ---------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author    Change Description                                                           SCR #
* --------  -------  --------  ---------------------------------------------------------------------------  ----------
* 11/11/15  1        JWJ       Initial file creation                                                        EA4#2518
* 12/20/16  2        JWJ       Added support for XCP write enable and NMEC unlock enable                    EA4#8626
***********************************************************************************************************************/

/* ================================================================================================================== */
/* Includes */
/* ------------------------------------------------------------------------------------------------------------------ */
#include "Rte_CmnMfgSrv.h"
#include "CmnMfgSrv.h"
#include "CmnMfgSrvTyp.h"
#include "MfgSrvCfg.h"
#include "CmnMfgSrvFct.h"
#include "Det.h"
#include "FltInj.h"
#include "Swp.h"
#include "TunSelnMngt_Cfg_private.h"
#include "McuErrInj.h"


#define CMNMFGSRVFEATDET_CNT_U16        0x0001U
#define CMNMFGSRVFEATFLTINJ_CNT_U16     0x0002U
#define CMNMFGSRVFEATSWP_CNT_U16        0x0004U
#define CMNMFGSRVFEATXCPWR_CNT_U16      0x0008U
#define CMNMFGSRVFEATMECUNLCK_CNT_U16   0x0010U
#define CMNMFGSRVFEATMCUERRINJ_CNT_U16  0x0020U


/* ================================================================================================================== */
/* Service Function Definitions */
/* ------------------------------------------------------------------------------------------------------------------ */

/* ---------------------------------------------------------------------------------------------------------------------
 *        Name:  CmnMfgSrv_SrvF1FDRd
 * Description:  0xF1FD: Software Release Information Read
 *          ID:  0xF1FD
 *        Type:  0x22 (Read)
 *    Sub-Func:  N/A
 *    Req. Len:  0 bytes
 *   Resp. Len:  9 bytes
 * ------------------------------------------------------------------------------------------------------------------ */
#if (CMNMFGSRV_F1FDENA_CNT_LGC == CMNMFGSRV_ENAD_CNT_LGC)
FUNC(NegRespCodEnum, CmnMfgSrv_CODE) CmnMfgSrv_SrvF1FDRd(VAR(uint8, CmnMfgSrv_VAR) DataBuf_Uls_T_u08[])
{
	VAR(NegRespCodEnum, AUTOMATIC) RespCod_Cnt_T_enum = MFGSRVNRCPOSRSP;
	VAR(uint16, AUTOMATIC) Features_Cnt_T_b16 = 0U;

	(void)Rte_Call_NxtrSwIdsSwRelInfoRd_Oper(&DataBuf_Uls_T_u08[0U], &DataBuf_Uls_T_u08[3U]);

#ifdef DET_ENABLED
	Features_Cnt_T_b16 |= CMNMFGSRVFEATDET_CNT_U16;
#endif
#if (FLTINJENA == STD_ON)
	Features_Cnt_T_b16 |= CMNMFGSRVFEATFLTINJ_CNT_U16;
#endif
#if (SWPENA == STD_ON)
	Features_Cnt_T_b16 |= CMNMFGSRVFEATSWP_CNT_U16;
#endif
#if (TUNSELNMNGTDEVLPMODENA == STD_ON)
	Features_Cnt_T_b16 |= CMNMFGSRVFEATXCPWR_CNT_U16;
#endif
#if (CMNMFGSRVNXTRMFGENACNTRUNLCK == STD_ON)
	Features_Cnt_T_b16 |= CMNMFGSRVFEATMECUNLCK_CNT_U16;
#endif
#if (MCUDIAGCERRINJ == STD_ON)
	Features_Cnt_T_b16 |= CMNMFGSRVFEATMCUERRINJ_CNT_U16;
#endif

	CmnMfgSrvFct_Decompose16(Features_Cnt_T_b16, &DataBuf_Uls_T_u08[1U]);

	return RespCod_Cnt_T_enum;
}
#endif


/* End of File: SrvF1FD.c */
