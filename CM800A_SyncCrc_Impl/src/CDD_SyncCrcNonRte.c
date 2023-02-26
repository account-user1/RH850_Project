/**********************************************************************************************************************
* Copyright 2016, 2017 Nexteer
* Nexteer Confidential
*
* Module File Name:   CDD_SyncCrcNonRte.c
* Module Description: Non-Rte Source file for CM800A Sync CRC.
* Project           : CBD
* Author            : Kevin Smith
***********************************************************************************************************************
* Version Control:
* %version:          3 %
* %derived_by:       cz7lt6 %
*---------------------------------------------------------------------------------------------------------------------
* Date      Rev     Author  Change Description                                                              SCR #
* --------  ------- ------- ---------------------------------------------------------------------------     ----------
* 01/12/16  1       KJS     Initial version                                                                 EA4#5405
* 06/01/17  2       KJS     Updates to support all RH850 hardware variants                                  EA4#11817
* 07/05/17  3       KJS     Corrected anomaly EA4#13207 where GetTaskID was causing an alignment error      EA4#13223
**********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
#include "Rte_CDD_SyncCrc.h"
#include "CDD_SyncCrc.h"
#include "CDD_SyncCrc_private.h"
#include "CDD_SyncCrc_Cfg_private.h"

/******************************************** File Level Rule Deviations *********************************************/
/* MISRA-C:2004 Rule 19.1 [NXTRDEV 19.1.1]: AUTOSAR requires deviation from this rule for Memory Mapping include statements */

/********************************************* Embedded Local Constants **********************************************/

/******************************************** Module Specific Variables **********************************************/

/******************************************** Local Function Prototypes **********************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of include and declaration area >>          DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

#define CDD_SyncCrc_START_SEC_CODE
#include "CDD_SyncCrc_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
* Name:         SyncCrcInit0
*
* Description:  Non-Rte init routine.
*
* Inputs:       None
*
* Outputs:      None
*
* Usage Notes:  This routine is called during cold init and must be called before any components utilize any of the 
*               API functions available by this module.
**********************************************************************************************************************/
FUNC(void, CDD_SyncCrc_CODE) SyncCrcInit0(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
    VAR(uint8, AUTOMATIC) Idx_Cnt_T_u08;

    /* Initialize PIM */
    /* REQ: CM800A #78 I : FDD sections 5.1.1 */
    for( Idx_Cnt_T_u08 = 0U; Idx_Cnt_T_u08 < MAXNROFCRCHWUNIT_CNT_U08; Idx_Cnt_T_u08++ )
    {
        Rte_Pim_CrcHwSts()[Idx_Cnt_T_u08].TaskId = INVLDTASKID_CNT_U32;

        if (Idx_Cnt_T_u08 < NROFACTVCRCHWUNIT_CNT_U08)
        {
            Rte_Pim_CrcHwSts()[Idx_Cnt_T_u08].CrcHwSts = CRCHWSTS_AVL;
        }
        else
        {
            /* Configuration limits number of CRC units, marked extras as not enabled */
            Rte_Pim_CrcHwSts()[Idx_Cnt_T_u08].CrcHwSts = CRCHWSTS_NOTENAD;
        }
    }
    /* ENDREQ: CM800A #78 */

    return;
}

#if( STD_ON == ARWRPRENAD_CNT_U08 )
/**********************************************************************************************************************
* Name:         Crc_CalculateCRC8
*
* Description:  AUTOSAR API definition for CRC8 SAE J1850
*
* Inputs:       Crc_DataPtr - Pointer to start address of the data block
*               Crc_Length - Length of the data block to be calculated in bytes
*               Crc_StartValue8 - Start value when the algorithm starts
*               Crc_IsFirstCall - True: First call in a sequence or individual CRC calculation, start from initial value
*                                 False: Subsequent call in a call sequence, Crc_StartValue8 is the return from the 
                                         previous call.
*
* Outputs:      CrcRes_Cnt_T_u08 - 8-Bit CRC return
*
* Usage Notes:  Developer will only allow const pointer definitions in service client/server port definitions. Since the 
*               ports are on the application level, the 'const-ness' is removed from the data pointer by casting back 
*               to a uint8 pointer.
**********************************************************************************************************************/
FUNC(uint8, CDD_SyncCrc_CODE) Crc_CalculateCRC8( const uint8* Crc_DataPtr, uint32 Crc_Length, 
                                                 uint8 Crc_StartValue8, boolean Crc_IsFirstCall )
{
    /* REQ: CM800A #51 I : FDD sections 5.3.3 */
    VAR(uint8, AUTOMATIC) CrcRes_Cnt_T_u08;
    (void)Calc8BitCrc_Oper( (uint8 *)Crc_DataPtr, Crc_Length, Crc_StartValue8, Crc_IsFirstCall, &CrcRes_Cnt_T_u08 );

    return CrcRes_Cnt_T_u08;
    /* ENDREQ: #51 */
}

