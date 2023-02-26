/*============================================================================*/
/* Project      = AUTOSAR Renesas P1x-C MCAL Components                       */
/* Module       = Spi_Scheduler.c                                             */
/* $Revision: 368026 $                                                        */
/* $Date: 2017-02-24 10:58:50 +0000 (Fri, 24 Feb 2017) $                      */
/*============================================================================*/
/*                                  COPYRIGHT                                 */
/*============================================================================*/
/* Copyright(c) 2015-2017  Renesas Electronics Corporation                    */
/*============================================================================*/
/* Purpose:                                                                   */
/* This file contains the implementation of queue for multiple transmit       */
/* requests.                                                                  */
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
 * V1.0.1:  09-Feb-2016  : As part of P1x-C 4.01.00 release the following
 *                         changes were made:
 *                         1. As per ARDAAAF-381, in Spi_PushToQueue function
 *                         temporary local variable 'LddJobCountTemp' added for
 *                         placing the remaining jobs at the bottom of queue.
 *                         2. Copyright information is updated.
 *                         3. As per ARDAAAF-380, invoke of start-notification
 *                            function removed from Spi_PopFromQueue() function.
 *                         4. As per ARDAAAF-416, in Spi_PopFromQueue()
 *                            last job is transmission check updated.
 *                         5. The file adapted from P1x.
 * V2.0.0:  16-Feb-2017  : Following changes were made:
 *                         1. As part of JIRA ticket ARDAAAF-946 fix, all the API's
 *                            are adapted from P1x.
 *                         2. As part of JIRA ticket ARDAAAF-436 fix,in order to
 *                            update status as 'SPI_JOB_QUEUED' of all jobs
 *                            which are pushed in to job queue, updated
 *                            Spi_PushWhenQueueNotEmpty and
 *                            Spi_PushRemainingJobsToQueue functions.
 *                         3. As part of JIRA ticket ARDAAAF-778 fix,
 *                            Fixed/Justified MISRA warnings.
 *                         4. As part of JIRA ticket ARDAAAF-443 fix, added NULL
 *                            pointer check for Spi_GpConfigPtr->pStatusArray
 *                            and Spi_GpConfigPtr->pStsValueArray in
 *                            Spi_ProcessCancelledSequence and
 *                            Spi_ProcessCompletedSequence functions.
 *                         5. Added UD ID's 'SPI_ESDD_UD_xxx' and Requirements
 *                            at respective places.
 *                         6. As part of JIRA ticket ARDAAAF-1322 fix,unit
 *                            testing activity UT ID TAGs 'SPI_UT_xxx' are added
 *                             for the uncovered parts of the code.
 *                         7. Copyright information updated.
 *                         8. As part of JIRA ticket ARDAAAF-1315, added
 *                            untraced requirements.
 */
/******************************************************************************/

/*******************************************************************************
**                      Include Section                                       **
*******************************************************************************/
#include "Spi_Scheduler.h"

/*******************************************************************************
**                      Version Information                                   **
*******************************************************************************/
/* AUTOSAR Release version information */
/* MISRA Violation: START Msg(6:0857)-8 */
#define SPI_SCHEDULER_C_AR_RELEASE_MAJOR_VERSION \
                                              SPI_AR_RELEASE_MAJOR_VERSION_VALUE
#define SPI_SCHEDULER_C_AR_RELEASE_MINOR_VERSION \
                                              SPI_AR_RELEASE_MINOR_VERSION_VALUE
#define SPI_SCHEDULER_C_AR_RELEASE_PATCH_VERSION \
                                           SPI_AR_RELEASE_REVISION_VERSION_VALUE
/* END Msg(6:0857)-8 */

/* MISRA Violation: START Msg(6:0857)-8 */
/* File version information */
#define SPI_SCHEDULER_C_SW_MAJOR_VERSION    SPI_SW_MAJOR_VERSION_VALUE
#define SPI_SCHEDULER_C_SW_MINOR_VERSION    SPI_SW_MINOR_VERSION_VALUE
/* END Msg(6:0857)-8 */

/*******************************************************************************
**                      Version Check                                         **
*******************************************************************************/
#if (SPI_SCHEDULER_AR_RELEASE_MAJOR_VERSION != \
                                       SPI_SCHEDULER_C_AR_RELEASE_MAJOR_VERSION)
  #error "Spi_Scheduler.c : Mismatch in Release Major Version"
#endif

#if (SPI_SCHEDULER_AR_RELEASE_MINOR_VERSION != \
                                       SPI_SCHEDULER_C_AR_RELEASE_MINOR_VERSION)
  #error "Spi_Scheduler.c : Mismatch in Release Minor Version"
#endif

#if (SPI_SCHEDULER_AR_RELEASE_REVISION_VERSION != \
                                       SPI_SCHEDULER_C_AR_RELEASE_PATCH_VERSION)
  #error "Spi_Scheduler.c : Mismatch in Release Revision Version"
#endif

#if (SPI_SCHEDULER_SW_MAJOR_VERSION != SPI_SCHEDULER_C_SW_MAJOR_VERSION)
  #error "Spi_Scheduler.c : Mismatch in Software Major Version"
#endif

#if (SPI_SCHEDULER_SW_MINOR_VERSION != SPI_SCHEDULER_C_SW_MINOR_VERSION)
  #error "Spi_Scheduler.c : Mismatch in Software Minor Version"
#endif

/*******************************************************************************
**                      Global Data Types                                     **
*******************************************************************************/
/*******************************************************************************
**                      MISRA C Rule Violations                               **
*******************************************************************************/
/* 1. MISRA C RULE VIOLATION:                                                 */
/* Message       : (4:0488) Performing pointer arithmetic.                    */
/* Rule          : MISRA-C:2004 Rule 17.4                                     */
/* Justification : To have a better readability of the code which will help   */
/*                 for debugging purpose array indexing is not performed.     */
/* Verification  : However, part of the code is verified manually and it is   */
/*                 not having any impact.                                     */
/* Reference     : Look for START Msg(4:0488)-1 and                           */
/*                 END Msg(4:0488)-1 tags in the code.                        */
/******************************************************************************/

/* 2. MISRA C RULE VIOLATION:                                                 */
/* Message       : (4:2982) This assignment is redundant. The value of this   */
/*                 object is never used before being modified..               */
/* Rule          : MISRA-C:2004 Rule 21.1                                     */
/* Justification : Pointer variable have to be updated to use in the function */
/*                 called.                                                    */
/* Verification  : However, part of the code is verified manually and it is   */
/*                 not having any impact.                                     */
/* Reference     : Look for START Msg(4:2982)-2 and                           */
/*                 END Msg(4:2982)-2 tags in the code.                        */
/******************************************************************************/

/* 3. MISRA C RULE VIOLATION:                                                 */
/* Message      : (4:0489) The integer value 1 is being added or subtracted   */
/*                from a pointer.                                             */
/* Rule         : MISRA-C:2004 Rule 17.4                                      */
/* Justification: To access these pointers in optimized                       */
/*                way in this function                                        */
/* Verification : However, part of the code is verified                       */
/*                manually and it is not having any impact                    */
/* Reference    : Look for START Msg(4:0489)-3 and                            */
/*                END Msg(4:0489)-3 tags in the code.                         */
/*******************************************************************************
**                         QAC Warnings                                       **
*******************************************************************************/

/* 1. QAC Warning:                                                            */
/* Message       : (2:2824) Possible: Arithmetic operation on NULL pointer.   */
/* Rule          : NA                                                         */
/* Justification : The Pointers are generated using Post Build configurations.*/
/* Verification  : However, part of the code is verified manually and it is   */
/*                 not having any impact.                                     */
/* Reference     : Look for START Msg(2:2824)-1 and                           */
/*                 END Msg(2:2824)-1 tags in the code.                        */
/******************************************************************************/

/* 2. QAC Warning:                                                           */
/* Message       : (2:3206) The parameter is not used in this function.       */
/* Rule          : NA                                                         */
/* Justification : The parameter is used in this function when                */
/*                 SPI_HW_PRIORITY_ENABLED switch is enabled.                 */
/* Verification  : However, part of the code is verified manually and it is   */
/*                 not having any impact.                                     */
/* Reference     : Look for START Msg(2:3206)-2 and                          */
/*                 END Msg(2:3206)-2 tags in the code.                       */
/******************************************************************************/

/* 3.QAC Warning:                                                            */
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

/* 4. QAC Warning:                                                            */
/* Message       : (2:3227) The value of this function parameter is never     */
/*                 modified. It could be declared with the 'const' type       */
/*                 Qualifier.                                                 */
/* Rule          : NA                                                         */
/* Justification : The function parameters of AUTOSAR APIs and Vendor specific*/
/*                 APIs cannot be modified to be made as constant.            */
/* Verification  : However, part of the code is verified manually and it is   */
/*                 not having any impact.                                     */
/* Reference     : Look for START Msg(2:3227)-4 and                           */
/*                 END Msg(2:3227)-4 tags in the code.                        */
/******************************************************************************/

/* 5. QAC Warning:                                                            */
/* Message       : (2:2814) Possible: Dereference of NULL pointer.            */
/* Rule          : NA                                                         */
/* Justification : The Pointers generated using Post Build configurations may */
/*                 not be NULL.                                               */
/* Verification  : However, part of the code is verified manually and it is   */
/*                 not having any impact.                                     */
/* Reference     : Look for START Msg(2:2814)-5 and                           */
/*                 END Msg(2:2814)-5 tags in the code.                        */
/******************************************************************************/
/*******************************************************************************
**                      Function Definitions                                  **
*******************************************************************************/

