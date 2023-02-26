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
/*!        \file  WdgM.h
 *        \brief  WdgM header file
 *
 *      \details  This is the header file of the module WdgM
 *
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  AUTHOR IDENTITY
 *  -------------------------------------------------------------------------------------------------------------------
 *  Name                          Initials      Company
 *  -------------------------------------------------------------------------------------------------------------------
 *  Christian Leder               virchl        Vector Informatik GmbH
 *  -------------------------------------------------------------------------------------------------------------------
 *  REVISION HISTORY
 *  -------------------------------------------------------------------------------------------------------------------
 *  Version   Date        Author  Change Id     Description
 *  -------------------------------------------------------------------------------------------------------------------
 *  05.00.00  2015-11-25  virchl  FEAT-1411     First version of the migrated Watchdog Manager
 *  05.01.00  2016-06-24  virchl  ESCAN00089702 Updated version numbers due to generator update
 *                                ESCAN00089890 Calculation of checksum in Init_CheckConfigChecksum adapted
 *  05.01.01  2016-07-29  virchl  ESCAN00091245 Only version numbers and version checks adapted here
 *  05.01.02  2016-08-08  virchl  ESCAN00091358 NULL_PTR check added before initializing all global transitions
 *  05.01.03  2016-10-05  virchl  ESCAN00092190 Deadline monitoring algorithm modified for global transitions
 *                        virchl  ESCAN00088240 Unconditional init check added in main function
 *********************************************************************************************************************/

#if !defined (WDGM_H)
# define WDGM_H

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
# include "WdgM_PBcfg.h"

/**********************************************************************************************************************
 *  GLOBAL CONSTANT MACROS
 *********************************************************************************************************************/

/* ----- Vendor and module identification ----- */
# define WDGM_VENDOR_ID                           (30u)
# define WDGM_MODULE_ID                           (13u)

/* ----- AUTOSAR Software specification version information ----- */
# define WDGM_AR_RELEASE_MAJOR_VERSION            (4u)
# define WDGM_AR_RELEASE_MINOR_VERSION            (0u)
# define WDGM_AR_RELEASE_REVISION_VERSION         (1u)

/* ----- Component version information (decimal version of ALM implementation package) ----- */
# define WDGM_SW_MAJOR_VERSION                    (5u)
# define WDGM_SW_MINOR_VERSION                    (1u)
# define WDGM_SW_PATCH_VERSION                    (3u)

/* ----- AUTOSAR Software specification version information (AUTOSAR 3 environment) ----- */
# define WDGM_AR_MAJOR_VERSION      WDGM_AR_RELEASE_MAJOR_VERSION
# define WDGM_AR_MINOR_VERSION      WDGM_AR_RELEASE_MINOR_VERSION
# define WDGM_AR_PATCH_VERSION      WDGM_AR_RELEASE_REVISION_VERSION

/* ----- WdgM_PBcfg.h version check ----- */
# if ( (WDGM_PBCFG_MAJOR_VERSION != WDGM_GENERATOR_MAJOR_VERSION) \
    || (WDGM_PBCFG_MINOR_VERSION != WDGM_GENERATOR_MINOR_VERSION) )
#  error "Version mismatch. Incorrect version of WdgM_PBcfg.h"
# endif

/* ----- API service IDs ----- */
# define API_ID_WdgM_Init                         (0x00u) /*!< Service ID: WdgM_Init() */
# define API_ID_WdgM_DeInit                       (0x01u) /*!< Service ID: WdgM_DeInit() */
                                                          /*!< Note: This function is not implemented and not used!
                                                           *         API ID declared for reasons of compatibility only!
                                                           */
# define API_ID_WdgM_CheckpointReached            (0x0eu) /*!< Service ID: WdgM_CheckpointReached() */
# define API_ID_WdgM_UpdateAliveCounter           (0x04u) /*!< Service ID: WdgM_UpdateAliveCounter() \n */
                                                          /*!< Note: used in AUTOSAR 3.1 compatibility mode only! */
# define API_ID_WdgM_GetVersionInfo               (0x02u) /*!< Service ID: WdgM_GetVersionInfo() */
# define API_ID_WdgM_SetMode                      (0x03u) /*!< Service ID: WdgM_SetMode() */
# define API_ID_WdgM_GetMode                      (0x0bu) /*!< Service ID: WdgM_GetMode() */
# define API_ID_WdgM_GetLocalStatus               (0x0cu) /*!< Service ID: WdgM_GetLocalStatus() \n */
                                                          /*!< Note: Same ID is defined in AUTOSAR 3.1 for function
                                                           *         WdgM_GetAliveSupervisionStatus
                                                           */
# define API_ID_WdgM_GetGlobalStatus              (0x0du) /*!< Service ID: WdgM_GetGlobalStatus() */
# define API_ID_WdgM_PerformReset                 (0x0fu) /*!< Service ID: WdgM_PerformReset() */
# define API_ID_WdgM_MainFunction                 (0x08u) /*!< Service ID: WdgM_MainFunction() */
# define API_ID_WdgM_DeactivateSupervisionEntity  (0x06u) /*!< Service ID: WdgM_DeactivateSupervisionEntity() \n */
                                                          /*!< Note: ID defined in AUTOSAR 3.1 for function
                                                           *         WdgM_DeactivateAliveSupervision
                                                           */
# define API_ID_WdgM_ActivateSupervisionEntity    (0x05u) /*!< Service ID: WdgM_ActivateSupervisionEntity() \n */
                                                          /*!< Note: ID defined in AUTOSAR 3.1 for function
                                                           *         WdgM_ActivateAliveSupervision
                                                           */
