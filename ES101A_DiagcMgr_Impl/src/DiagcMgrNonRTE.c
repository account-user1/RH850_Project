/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of version logging area >>                DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/**********************************************************************************************************************
* Copyright 2015, 2016, 2017 Nexteer 
* Nexteer Confidential
*
* Module File Name  : DiagcMgrNonRTE.c
* Module Description: Implementation of Diagnostic Manager FDD ES101A - Non RTE functions
* Project           : CBD 
* Author            : Spandana Balani
***********************************************************************************************************************
* Version Control:
* %version:           8 %
* %derived_by:        nz2554 %
*----------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author         Change Description                                                        SCR #
* -------   -------  --------  -----------------------------------------------------------------------   --------------
* 02/26/16  1        SB         ES101A_DiagcMgr_Design version 2 implementation                          EA4#3421
* 03/11/16  2        SB         Update includes for Nvm to work as expected                              EA4#3421
* 04/19/16  3        SB         ES101A_DiagcMgr_Design version 3 implementation                          EA4#5110
* 06/20/16  4        SB         ES101A_DiagcMgr_Design version 4 implementation                          EA4#6251
* 09/23/16  5        SB         Removed requirement mapping                                              EA4#7191
* 12/02/16  6        SB         Updated PimSnpshtDataAry_rec definition                                  EA4#8250
* 04/07/17  7        SR         Added logic to handle latch capable NTCs at power down
                                Optimized logic by creating GetNtcInfoApplX local function.
                                Added new callback function to clear LtchCntrAry NVM on error            EA4#10779
* 12/12/17  8        SR         Resort to old logic where the SetRamBlockStatus for DiagcMgrNtcFltAry
*                               is set to true every time before shutdown.Anomaly Fixes for EA4#16551    EA4#18204
**********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of version logging area >>                  DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
#include "Rte_DiagcMgr.h" /* Required to include this in Non-Rte file for access to Pim */
#include "NxtrMath.h"
#include "DiagcMgr.h"
#include "CDD_NvMProxy.h"
#include "NvM.h"
#include "NxtrDet.h"
#include "DiagcMgr_private.h"
#include "DiagcMgrStaticTypes.h"

/* MISRA-C:2004 Rule 16.10 [NXTRDEV 16.10.1]: There is no appropriate action to take on the return value of
                                              SetRamBlockStatus, Det_ReportError*/
/* MISRA-C:2004 Rule 16.10 [NXTRDEV 16.10.2]: Server runnable is a void functon. Rte generation adds standard return type but no error information is returned.
                           List of Functions: GetNtcInfoApplX_Oper
                                        Note: X in above functions is a value in [0,10] */
/* MISRA-C:2004 Rule 19.1 [NXTRDEV 19.1.1]: AUTOSAR requires deviation from this rule for Memory Mapping include statements */

#define PimDiagcMgrNtcFltAry_rec                (*(Ary1D_NtcFltInfoRec2_20 *)(Rte_Pim_DiagcMgrNtcFltAry()))
#define PimDiagcMgrLtchCntrAry_u08              (*(Ary1D_u08_20 *)(Rte_Pim_DiagcMgrLtchCntrAry()))
#define PimSnpshtDataAry_rec                    (SnpshtDataAry_M)

static FUNC(boolean, DiagcMgr_CODE) GetNtcInfoApplX(VAR(uint8, AUTOMATIC) ApplIdx_Cnt_T_u08,
                                                    VAR(uint8, AUTOMATIC) NtcInfoIdx_Cnt_T_u08,
                                                    P2VAR(NtcInfoRec4, AUTOMATIC, AUTOMATIC) NtcInfoPtr_Cnt_T_rec);

