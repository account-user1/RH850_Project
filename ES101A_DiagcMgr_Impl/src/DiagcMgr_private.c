/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of version logging area >>                DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/**********************************************************************************************************************
* Copyright 2015, 2016, 2017 Nexteer 
* Nexteer Confidential
*
* Module File Name: DiagcMgr_private.c
* Module Description: Functions shared by multiple C files in the component
* Project           : CBD 
* Author            : Spandana Balani
***********************************************************************************************************************
* Version Control:
* %version:           4 %
* %derived_by:        nz2554 %
*----------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author         Change Description                                                           SCR #
* -------   -------  --------  ---------------------------------------------------------------------------     --------
* 03/11/16  1        SB         ES101A_DiagcMgr_Design version 2 implementation                                EA4#3421
* 04/19/16  2        SB         ES101A_DiagcMgr_Design version 3 implementation                                EA4#5110
* 09/23/16  3        SB         Removed requirement mapping                                                    EA4#7191
* 04/11/17  4        SR         ProcessDiagcSts function removed. Datatype changes due to removed Sts bits
                                Functionality added to ProcProxyRampRespAndDiagcSts                            EA4#10779
**********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of version logging area >>                  DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
#include "Rte_DiagcMgr.h"
#include "DiagcMgr.h"
#include "DiagcMgr_private.h"

/* MISRA-C:2004 Rule 19.1 [NXTRDEV 19.1.1]: AUTOSAR requires deviation from this rule for Memory Mapping include statements */

#define PrmDiagcMgrFltResp_u16                  (*(const Ary1D_u16_512 *)(Rte_Prm_DiagcMgrFltResp_Ary1D()))

#define DiagcMgr_START_SEC_CODE
#include "DiagcMgr_MemMap.h"

CONST(float32, DiagcMgr_CODE) FLTRESPRAMPTBL_ULS_F32[NROFRAMPRATE_CNT_U08] = {0.1F,0.125F,0.2F,1.0F,10.0F};

#define DiagcMgr_STOP_SEC_CODE
#include "DiagcMgr_MemMap.h"

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of include and declaration area >>          DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

#define DiagcMgr_START_SEC_CODE
#include "DiagcMgr_MemMap.h"

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of function definition area >>            DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * Function:    ProcProxyRampRespAndDiagcSts
 * Description: This function will update Ramp Rate, Scale and Ramp Related DiagStatus bits based on passed fault response
 *              currently active. This corresponds to "ProcessRampResponse and DiagcSts" block in DiagcMgrProxyX model
 * Inputs:      NtcNr_Cnt_T_u16, ProxyDiagcData_T_rec
 * Outputs:     None
 * Usage Notes: ProxyDiagcData_T_rec argument must be initialized before calling this function
 **********************************************************************************************************************/
FUNC(void, DiagcMgr_CODE) ProcProxyRampRespAndDiagcSts(uint16 NtcNr_Cnt_T_u16,
                                            CONSTP2VAR(DiagcDataRec2, AUTOMATIC, DiagcMgr_CODE) ProxyDiagcData_T_rec)
{   
    VAR(uint16, AUTOMATIC) RampRespBits_Cnt_T_u16;
    VAR(uint8 , AUTOMATIC) NonRcvrlNtc_Cnt_T_u08;
 
    if(((PrmDiagcMgrFltResp_u16[NtcNr_Cnt_T_u16]) & FLTRESPRCVRLFLT_CNT_U16) != 0U)
    {
        NonRcvrlNtc_Cnt_T_u08 = 0U;
    }
    else
    {
        NonRcvrlNtc_Cnt_T_u08 = DIAGCSTSNONRCVRLREQDIFLTPRSNT_CNT_U08;
    }
    RampRespBits_Cnt_T_u16 = (uint16)(((PrmDiagcMgrFltResp_u16[NtcNr_Cnt_T_u16]) & FLTRESPRAMPBITS_CNT_U16) >> 8U);
    switch(RampRespBits_Cnt_T_u16)
    {
        /* RapidShutdown Fault*/ 
        case IMDTSHTDWNFLT_CNT_U16:
        {                           
            /* Update Ramp Rate */
            if(MAXRAMPRATE_ULSPERSEC_F32 > ProxyDiagcData_T_rec->ActvRampRate)
            {
                ProxyDiagcData_T_rec->ActvRampRate = MAXRAMPRATE_ULSPERSEC_F32;
            }
            /* Update Scale */
            if(SCAMOTTQCMDTOZERO_ULS_F32 < ProxyDiagcData_T_rec->ActvMotTqCmdSca)
            {
                ProxyDiagcData_T_rec->ActvMotTqCmdSca = SCAMOTTQCMDTOZERO_ULS_F32;
            }
            /* Update DiagcSts */
            ProxyDiagcData_T_rec->DiagcSts = ProxyDiagcData_T_rec->DiagcSts | DIAGCSTSRAMPTOZEROFLTPRSNT_CNT_U08|NonRcvrlNtc_Cnt_T_u08;
        }   
        break; 
        /* ControlledShutdown Fault */ /* Damping Based Rampdown */
        case CTRLDSHTDWNFLT_CNT_U16:
        {
            /* Update DiagcSts */
            ProxyDiagcData_T_rec->DiagcSts = ProxyDiagcData_T_rec->DiagcSts | DIAGCSTSRAMPTOZEROFLTPRSNT_CNT_U08 | DIAGCSTSCTRLDSHTDWNFLTPRSNT_CNT_U08 | NonRcvrlNtc_Cnt_T_u08;  
            /* Update Scale */
            if(SCAMOTTQCMDTOZERO_ULS_F32 < ProxyDiagcData_T_rec->ActvMotTqCmdSca)
            {
                ProxyDiagcData_T_rec->ActvMotTqCmdSca = SCAMOTTQCMDTOZERO_ULS_F32;
            }
        }
        break;
        /* Information Only Fault *//* No Ramp */
        case INFOONLYFLT_CNT_U16:
        {
        }
        break;
        /* TimedShutdown Fault */
        default:
        {
            /* Update DiagcSts */
            ProxyDiagcData_T_rec->DiagcSts = ProxyDiagcData_T_rec->DiagcSts | DIAGCSTSRAMPTOZEROFLTPRSNT_CNT_U08 | NonRcvrlNtc_Cnt_T_u08;                 
            /* Update Ramp Rate */ 
            if((FLTRESPRAMPTBL_ULS_F32[RampRespBits_Cnt_T_u16]) > ProxyDiagcData_T_rec->ActvRampRate)
            {
                ProxyDiagcData_T_rec->ActvRampRate = FLTRESPRAMPTBL_ULS_F32[RampRespBits_Cnt_T_u16];
            }
            /* Update Scale */  
            if(SCAMOTTQCMDTOZERO_ULS_F32 < ProxyDiagcData_T_rec->ActvMotTqCmdSca)
            {
                ProxyDiagcData_T_rec->ActvMotTqCmdSca = SCAMOTTQCMDTOZERO_ULS_F32;
            }
        }   
        break;
    }
}

