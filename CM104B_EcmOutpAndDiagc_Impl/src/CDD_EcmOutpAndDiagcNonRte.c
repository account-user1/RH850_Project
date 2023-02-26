/**********************************************************************************************************************
* Copyright 2017, 2018 Nexteer 
* Nexteer Confidential
*
* Module File Name  : CDD_EcmOutpAndDiagcNonRte.c
* Module Description: Error Control Module Output and Diagnostics Complex Driver Non-RTE Functionality
* Project           : CBD 
* Author            : Shruthi Raghavan
***********************************************************************************************************************
* Version Control:
* %version:            3 %
* %derived_by:         rzk04c %
*----------------------------------------------------------------------------------------------------------------------
*   Date      Rev     Author         Change Description                                                        SCR #
* -------   ------  ----------  --------------------------------------------------------------------------  -----------
* 11/02/17   1          SR      Initial Implementation                                                      EA4#13212
* 02/06/18   2          SR      Implement fixes for anomaly EA4#19053.                                      EA4#20098
* 03/10/18   3          AJM     Removed FE Interrupt start up test. Corrected error injection in EI 
                                interrupt start up test,masked error source 82 and 91                       EA4#21605
**********************************************************************************************************************/

/*** << Start of include and declaration area >> ***/
#include <v800_ghs.h>
#include "Rte_CDD_EcmOutpAndDiagc.h"
#include "CDD_EcmOutpAndDiagc.h"
#include "NxtrMcuSuprtLib.h"
#include "CDD_ExcpnHndlg.h"
#include "ECM0_RegDefns.h"
#include "ECMM0_RegDefns.h"
#include "ECMC0_RegDefns.h"
#include "INTCTL_RegDefns.h"
#include "Os.h"

/* MISRA-C:2004 Rule 19.1 [NXTRDEV 19.1.1]: AUTOSAR requires deviation from this rule for Memory Mapping include statements */

#define ECMERROUTZPINSTSREGMASK_CNT_U32       (0x80000000U) /* 1<<31 : mask for ECMmSSE231 */
#define ECMERROUTZPINCOMPERRMASK_CNT_U32      (0x40000000U) /* 1<<30 : mask for ECMmSSE230 */
#define ERROUTPCLRINVLDREGCMPWBITMASK_CNT_U32 (0x00010000U) /* 1<<16 : mask for CMPW bit */
#define ECMCOMPERRBITMASK_CNT_U32             (0x10000000U) /* 1<<28 : mask for ECMmSSE228 */
#define FLASHAPPLCMDIFECMERRMASK_CNT_U32      ((uint32)0x00080000U) /* 1 << (83 % 32) */
#define NROFCOMPERRSRCSETATMPTS_CNT_U08       ((uint8)3U)
#define EIINTRPTREQFLGBITMASK_CNT_U16         ((uint16)0x1000U) /* Bit 12 */
#define FEINTRPTREQFLGBITMASK_CNT_U32         ((uint32)0x00001000U) /* Bit 12 */
#define FEINTRPTEVESRCECMBITMASK_CNT_U32      ((uint32)0x00000002U)
#define ECMMODERRTESTMODACTVMASK_CNT_U32      ((uint32)0x08000000U)
#define ECMFLSSEQERRMASK_CNT_U32              ((uint32)0x00040000U)

/*** <<  End  of include and declaration area >> ***/

#define CDD_EcmOutpAndDiagc_START_SEC_CODE
#include "CDD_EcmOutpAndDiagc_MemMap.h"


/**********************************************************************************************************************
 * Name:        EcmOutpAndDiagcInit1
 * Description: Non-RTE initialization function
 * Inputs:      NONE
 * Outputs:     NONE
 * Usage Notes: To be called at appropriate time during initialization prior to the O/S starting
 *              This verification procedure should be executed only after ECM has been initialized and
 *              the ERROROUTZ pin has been manually driven high state [in Mcu_Init].
 ********************************************************************************************************************/
