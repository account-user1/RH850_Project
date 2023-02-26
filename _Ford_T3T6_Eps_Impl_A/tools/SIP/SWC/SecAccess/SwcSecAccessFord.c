/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of version logging area >>                DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  COPYRIGHT
 *  -------------------------------------------------------------------------------------------------------------------
 *  \verbatim
 *  Copyright (c) 2015 by Vector Informatik GmbH.                                                  All rights reserved.
 *
 *                This software is copyright protected and proprietary to Vector Informatik GmbH.
 *                Vector Informatik GmbH grants to you only those rights as set out in the license conditions.
 *                All other rights remain with Vector Informatik GmbH.
 *  \endverbatim
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -----------------------------------------------------------------------------------------------------------------*/
/**        \file  SwcSecAccessFord.c
 *        \brief  Security Access SWC
 *
 *      \details  Implementation of the Ford Security Access
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

/* PRQA S 0777, 0779 EOF */ /* MD_Rte_0777, MD_Rte_0779 */

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of version logging area >>                  DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *
 * AUTOSAR Modelling Object Descriptions
 *
 **********************************************************************************************************************

 Data Types:
 ===========
  Csm_ReturnType
    The data type Csm_ReturnType indicates the result of a service request.

  Csm_VerifyResultType
    The  data  type  Csm_VerifyResultType  indicates  the  result  of  a  verification operation (used by services MacVerify and SignatureVerify).

  Dcm_SecLevelType
    uint8 represents integers with a minimum value of 0 and a maximum value of 255.
     The order-relation on uint8 is: x < y if y - x is positive.
     uint8 has a lexical representation consisting of a finite-length sequence 
     of decimal digits (#x30-#x39).
     
     For example: 1, 0, 126, +10.

  MacVerifyDataBuffer
    Used as Buffer for service.

  RandomGenerateResultBuffer
    Used as Buffer for service.

  RandomSeedDataBuffer
    Used as Buffer for service.

  SymKeyType
    This type is used for Csm key parameters of type SymKey

 Operation Prototypes:
 =====================
  MacVerifyFinish of Port Interface CsmMacVerify
    This interface shall be used to finish the MAC verification service.

  MacVerifyStart of Port Interface CsmMacVerify
    This interface shall be used to initialize the MAC verification service of the CSM module.

  MacVerifyUpdate of Port Interface CsmMacVerify
    This interface shall be used to feed the MAC verification service with the input data.

  RandomGenerate of Port Interface CsmRandomGenerate
    This interface shall be used to start the random number generation service of the CSM module.

  RandomSeedFinish of Port Interface CsmRandomSeed
    This interface shall be used to finish the random seed service.

  RandomSeedStart of Port Interface CsmRandomSeed
    This interface shall be used to initialize the random seed service of the CSM module.

  RandomSeedUpdate of Port Interface CsmRandomSeed
    This interface shall be used to feed the random seed service with the input data.

 *********************************************************************************************************************/

#include "Rte_SwcSecAccessFord.h"

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "SwcSecAccessFord.h"
#include "SwcSecAccessFord_Cfg.h"

/**********************************************************************************************************************
 *  VERSION CHECK
 *********************************************************************************************************************/

 /* Check the version of the header file */
#if (  (SWCSECACCESSFORD_SW_MAJOR_VERSION != (1u)) \
    || (SWCSECACCESSFORD_SW_MINOR_VERSION != (1u)) \
    || (SWCSECACCESSFORD_SW_PATCH_VERSION != (0u)) )
  #error "Vendor specific version numbers of SwcSecAccessFord.c and SwcSecAccessFord.h are inconsistent"
#endif

/**********************************************************************************************************************
 *  LOCAL DATA TYPES AND STRUCTURES
 **********************************************************************************************************************/

/** State of operation (CSM) */
typedef enum
{
  CSMSTATE_INITIAL = 0u,     /**< Initial state */
  CSMSTATE_START,            /**< Trigger start function */
  CSMSTATE_START_PENDING,    /**< Wait for start function result */
  CSMSTATE_UPDATE,           /**< Trigger update function */
  CSMSTATE_UPDATE_PENDING,   /**< Wait for update function result */
  CSMSTATE_FINISH,           /**< Trigger finish function */
  CSMSTATE_FINISH_PENDING,   /**< Wait for finish function result */
  CSMSTATE_IDLE              /**< Idle state */
} Sec_CsmStateType;

/** State of entropy */
typedef enum
{
  ENTROPYSTATE_INVALID = 0u, /**< No entropy feed to RNG yet */
  ENTROPYSTATE_VALID         /**< Entropy feed to RNG at least once */
} Sec_EntropyStateType;

/** State Type */
typedef enum
{
  STATE_INITIAL = 0u,        /**< Initial state */
  STATE_OPERATION_PENDING,   /**< Operation is pending */
  STATE_VALID,               /**< Successful */
  STATE_INVALID              /**< Failed */
} Sec_StateType;

/** Operation Type */
typedef enum
{
  OPERATION_VERIFY = 0u,     /**< Verify operation */
  OPERATION_ENTROPY          /**< Entropy operation */
} Sec_OperationType;

/**********************************************************************************************************************
 *  LOCAL DATA PROTOTYPES
 **********************************************************************************************************************/

#define SwcSecAccessFord_START_SEC_VAR_ZERO_INIT_UNSPECIFIED
#include "SwcSecAccessFord_MemMap.h" /* PRQA S 5087 *//* MD_MSR_19.1 */

/** State of entropy operation feed into random number generator (CSM) */
static VAR(Sec_CsmStateType, SwcSecAccessFord_VAR_ZERO_INIT)     Sec_EntropyOp;
/** State of entropy */
static VAR(Sec_EntropyStateType, SwcSecAccessFord_VAR_ZERO_INIT) Sec_EntropyState;

