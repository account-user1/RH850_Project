/*============================================================================*/
/* Project      = AUTOSAR Renesas X1x MCAL Components                         */
/* Module       = Wdg_59_DriverA_Private.c                                    */
/* $Revision: 366328 $                                                        */
/* $Date: 2017-02-21 17:44:10 +0000 (Tue, 21 Feb 2017) $                      */
/*============================================================================*/
/*                                  COPYRIGHT                                 */
/*============================================================================*/
/* Copyright(c) 2015-2017 Renesas Electronics Corporation                     */
/*============================================================================*/
/* Purpose:                                                                   */
/* Driver code of the Internal Watchdog Driver A Component                    */
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
 *                           1. As per ticket ARDAAAF-324, added read back
 *                              functionality for all registers.
 *                           2. Added the inclusion of Dem.h.
 *                           3. Copyright information updated.
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
 *                           5. As per ticket ARDAAAF-942,changed compiler
 *                              switch condition check format.
 */
/******************************************************************************/

/*******************************************************************************
**                     Include Section                                        **
*******************************************************************************/
/* Implements WDG061 */
/* Implements EAAR_PN0034_NR_0001,EAAR_PN0034_FR_0081,EAAR_PN0034_FR_0030 */
/* Implements EAAR_PN0034_FR_0019,EAAR_PN0034_FR_0023,EAAR_PN0034_NR_0045 */
/* Implements EAAR_PN0034_NR_0069, EAAR_PN0034_NR_0026 */

/* Included for type definitions and macros */
#include "Wdg_59_DriverA_PBTypes.h"
/* Header file inclusion */
#include "Wdg_59_DriverA_Private.h"
/* Implements AR_PN0064_FR_0052 */
#if (STD_ON  == WDG_59_DRIVERA_CRITICAL_SECTION_PROTECTION )
/* Included for the declaration of the critical section protection functions */
#include "SchM_Wdg_59_DriverA.h"
#endif
#if ( STD_ON == WDG_59_DRIVERA_DEV_ERROR_DETECT)
/* Included for the declaration of Det_ReportError() */
#include "Det.h"
#endif
/*******************************************************************************
**                        Version Information                                 **
*******************************************************************************/
/* AUTOSAR release version information */
#define WDG_59_DRIVERA_PRIVATE_C_AR_RELEASE_MAJOR_VERSION \
                                   WDG_59_DRIVERA_AR_RELEASE_MAJOR_VERSION_VALUE
#define WDG_59_DRIVERA_PRIVATE_C_AR_RELEASE_MINOR_VERSION \
                                   WDG_59_DRIVERA_AR_RELEASE_MINOR_VERSION_VALUE
#define WDG_59_DRIVERA_PRIVATE_C_AR_RELEASE_REVISION_VERSION \
                                WDG_59_DRIVERA_AR_RELEASE_REVISION_VERSION_VALUE

/* File version information */
#define WDG_59_DRIVERA_PRIVATE_C_SW_MAJOR_VERSION \
                                           WDG_59_DRIVERA_SW_MAJOR_VERSION_VALUE
#define WDG_59_DRIVERA_PRIVATE_C_SW_MINOR_VERSION \
                                           WDG_59_DRIVERA_SW_MINOR_VERSION_VALUE

/*******************************************************************************
**                      Version Check                                         **
*******************************************************************************/
#if (WDG_59_DRIVERA_PRIVATE_AR_RELEASE_MAJOR_VERSION != \
                              WDG_59_DRIVERA_PRIVATE_C_AR_RELEASE_MAJOR_VERSION)
  #error "Wdg_59_DriverA_Private.c : Mismatch in Release Major Version"
#endif

#if (WDG_59_DRIVERA_PRIVATE_AR_RELEASE_MINOR_VERSION != \
                              WDG_59_DRIVERA_PRIVATE_C_AR_RELEASE_MINOR_VERSION)
  #error "Wdg_59_DriverA_Private.c : Mismatch in Release Minor Version"
#endif

#if (WDG_59_DRIVERA_PRIVATE_AR_RELEASE_REVISION_VERSION != \
                           WDG_59_DRIVERA_PRIVATE_C_AR_RELEASE_REVISION_VERSION)
  #error "Wdg_59_DriverA_Private.c : Mismatch in Release Revision Version"
#endif

#if (WDG_59_DRIVERA_PRIVATE_SW_MAJOR_VERSION != \
                                     WDG_59_DRIVERA_PRIVATE_C_SW_MAJOR_VERSION)
  #error "Wdg_59_DriverA_Private.c : Mismatch in Software Major Version"
