/**********************************************************************************************************************
 *  COPYRIGHT
 *  -------------------------------------------------------------------------------------------------------------------
 *  \verbatim
 *  Copyright (c) 2016 by Vector Informatik GmbH.                                                  All rights reserved.
 *
 *                This software is copyright protected and proprietary to Vector Informatik GmbH.
 *                Vector Informatik GmbH grants to you only those rights as set out in the license conditions.
 *                All other rights remain with Vector Informatik GmbH.
 *  \endverbatim
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *        \file  Fee_30_SmallSector_Layer2_InstanceFinder.c
 *        \brief  InstanceFinder is responsible for finding the most recent data
 *
 *      \details  InstanceFinder is responsible for determination of the address of recently written data (here: instance)
 *                in Flash according to specific BlockNumber (UserJobParameter). InstanceFinder is responsible for
 *                evaluating the determined instance's status and stores it to the instance object which is passed by caller.
 *
 *********************************************************************************************************************/

#define FEE_30_SMALLSECTOR_IMPLEMENTATION_SOURCE

/* PRQA S 0779 LongInfixName */ /* MD_FEE_30_SMALLSECTOR_5.1 */

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/

#include "Fee_30_SmallSector_Layer2_InstanceFinder.h"
#include "Fee_30_SmallSector_Layer3_ReadManagementBytes.h"

#include "Fee_30_SmallSector_TaskManager.h"
#include "Fee_30_SmallSector_FlsCoordinator.h"

#include "Fee_30_SmallSector_DatasetHandler.h"
#include "Fee_30_SmallSector_BlockHandler.h"

/**********************************************************************************************************************
 *  LOCAL CONSTANT MACROS
 *********************************************************************************************************************/

#define FEE_30_SMALLSECTOR_INSTANCE_FINDER_LAYER FEE_30_SMALLSECTOR_LAYER_TWO_INDEX

/**********************************************************************************************************************
 *  LOCAL DATA TYPES AND STRUCTURES
 *********************************************************************************************************************/

#ifndef FEE_30_SMALLSECTOR_LOCAL /* COV_FEE_30_SMALLSECTOR_COMPATIBILITY */
# define FEE_30_SMALLSECTOR_LOCAL static
#endif

#define FEE_30_SMALLSECTOR_START_SEC_VAR_NOINIT_UNSPECIFIED
#include "MemMap.h"     /* PRQA S 5087 */ /* MD_MSR_19.1 */

typedef enum
{
  FEE_30_SMALLSECTOR_IF_STATE_UNINIT = 0,
  FEE_30_SMALLSECTOR_IF_STATE_IDLE,
  FEE_30_SMALLSECTOR_IF_STATE_CHECK_ERASE_PATTERN,
  FEE_30_SMALLSECTOR_IF_STATE_EXAMINE_INSTANCE
} Fee_30_SmallSector_If_StateType;

typedef struct
{
  MemIf_JobResultType JobResult;
  MemIf_StatusType Status;
  Fee_30_SmallSector_If_StateType StateMachine;
} Fee_30_SmallSector_If_ComponentParameterType;

/**********************************************************************************************************************
 *  LOCAL DATA PROTOTYPES
 *********************************************************************************************************************/

FEE_30_SMALLSECTOR_LOCAL P2VAR(Fee_30_SmallSector_Ih_InstanceType, AUTOMATIC, FEE_30_SMALLSECTOR_APPL_DATA) Fee_30_SmallSector_If_Instance;

FEE_30_SMALLSECTOR_LOCAL VAR(Fee_30_SmallSector_Ih_InstanceType, FEE_30_SMALLSECTOR_APPL_DATA) Fee_30_SmallSector_If_InstancePrev;

#define FEE_30_SMALLSECTOR_STOP_SEC_VAR_NOINIT_UNSPECIFIED
#include "MemMap.h"     /* PRQA S 5087 */ /* MD_MSR_19.1 */

#define FEE_30_SMALLSECTOR_START_SEC_VAR_FAST_INIT_UNSPECIFIED
#include "MemMap.h"     /* PRQA S 5087 */ /* MD_MSR_19.1 */

FEE_30_SMALLSECTOR_LOCAL VAR(Fee_30_SmallSector_If_ComponentParameterType, FEE_30_SMALLSECTOR_APPL_DATA) Fee_30_SmallSector_If_ComponentParameter =
  { MEMIF_JOB_FAILED, MEMIF_UNINIT, FEE_30_SMALLSECTOR_IF_STATE_UNINIT };