/** State of seed generation */
static VAR(Sec_StateType, SwcSecAccessFord_VAR_ZERO_INIT)        Sec_SeedState;

/** State of MAC verification operation (CSM) */
static VAR(Sec_CsmStateType, SwcSecAccessFord_VAR_ZERO_INIT)     Sec_VerifyOp;
/** State of MAC verification */
static VAR(Sec_StateType, SwcSecAccessFord_VAR_ZERO_INIT)        Sec_VerifyState;

/** Current plain seed key value */
static VAR(UInt8, SwcSecAccessFord_VAR_ZERO_INIT)                Sec_CurrentPlainSeedKey[SWCSECACCESSFORD_SEED_LENGTH];

/** Buffer for the received key from tester */
static VAR(UInt8, SwcSecAccessFord_VAR_ZERO_INIT)                Sec_ReceivedKeyBuffer[SWCSECACCESSFORD_SECURITY_KEY_LENGTH];

/** Buffer to hold entropy feed into random number generator (CSM) */
static VAR(RandomSeedDataBuffer, SwcSecAccessFord_VAR_ZERO_INIT) Sec_EntropyBuffer;

/** Length of entropy feed into random number generator (CSM) */
static VAR(UInt32, SwcSecAccessFord_VAR_ZERO_INIT)               Sec_EntropyLength;

#define SwcSecAccessFord_STOP_SEC_VAR_ZERO_INIT_UNSPECIFIED
#include "SwcSecAccessFord_MemMap.h" /* PRQA S 5087 *//* MD_MSR_19.1 */

#define SwcSecAccessFord_START_SEC_VAR_NOINIT_UNSPECIFIED
#include "SwcSecAccessFord_MemMap.h" /* PRQA S 5087 *//* MD_MSR_19.1 */

/** Result of MAC verification */
static VAR(Csm_VerifyResultType, SwcSecAccessFord_VAR_NOINIT) Sec_MacVerifyResult;

/** Secret key buffer */
static VAR(SymKeyType, SwcSecAccessFord_VAR_NOINIT) Sec_SecretKeyBuffer;

/** Secret key data buffer */
static VAR(uint8, SwcSecAccessFord_VAR_NOINIT) Sec_SecretKeyDataBuffer[SWCSECACCESSFORD_SECRET_KEY_LENGTH];

static VAR(uint8, SwcSecAccessFord_VAR_NOINIT) Sec_SecretKeyDataBufferLength;

#define SwcSecAccessFord_STOP_SEC_VAR_NOINIT_UNSPECIFIED
#include "SwcSecAccessFord_MemMap.h" /* PRQA S 5087 *//* MD_MSR_19.1 */

/**********************************************************************************************************************
 *  LOCAL FUNCTION PROTOTYPES
 **********************************************************************************************************************/

#define SwcSecAccessFord_START_SEC_CODE
#include "SwcSecAccessFord_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

static FUNC(void, SwcSecAccessFord_CODE) SecurityAccess_TriggerState(
  P2VAR(Sec_CsmStateType, AUTOMATIC, RTE_SWCSECACCESSFORD_APPL_DATA) statePtr,
  Sec_OperationType operation,
  Csm_ReturnType retVal );

static FUNC(void, SwcSecAccessFord_CODE) SecurityAccess_TriggerProcessing(
  P2VAR(Sec_CsmStateType, AUTOMATIC, RTE_SWCSECACCESSFORD_APPL_DATA) statePtr,
  Sec_OperationType operation );

static FUNC(UInt8, SwcSecAccessFord_CODE) SecurityAccess_FunctionStart(
  P2CONST(Sec_CsmStateType, AUTOMATIC, RTE_SWCSECACCESSFORD_APPL_DATA) statePtr,
  Sec_OperationType operation );

static FUNC(UInt8, SwcSecAccessFord_CODE) SecurityAccess_FunctionUpdate(
  P2CONST(Sec_CsmStateType, AUTOMATIC, RTE_SWCSECACCESSFORD_APPL_DATA) statePtr,
  Sec_OperationType operation );

static FUNC(UInt8, SwcSecAccessFord_CODE) SecurityAccess_FunctionFinish(
  P2CONST(Sec_CsmStateType, AUTOMATIC, RTE_SWCSECACCESSFORD_APPL_DATA) statePtr,
  Sec_OperationType operation );

static FUNC(Std_ReturnType, SwcSecAccessFord_CODE) SecurityAccess_GetSeed(
  Dcm_OpStatusType OpStatus, P2VAR(UInt8, AUTOMATIC, RTE_SWCSECACCESSFORD_APPL_DATA) Seed,
  P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_SWCSECACCESSFORD_APPL_DATA) ErrorCode );

static FUNC(Std_ReturnType, SwcSecAccessFord_CODE) SecurityAccess_CompareKey(
  P2CONST(UInt8, AUTOMATIC, RTE_SWCSECACCESSFORD_APPL_DATA) key,
  P2CONST(UInt8, AUTOMATIC, RTE_SWCSECACCESSFORD_APPL_DATA) secretKey,
  Dcm_OpStatusType OpStatus );

