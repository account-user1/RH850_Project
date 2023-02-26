/*============================================================================*/
/* Project      = AUTOSAR Renesas P1x-C MCAL Components                       */
/* Module       = Mcu_Irq.c                                                   */
/* $Revision: 504013 $                                                        */
/* $Date: 2017-12-22 10:52:26 +0530 (Fri, 22 Dec 2017) $                      */
/*============================================================================*/
/*                                  COPYRIGHT                                 */
/*============================================================================*/
/* Copyright(c) 2015-2017 Renesas Electronics Corporation                     */
/*============================================================================*/
/* Purpose:                                                                   */
/* ISR functions of the MCU Driver Component                                  */
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
 * V1.0.0:  14-Aug-2015 : Initial Version.
 * V1.0.1:  18-Mar-2016 : As part of P1x-C 4.01.00 release activity,following
 *                        changes are made:
 *                        1. As per JIRA ID ARDAAAF-376, added function calls
 *                           EXECUTE_SYNCP, MCU_FEINT_ENTRY and MCU_FEINT_LEAVE
 *                           in MCU_FEINT_ISR and removed _Interrupt_ keyword
 *                           from the MCU_FEINT_ISR function
 *                        2. MISRA justifications added after Static analysis.
 *                        3. Corrected the violation of the requirement
 *                           EAAR_PN0084_NR_0111.
 *                        4. Copyright Information is updated.
 *                        5. As per JIRA ID ARDAAAF-1041, added interrupt
 *                           consistency check.
 *                        6. As per JIRA ID ARDAAAF-1301, added the inclusion
 *                           of Mcu_RegWrite.h and Macro functions
 *                           MCU_MASKED_CHECK_WRITE_VERIFY_RUNTIME is
 *                           implemented.
 * V1.0.2:  22-Nov-2016 : Following changes are made:
 *                        1. As per JIRA ID ARDAAAF-1475, Delay timer overflow
 *                           control register is enabled in MCU_FEINT_ISR and
 *                           MCU_ECM_EIC_ISR.
 *                        2. As per JIRA ID ARDAAAF-1270, added the UD IDs and
 *                           requirements for achieving traceability.
 *                        3. As per JIRA ID ARDAAAF-777, Justification added
 *                           for QAC Warning Msg(0:2755) and Msg(2:2824).
 *                        4. As per JIRA ID ARDAAAF-1428, generated value
 *                           'MCU_NO_OF_ECM_INSTANCES' is used to represent
 *                           the total number of ECM instances to remove the
 *                           ECM1 support for the P1M-C devices.
 *                        5. As per JIRA ID ARDAAAF-1267, unreachable or bugs
 *                           are pointed by added UT tags. eg : Start Tag
 *                           MCU_UT_004,Start Tag MCU_UT_009 and End with End
 *                           Tag MCU_UT_004 and End Tag MCU_UT_009
 *                           correspondingly.
 * Ver4.02.00.D_MCU_HF002: 22-Dec-2017 : Related Tickets :
 *                         JIRA #ARDAAAF-3326
 *                       : Modification Info :
 *                         Included P1X_C_Hardware_Defines.h file.
 *                       : Modification Info Ends :
 */
/******************************************************************************/

/*******************************************************************************
**                     Include Section                                        **
*******************************************************************************/
/* Implements EAAR_PN0034_FR_0052, EAAR_PN0034_FR_0021 */
/* Included for global variable initialization values */
#include "Mcu_PBTypes.h"

/* Included for module version information definitions required for Mcu_Irq.c */
/* Implements MCU213 */
#include "Mcu.h"

/* Included for ISR functions declaration */
#include "Mcu_Irq.h"

/* Included for ram variable declaration */
#include "Mcu_Ram.h"

/* Included for declaration of the function Dem_ReportErrorStatus() */
#include "Dem.h"

/* Included for register verification functions declaration */
#include "Mcu_RegWrite.h"

#include "P1X_C_Hardware_Defines.h"
/*******************************************************************************
**                        Version Information                                 **
*******************************************************************************/

/* AUTOSAR release version information */
#define MCU_IRQ_C_AR_RELEASE_MAJOR_VERSION    MCU_AR_RELEASE_MAJOR_VERSION_VALUE
#define MCU_IRQ_C_AR_RELEASE_MINOR_VERSION    MCU_AR_RELEASE_MINOR_VERSION_VALUE
#define MCU_IRQ_C_AR_RELEASE_REVISION_VERSION \
                                           MCU_AR_RELEASE_REVISION_VERSION_VALUE

/* File version information */
#define MCU_IRQ_C_SW_MAJOR_VERSION     MCU_SW_MAJOR_VERSION_VALUE
#define MCU_IRQ_C_SW_MINOR_VERSION     MCU_SW_MINOR_VERSION_VALUE

/*******************************************************************************
**                      Version Check                                         **
*******************************************************************************/

  #if (MCU_IRQ_AR_RELEASE_MAJOR_VERSION != MCU_IRQ_C_AR_RELEASE_MAJOR_VERSION)
    #error "Mcu_Irq.c : Mismatch in Release Major Version"
  #endif /* (MCU_IRQ_AR_RELEASE_MAJOR_VERSION !=  \
                                          MCU_IRQ_C_AR_RELEASE_MAJOR_VERSION) */

  #if (MCU_IRQ_AR_RELEASE_MINOR_VERSION != MCU_IRQ_C_AR_RELEASE_MINOR_VERSION)
    #error "Mcu_Irq.c : Mismatch in Release Minor Version"
  #endif  /* (MCU_IRQ_AR_RELEASE_MINOR_VERSION != \
                                          MCU_IRQ_C_AR_RELEASE_MINOR_VERSION) */

  #if (MCU_IRQ_AR_RELEASE_REVISION_VERSION != \
                                     MCU_IRQ_C_AR_RELEASE_REVISION_VERSION)
    #error "Mcu_Irq.c : Mismatch in Release Revision Version"
  #endif  /* (MCU_IRQ_AR_RELEASE_REVISION_VERSION !=  \
                                       MCU_IRQ_C_AR_RELEASE_REVISION_VERSION) */

#if (MCU_IRQ_SW_MAJOR_VERSION != MCU_IRQ_C_SW_MAJOR_VERSION)
  #error "Mcu_Irq.c : Mismatch in Software Major Version"
#endif  /* (MCU_IRQ_SW_MAJOR_VERSION != MCU_IRQ_C_SW_MAJOR_VERSION) */

#if (MCU_IRQ_SW_MINOR_VERSION != MCU_IRQ_C_SW_MINOR_VERSION)
  #error "Mcu_Irq.c : Mismatch in Software Minor Version"
