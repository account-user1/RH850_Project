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
/*!        \file  WdgM_Cfg.h
 *        \brief  Private include file for WdgM module
 *
 *      \details  This include file provides defines and declarations for the WdgM configuration identifiers
 *
 *********************************************************************************************************************/

#ifndef WDGM_CFG_H
# define WDGM_CFG_H


/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/

# include "Std_Types.h"
# include "WdgIf_Types.h"

/* Timebase Tick sources
   The tick source defines are on this position as they are used later in the WdgM_Cfg_Features.h generated file   */
# define WDGM_INTERNAL_SOFTWARE_TICK        (0u)
# define WDGM_INTERNAL_HARDWARE_TICK        (1u)
# define WDGM_EXTERNAL_TICK                 (2u)

/* Generated preprocessor options for module features */
# include "WdgM_Cfg_Features.h"


/**********************************************************************************************************************
 *  GLOBAL CONSTANT MACROS (Version Info)
 *********************************************************************************************************************/

/* ----- Component version information (decimal version of ALM implementation package) ----- */
# define WDGM_CFG_TYPES_HDR_MAJOR_VERSION   (5u)
# define WDGM_CFG_TYPES_HDR_MINOR_VERSION   (1u)
# define WDGM_CFG_TYPES_HDR_PATCH_VERSION   (3u)

/* ----- Component version information (decimal version of generator package(CFG5)) ----- */
# define WDGM_GENERATOR_MAJOR_VERSION       (2u)
# define WDGM_GENERATOR_MINOR_VERSION       (0u)

/* ----- WdgM_Cfg_Features.h version check ----- */
# if ( (WDGM_CFG_FEATURE_MAJOR_VERSION != WDGM_GENERATOR_MAJOR_VERSION) \
    || (WDGM_CFG_FEATURE_MINOR_VERSION != WDGM_GENERATOR_MINOR_VERSION) )
#  error "Version mismatch. Incorrect version of WdgM_Cfg_Features.h"
# endif

/**********************************************************************************************************************
 *  MACRO VALIDATION
 *********************************************************************************************************************/

/* ----- AUTOSAR features ----- */
# ifndef WDGM_VERSION_INFO_API
#  error "Macro WDGM_VERSION_INFO_API should be defined! (STD_ON/STD_OFF)"
# endif

# ifndef WDGM_DEV_ERROR_DETECT
#  error "Macro WDGM_DEV_ERROR_DETECT should be defined! (STD_ON/STD_OFF)"
# endif

# ifndef WDGM_DEM_REPORT
#  error "Macro WDGM_DEM_REPORT should be defined! (STD_ON/STD_OFF)"
# endif

# ifndef WDGM_DEFENSIVE_BEHAVIOR
#  error "Macro WDGM_DEFENSIVE_BEHAVIOR should be defined! (STD_ON/STD_OFF)"
# endif

# ifndef WDGM_IMMEDIATE_RESET
#  error "Macro WDGM_IMMEDIATE_RESET should be defined! (STD_ON/STD_OFF)"
# endif

# ifndef WDGM_OFF_MODE_ENABLED
#  error "Macro WDGM_OFF_MODE_ENABLED should be defined! (STD_ON/STD_OFF)"
# endif

/* ----- WDGM specific features (user-defined) ----- */
# ifndef WDGM_USE_OS_SUSPEND_INTERRUPT
#  error "Macro WDGM_USE_OS_SUSPEND_INTERRUPT should be defined! (STD_ON/STD_OFF)"
# endif

# ifndef WDGM_TIMEBASE_SOURCE
#  error "Macro WDGM_TIMEBASE_SOURCE should be defined!"
# endif

# if (WDGM_TIMEBASE_SOURCE != WDGM_INTERNAL_SOFTWARE_TICK)
#   if (WDGM_TIMEBASE_SOURCE != WDGM_EXTERNAL_TICK)
#    error "Macro WDGM_TIMEBASE_SOURCE should have defined value!"
#   endif /* (WDGM_TIMEBASE_SOURCE != WDGM_EXTERNAL_TICK) */
# endif /* (WDGM_TIMEBASE_SOURCE != WDGM_INTERNAL_SOFTWARE_TICK) */

# ifndef WDGM_SECOND_RESET_PATH
#  error "Macro WDGM_SECOND_RESET_PATH should be defined! (STD_ON/STD_OFF)"
# endif

# ifndef WDGM_TICK_OVERRUN_CORRECTION
#  error "Macro WDGM_TICK_OVERRUN_CORRECTION should be defined! (STD_ON/STD_OFF)"
# endif

# ifndef WDGM_ENTITY_DEACTIVATION_ENABLED
#  error "Macro WDGM_ENTITY_DEACTIVATION_ENABLED should be defined! (STD_ON/STD_OFF)"
# endif