#define FEE_30_SMALLSECTOR_STOP_SEC_VAR_FAST_UNSPECIFIED
#include "MemMap.h"     /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *  GLOBAL DATA
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  LOCAL FUNCTION PROTOTYPES
 *********************************************************************************************************************/

#define FEE_30_SMALLSECTOR_START_SEC_CODE
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *  Fee_30_SmallSector_If_IsSearchFinished()
 *********************************************************************************************************************/
/*!
 * \brief      Compares both instance objects and determines if search is finished
 * \details    Compares management values of passed instance objects (previous instance and newly read instance).
 *             Based on status and cycle counter of both instances, it is determined if search for most recent
 *             instance is finished. In case search is finished, Instance object will be updated and then returned
 *             to caller of InstanceFinder sub-component. In case search is not yet finished, PreviousInstance object
 *             will be updated with values of instance object.
 * \param[in]  Instance
 * \param[in]  PreviousInstance
 * \return     TRUE: Search is finished
 * \return     FALSE: Search is not yet finished
 * \pre        -
 * \context    TASK
 * \reentrant  FALSE
 */
FEE_30_SMALLSECTOR_LOCAL FUNC(boolean, FEE_30_SMALLSECTOR_PRIVATE_CODE) Fee_30_SmallSector_If_IsSearchFinished(Fee_30_SmallSector_Ih_InstanceVarPointerType Instance,
        Fee_30_SmallSector_Ih_InstanceVarPointerType PreviousInstance);

/**********************************************************************************************************************
 Fee_30_SmallSector_If_FinishJob()
 **********************************************************************************************************************/
/*!
 * \brief      Finishes currently processed job
 * \details    State and status are reset. InstanceFinder sub-component is de-registered from TaskManager.
 * \param[in]  JobResult
 * \pre        -
 * \context    TASK
 * \reentrant  FALSE
 */
FEE_30_SMALLSECTOR_LOCAL FUNC(void, FEE_30_SMALLSECTOR_PRIVATE_CODE) Fee_30_SmallSector_If_FinishJob(MemIf_JobResultType JobResult);

/**********************************************************************************************************************
 Fee_30_SmallSector_If_ProcessIdleState()
 **********************************************************************************************************************/
/*!
 * \brief      Processes idle state of InstanceFinder sub-component
 * \details    Processes idle state of InstanceFinder sub-component
 * \pre        -
 * \context    TASK
 * \reentrant  FALSE
 */
FEE_30_SMALLSECTOR_LOCAL FUNC(void, FEE_30_SMALLSECTOR_PRIVATE_CODE) Fee_30_SmallSector_If_ProcessIdleState(void);

/**********************************************************************************************************************
 Fee_30_SmallSector_If_ProcessCheckErasePattern()
 **********************************************************************************************************************/
/*!
 * \brief      Processes ErasePattern check state of InstanceFinder sub-component
 * \details    Processes ErasePattern check state of InstanceFinder sub-component
 * \pre        -
 * \context    TASK
 * \reentrant  FALSE
 */
FEE_30_SMALLSECTOR_LOCAL FUNC(void, FEE_30_SMALLSECTOR_PRIVATE_CODE) Fee_30_SmallSector_If_ProcessCheckErasePattern(void);

/**********************************************************************************************************************
 Fee_30_SmallSector_If_ProcessExamineInstanceState()
 **********************************************************************************************************************/
/*!
 * \brief      Processes Examine Instance state of InstanceFinder sub-component
 * \details    Processes Examine Instance state of InstanceFinder sub-component
 * \pre        -
 * \context    TASK
 * \reentrant  FALSE
 */
FEE_30_SMALLSECTOR_LOCAL FUNC(void, FEE_30_SMALLSECTOR_PRIVATE_CODE) Fee_30_SmallSector_If_ProcessExamineInstanceState(void);

/**********************************************************************************************************************
 Fee_30_SmallSector_If_ProcessStateMachine()
 **********************************************************************************************************************/
/*!
 * \brief      Processes state machine of InstanceFinder sub-component
 * \details    Processes state machine of InstanceFinder sub-component
 * \pre        -
 * \context    TASK
 * \reentrant  FALSE
 */
FEE_30_SMALLSECTOR_LOCAL FUNC(void, FEE_30_SMALLSECTOR_PRIVATE_CODE) Fee_30_SmallSector_If_ProcessStateMachine(void);

