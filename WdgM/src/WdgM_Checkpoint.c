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
 *  -----------------------------------------------------------------------------------------------------------------*/
/*!        \file  WdgM_Checkpoint.c
 *        \brief  WdgM source file of the function and helper functions of WdgM_CheckpointReached
 *
 *      \details  This is the implementation of the function WdgM_CheckpointReached and all functions that are needed
 *                by this service
 *
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  REVISION HISTORY
 *  -------------------------------------------------------------------------------------------------------------------
 *  Refer to the module's header file.
 *
 *  FILE VERSION
 *  -------------------------------------------------------------------------------------------------------------------
 *  Refer to the VERSION CHECK below.
 *********************************************************************************************************************/

#define WDGM_SOURCE

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "WdgM.h"
#if (WDGM_DEV_ERROR_DETECT == STD_ON)
# include "Appl_Det.h"
#endif /* (WDGM_DEV_ERROR_DETECT == STD_ON) */

/**********************************************************************************************************************
 *  VERSION CHECK
 *********************************************************************************************************************/
#define WDGM_CHECKPOINT_SW_MAJOR_VERSION_SOURCE   (5u)
#define WDGM_CHECKPOINT_SW_MINOR_VERSION_SOURCE   (1u)
#define WDGM_CHECKPOINT_SW_PATCH_VERSION_SOURCE   (3u)

/* Check the version of WdgM header file */
#if !( (WDGM_SW_MAJOR_VERSION == WDGM_CHECKPOINT_SW_MAJOR_VERSION_SOURCE) \
    && (WDGM_SW_MINOR_VERSION == WDGM_CHECKPOINT_SW_MINOR_VERSION_SOURCE) \
    && (WDGM_SW_PATCH_VERSION == WDGM_CHECKPOINT_SW_PATCH_VERSION_SOURCE) \
     )
# error "Version mismatch! Incorrect version of WdgM.h"
#endif

/**********************************************************************************************************************
 *  LOCAL CONSTANT MACROS
 *********************************************************************************************************************/

/* Define the API ID that has to be used in the function WdgM_CheckpointReached which depends on
 * whether AUTOSAR 3.1 compatibility is turned on */
#if (WDGM_AUTOSAR_3_1_X_COMPATIBILITY == STD_ON) /* COV_WDGM_AUTOSAR3_1_INCOMPATIBILITY */
  #define WDGM_API_ID_CP_REACHED API_ID_WdgM_UpdateAliveCounter
#else
  #define WDGM_API_ID_CP_REACHED API_ID_WdgM_CheckpointReached
#endif /* (WDGM_AUTOSAR_3_1_X_COMPATIBILITY == STD_ON) */

/**********************************************************************************************************************
 *  LOCAL FUNCTION MACROS
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  LOCAL DATA TYPES AND STRUCTURES
 *********************************************************************************************************************/

#if (WDGM_AUTOSAR_4_x == STD_ON) /* COV_WDGM_AUTOSAR4_COMPATIBILITY */
/* In AUTOSAR 4.x environment STATIC is not used any more. static must be used instead. */
# if !defined (WDGM_LOCAL) /* COV_WDGM_COMPATIBILITY */
#  define WDGM_LOCAL static
# endif
#else
/* In AUTOSAR 3.x environment STATIC is defined as part of the compiler abstraction. */
# define WDGM_LOCAL STATIC
#endif /* (WDGM_AUTOSAR_4_x == STD_ON) */

/**********************************************************************************************************************
 *  LOCAL DATA PROTOTYPES
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  GLOBAL DATA
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  EXTERNAL DECLARATIONS
 *********************************************************************************************************************/

#if (WDGM_USE_OS_SUSPEND_INTERRUPT == STD_ON)
/* Use Schedule Manager to disable/restore interrupts */
#else
# if (WDGM_USE_USER_SUSPEND_INTERRUPT == STD_ON)  /* COV_WDGM_MISRA */
/* User defined functions for global interrupt disable/enable */
extern void GlobalSuspendInterrupts(void); /* PRQA S 3447 */ /* MD_WdgM_3447 */
extern void GlobalRestoreInterrupts(void); /* PRQA S 3447 */ /* MD_WdgM_3447 */
# else
/* No interrupt suspend is used in this case! */
# endif /* (WDGM_USE_USER_SUSPEND_INTERRUPT == STD_ON) */
#endif /* (WDGM_USE_OS_SUSPEND_INTERRUPT == STD_ON) */

/**********************************************************************************************************************
 *  LOCAL FUNCTION PROTOTYPES
 *********************************************************************************************************************/

#define WDGM_START_SEC_CODE
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *  ProgramFlowAndDeadlineMonitoring()
 *********************************************************************************************************************/
/*! \brief        Checks logical and deadline supervision for a certain supervised entity
 *  \details      ProgramFlowAndDeadlineMonitoring is an internal function and checks the actual global and local
 *                program flow against the configured one. It also checks actual local and global transitions times
 *                against the configured deadlines.
 *  \param[in]    current_entity_ptr       Pointer to a supervised entity
 *  \param[in]    current_checkpoint_ptr   Pointer to a current checkpoint (reached by calling WdgM_CheckpointReached)
 *  \param[in]    CPID                     Identifier of the current checkpoint
 *  \param[in]    current_tick_count       Current time
 *  \param[in]    RememberedCheckpointId   Identifier of the last checkpoint
 *  \param[in]    global_activity          Current status of the global activity flag
 *  \param[in]    wdgm_cfg_ptr             Pointer to the configuration for the core on which the function is called
 *  \pre          -
 *  \context      TASK
 *  \reentrant    FALSE
 *  \synchronous  TRUE
 *  \trace        DSGN-WdgM23073, DSGN-WdgM23072
 *  \trace        SPEC-2068292, SPEC-2068294, SPEC-2068295, SPEC-2068300, SPEC-2068302, SPEC-2068303, SPEC-2068306
 *  \trace        SPEC-2068307, SPEC-2068308
 */
WDGM_LOCAL FUNC(void, WDGM_CODE) ProgramFlowAndDeadlineMonitoring(
  P2CONST(WdgM_SupervisedEntityType, AUTOMATIC, WDGM_APPL_CONST) current_entity_ptr,
  P2CONST(WdgM_CheckPointType, AUTOMATIC, WDGM_APPL_CONST) current_checkpoint_ptr,
  VAR(WdgM_CheckpointIdType, AUTOMATIC) CPID,
  VAR(WdgM_TimeBaseTickType, AUTOMATIC) current_tick_count,
  VAR(WdgM_CheckpointIdType, AUTOMATIC) RememberedCheckpointId
#if (WDGM_GLOBAL_TRANSITIONS == STD_ON)
  , VAR(WdgM_SharedBooleanType, AUTOMATIC) global_activity,
  P2CONST(WdgM_ConfigType, AUTOMATIC, WDGM_APPL_CONST) wdgm_cfg_ptr
#endif /* (WDGM_GLOBAL_TRANSITIONS == STD_ON) */
  );

/**********************************************************************************************************************
 *  FindTransitionId()
 *********************************************************************************************************************/
/*! \brief        Parses all the defined local incoming transitions and finds the actual transition
 *  \details      FindTransitionId is an internal function and parses for the current checkpoint all the defined local
 *                incoming transitions and tries to find the current transition.
 *  \param[in]    current_transition_ptr      Pointer to the current local transition
 *  \param[in]    RememberedCheckpointId      Identifier of the last checkpoint
 *  \param[in]    nr_of_incoming_transitions  Number of local incoming transitions into the current checkpoint
 *  \return       0                           If no valid local transition is found
 *  \return       Local transition Id + 1     If a valid local transition is found
 *  \pre          -
 *  \context      TASK
 *  \reentrant    FALSE
 *  \synchronous  TRUE
 *  \trace        DSGN-WdgM23073, DSGN-WdgM23072
 */