# ifndef WDGM_STATE_CHANGE_NOTIFICATION
#  error "Macro WDGM_STATE_CHANGE_NOTIFICATION should be defined! (STD_ON/STD_OFF)"
# endif

# ifndef WDGM_USE_RTE
#  error "Macro WDGM_USE_RTE should be defined! (STD_ON/STD_OFF)"
# endif

# ifndef WDGM_DEM_SUPERVISION_REPORT
#  error "Macro WDGM_DEM_SUPERVISION_REPORT should be defined! (STD_ON/STD_OFF)"
# endif

# ifndef WDGM_FIRSTCYCLE_ALIVECOUNTER_RESET
#  error "Macro WDGM_FIRSTCYCLE_ALIVECOUNTER_RESET should be defined! (STD_ON/STD_OFF)"
# endif

# ifndef WDGM_AUTOSAR_DEBUGGING
#  error "Macro WDGM_AUTOSAR_DEBUGGING should be defined in the configuration! (STD_ON/STD_OFF)"
# endif

/* ----- WDGM specific features (automatically computed) ----- */
# ifndef WDGM_GLOBAL_TRANSITIONS
#  error "Macro WDGM_GLOBAL_TRANSITIONS should be defined! (STD_ON/STD_OFF)"
# endif

# ifndef WDGM_AUTOSAR_3_1_X_COMPATIBILITY
#  error "Macro WDGM_AUTOSAR_3_1_X_COMPATIBILITY should be defined! (STD_ON/STD_OFF)"
# endif

# ifndef WDGM_MULTIPLE_TRIGGER_MODES
#  error "Macro WDGM_MULTIPLE_TRIGGER_MODES should be defined! (STD_ON/STD_OFF)"
# endif

# ifndef WDGM_AUTOSAR_4_x
#  error "Macro WDGM_AUTOSAR_4_x should be defined! (STD_ON/STD_OFF)"
# endif

/* ----- WDGM specific features for multi-core ----- */
# ifndef WDGM_MULTICORE_USAGE
#  error "Macro WDGM_MULTICORE_USAGE should be defined in the configuration! (STD_ON/STD_OFF)"
# endif

# if (WDGM_MULTICORE_USAGE == STD_ON)
#  ifndef WDGM_USE_OS_CORE_IDENTIFICATION
#   error "Macro WDGM_USE_OS_CORE_IDENTIFICATION should be defined! (STD_ON/STD_OFF)"
#  endif
   
#  ifndef WDGM_CORE0_USED
#   error "Macro WDGM_CORE0_USED should be defined in the configuration! (STD_ON/STD_OFF)"
#  endif
   
#  ifndef WDGM_CORE1_USED
#   error "Macro WDGM_CORE1_USED should be defined in the configuration! (STD_ON/STD_OFF)"
#  endif
   
#  ifndef WDGM_CORE2_USED
#   error "Macro WDGM_CORE2_USED should be defined in the configuration! (STD_ON/STD_OFF)"
#  endif
   
#  ifndef WDGM_CORE3_USED
#   error "Macro WDGM_CORE3_USED should be defined in the configuration! (STD_ON/STD_OFF)"
#  endif
# endif /* (WDGM_MULTICORE_USAGE == STD_ON) */

/* ----- Others ----- */
# ifndef FALSE
#  error "Macro FALSE should be defined! ((boolean) 0u)"
# endif

# ifndef TRUE
#  error "Macro TRUE should be defined! ((boolean) 1u)"
# endif

# ifndef NULL_PTR /* COV_WDGM_NULL_PTR_DEFINE */
#  define NULL_PTR ((void *) 0u)
# endif


/**********************************************************************************************************************
 *  DEFINES
 *********************************************************************************************************************/

/* ----- Partition Reset defines ----- */
# define WDGM_INVALID_OSAPPLICATION 0xFFu

/* ----- Interrupt disable/enable ----- */

/* Force the user to deal with interrupt disable/enable functions in case no OS interrupt handling is chosen. */
# define WDGM_USE_USER_SUSPEND_INTERRUPT STD_ON

# if (WDGM_USE_OS_SUSPEND_INTERRUPT == STD_ON)
/* Use Schedule Manager to disable/restore interrupts */
#  include "SchM_WdgM.h"
#  if (WDGM_AUTOSAR_4_x == STD_ON) /* COV_WDGM_AUTOSAR4_COMPATIBILITY */
/*! Redefinition of the disable/restore interrupt functions in AUTOSAR 4.x environment */
#   define WdgM_GlobalSuspendInterrupts()   SchM_Enter_WdgM_WDGM_EXCLUSIVE_AREA_0()
#   define WdgM_GlobalRestoreInterrupts()   SchM_Exit_WdgM_WDGM_EXCLUSIVE_AREA_0()
#  else
/*! Redefinition of the disable/restore interrupt functions in AUTOSAR 3.1 environment */
#   define WdgM_GlobalSuspendInterrupts()   SchM_Enter_WdgM(WDGM_EXCLUSIVE_AREA_0)
#   define WdgM_GlobalRestoreInterrupts()   SchM_Exit_WdgM(WDGM_EXCLUSIVE_AREA_0)
#  endif /* WDGM_AUTOSAR_4_x == STD_ON */
# else
#  if (WDGM_USE_USER_SUSPEND_INTERRUPT == STD_ON) /* COV_WDGM_MISRA */
    /*! Redefinition of the disable/restore interrupt functions if the user has to provide them */
