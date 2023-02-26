/*============================================================================*/
/* Project      = AUTOSAR Renesas P1x-C MCAL Components                       */
/* Module       = Spi_Irq.c                                                   */
/* $Revision: 365405 $                                                        */
/* $Date: 2017-02-20 15:48:18 +0000 (Mon, 20 Feb 2017) $                      */
/*============================================================================*/
/*                                  COPYRIGHT                                 */
/*============================================================================*/
/* Copyright(c) 2015-2017  Renesas Electronics Corporation                    */
/*============================================================================*/
/* Purpose:                                                                   */
/* This file contains the ISR implementations for SPI                         */
/*============================================================================*/
/*                                                                            */
/* Unless otherwise agreed upon in writing between your company and           */
/* Renesas Electronics Corporation the following shall apply!                 */
/*                                                                            */
/* Warranty Disclaimer                                                        */
/*                                                                            */
/* There is no warranty of any kind whatsoever granted by Renesas. Any        */
/* warranty is expressly disclaimed and excluded by Renesas, either expressed */
/* or implied, including but not limited to those for non-infringement of     */
/* intellectual property, merchantability and/or fitness for the particular   */
/* purpose.                                                                   */
/*                                                                            */
/* Renesas shall not have any obligation to maintain, service or provide bug  */
/* fixes for the supplied Product(s) and/or the Application.                  */
/*                                                                            */
/* Each User is solely responsible for determining the appropriateness of     */
/* using the Product(s) and assumes all risks associated with its exercise    */
/* of rights under this Agreement, including, but not limited to the risks    */
/* and costs of program errors, compliance with applicable laws, damage to    */
/* or loss of data, programs or equipment, and unavailability or              */
/* interruption of operations.                                                */
/*                                                                            */
/* Limitation of Liability                                                    */
/*                                                                            */
/* In no event shall Renesas be liable to the User for any incidental,        */
/* consequential, indirect, or punitive damage (including but not limited     */
/* to lost profits) regardless of whether such liability is based on breach   */
/* of contract, tort, strict liability, breach of warranties, failure of      */
/* essential purpose or otherwise and even if advised of the possibility of   */
/* such damages. Renesas shall not be liable for any services or products     */
/* provided by third party vendors, developers or consultants identified or   */
/* referred to the User by Renesas in connection with the Product(s) and/or   */
/* the Application.                                                           */
/*                                                                            */
/*============================================================================*/
/* Environment:                                                               */
/*              Devices:        P1x-C                                         */
/*============================================================================*/

/*******************************************************************************
**                      Revision Control History                              **
*******************************************************************************/
/*
 * V1.0.0:  03-Aug-2015  : Initial Version
 * V1.0.1:  10-Feb-2016  : As part of P1x-C 4.01.00 release the following
 *                         changes were made:
 *                         1. Copyright information is updated.
 *                         2. MISRA warnings justified/fixed.
 *                         3. The file adapted from P1x.
 * V2.0.0:  17-Feb-2017  : Following changes were made,
 *                         1. As per JIRA ticket ARDAAAF-1042, interrupt
 *                            consistency check is implemented.
 *                         2. MISRA warnings justified and placed START and END
 *                            Msg tags at respective places.
 *                         3. Added UD ID's 'SPI_ESDD_UD_xxx' and Requirements
 *                            at respective places.
 *                         4. As part of JIRA ticket ARDAAAF-1322,unit testing
 *                            activity,following Api's are updated:
 *                            a) Memory accessing for interrupt consistency
 *                              check is corrected in the Api SPI_CSIH1_TIR_ISR.
 *                            b) Corrected the compilation issue in the
 *                               Api SPI_DMA15_ISR.
 *                            c) Type cast added for all interrupt consistency
 *                               checking in all ISR Apis.
 *                        5. Copyright information is updated.
 */
/******************************************************************************/

/*******************************************************************************
**                      Include Section                                       **
*******************************************************************************/

/* TRACE [R3, SPI092][R4, SPI276] */
#include "Spi.h"
#include "Spi_Irq.h"
#include "Spi_Cfg.h"

/*******************************************************************************
**                      Version Information                                   **
*******************************************************************************/
/* AUTOSAR release version information */
#define SPI_IRQ_C_AR_RELEASE_MAJOR_VERSION \
                                  SPI_AR_RELEASE_MAJOR_VERSION_VALUE
#define SPI_IRQ_C_AR_RELEASE_MINOR_VERSION \
                                  SPI_AR_RELEASE_MINOR_VERSION_VALUE
#define SPI_IRQ_C_AR_RELEASE_REVISION_VERSION \
                               SPI_AR_RELEASE_REVISION_VERSION_VALUE

/* File version information */
#define SPI_IRQ_C_SW_MAJOR_VERSION    SPI_SW_MAJOR_VERSION_VALUE
#define SPI_IRQ_C_SW_MINOR_VERSION    SPI_SW_MINOR_VERSION_VALUE

/*******************************************************************************
**                      Version Check                                         **
*******************************************************************************/

#if (SPI_IRQ_AR_RELEASE_MAJOR_VERSION != \
                                       SPI_IRQ_C_AR_RELEASE_MAJOR_VERSION)
  #error "Spi_Irq.c : Mismatch in Release Major Version"
#endif

#if (SPI_IRQ_AR_RELEASE_MINOR_VERSION != \
                                       SPI_IRQ_C_AR_RELEASE_MINOR_VERSION)
  #error "Spi_Irq.c : Mismatch in Release Minor Version"
#endif

#if (SPI_IRQ_AR_RELEASE_REVISION_VERSION != \
                                       SPI_IRQ_C_AR_RELEASE_REVISION_VERSION)
  #error "Spi_Irq.c : Mismatch in Release Revision Version"
#endif

#if (SPI_IRQ_SW_MAJOR_VERSION != SPI_IRQ_C_SW_MAJOR_VERSION)
  #error "Spi_Irq.c : Mismatch in Software Major Version"
#endif

#if (SPI_IRQ_SW_MINOR_VERSION != SPI_IRQ_C_SW_MINOR_VERSION)
  #error "Spi_Irq.c : Mismatch in Software Minor Version"
#endif
/*******************************************************************************
**                         Global Data                                        **
*******************************************************************************/
/*******************************************************************************
**                      MISRA C Rule Violations                               **
*******************************************************************************/
/******************************************************************************/
/* 1. MISRA C RULE VIOLATION:                                                 */
/* Message       : (4:0488) Performing pointer arithmetic.                    */
/*                 pointer.                                                   */
/* Rule          : MISRA-C:2004 Rule 17.4                                     */
/* Justification : Pointer arithmetic is used to achieve better throughput.   */
/* Verification  : However, part of the code is verified manually and it is   */
/*                 not having any impact.                                     */
/* Reference     : Look for START Msg(4:0488)-1 and                           */
/*                 END Msg(4:0488)-1 tags in the code.                        */
/******************************************************************************/

/* 2. MISRA C RULE VIOLATION:                                                 */
/* Message       : (4:0303) [I] Cast between a pointer to volatile object     */
/*                 and an integral type.                                      */
/* Rule          : MISRA-C:2004 Rule 3.1 and 11.3                             */
/* Justification : This macro is used to write or read values from hardware   */
/*                 addresses.                                                 */
/* Verification  : However, this part of the code is verified manually and it */
/*                 is not having any impact.                                  */
/* Reference     : Look for START Msg(4:0303)-2 and                           */
/*                 END Msg(4:0303)-2 tags in the code.                        */
/******************************************************************************/

/* 3. MISRA C RULE VIOLATION:                                                 */
/* Message       : (4:0489) Increment or decrement operation performed on     */
/*               : pointer.                                                   */
/* Rule          : MISRA-C:2004 Rule 17.4                                     */
/* Justification : To have a better readability of the code which will help   */
/*                 for debugging purpose array indexing is not performed.     */
/* Verification  : However, part of the code is verified manually and it is   */
/*                 not having any impact.                                     */
/* Reference     : Look for START Msg(4:0489)-3 and                           */
/*                 END Msg(4:0489)-3 tags in the code.                        */
/*******************************************************************************
**                         QAC Warnings                                       **
*******************************************************************************/
/* 1. QAC Warning:                                                            */
/* Message       :(2:0862) #include "MemMap.h" directive is redundant.        */
/* Rule          : NA                                                         */
/* Justification : As per requirement [MEMMAP003],the inclusion of the memory */
/*                 mapping header files within the code is a MISRA violation. */
/*                 As neither executable code nor symbols are included        */
/*                 (only pragmas) this violation is an approved exception     */
/*                 without side effects.                                      */
/* Verification  : However, part of the code is verified manually and it is   */
/*                 not having any impact.                                     */
/******************************************************************************/

/* 2. QAC Warning:                                                            */
/* Message       : (2:2814) Possible: Dereference of NULL pointer.            */
/* Rule          : NA                                                         */
/* Justification : The Pointers generated using Post Build configurations may */
/*                  not be NULL.                                              */
/* Verification  : However, part of the code is verified manually and it is   */
/*                 not having any impact.                                     */
/* Reference     : Look for START Msg(2:2814)-2 and                           */
/*                 END Msg(2:2814)-2 tags in the code.                        */
/******************************************************************************/

/* 3. QAC Warning:                                                            */
/* Message       : (2:3892) The result of this cast is implicitly converted to*/
/*                 another type.                                              */
/* Rule          : NA                                                         */
/* Justification : This implicit conversion is done to access the data from   */
/*                 the post build configuration                               */
/* Verification  : However, part of the code is verified manually and it is   */
/*                 not having any impact.                                     */
/* Reference     : Look for START Msg(2:3892)-3 and                           */
/*                 END Msg(2:3892)-3 tags in the code.                        */
/******************************************************************************/

/* 4. QAC Warning:                                                            */
/* Message       : (2:2824) Possible: Arithmetic operation on NULL pointer.   */
/* Rule          : NA                                                         */
/* Justification : The Pointers generated using Post Build configurations may */
/*                  not be NULL.Also this is not a MISRA violation            */
/* Verification  : However, part of the code is verified manually and it is   */
/*                 not having any impact.                                     */
/* Reference     : Look for QAC Warning  START Msg(2:2824)-4 and              */
/*                 END Msg(2:2824)-4 tags in the code.                       */
/******************************************************************************/
/*******************************************************************************
**                      Function Definitions                                  **
*******************************************************************************/

/*******************************************************************************
** Function Name     : SPI_CSIH0_TIC_ISR
**
** Service ID        : NA
**
** Description       : Interrupt Service Routine for CSIH0 transmit interrupt
**
** Re-entrancy       : Reentrant
**
** Input Parameters  : None
**
** InOut Parameters  : None
**
** Output Parameters : None
**
** Return Value      : None
**
** Pre-condition     : NA
**
** Global Variable   : Spi_GpConfigPtr, Spi_GaaHighPriorityCommActive
**
** Function invoked  : Spi_TransmitISR, Dem_ReportErrorStatus
**
** Registers Used    : None
*******************************************************************************/
/* Implements SPI_ESDD_UD_151 */
#if (SPI_CSIH0_TIC_ISR_API == STD_ON)
#define SPI_START_SEC_CODE_FAST
#include "MemMap.h"
/* Defines the CAT2interrupt mapping */
#if defined (Os_SPI_CSIH0_TIC_CAT2_ISR) || defined (SPI_CSIH0_TIC_CAT2_ISR)
ISR(SPI_CSIH0_TIC_CAT2_ISR)
/* Defines the CAT1 interrupt mapping */
#else
/* Implements EAAR_PN0034_FSR_0010, EAAR_PN0034_FSR_0009 */
/* Implements EAAR_PN0034_FSR_0008 */
/* Implements SPI_ESDD_UD_211 */
_INTERRUPT_ FUNC(void, SPI_FAST_CODE) SPI_CSIH0_TIC_ISR(void)
#endif
{
  uint8 LucHWMemoryMode;
  Spi_HWUnitType LddHWUnitIndex;
  /* Implements SPI_ESDD_UD_138 */
  #if (SPI_INTERRUPT_CONSISTENCY_CHECK == STD_ON)
  /* START Msg(2:3892)-3 */
  /* MISRA Violation: START Msg(4:0488)-1 */
  /* MISRA Violation: START Msg(4:0303)-2*/
  if (SPI_EIC_EIMK_MASK == (uint16)((*(SPI_INTCSIH0_EIC_ADDR +
                                 SPI_ADDRESS_OFFSET_TWO)) & SPI_EIC_EIMK_MASK))
  /* END Msg(2:3892)-3 */
  /* END Msg(4:0488)-1 */
  /* END Msg(4:0303)-2*/
  {
    /* Implements SPI_ESDD_UD_122 */
    /* Reporting to DEM that interrupt from unknown source */
    Dem_ReportErrorStatus(SPI_E_INT_INCONSISTENT, DEM_EVENT_STATUS_FAILED);
  }
  else
  #endif
  {
    /* START Msg(2:2814)-2*/
    /* Get the HW unit index for this HW Unit in Spi_GstHWUnitInfo*/
    LddHWUnitIndex = Spi_GpConfigPtr->aaHWUnitInfoIndex[SPI_ZERO];
    /* END Msg(2:2814)-2*/

    #if (SPI_HW_PRIORITY_ENABLED == STD_ON)
    if (SPI_FALSE == Spi_GaaHighPriorityCommActive[SPI_ZERO])
    #endif/* Get the configured memory mode for this HW Unit */
    {
      LucHWMemoryMode = Spi_GpConfigPtr->aaHWMemoryMode[SPI_ZERO];
    }
    #if (SPI_HW_PRIORITY_ENABLED == STD_ON)
    else
    {
      LucHWMemoryMode = SPI_DIRECT_ACCESS_MODE_CONFIGURED;
    }
    #endif

    /* Invoke transmit function */
    Spi_TransmitISR(LddHWUnitIndex, LucHWMemoryMode);
  }
}

