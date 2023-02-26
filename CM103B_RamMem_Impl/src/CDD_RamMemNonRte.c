/**********************************************************************************************************************
* Copyright 2017 Nexteer 
* Nexteer Confidential
*
* Module File Name  : CDD_RamMemNonRte.c 
* Module Description: Implements the non-RTE functionality of CM103B RAM Memory
* Project           : CBD
* Author            : Shruthi Raghavan
***********************************************************************************************************************
* Version Control:
* %version:          1 %
* %derived_by:       nz2554 %
*---------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author    Change Description                                                              SCR #
* --------  -------  --------  ----------------------------------------------------------------------------- ---------
* 09/28/17   1       SR        Initial Version                                                               EA4#12606
* 11/22/17   2       SR        Fix the location of MemMap include                                            EA4#12606
**********************************************************************************************************************/

#include <v800_ghs.h> /* for SYNCM intrinsic */
#include "Os.h" /* for SuspendAllInterrupts(), ResumeAllInterrupts() */
#include "ECCPE1_RegDefns.h"
#include "ECCGRC_RegDefns.h"
#include "ECM0_RegDefns.h"
#include "NxtrMcuSuprtLib.h"
#include "Rte_CDD_RamMem.h"
#include "CDD_RamMem.h"

/* MISRA-C:2004 Rule  1.1 [NXTRDEV 1.1.1  ] : Inline functions are used to allow for throughput optimization (in Interrupt Service Routines) */
/* MISRA-C:2004 Rule 11.3 [NXTRDEV 11.3.3 ] : Cast of an integer to a pointer is required for reading from computed addresses as needed for micro controller diagnostics*/
/* MISRA-C:2004 Rule 19.1 [NXTRDEV 19.1.1 ] : AUTOSAR requires deviation from this rule for Memory Mapping include statements */

#define LCLRAMECCSEDECMFLGCLRMASK_CNT_U32     ((uint32)0x00010000U)
#define GLBRAMECCSEDECMFLGCLRMASK_CNT_U32     ((uint32)0x00020000U)

#define LCLRAMBASADR_CNT_U32                  ((uint32)0xFEBE0000U)
#define LCLRAMSEDERRBASADRBNK0_CNT_U32        ((uint32)0xFEBC0000U) /* LRAM_Base_Address[31:18] |  (Bank_0[3:0] = 'b0000)*/
#define LCLRAMSEDERRBASADRBNK1_CNT_U32        ((uint32)0xFEBC0004U) /* LRAM_Base_Address[31:18] |  (Bank_1[3:0] = 'b0100)*/
#define LCLRAMSEDERRBASADRBNK2_CNT_U32        ((uint32)0xFEBC0008U) /* LRAM_Base_Address[31:18] |  (Bank_2[3:0] = 'b1000)*/
#define LCLRAMSEDERRBASADRBNK3_CNT_U32        ((uint32)0xFEBC000CU) /* LRAM_Base_Address[31:18] |  (Bank_3[3:0] = 'b1100)*/
#define GLBRAMBASADR_CNT_U32                  ((uint32)0xFEED8000U)
#define GLBRAMSEDERRBASADR_CNT_U32            ((uint32)0xFEE00000U) /* GRAM_Base_Address[31:21] */
#define GLBRAMSEDERRADRSTRT_CNT_U32           ((uint32)0xFFC64040U) /* UGR1SEDADR Register Address */
#define LCLRAMBNK0SEDERRADRSTRT_CNT_U32       ((uint32)0xFFC65460U) /* LR1SEDADR0_PE1 Register Address */
#define LCLRAMBNK1SEDERRADRSTRT_CNT_U32       ((uint32)0xFFC65464U) /* LR1SEDADR1_PE1 Register Address */
#define LCLRAMBNK2SEDERRADRSTRT_CNT_U32       ((uint32)0xFFC65468U) /* LR1SEDADR2_PE1 Register Address */
#define LCLRAMBNK3SEDERRADRSTRT_CNT_U32       ((uint32)0xFFC6546CU) /* LR1SEDADR3_PE1 Register Address */
#define SIZEOFRAMSNGBITECCERRADRREG_CNT_U08   ((uint8)4U)
#define NROFGLBRAMSEDERRADRREG_CNT_U08        ((uint8)32U)
#define NROFRAMADRINWORDLINE_CNT_U08          ((uint8)8U)
#define NROFLCLRAMSEGPERBNK_CNT_U08           ((uint8)8U)
#define NROFLCLRAMMEMBNK_CNT_U08              ((uint8)4U)
#define LCLRAMBNKLOGLADROFFS_CNT_U32          ((uint32)4U)