FUNC(void, CDD_EcmOutpAndDiagc_CODE) EcmOutpAndDiagcInit1(void)
{
  VAR(boolean, AUTOMATIC) ExecStrUpTest_Cnt_T_logl = FALSE;
  VAR(uint32 , AUTOMATIC) Ecm0MaskblIntrptCfgReg2_Cnt_T_u32;
  VAR(uint32 , AUTOMATIC) Ecm0NmiCfgReg0_Cnt_T_u32;
  VAR(uint32 , AUTOMATIC) Ecm0IntRstCfgReg2_Cnt_T_u32;
  VAR(uint32 , AUTOMATIC) Ecm0ErrMaskReg0_Cnt_T_u32;
  VAR(uint32 , AUTOMATIC) Ecm0ErrMaskReg1_Cnt_T_u32;
  VAR(uint32 , AUTOMATIC) Ecm0ErrMaskReg2_Cnt_T_u32;
  VAR(uint32 , AUTOMATIC) Ecm0PsdoErrInjReg2_Cnt_T_u32;
  VAR(uint8  , AUTOMATIC) IterNum_Cnt_T_u08;

  /* Verification is executed only if start-up tests are expected */
  ChkForStrtUpTest_Oper(&ExecStrUpTest_Cnt_T_logl);

  if(ExecStrUpTest_Cnt_T_logl == TRUE)
  {
    /* Pre-condition check: no active ECM error sources, ERROROUTZ is high,
       dynamic mode disabled and error clear invalidation deactivated
    */
    if ((ECMM0ESSTR0 != 0U) || (ECMM0ESSTR1 != 0U) || (ECMM0ESSTR2 != ECMERROUTZPINSTSREGMASK_CNT_U32)) /* Verify pre-conditions on Master */
    {
        SetMcuDiagcIdnData(P1MCDIAGC_MSTCHKRERROUTPCTRLFLT, ECMM0ESSTR2);
    }
    else if ((ECMC0ESSTR0 != 0U) || (ECMC0ESSTR1 != 0U) || (ECMC0ESSTR2 != ECMERROUTZPINSTSREGMASK_CNT_U32)) /* Verify pre-conditions on Checker */
    {
        SetMcuDiagcIdnData(P1MCDIAGC_MSTCHKRERROUTPCTRLFLT, ECMC0ESSTR2);
    }
    else if((ECM0EPCFG != 0U) || /* The verification is done when the error pin operation configuration is non-dynamic/static */
            ((ECM0EOCCFG & ERROUTPCLRINVLDREGCMPWBITMASK_CNT_U32)!=0U)) /* CPMW bit should be zero for writing to ECM0EOCCFG in test */
    {
        SetMcuDiagcIdnData(P1MCDIAGC_CONFIGOUTPCTRLFLT, ECM0EOCCFG);
    }
    else /* Pre-conditions passed : Execute Verification Procedure*/
    {
        /* Set error invalidation time to 0 clock cycles. Make sure that bit 16 (CMPW) is zero before write (tested above) */
        WrProtdRegEcm0_u32(0U, &ECM0EOCCFG);

        /* Store context registers */
        Ecm0MaskblIntrptCfgReg2_Cnt_T_u32 = ECM0MICFG2;
        Ecm0NmiCfgReg0_Cnt_T_u32          = ECM0NMICFG0;
        Ecm0IntRstCfgReg2_Cnt_T_u32       = ECM0IRCFG2;
        Ecm0ErrMaskReg0_Cnt_T_u32         = ECM0EMK0;
        Ecm0ErrMaskReg1_Cnt_T_u32         = ECM0EMK1;
        Ecm0ErrMaskReg2_Cnt_T_u32         = ECM0EMK2;
        Ecm0PsdoErrInjReg2_Cnt_T_u32      = ECM0PE2;

        /* Disable interrupt generation in response to ECM error compare (error source 92) */
        WrProtdRegEcm0_u32(Ecm0MaskblIntrptCfgReg2_Cnt_T_u32  & ~ECMCOMPERRBITMASK_CNT_U32, &ECM0MICFG2);
        WrProtdRegEcm0_u32(Ecm0NmiCfgReg0_Cnt_T_u32           & ~ECMCOMPERRBITMASK_CNT_U32, &ECM0NMICFG2);
        WrProtdRegEcm0_u32(Ecm0IntRstCfgReg2_Cnt_T_u32        & ~ECMCOMPERRBITMASK_CNT_U32, &ECM0IRCFG2);

        /* Mask ERROROUTZ driving for all interrupts except the ECM compare error (error source 92) */
        WrProtdRegEcm0_u32(0xFFFFFFFFU, &ECM0EMK0);
        WrProtdRegEcm0_u32(0xFFFFFFFFU, &ECM0EMK1);
        WrProtdRegEcm0_u32(0xFFFFFFFFU & (~ECMCOMPERRBITMASK_CNT_U32), &ECM0EMK2);

        /* Test ECM master unit. Enable mask on Checker unit */
        ECM0PEM = ((uint32)1U << 0); /* Pseudo Error of 'ECM Compare Error' for ECM checker is masked */

        /* Pseudo error injection */
        WrProtdRegEcm0_u32(ECMCOMPERRBITMASK_CNT_U32, &ECM0PE2); /* Generate Pseudo Error for ECM Compare Error */

      __SYNCM(); /* Execute memory barrier */

      /* Check ERROROUTZ status and ECM compare error flag linked to Master unit */
      IterNum_Cnt_T_u08 = NROFCOMPERRSRCSETATMPTS_CNT_U08;
      while((ECMM0ESSTR2 != ECMCOMPERRBITMASK_CNT_U32) && (IterNum_Cnt_T_u08 != 0U))
      {
          IterNum_Cnt_T_u08--;
      }

      if(IterNum_Cnt_T_u08 == 0U)
      {
        SetMcuDiagcIdnData(P1MCDIAGC_MSTCHKRERROUTPCTRLFLT, ECMM0ESSTR2);
      }
      else /* Proceed with Verification if test passed on Master */
      {
        /* Check ERROROUTZ status and ECM compare error flag linked to Checker unit */
        if (ECMC0ESSTR2 != 0U) /* No errors should be set */
        {
          SetMcuDiagcIdnData(P1MCDIAGC_MSTCHKRERROUTPCTRLFLT, ECMC0ESSTR2);
        }
        else
        {
          /* Enable mask on ECM M/C */
          ECM0PEM = ((uint32)1U << 0) |
                    ((uint32)1U << 1);

          /* Clear pseudo error flag for ECM compare error raised from ECM Master check*/
          WrProtdRegEcm0_u32(ECMCOMPERRBITMASK_CNT_U32, &ECM0ESSTC2);

          /* Check if all error sources are inactive */
          if (ECMM0ESSTR2 != 0U)
          {
            SetMcuDiagcIdnData(P1MCDIAGC_MSTCHKRERROUTPCTRLFLT, ECMM0ESSTR2);
          }
          else
          {
            /* Drive ERROROUTZ pin high level state. Clearing ECM error status register does not change error out pin state */
            CtrlErrOut_Oper(STD_HIGH, TRIGREG_MST);

            /* Check if ERROROUTZ is high and there are no active error sources */
            if(ECMM0ESSTR2 != ECMERROUTZPINSTSREGMASK_CNT_U32)
            {
              SetMcuDiagcIdnData(P1MCDIAGC_MSTCHKRERROUTPCTRLFLT, ECMM0ESSTR2);
            }
            /* Check ERROROUTZ status and ECM compare error flag linked to Checker unit */
            else if (ECMC0ESSTR2 != ECMERROUTZPINSTSREGMASK_CNT_U32)
            {
              /* fail: raise NTC setup and break check */
              SetMcuDiagcIdnData(P1MCDIAGC_MSTCHKRERROUTPCTRLFLT, ECMC0ESSTR2);
            }
            else
            {
              /* Disable mask on ECM M/C */
              ECM0PEM = 0U;

              /* Check ERROROUTZ and error status bits once again for both units */
              if (ECMM0ESSTR2 != ECMERROUTZPINSTSREGMASK_CNT_U32)
              {
                SetMcuDiagcIdnData(P1MCDIAGC_MSTCHKRERROUTPCTRLFLT, ECMM0ESSTR2);
              }
              else if (ECMC0ESSTR2 != ECMERROUTZPINSTSREGMASK_CNT_U32)
              {
                SetMcuDiagcIdnData(P1MCDIAGC_MSTCHKRERROUTPCTRLFLT, ECMC0ESSTR2);
              }
              else
              {
                  /* Do Nothing */
              }
            }
          }
        }
      }
      /* Revert context state */
      ECM0PEM = 0U;
      WrProtdRegEcm0_u32(Ecm0MaskblIntrptCfgReg2_Cnt_T_u32, &ECM0MICFG2 );
      WrProtdRegEcm0_u32(Ecm0NmiCfgReg0_Cnt_T_u32         , &ECM0NMICFG2);
      WrProtdRegEcm0_u32(Ecm0IntRstCfgReg2_Cnt_T_u32      , &ECM0IRCFG2 );
      WrProtdRegEcm0_u32(Ecm0ErrMaskReg0_Cnt_T_u32        , &ECM0EMK0   );
      WrProtdRegEcm0_u32(Ecm0ErrMaskReg1_Cnt_T_u32        , &ECM0EMK1   );
      WrProtdRegEcm0_u32(Ecm0ErrMaskReg2_Cnt_T_u32        , &ECM0EMK2   );
      WrProtdRegEcm0_u32(Ecm0PsdoErrInjReg2_Cnt_T_u32     , &ECM0PE2    );
    }
  }
  *Rte_Pim_dEcmVrfyErrOutpCtrlCmpl() = TRUE;
}