/*******************************************************************************
** Function Name      : Spi_PushToQueue
**
** Service ID         : Not Applicable
**
** Description        : This function is to push the job into the queue
**
** Re-entrancy        : Non-Reentrant
**
** Input Parameters   : Sequence - Sequence ID
**
** InOut Parameters   : None
**
** Output Parameters  : None
**
** Return parameter   : void
**
** Preconditions      : None
**
** Global Variable    : Spi_GpFirstJob, Spi_GpFirstSeq,Spi_GpConfigPtr
**                      Spi_GpFirstJobList, Spi_GaaJobQueue,
**                      Spi_GddQueueIndex, Spi_GaaHighPriorityCommRequest
**                      Spi_GaaHighPriorityCommActive
**
** Function Invoked   : Spi_PushRemainingJobsToQueue,
**                      Spi_PushInterruptableSeqJobs
**
** Registers Used     : None
******************************************************************************/
/* Implements SPI_ESDD_UD_036 */
/* Implements SPI_ESDD_UD_144 */
#if (((SPI_DIRECT_ACCESS_MODE == STD_ON) && \
    (SPI_HWUNIT_ASYNCHRONOUS == STD_ON)) || (SPI_FIFO_MODE == STD_ON) || \
                                            (SPI_HW_PRIORITY_ENABLED == STD_ON))

#define SPI_START_SEC_PRIVATE_CODE
#include "MemMap.h"
/* Implements SPI127, SPI269, SPI059, SPI220_Conf, SPI093, SPI125, SPI126 */
/* Implements SPI168, SPI358, SPI117, SPI121, SPI122, SPI222_Conf */
/* Implements SPI123, SPI230_Conf */
/* START Msg(2:3227)-4 */
FUNC(void, SPI_PRIVATE_CODE) Spi_PushToQueue
                  (Spi_SequenceType Sequence, uint8 LucHWMemoryMode)
/* END Msg(2:3227)-4 */

{
  /* Declare a local pointer to point to the Sequence Config Data */
  P2CONST(Spi_SequenceConfigType, AUTOMATIC, SPI_CONFIG_CONST) LpSeqConfig;
  #if (SPI_INTERRUPTIBLE_SEQ_ALLOWED == STD_ON)
  /* Declare a local pointer to point to the job list */
  P2CONST(Spi_JobListType, AUTOMATIC, SPI_CONFIG_CONST) LpJobList;
  #endif

  #if (SPI_HW_PRIORITY_ENABLED == STD_ON)
  P2CONST(Spi_JobConfigType, AUTOMATIC, SPI_CONFIG_CONST) LpReqJobConfig;
  Spi_HWUnitType LddHWUnitNumber;
  Spi_HWUnitType LddHWUnit;
  #endif
  Spi_JobType LddNoOfJobs;
  uint8 LucQueueIndex;
  #if (SPI_INTERRUPTIBLE_SEQ_ALLOWED == STD_ON)
  Spi_JobType LddCounterTop;
  Spi_JobType LddJob;
  Spi_SequenceType LddSequence;
  uint8 LucReqJobPriority;
  #endif
  VAR(Spi_JobDetails, SPI_CONST) Spi_JobQueueDetails;
  P2VAR(Spi_JobDetails, AUTOMATIC, SPI_CONFIG_CONST) Spi_ReqJobDetails;

  Spi_ReqJobDetails = &Spi_JobQueueDetails;
  /* START Msg(2:2824)-1 */
  /* MISRA Violation: START Msg(4:0488)-1 */
  /* Get the pointer to the sequence structure */
  LpSeqConfig = Spi_GpFirstSeq + Sequence;
  /* END Msg(4:0488)-1 */
  /* END Msg(2:2824)-1 */
  /* START Msg(2:2814)-5 */
  /* Get the number of jobs configured for the requested sequence */
  LddNoOfJobs = LpSeqConfig->ddNoOfJobs;
  /* END Msg(2:2814)-5 */
  /*
   * Initialize a counter to zero to count number of jobs in requested
   * sequence 0
   */
  Spi_ReqJobDetails->ddCntrForJobsReq = LpSeqConfig->ddNoOfJobs;
  (Spi_ReqJobDetails->ddJobCount) = LddNoOfJobs;
  /* Update the job result variable */
  (Spi_ReqJobDetails->ddReqJobListIndex) =
                        (LpSeqConfig->ddJobListIndex) + (LddNoOfJobs - SPI_ONE);
  /* START Msg(2:2824)-1 */
  /* MISRA Violation: START Msg(4:0488)-1 */
  (Spi_ReqJobDetails->pReqJobList) = Spi_GpFirstJobList +
                                        (Spi_ReqJobDetails->ddReqJobListIndex);
  /* END Msg(4:0488)-1 */
  /* END Msg(2:2824)-1 */
  #if (SPI_HW_PRIORITY_ENABLED == STD_ON)
  /* MISRA Violation: START Msg(4:0488)-1 */
  /* START Msg(2:2824)-1 */
  /* Get the pointer of the last job linked to this sequence */
  LpReqJobConfig = Spi_GpFirstJob +
                                ((Spi_ReqJobDetails->pReqJobList)->ddJobIndex);
  /* END Msg (4:0488)-1 */
  /* END Msg (2:2824)-1 */
  /* START Msg(2:2814)-5 */
  /* Get the HW Unit index of the any of the job in the sequence */
  LddHWUnit = LpReqJobConfig->ddHWUnitIndex;

  LddHWUnitNumber = Spi_GpConfigPtr->aaHWUnitNumber[LddHWUnit];
  /* END Msg(2:2814)-5 */
  #endif
  if (SPI_DIRECT_ACCESS_MODE_CONFIGURED == LucHWMemoryMode)
  {
    #if (SPI_HW_PRIORITY_ENABLED == STD_ON)
    if (SPI_FALSE == Spi_GaaHighPriorityCommRequest[LddHWUnitNumber])
    #endif
    {
      /* For direct access mode lowest queue index is zero */
      Spi_ReqJobDetails->ddLowestQueueIndex = SPI_ZERO;
      LucQueueIndex = LucHWMemoryMode;
    }
    #if (SPI_HW_PRIORITY_ENABLED == STD_ON)
    else
    {
      (Spi_ReqJobDetails->ddLowestQueueIndex ) =
                  Spi_GpConfigPtr->aaHighprioirtyJobQueueIndex[LddHWUnitNumber];
      LucQueueIndex =
                     (uint8)(LddHWUnitNumber + SPI_MAX_CSIH_HW_INDEX + SPI_TWO);
    }
    #endif
  }
  else
  {
  /* START Msg(2:2814)-5 */
    (Spi_ReqJobDetails->ddLowestQueueIndex ) =
                                       Spi_GpConfigPtr->ddDirectAccessQueueSize;
  /* END Msg(2:2814)-5 */
    LucQueueIndex = LucHWMemoryMode;
  }

  #if (SPI_INTERRUPTIBLE_SEQ_ALLOWED == STD_ON)
  #if (SPI_HW_PRIORITY_ENABLED == STD_ON)
  if (SPI_FALSE == Spi_GaaHighPriorityCommActive[LddHWUnitNumber])
  #endif
  {
    LddCounterTop = Spi_GddQueueIndex[LucQueueIndex];
    do
    {
      /* MISRA Violation: START Msg(4:0488)-1 */
      /* Get the index of the job in the requested sequence */
      LddJob = (Spi_GpFirstJobList +
                          (Spi_ReqJobDetails->ddReqJobListIndex))->ddJobIndex;
      /* END Msg(4:0488)-1 */
      /* START Msg(2:2824)-1 */
      /* MISRA Violation: START Msg(4:0488)-1 */
      /* Get the priority of the job in the requested sequence */
      LucReqJobPriority = (Spi_GpFirstJob + LddJob)->ucJobPriority;
      /* END Msg(4:0488)-1 */
      /* END Msg(2:2824)-1 */
      /*
       * Initialize a counter to zero to count number of queue elements
       * available
       */
      Spi_ReqJobDetails->ddCntrForJobsOnGoing = LddCounterTop;
      if (SPI_ZERO < (Spi_ReqJobDetails->ddCntrForJobsOnGoing))
      {
        do
        {
          /*
           * Get the sequence index of the next job in the queue.
           * Job in the queue now is on-going
           */
          (Spi_ReqJobDetails->ddJobListIndex) =
                    Spi_GaaJobQueue[(Spi_ReqJobDetails->ddCntrForJobsOnGoing)];
            /* START Msg(2:2824)-1 */
            /* MISRA Violation: START Msg(4:0488)-1 */
          LpJobList = Spi_GpFirstJobList + (Spi_ReqJobDetails->ddJobListIndex);
          /* END Msg(4:0488)-1 */
          /* END Msg(2:2824)-1 */

        /* START Msg(2:2814)-5 */
          /* Get the sequence id that the job belongs to */
          LddSequence = LpJobList->ddSequenceIndex;
        /* END Msg(2:2814)-5 */

          /* Check if the sequence of the next job is interruptible */
          /* MISRA Violation: START Msg(4:0488)-1 */
          if ((SPI_TRUE ==
               ((Spi_GpFirstSeq + LddSequence)->blInterruptibleSequence)) ||
                                        (SPI_TRUE == (LpJobList->blIsLastJob)))
          /* END Msg(4:0488)-1 */
          {

            Spi_PushInterruptableSeqJobs(LpSeqConfig,
                       &Spi_JobQueueDetails, LucReqJobPriority, LucQueueIndex );
          }
          else
          {
            /* No action required */
          }

          if (SPI_ZERO < (Spi_ReqJobDetails->ddCntrForJobsOnGoing))
          {
            (Spi_ReqJobDetails->ddCntrForJobsOnGoing)--;
          }
          /*Start : SPI_UT_011*/
          else
          {
            /* No action required */
          }
          /* End : SPI_UT_011 */
        }while ((Spi_ReqJobDetails->ddCntrForJobsOnGoing) >
                                      (Spi_ReqJobDetails->ddLowestQueueIndex ));

      }
      else
      {
        /* No action required */
      }

      (Spi_ReqJobDetails->ddCntrForJobsReq)--;
      (Spi_ReqJobDetails->ddReqJobListIndex)--;
      /* MISRA Violation: START Msg(4:0489)-3 */
      /* MISRA Violation: START Msg(4:2982)-2 */
      (Spi_ReqJobDetails->pReqJobList)--;
      /* END Msg(4:2982)-2 */
      /* END Msg(4:0489)-3 */
    }while (SPI_ZERO < (Spi_ReqJobDetails->ddCntrForJobsReq));
  }
  #if (SPI_HW_PRIORITY_ENABLED == STD_ON)
  else
  {
    /* No action required */
  }
  #endif

  /* Check if the remaining job is greater than zero */
  if (SPI_ZERO < (Spi_ReqJobDetails->ddJobCount))
  #endif /* #if (SPI_INTERRUPTIBLE_SEQ_ALLOWED == STD_ON) */
  {
    Spi_PushRemainingJobsToQueue(Sequence,
        (Spi_ReqJobDetails->ddReqJobListIndex), (Spi_ReqJobDetails->ddJobCount),
        (Spi_ReqJobDetails->ddLowestQueueIndex ), LucQueueIndex);
  } /* End of if ((Spi_ReqJobDetails->ddJobCount) > SPI_ZERO) */
  #if (SPI_INTERRUPTIBLE_SEQ_ALLOWED == STD_ON)
  else
  #endif
  {
    /* No action required */
  }
}

