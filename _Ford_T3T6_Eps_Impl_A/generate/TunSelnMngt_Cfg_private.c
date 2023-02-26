/**********************************************************************************************************************
* Copyright 2015 Nexteer
* Nexteer Confidential
*
* Module File Name:   TunSelnMngt_Cfg_private.c
* Module Description: Private configuration source file for Tuning Selection Management
* Project           : CBD
* Author            : Kevin Smith
***********************************************************************************************************************
* Version Control:
* %version:          5 %
* %derived_by:       gz324f %
*---------------------------------------------------------------------------------------------------------------------
* Date      Rev     Author  Change Description                                                              SCR #
* --------  ------- ------- ---------------------------------------------------------------------------     ----------
* 10/08/15  1       KJS     Initial version of the private source template                                  EA4#1840
* 03/31/16  2       KJS     Updated template to follow ES400A Rev 1                                         EA4#5092
* 08/29/16  3       KJS     Updated template for XCP write region access and anomaly EA4#6672 corrections   EA4#7236
* 05/02/17  4       KJS     Updated template per anomaly EA4#11586                                          EA4#11605
**********************************************************************************************************************/

#include "TunSelnMngt_Cfg_private.h"

/******************************************** File Level Rule Deviations *********************************************/
/* MISRA-C:2004 Rule 19.1 [NXTRDEV 19.1.1]: AUTOSAR requires deviation from this rule for Memory Mapping include statements */
/* MISRA-C:2004 Rule 11.3 [NXTRDEV 11.3.4]: Cast of a variable address to an integer type is required for range checking.*/
/* MISRA-C:2004 Rule 11.4 [NXTRDEV 11.4.5]: Cast of a variable pointer to a pointer of a different type is allowed for the purpose of efficient memory copying */


/********************************************* Embedded Local Constants **********************************************/

/******************************************* Module Specific Data Types **********************************************/

/******************************************** Module Specific Variables **********************************************/

const VAR(TunSelnIdxTblRec1, AUTOMATIC) ININCALCFGTBL_REC[MAXINITIDXCNT_CNT_U08] = {
    {(uint16)Rte_CalprmElementGroup_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP, (uint16)Rte_CalprmElementGroup_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP, 0x00U }, /*IninIdx00 */
    {(uint16)Rte_CalprmElementGroup_CalRegn01Inin00GroupA_DEFAULT_RTE_CALPRM_GROUP, (uint16)Rte_CalprmElementGroup_CalRegn01Inin00GroupA_DEFAULT_RTE_CALPRM_GROUP, 0x00U }, /*IninIdx00 */
    {(uint16)Rte_CalprmElementGroup_CalRegn01Inin00GroupB_DEFAULT_RTE_CALPRM_GROUP, (uint16)Rte_CalprmElementGroup_CalRegn01Inin00GroupB_DEFAULT_RTE_CALPRM_GROUP, 0x00U }, /*IninIdx00 */
    {(uint16)Rte_CalprmElementGroup_CalRegn01Inin00GroupD_DEFAULT_RTE_CALPRM_GROUP, (uint16)Rte_CalprmElementGroup_CalRegn01Inin00GroupD_DEFAULT_RTE_CALPRM_GROUP, 0x00U }, /*IninIdx00 */
    {(uint16)Rte_CalprmElementGroup_CalRegn02Inin00_DEFAULT_RTE_CALPRM_GROUP, (uint16)Rte_CalprmElementGroup_CalRegn02Inin00_DEFAULT_RTE_CALPRM_GROUP, 0x00U }, /*IninIdx00 */
    {(uint16)Rte_CalprmElementGroup_CalRegn02Inin00GroupA_DEFAULT_RTE_CALPRM_GROUP, (uint16)Rte_CalprmElementGroup_CalRegn02Inin00GroupA_DEFAULT_RTE_CALPRM_GROUP, 0x00U }, /*IninIdx00 */
    {(uint16)Rte_CalprmElementGroup_CalRegn02Inin00GroupB_DEFAULT_RTE_CALPRM_GROUP, (uint16)Rte_CalprmElementGroup_CalRegn02Inin00GroupB_DEFAULT_RTE_CALPRM_GROUP, 0x00U }  /*IninIdx00 */
};