#   define WdgM_GlobalSuspendInterrupts()   GlobalSuspendInterrupts()
#   define WdgM_GlobalRestoreInterrupts()   GlobalRestoreInterrupts()
#  else
/* Force the user to deal with interrupt disable/enable functions. Else path cannot be activated */
#  endif /* (WDGM_USE_USER_SUSPEND_INTERRUPT == STD_ON) */
# endif /* (WDGM_USE_OS_SUSPEND_INTERRUPT == STD_ON) */


/**********************************************************************************************************************
 *  TYPE DEFINITIONS AND FURTHER INCLUDES
 *********************************************************************************************************************/

/* ----- Types definitions and includes if multi-core is used ----- */
# if (WDGM_MULTICORE_USAGE == STD_ON)
/* Needed by both WdgM.c and WdgM_Checkpoint.c */
#  if (WDGM_USE_OS_CORE_IDENTIFICATION == STD_ON)
/*! Os.h needed for CoreIdType and GetCoreID() */
#   include "Os.h"
typedef CoreIdType WdgM_CoreIdType;
/*! Redefinition of WDGM_GET_CORE_ID to OS function */
#   define WDGM_GET_CORE_ID() GetCoreID()
#  else /* (WDGM_USE_OS_CORE_IDENTIFICATION == STD_OFF) */
/*! Appl_WdgM_MultiCore.h declares WdgM_CoreIdType and Appl_GetCoreId() */
#   include "Appl_WdgM_MultiCore.h"
/*! Redefinition of WDGM_GET_CORE_ID to application function provided by the user */
#   define WDGM_GET_CORE_ID() (WdgM_CoreIdType)Appl_GetCoreId()
#  endif /* (WDGM_USE_OS_CORE_IDENTIFICATION == STD_ON) */
# else
typedef uint32 WdgM_CoreIdType; /* Needed by Verifier */
# endif /* if (WDGM_MULTICORE_USAGE == STD_OFF) */

# if (WDGM_USE_RTE == STD_ON)
#  if (WDGM_AUTOSAR_4_x == STD_ON) /* COV_WDGM_AUTOSAR4_COMPATIBILITY */
/*! Rte_WdgM_Type.h needed in AUTOSAR 4.x environment */
#   include "WdgM_Rte_Includes.h"
#  else
/*! Rte_Type.h needed in AUTOSAR 3.1 environment */
#   include "Rte_Type.h"
#  endif
# else
/*!
 * The following query is added, because the SchM_WdgM.h is included a few lines above if
 * WDGM_USE_OS_SUSPEND_INTERRUPT is set to STD_ON
 *
 * If this file is generated by the RTE, but the RTE is not used - WDGM_USE_RTE is set to STD_OFF - all types within
 * the following section are already defined. SchM_WdgM.h includes SchM_WdgM_Type.h, SchM_WdgM_Type.h includes
 * Rte_Type.h and in Rte_Type.h these types are defined
 *
 * Normally this restriction will never occur, because if the RTE generates the file SchM_WdgM.h, the preprocessor
 * switch WDGM_USE_RTE is set to STD_ON
 */
#  ifndef _RTE_TYPE_H
/*! Type identifies an individual supervised entity for the WdgM */
typedef uint16 WdgM_SupervisedEntityIdType;
/*! Type identifies a Checkpoint in the context of a Supervised Entity for the WdgM */
typedef uint16 WdgM_CheckpointIdType;
/*! Type distinguishes the different modes that were configured for the WdgM */
typedef uint8 WdgM_ModeType;
/*! The local supervision status represents status of each Supervised Entity individually */
typedef uint8 WdgM_LocalStatusType;
/*! The global supervision status summarizes the local supervision status of all supervised entities */
typedef uint8 WdgM_GlobalStatusType;
#   if (WDGM_AUTOSAR_DEBUGGING == STD_ON)
/*! Type represents WdgM violation type and is only used with enabled AUTOSAR_DEBUGGING */
typedef uint8 WdgM_ViolationType;
#   endif
#  endif /* _RTE_TYPE_H */