#define SPI_STOP_SEC_CODE_FAST
#include "MemMap.h"
#endif /* End of (SPI_CSIH0_TIC_ISR_API == STD_ON) */

/*******************************************************************************
** Function Name     : SPI_CSIH0_TIJC_ISR
**
** Service ID        : NA
**
** Description       : Interrupt Service Routine for CSIH0 transmit cancel
**                   : interrupt
**
** Re-entrancy       : Reentrant
**
** Input Parameters  : None
**
** InOut Parameters  : None
**
** Output Parameters : None
**
** Return Value      : None
**
** Pre-condition     : NA
**
** Global Variable   : Spi_GpConfigPtr, Spi_GaaHighPriorityCommRequest,
**                     Spi_GpFirstSeq, Spi_GaaHighPriorityCommActive
**
** Function invoked  : Spi_TransmitCancelISR, Dem_ReportErrorStatus,
**                     Spi_InitiateJobTx
**
** Registers Used    : None
*******************************************************************************/
#if (((SPI_CANCEL_API == STD_ON) || (SPI_HW_PRIORITY_ENABLED == STD_ON)) && \
     ((SPI_DUAL_BUFFER_MODE == STD_ON) || (SPI_TX_ONLY_MODE == STD_ON)))
/* Implements SPI_ESDD_UD_151 */
#if (SPI_CSIH0_TIJC_ISR_API == STD_ON)
#define SPI_START_SEC_CODE_FAST
#include "MemMap.h"

/* Defines the CAT2interrupt mapping */
#if defined (Os_SPI_CSIH0_TIJC_CAT2_ISR) || defined (SPI_CSIH0_TIJC_CAT2_ISR)
ISR(SPI_CSIH0_TIJC_CAT2_ISR)
/* Defines the CAT1 interrupt mapping */
#else
/* Implements SPI_ESDD_UD_212 */
_INTERRUPT_ FUNC(void, SPI_FAST_CODE) SPI_CSIH0_TIJC_ISR(void)
#endif
{
  uint8 LucHWMemoryMode;
  Spi_HWUnitType LddHWUnitIndex;
  #if (SPI_HW_PRIORITY_ENABLED == STD_ON)
  P2CONST(Spi_SequenceConfigType, AUTOMATIC, SPI_CONFIG_CONST) LpSeqConfig;
  Spi_JobType LddJobListIndex;
  Spi_JobType LddNoOfJobs;
  Spi_JobType LddReqJobListIndex;
  #endif
  /* Implements SPI_ESDD_UD_138 */
  #if (SPI_INTERRUPT_CONSISTENCY_CHECK == STD_ON)
  /* START Msg(2:3892)-3 */
  /* MISRA Violation: START Msg(4:0488)-1 */
  /* MISRA Violation: START Msg(4:0303)-2 */
  if (SPI_EIC_EIMK_MASK == (uint16)((*(SPI_INTCSIH0_EIC_ADDR +
                               SPI_ADDRESS_OFFSET_THREE)) & SPI_EIC_EIMK_MASK))
  /* END Msg(2:3892)-3 */
  /* END Msg(4:0488)-1 */
  /* END Msg(4:0303)-2*/
  {
    /* Implements SPI_ESDD_UD_122 */
    /* Reporting to DEM that interrupt from unknown source */
    Dem_ReportErrorStatus(SPI_E_INT_INCONSISTENT, DEM_EVENT_STATUS_FAILED);
  }
  else
  #endif
  {
    /* START Msg(2:2814)-2*/
    /* Get the HW unit index for this HW Unit in Spi_GstHWUnitInfo*/
    LddHWUnitIndex = Spi_GpConfigPtr->aaHWUnitInfoIndex[SPI_ZERO];
    /* END Msg(2:2814)-2 */

    #if (SPI_HW_PRIORITY_ENABLED == STD_ON)
    if (SPI_FALSE == Spi_GaaHighPriorityCommRequest[SPI_ZERO])
    #endif
    {
      /* Get the configured memory mode for this HW Unit */
      LucHWMemoryMode = Spi_GpConfigPtr->aaHWMemoryMode[SPI_ZERO];

      /* Invoke transmit cancel function */
      Spi_TransmitCancelISR(LddHWUnitIndex, LucHWMemoryMode);
    }
    #if (SPI_HW_PRIORITY_ENABLED == STD_ON)
    else
    {
      /* MISRA Violation: START Msg(4:0488)-1 */
      /* START Msg(2:2824)-4*/
      /* Get the pointer to the post-build sequence structure */
      LpSeqConfig = Spi_GpFirstSeq + Spi_GaaHighPrioritySequence[SPI_ZERO];
      /* END Msg (4:0488)-1 */
      /* END Msg(2:2824)-4*/

      /* START Msg(2:2814)-2*/
      /* Get the job list index of the last job of the sequence */
      LddJobListIndex = LpSeqConfig->ddJobListIndex;
      /* END Msg(2:2814)-2*/

      /* Get the number of jobs configured for the requested sequence */
      LddNoOfJobs = LpSeqConfig->ddNoOfJobs;

      /* Get the index of the job list for the first job of the sequence */
      LddReqJobListIndex = LddJobListIndex + (LddNoOfJobs - SPI_ONE);

      /* Flag is set is indicate high priority communication will be activated*/
      Spi_GaaHighPriorityCommActive[SPI_ZERO] = SPI_TRUE;

      /* Initiate the transmission for that sequence */
      Spi_InitiateJobTx(LddReqJobListIndex);
    }
    #endif
  }
}

#define SPI_STOP_SEC_CODE_FAST
#include "MemMap.h"
#endif /* End of (SPI_CSIH0_TIJC_ISR_API == STD_ON) */
#endif

/*******************************************************************************
** Function Name     : SPI_CSIH0_TIRE_ISR
**
** Service ID        : NA
**
** Description       : Interrupt Service Routine for CSIH0 Error interrupt
**
** Re-entrancy       : Reentrant
**
** Input Parameters  : None
**
** InOut Parameters  : None
**
** Output Parameters : None
**
** Return Value      : None
**
** Pre-condition     : NA
**
** Global Variable   : Spi_GpConfigPtr
**
** Function invoked  : Spi_ComErrorISR, Dem_ReportErrorStatus
**
** Registers Used    : None
*******************************************************************************/
/* Implements SPI_ESDD_UD_151 */
#if (SPI_CSIH0_TIRE_ISR_API == STD_ON)
#define SPI_START_SEC_CODE_FAST
#include "MemMap.h"

/* Implements SPI_ESDD_UD_213 */
/* Defines the CAT2interrupt mapping */
#if defined (Os_SPI_CSIH0_TIRE_CAT2_ISR) || defined (SPI_CSIH0_TIRE_CAT2_ISR)
ISR(SPI_CSIH0_TIRE_CAT2_ISR)

/* Defines the CAT1 interrupt mapping */
#else
_INTERRUPT_ FUNC(void, SPI_FAST_CODE) SPI_CSIH0_TIRE_ISR(void)
#endif
{
  uint8 LucHWMemoryMode;
  Spi_HWUnitType LddHWUnitIndex;

  /* Implements SPI_ESDD_UD_138 */
  #if (SPI_INTERRUPT_CONSISTENCY_CHECK == STD_ON)
  /* MISRA Violation: START Msg(4:0303)-2*/
  /* START Msg(2:3892)-3 */
  if (SPI_EIC_EIMK_MASK == (uint16)((*SPI_INTCSIH0_EIC_ADDR) &
                                                            SPI_EIC_EIMK_MASK))
  /* END Msg(2:3892)-3 */
  /* END Msg(4:0303)-2*/
  {
    /* Implements SPI_ESDD_UD_122 */
    /* Reporting to DEM that interrupt from unknown source */
    Dem_ReportErrorStatus(SPI_E_INT_INCONSISTENT, DEM_EVENT_STATUS_FAILED);
  }
  else
  #endif
  {
    /* START Msg(2:2814)-2*/
    /* Get the configured memory mode for this HW Unit */
    LucHWMemoryMode = Spi_GpConfigPtr->aaHWMemoryMode[SPI_ZERO];
    /* END Msg(2:2814)-2*/

    /* Get the HW unit index for this HW Unit in Spi_GstHWUnitInfo*/
    LddHWUnitIndex = Spi_GpConfigPtr->aaHWUnitInfoIndex[SPI_ZERO];

    /* Invoke communication error function */
    Spi_ComErrorISR(LddHWUnitIndex, LucHWMemoryMode);
  }
}

#define SPI_STOP_SEC_CODE_FAST
#include "MemMap.h"
#endif /* End of (SPI_CSIH0_TIRE_ISR_API == STD_ON) */

/*******************************************************************************
** Function Name     : SPI_CSIH0_TIR_ISR
**
** Service ID        : NA
**
** Description       : Interrupt Service Routine for CSIH0 receive interrupt
**
** Re-entrancy       : Reentrant
**
** Input Parameters  : None
**
** InOut Parameters  : None
**
** Output Parameters : None
**
** Return Value      : None
**
** Pre-condition     : NA
**
** Global Variable   : Spi_GaaHighPriorityCommActive, Spi_GpConfigPtr
**
** Function invoked  : Spi_ReceiveISR, Dem_ReportErrorStatus
**
** Registers Used    : None
*******************************************************************************/
#if ((SPI_DIRECT_ACCESS_MODE == STD_ON) || (SPI_TX_ONLY_MODE == STD_ON))
/* Implements SPI_ESDD_UD_151 */
#if (SPI_CSIH0_TIR_ISR_API == STD_ON)
#define SPI_START_SEC_CODE_FAST
#include "MemMap.h"

/* Implements SPI_ESDD_UD_214 */
/* Defines the CAT2interrupt mapping */
#if defined (Os_SPI_CSIH0_TIR_CAT2_ISR) || defined (SPI_CSIH0_TIR_CAT2_ISR)
ISR(SPI_CSIH0_TIR_CAT2_ISR)
/* Defines the CAT1 interrupt mapping */
#else
_INTERRUPT_ FUNC(void, SPI_FAST_CODE) SPI_CSIH0_TIR_ISR(void)
#endif
{
  uint8 LucHWMemoryMode;
  Spi_HWUnitType LddHWUnitIndex;
  /* Implements SPI_ESDD_UD_138 */
  #if (SPI_INTERRUPT_CONSISTENCY_CHECK == STD_ON)
  /* START Msg(2:3892)-3 */
  /* MISRA Violation: START Msg(4:0303)-2*/
  /* MISRA Violation: START Msg(4:0489)-3*/
  if (SPI_EIC_EIMK_MASK == (uint16)((*(SPI_INTCSIH0_EIC_ADDR +
                                 SPI_ADDRESS_OFFSET_ONE)) & SPI_EIC_EIMK_MASK))
  /* END Msg(2:3892)-3 */
  /* END Msg(4:0303)-2 */
  /* END Msg(4:0489)-3 */
  {
    /* Implements SPI_ESDD_UD_122 */
    /* Reporting to DEM that interrupt from unknown source */
    Dem_ReportErrorStatus(SPI_E_INT_INCONSISTENT, DEM_EVENT_STATUS_FAILED);
  }
  else
  #endif
  {
    /* START Msg(2:2814)-2*/
    /* Get the HW unit index for this HW Unit in Spi_GstHWUnitInfo*/
    LddHWUnitIndex = Spi_GpConfigPtr->aaHWUnitInfoIndex[SPI_ZERO];
    /* END Msg(2:2814)-2*/

    #if (SPI_HW_PRIORITY_ENABLED == STD_ON)
    if (SPI_FALSE == Spi_GaaHighPriorityCommActive[SPI_ZERO])
    #endif/* Get the configured memory mode for this HW Unit */
    {
      LucHWMemoryMode = Spi_GpConfigPtr->aaHWMemoryMode[SPI_ZERO];
    }
    #if (SPI_HW_PRIORITY_ENABLED == STD_ON)
    else
    {
      LucHWMemoryMode = SPI_DIRECT_ACCESS_MODE_CONFIGURED;
    }
    #endif

    /* Invoke receive function */
    Spi_ReceiveISR(LddHWUnitIndex, LucHWMemoryMode);
  }
}