#define SPI_STOP_SEC_PRIVATE_CODE
#include "MemMap.h"

#endif /*
        * End of (((SPI_DIRECT_ACCESS_MODE == STD_ON) && \
        * (SPI_HWUNIT_ASYNCHRONOUS == STD_ON)) || (SPI_FIFO_MODE == STD_ON) \
        *                                || (SPI_HW_PRIORITY_ENABLED == STD_ON))
        */

/*******************************************************************************
** Function Name      : Spi_PushRemainingJobsToQueue
**
** Service ID         : Not Applicable
**
** Description        : This function is to push the job into the queue
**
** Re-entrancy        : Non-Reentrant
**
** Input Parameters   : Sequence - Sequence ID
**
** InOut Parameters   : None
**
** Output Parameters  : None
**
** Return parameter   : void
**
** Preconditions      : None
**
** Global Variable    : Spi_GpFirstJob, Spi_GpFirstSeq,
**                      Spi_GpFirstJobList, Spi_GaaJobQueue, Spi_GblQueueStatus,
**                      Spi_GaaJobCount, Spi_GddQueueIndex, Spi_GaaJobResult
**
** Function Invoked   : SPI_ENTER_CRITICAL_SECTION
**                      SPI_EXIT_CRITICAL_SECTION
**
** Registers Used     : None
******************************************************************************/
/* Implements SPI_ESDD_UD_077 */
#if (((SPI_DIRECT_ACCESS_MODE == STD_ON) && \
    (SPI_HWUNIT_ASYNCHRONOUS == STD_ON)) || (SPI_FIFO_MODE == STD_ON) || \
                                            (SPI_HW_PRIORITY_ENABLED == STD_ON))

#define SPI_START_SEC_PRIVATE_CODE
#include "MemMap.h"
/* Implements EAAR_PN0034_NR_0003, EAAR_PN0034_FR_0030, EAAR_PN0034_FR_0061 */
/* START Msg(2:3227)-4 */
FUNC(void, SPI_PRIVATE_CODE) Spi_PushRemainingJobsToQueue
                  (Spi_SequenceType Sequence, Spi_JobType LddReqJobListIndex,
                   Spi_JobType LddJobCount, Spi_JobType LddLowestQueueIndex,
                   uint8 LucQueueIndex)
/* END Msg(2:3227)-4 */
{
  /* Declare a local pointer to point to the Sequence Config Data */
  P2CONST(Spi_SequenceConfigType, AUTOMATIC, SPI_CONFIG_CONST) LpSeqConfig;
  /* Declare a local pointer to point to the requested linked job list */
  P2CONST(Spi_JobListType, AUTOMATIC, SPI_CONFIG_CONST) LpReqJobList;
  Spi_JobType LddCntrForJobsReq;
  Spi_JobType LddPreviousQueueIndex;
  Spi_JobType LddCurrentQueueMax;
  Spi_JobType LddCounterMaxValue;
  Spi_JobType LddJobCountVal;
  /* START Msg(2:2824)-1 */
  /* MISRA Violation: START Msg(4:0488)-1 */
  /* Get the pointer to the sequence structure */
  LpSeqConfig = Spi_GpFirstSeq + Sequence;
  /* END Msg(4:0488)-1 */
  /* END Msg(2:2824)-1 */

  /* Check if critical section protection is required */
  #if (SPI_CRITICAL_SECTION_PROTECTION == STD_ON)

  /* Disable relevant interrupts to protect this critical section */
  SPI_ENTER_CRITICAL_SECTION(SPI_RAM_DATA_PROTECTION);

  #endif

  /*
   * Check if the queue becomes empty by the time queue is to be
   * loaded
   */
  if (SPI_QUEUE_EMPTY == Spi_GblQueueStatus[LucQueueIndex])
  {
    #if (SPI_HW_PRIORITY_ENABLED == STD_ON)
    LddReqJobListIndex = (LddReqJobListIndex - LddJobCount) + SPI_ONE;
    #else
    LddReqJobListIndex = LddReqJobListIndex - LddJobCount;
    #endif
    /* START Msg(2:2824)-1 */
    /* MISRA Violation: START Msg(4:0488)-1 */
    LpReqJobList = Spi_GpFirstJobList + LddReqJobListIndex;
    /* END Msg(4:0488)-1 */
    /* END Msg(2:2824)-1 */
    LddCntrForJobsReq = LddJobCount;
    do
    {
      /* Push the job list index into the queue */
      Spi_GaaJobQueue[Spi_GddQueueIndex[LucQueueIndex]] =
                                                   LddReqJobListIndex;

      /* START Msg(2:2814)-5 */
      /*Set the job status as SPI_JOB_QUEUED*/
      Spi_GaaJobResult[LpReqJobList->ddJobIndex] = SPI_JOB_QUEUED;
      /* END Msg(2:2814)-5 */

      Spi_GaaJobCount[LpReqJobList->ddJobIndex] = LpReqJobList->ucJobCount;
      /* Increment the job list index */
      LddReqJobListIndex++;

      /* MISRA Violation: START Msg(4:0489)-3 */
      LpReqJobList++;
      /* END Msg(4:0489)-3 */
      /* Increment the queue index */
      Spi_GddQueueIndex[LucQueueIndex]++;
      /* Decrement the number of jobs */
      LddCntrForJobsReq--;
    }while (SPI_ZERO < LddCntrForJobsReq);
    Spi_GddQueueIndex[LucQueueIndex]--;
  } /* End of if (SPI_QUEUE_EMPTY == Spi_GblQueueStatus[LucQueueIndex]) */
  else
  {
    LddPreviousQueueIndex = Spi_GddQueueIndex[LucQueueIndex];
    LddCurrentQueueMax = LddPreviousQueueIndex + LddJobCount;
    /* Shift the existing jobs in the queue */
    LddCounterMaxValue = Spi_GddQueueIndex[LucQueueIndex] + SPI_ONE;
    do
    {
      Spi_GaaJobQueue[LddCurrentQueueMax] =
                             Spi_GaaJobQueue[LddPreviousQueueIndex];
      LddCurrentQueueMax--;
      LddPreviousQueueIndex--;
      LddCounterMaxValue--;
    }while (LddLowestQueueIndex < LddCounterMaxValue);

    /* Place the remaining jobs at the bottom of the queue */
    LddCounterMaxValue = LddLowestQueueIndex;
    LddJobCountVal = LddJobCount + LddLowestQueueIndex;

    /* START Msg(2:2814)-5 */
    LddReqJobListIndex = LpSeqConfig->ddJobListIndex;
    /* END Msg(2:2814)-5 */
    /* START Msg(2:2824)-1 */
    /* MISRA Violation: START Msg(4:0488)-1 */
    LpReqJobList = Spi_GpFirstJobList + LddReqJobListIndex;
    /* END Msg (4:0488)-1 */
    /* END Msg(2:2824)-1 */
    do
    {
      Spi_GaaJobQueue[LddCounterMaxValue] = LddReqJobListIndex;

      /* START Msg(2:2814)-5 */
      /*Set the job status as SPI_JOB_QUEUED*/
      Spi_GaaJobResult[LpReqJobList->ddJobIndex] = SPI_JOB_QUEUED;
      /* END Msg(2:2814)-5 */

      Spi_GaaJobCount[LpReqJobList->ddJobIndex] = LpReqJobList->ucJobCount;
      LddReqJobListIndex++;
      /* MISRA Violation: START Msg(4:0489)-3 */
      LpReqJobList++;
      /* END Msg(4:0489)-3 */
      LddCounterMaxValue++;
    }while (LddCounterMaxValue < LddJobCountVal);
    /* Align the Index for available H/W Units */
    #if (SPI_HW_PRIORITY_ENABLED == STD_ON)
    /* START Msg(2:2814)-5 */
    Spi_GddQueueIndex[LucQueueIndex] = Spi_GddQueueIndex[LucQueueIndex] +
                  (LddJobCount - (Spi_GpConfigPtr->ddDirectAccessQueueSize));
    /* END Msg(2:2814)-5 */
    #else
    Spi_GddQueueIndex[LucQueueIndex] = Spi_GddQueueIndex[LucQueueIndex] +
                                                                 LddJobCount;
    #endif
  } /* End of !if (SPI_QUEUE_EMPTY == Spi_GblQueueStatus[LucQueueIndex]) */
  /* Check if critical section protection is required */
  #if (SPI_CRITICAL_SECTION_PROTECTION == STD_ON)

  /* Enable relevant interrupts */
  SPI_EXIT_CRITICAL_SECTION(SPI_RAM_DATA_PROTECTION);

  #endif
}

#define SPI_STOP_SEC_PRIVATE_CODE
#include "MemMap.h"

#endif /*
        * End of (((SPI_DIRECT_ACCESS_MODE == STD_ON) && \
        * (SPI_HWUNIT_ASYNCHRONOUS == STD_ON)) || (SPI_FIFO_MODE == STD_ON) \
        *                                || (SPI_HW_PRIORITY_ENABLED == STD_ON))
        */

