/*============================================================================*/
/* Project      = AUTOSAR Renesas X1x MCAL Components                         */
/* Module       = Wdg_59_DriverA.c                                            */
/* $Revision: 366328 $                                                        */
/* $Date: 2017-02-21 17:44:10 +0000 (Tue, 21 Feb 2017) $                      */
/*============================================================================*/
/*                                  COPYRIGHT                                 */
/*============================================================================*/
/* Copyright(c) 2015-2017 Renesas Electronics Corporation                     */
/*============================================================================*/
/* Purpose:                                                                   */
/* Driver code of the Watchdog Driver A Component                             */
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

/*******************************************************************************
**                      Revision Control History                              **
*******************************************************************************/
/*
 * V1.0.0:  07-Aug-2015    : Initial Version
 *
 * V1.0.1:  27-Jan-2016    : The following changes are made :
 *                           1. As per ticket ARDAAAF-306 API
 *                              Wdg_59_DriverA_SetMode updated.
 *                           2. As per ticket ARDAAAF-324, added read back
 *                              functionality for all registers.
 *                           3. As per ticket ARDAAAF-352,
 *                              Wdg_59_DriverA_GetVersionInfo is implemented as
 *                              a function.
 *                           4. Copyright information updated.
 *
 * V2.0.0:  21-Feb-2017    : The following changes are made :
 *                           1. As per ticket ARDAAAF-976, file adapted from
 *                              P1x.
 *                           2. As per ticket ARDAAAF-1435, Comments added for
 *                              traceability.
 *                           3. As per ticket ARDAAAF-769, QAC and MISRA
 *                              warnings fixed/Justified.
 *                           4. As per ticket ARDAAAF-1714, QAC and MISRA
 *                              warnings fixed/Justified.
 *                           5. As per ticket ARDAAAF-469,usSlowTimeValue,
 *                              usFastTimeValue,DefaultTimeValue and
 *                              Wdg_59_DriverA_GusTiggerCounter are changed to
 *                              ulSlowTimeValue,ulFastTimeValue,DefaultTimeValue
 *                              and Wdg_59_DriverA_GulTiggerCounter.
 *                           6. As per ticket ARDAAAF-942, QAC warning tag
 *                              corrected.
 */
/******************************************************************************/

/*******************************************************************************
**                     Include Section                                        **
*******************************************************************************/
/* Implements WDG061,WDG170,WDG045,WDG064,WDG065,WDG066,WDG105,WDG161,WDG169 */
/* Implements AR_PN0064_FR_0004,AR_PN0064_NR_0001,AR_PN0064_NR_0004 */
/* Implements AR_PN0064_NR_0008,AR_PN0064_NR_0009,AR_PN0064_FR_0041 */
/* Implements EAAR_PN0034_NR_0001,EAAR_PN0034_FR_0081,EAAR_PN0034_FR_0013 */
/* Implements EAAR_PN0034_FR_0030,EAAR_PN0034_FR_0019,EAAR_PN0034_FR_0021 */
/* Implements EAAR_PN0034_FR_0023,EAAR_PN0034_NR_0045,EAAR_PN0034_NR_0069 */
/* Implements  EAAR_PN0034_NR_0026,EAAR_PN0034_NR_0001, EAAR_PN0034_NR_0012 */
/* Implements EAAR_PN0034_FR_0052, EAAR_PN0034_FR_0049, EAAR_PN0034_FR_0065 */

/* Included for Wdg_59_DriverA.h inclusion and macro definitions */
#include "Wdg_59_DriverA_PBTypes.h"

#if (STD_ON  == WDG_59_DRIVERA_DEV_ERROR_DETECT )
/* Implements WDG111 */
/* Included for the declaration of Det_ReportError() */
#include "Det.h"
#endif
/* Implements WDG080,WDG040,WDG062,WDG063,WDG110 */
/* Included for declaration of the function Dem_ReportErrorStatus() */
/* Implements AR_PN0064_FR_0052 */
#if (STD_ON  == WDG_59_DRIVERA_CRITICAL_SECTION_PROTECTION )
/* Included for the declaration of the critical section protection functions */
#include "SchM_Wdg_59_DriverA.h"
#endif

/*Included for declaration of the function */
#include "Wdg_59_DriverA.h"
/* Included for RAM variable declarations */
#include "Wdg_59_DriverA_Ram.h"
/* Included for declaration of the function Wdg_59_DriverA_TriggerFunc() */
#include "Wdg_59_DriverA_Private.h"

/*******************************************************************************
**                        Version Information                                 **
*******************************************************************************/
/* AUTOSAR release version information */
#define WDG_59_DRIVERA_C_AR_RELEASE_MAJOR_VERSION \
                                   WDG_59_DRIVERA_AR_RELEASE_MAJOR_VERSION_VALUE
#define WDG_59_DRIVERA_C_AR_RELEASE_MINOR_VERSION \
                                   WDG_59_DRIVERA_AR_RELEASE_MINOR_VERSION_VALUE
#define WDG_59_DRIVERA_C_AR_RELEASE_REVISION_VERSION \
                                WDG_59_DRIVERA_AR_RELEASE_REVISION_VERSION_VALUE

/* File version information */
#define WDG_59_DRIVERA_C_SW_MAJOR_VERSION  1U
#define WDG_59_DRIVERA_C_SW_MINOR_VERSION  0U
/*******************************************************************************
**                      Version Check                                         **
*******************************************************************************/
/* Functionality related to R4.0 */
#if (WDG_59_DRIVERA_AR_RELEASE_MAJOR_VERSION != \
                                      WDG_59_DRIVERA_C_AR_RELEASE_MAJOR_VERSION)
  #error "Wdg_59_DriverA.c : Mismatch in Release Major Version"
#endif

#if (WDG_59_DRIVERA_AR_RELEASE_MINOR_VERSION != \
                                      WDG_59_DRIVERA_C_AR_RELEASE_MINOR_VERSION)
  #error "Wdg_59_DriverA.c : Mismatch in Release Minor Version"
#endif

#if (WDG_59_DRIVERA_AR_RELEASE_REVISION_VERSION != \
                                   WDG_59_DRIVERA_C_AR_RELEASE_REVISION_VERSION)
  #error "Wdg_59_DriverA.c : Mismatch in Release Revision Version"
#endif

