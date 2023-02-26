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
/*!        \file  WdgM.c
 *        \brief  WdgM source file
 *
 *      \details  This is the implementation of the module WdgM
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
#include "WdgIf.h"

#if (WDGM_DEV_ERROR_DETECT == STD_ON)
# include "Appl_Det.h"
#endif /* (WDGM_DEV_ERROR_DETECT == STD_ON) */

#if (WDGM_AUTOSAR_4_x == STD_ON) /* COV_WDGM_AUTOSAR4_COMPATIBILITY */
/* Appl_Dem.h is included indirectly through WdgM.h -> WdgM_Cfg.h -> WdgM_Cfg_Features.h */
#else
# if (WDGM_DEM_REPORT == STD_ON)
#  include "Appl_Dem.h"
# endif /* (WDGM_DEM_REPORT == STD_ON) */
#endif /* (WDGM_AUTOSAR_4_x == STD_ON) */

#if (WDGM_SECOND_RESET_PATH == STD_ON)
# include "Appl_Mcu.h"
#endif /* (WDGM_SECOND_RESET_PATH == STD_ON) */

/**********************************************************************************************************************
 *  VERSION CHECK
 *********************************************************************************************************************/
 
#define WDGM_SW_MAJOR_VERSION_SOURCE              (5u)
#define WDGM_SW_MINOR_VERSION_SOURCE              (1u)
#define WDGM_SW_PATCH_VERSION_SOURCE              (3u)

/* Check the version of WdgM header file */
#if ( (WDGM_SW_MAJOR_VERSION != WDGM_SW_MAJOR_VERSION_SOURCE) \
   || (WDGM_SW_MINOR_VERSION != WDGM_SW_MINOR_VERSION_SOURCE) \
   || (WDGM_SW_PATCH_VERSION != WDGM_SW_PATCH_VERSION_SOURCE) )
# error "Version mismatch! Incorrect version of WdgM.h"
#endif

/**********************************************************************************************************************
 *  LOCAL CONSTANT MACROS
 *********************************************************************************************************************/

/* Magic constants for the SE deactivation / activation.
 * Magic numbers are safer as simple TRUE / FALSE for corruption detection
 */
#define WDGM_SE_STATE_REQUEST_NONE                (0x43u)
#define WDGM_SE_STATE_REQUEST_ACTIVATE            (0x92u)
#define WDGM_SE_STATE_REQUEST_DEACTIVATE          (0xcau)
#define WDGM_SE_STATE_REQUEST_INVALID             (0x69u)

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

#if (WDGM_MULTICORE_USAGE == STD_ON)

# if (WDGM_CORE0_USED == STD_ON)
#  define WDGM_GLOBAL_START_SEC_VAR_32BIT_CORE0_PRIVATE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
/*! Pointer to loaded ROM configuration for core 0, NULL_PTR if WdgM is not initialized */
P2CONST(WdgM_ConfigType, WDGM_CONST, WDGM_APPL_CONST) g_wdgm_cfg_ptr_CORE0 = NULL_PTR; /* PRQA S 3408 */ /* MD_WdgM_3408 */
#  define WDGM_GLOBAL_STOP_SEC_VAR_32BIT_CORE0_PRIVATE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
# endif /* (WDGM_CORE0_USED == STD_ON) */

# if (WDGM_CORE1_USED == STD_ON)
#  define WDGM_GLOBAL_START_SEC_VAR_32BIT_CORE1_PRIVATE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
/*! Pointer to loaded ROM configuration for core 1, NULL_PTR if WdgM is not initialized */
P2CONST(WdgM_ConfigType, WDGM_CONST, WDGM_APPL_CONST) g_wdgm_cfg_ptr_CORE1 = NULL_PTR; /* PRQA S 3408 */ /* MD_WdgM_3408 */
#  define WDGM_GLOBAL_STOP_SEC_VAR_32BIT_CORE1_PRIVATE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
# endif /* (WDGM_CORE1_USED == STD_ON) */

# if (WDGM_CORE2_USED == STD_ON)
#  define WDGM_GLOBAL_START_SEC_VAR_32BIT_CORE2_PRIVATE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
/*! Pointer to loaded ROM configuration for core 2, NULL_PTR if WdgM is not initialized */
P2CONST(WdgM_ConfigType, WDGM_CONST, WDGM_APPL_CONST) g_wdgm_cfg_ptr_CORE2 = NULL_PTR; /* PRQA S 3408 */ /* MD_WdgM_3408 */
#  define WDGM_GLOBAL_STOP_SEC_VAR_32BIT_CORE2_PRIVATE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
# endif /* (WDGM_CORE2_USED == STD_ON) */

# if (WDGM_CORE3_USED == STD_ON)
#  define WDGM_GLOBAL_START_SEC_VAR_32BIT_CORE3_PRIVATE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
/*! Pointer to loaded ROM configuration for core 3, NULL_PTR if WdgM is not initialized */
P2CONST(WdgM_ConfigType, WDGM_CONST, WDGM_APPL_CONST) g_wdgm_cfg_ptr_CORE3 = NULL_PTR; /* PRQA S 3408 */ /* MD_WdgM_3408 */
#  define WDGM_GLOBAL_STOP_SEC_VAR_32BIT_CORE3_PRIVATE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
# endif /* (WDGM_CORE3_USED == STD_ON) */

# define WDGM_START_SEC_CONST_32BIT
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
/* const WdgM_ConfigType ** const g_wdgm_cfg_ptr_array[] */
/*! Array of constant pointers of all runtime configurations in multi-core mode \n
 *  NULL_PTR is used if core is not used
 */
CONSTP2CONST(WdgM_ConfigType *, WDGM_CONST, WDGM_APPL_CONST) g_wdgm_cfg_ptr_array[WDGM_MAX_SUPPORTED_CORES] =
{
#  if (WDGM_CORE0_USED == STD_ON)
  &g_wdgm_cfg_ptr_CORE0,
#  else
  NULL_PTR,
#  endif /* (WDGM_CORE0_USED == STD_ON) */
#  if (WDGM_CORE1_USED == STD_ON)
  &g_wdgm_cfg_ptr_CORE1,
#  else
  NULL_PTR,
#  endif /* (WDGM_CORE1_USED == STD_ON) */
#  if (WDGM_CORE2_USED == STD_ON)
  &g_wdgm_cfg_ptr_CORE2,
#  else
  NULL_PTR,
#  endif /* (WDGM_CORE2_USED == STD_ON) */
#  if (WDGM_CORE3_USED == STD_ON)
  &g_wdgm_cfg_ptr_CORE3
#  else
  NULL_PTR
#  endif /* (WDGM_CORE3_USED == STD_ON) */
};
# define WDGM_STOP_SEC_CONST_32BIT
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# define WDGM_START_SEC_VAR_NOINIT_16BIT
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
/*! Next array stores the SEID of the first expired supervised entity in multi-core mode \n
 *  Note, that it is not cleared after RESET or during initialization!
 */
WDGM_LOCAL VAR(WdgM_SupervisedEntityIdType, AUTOMATIC) g_wdgm_first_exp_se_array[WDGM_MAX_SUPPORTED_CORES];

/*! Next array stores the double-inverse SEID of the first expired supervised entity in multi-core mode \n
 *  Note, that it is not cleared after RESET or during initialization!
 */
WDGM_LOCAL VAR(WdgM_SupervisedEntityIdType, AUTOMATIC) g_wdgm_first_exp_se_array_inv[WDGM_MAX_SUPPORTED_CORES];
# define WDGM_STOP_SEC_VAR_NOINIT_16BIT
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# if (WDGM_AUTOSAR_DEBUGGING == STD_ON)
#  define WDGM_START_SEC_VAR_NOINIT_8BIT
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
/*! Next array stores the violation type of the first expired supervised entity
 * (Program Flow / Deadline Monitoring / Alive Supervision) in multi-core mode \n
 *  Note, that it is not cleared after RESET or during initialization!
 */
WDGM_LOCAL VAR(WdgM_ViolationType, AUTOMATIC) g_wdgm_first_exp_se_violation_array[WDGM_MAX_SUPPORTED_CORES];

/*! Next array stores the double-inverse violation type of the first expired supervised entity
 * (Program Flow / Deadline Monitoring / Alive Supervision) in multi-core mode \n
 *  Note, that it is not cleared after RESET or during initialization!
 */
WDGM_LOCAL VAR(WdgM_ViolationType, AUTOMATIC) g_wdgm_first_exp_se_violation_array_inv[WDGM_MAX_SUPPORTED_CORES]; /* PRQA S 0779 */ /* MD_WdgM_0779 */
#  define WDGM_STOP_SEC_VAR_NOINIT_8BIT
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
# endif /* (WDGM_AUTOSAR_DEBUGGING == STD_ON) */

#else /* (WDGM_MULTICORE_USAGE == STD_ON) */

# define WDGM_GLOBAL_START_SEC_VAR_32BIT
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
/*! Pointer to loaded ROM configuration, NULL_PTR if WdgM is not initialized in single-core mode */
P2CONST(WdgM_ConfigType, WDGM_CONST, WDGM_APPL_CONST) g_wdgm_cfg_ptr = NULL_PTR;
# define WDGM_GLOBAL_STOP_SEC_VAR_32BIT
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# define WDGM_START_SEC_VAR_NOINIT_16BIT
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
/*! Next variable stores the SEID of the first expired supervised entity \n
 *  Note, that it is not cleared after RESET or during initialization!
 */
WDGM_LOCAL VAR(WdgM_SupervisedEntityIdType, AUTOMATIC) g_wdgm_first_exp_se;

/*! Next variable stores the double-inverse SEID of the first expired supervised entity in single-core mode \n
 *  Note, that it is not cleared after RESET or during initialization!
 */
WDGM_LOCAL VAR(WdgM_SupervisedEntityIdType, AUTOMATIC) g_wdgm_first_exp_se_inv;
# define WDGM_STOP_SEC_VAR_NOINIT_16BIT
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
  
# if (WDGM_AUTOSAR_DEBUGGING == STD_ON)
#  define WDGM_START_SEC_VAR_NOINIT_8BIT
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
/*! Next variable stores the violation type of the first expired supervised entity
 * (Program Flow / Deadline Monitoring / Alive Supervision) in single-core mode \n
 *  Note, that it is not cleared after RESET or during initialization!
 */
WDGM_LOCAL VAR(WdgM_ViolationType, AUTOMATIC) g_wdgm_first_exp_se_violation;

/*! Next variable stores the double-inverse violation type of the first expired supervised entity
 * (Program Flow / Deadline Monitoring / Alive Supervision) in single-core mode \n
 *  Note, that it is not cleared after RESET or during initialization!
 */
WDGM_LOCAL VAR(WdgM_ViolationType, AUTOMATIC) g_wdgm_first_exp_se_violation_inv;
#  define WDGM_STOP_SEC_VAR_NOINIT_8BIT
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
# endif /* (WDGM_AUTOSAR_DEBUGGING == STD_ON) */

#endif /* (WDGM_MULTICORE_USAGE == STD_ON) */

/**********************************************************************************************************************
 *  EXTERNAL DECLARATIONS
 *********************************************************************************************************************/

#if (WDGM_USE_OS_SUSPEND_INTERRUPT == STD_ON)
/* Use Schedule Manager to disable/restore interrupts, Include made in WdgM_Cfg.h */
#else
# if (WDGM_USE_USER_SUSPEND_INTERRUPT == STD_ON) /* COV_WDGM_MISRA */
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
  Init_EntityMemoryL()
**********************************************************************************************************************/
/*! \brief        Initializes the local memory of a supervised entity
 *  \details      Init_EntityMemoryL is an internal function and initializes the local memory of a supervised entity
 *  \param[in]    current_entity_ptr  Pointer to a supervised entity
 *  \pre          -
 *  \context      TASK
 *  \reentrant    FALSE
 *  \synchronous  TRUE
 *  \trace        DSGN-WdgM22759
 *  \trace        SPEC-2068290, SPEC-2068299
 */
WDGM_LOCAL FUNC(void, WDGM_CODE) Init_EntityMemoryL(
  P2CONST(WdgM_SupervisedEntityType, AUTOMATIC, WDGM_APPL_CONST) current_entity_ptr
  );

/**********************************************************************************************************************
  Init_EntityMemoryG()
**********************************************************************************************************************/
/*! \brief        Initializes the global and global shared memory of a supervised entity
 *  \details      Init_EntityMemoryG is an internal function and initializes the global and global shared memory of a
 *                supervised entity
 *  \param[in]    current_entity_ptr  Pointer to a supervised entity
 *  \param[in]    entity_id           Identifier of the referenced supervised entity
 *  \param[in]    wdgm_cfg_ptr        Pointer to the configuration for the core on which the function is called
 *  \pre          -
 *  \context      TASK
 *  \reentrant    FALSE
 *  \synchronous  TRUE
 *  \trace        DSGN-WdgM22759
 *  \trace        SPEC-2068252, SPEC-2068253
 */
WDGM_LOCAL FUNC(void, WDGM_CODE) Init_EntityMemoryG(
  P2CONST(WdgM_SupervisedEntityType, AUTOMATIC, WDGM_APPL_CONST) current_entity_ptr
#if (WDGM_ENTITY_DEACTIVATION_ENABLED == STD_ON)
  , CONST(WdgM_SupervisedEntityIdType, AUTOMATIC) entity_id,
  P2CONST(WdgM_ConfigType, AUTOMATIC, WDGM_APPL_CONST) wdgm_cfg_ptr
#endif /* (WDGM_ENTITY_DEACTIVATION_ENABLED == STD_ON) */
  );

/**********************************************************************************************************************
  Init_CheckConfigChecksum()
**********************************************************************************************************************/
/*! \brief        Calculates a partial checksum of the configuration structure
 *  \details      Init_CheckConfigChecksum is an internal function and calculates a partial checksum of the
 *                configuration structure
 *  \param[in]    wdgm_cfg_ptr        Pointer to the configuration for the core on which the function is called
 *  \return       E_OK                Function executed successfully
 *                E_NOT_OK            Error was detected
 *  \pre          -
 *  \context      TASK
 *  \reentrant    FALSE
 *  \synchronous  TRUE
 *  \trace        DSGN-WdgM22759
 */
WDGM_LOCAL FUNC(Std_ReturnType, WDGM_CODE) Init_CheckConfigChecksum(
  P2CONST(WdgM_ConfigType, AUTOMATIC, WDGM_APPL_CONST) wdgm_cfg_ptr
  );

/**********************************************************************************************************************
  WatchdogTrigger()
**********************************************************************************************************************/
/*! \brief        Triggers all configured watchdog devices
 *  \details      WatchdogTrigger is an internal function and triggers all configured watchdog devices
 *  \param[in]    wdgm_cfg_ptr        Pointer to the configuration for the core on which the function is called
 *  \return       E_OK                Function executed successfully
 *                E_NOT_OK            Error was detected
 *  \pre          Global Supervision status is either WDGM_GLOBAL_STATUS_OK, WDGM_GLOBAL_STATUS_FAILED or
 *                WDGM_GLOBAL_STATUS_EXPIRED
 *  \context      TASK
 *  \reentrant    FALSE
 *  \synchronous  TRUE
 *  \trace        DSGN-WdgM23127
 *  \trace        SPEC-2068344
 */
WDGM_LOCAL FUNC(Std_ReturnType, WDGM_CODE) WatchdogTrigger(
  P2CONST(WdgM_ConfigType, AUTOMATIC, WDGM_APPL_CONST) wdgm_cfg_ptr
  );

/**********************************************************************************************************************
  BuildEntitiesStatus()
**********************************************************************************************************************/
/*! \brief        Pre-builds the local supervision status of every supervised entities
 *  \details      BuildEntitiesStatus is an internal function and pre-builds the local supervision status of every
 *                supervised entities
 *  \param[out]   local_status_failed_ptr   Pointer to a variable of type WdgM_LocalStatusType - the function stores in
 *                                          it if at least one supervised entity is in status FAILED
 *  \param[out]   local_status_expired_ptr  Pointer to a variable of type WdgM_LocalStatusType - the function stores in
 *                                          it if at least one supervised entity is in status EXPIRED
 *  \param[in]    wdgm_cfg_ptr              Pointer to the configuration for the core on which the function is called
 *  \param[out]   expired_seid_ptr          Pointer to a variable of type WdgM_SupervisedEntityIdType which is used to
 *                                          store the id of a supervised entity that first reached the EXPIRED status
 *  \param[out]   se_violation_ptr          Pointer to a variable of type WdgM_ViolationType which is used to store the
 *                                          violation type of the supervised entity that first reached status EXPIRED 
 *                                          This parameter is only available if the pre-compile configuration parameter
 *                                          WDGM_AUTOSAR_DEBUGGING is enabled
 *  \pre          Global Supervision status is either WDGM_GLOBAL_STATUS_OK, WDGM_GLOBAL_STATUS_FAILED or
 *                WDGM_GLOBAL_STATUS_EXPIRED
 *  \context      TASK
 *  \reentrant    FALSE
 *  \synchronous  TRUE
 *  \trace        DSGN-WdgM22783
 *  \trace        SPEC-2068254, SPEC-2068255, SPEC-2068256, SPEC-2068257, SPEC-2068258, SPEC-2068259, SPEC-2068260
 *  \trace        SPEC-2068263
 */
WDGM_LOCAL FUNC(void, WDGM_CODE) BuildEntitiesStatus(
  P2VAR(WdgM_LocalStatusType, AUTOMATIC, WDGM_APPL_DATA) local_status_failed_ptr,
  P2VAR(WdgM_LocalStatusType, AUTOMATIC, WDGM_APPL_DATA) local_status_expired_ptr,
  P2CONST(WdgM_ConfigType, AUTOMATIC, WDGM_APPL_CONST) wdgm_cfg_ptr,
  P2VAR(WdgM_SupervisedEntityIdType, AUTOMATIC, WDGM_APPL_DATA) expired_seid_ptr
#if (WDGM_AUTOSAR_DEBUGGING == STD_ON)
  , P2VAR(WdgM_ViolationType, AUTOMATIC, WDGM_APPL_DATA) se_violation_ptr
#endif /* (WDGM_AUTOSAR_DEBUGGING == STD_ON) */
  );

#if (WDGM_ENTITY_DEACTIVATION_ENABLED == STD_ON)
/**********************************************************************************************************************
  WriteStateChangeRequest()
**********************************************************************************************************************/
/*! \brief        Writes the deactivation / activation request to the global shared memory
 *  \details      WriteStateChangeRequest is an internal function and writes the deactivation / activation request to
 *                the global shared memory
 *  \param[in]    SEID                Identifier of a supervised entity
 *  \param[in]    state_request       New state to be requested for this supervised entity
 *  \param[in]    wdgm_cfg_ptr        Pointer to the configuration for the core on which the function is called
 *  \pre          -
 *  \context      TASK
 *  \reentrant    FALSE
 *  \synchronous  TRUE
 *  \config       WDGM_ENTITY_DEACTIVATION_ENABLED
 *  \trace        DSGN-WdgM22780
 */
WDGM_LOCAL FUNC(void, WDGM_CODE) WriteStateChangeRequest(
  VAR(WdgM_SupervisedEntityIdType, AUTOMATIC) SEID,
  VAR(WdgM_StateRequestType, AUTOMATIC) state_request,
  P2CONST(WdgM_ConfigType, AUTOMATIC, WDGM_APPL_CONST) wdgm_cfg_ptr
  );

/**********************************************************************************************************************
  ReadStateChangeRequest()
**********************************************************************************************************************/
/*! \brief        Reads the deactivation / activation request from the global shared memory
 *  \details      ReadStateChangeRequest is an internal function and reads the deactivation / activation request from
 *                the global shared memory
 *  \param[in]    SEID                Identifier of a supervised entity
 *  \param[out]   state_request_ptr   Pointer to a value of type WdgM_StateRequestType where the queried state change
 *                                    request is stored
 *  \param[in]    wdgm_cfg_ptr        Pointer to the configuration for the core on which the function is called
 *  \return       E_OK                Function executed successfully
 *                E_NOT_OK            Error was detected
 *  \pre          -
 *  \context      TASK
 *  \reentrant    FALSE
 *  \synchronous  TRUE
 *  \config       WDGM_ENTITY_DEACTIVATION_ENABLED
 *  \trace        DSGN-WdgM22780
 */
WDGM_LOCAL FUNC(Std_ReturnType, WDGM_CODE) ReadStateChangeRequest(
  VAR(WdgM_SupervisedEntityIdType, AUTOMATIC) SEID,
  P2VAR(WdgM_StateRequestType, AUTOMATIC, WDGM_APPL_DATA) state_request_ptr,
  P2CONST(WdgM_ConfigType, AUTOMATIC, WDGM_APPL_CONST) wdgm_cfg_ptr
  );

/**********************************************************************************************************************
  DeactivateEntity()
**********************************************************************************************************************/
/*! \brief        Deactivates a supervised entity
 *  \details      DeactivateEntity is an internal function and deactivates a supervised entity
 *  \param[in]    current_entity_ptr  Pointer to a supervised entity
 *  \param[in]    local_status        Local supervision status of the current supervised entity
 *  \param[in]    SEID                Identifier of a supervised entity
 *  \param[in]    wdgm_cfg_ptr        Pointer to the configuration for the core on which the function is called
 *  \return       WDGM_LOCAL_STATUS_DEACTIVATED   Deactivation was successful
 *                local_status                    Deactivation not possible (local_status is the previous state)
 *  \pre          -
 *  \context      TASK
 *  \reentrant    FALSE
 *  \synchronous  TRUE
 *  \config       WDGM_ENTITY_DEACTIVATION_ENABLED
 *  \note         The function is not AUTOSAR 4.0 conform!
 *  \note         The function uses read and write access to the global shared memory
 *  \note         Before an Entity can be deactivated, it must pass it's End Checkpoint to clear the local activity
 *                flag. The clearing can't be done in this function because of the necessary memory write access
 *                to local memory area.
 *  \trace        DSGN-WdgM22780
 */
WDGM_LOCAL FUNC(WdgM_LocalStatusType, WDGM_CODE) DeactivateEntity(
  P2CONST(WdgM_SupervisedEntityType, AUTOMATIC, WDGM_APPL_CONST) current_entity_ptr,
  VAR(WdgM_LocalStatusType, AUTOMATIC) local_status,
  VAR(WdgM_SupervisedEntityIdType, AUTOMATIC) SEID,
  P2CONST(WdgM_ConfigType, AUTOMATIC, WDGM_APPL_CONST) wdgm_cfg_ptr
  );

/**********************************************************************************************************************
  ActivateEntity()
**********************************************************************************************************************/
/*! \brief        Activates a supervised entity
 *  \details      ActivateEntity is an internal function and activates a supervised entity
 *  \param[in]    local_status          Local supervision status of the current supervised entity
 *  \param[in]    SEID                  Identifier of a supervised entity
 *  \param[in]    wdgm_cfg_ptr          Pointer to the configuration for the core on which the function is called
 *  \return       WDGM_LOCAL_STATUS_OK  Activation was successful
 *                local_status          Activation not possible (local_status is the previous state)
 *  \pre          Entity must be in a state DEACTIVATED. This state can be reached by WdgM_Init or by
 *                WdgM_DeactivateSupervisionEntity
 *  \context      TASK
 *  \reentrant    FALSE
 *  \synchronous  TRUE
 *  \config       WDGM_ENTITY_DEACTIVATION_ENABLED
 *  \note         The function is not AUTOSAR 4.0 conform!
 *  \note         The function uses read and write access in to global shared (GS) memory
 *  \trace        DSGN-WdgM22780
 */
WDGM_LOCAL FUNC(WdgM_LocalStatusType, WDGM_CODE) ActivateEntity(
  VAR(WdgM_LocalStatusType, AUTOMATIC) local_status,
  VAR(WdgM_SupervisedEntityIdType, AUTOMATIC) SEID,
  P2CONST(WdgM_ConfigType, AUTOMATIC, WDGM_APPL_CONST) wdgm_cfg_ptr
  );
#endif /* (WDGM_ENTITY_DEACTIVATION_ENABLED == STD_ON) */

/**********************************************************************************************************************
  BuildAliveLocalStatus()
**********************************************************************************************************************/
/*! \brief        Builds the local supervision status of a supervised entity for alive supervision
 *  \details      BuildAliveLocalStatus is an internal function and builds the local supervision status of a supervised
 *                entity for alive supervision
 *  \param[in]    current_entity_ptr       Pointer to a supervised entity
 *  \param[in]    wdgm_cfg_ptr             Pointer to the configuration for the core on which the function is called
 *  \return       WDGM_LOCAL_STATUS_OK     No alive supervision violation was detected in the current supervised entity
 *                WDGM_LOCAL_STATUS_FAILED Alive supervision violation detected
 *  \pre          -
 *  \context      TASK
 *  \reentrant    FALSE
 *  \synchronous  TRUE
 *  \trace        DSGN-WdgM23071
 *  \trace        SPEC-2068284, SPEC-2068285, SPEC-2068286, SPEC-2068292
 */
