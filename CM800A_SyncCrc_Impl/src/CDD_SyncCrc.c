/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  CDD_SyncCrc.c
 *        Config:  C:/Component/CM800A_SyncCrc_Impl-cz7lt6/CM800A_SyncCrc_Impl/tools/Component.dpa
 *     SW-C Type:  CDD_SyncCrc
 *  Generated at:  Wed Jul  5 11:32:46 2017
 *
 *     Generator:  MICROSAR RTE Generator Version 4.13.0
 *                 RTE Core Version 1.13.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  C-Code implementation template for SW-C <CDD_SyncCrc>
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of version logging area >>                DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/**********************************************************************************************************************
* Copyright 2015, 2016, 2017 Nexteer
* Nexteer Confidential
*
* Module File Name:   CDD_SyncCrc.c
* Module Description: Source file for CM800A Sync CRC.
* Project           : CBD
* Author            : Kevin Smith
***********************************************************************************************************************
* Version Control:
* %version:          5 %
* %derived_by:       kzdyfh %
*---------------------------------------------------------------------------------------------------------------------
* Date      Rev     Author  Change Description                                                              SCR #
* --------  ------- ------- ---------------------------------------------------------------------------     ----------
* 10/07/15  1       KJS     Initial version                                                                 EA4#1844
* 01/12/16  2       KJS     Updates for EA4 design processes and additional features to meet FDD Rev1       EA4#5405
* 06/01/17  3       KJS     Updates to support all RH850 hardware variants                                  EA4#11817
* 06/23/17  4       KJS     Corrected anomaly EA4#13207 where GetTaskID was causing an alignment error      EA4#13223
* 08/30/17  5       JWJ     EA4#15069: Corrected the initial value for TaskId in each of the CRC functions  EA4#15072
**********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of version logging area >>                  DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *
 * AUTOSAR Modelling Object Descriptions
 *
 **********************************************************************************************************************
 *
 * Data Types:
 * ===========
 * CrcHwResvCfg1
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * CrcHwResvMod1
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * CrcHwSts1
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 *********************************************************************************************************************/

#include "Rte_CDD_SyncCrc.h" /* PRQA S 0857 */ /* MD_MSR_1.1_857 */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
#include "CDD_SyncCrc_Cfg_private.h"
#include "CDD_SyncCrc_private.h"
#include "Os.h"
#include "NxtrDet.h"

/******************************************** File Level Rule Deviations *********************************************/
/* MISRA-C:2004 Rule 11.3 [NXTRDEV 11.3.1]: Cast of a register address to an integer type is required for writing a 
                                            register address to a register. */
/* MISRA-C:2004 Rule 16.7 [NXTRDEV 16.7.2]: Const is not used in order to match a function prototype in a third-party created API. */
/* MISRA-C:2004 Rule 19.1 [NXTRDEV 19.1.1]: AUTOSAR requires deviation from this rule for Memory Mapping include statements */

/********************************************* Embedded Local Constants **********************************************/
#define CRCININVAL8BIT_CNT_U08      0xFFU
#define CRCININVAL16BIT_CNT_U16     0xFFFFU
#define CRCININVAL32BIT_CNT_U32     0xFFFFFFFFU
#define CRCERRVAL_CNT_U08           0U
#define CRCHWRESVCFGRNG_CNT_U08     7U

/******************************************** Module Specific Variables **********************************************/
#define CDD_SyncCrc_START_SEC_CONST_UNSPECIFIED
#include "CDD_SyncCrc_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
static CONST(uint32, AUTOMATIC) CRCRESVID_CNT_U32[NROFCRCHWUNIT_CNT_U08] = CRCRESVIDDFTVAL_CNT_U32;
static CONST(DataCrcRec1, AUTOMATIC) CRCREG_REC[NROFCRCHWUNIT_CNT_U08] = CRCREGDFTVAL_REC;
#define CDD_SyncCrc_STOP_SEC_CONST_UNSPECIFIED
#include "CDD_SyncCrc_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/******************************************** Local Function Prototypes **********************************************/
static FUNC(void, CDD_SyncCrc_CODE) RelsCrcHwUnit(uint8 CrcHwIdx_Cnt_T_u08);
static FUNC(void, CDD_SyncCrc_CODE) GetAvlCrcHwUnit(boolean ResvCrcCall_Arg);
static FUNC(void, CDD_SyncCrc_CODE) CrcRegCfg( uint8 CrcHwIdx_Arg, CrcHwResvCfg1 CrcCfg_Arg, uint32 StrtVal_Arg );

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of include and declaration area >>          DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *
 * Used AUTOSAR Data Types
 *
 **********************************************************************************************************************
 *
 * Primitive Types:
 * ================
 * boolean: Boolean (standard type)
 * uint16: Integer in interval [0...65535] (standard type)
 * uint32: Integer in interval [0...4294967295] (standard type)
 * uint8: Integer in interval [0...255] (standard type)
 *
 * Enumeration Types:
 * ==================
 * CrcHwResvCfg1: Enumeration of integer in interval [0...255] with enumerators
 *   CRCHWRESVCFG_32BITCRC32BITWIDTH (0U)
 *   CRCHWRESVCFG_32BITCRC16BITWIDTH (1U)
 *   CRCHWRESVCFG_32BITCRC8BITWIDTH (2U)
 *   CRCHWRESVCFG_16BITCRC16BITWIDTH (3U)
 *   CRCHWRESVCFG_16BITCRC8BITWIDTH (4U)
 *   CRCHWRESVCFG_8BITCRC (5U)
 *   CRCHWRESVCFG_8BITCRCH2F (6U)
 * CrcHwResvMod1: Enumeration of integer in interval [0...255] with enumerators
 *   CRCHWRESVMOD_RELS (0U)
 *   CRCHWRESVMOD_RESV (1U)
 * CrcHwSts1: Enumeration of integer in interval [0...255] with enumerators
 *   CRCHWSTS_NOTAVL (0U)
 *   CRCHWSTS_AVL (1U)
 *   CRCHWSTS_BUSY (2U)
 *   CRCHWSTS_NOTENAD (3U)
 *   CRCHWSTS_RESV (4U)
 *   CRCHWSTS_IDXINVLD (255U)
 *
 * Array Types:
 * ============
 * Ary1D_CrcHwStsRec2_8: Array with 8 element(s) of type CrcHwStsRec2
 *
 * Record Types:
 * =============
 * CrcHwStsRec2: Record with elements
 *   TaskId of type uint32
 *   CrcHwSts of type CrcHwSts1
 *
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   CrcHwStsRec2 *Rte_Pim_CrcHwSts(void)
 *     Returnvalue: CrcHwStsRec2* is of type Ary1D_CrcHwStsRec2_8
 *
 *********************************************************************************************************************/


