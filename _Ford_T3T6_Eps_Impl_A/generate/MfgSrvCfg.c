
/**********************************************************************************************************************
* Copyright 2015 Nexteer
* Nexteer Confidential
*
* Module File Name  : MfgSrvCfg.c.tt
* Module Description: Nexteer Manufacturing Services
* Project           : CBD
* Author            : Jared Julien
* Generator         : artt 2.0.2.0
* Generation Time   : 06.04.2018 17:12:11
***********************************************************************************************************************
* Version Control:
* %version:          9 %
* %derived_by:       gz324f %
*----------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author    Change Description                                                             SCR #
* -------   -------  --------  -----------------------------------------------------------------------------  ---------
* 11/04/15  1        JWJ       Initial Template Version                                                       EA4#
* 06/07/17  2        JWJ       Changed NULL to NULL_PTR to support OS update                                  EA4#11834
* 07/07/17  3        JWJ       Update type for non-trusted function table to new structure type               EA4#13539
**********************************************************************************************************************/



/************************************************ Include Statements *************************************************/
#include "Rte_CmnMfgSrv.h"
#include "CmnMfgSrv.h"
#include "MfgSrvCfg.h"
#include "CmnMfgSrvTyp.h"
#include "Os.h"


/******************************************** File Level Rule Deviations *********************************************/

/********************************************* Embedded Local Constants **********************************************/