#define LCLRAMBNK0SNGBITERRMONREGMASK_CNT_U32 ((uint32)0x11111111U)
#define LCLRAMBNK1SNGBITERRMONREGMASK_CNT_U32 ((uint32)0x22222222U)
#define LCLRAMBNK2SNGBITERRMONREGMASK_CNT_U32 ((uint32)0x44444444U)
#define LCLRAMBNK3SNGBITERRMONREGMASK_CNT_U32 ((uint32)0x88888888U)

#define LCLRAMWORDLINERDADROFFS_CNT_U32       ((uint32)0x00000010U)
#define LCLRAMWORDLINEADRMASK_CNT_U32         ((uint32)0xFFFFFF8FU)
#define GLBRAMWORDLINERDADROFFS_CNT_U32       ((uint32)0x00000008U)
#define GLBRAMWORDLINEADRMASK_CNT_U32         ((uint32)0xFFFFFFC7U)

static INLINE FUNC(void  , CDD_RamMem_CODE) RamFailrModClassnChk(uint32 LclRamFailrAdr_Cnt_T_u32, uint32 ErrClrMask_Cnt_T_u32);

#define CDD_RamMem_START_SEC_CODE 
#include "CDD_RamMem_MemMap.h"

/*****************************************************************************************************************
 * Name        :   RamMemLclRamSngBitEcc
 * Description :   Local RAM Single bit ECC exception handler callback for the CM103A RamMem component 
 * Inputs      :   None
 * Outputs     :   None
 * Usage Notes :   Called from Mcu EI interrupt handler. Assume LRSERSTR_PE1 is non-Zero.
 ****************************************************************************************************************/
FUNC(void, CDD_RamMem_CODE) RamMemLclRamSngBitEcc(void)
{
    VAR(boolean, AUTOMATIC) NoLclRamErrFlgSet_Cnt_T_logl = FALSE;
    VAR(boolean, AUTOMATIC) LclRamBnk0FirstErrFound_Cnt_T_logl;
    VAR(uint32 , AUTOMATIC) BitNr_Cnt_T_u32;
    VAR(uint32 , AUTOMATIC) FaildBankNr_Cnt_T_u32;
    VAR(uint32 , AUTOMATIC) ErrClrMask_Cnt_T_u32;
    VAR(uint32 , AUTOMATIC) ErrBitInRegNibl_Cnt_T_u32;
    VAR(uint32 , AUTOMATIC) LclRamBnkSedBasAdr_Cnt_T_u32;
    VAR(uint32 , AUTOMATIC) LclRamBnkErrAdrOffs_Cnt_T_u32;
    VAR(uint32 , AUTOMATIC) LclRamBnkSedErrAdrStrt_Cnt_T_u32;
    VAR(uint32 , AUTOMATIC) LclRamBnkSegEccFlgBitMask_Cnt_T_u32;

    /* Disable all the EI Interrupts */
    SuspendAllInterrupts();

    /* Clear error flags by setting the the ECMCLSSE116 bit of the ECM0ESSTC1 register */
    WrProtdRegEcm0_u32(LCLRAMECCSEDECMFLGCLRMASK_CNT_U32,&ECM0ESSTC1);

    /* Identify Responsible Bank and Process Error Based on Flags Set*/
  if((LRSERSTR_PE1 & LCLRAMBNK0SNGBITERRMONREGMASK_CNT_U32) != 0U)
  {
    FaildBankNr_Cnt_T_u32 = 0U;
    ErrClrMask_Cnt_T_u32  = LCLRAMBNK0SNGBITERRMONREGMASK_CNT_U32;
  }
  else if((LRSERSTR_PE1 & LCLRAMBNK1SNGBITERRMONREGMASK_CNT_U32) != 0U)
  {
    FaildBankNr_Cnt_T_u32 = 1U;
    ErrClrMask_Cnt_T_u32  = LCLRAMBNK1SNGBITERRMONREGMASK_CNT_U32;
  }
  else if((LRSERSTR_PE1 & LCLRAMBNK2SNGBITERRMONREGMASK_CNT_U32) != 0U)
  {
    FaildBankNr_Cnt_T_u32 = 2U;
    ErrClrMask_Cnt_T_u32  = LCLRAMBNK2SNGBITERRMONREGMASK_CNT_U32;
  }
  else if((LRSERSTR_PE1 & LCLRAMBNK3SNGBITERRMONREGMASK_CNT_U32) != 0U)
  {
    FaildBankNr_Cnt_T_u32 = 3U;
    ErrClrMask_Cnt_T_u32  = LCLRAMBNK3SNGBITERRMONREGMASK_CNT_U32;
  }
  else
  {
    /*Assuming we can enter the ISR with No bits set due to transient fault on ECM reg:
      ECM flag cleared, do not run local RAM checks*/
    NoLclRamErrFlgSet_Cnt_T_logl = TRUE;
  }

  if(NoLclRamErrFlgSet_Cnt_T_logl == FALSE)
  {
    LclRamBnkSedErrAdrStrt_Cnt_T_u32   = LCLRAMBNK0SEDERRADRSTRT_CNT_U32 + (FaildBankNr_Cnt_T_u32*LCLRAMBNKLOGLADROFFS_CNT_U32);
    LclRamBnkSedBasAdr_Cnt_T_u32       = LCLRAMSEDERRBASADRBNK0_CNT_U32  + (FaildBankNr_Cnt_T_u32*LCLRAMBNKLOGLADROFFS_CNT_U32);
    ErrBitInRegNibl_Cnt_T_u32          = (uint32)1U<<FaildBankNr_Cnt_T_u32;
    BitNr_Cnt_T_u32                    = 0U;
    LclRamBnk0FirstErrFound_Cnt_T_logl = FALSE;
    while((BitNr_Cnt_T_u32<NROFLCLRAMSEGPERBNK_CNT_U08) && (LclRamBnk0FirstErrFound_Cnt_T_logl == FALSE))
    {
      LclRamBnkSegEccFlgBitMask_Cnt_T_u32 = (uint32)(ErrBitInRegNibl_Cnt_T_u32<<(BitNr_Cnt_T_u32*NROFLCLRAMMEMBNK_CNT_U08));
      if((LRSERSTR_PE1 & LclRamBnkSegEccFlgBitMask_Cnt_T_u32) != 0U)
      {
        LclRamBnk0FirstErrFound_Cnt_T_logl = TRUE;
        LclRamBnkErrAdrOffs_Cnt_T_u32      = LclRamBnkSedErrAdrStrt_Cnt_T_u32 + (uint32)(BitNr_Cnt_T_u32 * (NROFLCLRAMMEMBNK_CNT_U08*SIZEOFRAMSNGBITECCERRADRREG_CNT_U08));
        *Rte_Pim_LclRamFailrAdr()          = LclRamBnkSedBasAdr_Cnt_T_u32 | (*((uint32 *)LclRamBnkErrAdrOffs_Cnt_T_u32));
        LRSERSTCLR_PE1                     = LclRamBnkSegEccFlgBitMask_Cnt_T_u32;
      }
      BitNr_Cnt_T_u32++;
    }
    RamFailrModClassnChk(*Rte_Pim_LclRamFailrAdr(),ErrClrMask_Cnt_T_u32);
  }

  /* Re-enable all the disabled EI Interrupts */
  ResumeAllInterrupts();
}