#define CDD_SyncCrc_START_SEC_CODE
#include "CDD_SyncCrc_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: Calc16BitCrc_u08_Oper
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <Calc16BitCrc_u08>
 *
 **********************************************************************************************************************
 *
 * Exclusive Area Access:
 * ======================
 *   void Rte_Enter_SyncCrcExclusiveArea(void)
 *   void Rte_Exit_SyncCrcExclusiveArea(void)
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType Calc16BitCrc_u08_Oper(uint8 *DataPtr_Arg, uint32 Len_Arg, uint16 StrtVal_Arg, boolean FirstCall_Arg, uint16 *CalcCrcRes_Arg)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_Calc16BitCrc_u08_PortIf1_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: Calc16BitCrc_u08_Oper_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, CDD_SyncCrc_CODE) Calc16BitCrc_u08_Oper(P2VAR(uint8, AUTOMATIC, RTE_CDD_SYNCCRC_APPL_VAR) DataPtr_Arg, uint32 Len_Arg, uint16 StrtVal_Arg, boolean FirstCall_Arg, P2VAR(uint16, AUTOMATIC, RTE_CDD_SYNCCRC_APPL_VAR) CalcCrcRes_Arg) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: Calc16BitCrc_u08_Oper (returns application error)
 *********************************************************************************************************************/
    VAR(Std_ReturnType, AUTOMATIC) ErrRtn_Cnt_T_enum = RTE_E_OK;
    VAR(uint8, AUTOMATIC) CrcHwIdx_Cnt_T_u08 = (uint8)CRCHWSTS_IDXINVLD;
    VAR(uint8, AUTOMATIC) CrcHwLoopIdx_Cnt_T_u08;
    VAR(NtCrcIdxRec, AUTOMATIC) CrcIdxPrm_Cnt_T_str;
    VAR(NtResvCallRec, AUTOMATIC) ResvCallPrm_Cnt_T_str;
    VAR(uint32, AUTOMATIC) TaskId_Cnt_T_u32 = INVLDTASKID_CNT_U32;
    VAR(uint32, AUTOMATIC) Idx_Cnt_T_u32;
    VAR(StatusType, AUTOMATIC) TaskIdRtn_Cnt_T_enum;

    /* REQ: CM800A #64 I */ /* REQ: CM800A #66 I : FDD sections 5.2 and 5.2.2.2.1 */

    /* Get the caller's Task ID */
    TaskIdRtn_Cnt_T_enum = GetTaskID((TaskRefType)&TaskId_Cnt_T_u32);

    if (TaskIdRtn_Cnt_T_enum == E_OK)
    {
        /* Reserve CRC HW Unit */
        if( CRCOSREF_CNT_U08 == GetApplicationID() )
        {
            /* Caller is in the same application as this module, call the function directly */
            GetAvlCrcHwUnit(FALSE);
        }
        else
        {
            /* Caller is in a different application as this module, call non-trusted function */
            ResvCallPrm_Cnt_T_str.ResvCall = FALSE;
            Os_CallNonTrustedFunction((Os_NonTrustedFunctionIndexType)NtWrapS_SyncCrc_GetAvlCrcHwUnit, &ResvCallPrm_Cnt_T_str);
        }

        /* Search PIM for the task ID to get the HW unit assigned to this request */
        CrcHwLoopIdx_Cnt_T_u08 = 0U;
        do
        {
            if( TaskId_Cnt_T_u32 == Rte_Pim_CrcHwSts()[CrcHwLoopIdx_Cnt_T_u08].TaskId )
            {
                CrcHwIdx_Cnt_T_u08 = CrcHwLoopIdx_Cnt_T_u08;
                CrcHwLoopIdx_Cnt_T_u08 = NROFACTVCRCHWUNIT_CNT_U08;
            }
            
            CrcHwLoopIdx_Cnt_T_u08++;
        } while( CrcHwLoopIdx_Cnt_T_u08 < NROFACTVCRCHWUNIT_CNT_U08 );

        if((uint8)CRCHWSTS_IDXINVLD != CrcHwIdx_Cnt_T_u08)
        {
            /* Configure HW unit algorithm, access width, and initial start value */
            CRCREG_REC[CrcHwIdx_Cnt_T_u08].Reg_rec->Ctrl_rec.Bit_b08.ISZ = (uint8)CRCDATAACSWIDTH_8BIT;
            CRCREG_REC[CrcHwIdx_Cnt_T_u08].Reg_rec->Ctrl_rec.Bit_b08.POL = (uint8)CRCALG_16BIT;

            if(TRUE == FirstCall_Arg)
            {
                CRCREG_REC[CrcHwIdx_Cnt_T_u08].Reg_rec->Outp_u32 = CRCININVAL16BIT_CNT_U16;
            }
            else
            {
                CRCREG_REC[CrcHwIdx_Cnt_T_u08].Reg_rec->Outp_u32 = StrtVal_Arg;
            }

            /* Calculate CRC */
            for(Idx_Cnt_T_u32 = 0u; Idx_Cnt_T_u32 < Len_Arg; Idx_Cnt_T_u32++)
            {
                CRCREG_REC[CrcHwIdx_Cnt_T_u08].Reg_rec->Inp_u32 = DataPtr_Arg[Idx_Cnt_T_u32];
            }

            /* Return calculated CRC value */
            *CalcCrcRes_Arg = (uint16)(CRCREG_REC[CrcHwIdx_Cnt_T_u08].Reg_rec->Outp_u32);

            /* Release CRC HW Unit */
            if( CRCOSREF_CNT_U08 == GetApplicationID() )
            {
                RelsCrcHwUnit(CrcHwIdx_Cnt_T_u08);
            }
            else
            {
                CrcIdxPrm_Cnt_T_str.CrcHwIdx = CrcHwIdx_Cnt_T_u08;
                Os_CallNonTrustedFunction((Os_NonTrustedFunctionIndexType)NtWrapS_SyncCrc_RelsCrcHwUnit, &CrcIdxPrm_Cnt_T_str);
            }
        }
        else
        {
            /* CRC HW not available - Default value to 0 and set NOT_OK */
            *CalcCrcRes_Arg = CRCERRVAL_CNT_U08;
            ErrRtn_Cnt_T_enum = E_NOT_OK;
            
            #if (STD_ON == NXTRDET_SYNCCRC)
                (void)Det_ReportError(NXTRDET_SYNCCRCMODID_CNT_U16, 0U, 2U, 0U);
            #endif
        }
    }
    else
    {
        /* Invalid task ID - Default value to 0 and set NOT_OK */
        *CalcCrcRes_Arg = CRCERRVAL_CNT_U08;
        ErrRtn_Cnt_T_enum = E_NOT_OK;
        
        #if (STD_ON == NXTRDET_SYNCCRC)
            (void)Det_ReportError(NXTRDET_SYNCCRCMODID_CNT_U16, 0U, 2U, 1U);
        #endif        
    }

    return ErrRtn_Cnt_T_enum;

    /* ENDREQ: CM800A #64 I */ /* ENDREQ: CM800A #66 I */
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: Calc16BitCrc_u16_Oper
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <Calc16BitCrc_u16>
 *
 **********************************************************************************************************************
 *
 * Exclusive Area Access:
 * ======================
 *   void Rte_Enter_SyncCrcExclusiveArea(void)
 *   void Rte_Exit_SyncCrcExclusiveArea(void)
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType Calc16BitCrc_u16_Oper(uint16 *DataPtr_Arg, uint32 Len_Arg, uint16 StrtVal_Arg, boolean FirstCall_Arg, uint16 *CalcCrcRes_Arg)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_Calc16BitCrc_u16_PortIf1_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: Calc16BitCrc_u16_Oper_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, CDD_SyncCrc_CODE) Calc16BitCrc_u16_Oper(P2VAR(uint16, AUTOMATIC, RTE_CDD_SYNCCRC_APPL_VAR) DataPtr_Arg, uint32 Len_Arg, uint16 StrtVal_Arg, boolean FirstCall_Arg, P2VAR(uint16, AUTOMATIC, RTE_CDD_SYNCCRC_APPL_VAR) CalcCrcRes_Arg) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: Calc16BitCrc_u16_Oper (returns application error)
 *********************************************************************************************************************/
    VAR(Std_ReturnType, AUTOMATIC) ErrRtn_Cnt_T_enum = RTE_E_OK;
    VAR(uint8, AUTOMATIC) CrcHwIdx_Cnt_T_u08 = (uint8)CRCHWSTS_IDXINVLD;
    VAR(uint8, AUTOMATIC) CrcHwLoopIdx_Cnt_T_u08;
    VAR(NtCrcIdxRec, AUTOMATIC) CrcIdxPrm_Cnt_T_str;
    VAR(NtResvCallRec, AUTOMATIC) ResvCallPrm_Cnt_T_str;
    VAR(uint32, AUTOMATIC) TaskId_Cnt_T_u32 = INVLDTASKID_CNT_U32;
    VAR(uint32, AUTOMATIC) Idx_Cnt_T_u32;
    VAR(StatusType, AUTOMATIC) TaskIdRtn_Cnt_T_enum;

    /* REQ: CM800A #64 I */ /* REQ: CM800A #66 I : FDD sections 5.2 and 5.2.2.2.2 */
    
    /* Get the caller's Task ID */
    TaskIdRtn_Cnt_T_enum = GetTaskID((TaskRefType)&TaskId_Cnt_T_u32);

    if (TaskIdRtn_Cnt_T_enum == E_OK)
    {
        /* Reserve CRC HW Unit */
        if( CRCOSREF_CNT_U08 == GetApplicationID() )
        {
            /* Caller is in the same application as this module, call the function directly */
            GetAvlCrcHwUnit(FALSE);
        }
        else
        {
            /* Caller is in a different application as this module, call non-trusted function */
            ResvCallPrm_Cnt_T_str.ResvCall = FALSE;
            Os_CallNonTrustedFunction((Os_NonTrustedFunctionIndexType)NtWrapS_SyncCrc_GetAvlCrcHwUnit, &ResvCallPrm_Cnt_T_str);
        }
        
        /* Search PIM for the task ID to get the HW unit assigned to this request */
        CrcHwLoopIdx_Cnt_T_u08 = 0U;
        do
        {
            if( TaskId_Cnt_T_u32 == Rte_Pim_CrcHwSts()[CrcHwLoopIdx_Cnt_T_u08].TaskId )
            {
                CrcHwIdx_Cnt_T_u08 = CrcHwLoopIdx_Cnt_T_u08;
                CrcHwLoopIdx_Cnt_T_u08 = NROFACTVCRCHWUNIT_CNT_U08;
            }
            
            CrcHwLoopIdx_Cnt_T_u08++;
        } while( CrcHwLoopIdx_Cnt_T_u08 < NROFACTVCRCHWUNIT_CNT_U08 );

        if((uint8)CRCHWSTS_IDXINVLD != CrcHwIdx_Cnt_T_u08)
        {
            /* Configure HW unit algorithm, access width, and initial start value */
            CRCREG_REC[CrcHwIdx_Cnt_T_u08].Reg_rec->Ctrl_rec.Bit_b08.ISZ = (uint8)CRCDATAACSWIDTH_16BIT;
            CRCREG_REC[CrcHwIdx_Cnt_T_u08].Reg_rec->Ctrl_rec.Bit_b08.POL = (uint8)CRCALG_16BIT;

            if(TRUE == FirstCall_Arg)
            {
                CRCREG_REC[CrcHwIdx_Cnt_T_u08].Reg_rec->Outp_u32 = CRCININVAL16BIT_CNT_U16;
            }
            else
            {
                CRCREG_REC[CrcHwIdx_Cnt_T_u08].Reg_rec->Outp_u32 = StrtVal_Arg;
            }

            /* Calculate CRC */
            for(Idx_Cnt_T_u32 = 0u; Idx_Cnt_T_u32 < Len_Arg; Idx_Cnt_T_u32++)
            {
                CRCREG_REC[CrcHwIdx_Cnt_T_u08].Reg_rec->Inp_u32 = DataPtr_Arg[Idx_Cnt_T_u32];
            }

            /* Return calculated CRC value */
            *CalcCrcRes_Arg = (uint16)(CRCREG_REC[CrcHwIdx_Cnt_T_u08].Reg_rec->Outp_u32);

            /* Release CRC HW Unit */
            if( CRCOSREF_CNT_U08 == GetApplicationID() )
            {
                RelsCrcHwUnit(CrcHwIdx_Cnt_T_u08);
            }
            else
            {
                CrcIdxPrm_Cnt_T_str.CrcHwIdx = CrcHwIdx_Cnt_T_u08;
                Os_CallNonTrustedFunction((Os_NonTrustedFunctionIndexType)NtWrapS_SyncCrc_RelsCrcHwUnit, &CrcIdxPrm_Cnt_T_str);
            }
        }
        else
        {
            /* CRC HW not available - Default value to 0 and set NOT_OK */
            *CalcCrcRes_Arg = CRCERRVAL_CNT_U08;
            ErrRtn_Cnt_T_enum = E_NOT_OK;
            
            #if (STD_ON == NXTRDET_SYNCCRC)
                (void)Det_ReportError(NXTRDET_SYNCCRCMODID_CNT_U16, 0U, 1U, 0U);
            #endif
        }
    }
    else
    {
        /* Invalid task ID - Default value to 0 and set NOT_OK */
        *CalcCrcRes_Arg = CRCERRVAL_CNT_U08;
        ErrRtn_Cnt_T_enum = E_NOT_OK;
        
        #if (STD_ON == NXTRDET_SYNCCRC)
            (void)Det_ReportError(NXTRDET_SYNCCRCMODID_CNT_U16, 0U, 1U, 1U);
        #endif        
    }

    return ErrRtn_Cnt_T_enum;

    /* ENDREQ: CM800A #64 I */ /* ENDREQ: CM800A #66 I */
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: Calc32BitCrc_u08_Oper
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <Calc32BitCrc_u08>
 *
 **********************************************************************************************************************
 *
 * Exclusive Area Access:
 * ======================
 *   void Rte_Enter_SyncCrcExclusiveArea(void)
 *   void Rte_Exit_SyncCrcExclusiveArea(void)
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType Calc32BitCrc_u08_Oper(uint8 *DataPtr_Arg, uint32 Len_Arg, uint32 StrtVal_Arg, boolean FirstCall_Arg, uint32 *CalcCrcRes_Arg)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_Calc32BitCrc_u08_PortIf1_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: Calc32BitCrc_u08_Oper_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, CDD_SyncCrc_CODE) Calc32BitCrc_u08_Oper(P2VAR(uint8, AUTOMATIC, RTE_CDD_SYNCCRC_APPL_VAR) DataPtr_Arg, uint32 Len_Arg, uint32 StrtVal_Arg, boolean FirstCall_Arg, P2VAR(uint32, AUTOMATIC, RTE_CDD_SYNCCRC_APPL_VAR) CalcCrcRes_Arg) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: Calc32BitCrc_u08_Oper (returns application error)
 *********************************************************************************************************************/
    VAR(Std_ReturnType, AUTOMATIC) ErrRtn_Cnt_T_enum = RTE_E_OK;
    VAR(uint8, AUTOMATIC) CrcHwIdx_Cnt_T_u08 = (uint8)CRCHWSTS_IDXINVLD;
    VAR(uint8, AUTOMATIC) CrcHwLoopIdx_Cnt_T_u08;
    VAR(NtCrcIdxRec, AUTOMATIC) CrcIdxPrm_Cnt_T_str;
    VAR(NtResvCallRec, AUTOMATIC) ResvCallPrm_Cnt_T_str;
    VAR(uint32, AUTOMATIC) TaskId_Cnt_T_u32 = INVLDTASKID_CNT_U32;
    VAR(uint32, AUTOMATIC) Idx_Cnt_T_u32;
    VAR(StatusType, AUTOMATIC) TaskIdRtn_Cnt_T_enum;

    /* REQ: CM800A #64 I */ /* REQ: CM800A #66 I : FDD sections 5.2 and 5.2.1.2.1 */

    /* Get the caller's Task ID */
    TaskIdRtn_Cnt_T_enum = GetTaskID((TaskRefType)&TaskId_Cnt_T_u32);

    if (TaskIdRtn_Cnt_T_enum == E_OK)
    {
        /* Reserve CRC HW Unit */
        if( CRCOSREF_CNT_U08 == GetApplicationID() )
        {
            /* Caller is in the same application as this module, call the function directly */
            GetAvlCrcHwUnit(FALSE);
        }
        else
        {
            /* Caller is in a different application as this module, call non-trusted function */
            ResvCallPrm_Cnt_T_str.ResvCall = FALSE;
            Os_CallNonTrustedFunction((Os_NonTrustedFunctionIndexType)NtWrapS_SyncCrc_GetAvlCrcHwUnit, &ResvCallPrm_Cnt_T_str);
        }
        
        /* Search PIM for the task ID to get the HW unit assigned to this request */
        CrcHwLoopIdx_Cnt_T_u08 = 0U;
        do
        {
            if( TaskId_Cnt_T_u32 == Rte_Pim_CrcHwSts()[CrcHwLoopIdx_Cnt_T_u08].TaskId )
            {
                CrcHwIdx_Cnt_T_u08 = CrcHwLoopIdx_Cnt_T_u08;
                CrcHwLoopIdx_Cnt_T_u08 = NROFACTVCRCHWUNIT_CNT_U08;
            }
            
            CrcHwLoopIdx_Cnt_T_u08++;
        } while( CrcHwLoopIdx_Cnt_T_u08 < NROFACTVCRCHWUNIT_CNT_U08 );

        if((uint8)CRCHWSTS_IDXINVLD != CrcHwIdx_Cnt_T_u08)
        {
            /* Configure HW unit algorithm, access width, and initial start value */
            CRCREG_REC[CrcHwIdx_Cnt_T_u08].Reg_rec->Ctrl_rec.Bit_b08.ISZ = (uint8)CRCDATAACSWIDTH_8BIT;
            CRCREG_REC[CrcHwIdx_Cnt_T_u08].Reg_rec->Ctrl_rec.Bit_b08.POL = (uint8)CRCALG_32BITETH;

            if(TRUE == FirstCall_Arg)
            {
                CRCREG_REC[CrcHwIdx_Cnt_T_u08].Reg_rec->Outp_u32 = CRCININVAL32BIT_CNT_U32;
            }
            else
            {
                CRCREG_REC[CrcHwIdx_Cnt_T_u08].Reg_rec->Outp_u32 = StrtVal_Arg;
            }

            for(Idx_Cnt_T_u32 = 0u; Idx_Cnt_T_u32 < Len_Arg; Idx_Cnt_T_u32++)
            {
                CRCREG_REC[CrcHwIdx_Cnt_T_u08].Reg_rec->Inp_u32 = DataPtr_Arg[Idx_Cnt_T_u32];
            }

            /* Return calculated CRC value */
            *CalcCrcRes_Arg = (uint32)(CRCREG_REC[CrcHwIdx_Cnt_T_u08].Reg_rec->Outp_u32);

            /* Release CRC HW Unit */
            if( CRCOSREF_CNT_U08 == GetApplicationID() )
            {
                RelsCrcHwUnit(CrcHwIdx_Cnt_T_u08);
            }
            else
            {
                CrcIdxPrm_Cnt_T_str.CrcHwIdx = CrcHwIdx_Cnt_T_u08;
                Os_CallNonTrustedFunction((Os_NonTrustedFunctionIndexType)NtWrapS_SyncCrc_RelsCrcHwUnit, &CrcIdxPrm_Cnt_T_str);
            }
        }
        else
        {
            /* CRC HW not available - Default value to 0 and set NOT_OK */
            *CalcCrcRes_Arg = CRCERRVAL_CNT_U08;
            ErrRtn_Cnt_T_enum = E_NOT_OK;
            
            #if (STD_ON == NXTRDET_SYNCCRC)
                (void)Det_ReportError(NXTRDET_SYNCCRCMODID_CNT_U16, 0U, 5U, 0U);
            #endif
        }
    }
    else
    {
        /* Invalid task ID - Default value to 0 and set NOT_OK */
        *CalcCrcRes_Arg = CRCERRVAL_CNT_U08;
        ErrRtn_Cnt_T_enum = E_NOT_OK;
        
        #if (STD_ON == NXTRDET_SYNCCRC)
            (void)Det_ReportError(NXTRDET_SYNCCRCMODID_CNT_U16, 0U, 5U, 1U);
        #endif        
    }

    return ErrRtn_Cnt_T_enum;

    /* ENDREQ: CM800A #64 I */ /* ENDREQ: CM800A #66 I */
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: Calc32BitCrc_u16_Oper
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <Calc32BitCrc_u16>
 *
 **********************************************************************************************************************
 *
 * Exclusive Area Access:
 * ======================
 *   void Rte_Enter_SyncCrcExclusiveArea(void)
 *   void Rte_Exit_SyncCrcExclusiveArea(void)
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType Calc32BitCrc_u16_Oper(uint16 *DataPtr_Arg, uint32 Len_Arg, uint32 StrtVal_Arg, boolean FirstCall_Arg, uint32 *CalcCrcRes_Arg)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_Calc32BitCrc_u16_PortIf1_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: Calc32BitCrc_u16_Oper_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, CDD_SyncCrc_CODE) Calc32BitCrc_u16_Oper(P2VAR(uint16, AUTOMATIC, RTE_CDD_SYNCCRC_APPL_VAR) DataPtr_Arg, uint32 Len_Arg, uint32 StrtVal_Arg, boolean FirstCall_Arg, P2VAR(uint32, AUTOMATIC, RTE_CDD_SYNCCRC_APPL_VAR) CalcCrcRes_Arg) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: Calc32BitCrc_u16_Oper (returns application error)
 *********************************************************************************************************************/
    VAR(Std_ReturnType, AUTOMATIC) ErrRtn_Cnt_T_enum = RTE_E_OK;
    VAR(uint8, AUTOMATIC) CrcHwIdx_Cnt_T_u08 = (uint8)CRCHWSTS_IDXINVLD;
    VAR(uint8, AUTOMATIC) CrcHwLoopIdx_Cnt_T_u08;
    VAR(NtCrcIdxRec, AUTOMATIC) CrcIdxPrm_Cnt_T_str;
    VAR(NtResvCallRec, AUTOMATIC) ResvCallPrm_Cnt_T_str;
    VAR(uint32, AUTOMATIC) TaskId_Cnt_T_u32 = INVLDTASKID_CNT_U32;
    VAR(uint32, AUTOMATIC) Idx_Cnt_T_u32;
    VAR(StatusType, AUTOMATIC) TaskIdRtn_Cnt_T_enum;

    /* REQ: CM800A #64 I */ /* REQ: CM800A #66 I : FDD sections 5.2 and 5.2.1.2.2 */
    
    /* Get the caller's Task ID */
    TaskIdRtn_Cnt_T_enum = GetTaskID((TaskRefType)&TaskId_Cnt_T_u32);

    if(TaskIdRtn_Cnt_T_enum == E_OK)
    {
        /* Reserve CRC HW Unit */
        if( CRCOSREF_CNT_U08 == GetApplicationID() )
        {
            /* Caller is in the same application as this module, call the function directly */
            GetAvlCrcHwUnit(FALSE);
        }
        else
        {
            /* Caller is in a different application as this module, call non-trusted function */
            ResvCallPrm_Cnt_T_str.ResvCall = FALSE;
            Os_CallNonTrustedFunction((Os_NonTrustedFunctionIndexType)NtWrapS_SyncCrc_GetAvlCrcHwUnit, &ResvCallPrm_Cnt_T_str);
        }

        /* Search PIM for the task ID to get the HW unit assigned to this request */
        CrcHwLoopIdx_Cnt_T_u08 = 0U;
        do
        {
            if( TaskId_Cnt_T_u32 == Rte_Pim_CrcHwSts()[CrcHwLoopIdx_Cnt_T_u08].TaskId )
            {
                CrcHwIdx_Cnt_T_u08 = CrcHwLoopIdx_Cnt_T_u08;
                CrcHwLoopIdx_Cnt_T_u08 = NROFACTVCRCHWUNIT_CNT_U08;
            }
            
            CrcHwLoopIdx_Cnt_T_u08++;
        } while( CrcHwLoopIdx_Cnt_T_u08 < NROFACTVCRCHWUNIT_CNT_U08 );

        if((uint8)CRCHWSTS_IDXINVLD != CrcHwIdx_Cnt_T_u08)
        {
            /* Configure HW unit algorithm, access width, and initial start value */
            CRCREG_REC[CrcHwIdx_Cnt_T_u08].Reg_rec->Ctrl_rec.Bit_b08.ISZ = (uint8)CRCDATAACSWIDTH_16BIT;
            CRCREG_REC[CrcHwIdx_Cnt_T_u08].Reg_rec->Ctrl_rec.Bit_b08.POL = (uint8)CRCALG_32BITETH;

            if(TRUE == FirstCall_Arg)
            {
                CRCREG_REC[CrcHwIdx_Cnt_T_u08].Reg_rec->Outp_u32 = CRCININVAL32BIT_CNT_U32;
            }
            else
            {
                CRCREG_REC[CrcHwIdx_Cnt_T_u08].Reg_rec->Outp_u32 = StrtVal_Arg;
            }

            /* Calculate CRC */
            for(Idx_Cnt_T_u32 = 0u; Idx_Cnt_T_u32 < Len_Arg; Idx_Cnt_T_u32++)
            {
                CRCREG_REC[CrcHwIdx_Cnt_T_u08].Reg_rec->Inp_u32 = DataPtr_Arg[Idx_Cnt_T_u32];
            }

            /* Return calculated CRC value */
            *CalcCrcRes_Arg = (uint32)(CRCREG_REC[CrcHwIdx_Cnt_T_u08].Reg_rec->Outp_u32);

            /* Release CRC HW Unit */
            if( CRCOSREF_CNT_U08 == GetApplicationID() )
            {
                RelsCrcHwUnit(CrcHwIdx_Cnt_T_u08);
            }
            else
            {
                CrcIdxPrm_Cnt_T_str.CrcHwIdx = CrcHwIdx_Cnt_T_u08;
                Os_CallNonTrustedFunction((Os_NonTrustedFunctionIndexType)NtWrapS_SyncCrc_RelsCrcHwUnit, &CrcIdxPrm_Cnt_T_str);
            }
        }
        else
        {
            /* CRC HW not available - Default value to 0 and set NOT_OK */
            *CalcCrcRes_Arg = CRCERRVAL_CNT_U08;
            ErrRtn_Cnt_T_enum = E_NOT_OK;
            
            #if (STD_ON == NXTRDET_SYNCCRC)
                (void)Det_ReportError(NXTRDET_SYNCCRCMODID_CNT_U16, 0U, 3U, 0U);
            #endif
        }
    }
    else
    {
        /* Invalid task ID - Default value to 0 and set NOT_OK */
        *CalcCrcRes_Arg = CRCERRVAL_CNT_U08;
        ErrRtn_Cnt_T_enum = E_NOT_OK;
        
        #if (STD_ON == NXTRDET_SYNCCRC)
            (void)Det_ReportError(NXTRDET_SYNCCRCMODID_CNT_U16, 0U, 3U, 1U);
        #endif        
    }

    return ErrRtn_Cnt_T_enum;

    /* ENDREQ: CM800A #64 I */ /* ENDREQ: CM800A #66 I */
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: Calc32BitCrc_u32_Oper
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <Calc32BitCrc_u32>
 *
 **********************************************************************************************************************
 *
 * Exclusive Area Access:
 * ======================
 *   void Rte_Enter_SyncCrcExclusiveArea(void)
 *   void Rte_Exit_SyncCrcExclusiveArea(void)
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType Calc32BitCrc_u32_Oper(uint32 *DataPtr_Arg, uint32 Len_Arg, uint32 StrtVal_Arg, boolean FirstCall_Arg, uint32 *CalcCrcRes_Arg)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_Calc32BitCrc_u32_PortIf1_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: Calc32BitCrc_u32_Oper_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, CDD_SyncCrc_CODE) Calc32BitCrc_u32_Oper(P2VAR(uint32, AUTOMATIC, RTE_CDD_SYNCCRC_APPL_VAR) DataPtr_Arg, uint32 Len_Arg, uint32 StrtVal_Arg, boolean FirstCall_Arg, P2VAR(uint32, AUTOMATIC, RTE_CDD_SYNCCRC_APPL_VAR) CalcCrcRes_Arg) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: Calc32BitCrc_u32_Oper (returns application error)
 *********************************************************************************************************************/
    VAR(Std_ReturnType, AUTOMATIC) ErrRtn_Cnt_T_enum = RTE_E_OK;
    VAR(uint8, AUTOMATIC) CrcHwIdx_Cnt_T_u08 = (uint8)CRCHWSTS_IDXINVLD;
    VAR(uint8, AUTOMATIC) CrcHwLoopIdx_Cnt_T_u08;
    VAR(NtCrcIdxRec, AUTOMATIC) CrcIdxPrm_Cnt_T_str;
    VAR(NtResvCallRec, AUTOMATIC) ResvCallPrm_Cnt_T_str;
    VAR(uint32, AUTOMATIC) TaskId_Cnt_T_u32 = INVLDTASKID_CNT_U32;
    VAR(uint32, AUTOMATIC) Idx_Cnt_T_u32;
    VAR(StatusType, AUTOMATIC) TaskIdRtn_Cnt_T_enum;

    /* REQ: CM800A #64 I */ /* REQ: CM800A #66 I : FDD sections 5.2 and 5.2.1.2.3 */

    /* Get the caller's Task ID */
    TaskIdRtn_Cnt_T_enum = GetTaskID((TaskRefType)&TaskId_Cnt_T_u32);

    if(TaskIdRtn_Cnt_T_enum == E_OK)
    {
        /* Reserve CRC HW Unit */
        if( CRCOSREF_CNT_U08 == GetApplicationID() )
        {
            /* Caller is in the same application as this module, call the function directly */
            GetAvlCrcHwUnit(FALSE);
        }
        else
        {
            /* Caller is in a different application as this module, call non-trusted function */
            ResvCallPrm_Cnt_T_str.ResvCall = FALSE;
            Os_CallNonTrustedFunction((Os_NonTrustedFunctionIndexType)NtWrapS_SyncCrc_GetAvlCrcHwUnit, &ResvCallPrm_Cnt_T_str);
        }

        /* Search PIM for the task ID to get the HW unit assigned to this request */
        CrcHwLoopIdx_Cnt_T_u08 = 0U;
        do
        {
            if( TaskId_Cnt_T_u32 == Rte_Pim_CrcHwSts()[CrcHwLoopIdx_Cnt_T_u08].TaskId )
            {
                CrcHwIdx_Cnt_T_u08 = CrcHwLoopIdx_Cnt_T_u08;
                CrcHwLoopIdx_Cnt_T_u08 = NROFACTVCRCHWUNIT_CNT_U08;
            }
            
            CrcHwLoopIdx_Cnt_T_u08++;
        } while( CrcHwLoopIdx_Cnt_T_u08 < NROFACTVCRCHWUNIT_CNT_U08 );

        if((uint8)CRCHWSTS_IDXINVLD != CrcHwIdx_Cnt_T_u08)
        {
            /* Configure HW unit algorithm, access width, and initial start value */
            CRCREG_REC[CrcHwIdx_Cnt_T_u08].Reg_rec->Ctrl_rec.Bit_b08.ISZ = (uint8)CRCDATAACSWIDTH_32BIT;
            CRCREG_REC[CrcHwIdx_Cnt_T_u08].Reg_rec->Ctrl_rec.Bit_b08.POL = (uint8)CRCALG_32BITETH;

            if(TRUE == FirstCall_Arg)
            {
                CRCREG_REC[CrcHwIdx_Cnt_T_u08].Reg_rec->Outp_u32 = CRCININVAL32BIT_CNT_U32;
            }
            else
            {
                CRCREG_REC[CrcHwIdx_Cnt_T_u08].Reg_rec->Outp_u32 = StrtVal_Arg;
            }

            /* Calculate CRC */
            for(Idx_Cnt_T_u32 = 0u; Idx_Cnt_T_u32 < Len_Arg; Idx_Cnt_T_u32++)
            {
                CRCREG_REC[CrcHwIdx_Cnt_T_u08].Reg_rec->Inp_u32 = DataPtr_Arg[Idx_Cnt_T_u32];
            }

            /* Return calculated CRC value */
            *CalcCrcRes_Arg = (uint32)(CRCREG_REC[CrcHwIdx_Cnt_T_u08].Reg_rec->Outp_u32);

            /* Release CRC HW Unit */
            if( CRCOSREF_CNT_U08 == GetApplicationID() )
            {
                RelsCrcHwUnit(CrcHwIdx_Cnt_T_u08);
            }
            else
            {
                CrcIdxPrm_Cnt_T_str.CrcHwIdx = CrcHwIdx_Cnt_T_u08;
                Os_CallNonTrustedFunction((Os_NonTrustedFunctionIndexType)NtWrapS_SyncCrc_RelsCrcHwUnit, &CrcIdxPrm_Cnt_T_str);
            }
        }
        else
        {
            /* CRC HW not available - Default value to 0 and set NOT_OK */
            *CalcCrcRes_Arg = CRCERRVAL_CNT_U08;
            ErrRtn_Cnt_T_enum = E_NOT_OK;
            
            #if (STD_ON == NXTRDET_SYNCCRC)
                (void)Det_ReportError(NXTRDET_SYNCCRCMODID_CNT_U16, 0U, 4U, 0U);
            #endif
        }
    }
    else
    {
        /* Invalid task ID - Default value to 0 and set NOT_OK */
        *CalcCrcRes_Arg = CRCERRVAL_CNT_U08;
        ErrRtn_Cnt_T_enum = E_NOT_OK;
        
        #if (STD_ON == NXTRDET_SYNCCRC)
            (void)Det_ReportError(NXTRDET_SYNCCRCMODID_CNT_U16, 0U, 4U, 1U);
        #endif        
    }

    return ErrRtn_Cnt_T_enum;

    /* ENDREQ: CM800A #64 I */ /* ENDREQ: CM800A #66 I */
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: Calc8BitCrc0X2F_Oper
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <Calc8BitCrc0X2F>
 *
 **********************************************************************************************************************
 *
 * Exclusive Area Access:
 * ======================
 *   void Rte_Enter_SyncCrcExclusiveArea(void)
 *   void Rte_Exit_SyncCrcExclusiveArea(void)
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType Calc8BitCrc0X2F_Oper(uint8 *DataPtr_Arg, uint32 Len_Arg, uint8 StrtVal_Arg, boolean FirstCall_Arg, uint8 *CalcCrcRes_Arg)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_Calc8BitCrc_PortIf1_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: Calc8BitCrc0X2F_Oper_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, CDD_SyncCrc_CODE) Calc8BitCrc0X2F_Oper(P2VAR(uint8, AUTOMATIC, RTE_CDD_SYNCCRC_APPL_VAR) DataPtr_Arg, uint32 Len_Arg, uint8 StrtVal_Arg, boolean FirstCall_Arg, P2VAR(uint8, AUTOMATIC, RTE_CDD_SYNCCRC_APPL_VAR) CalcCrcRes_Arg) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: Calc8BitCrc0X2F_Oper (returns application error)
 *********************************************************************************************************************/
    VAR(Std_ReturnType, AUTOMATIC) ErrRtn_Cnt_T_enum = RTE_E_OK;
    VAR(uint8, AUTOMATIC) CrcHwIdx_Cnt_T_u08 = (uint8)CRCHWSTS_IDXINVLD;
    VAR(uint8, AUTOMATIC) CrcHwLoopIdx_Cnt_T_u08;
    VAR(NtCrcIdxRec, AUTOMATIC) CrcIdxPrm_Cnt_T_str;
    VAR(NtResvCallRec, AUTOMATIC) ResvCallPrm_Cnt_T_str;
    VAR(uint32, AUTOMATIC) TaskId_Cnt_T_u32 = INVLDTASKID_CNT_U32;
    VAR(uint32, AUTOMATIC) Idx_Cnt_T_u32;
    VAR(StatusType, AUTOMATIC) TaskIdRtn_Cnt_T_enum;

    /* REQ: CM800A #64 I */ /* REQ: CM800A #66 I : FDD sections 5.2 and 5.2.4.2.1 */

    /* Get the caller's Task ID */
    TaskIdRtn_Cnt_T_enum = GetTaskID((TaskRefType)&TaskId_Cnt_T_u32);

    if (TaskIdRtn_Cnt_T_enum == E_OK)
    {
        /* Reserve CRC HW Unit */
        if( CRCOSREF_CNT_U08 == GetApplicationID() )
        {
            /* Caller is in the same application as this module, call the function directly */
            GetAvlCrcHwUnit(FALSE);
        }
        else
        {
            /* Caller is in a different application as this module, call non-trusted function */
            ResvCallPrm_Cnt_T_str.ResvCall = FALSE;
            Os_CallNonTrustedFunction((Os_NonTrustedFunctionIndexType)NtWrapS_SyncCrc_GetAvlCrcHwUnit, &ResvCallPrm_Cnt_T_str);
        }

        /* Search PIM for the task ID to get the HW unit assigned to this request */
        CrcHwLoopIdx_Cnt_T_u08 = 0U;
        do
        {
            if( TaskId_Cnt_T_u32 == Rte_Pim_CrcHwSts()[CrcHwLoopIdx_Cnt_T_u08].TaskId )
            {
                CrcHwIdx_Cnt_T_u08 = CrcHwLoopIdx_Cnt_T_u08;
                CrcHwLoopIdx_Cnt_T_u08 = NROFACTVCRCHWUNIT_CNT_U08;
            }
            
            CrcHwLoopIdx_Cnt_T_u08++;
        } while( CrcHwLoopIdx_Cnt_T_u08 < NROFACTVCRCHWUNIT_CNT_U08 );

        if((uint8)CRCHWSTS_IDXINVLD != CrcHwIdx_Cnt_T_u08)
        {
            /* Configure HW unit algorithm, access width, and initial start value */
            CRCREG_REC[CrcHwIdx_Cnt_T_u08].Reg_rec->Ctrl_rec.Bit_b08.ISZ = (uint8)CRCDATAACSWIDTH_8BIT;
            CRCREG_REC[CrcHwIdx_Cnt_T_u08].Reg_rec->Ctrl_rec.Bit_b08.POL = (uint8)CRCALG_8BITH2F;

            if(TRUE == FirstCall_Arg)
            {
                CRCREG_REC[CrcHwIdx_Cnt_T_u08].Reg_rec->Outp_u32 = CRCININVAL8BIT_CNT_U08;
            }
            else
            {
                CRCREG_REC[CrcHwIdx_Cnt_T_u08].Reg_rec->Outp_u32 = StrtVal_Arg;
            }

            /* Calculate CRC */
            for(Idx_Cnt_T_u32 = 0u; Idx_Cnt_T_u32 < Len_Arg; Idx_Cnt_T_u32++)
            {
                CRCREG_REC[CrcHwIdx_Cnt_T_u08].Reg_rec->Inp_u32 = DataPtr_Arg[Idx_Cnt_T_u32];
            }

            /* Return calculated CRC value */
            *CalcCrcRes_Arg = (uint8)(CRCREG_REC[CrcHwIdx_Cnt_T_u08].Reg_rec->Outp_u32);

            /* Release CRC HW Unit */
            if( CRCOSREF_CNT_U08 == GetApplicationID() )
            {
                RelsCrcHwUnit(CrcHwIdx_Cnt_T_u08);
            }
            else
            {
                CrcIdxPrm_Cnt_T_str.CrcHwIdx = CrcHwIdx_Cnt_T_u08;
                Os_CallNonTrustedFunction((Os_NonTrustedFunctionIndexType)NtWrapS_SyncCrc_RelsCrcHwUnit, &CrcIdxPrm_Cnt_T_str);
            }
        }
        else
        {
            /* CRC HW not available - Default value to 0 and set NOT_OK */
            *CalcCrcRes_Arg = CRCERRVAL_CNT_U08;
            ErrRtn_Cnt_T_enum = E_NOT_OK;
            
            #if (STD_ON == NXTRDET_SYNCCRC)
                (void)Det_ReportError(NXTRDET_SYNCCRCMODID_CNT_U16, 0U, 6U, 0U);
            #endif
        }
    }
    else
    {
        /* Invalid task ID - Default value to 0 and set NOT_OK */
        *CalcCrcRes_Arg = CRCERRVAL_CNT_U08;
        ErrRtn_Cnt_T_enum = E_NOT_OK;
        
        #if (STD_ON == NXTRDET_SYNCCRC)
            (void)Det_ReportError(NXTRDET_SYNCCRCMODID_CNT_U16, 0U, 6U, 1U);
        #endif        
    }

    return ErrRtn_Cnt_T_enum;

    /* ENDREQ: CM800A #64 I */ /* ENDREQ: CM800A #66 I */
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: Calc8BitCrc_Oper
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <Calc8BitCrc>
 *
 **********************************************************************************************************************
 *
 * Exclusive Area Access:
 * ======================
 *   void Rte_Enter_SyncCrcExclusiveArea(void)
 *   void Rte_Exit_SyncCrcExclusiveArea(void)
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType Calc8BitCrc_Oper(uint8 *DataPtr_Arg, uint32 Len_Arg, uint8 StrtVal_Arg, boolean FirstCall_Arg, uint8 *CalcCrcRes_Arg)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_Calc8BitCrc_PortIf1_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: Calc8BitCrc_Oper_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, CDD_SyncCrc_CODE) Calc8BitCrc_Oper(P2VAR(uint8, AUTOMATIC, RTE_CDD_SYNCCRC_APPL_VAR) DataPtr_Arg, uint32 Len_Arg, uint8 StrtVal_Arg, boolean FirstCall_Arg, P2VAR(uint8, AUTOMATIC, RTE_CDD_SYNCCRC_APPL_VAR) CalcCrcRes_Arg) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: Calc8BitCrc_Oper (returns application error)
 *********************************************************************************************************************/
    VAR(Std_ReturnType, AUTOMATIC) ErrRtn_Cnt_T_enum = E_OK;
    VAR(uint8, AUTOMATIC) CrcHwIdx_Cnt_T_u08 = (uint8)CRCHWSTS_IDXINVLD;
    VAR(uint8, AUTOMATIC) CrcHwLoopIdx_Cnt_T_u08;
    VAR(NtCrcIdxRec, AUTOMATIC) CrcIdxPrm_Cnt_T_str;
    VAR(NtResvCallRec, AUTOMATIC) ResvCallPrm_Cnt_T_str;
    VAR(uint32, AUTOMATIC) TaskId_Cnt_T_u32 = INVLDTASKID_CNT_U32;
    VAR(uint32, AUTOMATIC) Idx_Cnt_T_u32;
    VAR(StatusType, AUTOMATIC) TaskIdRtn_Cnt_T_enum;

    /* REQ: CM800A #64 I */ /* REQ: CM800A #66 I : FDD sections 5.2 and 5.2.3.2.1 */

    /* Get the caller's Task ID */
    TaskIdRtn_Cnt_T_enum = GetTaskID((TaskRefType)&TaskId_Cnt_T_u32);
    
    if (TaskIdRtn_Cnt_T_enum == E_OK)
    {
        /* Reserve CRC HW Unit */
        if( CRCOSREF_CNT_U08 == GetApplicationID() )
        {
            /* Caller is in the same application as this module, call the function directly */
            GetAvlCrcHwUnit(FALSE);
        }
        else
        {
            /* Caller is in a different application as this module, call non-trusted function */
            ResvCallPrm_Cnt_T_str.ResvCall = FALSE;
            Os_CallNonTrustedFunction((Os_NonTrustedFunctionIndexType)NtWrapS_SyncCrc_GetAvlCrcHwUnit, &ResvCallPrm_Cnt_T_str);
        }

        /* Search PIM for the task ID to get the HW unit assigned to this request */
        CrcHwLoopIdx_Cnt_T_u08 = 0U;
        do
        {
            if( TaskId_Cnt_T_u32 == Rte_Pim_CrcHwSts()[CrcHwLoopIdx_Cnt_T_u08].TaskId )
            {
                CrcHwIdx_Cnt_T_u08 = CrcHwLoopIdx_Cnt_T_u08;
                CrcHwLoopIdx_Cnt_T_u08 = NROFACTVCRCHWUNIT_CNT_U08;
            }
            
            CrcHwLoopIdx_Cnt_T_u08++;
        } while( CrcHwLoopIdx_Cnt_T_u08 < NROFACTVCRCHWUNIT_CNT_U08 );

        if((uint8)CRCHWSTS_IDXINVLD != CrcHwIdx_Cnt_T_u08)
        {
            /* Configure HW unit algorithm, access width, and initial start value */
            CRCREG_REC[CrcHwIdx_Cnt_T_u08].Reg_rec->Ctrl_rec.Bit_b08.ISZ = (uint8)CRCDATAACSWIDTH_8BIT;
            CRCREG_REC[CrcHwIdx_Cnt_T_u08].Reg_rec->Ctrl_rec.Bit_b08.POL = (uint8)CRCALG_8BIT;

            if(TRUE == FirstCall_Arg)
            {
                CRCREG_REC[CrcHwIdx_Cnt_T_u08].Reg_rec->Outp_u32 = CRCININVAL8BIT_CNT_U08;
            }
            else
            {
                CRCREG_REC[CrcHwIdx_Cnt_T_u08].Reg_rec->Outp_u32 = StrtVal_Arg;
            }

            /* Calculate CRC */
            for(Idx_Cnt_T_u32 = 0u; Idx_Cnt_T_u32 < Len_Arg; Idx_Cnt_T_u32++)
            {
                CRCREG_REC[CrcHwIdx_Cnt_T_u08].Reg_rec->Inp_u32 = DataPtr_Arg[Idx_Cnt_T_u32];
            }

            /* Return calculated CRC value */
            *CalcCrcRes_Arg = (uint8)(CRCREG_REC[CrcHwIdx_Cnt_T_u08].Reg_rec->Outp_u32);
            
            /* Release CRC HW Unit */
            if( CRCOSREF_CNT_U08 == GetApplicationID() )
            {
                RelsCrcHwUnit(CrcHwIdx_Cnt_T_u08);
            }
            else
            {
                CrcIdxPrm_Cnt_T_str.CrcHwIdx = CrcHwIdx_Cnt_T_u08;
                Os_CallNonTrustedFunction((Os_NonTrustedFunctionIndexType)NtWrapS_SyncCrc_RelsCrcHwUnit, &CrcIdxPrm_Cnt_T_str);
            }
        }
        else
        {
            /* CRC HW not available - Default value to 0 and set NOT_OK */
            *CalcCrcRes_Arg = CRCERRVAL_CNT_U08;
            ErrRtn_Cnt_T_enum = E_NOT_OK;
            
            #if (STD_ON == NXTRDET_SYNCCRC)
                (void)Det_ReportError(NXTRDET_SYNCCRCMODID_CNT_U16, 0U, 7U, 0U);
            #endif
        }
    }
    else
    {
        /* Invalid task ID - Default value to 0 and set NOT_OK */
        *CalcCrcRes_Arg = CRCERRVAL_CNT_U08;
        ErrRtn_Cnt_T_enum = E_NOT_OK;
        
        #if (STD_ON == NXTRDET_SYNCCRC)
            (void)Det_ReportError(NXTRDET_SYNCCRCMODID_CNT_U16, 0U, 7U, 1U);
        #endif        
    }

    return ErrRtn_Cnt_T_enum;

    /* ENDREQ: CM800A #64 I */ /* ENDREQ: CM800A #66 I */
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: ResvCrcHwUnit_Oper
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <ResvCrcHwUnit>
 *
 **********************************************************************************************************************
 *
 * Exclusive Area Access:
 * ======================
 *   void Rte_Enter_SyncCrcExclusiveArea(void)
 *   void Rte_Exit_SyncCrcExclusiveArea(void)
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType ResvCrcHwUnit_Oper(CrcHwResvMod1 Mod_Arg, CrcHwResvCfg1 CrcCfg_Arg, uint32 *CrcHwInRegAdr_Arg, uint32 *CrcHwOutRegAdr_Arg, uint32 StrtVal_Arg, uint32 *ResvKey_Arg)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_ResvCrcHwUnit_PortIf2_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: ResvCrcHwUnit_Oper_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, CDD_SyncCrc_CODE) ResvCrcHwUnit_Oper(CrcHwResvMod1 Mod_Arg, CrcHwResvCfg1 CrcCfg_Arg, P2VAR(uint32, AUTOMATIC, RTE_CDD_SYNCCRC_APPL_VAR) CrcHwInRegAdr_Arg, P2VAR(uint32, AUTOMATIC, RTE_CDD_SYNCCRC_APPL_VAR) CrcHwOutRegAdr_Arg, uint32 StrtVal_Arg, P2VAR(uint32, AUTOMATIC, RTE_CDD_SYNCCRC_APPL_VAR) ResvKey_Arg) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: ResvCrcHwUnit_Oper (returns application error)
 *********************************************************************************************************************/
    VAR(Std_ReturnType, AUTOMATIC) Rtn_Cnt_T_enum = E_NOT_OK;
    VAR(uint8, AUTOMATIC) CrcHwIdx_Cnt_T_u08 = 0U;
    VAR(uint8, AUTOMATIC) CrcHwLoopIdx_Cnt_T_u08 = 0U;
    VAR(boolean, AUTOMATIC) CrcResvd_Cnt_T_logl = FALSE;
    VAR(NtResvCallRec, AUTOMATIC) ResvCallPrm_Cnt_T_str;
    VAR(NtCrcIdxRec, AUTOMATIC) CrcIdxPrm_Cnt_T_str;
    
    /* REQ: CM800A #48 I */ /* REQ: CM800A #67 I */ /* REQ: CM800A #68 I */ /* REQ: CM800A #70 I : FDD sections 5.1.5 */
    if ( ( Mod_Arg == CRCHWRESVMOD_RESV ) && ( CrcCfg_Arg < CRCHWRESVCFGRNG_CNT_U08 ) )
    {
        do
        {
            if (CRCHWSTS_AVL == Rte_Pim_CrcHwSts()[CrcHwLoopIdx_Cnt_T_u08].CrcHwSts)
            {
                if( CRCOSREF_CNT_U08 == GetApplicationID() )
                {
                    GetAvlCrcHwUnit(TRUE);
                }
                else
                {
                    ResvCallPrm_Cnt_T_str.ResvCall = TRUE;
                    Os_CallNonTrustedFunction((Os_NonTrustedFunctionIndexType)NtWrapS_SyncCrc_GetAvlCrcHwUnit, &ResvCallPrm_Cnt_T_str);
                }
                *ResvKey_Arg = CRCRESVID_CNT_U32[CrcHwLoopIdx_Cnt_T_u08];
                CrcResvd_Cnt_T_logl = TRUE;
                CrcHwIdx_Cnt_T_u08 = CrcHwLoopIdx_Cnt_T_u08;
                CrcHwLoopIdx_Cnt_T_u08 = NROFACTVCRCHWUNIT_CNT_U08; /* Setting the loop index to the limit to 'break' the loop */
            }
            
            CrcHwLoopIdx_Cnt_T_u08++;
        } while( CrcHwLoopIdx_Cnt_T_u08 < NROFACTVCRCHWUNIT_CNT_U08 );
        
        if ( TRUE == CrcResvd_Cnt_T_logl )
        {
            CrcRegCfg(CrcHwIdx_Cnt_T_u08, CrcCfg_Arg, StrtVal_Arg);
            
            /* Return addresses of selected input and output registers */
            *CrcHwInRegAdr_Arg = (uint32)(&(CRCREG_REC[CrcHwIdx_Cnt_T_u08].Reg_rec->Inp_u32));
            *CrcHwOutRegAdr_Arg = (uint32)(&(CRCREG_REC[CrcHwIdx_Cnt_T_u08].Reg_rec->Outp_u32));
            
            Rtn_Cnt_T_enum = E_OK;
        }
        else
        {
            /* Set outputs to known values due to an error */
            *CrcHwInRegAdr_Arg = 0U;
            *CrcHwOutRegAdr_Arg = 0U;
            *ResvKey_Arg = 0U;
            
            #if (STD_ON == NXTRDET_SYNCCRC)
                (void)Det_ReportError(NXTRDET_SYNCCRCMODID_CNT_U16, 0U, 0U, 0U);
            #endif
        }
    }
    else if(Mod_Arg == CRCHWRESVMOD_RELS)
    {
        do
        {
            if ( ( CRCHWSTS_RESV == Rte_Pim_CrcHwSts()[CrcHwIdx_Cnt_T_u08].CrcHwSts ) && 
                 ( *ResvKey_Arg == Rte_Pim_CrcHwSts()[CrcHwIdx_Cnt_T_u08].TaskId ) )
            {
                if( CRCOSREF_CNT_U08 == GetApplicationID() )
                {
                    RelsCrcHwUnit(CrcHwIdx_Cnt_T_u08);
                }
                else
                {
                    CrcIdxPrm_Cnt_T_str.CrcHwIdx = CrcHwIdx_Cnt_T_u08;
                    Os_CallNonTrustedFunction((Os_NonTrustedFunctionIndexType)NtWrapS_SyncCrc_RelsCrcHwUnit, &CrcIdxPrm_Cnt_T_str);
                }
                CrcHwIdx_Cnt_T_u08 = NROFACTVCRCHWUNIT_CNT_U08;
                Rtn_Cnt_T_enum = E_OK;
            }
            
            CrcHwIdx_Cnt_T_u08++;
        } while ( CrcHwIdx_Cnt_T_u08 < NROFACTVCRCHWUNIT_CNT_U08 );
        
        if(Rtn_Cnt_T_enum == E_NOT_OK)
        {
            /* Set outputs to known values in case of an error */
            *CrcHwInRegAdr_Arg = 0U;
            *CrcHwOutRegAdr_Arg = 0U;
            *ResvKey_Arg = 0U;
            
            #if (STD_ON == NXTRDET_SYNCCRC)
                (void)Det_ReportError(NXTRDET_SYNCCRCMODID_CNT_U16, 0U, 0U, 1U);
            #endif
        }
    }
    else
    {
        /* This else path will generate a grey check for unreachable code in Polyspace. However, this is by design
         * as this section is intended to catch errors where the function arguments are outside of a valid range. */
 
        /* Do nothing, invalid option */
        Rtn_Cnt_T_enum = E_NOT_OK;
       
        /* Set outputs to known values in case of an error */
        *CrcHwInRegAdr_Arg = 0U;
        *CrcHwOutRegAdr_Arg = 0U;
        *ResvKey_Arg = 0U;
        
        #if (STD_ON == NXTRDET_SYNCCRC)
            (void)Det_ReportError(NXTRDET_SYNCCRCMODID_CNT_U16, 0U, 0U, 2U);
        #endif
    }
    /* ENDREQ: CM800A #48 I */ /* ENDREQ: CM800A #67 I */ /* ENDREQ: CM800A #68 I */ 
    /* ENDREQ: CM800A #70 I */

    return Rtn_Cnt_T_enum;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: SyncCrcInit1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: SyncCrcInit1_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, CDD_SyncCrc_CODE) SyncCrcInit1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: SyncCrcInit1
 *********************************************************************************************************************/
    /* Stub function for application mapping */
    return;
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}