#endif

#if (WDG_59_DRIVERA_PRIVATE_SW_MINOR_VERSION != \
                                      WDG_59_DRIVERA_PRIVATE_C_SW_MINOR_VERSION)
  #error "Wdg_59_DriverA_Private.c : Mismatch in Software Minor Version"
#endif

/*******************************************************************************
**                      Global Data                                           **
*******************************************************************************/
/*******************************************************************************
**                      MISRA C Rule Violations                               **
*******************************************************************************/
/*******************************************************************************
**                                QAC WARNING                                 **
*******************************************************************************/
/* 1. QAC WARNING:                                                            */
/* Message       : (2:3227) The value of this function parameter is never     */
/*                 modified. It could be declared with the 'const' type       */
/*                 Qualifier.                                                 */
/* Rule          : MISRA-C:2004 Message 3227                                  */
/* Justification : The function parameters of AUTOSAR APIs cannot be modified */
/*                 to be made as constant.Also for the ease of understanding  */
/* Verification  : However, part of the code is verified manually and it is   */
/*                 not having any impact.                                     */
/* Reference     : Look for QAC Warning: START Msg(2:3227)-1 and              */
/*                 END Msg(2:3227)-1 tags in the code.                        */
/******************************************************************************/
/* 2. QAC WARNING:                                                            */
/* Message       : (2:3892) The result of this cast is implicitly converted to*/
/*                 another type.                                              */
/* Rule          : MISRA-C:2004 Message 3892                                  */
/*                 REFERENCE - ISO:C90-6.3.2.1 Semantics                      */
/* Justification : This is to get the value to pointer.                       */
/* Verification  : However, this part of the code is verified  manually and   */
/*                 it is not having any impact.                               */
/* Reference     : Look for QAC warning: START Msg(2:3892)-2 and              */
/*                 END Msg(2:3892)-2 tags in the code.                        */
/******************************************************************************/
/* 3. QAC WARNING:                                                            */
/* Message       :(2:0862) This #include MemMap.h directive is redundant.     */
/* Rule          : NA                                                         */
/* Justification : All the #include MemMap.h files contains C function        */
/*                 declarations or macro definitions to be shared between     */
/*                 several source files. This violation is an approved        */
/*                 exception without side effects.                            */
/* Verification  : However, part of the code is verified manually and it is   */
/*                 not having any impact.                                     */
/******************************************************************************/
/* 4. QAC WARNING:                                                            */
/* Message       : (2:2814) Possible: Dereference of NULL pointer.            */
/* Rule          : NA                                                         */
/* Justification : The Pointers generated by Post Build configurations shall  */
/*                  not be NULL.                                              */
/* Verification  : However, part of the code is verified manually and it is   */
/*                 not having any impact.                                     */
/* Reference     : Look for QAC warning: START Msg(2:2814)-4 and              */
/*                 END Msg(2:2814)-4 tags in the code.                        */
/******************************************************************************/
/* 5. QAC WARNING:                                                            */
/* Message       : (2:3206) The parameter 'uiApiId' is not used in this       */
/*                 function.                                                  */
/* Rule          : NA                                                         */
/* Justification : The  parameter is used to identify the source for WDG      */
/*                 trigger.                                                   */
/* Verification  : However, part of the code is verified manually and it is   */
/*                 not having any impact.                                     */
/* Reference     : Look for QAC warning: START Msg(2:3206)-5 and              */
/*                 END Msg(2:3206)-5 tags in the code.                        */
/******************************************************************************/
/* 6. QAC WARNING:                                                            */
/* Message       : (2:3416) Logical operation performed on expression with    */
/*                 possible side effects.                                     */
/* Rule          : NA                                                         */
/* Justification : Logical operation accesses volatile object which is a      */
/*                 global variable. All global varible modified in interrupt  */
/*                 context are declared as volatile qualifier. There is no   */
/*                 impact on the functionality due to this conditional check  */
/*                 for mode change.                                           */
/* Verification  : However, part of the code is verified manually and it is   */
/*                 not having any impact.                                     */
/* Reference     : Look for QAC warning: START Msg(2:3416)-6 and              */
/*                 END Msg(2:3416)-6 tags in the code.                        */
/******************************************************************************/
/*******************************************************************************
**                      Function Definitions                                  **
*******************************************************************************/