static FUNC(void, DiagcMgr_CODE) ChkAgiCntr(VAR(uint8 , AUTOMATIC) AgiCntr_Cnt_T_u08,
                                            VAR(uint8 , AUTOMATIC) Sts_Cnt_T_u08,
                                            VAR(uint16, AUTOMATIC) NtcMapIdx_Cnt_T_u16,
                                            P2VAR(uint16, AUTOMATIC, AUTOMATIC) NtcFltAryIdx_Cnt_T_u16,
                                            P2VAR(uint16, AUTOMATIC, AUTOMATIC) HistFltAryIdx_Cnt_T_u16,
                                            P2VAR(NtcFltInfoRec2, AUTOMATIC,AUTOMATIC) HistNtcFltAry_T_rec);

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of include and declaration area >>          DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

#define DiagcMgr_START_SEC_CODE
#include "DiagcMgr_MemMap.h"

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of function definition area >>            DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
 
/**********************************************************************************************************************
* Name:        DiagcMgrPwrDwn
* Description: Copies the appropriate information for upto 20 NTCs from Application NtcInfoArys and stores it to 
                Nvm PIM. And, calls "SetRamBlockSts"
* Inputs:      NONE     
* Outputs:     NONE 
* Usage Notes:  NONE 
*********************************************************************************************************************/
FUNC(void, DiagcMgr_CODE) DiagcMgrPwrDwn(void)
{
/**********************************************************************************************************************
* DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
* Symbol: DiagcMgrPwrDwn
*********************************************************************************************************************/
    VAR(uint8, AUTOMATIC)          LoopCnt_Cnt_T_u08;
    VAR(uint8, AUTOMATIC)          LtchCntrAryElemPrev_Cnt_T_u08;
    VAR(uint16, AUTOMATIC)         NtcMapIdx_Cnt_T_u16;
    VAR(uint16, AUTOMATIC)         NtcFltAryIdx_Cnt_T_u16 = 0U;         /* Clear NtcFltAryIdx  */
    VAR(uint16, AUTOMATIC)         HistFltAryIdx_Cnt_T_u16 = 0U;        /* Clear HistFltAryIdx */  
    VAR(uint16, AUTOMATIC)         HistFltAryTempIdx_Cnt_T_u16 = 0U;    /* Initialize HistFltAryTempIdx_Cnt_T_u16 */
    VAR(NtcFltInfoRec2, AUTOMATIC) HistNtcFltAry_T_rec[SIZEOFREADFLTARY_CNT_U08];         
    VAR(NtcInfoRec4, AUTOMATIC)    NtcInfo_Cnt_T_rec;
    VAR(boolean, AUTOMATIC)        ApplIDValid_Cnt_T_logl;
    
    NtcMapIdx_Cnt_T_u16 = 1U;

    /* Update NtcFltAry and HistFltAry */
    while((NtcMapIdx_Cnt_T_u16 < (uint16)TblSize_m(DIAGCMGRNTCMAP_CNT_REC)) && 
         ((NtcFltAryIdx_Cnt_T_u16 < (uint16)TblSize_m(PimDiagcMgrNtcFltAry_rec))))  
    {
        ApplIDValid_Cnt_T_logl = GetNtcInfoApplX(DIAGCMGRNTCMAP_CNT_REC[NtcMapIdx_Cnt_T_u16].ApplIdx,
                                                 DIAGCMGRNTCMAP_CNT_REC[NtcMapIdx_Cnt_T_u16].NtcInfoIdx,
                                                 &NtcInfo_Cnt_T_rec);
        if(ApplIDValid_Cnt_T_logl == FALSE)
        {
            NtcInfo_Cnt_T_rec.AgiCntr = DFTAGICNTR_CNT_U08;
            NtcInfo_Cnt_T_rec.Sts = 0U;
        }

        ChkAgiCntr(NtcInfo_Cnt_T_rec.AgiCntr,
                   NtcInfo_Cnt_T_rec.Sts,
                   NtcMapIdx_Cnt_T_u16,
                   &NtcFltAryIdx_Cnt_T_u16,
                   &HistFltAryIdx_Cnt_T_u16,
                   HistNtcFltAry_T_rec);

        NtcMapIdx_Cnt_T_u16++;
    }

    while((NtcFltAryIdx_Cnt_T_u16 < (uint16)TblSize_m(PimDiagcMgrNtcFltAry_rec)) &&
          (HistFltAryTempIdx_Cnt_T_u16 < HistFltAryIdx_Cnt_T_u16))
    {      
        /* See MDD for explanation of how this code does not use uninitialized variables */ 
        /* Update Ntc Fault Array with History Fault Array values */
        PimDiagcMgrNtcFltAry_rec[NtcFltAryIdx_Cnt_T_u16] = HistNtcFltAry_T_rec[HistFltAryTempIdx_Cnt_T_u16];   
            
        /* Increment Indices */
        NtcFltAryIdx_Cnt_T_u16++;
        HistFltAryTempIdx_Cnt_T_u16++;       
    }   
    while(NtcFltAryIdx_Cnt_T_u16 < (uint16)TblSize_m(PimDiagcMgrNtcFltAry_rec))
    {
        /* Update NtcFltAry */
        PimDiagcMgrNtcFltAry_rec[NtcFltAryIdx_Cnt_T_u16].NtcNr = NTCNR_RESD;
        PimDiagcMgrNtcFltAry_rec[NtcFltAryIdx_Cnt_T_u16].AgiCntr = DFTAGICNTR_CNT_U08;
        PimDiagcMgrNtcFltAry_rec[NtcFltAryIdx_Cnt_T_u16].Sts = 0U;

        NtcFltAryIdx_Cnt_T_u16++;
    }

    /*** For all Latch Capable NTCs ***/
    for(LoopCnt_Cnt_T_u08=0U;LoopCnt_Cnt_T_u08 < TblSize_m(PimDiagcMgrLtchCntrAry_u08); LoopCnt_Cnt_T_u08++)
    {
        LtchCntrAryElemPrev_Cnt_T_u08 = PimDiagcMgrLtchCntrAry_u08[LoopCnt_Cnt_T_u08];
        ApplIDValid_Cnt_T_logl = GetNtcInfoApplX(DIAGCMGRNTCMAP_CNT_REC[(DIAGCMGRLISTOFLTCHGNTC_CNT_ENUM[LoopCnt_Cnt_T_u08])].ApplIdx,
                                                 DIAGCMGRNTCMAP_CNT_REC[(DIAGCMGRLISTOFLTCHGNTC_CNT_ENUM[LoopCnt_Cnt_T_u08])].NtcInfoIdx,
                                                 &NtcInfo_Cnt_T_rec);
        if(ApplIDValid_Cnt_T_logl == FALSE)
        {
            NtcInfo_Cnt_T_rec.Sts = 0U;
        }
        if((NtcInfo_Cnt_T_rec.Sts & DIAGCMGR_NTCINFOSTSTESTFAILDTHISIGNCYC_CNT_U08) == DIAGCMGR_NTCINFOSTSTESTFAILDTHISIGNCYC_CNT_U08)
        {
            /* Increment Latch Counter */
            if(PimDiagcMgrLtchCntrAry_u08[LoopCnt_Cnt_T_u08] >= DIAGCMGRNTCLTCHCNTRTHD_CNT_U08[LoopCnt_Cnt_T_u08])
            {
                /* Saturate Latch Counter */
                PimDiagcMgrLtchCntrAry_u08[LoopCnt_Cnt_T_u08] = LTCHCNTRMAXVAL_CNT_U08;
            }
            else
            {
                /* Increment Latch Counter */
                PimDiagcMgrLtchCntrAry_u08[LoopCnt_Cnt_T_u08] = PimDiagcMgrLtchCntrAry_u08[LoopCnt_Cnt_T_u08] + 1U;
            }
        }
        else
        {
            /* Clear Latch Counter */
            PimDiagcMgrLtchCntrAry_u08[LoopCnt_Cnt_T_u08] = 0U;
        }
        
        if(PimDiagcMgrLtchCntrAry_u08[LoopCnt_Cnt_T_u08] != LtchCntrAryElemPrev_Cnt_T_u08)
        {
            (void) NvMProxy_SetRamBlockStatus(NvMConf_NvMBlockDescriptor_Rte_NvmBlock_DiagcMgr_DiagcMgrLtchCntrAry, TRUE);
        }
    }

    (void) NvMProxy_SetRamBlockStatus(NvMConf_NvMBlockDescriptor_Rte_NvmBlock_DiagcMgr_DiagcMgrNtcFltAry, TRUE); /*Update NvM*/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}
 