/*******************************************************************************
** Function Name      : Spi_PopFromQueue
**
** Service ID         : Not Applicable
**
** Description        : This function is to pop the next job to be transmitted
**                      from the queue
**
** Re-entrancy        : Non-Reentrant
**
** Input Parameters   : None
**
** InOut Parameters   : None
**
** Output Parameters  : None
**
** Return parameter   : void
**
** Preconditions      : None
**
** Global Variable    : Spi_GaaJobCount, Spi_GddQueueIndex, Spi_GpConfigPtr
**                      Spi_GblQueueStatus, Spi_GaaHighPriorityCommActive,
**                      Spi_GusAllQueueSts, Spi_GpConfigPtr, Spi_GaaSeqCancel,
**                      Spi_GstSeqProcess, Spi_GaaJobQueue, Spi_GpFirstJobList
**
** Function Invoked  :  Spi_InitiateJobTx, Spi_ProcessCancelledSequence,
**                      Spi_ProcessCompletedSequence, Spi_PopRemainingJobs,
**                      SPI_ENTER_CRITICAL_SECTION, SPI_EXIT_CRITICAL_SECTION
**
** Registers Used    :  CSIHnCTL0, CSIHnCTL1, CSIHnCTL2, CSIHnMCTL0, CSIHnMCTL2,
**                      CSIHnSTCR0, CSIHnSTR0, CSIHnTX0W, CSIHnBRSy, CSIHnCFGx,
**                      ICRn, IMRn, DCENn, DCSTCn, DCSTn, DDAn, DTCTn, DTCn,
**                      DTFRn, DTFRRQCn, DCSTSn, DTFRRQn, DSAn
*******************************************************************************/
/* Implements SPI_ESDD_UD_033 */
#if (((SPI_DIRECT_ACCESS_MODE == STD_ON) && \
     (SPI_HWUNIT_ASYNCHRONOUS == STD_ON)) || (SPI_FIFO_MODE == STD_ON) || \
                                            (SPI_HW_PRIORITY_ENABLED == STD_ON))

#define SPI_START_SEC_PRIVATE_CODE
#include "MemMap.h"
/* Implements EAAR_PN0034_FR_0061 */
/* Implements SPI_ESDD_UD_133 */
/* START Msg(2:3227)-4 */
FUNC(void, SPI_PRIVATE_CODE) Spi_PopFromQueue
                            (Spi_HWUnitType LddHWUnit, uint8 LucHWMemoryMode)
/* END Msg(2:3227)-4 */
{
  P2CONST(Spi_JobListType, AUTOMATIC, SPI_CONFIG_CONST) LpJobList;

  #if (SPI_HW_PRIORITY_ENABLED == STD_ON)
  Spi_HWUnitType LddHWUnitNumber;
  #endif

  Spi_JobType LddJobIndex;
  Spi_JobType LddReqJobListIndex;
  Spi_JobType LddLowestQueueIndex;
  /* Declare a local pointer to point to the requested linked job list */
  Spi_SequenceType LddSeqIndex;
  uint8 LucQueueIndex;

  #if (SPI_CANCEL_API == STD_ON)
  uint8 LucStatusOffset;
  uint8 LucStatusMask;
  #endif

  boolean LblFlag;
  LblFlag = SPI_FALSE;
  #if (((SPI_DIRECT_ACCESS_MODE == STD_ON) && \
     (SPI_HWUNIT_ASYNCHRONOUS == STD_ON)) || (SPI_FIFO_MODE == STD_ON) || \
                                            (SPI_HW_PRIORITY_ENABLED == STD_ON))
  #if (SPI_HW_PRIORITY_ENABLED == STD_ON)
  /* START Msg(2:2814)-5 */
  LddHWUnitNumber = Spi_GpConfigPtr->aaHWUnitNumber[LddHWUnit];
  /* END Msg(2:2814)-5 */
  #endif
  if (SPI_DIRECT_ACCESS_MODE_CONFIGURED == LucHWMemoryMode)
  {
    #if (SPI_HW_PRIORITY_ENABLED == STD_ON)
    if (SPI_FALSE == Spi_GaaHighPriorityCommActive[LddHWUnitNumber])
    #endif
    {
      /* For direct access mode lowest queue index is zero */
      LddLowestQueueIndex = SPI_ZERO;

      LucQueueIndex = LucHWMemoryMode;
    }
    #if (SPI_HW_PRIORITY_ENABLED == STD_ON)
    else
    {
      LddLowestQueueIndex =
            Spi_GpConfigPtr->aaHighprioirtyJobQueueIndex[LddHWUnitNumber];

      LucQueueIndex =
                    (uint8)(LddHWUnitNumber + SPI_MAX_CSIH_HW_INDEX + SPI_TWO);
    }
    #endif
  }
  else
  {
   /* START Msg(2:2814)-5 */
   /* For FIFO mode lowest queue index is size of direct access queue */
    LddLowestQueueIndex = Spi_GpConfigPtr->ddDirectAccessQueueSize;
  /* END Msg(2:2814)-5 */

    LucQueueIndex = LucHWMemoryMode;
  }
  #endif
  LddReqJobListIndex = Spi_GaaJobQueue[Spi_GddQueueIndex[LucQueueIndex]];

  /* START Msg(2:2824)-1 */
  /* MISRA Violation: START Msg(4:0488)-1 */
  LpJobList = Spi_GpFirstJobList + LddReqJobListIndex;
  /* END Msg(4:0488)-1 */
  /* END Msg(2:2824)-1 */

  /* START Msg(2:2814)-5 */
  /* Get the index of the job and sequence */
  LddJobIndex = LpJobList->ddJobIndex;
  /* END Msg(2:2814)-5 */

  LddSeqIndex = LpJobList->ddSequenceIndex;

  /* Check if it is the last job (Sequence is transmitted) */
  if ((SPI_FALSE == LpJobList->blIsLastJob) ||
                                (Spi_GaaJobCount[LddJobIndex] != SPI_ZERO ))
  {
    #if (SPI_CANCEL_API == STD_ON)
    /* Get the cancel byte offset for the requested sequence  */
    LucStatusOffset = Spi_GstSeqProcess[LddSeqIndex].ucCancelOffset;
    /* Get the cancel byte mask */
    LucStatusMask = Spi_GstSeqProcess[LddSeqIndex].ucCancelMask;
    /* Get the cancel status for this sequence */
    LucStatusMask = LucStatusMask & Spi_GaaSeqCancel[LucStatusOffset];

    /* Check if the sequence is cancelled */
    if (SPI_ZERO == LucStatusMask)
    {
      #endif
      /* Check if the repeated job count is zero */
      if (SPI_ZERO != Spi_GaaJobCount[LddJobIndex])
      {
        /* Check if critical section protection is required */
        #if (SPI_CRITICAL_SECTION_PROTECTION == STD_ON)

        /* Disable relevant interrupts to protect this critical section */
        SPI_ENTER_CRITICAL_SECTION(SPI_RAM_DATA_PROTECTION);

        #endif

        Spi_GaaJobCount[LddJobIndex]--;

        /* Check if critical section protection is required */
        #if (SPI_CRITICAL_SECTION_PROTECTION == STD_ON)

        /* Enable relevant interrupts to protect this critical section */
        SPI_EXIT_CRITICAL_SECTION(SPI_RAM_DATA_PROTECTION);

        #endif
        /* Transmit the same job again */
        Spi_InitiateJobTx(LddReqJobListIndex);
        LblFlag = SPI_TRUE;
      }
      else
      {
        /* No action required */
      }

    #if (SPI_CANCEL_API == STD_ON)
    } /* End of if (SPI_ZERO == LucStatusMask) */
    else
    {
      /* Update sequence details if the transmission was cancelled */
      Spi_ProcessCancelledSequence(LddSeqIndex);
    } /* End of !if (SPI_ZERO == LucStatusMask) */
    #endif
  } /* End of if ((SPI_FALSE == LpJobList->blIsLastJob) ||
                                (Spi_GaaJobCount[LddJobIndex] != SPI_ZERO )) */
  else
  {
    /* Update sequence details if the transmission was completed */
    Spi_ProcessCompletedSequence (LddSeqIndex, LddHWUnit,
                                   LddLowestQueueIndex, LucQueueIndex);
  } /* End of !if (SPI_FALSE == LpJobList->blIsLastJob) */

  if (SPI_FALSE == LblFlag)
  {
    if (Spi_GddQueueIndex[LucQueueIndex] == LddLowestQueueIndex)
    {
      /* Check if critical section protection is required */
      #if (SPI_CRITICAL_SECTION_PROTECTION == STD_ON)

      /* Disable relevant interrupts to protect this critical section */
      SPI_ENTER_CRITICAL_SECTION(SPI_RAM_DATA_PROTECTION);

      #endif

      Spi_GblQueueStatus[LucQueueIndex] = SPI_QUEUE_EMPTY;

      Spi_GusAllQueueSts = (Spi_GusAllQueueSts &
                      ((uint16)(~(uint16)((uint16)SPI_ONE << LucQueueIndex))));

      /* Check if critical section protection is required */
      #if (SPI_CRITICAL_SECTION_PROTECTION == STD_ON)

      /* Enable relevant interrupts to protect this critical section */
      SPI_EXIT_CRITICAL_SECTION(SPI_RAM_DATA_PROTECTION);

      #endif

      if (SPI_ZERO == Spi_GusAllQueueSts)
      {
        /* Update driver status as idle */
        Spi_GddDriverStatus = SPI_IDLE;
      }
      else
      {
        /* No action required */
      }
    }
    else
    {
     /* if it is not the last job in the queue */
      #if (SPI_HW_PRIORITY_ENABLED == STD_ON)
      Spi_PopRemainingJobs( LucQueueIndex, LddLowestQueueIndex,
                                                               LddHWUnitNumber);
      #else
      Spi_PopRemainingJobs( LucQueueIndex, LddLowestQueueIndex);
      #endif
    } /* End of if (SPI_FALSE == LblFlag) */
  }
  else
  {
    /* No action required */
  }
}

#define SPI_STOP_SEC_PRIVATE_CODE
#include "MemMap.h"

#endif /*
        * End of (((SPI_DIRECT_ACCESS_MODE == STD_ON) && \
        * (SPI_HWUNIT_ASYNCHRONOUS == STD_ON)) || (SPI_FIFO_MODE == STD_ON) || \
        *                                   (SPI_HW_PRIORITY_ENABLED == STD_ON))
        */