/*******************************************************************************
** Function Name         : Wdg_59_DriverA_TriggerFunc
**
** Service ID            : Not Applicable
**
** Description           : This service is used to trigger the Watchdog timer
**
** Sync/Async            : Synchronous
**
** Re-entrancy           : Non-Reentrant
**
** Input Parameters      : None
**
** InOut Parameters      : None
**
** Output Parameters     : None
**
** Return Parameter      : None
**
** Preconditions         : None
**
** Global Variables Used : Wdg_59_DriverA_GddDriverState.
**
** Functions Invoked     : WDG_59_DRIVERA_ENTER_CRITICAL_SECTION,
**                         WDG_59_DRIVERA_EXIT_CRITICAL_SECTION
**
** Registers Used        : WDTAnMD, WDTAnEVAC, WDTAnREF.
*******************************************************************************/

#define WDG_59_DRIVERA_START_SEC_CODE_FAST
#include "MemMap.h"

/* Implements WDG_ESDD_UD_025 */
/* Implements WDG_ESDD_UD_004 */
/* Implements WDG093,WDG094,WDG095,WDG144 */
/* Implements AR_PN0064_FR_0001,AR_PN0064_FR_0008,AR_PN0064_FR_0029 */
/* Implements AR_PN0064_FR_0053,AR_PN0064_FR_0006,AR_PN0064_FR_0007 */
/* Implements AR_PN0064_FR_0031 */
/* Implements AR_PN0064_FR_0057 */
/* Implements EAAR_PN0034_FSR_0002,EAAR_PN0034_FSR_0003,EAAR_PN0034_FSR_0004 */
/* QAC Warning: START Msg(2:3227)-1 */
/* QAC warning: START Msg(2:3206)-5 */
FUNC(void, WDG_59_DRIVERA_FAST_CODE) Wdg_59_DriverA_TriggerFunc(uint8 uiApiId)