WDGM_LOCAL FUNC(WdgM_TransitionIdType, WDGM_CODE) FindTransitionId(
  P2CONST(WdgM_TransitionType, AUTOMATIC, WDGM_APPL_CONST) current_transition_ptr,
  VAR(WdgM_CheckpointIdType, AUTOMATIC) RememberedCheckpointId,
  VAR(WdgM_TransitionIdType, AUTOMATIC) nr_of_incoming_transitions
  );

#if (WDGM_GLOBAL_TRANSITIONS == STD_ON)
/**********************************************************************************************************************
 *  WdgM_ReadAndClearGlobalTransitionFlags()
 *********************************************************************************************************************/
/*! \brief        Reads and clears the global transition flags
 *  \details      WdgM_ReadAndClearGlobalTransitionFlags is an internal function and checks for program flow splitting
 *                in case the previous checkpoint started global transitions which are already completed. All global
 *                global transition flags of the previous checkpoint are cleared.
 *                The read uses a negated value validation check. When the check shows a failure, an immediate
 *                watchdog reset will follow
 *  \param[in]    current_entity_ptr     Pointer to the current checkpoint's supervised entity
 *  \param[in]    previous_entity_ptr    Pointer to the source checkpoint's supervised entity of the global transition
 *  \param[in]    g_tr_source_cp_id      Id of the source checkpoint of the global transition
 *  \param[in]    current_g_tr_flag_id   Global transition flag Id of the global transition
 *  \param[in]    RememberedCheckpointId CPID of the checkpoint from which the program flow has reached the current CP
 *  \param[in]    wdgm_cfg_ptr           Pointer to the configuration for the core on which the function is called
 *  \return       TRUE   If the previous checkpoint starts at most one global transition and no other global
 *                       transition was completed except the one between the previous and the current checkpoint
 *                       (no program flow splitting)
 *  \return       FALSE  If the previous checkpoint does not start any global transition or at least one global
 *                       transition - besides the one between the current checkpoint and the previous checkpoint - was
 *                       completed
 *                       (program flow has gone on more than one way)
 *  \pre          -
 *  \context      TASK
 *  \reentrant    FALSE
 *  \synchronous  TRUE
 *  \config       WDGM_GLOBAL_TRANSITIONS is STD_ON
 *  \trace        DSGN-WdgM23073, DSGN-WdgM23072
 */
WDGM_LOCAL FUNC(WdgM_SharedBooleanType, WDGM_CODE) WdgM_ReadAndClearGlobalTransitionFlags(
  P2CONST(WdgM_SupervisedEntityType, AUTOMATIC, WDGM_APPL_CONST) current_entity_ptr,
  P2CONST(WdgM_SupervisedEntityType, AUTOMATIC, WDGM_APPL_CONST) previous_entity_ptr,
  VAR(WdgM_CheckpointIdType, AUTOMATIC) g_tr_source_cp_id,
  VAR(WdgM_TransitionIdType, AUTOMATIC) current_g_tr_flag_id,
  VAR(WdgM_CheckpointIdType, AUTOMATIC) RememberedCheckpointId,
  P2CONST(WdgM_ConfigType, AUTOMATIC, WDGM_APPL_CONST) wdgm_cfg_ptr
  );

/**********************************************************************************************************************
 *  WdgM_ReadGlobalActivityFlag()
 *********************************************************************************************************************/
/*! \brief        Reads the global activity flag
 *  \details      WdgM_ReadGlobalActivityFlag is an internal function and reads the global activity flag.
 *                The read uses a negated value validation check. When the check shows a failure, an immediate
 *                watchdog reset will follow
 *  \param[in]    wdgm_cfg_ptr      Pointer to the configuration for the core on which the function is called
 *  \return       TRUE | FALSE      Current status of the global activity flag
 *  \pre          -
 *  \context      TASK
 *  \reentrant    FALSE
 *  \synchronous  TRUE
 *  \config       WDGM_GLOBAL_TRANSITIONS is STD_ON
 *  \note         Caller must protect from interrupts
 *  \trace        DSGN-WdgM22775
 */
WDGM_LOCAL FUNC(WdgM_SharedBooleanType, WDGM_CODE) WdgM_ReadGlobalActivityFlag(
  P2CONST(WdgM_ConfigType, AUTOMATIC, WDGM_APPL_CONST) wdgm_cfg_ptr
  );

/**********************************************************************************************************************
 *  ClearGlobalIncomingTrFlagsForCP()
 *********************************************************************************************************************/
/*! \brief        Clears global transition flags for all global incoming transitions of the provided checkpoint
 *  \details      ClearGlobalIncomingTrFlagsForCP is an internal function and clears global transition flags for all
 *                global incoming transitions of the provided checkpoint
 *  \param[in]    current_checkpoint_ptr
 *  \param[in]    wdgm_cfg_ptr      Pointer to the configuration for the core on which the function is called
 *  \pre          -
 *  \context      TASK
 *  \reentrant    FALSE
 *  \synchronous  TRUE
 *  \config       WDGM_GLOBAL_TRANSITIONS is STD_ON
 *  \note         The global transition flags are not needed any more (already read) when this function is called
 *  \trace        DSGN-WdgM23073, DSGN-WdgM23072
 */
WDGM_LOCAL FUNC(void, WDGM_CODE) ClearGlobalIncomingTrFlagsForCP(
  P2CONST(WdgM_CheckPointType, AUTOMATIC, WDGM_APPL_CONST) current_checkpoint_ptr,
  P2CONST(WdgM_ConfigType, AUTOMATIC, WDGM_APPL_CONST) wdgm_cfg_ptr
  );
#endif /* (WDGM_GLOBAL_TRANSITIONS == STD_ON) */