# define API_ID_WdgM_UpdateTickCount              (0x12u) /*!< Service ID: WdgM_UpdateTickCount() \n */
                                                          /*!< Note: ID defined by Vector Informatik */
# define API_ID_WdgM_GetFirstExpiredSEID          (0x10u) /*!< Service ID: WdgM_GetFirstExpiredSEID() \n */
                                                          /*!< Note: ID defined by Vector Informatik */
# define API_ID_WdgM_GetFirstExpiredSEViolation   (0x13u) /*!< Service ID: WdgM_GetFirstExpiredSEViolation() \n */
                                                          /*!< Note: ID defined by Vector Informatik */

/* ----- Error codes ----- */
# define WDGM_E_NO_INIT                           (0x10u) /*!< Error code: API service called if WdgM uninitialized */
# define WDGM_E_PARAM_CONFIG                      (0x11u) /*!< Error code: API service WdgM_Init() called with wrong
                                                           *               parameter
                                                           */
# define WDGM_E_PARAM_MODE                        (0x12u) /*!< Error code: API service WdgM_SetMode() called with
                                                           *               wrong parameter
                                                           */
# define WDGM_E_PARAM_SEID                        (0x13u) /*!< Error code: API service WdgM_Init() called and no
                                                           *               supervised entity is configured \n
                                                           */
                                                          /*!< Error code: API service called with wrong supervised
                                                           *               entity id
                                                           */
# define WDGM_E_NULL_POINTER                      (0x14u) /*!< Error code: API service called with NULL_PTR as
                                                           *               parameter
                                                           */
# define WDGM_E_DISABLE_NOT_ALLOWED               (0x15u) /*!< Error code: API service WdgM_Init() called and a trigger
                                                           *               mode is erroneously configured to be OFF and 
                                                           *               OFF mode is not allowed
                                                           */
# define WDGM_E_CPID                              (0x16u) /*!< Error code: API service WdgM_Init() called and on
                                                           *               checkpoint is configured in a supervised
                                                           *               entity \n
                                                           */
                                                          /*!< Error code: API service WdgM_CheckpointReached() called
                                                           *               with wrong checkpoint id
                                                           */
# define WDGM_E_DEPRECATED                        (0x17u) /*!< Error code: Not used */
# define WDGM_E_TIMEBASE                          (0x28u) /*!< Error code: API service WdgM_MainFunction() detected
                                                           *               'stuck-in' or 'negative jump' of timebase 
                                                           *               tick counter or timebase tick counter is out
                                                           *               of configured range
                                                           */
# define WDGM_E_PARAM_STATE                       (0x29u) /*!< Error code: API services WdgM_MainFunction() or
                                                           *               WdgM_CheckpointReached is called and local /
                                                           *               global status is undefined
                                                           */
# define WDGM_E_WDGIF_MODE                        (0x2Au) /*!< Error code: API services of WdgIf called and return
                                                           *               value is E_NOT_OK
                                                           */
# define WDGM_E_MEMORY_FAILURE                    (0x2Bu) /*!< Error code: API service WdgM_MainFunction() detected
                                                           *               memory corruption
                                                           */
# define WDGM_E_REENTRANCY                        (0x2Cu) /*!< Error code: API service WdgM_MainFunction() called while
                                                           *               already invoked
                                                           */
# define WDGM_E_DEACTIVATION                      (0x2Du) /*!< Error code: Supervised entity shall be deactivate while
                                                           *               supervised entity is active
                                                           */
# define WDGM_E_WRONG_PROCESSOR_CORE              (0x2Eu) /*!< Error code: API service and invalid processor core id
                                                           *               is determined within the service
                                                           */

/* ----- General macros ----- */
# define WDGM_INVALID_CP_ID              ((WdgM_CheckpointIdType) 0xFFFFu)       /*!< Invalid checkpoint id */
# define WDGM_INVALID_SE_ID              ((WdgM_SupervisedEntityIdType) 0xFFFFu) /*!< Invalid supervised entity id */
# define WDGM_INVALID_TR_ID              ((WdgM_TransitionIdType) 0xFFFFu)       /*!< Invalid transition id */
# define WDGM_INITIAL_TICK_COUNT         (0x00000001uL)                          /*!< Initial tick counter value */
# define WDGM_INTERNAL_CP_TEST_OK        (0x7931u)                               /*!< Positive result for internal
                                                                                  *   failure detection
                                                                                  **/
# define WDGM_INTERNAL_CP_TEST_NOK       (0x0u)                                  /*!< Negative result for internal
                                                                                  *   failure
                                                                                  **/
# define WDGM_MAX_SUPPORTED_CORES        (4u)                                    /*!< Number of maximum supported
                                                                                  *   cores
                                                                                  */

/* ----- AUTOSAR debugging ----- */
# define WDGM_VIOLATION_NONE                      (0x00u) /*!< No Failure */
# define WDGM_VIOLATION_PF                        (0x01u) /*!< Program Flow (Logical Supervision) Failure */
# define WDGM_VIOLATION_DM                        (0x02u) /*!< Deadline Monitoring Failure */
# define WDGM_VIOLATION_AS                        (0x04u) /*!< Alive Supervision Failure */
# define WDGM_VIOLATION_PF_DM                     (0x03u)
# define WDGM_VIOLATION_PF_AS                     (0x05u)
# define WDGM_VIOLATION_DM_AS                     (0x06u)
# define WDGM_VIOLATION_PF_DM_AS                  (0x07u)

# define WDGM_VIOLATION_PF_OFFSET                 (0x00u)
# define WDGM_VIOLATION_DM_OFFSET                 (0x01u)
# define WDGM_VIOLATION_AS_OFFSET                 (0x02u)