/**********************************************************************************************************************
 *  LOCAL FUNCTIONS
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  Fee_30_SmallSector_If_IsSearchFinished()
 *********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *
 *
 *
 */
FEE_30_SMALLSECTOR_LOCAL FUNC(boolean, FEE_30_SMALLSECTOR_PRIVATE_CODE) Fee_30_SmallSector_If_IsSearchFinished(Fee_30_SmallSector_Ih_InstanceVarPointerType Instance,
        Fee_30_SmallSector_Ih_InstanceVarPointerType PreviousInstance)
{
  /* #10 Set return value initially to TRUE, which means that search is finished */
  boolean retVal = TRUE;

  switch (Fee_30_SmallSector_Ih_GetInstanceStatus(Instance)) /* SBSW_FEE_30_SMALLSECTOR_46 */
  {
    case INSTANCE_STATUS_ERASED:
      /* #20 Search finished. Current instance is erased, thus previousInstance will be returned */
      *Instance = *PreviousInstance; /* SBSW_FEE_30_SMALLSECTOR_41 */
      break;

    default :/* #40 INSTANCE_STATUS_OK or INSTANCE_STATUS_INVALID or INSTANCE_STATUS_INCONSISTENT */
      /* #41 Search has to be continued. Current instance is either valid, invalid or inconsistent*/
      *PreviousInstance = *Instance; /* SBSW_FEE_30_SMALLSECTOR_42 */
      /* #45 Set return value to FALSE to signalize, that search is not yet finished */
      retVal = FALSE;
      break;
  }

  return retVal;
}

/**********************************************************************************************************************
 *  Fee_30_SmallSector_If_FinishJob()
 *********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 */
FEE_30_SMALLSECTOR_LOCAL FUNC(void, FEE_30_SMALLSECTOR_PRIVATE_CODE) Fee_30_SmallSector_If_FinishJob(MemIf_JobResultType JobResult)
{
  /* #10 InstanceFinder sub-component de-registers itself from TaskManager */
  Fee_30_SmallSector_Tm_RemoveTask(Fee_30_SmallSector_If_Execute, Fee_30_SmallSector_If_Cancel, FEE_30_SMALLSECTOR_INSTANCE_FINDER_LAYER); /* SBSW_FEE_30_SMALLSECTOR_15 */

  Fee_30_SmallSector_If_ComponentParameter.JobResult = JobResult;
  Fee_30_SmallSector_If_ComponentParameter.Status = MEMIF_IDLE;
  Fee_30_SmallSector_If_ComponentParameter.StateMachine = FEE_30_SMALLSECTOR_IF_STATE_IDLE;
}

/**********************************************************************************************************************
 Fee_30_SmallSector_If_ProcessIdleState()
 **********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 */
FEE_30_SMALLSECTOR_LOCAL FUNC(void, FEE_30_SMALLSECTOR_PRIVATE_CODE) Fee_30_SmallSector_If_ProcessIdleState(void)
{
  /* #10 Check first page of dataset, which contains the ErasePattern, to be blank/erased. Otherwise the entire dataset is invalid */
  if (Fee_30_SmallSector_Dh_CheckErasePattern() == E_OK) /* SBSW_FEE_30_SMALLSECTOR_43 */
  {
    Fee_30_SmallSector_If_ComponentParameter.StateMachine = FEE_30_SMALLSECTOR_IF_STATE_CHECK_ERASE_PATTERN;
  }
  else
  {
    Fee_30_SmallSector_If_FinishJob(MEMIF_JOB_FAILED);
  }
}

/**********************************************************************************************************************
 Fee_30_SmallSector_If_ProcessCheckErasePattern()
 **********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *
 *
 *
 */