/**********************************************************************************************************************
  * Name:        RestoreNtcFltAryDft
  * Description: Non-RTE Server Runnable, called by Nvm Manager if the Nvm Data is corrupted
  * Inputs:      NONE     
  * Outputs:     NONE 
  * Usage Notes:  NONE 
  *********************************************************************************************************************/
 FUNC(void, DiagcMgr_CODE) RestoreNtcFltAryDft(void)
{
    VAR(uint16,  AUTOMATIC) NtcFltAryIdx_Cnt_T_u16;

    for (NtcFltAryIdx_Cnt_T_u16 = 0U; NtcFltAryIdx_Cnt_T_u16 < (uint16)TblSize_m(PimDiagcMgrNtcFltAry_rec);( NtcFltAryIdx_Cnt_T_u16++)) 
    {
        PimDiagcMgrNtcFltAry_rec[NtcFltAryIdx_Cnt_T_u16].NtcNr = NTCNR_RESD;
        PimDiagcMgrNtcFltAry_rec[NtcFltAryIdx_Cnt_T_u16].AgiCntr = DFTAGICNTR_CNT_U08;
        PimDiagcMgrNtcFltAry_rec[NtcFltAryIdx_Cnt_T_u16].Sts = 0U;
    }
} 
 
/**********************************************************************************************************************
  * Name:        RestoreSnpshtAryDft
  * Description: Non-RTE Server Runnable, called by Nvm Manager if the Nvm Data is corrupted
  * Inputs:      NONE     
  * Outputs:     NONE 
  * Usage Notes:  NONE 
  *********************************************************************************************************************/
 FUNC(void, DiagcMgr_CODE) RestoreSnpshtAryDft(void)
{
    VAR(uint8,  AUTOMATIC) SnpshtAryIdx_Cnt_T_u08;
    for (SnpshtAryIdx_Cnt_T_u08 = 0U; SnpshtAryIdx_Cnt_T_u08 < (uint8)TblSize_m(PimSnpshtDataAry_rec);( SnpshtAryIdx_Cnt_T_u08++)) 
    {
        PimSnpshtDataAry_rec[SnpshtAryIdx_Cnt_T_u08].SpclSnpshtData0 = DFTSPCLSNPSHTDATA_CNT_U32;
        PimSnpshtDataAry_rec[SnpshtAryIdx_Cnt_T_u08].SpclSnpshtData1 = DFTSPCLSNPSHTDATA_CNT_U32;
        PimSnpshtDataAry_rec[SnpshtAryIdx_Cnt_T_u08].SpclSnpshtData2 = DFTSPCLSNPSHTDATA_CNT_U32;
        PimSnpshtDataAry_rec[SnpshtAryIdx_Cnt_T_u08].MicroDiagcData  = 0U;
        PimSnpshtDataAry_rec[SnpshtAryIdx_Cnt_T_u08].IgnCntr         = 0U;
        PimSnpshtDataAry_rec[SnpshtAryIdx_Cnt_T_u08].HwTq            = 0;
        PimSnpshtDataAry_rec[SnpshtAryIdx_Cnt_T_u08].MotTq           = 0;
        PimSnpshtDataAry_rec[SnpshtAryIdx_Cnt_T_u08].BrdgVltg        = 0U;
        PimSnpshtDataAry_rec[SnpshtAryIdx_Cnt_T_u08].EcuT            = 0;
        PimSnpshtDataAry_rec[SnpshtAryIdx_Cnt_T_u08].NtcNr           = NTCNR_RESD;
        PimSnpshtDataAry_rec[SnpshtAryIdx_Cnt_T_u08].NtcStInfo       = 0U;
        PimSnpshtDataAry_rec[SnpshtAryIdx_Cnt_T_u08].SysSt           = SYSST_WRMININ;
    }
} 
 