const VAR(TunSelnIdxTblRec1, AUTOMATIC) RTCALCFGTBL_REC[MAXRTIDXCNT_CNT_U08] = {
    {(uint16)Rte_CalprmElementGroup_CalRegn01Rt00_DEFAULT_RTE_CALPRM_GROUP, (uint16)Rte_CalprmElementGroup_CalRegn01Rt00_DEFAULT_RTE_CALPRM_GROUP, 0x00U }, /*RtIdx00 */
    {(uint16)Rte_CalprmElementGroup_CalRegn02Rt00GroupA_DEFAULT_RTE_CALPRM_GROUP, (uint16)Rte_CalprmElementGroup_CalRegn02Rt00GroupA_DEFAULT_RTE_CALPRM_GROUP, 0x00U }, /*RtIdx00 */
    {(uint16)Rte_CalprmElementGroup_CalRegn02Rt00GroupB_DEFAULT_RTE_CALPRM_GROUP, (uint16)Rte_CalprmElementGroup_CalRegn02Rt00GroupB_DEFAULT_RTE_CALPRM_GROUP, 0x00U }, /*RtIdx00 */
    {(uint16)Rte_CalprmElementGroup_CalRegn01Rt01_DEFAULT_RTE_CALPRM_GROUP, (uint16)Rte_CalprmElementGroup_CalRegn01Rt00_DEFAULT_RTE_CALPRM_GROUP, 0x01U }, /*RtIdx01 */
    {(uint16)Rte_CalprmElementGroup_CalRegn02Rt01GroupA_DEFAULT_RTE_CALPRM_GROUP, (uint16)Rte_CalprmElementGroup_CalRegn02Rt00GroupA_DEFAULT_RTE_CALPRM_GROUP, 0x01U }, /*RtIdx01 */
    {(uint16)Rte_CalprmElementGroup_CalRegn02Rt01GroupB_DEFAULT_RTE_CALPRM_GROUP, (uint16)Rte_CalprmElementGroup_CalRegn02Rt00GroupB_DEFAULT_RTE_CALPRM_GROUP, 0x01U }, /*RtIdx01 */
    {(uint16)Rte_CalprmElementGroup_CalRegn01Rt02_DEFAULT_RTE_CALPRM_GROUP, (uint16)Rte_CalprmElementGroup_CalRegn01Rt00_DEFAULT_RTE_CALPRM_GROUP, 0x02U }, /*RtIdx02 */
    {(uint16)Rte_CalprmElementGroup_CalRegn02Rt02GroupA_DEFAULT_RTE_CALPRM_GROUP, (uint16)Rte_CalprmElementGroup_CalRegn02Rt00GroupA_DEFAULT_RTE_CALPRM_GROUP, 0x02U }, /*RtIdx02 */
    {(uint16)Rte_CalprmElementGroup_CalRegn02Rt02GroupB_DEFAULT_RTE_CALPRM_GROUP, (uint16)Rte_CalprmElementGroup_CalRegn02Rt00GroupB_DEFAULT_RTE_CALPRM_GROUP, 0x02U }, /*RtIdx02 */
    {(uint16)Rte_CalprmElementGroup_CalRegn01Rt03_DEFAULT_RTE_CALPRM_GROUP, (uint16)Rte_CalprmElementGroup_CalRegn01Rt00_DEFAULT_RTE_CALPRM_GROUP, 0x03U }, /*RtIdx03 */
    {(uint16)Rte_CalprmElementGroup_CalRegn02Rt03GroupA_DEFAULT_RTE_CALPRM_GROUP, (uint16)Rte_CalprmElementGroup_CalRegn02Rt00GroupA_DEFAULT_RTE_CALPRM_GROUP, 0x03U }, /*RtIdx03 */
    {(uint16)Rte_CalprmElementGroup_CalRegn02Rt03GroupB_DEFAULT_RTE_CALPRM_GROUP, (uint16)Rte_CalprmElementGroup_CalRegn02Rt00GroupB_DEFAULT_RTE_CALPRM_GROUP, 0x03U }, /*RtIdx03 */
    {(uint16)Rte_CalprmElementGroup_CalRegn01Rt04_DEFAULT_RTE_CALPRM_GROUP, (uint16)Rte_CalprmElementGroup_CalRegn01Rt00_DEFAULT_RTE_CALPRM_GROUP, 0x04U }, /*RtIdx04 */
    {(uint16)Rte_CalprmElementGroup_CalRegn02Rt04GroupA_DEFAULT_RTE_CALPRM_GROUP, (uint16)Rte_CalprmElementGroup_CalRegn02Rt00GroupA_DEFAULT_RTE_CALPRM_GROUP, 0x04U }, /*RtIdx04 */
    {(uint16)Rte_CalprmElementGroup_CalRegn02Rt04GroupB_DEFAULT_RTE_CALPRM_GROUP, (uint16)Rte_CalprmElementGroup_CalRegn02Rt00GroupB_DEFAULT_RTE_CALPRM_GROUP, 0x04U }, /*RtIdx04 */
    {(uint16)Rte_CalprmElementGroup_CalRegn01Rt05_DEFAULT_RTE_CALPRM_GROUP, (uint16)Rte_CalprmElementGroup_CalRegn01Rt00_DEFAULT_RTE_CALPRM_GROUP, 0x05U }, /*RtIdx05 */
    {(uint16)Rte_CalprmElementGroup_CalRegn02Rt05GroupA_DEFAULT_RTE_CALPRM_GROUP, (uint16)Rte_CalprmElementGroup_CalRegn02Rt00GroupA_DEFAULT_RTE_CALPRM_GROUP, 0x05U }, /*RtIdx05 */
    {(uint16)Rte_CalprmElementGroup_CalRegn02Rt05GroupB_DEFAULT_RTE_CALPRM_GROUP, (uint16)Rte_CalprmElementGroup_CalRegn02Rt00GroupB_DEFAULT_RTE_CALPRM_GROUP, 0x05U }  /*RtIdx05 */
};

