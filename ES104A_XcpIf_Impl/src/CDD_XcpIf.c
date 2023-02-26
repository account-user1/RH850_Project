/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  CDD_XcpIf.c
 *     SW-C Type:  CDD_XcpIf
 *  Generated at:  Mon Feb 12 13:18:07 2018
 *
 *     Generator:  MICROSAR RTE Generator Version 4.3.0
 *                 RTE Core Version 1.3.0
 *       License:  Unlimited license CBD1400351 (THE ECU PRODUCT "STEERING SYSTEMS", THE ECU SUPPLIER "NEXTEER", THE VEHICLE MANUFACTURER "GENERAL MOTORS CORPORATION") for Nexteer Automotive Corporation
 *
 *   Description:  C-Code implementation template for SW-C <CDD_XcpIf>
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of version logging area >>                DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/**********************************************************************************************************************
* Copyright 2015 Nexteer 
* Nexteer Confidential
*
* Module File Name:   CDD_XcpIf.c
* Module Description: Source file for XCP Interface ES 104A
* Project           : CBD 
* Author            : Kevin Smith
***********************************************************************************************************************
* Version Control:
* %version:          7 %
* %derived_by:       cz7lt6 %
*----------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author         Change Description                                                           SCR #
* -------   -------  --------  ---------------------------------------------------------------------------     --------
* 06/16/15  1        KJS       Initial Version                                                                 EA4#851
* 10/09/15  2        KJS       Updates to support initial version of online calibration                        EA4#1842
* 04/21/16  3        KJS       Additional includes added for changes made to ES400A                            EA4#5466
* 08/30/16  4        KJS       Anomaly EA4#6672 and QAC corrections                                            EA4#7235
* 03/03/17  5        KJS       Disable XCP write vehicle checks in fault injection builds                      EA4#10009
* 07/06/17  6        KJS       Updates to support CANbedded and AUTOSAR drivers                                EA4#11830
* 02/12/18  7        KJS       Updates for CR EA4#20563 and anomaly EA4#20564                                  EA4#20574
**********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of version logging area >>                  DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *
 * AUTOSAR Modelling Object Descriptions
 *
 **********************************************************************************************************************

 Data Types:
 ===========
  AdrMpgReqTyp1
    uint8 represents integers with a minimum value of 0 and a maximum value of 255.
     The order-relation on uint8 is: x < y if y - x is positive.
     uint8 has a lexical representation consisting of a finite-length sequence 
     of decimal digits (#x30-#x39).
     
     For example: 1, 0, 126, +10.

  CalCopySts1
    uint8 represents integers with a minimum value of 0 and a maximum value of 255.
     The order-relation on uint8 is: x < y if y - x is positive.
     uint8 has a lexical representation consisting of a finite-length sequence 
     of decimal digits (#x30-#x39).
     
     For example: 1, 0, 126, +10.

  GetSegMod1
    uint8 represents integers with a minimum value of 0 and a maximum value of 255.
     The order-relation on uint8 is: x < y if y - x is positive.
     uint8 has a lexical representation consisting of a finite-length sequence 
     of decimal digits (#x30-#x39).
     
     For example: 1, 0, 126, +10.

  MfgEnaSt1
    uint8 represents integers with a minimum value of 0 and a maximum value of 255.
     The order-relation on uint8 is: x < y if y - x is positive.
     uint8 has a lexical representation consisting of a finite-length sequence 
     of decimal digits (#x30-#x39).
     
     For example: 1, 0, 126, +10.

 *********************************************************************************************************************/

#include "Rte_CDD_XcpIf.h"


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/* MISRA-C:2004 Rule 19.1 [NXTRDEV 19.1.1]: AUTOSAR requires deviation from this rule for Memory Mapping include statements */

#include "CDD_XcpIf.h"
#include "CDD_XcpIf_private.h"
#include "CDD_NxtrTi.h"
#include "Os.h"
#include "FltInj.h"

static FUNC(uint8, AUTOMATIC) XcpIf_ChkXcpAcs( P2CONST(uint8, AUTOMATIC, AUTOMATIC) Adr_Cnt_T_u32,
                                               VAR(uint16, AUTOMATIC) Size_Cnt_T_u16 );

#if (XCPIF_XCPARDRVR_CNT_U08 == STD_ON)
static FUNC(vuint8, CDD_XcpIf_CODE) ApplXcpCalibrationWrite( VAR(MTABYTEPTR, AUTOMATIC) addr,
                                                             VAR(vuint8, AUTOMATIC) size,
                                                             const VAR(BYTEPTR, AUTOMATIC) data);

static FUNC(vuint8, CDD_XcpIf_CODE) ApplXcpCalibrationRead( VAR(uint8, AUTOMATIC) addr[],
                                                            VAR(vuint8, AUTOMATIC) size,
                                                            VAR(uint8, AUTOMATIC) data[]);
#endif

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of include and declaration area >>          DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *
 * Used AUTOSAR Data Types
 *
 **********************************************************************************************************************
 *
 * Enumeration Types:
 * ==================
 * AdrMpgReqTyp1: Enumeration of integer in interval [0...255] with enumerators
 *   ADRMPGREQTYP_READ (0U)
 *   ADRMPGREQTYP_WR (1U)
 * CalCopySts1: Enumeration of integer in interval [0...255] with enumerators
 *   CALCOPYSTS_NOTRDY (0U)
 *   CALCOPYSTS_COPYPNDING (1U)
 *   CALCOPYSTS_COPYCMPL (2U)
 *   CALCOPYSTS_PROCERR (3U)
 * GetSegMod1: Enumeration of integer in interval [0...255] with enumerators
 *   GETSEGMOD_ADRINFO (0U)
 *   GETSEGMOD_STDINFO (1U)
 *   GETSEGMOD_ADRMPG (2U)
 * MfgEnaSt1: Enumeration of integer in interval [0...255] with enumerators
 *   MFGENAST_PRDNMOD (0U)
 *   MFGENAST_MFGMOD (1U)
 *   MFGENAST_TESTMOD (2U)
 *
 *********************************************************************************************************************/


