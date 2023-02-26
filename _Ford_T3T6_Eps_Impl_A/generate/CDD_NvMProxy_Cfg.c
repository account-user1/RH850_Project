
/**********************************************************************************************************************
* Copyright 2015, 2016 Nexteer 
* Nexteer Confidential
*
* Module File Name:   CDD_NvMProxy_Cfg.c
* Module Description: Implementation of NvM Proxy ES006A
* Project           : CBD 
* Author            : Kevin Smith
***********************************************************************************************************************
* Version Control:
* %version:          26 %
* %derived_by:       gz324f %
*----------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author         Change Description                                                           SCR #
* -------   -------  --------  ---------------------------------------------------------------------------     --------
* 05/01/15  1        KJS       Initial Version                                                                 EA4#471
* 09/02/15  2        KJS       Set the ApplCallBack back to NULL_PTR at the start of each loop iteration       EA4#1484
* 01/26/16  3        KJS       Updated name of included header, NTC indexes, and file name to EA4 standards    EA4#3443
* 01/29/16  4        KJS       Removed CDD_ prefix from the module reference                                   EA4#6371
**********************************************************************************************************************/

#include "CDD_NvMProxy_Cfg_private.h"
#include "NvM.h"

/******************************************** File Level Rule Deviations *********************************************/
/* MISRA-C:2004 Rule 19.1 [NXTRDEV 19.1.1]: AUTOSAR requires deviation from this rule for Memory Mapping include statements */

/********************************************* Embedded Local Constants **********************************************/

/******************************************* Module Specific Data Types **********************************************/

/******************************************** Module Specific Variables **********************************************/
#define CDD_NvMProxy_START_SEC_CONST_UNSPECIFIED
#include "CDD_NvMProxy_MemMap.h"