/* Implements EAAR_PN0034_FR_0055 */
#if (WDG_59_DRIVERA_SW_MAJOR_VERSION != WDG_59_DRIVERA_C_SW_MAJOR_VERSION)
  #error "Wdg_59_DriverA.c : Mismatch in Software Major Version"
#endif

#if (WDG_59_DRIVERA_SW_MINOR_VERSION != WDG_59_DRIVERA_C_SW_MINOR_VERSION)
  #error "Wdg_59_DriverA.c : Mismatch in Software Minor Version"
#endif

/*******************************************************************************
**                      Global Data                                           **
*******************************************************************************/

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
/* Reference     : Look for MISRA Violation: START Msg(4:0303)-1 and          */
/*                 END Msg(4:0303)-1 tags in the code.                        */
/******************************************************************************/
/* 2.  MISRA C RULE VIOLATION:                                                */
/* Message       : (4:2982)This assignment is redundant. The value of this    */
/*                  object is never used before being modified.               */
/* Rule          : MISRA-C:2004 Rule 21.1                                     */
/* Justification : The variable needs to be initialized before using it.      */
/* Verification  : However, part of the code is verified manually and it is   */
/*                 not having any impact.                                     */
/* Reference     : Look for MISRA Violation START Msg(4:2982)-2 and           */
/*                 END Msg(4:2982)-2 tags in the code.                        */
/*******************************************************************************
**                         QAC Warning                                        **
*******************************************************************************/
/* 1. QAC Warning:                                                            */
/* Message       : (2:3227) The value of this function parameter is never     */
/*                 modified. It could be declared with the 'const' type       */
/*                 Qualifier.                                                 */
/* Justification : The function parameters of AUTOSAR  and vendor             */
/*                 specific Api's cannot be modified to be made as constant.  */
/*                 Also this is not a MISRA violation                         */
/* Verification  : However, part of the code is verified manually and it is   */
/*                 not having any impact.                                     */
/* Reference     : Look for QAC Warning START Msg(2:3227)-1 and               */
/*                 END Msg(2:3227)-1 tags in the code.                        */
/******************************************************************************/
/* 2. QAC Warning:                                                            */
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
/* 3. QAC Warning:                                                            */
/* Message       : (2:3892) The result of this cast is implicitly converted   */
/*                  to another type                                           */
/* Rule          : No Rule                                                    */
/* Justification : This implicit conversion is done to access the data from   */
/*                  the post build configuration                              */
/* Verification  : However, part of the code is verified manually and it is   */
/*                 not having any impact.Also this is not a MISRA violation   */
/* Reference     : Look for QAC Warning START Msg(2:3892)-3 and               */
/*                 END (2:3892)-3 tags in the code.                           */
/******************************************************************************/
/* 4. QAC WARNING:                                                            */
/* Message       : (2:3416) Logical operation performed on expression with    */
/*                 possible side effects.                                     */
/* Rule          : NA                                                         */
/* Justification : Logical operation accesses volatile object which is a      */
/*                 register access. All register addresses are generated with */
/*                 volatile qualifier. There is no impact on the functionality*/
/*                 due to this conditional check for mode change.             */
/* Verification  : However, part of the code is verified manually and it is   */
/*                 not having any impact.                                     */
/* Reference     : Look for QAC warning: START Msg(2:3416)-4 and              */
/*                 END Msg(2:3416)-4 tags in the code.                        */
/******************************************************************************/
/* 5. QAC Warning:                                                            */
/* Message       : (2:2814) Possible: Dereference of NULL pointer.            */
/* Justification : The Pointers generated using Post Build configurations may */
/*                  not be NULL.Also this is not a MISRA violation            */
/* Verification  : However, part of the code is verified manually and it is   */
/*                 not having any impact.                                     */
/* Reference     : Look for QAC Warning START Msg(2:2814)-5 and               */
/*                 END Msg(2:2814)-5 tags in the code.                        */
/*******************************************************************************
**                      Function Definitions                                  **
*******************************************************************************/
/* Implements EAAR_PN0034_FR_0063 */
/*******************************************************************************
** Function Name         : Wdg_59_DriverA_Init
**
** Service ID            : 0x00
**
** Description           : This service initialize the Watchdog driver and
**                         hardware.
**
** Sync/Async            : Synchronous
**
** Reentrancy            : Non-Reentrant
**
** Input Parameters      : ConfigPtr Pointer to the configuration
**
** InOut Parameters      : None
**
** Output Parameters     : None
**
** Return Parameter      : None
**
** Preconditions         : None
**
** Global Variables Used : Wdg_59_DriverA_GpConfigPtr,
**                         Wdg_59_DriverA_GulTiggerCounter,
**                         Wdg_59_DriverA_GddCurrentMode,
**                         Wdg_59_DriverA_GddDriverState.
**
** Functions Invoked     : Det_ReportError,
**                         WDG_59_DRIVERA_ENTER_CRITICAL_SECTION,
**                         WDG_59_DRIVERA_EXIT_CRITICAL_SECTION,
**                         Wdg_59_DriverA_TriggerFunc.
**                         Wdg_59_DriverA_InitDetCheck
**
** Registers Used        : IMRn, WDTAnMD,WDTAnEVAC,WDTAnWDTE,WDTAnREF
*******************************************************************************/
#define WDG_59_DRIVERA_START_SEC_PUBLIC_CODE
#include "MemMap.h"

/* Implements WDG106 */
/*
 * The pointer ConfigPtr is used as per the AUTOSAR requirement WDG106.
 * The Null check for the ConfigPtr has been done as part of
 * the DET check. In addition to that a data base check also carried out in the
 * code to make sure the validity of the ConfigPtr
 */
/* Implements WDG_ESDD_UD_013 */
/* Implements WDG_ESDD_UD_022 */
/* Implements WDG_ESDD_UD_025 */
/* Implements WDG_ESDD_UD_001 */
/* Implements WDG161,WDG172,WDG106,WDG001,WDG100,WDG101,WDG089,WDG090,WDG019 */
/* Implements WDG051,WDG115_Conf,WDG130_Conf,WDG120_Conf */
/* Implements AR_PN0064_FR_0001,AR_PN0064_FR_0008,AR_PN0064_FR_0029 */
/* Implements AR_PN0064_FR_0010,EAAR_PN0034_FR_0067 */
/* Implements EAAR_PN0034_NR_0020,EAAR_PN0034_FR_0025,EAAR_PN0034_FSR_0001 */
/* Implements EAAR_PN0034_FSR_0002,EAAR_PN0034_FSR_0003,EAAR_PN0034_FSR_0004 */
/* QAC Warning START Msg(2:3227)-1 */
FUNC(void, WDG_59_DRIVERA_PUBLIC_CODE) Wdg_59_DriverA_Init
(P2CONST(Wdg_59_DriverA_ConfigType, AUTOMATIC, WDG_59_DRIVERA_APPL_CONST)
  ConfigPtr)