#define CDD_SyncCrc_STOP_SEC_CODE
#include "CDD_SyncCrc_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of function definition area >>            DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/**********************************************************************************************************************
* Name:         RelsCrcHwUnit
*
* Description:  This routine releases the given CRC hardware unit and places that Task ID back to invalid.
*
* Inputs:       CrcHwIdx_Cnt_T_u08 - Index of the CRC unit to release
*
* Outputs:      None
*
* Usage Notes:  This shall only be called from one of the CRC API functions. There is no need for a return value since
*                the calling function already selected a valid index before calling this function. However, the DET
*                was added in case any memory corruption occurs and can be detected while in the development phase.
**********************************************************************************************************************/
static FUNC(void, CDD_SyncCrc_CODE) RelsCrcHwUnit(uint8 CrcHwIdx_Cnt_T_u08)
{
    /* REQ: CM800A #48 I : FDD Section 5.1.2 */
    if( CrcHwIdx_Cnt_T_u08 < NROFACTVCRCHWUNIT_CNT_U08)
    {
        Rte_Enter_SyncCrcExclusiveArea();
        Rte_Pim_CrcHwSts()[CrcHwIdx_Cnt_T_u08].TaskId = INVLDTASKID_CNT_U32;
        Rte_Pim_CrcHwSts()[CrcHwIdx_Cnt_T_u08].CrcHwSts = CRCHWSTS_AVL;
        Rte_Exit_SyncCrcExclusiveArea();
    }
    else
    {
        /* Out of range arguement, set a DET. */
        #if (STD_ON == NXTRDET_SYNCCRC)
            (void)Det_ReportError(NXTRDET_SYNCCRCMODID_CNT_U16, 0U, 8U, 0U);
        #endif
    }
    /* ENDREQ: CM800A #48 I */

    return;
}

