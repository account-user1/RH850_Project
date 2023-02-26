/**********************************************************************************************************************
* Copyright 2015, 2016 Nexteer 
* Nexteer Confidential
*
* Module File Name:   CDD_NvMProxyNonRte.c
* Module Description: Non-Rte source file for NvM Proxy ES006A
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
* 01/27/16  2        KJS       Added support for additional error detection for close check, included blocks
*                              marked as NOT_OK to the Proxy check, and EA4 naming convention cleanup.         EA4#3443
* 05/06/16  3        NS        Added check for NVM_REQ_NV_INVALIDATED response per anomaly EA4#5580            EA4#5685
* 07/07/17  4        KJS       Corrected block name and updated default NvM name imported into configurator.  EA4#11819
**********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
#include "Rte_CDD_NvMProxy.h"
#include "CDD_NvMProxy_Cfg_private.h"
#include "NvM.h"
#include "CDD_NvMProxy.h" /* Required to be called after NvM.h */

/******************************************** File Level Rule Deviations *********************************************/
/* MISRA-C:2004 Rule 16.10 [NXTRDEV 16.10.1]: There is no appropriate action to take on the return value for NvM_WriteBlock */
/* MISRA-C:2004 Rule 19.1 [NXTRDEV 19.1.1]: AUTOSAR requires deviation from this rule for Memory Mapping include statements */

/********************************************* Embedded Local Constants **********************************************/

/******************************************** Module Specific Variables **********************************************/

/******************************************** Local Function Prototypes **********************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of include and declaration area >>          DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

#define CDD_NvMProxy_START_SEC_CODE
#include "CDD_NvMProxy_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
* Name:         NvMProxy_Init0
*
* Description:  Initialization function for NvM Proxy during cold init. This function checks all the blocks configured
*               in NvMProxy and checks to see if a fault needs to be triggered. 
*
* Inputs:       N/A
*
* Outputs:      N/A
*
* Usage Notes:  Non-RTE function called during cold init.
**********************************************************************************************************************/
FUNC(void, CDD_NvMProxy_CODE) NvMProxy_Init0(void)
{
    VAR(uint8, AUTOMATIC) Idx_Cnt_T_u08;
    VAR(uint8, AUTOMATIC) ReqRes_Cnt_T_u08;
    VAR(uint16, AUTOMATIC) ShtdownClsChkBlkId_Cnt_T_u16;

    for(Idx_Cnt_T_u08 = 0U; Idx_Cnt_T_u08 < NROFCRCPROXYBLKS_CNT_U08; Idx_Cnt_T_u08++)
    {
        (void)NvM_GetErrorStatus(NvMProxy_CrcFltDescrTbl[Idx_Cnt_T_u08].NvmBlkId, &ReqRes_Cnt_T_u08);

        if( ( ReqRes_Cnt_T_u08 == NVM_REQ_INTEGRITY_FAILED ) || ( ReqRes_Cnt_T_u08 == NVM_REQ_NOT_OK ) || ( ReqRes_Cnt_T_u08 == NVM_REQ_NV_INVALIDATED ) ) 
        {
            if ( NTCCHKDISAD_CNT_U08 != NvMProxy_CrcFltDescrTbl[Idx_Cnt_T_u08].FltResp )
            {
                Rte_Pim_BlkFltTbl()[NvMProxy_CrcFltDescrTbl[Idx_Cnt_T_u08].FltResp].Sts = NTCSTS_FAILD;
                Rte_Pim_BlkFltTbl()[NvMProxy_CrcFltDescrTbl[Idx_Cnt_T_u08].FltResp].Prm = (uint8)(0x00FFU & (NvMProxy_CrcFltDescrTbl[Idx_Cnt_T_u08].NvmBlkId));
            }

            /* Call application specific callback if configured */
            if(NvMProxy_CrcFltDescrTbl[Idx_Cnt_T_u08].FctCallBack != NULL_PTR)
            {
                NvMProxy_CrcFltDescrTbl[Idx_Cnt_T_u08].FctCallBack();
            }

            /* Set RAM block status to FALSE to prevent ROM defaults from being written to NV memory */
            (void)NvM_SetRamBlockStatus(NvMProxy_CrcFltDescrTbl[Idx_Cnt_T_u08].NvmBlkId, FALSE);
        }
        
        /* Queue a write for the close check */
        ShtdownClsChkBlkId_Cnt_T_u16 = (uint16)(NvMConf_NvMBlockDescriptor_Rte_NvmBlock_CDD_NvMProxy_ShtdwnClsChk & 0xFFFFU);
        if(NvMProxy_CrcFltDescrTbl[Idx_Cnt_T_u08].NvmBlkId == ShtdownClsChkBlkId_Cnt_T_u16)
        {
            if( CLSCHKINVLD_CNT_U32 == *Rte_Pim_ShtdwnClsChk() )
            {
                /* Set the BF fault index to true, so the RTE init function will issue the fault to DiagMgr */
                Rte_Pim_BlkFltTbl()[NTCNRBFIDX_CNT_U08].Sts = NTCSTS_FAILD;
                Rte_Pim_BlkFltTbl()[NTCNRBFIDX_CNT_U08].Prm = 0x01u;
            }
            else if( CLSCHKWRALLFAILD_CNT_U32 == *Rte_Pim_ShtdwnClsChk() )
            {
                /* Set BF fault index to true, set param byte to 2 to indicate the write all failed. */
                Rte_Pim_BlkFltTbl()[NTCNRBFIDX_CNT_U08].Sts = NTCSTS_FAILD;
                Rte_Pim_BlkFltTbl()[NTCNRBFIDX_CNT_U08].Prm = 0x02u;
            }
            else
            {
                /* Do nothing */
            }
            /* Write close check to invalid for this key cycle */
            *Rte_Pim_ShtdwnClsChk() = CLSCHKINVLD_CNT_U32;
            (void)NvM_WriteBlock(ShtdownClsChkBlkId_Cnt_T_u16, NULL_PTR);
        }
    }
    
    return;
}

/**********************************************************************************************************************
* Name:        NvMProxy_MainFunction
*
* Description: Main routine stub for NvMProxy function.
*
* Inputs:      N/A
*
* Outputs:     N/A
*
* Usage Notes: 
**********************************************************************************************************************/
FUNC(void, CDD_NvMProxy_CODE) NvMProxy_MainFunction(void)
{
    /* Function stub */
    return;
}

/**********************************************************************************************************************
* Name:         NvMProxy_ClsChkWr_Oper
*
* Description:  Routine to set the close check and call a write block. Required to ensure that the close check is the 
                last block written during shutdown. 
*
* Inputs:       N/A
*
* Outputs:      Std_ReturnType (E_OK/E_NOT_OK)
*
* Usage Notes:  Non-RTE function that shall be called during shutdown after the NvM_WriteAll has completed.
**********************************************************************************************************************/
FUNC(Std_ReturnType, CDD_NvMProxy_CODE) NvMProxy_ClsChkWr_Oper(void)
{
    VAR(Std_ReturnType, AUTOMATIC) RtnVal_Cnt_T_u08;
    
    *Rte_Pim_ShtdwnClsChk() = CLSCHKVLD_CNT_U32;
    RtnVal_Cnt_T_u08 = NvM_WriteBlock((uint16)(NvMConf_NvMBlockDescriptor_Rte_NvmBlock_CDD_NvMProxy_ShtdwnClsChk & 0xFFFFU), NULL_PTR);

    return RtnVal_Cnt_T_u08;
}

#define CDD_NvMProxy_STOP_SEC_CODE
#include "CDD_NvMProxy_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