/* END Msg(2:3227)-1 */
{
  /* Implements WDG065 */
  #if (STD_ON  == WDG_59_DRIVERA_DEV_ERROR_DETECT )
  /* Implements WDG089 */

  /* Implements WDG_ESDD_UD_009 */
  /* Implements EAAR_PN0034_FR_0064 */
  /* Report Error to DET, if the config pointer value is NULL */
  if (NULL_PTR == ConfigPtr)
  {
    /* Report Error to DET */
    /* Implements EAAR_PN0034_FR_0064 */
    (void)Det_ReportError(WDG_59_DRIVERA_MODULE_ID, WDG_59_DRIVERA_INSTANCE_ID,
                 WDG_59_DRIVERA_INIT_SID, WDG_59_DRIVERA_E_PARAM_POINTER);
  }
  /* Implements WDG_ESDD_UD_009 */
  /* Implements WDG_ESDD_UD_023 */
  /* QAC warning: START Msg(2:3416)-4 */
  else if (E_NOT_OK == Wdg_59_DriverA_InitDetCheck(ConfigPtr))
  /* END Msg(2:3416)-4 */
  {
      /* Implements WDG111 */
      /* Report Error to DET */
     (void)Det_ReportError(WDG_59_DRIVERA_MODULE_ID, WDG_59_DRIVERA_INSTANCE_ID,
             WDG_59_DRIVERA_INIT_SID, WDG_59_DRIVERA_E_PARAM_CONFIG);
  }
  else
  #endif /* (STD_ON  == WDG_59_DRIVERA_DEV_ERROR_DETECT ) */
  {
    /* QAC Warning START Msg(2:2814)-5 */
    /* Check whether the existing database is correct */
    if (WDG_59_DRIVERA_DBTOC_VALUE == (ConfigPtr->ulStartOfDbToc))
    /* END Msg(2:2814)-5 */
    {
      /*
       * The ConfigPtr shall hold the address of the  Structure for Watchdog
       * Driver Init configuration. The same is  assigned to the global pointer
       * Wdg_59_DriverA_GpConfigPtr which is declared as pointer to constant
       * and hence its values shall not be further modified by other API's
       */
      /* Assign the config pointer value to global pointer */
      Wdg_59_DriverA_GpConfigPtr = ConfigPtr;

      /* Implements WDG040 */
      /* Check if critical section protection is required */
      /* Implements AR_PN0064_FR_0052 */
      #if (WDG_59_DRIVERA_CRITICAL_SECTION_PROTECTION == STD_ON)
      WDG_59_DRIVERA_ENTER_CRITICAL_SECTION
                                        (WDG_59_DRIVERA_MODE_SWITCH_PROTECTION);
      #endif

      /* Implements WDG_ESDD_UD_008 */
      /* Implements WDG_ESDD_UD_007 */
      /* Implements WDG_ESDD_UD_020 */
      /* Implements WDG_ESDD_UD_021 */
      /* MISRA Violation: START Msg(4:0303)-1 */
      /* Enable the 75 percent interrupt output */
      WDG_59_DRIVERA_ENB_INTWDT_INT;
      /* Enable the interrupt vector table mode */
      WDG_59_DRIVERA_ENB_INTVECTAB_MODE;
      /* END Msg(4:0303)-1 */
      /* Check if critical section protection is required */
      /* Implements AR_PN0064_FR_0052 */
      #if (STD_ON  == WDG_59_DRIVERA_CRITICAL_SECTION_PROTECTION )
      WDG_59_DRIVERA_EXIT_CRITICAL_SECTION
                                        (WDG_59_DRIVERA_MODE_SWITCH_PROTECTION);
      #endif

      /* Check whether Watchdog disable is allowed */
      /* Implements WDG116_Conf */
      #if (STD_ON  == WDG_59_DRIVERA_DISABLE_ALLOWED )
      /* To check whether the default mode is not OFF mode */
      /* QAC Warning START Msg(2:2814)-5 */
      if (WDGIF_OFF_MODE != Wdg_59_DriverA_GpConfigPtr->ddWdtamdDefaultMode)
      /* END Msg(2:2814)-5 */
      #endif /* #if (STD_ON  == WDG_59_DRIVERA_DISABLE_ALLOWED ) */
      {
        /* Check if critical section protection is required */
        /* Implements AR_PN0064_FR_0052 */
        #if (STD_ON  == WDG_59_DRIVERA_CRITICAL_SECTION_PROTECTION )
        WDG_59_DRIVERA_ENTER_CRITICAL_SECTION
                                        (WDG_59_DRIVERA_MODE_SWITCH_PROTECTION);
        #endif
        /* Implements WDG101,WDG001 */
        /* Implements WDG_ESDD_UD_008 */
        /* Implements WDG_ESDD_UD_007 */
        /* Implements WDG_ESDD_UD_030 */
        /* Implements WDG_ESDD_UD_017 */
        /* Set Default mode value to Mode register */
       /* QAC Warning START Msg(2:3892)-3 */
       /* QAC Warning START Msg(2:2814)-5 */
       WDG_59_DRIVERA_REG_WRITE(Wdta_BaseAddress[WDG_59_DRIVERA_INDEX]->MD,
        (Wdg_59_DriverA_GpConfigPtr->ucWdtamdDefaultValue |
         (Wdta_BaseAddress[WDG_59_DRIVERA_INDEX]->MD &
           WDG_59_DRIVERA_75INTERRUPT_MASK)))
      /* END Msg(2:2814)-5 */
      /* END Msg(2:3892)-3 */
        /* Implements WDG_ESDD_UD_033 */
        /* Implements WDG_ESDD_UD_018 */
        /* Implements WDG_ESDD_UD_027 */
       WDG_59_DRIVERA_REG_WRITE_VERIFY_INIT
       (&(Wdta_BaseAddress[WDG_59_DRIVERA_INDEX]->MD),
        ((Wdg_59_DriverA_GpConfigPtr->ucWdtamdDefaultValue) |
        (Wdta_BaseAddress[WDG_59_DRIVERA_INDEX]->MD &
         WDG_59_DRIVERA_75INTERRUPT_MASK)),
         WDG_59_DRIVERA_WDTAMD_MASK, WDG_59_DRIVERA_INIT_API_ID)

        /* END Msg(4:0303)-1 */

        /* Check if critical section protection is required */
        /* Implements WDG040 */
        /* Implements AR_PN0064_FR_0052 */
        #if (STD_ON  == WDG_59_DRIVERA_CRITICAL_SECTION_PROTECTION )
        WDG_59_DRIVERA_EXIT_CRITICAL_SECTION
                                        (WDG_59_DRIVERA_MODE_SWITCH_PROTECTION);
        #endif

        /* Implements WDG_ESDD_UD_026 */
        /* Set the Initial trigger counter value */
        Wdg_59_DriverA_GulTiggerCounter = \
                     Wdg_59_DriverA_GpConfigPtr->ulInitTimerCountValue;

        /* Call the Trigger Function which restarts the Watchdog hardware */
        Wdg_59_DriverA_TriggerFunc(WDG_59_DRIVERA_INIT_API_ID);
      }
      /* Check whether Watchdog disable is allowed */
      /* Implements WDG116_Conf */
      #if (STD_ON  == WDG_59_DRIVERA_DISABLE_ALLOWED )
      else
      {
        /* No action required */
      }
      #endif /* #if (STD_ON  == WDG_59_DRIVERA_DISABLE_ALLOWED ) */
      /* Set current mode */
      Wdg_59_DriverA_GddCurrentMode = \
                              Wdg_59_DriverA_GpConfigPtr->ddWdtamdDefaultMode;

      /* Check if WDG_59_DRIVERA_DEV_ERROR_DETECT is enabled */
      #if (STD_ON  == WDG_59_DRIVERA_DEV_ERROR_DETECT )
      /* Implements WDG019 */
      /* Implements WDG_ESDD_UD_029 */
      /* Set the state of Watchdog as idle */
      Wdg_59_DriverA_GddDriverState = WDG_59_DRIVERA_IDLE;
      #endif
    } /* end if (WDG_59_DRIVERA_DBTOC_VALUE == (ConfigPtr->ulStartOfDbToc)) */
    /* Implements WDG_ESDD_UD_009 */
    /* Implements WDG_ESDD_UD_023 */
    else
    {
      #if (STD_ON  == WDG_59_DRIVERA_DEV_ERROR_DETECT )
      /* Implements WDG090 */
      /* Report Error to DET */
      (void)Det_ReportError(WDG_59_DRIVERA_MODULE_ID,
                WDG_59_DRIVERA_INSTANCE_ID, WDG_59_DRIVERA_INIT_SID,
                WDG_59_DRIVERA_E_INVALID_DATABASE);
      #endif
    } /* End of Check to check database */
  }
}

