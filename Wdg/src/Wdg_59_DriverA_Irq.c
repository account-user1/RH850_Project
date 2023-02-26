/*============================================================================*/
/* Project      = AUTOSAR Renesas X1x MCAL Components                         */
/* Module       = Wdg_59_DriverA_Irq.c                                        */
/* $Revision: 366328 $                                                        */
/* $Date: 2017-02-21 17:44:10 +0000 (Tue, 21 Feb 2017) $                      */
/*============================================================================*/
/*                                  COPYRIGHT                                 */
/*============================================================================*/
/* Copyright(c) 2015-2017 Renesas Electronics Corporation                     */
/*============================================================================*/
/* Purpose:                                                                   */
/* ISR functions of the WDG Driver A Component                                */
/*                                                                            */
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
/* Implements EAAR_PN0034_FR_0060 */
/*******************************************************************************
**                      Revision Control History                              **
*******************************************************************************/
/*
 * V1.0.0:  07-Aug-2015    : Initial Version
 *
 * V2.0.0:  22-Feb-2017    : The following changes are made :
 *                           1. As per ticket ARDAAAF-976, file adapted from
 *                              P1x.
 *                           2. As per ticket ARDAAAF-1435, Comments added for
 *                              traceability.
 *                           3. As per ticket ARDAAAF-769, QAC and MISRA
 *                              warnings fixed/Justified.
 *                           4. As per ticket ARDAAAF-1714, QAC and MISRA
 *                              warnings fixed/Justified.
 *                           5. As per ticket ARDAAAF-469,
 *                              Wdg_59_DriverA_GusTiggerCounter is changed to
 *                              uint32.
 *                           6. As per ticket ARDAAAF-942, added MISRA warning
 *                              description and changed compiler switch
 *                              condition check format.
 */
/******************************************************************************/

/*******************************************************************************
**                     Include Section                                        **
*******************************************************************************/

/* Implements WDG169,WDG061,WDG034,WDG166,WDG079 */
/* Implements EAAR_PN0034_NR_0001,EAAR_PN0034_FR_0081,EAAR_PN0034_FR_0030 */
/* Implements EAAR_PN0034_FR_0019,EAAR_PN0034_NR_0069,EAAR_PN0034_NR_0026 */
/* Implements EAAR_PN0034_FSR_0002 */
/* Implements AR_PN0064_FR_0057 */
/* Included for ISR functions declaration */
#include "Wdg_59_DriverA_Irq.h"
/* Implements WDG080 */
/* Included for declaration of the function Dem_ReportErrorStatus() */
#include "Dem.h"
/* Included for declaration of the function Wdg_59_DriverA_TriggerFunc() */
#include "Wdg_59_DriverA_Private.h"

#if ( STD_ON == WDG_59_DRIVERA_DEV_ERROR_DETECT)
/* Included for the declaration of Det_ReportError() */
#include "Det.h"
#endif

/* Implements AR_PN0064_FR_0052 */
#if (WDG_59_DRIVERA_CRITICAL_SECTION_PROTECTION == STD_ON)
/* Included for the declaration of the critical section protection functions */
#include "SchM_Wdg_59_DriverA.h"
#endif
/*******************************************************************************
**                      Version Information                                   **
*******************************************************************************/
/* AUTOSAR release version information */
#define WDG_59_DRIVERA_IRQ_C_AR_RELEASE_MAJOR_VERSION \
                                  WDG_59_DRIVERA_AR_RELEASE_MAJOR_VERSION_VALUE
#define WDG_59_DRIVERA_IRQ_C_AR_RELEASE_MINOR_VERSION \
                                  WDG_59_DRIVERA_AR_RELEASE_MINOR_VERSION_VALUE
#define WDG_59_DRIVERA_IRQ_C_AR_RELEASE_REVISION_VERSION \
                               WDG_59_DRIVERA_AR_RELEASE_REVISION_VERSION_VALUE

/* File version information */
#define WDG_59_DRIVERA_IRQ_C_SW_MAJOR_VERSION \
                                          WDG_59_DRIVERA_SW_MAJOR_VERSION_VALUE
#define WDG_59_DRIVERA_IRQ_C_SW_MINOR_VERSION \
                                          WDG_59_DRIVERA_SW_MINOR_VERSION_VALUE

/*******************************************************************************
**                      Version Check                                         **
*******************************************************************************/
#if (WDG_59_DRIVERA_IRQ_AR_RELEASE_MAJOR_VERSION != \
                                  WDG_59_DRIVERA_IRQ_C_AR_RELEASE_MAJOR_VERSION)
  #error "Wdg_59_DriverA_Irq.c : Mismatch in Release Major Version"
#endif

#if (WDG_59_DRIVERA_IRQ_AR_RELEASE_MINOR_VERSION != \
                                  WDG_59_DRIVERA_IRQ_C_AR_RELEASE_MINOR_VERSION)
  #error "Wdg_59_DriverA_Irq.c : Mismatch in Release Minor Version"