/* ----- Local Statuses ----- */
#  define WDGM_LOCAL_STATUS_OK              (0u)
#  define WDGM_LOCAL_STATUS_FAILED          (1u)
#  define WDGM_LOCAL_STATUS_EXPIRED         (2u)
#  define WDGM_LOCAL_STATUS_DEACTIVATED     (4u)

/* ----- Global Statuses ----- */
#  define WDGM_GLOBAL_STATUS_OK             (0u)
#  define WDGM_GLOBAL_STATUS_FAILED         (1u)
#  define WDGM_GLOBAL_STATUS_EXPIRED        (2u)
#  define WDGM_GLOBAL_STATUS_STOPPED        (3u)
#  define WDGM_GLOBAL_STATUS_DEACTIVATED    (4u)
# endif /* (WDGM_USE_RTE == STD_ON) */

/*! Type the OS Application Id to which a supervised entity is assigned */
typedef uint8 WdgM_ApplicationType;

/*! Type stores boolean parameter in the module */
typedef boolean WdgM_BooleanParamType;

/*! Type identifies a transition in the context of a checkpoint for the WdgM */
typedef uint16 WdgM_TransitionIdType;

/*! Type represents the basic WdgM timebase tick. The transition deadlines are measured with this type */
typedef uint32 WdgM_TimeBaseTickType;

/*! Type represents Watchdog trigger time in milliseconds */
typedef uint16 WdgM_TriggerTimeMsType;

/*! Type represents Watchdog trigger time in timebase ticks */
typedef uint16 WdgM_TriggerTimeTickType;

/*! Type represents alive counter */
typedef uint32 WdgM_AliveCntType;

/*! Type represents alive counter margins */
typedef uint16 WdgM_AliveMarginType;

/*! Type represents supervision cycle counter */
typedef uint16 WdgM_SupervisedCycCntType;

/*! Type represents reference cycle tolerance */
typedef uint16 WdgM_RefCycleType;

/*! Type represents the physical watchdog Id */
typedef uint8 WdgM_WatchdogIdType;

/*! Type represents the global shared boolean */
typedef uint8 WdgM_SharedBooleanType;

/*! Type represents the deadline and PF violation counter */
typedef uint16 WdgM_ViolationCntType;

/*! Type represents the WdgM configuration version */
typedef uint8  WdgM_ConfigVersionType;

/*! Type represents the WdgM configuration identification number */
typedef uint32  WdgM_ConfigIdType;

/*! Type represents the WdgM configuration checksum */
typedef uint32 WdgM_ConfigChecksumType;

/*! Type represents SE deactivation / activation request */
typedef uint8 WdgM_StateRequestType;

/*! Type represents Id of the WdgM caller */
typedef uint16 WdgM_CallerIdType;

/*! Type represents WdgM trigger mode */
typedef uint8 WdgM_TriggerModeIdType;


/**********************************************************************************************************************
 * RAM structures
 *
 * Abbreviations for memory segmentation:
 * ...LType,  ...LRef     WdgM Local Entity RAM memory
 * ...GType,  ...GRef     WdgM Global RAM memory
 * ...GSType, ...GSRef    WdgM Global Shared RAM memory
 *********************************************************************************************************************/

/*******************************************************************************
 * 1. RAM structures - WdgM Entity Local RAM (Application local)
 ******************************************************************************/

/*! Type for the runtime values of alive supervision \n
 *  read access : WdgM_MainFunction() \n
 *  write access: WdgM_CheckpointReached() and WdgM_Init()
 */
typedef struct {
  WdgM_AliveCntType AliveCounter;  /*!< The alive counter for current Checkpoint */
} WdgM_AliveCounterLType;

/******************************************************************************/

/*! Type for the runtime values of a supervised entity \n
 *  read access:  WdgM_CheckpointReached() and WdgM_MainFunction() \n
 *  write access: WdgM_CheckpointReached() and WdgM_Init()
 */
typedef struct {
  WdgM_BooleanParamType LocalActivityFlag;        /*!< Activated after current SE was initialized */
  WdgM_CheckpointIdType RememberedCheckpointId;   /*!< The remembered Id of the last Checkpoint */
  WdgM_TimeBaseTickType RememberedCheckpointTime; /*!< The remembered time of the latest reached Checkpoint */
  WdgM_ViolationCntType DeadlineViolationCnt;     /*!< Counter counting deadline violations in the last reference
                                                   *   cycle
                                                   */
  WdgM_ViolationCntType ProgramFlowViolationCnt;  /*!< Counter counting program flow violations in the last reference
                                                   *   cycle
                                                   */
# if (WDGM_AUTOSAR_DEBUGGING == STD_ON)
  WdgM_TimeBaseTickType RememberedInitialCheckpointTime;  /*!< The remembered time of the local initial Checkpoint
                                                           *   (for AUTOSAR debugging)
                                                           */
# endif
} WdgM_EntityStatusLType;