const VAR(TunSelnOnlineCalIdxTblRec1, AUTOMATIC) ONLINECALCFGTBL_REC[MAXONLINECALCFGCNT_CNT_U08] = {
    {(uint8 *)(&OnlineRamCalTbl_C.GroupA.CalRegn01CmnGroupA), sizeof(OnlineRamCalTbl_C.GroupA.CalRegn01CmnGroupA), (uint16)Rte_CalprmElementGroup_CalRegn01CmnGroupA_DEFAULT_RTE_CALPRM_GROUP, 0x00U}, /*GroupA */
    {(uint8 *)(&OnlineRamCalTbl_C.GroupA.CalRegn02CmnGroupA), sizeof(OnlineRamCalTbl_C.GroupA.CalRegn02CmnGroupA), (uint16)Rte_CalprmElementGroup_CalRegn02CmnGroupA_DEFAULT_RTE_CALPRM_GROUP, 0x00U}, /*GroupA */
    {(uint8 *)(&OnlineRamCalTbl_C.GroupA.CalRegn01Inin00GroupA), sizeof(OnlineRamCalTbl_C.GroupA.CalRegn01Inin00GroupA), (uint16)Rte_CalprmElementGroup_CalRegn01Inin00GroupA_DEFAULT_RTE_CALPRM_GROUP, 0x00U}, /*GroupA */
    {(uint8 *)(&OnlineRamCalTbl_C.GroupA.CalRegn02Inin00GroupA), sizeof(OnlineRamCalTbl_C.GroupA.CalRegn02Inin00GroupA), (uint16)Rte_CalprmElementGroup_CalRegn02Inin00GroupA_DEFAULT_RTE_CALPRM_GROUP, 0x00U}, /*GroupA */
    {(uint8 *)(&OnlineRamCalTbl_C.GroupA.CalRegn02Rt00GroupA), sizeof(OnlineRamCalTbl_C.GroupA.CalRegn02Rt00GroupA), (uint16)Rte_CalprmElementGroup_CalRegn02Rt00GroupA_DEFAULT_RTE_CALPRM_GROUP, 0x00U}, /*GroupA */
    {(uint8 *)(&OnlineRamCalTbl_C.GroupB.CalRegn02CmnGroupB), sizeof(OnlineRamCalTbl_C.GroupB.CalRegn02CmnGroupB), (uint16)Rte_CalprmElementGroup_CalRegn02CmnGroupB_DEFAULT_RTE_CALPRM_GROUP, 0x01U}, /*GroupB */
    {(uint8 *)(&OnlineRamCalTbl_C.GroupB.CalRegn01Inin00GroupB), sizeof(OnlineRamCalTbl_C.GroupB.CalRegn01Inin00GroupB), (uint16)Rte_CalprmElementGroup_CalRegn01Inin00GroupB_DEFAULT_RTE_CALPRM_GROUP, 0x01U}, /*GroupB */
    {(uint8 *)(&OnlineRamCalTbl_C.GroupB.CalRegn02Inin00GroupB), sizeof(OnlineRamCalTbl_C.GroupB.CalRegn02Inin00GroupB), (uint16)Rte_CalprmElementGroup_CalRegn02Inin00GroupB_DEFAULT_RTE_CALPRM_GROUP, 0x01U}, /*GroupB */
    {(uint8 *)(&OnlineRamCalTbl_C.GroupB.CalRegn02Rt00GroupB), sizeof(OnlineRamCalTbl_C.GroupB.CalRegn02Rt00GroupB), (uint16)Rte_CalprmElementGroup_CalRegn02Rt00GroupB_DEFAULT_RTE_CALPRM_GROUP, 0x01U}, /*GroupB */
    {(uint8 *)(&OnlineRamCalTbl_C.GroupD.CalRegn01Inin00GroupD), sizeof(OnlineRamCalTbl_C.GroupD.CalRegn01Inin00GroupD), (uint16)Rte_CalprmElementGroup_CalRegn01Inin00GroupD_DEFAULT_RTE_CALPRM_GROUP, 0x02U}  /*GroupD */
};