#define SPI_STOP_SEC_CODE_FAST
#include "MemMap.h"
#endif /* End of (SPI_CSIH0_TIR_ISR_API == STD_ON) */
#endif

/*******************************************************************************
** Function Name     : SPI_CSIH1_TIC_ISR
**
** Service ID        : NA
**
** Description       : Interrupt Service Routine for CSIH1 transmit interrupt
**
** Re-entrancy       : Reentrant
**
** Input Parameters  : None
**
** InOut Parameters  : None
**
** Output Parameters : None
**
** Return Value      : None
**
** Pre-condition     : NA
**
** Global Variable   : Spi_GpConfigPtr, Spi_GaaHighPriorityCommActive
**
** Function invoked  : Spi_TransmitISR, Dem_ReportErrorStatus
**
** Registers Used    : None
*******************************************************************************/
/* Implements SPI_ESDD_UD_151 */
#if (SPI_CSIH1_TIC_ISR_API == STD_ON)
#define SPI_START_SEC_CODE_FAST
#include "MemMap.h"
/* Implements SPI_ESDD_UD_211 */
/* Defines the CAT2interrupt mapping */
#if defined (Os_SPI_CSIH1_TIC_CAT2_ISR) || defined (SPI_CSIH1_TIC_CAT2_ISR)
ISR(SPI_CSIH1_TIC_CAT2_ISR)
/* Defines the CAT1 interrupt mapping */
#else
_INTERRUPT_ FUNC(void, SPI_FAST_CODE) SPI_CSIH1_TIC_ISR(void)
#endif
{
  uint8 LucHWMemoryMode;
  Spi_HWUnitType LddHWUnitIndex;
  /* Implements SPI_ESDD_UD_138 */
  #if (SPI_INTERRUPT_CONSISTENCY_CHECK == STD_ON)
  /* START Msg(2:3892)-3 */
  /* MISRA Violation: START Msg(4:0488)-1 */
  /* MISRA Violation: START Msg(4:0303)-2 */
  if (SPI_EIC_EIMK_MASK == (uint16)((*(SPI_INTCSIH1_EIC_ADDR +
                                 SPI_ADDRESS_OFFSET_TWO)) & SPI_EIC_EIMK_MASK))
  /* END Msg(2:3892)-3 */
  /* END Msg(4:0488)-1 */
  /* END Msg(4:0303)-2 */
  {
    /* Implements SPI_ESDD_UD_122 */
    /* Reporting to DEM that interrupt from unknown source */
    Dem_ReportErrorStatus(SPI_E_INT_INCONSISTENT, DEM_EVENT_STATUS_FAILED);
  }
  else
  #endif
  {
    /* START Msg(2:2814)-2*/
    /* Get the HW unit index for this HW Unit in Spi_GstHWUnitInfo*/
    LddHWUnitIndex = Spi_GpConfigPtr->aaHWUnitInfoIndex[SPI_ONE];
    /* END Msg(2:2814)-2*/

    #if (SPI_HW_PRIORITY_ENABLED == STD_ON)
    if (SPI_FALSE == Spi_GaaHighPriorityCommActive[SPI_ONE])
    #endif/* Get the configured memory mode for this HW Unit */
    {
      LucHWMemoryMode = Spi_GpConfigPtr->aaHWMemoryMode[SPI_ONE];
    }
    #if (SPI_HW_PRIORITY_ENABLED == STD_ON)
    else
    {
      LucHWMemoryMode = SPI_DIRECT_ACCESS_MODE_CONFIGURED;
    }
    #endif

    /* Invoke transmit function */
    Spi_TransmitISR(LddHWUnitIndex, LucHWMemoryMode);
  }
}

#define SPI_STOP_SEC_CODE_FAST
#include "MemMap.h"
#endif /* End of (SPI_CSIH1_TIC_ISR_API == STD_ON) */

/*******************************************************************************
** Function Name     : SPI_CSIH1_TIJC_ISR
**
** Service ID        : NA
**
** Description       : Interrupt Service Routine for CSIH1 transmit cancel
**                   : interrupt
**
** Re-entrancy       : Reentrant
**
** Input Parameters  : None
**
** InOut Parameters  : None
**
** Output Parameters : None
**
** Return Value      : None
**
** Pre-condition     : NA
**
** Global Variable   : Spi_GpConfigPtr, Spi_GaaHighPrioritySequence
**
** Function invoked  : Spi_TransmitCancelISR, Dem_ReportErrorStatus,
**                     Spi_InitiateJobTx
**
** Registers Used    : None
*******************************************************************************/
#if (((SPI_CANCEL_API == STD_ON) || (SPI_HW_PRIORITY_ENABLED == STD_ON)) && \
     ((SPI_DUAL_BUFFER_MODE == STD_ON) || (SPI_TX_ONLY_MODE == STD_ON)))
/* Implements SPI_ESDD_UD_151 */
#if (SPI_CSIH1_TIJC_ISR_API == STD_ON)
#define SPI_START_SEC_CODE_FAST
#include "MemMap.h"

/* Implements SPI_ESDD_UD_212 */
/* Defines the CAT2interrupt mapping */
#if defined (Os_SPI_CSIH1_TIJC_CAT2_ISR) || defined (SPI_CSIH1_TIJC_CAT2_ISR)
ISR(SPI_CSIH1_TIJC_CAT2_ISR)
/* Defines the CAT1 interrupt mapping */
#else
_INTERRUPT_ FUNC(void, SPI_FAST_CODE) SPI_CSIH1_TIJC_ISR(void)
#endif
{
  uint8 LucHWMemoryMode;
  Spi_HWUnitType LddHWUnitIndex;
  #if (SPI_HW_PRIORITY_ENABLED == STD_ON)
  P2CONST(Spi_SequenceConfigType, AUTOMATIC, SPI_CONFIG_CONST) LpSeqConfig;
  Spi_JobType LddJobListIndex;
  Spi_JobType LddNoOfJobs;
  Spi_JobType LddReqJobListIndex;
  #endif
  /* Implements SPI_ESDD_UD_138 */
  #if (SPI_INTERRUPT_CONSISTENCY_CHECK == STD_ON)
  /* MISRA Violation: START Msg(4:0488)-1 */
  /* MISRA Violation: START Msg(4:0303)-2 */
  /* START Msg(2:3892)-3 */
  if (SPI_EIC_EIMK_MASK == (uint16)((*(SPI_INTCSIH1_EIC_ADDR +
                               SPI_ADDRESS_OFFSET_THREE)) & SPI_EIC_EIMK_MASK))
  /* END Msg(2:3892)-3 */
  /* END Msg(4:0488)-1 */
  /* END Msg(4:0303)-2 */
  {
    /* Implements SPI_ESDD_UD_122 */
    /* Reporting to DEM that interrupt from unknown source */
    Dem_ReportErrorStatus(SPI_E_INT_INCONSISTENT, DEM_EVENT_STATUS_FAILED);
  }
  else
  #endif
  {
    /* START Msg(2:2814)-2*/
    /* Get the HW unit index for this HW Unit in Spi_GstHWUnitInfo*/
    LddHWUnitIndex = Spi_GpConfigPtr->aaHWUnitInfoIndex[SPI_ONE];
    /* END Msg(2:2814)-2*/

    #if (SPI_HW_PRIORITY_ENABLED == STD_ON)
    if (SPI_FALSE == Spi_GaaHighPriorityCommRequest[SPI_ONE])
    #endif
    {
      /* Get the configured memory mode for this HW Unit */
      LucHWMemoryMode = Spi_GpConfigPtr->aaHWMemoryMode[SPI_ONE];

      /* Invoke transmit cancel function */
      Spi_TransmitCancelISR(LddHWUnitIndex, LucHWMemoryMode);
    }
    #if (SPI_HW_PRIORITY_ENABLED == STD_ON)
    else
    {

      /* MISRA Violation: START Msg(4:0488)-1 */
      /* START Msg(2:2824)-4*/
      /* Get the pointer to the post-build sequence structure */
      LpSeqConfig = Spi_GpFirstSeq + Spi_GaaHighPrioritySequence[SPI_ONE];
      /* END Msg (4:0488)-1 */
      /* END Msg(2:2824)-4*/

      /* START Msg(2:2814)-2*/
      /* Get the job list index of the last job of the sequence */
      LddJobListIndex = LpSeqConfig->ddJobListIndex;
      /* END Msg(2:2814)-2*/

      /* Get the number of jobs configured for the requested sequence */
      LddNoOfJobs = LpSeqConfig->ddNoOfJobs;

      /* Get the index of the job list for the first job of the sequence */
      LddReqJobListIndex = LddJobListIndex + (LddNoOfJobs - SPI_ONE);

      /* Flag is set is indicate high priority communication will be activated*/
      Spi_GaaHighPriorityCommActive[SPI_ONE] = SPI_TRUE;

      /* Initiate the transmission for that sequence */
      Spi_InitiateJobTx(LddReqJobListIndex);
    }
    #endif
  }
}

#define SPI_STOP_SEC_CODE_FAST
#include "MemMap.h"
#endif /* End of (SPI_CSIH1_TIJC_ISR_API == STD_ON) */
#endif

/*******************************************************************************
** Function Name     : SPI_CSIH1_TIR_ISR
**
** Service ID        : NA
**
** Description       : Interrupt Service Routine for CSIH1 receive interrupt
**
** Re-entrancy       : Reentrant
**
** Input Parameters  : None
**
** InOut Parameters  : None
**
** Output Parameters : None
**
** Return Value      : None
**
** Pre-condition     : NA
**
** Global Variable   : Spi_GpConfigPtr, Spi_GaaHighPriorityCommActive
**
** Function invoked  : Spi_ReceiveISR, Dem_ReportErrorStatus
**
** Registers Used    : None
*******************************************************************************/
#if ((SPI_DIRECT_ACCESS_MODE == STD_ON) || (SPI_TX_ONLY_MODE == STD_ON))
/* Implements SPI_ESDD_UD_151 */
#if (SPI_CSIH1_TIR_ISR_API == STD_ON)
#define SPI_START_SEC_CODE_FAST
#include "MemMap.h"

/* Implements SPI_ESDD_UD_214 */
/* Defines the CAT2interrupt mapping */
#if defined (Os_SPI_CSIH1_TIR_CAT2_ISR) || defined (SPI_CSIH1_TIR_CAT2_ISR)
ISR(SPI_CSIH1_TIR_CAT2_ISR)
/* Defines the CAT1 interrupt mapping */
#else
_INTERRUPT_ FUNC(void, SPI_FAST_CODE) SPI_CSIH1_TIR_ISR(void)
#endif
{
  uint8 LucHWMemoryMode;
  Spi_HWUnitType LddHWUnitIndex;
  /* Implements SPI_ESDD_UD_138 */
  #if (SPI_INTERRUPT_CONSISTENCY_CHECK == STD_ON)
  if (SPI_EIC_EIMK_MASK == (uint16)((*(SPI_INTCSIH1_EIC_ADDR +
                                 SPI_ADDRESS_OFFSET_ONE)) & SPI_EIC_EIMK_MASK))
  {
    /* Implements SPI_ESDD_UD_122 */
    /* Reporting to DEM that interrupt from unknown source */
    Dem_ReportErrorStatus(SPI_E_INT_INCONSISTENT, DEM_EVENT_STATUS_FAILED);
  }
  else
  #endif
  {
    /* Get the HW unit index for this HW Unit in Spi_GstHWUnitInfo*/
    LddHWUnitIndex = Spi_GpConfigPtr->aaHWUnitInfoIndex[SPI_ONE];

    #if (SPI_HW_PRIORITY_ENABLED == STD_ON)
    if (SPI_FALSE == Spi_GaaHighPriorityCommActive[SPI_ONE])
    #endif/* Get the configured memory mode for this HW Unit */
    {
      LucHWMemoryMode = Spi_GpConfigPtr->aaHWMemoryMode[SPI_ONE];
    }
    #if (SPI_HW_PRIORITY_ENABLED == STD_ON)
    else
    {
      LucHWMemoryMode = SPI_DIRECT_ACCESS_MODE_CONFIGURED;
    }
    #endif

    /* Invoke receive function */
    Spi_ReceiveISR(LddHWUnitIndex, LucHWMemoryMode);
  }
}