/**********************************************************************************************************************
 *  LOCAL FUNCTIONS
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  ProgramFlowAndDeadlineMonitoring()
 *********************************************************************************************************************/
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
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 */
WDGM_LOCAL FUNC(void, WDGM_CODE) ProgramFlowAndDeadlineMonitoring(
  P2CONST(WdgM_SupervisedEntityType, AUTOMATIC, WDGM_APPL_CONST) current_entity_ptr,
  P2CONST(WdgM_CheckPointType, AUTOMATIC, WDGM_APPL_CONST) current_checkpoint_ptr,
  VAR(WdgM_CheckpointIdType, AUTOMATIC) CPID,
  VAR(WdgM_TimeBaseTickType, AUTOMATIC) current_tick_count,
  VAR(WdgM_CheckpointIdType, AUTOMATIC) RememberedCheckpointId
#if (WDGM_GLOBAL_TRANSITIONS == STD_ON)
  , VAR(WdgM_SharedBooleanType, AUTOMATIC) global_activity,
  P2CONST(WdgM_ConfigType, AUTOMATIC, WDGM_APPL_CONST) wdgm_cfg_ptr
#endif /* (WDGM_GLOBAL_TRANSITIONS == STD_ON) */
  )
{
  VAR(WdgM_TransitionIdType, AUTOMATIC) loc_trans_id;
  VAR(WdgM_TransitionIdType, AUTOMATIC) nr_of_trans;
  P2CONST(WdgM_TransitionType, AUTOMATIC, WDGM_APPL_CONST) current_transition_ptr;
  VAR(boolean, AUTOMATIC) check_program_flow;
  VAR(WdgM_TimeBaseTickType, AUTOMATIC) curr_trans_time;
#if (WDGM_GLOBAL_TRANSITIONS == STD_ON)
  P2CONST(WdgM_GlobalTransitionType, AUTOMATIC, WDGM_APPL_CONST) current_global_transition_ptr;
  P2CONST(WdgM_SupervisedEntityType, AUTOMATIC, WDGM_APPL_CONST) previous_entity_ptr;
  VAR(WdgM_TransitionIdType, AUTOMATIC) glob_trans_id;
  VAR(WdgM_BooleanParamType, AUTOMATIC) glob_init_first_time;
  VAR(WdgM_TransitionIdType, AUTOMATIC) nr_of_global_transitions;
  VAR(WdgM_SharedBooleanType, AUTOMATIC) g_tr_flag;
  VAR(WdgM_SupervisedEntityIdType, AUTOMATIC) source_entity_id;
  VAR(uint8, AUTOMATIC) global_deadline_error_counter = 0;
  VAR(uint8, AUTOMATIC) nr_of_valid_global_transitions_with_deadline = 0;

  glob_trans_id        = 0u;
  glob_init_first_time = FALSE;
#endif /* WDGM_GLOBAL_TRANSITIONS == STD_ON */

  loc_trans_id         = 0u;
  check_program_flow   = current_entity_ptr->WdgMProgramFlowMonitoring;

  /* #10 Check if global transitions are configured */
#if (WDGM_GLOBAL_TRANSITIONS == STD_ON)
  /* #20 Check if global transitions are not activated yet */
  if (global_activity == FALSE)
  {
    /* *** First time run, global activity */

    /* #30 Check if the reached checkpoint is the one which starts a global activity */
    if ( (wdgm_cfg_ptr->WdgMGlobInitialCheckpointId == CPID )
      && (wdgm_cfg_ptr->WdgMGlobInitialEntityId == current_entity_ptr->WdgMSupervisedEntityId)
       )
    {
      /* GlobalActivityFlag set to TRUE atomically before calling this function. */

      /* #31 Set a local flag that indicates that the checkpoint starts global activity (set PF exception flag) */
      glob_init_first_time = TRUE;
    }
    /* #40 Check if global incoming transitions and no local incoming transitions are defined for this checkpoint */
    else if ( (current_checkpoint_ptr->NrOfGlobalTransitions > 0u)
           && (current_checkpoint_ptr->NrOfLocalTransitions == 0u)
            /* "and check_program_flow == TRUE" is redundant, because program flow is always set to TRUE by the
               code generator if NrOfGlobalTransitions > 0! */
            )
    {
      /* #41 Update the program flow violation counter */
      current_entity_ptr->EntityStatusLRef->ProgramFlowViolationCnt++; /* SBSW_WDGM_011 */
      /* Whether a transition straight to EXPIRED shall be made is checked in the main function according to the
       * configured tolerance
       */
    }
    else
    {
      /* MISRA rule 14.10 */
    }

    /* #50 Clear global transition flags of all global incoming transitions */
    ClearGlobalIncomingTrFlagsForCP (current_checkpoint_ptr, wdgm_cfg_ptr); /* SBSW_WDGM_012 */ /* SBSW_WDGM_001 */
  }
  /* #60 Check if global transitions are already activated */
  else
  {
    /* *** Second and all next runs */

    /* #70 Check if global incoming transitions are defined for this checkpoint */
    if (current_checkpoint_ptr->NrOfGlobalTransitions > 0u)
    {
      /* #80 Get the pointer to the array that contains all global incoming transitions of the given checkpoint */
      current_global_transition_ptr = current_checkpoint_ptr->WdgMGlobalTransitionsRef;

      /* #90 Get the number of global incoming transitions of the given checkpoint */
      nr_of_global_transitions = current_checkpoint_ptr->NrOfGlobalTransitions;

      /* #100 Loop over all configured global incoming transitions of the given checkpoint */
      while (nr_of_global_transitions > 0u)
      {
        /* #110 Get the Id and the pointer to that supervised entity which is configured as source of the global
         *      incoming transition */
        source_entity_id = current_global_transition_ptr[nr_of_global_transitions - 1u].EntitySourceId;
        previous_entity_ptr = &wdgm_cfg_ptr->WdgMSupervisedEntityRef[source_entity_id];

        /* Check all outgoing global transitions of the previous checkpoint if one has been taken (global transition
         * flag is FALSE): Then at this point program flow splitting occurs - PF violation!
         *
         * If no program flow splitting occurred and at least one global incoming transition was valid then program
         * flow was successful no matter if a valid local transition is found later
         */
        /* #120 Clear global transition flags of all global incoming transitions */
        g_tr_flag = WdgM_ReadAndClearGlobalTransitionFlags( /* SBSW_WDGM_007 */ /* SBSW_WDGM_001 */
                                  current_entity_ptr,
                                  previous_entity_ptr,
                                  current_global_transition_ptr[nr_of_global_transitions - 1u].CheckpointSourceId,
                                  current_global_transition_ptr[nr_of_global_transitions - 1u].GlobalTransitionFlagId,
                                  RememberedCheckpointId,
                                  wdgm_cfg_ptr
                                  );

        /* #130 Check if a valid global transition has been taken */
        if (g_tr_flag == TRUE)
        {
          /* #140 Store the global transition in a local variable */
          glob_trans_id = nr_of_global_transitions;
          /* glob_trans_id is checked at the end of the function */

          /* ------------------------------------------------------ */
          /* ---------- CHECK GLOBAL TRANSITION DEADLINE ---------- */
          /* Transition found - check its deadline */
          /* Deadline defined? */

          /* #150 Check if deadline supervision is configured for the found transition */
          if ( current_global_transition_ptr[nr_of_global_transitions - 1u].WdgMDeadlineMax > 0u )
          {
            /* #151 Increment counter if a valid global transition with deadline was found */
            nr_of_valid_global_transitions_with_deadline++;

            /* #152 Calculate the current transition time */
            curr_trans_time = current_tick_count - (previous_entity_ptr->EntityStatusLRef->RememberedCheckpointTime);

            /* #153 Check if the current transition time is within the configured tolerance */
            if ( (curr_trans_time > current_global_transition_ptr[nr_of_global_transitions - 1u].WdgMDeadlineMax)
              || (curr_trans_time < current_global_transition_ptr[nr_of_global_transitions - 1u].WdgMDeadlineMin)
               )
            {
              /* #154 Indicate that a deadline violation has occurred */
              global_deadline_error_counter++;
            }
          }
          /* ------------------------------------------------------ */
        }
        nr_of_global_transitions--;
      }
      /* #160 Check if a deadline violation has occurred */
      if ((nr_of_valid_global_transitions_with_deadline > 0) && (global_deadline_error_counter >= nr_of_valid_global_transitions_with_deadline))
      {
        /* #161 Update deadline violation counter if current transition time is out of configured border */
        current_entity_ptr->EntityStatusLRef->DeadlineViolationCnt++; /* SBSW_WDGM_011 */
      }
    }
  }
#endif /* WDGM_GLOBAL_TRANSITIONS == STD_ON */

  /* #170 Check the local activity */
  /* ----------------------------------------------------------------------
     WDGM271: Check the Local Activity Status
     ---------------------------------------------------------------------- */
  /* #180 Check if local transitions are not activated yet */
  if ( (current_entity_ptr->EntityStatusLRef->LocalActivityFlag == FALSE)
  /* #190 Check if logical supervision is configured */
    && (check_program_flow == TRUE)
     )
  {
    /* *** First time run, local activity */

    /* #200 Check if the reached checkpoint is the one which starts a local activity */
    /* WDGM251: */
    if (current_entity_ptr->WdgMCheckpointLocInitialId == CPID)
    {
      /* #201 Set the local activity flag */
      current_entity_ptr->EntityStatusLRef->LocalActivityFlag = TRUE; /* SBSW_WDGM_011 */

      /* #202 Check if AUTOSAR_DEBUGGING is configured */
#if (WDGM_AUTOSAR_DEBUGGING == STD_ON)
      /* #203 Store the current timebase tick counter in case of enabled debugging */
      current_entity_ptr->EntityStatusLRef->RememberedInitialCheckpointTime = current_tick_count; /* SBSW_WDGM_011 */
#endif /* (WDGM_AUTOSAR_DEBUGGING == STD_ON) */

      /* #204 Check if global transitions are configured */
#if (WDGM_GLOBAL_TRANSITIONS == STD_ON)
      /* #205 Check if NO global transition has been taken by reaching this checkpoint */
      if ( (glob_trans_id == 0u)
      /* #206 Check if the reached checkpoint has configured global incoming transitions */
        && (current_checkpoint_ptr->NrOfGlobalTransitions > 0u)
      /* #207 Check if this checkpoint is NOT the global initial one */
        && (glob_init_first_time == FALSE)
         )
      {
        /* #208 Update the program flow violation counter */
        current_entity_ptr->EntityStatusLRef->ProgramFlowViolationCnt++; /* SBSW_WDGM_011 */
        /* Whether a transition straight to EXPIRED shall be made is checked in the main function according to the
         * configured tolerance
         */
      }
#endif /* WDGM_GLOBAL_TRANSITIONS == STD_ON */
    }
    /* #210 Check if the reached checkpoint does not start a local activity */
    else
    {
      /* First run but no Local Initial CP => ERROR */
      /*! 221 Update the program flow violation counter */
      current_entity_ptr->EntityStatusLRef->ProgramFlowViolationCnt++; /* SBSW_WDGM_011 */

      /* Whether a transition straight to EXPIRED shall be made is checked in the main function according to the
       * configured tolerance
       */
    }
  }
  /* #220 Check if local transitions are already activated */
  else /* if (current_entity_ptr->EntityStatusLRef->LocalActivityFlag == TRUE) */
  {
    /* *** Entity second and all next runs, if passed by a start CP */

    /* #230 Check if local incoming transitions are defined for this checkpoint */
    nr_of_trans = current_checkpoint_ptr->NrOfLocalTransitions;
    if (nr_of_trans != 0u)
    {
      /* Local Incoming Transition defined, Global not found */
      /* Build pointer to Local Incoming Transitions */
      /* #240 Find the current transition id */
      current_transition_ptr = current_checkpoint_ptr->WdgMLocalTransitionRef;
      loc_trans_id = FindTransitionId( current_transition_ptr, /* SBSW_WDGM_013 */
                                       RememberedCheckpointId,
                                       nr_of_trans
                                     );
      /* loc_trans_id == 0u means that no transition has been found */

      /* #250 Check if a local transition has been found */
      if (loc_trans_id > 0u)
      {
        /* ---------------------------------------------------------- */
        /* ------------- CHECK LOCAL TRANSITION DEADLINE ------------ */
        /* To check Deadline we need to know whether the Transition time was in the config defined
         * (not specified in WDGM)
         */

        /* #260 Check if deadline supervision is configured for the found transition */
        if (current_transition_ptr[loc_trans_id - 1u].WdgMDeadlineMax > 0u)
        {
          /* #261 Calculate the current transition time */
          curr_trans_time = current_tick_count - (current_entity_ptr->EntityStatusLRef->RememberedCheckpointTime);

          /* #262 Check if the current transition time is within the configured tolerance */
          /* WDGM202 */
          if ( (curr_trans_time > current_transition_ptr[loc_trans_id - 1u].WdgMDeadlineMax)
            || (curr_trans_time < current_transition_ptr[loc_trans_id - 1u].WdgMDeadlineMin)
             )
          {
            /* #263 Update deadline violation counter if current transition time is out of configured border */
            current_entity_ptr->EntityStatusLRef->DeadlineViolationCnt++; /* SBSW_WDGM_011 */
          }
              /* WDGM231: When the Deadline transition end point is not called.
               * Then the check need to be done inside the cyclic main function
               */
        }
        /* ---------------------------------------------------------- */

        /* #270 Check if global transitions are configured */
#if (WDGM_GLOBAL_TRANSITIONS == STD_ON)
        /* Check all outgoing global transitions of the previous checkpoint if one has been taken (global transition
         * flag is FALSE) then at this point program flow splitting occurs - PF violation! */
        /* #271 Check for program flow splitting */
        (void) WdgM_ReadAndClearGlobalTransitionFlags( current_entity_ptr,/* SBSW_WDGM_007 */ /* SBSW_WDGM_001 */
                                                       current_entity_ptr, /* coming from a local transition */
                                                       RememberedCheckpointId,
                                                       WDGM_INVALID_TR_ID, /* coming from a local transition */
                                                       RememberedCheckpointId,
                                                       wdgm_cfg_ptr
                                                      );
#endif /* WDGM_GLOBAL_TRANSITIONS == STD_ON */
      }
    }

    /* #280 Check if whether a local nor a global transition was found by reaching this checkpoint */
    if ( (loc_trans_id == 0u)
#if (WDGM_GLOBAL_TRANSITIONS == STD_ON)
      && (glob_trans_id == 0u)
#endif /* WDGM_GLOBAL_TRANSITIONS == STD_ON */
    /* #281 Check if logical supervision is configured */
      && (check_program_flow == TRUE)
       )
    {
      /* #282 Update the program flow violation counter */
      current_entity_ptr->EntityStatusLRef->ProgramFlowViolationCnt++; /* SBSW_WDGM_011 */
      /* Whether a transition straight to EXPIRED shall be made is checked in the main function according to the
       * configured tolerance. */
    }
  } /* if (current_entity_ptr->EntityStatusLRef->LocalActivityFlag == TRUE) */

  /* #290 Check if a terminating checkpoint (end checkpoint) has been reached */
  /* Note, that a start checkpoint could be an end check point as well! */
  if ( (current_checkpoint_ptr->WdgMIsEndCheckpoint == TRUE)
    && (check_program_flow == TRUE)
     )
  {
    /* #291 Reset the local activity status */
    current_entity_ptr->EntityStatusLRef->LocalActivityFlag = FALSE; /* SBSW_WDGM_011 */
  }
} /* PRQA S 6010, 6030, 6060, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STPAR, MD_MSR_STMIF */