/*******************************************************************************
 * 2. RAM structures - WdgM Global RAM (used by WdgM only)
 ******************************************************************************/

/*! Type for the global runtime values of alive supervision \n
 *  read access : WdgM_MainFunction() and WdgM_CheckpointReached() \n
 *  write access: WdgM_MainFunction() and WdgM_Init()
 */
typedef struct {
    WdgM_AliveCntType AliveCounterStamp;        /*!< Alive counter stamp value for current checkpoint */
    WdgM_AliveCntType SupervisionAliveCounter;  /*!< Supervision cycle counter (counts WdgM cycles) */
} WdgM_AliveCounterGType;

/******************************************************************************/

/*! Type for the global runtime values of a supervised entity \n
 *  read access:  WdgM_MainFunction() and WdgM_CheckpointReached() \n
 *  write access: WdgM_MainFunction()
 */
typedef struct {
  WdgM_LocalStatusType LocalMonitoringStatus; /*!< Local Status of current SE, build in the cyclic supervised task */
  WdgM_SupervisedCycCntType FailedSupervisionRefCycles;   /*!< Number of failed alive supervision cycles */
  WdgM_SupervisedCycCntType FailedDeadlineRefCycles;      /*!< Failed reference cycle counter value for deadline
                                                           *   violations
                                                           */
  WdgM_SupervisedCycCntType FailedDeadlineCycCounter;     /*!< Supervision cycle counter for deadline violations */
  WdgM_SupervisedCycCntType FailedProgramFlowRefCycles;   /*!< Failed reference cycle counter value for program flow
                                                           *   violations
                                                           */
  WdgM_SupervisedCycCntType FailedProgramFlowCycCounter;  /*!< Supervision cycle counter for program flow violations */
  WdgM_ViolationCntType DeadlineViolationCnt;             /*!< Counter stamp represent deadline violations in the last
                                                           *   reference cycle
                                                           */
  WdgM_ViolationCntType ProgramFlowViolationCnt;          /*!< Counter stamp represent program flow violations in the
                                                           *   last reference cycle
                                                           */
} WdgM_EntityStatusGType;

/******************************************************************************/

/*! Type for the general global runtime values \n
 *  read access : WdgM_MainFunction(), WdgM_GetGlobalStatus(), WdgM_SetMode(), WdgM_GetMode() \n
 *  write access: WdgM_MainFunction(), WdgM_Init(), WdgM_UpdateTickCount(), WdgM_PerformReset() */
typedef struct {
  WdgM_GlobalStatusType GlobalMonitoringStatus;   /*!< Global Monitoring status that summarizes the Local Monitoring
                                                   *   status of all SE's
                                                   */
  WdgM_TimeBaseTickType PreviousTickCounter;      /*!< Remembered Tick Counter */
  WdgM_SupervisedCycCntType ExpiredCycleCounter;  /*!< Expired Cycle Counter (WDGM219) */
  WdgM_BooleanParamType WdgMMainStarted;          /*!< After MainFunction runs once it is TRUE, else FALSE */
  WdgM_TriggerModeIdType TriggerModeId;           /*!< Actual Watchdog Trigger Mode */
  WdgM_TriggerModeIdType PreviousTriggerModeId;   /*!< Previous Watchdog Trigger Mode */
} WdgM_DataGType;


/*******************************************************************************
 * 3. RAM structures - WdgM global shared RAM (used by WdgM and others)
 ******************************************************************************/

/*! Type for the global shared runtime values of the global data \n
 * read access:  WdgM_CheckpointReached() and WdgM_MainFunction() \n
 * write access: WdgM_CheckpointReached() and WdgM_Init()
 */
typedef struct {
  WdgM_SharedBooleanType GlobalActivityFlag;      /*!< Gets TRUE after first valid checkpoint was reported */
  WdgM_SharedBooleanType GlobalActivityFlag_neg;  /*!< Inverse value of the global activity flag */
  uint16 InternalFailureFlag;                     /*!< Signalizes a failure inside CheckpointReached() */
} WdgM_DataGSType;

/******************************************************************************/

/*! Type for the global shared runtime values of the global transition flags \n
 *  read access:  WdgM_MainFunction(), WdgM_CheckpointReached()
 *  write access: WdgM_Init(), WdgM_CheckpointReached()
 */
typedef struct {
  WdgM_SharedBooleanType GlobalTransitionFlag;      /*!< Global transition flag: \n
                                                     *   Initialized to FALSE \n
                                                     *   Gets TRUE when a global transition was started, \n
                                                     *   FALSE when it was completed
                                                     */
  WdgM_SharedBooleanType GlobalTransitionFlag_neg;  /*!< Inverse value of the global transition flag */
} WdgM_GlobalTransitionFlagGSType;

/******************************************************************************/