#define SPI_STOP_SEC_CODE_FAST
#include "MemMap.h"
#endif /* End of (SPI_CSIH1_TIR_ISR_API == STD_ON) */
#endif

/*******************************************************************************
** Function Name     : SPI_CSIH1_TIRE_ISR
**
** Service ID        : NA
**
** Description       : Interrupt Service Routine for CSIH1 Error interrupt
**
** Re-entrancy       : Reentrant
**
** Input Parameters  : None
**
** InOut Parameters  : None
**
** Output Parameters : None
**
** Return Value      : None
**
** Pre-condition     : NA
**
** Global Variable   : Spi_GpConfigPtr
**
** Function invoked  : Spi_ComErrorISR, Dem_ReportErrorStatus
**
** Registers Used    : None
*******************************************************************************/
/* Implements SPI_ESDD_UD_151 */
#if (SPI_CSIH1_TIRE_ISR_API == STD_ON)
#define SPI_START_SEC_CODE_FAST
#include "MemMap.h"

/* Implements SPI_ESDD_UD_213 */
/* Defines the CAT2interrupt mapping */
#if defined (Os_SPI_CSIH1_TIRE_CAT2_ISR) || defined (SPI_CSIH1_TIRE_CAT2_ISR)
ISR(SPI_CSIH1_TIRE_CAT2_ISR)
/* Defines the CAT1 interrupt mapping */
#else
_INTERRUPT_ FUNC(void, SPI_FAST_CODE) SPI_CSIH1_TIRE_ISR(void)
#endif
{
  uint8 LucHWMemoryMode;
  Spi_HWUnitType LddHWUnitIndex;
  #if (SPI_INTERRUPT_CONSISTENCY_CHECK == STD_ON)
  /* MISRA Violation: START Msg(4:0303)-2 */
  /* START Msg(2:3892)-3 */
  if (SPI_EIC_EIMK_MASK == (uint16)((*SPI_INTCSIH1_EIC_ADDR) &
                                                            SPI_EIC_EIMK_MASK))
  /* END Msg(2:3892)-3 */
  /* END Msg(4:0303)-2 */
  {
    /* Reporting to DEM that interrupt from unknown source */
    Dem_ReportErrorStatus(SPI_E_INT_INCONSISTENT, DEM_EVENT_STATUS_FAILED);
  }
  else
  #endif
  {
    /* START Msg(2:2814)-2*/
    /* Get the configured memory mode for this HW Unit */
    LucHWMemoryMode = Spi_GpConfigPtr->aaHWMemoryMode[SPI_ONE];
    /* END Msg(2:2814)-2*/

    /* Get the HW unit index for this HW Unit in Spi_GstHWUnitInfo*/
    LddHWUnitIndex = Spi_GpConfigPtr->aaHWUnitInfoIndex[SPI_ONE];

    /* Invoke communication error function */
    Spi_ComErrorISR(LddHWUnitIndex, LucHWMemoryMode);
  }
}

#define SPI_STOP_SEC_CODE_FAST
#include "MemMap.h"
#endif /* End of (SPI_CSIH1_TIRE_ISR_API == STD_ON) */

/*******************************************************************************
** Function Name     : SPI_CSIH2_TIC_ISR
**
** Service ID        : NA
**
** Description       : Interrupt Service Routine for CSIH2 transmit interrupt
**
** Re-entrancy       : Reentrant
**
** Input Parameters  : None
**
** InOut Parameters  : None
**
** Output Parameters : None
**
** Return Value      : None
**
** Pre-condition     : NA
**
** Global Variable   : Spi_GpConfigPtr, Spi_GaaHighPriorityCommActive
**
** Function invoked  : Spi_TransmitISR, Dem_ReportErrorStatus
**
** Registers Used    : None
*******************************************************************************/
/* Implements SPI_ESDD_UD_151 */
#if (SPI_CSIH2_TIC_ISR_API == STD_ON)
#define SPI_START_SEC_CODE_FAST
#include "MemMap.h"

/* Implements SPI_ESDD_UD_211 */
/* Defines the CAT2interrupt mapping */
#if defined (Os_SPI_CSIH2_TIC_CAT2_ISR) || defined (SPI_CSIH2_TIC_CAT2_ISR)
ISR(SPI_CSIH2_TIC_CAT2_ISR)
/* Defines the CAT1 interrupt mapping */
#else
_INTERRUPT_ FUNC(void, SPI_FAST_CODE) SPI_CSIH2_TIC_ISR(void)
#endif
{
  uint8 LucHWMemoryMode;
  Spi_HWUnitType LddHWUnitIndex;
  /* Implements SPI_ESDD_UD_138 */
  #if (SPI_INTERRUPT_CONSISTENCY_CHECK == STD_ON)
  if (SPI_EIC_EIMK_MASK == (uint16)((*(SPI_INTCSIH2_EIC_ADDR +
                                 SPI_ADDRESS_OFFSET_TWO)) & SPI_EIC_EIMK_MASK))
  {
    /* Implements SPI_ESDD_UD_122 */
    /* Reporting to DEM that interrupt from unknown source */
    Dem_ReportErrorStatus(SPI_E_INT_INCONSISTENT, DEM_EVENT_STATUS_FAILED);
  }
  else
  #endif
  {
    /* Get the HW unit index for this HW Unit in Spi_GstHWUnitInfo*/
    LddHWUnitIndex = Spi_GpConfigPtr->aaHWUnitInfoIndex[SPI_TWO];

    #if (SPI_HW_PRIORITY_ENABLED == STD_ON)
    if (SPI_FALSE == Spi_GaaHighPriorityCommActive[SPI_TWO])
    #endif/* Get the configured memory mode for this HW Unit */
    {
      LucHWMemoryMode = Spi_GpConfigPtr->aaHWMemoryMode[SPI_TWO];
    }
    #if (SPI_HW_PRIORITY_ENABLED == STD_ON)
    else
    {
      LucHWMemoryMode = SPI_DIRECT_ACCESS_MODE_CONFIGURED;
    }
    #endif

    /* Invoke transmit function */
    Spi_TransmitISR(LddHWUnitIndex, LucHWMemoryMode);
  }
}

#define SPI_STOP_SEC_CODE_FAST
#include "MemMap.h"
#endif /* End of (SPI_CSIH2_TIC_ISR_API == STD_ON) */

/*******************************************************************************
** Function Name     : SPI_CSIH2_TIJC_ISR
**
** Service ID        : NA
**
** Description       : Interrupt Service Routine for CSIH2 transmit cancel
**                   : interrupt
**
** Re-entrancy       : Reentrant
**
** Input Parameters  : None
**
** InOut Parameters  : None
**
** Output Parameters : None
**
** Return Value      : None
**
** Pre-condition     : NA
**
** Global Variable   : Spi_GpConfigPtr, Spi_GaaHighPriorityCommRequest
**                     Spi_GpFirstSeq
**
** Function invoked  : Spi_TransmitCancelISR, Dem_ReportErrorStatus
**                     Spi_InitiateJobTx
**
** Registers Used    : None
*******************************************************************************/
#if (((SPI_CANCEL_API == STD_ON) || (SPI_HW_PRIORITY_ENABLED == STD_ON)) && \
     ((SPI_DUAL_BUFFER_MODE == STD_ON) || (SPI_TX_ONLY_MODE == STD_ON)))
/* Implements SPI_ESDD_UD_151 */
#if (SPI_CSIH2_TIJC_ISR_API == STD_ON)
#define SPI_START_SEC_CODE_FAST
#include "MemMap.h"

/* Implements SPI_ESDD_UD_212 */
/* Defines the CAT2interrupt mapping */
#if defined (Os_SPI_CSIH2_TIJC_CAT2_ISR) || defined (SPI_CSIH2_TIJC_CAT2_ISR)
ISR(SPI_CSIH2_TIJC_CAT2_ISR)
/* Defines the CAT1 interrupt mapping */
#else
_INTERRUPT_ FUNC(void, SPI_FAST_CODE) SPI_CSIH2_TIJC_ISR(void)
#endif
{
  uint8 LucHWMemoryMode;
  Spi_HWUnitType LddHWUnitIndex;
  #if (SPI_HW_PRIORITY_ENABLED == STD_ON)
  P2CONST(Spi_SequenceConfigType, AUTOMATIC, SPI_CONFIG_CONST) LpSeqConfig;
  Spi_JobType LddJobListIndex;
  Spi_JobType LddNoOfJobs;
  Spi_JobType LddReqJobListIndex;
  #endif
  /* Implements SPI_ESDD_UD_138 */
  #if (SPI_INTERRUPT_CONSISTENCY_CHECK == STD_ON)
  if (SPI_EIC_EIMK_MASK == (uint16)((*(SPI_INTCSIH2_EIC_ADDR +
                               SPI_ADDRESS_OFFSET_THREE)) & SPI_EIC_EIMK_MASK))
  {
    /* Implements SPI_ESDD_UD_122 */
    /* Reporting to DEM that interrupt from unknown source */
    Dem_ReportErrorStatus(SPI_E_INT_INCONSISTENT, DEM_EVENT_STATUS_FAILED);
  }
  else
  #endif
  {
    /* Get the HW unit index for this HW Unit in Spi_GstHWUnitInfo*/
    LddHWUnitIndex = Spi_GpConfigPtr->aaHWUnitInfoIndex[SPI_TWO];

    #if (SPI_HW_PRIORITY_ENABLED == STD_ON)
    if (SPI_FALSE == Spi_GaaHighPriorityCommRequest[SPI_TWO])
    #endif
    {
      /* Get the configured memory mode for this HW Unit */
      LucHWMemoryMode = Spi_GpConfigPtr->aaHWMemoryMode[SPI_TWO];

      /* Invoke transmit cancel function */
      Spi_TransmitCancelISR(LddHWUnitIndex, LucHWMemoryMode);
    }
    #if (SPI_HW_PRIORITY_ENABLED == STD_ON)
    else
    {
      /* MISRA Violation: START Msg(4:0488)-1 */
      /* Get the pointer to the post-build sequence structure */
      LpSeqConfig = Spi_GpFirstSeq + Spi_GaaHighPrioritySequence[SPI_TWO];
      /* END Msg (4:0488)-1 */

      /* Get the job list index of the last job of the sequence */
      LddJobListIndex = LpSeqConfig->ddJobListIndex;

      /* Get the number of jobs configured for the requested sequence */
      LddNoOfJobs = LpSeqConfig->ddNoOfJobs;

      /* Get the index of the job list for the first job of the sequence */
      LddReqJobListIndex = LddJobListIndex + (LddNoOfJobs - SPI_ONE);

      /* Flag is set is indicate high priority communication will be activated*/
      Spi_GaaHighPriorityCommActive[SPI_TWO] = SPI_TRUE;

      /* Initiate the transmission for that sequence */
      Spi_InitiateJobTx(LddReqJobListIndex);
    }
    #endif
  }
}

#define SPI_STOP_SEC_CODE_FAST
#include "MemMap.h"
#endif /* End of (SPI_CSIH2_TIJC_ISR_API == STD_ON) */
#endif

/*******************************************************************************
** Function Name     : SPI_CSIH2_TIR_ISR
**
** Service ID        : NA
**
** Description       : Interrupt Service Routine for CSIH2 receive interrupt
**
** Re-entrancy       : Reentrant
**
** Input Parameters  : None
**
** InOut Parameters  : None
**
** Output Parameters : None
**
** Return Value      : None
**
** Pre-condition     : NA
**
** Global Variable   : Spi_GaaHighPriorityCommActive, Spi_GpConfigPtr
**
** Function invoked  : Spi_ReceiveISR, Dem_ReportErrorStatus
**
** Registers Used    : None
*******************************************************************************/

#if ((SPI_DIRECT_ACCESS_MODE == STD_ON) || (SPI_TX_ONLY_MODE == STD_ON))
/* Implements SPI_ESDD_UD_151 */
#if (SPI_CSIH2_TIR_ISR_API == STD_ON)
#define SPI_START_SEC_CODE_FAST
#include "MemMap.h"