/**********************************************************************************************************************
 * Function:    DiagcMgrSetBits_u08
 * Description: This function will set bits based on the passed BitMask for a uint8 datatype
 * Inputs:      None
 * Outputs:     None
 **********************************************************************************************************************/        
FUNC(void, DiagcMgr_CODE) DiagcMgrSetBits_u08(CONSTP2VAR(uint8, AUTOMATIC, DiagcMgr_CODE) Data, uint8 BitMask)
{
    *Data |= BitMask;   
}
/**********************************************************************************************************************
 * Function:    DiagcMgrSetBits_u16
 * Description: This function will set bits based on the passed BitMask for a uint16 datatype
 * Inputs:      None
 * Outputs:     None
 **********************************************************************************************************************/
FUNC(void, DiagcMgr_CODE) DiagcMgrSetBits_u16(CONSTP2VAR(uint16, AUTOMATIC, DiagcMgr_CODE) Data, uint16 BitMask) 
{
    *Data |= BitMask;   
}
/**********************************************************************************************************************
 * Function:    DiagcMgrClrBits_u08
 * Description: This function will clear bits based on the passed BitMask for a uint8 datatype
 * Inputs:      None
 * Outputs:     None
 **********************************************************************************************************************/
FUNC(void, DiagcMgr_CODE) DiagcMgrClrBits_u08(CONSTP2VAR(uint8, AUTOMATIC, DiagcMgr_CODE) Data, uint8 BitMask)
{
    *Data &= (uint8)(~BitMask);
}
/**********************************************************************************************************************
 * Function:    DiagcMgrClrBits_u16
 
 * Description: This function will clear bits based on the passed BitMask for a uint16 datatype
 * Inputs:      None
 * Outputs:     None
 **********************************************************************************************************************/
FUNC(void, DiagcMgr_CODE) DiagcMgrClrBits_u16(CONSTP2VAR(uint16, AUTOMATIC, DiagcMgr_CODE) Data, uint16 BitMask)
{
    *Data &= (uint16)(~BitMask);
}
/**********************************************************************************************************************
 * Function:    DiagcMgrReadBit_u08
 * Description: This function will return TRUE if any bits are set based on the passed BitMask for a uint8 datatype
 * Inputs:      None
 * Outputs:     None
 **********************************************************************************************************************/
FUNC(boolean, DiagcMgr_CODE) DiagcMgrReadBit_u08(uint8 Data, uint8 BitMask)
{
    return (boolean)(((Data & BitMask) == 0U)?FALSE:TRUE);
}
/**********************************************************************************************************************
 * Function:    DiagcMgrReadBit_u16
 * Description: This function will return TRUE if any bits are set based on the passed BitMask for a uint16 datatype
 * Inputs:      None
 * Outputs:     None
 **********************************************************************************************************************/
FUNC(boolean, DiagcMgr_CODE) DiagcMgrReadBit_u16(uint16 Data, uint16 BitMask)
{
    return (boolean)(((Data & BitMask) == 0U)?FALSE:TRUE);
}

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of function definition area >>              DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

#define DiagcMgr_STOP_SEC_CODE
#include "DiagcMgr_MemMap.h" 
 