/**********************************************************************************************************************
 *  FindTransitionId()
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
WDGM_LOCAL FUNC(WdgM_TransitionIdType, WDGM_CODE) FindTransitionId(
  P2CONST(WdgM_TransitionType, AUTOMATIC, WDGM_APPL_CONST) current_transition_ptr,
  VAR(WdgM_CheckpointIdType, AUTOMATIC) RememberedCheckpointId,
  VAR(WdgM_TransitionIdType, AUTOMATIC) nr_of_incoming_transitions
  )
{
  VAR(WdgM_TransitionIdType, AUTOMATIC) transition_id;

  /* #10 Loop over all transitions given by the pointer and limited by the number of incoming transition */
  while (nr_of_incoming_transitions > 0u)
  {
    /* #11 Check if there is transition between current and remembered checkpoint */
    /* WDGM247 */
    if (current_transition_ptr[nr_of_incoming_transitions - 1u].CheckpointSourceId == RememberedCheckpointId)
    {
      /* #12 Stop the loop and return the id of the transition if a valid transition was found */
      break;
    }
    nr_of_incoming_transitions--;
  }

  /* #20 Set the local variable for the transition id to zero if no valid transition was found */
  transition_id = nr_of_incoming_transitions;

  /* #30 Return the transition id */
  return transition_id;
}