/*****************************************************************************************************************
 * Name        : RamMemGlbRamSngBitEcc
 * Description : Global RAM Single bit ECC exception handler callback for the CM103A RamMem component 
 * Inputs      : None
 * Outputs     : None
 * Usage Notes : Called from Mcu EI interrupt handler
 ****************************************************************************************************************/
FUNC(void, CDD_RamMem_CODE) RamMemGlbRamSngBitEcc(void)
{
  VAR(boolean, AUTOMATIC) GlbRamFirstErrFound_Cnt_T_logl = FALSE;
  VAR(uint8  , AUTOMATIC) WordLineAdrIdx_Cnt_T_u08;
  VAR(uint32 , AUTOMATIC) BitNr_Cnt_T_u32 = 0U;
  VAR(uint32 , AUTOMATIC) WordLineAdr_Cnt_T_u32;
  VAR(uint32 , AUTOMATIC) StsRegVal_Cnt_T_u32;
  VAR(uint32 , AUTOMATIC) GlbRamSegEccFlgBitMask_Cnt_T_u32;
  VAR(uint32 , AUTOMATIC) GlbRamEccSngBitErrDetdAdr_Cnt_T_u32;

  /* Suspend Interrupts */
  SuspendAllInterrupts();

  /* Clear ECM error flags by setting the the ECMCLSSE117 bit of the ECM0ESSTC1 register */
  WrProtdRegEcm0_u32(GLBRAMECCSEDECMFLGCLRMASK_CNT_U32,&ECM0ESSTC1);

  if(UGRSERSTR != 0U)
  {
    while((BitNr_Cnt_T_u32 < NROFGLBRAMSEDERRADRREG_CNT_U08) && (GlbRamFirstErrFound_Cnt_T_logl == FALSE))
    {
      GlbRamSegEccFlgBitMask_Cnt_T_u32 = ((uint32)1U<<BitNr_Cnt_T_u32);
      if((UGRSERSTR & GlbRamSegEccFlgBitMask_Cnt_T_u32) != 0U)
      {
        /** Ram Segment with Single Bit Error Detected is found **/
        GlbRamFirstErrFound_Cnt_T_logl      = TRUE;
        GlbRamEccSngBitErrDetdAdr_Cnt_T_u32 = GLBRAMSEDERRADRSTRT_CNT_U32 + ((uint32)BitNr_Cnt_T_u32 * SIZEOFRAMSNGBITECCERRADRREG_CNT_U08);
        *Rte_Pim_GlbRamFailrAdr()           = GLBRAMSEDERRBASADR_CNT_U32 | (*((uint32 *)GlbRamEccSngBitErrDetdAdr_Cnt_T_u32));
        /* Clear corresponding Ram Segment error info */
        UGRSERSTCLR = GlbRamSegEccFlgBitMask_Cnt_T_u32;
      }
      /** Check if the next Ram Segment has Single bit error **/
      BitNr_Cnt_T_u32 += 1U;
    }

    /*** Ram Failr Mode Classification Chk ***/
    WordLineAdr_Cnt_T_u32 = *Rte_Pim_GlbRamFailrAdr() & GLBRAMWORDLINEADRMASK_CNT_U32;
    *Rte_Pim_GlbRamEccSngBitSoftFailr() = TRUE;
    StsRegVal_Cnt_T_u32 = UGRSERSTR;
    /* Read from 8 addresses */
    for(WordLineAdrIdx_Cnt_T_u08=0U;WordLineAdrIdx_Cnt_T_u08<NROFRAMADRINWORDLINE_CNT_U08;WordLineAdrIdx_Cnt_T_u08++)
    {
        *Rte_Pim_GlbRamWordLineRead() = *((uint32 *)WordLineAdr_Cnt_T_u32);
        WordLineAdr_Cnt_T_u32 += GLBRAMWORDLINERDADROFFS_CNT_U32;
    }

    /* Wait until read from the RAM word lines is complete */
    __SYNCM();
    /* Clear Bank Specific Error Info occurred recently during the test */
    UGRSERSTCLR = StsRegVal_Cnt_T_u32 ^ UGRSERSTR;
  }

  /* Resume Interrupts */
  ResumeAllInterrupts();
}

