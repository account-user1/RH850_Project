/*****************************************************************************
* Copyright 2017, 2018 Nexteer 
* Nexteer Confidential
*
* Module File Name: CDD_GtmCfgAndUse_private.h
* Module Description: Private header file for the CDD_GtmCfgAndUse component
* Project           : CBD   
* Author            : Avinash James
*****************************************************************************
* Version Control:
* %version:          2 %
* %derived_by:       rzk04c %
*----------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author         Change Description                                                           SCR #
* -------   -------  --------  ---------------------------------------------------------------------------     --------
* 07/25/17  1        AJM       Initial version                                                                 EA4#10684
* 02/24/18  2        AJM       Update for anomaly EA4#20427                                                    EA4#20211
******************************************************************************/
/******************************************* Multiple Include Protection *********************************************/
#ifndef CDD_GTMCFGANDUSE_PRIVATE_H
#define CDD_GTMCFGANDUSE_PRIVATE_H

/************************************************ Include Statements *************************************************/
#include "ElecGlbPrm.h"

#define ROUNDTERMCON_CNT_U13P19         ((uint32)262144u) /* 2 raised to power 18 in counts = 0.5 U13P19 */
#define PWMTMRPERDIVSSCAGFAC_CNT_U08    ((uint16)19u)  /* PWMTMRPERDIVS Scaling Factor for timer count scaling */
#define CLRBIT0MASK_CNT_U32             ((uint32)0xFFFFFFFEU)
#define GTMSENTRAMBUFSIZE_CNT_U16       ((uint16)137)

/******************************************** File Level Rule Deviations *********************************************/

/* MISRA-C:2004 Rule 1.1  [NXTRDEV 1.1.2]: Inline functions are used for functions called from Motor Control ISR to allow for throughput optimization */
/* MISRA-C:2004 Rule 8.5 [NXTRDEV 8.5.1]: Function definitions are required to be in a header for inline function usage of non-static inline functions. */

/*********************************************** Exported Declarations ***********************************************/
extern CONST(uint32, GtmCfgAndUse_CONST)  GTMCFGANDUSECODANDDATAARY_CNT_U32[GTMSENTRAMBUFSIZE_CNT_U16];
INLINE FUNC (uint32, GtmCfgAndUse_APPL_CODE) CnvNanoSecToTmrCnt (uint32 Ti_NanoSec_T_u32);

/******************************************************************************
  * Name:        CnvNanoSecToTmrCnt
  * Description: Converts a time in nanoseconds to timer counts
  * Inputs:      Ti_NanoSec_T_u32 :- time to be converted, in nanoseconds 
  * Outputs:     Returns timer counts as a uint32 (p0) 
  * Usage Notes: Per FDD assumptions in model comments, input range is 0 to 100000
  ****************************************************************************/
INLINE FUNC (uint32, GtmCfgAndUse_APPL_CODE) CnvNanoSecToTmrCnt (uint32 Ti_NanoSec_T_u32)
{
    VAR (uint32, AUTOMATIC) Tmr_Cnt_T_u32;
    VAR (uint32, AUTOMATIC) Ti_Cnt_T_u13p19;

    Ti_Cnt_T_u13p19 = Ti_NanoSec_T_u32 * ELECGLBPRM_PWMTMRPERDIVS_CNTPERNANOSEC_U13P19;
    Ti_Cnt_T_u13p19 += ROUNDTERMCON_CNT_U13P19;
    Tmr_Cnt_T_u32 = (Ti_Cnt_T_u13p19 >> PWMTMRPERDIVSSCAGFAC_CNT_U08);
    return Tmr_Cnt_T_u32;
}

/**************************************** End Of Multiple Include Protection *****************************************/
#endif