/**********************************************************************************************************************
 * Name:        EcmOutpAndDiagcInit3
 * Description: Non-RTE initialization function for EI & FE interrupt propagation Start Up Test
 * Inputs:      NONE
 * Outputs:     NONE
 * Usage Notes: To be called at appropriate time during initialization prior to the O/S starting
 ********************************************************************************************************************/
FUNC(void, CDD_EcmOutpAndDiagc_CODE) EcmOutpAndDiagcInit3(void)
{
  VAR(boolean  , AUTOMATIC) ExecStrtUpTest_Cnt_T_logl;
  VAR(uint16   , AUTOMATIC) EcmEiIntrptCtrlReg_Cnt_T_u16;
  VAR(uint32   , AUTOMATIC) Ecm0MaskblIntCfgReg2_Cnt_T_u32;
  VAR(uint32   , AUTOMATIC) Ecm0PsdoErrInjReg2_Cnt_T_u32;

  /* Verification is executed only if start-up tests are expected */
  ChkForStrtUpTest_Oper(&ExecStrtUpTest_Cnt_T_logl);

  if(ExecStrtUpTest_Cnt_T_logl == TRUE)
  {
    /* Check if FACI Reset/Refresh transfer error is not activated */
    if(((ECMM0ESSTR2 & FLASHAPPLCMDIFECMERRMASK_CNT_U32) != 0U) ||
       ((ECMC0ESSTR2 & FLASHAPPLCMDIFECMERRMASK_CNT_U32) != 0U))
    {
      SetMcuDiagcIdnData(P1MCDIAGC_FACIRSTTRFERR, (uint32)0U);
    }
    /* Pre-condition check: no active ECM error sources, ERROROUTZ is high, dynamic mode disabled and error clear invalidation deactivated */
    else if((ECMM0ESSTR0 != 0U) || (ECMM0ESSTR1 != 0U) ||
            ((ECMM0ESSTR2 & (~(ECMERROUTZPINSTSREGMASK_CNT_U32 | ECMERROUTZPINCOMPERRMASK_CNT_U32 | ECMMODERRTESTMODACTVMASK_CNT_U32 | ECMFLSSEQERRMASK_CNT_U32))) != 0U))
    {
        /* The ECM Status Bits get cleared in the MCU Init following this Function */
        SetMcuDiagcIdnData(P1MCDIAGC_ECMMSTCHKRSTRTUPFLT, ECMM0ESSTR2);
    }
    else if((ECMC0ESSTR0 != 0U) || (ECMC0ESSTR1 != 0U) ||
            ((ECMC0ESSTR2 & (~(ECMERROUTZPINSTSREGMASK_CNT_U32 | ECMERROUTZPINCOMPERRMASK_CNT_U32 | ECMMODERRTESTMODACTVMASK_CNT_U32 | ECMFLSSEQERRMASK_CNT_U32))) != 0U))
    {
        /* The ECM Status Bits get cleared in the MCU Init following this Function */
        SetMcuDiagcIdnData(P1MCDIAGC_ECMMSTCHKRSTRTUPFLT, ECMC0ESSTR2);
    }
    else
    {
      SuspendAllInterrupts();
      /*** EI level interrupt propagation test ***/
      /* Store context registers */
      Ecm0MaskblIntCfgReg2_Cnt_T_u32 = ECM0MICFG2;
      Ecm0PsdoErrInjReg2_Cnt_T_u32 = ECM0PE2;

      /* Disable interrupt process by CPU for ECM EI level mask-able error (channel EIC0) */
      IMR0 |= (uint32)1U;
      /* Configure arbitrary chosen error source to generate EI level interrupt. Here ECM error src 83 (FACI Reset Error) */
      WrProtdRegEcm0_u32(FLASHAPPLCMDIFECMERRMASK_CNT_U32, &ECM0MICFG2);
      /* Pseudo error injection */
      WrProtdRegEcm0_u32(FLASHAPPLCMDIFECMERRMASK_CNT_U32, &ECM0PE2);
      /* Execute memory barrier */
      __SYNCM();

      /* Read corresponding interrupt control register to determine the request flag */
      EcmEiIntrptCtrlReg_Cnt_T_u16 = EIC0;
      if((EcmEiIntrptCtrlReg_Cnt_T_u16 & EIINTRPTREQFLGBITMASK_CNT_U16) == 0U)
      {
        SetMcuDiagcIdnData(P1MCDIAGC_EIINTRPTSTRTUPFLT, (uint32)EcmEiIntrptCtrlReg_Cnt_T_u16);
      }
      /* Clear ECM error source active flag */
      WrProtdRegEcm0_u32(FLASHAPPLCMDIFECMERRMASK_CNT_U32, &ECM0ESSTC2);
      /* Clear interrupt request flag and enable interrupt process by MCU */
      EcmEiIntrptCtrlReg_Cnt_T_u16 = (uint16)0xFFFFU ^ EIINTRPTREQFLGBITMASK_CNT_U16;
      EIC0 = EcmEiIntrptCtrlReg_Cnt_T_u16;
      IMR0 &= ~((uint32)1U);
      /* Restore context */
      WrProtdRegEcm0_u32(Ecm0MaskblIntCfgReg2_Cnt_T_u32, &ECM0MICFG2);
      WrProtdRegEcm0_u32(Ecm0PsdoErrInjReg2_Cnt_T_u32  , &ECM0PE2);

      ResumeAllInterrupts();
    }
  }
  *Rte_Pim_dEcmVrfyIntrptGennCmpl() = TRUE;
}


#define CDD_EcmOutpAndDiagc_STOP_SEC_CODE
#include "CDD_EcmOutpAndDiagc_MemMap.h"


/*** << Start of function definition area >> ***/


/*** <<  End  of function definition area >> ***/