/*END Msg(2:3206)-5 */
/*END Msg(2:3227)-1 */
{
  /* Variable to store VAC write value for read-back */
  #if (STD_ON == WDG_59_DRIVERA_VAC_ALLOWED)
  uint8 LucVacTrigVal ;
  #endif

  #if (STD_ON  == WDG_59_DRIVERA_DEV_ERROR_DETECT )
  /* Implements WDG_ESDD_UD_029 */
  /* Set the state of Watchdog as busy */
  Wdg_59_DriverA_GddDriverState = WDG_59_DRIVERA_BUSY;
  #endif /* STD_ON  == WDG_59_DRIVERA_DEV_ERROR_DETECT  */

  /* Check if critical section protection is required */
  /* Implements WDG040 */
  /* Implements WDG_ESDD_UD_013 */
  /* Implements AR_PN0064_FR_0052 */
  #if (STD_ON  == WDG_59_DRIVERA_CRITICAL_SECTION_PROTECTION )
  /* Implements EAAR_PN0034_FR_0066 */
  WDG_59_DRIVERA_ENTER_CRITICAL_SECTION(WDG_59_DRIVERA_TRIGG_PROTECTION);
  #endif

  /* Implements WDG_ESDD_UD_011 */
  /* Check whether Varying Activation Code is enabled */
  #if (STD_OFF == WDG_59_DRIVERA_VAC_ALLOWED)
  /* Implements WDG_ESDD_UD_008 */
  /* Implements WDG_ESDD_UD_007 */
  /* Implements WDG_ESDD_UD_014 */
  /* Initialize the register with preconfigured value */
  /* QAC warning: START Msg(2:3892)-2 */
   WDG_59_DRIVERA_REG_WRITE(Wdta_BaseAddress[WDG_59_DRIVERA_INDEX]->WDTE,
                                                       WDG_59_DRIVERA_RESTART)
/* END Msg(2:3892)-2 */
  /* Implements WDG_ESDD_UD_018 */
  /* Implements WDG_ESDD_UD_027 */
  /* Implements WDG_ESDD_UD_014 */
  WDG_59_DRIVERA_REG_WRITE_VERIFY_RUNTIME
        (&(Wdta_BaseAddress[WDG_59_DRIVERA_INDEX]->WDTE),
           WDG_59_DRIVERA_RESTART,WDG_59_DRIVERA_WDTAWDTE_MASK, uiApiId)
  #else
  /* Initialize VAC register */
  /* Implements WDG_ESDD_UD_008 */
  /* Implements WDG_ESDD_UD_016 */
  /* QAC warning: START Msg(2:3892)-2 */
  LucVacTrigVal = (WDG_59_DRIVERA_RESTART -
                            Wdta_BaseAddress[WDG_59_DRIVERA_INDEX]->REF);

  /* Implements WDG_ESDD_UD_008 */
  /* Implements WDG_ESDD_UD_007 */
  /* Implements WDG_ESDD_UD_015 */
  /* Initialize VAC register */
  WDG_59_DRIVERA_REG_WRITE(Wdta_BaseAddress[WDG_59_DRIVERA_INDEX]->EVAC,
                           LucVacTrigVal)

  /* Implements WDG_ESDD_UD_018 */
  /* Implements WDG_ESDD_UD_027 */
  /* Implements WDG_ESDD_UD_015 */
  WDG_59_DRIVERA_REG_WRITE_VERIFY_RUNTIME
        (&(Wdta_BaseAddress[WDG_59_DRIVERA_INDEX]->EVAC),
        LucVacTrigVal,WDG_59_DRIVERA_WDTAEVAC_MASK, uiApiId)
  /* END Msg(2:3892)-2 */

  #endif /* STD_OFF  == WDG_59_DRIVERA_VAC_ALLOWED  */

  /* Check if critical section protection is required */
  /* Implements WDG040 */
  /* Implements WDG_ESDD_UD_013 */
  /* Implements AR_PN0064_FR_0052 */
  #if (STD_ON  == WDG_59_DRIVERA_CRITICAL_SECTION_PROTECTION )
  WDG_59_DRIVERA_EXIT_CRITICAL_SECTION(WDG_59_DRIVERA_TRIGG_PROTECTION);
  #endif

  #if (STD_ON  == WDG_59_DRIVERA_DEV_ERROR_DETECT )
  /* Implements WDG_ESDD_UD_029 */
  /* Set the state of Watchdog as idle */
  Wdg_59_DriverA_GddDriverState = WDG_59_DRIVERA_IDLE;
  #endif /* STD_ON  == WDG_59_DRIVERA_DEV_ERROR_DETECT  */
}
#define WDG_59_DRIVERA_STOP_SEC_CODE_FAST
#include "MemMap.h"
/*******************************************************************************
** Function Name         : Wdg_59_DriverA_InitDetCheck
**
** Service ID            : Not Applicable
**
** Description           : This function checks errors during WDG
**                         initialisation.
**
** Sync/Async            : Synchronous
**
** Re-entrancy           : Non-Reentrant
**
** Input Parameters      : ConfigPtr Pointer to the configuration
**
** InOut Parameters      : None
**
** Output Parameters     : None
**
** Return Parameter      : Std_ReturnType E_OK or E_NOT_OK
**
** Preconditions         : None
**
** Global Variables Used : None
**
** Functions Invoked     : None
**
** Registers Used        : None
*******************************************************************************/
#if ( STD_ON == WDG_59_DRIVERA_DEV_ERROR_DETECT)

#define WDG_59_DRIVERA_START_SEC_PRIVATE_CODE
#include "MemMap.h"

 /* The pointer ConfigPtr is used as per the AUTOSAR requirement WDG106.
 * The Null check for the ConfigPtr has been done in
 * the DET check.
 */
 /* Implements WDG_ESDD_UD_006 */
  /* Implements WDG_ESDD_UD_009 */
  /* Implements WDG_ESDD_UD_022 */
/* QAC Warning: START Msg(2:3227)-1 */
FUNC(Std_ReturnType, WDG_59_DRIVERA_PRIVATE_CODE) Wdg_59_DriverA_InitDetCheck
(P2CONST(Wdg_59_DriverA_ConfigType, AUTOMATIC, WDG_59_DRIVERA_APPL_CONST)
  ConfigPtr)