#endif  /* (MCU_IRQ_SW_MINOR_VERSION != MCU_IRQ_C_SW_MINOR_VERSION) */
/*Implements EAAR_PN0034_NR_0026 */
/*******************************************************************************
**                      MISRA C Rule Violations                               **
*******************************************************************************/
/* 1. MISRA C RULE VIOLATION:                                                 */
/* Message       : (4:0316) Cast from a pointer to void to a pointer to       */
/*                  object.                                                   */
/* Rule          : MISRA-C:2004 Rule 11.4                                     */
/* Justification : Cast is performed between a pointer to void to pointer to  */
/*                 object type to prevent publishing of internal structure.   */
/* Verification  : However, part of the code is verified manually and it is   */
/*                 not having any impact.                                     */
/* Reference     : Look for START Msg(4:0316)-1 and                           */
/*                 END Msg(4:0316)-1 tags in the code.                        */
/******************************************************************************/
/* 2. MISRA C RULE VIOLATION:                                                 */
/* Message       : (4:0491) An array subscript operator is being used to      */
/*                 subscript an expression which is not of array type.        */
/* Rule          : MISRA-C:2004 Rule 17.4                                     */
/* Justification : This pointer addresses an array element                    */
/* Verification  : It is verified manually and by generation tool             */
/* Reference     : Look for START Msg(4:0491)-2 and END Msg(4:0491)-2         */
/*                 tags in the code.                                          */
/******************************************************************************/
/* 3. MISRA C RULE VIOLATION:                                                 */
/* Message       : (4:0715)Nesting of control structures (statements)         */
/*                 exceeds 15 - program is non-conforming.                    */
/* Rule          : MISRA-C:2004 Rule 1.1                                      */
/* Justification : Control statements limit exceeds as the implementation of  */
/*                 Interrupt consistency requires nested if conditions.       */
/* Verification  : It is verified manually and by generation tool             */
/* Reference     : Look for START Msg(4:0715)-3 and END Msg(4:0715)-3         */
/*                 tags in the code.                                          */
/*******************************************************************************
**                      MISRA C QAC Warnings                                  **
*******************************************************************************/
/* 1. QAC Warning:                                                            */
/* Message       : (2:2814) Possible: Dereference of NULL pointer.            */
/* Rule          : No Rule                                                    */
/* Justification : The Pointers generated using Post Build configurations may */
/*                  not be NULL.                                              */
/* Verification  : However, part of the code is verified manually and it is   */
/*                 not having any impact.                                     */
/* Reference     : Look for START Msg(2:2814)-1  and                          */
/*                 END Msg(2:2814)-1 tags in the code.                        */
/******************************************************************************/
/* 2. QAC Warning:                                                            */
/* Message       :(2:0862) #include "MemMap.h" directive is redundant.        */
/* Rule          : No Rule                                                    */
/* Justification : As per requirement [MEMMAP003],the inclusion of the memory */
/*                 mapping header files is done within the code.              */
/*                 As neither executable code nor symbols are included        */
/*                 (only pragmas) this violation is an approved exception     */
/*                 without side effects.                                      */
/* Verification  : However, part of the code is verified manually and it is   */
/*                 not having any impact.                                     */
/******************************************************************************/
/* 3. QAC Warning:                                                            */
/* Message       : (0:2755) Analysis time of function has exceeded            */
/*                 the configured maximum: '60000ms'.  Dataflow               */
/*                 analysis continues with the next function.                 */
/* Rule          : No Rule                                                    */
/* Justification : Implementation demands usage of all MCU features so it     */
/*                 takes/exceeds the execution time                           */
/* Verification  : However, part of the code is verified manually and it is   */
/*                 not having any impact.                                     */
/* Reference     : Look for START Msg(0:2755)-3 and                           */
/*                 END Msg(0:2755)-3 tags in the code.                        */
/******************************************************************************/
/* 4. QAC Warning:                                                            */
/* Message       : (2:2824) Possible: Arithmetic operation on NULL pointer.   */
/* Rule          : No Rule                                                    */
/* Justification : The Pointers generated using Post Build configurations may */
/*                 not be NULL.                                               */
/* Verification  : However, part of the code is verified manually and it is   */
/*                 not having any impact.                                     */
/* Reference     : Look for MISRA Violation: START Msg (2:2824)-4 and         */
/*                 END Msg (2:2824)-4 tags in the code.                       */
/*******************************************************************************
**                         Global Data                                        **
*******************************************************************************/

/*******************************************************************************
**                      Function Definitions                                  **
*******************************************************************************/
/*******************************************************************************
** Function Name         : MCU_FEINT_ISR
**
** Service ID            : 0x0B
**
** Description           : Interrupt service routine for FE NMI
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
** Global Variables Used : Mcu_GpConfigPtr, Mcu_GpEcmSetting.
**
** Functions Invoked     : Dem error report.
**
** Registers Used        : ECMMnESSTR0,ECMnESSTC0,ECMMnESSTR1,ECMnESSTC1,
**                         ECMMnESSTR2,ECMnESSTC2,ECMnPS,ECMnPCMD1
**
*******************************************************************************/
/* Implements MCU_ESDD_UD_072,MCU_ESDD_UD_011 */
#define MCU_START_SEC_CODE_FAST
#include "MemMap.h"
/* QAC Warning: START Msg (0:2755)-3 */
/* Defines the CAT2 interrupt mapping */
#if defined  (Os_MCU_FEINT_CAT2_ISR) || defined (MCU_FEINT_CAT2_ISR)
 ISR(MCU_FEINT_CAT2_ISR)