#if (WDGM_GLOBAL_TRANSITIONS == STD_ON)
/**********************************************************************************************************************
 *  WdgM_ReadAndClearGlobalTransitionFlags()
 *********************************************************************************************************************/
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
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 */
WDGM_LOCAL FUNC(WdgM_SharedBooleanType, WDGM_CODE) WdgM_ReadAndClearGlobalTransitionFlags(
  P2CONST(WdgM_SupervisedEntityType, AUTOMATIC, WDGM_APPL_CONST) current_entity_ptr,
  P2CONST(WdgM_SupervisedEntityType, AUTOMATIC, WDGM_APPL_CONST) previous_entity_ptr,
  VAR(WdgM_CheckpointIdType, AUTOMATIC) g_tr_source_cp_id,
  VAR(WdgM_TransitionIdType, AUTOMATIC) current_g_tr_flag_id,
  VAR(WdgM_CheckpointIdType, AUTOMATIC) RememberedCheckpointId,
  P2CONST(WdgM_ConfigType, AUTOMATIC, WDGM_APPL_CONST) wdgm_cfg_ptr
  )
{
  P2CONST(WdgM_CheckPointType, AUTOMATIC, WDGM_APPL_CONST) previous_checkpoint_ptr;
  VAR(WdgM_SharedBooleanType, AUTOMATIC) prev_g_tr_flag;
  VAR(WdgM_SharedBooleanType, AUTOMATIC) transition_flag;
  VAR(WdgM_TransitionIdType, AUTOMATIC) prev_cp_started_g_tr_id;
  VAR(WdgM_CheckpointIdType, AUTOMATIC) previous_remembered_cpid;
  VAR(WdgM_TransitionIdType, AUTOMATIC) g_tr_flag_id;

  prev_g_tr_flag = FALSE;

  /* #10 Enter section with disabled interrupts */
  WdgM_GlobalSuspendInterrupts();

  /* #20 Check if the remembered Checkpoint Id is not equal to the previous entity */
  if (current_entity_ptr != previous_entity_ptr)
  {
    /* #21 Get the Id of the remembered checkpoint of the previous supervised entity*/
    previous_remembered_cpid = previous_entity_ptr->EntityStatusLRef->RememberedCheckpointId;
  }
  /* #30 Check if the remembered Checkpoint Id is equal to the previous entity */
  else
  {
    /* If previous entity is current entity then take the remembered CP ID which is saved in the atomic read
       before overwriting it with the current CP ID. */
    /* #31 Get the Id of the remembered checkpoint */
    previous_remembered_cpid = RememberedCheckpointId;
  }

  /* #40 Check if the remembered checkpoint if in a valid one */
  if (previous_remembered_cpid != WDGM_INVALID_CP_ID)
  {
    /* #50 Get the pointer to the previous checkpoint */
    previous_checkpoint_ptr = &previous_entity_ptr->WdgMCheckpointRef[previous_remembered_cpid];
    /* #60 Get the number of possible outgoing global transitions of the previous checkpoint */
    prev_cp_started_g_tr_id = previous_checkpoint_ptr->NrOfStartedGlobalTransitions;

    /* Check when coming from a global transition, if the current global incoming transition is active at all.
       Otherwise no splitting of PF is possible. */
    transition_flag = TRUE;

    /* #70 Check if the current global transition id is valid */
    if (current_g_tr_flag_id != WDGM_INVALID_TR_ID)
    {
      /* #71 Read the global transition flag of the given transition */
      transition_flag = wdgm_cfg_ptr->GlobalTransitionFlagsGSRef[current_g_tr_flag_id].GlobalTransitionFlag;

      /* #72 Check the global transition flag for consistency */
      if ( transition_flag
       != (WdgM_SharedBooleanType) ~wdgm_cfg_ptr->GlobalTransitionFlagsGSRef
             [current_g_tr_flag_id].GlobalTransitionFlag_neg
         )
      {
        /* #73 Set the internal failure flag in case of an consistency error */
        wdgm_cfg_ptr->DataGSRef->InternalFailureFlag = WDGM_INTERNAL_CP_TEST_NOK; /* SBSW_WDGM_002 */
        /* #74 Return FALSE because of corrupted memory (the value of the flag cannot be trusted) */
        transition_flag = FALSE;
      }
    }

    /* #80 Check if the previous checkpoint has any global outgoing transitions */
    if ( (prev_cp_started_g_tr_id > 0u)
        /* #90 Check if the remembered checkpoint of the previous entity waits for a global transition
         *     (the ExternalTransitionSourceRef of the previous entity has been reached) */
          /* WDGM247: Is there a transition between current and remembered checkpoint of the previous entity? */
      && (g_tr_source_cp_id == previous_remembered_cpid)
          /* Coming from a local transition or coming from an active global transition
             (if global incoming transition is not active then no check is needed). */
      && (transition_flag == TRUE)
       )
    {
      prev_g_tr_flag = TRUE;

      /* #91 Loop over all global outgoing transitions of the previous checkpoint */
      while (prev_cp_started_g_tr_id > 0u)
      {
        /* #92 Get global transition */
        g_tr_flag_id = previous_checkpoint_ptr->WdgMStartedGlobalTransitionIds[prev_cp_started_g_tr_id - 1u];

        /* #93 Read and check global transition flag for consistency */
        transition_flag = wdgm_cfg_ptr->GlobalTransitionFlagsGSRef[g_tr_flag_id].GlobalTransitionFlag;
        if ( transition_flag
          != (WdgM_SharedBooleanType) ~wdgm_cfg_ptr->GlobalTransitionFlagsGSRef[g_tr_flag_id].GlobalTransitionFlag_neg
           )
        {
          /* #94 Set the internal failure flag in case of an consistency error */
          wdgm_cfg_ptr->DataGSRef->InternalFailureFlag = WDGM_INTERNAL_CP_TEST_NOK; /* SBSW_WDGM_002 */
          /* #95 Return FALSE because of corrupted memory (the value of the flag cannot be trusted) */
          transition_flag = FALSE;
        }

        /* #96 Clear the global transition flag and its double-inverse value */
        wdgm_cfg_ptr->GlobalTransitionFlagsGSRef[g_tr_flag_id].GlobalTransitionFlag = (WdgM_SharedBooleanType) FALSE; /* SBSW_WDGM_002 */
        wdgm_cfg_ptr->GlobalTransitionFlagsGSRef[g_tr_flag_id].GlobalTransitionFlag_neg
            = (WdgM_SharedBooleanType) ~FALSE; /* PRQA S 0277 */ /* MD_WdgM_0277 */ /* SBSW_WDGM_002 */

        /* #97 Check if global transition does not lead to the currently checked checkpoint */
        if (g_tr_flag_id != current_g_tr_flag_id)
        {
          /* #98 Check if another global transition has been taken from the previous checkpoint */
          if (transition_flag != TRUE)/* TRUE when a global transition was started, FALSE when it was completed */
          {
            /* Program Flow error - splitting of program flow! */
            /* #99 Update the program flow violation counter */
            current_entity_ptr->EntityStatusLRef->ProgramFlowViolationCnt++; /* SBSW_WDGM_011 */
          }
        }

        /* If at least one global transition flag is FALSE - another path has already been taken - return FALSE! */
        /* #100 Determine the global transition flag */
        if ((prev_g_tr_flag == TRUE) && (transition_flag == TRUE))
        {
          prev_g_tr_flag = TRUE;
        }
        else
        {
          prev_g_tr_flag = FALSE;
        }

        prev_cp_started_g_tr_id--;
      }
    }
  }

  /* #110 Leave section with disabled interrupts */
  WdgM_GlobalRestoreInterrupts();

  /* #120 Return the global transition flag of the current global transition */
  return prev_g_tr_flag;
} /* PRQA S 6010, 6030, 6060, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STPAR, MD_MSR_STMIF */