/*! Type for the global shared runtime values of supervised entity \n
 *  read access:  WdgM_MainFunction()
 *  write access: WdgM_Init(), WdgM_ActivateSupervisionEntity(), WdgM_DeactivateSupervisionEntity, WdgM_MainFunction()
 */
typedef struct {
  WdgM_StateRequestType StateChangeRequest;     /*!< State change request for deactivation / activation of a SE */
  WdgM_StateRequestType StateChangeRequest_neg; /*!< Inverse value of the state change request */
} WdgM_EntityGSType;


/**********************************************************************************************************************
 * ROM structures
 *
 * This part contains WdgM configuration structures placed in FLASH
 *********************************************************************************************************************/

/*! Type for the watchdog trigger and modes */
typedef struct {
  WdgM_TriggerTimeMsType WdgMTriggerWindowStart;        /*!< Minimum trigger time, unit: [ms] */
  WdgM_TriggerTimeTickType WdgMTriggerWindowStartTicks; /*!< Minimum trigger time, unit: [Timebase Ticks] */
  WdgM_TriggerTimeMsType WdgMTriggerTimeout;            /*!< Watchdog timeout time, unit: [ms] */
  WdgM_TriggerTimeTickType WdgMTriggerTimeoutTicks;     /*!< Watchdog timeout time, unit: [Timebase Ticks] */
  WdgIf_ModeType WdgMWatchdogMode;                      /*!< Watchdog mode */
  uint8 WdgMDeviceIndex;                                /*!< DeviceIndex of the watchdog in WdgIf */
} WdgM_TriggerModeType;

/******************************************************************************/

/*! Type for the watchdog devices */
typedef struct {
  const WdgM_TriggerModeType *WdgMTriggerModeRef;       /*!< Reference to watchdog trigger and Mode */
} WdgM_WatchdogDeviceType;

/******************************************************************************/

/*! Type for allowed callers for trigger mode change */
 typedef struct {
  WdgM_CallerIdType WdgMAllowedCaller;                  /*!< Caller Id for WdgM_SetMode in AUTOSAR 4.x environment */
} WdgM_CallersType;

/******************************************************************************/

/*! Type for transition to previous checkpoint (local incoming transitions only!) */
typedef struct
{
  WdgM_SupervisedEntityIdType EntitySourceId; /*!< The Id of the source SE for this Transition */
  WdgM_CheckpointIdType CheckpointSourceId;   /*!< The Id of the source CP for this Transition */

  /* Deadline supervision setup */
  WdgM_TimeBaseTickType WdgMDeadlineMin;      /*!< Transition minimum time, unit: [Timebase Ticks] */
  WdgM_TimeBaseTickType WdgMDeadlineMax;      /*!< Transition maximum time, unit: [Timebase Ticks] \n
                                               *   (If positive then a deadline is defined)
                                               */
} WdgM_TransitionType;

/******************************************************************************/

/*! Type for global transition to previous checkpoint (global incoming transitions only!)*/
typedef struct
{
  WdgM_SupervisedEntityIdType EntitySourceId;   /*!< The Id of the source SE for this Transition */
  WdgM_CheckpointIdType CheckpointSourceId;     /*!< The Id of the source CP for this Transition */

  /* Deadline supervision setup */
  WdgM_TimeBaseTickType WdgMDeadlineMin;        /*!< Transition minimum time, unit: [Timebase Ticks] */
  WdgM_TimeBaseTickType WdgMDeadlineMax;        /*!< Transition maximum time, unit: [Timebase Ticks] \n
                                                 *   (If positive then a deadline is defined)
                                                 */
  WdgM_TransitionIdType GlobalTransitionFlagId; /*!< Global transition flag: \n
                                                 *   TRUE  if the global transition is active but not passed yet \n
                                                 *   FALSE if the global transition is either not active or has
                                                 *         already passed
                                                 */
} WdgM_GlobalTransitionType;

/******************************************************************************/