/* Defines the CAT1 interrupt mapping */
#else
FUNC(void, MCU_FAST_CODE) MCU_FEINT_ISR(void)
#endif
{
/* END Msg(0:2755)-3 */
  /* pointer to NMi notification function array */
  P2CONST(Mcu_ErrorNotification, MCU_VAR, MCU_CONFIG_CONST)  LpNMiNotfyFunc;
  VAR(uint8,AUTOMATIC)       LucLoopCount;
  VAR(uint8,AUTOMATIC)       LucNotifyIndex;
  VAR(uint8,AUTOMATIC)       LucNMiIndexReg0;
  VAR(uint8,AUTOMATIC)       LucNMiIndexReg1;
  VAR(uint8,AUTOMATIC)       LucNMiCount;
  VAR(uint8,AUTOMATIC)       LucEcmIndex;
  VAR(boolean,AUTOMATIC)     LblDemReported;
  VAR(uint32,AUTOMATIC)      LulReg0DataValue;
  VAR(uint32,AUTOMATIC)      LulReg1DataValue;
  VAR(uint32,AUTOMATIC)      LulReg2DataValue;

  #ifndef Os_MCU_FEINT_CAT2_ISR
  #ifndef MCU_FEINT_CAT2_ISR
  EXECUTE_SYNCP();
  MCU_FEINT_ENTRY();
  #endif /* MCU_FEINT_CAT2_ISR is not defined */
  #endif /* Os_MCU_FEINT_CAT2_ISR is not defined */
  /* Initialize with default value */
  LblDemReported = MCU_FALSE;
  /* Load the NMI notification array start address */
  /* MISRA Violation: START Msg(4:0316)-1 */
  /* MISRA Violation: START Msg(2:2814)-1 */
  LpNMiNotfyFunc = ((P2CONST(Mcu_ErrorNotification, MCU_VAR, MCU_CONFIG_CONST))
                                           (Mcu_GpConfigPtr->pNMINotification));
  /* END Msg(2:2814)-1 */
  /* END Msg(4:0316)-1 */

  /*Initialize the LucEcmIndex to zero */
  LucEcmIndex = MCU_ZERO;
  do
  {
    /*Initialize the index*/
    LucNMiIndexReg0 = MCU_ZERO;
    LucNMiIndexReg1 = MCU_ZERO;
    /* MISRA Violation: START Msg(2:2814)-1 */
    LulReg0DataValue = ((Ecmm0_BaseAddress[LucEcmIndex]->ESSTR0) &
                    (Mcu_GpEcmSetting->ulEcmNonMaskInterReg0value));
    /* END Msg(2:2814)-1 */
    /*Check if any of the ECM Error source(Reg0) has occurred which is
      configured as NMI */
    if ((uint32)MCU_ZERO != LulReg0DataValue)
    {
      for(LucLoopCount = MCU_ZERO; LucLoopCount < MCU_THIRTYTWO;LucLoopCount++)
      {
        /* Find which ecm source had caused this interrupt */
        if ((uint32)MCU_ONE == ((LulReg0DataValue >> LucLoopCount) &
                                                              (uint32)MCU_ONE))
        {
          /* Find the  notification index for the particular ecm source.
          * step1.find the total number of configured ecm error sources
          * for NMI upto this current source.
          * step2.Find the noticiation index for current ecm source =
          * "value in step1- MCU_ONE"
          */
          /* Initialize the notification index */
          LucNotifyIndex = MCU_ZERO;
          for (LucNMiCount = MCU_ZERO; LucNMiCount <= LucLoopCount;
                                                            LucNMiCount++)
          {
            /* Total number of configured ecm error sources
              for NMI upto this current source */
            if ((uint32)MCU_ONE ==
                (((Mcu_GpEcmSetting->ulEcmNonMaskInterReg0value) >> LucNMiCount)
                                                             & (uint32)MCU_ONE))
            {
              /* Increment the notify index */
              LucNotifyIndex++;
            }
            else
            {
              /* No action */
            }
          } /*End of For Loop*/
          if (MCU_ZERO < LucNotifyIndex)
          {
            /* Get the notification index */
            LucNotifyIndex = LucNotifyIndex - MCU_ONE;
            /* Check whether notification function  configured or not */
            /* MISRA Violation: START Msg(4:0491)-2 */
            /* QAC Warning: START Msg (2:2824)-4 */
            if (NULL_PTR != LpNMiNotfyFunc[LucNotifyIndex].pNotificationFuncPtr)
            {
              /* END Msg(2:2824)-4 */
              /* Invoke the configured notification function */
              LpNMiNotfyFunc[LucNotifyIndex].pNotificationFuncPtr();
              /* END Msg(4:0491)-2 */
            }
            else
            {
              /* No action */
            }
          } /*End of if (LucNotifyIndex > MCU_ZERO)*/
          else
          {
            /* No action */
          }
          /* Implements MCU_ESDD_UD_029 */
          #if (STD_ON == MCU_GET_RAM_STATE_API )
          /* Check local and global ram error */
          if (((MCU_SIXTEEN <= LucLoopCount) && (MCU_EIGHTEEN >= LucLoopCount))
                                            ||
            ((MCU_TWENTYONE <= LucLoopCount)&&(MCU_TWENTYFIVE >= LucLoopCount)))
          {
            /* Set the ram state variable  */
            Mcu_GblRAMInitStatus = MCU_TRUE;
          }
          else
          {
            /* No action */
          }
          #endif /*#if (STD_ON == MCU_GET_RAM_STATE_API )*/
        } /*End of if (((LulReg0DataValue >> LucLoopCount)
                                                       & MCU_ONE) == MCU_ONE)*/
        else
        {
          /* No action  */
        }
      } /*End of for loop*/
      /* Initialize the retry count */
      LucLoopCount = MCU_LOOPCOUNT;
      /* Clear the particular Non Maskable interrupt source */
      do
      {
        /* Write data to protection command register */
        Ecm0_BaseAddress[LucEcmIndex]->PCMD1  = MCU_WRITE_DATA;
        /* Write the correct value to the Error source clear register */
        Ecm0_BaseAddress[LucEcmIndex]->ESSTC0 = LulReg0DataValue;
        /* Write the inverted value to the Error source clear register */
        Ecm0_BaseAddress[LucEcmIndex]->ESSTC0 = ~LulReg0DataValue;
        /* Write the correct value to the Error source clear register */
        Ecm0_BaseAddress[LucEcmIndex]->ESSTC0 = LulReg0DataValue;
        LucLoopCount--;
      }while ((LucLoopCount > MCU_ZERO) &&
              (Ecm0_BaseAddress[LucEcmIndex]->PS == MCU_ONE));
      /* Read back the Error source clear register*/
        MCU_MASKED_CHECK_WRITE_VERIFY_RUNTIME
           (&(Ecmm0_BaseAddress[LucEcmIndex]->ESSTR0),
                         MCU_ERROR_SOURCE_STS, MCU_FULL_MASK, MCU_FEINT_ISR_SID)
      /*Check if Register write is success or not*/
      if (MCU_ONE == Ecm0_BaseAddress[LucEcmIndex]->PS )
      {
        /* Implements MCU_ESDD_UD_038*/
        /*Writing to write-protected register failed and report production
          error */
        Dem_ReportErrorStatus(MCU_E_WRITE_TIMEOUT_FAILURE,
                                                  DEM_EVENT_STATUS_FAILED);
        /* Set the flag to true value */
        LblDemReported = MCU_TRUE;
      }
      else
      {
        /* No action  */
      }
    } /*End of if (LulReg0DataValue != MCU_ZERO ) */
    else
    {
      /* No action  */
    }
    /*Check if DEM Error is Reported or not */
    if(MCU_FALSE == LblDemReported)
    {
      LulReg1DataValue = ((Ecmm0_BaseAddress[LucEcmIndex]->ESSTR1) &
                             (Mcu_GpEcmSetting->ulEcmNonMaskInterReg1value));
      /*Check if any of the ECM Error source(Reg1) has occurred which is
        configured as NMI */
      if ((uint32)MCU_ZERO != LulReg1DataValue)
      {
        /* Find the total number of ecm source configured in reg0 for NMI */
        for(LucNMiCount = MCU_ZERO;LucNMiCount < MCU_THIRTYTWO;LucNMiCount++)
        {
          /* Total number of ecm sources for NMI */
          if ((uint32)MCU_ONE ==
                (((Mcu_GpEcmSetting->ulEcmNonMaskInterReg0value) >> LucNMiCount)
                                         & (uint32)MCU_ONE))
          {
            /* Increment the NMI Index Reg0 */
            LucNMiIndexReg0++;
          }
          else
          {
            /* No action  */
          }
        } /*End of for loop*/
        for(LucLoopCount = MCU_ZERO; LucLoopCount < MCU_THIRTYTWO;
                                                  LucLoopCount++)
        {
          if ((uint32)MCU_ONE == ((LulReg1DataValue >> LucLoopCount) &
                                                              (uint32)MCU_ONE))
          {
            /* Find the  notification index for the particular ecm source.
            * step1.find the total number of configured ecm error sources
            * for NMI upto this current source.
            * step2.Find the noticiation index for current ecm source =
            * "value in step1- MCU_ONE + LucNMiIndexReg0"
            */
            /* Initialize the notification index */
            LucNotifyIndex = MCU_ZERO;
            for (LucNMiCount = MCU_ZERO; LucNMiCount <= LucLoopCount;
                                                              LucNMiCount++)
            {
              /* total number of configured ecm error sources
              * for NMI upto this current source
              */
              if((uint32)MCU_ONE ==
                (((Mcu_GpEcmSetting->ulEcmNonMaskInterReg1value) >> LucNMiCount)
                                                            & (uint32)MCU_ONE))
              {
                /* Increment the notify index */
                LucNotifyIndex++;
              }
              else
              {
                /* No action */
              }
            } /*End of for loop*/
            if (MCU_ZERO < LucNotifyIndex)
            {
              /* get the notification index */
              LucNotifyIndex = (LucNotifyIndex - MCU_ONE) + LucNMiIndexReg0;
              /* Check whether notification function  configured or not */
              /* MISRA Violation: START Msg(4:0491)-2 */
              if (NULL_PTR !=
                           LpNMiNotfyFunc[LucNotifyIndex].pNotificationFuncPtr)
              {
                /* Invoke the configured notification function */
                LpNMiNotfyFunc[LucNotifyIndex].pNotificationFuncPtr();
                /* END Msg(4:0491)-2 */
              }
              else
              {
                /*No action */
              }
            }/*End of if (LucNotifyIndex > MCU_ZERO)*/
            else
            {
              /*No action */
            }
            /* Implements MCU_ESDD_UD_029 */
            #if (STD_ON == MCU_GET_RAM_STATE_API)
            /* Check local and global ram error */
            if((MCU_EIGHT == LucLoopCount)||(MCU_NINE == LucLoopCount)  ||
               (MCU_SIXTEEN == LucLoopCount)||(MCU_SEVENTEEN == LucLoopCount)||
                ((LucLoopCount >= MCU_TWENTYONE) &&
                 (LucLoopCount <= MCU_TWENTYFIVE)))
            {
              /* Set the ram state variable  */
              Mcu_GblRAMInitStatus = MCU_TRUE;
            }
            else
            {
              /*No action */
            }
            #endif
          }/* End of if(((LulReg1DataValue >> LucLoopCount)
                                                      & MCU_ONE) == MCU_ONE)*/
          else
          {
            /* No action  */
          }
        } /*End of For loop*/
        /* Initialize the retry count */
        LucLoopCount = MCU_LOOPCOUNT;
        /* Clear the particular Non-maskable interrupt source */
        do
        {
          /* Write data to protection command register */
          Ecm0_BaseAddress[LucEcmIndex]->PCMD1 = MCU_WRITE_DATA;
          /* Write the correct value to the Error source clear register */
          Ecm0_BaseAddress[LucEcmIndex]->ESSTC1  = LulReg1DataValue;
          /* Write the inverted value to the Error source clear register */
          Ecm0_BaseAddress[LucEcmIndex]->ESSTC1 = ~LulReg1DataValue;
          /* Write the correct value to the Error source clear register */
          Ecm0_BaseAddress[LucEcmIndex]->ESSTC1 = LulReg1DataValue;
          LucLoopCount--;
        }while ((LucLoopCount > MCU_ZERO) &&
                          (Ecm0_BaseAddress[LucEcmIndex]->PS == MCU_ONE));
        /* Read back the Error source clear register*/
          MCU_MASKED_CHECK_WRITE_VERIFY_RUNTIME
            (&(Ecmm0_BaseAddress[LucEcmIndex]->ESSTR1),
                        (uint32)MCU_ERROR_SOURCE_STS, (uint32)MCU_FULL_MASK,
                                                            MCU_FEINT_ISR_SID)
        /*Check if Register write is success or not*/
        if ((uint32)MCU_ONE == Ecm0_BaseAddress[LucEcmIndex]->PS)
        {
          /* Implements MCU_ESDD_UD_038*/
          /* Writing to write-protected register failed and
          * report production error */
          Dem_ReportErrorStatus(MCU_E_WRITE_TIMEOUT_FAILURE,
                                              DEM_EVENT_STATUS_FAILED);
          /* Set the flag to true value */
          LblDemReported = MCU_TRUE;
        }
        else
        {
          /* No action  */
        }
      }/*End of if (LulReg1DataValue != MCU_ZERO)*/
      else
      {
        /* No action */
      }
    }
    else
    {
      /* No action */
    }
    /*Check if DEM Error is Reported or not */
    if(MCU_FALSE == LblDemReported)
    {
      LulReg2DataValue = ((Ecmm0_BaseAddress[LucEcmIndex]->ESSTR2) &
                         (Mcu_GpEcmSetting->ulEcmNonMaskInterReg2value));
      /*Check if any of the ECM Error source(Reg2) has occurred which is
        configured as NMI */
      if ((uint32)MCU_ZERO != LulReg2DataValue)
      {
        /* Find the total number of ecm source configured in reg1 for NMI */
        for (LucNMiCount = MCU_ZERO; LucNMiCount < MCU_THIRTYTWO;
                                                        LucNMiCount++)
        {
          /* Total number of ecm sources for NMI */
          if ((uint32)MCU_ONE ==
               (((Mcu_GpEcmSetting->ulEcmNonMaskInterReg1value) >> LucNMiCount)
                                                            & (uint32)MCU_ONE))
          {
            /* Increment the NMi index */
            LucNMiIndexReg1++;
          }
          else
          {
            /* No action  */
          }
        } /*End of for loop*/
        for(LucLoopCount = MCU_ZERO; LucLoopCount < MCU_TWENTYNINE;
                                                        LucLoopCount++)
        {
          if ((uint32)MCU_ONE ==((LulReg2DataValue >> LucLoopCount) &
                                                              (uint32)MCU_ONE))
          {
            /* Find the  notification index for the particular ecm source.
            * step1.find the total number of configured ecm error sources
            * for NMI upto this current source.
            * step2.Find the noticiation index for current ecm source =
            * "value in step1- MCU_ONE +LucNMiIndexReg0 +LucNMiIndexReg1"
            */
            /* Initialize the notification index */
            LucNotifyIndex = MCU_ZERO;
            for (LucNMiCount = MCU_ZERO; LucNMiCount <= LucLoopCount;
                                                              LucNMiCount++)
            {
              /* total number of configured ecm error sources
              * for NMI upto this current source
              */
              if((uint32)MCU_ONE ==
                (((Mcu_GpEcmSetting->ulEcmNonMaskInterReg2value) >> LucNMiCount)
                                                             & (uint32)MCU_ONE))
              {
                /* Increment the notify index */
                LucNotifyIndex++;
              }
              else
              {
                /* No action  */
              }
            } /*End of for loop*/
            if (MCU_ZERO < LucNotifyIndex)
            {
              /* get the notification index */
              LucNotifyIndex = (LucNotifyIndex - MCU_ONE) + LucNMiIndexReg0
                                                          + LucNMiIndexReg1;
              /* Check whether notification function  configured or not */
              /* MISRA Violation: START Msg(4:0491)-2 */
              if (NULL_PTR !=
                            LpNMiNotfyFunc[LucNotifyIndex].pNotificationFuncPtr)
              {
                /* Invoke the configured notification function */
                LpNMiNotfyFunc[LucNotifyIndex].pNotificationFuncPtr();
                /* END Msg(4:0491)-2 */
              }
              else
              {
                /* No action  */
              }

            }/*End of if (LucNotifyIndex > MCU_ZERO)*/
            else
            {
              /* No action  */
            }
          }/*End of if(((LulReg2DataValue >> LucLoopCount)
                                                       & MCU_ONE) == MCU_ONE)*/
          else
          {
            /* No action  */
          }
        } /*End of For loop*/

        /* Initialize the retry count */
        LucLoopCount = MCU_LOOPCOUNT;
        /* Clear the particular Maskable interrupt source */
        do
        {
          /* Write data to protection command register */
          Ecm0_BaseAddress[LucEcmIndex]->PCMD1 = MCU_WRITE_DATA;
          /* Write the correct value to the Error source clear register */
          Ecm0_BaseAddress[LucEcmIndex]->ESSTC2  = LulReg2DataValue;
          /* Write the inverted value to the Error source clear register */
          Ecm0_BaseAddress[LucEcmIndex]->ESSTC2 = ~LulReg2DataValue;
          /* Write the correct value to the Error source clear register */
          Ecm0_BaseAddress[LucEcmIndex]->ESSTC2 = LulReg2DataValue;
          LucLoopCount--;
        }while ((LucLoopCount > MCU_ZERO) &&
                        (Ecm0_BaseAddress[LucEcmIndex]->PS == (uint32)MCU_ONE));
        /* Read back the Error source clear register*/
          MCU_MASKED_CHECK_WRITE_VERIFY_RUNTIME
            (&(Ecmm0_BaseAddress[LucEcmIndex]->ESSTR2),
                         (uint32)MCU_ERROR_SOURCE_STS, (uint32)MCU_FULL_MASK,
                                                             MCU_FEINT_ISR_SID)
        /*Check if Register write is success or not*/
        if ((uint32)MCU_ONE == Ecm0_BaseAddress[LucEcmIndex]->PS)
        {
          /* Implements MCU_ESDD_UD_038*/
          /* Writing to write-protected register failed and
          * report production error */
          Dem_ReportErrorStatus(MCU_E_WRITE_TIMEOUT_FAILURE,
                                                  DEM_EVENT_STATUS_FAILED);
          /* Set the flag to true value */
          LblDemReported = MCU_TRUE;
        }
        else
        {
          /* No action  */
        }
      }/*End of if (LulReg2DataValue != MCU_ZERO)*/
      else
      {
        /* No action  */
      }
   }
   else
   {
     /* No action  */
   }

      if ((LulReg0DataValue == (LulReg0DataValue &
                             Mcu_GpEcmSetting->ulEcmDelayTimerReg3Value)) ||
          (LulReg1DataValue == (LulReg1DataValue &
                             Mcu_GpEcmSetting->ulEcmDelayTimerReg4Value)) ||
          (LulReg2DataValue == (LulReg2DataValue &
                                  Mcu_GpEcmSetting->ulEcmDelayTimerReg5Value)))
        {
        /* Initialize the retry count to config value */
        LucLoopCount = MCU_LOOPCOUNT;
        /* Stop the delay timer */
        do
        {
          /* Write data to protection command register */
          Ecm0_BaseAddress[LucEcmIndex]->PCMD1  = MCU_WRITE_DATA;
          /* Write the correct value to the Error source clear register */
          Ecm0_BaseAddress[LucEcmIndex]->DTMCTL = MCU_ECM_DELAY_TIMER_STOP;
          /* Write the inverted value to the Error source clear register */
          Ecm0_BaseAddress[LucEcmIndex]->DTMCTL = ~MCU_ECM_DELAY_TIMER_STOP;
          /* Write the correct value to the Error source clear register */
          Ecm0_BaseAddress[LucEcmIndex]->DTMCTL = MCU_ECM_DELAY_TIMER_STOP;
          LucLoopCount--;
        }while ((LucLoopCount > MCU_ZERO) &&
                (Ecm0_BaseAddress[LucEcmIndex]->PS == (uint32)MCU_ONE));

         if ((uint32)MCU_ONE == Ecm0_BaseAddress[LucEcmIndex]->PS )
        {
          /* Implements MCU_ESDD_UD_038*/
          /*Writing to write-protected register failed and report production
            error */
          Dem_ReportErrorStatus(MCU_E_WRITE_TIMEOUT_FAILURE,
                                                    DEM_EVENT_STATUS_FAILED);
          /* Set the flag to true value */
          LblDemReported = MCU_TRUE;
        }
        else
        {
         /* No action  */
        }

        /* wait until status bit becomes zero*/
          LucLoopCount = MCU_LOOPCOUNT;
          do
          {
            LucLoopCount = LucLoopCount - MCU_ONE;
          /* Start Tag MCU_UT_004 */
          }while(((Ecm0_BaseAddress[LucEcmIndex]->DTMCTL) !=
             MCU_ECM_DELAY_TIMER_STOP_STS) && (LucLoopCount > MCU_ZERO));
          /* End Tag MCU_UT_004 */
          /* Read back the Error source clear register*/
         MCU_MASKED_CHECK_WRITE_VERIFY_RUNTIME
            (&(Ecm0_BaseAddress[LucEcmIndex]->DTMCTL),
              (uint32)MCU_ECM_DELAY_TIMER_STOP_STS, (uint32)MCU_DTMCTL_WV_MASK,
                                                             MCU_FEINT_ISR_SID)

         /* Initialize the retry count to config value */
         LucLoopCount = MCU_LOOPCOUNT;
         /* Restart the delay timer */
        do
        {
          /* Write data to protection command register */
          Ecm0_BaseAddress[LucEcmIndex]->PCMD1  = MCU_WRITE_DATA;
          /* Write the correct value to the Error source clear register */
          Ecm0_BaseAddress[LucEcmIndex]->DTMCTL = MCU_ECM_DELAY_TIMER_START;
          /* Write the inverted value to the Error source clear register */
          Ecm0_BaseAddress[LucEcmIndex]->DTMCTL = ~MCU_ECM_DELAY_TIMER_START;
          /* Write the correct value to the Error source clear register */
          Ecm0_BaseAddress[LucEcmIndex]->DTMCTL = MCU_ECM_DELAY_TIMER_START;
          LucLoopCount--;
        }while ((LucLoopCount > MCU_ZERO) &&
                (Ecm0_BaseAddress[LucEcmIndex]->PS == (uint32)MCU_ONE));
        if ((uint32)MCU_ONE == Ecm0_BaseAddress[LucEcmIndex]->PS )
        {
          /* Implements MCU_ESDD_UD_038*/
          /*Writing to write-protected register failed and report production
            error */
          Dem_ReportErrorStatus(MCU_E_WRITE_TIMEOUT_FAILURE,
                                                    DEM_EVENT_STATUS_FAILED);
          /* Set the flag to true value */
          LblDemReported = MCU_TRUE;
        }
        else
        {
          /* No action  */
        }

        /* wait until status bit becomes one*/
       LucLoopCount = MCU_LOOPCOUNT;
       do
       {
         LucLoopCount = LucLoopCount - MCU_ONE;
       /* Start Tag MCU_UT_004 */
       }while(((Ecm0_BaseAddress[LucEcmIndex]->DTMCTL) !=
           MCU_ECM_DELAY_TIMER_START_STS) && (LucLoopCount > MCU_ZERO));
       /* End Tag MCU_UT_004 */
          /* Read back the Error source clear register*/
         MCU_MASKED_CHECK_WRITE_VERIFY_RUNTIME
            (&(Ecm0_BaseAddress[LucEcmIndex]->DTMCTL),
           (uint32)MCU_ECM_DELAY_TIMER_START_STS, (uint32)MCU_DTMCTL_WV_MASK,
                                                             MCU_FEINT_ISR_SID)
    }
    else
    {
      /* No action  */
    }

  /* Increment the LucEcmIndex */
  LucEcmIndex++;
  }while((LucEcmIndex < MCU_NO_OF_ECM_INSTANCES) &&
                                             (MCU_FALSE == LblDemReported ));
  #ifndef Os_MCU_FEINT_CAT2_ISR
  #ifndef MCU_FEINT_CAT2_ISR
  MCU_FEINT_LEAVE();
  #endif /* MCU_FEINT_CAT2_ISR is not defined */
  #endif /* Os_MCU_FEINT_CAT2_ISR is not defined */
}
#define MCU_STOP_SEC_CODE_FAST
#include "MemMap.h"
/*******************************************************************************
** Function Name         : MCU_ECM_EIC_ISR
**
** Service ID            : 0x0C
**
** Description           : Interrupt service routine for ECM MI
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
** Global Variables Used : Mcu_GpConfigPtr, Mcu_GpEcmSetting.
**
** Functions Invoked     : Dem error report.
**
** Registers Used        : ECMMnESSTR0,ECMnESSTC0,ECMMnESSTR1,ECMnESSTC1,
**                         ECMMnESSTR2,ECMnESSTC2,ECMnPS,ECMnPCMD1
*******************************************************************************/
/* Implements MCU_ESDD_UD_072 */
/* Implements EAAR_PN0034_FSR_0008, EAAR_PN0034_FSR_0009 */
#define MCU_START_SEC_CODE_FAST
#include "MemMap.h"