WDGM_LOCAL FUNC(WdgM_LocalStatusType, WDGM_CODE) BuildAliveLocalStatus(
  P2CONST(WdgM_SupervisedEntityType, AUTOMATIC, WDGM_APPL_CONST) current_entity_ptr
#if (WDGM_FIRSTCYCLE_ALIVECOUNTER_RESET == STD_ON)
  , P2CONST(WdgM_ConfigType, AUTOMATIC, WDGM_APPL_CONST) wdgm_cfg_ptr
#endif /* (WDGM_FIRSTCYCLE_ALIVECOUNTER_RESET == STD_ON) */
  );

/**********************************************************************************************************************
  CheckDeadlineHangup()
**********************************************************************************************************************/
/*! \brief        Checks the deadline if the second checkpoint of a local or global transition is not called anymore
 *  \details      CheckDeadlineHangup is an internal function and checks if the maximum deadline has elapsed and the
 *                next checkpoint of a local or global transition has not been reached
 *  \param[in]    current_entity_ptr              Pointer to a supervised entity
 *  \param[out]   aperiodic_local_status_deadline Pointer to the aperiodic local supervision status of the supervised
 *                                                entity for deadline supervision. The result of this function is
 *                                                stored in the variable referenced by this pointer
 *  \param[in]    remembered_checkpoint_id        Last reached checkpoint within the current supervised entity
 *  \param[in]    local_activity_flag             Local activity flag of the current supervised entity
 *  \param[in]    remembered_checkpoint_time      Timestamp value of the last reached checkpoint of the current
 *                                                supervised entity
 *  \param[in]    deadline_violation_cnt          Number of deadline violations detected by WdgM_CheckpointReached
 *  \param[in]    current_tick_count              Value of the current timebase tick counter
 *  \param[in]    wdgm_cfg_ptr                    Pointer to the configuration for the core on which the function is
 *                                                called
 *  \pre          -
 *  \context      TASK
 *  \reentrant    FALSE
 *  \synchronous  TRUE
 *  \trace        DSGN-WdgM23072
 */
WDGM_LOCAL FUNC(void, WDGM_CODE) CheckDeadlineHangup(
  P2CONST(WdgM_SupervisedEntityType, AUTOMATIC, WDGM_APPL_CONST) current_entity_ptr,
  P2VAR(WdgM_LocalStatusType, AUTOMATIC, WDGM_APPL_DATA) aperiodic_local_status_deadline,
  VAR(WdgM_CheckpointIdType, AUTOMATIC) remembered_checkpoint_id,
  VAR(WdgM_BooleanParamType, AUTOMATIC) local_activity_flag,
  VAR(WdgM_TimeBaseTickType, AUTOMATIC) remembered_checkpoint_time,
  VAR(WdgM_ViolationCntType, AUTOMATIC) deadline_violation_cnt,
  VAR(WdgM_TimeBaseTickType, AUTOMATIC) current_tick_count
#if (WDGM_GLOBAL_TRANSITIONS == STD_ON)
  , P2CONST(WdgM_ConfigType, AUTOMATIC, WDGM_APPL_CONST) wdgm_cfg_ptr
#endif /* WDGM_GLOBAL_TRANSITIONS == STD_ON */
  );

/**********************************************************************************************************************
  CheckDeadlineViolation()
**********************************************************************************************************************/
/*! \brief        Builds the local supervision status of a supervised entity for deadline supervision
 *  \details      CheckDeadlineViolation is an internal function and builds the local supervision status of a
 *                supervised entity for deadline supervision
 *  \param[in]    current_entity_ptr              Pointer to a supervised entity
 *  \param[out]   aperiodic_local_status_deadline Pointer to the aperiodic local supervision status of the supervised
 *                                                entity for deadline supervision. The result of this function is
 *                                                stored in the variable referenced by this pointer
 *  \param[in]    deadline_violation_cnt          Number of deadline violations detected by WdgM_CheckpointReached
 *  \pre          CheckDeadlineHangup already executed
 *  \context      TASK
 *  \reentrant    FALSE
 *  \synchronous  TRUE
 *  \trace        DSGN-WdgM23072
 */
WDGM_LOCAL FUNC(void, WDGM_CODE) CheckDeadlineViolation(
  P2CONST(WdgM_SupervisedEntityType, AUTOMATIC, WDGM_APPL_CONST) current_entity_ptr,
  P2VAR(WdgM_LocalStatusType, AUTOMATIC, WDGM_APPL_DATA) aperiodic_local_status_deadline,
  VAR(WdgM_ViolationCntType, AUTOMATIC) deadline_violation_cnt
  );

/**********************************************************************************************************************
  CheckProgramFlowViolation()
**********************************************************************************************************************/
/*! \brief        Builds the local supervision status of a supervised entity for logical supervision
 *  \details      CheckProgramFlowViolation is an internal function and builds the local supervision status of a
 *                supervised entity for logical supervision
 *  \param[in]    current_entity_ptr                  Pointer to a supervised entity
 *  \param[in]    aperiodic_local_status_programflow  Pointer to the aperiodic local supervision status of the
 *                                                    supervised entity for logical supervision. The result of this
 *                                                    function is stored in the variable referenced by this pointer
 *  \param[in]    program_flow_violation_cnt          Number of logical violations detected by WdgM_CheckpointReached
 *  \pre          -
 *  \context      TASK
 *  \reentrant    FALSE
 *  \synchronous  TRUE
 *  \trace        DSGN-WdgM23073
 */
WDGM_LOCAL FUNC(void, WDGM_CODE) CheckProgramFlowViolation(
  P2CONST(WdgM_SupervisedEntityType, AUTOMATIC, WDGM_APPL_CONST) current_entity_ptr,
  P2VAR(WdgM_LocalStatusType, AUTOMATIC, WDGM_APPL_DATA) aperiodic_local_status_programflow,
  VAR(WdgM_ViolationCntType, AUTOMATIC) program_flow_violation_cnt
  );

/**********************************************************************************************************************
  ImmediateWatchdogReset()
**********************************************************************************************************************/
/*! \brief        Performs a reset using the configured watchdog devices
 *  \details      ImmediateWatchdogReset is an internal function and performs a reset using the configured watchdog
 *                devices
 *  \param[in]    wdgm_cfg_ptr        Pointer to the configuration for the core on which the function is called
 *  \return       E_OK                Function executed successfully
 *                E_NOT_OK            Error was detected
 *  \pre          -
 *  \context      TASK
 *  \reentrant    FALSE
 *  \synchronous  TRUE
 *  \trace        DSGN-WdgM23128
 */
WDGM_LOCAL FUNC(Std_ReturnType, WDGM_CODE) ImmediateWatchdogReset(
  P2CONST(WdgM_ConfigType, AUTOMATIC, WDGM_APPL_CONST) wdgm_cfg_ptr
  );

#if (WDGM_TIMEBASE_SOURCE == WDGM_INTERNAL_SOFTWARE_TICK)
/**********************************************************************************************************************
 *  WdgM_UpdateTickCount()
 *********************************************************************************************************************/
/*! \brief        Increments the timebase tick counter
 *  \details      WdgM_UpdateTickCount is an internal function and increments the timebase tick counter by one if the
 *                pre-compile configuration parameter WdgMTimebaseSource is set to WDGM_INTERNAL_SOFTWARE_TICK
 *  \param[in]    wdgm_cfg_ptr        Pointer to the configuration for the core on which the function is called
 *  \pre          Module is initialized
 *  \context      TASK
 *  \reentrant    FALSE
 *  \synchronous  TRUE
 *  \config       WDGM_INTERNAL_SOFTWARE_TICK
 *  \trace        DSGN-WdgM23126
 */
WDGM_LOCAL FUNC(void, WDGM_CODE) WdgM_UpdateTickCount(
  P2CONST(WdgM_ConfigType, AUTOMATIC, WDGM_APPL_CONST) wdgm_cfg_ptr
  );
#endif /* (WDGM_TIMEBASE_SOURCE == WDGM_INTERNAL_SOFTWARE_TICK) */

/**********************************************************************************************************************
 *  WdgM_SetTickCount()
 *********************************************************************************************************************/
/*! \brief        Sets the timebase tick counter to a given value
 *  \details      WdgM_SetTickCount is an internal function and sets the internal tick counter to the given value
 *  \param[in]    time_base_tick    The new value for the tick counter
 *  \param[in]    wdgm_cfg_ptr      Pointer to the configuration structure to get access to the internal tick counter
 *  \pre          -
 *  \context      TASK
 *  \reentrant    FALSE
 *  \synchronous  TRUE
 *  \trace        DSGN-WdgM22759
 */
WDGM_LOCAL FUNC(void, WDGM_CODE) WdgM_SetTickCount(
  VAR(WdgM_TimeBaseTickType, AUTOMATIC) time_base_tick,
  P2CONST(WdgM_ConfigType, AUTOMATIC, WDGM_APPL_CONST) wdgm_cfg_ptr
  );

/**********************************************************************************************************************
 *  LOCAL FUNCTIONS
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  Init_EntityMemoryL()
 *********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 */
WDGM_LOCAL FUNC(void, WDGM_CODE) Init_EntityMemoryL(
  P2CONST(WdgM_SupervisedEntityType, AUTOMATIC, WDGM_APPL_CONST) current_entity_ptr
  )
{
  /* ----- Local Variables ---------------------------------------------- */
  VAR(WdgM_CheckpointIdType, AUTOMATIC) cp_id;

  /* ----- Implementation ----------------------------------------------- */
  /* #10 Initialize local entity data (local RAM) of given entity */
  /* WDGM271,... */
  current_entity_ptr->EntityStatusLRef->LocalActivityFlag = FALSE; /* SBSW_WDGM_008 */

  /* Program Flow initialization */
  current_entity_ptr->EntityStatusLRef->ProgramFlowViolationCnt = 0u; /* SBSW_WDGM_008 */

  /* Deadline initialization */
  current_entity_ptr->EntityStatusLRef->DeadlineViolationCnt = 0u; /* SBSW_WDGM_008 */

  /* Initialize the Remembered Checkpoint time */
  current_entity_ptr->EntityStatusLRef->RememberedCheckpointTime = 0u; /* SBSW_WDGM_008 */

#if (WDGM_AUTOSAR_DEBUGGING == STD_ON)
  current_entity_ptr->EntityStatusLRef->RememberedInitialCheckpointTime = 0u; /* SBSW_WDGM_008 */
#endif /* (WDGM_AUTOSAR_DEBUGGING == STD_ON) */

  /* Initialize the Remembered Checkpoint ID */
  current_entity_ptr->EntityStatusLRef->RememberedCheckpointId = WDGM_INVALID_CP_ID; /* SBSW_WDGM_008 */

  /* Initialize the all Alive counters */
  for (cp_id = 0u; cp_id < current_entity_ptr->NrOfCheckpoints; cp_id++)
  {
    if (current_entity_ptr->WdgMCheckpointRef[cp_id].WdgMAliveLRef != NULL_PTR)
    {
      current_entity_ptr->WdgMCheckpointRef[cp_id].WdgMAliveLRef->AliveCounter = 0u; /* SBSW_WDGM_010 */
    }
  }
}

/**********************************************************************************************************************
 *  Init_EntityMemoryG()
 *********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 */
WDGM_LOCAL FUNC(void, WDGM_CODE) Init_EntityMemoryG(
  P2CONST(WdgM_SupervisedEntityType, AUTOMATIC, WDGM_APPL_CONST) current_entity_ptr
#if (WDGM_ENTITY_DEACTIVATION_ENABLED == STD_ON)
  , CONST(WdgM_SupervisedEntityIdType, AUTOMATIC) entity_id,
  P2CONST(WdgM_ConfigType, AUTOMATIC, WDGM_APPL_CONST) wdgm_cfg_ptr
#endif /* (WDGM_ENTITY_DEACTIVATION_ENABLED == STD_ON) */
  )
{
  /* ----- Local Variables ---------------------------------------------- */
  VAR(WdgM_CheckpointIdType, AUTOMATIC) cp_id;

  /* ----- Implementation ----------------------------------------------- */
  /* #10 Initialize global entity data (global RAM) of given entity */
  /* WDGM268,9 */
  if (current_entity_ptr->WdgMInitialStatus == WDGM_LOCAL_STATUS_OK)
  {
    current_entity_ptr->EntityStatusGRef->LocalMonitoringStatus = WDGM_LOCAL_STATUS_OK; /* SBSW_WDGM_008 */
  }
  else
  {
    current_entity_ptr->EntityStatusGRef->LocalMonitoringStatus = WDGM_LOCAL_STATUS_DEACTIVATED; /* SBSW_WDGM_008 */
  }

  /* Failed supervision reference cycle initialization */
  current_entity_ptr->EntityStatusGRef->FailedSupervisionRefCycles  = 0u; /* SBSW_WDGM_008 */

  /* Program Flow initialization */
  current_entity_ptr->EntityStatusGRef->FailedProgramFlowRefCycles  = 0u; /* SBSW_WDGM_008 */
  current_entity_ptr->EntityStatusGRef->FailedProgramFlowCycCounter = 0u; /* SBSW_WDGM_008 */
  current_entity_ptr->EntityStatusGRef->ProgramFlowViolationCnt     = 0u; /* SBSW_WDGM_008 */

  /* Deadline initialization */
  current_entity_ptr->EntityStatusGRef->FailedDeadlineRefCycles     = 0u; /* SBSW_WDGM_008 */
  current_entity_ptr->EntityStatusGRef->FailedDeadlineCycCounter    = 0u; /* SBSW_WDGM_008 */
  current_entity_ptr->EntityStatusGRef->DeadlineViolationCnt        = 0u; /* SBSW_WDGM_008 */

  /* Initialize the all Alive counters */
  for (cp_id = 0u; cp_id < current_entity_ptr->NrOfCheckpoints; cp_id++)
  {
    if (current_entity_ptr->WdgMCheckpointRef[cp_id].WdgMAliveGRef != NULL_PTR)
    {
      current_entity_ptr->WdgMCheckpointRef[cp_id].WdgMAliveGRef->SupervisionAliveCounter = 0u; /* SBSW_WDGM_010 */
      current_entity_ptr->WdgMCheckpointRef[cp_id].WdgMAliveGRef->AliveCounterStamp       = 0u; /* SBSW_WDGM_010 */
    }
  }

#if (WDGM_ENTITY_DEACTIVATION_ENABLED == STD_ON)
  /* #20 Initialize the SE deactivation / activation request array */
  WriteStateChangeRequest (entity_id, WDGM_SE_STATE_REQUEST_NONE, wdgm_cfg_ptr); /* SBSW_WDGM_001 */
#endif /* (WDGM_ENTITY_DEACTIVATION_ENABLED == STD_ON) */
}

/**********************************************************************************************************************
 *  Init_CheckConfigChecksum()
 *********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 */
WDGM_LOCAL FUNC(Std_ReturnType, WDGM_CODE) Init_CheckConfigChecksum(
  P2CONST(WdgM_ConfigType, AUTOMATIC, WDGM_APPL_CONST) wdgm_cfg_ptr
  )
{
  /* ----- Local Variables ---------------------------------------------- */
  VAR(WdgM_SupervisedEntityIdType, AUTOMATIC) nr_of_entities;
  VAR(WdgM_SupervisedEntityIdType, AUTOMATIC) entity_id;
  VAR(Std_ReturnType, AUTOMATIC) res;
  VAR(uint32, AUTOMATIC) checksum;
  VAR(WdgM_CheckpointIdType, AUTOMATIC) cp_id;
  VAR(WdgM_CheckpointIdType, AUTOMATIC) cp_idx;
  VAR(WdgM_CheckpointIdType, AUTOMATIC) se_idx;
  P2CONST(WdgM_SupervisedEntityType, AUTOMATIC, WDGM_APPL_CONST) current_entity_ptr;

  /* ----- Implementation ----------------------------------------------- */
  /* #10 Calculate the checksum of the given ConfigPointer */
  checksum = 0u;
  cp_idx   = 0u;
  se_idx   = 0u;

  nr_of_entities = wdgm_cfg_ptr->NrOfSupervisedEntities;

  /* Go through all Entities and Checkpoints and build a checksum
     from Entity array and from Checkpoint array */
  for (entity_id = 0u; entity_id < nr_of_entities; entity_id++)
  {
    /* Get a pointer to the current supervised entity */
    current_entity_ptr  = &wdgm_cfg_ptr->WdgMSupervisedEntityRef[entity_id];
#if (WDGM_MULTICORE_USAGE == STD_ON)
    /* Take into account only SEs running on the current core */
    if (current_entity_ptr->WdgMEntityCoreId == wdgm_cfg_ptr->WdgMModeCoreAssignment)
#endif /* (WDGM_MULTICORE_USAGE == STD_ON) */
    {
      /* Add the Entity elements to the checksum, each even element multiply by two */
      if ((se_idx & 0x1u) != 0u)
      {
        /* Each odd add to the checksum  */
        checksum += (uint32) current_entity_ptr->WdgMSupervisedEntityId;
      }
      else
      {
        /* Beginning with element 0, take each even element */
        checksum += (((uint32) current_entity_ptr->WdgMSupervisedEntityId) << 1u);
      }
      se_idx++;

      /* Add all checkpoint elements as we have only one array for all checkpoints */
      for (cp_id = 0u; cp_id < current_entity_ptr->NrOfCheckpoints; cp_id++)
      {
        /* Add the checkpoint elements to the checksum, each even element multiply by two */
        if ((cp_idx & 0x1u) != 0u)
        {
          checksum += (uint32) current_entity_ptr->WdgMCheckpointRef[cp_id].WdgMCheckpointId;
        }
        else
        {
          checksum += ( ((uint32) current_entity_ptr->WdgMCheckpointRef[cp_id].WdgMCheckpointId) << 1u );
        }
        /* Next checkpoint element */
        cp_idx++;
      }
    }
  }

  /* Add defined elements from the main config structure. Beginning
     with the first element where each second element is multiplied by two.
     (The same procedure in the configuration generator!) */
  checksum += ( ((uint32) wdgm_cfg_ptr->WdgMConfigMajorVersion) << 1u );
  checksum += (uint32) wdgm_cfg_ptr->WdgMConfigMinorVersion;
  checksum += ( ((uint32) wdgm_cfg_ptr->WdgMConfigId) << 1u );
  checksum += (uint32) wdgm_cfg_ptr->WdgMModeCoreAssignment;

  /* #20 Check if the calculated checksum corresponds with the configured one provided by the generator */
  if (checksum != wdgm_cfg_ptr->WdgMConfigChecksum)
  {
    res = E_NOT_OK;
  }
  else
  {
    res = E_OK;
  }
  return (res);
}

/**********************************************************************************************************************
 *  WatchdogTrigger()
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
 */
WDGM_LOCAL FUNC(Std_ReturnType, WDGM_CODE) WatchdogTrigger(
  P2CONST(WdgM_ConfigType, AUTOMATIC, WDGM_APPL_CONST) wdgm_cfg_ptr
  )
{
  /* ----- Local Variables ---------------------------------------------- */
  P2CONST(WdgM_WatchdogDeviceType, AUTOMATIC, WDGM_APPL_CONST) device_ptr;
  VAR(Std_ReturnType, AUTOMATIC) res;
  VAR(WdgM_TriggerModeIdType, AUTOMATIC) trigger_mode;
  VAR(uint8, AUTOMATIC) i;
  VAR(WdgM_BooleanParamType, AUTOMATIC) failed;

  /* ----- Implementation ----------------------------------------------- */
  res = E_NOT_OK;
  failed = FALSE;

  /* #10 Get the current trigger mode */
  trigger_mode = wdgm_cfg_ptr->DataGRef->TriggerModeId;

  /* #20 Loop over all configured watchdog devices */
  /* WDGM002 */
  for (i = 0u; i < wdgm_cfg_ptr->NrOfWatchdogDevices; i++)
  {
    device_ptr = &wdgm_cfg_ptr->WdgMWatchdogDeviceRef[i];
    /* WDGM119: Do not trigger watchdogs configured as WDGIF_OFF_MODE  */
#if (WDGM_OFF_MODE_ENABLED == STD_ON)
    if (device_ptr->WdgMTriggerModeRef[trigger_mode].WdgMWatchdogMode != WDGIF_OFF_MODE)
#endif /* (WDGM_OFF_MODE_ENABLED == STD_ON) */
    {
      /* #21 Set the configured trigger window via WdgIf if no OFF_Mode is enabled */
      res = WdgIf_SetTriggerWindow( device_ptr->WdgMTriggerModeRef[trigger_mode].WdgMDeviceIndex,
                                    device_ptr->WdgMTriggerModeRef[trigger_mode].WdgMTriggerWindowStart,
                                    device_ptr->WdgMTriggerModeRef[trigger_mode].WdgMTriggerTimeout
                                  );

      /* #22 Check if an error occurred during setting the new trigger window */
      if (res == E_NOT_OK)
      {
        /* #23 Report an error to Det */
        failed = TRUE;
        WDGM_DET_REPORTERROR( WDGM_MODULE_ID,
                              WDGM_VENDOR_ID,
                              API_ID_WdgM_MainFunction,
                              WDGM_E_WDGIF_MODE
                            );
        /* #24 Check if SECOND_RESET_PATH is configured */
#if (WDGM_SECOND_RESET_PATH == STD_ON)
        /* #25 Reset the device immediate via Mcu internal functionality, this function usually doesn't return */
        (void) Appl_Mcu_PerformReset();
#endif /* (WDGM_SECOND_RESET_PATH == STD_ON) */
      }
    }
  }
  if (failed == TRUE)
  {
    res = E_NOT_OK;
  }

  /* #30 Return the result of the service */
  return (res);
}

/**********************************************************************************************************************
 *  ImmediateWatchdogReset()
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
 */
WDGM_LOCAL FUNC(Std_ReturnType, WDGM_CODE) ImmediateWatchdogReset(
  P2CONST(WdgM_ConfigType, AUTOMATIC, WDGM_APPL_CONST) wdgm_cfg_ptr
  )
{
  /* ----- Local Variables ---------------------------------------------- */
  P2CONST(WdgM_WatchdogDeviceType, AUTOMATIC, WDGM_APPL_CONST) device_ptr;
  VAR(WdgM_TriggerModeIdType, AUTOMATIC) trigger_mode;
  VAR(Std_ReturnType, AUTOMATIC) res;
  VAR(uint8, AUTOMATIC) i;
  VAR(WdgM_BooleanParamType, AUTOMATIC) failed;

  /* ----- Implementation ----------------------------------------------- */
  res = E_NOT_OK;
  failed = FALSE;

  /* #10 Get the current trigger mode */
  trigger_mode = wdgm_cfg_ptr->DataGRef->TriggerModeId;

  /* #20 Loop over all configured watchdog devices */
  for (i = 0u; i < wdgm_cfg_ptr->NrOfWatchdogDevices; i++)
  {
    device_ptr = &wdgm_cfg_ptr->WdgMWatchdogDeviceRef[i];
#if (WDGM_OFF_MODE_ENABLED == STD_ON)
    if (device_ptr->WdgMTriggerModeRef[trigger_mode].WdgMWatchdogMode != WDGIF_OFF_MODE)
#endif /* (WDGM_OFF_MODE_ENABLED == STD_ON) */
    {
      /* #21 Set the configured trigger window to zero via WdgIf if no OFF_Mode is enabled - immediate reset! */
      res = WdgIf_SetTriggerWindow
          (device_ptr->WdgMTriggerModeRef[trigger_mode].WdgMDeviceIndex, 0u, 0u);

      /* #22 Check if an error occurred during setting the new trigger window to zero */
      if (res == E_NOT_OK)
      {
        /* #23 Report an error to Det */
        failed = TRUE;
        WDGM_DET_REPORTERROR( WDGM_MODULE_ID,
                              WDGM_VENDOR_ID,
                              API_ID_WdgM_PerformReset,
                              WDGM_E_WDGIF_MODE
                            );
        /* #24 Check if SECOND_RESET_PATH is configured */
#if (WDGM_SECOND_RESET_PATH == STD_ON)
        /* #25 Reset the device immediate via Mcu internal functionality, this function usually doesn't return */
        (void) Appl_Mcu_PerformReset ();
#endif /* (WDGM_SECOND_RESET_PATH == STD_ON) */
      }
    }
  }
  if (failed == TRUE)
  {
    res = E_NOT_OK;
  }

  /* Immediate reset shall stop the MCU activity, otherwise the result can be unintended system behavior.
     Stopping activity solve also problems with double resets. */
  /* #30 Return the result of the service */
  return (res);
}