/* ----- Dem call macro ----- */
# if (WDGM_DEM_REPORT == STD_ON)
#  define WDGM_DEM_REPORTERROR(event_id,event_status)       Appl_Dem_ReportErrorStatus(event_id, event_status) /* PRQA S 3453  */ /* MD_MSR_19.7 */
# else
#  define WDGM_DEM_REPORTERROR(event_id,event_status)
# endif

/* ----- Det call macro ----- */
# if (WDGM_DEV_ERROR_DETECT == STD_ON)
/* WDGM301: all development errors shall be configurable*/
#  define WDGM_DET_REPORTERROR(mod_id,ven_id,api_id,det_id) Appl_Det_ReportError(mod_id, ven_id, api_id, det_id) /* PRQA S 3453  */ /* MD_MSR_19.7 */
# else
#  define WDGM_DET_REPORTERROR(mod_id,ven_id,api_id,det_id)
# endif


/**********************************************************************************************************************
 *  GLOBAL DATA PROTOTYPES
 *********************************************************************************************************************/

/* ----- Externals for AUTOSAR DEBUGGING ----- */

/* Following data structures grant access for AUTOSAR DEBUGGING (as described in
   AUTOSAR 4.0r3 requirements WDGM234 to WDGM242) to following data elements
   (where cfg_p is either g_wdgm_cfg_ptr or g_wdgm_cfg_ptr_array[core_id],
   explained in the note below):
    - Local Monitoring Status of each Supervised Entity (see WDGM238)
        cfg_p->WdgMSupervisedEntityRef[SEID].EntityStatusGRef->LocalMonitoringStatus
        Stores the local monitoring status for supervised entity SEID computed
        during the last call of the WdgM_MainFunction.
    - Global Monitoring Status (see WDGM239)
        cfg_p->DataGRef->GlobalMonitoringStatus
        Stores the global monitoring status computed during the last call of
        the WdgM_MainFunction.
    - Alive Counters of each Checkpoint (see WDGM240)
        cfg_p->WdgMSupervisedEntityRef[SEID].WdgMCheckpointRef[CPID].WdgMAliveLRef->AliveCounter
        Stores the current alive counter state of the checkpoint CPID of
        supervised entity SEID.
    - Timestamp when the initial Checkpoint of an SE has been reached (see WDGM241)
        cfg_p->WdgMSupervisedEntityRef[SEID].EntityStatusLRef->RememberedInitialCheckpointTime
        Stores the timestamp when the initial checkpoint of supervised entity
        SEID has been reached.
    - Reached Checkpoints (see WDGM242)
        cfg_p->WdgMSupervisedEntityRef[SEID].EntityStatusLRef->RememberedCheckpointId
        Stores the ID of the last reached checkpoint which belongs to supervised entity SEID.
        cfg_p->WdgMSupervisedEntityRef[SEID].EntityStatusLRef->RememberedCheckpointTime
        Stores the timestamp of the last reached checkpoint of supervised
        entity SEID.
*/

# if (WDGM_MULTICORE_USAGE == STD_ON)

#  define WDGM_START_SEC_CONST_32BIT
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/*! Config-Pointer-Array that provides access to the variables in case of a multi-core system */
extern CONSTP2CONST(WdgM_ConfigType *, WDGM_CONST, WDGM_APPL_CONST) g_wdgm_cfg_ptr_array[WDGM_MAX_SUPPORTED_CORES];

#  define WDGM_STOP_SEC_CONST_32BIT
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#   if (!defined WDGM_UNIT_TESTS) /* COV_WDGM_TESTCONFIG */

#   define WDGM_START_SEC_CONST_UNSPECIFIED
#   include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/*! Reference to constant array that contains all WdgMSupervisedEntities - needed to determine coreID out of SEID  */
extern P2CONST(WdgM_SupervisedEntityType, WDGM_CONST, WDGM_APPL_CONST) WdgMSupervisedEntityRef; /* PRQA S 0781 */ /* MD_WdgM_0781 */
/*! Constant that holds the max number of supervised entity */
extern CONST(WdgM_SupervisedEntityIdType, WDGM_CONST) WdgMNrOfSupervisedEntities;

#   define WDGM_STOP_SEC_CONST_UNSPECIFIED
#   include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#   else /* if defined WDGM_UNIT_TESTS */
extern P2VAR(WdgM_SupervisedEntityType, AUTOMATIC, WDGM_APPL_DATA) WdgMSupervisedEntityRef; /* PRQA S 0781 */ /* MD_WdgM_0781 */
extern VAR(WdgM_SupervisedEntityIdType, AUTOMATIC) WdgMNrOfSupervisedEntities;
#   endif /* (!defined WDGM_UNIT_TESTS) */

# else /* (WDGM_MULTICORE_USAGE == STD_ON) */

#  define WDGM_START_SEC_CONST_32BIT
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/*! Config-Pointer which provides access to the variables in case of a single-core system or if only one processor
 *  core in a multi-core system
 */
extern P2CONST(WdgM_ConfigType, WDGM_CONST, WDGM_APPL_CONST) g_wdgm_cfg_ptr;

#  define WDGM_STOP_SEC_CONST_32BIT
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# endif /* (WDGM_MULTICORE_USAGE == STD_ON) */


/**********************************************************************************************************************
 *  GLOBAL FUNCTION PROTOTYPES
 *********************************************************************************************************************/

# define WDGM_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *  WdgM_Init()
 *********************************************************************************************************************/