/* Enabled services lookup/configuration */
CONST(MfgSrvTblRec, AUTOMATIC) CmnMfgSrv_MfgSrvTbl_Cnt_str[100u] =
{
/* A: Nexteer Session (NRC: 0x7F)
 * B: Security Access (NRC: 0x33)
 *                                            Checks
 *   Type   Id       Sub    ReqLen   ResLen    A   B    Appl   Handler */
	{0x22u, 0xF1F8u, 0xFFu, 0x0000u, 0x003Bu, {0u, 0u}, 0x0Au, CmnMfgSrv_SrvF1F8Rd},
	{0x2Eu, 0xFE21u, 0xFFu, 0x001Cu, 0x0000u, {0u, 1u}, 0x0Au, CmnMfgSrv_SrvFE21Wr},
	{0x31u, 0xF119u, 0x03u, 0x0000u, 0x0001u, {0u, 0u}, 0x0Au, CmnMfgSrv_SrvF119RoutineSts},
	{0x2Eu, 0xFE8Bu, 0xFFu, 0x0001u, 0x0000u, {0u, 1u}, 0x0Au, CmnMfgSrv_SrvFE8BWr},
	{0x22u, 0xF195u, 0xFFu, 0x0000u, 0x0010u, {0u, 0u}, 0x0Au, CmnMfgSrv_SrvF195Rd},
	{0x2Eu, 0xFDB3u, 0xFFu, 0x0004u, 0x0000u, {0u, 1u}, 0x0Au, CmnMfgSrv_SrvFDB3Wr},
	{0x22u, 0xF1F0u, 0xFFu, 0x0000u, 0x0010u, {0u, 0u}, 0x0Au, CmnMfgSrv_SrvF1F0Rd},
	{0x22u, 0xFDBAu, 0xFFu, 0x0000u, 0x0001u, {0u, 0u}, 0x0Au, CmnMfgSrv_SrvFDBARd},
	{0x22u, 0xFDB9u, 0xFFu, 0x0000u, 0x0001u, {0u, 0u}, 0x0Au, CmnMfgSrv_SrvFDB9Rd},
	{0x31u, 0xFDA3u, 0x01u, 0x0000u, 0x0000u, {0u, 1u}, 0x0Au, CmnMfgSrv_SrvFDA3RoutineStrt},
	{0x22u, 0xFDB1u, 0xFFu, 0x0000u, 0x0004u, {0u, 0u}, 0x0Au, CmnMfgSrv_SrvFDB1Rd},
	{0x2Eu, 0xFE8Au, 0xFFu, 0x0007u, 0x0000u, {0u, 1u}, 0x0Au, CmnMfgSrv_SrvFE8AWr},
	{0x31u, 0xFDAAu, 0x01u, 0x0000u, 0x0000u, {0u, 1u}, 0x0Au, CmnMfgSrv_SrvFDAARoutineStrt},
	{0x22u, 0xF1F1u, 0xFFu, 0x0000u, 0x0010u, {0u, 0u}, 0x0Au, CmnMfgSrv_SrvF1F1Rd},
	{0x22u, 0xFD60u, 0xFFu, 0x0000u, 0x0064u, {0u, 0u}, 0x0Au, CmnMfgSrv_SrvFD60Rd},
	{0x22u, 0xFDBBu, 0xFFu, 0x0000u, 0x0001u, {0u, 0u}, 0x0Au, CmnMfgSrv_SrvFDBBRd},
	{0x31u, 0xFE89u, 0x01u, 0x0000u, 0x0000u, {0u, 1u}, 0x0Au, CmnMfgSrv_SrvFE89RoutineStrt},
	{0x22u, 0xFDF8u, 0xFFu, 0x0000u, 0x0008u, {0u, 0u}, 0x0Au, CmnMfgSrv_SrvFDF8Rd},
	{0x31u, 0xFDF1u, 0x03u, 0x0000u, 0x0001u, {0u, 0u}, 0x0Au, CmnMfgSrv_SrvFDF1RoutineSts},
	{0x2Eu, 0xFD02u, 0xFFu, 0x0001u, 0x0000u, {0u, 1u}, 0x0Au, CmnMfgSrv_SrvFD02Wr},
	{0x31u, 0xF200u, 0x01u, 0x0004u, 0x0000u, {0u, 1u}, 0x0Au, CmnMfgSrv_SrvF200RoutineStrt},
	{0x22u, 0xFDB2u, 0xFFu, 0x0000u, 0x0004u, {0u, 0u}, 0x0Au, CmnMfgSrv_SrvFDB2Rd},
	{0x22u, 0xF1F2u, 0xFFu, 0x0000u, 0x0005u, {0u, 0u}, 0x0Au, CmnMfgSrv_SrvF1F2Rd},
	{0x2Fu, 0xFD41u, 0x03u, 0x0004u, 0x0004u, {0u, 1u}, 0x0Au, CmnMfgSrv_SrvFD41CtrlAdj},
	{0x22u, 0xFD00u, 0xFFu, 0x0000u, 0x0001u, {0u, 0u}, 0x0Au, CmnMfgSrv_SrvFD00Rd},
	{0x31u, 0xF100u, 0x03u, 0x0000u, 0x0001u, {0u, 0u}, 0x0Au, CmnMfgSrv_SrvF100RoutineSts},
	{0x31u, 0xFDABu, 0x01u, 0x0000u, 0x0000u, {0u, 1u}, 0x0Au, CmnMfgSrv_SrvFDABRoutineStrt},
	{0x22u, 0xFEABu, 0xFFu, 0x0000u, 0x0001u, {0u, 0u}, 0x0Au, CmnMfgSrv_SrvFEABRd},
	{0x2Eu, 0xFD03u, 0xFFu, 0x0004u, 0x0000u, {0u, 1u}, 0x0Au, CmnMfgSrv_SrvFD03Wr},
	{0x22u, 0xFDB3u, 0xFFu, 0x0000u, 0x0004u, {0u, 0u}, 0x0Au, CmnMfgSrv_SrvFDB3Rd},
	{0x22u, 0xF1F3u, 0xFFu, 0x0000u, 0x0005u, {0u, 0u}, 0x0Au, CmnMfgSrv_SrvF1F3Rd},
	{0x31u, 0xFDA9u, 0x01u, 0x0000u, 0x0000u, {0u, 1u}, 0x0Au, CmnMfgSrv_SrvFDA9RoutineStrt},
	{0x2Eu, 0xFDC8u, 0xFFu, 0x0016u, 0x0000u, {0u, 1u}, 0x0Au, CmnMfgSrv_SrvFDC8Wr},
	{0x22u, 0xFD01u, 0xFFu, 0x0000u, 0x0004u, {0u, 0u}, 0x0Au, CmnMfgSrv_SrvFD01Rd},
	{0x2Eu, 0xFDC0u, 0xFFu, 0x0002u, 0x0000u, {0u, 1u}, 0x0Au, CmnMfgSrv_SrvFDC0Wr},
	{0x22u, 0xF1FDu, 0xFFu, 0x0000u, 0x0009u, {0u, 0u}, 0x0Au, CmnMfgSrv_SrvF1FDRd},
	{0x31u, 0xF119u, 0x01u, 0x0000u, 0x0000u, {0u, 1u}, 0x0Au, CmnMfgSrv_SrvF119RoutineStrt},
	{0x22u, 0xFE8Cu, 0xFFu, 0x0000u, 0x00D4u, {0u, 0u}, 0x0Au, CmnMfgSrv_SrvFE8CRd},
	{0x22u, 0xFD40u, 0xFFu, 0x0000u, 0x0004u, {0u, 0u}, 0x0Au, CmnMfgSrv_SrvFD40Rd},
	{0x22u, 0xFD02u, 0xFFu, 0x0000u, 0x0001u, {0u, 0u}, 0x0Au, CmnMfgSrv_SrvFD02Rd},
	{0x22u, 0xF1FEu, 0xFFu, 0x0000u, 0x0005u, {0u, 0u}, 0x0Au, CmnMfgSrv_SrvF1FERd},
	{0x2Eu, 0xFD89u, 0xFFu, 0x0004u, 0x0000u, {0u, 1u}, 0x0Au, CmnMfgSrv_SrvFD89Wr},
	{0x31u, 0xFE20u, 0x01u, 0x0008u, 0x0000u, {0u, 1u}, 0x0Au, CmnMfgSrv_SrvFE20RoutineStrt},
	{0x31u, 0xF151u, 0x02u, 0x0000u, 0x0000u, {0u, 1u}, 0x0Au, CmnMfgSrv_SrvF151RoutineStop},
	{0x2Eu, 0xFDB0u, 0xFFu, 0x0004u, 0x0000u, {0u, 1u}, 0x0Au, CmnMfgSrv_SrvFDB0Wr},
	{0x2Fu, 0xFD41u, 0x00u, 0x0000u, 0x0004u, {0u, 0u}, 0x0Au, CmnMfgSrv_SrvFD41CtrlRtn},
	{0x31u, 0xFDA1u, 0x01u, 0x0000u, 0x0000u, {0u, 1u}, 0x0Au, CmnMfgSrv_SrvFDA1RoutineStrt},
	{0x22u, 0xFE21u, 0xFFu, 0x0000u, 0x001Cu, {0u, 0u}, 0x0Au, CmnMfgSrv_SrvFE21Rd},
	{0x31u, 0xFDF1u, 0x01u, 0x0000u, 0x0000u, {0u, 1u}, 0x0Au, CmnMfgSrv_SrvFDF1RoutineStrt},
	{0x31u, 0xFD70u, 0x01u, 0x0000u, 0x0000u, {0u, 1u}, 0x0Au, CmnMfgSrv_SrvFD70RoutineStrt},
	{0x31u, 0xFE20u, 0x02u, 0x0004u, 0x0000u, {0u, 0u}, 0x0Au, CmnMfgSrv_SrvFE20RoutineStop},
	{0x22u, 0xFD41u, 0xFFu, 0x0000u, 0x0004u, {0u, 0u}, 0x0Au, CmnMfgSrv_SrvFD41Rd},
	{0x22u, 0xFE8Bu, 0xFFu, 0x0000u, 0x0001u, {0u, 0u}, 0x0Au, CmnMfgSrv_SrvFE8BRd},
	{0x31u, 0xFDF0u, 0x01u, 0x0000u, 0x0000u, {0u, 1u}, 0x0Au, CmnMfgSrv_SrvFDF0RoutineStrt},
	{0x2Eu, 0xFEABu, 0xFFu, 0x0001u, 0x0000u, {0u, 1u}, 0x0Au, CmnMfgSrv_SrvFEABWr},
	{0x31u, 0xFD71u, 0x01u, 0x0000u, 0x0000u, {0u, 1u}, 0x0Au, CmnMfgSrv_SrvFD71RoutineStrt},
	{0x31u, 0xFD81u, 0x01u, 0x0000u, 0x0000u, {0u, 1u}, 0x0Au, CmnMfgSrv_SrvFD81RoutineStrt},
	{0x22u, 0xFD03u, 0xFFu, 0x0000u, 0x0004u, {0u, 0u}, 0x0Au, CmnMfgSrv_SrvFD03Rd},
	{0x22u, 0xF1FFu, 0xFFu, 0x0000u, 0x0014u, {0u, 0u}, 0x0Au, CmnMfgSrv_SrvF1FFRd},
	{0x31u, 0xFDA0u, 0x01u, 0x0000u, 0x0000u, {0u, 1u}, 0x0Au, CmnMfgSrv_SrvFDA0RoutineStrt},
	{0x31u, 0xFDA2u, 0x01u, 0x0000u, 0x0000u, {0u, 1u}, 0x0Au, CmnMfgSrv_SrvFDA2RoutineStrt},
	{0x2Eu, 0xFDB1u, 0xFFu, 0x0004u, 0x0000u, {0u, 1u}, 0x0Au, CmnMfgSrv_SrvFDB1Wr},
	{0x31u, 0xF100u, 0x02u, 0x0000u, 0x0000u, {0u, 1u}, 0x0Au, CmnMfgSrv_SrvF100RoutineStop},
	{0x22u, 0xFDC8u, 0xFFu, 0x0000u, 0x0016u, {0u, 0u}, 0x0Au, CmnMfgSrv_SrvFDC8Rd},
	{0x2Fu, 0xFD40u, 0x03u, 0x0004u, 0x0004u, {0u, 1u}, 0x0Au, CmnMfgSrv_SrvFD40CtrlAdj},
	{0x22u, 0xFDC0u, 0xFFu, 0x0000u, 0x0002u, {0u, 0u}, 0x0Au, CmnMfgSrv_SrvFDC0Rd},
	{0x31u, 0xF151u, 0x01u, 0x0000u, 0x0000u, {0u, 1u}, 0x0Au, CmnMfgSrv_SrvF151RoutineStrt},
	{0x31u, 0xFE88u, 0x01u, 0x0000u, 0x0000u, {0u, 1u}, 0x0Au, CmnMfgSrv_SrvFE88RoutineStrt},
	{0x22u, 0xFE8Au, 0xFFu, 0x0000u, 0x0007u, {0u, 0u}, 0x0Au, CmnMfgSrv_SrvFE8ARd},
	{0x31u, 0xF119u, 0x02u, 0x0000u, 0x0000u, {0u, 1u}, 0x0Au, CmnMfgSrv_SrvF119RoutineStop},
	{0x2Fu, 0xFD40u, 0x00u, 0x0000u, 0x0004u, {0u, 0u}, 0x0Au, CmnMfgSrv_SrvFD40CtrlRtn},
	{0x31u, 0xFD85u, 0x01u, 0x0000u, 0x0000u, {0u, 1u}, 0x0Au, CmnMfgSrv_SrvFD85RoutineStrt},
	{0x22u, 0xF1F7u, 0xFFu, 0x0000u, 0x003Bu, {0u, 0u}, 0x0Au, CmnMfgSrv_SrvF1F7Rd},
	{0x2Eu, 0xFE8Cu, 0xFFu, 0x00D4u, 0x0000u, {0u, 1u}, 0x0Au, CmnMfgSrv_SrvFE8CWr},
	{0x2Eu, 0xFDF8u, 0xFFu, 0x0008u, 0x0000u, {0u, 1u}, 0x0Au, CmnMfgSrv_SrvFDF8Wr},
	{0x2Eu, 0xFDB2u, 0xFFu, 0x0004u, 0x0000u, {0u, 1u}, 0x0Au, CmnMfgSrv_SrvFDB2Wr},
	{0x31u, 0xFDF0u, 0x03u, 0x0000u, 0x0001u, {0u, 0u}, 0x0Au, CmnMfgSrv_SrvFDF0RoutineSts},
	{0x31u, 0xF151u, 0x03u, 0x0000u, 0x0001u, {0u, 0u}, 0x0Au, CmnMfgSrv_SrvF151RoutineSts},
	{0x22u, 0xFD89u, 0xFFu, 0x0000u, 0x0004u, {0u, 0u}, 0x0Au, CmnMfgSrv_SrvFD89Rd},
	{0x31u, 0xF100u, 0x01u, 0x0000u, 0x0000u, {0u, 1u}, 0x0Au, CmnMfgSrv_SrvF100RoutineStrt},
	{0x22u, 0xF194u, 0xFFu, 0x0000u, 0x0010u, {0u, 0u}, 0x0Au, CmnMfgSrv_SrvF194Rd},
	{0x22u, 0xFDB8u, 0xFFu, 0x0000u, 0x0001u, {0u, 0u}, 0x0Au, CmnMfgSrv_SrvFDB8Rd},
	{0x31u, 0xFDA8u, 0x01u, 0x0000u, 0x0000u, {0u, 1u}, 0x0Au, CmnMfgSrv_SrvFDA8RoutineStrt},
	{0x22u, 0xFDB0u, 0xFFu, 0x0000u, 0x0004u, {0u, 0u}, 0x0Au, CmnMfgSrv_SrvFDB0Rd},
	{0x22u, 0xFDC1u, 0xFFu, 0x0000u, 0x0017u, {0u, 0u}, 0x0Au, CmnMfgSrv_SrvFDC1Rd},
	{0x2Eu, 0xFDC1u, 0xFFu, 0x0017u, 0x0000u, {0u, 1u}, 0x0Au, CmnMfgSrv_SrvFDC1Wr},
	{0x31u, 0xFDC2u, 0x02u, 0x0000u, 0x0000u, {0u, 1u}, 0x0Au, CmnMfgSrv_SrvFDC2RoutineStop},
	{0x31u, 0xFDC2u, 0x01u, 0x0000u, 0x0000u, {0u, 1u}, 0x0Au, CmnMfgSrv_SrvFDC2RoutineStrt},
	{0x31u, 0xFDC2u, 0x03u, 0x0000u, 0x001Bu, {0u, 0u}, 0x0Au, CmnMfgSrv_SrvFDC2RoutineSts},
	{0x22u, 0xFDC9u, 0xFFu, 0x0000u, 0x0134u, {0u, 0u}, 0x0Au, CmnMfgSrv_SrvFDC9Rd},
	{0x2Eu, 0xFDC9u, 0xFFu, 0x0134u, 0x0000u, {0u, 1u}, 0x0Au, CmnMfgSrv_SrvFDC9Wr},
	{0x22u, 0xFDCAu, 0xFFu, 0x0000u, 0x0134u, {0u, 0u}, 0x0Au, CmnMfgSrv_SrvFDCARd},
	{0x2Eu, 0xFDCAu, 0xFFu, 0x0134u, 0x0000u, {0u, 1u}, 0x0Au, CmnMfgSrv_SrvFDCAWr},
	{0x22u, 0xFDF6u, 0xFFu, 0x0000u, 0x000Cu, {0u, 0u}, 0x0Au, CmnMfgSrv_SrvFDF6Rd},
	{0x2Eu, 0xFDF6u, 0xFFu, 0x000Cu, 0x0000u, {0u, 1u}, 0x0Au, CmnMfgSrv_SrvFDF6Wr},
	{0x22u, 0xFDF7u, 0xFFu, 0x0000u, 0x001Cu, {0u, 0u}, 0x0Au, CmnMfgSrv_SrvFDF7Rd},
	{0x2Eu, 0xFDF7u, 0xFFu, 0x001Cu, 0x0000u, {0u, 1u}, 0x0Au, CmnMfgSrv_SrvFDF7Wr},
	{0x22u, 0xFD55u, 0xFFu, 0x0000u, 0x0030u, {0u, 0u}, 0x0Au, CmnMfgSrv_SrvFD55Rd},
	{0x22u, 0xFD62u, 0xFFu, 0x0000u, 0x0100u, {0u, 0u}, 0x0Au, CmnMfgSrv_SrvFD62Rd},
	{0x31u, 0xFD54u, 0x01u, 0x0000u, 0x0000u, {0u, 1u}, 0x0Au, CmnMfgSrv_SrvFD54RoutineStrt},
};