/**********************************************************************************************************************
 *  WdgM_ReadGlobalActivityFlag()
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
WDGM_LOCAL FUNC(WdgM_SharedBooleanType, WDGM_CODE) WdgM_ReadGlobalActivityFlag(
  P2CONST(WdgM_ConfigType, AUTOMATIC, WDGM_APPL_CONST) wdgm_cfg_ptr
  )
{
  VAR(WdgM_SharedBooleanType, AUTOMATIC) activity_flag;

  /* #10 Read the global activity flag */
  activity_flag = wdgm_cfg_ptr->DataGSRef->GlobalActivityFlag;
  /* #20 Check the global activity flag for consistency */
  if (activity_flag != (WdgM_SharedBooleanType) ~wdgm_cfg_ptr->DataGSRef->GlobalActivityFlag_neg)
  {
    /* #21 Set the internal failure flag in case of an consistency error */
    wdgm_cfg_ptr->DataGSRef->InternalFailureFlag = WDGM_INTERNAL_CP_TEST_NOK;  /* SBSW_WDGM_002 */
    /* #22 Return FALSE because of corrupted memory (the value of the flag cannot be trusted) */
    activity_flag = FALSE;
  }

  /* #30 Return the global activity flag */
  return activity_flag;
}

/**********************************************************************************************************************
 *  ClearGlobalIncomingTrFlagsForCP()
 *********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *
 *
 */
WDGM_LOCAL FUNC(void, WDGM_CODE) ClearGlobalIncomingTrFlagsForCP(
  P2CONST(WdgM_CheckPointType, AUTOMATIC, WDGM_APPL_CONST) current_checkpoint_ptr,
  P2CONST(WdgM_ConfigType, AUTOMATIC, WDGM_APPL_CONST) wdgm_cfg_ptr
  )
{
  P2CONST(WdgM_GlobalTransitionType, AUTOMATIC, WDGM_APPL_CONST) global_transitions_ptr;
  VAR(WdgM_TransitionIdType, AUTOMATIC) nr_of_global_transitions;

  /* #10 Get the pointer to the array that contains all global incoming transitions of the given checkpoint */
  global_transitions_ptr = current_checkpoint_ptr->WdgMGlobalTransitionsRef;

  /* #20 Get the number of global incoming transitions of the given checkpoint */
  nr_of_global_transitions = current_checkpoint_ptr->NrOfGlobalTransitions;

  /* #30 Loop over all configured global incoming transitions of the given checkpoint */
  while (nr_of_global_transitions > 0u)
  {
    /* #31 Clear global transition flags for this global incoming transition */
    (void) WdgM_ReadGlobalTransitionFlag( /* SBSW_WDGM_001 */
                                global_transitions_ptr[nr_of_global_transitions - 1u].GlobalTransitionFlagId,
                                TRUE,
                                wdgm_cfg_ptr
                                );

    nr_of_global_transitions--;
  }
}
#endif /* WDGM_GLOBAL_TRANSITIONS == STD_ON */

/**********************************************************************************************************************
 *  GLOBAL FUNCTIONS
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  WdgM_CheckpointReached() / WdgM_UpdateAliveCounter()
 *********************************************************************************************************************/
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
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 */
#if (WDGM_AUTOSAR_3_1_X_COMPATIBILITY == STD_ON) /* COV_WDGM_AUTOSAR3_1_INCOMPATIBILITY */
/* Update alive counter functionality as defined by AUTOSAR 3.1 */
FUNC (Std_ReturnType, WDGM_CODE) WdgM_UpdateAliveCounter(VAR(WdgM_SupervisedEntityIdType, AUTOMATIC) SEID)
#else
/* Checkpoint reached functionality as defined by AUTOSAR 4.0 r1 */
FUNC(Std_ReturnType, WDGM_CODE) WdgM_CheckpointReached(
  VAR(WdgM_SupervisedEntityIdType, AUTOMATIC) SEID,
  VAR(WdgM_CheckpointIdType, AUTOMATIC) CPID
  )