/*! \brief        Initializes the module
 *  \details      WdgM_Init function initializes the WdgM. It initializes all variables and sets the global supervision
 *                status to WDGM_GLOBAL_STATUS_OK and all local supervision statuses to WDGM_LOCAL_STATUS_OK or
 *                WDGM_LOCAL_STATUS_DEACTIVATED depending on the configuration. After the execution of this function,
 *                supervision is activated according to the configuration of WdgMConfigPtr.
 *  \param[in]    WdgMConfigPtr     Pointer to the WdgM configuration structure
 *  \pre          Module is uninitialized
 *  \context      TASK
 *  \reentrant    FALSE
 *  \synchronous  TRUE
 *  \note         This function can be also used during supervision, but note that all pending violations are lost
 *  \trace        DSGN-WdgM22759
 *  \trace        SPEC-2068268
 */
FUNC(void, WDGM_CODE) WdgM_Init(P2CONST(WdgM_ConfigType, AUTOMATIC, WDGM_APPL_CONST) WdgMConfigPtr);


# if (WDGM_VERSION_INFO_API == STD_ON)
/**********************************************************************************************************************
 *  WdgM_GetVersionInfo()
 *********************************************************************************************************************/
/*! \brief        Returns the version information of this module
 *  \details      WdgM_GetVersionInfo returns information about the version of this module. This includes the module
 *                ID, the vendor ID, and the vendor-specific version number
 *  \param[in]    versioninfo       Pointer to where to store the version information of the WdgM module
 *  \pre          -
 *  \context      TASK
 *  \reentrant    TRUE
 *  \synchronous  TRUE
 *  \config       WDGM_VERSION_INFO_API is STD_ON
 *  \note         Module does not need to be initialized to use this service
 *  \trace        DSGN-WdgM22733
 */
FUNC(void, WDGM_CODE) WdgM_GetVersionInfo(P2VAR(Std_VersionInfoType, AUTOMATIC, WDGM_APPL_DATA) versioninfo);
# endif /* WDGM_VERSION_INFO_API == STD_ON */


# if (WDGM_AUTOSAR_3_1_X_COMPATIBILITY == STD_ON) /* COV_WDGM_AUTOSAR3_1_INCOMPATIBILITY */
/**********************************************************************************************************************
 *  WdgM_UpdateAliveCounter()
 *********************************************************************************************************************/
/*! \brief        Reports a reached checkpoint
 *  \details      WdgM_UpdateAliveCounter is called to indicate to the WdgM that a checkpoint within a supervised
 *                entity has been reached.
 *                In an AUTOSAR 3 environment, the function name of WdgM_CheckpointReached changes to
 *                WdgM_UpdateAliveCounter.
 *  \param[in]    SEID      Identifier of the supervised entity that reports a checkpoint
 *  \return       E_OK      Checkpoint reported successfully
 *  \return       E_NOT_OK  Error detected during reporting the checkpoint
 *  \pre          Module is initialized
 *  \context      TASK
 *  \reentrant    TRUE - in the context of different supervised entities
 *  \synchronous  TRUE
 *  \config       WDGM_AUTOSAR_3_1_X_COMPATIBILITY
 *  \note         The CPID (value zero) is added in the embedded code
 *  \trace        DSGN-WdgM22775
 */
FUNC(Std_ReturnType, WDGM_CODE) WdgM_UpdateAliveCounter(VAR(WdgM_SupervisedEntityIdType, AUTOMATIC) SEID);


/**********************************************************************************************************************
 *  WdgM_SetMode()
 *********************************************************************************************************************/
/*! \brief        Requests a new trigger mode
 *  \details      WdgM_SetMode requests a new trigger mode. The trigger mode is a set of watchdog trigger times and a
 *                watchdog mode.
 *  \param[in]    Mode       Desired new trigger mode id
 *  \return       E_OK       New trigger mode successfully requested
 *  \return       E_NOT_OK   Error detected during requesting the new trigger mode
 *  \pre          Module is initialized
 *  \context      TASK
 *  \reentrant    TRUE
 *  \synchronous  FALSE
 *  \config       WDGM_AUTOSAR_3_1_X_COMPATIBILITY
 *  \note         A change to trigger mode with id Mode sets all configured watchdogs to the trigger mode with id Mode.
 *                As a consequence, all watchdogs must have configured the same number of Trigger Modes
 *  \note         In contrast to AUTOSAR, where the mode represents a set of entities with entity-specific parameters,
 *                the trigger mode only sets the following parameters:
 *                WdgMTriggerConditionValue, WdgMTriggerWindowStart, WdgMWatchdogMode
 *  \note         The CallerID (value zero) is added in the embedded code
 *  \trace        DSGN-WdgM22781
 */
FUNC(Std_ReturnType, WDGM_CODE) WdgM_SetMode(VAR(WdgM_ModeType, AUTOMATIC) Mode);
# else /* if (WDGM_AUTOSAR_3_1_X_COMPATIBILITY == STD_OFF) */
/**********************************************************************************************************************
 *  WdgM_CheckpointReached()
 *********************************************************************************************************************/
/*! \brief        Reports a reached checkpoint
 *  \details      WdgM_CheckpointReached is called to indicate to the WdgM that a checkpoint within a supervised entity
 *                has been reached.
 *  \param[in]    SEID      Identifier of the supervised entity that reports a checkpoint
 *  \param[in]    CPID      Identifier of the checkpoint within a supervised entity that has been reached
 *  \return       E_OK      Checkpoint reported successfully
 *  \return       E_NOT_OK  Error detected during reporting the checkpoint
 *  \pre          Module is initialized
 *  \context      TASK
 *  \reentrant    TRUE - in the context of different supervised entities
 *  \synchronous  TRUE
 *  \config       WDGM_AUTOSAR_3_1_X_COMPATIBILITY is STD_OFF
 *  \trace        DSGN-WdgM22775, DSGN-WdgM22763
 *  \trace        SPEC-2068291, SPEC-2068301, SPEC-2068304, SPEC-2068305, SPEC-2068307
 */