#define SwcSecAccessFord_STOP_SEC_CODE
#include "SwcSecAccessFord_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of include and declaration area >>          DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *
 * Used AUTOSAR Data Types
 *
 **********************************************************************************************************************
 *
 * Primitive Types:
 * ================
 * UInt32: Integer in interval [0.0...0.0]
 * UInt8: Integer in interval [0.0...0.0]
 * uint8: Integer in interval [0...255] (standard type)
 *
 * Enumeration Types:
 * ==================
 * Csm_ReturnType: Enumeration of integer in interval [0...255] with enumerators
 *   CSM_E_OK (0U)
 *   CSM_E_NOT_OK (1U)
 *   CSM_E_BUSY (2U)
 *   CSM_E_SMALL_BUFFER (3U)
 *   CSM_E_ENTROPY_EXHAUSTION (4U)
 * Csm_VerifyResultType: Enumeration of integer in interval [0...255] with enumerators
 *   CSM_E_VER_OK (0U)
 *   CSM_E_VER_NOT_OK (1U)
 * Dcm_NegativeResponseCodeType: Enumeration of integer in interval [0...255] with enumerators
 *   DCM_E_POSITIVERESPONSE (0U)
 *   DCM_E_GENERALREJECT (16U)
 *   DCM_E_SERVICENOTSUPPORTED (17U)
 *   DCM_E_SUBFUNCTIONNOTSUPPORTED (18U)
 *   DCM_E_INCORRECTMESSAGELENGTHORINVALIDFORMAT (19U)
 *   DCM_E_RESPONSETOOLONG (20U)
 *   DCM_E_BUSYREPEATREQUEST (33U)
 *   DCM_E_CONDITIONSNOTCORRECT (34U)
 *   DCM_E_REQUESTSEQUENCEERROR (36U)
 *   DCM_E_NORESPONSEFROMSUBNETCOMPONENT (37U)
 *   DCM_E_FAILUREPREVENTSEXECUTIONOFREQUESTEDACTION (38U)
 *   DCM_E_REQUESTOUTOFRANGE (49U)
 *   DCM_E_SECURITYACCESSDENIED (51U)
 *   DCM_E_INVALIDKEY (53U)
 *   DCM_E_EXCEEDNUMBEROFATTEMPTS (54U)
 *   DCM_E_REQUIREDTIMEDELAYNOTEXPIRED (55U)
 *   DCM_E_UPLOADDOWNLOADNOTACCEPTED (112U)
 *   DCM_E_TRANSFERDATASUSPENDED (113U)
 *   DCM_E_GENERALPROGRAMMINGFAILURE (114U)
 *   DCM_E_WRONGBLOCKSEQUENCECOUNTER (115U)
 *   DCM_E_REQUESTCORRECTLYRECEIVEDRESPONSEPENDING (120U)
 *   DCM_E_SUBFUNCTIONNOTSUPPORTEDINACTIVESESSION (126U)
 *   DCM_E_SERVICENOTSUPPORTEDINACTIVESESSION (127U)
 *   DCM_E_RPMTOOHIGH (129U)
 *   DCM_E_RPMTOOLOW (130U)
 *   DCM_E_ENGINEISRUNNING (131U)
 *   DCM_E_ENGINEISNOTRUNNING (132U)
 *   DCM_E_ENGINERUNTIMETOOLOW (133U)
 *   DCM_E_TEMPERATURETOOHIGH (134U)
 *   DCM_E_TEMPERATURETOOLOW (135U)
 *   DCM_E_VEHICLESPEEDTOOHIGH (136U)
 *   DCM_E_VEHICLESPEEDTOOLOW (137U)
 *   DCM_E_THROTTLE_PEDALTOOHIGH (138U)
 *   DCM_E_THROTTLE_PEDALTOOLOW (139U)
 *   DCM_E_TRANSMISSIONRANGENOTINNEUTRAL (140U)
 *   DCM_E_TRANSMISSIONRANGENOTINGEAR (141U)
 *   DCM_E_BRAKESWITCH_NOTCLOSED (143U)
 *   DCM_E_SHIFTERLEVERNOTINPARK (144U)
 *   DCM_E_TORQUECONVERTERCLUTCHLOCKED (145U)
 *   DCM_E_VOLTAGETOOHIGH (146U)
 *   DCM_E_VOLTAGETOOLOW (147U)
 * Dcm_OpStatusType: Enumeration of integer in interval [0...255] with enumerators
 *   DCM_INITIAL (0U)
 *   DCM_PENDING (1U)
 *   DCM_CANCEL (2U)
 *   DCM_FORCE_RCRRP_OK (3U)
 *   DCM_FORCE_RCRRP_NOT_OK (64U)
 * Dcm_SecLevelType: Enumeration of integer in interval [0...255] with enumerators
 *   DCM_SEC_LEV_LOCKED (0U)
 *   DCM_SEC_LEV_L1 (1U)
 *   DCM_SEC_LEV_L2 (2U)
 *
 * Array Types:
 * ============
 * Dcm_Data12ByteType: Array with 12 element(s) of type uint8
 * Dcm_Data16ByteType: Array with 16 element(s) of type UInt8
 * MacVerifyDataBuffer: Array with 128 element(s) of type UInt8
 * RandomGenerateResultBuffer: Array with 128 element(s) of type UInt8
 * RandomSeedDataBuffer: Array with 128 element(s) of type UInt8
 * Rte_DT_SymKeyType_1: Array with 20 element(s) of type UInt8
 *
 * Record Types:
 * =============
 * SymKeyType: Record with elements
 *   length of type UInt32
 *   data of type Rte_DT_SymKeyType_1
 *
 *********************************************************************************************************************/

#define SwcSecAccessFord_START_SEC_CODE
#include "SwcSecAccessFord_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: SwcSecAccessFord_CallbackNotificationRandomGenerate
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <JobFinished> of PortPrototype <CsmCallbackRandomGenerate>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType SwcSecAccessFord_CallbackNotificationRandomGenerate(Csm_ReturnType retVal)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_CsmCallback_CSM_E_NOT_OK
 *
 *********************************************************************************************************************/