/*******************************************************************************
** Function Name      : Spi_ProcessCancelledSequence
**
** Service ID         : Not Applicable
**
** Description        : This function is to process cancelled sequence
**
** Re-entrancy        : Non-Reentrant
**
** Input Parameters   : None
**
** InOut Parameters   : None
**
** Output Parameters  : None
**
** Return parameter   : void
**
** Preconditions      : None
**
** Global Variable    : Spi_GpFirstSeq, Spi_GaaSeqResult, Spi_GpConfigPtr
**
** Function Invoked  :  SPI_ENTER_CRITICAL_SECTION
**                      SPI_EXIT_CRITICAL_SECTION
**
** Registers Used    :  None
*******************************************************************************/
#if (((SPI_DIRECT_ACCESS_MODE == STD_ON) && \
     (SPI_HWUNIT_ASYNCHRONOUS == STD_ON)) || (SPI_FIFO_MODE == STD_ON) || \
                                            (SPI_HW_PRIORITY_ENABLED == STD_ON))
/* Implements SPI_ESDD_UD_086 */
#if (SPI_CANCEL_API == STD_ON)

#define SPI_START_SEC_PRIVATE_CODE
#include "MemMap.h"
/* Implements SPI_ESDD_UD_074 */
/* Implements SPI073, SPI057, SPI264, SPI193, SPI268, SPI270, SPI271 */
/* Implements EAAR_PN0034_FR_0061 */
/* START Msg(2:3227)-4 */
FUNC (void, SPI_PRIVATE_CODE) Spi_ProcessCancelledSequence
                                                    (Spi_SequenceType Sequence)
/* END Msg(2:3227)-4 */
{
  P2CONST(Spi_SequenceConfigType, AUTOMATIC, SPI_CONFIG_CONST) LpSeqConfig;

  /* Declare a local pointer to status bytes ROM value for the sequence */
  P2CONST(uint8, AUTOMATIC, SPI_CONFIG_CONST) LpStsByteValue;
  /* Declare a local pointer to point to the start byte of RAM area */
  P2VAR(uint8, AUTOMATIC, SPI_CONFIG_DATA) LpStsByte;

  uint8 LucVar;

  /* START Msg(2:2824)-1 */
  /* MISRA Violation: START Msg(4:0488)-1 */
  /* Get the pointer to the post-build sequence structure */
  LpSeqConfig = Spi_GpFirstSeq + Sequence;
  /* END Msg(4:0488)-1 */
  /* END Msg(2:2824)-1 */

  /* Sequence is cancelled. Update sequence result as CANCELLED */
  Spi_GaaSeqResult[Sequence] = SPI_SEQ_CANCELLED;
  #if ((SPI_LEVEL_DELIVERED == SPI_ONE) || \
                                           (SPI_LEVEL_DELIVERED == SPI_TWO))
  /* START Msg(2:2814)-5 */
  /* MISRA Violation: START Msg(4:0488)-1 */
  if (NULL_PTR != Spi_GpConfigPtr->pStsValueArray)
  {
    /* Get the pointer to status bytes ROM value for the sequence */
    LpStsByteValue = (Spi_GpConfigPtr->pStsValueArray) +
                              (LpSeqConfig->usStsValueStartByteIdx);
    /* END Msg(4:0488)-1 */
  }
  else
  {
    LpStsByteValue = NULL_PTR;
  }

  /* END Msg(2:2814)-5 */
  /* Get the number of status byte ROM value */
  LucVar = LpSeqConfig->ucNoOfStsByteValue;
  /* MISRA Violation: START Msg(4:0488)-1 */
  if (NULL_PTR != Spi_GpConfigPtr->pStatusArray)
  {
    /* Get the pointer to the start byte of RAM area */
    LpStsByte = (Spi_GpConfigPtr->pStatusArray) +
                                    (LpSeqConfig->usStsUpdateStartByteIdx);
  /* END Msg(4:0488)-1 */
  }
  else
  {
    LpStsByte = NULL_PTR;
  }

  /* Check if critical section protection is required */
  #if (SPI_CRITICAL_SECTION_PROTECTION == STD_ON)

  /* Disable relevant interrupts to protect this critical section */
  SPI_ENTER_CRITICAL_SECTION(SPI_RAM_DATA_PROTECTION);

  #endif

  while ((SPI_ZERO < LucVar) && (NULL_PTR != LpStsByte)
                                         && (NULL_PTR != LpStsByteValue))
  {
    /* START Msg(2:2814)-5 */
    /*
     * Reset the status bit of the requested sequence and the sequences
     * that have jobs shared with the requested sequence
     */
    *LpStsByte = (*LpStsByte & ((uint8)(~(*LpStsByteValue))));
    /* END Msg(2:2814)-5 */
    /* MISRA Violation: START Msg(4:0489)-3 */
    LpStsByte++;

    LpStsByteValue++;
    /* END Msg(4:0489)-3 */
    LucVar--;
  } /* End of while (LucVar > SPI_ZERO) */

  /* Check if critical section protection is required */
  #if (SPI_CRITICAL_SECTION_PROTECTION == STD_ON)

  /* Enable relevant interrupts to protect this critical section */
  SPI_EXIT_CRITICAL_SECTION(SPI_RAM_DATA_PROTECTION);

  #endif
  #endif

  #if (SPI_LEVEL_DELIVERED != SPI_ZERO)
  /* Check if the notification function is configured */
  if (NULL_PTR != LpSeqConfig->pSpiSeqEndNotification)
  {
    /* Invoke the notification function */
    LpSeqConfig->pSpiSeqEndNotification();
  }
  else
  {
    /* No action required */
  }
  #endif
}

#define SPI_STOP_SEC_PRIVATE_CODE
#include "MemMap.h"

#endif /*
        * End of (SPI_CANCEL_API == STD_ON) */
#endif /*
        * End of (((SPI_DIRECT_ACCESS_MODE == STD_ON) && \
        * (SPI_HWUNIT_ASYNCHRONOUS == STD_ON)) || (SPI_FIFO_MODE == STD_ON) || \
        *                                   (SPI_HW_PRIORITY_ENABLED == STD_ON))
        */

/*******************************************************************************
** Function Name      : Spi_ProcessCompletedSequence
**
** Service ID         : Not Applicable
**
** Description        : This function is to process completed sequence
**
** Re-entrancy        : Non-Reentrant
**
** Input Parameters   : None
**
** InOut Parameters   : None
**
** Output Parameters  : None
**
** Return parameter   : void
**
** Preconditions      : None
**
** Global Variable    : Spi_GpFirstSeq, Spi_GddQueueIndex,
**                      Spi_GaaSeqResult, Spi_GblQueueStatus,
**                      Spi_GpConfigPtr
**
** Function Invoked  :  SPI_ENTER_CRITICAL_SECTION
**                      SPI_EXIT_CRITICAL_SECTION
**
** Registers Used    :  None
*******************************************************************************/
/* Implements SPI_ESDD_UD_075 */
#if (((SPI_DIRECT_ACCESS_MODE == STD_ON) && \
     (SPI_HWUNIT_ASYNCHRONOUS == STD_ON)) || (SPI_FIFO_MODE == STD_ON) || \
                                            (SPI_HW_PRIORITY_ENABLED == STD_ON))

#define SPI_START_SEC_PRIVATE_CODE
#include "MemMap.h"
/* Implements SPI352, SPI073, EAAR_PN0034_FR_0061 */
/* START Msg(2:3206)-2 */
/* START Msg(2:3227)-4 */
FUNC(void, SPI_PRIVATE_CODE) Spi_ProcessCompletedSequence
             (Spi_SequenceType Sequence, Spi_HWUnitType LddHWUnit,
              Spi_JobType LddLowestQueueIndex, uint8 LucQueueIndex)