#define WDG_59_DRIVERA_STOP_SEC_PUBLIC_CODE
#include "MemMap.h"

/*******************************************************************************
** Function Name         : Wdg_59_DriverA_SetMode
**
** Service ID            : 0x01
**
** Description           : This service change the mode of the Watchdog timer
**
** Sync/Async            : Synchronous
**
** Re-entrancy           : Non-Reentrant
**
** Input Parameters      : WdgIf_ModeType  Mode
**
** InOut Parameters      : None
**
** Output Parameters     : None
**
** Return Parameter      : Std_ReturnType E_OK or E_NOT_OK
**
** Preconditions         : Wdg_59_DriverA_Init must be called before this
**                         function.
**
** Global Variables Used : Wdg_59_DriverA_GddDriverState,
**                         Wdg_59_DriverA_GddCurrentMode,
**                         Wdg_59_DriverA_GulTiggerCounter,
**                         Wdg_59_DriverA_GpConfigPtr
**
** Functions Invoked     : Det_ReportError,
**                         Dem_ReportErrorStatus,
**                         WDG_59_DRIVERA_ENTER_CRITICAL_SECTION,
**                         WDG_59_DRIVERA_EXIT_CRITICAL_SECTION,
**                         Wdg_59_DriverA_TriggerFunc.
**
** Registers Used        : WDTAnMD,WDTAnEVAC,WDTAnWDTE,WDTAnREF
*******************************************************************************/
#define WDG_59_DRIVERA_START_SEC_PUBLIC_CODE
#include "MemMap.h"

/* Implements WDG031,WDG107,WDG160,WDG102 */
/* Implements WDG_ESDD_UD_013 */
/* Implements WDG_ESDD_UD_025 */
/* Implements WDG_ESDD_UD_026 */
/* Implements WDG_ESDD_UD_002 */
/* Implements WDG172,WDG145,WDG103,WDG016,WDG026,WDG091,WDG092,WDG017,WDG018 */
/* Implements WDG150_Conf,WDG149_Conf,WDG115_Conf,WDG121_Conf,WDG123_Conf  */
/* Implements AR_PN0064_FR_0001,AR_PN0064_FR_0008,AR_PN0064_FR_0029 */
/* Implements AR_PN0064_FR_0010,AR_PN0064_FR_0005 */
/* Implements AR_PN0064_FR_0057, WDG055 */
/* Implements EAAR_PN0034_FSR_0002,EAAR_PN0034_FSR_0003,EAAR_PN0034_FSR_0004 */

/* QAC Warning START Msg(2:3227)-1 */
FUNC(Std_ReturnType,  WDG_59_DRIVERA_PUBLIC_CODE) Wdg_59_DriverA_SetMode
  (WdgIf_ModeType Mode)