/*****************************************************************************************************************
 * Name        :   RamFailrModClassnChk
 * Description :   Failure Mode Classification Check for CM103B Ram Memory
 * Inputs      :   None
 * Outputs     :   None
 * Usage Notes :   Called from RamMemLclRamSngBitEcc error handler
 ****************************************************************************************************************/
static INLINE FUNC(void  , CDD_RamMem_CODE) RamFailrModClassnChk(uint32 LclRamFailrAdr_Cnt_T_u32, uint32 ErrClrMask_Cnt_T_u32)
{
    VAR(uint8 , AUTOMATIC) WordLineAdrIdx_Cnt_T_u08;
    VAR(uint32, AUTOMATIC) WordLineAdr_Cnt_T_u32;
    VAR(uint32, AUTOMATIC) StsRegVal_Cnt_T_u32;

    WordLineAdr_Cnt_T_u32 = LclRamFailrAdr_Cnt_T_u32 & LCLRAMWORDLINEADRMASK_CNT_U32;
    *Rte_Pim_LclRamEccSngBitSoftFailr() = TRUE;
    StsRegVal_Cnt_T_u32 = LRSERSTR_PE1 & ErrClrMask_Cnt_T_u32;

    /* Read from 8 addresses */
    for(WordLineAdrIdx_Cnt_T_u08=0U;WordLineAdrIdx_Cnt_T_u08<NROFRAMADRINWORDLINE_CNT_U08;WordLineAdrIdx_Cnt_T_u08++)
    {
		*Rte_Pim_LclRamWordLineRead() = *((uint32 *)WordLineAdr_Cnt_T_u32);
        WordLineAdr_Cnt_T_u32 += LCLRAMWORDLINERDADROFFS_CNT_U32;
    }
    __SYNCM(); /* Wait until reads from the RAM word lines are complete */

    /* Clear Bank Specific Error Info occurred recently during the test */
    LRSERSTCLR_PE1 = StsRegVal_Cnt_T_u32 ^ (LRSERSTR_PE1 & ErrClrMask_Cnt_T_u32);
}

#define CDD_RamMem_STOP_SEC_CODE 
#include "CDD_RamMem_MemMap.h"