/**********************************************************************************************************************
  * Name:        RestoreDiagcMgrLtchCntrAryDft
  * Description: Resotre Latch Counter Array to Default Values
  * Inputs:      NONE     
  * Outputs:     NONE 
  * Usage Notes:  NONE 
  *********************************************************************************************************************/
 FUNC(void, DiagcMgr_CODE) RestoreDiagcMgrLtchCntrAryDft(void)
{
    VAR(uint8,  AUTOMATIC) LoopCnt_Cnt_T_u08;
    
    for(LoopCnt_Cnt_T_u08=0U;LoopCnt_Cnt_T_u08 < TblSize_m(PimDiagcMgrLtchCntrAry_u08); LoopCnt_Cnt_T_u08++)
    {
        PimDiagcMgrLtchCntrAry_u08[LoopCnt_Cnt_T_u08] = 0U;
    }
} 


/**********************************************************************************************************************
  * Name:        UpdDtcEnaCdn
  * Description: Update DTC Enable Condition is a Non-RTE Server Runnable, called from BSWM
  * Inputs:      DtcEnaCdnSts_Arg, DtcEnaCdnId_Arg
  * Outputs:     NONE 
  * Usage Notes:  NONE 
  *********************************************************************************************************************/
 FUNC(void, DiagcMgr_CODE) UpdDtcEnaCdn(boolean DtcEnaCdnSts_Arg, uint8 DtcEnaCdnId_Arg)
{
    #if (STD_ON == NXTRDET_DIAGCMGR)
        if (DtcEnaCdnId_Arg > 15U)
        {
            /* Dem Configuration and DiagcMgr Configuration not consistent */
            (void)Det_ReportError(NXTRDET_DIAGCMGRMODID_CNT_U16, 0xFDU, 0U, 0U);
        }           
    #endif
    if(DtcEnaCdnSts_Arg == TRUE)
    {       
        /* Set Bit */
        DiagcMgrSetBits_u16(Rte_Pim_DtcEnaSts(), (uint16)((uint16)1U << DtcEnaCdnId_Arg));
    }
    else
    {
        /* Clear Bit */
        DiagcMgrClrBits_u16(Rte_Pim_DtcEnaSts(), (uint16)((uint16)1U << DtcEnaCdnId_Arg));
    }
}  