const VAR(uint32, AUTOMATIC) ONLINECALSEGINFOTBL_U32[ONLINECALGROUPS_CNT_U08] = {
    sizeof(OnlineRamCalTbl_C.GroupA),
    sizeof(OnlineRamCalTbl_C.GroupB),
    sizeof(OnlineRamCalTbl_C.GroupD)
};
/******************************************** Local Function Prototypes **********************************************/

/*********************************************** Function Definitions ************************************************/

/**********************************************************************************************************************
* Name:         TunSelnMngt_ChkXcpWrAcs
*
* Description:  Function is used to check the XCP write access for the provided address. If the address falls within
*               one of the defined regions, the write is allowed to proceed, otherwise it is rejected and a negative
*               response is returned.  
*
* Inputs:       ReqAdr_Cnt_T_u32 - Requested address for the XCP write
*
* Outputs:      Rtn_Cnt_T_logl - TRUE: The write is within a defined region and allowed to proceed, FALSE: Write 
*                                not allowed for that address, reject write. 
*
* Usage Notes:  Function shall only be used by TunSelnMngt and shall not be used by outside applications. 
**********************************************************************************************************************/
FUNC(boolean, TunSelnMngt_CODE) TunSelnMngt_ChkXcpWrAcs(uint32 ReqAdr_Cnt_T_u32)
{
    VAR(boolean, AUTOMATIC) Rtn_Cnt_T_logl = FALSE;

#if (TUNSELNMNGTDEVLPMODENA == STD_ON)
    /* Verify requested address falls in a development mode region */
    if( ( (ReqAdr_Cnt_T_u32 >= (uint32)&(OnlineRamCalTbl_C.byte[0])) && (ReqAdr_Cnt_T_u32 <= (uint32)&(OnlineRamCalTbl_C.byte[(ONLINECALRAMTBL_CNT_U16-1U)]))) ||
        ( (ReqAdr_Cnt_T_u32 >= (uint32)(0xFEBE0000UL)) && (ReqAdr_Cnt_T_u32 <= (uint32)(0xFEBFFFFFUL))) )
#else
    /* Verify requested address falls in a production region */
    if( ( (ReqAdr_Cnt_T_u32 >= (uint32)&(OnlineRamCalTbl_C.byte[0])) && (ReqAdr_Cnt_T_u32 <= (uint32)&(OnlineRamCalTbl_C.byte[(ONLINECALRAMTBL_CNT_U16-1U)]))) )
#endif
    {
        Rtn_Cnt_T_logl = TRUE;
    }

    return Rtn_Cnt_T_logl;
}