#if (WDGM_ENTITY_DEACTIVATION_ENABLED == STD_ON)
/**********************************************************************************************************************
 *  WriteStateChangeRequest()
 *********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *
 */
WDGM_LOCAL FUNC(void, WDGM_CODE) WriteStateChangeRequest(
  VAR(WdgM_SupervisedEntityIdType, AUTOMATIC) SEID,
  VAR(WdgM_StateRequestType, AUTOMATIC) state_request,
  P2CONST(WdgM_ConfigType, AUTOMATIC, WDGM_APPL_CONST) wdgm_cfg_ptr
  )
{
  /* ----- Implementation ----------------------------------------------- */
  /* #10 Enter section with disabled interrupts */
  WdgM_GlobalSuspendInterrupts();
  /* #11 Write the state change request and its double-inverse value in the global shared memory section */
  wdgm_cfg_ptr->EntityGSRef[SEID].StateChangeRequest = (WdgM_StateRequestType) state_request; /* SBSW_WDGM_006 */
  wdgm_cfg_ptr->EntityGSRef[SEID].StateChangeRequest_neg = (WdgM_StateRequestType) ~state_request; /* SBSW_WDGM_006 */
  /* #20 Leave section with disabled interrupts */
  WdgM_GlobalRestoreInterrupts();
}

/**********************************************************************************************************************
 *  ReadStateChangeRequest()
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
 */
WDGM_LOCAL FUNC(Std_ReturnType, WDGM_CODE) ReadStateChangeRequest(
  VAR(WdgM_SupervisedEntityIdType, AUTOMATIC) SEID,
  P2VAR(WdgM_StateRequestType, AUTOMATIC, WDGM_APPL_DATA) state_request_ptr,
  P2CONST(WdgM_ConfigType, AUTOMATIC, WDGM_APPL_CONST) wdgm_cfg_ptr
  )
{
  /* ----- Local Variables ---------------------------------------------- */
  VAR(WdgM_StateRequestType, AUTOMATIC) local_state;
  VAR(WdgM_StateRequestType, AUTOMATIC) local_state_neg;
  VAR(Std_ReturnType, AUTOMATIC) res;

  /* ----- Implementation ----------------------------------------------- */
  /* #10 Enter section with disabled interrupts */
  WdgM_GlobalSuspendInterrupts();
  /* #11 Read the state change request and its double-inverse value from the global shared memory section */
  local_state     = wdgm_cfg_ptr->EntityGSRef[SEID].StateChangeRequest;
  local_state_neg = (WdgM_StateRequestType) ~(wdgm_cfg_ptr->EntityGSRef[SEID].StateChangeRequest_neg);
  /* #20 Leave section with disabled interrupts */
  WdgM_GlobalRestoreInterrupts();

  /* #30 Check if the state change request and its double-inverse value does correspond */
  if (local_state != local_state_neg)
  {
    WDGM_DET_REPORTERROR( WDGM_MODULE_ID,
                          WDGM_VENDOR_ID,
                          API_ID_WdgM_MainFunction,
                          WDGM_E_MEMORY_FAILURE         /* GS memory failure */
                        );
    /* #31 Initiate an immediate watchdog reset */
    (void) ImmediateWatchdogReset (wdgm_cfg_ptr); /* SBSW_WDGM_001 */
    /* #32 Store the invalid state change request value of the requested supervised entity in the out parameter */
    *state_request_ptr = WDGM_SE_STATE_REQUEST_INVALID; /* SBSW_WDGM_008 */
    res = E_NOT_OK;
  }
  else
  {
    /* #40 Store the state change request value of the requested supervised entity in the out parameter */
    *state_request_ptr = local_state; /* SBSW_WDGM_008 */
    res = E_OK;
  }

  /* #50 Return the result of the service */
  return (res);
}
#endif /* (WDGM_ENTITY_DEACTIVATION_ENABLED == STD_ON) */

/**********************************************************************************************************************
 *  BuildEntitiesStatus()
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
 */