/* Implements SPI_ESDD_UD_214 */
/* Defines the CAT2interrupt mapping */
#if defined (Os_SPI_CSIH2_TIR_CAT2_ISR) || defined (SPI_CSIH2_TIR_CAT2_ISR)
ISR(SPI_CSIH2_TIR_CAT2_ISR)
/* Defines the CAT1 interrupt mapping */
#else
_INTERRUPT_ FUNC(void, SPI_FAST_CODE) SPI_CSIH2_TIR_ISR(void)
#endif
{
  uint8 LucHWMemoryMode;
  Spi_HWUnitType LddHWUnitIndex;
  /* Implements SPI_ESDD_UD_138 */
  #if (SPI_INTERRUPT_CONSISTENCY_CHECK == STD_ON)
  if (SPI_EIC_EIMK_MASK == (uint16)((*(SPI_INTCSIH2_EIC_ADDR +
                                 SPI_ADDRESS_OFFSET_ONE)) & SPI_EIC_EIMK_MASK))
  {
    /* Implements SPI_ESDD_UD_122 */
    /* Reporting to DEM that interrupt from unknown source */
    Dem_ReportErrorStatus(SPI_E_INT_INCONSISTENT, DEM_EVENT_STATUS_FAILED);
  }
  else
  #endif
  {
    /* Get the HW unit index for this HW Unit in Spi_GstHWUnitInfo*/
    LddHWUnitIndex = Spi_GpConfigPtr->aaHWUnitInfoIndex[SPI_TWO];

    #if (SPI_HW_PRIORITY_ENABLED == STD_ON)
    if (SPI_FALSE == Spi_GaaHighPriorityCommActive[SPI_TWO])
    #endif/* Get the configured memory mode for this HW Unit */
    {
      LucHWMemoryMode = Spi_GpConfigPtr->aaHWMemoryMode[SPI_TWO];
    }
    #if (SPI_HW_PRIORITY_ENABLED == STD_ON)
    else
    {
      LucHWMemoryMode = SPI_DIRECT_ACCESS_MODE_CONFIGURED;
    }
    #endif

    /* Invoke receive function */
    Spi_ReceiveISR(LddHWUnitIndex, LucHWMemoryMode);
  }
}

#define SPI_STOP_SEC_CODE_FAST
#include "MemMap.h"
#endif /* End of (SPI_CSIH2_TIR_ISR_API == STD_ON) */
#endif

/*******************************************************************************
** Function Name     : SPI_CSIH2_TIRE_ISR
**
** Service ID        : NA
**
** Description       : Interrupt Service Routine for CSIH2 Error interrupt
**
** Re-entrancy       : Reentrant
**
** Input Parameters  : None
**
** InOut Parameters  : None
**
** Output Parameters : None
**
** Return Value      : None
**
** Pre-condition     : NA
**
** Global Variable   : Spi_GpConfigPtr,
**
** Function invoked  : Spi_ComErrorISR, Dem_ReportErrorStatus
**
** Registers Used    : None
*******************************************************************************/
/* Implements SPI_ESDD_UD_151 */
#if (SPI_CSIH2_TIRE_ISR_API == STD_ON)
#define SPI_START_SEC_CODE_FAST
#include "MemMap.h"

/* Implements SPI_ESDD_UD_213 */
/* Defines the CAT2interrupt mapping */
#if defined (Os_SPI_CSIH2_TIRE_CAT2_ISR) || defined (SPI_CSIH2_TIRE_CAT2_ISR)
ISR(SPI_CSIH2_TIRE_CAT2_ISR)
/* Defines the CAT1 interrupt mapping */
#else
_INTERRUPT_ FUNC(void, SPI_FAST_CODE) SPI_CSIH2_TIRE_ISR(void)
#endif
{
  uint8 LucHWMemoryMode;
  Spi_HWUnitType LddHWUnitIndex;
  /* Implements SPI_ESDD_UD_138 */
  #if (SPI_INTERRUPT_CONSISTENCY_CHECK == STD_ON)
  if (SPI_EIC_EIMK_MASK == (uint16)((*SPI_INTCSIH2_EIC_ADDR) &
                                                           SPI_EIC_EIMK_MASK))
  {
    /* Implements SPI_ESDD_UD_122 */
    /* Reporting to DEM that interrupt from unknown source */
    Dem_ReportErrorStatus(SPI_E_INT_INCONSISTENT, DEM_EVENT_STATUS_FAILED);
  }
  else
  #endif
  {
    /* Get the configured memory mode for this HW Unit */
    LucHWMemoryMode = Spi_GpConfigPtr->aaHWMemoryMode[SPI_TWO];

    /* Get the HW unit index for this HW Unit in Spi_GstHWUnitInfo*/
    LddHWUnitIndex = Spi_GpConfigPtr->aaHWUnitInfoIndex[SPI_TWO];

    /* Invoke communication error function */
    Spi_ComErrorISR(LddHWUnitIndex, LucHWMemoryMode);
  }
}

#define SPI_STOP_SEC_CODE_FAST
#include "MemMap.h"
#endif /* End of (SPI_CSIH2_TIRE_ISR_API == STD_ON) */

/*******************************************************************************
** Function Name     : SPI_CSIH3_TIC_ISR
**
** Service ID        : NA
**
** Description       : Interrupt Service Routine for CSIH2 transmit interrupt
**
** Re-entrancy       : Reentrant
**
** Input Parameters  : None
**
** InOut Parameters  : None
**
** Output Parameters : None
**
** Return Value      : None
**
** Pre-condition     : NA
**
** Global Variable   : Spi_GaaHighPriorityCommActive,Spi_GpConfigPtr
**
** Function invoked  : Spi_TransmitISR, Dem_ReportErrorStatus
**
** Registers Used    : None
*******************************************************************************/
/* Implements SPI_ESDD_UD_151 */
#if (SPI_CSIH3_TIC_ISR_API == STD_ON)
#define SPI_START_SEC_CODE_FAST
#include "MemMap.h"

/* Implements SPI_ESDD_UD_211 */
/* Defines the CAT2interrupt mapping */
#if defined (Os_SPI_CSIH3_TIC_CAT2_ISR) || defined (SPI_CSIH3_TIC_CAT2_ISR)
ISR(SPI_CSIH3_TIC_CAT2_ISR)
/* Defines the CAT1 interrupt mapping */
#else
_INTERRUPT_ FUNC(void, SPI_FAST_CODE) SPI_CSIH3_TIC_ISR(void)
#endif
{
  uint8 LucHWMemoryMode;
  Spi_HWUnitType LddHWUnitIndex;
  /* Implements SPI_ESDD_UD_138 */
  #if (SPI_INTERRUPT_CONSISTENCY_CHECK == STD_ON)
  if (SPI_EIC_EIMK_MASK == (uint16)((*(SPI_INTCSIH3_EIC_ADDR +
                                 SPI_ADDRESS_OFFSET_TWO)) & SPI_EIC_EIMK_MASK))
  {
    /* Implements SPI_ESDD_UD_122 */
    /* Reporting to DEM that interrupt from unknown source */
    Dem_ReportErrorStatus(SPI_E_INT_INCONSISTENT, DEM_EVENT_STATUS_FAILED);
  }
  else
  #endif
  {
    /* Get the HW unit index for this HW Unit in Spi_GstHWUnitInfo*/
    LddHWUnitIndex = Spi_GpConfigPtr->aaHWUnitInfoIndex[SPI_THREE];

    #if (SPI_HW_PRIORITY_ENABLED == STD_ON)
    if (SPI_FALSE == Spi_GaaHighPriorityCommActive[SPI_THREE])
    #endif/* Get the configured memory mode for this HW Unit */
    {
      LucHWMemoryMode = Spi_GpConfigPtr->aaHWMemoryMode[SPI_THREE];
    }
    #if (SPI_HW_PRIORITY_ENABLED == STD_ON)
    else
    {
      LucHWMemoryMode = SPI_DIRECT_ACCESS_MODE_CONFIGURED;
    }
    #endif

    /* Invoke transmit function */
    Spi_TransmitISR(LddHWUnitIndex, LucHWMemoryMode);
  }
}

#define SPI_STOP_SEC_CODE_FAST
#include "MemMap.h"
#endif /* End of (SPI_CSIH3_TIC_ISR_API == STD_ON) */

/*******************************************************************************
** Function Name     : SPI_CSIH3_TIJC_ISR
**
** Service ID        : NA
**
** Description       : Interrupt Service Routine for CSIH3 transmit cancel
**                   : interrupt
**
** Re-entrancy       : Reentrant
**
** Input Parameters  : None
**
** InOut Parameters  : None
**
** Output Parameters : None
**
** Return Value      : None
**
** Pre-condition     : NA
**
** Global Variable   : Spi_GpConfigPtr, Spi_GaaHighPriorityCommRequest,
**                     Spi_GpFirstSeq
**
** Function invoked  : Spi_TransmitCancelISR, Dem_ReportErrorStatus,
**                     Spi_InitiateJobTx
**
** Registers Used    : None
*******************************************************************************/
#if (((SPI_CANCEL_API == STD_ON) || (SPI_HW_PRIORITY_ENABLED == STD_ON)) && \
     ((SPI_DUAL_BUFFER_MODE == STD_ON) || (SPI_TX_ONLY_MODE == STD_ON)))
/* Implements SPI_ESDD_UD_151 */
#if (SPI_CSIH3_TIJC_ISR_API == STD_ON)
#define SPI_START_SEC_CODE_FAST
#include "MemMap.h"

/* Implements SPI_ESDD_UD_212 */
/* Defines the CAT2interrupt mapping */
#if defined (Os_SPI_CSIH3_TIJC_CAT2_ISR) || defined (SPI_CSIH3_TIJC_CAT2_ISR)
ISR(SPI_CSIH3_TIJC_CAT2_ISR)
/* Defines the CAT1 interrupt mapping */
#else
_INTERRUPT_ FUNC(void, SPI_FAST_CODE) SPI_CSIH3_TIJC_ISR(void)
#endif
{
  uint8 LucHWMemoryMode;
  Spi_HWUnitType LddHWUnitIndex;
  #if (SPI_HW_PRIORITY_ENABLED == STD_ON)
  P2CONST(Spi_SequenceConfigType, AUTOMATIC, SPI_CONFIG_CONST) LpSeqConfig;
  Spi_JobType LddJobListIndex;
  Spi_JobType LddNoOfJobs;
  Spi_JobType LddReqJobListIndex;
  #endif
  /* Implements SPI_ESDD_UD_138 */
  #if (SPI_INTERRUPT_CONSISTENCY_CHECK == STD_ON)
  if (SPI_EIC_EIMK_MASK == (uint16)((*(SPI_INTCSIH3_EIC_ADDR +
                               SPI_ADDRESS_OFFSET_THREE)) & SPI_EIC_EIMK_MASK))
  {
    /* Implements SPI_ESDD_UD_122 */
    /* Reporting to DEM that interrupt from unknown source */
    Dem_ReportErrorStatus(SPI_E_INT_INCONSISTENT, DEM_EVENT_STATUS_FAILED);
  }
  else
  #endif
  {
    /* Get the HW unit index for this HW Unit in Spi_GstHWUnitInfo*/
    LddHWUnitIndex = Spi_GpConfigPtr->aaHWUnitInfoIndex[SPI_THREE];

    #if (SPI_HW_PRIORITY_ENABLED == STD_ON)
    if (SPI_FALSE == Spi_GaaHighPriorityCommRequest[SPI_THREE])
    #endif
    {
      /* Get the configured memory mode for this HW Unit */
      LucHWMemoryMode = Spi_GpConfigPtr->aaHWMemoryMode[SPI_THREE];

      /* Invoke transmit cancel function */
      Spi_TransmitCancelISR(LddHWUnitIndex, LucHWMemoryMode);
    }
    #if (SPI_HW_PRIORITY_ENABLED == STD_ON)
    else
    {
      /* MISRA Violation: START Msg(4:0488)-1 */
      /* Get the pointer to the post-build sequence structure */
      LpSeqConfig = Spi_GpFirstSeq + Spi_GaaHighPrioritySequence[SPI_THREE];
      /* END Msg (4:0488)-1 */

      /* Get the job list index of the last job of the sequence */
      LddJobListIndex = LpSeqConfig->ddJobListIndex;

      /* Get the number of jobs configured for the requested sequence */
      LddNoOfJobs = LpSeqConfig->ddNoOfJobs;

      /* Get the index of the job list for the first job of the sequence */
      LddReqJobListIndex = LddJobListIndex + (LddNoOfJobs - SPI_ONE);

      /* Flag is set is indicate high priority communication will be activated*/
      Spi_GaaHighPriorityCommActive[SPI_THREE] = SPI_TRUE;

      /* Initiate the transmission for that sequence */
      Spi_InitiateJobTx(LddReqJobListIndex);
    }
    #endif
  }
}

#define SPI_STOP_SEC_CODE_FAST
#include "MemMap.h"
#endif /* End of (SPI_CSIH3_TIJC_ISR_API == STD_ON) */
#endif

/*******************************************************************************
** Function Name     : SPI_CSIH3_TIR_ISR
**
** Service ID        : NA
**
** Description       : Interrupt Service Routine for CSIH3 receive interrupt
**
** Re-entrancy       : Reentrant
**
** Input Parameters  : None
**
** InOut Parameters  : None
**
** Output Parameters : None
**
** Return Value      : None
**
** Pre-condition     : NA
**
** Global Variable   : Spi_GpConfigPtr, Spi_GaaHighPriorityCommActive
**
** Function invoked  : Spi_ReceiveISR, Dem_ReportErrorStatus
**
** Registers Used    : None
*******************************************************************************/