#define CDD_XcpIf_START_SEC_CODE
#include "CDD_XcpIf_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: ActvTunStsReq_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <ActvTunStsReq>
 *
 **********************************************************************************************************************
 *
 * Input Interfaces:
 * =================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Read_ActvGroup_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_ActvIninIdx_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_ActvRtIdx_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_CalCopySts_Val(CalCopySts1 *data)
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_XcpCalChgReq_Oper(void)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_XcpCalChgReq_PortIf1_E_NOT_OK
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void ActvTunStsReq_Oper(uint8 *ActvRtIdx_Arg, uint8 *ActvIninIdx_Arg, uint8 *CalChgAllwd_Arg, uint8 *ActvGroup_Arg, uint8 *CalCopyCmpl_Arg)
 *
 *********************************************************************************************************************/

FUNC(void, CDD_XcpIf_CODE) ActvTunStsReq_Oper(P2VAR(uint8, AUTOMATIC, RTE_CDD_XCPIF_APPL_VAR) ActvRtIdx_Arg, P2VAR(uint8, AUTOMATIC, RTE_CDD_XCPIF_APPL_VAR) ActvIninIdx_Arg, P2VAR(uint8, AUTOMATIC, RTE_CDD_XCPIF_APPL_VAR) CalChgAllwd_Arg, P2VAR(uint8, AUTOMATIC, RTE_CDD_XCPIF_APPL_VAR) ActvGroup_Arg, P2VAR(uint8, AUTOMATIC, RTE_CDD_XCPIF_APPL_VAR) CalCopyCmpl_Arg) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: ActvTunStsReq_Oper
 *********************************************************************************************************************/
    /* Gather information */
    (void)Rte_Read_ActvIninIdx_Val(ActvIninIdx_Arg);
    (void)Rte_Read_ActvRtIdx_Val(ActvRtIdx_Arg);
    *CalChgAllwd_Arg = Rte_Call_XcpCalChgReq_Oper();
    (void)Rte_Read_ActvGroup_Val(ActvGroup_Arg);
    (void)Rte_Read_CalCopySts_Val(CalCopyCmpl_Arg);

    return;
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: CDD_XcpIfInit1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 **********************************************************************************************************************
 *
 * Input Interfaces:
 * =================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Read_CustXcpEna_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_MfgEnaSt_Val(MfgEnaSt1 *data)
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_CopyCalPageReq_Oper(uint8 Seg_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_CopyCalPageReq_PortIf1_E_NOT_OK
 *   Std_ReturnType Rte_Call_GetCalPageReq_Oper(uint8 Seg_Arg, uint8 Mod_Arg, uint8 *Page_Arg, uint8 *Rtn_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetSegInfoReq_Oper(GetSegMod1 Mod_Arg, uint8 Seg_Arg, uint8 SegInfo_Arg, uint8 MpgIdx_Arg, uint8 *Resp_Arg, uint8 *RespLen_Arg, uint8 *Rtn_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_OnlineTunRamAdrMpg_Oper(uint32 ReqAdr_Arg, uint32 *CorrdAdr_Arg, AdrMpgReqTyp1 ReqTyp_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_OnlineTunRamAdrMpg_PortIf1_E_NOT_OK
 *   Std_ReturnType Rte_Call_SetCalPageReq_Oper(uint8 Seg_Arg, uint8 Mod_Arg, uint8 Page_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_XcpCalChgReq_Oper(void)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_XcpCalChgReq_PortIf1_E_NOT_OK
 *
 *********************************************************************************************************************/

FUNC(void, CDD_XcpIf_CODE) CDD_XcpIfInit1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: CDD_XcpIfInit1
 *********************************************************************************************************************/
    
    VAR(MfgEnaSt1, AUTOMATIC) MfgEnaSt_T_Cnt;
    VAR(boolean, AUTOMATIC) CustXcpEna_Cnt_T_Logl;

    (void)Rte_Read_MfgEnaSt_Val(&MfgEnaSt_T_Cnt);
    (void)Rte_Read_CustXcpEna_Logl(&CustXcpEna_Cnt_T_Logl);

    /* XCP is enabled only if MfgEnaSt is not in production mode or if customer function allows */
    if ( (MfgEnaSt_T_Cnt != MFGENAST_PRDNMOD) || (CustXcpEna_Cnt_T_Logl == TRUE) )
    {
        XCPIF_XCPCNTRLENA();
    }
    else
    {
        XCPIF_XCPCNTRLDI();
    }

    return;
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: CDD_XcpIfPer1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on TimingEvent every 100ms
 *
 **********************************************************************************************************************
 *
 * Input Interfaces:
 * =================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Read_CustXcpEna_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_MfgEnaSt_Val(MfgEnaSt1 *data)
 *
 *********************************************************************************************************************/

FUNC(void, CDD_XcpIf_CODE) CDD_XcpIfPer1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: CDD_XcpIfPer1
 *********************************************************************************************************************/

    VAR(MfgEnaSt1, AUTOMATIC) MfgEnaSt_T_Cnt;
    VAR(boolean, AUTOMATIC) CustXcpEna_Cnt_T_Logl;

    (void)Rte_Read_MfgEnaSt_Val(&MfgEnaSt_T_Cnt);
    (void)Rte_Read_CustXcpEna_Logl(&CustXcpEna_Cnt_T_Logl);

    /* XCP is enabled only if MfgEnaSt is not in production mode or if customer function allows */
    if ( (MfgEnaSt_T_Cnt != MFGENAST_PRDNMOD) || (CustXcpEna_Cnt_T_Logl == TRUE) )
    {
        XCPIF_XCPCNTRLENA();
    }
    else
    {
        XCPIF_XCPCNTRLDI();
    }

    return;
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: Xcp2msDaq
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on TimingEvent every 2ms
 *
 *********************************************************************************************************************/

FUNC(void, CDD_XcpIf_CODE) Xcp2msDaq(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: Xcp2msDaq
 *********************************************************************************************************************/
    (void)XCPIF_XCPEVE( XCPIF_XCPEVECH2MILLISEC );
    return;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}


#define CDD_XcpIf_STOP_SEC_CODE
#include "CDD_XcpIf_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of function definition area >>            DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
 
/**********************************************************************************************************************
* Name:         ApplXcpGetTimestamp or XcpAppl_GetTimestamp
*
* Description:  Returns the current timestamp.
*
* Inputs:       N/A
*
* Outputs:      XcpDaqTimestampType - Timestamp value based on XcpDaqTimestampType format
*
* Usage Notes:  XCP Callout
**********************************************************************************************************************/
#if (XCPIF_XCPARDRVR_CNT_U08 == STD_ON)
FUNC(XcpDaqTimestampType, XCP_CODE) XcpAppl_GetTimestamp( void )
#else
FUNC(XcpDaqTimestampType, CDD_XcpIf_CODE) ApplXcpGetTimestamp(void)
#endif
{
    VAR(uint32, AUTOMATIC) TiStamp_Cnt_T_u32;
    
    GetRefTmr1MicroSec32bit_Oper( &TiStamp_Cnt_T_u32 );

    return( (XcpDaqTimestampType)TiStamp_Cnt_T_u32 );
}

/**********************************************************************************************************************
* Name:         ApplXcpGetPointer or XcpAppl_GetPointer
*
* Description:  This function converts a memory address from XCP format (32-bit address plus 8-bit address
*               extension) to a C style pointer. An MCS like CANape usually reads this memory addresses from
*               the ASAP2 database or from a linker map file.
*               The address extension may be used to distinguish different address spaces or memory types. In
*               most cases, the address extension is not used and may be ignored.
*               This function is used for memory transfers like DOWNLOAD and UPLOAD.
*
* Inputs:       addr_ext - 8-bit address extension
*               addr - 32-bit address
*
* Outputs:      RtnAddr - Return pointer to the address specified by the parameters
*
* Usage Notes:  XCP Callout
**********************************************************************************************************************/
#if (XCPIF_XCPARDRVR_CNT_U08 == STD_ON)
FUNC(MTABYTEPTR, XCP_CODE) XcpAppl_GetPointer( uint8 addr_ext, uint32 addr )
#else
FUNC(MTABYTEPTR, CDD_XcpIf_CODE) ApplXcpGetPointer( vuint8 addr_ext, vuint32 addr )
#endif
{
    VAR(uint32, AUTOMATIC) RtnAddr_Cnt_T_u32;
    RtnAddr_Cnt_T_u32 = addr;

    return ((MTABYTEPTR)RtnAddr_Cnt_T_u32);
}

/**********************************************************************************************************************
* Name:         XcpAppl_CalibrationWrite
*
* Description:  This function translates the arguments for the Autosar XCP function to the function shared between
*               this version and the CANbedded version.
*
* Inputs:       dst - Starting address of the destination of the data being sent via the XCP user.
*               src - Starting address of the data buffer of the data sent via XCP.
*               len - Number of bytes to write.
*
* Outputs:      Rtn_Cnt_T_u08
*
* Usage Notes:  XCP Callout for the AUTOSAR version only.
**********************************************************************************************************************/
FUNC(uint8, XCP_CODE) XcpAppl_CalibrationWrite( P2VAR(void, AUTOMATIC, XCP_APPL_DATA) dst, P2CONST(void, AUTOMATIC, XCP_APPL_DATA) src, uint8 len)
{
    VAR(uint8, AUTOMATIC) Rtn_Cnt_T_u08;
    Rtn_Cnt_T_u08 = ApplXcpCalibrationWrite( (MTABYTEPTR)dst, len, (const BYTEPTR)src );

    return Rtn_Cnt_T_u08;
}

/**********************************************************************************************************************
* Name:         ApplXcpCalibrationWrite
*
* Description:  This function transfers data sent by the XCP user to the address set by the MTA.
*
* Inputs:       addr - Starting address of the destination of the data being sent via the XCP user.
*               size - Number of bytes to write.
*               data - Starting address of the data buffer of the data sent via XCP.
*
* Outputs:      Rtn_Cnt_T_u08
*
* Usage Notes:  XCP Callout
**********************************************************************************************************************/
#if (XCPIF_XCPARDRVR_CNT_U08 == STD_ON)
static FUNC(vuint8, CDD_XcpIf_CODE) ApplXcpCalibrationWrite( VAR(MTABYTEPTR, AUTOMATIC) addr, 
                                                             VAR(vuint8, AUTOMATIC) size,
                                                             const VAR(BYTEPTR, AUTOMATIC) data)
#else
FUNC(vuint8, CDD_XcpIf_CODE) ApplXcpCalibrationWrite( VAR(MTABYTEPTR, AUTOMATIC) addr, 
                                                      VAR(vuint8, AUTOMATIC) size,
                                                      const VAR(BYTEPTR, AUTOMATIC) data)
#endif
{

    VAR(uint8, AUTOMATIC) Rtn_Cnt_T_u08 = (uint8)XCP_CMD_OK;
    VAR(Std_ReturnType, AUTOMATIC) MpgAdrRes_Cnt_T_u08;
    VAR(uint32, AUTOMATIC) CorrAdr_Cnt_T_u32 = 0U;
    VAR(MfgEnaSt1, AUTOMATIC) MfgEnaSt_T_Cnt;

    (void)Rte_Read_MfgEnaSt_Val(&MfgEnaSt_T_Cnt);

    #if(STD_ON == FLTINJENA)
    /* XcpCalChgReq is not called when fault injection is enabled */
    if( (MfgEnaSt_T_Cnt != MFGENAST_PRDNMOD) )
    #else
    if( (E_OK == Rte_Call_XcpCalChgReq_Oper()) && (MfgEnaSt_T_Cnt != MFGENAST_PRDNMOD) )
    #endif
    {
        /* If the write request is within the range of Flash, the OnlineTunRamAdrMpg function will update the address, 
         * to the Flash equivalent provided that segment is active in online calibration. If the write request is in 
         * RAM, the function will also check to ensure it is within a valid range.*/
        MpgAdrRes_Cnt_T_u08 = Rte_Call_OnlineTunRamAdrMpg_Oper((uint32)addr, &CorrAdr_Cnt_T_u32, ADRMPGREQTYP_WR);
        if (MpgAdrRes_Cnt_T_u08 == E_OK)
        {
            /* This call is a trusted function, therefore the address must be checked and validated by OnlineTunRamAdrMpg_Oper
             * before a call can be made */
            Call_ApplXcpWrCmn((uint8 *)CorrAdr_Cnt_T_u32, size, data);
        }
        else
        {
            Rtn_Cnt_T_u08 = (uint8)XCP_CMD_DENIED;
        }
    }
    else
    {
        Rtn_Cnt_T_u08 = (uint8)XCP_CMD_DENIED;
    }

    /* TODO: Determine if any error checking needs to be done */
    return (Rtn_Cnt_T_u08);

}

/**********************************************************************************************************************
* Name:         ApplXcpWrCmn
*
* Description:  Common function to move the data from the source to the destination for XCP Write Commands
*
* Inputs:       addr - Destination starting address.
*               size - Number of bytes to write.
*               data - Source starting address.
*
* Outputs:      N/A
*
* Usage Notes:  XCP Callout, currently declared as a trusted function. 
**********************************************************************************************************************/
FUNC(void, CDD_XcpIf_CODE) ApplXcpWrCmn( VAR(uint8, AUTOMATIC) addr[], VAR(vuint8, AUTOMATIC) size, 
                                         const VAR(uint8, AUTOMATIC) data[] )
{
    VAR(uint8, AUTOMATIC) Idx_Cnt_T_u08;

    for (Idx_Cnt_T_u08 = 0U; Idx_Cnt_T_u08 < size; Idx_Cnt_T_u08++)
    {
        addr[Idx_Cnt_T_u08] = data[Idx_Cnt_T_u08];
    }

    return;
}

/**********************************************************************************************************************
* Name:         XcpAppl_MeasurementRead
*
* Description:  This function translates the arguments for the Autosar XCP function to the function shared between
*               this version and the CANbedded version.
*
* Inputs:       dst - Starting address of the destination of the data being sent via the XCP user.
*               src - Starting address of the data buffer of the data sent via XCP.
*               len - Number of bytes to write.
*
* Outputs:      Rtn_Cnt_T_u08
*
* Usage Notes:  XCP Callout for the AUTOSAR version only.
**********************************************************************************************************************/
FUNC(uint8, XCP_CODE) XcpAppl_MeasurementRead( P2VAR(void, AUTOMATIC, XCP_APPL_DATA) dst, P2CONST(void, AUTOMATIC, XCP_APPL_DATA) src, uint8 len)
{
    VAR(uint8, AUTOMATIC) Rtn_Cnt_T_u08;
    Rtn_Cnt_T_u08 = ApplXcpCalibrationRead( (MTABYTEPTR)src, len, (BYTEPTR)dst );

    return Rtn_Cnt_T_u08;
}

/**********************************************************************************************************************
* Name:         ApplXcpCalibrationRead
*
* Description:  This function transfers data requested by the XCP user from the address set by the MTA.
*
* Inputs:       addr - Starting address of the data to be read.
*               size - Number of bytes to read.
*               data - Destination address of the data
*
* Outputs:      XCP_CMD_OK - Hard coded to always return positive results.
*
* Usage Notes:  XCP Callout
**********************************************************************************************************************/
#if (XCPIF_XCPARDRVR_CNT_U08 == STD_ON)
static FUNC(vuint8, CDD_XcpIf_CODE) ApplXcpCalibrationRead( VAR(uint8, AUTOMATIC) addr[],
                                                            VAR(vuint8, AUTOMATIC) size,
                                                            VAR(uint8, AUTOMATIC) data[])
#else
FUNC(vuint8, CDD_XcpIf_CODE) ApplXcpCalibrationRead( VAR(uint8, AUTOMATIC) addr[],
                                                     VAR(vuint8, AUTOMATIC) size,
                                                     VAR(uint8, AUTOMATIC) data[])
#endif
{
    VAR(uint8, AUTOMATIC) Idx_Cnt_T_u08;
    VAR(uint32, AUTOMATIC) CorrAdr_Cnt_T_u32;
    VAR(uint8, AUTOMATIC) MpgAdrRes_Cnt_T_u08;
    VAR(uint8, AUTOMATIC) Rtn_Cnt_T_u08;

    MpgAdrRes_Cnt_T_u08 = Rte_Call_OnlineTunRamAdrMpg_Oper((uint32)(&addr[0]), &CorrAdr_Cnt_T_u32, ADRMPGREQTYP_READ);
    if (MpgAdrRes_Cnt_T_u08 == E_OK)
    {
        for (Idx_Cnt_T_u08 = 0U; Idx_Cnt_T_u08 < size; Idx_Cnt_T_u08++)
        {
            data[Idx_Cnt_T_u08] = ((uint8 *)CorrAdr_Cnt_T_u32)[Idx_Cnt_T_u08];
        }
        Rtn_Cnt_T_u08 = (uint8)XCP_CMD_OK;
    }
    else
    {
        Rtn_Cnt_T_u08 = (uint8)XCP_CMD_DENIED;
    }

    return(Rtn_Cnt_T_u08);
}



/**********************************************************************************************************************
* Name:         ApplXcpCheckWriteAccess
*
* Description:  Check addresses for valid write access. A write access is enabled with the XCP_ENABLE_WRITE_PROTECTION.
*               It should only be used if write protection is required for memory areas.
*
* Inputs:       Adr_Cnt_T_u32 - Starting address of the data to be read.
*               Size_Cnt_T_u08 - Number of bytes to read.
*
* Outputs:      XCP_CMD_OK - Hard coded to always return positive results.
*
* Usage Notes:  XCP Callout
**********************************************************************************************************************/
#if (XCPIF_XCPARDRVR_CNT_U08 == STD_ON )
FUNC(uint8, XCP_CODE) XcpAppl_CheckWriteAccess( ROMMTABYTEPTR Adr_Cnt_T_u32, uint8 Size_Cnt_T_u08 )
#else
FUNC(vuint8, CDD_XcpIf_CODE) ApplXcpCheckWriteAccess ( const VAR(MTABYTEPTR, AUTOMATIC) Adr_Cnt_T_u32, VAR(vuint8, AUTOMATIC) Size_Cnt_T_u08 )
#endif
{
    VAR(uint8, AUTOMATIC) Rtn_Cnt_T_u08;

    Rtn_Cnt_T_u08 = XcpIf_ChkXcpAcs(Adr_Cnt_T_u32, (uint16)Size_Cnt_T_u08);

    return(Rtn_Cnt_T_u08);
}

/**********************************************************************************************************************
* Name:         ApplXcpCheckReadAccess
*
* Description:  Check addresses for valid read access. A read access is enabled with the XCP_ENABLE_READ_PROTECTION.
*               It should only be used if read protection is required for memory areas.
*
* Inputs:       Adr_Cnt_T_u32 - Starting address of the data to be read.
*               Size_Cnt_T_u16 - Number of bytes to read.
*
* Outputs:      XCP_CMD_OK - Hard coded to always return positive results.
*
* Usage Notes:  XCP Callout
**********************************************************************************************************************/
#if (XCPIF_XCPARDRVR_CNT_U08 == STD_ON)
FUNC(uint8, XCP_CODE) XcpAppl_CheckReadAccess( ROMMTABYTEPTR Adr_Cnt_T_u32, uint32 Size_Cnt_T_u16 )
#else
FUNC(vuint8, CDD_XcpIf_CODE) ApplXcpCheckReadAccess ( const MTABYTEPTR Adr_Cnt_T_u32, 
                                                      VAR(uint16, AUTOMATIC) Size_Cnt_T_u16 )
#endif
{
    VAR(uint8, AUTOMATIC) Rtn_Cnt_T_u08;

    Rtn_Cnt_T_u08 = XcpIf_ChkXcpAcs(Adr_Cnt_T_u32, Size_Cnt_T_u16);

    return(Rtn_Cnt_T_u08);
}

/**********************************************************************************************************************
* Name:         ApplXcpCheckDAQAccess
*
* Description:  Check addresses for valid read or write access. This callback is called when a WRITE_DAQ command is
                performed. Therefore it is not possible to know whether this is a read or write access.
*
* Inputs:       Adr_Cnt_T_u32 - Starting address of the data to be read.
*               Size_Cnt_T_u16 - Number of bytes to read.
*
* Outputs:      XCP_CMD_OK - Hard coded to always return positive results.
*
* Usage Notes:  XCP Callout
**********************************************************************************************************************/
#if (XCPIF_XCPARDRVR_CNT_U08 == STD_ON)
FUNC(uint8, XCP_CODE) XcpAppl_CheckDAQAccess(DAQBYTEPTR Adr_Cnt_T_u32, uint8 Size_Cnt_T_u08)
#else
FUNC(vuint8, CDD_XcpIf_CODE) ApplXcpCheckDAQAccess ( VAR(DAQBYTEPTR, AUTOMATIC) Adr_Cnt_T_u32, 
                                                     VAR(vuint8, AUTOMATIC) Size_Cnt_T_u08 )
#endif
{
    VAR(uint8, AUTOMATIC) Rtn_Cnt_T_u08;

    Rtn_Cnt_T_u08 = XcpIf_ChkXcpAcs(Adr_Cnt_T_u32, (uint16)Size_Cnt_T_u08);

    return(Rtn_Cnt_T_u08);
}

/**********************************************************************************************************************
* Name:         ApplXcpSetCalPage or XcpAppl_SetCalPage
*
* Description:  Function sets the access mode for a calibration data segment
*
* Inputs:       SrcSeg_Cnt_T_u08 - Source segment, must be the segment that was enabled with the CopyCalPage request
*               Page_Cnt_T_u08 - Page number of the segment to write the calibration access.
*               Mod_Cnt_T_u08 - Can be either XCPIF_ONLINECALECUACS_CNT_U08 (1), XCPIF_ONLINECALXCPACS_CNT_U08 (2),
*                               or XCPIF_ONLINECALXCPANDECUACS_CNT_U08 (3)
*
* Outputs:      Rtn_Cnt_T_u08
*
* Usage Notes:  XCP Callout
**********************************************************************************************************************/
#if (XCPIF_XCPARDRVR_CNT_U08 == STD_ON)
FUNC(uint8, XCP_CODE) XcpAppl_SetCalPage( uint8 Xcp_Channel, uint8 Seg_Cnt_T_u08, uint8 Page_Cnt_T_u08, uint8 Mod_Cnt_T_u08)
#else
vuint8 ApplXcpSetCalPage ( vuint8 Seg_Cnt_T_u08, vuint8 Page_Cnt_T_u08, vuint8 Mod_Cnt_T_u08 )
#endif
{
    VAR(uint8, AUTOMATIC) DataPage_Cnt_T_u08;
    VAR(uint8, AUTOMATIC) Rtn_Cnt_T_u08;
    VAR(NtSetCalPageTyp, AUTOMATIC) Prm_Cnt_T_str;

    if(Seg_Cnt_T_u08 < XCPIF_MAXCALSEG_CNT_U08)
    {
        /* Check the range for the Mod argument. CANape sends a range of 0x80-0x83, while other tools do not use the
         * bit 7 for all access */
        if( ( (uint8)XCPIF_ONLINECALXCPANDECUACS_CNT_U08 >= Mod_Cnt_T_u08 ) ||
            ( ( ((uint8)XCPIF_ONLINECALALLACS_CNT_U08 | (uint8)XCPIF_ONLINECALXCPANDECUACS_CNT_U08) >= Mod_Cnt_T_u08 ) && 
              ( Mod_Cnt_T_u08 >= (uint8)XCPIF_ONLINECALALLACS_CNT_U08 ) ) )
        {
            if (XCPIF_TUNSELNMNGTOSAPPL_CNT_U08 == GetApplicationID())
            {
                (void)Rte_Call_SetCalPageReq_Oper(Seg_Cnt_T_u08, Mod_Cnt_T_u08, Page_Cnt_T_u08);
            }
            else
            {
                Prm_Cnt_T_str.Seg_u08 = Seg_Cnt_T_u08;
                Prm_Cnt_T_str.Mod_u08 = Mod_Cnt_T_u08;
                Prm_Cnt_T_str.Page_u08 = Page_Cnt_T_u08;
                (void)Os_CallNonTrustedFunction((Os_NonTrustedFunctionIndexType)NtWrapS_Rte_Call_SetCalPageReq_Oper, &Prm_Cnt_T_str);
            }
            
            /* Verify the cal page change was successful */
            (void)Rte_Call_GetCalPageReq_Oper(Seg_Cnt_T_u08, Mod_Cnt_T_u08, &DataPage_Cnt_T_u08, &Rtn_Cnt_T_u08);
            
            if( ((uint8)XCP_CMD_OK == Rtn_Cnt_T_u08) && (Page_Cnt_T_u08 != DataPage_Cnt_T_u08) )
            {
                Rtn_Cnt_T_u08 = (uint8)CRC_PAGE_MODE_NOT_VALID;
            }
        }
        else
        {
            Rtn_Cnt_T_u08 = (uint8)CRC_PAGE_MODE_NOT_VALID;
        }
    }
    else
    {
        Rtn_Cnt_T_u08 = (uint8)CRC_SEGMENT_NOT_VALID;
    }
    
    if(Rtn_Cnt_T_u08 == (uint8)XCP_CMD_OK)
    {
        /* This return is evaluated by the XCP driver's error check marco. Which is if it is anything other 
         * than 0, an error is returned. Since XCP_CMD_OK is defined as 1, hard coding this return to 0 to provide 
         * a positive response */
        Rtn_Cnt_T_u08 = 0U;
    }

    return(Rtn_Cnt_T_u08);
}

/**********************************************************************************************************************
* Name:         ApplXcpGetCalPage or XcpAppl_GetCalPage
*
* Description:  Function returns the logical number of the calibration data page that is currently activated 
*               for the specified access mode and data segment. 
*
* Inputs:       SrcSeg_Cnt_T_u08 - Source segment, should be the same as the destination segment
*               SrcPage_Cnt_T_u08 - Source page, typically always flash
*               DestSeg_Cnt_T_u08 - Destination Segment, should be the same as the source segment
*               DestPage_Cnt_T_u08 - Destination Page, typically always RAM
*
* Outputs:      Rtn_Cnt_T_u08
*
* Usage Notes:  XCP Callout
**********************************************************************************************************************/
#if (XCPIF_XCPARDRVR_CNT_U08 == STD_ON)
FUNC(uint8, XCP_CODE) XcpAppl_GetCalPage( uint8 Xcp_Channel, uint8 Seg_Cnt_T_u08, uint8 Mod_Cnt_T_u08 )
#else
FUNC(vuint8, CDD_XcpIf_CODE) ApplXcpGetCalPage ( vuint8 Seg_Cnt_T_u08, vuint8 Mod_Cnt_T_u08 )
#endif
{
    VAR(uint8, AUTOMATIC) DataPage_Cnt_T_u08;
    VAR(uint8, AUTOMATIC) TmpCnt_T_u08;
    VAR(uint8, AUTOMATIC) Rtn_Cnt_T_u08;

    /* Verify segment is within range */
    if(Seg_Cnt_T_u08 < XCPIF_MAXCALSEG_CNT_U08)
    {
        /* Remove bit 7 and any non-supported bits if sent as it is not required for this function */
        TmpCnt_T_u08 = Mod_Cnt_T_u08 & (uint8)XCPIF_ONLINECALXCPANDECUACS_CNT_U08;
        
        /* Mode can only be ECU access or XCP access, but not both according to the XCP specifications */
        if( ((uint8)XCPIF_ONLINECALECUACS_CNT_U08 == TmpCnt_T_u08) || ((uint8)XCPIF_ONLINECALXCPACS_CNT_U08 == TmpCnt_T_u08) )
        {
            (void)Rte_Call_GetCalPageReq_Oper(Seg_Cnt_T_u08, Mod_Cnt_T_u08, &DataPage_Cnt_T_u08, &Rtn_Cnt_T_u08);
        }
        else
        {
            Rtn_Cnt_T_u08 = (uint8)CRC_PAGE_MODE_NOT_VALID;
        }
    }
    else
    {
        Rtn_Cnt_T_u08 = (uint8)CRC_SEGMENT_NOT_VALID;
    }
    
    if(Rtn_Cnt_T_u08 != (uint8)XCP_CMD_OK)
    {
        DataPage_Cnt_T_u08 = 0U;
    }

    return(DataPage_Cnt_T_u08);
}

/**********************************************************************************************************************
* Name:         ApplXcpCopyCalPage
*
* Description:  Copies calibration data from the source to destination pages.
*
* Inputs:       SrcSeg_Cnt_T_u08 - Source segment, should be the same as the destination segment
*               SrcPage_Cnt_T_u08 - Source page, typically always flash
*               DestSeg_Cnt_T_u08 - Destination Segment, should be the same as the source segment
*               DestPage_Cnt_T_u08 - Destination Page, typically always RAM
*
* Outputs:      Rtn_Cnt_T_u08
*
* Usage Notes:  XCP Callout
**********************************************************************************************************************/
#if (XCPIF_XCPARDRVR_CNT_U08 == STD_ON)
FUNC(uint8, XCP_CODE) XcpAppl_CopyCalPage( uint8 Xcp_Channel, uint8 SrcSeg_Cnt_T_u08, uint8 SrcPage_Cnt_T_u08, uint8 DestSeg_Cnt_T_u08, uint8 DestPage_Cnt_T_u08 )
#else
FUNC(vuint8, CDD_XcpIf_CODE) ApplXcpCopyCalPage ( vuint8 SrcSeg_Cnt_T_u08,
                                                  vuint8 SrcPage_Cnt_T_u08,
                                                  vuint8 DestSeg_Cnt_T_u08,
                                                  vuint8 DestPage_Cnt_T_u08 )
#endif
{
    VAR(uint8, AUTOMATIC) Rtn_Cnt_T_u08 = (uint8)XCP_CMD_DENIED;
    VAR(uint8, AUTOMATIC) PageMod_Cnt_T_u08;
    VAR(NtCopyCalPageTyp, AUTOMATIC) Prm_Cnt_T_str;
    
    /* Ensure requested segment is valid */
    if( (SrcSeg_Cnt_T_u08 == DestSeg_Cnt_T_u08) && (SrcSeg_Cnt_T_u08 < XCPIF_MAXCALSEG_CNT_U08) )
    {
        /* Ensure the requested page mode is valid */
        if( (SrcPage_Cnt_T_u08 == XCPIF_FLSPAGE_CNT_U08) && (DestPage_Cnt_T_u08 == XCPIF_RAMPAGE_CNT_U08) )
        {
            /* In order for the command to be accepted, ECU access must be on the flash page, or page 0 */
            (void)Rte_Call_GetCalPageReq_Oper(DestSeg_Cnt_T_u08, (uint8)XCPIF_ONLINECALECUACS_CNT_U08, &PageMod_Cnt_T_u08, &Rtn_Cnt_T_u08);
            
            if( (XCPIF_FLSPAGE_CNT_U08 == PageMod_Cnt_T_u08 ) && ((uint8)XCP_CMD_OK == Rtn_Cnt_T_u08) )
            {
                if(XCPIF_TUNSELNMNGTOSAPPL_CNT_U08 == GetApplicationID())
                {
                    (void)Rte_Call_CopyCalPageReq_Oper(DestSeg_Cnt_T_u08);
                }
                else
                {
                    Prm_Cnt_T_str.Seg_u08 = DestSeg_Cnt_T_u08;
                    (void)Os_CallNonTrustedFunction((Os_NonTrustedFunctionIndexType)NtWrapS_Rte_Call_CopyCalPageReq_Oper, &Prm_Cnt_T_str);
                }
                
                /* Return is hard coded 0. XCP_CMD_OK is defined as 1 in XcpProf.h, yet the OK condition in the XCP 
                 * documentation is a 0. If the non-trusted call fails, the user would have to look at the online 
                 * calibration table status in TunSelnMngt */
                Rtn_Cnt_T_u08 = 0U;
            }
            else
            {
                /* Return the error returned from GetCalPageReq_Oper() */
                Rtn_Cnt_T_u08 = Rtn_Cnt_T_u08;
            }
        }
        else
        {
            /* Source of destination page are not correctly passed */
            Rtn_Cnt_T_u08 = (uint8)CRC_PAGE_NOT_VALID;
        }
    }
    else
    {
        /* Segments do not match or are out of range */
        Rtn_Cnt_T_u08 = (uint8)CRC_SEGMENT_NOT_VALID;
    }
    
    return(Rtn_Cnt_T_u08);
}

/**********************************************************************************************************************
* Name:         ApplXcpUserService or XcpAppl_UserService
*
* Description:  Function handler for all application specific user XCP commands
*
* Inputs:       pCmd - Pointer to the raw command data that was sent in with the XCP request
*
* Outputs:      Rtn_Cnt_T_u08
*
* Usage Notes:  XCP Callout
**********************************************************************************************************************/
#if (XCPIF_XCPARDRVR_CNT_U08 == STD_ON)
FUNC(uint8, XCP_CODE) XcpAppl_UserService( uint8 Xcp_Channel, ROMBYTEPTR pCmd )
#else
FUNC(vuint8, CDD_XcpIf_CODE) ApplXcpUserService ( MEMORY_ROM BYTEPTR pCmd )
#endif
{
    VAR(uint8, AUTOMATIC) Rtn_Cnt_T_u08;
    VAR(uint16, AUTOMATIC) UsrCmd_Cnt_T_u16;
    
    if(APPLXCPUSRSRV_CNT_U08 == pCmd[0])
    {
        UsrCmd_Cnt_T_u16 = (uint16)((uint16)((uint16)(pCmd[1]) << 8U) | pCmd[2]);
        switch(UsrCmd_Cnt_T_u16)
        {
            case ACTVTUNSTSREQ_CNT_U16:
                ActvTunStsReq_Oper( (uint8 *)&(XCPIF_RESPBUFBYTE_CNT_U08(1)), (uint8 *)&(XCPIF_RESPBUFBYTE_CNT_U08(2)), (uint8 *)&(XCPIF_RESPBUFBYTE_CNT_U08(3)),
                                    (uint8 *)&(XCPIF_RESPBUFBYTE_CNT_U08(4)), (uint8 *)&(XCPIF_RESPBUFBYTE_CNT_U08(5)));
                XCPIF_RESPBUFLEN_CNT_U08 = 6U;
                Rtn_Cnt_T_u08 = (uint8)XCP_CMD_OK;
            break;
            default:
                Rtn_Cnt_T_u08 = (uint8)XCP_CMD_SYNTAX;
            break;
        }
    }
    else
    {
        Rtn_Cnt_T_u08 = (uint8)XCP_CMD_SYNTAX;
    }
    
    return(Rtn_Cnt_T_u08);
}

/**********************************************************************************************************************
* Name:         ApplXcpOpenCmdIf or XcpAppl_OpenCmdIf
*
* Description:  Catchall function to handle XCP requests that are not defined in the Vector XCP driver.
*
* Inputs:       pCmd - Pointer to the raw command data that was sent in with the XCP request
*               pRes - Pointer to the result buffer
*               pLength - Length of the result response
*
* Outputs:      Rtn_Cnt_T_u08
*
* Usage Notes:  XCP Callout
**********************************************************************************************************************/
#if (XCPIF_XCPARDRVR_CNT_U08 == STD_ON)
FUNC(uint8, XCP_CODE) XcpAppl_OpenCmdIf( uint8 Xcp_Channel, ROMBYTEPTR pCmd, BYTEPTR pRes, BYTEPTR pLength )
#else
FUNC(vuint8, CDD_XcpIf_CODE) ApplXcpOpenCmdIf ( MEMORY_ROM BYTEPTR pCmd, BYTEPTR pRes, BYTEPTR pLength )
#endif
{
    VAR(uint8, AUTOMATIC) Rtn_Cnt_T_u08;
    
    switch(pCmd[0])
    {
        case GETSEGINFO_CNT_U08:
            /*  XCP Service 0xE8: GET_SEGMENT_INFO */
            (void)Rte_Call_GetSegInfoReq_Oper(pCmd[1], pCmd[2], pCmd[3], pCmd[4], pRes, pLength, &Rtn_Cnt_T_u08);
        break;
        case GETPAGEPROCRINFO_CNT_U08:
            /* XCP Service 0xE9: GET_PAG_PROCESSOR_INFO */
            /* Service returns the number of available segments and the page properties */
            
            *pLength = 3U;
            pRes[0] = 0xFFU;
            pRes[1] = XCPIF_MAXCALSEG_CNT_U08;
            pRes[2] = 0U; /* Hard coded 0 since FREEZE mode is currently not supported */
            
            Rtn_Cnt_T_u08 = (uint8)XCP_CMD_OK;
        break;
        default:
            Rtn_Cnt_T_u08 = (uint8)XCP_CMD_DENIED;
        break;
    }

    return(Rtn_Cnt_T_u08);
}

static FUNC(uint8, AUTOMATIC) XcpIf_ChkXcpAcs( P2CONST(uint8, AUTOMATIC, AUTOMATIC) Adr_Cnt_T_u32,
                                               VAR(uint16, AUTOMATIC) Size_Cnt_T_u16 )
{
    return((uint8)XCP_CMD_OK);
}


/**********************************************************************************************************************
* Name:        NONTRUSTED_NtWrapS_TunSelnMngt_CopyCalPageReq_Oper
*
* Description: Non-trusted function call for CopyCalPageReq_Oper
*
* Inputs:      FunctionIndex - Non-trusted function index
*              FunctionParams - Pointer to parameter structure 
*
* Outputs:      None
*
* Usage Notes: 
**********************************************************************************************************************/
FUNC(void, CDD_NvMProxy_CODE) NONTRUSTED_NtWrapS_Rte_Call_CopyCalPageReq_Oper( Os_NonTrustedFunctionIndexType FunctionIndex, 
                                                                               Os_NonTrustedFunctionParameterRefType FunctionParams)
{
    (void)Rte_Call_CopyCalPageReq_Oper( ((NtCopyCalPageTyp*)FunctionParams)->Seg_u08 );
    return;
}

/**********************************************************************************************************************
* Name:        NONTRUSTED_NtWrapS_Rte_Call_SetCalPageReq_Oper
*
* Description: Non-trusted function call for SetCalPageReq_Oper
*
* Inputs:      FunctionIndex - Non-trusted function index
*              FunctionParams - Pointer to parameter structure 
*
* Outputs:      None
*
* Usage Notes: 
**********************************************************************************************************************/
FUNC(void, CDD_NvMProxy_CODE) NONTRUSTED_NtWrapS_Rte_Call_SetCalPageReq_Oper( Os_NonTrustedFunctionIndexType FunctionIndex, 
                                                                              Os_NonTrustedFunctionParameterRefType FunctionParams)
{
    (void)Rte_Call_SetCalPageReq_Oper( ((NtSetCalPageTyp*)FunctionParams)->Seg_u08, ((NtSetCalPageTyp*)FunctionParams)->Mod_u08,
                                       ((NtSetCalPageTyp*)FunctionParams)->Page_u08 );
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
