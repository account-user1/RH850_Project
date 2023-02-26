
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
* %version:          4 %
* %derived_by:       cz7lt6 %
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
    {NULL_PTR, 0x02U, NTCCHKDISAD_CNT_U08}, /* Rte_NvmBlock_DiagcMgr_DiagcMgrNtcFltAry */
    {NULL_PTR, 0x1DU, NTCCHKDISAD_CNT_U08}, /* Rte_NvmBlock_NvMProxy_ShtdwnClsChk */
    {NULL_PTR, 0x1BU, NTCCHKDISAD_CNT_U08}, /* DCM_NvmBlock_NvMProxy_PRUEFSTEMPEL */
    {NULL_PTR, 0x1CU, NTCCHKDISAD_CNT_U08}, /* DCM_NvmBlock_NvMProxy_ROE */
    {NULL_PTR, 0x1AU, NTCCHKDISAD_CNT_U08}, /* Rte_NvmBlock_CDD_MotAg0Meas_MotAg0CoeffTbl */
    {NULL_PTR, 0x19U, NTCCHKDISAD_CNT_U08}, /* Rte_NvmBlock_CDD_MotAg1Meas_MotAg1CoeffTbl */
    {NULL_PTR, 0x18U, NTCCHKDISAD_CNT_U08}, /* Rte_NvmBlock_CDD_MotAgCmp_MotAgCmpMotAgBackEmf */
    {NULL_PTR, 0x17U, NTCCHKDISAD_CNT_U08}, /* Rte_NvmBlock_HwTqCorrln_HwTqChACmnModCmpLpFilSt */
    {NULL_PTR, 0x16U, NTCCHKDISAD_CNT_U08}, /* Rte_NvmBlock_MotTqCmdSca_MotTqScaFac */
    {NULL_PTR, 0x12U, NTCCHKDISAD_CNT_U08}, /* Rte_NvmBlock_CDD_HwTq5Meas_HwTq5Offs_MirrorBlock */
    {NULL_PTR, 0x15U, NTCCHKDISAD_CNT_U08}, /* Rte_NvmBlock_CDD_HwTq5Meas_HwTq5Sca_MirrorBlock */
    {NULL_PTR, 0x13U, NTCCHKDISAD_CNT_U08}, /* Rte_NvmBlock_CDD_HwTq4Meas_HwTq4Sca_MirrorBlock */
    {NULL_PTR, 0x14U, NTCCHKDISAD_CNT_U08}, /* Rte_NvmBlock_CDD_HwTq4Meas_HwTq4Offs_MirrorBlock */
    {NULL_PTR, 0x0AU, NTCCHKDISAD_CNT_U08}, /* Rte_NvmBlock_CmnMfgSrv_CcaHwPartNr */
    {NULL_PTR, 0x0BU, NTCCHKDISAD_CNT_U08}, /* Rte_NvmBlock_CmnMfgSrv_CcaSerlNr */
    {NULL_PTR, 0x11U, NTCCHKDISAD_CNT_U08}, /* Rte_NvmBlock_CmnMfgSrv_DiRestore */
    {NULL_PTR, 0x08U, NTCCHKDISAD_CNT_U08}, /* Rte_NvmBlock_CmnMfgSrv_EpsSysSerlNr */
    {NULL_PTR, 0x0DU, NTCCHKDISAD_CNT_U08}, /* Rte_NvmBlock_CmnMfgSrv_IgnCntr */
    {NULL_PTR, 0x10U, NTCCHKDISAD_CNT_U08}, /* Rte_NvmBlock_CmnMfgSrv_MfgTmpBuf0 */
    {NULL_PTR, 0x0CU, NTCCHKDISAD_CNT_U08}, /* Rte_NvmBlock_CmnMfgSrv_MfgTmpBuf1 */
    {NULL_PTR, 0x07U, NTCCHKDISAD_CNT_U08}, /* Rte_NvmBlock_CmnMfgSrv_MfgTmpBuf2 */
    {NULL_PTR, 0x0FU, NTCCHKDISAD_CNT_U08}, /* Rte_NvmBlock_CmnMfgSrv_MfgTmpBuf4 */
    {NULL_PTR, 0x0EU, NTCCHKDISAD_CNT_U08}, /* Rte_NvmBlock_CmnMfgSrv_NxtrMfgEnaCntr */
    {NULL_PTR, 0x05U, NTCCHKDISAD_CNT_U08}, /* Rte_NvmBlock_CDD_CurrMeas_CurrMeasEolGainCalSet */
    {NULL_PTR, 0x06U, NTCCHKDISAD_CNT_U08}, /* Rte_NvmBlock_CDD_CurrMeas_CurrMeasEolOffsCalSet */
    {NULL_PTR, 0x04U, NTCNR0AIDX_CNT_U08}, /* Rte_NvmBlock_PolarityCfg_PolarityCfgSaved */
    {NULL_PTR, 0x03U, NTCCHKDISAD_CNT_U08}  /* Rte_NvmBlock_DutyCycThermProtn_FilStVal */
};

#define CDD_NvMProxy_STOP_SEC_CONST_UNSPECIFIED
#include "CDD_NvMProxy_MemMap.h"

/******************************************** Local Function Prototypes **********************************************/

/*********************************************** Function Definitions ************************************************/

/* End of File */