FUNC(Std_ReturnType, WDGM_CODE) WdgM_CheckpointReached(
  VAR(WdgM_SupervisedEntityIdType, AUTOMATIC) SEID,
  VAR(WdgM_CheckpointIdType, AUTOMATIC) CPID
  );


/**********************************************************************************************************************
 *  WdgM_SetMode()
 *********************************************************************************************************************/
/*! \brief        Requests a new trigger mode
 *  \details      WdgM_SetMode requests a new trigger mode. The trigger mode is a set of watchdog trigger times and a
 *                watchdog mode.
 *  \param[in]    Mode       Desired new trigger mode id
 *  \param[in]    CallerID   Id of this function's caller
 *  \return       E_OK       New trigger mode successfully requested
 *  \return       E_NOT_OK   Error detected during requesting the new trigger mode
 *  \pre          Module is initialized
 *  \context      TASK
 *  \reentrant    TRUE
 *  \synchronous  FALSE
 *  \config       WDGM_AUTOSAR_3_1_X_COMPATIBILITY is STD_OFF
 *  \note         A change to trigger mode with id Mode sets all configured watchdogs to the trigger mode with  Mode.
 *                As a consequence, all watchdogs must have configured the same number of Trigger Modes
 *  \note         In contrast to AUTOSAR, where the mode represents a set of entities with entity-specific parameters,
 *                the trigger mode only sets the following parameters:
 *                WdgMTriggerConditionValue, WdgMTriggerWindowStart, WdgMWatchdogMode
 *  \trace        DSGN-WdgM22781
 *  \trace        SPEC-2068343, SPEC-2068325
 */
FUNC(Std_ReturnType, WDGM_CODE) WdgM_SetMode(VAR(WdgM_ModeType, AUTOMATIC) Mode, VAR(uint16, AUTOMATIC) CallerID);
# endif /* (WDGM_AUTOSAR_3_1_X_COMPATIBILITY == STD_ON) */


/**********************************************************************************************************************
 *  WdgM_GetMode()
 *********************************************************************************************************************/
/*! \brief        Returns the current trigger mode of the WdgM
 *  \details      WdgM_GetMode stores the current trigger mode to the variable referenced by the input parameter.
 *  \param[out]   Mode      Pointer to the current trigger mode id of the Watchdog Manager
 *  \return       E_OK      Current trigger mode successfully returned.
 *                E_NOT_OK  Returning current trigger mode failed.
 *  \pre          Module is initialized
 *  \context      TASK
 *  \reentrant    TRUE
 *  \synchronous  TRUE
 *  \note         In contrast to AUTOSAR, where the returned mode represents a set of entities with entity-specific
 *                parameters, the function returns only the current trigger mode
 *  \trace        DSGN-WdgM22782
 */
FUNC(Std_ReturnType, WDGM_CODE) WdgM_GetMode(P2VAR(WdgM_ModeType, AUTOMATIC, WDGM_APPL_DATA) Mode);


/**********************************************************************************************************************
 *  WdgM_GetLocalStatus()
 *********************************************************************************************************************/
/*! \brief        Returns the current supervision status of the requested supervised entity
 *  \details      WdgM_GetLocalStatus returns the the local supervision status of a single supervised entity
 *  \param[in]    SEID            Identifier of the supervised entity
 *  \param[out]   EntityStatus    Pointer to the local supervision status of the given supervised entity
 *  \return       E_OK            Current local supervision status successfully returned
 *  \return       E_NOT_OK        Error detected and returning the current status failed
 *  \pre          Module is initialized
 *  \context      TASK
 *  \reentrant    TRUE
 *  \synchronous  TRUE
 *  \note         The local supervision statuses are updated each supervision cycle within the main function
 *  \trace        DSGN-WdgM22776
 */
FUNC(Std_ReturnType, WDGM_CODE) WdgM_GetLocalStatus(
  VAR(WdgM_SupervisedEntityIdType, AUTOMATIC) SEID,
  P2VAR(WdgM_LocalStatusType, AUTOMATIC, WDGM_APPL_DATA) EntityStatus
  );


/**********************************************************************************************************************
 *  WdgM_GetGlobalStatus()
 *********************************************************************************************************************/
/*! \brief        Returns the current global supervision status
 *  \details      WdgM_GetGlobalStatus returns the the global supervision status of the overall WdgM
 *  \param[out]   Status    Pointer to the local supervision status of the given supervised entity
 *  \return       E_OK      Current global supervision status successfully returned
 *  \return       E_NOT_OK  Error detected and returning the current status failed
 *  \pre          Module is initialized
 *  \context      TASK
 *  \reentrant    TRUE
 *  \synchronous  TRUE
 *  \note         The global supervision status is updated each supervision cycle within the main function based on
 *                every local supervision status
 *  \trace        DSGN-WdgM22777
 */
FUNC(Std_ReturnType, WDGM_CODE) WdgM_GetGlobalStatus(P2VAR(WdgM_GlobalStatusType, AUTOMATIC, WDGM_APPL_DATA) Status);


/**********************************************************************************************************************
 *  WdgM_PerformReset()
 *********************************************************************************************************************/
