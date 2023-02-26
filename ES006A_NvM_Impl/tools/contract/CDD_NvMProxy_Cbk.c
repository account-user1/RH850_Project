/**********************************************************************************************************************
* Copyright 2015, 2016 Nexteer 
* Nexteer Confidential
*
* Module File Name:   CDD_NvMProxy_Cbk.c
* Module Description: Callback operations used by NvMProxy
* Project           : CBD 
* Author            : Kevin Smith
***********************************************************************************************************************
* Version Control:
* %version:          4 %
* %derived_by:       cz7lt6 %
*----------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author         Change Description                                                           SCR #
* -------   -------  --------  ---------------------------------------------------------------------------     --------
* 07/15/15  1        KJS       Initial Version                                                                 EA4#471
* 01/27/16  2        KJS       Renamed template to match EA4 naming conventions                                EA4#3443
* 06/29/16  3        OT        Added functionality for quick ignition cycles                                   EA4#6448
* 09/28/16  4        KJS       EA4 naming convention corrections                                               EA4#7779
**********************************************************************************************************************/

#include "Std_Types.h"
#include "NvM.h"
#include "CDD_NvMProxy.h"
#include "CDD_NvMProxy_Cbk.h"
#include "Nvm_PrivateCfg.h"
#include "Rte_CDD_NvMProxy.h"

/******************************************** File Level Rule Deviations *********************************************/
/* MISRA-C:2004 Rule 19.1 [NXTRDEV 19.1.1]: AUTOSAR requires deviation from this rule for Memory Mapping include statements */

/********************************************* Embedded Local Constants **********************************************/
#define NVMPROXY_RTE_NVMBLOCK_NVMPROXY_SHTDWNCLSCHK_IDX_CNT_U08 29U

/******************************************* Module Specific Data Types **********************************************/

typedef struct {
    uint8        BlockId;
    const uint8* NvMBuffer;
} NtNvMReadOperCallBackRec;

typedef struct {
    uint8   BlockId;
    uint8*  NvMBuffer;
} NtNvMWrOperCallBackRec;

/******************************************** Module Specific Variables **********************************************/

#define CDD_NvMProxy_START_SEC_CONST_UNSPECIFIED
#include "CDD_NvMProxy_MemMap.h"


/**********************************************************************************************************************
* Name:         NvMProxy_MultiBlkCallBack
*
* Description:  Multi block callback for the NvM component.  After a WriteAll operation, this callback restores the
*               RAM block status flags (in case of a quick ignition cycle).
*
* Inputs:       ServiceId_Cnt_T_u08 - the service that is being run (ReadAll/WriteAll)
*               JobStatus_Cnt_T_u08 - status of job (pending, completed okay, completed not okay)
*
* Outputs:      N/A
*
* Usage Notes:  The NvM multi block callback does not call this routine when the status is pending, however, the BswM 
* function need to call this function prior to calling the WriteAll. Pending should be passed so that the PIM is 
* updated with all the block statues in case of a quick ignition cycle. This call back is called by the NvM multi 
* block callback when the write all has completed or is cancelled by the NvM_CancelWriteAll() or NvM_KilLWriteAll()
**********************************************************************************************************************/
FUNC(void, CDD_NvMProxy_CODE) NvMProxy_MultiBlkCallBack( NvM_ServiceIdType SrvId_Cnt_T_u08,
                                                         NvM_RequestResultType JobSts_Cnt_T_u08 )
{
    VAR(uint16, AUTOMATIC) Idx_Cnt_T_u16;
    
    if( NVM_WRITE_ALL == SrvId_Cnt_T_u08 )
    {
        if( NVM_REQ_PENDING == JobSts_Cnt_T_u08 )
        {
            /* Index is started at 1 because 0 is the multiblock and is not needed to be processed */
            for( Idx_Cnt_T_u16 = 1U; Idx_Cnt_T_u16 < NVM_TOTAL_NUM_OF_NVRAM_BLOCKS; Idx_Cnt_T_u16++ )
            {
                if( (NvM_BlockMngmtArea_at[Idx_Cnt_T_u16].NvRamAttributes_u8 & NVM_STATE_CHANGED_SET) != 0U )
                {
                    Rte_Pim_NvmBlkActv()[Idx_Cnt_T_u16] = TRUE;
                }
                else
                {
                    Rte_Pim_NvmBlkActv()[Idx_Cnt_T_u16] = FALSE;
                }
            }

            *Rte_Pim_NvmStsCollctd() = TRUE;
        }
        else
        {
            if( TRUE == *Rte_Pim_NvmStsCollctd() )
            {
                /* Index is started at 1 because 0 is the multiblock and is not needed to be processed */
                for( Idx_Cnt_T_u16 = 1U; Idx_Cnt_T_u16 < NVM_TOTAL_NUM_OF_NVRAM_BLOCKS; Idx_Cnt_T_u16++ )
                {
                    if( TRUE == Rte_Pim_NvmBlkActv()[Idx_Cnt_T_u16] )
                    {
                        (void)NvM_SetRamBlockStatus(Idx_Cnt_T_u16, TRUE);
                    }
                }

                *Rte_Pim_NvmStsCollctd() = FALSE;
            }
        }
    }

    return;
}