/**********************************************************************************************************************
 * Function:    GetNtcInfoApplX
 * Description: Call the Non-Rte version of GetInfoApplX, where X is based on the Appl ID passed to function. In case
 *              of an invalid application (or default case) the return value of this function will be FALSE.
 * Inputs:      ApplIdx_Cnt_T_u08    : Application ID of the NTC being processed (from the map array)
 *              NtcInfoIdx_Cnt_T_u08 : Index in the NTC Info in that application for that NTC (from the map array)
 *              NtcInfoPtr_Cnt_T_rec : This should be the address of the NtcInfoPtr value that needs to be updated.
 * Outputs:     *NtcInfoPtr_Cnt_T_rec : The value at the input address (NtcInfoPtr_Cnt_T_rec) is updated.
 *              ApplIDValid_Cnt_T_logl: TRUE for all cases except when the Application ID is invalid and default case
 *                                      is executed.
 * Usage Notes: ApplIDValid_Cnt_T_logl must be checked and the value at NtcInfoPtr_Cnt_T_rec must be updated with
 *              the desired default value for an invalid application if return is FALSE.(since in this path the output
 *              isn't modified). The header file with function declarations for the NonRte calls must be visible.
 **********************************************************************************************************************/
static FUNC(boolean, DiagcMgr_CODE) GetNtcInfoApplX(VAR(uint8, AUTOMATIC) ApplIdx_Cnt_T_u08,
                                                    VAR(uint8, AUTOMATIC) NtcInfoIdx_Cnt_T_u08,
                                                    P2VAR(NtcInfoRec4, AUTOMATIC, AUTOMATIC) NtcInfoPtr_Cnt_T_rec)
{
    VAR(boolean, AUTOMATIC) ApplIDValid_Cnt_T_logl = TRUE;
    switch(ApplIdx_Cnt_T_u08) 
    {
    #ifdef NTCCNTAPPL0_CNT_U16
        case 0x00U: 
        {
            (void) GetNtcInfoAppl0_Oper(NtcInfoIdx_Cnt_T_u08, NtcInfoPtr_Cnt_T_rec);                      
        }
        break;
    #endif

    #ifdef NTCCNTAPPL1_CNT_U16
        case 0x01U:
        {
            (void) GetNtcInfoAppl1_Oper(NtcInfoIdx_Cnt_T_u08, NtcInfoPtr_Cnt_T_rec);              
        }
        break;
    #endif

    #ifdef NTCCNTAPPL2_CNT_U16
        case 0x02U:
        {
            (void) GetNtcInfoAppl2_Oper(NtcInfoIdx_Cnt_T_u08, NtcInfoPtr_Cnt_T_rec);              
        }
        break;
    #endif

    #ifdef NTCCNTAPPL3_CNT_U16
        case 0x03U:
        {
            (void) GetNtcInfoAppl3_Oper(NtcInfoIdx_Cnt_T_u08, NtcInfoPtr_Cnt_T_rec);              
        }
        break;
    #endif

    #ifdef NTCCNTAPPL4_CNT_U16
        case 0x04U:
        {
            (void) GetNtcInfoAppl4_Oper(NtcInfoIdx_Cnt_T_u08, NtcInfoPtr_Cnt_T_rec);              
        }
        break;
    #endif

    #ifdef NTCCNTAPPL5_CNT_U16
        case 0x05U:
        {
            (void) GetNtcInfoAppl5_Oper(NtcInfoIdx_Cnt_T_u08, NtcInfoPtr_Cnt_T_rec);              
        }
        break;
    #endif

    #ifdef NTCCNTAPPL6_CNT_U16
        case 0x06U:
        {
            (void) GetNtcInfoAppl6_Oper(NtcInfoIdx_Cnt_T_u08, NtcInfoPtr_Cnt_T_rec);              
        }
        break;
    #endif

    #ifdef NTCCNTAPPL7_CNT_U16
        case 0x07U:
        {
            (void) GetNtcInfoAppl7_Oper(NtcInfoIdx_Cnt_T_u08, NtcInfoPtr_Cnt_T_rec);              
        }
        break;
    #endif

    #ifdef NTCCNTAPPL8_CNT_U16
        case 0x08U:
        {
            (void) GetNtcInfoAppl8_Oper(NtcInfoIdx_Cnt_T_u08, NtcInfoPtr_Cnt_T_rec);              
        }
        break;
    #endif

    #ifdef NTCCNTAPPL9_CNT_U16
        case 0x09U:
        {
            (void) GetNtcInfoAppl9_Oper(NtcInfoIdx_Cnt_T_u08, NtcInfoPtr_Cnt_T_rec);              
        }
        break;
    #endif

    #ifdef NTCCNTAPPL10_CNT_U16
        case 0x0AU:
        {
            (void) GetNtcInfoAppl10_Oper(NtcInfoIdx_Cnt_T_u08, NtcInfoPtr_Cnt_T_rec);              
        }
        break;
    #endif

        default: /*case 0xFFU:*/
        {           
            ApplIDValid_Cnt_T_logl = FALSE;
        }
        break;
    }
    return ApplIDValid_Cnt_T_logl;
 }