#endif /* (WDGM_AUTOSAR_3_1_X_COMPATIBILITY == STD_ON) */
{
  VAR(Std_ReturnType, AUTOMATIC) res = E_OK;
  VAR(WdgM_TimeBaseTickType, AUTOMATIC) tick_count_now;
  VAR(WdgM_LocalStatusType, AUTOMATIC) aperiodic_local_status;
  P2CONST(WdgM_CheckPointType, AUTOMATIC, WDGM_APPL_CONST) current_checkpoint_ptr;
  P2CONST(WdgM_SupervisedEntityType, AUTOMATIC, WDGM_APPL_CONST) current_entity_ptr;
  VAR(WdgM_CheckpointIdType, AUTOMATIC) remembered_cp_id;
#if (WDGM_GLOBAL_TRANSITIONS == STD_ON)
  VAR(WdgM_TransitionIdType, AUTOMATIC) g_tr;
  VAR(WdgM_SharedBooleanType, AUTOMATIC) global_activity_flag;
#endif /* (WDGM_GLOBAL_TRANSITIONS == STD_ON) */
#if (WDGM_AUTOSAR_3_1_X_COMPATIBILITY == STD_ON) /* COV_WDGM_AUTOSAR3_1_INCOMPATIBILITY */
  VAR(WdgM_CheckpointIdType, AUTOMATIC) CPID = 0u;
#endif /* (WDGM_AUTOSAR_3_1_X_COMPATIBILITY == STD_ON) */
  P2CONST(WdgM_ConfigType, AUTOMATIC, WDGM_APPL_CONST) wdgm_cfg_ptr;
#if (WDGM_MULTICORE_USAGE == STD_ON)
  VAR(WdgM_CoreIdType, AUTOMATIC) core_id;
#endif /* (WDGM_MULTICORE_USAGE == STD_ON) */

  /* #10 Check if multi-core is used */
#if (WDGM_MULTICORE_USAGE == STD_ON)
  /* #11 Check if the id of the current supervised entity is inside of the configured border (multi-core) */
  if (WdgMNrOfSupervisedEntities <= SEID)
  {
    /* WDGM004 */
    /* WDGM172: Is the current SE ID inside of the configured border? */
    WDGM_DET_REPORTERROR( WDGM_MODULE_ID,
                          WDGM_VENDOR_ID,
                          WDGM_API_ID_CP_REACHED,
                          WDGM_E_PARAM_SEID
                        );
    return E_NOT_OK;
  }
  /* #12 Get the current core id */
  core_id = WdgMSupervisedEntityRef[SEID].WdgMEntityCoreId;

  /* #13 Check if WdgM is configured to run on the current core */
  if ( (core_id >= WDGM_MAX_SUPPORTED_CORES)
    || (g_wdgm_cfg_ptr_array[core_id] == NULL_PTR)
     )
  {
    /* This function is called on a processor core that has not been configured to be used with the S-WdgM. */
    WDGM_DET_REPORTERROR( WDGM_MODULE_ID,
                          WDGM_VENDOR_ID,
                          WDGM_API_ID_CP_REACHED,
                          WDGM_E_WRONG_PROCESSOR_CORE
                        );
    return E_NOT_OK;
  }

  /* #20 Get the global config pointer */
  wdgm_cfg_ptr = *g_wdgm_cfg_ptr_array[core_id];
#else
  wdgm_cfg_ptr = g_wdgm_cfg_ptr;
#endif /* (WDGM_MULTICORE_USAGE == STD_ON) */

  /* #30 Check if WdgM is initialized */
  /* WDGM279 */
  if (wdgm_cfg_ptr == NULL_PTR)
  {
    /* WDGM004 */
    WDGM_DET_REPORTERROR( WDGM_MODULE_ID,
                          WDGM_VENDOR_ID,
                          WDGM_API_ID_CP_REACHED,
                          WDGM_E_NO_INIT
                        );
    res = E_NOT_OK;
  }
  /* #40 Check if single-core is used */
#if (WDGM_MULTICORE_USAGE != STD_ON)
  /* #41 Check if the id of the current supervised entity is inside of the configured border (single-core) */
  /* WDGM278 */
  else if (wdgm_cfg_ptr->NrOfSupervisedEntities <= SEID)
  {
    /* WDGM004 */
    WDGM_DET_REPORTERROR( WDGM_MODULE_ID,
                          WDGM_VENDOR_ID,
                          WDGM_API_ID_CP_REACHED,
                          WDGM_E_PARAM_SEID
                        );
    res = E_NOT_OK;
  }
#endif /* (WDGM_MULTICORE_USAGE == STD_ON) */
  else
  {
    /* #50 Load the pointer of the current supervised entity */
    current_entity_ptr = &wdgm_cfg_ptr->WdgMSupervisedEntityRef[SEID];

    /* #60 Check if the reported checkpoint id is within the configured boarder of the supervised entity */
    /* WDGM284 */
    if ((current_entity_ptr->NrOfCheckpoints) <= CPID)
    {
      /* WDGM004: */
      WDGM_DET_REPORTERROR( WDGM_MODULE_ID,
                            WDGM_VENDOR_ID,
                            WDGM_API_ID_CP_REACHED,
                            WDGM_E_CPID
                          );
      res = E_NOT_OK;
    }
    else
    {
      /* ----------------------------------------------------------------
       * After this point we assume that the configuration for SE and CP is OK!
       * -------------------------------------------------------------- */

      /* #70 Load the pointer of the current checkpoint */
      current_checkpoint_ptr = &wdgm_cfg_ptr->WdgMSupervisedEntityRef[SEID].WdgMCheckpointRef[CPID];

      /* For interruptibility and consistency reason, load the sensitive variables that are written by the main
       * function to the stack at one position here and disable interrupts around
       */

      /* #80 Enter section with disabled interrupts */
      WdgM_GlobalSuspendInterrupts ();

      /* #81 Get current timebase tick counter value */
#if (WDGM_TIMEBASE_SOURCE == WDGM_INTERNAL_HARDWARE_TICK) /* COV_WDGM_TIMEBASE_INTERNAL_HARDWARE_TICK_NOT_SUPPORTED */
      tick_count_now = WdgM_GetTickCount();
#else
      tick_count_now = WdgM_GetTickCount(wdgm_cfg_ptr); /* SBSW_WDGM_001 */
#endif /* (WDGM_TIMEBASE_SOURCE == WDGM_INTERNAL_HARDWARE_TICK) */

      /* #82 Load current current local supervision status */
      aperiodic_local_status = current_entity_ptr->EntityStatusGRef->LocalMonitoringStatus;

      /* #83 Check if global transitions are configured */
#if (WDGM_GLOBAL_TRANSITIONS == STD_ON)
      /* #84 Read the global activity flag */
      global_activity_flag = WdgM_ReadGlobalActivityFlag (wdgm_cfg_ptr); /* SBSW_WDGM_001 */

      /* #85 Check if no global activity has been started */
      if ( (global_activity_flag == FALSE)
      /* #86 Check if the reached checkpoint is the initial one */
        && (wdgm_cfg_ptr->WdgMGlobInitialCheckpointId == CPID)
        && (wdgm_cfg_ptr->WdgMGlobInitialEntityId == current_entity_ptr->WdgMSupervisedEntityId)
         )
      {
        /* Access function is used, because the GlobalActivityFlag is a data placed in different protection area */
        /* #87 Write the global activity flag (set true) */
        WdgM_WriteGlobalActivityFlag (TRUE, wdgm_cfg_ptr); /* SBSW_WDGM_001 */
      }

      /* WDGM252: */
      /* #88 Check if the reached checkpoint is the global end checkpoint */
      if (current_checkpoint_ptr->WdgMIsEndCheckpointGlobal == TRUE)
      {
        /* #89 Write the global activity flag (set false) */
        WdgM_WriteGlobalActivityFlag (FALSE, wdgm_cfg_ptr); /* SBSW_WDGM_001 */
      }
#endif /* (WDGM_GLOBAL_TRANSITIONS == STD_ON) */

      /* #90 Read the last reached checkpoint of this supervised entity */
      remembered_cp_id = current_entity_ptr->EntityStatusLRef->RememberedCheckpointId;
      /* #91 Store the reached checkpoint id as remembered checkpoint of this supervised entity */
      current_entity_ptr->EntityStatusLRef->RememberedCheckpointId = CPID; /* SBSW_WDGM_011 */

      /* #100 Leave section with disabled interrupts */
      WdgM_GlobalRestoreInterrupts ();

      switch (aperiodic_local_status)
      {
        /* -------------------------------------------------------------------*/
        /* #110 Check if the local supervision status is either OK or FAILED */
        case WDGM_LOCAL_STATUS_OK:
        case WDGM_LOCAL_STATUS_FAILED:
        {
          /* #120 Check if the reached checkpoint is defined */
          if (current_checkpoint_ptr->WdgMCheckpointId == CPID)
          {
            /* #121 Do the program flow and deadline supervision */
            ProgramFlowAndDeadlineMonitoring( current_entity_ptr, /* SBSW_WDGM_007 */ /* SBSW_WDGM_012 */ /* SBSW_WDGM_001 */
                                              current_checkpoint_ptr,
                                              CPID,
                                              tick_count_now,
                                              remembered_cp_id
#if (WDGM_GLOBAL_TRANSITIONS == STD_ON)
                                              , global_activity_flag,
                                              wdgm_cfg_ptr
#endif /* (WDGM_GLOBAL_TRANSITIONS
                                                      == STD_ON) */
                                            );

            /* Alive Monitoring       */
            /* Update counter for all defined (the first too!) Checkpoints */
            /* #122 Check if alive supervision is configured for the reached checkpoint */
            if (current_checkpoint_ptr->WdgMAliveLRef != NULL_PTR)
            {
              /* #123 Enter section with disabled interrupts */
              WdgM_GlobalSuspendInterrupts ();

              /* #124 Update the current alive counter for the reached checkpoint */
              current_checkpoint_ptr->WdgMAliveLRef->AliveCounter++; /* SBSW_WDGM_010 */

              /* issue45709: check alive counter for overflow */
              /* Note: if an overflow happens then an error has already occurred, because this means that this AC came
               * more times during the last supervision cycle than can be configured.
               * If local_AC == global_ACStamp (after increment) then an overflow has just happened. In this case set
               * the AC back to ACStamp - 1 to indicate the error:
               * In this case the alive counter is indicated to have moved AC - ACStamp times == 0xFFffFFff times
               * which is way higher than the maximum of WdgMExpectedAliveIndications + MaxMargin, hence an error is
               * detected during the next main function
               */
              /* #125 Check the alive counter for overflow */
              if ( current_checkpoint_ptr->WdgMAliveLRef->AliveCounter
                == current_checkpoint_ptr->WdgMAliveGRef->AliveCounterStamp
                 )
              {
                /* #126 Set alive counter back to global 'AliveCounterStamp - 1' to indicate an error */
                current_checkpoint_ptr->WdgMAliveLRef->AliveCounter--; /* SBSW_WDGM_010 */
              }

              /* #127 Leave section with disabled interrupts */
              WdgM_GlobalRestoreInterrupts ();
            }
          }
          /* #130 Check if the current checkpoint is undefined */
          else
          {
            /* Current CP is not defined in the Config */
            /* #131 Report an error to Det */
            WDGM_DET_REPORTERROR( WDGM_MODULE_ID,
                                  WDGM_VENDOR_ID,
                                  WDGM_API_ID_CP_REACHED,
                                  WDGM_E_CPID
                                 );
            res = E_NOT_OK;
          }
        }
        break;

        /* -------------------------------------------------------------------*/
        /* #140 Check if the local supervision status is EXPIRED */
        case WDGM_LOCAL_STATUS_EXPIRED:
        {
          /* #141 Do nothing due to end state (no way out) */
        }
        break;

        /* -------------------------------------------------------------------*/
        /* #150 Check if the local supervision status is DEACTIVATED */
        case WDGM_LOCAL_STATUS_DEACTIVATED:
        {
          /* WDGM208 */
          /* #151 Do nothing here. */
        }
        break;

        /* -------------------------------------------------------------------*/
        /* #160 Check if the local supervision status is undefined */
        default:
        {
          /* #161 Report an error to Det */
          res = E_NOT_OK;
          WDGM_DET_REPORTERROR( WDGM_MODULE_ID,
                                WDGM_VENDOR_ID,
                                WDGM_API_ID_CP_REACHED,
                                WDGM_E_PARAM_STATE
                               );
          /* If this statement is reached then another process has corrupted/overwritten the status */
          /* #162 Initiate an immediate watchdog reset */
          wdgm_cfg_ptr->DataGSRef->InternalFailureFlag = WDGM_INTERNAL_CP_TEST_NOK; /* SBSW_WDGM_002 */
        }
        break;
      }

      /* #170 Store the current timebase tick counter value */
      current_entity_ptr->EntityStatusLRef->RememberedCheckpointTime = tick_count_now; /* SBSW_WDGM_011 */

      /* WDGM248: Remember current Supervised Entity - OBSOLETE!
         NOT DONE ANY MORE! */

      /* #180 Check if global transitions are configured */
#if (WDGM_GLOBAL_TRANSITIONS == STD_ON)
      /* #181 Write the global transition flag for all global outgoing transitions (set true) */
      for (g_tr = 0u; g_tr < current_checkpoint_ptr->NrOfStartedGlobalTransitions; g_tr++)
      {
        WdgM_WriteGlobalTransitionFlag( current_checkpoint_ptr->WdgMStartedGlobalTransitionIds[g_tr], /* SBSW_WDGM_001 */
                                        TRUE,
                                        wdgm_cfg_ptr
                                       );
      }
#endif /* WDGM_GLOBAL_TRANSITIONS == STD_ON */
    }
  }

  /* #190 Return the result of the service */
  return (res);
} /* PRQA S 6010, 6030, 6050, 6080, 2006 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF, MD_MSR_14.7 */