/**********************************************************************************************************************
* Name:         NONTRUSTED_NtWrapS_SyncCrc_RelsCrcHwUnit
*
* Description:  Non-trusted handler to call RelsCrcHwUnit from an outside application context
*
* Inputs:       FunctionIndex - Non-trusted function index
*               FunctionParams - Pointer to parameter structure
*
* Outputs:      None
*
* Usage Notes:  
**********************************************************************************************************************/
FUNC(void, CDD_SyncCrc_CODE) NONTRUSTED_NtWrapS_SyncCrc_RelsCrcHwUnit( Os_NonTrustedFunctionIndexType FunctionIndex, 
                                                                       Os_NonTrustedFunctionParameterRefType FunctionParams)
{
    /* REQ: CM800A #48 I : FDD Section 5.1.2 */
    RelsCrcHwUnit(((NtCrcIdxRec*)FunctionParams)->CrcHwIdx);
    /* ENDREQ: CM800A #48 I */
    return;
}

/**********************************************************************************************************************
* Name:         GetAvlCrcHwUnit
*
* Description:  This routine checks for an available CRC hardware unit. If one is found it is reserved and the index
*               is written to Rte_Pim_SyncCrcAvlHwIdx 
*
* Inputs:       None
*
* Outputs:      None
*
* Usage Notes:  While the CRC functions are defined to be re-entrant, they all rely on the PIM SyncCrcHwSts for 
*               permission to calculate the CRC. This function assigns the hardware index for the CRC functions 
*               to use for their calculations. It uses the task ID as a the "key" for the caller to identify their 
*               CRC index. This function shall only be called from a task context. 
**********************************************************************************************************************/
static FUNC(void, CDD_SyncCrc_CODE) GetAvlCrcHwUnit(boolean ResvCrcCall_Arg)
{
    VAR(uint8, AUTOMATIC) Idx_Cnt_T_u08 = 0U;
    VAR(uint32, AUTOMATIC) TaskId_Cnt_T_u32 = INVLDTASKID_CNT_U32;
    VAR(StatusType, AUTOMATIC) TaskIdRtn_Cnt_T_enum;

    /* REQ: CM800A #48 I */ /* REQ: CM800A #67 */ /* REQ: CM800A #81 : FDD Section 5.1.4 */

    /* Task ID must be saved prior to entering the exclusive area, otherwise the TaskID will return an incorrect value */
    TaskIdRtn_Cnt_T_enum = GetTaskID((TaskRefType)&TaskId_Cnt_T_u32);

    if (TaskIdRtn_Cnt_T_enum == E_OK)
    {
        Rte_Enter_SyncCrcExclusiveArea();
        do
        {
            if (CRCHWSTS_AVL == Rte_Pim_CrcHwSts()[Idx_Cnt_T_u08].CrcHwSts)
            {
                if (ResvCrcCall_Arg == FALSE)
                {
                    Rte_Pim_CrcHwSts()[Idx_Cnt_T_u08].CrcHwSts = CRCHWSTS_BUSY;
                    Rte_Pim_CrcHwSts()[Idx_Cnt_T_u08].TaskId = TaskId_Cnt_T_u32;
                }
                else
                {
                    Rte_Pim_CrcHwSts()[Idx_Cnt_T_u08].CrcHwSts = CRCHWSTS_RESV;
                    Rte_Pim_CrcHwSts()[Idx_Cnt_T_u08].TaskId = CRCRESVID_CNT_U32[Idx_Cnt_T_u08];
                }
                
                /* Set Idx_Cnt_T_u08 to the loop limit break loop */
                Idx_Cnt_T_u08 = NROFACTVCRCHWUNIT_CNT_U08;
            }
            
            Idx_Cnt_T_u08++;
        } while( Idx_Cnt_T_u08 < NROFACTVCRCHWUNIT_CNT_U08 );
        Rte_Exit_SyncCrcExclusiveArea();
    }
    else
    {
        /* If task ID cannot be found, set a DET. Functionally there is no concern since the calling function will
         * look to find a CRC hardware unit with its task ID in the PIM. If nothing is found it will return an 
         * error to the application. */
        #if (STD_ON == NXTRDET_SYNCCRC)
            (void)Det_ReportError(NXTRDET_SYNCCRCMODID_CNT_U16, 0U, 9U, 0U);
        #endif
    }
        
    /* ENDREQ: CM800A #48 I */ /* ENDREQ: CM800A #67 */ /* ENDREQ: CM800A #81 */

    return;
}