/* END Msg(2:3227)-1 */
{
  /* Implements WDG105 */
  /* Variable to store the return value */
  Std_ReturnType LenReturnValue;

  /* MISRA Violation START Msg(4:2982)-2 */
  /* Initialize the return value */
  LenReturnValue = E_OK;
  /* END Msg(4:2982)-2 */

  /* Report Error to DET, if state of Watchdog is not idle */
  #if (STD_ON  == WDG_59_DRIVERA_DEV_ERROR_DETECT )
  /* Implements WDG017 */
  /* Implements WDG_ESDD_UD_009 */
  /* Report Error to DET, if state of Watchdog is not idle */
  LenReturnValue = Wdg_59_DriverA_SetModeDetCheck(Mode);
  /* Check if any DET error was reported */
  if (E_OK == LenReturnValue)
  #endif /* #if (STD_ON  == WDG_59_DRIVERA_DEV_ERROR_DETECT ) */
  {
    #if (STD_ON  == WDG_59_DRIVERA_DEV_ERROR_DETECT )
    /* Implements WDG018 */
    /* Implements WDG_ESDD_UD_029 */
    /* Set the state of Watchdog as busy */
    Wdg_59_DriverA_GddDriverState = WDG_59_DRIVERA_BUSY;
    #endif

    /* Check for request mode is OFF */
    if ((WDGIF_OFF_MODE != Wdg_59_DriverA_GddCurrentMode) &&
                                                     (WDGIF_OFF_MODE == Mode))
    {
      /* Implements WDG026,WDG025,WDG012 */
      /* Implements WDG_ESDD_UD_035 */
      /* Implements WDG_ESDD_UD_027 */
      /* Check whether error reporting is allowed */
      #if (STD_ON == WDG_59_DRIVERA_E_DISABLE_REJECTED_REPORTING)
      /* Report Error to DEM */
      Dem_ReportErrorStatus(WDG_59_DRIVERA_E_DISABLE_REJECTED,
                                                       DEM_EVENT_STATUS_FAILED);
      #endif
      /* Set Return Value as E_NOT_OK */
      LenReturnValue = E_NOT_OK;
    }
    /* Requested mode and current mode are different */
    else if ((Mode != Wdg_59_DriverA_GddCurrentMode) && (WDGIF_OFF_MODE !=
                                              Wdg_59_DriverA_GddCurrentMode))
    {
      /* Implements WDG012,WDG016,WDG173,WDG013 */
      /* Implements WDG_ESDD_UD_034 */
      /* Implements WDG_ESDD_UD_028 */
      /* Check whether error reporting is allowed */
      #if (STD_ON == WDG_59_DRIVERA_E_MODE_FAILED_REPORTING)
      /* Report Error to DEM */
      Dem_ReportErrorStatus(WDG_59_DRIVERA_E_MODE_FAILED,
                                                       DEM_EVENT_STATUS_FAILED);
      #endif
      /* Set Return Value as E_NOT_OK */
      LenReturnValue = E_NOT_OK;
    }
    /* Check whether Watchdog disable is allowed */
    /* Implements WDG116_Conf */
    #if (STD_ON  == WDG_59_DRIVERA_DISABLE_ALLOWED )
    /* Switching the Watchdog Mode from OFF to SLOW or FAST mode */
    else if ((WDGIF_OFF_MODE == Wdg_59_DriverA_GddCurrentMode) &&
                                                     (WDGIF_OFF_MODE != Mode))
    {

      /* Switching the Watchdog Mode from OFF to SLOW */
      if (WDGIF_SLOW_MODE == Mode)
      {
        /* MISRA Violation: START Msg(4:0303)-1 */
        /* Set configured slow mode value to Mode register */
        /* Check if critical section protection is required */
        /* Implements WDG040 */
        /* Implements AR_PN0064_FR_0052 */
        #if (STD_ON  == WDG_59_DRIVERA_CRITICAL_SECTION_PROTECTION )
        WDG_59_DRIVERA_ENTER_CRITICAL_SECTION
                                        (WDG_59_DRIVERA_MODE_SWITCH_PROTECTION);
        #endif
        /* Implements WDG_ESDD_UD_008 */
        /* Implements WDG_ESDD_UD_007 */
        /* Implements WDG_ESDD_UD_022 */
        /* Implements WDG_ESDD_UD_017 */
        /* Set the register write and write verify check */
        /* QAC Warning START Msg(2:3892)-3 */
        /* QAC Warning START Msg(2:2814)-5 */
        /* MISRA Violation: START Msg(4:0303)-1 */
         WDG_59_DRIVERA_REG_WRITE(Wdta_BaseAddress[WDG_59_DRIVERA_INDEX]->MD,
        (Wdg_59_DriverA_GpConfigPtr->ucWdtamdSlowValue |
        (Wdta_BaseAddress[WDG_59_DRIVERA_INDEX]->MD &
         WDG_59_DRIVERA_75INTERRUPT_MASK)))
        /* END Msg(2:2814)-5 */

        /* Implements WDG_ESDD_UD_018 */
        /* Implements WDG_ESDD_UD_022 */
        /* Implements WDG_ESDD_UD_027 */
        WDG_59_DRIVERA_REG_WRITE_VERIFY_RUNTIME
        (&(Wdta_BaseAddress[WDG_59_DRIVERA_INDEX]->MD),
        (Wdg_59_DriverA_GpConfigPtr->ucWdtamdSlowValue |
        (Wdta_BaseAddress[WDG_59_DRIVERA_INDEX]->MD &
         WDG_59_DRIVERA_75INTERRUPT_MASK)),
        WDG_59_DRIVERA_WDTAMD_MASK,WDG_59_DRIVERA_SETMODE_API_ID)
        /* END Msg(2:3892)-3 */
        /* Check if critical section protection is required */
        /* END Msg(4:0303)-1 */
        /* Implements WDG040 */
        /* Implements AR_PN0064_FR_0052 */
        #if (STD_ON == WDG_59_DRIVERA_CRITICAL_SECTION_PROTECTION )
        WDG_59_DRIVERA_EXIT_CRITICAL_SECTION
                                        (WDG_59_DRIVERA_MODE_SWITCH_PROTECTION);
        #endif

        /* Implements WDG145 */
        /* Implements AR_PN0064_FR_0052 */
        #if (STD_ON  == WDG_59_DRIVERA_CRITICAL_SECTION_PROTECTION )
        WDG_59_DRIVERA_ENTER_CRITICAL_SECTION(WDG_59_DRIVERA_TRIGG_PROTECTION);
        #endif
        /* Set the trigger counter value considering the slow mode */
        if ((uint32)WDG_59_DRIVERA_ZERO !=
                                    Wdg_59_DriverA_GpConfigPtr->ulSlowTimeValue)
        {
        /* Set the trigger counter value considering the slow mode
           * multiply by thousand as ulSlowTimeValue is in microseconds */
          /* Implements WDG_ESDD_UD_008 */
          /* Implements WDG_ESDD_UD_026 */
          Wdg_59_DriverA_GulTiggerCounter =
           ((uint32)(WDG_59_DRIVERA_INITIAL_TIMEOUT * WDG_59_DRIVERA_THOUSAND) /
                                   Wdg_59_DriverA_GpConfigPtr->ulSlowTimeValue);
        }
        else
        {
            Wdg_59_DriverA_GulTiggerCounter = WDG_59_DRIVERA_COUNTER_ZERO;
        }

        /* Check if critical section protection is required */
        /* Implements AR_PN0064_FR_0052 */
        #if (STD_ON  == WDG_59_DRIVERA_CRITICAL_SECTION_PROTECTION )
        WDG_59_DRIVERA_EXIT_CRITICAL_SECTION(WDG_59_DRIVERA_TRIGG_PROTECTION);
        #endif
      }
      /* Switching the Watchdog Mode from OFF to FAST */
      else
      {
        /* MISRA Violation: START Msg(4:0303)-1 */
        /* Check if critical section protection is required */
        /* Implements AR_PN0064_FR_0052 */
        #if (STD_ON == WDG_59_DRIVERA_CRITICAL_SECTION_PROTECTION )
        WDG_59_DRIVERA_ENTER_CRITICAL_SECTION
                                        (WDG_59_DRIVERA_MODE_SWITCH_PROTECTION);
        #endif

        /* Implements WDG_ESDD_UD_008 */
        /* Implements WDG_ESDD_UD_007 */
        /* Implements WDG_ESDD_UD_022 */
        /* Implements WDG_ESDD_UD_017 */
        /* Set configured fast mode value to Mode register */
        /* QAC Warning START Msg(2:3892)-3 */
        WDG_59_DRIVERA_REG_WRITE(Wdta_BaseAddress[WDG_59_DRIVERA_INDEX]->MD,
        (Wdg_59_DriverA_GpConfigPtr->ucWdtamdFastValue |
        (Wdta_BaseAddress[WDG_59_DRIVERA_INDEX]->MD &
         WDG_59_DRIVERA_75INTERRUPT_MASK)))

        /* Implements WDG_ESDD_UD_018 */
        /* Implements WDG_ESDD_UD_027 */
        WDG_59_DRIVERA_REG_WRITE_VERIFY_RUNTIME
        (&(Wdta_BaseAddress[WDG_59_DRIVERA_INDEX]->MD),
        (Wdg_59_DriverA_GpConfigPtr->ucWdtamdFastValue |
        (Wdta_BaseAddress[WDG_59_DRIVERA_INDEX]->MD &
         WDG_59_DRIVERA_75INTERRUPT_MASK)),
          WDG_59_DRIVERA_WDTAMD_MASK,WDG_59_DRIVERA_SETMODE_API_ID)
        /* END Msg(2:3892)-3 */
        /* Check if critical section protection is required */
        /* Implements AR_PN0064_FR_0052 */
        #if (STD_ON == WDG_59_DRIVERA_CRITICAL_SECTION_PROTECTION )
        WDG_59_DRIVERA_EXIT_CRITICAL_SECTION
                                        (WDG_59_DRIVERA_MODE_SWITCH_PROTECTION);
        #endif
        /* END Msg(4:0303)-1 */

        /* Check if critical section protection is required */
        /* Implements AR_PN0064_FR_0052 */
        #if (STD_ON  == WDG_59_DRIVERA_CRITICAL_SECTION_PROTECTION )
        WDG_59_DRIVERA_ENTER_CRITICAL_SECTION(WDG_59_DRIVERA_TRIGG_PROTECTION);
        #endif
        if ((uint32)WDG_59_DRIVERA_ZERO !=
                                    Wdg_59_DriverA_GpConfigPtr->ulFastTimeValue)
        {
          /* Set the trigger counter value considering the fast mode
           * Multiply by thousand as ulFastTimeValue is in microseconds */
          /* Implements WDG_ESDD_UD_008 */
          /* Implements WDG_ESDD_UD_022 */
          /* Implements WDG_ESDD_UD_026 */
          Wdg_59_DriverA_GulTiggerCounter =
           ((uint32)(WDG_59_DRIVERA_INITIAL_TIMEOUT * WDG_59_DRIVERA_THOUSAND) /
                                   Wdg_59_DriverA_GpConfigPtr->ulFastTimeValue);
        }
        else
        {
          Wdg_59_DriverA_GulTiggerCounter = WDG_59_DRIVERA_COUNTER_ZERO;
        }

        /* Check if critical section protection is required */
        /* Implements AR_PN0064_FR_0052 */
        #if (STD_ON  == WDG_59_DRIVERA_CRITICAL_SECTION_PROTECTION )
        WDG_59_DRIVERA_EXIT_CRITICAL_SECTION(WDG_59_DRIVERA_TRIGG_PROTECTION);
        #endif
      }
      /* Check if critical section protection is required */
      /* Implements AR_PN0064_FR_0052 */
      #if (STD_ON == WDG_59_DRIVERA_CRITICAL_SECTION_PROTECTION )
      WDG_59_DRIVERA_ENTER_CRITICAL_SECTION
                                        (WDG_59_DRIVERA_MODE_SWITCH_PROTECTION);
      #endif


      /* Set the current mode */
      Wdg_59_DriverA_GddCurrentMode = Mode;

      /* Check if critical section protection is required */
      /* Implements AR_PN0064_FR_0052 */
      #if (STD_ON == WDG_59_DRIVERA_CRITICAL_SECTION_PROTECTION )
      WDG_59_DRIVERA_EXIT_CRITICAL_SECTION
                                        (WDG_59_DRIVERA_MODE_SWITCH_PROTECTION);
      #endif

      LenReturnValue = E_OK;


      /* Call the Trigger Function which restarts the Watchdog hardware */
      Wdg_59_DriverA_TriggerFunc(WDG_59_DRIVERA_SETMODE_API_ID);
    } /* end else if (Wdg_59_DriverA_GddCurrentMode == WDGIF_OFF_MODE) */
    #endif /* #if (STD_ON == WDG_59_DRIVERA_DISABLE_ALLOWED ) */
    else
    {
      /* No action required */
    }
    /* Implements WDG_ESDD_UD_029 */
    /* Set Watchdog Driver State to IDLE after Mode Switch operation */
    #if (STD_ON == WDG_59_DRIVERA_DEV_ERROR_DETECT )
    /* Set the state of Watchdog as idle */
    Wdg_59_DriverA_GddDriverState = WDG_59_DRIVERA_IDLE;
    #endif  /* (STD_ON == WDG_59_DRIVERA_DEV_ERROR_DETECT ) */
  } /* if (E_OK == LenReturnValue) */
  #if (STD_ON == WDG_59_DRIVERA_DEV_ERROR_DETECT )
  else
  {
    /* No action required */
  }
  #endif /* #if (STD_ON == WDG_59_DRIVERA_DEV_ERROR_DETECT ) */
  return(LenReturnValue);
}