/************************************************************************************************************************
 * Function:    ChkAgiCntr
 * Description: Implements the 'Check Aging Counter' in DiagcMgrPwr block of DiagcMgr simulink model in FDD.
 *              It checks the aging counter and either updates the NtcFltAry or the HistFltAry.
 *              Note: This does not completely populate the NtcFltAry. It adds to it, the new NTCs from this ign cyc.
 *                    The NTCs that are in history are updated in the temprary HistFltAry. If an NTC exceeded
 *                    MAXCYCINHIST_CNT_U08, it falls off the FltAry since it is not updated into the HistFltAry this
 *                    cycle. Further processing is needed ot merge NTCs from HistFltAry into the actual Pim for FltAry.
 * Inputs:      AgiCntr_Cnt_T_u08         : Aging Counter from GetInfoApplX based on current NtcMapIdx into the MapAry.
 *              Sts_Cnt_T_u08             : Ntc test status from GetInfoApplX based on current NtcMapIdx into the MapAry.
 *              NtcMapIdx_Cnt_T_u16       : Current NtcMapIdx in the loop that the function is called from.
 * Outputs:     PimDiagcMgrNtcFltAry_rec  : Value of this Pim array at location *NtcFltAryIdx_Cnt_T_u16 is updated if the
 *                                          Aging counter is 0 (new NTC added in current cycle)
 *              *NtcFltAryIdx_Cnt_T_u16   : The value at the input address (NtcFltAryIdx_Cnt_T_u16). Incremented if the
 *                                          PimDiagcMgrNtcFltAry_rec is updated.
 *              HistNtcFltAry_T_rec       : Value of this array at location *HistFltAryIdx_Cnt_T_u16 is updated if the
 *                                          Aging counter is a non-zero value less than MAXCYCINHIST_CNT_U08.
 *              *HistFltAryIdx_Cnt_T_u16  : The value at the input address (HistFltAryIdx_Cnt_T_u16). Incremented if the
 *                                          HistNtcFltAry_T_rec is updated.
 * Usage Notes: None.
 ************************************************************************************************************************/