#if ((SPI_DIRECT_ACCESS_MODE == STD_ON) || (SPI_TX_ONLY_MODE == STD_ON))
/* Implements SPI_ESDD_UD_151 */
#if (SPI_CSIH3_TIR_ISR_API == STD_ON)
#define SPI_START_SEC_CODE_FAST
#include "MemMap.h"

/* Implements SPI_ESDD_UD_214 */
/* Defines the CAT2interrupt mapping */
#if defined (Os_SPI_CSIH3_TIR_CAT2_ISR) || defined (SPI_CSIH3_TIR_CAT2_ISR)
ISR(SPI_CSIH3_TIR_CAT2_ISR)
/* Defines the CAT1 interrupt mapping */
#else
_INTERRUPT_ FUNC(void, SPI_FAST_CODE) SPI_CSIH3_TIR_ISR(void)
#endif
{
  uint8 LucHWMemoryMode;
  Spi_HWUnitType LddHWUnitIndex;
  /* Implements SPI_ESDD_UD_138 */
  #if (SPI_INTERRUPT_CONSISTENCY_CHECK == STD_ON)
  if (SPI_EIC_EIMK_MASK == (uint16)((*(SPI_INTCSIH3_EIC_ADDR +
                                 SPI_ADDRESS_OFFSET_ONE)) & SPI_EIC_EIMK_MASK))
  {
    /* Implements SPI_ESDD_UD_122 */
    /* Reporting to DEM that interrupt from unknown source */
    Dem_ReportErrorStatus(SPI_E_INT_INCONSISTENT, DEM_EVENT_STATUS_FAILED);
  }
  else
  #endif
  {
    /* START Msg(2:2814)-2 */
    /* Get the HW unit index for this HW Unit in Spi_GstHWUnitInfo*/
    LddHWUnitIndex = Spi_GpConfigPtr->aaHWUnitInfoIndex[SPI_THREE];
    /* END Msg(2:2814)-2 */

    #if (SPI_HW_PRIORITY_ENABLED == STD_ON)
    if (SPI_FALSE == Spi_GaaHighPriorityCommActive[SPI_THREE])
    #endif/* Get the configured memory mode for this HW Unit */
    {
      LucHWMemoryMode = Spi_GpConfigPtr->aaHWMemoryMode[SPI_THREE];
    }
    #if (SPI_HW_PRIORITY_ENABLED == STD_ON)
    else
    {
      LucHWMemoryMode = SPI_DIRECT_ACCESS_MODE_CONFIGURED;
    }
    #endif

    /* Invoke receive function */
    Spi_ReceiveISR(LddHWUnitIndex, LucHWMemoryMode);
  }
}

#define SPI_STOP_SEC_CODE_FAST
#include "MemMap.h"
#endif /* End of (SPI_CSIH3_TIR_ISR_API == STD_ON) */
#endif

/*******************************************************************************
** Function Name     : SPI_CSIH3_TIRE_ISR
**
** Service ID        : NA
**
** Description       : Interrupt Service Routine for CSIH3 Error interrupt
**
** Re-entrancy       : Reentrant
**
** Input Parameters  : None
**
** InOut Parameters  : None
**
** Output Parameters : None
**
** Return Value      : None
**
** Pre-condition     : NA
**
** Global Variable   : Spi_GpConfigPtr
**
** Function invoked  : Spi_ComErrorISR, Dem_ReportErrorStatus
**
** Registers Used    : None
*******************************************************************************/
/* Implements SPI_ESDD_UD_151 */
#if (SPI_CSIH3_TIRE_ISR_API == STD_ON)
#define SPI_START_SEC_CODE_FAST
#include "MemMap.h"

/* Implements SPI_ESDD_UD_213 */
/* Defines the CAT2interrupt mapping */
#if defined (Os_SPI_CSIH3_TIRE_CAT2_ISR) || defined (SPI_CSIH3_TIRE_CAT2_ISR)
ISR(SPI_CSIH3_TIRE_CAT2_ISR)
/* Defines the CAT1 interrupt mapping */
#else
_INTERRUPT_ FUNC(void, SPI_FAST_CODE) SPI_CSIH3_TIRE_ISR(void)
#endif
{
  uint8 LucHWMemoryMode;
  Spi_HWUnitType LddHWUnitIndex;
  /* Implements SPI_ESDD_UD_138 */
  #if (SPI_INTERRUPT_CONSISTENCY_CHECK == STD_ON)
  if (SPI_EIC_EIMK_MASK == (uint16)((*SPI_INTCSIH3_EIC_ADDR) &
                                                           SPI_EIC_EIMK_MASK))
  {
    /* Implements SPI_ESDD_UD_122 */
    /* Reporting to DEM that interrupt from unknown source */
    Dem_ReportErrorStatus(SPI_E_INT_INCONSISTENT, DEM_EVENT_STATUS_FAILED);
  }
  else
  #endif
  {
    /* START Msg(2:2814)-2 */
    /* Get the configured memory mode for this HW Unit */
    LucHWMemoryMode = Spi_GpConfigPtr->aaHWMemoryMode[SPI_THREE];
    /* END Msg(2:2814)-2 */

    /* START Msg(2:2814)-2 */
    /* Get the HW unit index for this HW Unit in Spi_GstHWUnitInfo*/
    LddHWUnitIndex = Spi_GpConfigPtr->aaHWUnitInfoIndex[SPI_THREE];
    /* END Msg(2:2814)-2 */

    /* Invoke communication error function */
    Spi_ComErrorISR(LddHWUnitIndex, LucHWMemoryMode);
  }
}

#define SPI_STOP_SEC_CODE_FAST
#include "MemMap.h"
#endif /* End of (SPI_CSIH3_TIRE_ISR_API == STD_ON) */

/*******************************************************************************
** Function Name     : SPI_DMA00_ISR
**
** Service ID        : NA
**
** Description       : Interrupt Service Routine for DMA0 interrupt
**
** Reentrancy        : Reentrant
**
** Input Parameters  : None
**
** InOut Parameters  : None
**
** Output Parameters : None
**
** Return Value      : None
**
** Pre-condition     : NA
**
** Global Variable   : None
**
** Function invoked  : Spi_DmaISR, Dem_ReportErrorStatus
**
** Registers Used    :  None
*******************************************************************************/

#if (SPI_DMA0_ISR_API == STD_ON)
#define SPI_START_SEC_CODE_FAST
#include "MemMap.h"

/* Implements SPI_ESDD_UD_210 */
/* Defines the CAT2interrupt mapping */
#if defined (Os_SPI_DMA00_CAT2_ISR) || defined (SPI_DMA00_CAT2_ISR)
ISR(SPI_DMA00_CAT2_ISR)
/* Defines the CAT1 interrupt mapping */
#else
_INTERRUPT_ FUNC(void, SPI_FAST_CODE) SPI_DMA00_ISR(void)
#endif
{
  /* Implements SPI_ESDD_UD_138 */
  #if (SPI_INTERRUPT_CONSISTENCY_CHECK == STD_ON)
  if (SPI_EIC_EIMK_MASK == (uint16)((*SPI_INTDMA0_EIC_ADDR) &
                                                           SPI_EIC_EIMK_MASK))
  {
    /* Implements SPI_ESDD_UD_122 */
    /* Reporting to DEM that interrupt from unknown source */
    Dem_ReportErrorStatus(SPI_E_INT_INCONSISTENT, DEM_EVENT_STATUS_FAILED);
  }
  else
  #endif
  {
    Spi_DmaISR(SPI_DMAUNIT_ZERO);
  }
}

#define SPI_STOP_SEC_CODE_FAST
#include "MemMap.h"
#endif /* End of (SPI_DMA00_ISR_API == STD_ON) */

/*******************************************************************************
** Function Name     : SPI_DMA01_ISR
**
** Service ID        : NA
**
** Description       : Interrupt Service Routine for DMA01 interrupt
**
** Reentrancy        : Reentrant
**
** Input Parameters  : None
**
** InOut Parameters  : None
**
** Output Parameters : None
**
** Return Value      : None
**
** Pre-condition     : NA
**
** Global Variable   : None
**
** Function invoked  : Spi_DmaISR, Dem_ReportErrorStatus
**
** Registers Used    :  None
*******************************************************************************/

#if (SPI_DMA1_ISR_API == STD_ON)
#define SPI_START_SEC_CODE_FAST
#include "MemMap.h"

/* Implements SPI_ESDD_UD_210 */
/* Defines the CAT2interrupt mapping */
#if defined (Os_SPI_DMA01_CAT2_ISR) || defined (SPI_DMA01_CAT2_ISR)
ISR(SPI_DMA01_CAT2_ISR)
/* Defines the CAT1 interrupt mapping */
#else
_INTERRUPT_ FUNC(void, SPI_FAST_CODE) SPI_DMA01_ISR(void)
#endif
{
  /* Implements SPI_ESDD_UD_138 */
  #if (SPI_INTERRUPT_CONSISTENCY_CHECK == STD_ON)
  if (SPI_EIC_EIMK_MASK == (uint16)((*(SPI_INTDMA0_EIC_ADDR + SPI_DMAUNIT_ONE))
                                                          & SPI_EIC_EIMK_MASK))
  {
    /* Implements SPI_ESDD_UD_122 */
    /* Reporting to DEM that interrupt from unknown source */
    Dem_ReportErrorStatus(SPI_E_INT_INCONSISTENT, DEM_EVENT_STATUS_FAILED);
  }
  else
  #endif
  {
    Spi_DmaISR(SPI_DMAUNIT_ONE);
  }
}

#define SPI_STOP_SEC_CODE_FAST
#include "MemMap.h"
#endif /* End of (SPI_DMA1_ISR_API == STD_ON) */

/*******************************************************************************
** Function Name     : SPI_DMA02_ISR
**
** Service ID        : NA
**
** Description       : Interrupt Service Routine for DMA02 interrupt
**
** Reentrancy        : Reentrant
**
** Input Parameters  : None
**
** InOut Parameters  : None
**
** Output Parameters : None
**
** Return Value      : None
**
** Pre-condition     : NA
**
** Global Variable   : None
**
** Function invoked  : Spi_DmaISR, Dem_ReportErrorStatus
**
** Registers Used    :  None
*******************************************************************************/

#if (SPI_DMA2_ISR_API == STD_ON)
#define SPI_START_SEC_CODE_FAST
#include "MemMap.h"

/* Implements SPI_ESDD_UD_210 */
/* Defines the CAT2interrupt mapping */
#if defined (Os_SPI_DMA02_CAT2_ISR) || defined (SPI_DMA02_CAT2_ISR)
ISR(SPI_DMA02_CAT2_ISR)
/* Defines the CAT1 interrupt mapping */
#else
_INTERRUPT_ FUNC(void, SPI_FAST_CODE) SPI_DMA02_ISR(void)
#endif
{
  /* Implements SPI_ESDD_UD_138 */
  #if (SPI_INTERRUPT_CONSISTENCY_CHECK == STD_ON)
  if (SPI_EIC_EIMK_MASK == (uint16)((*(SPI_INTDMA0_EIC_ADDR + SPI_DMAUNIT_TWO))
                                                          & SPI_EIC_EIMK_MASK))
  {
    /* Implements SPI_ESDD_UD_122 */
    /* Reporting to DEM that interrupt from unknown source */
    Dem_ReportErrorStatus(SPI_E_INT_INCONSISTENT, DEM_EVENT_STATUS_FAILED);
  }
  else
  #endif
  {
    Spi_DmaISR(SPI_DMAUNIT_TWO);
  }
}

#define SPI_STOP_SEC_CODE_FAST
#include "MemMap.h"
#endif /* End of (SPI_DMA2_ISR_API == STD_ON) */

/*******************************************************************************
** Function Name     : SPI_DMA03_ISR
**
** Service ID        : NA
**
** Description       : Interrupt Service Routine for DMA3 interrupt
**
** Reentrancy        : Reentrant
**
** Input Parameters  : None
**
** InOut Parameters  : None
**
** Output Parameters : None
**
** Return Value      : None
**
** Pre-condition     : NA
**
** Global Variable   : None
**
** Function invoked  : Spi_DmaISR, Dem_ReportErrorStatus
**
** Registers Used    :  None
*******************************************************************************/

#if (SPI_DMA3_ISR_API == STD_ON)
#define SPI_START_SEC_CODE_FAST
#include "MemMap.h"