FEE_30_SMALLSECTOR_LOCAL FUNC(void, FEE_30_SMALLSECTOR_PRIVATE_CODE) Fee_30_SmallSector_If_ProcessCheckErasePattern(void)
{
  boolean IsErasePatternBlank = Fee_30_SmallSector_Dh_IsErasePatternBlank() == TRUE;

  /* #10 Check if ErasePattern is Blank/Erased */
  if ((Fee_30_SmallSector_Fls_GetJobResult() == MEMIF_JOB_OK) && IsErasePatternBlank )
  {
    /* #20 Prepare instance object to start reading its Management Bytes */
    Fee_30_SmallSector_Ih_CreateInstance(Fee_30_SmallSector_If_Instance, Fee_30_SmallSector_Dh_GetFirstInstanceAddress(), Fee_30_SmallSector_Dh_GetDataLength()); /* SBSW_FEE_30_SMALLSECTOR_43 */
    Fee_30_SmallSector_If_InstancePrev = *Fee_30_SmallSector_If_Instance;

    /* #30 Initiate InstanceFinder job */
    if (Fee_30_SmallSector_RdMgmt_StartJob(Fee_30_SmallSector_If_Instance) == E_OK) /* SBSW_FEE_30_SMALLSECTOR_43 */
    {
      Fee_30_SmallSector_If_ComponentParameter.StateMachine = FEE_30_SMALLSECTOR_IF_STATE_EXAMINE_INSTANCE;
    }
    else
    {
      Fee_30_SmallSector_If_FinishJob(MEMIF_JOB_FAILED);
    }
  }
  else{
    /* #40 Finish InstanceFinder job if BlankCheck either returned with MEMIF_BLOCK_INCONSISTENT (ErasePattern is not blank/erased) or if the job failed  */
    switch (Fee_30_SmallSector_Fls_GetJobResult())
    {
    case MEMIF_JOB_FAILED:
      Fee_30_SmallSector_If_FinishJob(MEMIF_JOB_FAILED);
      break;
    default: /* #45 Either MEMIF_JOB_OK, if BlankCheck API is disabled and ErasePattern is not erased, or MEMIF_BLOCK_INCONSISTENT, if BlankCheck detects non blank pattern */
      Fee_30_SmallSector_If_FinishJob(MEMIF_BLOCK_INCONSISTENT);
      break;
    }
  }

}

/**********************************************************************************************************************
 Fee_30_SmallSector_If_ProcessExamineInstanceState()
 **********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *
 *
 *
 *
 *
 */
FEE_30_SMALLSECTOR_LOCAL FUNC(void, FEE_30_SMALLSECTOR_PRIVATE_CODE) Fee_30_SmallSector_If_ProcessExamineInstanceState(void)
{
  /* #10 Set status of instance based on recently read management bytes */
  Fee_30_SmallSector_Ih_DetermineInstanceStatus(Fee_30_SmallSector_If_Instance); /* SBSW_FEE_30_SMALLSECTOR_43 */

  /* #15 Compare Fee_30_SmallSector_If_Instance to previous instance and evaluate if search is finished */
  if (Fee_30_SmallSector_If_IsSearchFinished(Fee_30_SmallSector_If_Instance, &Fee_30_SmallSector_If_InstancePrev) == TRUE) /* SBSW_FEE_30_SMALLSECTOR_45 */
  {
    /* #20 Search is finished */
    Fee_30_SmallSector_If_FinishJob(MEMIF_JOB_OK);
  }
  else
  {
    /* #25 At this point Fee_30_SmallSector_If_InstancePrev and Fee_30_SmallSector_If_Instance are identical. */
    /* #26 Parameters of next instance in dataset have to be loaded to Fee_30_SmallSector_If_Instance */
    if (Fee_30_SmallSector_Dh_IsLastInstance(Fee_30_SmallSector_If_Instance) == TRUE) /* SBSW_FEE_30_SMALLSECTOR_46 */
    {
      /* #30 Fee_30_SmallSector_If_Instance is last instance in dataset, thus it is returned */
      Fee_30_SmallSector_If_FinishJob(MEMIF_JOB_OK);
    }
    else
    {
      /* #35 There are still instances left to check within the dataset */
      Fee_30_SmallSector_Dh_PrepareNextInstance(Fee_30_SmallSector_If_Instance); /* SBSW_FEE_30_SMALLSECTOR_43 */

      if (Fee_30_SmallSector_RdMgmt_StartJob(Fee_30_SmallSector_If_Instance) == E_OK) /* SBSW_FEE_30_SMALLSECTOR_43 */
      {
        Fee_30_SmallSector_If_ComponentParameter.StateMachine = FEE_30_SMALLSECTOR_IF_STATE_EXAMINE_INSTANCE;
      }
      else
      {
        Fee_30_SmallSector_If_FinishJob(MEMIF_JOB_FAILED);
      }
    }
  }
}

/**********************************************************************************************************************
 Fee_30_SmallSector_If_ProcessStateMachine()
 **********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *
 *
 */