/*! \brief        Resets the processor
 *  \details      WdgM_PerformReset instructs the WdgM to cause an (immediate) watchdog reset
 *  \return       E_OK      This value will not be returned because the reset is activated and the routine does not
 *                          return in a positive case
 *  \return       E_NOT_OK  Error detected and performing a reset failed
 *  \pre          Module is initialized
 *  \context      TASK
 *  \reentrant    FALSE
 *  \synchronous  TRUE
 *  \note         This function is hardware-dependent. Some watchdogs do not support an immediate reset. Check the
 *                documentation of the used watchdog driver
 *  \note         This function  may directly access hardware registers. Access to hardware registers can be dependent
 *                on hardware platforms and software architectures. Hence, the application that calls WdgM_PerformReset
 *                must have the corresponding access rights
 *  \trace        DSGN-WdgM22778
 */
FUNC(Std_ReturnType, WDGM_CODE) WdgM_PerformReset(void);


# if (WDGM_ENTITY_DEACTIVATION_ENABLED == STD_ON)
/**********************************************************************************************************************
 *  WdgM_DeactivateSupervisionEntity()
 *********************************************************************************************************************/
/*! \brief        Requests an supervised entity to become deactivated
 *  \details      WdgM_DeactivateSupervisionEntity marks an entity for deactivation. The deactivation itself happens at
 *                the end of the supervision cycle inside the main function. When an entity is deactivated then its
 *                checkpoints are not evaluated anymore and the local supervision status is 
 *                WDGM_LOCAL_STATUS_DEACTIVATED
 *  \param[in]    SEID      Identifier of the supervised entity whose supervision should be deactivated
 *  \return       E_OK      Marking the supervised entity for deactivation was successful.
 *  \return       E_NOT_OK  Marking the supervised entity for deactivation failed.
 *  \pre          Module is initialized
 *  \pre          Local supervision status is either WDGM_LOCAL_STATUS_OK or WDGM_LOCAL_STATUS_FAILED
 *  \context      TASK
 *  \reentrant    TRUE - in the context of different supervised entities
 *  \synchronous  FALSE
 *  \config       WDGM_ENTITY_DEACTIVATION_ENABLED
 *  \note         Functionality defined in the AUTOSAR 3 specification. This function is no longer available in the
 *                AUTOSAR 4 specification
 *  \note         When an entity is deactivated, global transitions to this entity are not evaluated
 *  \note         Using this function can degrade system safety. The deactivation of entity supervision in safety-
 *                related products needs special attention to avoid unintended supervised entity deactivation.
 *  \trace        DSGN-WdgM22780
 */
FUNC(Std_ReturnType, WDGM_CODE) WdgM_DeactivateSupervisionEntity(VAR(WdgM_SupervisedEntityIdType, AUTOMATIC) SEID);


/**********************************************************************************************************************
 *  WdgM_ActivateSupervisionEntity()
 *********************************************************************************************************************/
/*! \brief        Requests an supervised entity to become activated
 *  \details      WdgM_ActivateSupervisionEntity marks an entity for activation. The activation itself happens at the
 *                end of the supervision cycle inside the main function.
 *  \param[in]    SEID      Identifier of the supervised entity whose supervision should be activated
 *  \return       E_OK      Marking the supervised entity for activation was successful.
 *  \return       E_NOT_OK  Marking the supervised entity for activation failed.
 *  \pre          Module is initialized
 *  \pre          Local supervision status is either WDGM_LOCAL_STATUS_DEACTIVATED
 *  \context      TASK
 *  \reentrant    TRUE - in the context of different supervised entities
 *  \synchronous  FALSE
 *  \config       WDGM_ENTITY_DEACTIVATION_ENABLED
 *  \note         Functionality defined in the AUTOSAR 3 specification. This function is no longer available in the
 *                AUTOSAR 4 specification
 *  \trace        DSGN-WdgM22780
 */
FUNC(Std_ReturnType, WDGM_CODE) WdgM_ActivateSupervisionEntity(VAR(WdgM_SupervisedEntityIdType, AUTOMATIC) SEID);
# endif /* (WDGM_ENTITY_DEACTIVATION_ENABLED == STD_ON) */


# if (WDGM_TIMEBASE_SOURCE == WDGM_EXTERNAL_TICK)
/**********************************************************************************************************************
 *  WdgM_UpdateTickCount()
 *********************************************************************************************************************/
/*! \brief        Increments the timebase tick counter
 *  \details      WdgM_UpdateTickCount increments the timebase tick counter by one. When the pre-compile configuration
 *                parameter WdgMTimebaseSource is set to WDGM_EXTERNAL_TICK, then this function needs to be called
 *                periodically from outside the WdgM. In the AUTOSAR environment, this function can be called, for
 *                example, from a task with fixed time period and high priority.
 *  \pre          Module is initialized
 *  \context      ANY
 *  \reentrant    FALSE
 *  \synchronous  TRUE
 *  \config       WDGM_EXTERNAL_TICK
 *  \trace        DSGN-WdgM23126
 */
FUNC(void, WDGM_CODE) WdgM_UpdateTickCount(void);
# endif /* (WDGM_TIMEBASE_SOURCE == WDGM_EXTERNAL_TICK) */


/**********************************************************************************************************************
 *  WdgM_MainFunction()
 *********************************************************************************************************************/