FUNC(Std_ReturnType, SwcSecAccessFord_CODE) SwcSecAccessFord_CallbackNotificationRandomGenerate(Csm_ReturnType retVal) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: SwcSecAccessFord_CallbackNotificationRandomGenerate (returns application error)
 *********************************************************************************************************************/

  /* Result of CSM operation */
  switch ( retVal )
  {
    case CSM_E_OK:
    {
      /* Operation successful */

      /* Check seed state */
      switch ( Sec_SeedState )
      {
        case STATE_OPERATION_PENDING:
        {
          /* Seed generation expected to be pending
             Value is now valid */
          Sec_SeedState = STATE_VALID;

          break;
        }
        default:
        {
          /* Notification is unexpected, seed value is invalid */
          Sec_SeedState = STATE_INVALID;

          break;
        }
      }

      break;
    }
    default:
    {
      /* Operation failed, seed value is invalid */
      Sec_SeedState = STATE_INVALID;

      break;
    }
  }

  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: SwcSecAccessFord_CallbackNotificationRandomSeed
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <JobFinished> of PortPrototype <CsmCallbackRandomSeed>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType SwcSecAccessFord_CallbackNotificationRandomSeed(Csm_ReturnType retVal)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_CsmCallback_CSM_E_NOT_OK
 *
 *********************************************************************************************************************/

FUNC(Std_ReturnType, SwcSecAccessFord_CODE) SwcSecAccessFord_CallbackNotificationRandomSeed(Csm_ReturnType retVal) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: SwcSecAccessFord_CallbackNotificationRandomSeed (returns application error)
 *********************************************************************************************************************/

  SecurityAccess_TriggerState( &Sec_EntropyOp, OPERATION_ENTROPY, retVal );

  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: SwcSecAccessFord_CallbackNotificationMacVerify
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <JobFinished> of PortPrototype <CsmCallbackMacVerify>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType SwcSecAccessFord_CallbackNotificationMacVerify(Csm_ReturnType retVal)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_CsmCallback_CSM_E_NOT_OK
 *
 *********************************************************************************************************************/

FUNC(Std_ReturnType, SwcSecAccessFord_CODE) SwcSecAccessFord_CallbackNotificationMacVerify(Csm_ReturnType retVal) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: SwcSecAccessFord_CallbackNotificationMacVerify (returns application error)
 *********************************************************************************************************************/

  SecurityAccess_TriggerState( &Sec_VerifyOp, OPERATION_VERIFY, retVal );

  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: SwcSecAccessFord_CompareKey_L3
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <CompareKey> of PortPrototype <SecurityAccessL3>
 *
 **********************************************************************************************************************
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_CsmMacVerify_MacVerifyFinish(const UInt8 *MacBuffer, UInt32 MacLength, Csm_VerifyResultType *resultBuffer)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_CsmMacVerify_CSM_E_BUSY, RTE_E_CsmMacVerify_CSM_E_NOT_OK, RTE_E_CsmMacVerify_CSM_E_SMALL_BUFFER
 *   Std_ReturnType Rte_Call_CsmMacVerify_MacVerifyStart(const SymKeyType *key)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_CsmMacVerify_CSM_E_BUSY, RTE_E_CsmMacVerify_CSM_E_NOT_OK
 *   Std_ReturnType Rte_Call_CsmMacVerify_MacVerifyUpdate(const UInt8 *dataBuffer, UInt32 dataLength)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_CsmMacVerify_CSM_E_BUSY, RTE_E_CsmMacVerify_CSM_E_NOT_OK
 *   Std_ReturnType Rte_Call_SecurityAccessDCMServices_GetSecurityLevel(Dcm_SecLevelType *SecLevel)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_SecurityAccessDCMServices_E_NOT_OK
 *   Std_ReturnType Rte_Call_SecurityAccessDCMServices_GetSecurityLevelFixedBytes(Dcm_SecLevelType SecLevel, uint8 *FixedBytes, uint8 *BufferSize)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_SecurityAccessDCMServices_DCM_E_BUFFERTOOLOW, RTE_E_SecurityAccessDCMServices_E_NOT_OK
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType SwcSecAccessFord_CompareKey_L3(const UInt8 *Key, Dcm_OpStatusType OpStatus, Dcm_NegativeResponseCodeType *ErrorCode)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_SecurityAccess_DCM_E_COMPARE_KEY_FAILED
 *   RTE_E_SecurityAccess_DCM_E_PENDING
 *   RTE_E_SecurityAccess_E_NOT_OK
 *
 *********************************************************************************************************************/

#ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, SwcSecAccessFord_CODE) SwcSecAccessFord_CompareKey_L3(P2CONST(UInt8, AUTOMATIC, RTE_SWCSECACCESSFORD_APPL_DATA) Key, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_SWCSECACCESSFORD_APPL_VAR) ErrorCode) /* PRQA S 0850 */ /* MD_MSR_19.8 */
#else
FUNC(Std_ReturnType, SwcSecAccessFord_CODE) SwcSecAccessFord_CompareKey_L3(P2CONST(Dcm_Data16ByteType, AUTOMATIC, RTE_SWCSECACCESSFORD_APPL_DATA) Key, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_SWCSECACCESSFORD_APPL_VAR) ErrorCode) /* PRQA S 0850 */ /* MD_MSR_19.8 */
#endif
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: SwcSecAccessFord_CompareKey_L3 (returns application error)
 *********************************************************************************************************************/

  (void)ErrorCode; /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */

  Sec_SecretKeyDataBufferLength = sizeof(Sec_SecretKeyDataBuffer);
  Rte_Call_SecurityAccessDCMServices_GetSecurityLevelFixedBytes(DCM_SEC_LEV_L2, Sec_SecretKeyDataBuffer, &Sec_SecretKeyDataBufferLength);

  return SecurityAccess_CompareKey((P2CONST(UInt8, AUTOMATIC, RTE_SWCSECACCESSFORD_APPL_DATA))Key, Sec_SecretKeyDataBuffer, OpStatus);

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: SwcSecAccessFord_GetSeed_L3
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <GetSeed> of PortPrototype <SecurityAccessL3>
 *
 **********************************************************************************************************************
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_CsmRandomGenerate_RandomGenerate(UInt8 *resultBuffer, UInt32 resultLength)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_CsmRandomGenerate_CSM_E_BUSY, RTE_E_CsmRandomGenerate_CSM_E_ENTROPY_EXHAUSTION, RTE_E_CsmRandomGenerate_CSM_E_NOT_OK
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType SwcSecAccessFord_GetSeed_L3(Dcm_OpStatusType OpStatus, UInt8 *Seed, Dcm_NegativeResponseCodeType *ErrorCode)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_SecurityAccess_DCM_E_PENDING
 *   RTE_E_SecurityAccess_E_NOT_OK
 *
 *********************************************************************************************************************/

#ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, SwcSecAccessFord_CODE) SwcSecAccessFord_GetSeed_L3(Dcm_OpStatusType OpStatus, P2VAR(UInt8, AUTOMATIC, RTE_SWCSECACCESSFORD_APPL_VAR) Seed, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_SWCSECACCESSFORD_APPL_VAR) ErrorCode) /* PRQA S 0850 */ /* MD_MSR_19.8 */
#else
FUNC(Std_ReturnType, SwcSecAccessFord_CODE) SwcSecAccessFord_GetSeed_L3(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data16ByteType, AUTOMATIC, RTE_SWCSECACCESSFORD_APPL_VAR) Seed, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_SWCSECACCESSFORD_APPL_VAR) ErrorCode) /* PRQA S 0850 */ /* MD_MSR_19.8 */
#endif
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: SwcSecAccessFord_GetSeed_L3 (returns application error)
 *********************************************************************************************************************/

  /* Generate seed value */
  return SecurityAccess_GetSeed(OpStatus, Seed, ErrorCode);

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: SwcSecAccessFord_Init
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 *********************************************************************************************************************/