/* Implements MCU_ESDD_UD_012 */
/* Defines the CAT2 interrupt mapping */
/* QAC Warning: START Msg (0:2755)-3 */
#if defined  (Os_MCU_ECM_EIC_CAT2_ISR) || defined (MCU_ECM_EIC_CAT2_ISR)
 ISR(MCU_ECM_EIC_CAT2_ISR)
/* Defines the CAT1 interrupt mapping */
#else
_INTERRUPT_ FUNC(void, MCU_FAST_CODE) MCU_ECM_EIC_ISR(void)
#endif
{
/* END Msg(0:2755)-3 */
  /* pointer to Mi notification function array */
  P2CONST(Mcu_ErrorNotification, MCU_VAR, MCU_CONFIG_CONST)  LpMiNotfyFunc;
  VAR(uint8,AUTOMATIC)          LucLoopCount;
  VAR(uint8,AUTOMATIC)          LucNotifyIndex;
  VAR(uint8,AUTOMATIC)          LucMiIndexReg0;
  VAR(uint8,AUTOMATIC)          LucMiIndexReg1;
  VAR(uint8,AUTOMATIC)          LucMiCount;
  VAR(uint8,AUTOMATIC)          LucEcmIndex;
  VAR(boolean,AUTOMATIC)        LblDemReported;
  VAR(uint32,AUTOMATIC)         LulReg0DataValue;
  VAR(uint32,AUTOMATIC)         LulReg1DataValue;
  VAR(uint32,AUTOMATIC)         LulReg2DataValue;
  /* Initialize with default value */
  LblDemReported = MCU_FALSE;
  /* Load the MI notification array start address */
  /* MISRA Violation: START Msg(4:0316)-1 */
  /* MISRA Violation: START Msg(2:2814)-1 */
  LpMiNotfyFunc = (P2CONST(Mcu_ErrorNotification, MCU_VAR, MCU_CONFIG_CONST))
                                           (Mcu_GpConfigPtr->pMINotification);
  /* END Msg(2:2814)-1 */
  /* END Msg(4:0316)-1 */

  /*Initialize the LucEcmIndex to zero */
  LucEcmIndex = MCU_ZERO;
  do
  {
    /* Implements MCU_ESDD_UD_035*/
    #if(MCU_INTERRUPT_CONSISTENCY_CHK == STD_ON)
    /* Check whether the EIMK bit of EIC is set */
    if(MCU_EIC_EIMK_MASK == (uint16)(MCU_EIC0 & MCU_EIC_EIMK_MASK))
    {
      /* Implements MCU_ESDD_UD_040 */
      /* Reporting to DEM that interrupt from unknown source */
      Dem_ReportErrorStatus(MCU_E_INT_INCONSISTENT, DEM_EVENT_STATUS_FAILED);
    }
    /* MISRA Violation: START Msg(2:2814)-1 */
    else if(((uint32)MCU_ZERO != (Ecmm0_BaseAddress[LucEcmIndex]->ESSTR0 &
           ~(Mcu_GpEcmSetting->ulEcmMaskInterReg0value))) ||
           ((uint32)MCU_ZERO != (Ecmm0_BaseAddress[LucEcmIndex]->ESSTR1 &
           ~(Mcu_GpEcmSetting->ulEcmMaskInterReg1value)))||
           ((uint32)MCU_ZERO != (Ecmm0_BaseAddress[LucEcmIndex]->ESSTR2 &
         ~(Mcu_GpEcmSetting->ulEcmMaskInterReg2value) & MCU_ESSTR2_INTR_MASK))
           || ((uint32)MCU_ZERO != (Ecmc0_BaseAddress[LucEcmIndex]->ESSTR0 &
           ~(Mcu_GpEcmSetting->ulEcmMaskInterReg0value))) ||
           ((uint32)MCU_ZERO != (Ecmc0_BaseAddress[LucEcmIndex]->ESSTR1 &
           ~(Mcu_GpEcmSetting->ulEcmMaskInterReg1value)))||
           ((uint32)MCU_ZERO != (Ecmc0_BaseAddress[LucEcmIndex]->ESSTR2 &
        ~(Mcu_GpEcmSetting->ulEcmMaskInterReg2value) & MCU_ESSTR2_INTR_MASK)))
    {
      /* END Msg(2:2814)-1 */
      /* Implements MCU_ESDD_UD_040 */
      /* Reporting to DEM that interrupt from unknown source */
      Dem_ReportErrorStatus(MCU_E_INT_INCONSISTENT, DEM_EVENT_STATUS_FAILED);
    }
    else
    #endif
    {

      /* Initialize the index */
      LucMiIndexReg0 = MCU_ZERO;
      LucMiIndexReg1 = MCU_ZERO;

      LulReg0DataValue = ((Ecmm0_BaseAddress[LucEcmIndex]->ESSTR0) &
                      (Mcu_GpEcmSetting->ulEcmMaskInterReg0value));
      /*Check if any of the ECM Error source(Reg0) has occurred which is
        configured as MI */
      if ((uint32)MCU_ZERO != LulReg0DataValue)
      {
        for (LucLoopCount = MCU_ZERO; LucLoopCount < MCU_THIRTYTWO;
                                                        LucLoopCount++)
        {
          /* Find which ecm source had caused this interrupt */
          if ((uint32)MCU_ONE == ((LulReg0DataValue >> LucLoopCount) &
                                                               (uint32)MCU_ONE))
          {
            /* Find the  notification index for the particular ecm source.
            * step1.find the total number of configured ecm error sources
            * for MI upto this current source.
            * step2.Find the noticiation index for current ecm source =
            * "value in step1- MCU_ONE"
            */
            /* Initialize the notification index */
            LucNotifyIndex = MCU_ZERO;
            for (LucMiCount = MCU_ZERO; LucMiCount <= LucLoopCount;
                                                              LucMiCount++)
            {
              /* Total number of configured ecm error sources
                for MI upto this current source */
              if ((uint32)MCU_ONE ==
                   (((Mcu_GpEcmSetting->ulEcmMaskInterReg0value) >> LucMiCount)
                                                            & (uint32)MCU_ONE))
              {
                /* Increment the notify index */
                LucNotifyIndex++;
              }
              else
              {
                 /* No action */
              }
            } /*End of For Loop*/
            if (LucNotifyIndex > MCU_ZERO)
            {
              /* Get the notification index */
              LucNotifyIndex = LucNotifyIndex - MCU_ONE;
              /* Check whether notification function  configured or not */
              /* QAC Warning: START Msg (2:2824)-4 */
              /* MISRA Violation: START Msg(4:0491)-2 */
              if (NULL_PTR !=
                             LpMiNotfyFunc[LucNotifyIndex].pNotificationFuncPtr)
              /* END Msg(4:0491)-2 */
              {
              /* END Msg(2:2824)-4 */
                /* Invoke the configured notification function */
                /* MISRA Violation: START Msg(4:0491)-2 */
                LpMiNotfyFunc[LucNotifyIndex].pNotificationFuncPtr();
                /* END Msg(4:0491)-2 */
              }
              else
              {
                 /* No action */
              }
            } /*End of if (LucNotifyIndex > MCU_ZERO)*/
            else
            {
               /* No action */
            }
            /* Implements MCU_ESDD_UD_029 */
            #if (STD_ON == MCU_GET_RAM_STATE_API )
            /* Check local and global ram error */
            if (((MCU_SIXTEEN <= LucLoopCount) &&
                (MCU_EIGHTEEN >= LucLoopCount)) ||
                ((MCU_TWENTYONE <= LucLoopCount) &&
                (MCU_TWENTYFIVE >= LucLoopCount)))
            {
              /* Set the ram state variable  */
              Mcu_GblRAMInitStatus = MCU_TRUE;
            }
            else
            {
               /* No action */
            }
            #endif /*#if (STD_ON == MCU_GET_RAM_STATE_API )*/
          }/*End of if (((LulReg0DataValue >> LucLoopCount)
                                                      & MCU_ONE) == MCU_ONE)*/
          else
          {
             /* No action */
          }
        } /*End of for loop*/
        /* Initialize the retry count */
        LucLoopCount = MCU_LOOPCOUNT;
        /* Clear the particular Maskable interrupt source */
        do
        {
          /* Write data to protection command register */
          Ecm0_BaseAddress[LucEcmIndex]->PCMD1 = MCU_WRITE_DATA;
          /* Write the correct value to the Error source clear register */
          Ecm0_BaseAddress[LucEcmIndex]->ESSTC0  = LulReg0DataValue;
          /* Write the inverted value to the Error source clear register */
          Ecm0_BaseAddress[LucEcmIndex]->ESSTC0 = ~LulReg0DataValue;
          /* Write the correct value to the Error source clear register */
          Ecm0_BaseAddress[LucEcmIndex]->ESSTC0 = LulReg0DataValue;
          LucLoopCount--;
        }while ((LucLoopCount > MCU_ZERO) &&
                       (Ecm0_BaseAddress[LucEcmIndex]->PS == (uint32)MCU_ONE));
        /* Read back the Error source clear register*/
          MCU_MASKED_CHECK_WRITE_VERIFY_RUNTIME
            (&(Ecmm0_BaseAddress[LucEcmIndex]->ESSTR0),
                       (uint32)MCU_ERROR_SOURCE_STS, (uint32)MCU_FULL_MASK,
                                                           MCU_ECM_EIC_ISR_SID)
        /*Check if Register write is success or not*/
        if ((uint32)MCU_ONE == Ecm0_BaseAddress[LucEcmIndex]->PS )
        {
          /* Implements MCU_ESDD_UD_038*/
          /*Writing to write-protected register failed and report production
            error */
          Dem_ReportErrorStatus(MCU_E_WRITE_TIMEOUT_FAILURE,
                                                    DEM_EVENT_STATUS_FAILED);
          /* Set the flag to true value */
          LblDemReported = MCU_TRUE;
        }
        else
        {
           /* No action */
        }
      } /*End of if (LulReg0DataValue != MCU_ZERO ) */
      else
      {
        /* No action */
      }
      /*Check if DEM Error is Reported or not */
      if(MCU_FALSE == LblDemReported)
      {
        LulReg1DataValue = ((Ecmm0_BaseAddress[LucEcmIndex]->ESSTR1) &
                                 (Mcu_GpEcmSetting->ulEcmMaskInterReg1value));
        /*Check if any of the ECM Error source(Reg1) has occurred which is
          configured as MI */
        if ((uint32)MCU_ZERO != LulReg1DataValue)
        {
          /* Find the total number of ecm source configured in reg0 for MI */
          for (LucMiCount = MCU_ZERO; LucMiCount < MCU_THIRTYTWO; LucMiCount++)
          {
            /* Total number of ecm sources for MI */
            if ((uint32)MCU_ONE ==
                   (((Mcu_GpEcmSetting->ulEcmMaskInterReg0value) >> LucMiCount)
                                                            & (uint32)MCU_ONE))
            {
              /* Increment the MI Index Reg0 */
              LucMiIndexReg0++;
            }
            else
            {
              /* No action */
            }
          } /*End of for loop*/
          for (LucLoopCount = MCU_ZERO; LucLoopCount < MCU_THIRTYTWO;
                                                          LucLoopCount++)
          {
            if ((uint32)MCU_ONE == ((LulReg1DataValue >> LucLoopCount) &
                                                            (uint32)MCU_ONE))
            {
              /* Find the  notification index for the particular ecm source.
              * step1.find the total number of configured ecm error sources
              * for MI upto this current source.
              * step2.Find the noticiation index for current ecm source =
              * "value in step1- MCU_ONE + LucMiIndexReg0"
              */
              /* Initialize the notification index */
              LucNotifyIndex = MCU_ZERO;
              for (LucMiCount = MCU_ZERO; LucMiCount <= LucLoopCount;
                                                                LucMiCount++)
              {
                /* total number of configured ecm error sources
                * for MI upto this current source
                */
                /* MISRA Violation: START Msg(4:0715)-3 */
                if ((uint32)MCU_ONE ==
                    (((Mcu_GpEcmSetting->ulEcmMaskInterReg1value) >> LucMiCount)
                                                            & (uint32)MCU_ONE))
                /* END Msg(4:0715)-1 */
                {
                  /* Increment the notify index */
                  LucNotifyIndex++;
                }
                else
                {
                   /* No action */
                }
              } /*End of for loop*/
              if (MCU_ZERO < LucNotifyIndex)
              {
                /* get the notification index */
                LucNotifyIndex = (LucNotifyIndex - MCU_ONE) + LucMiIndexReg0;
                /* Check whether notification function  configured or not */
                /* MISRA Violation: START Msg(4:0715)-3 */
                /* MISRA Violation: START Msg(4:0491)-2 */
                if (NULL_PTR !=
                            LpMiNotfyFunc[LucNotifyIndex].pNotificationFuncPtr)
                /* END Msg(4:0491)-2 */
                {
                /* END Msg(4:0715)-3 */
                  /* Invoke the configured notification function */
                  /* MISRA Violation: START Msg(4:0491)-2 */
                  LpMiNotfyFunc[LucNotifyIndex].pNotificationFuncPtr();
                  /* END Msg(4:0491)-2 */
                }
                else
                {
                  /* No action */
                }
              }/*End of if (LucNotifyIndex > MCU_ZERO)*/
              else
              {
                 /* No action */
              }
              /* Implements MCU_ESDD_UD_029 */
              #if (STD_ON == MCU_GET_RAM_STATE_API)
              /* Check local and global ram error */
              if ((MCU_EIGHT == LucLoopCount ) || (MCU_NINE == LucLoopCount)  ||
                  (MCU_SIXTEEN == LucLoopCount)||
                  (MCU_SEVENTEEN == LucLoopCount)||
                  ((MCU_TWENTYONE <= LucLoopCount) &&
                  (MCU_TWENTYFIVE >= LucLoopCount)))
              {
                /* Set the ram state variable  */
                Mcu_GblRAMInitStatus = MCU_TRUE;
              }
              else
              {
                /* No action */
              }
              #endif
            }/*End of if(((LulReg1DataValue >> LucLoopCount)
                                                        & MCU_ONE)== MCU_ONE)*/
            else
            {
               /* No action */
            }
          } /*End of For loop*/
          /* Initialize the retry count */
          LucLoopCount = MCU_LOOPCOUNT;
          /* Clear the particular maskable interrupt source */
          do
          {
            /* Write data to protection command register */
            Ecm0_BaseAddress[LucEcmIndex]->PCMD1 = MCU_WRITE_DATA;
            /* Write the correct value to the Error source clear register */
            Ecm0_BaseAddress[LucEcmIndex]->ESSTC1  = LulReg1DataValue;
            /* Write the inverted value to the Error source clear register */
            Ecm0_BaseAddress[LucEcmIndex]->ESSTC1 = ~LulReg1DataValue;
            /* Write the correct value to the Error source clear register */
            Ecm0_BaseAddress[LucEcmIndex]->ESSTC1 = LulReg1DataValue;
            LucLoopCount--;
          }while ((LucLoopCount > MCU_ZERO) &&
                       (Ecm0_BaseAddress[LucEcmIndex]->PS == (uint32)MCU_ONE));
          /* Read back the Error source clear register*/
          MCU_MASKED_CHECK_WRITE_VERIFY_RUNTIME
              (&(Ecmm0_BaseAddress[LucEcmIndex]->ESSTR1),
                      (uint32)MCU_ERROR_SOURCE_STS, (uint32)MCU_FULL_MASK,
                                                         MCU_ECM_EIC_ISR_SID)
          /*Check if Register write is success or not*/
          /* Start Tag MCU_UT_009 */
          if ((uint32)MCU_ONE == Ecm0_BaseAddress[LucEcmIndex]->PS)
          {
            /* Implements MCU_ESDD_UD_038*/
            /* Writing to write-protected register failed and
            * report production error */
            Dem_ReportErrorStatus(MCU_E_WRITE_TIMEOUT_FAILURE,
                                                 DEM_EVENT_STATUS_FAILED);
            /* Set the flag to true value */
            LblDemReported = MCU_TRUE;
          }
          /* End Tag MCU_UT_009 */
          else
          {
             /* No action */
          }
        }/*End of if (LulReg1DataValue != MCU_ZERO)*/
        else
        {
           /* No action */
        }
      }
      else
      {
         /* No action */
      }
      /*Check if DEM Error is Reported or not */
      if(MCU_FALSE == LblDemReported)
      {
        LulReg2DataValue = ((Ecmm0_BaseAddress[LucEcmIndex]->ESSTR2) &
                               (Mcu_GpEcmSetting->ulEcmMaskInterReg2value));
        /*Check if any of the ECM Error source(Reg2) has occurred which is
          configured as MI */
        if ((uint32)MCU_ZERO != LulReg2DataValue)
        {
          /* Find the total number of ecm source configured in reg1 for MI */
          for (LucMiCount = MCU_ZERO; LucMiCount < MCU_THIRTYTWO; LucMiCount++)
          {
            /* Total number of ecm sources for MI */
            if ((uint32)MCU_ONE ==
               (((Mcu_GpEcmSetting->ulEcmMaskInterReg1value) >> LucMiCount)
                                                            & (uint32)MCU_ONE))
            {
              /* Increment the notify index */
              LucMiIndexReg1++;
            }
            else
            {
              /* No action */
            }
          } /*End of for loop*/
          for (LucLoopCount = MCU_ZERO; LucLoopCount < MCU_TWENTYNINE;
                                                    LucLoopCount++)
          {
            if ((uint32)MCU_ONE == ((LulReg2DataValue >> LucLoopCount) &
                                                            (uint32)MCU_ONE))
            {
              /* Find the  notification index for the particular ecm source.
              * step1.find the total number of configured ecm error sources
              * for MI upto this current source.
              * step2.Find the noticiation index for current ecm source =
              * "value in step1- MCU_ONE +LucMiIndexReg0 +LucMiIndexReg1"
              */
              /* Initialize the notification index */
              LucNotifyIndex = MCU_ZERO;
              for (LucMiCount = MCU_ZERO; LucMiCount <= LucLoopCount;
                                                                LucMiCount++)
              {
                /* total number of configured ecm error sources
                * for MI upto this current source
                */
                /* MISRA Violation: START Msg(4:0715)-3 */
                if ((uint32)MCU_ONE ==
                   (((Mcu_GpEcmSetting->ulEcmMaskInterReg2value) >> LucMiCount)
                                                            & (uint32)MCU_ONE))
                {
                /* END Msg(4:0715)-3 */
                  /* Increment the notify index */
                  LucNotifyIndex++;
                }
                else
                {
                  /* No action */
                }

              } /*End of for loop*/
              if (MCU_ZERO < LucNotifyIndex)
              {
                /* get the notification index */
                LucNotifyIndex = (LucNotifyIndex - MCU_ONE) + LucMiIndexReg0
                                                            + LucMiIndexReg1;
                /* Check whether notification function  configured or not */
                 /* MISRA Violation: START Msg(4:0715)-3 */
                /* MISRA Violation: START Msg(4:0491)-2 */
                if (NULL_PTR !=
                            LpMiNotfyFunc[LucNotifyIndex].pNotificationFuncPtr)
                /* END Msg(4:0491)-2 */
                {
                  /* END Msg(4:0715)-3 */
                  /* Invoke the configured notification function */
                  /* MISRA Violation: START Msg(4:0491)-2 */
                  LpMiNotfyFunc[LucNotifyIndex].pNotificationFuncPtr();
                  /* END Msg(4:0491)-2 */
                }
                else
                {
                   /* No action */
                }
              }/*End of if (LucNotifyIndex > MCU_ZERO)*/
              else
              {
                 /* No action */
              }
            }/* End of if(((LulReg2DataValue >> LucLoopCount)
                                                         & MCU_ONE)==MCU_ONE)*/
            else
            {
               /* No action */
            }
          } /*End of For loop*/

          /* Initialize the retry count */
          LucLoopCount = MCU_LOOPCOUNT;
          /* Clear the particular Maskable interrupt source */
          do
          {
            /* Write data to protection command register */
            Ecm0_BaseAddress[LucEcmIndex]->PCMD1 = MCU_WRITE_DATA;
            /* Write the correct value to the Error source clear register */
            Ecm0_BaseAddress[LucEcmIndex]->ESSTC2  = LulReg2DataValue;
            /* Write the inverted value to the Error source clear register */
            Ecm0_BaseAddress[LucEcmIndex]->ESSTC2 = ~LulReg2DataValue;
            /* Write the correct value to the Error source clear register */
            Ecm0_BaseAddress[LucEcmIndex]->ESSTC2 = LulReg2DataValue;
            LucLoopCount--;
          }while ((LucLoopCount > MCU_ZERO) &&
                       (Ecm0_BaseAddress[LucEcmIndex]->PS == (uint32)MCU_ONE));
          /* Read back the Error source clear register*/
          MCU_MASKED_CHECK_WRITE_VERIFY_RUNTIME
              (&(Ecmm0_BaseAddress[LucEcmIndex]->ESSTR2),
                       (uint32)MCU_ERROR_SOURCE_STS, (uint32)MCU_FULL_MASK,
                                                           MCU_ECM_EIC_ISR_SID)
          /*Check if Register write is success or not*/
          /* Start Tag MCU_UT_009 */
          if (MCU_ONE == Ecm0_BaseAddress[LucEcmIndex]->PS)
          {
            /* Implements MCU_ESDD_UD_038*/
            /* Writing to write-protected register failed and
            * report production error */
            Dem_ReportErrorStatus(MCU_E_WRITE_TIMEOUT_FAILURE,
                                          DEM_EVENT_STATUS_FAILED);
            /* Set the flag to true value */
            LblDemReported = MCU_TRUE;
          }
          /* End Tag MCU_UT_009 */
          else
          {
             /* No action */
          }
        }/*End of if (LulReg2DataValue != MCU_ZERO)*/
        else
        {
           /* No action */
        }
      }
      else
      {
         /* No action */
      }

      if ((LulReg0DataValue == (LulReg0DataValue &
                              Mcu_GpEcmSetting->ulEcmDelayTimerReg0Value)) ||
          (LulReg1DataValue == (LulReg1DataValue &
                              Mcu_GpEcmSetting->ulEcmDelayTimerReg1Value)) ||
          (LulReg2DataValue == (LulReg2DataValue &
                              Mcu_GpEcmSetting->ulEcmDelayTimerReg2Value)))
         {
           /* Initialize the retry count to config value */
           LucLoopCount = MCU_LOOPCOUNT;
           /* Stop the delay timer */
           do
           {
             /* Write data to protection command register */
             Ecm0_BaseAddress[LucEcmIndex]->PCMD1  = MCU_WRITE_DATA;
             /* Write the correct value to the Error source clear register */
             Ecm0_BaseAddress[LucEcmIndex]->DTMCTL = MCU_ECM_DELAY_TIMER_STOP;
             /* Write the inverted value to the Error source clear register */
             Ecm0_BaseAddress[LucEcmIndex]->DTMCTL = ~MCU_ECM_DELAY_TIMER_STOP;
             /* Write the correct value to the Error source clear register */
             Ecm0_BaseAddress[LucEcmIndex]->DTMCTL = MCU_ECM_DELAY_TIMER_STOP;
             LucLoopCount--;
           }while ((LucLoopCount > MCU_ZERO) &&
                   (Ecm0_BaseAddress[LucEcmIndex]->PS == MCU_ONE));

           if (MCU_ONE == Ecm0_BaseAddress[LucEcmIndex]->PS )
           {
            /* Implements MCU_ESDD_UD_038*/
             /*Writing to write-protected register failed and report production
               error */
             Dem_ReportErrorStatus(MCU_E_WRITE_TIMEOUT_FAILURE,
                                                       DEM_EVENT_STATUS_FAILED);
             /* Set the flag to true value */
             LblDemReported = MCU_TRUE;
           }
           else
           {
             /* No action  */
           }

       /* wait until status bit becomes zero*/
       LucLoopCount = MCU_LOOPCOUNT;
       do
       {
         LucLoopCount = LucLoopCount - MCU_ONE;
       /* Start Tag MCU_UT_004 */
       }while(((Ecm0_BaseAddress[LucEcmIndex]->DTMCTL) !=
             MCU_ECM_DELAY_TIMER_STOP_STS) && (LucLoopCount > MCU_ZERO));
       /* End Tag MCU_UT_004 */
          /* Read back the Error source clear register*/
         MCU_MASKED_CHECK_WRITE_VERIFY_RUNTIME
            (&(Ecm0_BaseAddress[LucEcmIndex]->DTMCTL),
               (uint32)MCU_ECM_DELAY_TIMER_STOP_STS, (uint32)MCU_DTMCTL_WV_MASK,
                                                           MCU_ECM_EIC_ISR_SID)
           /* Initialize the retry count to config value */
           LucLoopCount = MCU_LOOPCOUNT;
           /* Restart the delay timer */
           do
           {
             /* Write data to protection command register */
             Ecm0_BaseAddress[LucEcmIndex]->PCMD1  = MCU_WRITE_DATA;
             /* Write the correct value to the Error source clear register */
             Ecm0_BaseAddress[LucEcmIndex]->DTMCTL = MCU_ECM_DELAY_TIMER_START;
             /* Write the inverted value to the Error source clear register */
             Ecm0_BaseAddress[LucEcmIndex]->DTMCTL = ~MCU_ECM_DELAY_TIMER_START;
             /* Write the correct value to the Error source clear register */
             Ecm0_BaseAddress[LucEcmIndex]->DTMCTL = MCU_ECM_DELAY_TIMER_START;
             LucLoopCount--;
           }while ((LucLoopCount > MCU_ZERO) &&
                   (Ecm0_BaseAddress[LucEcmIndex]->PS == MCU_ONE));
           if (MCU_ONE == Ecm0_BaseAddress[LucEcmIndex]->PS )
           {
            /* Implements MCU_ESDD_UD_038*/
             /*Writing to write-protected register failed and report production
               error */
             Dem_ReportErrorStatus(MCU_E_WRITE_TIMEOUT_FAILURE,
                                                       DEM_EVENT_STATUS_FAILED);
             /* Set the flag to true value */
             LblDemReported = MCU_TRUE;
           }
           else
           {
             /* No action  */
           }

       /* wait until status bit becomes one*/
       LucLoopCount = MCU_LOOPCOUNT;
       do
       {
         LucLoopCount = LucLoopCount - MCU_ONE;
         /* Start Tag MCU_UT_004 */
       }while(((Ecm0_BaseAddress[LucEcmIndex]->DTMCTL) !=
           MCU_ECM_DELAY_TIMER_START_STS) && (LucLoopCount > MCU_ZERO));
       /* End Tag MCU_UT_004 */
          /* Read back the Error source clear register*/
         MCU_MASKED_CHECK_WRITE_VERIFY_RUNTIME
            (&(Ecm0_BaseAddress[LucEcmIndex]->DTMCTL),
              (uint32)MCU_ECM_DELAY_TIMER_START_STS, (uint32)MCU_DTMCTL_WV_MASK,
                                                           MCU_ECM_EIC_ISR_SID)
         }
         else
         {
           /* No action  */
         }
      }
           /* Increment the LucEcmIndex */
      LucEcmIndex++;
    }while((LucEcmIndex < MCU_NO_OF_ECM_INSTANCES) &&
                                            (MCU_FALSE == LblDemReported ));
}

#define MCU_STOP_SEC_CODE_FAST
#include "MemMap.h"

/*******************************************************************************
**                          End of File                                       **
*******************************************************************************/