/*! \brief        Processes all cyclic WdgM jobs.
 *  \details      WdgM_MainFunction evaluates the supervision data gathered from the reached checkpoints in all
 *                supervised entities during the supervision cycle. Depending on the violation (if there is any), the
 *                local supervision status of the supervised entities and the global supervision status are 
 *                redetermined. Depending on the result of the global supervision status, the watchdog devices are
 *                triggered, the triggering of the watchdog devices discontinues (safe state), or the watchdog devices
 *                are reset (safe state).
 *  \pre          Module is initialized
 *  \context      TASK
 *  \reentrant    FALSE
 *  \synchronous  TRUE
 *  \note         The function must be executed at the end of every supervision cycle. It may be called by the Basic
 *                Software Scheduler or a task with a fixed period time
 *  \trace        DSGN-WdgM22783
 *  \trace        SPEC-2068267, SPEC-2068270, SPEC-2068271, SPEC-2068272, SPEC-2068273, SPEC-2068274, SPEC-2068275
 *  \trace        SPEC-2068276, SPEC-2068277, SPEC-2068278, SPEC-2068279, SPEC-2068280, SPEC-2068281, SPEC-2068310
 *  \trace        SPEC-2068312, SPEC-2068314, SPEC-2595953, SPEC-2068316, SPEC-2068317, SPEC-2068318, SPEC-2068319
 *  \trace        SPEC-2068320, SPEC-2068321, SPEC-2068323
 */
FUNC(void, WDGM_CODE) WdgM_MainFunction(void); /* PRQA S 3451 */ /* MD_WdgM_3451 */


/**********************************************************************************************************************
 *  WdgM_GetFirstExpiredSEID()
 *********************************************************************************************************************/
/*! \brief        Returns the id of that supervised entity which first reached the status WDGM_LOCAL_STATUS_EXPIRED
 *  \details      WdgM_GetFirstExpiredSEID returns the id of that supervised entity which first reached the local
 *                supervision status WDGM_LOCAL_STATUS_EXPIRED and, thus, is potentially responsible for a system
 *                reset.
 *  \param[out]   SEID      Pointer to a variable that stores the id of the first supervised entity which has made a
 *                          transition to the local supervision status WDGM_LOCAL_STATUS_EXPIRED or 0 if the function
 *                          did not execute correctly
 *  \return       E_OK      The function could extract the record for the first expired supervised entity successfully
 *  \return       E_NOT_OK  Error detected (input parameter or memory corruption of the record)
 *  \pre          At least one supervised entity has reached WDGM_LOCAL_STATUS_EXPIRED
 *  \context      TASK
 *  \reentrant    FALSE
 *  \synchronous  TRUE
 *  \note         The record for the first expired supervised entity is stored double inverse (so that memory 
 *                corruption can be detected) and in a variable section that is not initialized (to preserve the data 
 *                after a reset, but this also means that there is initially no valid entry)
 *  \trace        DSGN-WdgM22779
 */
FUNC(Std_ReturnType, WDGM_CODE) WdgM_GetFirstExpiredSEID(
  P2VAR(WdgM_SupervisedEntityIdType, AUTOMATIC, WDGM_APPL_DATA) SEID
  );


# if (WDGM_AUTOSAR_DEBUGGING == STD_ON)
/**********************************************************************************************************************
 *  WdgM_GetFirstExpiredSEViolation()
 *********************************************************************************************************************/
/*! \brief        Returns the violation type of that supervised entity which first reached the status
 *                WDGM_LOCAL_STATUS_EXPIRED
 *  \details      WdgM_GetFirstExpiredSEViolation returns the violation type of that supervised entity which first
 *                reached the local supervision status WDGM_LOCAL_STATUS_EXPIRED and, thus, is potentially responsible
 *                for a system reset.
 *  \param[out]   ViolationType   Pointer to a variable that stores the violation type that caused the first supervised
 *                                entity to make a transition to status WDGM_LOCAL_STATUS_EXPIRED.
 *  \return       E_OK            The function was able to successfully extract the record for the first violation type
 *  \return       E_NOT_OK        Error detected (input parameter or memory corruption of the record)
 *  \pre          At least one supervised entity has reached WDGM_LOCAL_STATUS_EXPIRED
 *  \context      TASK
 *  \reentrant    FALSE
 *  \synchronous  TRUE
 *  \config       WDGM_AUTOSAR_DEBUGGING
 *  \note         The record for the violation type is stored double inverse (so that memory corruption can be
 *                detected) and in a variable section that is not initialized (to preserve the data after a reset, but
 *                this also means that there is initially no valid entry)
 *  \trace        DSGN-WdgM23070
 */
FUNC(Std_ReturnType, WDGM_CODE) WdgM_GetFirstExpiredSEViolation(
  P2VAR(WdgM_ViolationType, AUTOMATIC, WDGM_APPL_DATA) ViolationType
  );
# endif /* (WDGM_AUTOSAR_DEBUGGING == STD_ON) */


# if defined (WDGM_SOURCE) /* COV_WDGM_INTERNAL_FUNCTIONS */
/**********************************************************************************************************************
 *  LOCAL FUNCTION PROTOTYPES - used in WdgM.c and WdgM_Checkpoint.c
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  WdgM_GetTickCount()
 *********************************************************************************************************************/
/*! \brief        Returns the current timebase tick counter value
 *  \details      WdgM_GetTickCount is an internal function and calls WdgIf_GetCounter if the timebase source is set to
 *                WDGM_INTERNAL_HARDWARE_TICK, otherwise returns the internal tick counter.
 *  \param[in]    wdgm_cfg_ptr      Pointer to the configuration structure to get the internal tick counter, if
 *                                  timebase source is set to WDGM_INTERNAL_SOFTWARE_TICK or WDGM_EXTERNAL_TICK
 *  \return       Current tick counter value
 *  \pre          -
 *  \context      TASK
 *  \reentrant    FALSE
 *  \synchronous  TRUE
 *  \note         WdgIf_GetTickCounter is an optional interface which is not specified by AUTOSAR.
 *  \trace        DSGN-WdgM22783, DSGN-WdgM22775
 */