/**********************************************************************************************************************
* Name:         NONTRUSTED_NtWrapS_SyncCrc_GetAvlCrcHwUnit
*
* Description:  Non-trusted handler to call GetAvlCrcHwUnit from an outside application context
*
* Inputs:       FunctionIndex - Non-trusted function index
*               FunctionParams - Pointer to parameter structure
*
* Outputs:      None
*
* Usage Notes:  
**********************************************************************************************************************/
FUNC(void, CDD_SyncCrc_CODE) NONTRUSTED_NtWrapS_SyncCrc_GetAvlCrcHwUnit( Os_NonTrustedFunctionIndexType FunctionIndex,
                                                                         Os_NonTrustedFunctionParameterRefType FunctionParams)
{
    /* REQ: CM800A #48 I */ /* REQ: CM800A #67 * : FDD Section 5.1.4 */
    GetAvlCrcHwUnit(((NtResvCallRec*)FunctionParams)->ResvCall);
    /* ENDREQ: CM800A #48 I */ /* ENDREQ: CM800A #67 */

    return;
}


/**********************************************************************************************************************
* Name:         CrcRegCfg
*
* Description:  Local function to configure the CRC register for the API calls. 
*
* Inputs:       CrcCfg_Arg - Selected configuration for the CRC calculation
*               
*
* Outputs:      None
*
* Usage Notes:  
**********************************************************************************************************************/
static FUNC(void, CDD_SyncCrc_CODE) CrcRegCfg( uint8 CrcHwIdx_Arg, CrcHwResvCfg1 CrcCfg_Arg, uint32 StrtVal_Arg )
{
    switch(CrcCfg_Arg)
    {
        /* 8 Bit CRC */
        case CRCHWRESVCFG_8BITCRC:
            CRCREG_REC[CrcHwIdx_Arg].Reg_rec->Ctrl_rec.Bit_b08.ISZ = (uint8)CRCDATAACSWIDTH_8BIT;
            CRCREG_REC[CrcHwIdx_Arg].Reg_rec->Ctrl_rec.Bit_b08.POL = (uint8)CRCALG_8BIT;
            CRCREG_REC[CrcHwIdx_Arg].Reg_rec->Outp_u32 = (uint8)StrtVal_Arg;
        break;
        case CRCHWRESVCFG_8BITCRCH2F:
            CRCREG_REC[CrcHwIdx_Arg].Reg_rec->Ctrl_rec.Bit_b08.ISZ = (uint8)CRCDATAACSWIDTH_8BIT;
            CRCREG_REC[CrcHwIdx_Arg].Reg_rec->Ctrl_rec.Bit_b08.POL = (uint8)CRCALG_8BITH2F;
            CRCREG_REC[CrcHwIdx_Arg].Reg_rec->Outp_u32 = (uint8)StrtVal_Arg;
        break;
        /* 16 Bit CRC */
        case CRCHWRESVCFG_16BITCRC8BITWIDTH:
            CRCREG_REC[CrcHwIdx_Arg].Reg_rec->Ctrl_rec.Bit_b08.ISZ = (uint8)CRCDATAACSWIDTH_8BIT;
            CRCREG_REC[CrcHwIdx_Arg].Reg_rec->Ctrl_rec.Bit_b08.POL = (uint8)CRCALG_16BIT;
            CRCREG_REC[CrcHwIdx_Arg].Reg_rec->Outp_u32 = (uint16)StrtVal_Arg;
        break;
        case CRCHWRESVCFG_16BITCRC16BITWIDTH:
            CRCREG_REC[CrcHwIdx_Arg].Reg_rec->Ctrl_rec.Bit_b08.ISZ = (uint8)CRCDATAACSWIDTH_16BIT;
            CRCREG_REC[CrcHwIdx_Arg].Reg_rec->Ctrl_rec.Bit_b08.POL = (uint8)CRCALG_16BIT;
            CRCREG_REC[CrcHwIdx_Arg].Reg_rec->Outp_u32 = (uint16)StrtVal_Arg;
        break;
        case CRCHWRESVCFG_32BITCRC8BITWIDTH:
            CRCREG_REC[CrcHwIdx_Arg].Reg_rec->Ctrl_rec.Bit_b08.ISZ = (uint8)CRCDATAACSWIDTH_8BIT;
            CRCREG_REC[CrcHwIdx_Arg].Reg_rec->Ctrl_rec.Bit_b08.POL = (uint8)CRCALG_32BITETH;
            CRCREG_REC[CrcHwIdx_Arg].Reg_rec->Outp_u32 = (uint32)StrtVal_Arg;
        break;
        case CRCHWRESVCFG_32BITCRC16BITWIDTH:
            CRCREG_REC[CrcHwIdx_Arg].Reg_rec->Ctrl_rec.Bit_b08.ISZ = (uint8)CRCDATAACSWIDTH_16BIT;
            CRCREG_REC[CrcHwIdx_Arg].Reg_rec->Ctrl_rec.Bit_b08.POL = (uint8)CRCALG_32BITETH;
            CRCREG_REC[CrcHwIdx_Arg].Reg_rec->Outp_u32 = (uint32)StrtVal_Arg;
        break;
        /* Default value is assigned to 32-bit Crc with 32-bit access width. The switch argument value is range
           checked prior to the switch case, so the value is ensured to be within one of the enumerated values. 
           This allows full coverage for unit testing. */
        case CRCHWRESVCFG_32BITCRC32BITWIDTH:
        default:
            CRCREG_REC[CrcHwIdx_Arg].Reg_rec->Ctrl_rec.Bit_b08.ISZ = (uint8)CRCDATAACSWIDTH_32BIT;
            CRCREG_REC[CrcHwIdx_Arg].Reg_rec->Ctrl_rec.Bit_b08.POL = (uint8)CRCALG_32BITETH;
            CRCREG_REC[CrcHwIdx_Arg].Reg_rec->Outp_u32 = (uint32)StrtVal_Arg;
        break;
    }
    
    return;
}
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of function definition area >>              DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of removed code area >>                   DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of removed code area >>                     DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