#define WDG_59_DRIVERA_STOP_SEC_PUBLIC_CODE
#include "MemMap.h"

/*******************************************************************************
** Function Name         : Wdg_59_DriverA_SetTriggerCondition
**
** Service ID            : 0x03
**
** Description           : This service is used to initialize the trigger
**                         counter.
**
** Sync/Async            : Synchronous
**
** Re-entrancy           : Non-Reentrant
**
** Input Parameters      : uint16 Luctimeout
**
** InOut Parameters      : None
**
** Output Parameters     : None
**
** Return Parameter      : None
**
** Preconditions         : Wdg_59_DriverAInit must be called before this
**                         function.
**
** Global Variables Used : Wdg_59_DriverA_GddDriverState,
**                         Wdg_59_DriverA_GddCurrentMode,
**                         Wdg_59_DriverA_GulTiggerCounter
**                         Wdg_59_DriverA_GpConfigPtr.
**
** Functions Invoked     : Det_ReportError,
**                         WDG_59_DRIVERA_ENTER_CRITICAL_SECTION,
**                         WDG_59_DRIVERA_EXIT_CRITICAL_SECTION.
**
** Registers Used        : None
*******************************************************************************/
#define WDG_59_DRIVERA_START_SEC_PUBLIC_CODE
#include "MemMap.h"