WDGM_LOCAL FUNC(void, WDGM_CODE) BuildEntitiesStatus(
  P2VAR(WdgM_LocalStatusType, AUTOMATIC, WDGM_APPL_DATA) local_status_failed_ptr,
  P2VAR(WdgM_LocalStatusType, AUTOMATIC, WDGM_APPL_DATA) local_status_expired_ptr,
  P2CONST(WdgM_ConfigType, AUTOMATIC, WDGM_APPL_CONST) wdgm_cfg_ptr,
  P2VAR(WdgM_SupervisedEntityIdType, AUTOMATIC, WDGM_APPL_DATA) expired_seid_ptr
#if (WDGM_AUTOSAR_DEBUGGING == STD_ON)
  , P2VAR(WdgM_ViolationType, AUTOMATIC, WDGM_APPL_DATA) se_violation_ptr
#endif /* (WDGM_AUTOSAR_DEBUGGING == STD_ON) */
  )
{
  /* ----- Local Variables ---------------------------------------------- */
  P2CONST(WdgM_SupervisedEntityType, AUTOMATIC, WDGM_APPL_CONST) current_entity_ptr;
  VAR(WdgM_SupervisedEntityIdType, AUTOMATIC) entity_id;
  VAR(WdgM_LocalStatusType, AUTOMATIC) local_status;
  VAR(WdgM_LocalStatusType, AUTOMATIC) periodic_local_status_alive;
  VAR(WdgM_LocalStatusType, AUTOMATIC) aperiodic_local_status_deadline;
  VAR(WdgM_LocalStatusType, AUTOMATIC) aperiodic_local_status_programflow;
  VAR(WdgM_ViolationCntType, AUTOMATIC) program_flow_violation_cnt;
  VAR(WdgM_ViolationCntType, AUTOMATIC) deadline_violation_cnt;
  VAR(WdgM_CheckpointIdType, AUTOMATIC) remembered_checkpoint_id;
  VAR(WdgM_BooleanParamType, AUTOMATIC) local_activity_flag;
  VAR(WdgM_TimeBaseTickType, AUTOMATIC) remembered_checkpoint_time;
  VAR(WdgM_TimeBaseTickType, AUTOMATIC) current_tick_count;
#if (WDGM_AUTOSAR_DEBUGGING == STD_ON)
  VAR(WdgM_ViolationType, AUTOMATIC) se_violation = WDGM_VIOLATION_NONE;
#endif /* (WDGM_AUTOSAR_DEBUGGING == STD_ON) */

  /* ----- Implementation ----------------------------------------------- */
  /* Default values for returned status */
  *local_status_failed_ptr  = WDGM_LOCAL_STATUS_OK; /* SBSW_WDGM_008 */
  *local_status_expired_ptr = WDGM_LOCAL_STATUS_OK; /* SBSW_WDGM_008 */

  /* Init with invalid SEID in case no SE goes to expired */
  *expired_seid_ptr = WDGM_INVALID_SE_ID; /* SBSW_WDGM_008 */

  /* #10 Build a new local supervision status for all supervised entities running on the current core */
  for (entity_id = 0u; entity_id < wdgm_cfg_ptr->NrOfSupervisedEntities; entity_id++)
  {
    current_entity_ptr = &wdgm_cfg_ptr->WdgMSupervisedEntityRef[entity_id];

#if (WDGM_MULTICORE_USAGE == STD_ON)
    /* Take into account only SEs running on the current core */
    if (current_entity_ptr->WdgMEntityCoreId == wdgm_cfg_ptr->WdgMModeCoreAssignment)
#endif /* (WDGM_MULTICORE_USAGE == STD_ON) */
    {
      /* #20 Read the current local supervision status */
      local_status = current_entity_ptr->EntityStatusGRef->LocalMonitoringStatus;

      /* #30 Check if ENTITY_DEACTIVATION_ENABLED is configured */
#if (WDGM_ENTITY_DEACTIVATION_ENABLED == STD_ON)
      /* Check the deactivation request and when allowed then deactivate the entity
         BEFORE the entity state evaluation in the lines below happens */
      /* The SE Deactivation shall be explicitly enabled in the configuration */
      if (current_entity_ptr->WdgMEnableEntityDeactivation == STD_ON)
      {
        /* #31 Deactivate the supervised entity if requested */
        local_status = DeactivateEntity ( current_entity_ptr, /* SBSW_WDGM_007 */ /* SBSW_WDGM_001 */
                                          local_status,
                                          entity_id,
                                          wdgm_cfg_ptr
                                        );
      }
#endif /* (WDGM_ENTITY_DEACTIVATION_ENABLED == STD_ON) */

      /* #40 Check if the local supervision status is not DEACTIVATED */
      /* WDGM078, WDGM271, Local Activity Flag */
      if (local_status != WDGM_LOCAL_STATUS_DEACTIVATED)
      {
        /* -----------------------------------------------------------------
         * Step 1: Evaluate for current entity the Alive, Deadline and Program Flow status
         * -------------------------------------------------------------- */

        /* For interruptibility and consistency reason, load the sensitive variables
           that are written by WdgM_CheckpointReached() to the stack at one position here
           and disable interrupts around */
        /* #50 Enter section with disabled interrupts */
        WdgM_GlobalSuspendInterrupts();
        /* #51 Load all sensitive variables that are written by WdgM_CheckpointReached */
        program_flow_violation_cnt = current_entity_ptr->EntityStatusLRef->ProgramFlowViolationCnt;
        deadline_violation_cnt     = current_entity_ptr->EntityStatusLRef->DeadlineViolationCnt;
        remembered_checkpoint_id   = current_entity_ptr->EntityStatusLRef->RememberedCheckpointId;
        local_activity_flag        = current_entity_ptr->EntityStatusLRef->LocalActivityFlag;
        remembered_checkpoint_time  = current_entity_ptr->EntityStatusLRef->RememberedCheckpointTime;

        /* #52 Read the current timebase tick counter value */
#if (WDGM_TIMEBASE_SOURCE == WDGM_INTERNAL_HARDWARE_TICK) /* COV_WDGM_TIMEBASE_INTERNAL_HARDWARE_TICK_NOT_SUPPORTED */
        current_tick_count         = WdgM_GetTickCount();
#else /* if (WDGM_TIMEBASE_SOURCE != WDGM_INTERNAL_HARDWARE_TICK) */
        current_tick_count         = WdgM_GetTickCount(wdgm_cfg_ptr); /* SBSW_WDGM_001 */
#endif /* WDGM_TIMEBASE_SOURCE == WDGM_INTERNAL_HARDWARE_TICK */
        /* #60 Leave section with disabled interrupts */
        WdgM_GlobalRestoreInterrupts();

        /* #70 Build the local alive status for the supervised entity */
#if (WDGM_FIRSTCYCLE_ALIVECOUNTER_RESET == STD_ON)
        periodic_local_status_alive = BuildAliveLocalStatus( current_entity_ptr, /* SBSW_WDGM_001 */ /* SBSW_WDGM_007 */
                                                             wdgm_cfg_ptr
                                                            );
#else /* if (WDGM_FIRSTCYCLE_ALIVECOUNTER_RESET != STD_ON) */
        periodic_local_status_alive = BuildAliveLocalStatus(current_entity_ptr); /* SBSW_WDGM_007 */
#endif

        /* #80 Check the deadline hangup and save the result in the aperiodic deadline status (out parameter) */
        CheckDeadlineHangup ( current_entity_ptr, /* SBSW_WDGM_007 */ /* SBSW_WDGM_005 */ /* SBSW_WDGM_001 */
                              &aperiodic_local_status_deadline,
                              remembered_checkpoint_id,
                              local_activity_flag,
                              remembered_checkpoint_time,
                              deadline_violation_cnt,
                              current_tick_count
#if (WDGM_GLOBAL_TRANSITIONS == STD_ON)
                            , wdgm_cfg_ptr
#endif /* WDGM_GLOBAL_TRANSITIONS == STD_ON */
                            );

        /* #90 Check the deadline violation and merge the result and the aperiodic deadline status (out parameter) */
        CheckDeadlineViolation ( current_entity_ptr, /* SBSW_WDGM_007 */ /* SBSW_WDGM_005 */
                                 &aperiodic_local_status_deadline,
                                 deadline_violation_cnt
                               );

        /* #100 Build the logical supervision status if configured for the current supervised entity */
        if (current_entity_ptr->WdgMProgramFlowMonitoring == TRUE)
        {
          CheckProgramFlowViolation( current_entity_ptr, /* SBSW_WDGM_007 */ /* SBSW_WDGM_005 */
                                     &aperiodic_local_status_programflow,
                                     program_flow_violation_cnt
                                   );
        }
        else
        {
          /* Set aperiodic_local_status_programflow to OK if no program flow is used. */
          aperiodic_local_status_programflow = WDGM_LOCAL_STATUS_OK;
        }

        /* -----------------------------------------------------------------
         * Step 2: Build for current entity a new Local Status
         * -------------------------------------------------------------- */

        switch (local_status)
        {
          /* -----------------------------------------------------------*/
          /* #110 Determine new local supervision status if the old local supervision status is OK */
          case WDGM_LOCAL_STATUS_OK:
          {
            /* #111 Check if AUTOSAR_DEBUGGING is configured */
#if (WDGM_AUTOSAR_DEBUGGING == STD_ON)
            /* #112 Determine the the violation type for the supervised entity */
            se_violation = (WdgM_ViolationType) 0u;
            if ( (aperiodic_local_status_deadline == WDGM_LOCAL_STATUS_FAILED)
              && (current_entity_ptr->WdgMFailedDeadlineRefCycleTol == 0u)
               )
            {
              se_violation |= (WdgM_ViolationType) WDGM_VIOLATION_DM;
            }
            if ( (aperiodic_local_status_programflow == WDGM_LOCAL_STATUS_FAILED)
              && (current_entity_ptr->WdgMFailedProgramFlowRefCycleTol == 0u)
               )
            {
              se_violation |= (WdgM_ViolationType) WDGM_VIOLATION_PF;
            }
            if ( (periodic_local_status_alive == WDGM_LOCAL_STATUS_FAILED)
              && (current_entity_ptr->WdgMFailedSupervisionRefCycleTol == 0u)
               )
            {
              se_violation |= (WdgM_ViolationType) WDGM_VIOLATION_AS;
            }

            if (se_violation != WDGM_VIOLATION_NONE)
#else /* if(WDGM_AUTOSAR_DEBUGGING != STD_ON) */
            if ( ( (aperiodic_local_status_deadline == WDGM_LOCAL_STATUS_FAILED)
                && (current_entity_ptr->WdgMFailedDeadlineRefCycleTol == 0u)
                 )
              || ( (aperiodic_local_status_programflow == WDGM_LOCAL_STATUS_FAILED)
                && (current_entity_ptr->WdgMFailedProgramFlowRefCycleTol == 0u)
                 )
              || ( (periodic_local_status_alive == WDGM_LOCAL_STATUS_FAILED)
                && (current_entity_ptr->WdgMFailedSupervisionRefCycleTol == 0u)
                 )
               )
#endif /* (WDGM_AUTOSAR_DEBUGGING == STD_ON) */
            /* #113 Set the new local supervision status */
            {
              /* WDGM202 */
              local_status = WDGM_LOCAL_STATUS_EXPIRED;
            }
            else if ( (aperiodic_local_status_deadline == WDGM_LOCAL_STATUS_FAILED)
                      /* Next term is implied from the fact that the
                         condition of the previous if did not trigger! */
                      /*&& (current_entity_ptr->WdgMFailedDeadlineRefCycleTol != 0) */
                   || (aperiodic_local_status_programflow == WDGM_LOCAL_STATUS_FAILED)
                      /* Next term is implied from the fact that the
                         condition of the previous if did not trigger! */
                      /* && ( current_entity_ptr->WdgMFailedProgramFlowRefCycleTol
                           != 0) */
                   || (periodic_local_status_alive == WDGM_LOCAL_STATUS_FAILED)
                      /* Next term is implied from the fact that the
                         condition of the previous if did not trigger! */
                      /* && (current_entity_ptr->WdgMFailedSupervisionRefCycleTol
                           != 0) */
                    )
            {
              /* WDGM203 */
              local_status = WDGM_LOCAL_STATUS_FAILED;

              /* Partition Reset is currently not supported by the MICROSAR OS the
               * WdgM doesn't support this feature too
               */
            }
            else
            {
              /* MISRA rule 14.10 */
            }
          }
          break;

          /* ----------------------------------------------------------- */
          /* #120 Determine new local supervision status if the old local supervision status is FAILED */
          case WDGM_LOCAL_STATUS_FAILED:
          {
            /* #121 Recover the local supervision if no error was detected since the last call of the main function */
            if ( (aperiodic_local_status_deadline    == WDGM_LOCAL_STATUS_OK)
              && (aperiodic_local_status_programflow == WDGM_LOCAL_STATUS_OK)
              && (periodic_local_status_alive        == WDGM_LOCAL_STATUS_OK)
               )
            {
              /* WDGM205 */
              local_status = WDGM_LOCAL_STATUS_OK;
            }
            else /* FAILED->EXPIRED */
            {
              /* #122 Check if AUTOSAR_DEBUGGING is configured */
#if (WDGM_AUTOSAR_DEBUGGING == STD_ON)
              /* #123 Determine the the violation type for the supervised entity */
              /* next 3 conditions cope with FAILED tolerances (how long the SE stays in FAILED, if tolerated) */
              se_violation = (WdgM_ViolationType) 0u;
              if ( current_entity_ptr->EntityStatusGRef->FailedDeadlineRefCycles
                 > current_entity_ptr->WdgMFailedDeadlineRefCycleTol
                 )
              {
                se_violation |= (WdgM_ViolationType) WDGM_VIOLATION_DM;
              }
              if ( current_entity_ptr->EntityStatusGRef->FailedProgramFlowRefCycles
                 > current_entity_ptr->WdgMFailedProgramFlowRefCycleTol
                 )
              {
                se_violation |= (WdgM_ViolationType) WDGM_VIOLATION_PF;
              }
              if ( current_entity_ptr->EntityStatusGRef->FailedSupervisionRefCycles
                 > current_entity_ptr->WdgMFailedSupervisionRefCycleTol
                 )
              {
                se_violation |= (WdgM_ViolationType) WDGM_VIOLATION_AS;
              }

              if (se_violation != WDGM_VIOLATION_NONE)
#else /* (WDGM_AUTOSAR_DEBUGGING == STD_ON) */
              if ( ( current_entity_ptr->EntityStatusGRef->FailedDeadlineRefCycles
                   > current_entity_ptr->WdgMFailedDeadlineRefCycleTol
                     /* (FailedDeadlineRefCycles > 0) implies that
                        (aperiodic_local_status_deadline == WDGM_LOCAL_STATUS_FAILED)
                     */
                   )
                || ( current_entity_ptr->EntityStatusGRef->FailedProgramFlowRefCycles
                   > current_entity_ptr->WdgMFailedProgramFlowRefCycleTol
                     /* (FailedProgramFlowRefCycles > 0) implies that
                        (aperiodic_local_status_programflow == WDGM_LOCAL_STATUS_FAILED)
                     */
                   )
                || ( current_entity_ptr->EntityStatusGRef->FailedSupervisionRefCycles
                   > current_entity_ptr->WdgMFailedSupervisionRefCycleTol
                     /* (FailedSupervisionRefCycles > 0) implies that
                        (periodic_local_status_alive == WDGM_LOCAL_STATUS_FAILED)
                     */
                   )
                 )
#endif /* (WDGM_AUTOSAR_DEBUGGING == STD_ON) */
              /* #124 Set the new local supervision status */
              {
                /* WDGM206, WDGM097, WDGM202 */
                local_status = WDGM_LOCAL_STATUS_EXPIRED;
              }
              else
              {
                /* MISRA rule 14.10 */
              }
            }
          }
          break;

          /* ----------------------------------------------------------- */
          /* #130 Do nothing if old local supervision status was FAILED */
          case WDGM_LOCAL_STATUS_EXPIRED:
            /* End state, no way out */
          break;

          /* ----------------------------------------------------------*/
          /* No need to list WDGM_LOCAL_STATUS_DEACTIVATED - checked in the "if" above. */

          /* #140 Check if old local supervision status is undefined */
          default:
          {
            WDGM_DET_REPORTERROR( WDGM_MODULE_ID,
                                  WDGM_VENDOR_ID,
                                  API_ID_WdgM_MainFunction,
                                  WDGM_E_PARAM_STATE
                                );
            /* If this statement is reached then another process has corrupted/overwritten the status */
            /* #141 Perform an immediate reset */
            (void) ImmediateWatchdogReset (wdgm_cfg_ptr); /* SBSW_WDGM_001 */
          }
          break;
        }

        /* Return 'at least one' failure status */
        /* #150 Store the determined local supervision status of the supervised entity in the out parameter */
        if (local_status == WDGM_LOCAL_STATUS_FAILED)
        {
          /* At least one status of one entity is FAILED */
          *local_status_failed_ptr = WDGM_LOCAL_STATUS_FAILED; /* SBSW_WDGM_008 */
        }
        else if (local_status == WDGM_LOCAL_STATUS_EXPIRED)
        {
          /* At least one status of one entity is EXPIRED */
          *local_status_expired_ptr = WDGM_LOCAL_STATUS_EXPIRED; /* SBSW_WDGM_008 */
          /* #160 Store the expired supervised entity id of that supervised entity in the out parameter which reaches
           *      the EXPIRED status */
          /* Last detected expired SE */
          *expired_seid_ptr = entity_id; /* SBSW_WDGM_008 */
          /* #170 Check if AUTOSAR_DEBUGGING is configured */
#if (WDGM_AUTOSAR_DEBUGGING == STD_ON)
          /* #171 Store the violation type of that supervised entity in the out parameter which reaches the EXPIRED
           *      status */
          /* AUTOSAR DEBUGGING */
          *se_violation_ptr = se_violation; /* SBSW_WDGM_008 */
#endif /* (WDGM_AUTOSAR_DEBUGGING == STD_ON) */
        }
        else
        {
          /* MISRA rule 14.10 */
        }
      }

      /* #180 Check if ENTITY_DEACTIVATION_ENABLED is configured */
#if (WDGM_ENTITY_DEACTIVATION_ENABLED == STD_ON)
      /* Check the activation request and when allowed then activate the entity
         AFTER the entity state evaluation in the lines above happens */
      /* The SE Activation shall be explicitly enabled in the configuration */
      if (current_entity_ptr->WdgMEnableEntityDeactivation == STD_ON)
      {
        /* #181 Activate the supervised entity if requested */
        local_status = ActivateEntity (local_status, entity_id, wdgm_cfg_ptr); /* SBSW_WDGM_001 */
      }
#endif /* (WDGM_ENTITY_DEACTIVATION_ENABLED == STD_ON) */

      /* #190 Check if STATE_CHANGE_NOTIFICATION is configured */
#if (WDGM_STATE_CHANGE_NOTIFICATION == STD_ON)
      if (current_entity_ptr->WdgM_LocalStateChangeCbk != NULL_PTR)
      {
        /* #191 Check if a state change notification is configured */
        /* WDGM197: Local status changed? */
        if (current_entity_ptr->EntityStatusGRef->LocalMonitoringStatus != local_status)
        {
          /* #192 Call the state change notification if global supervision status is changed */
          (void) current_entity_ptr->WdgM_LocalStateChangeCbk (local_status); /* SBSW_WDGM_004 */
        }
      }
#endif /* (WDGM_STATE_CHANGE_NOTIFICATION == STD_ON) */

      /* #200 Update the current local supervision status */
      current_entity_ptr->EntityStatusGRef->LocalMonitoringStatus = local_status; /* SBSW_WDGM_009 */
    } /* <- end of: Take into account only SEs running on the current core */
  }
  return;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

#if (WDGM_ENTITY_DEACTIVATION_ENABLED == STD_ON)
/**********************************************************************************************************************
 *  DeactivateEntity()
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
 */
WDGM_LOCAL FUNC(WdgM_LocalStatusType, WDGM_CODE) DeactivateEntity(
  P2CONST(WdgM_SupervisedEntityType, AUTOMATIC, WDGM_APPL_CONST) current_entity_ptr,
  VAR(WdgM_LocalStatusType, AUTOMATIC) local_status,
  VAR(WdgM_SupervisedEntityIdType, AUTOMATIC) SEID,
  P2CONST(WdgM_ConfigType, AUTOMATIC, WDGM_APPL_CONST) wdgm_cfg_ptr
  )
{
  /* ----- Local Variables ---------------------------------------------- */
  VAR(WdgM_StateRequestType, AUTOMATIC) target_entity_state;
  P2CONST(WdgM_CheckPointType, AUTOMATIC, WDGM_APPL_CONST) current_checkpoint_ptr;
  VAR(WdgM_CheckpointIdType, AUTOMATIC) cp_id;

  /* ----- Implementation ----------------------------------------------- */
  /* SE deactivation is possible only in STATUS_OK and STATUS_FAILED */
  /* #10 Check if the local supervision status of the requested supervised entity is either OK or FAILED */
  if ( (local_status == WDGM_LOCAL_STATUS_OK)
    || (local_status == WDGM_LOCAL_STATUS_FAILED)
     )
  {
    /* #20 Read the state change request of the supervised entity from the global shared memory area */
    (void) ReadStateChangeRequest (SEID, &target_entity_state, wdgm_cfg_ptr); /* SBSW_WDGM_005 */ /* SBSW_WDGM_001 */

    /* #30 Check if the supervised entity is marked to become 'deactivated' */
    if (target_entity_state == WDGM_SE_STATE_REQUEST_DEACTIVATE)
    {
      /* #40 Check if the local activity flag is FALSE */
      if (current_entity_ptr->EntityStatusLRef->LocalActivityFlag == FALSE)
      {
        /* #41 Reset all alive supervision values */
        current_entity_ptr->EntityStatusGRef->FailedSupervisionRefCycles = 0u; /* SBSW_WDGM_008 */
        for (cp_id = 0u; cp_id < current_entity_ptr->NrOfCheckpoints; cp_id++)
        {
          current_checkpoint_ptr = &current_entity_ptr->WdgMCheckpointRef[cp_id];

          if (current_checkpoint_ptr->WdgMAliveGRef != NULL_PTR)
          {
            /* Here we assume that both pointers WdgMAlive[X]Ref are either set or NULL */
            current_checkpoint_ptr->WdgMAliveGRef->AliveCounterStamp = /* SBSW_WDGM_010 */
                current_checkpoint_ptr->WdgMAliveLRef->AliveCounter;
            current_checkpoint_ptr->WdgMAliveGRef->SupervisionAliveCounter = 0u; /* SBSW_WDGM_010 */
          }
        }

        /* #42 Reset all deadline supervision values */
        current_entity_ptr->EntityStatusGRef->FailedDeadlineRefCycles = 0u; /* SBSW_WDGM_008 */
        current_entity_ptr->EntityStatusGRef->FailedDeadlineCycCounter = 0u; /* SBSW_WDGM_008 */
        current_entity_ptr->EntityStatusGRef->DeadlineViolationCnt = /* SBSW_WDGM_008 */
            current_entity_ptr->EntityStatusLRef->DeadlineViolationCnt;

        /* #43 Reset all logical supervision values */
        current_entity_ptr->EntityStatusGRef->FailedProgramFlowRefCycles = 0u; /* SBSW_WDGM_008 */
        current_entity_ptr->EntityStatusGRef->FailedProgramFlowCycCounter = 0u; /* SBSW_WDGM_008 */
        current_entity_ptr->EntityStatusGRef->ProgramFlowViolationCnt = /* SBSW_WDGM_008 */
            current_entity_ptr->EntityStatusLRef->ProgramFlowViolationCnt;

        /* #44 Set the temporary status to DEACTIVATED */
        /* WDGM207, SE Deactivation */
        local_status = WDGM_LOCAL_STATUS_DEACTIVATED;

        /* #45 Clear the deactivation state change request for that supervised entity */
        WriteStateChangeRequest (SEID, WDGM_SE_STATE_REQUEST_NONE, wdgm_cfg_ptr); /* SBSW_WDGM_001 */
      }
      else
      {
        /* #50 Raise a Det error if local activity flag is TRUE */
        WDGM_DET_REPORTERROR( WDGM_MODULE_ID,
                              WDGM_VENDOR_ID,
                              API_ID_WdgM_DeactivateSupervisionEntity,
                              WDGM_E_DEACTIVATION
                            );
      }
    }
    else if (target_entity_state == WDGM_SE_STATE_REQUEST_ACTIVATE)
    {
      ;
    }
    else if (target_entity_state == WDGM_SE_STATE_REQUEST_NONE)
    {
      ;
    }
    else
    {
      /* #60 Initiate an immediate reset if the state change request is undefined (global shared memory corrupted) */
      (void) ImmediateWatchdogReset (wdgm_cfg_ptr); /* SBSW_WDGM_001 */
    }
  }

  /* #70 Return the local supervision status */
  return (local_status);
} /* PRQA S 6080 */ /* MD_MSR_STMIF */

/**********************************************************************************************************************
 *  ActivateEntity()
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
 */
WDGM_LOCAL FUNC(WdgM_LocalStatusType, WDGM_CODE) ActivateEntity(
  VAR(WdgM_LocalStatusType, AUTOMATIC) local_status,
  VAR(WdgM_SupervisedEntityIdType, AUTOMATIC) SEID,
  P2CONST(WdgM_ConfigType, AUTOMATIC, WDGM_APPL_CONST) wdgm_cfg_ptr
  )
{
  /* ----- Local Variables ---------------------------------------------- */
  VAR(WdgM_StateRequestType, AUTOMATIC) target_entity_state;

  /* ----- Implementation ----------------------------------------------- */
  /* #10 Check if the local supervision status of the requested supervised entity is DEACTIVATED */
  if (local_status == WDGM_LOCAL_STATUS_DEACTIVATED)
  {
    /* #20 Read the state change request of the supervised entity from the global shared memory area */
    (void) ReadStateChangeRequest (SEID, &target_entity_state, wdgm_cfg_ptr); /* SBSW_WDGM_005 */ /* SBSW_WDGM_001 */

    /* #30 Check if the supervised entity is marked to become 'activated' */
    if (target_entity_state == WDGM_SE_STATE_REQUEST_ACTIVATE)
    {
      /* #31 Set the temporary status to OK */
      /* WDGM209 */
      local_status = WDGM_LOCAL_STATUS_OK;

      /* #32 Clear the activation state change request for that supervised entity */
      WriteStateChangeRequest (SEID, WDGM_SE_STATE_REQUEST_NONE, wdgm_cfg_ptr); /* SBSW_WDGM_001 */
    }
    else if (target_entity_state == WDGM_SE_STATE_REQUEST_DEACTIVATE)
    {
      ;
    }
    else if (target_entity_state == WDGM_SE_STATE_REQUEST_NONE)
    {
      ;
    }
    else
    {
      /* #40 Initiate an immediate reset if the state change request is undefined (global shared memory corrupted) */
      (void) ImmediateWatchdogReset (wdgm_cfg_ptr); /* SBSW_WDGM_001 */
    }
  }

  /* #50 Return the local supervision status */
  return (local_status);
}
#endif /* (WDGM_ENTITY_DEACTIVATION_ENABLED == STD_ON) */

/**********************************************************************************************************************
 *  BuildAliveLocalStatus()
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
 */
WDGM_LOCAL FUNC(WdgM_LocalStatusType, WDGM_CODE) BuildAliveLocalStatus(
  P2CONST(WdgM_SupervisedEntityType, AUTOMATIC, WDGM_APPL_CONST) current_entity_ptr
#if (WDGM_FIRSTCYCLE_ALIVECOUNTER_RESET == STD_ON)
  , P2CONST(WdgM_ConfigType, AUTOMATIC, WDGM_APPL_CONST) wdgm_cfg_ptr
#endif /* (WDGM_FIRSTCYCLE_ALIVECOUNTER_RESET == STD_ON) */
    )
{
  /* ----- Local Variables ---------------------------------------------- */
  VAR(WdgM_AliveCntType, AUTOMATIC) max_count;
  VAR(WdgM_AliveCntType, AUTOMATIC) min_count;
  VAR(WdgM_AliveCntType, AUTOMATIC) alive_indications;
  VAR(WdgM_AliveCntType, AUTOMATIC) alive_counter;
  VAR(WdgM_LocalStatusType, AUTOMATIC) local_status = WDGM_LOCAL_STATUS_OK;
  P2CONST(WdgM_CheckPointType, AUTOMATIC, WDGM_APPL_CONST) current_checkpoint_ptr;
  VAR(WdgM_CheckpointIdType, AUTOMATIC) cp_id;

  /* ----- Implementation ----------------------------------------------- */
  /* #10 Loop over all checkpoints of the given entity */
  for (cp_id = 0u; cp_id < current_entity_ptr->NrOfCheckpoints; cp_id++)
  {
    /* Pointer to CP */
    current_checkpoint_ptr = &current_entity_ptr->WdgMCheckpointRef[cp_id];

    /* #20 Check if alive supervision is configured for the checkpoint */
    if ( current_checkpoint_ptr->WdgMAliveGRef != NULL_PTR)
    {
      /* #30 Check if FIRSTCYCLE_ALIVECOUNTER_RESET is configured */
#if (WDGM_FIRSTCYCLE_ALIVECOUNTER_RESET == STD_ON)
      /* #31 Clear alive counter stamp in the first main function call */
      /* Start to check with the second main function call */
      if (wdgm_cfg_ptr->DataGRef->WdgMMainStarted == FALSE)
      {
        current_checkpoint_ptr->WdgMAliveGRef->AliveCounterStamp = current_checkpoint_ptr->WdgMAliveLRef->AliveCounter; /* SBSW_WDGM_010 */
      }
      else
#endif /* (WDGM_FIRSTCYCLE_ALIVECOUNTER_RESET == STD_ON) */
      {
        /* #40 Check if alive supervision should be performed in this round */
        if ( current_checkpoint_ptr->WdgMSupervisionReferenceCycle
          <= (current_checkpoint_ptr->WdgMAliveGRef->SupervisionAliveCounter + 1u)
           )
        {
          /* WDGM203, WDGM074: Check Configured Margins */
          max_count = current_checkpoint_ptr->WdgMExpectedAliveIndications + current_checkpoint_ptr->WdgMMaxMargin;
          min_count = current_checkpoint_ptr->WdgMExpectedAliveIndications - current_checkpoint_ptr->WdgMMinMargin;

          /* #41 Read the local alive counter in one point of time to stack */
          alive_counter = current_checkpoint_ptr->WdgMAliveLRef->AliveCounter;

          /* #42 Determine the current count of the alive counter since the last alive supervision */
          alive_indications = alive_counter - current_checkpoint_ptr->WdgMAliveGRef->AliveCounterStamp;

          /* #43 Check if the alive indications are within the configured margins */
          if ((min_count > alive_indications) || (max_count < alive_indications))
          {
            /* #44 Set the local supervision status to FAILED if alive indications are out of expected margin */
            local_status = WDGM_LOCAL_STATUS_FAILED;
            /* #45 Update 'Failed' counter if alive indications are out of expected margin */
            current_entity_ptr->EntityStatusGRef->FailedSupervisionRefCycles++; /* SBSW_WDGM_008 */
            /* As here the status for the whole entity is changed
               the Alive Monitoring expect only one Alive counter per entity */
          }
          else
          {
            /* #46 Reset 'Failed' counter if alive indications are within expected margin */
            current_entity_ptr->EntityStatusGRef->FailedSupervisionRefCycles = 0u; /* SBSW_WDGM_008 */
          }
          /* #47 Store the current alive counter value in the global RAM memory (alive counter stamp) */
          current_checkpoint_ptr->WdgMAliveGRef->AliveCounterStamp = alive_counter; /* SBSW_WDGM_010 */

          /* #48 Reset the supervision cycle counter indicating since when alive supervision is not performed */
          current_checkpoint_ptr->WdgMAliveGRef->SupervisionAliveCounter = 0u; /* SBSW_WDGM_010 */
        }
        else
        {
          /* #50 Increment the supervision cycle counter indicating since when alive supervision is not performed */
          current_checkpoint_ptr->WdgMAliveGRef->SupervisionAliveCounter++; /* SBSW_WDGM_010 */

          /* #60 Preserve local supervision status from previous rounds */
          /* Do not overwrite with OK */
          local_status = current_entity_ptr->EntityStatusGRef->LocalMonitoringStatus;
        }
      }
    }
  }

  /* #70 Return the local supervision status */
  return (local_status);
} /* PRQA S 6080 */ /* MD_MSR_STMIF */

/**********************************************************************************************************************
 *  CheckDeadlineHangup()
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
 */
WDGM_LOCAL FUNC(void , WDGM_CODE) CheckDeadlineHangup(
  P2CONST(WdgM_SupervisedEntityType, AUTOMATIC, WDGM_APPL_CONST) current_entity_ptr,
  P2VAR(WdgM_LocalStatusType, AUTOMATIC, WDGM_APPL_DATA) aperiodic_local_status_deadline,
  VAR(WdgM_CheckpointIdType, AUTOMATIC) remembered_checkpoint_id,
  VAR(WdgM_BooleanParamType, AUTOMATIC) local_activity_flag,
  VAR(WdgM_TimeBaseTickType, AUTOMATIC) remembered_checkpoint_time,
  VAR(WdgM_ViolationCntType, AUTOMATIC) deadline_violation_cnt,
  VAR(WdgM_TimeBaseTickType, AUTOMATIC) current_tick_count
#if (WDGM_GLOBAL_TRANSITIONS == STD_ON)
  , P2CONST(WdgM_ConfigType, AUTOMATIC, WDGM_APPL_CONST) wdgm_cfg_ptr
#endif /* WDGM_GLOBAL_TRANSITIONS == STD_ON */
  )
{
  /* ----- Local Variables ---------------------------------------------- */
  VAR(WdgM_TimeBaseTickType, AUTOMATIC) time_diff;
  VAR(WdgM_TimeBaseTickType, AUTOMATIC) outgoing_deadline_max;
#if (WDGM_GLOBAL_TRANSITIONS == STD_ON)
  P2CONST(WdgM_CheckPointType, AUTOMATIC, WDGM_APPL_CONST) remembered_checkpoint_ptr;
  VAR(WdgM_TransitionIdType, AUTOMATIC) g_tr;
  VAR(boolean, AUTOMATIC) g_tr_occurred = FALSE;
  VAR(WdgM_SharedBooleanType, AUTOMATIC) g_tr_flag;
#endif /* WDGM_GLOBAL_TRANSITIONS == STD_ON */

  /* ----- Implementation ----------------------------------------------- */
  /* #10 Check if a deadline violation has been detected and set the deadline status */
  if (current_entity_ptr->EntityStatusGRef->DeadlineViolationCnt == deadline_violation_cnt)
  {
    /* #11 Set the local aperiodical deadline status to OK if no deadline violation has been detected */
    *aperiodic_local_status_deadline = WDGM_LOCAL_STATUS_OK; /* SBSW_WDGM_008 */
  }
  else
  {
    /* #12 Set the local aperiodical deadline status to FAILED if deadline violation has been detected */
    *aperiodic_local_status_deadline = WDGM_LOCAL_STATUS_FAILED; /* SBSW_WDGM_008 */
  }

  /* #20 Check deadline hangup if the remembered checkpoint is a valid one */
  if (remembered_checkpoint_id != WDGM_INVALID_CP_ID)
  {
    /* #30 Check if global transitions are configured */
#if (WDGM_GLOBAL_TRANSITIONS == STD_ON)
    /* #31 Get the pointer to the remembered checkpoint */
    remembered_checkpoint_ptr = &current_entity_ptr->WdgMCheckpointRef[remembered_checkpoint_id];
#endif /* WDGM_GLOBAL_TRANSITIONS == STD_ON */

    /* #40 Check if either the local activity flag is true or in case of global transitions the remembered checkpoint
     *     starts a global transition */
    if (  /* if current entity is running */
         (local_activity_flag == TRUE)
#if (WDGM_GLOBAL_TRANSITIONS == STD_ON)
         /* or in the case that the last check point of this entity has started a global transition */
      || (remembered_checkpoint_ptr->WdgMStartsAGlobalTransition == TRUE)
#endif /* WDGM_GLOBAL_TRANSITIONS == STD_ON */
       )
    {
      /* WDGM231: Check Deadline Monitoring hang-up case when a CP wasn't called.
         Take the time between current and last remembered CP time
         and compare it with max outgoing deadline time of the previous remembered CP */

      /* #41 Get the maximum outgoing deadline of the remembered checkpoint */
      outgoing_deadline_max =
          current_entity_ptr->WdgMCheckpointRef[remembered_checkpoint_id].WdgMOutgoingDeadlineMax;

      /* #42 Check if the outgoing deadline of the remembered checkpoint is not equal to zero and this defined */
      if (outgoing_deadline_max != 0u)
      {
        /* #43 Check if global transitions are configured */
#if (WDGM_GLOBAL_TRANSITIONS == STD_ON)
        /* #44 Find out if a global transition out of the remembered checkpoint has already passed */
        /* Check global transition flag for all outgoing global transitions out of this checkpoint. */
        for (g_tr = 0u; g_tr < remembered_checkpoint_ptr->NrOfStartedGlobalTransitions; g_tr++)
        {
          /* #45 Read the global transition flag for every global transition */
          g_tr_flag = WdgM_ReadGlobalTransitionFlag( remembered_checkpoint_ptr->WdgMStartedGlobalTransitionIds[g_tr], /* SBSW_WDGM_001 */
                                                     FALSE,
                                                     wdgm_cfg_ptr
                                                    );

          /* Info:
           * g_tr_flag == TRUE    Global Transition is active and can be passed
           * g_tr_flag == FALSE   Global Transition is not active or already passed
           */

          if (g_tr_flag == FALSE)
          {
            /* If global transition flag is false then this transition has already occurred! */
            g_tr_occurred = TRUE;
            break;
          }
        }

        /* If remembered checkpoint has started a potential global transitions and
           one of these global transitions has indeed occurred */
        if (g_tr_occurred == TRUE)
        {
          /* do not check local timeout, because a global transition has already occurred */
        }
        else
#endif /* WDGM_GLOBAL_TRANSITIONS == STD_ON */
        /* #46 Check if deadline supervision should be performed in this round */
        if ( (current_entity_ptr->WdgMDeadlineReferenceCycle == 0u)
          || (current_entity_ptr->EntityStatusGRef->FailedDeadlineCycCounter == 0u)
           )
        {
          /* #47 Determine the time between 'now' and last remembered checkpoint time */
          time_diff = current_tick_count - remembered_checkpoint_time;

          if (time_diff > outgoing_deadline_max)
          {
            /* #48 Set the local aperiodical deadline status to FAILED if the time difference is greater than the
             *     configured maximum outgoing deadline of the remembered checkpoint */

            /* The next Checkpoint wasn't called, set local status to FAILED, whether it should move to EXPIRED
             * is checked in the MainFunction. */
            *aperiodic_local_status_deadline = WDGM_LOCAL_STATUS_FAILED; /* SBSW_WDGM_008 */
          }
        }
        else
        {
          /* MISRA rule 14.10 */
        }
      }
    }
  }
  return;
} /* PRQA S 6060, 6080 */ /* MD_MSR_STPAR, MD_MSR_STMIF */

/**********************************************************************************************************************
 *  CheckDeadlineViolation()
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
 */
WDGM_LOCAL FUNC(void, WDGM_CODE) CheckDeadlineViolation(
  P2CONST(WdgM_SupervisedEntityType, AUTOMATIC, WDGM_APPL_CONST) current_entity_ptr,
  P2VAR(WdgM_LocalStatusType, AUTOMATIC, WDGM_APPL_DATA) aperiodic_local_status_deadline,
  VAR(WdgM_ViolationCntType, AUTOMATIC) deadline_violation_cnt
  )
{
  /* ----- Local Variables ---------------------------------------------- */
  VAR(WdgM_LocalStatusType, AUTOMATIC) temp_aperiodic_local_status_deadline;

  /* ----- Implementation ----------------------------------------------- */
  /* #10 Check if at least one deadline violation has been detected during the last supervision cycle */
  if ( (*aperiodic_local_status_deadline == WDGM_LOCAL_STATUS_FAILED)
    || (current_entity_ptr->EntityStatusGRef->FailedDeadlineRefCycles > 0u)
     )
  {
    /* Keep the error status in this reference cycle. */
    temp_aperiodic_local_status_deadline = *aperiodic_local_status_deadline;
    *aperiodic_local_status_deadline = WDGM_LOCAL_STATUS_FAILED; /* SBSW_WDGM_008 */

    /* #20 Check if deadline supervision should be performed in this round */
    if (current_entity_ptr->EntityStatusGRef->FailedDeadlineCycCounter == 0u)
    {
      /* #21 Update 'failed' reference counter (number of reference cycles in which the SE was in state FAILED) */
      current_entity_ptr->EntityStatusGRef->FailedDeadlineRefCycles++; /* SBSW_WDGM_008 */

      /* #22 Check if no deadline violation and no hangup occurred during last supervision reference cycle */
      if ( (current_entity_ptr->EntityStatusGRef->DeadlineViolationCnt == deadline_violation_cnt)
        && (temp_aperiodic_local_status_deadline == WDGM_LOCAL_STATUS_OK)
         )
      {
        /* #23 Reset local aperiodical deadline status */
        *aperiodic_local_status_deadline = WDGM_LOCAL_STATUS_OK; /* SBSW_WDGM_008 */

        /* #24 Reset 'failed' reference counter */
        current_entity_ptr->EntityStatusGRef->FailedDeadlineRefCycles = 0u; /* SBSW_WDGM_008 */
      }
      /* #25 Check if deadline violation or hangup occurred */
      else
      {
        /* #26 Store the number of deadline violations in global RAM memory (deadline violation counter stamp) */
        current_entity_ptr->EntityStatusGRef->DeadlineViolationCnt = deadline_violation_cnt; /* SBSW_WDGM_008 */
      }
    }

    /* #30 Determine if deadline supervision should be performed in the next supervision cycle */
    if ( current_entity_ptr->WdgMDeadlineReferenceCycle <=
         ( current_entity_ptr->EntityStatusGRef->FailedDeadlineCycCounter + 1u )
       )
    {
      /* #31 Reset the deadline supervision cycle counter */
      /* Indicates that deadline supervision should be performed in the next supervision cycle */
      current_entity_ptr->EntityStatusGRef->FailedDeadlineCycCounter = 0u; /* SBSW_WDGM_008 */
    }
    else
    {
      /* #32 Update the deadline supervision cycle counter */
      /* Indicates that no deadline supervision should be performed in the next supervision cycle */
      current_entity_ptr->EntityStatusGRef->FailedDeadlineCycCounter++; /* SBSW_WDGM_008 */
    }
  }
  return;
}

/**********************************************************************************************************************
 *  CheckProgramFlowViolation()
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
 */
WDGM_LOCAL FUNC(void, WDGM_CODE) CheckProgramFlowViolation(
  P2CONST(WdgM_SupervisedEntityType, AUTOMATIC, WDGM_APPL_CONST) current_entity_ptr,
  P2VAR(WdgM_LocalStatusType, AUTOMATIC, WDGM_APPL_DATA) aperiodic_local_status_programflow,
  VAR(WdgM_ViolationCntType, AUTOMATIC) program_flow_violation_cnt
  )
{
  /* ----- Implementation ----------------------------------------------- */
  /* #10 Check if program flow violation has been detected during the last supervision cycle */
  if ( current_entity_ptr->EntityStatusGRef->ProgramFlowViolationCnt == program_flow_violation_cnt )
  {
    /* #11 Set the local aperiodical program flow status to OK if no program flow violation has been detected */
    *aperiodic_local_status_programflow = WDGM_LOCAL_STATUS_OK; /* SBSW_WDGM_008 */
  }
  else
  {
    /* #12 Set the local aperiodical program flow status to FAILED if program flow violation has been detected */
    *aperiodic_local_status_programflow = WDGM_LOCAL_STATUS_FAILED; /* SBSW_WDGM_008 */
  }

  /* #20 Check if a violation has been detected or if the aperiodical program flow status was already FAILED */
  if ( (*aperiodic_local_status_programflow == WDGM_LOCAL_STATUS_FAILED)
    || (current_entity_ptr->EntityStatusGRef->FailedProgramFlowRefCycles > 0u)
     )
  {
    /* #21 Set the local aperiodical program flow status to FAILED */
    *aperiodic_local_status_programflow = WDGM_LOCAL_STATUS_FAILED; /* SBSW_WDGM_008 */

    /* #22 Check if program flow supervision should be performed in this round */
    if (current_entity_ptr->EntityStatusGRef->FailedProgramFlowCycCounter == 0u)
    {
      /* #23 Update 'failed' reference counter (number of reference cycles in which the SE was in state FAILED) */
      current_entity_ptr->EntityStatusGRef->FailedProgramFlowRefCycles++; /* SBSW_WDGM_008 */

      /* #24 Check if no program flow violation occurred during last supervision reference cycle */
      if (current_entity_ptr->EntityStatusGRef->ProgramFlowViolationCnt == program_flow_violation_cnt)
      {
        /* #25 Reset local aperiodical program flow status  */
        *aperiodic_local_status_programflow = WDGM_LOCAL_STATUS_OK; /* SBSW_WDGM_008 */

        /* #26 Reset 'failed' reference counter */
        current_entity_ptr->EntityStatusGRef->FailedProgramFlowRefCycles = 0u; /* SBSW_WDGM_008 */
      }
      /* #27 Check if program flow violation occurred */
      else
      {
        /* #28 Store the number of program flow violations in global RAM memory (deadline violation counter stamp) */
        current_entity_ptr->EntityStatusGRef->ProgramFlowViolationCnt = program_flow_violation_cnt; /* SBSW_WDGM_008 */
      }
    }

    /* #30 Determine if program flow supervision should be performed in the next supervision cycle */
    if ( current_entity_ptr->WdgMProgramFlowReferenceCycle
      <= (current_entity_ptr->EntityStatusGRef->FailedProgramFlowCycCounter + 1u)
       )
    {
      /* #31 Reset the program flow supervision cycle counter */
      /* Indicates that program flow supervision should be performed in the next supervision cycle */
      current_entity_ptr->EntityStatusGRef->FailedProgramFlowCycCounter = 0u; /* SBSW_WDGM_008 */
    }
    else
    {
      /* #32 Update the program flow supervision cycle counter */
      /* Indicates that no program flow supervision should be performed in the next supervision cycle */
      current_entity_ptr->EntityStatusGRef->FailedProgramFlowCycCounter++; /* SBSW_WDGM_008 */
    }
  }
  return;
}

/**********************************************************************************************************************
 *  WdgM_SetTickCount()
 *********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 */
WDGM_LOCAL FUNC(void, WDGM_CODE) WdgM_SetTickCount(
  VAR(WdgM_TimeBaseTickType, AUTOMATIC) time_base_tick,
  P2CONST(WdgM_ConfigType, AUTOMATIC, WDGM_APPL_CONST) wdgm_cfg_ptr
  )
{
  /* ----- Implementation ----------------------------------------------- */
  /* #10 Set the timebase tick counter to the given value */
  wdgm_cfg_ptr->WdgMGlobalVariables->g_WdgMTickCount = time_base_tick; /* SBSW_WDGM_002 */
  return;
}

#if (WDGM_TIMEBASE_SOURCE == WDGM_INTERNAL_SOFTWARE_TICK) /* COV_WDGM_TIMEBASE_INTERNAL_HARDWARE_TICK_NOT_SUPPORTED */
/**********************************************************************************************************************
 *  WdgM_UpdateTickCount()
 *********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 */
WDGM_LOCAL FUNC(void, WDGM_CODE) WdgM_UpdateTickCount(
  P2CONST(WdgM_ConfigType, AUTOMATIC, WDGM_APPL_CONST) wdgm_cfg_ptr
  )
{
  /* #10 Increment the current timebase tick counter value */
  wdgm_cfg_ptr->WdgMGlobalVariables->g_WdgMTickCount++; /* SBSW_WDGM_002 */

  return;
} /* PRQA S 2006 */ /* MD_MSR_14.7 */
#endif /* (WDGM_TIMEBASE_SOURCE == WDGM_INTERNAL_SOFTWARE_TICK) */

/**********************************************************************************************************************
 *  GLOBAL FUNCTIONS
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  WdgM_Init()
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
FUNC(void, WDGM_CODE) WdgM_Init(P2CONST(WdgM_ConfigType, AUTOMATIC, WDGM_APPL_CONST) WdgMConfigPtr)
{
  /* ----- Local Variables ---------------------------------------------- */
  VAR(Std_ReturnType, AUTOMATIC) ret;
  VAR(WdgM_WatchdogIdType, AUTOMATIC) wdg_dev;
  VAR(WdgM_SupervisedEntityIdType, AUTOMATIC) nr_of_entities;
  VAR(WdgM_SupervisedEntityIdType, AUTOMATIC) entity_id;
  P2CONST(WdgM_WatchdogDeviceType, AUTOMATIC, WDGM_APPL_CONST) device_ptr;
  P2CONST(WdgM_SupervisedEntityType, AUTOMATIC, WDGM_APPL_CONST) current_entity_ptr;
#if (WDGM_GLOBAL_TRANSITIONS == STD_ON)
  VAR(WdgM_TransitionIdType, AUTOMATIC) g_tr;
#endif /* (WDGM_GLOBAL_TRANSITIONS == STD_ON) */
#if (WDGM_OFF_MODE_ENABLED == STD_OFF)
  VAR(WdgM_TriggerModeIdType, AUTOMATIC) trg_mode;
#endif /* (WDGM_OFF_MODE_ENABLED == STD_OFF) */
  VAR (WdgM_TriggerModeIdType, AUTOMATIC) trg_mode_init;
#if (WDGM_MULTICORE_USAGE == STD_ON)
  VAR(WdgM_CoreIdType, AUTOMATIC) core_id;
#endif /* (WDGM_MULTICORE_USAGE == STD_ON) */

  /* ----- Development Error Checks ------------------------------------- */
#if (WDGM_MULTICORE_USAGE == STD_ON)
  /* #10 Check if WdgM is configured to run on the current core */
  core_id = WDGM_GET_CORE_ID ();
  if ( (core_id >= WDGM_MAX_SUPPORTED_CORES)
    || (g_wdgm_cfg_ptr_array[core_id] == NULL_PTR)
     )
  {
    WDGM_DET_REPORTERROR( WDGM_MODULE_ID,
                          WDGM_VENDOR_ID,
                          API_ID_WdgM_Init,
                          WDGM_E_WRONG_PROCESSOR_CORE
                        );
    return;
  }
#endif /* (WDGM_MULTICORE_USAGE == STD_ON) */

  /* #20 Check the WdgM Configuration */
  /* #21 Check the ConfigPointer for being a NULL_PTR */
  /* WDGM255: the configuration NULL_PTR pointer check */
  if (WdgMConfigPtr == NULL_PTR)
  {
    WDGM_DET_REPORTERROR( WDGM_MODULE_ID,
                          WDGM_VENDOR_ID,
                          API_ID_WdgM_Init,
                          WDGM_E_NULL_POINTER
                        );

    /* Set the global config pointer */
#if (WDGM_MULTICORE_USAGE == STD_ON)
    *g_wdgm_cfg_ptr_array[core_id] = NULL_PTR; /* SBSW_WDGM_014 */
#else
    g_wdgm_cfg_ptr = NULL_PTR;
#endif /* (WDGM_MULTICORE_USAGE == STD_ON) */

    return;
  }

  /* #22 Check the WdgM Configuration version */
  if ( (WdgMConfigPtr->WdgMConfigMajorVersion != WDGM_SW_MAJOR_VERSION_SOURCE)
    || (WdgMConfigPtr->WdgMConfigMinorVersion != WDGM_SW_MINOR_VERSION_SOURCE)
     )
  {
    WDGM_DET_REPORTERROR( WDGM_MODULE_ID,
                          WDGM_VENDOR_ID,
                          API_ID_WdgM_Init,
                          WDGM_E_PARAM_CONFIG
                        );

    /* Set the global config pointer */
#if (WDGM_MULTICORE_USAGE == STD_ON)
    *g_wdgm_cfg_ptr_array[core_id] = NULL_PTR; /* SBSW_WDGM_014 */
#else
    g_wdgm_cfg_ptr = NULL_PTR;
#endif /* (WDGM_MULTICORE_USAGE == STD_ON) */

    return;
  }

  /* #23 Check the WdgM Configuration Checksum */
  ret = Init_CheckConfigChecksum (WdgMConfigPtr); /* SBSW_WDGM_001 */
  if (ret != E_OK)
  {
    WDGM_DET_REPORTERROR( WDGM_MODULE_ID,
                          WDGM_VENDOR_ID,
                          API_ID_WdgM_Init,
                          WDGM_E_PARAM_CONFIG
                        );

    /* Set the global config pointer */
#if (WDGM_MULTICORE_USAGE == STD_ON)
    *g_wdgm_cfg_ptr_array[core_id] = NULL_PTR; /* SBSW_WDGM_014 */
#else
    g_wdgm_cfg_ptr = NULL_PTR;
#endif /* (WDGM_MULTICORE_USAGE == STD_ON) */

    return;
  }

  /* #24 Check the number of configured Entities */
  if (WdgMConfigPtr->NrOfSupervisedEntities == 0u)
  {
    /* WDGM004 */
    WDGM_DET_REPORTERROR( WDGM_MODULE_ID,
                          WDGM_VENDOR_ID,
                          API_ID_WdgM_Init,
                          WDGM_E_PARAM_SEID
                        );

    /* Set the global config pointer */
#if (WDGM_MULTICORE_USAGE == STD_ON)
    *g_wdgm_cfg_ptr_array[core_id] = NULL_PTR; /* SBSW_WDGM_014 */
#else
    g_wdgm_cfg_ptr = NULL_PTR;
#endif /* (WDGM_MULTICORE_USAGE == STD_ON) */

    return;
  }

  /* #25 Check the watchdog device(s) / trigger mode setup */
  if (WdgMConfigPtr->NrOfTriggerModes <= WdgMConfigPtr->WdgMInitialTriggerModeId)
  {
    WDGM_DET_REPORTERROR( WDGM_MODULE_ID,
                          WDGM_VENDOR_ID,
                          API_ID_WdgM_Init,
                          WDGM_E_PARAM_CONFIG
                        );

    /* Set the global config pointer */
#if (WDGM_MULTICORE_USAGE == STD_ON)
    *g_wdgm_cfg_ptr_array[core_id] = NULL_PTR; /* SBSW_WDGM_014 */
#else
    g_wdgm_cfg_ptr = NULL_PTR;
#endif /* (WDGM_MULTICORE_USAGE == STD_ON) */

    return;
  }

  /* #26 Check the core id from caller context for being the configured one */
#if (WDGM_MULTICORE_USAGE == STD_ON)
  /* Initialize only if the configuration core assignment matches the current processor core */
  if (WdgMConfigPtr->WdgMModeCoreAssignment != core_id)
  {
    WDGM_DET_REPORTERROR( WDGM_MODULE_ID,
                          WDGM_VENDOR_ID,
                          API_ID_WdgM_Init,
                          WDGM_E_WRONG_PROCESSOR_CORE
                        );

    *g_wdgm_cfg_ptr_array[core_id] = NULL_PTR; /* SBSW_WDGM_014 */

    return;
  }
#endif /* (WDGM_MULTICORE_USAGE == STD_ON) */

  /* ----- Implementation ----------------------------------------------- */
  /* #30 Initialize the trigger modes of all watchdog devices */
  trg_mode_init = WdgMConfigPtr->WdgMInitialTriggerModeId;
  WdgMConfigPtr->DataGRef->TriggerModeId = trg_mode_init; /* SBSW_WDGM_002 */
  WdgMConfigPtr->DataGRef->PreviousTriggerModeId = trg_mode_init; /* SBSW_WDGM_002 */

  for (wdg_dev = 0u; wdg_dev < WdgMConfigPtr->NrOfWatchdogDevices; wdg_dev++)
  {
    device_ptr = &WdgMConfigPtr->WdgMWatchdogDeviceRef[wdg_dev];
    /* WDGM139 */
    /* #31 Set the WdgIf Initial mode */
    ret = WdgIf_SetMode( device_ptr->WdgMTriggerModeRef[trg_mode_init].WdgMDeviceIndex,
                         device_ptr->WdgMTriggerModeRef[trg_mode_init].WdgMWatchdogMode
                       );
    if (ret == E_NOT_OK)
    {
      WdgMConfigPtr->DataGRef->GlobalMonitoringStatus = WDGM_GLOBAL_STATUS_STOPPED; /* SBSW_WDGM_002 */
      WDGM_DET_REPORTERROR( WDGM_MODULE_ID,
                            WDGM_VENDOR_ID,
                            API_ID_WdgM_Init,
                            WDGM_E_WDGIF_MODE
                          );

      /* Set the global config pointer */
#if (WDGM_MULTICORE_USAGE == STD_ON)
      *g_wdgm_cfg_ptr_array[core_id] = NULL_PTR; /* SBSW_WDGM_014 */
#else
      g_wdgm_cfg_ptr = NULL_PTR;
#endif /* (WDGM_MULTICORE_USAGE == STD_ON) */

      return;
    }

#if (WDGM_OFF_MODE_ENABLED == STD_OFF)
    /* WDGM030: WDGM_OFF_MODE_ENABLED disabled?
       The WdgM can have different Trigger Modes for each watchdog defined,
       see the WdgM_TriggerModeType structure.
       The WdgM checks the Trigger Mode only, not the WdgM general Mode.
       The WDGIF_OFF_MODE can be allowed/disallowed for the all Wdg drivers only.   */
    /* #32 Check if a erroneous WDGIF_OFF_MODE is configured */
    for (trg_mode = 0u; trg_mode < WdgMConfigPtr->NrOfTriggerModes; trg_mode++)
    {
      if (device_ptr->WdgMTriggerModeRef[trg_mode].WdgMWatchdogMode == WDGIF_OFF_MODE)
      {
        WDGM_DET_REPORTERROR( WDGM_MODULE_ID,
                              WDGM_VENDOR_ID,
                              API_ID_WdgM_Init,
                              WDGM_E_DISABLE_NOT_ALLOWED
                            );

        /* Set the global config pointer */
# if (WDGM_MULTICORE_USAGE == STD_ON)
        *g_wdgm_cfg_ptr_array[core_id] = NULL_PTR; /* SBSW_WDGM_014 */
# else
        g_wdgm_cfg_ptr = NULL_PTR;
# endif /* (WDGM_MULTICORE_USAGE == STD_ON) */

        return;
      }
    }
#endif /* (WDGM_OFF_MODE_ENABLED == STD_OFF) */
  }

  /* ----------------------------------------------------------------------------*/
  /* After basic configuration checks the memory/variable initialization follows */
  /* ----------------------------------------------------------------------------*/

  /* #40 Initialize all supervised entities running on the current core separately */

  /* Get the Number Of Supervised Entities */
  nr_of_entities = WdgMConfigPtr->NrOfSupervisedEntities;

  /* For all configured Entities */
  for (entity_id = 0u; entity_id < nr_of_entities; entity_id++)
  {
    current_entity_ptr = &WdgMConfigPtr->WdgMSupervisedEntityRef[entity_id];

    /* #41 Check if at least one checkpoint is defined for each supervised entity */
    if (current_entity_ptr->NrOfCheckpoints == 0u)
    {
      /* WDGM004: There is no Checkpoint for current Entity defined */
      WDGM_DET_REPORTERROR( WDGM_MODULE_ID,
                            WDGM_VENDOR_ID,
                            API_ID_WdgM_Init,
                            WDGM_E_CPID
                          );

      /* Set the global config pointer */
#if (WDGM_MULTICORE_USAGE == STD_ON)
      *g_wdgm_cfg_ptr_array[core_id] = NULL_PTR; /* SBSW_WDGM_014 */
#else
      g_wdgm_cfg_ptr = NULL_PTR;
#endif /* (WDGM_MULTICORE_USAGE == STD_ON) */

      return;
    }

#if (WDGM_MULTICORE_USAGE == STD_ON)
    /* Initialize only SEs running on the current core */
    if (current_entity_ptr->WdgMEntityCoreId == WdgMConfigPtr->WdgMModeCoreAssignment)
#endif /* (WDGM_MULTICORE_USAGE == STD_ON) */
    {
      /* Initialize each Supervised Entity separately */
      /* #42 Initialize local memory of a supervised entity */
      Init_EntityMemoryL (current_entity_ptr); /* SBSW_WDGM_007 */
      /* #43 Initialize global and shared memory of a supervised entity */
      Init_EntityMemoryG (current_entity_ptr /* SBSW_WDGM_007 */
#if (WDGM_ENTITY_DEACTIVATION_ENABLED == STD_ON)
                         , entity_id,
                         WdgMConfigPtr
#endif /* (WDGM_ENTITY_DEACTIVATION_ENABLED == STD_ON) */
                         );
    }
  }

  /* #50 Initialize the timebase tick counter */
  WdgM_SetTickCount (WDGM_INITIAL_TICK_COUNT, WdgMConfigPtr); /* SBSW_WDGM_001 */
#if (WDGM_TIMEBASE_SOURCE == WDGM_EXTERNAL_TICK)
# if (WDGM_TICK_OVERRUN_CORRECTION == STD_ON)
  WdgMConfigPtr->WdgMGlobalVariables->g_WdgMTickCountOverrun = FALSE; /* SBSW_WDGM_002 */
# endif /* (WDGM_TICK_OVERRUN_CORRECTION == STD_ON) */
#endif /* (WDGM_TIMEBASE_SOURCE == WDGM_EXTERNAL_TICK) */

#if (WDGM_GLOBAL_TRANSITIONS == STD_ON)
  /* #60 Initialize all global transitions running on the current core */
  for (g_tr = 0u; g_tr < WdgMConfigPtr->NrOfGlobalTransitions; g_tr++)
  {
# if (WDGM_MULTICORE_USAGE == STD_ON)
    if (WdgMConfigPtr->WdgMGlobalTransitions != NULL_PTR)
    {
      /* Initialize only those global transitions that will be running on the same core */
      if ( WdgMConfigPtr->WdgMSupervisedEntityRef
             [WdgMConfigPtr->WdgMGlobalTransitions[g_tr].EntitySourceId].WdgMEntityCoreId
        == WdgMConfigPtr->WdgMModeCoreAssignment
         )
# endif /* (WDGM_MULTICORE_USAGE == STD_ON) */
      {
        WdgM_WriteGlobalTransitionFlag (g_tr, FALSE, WdgMConfigPtr); /* SBSW_WDGM_001 */
      }
# if (WDGM_MULTICORE_USAGE == STD_ON)
    }
# endif /* (WDGM_MULTICORE_USAGE == STD_ON) */
  }
#endif /* (WDGM_GLOBAL_TRANSITIONS == STD_ON) */

  /* #70 Enter section with disabled interrupts */
  /* #80 Initialize all global and global shared data */
  WdgM_GlobalSuspendInterrupts();
#if (WDGM_GLOBAL_TRANSITIONS == STD_ON)
  /* #81 Initialize the global activity flag */
  WdgM_WriteGlobalActivityFlag (FALSE, WdgMConfigPtr); /* SBSW_WDGM_001 */
#endif /* (WDGM_GLOBAL_TRANSITIONS == STD_ON) */

  /* #82 Set internal failure flag to OK */
  WdgMConfigPtr->DataGSRef->InternalFailureFlag = WDGM_INTERNAL_CP_TEST_OK; /* SBSW_WDGM_002 */
  /* #83 Leave section with disabled interrupts */
  WdgM_GlobalRestoreInterrupts();

  /* #84 Initialize the timebase tick counter timestamp */
  WdgMConfigPtr->DataGRef->PreviousTickCounter = 0u; /* SBSW_WDGM_002 */

  /* #85 Set global supervision status to OK */
  WdgMConfigPtr->DataGRef->GlobalMonitoringStatus = WDGM_GLOBAL_STATUS_OK; /* SBSW_WDGM_002 */

  /* #86 Set the expired cycle counter to 0 */
  WdgMConfigPtr->DataGRef->ExpiredCycleCounter = 0u; /* SBSW_WDGM_002 */

  /* #87 Main function has not been started yet. */
  WdgMConfigPtr->DataGRef->WdgMMainStarted = FALSE; /* SBSW_WDGM_002 */

  /* #90 Set the global ConfigPointer */
#if (WDGM_MULTICORE_USAGE == STD_ON)
  *g_wdgm_cfg_ptr_array[core_id] = WdgMConfigPtr; /* SBSW_WDGM_014 */
#else
  g_wdgm_cfg_ptr = WdgMConfigPtr;
#endif /* (WDGM_MULTICORE_USAGE == STD_ON) */

  /* #100 Set the MainFunctionActive flag to FALSE */
  WdgMConfigPtr->WdgMGlobalVariables->g_WdgMMainFunctionActive = FALSE; /* SBSW_WDGM_002 */
} /* PRQA S 6010, 6030, 6050, 2006 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_14.7 */