#if (WDGM_GLOBAL_TRANSITIONS == STD_ON)
/**********************************************************************************************************************
 *  WdgM_WriteGlobalActivityFlag()
 *********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 */
FUNC(void, WDGM_CODE) WdgM_WriteGlobalActivityFlag(
  VAR(WdgM_SharedBooleanType, AUTOMATIC) activity_flag,
  P2CONST(WdgM_ConfigType, AUTOMATIC, WDGM_APPL_CONST) wdgm_cfg_ptr
  )
{
  /* #10 Write the global transition flag and its double-inverse value with the given value */
  wdgm_cfg_ptr->DataGSRef->GlobalActivityFlag     = activity_flag; /* SBSW_WDGM_002 */
  wdgm_cfg_ptr->DataGSRef->GlobalActivityFlag_neg = (WdgM_SharedBooleanType) ~activity_flag; /* SBSW_WDGM_002 */
}

/**********************************************************************************************************************
 *  WdgM_WriteGlobalTransitionFlag()
 *********************************************************************************************************************/
 /*!
  *
  * Internal comment removed.
 *
 *
 *
 *
  */
FUNC(void, WDGM_CODE) WdgM_WriteGlobalTransitionFlag(
  VAR(WdgM_TransitionIdType, AUTOMATIC) global_tr_id,
  VAR(WdgM_SharedBooleanType, AUTOMATIC) new_value,
  P2CONST(WdgM_ConfigType, AUTOMATIC, WDGM_APPL_CONST) wdgm_cfg_ptr
  )
{
  /* #10 Enter section with disabled interrupts */
  WdgM_GlobalSuspendInterrupts();
  /* #20 Write the global transition flag and its double-inverse value with the new value*/
  wdgm_cfg_ptr->GlobalTransitionFlagsGSRef[global_tr_id].GlobalTransitionFlag = new_value; /* SBSW_WDGM_002 */
  wdgm_cfg_ptr->GlobalTransitionFlagsGSRef[global_tr_id].GlobalTransitionFlag_neg = /* SBSW_WDGM_002 */
      (WdgM_SharedBooleanType) ~new_value;
  /* #30 Leave section with disabled interrupts */
  WdgM_GlobalRestoreInterrupts();
  return;
}

/**********************************************************************************************************************
 *  WdgM_ReadGlobalTransitionFlag()
 *********************************************************************************************************************/
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
 *
 *
 */
FUNC(WdgM_SharedBooleanType, WDGM_CODE) WdgM_ReadGlobalTransitionFlag(
  VAR(WdgM_TransitionIdType, AUTOMATIC) global_tr_id,
  VAR(boolean, AUTOMATIC) clear_after_read,
  P2CONST(WdgM_ConfigType, AUTOMATIC, WDGM_APPL_CONST) wdgm_cfg_ptr
  )
{
  VAR(WdgM_SharedBooleanType, AUTOMATIC) transition_flag;

  /* #10 Enter section with disabled interrupts */
  WdgM_GlobalSuspendInterrupts();

  /* #20 Read the global transition flag of the given transition */
  transition_flag = wdgm_cfg_ptr->GlobalTransitionFlagsGSRef[global_tr_id].GlobalTransitionFlag;
  /* #30 Check the global transition flag for consistency */
  if ( transition_flag
    != (WdgM_SharedBooleanType) ~wdgm_cfg_ptr->GlobalTransitionFlagsGSRef[global_tr_id].GlobalTransitionFlag_neg
     )
  {
    /* #31 Set the internal failure flag in case of an consistency error */
    wdgm_cfg_ptr->DataGSRef->InternalFailureFlag = WDGM_INTERNAL_CP_TEST_NOK; /* SBSW_WDGM_002 */
    /* #32 Return FALSE because of corrupted memory (the value of the flag cannot be trusted) */
    transition_flag = FALSE;
  }
  /* #40 Check the global transition flag should be cleared after read */
  else if (clear_after_read == TRUE)
  {
    /* #41 Clear the global transition flag and its double-inverse value */
    wdgm_cfg_ptr->GlobalTransitionFlagsGSRef[global_tr_id].GlobalTransitionFlag     = (WdgM_SharedBooleanType)FALSE; /* SBSW_WDGM_002 */
    wdgm_cfg_ptr->GlobalTransitionFlagsGSRef[global_tr_id].GlobalTransitionFlag_neg = (WdgM_SharedBooleanType)~FALSE; /* PRQA S 0277 */ /* MD_WdgM_0277 */ /* SBSW_WDGM_002 */
  }
  else
  {
    ; /* MISRA rule 14.10 */
  }

  /* #50 Leave section with disabled interrupts */
  WdgM_GlobalRestoreInterrupts();

  /* #60 Return the global transition flag of the given transition */
  return transition_flag;
}
#endif /* WDGM_GLOBAL_TRANSITIONS == STD_ON */

#define WDGM_STOP_SEC_CODE
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *  END OF FILE: WdgM_Checkpoint.c
 *********************************************************************************************************************/