/* Implements SPI_ESDD_UD_210 */
/* Defines the CAT2interrupt mapping */
#if defined (Os_SPI_DMA03_CAT2_ISR) || defined (SPI_DMA03_CAT2_ISR)
ISR(SPI_DMA03_CAT2_ISR)
/* Defines the CAT1 interrupt mapping */
#else
_INTERRUPT_ FUNC(void, SPI_FAST_CODE) SPI_DMA03_ISR(void)
#endif
{
  /* Implements SPI_ESDD_UD_138 */
  #if (SPI_INTERRUPT_CONSISTENCY_CHECK == STD_ON)
  if (SPI_EIC_EIMK_MASK == (uint16)((*(SPI_INTDMA0_EIC_ADDR +
                                      SPI_DMAUNIT_THREE)) & SPI_EIC_EIMK_MASK))
  {
    /* Implements SPI_ESDD_UD_122 */
    /* Reporting to DEM that interrupt from unknown source */
    Dem_ReportErrorStatus(SPI_E_INT_INCONSISTENT, DEM_EVENT_STATUS_FAILED);
  }
  else
  #endif
  {
    Spi_DmaISR(SPI_DMAUNIT_THREE);
  }
}

#define SPI_STOP_SEC_CODE_FAST
#include "MemMap.h"
#endif /* End of (SPI_DMA3_ISR_API == STD_ON) */

/*******************************************************************************
** Function Name     : SPI_DMA04_ISR
**
** Service ID        : NA
**
** Description       : Interrupt Service Routine for DMA04 interrupt
**
** Reentrancy        : Reentrant
**
** Input Parameters  : None
**
** InOut Parameters  : None
**
** Output Parameters : None
**
** Return Value      : None
**
** Pre-condition     : NA
**
** Global Variable   : None
**
** Function invoked  : Spi_DmaISR, Dem_ReportErrorStatus
**
** Registers Used    :  None
*******************************************************************************/

#if (SPI_DMA4_ISR_API == STD_ON)
#define SPI_START_SEC_CODE_FAST
#include "MemMap.h"

/* Implements SPI_ESDD_UD_210 */
/* Defines the CAT2interrupt mapping */
#if defined (Os_SPI_DMA04_CAT2_ISR) || defined (SPI_DMA04_CAT2_ISR)
ISR(SPI_DMA04_CAT2_ISR)
/* Defines the CAT1 interrupt mapping */
#else
_INTERRUPT_ FUNC(void, SPI_FAST_CODE) SPI_DMA04_ISR(void)
#endif
{
  /* Implements SPI_ESDD_UD_138 */
  #if (SPI_INTERRUPT_CONSISTENCY_CHECK == STD_ON)
  if (SPI_EIC_EIMK_MASK == (uint16)((*(SPI_INTDMA0_EIC_ADDR + SPI_DMAUNIT_FOUR))
                                                           & SPI_EIC_EIMK_MASK))
  {
    /* Implements SPI_ESDD_UD_122 */
    /* Reporting to DEM that interrupt from unknown source */
    Dem_ReportErrorStatus(SPI_E_INT_INCONSISTENT, DEM_EVENT_STATUS_FAILED);
  }
  else
  #endif
  {
    Spi_DmaISR(SPI_DMAUNIT_FOUR);
  }
}

#define SPI_STOP_SEC_CODE_FAST
#include "MemMap.h"
#endif /* End of (SPI_DMA4_ISR_API == STD_ON) */

/*******************************************************************************
** Function Name     : SPI_DMA05_ISR
**
** Service ID        : NA
**
** Description       : Interrupt Service Routine for DMA05 interrupt
**
** Reentrancy        : Reentrant
**
** Input Parameters  : None
**
** InOut Parameters  : None
**
** Output Parameters : None
**
** Return Value      : None
**
** Pre-condition     : NA
**
** Global Variable   : None
**
** Function invoked  : Spi_DmaISR, Dem_ReportErrorStatus
**
** Registers Used    :  None
*******************************************************************************/

#if (SPI_DMA5_ISR_API == STD_ON)
#define SPI_START_SEC_CODE_FAST
#include "MemMap.h"

/* Implements SPI_ESDD_UD_210 */
/* Defines the CAT2interrupt mapping */
#if defined (Os_SPI_DMA05_CAT2_ISR) || defined (SPI_DMA05_CAT2_ISR)
ISR(SPI_DMA05_CAT2_ISR)
/* Defines the CAT1 interrupt mapping */
#else
_INTERRUPT_ FUNC(void, SPI_FAST_CODE) SPI_DMA05_ISR(void)
#endif
{
  /* Implements SPI_ESDD_UD_138 */
  #if (SPI_INTERRUPT_CONSISTENCY_CHECK == STD_ON)
  if (SPI_EIC_EIMK_MASK == (uint16)((*(SPI_INTDMA0_EIC_ADDR + SPI_DMAUNIT_FIVE))
                                                           & SPI_EIC_EIMK_MASK))
  {
    /* Implements SPI_ESDD_UD_122 */
    /* Reporting to DEM that interrupt from unknown source */
    Dem_ReportErrorStatus(SPI_E_INT_INCONSISTENT, DEM_EVENT_STATUS_FAILED);
  }
  else
  #endif
  {
    Spi_DmaISR(SPI_DMAUNIT_FIVE);
  }
}

#define SPI_STOP_SEC_CODE_FAST
#include "MemMap.h"
#endif /* End of (SPI_DMA05_ISR_API == STD_ON) */

/*******************************************************************************
** Function Name     : SPI_DMA06_ISR
**
** Service ID        : NA
**
** Description       : Interrupt Service Routine for DMA06 interrupt
**
** Reentrancy        : Reentrant
**
** Input Parameters  : None
**
** InOut Parameters  : None
**
** Output Parameters : None
**
** Return Value      : None
**
** Pre-condition     : NA
**
** Global Variable   : None
**
** Function invoked  : Spi_DmaISR, Dem_ReportErrorStatus
**
** Registers Used    :  None
*******************************************************************************/

#if (SPI_DMA6_ISR_API == STD_ON)
#define SPI_START_SEC_CODE_FAST
#include "MemMap.h"

/* Implements SPI_ESDD_UD_210 */
/* Defines the CAT2interrupt mapping */
#if defined (Os_SPI_DMA06_CAT2_ISR) || defined (SPI_DMA06_CAT2_ISR)
ISR(SPI_DMA06_CAT2_ISR)
/* Defines the CAT1 interrupt mapping */
#else
_INTERRUPT_ FUNC(void, SPI_FAST_CODE) SPI_DMA06_ISR(void)
#endif
{
  /* Implements SPI_ESDD_UD_138 */
  #if (SPI_INTERRUPT_CONSISTENCY_CHECK == STD_ON)
  if (SPI_EIC_EIMK_MASK == (uint16)((*(SPI_INTDMA0_EIC_ADDR + SPI_DMAUNIT_SIX))
                                                          & SPI_EIC_EIMK_MASK))
  {
    /* Implements SPI_ESDD_UD_122 */
    /* Reporting to DEM that interrupt from unknown source */
    Dem_ReportErrorStatus(SPI_E_INT_INCONSISTENT, DEM_EVENT_STATUS_FAILED);
  }
  else
  #endif
  {
    Spi_DmaISR(SPI_DMAUNIT_SIX);
  }
}

#define SPI_STOP_SEC_CODE_FAST
#include "MemMap.h"
#endif /* End of (SPI_DMA6_ISR_API == STD_ON) */

/*******************************************************************************
** Function Name     : SPI_DMA07_ISR
**
** Service ID        : NA
**
** Description       : Interrupt Service Routine for DMA07 interrupt
**
** Reentrancy        : Reentrant
**
** Input Parameters  : None
**
** InOut Parameters  : None
**
** Output Parameters : None
**
** Return Value      : None
**
** Pre-condition     : NA
**
** Global Variable   : None
**
** Function invoked  : Spi_DmaISR,Dem_ReportErrorStatus
**
** Registers Used    :  None
*******************************************************************************/

#if (SPI_DMA7_ISR_API == STD_ON)
#define SPI_START_SEC_CODE_FAST
#include "MemMap.h"
/* Implements SPI_ESDD_UD_210 */
/* Defines the CAT2interrupt mapping */
#if defined (Os_SPI_DMA07_CAT2_ISR) || defined (SPI_DMA07_CAT2_ISR)
ISR(SPI_DMA07_CAT2_ISR)
/* Defines the CAT1 interrupt mapping */
#else
_INTERRUPT_ FUNC(void, SPI_FAST_CODE) SPI_DMA07_ISR(void)
#endif
{
  /* Implements SPI_ESDD_UD_138 */
  #if (SPI_INTERRUPT_CONSISTENCY_CHECK == STD_ON)
  if (SPI_EIC_EIMK_MASK == (uint16)((*(SPI_INTDMA0_EIC_ADDR +
                                      SPI_DMAUNIT_SEVEN)) & SPI_EIC_EIMK_MASK))
  {
    /* Implements SPI_ESDD_UD_122 */
    /* Reporting to DEM that interrupt from unknown source */
    Dem_ReportErrorStatus(SPI_E_INT_INCONSISTENT, DEM_EVENT_STATUS_FAILED);
  }
  else
  #endif
  {
    Spi_DmaISR(SPI_DMAUNIT_SEVEN);
  }
}

#define SPI_STOP_SEC_CODE_FAST
#include "MemMap.h"
#endif /* End of (SPI_DMA07_ISR_API == STD_ON) */

/*******************************************************************************
** Function Name     : SPI_DMA08_ISR
**
** Service ID        : NA
**
** Description       : Interrupt Service Routine for DMA08 interrupt
**
** Reentrancy        : Reentrant
**
** Input Parameters  : None
**
** InOut Parameters  : None
**
** Output Parameters : None
**
** Return Value      : None
**
** Pre-condition     : NA
**
** Global Variable   : None
**
** Function invoked  : Spi_DmaISR
**
** Registers Used    :  None
*******************************************************************************/

#if (SPI_DMA8_ISR_API == STD_ON)
#define SPI_START_SEC_CODE_FAST
#include "MemMap.h"

/* Implements SPI_ESDD_UD_210 */
/* Defines the CAT2interrupt mapping */
#if defined (Os_SPI_DMA08_CAT2_ISR) || defined (SPI_DMA08_CAT2_ISR)
ISR(SPI_DMA08_CAT2_ISR)
/* Defines the CAT1 interrupt mapping */
#else
_INTERRUPT_ FUNC(void, SPI_FAST_CODE) SPI_DMA08_ISR(void)
#endif
{
  /* Implements SPI_ESDD_UD_138 */
  #if (SPI_INTERRUPT_CONSISTENCY_CHECK == STD_ON)
  if (SPI_EIC_EIMK_MASK == (uint16)((*(SPI_INTDMA0_EIC_ADDR +
                                      SPI_DMAUNIT_EIGHT)) & SPI_EIC_EIMK_MASK))
  {
    /* Implements SPI_ESDD_UD_122 */
    /* Reporting to DEM that interrupt from unknown source */
    Dem_ReportErrorStatus(SPI_E_INT_INCONSISTENT, DEM_EVENT_STATUS_FAILED);
  }
  else
  #endif
  {
    Spi_DmaISR(SPI_DMAUNIT_EIGHT);
  }
}

#define SPI_STOP_SEC_CODE_FAST
#include "MemMap.h"
#endif /* End of (SPI_DMA08_ISR_API == STD_ON) */

/*******************************************************************************
** Function Name     : SPI_DMA09_ISR
**
** Service ID        : NA
**
** Description       : Interrupt Service Routine for DMA09 interrupt
**
** Reentrancy        : Reentrant
**
** Input Parameters  : None
**
** InOut Parameters  : None
**
** Output Parameters : None
**
** Return Value      : None
**
** Pre-condition     : NA
**
** Global Variable   : None
**
** Function invoked  : Spi_DmaISR, Dem_ReportErrorStatus
**
** Registers Used    :  None
*******************************************************************************/

#if (SPI_DMA9_ISR_API == STD_ON)
#define SPI_START_SEC_CODE_FAST
#include "MemMap.h"

/* Implements SPI_ESDD_UD_210 */
/* Defines the CAT2interrupt mapping */
#if defined (Os_SPI_DMA09_CAT2_ISR) || defined (SPI_DMA09_CAT2_ISR)
ISR(SPI_DMA09_CAT2_ISR)
/* Defines the CAT1 interrupt mapping */
#else
_INTERRUPT_ FUNC(void, SPI_FAST_CODE) SPI_DMA09_ISR(void)
#endif
{
  /* Implements SPI_ESDD_UD_138 */
  #if (SPI_INTERRUPT_CONSISTENCY_CHECK == STD_ON)
  if (SPI_EIC_EIMK_MASK == (uint16)((*(SPI_INTDMA0_EIC_ADDR + SPI_DMAUNIT_NINE))
                                                           & SPI_EIC_EIMK_MASK))
  {
    /* Implements SPI_ESDD_UD_122 */
    /* Reporting to DEM that interrupt from unknown source */
    Dem_ReportErrorStatus(SPI_E_INT_INCONSISTENT, DEM_EVENT_STATUS_FAILED);
  }
  else
  #endif
  {
    Spi_DmaISR(SPI_DMAUNIT_NINE);
  }
}