static FUNC(void, DiagcMgr_CODE) ChkAgiCntr(VAR(uint8 , AUTOMATIC) AgiCntr_Cnt_T_u08,
                                            VAR(uint8 , AUTOMATIC) Sts_Cnt_T_u08,
                                            VAR(uint16, AUTOMATIC) NtcMapIdx_Cnt_T_u16,
                                            P2VAR(uint16, AUTOMATIC, AUTOMATIC) NtcFltAryIdx_Cnt_T_u16,
                                            P2VAR(uint16, AUTOMATIC, AUTOMATIC) HistFltAryIdx_Cnt_T_u16,
                                            P2VAR(NtcFltInfoRec2, AUTOMATIC,AUTOMATIC) HistNtcFltAry_T_rec)
{
    if(AgiCntr_Cnt_T_u08 == 0U)
        {           
            /* Update NtcFltAry */
            PimDiagcMgrNtcFltAry_rec[(*NtcFltAryIdx_Cnt_T_u16)].NtcNr = NtcMapIdx_Cnt_T_u16;
            PimDiagcMgrNtcFltAry_rec[(*NtcFltAryIdx_Cnt_T_u16)].AgiCntr = 1U;
            PimDiagcMgrNtcFltAry_rec[(*NtcFltAryIdx_Cnt_T_u16)].Sts = Sts_Cnt_T_u08;                                           

            (*NtcFltAryIdx_Cnt_T_u16)++;
        }
        else if(AgiCntr_Cnt_T_u08  < MAXCYCINHIST_CNT_U08)
        {
            if((*HistFltAryIdx_Cnt_T_u16) < SIZEOFREADFLTARY_CNT_U08)
            {
                /* Update History Fault Array */
                HistNtcFltAry_T_rec[(*HistFltAryIdx_Cnt_T_u16)].NtcNr = NtcMapIdx_Cnt_T_u16;
                HistNtcFltAry_T_rec[(*HistFltAryIdx_Cnt_T_u16)].AgiCntr = AgiCntr_Cnt_T_u08 +1U;
                HistNtcFltAry_T_rec[(*HistFltAryIdx_Cnt_T_u16)].Sts = Sts_Cnt_T_u08;             
                
                (*HistFltAryIdx_Cnt_T_u16)++;
            }
        }
        else /* For DFTAGICNTR_CNT_U08 */
        {
           /* Do Nothing */
        }
}


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of function definition area >>              DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
#define DiagcMgr_STOP_SEC_CODE
#include "DiagcMgr_MemMap.h"