/* Table Contents: <NvM Block Number>, <Fault Response Index (0xFF, disabled)> */
const VAR(NvMProxyCrcFltDescrTblTyp, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) NvMProxy_CrcFltDescrTbl[] = {
    {NULL_PTR, 0x60U, NTCCHKDISAD_CNT_U08}, /* Rte_NvmBlock_CDD_NvMProxy_ShtdwnClsChk */
    {&RestoreDiagcMgrLtchCntrAryDft, 0x5EU, NTCCHKDISAD_CNT_U08}, /* Rte_NvmBlock_DiagcMgr_DiagcMgrLtchCntrAry */
    {&RestoreNtcFltAryDft, 0x5FU, NTCCHKDISAD_CNT_U08}, /* Rte_NvmBlock_DiagcMgr_DiagcMgrNtcFltAry */
    {&RestoreSnpshtAryDft, 0x5DU, NTCCHKDISAD_CNT_U08}, /* Rte_NvmBlock_DiagcMgr_DiagcMgrApplCrc */
    {NULL_PTR, 0x59U, NTCCHKDISAD_CNT_U08}, /* Rte_NvmBlock_PolarityCfg_PolarityCfgSaved */
    {NULL_PTR, 0x57U, NTCCHKDISAD_CNT_U08}, /* Rte_NvmBlock_CDD_CurrMeas_CurrMeasEolGainCalSetABC */
    {NULL_PTR, 0x58U, NTCCHKDISAD_CNT_U08}, /* Rte_NvmBlock_CDD_CurrMeas_CurrMeasEolOffsCalSetABC */
    {NULL_PTR, 0x5BU, NTCCHKDISAD_CNT_U08}, /* Rte_NvmBlock_CDD_MotAgCmp_MotAgCmpMotAgBackEmf */
    {NULL_PTR, 0x56U, NTCCHKDISAD_CNT_U08}, /* Rte_NvmBlock_HwAgSnsrls_StordLstPrm */
    {NULL_PTR, 0x5AU, NTCCHKDISAD_CNT_U08}, /* Rte_NvmBlock_MotAg2Meas_MotAg2EolPrm */
    {NULL_PTR, 0x54U, NTCCHKDISAD_CNT_U08}, /* Rte_NvmBlock_EotLrng_EotNvmData */
    {NULL_PTR, 0x55U, NTCCHKDISAD_CNT_U08}, /* Rte_NvmBlock_EotLrng_MaxHwAgCwAndCcw */
    {NULL_PTR, 0x50U, NTCCHKDISAD_CNT_U08}, /* Rte_NvmBlock_CDD_MotRplCoggCmd_MotCoggCmdY */
    {NULL_PTR, 0x51U, NTCCHKDISAD_CNT_U08}, /* Rte_NvmBlock_MotRplCoggCfg_MotRplCoggPrm */
    {NULL_PTR, 0x53U, NTCCHKDISAD_CNT_U08}, /* Rte_NvmBlock_SysFricLrng_FricLrngData */
    {NULL_PTR, 0x52U, NTCCHKDISAD_CNT_U08}, /* Rte_NvmBlock_SysFricLrng_FricNonLrngData */
    {NULL_PTR, 0x4FU, NTCCHKDISAD_CNT_U08}, /* Rte_NvmBlock_CDD_VrfyCritReg_MCalReadVrfyCritRegFltNvmInfo */
    {NULL_PTR, 0x4DU, NTCCHKDISAD_CNT_U08}, /* Rte_NvmBlock_HwAg1Meas_HwAg1IfFltLtch */
    {NULL_PTR, 0x4EU, NTCCHKDISAD_CNT_U08}, /* Rte_NvmBlock_HwAg1Meas_HwAg1Offs */
    {NULL_PTR, 0x49U, NTCCHKDISAD_CNT_U08}, /* Rte_NvmBlock_CDD_MotAg5Meas_MotAg5EolPrm */
    {NULL_PTR, 0x4CU, NTCCHKDISAD_CNT_U08}, /* Rte_NvmBlock_CDD_MotAg5Meas_MotAg5StVari */
    {NULL_PTR, 0x4BU, NTCCHKDISAD_CNT_U08}, /* Rte_NvmBlock_CDD_MotAg6Meas_MotAg6EolPrm */
    {NULL_PTR, 0x4AU, NTCCHKDISAD_CNT_U08}, /* Rte_NvmBlock_CDD_MotAg6Meas_MotAg6StVari */
    {NULL_PTR, 0x48U, NTCCHKDISAD_CNT_U08}, /* Rte_NvmBlock_MotCtrlPrmEstimn_MotPrmNom */
    {NULL_PTR, 0x45U, NTCCHKDISAD_CNT_U08}, /* Rte_NvmBlock_MotTqCmdSca_MotTqScaFac */
    {NULL_PTR, 0x46U, NTCCHKDISAD_CNT_U08}, /* Rte_NvmBlock_DutyCycThermProtn_FilStVal */
    {NULL_PTR, 0x40U, NTCCHKDISAD_CNT_U08}, /* Rte_NvmBlock_CmnMfgSrv_CcaHwPartNr */
    {NULL_PTR, 0x44U, NTCCHKDISAD_CNT_U08}, /* Rte_NvmBlock_CmnMfgSrv_CcaSerlNr */
    {NULL_PTR, 0x3AU, NTCCHKDISAD_CNT_U08}, /* Rte_NvmBlock_CmnMfgSrv_DiRestore */
    {NULL_PTR, 0x3EU, NTCCHKDISAD_CNT_U08}, /* Rte_NvmBlock_CmnMfgSrv_EpsSysSerlNr */
    {NULL_PTR, 0x43U, NTCCHKDISAD_CNT_U08}, /* Rte_NvmBlock_CmnMfgSrv_IgnCntr */
    {NULL_PTR, 0x3CU, NTCCHKDISAD_CNT_U08}, /* Rte_NvmBlock_CmnMfgSrv_MfgTmpBuf0 */
    {NULL_PTR, 0x39U, NTCCHKDISAD_CNT_U08}, /* Rte_NvmBlock_CmnMfgSrv_MfgTmpBuf1 */
    {NULL_PTR, 0x3FU, NTCCHKDISAD_CNT_U08}, /* Rte_NvmBlock_CmnMfgSrv_MfgTmpBuf2 */
    {NULL_PTR, 0x3DU, NTCCHKDISAD_CNT_U08}, /* Rte_NvmBlock_CmnMfgSrv_MfgTmpBuf3 */
    {NULL_PTR, 0x41U, NTCCHKDISAD_CNT_U08}, /* Rte_NvmBlock_CmnMfgSrv_MfgTmpBuf4 */
    {NULL_PTR, 0x3BU, NTCCHKDISAD_CNT_U08}, /* Rte_NvmBlock_CmnMfgSrv_NxtrMfgEnaCntr */
    {NULL_PTR, 0x42U, NTCCHKDISAD_CNT_U08}, /* Rte_NvmBlock_CmnMfgSrv_SeedKey */
    {NULL_PTR, 0x5CU, NTCCHKDISAD_CNT_U08}, /* SnpshtDataAry */
    {NULL_PTR, 0x38U, NTCCHKDISAD_CNT_U08}, /* Rte_NvmBlock_CDD_HwTq1Meas_HwTq1Offs */
    {NULL_PTR, 0x37U, NTCCHKDISAD_CNT_U08}, /* Rte_NvmBlock_CDD_HwTq8Meas_HwTq8Offs */
    {NULL_PTR, 0x36U, NTCCHKDISAD_CNT_U08}, /* Rte_NvmBlock_TEstimn_TFilStVal */
    {NULL_PTR, 0x34U, NTCCHKDISAD_CNT_U08}, /* Rte_NvmBlock_HwTq9Meas_HwTq9Offs */
    {NULL_PTR, 0x35U, NTCCHKDISAD_CNT_U08}, /* Rte_NvmBlock_HwTq10Meas_HwTq10Offs */
    {NULL_PTR, 0x2CU, NTCCHKDISAD_CNT_U08}, /* Rte_NvmBlock_CustDiag_Did3003 */
    {NULL_PTR, 0x30U, NTCCHKDISAD_CNT_U08}, /* Rte_NvmBlock_CustDiag_DidDE00 */
    {NULL_PTR, 0x2DU, NTCCHKDISAD_CNT_U08}, /* Rte_NvmBlock_CustDiag_DidDE01 */
    {NULL_PTR, 0x2BU, NTCCHKDISAD_CNT_U08}, /* Rte_NvmBlock_CustDiag_DidDE02 */
    {NULL_PTR, 0x2FU, NTCCHKDISAD_CNT_U08}, /* Rte_NvmBlock_CustDiag_DidDE03 */
    {NULL_PTR, 0x2AU, NTCCHKDISAD_CNT_U08}, /* Rte_NvmBlock_CustDiag_DidDE04 */
    {NULL_PTR, 0x2EU, NTCCHKDISAD_CNT_U08}, /* Rte_NvmBlock_CustDiag_DidEE01 */
    {NULL_PTR, 0x32U, NTCCHKDISAD_CNT_U08}, /* Rte_NvmBlock_CustDiag_DidEE02 */
    {NULL_PTR, 0x33U, NTCCHKDISAD_CNT_U08}, /* Rte_NvmBlock_CustDiag_DidF111 */
    {NULL_PTR, 0x31U, NTCCHKDISAD_CNT_U08}, /* Rte_NvmBlock_CustDiag_DidF113 */
    {NULL_PTR, 0x28U, NTCCHKDISAD_CNT_U08}, /* Rte_NvmBlock_FordHwAgArbn_NonAbsOffs */
    {NULL_PTR, 0x27U, NTCCHKDISAD_CNT_U08}, /* Rte_NvmBlock_FordHwAgArbn_NonAbsOffsVldFlg */
    {NULL_PTR, 0x26U, NTCCHKDISAD_CNT_U08}, /* Rte_NvmBlock_FordHwAgArbn_PrevIgnCycVal */
    {NULL_PTR, 0x29U, NTCCHKDISAD_CNT_U08}, /* Rte_NvmBlock_FordVehSpdArbn_FordVehTireCircum */
    {NULL_PTR, 0x20U, NTCCHKDISAD_CNT_U08}, /* Rte_NvmBlock_CustDiag_Did205A */
    {NULL_PTR, 0x13U, NTCCHKDISAD_CNT_U08}, /* Rte_NvmBlock_CustDiag_Did205B */
    {NULL_PTR, 0x22U, NTCCHKDISAD_CNT_U08}, /* Rte_NvmBlock_CustDiag_Did301A */
    {NULL_PTR, 0x15U, NTCCHKDISAD_CNT_U08}, /* Rte_NvmBlock_CustDiag_DidDE05 */
    {NULL_PTR, 0x12U, NTCCHKDISAD_CNT_U08}, /* Rte_NvmBlock_CustDiag_DidF18C */
    {NULL_PTR, 0x17U, NTCCHKDISAD_CNT_U08}, /* Rte_NvmBlock_CustDiag_DidF18A */
    {NULL_PTR, 0x1AU, NTCCHKDISAD_CNT_U08}, /* Rte_NvmBlock_CustDiag_DidF166 */
    {NULL_PTR, 0x11U, NTCCHKDISAD_CNT_U08}, /* Rte_NvmBlock_CustDiag_DidF163 */
    {NULL_PTR, 0x1BU, NTCCHKDISAD_CNT_U08}, /* Rte_NvmBlock_CustDiag_DidF162 */
    {NULL_PTR, 0x19U, NTCCHKDISAD_CNT_U08}, /* Rte_NvmBlock_CustDiag_DidF15F */
    {NULL_PTR, 0x10U, NTCCHKDISAD_CNT_U08}, /* Rte_NvmBlock_CustDiag_DidF110 */
    {NULL_PTR, 0x0FU, NTCCHKDISAD_CNT_U08}, /* Rte_NvmBlock_CustDiag_DidEE87 */
    {NULL_PTR, 0x1DU, NTCCHKDISAD_CNT_U08}, /* Rte_NvmBlock_CustDiag_DidEE86 */
    {NULL_PTR, 0x1FU, NTCCHKDISAD_CNT_U08}, /* Rte_NvmBlock_CustDiag_DidEE85 */
    {NULL_PTR, 0x18U, NTCCHKDISAD_CNT_U08}, /* Rte_NvmBlock_CustDiag_DidEE84 */
    {NULL_PTR, 0x24U, NTCCHKDISAD_CNT_U08}, /* Rte_NvmBlock_CustDiag_DidEE83 */
    {NULL_PTR, 0x1CU, NTCCHKDISAD_CNT_U08}, /* Rte_NvmBlock_CustDiag_DidEE82 */
    {NULL_PTR, 0x21U, NTCCHKDISAD_CNT_U08}, /* Rte_NvmBlock_CustDiag_DidEE81 */
    {NULL_PTR, 0x23U, NTCCHKDISAD_CNT_U08}, /* Rte_NvmBlock_CustDiag_DidEE41 */
    {NULL_PTR, 0x16U, NTCCHKDISAD_CNT_U08}, /* Rte_NvmBlock_CustDiag_DidEE40 */
    {NULL_PTR, 0x14U, NTCCHKDISAD_CNT_U08}, /* Rte_NvmBlock_CustDiag_DidEE00 */
    {NULL_PTR, 0x25U, NTCCHKDISAD_CNT_U08}, /* Rte_NvmBlock_CustDiag_DidEED0 */
    {NULL_PTR, 0x1EU, NTCCHKDISAD_CNT_U08}, /* Rte_NvmBlock_CustDiag_DidEE88 */
    {NULL_PTR, 0x0AU, NTCCHKDISAD_CNT_U08}, /* Rte_NvmBlock_CustDiag_Did630F */
    {NULL_PTR, 0x0DU, NTCCHKDISAD_CNT_U08}, /* Rte_NvmBlock_CustDiag_Did630FChk */
    {NULL_PTR, 0x09U, NTCCHKDISAD_CNT_U08}, /* Rte_NvmBlock_CustDiag_DidEE21 */
    {NULL_PTR, 0x0BU, NTCCHKDISAD_CNT_U08}, /* Rte_NvmBlock_CustDiag_DidEE22 */
    {NULL_PTR, 0x0CU, NTCCHKDISAD_CNT_U08}, /* Rte_NvmBlock_CustDiag_DidEE23 */
    {NULL_PTR, 0x0EU, NTCCHKDISAD_CNT_U08}, /* Rte_NvmBlock_CustDiag_DidF190 */
    {NULL_PTR, 0x08U, NTCCHKDISAD_CNT_U08}, /* Rte_NvmBlock_StackMeas_StackMeasApplCrc */
    {NULL_PTR, 0x07U, NTCCHKDISAD_CNT_U08}, /* Rte_NvmBlock_StackMeas_StackMeasRes */
    {NULL_PTR, 0x04U, NTCCHKDISAD_CNT_U08}, /* Rte_NvmBlock_CDD_FordBlaBoxIfCmp1_ActvNiblCtrl */
    {NULL_PTR, 0x03U, NTCCHKDISAD_CNT_U08}, /* Rte_NvmBlock_CDD_FordBlaBoxIfCmp1_LaneAssi */
    {NULL_PTR, 0x06U, NTCCHKDISAD_CNT_U08}, /* Rte_NvmBlock_CDD_FordBlaBoxIfCmp1_PullDriftCmp */
    {NULL_PTR, 0x05U, NTCCHKDISAD_CNT_U08}  /* Rte_NvmBlock_CDD_FordBlaBoxIfCmp1_TrlrBackupAssi */
};

#define CDD_NvMProxy_STOP_SEC_CONST_UNSPECIFIED
#include "CDD_NvMProxy_MemMap.h"

/******************************************** Local Function Prototypes **********************************************/

/*********************************************** Function Definitions ************************************************/

/* End of File */
