/***********************************************************************************************************************
* Copyright 2015 Nexteer
* Nexteer Confidential
*
* Module File Name: SrvRst.c
* Module Description: Service processing
* Project           : Common Manufacturing Services
* Author            : Jared Julien
************************************************************************************************************************
* Version Control:
* %version:         4 %
* %derived_by:      kzdyfh %
* ---------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author    Change Description                                                           SCR #
* --------  -------  --------  ---------------------------------------------------------------------------  ----------
* 12/13/16  1        JWJ       Initial file creation                                                        EA4#8626
* 12/22/16  2        JWJ       Made RequestMode into non-trusted call to get around MPU conflict w/ output  EA4#8626
* 03/07/17  3        JWJ       EA4#9206: Altered response value to send 0x78 instead of suppressing         EA4#10156
* 06/07/17  4        JWJ       Updated to use non-trusted function function name for new OS                 EA4#11834
***********************************************************************************************************************/

/* ================================================================================================================== */
/* Includes */
/* ------------------------------------------------------------------------------------------------------------------ */
#include "Rte_CmnMfgSrv.h"
#include "CmnMfgSrv.h"
#include "CmnMfgSrvTyp.h"
#include "MfgSrvCfg.h"
#include "BswM.h"
#include "os.h"


/* ================================================================================================================== */
/* Service Function Definitions */
/* ------------------------------------------------------------------------------------------------------------------ */

/* ---------------------------------------------------------------------------------------------------------------------
 *        Name:  CmnMfgSrv_SrvRstSoft
 * Description:  0x60: Nexteer Soft Reset Reset
 *          ID:  N/A
 *        Type:  0x11 (Reset)
 *    Sub-Func:  0x60 (Soft)
 *    Req. Len:  0 bytes
 *   Resp. Len:  0 bytes
 * ------------------------------------------------------------------------------------------------------------------ */
#if (CMNMFGSRV_1160ENA_CNT_LGC == CMNMFGSRV_ENAD_CNT_LGC)
FUNC(NegRespCodEnum, CmnMfgSrv_CODE) CmnMfgSrv_SrvRstSoft(VAR(uint8, CmnMfgSrv_VAR) DataBuf_Uls_T_u08[])
{
	VAR(uint16, AUTOMATIC) RstTyp_Cnt_T_u16 = BSWM_GENERICVALUE_BswM_PrepShutdownStatesDef_PREPSHUTDOWN_SOFTRESET;

	/* Request immediate transition to system state OFF.
	 * This allows components that care about system state to see OFF before the deferred reset is processed.
	 */
	(void)Rte_Write_SysStImdtTranReqOff_Logl(TRUE);

	(void)Os_CallNonTrustedFunction(NtWrapS_BswM_RequestMode, (void *)&RstTyp_Cnt_T_u16);

	/* Send a request received NRC and indicate that we may need more time to finish the reset.
	 * A positive response will be returned upon reset from init function via MCU Diagnostic Information (BRAMDAT0).
	 */
	return MFGSRVNRCRESPONSEPENDING;
}
#endif

/* ---------------------------------------------------------------------------------------------------------------------
 *        Name:  CmnMfgSrv_SrvRstHard
 * Description:  0x61: Nexteer Hard Reset Reset
 *          ID:  N/A
 *        Type:  0x11 (Reset)
 *    Sub-Func:  0x61 (Hard)
 *    Req. Len:  0 bytes
 *   Resp. Len:  0 bytes
 * ------------------------------------------------------------------------------------------------------------------ */
#if (CMNMFGSRV_1161ENA_CNT_LGC == CMNMFGSRV_ENAD_CNT_LGC)
FUNC(NegRespCodEnum, CmnMfgSrv_CODE) CmnMfgSrv_SrvRstHard(VAR(uint8, CmnMfgSrv_VAR) DataBuf_Uls_T_u08[])
{
	VAR(uint16, AUTOMATIC) RstTyp_Cnt_T_u16 = BSWM_GENERICVALUE_BswM_PrepShutdownStatesDef_PREPSHUTDOWN_HARDRESET;

	/* Request immediate transition to system state OFF.
	 * This allows components that care about system state to see OFF before the deferred reset is processed.
	 */
	(void)Rte_Write_SysStImdtTranReqOff_Logl(TRUE);

	(void)Os_CallNonTrustedFunction(NtWrapS_BswM_RequestMode, (void *)&RstTyp_Cnt_T_u16);

	/* Send a request received NRC and indicate that we may need more time to finish the reset.
	 * A positive response will be returned upon reset from init function via MCU Diagnostic Information (BRAMDAT0).
	 */
	return MFGSRVNRCRESPONSEPENDING;
}
#endif


/* End of File: SrvRst.c */