/**********************************************************************************************************************
* Name:         Crc_CalculateCRC8H2F
*
* Description:  AUTOSAR API definition for CRC8 0x2F
*
* Inputs:       Crc_DataPtr - Pointer to start address of the data block
*               Crc_Length - Length of the data block to be calculated in bytes
*               Crc_StartValue8H2F - Start value when the algorithm starts
*               Crc_IsFirstCall - True: First call in a sequence or individual CRC calculation, start from initial value
*                                 False: Subsequent call in a call sequence, Crc_StartValue8H2F is the return from the 
                                         previous call.
*
* Outputs:      CrcRes_Cnt_T_u08 - 8-Bit CRC return
*
* Usage Notes:  Developer will only allow const pointer definitions in service client/server port definitions. Since the 
*               ports are on the application level, the 'const-ness' is removed from the data pointer by casting back 
*               to a uint8 pointer.
**********************************************************************************************************************/
FUNC(uint8, CDD_SyncCrc_CODE) Crc_CalculateCRC8H2F( const uint8* Crc_DataPtr, uint32 Crc_Length, 
                                                    uint8 Crc_StartValue8H2F, boolean Crc_IsFirstCall )
{
    /* REQ: CM800A #51 I : FDD sections 5.3.4 */
    VAR(uint8, AUTOMATIC) CrcRes_Cnt_T_u08;
    (void)Calc8BitCrc0X2F_Oper( (uint8 *)Crc_DataPtr, Crc_Length, Crc_StartValue8H2F, Crc_IsFirstCall, &CrcRes_Cnt_T_u08 );

    return CrcRes_Cnt_T_u08;
    /* ENDREQ: #51 */
}

/**********************************************************************************************************************
* Name:         Crc_CalculateCRC16
*
* Description:  AUTOSAR API definition for CRC16 CCITT
*
* Inputs:       Crc_DataPtr - Pointer to start address of the data block
*               Crc_Length - Length of the data block to be calculated in bytes
*               Crc_StartValue16 - Start value when the algorithm starts
*               Crc_IsFirstCall - True: First call in a sequence or individual CRC calculation, start from initial value
*                                 False: Subsequent call in a call sequence, Crc_StartValue16 is the return from the 
                                         previous call.
*
* Outputs:      CrcRes_Cnt_T_u16 - 16-Bit CRC return
*
* Usage Notes:  Developer will only allow const pointer definitions in service client/server port definitions. Since the 
*               ports are on the application level, the 'const-ness' is removed from the data pointer by casting back 
*               to a uint8 pointer.
**********************************************************************************************************************/
FUNC(uint16, CDD_SyncCrc_CODE) Crc_CalculateCRC16( const uint8* Crc_DataPtr, uint32 Crc_Length, 
                                                   uint16 Crc_StartValue16, boolean Crc_IsFirstCall )
{
    /* REQ: CM800A #51 I : FDD sections 5.3.2 */
    VAR(uint16, AUTOMATIC) CrcRes_Cnt_T_u16;
    (void)Calc16BitCrc_u08_Oper( (uint8 *)Crc_DataPtr, Crc_Length, Crc_StartValue16, Crc_IsFirstCall, &CrcRes_Cnt_T_u16 );

    return CrcRes_Cnt_T_u16;
    /* ENDREQ: #51 */
}

/**********************************************************************************************************************
* Name:         Crc_CalculateCRC32
*
* Description:  AUTOSAR API definition for CRC32 Ethernet
*
* Inputs:       Crc_DataPtr - Pointer to start address of the data block
*               Crc_Length - Length of the data block to be calculated in bytes
*               Crc_StartValue32 - Start value when the algorithm starts
*               Crc_IsFirstCall - True: First call in a sequence or individual CRC calculation, start from initial value
*                                 False: Subsequent call in a call sequence, Crc_StartValue32 is the return from the 
                                         previous call.
*
* Outputs:      CrcRes_Cnt_T_u32 - 32-Bit CRC return
*
* Usage Notes:  Developer will only allow const pointer definitions in service client/server port definitions. Since the 
*               ports are on the application level, the 'const-ness' is removed from the data pointer by casting back 
*               to a uint8 pointer.
**********************************************************************************************************************/
FUNC(uint32, CDD_SyncCrc_CODE) Crc_CalculateCRC32( const uint8* Crc_DataPtr, uint32 Crc_Length, 
                                                   uint32 Crc_StartValue32, boolean Crc_IsFirstCall )
{
    /* REQ: CM800A #51 I : FDD sections 5.3.1 */
    VAR(uint32, AUTOMATIC) CrcRes_Cnt_T_u32;
    (void)Calc32BitCrc_u08_Oper( (uint8 *)Crc_DataPtr, Crc_Length, Crc_StartValue32, Crc_IsFirstCall, &CrcRes_Cnt_T_u32 );

    return CrcRes_Cnt_T_u32;
    /* ENDREQ: #51 */
}
#endif

#define CDD_SyncCrc_STOP_SEC_CODE
#include "CDD_SyncCrc_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