/*! Type for checkpoint */
typedef struct
{
  WdgM_CheckpointIdType WdgMCheckpointId;           /*!< Checkpoint Id, [0...CP-1] */
  WdgM_BooleanParamType WdgMIsEndCheckpoint;        /*!< Determines if this CP terminates the entity */
  WdgM_BooleanParamType WdgMIsEndCheckpointGlobal;  /*!< Determines if this CP terminates the global transitions */

  /* Alive supervision setup */
  WdgM_AliveCntType WdgMExpectedAliveIndications;   /*!< Number of expected alive indications */
  WdgM_AliveMarginType WdgMMinMargin;               /*!< Minimum margin for acceptable counts for monitored cycle */
  WdgM_AliveMarginType WdgMMaxMargin;               /*!< Maximum margin for acceptable counts for monitored cycle */
  WdgM_RefCycleType WdgMSupervisionReferenceCycle;  /*!< Amount of the supervision cycles for alive supervision */
  WdgM_AliveCounterLType *WdgMAliveLRef;            /*!< Reference to local alive counter for this Checkpoint \n
                                                     *   When set to NULL_PTR then no Alive counter is defined
                                                     *   and the alive monitoring for this CP is deactivated
                                                     */
  WdgM_AliveCounterGType *WdgMAliveGRef;            /*!< Reference to global alive counter for this Checkpoint,
                                                     *   When set to NULL_PTR then no Alive counter is defined
                                                     *   and the alive monitoring for this CP is deactivated
                                                     */

  /* Transition setup */
  WdgM_BooleanParamType WdgMDeadlineMonitoring;                 /*!< Deadline supervision on/off parameter, when set to
                                                                 *   on the deadline for this CP is evaluated
                                                                 */
  WdgM_TimeBaseTickType WdgMOutgoingDeadlineMax;                /*!< Maximum deadline of all outgoing deadlines for
                                                                 *   current checkpoint, unit: [Timebase Ticks] \n
                                                                 *   Null when no deadline is defined
                                                                 */
  WdgM_TransitionIdType NrOfLocalTransitions;                   /*!< Number of the local incoming transitions[0...N] */
  const WdgM_TransitionType *WdgMLocalTransitionRef;            /*!< Reference to the array of all local incoming
                                                                 *   transitions - with the address of that transition
                                                                 *   which belongs to this checkpoint
                                                                 */
  WdgM_TransitionIdType NrOfGlobalTransitions;                  /*!< Number of global incoming transitions [0...N] */
  const WdgM_GlobalTransitionType *WdgMGlobalTransitionsRef;    /*!< Reference to the array of all global incoming
                                                                 *   transitions - with the address of that transition
                                                                 *   which belongs to this checkpoint
                                                                 */
  WdgM_BooleanParamType WdgMStartsAGlobalTransition;            /*!< Determine if this CP starts a global transition */
  WdgM_TransitionIdType NrOfStartedGlobalTransitions;           /*!< Number of outgoing global transitions */
  const WdgM_TransitionIdType *WdgMStartedGlobalTransitionIds;  /*!< Array of indexes of the all global outgoing
                                                                 *   transitions in the GlobalTransitionFlagsGSRef
                                                                 *   array
                                                                 */
} WdgM_CheckPointType;

/******************************************************************************/

/*! Type for supervised entity */
typedef struct {
  WdgM_SupervisedEntityIdType WdgMSupervisedEntityId; /*!< Supervised entity Id, [0...SE-1] */
  WdgM_BooleanParamType WdgMEnableEntityDeactivation; /*!< Enables entity deactivation / activation */
  WdgM_CheckpointIdType WdgMCheckpointLocInitialId;   /*!< Initial checkpoint Id for this SE */
  WdgM_CheckpointIdType NrOfCheckpoints;              /*!< Number of defined CP's for this SE, 0 = No CP defined */
  const WdgM_CheckPointType *WdgMCheckpointRef;       /*!< Reference to the array of all checkpoints with the address
                                                       *   of the first checkpoint of this supervised entity
                                                       */
  WdgM_LocalStatusType WdgMInitialStatus;             /*!< Initial state for this SE */
  WdgM_RefCycleType WdgMFailedSupervisionRefCycleTol; /*!< Number of allowed failed supervision reference cycles
                                                       *   for alive supervision
                                                       */
  WdgM_RefCycleType WdgMFailedDeadlineRefCycleTol;    /*!< Number of allowed failed supervision reference cycles
                                                       *   for deadline supervision
                                                       */
  WdgM_RefCycleType WdgMDeadlineReferenceCycle;       /*!< Amount of the supervision cycles for deadline supervision */
  WdgM_RefCycleType WdgMFailedProgramFlowRefCycleTol; /*!< Number of allowed failed supervision reference cycles
                                                       *   for logical supervision
                                                       */
  WdgM_RefCycleType WdgMProgramFlowReferenceCycle;    /*!< Amount of the supervision cycles for logical supervision */
  WdgM_BooleanParamType WdgMProgramFlowMonitoring;    /*!< Enables logical supervision, on/off parameter */
  WdgM_ApplicationType OSApplication;                 /*!< Id of the OS Application this SE is part of.
                                                       *   INVALID_OSAPPLICATION if not configured
                                                       */
  void (*WdgM_LocalStateChangeCbk) (WdgM_LocalStatusType); /*!< Callback function for local status change */
  WdgM_EntityStatusLType *EntityStatusLRef;           /*!< Reference to Entity Status in local RAM */
  WdgM_EntityStatusGType *EntityStatusGRef;           /*!< Reference to Entity Status in global RAM */
  /* Next parameter used if (WDGM_MULTICORE_USAGE == STD_ON) */
  WdgM_CoreIdType WdgMEntityCoreId;                   /*!< Processor core Id of the processor on which SE runs */
} WdgM_SupervisedEntityType;