/* QAC Warning START Msg(2:3227)-1 */
/* Implements WDG_ESDD_UD_025 */
/* Implements WDG_ESDD_UD_026 */
/* Implements WDG_ESDD_UD_003 */
/* Implements WDG172,WDG155,WDG136,WDG138,WDG139,WDG140,WDG146,WDG131_Conf */
/* Implements AR_PN0064_FR_0001,AR_PN0064_FR_0008,AR_PN0064_FR_0032 */
FUNC(void, WDG_59_DRIVERA_PUBLIC_CODE) Wdg_59_DriverA_SetTriggerCondition
                                                            (uint16 Luctimeout)

/* END Msg(2:3227)-1 */{
  /* Check if DET is enabled */
  #if (STD_ON  == WDG_59_DRIVERA_DEV_ERROR_DETECT )
  /* Variable to store the return value */
  Std_ReturnType LenReturnValue;
  /* Initialize the return value */
  LenReturnValue = E_OK;

  /* Implements WDG_ESDD_UD_009 */
  /* Implements WDG_ESDD_UD_023 */
  /* Implements WDG_ESDD_UD_029 */
  /* Check whether Watchdog Driver is initialized */
  /* QAC Warning: START Msg(2:3416)-4 */
  if ((WDG_59_DRIVERA_IDLE != Wdg_59_DriverA_GddDriverState) ||
                             (WDGIF_OFF_MODE == Wdg_59_DriverA_GddCurrentMode))
  {
  /* End Msg (2:3416)-4 */
    /* Report to DET, if Watchdog is not in idle state */
    /* Implements AR_PN0064_FR_0036 */
    (void)Det_ReportError(WDG_59_DRIVERA_MODULE_ID,
            WDG_59_DRIVERA_INSTANCE_ID, WDG_59_DRIVERA_SETTRIGGERCONDITION_SID,
            WDG_59_DRIVERA_E_DRIVER_STATE);
    /* Set Return Value as E_NOT_OK */
    LenReturnValue = E_NOT_OK;
  }
  else
  {
    /* No action required */
  }
  /* Implements WDG_ESDD_UD_008 */
  /*
   * Check whether timeout value requested is more than the maximum timeout
   * value configured
   */
   /* Implements WDG_ESDD_UD_023 */
   /* Implements WDG_ESDD_UD_024 */
   /* Implements WDG_ESDD_UD_019 */
  if (WDG_59_DRIVERA_MAXIMUM_TIMEOUT < Luctimeout)
  {
    /* Implements WDG146 */
    /* Report to DET, if Watchdog is not in idle state */
    (void)Det_ReportError(WDG_59_DRIVERA_MODULE_ID,
            WDG_59_DRIVERA_INSTANCE_ID, WDG_59_DRIVERA_SETTRIGGERCONDITION_SID,
            WDG_59_DRIVERA_E_PARAM_TIMEOUT);
    /* Set Return Value as E_NOT_OK */
    LenReturnValue = E_NOT_OK;
  }
  else
  {
    /* No action required */
  }
  /* Check if any DET error was reported */
  if (E_OK == LenReturnValue)
  #endif
  {
    /* Implements WDG_ESDD_UD_013 */
    /* Check if critical section protection is required */
    /* Implements AR_PN0064_FR_0052 */
    #if (STD_ON  == WDG_59_DRIVERA_CRITICAL_SECTION_PROTECTION )
    WDG_59_DRIVERA_ENTER_CRITICAL_SECTION(WDG_59_DRIVERA_TRIGG_PROTECTION);
    #endif

    /* Check whether Watchdog disable is allowed */
    /* Implements WDG116_Conf */
    #if (STD_ON  == WDG_59_DRIVERA_DISABLE_ALLOWED )
    /* Check if the current mode is slow */
    if (WDGIF_SLOW_MODE == Wdg_59_DriverA_GddCurrentMode)
    {
      /* QAC Warning START Msg(2:2814)-5 */
      if ((uint32)WDG_59_DRIVERA_ZERO !=
                                    Wdg_59_DriverA_GpConfigPtr->ulSlowTimeValue)
      /* END Msg(2:2814)-5 */
      {
         /* Set the trigger counter value considering the slow mode
          * Multiply by thousand as ulSlowTimeValue is in microseconds */
         /* Implements WDG_ESDD_UD_008 */
         /* Implements WDG_ESDD_UD_022 */
         Wdg_59_DriverA_GulTiggerCounter =
                      (((uint32)(Luctimeout) * (uint32)WDG_59_DRIVERA_THOUSAND))
                                 /(Wdg_59_DriverA_GpConfigPtr->ulSlowTimeValue);
       }
       else
       {
         Wdg_59_DriverA_GulTiggerCounter = WDG_59_DRIVERA_COUNTER_ZERO;
       }
    }
    else if (WDGIF_FAST_MODE == Wdg_59_DriverA_GddCurrentMode)
    {
      if ((uint32)WDG_59_DRIVERA_ZERO !=
                                    Wdg_59_DriverA_GpConfigPtr->ulFastTimeValue)
      {
        /* Set the trigger counter value considering the fast mode
           * Multiply by thousand as ulFastTimeValue is in microseconds
           */
          /* Implements WDG_ESDD_UD_008 */
          /* Implements WDG_ESDD_UD_022 */

      Wdg_59_DriverA_GulTiggerCounter =
                      (((uint32)(Luctimeout) * (uint32)WDG_59_DRIVERA_THOUSAND))
                                 /(Wdg_59_DriverA_GpConfigPtr->ulFastTimeValue);
      }
      else
      {
        Wdg_59_DriverA_GulTiggerCounter = WDG_59_DRIVERA_COUNTER_ZERO;
      }

    }
    else
    {
      /* The trigger counter need not be set for off mode */
    }
    #else /* #if (STD_ON  == WDG_59_DRIVERA_DISABLE_ALLOWED ) */
    /* QAC Warning START Msg(2:2814)-5 */
    if ((uint32)WDG_59_DRIVERA_ZERO !=
                                 Wdg_59_DriverA_GpConfigPtr->ulDefaultTimeValue)
    /* END Msg(2:2814)-5 */
    {
       /* Set the trigger counter value considering the default mode */
        Wdg_59_DriverA_GulTiggerCounter =
                      (((uint32)(Luctimeout) * (uint32)WDG_59_DRIVERA_THOUSAND))
                              /(Wdg_59_DriverA_GpConfigPtr->ulDefaultTimeValue);
    }
    else
    {
        Wdg_59_DriverA_GulTiggerCounter = WDG_59_DRIVERA_COUNTER_ZERO;
    }
    #endif /* #if (STD_OFF == WDG_59_DRIVERA_DISABLE_ALLOWED ) */

    /* Implements WDG_ESDD_UD_013 */
    /* Check if critical section protection is required */
    /* Implements AR_PN0064_FR_0052 */
    #if (STD_ON  == WDG_59_DRIVERA_CRITICAL_SECTION_PROTECTION )
    WDG_59_DRIVERA_EXIT_CRITICAL_SECTION(WDG_59_DRIVERA_TRIGG_PROTECTION);
    #endif
  }
  /* Check if DET is enabled */
  #if (STD_ON  == WDG_59_DRIVERA_DEV_ERROR_DETECT )
  else
  {
    /* No action required */
  }
  #endif
}
#define WDG_59_DRIVERA_STOP_SEC_PUBLIC_CODE
#include "MemMap.h"