#endif

#if (WDG_59_DRIVERA_IRQ_AR_RELEASE_REVISION_VERSION != \
                               WDG_59_DRIVERA_IRQ_C_AR_RELEASE_REVISION_VERSION)
  #error "Wdg_59_DriverA_Irq.c : Mismatch in Release Revision Version"
#endif

#if (WDG_59_DRIVERA_IRQ_SW_MAJOR_VERSION != \
                                          WDG_59_DRIVERA_IRQ_C_SW_MAJOR_VERSION)
  #error "Wdg_59_DriverA_Irq.c : Mismatch in Software Major Version"
#endif

#if (WDG_59_DRIVERA_IRQ_SW_MINOR_VERSION != \
                                         WDG_59_DRIVERA_IRQ_C_SW_MINOR_VERSION)
  #error "Wdg_59_DriverA_Irq.c : Mismatch in Software Minor Version"
#endif

/*******************************************************************************
**                         Global Data                                        **
*******************************************************************************/
/* Implements EAAR_PN0034_NR_0002 */
/*******************************************************************************
**                      MISRA C Rule Violations                               **
*******************************************************************************/
/* 1. MISRA C RULE VIOLATION:                                                 */
/* Message       : (4:0303) [I] Cast between a pointer to volatile object and */
/*                 an integral type.                                          */
/* Rule          : MISRA-C:2004 Rule 11.3                                     */
/*                 REFERENCE - ISO-6.3.4 Semantics                            */
/* Justification : Typecasting is done as per the register size, to access    */
/*                 hardware registers.                                        */
/* Verification  : However, part of the code is verified manually and it is   */
/*                 not having any impact.                                     */
/* Reference     : Look for START Msg(4:0303)-1 and                           */
/*                 END Msg(4:0303)-1 tags in the code.                        */
/*******************************************************************************
**                         QAC Warning                                        **
*******************************************************************************/
/* 1. QAC Warning:                                                            */
/* Message       :(2:0862) #include "MemMap.h" directive is redundant.        */
/* Rule          : No Rule                                                    */
/* Justification : As per requirement [MEMMAP003],the inclusion of the memory */
/*                 mapping header files is done within the code.              */
/*                 As neither executable code nor symbols are included        */
/*                 (only pragmas) this violation is an approved exception     */
/*                 without side effects.Also this is not a MISRA violation    */
/* Verification  : However, part of the code is verified manually and it is   */
/*                 not having any impact.                                     */
/******************************************************************************/
/* 2. QAC WARNING:                                                            */
/* Message       : (2:3416) Logical operation performed on expression with    */
/*                 possible side effects.                                     */
/* Rule          : NA                                                         */
/* Justification : Logical operation accesses volatile object which is a      */
/*                 global variable. All global varible modified in interrupt  */
/*                 context are declrared as volatile qualifier. There is no   */
/*                 impact on the functionality due to this conditional check  */
/*                 for mode change.                                           */
/* Verification  : However, part of the code is verified manually and it is   */
/*                 not having any impact.                                     */
/* Reference     : Look for QAC warning: START Msg(2:3416)-2 and              */
/*                 END Msg(2:3416)-2 tags in the code.                        */
/******************************************************************************/
/*******************************************************************************
**                      Function Definitions                                  **
*******************************************************************************/

/*******************************************************************************
** Function Name         : WDG_59_DRIVERA_TRIGGERFUNCTION_ISR
**
** Service ID            : NA
**
** Description           : This is 75 % Interrupt Service routines for the Wdg
**                         hardware unit.
**
** Sync/Async            : Synchronous
**
** Re-entrancy           : Reentrant
**
** Input Parameters      : None
**
** InOut Parameters      : None
**
** Output Parameters     : None
**
** Return parameter      : None
**
** Preconditions         : None
**
** Global Variables Used : Wdg_59_DriverA_GulTiggerCounter,
**                         Wdg_59_DriverA_GddDriverState.
**
** Functions Invoked     : Wdg_59_DriverA_TriggerFunc
**                         Det_ReportError, Dem_ReportErrorStatus
**                         WDG_59_DRIVERA_ENTER_CRITICAL_SECTION,
**                         WDG_59_DRIVERA_EXIT_CRITICAL_SECTION,
**
** Registers Used        : None
*******************************************************************************/
#define WDG_59_DRIVERA_START_SEC_CODE_FAST
#include "MemMap.h"