/**********************************************************************************************************************
* Name:         CDD_NvMProxy_ClsChkReadCallBack
*
* Description:  Callback to move data from the NvM RAM buffer to the block NvM RAM shadow (Rte_CDD_NvMProxy_ShtdwnClsChk).
*
* Inputs:       NvMBuffer - Buffer defined by the NvM BSW that the contains the data to be copied into the block's 
*                           RAM shadow. 
*
* Outputs:      E_OK
*
* Usage Notes:  This function is generated if the NvMProxy generation script.
**********************************************************************************************************************/
FUNC(Std_ReturnType, AUTOMATIC) CDD_NvMProxy_ClsChkReadCallBack( const void * NvMBuffer )
{
    VAR(uint16, AUTOMATIC) Idx_Cnt_T_u16;

    for(Idx_Cnt_T_u16 = 0u; Idx_Cnt_T_u16 < NvM_BlockDescriptorTable_at[NVMPROXY_RTE_NVMBLOCK_NVMPROXY_SHTDWNCLSCHK_IDX_CNT_U08].NvBlockLength_u16; Idx_Cnt_T_u16++)
    {
        ((uint8 *)(NvM_BlockDescriptorTable_at[NVMPROXY_RTE_NVMBLOCK_NVMPROXY_SHTDWNCLSCHK_IDX_CNT_U08].RamBlockDataAddr_t))[Idx_Cnt_T_u16] = ((uint8 *)NvMBuffer)[Idx_Cnt_T_u16];
    }

    return E_OK;
}

/**********************************************************************************************************************
* Name:         CDD_NvMProxy_ClsChkWrCallBack
*
* Description:  Callback to move data from the block NvM RAM shadow (Rte_CDD_NvMProxy_ShtdwnClsChk) to the NvM RAM buffer
*
* Inputs:       NvMBuffer - Buffer defined by the NvM BSW that the contains the data to be copied into the block's 
*                           RAM shadow. 
*
* Outputs:      E_OK
*
* Usage Notes:  This function is generated if the NvMProxy generation script.
**********************************************************************************************************************/
FUNC(Std_ReturnType, AUTOMATIC) CDD_NvMProxy_ClsChkWrCallBack( void * NvMBuffer )
{
    VAR(uint16, AUTOMATIC) Idx_Cnt_T_u16;

    for(Idx_Cnt_T_u16 = 0u; Idx_Cnt_T_u16 < NvM_BlockDescriptorTable_at[NVMPROXY_RTE_NVMBLOCK_NVMPROXY_SHTDWNCLSCHK_IDX_CNT_U08].NvBlockLength_u16; Idx_Cnt_T_u16++)
    {
        ((uint8 *)NvMBuffer)[Idx_Cnt_T_u16] = ((uint8 *)(NvM_BlockDescriptorTable_at[NVMPROXY_RTE_NVMBLOCK_NVMPROXY_SHTDWNCLSCHK_IDX_CNT_U08].RamBlockDataAddr_t))[Idx_Cnt_T_u16];
    }

    return E_OK;
}


#define CDD_NvMProxy_STOP_SEC_CONST_UNSPECIFIED
#include "CDD_NvMProxy_MemMap.h"