typedef struct {
  volatile WdgM_TimeBaseTickType g_WdgMTickCount; /*!< WdgM Timebase Tick Counter g_wdgm_tick_count */

# if (WDGM_TIMEBASE_SOURCE == WDGM_EXTERNAL_TICK)
#  if (WDGM_TICK_OVERRUN_CORRECTION == STD_ON)
  WdgM_BooleanParamType g_WdgMTickCountOverrun;   /*!< Enables tick counter overrun correction */
#  endif
# endif

  WdgM_BooleanParamType g_WdgMMainFunctionActive; /*!< Flag indicating whether the main function is currently being
                                                   *   executed
                                                   */
} WdgM_GlobalVariablesType;

/******************************************************************************/

/*! Type for global config data \n\n
 *
 * This structure contains all post-build configurable parameters of the WdgM. A pointer to this structure is passed
 * to the WdgM initialization function.
 */
typedef struct {
  /* Config Version, Identification */
  WdgM_ConfigVersionType WdgMConfigMajorVersion;  /*!< Major version of WdgM*/
  WdgM_ConfigVersionType WdgMConfigMinorVersion;  /*!< Minor version of WdgM*/
  WdgM_ConfigIdType WdgMConfigId;                 /*!< Current configuration identification value */

  /* ConfigSet + Mode */
  WdgM_TriggerModeIdType WdgMInitialTriggerModeId;          /*!< Initial trigger mode [0...N] of the WdgM */
  WdgM_SupervisedCycCntType WdgMExpiredSupervisionCycleTol; /*!< Number of supervision cycles for which the watchdog
                                                             *   reset trigger should be postponed
                                                             */
  WdgM_SupervisedEntityIdType WdgMGlobInitialEntityId;      /*!< Entity Id of the global initial checkpoint */
  WdgM_CheckpointIdType WdgMGlobInitialCheckpointId;        /*!< Checkpoint Id of the global initial checkpoint */
  WdgM_TransitionIdType NrOfGlobalTransitions;              /*!< Number of global transitions in the configuration */
  const WdgM_GlobalTransitionType *WdgMGlobalTransitions;   /*!< Pointer to the array of all global transitions */

  /* Watchdog device(s) */
  WdgM_WatchdogIdType NrOfWatchdogDevices;                /*!< Number of watchdogs, 0 = no Watchdog */
  WdgM_TriggerModeIdType NrOfTriggerModes;                /*!< Number of watchdogs trigger modes, [1...N] */
  const WdgM_WatchdogDeviceType *WdgMWatchdogDeviceRef;   /*!< Reference to the array of all watchdogs */

  /* SetMode callers */
  WdgM_CallerIdType NrOfAllowedCallers;     /*!< Number of allowed SetMode callers [0,...,255],
                                             *   (0 if caller is not allowed)
                                             */
  const WdgM_CallersType *WdgMCallersRef;   /*!< Reference to callers array */

  /* Entities */
  WdgM_SupervisedEntityIdType NrOfSupervisedEntities;       /*!< Number of all supervised entities, 0 = no SE defined */
  const WdgM_SupervisedEntityType *WdgMSupervisedEntityRef; /*!< Reference to the array of all supervised entities */

  /* RAM data structures */
  WdgM_DataGType *DataGRef;         /*!< Reference to WdgM global RAM data */
  WdgM_DataGSType *DataGSRef;       /*!< Reference to WdgM global shared RAM data  */
  WdgM_EntityGSType *EntityGSRef;   /*!< Reference to WdgM global shared data array for an Entity */
  WdgM_GlobalTransitionFlagGSType *GlobalTransitionFlagsGSRef;  /*!< Reference to WdgM global shared array of global
                                                                 *   transition flags
                                                                 */

  /* Callback notification */
  void (*WdgM_GlobalStateChangeCbk) (WdgM_GlobalStatusType);  /*!< Global Status Callback, NULL_PTR when not used */

  /* Global variables */
  WdgM_GlobalVariablesType *WdgMGlobalVariables;              /*!< Reference to all global variables */

  /* Next parameter used if (WDGM_MULTICORE_USAGE == STD_ON) */
  WdgM_CoreIdType WdgMModeCoreAssignment; /*!< Processor core Id of the processor on which the config will be used */

  /* Config checksum */
  WdgM_ConfigChecksumType WdgMConfigChecksum;                 /*!< Checksum of the current WdgM configuration */
} WdgM_ConfigType;

#endif  /*WDGM_CFG_H*/

/**********************************************************************************************************************
 *  END OF FILE: WdgM_Cfg.h
 *********************************************************************************************************************/