/*******************************************************************************
** Function Name         : Wdg_59_DriverA_GetVersionInfo
**
** Service ID            : 0x04
**
** Description           : This API returns the version information of Watchdog
**                         driver component.
**
** Sync/Async            : Synchronous
**
** Re-entrancy           : Reentrant
**
** Input Parameters      : None
**
** InOut Parameters      : None
**
** Output Parameters     : versioninfo
**
** Return parameter      : None
**
** Preconditions         : None
**
** Global Variables      : None
**
** Functions invoked     : Det_ReportError
**
** Registers Used        : None
**
*******************************************************************************/
#if (STD_ON == WDG_59_DRIVERA_VERSION_INFO_API )
#define WDG_59_DRIVERA_START_SEC_PUBLIC_CODE
#include "MemMap.h"
/*
 * The pointer versioninfo is used as per the AUTOSAR requirement WDG109.
 * The Null check for the versioninfo has been done as part of
 * the DET check.
 */

 /* Implements WDG_ESDD_UD_010 */
 /* Implements WDG_ESDD_UD_031 */
 /* Implements WDG172,WDG109,WDG067,WDG068,WDG099,WDG174,WDG119_Conf */
 /* Implements AR_PN0064_FR_0001,AR_PN0064_FR_0008 */
/* QAC Warning START Msg(2:3227)-1 */
FUNC(void, WDG_59_DRIVERA_PUBLIC_CODE) Wdg_59_DriverA_GetVersionInfo
(P2VAR(Std_VersionInfoType, AUTOMATIC, WDG_59_DRIVERA_APPL_DATA)versioninfo)

/* END Msg(2:3227)-1 */{
  #if (STD_ON == WDG_59_DRIVERA_DEV_ERROR_DETECT )
  /* Implements WDG_ESDD_UD_009 */
  /* Implements WDG_ESDD_UD_023 */
  /* Check if parameter passed is equal to Null pointer */
  if (NULL_PTR == versioninfo)
  {
    /* Report to DET  */
    (void)Det_ReportError(WDG_59_DRIVERA_MODULE_ID,
                          WDG_59_DRIVERA_INSTANCE_ID,
                          WDG_59_DRIVERA_GETVERSIONINFO_SID,
                          WDG_59_DRIVERA_E_PARAM_POINTER);
  }
  else
  #endif /* (STD_ON == WDG_59_DRIVERA_DEV_ERROR_DETECT ) */
  {
    /* Copy the vendor Id */
    (versioninfo)->vendorID = (uint16)WDG_59_DRIVERA_VENDOR_ID;
    /* Copy the module Id */
    (versioninfo)->moduleID = (uint16)WDG_59_DRIVERA_MODULE_ID;
    /* Copy Software Major Version */
    (versioninfo)->sw_major_version = WDG_59_DRIVERA_SW_MAJOR_VERSION;
    /* Copy Software Minor Version */
    (versioninfo)->sw_minor_version = WDG_59_DRIVERA_SW_MINOR_VERSION;
    /* Copy Software Patch Version */
    (versioninfo)->sw_patch_version = WDG_59_DRIVERA_SW_PATCH_VERSION;
  }
}
#define WDG_59_DRIVERA_STOP_SEC_PUBLIC_CODE
#include "MemMap.h"
#endif /* (STD_ON == WDG_59_DRIVERA_VERSION_INFO_API ) */
/*******************************************************************************
**                          End Of File                                       **
*******************************************************************************/