/*END Msg(2:3227)-1 */
{
  Std_ReturnType LenReturnStatus = E_OK;
  /* Check if WDG default mode is out of range*/
   /* Start: WDG_UT_003 */
  /* Check if WDG default mode is out of range*/
  /* QAC warning: START Msg(2:2814)-4 */
  if ((WDGIF_OFF_MODE  != ConfigPtr->ddWdtamdDefaultMode ) &&
      (WDGIF_SLOW_MODE  != ConfigPtr->ddWdtamdDefaultMode ) &&
      (WDGIF_FAST_MODE  != ConfigPtr->ddWdtamdDefaultMode ))
  /*END Msg(2:2814)-4 */
  /* End: WDG_UT_003 */
  {
    LenReturnStatus = E_NOT_OK;
  }
  /* Implements WDG_ESDD_UD_008 */
  /* QAC warning: START Msg(2:3892)-2 */
  /* Implements AR_PN0064_FR_0038 */
  /* Check If 75% interrupt (WIE bit-field) is disabled */
  else if(((((ConfigPtr->ucWdtamdDefaultValue & WDTAMD_WIE_MASK)
          >> WDG_59_DRIVERA_THREE) == WDG_59_DRIVERA_ZERO)
          && (ConfigPtr->ucWdtamdDefaultValue != (uint8)WDGIF_OFF_MODE)) ||
          (((ConfigPtr->ucWdtamdSlowValue & WDTAMD_WIE_MASK)
          >> WDG_59_DRIVERA_THREE) == WDG_59_DRIVERA_ZERO)   ||
          (((ConfigPtr->ucWdtamdFastValue & WDTAMD_WIE_MASK)
          >> WDG_59_DRIVERA_THREE) == WDG_59_DRIVERA_ZERO))
/* END Msg(2:3892)-2 */
  {
    LenReturnStatus = E_NOT_OK;
  }
  else
  {
    /* No error */
  }
  return LenReturnStatus;
}

#define WDG_59_DRIVERA_STOP_SEC_PRIVATE_CODE
#include "MemMap.h"
#endif



/*******************************************************************************
** Function Name         : Wdg_59_DriverA_SetModeDetCheck
**
** Service ID            : Not Applicable
**
** Description           : This function checks errors during WDG
**                         mode setting.
**
** Sync/Async            : Synchronous
**
** Re-entrancy           : Non-Reentrant
**
** Input Parameters      : Mode   Mode to be set for WDG
**
** InOut Parameters      : None
**
** Output Parameters     : None
**
** Return Parameter      : Std_ReturnType E_OK or E_NOT_OK
**
** Preconditions         : None
**
** Global Variables Used : None
**
** Functions Invoked     : None
**
** Registers Used        : None
*******************************************************************************/
#if ( STD_ON == WDG_59_DRIVERA_DEV_ERROR_DETECT)

#define WDG_59_DRIVERA_START_SEC_PRIVATE_CODE
#include "MemMap.h"

/* Implements WDG_ESDD_UD_009 */
/* Implements WDG_ESDD_UD_032 */
/* QAC Warning: START Msg(2:3227)-1 */
FUNC(Std_ReturnType, WDG_59_DRIVERA_PRIVATE_CODE)
Wdg_59_DriverA_SetModeDetCheck(WdgIf_ModeType Mode)
/*END Msg(2:3227)-1 */
{

  /* Variable to store the return value */
  Std_ReturnType LenReturnValue;

  /* Initialize the return value */
  LenReturnValue = E_OK;

  /* Implements WDG_ESDD_UD_023 */
  /* Report Error to DET, if state of Watchdog is not idle */
  /*  QAC warning: START Msg(2:3416)-6 */
  if (WDG_59_DRIVERA_IDLE != Wdg_59_DriverA_GddDriverState)
  {
  /* End Msg (2:3416)-6 */
    /* Implements WDG010 */
    /* Report Error to DET */
    (void)Det_ReportError(WDG_59_DRIVERA_MODULE_ID, WDG_59_DRIVERA_INSTANCE_ID,
                  WDG_59_DRIVERA_SETMODE_SID, WDG_59_DRIVERA_E_DRIVER_STATE);
    /* Set Return Value as E_NOT_OK */
    LenReturnValue = E_NOT_OK;
  }
  else
  {
    /* No action required */
  }
  /* Implements WDG_ESDD_UD_023 */
  /* Check whether input parameter 'Mode' is within the range */
  if ((WDGIF_OFF_MODE != Mode) && (WDGIF_SLOW_MODE != Mode)
                                               && (WDGIF_FAST_MODE != Mode))

  {
    /* Implements WDG091,WDG092 */
    /* Report Error to DET, if the parameter mode is not within the range */
    (void)Det_ReportError(WDG_59_DRIVERA_MODULE_ID, WDG_59_DRIVERA_INSTANCE_ID,
                  WDG_59_DRIVERA_SETMODE_SID, WDG_59_DRIVERA_E_PARAM_MODE);
    /* Set Return Value as E_NOT_OK */
    LenReturnValue = E_NOT_OK;

  }
  else
  {
    /* No action required */
  }

  return(LenReturnValue);
}
#define WDG_59_DRIVERA_STOP_SEC_PRIVATE_CODE
#include "MemMap.h"
#endif
/*******************************************************************************
**                          End Of File                                       **
*******************************************************************************/