#define SPI_STOP_SEC_CODE_FAST
#include "MemMap.h"
#endif /* End of (SPI_DMA09_ISR_API == STD_ON) */

/*******************************************************************************
** Function Name     : SPI_DMA10_ISR
**
** Service ID        : NA
**
** Description       : Interrupt Service Routine for DMA10 interrupt
**
** Reentrancy        : Reentrant
**
** Input Parameters  : None
**
** InOut Parameters  : None
**
** Output Parameters : None
**
** Return Value      : None
**
** Pre-condition     : NA
**
** Global Variable   : None
**
** Function invoked  : Spi_DmaISR, Dem_ReportErrorStatus
**
** Registers Used    :  None
*******************************************************************************/

#if (SPI_DMA10_ISR_API == STD_ON)
#define SPI_START_SEC_CODE_FAST
#include "MemMap.h"

/* Implements SPI_ESDD_UD_210 */
/* Defines the CAT2interrupt mapping */
#if defined (Os_SPI_DMA10_CAT2_ISR) || defined (SPI_DMA10_CAT2_ISR)
ISR(SPI_DMA10_CAT2_ISR)
/* Defines the CAT1 interrupt mapping */
#else
_INTERRUPT_ FUNC(void, SPI_FAST_CODE) SPI_DMA10_ISR(void)
#endif
{
  /* Implements SPI_ESDD_UD_138 */
  #if (SPI_INTERRUPT_CONSISTENCY_CHECK == STD_ON)
  if (SPI_EIC_EIMK_MASK == (uint16)((*(SPI_INTDMA0_EIC_ADDR + SPI_DMAUNIT_TEN))
                                                          & SPI_EIC_EIMK_MASK))
  {
    /* Implements SPI_ESDD_UD_122 */
    /* Reporting to DEM that interrupt from unknown source */
    Dem_ReportErrorStatus(SPI_E_INT_INCONSISTENT, DEM_EVENT_STATUS_FAILED);
  }
  else
  #endif
  {
    Spi_DmaISR(SPI_DMAUNIT_TEN);
  }
}

#define SPI_STOP_SEC_CODE_FAST
#include "MemMap.h"
#endif /* End of (SPI_DMA10_ISR_API == STD_ON) */

/*******************************************************************************
** Function Name     : SPI_DMA11_ISR
**
** Service ID        : NA
**
** Description       : Interrupt Service Routine for DMA11 interrupt
**
** Reentrancy        : Reentrant
**
** Input Parameters  : None
**
** InOut Parameters  : None
**
** Output Parameters : None
**
** Return Value      : None
**
** Pre-condition     : NA
**
** Global Variable   : None
**
** Function invoked  : Spi_DmaISR, Dem_ReportErrorStatus
**
** Registers Used    :  None
*******************************************************************************/

#if (SPI_DMA11_ISR_API == STD_ON)
#define SPI_START_SEC_CODE_FAST
#include "MemMap.h"

/* Implements SPI_ESDD_UD_210 */
/* Defines the CAT2interrupt mapping */
#if defined (Os_SPI_DMA11_CAT2_ISR) || defined (SPI_DMA11_CAT2_ISR)
ISR(SPI_DMA11_CAT2_ISR)
/* Defines the CAT1 interrupt mapping */
#else
_INTERRUPT_ FUNC(void, SPI_FAST_CODE) SPI_DMA11_ISR(void)
#endif
{
  /* Implements SPI_ESDD_UD_138 */
  #if (SPI_INTERRUPT_CONSISTENCY_CHECK == STD_ON)
  if (SPI_EIC_EIMK_MASK == (uint16)((*(SPI_INTDMA0_EIC_ADDR +
                                     SPI_DMAUNIT_ELEVEN)) & SPI_EIC_EIMK_MASK))
  {
    /* Implements SPI_ESDD_UD_122 */
    /* Reporting to DEM that interrupt from unknown source */
    Dem_ReportErrorStatus(SPI_E_INT_INCONSISTENT, DEM_EVENT_STATUS_FAILED);
  }
  else
  #endif
  {
    Spi_DmaISR(SPI_DMAUNIT_ELEVEN);
  }
}

#define SPI_STOP_SEC_CODE_FAST
#include "MemMap.h"
#endif /* End of (SPI_DMA11_ISR_API == STD_ON) */

/*******************************************************************************
** Function Name     : SPI_DMA12_ISR
**
** Service ID        : NA
**
** Description       : Interrupt Service Routine for DMA12 interrupt
**
** Reentrancy        : Reentrant
**
** Input Parameters  : None
**
** InOut Parameters  : None
**
** Output Parameters : None
**
** Return Value      : None
**
** Pre-condition     : NA
**
** Global Variable   : None
**
** Function invoked  : Spi_DmaISR, Dem_ReportErrorStatus
**
** Registers Used    :  None
*******************************************************************************/

#if (SPI_DMA12_ISR_API == STD_ON)
#define SPI_START_SEC_CODE_FAST
#include "MemMap.h"

/* Implements SPI_ESDD_UD_210 */
/* Defines the CAT2interrupt mapping */
#if defined (Os_SPI_DMA12_CAT2_ISR) || defined (SPI_DMA12_CAT2_ISR)
ISR(SPI_DMA12_CAT2_ISR)
/* Defines the CAT1 interrupt mapping */
#else
_INTERRUPT_ FUNC(void, SPI_FAST_CODE) SPI_DMA12_ISR(void)
#endif
{
  /* Implements SPI_ESDD_UD_138 */
  #if (SPI_INTERRUPT_CONSISTENCY_CHECK == STD_ON)
  if (SPI_EIC_EIMK_MASK == (uint16)((*(SPI_INTDMA0_EIC_ADDR +
                                     SPI_DMAUNIT_TWELVE)) & SPI_EIC_EIMK_MASK))
  {
    /* Implements SPI_ESDD_UD_138 */
    /* Reporting to DEM that interrupt from unknown source */
    Dem_ReportErrorStatus(SPI_E_INT_INCONSISTENT, DEM_EVENT_STATUS_FAILED);
  }
  else
  #endif
  {
    Spi_DmaISR(SPI_DMAUNIT_TWELVE);
  }
}

#define SPI_STOP_SEC_CODE_FAST
#include "MemMap.h"
#endif /* End of (SPI_DMA12_ISR_API == STD_ON) */

/*******************************************************************************
** Function Name     : SPI_DMA13_ISR
**
** Service ID        : NA
**
** Description       : Interrupt Service Routine for DMA13 interrupt
**
** Reentrancy        : Reentrant
**
** Input Parameters  : None
**
** InOut Parameters  : None
**
** Output Parameters : None
**
** Return Value      : None
**
** Pre-condition     : NA
**
** Global Variable   : None
**
** Function invoked  : Spi_DmaISR, Dem_ReportErrorStatus
**
** Registers Used    : None
*******************************************************************************/

#if (SPI_DMA13_ISR_API == STD_ON)
#define SPI_START_SEC_CODE_FAST
#include "MemMap.h"

/* Implements SPI_ESDD_UD_210 */
/* Defines the CAT2interrupt mapping */
#if defined (Os_SPI_DMA13_CAT2_ISR) || defined (SPI_DMA13_CAT2_ISR)
ISR(SPI_DMA13_CAT2_ISR)
/* Defines the CAT1 interrupt mapping */
#else
_INTERRUPT_ FUNC(void, SPI_FAST_CODE) SPI_DMA13_ISR(void)
#endif
{
  /* Implements SPI_ESDD_UD_138 */
  #if (SPI_INTERRUPT_CONSISTENCY_CHECK == STD_ON)
  if (SPI_EIC_EIMK_MASK == (uint16)((*(SPI_INTDMA0_EIC_ADDR +
                                   SPI_DMAUNIT_THIRTEEN)) & SPI_EIC_EIMK_MASK))
  {
    /* Implements SPI_ESDD_UD_122 */
    /* Reporting to DEM that interrupt from unknown source */
    Dem_ReportErrorStatus(SPI_E_INT_INCONSISTENT, DEM_EVENT_STATUS_FAILED);
  }
  else
  #endif
  {
    Spi_DmaISR(SPI_DMAUNIT_THIRTEEN);
  }
}

#define SPI_STOP_SEC_CODE_FAST
#include "MemMap.h"
#endif /* End of (SPI_DMA13_ISR_API == STD_ON) */

/*******************************************************************************
** Function Name     : SPI_DMA14_ISR
**
** Service ID        : NA
**
** Description       : Interrupt Service Routine for DMA14 interrupt
**
** Reentrancy        : Reentrant
**
** Input Parameters  : None
**
** InOut Parameters  : None
**
** Output Parameters : None
**
** Return Value      : None
**
** Pre-condition     : NA
**
** Global Variable   : None
**
** Function invoked  : Spi_DmaISR, Dem_ReportErrorStatus
**
** Registers Used    :  None
*******************************************************************************/

#if (SPI_DMA14_ISR_API == STD_ON)
#define SPI_START_SEC_CODE_FAST
#include "MemMap.h"

/* Implements SPI_ESDD_UD_210 */
/* Defines the CAT2interrupt mapping */
#if defined (Os_SPI_DMA14_CAT2_ISR) ||  defined (SPI_DMA14_CAT2_ISR)
ISR(SPI_DMA14_CAT2_ISR)
/* Defines the CAT1 interrupt mapping */
#else
_INTERRUPT_ FUNC(void, SPI_FAST_CODE) SPI_DMA14_ISR(void)
#endif
{
  /* Implements SPI_ESDD_UD_138 */
  #if (SPI_INTERRUPT_CONSISTENCY_CHECK == STD_ON)
  if (SPI_EIC_EIMK_MASK == (uint16)((*(SPI_INTDMA0_EIC_ADDR +
                                   SPI_DMAUNIT_FOURTEEN)) & SPI_EIC_EIMK_MASK))
  {
    /* Implements SPI_ESDD_UD_122 */
    /* Reporting to DEM that interrupt from unknown source */
    Dem_ReportErrorStatus(SPI_E_INT_INCONSISTENT, DEM_EVENT_STATUS_FAILED);
  }
  else
  #endif
  {
    Spi_DmaISR(SPI_DMAUNIT_FOURTEEN);
  }
}

#define SPI_STOP_SEC_CODE_FAST
#include "MemMap.h"
#endif /* End of (SPI_DMA14_ISR_API == STD_ON) */

/*******************************************************************************
** Function Name     : SPI_DMA15_ISR
**
** Service ID        : NA
**
** Description       : Interrupt Service Routine for DMA15 interrupt
**
** Reentrancy        : Reentrant
**
** Input Parameters  : None
**
** InOut Parameters  : None
**
** Output Parameters : None
**
** Return Value      : None
**
** Pre-condition     : NA
**
** Global Variable   : None
**
** Function invoked  : Spi_DmaISR, Dem_ReportErrorStatus
**
** Registers Used    :  None
*******************************************************************************/

#if (SPI_DMA15_ISR_API == STD_ON)
#define SPI_START_SEC_CODE_FAST
#include "MemMap.h"

/* Implements SPI_ESDD_UD_210 */
/* Defines the CAT2interrupt mapping */
#if defined (Os_SPI_DMA15_CAT2_ISR) || defined (SPI_DMA15_CAT2_ISR)
ISR(SPI_DMA15_CAT2_ISR)
/* Defines the CAT1 interrupt mapping */
#else
_INTERRUPT_ FUNC(void, SPI_FAST_CODE) SPI_DMA15_ISR(void)
#endif
{
  /* Implements SPI_ESDD_UD_138 */
  #if (SPI_INTERRUPT_CONSISTENCY_CHECK == STD_ON)
  if (SPI_EIC_EIMK_MASK == (uint16)((*(SPI_INTDMA0_EIC_ADDR +
                                    SPI_DMAUNIT_FIFTEEN)) & SPI_EIC_EIMK_MASK))
  {
    /* Implements SPI_ESDD_UD_122 */
    /* Reporting to DEM that interrupt from unknown source */
    Dem_ReportErrorStatus(SPI_E_INT_INCONSISTENT, DEM_EVENT_STATUS_FAILED);
  }
  else
  #endif
  {
    Spi_DmaISR(SPI_DMAUNIT_FIFTEEN);
  }
}

#define SPI_STOP_SEC_CODE_FAST
#include "MemMap.h"
#endif /* End of (SPI_DMA15_ISR_API == STD_ON) */

/*******************************************************************************
**                          End of File                                       **
*******************************************************************************/
