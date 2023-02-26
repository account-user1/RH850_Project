/***********************************************************************************************************************
* Copyright 2015 Nexteer
* Nexteer Confidential
*
* Module File Name: SrvFD05.c
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
* 07/13/16  1        JWJ       Initial file creation                                                        EA4#6219
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
 *        Name:  CmnMfgSrv_SrvFD05Rd
 * Description:  0xFD05: Nexteer Seed/Key Read
 *          ID:  0xFD05
 *        Type:  0x22 (Read)
 *    Sub-Func:  N/A
 *    Req. Len:  0 bytes
 *   Resp. Len:  8 bytes
 * ------------------------------------------------------------------------------------------------------------------ */
#if (CMNMFGSRV_FD05ENA_CNT_LGC == CMNMFGSRV_ENAD_CNT_LGC)
FUNC(NegRespCodEnum, CmnMfgSrv_CODE) CmnMfgSrv_SrvFD05Rd(VAR(uint8, CmnMfgSrv_VAR) DataBuf_Uls_T_u08[])
{
	VAR(NegRespCodEnum, AUTOMATIC) RespCod_Cnt_T_enum = MFGSRVNRCPOSRSP;
	VAR(uint32, AUTOMATIC) Seed_Cnt_T_u32;
	VAR(uint32, AUTOMATIC) Key_Cnt_T_u32;

	Seed_Cnt_T_u32 = Rte_Pim_SeedKey()[0U];
	Key_Cnt_T_u32 = Rte_Pim_SeedKey()[1U];

	CmnMfgSrvFct_Decompose32(Seed_Cnt_T_u32, &DataBuf_Uls_T_u08[0U]);
	CmnMfgSrvFct_Decompose32(Key_Cnt_T_u32, &DataBuf_Uls_T_u08[4U]);

	return RespCod_Cnt_T_enum;
}
#endif

/* ---------------------------------------------------------------------------------------------------------------------
 *        Name:  CmnMfgSrv_SrvFD05Wr
 * Description:  0xFD05: Nexteer Seed/Key Write
 *          ID:  0xFD05
 *        Type:  0x2E (Write)
 *    Sub-Func:  N/A
 *    Req. Len:  8 bytes
 *   Resp. Len:  0 bytes
 * ------------------------------------------------------------------------------------------------------------------ */
#if (CMNMFGSRV_FD05ENA_CNT_LGC == CMNMFGSRV_ENAD_CNT_LGC)
FUNC(NegRespCodEnum, CmnMfgSrv_CODE) CmnMfgSrv_SrvFD05Wr(VAR(uint8, CmnMfgSrv_VAR) DataBuf_Uls_T_u08[])
{
	VAR(NegRespCodEnum, AUTOMATIC) RespCod_Cnt_T_enum = MFGSRVNRCPOSRSP;
	VAR(uint32, AUTOMATIC) Seed_Cnt_T_u32;
	VAR(uint32, AUTOMATIC) Key_Cnt_T_u32;

	Seed_Cnt_T_u32 = CmnMfgSrvFct_Synthesize32(&DataBuf_Uls_T_u08[0U]);
	Key_Cnt_T_u32 = CmnMfgSrvFct_Synthesize32(&DataBuf_Uls_T_u08[4U]);

	Rte_Pim_SeedKey()[0U] = Seed_Cnt_T_u32;
	Rte_Pim_SeedKey()[1U] = Key_Cnt_T_u32;

	(void)Rte_Call_NvmSeedKey_SetRamBlockStatus(TRUE);

	return RespCod_Cnt_T_enum;
}
#endif



/* End of File: SrvFD05.c */