/* END Msg(2:3227)-4 */
/* END Msg(2:3206)-2 */
{
  P2CONST(Spi_SequenceConfigType, AUTOMATIC, SPI_CONFIG_CONST) LpSeqConfig;

  /* Declare a local pointer to status bytes ROM value for the sequence */
  P2CONST(uint8, AUTOMATIC, SPI_CONFIG_CONST) LpStsByteValue;
  /* Declare a local pointer to point to the start byte of RAM area */
  P2VAR(uint8, AUTOMATIC, SPI_CONFIG_DATA) LpStsByte;

  #if (SPI_HW_PRIORITY_ENABLED == STD_ON)
  Spi_HWUnitType LddHWUnitNumber;
  #endif

  uint8 LucVar;

  #if (SPI_HW_PRIORITY_ENABLED == STD_ON)
  /* START Msg(2:2814)-5 */
  LddHWUnitNumber = Spi_GpConfigPtr->aaHWUnitNumber[LddHWUnit];
  /* END Msg(2:2814)-5 */
  #endif

  /* START Msg(2:2824)-1 */
  /* MISRA Violation: START Msg(4:0488)-1 */
  /* Get the pointer to the post-build sequence structure */
  LpSeqConfig = Spi_GpFirstSeq + Sequence;
  /* END Msg(4:0488)-1 */
  /* END Msg(2:2824)-1 */

  if (SPI_SEQ_FAILED != Spi_GaaSeqResult[Sequence])
  {
    /* Sequence is completed. Update sequence result as OK */
    Spi_GaaSeqResult[Sequence] = SPI_SEQ_OK;
  }
  else
  {
    /* No action required */
  }

  #if (SPI_HW_PRIORITY_ENABLED == STD_ON)

  if ((SPI_TRUE == Spi_GaaHighPriorityCommActive[LddHWUnitNumber]) &&
      (Spi_GddQueueIndex[LucQueueIndex] == LddLowestQueueIndex))

  {
    Spi_GaaHighPriorityCommActive[LddHWUnitNumber] = SPI_FALSE;
    Spi_GaaHighPrioritySequence[LddHWUnitNumber] = SPI_NO_SEQ;

    if (SPI_QUEUE_EMPTY == Spi_GblQueueStatus
                        [LddHWUnitNumber + SPI_MAX_CSIH_HW_INDEX + SPI_TWO])
    {
      /* Check if critical section protection is required */
      #if (SPI_CRITICAL_SECTION_PROTECTION == STD_ON)

      /* Disable relevant interrupts to protect this critical section */
      SPI_ENTER_CRITICAL_SECTION(SPI_RAM_DATA_PROTECTION);

      #endif
      /* START Msg(2:2814)-5 */

      /* Changing the hardware status after completing the sequence
         transmission  */
      Spi_GucHwUnitStatus =
              (Spi_GucHwUnitStatus ^ ((uint8)(LpSeqConfig->usHWListIndex)));
      /* END Msg(2:2814)-5 */

      /* Check if critical section protection is required */
      #if (SPI_CRITICAL_SECTION_PROTECTION == STD_ON)

      /* Enable relevant interrupts to protect this critical section */
      SPI_EXIT_CRITICAL_SECTION(SPI_RAM_DATA_PROTECTION);

      #endif
    }
    else
    {
      /* No action required */
    }
  }
  else
  {
    /* No action required */
  }
  #endif

  /* START Msg(2:2814)-5 */
  /* MISRA Violation: START Msg(4:0488)-1 */
  /* START Msg(2:2814)-5 */
  if (NULL_PTR != Spi_GpConfigPtr->pStsValueArray)
  /* END Msg(2:2814)-5 */
  {
    /* Get the pointer to status bytes ROM value for the sequence */
    LpStsByteValue = (Spi_GpConfigPtr->pStsValueArray) +
                                    (LpSeqConfig->usStsValueStartByteIdx);
    /* END Msg(4:0488)-1 */
  }
  else
  {
    LpStsByteValue = NULL_PTR;
  }
  /* END Msg(2:2814)-5 */
  /* Get the number of status byte ROM value */
  LucVar = LpSeqConfig->ucNoOfStsByteValue;
  /* MISRA Violation: START Msg(4:0488)-1 */
  if (NULL_PTR != Spi_GpConfigPtr->pStatusArray)
  {
    /* Get the pointer to the start byte of RAM area */
    LpStsByte = (Spi_GpConfigPtr->pStatusArray) +
                                    (LpSeqConfig->usStsUpdateStartByteIdx);
    /* END Msg(4:0488)-1 */
  }
  else
  {
    LpStsByte = NULL_PTR;
  }

  /* Check if critical section protection is required */
  #if (SPI_CRITICAL_SECTION_PROTECTION == STD_ON)

  /* Disable relevant interrupts to protect this critical section */
  SPI_ENTER_CRITICAL_SECTION(SPI_RAM_DATA_PROTECTION);

  #endif

  while ((SPI_ZERO < LucVar) && (NULL_PTR != LpStsByte)
                                          && (NULL_PTR != LpStsByteValue))
  {
    /* START Msg(2:2814)-5 */
    /*
     * Reset the status bit of the requested sequence and the sequences
     * that have jobs shared with the requested sequence
     */
    *LpStsByte = (*LpStsByte & ((uint8)(~(*LpStsByteValue))));

    /* END Msg(2:2814)-5 */
    /* MISRA Violation: START Msg(4:0489)-3 */
    LpStsByte++;

    LpStsByteValue++;
    /* END Msg(4:0489)-3 */
    LucVar--;
  } /* End of while (LucVar > SPI_ZERO) */

  /* Check if critical section protection is required */
  #if (SPI_CRITICAL_SECTION_PROTECTION == STD_ON)

  /* Enable relevant interrupts to protect this critical section */
  SPI_EXIT_CRITICAL_SECTION(SPI_RAM_DATA_PROTECTION);

  #endif

  #if (SPI_LEVEL_DELIVERED != SPI_ZERO)
  /* MISRA Violation: START Msg(4:3355) */
  /* MISRA Violation: START Msg(4:3358) */
  /* Check if the notification function is configured */
  if (NULL_PTR != LpSeqConfig->pSpiSeqEndNotification)
  {
    /* END Msg(4:3358) */
    /* END Msg(4:3355) */
    /* Invoke the notification function */
    LpSeqConfig->pSpiSeqEndNotification();
  }
  else
  {
    /* No action required */
  }
  #endif
}

#define SPI_STOP_SEC_PRIVATE_CODE
#include "MemMap.h"

#endif /*
        * End of (((SPI_DIRECT_ACCESS_MODE == STD_ON) && \
        * (SPI_HWUNIT_ASYNCHRONOUS == STD_ON)) || (SPI_FIFO_MODE == STD_ON) || \
        *                                   (SPI_HW_PRIORITY_ENABLED == STD_ON))
        */

/*******************************************************************************
** Function Name      : Spi_PushInterruptableSeqJobs
**
** Service ID         : Not Applicable
**
** Description        : This function is to push the job belonging to
**                      interruptable sequences into the queue
**
** Re-entrancy        : Non-Reentrant
**
** Input Parameters   : P2CONST(Spi_SequenceConfigType, AUTOMATIC,
**                                                 SPI_CONFIG_CONST)LpSeqConfig,
**                      P2VAR(Spi_JobDetails, AUTOMATIC, SPI_CONFIG_CONST)
**                                                            Spi_ReqJobDetails,
**                      uint8 LucReqJobPriority, uint8 LucQueueIndex
**
** InOut Parameters   : None
**
** Output Parameters  : None
**
** Return parameter   : void
**
** Preconditions      : None
**
** Global Variable    : Spi_GpFirstJob, Spi_GpFirstJobList, Spi_GaaJobQueue,
**                      Spi_GaaJobCount, Spi_GddQueueIndex, Spi_GaaJobResult,
**                      Spi_GblQueueStatus
**
** Function Invoked   : SPI_ENTER_CRITICAL_SECTION, SPI_EXIT_CRITICAL_SECTION,
**                      Spi_PushWhenQueueNotEmpty
**
** Registers Used     : None
******************************************************************************/

/* Implements SPI_ESDD_UD_076 */
/* Implements SPI_ESDD_UD_088 */
#if (SPI_INTERRUPTIBLE_SEQ_ALLOWED == STD_ON)
#if (((SPI_DIRECT_ACCESS_MODE == STD_ON) && \
    (SPI_HWUNIT_ASYNCHRONOUS == STD_ON)) || (SPI_FIFO_MODE == STD_ON) || \
                                            (SPI_HW_PRIORITY_ENABLED == STD_ON))
#define SPI_START_SEC_PRIVATE_CODE
#include "MemMap.h"
/* Implements EAAR_PN0034_FR_0061 */
/* START Msg(2:3227)-4 */
FUNC( void, SPI_PRIVATE_CODE)Spi_PushInterruptableSeqJobs
(P2CONST(Spi_SequenceConfigType, AUTOMATIC, SPI_CONFIG_CONST)LpSeqConfig,
P2VAR(Spi_JobDetails, AUTOMATIC, SPI_CONFIG_CONST) Spi_ReqJobDetails,
uint8 LucReqJobPriority, uint8 LucQueueIndex )
/* END Msg(2:3227)-4 */
{
  P2CONST(Spi_JobListType, AUTOMATIC, SPI_CONFIG_CONST) LpJobList;
  Spi_JobType LddJob;

  /* START Msg(2:2814)-5 */
  Spi_ReqJobDetails->ddJobListIndex =
          Spi_GaaJobQueue[(Spi_ReqJobDetails->ddCntrForJobsOnGoing) - SPI_ONE];
  /* END Msg(2:2814)-5 */
  /* START Msg(2:2824)-1 */
  /* MISRA Violation: START Msg(4:0488)-1 */
  LpJobList = Spi_GpFirstJobList + (Spi_ReqJobDetails->ddJobListIndex);
  /* END Msg(4:0488)-1 */
  /* END Msg(2:2824)-1 */
  /* START Msg(2:2814)-5 */
  /* Get the index of next job in the queue */
  LddJob = LpJobList->ddJobIndex;
  /* END Msg(2:2814)-5 */
  if ((Spi_ReqJobDetails->ddJobListIndex) !=
                                       (Spi_ReqJobDetails->ddReqJobListIndex))
  {
    /*
     * Compare the priority of the next job in the queue and job
     * in the requested sequence
     */

    /* START Msg(2:2824)-1 */
    /* MISRA Violation: START Msg(4:0488)-1 */
    if (((Spi_GpFirstJob + LddJob)->ucJobPriority) < LucReqJobPriority)
      /* END Msg(4:0488)-1 */
      /* END Msg(2:2824)-1 */
    {
      /* Check if critical section protection is required */
      #if (SPI_CRITICAL_SECTION_PROTECTION == STD_ON)

      /* Disable relevant interrupts to protect critical section */
      SPI_ENTER_CRITICAL_SECTION(SPI_RAM_DATA_PROTECTION);

      #endif

      /*
       * Check if the queue becomes empty by the time queue is to be
       * loaded
       */
      if (SPI_QUEUE_EMPTY == Spi_GblQueueStatus[LucQueueIndex])
      {

        Spi_ReqJobDetails->ddReqJobListIndex =
                             ((Spi_ReqJobDetails->ddReqJobListIndex) -
                                              (Spi_ReqJobDetails->ddJobCount));
        /* START Msg(2:2824)-1 */
        /* MISRA Violation: START Msg(4:0488)-1 */
        (Spi_ReqJobDetails->pReqJobList) = Spi_GpFirstJobList +
                                        (Spi_ReqJobDetails->ddReqJobListIndex);
        /* END Msg (4:0488)-1 */
        /* END Msg(2:2824)-1 */
        (Spi_ReqJobDetails->ddCntrForJobsReq) =
                                               (Spi_ReqJobDetails->ddJobCount);
        do
        {
          /* Push the job list index into the queue */
          Spi_GaaJobQueue[Spi_GddQueueIndex[LucQueueIndex]] =
                                        (Spi_ReqJobDetails->ddReqJobListIndex);
          /*Set the job status as SPI_JOB_QUEUED*/
          Spi_GaaJobResult[(Spi_ReqJobDetails->pReqJobList)->ddJobIndex] =
                                                                 SPI_JOB_QUEUED;

          /* Push the job count into RAM */
          Spi_GaaJobCount[(Spi_ReqJobDetails->pReqJobList)->ddJobIndex] =
                                  (Spi_ReqJobDetails->pReqJobList)->ucJobCount;
          /* Increment the job list index */
          (Spi_ReqJobDetails->ddReqJobListIndex)++;
          /* MISRA Violation: START Msg(4:0489)-3 */
          (Spi_ReqJobDetails->pReqJobList)++;
          /* END Msg(4:0489)-3 */
          /* Increment the queue index */
          Spi_GddQueueIndex[LucQueueIndex]++;
          /* Decrement the number of jobs */
          (Spi_ReqJobDetails->ddCntrForJobsReq)--;
        }while (SPI_ZERO < (Spi_ReqJobDetails->ddCntrForJobsReq));
        /* Update the current queue index */
        Spi_GddQueueIndex[LucQueueIndex]--;
        Spi_ReqJobDetails->ddJobCount = SPI_ZERO;
        /* To break the loop */
        Spi_ReqJobDetails->ddCntrForJobsOnGoing = SPI_ONE;
        Spi_ReqJobDetails->ddCntrForJobsReq = SPI_ONE;
      } /*
         * End of if (Spi_GblQueueStatus[LucQueueIndex]
         * == SPI_QUEUE_EMPTY)
         */
      else
      {
        /* Place the job in the queue by sorting the existing jobs */
        Spi_PushWhenQueueNotEmpty( LpSeqConfig, Spi_ReqJobDetails,
                                                                LucQueueIndex );

      } /* End of the check if the queue to be empty */

      /* Check if critical section protection is required */
      #if (SPI_CRITICAL_SECTION_PROTECTION == STD_ON)

      /* Enable relevant interrupts */
      SPI_EXIT_CRITICAL_SECTION(SPI_RAM_DATA_PROTECTION);

      #endif
    } /*
       * End of if (((Spi_GpFirstJob + LddJob)->ucJobPriority)
       * < LucReqJobPriority)
       */
    else
    {
      /* No action required */
    }
  } /* if ((Spi_ReqJobDetails->ddJobListIndex) !=
                                     (Spi_ReqJobDetails->ddReqJobListIndex)) */
  else
  {
    Spi_ReqJobDetails->ddJobCount--;
    Spi_ReqJobDetails->ddCntrForJobsOnGoing =
                                       (Spi_ReqJobDetails->ddLowestQueueIndex );
  }

}