#  if (WDGM_TIMEBASE_SOURCE == WDGM_INTERNAL_HARDWARE_TICK) /* COV_WDGM_TIMEBASE_INTERNAL_HARDWARE_TICK_NOT_SUPPORTED */
FUNC(WdgM_TimeBaseTickType, WDGM_CODE) WdgM_GetTickCount(void);
#  else /* (WDGM_TIMEBASE_SOURCE == WDGM_INTERNAL_HARDWARE_TICK) */
FUNC(WdgM_TimeBaseTickType, WDGM_CODE) WdgM_GetTickCount(
  P2CONST (WdgM_ConfigType, AUTOMATIC, WDGM_APPL_CONST) wdgm_cfg_ptr
  );
#  endif /* (WDGM_TIMEBASE_SOURCE == WDGM_INTERNAL_HARDWARE_TICK) */


#  if (WDGM_GLOBAL_TRANSITIONS == STD_ON)
/**********************************************************************************************************************
 *  WdgM_WriteGlobalActivityFlag()
 *********************************************************************************************************************/
/*! \brief        Writes the global activity flag to a given value
 *  \details      WdgM_WriteGlobalActivityFlag is an internal function and sets or resets the global activity flag in
 *                the shared memory according to the input parameter.
 *  \param[in]    activity_flag     New value for the global activity flag
 *  \param[in]    wdgm_cfg_ptr      Pointer to the configuration structure to get access to the activity flag
 *  \pre          Must be called under disabled interrupts
 *  \context      TASK
 *  \reentrant    FALSE
 *  \synchronous  TRUE
 *  \config       WDGM_GLOBAL_TRANSITIONS
 *  \trace        DSGN-WdgM22759, DSGN-WdgM22775
 */
FUNC(void, WDGM_CODE) WdgM_WriteGlobalActivityFlag(
  VAR (WdgM_SharedBooleanType, AUTOMATIC) activity_flag,
  P2CONST(WdgM_ConfigType, AUTOMATIC, WDGM_APPL_CONST) wdgm_cfg_ptr
  );


/**********************************************************************************************************************
 *  WdgM_WriteGlobalTransitionFlag()
 *********************************************************************************************************************/
/*! \brief        Writes the global transition value to a given value
 *  \details      WdgM_WriteGlobalTransitionFlag is an internal function and sets or resets the global transition flag
 *                in the shared memory and its inverted value according to the input parameter.
 *  \param[in]    global_tr_id      Id of the global transition
 *  \param[in]    new_value         New value for the global transition flag
 *  \param[in]    wdgm_cfg_ptr      Pointer to the configuration structure to get access to the activity flag
 *  \pre          Module is initialized
 *  \context      TASK
 *  \reentrant    FALSE
 *  \synchronous  TRUE
 *  \config       WDGM_GLOBAL_TRANSITIONS
 *  \trace        DSGN-WdgM22759, DSGN-WdgM22775
 */
FUNC(void, WDGM_CODE) WdgM_WriteGlobalTransitionFlag(
  VAR(WdgM_TransitionIdType, AUTOMATIC) global_tr_id,
  VAR(WdgM_SharedBooleanType, AUTOMATIC) new_value,
  P2CONST(WdgM_ConfigType, AUTOMATIC, WDGM_APPL_CONST) wdgm_cfg_ptr
  );


/**********************************************************************************************************************
 *  WdgM_ReadGlobalTransitionFlag()
 *********************************************************************************************************************/
/*! \brief        Returns the current global transition flag
 *  \details      WdgM_ReadGlobalTransitionFlag is an internal function and reads the global transition flag of a
 *                certain global transition. If the given parameter 'clear_after_read' is TRUE, the certain global
 *                transition flag is cleared.
 *  \param[in]    global_tr_id      Id of the global transition
 *  \param[in]    clear_after_read  TRUE if the global transition flags should be cleared atomically with the reading
 *  \param[in]    wdgm_cfg_ptr      Pointer to the configuration structure to get access to the activity flag
 *  \return       TRUE              Global Transition is active and can be passed
 *  \return       FALSE             Global Transition is not active or already passed
 *  \pre          Module is initialized
 *  \context      TASK
 *  \reentrant    FALSE
 *  \synchronous  TRUE
 *  \config       WDGM_GLOBAL_TRANSITIONS
 *  \trace        DSGN-WdgM22783, DSGN-WdgM22775
 */
FUNC(WdgM_SharedBooleanType, WDGM_CODE) WdgM_ReadGlobalTransitionFlag(
  VAR(WdgM_TransitionIdType, AUTOMATIC) global_tr_id,
  VAR(boolean, AUTOMATIC) clear_after_read,
  P2CONST(WdgM_ConfigType, AUTOMATIC, WDGM_APPL_CONST) wdgm_cfg_ptr
  );
#  endif /* (WDGM_GLOBAL_TRANSITIONS == STD_ON) */
# endif /* defined (WDGM_SOURCE) */


# define WDGM_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */  /* MD_MSR_19.1 */

/*!
 * \exclusivearea WDGM_EXCLUSIVE_AREA_0
 * Ensures atomically (under disabled interrupts) write and read access
 * \protects Global shared memory and sensitive variables of the WdgM
 * \usedin WdgM_CheckpointReached, WdgM_ReadGlobalTransitionFlag, WdgM_ReadAndClearGlobalTransitionFlags,
 *         WdgM_WriteGlobalTransitionFlag, WdgM_Init, WdgM_MainFunction, WriteStateChangeRequest,
 *         ReadStateChangeRequest, BuildEntitiesStatus
 * \exclude Functions that accesses shared memory
 * \length SHORT Variables are set
 * \endexclusivearea
 */

#endif /* WDGM_H */

/**********************************************************************************************************************
 *  END OF FILE: WdgM.h
 *********************************************************************************************************************/