/* Implements WDG_ESDD_UD_009 */
/* Implements WDG_ESDD_UD_025 */
/* Implements WDG_ESDD_UD_005 */
/* Implements WDG079,WDG144,WDG134,WDG135,WDG035,WDG052 */
/* Implements EAAR_PN0034_FSR_0008,EAAR_PN0034_FSR_0009,EAAR_PN0034_FSR_0010 */
/* Defines the CAT2 interrupt mapping */
#if defined (Os_WDG_59_DRIVERA_TRIGGERFUNCTION_CAT2_ISR) || \
                              defined (WDG_59_DRIVERA_TRIGGERFUNCTION_CAT2_ISR)
ISR(WDG_59_DRIVERA_TRIGGERFUNCTION_CAT2_ISR)
/* Defines the CAT1 interrupt mapping */
#else
_INTERRUPT_ FUNC(void, WDG_59_DRIVERA_FAST_CODE)
                                  WDG_59_DRIVERA_TRIGGERFUNCTION_ISR(void)
#endif
{
  /* Implements WDG_ESDD_UD_023 */
  /* Implements WDG_ESDD_UD_029 */
  #if ( STD_ON == WDG_59_DRIVERA_DEV_ERROR_DETECT)
  /*  QAC warning: START Msg(2:3416)-2 */
  if (WDG_59_DRIVERA_IDLE != Wdg_59_DriverA_GddDriverState)
  {
  /* END Msg (2:3416)-2 */
    /* Report Error to DET */
    (void)Det_ReportError(WDG_59_DRIVERA_MODULE_ID, WDG_59_DRIVERA_INSTANCE_ID,
          WDG_59_DRIVERA_TRIGGERFUNCTION_ISR_ID, WDG_59_DRIVERA_E_DRIVER_STATE);
  }
  else
  #endif
  {

    #if (WDG_59_DRIVERA_INTERRUPT_CONSISTENCY_CHECK == STD_ON)
     /* Implements WDG_ESDD_UD_008 */
     /* Implements WDG_ESDD_UD_027 */
    /* MISRA Violation: START Msg(4:0303)-1 */
    if (WDG_EIC_EIMK_MASK == (uint16)((WDG_59_DRIVERA_WDTAEIC_ADDR) &
                                            WDG_EIC_EIMK_MASK))
    /* END Msg(4:0303)-1 */
    {
      /* Reporting to DEM that interrupt from unknown source */
      Dem_ReportErrorStatus(WDG_59_DRIVERA_E_INT_INCONSISTENT,
                             (WDG_59_DRIVERA_DEM_TYPE) DEM_EVENT_STATUS_FAILED);
    }
    else
    #endif
    {

      #if ( STD_ON == WDG_59_DRIVERA_DEV_ERROR_DETECT)
      /* Implements WDG052 */
      /* Implements WDG_ESDD_UD_029 */
      /* Set the state of Watchdog as Busy */
      Wdg_59_DriverA_GddDriverState = WDG_59_DRIVERA_BUSY;
      #endif

      /* Implements WDG_ESDD_UD_008 */
      /* Implements WDG_ESDD_UD_026 */
      /* Check if the trigger counter completed the requested timeout value*/
      /*  QAC warning: START Msg(2:3416)-2 */
      if ((uint32)WDG_59_DRIVERA_ZERO < Wdg_59_DriverA_GulTiggerCounter)
      {
      /* End Msg (2:3416)-2 */
        /* Implements WDG040 */
        /* Implements WDG_ESDD_UD_013 */
        /* Implements AR_PN0064_FR_0052 */
        /* Check if critical section protection is required */
        #if (STD_ON  == WDG_59_DRIVERA_CRITICAL_SECTION_PROTECTION )
        WDG_59_DRIVERA_ENTER_CRITICAL_SECTION(WDG_59_DRIVERA_TRIGG_PROTECTION);
        #endif

        /* Decrement the trigger counter */
        Wdg_59_DriverA_GulTiggerCounter--;

        /* Check if critical section protection is required */
        /* Implements WDG_ESDD_UD_013 */
        /* Implements AR_PN0064_FR_0052 */
        #if (STD_ON  == WDG_59_DRIVERA_CRITICAL_SECTION_PROTECTION )
        WDG_59_DRIVERA_EXIT_CRITICAL_SECTION(WDG_59_DRIVERA_TRIGG_PROTECTION);
        #endif

        /* Restart the WDG hardware */
        Wdg_59_DriverA_TriggerFunc(WDG_59_DRIVERA_TRIGGERFUNCTION_ISR_API_ID);
      }
      else
      {
        /* No action required */
      }

      #if ( STD_ON == WDG_59_DRIVERA_DEV_ERROR_DETECT)
      /* Implements WDG052 */
      /* Implements WDG_ESDD_UD_029 */
      /* Set the state of Watchdog as Idle */
      Wdg_59_DriverA_GddDriverState = WDG_59_DRIVERA_IDLE;
      #endif

    }
  }

}

#define WDG_59_DRIVERA_STOP_SEC_CODE_FAST
#include "MemMap.h"

/*******************************************************************************
**                          End of File                                       **
*******************************************************************************/