#define SPI_STOP_SEC_PRIVATE_CODE
#include "MemMap.h"

#endif /*
        * End of (((SPI_DIRECT_ACCESS_MODE == STD_ON) && \
        * (SPI_HWUNIT_ASYNCHRONOUS == STD_ON)) || (SPI_FIFO_MODE == STD_ON) \
        *                                || (SPI_HW_PRIORITY_ENABLED == STD_ON))
        */
#endif

/*******************************************************************************
** Function Name      : Spi_PopRemainingJobs
**
** Service ID         : Not Applicable
**
** Description        : This function is to pop the next job to be transmitted
**                      from the queue
**
** Re-entrancy        : Non-Reentrant
**
** Input Parameters   : None
**
** InOut Parameters   : None
**
** Output Parameters  : None
**
** Return parameter   : void
**
** Preconditions      : None
**
** Global Variable    : Spi_GaaJobCount, Spi_GpFirstSeq, Spi_GddQueueIndex,
**                      Spi_GaaSeqResult, Spi_GblQueueStatus,
**                      Spi_GusAllQueueSts, Spi_GpConfigPtr, Spi_GaaSeqCancel,
**                      Spi_GstSeqProcess, Spi_GaaJobQueue, Spi_GpFirstJobList
**
** Function Invoked   : Spi_InitiateJobTx, Spi_ProcessCancelledSequence,
**                      SPI_ENTER_CRITICAL_SECTION, SPI_EXIT_CRITICAL_SECTION
**
** Registers Used     : CSIHnCTL0, CSIHnCTL1, CSIHnCTL2, CSIHnMCTL0, CSIHnMCTL2,
**                      CSIHnSTCR0, CSIHnSTR0, CSIHnTX0W, CSIHnBRSy, CSIHnCFGx,
**                      ICRn, IMRn, DCENn, DCSTCn, DCSTn, DDAn, DTCTn, DTCn,
**                      DTFRn, DTFRRQCn, DCSTSn, DTFRRQn, DSAn
*******************************************************************************/

/* Implements SPI_ESDD_UD_073 */
#if (((SPI_DIRECT_ACCESS_MODE == STD_ON) && \
     (SPI_HWUNIT_ASYNCHRONOUS == STD_ON)) || (SPI_FIFO_MODE == STD_ON) || \
                                            (SPI_HW_PRIORITY_ENABLED == STD_ON))

#define SPI_START_SEC_PRIVATE_CODE
#include "MemMap.h"
/* Implements SPI161, EAAR_PN0034_FR_0061 */
/* START Msg(2:3227)-4 */
#if (SPI_HW_PRIORITY_ENABLED == STD_ON)
/* Implements SPI_ESDD_UD_133 */
FUNC(void, SPI_PRIVATE_CODE)Spi_PopRemainingJobs
(uint8 LucQueueIndex, Spi_JobType LddLowestQueueIndex,
                                                Spi_HWUnitType LddHWUnitNumber )
#else
FUNC(void, SPI_PRIVATE_CODE)Spi_PopRemainingJobs
(uint8 LucQueueIndex, Spi_JobType LddLowestQueueIndex)
#endif
/* END Msg(2:3227)-4 */
{
  #if (SPI_SEQ_STARTNOTIFICATION_ENABLED == STD_ON)
  P2CONST(Spi_SequenceConfigType, AUTOMATIC, SPI_CONFIG_CONST) LpSeqConfig;
  #endif
  P2CONST(Spi_JobListType, AUTOMATIC, SPI_CONFIG_CONST) LpJobList;
  Spi_JobType LddJobListIndex;
  Spi_SequenceType LddSeqIndex;

  #if (SPI_CANCEL_API == STD_ON)
  uint8 LucStatusOffset;
  uint8 LucStatusMask;
  #endif

  do
  {
    /* Check if critical section protection is required */
    #if (SPI_CRITICAL_SECTION_PROTECTION == STD_ON)

    /* Disable relevant interrupts to protect this critical section */
    SPI_ENTER_CRITICAL_SECTION(SPI_RAM_DATA_PROTECTION);

    #endif
    Spi_GddQueueIndex[LucQueueIndex]--;
    /* Check if critical section protection is required */
    #if (SPI_CRITICAL_SECTION_PROTECTION == STD_ON)

    /* Enable relevant interrupts to protect this critical section */
    SPI_EXIT_CRITICAL_SECTION(SPI_RAM_DATA_PROTECTION);

    #endif
    LddJobListIndex = Spi_GaaJobQueue[Spi_GddQueueIndex[LucQueueIndex]];
    /* START Msg(2:2824)-1 */
    /* MISRA Violation: START Msg(4:0488)-1 */
    LpJobList = Spi_GpFirstJobList + LddJobListIndex;
    /* END Msg (4:0488)-1 */
    /* END Msg(2:2824)-1 */
    /* START Msg(2:2814)-5 */
    LddSeqIndex = LpJobList->ddSequenceIndex;
    /* END Msg(2:2814)-5 */
    #if (SPI_CANCEL_API == STD_ON)
    if (SPI_SEQ_CANCELLED != Spi_GaaSeqResult[LddSeqIndex])
    {
      /* Get the cancel byte offset for the requested sequence  */
      LucStatusOffset = Spi_GstSeqProcess[LddSeqIndex].ucCancelOffset;
      /* Get the cancel byte mask */
      LucStatusMask = Spi_GstSeqProcess[LddSeqIndex].ucCancelMask;
      /* Get the cancel status for this sequence */
      LucStatusMask = LucStatusMask & Spi_GaaSeqCancel[LucStatusOffset];
      if (SPI_ZERO != LucStatusMask)
      {
        /* Update sequence details if the transmission was cancelled */
        Spi_ProcessCancelledSequence(LddSeqIndex);
      }
      else
      {
        /* No action required */
      }
    }
    else
    {
      /* No action required */
    }
    #endif
  }while (((SPI_SEQ_FAILED == Spi_GaaSeqResult[LddSeqIndex])
          #if (SPI_CANCEL_API == STD_ON)
          || (SPI_SEQ_CANCELLED == Spi_GaaSeqResult[LddSeqIndex])
          #endif
          ) && (Spi_GddQueueIndex[LucQueueIndex] > LddLowestQueueIndex));
  /* Start : SPI_UT_012 */
  if (((SPI_SEQ_FAILED == Spi_GaaSeqResult[LddSeqIndex])
      #if (SPI_CANCEL_API == STD_ON)
      || (SPI_SEQ_CANCELLED == Spi_GaaSeqResult[LddSeqIndex])
      #endif
      ) && (Spi_GddQueueIndex[LucQueueIndex] <= LddLowestQueueIndex))
   /* End : SPI_UT_012 */
  {
    /* Check if critical section protection is required */
    #if (SPI_CRITICAL_SECTION_PROTECTION == STD_ON)

    /* Disable relevant interrupts to protect this critical section */
    SPI_ENTER_CRITICAL_SECTION(SPI_RAM_DATA_PROTECTION);

    #endif
    Spi_GblQueueStatus[LucQueueIndex] = SPI_QUEUE_EMPTY;

    Spi_GusAllQueueSts = (Spi_GusAllQueueSts &
                      ((uint16)(~(uint16)((uint16)SPI_ONE << LucQueueIndex))));

    /* Check if critical section protection is required */
    #if (SPI_CRITICAL_SECTION_PROTECTION == STD_ON)

    /* Enable relevant interrupts to protect this critical section */
    SPI_EXIT_CRITICAL_SECTION(SPI_RAM_DATA_PROTECTION);

    #endif
    if (SPI_ZERO == Spi_GusAllQueueSts)
    {
      /* Update driver status as idle */
      Spi_GddDriverStatus = SPI_IDLE;
    }
    else
    {
      /* No action required */
    }
  }
  else
  {
    #if (SPI_CANCEL_API == STD_OFF)
    LddJobListIndex = Spi_GaaJobQueue[Spi_GddQueueIndex[LucQueueIndex]];
    #endif
    /* Implements SPI_ESDD_UD_094 */
    #if (SPI_SEQ_STARTNOTIFICATION_ENABLED == STD_ON)
    /* Check if status current sequence in queue */
    if (SPI_SEQ_PENDING != Spi_GaaSeqResult[LddSeqIndex])
    {
      /* MISRA Violation: START Msg(4:0488)-1 */
      /* START Msg(2:2824)-1 */
      /* Get the pointer to the post-build sequence structure */
      LpSeqConfig = Spi_GpFirstSeq + LddSeqIndex;
      /* END Msg(2:2824)-1 */
      /* END Msg(4:0488)-1 */

      /* START Msg(2:2814)-5 */
      /* Check if the notification function is configured */
      if (NULL_PTR != LpSeqConfig->pSpiSeqStartNotification)
      /* END Msg(2:2814)-5 */
      {
        /* Invoke the start sequence notification function */
        LpSeqConfig->pSpiSeqStartNotification();
      }
      else
      {
        /* No action required */
      }
    } /* if (SPI_SEQ_PENDING != Spi_GaaSeqResult[LddSeqIndex]) */
    else
    {
      /* No Action Required */
    }
    #endif/* #if (SPI_SEQ_STARTNOTIFICATION_ENABLED == STD_ON) */
    /* Changing HighPriority Communication Request when queue is empty */
    #if (SPI_HW_PRIORITY_ENABLED == STD_ON)
    if (Spi_GddQueueIndex[LucQueueIndex] == LddLowestQueueIndex)
    {
      Spi_GaaHighPriorityCommRequest[LddHWUnitNumber] = SPI_FALSE;
      if (SPI_TRUE == Spi_GaaHighPriorityCommRequestAtIdle[LddHWUnitNumber])
      {
        /* Check if critical section protection is required */
        #if (SPI_CRITICAL_SECTION_PROTECTION == STD_ON)

        /* Disable relevant interrupts to protect this critical
           section */
        SPI_ENTER_CRITICAL_SECTION(SPI_RAM_DATA_PROTECTION);

        #endif
        /* Changing the hardware status after completing the sequence
           transmission  */
        Spi_GucHwUnitStatus =
         (Spi_GucHwUnitStatus ^ ((Spi_HWUnitType)(SPI_ONE << LddHWUnitNumber)));

        Spi_GaaHighPriorityCommRequestAtIdle[LddHWUnitNumber] = SPI_FALSE;
         /* Check if critical section protection is required */
        #if (SPI_CRITICAL_SECTION_PROTECTION == STD_ON)

        /* Enable relevant interrupts to protect this critical
           section */
        SPI_EXIT_CRITICAL_SECTION(SPI_RAM_DATA_PROTECTION);

        #endif
      }
      else
      {
        /* No action required */
      }
    }
    else
    {
      /* No action required */
    }
    #endif
    /* Initiate the transmission for that sequence */
    Spi_InitiateJobTx(LddJobListIndex);
  } /* End of if (Spi_GddQueueIndex[LucQueueIndex] != SPI_ZERO)*/
}
#define SPI_STOP_SEC_PRIVATE_CODE
#include "MemMap.h"

