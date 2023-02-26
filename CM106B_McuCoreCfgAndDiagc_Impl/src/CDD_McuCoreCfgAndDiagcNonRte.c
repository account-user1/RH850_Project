/**********************************************************************************************************************
* Copyright 2017 Nexteer 
* Nexteer Confidential
*
* Module File Name  : CDD_McuCoreCfgAndDiagcNonRte.c
* Module Description: Mcu Core Configuration and Diagnostics Complex Driver NonRte Functionality
* Project           : CBD
* Author            : Shruthi Raghavan
***********************************************************************************************************************
* Version Control:
* %version:          1 %
* %derived_by:       nz2554 %
*----------------------------------------------------------------------------------------------------------------------
*   Date      Rev      Author    Change Description                                                            SCR #
* --------  -------  ---------  --------------------------------------------------------------------------- -----------
* 07/05/17   1        Shruthi   Initial Version                                                             EA4#12630
**********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
 #include "Rte_CDD_McuCoreCfgAndDiagc.h" /* For display variable to be visible to this Non RTE file */
 #include "CDD_McuCoreCfgAndDiagc.h"     /* Extern declaration of Non-RTE function */
 #include "CDD_ExcpnHndlg.h"             /* Declaration of P1mcDiagc1 & its enumerated constants & Set/Get McuDiagcIdnData*/
 #include "BIST_RegDefns.h"
 #include "ECMM0_RegDefns.h"
 #include "ECMC0_RegDefns.h"

 /* MISRA-C:2004 Rule 19.1 [NXTRDEV 19.1.1]: AUTOSAR requires deviation from this rule for Memory Mapping include statements */

 #define FIEBISTCTRLCIRCTRFERRMASK_CNT_U32  ((uint32)0x00080000U)
 
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of include and declaration area >>          DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

#define CDD_McuCoreCfgAndDiagc_START_SEC_CODE
#include "CDD_McuCoreCfgAndDiagc_MemMap.h"

/**********************************************************************************************************************
  * Name:        McuCoreCfgAndDiagcInit1
  * Description: Non-RTE initialization function checking BIST results
  * Inputs:      NONE
  * Outputs:     NONE
  * Usage Notes: To be called at appropriate time during initialization prior to the O/S starting
  ********************************************************************************************************************/