FEE_30_SMALLSECTOR_LOCAL FUNC(void, FEE_30_SMALLSECTOR_PRIVATE_CODE) Fee_30_SmallSector_If_ProcessStateMachine(void)
{
  switch (Fee_30_SmallSector_If_ComponentParameter.StateMachine)
  {
    /*** -------------- IDLE ------------------------------------------------------------ ***/
    case FEE_30_SMALLSECTOR_IF_STATE_IDLE:

      /* #10 Check first page of dataset (ErasePattern) to be erased/blank */
      Fee_30_SmallSector_If_ProcessIdleState();

      break;

    /*** -------------- CHECK ERASE PATTERN --------------------------------------------- ***/
    case FEE_30_SMALLSECTOR_IF_STATE_CHECK_ERASE_PATTERN:

      /* #20 Initiate instance search by reading management information of dataset's first instance */
      Fee_30_SmallSector_If_ProcessCheckErasePattern();

      break;

    /*** -------------- EXAMINE INSTANCE ---------------------------------------- ***/
    case FEE_30_SMALLSECTOR_IF_STATE_EXAMINE_INSTANCE:

      if (Fee_30_SmallSector_RdMgmt_GetJobResult() == MEMIF_JOB_OK)
      {
        /* #40 Management information of recently read instance will be evaluated */
        Fee_30_SmallSector_If_ProcessExamineInstanceState();
      }
      else
      {
        Fee_30_SmallSector_If_FinishJob(Fee_30_SmallSector_RdMgmt_GetJobResult());
      }
      break;

    default:
      Fee_30_SmallSector_If_FinishJob(MEMIF_JOB_FAILED);
      break;
  }
}

/**********************************************************************************************************************
 *  GLOBAL FUNCTIONS
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  Fee_30_SmallSector_If_Init()
 *********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 */
FUNC(void, FEE_30_SMALLSECTOR_PUBLIC_CODE) Fee_30_SmallSector_If_Init(void)
{
  Fee_30_SmallSector_If_ComponentParameter.Status = MEMIF_IDLE;
  Fee_30_SmallSector_If_ComponentParameter.JobResult = MEMIF_JOB_OK;

  Fee_30_SmallSector_Ih_InitInstance(&Fee_30_SmallSector_If_InstancePrev); /* SBSW_FEE_30_SMALLSECTOR_44 */

  Fee_30_SmallSector_If_ComponentParameter.StateMachine = FEE_30_SMALLSECTOR_IF_STATE_IDLE;
}

/**********************************************************************************************************************
 *  Fee_30_SmallSector_If_GetStatus()
 *********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 */
FUNC(MemIf_StatusType, FEE_30_SMALLSECTOR_PUBLIC_CODE) Fee_30_SmallSector_If_GetStatus(void)
{
  return Fee_30_SmallSector_If_ComponentParameter.Status;
}

/**********************************************************************************************************************
 *  Fee_30_SmallSector_If_GetJobResult()
 *********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 */
FUNC(MemIf_JobResultType, FEE_30_SMALLSECTOR_PUBLIC_CODE) Fee_30_SmallSector_If_GetJobResult(void)
{
  return Fee_30_SmallSector_If_ComponentParameter.JobResult;
}

/**********************************************************************************************************************
 *  Fee_30_SmallSector_If_StartJob()
 *********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 */
FUNC(Std_ReturnType, FEE_30_SMALLSECTOR_PUBLIC_CODE) Fee_30_SmallSector_If_StartJob(Fee_30_SmallSector_Ih_InstanceVarPointerType Instance)
{
  Std_ReturnType retVal;

  /* #10 Requested job is only accepted if sub-component's state machine is idle */
  if (Fee_30_SmallSector_If_ComponentParameter.StateMachine == FEE_30_SMALLSECTOR_IF_STATE_IDLE)
  {
    /* #20 InstanceFinder sub-component's execution and cancel service are registered to TaskManager */
    retVal = Fee_30_SmallSector_Tm_AddTask(Fee_30_SmallSector_If_Execute, Fee_30_SmallSector_If_Cancel, FEE_30_SMALLSECTOR_INSTANCE_FINDER_LAYER); /* SBSW_FEE_30_SMALLSECTOR_14 */

    if (retVal == E_OK)
    {
      Fee_30_SmallSector_If_ComponentParameter.Status = MEMIF_BUSY;
      Fee_30_SmallSector_If_ComponentParameter.JobResult = MEMIF_JOB_PENDING;

      Fee_30_SmallSector_If_Instance = Instance;
    }
  }
  else
  {
    retVal = E_NOT_OK;
  }
  return retVal;
}

/**********************************************************************************************************************
 *  Fee_30_SmallSector_If_Execute()
 *********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 */