#endif /*
        * End of (((SPI_DIRECT_ACCESS_MODE == STD_ON) && \
        * (SPI_HWUNIT_ASYNCHRONOUS == STD_ON)) || (SPI_FIFO_MODE == STD_ON) || \
        *                                   (SPI_HW_PRIORITY_ENABLED == STD_ON))
        */

/*******************************************************************************
** Function Name      : Spi_PushWhenQueueNotEmpty
**
** Service ID         : Not Applicable
**
** Description        : This function is to push the job belonging to
**                      interruptible sequences into the queue when Queue is
**                      not empty
**
** Re-entrancy        : Non-Reentrant
**
** Input Parameters   : P2CONST(Spi_SequenceConfigType, AUTOMATIC,
**                                                 SPI_CONFIG_CONST)LpSeqConfig,
**                      P2VAR(Spi_JobDetails, AUTOMATIC, SPI_CONFIG_CONST)
**                                                            Spi_ReqJobDetails,
**                      uint8 LucQueueIndex
**
** InOut Parameters   : None
**
** Output Parameters  : None
**
** Return parameter   : void
**
** Preconditions      : None
**
** Global Variable    : Spi_GpFirstJobList, Spi_GaaJobQueue,
**                      Spi_GaaJobCount, Spi_GddQueueIndex
**
** Function Invoked   : None
**
** Registers Used     : None
******************************************************************************/

/* Implements SPI_ESDD_UD_088 */
#if (SPI_INTERRUPTIBLE_SEQ_ALLOWED == STD_ON)
#if (((SPI_DIRECT_ACCESS_MODE == STD_ON) && \
    (SPI_HWUNIT_ASYNCHRONOUS == STD_ON)) || (SPI_FIFO_MODE == STD_ON) || \
                                            (SPI_HW_PRIORITY_ENABLED == STD_ON))
#define SPI_START_SEC_PRIVATE_CODE
#include "MemMap.h"
/* Implements SPI_ESDD_UD_175 */
/* Implements SPI124 */
/* START Msg(2:3227)-4 */
FUNC( void, SPI_PRIVATE_CODE)Spi_PushWhenQueueNotEmpty(
P2CONST(Spi_SequenceConfigType, AUTOMATIC, SPI_CONFIG_CONST)LpSeqConfig,
P2VAR(Spi_JobDetails, AUTOMATIC, SPI_CONFIG_CONST) Spi_ReqJobDetails,
uint8 LucQueueIndex)
{
  Spi_JobType LddNoOfJobs;
  Spi_JobType LddCounterTop;
  Spi_JobType LddCounterMaxValue;
  Spi_JobType LddPreviousQueueIndex;
  Spi_JobType LddCurrentQueueMax;

  /* START Msg(2:2814)-5 */
  /* Get the number of jobs configured for the requested sequence */
  LddNoOfJobs = LpSeqConfig->ddNoOfJobs;
  /* END Msg(2:2814)-5 */

  /* Check if the requested sequence is interruptible */
  if (SPI_TRUE == (LpSeqConfig->blInterruptibleSequence))
  {
    /* Increment the max index of the queue */
    Spi_GddQueueIndex[LucQueueIndex]++;
    /*
     * Place the job at this position by shifting the
     * job already in the queue by one position
     */
    LddCounterTop = Spi_GddQueueIndex[LucQueueIndex];
    do
    {
      Spi_GaaJobQueue[LddCounterTop] =
                                 Spi_GaaJobQueue[LddCounterTop - SPI_ONE];
      LddCounterTop--;
    /* START Msg(2:2814)-5 */
    }while (LddCounterTop > (Spi_ReqJobDetails->ddCntrForJobsOnGoing));
    /* END Msg(2:2814)-5 */
    Spi_GaaJobQueue[LddCounterTop] =
                                  (Spi_ReqJobDetails->ddReqJobListIndex);
    /*Set the job status as SPI_JOB_QUEUED*/
    Spi_GaaJobResult[(Spi_ReqJobDetails->pReqJobList)->ddJobIndex] =
                                                               SPI_JOB_QUEUED;
    Spi_GaaJobCount[(Spi_ReqJobDetails->pReqJobList)->ddJobIndex] =
                            (Spi_ReqJobDetails->pReqJobList)->ucJobCount;
    (Spi_ReqJobDetails->ddJobCount)--;
    /* To break the loop */
    Spi_ReqJobDetails->ddCntrForJobsOnGoing =
                                 (Spi_ReqJobDetails->ddLowestQueueIndex );
  } /* End of check if the queue is full */
  else
  {
    LddPreviousQueueIndex = Spi_GddQueueIndex[LucQueueIndex];
    LddCurrentQueueMax = LddPreviousQueueIndex + LddNoOfJobs;
    /*
     * Sequence is non-interruptible. Hence place the
     * jobs of the sequence continuously in the queue
     */
    LddCounterMaxValue = (Spi_GddQueueIndex[LucQueueIndex] -
                    (Spi_ReqJobDetails->ddCntrForJobsOnGoing)) + SPI_ONE;
    do
    {
      Spi_GaaJobQueue[LddCurrentQueueMax] =
                                   Spi_GaaJobQueue[LddPreviousQueueIndex];
      LddCurrentQueueMax--;
      LddPreviousQueueIndex--;
      LddCounterMaxValue--;
    }while (SPI_ZERO < LddCounterMaxValue);

    LddCounterMaxValue = SPI_ZERO;
    (Spi_ReqJobDetails->ddReqJobListIndex) = LpSeqConfig->ddJobListIndex;
    /* START Msg(2:2824)-1 */
    /* MISRA Violation: START Msg(4:0488)-1 */
    (Spi_ReqJobDetails->pReqJobList) = Spi_GpFirstJobList +
                                  (Spi_ReqJobDetails->ddReqJobListIndex);
    /* END Msg(4:0488)-1 */
    /* END Msg(2:2824)-1 */
    do
    {
      Spi_GaaJobQueue[(Spi_ReqJobDetails->ddCntrForJobsOnGoing)] =
                                  (Spi_ReqJobDetails->ddReqJobListIndex);
      Spi_GaaJobCount[(Spi_ReqJobDetails->pReqJobList)->ddJobIndex] =
                            (Spi_ReqJobDetails->pReqJobList)->ucJobCount;
      (Spi_ReqJobDetails->ddReqJobListIndex)++;
      /* MISRA Violation: START Msg(4:0489)-3 */
      (Spi_ReqJobDetails->pReqJobList)++;
      /* END Msg(4:0489)-3 */
      (Spi_ReqJobDetails->ddCntrForJobsOnGoing)++;
      LddCounterMaxValue++;
    }while (LddCounterMaxValue < LddNoOfJobs);

    Spi_GddQueueIndex[LucQueueIndex] =
                           Spi_GddQueueIndex[LucQueueIndex] + LddNoOfJobs;
    (Spi_ReqJobDetails->ddJobCount) = SPI_ZERO;
    /* To break the loop */
    (Spi_ReqJobDetails->ddCntrForJobsOnGoing) =
                                 (Spi_ReqJobDetails->ddLowestQueueIndex );
    (Spi_ReqJobDetails->ddCntrForJobsReq) = SPI_ONE;
  } /* End of if the requested sequence is interruptible */
}
#define SPI_STOP_SEC_PRIVATE_CODE
#include "MemMap.h"

#endif /*
        * End of (((SPI_DIRECT_ACCESS_MODE == STD_ON) && \
        * (SPI_HWUNIT_ASYNCHRONOUS == STD_ON)) || (SPI_FIFO_MODE == STD_ON) \
        *                                || (SPI_HW_PRIORITY_ENABLED == STD_ON))
        */
#endif

/*******************************************************************************
**                          End of File                                       **
*******************************************************************************/