CONST(NonTrustdFctApplIdxRec, AUTOMATIC) CmnMfgSrvCfg_NonTrustdFctPtrTbl[11U] = {
	{0xFFFFU, 0U}, /* Appl0 non-trusted function not used */
	{0xFFFFU, 0U}, /* Appl1 non-trusted function not used */
	{0xFFFFU, 0U}, /* Appl2 non-trusted function not used */
	{0xFFFFU, 0U}, /* Appl3 non-trusted function not used */
	{0xFFFFU, 0U}, /* Appl4 non-trusted function not used */
	{0xFFFFU, 0U}, /* Appl5 non-trusted function not used */
	{0xFFFFU, 0U}, /* Appl6 non-trusted function not used */
	{0xFFFFU, 0U}, /* Appl7 non-trusted function not used */
	{0xFFFFU, 0U}, /* Appl8 non-trusted function not used */
	{0xFFFFU, 0U}, /* Appl9 non-trusted function not used */
	{(uint16)NtWrapS_CmnMfgSrv_CallSvc10, (uint8)Appl10},
};


/******************************************** Module Specific Variables **********************************************/

/******************************************** Local Function Prototypes **********************************************/

/*********************************************** Function Definitions ************************************************/
/**********************************************************************************************************************
*        Name:  NONTRUSTED_NtWrapS_CmnMfgSrv_CallSvc10
* Description:  Non-trusted function call for Application 10 write services
*      Inputs:  FunctionIndex - Non-trusted function index
*               FunctionParams - Pointer to parameter structure
*     Outputs:  None
* Usage Notes:  None
**********************************************************************************************************************/
FUNC(void, CDD_NxtrMfgSrv_CODE) NONTRUSTED_NtWrapS_CmnMfgSrv_CallSvc10(
		Os_NonTrustedFunctionIndexType FunctionIndex,
		Os_NonTrustedFunctionParameterRefType FunctionParams)
{
	/* Call the service function that was passed as a parameter in FunctionParams and pass it that data buffer that
	 * was passed as another parameter */
	CmnMfgSrvRetBuf_G = ((MfgSrvFuncRef)((NtMfgSrvRec*)FunctionParams)->SrvFct)(((NtMfgSrvRec*)FunctionParams)->DataBuf);
}



/* End of File: MfgSrvCfg.c */