FUNC(void, CDD_McuCoreCfgAndDiagc_CODE) McuCoreCfgAndDiagcInit1(void)
{
  /**************************************************
   * << Start of Non-RTE runnable implementation >>
   **************************************************/
  VAR(P1mcDiagc1, AUTOMATIC) DiagcIdn_Cnt_T_enum;
  VAR(uint32    , AUTOMATIC) BistSeqStsReg_Cnt_T_u32;
  VAR(uint32    , AUTOMATIC) BistSeqStsIvsReg_Cnt_T_u32;
  VAR(uint32    , AUTOMATIC) MemBistFaildRamGroupStsL1Reg_Cnt_T_u32;
  VAR(uint32    , AUTOMATIC) LoglBistRefValReg1_Cnt_T_u32;
  VAR(uint32    , AUTOMATIC) LoglBistSignValReg1_Cnt_T_u32;
  VAR(uint32    , AUTOMATIC) LoglBistRefValReg2_Cnt_T_u32;
  VAR(uint32    , AUTOMATIC) LoglBistSignValReg2_Cnt_T_u32;
  VAR(uint32    , AUTOMATIC) MemBistRefValReg1_Cnt_T_u32;
  VAR(uint32    , AUTOMATIC) MemBistSignValReg1_Cnt_T_u32;
  VAR(uint32    , AUTOMATIC) MemBistRefValReg2_Cnt_T_u32;
  VAR(uint32    , AUTOMATIC) MemBistSignValReg2_Cnt_T_u32;

  /*Only perform test if the following resets have occurred: */
  /*Power On Reset when not in debug mode */
  GetMcuDiagcIdnData(&DiagcIdn_Cnt_T_enum);

  /* Only Run test on Power-On-Reset when not in Debug Mode */
  if(DiagcIdn_Cnt_T_enum == P1MCDIAGC_PWRONRST)
  {
    BistSeqStsReg_Cnt_T_u32     = BSEQ0ST;
    BistSeqStsIvsReg_Cnt_T_u32    = BSEQ0STB;
    MemBistFaildRamGroupStsL1Reg_Cnt_T_u32 = MBISTFTAGL1;

    /* Check if the chip is in debug mode */
    if((MemBistFaildRamGroupStsL1Reg_Cnt_T_u32 == 0xFFFFFFFFU) &&
        (BistSeqStsReg_Cnt_T_u32 == 0x2U) &&
        (BistSeqStsIvsReg_Cnt_T_u32 == 0x1U))
    {
      /* In Debug Mode : Do Nothing */
    }
    else
    {
      /* Check if 1Bit or 2Bit ECC Error occurred during transfer of FieldBIST parameters
         from Code Flash to Field BIST Circuit [ECM Error Source 83]*/
      if(((ECMM0ESSTR2 & FIEBISTCTRLCIRCTRFERRMASK_CNT_U32) == FIEBISTCTRLCIRCTRFERRMASK_CNT_U32) ||
         ((ECMC0ESSTR2 & FIEBISTCTRLCIRCTRFERRMASK_CNT_U32) == FIEBISTCTRLCIRCTRFERRMASK_CNT_U32))
      {
        SetMcuDiagcIdnData(P1MCDIAGC_BISTECCERR, 0U);
      }
      else
      {
        /* Check if either Registers indicate BIST execution has NOT completed successful */
        if((BistSeqStsReg_Cnt_T_u32 != 0x2U) || (BistSeqStsIvsReg_Cnt_T_u32 != 0x1U))
        {
          SetMcuDiagcIdnData(P1MCDIAGC_BISTNOTCMPLERR, 0U);
        }
        /* Both Register indicates BIST Completed Successfully */
        else
        {
          /* Check if there were any errors during LBIST execution */
          LoglBistRefValReg1_Cnt_T_u32  = LBISTREF1;
          LoglBistSignValReg1_Cnt_T_u32 = LBISTSIG1;
          LoglBistRefValReg2_Cnt_T_u32  = LBISTREF2;
          LoglBistSignValReg2_Cnt_T_u32 = LBISTSIG2;
          if((LoglBistRefValReg1_Cnt_T_u32 != LoglBistSignValReg1_Cnt_T_u32) ||
             (LoglBistRefValReg2_Cnt_T_u32 != LoglBistSignValReg2_Cnt_T_u32))
          {
            SetMcuDiagcIdnData(P1MCDIAGC_LOGLBISTERR, 0U);
          }
          /* Check if there were any errors during MBIST execution */
          MemBistRefValReg1_Cnt_T_u32  = MBISTREF1;
          MemBistSignValReg1_Cnt_T_u32 = MBISTSIG1;
          MemBistRefValReg2_Cnt_T_u32  = MBISTREF2;
          MemBistSignValReg2_Cnt_T_u32 = MBISTSIG2;
          if((MemBistRefValReg1_Cnt_T_u32 != MemBistSignValReg1_Cnt_T_u32) ||
             (MemBistRefValReg2_Cnt_T_u32 != MemBistSignValReg2_Cnt_T_u32))
          {
            /* Software Test Not Done - Refer FDD document for rationale */
            SetMcuDiagcIdnData(P1MCDIAGC_MEMBISTERR,0U);
          }
          *Rte_Pim_dMcuCoreCfgAndDiagcBistRunCmpl() = TRUE;
        }
      }
    }
  }
/**************************************************
 * <<  End of Non-RTE runnable implementation  >>
 **************************************************/
}

#define CDD_McuCoreCfgAndDiagc_STOP_SEC_CODE
#include "CDD_McuCoreCfgAndDiagc_MemMap.h"