/**********************************************************************************************************************
 *  WdgM_GetLocalStatus()
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
 */
FUNC(Std_ReturnType, WDGM_CODE) WdgM_GetLocalStatus(
  VAR(WdgM_SupervisedEntityIdType, AUTOMATIC) SEID,
  P2VAR(WdgM_LocalStatusType, AUTOMATIC, WDGM_APPL_DATA) EntityStatus
  )
{
  /* ----- Local Variables ---------------------------------------------- */
  VAR(Std_ReturnType, AUTOMATIC) res;
  P2CONST(WdgM_ConfigType, AUTOMATIC, WDGM_APPL_CONST) wdgm_cfg_ptr;
#if (WDGM_MULTICORE_USAGE == STD_ON)
  VAR(WdgM_CoreIdType, AUTOMATIC) core_id;
#endif /* (WDGM_MULTICORE_USAGE == STD_ON) */

  /* ----- Development Error Checks ------------------------------------- */
  /* #10 Check if multi-core is used */
#if (WDGM_MULTICORE_USAGE == STD_ON)
  /* #11 Check if the id of the current supervised entity is inside of the configured border (multi-core) */
  if (WdgMNrOfSupervisedEntities <= SEID)
  {
    /* WDGM004 */
    /* WDGM172 */
    WDGM_DET_REPORTERROR( WDGM_MODULE_ID,
                          WDGM_VENDOR_ID,
                          API_ID_WdgM_GetLocalStatus,
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
    /* This function is called on a processor core that has not been configured to be used with the WdgM. */
    WDGM_DET_REPORTERROR( WDGM_MODULE_ID,
                          WDGM_VENDOR_ID,
                          API_ID_WdgM_GetLocalStatus,
                          WDGM_E_WRONG_PROCESSOR_CORE
                        );
    return E_NOT_OK;
  }

  /* #20 Get the global config pointer */
  wdgm_cfg_ptr = *g_wdgm_cfg_ptr_array[core_id]; /* SBSW_WDGM_014 */
#else
  wdgm_cfg_ptr = g_wdgm_cfg_ptr;
#endif /* (WDGM_MULTICORE_USAGE == STD_ON) */

  /* #30 Check if WdgM is initialized */
  /* WDGM173 */
  if (wdgm_cfg_ptr == NULL_PTR)
  {
    /* WDGM004 */
    WDGM_DET_REPORTERROR( WDGM_MODULE_ID,
                          WDGM_VENDOR_ID,
                          API_ID_WdgM_GetLocalStatus,
                          WDGM_E_NO_INIT
                        );
    res = E_NOT_OK;
  }
#if (WDGM_MULTICORE_USAGE != STD_ON)
  /* #40 Check if the id of the current supervised entity is inside of the configured border (single-core) */
  else if (wdgm_cfg_ptr->NrOfSupervisedEntities <= SEID)
  {
    /* WDGM004 */
    /* WDGM172 */
    WDGM_DET_REPORTERROR( WDGM_MODULE_ID,
                          WDGM_VENDOR_ID,
                          API_ID_WdgM_GetLocalStatus,
                          WDGM_E_PARAM_SEID
                        );
    res = E_NOT_OK;
  }
#endif /* (WDGM_MULTICORE_USAGE != STD_ON) */
  /* #50 Check if out parameter is a NULL_PTR */
  else if (EntityStatus == NULL_PTR)
  {
    /* WDGM257 */
    WDGM_DET_REPORTERROR( WDGM_MODULE_ID,
                          WDGM_VENDOR_ID,
                          API_ID_WdgM_GetLocalStatus,
                          WDGM_E_NULL_POINTER
                        );
    res = E_NOT_OK;
  }
  else
  {
    /* ----- Implementation ----------------------------------------------- */
    /* #60 Store the current local supervision status of the requested supervised entity in the out parameter */
    *EntityStatus = wdgm_cfg_ptr->WdgMSupervisedEntityRef[SEID].EntityStatusGRef->LocalMonitoringStatus; /* SBSW_WDGM_003 */
    res = E_OK;
  }

  /* #70 Return the result of the service */
  return (res);
} /* PRQA S 2006 */ /* MD_MSR_14.7 */

/**********************************************************************************************************************
 *  WdgM_GetGlobalStatus()
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
 */
FUNC(Std_ReturnType, WDGM_CODE) WdgM_GetGlobalStatus(P2VAR(WdgM_GlobalStatusType, AUTOMATIC, WDGM_APPL_DATA) Status)
{
  /* ----- Local Variables ---------------------------------------------- */
  VAR(Std_ReturnType, AUTOMATIC) res;
  P2CONST (WdgM_ConfigType, AUTOMATIC, WDGM_APPL_CONST) wdgm_cfg_ptr;
#if (WDGM_MULTICORE_USAGE == STD_ON)
  VAR(WdgM_CoreIdType, AUTOMATIC) core_id;
#endif /* (WDGM_MULTICORE_USAGE == STD_ON) */

  /* ----- Development Error Checks ------------------------------------- */
  /* #10 Check if multi-core is used */
#if (WDGM_MULTICORE_USAGE == STD_ON)
  /* #11 Get the current core id */
  core_id = WDGM_GET_CORE_ID ();

  /* #12 Check if WdgM is configured to run on the current core */
  if ( (core_id >= WDGM_MAX_SUPPORTED_CORES)
    || (g_wdgm_cfg_ptr_array[core_id] == NULL_PTR)
     )
  {
    /* This function is called on a processor core that has not been configured to be used with the WdgM. */
    WDGM_DET_REPORTERROR( WDGM_MODULE_ID,
                          WDGM_VENDOR_ID,
                          API_ID_WdgM_GetGlobalStatus,
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
  /* WDGM176 */
  if (wdgm_cfg_ptr == NULL_PTR)
  {
    /* WDGM004 */
    WDGM_DET_REPORTERROR( WDGM_MODULE_ID,
                          WDGM_VENDOR_ID,
                          API_ID_WdgM_GetGlobalStatus,
                          WDGM_E_NO_INIT
                        );
    res = E_NOT_OK;
  }
  /* #40 Check if out parameter is a NULL_PTR */
  else if (Status == NULL_PTR)     /* WDGM258 */
  {
    WDGM_DET_REPORTERROR( WDGM_MODULE_ID,
                          WDGM_VENDOR_ID,
                          API_ID_WdgM_GetGlobalStatus,
                          WDGM_E_NULL_POINTER
                        );
    res = E_NOT_OK;
  }
  else
  {
    /* ----- Implementation ----------------------------------------------- */
    /* #50 Store the current global supervision status in the memory cell referenced by the out parameter */
    *Status = wdgm_cfg_ptr->DataGRef->GlobalMonitoringStatus; /* SBSW_WDGM_003 */
    res = E_OK;
  }

  /* #60 Return the result of the service */
  return (res);
} /* PRQA S 2006 */ /* MD_MSR_14.7 */

/**********************************************************************************************************************
 *  WdgM_GetMode()
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
 */
FUNC(Std_ReturnType, WDGM_CODE) WdgM_GetMode(P2VAR(WdgM_ModeType, AUTOMATIC, WDGM_APPL_DATA) Mode)
{
  /* ----- Local Variables ---------------------------------------------- */
  VAR(Std_ReturnType, AUTOMATIC) res;
  P2CONST(WdgM_ConfigType, AUTOMATIC, WDGM_APPL_CONST) wdgm_cfg_ptr;
#if (WDGM_MULTICORE_USAGE == STD_ON)
  VAR(WdgM_CoreIdType, AUTOMATIC) core_id;
#endif /* (WDGM_MULTICORE_USAGE == STD_ON) */

  /* ----- Development Error Checks ------------------------------------- */
  /* #10 Check if multi-core is used */
#if (WDGM_MULTICORE_USAGE == STD_ON)
  core_id = WDGM_GET_CORE_ID ();

  /* #11 Check if WdgM is configured to run on the current core */
  if ( (core_id >= WDGM_MAX_SUPPORTED_CORES)
    || (g_wdgm_cfg_ptr_array[core_id] == NULL_PTR)
     )
  {
    /* This function is called on a processor core that has not been configured to be used with the WdgM. */
    WDGM_DET_REPORTERROR( WDGM_MODULE_ID,
                          WDGM_VENDOR_ID,
                          API_ID_WdgM_GetMode,
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
  /* WDGM253 */
  if (wdgm_cfg_ptr == NULL_PTR)
  {
    /* WDGM004 */
    WDGM_DET_REPORTERROR( WDGM_MODULE_ID,
                          WDGM_VENDOR_ID,
                          API_ID_WdgM_GetMode,
                          WDGM_E_NO_INIT
                        );
    res = E_NOT_OK;
  }
  /* #40 Check if out parameter is a NULL_PTR */
  else if (Mode == NULL_PTR)
  {
    /* WDGM254 */
    WDGM_DET_REPORTERROR( WDGM_MODULE_ID,
                          WDGM_VENDOR_ID,
                          API_ID_WdgM_GetMode,
                          WDGM_E_NULL_POINTER
                        );
    res = E_NOT_OK;
  }
  else
  {
    /* ----- Implementation ----------------------------------------------- */
    /* #50 Store the current trigger mode in the memory cell referenced by the out parameter */
    *Mode = (WdgM_ModeType) wdgm_cfg_ptr->DataGRef->TriggerModeId; /* SBSW_WDGM_003 */
    res = E_OK;
  }

  /* #60 Return the result of the service */
  return (res);
} /* PRQA S 2006 */ /* MD_MSR_14.7 */

/**********************************************************************************************************************
 *  WdgM_SetMode()
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
 */
#if (WDGM_AUTOSAR_3_1_X_COMPATIBILITY == STD_ON) /* COV_WDGM_AUTOSAR3_1_INCOMPATIBILITY */
FUNC(Std_ReturnType, WDGM_CODE) WdgM_SetMode(VAR(WdgM_ModeType, AUTOMATIC) Mode)
#else
FUNC(Std_ReturnType, WDGM_CODE) WdgM_SetMode(VAR(WdgM_ModeType, AUTOMATIC) Mode, VAR(uint16, AUTOMATIC) CallerID)
#endif /* (WDGM_AUTOSAR_3_1_X_COMPATIBILITY == STD_ON) */
{
  /* ----- Local Variables ---------------------------------------------- */
  VAR(Std_ReturnType, AUTOMATIC) res;
#if (WDGM_DEFENSIVE_BEHAVIOR == STD_ON)
  VAR(WdgM_CallerIdType, AUTOMATIC) i;
#endif /* (WDGM_DEFENSIVE_BEHAVIOR == STD_ON) */
#if (WDGM_AUTOSAR_3_1_X_COMPATIBILITY == STD_ON) /* COV_WDGM_AUTOSAR3_1_INCOMPATIBILITY */
  VAR(uint16, AUTOMATIC) CallerID = 0u;
#endif /* (WDGM_AUTOSAR_3_1_X_COMPATIBILITY == STD_ON) */
  P2CONST(WdgM_ConfigType, AUTOMATIC, WDGM_APPL_CONST) wdgm_cfg_ptr;
#if (WDGM_MULTICORE_USAGE == STD_ON)
  VAR(WdgM_CoreIdType, AUTOMATIC) core_id;
#endif /* (WDGM_MULTICORE_USAGE == STD_ON) */

  /* ----- Development Error Checks ------------------------------------- */
  /* #10 Check if multi-core is used */
#if (WDGM_MULTICORE_USAGE == STD_ON)
  /* #11 Get the current core id */
  core_id = WDGM_GET_CORE_ID ();

  /* #12 Check if WdgM is configured to run on the current core */
  if ( (core_id >= WDGM_MAX_SUPPORTED_CORES)
    || (g_wdgm_cfg_ptr_array[core_id] == NULL_PTR)
     )
  {
    /* This function is called on a processor core that has not been configured to be used with the WdgM. */
    WDGM_DET_REPORTERROR( WDGM_MODULE_ID,
                          WDGM_VENDOR_ID,
                          API_ID_WdgM_SetMode,
                          WDGM_E_WRONG_PROCESSOR_CORE
                        );
    return E_NOT_OK;
  }

  /* #20 Get the global config pointer */
  wdgm_cfg_ptr = *g_wdgm_cfg_ptr_array[core_id];
#else
  wdgm_cfg_ptr = g_wdgm_cfg_ptr;
#endif /* (WDGM_MULTICORE_USAGE == STD_ON) */

  res = E_NOT_OK;

  /* #30 Check if WdgM is initialized */
  /* WDGM021 */
  if (wdgm_cfg_ptr == NULL_PTR)
  {
    /* WDGM004 */
    WDGM_DET_REPORTERROR( WDGM_MODULE_ID,
                          WDGM_VENDOR_ID,
                          API_ID_WdgM_SetMode,
                          WDGM_E_NO_INIT
                        );
    return (res);
  }

  /* #40 Check if given mode id is inside of the configured border */
  if (wdgm_cfg_ptr->NrOfTriggerModes <= Mode)
  {
    /* WDGM258: Null pointer to out parameter  */
    WDGM_DET_REPORTERROR( WDGM_MODULE_ID,
                          WDGM_VENDOR_ID,
                          API_ID_WdgM_SetMode,
                          WDGM_E_PARAM_MODE
                        );
    return (res);
  }

  /* #50 Check if DEFENSIVE_BEHAVIOR is configured */
#if (WDGM_DEFENSIVE_BEHAVIOR == STD_ON)
  /* #51 Check if the caller is in the 'allowed' caller list */
  /* WDGM245 */
  for (i = 0u; i < wdgm_cfg_ptr->NrOfAllowedCallers; i++)
  {
    if (wdgm_cfg_ptr->WdgMCallersRef[i].WdgMAllowedCaller == CallerID)
    {
      res = E_OK;
      break;
    }
  }

  if (res == E_NOT_OK)
  {
    /* WDGM245: Caller is not in the 'allowed' list */
    WDGM_DEM_REPORTERROR (WDGM_E_IMPROPER_CALLER, DEM_EVENT_STATUS_FAILED);
    return (res);
  }
#else
  /* If WDGM_DEFENSIVE_BEHAVIOR is off the CallerID variable cannot be used. */
  CallerID = CallerID; /* PRQA S 3199 */ /* MD_WdgM_3199 */
#endif /* (WDGM_DEFENSIVE_BEHAVIOR == STD_ON) */

  /* ----- Implementation ----------------------------------------------- */
  /* #60 Check if the global supervision status is either OK or FAILED */
  /* WDGM145 */
  if  ( (wdgm_cfg_ptr->DataGRef->GlobalMonitoringStatus == WDGM_GLOBAL_STATUS_OK)
     || (wdgm_cfg_ptr->DataGRef->GlobalMonitoringStatus == WDGM_GLOBAL_STATUS_FAILED)
      )
  {
    /* #70 Cast and store the given trigger mode for being set in the next main function */
    /* The WdgM 'Mode' is here casted to the only supported WdgM 'TriggerMode'*/
    wdgm_cfg_ptr->DataGRef->TriggerModeId = (WdgM_TriggerModeIdType) Mode; /* SBSW_WDGM_002 */
    res = E_OK;
  }
  else
  {
    res = E_NOT_OK;
  }

  /* Remark for WDGM031: check for WDGM_OFF_MODE_ENABLED is done in WdgM_Init() */

  /* WDGM186: The new Watchdog Mode (SLOW, FAST, OFF) shall be set synchronously
     in the MainFunction inside of the allowed Watchdog time window */

  /* #80 Return the result of the service */
  return (res);
} /* PRQA S 6010, 2006 */ /* MD_MSR_STPTH, MD_MSR_14.7 */

#if (WDGM_ENTITY_DEACTIVATION_ENABLED == STD_ON)
/**********************************************************************************************************************
 *  WdgM_ActivateSupervisionEntity()
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
 */
FUNC(Std_ReturnType, WDGM_CODE) WdgM_ActivateSupervisionEntity(VAR(WdgM_SupervisedEntityIdType, AUTOMATIC) SEID)
{
  /* ----- Local Variables ---------------------------------------------- */
  VAR(Std_ReturnType, AUTOMATIC) res;
  P2CONST(WdgM_ConfigType, AUTOMATIC, WDGM_APPL_CONST) wdgm_cfg_ptr;
# if (WDGM_MULTICORE_USAGE == STD_ON)
  VAR(WdgM_CoreIdType, AUTOMATIC) core_id;
# endif /* (WDGM_MULTICORE_USAGE == STD_ON) */

  /* ----- Development Error Checks ------------------------------------- */
  /* #10 Check if multi-core is used */
# if (WDGM_MULTICORE_USAGE == STD_ON)
  /* #11 Check if the id of the current supervised entity is inside of the configured border (multi-core) */
  if (WdgMNrOfSupervisedEntities <= SEID)
  {
    /* WDGM004 */
    /* WDGM172 */
    WDGM_DET_REPORTERROR( WDGM_MODULE_ID,
                          WDGM_VENDOR_ID,
                          API_ID_WdgM_ActivateSupervisionEntity,
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
    /* This function is called on a processor core that has not been configured to be used with the WdgM. */
    WDGM_DET_REPORTERROR( WDGM_MODULE_ID,
                          WDGM_VENDOR_ID,
                          API_ID_WdgM_ActivateSupervisionEntity,
                          WDGM_E_WRONG_PROCESSOR_CORE
                        );
    return E_NOT_OK;
  }

  /* #20 Get the global config pointer */
  wdgm_cfg_ptr = *g_wdgm_cfg_ptr_array[core_id];
# else
  wdgm_cfg_ptr = g_wdgm_cfg_ptr;
# endif /* (WDGM_MULTICORE_USAGE == STD_ON) */

  res = E_NOT_OK;

  /* #30 Check if WdgM is initialized */
  if (wdgm_cfg_ptr == NULL_PTR)
  {
    /* WDGM004 */
    WDGM_DET_REPORTERROR( WDGM_MODULE_ID,
                          WDGM_VENDOR_ID,
                          API_ID_WdgM_ActivateSupervisionEntity,
                          WDGM_E_NO_INIT
                        );
  }

# if (WDGM_MULTICORE_USAGE != STD_ON)
  /* #40 Check if the id of the current supervised entity is inside of the configured border (single-core) */
  /* WDGM278 */
  else if (wdgm_cfg_ptr->NrOfSupervisedEntities <= SEID)
  {
    /* WDGM004 */
    WDGM_DET_REPORTERROR( WDGM_MODULE_ID,
                          WDGM_VENDOR_ID,
                          API_ID_WdgM_ActivateSupervisionEntity,
                          WDGM_E_PARAM_SEID
                        );
  }
# endif /* (WDGM_MULTICORE_USAGE != STD_ON) */
  else
  {
    /* ----- Implementation ----------------------------------------------- */
    /* #50 Check if SE Deactivation / Activation is explicitly enabled in the configuration */
    /* The SE Deactivation/Activation shall be explicitly enabled in the configuration */
    if (wdgm_cfg_ptr->WdgMSupervisedEntityRef[SEID].WdgMEnableEntityDeactivation == STD_ON)
    {
      /* #60 Initiate the activation of the given supervised entity */
      WriteStateChangeRequest (SEID, WDGM_SE_STATE_REQUEST_ACTIVATE, wdgm_cfg_ptr); /* SBSW_WDGM_001 */
      res = E_OK;
    }
  }

  /* #70 Return the result of the service */
  return (res);
} /* PRQA S 2006 */ /* MD_MSR_14.7 */

/**********************************************************************************************************************
 *  WdgM_DeactivateSupervisionEntity()
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
 */
FUNC(Std_ReturnType, WDGM_CODE) WdgM_DeactivateSupervisionEntity(VAR(WdgM_SupervisedEntityIdType, AUTOMATIC) SEID)
{
  /* ----- Local Variables ---------------------------------------------- */
  VAR(Std_ReturnType, AUTOMATIC) res;
  P2CONST(WdgM_ConfigType, AUTOMATIC, WDGM_APPL_CONST) wdgm_cfg_ptr;
# if (WDGM_MULTICORE_USAGE == STD_ON)
  VAR(WdgM_CoreIdType, AUTOMATIC) core_id;
# endif /* (WDGM_MULTICORE_USAGE == STD_ON) */

  /* ----- Development Error Checks ------------------------------------- */
  /* #10 Check if multi-core is used */
# if (WDGM_MULTICORE_USAGE == STD_ON)
  /* #11 Check if the id of the current supervised entity is inside of the configured border (multi-core) */
  if (WdgMNrOfSupervisedEntities <= SEID)
  {
    /* WDGM004 */
    /* WDGM172 */
    WDGM_DET_REPORTERROR( WDGM_MODULE_ID,
                          WDGM_VENDOR_ID,
                          API_ID_WdgM_DeactivateSupervisionEntity,
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
    /* This function is called on a processor core that has not been configured to be used with the WdgM. */
    WDGM_DET_REPORTERROR( WDGM_MODULE_ID,
                          WDGM_VENDOR_ID,
                          API_ID_WdgM_DeactivateSupervisionEntity,
                          WDGM_E_WRONG_PROCESSOR_CORE
                        );
    return E_NOT_OK;
  }

  /* #20 Get the global config pointer */
  wdgm_cfg_ptr = *g_wdgm_cfg_ptr_array[core_id];
# else
  wdgm_cfg_ptr = g_wdgm_cfg_ptr;
# endif /* (WDGM_MULTICORE_USAGE == STD_ON) */

  res = E_NOT_OK;

  /* #30 Check if WdgM is initialized */
  if (wdgm_cfg_ptr == NULL_PTR)
  {
    /* WDGM004 */
    WDGM_DET_REPORTERROR( WDGM_MODULE_ID,
                          WDGM_VENDOR_ID,
                          API_ID_WdgM_DeactivateSupervisionEntity,
                          WDGM_E_NO_INIT
                        );
  }

# if (WDGM_MULTICORE_USAGE != STD_ON)
  /* #40 Check if the id of the current supervised entity is inside of the configured border (single-core) */
  /* WDGM278 */
  else if (wdgm_cfg_ptr->NrOfSupervisedEntities <= SEID)
  {
    /* WDGM004 */
    WDGM_DET_REPORTERROR( WDGM_MODULE_ID,
                          WDGM_VENDOR_ID,
                          API_ID_WdgM_DeactivateSupervisionEntity,
                          WDGM_E_PARAM_SEID
                        );
  }
# endif /* (WDGM_MULTICORE_USAGE != STD_ON) */
  else
  {
    /* ----- Implementation ----------------------------------------------- */
    /* #50 Check if SE Deactivation / Activation is explicitly enabled in the configuration */
    if (wdgm_cfg_ptr->WdgMSupervisedEntityRef[SEID].WdgMEnableEntityDeactivation == STD_ON)
    {
      /* #60 Initiate the activation of the given supervised entity */
      WriteStateChangeRequest (SEID, WDGM_SE_STATE_REQUEST_DEACTIVATE, wdgm_cfg_ptr); /* SBSW_WDGM_001 */
      res = E_OK;
    }
  }

  /* #70 Return the result of the service */
  return (res);
} /* PRQA S 2006 */ /* MD_MSR_14.7 */
#endif /* WDGM_ENTITY_DEACTIVATION_ENABLED */

/**********************************************************************************************************************
 *  WdgM_MainFunction()
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
 *
 *
 */
FUNC(void, WDGM_CODE) WdgM_MainFunction(void)
{
  /* ----- Local Variables ---------------------------------------------- */
  VAR(WdgM_LocalStatusType, AUTOMATIC) local_status_failed;
  VAR(WdgM_LocalStatusType, AUTOMATIC) local_status_expired;
  VAR(WdgM_GlobalStatusType, AUTOMATIC) global_status;
#if (WDGM_MULTIPLE_TRIGGER_MODES == STD_ON)
  VAR(Std_ReturnType, AUTOMATIC) ret;
  VAR(WdgM_TriggerModeIdType, AUTOMATIC) trg_mode;
#endif /* (WDGM_MULTIPLE_TRIGGER_MODES == STD_ON) */
#if ( (WDGM_TIMEBASE_SOURCE == WDGM_EXTERNAL_TICK) || (WDGM_MULTIPLE_TRIGGER_MODES == STD_ON) )
  P2CONST(WdgM_WatchdogDeviceType, AUTOMATIC, WDGM_APPL_CONST) device_ptr;
  VAR(WdgM_WatchdogIdType, AUTOMATIC) wdg_dev;
#endif /* ( (WDGM_TIMEBASE_SOURCE == WDGM_EXTERNAL_TICK) || (WDGM_MULTIPLE_TRIGGER_MODES == STD_ON) ) */
#if (WDGM_TIMEBASE_SOURCE == WDGM_EXTERNAL_TICK)
  VAR(WdgM_TimeBaseTickType, AUTOMATIC) tick_count_diff;
  VAR(WdgM_TimeBaseTickType, AUTOMATIC) current_tick_count;
  VAR(WdgM_TimeBaseTickType, AUTOMATIC) previous_tick_count;
  VAR(WdgM_BooleanParamType, AUTOMATIC) positive_tick;
# if (WDGM_TICK_OVERRUN_CORRECTION == STD_ON)
  VAR(WdgM_BooleanParamType, AUTOMATIC) tick_count_overrun;
# endif /* (WDGM_TICK_OVERRUN_CORRECTION == STD_ON) */
#endif /* (WDGM_TIMEBASE_SOURCE == WDGM_EXTERNAL_TICK) */
  P2CONST(WdgM_ConfigType, AUTOMATIC, WDGM_APPL_CONST) wdgm_cfg_ptr;
#if (WDGM_MULTICORE_USAGE == STD_ON)
  VAR(WdgM_CoreIdType, AUTOMATIC) core_id;
#endif /* (WDGM_MULTICORE_USAGE == STD_ON) */
  VAR(WdgM_SupervisedEntityIdType, AUTOMATIC) expired_seid;
#if (WDGM_AUTOSAR_DEBUGGING == STD_ON)
  VAR(WdgM_ViolationType, AUTOMATIC) se_violation;
#endif /* (WDGM_AUTOSAR_DEBUGGING == STD_ON) */

  /* ----- Development Error Checks ------------------------------------- */
  /* #20 Check if multi-core is used */
#if (WDGM_MULTICORE_USAGE == STD_ON)
  /* #21 Get the current core id */
  core_id = WDGM_GET_CORE_ID ();

  /* #22 Check if WdgM is configured to run on the current core */
  if ( (core_id >= WDGM_MAX_SUPPORTED_CORES)
    || (g_wdgm_cfg_ptr_array[core_id] == NULL_PTR)
     )
  {
    /* This function is called on a processor core that has not been configured to be used with the WdgM. */
    WDGM_DET_REPORTERROR( WDGM_MODULE_ID,
                          WDGM_VENDOR_ID,
                          API_ID_WdgM_MainFunction,
                          WDGM_E_WRONG_PROCESSOR_CORE
                        );
    return;
  }

  /* #30 Get the global config pointer */
  wdgm_cfg_ptr = *g_wdgm_cfg_ptr_array[core_id];
#else
  wdgm_cfg_ptr = g_wdgm_cfg_ptr;
#endif /* (WDGM_MULTICORE_USAGE == STD_ON) */

  /* WDGM039 */
  /* #40 Check if WdgM is initialized */
  if (wdgm_cfg_ptr == NULL_PTR)
  {
    /* WDGM004 */
    WDGM_DET_REPORTERROR( WDGM_MODULE_ID,
                          WDGM_VENDOR_ID,
                          API_ID_WdgM_MainFunction,
                          WDGM_E_NO_INIT
                        );
    return;
  }

  /* ----- Implementation ----------------------------------------------- */
  /* #50 Check if catastrophic failure (global shared memory is corrupted) is detected caused by
   *     WdgM_CheckpointReached */
  if (wdgm_cfg_ptr->DataGSRef->InternalFailureFlag != WDGM_INTERNAL_CP_TEST_OK)
  {
    WDGM_DET_REPORTERROR( WDGM_MODULE_ID,
                          WDGM_VENDOR_ID,
                          API_ID_WdgM_MainFunction,
                          WDGM_E_MEMORY_FAILURE      /* GS memory failure */
                        );
    /* #51 Initiate an immediate watchdog reset if catastrophic failures detected */
    (void) ImmediateWatchdogReset (wdgm_cfg_ptr); /* SBSW_WDGM_001 */
    return;
  }

  /* #60 Enter section with disabled interrupts */
  WdgM_GlobalSuspendInterrupts();
  /* #70 Check if the timebase tick counter source is the EXTERNAL_TICK */
#if (WDGM_TIMEBASE_SOURCE == WDGM_EXTERNAL_TICK)
  /* #71 Load the current Tick counter value */
  current_tick_count = WdgM_GetTickCount (wdgm_cfg_ptr); /* SBSW_WDGM_001 */
  /* #72 Check if OVERRUN_CORRECTION is configured */
# if (WDGM_TICK_OVERRUN_CORRECTION == STD_ON)
  /* #73 Read the overrun flag if an overrun happens before */
  tick_count_overrun = wdgm_cfg_ptr->WdgMGlobalVariables->g_WdgMTickCountOverrun;
# endif /* (WDGM_TICK_OVERRUN_CORRECTION == STD_ON) */
#endif /* (WDGM_TIMEBASE_SOURCE == WDGM_EXTERNAL_TICK) */

  /* #80 Check if main function is already active */
  if (wdgm_cfg_ptr->WdgMGlobalVariables->g_WdgMMainFunctionActive != FALSE) /* WDGM287 */
  {
    WDGM_DET_REPORTERROR( WDGM_MODULE_ID,
                          WDGM_VENDOR_ID,
                          API_ID_WdgM_MainFunction,
                          WDGM_E_REENTRANCY
                         );
    /* Leave section with disabled interrupts before returning */
    WdgM_GlobalRestoreInterrupts();
    return;
  }

  /* #90 Mark the main function active */
  wdgm_cfg_ptr->WdgMGlobalVariables->g_WdgMMainFunctionActive = TRUE; /* SBSW_WDGM_002 */
  /* #100 Leave section with disabled interrupts */
  WdgM_GlobalRestoreInterrupts();

  /* #110 Check if the timebase tick counter source is the INTERNAL_SOFTWARE_TICK */
#if (WDGM_TIMEBASE_SOURCE == WDGM_INTERNAL_SOFTWARE_TICK)
  /* #111 Increment the timebase tick counter by one if source is INTERNAL_SOFTWARE_TICK */
  WdgM_UpdateTickCount (wdgm_cfg_ptr); /* SBSW_WDGM_001 */
#endif /* (WDGM_TIMEBASE_SOURCE == WDGM_INTERNAL_SOFTWARE_TICK) */

  /* #120 Check if the timebase tick counter source is the EXTERNAL_TICK */
#if (WDGM_TIMEBASE_SOURCE == WDGM_EXTERNAL_TICK)
  /* When external Tick counter for deadline monitoring is used, then following counter checks are here done:
   * 1. stuck-in
   * 2. negative jump
   * 3. number of ticks in supervised cycle
   *
   * The internal Tick increment we do not check,
   * it is obvious that the counter is in the WdgM_UpdateTickCount above incremented properly.
   */

  previous_tick_count = wdgm_cfg_ptr->DataGRef->PreviousTickCounter;
  wdgm_cfg_ptr->DataGRef->PreviousTickCounter = current_tick_count; /* SBSW_WDGM_002 */

  positive_tick = FALSE;
  tick_count_diff = 0u;

  /* #121 Check the timebase tick counter for 'stuck-in' and 'negative jump' in first cycle */
  if (wdgm_cfg_ptr->DataGRef->WdgMMainStarted == FALSE)
  {
    /* The first supervision cycle need to be checked separately:
       First time run, previous_tick_count is always ZERO! */
# if (WDGM_TICK_OVERRUN_CORRECTION == STD_ON)
    if (tick_count_overrun == TRUE)
    {
      if (previous_tick_count <= current_tick_count)
      {
        positive_tick = TRUE;
      }
      /* Reset the Timebase overrun flag */
      wdgm_cfg_ptr->WdgMGlobalVariables->g_WdgMTickCountOverrun = FALSE; /* SBSW_WDGM_002 */
    }
    else
# endif /* (WDGM_TICK_OVERRUN_CORRECTION == STD_ON) */
    {
      if (previous_tick_count < current_tick_count)
      {
        positive_tick = TRUE;
      }
    }

    /* When the 'stuck-in' or 'negative jump' failure found call at this place Det module */
    if (positive_tick == FALSE)
    {
        WDGM_DET_REPORTERROR( WDGM_MODULE_ID,
                              WDGM_VENDOR_ID,
                              API_ID_WdgM_MainFunction,
                              WDGM_E_TIMEBASE
                            );
        wdgm_cfg_ptr->WdgMGlobalVariables->g_WdgMMainFunctionActive = FALSE; /* SBSW_WDGM_002 */
        return;
    }
  }
  /* #122 Check the timebase tick counter for 'stuck-in' and 'negative jump' in all other cycles */
  else
  {
  /* #123 Check if OVERRUN_CORRECTION is configured */
# if (WDGM_TICK_OVERRUN_CORRECTION == STD_ON)
    if (tick_count_overrun == TRUE)
    {
      if (previous_tick_count > current_tick_count)
      {
        positive_tick = TRUE;
        /* #124 Calculate the timebase tick counter difference in case of an overrun */
        /* diff = max_value - previous_tick_count + current_tick_count + 1 */
        tick_count_diff = (~previous_tick_count) + current_tick_count + 1u;
      }
      /* Reset the Timebase overrun flag */
      wdgm_cfg_ptr->WdgMGlobalVariables->g_WdgMTickCountOverrun = FALSE; /* SBSW_WDGM_002 */
    }
    else
# endif /* (WDGM_TICK_OVERRUN_CORRECTION == STD_ON) */
    {
      if (previous_tick_count < current_tick_count)
      {
        positive_tick = TRUE;
        /* #125 Calculate the timebase tick counter difference in case of no overrun */
        tick_count_diff = current_tick_count - previous_tick_count;
      }
    }

    /* #126 Report an error if timebase tick counter 'stuck-in' or 'negative jump' */
    if (positive_tick == FALSE)
    {
      WDGM_DET_REPORTERROR( WDGM_MODULE_ID,
                            WDGM_VENDOR_ID,
                            API_ID_WdgM_MainFunction,
                            WDGM_E_TIMEBASE
                          );
      wdgm_cfg_ptr->WdgMGlobalVariables->g_WdgMMainFunctionActive = FALSE; /* SBSW_WDGM_002 */
      return;
    }

    /* #127 Check the number of counted timebase ticks for being inside the allowed trigger window */
    /* For correct triggering in a trigger_window following applies:
       WdgMTriggerWindowStartTicks <= trigger_window <  WdgMTriggerTimeoutTicks */
    for (wdg_dev = 0u; wdg_dev < wdgm_cfg_ptr->NrOfWatchdogDevices; wdg_dev++)
    {
      device_ptr = &wdgm_cfg_ptr->WdgMWatchdogDeviceRef[wdg_dev];
      if ( ( device_ptr->WdgMTriggerModeRef[wdgm_cfg_ptr->DataGRef->TriggerModeId].
              WdgMTriggerWindowStartTicks > tick_count_diff
           )
          ||
           ( device_ptr->WdgMTriggerModeRef[wdgm_cfg_ptr->DataGRef->TriggerModeId].
              WdgMTriggerTimeoutTicks <= tick_count_diff
           )
         )
      {
        WDGM_DET_REPORTERROR( WDGM_MODULE_ID,
                              WDGM_VENDOR_ID,
                              API_ID_WdgM_MainFunction,
                              WDGM_E_TIMEBASE
                            );
        wdgm_cfg_ptr->WdgMGlobalVariables->g_WdgMMainFunctionActive = FALSE; /* SBSW_WDGM_002 */
        return;
      }
    }
  }
  /* Set Main Function has already been started. */
#endif /* (WDGM_TIMEBASE_SOURCE == WDGM_EXTERNAL_TICK) */

  /* #130 Check if MULTIPLE_TRIGGER_MODES are configured */
#if (WDGM_MULTIPLE_TRIGGER_MODES == STD_ON)
  /* #131 Set the new trigger mode if requested since last call of main function */
  /* When a new Trigger Mode is requested then switch the WatchdogMode (OFF, SLOW, FAST) too.
     The Wdg driver excepts the switch to a new WatchdogMode is inside of the trigger window  */
  trg_mode = wdgm_cfg_ptr->DataGRef->TriggerModeId;
  if (trg_mode != wdgm_cfg_ptr->DataGRef->PreviousTriggerModeId)
  {
    wdgm_cfg_ptr->DataGRef->PreviousTriggerModeId = wdgm_cfg_ptr->DataGRef->TriggerModeId; /* SBSW_WDGM_002 */

    for (wdg_dev = 0u; wdg_dev < wdgm_cfg_ptr->NrOfWatchdogDevices; wdg_dev++)
    {
      device_ptr = &wdgm_cfg_ptr->WdgMWatchdogDeviceRef[wdg_dev];
      /* Set the new Trigger Mode */
      ret = WdgIf_SetMode( device_ptr->WdgMTriggerModeRef[trg_mode].WdgMDeviceIndex,
                           device_ptr->WdgMTriggerModeRef[trg_mode].WdgMWatchdogMode
                         );

      if (ret == E_NOT_OK)
      {
          /* WDGM139: Set GLOBAL_STATUS_STOPPED */
          wdgm_cfg_ptr->DataGRef->GlobalMonitoringStatus = WDGM_GLOBAL_STATUS_STOPPED; /* SBSW_WDGM_002 */
          WDGM_DET_REPORTERROR( WDGM_MODULE_ID,
                                WDGM_VENDOR_ID,
                                API_ID_WdgM_MainFunction,
                                WDGM_E_WDGIF_MODE
                              );
         /* Run through to the GLOBAL STOPPED state */
      }
    }
  }
#endif  /* (WDGM_MULTIPLE_TRIGGER_MODES == STD_ON) */

  /* ----------------------------------------------------------------------------
   * After this point we assume that the configuration and runtime checks are OK!
   * ---------------------------------------------------------------------------- */

  /* #140 Read the current global supervision status */
  global_status = wdgm_cfg_ptr->DataGRef->GlobalMonitoringStatus;

  switch (global_status)
  {
    /* -------------------------------------------------------------------*/
    /* #141 Check if the global supervision status is either OK or FAILED */
    case WDGM_GLOBAL_STATUS_OK:
    case WDGM_GLOBAL_STATUS_FAILED:
    {
      /* #142 Build the local supervision statuses of all supervised entities */
      /* Is at least one local status failed or expired? */
      BuildEntitiesStatus( &local_status_failed, /* SBSW_WDGM_001 */ /* SBSW_WDGM_005 */
                           &local_status_expired,
                           wdgm_cfg_ptr,
                           &expired_seid
#if (WDGM_AUTOSAR_DEBUGGING == STD_ON)
                          , &se_violation
#endif /* (WDGM_AUTOSAR_DEBUGGING == STD_ON) */
                         );

      /* #143 Determine new global supervision status based on the local supervision statuses */
      if (local_status_expired == WDGM_LOCAL_STATUS_EXPIRED)
      {
        /* WDGM215 */
        if (wdgm_cfg_ptr->WdgMExpiredSupervisionCycleTol > 0u)
        {
          /* Initialize 'ExpiredCycleCounter' */
          wdgm_cfg_ptr->DataGRef->ExpiredCycleCounter = 1u; /* SBSW_WDGM_002 */
          global_status = WDGM_GLOBAL_STATUS_EXPIRED;
        }
        else
        {
          global_status = WDGM_GLOBAL_STATUS_STOPPED;   /* WDGM216 */
        }

        /* #144 Save the id of the supervised entity in case of reaching the local supervision status EXPIRED */
        /* Note, that if several SEs get to status EXPIRED during this supervision cycle
           the highest SEID will be stored. */
#if (WDGM_MULTICORE_USAGE == STD_ON)
        g_wdgm_first_exp_se_array[core_id] = expired_seid; /* SBSW_WDGM_015 */
        g_wdgm_first_exp_se_array_inv[core_id] = (WdgM_SupervisedEntityIdType) (~expired_seid); /* SBSW_WDGM_015 */
#else /* if (WDGM_MULTICORE_USAGE != STD_ON) */
        g_wdgm_first_exp_se = expired_seid;
        g_wdgm_first_exp_se_inv = (WdgM_SupervisedEntityIdType) (~expired_seid);
#endif /* (WDGM_MULTICORE_USAGE == STD_ON) */

#if (WDGM_AUTOSAR_DEBUGGING == STD_ON)
        /* #145 Save the violation type of the supervised entity in case of reaching the local supervision status
         *      EXPIRED if AUTOSAR_DEBUGGING is configured */
        /* AUTOSAR DEBUGGING
           Store the violation reason of the first expired SEID. */
        /* Note, that if several SEs get to status EXPIRED during this supervision cycle
           the highest SEID will be stored. */
# if (WDGM_MULTICORE_USAGE == STD_ON)
        g_wdgm_first_exp_se_violation_array[core_id] = se_violation; /* SBSW_WDGM_015 */
        g_wdgm_first_exp_se_violation_array_inv[core_id] = (WdgM_ViolationType) (~se_violation); /* SBSW_WDGM_015 */
# else /* if (WDGM_MULTICORE_USAGE != STD_ON) */
        g_wdgm_first_exp_se_violation = se_violation;
        g_wdgm_first_exp_se_violation_inv = (WdgM_ViolationType) (~se_violation);
# endif /* (WDGM_MULTICORE_USAGE == STD_ON) */
#endif /* (WDGM_AUTOSAR_DEBUGGING == STD_ON) */
      }
      /* WDGM076 */
      else if (local_status_failed == WDGM_LOCAL_STATUS_FAILED)
      {
        /* Goto FAILED or stay there */
        global_status = WDGM_GLOBAL_STATUS_FAILED;
      }
      else
      {
        /* Stay in OK or perform recovery */
        global_status = WDGM_GLOBAL_STATUS_OK;
      }
    }
    break;

    /* -------------------------------------------------------------------*/
    /* #146 Check if the global supervision status is EXPIRED */
    case WDGM_GLOBAL_STATUS_EXPIRED:
    {
      /* #147 Build the local supervision statuses of all supervised entities */
      /* Is at least one local status failed or expired? */
      BuildEntitiesStatus( &local_status_failed, /* SBSW_WDGM_001 */ /* SBSW_WDGM_005 */
                           &local_status_expired,
                           wdgm_cfg_ptr,
                           &expired_seid
#if (WDGM_AUTOSAR_DEBUGGING == STD_ON)
                          , &se_violation
#endif /* (WDGM_AUTOSAR_DEBUGGING == STD_ON) */
                           );

      /* #148 Determine new global supervision status based on the local supervision statuses */
      /* WDGM219 */
      if (local_status_expired == WDGM_LOCAL_STATUS_EXPIRED)
      {
        if (wdgm_cfg_ptr->DataGRef->ExpiredCycleCounter < wdgm_cfg_ptr->WdgMExpiredSupervisionCycleTol)
        {
          wdgm_cfg_ptr->DataGRef->ExpiredCycleCounter++; /* SBSW_WDGM_002 */
          global_status = WDGM_GLOBAL_STATUS_EXPIRED;
        }
        else
        {
          global_status = WDGM_GLOBAL_STATUS_STOPPED;   /* WDGM220 */
        }
      }
      else
      {
        /* Stay in the EXPIRED state, there is no way back */
        /* MISRA rule 14.10 */
      }
    }
    break;

    /* -------------------------------------------------------------------*/
    /* #149 Check if the global supervision status is STOPPED */
    case WDGM_GLOBAL_STATUS_STOPPED:
    {
      /* WDGM122: End state, WD reset will follow */
#if (WDGM_DEM_SUPERVISION_REPORT == STD_ON)
      /*  WDGM338, WDGM129: Error report to DEM */
      /* #150 Report an error to Dem if DEM_SUPERVISION_REPORT is configured */
      WDGM_DEM_REPORTERROR (WDGM_E_MONITORING, DEM_EVENT_STATUS_FAILED);
#endif /* (WDGM_DEM_SUPERVISION_REPORT == STD_ON) */
    }
    break;

    /* -------------------------------------------------------------------*/
    /* #151 Check if the global supervision status is DEACTIVATED and do nothing */
    case WDGM_GLOBAL_STATUS_DEACTIVATED:
        /* WDGM292: The WdgM shall not trigger the WD and shall not call the WdgIf_SetTriggerCondition */
    break;

    /* -------------------------------------------------------------------*/
    /* #152 Check if the global supervision status is undefined */
    default:
    {
      /* Wrong state */
      WDGM_DET_REPORTERROR( WDGM_MODULE_ID,
                            WDGM_VENDOR_ID,
                            API_ID_WdgM_MainFunction,
                            WDGM_E_PARAM_STATE
                          );
      /* If this statement is reached then another process has corrupted/overwritten the status */
      /* #153 Perform an immediate reset */
      (void) ImmediateWatchdogReset (wdgm_cfg_ptr); /* SBSW_WDGM_001 */
    }
    break;
  }

  /* #160 Check if STATE_CHANGE_NOTIFICATION is configured */
#if (WDGM_STATE_CHANGE_NOTIFICATION == STD_ON)
  /* #161 Check if a state change notification is configured */
  if (wdgm_cfg_ptr->WdgM_GlobalStateChangeCbk != NULL_PTR)
  {
    /* #162 Call the state change notification if global supervision status is changed */
    if (wdgm_cfg_ptr->DataGRef->GlobalMonitoringStatus != global_status)
    {
      /* WDGM134: Do not provide notification in STATUS_STOPPED */
# if (WDGM_IMMEDIATE_RESET == STD_ON)
      if (global_status != WDGM_GLOBAL_STATUS_STOPPED)
# endif /* (WDGM_IMMEDIATE_RESET == STD_ON) */
      {
        (void) wdgm_cfg_ptr->WdgM_GlobalStateChangeCbk (global_status); /* SBSW_WDGM_004 */
      }
    }
  }
#endif /* WDGM_STATE_CHANGE_NOTIFICATION == STD_ON */

  /* #170 Update the global supervision status */
  wdgm_cfg_ptr->DataGRef->GlobalMonitoringStatus = global_status; /* SBSW_WDGM_002 */

  /* #180 Check if the new global supervision status is either OK, FAILED or EXPIRED */
  /* WDGM119, 120, 121 */
  if ( (global_status == WDGM_GLOBAL_STATUS_OK)
    || (global_status == WDGM_GLOBAL_STATUS_FAILED)
    || (global_status == WDGM_GLOBAL_STATUS_EXPIRED)
     )
  {
    /* #181 Trigger the configured watchdog devices */
    /* WatchdogTrigger handles the error case (DET) - return value can be ignored. */
    (void) WatchdogTrigger (wdgm_cfg_ptr); /* SBSW_WDGM_001 */
  }
  /* #190 Check if the new global supervision status is STOPPED */
  else
  {
    if (global_status != WDGM_GLOBAL_STATUS_DEACTIVATED)
    {
      /* WDGM122: global_status == WDGM_GLOBAL_STATUS_STOPPED */
#if (WDGM_IMMEDIATE_RESET == STD_ON)
      /* #191 Perform immediate reset (do not wait for watchdog timeout) */
      /* WDGM133 */
      /* In contrast to AUTOSAR 4.0 for safety reasons the WdgM default reset path is the watchdog path.
         The IMMEDIATE_RESET parameter invokes immediate reset through watchdog and not via Mcu_Reset function
         as defined in AUTOSAR */
      (void) ImmediateWatchdogReset (wdgm_cfg_ptr); /* SBSW_WDGM_001 */
#endif /* (WDGM_IMMEDIATE_RESET == STD_ON) */
    }
  }

  /* #200 Enter section with disabled interrupts */
  WdgM_GlobalSuspendInterrupts();
  /* #201 Set the flag that shows that the main function is already called the first time */
  wdgm_cfg_ptr->DataGRef->WdgMMainStarted = TRUE; /* SBSW_WDGM_002 */
  /* #202 Reset the flag that shows that the main function is currently not active */
  wdgm_cfg_ptr->WdgMGlobalVariables->g_WdgMMainFunctionActive = FALSE; /* SBSW_WDGM_002 */
  /* #210 Leave section with disabled interrupts */
  WdgM_GlobalRestoreInterrupts();
} /* PRQA S 6010, 6030, 6050, 2006 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_14.7 */

/**********************************************************************************************************************
 *  WdgM_PerformReset()
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
 */
FUNC(Std_ReturnType, WDGM_CODE) WdgM_PerformReset(void)
{
  /* ----- Local Variables ---------------------------------------------- */
  VAR(Std_ReturnType, AUTOMATIC) res;
  P2CONST(WdgM_ConfigType, AUTOMATIC, WDGM_APPL_CONST) wdgm_cfg_ptr;
#if (WDGM_MULTICORE_USAGE == STD_ON)
  VAR(WdgM_CoreIdType, AUTOMATIC) core_id;
#endif /* (WDGM_MULTICORE_USAGE == STD_ON) */

  /* ----- Development Error Checks ------------------------------------- */
  /* #10 Check if multi-core is used */
#if (WDGM_MULTICORE_USAGE == STD_ON)
  /* #11 Get the current core id */
  core_id = WDGM_GET_CORE_ID ();

  /* #12 Check if WdgM is configured to run on the current core */
  if ( (core_id >= WDGM_MAX_SUPPORTED_CORES)
    || (g_wdgm_cfg_ptr_array[core_id] == NULL_PTR)
     )
  {
    /* This function is called on a processor core that has not been configured to be used with the WdgM. */
    WDGM_DET_REPORTERROR( WDGM_MODULE_ID,
                          WDGM_VENDOR_ID,
                          API_ID_WdgM_PerformReset,
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
  /* WDGM270 */
  if (wdgm_cfg_ptr == NULL_PTR)
  {
    /* WDGM004 */
    WDGM_DET_REPORTERROR( WDGM_MODULE_ID,
                          WDGM_VENDOR_ID,
                          API_ID_WdgM_PerformReset,
                          WDGM_E_NO_INIT
                        );
    res = E_NOT_OK;
  }
  else
  {
    /* ----- Implementation ----------------------------------------------- */
    /* #40 Initiate an immediate watchdog reset */
    /* WDGM232 */
    res = ImmediateWatchdogReset (wdgm_cfg_ptr); /* SBSW_WDGM_001 */

    /* #50 Set the global supervision status DEACTIVATED */
    /* WDGM233: */
    wdgm_cfg_ptr->DataGRef->GlobalMonitoringStatus = WDGM_GLOBAL_STATUS_DEACTIVATED; /* SBSW_WDGM_002 */
  }

  /* #60 Return the result of the service */
  return (res);
} /* PRQA S 2006 */ /* MD_MSR_14.7 */

/**********************************************************************************************************************
 *  WdgM_GetTickCount()
 *********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *
 */
#if (WDGM_TIMEBASE_SOURCE == WDGM_INTERNAL_HARDWARE_TICK) /* COV_WDGM_TIMEBASE_INTERNAL_HARDWARE_TICK_NOT_SUPPORTED */
FUNC(WdgM_TimeBaseTickType, WDGM_CODE) WdgM_GetTickCount(void)
#else /* if (WDGM_TIMEBASE_SOURCE != WDGM_INTERNAL_HARDWARE_TICK) */
FUNC(WdgM_TimeBaseTickType, WDGM_CODE) WdgM_GetTickCount(
  P2CONST(WdgM_ConfigType, AUTOMATIC, WDGM_APPL_CONST) wdgm_cfg_ptr
  )
#endif
{
  /* ----- Implementation ----------------------------------------------- */
  /* #10 Check if the timebase tick counter source is the INTERNAL_HARDWARE_TICK */
#if (WDGM_TIMEBASE_SOURCE == WDGM_INTERNAL_HARDWARE_TICK) /* COV_WDGM_TIMEBASE_INTERNAL_HARDWARE_TICK_NOT_SUPPORTED */
  /* #11 Query the current timebase tick counter value via WdgIf and return the value */
  return WdgIf_GetTickCounter ();
#else
  /* (WDGM_TIMEBASE_SOURCE == WDGM_INTERNAL_SOFTWARE_TICK)
  || (WDGM_TIMEBASE_SOURCE == WDGM_EXTERNAL_TICK) */
  /* #20 Return the current internal software timebase tick counter (which is also used for EXTERNAL_TICK) */
  return (wdgm_cfg_ptr->WdgMGlobalVariables->g_WdgMTickCount);
#endif /* (WDGM_TIMEBASE_SOURCE == WDGM_INTERNAL_HARDWARE_TICK) */
}

#if (WDGM_TIMEBASE_SOURCE == WDGM_EXTERNAL_TICK)
/**********************************************************************************************************************
 *  WdgM_UpdateTickCount()
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
 */
FUNC(void, WDGM_CODE) WdgM_UpdateTickCount (void)
{
  /* ----- Local Variables ---------------------------------------------- */
  P2CONST(WdgM_ConfigType, AUTOMATIC, WDGM_APPL_CONST) wdgm_cfg_ptr;
# if (WDGM_MULTICORE_USAGE == STD_ON)
  VAR(WdgM_CoreIdType, AUTOMATIC) core_id;
# endif /* (WDGM_MULTICORE_USAGE == STD_ON) */

  /* ----- Development Error Checks ------------------------------------- */
  /* #10 Check if multi-core is used */
# if (WDGM_MULTICORE_USAGE == STD_ON)
  /* #11 Get the current core id */
  core_id = WDGM_GET_CORE_ID ();

  /* #12 Check if WdgM is configured to run on the current core */
  if ( (core_id >= WDGM_MAX_SUPPORTED_CORES)
    || (g_wdgm_cfg_ptr_array[core_id] == NULL_PTR)
     )
  {
     /* This function is called on a processor core that has not been configured to be used with the WdgM. */
     WDGM_DET_REPORTERROR( WDGM_MODULE_ID,
                           WDGM_VENDOR_ID,
                           API_ID_WdgM_UpdateTickCount,
                           WDGM_E_WRONG_PROCESSOR_CORE
                         );
     return;
  }

  /* #20 Get the global config pointer */
  wdgm_cfg_ptr = *g_wdgm_cfg_ptr_array[core_id];
# else /* if (WDGM_MULTICORE_USAGE != STD_ON) */
  wdgm_cfg_ptr = g_wdgm_cfg_ptr;
# endif /* (WDGM_MULTICORE_USAGE == STD_ON) */

  /* ----- Implementation ----------------------------------------------- */
  /* #30 Increment the current timebase tick counter value */
  wdgm_cfg_ptr->WdgMGlobalVariables->g_WdgMTickCount++; /* SBSW_WDGM_002 */

  /* #40 Check if OVERRUN_CORRECTION is configured */
# if (WDGM_TICK_OVERRUN_CORRECTION == STD_ON)
  /* #41 Check Timebase Tick Counter for overrun */
  if (wdgm_cfg_ptr->WdgMGlobalVariables->g_WdgMTickCount == 0u)
  {
    /* #42 Set the timebase tick counter overrun flag if a overrun happens */
    wdgm_cfg_ptr->WdgMGlobalVariables->g_WdgMTickCountOverrun = TRUE; /* SBSW_WDGM_002 */
  }
# endif /* (WDGM_TICK_OVERRUN_CORRECTION == STD_ON) */
  return;
} /* PRQA S 2006 */ /* MD_MSR_14.7 */
#endif /* (WDGM_TIMEBASE_SOURCE == WDGM_EXTERNAL_TICK) */

/**********************************************************************************************************************
 *  WdgM_GetFirstExpiredSEID()
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
 */
FUNC(Std_ReturnType, WDGM_CODE) WdgM_GetFirstExpiredSEID(
  P2VAR(WdgM_SupervisedEntityIdType, AUTOMATIC, WDGM_APPL_DATA) SEID
  )
{
  /* ----- Local Variables ---------------------------------------------- */
  VAR(Std_ReturnType, AUTOMATIC) ret = E_OK;
  /* #10 Check if multi-core is used */
#if (WDGM_MULTICORE_USAGE == STD_ON)
  /* #11 Get the current core id */
  VAR(WdgM_CoreIdType, AUTOMATIC) core_id = WDGM_GET_CORE_ID ();
#endif /* (WDGM_MULTICORE_USAGE == STD_ON) */

  /* ----- Development Error Checks ------------------------------------- */
  /* #20 Check if out parameter is a NULL_PTR */
  /* WDGM347 */
  if (SEID == NULL_PTR)
  {
    /* WDGM004 */
    WDGM_DET_REPORTERROR( WDGM_MODULE_ID,
                          WDGM_VENDOR_ID,
                          API_ID_WdgM_GetFirstExpiredSEID,
                          WDGM_E_NULL_POINTER
                        );
    ret = E_NOT_OK;
  }
  /* #30 Check if multi-core is used */
#if (WDGM_MULTICORE_USAGE == STD_ON)
  /* #31 Check if WdgM is configured to run on the current core */
  else if ( (core_id >= WDGM_MAX_SUPPORTED_CORES)
         || (g_wdgm_cfg_ptr_array[core_id] == NULL_PTR)
          )
  {
    /* This function is called on a processor core that has not been configured to be used with the WdgM */
    WDGM_DET_REPORTERROR( WDGM_MODULE_ID,
                          WDGM_VENDOR_ID,
                          API_ID_WdgM_GetFirstExpiredSEID,
                          WDGM_E_WRONG_PROCESSOR_CORE
                        );
    *SEID = 0u; /* SBSW_WDGM_003 */
    ret = E_NOT_OK;
  }
  /* #40 Check if the double-inverse value of the supervised entity id is corrupted */
  /* Note, that these entries are not cleared after RESET or during initialization! */
  else if ( g_wdgm_first_exp_se_array[core_id]
         != (WdgM_SupervisedEntityIdType) (~g_wdgm_first_exp_se_array_inv[core_id])
          )
  {
    *SEID = 0u; /* SBSW_WDGM_003 */
    ret = E_NOT_OK;
  }
  else
  {
    /* ----- Implementation ----------------------------------------------- */
    /* #50 Store the id of the supervised entity that became at first EXPIRED in the out parameter */
    *SEID = g_wdgm_first_exp_se_array[core_id]; /* SBSW_WDGM_003 */
  }
#else /* (WDGM_MULTICORE_USAGE == STD_ON) */
  /* #60 Check if the double-inverse value of the supervised entity id is corrupted (single-core) */
  /* Note, that these entries are not cleared after RESET or during initialization! */
  else if (g_wdgm_first_exp_se != (WdgM_SupervisedEntityIdType) (~g_wdgm_first_exp_se_inv))
  {
    *SEID = 0u; /* SBSW_WDGM_003 */
    ret = E_NOT_OK;
  }
  else
  {
    /* ----- Implementation ----------------------------------------------- */
    /* #70 Store the id of the supervised entity that became at first EXPIRED in the out parameter (single-core) */
    *SEID = g_wdgm_first_exp_se; /* SBSW_WDGM_003 */
  }
#endif /* (WDGM_MULTICORE_USAGE == STD_ON) */

  /* #80 Return the result of the service */
  return ret;
}

#if (WDGM_AUTOSAR_DEBUGGING == STD_ON)
/**********************************************************************************************************************
 *  WdgM_GetFirstExpiredSEViolation()
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
 */
FUNC(Std_ReturnType, WDGM_CODE) WdgM_GetFirstExpiredSEViolation(
  P2VAR(WdgM_ViolationType, AUTOMATIC, WDGM_APPL_DATA) ViolationType
  )
{
  /* ----- Local Variables ---------------------------------------------- */
  VAR(Std_ReturnType, AUTOMATIC) ret = E_OK;
  /* #10 Check if multi-core is used */
# if (WDGM_MULTICORE_USAGE == STD_ON)
  /* #11 Get the current core id */
  VAR(WdgM_CoreIdType, AUTOMATIC) core_id = WDGM_GET_CORE_ID ();
# endif /* (WDGM_MULTICORE_USAGE == STD_ON) */

  /* ----- Development Error Checks ------------------------------------- */
  /* #20 Check if out parameter is a NULL_PTR */
  /* WDGM347 */
  if (ViolationType == NULL_PTR)
  {
    /* WDGM004 */
    WDGM_DET_REPORTERROR( WDGM_MODULE_ID,
                          WDGM_VENDOR_ID,
                          API_ID_WdgM_GetFirstExpiredSEViolation,
                          WDGM_E_NULL_POINTER
                        );
    ret = E_NOT_OK;
  }
  /* #30 Check if multi-core is used */
# if (WDGM_MULTICORE_USAGE == STD_ON)
  /* #31 Check if WdgM is configured to run on the current core */
  else if ( (core_id >= WDGM_MAX_SUPPORTED_CORES)
         || (g_wdgm_cfg_ptr_array[core_id] == NULL_PTR)
          )
  {
    /* This function is called on a processor core that has not been configured to be used with the WdgM. */
    WDGM_DET_REPORTERROR( WDGM_MODULE_ID,
                          WDGM_VENDOR_ID,
                          API_ID_WdgM_GetFirstExpiredSEViolation,
                          WDGM_E_WRONG_PROCESSOR_CORE
                         );
    *ViolationType = WDGM_VIOLATION_NONE; /* SBSW_WDGM_003 */
    ret = E_NOT_OK;
  }
  /* #32 Check if the double-inverse value of the violation type is corrupted */
  /* Note, that these entries are not cleared after RESET or during initialization! */
  else if ( g_wdgm_first_exp_se_violation_array[core_id]
         != (WdgM_ViolationType) (~g_wdgm_first_exp_se_violation_array_inv[core_id])
          )
  {
    *ViolationType = WDGM_VIOLATION_NONE; /* SBSW_WDGM_003 */
    ret = E_NOT_OK;
  }
  else
  {
    /* #33 Store the violation type of the supervised entity that became at first EXPIRED in the out parameter */
    /* ----- Implementation ----------------------------------------------- */
    *ViolationType = g_wdgm_first_exp_se_violation_array[core_id]; /* SBSW_WDGM_003 */
  }
  /* #40 Check if single-core is used */
# else /* (WDGM_MULTICORE_USAGE == STD_ON) */
  /* #41 Check if the double-inverse value of the violation type is corrupted (single-core) */
  /* Note, that these entries are not cleared after RESET or during initialization! */
  else if ( g_wdgm_first_exp_se_violation
         != (WdgM_ViolationType) (~g_wdgm_first_exp_se_violation_inv)
          )
  {
    *ViolationType = WDGM_VIOLATION_NONE; /* SBSW_WDGM_003 */
    ret = E_NOT_OK;
  }
  else
  {
    /* ----- Implementation ----------------------------------------------- */
    /* #42 Store the violation type of the SE that became at first EXPIRED in the out parameter (single-core) */
    *ViolationType = g_wdgm_first_exp_se_violation; /* SBSW_WDGM_003 */
  }
# endif /* (WDGM_MULTICORE_USAGE == STD_ON) */

  /* #50 Return the result of the service */
  return ret;
}
#endif /* (WDGM_AUTOSAR_DEBUGGING == STD_ON) */

#if (WDGM_VERSION_INFO_API == STD_ON)
/**********************************************************************************************************************
 *  WdgM_GetVersionInfo()
 *********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 */
FUNC(void, WDGM_CODE) WdgM_GetVersionInfo(P2VAR(Std_VersionInfoType, AUTOMATIC, WDGM_APPL_DATA) versioninfo)
{
  /* ----- Development Error Checks ------------------------------------- */
  /* #10 Check if out parameter is a NULL_PTR */
  if (versioninfo == NULL_PTR)
  {
    WDGM_DET_REPORTERROR( WDGM_MODULE_ID,
                          WDGM_VENDOR_ID,
                          API_ID_WdgM_GetVersionInfo,
                          WDGM_E_NULL_POINTER
                        );
  }
  else
  {
    /* ----- Implementation ----------------------------------------------- */
    /* #20 Store the version info in the memory cell referenced by the out parameter */
    versioninfo->vendorID = (WDGM_VENDOR_ID); /* SBSW_WDGM_003 */
    versioninfo->moduleID = (WDGM_MODULE_ID); /* SBSW_WDGM_003 */
    versioninfo->sw_major_version = (WDGM_SW_MAJOR_VERSION); /* SBSW_WDGM_003 */
    versioninfo->sw_minor_version = (WDGM_SW_MINOR_VERSION); /* SBSW_WDGM_003 */
    versioninfo->sw_patch_version = (WDGM_SW_PATCH_VERSION); /* SBSW_WDGM_003 */
  }
  return;
}
#endif /* WDGM_VERSION_INFO_API == STD_ON */

#define WDGM_STOP_SEC_CODE
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/* Justification for module-specific MISRA deviations:

  MD_WdgM_0781: rule 5.6
    Reason:     Naming convention is determined - may no be changed currently due to migrated WdgM
    Risk:       Compiler may reference incorrect object
    Prevention: Correctness has been verified by test cases

  MD_WdgM_3408: rule 8.8
    Reason:     'g_wdgm_cfg_ptr_array', 'g_wdgm_cfg_ptr', 'g_wdgm_cfg_ptr_CORE0', 'g_wdgm_cfg_ptr_CORE1',
                'g_wdgm_cfg_ptr_CORE2', 'g_wdgm_cfg_ptr_CORE3' are shared between both files WdgM.c and
                WdgM_Checkpoint.c
    Risk:       Compiler may not access declaration and might make wrong assumptions
    Prevention: Correctness has been verified by test cases

  MD_WdgM_0779: rule 5.1
    Reason:     The identifier 'g_wdgm_first_exp_se_violation_array_inv' is by more than 31 characters similar to the
                identifier 'g_wdgm_first_exp_se_violation_array' but it is well distinguishable because it has the
                clear prefix "_inv" which suggests that it stores the inverse of the other variable.
                This suffix convention is used for all inverse variables in the code.
    Risk:       Compiler may not use the correct objects (truncation)
    Prevention: Component is part of a delivery test scenario and within this delivery test the customer compiler and
                compiler-version will be used (-> part of PES process)

  MD_WdgM_3199:
    Reason:     Variable 'CallerID' is not used when preprocessor option 'WDGM_DEFENSIVE_BEHAVIOR' is 'STD_OFF' and
                depending on the other preprocessor option 'WDGM_AUTOSAR_3_1_X_COMPATIBILITY' it is either a variable
                or a function argument. This statement is placed to avoid a compiler warning and explicitly mark that
                'CallerID' is not used on purpose.
    Risk:       None - see reason
    Prevention: None, because no risk

  MD_WdgM_3447: rule 8.8
    Reason:     Both 'GlobalSuspendInterrupts' and 'GlobalRestoreInterrupts' are user defined functions. Since it is
                not specified in which header file they are declared - it is not included and they must be declared in
                this source file locally.
    Risk:       Compiler may not access declaration and might make wrong assumptions
    Prevention: Correctness has been verified by test cases

  MD_WdgM_0277: rule 3.1
    Reason:     This deviation is inherited by the migrated WdgM and cannot be changed currently.
    Risk:       None
    Prevention: None

  MD_WdgM_0883:  MISRA rule: 19.15
    Reason:     Memory Mapping requires inclusion of MemMap.h multiple times in a file in order to select appropriate
                #pragma directives.
    Risk:       MemMap.h is provided by the integrator, hence many risks may occur, caused by wrong implementation of
                this file.
    Prevention: The integrator has to ensure the correct implementation of this file including all includes. This has
                to be verified by code inspection.

  MD_WdgM_3451: MISRA rule: 8.8
    Reason:     Main function is declared once by the component WdgM itself and further by the Schedule Manager SchM
                (if used).
    Risk:       Compiler warning
    Prevention: None

*/

/* SBSW_JUSTIFICATION_BEGIN

\ID SBSW_WDGM_001
 \DESCRIPTION     Function call with config pointer as parameter
 \COUNTERMEASURE  \N The given config pointer must be valid. The user has to ensure that a valid pointer is given. The
                     pointer cannot be an arbitrary one, but a generated pointer.

\ID SBSW_WDGM_002
 \DESCRIPTION     Pointer write access to target config pointer
 \COUNTERMEASURE  \M The Verifier tool has to verify that all accessed pointers are valid. 'Test 11' in the Verifier
                     validates that DataGRef is a valid address. 'Test 10' in the Verifier validates that DataGSRef is
                     a valid address. 'Test 10' in the Verifier validates that DataGSRef is a valid address. 'Test 13'
                     and 'Test 4' validates that the GlobalTransitionFlagsGS is valid address and has a sufficient
                     array size

\ID SBSW_WDGM_003
 \DESCRIPTION     Pointer write access to target pointer given as parameter
 \COUNTERMEASURE  \N The given pointer must be valid. The user has to ensure that a valid pointer is given.

\ID SBSW_WDGM_004
 \DESCRIPTION     Function pointer call to configured callback function
 \COUNTERMEASURE  \S The user has to provide an implementation with the same name and signature as the generator
                     defines the function prototype. SafetyManual describes this in more detail.
                  \R Runtime check checks the pointer not being a NULL_PTR
                  \T TCASE-356128, TCASE-356129, TCASE-356130, TCASE-356131, TCASE-356132, TCASE-356133

\ID SBSW_WDGM_005
 \DESCRIPTION     Function call with local pointer as parameter
 \COUNTERMEASURE  \N The given pointer must be valid. Due to the fact that this pointer is a local call by reference
                     parameter it is guaranteed that the given pointer is always valid.

\ID SBSW_WDGM_006
 \DESCRIPTION     Pointer write access to target. The target is an array element in the config pointer
 \COUNTERMEASURE  \M The Verifier checks with 'Test 5 ' the validity of WDGM_NR_OF_ENTITIES
                  \R A runtime check confirms that only valid entries of the array are accessed

\ID SBSW_WDGM_007
 \DESCRIPTION     Function call with pointer as parameter (WdgMSupervisedEntityRef)
 \COUNTERMEASURE  \M The given pointer must be valid. This pointer is a reference to an entry of the generated array of
                     all supervised entities WdgMSupervisedEntityRef which is referenced within the config pointer. The
                     Verifier tool has to confirm the array size with the WDGM_NR_OF_ENTITIES, because a loop over all
                     supervised entities is done with the limit of WDGM_NR_OF_ENTITIES. 'Test 5' and 'Test 6' in the
                     Verifier validates this.

\ID SBSW_WDGM_008
 \DESCRIPTION     Pointer write access to target pointer given as parameter
 \COUNTERMEASURE  \N The given pointer must be valid. Due to the fact that the corresponding function is a local one,
                     the caller (WdgM itself) has to ensure that a valid pointer is given. So it is guaranteed that
                     the given pointer is always valid.

\ID SBSW_WDGM_009
 \DESCRIPTION     Pointer write access to target WdgMSupervisedEntityRef
 \COUNTERMEASURE  \M The given pointer must be valid. This is guaranteed because the Verifier tool has to confirm the
                     array size with the WDGM_NR_OF_ENTITIES, because a loop over all supervised entities is done with
                     the limit of WDGM_NR_OF_ENTITIES. 'Test 5' and 'Test 6' in the Verifier validates this.
                  \R A runtime check validates if the given supervised entity id is within the valid range. Only if
                     this check is passed, a access to the WdgMSupervisedEntityRef is done.

\ID SBSW_WDGM_010
 \DESCRIPTION     Pointer write access via WdgMCheckpointRef to WdgMAliveLRef / WdgMAliveGRef
 \COUNTERMEASURE  \M The address of WdgMCheckpointRef must be valid. This is guaranteed because the Verifier tool has
                     to confirm the number of valid entries in the checkpoint array WdgMCheckpointRef based on the
                     reference stored in the config array of all supervised entities.
                     'Test 1' in the Verifier confirms of NrOfCheckpoints checkpoints for this supervised entity.
                     'Test 2' in the Verifier confirms that WDGM_NR_OF_CHECKPOINTS is valid
                  \R A runtime check confirms that only valid array elements of the array WdgMCheckpointRef can be
                     retrieved.
                  \R A runtime check checks if a NULL_PTR is referenced to WdgMAliveLRef / WdgMAliveGRef. A write
                     access is only done if the reference is confirmed as valid.

\ID SBSW_WDGM_011
 \DESCRIPTION     Pointer write access to target EntityStatusLRef
 \COUNTERMEASURE  \M Every supervised entity must reference a WdgM_EntityStatusLType in order to store runtime
                     variables. The Verifier has to confirm the existence of all references of EntityStatusLRef
                     'Test 6' in the Verifier validates this.

\ID SBSW_WDGM_012
 \DESCRIPTION     Function call with pointer WdgMCheckpointRef as parameter
 \COUNTERMEASURE  \M The given address for WdgMSupervisedEntityRef must be valid. This is guaranteed because the
                     Verifier tool has to confirm that the array size of WdgMSupervisedEntityRef is valid. 'Test 5'
                     in the Verifier validates that WDGM_NR_OF_ENTITIES is valid. 'Test 6' in the Verifier validates
                     that WdgMSupervisedEntityRef is a valid address.
                  \R A runtime check validates if the given supervised entity id is within the valid range. Only if
                     this check is passed, a access to the WdgMSupervisedEntityRef is done.
                  \M The address of WdgMCheckpointRef must be valid. This is guaranteed because the Verifier tool has
                     to confirm the number of valid entries in the checkpoint array WdgMCheckpointRef based on the
                     reference stored in the config array of all supervised entities.
                     'Test 1' in the Verifier confirms of NrOfCheckpoints checkpoints for this supervised entity.
                     'Test 2' in the Verifier confirms that WDGM_NR_OF_CHECKPOINTS is valid
                  \R A runtime check validates if the given checkpoint id is within the valid range. Only if this check
                     is passed, a access to the WdgMCheckpointRef is done.

\ID SBSW_WDGM_013
 \DESCRIPTION     Function call with pointer WdgMLocalTransitionRef as parameter
 \COUNTERMEASURE  \M The given pointer must be valid. This pointer is a reference to an entry of the generated array of
                     all local transitions WdgMLocalTransitionRef which is referenced within the checkpoint array. The
                     Verifier tool has to confirm the existence of a valid entry for all configured local incoming
                     transitions (for all NrOfLocalTransitions).
                     'Test 29' in the Verifier validates that WdgMLocalTransitionRef has a valid address.
                     'Test 3' in the Verifier validates that the NrOfLocalTransitions is valid for this checkpoint.
                  \R A runtime check confirms if local incoming transitions are configured for that checkpoint

\ID SBSW_WDGM_014
 \DESCRIPTION     Pointer write access to local config pointer array g_wdgm_cfg_ptr_array for multi-core usage
 \COUNTERMEASURE  \R A runtime check confirms that only valid entries of the global config pointer array are accessed

\ID SBSW_WDGM_015
 \DESCRIPTION     Write access to local arrays g_wdgm_first_exp_se_array, g_wdgm_first_exp_se_array_inv,
                  g_wdgm_first_exp_se_violation_array and g_wdgm_first_exp_se_violation_array_inv for multi-core usage
 \COUNTERMEASURE  \R A runtime check confirms that only valid entries of the array are accessed

SBSW_JUSTIFICATION_END */

/* COV_JUSTIFICATION_BEGIN

\ID COV_WDGM_COMPATIBILITY
 \ACCEPT TX
 \REASON [COV_MSR_COMPATIBILITY]

\ID COV_WDGM_MISRA
 \ACCEPT TX
 \REASON [COV_MSR_MISRA]

\ID COV_WDGM_NULL_PTR_DEFINE
 \ACCEPT XF
 \REASON If the NULL_PTR is not defined, the pointer is defined by the WdgM itself. In all configs the NULL_PTR is
         already defined via Compiler.h.

\ID COV_WDGM_TESTCONFIG
 \ACCEPT TX
 \REASON WDGM_UNIT_TESTS cannot be activated in normal use case. This switch is only used during test execution.

\ID COV_WDGM_INTERNAL_FUNCTIONS
 \ACCEPT TX
 \REASON WDGM_SOURCE is always defined within Wdgm.c and and WdgM_Checkpoint.c. All function declared in this sector
         must be available in both files but must not be available if WdgM.h is included by anyone else.

\ID COV_WDGM_AUTOSAR4_COMPATIBILITY
 \ACCEPT TX
 \REASON WDGM_AUTOSAR_4_x is statically generated as STD_ON. The WdgM only supports AUTOSAR 4 after generator update.
         Due to compatibility reasons the static code is not modified by now.

\ID COV_WDGM_AUTOSAR3_1_INCOMPATIBILITY
 \ACCEPT XF
 \REASON WDGM_AUTOSAR_3_1_X_COMPATIBILITY is statically generated as STD_OFF. The WdgM only supports AUTOSAR 4 after
         generator update. Due to compatibility reasons the static code is not modified by now.

\ID COV_WDGM_TIMEBASE_INTERNAL_HARDWARE_TICK_NOT_SUPPORTED
 \ACCEPT XF
 \ACCEPT TX
 \ACCEPT TX tf tf
 \REASON WDGM_TIMEBASE_SOURCE cannot be configured for WDGM_INTERNAL_HARDWARE_TICK. The current version of the
         generator only allows to configure / generate WDGM_INTERNAL_SOFTWARE_TICK or WDGM_EXTERNAL_TICK.
         Due to compatibility reasons the static code is not modified by now.

COV_JUSTIFICATION_END */

/**********************************************************************************************************************
 *  END OF FILE: WdgM.c
 *********************************************************************************************************************/