FUNC(void, SwcSecAccessFord_CODE) SwcSecAccessFord_Init(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: SwcSecAccessFord_Init
 *********************************************************************************************************************/

  /* Initialize states */
  Sec_EntropyOp     = CSMSTATE_INITIAL;
  Sec_EntropyState  = ENTROPYSTATE_INVALID;

  Sec_SeedState     = STATE_INITIAL;

  Sec_VerifyOp      = CSMSTATE_INITIAL;
  Sec_VerifyState   = STATE_INITIAL;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: SwcSecAccessFord_MainFunction
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on TimingEvent every 10ms
 *
 **********************************************************************************************************************
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_CsmRandomSeed_RandomSeedFinish(void)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_CsmRandomSeed_CSM_E_BUSY, RTE_E_CsmRandomSeed_CSM_E_NOT_OK, RTE_E_CsmRandomSeed_CSM_E_SMALL_BUFFER
 *   Std_ReturnType Rte_Call_CsmRandomSeed_RandomSeedStart(void)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_CsmRandomSeed_CSM_E_BUSY, RTE_E_CsmRandomSeed_CSM_E_NOT_OK
 *   Std_ReturnType Rte_Call_CsmRandomSeed_RandomSeedUpdate(const UInt8 *seedBuffer, UInt32 seedLength)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_CsmRandomSeed_CSM_E_BUSY, RTE_E_CsmRandomSeed_CSM_E_NOT_OK
 *
 *********************************************************************************************************************/

FUNC(void, SwcSecAccessFord_CODE) SwcSecAccessFord_MainFunction(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: SwcSecAccessFord_MainFunction
 *********************************************************************************************************************/

  /* Check entropy and verification state */
  SecurityAccess_TriggerProcessing( &Sec_EntropyOp, OPERATION_ENTROPY );
  SecurityAccess_TriggerProcessing( &Sec_VerifyOp, OPERATION_VERIFY );

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: SwcSecAccessFord_ProvideEntropy
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ProvideEntropy> of PortPrototype <SwcSecAccessFord_ProvideEntropy>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType SwcSecAccessFord_ProvideEntropy(const UInt8 *seedPtr, UInt32 seedLength)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_SwcSecAccessFord_ProvideEntropy_E_BUSY
 *   RTE_E_SwcSecAccessFord_ProvideEntropy_E_NOT_OK
 *
 *********************************************************************************************************************/

#ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, SwcSecAccessFord_CODE) SwcSecAccessFord_ProvideEntropy(P2CONST(UInt8, AUTOMATIC, RTE_SWCSECACCESSFORD_APPL_DATA) seedPtr, UInt32 seedLength) /* PRQA S 0850 */ /* MD_MSR_19.8 */
#else
FUNC(Std_ReturnType, SwcSecAccessFord_CODE) SwcSecAccessFord_ProvideEntropy(P2CONST(RandomSeedDataBuffer, AUTOMATIC, RTE_SWCSECACCESSFORD_APPL_DATA) seedPtr, UInt32 seedLength) /* PRQA S 0850 */ /* MD_MSR_19.8 */
#endif
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: SwcSecAccessFord_ProvideEntropy (returns application error)
 *********************************************************************************************************************/

  Std_ReturnType result = RTE_E_SwcSecAccessFord_ProvideEntropy_E_NOT_OK;
  uint16_least index;

  /* Provided entropy fits into temporary buffer? */
  if ( seedLength <= sizeof(Sec_EntropyBuffer) )
  {
    /* Check entropy state */
    switch ( Sec_EntropyOp )
    {
      case CSMSTATE_INITIAL:
      case CSMSTATE_IDLE:
      {

        /* Idle, feed entropy into RNG */
        /* Copy provided data into temporary buffer */
        for ( index = 0; index < seedLength; index++ )
        {
          Sec_EntropyBuffer[index] = seedPtr[index];
        }

        /* Set seed length */
        Sec_EntropyLength = seedLength;
        /* Set state to start */
        Sec_EntropyOp     = CSMSTATE_START;

        /* Operation successful */
        result = RTE_E_OK;

        break;
      }
      default:
      {
        /* Operation in progress, try again */
        result = RTE_E_SwcSecAccessFord_ProvideEntropy_E_BUSY;
      }
    }
  }

  return result;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

#define SwcSecAccessFord_STOP_SEC_CODE
#include "SwcSecAccessFord_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of function definition area >>            DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

#define SwcSecAccessFord_START_SEC_CODE
#include "SwcSecAccessFord_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/***********************************************************************************************************************
 *  SecurityAccess_GetSeed
 **********************************************************************************************************************/
static FUNC(Std_ReturnType, SwcSecAccessFord_CODE) SecurityAccess_GetSeed(
  Dcm_OpStatusType OpStatus, P2VAR(UInt8, AUTOMATIC, RTE_SWCSECACCESSFORD_APPL_DATA) Seed,
  P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_SWCSECACCESSFORD_APPL_DATA) ErrorCode) /* PRQA S 0850 *//* MD_MSR_19.8 */
{

  Std_ReturnType result = RTE_E_SecurityAccess_E_NOT_OK;
  /* Access seed value as byte array */
  P2VAR(UInt8, AUTOMATIC, RTE_SWCSECACCESSFORD_APPL_DATA) pSeedByte = (P2VAR(UInt8, AUTOMATIC, RTE_SWCSECACCESSFORD_APPL_DATA))Seed;
  uint8_least index;

  /* Avoid compiler warnings on unused function parameters */
  (void)OpStatus;  /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */
  (void)ErrorCode; /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */

#if defined( SWCSECACCESSFORD_CSM_SYNC_JOB_PROCESSING )
  do
#endif /* SWCSECACCESSFORD_CSM_SYNC_JOB_PROCESSING */
  {
    /* Handle current seed state */
    switch ( Sec_SeedState )
    {
      /* Start generating new seed value */
      case STATE_INITIAL:
      {
        /* Entropy feed into RNG at least once? */
        if ( Sec_EntropyState == ENTROPYSTATE_VALID )
        {
          /* Trigger random number generation */
          switch ( Rte_Call_CsmRandomGenerate_RandomGenerate( Sec_CurrentPlainSeedKey, SWCSECACCESSFORD_SEED_LENGTH ) )
          {
            case CSM_E_OK:
            {
              /* Generation pending (asynchronous CSM) or successful (synchronous CSM) */
              Sec_SeedState = STATE_OPERATION_PENDING;

              result = RTE_E_SecurityAccess_DCM_E_PENDING;

              break;
            }
            case CSM_E_BUSY:
            {
              /* CSM busy, try again */
              result = RTE_E_SecurityAccess_DCM_E_PENDING;

              break;
            }
            default:
            {
              /* Operation failed */
              result = E_NOT_OK;

              break;
            }
          }
        }
        else
        {
          switch ( Sec_EntropyOp )
          {
            case CSMSTATE_INITIAL:
            case CSMSTATE_IDLE:
            {
              /* No entropy operation pending */
              result = E_NOT_OK;

              break;
            }
            default:
            {
              /* Entropy operation pending, try again */
              result = RTE_E_SecurityAccess_DCM_E_PENDING;

              break;
            }
          }
        }

        break;
      }
      case STATE_OPERATION_PENDING:
#if defined( SWCSECACCESSFORD_CSM_ASYNC_JOB_PROCESSING )
      {
        /* Random number generation not finished yet, try again */
        result = RTE_E_SecurityAccess_DCM_E_PENDING;

        break;
      }
#else
      /* Directly return generated value */
#endif /* SWCSECACCESSFORD_CSM_ASYNC_JOB_PROCESSING */
      case STATE_VALID:
      {
        /* Key generation finished */
        /* Copy current seed value to output */
        for ( index = 0u; index < SWCSECACCESSFORD_SEED_LENGTH; index++ )
        {
          pSeedByte[index] = Sec_CurrentPlainSeedKey[index];
        }

        /* Operation successful */
        result = RTE_E_OK;

        /* Allow next seed request */
        Sec_SeedState = STATE_INITIAL;

        break;
      }
      case STATE_INVALID:
      default:
      {
        /* Seed generation failed or invalid state */
        /* Allow next seed request */
        Sec_SeedState = STATE_INITIAL;

        break;
      }
    }
  }
#if defined( SWCSECACCESSFORD_CSM_SYNC_JOB_PROCESSING )
  /* Repeat switch to directly return generated value */
  while (STATE_OPERATION_PENDING == Sec_SeedState);
#endif /* SWCSECACCESSFORD_CSM_SYNC_JOB_PROCESSING */

  return result;
}

/***********************************************************************************************************************
 *  SecurityAccess_CompareKey
 **********************************************************************************************************************/
static FUNC(Std_ReturnType, SwcSecAccessFord_CODE) SecurityAccess_CompareKey(
  P2CONST(UInt8, AUTOMATIC, RTE_SWCSECACCESSFORD_APPL_DATA) key,
  P2CONST(UInt8, AUTOMATIC, RTE_SWCSECACCESSFORD_APPL_DATA) secretKey,
  Dcm_OpStatusType OpStatus) /* PRQA S 0850 *//* MD_MSR_19.8 */
{
  Std_ReturnType result = RTE_E_SecurityAccess_E_NOT_OK;
  UInt8 i;

  /* Avoid compiler warnings on unused function parameters */
  (void)OpStatus; /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */

  /* Handle current verification state */
  switch ( Sec_VerifyState )
  {
    /* Start verify value */
    case STATE_INITIAL:
    {

      /* Store received key for verification */
      for ( i = 0; i < SWCSECACCESSFORD_SECURITY_KEY_LENGTH; i++ )
      {
        Sec_ReceivedKeyBuffer[i] = key[i];
      }

      /* Store key used for the MAC verification */
      for ( i = 0; i < SWCSECACCESSFORD_SECRET_KEY_LENGTH; i++ )
      {
        Sec_SecretKeyBuffer.data[i] = secretKey[i];
      }
      Sec_SecretKeyBuffer.length = SWCSECACCESSFORD_SECRET_KEY_LENGTH;

      Sec_VerifyOp = CSMSTATE_START;
      Sec_VerifyState = STATE_OPERATION_PENDING;
      result = RTE_E_SecurityAccess_DCM_E_PENDING;

      break;
    }
    case STATE_OPERATION_PENDING:
    {
      /* MAC verification not finished yet, try again */
      result = RTE_E_SecurityAccess_DCM_E_PENDING;

      break;
    }
    case STATE_VALID:
    {
      /* MAC verification was successful */
      result = RTE_E_OK;
      Sec_VerifyState = STATE_INITIAL;

      break;
    }
    case STATE_INVALID:
    {
      /* MAC verification failed */
      result = RTE_E_SecurityAccess_DCM_E_COMPARE_KEY_FAILED;
      Sec_VerifyState = STATE_INITIAL;

      break;
    }
    default:
    {
      /* Invalid state */
      Sec_VerifyState = STATE_INITIAL;

      break;
    }
  }

  return result;
}

/***********************************************************************************************************************
 *  SecurityAccess_TriggerState
 **********************************************************************************************************************/
static FUNC(void, SwcSecAccessFord_CODE) SecurityAccess_TriggerState(
  P2VAR(Sec_CsmStateType, AUTOMATIC, RTE_SWCSECACCESSFORD_APPL_DATA) statePtr,
  Sec_OperationType operation,
  Csm_ReturnType retVal)
{

  /* Result of CSM operation */
  switch ( retVal )
  {
    case CSM_E_OK:
    {
      /* Operation successful */

      /* Switch state */
      switch ( *statePtr )
      {
        case CSMSTATE_START_PENDING:
        {
          /* Start function finished, continue with update function */
          *statePtr = CSMSTATE_UPDATE;

          break;
        }
        case CSMSTATE_UPDATE_PENDING:
        {
          /* Update function finished, continue with finish function */
          *statePtr = CSMSTATE_FINISH;

          break;
        }
        case CSMSTATE_FINISH_PENDING:
        {
          /* Finish function finished, set state to idle */
          *statePtr = CSMSTATE_IDLE;

          if ( operation == OPERATION_VERIFY )
          {
            /* Interpret verification result */
            if ( Sec_MacVerifyResult == CSM_E_VER_OK )
            {
              Sec_VerifyState = STATE_VALID;
            }
            else
            {
              Sec_VerifyState = STATE_INVALID;
            }
          }
          else
          {
            /* Set entropy state to valid */
            Sec_EntropyState = ENTROPYSTATE_VALID;
          }

          break;
        }
        default:
        {
          /* Notification is unexpected, reset state */
          *statePtr = CSMSTATE_INITIAL;

          break;
        }
      }

      break;
    }
    default:
    {
      /* Operation failed, reset state */
      *statePtr = CSMSTATE_INITIAL;

      break;
    }
  }
}

/***********************************************************************************************************************
 *  SecurityAccess_TriggerProcessing
 **********************************************************************************************************************/
static FUNC(void, SwcSecAccessFord_CODE) SecurityAccess_TriggerProcessing(
  P2VAR(Sec_CsmStateType, AUTOMATIC, RTE_SWCSECACCESSFORD_APPL_DATA) statePtr,
  Sec_OperationType operation)
{

  /* Check state */
  switch ( *statePtr )
  {
    case CSMSTATE_START:
    {
      /* Start CSM function */
      switch ( SecurityAccess_FunctionStart( statePtr, operation ) )
      {
        case CSM_E_OK:
        {
#if defined( SWCSECACCESSFORD_CSM_ASYNC_JOB_PROCESSING )
          /* Wait for result of CSM start function */
          *statePtr = CSMSTATE_START_PENDING;
#else
          /* Continue with the update function */
          *statePtr = CSMSTATE_UPDATE;
#endif /* SWCSECACCESSFORD_CSM_ASYNC_JOB_PROCESSING */

          break;
        }
        case CSM_E_BUSY:
        {
          /* CSM busy, try again */
          break;
        }
        case CSM_E_NOT_OK:
        default:
        {
          /* Operation failed, reset state */
          *statePtr = CSMSTATE_INITIAL;

          break;
        }
      }

      break;
    }
    case CSMSTATE_UPDATE:
    {
      /* Call the update function */
      switch ( SecurityAccess_FunctionUpdate( statePtr, operation ) )
      {
        case CSM_E_OK:
        {
#if defined( SWCSECACCESSFORD_CSM_ASYNC_JOB_PROCESSING )
          /* Wait for result of the update function */
          *statePtr = CSMSTATE_UPDATE_PENDING;
#else
          /* Continue with the finish function */
          *statePtr = CSMSTATE_FINISH;
#endif /* SWCSECACCESSFORD_CSM_ASYNC_JOB_PROCESSING */

          break;
        }
        case CSM_E_BUSY:
        {
          /* CSM busy, try again */
          break;
        }
        case CSM_E_NOT_OK:
        default:
        {
          /* Operation failed, reset state */
          *statePtr = CSMSTATE_INITIAL;

          break;
        }
      }

      break;
    }
    case CSMSTATE_FINISH:
    {
      /* Call finish function */
      switch ( SecurityAccess_FunctionFinish( statePtr, operation ) )
      {
        case CSM_E_OK:
        {
#if defined( SWCSECACCESSFORD_CSM_ASYNC_JOB_PROCESSING )
          /* Wait for result of the finish function */
          *statePtr = CSMSTATE_FINISH_PENDING;
#else
          /* Finish function was successful */
          *statePtr     = CSMSTATE_IDLE;

          if ( statePtr == &Sec_VerifyOp )
          {
            /* Interpret verification result */
            if ( Sec_MacVerifyResult == CSM_E_VER_OK )
            {
              Sec_VerifyState = STATE_VALID;
            }
            else
            {
              Sec_VerifyState = STATE_INVALID;
            }
          }
          else
          {
            /* Remember seed request success */
            Sec_EntropyState  = ENTROPYSTATE_VALID;
          }
#endif /* SWCSECACCESSFORD_CSM_ASYNC_JOB_PROCESSING */

          break;
        }
        case CSM_E_BUSY:
        {
          /* CSM busy, try again */
          break;
        }
        case CSM_E_NOT_OK:
        default:
        {
          /* Operation failed, reset state */
          *statePtr = CSMSTATE_INITIAL;

          break;
        }
      }

      break;
    }
    default:
    {
      /* Nothing to do */
      break;
    }
  }

}

/***********************************************************************************************************************
 *  SecurityAccess_FunctionStart
 **********************************************************************************************************************/
static FUNC(UInt8, SwcSecAccessFord_CODE) SecurityAccess_FunctionStart(
  P2CONST(Sec_CsmStateType, AUTOMATIC, RTE_SWCSECACCESSFORD_APPL_DATA) statePtr,
  Sec_OperationType operation)
{
  UInt8 retVal;

  if ( operation == OPERATION_ENTROPY )
  {
    retVal = Rte_Call_CsmRandomSeed_RandomSeedStart();
  }
  else
  {
    retVal = Rte_Call_CsmMacVerify_MacVerifyStart( &Sec_SecretKeyBuffer );
  }

  return retVal;
}

/***********************************************************************************************************************
 *  SecurityAccess_FunctionUpdate
 **********************************************************************************************************************/
static FUNC(UInt8, SwcSecAccessFord_CODE) SecurityAccess_FunctionUpdate(
  P2CONST(Sec_CsmStateType, AUTOMATIC, RTE_SWCSECACCESSFORD_APPL_DATA) statePtr,
  Sec_OperationType operation)
{
  UInt8 retVal;

  if ( operation == OPERATION_ENTROPY )
  {
    retVal = Rte_Call_CsmRandomSeed_RandomSeedUpdate( Sec_EntropyBuffer, Sec_EntropyLength );
  }
  else
  {
    retVal = Rte_Call_CsmMacVerify_MacVerifyUpdate( Sec_CurrentPlainSeedKey, sizeof(Sec_CurrentPlainSeedKey) );
  }

  return retVal;
}

/***********************************************************************************************************************
 *  SecurityAccess_FunctionFinish
 **********************************************************************************************************************/
static FUNC(UInt8, SwcSecAccessFord_CODE) SecurityAccess_FunctionFinish(
  P2CONST(Sec_CsmStateType, AUTOMATIC, RTE_SWCSECACCESSFORD_APPL_DATA) statePtr,
  Sec_OperationType operation)
{
  UInt8 retVal;

  if ( operation == OPERATION_ENTROPY )
  {
    retVal = Rte_Call_CsmRandomSeed_RandomSeedFinish();
  }
  else
  {
    retVal = Rte_Call_CsmMacVerify_MacVerifyFinish( Sec_ReceivedKeyBuffer, sizeof(Sec_ReceivedKeyBuffer), &Sec_MacVerifyResult );
  }

  return retVal;
}

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of function definition area >>              DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of removed code area >>                   DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of removed code area >>                     DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/**********************************************************************************************************************
 MISRA 2004 violations and justifications
 *********************************************************************************************************************/

/* module specific MISRA deviations:
   MD_Rte_0777:  MISRA rule: 5.1
     Reason:     The defined RTE naming convention may result in identifiers with more than 31 characters. The compliance to this rule is under user's control.
                 This is covered in the MISRA C compliance section of the Rte specification.
     Risk:       Ambiguous identifiers can lead to compiler errors / warnings.
     Prevention: Verified during compile time. If the compiler reports an error or warning, the user has to rename the objects to be unique within the significant characters.

   MD_Rte_0779:  MISRA rule: 5.1
     Reason:     The defined RTE naming convention may result in identifiers with more than 31 characters. The compliance to this rule is under user's control.
                 This is covered in the MISRA C compliance section of the Rte specification.
     Risk:       Ambiguous identifiers can lead to compiler errors / warnings.
     Prevention: Verified during compile time. If the compiler reports an error or warning, the user has to rename the objects to be unique within the significant characters.

*/