FUNC(void, FEE_30_SMALLSECTOR_PUBLIC_CODE) Fee_30_SmallSector_If_Execute(void)
{
  /* #10 InstanceFinder's state machine is only processed if sub-component's status is busy */
  if (Fee_30_SmallSector_If_ComponentParameter.Status == MEMIF_BUSY)
  {
    Fee_30_SmallSector_If_ProcessStateMachine();
  }
}

/**********************************************************************************************************************
 *  Fee_30_SmallSector_If_Cancel()
 *********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 */
FUNC(void, FEE_30_SMALLSECTOR_PUBLIC_CODE) Fee_30_SmallSector_If_Cancel(void)
{
  Fee_30_SmallSector_If_FinishJob(MEMIF_JOB_CANCELED);
}

#define FEE_30_SMALLSECTOR_STOP_SEC_CODE
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/* PRQA L:LongInfixName */

/* SBSW_JUSTIFICATION_BEGIN
    \ID SBSW_FEE_30_SMALLSECTOR_41
      \DESCRIPTION Content of object of type Fee_30_SmallSector_Ih_InstanceType referenced by PreviousInstance is copied to
                   object of type Fee_30_SmallSector_Ih_InstanceType referenced by parameter Instance.
      \COUNTERMEASURE \N The compiler performs type check and therefore assures that write access to object of
                         referenced parameter Instance is valid.
                         PreviousInstance is pointing to content of local variable Fee_30_SmallSector_If_InstancePrev which
                         is initialized upon sub-component initialization and is written with valid data in idle state
                         of the sub-component. Thus, PreviousInstance is always a valid pointer
                         once Fee_30_SmallSector_If_IsSearchFinished function is called.
    \ID SBSW_FEE_30_SMALLSECTOR_42
      \DESCRIPTION Content of object of type Fee_30_SmallSector_Ih_InstanceType referenced by Instance is copied to
                   object of type Fee_30_SmallSector_Ih_InstanceType referenced by parameter PreviousInstance.
      \COUNTERMEASURE \N The compiler performs type check and therefore assures that write access to object of
                         referenced parameter PreviousInstance is valid.
                         Instance which is a copy of local pointer Fee_30_SmallSector_If_Instance is always a valid pointer because
                         Fee_30_SmallSector_If_Instance is initialized with a valid reference of an instance object upon job start of
                         Fee_30_SmallSector_Layer2_InstanceFinder sub-component.
                         The layer 1 sub-components Invalidate, Read and Write contain a local instance object each,
                         whose address is passed to Fee_30_SmallSector_Layer2_InstanceFinder upon job start.
                         InstanceFinder's instance pointer is initialized with this reference.
    \ID SBSW_FEE_30_SMALLSECTOR_43
      \DESCRIPTION Function is called with reference to an instance object Fee_30_SmallSector_If_Instance
      \COUNTERMEASURE \N Local pointer to parameter Fee_30_SmallSector_If_Instance is initialized upon call of Fee_30_SmallSector_If_StartJob service.
                         Caller of Fee_30_SmallSector_Layer2_InstanceFinder sub-component ensures that pointer passed to the
                         sub-component is valid.
    \ID SBSW_FEE_30_SMALLSECTOR_44
      \DESCRIPTION Function is called with reference to local parameter Fee_30_SmallSector_If_InstancePrev
      \COUNTERMEASURE \N Fee_30_SmallSector_If_InstancePrev is a local parameter, thus references to this parameter are valid.
    \ID SBSW_FEE_30_SMALLSECTOR_45
      \DESCRIPTION Function is called with both a reference to the local parameter Fee_30_SmallSector_If_InstancePrev and a reference
                   to an instance object Fee_30_SmallSector_If_Instance
      \COUNTERMEASURE \N Fee_30_SmallSector_If_InstancePrev is a local parameter, thus references to this parameter are valid.
                         Local pointer to parameter Fee_30_SmallSector_If_Instance is initialized upon call of Fee_30_SmallSector_If_StartJob service.
                         Caller of Fee_30_SmallSector_Layer2_InstanceFinder sub-component ensures that pointer passed to the
                         sub-component is valid.
    \ID SBSW_FEE_30_SMALLSECTOR_46
      \DESCRIPTION Function is called with pointer to an instance object of type Fee_30_SmallSector_Ih_InstanceConstPointerType or
                   Fee_30_SmallSector_Ih_InstanceVarPointerType
      \COUNTERMEASURE \N Instance parameter is passed to function via input parameter, thus caller ensures
                         that parameter referenced by pointer is valid.
SBSW_JUSTIFICATION_END */

